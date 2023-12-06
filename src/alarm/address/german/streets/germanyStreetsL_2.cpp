#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameL2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 200020:
    {
        returnValue = F("Lailenweg");
        break;
    }
    case 200021:
    {
        returnValue = F("Lailinger Str.");
        break;
    }
    case 200022:
    {
        returnValue = F("Lailingstr.");
        break;
    }
    case 200023:
    {
        returnValue = F("Laillinger Str.");
        break;
    }
    case 200024:
    {
        returnValue = F("Laimbach");
        break;
    }
    case 200025:
    {
        returnValue = F("Laimbacher Berg");
        break;
    }
    case 200026:
    {
        returnValue = F("Laimbacher Str.");
        break;
    }
    case 200027:
    {
        returnValue = F("Laimbacher Weg");
        break;
    }
    case 200028:
    {
        returnValue = F("Laimbergstr.");
        break;
    }
    case 200029:
    {
        returnValue = F("Laimbrink");
        break;
    }
    case 200030:
    {
        returnValue = F("Laimenstr.");
        break;
    }
    case 200031:
    {
        returnValue = F("Laimer Platz");
        break;
    }
    case 200032:
    {
        returnValue = F("Laimer Str.");
        break;
    }
    case 200033:
    {
        returnValue = F("Laimeringer Str.");
        break;
    }
    case 200034:
    {
        returnValue = F("Laimersbach");
        break;
    }
    case 200035:
    {
        returnValue = F("Laimgasse");
        break;
    }
    case 200036:
    {
        returnValue = F("Laimgrub");
        break;
    }
    case 200037:
    {
        returnValue = F("Laimgrubenstr.");
        break;
    }
    case 200038:
    {
        returnValue = F("Laimgrubenweg");
        break;
    }
    case 200039:
    {
        returnValue = F("Laimgruber Str.");
        break;
    }
    case 200040:
    {
        returnValue = F("Laiminger Weg");
        break;
    }
    case 200041:
    {
        returnValue = F("Laimingerstr.");
        break;
    }
    case 200042:
    {
        returnValue = F("Laimweg");
        break;
    }
    case 200043:
    {
        returnValue = F("Lain");
        break;
    }
    case 200044:
    {
        returnValue = F("Lainbachstr.");
        break;
    }
    case 200045:
    {
        returnValue = F("Lainecker Str.");
        break;
    }
    case 200046:
    {
        returnValue = F("Lainenflecken");
        break;
    }
    case 200047:
    {
        returnValue = F("Lainerbuckel");
        break;
    }
    case 200048:
    {
        returnValue = F("Lainerstr.");
        break;
    }
    case 200049:
    {
        returnValue = F("Laingrubenweg");
        break;
    }
    case 200050:
    {
        returnValue = F("Lainsteinerstr.");
        break;
    }
    case 200051:
    {
        returnValue = F("Laintalstr.");
        break;
    }
    case 200052:
    {
        returnValue = F("Lainweg");
        break;
    }
    case 200053:
    {
        returnValue = F("Lairenstr.");
        break;
    }
    case 200054:
    {
        returnValue = F("Laireweg");
        break;
    }
    case 200055:
    {
        returnValue = F("Lairnenweg");
        break;
    }
    case 200056:
    {
        returnValue = F("Laisackerkopfweg");
        break;
    }
    case 200057:
    {
        returnValue = F("Laisackerweg");
        break;
    }
    case 200058:
    {
        returnValue = F("Laisaer Weg");
        break;
    }
    case 200059:
    {
        returnValue = F("Laisbachstr.");
        break;
    }
    case 200060:
    {
        returnValue = F("Laischaftsstr.");
        break;
    }
    case 200061:
    {
        returnValue = F("Laischeweg");
        break;
    }
    case 200062:
    {
        returnValue = F("Laisenbergweg");
        break;
    }
    case 200063:
    {
        returnValue = F("Laisentalstr.");
        break;
    }
    case 200064:
    {
        returnValue = F("Laistr.");
        break;
    }
    case 200065:
    {
        returnValue = F("Laisweg");
        break;
    }
    case 200066:
    {
        returnValue = F("Laite");
        break;
    }
    case 200067:
    {
        returnValue = F("Laitenbach");
        break;
    }
    case 200068:
    {
        returnValue = F("Laitenhof");
        break;
    }
    case 200069:
    {
        returnValue = F("Laitgai");
        break;
    }
    case 200070:
    {
        returnValue = F("Laitschenbach");
        break;
    }
    case 200071:
    {
        returnValue = F("Laitschenbachweg");
        break;
    }
    case 200072:
    {
        returnValue = F("Laitscher Weg");
        break;
    }
    case 200073:
    {
        returnValue = F("Laizer Str.");
        break;
    }
    case 200074:
    {
        returnValue = F("Laizer Weg");
        break;
    }
    case 200075:
    {
        returnValue = F("Laizer Öschle");
        break;
    }
    case 200076:
    {
        returnValue = F("Lajestr.");
        break;
    }
    case 200077:
    {
        returnValue = F("Lakabruck");
        break;
    }
    case 200078:
    {
        returnValue = F("Lakaienschäferei");
        break;
    }
    case 200079:
    {
        returnValue = F("Lake");
        break;
    }
    case 200080:
    {
        returnValue = F("Lakefeldplatz");
        break;
    }
    case 200081:
    {
        returnValue = F("Lakefeldstr.");
        break;
    }
    case 200082:
    {
        returnValue = F("Lakemannstr.");
        break;
    }
    case 200083:
    {
        returnValue = F("Lakemeierstr.");
        break;
    }
    case 200084:
    {
        returnValue = F("Lakenkuhle");
        break;
    }
    case 200085:
    {
        returnValue = F("Lakenmacherstr.");
        break;
    }
    case 200086:
    {
        returnValue = F("Lakenpohl");
        break;
    }
    case 200087:
    {
        returnValue = F("Lakenstiege");
        break;
    }
    case 200088:
    {
        returnValue = F("Lakenweg");
        break;
    }
    case 200089:
    {
        returnValue = F("Laker Weg");
        break;
    }
    case 200090:
    {
        returnValue = F("Lakestr.");
        break;
    }
    case 200091:
    {
        returnValue = F("Laketeilsweg");
        break;
    }
    case 200092:
    {
        returnValue = F("Lakeufer");
        break;
    }
    case 200093:
    {
        returnValue = F("Lakeweg");
        break;
    }
    case 200094:
    {
        returnValue = F("Lakgrabenweg");
        break;
    }
    case 200095:
    {
        returnValue = F("Lakomaer Chaussee");
        break;
    }
    case 200096:
    {
        returnValue = F("Lakomaer Dorfstr.");
        break;
    }
    case 200097:
    {
        returnValue = F("Lakomaer Str.");
        break;
    }
    case 200098:
    {
        returnValue = F("Lakomaer Weg");
        break;
    }
    case 200099:
    {
        returnValue = F("Lakronstr.");
        break;
    }
    case 200100:
    {
        returnValue = F("Laktenweg");
        break;
    }
    case 200101:
    {
        returnValue = F("Lakumer Str.");
        break;
    }
    case 200102:
    {
        returnValue = F("Lakweg");
        break;
    }
    case 200103:
    {
        returnValue = F("Lale-Andersen-Str.");
        break;
    }
    case 200104:
    {
        returnValue = F("Lalidererstr.");
        break;
    }
    case 200105:
    {
        returnValue = F("Lalidererweg");
        break;
    }
    case 200106:
    {
        returnValue = F("Lallewehrstr.");
        break;
    }
    case 200107:
    {
        returnValue = F("Lalling");
        break;
    }
    case 200108:
    {
        returnValue = F("Lamachstr.");
        break;
    }
    case 200109:
    {
        returnValue = F("Lamartinestr.");
        break;
    }
    case 200110:
    {
        returnValue = F("Lambach");
        break;
    }
    case 200111:
    {
        returnValue = F("Lambacher Berg");
        break;
    }
    case 200112:
    {
        returnValue = F("Lambacher Str.");
        break;
    }
    case 200113:
    {
        returnValue = F("Lambacher Weg");
        break;
    }
    case 200114:
    {
        returnValue = F("Lambachstr.");
        break;
    }
    case 200115:
    {
        returnValue = F("Lambachweg");
        break;
    }
    case 200116:
    {
        returnValue = F("Lambarenestr.");
        break;
    }
    case 200117:
    {
        returnValue = F("Lambareneweg");
        break;
    }
    case 200118:
    {
        returnValue = F("Lambecker Mühle");
        break;
    }
    case 200119:
    {
        returnValue = F("Lambeckstr.");
        break;
    }
    case 200120:
    {
        returnValue = F("Lambeer");
        break;
    }
    case 200121:
    {
        returnValue = F("Lamber Esch");
        break;
    }
    case 200122:
    {
        returnValue = F("Lamberg");
        break;
    }
    case 200123:
    {
        returnValue = F("Lamberger Str.");
        break;
    }
    case 200124:
    {
        returnValue = F("Lamberger Weg");
        break;
    }
    case 200125:
    {
        returnValue = F("Lambergstr.");
        break;
    }
    case 200126:
    {
        returnValue = F("Lambergweg");
        break;
    }
    case 200127:
    {
        returnValue = F("Lambergweg nach Chamerau");
        break;
    }
    case 200128:
    {
        returnValue = F("Lambernweg");
        break;
    }
    case 200129:
    {
        returnValue = F("Lambersartstr.");
        break;
    }
    case 200130:
    {
        returnValue = F("Lambert-Backer-Str.");
        break;
    }
    case 200131:
    {
        returnValue = F("Lambert-Hackmann-Str.");
        break;
    }
    case 200132:
    {
        returnValue = F("Lambert-Maaßen-Str.");
        break;
    }
    case 200133:
    {
        returnValue = F("Lambert-Nolle-Str.");
        break;
    }
    case 200134:
    {
        returnValue = F("Lambert-Rethmann.Platz");
        break;
    }
    case 200135:
    {
        returnValue = F("Lambert-Schlun-Weg");
        break;
    }
    case 200136:
    {
        returnValue = F("Lambert-Steinwich-Str.");
        break;
    }
    case 200137:
    {
        returnValue = F("Lambert-von-Büren-Str.");
        break;
    }
    case 200138:
    {
        returnValue = F("Lamberth-Klein-Weg");
        break;
    }
    case 200139:
    {
        returnValue = F("Lamberthushof");
        break;
    }
    case 200140:
    {
        returnValue = F("Lambertimarkt");
        break;
    }
    case 200141:
    {
        returnValue = F("Lambertiplatz");
        break;
    }
    case 200142:
    {
        returnValue = F("Lambertiring");
        break;
    }
    case 200143:
    {
        returnValue = F("Lambertistr.");
        break;
    }
    case 200144:
    {
        returnValue = F("Lambertiweg");
        break;
    }
    case 200145:
    {
        returnValue = F("Lambertring");
        break;
    }
    case 200146:
    {
        returnValue = F("Lambertsberg");
        break;
    }
    case 200147:
    {
        returnValue = F("Lambertsgarten");
        break;
    }
    case 200148:
    {
        returnValue = F("Lambertshof");
        break;
    }
    case 200149:
    {
        returnValue = F("Lambertskreuzstr.");
        break;
    }
    case 200150:
    {
        returnValue = F("Lambertsmühle");
        break;
    }
    case 200151:
    {
        returnValue = F("Lambertsneukirchner Str.");
        break;
    }
    case 200152:
    {
        returnValue = F("Lambertsstr.");
        break;
    }
    case 200153:
    {
        returnValue = F("Lambertstr.");
        break;
    }
    case 200154:
    {
        returnValue = F("Lambertsweg");
        break;
    }
    case 200155:
    {
        returnValue = F("Lamberturweg");
        break;
    }
    case 200156:
    {
        returnValue = F("Lambertus-Kirchplatz");
        break;
    }
    case 200157:
    {
        returnValue = F("Lambertusgasse");
        break;
    }
    case 200158:
    {
        returnValue = F("Lambertuspark");
        break;
    }
    case 200159:
    {
        returnValue = F("Lambertusplatz");
        break;
    }
    case 200160:
    {
        returnValue = F("Lambertusring");
        break;
    }
    case 200161:
    {
        returnValue = F("Lambertusstr.");
        break;
    }
    case 200162:
    {
        returnValue = F("Lambertusweg");
        break;
    }
    case 200163:
    {
        returnValue = F("Lambertweg");
        break;
    }
    case 200164:
    {
        returnValue = F("Lambertzweg");
        break;
    }
    case 200165:
    {
        returnValue = F("Lamboiweg");
        break;
    }
    case 200166:
    {
        returnValue = F("Lamboypark");
        break;
    }
    case 200167:
    {
        returnValue = F("Lamboystr.");
        break;
    }
    case 200168:
    {
        returnValue = F("Lambrachtweg");
        break;
    }
    case 200169:
    {
        returnValue = F("Lambrechter Str.");
        break;
    }
    case 200170:
    {
        returnValue = F("Lambrechtsdamm");
        break;
    }
    case 200171:
    {
        returnValue = F("Lambrechtshagen Ausbau");
        break;
    }
    case 200172:
    {
        returnValue = F("Lambrechtshof");
        break;
    }
    case 200173:
    {
        returnValue = F("Lambrechtshäger Str.");
        break;
    }
    case 200174:
    {
        returnValue = F("Lambrechtshäger Weg");
        break;
    }
    case 200175:
    {
        returnValue = F("Lambrechtstr.");
        break;
    }
    case 200176:
    {
        returnValue = F("Lambsbachbrücke");
        break;
    }
    case 200177:
    {
        returnValue = F("Lambsbachstr.");
        break;
    }
    case 200178:
    {
        returnValue = F("Lambsborner Str.");
        break;
    }
    case 200179:
    {
        returnValue = F("Lambsheimer Str.");
        break;
    }
    case 200180:
    {
        returnValue = F("Lambsheimer Weg");
        break;
    }
    case 200181:
    {
        returnValue = F("Lambziger Str.");
        break;
    }
    case 200182:
    {
        returnValue = F("Lamer Str.");
        break;
    }
    case 200183:
    {
        returnValue = F("Lamer-Winkel-Arber-Radweg");
        break;
    }
    case 200184:
    {
        returnValue = F("Lamerdener Str.");
        break;
    }
    case 200185:
    {
        returnValue = F("Lamerder Str.");
        break;
    }
    case 200186:
    {
        returnValue = F("Lamerder Weg");
        break;
    }
    case 200187:
    {
        returnValue = F("Lamerdingener Str.");
        break;
    }
    case 200188:
    {
        returnValue = F("Lamerong");
        break;
    }
    case 200189:
    {
        returnValue = F("Lamersdorfer Brücke");
        break;
    }
    case 200190:
    {
        returnValue = F("Lamersend");
        break;
    }
    case 200191:
    {
        returnValue = F("Lamersweg");
        break;
    }
    case 200192:
    {
        returnValue = F("Lametstr.");
        break;
    }
    case 200193:
    {
        returnValue = F("Lametweg");
        break;
    }
    case 200194:
    {
        returnValue = F("Lameyers Kamp");
        break;
    }
    case 200195:
    {
        returnValue = F("Lameygarten");
        break;
    }
    case 200196:
    {
        returnValue = F("Lameyplatz");
        break;
    }
    case 200197:
    {
        returnValue = F("Lameystr.");
        break;
    }
    case 200198:
    {
        returnValue = F("Lamferstr.");
        break;
    }
    case 200199:
    {
        returnValue = F("Lamfert");
        break;
    }
    case 200200:
    {
        returnValue = F("Lamfertweg");
        break;
    }
    case 200201:
    {
        returnValue = F("Lamichsiefen");
        break;
    }
    case 200202:
    {
        returnValue = F("Laminitweg");
        break;
    }
    case 200203:
    {
        returnValue = F("Lamitsch");
        break;
    }
    case 200204:
    {
        returnValue = F("Lamitzlohweg");
        break;
    }
    case 200205:
    {
        returnValue = F("Lamitzsteig");
        break;
    }
    case 200206:
    {
        returnValue = F("Lamitzstr.");
        break;
    }
    case 200207:
    {
        returnValue = F("Lamkenberg");
        break;
    }
    case 200208:
    {
        returnValue = F("Lamm-Gottes-Weg");
        break;
    }
    case 200209:
    {
        returnValue = F("Lammackerweg");
        break;
    }
    case 200210:
    {
        returnValue = F("Lammberg");
        break;
    }
    case 200211:
    {
        returnValue = F("Lammbergweg");
        break;
    }
    case 200212:
    {
        returnValue = F("Lammer");
        break;
    }
    case 200213:
    {
        returnValue = F("Lammer Busch");
        break;
    }
    case 200214:
    {
        returnValue = F("Lammer Heide");
        break;
    }
    case 200215:
    {
        returnValue = F("Lammerbach");
        break;
    }
    case 200216:
    {
        returnValue = F("Lammerbergstr.");
        break;
    }
    case 200217:
    {
        returnValue = F("Lammerhofstr.");
        break;
    }
    case 200218:
    {
        returnValue = F("Lammerhorst");
        break;
    }
    case 200219:
    {
        returnValue = F("Lammerichskaul");
        break;
    }
    case 200220:
    {
        returnValue = F("Lammerkamp");
        break;
    }
    case 200221:
    {
        returnValue = F("Lammerottweg");
        break;
    }
    case 200222:
    {
        returnValue = F("Lammers Damm");
        break;
    }
    case 200223:
    {
        returnValue = F("Lammers Kamp");
        break;
    }
    case 200224:
    {
        returnValue = F("Lammersberg");
        break;
    }
    case 200225:
    {
        returnValue = F("Lammersbrink");
        break;
    }
    case 200226:
    {
        returnValue = F("Lammersdorfer Str.");
        break;
    }
    case 200227:
    {
        returnValue = F("Lammersfeld");
        break;
    }
    case 200228:
    {
        returnValue = F("Lammersfelder Str.");
        break;
    }
    case 200229:
    {
        returnValue = F("Lammershörn");
        break;
    }
    case 200230:
    {
        returnValue = F("Lammerskjer");
        break;
    }
    case 200231:
    {
        returnValue = F("Lammerskopfweg");
        break;
    }
    case 200232:
    {
        returnValue = F("Lammerskreuzstr.");
        break;
    }
    case 200233:
    {
        returnValue = F("Lammersmannstr.");
        break;
    }
    case 200234:
    {
        returnValue = F("Lammersstr.");
        break;
    }
    case 200235:
    {
        returnValue = F("Lammerstr.");
        break;
    }
    case 200236:
    {
        returnValue = F("Lammersweg");
        break;
    }
    case 200237:
    {
        returnValue = F("Lammerswiese");
        break;
    }
    case 200238:
    {
        returnValue = F("Lammertsfehner Grenzstr.");
        break;
    }
    case 200239:
    {
        returnValue = F("Lammertsfehner Str.");
        break;
    }
    case 200240:
    {
        returnValue = F("Lammertsgasse");
        break;
    }
    case 200241:
    {
        returnValue = F("Lammertsheck");
        break;
    }
    case 200242:
    {
        returnValue = F("Lammertshörn");
        break;
    }
    case 200243:
    {
        returnValue = F("Lammertshütte");
        break;
    }
    case 200244:
    {
        returnValue = F("Lammertstr.");
        break;
    }
    case 200245:
    {
        returnValue = F("Lammertweg");
        break;
    }
    case 200246:
    {
        returnValue = F("Lammertzweg");
        break;
    }
    case 200247:
    {
        returnValue = F("Lammerweg");
        break;
    }
    case 200248:
    {
        returnValue = F("Lammestr.");
        break;
    }
    case 200249:
    {
        returnValue = F("Lammetal");
        break;
    }
    case 200250:
    {
        returnValue = F("Lammetshofweg");
        break;
    }
    case 200251:
    {
        returnValue = F("Lammgarten");
        break;
    }
    case 200252:
    {
        returnValue = F("Lammgasse");
        break;
    }
    case 200253:
    {
        returnValue = F("Lammgässsle");
        break;
    }
    case 200254:
    {
        returnValue = F("Lammhoe");
        break;
    }
    case 200255:
    {
        returnValue = F("Lammhof");
        break;
    }
    case 200256:
    {
        returnValue = F("Lammhofpassage");
        break;
    }
    case 200257:
    {
        returnValue = F("Lammhorn");
        break;
    }
    case 200258:
    {
        returnValue = F("Lammigt");
        break;
    }
    case 200259:
    {
        returnValue = F("Lammkellerweg");
        break;
    }
    case 200260:
    {
        returnValue = F("Lammkreisel");
        break;
    }
    case 200261:
    {
        returnValue = F("Lammpassage");
        break;
    }
    case 200262:
    {
        returnValue = F("Lammplatz");
        break;
    }
    case 200263:
    {
        returnValue = F("Lammsdorf");
        break;
    }
    case 200264:
    {
        returnValue = F("Lammsgasse");
        break;
    }
    case 200265:
    {
        returnValue = F("Lammstr.");
        break;
    }
    case 200266:
    {
        returnValue = F("Lammtwiete");
        break;
    }
    case 200267:
    {
        returnValue = F("Lammweg");
        break;
    }
    case 200268:
    {
        returnValue = F("Lammwirtsgasse");
        break;
    }
    case 200269:
    {
        returnValue = F("Lammwirtsgäßchen");
        break;
    }
    case 200270:
    {
        returnValue = F("Lammwirtsklingenweg");
        break;
    }
    case 200271:
    {
        returnValue = F("Lammwirtsmahd-Traufweg");
        break;
    }
    case 200272:
    {
        returnValue = F("Lammwirtsweg");
        break;
    }
    case 200273:
    {
        returnValue = F("Lamnitzer Str.");
        break;
    }
    case 200274:
    {
        returnValue = F("Lamontstr.");
        break;
    }
    case 200275:
    {
        returnValue = F("Lamp'sche Koppel");
        break;
    }
    case 200276:
    {
        returnValue = F("Lampach");
        break;
    }
    case 200277:
    {
        returnValue = F("Lampacherweg");
        break;
    }
    case 200278:
    {
        returnValue = F("Lampadiusgasse");
        break;
    }
    case 200279:
    {
        returnValue = F("Lampadiusring");
        break;
    }
    case 200280:
    {
        returnValue = F("Lampadiusstr.");
        break;
    }
    case 200281:
    {
        returnValue = F("Lamparter Steige");
        break;
    }
    case 200282:
    {
        returnValue = F("Lamparter-Park");
        break;
    }
    case 200283:
    {
        returnValue = F("Lamparterstr.");
        break;
    }
    case 200284:
    {
        returnValue = F("Lamparterweg");
        break;
    }
    case 200285:
    {
        returnValue = F("Lampartstr.");
        break;
    }
    case 200286:
    {
        returnValue = F("Lampebrücke");
        break;
    }
    case 200287:
    {
        returnValue = F("Lampegasse");
        break;
    }
    case 200288:
    {
        returnValue = F("Lampehof");
        break;
    }
    case 200289:
    {
        returnValue = F("Lampengasse");
        break;
    }
    case 200290:
    {
        returnValue = F("Lampenhainer Weg");
        break;
    }
    case 200291:
    {
        returnValue = F("Lampenkoppel");
        break;
    }
    case 200292:
    {
        returnValue = F("Lampennester Str.");
        break;
    }
    case 200293:
    {
        returnValue = F("Lampenort");
        break;
    }
    case 200294:
    {
        returnValue = F("Lampenputzerweg");
        break;
    }
    case 200295:
    {
        returnValue = F("Lampenskamp");
        break;
    }
    case 200296:
    {
        returnValue = F("Lampenstr.");
        break;
    }
    case 200297:
    {
        returnValue = F("Lampenweg");
        break;
    }
    case 200298:
    {
        returnValue = F("Lampernweg");
        break;
    }
    case 200299:
    {
        returnValue = F("Lampersberg");
        break;
    }
    case 200300:
    {
        returnValue = F("Lampersdorf");
        break;
    }
    case 200301:
    {
        returnValue = F("Lampersdorfer Str.");
        break;
    }
    case 200302:
    {
        returnValue = F("Lampertheimer Gescheid");
        break;
    }
    case 200303:
    {
        returnValue = F("Lampertheimer Str.");
        break;
    }
    case 200304:
    {
        returnValue = F("Lampertistr.");
        break;
    }
    case 200305:
    {
        returnValue = F("Lampertiweg");
        break;
    }
    case 200306:
    {
        returnValue = F("Lampertsbergweg");
        break;
    }
    case 200307:
    {
        returnValue = F("Lampertsbühl");
        break;
    }
    case 200308:
    {
        returnValue = F("Lampertsfeld");
        break;
    }
    case 200309:
    {
        returnValue = F("Lampertsgasse");
        break;
    }
    case 200310:
    {
        returnValue = F("Lampertsgraben");
        break;
    }
    case 200311:
    {
        returnValue = F("Lampertsham");
        break;
    }
    case 200312:
    {
        returnValue = F("Lampertshof");
        break;
    }
    case 200313:
    {
        returnValue = F("Lampertshofener Str.");
        break;
    }
    case 200314:
    {
        returnValue = F("Lampertshofener Weg");
        break;
    }
    case 200315:
    {
        returnValue = F("Lampertsstr.");
        break;
    }
    case 200316:
    {
        returnValue = F("Lampertsteig");
        break;
    }
    case 200317:
    {
        returnValue = F("Lampertstr.");
        break;
    }
    case 200318:
    {
        returnValue = F("Lampertswalder Str.");
        break;
    }
    case 200319:
    {
        returnValue = F("Lampertsweg");
        break;
    }
    case 200320:
    {
        returnValue = F("Lampertsweilerstr.");
        break;
    }
    case 200321:
    {
        returnValue = F("Lampertusweg");
        break;
    }
    case 200322:
    {
        returnValue = F("Lampertweg");
        break;
    }
    case 200323:
    {
        returnValue = F("Lamperweg");
        break;
    }
    case 200324:
    {
        returnValue = F("Lampes Winkel");
        break;
    }
    case 200325:
    {
        returnValue = F("Lampestr.");
        break;
    }
    case 200326:
    {
        returnValue = F("Lampesweg");
        break;
    }
    case 200327:
    {
        returnValue = F("Lampeweg");
        break;
    }
    case 200328:
    {
        returnValue = F("Lampferhofstr.");
        break;
    }
    case 200329:
    {
        returnValue = F("Lampfert");
        break;
    }
    case 200330:
    {
        returnValue = F("Lampferweg");
        break;
    }
    case 200331:
    {
        returnValue = F("Lampingstr.");
        break;
    }
    case 200332:
    {
        returnValue = F("Lamplmühlstr.");
        break;
    }
    case 200333:
    {
        returnValue = F("Lamplstr.");
        break;
    }
    case 200334:
    {
        returnValue = F("Lamplweg");
        break;
    }
    case 200335:
    {
        returnValue = F("Lampodinger Str.");
        break;
    }
    case 200336:
    {
        returnValue = F("Lampoldshausener Str.");
        break;
    }
    case 200337:
    {
        returnValue = F("Lampoldshauser Str.");
        break;
    }
    case 200338:
    {
        returnValue = F("Lampoldshäuser Str.");
        break;
    }
    case 200339:
    {
        returnValue = F("Lamprechtgasse");
        break;
    }
    case 200340:
    {
        returnValue = F("Lamprechtsgasse");
        break;
    }
    case 200341:
    {
        returnValue = F("Lamprechtstr.");
        break;
    }
    case 200342:
    {
        returnValue = F("Lamprechtswalde");
        break;
    }
    case 200343:
    {
        returnValue = F("Lamsberger Weg");
        break;
    }
    case 200344:
    {
        returnValue = F("Lamsbergweg");
        break;
    }
    case 200345:
    {
        returnValue = F("Lamscheider Weg");
        break;
    }
    case 200346:
    {
        returnValue = F("Lamsfelder Str.");
        break;
    }
    case 200347:
    {
        returnValue = F("Lamsfuß");
        break;
    }
    case 200348:
    {
        returnValue = F("Lamspringer Str.");
        break;
    }
    case 200349:
    {
        returnValue = F("Lamstedter Str.");
        break;
    }
    case 200350:
    {
        returnValue = F("Lamstedter Weg");
        break;
    }
    case 200351:
    {
        returnValue = F("Lamternstr.");
        break;
    }
    case 200352:
    {
        returnValue = F("Lana-Grossa-Kreisel");
        break;
    }
    case 200353:
    {
        returnValue = F("Lanaer Str.");
        break;
    }
    case 200354:
    {
        returnValue = F("Lanaweg");
        break;
    }
    case 200355:
    {
        returnValue = F("Lanbergweg");
        break;
    }
    case 200356:
    {
        returnValue = F("Lancasterstr.");
        break;
    }
    case 200357:
    {
        returnValue = F("Lancasterweg");
        break;
    }
    case 200358:
    {
        returnValue = F("Lancken-Granitz-Str.");
        break;
    }
    case 200359:
    {
        returnValue = F("Lanckener Ring");
        break;
    }
    case 200360:
    {
        returnValue = F("Lanckensburg");
        break;
    }
    case 200361:
    {
        returnValue = F("Lanckensburg-Ausbau");
        break;
    }
    case 200362:
    {
        returnValue = F("Land");
        break;
    }
    case 200363:
    {
        returnValue = F("Land-Au");
        break;
    }
    case 200364:
    {
        returnValue = F("Land-Wührdener-Str.");
        break;
    }
    case 200365:
    {
        returnValue = F("Landabsatz");
        break;
    }
    case 200366:
    {
        returnValue = F("Landackerweg");
        break;
    }
    case 200367:
    {
        returnValue = F("Landaisen");
        break;
    }
    case 200368:
    {
        returnValue = F("Landalle");
        break;
    }
    case 200369:
    {
        returnValue = F("Landart Projekt");
        break;
    }
    case 200370:
    {
        returnValue = F("Landaubogen");
        break;
    }
    case 200371:
    {
        returnValue = F("Landauer Hohl");
        break;
    }
    case 200372:
    {
        returnValue = F("Landauer Platz");
        break;
    }
    case 200373:
    {
        returnValue = F("Landauer Str.");
        break;
    }
    case 200374:
    {
        returnValue = F("Landauer Warte");
        break;
    }
    case 200375:
    {
        returnValue = F("Landauer Weg");
        break;
    }
    case 200376:
    {
        returnValue = F("Landauergasse");
        break;
    }
    case 200377:
    {
        returnValue = F("Landauerweg");
        break;
    }
    case 200378:
    {
        returnValue = F("Landaustr.");
        break;
    }
    case 200379:
    {
        returnValue = F("Landberg");
        break;
    }
    case 200380:
    {
        returnValue = F("Landbergblick");
        break;
    }
    case 200381:
    {
        returnValue = F("Landbergstr.");
        break;
    }
    case 200382:
    {
        returnValue = F("Landbergweg");
        break;
    }
    case 200383:
    {
        returnValue = F("Landblick");
        break;
    }
    case 200384:
    {
        returnValue = F("Landbotenweg");
        break;
    }
    case 200385:
    {
        returnValue = F("Landbrücke");
        break;
    }
    case 200386:
    {
        returnValue = F("Landdamm");
        break;
    }
    case 200387:
    {
        returnValue = F("Landdammstr.");
        break;
    }
    case 200388:
    {
        returnValue = F("Landdrost-Blaauboer-Str.");
        break;
    }
    case 200389:
    {
        returnValue = F("Landdrost-Grote-Str.");
        break;
    }
    case 200390:
    {
        returnValue = F("Landdrostenstr.");
        break;
    }
    case 200391:
    {
        returnValue = F("Landdrostenweg");
        break;
    }
    case 200392:
    {
        returnValue = F("Landdrostsche Huf");
        break;
    }
    case 200393:
    {
        returnValue = F("Landdroststr.");
        break;
    }
    case 200394:
    {
        returnValue = F("Landebach");
        break;
    }
    case 200395:
    {
        returnValue = F("Landebrücke 4");
        break;
    }
    case 200396:
    {
        returnValue = F("Landeckblick");
        break;
    }
    case 200397:
    {
        returnValue = F("Landecker Str.");
        break;
    }
    case 200398:
    {
        returnValue = F("Landecker Weg");
        break;
    }
    case 200399:
    {
        returnValue = F("Landeckerweg");
        break;
    }
    case 200400:
    {
        returnValue = F("Landeckring");
        break;
    }
    case 200401:
    {
        returnValue = F("Landeckstr.");
        break;
    }
    case 200402:
    {
        returnValue = F("Landeckweg");
        break;
    }
    case 200403:
    {
        returnValue = F("Landefelder Weg");
        break;
    }
    case 200404:
    {
        returnValue = F("Landelhofweg");
        break;
    }
    case 200405:
    {
        returnValue = F("Landelhöhenweg");
        break;
    }
    case 200406:
    {
        returnValue = F("Landemert");
        break;
    }
    case 200407:
    {
        returnValue = F("Landemerter Weg");
        break;
    }
    case 200408:
    {
        returnValue = F("Landenbergerstr.");
        break;
    }
    case 200409:
    {
        returnValue = F("Landenbergstr.");
        break;
    }
    case 200410:
    {
        returnValue = F("Landenhäuser Str.");
        break;
    }
    case 200411:
    {
        returnValue = F("Landenwiesenstr.");
        break;
    }
    case 200412:
    {
        returnValue = F("Landerbach");
        break;
    }
    case 200413:
    {
        returnValue = F("Landerdamm");
        break;
    }
    case 200414:
    {
        returnValue = F("Landerer Trail");
        break;
    }
    case 200415:
    {
        returnValue = F("Landerham");
        break;
    }
    case 200416:
    {
        returnValue = F("Landerhauser Weg");
        break;
    }
    case 200417:
    {
        returnValue = F("Landerneau-Allee");
        break;
    }
    case 200418:
    {
        returnValue = F("Landernweg");
        break;
    }
    case 200419:
    {
        returnValue = F("Landerpfad");
        break;
    }
    case 200420:
    {
        returnValue = F("Landersdorf");
        break;
    }
    case 200421:
    {
        returnValue = F("Landershausener Str.");
        break;
    }
    case 200422:
    {
        returnValue = F("Landersstr.");
        break;
    }
    case 200423:
    {
        returnValue = F("Landerstr.");
        break;
    }
    case 200424:
    {
        returnValue = F("Landersum");
        break;
    }
    case 200425:
    {
        returnValue = F("Landersumer Weg");
        break;
    }
    case 200426:
    {
        returnValue = F("Landertweg");
        break;
    }
    case 200427:
    {
        returnValue = F("Landerweg");
        break;
    }
    case 200428:
    {
        returnValue = F("Landerzhofener Str.");
        break;
    }
    case 200429:
    {
        returnValue = F("Landesacker");
        break;
    }
    case 200430:
    {
        returnValue = F("Landesbahnstr.");
        break;
    }
    case 200431:
    {
        returnValue = F("Landesberg");
        break;
    }
    case 200432:
    {
        returnValue = F("Landesberger Str.");
        break;
    }
    case 200433:
    {
        returnValue = F("Landesbrandmeister-Bever-Str.");
        break;
    }
    case 200434:
    {
        returnValue = F("Landesbreite");
        break;
    }
    case 200435:
    {
        returnValue = F("Landesbrück");
        break;
    }
    case 200436:
    {
        returnValue = F("Landesbrücker Str.");
        break;
    }
    case 200437:
    {
        returnValue = F("Landesgartenschau 2008");
        break;
    }
    case 200438:
    {
        returnValue = F("Landesgartenschau 2020");
        break;
    }
    case 200439:
    {
        returnValue = F("Landesgartenschau Gelände");
        break;
    }
    case 200440:
    {
        returnValue = F("Landesgartenschau-Gelände");
        break;
    }
    case 200441:
    {
        returnValue = F("Landesgartenschau-Gelände 2018");
        break;
    }
    case 200442:
    {
        returnValue = F("Landesgartenschau-Park");
        break;
    }
    case 200443:
    {
        returnValue = F("Landesgrenze");
        break;
    }
    case 200444:
    {
        returnValue = F("Landesgrenzweg");
        break;
    }
    case 200445:
    {
        returnValue = F("Landeshausstr.");
        break;
    }
    case 200446:
    {
        returnValue = F("Landeshuter Platz");
        break;
    }
    case 200447:
    {
        returnValue = F("Landeshuter Str.");
        break;
    }
    case 200448:
    {
        returnValue = F("Landeshuter Weg");
        break;
    }
    case 200449:
    {
        returnValue = F("Landeshäuser Str.");
        break;
    }
    case 200450:
    {
        returnValue = F("Landesjagdverband Schießstand");
        break;
    }
    case 200451:
    {
        returnValue = F("Landeskrone");
        break;
    }
    case 200452:
    {
        returnValue = F("Landeskronstr.");
        break;
    }
    case 200453:
    {
        returnValue = F("Landesrabbiner-Holdheim-Str.");
        break;
    }
    case 200454:
    {
        returnValue = F("Landessiedlung");
        break;
    }
    case 200455:
    {
        returnValue = F("Landesstr.");
        break;
    }
    case 200456:
    {
        returnValue = F("Landesstr. 316");
        break;
    }
    case 200457:
    {
        returnValue = F("Landesstr. A");
        break;
    }
    case 200458:
    {
        returnValue = F("Landestr.");
        break;
    }
    case 200459:
    {
        returnValue = F("Landesverband der Gartenfreunde Bremen e. V.");
        break;
    }
    case 200460:
    {
        returnValue = F("Landeswarfen");
        break;
    }
    case 200461:
    {
        returnValue = F("Landesweg");
        break;
    }
    case 200462:
    {
        returnValue = F("Landfeldweg");
        break;
    }
    case 200463:
    {
        returnValue = F("Landfermannstr.");
        break;
    }
    case 200464:
    {
        returnValue = F("Landfeste");
        break;
    }
    case 200465:
    {
        returnValue = F("Landforsthaus");
        break;
    }
    case 200466:
    {
        returnValue = F("Landforstmeister Steinecke Weg");
        break;
    }
    case 200467:
    {
        returnValue = F("Landfrauenpark");
        break;
    }
    case 200468:
    {
        returnValue = F("Landfrauenstr.");
        break;
    }
    case 200469:
    {
        returnValue = F("Landfridstr.");
        break;
    }
    case 200470:
    {
        returnValue = F("Landfried");
        break;
    }
    case 200471:
    {
        returnValue = F("Landfriedbühl");
        break;
    }
    case 200472:
    {
        returnValue = F("Landfriedensstr.");
        break;
    }
    case 200473:
    {
        returnValue = F("Landfriedstr.");
        break;
    }
    case 200474:
    {
        returnValue = F("Landfuhrbrücke");
        break;
    }
    case 200475:
    {
        returnValue = F("Landfurt");
        break;
    }
    case 200476:
    {
        returnValue = F("Landgang");
        break;
    }
    case 200477:
    {
        returnValue = F("Landgarbweg");
        break;
    }
    case 200478:
    {
        returnValue = F("Landgartenstr.");
        break;
    }
    case 200479:
    {
        returnValue = F("Landgasse");
        break;
    }
    case 200480:
    {
        returnValue = F("Landgemeinde");
        break;
    }
    case 200481:
    {
        returnValue = F("Landgericht");
        break;
    }
    case 200482:
    {
        returnValue = F("Landgerichtsgasse");
        break;
    }
    case 200483:
    {
        returnValue = F("Landgerichtsstr.");
        break;
    }
    case 200484:
    {
        returnValue = F("Landgerichtstr.");
        break;
    }
    case 200485:
    {
        returnValue = F("Landgerichtsweg");
        break;
    }
    case 200486:
    {
        returnValue = F("Landgestütstr.");
        break;
    }
    case 200487:
    {
        returnValue = F("Landgraben");
        break;
    }
    case 200488:
    {
        returnValue = F("Landgrabenbrücke");
        break;
    }
    case 200489:
    {
        returnValue = F("Landgrabener Weg");
        break;
    }
    case 200490:
    {
        returnValue = F("Landgrabenhof");
        break;
    }
    case 200491:
    {
        returnValue = F("Landgrabenpromenade");
        break;
    }
    case 200492:
    {
        returnValue = F("Landgrabenschneise");
        break;
    }
    case 200493:
    {
        returnValue = F("Landgrabenstr.");
        break;
    }
    case 200494:
    {
        returnValue = F("Landgrabentrift");
        break;
    }
    case 200495:
    {
        returnValue = F("Landgrabenweg");
        break;
    }
    case 200496:
    {
        returnValue = F("Landgraf-Balthasar-Weg");
        break;
    }
    case 200497:
    {
        returnValue = F("Landgraf-Carl-Weg");
        break;
    }
    case 200498:
    {
        returnValue = F("Landgraf-Friedrich-Platz");
        break;
    }
    case 200499:
    {
        returnValue = F("Landgraf-Friedrich-Str.");
        break;
    }
    case 200500:
    {
        returnValue = F("Landgraf-Georg-Str.");
        break;
    }
    case 200501:
    {
        returnValue = F("Landgraf-Gustav-Ring");
        break;
    }
    case 200502:
    {
        returnValue = F("Landgraf-Heinrich-Str.");
        break;
    }
    case 200503:
    {
        returnValue = F("Landgraf-Hermann-Str.");
        break;
    }
    case 200504:
    {
        returnValue = F("Landgraf-Johann-Str.");
        break;
    }
    case 200505:
    {
        returnValue = F("Landgraf-Karl-Str.");
        break;
    }
    case 200506:
    {
        returnValue = F("Landgraf-Moritz-Str.");
        break;
    }
    case 200507:
    {
        returnValue = F("Landgraf-Philipp-Park");
        break;
    }
    case 200508:
    {
        returnValue = F("Landgraf-Philipp-Platz");
        break;
    }
    case 200509:
    {
        returnValue = F("Landgraf-Philipp-Ring");
        break;
    }
    case 200510:
    {
        returnValue = F("Landgraf-Philipp-Str.");
        break;
    }
    case 200511:
    {
        returnValue = F("Landgraf-Philipps-Anlage");
        break;
    }
    case 200512:
    {
        returnValue = F("Landgraf-Ulrich-Str.");
        break;
    }
    case 200513:
    {
        returnValue = F("Landgraf-Wilhelm-Str.");
        break;
    }
    case 200514:
    {
        returnValue = F("Landgrafenallee");
        break;
    }
    case 200515:
    {
        returnValue = F("Landgrafenbrücke");
        break;
    }
    case 200516:
    {
        returnValue = F("Landgrafengasse");
        break;
    }
    case 200517:
    {
        returnValue = F("Landgrafenhof");
        break;
    }
    case 200518:
    {
        returnValue = F("Landgrafenring");
        break;
    }
    case 200519:
    {
        returnValue = F("Landgrafenschneise");
        break;
    }
    case 200520:
    {
        returnValue = F("Landgrafenstieg");
        break;
    }
    case 200521:
    {
        returnValue = F("Landgrafenstr.");
        break;
    }
    case 200522:
    {
        returnValue = F("Landgrafenweg");
        break;
    }
    case 200523:
    {
        returnValue = F("Landgrafgasse");
        break;
    }
    case 200524:
    {
        returnValue = F("Landgrafrodaer Str.");
        break;
    }
    case 200525:
    {
        returnValue = F("Landgrafstr.");
        break;
    }
    case 200526:
    {
        returnValue = F("Landgrafweg");
        break;
    }
    case 200527:
    {
        returnValue = F("Landgrebeweg");
        break;
    }
    case 200528:
    {
        returnValue = F("Landgräberstr.");
        break;
    }
    case 200529:
    {
        returnValue = F("Landgräfin-Anna-Str.");
        break;
    }
    case 200530:
    {
        returnValue = F("Landgräfin-Jutta-Str.");
        break;
    }
    case 200531:
    {
        returnValue = F("Landgut");
        break;
    }
    case 200532:
    {
        returnValue = F("Landgut Göhrisch");
        break;
    }
    case 200533:
    {
        returnValue = F("Landgut am Strengbach");
        break;
    }
    case 200534:
    {
        returnValue = F("Landgutallee");
        break;
    }
    case 200535:
    {
        returnValue = F("Landgutweg");
        break;
    }
    case 200536:
    {
        returnValue = F("Landhaagweg");
        break;
    }
    case 200537:
    {
        returnValue = F("Landhagen");
        break;
    }
    case 200538:
    {
        returnValue = F("Landhaus");
        break;
    }
    case 200539:
    {
        returnValue = F("Landhaus Ettenbühl");
        break;
    }
    case 200540:
    {
        returnValue = F("Landhaus Kasfeld");
        break;
    }
    case 200541:
    {
        returnValue = F("Landhaus Lueg");
        break;
    }
    case 200542:
    {
        returnValue = F("Landhaus Mühlenblick Eliasbrunn 84");
        break;
    }
    case 200543:
    {
        returnValue = F("Landhaus-Meyn-Weg");
        break;
    }
    case 200544:
    {
        returnValue = F("Landhausallee");
        break;
    }
    case 200545:
    {
        returnValue = F("Landhausbiergarten");
        break;
    }
    case 200546:
    {
        returnValue = F("Landhauser Heide");
        break;
    }
    case 200547:
    {
        returnValue = F("Landhauser Str.");
        break;
    }
    case 200548:
    {
        returnValue = F("Landhaushöhe");
        break;
    }
    case 200549:
    {
        returnValue = F("Landhauspark");
        break;
    }
    case 200550:
    {
        returnValue = F("Landhausstr.");
        break;
    }
    case 200551:
    {
        returnValue = F("Landhausweg");
        break;
    }
    case 200552:
    {
        returnValue = F("Landhecke");
        break;
    }
    case 200553:
    {
        returnValue = F("Landhege");
        break;
    }
    case 200554:
    {
        returnValue = F("Landhegstr.");
        break;
    }
    case 200555:
    {
        returnValue = F("Landhegweg");
        break;
    }
    case 200556:
    {
        returnValue = F("Landheim");
        break;
    }
    case 200557:
    {
        returnValue = F("Landheimstr.");
        break;
    }
    case 200558:
    {
        returnValue = F("Landheimweg");
        break;
    }
    case 200559:
    {
        returnValue = F("Landhof");
        break;
    }
    case 200560:
    {
        returnValue = F("Landhof Rothaus");
        break;
    }
    case 200561:
    {
        returnValue = F("Landhoferstr.");
        break;
    }
    case 200562:
    {
        returnValue = F("Landholz");
        break;
    }
    case 200563:
    {
        returnValue = F("Landhäger Weg");
        break;
    }
    case 200564:
    {
        returnValue = F("Landiner Mühlberg");
        break;
    }
    case 200565:
    {
        returnValue = F("Landiner Ring");
        break;
    }
    case 200566:
    {
        returnValue = F("Landiner Schlossstr.");
        break;
    }
    case 200567:
    {
        returnValue = F("Landiner Str.");
        break;
    }
    case 200568:
    {
        returnValue = F("Landiner Weg");
        break;
    }
    case 200569:
    {
        returnValue = F("Landing");
        break;
    }
    case 200570:
    {
        returnValue = F("Landinger Str.");
        break;
    }
    case 200571:
    {
        returnValue = F("Landingstr.");
        break;
    }
    case 200572:
    {
        returnValue = F("Landivisiau-Park");
        break;
    }
    case 200573:
    {
        returnValue = F("Landjahrweg");
        break;
    }
    case 200574:
    {
        returnValue = F("Landkerner Str.");
        break;
    }
    case 200575:
    {
        returnValue = F("Landkirchener Weg");
        break;
    }
    case 200576:
    {
        returnValue = F("Landkommissärstr.");
        break;
    }
    case 200577:
    {
        returnValue = F("Landkramerweg");
        break;
    }
    case 200578:
    {
        returnValue = F("Landkrug");
        break;
    }
    case 200579:
    {
        returnValue = F("Landkutschersweg");
        break;
    }
    case 200580:
    {
        returnValue = F("Landl");
        break;
    }
    case 200581:
    {
        returnValue = F("Landlinger Str.");
        break;
    }
    case 200582:
    {
        returnValue = F("Landlstr.");
        break;
    }
    case 200583:
    {
        returnValue = F("Landlweg");
        break;
    }
    case 200584:
    {
        returnValue = F("Landmanngassl");
        break;
    }
    case 200585:
    {
        returnValue = F("Landmannstr.");
        break;
    }
    case 200586:
    {
        returnValue = F("Landmannsweg");
        break;
    }
    case 200587:
    {
        returnValue = F("Landmannweg");
        break;
    }
    case 200588:
    {
        returnValue = F("Landmesserweg");
        break;
    }
    case 200589:
    {
        returnValue = F("Landmundstr.");
        break;
    }
    case 200590:
    {
        returnValue = F("Landoisstr.");
        break;
    }
    case 200591:
    {
        returnValue = F("Landoisweg");
        break;
    }
    case 200592:
    {
        returnValue = F("Landolfdamm");
        break;
    }
    case 200593:
    {
        returnValue = F("Landolfhof");
        break;
    }
    case 200594:
    {
        returnValue = F("Landolfstr.");
        break;
    }
    case 200595:
    {
        returnValue = F("Landolin-Ohnmacht-Str.");
        break;
    }
    case 200596:
    {
        returnValue = F("Landolinsgasse");
        break;
    }
    case 200597:
    {
        returnValue = F("Landolinsplatz");
        break;
    }
    case 200598:
    {
        returnValue = F("Landolinsteige");
        break;
    }
    case 200599:
    {
        returnValue = F("Landolinusplatz");
        break;
    }
    case 200600:
    {
        returnValue = F("Landorfer Feld");
        break;
    }
    case 200601:
    {
        returnValue = F("Landorfer Str.");
        break;
    }
    case 200602:
    {
        returnValue = F("Landow");
        break;
    }
    case 200603:
    {
        returnValue = F("Landoweg");
        break;
    }
    case 200604:
    {
        returnValue = F("Landrain");
        break;
    }
    case 200605:
    {
        returnValue = F("Landrat Harth Allee");
        break;
    }
    case 200606:
    {
        returnValue = F("Landrat Wilhelm-Deist-Weg");
        break;
    }
    case 200607:
    {
        returnValue = F("Landrat-Ackermann-Str.");
        break;
    }
    case 200608:
    {
        returnValue = F("Landrat-Allmers-Weg");
        break;
    }
    case 200609:
    {
        returnValue = F("Landrat-Anton-Rauch-Platz");
        break;
    }
    case 200610:
    {
        returnValue = F("Landrat-Beckmann-Str.");
        break;
    }
    case 200611:
    {
        returnValue = F("Landrat-Berthold-Str.");
        break;
    }
    case 200612:
    {
        returnValue = F("Landrat-Beushausen-Str.");
        break;
    }
    case 200613:
    {
        returnValue = F("Landrat-Buchholz-Platz");
        break;
    }
    case 200614:
    {
        returnValue = F("Landrat-Bähr-Str.");
        break;
    }
    case 200615:
    {
        returnValue = F("Landrat-Christian-Evers-Str.");
        break;
    }
    case 200616:
    {
        returnValue = F("Landrat-Christian-Kreuzer-Str.");
        break;
    }
    case 200617:
    {
        returnValue = F("Landrat-Christians-Str.");
        break;
    }
    case 200618:
    {
        returnValue = F("Landrat-Danzier-Str.");
        break;
    }
    case 200619:
    {
        returnValue = F("Landrat-Diedrich-Str.");
        break;
    }
    case 200620:
    {
        returnValue = F("Landrat-Dirr-Str.");
        break;
    }
    case 200621:
    {
        returnValue = F("Landrat-Dr.-Frey-Platz");
        break;
    }
    case 200622:
    {
        returnValue = F("Landrat-Dr.-Frey-Str.");
        break;
    }
    case 200623:
    {
        returnValue = F("Landrat-Feuchtinger-Str.");
        break;
    }
    case 200624:
    {
        returnValue = F("Landrat-Grimm-Str.");
        break;
    }
    case 200625:
    {
        returnValue = F("Landrat-Gruber-Str.");
        break;
    }
    case 200626:
    {
        returnValue = F("Landrat-Görg-Str.");
        break;
    }
    case 200627:
    {
        returnValue = F("Landrat-Hahne-Weg");
        break;
    }
    case 200628:
    {
        returnValue = F("Landrat-Hastreiter-Str.");
        break;
    }
    case 200629:
    {
        returnValue = F("Landrat-Hinsche-Str.");
        break;
    }
    case 200630:
    {
        returnValue = F("Landrat-Hoffmann-Str.");
        break;
    }
    case 200631:
    {
        returnValue = F("Landrat-Holzner-Str.");
        break;
    }
    case 200632:
    {
        returnValue = F("Landrat-Höhne-Str.");
        break;
    }
    case 200633:
    {
        returnValue = F("Landrat-Jaeger-Ring");
        break;
    }
    case 200634:
    {
        returnValue = F("Landrat-Joachim-Weiler-Platz");
        break;
    }
    case 200635:
    {
        returnValue = F("Landrat-Jost-Str.");
        break;
    }
    case 200636:
    {
        returnValue = F("Landrat-Kaptain-Str.");
        break;
    }
    case 200637:
    {
        returnValue = F("Landrat-Kreuzer-Str.");
        break;
    }
    case 200638:
    {
        returnValue = F("Landrat-Krug-Str.");
        break;
    }
    case 200639:
    {
        returnValue = F("Landrat-Lehmair-Str.");
        break;
    }
    case 200640:
    {
        returnValue = F("Landrat-Maurer-Str.");
        break;
    }
    case 200641:
    {
        returnValue = F("Landrat-Mayer-Str.");
        break;
    }
    case 200642:
    {
        returnValue = F("Landrat-Mülleneisen-Str.");
        break;
    }
    case 200643:
    {
        returnValue = F("Landrat-Müller-Hahl-Str.");
        break;
    }
    case 200644:
    {
        returnValue = F("Landrat-Ostermeier-Str.");
        break;
    }
    case 200645:
    {
        returnValue = F("Landrat-Pfeifer-Str.");
        break;
    }
    case 200646:
    {
        returnValue = F("Landrat-Pfeiffer-Str.");
        break;
    }
    case 200647:
    {
        returnValue = F("Landrat-Schlüter-Weg");
        break;
    }
    case 200648:
    {
        returnValue = F("Landrat-Schultz-Str.");
        break;
    }
    case 200649:
    {
        returnValue = F("Landrat-Schäfer-Str.");
        break;
    }
    case 200650:
    {
        returnValue = F("Landrat-Seifert-Str.");
        break;
    }
    case 200651:
    {
        returnValue = F("Landrat-Trimborn-Platz");
        break;
    }
    case 200652:
    {
        returnValue = F("Landrat-Trimborn-Str.");
        break;
    }
    case 200653:
    {
        returnValue = F("Landrat-Wagner-Str.");
        break;
    }
    case 200654:
    {
        returnValue = F("Landrat-Weskamp-Str.");
        break;
    }
    case 200655:
    {
        returnValue = F("Landrat-Wiedemann-Str.");
        break;
    }
    case 200656:
    {
        returnValue = F("Landrat-Wilhelm-Böllersen-Str.");
        break;
    }
    case 200657:
    {
        returnValue = F("Landrat-Wolf-Str.");
        break;
    }
    case 200658:
    {
        returnValue = F("Landrat-von-Koch-Str.");
        break;
    }
    case 200659:
    {
        returnValue = F("Landrat-von-Laer-Str.");
        break;
    }
    case 200660:
    {
        returnValue = F("Landrat-von-Ostman-Str.");
        break;
    }
    case 200661:
    {
        returnValue = F("Landrat-von-Reck-Str.");
        break;
    }
    case 200662:
    {
        returnValue = F("Landratsberg");
        break;
    }
    case 200663:
    {
        returnValue = F("Landratsgarten");
        break;
    }
    case 200664:
    {
        returnValue = F("Landratsholz");
        break;
    }
    case 200665:
    {
        returnValue = F("Landratslohne");
        break;
    }
    case 200666:
    {
        returnValue = F("Landratspark");
        break;
    }
    case 200667:
    {
        returnValue = F("Landratsstr.");
        break;
    }
    case 200668:
    {
        returnValue = F("Landratstr.");
        break;
    }
    case 200669:
    {
        returnValue = F("Landratsweg");
        break;
    }
    case 200670:
    {
        returnValue = F("Landratweg");
        break;
    }
    case 200671:
    {
        returnValue = F("Landrecht");
        break;
    }
    case 200672:
    {
        returnValue = F("Landrechtstr.");
        break;
    }
    case 200673:
    {
        returnValue = F("Landreinweg");
        break;
    }
    case 200674:
    {
        returnValue = F("Landreiterstr.");
        break;
    }
    case 200675:
    {
        returnValue = F("Landreiterweg");
        break;
    }
    case 200676:
    {
        returnValue = F("Landrichter-Kummer-Str.");
        break;
    }
    case 200677:
    {
        returnValue = F("Landrichter-von-Brück-Str.");
        break;
    }
    case 200678:
    {
        returnValue = F("Landrichterstr.");
        break;
    }
    case 200679:
    {
        returnValue = F("Landrichterweg");
        break;
    }
    case 200680:
    {
        returnValue = F("Landrichtweg");
        break;
    }
    case 200681:
    {
        returnValue = F("Landrideweg");
        break;
    }
    case 200682:
    {
        returnValue = F("Landriede");
        break;
    }
    case 200683:
    {
        returnValue = F("Landrieder Weg");
        break;
    }
    case 200684:
    {
        returnValue = F("Landriedeweg");
        break;
    }
    case 200685:
    {
        returnValue = F("Landriehe");
        break;
    }
    case 200686:
    {
        returnValue = F("Landrückenstr.");
        break;
    }
    case 200687:
    {
        returnValue = F("Landrüheweg");
        break;
    }
    case 200688:
    {
        returnValue = F("Landsassenstr.");
        break;
    }
    case 200689:
    {
        returnValue = F("Landsberg");
        break;
    }
    case 200690:
    {
        returnValue = F("Landsberg Chaussee");
        break;
    }
    case 200691:
    {
        returnValue = F("Landsbergallee");
        break;
    }
    case 200692:
    {
        returnValue = F("Landsbergblick");
        break;
    }
    case 200693:
    {
        returnValue = F("Landsbergbrücke");
        break;
    }
    case 200694:
    {
        returnValue = F("Landsberge");
        break;
    }
    case 200695:
    {
        returnValue = F("Landsberger Chaussee");
        break;
    }
    case 200696:
    {
        returnValue = F("Landsberger Str.");
        break;
    }
    case 200697:
    {
        returnValue = F("Landsberger Str.l");
        break;
    }
    case 200698:
    {
        returnValue = F("Landsberger Weg");
        break;
    }
    case 200699:
    {
        returnValue = F("Landsberghof");
        break;
    }
    case 200700:
    {
        returnValue = F("Landsbergplatz");
        break;
    }
    case 200701:
    {
        returnValue = F("Landsbergstr.");
        break;
    }
    case 200702:
    {
        returnValue = F("Landsbergweg");
        break;
    }
    case 200703:
    {
        returnValue = F("Landsberieder Steig");
        break;
    }
    case 200704:
    {
        returnValue = F("Landsburg");
        break;
    }
    case 200705:
    {
        returnValue = F("Landsburger Str.");
        break;
    }
    case 200706:
    {
        returnValue = F("Landsburgstr.");
        break;
    }
    case 200707:
    {
        returnValue = F("Landsbühl");
        break;
    }
    case 200708:
    {
        returnValue = F("Landschaftgeschichtlicher Garten");
        break;
    }
    case 200709:
    {
        returnValue = F("Landschaftpark");
        break;
    }
    case 200710:
    {
        returnValue = F("Landschaftsgarten Brodaer Teiche");
        break;
    }
    case 200711:
    {
        returnValue = F("Landschaftsgarten Obernhain");
        break;
    }
    case 200712:
    {
        returnValue = F("Landschaftsgarten Schloß Reichertshausen");
        break;
    }
    case 200713:
    {
        returnValue = F("Landschaftsgarten, ehem. Küchengarten");
        break;
    }
    case 200714:
    {
        returnValue = F("Landschaftspark");
        break;
    }
    case 200715:
    {
        returnValue = F("Landschaftspark \"Dürrer Hof");
        break;
    }
    case 200716:
    {
        returnValue = F("Landschaftspark 'Wingertsgewanne'");
        break;
    }
    case 200717:
    {
        returnValue = F("Landschaftspark Altenbruch");
        break;
    }
    case 200718:
    {
        returnValue = F("Landschaftspark Althaldensleben-Hundisburg");
        break;
    }
    case 200719:
    {
        returnValue = F("Landschaftspark Am Strümper Busch");
        break;
    }
    case 200720:
    {
        returnValue = F("Landschaftspark Bettenburg");
        break;
    }
    case 200721:
    {
        returnValue = F("Landschaftspark Bruckenwasen");
        break;
    }
    case 200722:
    {
        returnValue = F("Landschaftspark Burg Henrichenburg");
        break;
    }
    case 200723:
    {
        returnValue = F("Landschaftspark Dammereez");
        break;
    }
    case 200724:
    {
        returnValue = F("Landschaftspark Eichholz");
        break;
    }
    case 200725:
    {
        returnValue = F("Landschaftspark Hachinger Tal");
        break;
    }
    case 200726:
    {
        returnValue = F("Landschaftspark Herrenberg");
        break;
    }
    case 200727:
    {
        returnValue = F("Landschaftspark Hoppenrade");
        break;
    }
    case 200728:
    {
        returnValue = F("Landschaftspark Meyerhof");
        break;
    }
    case 200729:
    {
        returnValue = F("Landschaftspark Pottkuhle");
        break;
    }
    case 200730:
    {
        returnValue = F("Landschaftspark Rahmkebachtal");
        break;
    }
    case 200731:
    {
        returnValue = F("Landschaftspark Rietzer Berg");
        break;
    }
    case 200732:
    {
        returnValue = F("Landschaftspark Saalebogen");
        break;
    }
    case 200733:
    {
        returnValue = F("Landschaftspark Schlierbach");
        break;
    }
    case 200734:
    {
        returnValue = F("Landschaftspark Schloss Dennenlohe");
        break;
    }
    case 200735:
    {
        returnValue = F("Landschaftspark Seifersdorfer Tal");
        break;
    }
    case 200736:
    {
        returnValue = F("Landschaftspark Steinbüchel");
        break;
    }
    case 200737:
    {
        returnValue = F("Landschaftspark Steinfelsen");
        break;
    }
    case 200738:
    {
        returnValue = F("Landschaftspark Treblitzsch");
        break;
    }
    case 200739:
    {
        returnValue = F("Landschaftspark Wetzgau");
        break;
    }
    case 200740:
    {
        returnValue = F("Landschaftspark Wiesengrund");
        break;
    }
    case 200741:
    {
        returnValue = F("Landschaftspark Wirth");
        break;
    }
    case 200742:
    {
        returnValue = F("Landschaftspolder");
        break;
    }
    case 200743:
    {
        returnValue = F("Landschaftsschnitt");
        break;
    }
    case 200744:
    {
        returnValue = F("Landschaftsschutzgebiet Lützelstrauch");
        break;
    }
    case 200745:
    {
        returnValue = F("Landschaftsstr.");
        break;
    }
    case 200746:
    {
        returnValue = F("Landschaftstherapeutischer Park Römerkessel");
        break;
    }
    case 200747:
    {
        returnValue = F("Landschaftstour Treuenbrietzen");
        break;
    }
    case 200748:
    {
        returnValue = F("Landschaftstr.");
        break;
    }
    case 200749:
    {
        returnValue = F("Landschaftsweg");
        break;
    }
    case 200750:
    {
        returnValue = F("Landschede");
        break;
    }
    case 200751:
    {
        returnValue = F("Landschedin");
        break;
    }
    case 200752:
    {
        returnValue = F("Landscheide");
        break;
    }
    case 200753:
    {
        returnValue = F("Landscheider Mühle");
        break;
    }
    case 200754:
    {
        returnValue = F("Landscheidung");
        break;
    }
    case 200755:
    {
        returnValue = F("Landschildkröten, Kaninchen");
        break;
    }
    case 200756:
    {
        returnValue = F("Landschreibereistr.");
        break;
    }
    case 200757:
    {
        returnValue = F("Landschreibergasse");
        break;
    }
    case 200758:
    {
        returnValue = F("Landschreiberstr.");
        break;
    }
    case 200759:
    {
        returnValue = F("Landschreibersträßle");
        break;
    }
    case 200760:
    {
        returnValue = F("Landschulheim");
        break;
    }
    case 200761:
    {
        returnValue = F("Landschutzgasse");
        break;
    }
    case 200762:
    {
        returnValue = F("Landschänkenweg");
        break;
    }
    case 200763:
    {
        returnValue = F("Landschützstr.");
        break;
    }
    case 200764:
    {
        returnValue = F("Landseestr.");
        break;
    }
    case 200765:
    {
        returnValue = F("Landsegnung");
        break;
    }
    case 200766:
    {
        returnValue = F("Landsehrstr.");
        break;
    }
    case 200767:
    {
        returnValue = F("Landsend");
        break;
    }
    case 200768:
    {
        returnValue = F("Landsendorf");
        break;
    }
    case 200769:
    {
        returnValue = F("Landshamer Str.");
        break;
    }
    case 200770:
    {
        returnValue = F("Landshauser Str.");
        break;
    }
    case 200771:
    {
        returnValue = F("Landsheede");
        break;
    }
    case 200772:
    {
        returnValue = F("Landsheider Str.");
        break;
    }
    case 200773:
    {
        returnValue = F("Landsherrenweg");
        break;
    }
    case 200774:
    {
        returnValue = F("Landshoffstr.");
        break;
    }
    case 200775:
    {
        returnValue = F("Landshuber Str.");
        break;
    }
    case 200776:
    {
        returnValue = F("Landshuter Allee");
        break;
    }
    case 200777:
    {
        returnValue = F("Landshuter Str.");
        break;
    }
    case 200778:
    {
        returnValue = F("Landshuter Tor");
        break;
    }
    case 200779:
    {
        returnValue = F("Landshuter Weg");
        break;
    }
    case 200780:
    {
        returnValue = F("Landsklingel");
        break;
    }
    case 200781:
    {
        returnValue = F("Landsknechtstr.");
        break;
    }
    case 200782:
    {
        returnValue = F("Landsknechtsweg");
        break;
    }
    case 200783:
    {
        returnValue = F("Landsknechtweg");
        break;
    }
    case 200784:
    {
        returnValue = F("Landskrona Weg");
        break;
    }
    case 200785:
    {
        returnValue = F("Landskronastr.");
        break;
    }
    case 200786:
    {
        returnValue = F("Landskrone");
        break;
    }
    case 200787:
    {
        returnValue = F("Landskronenstr.");
        break;
    }
    case 200788:
    {
        returnValue = F("Landskroner Str.");
        break;
    }
    case 200789:
    {
        returnValue = F("Landskroner Weg");
        break;
    }
    case 200790:
    {
        returnValue = F("Landskronstr.");
        break;
    }
    case 200791:
    {
        returnValue = F("Landskronweg");
        break;
    }
    case 200792:
    {
        returnValue = F("Landstallmeisterring");
        break;
    }
    case 200793:
    {
        returnValue = F("Landstegweg");
        break;
    }
    case 200794:
    {
        returnValue = F("Landsteig");
        break;
    }
    case 200795:
    {
        returnValue = F("Landsteiner Str.");
        break;
    }
    case 200796:
    {
        returnValue = F("Landsteinerstr.");
        break;
    }
    case 200797:
    {
        returnValue = F("Landsteinerweg");
        break;
    }
    case 200798:
    {
        returnValue = F("Landsteinstr.");
        break;
    }
    case 200799:
    {
        returnValue = F("Landstettener Weg");
        break;
    }
    case 200800:
    {
        returnValue = F("Landstorf");
        break;
    }
    case 200801:
    {
        returnValue = F("Landstr.");
        break;
    }
    case 200802:
    {
        returnValue = F("Landstr. I O 146");
        break;
    }
    case 200803:
    {
        returnValue = F("Landstr. nach Tuchen");
        break;
    }
    case 200804:
    {
        returnValue = F("Landstraat");
        break;
    }
    case 200805:
    {
        returnValue = F("Landstreit");
        break;
    }
    case 200806:
    {
        returnValue = F("Landstroster Weg");
        break;
    }
    case 200807:
    {
        returnValue = F("Landstruth");
        break;
    }
    case 200808:
    {
        returnValue = F("Landstuhler Str.");
        break;
    }
    case 200809:
    {
        returnValue = F("Landstuhler Weg");
        break;
    }
    case 200810:
    {
        returnValue = F("Landstuhlstr.");
        break;
    }
    case 200811:
    {
        returnValue = F("Landsweg");
        break;
    }
    case 200812:
    {
        returnValue = F("Landsweilerstr.");
        break;
    }
    case 200813:
    {
        returnValue = F("Landswindastr.");
        break;
    }
    case 200814:
    {
        returnValue = F("Landtafelweg");
        break;
    }
    case 200815:
    {
        returnValue = F("Landtag B");
        break;
    }
    case 200816:
    {
        returnValue = F("Landtagsgarten");
        break;
    }
    case 200817:
    {
        returnValue = F("Landteilstr.");
        break;
    }
    case 200818:
    {
        returnValue = F("Landts-Berge");
        break;
    }
    case 200819:
    {
        returnValue = F("Landturm");
        break;
    }
    case 200820:
    {
        returnValue = F("Landturmbacken");
        break;
    }
    case 200821:
    {
        returnValue = F("Landturmstr.");
        break;
    }
    case 200822:
    {
        returnValue = F("Landturmweg");
        break;
    }
    case 200823:
    {
        returnValue = F("Landturmweg (Jakobsweg)");
        break;
    }
    case 200824:
    {
        returnValue = F("Landungsbrücke");
        break;
    }
    case 200825:
    {
        returnValue = F("Landungsplatz");
        break;
    }
    case 200826:
    {
        returnValue = F("Landvogt-Heinrich-Str.");
        break;
    }
    case 200827:
    {
        returnValue = F("Landvogt-Johannsen-Str.");
        break;
    }
    case 200828:
    {
        returnValue = F("Landvogteistr.");
        break;
    }
    case 200829:
    {
        returnValue = F("Landvogtstr.");
        break;
    }
    case 200830:
    {
        returnValue = F("Landvogtweg");
        break;
    }
    case 200831:
    {
        returnValue = F("Landwacht");
        break;
    }
    case 200832:
    {
        returnValue = F("Landwaisenhausstr.");
        break;
    }
    case 200833:
    {
        returnValue = F("Landwasserstr.");
        break;
    }
    case 200834:
    {
        returnValue = F("Landweg");
        break;
    }
    case 200835:
    {
        returnValue = F("Landweg nach Züsow am Kalksee");
        break;
    }
    case 200836:
    {
        returnValue = F("Landweg-Ausbau");
        break;
    }
    case 200837:
    {
        returnValue = F("Landwehr");
        break;
    }
    case 200838:
    {
        returnValue = F("Landwehrallee");
        break;
    }
    case 200839:
    {
        returnValue = F("Landwehrbreite");
        break;
    }
    case 200840:
    {
        returnValue = F("Landwehrbrink");
        break;
    }
    case 200841:
    {
        returnValue = F("Landwehrdamm");
        break;
    }
    case 200842:
    {
        returnValue = F("Landwehrdeich");
        break;
    }
    case 200843:
    {
        returnValue = F("Landwehrfeld");
        break;
    }
    case 200844:
    {
        returnValue = F("Landwehrgasse");
        break;
    }
    case 200845:
    {
        returnValue = F("Landwehrgraben");
        break;
    }
    case 200846:
    {
        returnValue = F("Landwehrhagener Platz");
        break;
    }
    case 200847:
    {
        returnValue = F("Landwehrhagener Str.");
        break;
    }
    case 200848:
    {
        returnValue = F("Landwehrhagener Weg");
        break;
    }
    case 200849:
    {
        returnValue = F("Landwehrkamp");
        break;
    }
    case 200850:
    {
        returnValue = F("Landwehrkreisel");
        break;
    }
    case 200851:
    {
        returnValue = F("Landwehrmoordamm 1");
        break;
    }
    case 200852:
    {
        returnValue = F("Landwehrmoordamm 2");
        break;
    }
    case 200853:
    {
        returnValue = F("Landwehrort");
        break;
    }
    case 200854:
    {
        returnValue = F("Landwehrpark");
        break;
    }
    case 200855:
    {
        returnValue = F("Landwehrplatz");
        break;
    }
    case 200856:
    {
        returnValue = F("Landwehrriethe");
        break;
    }
    case 200857:
    {
        returnValue = F("Landwehrring");
        break;
    }
    case 200858:
    {
        returnValue = F("Landwehrs Brede");
        break;
    }
    case 200859:
    {
        returnValue = F("Landwehrs Garten");
        break;
    }
    case 200860:
    {
        returnValue = F("Landwehrschneise");
        break;
    }
    case 200861:
    {
        returnValue = F("Landwehrschänke");
        break;
    }
    case 200862:
    {
        returnValue = F("Landwehrstiege");
        break;
    }
    case 200863:
    {
        returnValue = F("Landwehrstr.");
        break;
    }
    case 200864:
    {
        returnValue = F("Landwehrweg");
        break;
    }
    case 200865:
    {
        returnValue = F("Landwehrwiese");
        break;
    }
    case 200866:
    {
        returnValue = F("Landwehrwiesen");
        break;
    }
    case 200867:
    {
        returnValue = F("Landwiese");
        break;
    }
    case 200868:
    {
        returnValue = F("Landwiesenweg");
        break;
    }
    case 200869:
    {
        returnValue = F("Landwirtschaftsring");
        break;
    }
    case 200870:
    {
        returnValue = F("Landwirtschaftsstr.");
        break;
    }
    case 200871:
    {
        returnValue = F("Landwürder Str.");
        break;
    }
    case 200872:
    {
        returnValue = F("Landwüster Str.");
        break;
    }
    case 200873:
    {
        returnValue = F("Landwüststr.");
        break;
    }
    case 200874:
    {
        returnValue = F("Landäcker");
        break;
    }
    case 200875:
    {
        returnValue = F("Landäckerstr.");
        break;
    }
    case 200876:
    {
        returnValue = F("Lanebach");
        break;
    }
    case 200877:
    {
        returnValue = F("Laneckhaus");
        break;
    }
    case 200878:
    {
        returnValue = F("Lanertshäuser Str.");
        break;
    }
    case 200879:
    {
        returnValue = F("Lanerweg");
        break;
    }
    case 200880:
    {
        returnValue = F("Lanfer");
        break;
    }
    case 200881:
    {
        returnValue = F("Lanferbach-Brücke");
        break;
    }
    case 200882:
    {
        returnValue = F("Lanferbruchstr.");
        break;
    }
    case 200883:
    {
        returnValue = F("Lanferkamp");
        break;
    }
    case 200884:
    {
        returnValue = F("Lanfermannfähre");
        break;
    }
    case 200885:
    {
        returnValue = F("Lanfermannteich");
        break;
    }
    case 200886:
    {
        returnValue = F("Lanferschlade");
        break;
    }
    case 200887:
    {
        returnValue = F("Lanfert");
        break;
    }
    case 200888:
    {
        returnValue = F("Lanfertsweg");
        break;
    }
    case 200889:
    {
        returnValue = F("Lanfter Weg");
        break;
    }
    case 200890:
    {
        returnValue = F("Lanfterweg");
        break;
    }
    case 200891:
    {
        returnValue = F("Lang Allee Weg");
        break;
    }
    case 200892:
    {
        returnValue = F("Lang Berg");
        break;
    }
    case 200893:
    {
        returnValue = F("Lang Brück");
        break;
    }
    case 200894:
    {
        returnValue = F("Lang Pad");
        break;
    }
    case 200895:
    {
        returnValue = F("Lang Rain");
        break;
    }
    case 200896:
    {
        returnValue = F("Lang't Dörp");
        break;
    }
    case 200897:
    {
        returnValue = F("Lang-Geräumt");
        break;
    }
    case 200898:
    {
        returnValue = F("Lang-Gönser Weg");
        break;
    }
    case 200899:
    {
        returnValue = F("Lang-Pfad");
        break;
    }
    case 200900:
    {
        returnValue = F("Langacker");
        break;
    }
    case 200901:
    {
        returnValue = F("Langackernstr.");
        break;
    }
    case 200902:
    {
        returnValue = F("Langackerstr.");
        break;
    }
    case 200903:
    {
        returnValue = F("Langackersweg");
        break;
    }
    case 200904:
    {
        returnValue = F("Langackerweg");
        break;
    }
    case 200905:
    {
        returnValue = F("Langallmend");
        break;
    }
    case 200906:
    {
        returnValue = F("Langangerweg");
        break;
    }
    case 200907:
    {
        returnValue = F("Langasse");
        break;
    }
    case 200908:
    {
        returnValue = F("Langau");
        break;
    }
    case 200909:
    {
        returnValue = F("Langauen");
        break;
    }
    case 200910:
    {
        returnValue = F("Langauenstr.");
        break;
    }
    case 200911:
    {
        returnValue = F("Langauer Str.");
        break;
    }
    case 200912:
    {
        returnValue = F("Langauerweg");
        break;
    }
    case 200913:
    {
        returnValue = F("Langauweg");
        break;
    }
    case 200914:
    {
        returnValue = F("Langawann");
        break;
    }
    case 200915:
    {
        returnValue = F("Langballigauer Str.");
        break;
    }
    case 200916:
    {
        returnValue = F("Langballiger Str.");
        break;
    }
    case 200917:
    {
        returnValue = F("Langbarg");
        break;
    }
    case 200918:
    {
        returnValue = F("Langbaurghstr.");
        break;
    }
    case 200919:
    {
        returnValue = F("Langbehnstr.");
        break;
    }
    case 200920:
    {
        returnValue = F("Langbeinstr.");
        break;
    }
    case 200921:
    {
        returnValue = F("Langberg");
        break;
    }
    case 200922:
    {
        returnValue = F("Langberger Weg");
        break;
    }
    case 200923:
    {
        returnValue = F("Langbeuneweg");
        break;
    }
    case 200924:
    {
        returnValue = F("Langbroicher Str.");
        break;
    }
    case 200925:
    {
        returnValue = F("Langbruck");
        break;
    }
    case 200926:
    {
        returnValue = F("Langbrunnen");
        break;
    }
    case 200927:
    {
        returnValue = F("Langbrunnenweg");
        break;
    }
    case 200928:
    {
        returnValue = F("Langbuckweg");
        break;
    }
    case 200929:
    {
        returnValue = F("Langburger Str.");
        break;
    }
    case 200930:
    {
        returnValue = F("Langbühl");
        break;
    }
    case 200931:
    {
        returnValue = F("Langbühndweg");
        break;
    }
    case 200932:
    {
        returnValue = F("Langbürgener Str.");
        break;
    }
    case 200933:
    {
        returnValue = F("Langbürgnerseestr.");
        break;
    }
    case 200934:
    {
        returnValue = F("Langdeel");
        break;
    }
    case 200935:
    {
        returnValue = F("Langder Weg");
        break;
    }
    case 200936:
    {
        returnValue = F("Langdobelweg");
        break;
    }
    case 200937:
    {
        returnValue = F("Langdoren");
        break;
    }
    case 200938:
    {
        returnValue = F("Langdorf");
        break;
    }
    case 200939:
    {
        returnValue = F("Langdorfer Str.");
        break;
    }
    case 200940:
    {
        returnValue = F("Langdörfferstr.");
        break;
    }
    case 200941:
    {
        returnValue = F("Lange Ackern");
        break;
    }
    case 200942:
    {
        returnValue = F("Lange Ackerstr.");
        break;
    }
    case 200943:
    {
        returnValue = F("Lange Ahnung");
        break;
    }
    case 200944:
    {
        returnValue = F("Lange Allee");
        break;
    }
    case 200945:
    {
        returnValue = F("Lange Anwand");
        break;
    }
    case 200946:
    {
        returnValue = F("Lange Anwanden");
        break;
    }
    case 200947:
    {
        returnValue = F("Lange Asper");
        break;
    }
    case 200948:
    {
        returnValue = F("Lange Au");
        break;
    }
    case 200949:
    {
        returnValue = F("Lange Austr.");
        break;
    }
    case 200950:
    {
        returnValue = F("Lange Badlow");
        break;
    }
    case 200951:
    {
        returnValue = F("Lange Bahn");
        break;
    }
    case 200952:
    {
        returnValue = F("Lange Baum Schneise");
        break;
    }
    case 200953:
    {
        returnValue = F("Lange Baunastr.");
        break;
    }
    case 200954:
    {
        returnValue = F("Lange Beete");
        break;
    }
    case 200955:
    {
        returnValue = F("Lange Berge");
        break;
    }
    case 200956:
    {
        returnValue = F("Lange Bergweg");
        break;
    }
    case 200957:
    {
        returnValue = F("Lange Birke");
        break;
    }
    case 200958:
    {
        returnValue = F("Lange Birkenteile");
        break;
    }
    case 200959:
    {
        returnValue = F("Lange Brede");
        break;
    }
    case 200960:
    {
        returnValue = F("Lange Breede");
        break;
    }
    case 200961:
    {
        returnValue = F("Lange Brehe");
        break;
    }
    case 200962:
    {
        returnValue = F("Lange Breite");
        break;
    }
    case 200963:
    {
        returnValue = F("Lange Bruch Chaussee");
        break;
    }
    case 200964:
    {
        returnValue = F("Lange Bruchsweg");
        break;
    }
    case 200965:
    {
        returnValue = F("Lange Bruck");
        break;
    }
    case 200966:
    {
        returnValue = F("Lange Brücke");
        break;
    }
    case 200967:
    {
        returnValue = F("Lange Brückenstr.");
        break;
    }
    case 200968:
    {
        returnValue = F("Lange Brüdergasse");
        break;
    }
    case 200969:
    {
        returnValue = F("Lange Burgstr.");
        break;
    }
    case 200970:
    {
        returnValue = F("Lange Bäun");
        break;
    }
    case 200971:
    {
        returnValue = F("Lange Bögen");
        break;
    }
    case 200972:
    {
        returnValue = F("Lange Böltien");
        break;
    }
    case 200973:
    {
        returnValue = F("Lange Bünd");
        break;
    }
    case 200974:
    {
        returnValue = F("Lange Damm");
        break;
    }
    case 200975:
    {
        returnValue = F("Lange Diehl");
        break;
    }
    case 200976:
    {
        returnValue = F("Lange Dorfstr.");
        break;
    }
    case 200977:
    {
        returnValue = F("Lange Drift");
        break;
    }
    case 200978:
    {
        returnValue = F("Lange Dörpstraat");
        break;
    }
    case 200979:
    {
        returnValue = F("Lange Ebene");
        break;
    }
    case 200980:
    {
        returnValue = F("Lange Elle");
        break;
    }
    case 200981:
    {
        returnValue = F("Lange Eller");
        break;
    }
    case 200982:
    {
        returnValue = F("Lange Ellern");
        break;
    }
    case 200983:
    {
        returnValue = F("Lange Elze");
        break;
    }
    case 200984:
    {
        returnValue = F("Lange Enden");
        break;
    }
    case 200985:
    {
        returnValue = F("Lange Fahrt");
        break;
    }
    case 200986:
    {
        returnValue = F("Lange Felder");
        break;
    }
    case 200987:
    {
        returnValue = F("Lange Feldschneise");
        break;
    }
    case 200988:
    {
        returnValue = F("Lange Feldstr.");
        break;
    }
    case 200989:
    {
        returnValue = F("Lange Feldweg");
        break;
    }
    case 200990:
    {
        returnValue = F("Lange Fenne");
        break;
    }
    case 200991:
    {
        returnValue = F("Lange Fichten");
        break;
    }
    case 200992:
    {
        returnValue = F("Lange Fischerstr.");
        break;
    }
    case 200993:
    {
        returnValue = F("Lange Flagge");
        break;
    }
    case 200994:
    {
        returnValue = F("Lange Fohre");
        break;
    }
    case 200995:
    {
        returnValue = F("Lange Fohrenweg");
        break;
    }
    case 200996:
    {
        returnValue = F("Lange Forststr.");
        break;
    }
    case 200997:
    {
        returnValue = F("Lange Fort");
        break;
    }
    case 200998:
    {
        returnValue = F("Lange Fuhr");
        break;
    }
    case 200999:
    {
        returnValue = F("Lange Furch");
        break;
    }
    case 201000:
    {
        returnValue = F("Lange Furche");
        break;
    }
    case 201001:
    {
        returnValue = F("Lange Furt");
        break;
    }
    case 201002:
    {
        returnValue = F("Lange Fören");
        break;
    }
    case 201003:
    {
        returnValue = F("Lange Fünf");
        break;
    }
    case 201004:
    {
        returnValue = F("Lange Gass");
        break;
    }
    case 201005:
    {
        returnValue = F("Lange Gasse");
        break;
    }
    case 201006:
    {
        returnValue = F("Lange Geest");
        break;
    }
    case 201007:
    {
        returnValue = F("Lange Geist");
        break;
    }
    case 201008:
    {
        returnValue = F("Lange Gewann");
        break;
    }
    case 201009:
    {
        returnValue = F("Lange Gewanne");
        break;
    }
    case 201010:
    {
        returnValue = F("Lange Grasbeete");
        break;
    }
    case 201011:
    {
        returnValue = F("Lange Grube");
        break;
    }
    case 201012:
    {
        returnValue = F("Lange Grund");
        break;
    }
    case 201013:
    {
        returnValue = F("Lange Grundstr.");
        break;
    }
    case 201014:
    {
        returnValue = F("Lange Grundweg");
        break;
    }
    case 201015:
    {
        returnValue = F("Lange Gwand");
        break;
    }
    case 201016:
    {
        returnValue = F("Lange Gärten");
        break;
    }
    case 201017:
    {
        returnValue = F("Lange Göhren");
        break;
    }
    case 201018:
    {
        returnValue = F("Lange Halbe");
        break;
    }
    case 201019:
    {
        returnValue = F("Lange Halde");
        break;
    }
    case 201020:
    {
        returnValue = F("Lange Hall");
        break;
    }
    case 201021:
    {
        returnValue = F("Lange Hamm");
        break;
    }
    case 201022:
    {
        returnValue = F("Lange Hart");
        break;
    }
    case 201023:
    {
        returnValue = F("Lange Hauptstr.");
        break;
    }
    case 201024:
    {
        returnValue = F("Lange Hecke");
        break;
    }
    case 201025:
    {
        returnValue = F("Lange Hecken");
        break;
    }
    case 201026:
    {
        returnValue = F("Lange Heed");
        break;
    }
    case 201027:
    {
        returnValue = F("Lange Heese");
        break;
    }
    case 201028:
    {
        returnValue = F("Lange Hegge");
        break;
    }
    case 201029:
    {
        returnValue = F("Lange Heide");
        break;
    }
    case 201030:
    {
        returnValue = F("Lange Heideteile");
        break;
    }
    case 201031:
    {
        returnValue = F("Lange Hellmer");
        break;
    }
    case 201032:
    {
        returnValue = F("Lange Hessen Schneise");
        break;
    }
    case 201033:
    {
        returnValue = F("Lange Hochstr.");
        break;
    }
    case 201034:
    {
        returnValue = F("Lange Hofäcker");
        break;
    }
    case 201035:
    {
        returnValue = F("Lange Hohl");
        break;
    }
    case 201036:
    {
        returnValue = F("Lange Hohle");
        break;
    }
    case 201037:
    {
        returnValue = F("Lange Horst");
        break;
    }
    case 201038:
    {
        returnValue = F("Lange Hälden");
        break;
    }
    case 201039:
    {
        returnValue = F("Lange Häuser");
        break;
    }
    case 201040:
    {
        returnValue = F("Lange Höfe");
        break;
    }
    case 201041:
    {
        returnValue = F("Lange Höhe");
        break;
    }
    case 201042:
    {
        returnValue = F("Lange Höhle");
        break;
    }
    case 201043:
    {
        returnValue = F("Lange Hörn");
        break;
    }
    case 201044:
    {
        returnValue = F("Lange Kamp");
        break;
    }
    case 201045:
    {
        returnValue = F("Lange Kaule");
        break;
    }
    case 201046:
    {
        returnValue = F("Lange Kesselstr.");
        break;
    }
    case 201047:
    {
        returnValue = F("Lange Koppel");
        break;
    }
    case 201048:
    {
        returnValue = F("Lange Kuhle");
        break;
    }
    case 201049:
    {
        returnValue = F("Lange Kämpe");
        break;
    }
    case 201050:
    {
        returnValue = F("Lange Lage");
        break;
    }
    case 201051:
    {
        returnValue = F("Lange Laube");
        break;
    }
    case 201052:
    {
        returnValue = F("Lange Lauchstädter Str.");
        break;
    }
    case 201053:
    {
        returnValue = F("Lange Lauter");
        break;
    }
    case 201054:
    {
        returnValue = F("Lange Leite");
        break;
    }
    case 201055:
    {
        returnValue = F("Lange Leithe");
        break;
    }
    case 201056:
    {
        returnValue = F("Lange Lemppen");
        break;
    }
    case 201057:
    {
        returnValue = F("Lange Lenzstr.");
        break;
    }
    case 201058:
    {
        returnValue = F("Lange Licht");
        break;
    }
    case 201059:
    {
        returnValue = F("Lange Lichtsweg");
        break;
    }
    case 201060:
    {
        returnValue = F("Lange Liebe");
        break;
    }
    case 201061:
    {
        returnValue = F("Lange Linie");
        break;
    }
    case 201062:
    {
        returnValue = F("Lange Lint");
        break;
    }
    case 201063:
    {
        returnValue = F("Lange Loh");
        break;
    }
    case 201064:
    {
        returnValue = F("Lange Lohe");
        break;
    }
    case 201065:
    {
        returnValue = F("Lange Lohne");
        break;
    }
    case 201066:
    {
        returnValue = F("Lange Länder");
        break;
    }
    case 201067:
    {
        returnValue = F("Lange Läng");
        break;
    }
    case 201068:
    {
        returnValue = F("Lange Länge");
        break;
    }
    case 201069:
    {
        returnValue = F("Lange Maas");
        break;
    }
    case 201070:
    {
        returnValue = F("Lange Maase");
        break;
    }
    case 201071:
    {
        returnValue = F("Lange Malterse");
        break;
    }
    case 201072:
    {
        returnValue = F("Lange Masch");
        break;
    }
    case 201073:
    {
        returnValue = F("Lange Mauer");
        break;
    }
    case 201074:
    {
        returnValue = F("Lange Maße");
        break;
    }
    case 201075:
    {
        returnValue = F("Lange Meda");
        break;
    }
    case 201076:
    {
        returnValue = F("Lange Meerweg");
        break;
    }
    case 201077:
    {
        returnValue = F("Lange Meile");
        break;
    }
    case 201078:
    {
        returnValue = F("Lange Minte");
        break;
    }
    case 201079:
    {
        returnValue = F("Lange Mittellinie");
        break;
    }
    case 201080:
    {
        returnValue = F("Lange Mittelschneise");
        break;
    }
    case 201081:
    {
        returnValue = F("Lange Moor");
        break;
    }
    case 201082:
    {
        returnValue = F("Lange Moot");
        break;
    }
    case 201083:
    {
        returnValue = F("Lange Morgen");
        break;
    }
    case 201084:
    {
        returnValue = F("Lange Mähder");
        break;
    }
    case 201085:
    {
        returnValue = F("Lange Nacht");
        break;
    }
    case 201086:
    {
        returnValue = F("Lange Ortsstr.");
        break;
    }
    case 201087:
    {
        returnValue = F("Lange Ossenbeck");
        break;
    }
    case 201088:
    {
        returnValue = F("Lange Pannen");
        break;
    }
    case 201089:
    {
        returnValue = F("Lange Planie");
        break;
    }
    case 201090:
    {
        returnValue = F("Lange Pool");
        break;
    }
    case 201091:
    {
        returnValue = F("Lange Rade");
        break;
    }
    case 201092:
    {
        returnValue = F("Lange Redder");
        break;
    }
    case 201093:
    {
        returnValue = F("Lange Reege");
        break;
    }
    case 201094:
    {
        returnValue = F("Lange Reihe");
        break;
    }
    case 201095:
    {
        returnValue = F("Lange Reise");
        break;
    }
    case 201096:
    {
        returnValue = F("Lange Rekesweg");
        break;
    }
    case 201097:
    {
        returnValue = F("Lange Reute Weg");
        break;
    }
    case 201098:
    {
        returnValue = F("Lange Richtstatt");
        break;
    }
    case 201099:
    {
        returnValue = F("Lange Ricke");
        break;
    }
    case 201100:
    {
        returnValue = F("Lange Riede");
        break;
    }
    case 201101:
    {
        returnValue = F("Lange Riege");
        break;
    }
    case 201102:
    {
        returnValue = F("Lange Riehe");
        break;
    }
    case 201103:
    {
        returnValue = F("Lange Ringstr.");
        break;
    }
    case 201104:
    {
        returnValue = F("Lange Rott");
        break;
    }
    case 201105:
    {
        returnValue = F("Lange Rötterstr.");
        break;
    }
    case 201106:
    {
        returnValue = F("Lange Schlicht");
        break;
    }
    case 201107:
    {
        returnValue = F("Lange Schluftweg");
        break;
    }
    case 201108:
    {
        returnValue = F("Lange Schnath");
        break;
    }
    case 201109:
    {
        returnValue = F("Lange Schneese");
        break;
    }
    case 201110:
    {
        returnValue = F("Lange Schneid");
        break;
    }
    case 201111:
    {
        returnValue = F("Lange Schneise");
        break;
    }
    case 201112:
    {
        returnValue = F("Lange Schränke");
        break;
    }
    case 201113:
    {
        returnValue = F("Lange Schulstr.");
        break;
    }
    case 201114:
    {
        returnValue = F("Lange Seite");
        break;
    }
    case 201115:
    {
        returnValue = F("Lange Sicht");
        break;
    }
    case 201116:
    {
        returnValue = F("Lange Sohlenschneise");
        break;
    }
    case 201117:
    {
        returnValue = F("Lange Stege");
        break;
    }
    case 201118:
    {
        returnValue = F("Lange Steggasse");
        break;
    }
    case 201119:
    {
        returnValue = F("Lange Stegge");
        break;
    }
    case 201120:
    {
        returnValue = F("Lange Steig");
        break;
    }
    case 201121:
    {
        returnValue = F("Lange Steige");
        break;
    }
    case 201122:
    {
        returnValue = F("Lange Steinmauer");
        break;
    }
    case 201123:
    {
        returnValue = F("Lange Stiege");
        break;
    }
    case 201124:
    {
        returnValue = F("Lange Str.");
        break;
    }
    case 201125:
    {
        returnValue = F("Lange Str. (Kreisverkehr)");
        break;
    }
    case 201126:
    {
        returnValue = F("Lange Str. Hausen");
        break;
    }
    case 201127:
    {
        returnValue = F("Lange Streifen");
        break;
    }
    case 201128:
    {
        returnValue = F("Lange Streng");
        break;
    }
    case 201129:
    {
        returnValue = F("Lange Sträucher");
        break;
    }
    case 201130:
    {
        returnValue = F("Lange Stücke");
        break;
    }
    case 201131:
    {
        returnValue = F("Lange Stücken");
        break;
    }
    case 201132:
    {
        returnValue = F("Lange Sömme");
        break;
    }
    case 201133:
    {
        returnValue = F("Lange Sülldorfer Str.");
        break;
    }
    case 201134:
    {
        returnValue = F("Lange Tauen");
        break;
    }
    case 201135:
    {
        returnValue = F("Lange Teile");
        break;
    }
    case 201136:
    {
        returnValue = F("Lange Theile");
        break;
    }
    case 201137:
    {
        returnValue = F("Lange Torstr.");
        break;
    }
    case 201138:
    {
        returnValue = F("Lange Trift");
        break;
    }
    case 201139:
    {
        returnValue = F("Lange Tränke");
        break;
    }
    case 201140:
    {
        returnValue = F("Lange Twete");
        break;
    }
    case 201141:
    {
        returnValue = F("Lange Twiete");
        break;
    }
    case 201142:
    {
        returnValue = F("Lange Umbrüche");
        break;
    }
    case 201143:
    {
        returnValue = F("Lange Wand");
        break;
    }
    case 201144:
    {
        returnValue = F("Lange Wand Weg");
        break;
    }
    case 201145:
    {
        returnValue = F("Lange Wanne");
        break;
    }
    case 201146:
    {
        returnValue = F("Lange Wehr");
        break;
    }
    case 201147:
    {
        returnValue = F("Lange Weihe");
        break;
    }
    case 201148:
    {
        returnValue = F("Lange Weingärten");
        break;
    }
    case 201149:
    {
        returnValue = F("Lange Wende");
        break;
    }
    case 201150:
    {
        returnValue = F("Lange Wenden");
        break;
    }
    case 201151:
    {
        returnValue = F("Lange Wender");
        break;
    }
    case 201152:
    {
        returnValue = F("Lange Wendt Weg");
        break;
    }
    case 201153:
    {
        returnValue = F("Lange Wenjen");
        break;
    }
    case 201154:
    {
        returnValue = F("Lange Wenne");
        break;
    }
    case 201155:
    {
        returnValue = F("Lange Wieke");
        break;
    }
    case 201156:
    {
        returnValue = F("Lange Wiese");
        break;
    }
    case 201157:
    {
        returnValue = F("Lange Wiesen");
        break;
    }
    case 201158:
    {
        returnValue = F("Lange Wiesen Weg");
        break;
    }
    case 201159:
    {
        returnValue = F("Lange Wieske");
        break;
    }
    case 201160:
    {
        returnValue = F("Lange Wisch");
        break;
    }
    case 201161:
    {
        returnValue = F("Lange Wischen");
        break;
    }
    case 201162:
    {
        returnValue = F("Lange Wolfsstr.");
        break;
    }
    case 201163:
    {
        returnValue = F("Lange Worth");
        break;
    }
    case 201164:
    {
        returnValue = F("Lange Zaun");
        break;
    }
    case 201165:
    {
        returnValue = F("Lange Zeile");
        break;
    }
    case 201166:
    {
        returnValue = F("Lange Ziegelallee");
        break;
    }
    case 201167:
    {
        returnValue = F("Lange steinige Hohl");
        break;
    }
    case 201168:
    {
        returnValue = F("Lange Äcker");
        break;
    }
    case 201169:
    {
        returnValue = F("Lange Äckernstr.");
        break;
    }
    case 201170:
    {
        returnValue = F("Lange Äckerstr.");
        break;
    }
    case 201171:
    {
        returnValue = F("Lange Äckerweg");
        break;
    }
    case 201172:
    {
        returnValue = F("Lange-Berg-Str.");
        break;
    }
    case 201173:
    {
        returnValue = F("Lange-Egge-Weg");
        break;
    }
    case 201174:
    {
        returnValue = F("Lange-Eichwald-Schneise");
        break;
    }
    case 201175:
    {
        returnValue = F("Lange-Feld-Str.");
        break;
    }
    case 201176:
    {
        returnValue = F("Lange-Forchen-Weg");
        break;
    }
    case 201177:
    {
        returnValue = F("Lange-Furt-Weg");
        break;
    }
    case 201178:
    {
        returnValue = F("Lange-Garten-Str.");
        break;
    }
    case 201179:
    {
        returnValue = F("Lange-Geismar-Str.");
        break;
    }
    case 201180:
    {
        returnValue = F("Lange-Hop-Str.");
        break;
    }
    case 201181:
    {
        returnValue = F("Lange-Land");
        break;
    }
    case 201182:
    {
        returnValue = F("Lange-Mauer-Str.");
        break;
    }
    case 201183:
    {
        returnValue = F("Lange-Orles-Str.");
        break;
    }
    case 201184:
    {
        returnValue = F("Lange-Pröbsten-Str.");
        break;
    }
    case 201185:
    {
        returnValue = F("Lange-Reute-Str.");
        break;
    }
    case 201186:
    {
        returnValue = F("Lange-Riemen-Weg");
        break;
    }
    case 201187:
    {
        returnValue = F("Lange-Röt-Str.");
        break;
    }
    case 201188:
    {
        returnValue = F("Lange-Wand-Str.");
        break;
    }
    case 201189:
    {
        returnValue = F("Lange-Weg");
        break;
    }
    case 201190:
    {
        returnValue = F("Lange-Wiese-Weg");
        break;
    }
    case 201191:
    {
        returnValue = F("Lange-Wiesen-Weg");
        break;
    }
    case 201192:
    {
        returnValue = F("Lange-Wilhelm-Str.");
        break;
    }
    case 201193:
    {
        returnValue = F("Lange-Äcker-Str.");
        break;
    }
    case 201194:
    {
        returnValue = F("Lange-Äcker-Weg");
        break;
    }
    case 201195:
    {
        returnValue = F("LangeAllee");
        break;
    }
    case 201196:
    {
        returnValue = F("Langeacker");
        break;
    }
    case 201197:
    {
        returnValue = F("Langebacher Weg");
        break;
    }
    case 201198:
    {
        returnValue = F("Langebend");
        break;
    }
    case 201199:
    {
        returnValue = F("Langebendstr.");
        break;
    }
    case 201200:
    {
        returnValue = F("Langeberg");
        break;
    }
    case 201201:
    {
        returnValue = F("Langebergstr.");
        break;
    }
    case 201202:
    {
        returnValue = F("Langebergweg");
        break;
    }
    case 201203:
    {
        returnValue = F("Langebrückenstr.");
        break;
    }
    case 201204:
    {
        returnValue = F("Langebrücker Str.");
        break;
    }
    case 201205:
    {
        returnValue = F("Langebrückstr.");
        break;
    }
    case 201206:
    {
        returnValue = F("Langebrügger Str.");
        break;
    }
    case 201207:
    {
        returnValue = F("Langebusch");
        break;
    }
    case 201208:
    {
        returnValue = F("Langeck");
        break;
    }
    case 201209:
    {
        returnValue = F("Langeck-Weg");
        break;
    }
    case 201210:
    {
        returnValue = F("Langeckern");
        break;
    }
    case 201211:
    {
        returnValue = F("Langeckerstr.");
        break;
    }
    case 201212:
    {
        returnValue = F("Langeckstr.");
        break;
    }
    case 201213:
    {
        returnValue = F("Langeckweg");
        break;
    }
    case 201214:
    {
        returnValue = F("Langedellwies");
        break;
    }
    case 201215:
    {
        returnValue = F("Langeeckenweg");
        break;
    }
    case 201216:
    {
        returnValue = F("Langefeld");
        break;
    }
    case 201217:
    {
        returnValue = F("Langefelder Grenzweg");
        break;
    }
    case 201218:
    {
        returnValue = F("Langefelder Str.");
        break;
    }
    case 201219:
    {
        returnValue = F("Langefelder Vergrößerung");
        break;
    }
    case 201220:
    {
        returnValue = F("Langefelder Weg");
        break;
    }
    case 201221:
    {
        returnValue = F("Langefeldstr.");
        break;
    }
    case 201222:
    {
        returnValue = F("Langefeldweg");
        break;
    }
    case 201223:
    {
        returnValue = F("Langefennenweg");
        break;
    }
    case 201224:
    {
        returnValue = F("Langefohr");
        break;
    }
    case 201225:
    {
        returnValue = F("Langefort");
        break;
    }
    case 201226:
    {
        returnValue = F("Langefurt");
        break;
    }
    case 201227:
    {
        returnValue = F("Langefurtsweg");
        break;
    }
    case 201228:
    {
        returnValue = F("Langegassenweg");
        break;
    }
    case 201229:
    {
        returnValue = F("Langegasseweg");
        break;
    }
    case 201230:
    {
        returnValue = F("Langegärten");
        break;
    }
    case 201231:
    {
        returnValue = F("Langeheck");
        break;
    }
    case 201232:
    {
        returnValue = F("Langehegge");
        break;
    }
    case 201233:
    {
        returnValue = F("Langeheide");
        break;
    }
    case 201234:
    {
        returnValue = F("Langehof");
        break;
    }
    case 201235:
    {
        returnValue = F("Langehohl");
        break;
    }
    case 201236:
    {
        returnValue = F("Langeholz");
        break;
    }
    case 201237:
    {
        returnValue = F("Langehorstschneise");
        break;
    }
    case 201238:
    {
        returnValue = F("Langehöpen");
        break;
    }
    case 201239:
    {
        returnValue = F("Langehügel-Schneise");
        break;
    }
    case 201240:
    {
        returnValue = F("Langeichweg");
        break;
    }
    case 201241:
    {
        returnValue = F("Langeirrweg");
        break;
    }
    case 201242:
    {
        returnValue = F("Langekamps Weg");
        break;
    }
    case 201243:
    {
        returnValue = F("Langekampstr.");
        break;
    }
    case 201244:
    {
        returnValue = F("Langel");
        break;
    }
    case 201245:
    {
        returnValue = F("Langelager Str.");
        break;
    }
    case 201246:
    {
        returnValue = F("Langeland");
        break;
    }
    case 201247:
    {
        returnValue = F("Langelandring");
        break;
    }
    case 201248:
    {
        returnValue = F("Langelandstr.");
        break;
    }
    case 201249:
    {
        returnValue = F("Langelandweg");
        break;
    }
    case 201250:
    {
        returnValue = F("Langelau");
        break;
    }
    case 201251:
    {
        returnValue = F("Langelbrücke");
        break;
    }
    case 201252:
    {
        returnValue = F("Langeleben");
        break;
    }
    case 201253:
    {
        returnValue = F("Langeleber Str.");
        break;
    }
    case 201254:
    {
        returnValue = F("Langeler Berg");
        break;
    }
    case 201255:
    {
        returnValue = F("Langeler Damm");
        break;
    }
    case 201256:
    {
        returnValue = F("Langeler Kreuzweg");
        break;
    }
    case 201257:
    {
        returnValue = F("Langeler Ring");
        break;
    }
    case 201258:
    {
        returnValue = F("Langeler Str.");
        break;
    }
    case 201259:
    {
        returnValue = F("Langeler Weg");
        break;
    }
    case 201260:
    {
        returnValue = F("Langelerskolk");
        break;
    }
    case 201261:
    {
        returnValue = F("Langelhoff");
        break;
    }
    case 201262:
    {
        returnValue = F("Langeliether Grabenweg");
        break;
    }
    case 201263:
    {
        returnValue = F("Langeliethstr.");
        break;
    }
    case 201264:
    {
        returnValue = F("Langelinienwall");
        break;
    }
    case 201265:
    {
        returnValue = F("Langeller");
        break;
    }
    case 201266:
    {
        returnValue = F("Langelmühle");
        break;
    }
    case 201267:
    {
        returnValue = F("Langeln");
        break;
    }
    case 201268:
    {
        returnValue = F("Langelner Damm");
        break;
    }
    case 201269:
    {
        returnValue = F("Langelner Heidkaten");
        break;
    }
    case 201270:
    {
        returnValue = F("Langelner Weg");
        break;
    }
    case 201271:
    {
        returnValue = F("Langeloh");
        break;
    }
    case 201272:
    {
        returnValue = F("Langeloh Hof");
        break;
    }
    case 201273:
    {
        returnValue = F("Langelohe");
        break;
    }
    case 201274:
    {
        returnValue = F("Langeloher Str.");
        break;
    }
    case 201275:
    {
        returnValue = F("Langeloher Weg");
        break;
    }
    case 201276:
    {
        returnValue = F("Langelohsberg");
        break;
    }
    case 201277:
    {
        returnValue = F("Langelohstr.");
        break;
    }
    case 201278:
    {
        returnValue = F("Langelohweg");
        break;
    }
    case 201279:
    {
        returnValue = F("Langelsheimer Str.");
        break;
    }
    case 201280:
    {
        returnValue = F("Langelsheimer Weg");
        break;
    }
    case 201281:
    {
        returnValue = F("Langelter Weg");
        break;
    }
    case 201282:
    {
        returnValue = F("Langelweg");
        break;
    }
    case 201283:
    {
        returnValue = F("Langelück");
        break;
    }
    case 201284:
    {
        returnValue = F("Langemarckpark");
        break;
    }
    case 201285:
    {
        returnValue = F("Langemarckplatz");
        break;
    }
    case 201286:
    {
        returnValue = F("Langemarckstr.");
        break;
    }
    case 201287:
    {
        returnValue = F("Langemarckweg");
        break;
    }
    case 201288:
    {
        returnValue = F("Langemarkstr.");
        break;
    }
    case 201289:
    {
        returnValue = F("Langemattstr.");
        break;
    }
    case 201290:
    {
        returnValue = F("Langemaß");
        break;
    }
    case 201291:
    {
        returnValue = F("Langemeerstr.");
        break;
    }
    case 201292:
    {
        returnValue = F("Langemehner Str.");
        break;
    }
    case 201293:
    {
        returnValue = F("Langen");
        break;
    }
    case 201294:
    {
        returnValue = F("Langen Acker");
        break;
    }
    case 201295:
    {
        returnValue = F("Langen Bahn");
        break;
    }
    case 201296:
    {
        returnValue = F("Langen Barg");
        break;
    }
    case 201297:
    {
        returnValue = F("Langen Brützer Weg");
        break;
    }
    case 201298:
    {
        returnValue = F("Langen Diek");
        break;
    }
    case 201299:
    {
        returnValue = F("Langen Donk");
        break;
    }
    case 201300:
    {
        returnValue = F("Langen Dyk");
        break;
    }
    case 201301:
    {
        returnValue = F("Langen Ehlern");
        break;
    }
    case 201302:
    {
        returnValue = F("Langen Ellern");
        break;
    }
    case 201303:
    {
        returnValue = F("Langen Esch");
        break;
    }
    case 201304:
    {
        returnValue = F("Langen Gärten");
        break;
    }
    case 201305:
    {
        returnValue = F("Langen Hof");
        break;
    }
    case 201306:
    {
        returnValue = F("Langen Hop");
        break;
    }
    case 201307:
    {
        returnValue = F("Langen Jammer");
        break;
    }
    case 201308:
    {
        returnValue = F("Langen Jarrn");
        break;
    }
    case 201309:
    {
        returnValue = F("Langen Kamp");
        break;
    }
    case 201310:
    {
        returnValue = F("Langen Morgenstr.");
        break;
    }
    case 201311:
    {
        returnValue = F("Langen Oth");
        break;
    }
    case 201312:
    {
        returnValue = F("Langen Steg");
        break;
    }
    case 201313:
    {
        returnValue = F("Langen Strichen");
        break;
    }
    case 201314:
    {
        returnValue = F("Langen Stücken");
        break;
    }
    case 201315:
    {
        returnValue = F("Langen Tange");
        break;
    }
    case 201316:
    {
        returnValue = F("Langen Wangen");
        break;
    }
    case 201317:
    {
        returnValue = F("Langen Weg");
        break;
    }
    case 201318:
    {
        returnValue = F("Langen-Bergheimer Str.");
        break;
    }
    case 201319:
    {
        returnValue = F("Langen-Brombacher Str.");
        break;
    }
    case 201320:
    {
        returnValue = F("Langen-Lustig");
        break;
    }
    case 201321:
    {
        returnValue = F("Langenacker");
        break;
    }
    case 201322:
    {
        returnValue = F("Langenacker Weg");
        break;
    }
    case 201323:
    {
        returnValue = F("Langenackerstr.");
        break;
    }
    case 201324:
    {
        returnValue = F("Langenackerweg");
        break;
    }
    case 201325:
    {
        returnValue = F("Langenalber Str.");
        break;
    }
    case 201326:
    {
        returnValue = F("Langenalber Weg");
        break;
    }
    case 201327:
    {
        returnValue = F("Langenaltheimer Str.");
        break;
    }
    case 201328:
    {
        returnValue = F("Langenamming");
        break;
    }
    case 201329:
    {
        returnValue = F("Langenargener Str.");
        break;
    }
    case 201330:
    {
        returnValue = F("Langenarger Str.");
        break;
    }
    case 201331:
    {
        returnValue = F("Langenau");
        break;
    }
    case 201332:
    {
        returnValue = F("Langenaubacher Str.");
        break;
    }
    case 201333:
    {
        returnValue = F("Langenaubacher Weg");
        break;
    }
    case 201334:
    {
        returnValue = F("Langenauer Haldenweg");
        break;
    }
    case 201335:
    {
        returnValue = F("Langenauer Str.");
        break;
    }
    case 201336:
    {
        returnValue = F("Langenauer Weg");
        break;
    }
    case 201337:
    {
        returnValue = F("Langenauerstr.");
        break;
    }
    case 201338:
    {
        returnValue = F("Langenauerweg");
        break;
    }
    case 201339:
    {
        returnValue = F("Langenaustr.");
        break;
    }
    case 201340:
    {
        returnValue = F("Langenauweg");
        break;
    }
    case 201341:
    {
        returnValue = F("Langenbach");
        break;
    }
    case 201342:
    {
        returnValue = F("Langenbach-Hangweg");
        break;
    }
    case 201343:
    {
        returnValue = F("Langenbacher Str.");
        break;
    }
    case 201344:
    {
        returnValue = F("Langenbacher Weg");
        break;
    }
    case 201345:
    {
        returnValue = F("Langenbacherstr.");
        break;
    }
    case 201346:
    {
        returnValue = F("Langenbacherweg");
        break;
    }
    case 201347:
    {
        returnValue = F("Langenbachhaldeweg");
        break;
    }
    case 201348:
    {
        returnValue = F("Langenbachstr.");
        break;
    }
    case 201349:
    {
        returnValue = F("Langenbachtal");
        break;
    }
    case 201350:
    {
        returnValue = F("Langenbachweg");
        break;
    }
    case 201351:
    {
        returnValue = F("Langenbargen");
        break;
    }
    case 201352:
    {
        returnValue = F("Langenbaum");
        break;
    }
    case 201353:
    {
        returnValue = F("Langenbaumer Str.");
        break;
    }
    case 201354:
    {
        returnValue = F("Langenbaurenweg");
        break;
    }
    case 201355:
    {
        returnValue = F("Langenbeckplatz");
        break;
    }
    case 201356:
    {
        returnValue = F("Langenbeckstr.");
        break;
    }
    case 201357:
    {
        returnValue = F("Langenbeckweg");
        break;
    }
    case 201358:
    {
        returnValue = F("Langenberg");
        break;
    }
    case 201359:
    {
        returnValue = F("Langenberger Hohlweg");
        break;
    }
    case 201360:
    {
        returnValue = F("Langenberger Kamp");
        break;
    }
    case 201361:
    {
        returnValue = F("Langenberger Moor");
        break;
    }
    case 201362:
    {
        returnValue = F("Langenberger Sand");
        break;
    }
    case 201363:
    {
        returnValue = F("Langenberger Str.");
        break;
    }
    case 201364:
    {
        returnValue = F("Langenberger Weg");
        break;
    }
    case 201365:
    {
        returnValue = F("Langenberggasse");
        break;
    }
    case 201366:
    {
        returnValue = F("Langenbergheimer Str.");
        break;
    }
    case 201367:
    {
        returnValue = F("Langenbergpark");
        break;
    }
    case 201368:
    {
        returnValue = F("Langenbergring");
        break;
    }
    case 201369:
    {
        returnValue = F("Langenbergstr.");
        break;
    }
    case 201370:
    {
        returnValue = F("Langenbergsweg");
        break;
    }
    case 201371:
    {
        returnValue = F("Langenbergweg");
        break;
    }
    case 201372:
    {
        returnValue = F("Langenbergwegll");
        break;
    }
    case 201373:
    {
        returnValue = F("Langenbernsdorfer Str.");
        break;
    }
    case 201374:
    {
        returnValue = F("Langenbick");
        break;
    }
    case 201375:
    {
        returnValue = F("Langenbieberer Str.");
        break;
    }
    case 201376:
    {
        returnValue = F("Langenbieberstr.");
        break;
    }
    case 201377:
    {
        returnValue = F("Langenbielauer Weg");
        break;
    }
    case 201378:
    {
        returnValue = F("Langenbindstr.");
        break;
    }
    case 201379:
    {
        returnValue = F("Langenbochumer Str.");
        break;
    }
    case 201380:
    {
        returnValue = F("Langenbogener Str.");
        break;
    }
    case 201381:
    {
        returnValue = F("Langenbrahmstr.");
        break;
    }
    case 201382:
    {
        returnValue = F("Langenbrander Str.");
        break;
    }
    case 201383:
    {
        returnValue = F("Langenbrander Weg");
        break;
    }
    case 201384:
    {
        returnValue = F("Langenbrede");
        break;
    }
    case 201385:
    {
        returnValue = F("Langenbrink");
        break;
    }
    case 201386:
    {
        returnValue = F("Langenbroich");
        break;
    }
    case 201387:
    {
        returnValue = F("Langenbroicher Str.");
        break;
    }
    case 201388:
    {
        returnValue = F("Langenbrook");
        break;
    }
    case 201389:
    {
        returnValue = F("Langenbruch");
        break;
    }
    case 201390:
    {
        returnValue = F("Langenbruchstr.");
        break;
    }
    case 201391:
    {
        returnValue = F("Langenbruchweg");
        break;
    }
    case 201392:
    {
        returnValue = F("Langenbrucker Str.");
        break;
    }
    case 201393:
    {
        returnValue = F("Langenbrucker Weg");
        break;
    }
    case 201394:
    {
        returnValue = F("Langenbruckweg");
        break;
    }
    case 201395:
    {
        returnValue = F("Langenbrück");
        break;
    }
    case 201396:
    {
        returnValue = F("Langenbrückener Weg");
        break;
    }
    case 201397:
    {
        returnValue = F("Langenbrücker Str.");
        break;
    }
    case 201398:
    {
        returnValue = F("Langenbrücker Tor");
        break;
    }
    case 201399:
    {
        returnValue = F("Langenbrücker Torwall");
        break;
    }
    case 201400:
    {
        returnValue = F("Langenbrügger Str.");
        break;
    }
    case 201401:
    {
        returnValue = F("Langenbucherstr.");
        break;
    }
    case 201402:
    {
        returnValue = F("Langenbuchstr.");
        break;
    }
    case 201403:
    {
        returnValue = F("Langenburg");
        break;
    }
    case 201404:
    {
        returnValue = F("Langenburger Str.");
        break;
    }
    case 201405:
    {
        returnValue = F("Langenburgstr.");
        break;
    }
    case 201406:
    {
        returnValue = F("Langenbusch");
        break;
    }
    case 201407:
    {
        returnValue = F("Langenböhl");
        break;
    }
    case 201408:
    {
        returnValue = F("Langenböhlweg");
        break;
    }
    case 201409:
    {
        returnValue = F("Langenbügeler Str.");
        break;
    }
    case 201410:
    {
        returnValue = F("Langenbühl");
        break;
    }
    case 201411:
    {
        returnValue = F("Langenbühler Weg");
        break;
    }
    case 201412:
    {
        returnValue = F("Langenbühlschneise");
        break;
    }
    case 201413:
    {
        returnValue = F("Langenbühlstr.");
        break;
    }
    case 201414:
    {
        returnValue = F("Langenbühlweg");
        break;
    }
    case 201415:
    {
        returnValue = F("Langenchursdorfer Str.");
        break;
    }
    case 201416:
    {
        returnValue = F("Langendahlweg");
        break;
    }
    case 201417:
    {
        returnValue = F("Langendamm");
        break;
    }
    case 201418:
    {
        returnValue = F("Langendammer Str.");
        break;
    }
    case 201419:
    {
        returnValue = F("Langendammscher Weg");
        break;
    }
    case 201420:
    {
        returnValue = F("Langendellschlag");
        break;
    }
    case 201421:
    {
        returnValue = F("Langendembach");
        break;
    }
    case 201422:
    {
        returnValue = F("Langendembacher Str.");
        break;
    }
    case 201423:
    {
        returnValue = F("Langendernbacher Str.");
        break;
    }
    case 201424:
    {
        returnValue = F("Langendernbacher Weg");
        break;
    }
    case 201425:
    {
        returnValue = F("Langendiebacher Str.");
        break;
    }
    case 201426:
    {
        returnValue = F("Langendobelweg");
        break;
    }
    case 201427:
    {
        returnValue = F("Langendonker Weg");
        break;
    }
    case 201428:
    {
        returnValue = F("Langendorfer Hof");
        break;
    }
    case 201429:
    {
        returnValue = F("Langendorfer Str.");
        break;
    }
    case 201430:
    {
        returnValue = F("Langendorfer Weg");
        break;
    }
    case 201431:
    {
        returnValue = F("Langendreerstr.");
        break;
    }
    case 201432:
    {
        returnValue = F("Langendreesch");
        break;
    }
    case 201433:
    {
        returnValue = F("Langenecker Str.");
        break;
    }
    case 201434:
    {
        returnValue = F("Langenegg");
        break;
    }
    case 201435:
    {
        returnValue = F("Langeneggerweg");
        break;
    }
    case 201436:
    {
        returnValue = F("Langeneichstädter Str.");
        break;
    }
    case 201437:
    {
        returnValue = F("Langeneicker Str.");
        break;
    }
    case 201438:
    {
        returnValue = F("Langeneier Str.");
        break;
    }
    case 201439:
    {
        returnValue = F("Langeneischeweg");
        break;
    }
    case 201440:
    {
        returnValue = F("Langenelzer Str.");
        break;
    }
    case 201441:
    {
        returnValue = F("Langenelzerweg");
        break;
    }
    case 201442:
    {
        returnValue = F("Langenenslinger Str.");
        break;
    }
    case 201443:
    {
        returnValue = F("Langener Grenzweg");
        break;
    }
    case 201444:
    {
        returnValue = F("Langener Hof");
        break;
    }
    case 201445:
    {
        returnValue = F("Langener Landstr.");
        break;
    }
    case 201446:
    {
        returnValue = F("Langener Steinkautschneise");
        break;
    }
    case 201447:
    {
        returnValue = F("Langener Str.");
        break;
    }
    case 201448:
    {
        returnValue = F("Langenerdweg");
        break;
    }
    case 201449:
    {
        returnValue = F("Langenerf");
        break;
    }
    case 201450:
    {
        returnValue = F("Langenerlinger Str.");
        break;
    }
    case 201451:
    {
        returnValue = F("Langeneßallee");
        break;
    }
    case 201452:
    {
        returnValue = F("Langeneßweg");
        break;
    }
    case 201453:
    {
        returnValue = F("Langenfeld");
        break;
    }
    case 201454:
    {
        returnValue = F("Langenfelde");
        break;
    }
    case 201455:
    {
        returnValue = F("Langenfelder Str.");
        break;
    }
    case 201456:
    {
        returnValue = F("Langenfelder Weg");
        break;
    }
    case 201457:
    {
        returnValue = F("Langenfelder Wiesen");
        break;
    }
    case 201458:
    {
        returnValue = F("Langenfeldersträßchen");
        break;
    }
    case 201459:
    {
        returnValue = F("Langenfeldstr.");
        break;
    }
    case 201460:
    {
        returnValue = F("Langenfeldweg");
        break;
    }
    case 201461:
    {
        returnValue = F("Langenfelsweg");
        break;
    }
    case 201462:
    {
        returnValue = F("Langenfill");
        break;
    }
    case 201463:
    {
        returnValue = F("Langenfirstweg");
        break;
    }
    case 201464:
    {
        returnValue = F("Langenfohrn");
        break;
    }
    case 201465:
    {
        returnValue = F("Langenfoort");
        break;
    }
    case 201466:
    {
        returnValue = F("Langenforther Str.");
        break;
    }
    case 201467:
    {
        returnValue = F("Langenfurt-Schneise");
        break;
    }
    case 201468:
    {
        returnValue = F("Langenfurth");
        break;
    }
    case 201469:
    {
        returnValue = F("Langengarten");
        break;
    }
    case 201470:
    {
        returnValue = F("Langengartenweg");
        break;
    }
    case 201471:
    {
        returnValue = F("Langengasse");
        break;
    }
    case 201472:
    {
        returnValue = F("Langengehren-Ausfahrt");
        break;
    }
    case 201473:
    {
        returnValue = F("Langengehrenweg");
        break;
    }
    case 201474:
    {
        returnValue = F("Langengewannweg");
        break;
    }
    case 201475:
    {
        returnValue = F("Langengrassau Alte Str.");
        break;
    }
    case 201476:
    {
        returnValue = F("Langengrassau Dorfstr.");
        break;
    }
    case 201477:
    {
        returnValue = F("Langengrassau Friedensweg");
        break;
    }
    case 201478:
    {
        returnValue = F("Langengrassau Kirchstr.");
        break;
    }
    case 201479:
    {
        returnValue = F("Langengrassau Luckauer Str.");
        break;
    }
    case 201480:
    {
        returnValue = F("Langengrassau Schulplatz");
        break;
    }
    case 201481:
    {
        returnValue = F("Langengrassau Tannenweg");
        break;
    }
    case 201482:
    {
        returnValue = F("Langengrassau Waltersdorfer Str.");
        break;
    }
    case 201483:
    {
        returnValue = F("Langengrassauer Str.");
        break;
    }
    case 201484:
    {
        returnValue = F("Langengrobsdorfer Str.");
        break;
    }
    case 201485:
    {
        returnValue = F("Langengrodener Weg");
        break;
    }
    case 201486:
    {
        returnValue = F("Langengrund");
        break;
    }
    case 201487:
    {
        returnValue = F("Langengrundstr.");
        break;
    }
    case 201488:
    {
        returnValue = F("Langengrundweg");
        break;
    }
    case 201489:
    {
        returnValue = F("Langenhagen");
        break;
    }
    case 201490:
    {
        returnValue = F("Langenhagener Str.");
        break;
    }
    case 201491:
    {
        returnValue = F("Langenhagener Weg");
        break;
    }
    case 201492:
    {
        returnValue = F("Langenhahner Str.");
        break;
    }
    case 201493:
    {
        returnValue = F("Langenhain");
        break;
    }
    case 201494:
    {
        returnValue = F("Langenhainer Str.");
        break;
    }
    case 201495:
    {
        returnValue = F("Langenhainer Weg");
        break;
    }
    case 201496:
    {
        returnValue = F("Langenhakensweg");
        break;
    }
    case 201497:
    {
        returnValue = F("Langenhakenweg");
        break;
    }
    case 201498:
    {
        returnValue = F("Langenhaldenweg");
        break;
    }
    case 201499:
    {
        returnValue = F("Langenhalder Weg");
        break;
    }
    case 201500:
    {
        returnValue = F("Langenhals");
        break;
    }
    case 201501:
    {
        returnValue = F("Langenhansen");
        break;
    }
    case 201502:
    {
        returnValue = F("Langenhard");
        break;
    }
    case 201503:
    {
        returnValue = F("Langenharmer Ring");
        break;
    }
    case 201504:
    {
        returnValue = F("Langenharmer Weg");
        break;
    }
    case 201505:
    {
        returnValue = F("Langenharmstr.");
        break;
    }
    case 201506:
    {
        returnValue = F("Langenharter Str.");
        break;
    }
    case 201507:
    {
        returnValue = F("Langenhaus");
        break;
    }
    case 201508:
    {
        returnValue = F("Langenhauweg");
        break;
    }
    case 201509:
    {
        returnValue = F("Langenhecke");
        break;
    }
    case 201510:
    {
        returnValue = F("Langenheckenweg");
        break;
    }
    case 201511:
    {
        returnValue = F("Langenheckweg");
        break;
    }
    case 201512:
    {
        returnValue = F("Langenhege");
        break;
    }
    case 201513:
    {
        returnValue = F("Langenheider Str.");
        break;
    }
    case 201514:
    {
        returnValue = F("Langenheider Weg");
        break;
    }
    case 201515:
    {
        returnValue = F("Langenheim");
        break;
    }
    case 201516:
    {
        returnValue = F("Langenheisch");
        break;
    }
    case 201517:
    {
        returnValue = F("Langenhennersdorfer Str.");
        break;
    }
    case 201518:
    {
        returnValue = F("Langenhester");
        break;
    }
    case 201519:
    {
        returnValue = F("Langenhettenbach");
        break;
    }
    case 201520:
    {
        returnValue = F("Langenhof");
        break;
    }
    case 201521:
    {
        returnValue = F("Langenhoffstr.");
        break;
    }
    case 201522:
    {
        returnValue = F("Langenhofstr.");
        break;
    }
    case 201523:
    {
        returnValue = F("Langenhofsweg");
        break;
    }
    case 201524:
    {
        returnValue = F("Langenholtenser Str.");
        break;
    }
    case 201525:
    {
        returnValue = F("Langenholthauser Str.");
        break;
    }
    case 201526:
    {
        returnValue = F("Langenholzhauser Str.");
        break;
    }
    case 201527:
    {
        returnValue = F("Langenholzstr.");
        break;
    }
    case 201528:
    {
        returnValue = F("Langenhorn");
        break;
    }
    case 201529:
    {
        returnValue = F("Langenhorner Alter Deich");
        break;
    }
    case 201530:
    {
        returnValue = F("Langenhorner Chaussee");
        break;
    }
    case 201531:
    {
        returnValue = F("Langenhorst");
        break;
    }
    case 201532:
    {
        returnValue = F("Langenhorster Damm");
        break;
    }
    case 201533:
    {
        returnValue = F("Langenhorster Str.");
        break;
    }
    case 201534:
    {
        returnValue = F("Langenhorster Wald");
        break;
    }
    case 201535:
    {
        returnValue = F("Langenhorster Weg");
        break;
    }
    case 201536:
    {
        returnValue = F("Langenhorstweg");
        break;
    }
    case 201537:
    {
        returnValue = F("Langenhäger Str.");
        break;
    }
    case 201538:
    {
        returnValue = F("Langenhövel");
        break;
    }
    case 201539:
    {
        returnValue = F("Langenicher Ring");
        break;
    }
    case 201540:
    {
        returnValue = F("Langenjahrten");
        break;
    }
    case 201541:
    {
        returnValue = F("Langenkamp");
        break;
    }
    case 201542:
    {
        returnValue = F("Langenkamps Heide");
        break;
    }
    case 201543:
    {
        returnValue = F("Langenkampstr.");
        break;
    }
    case 201544:
    {
        returnValue = F("Langenkampsweg");
        break;
    }
    case 201545:
    {
        returnValue = F("Langenkampweg");
        break;
    }
    case 201546:
    {
        returnValue = F("Langenklinter Weg");
        break;
    }
    case 201547:
    {
        returnValue = F("Langenkoppel");
        break;
    }
    case 201548:
    {
        returnValue = F("Langenkreuzweg");
        break;
    }
    case 201549:
    {
        returnValue = F("Langenkämperweg");
        break;
    }
    case 201550:
    {
        returnValue = F("Langenlehstener Str.");
        break;
    }
    case 201551:
    {
        returnValue = F("Langenleitener Holz");
        break;
    }
    case 201552:
    {
        returnValue = F("Langenlensen");
        break;
    }
    case 201553:
    {
        returnValue = F("Langenlipsdorf");
        break;
    }
    case 201554:
    {
        returnValue = F("Langenloch");
        break;
    }
    case 201555:
    {
        returnValue = F("Langenloh");
        break;
    }
    case 201556:
    {
        returnValue = F("Langenlohe");
        break;
    }
    case 201557:
    {
        returnValue = F("Langenloher Str.");
        break;
    }
    case 201558:
    {
        returnValue = F("Langenlonsheimer Str.");
        break;
    }
    case 201559:
    {
        returnValue = F("Langenlöchlesweg");
        break;
    }
    case 201560:
    {
        returnValue = F("Langenlöhstr.");
        break;
    }
    case 201561:
    {
        returnValue = F("Langenmahd");
        break;
    }
    case 201562:
    {
        returnValue = F("Langenmantelstr.");
        break;
    }
    case 201563:
    {
        returnValue = F("Langenmoor");
        break;
    }
    case 201564:
    {
        returnValue = F("Langenmoorer Kirchweg");
        break;
    }
    case 201565:
    {
        returnValue = F("Langenmoorer Str.");
        break;
    }
    case 201566:
    {
        returnValue = F("Langenmoorsdamm");
        break;
    }
    case 201567:
    {
        returnValue = F("Langenmoorsweg");
        break;
    }
    case 201568:
    {
        returnValue = F("Langenmoorweg");
        break;
    }
    case 201569:
    {
        returnValue = F("Langenmooser Weg");
        break;
    }
    case 201570:
    {
        returnValue = F("Langenmoosweg");
        break;
    }
    case 201571:
    {
        returnValue = F("Langenmorgen");
        break;
    }
    case 201572:
    {
        returnValue = F("Langenmorgenstr.");
        break;
    }
    case 201573:
    {
        returnValue = F("Langenmosener Str.");
        break;
    }
    case 201574:
    {
        returnValue = F("Langenmühlenweg");
        break;
    }
    case 201575:
    {
        returnValue = F("Langennaundorfer Str.");
        break;
    }
    case 201576:
    {
        returnValue = F("Langenneufnacher Str.");
        break;
    }
    case 201577:
    {
        returnValue = F("Langenohler Weg");
        break;
    }
    case 201578:
    {
        returnValue = F("Langenohlgasse");
        break;
    }
    case 201579:
    {
        returnValue = F("Langenordnach");
        break;
    }
    case 201580:
    {
        returnValue = F("Langenort");
        break;
    }
    case 201581:
    {
        returnValue = F("Langenpatt");
        break;
    }
    case 201582:
    {
        returnValue = F("Langenplatz");
        break;
    }
    case 201583:
    {
        returnValue = F("Langenpreisinger Str.");
        break;
    }
    case 201584:
    {
        returnValue = F("Langenprozeltener Str.");
        break;
    }
    case 201585:
    {
        returnValue = F("Langenrade");
        break;
    }
    case 201586:
    {
        returnValue = F("Langenrain");
        break;
    }
    case 201587:
    {
        returnValue = F("Langenrainer Str.");
        break;
    }
    case 201588:
    {
        returnValue = F("Langenrainstr.");
        break;
    }
    case 201589:
    {
        returnValue = F("Langenrainweg");
        break;
    }
    case 201590:
    {
        returnValue = F("Langenrather Hof");
        break;
    }
    case 201591:
    {
        returnValue = F("Langenreben");
        break;
    }
    case 201592:
    {
        returnValue = F("Langenredder");
        break;
    }
    case 201593:
    {
        returnValue = F("Langenreem");
        break;
    }
    case 201594:
    {
        returnValue = F("Langenrehmer Dorfstr.");
        break;
    }
    case 201595:
    {
        returnValue = F("Langenrehmer Weg");
        break;
    }
    case 201596:
    {
        returnValue = F("Langenreichenbacher Str.");
        break;
    }
    case 201597:
    {
        returnValue = F("Langenreichener Str.");
        break;
    }
    case 201598:
    {
        returnValue = F("Langenreiherkoppel");
        break;
    }
    case 201599:
    {
        returnValue = F("Langenreinsdorfer Str.");
        break;
    }
    case 201600:
    {
        returnValue = F("Langenreute");
        break;
    }
    case 201601:
    {
        returnValue = F("Langenrieder Str.");
        break;
    }
    case 201602:
    {
        returnValue = F("Langenrieder Weg");
        break;
    }
    case 201603:
    {
        returnValue = F("Langenrieh");
        break;
    }
    case 201604:
    {
        returnValue = F("Langenriether Str.");
        break;
    }
    case 201605:
    {
        returnValue = F("Langenrotweg");
        break;
    }
    case 201606:
    {
        returnValue = F("Langensaal");
        break;
    }
    case 201607:
    {
        returnValue = F("Langensallach");
        break;
    }
    case 201608:
    {
        returnValue = F("Langensalzaer Landstr.");
        break;
    }
    case 201609:
    {
        returnValue = F("Langensalzaer Str.");
        break;
    }
    case 201610:
    {
        returnValue = F("Langensalzaer Tor");
        break;
    }
    case 201611:
    {
        returnValue = F("Langensalzaplatz");
        break;
    }
    case 201612:
    {
        returnValue = F("Langensalzastr.");
        break;
    }
    case 201613:
    {
        returnValue = F("Langensalzwedeler Weg");
        break;
    }
    case 201614:
    {
        returnValue = F("Langensalzwedler Weg");
        break;
    }
    case 201615:
    {
        returnValue = F("Langenschader Str.");
        break;
    }
    case 201616:
    {
        returnValue = F("Langenscheid");
        break;
    }
    case 201617:
    {
        returnValue = F("Langenscheider Weg");
        break;
    }
    case 201618:
    {
        returnValue = F("Langenscheidstal");
        break;
    }
    case 201619:
    {
        returnValue = F("Langenschemelstr.");
        break;
    }
    case 201620:
    {
        returnValue = F("Langenschlag");
        break;
    }
    case 201621:
    {
        returnValue = F("Langenschlage");
        break;
    }
    case 201622:
    {
        returnValue = F("Langenschlatt");
        break;
    }
    case 201623:
    {
        returnValue = F("Langenschwand");
        break;
    }
    case 201624:
    {
        returnValue = F("Langenschwedenweg");
        break;
    }
    case 201625:
    {
        returnValue = F("Langenseden");
        break;
    }
    case 201626:
    {
        returnValue = F("Langensee");
        break;
    }
    case 201627:
    {
        returnValue = F("Langensee Schneise");
        break;
    }
    case 201628:
    {
        returnValue = F("Langenseer Str.");
        break;
    }
    case 201629:
    {
        returnValue = F("Langenseer Weg");
        break;
    }
    case 201630:
    {
        returnValue = F("Langenseestr.");
        break;
    }
    case 201631:
    {
        returnValue = F("Langensegen");
        break;
    }
    case 201632:
    {
        returnValue = F("Langenseifschneise");
        break;
    }
    case 201633:
    {
        returnValue = F("Langenselbolder Str.");
        break;
    }
    case 201634:
    {
        returnValue = F("Langenselbolder Weg");
        break;
    }
    case 201635:
    {
        returnValue = F("Langensendelbacher Weg");
        break;
    }
    case 201636:
    {
        returnValue = F("Langensgasse");
        break;
    }
    case 201637:
    {
        returnValue = F("Langensieck");
        break;
    }
    case 201638:
    {
        returnValue = F("Langensiepenstr.");
        break;
    }
    case 201639:
    {
        returnValue = F("Langensoll");
        break;
    }
    case 201640:
    {
        returnValue = F("Langenstadt");
        break;
    }
    case 201641:
    {
        returnValue = F("Langensteige");
        break;
    }
    case 201642:
    {
        returnValue = F("Langenstein");
        break;
    }
    case 201643:
    {
        returnValue = F("Langensteinacher Str.");
        break;
    }
    case 201644:
    {
        returnValue = F("Langensteinbach");
        break;
    }
    case 201645:
    {
        returnValue = F("Langensteinbacher Str.");
        break;
    }
    case 201646:
    {
        returnValue = F("Langensteinbacher Weg");
        break;
    }
    case 201647:
    {
        returnValue = F("Langensteinblick");
        break;
    }
    case 201648:
    {
        returnValue = F("Langensteiner Grenzweg");
        break;
    }
    case 201649:
    {
        returnValue = F("Langensteiner Str.");
        break;
    }
    case 201650:
    {
        returnValue = F("Langensteiner Weg");
        break;
    }
    case 201651:
    {
        returnValue = F("Langensteinerstr.");
        break;
    }
    case 201652:
    {
        returnValue = F("Langensteinstr.");
        break;
    }
    case 201653:
    {
        returnValue = F("Langensteinweg");
        break;
    }
    case 201654:
    {
        returnValue = F("Langenstr.");
        break;
    }
    case 201655:
    {
        returnValue = F("Langenstrichstr.");
        break;
    }
    case 201656:
    {
        returnValue = F("Langenstruck");
        break;
    }
    case 201657:
    {
        returnValue = F("Langenstück");
        break;
    }
    case 201658:
    {
        returnValue = F("Langenstücken");
        break;
    }
    case 201659:
    {
        returnValue = F("Langenstücken Hufe");
        break;
    }
    case 201660:
    {
        returnValue = F("Langenstücker");
        break;
    }
    case 201661:
    {
        returnValue = F("Langenstücker Weg");
        break;
    }
    case 201662:
    {
        returnValue = F("Langenstückeweg");
        break;
    }
    case 201663:
    {
        returnValue = F("Langensäten");
        break;
    }
    case 201664:
    {
        returnValue = F("Langental");
        break;
    }
    case 201665:
    {
        returnValue = F("Langentaler Str.");
        break;
    }
    case 201666:
    {
        returnValue = F("Langentalerstr.");
        break;
    }
    case 201667:
    {
        returnValue = F("Langentalstr.");
        break;
    }
    case 201668:
    {
        returnValue = F("Langentalsweg");
        break;
    }
    case 201669:
    {
        returnValue = F("Langentalweg");
        break;
    }
    case 201670:
    {
        returnValue = F("Langenteich");
        break;
    }
    case 201671:
    {
        returnValue = F("Langenteiler Str.");
        break;
    }
    case 201672:
    {
        returnValue = F("Langenthal");
        break;
    }
    case 201673:
    {
        returnValue = F("Langenthaler Str.");
        break;
    }
    case 201674:
    {
        returnValue = F("Langenthaler Weg");
        break;
    }
    case 201675:
    {
        returnValue = F("Langenthalerweg");
        break;
    }
    case 201676:
    {
        returnValue = F("Langenthalstr.");
        break;
    }
    case 201677:
    {
        returnValue = F("Langenthalweg");
        break;
    }
    case 201678:
    {
        returnValue = F("Langenthonhausen");
        break;
    }
    case 201679:
    {
        returnValue = F("Langenunger Hof");
        break;
    }
    case 201680:
    {
        returnValue = F("Langenwald");
        break;
    }
    case 201681:
    {
        returnValue = F("Langenwaldstr.");
        break;
    }
    case 201682:
    {
        returnValue = F("Langenwalterstr.");
        break;
    }
    case 201683:
    {
        returnValue = F("Langenwandstr.");
        break;
    }
    case 201684:
    {
        returnValue = F("Langenwasen");
        break;
    }
    case 201685:
    {
        returnValue = F("Langenweddinger Chaussee");
        break;
    }
    case 201686:
    {
        returnValue = F("Langenweddinger Str.");
        break;
    }
    case 201687:
    {
        returnValue = F("Langenweernweg");
        break;
    }
    case 201688:
    {
        returnValue = F("Langenweg");
        break;
    }
    case 201689:
    {
        returnValue = F("Langenwehde");
        break;
    }
    case 201690:
    {
        returnValue = F("Langenwehlen");
        break;
    }
    case 201691:
    {
        returnValue = F("Langenweidenweg");
        break;
    }
    case 201692:
    {
        returnValue = F("Langenwiedenweg");
        break;
    }
    case 201693:
    {
        returnValue = F("Langenwies");
        break;
    }
    case 201694:
    {
        returnValue = F("Langenwiese");
        break;
    }
    case 201695:
    {
        returnValue = F("Langenwiesen");
        break;
    }
    case 201696:
    {
        returnValue = F("Langenwiesenbachweg");
        break;
    }
    case 201697:
    {
        returnValue = F("Langenwiesenweg");
        break;
    }
    case 201698:
    {
        returnValue = F("Langenwiesweg");
        break;
    }
    case 201699:
    {
        returnValue = F("Langenwinkler Hauptstr.");
        break;
    }
    case 201700:
    {
        returnValue = F("Langenwischstr.");
        break;
    }
    case 201701:
    {
        returnValue = F("Langenwischweg");
        break;
    }
    case 201702:
    {
        returnValue = F("Langenwäldchen");
        break;
    }
    case 201703:
    {
        returnValue = F("Langenzeller Buckel");
        break;
    }
    case 201704:
    {
        returnValue = F("Langenzeller Str.");
        break;
    }
    case 201705:
    {
        returnValue = F("Langenzeller Weg");
        break;
    }
    case 201706:
    {
        returnValue = F("Langenzenner Str.");
        break;
    }
    case 201707:
    {
        returnValue = F("Langenzenner Weg");
        break;
    }
    case 201708:
    {
        returnValue = F("Langenäcker");
        break;
    }
    case 201709:
    {
        returnValue = F("Langenäckerstr.");
        break;
    }
    case 201710:
    {
        returnValue = F("Langenäckerweg");
        break;
    }
    case 201711:
    {
        returnValue = F("Langenölser Str.");
        break;
    }
    case 201712:
    {
        returnValue = F("Langeooger Platz");
        break;
    }
    case 201713:
    {
        returnValue = F("Langeooger Str.");
        break;
    }
    case 201714:
    {
        returnValue = F("Langeooger Weg");
        break;
    }
    case 201715:
    {
        returnValue = F("Langeoogstr.");
        break;
    }
    case 201716:
    {
        returnValue = F("Langeoogweg");
        break;
    }
    case 201717:
    {
        returnValue = F("Langepatt");
        break;
    }
    case 201718:
    {
        returnValue = F("Langer Acker");
        break;
    }
    case 201719:
    {
        returnValue = F("Langer Ackerweg");
        break;
    }
    case 201720:
    {
        returnValue = F("Langer Anger");
        break;
    }
    case 201721:
    {
        returnValue = F("Langer Arm");
        break;
    }
    case 201722:
    {
        returnValue = F("Langer Balkenweg");
        break;
    }
    case 201723:
    {
        returnValue = F("Langer Baum");
        break;
    }
    case 201724:
    {
        returnValue = F("Langer Berg");
        break;
    }
    case 201725:
    {
        returnValue = F("Langer Bergweg");
        break;
    }
    case 201726:
    {
        returnValue = F("Langer Boden");
        break;
    }
    case 201727:
    {
        returnValue = F("Langer Bogen");
        break;
    }
    case 201728:
    {
        returnValue = F("Langer Brink");
        break;
    }
    case 201729:
    {
        returnValue = F("Langer Broeksweg");
        break;
    }
    case 201730:
    {
        returnValue = F("Langer Bruch");
        break;
    }
    case 201731:
    {
        returnValue = F("Langer Brühl");
        break;
    }
    case 201732:
    {
        returnValue = F("Langer Brühlweg");
        break;
    }
    case 201733:
    {
        returnValue = F("Langer Bühl");
        break;
    }
    case 201734:
    {
        returnValue = F("Langer Damm");
        break;
    }
    case 201735:
    {
        returnValue = F("Langer Dicktweg");
        break;
    }
    case 201736:
    {
        returnValue = F("Langer Dobbenweg");
        break;
    }
    case 201737:
    {
        returnValue = F("Langer Dooren");
        break;
    }
    case 201738:
    {
        returnValue = F("Langer Durchschnitt");
        break;
    }
    case 201739:
    {
        returnValue = F("Langer Escherweg");
        break;
    }
    case 201740:
    {
        returnValue = F("Langer Espan");
        break;
    }
    case 201741:
    {
        returnValue = F("Langer Fahrweg");
        break;
    }
    case 201742:
    {
        returnValue = F("Langer Flügel");
        break;
    }
    case 201743:
    {
        returnValue = F("Langer Flügelweg");
        break;
    }
    case 201744:
    {
        returnValue = F("Langer Furchenweg");
        break;
    }
    case 201745:
    {
        returnValue = F("Langer Garten");
        break;
    }
    case 201746:
    {
        returnValue = F("Langer Graben");
        break;
    }
    case 201747:
    {
        returnValue = F("Langer Grabenweg");
        break;
    }
    case 201748:
    {
        returnValue = F("Langer Grasweg");
        break;
    }
    case 201749:
    {
        returnValue = F("Langer Graun");
        break;
    }
    case 201750:
    {
        returnValue = F("Langer Grund");
        break;
    }
    case 201751:
    {
        returnValue = F("Langer Grundweg");
        break;
    }
    case 201752:
    {
        returnValue = F("Langer Hagen");
        break;
    }
    case 201753:
    {
        returnValue = F("Langer Hals");
        break;
    }
    case 201754:
    {
        returnValue = F("Langer Heckenweg");
        break;
    }
    case 201755:
    {
        returnValue = F("Langer Heinrich");
        break;
    }
    case 201756:
    {
        returnValue = F("Langer Helmer");
        break;
    }
    case 201757:
    {
        returnValue = F("Langer Hof");
        break;
    }
    case 201758:
    {
        returnValue = F("Langer Holm");
        break;
    }
    case 201759:
    {
        returnValue = F("Langer Hoopweg");
        break;
    }
    case 201760:
    {
        returnValue = F("Langer Hunikelweg");
        break;
    }
    case 201761:
    {
        returnValue = F("Langer Jagdweg");
        break;
    }
    case 201762:
    {
        returnValue = F("Langer Jammer");
        break;
    }
    case 201763:
    {
        returnValue = F("Langer Kamp");
        break;
    }
    case 201764:
    {
        returnValue = F("Langer Kampweg");
        break;
    }
    case 201765:
    {
        returnValue = F("Langer Kornweg");
        break;
    }
    case 201766:
    {
        returnValue = F("Langer Krummer Bruch");
        break;
    }
    case 201767:
    {
        returnValue = F("Langer Krummer Kamp");
        break;
    }
    case 201768:
    {
        returnValue = F("Langer Krummer Weg");
        break;
    }
    case 201769:
    {
        returnValue = F("Langer Kummer");
        break;
    }
    case 201770:
    {
        returnValue = F("Langer Königsberg");
        break;
    }
    case 201771:
    {
        returnValue = F("Langer Loh");
        break;
    }
    case 201772:
    {
        returnValue = F("Langer Lohberg");
        break;
    }
    case 201773:
    {
        returnValue = F("Langer Lulatsch");
        break;
    }
    case 201774:
    {
        returnValue = F("Langer Michelweg");
        break;
    }
    case 201775:
    {
        returnValue = F("Langer Moordamm");
        break;
    }
    case 201776:
    {
        returnValue = F("Langer Morgen");
        break;
    }
    case 201777:
    {
        returnValue = F("Langer Peter");
        break;
    }
    case 201778:
    {
        returnValue = F("Langer Pfad");
        break;
    }
    case 201779:
    {
        returnValue = F("Langer Phal");
        break;
    }
    case 201780:
    {
        returnValue = F("Langer Plan");
        break;
    }
    case 201781:
    {
        returnValue = F("Langer Platz");
        break;
    }
    case 201782:
    {
        returnValue = F("Langer Querdamm");
        break;
    }
    case 201783:
    {
        returnValue = F("Langer Rain");
        break;
    }
    case 201784:
    {
        returnValue = F("Langer Rasen");
        break;
    }
    case 201785:
    {
        returnValue = F("Langer Rasenweg");
        break;
    }
    case 201786:
    {
        returnValue = F("Langer Raum Weg");
        break;
    }
    case 201787:
    {
        returnValue = F("Langer Redder");
        break;
    }
    case 201788:
    {
        returnValue = F("Langer Rehm");
        break;
    }
    case 201789:
    {
        returnValue = F("Langer Rehn");
        break;
    }
    case 201790:
    {
        returnValue = F("Langer Richtweg");
        break;
    }
    case 201791:
    {
        returnValue = F("Langer Riegel");
        break;
    }
    case 201792:
    {
        returnValue = F("Langer Ruthen");
        break;
    }
    case 201793:
    {
        returnValue = F("Langer Rüggen");
        break;
    }
    case 201794:
    {
        returnValue = F("Langer Sand");
        break;
    }
    case 201795:
    {
        returnValue = F("Langer Schemm");
        break;
    }
    case 201796:
    {
        returnValue = F("Langer Schlag");
        break;
    }
    case 201797:
    {
        returnValue = F("Langer See");
        break;
    }
    case 201798:
    {
        returnValue = F("Langer Segen");
        break;
    }
    case 201799:
    {
        returnValue = F("Langer Staudenweg");
        break;
    }
    case 201800:
    {
        returnValue = F("Langer Steg");
        break;
    }
    case 201801:
    {
        returnValue = F("Langer Steig");
        break;
    }
    case 201802:
    {
        returnValue = F("Langer Steinacker");
        break;
    }
    case 201803:
    {
        returnValue = F("Langer Steinkaut Schneise");
        break;
    }
    case 201804:
    {
        returnValue = F("Langer Steinschlag");
        break;
    }
    case 201805:
    {
        returnValue = F("Langer Steinweg");
        break;
    }
    case 201806:
    {
        returnValue = F("Langer Stellweg");
        break;
    }
    case 201807:
    {
        returnValue = F("Langer Stich");
        break;
    }
    case 201808:
    {
        returnValue = F("Langer Stieg");
        break;
    }
    case 201809:
    {
        returnValue = F("Langer Streif");
        break;
    }
    case 201810:
    {
        returnValue = F("Langer Strich");
        break;
    }
    case 201811:
    {
        returnValue = F("Langer Sumpfweg");
        break;
    }
    case 201812:
    {
        returnValue = F("Langer Taschenberg");
        break;
    }
    case 201813:
    {
        returnValue = F("Langer Teichweg");
        break;
    }
    case 201814:
    {
        returnValue = F("Langer Trieb");
        break;
    }
    case 201815:
    {
        returnValue = F("Langer Triebweg");
        break;
    }
    case 201816:
    {
        returnValue = F("Langer Tunnel");
        break;
    }
    case 201817:
    {
        returnValue = F("Langer Wald");
        break;
    }
    case 201818:
    {
        returnValue = F("Langer Wall");
        break;
    }
    case 201819:
    {
        returnValue = F("Langer Wasen");
        break;
    }
    case 201820:
    {
        returnValue = F("Langer Wasenweg");
        break;
    }
    case 201821:
    {
        returnValue = F("Langer Weg");
        break;
    }
    case 201822:
    {
        returnValue = F("Langer Weg Höllmühle");
        break;
    }
    case 201823:
    {
        returnValue = F("Langer Weiher Überlauf");
        break;
    }
    case 201824:
    {
        returnValue = F("Langer Weinberg");
        break;
    }
    case 201825:
    {
        returnValue = F("Langer Weinbergweg");
        break;
    }
    case 201826:
    {
        returnValue = F("Langer Wiesenweg");
        break;
    }
    case 201827:
    {
        returnValue = F("Langer Wingert");
        break;
    }
    case 201828:
    {
        returnValue = F("Langer Wingertsweg");
        break;
    }
    case 201829:
    {
        returnValue = F("Langer Winkel");
        break;
    }
    case 201830:
    {
        returnValue = F("Langer Zaun");
        break;
    }
    case 201831:
    {
        returnValue = F("Langer Zug");
        break;
    }
    case 201832:
    {
        returnValue = F("Langer-Berg-Weg");
        break;
    }
    case 201833:
    {
        returnValue = F("Langer-Grund-Weg");
        break;
    }
    case 201834:
    {
        returnValue = F("Langer-Rain-Weg");
        break;
    }
    case 201835:
    {
        returnValue = F("Langer-Rücken-Sträßchen");
        break;
    }
    case 201836:
    {
        returnValue = F("Langer-Schlag-Weg");
        break;
    }
    case 201837:
    {
        returnValue = F("Langer-Schöller-Weg");
        break;
    }
    case 201838:
    {
        returnValue = F("Langer-Stein-Linie");
        break;
    }
    case 201839:
    {
        returnValue = F("Langer-Stein-Str.");
        break;
    }
    case 201840:
    {
        returnValue = F("Langer-Weg");
        break;
    }
    case 201841:
    {
        returnValue = F("Langer-Weiher-Weg");
        break;
    }
    case 201842:
    {
        returnValue = F("Langerackweg");
        break;
    }
    case 201843:
    {
        returnValue = F("Langerathsweg");
        break;
    }
    case 201844:
    {
        returnValue = F("Langerbeinstr.");
        break;
    }
    case 201845:
    {
        returnValue = F("Langerbeinweg");
        break;
    }
    case 201846:
    {
        returnValue = F("Langerberg");
        break;
    }
    case 201847:
    {
        returnValue = F("Langerbusch");
        break;
    }
    case 201848:
    {
        returnValue = F("Langerdeich");
        break;
    }
    case 201849:
    {
        returnValue = F("Langereck");
        break;
    }
    case 201850:
    {
        returnValue = F("Langereihe");
        break;
    }
    case 201851:
    {
        returnValue = F("Langereihe-Nord");
        break;
    }
    case 201852:
    {
        returnValue = F("Langerfelder Markt");
        break;
    }
    case 201853:
    {
        returnValue = F("Langerfelder Str.");
        break;
    }
    case 201854:
    {
        returnValue = F("Langerfeldstr.");
        break;
    }
    case 201855:
    {
        returnValue = F("Langerfeldt-Weg");
        break;
    }
    case 201856:
    {
        returnValue = F("Langergrund");
        break;
    }
    case 201857:
    {
        returnValue = F("Langergrundweg");
        break;
    }
    case 201858:
    {
        returnValue = F("Langerhansstr.");
        break;
    }
    case 201859:
    {
        returnValue = F("Langerhornsweg");
        break;
    }
    case 201860:
    {
        returnValue = F("Langerie");
        break;
    }
    case 201861:
    {
        returnValue = F("Langerler Hof");
        break;
    }
    case 201862:
    {
        returnValue = F("Langermoos");
        break;
    }
    case 201863:
    {
        returnValue = F("Langermorgenpfad");
        break;
    }
    case 201864:
    {
        returnValue = F("Langern");
        break;
    }
    case 201865:
    {
        returnValue = F("Langernstr.");
        break;
    }
    case 201866:
    {
        returnValue = F("Langerohstr.");
        break;
    }
    case 201867:
    {
        returnValue = F("Langerringer Str.");
        break;
    }
    case 201868:
    {
        returnValue = F("Langerringerstr.");
        break;
    }
    case 201869:
    {
        returnValue = F("Langerscheider Weg");
        break;
    }
    case 201870:
    {
        returnValue = F("Langerscheidt");
        break;
    }
    case 201871:
    {
        returnValue = F("Langersfeld");
        break;
    }
    case 201872:
    {
        returnValue = F("Langersteig-Sackweg");
        break;
    }
    case 201873:
    {
        returnValue = F("Langerstr.");
        break;
    }
    case 201874:
    {
        returnValue = F("Langert");
        break;
    }
    case 201875:
    {
        returnValue = F("Langertalweg");
        break;
    }
    case 201876:
    {
        returnValue = F("Langertebeneweg");
        break;
    }
    case 201877:
    {
        returnValue = F("Langerthof");
        break;
    }
    case 201878:
    {
        returnValue = F("Langertsheckenweg");
        break;
    }
    case 201879:
    {
        returnValue = F("Langertstr.");
        break;
    }
    case 201880:
    {
        returnValue = F("Langertsträßchen");
        break;
    }
    case 201881:
    {
        returnValue = F("Langertsweg");
        break;
    }
    case 201882:
    {
        returnValue = F("Langertweg");
        break;
    }
    case 201883:
    {
        returnValue = F("Langerwaldweg");
        break;
    }
    case 201884:
    {
        returnValue = F("Langerweg");
        break;
    }
    case 201885:
    {
        returnValue = F("Langerwehe Bahnhof (Bus)");
        break;
    }
    case 201886:
    {
        returnValue = F("Langerweher Str.");
        break;
    }
    case 201887:
    {
        returnValue = F("Langerwiesenweg");
        break;
    }
    case 201888:
    {
        returnValue = F("Langerwischer Feldstr.");
        break;
    }
    case 201889:
    {
        returnValue = F("Langerwischer Str.");
        break;
    }
    case 201890:
    {
        returnValue = F("Langerwischer Weg");
        break;
    }
    case 201891:
    {
        returnValue = F("Langerönner Weg");
        break;
    }
    case 201892:
    {
        returnValue = F("Langes Anlagen");
        break;
    }
    case 201893:
    {
        returnValue = F("Langes Eck");
        break;
    }
    case 201894:
    {
        returnValue = F("Langes Eschle");
        break;
    }
    case 201895:
    {
        returnValue = F("Langes Feld");
        break;
    }
    case 201896:
    {
        returnValue = F("Langes Geräumt");
        break;
    }
    case 201897:
    {
        returnValue = F("Langes Gestell");
        break;
    }
    case 201898:
    {
        returnValue = F("Langes Gewand");
        break;
    }
    case 201899:
    {
        returnValue = F("Langes Gewann");
        break;
    }
    case 201900:
    {
        returnValue = F("Langes Gräthlein");
        break;
    }
    case 201901:
    {
        returnValue = F("Langes Gässle");
        break;
    }
    case 201902:
    {
        returnValue = F("Langes Gässlä");
        break;
    }
    case 201903:
    {
        returnValue = F("Langes Gäßchen");
        break;
    }
    case 201904:
    {
        returnValue = F("Langes Gäßle");
        break;
    }
    case 201905:
    {
        returnValue = F("Langes Handtuch");
        break;
    }
    case 201906:
    {
        returnValue = F("Langes Hart");
        break;
    }
    case 201907:
    {
        returnValue = F("Langes Hof");
        break;
    }
    case 201908:
    {
        returnValue = F("Langes Hofkoppel");
        break;
    }
    case 201909:
    {
        returnValue = F("Langes Horn");
        break;
    }
    case 201910:
    {
        returnValue = F("Langes Kamp");
        break;
    }
    case 201911:
    {
        returnValue = F("Langes Kreuz");
        break;
    }
    case 201912:
    {
        returnValue = F("Langes Laich");
        break;
    }
    case 201913:
    {
        returnValue = F("Langes Moor");
        break;
    }
    case 201914:
    {
        returnValue = F("Langes Steinach");
        break;
    }
    case 201915:
    {
        returnValue = F("Langes Sträßchen");
        break;
    }
    case 201916:
    {
        returnValue = F("Langes Sträßle");
        break;
    }
    case 201917:
    {
        returnValue = F("Langes Stück");
        break;
    }
    case 201918:
    {
        returnValue = F("Langes Sächsengäßchen");
        break;
    }
    case 201919:
    {
        returnValue = F("Langes Tal");
        break;
    }
    case 201920:
    {
        returnValue = F("Langes Wasser");
        break;
    }
    case 201921:
    {
        returnValue = F("Langes Wegle");
        break;
    }
    case 201922:
    {
        returnValue = F("Langes-Teich");
        break;
    }
    case 201923:
    {
        returnValue = F("Langesandstr.");
        break;
    }
    case 201924:
    {
        returnValue = F("Langesberg");
        break;
    }
    case 201925:
    {
        returnValue = F("Langesbühlweg");
        break;
    }
    case 201926:
    {
        returnValue = F("Langescharweg");
        break;
    }
    case 201927:
    {
        returnValue = F("Langesche Wiese");
        break;
    }
    case 201928:
    {
        returnValue = F("Langescheidtstr.");
        break;
    }
    case 201929:
    {
        returnValue = F("Langesee Schneise");
        break;
    }
    case 201930:
    {
        returnValue = F("Langeseitenschneise");
        break;
    }
    case 201931:
    {
        returnValue = F("Langesgraben");
        break;
    }
    case 201932:
    {
        returnValue = F("Langeskovweg");
        break;
    }
    case 201933:
    {
        returnValue = F("Langestein Schneise");
        break;
    }
    case 201934:
    {
        returnValue = F("Langestr.");
        break;
    }
    case 201935:
    {
        returnValue = F("Langesträngstr.");
        break;
    }
    case 201936:
    {
        returnValue = F("Langestück");
        break;
    }
    case 201937:
    {
        returnValue = F("Langestücken");
        break;
    }
    case 201938:
    {
        returnValue = F("Langestückstr.");
        break;
    }
    case 201939:
    {
        returnValue = F("Langetal");
        break;
    }
    case 201940:
    {
        returnValue = F("Langetalstr.");
        break;
    }
    case 201941:
    {
        returnValue = F("Langethalstr.");
        break;
    }
    case 201942:
    {
        returnValue = F("Langetränkeweg");
        break;
    }
    case 201943:
    {
        returnValue = F("Langevennweg");
        break;
    }
    case 201944:
    {
        returnValue = F("Langewahler Str.");
        break;
    }
    case 201945:
    {
        returnValue = F("Langewand");
        break;
    }
    case 201946:
    {
        returnValue = F("Langewanneweg");
        break;
    }
    case 201947:
    {
        returnValue = F("Langewannschneise");
        break;
    }
    case 201948:
    {
        returnValue = F("Langeweg");
        break;
    }
    case 201949:
    {
        returnValue = F("Langeweidstr.");
        break;
    }
    case 201950:
    {
        returnValue = F("Langewende");
        break;
    }
    case 201951:
    {
        returnValue = F("Langewendungschneise");
        break;
    }
    case 201952:
    {
        returnValue = F("Langewenne");
        break;
    }
    case 201953:
    {
        returnValue = F("Langewerther Landstr.");
        break;
    }
    case 201954:
    {
        returnValue = F("Langewies");
        break;
    }
    case 201955:
    {
        returnValue = F("Langewieschestr.");
        break;
    }
    case 201956:
    {
        returnValue = F("Langewiese");
        break;
    }
    case 201957:
    {
        returnValue = F("Langewiesener Landstr.");
        break;
    }
    case 201958:
    {
        returnValue = F("Langewiesener Str.");
        break;
    }
    case 201959:
    {
        returnValue = F("Langewiesenstr.");
        break;
    }
    case 201960:
    {
        returnValue = F("Langewiesenweg");
        break;
    }
    case 201961:
    {
        returnValue = F("Langewieser Str.");
        break;
    }
    case 201962:
    {
        returnValue = F("Langewingertstr.");
        break;
    }
    case 201963:
    {
        returnValue = F("Langewisk");
        break;
    }
    case 201964:
    {
        returnValue = F("Langewnhaslacher Weg");
        break;
    }
    case 201965:
    {
        returnValue = F("Langeworth");
        break;
    }
    case 201966:
    {
        returnValue = F("Langeäckern");
        break;
    }
    case 201967:
    {
        returnValue = F("Langeäckerweg");
        break;
    }
    case 201968:
    {
        returnValue = F("Langfasthöhenweg");
        break;
    }
    case 201969:
    {
        returnValue = F("Langfaststr.");
        break;
    }
    case 201970:
    {
        returnValue = F("Langfastweg");
        break;
    }
    case 201971:
    {
        returnValue = F("Langfeld");
        break;
    }
    case 201972:
    {
        returnValue = F("Langfeldstr.");
        break;
    }
    case 201973:
    {
        returnValue = F("Langfeldsträßle");
        break;
    }
    case 201974:
    {
        returnValue = F("Langfeldsweg");
        break;
    }
    case 201975:
    {
        returnValue = F("Langfeldweg");
        break;
    }
    case 201976:
    {
        returnValue = F("Langflecht");
        break;
    }
    case 201977:
    {
        returnValue = F("Langflur");
        break;
    }
    case 201978:
    {
        returnValue = F("Langforchenweg");
        break;
    }
    case 201979:
    {
        returnValue = F("Langfort");
        break;
    }
    case 201980:
    {
        returnValue = F("Langforter Str.");
        break;
    }
    case 201981:
    {
        returnValue = F("Langforthstr.");
        break;
    }
    case 201982:
    {
        returnValue = F("Langfraustr.");
        break;
    }
    case 201983:
    {
        returnValue = F("Langfuhr");
        break;
    }
    case 201984:
    {
        returnValue = F("Langfuhren");
        break;
    }
    case 201985:
    {
        returnValue = F("Langfuhrenweg");
        break;
    }
    case 201986:
    {
        returnValue = F("Langfuhrer Str.");
        break;
    }
    case 201987:
    {
        returnValue = F("Langfuhrstr.");
        break;
    }
    case 201988:
    {
        returnValue = F("Langfurch");
        break;
    }
    case 201989:
    {
        returnValue = F("Langfurchenweg");
        break;
    }
    case 201990:
    {
        returnValue = F("Langfurth");
        break;
    }
    case 201991:
    {
        returnValue = F("Langfördener Str.");
        break;
    }
    case 201992:
    {
        returnValue = F("Langförderweg");
        break;
    }
    case 201993:
    {
        returnValue = F("Langgallweg");
        break;
    }
    case 201994:
    {
        returnValue = F("Langgarten");
        break;
    }
    case 201995:
    {
        returnValue = F("Langgartenstr.");
        break;
    }
    case 201996:
    {
        returnValue = F("Langgartenweg");
        break;
    }
    case 201997:
    {
        returnValue = F("Langgass");
        break;
    }
    case 201998:
    {
        returnValue = F("Langgasse");
        break;
    }
    case 201999:
    {
        returnValue = F("Langgasse Ebermergen");
        break;
    }
    case 202000:
    {
        returnValue = F("Langgasse Großsorheim");
        break;
    }
    case 202001:
    {
        returnValue = F("Langgassen");
        break;
    }
    case 202002:
    {
        returnValue = F("Langgassenweg");
        break;
    }
    case 202003:
    {
        returnValue = F("Langgaß");
        break;
    }
    case 202004:
    {
        returnValue = F("Langgehauweg");
        break;
    }
    case 202005:
    {
        returnValue = F("Langgeherensträßle");
        break;
    }
    case 202006:
    {
        returnValue = F("Langgehrensträßchen");
        break;
    }
    case 202007:
    {
        returnValue = F("Langgeräumt");
        break;
    }
    case 202008:
    {
        returnValue = F("Langgewand");
        break;
    }
    case 202009:
    {
        returnValue = F("Langgewann");
        break;
    }
    case 202010:
    {
        returnValue = F("Langgewanne");
        break;
    }
    case 202011:
    {
        returnValue = F("Langgewannstr.");
        break;
    }
    case 202012:
    {
        returnValue = F("Langgewannweg");
        break;
    }
    case 202013:
    {
        returnValue = F("Langgraben");
        break;
    }
    case 202014:
    {
        returnValue = F("Langgrabener Ring");
        break;
    }
    case 202015:
    {
        returnValue = F("Langgrabenstr.");
        break;
    }
    case 202016:
    {
        returnValue = F("Langgrabenweg");
        break;
    }
    case 202017:
    {
        returnValue = F("Langgrube");
        break;
    }
    case 202018:
    {
        returnValue = F("Langgruben");
        break;
    }
    case 202019:
    {
        returnValue = F("Langgrund");
        break;
    }
    case 202020:
    {
        returnValue = F("Langgrundweg");
        break;
    }
    case 202021:
    {
        returnValue = F("Langgräfe");
        break;
    }
    case 202022:
    {
        returnValue = F("Langgrün");
        break;
    }
    case 202023:
    {
        returnValue = F("Langgrüner Str.");
        break;
    }
    case 202024:
    {
        returnValue = F("Langguthstr.");
        break;
    }
    case 202025:
    {
        returnValue = F("Langgutsberg");
        break;
    }
    case 202026:
    {
        returnValue = F("Langgwänd");
        break;
    }
    case 202027:
    {
        returnValue = F("Langgärtenstr.");
        break;
    }
    case 202028:
    {
        returnValue = F("Langgässerstr.");
        break;
    }
    case 202029:
    {
        returnValue = F("Langgässerweg");
        break;
    }
    case 202030:
    {
        returnValue = F("Langgässle");
        break;
    }
    case 202031:
    {
        returnValue = F("Langgönser Str.");
        break;
    }
    case 202032:
    {
        returnValue = F("Langhagweg");
        break;
    }
    case 202033:
    {
        returnValue = F("Langhalde");
        break;
    }
    case 202034:
    {
        returnValue = F("Langhaldenweg");
        break;
    }
    case 202035:
    {
        returnValue = F("Langhaldeweg");
        break;
    }
    case 202036:
    {
        returnValue = F("Langhammerstr.");
        break;
    }
    case 202037:
    {
        returnValue = F("Langhans");
        break;
    }
    case 202038:
    {
        returnValue = F("Langhansstr.");
        break;
    }
    case 202039:
    {
        returnValue = F("Langhansweg");
        break;
    }
    case 202040:
    {
        returnValue = F("Langhardtring");
        break;
    }
    case 202041:
    {
        returnValue = F("Langhardtweg");
        break;
    }
    case 202042:
    {
        returnValue = F("Langhardweg");
        break;
    }
    case 202043:
    {
        returnValue = F("Langhauhüttenweg");
        break;
    }
    case 202044:
    {
        returnValue = F("Langhausener Str.");
        break;
    }
    case 202045:
    {
        returnValue = F("Langhauser Weg");
        break;
    }
    case 202046:
    {
        returnValue = F("Langhausring");
        break;
    }
    case 202047:
    {
        returnValue = F("Langhausstr.");
        break;
    }
    case 202048:
    {
        returnValue = F("Langhausweg");
        break;
    }
    case 202049:
    {
        returnValue = F("Langhauweg");
        break;
    }
    case 202050:
    {
        returnValue = F("Langheck");
        break;
    }
    case 202051:
    {
        returnValue = F("Langheckenstr.");
        break;
    }
    case 202052:
    {
        returnValue = F("Langheckenweg");
        break;
    }
    case 202053:
    {
        returnValue = F("Langhecker Str.");
        break;
    }
    case 202054:
    {
        returnValue = F("Langhecker Weg");
        break;
    }
    case 202055:
    {
        returnValue = F("Langheckstr.");
        break;
    }
    case 202056:
    {
        returnValue = F("Langheide");
        break;
    }
    case 202057:
    {
        returnValue = F("Langheimer Str.");
        break;
    }
    case 202058:
    {
        returnValue = F("Langheimer Weg");
        break;
    }
    case 202059:
    {
        returnValue = F("Langheimstr.");
        break;
    }
    case 202060:
    {
        returnValue = F("Langheinrichstr.");
        break;
    }
    case 202061:
    {
        returnValue = F("Langhennersdorfer Str.");
        break;
    }
    case 202062:
    {
        returnValue = F("Langhof");
        break;
    }
    case 202063:
    {
        returnValue = F("Langhofweg");
        break;
    }
    case 202064:
    {
        returnValue = F("Langhohl");
        break;
    }
    case 202065:
    {
        returnValue = F("Langholter Str.");
        break;
    }
    case 202066:
    {
        returnValue = F("Langholter Weg");
        break;
    }
    case 202067:
    {
        returnValue = F("Langholz");
        break;
    }
    case 202068:
    {
        returnValue = F("Langholzbodenweg");
        break;
    }
    case 202069:
    {
        returnValue = F("Langholzstr.");
        break;
    }
    case 202070:
    {
        returnValue = F("Langholzweg");
        break;
    }
    case 202071:
    {
        returnValue = F("Langhoopweg");
        break;
    }
    case 202072:
    {
        returnValue = F("Langhorster Str.");
        break;
    }
    case 202073:
    {
        returnValue = F("Langhorststr.");
        break;
    }
    case 202074:
    {
        returnValue = F("Langhurststr.");
        break;
    }
    case 202075:
    {
        returnValue = F("Langhusveien");
        break;
    }
    case 202076:
    {
        returnValue = F("Langhäger Chaussee");
        break;
    }
    case 202077:
    {
        returnValue = F("Langhöh");
        break;
    }
    case 202078:
    {
        returnValue = F("Langhölterweg");
        break;
    }
    case 202079:
    {
        returnValue = F("Langhörn");
        break;
    }
    case 202080:
    {
        returnValue = F("Langjaaß");
        break;
    }
    case 202081:
    {
        returnValue = F("Langjalsweg");
        break;
    }
    case 202082:
    {
        returnValue = F("Langjohrd");
        break;
    }
    case 202083:
    {
        returnValue = F("Langjähren");
        break;
    }
    case 202084:
    {
        returnValue = F("Langkamp");
        break;
    }
    case 202085:
    {
        returnValue = F("Langkampsweg");
        break;
    }
    case 202086:
    {
        returnValue = F("Langkarl");
        break;
    }
    case 202087:
    {
        returnValue = F("Langkeitstr.");
        break;
    }
    case 202088:
    {
        returnValue = F("Langklingenweg");
        break;
    }
    case 202089:
    {
        returnValue = F("Langklingerhof");
        break;
    }
    case 202090:
    {
        returnValue = F("Langknüll");
        break;
    }
    case 202091:
    {
        returnValue = F("Langkofelweg");
        break;
    }
    case 202092:
    {
        returnValue = F("Langkoppel");
        break;
    }
    case 202093:
    {
        returnValue = F("Langkoppelsweg");
        break;
    }
    case 202094:
    {
        returnValue = F("Langkoppelweg");
        break;
    }
    case 202095:
    {
        returnValue = F("Langkweg");
        break;
    }
    case 202096:
    {
        returnValue = F("Langköpfleweg");
        break;
    }
    case 202097:
    {
        returnValue = F("Langlandsweg");
        break;
    }
    case 202098:
    {
        returnValue = F("Langlauf- / Skatingstrecke");
        break;
    }
    case 202099:
    {
        returnValue = F("Langleben");
        break;
    }
    case 202100:
    {
        returnValue = F("Langlebenhofweg");
        break;
    }
    case 202101:
    {
        returnValue = F("Langleidweg");
        break;
    }
    case 202102:
    {
        returnValue = F("Langlerweg");
        break;
    }
    case 202103:
    {
        returnValue = F("Langley Boulevard");
        break;
    }
    case 202104:
    {
        returnValue = F("Langlinger Str.");
        break;
    }
    case 202105:
    {
        returnValue = F("Langlinger Weg");
        break;
    }
    case 202106:
    {
        returnValue = F("Langlochweg");
        break;
    }
    case 202107:
    {
        returnValue = F("Langloher Weg");
        break;
    }
    case 202108:
    {
        returnValue = F("Langlohstr.");
        break;
    }
    case 202109:
    {
        returnValue = F("Langlosenweg");
        break;
    }
    case 202110:
    {
        returnValue = F("Langlütjenring");
        break;
    }
    case 202111:
    {
        returnValue = F("Langlütjensand");
        break;
    }
    case 202112:
    {
        returnValue = F("Langlütjenstr.");
        break;
    }
    case 202113:
    {
        returnValue = F("Langmaar");
        break;
    }
    case 202114:
    {
        returnValue = F("Langmannskamp");
        break;
    }
    case 202115:
    {
        returnValue = F("Langmatt");
        break;
    }
    case 202116:
    {
        returnValue = F("Langmatten");
        break;
    }
    case 202117:
    {
        returnValue = F("Langmattenweg");
        break;
    }
    case 202118:
    {
        returnValue = F("Langmattstr.");
        break;
    }
    case 202119:
    {
        returnValue = F("Langmattweg");
        break;
    }
    case 202120:
    {
        returnValue = F("Langmauer");
        break;
    }
    case 202121:
    {
        returnValue = F("Langmeerweg");
        break;
    }
    case 202122:
    {
        returnValue = F("Langmeiler Weg");
        break;
    }
    case 202123:
    {
        returnValue = F("Langmirjen");
        break;
    }
    case 202124:
    {
        returnValue = F("Langmoosweg");
        break;
    }
    case 202125:
    {
        returnValue = F("Langmossweg");
        break;
    }
    case 202126:
    {
        returnValue = F("Langmösle");
        break;
    }
    case 202127:
    {
        returnValue = F("Langmüllergasse");
        break;
    }
    case 202128:
    {
        returnValue = F("Langnau");
        break;
    }
    case 202129:
    {
        returnValue = F("Langnerstr.");
        break;
    }
    case 202130:
    {
        returnValue = F("Langnower Ausbau");
        break;
    }
    case 202131:
    {
        returnValue = F("Langnower Str.");
        break;
    }
    case 202132:
    {
        returnValue = F("Langnrieh");
        break;
    }
    case 202133:
    {
        returnValue = F("Langobardenplatz");
        break;
    }
    case 202134:
    {
        returnValue = F("Langobardenring");
        break;
    }
    case 202135:
    {
        returnValue = F("Langobardenstr.");
        break;
    }
    case 202136:
    {
        returnValue = F("Langobardentreppe");
        break;
    }
    case 202137:
    {
        returnValue = F("Langobardenweg");
        break;
    }
    case 202138:
    {
        returnValue = F("Langohrweg");
        break;
    }
    case 202139:
    {
        returnValue = F("Langoner Str.");
        break;
    }
    case 202140:
    {
        returnValue = F("Langpannsweg");
        break;
    }
    case 202141:
    {
        returnValue = F("Langquaider Str.");
        break;
    }
    case 202142:
    {
        returnValue = F("Langquarter Str.");
        break;
    }
    case 202143:
    {
        returnValue = F("Langrainstr.");
        break;
    }
    case 202144:
    {
        returnValue = F("Langredder");
        break;
    }
    case 202145:
    {
        returnValue = F("Langreder Mark");
        break;
    }
    case 202146:
    {
        returnValue = F("Langreder Str.");
        break;
    }
    case 202147:
    {
        returnValue = F("Langrederhof");
        break;
    }
    case 202148:
    {
        returnValue = F("Langrederstr.");
        break;
    }
    case 202149:
    {
        returnValue = F("Langres Str.");
        break;
    }
    case 202150:
    {
        returnValue = F("Langriegelstr.");
        break;
    }
    case 202151:
    {
        returnValue = F("Langrißweg");
        break;
    }
    case 202152:
    {
        returnValue = F("Langrod");
        break;
    }
    case 202153:
    {
        returnValue = F("Langrüttenstr.");
        break;
    }
    case 202154:
    {
        returnValue = F("Langs Thorweg");
        break;
    }
    case 202155:
    {
        returnValue = F("Langscheder Str.");
        break;
    }
    case 202156:
    {
        returnValue = F("Langschedestr.");
        break;
    }
    case 202157:
    {
        returnValue = F("Langscheid");
        break;
    }
    case 202158:
    {
        returnValue = F("Langscheide");
        break;
    }
    case 202159:
    {
        returnValue = F("Langscheider Str.");
        break;
    }
    case 202160:
    {
        returnValue = F("Langschenweg");
        break;
    }
    case 202161:
    {
        returnValue = F("Langschieder Weg");
        break;
    }
    case 202162:
    {
        returnValue = F("Langschiedstr.");
        break;
    }
    case 202163:
    {
        returnValue = F("Langschneise");
        break;
    }
    case 202164:
    {
        returnValue = F("Langschoß");
        break;
    }
    case 202165:
    {
        returnValue = F("Langschwander Weg");
        break;
    }
    case 202166:
    {
        returnValue = F("Langsdamm");
        break;
    }
    case 202167:
    {
        returnValue = F("Langsdorfer Weg");
        break;
    }
    case 202168:
    {
        returnValue = F("Langsdorffstr.");
        break;
    }
    case 202169:
    {
        returnValue = F("Langsdorfstr.");
        break;
    }
    case 202170:
    {
        returnValue = F("Langseer Weg");
        break;
    }
    case 202171:
    {
        returnValue = F("Langseestr.");
        break;
    }
    case 202172:
    {
        returnValue = F("Langseeweg");
        break;
    }
    case 202173:
    {
        returnValue = F("Langsgasse");
        break;
    }
    case 202174:
    {
        returnValue = F("Langsiedlung");
        break;
    }
    case 202175:
    {
        returnValue = F("Langsodel");
        break;
    }
    case 202176:
    {
        returnValue = F("Langsoll");
        break;
    }
    case 202177:
    {
        returnValue = F("Langsower Str.");
        break;
    }
    case 202178:
    {
        returnValue = F("Langstedter Str.");
        break;
    }
    case 202179:
    {
        returnValue = F("Langsteert");
        break;
    }
    case 202180:
    {
        returnValue = F("Langsteeven");
        break;
    }
    case 202181:
    {
        returnValue = F("Langstegerweg");
        break;
    }
    case 202182:
    {
        returnValue = F("Langster Str.");
        break;
    }
    case 202183:
    {
        returnValue = F("Langstr.");
        break;
    }
    case 202184:
    {
        returnValue = F("Langstr.r Weg");
        break;
    }
    case 202185:
    {
        returnValue = F("Langstreng");
        break;
    }
    case 202186:
    {
        returnValue = F("Langstriegelweg");
        break;
    }
    case 202187:
    {
        returnValue = F("Langstädter Pfad");
        break;
    }
    case 202188:
    {
        returnValue = F("Langstädter Schneise");
        break;
    }
    case 202189:
    {
        returnValue = F("Langstädter Str.");
        break;
    }
    case 202190:
    {
        returnValue = F("Langstädter Weg");
        break;
    }
    case 202191:
    {
        returnValue = F("Langstück");
        break;
    }
    case 202192:
    {
        returnValue = F("Langstücken");
        break;
    }
    case 202193:
    {
        returnValue = F("Langstückenweg");
        break;
    }
    case 202194:
    {
        returnValue = F("Langstücker Weg");
        break;
    }
    case 202195:
    {
        returnValue = F("Langstücksträßle");
        break;
    }
    case 202196:
    {
        returnValue = F("Langstücksweg");
        break;
    }
    case 202197:
    {
        returnValue = F("Langsweg");
        break;
    }
    case 202198:
    {
        returnValue = F("Langtalweg");
        break;
    }
    case 202199:
    {
        returnValue = F("Langtoft");
        break;
    }
    case 202200:
    {
        returnValue = F("Langula-Kammerforst");
        break;
    }
    case 202201:
    {
        returnValue = F("Langulaer Str.");
        break;
    }
    case 202202:
    {
        returnValue = F("Langulaer Tal");
        break;
    }
    case 202203:
    {
        returnValue = F("Langulaer Weg");
        break;
    }
    case 202204:
    {
        returnValue = F("Langustenweg");
        break;
    }
    case 202205:
    {
        returnValue = F("Langwadener Str.");
        break;
    }
    case 202206:
    {
        returnValue = F("Langwader Str.");
        break;
    }
    case 202207:
    {
        returnValue = F("Langwagen");
        break;
    }
    case 202208:
    {
        returnValue = F("Langwahn");
        break;
    }
    case 202209:
    {
        returnValue = F("Langwaider Str.");
        break;
    }
    case 202210:
    {
        returnValue = F("Langwaldweg");
        break;
    }
    case 202211:
    {
        returnValue = F("Langwaller Pad");
        break;
    }
    case 202212:
    {
        returnValue = F("Langwandstr.");
        break;
    }
    case 202213:
    {
        returnValue = F("Langwarder Str.");
        break;
    }
    case 202214:
    {
        returnValue = F("Langwartweg");
        break;
    }
    case 202215:
    {
        returnValue = F("Langwasen");
        break;
    }
    case 202216:
    {
        returnValue = F("Langwasengäßle");
        break;
    }
    case 202217:
    {
        returnValue = F("Langwasenweg");
        break;
    }
    case 202218:
    {
        returnValue = F("Langwasser");
        break;
    }
    case 202219:
    {
        returnValue = F("Langwasserstr.");
        break;
    }
    case 202220:
    {
        returnValue = F("Langwatte");
        break;
    }
    case 202221:
    {
        returnValue = F("Langwattenweg");
        break;
    }
    case 202222:
    {
        returnValue = F("Langwedeler Bahnhofstr.");
        break;
    }
    case 202223:
    {
        returnValue = F("Langwedeler Str.");
        break;
    }
    case 202224:
    {
        returnValue = F("Langweg");
        break;
    }
    case 202225:
    {
        returnValue = F("Langwegel");
        break;
    }
    case 202226:
    {
        returnValue = F("Langweger Str.");
        break;
    }
    case 202227:
    {
        returnValue = F("Langwegstr.");
        break;
    }
    case 202228:
    {
        returnValue = F("Langwehrstr.");
        break;
    }
    case 202229:
    {
        returnValue = F("Langwehrweg");
        break;
    }
    case 202230:
    {
        returnValue = F("Langweid");
        break;
    }
    case 202231:
    {
        returnValue = F("Langweidenstr.");
        break;
    }
    case 202232:
    {
        returnValue = F("Langweider Str.");
        break;
    }
    case 202233:
    {
        returnValue = F("Langweider Weg");
        break;
    }
    case 202234:
    {
        returnValue = F("Langweidmühle");
        break;
    }
    case 202235:
    {
        returnValue = F("Langweidstr.");
        break;
    }
    case 202236:
    {
        returnValue = F("Langweiler Weg");
        break;
    }
    case 202237:
    {
        returnValue = F("Langweilerhof");
        break;
    }
    case 202238:
    {
        returnValue = F("Langweilerstr.");
        break;
    }
    case 202239:
    {
        returnValue = F("Langweilerweg");
        break;
    }
    case 202240:
    {
        returnValue = F("Langweilsteg");
        break;
    }
    case 202241:
    {
        returnValue = F("Langwied");
        break;
    }
    case 202242:
    {
        returnValue = F("Langwieden");
        break;
    }
    case 202243:
    {
        returnValue = F("Langwiedener Str.");
        break;
    }
    case 202244:
    {
        returnValue = F("Langwieder Str.");
        break;
    }
    case 202245:
    {
        returnValue = F("Langwiedstr.");
        break;
    }
    case 202246:
    {
        returnValue = F("Langwiedweg");
        break;
    }
    case 202247:
    {
        returnValue = F("Langwielerstr.");
        break;
    }
    case 202248:
    {
        returnValue = F("Langwies");
        break;
    }
    case 202249:
    {
        returnValue = F("Langwiese");
        break;
    }
    case 202250:
    {
        returnValue = F("Langwiesen");
        break;
    }
    case 202251:
    {
        returnValue = F("Langwiesenbrücke");
        break;
    }
    case 202252:
    {
        returnValue = F("Langwiesenschneise");
        break;
    }
    case 202253:
    {
        returnValue = F("Langwiesenstr.");
        break;
    }
    case 202254:
    {
        returnValue = F("Langwiesentalstr.");
        break;
    }
    case 202255:
    {
        returnValue = F("Langwiesenweg");
        break;
    }
    case 202256:
    {
        returnValue = F("Langwiesenäcker");
        break;
    }
    case 202257:
    {
        returnValue = F("Langwieser Str.");
        break;
    }
    case 202258:
    {
        returnValue = F("Langwiesstr.");
        break;
    }
    case 202259:
    {
        returnValue = F("Langwiesweg");
        break;
    }
    case 202260:
    {
        returnValue = F("Langwinklerstr.");
        break;
    }
    case 202261:
    {
        returnValue = F("Langwisch");
        break;
    }
    case 202262:
    {
        returnValue = F("Langwitz");
        break;
    }
    case 202263:
    {
        returnValue = F("Langwuhrweiherwiesen");
        break;
    }
    case 202264:
    {
        returnValue = F("Langwühr");
        break;
    }
    case 202265:
    {
        returnValue = F("Langäcker");
        break;
    }
    case 202266:
    {
        returnValue = F("Langäckerleinsweg");
        break;
    }
    case 202267:
    {
        returnValue = F("Langäckerstr.");
        break;
    }
    case 202268:
    {
        returnValue = F("Langäckerweg");
        break;
    }
    case 202269:
    {
        returnValue = F("Langärgetenweg");
        break;
    }
    case 202270:
    {
        returnValue = F("Lanhauser Str.");
        break;
    }
    case 202271:
    {
        returnValue = F("Lanhofen");
        break;
    }
    case 202272:
    {
        returnValue = F("Laniostr.");
        break;
    }
    case 202273:
    {
        returnValue = F("Lanje Padd");
        break;
    }
    case 202274:
    {
        returnValue = F("Lanke");
        break;
    }
    case 202275:
    {
        returnValue = F("Lankenauer Str.");
        break;
    }
    case 202276:
    {
        returnValue = F("Lankenbühl");
        break;
    }
    case 202277:
    {
        returnValue = F("Lankendorf");
        break;
    }
    case 202278:
    {
        returnValue = F("Lankener Weg");
        break;
    }
    case 202279:
    {
        returnValue = F("Lankenschlag");
        break;
    }
    case 202280:
    {
        returnValue = F("Lankensperger Str.");
        break;
    }
    case 202281:
    {
        returnValue = F("Lankensteg");
        break;
    }
    case 202282:
    {
        returnValue = F("Lankenstr.");
        break;
    }
    case 202283:
    {
        returnValue = F("Lankenweg");
        break;
    }
    case 202284:
    {
        returnValue = F("Lanker Allee");
        break;
    }
    case 202285:
    {
        returnValue = F("Lanker Chaussee");
        break;
    }
    case 202286:
    {
        returnValue = F("Lanker Dorfstr.");
        break;
    }
    case 202287:
    {
        returnValue = F("Lanker Str.");
        break;
    }
    case 202288:
    {
        returnValue = F("Lanker Weg");
        break;
    }
    case 202289:
    {
        returnValue = F("Lankernbrok");
        break;
    }
    case 202290:
    {
        returnValue = F("Lankerner Str.");
        break;
    }
    case 202291:
    {
        returnValue = F("Lankesbergstr.");
        break;
    }
    case 202292:
    {
        returnValue = F("Lankestr.");
        break;
    }
    case 202293:
    {
        returnValue = F("Lankeweg");
        break;
    }
    case 202294:
    {
        returnValue = F("Lankower Hege");
        break;
    }
    case 202295:
    {
        returnValue = F("Lankower Str.");
        break;
    }
    case 202296:
    {
        returnValue = F("Lankower Weg");
        break;
    }
    case 202297:
    {
        returnValue = F("Lankumer Feldweg");
        break;
    }
    case 202298:
    {
        returnValue = F("Lankumer Ring");
        break;
    }
    case 202299:
    {
        returnValue = F("Lankwitzer Weg");
        break;
    }
    case 202300:
    {
        returnValue = F("Lankwitzweg");
        break;
    }
    case 202301:
    {
        returnValue = F("Lannachweg");
        break;
    }
    case 202302:
    {
        returnValue = F("Lannenbach");
        break;
    }
    case 202303:
    {
        returnValue = F("Lanner");
        break;
    }
    case 202304:
    {
        returnValue = F("Lanner Brücke");
        break;
    }
    case 202305:
    {
        returnValue = F("Lannerdal");
        break;
    }
    case 202306:
    {
        returnValue = F("Lannermecke");
        break;
    }
    case 202307:
    {
        returnValue = F("Lannersberg");
        break;
    }
    case 202308:
    {
        returnValue = F("Lannerstr.");
        break;
    }
    case 202309:
    {
        returnValue = F("Lannert");
        break;
    }
    case 202310:
    {
        returnValue = F("Lannertstr.");
        break;
    }
    case 202311:
    {
        returnValue = F("Lannerweg");
        break;
    }
    case 202312:
    {
        returnValue = F("Lannesdorfer Str.");
        break;
    }
    case 202313:
    {
        returnValue = F("Lanneshof");
        break;
    }
    case 202314:
    {
        returnValue = F("Lanneshofweg");
        break;
    }
    case 202315:
    {
        returnValue = F("Lanneweh");
        break;
    }
    case 202316:
    {
        returnValue = F("Lannweg");
        break;
    }
    case 202317:
    {
        returnValue = F("Lanscher Str.");
        break;
    }
    case 202318:
    {
        returnValue = F("Lansener Str.");
        break;
    }
    case 202319:
    {
        returnValue = F("Lansingfeld");
        break;
    }
    case 202320:
    {
        returnValue = F("Lansingsweg");
        break;
    }
    case 202321:
    {
        returnValue = F("Lanskerei");
        break;
    }
    case 202322:
    {
        returnValue = F("Lanstroper Str.");
        break;
    }
    case 202323:
    {
        returnValue = F("Lanstücken");
        break;
    }
    case 202324:
    {
        returnValue = F("Lantbertstr.");
        break;
    }
    case 202325:
    {
        returnValue = F("Lante");
        break;
    }
    case 202326:
    {
        returnValue = F("Lantelweg");
        break;
    }
    case 202327:
    {
        returnValue = F("Lantenbacher Str.");
        break;
    }
    case 202328:
    {
        returnValue = F("Lanter");
        break;
    }
    case 202329:
    {
        returnValue = F("Lantershofener Str.");
        break;
    }
    case 202330:
    {
        returnValue = F("Lanterstr.");
        break;
    }
    case 202331:
    {
        returnValue = F("Lantert");
        break;
    }
    case 202332:
    {
        returnValue = F("Lantertalweg");
        break;
    }
    case 202333:
    {
        returnValue = F("Lantfridgasse");
        break;
    }
    case 202334:
    {
        returnValue = F("Lantfridweg");
        break;
    }
    case 202335:
    {
        returnValue = F("Lantfriedstr.");
        break;
    }
    case 202336:
    {
        returnValue = F("Lantfritstr.");
        break;
    }
    case 202337:
    {
        returnValue = F("Lantmarstr.");
        break;
    }
    case 202338:
    {
        returnValue = F("Lantoldstr.");
        break;
    }
    case 202339:
    {
        returnValue = F("Lantpertstr.");
        break;
    }
    case 202340:
    {
        returnValue = F("Lantstr.");
        break;
    }
    case 202341:
    {
        returnValue = F("Lantz'scher Park");
        break;
    }
    case 202342:
    {
        returnValue = F("Lantzallee");
        break;
    }
    case 202343:
    {
        returnValue = F("Lantziusstr.");
        break;
    }
    case 202344:
    {
        returnValue = F("Lantzschweg");
        break;
    }
    case 202345:
    {
        returnValue = F("Lanz");
        break;
    }
    case 202346:
    {
        returnValue = F("Lanz Park");
        break;
    }
    case 202347:
    {
        returnValue = F("Lanz-Bulldog-Weg");
        break;
    }
    case 202348:
    {
        returnValue = F("Lanz-Leo-Str.");
        break;
    }
    case 202349:
    {
        returnValue = F("Lanze");
        break;
    }
    case 202350:
    {
        returnValue = F("Lanzemicher Weg");
        break;
    }
    case 202351:
    {
        returnValue = F("Lanzen");
        break;
    }
    case 202352:
    {
        returnValue = F("Lanzenbach");
        break;
    }
    case 202353:
    {
        returnValue = F("Lanzenbachstr.");
        break;
    }
    case 202354:
    {
        returnValue = F("Lanzenbachweg");
        break;
    }
    case 202355:
    {
        returnValue = F("Lanzenberg");
        break;
    }
    case 202356:
    {
        returnValue = F("Lanzenbergstr.");
        break;
    }
    case 202357:
    {
        returnValue = F("Lanzenbogenweg");
        break;
    }
    case 202358:
    {
        returnValue = F("Lanzendorfer Str.");
        break;
    }
    case 202359:
    {
        returnValue = F("Lanzenfurt");
        break;
    }
    case 202360:
    {
        returnValue = F("Lanzengasse");
        break;
    }
    case 202361:
    {
        returnValue = F("Lanzengrube");
        break;
    }
    case 202362:
    {
        returnValue = F("Lanzenhaarer Kirchenweg");
        break;
    }
    case 202363:
    {
        returnValue = F("Lanzenhaarer Str.");
        break;
    }
    case 202364:
    {
        returnValue = F("Lanzenhaarer Weg");
        break;
    }
    case 202365:
    {
        returnValue = F("Lanzenhainer Str.");
        break;
    }
    case 202366:
    {
        returnValue = F("Lanzenhaldenweg");
        break;
    }
    case 202367:
    {
        returnValue = F("Lanzenrieder Weg");
        break;
    }
    case 202368:
    {
        returnValue = F("Lanzenweg");
        break;
    }
    case 202369:
    {
        returnValue = F("Lanzenweiher");
        break;
    }
    case 202370:
    {
        returnValue = F("Lanzer Chaussee");
        break;
    }
    case 202371:
    {
        returnValue = F("Lanzer Kirchstieg");
        break;
    }
    case 202372:
    {
        returnValue = F("Lanzer Str.");
        break;
    }
    case 202373:
    {
        returnValue = F("Lanzer Weg");
        break;
    }
    case 202374:
    {
        returnValue = F("Lanzerather Buschweg");
        break;
    }
    case 202375:
    {
        returnValue = F("Lanzerather Dorfstr.");
        break;
    }
    case 202376:
    {
        returnValue = F("Lanzerather Feldstr.");
        break;
    }
    case 202377:
    {
        returnValue = F("Lanzerather Str.");
        break;
    }
    case 202378:
    {
        returnValue = F("Lanzerberg");
        break;
    }
    case 202379:
    {
        returnValue = F("Lanzinger Feld");
        break;
    }
    case 202380:
    {
        returnValue = F("Lanzinger Str.");
        break;
    }
    case 202381:
    {
        returnValue = F("Lanzinger Weg");
        break;
    }
    case 202382:
    {
        returnValue = F("Lanziusweg");
        break;
    }
    case 202383:
    {
        returnValue = F("Lanzlbogen");
        break;
    }
    case 202384:
    {
        returnValue = F("Lanzloh");
        break;
    }
    case 202385:
    {
        returnValue = F("Lanzlweg");
        break;
    }
    case 202386:
    {
        returnValue = F("Lanzmühle");
        break;
    }
    case 202387:
    {
        returnValue = F("Lanzstr.");
        break;
    }
    case 202388:
    {
        returnValue = F("Lanzweg");
        break;
    }
    case 202389:
    {
        returnValue = F("Lanäckerweg");
        break;
    }
    case 202390:
    {
        returnValue = F("Lapideaweg");
        break;
    }
    case 202391:
    {
        returnValue = F("Lapierestr.");
        break;
    }
    case 202392:
    {
        returnValue = F("Lapisweg");
        break;
    }
    case 202393:
    {
        returnValue = F("Laplacering");
        break;
    }
    case 202394:
    {
        returnValue = F("Laportestr.");
        break;
    }
    case 202395:
    {
        returnValue = F("Lappacher Str.");
        break;
    }
    case 202396:
    {
        returnValue = F("Lappacher Weg");
        break;
    }
    case 202397:
    {
        returnValue = F("Lappachweg");
        break;
    }
    case 202398:
    {
        returnValue = F("Lappeenranta-Steg");
        break;
    }
    case 202399:
    {
        returnValue = F("Lappen");
        break;
    }
    case 202400:
    {
        returnValue = F("Lappenberg");
        break;
    }
    case 202401:
    {
        returnValue = F("Lappenberger Pforte");
        break;
    }
    case 202402:
    {
        returnValue = F("Lappenbergsbank");
        break;
    }
    case 202403:
    {
        returnValue = F("Lappenbredde");
        break;
    }
    case 202404:
    {
        returnValue = F("Lappenbrink");
        break;
    }
    case 202405:
    {
        returnValue = F("Lappenbusch Weg");
        break;
    }
    case 202406:
    {
        returnValue = F("Lappendamm");
        break;
    }
    case 202407:
    {
        returnValue = F("Lappenfeld");
        break;
    }
    case 202408:
    {
        returnValue = F("Lappengasse");
        break;
    }
    case 202409:
    {
        returnValue = F("Lappenhausen");
        break;
    }
    case 202410:
    {
        returnValue = F("Lappenhof");
        break;
    }
    case 202411:
    {
        returnValue = F("Lappenhügel");
        break;
    }
    case 202412:
    {
        returnValue = F("Lappenkamp");
        break;
    }
    case 202413:
    {
        returnValue = F("Lappenkreutz");
        break;
    }
    case 202414:
    {
        returnValue = F("Lappenlied");
        break;
    }
    case 202415:
    {
        returnValue = F("Lappenschneise");
        break;
    }
    case 202416:
    {
        returnValue = F("Lappentascher Str.");
        break;
    }
    case 202417:
    {
        returnValue = F("Lappeplatz");
        break;
    }
    case 202418:
    {
        returnValue = F("Lappermühle");
        break;
    }
    case 202419:
    {
        returnValue = F("Lappermühlenallee");
        break;
    }
    case 202420:
    {
        returnValue = F("Lappersdorf");
        break;
    }
    case 202421:
    {
        returnValue = F("Lappersdorfer Str.");
        break;
    }
    case 202422:
    {
        returnValue = F("Lappertal-Sträßchen");
        break;
    }
    case 202423:
    {
        returnValue = F("Lappestr.");
        break;
    }
    case 202424:
    {
        returnValue = F("Lappgasse");
        break;
    }
    case 202425:
    {
        returnValue = F("Lappich");
        break;
    }
    case 202426:
    {
        returnValue = F("Lappichstr.");
        break;
    }
    case 202427:
    {
        returnValue = F("Lappischweg");
        break;
    }
    case 202428:
    {
        returnValue = F("Lappland");
        break;
    }
    case 202429:
    {
        returnValue = F("Lappsgasse");
        break;
    }
    case 202430:
    {
        returnValue = F("Lappstr.");
        break;
    }
    case 202431:
    {
        returnValue = F("Lappwaldblick");
        break;
    }
    case 202432:
    {
        returnValue = F("Lappwaldstr.");
        break;
    }
    case 202433:
    {
        returnValue = F("Lappwaldweg");
        break;
    }
    case 202434:
    {
        returnValue = F("Lapshof");
        break;
    }
    case 202435:
    {
        returnValue = F("Laquaiweg");
        break;
    }
    case 202436:
    {
        returnValue = F("Laquejapaad");
        break;
    }
    case 202437:
    {
        returnValue = F("Laraustr.");
        break;
    }
    case 202438:
    {
        returnValue = F("Larberge");
        break;
    }
    case 202439:
    {
        returnValue = F("Larberger Weg");
        break;
    }
    case 202440:
    {
        returnValue = F("Larchacker");
        break;
    }
    case 202441:
    {
        returnValue = F("Larchsaatweg");
        break;
    }
    case 202442:
    {
        returnValue = F("Lardenbacher Str.");
        break;
    }
    case 202443:
    {
        returnValue = F("Lardenbacher Weg");
        break;
    }
    case 202444:
    {
        returnValue = F("Larenweg");
        break;
    }
    case 202445:
    {
        returnValue = F("Laresgrundweg");
        break;
    }
    case 202446:
    {
        returnValue = F("Larfeldsweg");
        break;
    }
    case 202447:
    {
        returnValue = F("Largauweg");
        break;
    }
    case 202448:
    {
        returnValue = F("Larhüser Weg");
        break;
    }
    case 202449:
    {
        returnValue = F("Larmannweg");
        break;
    }
    case 202450:
    {
        returnValue = F("Larochestr.");
        break;
    }
    case 202451:
    {
        returnValue = F("Laroswacht");
        break;
    }
    case 202452:
    {
        returnValue = F("Larrelter Deichweg");
        break;
    }
    case 202453:
    {
        returnValue = F("Larrelter Kirchweg");
        break;
    }
    case 202454:
    {
        returnValue = F("Larrelter Str.");
        break;
    }
    case 202455:
    {
        returnValue = F("Larrieden");
        break;
    }
    case 202456:
    {
        returnValue = F("Lars-Hansen-Weg");
        break;
    }
    case 202457:
    {
        returnValue = F("Larsbacher Str.");
        break;
    }
    case 202458:
    {
        returnValue = F("Larsheck");
        break;
    }
    case 202459:
    {
        returnValue = F("Larstr.");
        break;
    }
    case 202460:
    {
        returnValue = F("Lasallestr.");
        break;
    }
    case 202461:
    {
        returnValue = F("Lasanstr.");
        break;
    }
    case 202462:
    {
        returnValue = F("Lasbachstr.");
        break;
    }
    case 202463:
    {
        returnValue = F("Lasbeck");
        break;
    }
    case 202464:
    {
        returnValue = F("Lasbecker Weg");
        break;
    }
    case 202465:
    {
        returnValue = F("Lasbek");
        break;
    }
    case 202466:
    {
        returnValue = F("Lasbeker Str.");
        break;
    }
    case 202467:
    {
        returnValue = F("Lasbeker Weg");
        break;
    }
    case 202468:
    {
        returnValue = F("Laschbach");
        break;
    }
    case 202469:
    {
        returnValue = F("Lascheider Weg");
        break;
    }
    case 202470:
    {
        returnValue = F("Lascheiderhof");
        break;
    }
    case 202471:
    {
        returnValue = F("Laschendorf");
        break;
    }
    case 202472:
    {
        returnValue = F("Laschendorfer Weg");
        break;
    }
    case 202473:
    {
        returnValue = F("Laschenhütte");
        break;
    }
    case 202474:
    {
        returnValue = F("Laschstr.");
        break;
    }
    case 202475:
    {
        returnValue = F("Lasdorfer Str.");
        break;
    }
    case 202476:
    {
        returnValue = F("Lasebrok");
        break;
    }
    case 202477:
    {
        returnValue = F("Laseler Weg");
        break;
    }
    case 202478:
    {
        returnValue = F("Lasenweg");
        break;
    }
    case 202479:
    {
        returnValue = F("Lasfelder Str.");
        break;
    }
    case 202480:
    {
        returnValue = F("Lashorster Str.");
        break;
    }
    case 202481:
    {
        returnValue = F("Lasinskystr.");
        break;
    }
    case 202482:
    {
        returnValue = F("Lasiusstr.");
        break;
    }
    case 202483:
    {
        returnValue = F("Laskastr.");
        break;
    }
    case 202484:
    {
        returnValue = F("Laskau");
        break;
    }
    case 202485:
    {
        returnValue = F("Lasker Weg");
        break;
    }
    case 202486:
    {
        returnValue = F("Lasker-Schüler-Ring");
        break;
    }
    case 202487:
    {
        returnValue = F("Lasker-Schüler-Str.");
        break;
    }
    case 202488:
    {
        returnValue = F("Lasmecke");
        break;
    }
    case 202489:
    {
        returnValue = F("Lassahner Chaussee");
        break;
    }
    case 202490:
    {
        returnValue = F("Lassahner Str.");
        break;
    }
    case 202491:
    {
        returnValue = F("Lassahner Weg");
        break;
    }
    case 202492:
    {
        returnValue = F("Lassalleplatz");
        break;
    }
    case 202493:
    {
        returnValue = F("Lassallestr.");
        break;
    }
    case 202494:
    {
        returnValue = F("Lassalleweg");
        break;
    }
    case 202495:
    {
        returnValue = F("Lassaner Str.");
        break;
    }
    case 202496:
    {
        returnValue = F("Lassenland");
        break;
    }
    case 202497:
    {
        returnValue = F("Lassensgang");
        break;
    }
    case 202498:
    {
        returnValue = F("Lassensstieg");
        break;
    }
    case 202499:
    {
        returnValue = F("Lassenweg");
        break;
    }
    case 202500:
    {
        returnValue = F("Lasseweg");
        break;
    }
    case 202501:
    {
        returnValue = F("Lassig-Gestell");
        break;
    }
    case 202502:
    {
        returnValue = F("Lassmanngasse");
        break;
    }
    case 202503:
    {
        returnValue = F("Lassowberg");
        break;
    }
    case 202504:
    {
        returnValue = F("Lassowstr.");
        break;
    }
    case 202505:
    {
        returnValue = F("Last");
        break;
    }
    case 202506:
    {
        returnValue = F("Lastadie");
        break;
    }
    case 202507:
    {
        returnValue = F("Lastauer Str.");
        break;
    }
    case 202508:
    {
        returnValue = F("Lasthausener Weg");
        break;
    }
    case 202509:
    {
        returnValue = F("Lasthausstr.");
        break;
    }
    case 202510:
    {
        returnValue = F("Lastruper Str.");
        break;
    }
    case 202511:
    {
        returnValue = F("Laststeig");
        break;
    }
    case 202512:
    {
        returnValue = F("Lastweg");
        break;
    }
    case 202513:
    {
        returnValue = F("Lasurstr.");
        break;
    }
    case 202514:
    {
        returnValue = F("Latdorfer Str.");
        break;
    }
    case 202515:
    {
        returnValue = F("Lateiner Weg");
        break;
    }
    case 202516:
    {
        returnValue = F("Lateingasse");
        break;
    }
    case 202517:
    {
        returnValue = F("Lateinschulgasse");
        break;
    }
    case 202518:
    {
        returnValue = F("Lateinschulgässle");
        break;
    }
    case 202519:
    {
        returnValue = F("Latemarweg");
        break;
    }
    case 202520:
    {
        returnValue = F("Latendorfer Str.");
        break;
    }
    case 202521:
    {
        returnValue = F("Latendorfer Weg");
        break;
    }
    case 202522:
    {
        returnValue = F("Latenweg");
        break;
    }
    case 202523:
    {
        returnValue = F("Laternengasse");
        break;
    }
    case 202524:
    {
        returnValue = F("Laternenstr.");
        break;
    }
    case 202525:
    {
        returnValue = F("Laternenweg");
        break;
    }
    case 202526:
    {
        returnValue = F("Lathener Str.");
        break;
    }
    case 202527:
    {
        returnValue = F("Latherfähr");
        break;
    }
    case 202528:
    {
        returnValue = F("Lathusenstr.");
        break;
    }
    case 202529:
    {
        returnValue = F("Latomusstr.");
        break;
    }
    case 202530:
    {
        returnValue = F("Latoursgarten");
        break;
    }
    case 202531:
    {
        returnValue = F("Latourstr.");
        break;
    }
    case 202532:
    {
        returnValue = F("Latoursweg");
        break;
    }
    case 202533:
    {
        returnValue = F("Latrinengrube");
        break;
    }
    case 202534:
    {
        returnValue = F("Latrop");
        break;
    }
    case 202535:
    {
        returnValue = F("Latroper Str.");
        break;
    }
    case 202536:
    {
        returnValue = F("Latsch");
        break;
    }
    case 202537:
    {
        returnValue = F("Latschenkopfstr.");
        break;
    }
    case 202538:
    {
        returnValue = F("Latschenweg");
        break;
    }
    case 202539:
    {
        returnValue = F("Latscher Str.");
        break;
    }
    case 202540:
    {
        returnValue = F("Latschetweg");
        break;
    }
    case 202541:
    {
        returnValue = F("Latschgendobelweg");
        break;
    }
    case 202542:
    {
        returnValue = F("Latschigstr.");
        break;
    }
    case 202543:
    {
        returnValue = F("Latschigweg");
        break;
    }
    case 202544:
    {
        returnValue = F("Lattbergweg");
        break;
    }
    case 202545:
    {
        returnValue = F("Lattemannsgasse");
        break;
    }
    case 202546:
    {
        returnValue = F("Lattenbachstr.");
        break;
    }
    case 202547:
    {
        returnValue = F("Lattenberg");
        break;
    }
    case 202548:
    {
        returnValue = F("Lattenbergstr.");
        break;
    }
    case 202549:
    {
        returnValue = F("Lattenbusch");
        break;
    }
    case 202550:
    {
        returnValue = F("Lattenbüsch");
        break;
    }
    case 202551:
    {
        returnValue = F("Lattener Steige");
        break;
    }
    case 202552:
    {
        returnValue = F("Lattengasse");
        break;
    }
    case 202553:
    {
        returnValue = F("Lattengründel");
        break;
    }
    case 202554:
    {
        returnValue = F("Lattenkamp");
        break;
    }
    case 202555:
    {
        returnValue = F("Lattenkampstr.");
        break;
    }
    case 202556:
    {
        returnValue = F("Lattenrain");
        break;
    }
    case 202557:
    {
        returnValue = F("Lattensberg");
        break;
    }
    case 202558:
    {
        returnValue = F("Lattensiek");
        break;
    }
    case 202559:
    {
        returnValue = F("Lattenwaldhangweg");
        break;
    }
    case 202560:
    {
        returnValue = F("Lattenweg");
        break;
    }
    case 202561:
    {
        returnValue = F("Lattenweiler");
        break;
    }
    case 202562:
    {
        returnValue = F("Latter");
        break;
    }
    case 202563:
    {
        returnValue = F("Lattermannsgasse");
        break;
    }
    case 202564:
    {
        returnValue = F("Lattichwiesenweg");
        break;
    }
    case 202565:
    {
        returnValue = F("Lattingsgarten");
        break;
    }
    case 202566:
    {
        returnValue = F("Lattkamp");
        break;
    }
    case 202567:
    {
        returnValue = F("Lattruper Weg");
        break;
    }
    case 202568:
    {
        returnValue = F("Lattwaldweg");
        break;
    }
    case 202569:
    {
        returnValue = F("Lattweg");
        break;
    }
    case 202570:
    {
        returnValue = F("Lattwiesenweg");
        break;
    }
    case 202571:
    {
        returnValue = F("Latumer Bruchweg");
        break;
    }
    case 202572:
    {
        returnValue = F("Latumer Str.");
        break;
    }
    case 202573:
    {
        returnValue = F("Latumer Weg");
        break;
    }
    case 202574:
    {
        returnValue = F("Latzeläckerweg");
        break;
    }
    case 202575:
    {
        returnValue = F("Latzenstr.");
        break;
    }
    case 202576:
    {
        returnValue = F("Latzenwiesenweg");
        break;
    }
    case 202577:
    {
        returnValue = F("Latzfonser Str.");
        break;
    }
    case 202578:
    {
        returnValue = F("Latzower Str.");
        break;
    }
    case 202579:
    {
        returnValue = F("Latzstr.");
        break;
    }
    case 202580:
    {
        returnValue = F("Latzwall");
        break;
    }
    case 202581:
    {
        returnValue = F("Latzweg");
        break;
    }
    case 202582:
    {
        returnValue = F("Latènestr.");
        break;
    }
    case 202583:
    {
        returnValue = F("Laténeweg");
        break;
    }
    case 202584:
    {
        returnValue = F("Lauacker");
        break;
    }
    case 202585:
    {
        returnValue = F("Lauackerstr.");
        break;
    }
    case 202586:
    {
        returnValue = F("Lauackerweg");
        break;
    }
    case 202587:
    {
        returnValue = F("Laub");
        break;
    }
    case 202588:
    {
        returnValue = F("Laubach");
        break;
    }
    case 202589:
    {
        returnValue = F("Laubacher Str.");
        break;
    }
    case 202590:
    {
        returnValue = F("Laubacher Wald");
        break;
    }
    case 202591:
    {
        returnValue = F("Laubacher Weg");
        break;
    }
    case 202592:
    {
        returnValue = F("Laubacher-Wald-Weg");
        break;
    }
    case 202593:
    {
        returnValue = F("Laubacherstr.");
        break;
    }
    case 202594:
    {
        returnValue = F("Laubachsmühle");
        break;
    }
    case 202595:
    {
        returnValue = F("Laubachstr.");
        break;
    }
    case 202596:
    {
        returnValue = F("Laubachweg");
        break;
    }
    case 202597:
    {
        returnValue = F("Laubaner Landstr.");
        break;
    }
    case 202598:
    {
        returnValue = F("Laubaner Str.");
        break;
    }
    case 202599:
    {
        returnValue = F("Laubaner Weg");
        break;
    }
    case 202600:
    {
        returnValue = F("Laubanger");
        break;
    }
    case 202601:
    {
        returnValue = F("Laubanstr.");
        break;
    }
    case 202602:
    {
        returnValue = F("Laubau");
        break;
    }
    case 202603:
    {
        returnValue = F("Laubbachstr.");
        break;
    }
    case 202604:
    {
        returnValue = F("Laubbaumarboretum");
        break;
    }
    case 202605:
    {
        returnValue = F("Laubberg");
        break;
    }
    case 202606:
    {
        returnValue = F("Laubbergstr.");
        break;
    }
    case 202607:
    {
        returnValue = F("Laubbergweg");
        break;
    }
    case 202608:
    {
        returnValue = F("Laubbornweg");
        break;
    }
    case 202609:
    {
        returnValue = F("Laubbreite");
        break;
    }
    case 202610:
    {
        returnValue = F("Laubbrink");
        break;
    }
    case 202611:
    {
        returnValue = F("Laubbrunnerstr.");
        break;
    }
    case 202612:
    {
        returnValue = F("Laubbuschweg");
        break;
    }
    case 202613:
    {
        returnValue = F("Laube");
        break;
    }
    case 202614:
    {
        returnValue = F("Laubeck");
        break;
    }
    case 202615:
    {
        returnValue = F("Laubecker Str.");
        break;
    }
    case 202616:
    {
        returnValue = F("Laubecks Weg");
        break;
    }
    case 202617:
    {
        returnValue = F("Laubegaster Str.");
        break;
    }
    case 202618:
    {
        returnValue = F("Laubegaster Ufer");
        break;
    }
    case 202619:
    {
        returnValue = F("Laubegaster Weg");
        break;
    }
    case 202620:
    {
        returnValue = F("Laubeggengasse");
        break;
    }
    case 202621:
    {
        returnValue = F("Laubegäßchen");
        break;
    }
    case 202622:
    {
        returnValue = F("Laubeichenfeld");
        break;
    }
    case 202623:
    {
        returnValue = F("Laubeleweg");
        break;
    }
    case 202624:
    {
        returnValue = F("Laubeltweg");
        break;
    }
    case 202625:
    {
        returnValue = F("Lauben-Privatweg");
        break;
    }
    case 202626:
    {
        returnValue = F("Laubenallee");
        break;
    }
    case 202627:
    {
        returnValue = F("Laubenberg");
        break;
    }
    case 202628:
    {
        returnValue = F("Laubenberger Hof");
        break;
    }
    case 202629:
    {
        returnValue = F("Laubenbergstr.");
        break;
    }
    case 202630:
    {
        returnValue = F("Laubenbergweg");
        break;
    }
    case 202631:
    {
        returnValue = F("Laubenbräugasse");
        break;
    }
    case 202632:
    {
        returnValue = F("Laubender Str.");
        break;
    }
    case 202633:
    {
        returnValue = F("Laubendorfer Brücke");
        break;
    }
    case 202634:
    {
        returnValue = F("Laubendorfer Str.");
        break;
    }
    case 202635:
    {
        returnValue = F("Laubendorfer Weg");
        break;
    }
    case 202636:
    {
        returnValue = F("Laubener Str.");
        break;
    }
    case 202637:
    {
        returnValue = F("Laubener Weg");
        break;
    }
    case 202638:
    {
        returnValue = F("Laubengang");
        break;
    }
    case 202639:
    {
        returnValue = F("Laubengasse");
        break;
    }
    case 202640:
    {
        returnValue = F("Laubengrundweg");
        break;
    }
    case 202641:
    {
        returnValue = F("Laubengässle");
        break;
    }
    case 202642:
    {
        returnValue = F("Laubenhaidstr.");
        break;
    }
    case 202643:
    {
        returnValue = F("Laubenhardweg");
        break;
    }
    case 202644:
    {
        returnValue = F("Laubenheimer Park");
        break;
    }
    case 202645:
    {
        returnValue = F("Laubenheimer Str.");
        break;
    }
    case 202646:
    {
        returnValue = F("Laubenhof");
        break;
    }
    case 202647:
    {
        returnValue = F("Laubenholzstr.");
        break;
    }
    case 202648:
    {
        returnValue = F("Laubenhöhe");
        break;
    }
    case 202649:
    {
        returnValue = F("Laubenkieferweg");
        break;
    }
    case 202650:
    {
        returnValue = F("Laubenkoppel");
        break;
    }
    case 202651:
    {
        returnValue = F("Laubenlindeweg");
        break;
    }
    case 202652:
    {
        returnValue = F("Laubenpark");
        break;
    }
    case 202653:
    {
        returnValue = F("Laubensteige");
        break;
    }
    case 202654:
    {
        returnValue = F("Laubensteinstr.");
        break;
    }
    case 202655:
    {
        returnValue = F("Laubensteinweg");
        break;
    }
    case 202656:
    {
        returnValue = F("Laubenstr.");
        break;
    }
    case 202657:
    {
        returnValue = F("Laubental");
        break;
    }
    case 202658:
    {
        returnValue = F("Laubenweg");
        break;
    }
    case 202659:
    {
        returnValue = F("Laubenzedler Str.");
        break;
    }
    case 202660:
    {
        returnValue = F("Lauber Str.");
        break;
    }
    case 202661:
    {
        returnValue = F("Lauber Weg");
        break;
    }
    case 202662:
    {
        returnValue = F("Lauberbachweg");
        break;
    }
    case 202663:
    {
        returnValue = F("Lauberfleckstr.");
        break;
    }
    case 202664:
    {
        returnValue = F("Lauberg");
        break;
    }
    case 202665:
    {
        returnValue = F("Laubergasse");
        break;
    }
    case 202666:
    {
        returnValue = F("Lauberhardtweg");
        break;
    }
    case 202667:
    {
        returnValue = F("Laubering");
        break;
    }
    case 202668:
    {
        returnValue = F("Laubern");
        break;
    }
    case 202669:
    {
        returnValue = F("Laubersbachstr.");
        break;
    }
    case 202670:
    {
        returnValue = F("Laubersberg");
        break;
    }
    case 202671:
    {
        returnValue = F("Laubersreuth");
        break;
    }
    case 202672:
    {
        returnValue = F("Laubersreuther Weg");
        break;
    }
    case 202673:
    {
        returnValue = F("Laubersteigweg");
        break;
    }
    case 202674:
    {
        returnValue = F("Lauberstr.");
        break;
    }
    case 202675:
    {
        returnValue = F("Laubertsweg");
        break;
    }
    case 202676:
    {
        returnValue = F("Lauberweg");
        break;
    }
    case 202677:
    {
        returnValue = F("Laubestr.");
        break;
    }
    case 202678:
    {
        returnValue = F("Laubeweg");
        break;
    }
    case 202679:
    {
        returnValue = F("Laubfroschweg");
        break;
    }
    case 202680:
    {
        returnValue = F("Laubgarten");
        break;
    }
    case 202681:
    {
        returnValue = F("Laubgasse");
        break;
    }
    case 202682:
    {
        returnValue = F("Laubgehölze");
        break;
    }
    case 202683:
    {
        returnValue = F("Laubgrund");
        break;
    }
    case 202684:
    {
        returnValue = F("Laubgäßchen");
        break;
    }
    case 202685:
    {
        returnValue = F("Laubhof");
        break;
    }
    case 202686:
    {
        returnValue = F("Laubhübelweg");
        break;
    }
    case 202687:
    {
        returnValue = F("Laubigsberg");
        break;
    }
    case 202688:
    {
        returnValue = F("Laubigstr.");
        break;
    }
    case 202689:
    {
        returnValue = F("Laubigswaldweg");
        break;
    }
    case 202690:
    {
        returnValue = F("Laubigtweg");
        break;
    }
    case 202691:
    {
        returnValue = F("Laubinger Weg");
        break;
    }
    case 202692:
    {
        returnValue = F("Laubingerweg");
        break;
    }
    case 202693:
    {
        returnValue = F("Laubker Hof");
        break;
    }
    case 202694:
    {
        returnValue = F("Laubker Weg");
        break;
    }
    case 202695:
    {
        returnValue = F("Laublocher Weg");
        break;
    }
    case 202696:
    {
        returnValue = F("Laubmeierweg");
        break;
    }
    case 202697:
    {
        returnValue = F("Laubmühlstr.");
        break;
    }
    case 202698:
    {
        returnValue = F("Laubocke");
        break;
    }
    case 202699:
    {
        returnValue = F("Laubplatz");
        break;
    }
    case 202700:
    {
        returnValue = F("Laubrainweg");
        break;
    }
    case 202701:
    {
        returnValue = F("Laubreide");
        break;
    }
    case 202702:
    {
        returnValue = F("Laubries");
        break;
    }
    case 202703:
    {
        returnValue = F("Laubrother Str.");
        break;
    }
    case 202704:
    {
        returnValue = F("Laubschlucht");
        break;
    }
    case 202705:
    {
        returnValue = F("Laubschochenstr.");
        break;
    }
    case 202706:
    {
        returnValue = F("Laubsdorfer Ausbau");
        break;
    }
    case 202707:
    {
        returnValue = F("Laubsdorfer Hauptstr.");
        break;
    }
    case 202708:
    {
        returnValue = F("Laubsdorfer Siedlung");
        break;
    }
    case 202709:
    {
        returnValue = F("Laubsdorfer Weg");
        break;
    }
    case 202710:
    {
        returnValue = F("Laubsteigle");
        break;
    }
    case 202711:
    {
        returnValue = F("Laubstr.");
        break;
    }
    case 202712:
    {
        returnValue = F("Laubsängerweg");
        break;
    }
    case 202713:
    {
        returnValue = F("Laubtal");
        break;
    }
    case 202714:
    {
        returnValue = F("Laubtalstr.");
        break;
    }
    case 202715:
    {
        returnValue = F("Laubtalweg");
        break;
    }
    case 202716:
    {
        returnValue = F("Laubuseschbacher Str.");
        break;
    }
    case 202717:
    {
        returnValue = F("Laubusstr.");
        break;
    }
    case 202718:
    {
        returnValue = F("Laubwaldallee");
        break;
    }
    case 202719:
    {
        returnValue = F("Laubweg");
        break;
    }
    case 202720:
    {
        returnValue = F("Laubühl");
        break;
    }
    case 202721:
    {
        returnValue = F("Lauch Allee");
        break;
    }
    case 202722:
    {
        returnValue = F("Lauchaer Park");
        break;
    }
    case 202723:
    {
        returnValue = F("Lauchaer Str.");
        break;
    }
    case 202724:
    {
        returnValue = F("Lauchaer Weg");
        break;
    }
    case 202725:
    {
        returnValue = F("Lauchagrund");
        break;
    }
    case 202726:
    {
        returnValue = F("Lauchagrundstr.");
        break;
    }
    case 202727:
    {
        returnValue = F("Lauchaufer");
        break;
    }
    case 202728:
    {
        returnValue = F("Lauchdorfer Str.");
        break;
    }
    case 202729:
    {
        returnValue = F("Lauchdorfer Weg");
        break;
    }
    case 202730:
    {
        returnValue = F("Lauchenberg-Weg");
        break;
    }
    case 202731:
    {
        returnValue = F("Lauchenweg");
        break;
    }
    case 202732:
    {
        returnValue = F("Laucher Weg");
        break;
    }
    case 202733:
    {
        returnValue = F("Laucherbach");
        break;
    }
    case 202734:
    {
        returnValue = F("Lauchergasse");
        break;
    }
    case 202735:
    {
        returnValue = F("Lauchersfeld");
        break;
    }
    case 202736:
    {
        returnValue = F("Lauchertbühl");
        break;
    }
    case 202737:
    {
        returnValue = F("Lauchertgasse");
        break;
    }
    case 202738:
    {
        returnValue = F("Laucherthaler Str.");
        break;
    }
    case 202739:
    {
        returnValue = F("Lauchertstr.");
        break;
    }
    case 202740:
    {
        returnValue = F("Lauchgasse");
        break;
    }
    case 202741:
    {
        returnValue = F("Lauchhammer Str.");
        break;
    }
    case 202742:
    {
        returnValue = F("Lauchhammerstr.");
        break;
    }
    case 202743:
    {
        returnValue = F("Lauchheimer Str.");
        break;
    }
    case 202744:
    {
        returnValue = F("Lauchheimer Weg");
        break;
    }
    case 202745:
    {
        returnValue = F("Lauchhofstr.");
        break;
    }
    case 202746:
    {
        returnValue = F("Lauchringer Grenzweg");
        break;
    }
    case 202747:
    {
        returnValue = F("Lauchringer Str.");
        break;
    }
    case 202748:
    {
        returnValue = F("Lauchröder Str.");
        break;
    }
    case 202749:
    {
        returnValue = F("Lauchstr.");
        break;
    }
    case 202750:
    {
        returnValue = F("Lauchsträßle");
        break;
    }
    case 202751:
    {
        returnValue = F("Lauchstädter Str.");
        break;
    }
    case 202752:
    {
        returnValue = F("Lauchwasenstr.");
        break;
    }
    case 202753:
    {
        returnValue = F("Lauchweg");
        break;
    }
    case 202754:
    {
        returnValue = F("Lauchäcker");
        break;
    }
    case 202755:
    {
        returnValue = F("Lauckerthof");
        break;
    }
    case 202756:
    {
        returnValue = F("Laucknerweg");
        break;
    }
    case 202757:
    {
        returnValue = F("Laudaer Str.");
        break;
    }
    case 202758:
    {
        returnValue = F("Laudahnstr.");
        break;
    }
    case 202759:
    {
        returnValue = F("Laudamm");
        break;
    }
    case 202760:
    {
        returnValue = F("Laudaplatz");
        break;
    }
    case 202761:
    {
        returnValue = F("Laudenauer Str.");
        break;
    }
    case 202762:
    {
        returnValue = F("Laudenauer Weg");
        break;
    }
    case 202763:
    {
        returnValue = F("Laudenbach");
        break;
    }
    case 202764:
    {
        returnValue = F("Laudenbach Bungalow");
        break;
    }
    case 202765:
    {
        returnValue = F("Laudenbacher Mühlenweg");
        break;
    }
    case 202766:
    {
        returnValue = F("Laudenbacher Str.");
        break;
    }
    case 202767:
    {
        returnValue = F("Laudenbacher Weg");
        break;
    }
    case 202768:
    {
        returnValue = F("Laudenbachstr.");
        break;
    }
    case 202769:
    {
        returnValue = F("Laudenbachweg");
        break;
    }
    case 202770:
    {
        returnValue = F("Laudenberger Str.");
        break;
    }
    case 202771:
    {
        returnValue = F("Laudenweg");
        break;
    }
    case 202772:
    {
        returnValue = F("Lauderter Str.");
        break;
    }
    case 202773:
    {
        returnValue = F("Laudiek");
        break;
    }
    case 202774:
    {
        returnValue = F("Laudieker Weg");
        break;
    }
    case 202775:
    {
        returnValue = F("Laudunstr.");
        break;
    }
    case 202776:
    {
        returnValue = F("Laue");
        break;
    }
    case 202777:
    {
        returnValue = F("Laueberg");
        break;
    }
    case 202778:
    {
        returnValue = F("Lauen Esch");
        break;
    }
    case 202779:
    {
        returnValue = F("Lauen Holz");
        break;
    }
    case 202780:
    {
        returnValue = F("Lauenauer Allee");
        break;
    }
    case 202781:
    {
        returnValue = F("Lauenauer Str.");
        break;
    }
    case 202782:
    {
        returnValue = F("Lauenbach");
        break;
    }
    case 202783:
    {
        returnValue = F("Lauenberg");
        break;
    }
    case 202784:
    {
        returnValue = F("Lauenbergstr.");
        break;
    }
    case 202785:
    {
        returnValue = F("Lauenbrunner Weg");
        break;
    }
    case 202786:
    {
        returnValue = F("Lauenbrücker Str.");
        break;
    }
    case 202787:
    {
        returnValue = F("Lauenbrücker Weg");
        break;
    }
    case 202788:
    {
        returnValue = F("Lauenburger Allee");
        break;
    }
    case 202789:
    {
        returnValue = F("Lauenburger Fußsteig");
        break;
    }
    case 202790:
    {
        returnValue = F("Lauenburger Hof");
        break;
    }
    case 202791:
    {
        returnValue = F("Lauenburger Landstr.");
        break;
    }
    case 202792:
    {
        returnValue = F("Lauenburger Postweg");
        break;
    }
    case 202793:
    {
        returnValue = F("Lauenburger Ring");
        break;
    }
    case 202794:
    {
        returnValue = F("Lauenburger Stieg");
        break;
    }
    case 202795:
    {
        returnValue = F("Lauenburger Str.");
        break;
    }
    case 202796:
    {
        returnValue = F("Lauenburger Weg");
        break;
    }
    case 202797:
    {
        returnValue = F("Lauenburgerstr.");
        break;
    }
    case 202798:
    {
        returnValue = F("Lauenburgstr.");
        break;
    }
    case 202799:
    {
        returnValue = F("Lauenbühlstr.");
        break;
    }
    case 202800:
    {
        returnValue = F("Lauenfeldstr.");
        break;
    }
    case 202801:
    {
        returnValue = F("Lauenförder Str.");
        break;
    }
    case 202802:
    {
        returnValue = F("Lauengasse");
        break;
    }
    case 202803:
    {
        returnValue = F("Lauengraben");
        break;
    }
    case 202804:
    {
        returnValue = F("Lauenhagen");
        break;
    }
    case 202805:
    {
        returnValue = F("Lauenhainer Berg");
        break;
    }
    case 202806:
    {
        returnValue = F("Lauenhainer Feld");
        break;
    }
    case 202807:
    {
        returnValue = F("Lauenhainer Hauptstr.");
        break;
    }
    case 202808:
    {
        returnValue = F("Lauenhainer Str.");
        break;
    }
    case 202809:
    {
        returnValue = F("Lauenhainer Weg");
        break;
    }
    case 202810:
    {
        returnValue = F("Lauenhof");
        break;
    }
    case 202811:
    {
        returnValue = F("Lauenhorst");
        break;
    }
    case 202812:
    {
        returnValue = F("Lauenhäger Str.");
        break;
    }
    case 202813:
    {
        returnValue = F("Lauenscheid");
        break;
    }
    case 202814:
    {
        returnValue = F("Lauenscheidermühle");
        break;
    }
    case 202815:
    {
        returnValue = F("Lauenstadt");
        break;
    }
    case 202816:
    {
        returnValue = F("Lauensteiner Str.");
        break;
    }
    case 202817:
    {
        returnValue = F("Lauensteiner Weg");
        break;
    }
    case 202818:
    {
        returnValue = F("Lauensteinplatz");
        break;
    }
    case 202819:
    {
        returnValue = F("Lauensteinstr.");
        break;
    }
    case 202820:
    {
        returnValue = F("Lauensteinweg");
        break;
    }
    case 202821:
    {
        returnValue = F("Lauenstr.");
        break;
    }
    case 202822:
    {
        returnValue = F("Lauenteichweg");
        break;
    }
    case 202823:
    {
        returnValue = F("Lauenthaler Mühle");
        break;
    }
    case 202824:
    {
        returnValue = F("Lauenthaler Weg");
        break;
    }
    case 202825:
    {
        returnValue = F("Lauentheil");
        break;
    }
    case 202826:
    {
        returnValue = F("Lauentor");
        break;
    }
    case 202827:
    {
        returnValue = F("Lauenweg");
        break;
    }
    case 202828:
    {
        returnValue = F("Lauer Weg");
        break;
    }
    case 202829:
    {
        returnValue = F("Lauerbacher Weg");
        break;
    }
    case 202830:
    {
        returnValue = F("Lauerblick");
        break;
    }
    case 202831:
    {
        returnValue = F("Lauerbrück");
        break;
    }
    case 202832:
    {
        returnValue = F("Lauerecksteigle");
        break;
    }
    case 202833:
    {
        returnValue = F("Lauereicheweg");
        break;
    }
    case 202834:
    {
        returnValue = F("Lauererstr.");
        break;
    }
    case 202835:
    {
        returnValue = F("Lauergasse");
        break;
    }
    case 202836:
    {
        returnValue = F("Lauergrund");
        break;
    }
    case 202837:
    {
        returnValue = F("Lauerhaasstr.");
        break;
    }
    case 202838:
    {
        returnValue = F("Lauerhaldenweg");
        break;
    }
    case 202839:
    {
        returnValue = F("Lauerhauweg");
        break;
    }
    case 202840:
    {
        returnValue = F("Lauerhecke");
        break;
    }
    case 202841:
    {
        returnValue = F("Lauerheid");
        break;
    }
    case 202842:
    {
        returnValue = F("Lauerhof");
        break;
    }
    case 202843:
    {
        returnValue = F("Lauerhofstr.");
        break;
    }
    case 202844:
    {
        returnValue = F("Lauerhöfer Str.");
        break;
    }
    case 202845:
    {
        returnValue = F("Lauermattenweg");
        break;
    }
    case 202846:
    {
        returnValue = F("Lauerplanieweg");
        break;
    }
    case 202847:
    {
        returnValue = F("Lauersche Gärten");
        break;
    }
    case 202848:
    {
        returnValue = F("Lauersche Str.");
        break;
    }
    case 202849:
    {
        returnValue = F("Lauerscher Weg");
        break;
    }
    case 202850:
    {
        returnValue = F("Lauersend");
        break;
    }
    case 202851:
    {
        returnValue = F("Lauersflur");
        break;
    }
    case 202852:
    {
        returnValue = F("Lauersforter Str.");
        break;
    }
    case 202853:
    {
        returnValue = F("Lauersforter Waldweg");
        break;
    }
    case 202854:
    {
        returnValue = F("Lauersforter Weg");
        break;
    }
    case 202855:
    {
        returnValue = F("Lauersfortstr.");
        break;
    }
    case 202856:
    {
        returnValue = F("Lauerskreuz");
        break;
    }
    case 202857:
    {
        returnValue = F("Lauersmühle");
        break;
    }
    case 202858:
    {
        returnValue = F("Lauerstr.");
        break;
    }
    case 202859:
    {
        returnValue = F("Lauersweg");
        break;
    }
    case 202860:
    {
        returnValue = F("Lauertstr.");
        break;
    }
    case 202861:
    {
        returnValue = F("Lauerturmkreisel");
        break;
    }
    case 202862:
    {
        returnValue = F("Lauerweg");
        break;
    }
    case 202863:
    {
        returnValue = F("Lauerwinkelweg");
        break;
    }
    case 202864:
    {
        returnValue = F("Lauesch");
        break;
    }
    case 202865:
    {
        returnValue = F("Lauesche Str.");
        break;
    }
    case 202866:
    {
        returnValue = F("Lauestr.");
        break;
    }
    case 202867:
    {
        returnValue = F("Laueweg");
        break;
    }
    case 202868:
    {
        returnValue = F("Laufacher Str.");
        break;
    }
    case 202869:
    {
        returnValue = F("Laufamholzer Kirchensteig");
        break;
    }
    case 202870:
    {
        returnValue = F("Laufamholzstr.");
        break;
    }
    case 202871:
    {
        returnValue = F("Laufbachpfad");
        break;
    }
    case 202872:
    {
        returnValue = F("Laufbachstr.");
        break;
    }
    case 202873:
    {
        returnValue = F("Laufbachweg");
        break;
    }
    case 202874:
    {
        returnValue = F("Laufbahn");
        break;
    }
    case 202875:
    {
        returnValue = F("Laufdorfer Str.");
        break;
    }
    case 202876:
    {
        returnValue = F("Laufdorfer Weg");
        break;
    }
    case 202877:
    {
        returnValue = F("Laufenbacherhof");
        break;
    }
    case 202878:
    {
        returnValue = F("Laufenberg");
        break;
    }
    case 202879:
    {
        returnValue = F("Laufenbergstr.");
        break;
    }
    case 202880:
    {
        returnValue = F("Laufenburger Acht");
        break;
    }
    case 202881:
    {
        returnValue = F("Laufenburger Steingracht");
        break;
    }
    case 202882:
    {
        returnValue = F("Laufenburger Str.");
        break;
    }
    case 202883:
    {
        returnValue = F("Laufenburgstr.");
        break;
    }
    case 202884:
    {
        returnValue = F("Laufener Str.");
        break;
    }
    case 202885:
    {
        returnValue = F("Laufener Weg");
        break;
    }
    case 202886:
    {
        returnValue = F("Laufenmühlstr.");
        break;
    }
    case 202887:
    {
        returnValue = F("Laufenstr.");
        break;
    }
    case 202888:
    {
        returnValue = F("Laufenweg");
        break;
    }
    case 202889:
    {
        returnValue = F("Laufenübelweg");
        break;
    }
    case 202890:
    {
        returnValue = F("Laufer Gasse");
        break;
    }
    case 202891:
    {
        returnValue = F("Laufer Str.");
        break;
    }
    case 202892:
    {
        returnValue = F("Laufer Tor");
        break;
    }
    case 202893:
    {
        returnValue = F("Laufer Weg");
        break;
    }
    case 202894:
    {
        returnValue = F("Laufergasse");
        break;
    }
    case 202895:
    {
        returnValue = F("Lauferstr.");
        break;
    }
    case 202896:
    {
        returnValue = F("Laufersweilerstr.");
        break;
    }
    case 202897:
    {
        returnValue = F("Laufertorgraben");
        break;
    }
    case 202898:
    {
        returnValue = F("Laufertormauer");
        break;
    }
    case 202899:
    {
        returnValue = F("Laufertorzwinger");
        break;
    }
    case 202900:
    {
        returnValue = F("Laufertstr.");
        break;
    }
    case 202901:
    {
        returnValue = F("Lauffahrtsweg");
        break;
    }
    case 202902:
    {
        returnValue = F("Lauffenberger Weg");
        break;
    }
    case 202903:
    {
        returnValue = F("Lauffener Ring");
        break;
    }
    case 202904:
    {
        returnValue = F("Lauffener Str.");
        break;
    }
    case 202905:
    {
        returnValue = F("Lauffener Weg");
        break;
    }
    case 202906:
    {
        returnValue = F("Lauffenmühleweg");
        break;
    }
    case 202907:
    {
        returnValue = F("Lauffenstr.");
        break;
    }
    case 202908:
    {
        returnValue = F("Laufflügelschneise");
        break;
    }
    case 202909:
    {
        returnValue = F("Lauffstr.");
        break;
    }
    case 202910:
    {
        returnValue = F("Lauffsweg");
        break;
    }
    case 202911:
    {
        returnValue = F("Laufgarten");
        break;
    }
    case 202912:
    {
        returnValue = F("Laufgrabendamm");
        break;
    }
    case 202913:
    {
        returnValue = F("Laufhahn");
        break;
    }
    case 202914:
    {
        returnValue = F("Laufholzweg");
        break;
    }
    case 202915:
    {
        returnValue = F("Laufinger Allee");
        break;
    }
    case 202916:
    {
        returnValue = F("Laufkamp");
        break;
    }
    case 202917:
    {
        returnValue = F("Laufkäferweg");
        break;
    }
    case 202918:
    {
        returnValue = F("Laufnackenweg");
        break;
    }
    case 202919:
    {
        returnValue = F("Laufricker");
        break;
    }
    case 202920:
    {
        returnValue = F("Laufstrecke");
        break;
    }
    case 202921:
    {
        returnValue = F("Laufstrecke 1.000m");
        break;
    }
    case 202922:
    {
        returnValue = F("Laufstrecke 100/800m");
        break;
    }
    case 202923:
    {
        returnValue = F("Laufstrecke 800/1.000m");
        break;
    }
    case 202924:
    {
        returnValue = F("Laufstrecke 800m");
        break;
    }
    case 202925:
    {
        returnValue = F("Laufstrecke Ahornpark");
        break;
    }
    case 202926:
    {
        returnValue = F("Lauftreff");
        break;
    }
    case 202927:
    {
        returnValue = F("Laufweg");
        break;
    }
    case 202928:
    {
        returnValue = F("Laufzorner Geräumt");
        break;
    }
    case 202929:
    {
        returnValue = F("Laufzorner Str.");
        break;
    }
    case 202930:
    {
        returnValue = F("Laufzorner Weg");
        break;
    }
    case 202931:
    {
        returnValue = F("Laugasse");
        break;
    }
    case 202932:
    {
        returnValue = F("Laugasser Str.");
        break;
    }
    case 202933:
    {
        returnValue = F("Laugasserfeld");
        break;
    }
    case 202934:
    {
        returnValue = F("Laugemannsstiege");
        break;
    }
    case 202935:
    {
        returnValue = F("Laugendorf");
        break;
    }
    case 202936:
    {
        returnValue = F("Laugengasse");
        break;
    }
    case 202937:
    {
        returnValue = F("Laugestr.");
        break;
    }
    case 202938:
    {
        returnValue = F("Laugingerstr.");
        break;
    }
    case 202939:
    {
        returnValue = F("Laugkstr.");
        break;
    }
    case 202940:
    {
        returnValue = F("Laugnastr.");
        break;
    }
    case 202941:
    {
        returnValue = F("Laugstroat");
        break;
    }
    case 202942:
    {
        returnValue = F("Laugweg");
        break;
    }
    case 202943:
    {
        returnValue = F("Laugärten");
        break;
    }
    case 202944:
    {
        returnValue = F("Lauheide");
        break;
    }
    case 202945:
    {
        returnValue = F("Lauhstr.");
        break;
    }
    case 202946:
    {
        returnValue = F("Lauhwiesenstr.");
        break;
    }
    case 202947:
    {
        returnValue = F("Lauichweg");
        break;
    }
    case 202948:
    {
        returnValue = F("Lauingenstr.");
        break;
    }
    case 202949:
    {
        returnValue = F("Lauinger Str.");
        break;
    }
    case 202950:
    {
        returnValue = F("Lauinger Weg");
        break;
    }
    case 202951:
    {
        returnValue = F("Lauingsfirststräßle");
        break;
    }
    case 202952:
    {
        returnValue = F("Laukamp");
        break;
    }
    case 202953:
    {
        returnValue = F("Laukampweg");
        break;
    }
    case 202954:
    {
        returnValue = F("Laukenmühler Weg");
        break;
    }
    case 202955:
    {
        returnValue = F("Laukenstr.");
        break;
    }
    case 202956:
    {
        returnValue = F("Laukentor");
        break;
    }
    case 202957:
    {
        returnValue = F("Laukenweg");
        break;
    }
    case 202958:
    {
        returnValue = F("Laukenäckerweg");
        break;
    }
    case 202959:
    {
        returnValue = F("Lauker Weg");
        break;
    }
    case 202960:
    {
        returnValue = F("Laukeriege");
        break;
    }
    case 202961:
    {
        returnValue = F("Laukerweg");
        break;
    }
    case 202962:
    {
        returnValue = F("Laukshof");
        break;
    }
    case 202963:
    {
        returnValue = F("Laukötterstr.");
        break;
    }
    case 202964:
    {
        returnValue = F("Lauland");
        break;
    }
    case 202965:
    {
        returnValue = F("Laulestr.");
        break;
    }
    case 202966:
    {
        returnValue = F("Laulisgraben");
        break;
    }
    case 202967:
    {
        returnValue = F("Laumannstr.");
        break;
    }
    case 202968:
    {
        returnValue = F("Laumeiers Kamp");
        break;
    }
    case 202969:
    {
        returnValue = F("Laumerhöhe");
        break;
    }
    case 202970:
    {
        returnValue = F("Laumersheimer Str.");
        break;
    }
    case 202971:
    {
        returnValue = F("Laumespfad");
        break;
    }
    case 202972:
    {
        returnValue = F("Launepark");
        break;
    }
    case 202973:
    {
        returnValue = F("Launer Ring");
        break;
    }
    case 202974:
    {
        returnValue = F("Launewitz");
        break;
    }
    case 202975:
    {
        returnValue = F("Launhardtmühlenweg");
        break;
    }
    case 202976:
    {
        returnValue = F("Launhardtstr.");
        break;
    }
    case 202977:
    {
        returnValue = F("Launitzstr.");
        break;
    }
    case 202978:
    {
        returnValue = F("Launsbacher Str.");
        break;
    }
    case 202979:
    {
        returnValue = F("Launsbacher Weg");
        break;
    }
    case 202980:
    {
        returnValue = F("Launtel");
        break;
    }
    case 202981:
    {
        returnValue = F("Laupendahler Weg");
        break;
    }
    case 202982:
    {
        returnValue = F("Laupendahlweg");
        break;
    }
    case 202983:
    {
        returnValue = F("Laupertshauser Str.");
        break;
    }
    case 202984:
    {
        returnValue = F("Laupheimer Str.");
        break;
    }
    case 202985:
    {
        returnValue = F("Laupnerweg");
        break;
    }
    case 202986:
    {
        returnValue = F("Laura-Schradin-Weg");
        break;
    }
    case 202987:
    {
        returnValue = F("Laurachsträßle");
        break;
    }
    case 202988:
    {
        returnValue = F("Laurastr.");
        break;
    }
    case 202989:
    {
        returnValue = F("Lauraweg");
        break;
    }
    case 202990:
    {
        returnValue = F("Laurembergstr.");
        break;
    }
    case 202991:
    {
        returnValue = F("Laurenburger Str.");
        break;
    }
    case 202992:
    {
        returnValue = F("Laurenbühlstr.");
        break;
    }
    case 202993:
    {
        returnValue = F("Laurenbühlweg");
        break;
    }
    case 202994:
    {
        returnValue = F("Laurensberger Str.");
        break;
    }
    case 202995:
    {
        returnValue = F("Laurentistr.");
        break;
    }
    case 202996:
    {
        returnValue = F("Laurentius-Becker-Str.");
        break;
    }
    case 202997:
    {
        returnValue = F("Laurentius-Schlemmer-Str.");
        break;
    }
    case 202998:
    {
        returnValue = F("Laurentius-Siemer-Str.");
        break;
    }
    case 202999:
    {
        returnValue = F("Laurentius-Zeller-Str.");
        break;
    }
    case 203000:
    {
        returnValue = F("Laurentiusallee");
        break;
    }
    case 203001:
    {
        returnValue = F("Laurentiusberg");
        break;
    }
    case 203002:
    {
        returnValue = F("Laurentiusbergstr.");
        break;
    }
    case 203003:
    {
        returnValue = F("Laurentiusbrücke");
        break;
    }
    case 203004:
    {
        returnValue = F("Laurentiusgarten");
        break;
    }
    case 203005:
    {
        returnValue = F("Laurentiusgasse");
        break;
    }
    case 203006:
    {
        returnValue = F("Laurentiushang");
        break;
    }
    case 203007:
    {
        returnValue = F("Laurentiushöfe");
        break;
    }
    case 203008:
    {
        returnValue = F("Laurentiushöhe");
        break;
    }
    case 203009:
    {
        returnValue = F("Laurentiusplatz");
        break;
    }
    case 203010:
    {
        returnValue = F("Laurentiusring");
        break;
    }
    case 203011:
    {
        returnValue = F("Laurentiussiedlung");
        break;
    }
    case 203012:
    {
        returnValue = F("Laurentiusstiege");
        break;
    }
    case 203013:
    {
        returnValue = F("Laurentiusstr.");
        break;
    }
    case 203014:
    {
        returnValue = F("Laurentiusweg");
        break;
    }
    case 203015:
    {
        returnValue = F("Laurenz-Kiesgen-Str.");
        break;
    }
    case 203016:
    {
        returnValue = F("Laurenz-Koch-Str.");
        break;
    }
    case 203017:
    {
        returnValue = F("Laurenz-Pelzer-Str.");
        break;
    }
    case 203018:
    {
        returnValue = F("Laurenzberger Str.");
        break;
    }
    case 203019:
    {
        returnValue = F("Laurenzberger Weg");
        break;
    }
    case 203020:
    {
        returnValue = F("Laurenzerweg");
        break;
    }
    case 203021:
    {
        returnValue = F("Laurenzi-Str.");
        break;
    }
    case 203022:
    {
        returnValue = F("Laurenziberg");
        break;
    }
    case 203023:
    {
        returnValue = F("Laurenzigasse");
        break;
    }
    case 203024:
    {
        returnValue = F("Laurenziplatz");
        break;
    }
    case 203025:
    {
        returnValue = F("Laurenzistr.");
        break;
    }
    case 203026:
    {
        returnValue = F("Laurenziusstr.");
        break;
    }
    case 203027:
    {
        returnValue = F("Laurenziweg");
        break;
    }
    case 203028:
    {
        returnValue = F("Laurenzstiege");
        break;
    }
    case 203029:
    {
        returnValue = F("Laurenzstr.");
        break;
    }
    case 203030:
    {
        returnValue = F("Laurettenstr.");
        break;
    }
    case 203031:
    {
        returnValue = F("Laurine-Hansen-Weg");
        break;
    }
    case 203032:
    {
        returnValue = F("Lauringer Str.");
        break;
    }
    case 203033:
    {
        returnValue = F("Laurinstr.");
        break;
    }
    case 203034:
    {
        returnValue = F("Laurinweg");
        break;
    }
    case 203035:
    {
        returnValue = F("Lauritz-Maßmann-Str.");
        break;
    }
    case 203036:
    {
        returnValue = F("Laurwegstr.");
        break;
    }
    case 203037:
    {
        returnValue = F("Laurötterstr.");
        break;
    }
    case 203038:
    {
        returnValue = F("Lausa");
        break;
    }
    case 203039:
    {
        returnValue = F("Lausaer Höhe");
        break;
    }
    case 203040:
    {
        returnValue = F("Lausaer Kirchgasse");
        break;
    }
    case 203041:
    {
        returnValue = F("Lausaer Str.");
        break;
    }
    case 203042:
    {
        returnValue = F("Lausaer Weg");
        break;
    }
    case 203043:
    {
        returnValue = F("Lausangerweg");
        break;
    }
    case 203044:
    {
        returnValue = F("Lausanner Str.");
        break;
    }
    case 203045:
    {
        returnValue = F("Lausbach");
        break;
    }
    case 203046:
    {
        returnValue = F("Lausbergweg");
        break;
    }
    case 203047:
    {
        returnValue = F("Lausbubenweg");
        break;
    }
    case 203048:
    {
        returnValue = F("Lausbuchenweg");
        break;
    }
    case 203049:
    {
        returnValue = F("Lausbüchel");
        break;
    }
    case 203050:
    {
        returnValue = F("Lausbüchelweg");
        break;
    }
    case 203051:
    {
        returnValue = F("Lausbühl");
        break;
    }
    case 203052:
    {
        returnValue = F("Lausbühlebeneweg");
        break;
    }
    case 203053:
    {
        returnValue = F("Lausbühlstr.");
        break;
    }
    case 203054:
    {
        returnValue = F("Lausbühlweg");
        break;
    }
    case 203055:
    {
        returnValue = F("Lauschaer Str.");
        break;
    }
    case 203056:
    {
        returnValue = F("Lauschaer Weg");
        break;
    }
    case 203057:
    {
        returnValue = F("Lauschaweg");
        break;
    }
    case 203058:
    {
        returnValue = F("Lauschbreite");
        break;
    }
    case 203059:
    {
        returnValue = F("Lauscheit");
        break;
    }
    case 203060:
    {
        returnValue = F("Lauscherbüchel");
        break;
    }
    case 203061:
    {
        returnValue = F("Lauscherstr.");
        break;
    }
    case 203062:
    {
        returnValue = F("Lauscherwörth");
        break;
    }
    case 203063:
    {
        returnValue = F("Lauschestr.");
        break;
    }
    case 203064:
    {
        returnValue = F("Lauscheweg");
        break;
    }
    case 203065:
    {
        returnValue = F("Lauschfelder Weg");
        break;
    }
    case 203066:
    {
        returnValue = F("Lauschgasse");
        break;
    }
    case 203067:
    {
        returnValue = F("Lauschhütte");
        break;
    }
    case 203068:
    {
        returnValue = F("Lauschiger Weg");
        break;
    }
    case 203069:
    {
        returnValue = F("Lauschigwiesenweg");
        break;
    }
    case 203070:
    {
        returnValue = F("Lauschka");
        break;
    }
    case 203071:
    {
        returnValue = F("Lauseberg");
        break;
    }
    case 203072:
    {
        returnValue = F("Lausebergsweg");
        break;
    }
    case 203073:
    {
        returnValue = F("Lausebergweg");
        break;
    }
    case 203074:
    {
        returnValue = F("Lauseeschneise");
        break;
    }
    case 203075:
    {
        returnValue = F("Lauseheide");
        break;
    }
    case 203076:
    {
        returnValue = F("Lauseicher Weg");
        break;
    }
    case 203077:
    {
        returnValue = F("Lauseknöchel");
        break;
    }
    case 203078:
    {
        returnValue = F("Lausen-Martin-Gasse");
        break;
    }
    case 203079:
    {
        returnValue = F("Lausener Bogen");
        break;
    }
    case 203080:
    {
        returnValue = F("Lausener Dorfplatz");
        break;
    }
    case 203081:
    {
        returnValue = F("Lausener Str.");
        break;
    }
    case 203082:
    {
        returnValue = F("Lausener Weg");
        break;
    }
    case 203083:
    {
        returnValue = F("Lausenweg");
        break;
    }
    case 203084:
    {
        returnValue = F("Lauser Str.");
        break;
    }
    case 203085:
    {
        returnValue = F("Lausestrumpf");
        break;
    }
    case 203086:
    {
        returnValue = F("Lausewiesen");
        break;
    }
    case 203087:
    {
        returnValue = F("Lausewinkel");
        break;
    }
    case 203088:
    {
        returnValue = F("Lausheim");
        break;
    }
    case 203089:
    {
        returnValue = F("Lausheimer Str.");
        break;
    }
    case 203090:
    {
        returnValue = F("Lausicker Fußweg");
        break;
    }
    case 203091:
    {
        returnValue = F("Lausicker Str.");
        break;
    }
    case 203092:
    {
        returnValue = F("Lausiekweg");
        break;
    }
    case 203093:
    {
        returnValue = F("Lausiger Str.");
        break;
    }
    case 203094:
    {
        returnValue = F("Lausigker Str.");
        break;
    }
    case 203095:
    {
        returnValue = F("Lausitzer Findlingspark Nochten");
        break;
    }
    case 203096:
    {
        returnValue = F("Lausitzer Ring");
        break;
    }
    case 203097:
    {
        returnValue = F("Lausitzer Str.");
        break;
    }
    case 203098:
    {
        returnValue = F("Lausitzer Weg");
        break;
    }
    case 203099:
    {
        returnValue = F("Lausitzer Wende");
        break;
    }
    case 203100:
    {
        returnValue = F("Lausitzerweg");
        break;
    }
    case 203101:
    {
        returnValue = F("Lausitzstr.");
        break;
    }
    case 203102:
    {
        returnValue = F("Lausitzweg");
        break;
    }
    case 203103:
    {
        returnValue = F("Lauskopf");
        break;
    }
    case 203104:
    {
        returnValue = F("Lausköppel");
        break;
    }
    case 203105:
    {
        returnValue = F("Lausmattweg");
        break;
    }
    case 203106:
    {
        returnValue = F("Lausner Weg");
        break;
    }
    case 203107:
    {
        returnValue = F("Lausnitzer Str.");
        break;
    }
    case 203108:
    {
        returnValue = F("Lausnitzer Weg");
        break;
    }
    case 203109:
    {
        returnValue = F("Lausnitzweg");
        break;
    }
    case 203110:
    {
        returnValue = F("Lausplatzweg");
        break;
    }
    case 203111:
    {
        returnValue = F("Laussonner Str.");
        break;
    }
    case 203112:
    {
        returnValue = F("Laustergasse");
        break;
    }
    case 203113:
    {
        returnValue = F("Laustiege");
        break;
    }
    case 203114:
    {
        returnValue = F("Laustr.");
        break;
    }
    case 203115:
    {
        returnValue = F("Lauswiesenweg");
        break;
    }
    case 203116:
    {
        returnValue = F("Lautaer Gartenstr.");
        break;
    }
    case 203117:
    {
        returnValue = F("Lautaer Hauptstr.");
        break;
    }
    case 203118:
    {
        returnValue = F("Lautaer Mühlweg");
        break;
    }
    case 203119:
    {
        returnValue = F("Lautaer Wiesenweg");
        break;
    }
    case 203120:
    {
        returnValue = F("Lautastr.");
        break;
    }
    case 203121:
    {
        returnValue = F("Lautawerkstr.");
        break;
    }
    case 203122:
    {
        returnValue = F("Laute Gasse");
        break;
    }
    case 203123:
    {
        returnValue = F("Laute-Dei-Str.");
        break;
    }
    case 203124:
    {
        returnValue = F("Lautelsgasse");
        break;
    }
    case 203125:
    {
        returnValue = F("Lauten-Weschnitzer Str.");
        break;
    }
    case 203126:
    {
        returnValue = F("Lautenbach");
        break;
    }
    case 203127:
    {
        returnValue = F("Lautenbacher Hauptweg");
        break;
    }
    case 203128:
    {
        returnValue = F("Lautenbacher Pfad");
        break;
    }
    case 203129:
    {
        returnValue = F("Lautenbacher Str.");
        break;
    }
    case 203130:
    {
        returnValue = F("Lautenbacher Weg");
        break;
    }
    case 203131:
    {
        returnValue = F("Lautenbacherstr.");
        break;
    }
    case 203132:
    {
        returnValue = F("Lautenbachstr.");
        break;
    }
    case 203133:
    {
        returnValue = F("Lautenbachtal");
        break;
    }
    case 203134:
    {
        returnValue = F("Lautenbachweg");
        break;
    }
    case 203135:
    {
        returnValue = F("Lautenfelsenstr.");
        break;
    }
    case 203136:
    {
        returnValue = F("Lautenfelsenweg");
        break;
    }
    case 203137:
    {
        returnValue = F("Lautengasse");
        break;
    }
    case 203138:
    {
        returnValue = F("Lautengrundweg");
        break;
    }
    case 203139:
    {
        returnValue = F("Lautenhofweg");
        break;
    }
    case 203140:
    {
        returnValue = F("Lautenhäuser Str.");
        break;
    }
    case 203141:
    {
        returnValue = F("Lautenmach");
        break;
    }
    case 203142:
    {
        returnValue = F("Lautenmacherstr.");
        break;
    }
    case 203143:
    {
        returnValue = F("Lautensackstr.");
        break;
    }
    case 203144:
    {
        returnValue = F("Lautenschlager-Passage");
        break;
    }
    case 203145:
    {
        returnValue = F("Lautenschlager-Staffel");
        break;
    }
    case 203146:
    {
        returnValue = F("Lautenschlagerstr.");
        break;
    }
    case 203147:
    {
        returnValue = F("Lautenschlägerstr.");
        break;
    }
    case 203148:
    {
        returnValue = F("Lautensee");
        break;
    }
    case 203149:
    {
        returnValue = F("Lautensteg");
        break;
    }
    case 203150:
    {
        returnValue = F("Lautenstr.");
        break;
    }
    case 203151:
    {
        returnValue = F("Lautenthal");
        break;
    }
    case 203152:
    {
        returnValue = F("Lautenthaler Kunstgraben");
        break;
    }
    case 203153:
    {
        returnValue = F("Lautenthaler Str.");
        break;
    }
    case 203154:
    {
        returnValue = F("Lautenthaler Weg");
        break;
    }
    case 203155:
    {
        returnValue = F("Lautenthalstr.");
        break;
    }
    case 203156:
    {
        returnValue = F("Lautenwaldweg");
        break;
    }
    case 203157:
    {
        returnValue = F("Lautenweg");
        break;
    }
    case 203158:
    {
        returnValue = F("Lautenwirtsgäßchen");
        break;
    }
    case 203159:
    {
        returnValue = F("Lauter");
        break;
    }
    case 203160:
    {
        returnValue = F("Lauter Eichenweg");
        break;
    }
    case 203161:
    {
        returnValue = F("Lauterach");
        break;
    }
    case 203162:
    {
        returnValue = F("Lauterachblick");
        break;
    }
    case 203163:
    {
        returnValue = F("Lauteracher Weg");
        break;
    }
    case 203164:
    {
        returnValue = F("Lauterachradweg");
        break;
    }
    case 203165:
    {
        returnValue = F("Lauterachstr.");
        break;
    }
    case 203166:
    {
        returnValue = F("Lauterachtal-Radweg");
        break;
    }
    case 203167:
    {
        returnValue = F("Lauterachtalstr.");
        break;
    }
    case 203168:
    {
        returnValue = F("Lauterbach");
        break;
    }
    case 203169:
    {
        returnValue = F("Lauterbach-Illemad");
        break;
    }
    case 203170:
    {
        returnValue = F("Lauterbacher Hain");
        break;
    }
    case 203171:
    {
        returnValue = F("Lauterbacher Hauptstr.");
        break;
    }
    case 203172:
    {
        returnValue = F("Lauterbacher Str.");
        break;
    }
    case 203173:
    {
        returnValue = F("Lauterbacher Sträßel");
        break;
    }
    case 203174:
    {
        returnValue = F("Lauterbacher Weg");
        break;
    }
    case 203175:
    {
        returnValue = F("Lauterbachstr.");
        break;
    }
    case 203176:
    {
        returnValue = F("Lauterbachtal");
        break;
    }
    case 203177:
    {
        returnValue = F("Lauterbachweg");
        break;
    }
    case 203178:
    {
        returnValue = F("Lauterbadstr.");
        break;
    }
    case 203179:
    {
        returnValue = F("Lauterbegleitweg");
        break;
    }
    case 203180:
    {
        returnValue = F("Lauterberg");
        break;
    }
    case 203181:
    {
        returnValue = F("Lauterberger Str.");
        break;
    }
    case 203182:
    {
        returnValue = F("Lauterberger Weg");
        break;
    }
    case 203183:
    {
        returnValue = F("Lauterbergstr.");
        break;
    }
    case 203184:
    {
        returnValue = F("Lauterbodenstr.");
        break;
    }
    case 203185:
    {
        returnValue = F("Lauterbornweg");
        break;
    }
    case 203186:
    {
        returnValue = F("Lauterbruckstr.");
        break;
    }
    case 203187:
    {
        returnValue = F("Lauterbrunnenweg");
        break;
    }
    case 203188:
    {
        returnValue = F("Lauterbrunner Str.");
        break;
    }
    case 203189:
    {
        returnValue = F("Lauterbrunnstr.");
        break;
    }
    case 203190:
    {
        returnValue = F("Lauterburger Allee");
        break;
    }
    case 203191:
    {
        returnValue = F("Lauterburger Str.");
        break;
    }
    case 203192:
    {
        returnValue = F("Lauterburger Weg");
        break;
    }
    case 203193:
    {
        returnValue = F("Lauterburgstr.");
        break;
    }
    case 203194:
    {
        returnValue = F("Lautereckener Str.");
        break;
    }
    case 203195:
    {
        returnValue = F("Lautereckenstr.");
        break;
    }
    case 203196:
    {
        returnValue = F("Lauterenstr.");
        break;
    }
    case 203197:
    {
        returnValue = F("Lauterer Grenzflügel");
        break;
    }
    case 203198:
    {
        returnValue = F("Lauterer Höhe");
        break;
    }
    case 203199:
    {
        returnValue = F("Lauterer Str.");
        break;
    }
    case 203200:
    {
        returnValue = F("Lauterer Weg");
        break;
    }
    case 203201:
    {
        returnValue = F("Lautererstr.");
        break;
    }
    case 203202:
    {
        returnValue = F("Lautergartenstr.");
        break;
    }
    case 203203:
    {
        returnValue = F("Lautergasse");
        break;
    }
    case 203204:
    {
        returnValue = F("Lauterhofener Str.");
        break;
    }
    case 203205:
    {
        returnValue = F("Lauterhofstr.");
        break;
    }
    case 203206:
    {
        returnValue = F("Lauterkanal Renaturierung");
        break;
    }
    case 203207:
    {
        returnValue = F("Lauterkopfstr.");
        break;
    }
    case 203208:
    {
        returnValue = F("Lauterlech");
        break;
    }
    case 203209:
    {
        returnValue = F("Lautermühleweg");
        break;
    }
    case 203210:
    {
        returnValue = F("Lautern");
        break;
    }
    case 203211:
    {
        returnValue = F("Lautern Eichenweg");
        break;
    }
    case 203212:
    {
        returnValue = F("Lauterner Str.");
        break;
    }
    case 203213:
    {
        returnValue = F("Lauterner Weg");
        break;
    }
    case 203214:
    {
        returnValue = F("Lauternstr.");
        break;
    }
    case 203215:
    {
        returnValue = F("Lauternweg");
        break;
    }
    case 203216:
    {
        returnValue = F("Lautersee");
        break;
    }
    case 203217:
    {
        returnValue = F("Lauterseeweg");
        break;
    }
    case 203218:
    {
        returnValue = F("Lautersheimer Str.");
        break;
    }
    case 203219:
    {
        returnValue = F("Lautershöhlweg");
        break;
    }
    case 203220:
    {
        returnValue = F("Lauterstein");
        break;
    }
    case 203221:
    {
        returnValue = F("Lauterstr.");
        break;
    }
    case 203222:
    {
        returnValue = F("Lautertal Radweg");
        break;
    }
    case 203223:
    {
        returnValue = F("Lautertaler Str.");
        break;
    }
    case 203224:
    {
        returnValue = F("Lautertaler Weg");
        break;
    }
    case 203225:
    {
        returnValue = F("Lautertalsteige");
        break;
    }
    case 203226:
    {
        returnValue = F("Lautertalstr.");
        break;
    }
    case 203227:
    {
        returnValue = F("Lautertalweg");
        break;
    }
    case 203228:
    {
        returnValue = F("Lauterwald");
        break;
    }
    case 203229:
    {
        returnValue = F("Lauterwaldweg");
        break;
    }
    case 203230:
    {
        returnValue = F("Lauterweg");
        break;
    }
    case 203231:
    {
        returnValue = F("Lauterwiesen");
        break;
    }
    case 203232:
    {
        returnValue = F("Lauteschlägerstr.");
        break;
    }
    case 203233:
    {
        returnValue = F("Lauthstr.");
        break;
    }
    case 203234:
    {
        returnValue = F("Lautlinger Str.");
        break;
    }
    case 203235:
    {
        returnValue = F("Lautlinger Weg");
        break;
    }
    case 203236:
    {
        returnValue = F("Lautracher Str.");
        break;
    }
    case 203237:
    {
        returnValue = F("Lautshof");
        break;
    }
    case 203238:
    {
        returnValue = F("Lautstr.");
        break;
    }
    case 203239:
    {
        returnValue = F("Lautzenhardtweg");
        break;
    }
    case 203240:
    {
        returnValue = F("Lautzenhartsackerschneise");
        break;
    }
    case 203241:
    {
        returnValue = F("Lautzentalstr.");
        break;
    }
    case 203242:
    {
        returnValue = F("Lautzerath");
        break;
    }
    case 203243:
    {
        returnValue = F("Lautzerter Str.");
        break;
    }
    case 203244:
    {
        returnValue = F("Lautzkirchenstr.");
        break;
    }
    case 203245:
    {
        returnValue = F("Lautzkircher Weg");
        break;
    }
    case 203246:
    {
        returnValue = F("Lautzschen");
        break;
    }
    case 203247:
    {
        returnValue = F("Lautzschke");
        break;
    }
    case 203248:
    {
        returnValue = F("Lautzstr.");
        break;
    }
    case 203249:
    {
        returnValue = F("Lautzweilerweg");
        break;
    }
    case 203250:
    {
        returnValue = F("Lauvenburger Str.");
        break;
    }
    case 203251:
    {
        returnValue = F("Lauwandsweg");
        break;
    }
    case 203252:
    {
        returnValue = F("Lauwasenstr.");
        break;
    }
    case 203253:
    {
        returnValue = F("Lauweg");
        break;
    }
    case 203254:
    {
        returnValue = F("Lauweinbergstr.");
        break;
    }
    case 203255:
    {
        returnValue = F("Lauwetter");
        break;
    }
    case 203256:
    {
        returnValue = F("Lauwiesen");
        break;
    }
    case 203257:
    {
        returnValue = F("Lauwiesenstr.");
        break;
    }
    case 203258:
    {
        returnValue = F("Lauwiesenweg");
        break;
    }
    case 203259:
    {
        returnValue = F("Lauwstr.");
        break;
    }
    case 203260:
    {
        returnValue = F("Lauxbergstr.");
        break;
    }
    case 203261:
    {
        returnValue = F("Lauxengarten");
        break;
    }
    case 203262:
    {
        returnValue = F("Lauxmannweg");
        break;
    }
    case 203263:
    {
        returnValue = F("Lauxweg");
        break;
    }
    case 203264:
    {
        returnValue = F("Lauzenstr.");
        break;
    }
    case 203265:
    {
        returnValue = F("Laußiger Str.");
        break;
    }
    case 203266:
    {
        returnValue = F("Laußiger Weg");
        break;
    }
    case 203267:
    {
        returnValue = F("Laußnitz- Würschnitzer Weg");
        break;
    }
    case 203268:
    {
        returnValue = F("Laußnitzer Weg");
        break;
    }
    case 203269:
    {
        returnValue = F("Lavagarten");
        break;
    }
    case 203270:
    {
        returnValue = F("Lavastr.");
        break;
    }
    case 203271:
    {
        returnValue = F("Lavastromweg");
        break;
    }
    case 203272:
    {
        returnValue = F("Lavaterhof");
        break;
    }
    case 203273:
    {
        returnValue = F("Lavaterweg");
        break;
    }
    case 203274:
    {
        returnValue = F("Lavauengasse");
        break;
    }
    case 203275:
    {
        returnValue = F("Lavaweg");
        break;
    }
    case 203276:
    {
        returnValue = F("Lavayweg");
        break;
    }
    case 203277:
    {
        returnValue = F("Lavelsloher Str.");
        break;
    }
    case 203278:
    {
        returnValue = F("Lavelsloher Weg");
        break;
    }
    case 203279:
    {
        returnValue = F("Lavendelgarten");
        break;
    }
    case 203280:
    {
        returnValue = F("Lavendelkreisel");
        break;
    }
    case 203281:
    {
        returnValue = F("Lavendelring");
        break;
    }
    case 203282:
    {
        returnValue = F("Lavendelstr.");
        break;
    }
    case 203283:
    {
        returnValue = F("Lavendelweg");
        break;
    }
    case 203284:
    {
        returnValue = F("Lavener Str.");
        break;
    }
    case 203285:
    {
        returnValue = F("Lavener Weg");
        break;
    }
    case 203286:
    {
        returnValue = F("Lavenstedter Dorfstr.");
        break;
    }
    case 203287:
    {
        returnValue = F("Lavenstedter Weg");
        break;
    }
    case 203288:
    {
        returnValue = F("Lavenstr.");
        break;
    }
    case 203289:
    {
        returnValue = F("Laventiestr.");
        break;
    }
    case 203290:
    {
        returnValue = F("Laverweg");
        break;
    }
    case 203291:
    {
        returnValue = F("Laves Kulturpfad");
        break;
    }
    case 203292:
    {
        returnValue = F("Lavesallee");
        break;
    }
    case 203293:
    {
        returnValue = F("Lavesbrücke");
        break;
    }
    case 203294:
    {
        returnValue = F("Lavesplatz");
        break;
    }
    case 203295:
    {
        returnValue = F("Lavesring");
        break;
    }
    case 203296:
    {
        returnValue = F("Lavesstr.");
        break;
    }
    case 203297:
    {
        returnValue = F("Lavesumer Str.");
        break;
    }
    case 203298:
    {
        returnValue = F("Lavinia-Fontana-Str.");
        break;
    }
    case 203299:
    {
        returnValue = F("Lawaetzstr.");
        break;
    }
    case 203300:
    {
        returnValue = F("Lawalder Str.");
        break;
    }
    case 203301:
    {
        returnValue = F("Laward-Weg");
        break;
    }
    case 203302:
    {
        returnValue = F("Lawayweg");
        break;
    }
    case 203303:
    {
        returnValue = F("Laweg");
        break;
    }
    case 203304:
    {
        returnValue = F("Lawekestr.");
        break;
    }
    case 203305:
    {
        returnValue = F("Lawekeweg");
        break;
    }
    case 203306:
    {
        returnValue = F("Lawerweg");
        break;
    }
    case 203307:
    {
        returnValue = F("Lawinkelhöfe");
        break;
    }
    case 203308:
    {
        returnValue = F("Lawitzer Str.");
        break;
    }
    case 203309:
    {
        returnValue = F("Laxburg");
        break;
    }
    case 203310:
    {
        returnValue = F("Laxgangerfeld");
        break;
    }
    case 203311:
    {
        returnValue = F("Laxhuberplatz");
        break;
    }
    case 203312:
    {
        returnValue = F("Laxouer Str.");
        break;
    }
    case 203313:
    {
        returnValue = F("Lay");
        break;
    }
    case 203314:
    {
        returnValue = F("Layches Weg");
        break;
    }
    case 203315:
    {
        returnValue = F("Laye");
        break;
    }
    case 203316:
    {
        returnValue = F("Layenbergstr.");
        break;
    }
    case 203317:
    {
        returnValue = F("Layenerweg");
        break;
    }
    case 203318:
    {
        returnValue = F("Layenhofstr.");
        break;
    }
    case 203319:
    {
        returnValue = F("Layenhöfer Chaussee");
        break;
    }
    case 203320:
    {
        returnValue = F("Layenkaul");
        break;
    }
    case 203321:
    {
        returnValue = F("Layenmühle");
        break;
    }
    case 203322:
    {
        returnValue = F("Layenstiege");
        break;
    }
    case 203323:
    {
        returnValue = F("Layenstr.");
        break;
    }
    case 203324:
    {
        returnValue = F("Layenweg");
        break;
    }
    case 203325:
    {
        returnValue = F("Layer Bergweg");
        break;
    }
    case 203326:
    {
        returnValue = F("Layer Str.");
        break;
    }
    case 203327:
    {
        returnValue = F("Layerhof");
        break;
    }
    case 203328:
    {
        returnValue = F("Laygasse");
        break;
    }
    case 203329:
    {
        returnValue = F("Layhweg");
        break;
    }
    case 203330:
    {
        returnValue = F("Laymühle");
        break;
    }
    case 203331:
    {
        returnValue = F("Laystr.");
        break;
    }
    case 203332:
    {
        returnValue = F("Layweg");
        break;
    }
    case 203333:
    {
        returnValue = F("Lazarettgarten");
        break;
    }
    case 203334:
    {
        returnValue = F("Lazarettgasse");
        break;
    }
    case 203335:
    {
        returnValue = F("Lazarettgäßchen");
        break;
    }
    case 203336:
    {
        returnValue = F("Lazarettstr.");
        break;
    }
    case 203337:
    {
        returnValue = F("Lazarettweg");
        break;
    }
    case 203338:
    {
        returnValue = F("Lazariterstr.");
        break;
    }
    case 203339:
    {
        returnValue = F("Lazarus-Mannheimer-Str.");
        break;
    }
    case 203340:
    {
        returnValue = F("Lazarus-Schwendi-Str.");
        break;
    }
    case 203341:
    {
        returnValue = F("Lazarus-von-Schwendi-Str.");
        break;
    }
    case 203342:
    {
        returnValue = F("Lazarusplatz");
        break;
    }
    case 203343:
    {
        returnValue = F("Lazarusstr.");
        break;
    }
    case 203344:
    {
        returnValue = F("Lazarusweg");
        break;
    }
    case 203345:
    {
        returnValue = F("Lazerstr.");
        break;
    }
    case 203346:
    {
        returnValue = F("Laßbacher Str.");
        break;
    }
    case 203347:
    {
        returnValue = F("Laßbacher Weg");
        break;
    }
    case 203348:
    {
        returnValue = F("Laßbergstr.");
        break;
    }
    case 203349:
    {
        returnValue = F("Laßbergsträßle");
        break;
    }
    case 203350:
    {
        returnValue = F("Laßbrucher Str.");
        break;
    }
    case 203351:
    {
        returnValue = F("Laßklingenweg");
        break;
    }
    case 203352:
    {
        returnValue = F("Laßlebenstr.");
        break;
    }
    case 203353:
    {
        returnValue = F("Laßportstr.");
        break;
    }
    case 203354:
    {
        returnValue = F("Laßrönner Dorfstr.");
        break;
    }
    case 203355:
    {
        returnValue = F("Laßrönner Weg");
        break;
    }
    case 203356:
    {
        returnValue = F("Laßweg");
        break;
    }
    case 203357:
    {
        returnValue = F("Laßwehr");
        break;
    }
    case 203358:
    {
        returnValue = F("Le Cannet-Platz");
        break;
    }
    case 203359:
    {
        returnValue = F("Le Chambon-Str.");
        break;
    }
    case 203360:
    {
        returnValue = F("Le Coteauer Str.");
        break;
    }
    case 203361:
    {
        returnValue = F("Le Pouliguen-Str.");
        break;
    }
    case 203362:
    {
        returnValue = F("Le Quartier Hornbach");
        break;
    }
    case 203363:
    {
        returnValue = F("Le-Blanc-Platz");
        break;
    }
    case 203364:
    {
        returnValue = F("Le-Cannet-Rocheville-Str.");
        break;
    }
    case 203365:
    {
        returnValue = F("Le-Corbusier-Str.");
        break;
    }
    case 203366:
    {
        returnValue = F("Le-Croisic-Str.");
        break;
    }
    case 203367:
    {
        returnValue = F("Le-Lavandou-Str.");
        break;
    }
    case 203368:
    {
        returnValue = F("Le-Mans-Wall");
        break;
    }
    case 203369:
    {
        returnValue = F("Le-Mée-Platz");
        break;
    }
    case 203370:
    {
        returnValue = F("Le-Mêle-Str.");
        break;
    }
    case 203371:
    {
        returnValue = F("Le-Perreux-Park");
        break;
    }
    case 203372:
    {
        returnValue = F("Le-Plessis-Trévise-Str.");
        break;
    }
    case 203373:
    {
        returnValue = F("Le-Portel-Ring");
        break;
    }
    case 203374:
    {
        returnValue = F("Le-Puy-Str.");
        break;
    }
    case 203375:
    {
        returnValue = F("Le-Teil-Str.");
        break;
    }
    case 203376:
    {
        returnValue = F("Le-Touquet-Str.");
        break;
    }
    case 203377:
    {
        returnValue = F("Lea-Grundig-Weg");
        break;
    }
    case 203378:
    {
        returnValue = F("Lea-Weinberg-Str.");
        break;
    }
    case 203379:
    {
        returnValue = F("Leanderstr.");
        break;
    }
    case 203380:
    {
        returnValue = F("Leanderweg");
        break;
    }
    case 203381:
    {
        returnValue = F("Leauer Str.");
        break;
    }
    case 203382:
    {
        returnValue = F("Lebacher Landstr.");
        break;
    }
    case 203383:
    {
        returnValue = F("Lebacher Str.");
        break;
    }
    case 203384:
    {
        returnValue = F("Lebacher Weg");
        break;
    }
    case 203385:
    {
        returnValue = F("Lebaweg");
        break;
    }
    case 203386:
    {
        returnValue = F("Lebbien");
        break;
    }
    case 203387:
    {
        returnValue = F("Lebbin");
        break;
    }
    case 203388:
    {
        returnValue = F("Lebbiner Str.");
        break;
    }
    case 203389:
    {
        returnValue = F("Lebecksmühle");
        break;
    }
    case 203390:
    {
        returnValue = F("Lebeltstr.");
        break;
    }
    case 203391:
    {
        returnValue = F("Lebenauer Str.");
        break;
    }
    case 203392:
    {
        returnValue = F("Lebendorfer Str.");
        break;
    }
    case 203393:
    {
        returnValue = F("Lebenhaner Str.");
        break;
    }
    case 203394:
    {
        returnValue = F("Lebensbaumweg");
        break;
    }
    case 203395:
    {
        returnValue = F("Lebensborner Weg");
        break;
    }
    case 203396:
    {
        returnValue = F("Lebensfluss");
        break;
    }
    case 203397:
    {
        returnValue = F("Lebensgarten");
        break;
    }
    case 203398:
    {
        returnValue = F("Lebenshilfeweg");
        break;
    }
    case 203399:
    {
        returnValue = F("Lebensstr.");
        break;
    }
    case 203400:
    {
        returnValue = F("Lebenstedter Str.");
        break;
    }
    case 203401:
    {
        returnValue = F("Lebensteinring");
        break;
    }
    case 203402:
    {
        returnValue = F("Lebenswende");
        break;
    }
    case 203403:
    {
        returnValue = F("Lebenswiese");
        break;
    }
    case 203404:
    {
        returnValue = F("Leberbach");
        break;
    }
    case 203405:
    {
        returnValue = F("Leberbachstr.");
        break;
    }
    case 203406:
    {
        returnValue = F("Leberberg");
        break;
    }
    case 203407:
    {
        returnValue = F("Leberecht-Migge-Anlage");
        break;
    }
    case 203408:
    {
        returnValue = F("Leberecht-Migge-Weg");
        break;
    }
    case 203409:
    {
        returnValue = F("Leberenstr.");
        break;
    }
    case 203410:
    {
        returnValue = F("Lebergasse");
        break;
    }
    case 203411:
    {
        returnValue = F("Leberichstiege");
        break;
    }
    case 203412:
    {
        returnValue = F("Leberlestr.");
        break;
    }
    case 203413:
    {
        returnValue = F("Lebermannsgang");
        break;
    }
    case 203414:
    {
        returnValue = F("Lebermoosweg");
        break;
    }
    case 203415:
    {
        returnValue = F("Lebern");
        break;
    }
    case 203416:
    {
        returnValue = F("Lebersberg");
        break;
    }
    case 203417:
    {
        returnValue = F("Lebersberger Feld");
        break;
    }
    case 203418:
    {
        returnValue = F("Lebersberger Str.");
        break;
    }
    case 203419:
    {
        returnValue = F("Lebersdorfer Str.");
        break;
    }
    case 203420:
    {
        returnValue = F("Lebersgasse");
        break;
    }
    case 203421:
    {
        returnValue = F("Lebersteinweg");
        break;
    }
    case 203422:
    {
        returnValue = F("Leberstr.");
        break;
    }
    case 203423:
    {
        returnValue = F("Lebertal");
        break;
    }
    case 203424:
    {
        returnValue = F("Lebiener Str.");
        break;
    }
    case 203425:
    {
        returnValue = F("Lebkuchenberg");
        break;
    }
    case 203426:
    {
        returnValue = F("Lebkuchengasse");
        break;
    }
    case 203427:
    {
        returnValue = F("Lebküchlerweg");
        break;
    }
    case 203428:
    {
        returnValue = F("Leblering");
        break;
    }
    case 203429:
    {
        returnValue = F("Leblicher Str.");
        break;
    }
    case 203430:
    {
        returnValue = F("Lebmeierweg");
        break;
    }
    case 203431:
    {
        returnValue = F("Leborker Ring");
        break;
    }
    case 203432:
    {
        returnValue = F("Lebrecht-Diener-Str.");
        break;
    }
    case 203433:
    {
        returnValue = F("Lebrechtsruh");
        break;
    }
    case 203434:
    {
        returnValue = F("Lebrechtstr.");
        break;
    }
    case 203435:
    {
        returnValue = F("Lebretstr.");
        break;
    }
    case 203436:
    {
        returnValue = F("Lebuinstr.");
        break;
    }
    case 203437:
    {
        returnValue = F("Lebusaer Str.");
        break;
    }
    case 203438:
    {
        returnValue = F("Lebuser Str.");
        break;
    }
    case 203439:
    {
        returnValue = F("Lebzelterberg");
        break;
    }
    case 203440:
    {
        returnValue = F("Lebzeltergasse");
        break;
    }
    case 203441:
    {
        returnValue = F("Lebzeltergaßl");
        break;
    }
    case 203442:
    {
        returnValue = F("Lebzelterstr.");
        break;
    }
    case 203443:
    {
        returnValue = F("Lebzelterweg");
        break;
    }
    case 203444:
    {
        returnValue = F("Lech-Höhenweg");
        break;
    }
    case 203445:
    {
        returnValue = F("Lechallee");
        break;
    }
    case 203446:
    {
        returnValue = F("Lechalpe");
        break;
    }
    case 203447:
    {
        returnValue = F("Lechanger");
        break;
    }
    case 203448:
    {
        returnValue = F("Lechau");
        break;
    }
    case 203449:
    {
        returnValue = F("Lechau West");
        break;
    }
    case 203450:
    {
        returnValue = F("Lechauenstr.");
        break;
    }
    case 203451:
    {
        returnValue = F("Lechauer Weg");
        break;
    }
    case 203452:
    {
        returnValue = F("Lechberg");
        break;
    }
    case 203453:
    {
        returnValue = F("Lechbrucker Str.");
        break;
    }
    case 203454:
    {
        returnValue = F("Lechdamm");
        break;
    }
    case 203455:
    {
        returnValue = F("Lechenau");
        break;
    }
    case 203456:
    {
        returnValue = F("Lechenicher Pfad");
        break;
    }
    case 203457:
    {
        returnValue = F("Lechenicher Str.");
        break;
    }
    case 203458:
    {
        returnValue = F("Lechenicher Weg");
        break;
    }
    case 203459:
    {
        returnValue = F("Lechenrother Weg");
        break;
    }
    case 203460:
    {
        returnValue = F("Lecherbergstr.");
        break;
    }
    case 203461:
    {
        returnValue = F("Lechermannstr.");
        break;
    }
    case 203462:
    {
        returnValue = F("Lecherweg");
        break;
    }
    case 203463:
    {
        returnValue = F("Lecherwiese");
        break;
    }
    case 203464:
    {
        returnValue = F("Lechfeld");
        break;
    }
    case 203465:
    {
        returnValue = F("Lechfeld Nord");
        break;
    }
    case 203466:
    {
        returnValue = F("Lechfelder Str.");
        break;
    }
    case 203467:
    {
        returnValue = F("Lechfeldgraben");
        break;
    }
    case 203468:
    {
        returnValue = F("Lechfeldkaserne");
        break;
    }
    case 203469:
    {
        returnValue = F("Lechfeldring");
        break;
    }
    case 203470:
    {
        returnValue = F("Lechfeldstr.");
        break;
    }
    case 203471:
    {
        returnValue = F("Lechfeldsträßchen");
        break;
    }
    case 203472:
    {
        returnValue = F("Lechfeldweg");
        break;
    }
    case 203473:
    {
        returnValue = F("Lechgasse");
        break;
    }
    case 203474:
    {
        returnValue = F("Lechhalde");
        break;
    }
    case 203475:
    {
        returnValue = F("Lechhaldenstr.");
        break;
    }
    case 203476:
    {
        returnValue = F("Lechhallenweg");
        break;
    }
    case 203477:
    {
        returnValue = F("Lechhanslstr.");
        break;
    }
    case 203478:
    {
        returnValue = F("Lechhanslweg");
        break;
    }
    case 203479:
    {
        returnValue = F("Lechhauser Str.");
        break;
    }
    case 203480:
    {
        returnValue = F("Lechleitnerweg");
        break;
    }
    case 203481:
    {
        returnValue = F("Lechlohweg");
        break;
    }
    case 203482:
    {
        returnValue = F("Lechlweg");
        break;
    }
    case 203483:
    {
        returnValue = F("Lechmühlen");
        break;
    }
    case 203484:
    {
        returnValue = F("Lechner-Passage");
        break;
    }
    case 203485:
    {
        returnValue = F("Lechnergasse");
        break;
    }
    case 203486:
    {
        returnValue = F("Lechnerstr.");
        break;
    }
    case 203487:
    {
        returnValue = F("Lechnerweg");
        break;
    }
    case 203488:
    {
        returnValue = F("Lechnitzer Weg");
        break;
    }
    case 203489:
    {
        returnValue = F("Lechrainhöhe");
        break;
    }
    case 203490:
    {
        returnValue = F("Lechrainstr.");
        break;
    }
    case 203491:
    {
        returnValue = F("Lechring");
        break;
    }
    case 203492:
    {
        returnValue = F("Lechsberg");
        break;
    }
    case 203493:
    {
        returnValue = F("Lechsbergstr.");
        break;
    }
    case 203494:
    {
        returnValue = F("Lechschotte");
        break;
    }
    case 203495:
    {
        returnValue = F("Lechsel Weg");
        break;
    }
    case 203496:
    {
        returnValue = F("Lechsenwiese");
        break;
    }
    case 203497:
    {
        returnValue = F("Lechstaustufe");
        break;
    }
    case 203498:
    {
        returnValue = F("Lechstr.");
        break;
    }
    case 203499:
    {
        returnValue = F("Lechtaler Str.");
        break;
    }
    case 203500:
    {
        returnValue = F("Lechtaler Weg");
        break;
    }
    case 203501:
    {
        returnValue = F("Lechtalstr.");
        break;
    }
    case 203502:
    {
        returnValue = F("Lechtappenweg");
        break;
    }
    case 203503:
    {
        returnValue = F("Lechteickenweg");
        break;
    }
    case 203504:
    {
        returnValue = F("Lechteike");
        break;
    }
    case 203505:
    {
        returnValue = F("Lechtenbrink");
        break;
    }
    case 203506:
    {
        returnValue = F("Lechtenkamp");
        break;
    }
    case 203507:
    {
        returnValue = F("Lechtenweg");
        break;
    }
    case 203508:
    {
        returnValue = F("Lechterker Str.");
        break;
    }
    case 203509:
    {
        returnValue = F("Lechtermanns Ort");
        break;
    }
    case 203510:
    {
        returnValue = F("Lechtermannshof");
        break;
    }
    case 203511:
    {
        returnValue = F("Lechterstr.");
        break;
    }
    case 203512:
    {
        returnValue = F("Lechtestr.");
        break;
    }
    case 203513:
    {
        returnValue = F("Lechtinger Kirchweg");
        break;
    }
    case 203514:
    {
        returnValue = F("Lechtinger Str.");
        break;
    }
    case 203515:
    {
        returnValue = F("Lechtmer Str.");
        break;
    }
    case 203516:
    {
        returnValue = F("Lechtorstr.");
        break;
    }
    case 203517:
    {
        returnValue = F("Lechtruper Torfweg");
        break;
    }
    case 203518:
    {
        returnValue = F("Lechtstr.");
        break;
    }
    case 203519:
    {
        returnValue = F("Lechuferweg");
        break;
    }
    case 203520:
    {
        returnValue = F("Lechvorstadt");
        break;
    }
    case 203521:
    {
        returnValue = F("Lechweg");
        break;
    }
    case 203522:
    {
        returnValue = F("Lechwehrstr.");
        break;
    }
    case 203523:
    {
        returnValue = F("Lechwiesenstr.");
        break;
    }
    case 203524:
    {
        returnValue = F("Lechwiesenweg");
        break;
    }
    case 203525:
    {
        returnValue = F("Lechänger");
        break;
    }
    case 203526:
    {
        returnValue = F("Leckeng");
        break;
    }
    case 203527:
    {
        returnValue = F("Leckenhofstr.");
        break;
    }
    case 203528:
    {
        returnValue = F("Leckenwalterstr.");
        break;
    }
    case 203529:
    {
        returnValue = F("Leckenweg");
        break;
    }
    case 203530:
    {
        returnValue = F("Lecker Chaussee");
        break;
    }
    case 203531:
    {
        returnValue = F("Lecker Str.");
        break;
    }
    case 203532:
    {
        returnValue = F("Leckerberg");
        break;
    }
    case 203533:
    {
        returnValue = F("Leckerfeld");
        break;
    }
    case 203534:
    {
        returnValue = F("Leckerfeldweg");
        break;
    }
    case 203535:
    {
        returnValue = F("Leckergäßchen");
        break;
    }
    case 203536:
    {
        returnValue = F("Leckerhorstweg");
        break;
    }
    case 203537:
    {
        returnValue = F("Leckerhölken");
        break;
    }
    case 203538:
    {
        returnValue = F("Leckerhörne");
        break;
    }
    case 203539:
    {
        returnValue = F("Leckermühle");
        break;
    }
    case 203540:
    {
        returnValue = F("Leckersbach");
        break;
    }
    case 203541:
    {
        returnValue = F("Leckersgasse");
        break;
    }
    case 203542:
    {
        returnValue = F("Leckerstr.");
        break;
    }
    case 203543:
    {
        returnValue = F("Leckeweg");
        break;
    }
    case 203544:
    {
        returnValue = F("Leckfeld-Nord");
        break;
    }
    case 203545:
    {
        returnValue = F("Leckgadumstr.");
        break;
    }
    case 203546:
    {
        returnValue = F("Leckhausstr.");
        break;
    }
    case 203547:
    {
        returnValue = F("Leckhuus");
        break;
    }
    case 203548:
    {
        returnValue = F("Leckingser Str.");
        break;
    }
    case 203549:
    {
        returnValue = F("Leckringhäuser Str.");
        break;
    }
    case 203550:
    {
        returnValue = F("Leckweg");
        break;
    }
    case 203551:
    {
        returnValue = F("Leckwitzer Str.");
        break;
    }
    case 203552:
    {
        returnValue = F("Leconskamp");
        break;
    }
    case 203553:
    {
        returnValue = F("Leda-Jümme-Weg");
        break;
    }
    case 203554:
    {
        returnValue = F("Ledabrücke");
        break;
    }
    case 203555:
    {
        returnValue = F("Ledastr.");
        break;
    }
    case 203556:
    {
        returnValue = F("Ledaweg");
        break;
    }
    case 203557:
    {
        returnValue = F("Ledder Dorfstr.");
        break;
    }
    case 203558:
    {
        returnValue = F("Ledder Mühlenweg");
        break;
    }
    case 203559:
    {
        returnValue = F("Ledder Str.");
        break;
    }
    case 203560:
    {
        returnValue = F("Leddergasse");
        break;
    }
    case 203561:
    {
        returnValue = F("Ledderhoser Weg");
        break;
    }
    case 203562:
    {
        returnValue = F("Ledderken");
        break;
    }
    case 203563:
    {
        returnValue = F("Ledderkesweg");
        break;
    }
    case 203564:
    {
        returnValue = F("Leddernbrücke");
        break;
    }
    case 203565:
    {
        returnValue = F("Leddigenweg");
        break;
    }
    case 203566:
    {
        returnValue = F("Leddiner Weg");
        break;
    }
    case 203567:
    {
        returnValue = F("Leddinring");
        break;
    }
    case 203568:
    {
        returnValue = F("Leddinstr.");
        break;
    }
    case 203569:
    {
        returnValue = F("Leddinweg");
        break;
    }
    case 203570:
    {
        returnValue = F("Ledebourstr.");
        break;
    }
    case 203571:
    {
        returnValue = F("Ledebrink");
        break;
    }
    case 203572:
    {
        returnValue = F("Ledeburstr.");
        break;
    }
    case 203573:
    {
        returnValue = F("Ledeburweg");
        break;
    }
    case 203574:
    {
        returnValue = F("Ledegemstr.");
        break;
    }
    case 203575:
    {
        returnValue = F("Ledelsweg");
        break;
    }
    case 203576:
    {
        returnValue = F("Ledenweg");
        break;
    }
    case 203577:
    {
        returnValue = F("Lederacker");
        break;
    }
    case 203578:
    {
        returnValue = F("Lederackerring");
        break;
    }
    case 203579:
    {
        returnValue = F("Lederbach");
        break;
    }
    case 203580:
    {
        returnValue = F("Lederberg");
        break;
    }
    case 203581:
    {
        returnValue = F("Lederbruckgasse");
        break;
    }
    case 203582:
    {
        returnValue = F("Lederbuchelweg");
        break;
    }
    case 203583:
    {
        returnValue = F("Lederbuschstr.");
        break;
    }
    case 203584:
    {
        returnValue = F("Lederecke");
        break;
    }
    case 203585:
    {
        returnValue = F("Lederer-Str.");
        break;
    }
    case 203586:
    {
        returnValue = F("Ledererberg");
        break;
    }
    case 203587:
    {
        returnValue = F("Ledererfeld");
        break;
    }
    case 203588:
    {
        returnValue = F("Lederergasse");
        break;
    }
    case 203589:
    {
        returnValue = F("Ledererhang");
        break;
    }
    case 203590:
    {
        returnValue = F("Ledererplatz");
        break;
    }
    case 203591:
    {
        returnValue = F("Ledererring");
        break;
    }
    case 203592:
    {
        returnValue = F("Lederersteg");
        break;
    }
    case 203593:
    {
        returnValue = F("Ledererstr.");
        break;
    }
    case 203594:
    {
        returnValue = F("Ledererweg");
        break;
    }
    case 203595:
    {
        returnValue = F("Lederesmühle");
        break;
    }
    case 203596:
    {
        returnValue = F("Ledergasse");
        break;
    }
    case 203597:
    {
        returnValue = F("Ledergraben");
        break;
    }
    case 203598:
    {
        returnValue = F("Ledergässle");
        break;
    }
    case 203599:
    {
        returnValue = F("Ledergäßchen");
        break;
    }
    case 203600:
    {
        returnValue = F("Ledergäßle");
        break;
    }
    case 203601:
    {
        returnValue = F("Lederhecke");
        break;
    }
    case 203602:
    {
        returnValue = F("Lederholzweg");
        break;
    }
    case 203603:
    {
        returnValue = F("Lederhosenpfad");
        break;
    }
    case 203604:
    {
        returnValue = F("Lederhosenstr.");
        break;
    }
    case 203605:
    {
        returnValue = F("Lederhosenweg");
        break;
    }
    case 203606:
    {
        returnValue = F("Lederinstr.");
        break;
    }
    case 203607:
    {
        returnValue = F("Lederke");
        break;
    }
    case 203608:
    {
        returnValue = F("Lederlenstr.");
        break;
    }
    case 203609:
    {
        returnValue = F("Lederleplatz");
        break;
    }
    case 203610:
    {
        returnValue = F("Ledermaierweg");
        break;
    }
    case 203611:
    {
        returnValue = F("Ledermannstr.");
        break;
    }
    case 203612:
    {
        returnValue = F("Ledermannwiesen");
        break;
    }
    case 203613:
    {
        returnValue = F("Ledermarkt");
        break;
    }
    case 203614:
    {
        returnValue = F("Ledermühlenweg");
        break;
    }
    case 203615:
    {
        returnValue = F("Ledern Lamp");
        break;
    }
    case 203616:
    {
        returnValue = F("Lederne Ecke");
        break;
    }
    case 203617:
    {
        returnValue = F("Ledernes Käppchen");
        break;
    }
    case 203618:
    {
        returnValue = F("Lederpeter");
        break;
    }
    case 203619:
    {
        returnValue = F("Ledersberg");
        break;
    }
    case 203620:
    {
        returnValue = F("Lederschenstr.");
        break;
    }
    case 203621:
    {
        returnValue = F("Lederstatt");
        break;
    }
    case 203622:
    {
        returnValue = F("Lederstr.");
        break;
    }
    case 203623:
    {
        returnValue = F("Lederstubenstr.");
        break;
    }
    case 203624:
    {
        returnValue = F("Lederstätter Str.");
        break;
    }
    case 203625:
    {
        returnValue = F("Ledertasche");
        break;
    }
    case 203626:
    {
        returnValue = F("Lederweg");
        break;
    }
    case 203627:
    {
        returnValue = F("Lederäcker");
        break;
    }
    case 203628:
    {
        returnValue = F("Ledigenheim");
        break;
    }
    case 203629:
    {
        returnValue = F("Ledigenstr.");
        break;
    }
    case 203630:
    {
        returnValue = F("Ledigenweg");
        break;
    }
    case 203631:
    {
        returnValue = F("Ledlweg");
        break;
    }
    case 203632:
    {
        returnValue = F("Ledung");
        break;
    }
    case 203633:
    {
        returnValue = F("Lee");
        break;
    }
    case 203634:
    {
        returnValue = F("Lee Boulevard");
        break;
    }
    case 203635:
    {
        returnValue = F("Lee-Dieks-Weg");
        break;
    }
    case 203636:
    {
        returnValue = F("Leeberghöhenweg");
        break;
    }
    case 203637:
    {
        returnValue = F("Leebergstr.");
        break;
    }
    case 203638:
    {
        returnValue = F("Leebstr.");
        break;
    }
    case 203639:
    {
        returnValue = F("Leedamm");
        break;
    }
    case 203640:
    {
        returnValue = F("Leedener Str.");
        break;
    }
    case 203641:
    {
        returnValue = F("Leedenstr.");
        break;
    }
    case 203642:
    {
        returnValue = F("Leederer Str.");
        break;
    }
    case 203643:
    {
        returnValue = F("Leedsring");
        break;
    }
    case 203644:
    {
        returnValue = F("Leedsstr.");
        break;
    }
    case 203645:
    {
        returnValue = F("Leefersweg");
        break;
    }
    case 203646:
    {
        returnValue = F("Leegdeweg");
        break;
    }
    case 203647:
    {
        returnValue = F("Leege Acker");
        break;
    }
    case 203648:
    {
        returnValue = F("Leege Feld");
        break;
    }
    case 203649:
    {
        returnValue = F("Leege Gaste");
        break;
    }
    case 203650:
    {
        returnValue = F("Leege Heide");
        break;
    }
    case 203651:
    {
        returnValue = F("Leege Land");
        break;
    }
    case 203652:
    {
        returnValue = F("Leege Meedenweg");
        break;
    }
    case 203653:
    {
        returnValue = F("Leege Weg");
        break;
    }
    case 203654:
    {
        returnValue = F("Leege Weide");
        break;
    }
    case 203655:
    {
        returnValue = F("Leege-Feld-Str.");
        break;
    }
    case 203656:
    {
        returnValue = F("Leegebrucher Chaussee");
        break;
    }
    case 203657:
    {
        returnValue = F("Leegebrucher Weg");
        break;
    }
    case 203658:
    {
        returnValue = F("Leegefehn");
        break;
    }
    case 203659:
    {
        returnValue = F("Leegeland");
        break;
    }
    case 203660:
    {
        returnValue = F("Leegemoorweg");
        break;
    }
    case 203661:
    {
        returnValue = F("Leegenweg");
        break;
    }
    case 203662:
    {
        returnValue = F("Leeger Weg");
        break;
    }
    case 203663:
    {
        returnValue = F("Leeger-Weezer-Weg");
        break;
    }
    case 203664:
    {
        returnValue = F("Leegerwall");
        break;
    }
    case 203665:
    {
        returnValue = F("Leegerweg");
        break;
    }
    case 203666:
    {
        returnValue = F("Leegeseer Weg");
        break;
    }
    case 203667:
    {
        returnValue = F("Leegewarf");
        break;
    }
    case 203668:
    {
        returnValue = F("Leegeweg");
        break;
    }
    case 203669:
    {
        returnValue = F("Leegkamp");
        break;
    }
    case 203670:
    {
        returnValue = F("Leeglandsweg");
        break;
    }
    case 203671:
    {
        returnValue = F("Leeglumland");
        break;
    }
    case 203672:
    {
        returnValue = F("Leegmeerweg");
        break;
    }
    case 203673:
    {
        returnValue = F("Leegmoor");
        break;
    }
    case 203674:
    {
        returnValue = F("Leegmoordrift");
        break;
    }
    case 203675:
    {
        returnValue = F("Leegmoorstr.");
        break;
    }
    case 203676:
    {
        returnValue = F("Leegmoorsweg");
        break;
    }
    case 203677:
    {
        returnValue = F("Leegmoorweg");
        break;
    }
    case 203678:
    {
        returnValue = F("Leegsstr.");
        break;
    }
    case 203679:
    {
        returnValue = F("Leegstruddenweg");
        break;
    }
    case 203680:
    {
        returnValue = F("Leegstückenweg");
        break;
    }
    case 203681:
    {
        returnValue = F("Leegtal");
        break;
    }
    case 203682:
    {
        returnValue = F("Leegweg");
        break;
    }
    case 203683:
    {
        returnValue = F("Leehbuckweg");
        break;
    }
    case 203684:
    {
        returnValue = F("Leeheimer Str.");
        break;
    }
    case 203685:
    {
        returnValue = F("Leeheimer Weg");
        break;
    }
    case 203686:
    {
        returnValue = F("Leehopweg");
        break;
    }
    case 203687:
    {
        returnValue = F("Leehre");
        break;
    }
    case 203688:
    {
        returnValue = F("Leeimgrund");
        break;
    }
    case 203689:
    {
        returnValue = F("Leekenweg");
        break;
    }
    case 203690:
    {
        returnValue = F("Leemdijk");
        break;
    }
    case 203691:
    {
        returnValue = F("Leenken-Welp");
        break;
    }
    case 203692:
    {
        returnValue = F("Leepenser Weg");
        break;
    }
    case 203693:
    {
        returnValue = F("Leepfad");
        break;
    }
    case 203694:
    {
        returnValue = F("Leeraner Str.");
        break;
    }
    case 203695:
    {
        returnValue = F("Leeraue");
        break;
    }
    case 203696:
    {
        returnValue = F("Leerbachstr.");
        break;
    }
    case 203697:
    {
        returnValue = F("Leerbichlallee");
        break;
    }
    case 203698:
    {
        returnValue = F("Leeren Teich");
        break;
    }
    case 203699:
    {
        returnValue = F("Leerenbergweg");
        break;
    }
    case 203700:
    {
        returnValue = F("Leerenstr.");
        break;
    }
    case 203701:
    {
        returnValue = F("Leerenwegstich");
        break;
    }
    case 203702:
    {
        returnValue = F("Leerer Landstr.");
        break;
    }
    case 203703:
    {
        returnValue = F("Leerer Str.");
        break;
    }
    case 203704:
    {
        returnValue = F("Leergasse");
        break;
    }
    case 203705:
    {
        returnValue = F("Leerhafer Geest");
        break;
    }
    case 203706:
    {
        returnValue = F("Leerhafer Str.");
        break;
    }
    case 203707:
    {
        returnValue = F("Leerhaferfeld");
        break;
    }
    case 203708:
    {
        returnValue = F("Leerkenweg");
        break;
    }
    case 203709:
    {
        returnValue = F("Leermoosweg");
        break;
    }
    case 203710:
    {
        returnValue = F("Leerodt");
        break;
    }
    case 203711:
    {
        returnValue = F("Leerodweg");
        break;
    }
    case 203712:
    {
        returnValue = F("Leerser Str.");
        break;
    }
    case 203713:
    {
        returnValue = F("Leersstr.");
        break;
    }
    case 203714:
    {
        returnValue = F("Leerstetter Str.");
        break;
    }
    case 203715:
    {
        returnValue = F("Leerstr.");
        break;
    }
    case 203716:
    {
        returnValue = F("Leerteichsträßle");
        break;
    }
    case 203717:
    {
        returnValue = F("Leerweg");
        break;
    }
    case 203718:
    {
        returnValue = F("Leerßer Str.");
        break;
    }
    case 203719:
    {
        returnValue = F("Leesblecken");
        break;
    }
    case 203720:
    {
        returnValue = F("Leesblecker Damm");
        break;
    }
    case 203721:
    {
        returnValue = F("Leeschfeldstr.");
        break;
    }
    case 203722:
    {
        returnValue = F("Leeschweg");
        break;
    }
    case 203723:
    {
        returnValue = F("Leesenkampsweg");
        break;
    }
    case 203724:
    {
        returnValue = F("Leesenstr.");
        break;
    }
    case 203725:
    {
        returnValue = F("Leeser Esch");
        break;
    }
    case 203726:
    {
        returnValue = F("Leeser Str.");
        break;
    }
    case 203727:
    {
        returnValue = F("Leeser Weg");
        break;
    }
    case 203728:
    {
        returnValue = F("Leeseringer Weg");
        break;
    }
    case 203729:
    {
        returnValue = F("Leeseweg");
        break;
    }
    case 203730:
    {
        returnValue = F("Leeshauser Str.");
        break;
    }
    case 203731:
    {
        returnValue = F("Leeskamp");
        break;
    }
    case 203732:
    {
        returnValue = F("Leeskamper Escherweg");
        break;
    }
    case 203733:
    {
        returnValue = F("Leeskamper Meedenweg");
        break;
    }
    case 203734:
    {
        returnValue = F("Leeskampsweg");
        break;
    }
    case 203735:
    {
        returnValue = F("Leeskower Dorfstr.");
        break;
    }
    case 203736:
    {
        returnValue = F("Leeskower Str.");
        break;
    }
    case 203737:
    {
        returnValue = F("Leestener Str.");
        break;
    }
    case 203738:
    {
        returnValue = F("Leester Str.");
        break;
    }
    case 203739:
    {
        returnValue = F("Leestr.");
        break;
    }
    case 203740:
    {
        returnValue = F("Leesweg");
        break;
    }
    case 203741:
    {
        returnValue = F("Leeswig");
        break;
    }
    case 203742:
    {
        returnValue = F("Leetza");
        break;
    }
    case 203743:
    {
        returnValue = F("Leeuwarder Str.");
        break;
    }
    case 203744:
    {
        returnValue = F("Leeweg");
        break;
    }
    case 203745:
    {
        returnValue = F("Leezdorfer Str.");
        break;
    }
    case 203746:
    {
        returnValue = F("Leezener Str.");
        break;
    }
    case 203747:
    {
        returnValue = F("Leezer Weg");
        break;
    }
    case 203748:
    {
        returnValue = F("Leezweg");
        break;
    }
    case 203749:
    {
        returnValue = F("Leferskamp");
        break;
    }
    case 203750:
    {
        returnValue = F("Leffelsend");
        break;
    }
    case 203751:
    {
        returnValue = F("Leffersweg");
        break;
    }
    case 203752:
    {
        returnValue = F("Leffostr.");
        break;
    }
    case 203753:
    {
        returnValue = F("Lefkers Berg");
        break;
    }
    case 203754:
    {
        returnValue = F("Lefkeskamp");
        break;
    }
    case 203755:
    {
        returnValue = F("Lefkesweg");
        break;
    }
    case 203756:
    {
        returnValue = F("Lefmannstr.");
        break;
    }
    case 203757:
    {
        returnValue = F("Lefringhäuser Weg");
        break;
    }
    case 203758:
    {
        returnValue = F("Leftjestr.");
        break;
    }
    case 203759:
    {
        returnValue = F("Legan");
        break;
    }
    case 203760:
    {
        returnValue = F("Leganen-Gang");
        break;
    }
    case 203761:
    {
        returnValue = F("Leganer Weg");
        break;
    }
    case 203762:
    {
        returnValue = F("Legatenbuck");
        break;
    }
    case 203763:
    {
        returnValue = F("Legatenstieg");
        break;
    }
    case 203764:
    {
        returnValue = F("Legatenweg");
        break;
    }
    case 203765:
    {
        returnValue = F("Legatplatz");
        break;
    }
    case 203766:
    {
        returnValue = F("Legauer Str.");
        break;
    }
    case 203767:
    {
        returnValue = F("Legbank");
        break;
    }
    case 203768:
    {
        returnValue = F("Legbrunnenweg");
        break;
    }
    case 203769:
    {
        returnValue = F("Legde");
        break;
    }
    case 203770:
    {
        returnValue = F("Legdener Str.");
        break;
    }
    case 203771:
    {
        returnValue = F("Legdenwiese");
        break;
    }
    case 203772:
    {
        returnValue = F("Legder Chausse");
        break;
    }
    case 203773:
    {
        returnValue = F("Legder Chaussee");
        break;
    }
    case 203774:
    {
        returnValue = F("Legefelder Hauptstr.");
        break;
    }
    case 203775:
    {
        returnValue = F("Legelbachweg");
        break;
    }
    case 203776:
    {
        returnValue = F("Legelshurster Str.");
        break;
    }
    case 203777:
    {
        returnValue = F("Legelstr.");
        break;
    }
    case 203778:
    {
        returnValue = F("Legelweg");
        break;
    }
    case 203779:
    {
        returnValue = F("Legen Grund");
        break;
    }
    case 203780:
    {
        returnValue = F("Legenhalde");
        break;
    }
    case 203781:
    {
        returnValue = F("Legenhausen");
        break;
    }
    case 203782:
    {
        returnValue = F("Leger");
        break;
    }
    case 203783:
    {
        returnValue = F("Legerader Weg");
        break;
    }
    case 203784:
    {
        returnValue = F("Legeranden");
        break;
    }
    case 203785:
    {
        returnValue = F("Legerkamp");
        break;
    }
    case 203786:
    {
        returnValue = F("Legerweg");
        break;
    }
    case 203787:
    {
        returnValue = F("Legestr.");
        break;
    }
    case 203788:
    {
        returnValue = F("Legesweg");
        break;
    }
    case 203789:
    {
        returnValue = F("Legewarfen");
        break;
    }
    case 203790:
    {
        returnValue = F("Leggenweg");
        break;
    }
    case 203791:
    {
        returnValue = F("Leggestr.");
        break;
    }
    case 203792:
    {
        returnValue = F("Leggeweg");
        break;
    }
    case 203793:
    {
        returnValue = F("Leggewies");
        break;
    }
    case 203794:
    {
        returnValue = F("Leghissa Skulpturenpark");
        break;
    }
    case 203795:
    {
        returnValue = F("Legienstr.");
        break;
    }
    case 203796:
    {
        returnValue = F("Legionsbrücke");
        break;
    }
    case 203797:
    {
        returnValue = F("Legionstr.");
        break;
    }
    case 203798:
    {
        returnValue = F("Legionsweg");
        break;
    }
    case 203799:
    {
        returnValue = F("Legionärspfad");
        break;
    }
    case 203800:
    {
        returnValue = F("Legionärstr.");
        break;
    }
    case 203801:
    {
        returnValue = F("Legionärsweg");
        break;
    }
    case 203802:
    {
        returnValue = F("Leglerstr.");
        break;
    }
    case 203803:
    {
        returnValue = F("Leglsbuschweg");
        break;
    }
    case 203804:
    {
        returnValue = F("Legoland Deutschland");
        break;
    }
    case 203805:
    {
        returnValue = F("Legoland-Allee");
        break;
    }
    case 203806:
    {
        returnValue = F("Legtkamp");
        break;
    }
    case 203807:
    {
        returnValue = F("Leguanstr.");
        break;
    }
    case 203808:
    {
        returnValue = F("Legweg");
        break;
    }
    case 203809:
    {
        returnValue = F("Leharstr.");
        break;
    }
    case 203810:
    {
        returnValue = F("Leharweg");
        break;
    }
    case 203811:
    {
        returnValue = F("Lehaweg");
        break;
    }
    case 203812:
    {
        returnValue = F("Lehbach");
        break;
    }
    case 203813:
    {
        returnValue = F("Lehbek");
        break;
    }
    case 203814:
    {
        returnValue = F("Lehbeker Weg");
        break;
    }
    case 203815:
    {
        returnValue = F("Lehbekwiese");
        break;
    }
    case 203816:
    {
        returnValue = F("Lehberg");
        break;
    }
    case 203817:
    {
        returnValue = F("Lehberggarten");
        break;
    }
    case 203818:
    {
        returnValue = F("Lehbergring");
        break;
    }
    case 203819:
    {
        returnValue = F("Lehbergstr.");
        break;
    }
    case 203820:
    {
        returnValue = F("Lehbeschring");
        break;
    }
    case 203821:
    {
        returnValue = F("Lehbreite");
        break;
    }
    case 203822:
    {
        returnValue = F("Lehbrinksweg");
        break;
    }
    case 203823:
    {
        returnValue = F("Lehbrunnenweg");
        break;
    }
    case 203824:
    {
        returnValue = F("Lehbüchelweg");
        break;
    }
    case 203825:
    {
        returnValue = F("Lehbühlstr.");
        break;
    }
    case 203826:
    {
        returnValue = F("Lehde");
        break;
    }
    case 203827:
    {
        returnValue = F("Lehdegasse");
        break;
    }
    case 203828:
    {
        returnValue = F("Lehdehäuser");
        break;
    }
    case 203829:
    {
        returnValue = F("Lehden");
        break;
    }
    case 203830:
    {
        returnValue = F("Lehdenberg");
        break;
    }
    case 203831:
    {
        returnValue = F("Lehdenstr.");
        break;
    }
    case 203832:
    {
        returnValue = F("Lehdenweg");
        break;
    }
    case 203833:
    {
        returnValue = F("Lehdestr.");
        break;
    }
    case 203834:
    {
        returnValue = F("Lehe");
        break;
    }
    case 203835:
    {
        returnValue = F("Lehe Weg");
        break;
    }
    case 203836:
    {
        returnValue = F("Lehefeldstr.");
        break;
    }
    case 203837:
    {
        returnValue = F("Lehelweg");
        break;
    }
    case 203838:
    {
        returnValue = F("Lehemeirstr.");
        break;
    }
    case 203839:
    {
        returnValue = F("Lehen");
        break;
    }
    case 203840:
    {
        returnValue = F("Lehen Hof");
        break;
    }
    case 203841:
    {
        returnValue = F("Lehenanger");
        break;
    }
    case 203842:
    {
        returnValue = F("Lehenbachtalweg");
        break;
    }
    case 203843:
    {
        returnValue = F("Lehenbergstr.");
        break;
    }
    case 203844:
    {
        returnValue = F("Lehenbergweg");
        break;
    }
    case 203845:
    {
        returnValue = F("Lehenbrunnenstr.");
        break;
    }
    case 203846:
    {
        returnValue = F("Lehenbrücke");
        break;
    }
    case 203847:
    {
        returnValue = F("Lehenbrünnleweg");
        break;
    }
    case 203848:
    {
        returnValue = F("Lehenbuckl");
        break;
    }
    case 203849:
    {
        returnValue = F("Lehenbusch");
        break;
    }
    case 203850:
    {
        returnValue = F("Lehenbühl");
        break;
    }
    case 203851:
    {
        returnValue = F("Lehenbühlstr.");
        break;
    }
    case 203852:
    {
        returnValue = F("Lehenbühlweg");
        break;
    }
    case 203853:
    {
        returnValue = F("Lehendorf");
        break;
    }
    case 203854:
    {
        returnValue = F("Lehener Brücke");
        break;
    }
    case 203855:
    {
        returnValue = F("Lehener Esch");
        break;
    }
    case 203856:
    {
        returnValue = F("Lehener Str.");
        break;
    }
    case 203857:
    {
        returnValue = F("Lehener Winkelweg");
        break;
    }
    case 203858:
    {
        returnValue = F("Lehenerstr.");
        break;
    }
    case 203859:
    {
        returnValue = F("Lehenfeldstr.");
        break;
    }
    case 203860:
    {
        returnValue = F("Lehenfeldweg");
        break;
    }
    case 203861:
    {
        returnValue = F("Lehengarten");
        break;
    }
    case 203862:
    {
        returnValue = F("Lehengartenweg");
        break;
    }
    case 203863:
    {
        returnValue = F("Lehengasse");
        break;
    }
    case 203864:
    {
        returnValue = F("Lehengraben");
        break;
    }
    case 203865:
    {
        returnValue = F("Lehengrund");
        break;
    }
    case 203866:
    {
        returnValue = F("Lehengrundweg");
        break;
    }
    case 203867:
    {
        returnValue = F("Lehengärten");
        break;
    }
    case 203868:
    {
        returnValue = F("Lehengäßle");
        break;
    }
    case 203869:
    {
        returnValue = F("Lehenhammer");
        break;
    }
    case 203870:
    {
        returnValue = F("Lehenhardsweg");
        break;
    }
    case 203871:
    {
        returnValue = F("Lehenhof");
        break;
    }
    case 203872:
    {
        returnValue = F("Lehenhofweg");
        break;
    }
    case 203873:
    {
        returnValue = F("Lehenholzweg");
        break;
    }
    case 203874:
    {
        returnValue = F("Lehenhöfe");
        break;
    }
    case 203875:
    {
        returnValue = F("Lehenknock");
        break;
    }
    case 203876:
    {
        returnValue = F("Lehenkreutweg");
        break;
    }
    case 203877:
    {
        returnValue = F("Lehenkreuzweg");
        break;
    }
    case 203878:
    {
        returnValue = F("Lehenmahdweg");
        break;
    }
    case 203879:
    {
        returnValue = F("Lehenmühle");
        break;
    }
    case 203880:
    {
        returnValue = F("Lehenpointstr.");
        break;
    }
    case 203881:
    {
        returnValue = F("Lehenreuther Weg");
        break;
    }
    case 203882:
    {
        returnValue = F("Lehensteige");
        break;
    }
    case 203883:
    {
        returnValue = F("Lehenstieg");
        break;
    }
    case 203884:
    {
        returnValue = F("Lehenstr.");
        break;
    }
    case 203885:
    {
        returnValue = F("Lehental");
        break;
    }
    case 203886:
    {
        returnValue = F("Lehentalstr.");
        break;
    }
    case 203887:
    {
        returnValue = F("Lehenteil");
        break;
    }
    case 203888:
    {
        returnValue = F("Lehenthal");
        break;
    }
    case 203889:
    {
        returnValue = F("Lehenthaler Nußleite");
        break;
    }
    case 203890:
    {
        returnValue = F("Lehenthaler Weg");
        break;
    }
    case 203891:
    {
        returnValue = F("Lehenwaldweg");
        break;
    }
    case 203892:
    {
        returnValue = F("Lehenweg");
        break;
    }
    case 203893:
    {
        returnValue = F("Lehenweiler Hauptstr.");
        break;
    }
    case 203894:
    {
        returnValue = F("Lehenwies");
        break;
    }
    case 203895:
    {
        returnValue = F("Lehenäcker");
        break;
    }
    case 203896:
    {
        returnValue = F("Leher Damm");
        break;
    }
    case 203897:
    {
        returnValue = F("Leher Fleet");
        break;
    }
    case 203898:
    {
        returnValue = F("Leher Heerstr.");
        break;
    }
    case 203899:
    {
        returnValue = F("Leher Landstr.");
        break;
    }
    case 203900:
    {
        returnValue = F("Leher Moorweg");
        break;
    }
    case 203901:
    {
        returnValue = F("Leher Str.");
        break;
    }
    case 203902:
    {
        returnValue = F("Leher Weg");
        break;
    }
    case 203903:
    {
        returnValue = F("Leherfeld");
        break;
    }
    case 203904:
    {
        returnValue = F("Lehermoorweg");
        break;
    }
    case 203905:
    {
        returnValue = F("Lehern");
        break;
    }
    case 203906:
    {
        returnValue = F("Lehestener Str.");
        break;
    }
    case 203907:
    {
        returnValue = F("Lehfeldplatz");
        break;
    }
    case 203908:
    {
        returnValue = F("Lehfeldstr.");
        break;
    }
    case 203909:
    {
        returnValue = F("Lehfenfelde");
        break;
    }
    case 203910:
    {
        returnValue = F("Lehgartenstr.");
        break;
    }
    case 203911:
    {
        returnValue = F("Lehgasse");
        break;
    }
    case 203912:
    {
        returnValue = F("Lehhalde");
        break;
    }
    case 203913:
    {
        returnValue = F("Lehhaldenweg");
        break;
    }
    case 203914:
    {
        returnValue = F("Lehhaldeweg");
        break;
    }
    case 203915:
    {
        returnValue = F("Lehheckeweg");
        break;
    }
    case 203916:
    {
        returnValue = F("Lehjenweg");
        break;
    }
    case 203917:
    {
        returnValue = F("Lehkammerstr.");
        break;
    }
    case 203918:
    {
        returnValue = F("Lehkinzig");
        break;
    }
    case 203919:
    {
        returnValue = F("Lehkäppelesweg");
        break;
    }
    case 203920:
    {
        returnValue = F("Lehle");
        break;
    }
    case 203921:
    {
        returnValue = F("Lehlebodenweg");
        break;
    }
    case 203922:
    {
        returnValue = F("Lehlepark");
        break;
    }
    case 203923:
    {
        returnValue = F("Lehlesstr.");
        break;
    }
    case 203924:
    {
        returnValue = F("Lehlestr.");
        break;
    }
    case 203925:
    {
        returnValue = F("Lehlesweg");
        break;
    }
    case 203926:
    {
        returnValue = F("Lehleweg");
        break;
    }
    case 203927:
    {
        returnValue = F("Lehlgasse");
        break;
    }
    case 203928:
    {
        returnValue = F("Lehmacker");
        break;
    }
    case 203929:
    {
        returnValue = F("Lehmackerstr.");
        break;
    }
    case 203930:
    {
        returnValue = F("Lehmackerweg");
        break;
    }
    case 203931:
    {
        returnValue = F("Lehmanger");
        break;
    }
    case 203932:
    {
        returnValue = F("Lehmann's Berg");
        break;
    }
    case 203933:
    {
        returnValue = F("Lehmannsbrück");
        break;
    }
    case 203934:
    {
        returnValue = F("Lehmannshof");
        break;
    }
    case 203935:
    {
        returnValue = F("Lehmannshofer Weg");
        break;
    }
    case 203936:
    {
        returnValue = F("Lehmannshöfel");
        break;
    }
    case 203937:
    {
        returnValue = F("Lehmannstr.");
        break;
    }
    case 203938:
    {
        returnValue = F("Lehmannsweg");
        break;
    }
    case 203939:
    {
        returnValue = F("Lehmannweg");
        break;
    }
    case 203940:
    {
        returnValue = F("Lehmattenring");
        break;
    }
    case 203941:
    {
        returnValue = F("Lehmattstr.");
        break;
    }
    case 203942:
    {
        returnValue = F("Lehmattweg");
        break;
    }
    case 203943:
    {
        returnValue = F("Lehmbach");
        break;
    }
    case 203944:
    {
        returnValue = F("Lehmbacher Weg");
        break;
    }
    case 203945:
    {
        returnValue = F("Lehmbachstr.");
        break;
    }
    case 203946:
    {
        returnValue = F("Lehmbachweg");
        break;
    }
    case 203947:
    {
        returnValue = F("Lehmbahn");
        break;
    }
    case 203948:
    {
        returnValue = F("Lehmbank");
        break;
    }
    case 203949:
    {
        returnValue = F("Lehmbarg");
        break;
    }
    case 203950:
    {
        returnValue = F("Lehmbargskamp");
        break;
    }
    case 203951:
    {
        returnValue = F("Lehmbecker Pfad");
        break;
    }
    case 203952:
    {
        returnValue = F("Lehmbeksweg");
        break;
    }
    case 203953:
    {
        returnValue = F("Lehmberg");
        break;
    }
    case 203954:
    {
        returnValue = F("Lehmberg-Ost");
        break;
    }
    case 203955:
    {
        returnValue = F("Lehmberg-West");
        break;
    }
    case 203956:
    {
        returnValue = F("Lehmberge");
        break;
    }
    case 203957:
    {
        returnValue = F("Lehmberger Str.");
        break;
    }
    case 203958:
    {
        returnValue = F("Lehmberger Weg");
        break;
    }
    case 203959:
    {
        returnValue = F("Lehmbergring");
        break;
    }
    case 203960:
    {
        returnValue = F("Lehmbergstr.");
        break;
    }
    case 203961:
    {
        returnValue = F("Lehmbergsweg");
        break;
    }
    case 203962:
    {
        returnValue = F("Lehmbergtal");
        break;
    }
    case 203963:
    {
        returnValue = F("Lehmbergweg");
        break;
    }
    case 203964:
    {
        returnValue = F("Lehmbodenweg");
        break;
    }
    case 203965:
    {
        returnValue = F("Lehmbrakener Str.");
        break;
    }
    case 203966:
    {
        returnValue = F("Lehmbredde");
        break;
    }
    case 203967:
    {
        returnValue = F("Lehmbreite");
        break;
    }
    case 203968:
    {
        returnValue = F("Lehmbrink");
        break;
    }
    case 203969:
    {
        returnValue = F("Lehmbrinksweg");
        break;
    }
    case 203970:
    {
        returnValue = F("Lehmbrock");
        break;
    }
    case 203971:
    {
        returnValue = F("Lehmbroock");
        break;
    }
    case 203972:
    {
        returnValue = F("Lehmbruckstr.");
        break;
    }
    case 203973:
    {
        returnValue = F("Lehmbruckweg");
        break;
    }
    case 203974:
    {
        returnValue = F("Lehmbuchenweg");
        break;
    }
    case 203975:
    {
        returnValue = F("Lehmbur");
        break;
    }
    case 203976:
    {
        returnValue = F("Lehmbusch");
        break;
    }
    case 203977:
    {
        returnValue = F("Lehmbünte");
        break;
    }
    case 203978:
    {
        returnValue = F("Lehmdamm");
        break;
    }
    case 203979:
    {
        returnValue = F("Lehmdener Str.");
        break;
    }
    case 203980:
    {
        returnValue = F("Lehmder Esch");
        break;
    }
    case 203981:
    {
        returnValue = F("Lehmder Str.");
        break;
    }
    case 203982:
    {
        returnValue = F("Lehmder Weg");
        break;
    }
    case 203983:
    {
        returnValue = F("Lehmdermoorweg");
        break;
    }
    case 203984:
    {
        returnValue = F("Lehmdobben");
        break;
    }
    case 203985:
    {
        returnValue = F("Lehmdobbenweg");
        break;
    }
    case 203986:
    {
        returnValue = F("Lehmdreisch");
        break;
    }
    case 203987:
    {
        returnValue = F("Lehmecke");
        break;
    }
    case 203988:
    {
        returnValue = F("Lehmelsweiher");
        break;
    }
    case 203989:
    {
        returnValue = F("Lehmelweg");
        break;
    }
    case 203990:
    {
        returnValue = F("Lehmen");
        break;
    }
    case 203991:
    {
        returnValue = F("Lehmener Weg");
        break;
    }
    case 203992:
    {
        returnValue = F("Lehmenkaut");
        break;
    }
    case 203993:
    {
        returnValue = F("Lehmenohl");
        break;
    }
    case 203994:
    {
        returnValue = F("Lehmensiekweg");
        break;
    }
    case 203995:
    {
        returnValue = F("Lehmenstr.");
        break;
    }
    case 203996:
    {
        returnValue = F("Lehmerbergweg");
        break;
    }
    case 203997:
    {
        returnValue = F("Lehmergrund");
        break;
    }
    case 203998:
    {
        returnValue = F("Lehmerhöfe");
        break;
    }
    case 203999:
    {
        returnValue = F("Lehmfeld");
        break;
    }
    case 204000:
    {
        returnValue = F("Lehmfeldweg");
        break;
    }
    case 204001:
    {
        returnValue = F("Lehmflur");
        break;
    }
    case 204002:
    {
        returnValue = F("Lehmgasse");
        break;
    }
    case 204003:
    {
        returnValue = F("Lehmgassenweg");
        break;
    }
    case 204004:
    {
        returnValue = F("Lehmgaster Str.");
        break;
    }
    case 204005:
    {
        returnValue = F("Lehmgraben");
        break;
    }
    case 204006:
    {
        returnValue = F("Lehmgrabenstr.");
        break;
    }
    case 204007:
    {
        returnValue = F("Lehmgrube");
        break;
    }
    case 204008:
    {
        returnValue = F("Lehmgruben");
        break;
    }
    case 204009:
    {
        returnValue = F("Lehmgrubenerstr.");
        break;
    }
    case 204010:
    {
        returnValue = F("Lehmgrubengasse");
        break;
    }
    case 204011:
    {
        returnValue = F("Lehmgrubenschleifweg");
        break;
    }
    case 204012:
    {
        returnValue = F("Lehmgrubenstr.");
        break;
    }
    case 204013:
    {
        returnValue = F("Lehmgrubenweg");
        break;
    }
    case 204014:
    {
        returnValue = F("Lehmgrund");
        break;
    }
    case 204015:
    {
        returnValue = F("Lehmgrundweg");
        break;
    }
    case 204016:
    {
        returnValue = F("Lehmgäßchen");
        break;
    }
    case 204017:
    {
        returnValue = F("Lehmhaldenstr.");
        break;
    }
    case 204018:
    {
        returnValue = F("Lehmhauskamp");
        break;
    }
    case 204019:
    {
        returnValue = F("Lehmhausstr.");
        break;
    }
    case 204020:
    {
        returnValue = F("Lehmhausweg");
        break;
    }
    case 204021:
    {
        returnValue = F("Lehmheide");
        break;
    }
    case 204022:
    {
        returnValue = F("Lehmhof");
        break;
    }
    case 204023:
    {
        returnValue = F("Lehmhoff");
        break;
    }
    case 204024:
    {
        returnValue = F("Lehmhofgasse");
        break;
    }
    case 204025:
    {
        returnValue = F("Lehmhohl");
        break;
    }
    case 204026:
    {
        returnValue = F("Lehmhohle");
        break;
    }
    case 204027:
    {
        returnValue = F("Lehmhohlstr.");
        break;
    }
    case 204028:
    {
        returnValue = F("Lehmhollen");
        break;
    }
    case 204029:
    {
        returnValue = F("Lehmhoop");
        break;
    }
    case 204030:
    {
        returnValue = F("Lehmhorstweg");
        break;
    }
    case 204031:
    {
        returnValue = F("Lehmhufenweg");
        break;
    }
    case 204032:
    {
        returnValue = F("Lehmhäuserstr.");
        break;
    }
    case 204033:
    {
        returnValue = F("Lehmhöhlenweg");
        break;
    }
    case 204034:
    {
        returnValue = F("Lehmhölle");
        break;
    }
    case 204035:
    {
        returnValue = F("Lehmhörn");
        break;
    }
    case 204036:
    {
        returnValue = F("Lehmhübel");
        break;
    }
    case 204037:
    {
        returnValue = F("Lehmhübelweg");
        break;
    }
    case 204038:
    {
        returnValue = F("Lehmjähremsweg");
        break;
    }
    case 204039:
    {
        returnValue = F("Lehmkamp");
        break;
    }
    case 204040:
    {
        returnValue = F("Lehmkamper Weg");
        break;
    }
    case 204041:
    {
        returnValue = F("Lehmkatenweg");
        break;
    }
    case 204042:
    {
        returnValue = F("Lehmkaul");
        break;
    }
    case 204043:
    {
        returnValue = F("Lehmkaule");
        break;
    }
    case 204044:
    {
        returnValue = F("Lehmkaulenweg");
        break;
    }
    case 204045:
    {
        returnValue = F("Lehmkaulstr.");
        break;
    }
    case 204046:
    {
        returnValue = F("Lehmkaulweg");
        break;
    }
    case 204047:
    {
        returnValue = F("Lehmkaut");
        break;
    }
    case 204048:
    {
        returnValue = F("Lehmkaute");
        break;
    }
    case 204049:
    {
        returnValue = F("Lehmkautenweg");
        break;
    }
    case 204050:
    {
        returnValue = F("Lehmkauter Weg");
        break;
    }
    case 204051:
    {
        returnValue = F("Lehmkautschneise");
        break;
    }
    case 204052:
    {
        returnValue = F("Lehmkautstr.");
        break;
    }
    case 204053:
    {
        returnValue = F("Lehmkautweg");
        break;
    }
    case 204054:
    {
        returnValue = F("Lehmke");
        break;
    }
    case 204055:
    {
        returnValue = F("Lehmkeitenweg");
        break;
    }
    case 204056:
    {
        returnValue = F("Lehmkellerweg");
        break;
    }
    case 204057:
    {
        returnValue = F("Lehmker Str.");
        break;
    }
    case 204058:
    {
        returnValue = F("Lehmker Weg");
        break;
    }
    case 204059:
    {
        returnValue = F("Lehmkietenweg");
        break;
    }
    case 204060:
    {
        returnValue = F("Lehmkoppel");
        break;
    }
    case 204061:
    {
        returnValue = F("Lehmkreppenweg");
        break;
    }
    case 204062:
    {
        returnValue = F("Lehmkuhl");
        break;
    }
    case 204063:
    {
        returnValue = F("Lehmkuhl-Hof");
        break;
    }
    case 204064:
    {
        returnValue = F("Lehmkuhle");
        break;
    }
    case 204065:
    {
        returnValue = F("Lehmkuhlen");
        break;
    }
    case 204066:
    {
        returnValue = F("Lehmkuhlen-Ring");
        break;
    }
    case 204067:
    {
        returnValue = F("Lehmkuhlenbusch");
        break;
    }
    case 204068:
    {
        returnValue = F("Lehmkuhlenfeld");
        break;
    }
    case 204069:
    {
        returnValue = F("Lehmkuhlenkamp");
        break;
    }
    case 204070:
    {
        returnValue = F("Lehmkuhlenstr.");
        break;
    }
    case 204071:
    {
        returnValue = F("Lehmkuhlenweg");
        break;
    }
    case 204072:
    {
        returnValue = F("Lehmkuhler Platz");
        break;
    }
    case 204073:
    {
        returnValue = F("Lehmkuhler Str.");
        break;
    }
    case 204074:
    {
        returnValue = F("Lehmkuhler Weg");
        break;
    }
    case 204075:
    {
        returnValue = F("Lehmkuhlplatz");
        break;
    }
    case 204076:
    {
        returnValue = F("Lehmkuhlskamp");
        break;
    }
    case 204077:
    {
        returnValue = F("Lehmkuhlstr.");
        break;
    }
    case 204078:
    {
        returnValue = F("Lehmkuhlsweg");
        break;
    }
    case 204079:
    {
        returnValue = F("Lehmkuhlweg");
        break;
    }
    case 204080:
    {
        returnValue = F("Lehmkul");
        break;
    }
    case 204081:
    {
        returnValue = F("Lehmkule");
        break;
    }
    case 204082:
    {
        returnValue = F("Lehmkutte");
        break;
    }
    case 204083:
    {
        returnValue = F("Lehmkösterstr.");
        break;
    }
    case 204084:
    {
        returnValue = F("Lehmkütt");
        break;
    }
    case 204085:
    {
        returnValue = F("Lehmland");
        break;
    }
    case 204086:
    {
        returnValue = F("Lehmleiten");
        break;
    }
    case 204087:
    {
        returnValue = F("Lehmloch");
        break;
    }
    case 204088:
    {
        returnValue = F("Lehmlocherweg");
        break;
    }
    case 204089:
    {
        returnValue = F("Lehmlochweg");
        break;
    }
    case 204090:
    {
        returnValue = F("Lehmlöcherweg");
        break;
    }
    case 204091:
    {
        returnValue = F("Lehmnweg");
        break;
    }
    case 204092:
    {
        returnValue = F("Lehmoppstr.");
        break;
    }
    case 204093:
    {
        returnValue = F("Lehmpatsweg");
        break;
    }
    case 204094:
    {
        returnValue = F("Lehmpeschken");
        break;
    }
    case 204095:
    {
        returnValue = F("Lehmplacken");
        break;
    }
    case 204096:
    {
        returnValue = F("Lehmplattenweg");
        break;
    }
    case 204097:
    {
        returnValue = F("Lehmpöhle");
        break;
    }
    case 204098:
    {
        returnValue = F("Lehmpöthen");
        break;
    }
    case 204099:
    {
        returnValue = F("Lehmrade");
        break;
    }
    case 204100:
    {
        returnValue = F("Lehmrader Str.");
        break;
    }
    case 204101:
    {
        returnValue = F("Lehmrader Weg");
        break;
    }
    case 204102:
    {
        returnValue = F("Lehmrasen");
        break;
    }
    case 204103:
    {
        returnValue = F("Lehmried");
        break;
    }
    case 204104:
    {
        returnValue = F("Lehmring");
        break;
    }
    case 204105:
    {
        returnValue = F("Lehmrott");
        break;
    }
    case 204106:
    {
        returnValue = F("Lehms");
        break;
    }
    case 204107:
    {
        returnValue = F("Lehmsalweg");
        break;
    }
    case 204108:
    {
        returnValue = F("Lehmschlenke");
        break;
    }
    case 204109:
    {
        returnValue = F("Lehmschneise");
        break;
    }
    case 204110:
    {
        returnValue = F("Lehmshörn");
        break;
    }
    case 204111:
    {
        returnValue = F("Lehmsiek");
        break;
    }
    case 204112:
    {
        returnValue = F("Lehmsiekweg");
        break;
    }
    case 204113:
    {
        returnValue = F("Lehmskuhle");
        break;
    }
    case 204114:
    {
        returnValue = F("Lehmskütte");
        break;
    }
    case 204115:
    {
        returnValue = F("Lehmsol");
        break;
    }
    case 204116:
    {
        returnValue = F("Lehmstegge");
        break;
    }
    case 204117:
    {
        returnValue = F("Lehmsteig");
        break;
    }
    case 204118:
    {
        returnValue = F("Lehmsteige");
        break;
    }
    case 204119:
    {
        returnValue = F("Lehmstek");
        break;
    }
    case 204120:
    {
        returnValue = F("Lehmstich");
        break;
    }
    case 204121:
    {
        returnValue = F("Lehmstichweg");
        break;
    }
    case 204122:
    {
        returnValue = F("Lehmstieg");
        break;
    }
    case 204123:
    {
        returnValue = F("Lehmstiege");
        break;
    }
    case 204124:
    {
        returnValue = F("Lehmstr.");
        break;
    }
    case 204125:
    {
        returnValue = F("Lehmstrangweg");
        break;
    }
    case 204126:
    {
        returnValue = F("Lehmstücke");
        break;
    }
    case 204127:
    {
        returnValue = F("Lehmtorstr.");
        break;
    }
    case 204128:
    {
        returnValue = F("Lehmtölkenweg");
        break;
    }
    case 204129:
    {
        returnValue = F("Lehmufer");
        break;
    }
    case 204130:
    {
        returnValue = F("Lehmusstr.");
        break;
    }
    case 204131:
    {
        returnValue = F("Lehmwall");
        break;
    }
    case 204132:
    {
        returnValue = F("Lehmweg");
        break;
    }
    case 204133:
    {
        returnValue = F("Lehmwiese");
        break;
    }
    case 204134:
    {
        returnValue = F("Lehmwohldstr.");
        break;
    }
    case 204135:
    {
        returnValue = F("Lehmäckerweg");
        break;
    }
    case 204136:
    {
        returnValue = F("Lehmühlenweg");
        break;
    }
    case 204137:
    {
        returnValue = F("Lehn");
        break;
    }
    case 204138:
    {
        returnValue = F("Lehnackergrabenweg");
        break;
    }
    case 204139:
    {
        returnValue = F("Lehnackerstr.");
        break;
    }
    case 204140:
    {
        returnValue = F("Lehnaer Weg");
        break;
    }
    case 204141:
    {
        returnValue = F("Lehnamühle");
        break;
    }
    case 204142:
    {
        returnValue = F("Lehnbachsäcker");
        break;
    }
    case 204143:
    {
        returnValue = F("Lehnbergring");
        break;
    }
    case 204144:
    {
        returnValue = F("Lehnbergweg");
        break;
    }
    case 204145:
    {
        returnValue = F("Lehndorfer Str.");
        break;
    }
    case 204146:
    {
        returnValue = F("Lehne");
        break;
    }
    case 204147:
    {
        returnValue = F("Lehnemannsweg");
        break;
    }
    case 204148:
    {
        returnValue = F("Lehnenbachtal");
        break;
    }
    case 204149:
    {
        returnValue = F("Lehnenberger Sträßle");
        break;
    }
    case 204150:
    {
        returnValue = F("Lehnenbrunnen");
        break;
    }
    case 204151:
    {
        returnValue = F("Lehnengasse");
        break;
    }
    case 204152:
    {
        returnValue = F("Lehnenhof");
        break;
    }
    case 204153:
    {
        returnValue = F("Lehnenstr.");
        break;
    }
    case 204154:
    {
        returnValue = F("Lehnenweg");
        break;
    }
    case 204155:
    {
        returnValue = F("Lehner Mühle");
        break;
    }
    case 204156:
    {
        returnValue = F("Lehner Str.");
        break;
    }
    case 204157:
    {
        returnValue = F("Lehner Weg");
        break;
    }
    case 204158:
    {
        returnValue = F("Lehnerath");
        break;
    }
    case 204159:
    {
        returnValue = F("Lehnerberg");
        break;
    }
    case 204160:
    {
        returnValue = F("Lehnergasse");
        break;
    }
    case 204161:
    {
        returnValue = F("Lehnersberg");
        break;
    }
    case 204162:
    {
        returnValue = F("Lehnersgasse");
        break;
    }
    case 204163:
    {
        returnValue = F("Lehnerstr.");
        break;
    }
    case 204164:
    {
        returnValue = F("Lehnertstr.");
        break;
    }
    case 204165:
    {
        returnValue = F("Lehnertsweg");
        break;
    }
    case 204166:
    {
        returnValue = F("Lehnertweg");
        break;
    }
    case 204167:
    {
        returnValue = F("Lehnerweg");
        break;
    }
    case 204168:
    {
        returnValue = F("Lehnerzer Str.");
        break;
    }
    case 204169:
    {
        returnValue = F("Lehnfeldstr.");
        break;
    }
    case 204170:
    {
        returnValue = F("Lehnfeldweg");
        break;
    }
    case 204171:
    {
        returnValue = F("Lehnfurter Weg");
        break;
    }
    case 204172:
    {
        returnValue = F("Lehngasse");
        break;
    }
    case 204173:
    {
        returnValue = F("Lehngerichtsweg");
        break;
    }
    case 204174:
    {
        returnValue = F("Lehngut");
        break;
    }
    case 204175:
    {
        returnValue = F("Lehngutstr.");
        break;
    }
    case 204176:
    {
        returnValue = F("Lehnhartzstr.");
        break;
    }
    case 204177:
    {
        returnValue = F("Lehnhast");
        break;
    }
    case 204178:
    {
        returnValue = F("Lehnheimer Str.");
        break;
    }
    case 204179:
    {
        returnValue = F("Lehnheimer Weg");
        break;
    }
    case 204180:
    {
        returnValue = F("Lehnhof");
        break;
    }
    case 204181:
    {
        returnValue = F("Lehnhofstr.");
        break;
    }
    case 204182:
    {
        returnValue = F("Lehnholz");
        break;
    }
    case 204183:
    {
        returnValue = F("Lehnhorst");
        break;
    }
    case 204184:
    {
        returnValue = F("Lehnhäuser Weg");
        break;
    }
    case 204185:
    {
        returnValue = F("Lehniner Allee");
        break;
    }
    case 204186:
    {
        returnValue = F("Lehniner Chaussee");
        break;
    }
    case 204187:
    {
        returnValue = F("Lehniner Siedlung");
        break;
    }
    case 204188:
    {
        returnValue = F("Lehniner Str.");
        break;
    }
    case 204189:
    {
        returnValue = F("Lehniner Weg");
        break;
    }
    case 204190:
    {
        returnValue = F("Lehninger Str.");
        break;
    }
    case 204191:
    {
        returnValue = F("Lehninger Weg");
        break;
    }
    case 204192:
    {
        returnValue = F("Lehningerstr.");
        break;
    }
    case 204193:
    {
        returnValue = F("Lehnitzer Str.");
        break;
    }
    case 204194:
    {
        returnValue = F("Lehnitzscher Str.");
        break;
    }
    case 204195:
    {
        returnValue = F("Lehnitzschleuse");
        break;
    }
    case 204196:
    {
        returnValue = F("Lehnitzseestr.");
        break;
    }
    case 204197:
    {
        returnValue = F("Lehnitzstr.");
        break;
    }
    case 204198:
    {
        returnValue = F("Lehnkeringstr.");
        break;
    }
    case 204199:
    {
        returnValue = F("Lehnleite");
        break;
    }
    case 204200:
    {
        returnValue = F("Lehnleitenweg");
        break;
    }
    case 204201:
    {
        returnValue = F("Lehnlestr.");
        break;
    }
    case 204202:
    {
        returnValue = F("Lehnmühle");
        break;
    }
    case 204203:
    {
        returnValue = F("Lehnmühler Str.");
        break;
    }
    case 204204:
    {
        returnValue = F("Lehnpütz");
        break;
    }
    case 204205:
    {
        returnValue = F("Lehnsanftweg");
        break;
    }
    case 204206:
    {
        returnValue = F("Lehnschulzenstr.");
        break;
    }
    case 204207:
    {
        returnValue = F("Lehnschulzenweg");
        break;
    }
    case 204208:
    {
        returnValue = F("Lehnsdorf");
        break;
    }
    case 204209:
    {
        returnValue = F("Lehnsdorfer Weg");
        break;
    }
    case 204210:
    {
        returnValue = F("Lehnsherrenstr.");
        break;
    }
    case 204211:
    {
        returnValue = F("Lehnsherrenweg");
        break;
    }
    case 204212:
    {
        returnValue = F("Lehnshof");
        break;
    }
    case 204213:
    {
        returnValue = F("Lehnsmann-Siercks-Str.");
        break;
    }
    case 204214:
    {
        returnValue = F("Lehnsmannweg");
        break;
    }
    case 204215:
    {
        returnValue = F("Lehnsmorgen");
        break;
    }
    case 204216:
    {
        returnValue = F("Lehnsmühlstr.");
        break;
    }
    case 204217:
    {
        returnValue = F("Lehnstaffel");
        break;
    }
    case 204218:
    {
        returnValue = F("Lehnstedter Damm");
        break;
    }
    case 204219:
    {
        returnValue = F("Lehnstedter Str.");
        break;
    }
    case 204220:
    {
        returnValue = F("Lehnstr.");
        break;
    }
    case 204221:
    {
        returnValue = F("Lehnsweg");
        break;
    }
    case 204222:
    {
        returnValue = F("Lehnweg");
        break;
    }
    case 204223:
    {
        returnValue = F("Lehnwiesen");
        break;
    }
    case 204224:
    {
        returnValue = F("Lehofsblick");
        break;
    }
    case 204225:
    {
        returnValue = F("Lehofsweg");
        break;
    }
    case 204226:
    {
        returnValue = F("Lehpfad");
        break;
    }
    case 204227:
    {
        returnValue = F("Lehr");
        break;
    }
    case 204228:
    {
        returnValue = F("Lehr-Pfad");
        break;
    }
    case 204229:
    {
        returnValue = F("Lehrbacher Str.");
        break;
    }
    case 204230:
    {
        returnValue = F("Lehrbacher Weg");
        break;
    }
    case 204231:
    {
        returnValue = F("Lehrberg");
        break;
    }
    case 204232:
    {
        returnValue = F("Lehrberger Str.");
        break;
    }
    case 204233:
    {
        returnValue = F("Lehrden");
        break;
    }
    case 204234:
    {
        returnValue = F("Lehrenackerstr.");
        break;
    }
    case 204235:
    {
        returnValue = F("Lehrener Feld");
        break;
    }
    case 204236:
    {
        returnValue = F("Lehrener Str.");
        break;
    }
    case 204237:
    {
        returnValue = F("Lehrenkamp");
        break;
    }
    case 204238:
    {
        returnValue = F("Lehrensteinsfelder Str.");
        break;
    }
    case 204239:
    {
        returnValue = F("Lehrensteinsfelder Weg");
        break;
    }
    case 204240:
    {
        returnValue = F("Lehrenstr.");
        break;
    }
    case 204241:
    {
        returnValue = F("Lehrenweg");
        break;
    }
    case 204242:
    {
        returnValue = F("Lehrer Str.");
        break;
    }
    case 204243:
    {
        returnValue = F("Lehrer Tal");
        break;
    }
    case 204244:
    {
        returnValue = F("Lehrer-Ackermann-Str.");
        break;
    }
    case 204245:
    {
        returnValue = F("Lehrer-Arps-Str.");
        break;
    }
    case 204246:
    {
        returnValue = F("Lehrer-Bauer-Str.");
        break;
    }
    case 204247:
    {
        returnValue = F("Lehrer-Decker-Weg");
        break;
    }
    case 204248:
    {
        returnValue = F("Lehrer-Fichtel-Str.");
        break;
    }
    case 204249:
    {
        returnValue = F("Lehrer-Franz-Str.");
        break;
    }
    case 204250:
    {
        returnValue = F("Lehrer-Friesen-Str.");
        break;
    }
    case 204251:
    {
        returnValue = F("Lehrer-Geßner-Str.");
        break;
    }
    case 204252:
    {
        returnValue = F("Lehrer-Greiner-Str.");
        break;
    }
    case 204253:
    {
        returnValue = F("Lehrer-Grimm-Str.");
        break;
    }
    case 204254:
    {
        returnValue = F("Lehrer-Grotz-Weg");
        break;
    }
    case 204255:
    {
        returnValue = F("Lehrer-Hager-Str.");
        break;
    }
    case 204256:
    {
        returnValue = F("Lehrer-Hangl-Str.");
        break;
    }
    case 204257:
    {
        returnValue = F("Lehrer-Hartwig-Str.");
        break;
    }
    case 204258:
    {
        returnValue = F("Lehrer-Hausmann-Str.");
        break;
    }
    case 204259:
    {
        returnValue = F("Lehrer-Holzmann-Weg");
        break;
    }
    case 204260:
    {
        returnValue = F("Lehrer-Igl-Str.");
        break;
    }
    case 204261:
    {
        returnValue = F("Lehrer-Jaud-Weg");
        break;
    }
    case 204262:
    {
        returnValue = F("Lehrer-Jung-Str.");
        break;
    }
    case 204263:
    {
        returnValue = F("Lehrer-Kiefer-Str.");
        break;
    }
    case 204264:
    {
        returnValue = F("Lehrer-Krafft-Str.");
        break;
    }
    case 204265:
    {
        returnValue = F("Lehrer-Krämer-Str.");
        break;
    }
    case 204266:
    {
        returnValue = F("Lehrer-Köhne-Str.");
        break;
    }
    case 204267:
    {
        returnValue = F("Lehrer-Küster-Str.");
        break;
    }
    case 204268:
    {
        returnValue = F("Lehrer-Lang-Str.");
        break;
    }
    case 204269:
    {
        returnValue = F("Lehrer-Leidl-Str.");
        break;
    }
    case 204270:
    {
        returnValue = F("Lehrer-Linhard-Str.");
        break;
    }
    case 204271:
    {
        returnValue = F("Lehrer-Lipp-Str.");
        break;
    }
    case 204272:
    {
        returnValue = F("Lehrer-Lippert-Str.");
        break;
    }
    case 204273:
    {
        returnValue = F("Lehrer-Lohmann-Weg");
        break;
    }
    case 204274:
    {
        returnValue = F("Lehrer-Lämpel-Weg");
        break;
    }
    case 204275:
    {
        returnValue = F("Lehrer-Löhlein-Weg");
        break;
    }
    case 204276:
    {
        returnValue = F("Lehrer-Mainz-Str.");
        break;
    }
    case 204277:
    {
        returnValue = F("Lehrer-Mehlkop-Str.");
        break;
    }
    case 204278:
    {
        returnValue = F("Lehrer-Merz-Weg");
        break;
    }
    case 204279:
    {
        returnValue = F("Lehrer-Michel-Str.");
        break;
    }
    case 204280:
    {
        returnValue = F("Lehrer-Mohr-Str.");
        break;
    }
    case 204281:
    {
        returnValue = F("Lehrer-Mooser-Str.");
        break;
    }
    case 204282:
    {
        returnValue = F("Lehrer-Neudecker-Str.");
        break;
    }
    case 204283:
    {
        returnValue = F("Lehrer-Neumann-Weg");
        break;
    }
    case 204284:
    {
        returnValue = F("Lehrer-Pauli-Weg");
        break;
    }
    case 204285:
    {
        returnValue = F("Lehrer-Philipp-Schumacher-Str.");
        break;
    }
    case 204286:
    {
        returnValue = F("Lehrer-Pütker-Str.");
        break;
    }
    case 204287:
    {
        returnValue = F("Lehrer-Ried-Weg");
        break;
    }
    case 204288:
    {
        returnValue = F("Lehrer-Schinner-Str.");
        break;
    }
    case 204289:
    {
        returnValue = F("Lehrer-Schlegl-Ring");
        break;
    }
    case 204290:
    {
        returnValue = F("Lehrer-Schmidt-Weg");
        break;
    }
    case 204291:
    {
        returnValue = F("Lehrer-Schwab-Gasse");
        break;
    }
    case 204292:
    {
        returnValue = F("Lehrer-Schwald-Str.");
        break;
    }
    case 204293:
    {
        returnValue = F("Lehrer-Schwägermann-Str.");
        break;
    }
    case 204294:
    {
        returnValue = F("Lehrer-Sprehe-Str.");
        break;
    }
    case 204295:
    {
        returnValue = F("Lehrer-Steffens-Str.");
        break;
    }
    case 204296:
    {
        returnValue = F("Lehrer-Steig-Weg");
        break;
    }
    case 204297:
    {
        returnValue = F("Lehrer-Stein-Str.");
        break;
    }
    case 204298:
    {
        returnValue = F("Lehrer-Stiegele-Platz");
        break;
    }
    case 204299:
    {
        returnValue = F("Lehrer-Tal-Weg");
        break;
    }
    case 204300:
    {
        returnValue = F("Lehrer-Vock-Str.");
        break;
    }
    case 204301:
    {
        returnValue = F("Lehrer-Vogl-Str.");
        break;
    }
    case 204302:
    {
        returnValue = F("Lehrer-Vogl-Weg");
        break;
    }
    case 204303:
    {
        returnValue = F("Lehrer-Wagner-Str.");
        break;
    }
    case 204304:
    {
        returnValue = F("Lehrer-Weiß-Str.");
        break;
    }
    case 204305:
    {
        returnValue = F("Lehrer-Wessels-Str.");
        break;
    }
    case 204306:
    {
        returnValue = F("Lehrer-Wilhelm-Weg");
        break;
    }
    case 204307:
    {
        returnValue = F("Lehrer-Wittmann-Str.");
        break;
    }
    case 204308:
    {
        returnValue = F("Lehrer-Wolf-Str.");
        break;
    }
    case 204309:
    {
        returnValue = F("Lehrer-Wübbel-Str.");
        break;
    }
    case 204310:
    {
        returnValue = F("Lehrer-Zöpf-Str.");
        break;
    }
    case 204311:
    {
        returnValue = F("Lehreranger");
        break;
    }
    case 204312:
    {
        returnValue = F("Lehrergasse");
        break;
    }
    case 204313:
    {
        returnValue = F("Lehrergärten");
        break;
    }
    case 204314:
    {
        returnValue = F("Lehrerstr.");
        break;
    }
    case 204315:
    {
        returnValue = F("Lehrerweg");
        break;
    }
    case 204316:
    {
        returnValue = F("Lehreweg");
        break;
    }
    case 204317:
    {
        returnValue = F("Lehrgarten Thierhaupten");
        break;
    }
    case 204318:
    {
        returnValue = F("Lehrgasse");
        break;
    }
    case 204319:
    {
        returnValue = F("Lehrhalde");
        break;
    }
    case 204320:
    {
        returnValue = F("Lehrhausträßle");
        break;
    }
    case 204321:
    {
        returnValue = F("Lehrhauweg");
        break;
    }
    case 204322:
    {
        returnValue = F("Lehrhof");
        break;
    }
    case 204323:
    {
        returnValue = F("Lehrhohl");
        break;
    }
    case 204324:
    {
        returnValue = F("Lehrhovebruch");
        break;
    }
    case 204325:
    {
        returnValue = F("Lehrhöfer Heide");
        break;
    }
    case 204326:
    {
        returnValue = F("Lehrhöfer Str.");
        break;
    }
    case 204327:
    {
        returnValue = F("Lehringen");
        break;
    }
    case 204328:
    {
        returnValue = F("Lehringer Damm");
        break;
    }
    case 204329:
    {
        returnValue = F("Lehringsgrund");
        break;
    }
    case 204330:
    {
        returnValue = F("Lehrlingsflügelweg");
        break;
    }
    case 204331:
    {
        returnValue = F("Lehrlingstr.");
        break;
    }
    case 204332:
    {
        returnValue = F("Lehrn");
        break;
    }
    case 204333:
    {
        returnValue = F("Lehrnweg");
        break;
    }
    case 204334:
    {
        returnValue = F("Lehrpfad");
        break;
    }
    case 204335:
    {
        returnValue = F("Lehrpfad / Rundwanderweg");
        break;
    }
    case 204336:
    {
        returnValue = F("Lehrpfad BUND");
        break;
    }
    case 204337:
    {
        returnValue = F("Lehrpfad Eiszeit");
        break;
    }
    case 204338:
    {
        returnValue = F("Lehrpfad Freilichtmuseum \"Zeitsprung");
        break;
    }
    case 204339:
    {
        returnValue = F("Lehrpfad Glashütte");
        break;
    }
    case 204340:
    {
        returnValue = F("Lehrpfad Hullerbusch");
        break;
    }
    case 204341:
    {
        returnValue = F("Lehrpfad Lungwitzbach");
        break;
    }
    case 204342:
    {
        returnValue = F("Lehrpfad Schwarzbachtal");
        break;
    }
    case 204343:
    {
        returnValue = F("Lehrpfad für Geologie, Landschaft und Rohstoffabbau");
        break;
    }
    case 204344:
    {
        returnValue = F("Lehrpfad-Zauberwald");
        break;
    }
    case 204345:
    {
        returnValue = F("Lehrs Kamp");
        break;
    }
    case 204346:
    {
        returnValue = F("Lehrstr.");
        break;
    }
    case 204347:
    {
        returnValue = F("Lehrten");
        break;
    }
    case 204348:
    {
        returnValue = F("Lehrter Str.");
        break;
    }
    case 204349:
    {
        returnValue = F("Lehrwaldstr.");
        break;
    }
    case 204350:
    {
        returnValue = F("Lehrwaldweg");
        break;
    }
    case 204351:
    {
        returnValue = F("Lehrweg");
        break;
    }
    case 204352:
    {
        returnValue = F("Lehrwiesenstr.");
        break;
    }
    case 204353:
    {
        returnValue = F("Lehräckerstr.");
        break;
    }
    case 204354:
    {
        returnValue = F("Lehsener Chaussee");
        break;
    }
    case 204355:
    {
        returnValue = F("Lehsener Str.");
        break;
    }
    case 204356:
    {
        returnValue = F("Lehsten");
        break;
    }
    case 204357:
    {
        returnValue = F("Lehstener Weg");
        break;
    }
    case 204358:
    {
        returnValue = F("Lehstr.");
        break;
    }
    case 204359:
    {
        returnValue = F("Lehwaldstr.");
        break;
    }
    case 204360:
    {
        returnValue = F("Lehwaldweg");
        break;
    }
    case 204361:
    {
        returnValue = F("Lehweg");
        break;
    }
    case 204362:
    {
        returnValue = F("Lehwisch");
        break;
    }
    case 204363:
    {
        returnValue = F("Lehàrstr.");
        break;
    }
    case 204364:
    {
        returnValue = F("Lehárstr.");
        break;
    }
    case 204365:
    {
        returnValue = F("Lei Greeten");
        break;
    }
    case 204366:
    {
        returnValue = F("Leibargredder");
        break;
    }
    case 204367:
    {
        returnValue = F("Leibborn");
        break;
    }
    case 204368:
    {
        returnValue = F("Leibbrandstr.");
        break;
    }
    case 204369:
    {
        returnValue = F("Leibengäßchen");
        break;
    }
    case 204370:
    {
        returnValue = F("Leibenstädter Weg");
        break;
    }
    case 204371:
    {
        returnValue = F("Leibentalweg");
        break;
    }
    case 204372:
    {
        returnValue = F("Leiberg I");
        break;
    }
    case 204373:
    {
        returnValue = F("Leiberg II");
        break;
    }
    case 204374:
    {
        returnValue = F("Leiberg III");
        break;
    }
    case 204375:
    {
        returnValue = F("Leiberger Str.");
        break;
    }
    case 204376:
    {
        returnValue = F("Leiberger Wald");
        break;
    }
    case 204377:
    {
        returnValue = F("Leiberger Weg");
        break;
    }
    case 204378:
    {
        returnValue = F("Leibergweg");
        break;
    }
    case 204379:
    {
        returnValue = F("Leibersberg");
        break;
    }
    case 204380:
    {
        returnValue = F("Leiberstr.");
        break;
    }
    case 204381:
    {
        returnValue = F("Leiberstunger Str.");
        break;
    }
    case 204382:
    {
        returnValue = F("Leibertinger Str.");
        break;
    }
    case 204383:
    {
        returnValue = F("Leiberweg");
        break;
    }
    case 204384:
    {
        returnValue = F("Leibier Weg");
        break;
    }
    case 204385:
    {
        returnValue = F("Leibingerstr.");
        break;
    }
    case 204386:
    {
        returnValue = F("Leibistr.");
        break;
    }
    case 204387:
    {
        returnValue = F("Leibiweg");
        break;
    }
    case 204388:
    {
        returnValue = F("Leiblachfeld");
        break;
    }
    case 204389:
    {
        returnValue = F("Leiblachstr.");
        break;
    }
    case 204390:
    {
        returnValue = F("Leiblachweg");
        break;
    }
    case 204391:
    {
        returnValue = F("Leiblfinger Str.");
        break;
    }
    case 204392:
    {
        returnValue = F("Leiblingstr.");
        break;
    }
    case 204393:
    {
        returnValue = F("Leiblstr.");
        break;
    }
    case 204394:
    {
        returnValue = F("Leiblweg");
        break;
    }
    case 204395:
    {
        returnValue = F("Leibnitz-Str.");
        break;
    }
    case 204396:
    {
        returnValue = F("Leibnitzstr.");
        break;
    }
    case 204397:
    {
        returnValue = F("Leibniz-Campus");
        break;
    }
    case 204398:
    {
        returnValue = F("Leibniz-Str.");
        break;
    }
    case 204399:
    {
        returnValue = F("Leibnizallee");
        break;
    }
    case 204400:
    {
        returnValue = F("Leibnizgasse");
        break;
    }
    case 204401:
    {
        returnValue = F("Leibnizhof");
        break;
    }
    case 204402:
    {
        returnValue = F("Leibnizpark");
        break;
    }
    case 204403:
    {
        returnValue = F("Leibnizplatz");
        break;
    }
    case 204404:
    {
        returnValue = F("Leibnizring");
        break;
    }
    case 204405:
    {
        returnValue = F("Leibnizstr.");
        break;
    }
    case 204406:
    {
        returnValue = F("Leibnizweg");
        break;
    }
    case 204407:
    {
        returnValue = F("Leiboldstr.");
        break;
    }
    case 204408:
    {
        returnValue = F("Leibolzer Str.");
        break;
    }
    case 204409:
    {
        returnValue = F("Leiborner Str.");
        break;
    }
    case 204410:
    {
        returnValue = F("Leibreddestr.");
        break;
    }
    case 204411:
    {
        returnValue = F("Leibscher Hauptstr.");
        break;
    }
    case 204412:
    {
        returnValue = F("Leibsteinweg");
        break;
    }
    case 204413:
    {
        returnValue = F("Leibstr.");
        break;
    }
    case 204414:
    {
        returnValue = F("Leibstückle");
        break;
    }
    case 204415:
    {
        returnValue = F("Leibuschstr.");
        break;
    }
    case 204416:
    {
        returnValue = F("Leibziger Weg");
        break;
    }
    case 204417:
    {
        returnValue = F("Leicesterstr.");
        break;
    }
    case 204418:
    {
        returnValue = F("Leichau");
        break;
    }
    case 204419:
    {
        returnValue = F("Leichauer Str.");
        break;
    }
    case 204420:
    {
        returnValue = F("Leichbornweg");
        break;
    }
    case 204421:
    {
        returnValue = F("Leichendorfer Str.");
        break;
    }
    case 204422:
    {
        returnValue = F("Leichengasse");
        break;
    }
    case 204423:
    {
        returnValue = F("Leichengasse (Liechejass)");
        break;
    }
    case 204424:
    {
        returnValue = F("Leichensteinweg");
        break;
    }
    case 204425:
    {
        returnValue = F("Leichenweg");
        break;
    }
    case 204426:
    {
        returnValue = F("Leicherstr.");
        break;
    }
    case 204427:
    {
        returnValue = F("Leicherweg");
        break;
    }
    case 204428:
    {
        returnValue = F("Leichgasse");
        break;
    }
    case 204429:
    {
        returnValue = F("Leichhof");
        break;
    }
    case 204430:
    {
        returnValue = F("Leichlinger Str.");
        break;
    }
    case 204431:
    {
        returnValue = F("Leichselhart");
        break;
    }
    case 204432:
    {
        returnValue = F("Leichspoint");
        break;
    }
    case 204433:
    {
        returnValue = F("Leichstein");
        break;
    }
    case 204434:
    {
        returnValue = F("Leichtackerstr.");
        break;
    }
    case 204435:
    {
        returnValue = F("Leichte Brise");
        break;
    }
    case 204436:
    {
        returnValue = F("Leichtenstr.");
        break;
    }
    case 204437:
    {
        returnValue = F("Leichtgraben");
        break;
    }
    case 204438:
    {
        returnValue = F("Leichthammerstr.");
        break;
    }
    case 204439:
    {
        returnValue = F("Leichthohl");
        break;
    }
    case 204440:
    {
        returnValue = F("Leichtlgasse");
        break;
    }
    case 204441:
    {
        returnValue = F("Leichtmühlstr.");
        break;
    }
    case 204442:
    {
        returnValue = F("Leichtsandstr.");
        break;
    }
    case 204443:
    {
        returnValue = F("Leichtsweg");
        break;
    }
    case 204444:
    {
        returnValue = F("Leichtweg");
        break;
    }
    case 204445:
    {
        returnValue = F("Leichweg");
        break;
    }
    case 204446:
    {
        returnValue = F("Leide");
        break;
    }
    case 204447:
    {
        returnValue = F("Leideckweg");
        break;
    }
    case 204448:
    {
        returnValue = F("Leidenbergstr.");
        break;
    }
    case 204449:
    {
        returnValue = F("Leidenecker Str.");
        break;
    }
    case 204450:
    {
        returnValue = F("Leidenecker Weg");
        break;
    }
    case 204451:
    {
        returnValue = F("Leidener Str.");
        break;
    }
    case 204452:
    {
        returnValue = F("Leidenfroststr.");
        break;
    }
    case 204453:
    {
        returnValue = F("Leidenharter Hof");
        break;
    }
    case 204454:
    {
        returnValue = F("Leidenhofener Str.");
        break;
    }
    case 204455:
    {
        returnValue = F("Leidenhäuser Str.");
        break;
    }
    case 204456:
    {
        returnValue = F("Leidenhöfer Hohl");
        break;
    }
    case 204457:
    {
        returnValue = F("Leidensbergstr.");
        break;
    }
    case 204458:
    {
        returnValue = F("Leidensweg");
        break;
    }
    case 204459:
    {
        returnValue = F("Leidenweg");
        break;
    }
    case 204460:
    {
        returnValue = F("Leiderer Stadtweg");
        break;
    }
    case 204461:
    {
        returnValue = F("Leidersbacher Gäßchen");
        break;
    }
    case 204462:
    {
        returnValue = F("Leidesheimer Weiden");
        break;
    }
    case 204463:
    {
        returnValue = F("Leideweg");
        break;
    }
    case 204464:
    {
        returnValue = F("Leidgrund");
        break;
    }
    case 204465:
    {
        returnValue = F("Leidhecke");
        break;
    }
    case 204466:
    {
        returnValue = F("Leidheckenweg");
        break;
    }
    case 204467:
    {
        returnValue = F("Leidhecker Weg");
        break;
    }
    case 204468:
    {
        returnValue = F("Leidholdstr.");
        break;
    }
    case 204469:
    {
        returnValue = F("Leidigstr.");
        break;
    }
    case 204470:
    {
        returnValue = F("Leidinger Str.");
        break;
    }
    case 204471:
    {
        returnValue = F("Leidingstr.");
        break;
    }
    case 204472:
    {
        returnValue = F("Leidlinger Str.");
        break;
    }
    case 204473:
    {
        returnValue = F("Leidlstr.");
        break;
    }
    case 204474:
    {
        returnValue = F("Leidringer Str.");
        break;
    }
    case 204475:
    {
        returnValue = F("Leidsthaler Hub");
        break;
    }
    case 204476:
    {
        returnValue = F("Leidsweg");
        break;
    }
    case 204477:
    {
        returnValue = F("Leie");
        break;
    }
    case 204478:
    {
        returnValue = F("Leienbergstr.");
        break;
    }
    case 204479:
    {
        returnValue = F("Leiendeckelstr.");
        break;
    }
    case 204480:
    {
        returnValue = F("Leienfels");
        break;
    }
    case 204481:
    {
        returnValue = F("Leiengarten");
        break;
    }
    case 204482:
    {
        returnValue = F("Leienhöher Weg");
        break;
    }
    case 204483:
    {
        returnValue = F("Leienkreuz");
        break;
    }
    case 204484:
    {
        returnValue = F("Leienstr.");
        break;
    }
    case 204485:
    {
        returnValue = F("Leienweg");
        break;
    }
    case 204486:
    {
        returnValue = F("Leierbachweg");
        break;
    }
    case 204487:
    {
        returnValue = F("Leiergasse");
        break;
    }
    case 204488:
    {
        returnValue = F("Leierleweg");
        break;
    }
    case 204489:
    {
        returnValue = F("Leiermühlenweg");
        break;
    }
    case 204490:
    {
        returnValue = F("Leierndorfer Str.");
        break;
    }
    case 204491:
    {
        returnValue = F("Leiershohlstr.");
        break;
    }
    case 204492:
    {
        returnValue = F("Leiersmühle");
        break;
    }
    case 204493:
    {
        returnValue = F("Leierswiese");
        break;
    }
    case 204494:
    {
        returnValue = F("Leierweg");
        break;
    }
    case 204495:
    {
        returnValue = F("Leieräcker");
        break;
    }
    case 204496:
    {
        returnValue = F("Leieweg");
        break;
    }
    case 204497:
    {
        returnValue = F("Leif-Geiges-Weg");
        break;
    }
    case 204498:
    {
        returnValue = F("Leifacker");
        break;
    }
    case 204499:
    {
        returnValue = F("Leiferder Weg");
        break;
    }
    case 204500:
    {
        returnValue = F("Leiferdestr.");
        break;
    }
    case 204501:
    {
        returnValue = F("Leifertshorst");
        break;
    }
    case 204502:
    {
        returnValue = F("Leiffarther Str.");
        break;
    }
    case 204503:
    {
        returnValue = F("Leifheitstr.");
        break;
    }
    case 204504:
    {
        returnValue = F("Leifhelmstr.");
        break;
    }
    case 204505:
    {
        returnValue = F("Leifhelmweg");
        break;
    }
    case 204506:
    {
        returnValue = F("Leifringhausen");
        break;
    }
    case 204507:
    {
        returnValue = F("Leifringhauser Str.");
        break;
    }
    case 204508:
    {
        returnValue = F("Leigarten");
        break;
    }
    case 204509:
    {
        returnValue = F("Leigers Gässla");
        break;
    }
    case 204510:
    {
        returnValue = F("Leigers Kamp");
        break;
    }
    case 204511:
    {
        returnValue = F("Leigstenhälde");
        break;
    }
    case 204512:
    {
        returnValue = F("Leihaer Str.");
        break;
    }
    case 204513:
    {
        returnValue = F("Leihaweg Ost");
        break;
    }
    case 204514:
    {
        returnValue = F("Leihaweg West");
        break;
    }
    case 204515:
    {
        returnValue = F("Leihbergweg");
        break;
    }
    case 204516:
    {
        returnValue = F("Leihbühl");
        break;
    }
    case 204517:
    {
        returnValue = F("Leihde");
        break;
    }
    case 204518:
    {
        returnValue = F("Leihgesterner Str.");
        break;
    }
    case 204519:
    {
        returnValue = F("Leihgesterner Weg");
        break;
    }
    case 204520:
    {
        returnValue = F("Leihhausgasse");
        break;
    }
    case 204521:
    {
        returnValue = F("Leihhof");
        break;
    }
    case 204522:
    {
        returnValue = F("Leihkamp");
        break;
    }
    case 204523:
    {
        returnValue = F("Leikenbergstr.");
        break;
    }
    case 204524:
    {
        returnValue = F("Leikenweg");
        break;
    }
    case 204525:
    {
        returnValue = F("Leim");
        break;
    }
    case 204526:
    {
        returnValue = F("Leimattenstr.");
        break;
    }
    case 204527:
    {
        returnValue = F("Leimbach");
        break;
    }
    case 204528:
    {
        returnValue = F("Leimbacher Feldstr.");
        break;
    }
    case 204529:
    {
        returnValue = F("Leimbacher Gartenstr.");
        break;
    }
    case 204530:
    {
        returnValue = F("Leimbacher Hüttenberg");
        break;
    }
    case 204531:
    {
        returnValue = F("Leimbacher Kirchstr.");
        break;
    }
    case 204532:
    {
        returnValue = F("Leimbacher Str.");
        break;
    }
    case 204533:
    {
        returnValue = F("Leimbacher Weg");
        break;
    }
    case 204534:
    {
        returnValue = F("Leimbachmühle");
        break;
    }
    case 204535:
    {
        returnValue = F("Leimbachshof");
        break;
    }
    case 204536:
    {
        returnValue = F("Leimbachshöfer Str.");
        break;
    }
    case 204537:
    {
        returnValue = F("Leimbachstr.");
        break;
    }
    case 204538:
    {
        returnValue = F("Leimbachtalbrücke");
        break;
    }
    case 204539:
    {
        returnValue = F("Leimbachweg");
        break;
    }
    case 204540:
    {
        returnValue = F("Leimbergerstr.");
        break;
    }
    case 204541:
    {
        returnValue = F("Leimbergstr.");
        break;
    }
    case 204542:
    {
        returnValue = F("Leimbergsträßchen");
        break;
    }
    case 204543:
    {
        returnValue = F("Leimbergweg");
        break;
    }
    case 204544:
    {
        returnValue = F("Leimbornstr.");
        break;
    }
    case 204545:
    {
        returnValue = F("Leimbreede");
        break;
    }
    case 204546:
    {
        returnValue = F("Leimbreite");
        break;
    }
    case 204547:
    {
        returnValue = F("Leimbrink");
        break;
    }
    case 204548:
    {
        returnValue = F("Leimbrocks Holz");
        break;
    }
    case 204549:
    {
        returnValue = F("Leimbronnenweg");
        break;
    }
    case 204550:
    {
        returnValue = F("Leimbuschweg");
        break;
    }
    case 204551:
    {
        returnValue = F("Leimdiek");
        break;
    }
    case 204552:
    {
        returnValue = F("Leimeisterweg");
        break;
    }
    case 204553:
    {
        returnValue = F("Leimekaute");
        break;
    }
    case 204554:
    {
        returnValue = F("Leimelbachweg");
        break;
    }
    case 204555:
    {
        returnValue = F("Leimelerstr.");
        break;
    }
    case 204556:
    {
        returnValue = F("Leimenacker");
        break;
    }
    case 204557:
    {
        returnValue = F("Leimenackerweg");
        break;
    }
    case 204558:
    {
        returnValue = F("Leimenbuchweg");
        break;
    }
    case 204559:
    {
        returnValue = F("Leimenbuckweg");
        break;
    }
    case 204560:
    {
        returnValue = F("Leimeneckstr.");
        break;
    }
    case 204561:
    {
        returnValue = F("Leimener Str.");
        break;
    }
    case 204562:
    {
        returnValue = F("Leimener Weg");
        break;
    }
    case 204563:
    {
        returnValue = F("Leimengarten");
        break;
    }
    case 204564:
    {
        returnValue = F("Leimengasse");
        break;
    }
    case 204565:
    {
        returnValue = F("Leimengrube");
        break;
    }
    case 204566:
    {
        returnValue = F("Leimengruben");
        break;
    }
    case 204567:
    {
        returnValue = F("Leimengrubenstr.");
        break;
    }
    case 204568:
    {
        returnValue = F("Leimengrubenweg");
        break;
    }
    case 204569:
    {
        returnValue = F("Leimengrubweg");
        break;
    }
    case 204570:
    {
        returnValue = F("Leimengrund");
        break;
    }
    case 204571:
    {
        returnValue = F("Leimengrüb");
        break;
    }
    case 204572:
    {
        returnValue = F("Leimengrübstr.");
        break;
    }
    case 204573:
    {
        returnValue = F("Leimengrübweg");
        break;
    }
    case 204574:
    {
        returnValue = F("Leimenhof");
        break;
    }
    case 204575:
    {
        returnValue = F("Leimenhäulestr.");
        break;
    }
    case 204576:
    {
        returnValue = F("Leimenhöfer Str.");
        break;
    }
    case 204577:
    {
        returnValue = F("Leimenkaut");
        break;
    }
    case 204578:
    {
        returnValue = F("Leimenkaute");
        break;
    }
    case 204579:
    {
        returnValue = F("Leimenkautenfeld");
        break;
    }
    case 204580:
    {
        returnValue = F("Leimenkauter Weg");
        break;
    }
    case 204581:
    {
        returnValue = F("Leimenkauterweg");
        break;
    }
    case 204582:
    {
        returnValue = F("Leimenkautschneise");
        break;
    }
    case 204583:
    {
        returnValue = F("Leimenkautweg");
        break;
    }
    case 204584:
    {
        returnValue = F("Leimenlach Schneise");
        break;
    }
    case 204585:
    {
        returnValue = F("Leimenlachenweg");
        break;
    }
    case 204586:
    {
        returnValue = F("Leimenlöcherweg");
        break;
    }
    case 204587:
    {
        returnValue = F("Leimenpeschen");
        break;
    }
    case 204588:
    {
        returnValue = F("Leimenrode");
        break;
    }
    case 204589:
    {
        returnValue = F("Leimenseeschneise");
        break;
    }
    case 204590:
    {
        returnValue = F("Leimenstichlestr.");
        break;
    }
    case 204591:
    {
        returnValue = F("Leimenstichweg");
        break;
    }
    case 204592:
    {
        returnValue = F("Leimenstr.");
        break;
    }
    case 204593:
    {
        returnValue = F("Leimental");
        break;
    }
    case 204594:
    {
        returnValue = F("Leimentaler Weg");
        break;
    }
    case 204595:
    {
        returnValue = F("Leimentalstr.");
        break;
    }
    case 204596:
    {
        returnValue = F("Leimentalweg");
        break;
    }
    case 204597:
    {
        returnValue = F("Leimentor");
        break;
    }
    case 204598:
    {
        returnValue = F("Leimenweg");
        break;
    }
    case 204599:
    {
        returnValue = F("Leimenäcker");
        break;
    }
    case 204600:
    {
        returnValue = F("Leimenäckerweg");
        break;
    }
    case 204601:
    {
        returnValue = F("Leimer Str.");
        break;
    }
    case 204602:
    {
        returnValue = F("Leimer Weg");
        break;
    }
    case 204603:
    {
        returnValue = F("Leimerkellerweg");
        break;
    }
    case 204604:
    {
        returnValue = F("Leimersberg");
        break;
    }
    case 204605:
    {
        returnValue = F("Leimersbrunner Hof");
        break;
    }
    case 204606:
    {
        returnValue = F("Leimerstr.");
        break;
    }
    case 204607:
    {
        returnValue = F("Leimerts Heck");
        break;
    }
    case 204608:
    {
        returnValue = F("Leimertshohle");
        break;
    }
    case 204609:
    {
        returnValue = F("Leimeskaute");
        break;
    }
    case 204610:
    {
        returnValue = F("Leimetstr.");
        break;
    }
    case 204611:
    {
        returnValue = F("Leimeweg");
        break;
    }
    case 204612:
    {
        returnValue = F("Leimfabrikstr.");
        break;
    }
    case 204613:
    {
        returnValue = F("Leimfeldstr.");
        break;
    }
    case 204614:
    {
        returnValue = F("Leimgrabenweg");
        break;
    }
    case 204615:
    {
        returnValue = F("Leimgrub");
        break;
    }
    case 204616:
    {
        returnValue = F("Leimgrube");
        break;
    }
    case 204617:
    {
        returnValue = F("Leimgruben");
        break;
    }
    case 204618:
    {
        returnValue = F("Leimgrubenstr.");
        break;
    }
    case 204619:
    {
        returnValue = F("Leimgrubenweg");
        break;
    }
    case 204620:
    {
        returnValue = F("Leimhol");
        break;
    }
    case 204621:
    {
        returnValue = F("Leimholer Str.");
        break;
    }
    case 204622:
    {
        returnValue = F("Leimhüll");
        break;
    }
    case 204623:
    {
        returnValue = F("Leimigsgasse");
        break;
    }
    case 204624:
    {
        returnValue = F("Leimiweg");
        break;
    }
    case 204625:
    {
        returnValue = F("Leimkamp");
        break;
    }
    case 204626:
    {
        returnValue = F("Leimkaul");
        break;
    }
    case 204627:
    {
        returnValue = F("Leimkaute");
        break;
    }
    case 204628:
    {
        returnValue = F("Leimkauterfeld");
        break;
    }
    case 204629:
    {
        returnValue = F("Leimkeweg");
        break;
    }
    case 204630:
    {
        returnValue = F("Leimkrautweg");
        break;
    }
    case 204631:
    {
        returnValue = F("Leimkugelstr.");
        break;
    }
    case 204632:
    {
        returnValue = F("Leimkuhle");
        break;
    }
    case 204633:
    {
        returnValue = F("Leimplatz");
        break;
    }
    case 204634:
    {
        returnValue = F("Leimriether Dorfstr.");
        break;
    }
    case 204635:
    {
        returnValue = F("Leimriether Hauptstr.");
        break;
    }
    case 204636:
    {
        returnValue = F("Leimsbergstr.");
        break;
    }
    case 204637:
    {
        returnValue = F("Leimsiede");
        break;
    }
    case 204638:
    {
        returnValue = F("Leimstr.");
        break;
    }
    case 204639:
    {
        returnValue = F("Leimstrumpf");
        break;
    }
    case 204640:
    {
        returnValue = F("Leimstruther Weg");
        break;
    }
    case 204641:
    {
        returnValue = F("Leimtaler Planweg");
        break;
    }
    case 204642:
    {
        returnValue = F("Leimtalweg");
        break;
    }
    case 204643:
    {
        returnValue = F("Leimtelstr.");
        break;
    }
    case 204644:
    {
        returnValue = F("Leimthaler Weg");
        break;
    }
    case 204645:
    {
        returnValue = F("Leimuferstr.");
        break;
    }
    case 204646:
    {
        returnValue = F("Leimwasen");
        break;
    }
    case 204647:
    {
        returnValue = F("Leimweg");
        break;
    }
    case 204648:
    {
        returnValue = F("Leimäcker");
        break;
    }
    case 204649:
    {
        returnValue = F("Leimäckerstr.");
        break;
    }
    case 204650:
    {
        returnValue = F("Leinacher Str.");
        break;
    }
    case 204651:
    {
        returnValue = F("Leinacher Weg");
        break;
    }
    case 204652:
    {
        returnValue = F("Leinachsrangen");
        break;
    }
    case 204653:
    {
        returnValue = F("Leinachweg");
        break;
    }
    case 204654:
    {
        returnValue = F("Leinaer Str.");
        break;
    }
    case 204655:
    {
        returnValue = F("Leinaer Weg");
        break;
    }
    case 204656:
    {
        returnValue = F("Leinagrund");
        break;
    }
    case 204657:
    {
        returnValue = F("Leinastr.");
        break;
    }
    case 204658:
    {
        returnValue = F("Leinauer Str.");
        break;
    }
    case 204659:
    {
        returnValue = F("Leinaweg");
        break;
    }
    case 204660:
    {
        returnValue = F("Leinbachstr.");
        break;
    }
    case 204661:
    {
        returnValue = F("Leinbachtal");
        break;
    }
    case 204662:
    {
        returnValue = F("Leinberg");
        break;
    }
    case 204663:
    {
        returnValue = F("Leinberger-Str.");
        break;
    }
    case 204664:
    {
        returnValue = F("Leinbergerstr.");
        break;
    }
    case 204665:
    {
        returnValue = F("Leinbergerweg");
        break;
    }
    case 204666:
    {
        returnValue = F("Leinbergstr.");
        break;
    }
    case 204667:
    {
        returnValue = F("Leinbergsträßle");
        break;
    }
    case 204668:
    {
        returnValue = F("Leinblickweg");
        break;
    }
    case 204669:
    {
        returnValue = F("Leinburger Weg");
        break;
    }
    case 204670:
    {
        returnValue = F("Leinburgstr.");
        break;
    }
    case 204671:
    {
        returnValue = F("Leinburgweg");
        break;
    }
    case 204672:
    {
        returnValue = F("Leinder Str.");
        break;
    }
    case 204673:
    {
        returnValue = F("Leinder Weg");
        break;
    }
    case 204674:
    {
        returnValue = F("Leindlweg");
        break;
    }
    case 204675:
    {
        returnValue = F("Leindotterweg");
        break;
    }
    case 204676:
    {
        returnValue = F("Leine-Heide-Radfernweg");
        break;
    }
    case 204677:
    {
        returnValue = F("Leine-Heide-Radweg");
        break;
    }
    case 204678:
    {
        returnValue = F("Leine-Park");
        break;
    }
    case 204679:
    {
        returnValue = F("Leineaue");
        break;
    }
    case 204680:
    {
        returnValue = F("Leineberg");
        break;
    }
    case 204681:
    {
        returnValue = F("Leinebergpark");
        break;
    }
    case 204682:
    {
        returnValue = F("Leineblick");
        break;
    }
    case 204683:
    {
        returnValue = F("Leineblicksweg");
        break;
    }
    case 204684:
    {
        returnValue = F("Leinebrücke");
        break;
    }
    case 204685:
    {
        returnValue = F("Leinechaussee");
        break;
    }
    case 204686:
    {
        returnValue = F("Leineckstr.");
        break;
    }
    case 204687:
    {
        returnValue = F("Leinedamm");
        break;
    }
    case 204688:
    {
        returnValue = F("Leinefelder Str.");
        break;
    }
    case 204689:
    {
        returnValue = F("Leinefelder Weg");
        break;
    }
    case 204690:
    {
        returnValue = F("Leinefeldstr.");
        break;
    }
    case 204691:
    {
        returnValue = F("Leinegasse");
        break;
    }
    case 204692:
    {
        returnValue = F("Leineggweg");
        break;
    }
    case 204693:
    {
        returnValue = F("Leineleweg");
        break;
    }
    case 204694:
    {
        returnValue = F("Leinemannweg");
        break;
    }
    case 204695:
    {
        returnValue = F("Leinemühle");
        break;
    }
    case 204696:
    {
        returnValue = F("Leinenborner Weg");
        break;
    }
    case 204697:
    {
        returnValue = F("Leinenbrink");
        break;
    }
    case 204698:
    {
        returnValue = F("Leinenbrunnen");
        break;
    }
    case 204699:
    {
        returnValue = F("Leinendamm");
        break;
    }
    case 204700:
    {
        returnValue = F("Leinenfirster Str.");
        break;
    }
    case 204701:
    {
        returnValue = F("Leinengartenweg");
        break;
    }
    case 204702:
    {
        returnValue = F("Leinengasse");
        break;
    }
    case 204703:
    {
        returnValue = F("Leinengraben");
        break;
    }
    case 204704:
    {
        returnValue = F("Leinenindustrie");
        break;
    }
    case 204705:
    {
        returnValue = F("Leinenkamp");
        break;
    }
    case 204706:
    {
        returnValue = F("Leinenpfad");
        break;
    }
    case 204707:
    {
        returnValue = F("Leinenring");
        break;
    }
    case 204708:
    {
        returnValue = F("Leinensrieten");
        break;
    }
    case 204709:
    {
        returnValue = F("Leinensriethen");
        break;
    }
    case 204710:
    {
        returnValue = F("Leinensteg");
        break;
    }
    case 204711:
    {
        returnValue = F("Leinenstieg");
        break;
    }
    case 204712:
    {
        returnValue = F("Leinenstr.");
        break;
    }
    case 204713:
    {
        returnValue = F("Leinenwebergasse");
        break;
    }
    case 204714:
    {
        returnValue = F("Leinenweberpfad");
        break;
    }
    case 204715:
    {
        returnValue = F("Leinenweberstr.");
        break;
    }
    case 204716:
    {
        returnValue = F("Leinenweberweg");
        break;
    }
    case 204717:
    {
        returnValue = F("Leinenweg");
        break;
    }
    case 204718:
    {
        returnValue = F("Leinepark");
        break;
    }
    case 204719:
    {
        returnValue = F("Leineplatz");
        break;
    }
    case 204720:
    {
        returnValue = F("Leiner Str.");
        break;
    }
    case 204721:
    {
        returnValue = F("Leinerandstr.");
        break;
    }
    case 204722:
    {
        returnValue = F("Leinerberg");
        break;
    }
    case 204723:
    {
        returnValue = F("Leinergasse");
        break;
    }
    case 204724:
    {
        returnValue = F("Leinering");
        break;
    }
    case 204725:
    {
        returnValue = F("Leinerstift");
        break;
    }
    case 204726:
    {
        returnValue = F("Leinerstr.");
        break;
    }
    case 204727:
    {
        returnValue = F("Leinertsberg");
        break;
    }
    case 204728:
    {
        returnValue = F("Leinerweg");
        break;
    }
    case 204729:
    {
        returnValue = F("Leinestr.");
        break;
    }
    case 204730:
    {
        returnValue = F("Leinesweg");
        break;
    }
    case 204731:
    {
        returnValue = F("Leinetal");
        break;
    }
    case 204732:
    {
        returnValue = F("Leineturm");
        break;
    }
    case 204733:
    {
        returnValue = F("Leineufer");
        break;
    }
    case 204734:
    {
        returnValue = F("Leineweberbrücke");
        break;
    }
    case 204735:
    {
        returnValue = F("Leinewebergang");
        break;
    }
    case 204736:
    {
        returnValue = F("Leinewebergasse");
        break;
    }
    case 204737:
    {
        returnValue = F("Leineweberplatz");
        break;
    }
    case 204738:
    {
        returnValue = F("Leineweberring");
        break;
    }
    case 204739:
    {
        returnValue = F("Leinewebers Kamp");
        break;
    }
    case 204740:
    {
        returnValue = F("Leinewebersteig");
        break;
    }
    case 204741:
    {
        returnValue = F("Leineweberstieg");
        break;
    }
    case 204742:
    {
        returnValue = F("Leineweberstr.");
        break;
    }
    case 204743:
    {
        returnValue = F("Leineweberweg");
        break;
    }
    case 204744:
    {
        returnValue = F("Leineweg");
        break;
    }
    case 204745:
    {
        returnValue = F("Leinewehweg");
        break;
    }
    case 204746:
    {
        returnValue = F("Leinewinkel");
        break;
    }
    case 204747:
    {
        returnValue = F("Leinfeld");
        break;
    }
    case 204748:
    {
        returnValue = F("Leinfeldener Str.");
        break;
    }
    case 204749:
    {
        returnValue = F("Leinfelder Str.");
        break;
    }
    case 204750:
    {
        returnValue = F("Leinfelder Weg");
        break;
    }
    case 204751:
    {
        returnValue = F("Leinfelderstr.");
        break;
    }
    case 204752:
    {
        returnValue = F("Leinfelderweg");
        break;
    }
    case 204753:
    {
        returnValue = F("Leinfeldstr.");
        break;
    }
    case 204754:
    {
        returnValue = F("Leingartener Str.");
        break;
    }
    case 204755:
    {
        returnValue = F("Leingartenstr.");
        break;
    }
    case 204756:
    {
        returnValue = F("Leingasse");
        break;
    }
    case 204757:
    {
        returnValue = F("Leingen");
        break;
    }
    case 204758:
    {
        returnValue = F("Leingipfelweg");
        break;
    }
    case 204759:
    {
        returnValue = F("Leingraben");
        break;
    }
    case 204760:
    {
        returnValue = F("Leingrubstr.");
        break;
    }
    case 204761:
    {
        returnValue = F("Leinhaldenweg");
        break;
    }
    case 204762:
    {
        returnValue = F("Leinhaldeweg");
        break;
    }
    case 204763:
    {
        returnValue = F("Leinhauser Str.");
        break;
    }
    case 204764:
    {
        returnValue = F("Leinheimer Str.");
        break;
    }
    case 204765:
    {
        returnValue = F("Leinhof");
        break;
    }
    case 204766:
    {
        returnValue = F("Leinhofstr.");
        break;
    }
    case 204767:
    {
        returnValue = F("Leinhäusle");
        break;
    }
    case 204768:
    {
        returnValue = F("Leinhöhlweg");
        break;
    }
    case 204769:
    {
        returnValue = F("Leiningen");
        break;
    }
    case 204770:
    {
        returnValue = F("Leiningenstr.");
        break;
    }
    case 204771:
    {
        returnValue = F("Leininger Pfad");
        break;
    }
    case 204772:
    {
        returnValue = F("Leininger Ring");
        break;
    }
    case 204773:
    {
        returnValue = F("Leininger Schlossgarten");
        break;
    }
    case 204774:
    {
        returnValue = F("Leininger Str.");
        break;
    }
    case 204775:
    {
        returnValue = F("Leininger Weg");
        break;
    }
    case 204776:
    {
        returnValue = F("Leiningerstr.");
        break;
    }
    case 204777:
    {
        returnValue = F("Leiningerweg");
        break;
    }
    case 204778:
    {
        returnValue = F("Leiningshalde");
        break;
    }
    case 204779:
    {
        returnValue = F("Leinischer Weg");
        break;
    }
    case 204780:
    {
        returnValue = F("Leinkamp");
        break;
    }
    case 204781:
    {
        returnValue = F("Leinkampstr.");
        break;
    }
    case 204782:
    {
        returnValue = F("Leinlachenweg");
        break;
    }
    case 204783:
    {
        returnValue = F("Leinleiterstr.");
        break;
    }
    case 204784:
    {
        returnValue = F("Leinmühle");
        break;
    }
    case 204785:
    {
        returnValue = F("Leinorstr.");
        break;
    }
    case 204786:
    {
        returnValue = F("Leinpfad");
        break;
    }
    case 204787:
    {
        returnValue = F("Leinpfad des WSA");
        break;
    }
    case 204788:
    {
        returnValue = F("Leinrainweg");
        break;
    }
    case 204789:
    {
        returnValue = F("Leinreiterstr.");
        break;
    }
    case 204790:
    {
        returnValue = F("Leinritt");
        break;
    }
    case 204791:
    {
        returnValue = F("Leinritterschneise");
        break;
    }
    case 204792:
    {
        returnValue = F("Leinrittschneise");
        break;
    }
    case 204793:
    {
        returnValue = F("Leinrittweg");
        break;
    }
    case 204794:
    {
        returnValue = F("Leinröste");
        break;
    }
    case 204795:
    {
        returnValue = F("Leinsbachstr.");
        break;
    }
    case 204796:
    {
        returnValue = F("Leinschede");
        break;
    }
    case 204797:
    {
        returnValue = F("Leinschlag");
        break;
    }
    case 204798:
    {
        returnValue = F("Leinsteig");
        break;
    }
    case 204799:
    {
        returnValue = F("Leinsteige");
        break;
    }
    case 204800:
    {
        returnValue = F("Leinstetter Str.");
        break;
    }
    case 204801:
    {
        returnValue = F("Leinstetter Weg");
        break;
    }
    case 204802:
    {
        returnValue = F("Leinstiege");
        break;
    }
    case 204803:
    {
        returnValue = F("Leinstr.");
        break;
    }
    case 204804:
    {
        returnValue = F("Leinstücken");
        break;
    }
    case 204805:
    {
        returnValue = F("Leinsweilerstr.");
        break;
    }
    case 204806:
    {
        returnValue = F("Leintalblick");
        break;
    }
    case 204807:
    {
        returnValue = F("Leintalstr.");
        break;
    }
    case 204808:
    {
        returnValue = F("Leintalweg");
        break;
    }
    case 204809:
    {
        returnValue = F("Leintelstr.");
        break;
    }
    case 204810:
    {
        returnValue = F("Leintobelweg");
        break;
    }
    case 204811:
    {
        returnValue = F("Leinwanderstr.");
        break;
    }
    case 204812:
    {
        returnValue = F("Leinwandsgraben");
        break;
    }
    case 204813:
    {
        returnValue = F("Leinwasen");
        break;
    }
    case 204814:
    {
        returnValue = F("Leinwebergasse");
        break;
    }
    case 204815:
    {
        returnValue = F("Leinweberstr.");
        break;
    }
    case 204816:
    {
        returnValue = F("Leinweberweg");
        break;
    }
    case 204817:
    {
        returnValue = F("Leinweg");
        break;
    }
    case 204818:
    {
        returnValue = F("Leinweiler Str.");
        break;
    }
    case 204819:
    {
        returnValue = F("Leinwiesenstr.");
        break;
    }
    case 204820:
    {
        returnValue = F("Leinwiesenweg");
        break;
    }
    case 204821:
    {
        returnValue = F("Leinzeller Str.");
        break;
    }
    case 204822:
    {
        returnValue = F("Leinäcker");
        break;
    }
    case 204823:
    {
        returnValue = F("Leinäckerstr.");
        break;
    }
    case 204824:
    {
        returnValue = F("Leinäckerweg");
        break;
    }
    case 204825:
    {
        returnValue = F("Leipaer Str.");
        break;
    }
    case 204826:
    {
        returnValue = F("Leipardstr.");
        break;
    }
    case 204827:
    {
        returnValue = F("Leipener Str.");
        break;
    }
    case 204828:
    {
        returnValue = F("Leipeweg");
        break;
    }
    case 204829:
    {
        returnValue = F("Leipferdinger Str.");
        break;
    }
    case 204830:
    {
        returnValue = F("Leipheimer Str.");
        break;
    }
    case 204831:
    {
        returnValue = F("Leipheimer Weg");
        break;
    }
    case 204832:
    {
        returnValue = F("Leipnitz-Tanndorfer Str.");
        break;
    }
    case 204833:
    {
        returnValue = F("Leipnitzer Hauptstr.");
        break;
    }
    case 204834:
    {
        returnValue = F("Leipnitzer Str.");
        break;
    }
    case 204835:
    {
        returnValue = F("Leipnitzstr.");
        break;
    }
    case 204836:
    {
        returnValue = F("Leipoldstr.");
        break;
    }
    case 204837:
    {
        returnValue = F("Leippen");
        break;
    }
    case 204838:
    {
        returnValue = F("Leipper Weg");
        break;
    }
    case 204839:
    {
        returnValue = F("Leippsche Str.");
        break;
    }
    case 204840:
    {
        returnValue = F("Leipzig-Süd-Weg");
        break;
    }
    case 204841:
    {
        returnValue = F("Leipziger Allee");
        break;
    }
    case 204842:
    {
        returnValue = F("Leipziger Chaussee");
        break;
    }
    case 204843:
    {
        returnValue = F("Leipziger Gasse");
        break;
    }
    case 204844:
    {
        returnValue = F("Leipziger Höhe");
        break;
    }
    case 204845:
    {
        returnValue = F("Leipziger Landstr.");
        break;
    }
    case 204846:
    {
        returnValue = F("Leipziger Neumarkt");
        break;
    }
    case 204847:
    {
        returnValue = F("Leipziger Platz");
        break;
    }
    case 204848:
    {
        returnValue = F("Leipziger Ring");
        break;
    }
    case 204849:
    {
        returnValue = F("Leipziger Str.");
        break;
    }
    case 204850:
    {
        returnValue = F("Leipziger Str. Hassel");
        break;
    }
    case 204851:
    {
        returnValue = F("Leipziger Vorstadt");
        break;
    }
    case 204852:
    {
        returnValue = F("Leipziger Wall");
        break;
    }
    case 204853:
    {
        returnValue = F("Leipziger Weg");
        break;
    }
    case 204854:
    {
        returnValue = F("Leipzigstr.");
        break;
    }
    case 204855:
    {
        returnValue = F("Leirenfeldweg");
        break;
    }
    case 204856:
    {
        returnValue = F("Leirergasse");
        break;
    }
    case 204857:
    {
        returnValue = F("Leisackerweg");
        break;
    }
    case 204858:
    {
        returnValue = F("Leisartstr.");
        break;
    }
    case 204859:
    {
        returnValue = F("Leisau");
        break;
    }
    case 204860:
    {
        returnValue = F("Leisauer Str.");
        break;
    }
    case 204861:
    {
        returnValue = F("Leisbachbrücke");
        break;
    }
    case 204862:
    {
        returnValue = F("Leisberg");
        break;
    }
    case 204863:
    {
        returnValue = F("Leisberghöhe");
        break;
    }
    case 204864:
    {
        returnValue = F("Leisbergstaffeln");
        break;
    }
    case 204865:
    {
        returnValue = F("Leisbergstr.");
        break;
    }
    case 204866:
    {
        returnValue = F("Leisbergweg");
        break;
    }
    case 204867:
    {
        returnValue = F("Leisbrookenweg");
        break;
    }
    case 204868:
    {
        returnValue = F("Leisbrunnenstr.");
        break;
    }
    case 204869:
    {
        returnValue = F("Leisbuckel");
        break;
    }
    case 204870:
    {
        returnValue = F("Leisböhlweg");
        break;
    }
    case 204871:
    {
        returnValue = F("Leisbühl");
        break;
    }
    case 204872:
    {
        returnValue = F("Leischdamm");
        break;
    }
    case 204873:
    {
        returnValue = F("Leischstr.");
        break;
    }
    case 204874:
    {
        returnValue = F("Leischultenkamp");
        break;
    }
    case 204875:
    {
        returnValue = F("Leischweg");
        break;
    }
    case 204876:
    {
        returnValue = F("Leise Weg");
        break;
    }
    case 204877:
    {
        returnValue = F("Leiseberg");
        break;
    }
    case 204878:
    {
        returnValue = F("Leiseküppel");
        break;
    }
    case 204879:
    {
        returnValue = F("Leiselberg");
        break;
    }
    case 204880:
    {
        returnValue = F("Leiselheimer Damm");
        break;
    }
    case 204881:
    {
        returnValue = F("Leiselheimer Str.");
        break;
    }
    case 204882:
    {
        returnValue = F("Leiselpark");
        break;
    }
    case 204883:
    {
        returnValue = F("Leiselwiesenanger");
        break;
    }
    case 204884:
    {
        returnValue = F("Leisenauer Dorfstr.");
        break;
    }
    case 204885:
    {
        returnValue = F("Leisenbergweg");
        break;
    }
    case 204886:
    {
        returnValue = F("Leisenhart");
        break;
    }
    case 204887:
    {
        returnValue = F("Leisenhöhe");
        break;
    }
    case 204888:
    {
        returnValue = F("Leisenmahd");
        break;
    }
    case 204889:
    {
        returnValue = F("Leisenröder Str.");
        break;
    }
    case 204890:
    {
        returnValue = F("Leisenwalder Str.");
        break;
    }
    case 204891:
    {
        returnValue = F("Leisenwalder Weg");
        break;
    }
    case 204892:
    {
        returnValue = F("Leisenwälder Str.");
        break;
    }
    case 204893:
    {
        returnValue = F("Leiserweg");
        break;
    }
    case 204894:
    {
        returnValue = F("Leisewitzstr.");
        break;
    }
    case 204895:
    {
        returnValue = F("Leisgesstr.");
        break;
    }
    case 204896:
    {
        returnValue = F("Leisings Buind");
        break;
    }
    case 204897:
    {
        returnValue = F("Leiskampstr.");
        break;
    }
    case 204898:
    {
        returnValue = F("Leisklinge");
        break;
    }
    case 204899:
    {
        returnValue = F("Leislau");
        break;
    }
    case 204900:
    {
        returnValue = F("Leislerstr.");
        break;
    }
    case 204901:
    {
        returnValue = F("Leislewaldweg");
        break;
    }
    case 204902:
    {
        returnValue = F("Leislingstr.");
        break;
    }
    case 204903:
    {
        returnValue = F("Leismühl");
        break;
    }
    case 204904:
    {
        returnValue = F("Leisner Str.");
        break;
    }
    case 204905:
    {
        returnValue = F("Leisnering-Weg");
        break;
    }
    case 204906:
    {
        returnValue = F("Leisnerstr.");
        break;
    }
    case 204907:
    {
        returnValue = F("Leisnerweg");
        break;
    }
    case 204908:
    {
        returnValue = F("Leisniger Chaussee");
        break;
    }
    case 204909:
    {
        returnValue = F("Leisniger Landstr.");
        break;
    }
    case 204910:
    {
        returnValue = F("Leisniger Platz");
        break;
    }
    case 204911:
    {
        returnValue = F("Leisniger Str.");
        break;
    }
    case 204912:
    {
        returnValue = F("Leisnitz");
        break;
    }
    case 204913:
    {
        returnValue = F("Leisnitzer Str.");
        break;
    }
    case 204914:
    {
        returnValue = F("Leisrain");
        break;
    }
    case 204915:
    {
        returnValue = F("Leissstr.");
        break;
    }
    case 204916:
    {
        returnValue = F("Leistadter Str.");
        break;
    }
    case 204917:
    {
        returnValue = F("Leistdorfer Str.");
        break;
    }
    case 204918:
    {
        returnValue = F("Leistenbachstr.");
        break;
    }
    case 204919:
    {
        returnValue = F("Leistenhaus");
        break;
    }
    case 204920:
    {
        returnValue = F("Leistenhof");
        break;
    }
    case 204921:
    {
        returnValue = F("Leistenmühle");
        break;
    }
    case 204922:
    {
        returnValue = F("Leistenower Str.");
        break;
    }
    case 204923:
    {
        returnValue = F("Leistenstr.");
        break;
    }
    case 204924:
    {
        returnValue = F("Leistenweg");
        break;
    }
    case 204925:
    {
        returnValue = F("Leister Str.");
        break;
    }
    case 204926:
    {
        returnValue = F("Leisterförder Str.");
        break;
    }
    case 204927:
    {
        returnValue = F("Leistersberg");
        break;
    }
    case 204928:
    {
        returnValue = F("Leistikowstr.");
        break;
    }
    case 204929:
    {
        returnValue = F("Leistikowweg");
        break;
    }
    case 204930:
    {
        returnValue = F("Leistlinger Str.");
        break;
    }
    case 204931:
    {
        returnValue = F("Leistnerstr.");
        break;
    }
    case 204932:
    {
        returnValue = F("Leistr.");
        break;
    }
    case 204933:
    {
        returnValue = F("Leistritzstr.");
        break;
    }
    case 204934:
    {
        returnValue = F("Leistruper-Wald-Str.");
        break;
    }
    case 204935:
    {
        returnValue = F("Leiststr.");
        break;
    }
    case 204936:
    {
        returnValue = F("Leistungszentrum");
        break;
    }
    case 204937:
    {
        returnValue = F("Leistweg");
        break;
    }
    case 204938:
    {
        returnValue = F("Leisweg");
        break;
    }
    case 204939:
    {
        returnValue = F("Leitachhang");
        break;
    }
    case 204940:
    {
        returnValue = F("Leitdamm");
        break;
    }
    case 204941:
    {
        returnValue = F("Leite");
        break;
    }
    case 204942:
    {
        returnValue = F("Leitegärten");
        break;
    }
    case 204943:
    {
        returnValue = F("Leitelshainer Str.");
        break;
    }
    case 204944:
    {
        returnValue = F("Leitelshofer Str.");
        break;
    }
    case 204945:
    {
        returnValue = F("Leitelshofer Weg");
        break;
    }
    case 204946:
    {
        returnValue = F("Leitelsteigweg");
        break;
    }
    case 204947:
    {
        returnValue = F("Leiten");
        break;
    }
    case 204948:
    {
        returnValue = F("Leitenacker");
        break;
    }
    case 204949:
    {
        returnValue = F("Leitenackerstr.");
        break;
    }
    case 204950:
    {
        returnValue = F("Leitenangerweg");
        break;
    }
    case 204951:
    {
        returnValue = F("Leitenbachstr.");
        break;
    }
    case 204952:
    {
        returnValue = F("Leitenberg");
        break;
    }
    case 204953:
    {
        returnValue = F("Leitenberg Nord");
        break;
    }
    case 204954:
    {
        returnValue = F("Leitenbergstr.");
        break;
    }
    case 204955:
    {
        returnValue = F("Leitenbergweg");
        break;
    }
    case 204956:
    {
        returnValue = F("Leitenbuck");
        break;
    }
    case 204957:
    {
        returnValue = F("Leitenbuckstr.");
        break;
    }
    case 204958:
    {
        returnValue = F("Leitendorf");
        break;
    }
    case 204959:
    {
        returnValue = F("Leitenfeld");
        break;
    }
    case 204960:
    {
        returnValue = F("Leitenfeldstr.");
        break;
    }
    case 204961:
    {
        returnValue = F("Leitenfeldweg");
        break;
    }
    case 204962:
    {
        returnValue = F("Leitengasse");
        break;
    }
    case 204963:
    {
        returnValue = F("Leitengraben");
        break;
    }
    case 204964:
    {
        returnValue = F("Leitenhäuser Str.");
        break;
    }
    case 204965:
    {
        returnValue = F("Leitenhöhe");
        break;
    }
    case 204966:
    {
        returnValue = F("Leitenmoos");
        break;
    }
    case 204967:
    {
        returnValue = F("Leitenrainweg");
        break;
    }
    case 204968:
    {
        returnValue = F("Leitensteig");
        break;
    }
    case 204969:
    {
        returnValue = F("Leitensteige");
        break;
    }
    case 204970:
    {
        returnValue = F("Leitenstorfferstr.");
        break;
    }
    case 204971:
    {
        returnValue = F("Leitenstr.");
        break;
    }
    case 204972:
    {
        returnValue = F("Leitenwaldstr.");
        break;
    }
    case 204973:
    {
        returnValue = F("Leitenweg");
        break;
    }
    case 204974:
    {
        returnValue = F("Leitenwiesweg");
        break;
    }
    case 204975:
    {
        returnValue = F("Leitenäcker");
        break;
    }
    case 204976:
    {
        returnValue = F("Leitenäckerstr.");
        break;
    }
    case 204977:
    {
        returnValue = F("Leiterbachstr.");
        break;
    }
    case 204978:
    {
        returnValue = F("Leiterberg");
        break;
    }
    case 204979:
    {
        returnValue = F("Leiterbergstr.");
        break;
    }
    case 204980:
    {
        returnValue = F("Leiterenweg");
        break;
    }
    case 204981:
    {
        returnValue = F("Leitererweg");
        break;
    }
    case 204982:
    {
        returnValue = F("Leitergasse");
        break;
    }
    case 204983:
    {
        returnValue = F("Leiterhausweg");
        break;
    }
    case 204984:
    {
        returnValue = F("Leiterlebodenweg");
        break;
    }
    case 204985:
    {
        returnValue = F("Leitersberg");
        break;
    }
    case 204986:
    {
        returnValue = F("Leitersbergweg");
        break;
    }
    case 204987:
    {
        returnValue = F("Leitershofer Str.");
        break;
    }
    case 204988:
    {
        returnValue = F("Leiterstalstr.");
        break;
    }
    case 204989:
    {
        returnValue = F("Leiterstr.");
        break;
    }
    case 204990:
    {
        returnValue = F("Leitersweilerstr.");
        break;
    }
    case 204991:
    {
        returnValue = F("Leiterweg");
        break;
    }
    case 204992:
    {
        returnValue = F("Leiterzhofen");
        break;
    }
    case 204993:
    {
        returnValue = F("Leitestr.");
        break;
    }
    case 204994:
    {
        returnValue = F("Leiteweg");
        break;
    }
    case 204995:
    {
        returnValue = F("Leitfritz");
        break;
    }
    case 204996:
    {
        returnValue = F("Leitgebweg");
        break;
    }
    case 204997:
    {
        returnValue = F("Leitgering");
        break;
    }
    case 204998:
    {
        returnValue = F("Leitgertsweg");
        break;
    }
    case 204999:
    {
        returnValue = F("Leitgraben");
        break;
    }
    case 205000:
    {
        returnValue = F("Leitgrabenweg");
        break;
    }
    case 205001:
    {
        returnValue = F("Leithe");
        break;
    }
    case 205002:
    {
        returnValue = F("Leitheckenstr.");
        break;
    }
    case 205003:
    {
        returnValue = F("Leithecker Str.");
        break;
    }
    case 205004:
    {
        returnValue = F("Leithen");
        break;
    }
    case 205005:
    {
        returnValue = F("Leithenbauerstr.");
        break;
    }
    case 205006:
    {
        returnValue = F("Leithenbukweg");
        break;
    }
    case 205007:
    {
        returnValue = F("Leithener Feld");
        break;
    }
    case 205008:
    {
        returnValue = F("Leithengasse");
        break;
    }
    case 205009:
    {
        returnValue = F("Leithenstr.");
        break;
    }
    case 205010:
    {
        returnValue = F("Leithenweg");
        break;
    }
    case 205011:
    {
        returnValue = F("Leithenäcker");
        break;
    }
    case 205012:
    {
        returnValue = F("Leithestr.");
        break;
    }
    case 205013:
    {
        returnValue = F("Leithmannswiese");
        break;
    }
    case 205014:
    {
        returnValue = F("Leithof");
        break;
    }
    case 205015:
    {
        returnValue = F("Leitings Stegge");
        break;
    }
    case 205016:
    {
        returnValue = F("Leitingsstiege");
        break;
    }
    case 205017:
    {
        returnValue = F("Leitishofen");
        break;
    }
    case 205018:
    {
        returnValue = F("Leitiweg");
        break;
    }
    case 205019:
    {
        returnValue = F("Leitkrathstr.");
        break;
    }
    case 205020:
    {
        returnValue = F("Leitleinsweg");
        break;
    }
    case 205021:
    {
        returnValue = F("Leitlestr.");
        break;
    }
    case 205022:
    {
        returnValue = F("Leitlitz");
        break;
    }
    case 205023:
    {
        returnValue = F("Leitlitzer Flügel");
        break;
    }
    case 205024:
    {
        returnValue = F("Leitlitzer Str.");
        break;
    }
    case 205025:
    {
        returnValue = F("Leitlstr.");
        break;
    }
    case 205026:
    {
        returnValue = F("Leitlweg");
        break;
    }
    case 205027:
    {
        returnValue = F("Leitmannsplatz");
        break;
    }
    case 205028:
    {
        returnValue = F("Leitmarer Str.");
        break;
    }
    case 205029:
    {
        returnValue = F("Leitmarstr.");
        break;
    }
    case 205030:
    {
        returnValue = F("Leitmeritzer Bogen");
        break;
    }
    case 205031:
    {
        returnValue = F("Leitmeritzer Str.");
        break;
    }
    case 205032:
    {
        returnValue = F("Leitmeritzer Weg");
        break;
    }
    case 205033:
    {
        returnValue = F("Leitnantshof");
        break;
    }
    case 205034:
    {
        returnValue = F("Leitnerbergweg");
        break;
    }
    case 205035:
    {
        returnValue = F("Leitnerfeldstr.");
        break;
    }
    case 205036:
    {
        returnValue = F("Leitnerstr.");
        break;
    }
    case 205037:
    {
        returnValue = F("Leitnerweg");
        break;
    }
    case 205038:
    {
        returnValue = F("Leitplanke geteilt");
        break;
    }
    case 205039:
    {
        returnValue = F("Leitschlagweg");
        break;
    }
    case 205040:
    {
        returnValue = F("Leitschsiedlung");
        break;
    }
    case 205041:
    {
        returnValue = F("Leitschtal");
        break;
    }
    case 205042:
    {
        returnValue = F("Leitschweg");
        break;
    }
    case 205043:
    {
        returnValue = F("Leitstader Weg");
        break;
    }
    case 205044:
    {
        returnValue = F("Leitstetten");
        break;
    }
    case 205045:
    {
        returnValue = F("Leitstr.");
        break;
    }
    case 205046:
    {
        returnValue = F("Leitsweiler Str.");
        break;
    }
    case 205047:
    {
        returnValue = F("Leitungsaufhieb");
        break;
    }
    case 205048:
    {
        returnValue = F("Leitungsweg");
        break;
    }
    case 205049:
    {
        returnValue = F("Leitweg");
        break;
    }
    case 205050:
    {
        returnValue = F("Leitzachstr.");
        break;
    }
    case 205051:
    {
        returnValue = F("Leitzachtalstr.");
        break;
    }
    case 205052:
    {
        returnValue = F("Leitzachweg");
        break;
    }
    case 205053:
    {
        returnValue = F("Leitzachwerkstr.");
        break;
    }
    case 205054:
    {
        returnValue = F("Leitzenfeldstr.");
        break;
    }
    case 205055:
    {
        returnValue = F("Leitzing");
        break;
    }
    case 205056:
    {
        returnValue = F("Leitzkauer Str.");
        break;
    }
    case 205057:
    {
        returnValue = F("Leitzkauer Weg");
        break;
    }
    case 205058:
    {
        returnValue = F("Leitzmannstr.");
        break;
    }
    case 205059:
    {
        returnValue = F("Leitzstr.");
        break;
    }
    case 205060:
    {
        returnValue = F("Leitzweiler");
        break;
    }
    case 205061:
    {
        returnValue = F("Leitzweilerstr.");
        break;
    }
    case 205062:
    {
        returnValue = F("Leiverskamp");
        break;
    }
    case 205063:
    {
        returnValue = F("Leiwasenstr.");
        break;
    }
    case 205064:
    {
        returnValue = F("Leiweg");
        break;
    }
    case 205065:
    {
        returnValue = F("Leiwener Str.");
        break;
    }
    case 205066:
    {
        returnValue = F("Leiwerthalde");
        break;
    }
    case 205067:
    {
        returnValue = F("Leiwertweg");
        break;
    }
    case 205068:
    {
        returnValue = F("Leiwesdamm");
        break;
    }
    case 205069:
    {
        returnValue = F("Leiwiesen");
        break;
    }
    case 205070:
    {
        returnValue = F("Leiwiesenweg");
        break;
    }
    case 205071:
    {
        returnValue = F("Leiwieserstr.");
        break;
    }
    case 205072:
    {
        returnValue = F("Leixenweg");
        break;
    }
    case 205073:
    {
        returnValue = F("Leixnertaferlweg");
        break;
    }
    case 205074:
    {
        returnValue = F("Leizenborn");
        break;
    }
    case 205075:
    {
        returnValue = F("Leißersteg");
        break;
    }
    case 205076:
    {
        returnValue = F("Leißestr.");
        break;
    }
    case 205077:
    {
        returnValue = F("Leißlinger Hauptstr.");
        break;
    }
    case 205078:
    {
        returnValue = F("Leißlinger Pfad");
        break;
    }
    case 205079:
    {
        returnValue = F("Leißnerstr.");
        break;
    }
    case 205080:
    {
        returnValue = F("Leißnitz");
        break;
    }
    case 205081:
    {
        returnValue = F("Leißstr.");
        break;
    }
    case 205082:
    {
        returnValue = F("Leja Richter Str.");
        break;
    }
    case 205083:
    {
        returnValue = F("Lekesgasse");
        break;
    }
    case 205084:
    {
        returnValue = F("Lekkerkerkplatz");
        break;
    }
    case 205085:
    {
        returnValue = F("Lekweg");
        break;
    }
    case 205086:
    {
        returnValue = F("Lelbach A");
        break;
    }
    case 205087:
    {
        returnValue = F("Lelbach B");
        break;
    }
    case 205088:
    {
        returnValue = F("Lelbach C");
        break;
    }
    case 205089:
    {
        returnValue = F("Lelbach D");
        break;
    }
    case 205090:
    {
        returnValue = F("Lelbacher Landstr.");
        break;
    }
    case 205091:
    {
        returnValue = F("Lelbacher Weg");
        break;
    }
    case 205092:
    {
        returnValue = F("Lelefeld");
        break;
    }
    case 205093:
    {
        returnValue = F("Lelerlstr.");
        break;
    }
    case 205094:
    {
        returnValue = F("Lellichower Allee");
        break;
    }
    case 205095:
    {
        returnValue = F("Lellichower Chaussee");
        break;
    }
    case 205096:
    {
        returnValue = F("Lellwanger Str.");
        break;
    }
    case 205097:
    {
        returnValue = F("Lelmweg");
        break;
    }
    case 205098:
    {
        returnValue = F("Leloh");
        break;
    }
    case 205099:
    {
        returnValue = F("Leloher Weg");
        break;
    }
    case 205100:
    {
        returnValue = F("Lelyweg");
        break;
    }
    case 205101:
    {
        returnValue = F("Lemaitrestr.");
        break;
    }
    case 205102:
    {
        returnValue = F("Lembach");
        break;
    }
    case 205103:
    {
        returnValue = F("Lembacher Str.");
        break;
    }
    case 205104:
    {
        returnValue = F("Lembacher Weg");
        break;
    }
    case 205105:
    {
        returnValue = F("Lembecker Str.");
        break;
    }
    case 205106:
    {
        returnValue = F("Lembecker Weg");
        break;
    }
    case 205107:
    {
        returnValue = F("Lembecker Weg / A 5");
        break;
    }
    case 205108:
    {
        returnValue = F("Lembecks Hof");
        break;
    }
    case 205109:
    {
        returnValue = F("Lembeeke");
        break;
    }
    case 205110:
    {
        returnValue = F("Lembekestr.");
        break;
    }
    case 205111:
    {
        returnValue = F("Lembenweg");
        break;
    }
    case 205112:
    {
        returnValue = F("Lembergallee");
        break;
    }
    case 205113:
    {
        returnValue = F("Lembergblick");
        break;
    }
    case 205114:
    {
        returnValue = F("Lemberger Str.");
        break;
    }
    case 205115:
    {
        returnValue = F("Lemberger Weg");
        break;
    }
    case 205116:
    {
        returnValue = F("Lembergerstr.");
        break;
    }
    case 205117:
    {
        returnValue = F("Lembergerweg");
        break;
    }
    case 205118:
    {
        returnValue = F("Lembergstr.");
        break;
    }
    case 205119:
    {
        returnValue = F("Lembergtunnel");
        break;
    }
    case 205120:
    {
        returnValue = F("Lembergweg");
        break;
    }
    case 205121:
    {
        returnValue = F("Lembeyerstr.");
        break;
    }
    case 205122:
    {
        returnValue = F("Lembeyestr.");
        break;
    }
    case 205123:
    {
        returnValue = F("Lembkestr.");
        break;
    }
    case 205124:
    {
        returnValue = F("Lembrucher Str.");
        break;
    }
    case 205125:
    {
        returnValue = F("Lemförder Gärten");
        break;
    }
    case 205126:
    {
        returnValue = F("Lemförder Str.");
        break;
    }
    case 205127:
    {
        returnValue = F("Lemgen Ohr");
        break;
    }
    case 205128:
    {
        returnValue = F("Lemgoer Str.");
        break;
    }
    case 205129:
    {
        returnValue = F("Lemgoer Weg");
        break;
    }
    case 205130:
    {
        returnValue = F("Lemgoweg");
        break;
    }
    case 205131:
    {
        returnValue = F("Lemierser Berg");
        break;
    }
    case 205132:
    {
        returnValue = F("Lemierser Str.");
        break;
    }
    case 205133:
    {
        returnValue = F("Leminger Str.");
        break;
    }
    case 205134:
    {
        returnValue = F("Lemkendorfer Str.");
        break;
    }
    case 205135:
    {
        returnValue = F("Lemkenweg");
        break;
    }
    case 205136:
    {
        returnValue = F("Lemker Berg");
        break;
    }
    case 205137:
    {
        returnValue = F("Lemker Feld");
        break;
    }
    case 205138:
    {
        returnValue = F("Lemker Weg");
        break;
    }
    case 205139:
    {
        returnValue = F("Lemker Wiesen");
        break;
    }
    case 205140:
    {
        returnValue = F("Lemkerheide");
        break;
    }
    case 205141:
    {
        returnValue = F("Lemkestr.");
        break;
    }
    case 205142:
    {
        returnValue = F("Lemle-Moses-Str.");
        break;
    }
    case 205143:
    {
        returnValue = F("Lemlingstr.");
        break;
    }
    case 205144:
    {
        returnValue = F("Lemmeldamm");
        break;
    }
    case 205145:
    {
        returnValue = F("Lemmelweg");
        break;
    }
    case 205146:
    {
        returnValue = F("Lemmermanns Weg");
        break;
    }
    case 205147:
    {
        returnValue = F("Lemmermannweg");
        break;
    }
    case 205148:
    {
        returnValue = F("Lemmersberg");
        break;
    }
    case 205149:
    {
        returnValue = F("Lemmersdorf");
        break;
    }
    case 205150:
    {
        returnValue = F("Lemmesweg");
        break;
    }
    case 205151:
    {
        returnValue = F("Lemmier Bergfeld");
        break;
    }
    case 205152:
    {
        returnValue = F("Lemmier Str.");
        break;
    }
    case 205153:
    {
        returnValue = F("Lemmingstr.");
        break;
    }
    case 205154:
    {
        returnValue = F("Lemnitzer Str.");
        break;
    }
    case 205155:
    {
        returnValue = F("Lemnitzer Weg");
        break;
    }
    case 205156:
    {
        returnValue = F("Lemnitztal");
        break;
    }
    case 205157:
    {
        returnValue = F("Lempdeser Str.");
        break;
    }
    case 205158:
    {
        returnValue = F("Lempenmühlweg");
        break;
    }
    case 205159:
    {
        returnValue = F("Lempenseite");
        break;
    }
    case 205160:
    {
        returnValue = F("Lempenweg");
        break;
    }
    case 205161:
    {
        returnValue = F("Lemper Str.");
        break;
    }
    case 205162:
    {
        returnValue = F("Lempeweg");
        break;
    }
    case 205163:
    {
        returnValue = F("Lemppstr.");
        break;
    }
    case 205164:
    {
        returnValue = F("Lempstr.");
        break;
    }
    case 205165:
    {
        returnValue = F("Lemptalradweg");
        break;
    }
    case 205166:
    {
        returnValue = F("Lemsahler Weg");
        break;
    }
    case 205167:
    {
        returnValue = F("Lemscheheide");
        break;
    }
    case 205168:
    {
        returnValue = F("Lemsdorfer Weg");
        break;
    }
    case 205169:
    {
        returnValue = F("Lemseler Str.");
        break;
    }
    case 205170:
    {
        returnValue = F("Lemseler Weg");
        break;
    }
    case 205171:
    {
        returnValue = F("Lemwerderstr.");
        break;
    }
    case 205172:
    {
        returnValue = F("Lena-Christ-Ring");
        break;
    }
    case 205173:
    {
        returnValue = F("Lena-Christ-Str.");
        break;
    }
    case 205174:
    {
        returnValue = F("Lena-Christ-Weg");
        break;
    }
    case 205175:
    {
        returnValue = F("Lena-Heim-Str.");
        break;
    }
    case 205176:
    {
        returnValue = F("Lena-Lappe-Str.");
        break;
    }
    case 205177:
    {
        returnValue = F("Lena-Nüssing-Str.");
        break;
    }
    case 205178:
    {
        returnValue = F("Lena-Schröder-Weg");
        break;
    }
    case 205179:
    {
        returnValue = F("Lena-Wies-Ring");
        break;
    }
    case 205180:
    {
        returnValue = F("Lenabergweg");
        break;
    }
    case 205181:
    {
        returnValue = F("Lenau");
        break;
    }
    case 205182:
    {
        returnValue = F("Lenauer Str.");
        break;
    }
    case 205183:
    {
        returnValue = F("Lenauplatz");
        break;
    }
    case 205184:
    {
        returnValue = F("Lenauring");
        break;
    }
    case 205185:
    {
        returnValue = F("Lenaustr.");
        break;
    }
    case 205186:
    {
        returnValue = F("Lenauweg");
        break;
    }
    case 205187:
    {
        returnValue = F("Lenaweg");
        break;
    }
    case 205188:
    {
        returnValue = F("Lenbachallee");
        break;
    }
    case 205189:
    {
        returnValue = F("Lenbachpfad");
        break;
    }
    case 205190:
    {
        returnValue = F("Lenbachplatz");
        break;
    }
    case 205191:
    {
        returnValue = F("Lenbachstr.");
        break;
    }
    case 205192:
    {
        returnValue = F("Lenbachweg");
        break;
    }
    case 205193:
    {
        returnValue = F("Lenchen-Weber-Str.");
        break;
    }
    case 205194:
    {
        returnValue = F("Lenchenstr.");
        break;
    }
    case 205195:
    {
        returnValue = F("Lenckweg");
        break;
    }
    case 205196:
    {
        returnValue = F("Lend");
        break;
    }
    case 205197:
    {
        returnValue = F("Lendel");
        break;
    }
    case 205198:
    {
        returnValue = F("Lendelallee");
        break;
    }
    case 205199:
    {
        returnValue = F("Lendelfinger Weg");
        break;
    }
    case 205200:
    {
        returnValue = F("Lendelweg");
        break;
    }
    case 205201:
    {
        returnValue = F("Lendenbreede");
        break;
    }
    case 205202:
    {
        returnValue = F("Lendenstreichstr.");
        break;
    }
    case 205203:
    {
        returnValue = F("Lendenweg");
        break;
    }
    case 205204:
    {
        returnValue = F("Lendern Feld");
        break;
    }
    case 205205:
    {
        returnValue = F("Lenderner Str.");
        break;
    }
    case 205206:
    {
        returnValue = F("Lendernweg");
        break;
    }
    case 205207:
    {
        returnValue = F("Lenders");
        break;
    }
    case 205208:
    {
        returnValue = F("Lendersbergstr.");
        break;
    }
    case 205209:
    {
        returnValue = F("Lenderscheider Str.");
        break;
    }
    case 205210:
    {
        returnValue = F("Lendersdorfer Str.");
        break;
    }
    case 205211:
    {
        returnValue = F("Lenderstr.");
        break;
    }
    case 205212:
    {
        returnValue = F("Lenderswaldweg");
        break;
    }
    case 205213:
    {
        returnValue = F("Lendersweg");
        break;
    }
    case 205214:
    {
        returnValue = F("Lendertberg");
        break;
    }
    case 205215:
    {
        returnValue = F("Lendl-Geräumt");
        break;
    }
    case 205216:
    {
        returnValue = F("Lendnerstr.");
        break;
    }
    case 205217:
    {
        returnValue = F("Lendorfer Str.");
        break;
    }
    case 205218:
    {
        returnValue = F("Lendringhausen");
        break;
    }
    case 205219:
    {
        returnValue = F("Lendringser Str.");
        break;
    }
    case 205220:
    {
        returnValue = F("Lendringser Weg");
        break;
    }
    case 205221:
    {
        returnValue = F("Lendsiedler Str.");
        break;
    }
    case 205222:
    {
        returnValue = F("Lendstr.");
        break;
    }
    case 205223:
    {
        returnValue = F("Lene Weg");
        break;
    }
    case 205224:
    {
        returnValue = F("Lene-Glatzer-Str.");
        break;
    }
    case 205225:
    {
        returnValue = F("Lene-Reklat-Park");
        break;
    }
    case 205226:
    {
        returnValue = F("Lene-Veits-Weg");
        break;
    }
    case 205227:
    {
        returnValue = F("Lene-Voigt-Str.");
        break;
    }
    case 205228:
    {
        returnValue = F("Lenensruhe");
        break;
    }
    case 205229:
    {
        returnValue = F("Lenensruher Weg");
        break;
    }
    case 205230:
    {
        returnValue = F("Lenenweg");
        break;
    }
    case 205231:
    {
        returnValue = F("Lenethunweg");
        break;
    }
    case 205232:
    {
        returnValue = F("Lenferts Weg");
        break;
    }
    case 205233:
    {
        returnValue = F("Lengatz");
        break;
    }
    case 205234:
    {
        returnValue = F("Lengberg");
        break;
    }
    case 205235:
    {
        returnValue = F("Lengder Str.");
        break;
    }
    case 205236:
    {
        returnValue = F("Lengdorfer Ring");
        break;
    }
    case 205237:
    {
        returnValue = F("Lengdorfer Str.");
        break;
    }
    case 205238:
    {
        returnValue = F("Lengeder Weg");
        break;
    }
    case 205239:
    {
        returnValue = F("Lengefelder Str.");
        break;
    }
    case 205240:
    {
        returnValue = F("Lengefelder Tal");
        break;
    }
    case 205241:
    {
        returnValue = F("Lengefelder Warte");
        break;
    }
    case 205242:
    {
        returnValue = F("Lengefelder Weg");
        break;
    }
    case 205243:
    {
        returnValue = F("Lengefeldstr.");
        break;
    }
    case 205244:
    {
        returnValue = F("Lengelscheider Wirtschaftsweg");
        break;
    }
    case 205245:
    {
        returnValue = F("Lengelshof");
        break;
    }
    case 205246:
    {
        returnValue = F("Lengeltal");
        break;
    }
    case 205247:
    {
        returnValue = F("Lengeltalstr.");
        break;
    }
    case 205248:
    {
        returnValue = F("Lengenbachweg");
        break;
    }
    case 205249:
    {
        returnValue = F("Lengenbeck");
        break;
    }
    case 205250:
    {
        returnValue = F("Lengenfeld");
        break;
    }
    case 205251:
    {
        returnValue = F("Lengenfelder Str.");
        break;
    }
    case 205252:
    {
        returnValue = F("Lengenfelder Weg");
        break;
    }
    case 205253:
    {
        returnValue = F("Lengenfeldstr.");
        break;
    }
    case 205254:
    {
        returnValue = F("Lengenhardtweg");
        break;
    }
    case 205255:
    {
        returnValue = F("Lengenlocher Str.");
        break;
    }
    case 205256:
    {
        returnValue = F("Lengenlocherweg");
        break;
    }
    case 205257:
    {
        returnValue = F("Lengenrieder Str.");
        break;
    }
    case 205258:
    {
        returnValue = F("Lengentalstr.");
        break;
    }
    case 205259:
    {
        returnValue = F("Lengenwanger Str.");
        break;
    }
    case 205260:
    {
        returnValue = F("Lengenweiler");
        break;
    }
    case 205261:
    {
        returnValue = F("Lengenweiler Str.");
        break;
    }
    case 205262:
    {
        returnValue = F("Lengerfeldweg");
        break;
    }
    case 205263:
    {
        returnValue = F("Lengerheide");
        break;
    }
    case 205264:
    {
        returnValue = F("Lengericher Damm");
        break;
    }
    case 205265:
    {
        returnValue = F("Lengericher Landstr.");
        break;
    }
    case 205266:
    {
        returnValue = F("Lengericher Str.");
        break;
    }
    case 205267:
    {
        returnValue = F("Lengericher Weg");
        break;
    }
    case 205268:
    {
        returnValue = F("Lengermühle");
        break;
    }
    case 205269:
    {
        returnValue = F("Lengers Kämpchen");
        break;
    }
    case 205270:
    {
        returnValue = F("Lengerser Rain");
        break;
    }
    case 205271:
    {
        returnValue = F("Lengerser Str.");
        break;
    }
    case 205272:
    {
        returnValue = F("Lengertenweg");
        break;
    }
    case 205273:
    {
        returnValue = F("Lengertshofen");
        break;
    }
    case 205274:
    {
        returnValue = F("Lengertstr.");
        break;
    }
    case 205275:
    {
        returnValue = F("Lengertweg");
        break;
    }
    case 205276:
    {
        returnValue = F("Lengesstr.");
        break;
    }
    case 205277:
    {
        returnValue = F("Lengfeld");
        break;
    }
    case 205278:
    {
        returnValue = F("Lengfelder Höh");
        break;
    }
    case 205279:
    {
        returnValue = F("Lengfelder Landwehr");
        break;
    }
    case 205280:
    {
        returnValue = F("Lengfelder Str.");
        break;
    }
    case 205281:
    {
        returnValue = F("Lengfelder Weg");
        break;
    }
    case 205282:
    {
        returnValue = F("Lengfelderweg");
        break;
    }
    case 205283:
    {
        returnValue = F("Lengfeldstr.");
        break;
    }
    case 205284:
    {
        returnValue = F("Lengfurter Str.");
        break;
    }
    case 205285:
    {
        returnValue = F("Lenggenstr.");
        break;
    }
    case 205286:
    {
        returnValue = F("Lenggrieser Str.");
        break;
    }
    case 205287:
    {
        returnValue = F("Lenglerner Str.");
        break;
    }
    case 205288:
    {
        returnValue = F("Lenglinger Str.");
        break;
    }
    case 205289:
    {
        returnValue = F("Lengloher Str.");
        break;
    }
    case 205290:
    {
        returnValue = F("Lengmooser Weg");
        break;
    }
    case 205291:
    {
        returnValue = F("Lengsdorfer Hauptstr.");
        break;
    }
    case 205292:
    {
        returnValue = F("Lengsdorfer Str.");
        break;
    }
    case 205293:
    {
        returnValue = F("Lengsfelder Str.");
        break;
    }
    case 205294:
    {
        returnValue = F("Lengsfelder Weg");
        break;
    }
    case 205295:
    {
        returnValue = F("Lengsfeldergasse");
        break;
    }
    case 205296:
    {
        returnValue = F("Lengtal");
        break;
    }
    case 205297:
    {
        returnValue = F("Lengthaler Str.");
        break;
    }
    case 205298:
    {
        returnValue = F("Lenhartzhammer");
        break;
    }
    case 205299:
    {
        returnValue = F("Lenhartzweg");
        break;
    }
    case 205300:
    {
        returnValue = F("Lenhausenweg");
        break;
    }
    case 205301:
    {
        returnValue = F("Lenhauser Str.");
        break;
    }
    case 205302:
    {
        returnValue = F("Leni-Braunmüller-Str.");
        break;
    }
    case 205303:
    {
        returnValue = F("Leni-Fischer-Str.");
        break;
    }
    case 205304:
    {
        returnValue = F("Leni-Hirsch-Weg");
        break;
    }
    case 205305:
    {
        returnValue = F("Leni-Matthaei-Weg");
        break;
    }
    case 205306:
    {
        returnValue = F("Leni-Neuenschwander-Str.");
        break;
    }
    case 205307:
    {
        returnValue = F("Leni-Valk-Str.");
        break;
    }
    case 205308:
    {
        returnValue = F("Leni-Wollenhaupt-Str.");
        break;
    }
    case 205309:
    {
        returnValue = F("Leninallee");
        break;
    }
    case 205310:
    {
        returnValue = F("Leningrader Str.");
        break;
    }
    case 205311:
    {
        returnValue = F("Leninplatz");
        break;
    }
    case 205312:
    {
        returnValue = F("Leninring");
        break;
    }
    case 205313:
    {
        returnValue = F("Leninsiedlung");
        break;
    }
    case 205314:
    {
        returnValue = F("Leninstr.");
        break;
    }
    case 205315:
    {
        returnValue = F("Lenkaweg");
        break;
    }
    case 205316:
    {
        returnValue = F("Lenke-Schlesinger-Str.");
        break;
    }
    case 205317:
    {
        returnValue = F("Lenkenauer Weg");
        break;
    }
    case 205318:
    {
        returnValue = F("Lenkensweg");
        break;
    }
    case 205319:
    {
        returnValue = F("Lenkerbecker Weg");
        break;
    }
    case 205320:
    {
        returnValue = F("Lenkersdorfer Str.");
        break;
    }
    case 205321:
    {
        returnValue = F("Lenkershof");
        break;
    }
    case 205322:
    {
        returnValue = F("Lenkerweg");
        break;
    }
    case 205323:
    {
        returnValue = F("Lenkeweg");
        break;
    }
    case 205324:
    {
        returnValue = F("Lenkgasse");
        break;
    }
    case 205325:
    {
        returnValue = F("Lenkstr.");
        break;
    }
    case 205326:
    {
        returnValue = F("Lenkweg");
        break;
    }
    case 205327:
    {
        returnValue = F("Lennacher Str.");
        break;
    }
    case 205328:
    {
        returnValue = F("Lennacher Weg");
        break;
    }
    case 205329:
    {
        returnValue = F("Lennarzstr.");
        break;
    }
    case 205330:
    {
        returnValue = F("Lenne");
        break;
    }
    case 205331:
    {
        returnValue = F("Lenne-Freizeitweg");
        break;
    }
    case 205332:
    {
        returnValue = F("Lennebergplatz");
        break;
    }
    case 205333:
    {
        returnValue = F("Lennebergstr.");
        break;
    }
    case 205334:
    {
        returnValue = F("Lenneblick");
        break;
    }
    case 205335:
    {
        returnValue = F("Lennebrokstr.");
        break;
    }
    case 205336:
    {
        returnValue = F("Lennebrücke");
        break;
    }
    case 205337:
    {
        returnValue = F("Lenneckenkrom");
        break;
    }
    case 205338:
    {
        returnValue = F("Lennedamm");
        break;
    }
    case 205339:
    {
        returnValue = F("Lennefeldstr.");
        break;
    }
    case 205340:
    {
        returnValue = F("Lennefer Mühle");
        break;
    }
    case 205341:
    {
        returnValue = F("Lennepark");
        break;
    }
    case 205342:
    {
        returnValue = F("Lenneper Str.");
        break;
    }
    case 205343:
    {
        returnValue = F("Lenneplatform");
        break;
    }
    case 205344:
    {
        returnValue = F("Lenneplatz");
        break;
    }
    case 205345:
    {
        returnValue = F("Lenneplätze");
        break;
    }
    case 205346:
    {
        returnValue = F("Lennepromenade");
        break;
    }
    case 205347:
    {
        returnValue = F("Lenner Schulweg");
        break;
    }
    case 205348:
    {
        returnValue = F("Lenner Str.");
        break;
    }
    case 205349:
    {
        returnValue = F("Lennesrieth");
        break;
    }
    case 205350:
    {
        returnValue = F("Lennesteinstr.");
        break;
    }
    case 205351:
    {
        returnValue = F("Lennestr.");
        break;
    }
    case 205352:
    {
        returnValue = F("Lennesweg");
        break;
    }
    case 205353:
    {
        returnValue = F("Lennetalstr.");
        break;
    }
    case 205354:
    {
        returnValue = F("Lenneuferstr.");
        break;
    }
    case 205355:
    {
        returnValue = F("Lenneweg");
        break;
    }
    case 205356:
    {
        returnValue = F("Lennewiesen");
        break;
    }
    case 205357:
    {
        returnValue = F("Lennewitzer Chaussee");
        break;
    }
    case 205358:
    {
        returnValue = F("Lennewitzer Dorfstr.");
        break;
    }
    case 205359:
    {
        returnValue = F("Lennewitzer Str.");
        break;
    }
    case 205360:
    {
        returnValue = F("Lennförder Weg");
        break;
    }
    case 205361:
    {
        returnValue = F("Lennierweg");
        break;
    }
    case 205362:
    {
        returnValue = F("Lenniggasse");
        break;
    }
    case 205363:
    {
        returnValue = F("Lennigstr.");
        break;
    }
    case 205364:
    {
        returnValue = F("Lennigweg");
        break;
    }
    case 205365:
    {
        returnValue = F("Lenninger Steig Weg");
        break;
    }
    case 205366:
    {
        returnValue = F("Lenninger Str.");
        break;
    }
    case 205367:
    {
        returnValue = F("Lenninghof");
        break;
    }
    case 205368:
    {
        returnValue = F("Lenningser Str.");
        break;
    }
    case 205369:
    {
        returnValue = F("Lenné Weg");
        break;
    }
    case 205370:
    {
        returnValue = F("Lenné-Park");
        break;
    }
    case 205371:
    {
        returnValue = F("Lenné-Weg");
        break;
    }
    case 205372:
    {
        returnValue = F("Lennéplatz");
        break;
    }
    case 205373:
    {
        returnValue = F("Lennésches Lindenrondell");
        break;
    }
    case 205374:
    {
        returnValue = F("Lennéstr.");
        break;
    }
    case 205375:
    {
        returnValue = F("Lenoirstr.");
        break;
    }
    case 205376:
    {
        returnValue = F("Lenorenweg");
        break;
    }
    case 205377:
    {
        returnValue = F("Lenottengasse");
        break;
    }
    case 205378:
    {
        returnValue = F("Lensahner Str.");
        break;
    }
    case 205379:
    {
        returnValue = F("Lensahner Weg");
        break;
    }
    case 205380:
    {
        returnValue = F("Lensbachstr.");
        break;
    }
    case 205381:
    {
        returnValue = F("Lensbachweg");
        break;
    }
    case 205382:
    {
        returnValue = F("Lenscheid");
        break;
    }
    case 205383:
    {
        returnValue = F("Lenscheider Str.");
        break;
    }
    case 205384:
    {
        returnValue = F("Lenschower Weg");
        break;
    }
    case 205385:
    {
        returnValue = F("Lenschstr.");
        break;
    }
    case 205386:
    {
        returnValue = F("Lenschweg");
        break;
    }
    case 205387:
    {
        returnValue = F("Lensergasse");
        break;
    }
    case 205388:
    {
        returnValue = F("Lensianer Weg");
        break;
    }
    case 205389:
    {
        returnValue = F("Lensingsweg");
        break;
    }
    case 205390:
    {
        returnValue = F("Lenssenstr.");
        break;
    }
    case 205391:
    {
        returnValue = F("Lenster Weg");
        break;
    }
    case 205392:
    {
        returnValue = F("Lentenau");
        break;
    }
    case 205393:
    {
        returnValue = F("Lentenauer Weg");
        break;
    }
    case 205394:
    {
        returnValue = F("Lenterbachsweg");
        break;
    }
    case 205395:
    {
        returnValue = F("Lentersdorfer Weg");
        break;
    }
    case 205396:
    {
        returnValue = F("Lentersheim");
        break;
    }
    case 205397:
    {
        returnValue = F("Lentersheimer Str.");
        break;
    }
    case 205398:
    {
        returnValue = F("Lentersweiler Str.");
        break;
    }
    case 205399:
    {
        returnValue = F("Lenteröder Str.");
        break;
    }
    case 205400:
    {
        returnValue = F("Lenteweg");
        break;
    }
    case 205401:
    {
        returnValue = F("Lentfriedstr.");
        break;
    }
    case 205402:
    {
        returnValue = F("Lentföhrdener Str.");
        break;
    }
    case 205403:
    {
        returnValue = F("Lentföhrdener Weg");
        break;
    }
    case 205404:
    {
        returnValue = F("Lentgartenring");
        break;
    }
    case 205405:
    {
        returnValue = F("Lenthehof");
        break;
    }
    case 205406:
    {
        returnValue = F("Lenther Str.");
        break;
    }
    case 205407:
    {
        returnValue = F("Lenthestr.");
        break;
    }
    case 205408:
    {
        returnValue = F("Lentinger Mühle");
        break;
    }
    case 205409:
    {
        returnValue = F("Lentinger Str.");
        break;
    }
    case 205410:
    {
        returnValue = F("Lentkestr.");
        break;
    }
    case 205411:
    {
        returnValue = F("Lentner Weg");
        break;
    }
    case 205412:
    {
        returnValue = F("Lentnerweg");
        break;
    }
    case 205413:
    {
        returnValue = F("Lentruper Ring");
        break;
    }
    case 205414:
    {
        returnValue = F("Lentschow");
        break;
    }
    case 205415:
    {
        returnValue = F("Lentstr.");
        break;
    }
    case 205416:
    {
        returnValue = F("Lentzallee");
        break;
    }
    case 205417:
    {
        returnValue = F("Lentzen Gestell");
        break;
    }
    case 205418:
    {
        returnValue = F("Lentzenweg");
        break;
    }
    case 205419:
    {
        returnValue = F("Lentzeplatz");
        break;
    }
    case 205420:
    {
        returnValue = F("Lentzestr.");
        break;
    }
    case 205421:
    {
        returnValue = F("Lentzker Str.");
        break;
    }
    case 205422:
    {
        returnValue = F("Lentzker Weg");
        break;
    }
    case 205423:
    {
        returnValue = F("Lentzlohne");
        break;
    }
    case 205424:
    {
        returnValue = F("Lentzstr.");
        break;
    }
    case 205425:
    {
        returnValue = F("Lenus-Mars-Str.");
        break;
    }
    case 205426:
    {
        returnValue = F("Lenz");
        break;
    }
    case 205427:
    {
        returnValue = F("Lenz I");
        break;
    }
    case 205428:
    {
        returnValue = F("Lenzbauerweg");
        break;
    }
    case 205429:
    {
        returnValue = F("Lenzbergstr.");
        break;
    }
    case 205430:
    {
        returnValue = F("Lenzbrück");
        break;
    }
    case 205431:
    {
        returnValue = F("Lenzburger Str.");
        break;
    }
    case 205432:
    {
        returnValue = F("Lenzegasse");
        break;
    }
    case 205433:
    {
        returnValue = F("Lenzenbachstr.");
        break;
    }
    case 205434:
    {
        returnValue = F("Lenzenbergstr.");
        break;
    }
    case 205435:
    {
        returnValue = F("Lenzenbergweg");
        break;
    }
    case 205436:
    {
        returnValue = F("Lenzenbühlweg");
        break;
    }
    case 205437:
    {
        returnValue = F("Lenzener Chaussee");
        break;
    }
    case 205438:
    {
        returnValue = F("Lenzener Str.");
        break;
    }
    case 205439:
    {
        returnValue = F("Lenzener Weg");
        break;
    }
    case 205440:
    {
        returnValue = F("Lenzengarten");
        break;
    }
    case 205441:
    {
        returnValue = F("Lenzengasse");
        break;
    }
    case 205442:
    {
        returnValue = F("Lenzenhecke");
        break;
    }
    case 205443:
    {
        returnValue = F("Lenzenhof");
        break;
    }
    case 205444:
    {
        returnValue = F("Lenzenhoftannenweg");
        break;
    }
    case 205445:
    {
        returnValue = F("Lenzenhöfe");
        break;
    }
    case 205446:
    {
        returnValue = F("Lenzenmühle");
        break;
    }
    case 205447:
    {
        returnValue = F("Lenzenpfad");
        break;
    }
    case 205448:
    {
        returnValue = F("Lenzensteigle");
        break;
    }
    case 205449:
    {
        returnValue = F("Lenzenstr.");
        break;
    }
    case 205450:
    {
        returnValue = F("Lenzenstück");
        break;
    }
    case 205451:
    {
        returnValue = F("Lenzenweg");
        break;
    }
    case 205452:
    {
        returnValue = F("Lenzer Landstr.");
        break;
    }
    case 205453:
    {
        returnValue = F("Lenzer Str.");
        break;
    }
    case 205454:
    {
        returnValue = F("Lenzer Weg");
        break;
    }
    case 205455:
    {
        returnValue = F("Lenzersdorf");
        break;
    }
    case 205456:
    {
        returnValue = F("Lenzgasse");
        break;
    }
    case 205457:
    {
        returnValue = F("Lenzgraben");
        break;
    }
    case 205458:
    {
        returnValue = F("Lenzhahner Weg");
        break;
    }
    case 205459:
    {
        returnValue = F("Lenzhalde");
        break;
    }
    case 205460:
    {
        returnValue = F("Lenzheck");
        break;
    }
    case 205461:
    {
        returnValue = F("Lenzholzer Gasse");
        break;
    }
    case 205462:
    {
        returnValue = F("Lenzholzer Str.");
        break;
    }
    case 205463:
    {
        returnValue = F("Lenzholzer Wiese");
        break;
    }
    case 205464:
    {
        returnValue = F("Lenzhuberweg");
        break;
    }
    case 205465:
    {
        returnValue = F("Lenzingkeller");
        break;
    }
    case 205466:
    {
        returnValue = F("Lenzkamp");
        break;
    }
    case 205467:
    {
        returnValue = F("Lenzkircher Str.");
        break;
    }
    case 205468:
    {
        returnValue = F("Lenzkircher Weg");
        break;
    }
    case 205469:
    {
        returnValue = F("Lenzmannstr.");
        break;
    }
    case 205470:
    {
        returnValue = F("Lenzmühlstr.");
        break;
    }
    case 205471:
    {
        returnValue = F("Lenzrain");
        break;
    }
    case 205472:
    {
        returnValue = F("Lenzstr.");
        break;
    }
    case 205473:
    {
        returnValue = F("Lenzweg");
        break;
    }
    case 205474:
    {
        returnValue = F("Lenzwies");
        break;
    }
    case 205475:
    {
        returnValue = F("Lenßenstr.");
        break;
    }
    case 205476:
    {
        returnValue = F("Leo Tendler Anlage");
        break;
    }
    case 205477:
    {
        returnValue = F("Leo Trotzki Allee");
        break;
    }
    case 205478:
    {
        returnValue = F("Leo-Baeck-Str.");
        break;
    }
    case 205479:
    {
        returnValue = F("Leo-Baer-Str.");
        break;
    }
    case 205480:
    {
        returnValue = F("Leo-Bauer-Str.");
        break;
    }
    case 205481:
    {
        returnValue = F("Leo-Beringer-Str.");
        break;
    }
    case 205482:
    {
        returnValue = F("Leo-Blech-Str.");
        break;
    }
    case 205483:
    {
        returnValue = F("Leo-Bontenackels-Str.");
        break;
    }
    case 205484:
    {
        returnValue = F("Leo-Breuer-Weg");
        break;
    }
    case 205485:
    {
        returnValue = F("Leo-Corsten-Str.");
        break;
    }
    case 205486:
    {
        returnValue = F("Leo-Drenkard-Str.");
        break;
    }
    case 205487:
    {
        returnValue = F("Leo-Ernst-Weg");
        break;
    }
    case 205488:
    {
        returnValue = F("Leo-Fahlenbock-Str.");
        break;
    }
    case 205489:
    {
        returnValue = F("Leo-Falk-Str.");
        break;
    }
    case 205490:
    {
        returnValue = F("Leo-Fall-Str.");
        break;
    }
    case 205491:
    {
        returnValue = F("Leo-Faller-Str.");
        break;
    }
    case 205492:
    {
        returnValue = F("Leo-Faustmann-Str.");
        break;
    }
    case 205493:
    {
        returnValue = F("Leo-Fischer-Str.");
        break;
    }
    case 205494:
    {
        returnValue = F("Leo-Friedrich-Str.");
        break;
    }
    case 205495:
    {
        returnValue = F("Leo-Frobenius-Str.");
        break;
    }
    case 205496:
    {
        returnValue = F("Leo-Grewenig-Str.");
        break;
    }
    case 205497:
    {
        returnValue = F("Leo-Günder-Str.");
        break;
    }
    case 205498:
    {
        returnValue = F("Leo-Hauck-Str.");
        break;
    }
    case 205499:
    {
        returnValue = F("Leo-Heilig-Weg");
        break;
    }
    case 205500:
    {
        returnValue = F("Leo-Heinrichs-Weg");
        break;
    }
    case 205501:
    {
        returnValue = F("Leo-Hendrik Baekeland-Brücke");
        break;
    }
    case 205502:
    {
        returnValue = F("Leo-Hendrik-Baekeland-Str.");
        break;
    }
    case 205503:
    {
        returnValue = F("Leo-Herwegen-Str.");
        break;
    }
    case 205504:
    {
        returnValue = F("Leo-Hämmerle-Str.");
        break;
    }
    case 205505:
    {
        returnValue = F("Leo-Höxter-Str.");
        break;
    }
    case 205506:
    {
        returnValue = F("Leo-Jobst-Weg");
        break;
    }
    case 205507:
    {
        returnValue = F("Leo-Katzmeier-Str.");
        break;
    }
    case 205508:
    {
        returnValue = F("Leo-Klever-Str.");
        break;
    }
    case 205509:
    {
        returnValue = F("Leo-Koch-Str.");
        break;
    }
    case 205510:
    {
        returnValue = F("Leo-Kolb-Weg");
        break;
    }
    case 205511:
    {
        returnValue = F("Leo-Koppel-Str.");
        break;
    }
    case 205512:
    {
        returnValue = F("Leo-Lang-Str.");
        break;
    }
    case 205513:
    {
        returnValue = F("Leo-Loeb-Str.");
        break;
    }
    case 205514:
    {
        returnValue = F("Leo-Lutz-Str.");
        break;
    }
    case 205515:
    {
        returnValue = F("Leo-Löwenthal-Str.");
        break;
    }
    case 205516:
    {
        returnValue = F("Leo-Lüüs-Str.");
        break;
    }
    case 205517:
    {
        returnValue = F("Leo-Meurer-Weg");
        break;
    }
    case 205518:
    {
        returnValue = F("Leo-Meuser-Str.");
        break;
    }
    case 205519:
    {
        returnValue = F("Leo-Müller-Str.");
        break;
    }
    case 205520:
    {
        returnValue = F("Leo-Nußbaum-Str.");
        break;
    }
    case 205521:
    {
        returnValue = F("Leo-Putz-Weg");
        break;
    }
    case 205522:
    {
        returnValue = F("Leo-Sachse-Str.");
        break;
    }
    case 205523:
    {
        returnValue = F("Leo-Sandel-Str.");
        break;
    }
    case 205524:
    {
        returnValue = F("Leo-Saurer-Str.");
        break;
    }
    case 205525:
    {
        returnValue = F("Leo-Schneemann-Str.");
        break;
    }
    case 205526:
    {
        returnValue = F("Leo-Schulte-Str.");
        break;
    }
    case 205527:
    {
        returnValue = F("Leo-Schäffler-Ring");
        break;
    }
    case 205528:
    {
        returnValue = F("Leo-Schönbach-Weg");
        break;
    }
    case 205529:
    {
        returnValue = F("Leo-Slezak-Str.");
        break;
    }
    case 205530:
    {
        returnValue = F("Leo-Spaeth-Weg");
        break;
    }
    case 205531:
    {
        returnValue = F("Leo-Statz-Str.");
        break;
    }
    case 205532:
    {
        returnValue = F("Leo-Statz-Weg");
        break;
    }
    case 205533:
    {
        returnValue = F("Leo-Stausberg-Str.");
        break;
    }
    case 205534:
    {
        returnValue = F("Leo-Steiger-Str.");
        break;
    }
    case 205535:
    {
        returnValue = F("Leo-Sternberg-Str.");
        break;
    }
    case 205536:
    {
        returnValue = F("Leo-Strauß-Str.");
        break;
    }
    case 205537:
    {
        returnValue = F("Leo-Tolstoi-Str.");
        break;
    }
    case 205538:
    {
        returnValue = F("Leo-Tolstoi-Weg");
        break;
    }
    case 205539:
    {
        returnValue = F("Leo-Trepp-Str.");
        break;
    }
    case 205540:
    {
        returnValue = F("Leo-Töller-Str.");
        break;
    }
    case 205541:
    {
        returnValue = F("Leo-Veth-Str.");
        break;
    }
    case 205542:
    {
        returnValue = F("Leo-Villinger-Weg");
        break;
    }
    case 205543:
    {
        returnValue = F("Leo-Weismantel-Str.");
        break;
    }
    case 205544:
    {
        returnValue = F("Leo-Wenke-Str.");
        break;
    }
    case 205545:
    {
        returnValue = F("Leo-Wohleb-Str.");
        break;
    }
    case 205546:
    {
        returnValue = F("Leo-Wohleb-Weg");
        break;
    }
    case 205547:
    {
        returnValue = F("Leo-Wolpert-Str.");
        break;
    }
    case 205548:
    {
        returnValue = F("Leo-von-Klenze-Ring");
        break;
    }
    case 205549:
    {
        returnValue = F("Leo-von-Klenze-Str.");
        break;
    }
    case 205550:
    {
        returnValue = F("Leo-von-Welden-Weg");
        break;
    }
    case 205551:
    {
        returnValue = F("LeoCenter");
        break;
    }
    case 205552:
    {
        returnValue = F("Leobadstr.");
        break;
    }
    case 205553:
    {
        returnValue = F("Leobendorfer Str.");
        break;
    }
    case 205554:
    {
        returnValue = F("Leobschützer Str.");
        break;
    }
    case 205555:
    {
        returnValue = F("Leodegarigasse");
        break;
    }
    case 205556:
    {
        returnValue = F("Leodegarstr.");
        break;
    }
    case 205557:
    {
        returnValue = F("Leofelser Str.");
        break;
    }
    case 205558:
    {
        returnValue = F("Leofelsstr.");
        break;
    }
    case 205559:
    {
        returnValue = F("Leoheimweg");
        break;
    }
    case 205560:
    {
        returnValue = F("Leon-Bukofzer-Str.");
        break;
    }
    case 205561:
    {
        returnValue = F("Leon-Gonczarowski-Str.");
        break;
    }
    case 205562:
    {
        returnValue = F("Leon-Schmalzbach-Weg");
        break;
    }
    case 205563:
    {
        returnValue = F("Leonard-Bernstein-Ring");
        break;
    }
    case 205564:
    {
        returnValue = F("Leonard-Bernstein-Weg");
        break;
    }
    case 205565:
    {
        returnValue = F("Leonard-Heid-Str.");
        break;
    }
    case 205566:
    {
        returnValue = F("Leonard-Linkow-Str.");
        break;
    }
    case 205567:
    {
        returnValue = F("Leonard-Nelson-Str.");
        break;
    }
    case 205568:
    {
        returnValue = F("Leonard-Walter-Str.");
        break;
    }
    case 205569:
    {
        returnValue = F("Leonardo-da-Vinci-Platz");
        break;
    }
    case 205570:
    {
        returnValue = F("Leonardo-da-Vinci-Str.");
        break;
    }
    case 205571:
    {
        returnValue = F("Leonardo-da-Vinci-Weg");
        break;
    }
    case 205572:
    {
        returnValue = F("Leonardskamp");
        break;
    }
    case 205573:
    {
        returnValue = F("Leonardstr.");
        break;
    }
    case 205574:
    {
        returnValue = F("Leonardusstr.");
        break;
    }
    case 205575:
    {
        returnValue = F("Leonberg");
        break;
    }
    case 205576:
    {
        returnValue = F("Leonberger");
        break;
    }
    case 205577:
    {
        returnValue = F("Leonberger Allee");
        break;
    }
    case 205578:
    {
        returnValue = F("Leonberger Platz");
        break;
    }
    case 205579:
    {
        returnValue = F("Leonberger Str.");
        break;
    }
    case 205580:
    {
        returnValue = F("Leonberger Weg");
        break;
    }
    case 205581:
    {
        returnValue = F("Leonbergerstr.");
        break;
    }
    case 205582:
    {
        returnValue = F("Leonbergweg");
        break;
    }
    case 205583:
    {
        returnValue = F("Leonbronner Steige");
        break;
    }
    case 205584:
    {
        returnValue = F("Leonbronner Str.");
        break;
    }
    case 205585:
    {
        returnValue = F("Leonbronner Weg");
        break;
    }
    case 205586:
    {
        returnValue = F("Leonhard-Bestgen-Str.");
        break;
    }
    case 205587:
    {
        returnValue = F("Leonhard-Cullmann-Str.");
        break;
    }
    case 205588:
    {
        returnValue = F("Leonhard-Deininger-Str.");
        break;
    }
    case 205589:
    {
        returnValue = F("Leonhard-Dober-Str.");
        break;
    }
    case 205590:
    {
        returnValue = F("Leonhard-Eck-Str.");
        break;
    }
    case 205591:
    {
        returnValue = F("Leonhard-Eckel-Siedlung");
        break;
    }
    case 205592:
    {
        returnValue = F("Leonhard-Engelhardt-Str.");
        break;
    }
    case 205593:
    {
        returnValue = F("Leonhard-Euler-Str.");
        break;
    }
    case 205594:
    {
        returnValue = F("Leonhard-Frank-Promenade");
        break;
    }
    case 205595:
    {
        returnValue = F("Leonhard-Frank-Str.");
        break;
    }
    case 205596:
    {
        returnValue = F("Leonhard-Frank-Weg");
        break;
    }
    case 205597:
    {
        returnValue = F("Leonhard-Förtsch-Str.");
        break;
    }
    case 205598:
    {
        returnValue = F("Leonhard-Gollwitzer-Str.");
        break;
    }
    case 205599:
    {
        returnValue = F("Leonhard-Greineisen-Str.");
        break;
    }
    case 205600:
    {
        returnValue = F("Leonhard-Grimm-Platz");
        break;
    }
    case 205601:
    {
        returnValue = F("Leonhard-Hausmann-Str.");
        break;
    }
    case 205602:
    {
        returnValue = F("Leonhard-Hegwein-Str.");
        break;
    }
    case 205603:
    {
        returnValue = F("Leonhard-Herbert-Str.");
        break;
    }
    case 205604:
    {
        returnValue = F("Leonhard-Huber-Str.");
        break;
    }
    case 205605:
    {
        returnValue = F("Leonhard-Huter-Str.");
        break;
    }
    case 205606:
    {
        returnValue = F("Leonhard-Höfler-Str.");
        break;
    }
    case 205607:
    {
        returnValue = F("Leonhard-Hüttenhofer-Str.");
        break;
    }
    case 205608:
    {
        returnValue = F("Leonhard-Jansen-Str.");
        break;
    }
    case 205609:
    {
        returnValue = F("Leonhard-Karl-Str.");
        break;
    }
    case 205610:
    {
        returnValue = F("Leonhard-Kern-Weg");
        break;
    }
    case 205611:
    {
        returnValue = F("Leonhard-Kiening-Ring");
        break;
    }
    case 205612:
    {
        returnValue = F("Leonhard-Kittsteiner-Str.");
        break;
    }
    case 205613:
    {
        returnValue = F("Leonhard-Kleber-Str.");
        break;
    }
    case 205614:
    {
        returnValue = F("Leonhard-Kluftinger-Str.");
        break;
    }
    case 205615:
    {
        returnValue = F("Leonhard-Kraus-Str.");
        break;
    }
    case 205616:
    {
        returnValue = F("Leonhard-Lechner-Str.");
        break;
    }
    case 205617:
    {
        returnValue = F("Leonhard-Lurz-Str.");
        break;
    }
    case 205618:
    {
        returnValue = F("Leonhard-Mezler-Weg");
        break;
    }
    case 205619:
    {
        returnValue = F("Leonhard-Meßner-Weg");
        break;
    }
    case 205620:
    {
        returnValue = F("Leonhard-Moll-Str.");
        break;
    }
    case 205621:
    {
        returnValue = F("Leonhard-Müller-Str.");
        break;
    }
    case 205622:
    {
        returnValue = F("Leonhard-Nübler-Str.");
        break;
    }
    case 205623:
    {
        returnValue = F("Leonhard-Oberhäußer-Str.");
        break;
    }
    case 205624:
    {
        returnValue = F("Leonhard-Oesterle-Str.");
        break;
    }
    case 205625:
    {
        returnValue = F("Leonhard-Paminger-Str.");
        break;
    }
    case 205626:
    {
        returnValue = F("Leonhard-Prosi-Str.");
        break;
    }
    case 205627:
    {
        returnValue = F("Leonhard-Ritter-Str.");
        break;
    }
    case 205628:
    {
        returnValue = F("Leonhard-Rucker-Str.");
        break;
    }
    case 205629:
    {
        returnValue = F("Leonhard-Schmidt-Weg");
        break;
    }
    case 205630:
    {
        returnValue = F("Leonhard-Scholz-Weg");
        break;
    }
    case 205631:
    {
        returnValue = F("Leonhard-Schwarz-Str.");
        break;
    }
    case 205632:
    {
        returnValue = F("Leonhard-Seidel-Str.");
        break;
    }
    case 205633:
    {
        returnValue = F("Leonhard-Sohncke-Weg");
        break;
    }
    case 205634:
    {
        returnValue = F("Leonhard-Stadler-Str.");
        break;
    }
    case 205635:
    {
        returnValue = F("Leonhard-Stahl-Str.");
        break;
    }
    case 205636:
    {
        returnValue = F("Leonhard-Stinnes-Str.");
        break;
    }
    case 205637:
    {
        returnValue = F("Leonhard-Strell-Str.");
        break;
    }
    case 205638:
    {
        returnValue = F("Leonhard-Wanner-Str.");
        break;
    }
    case 205639:
    {
        returnValue = F("Leonhard-Weg");
        break;
    }
    case 205640:
    {
        returnValue = F("Leonhard-Weiss-Str.");
        break;
    }
    case 205641:
    {
        returnValue = F("Leonharder Weg");
        break;
    }
    case 205642:
    {
        returnValue = F("Leonharderweg");
        break;
    }
    case 205643:
    {
        returnValue = F("Leonhardi Geräumt");
        break;
    }
    case 205644:
    {
        returnValue = F("Leonhardigasse");
        break;
    }
    case 205645:
    {
        returnValue = F("Leonhardiring");
        break;
    }
    case 205646:
    {
        returnValue = F("Leonhardisteig");
        break;
    }
    case 205647:
    {
        returnValue = F("Leonhardistr.");
        break;
    }
    case 205648:
    {
        returnValue = F("Leonhardiweg");
        break;
    }
    case 205649:
    {
        returnValue = F("Leonhardring");
        break;
    }
    case 205650:
    {
        returnValue = F("Leonhardsberg");
        break;
    }
    case 205651:
    {
        returnValue = F("Leonhardschulplatz");
        break;
    }
    case 205652:
    {
        returnValue = F("Leonhardsgasse");
        break;
    }
    case 205653:
    {
        returnValue = F("Leonhardshalde");
        break;
    }
    case 205654:
    {
        returnValue = F("Leonhardshof");
        break;
    }
    case 205655:
    {
        returnValue = F("Leonhardspfunzener Str.");
        break;
    }
    case 205656:
    {
        returnValue = F("Leonhardsplatz");
        break;
    }
    case 205657:
    {
        returnValue = F("Leonhardsruhstr.");
        break;
    }
    case 205658:
    {
        returnValue = F("Leonhardstr.");
        break;
    }
    case 205659:
    {
        returnValue = F("Leonhardsweg");
        break;
    }
    case 205660:
    {
        returnValue = F("Leonhardswiese");
        break;
    }
    case 205661:
    {
        returnValue = F("Leonhardtstr.");
        break;
    }
    case 205662:
    {
        returnValue = F("Leonhardusplatz");
        break;
    }
    case 205663:
    {
        returnValue = F("Leonhardweg");
        break;
    }
    case 205664:
    {
        returnValue = F("Leonhart-Fuchs-Garten");
        break;
    }
    case 205665:
    {
        returnValue = F("Leonhart-Fuchs-Str.");
        break;
    }
    case 205666:
    {
        returnValue = F("Leonidengasse");
        break;
    }
    case 205667:
    {
        returnValue = F("Leonie-Meyerhof-Ring");
        break;
    }
    case 205668:
    {
        returnValue = F("Leonie-Ossowski-Promenade");
        break;
    }
    case 205669:
    {
        returnValue = F("Leonie-Wild-Platz");
        break;
    }
    case 205670:
    {
        returnValue = F("Leonie-Wild-Str.");
        break;
    }
    case 205671:
    {
        returnValue = F("Leonie-Wild-Weg");
        break;
    }
    case 205672:
    {
        returnValue = F("Leoniestr.");
        break;
    }
    case 205673:
    {
        returnValue = F("Leoniweg");
        break;
    }
    case 205674:
    {
        returnValue = F("Leonore-Kühn-Str.");
        break;
    }
    case 205675:
    {
        returnValue = F("Leonorenstr.");
        break;
    }
    case 205676:
    {
        returnValue = F("Leonorenweg");
        break;
    }
    case 205677:
    {
        returnValue = F("Leonrodplatz");
        break;
    }
    case 205678:
    {
        returnValue = F("Leonrodstr.");
        break;
    }
    case 205679:
    {
        returnValue = F("Leonrodtweg");
        break;
    }
    case 205680:
    {
        returnValue = F("Leonsberg");
        break;
    }
    case 205681:
    {
        returnValue = F("Leonsberger Str.");
        break;
    }
    case 205682:
    {
        returnValue = F("Leonstr.");
        break;
    }
    case 205683:
    {
        returnValue = F("Leoplatz");
        break;
    }
    case 205684:
    {
        returnValue = F("Leopold Passage");
        break;
    }
    case 205685:
    {
        returnValue = F("Leopold-Arends-Str.");
        break;
    }
    case 205686:
    {
        returnValue = F("Leopold-Baldauf-Weg");
        break;
    }
    case 205687:
    {
        returnValue = F("Leopold-Becker-Str.");
        break;
    }
    case 205688:
    {
        returnValue = F("Leopold-Becker-Weg");
        break;
    }
    case 205689:
    {
        returnValue = F("Leopold-Bing-Str.");
        break;
    }
    case 205690:
    {
        returnValue = F("Leopold-Bode-Str.");
        break;
    }
    case 205691:
    {
        returnValue = F("Leopold-Bürkner-Str.");
        break;
    }
    case 205692:
    {
        returnValue = F("Leopold-Dony-Str.");
        break;
    }
    case 205693:
    {
        returnValue = F("Leopold-Döbele-Str.");
        break;
    }
    case 205694:
    {
        returnValue = F("Leopold-Freter-Str.");
        break;
    }
    case 205695:
    {
        returnValue = F("Leopold-Grüe-Str.");
        break;
    }
    case 205696:
    {
        returnValue = F("Leopold-Henrichs-Str.");
        break;
    }
    case 205697:
    {
        returnValue = F("Leopold-Hoesch-Str.");
        break;
    }
    case 205698:
    {
        returnValue = F("Leopold-Höhl-Str.");
        break;
    }
    case 205699:
    {
        returnValue = F("Leopold-Imgram-Str.");
        break;
    }
    case 205700:
    {
        returnValue = F("Leopold-Jahn-Str.");
        break;
    }
    case 205701:
    {
        returnValue = F("Leopold-Kell-Str.");
        break;
    }
    case 205702:
    {
        returnValue = F("Leopold-Kienle-Weg");
        break;
    }
    case 205703:
    {
        returnValue = F("Leopold-Koch-Str.");
        break;
    }
    case 205704:
    {
        returnValue = F("Leopold-Krawinkel-Str.");
        break;
    }
    case 205705:
    {
        returnValue = F("Leopold-Krönner-Str.");
        break;
    }
    case 205706:
    {
        returnValue = F("Leopold-Lucas-Str.");
        break;
    }
    case 205707:
    {
        returnValue = F("Leopold-Messmer-Weg");
        break;
    }
    case 205708:
    {
        returnValue = F("Leopold-Orth-Str.");
        break;
    }
    case 205709:
    {
        returnValue = F("Leopold-Oster-Weg");
        break;
    }
    case 205710:
    {
        returnValue = F("Leopold-Peitz-Allee");
        break;
    }
    case 205711:
    {
        returnValue = F("Leopold-Regensburger-Str.");
        break;
    }
    case 205712:
    {
        returnValue = F("Leopold-Reitz-Platz");
        break;
    }
    case 205713:
    {
        returnValue = F("Leopold-Reitz-Weg");
        break;
    }
    case 205714:
    {
        returnValue = F("Leopold-Sachse-Str.");
        break;
    }
    case 205715:
    {
        returnValue = F("Leopold-Schwaiger-Str.");
        break;
    }
    case 205716:
    {
        returnValue = F("Leopold-Schütte-Weg");
        break;
    }
    case 205717:
    {
        returnValue = F("Leopold-Sello-Str.");
        break;
    }
    case 205718:
    {
        returnValue = F("Leopold-Sinasohn-Weg");
        break;
    }
    case 205719:
    {
        returnValue = F("Leopold-Spiegel-Weg");
        break;
    }
    case 205720:
    {
        returnValue = F("Leopold-Spreer-Str.");
        break;
    }
    case 205721:
    {
        returnValue = F("Leopold-Wertheimer-Str.");
        break;
    }
    case 205722:
    {
        returnValue = F("Leopold-Wittekindt-Str.");
        break;
    }
    case 205723:
    {
        returnValue = F("Leopold-Ziegler-Weg");
        break;
    }
    case 205724:
    {
        returnValue = F("Leopold-Zunz-Weg");
        break;
    }
    case 205725:
    {
        returnValue = F("Leopold-von-Buch-Str.");
        break;
    }
    case 205726:
    {
        returnValue = F("Leopold-von-Ranke-Str.");
        break;
    }
    case 205727:
    {
        returnValue = F("Leopoldgasse");
        break;
    }
    case 205728:
    {
        returnValue = F("Leopoldineninsel");
        break;
    }
    case 205729:
    {
        returnValue = F("Leopoldinenring");
        break;
    }
    case 205730:
    {
        returnValue = F("Leopoldinenweg");
        break;
    }
    case 205731:
    {
        returnValue = F("Leopoldplatz");
        break;
    }
    case 205732:
    {
        returnValue = F("Leopoldring");
        break;
    }
    case 205733:
    {
        returnValue = F("Leopolds Richtstatt");
        break;
    }
    case 205734:
    {
        returnValue = F("Leopoldsbrunnen");
        break;
    }
    case 205735:
    {
        returnValue = F("Leopoldsbrücke");
        break;
    }
    case 205736:
    {
        returnValue = F("Leopoldschanze");
        break;
    }
    case 205737:
    {
        returnValue = F("Leopoldschneise");
        break;
    }
    case 205738:
    {
        returnValue = F("Leopoldsdorf");
        break;
    }
    case 205739:
    {
        returnValue = F("Leopoldsederstr.");
        break;
    }
    case 205740:
    {
        returnValue = F("Leopoldsgrundweg");
        break;
    }
    case 205741:
    {
        returnValue = F("Leopoldshafen");
        break;
    }
    case 205742:
    {
        returnValue = F("Leopoldshafener Str.");
        break;
    }
    case 205743:
    {
        returnValue = F("Leopoldshall");
        break;
    }
    case 205744:
    {
        returnValue = F("Leopoldshaller Str.");
        break;
    }
    case 205745:
    {
        returnValue = F("Leopoldshöhe");
        break;
    }
    case 205746:
    {
        returnValue = F("Leopoldshöher Str.");
        break;
    }
    case 205747:
    {
        returnValue = F("Leopoldskamp");
        break;
    }
    case 205748:
    {
        returnValue = F("Leopoldsreuter Str.");
        break;
    }
    case 205749:
    {
        returnValue = F("Leopoldsruh");
        break;
    }
    case 205750:
    {
        returnValue = F("Leopoldstaler Str.");
        break;
    }
    case 205751:
    {
        returnValue = F("Leopoldstr.");
        break;
    }
    case 205752:
    {
        returnValue = F("Leopoldsweg");
        break;
    }
    case 205753:
    {
        returnValue = F("Leopoldtagesstrecke");
        break;
    }
    case 205754:
    {
        returnValue = F("Leopoldweg");
        break;
    }
    case 205755:
    {
        returnValue = F("Leoprechtinger Weg");
        break;
    }
    case 205756:
    {
        returnValue = F("Leoprechtingstr.");
        break;
    }
    case 205757:
    {
        returnValue = F("Leoprechtstein");
        break;
    }
    case 205758:
    {
        returnValue = F("Leostr.");
        break;
    }
    case 205759:
    {
        returnValue = F("Leoweg");
        break;
    }
    case 205760:
    {
        returnValue = F("Lepahner Bötz");
        break;
    }
    case 205761:
    {
        returnValue = F("Lepckestr.");
        break;
    }
    case 205762:
    {
        returnValue = F("Lepkesfeld");
        break;
    }
    case 205763:
    {
        returnValue = F("Leplershof");
        break;
    }
    case 205764:
    {
        returnValue = F("Leppelmanns Feld");
        break;
    }
    case 205765:
    {
        returnValue = F("Leppelsdorfer Str.");
        break;
    }
    case 205766:
    {
        returnValue = F("Leppelsheckweg");
        break;
    }
    case 205767:
    {
        returnValue = F("Leppelsäcker");
        break;
    }
    case 205768:
    {
        returnValue = F("Lepperfeld");
        break;
    }
    case 205769:
    {
        returnValue = F("Lepperhammer");
        break;
    }
    case 205770:
    {
        returnValue = F("Lepperhofer Str.");
        break;
    }
    case 205771:
    {
        returnValue = F("Leppermühle");
        break;
    }
    case 205772:
    {
        returnValue = F("Leppersdorfer Str.");
        break;
    }
    case 205773:
    {
        returnValue = F("Leppersgasse");
        break;
    }
    case 205774:
    {
        returnValue = F("Leppershütte");
        break;
    }
    case 205775:
    {
        returnValue = F("Lepperstr.");
        break;
    }
    case 205776:
    {
        returnValue = F("Leppersweg");
        break;
    }
    case 205777:
    {
        returnValue = F("Lepperweg");
        break;
    }
    case 205778:
    {
        returnValue = F("Leppestr.");
        break;
    }
    case 205779:
    {
        returnValue = F("Leppin");
        break;
    }
    case 205780:
    {
        returnValue = F("Leppiner Str.");
        break;
    }
    case 205781:
    {
        returnValue = F("Leppiner Weg");
        break;
    }
    case 205782:
    {
        returnValue = F("Leppinsplaner Weg");
        break;
    }
    case 205783:
    {
        returnValue = F("Leprosenweg");
        break;
    }
    case 205784:
    {
        returnValue = F("Lepser Str.");
        break;
    }
    case 205785:
    {
        returnValue = F("Lepser Weg");
        break;
    }
    case 205786:
    {
        returnValue = F("Lepsiusstr.");
        break;
    }
    case 205787:
    {
        returnValue = F("Lepstedter Str.");
        break;
    }
    case 205788:
    {
        returnValue = F("Lerau");
        break;
    }
    case 205789:
    {
        returnValue = F("Lerbacher Weg");
        break;
    }
    case 205790:
    {
        returnValue = F("Lerbecker Str.");
        break;
    }
    case 205791:
    {
        returnValue = F("Lerch");
        break;
    }
    case 205792:
    {
        returnValue = F("Lerchacker");
        break;
    }
    case 205793:
    {
        returnValue = F("Lerchahöhe");
        break;
    }
    case 205794:
    {
        returnValue = F("Lerchaweg");
        break;
    }
    case 205795:
    {
        returnValue = F("Lerchegg");
        break;
    }
    case 205796:
    {
        returnValue = F("Lerchen Weg");
        break;
    }
    case 205797:
    {
        returnValue = F("Lerchenackerweg");
        break;
    }
    case 205798:
    {
        returnValue = F("Lerchenallee");
        break;
    }
    case 205799:
    {
        returnValue = F("Lerchenanger");
        break;
    }
    case 205800:
    {
        returnValue = F("Lerchenaue");
        break;
    }
    case 205801:
    {
        returnValue = F("Lerchenbachweg");
        break;
    }
    case 205802:
    {
        returnValue = F("Lerchenbaum");
        break;
    }
    case 205803:
    {
        returnValue = F("Lerchenberg");
        break;
    }
    case 205804:
    {
        returnValue = F("Lerchenberge");
        break;
    }
    case 205805:
    {
        returnValue = F("Lerchenberger Str.");
        break;
    }
    case 205806:
    {
        returnValue = F("Lerchenberghöfe");
        break;
    }
    case 205807:
    {
        returnValue = F("Lerchenbergsfeld");
        break;
    }
    case 205808:
    {
        returnValue = F("Lerchenbergsiedlung I");
        break;
    }
    case 205809:
    {
        returnValue = F("Lerchenbergsiedlung II");
        break;
    }
    case 205810:
    {
        returnValue = F("Lerchenbergsiedlung III");
        break;
    }
    case 205811:
    {
        returnValue = F("Lerchenbergstr.");
        break;
    }
    case 205812:
    {
        returnValue = F("Lerchenbergweg");
        break;
    }
    case 205813:
    {
        returnValue = F("Lerchenbohlhof");
        break;
    }
    case 205814:
    {
        returnValue = F("Lerchenbreite");
        break;
    }
    case 205815:
    {
        returnValue = F("Lerchenbrink");
        break;
    }
    case 205816:
    {
        returnValue = F("Lerchenbuck");
        break;
    }
    case 205817:
    {
        returnValue = F("Lerchenbuckl");
        break;
    }
    case 205818:
    {
        returnValue = F("Lerchenbusch");
        break;
    }
    case 205819:
    {
        returnValue = F("Lerchenbühl");
        break;
    }
    case 205820:
    {
        returnValue = F("Lerchenbühlstr.");
        break;
    }
    case 205821:
    {
        returnValue = F("Lerchenbühlweg");
        break;
    }
    case 205822:
    {
        returnValue = F("Lerchendamm");
        break;
    }
    case 205823:
    {
        returnValue = F("Lercheneck");
        break;
    }
    case 205824:
    {
        returnValue = F("Lerchenfeld");
        break;
    }
    case 205825:
    {
        returnValue = F("Lerchenfelder Str.");
        break;
    }
    case 205826:
    {
        returnValue = F("Lerchenfelder Weg");
        break;
    }
    case 205827:
    {
        returnValue = F("Lerchenfelderstr.");
        break;
    }
    case 205828:
    {
        returnValue = F("Lerchenfeldstr.");
        break;
    }
    case 205829:
    {
        returnValue = F("Lerchenfeldweg");
        break;
    }
    case 205830:
    {
        returnValue = F("Lerchenfenster");
        break;
    }
    case 205831:
    {
        returnValue = F("Lerchenflur");
        break;
    }
    case 205832:
    {
        returnValue = F("Lerchengang");
        break;
    }
    case 205833:
    {
        returnValue = F("Lerchengarten");
        break;
    }
    case 205834:
    {
        returnValue = F("Lerchengartenweg");
        break;
    }
    case 205835:
    {
        returnValue = F("Lerchengasse");
        break;
    }
    case 205836:
    {
        returnValue = F("Lerchengrund");
        break;
    }
    case 205837:
    {
        returnValue = F("Lerchengründlein");
        break;
    }
    case 205838:
    {
        returnValue = F("Lerchenhaid");
        break;
    }
    case 205839:
    {
        returnValue = F("Lerchenhain");
        break;
    }
    case 205840:
    {
        returnValue = F("Lerchenhain-Privatweg");
        break;
    }
    case 205841:
    {
        returnValue = F("Lerchenhalde");
        break;
    }
    case 205842:
    {
        returnValue = F("Lerchenhang");
        break;
    }
    case 205843:
    {
        returnValue = F("Lerchenhaube");
        break;
    }
    case 205844:
    {
        returnValue = F("Lerchenhaubenweg");
        break;
    }
    case 205845:
    {
        returnValue = F("Lerchenhausen");
        break;
    }
    case 205846:
    {
        returnValue = F("Lerchenheide");
        break;
    }
    case 205847:
    {
        returnValue = F("Lerchenhof");
        break;
    }
    case 205848:
    {
        returnValue = F("Lerchenhofstr.");
        break;
    }
    case 205849:
    {
        returnValue = F("Lerchenhofweg");
        break;
    }
    case 205850:
    {
        returnValue = F("Lerchenholz");
        break;
    }
    case 205851:
    {
        returnValue = F("Lerchenhuber Weg");
        break;
    }
    case 205852:
    {
        returnValue = F("Lerchenhöfe");
        break;
    }
    case 205853:
    {
        returnValue = F("Lerchenhöhe");
        break;
    }
    case 205854:
    {
        returnValue = F("Lerchenhügel");
        break;
    }
    case 205855:
    {
        returnValue = F("Lerchenhüttenstr.");
        break;
    }
    case 205856:
    {
        returnValue = F("Lerchenkamp");
        break;
    }
    case 205857:
    {
        returnValue = F("Lerchenkampweg");
        break;
    }
    case 205858:
    {
        returnValue = F("Lerchenkoppel");
        break;
    }
    case 205859:
    {
        returnValue = F("Lerchenmoosstr.");
        break;
    }
    case 205860:
    {
        returnValue = F("Lerchenmühle");
        break;
    }
    case 205861:
    {
        returnValue = F("Lerchennest");
        break;
    }
    case 205862:
    {
        returnValue = F("Lerchenneststr.");
        break;
    }
    case 205863:
    {
        returnValue = F("Lerchenpfad");
        break;
    }
    case 205864:
    {
        returnValue = F("Lerchenplatz");
        break;
    }
    case 205865:
    {
        returnValue = F("Lerchenrain");
        break;
    }
    case 205866:
    {
        returnValue = F("Lerchenreihe");
        break;
    }
    case 205867:
    {
        returnValue = F("Lerchenring");
        break;
    }
    case 205868:
    {
        returnValue = F("Lerchensang");
        break;
    }
    case 205869:
    {
        returnValue = F("Lerchenschlag");
        break;
    }
    case 205870:
    {
        returnValue = F("Lerchensiedlung");
        break;
    }
    case 205871:
    {
        returnValue = F("Lerchenspornweg");
        break;
    }
    case 205872:
    {
        returnValue = F("Lerchensteg");
        break;
    }
    case 205873:
    {
        returnValue = F("Lerchensteig");
        break;
    }
    case 205874:
    {
        returnValue = F("Lerchensteige");
        break;
    }
    case 205875:
    {
        returnValue = F("Lerchenstieg");
        break;
    }
    case 205876:
    {
        returnValue = F("Lerchenstr.");
        break;
    }
    case 205877:
    {
        returnValue = F("Lerchensträßchen");
        break;
    }
    case 205878:
    {
        returnValue = F("Lerchental");
        break;
    }
    case 205879:
    {
        returnValue = F("Lerchentaler Str.");
        break;
    }
    case 205880:
    {
        returnValue = F("Lerchentalstr.");
        break;
    }
    case 205881:
    {
        returnValue = F("Lerchentalweg");
        break;
    }
    case 205882:
    {
        returnValue = F("Lerchenweg");
        break;
    }
    case 205883:
    {
        returnValue = F("Lerchenweide");
        break;
    }
    case 205884:
    {
        returnValue = F("Lerchenwiese");
        break;
    }
    case 205885:
    {
        returnValue = F("Lerchenwinkel");
        break;
    }
    case 205886:
    {
        returnValue = F("Lerchenwuhne");
        break;
    }
    case 205887:
    {
        returnValue = F("Lercherfeldstr.");
        break;
    }
    case 205888:
    {
        returnValue = F("Lercherhalde");
        break;
    }
    case 205889:
    {
        returnValue = F("Lerches");
        break;
    }
    case 205890:
    {
        returnValue = F("Lerchesflurweg");
        break;
    }
    case 205891:
    {
        returnValue = F("Lerchessteig");
        break;
    }
    case 205892:
    {
        returnValue = F("Lerchesteige");
        break;
    }
    case 205893:
    {
        returnValue = F("Lerchestr.");
        break;
    }
    case 205894:
    {
        returnValue = F("Lerchkogelstr.");
        break;
    }
    case 205895:
    {
        returnValue = F("Lerchmoosstr.");
        break;
    }
    case 205896:
    {
        returnValue = F("Lerchsfeld");
        break;
    }
    case 205897:
    {
        returnValue = F("Lerchstr.");
        break;
    }
    case 205898:
    {
        returnValue = F("Lerckenshof");
        break;
    }
    case 205899:
    {
        returnValue = F("Lerd");
        break;
    }
    case 205900:
    {
        returnValue = F("Lerdweg");
        break;
    }
    case 205901:
    {
        returnValue = F("Lerigaustr.");
        break;
    }
    case 205902:
    {
        returnValue = F("Lerigauweg");
        break;
    }
    case 205903:
    {
        returnValue = F("Leristr.");
        break;
    }
    case 205904:
    {
        returnValue = F("Lerkamp");
        break;
    }
    case 205905:
    {
        returnValue = F("Lerlachstr.");
        break;
    }
    case 205906:
    {
        returnValue = F("Lermenchesweg");
        break;
    }
    case 205907:
    {
        returnValue = F("Lermesbrück");
        break;
    }
    case 205908:
    {
        returnValue = F("Lermunder Str.");
        break;
    }
    case 205909:
    {
        returnValue = F("Lernbachtaler Str.");
        break;
    }
    case 205910:
    {
        returnValue = F("Lernerbachstr.");
        break;
    }
    case 205911:
    {
        returnValue = F("Lernort der Artenvielfalt");
        break;
    }
    case 205912:
    {
        returnValue = F("Lerosstr.");
        break;
    }
    case 205913:
    {
        returnValue = F("Lerschstr.");
        break;
    }
    case 205914:
    {
        returnValue = F("Lerschweg");
        break;
    }
    case 205915:
    {
        returnValue = F("Lersnerstr.");
        break;
    }
    case 205916:
    {
        returnValue = F("Lerwall");
        break;
    }
    case 205917:
    {
        returnValue = F("Lesauer Str.");
        break;
    }
    case 205918:
    {
        returnValue = F("Lesauer Weg");
        break;
    }
    case 205919:
    {
        returnValue = F("Leschbrücke");
        break;
    }
    case 205920:
    {
        returnValue = F("Lescheder Str.");
        break;
    }
    case 205921:
    {
        returnValue = F("Leschen");
        break;
    }
    case 205922:
    {
        returnValue = F("Lescherstr.");
        break;
    }
    case 205923:
    {
        returnValue = F("Leschestr.");
        break;
    }
    case 205924:
    {
        returnValue = F("Leschnerstr.");
        break;
    }
    case 205925:
    {
        returnValue = F("Leschweg");
        break;
    }
    case 205926:
    {
        returnValue = F("Leschwies");
        break;
    }
    case 205927:
    {
        returnValue = F("Leschwitzer Str.");
        break;
    }
    case 205928:
    {
        returnValue = F("Lescourscher Garten");
        break;
    }
    case 205929:
    {
        returnValue = F("Leseberg");
        break;
    }
    case 205930:
    {
        returnValue = F("Lesebergstr.");
        break;
    }
    case 205931:
    {
        returnValue = F("Lesebreite");
        break;
    }
    case 205932:
    {
        returnValue = F("Lesegarten");
        break;
    }
    case 205933:
    {
        returnValue = F("Lesegarten der Stadtbibliothek");
        break;
    }
    case 205934:
    {
        returnValue = F("Lesehof");
        break;
    }
    case 205935:
    {
        returnValue = F("Lesekampstr.");
        break;
    }
    case 205936:
    {
        returnValue = F("Lesenbüchen");
        break;
    }
    case 205937:
    {
        returnValue = F("Lesererstr.");
        break;
    }
    case 205938:
    {
        returnValue = F("Leserkamp");
        break;
    }
    case 205939:
    {
        returnValue = F("Leserpark");
        break;
    }
    case 205940:
    {
        returnValue = F("Lesigfeld");
        break;
    }
    case 205941:
    {
        returnValue = F("Leslie-Mackay-Passage");
        break;
    }
    case 205942:
    {
        returnValue = F("Lesmicke");
        break;
    }
    case 205943:
    {
        returnValue = F("Lessau");
        break;
    }
    case 205944:
    {
        returnValue = F("Lesselallee");
        break;
    }
    case 205945:
    {
        returnValue = F("Lesseler Str.");
        break;
    }
    case 205946:
    {
        returnValue = F("Lessen Dorfstr.");
        break;
    }
    case 205947:
    {
        returnValue = F("Lessener Str.");
        break;
    }
    case 205948:
    {
        returnValue = F("Lessenicher Kirchpädchen");
        break;
    }
    case 205949:
    {
        returnValue = F("Lessenicher Str.");
        break;
    }
    case 205950:
    {
        returnValue = F("Lessenicher Weg");
        break;
    }
    case 205951:
    {
        returnValue = F("Lessenstr.");
        break;
    }
    case 205952:
    {
        returnValue = F("Lesser Str.");
        break;
    }
    case 205953:
    {
        returnValue = F("Lesser Weg");
        break;
    }
    case 205954:
    {
        returnValue = F("Lesser-Ury-Weg");
        break;
    }
    case 205955:
    {
        returnValue = F("Lesserplatz");
        break;
    }
    case 205956:
    {
        returnValue = F("Lessestr.");
        break;
    }
    case 205957:
    {
        returnValue = F("Lessiener Weg");
        break;
    }
    case 205958:
    {
        returnValue = F("Lessiener-Haidweg");
        break;
    }
    case 205959:
    {
        returnValue = F("Lessing Str.");
        break;
    }
    case 205960:
    {
        returnValue = F("Lessingallee");
        break;
    }
    case 205961:
    {
        returnValue = F("Lessingberg");
        break;
    }
    case 205962:
    {
        returnValue = F("Lessingbrücke");
        break;
    }
    case 205963:
    {
        returnValue = F("Lessinggäßchen");
        break;
    }
    case 205964:
    {
        returnValue = F("Lessingpark");
        break;
    }
    case 205965:
    {
        returnValue = F("Lessingpfad");
        break;
    }
    case 205966:
    {
        returnValue = F("Lessingplatz");
        break;
    }
    case 205967:
    {
        returnValue = F("Lessingring");
        break;
    }
    case 205968:
    {
        returnValue = F("Lessingstarße");
        break;
    }
    case 205969:
    {
        returnValue = F("Lessingstr.");
        break;
    }
    case 205970:
    {
        returnValue = F("Lessingstrasse");
        break;
    }
    case 205971:
    {
        returnValue = F("Lessingweg");
        break;
    }
    case 205972:
    {
        returnValue = F("Lester-Pearson-Str.");
        break;
    }
    case 205973:
    {
        returnValue = F("Lesteweg");
        break;
    }
    case 205974:
    {
        returnValue = F("Lesumer Str.");
        break;
    }
    case 205975:
    {
        returnValue = F("Lesumstoteler Str.");
        break;
    }
    case 205976:
    {
        returnValue = F("Lesumstr.");
        break;
    }
    case 205977:
    {
        returnValue = F("Letberger Str.");
        break;
    }
    case 205978:
    {
        returnValue = F("Letelner Grund");
        break;
    }
    case 205979:
    {
        returnValue = F("Letelner Heidweg");
        break;
    }
    case 205980:
    {
        returnValue = F("Letelner Str.");
        break;
    }
    case 205981:
    {
        returnValue = F("Letheblick");
        break;
    }
    case 205982:
    {
        returnValue = F("Lethemoorweg");
        break;
    }
    case 205983:
    {
        returnValue = F("Lethenbergweg");
        break;
    }
    case 205984:
    {
        returnValue = F("Lether Weg");
        break;
    }
    case 205985:
    {
        returnValue = F("Letherter Landstr.");
        break;
    }
    case 205986:
    {
        returnValue = F("Lethestr.");
        break;
    }
    case 205987:
    {
        returnValue = F("Letheweg");
        break;
    }
    case 205988:
    {
        returnValue = F("Lethewinkel");
        break;
    }
    case 205989:
    {
        returnValue = F("Lethnerweg");
        break;
    }
    case 205990:
    {
        returnValue = F("Letj Jaat");
        break;
    }
    case 205991:
    {
        returnValue = F("Letj Nuurd");
        break;
    }
    case 205992:
    {
        returnValue = F("Letmannsdyck");
        break;
    }
    case 205993:
    {
        returnValue = F("Letmather Str.");
        break;
    }
    case 205994:
    {
        returnValue = F("Letschiner Birkenweg");
        break;
    }
    case 205995:
    {
        returnValue = F("Letschiner Chaussee");
        break;
    }
    case 205996:
    {
        returnValue = F("Letschiner Str.");
        break;
    }
    case 205997:
    {
        returnValue = F("Letschower Chaussee");
        break;
    }
    case 205998:
    {
        returnValue = F("Lettackerliweg");
        break;
    }
    case 205999:
    {
        returnValue = F("Lettackerweg");
        break;
    }
    case 206000:
    {
        returnValue = F("Lettbusch Schneise");
        break;
    }
    case 206001:
    {
        returnValue = F("Lettchkaut");
        break;
    }
    case 206002:
    {
        returnValue = F("Lettemstellenweg");
        break;
    }
    case 206003:
    {
        returnValue = F("Letten");
        break;
    }
    case 206004:
    {
        returnValue = F("Lettenacker");
        break;
    }
    case 206005:
    {
        returnValue = F("Lettenackerstr.");
        break;
    }
    case 206006:
    {
        returnValue = F("Lettenbachklingenweg");
        break;
    }
    case 206007:
    {
        returnValue = F("Lettenbachstr.");
        break;
    }
    case 206008:
    {
        returnValue = F("Lettenberg");
        break;
    }
    case 206009:
    {
        returnValue = F("Lettenbergstr.");
        break;
    }
    case 206010:
    {
        returnValue = F("Lettenbergweg");
        break;
    }
    case 206011:
    {
        returnValue = F("Lettenbreite");
        break;
    }
    case 206012:
    {
        returnValue = F("Lettenbrunnenweg");
        break;
    }
    case 206013:
    {
        returnValue = F("Lettenbuck");
        break;
    }
    case 206014:
    {
        returnValue = F("Lettenbächle");
        break;
    }
    case 206015:
    {
        returnValue = F("Lettenbühl");
        break;
    }
    case 206016:
    {
        returnValue = F("Lettenbündte");
        break;
    }
    case 206017:
    {
        returnValue = F("Lettener Str.");
        break;
    }
    case 206018:
    {
        returnValue = F("Lettener Weg");
        break;
    }
    case 206019:
    {
        returnValue = F("Lettenfeld");
        break;
    }
    case 206020:
    {
        returnValue = F("Lettenfeldstr.");
        break;
    }
    case 206021:
    {
        returnValue = F("Lettengasse");
        break;
    }
    case 206022:
    {
        returnValue = F("Lettengefällweg");
        break;
    }
    case 206023:
    {
        returnValue = F("Lettengrubenweg");
        break;
    }
    case 206024:
    {
        returnValue = F("Lettenhaldeweg");
        break;
    }
    case 206025:
    {
        returnValue = F("Lettenklinge");
        break;
    }
    case 206026:
    {
        returnValue = F("Lettenleite");
        break;
    }
    case 206027:
    {
        returnValue = F("Lettenmühle");
        break;
    }
    case 206028:
    {
        returnValue = F("Lettenpfad");
        break;
    }
    case 206029:
    {
        returnValue = F("Lettenreuther Str.");
        break;
    }
    case 206030:
    {
        returnValue = F("Lettenring");
        break;
    }
    case 206031:
    {
        returnValue = F("Lettenstr.");
        break;
    }
    case 206032:
    {
        returnValue = F("Lettensträßchen");
        break;
    }
    case 206033:
    {
        returnValue = F("Lettenweg");
        break;
    }
    case 206034:
    {
        returnValue = F("Lettenwiesen");
        break;
    }
    case 206035:
    {
        returnValue = F("Lettenwäldle");
        break;
    }
    case 206036:
    {
        returnValue = F("Lettenäcker");
        break;
    }
    case 206037:
    {
        returnValue = F("Lettenäckerstr.");
        break;
    }
    case 206038:
    {
        returnValue = F("Lettenäckerweg");
        break;
    }
    case 206039:
    {
        returnValue = F("Letter Berg");
        break;
    }
    case 206040:
    {
        returnValue = F("Letter Bruch");
        break;
    }
    case 206041:
    {
        returnValue = F("Letter Bülten");
        break;
    }
    case 206042:
    {
        returnValue = F("Letter Esch");
        break;
    }
    case 206043:
    {
        returnValue = F("Letter Str.");
        break;
    }
    case 206044:
    {
        returnValue = F("Letterhausstr.");
        break;
    }
    case 206045:
    {
        returnValue = F("Letterhausweg");
        break;
    }
    case 206046:
    {
        returnValue = F("Lettersgarten");
        break;
    }
    case 206047:
    {
        returnValue = F("Lettestr.");
        break;
    }
    case 206048:
    {
        returnValue = F("Letteweg");
        break;
    }
    case 206049:
    {
        returnValue = F("Lettewiese");
        break;
    }
    case 206050:
    {
        returnValue = F("Lettewitzer Str.");
        break;
    }
    case 206051:
    {
        returnValue = F("Lettgasse");
        break;
    }
    case 206052:
    {
        returnValue = F("Lettgenbrunner Str.");
        break;
    }
    case 206053:
    {
        returnValue = F("Lettigenbichl");
        break;
    }
    case 206054:
    {
        returnValue = F("Lettigkautschneise");
        break;
    }
    case 206055:
    {
        returnValue = F("Lettiner Str.");
        break;
    }
    case 206056:
    {
        returnValue = F("Lettiner Weg");
        break;
    }
    case 206057:
    {
        returnValue = F("Lettloecher");
        break;
    }
    case 206058:
    {
        returnValue = F("Lettnerstr.");
        break;
    }
    case 206059:
    {
        returnValue = F("Lettow-Vorbeck-Str.");
        break;
    }
    case 206060:
    {
        returnValue = F("Lettowsberg");
        break;
    }
    case 206061:
    {
        returnValue = F("Lettstatt");
        break;
    }
    case 206062:
    {
        returnValue = F("Lettweg");
        break;
    }
    case 206063:
    {
        returnValue = F("Lettweiler Str.");
        break;
    }
    case 206064:
    {
        returnValue = F("Letzackerweg");
        break;
    }
    case 206065:
    {
        returnValue = F("Letzbergstr.");
        break;
    }
    case 206066:
    {
        returnValue = F("Letzegasse");
        break;
    }
    case 206067:
    {
        returnValue = F("Letzenbachweg");
        break;
    }
    case 206068:
    {
        returnValue = F("Letzenberg Tierpark");
        break;
    }
    case 206069:
    {
        returnValue = F("Letzenbergstr.");
        break;
    }
    case 206070:
    {
        returnValue = F("Letzendorf");
        break;
    }
    case 206071:
    {
        returnValue = F("Letzengasse");
        break;
    }
    case 206072:
    {
        returnValue = F("Letzestr.");
        break;
    }
    case 206073:
    {
        returnValue = F("Letzeweg");
        break;
    }
    case 206074:
    {
        returnValue = F("Letzhalde");
        break;
    }
    case 206075:
    {
        returnValue = F("Letzhaldeweg");
        break;
    }
    case 206076:
    {
        returnValue = F("Letzin");
        break;
    }
    case 206077:
    {
        returnValue = F("Letziner Damm");
        break;
    }
    case 206078:
    {
        returnValue = F("Letzlinger Landstr.");
        break;
    }
    case 206079:
    {
        returnValue = F("Letzlinger Str.");
        break;
    }
    case 206080:
    {
        returnValue = F("Letzlinger Weg");
        break;
    }
    case 206081:
    {
        returnValue = F("Letzmannsteich");
        break;
    }
    case 206082:
    {
        returnValue = F("Letznerstr.");
        break;
    }
    case 206083:
    {
        returnValue = F("Letzte Bahn");
        break;
    }
    case 206084:
    {
        returnValue = F("Letzte Pappel");
        break;
    }
    case 206085:
    {
        returnValue = F("Letzte Str.");
        break;
    }
    case 206086:
    {
        returnValue = F("Letzter Galgenberger Weg");
        break;
    }
    case 206087:
    {
        returnValue = F("Letzter Heller");
        break;
    }
    case 206088:
    {
        returnValue = F("Letzter Weg");
        break;
    }
    case 206089:
    {
        returnValue = F("Letztgrund");
        break;
    }
    case 206090:
    {
        returnValue = F("Letzweg");
        break;
    }
    case 206091:
    {
        returnValue = F("Leubach");
        break;
    }
    case 206092:
    {
        returnValue = F("Leubacher Str.");
        break;
    }
    case 206093:
    {
        returnValue = F("Leubaer Str.");
        break;
    }
    case 206094:
    {
        returnValue = F("Leubastalstr.");
        break;
    }
    case 206095:
    {
        returnValue = F("Leubastr.");
        break;
    }
    case 206096:
    {
        returnValue = F("Leubasweg");
        break;
    }
    case 206097:
    {
        returnValue = F("Leubener Bahnhofstr.");
        break;
    }
    case 206098:
    {
        returnValue = F("Leubener Str.");
        break;
    }
    case 206099:
    {
        returnValue = F("Leuberstr.");
        break;
    }
    case 206100:
    {
        returnValue = F("Leubestr.");
        break;
    }
    case 206101:
    {
        returnValue = F("Leubethaer Kirchsteig");
        break;
    }
    case 206102:
    {
        returnValue = F("Leubethaer Str.");
        break;
    }
    case 206103:
    {
        returnValue = F("Leubeweg");
        break;
    }
    case 206104:
    {
        returnValue = F("Leubinger Chaussee");
        break;
    }
    case 206105:
    {
        returnValue = F("Leubinger Str.");
        break;
    }
    case 206106:
    {
        returnValue = F("Leubinger Weg");
        break;
    }
    case 206107:
    {
        returnValue = F("Leublfingstr.");
        break;
    }
    case 206108:
    {
        returnValue = F("Leubnitzer Bahnhofstr.");
        break;
    }
    case 206109:
    {
        returnValue = F("Leubnitzer Flügel");
        break;
    }
    case 206110:
    {
        returnValue = F("Leubnitzer Hauptstr.");
        break;
    }
    case 206111:
    {
        returnValue = F("Leubnitzer Schillerstr.");
        break;
    }
    case 206112:
    {
        returnValue = F("Leubnitzer Str.");
        break;
    }
    case 206113:
    {
        returnValue = F("Leubnitzer Waldstr.");
        break;
    }
    case 206114:
    {
        returnValue = F("Leubnitzer Weg");
        break;
    }
    case 206115:
    {
        returnValue = F("Leubnitzflügel");
        break;
    }
    case 206116:
    {
        returnValue = F("Leubnitzweg");
        break;
    }
    case 206117:
    {
        returnValue = F("Leubsdorf");
        break;
    }
    case 206118:
    {
        returnValue = F("Leubsdorfer Str.");
        break;
    }
    case 206119:
    {
        returnValue = F("Leubuser Str.");
        break;
    }
    case 206120:
    {
        returnValue = F("Leubusstr.");
        break;
    }
    case 206121:
    {
        returnValue = F("Leuchau");
        break;
    }
    case 206122:
    {
        returnValue = F("Leuchauer Siedlung");
        break;
    }
    case 206123:
    {
        returnValue = F("Leuchauer Str.");
        break;
    }
    case 206124:
    {
        returnValue = F("Leucherhofweg");
        break;
    }
    case 206125:
    {
        returnValue = F("Leuchsenweg");
        break;
    }
    case 206126:
    {
        returnValue = F("Leuchsstr.");
        break;
    }
    case 206127:
    {
        returnValue = F("Leuchtbergstr.");
        break;
    }
    case 206128:
    {
        returnValue = F("Leuchte");
        break;
    }
    case 206129:
    {
        returnValue = F("Leuchtefurth");
        break;
    }
    case 206130:
    {
        returnValue = F("Leuchtenberger Kirchweg");
        break;
    }
    case 206131:
    {
        returnValue = F("Leuchtenberger Str.");
        break;
    }
    case 206132:
    {
        returnValue = F("Leuchtenbergerstr.");
        break;
    }
    case 206133:
    {
        returnValue = F("Leuchtenbergerweg");
        break;
    }
    case 206134:
    {
        returnValue = F("Leuchtenbergstr.");
        break;
    }
    case 206135:
    {
        returnValue = F("Leuchtenbergweg");
        break;
    }
    case 206136:
    {
        returnValue = F("Leuchtenbirkener Weg");
        break;
    }
    case 206137:
    {
        returnValue = F("Leuchtenburg");
        break;
    }
    case 206138:
    {
        returnValue = F("Leuchtenburger Str.");
        break;
    }
    case 206139:
    {
        returnValue = F("Leuchtenburger Weg");
        break;
    }
    case 206140:
    {
        returnValue = F("Leuchtenburgstr.");
        break;
    }
    case 206141:
    {
        returnValue = F("Leuchtenburgweg");
        break;
    }
    case 206142:
    {
        returnValue = F("Leuchter Gemark");
        break;
    }
    case 206143:
    {
        returnValue = F("Leuchtersbrunnen");
        break;
    }
    case 206144:
    {
        returnValue = F("Leuchtertannenweg");
        break;
    }
    case 206145:
    {
        returnValue = F("Leuchtfeuer");
        break;
    }
    case 206146:
    {
        returnValue = F("Leuchtkamp");
        break;
    }
    case 206147:
    {
        returnValue = F("Leuchtkäferweg");
        break;
    }
    case 206148:
    {
        returnValue = F("Leuchtmannshof");
        break;
    }
    case 206149:
    {
        returnValue = F("Leuchtsmühlenweg");
        break;
    }
    case 206150:
    {
        returnValue = F("Leuchtstr.");
        break;
    }
    case 206151:
    {
        returnValue = F("Leuchtturmblick");
        break;
    }
    case 206152:
    {
        returnValue = F("Leuchtturmpfad der Artenvielfalt");
        break;
    }
    case 206153:
    {
        returnValue = F("Leuchtturmstr.");
        break;
    }
    case 206154:
    {
        returnValue = F("Leuchtturmweg");
        break;
    }
    case 206155:
    {
        returnValue = F("Leuchtturmwärterweg");
        break;
    }
    case 206156:
    {
        returnValue = F("Leuchtweg");
        break;
    }
    case 206157:
    {
        returnValue = F("Leuchtzacken");
        break;
    }
    case 206158:
    {
        returnValue = F("Leuckartstr.");
        break;
    }
    case 206159:
    {
        returnValue = F("Leuckfeldweg");
        break;
    }
    case 206160:
    {
        returnValue = F("Leuderoder Str.");
        break;
    }
    case 206161:
    {
        returnValue = F("Leuderöder Str.");
        break;
    }
    case 206162:
    {
        returnValue = F("Leuenberger Str.");
        break;
    }
    case 206163:
    {
        returnValue = F("Leuengarten");
        break;
    }
    case 206164:
    {
        returnValue = F("Leuengrabenmatt");
        break;
    }
    case 206165:
    {
        returnValue = F("Leuenkamp");
        break;
    }
    case 206166:
    {
        returnValue = F("Leuerstr.");
        break;
    }
    case 206167:
    {
        returnValue = F("Leuffenweg");
        break;
    }
    case 206168:
    {
        returnValue = F("Leufgensstr.");
        break;
    }
    case 206169:
    {
        returnValue = F("Leugaser Str.");
        break;
    }
    case 206170:
    {
        returnValue = F("Leugermannstr.");
        break;
    }
    case 206171:
    {
        returnValue = F("Leugermannweg");
        break;
    }
    case 206172:
    {
        returnValue = F("Leukbachstr.");
        break;
    }
    case 206173:
    {
        returnValue = F("Leukenort");
        break;
    }
    case 206174:
    {
        returnValue = F("Leuker Bungert");
        break;
    }
    case 206175:
    {
        returnValue = F("Leukers");
        break;
    }
    case 206176:
    {
        returnValue = F("Leukersdorfer Str.");
        break;
    }
    case 206177:
    {
        returnValue = F("Leukrotziech");
        break;
    }
    case 206178:
    {
        returnValue = F("Leuksstr.");
        break;
    }
    case 206179:
    {
        returnValue = F("Leukstr.");
        break;
    }
    case 206180:
    {
        returnValue = F("Leuktalstr.");
        break;
    }
    case 206181:
    {
        returnValue = F("Leulitzer Str.");
        break;
    }
    case 206182:
    {
        returnValue = F("Leumnitzer Str.");
        break;
    }
    case 206183:
    {
        returnValue = F("Leumtengrün");
        break;
    }
    case 206184:
    {
        returnValue = F("Leumundstr.");
        break;
    }
    case 206185:
    {
        returnValue = F("Leunaer Platz");
        break;
    }
    case 206186:
    {
        returnValue = F("Leunaer Str.");
        break;
    }
    case 206187:
    {
        returnValue = F("Leunaer Weg");
        break;
    }
    case 206188:
    {
        returnValue = F("Leunastr.");
        break;
    }
    case 206189:
    {
        returnValue = F("Leunatorstr.");
        break;
    }
    case 206190:
    {
        returnValue = F("Leunaweg");
        break;
    }
    case 206191:
    {
        returnValue = F("Leuner Str.");
        break;
    }
    case 206192:
    {
        returnValue = F("Leuner Weg");
        break;
    }
    case 206193:
    {
        returnValue = F("Leuningerstr.");
        break;
    }
    case 206194:
    {
        returnValue = F("Leunisstr.");
        break;
    }
    case 206195:
    {
        returnValue = F("Leupoldishainer Str.");
        break;
    }
    case 206196:
    {
        returnValue = F("Leupoldsgrüner Str.");
        break;
    }
    case 206197:
    {
        returnValue = F("Leupoldstein");
        break;
    }
    case 206198:
    {
        returnValue = F("Leupoldstr.");
        break;
    }
    case 206199:
    {
        returnValue = F("Leupolz");
        break;
    }
    case 206200:
    {
        returnValue = F("Leupolzer Str.");
        break;
    }
    case 206201:
    {
        returnValue = F("Leupolzmühle");
        break;
    }
    case 206202:
    {
        returnValue = F("Leupser Mühle");
        break;
    }
    case 206203:
    {
        returnValue = F("Leupser Weg");
        break;
    }
    case 206204:
    {
        returnValue = F("Leurs-Heide-Weg");
        break;
    }
    case 206205:
    {
        returnValue = F("Leursweg");
        break;
    }
    case 206206:
    {
        returnValue = F("Leusbergstr.");
        break;
    }
    case 206207:
    {
        returnValue = F("Leuscheider Str.");
        break;
    }
    case 206208:
    {
        returnValue = F("Leuschentin");
        break;
    }
    case 206209:
    {
        returnValue = F("Leuschentiner Damm");
        break;
    }
    case 206210:
    {
        returnValue = F("Leuscherath");
        break;
    }
    case 206211:
    {
        returnValue = F("Leuschnerbrücke");
        break;
    }
    case 206212:
    {
        returnValue = F("Leuschnerplatz");
        break;
    }
    case 206213:
    {
        returnValue = F("Leuschnerstr.");
        break;
    }
    case 206214:
    {
        returnValue = F("Leuschnerweg");
        break;
    }
    case 206215:
    {
        returnValue = F("Leuschnitzstr.");
        break;
    }
    case 206216:
    {
        returnValue = F("Leuschweg");
        break;
    }
    case 206217:
    {
        returnValue = F("Leuselbach");
        break;
    }
    case 206218:
    {
        returnValue = F("Leuseler Str.");
        break;
    }
    case 206219:
    {
        returnValue = F("Leuselhardtweg");
        break;
    }
    case 206220:
    {
        returnValue = F("Leuserüttestr.");
        break;
    }
    case 206221:
    {
        returnValue = F("Leuskesweg");
        break;
    }
    case 206222:
    {
        returnValue = F("Leussin");
        break;
    }
    case 206223:
    {
        returnValue = F("Leussow");
        break;
    }
    case 206224:
    {
        returnValue = F("Leussower Str.");
        break;
    }
    case 206225:
    {
        returnValue = F("Leussower Weg");
        break;
    }
    case 206226:
    {
        returnValue = F("Leuste");
        break;
    }
    case 206227:
    {
        returnValue = F("Leuster Weg");
        break;
    }
    case 206228:
    {
        returnValue = F("Leustetten");
        break;
    }
    case 206229:
    {
        returnValue = F("Leustetter Str.");
        break;
    }
    case 206230:
    {
        returnValue = F("Leustr.");
        break;
    }
    case 206231:
    {
        returnValue = F("Leustädter Str.");
        break;
    }
    case 206232:
    {
        returnValue = F("Leutachweg");
        break;
    }
    case 206233:
    {
        returnValue = F("Leutascher Str.");
        break;
    }
    case 206234:
    {
        returnValue = F("Leutaschweg");
        break;
    }
    case 206235:
    {
        returnValue = F("Leute Wiese");
        break;
    }
    case 206236:
    {
        returnValue = F("Leutebergstr.");
        break;
    }
    case 206237:
    {
        returnValue = F("Leutefeldstr.");
        break;
    }
    case 206238:
    {
        returnValue = F("Leutegasse");
        break;
    }
    case 206239:
    {
        returnValue = F("Leuten");
        break;
    }
    case 206240:
    {
        returnValue = F("Leutenauweg");
        break;
    }
    case 206241:
    {
        returnValue = F("Leutenbacher Maulbeerhain");
        break;
    }
    case 206242:
    {
        returnValue = F("Leutenbacher Str.");
        break;
    }
    case 206243:
    {
        returnValue = F("Leutenbachstr.");
        break;
    }
    case 206244:
    {
        returnValue = F("Leutenbeckstr.");
        break;
    }
    case 206245:
    {
        returnValue = F("Leutenberg");
        break;
    }
    case 206246:
    {
        returnValue = F("Leutenberger Str.");
        break;
    }
    case 206247:
    {
        returnValue = F("Leutenberghangweg");
        break;
    }
    case 206248:
    {
        returnValue = F("Leutenbergstr.");
        break;
    }
    case 206249:
    {
        returnValue = F("Leutenburg");
        break;
    }
    case 206250:
    {
        returnValue = F("Leutendorfer Str.");
        break;
    }
    case 206251:
    {
        returnValue = F("Leutenthal");
        break;
    }
    case 206252:
    {
        returnValue = F("Leutenthaler Str.");
        break;
    }
    case 206253:
    {
        returnValue = F("Leutenweg");
        break;
    }
    case 206254:
    {
        returnValue = F("Leuteroder Str.");
        break;
    }
    case 206255:
    {
        returnValue = F("Leutersbacher Str.");
        break;
    }
    case 206256:
    {
        returnValue = F("Leutersbacher Weg");
        break;
    }
    case 206257:
    {
        returnValue = F("Leutersbergstr.");
        break;
    }
    case 206258:
    {
        returnValue = F("Leuterschacher Str.");
        break;
    }
    case 206259:
    {
        returnValue = F("Leutersdorfer Str.");
        break;
    }
    case 206260:
    {
        returnValue = F("Leutersgraben");
        break;
    }
    case 206261:
    {
        returnValue = F("Leutershausener Str.");
        break;
    }
    case 206262:
    {
        returnValue = F("Leutershausener Weg");
        break;
    }
    case 206263:
    {
        returnValue = F("Leutershäuser Str.");
        break;
    }
    case 206264:
    {
        returnValue = F("Leutershäuser Weg");
        break;
    }
    case 206265:
    {
        returnValue = F("Leuterstal");
        break;
    }
    case 206266:
    {
        returnValue = F("Leuterstalerstr.");
        break;
    }
    case 206267:
    {
        returnValue = F("Leutersteiner Höfe");
        break;
    }
    case 206268:
    {
        returnValue = F("Leutertstr.");
        break;
    }
    case 206269:
    {
        returnValue = F("Leuterwitz");
        break;
    }
    case 206270:
    {
        returnValue = F("Leutesdorfer Str.");
        break;
    }
    case 206271:
    {
        returnValue = F("Leutesheimer Mühle");
        break;
    }
    case 206272:
    {
        returnValue = F("Leutesheimer Str.");
        break;
    }
    case 206273:
    {
        returnValue = F("Leutestalstr.");
        break;
    }
    case 206274:
    {
        returnValue = F("Leuteweg");
        break;
    }
    case 206275:
    {
        returnValue = F("Leutewitz");
        break;
    }
    case 206276:
    {
        returnValue = F("Leutewitzer Dorfstr.");
        break;
    }
    case 206277:
    {
        returnValue = F("Leutewitzer Str.");
        break;
    }
    case 206278:
    {
        returnValue = F("Leutfresserweg");
        break;
    }
    case 206279:
    {
        returnValue = F("Leuthau");
        break;
    }
    case 206280:
    {
        returnValue = F("Leuthaustr.");
        break;
    }
    case 206281:
    {
        returnValue = F("Leuthener Str.");
        break;
    }
    case 206282:
    {
        returnValue = F("Leuthenmühle");
        break;
    }
    case 206283:
    {
        returnValue = F("Leuthenstr.");
        break;
    }
    case 206284:
    {
        returnValue = F("Leuther Landstr.");
        break;
    }
    case 206285:
    {
        returnValue = F("Leuther Str.");
        break;
    }
    case 206286:
    {
        returnValue = F("Leutherather Weg");
        break;
    }
    case 206287:
    {
        returnValue = F("Leutherheide");
        break;
    }
    case 206288:
    {
        returnValue = F("Leuthnerstr.");
        break;
    }
    case 206289:
    {
        returnValue = F("Leutingerring");
        break;
    }
    case 206290:
    {
        returnValue = F("Leutkirch");
        break;
    }
    case 206291:
    {
        returnValue = F("Leutkircher Eck");
        break;
    }
    case 206292:
    {
        returnValue = F("Leutkircher Str.");
        break;
    }
    case 206293:
    {
        returnValue = F("Leutkircher Weg");
        break;
    }
    case 206294:
    {
        returnValue = F("Leutkirchstr.");
        break;
    }
    case 206295:
    {
        returnValue = F("Leutloffstr.");
        break;
    }
    case 206296:
    {
        returnValue = F("Leutmanndorfer Str.");
        break;
    }
    case 206297:
    {
        returnValue = F("Leutnantbrücke");
        break;
    }
    case 206298:
    {
        returnValue = F("Leutnantsbrückenweg");
        break;
    }
    case 206299:
    {
        returnValue = F("Leutnantsweg");
        break;
    }
    case 206300:
    {
        returnValue = F("Leutnantswiese");
        break;
    }
    case 206301:
    {
        returnValue = F("Leutnerstr.");
        break;
    }
    case 206302:
    {
        returnValue = F("Leutnitz");
        break;
    }
    case 206303:
    {
        returnValue = F("Leutra");
        break;
    }
    case 206304:
    {
        returnValue = F("Leutraer Weg");
        break;
    }
    case 206305:
    {
        returnValue = F("Leutragraben");
        break;
    }
    case 206306:
    {
        returnValue = F("Leutrumstr.");
        break;
    }
    case 206307:
    {
        returnValue = F("Leutrumweg");
        break;
    }
    case 206308:
    {
        returnValue = F("Leutschweg");
        break;
    }
    case 206309:
    {
        returnValue = F("Leutstettener Str.");
        break;
    }
    case 206310:
    {
        returnValue = F("Leutstettener Weg");
        break;
    }
    case 206311:
    {
        returnValue = F("Leutstetter Geräumt");
        break;
    }
    case 206312:
    {
        returnValue = F("Leutweinstr.");
        break;
    }
    case 206313:
    {
        returnValue = F("Leutwitzer Flügel");
        break;
    }
    case 206314:
    {
        returnValue = F("Leutwitzer Str.");
        break;
    }
    case 206315:
    {
        returnValue = F("Leutzenbergweg");
        break;
    }
    case 206316:
    {
        returnValue = F("Leutzenheldstr.");
        break;
    }
    case 206317:
    {
        returnValue = F("Leutzenseeweg");
        break;
    }
    case 206318:
    {
        returnValue = F("Leutzestr.");
        break;
    }
    case 206319:
    {
        returnValue = F("Leutzewärter Weg");
        break;
    }
    case 206320:
    {
        returnValue = F("Leuvenstr.");
        break;
    }
    case 206321:
    {
        returnValue = F("Leuwenend");
        break;
    }
    case 206322:
    {
        returnValue = F("Leuzbacher Weg");
        break;
    }
    case 206323:
    {
        returnValue = F("Leuzdorfer Hauptstr.");
        break;
    }
    case 206324:
    {
        returnValue = F("Leuzenberger Str.");
        break;
    }
    case 206325:
    {
        returnValue = F("Leuzenbronner Steige");
        break;
    }
    case 206326:
    {
        returnValue = F("Leuzestr.");
        break;
    }
    case 206327:
    {
        returnValue = F("Leußlerstr.");
        break;
    }
    case 206328:
    {
        returnValue = F("Lev-Hasharon-Platz");
        break;
    }
    case 206329:
    {
        returnValue = F("Levelingstr.");
        break;
    }
    case 206330:
    {
        returnValue = F("Levener Weg");
        break;
    }
    case 206331:
    {
        returnValue = F("Levenhäger Str.");
        break;
    }
    case 206332:
    {
        returnValue = F("Levenkamp");
        break;
    }
    case 206333:
    {
        returnValue = F("Levenkaulstr.");
        break;
    }
    case 206334:
    {
        returnValue = F("Levenstorf");
        break;
    }
    case 206335:
    {
        returnValue = F("Levenstr.");
        break;
    }
    case 206336:
    {
        returnValue = F("Levenweg");
        break;
    }
    case 206337:
    {
        returnValue = F("Lever Wald");
        break;
    }
    case 206338:
    {
        returnValue = F("Leveradweg");
        break;
    }
    case 206339:
    {
        returnValue = F("Leverath");
        break;
    }
    case 206340:
    {
        returnValue = F("Leverdingen");
        break;
    }
    case 206341:
    {
        returnValue = F("Leveringhausen");
        break;
    }
    case 206342:
    {
        returnValue = F("Leveringhauser Str.");
        break;
    }
    case 206343:
    {
        returnValue = F("Leveringhauser Weg");
        break;
    }
    case 206344:
    {
        returnValue = F("Leveringhäuser Str.");
        break;
    }
    case 206345:
    {
        returnValue = F("Leverkusener Str.");
        break;
    }
    case 206346:
    {
        returnValue = F("Leverkusenstr.");
        break;
    }
    case 206347:
    {
        returnValue = F("Leverkuser Str.");
        break;
    }
    case 206348:
    {
        returnValue = F("Leverner Str.");
        break;
    }
    case 206349:
    {
        returnValue = F("Levernsiek");
        break;
    }
    case 206350:
    {
        returnValue = F("Levershäuser Str.");
        break;
    }
    case 206351:
    {
        returnValue = F("Levershäuserweg");
        break;
    }
    case 206352:
    {
        returnValue = F("Leversum");
        break;
    }
    case 206353:
    {
        returnValue = F("Leveser Allee");
        break;
    }
    case 206354:
    {
        returnValue = F("Leveser Str.");
        break;
    }
    case 206355:
    {
        returnValue = F("Levester Mühle");
        break;
    }
    case 206356:
    {
        returnValue = F("Levester Str.");
        break;
    }
    case 206357:
    {
        returnValue = F("Levi-Strauss-Allee");
        break;
    }
    case 206358:
    {
        returnValue = F("Levi-Strauss-Ring");
        break;
    }
    case 206359:
    {
        returnValue = F("Levi-Strauss-Str.");
        break;
    }
    case 206360:
    {
        returnValue = F("Levicoweg");
        break;
    }
    case 206361:
    {
        returnValue = F("Levin");
        break;
    }
    case 206362:
    {
        returnValue = F("Levinestr.");
        break;
    }
    case 206363:
    {
        returnValue = F("Levinger Str.");
        break;
    }
    case 206364:
    {
        returnValue = F("Levinhof");
        break;
    }
    case 206365:
    {
        returnValue = F("Levinscher Park");
        break;
    }
    case 206366:
    {
        returnValue = F("Levinstr.");
        break;
    }
    case 206367:
    {
        returnValue = F("Levinus-Richter-Str.");
        break;
    }
    case 206368:
    {
        returnValue = F("Levisonstr.");
        break;
    }
    case 206369:
    {
        returnValue = F("Levistr.");
        break;
    }
    case 206370:
    {
        returnValue = F("Leviweg");
        break;
    }
    case 206371:
    {
        returnValue = F("Levkendorfer Str.");
        break;
    }
    case 206372:
    {
        returnValue = F("Levkojenweg");
        break;
    }
    case 206373:
    {
        returnValue = F("Levshöh");
        break;
    }
    case 206374:
    {
        returnValue = F("Levy-Schaefer-Weg");
        break;
    }
    case 206375:
    {
        returnValue = F("Levy-Weg");
        break;
    }
    case 206376:
    {
        returnValue = F("Levystr.");
        break;
    }
    case 206377:
    {
        returnValue = F("Levyweg");
        break;
    }
    case 206378:
    {
        returnValue = F("Lewackerhof");
        break;
    }
    case 206379:
    {
        returnValue = F("Lewackerstr.");
        break;
    }
    case 206380:
    {
        returnValue = F("Lewaldstr.");
        break;
    }
    case 206381:
    {
        returnValue = F("Lewalterstr.");
        break;
    }
    case 206382:
    {
        returnValue = F("Lewalterweg");
        break;
    }
    case 206383:
    {
        returnValue = F("Lewarkweg");
        break;
    }
    case 206384:
    {
        returnValue = F("Lewer Str.");
        break;
    }
    case 206385:
    {
        returnValue = F("Lewerberg");
        break;
    }
    case 206386:
    {
        returnValue = F("Lewerentzstr.");
        break;
    }
    case 206387:
    {
        returnValue = F("Lewes Kamp");
        break;
    }
    case 206388:
    {
        returnValue = F("Lewesweg");
        break;
    }
    case 206389:
    {
        returnValue = F("Lewetzowweg");
        break;
    }
    case 206390:
    {
        returnValue = F("Lewin-Salomon-Str.");
        break;
    }
    case 206391:
    {
        returnValue = F("Lewiner Ring");
        break;
    }
    case 206392:
    {
        returnValue = F("Lewinger Grüner Weg");
        break;
    }
    case 206393:
    {
        returnValue = F("Lewinger Specken");
        break;
    }
    case 206394:
    {
        returnValue = F("Lewinskistr.");
        break;
    }
    case 206395:
    {
        returnValue = F("Lewitstr.");
        break;
    }
    case 206396:
    {
        returnValue = F("Lewitzblick");
        break;
    }
    case 206397:
    {
        returnValue = F("Lewitzstr.");
        break;
    }
    case 206398:
    {
        returnValue = F("Lewitzweg");
        break;
    }
    case 206399:
    {
        returnValue = F("Lewzer Weg");
        break;
    }
    case 206400:
    {
        returnValue = F("Lexengasse");
        break;
    }
    case 206401:
    {
        returnValue = F("Lexenrieder Weg");
        break;
    }
    case 206402:
    {
        returnValue = F("Lexenweg");
        break;
    }
    case 206403:
    {
        returnValue = F("Lexestr.");
        break;
    }
    case 206404:
    {
        returnValue = F("Lexoshof");
        break;
    }
    case 206405:
    {
        returnValue = F("Lexower Str.");
        break;
    }
    case 206406:
    {
        returnValue = F("Lexstr.");
        break;
    }
    case 206407:
    {
        returnValue = F("Ley");
        break;
    }
    case 206408:
    {
        returnValue = F("Leyackerweg");
        break;
    }
    case 206409:
    {
        returnValue = F("Leybachweg");
        break;
    }
    case 206410:
    {
        returnValue = F("Leybankstr.");
        break;
    }
    case 206411:
    {
        returnValue = F("Leyberggasse");
        break;
    }
    case 206412:
    {
        returnValue = F("Leybergstr.");
        break;
    }
    case 206413:
    {
        returnValue = F("Leybergweg");
        break;
    }
    case 206414:
    {
        returnValue = F("Leyboldstr.");
        break;
    }
    case 206415:
    {
        returnValue = F("Leydecker Weg");
        break;
    }
    case 206416:
    {
        returnValue = F("Leydelstr.");
        break;
    }
    case 206417:
    {
        returnValue = F("Leydheckerstr.");
        break;
    }
    case 206418:
    {
        returnValue = F("Leydigstr.");
        break;
    }
    case 206419:
    {
        returnValue = F("Leye");
        break;
    }
    case 206420:
    {
        returnValue = F("Leyengarten");
        break;
    }
    case 206421:
    {
        returnValue = F("Leyenhaus");
        break;
    }
    case 206422:
    {
        returnValue = F("Leyenkaulstr.");
        break;
    }
    case 206423:
    {
        returnValue = F("Leyensring");
        break;
    }
    case 206424:
    {
        returnValue = F("Leyenstr.");
        break;
    }
    case 206425:
    {
        returnValue = F("Leyentalstr.");
        break;
    }
    case 206426:
    {
        returnValue = F("Leyenweg");
        break;
    }
    case 206427:
    {
        returnValue = F("Leyenweiherstr.");
        break;
    }
    case 206428:
    {
        returnValue = F("Leyer Holz");
        break;
    }
    case 206429:
    {
        returnValue = F("Leyer Kopf");
        break;
    }
    case 206430:
    {
        returnValue = F("Leyer Sonnenschein");
        break;
    }
    case 206431:
    {
        returnValue = F("Leyer Str.");
        break;
    }
    case 206432:
    {
        returnValue = F("Leyer Stück");
        break;
    }
    case 206433:
    {
        returnValue = F("Leyer Weg");
        break;
    }
    case 206434:
    {
        returnValue = F("Leyerbergstr.");
        break;
    }
    case 206435:
    {
        returnValue = F("Leyerers Eichenweg");
        break;
    }
    case 206436:
    {
        returnValue = F("Leyerhof");
        break;
    }
    case 206437:
    {
        returnValue = F("Leyeweg");
        break;
    }
    case 206438:
    {
        returnValue = F("Leygeberstr.");
        break;
    }
    case 206439:
    {
        returnValue = F("Leygräfte");
        break;
    }
    case 206440:
    {
        returnValue = F("Leyheck");
        break;
    }
    case 206441:
    {
        returnValue = F("Leyher Str.");
        break;
    }
    case 206442:
    {
        returnValue = F("Leykaul");
        break;
    }
    case 206443:
    {
        returnValue = F("Leykaulstr.");
        break;
    }
    case 206444:
    {
        returnValue = F("Leykesdyk");
        break;
    }
    case 206445:
    {
        returnValue = F("Leylachweg");
        break;
    }
    case 206446:
    {
        returnValue = F("Leyleckerhörn");
        break;
    }
    case 206447:
    {
        returnValue = F("Leyler Weg");
        break;
    }
    case 206448:
    {
        returnValue = F("Leyloch");
        break;
    }
    case 206449:
    {
        returnValue = F("Leypäche");
        break;
    }
    case 206450:
    {
        returnValue = F("Leyrenbachstr.");
        break;
    }
    case 206451:
    {
        returnValue = F("Leysand");
        break;
    }
    case 206452:
    {
        returnValue = F("Leysanderpolder");
        break;
    }
    case 206453:
    {
        returnValue = F("Leyserstr.");
        break;
    }
    case 206454:
    {
        returnValue = F("Leysnerstr.");
        break;
    }
    case 206455:
    {
        returnValue = F("Leystr.");
        break;
    }
    case 206456:
    {
        returnValue = F("Leyweg");
        break;
    }
    case 206457:
    {
        returnValue = F("Leywiese");
        break;
    }
    case 206458:
    {
        returnValue = F("Lezayer Str.");
        break;
    }
    case 206459:
    {
        returnValue = F("Lezignaner Str.");
        break;
    }
    case 206460:
    {
        returnValue = F("Lezouxer Str.");
        break;
    }
    case 206461:
    {
        returnValue = F("Leßbachweg");
        break;
    }
    case 206462:
    {
        returnValue = F("Leßkestr.");
        break;
    }
    case 206463:
    {
        returnValue = F("Li2");
        break;
    }
    case 206464:
    {
        returnValue = F("Li3");
        break;
    }
    case 206465:
    {
        returnValue = F("Li4");
        break;
    }
    case 206466:
    {
        returnValue = F("Li5");
        break;
    }
    case 206467:
    {
        returnValue = F("Lia-Wöhr-Weg");
        break;
    }
    case 206468:
    {
        returnValue = F("Liach Taft");
        break;
    }
    case 206469:
    {
        returnValue = F("Liane-Synek-Str.");
        break;
    }
    case 206470:
    {
        returnValue = F("Lianenweg");
        break;
    }
    case 206471:
    {
        returnValue = F("Liasstr.");
        break;
    }
    case 206472:
    {
        returnValue = F("Liasweg");
        break;
    }
    case 206473:
    {
        returnValue = F("Libauweg");
        break;
    }
    case 206474:
    {
        returnValue = F("Libaviusstr.");
        break;
    }
    case 206475:
    {
        returnValue = F("Libbesdorfer Str.");
        break;
    }
    case 206476:
    {
        returnValue = F("Libbesicke");
        break;
    }
    case 206477:
    {
        returnValue = F("Libellenbogen");
        break;
    }
    case 206478:
    {
        returnValue = F("Libellengrund");
        break;
    }
    case 206479:
    {
        returnValue = F("Libellenhöhe");
        break;
    }
    case 206480:
    {
        returnValue = F("Libellenpfad");
        break;
    }
    case 206481:
    {
        returnValue = F("Libellenrain");
        break;
    }
    case 206482:
    {
        returnValue = F("Libellenring");
        break;
    }
    case 206483:
    {
        returnValue = F("Libellenstr.");
        break;
    }
    case 206484:
    {
        returnValue = F("Libellenweg");
        break;
    }
    case 206485:
    {
        returnValue = F("Libensteiner Str.");
        break;
    }
    case 206486:
    {
        returnValue = F("Liberecer Str.");
        break;
    }
    case 206487:
    {
        returnValue = F("Liberty Court");
        break;
    }
    case 206488:
    {
        returnValue = F("Libettweg");
        break;
    }
    case 206489:
    {
        returnValue = F("Liblarer Str.");
        break;
    }
    case 206490:
    {
        returnValue = F("Liblarer Weg");
        break;
    }
    case 206491:
    {
        returnValue = F("Libnitz");
        break;
    }
    case 206492:
    {
        returnValue = F("Libnow");
        break;
    }
    case 206493:
    {
        returnValue = F("Libonius-Wagner-Str.");
        break;
    }
    case 206494:
    {
        returnValue = F("Liboriberg");
        break;
    }
    case 206495:
    {
        returnValue = F("Liboriring");
        break;
    }
    case 206496:
    {
        returnValue = F("Liboristr.");
        break;
    }
    case 206497:
    {
        returnValue = F("Liborius-Gräßmann-Str.");
        break;
    }
    case 206498:
    {
        returnValue = F("Liborius-Wagner-Platz");
        break;
    }
    case 206499:
    {
        returnValue = F("Liborius-Wagner-Str.");
        break;
    }
    case 206500:
    {
        returnValue = F("Liboriusgässchen");
        break;
    }
    case 206501:
    {
        returnValue = F("Liboriusstr.");
        break;
    }
    case 206502:
    {
        returnValue = F("Liboriusweg");
        break;
    }
    case 206503:
    {
        returnValue = F("Liboriweg");
        break;
    }
    case 206504:
    {
        returnValue = F("Libourius-Wagner-Platz");
        break;
    }
    case 206505:
    {
        returnValue = F("Liburer Weg");
        break;
    }
    case 206506:
    {
        returnValue = F("Lichelhalde");
        break;
    }
    case 206507:
    {
        returnValue = F("Lichelsweg");
        break;
    }
    case 206508:
    {
        returnValue = F("Lichenröther Str.");
        break;
    }
    case 206509:
    {
        returnValue = F("Lichenröther Weg");
        break;
    }
    case 206510:
    {
        returnValue = F("Licher Allee");
        break;
    }
    case 206511:
    {
        returnValue = F("Licher Berg");
        break;
    }
    case 206512:
    {
        returnValue = F("Licher Hohl");
        break;
    }
    case 206513:
    {
        returnValue = F("Licher Pfädchen");
        break;
    }
    case 206514:
    {
        returnValue = F("Licher Str.");
        break;
    }
    case 206515:
    {
        returnValue = F("Licher Weg");
        break;
    }
    case 206516:
    {
        returnValue = F("Licheröder Str.");
        break;
    }
    case 206517:
    {
        returnValue = F("Lichgasse");
        break;
    }
    case 206518:
    {
        returnValue = F("Lichsenflur");
        break;
    }
    case 206519:
    {
        returnValue = F("Lichsengasse");
        break;
    }
    case 206520:
    {
        returnValue = F("Lichsenhaldenweg");
        break;
    }
    case 206521:
    {
        returnValue = F("Lichsenstr.");
        break;
    }
    case 206522:
    {
        returnValue = F("Lichsenweg");
        break;
    }
    case 206523:
    {
        returnValue = F("Lichseweg");
        break;
    }
    case 206524:
    {
        returnValue = F("Lichsstr.");
        break;
    }
    case 206525:
    {
        returnValue = F("Lichstedt");
        break;
    }
    case 206526:
    {
        returnValue = F("Lichstr.");
        break;
    }
    case 206527:
    {
        returnValue = F("Lichsweg");
        break;
    }
    case 206528:
    {
        returnValue = F("Licht und Kraft-Weg");
        break;
    }
    case 206529:
    {
        returnValue = F("Licht- und Luftbad Prießnitzinsel");
        break;
    }
    case 206530:
    {
        returnValue = F("Licht-Luft-Bad");
        break;
    }
    case 206531:
    {
        returnValue = F("Lichta");
        break;
    }
    case 206532:
    {
        returnValue = F("Lichtaer Str.");
        break;
    }
    case 206533:
    {
        returnValue = F("Lichtbachstr.");
        break;
    }
    case 206534:
    {
        returnValue = F("Lichtbergstr.");
        break;
    }
    case 206535:
    {
        returnValue = F("Lichtbändiger Weg");
        break;
    }
    case 206536:
    {
        returnValue = F("Lichte");
        break;
    }
    case 206537:
    {
        returnValue = F("Lichte Eiche");
        break;
    }
    case 206538:
    {
        returnValue = F("Lichte Eichen");
        break;
    }
    case 206539:
    {
        returnValue = F("Lichte Höhe");
        break;
    }
    case 206540:
    {
        returnValue = F("Lichte Kammer");
        break;
    }
    case 206541:
    {
        returnValue = F("Lichte Querstr.");
        break;
    }
    case 206542:
    {
        returnValue = F("Lichte Zeile");
        break;
    }
    case 206543:
    {
        returnValue = F("Lichte-Eichen-Weg");
        break;
    }
    case 206544:
    {
        returnValue = F("Lichtebuchenweg");
        break;
    }
    case 206545:
    {
        returnValue = F("Lichteburgstr.");
        break;
    }
    case 206546:
    {
        returnValue = F("Lichtegehrensträßchen");
        break;
    }
    case 206547:
    {
        returnValue = F("Lichteiken");
        break;
    }
    case 206548:
    {
        returnValue = F("Lichtekamp");
        break;
    }
    case 206549:
    {
        returnValue = F("Lichtel");
        break;
    }
    case 206550:
    {
        returnValue = F("Lichtelweg");
        break;
    }
    case 206551:
    {
        returnValue = F("Lichten");
        break;
    }
    case 206552:
    {
        returnValue = F("Lichten Eichen");
        break;
    }
    case 206553:
    {
        returnValue = F("Lichtena");
        break;
    }
    case 206554:
    {
        returnValue = F("Lichtenau");
        break;
    }
    case 206555:
    {
        returnValue = F("Lichtenauer Flügel");
        break;
    }
    case 206556:
    {
        returnValue = F("Lichtenauer Str.");
        break;
    }
    case 206557:
    {
        returnValue = F("Lichtenauer Weg");
        break;
    }
    case 206558:
    {
        returnValue = F("Lichtenaustr.");
        break;
    }
    case 206559:
    {
        returnValue = F("Lichtenbach");
        break;
    }
    case 206560:
    {
        returnValue = F("Lichtenberg");
        break;
    }
    case 206561:
    {
        returnValue = F("Lichtenberg-Weg");
        break;
    }
    case 206562:
    {
        returnValue = F("Lichtenberger Str.");
        break;
    }
    case 206563:
    {
        returnValue = F("Lichtenberger Weg");
        break;
    }
    case 206564:
    {
        returnValue = F("Lichtenbergerstr.");
        break;
    }
    case 206565:
    {
        returnValue = F("Lichtenberggasse");
        break;
    }
    case 206566:
    {
        returnValue = F("Lichtenbergplatz");
        break;
    }
    case 206567:
    {
        returnValue = F("Lichtenbergstr.");
        break;
    }
    case 206568:
    {
        returnValue = F("Lichtenbergweg");
        break;
    }
    case 206569:
    {
        returnValue = F("Lichtenborner Str.");
        break;
    }
    case 206570:
    {
        returnValue = F("Lichtenbroicher Weg");
        break;
    }
    case 206571:
    {
        returnValue = F("Lichtenbruch");
        break;
    }
    case 206572:
    {
        returnValue = F("Lichtenbrucher Str.");
        break;
    }
    case 206573:
    {
        returnValue = F("Lichtenbrunnstr.");
        break;
    }
    case 206574:
    {
        returnValue = F("Lichtenburger Str.");
        break;
    }
    case 206575:
    {
        returnValue = F("Lichtenburger Tor");
        break;
    }
    case 206576:
    {
        returnValue = F("Lichtenburgweg");
        break;
    }
    case 206577:
    {
        returnValue = F("Lichtenbuscher Str.");
        break;
    }
    case 206578:
    {
        returnValue = F("Lichtenbuscher Weg");
        break;
    }
    case 206579:
    {
        returnValue = F("Lichtenbäumen");
        break;
    }
    case 206580:
    {
        returnValue = F("Lichtenbühlweg");
        break;
    }
    case 206581:
    {
        returnValue = F("Lichtendorfer Str.");
        break;
    }
    case 206582:
    {
        returnValue = F("Lichteneckstr.");
        break;
    }
    case 206583:
    {
        returnValue = F("Lichtenegg");
        break;
    }
    case 206584:
    {
        returnValue = F("Lichtenegger Str.");
        break;
    }
    case 206585:
    {
        returnValue = F("Lichtenegger Traufweg");
        break;
    }
    case 206586:
    {
        returnValue = F("Lichtenegger Weg");
        break;
    }
    case 206587:
    {
        returnValue = F("Lichteneggstr.");
        break;
    }
    case 206588:
    {
        returnValue = F("Lichteneiche");
        break;
    }
    case 206589:
    {
        returnValue = F("Lichteneichen");
        break;
    }
    case 206590:
    {
        returnValue = F("Lichteneichweg");
        break;
    }
    case 206591:
    {
        returnValue = F("Lichtenfelder Str.");
        break;
    }
    case 206592:
    {
        returnValue = F("Lichtenfeldstr.");
        break;
    }
    case 206593:
    {
        returnValue = F("Lichtenfelser Str.");
        break;
    }
    case 206594:
    {
        returnValue = F("Lichtenfelser Weg");
        break;
    }
    case 206595:
    {
        returnValue = F("Lichtengasse");
        break;
    }
    case 206596:
    {
        returnValue = F("Lichtengrund");
        break;
    }
    case 206597:
    {
        returnValue = F("Lichtenhaager Str.");
        break;
    }
    case 206598:
    {
        returnValue = F("Lichtenhagen");
        break;
    }
    case 206599:
    {
        returnValue = F("Lichtenhagener Str.");
        break;
    }
    case 206600:
    {
        returnValue = F("Lichtenhaidestr.");
        break;
    }
    case 206601:
    {
        returnValue = F("Lichtenhain");
        break;
    }
    case 206602:
    {
        returnValue = F("Lichtenhainer Oberweg");
        break;
    }
    case 206603:
    {
        returnValue = F("Lichtenhainer Str.");
        break;
    }
    case 206604:
    {
        returnValue = F("Lichtenhainer Weg");
        break;
    }
    case 206605:
    {
        returnValue = F("Lichtenhaldeweg");
        break;
    }
    case 206606:
    {
        returnValue = F("Lichtenhart");
        break;
    }
    case 206607:
    {
        returnValue = F("Lichtenhof");
        break;
    }
    case 206608:
    {
        returnValue = F("Lichtenhorst");
        break;
    }
    case 206609:
    {
        returnValue = F("Lichtenhorster Str.");
        break;
    }
    case 206610:
    {
        returnValue = F("Lichtenhäger Brink");
        break;
    }
    case 206611:
    {
        returnValue = F("Lichtenhäger Chaussee");
        break;
    }
    case 206612:
    {
        returnValue = F("Lichtenklingenweg");
        break;
    }
    case 206613:
    {
        returnValue = F("Lichtenklinger Str.");
        break;
    }
    case 206614:
    {
        returnValue = F("Lichtenkopfer Weg");
        break;
    }
    case 206615:
    {
        returnValue = F("Lichtenmoorer Str.");
        break;
    }
    case 206616:
    {
        returnValue = F("Lichtenmoorstr.");
        break;
    }
    case 206617:
    {
        returnValue = F("Lichtenower Str.");
        break;
    }
    case 206618:
    {
        returnValue = F("Lichtenower Weg");
        break;
    }
    case 206619:
    {
        returnValue = F("Lichtenpils");
        break;
    }
    case 206620:
    {
        returnValue = F("Lichtenplanie");
        break;
    }
    case 206621:
    {
        returnValue = F("Lichtenplanieweg");
        break;
    }
    case 206622:
    {
        returnValue = F("Lichtenplattenweg");
        break;
    }
    case 206623:
    {
        returnValue = F("Lichtenplatz");
        break;
    }
    case 206624:
    {
        returnValue = F("Lichtenplatzstr.");
        break;
    }
    case 206625:
    {
        returnValue = F("Lichtenrader Chaussee");
        break;
    }
    case 206626:
    {
        returnValue = F("Lichtenrader Str.");
        break;
    }
    case 206627:
    {
        returnValue = F("Lichtensberg");
        break;
    }
    case 206628:
    {
        returnValue = F("Lichtenseer Str.");
        break;
    }
    case 206629:
    {
        returnValue = F("Lichtensteiger Str.");
        break;
    }
    case 206630:
    {
        returnValue = F("Lichtenstein");
        break;
    }
    case 206631:
    {
        returnValue = F("Lichtensteiner Str.");
        break;
    }
    case 206632:
    {
        returnValue = F("Lichtensteiner Weg");
        break;
    }
    case 206633:
    {
        returnValue = F("Lichtensteinplatz");
        break;
    }
    case 206634:
    {
        returnValue = F("Lichtensteinsiedlung");
        break;
    }
    case 206635:
    {
        returnValue = F("Lichtensteinstr.");
        break;
    }
    case 206636:
    {
        returnValue = F("Lichtensteinsträßchen");
        break;
    }
    case 206637:
    {
        returnValue = F("Lichtensteinweg");
        break;
    }
    case 206638:
    {
        returnValue = F("Lichtensterner Str.");
        break;
    }
    case 206639:
    {
        returnValue = F("Lichtensternstr.");
        break;
    }
    case 206640:
    {
        returnValue = F("Lichtenstr.");
        break;
    }
    case 206641:
    {
        returnValue = F("Lichtenstädter Str.");
        break;
    }
    case 206642:
    {
        returnValue = F("Lichtentaler Allee");
        break;
    }
    case 206643:
    {
        returnValue = F("Lichtentaler Str.");
        break;
    }
    case 206644:
    {
        returnValue = F("Lichtentann");
        break;
    }
    case 206645:
    {
        returnValue = F("Lichtentanne");
        break;
    }
    case 206646:
    {
        returnValue = F("Lichtentanner Bahnhof");
        break;
    }
    case 206647:
    {
        returnValue = F("Lichtentanner Park");
        break;
    }
    case 206648:
    {
        returnValue = F("Lichtentanner Str.");
        break;
    }
    case 206649:
    {
        returnValue = F("Lichtentanneweg");
        break;
    }
    case 206650:
    {
        returnValue = F("Lichtenthaler Str.");
        break;
    }
    case 206651:
    {
        returnValue = F("Lichtenturmweg");
        break;
    }
    case 206652:
    {
        returnValue = F("Lichtenvoorder Str.");
        break;
    }
    case 206653:
    {
        returnValue = F("Lichtenwalder Höhe");
        break;
    }
    case 206654:
    {
        returnValue = F("Lichtenwalder Str.");
        break;
    }
    case 206655:
    {
        returnValue = F("Lichtenwalder Weg");
        break;
    }
    case 206656:
    {
        returnValue = F("Lichtenweg");
        break;
    }
    case 206657:
    {
        returnValue = F("Lichtenwiesen");
        break;
    }
    case 206658:
    {
        returnValue = F("Lichtenwörther Str.");
        break;
    }
    case 206659:
    {
        returnValue = F("Lichtenäcker");
        break;
    }
    case 206660:
    {
        returnValue = F("Lichtenäcker Str.");
        break;
    }
    case 206661:
    {
        returnValue = F("Lichtenöd");
        break;
    }
    case 206662:
    {
        returnValue = F("Lichter Weg");
        break;
    }
    case 206663:
    {
        returnValue = F("Lichterbach");
        break;
    }
    case 206664:
    {
        returnValue = F("Lichterberger Str.");
        break;
    }
    case 206665:
    {
        returnValue = F("Lichterfelde");
        break;
    }
    case 206666:
    {
        returnValue = F("Lichterfelder Allee");
        break;
    }
    case 206667:
    {
        returnValue = F("Lichterfelder Str.");
        break;
    }
    case 206668:
    {
        returnValue = F("Lichterfelder Waldstr.");
        break;
    }
    case 206669:
    {
        returnValue = F("Lichterfelder Weg");
        break;
    }
    case 206670:
    {
        returnValue = F("Lichterfelder Weidenweg");
        break;
    }
    case 206671:
    {
        returnValue = F("Lichtes Tal");
        break;
    }
    case 206672:
    {
        returnValue = F("Lichtestr.");
        break;
    }
    case 206673:
    {
        returnValue = F("Lichtetalstr.");
        break;
    }
    case 206674:
    {
        returnValue = F("Lichteweg");
        break;
    }
    case 206675:
    {
        returnValue = F("Lichtfleckstr.");
        break;
    }
    case 206676:
    {
        returnValue = F("Lichtgasse");
        break;
    }
    case 206677:
    {
        returnValue = F("Lichtgrasweg");
        break;
    }
    case 206678:
    {
        returnValue = F("Lichtgutgasse");
        break;
    }
    case 206679:
    {
        returnValue = F("Lichthammerschneise");
        break;
    }
    case 206680:
    {
        returnValue = F("Lichthof");
        break;
    }
    case 206681:
    {
        returnValue = F("Lichtholz-Traufweg");
        break;
    }
    case 206682:
    {
        returnValue = F("Lichtholzstr.");
        break;
    }
    case 206683:
    {
        returnValue = F("Lichtholzweg");
        break;
    }
    case 206684:
    {
        returnValue = F("Lichthornweg");
        break;
    }
    case 206685:
    {
        returnValue = F("Lichthäupte");
        break;
    }
    case 206686:
    {
        returnValue = F("Lichthäusleweg");
        break;
    }
    case 206687:
    {
        returnValue = F("Lichthölzelweg");
        break;
    }
    case 206688:
    {
        returnValue = F("Lichthölzeweg");
        break;
    }
    case 206689:
    {
        returnValue = F("Lichthölzle Lehrpfad");
        break;
    }
    case 206690:
    {
        returnValue = F("Lichtinger Weg");
        break;
    }
    case 206691:
    {
        returnValue = F("Lichtinghagenstr.");
        break;
    }
    case 206692:
    {
        returnValue = F("Lichtleitung");
        break;
    }
    case 206693:
    {
        returnValue = F("Lichtleitungsweg");
        break;
    }
    case 206694:
    {
        returnValue = F("Lichtlöcherberg");
        break;
    }
    case 206695:
    {
        returnValue = F("Lichtmecke");
        break;
    }
    case 206696:
    {
        returnValue = F("Lichtnelke");
        break;
    }
    case 206697:
    {
        returnValue = F("Lichtnelkenweg");
        break;
    }
    case 206698:
    {
        returnValue = F("Lichtner Str.");
        break;
    }
    case 206699:
    {
        returnValue = F("Lichtsberger Weg");
        break;
    }
    case 206700:
    {
        returnValue = F("Lichtscheider Str.");
        break;
    }
    case 206701:
    {
        returnValue = F("Lichtseebergschneise");
        break;
    }
    case 206702:
    {
        returnValue = F("Lichtspielgasse");
        break;
    }
    case 206703:
    {
        returnValue = F("Lichtstr.");
        break;
    }
    case 206704:
    {
        returnValue = F("Lichttalsweg");
        break;
    }
    case 206705:
    {
        returnValue = F("Lichtweg");
        break;
    }
    case 206706:
    {
        returnValue = F("Lichtwerkgasse");
        break;
    }
    case 206707:
    {
        returnValue = F("Lichtwerstr.");
        break;
    }
    case 206708:
    {
        returnValue = F("Lichtwiesenweg");
        break;
    }
    case 206709:
    {
        returnValue = F("Lichtäcker");
        break;
    }
    case 206710:
    {
        returnValue = F("Lichtäckerstr.");
        break;
    }
    case 206711:
    {
        returnValue = F("Lichweg");
        break;
    }
    case 206712:
    {
        returnValue = F("Lichwer Str.");
        break;
    }
    case 206713:
    {
        returnValue = F("Lickbenden");
        break;
    }
    case 206714:
    {
        returnValue = F("Lickenberg");
        break;
    }
    case 206715:
    {
        returnValue = F("Lickumstr.");
        break;
    }
    case 206716:
    {
        returnValue = F("Lida-Gustava-Heymann-Str.");
        break;
    }
    case 206717:
    {
        returnValue = F("Liddbuschstr.");
        break;
    }
    case 206718:
    {
        returnValue = F("Liddenweg");
        break;
    }
    case 206719:
    {
        returnValue = F("Liddenwegster Lohne");
        break;
    }
    case 206720:
    {
        returnValue = F("Liddy-Ebersberger-Str.");
        break;
    }
    case 206721:
    {
        returnValue = F("Lidellplatz");
        break;
    }
    case 206722:
    {
        returnValue = F("Lidellweg");
        break;
    }
    case 206723:
    {
        returnValue = F("Lidenweg");
        break;
    }
    case 206724:
    {
        returnValue = F("Lidingstr.");
        break;
    }
    case 206725:
    {
        returnValue = F("Lidmannsklinge");
        break;
    }
    case 206726:
    {
        returnValue = F("Liebau");
        break;
    }
    case 206727:
    {
        returnValue = F("Liebauer Str.");
        break;
    }
    case 206728:
    {
        returnValue = F("Liebauer Weg");
        break;
    }
    case 206729:
    {
        returnValue = F("Liebaustr.");
        break;
    }
    case 206730:
    {
        returnValue = F("Liebauweg");
        break;
    }
    case 206731:
    {
        returnValue = F("Liebberg");
        break;
    }
    case 206732:
    {
        returnValue = F("Liebchengasse");
        break;
    }
    case 206733:
    {
        returnValue = F("Liebeckstr.");
        break;
    }
    case 206734:
    {
        returnValue = F("Liebegaster Weg");
        break;
    }
    case 206735:
    {
        returnValue = F("Liebelsberger Weg");
        break;
    }
    case 206736:
    {
        returnValue = F("Liebemühler Str.");
        break;
    }
    case 206737:
    {
        returnValue = F("Lieben");
        break;
    }
    case 206738:
    {
        returnValue = F("Liebenau");
        break;
    }
    case 206739:
    {
        returnValue = F("Liebenauer Berg");
        break;
    }
    case 206740:
    {
        returnValue = F("Liebenauer Str.");
        break;
    }
    case 206741:
    {
        returnValue = F("Liebenauer Weg");
        break;
    }
    case 206742:
    {
        returnValue = F("Liebenaustr.");
        break;
    }
    case 206743:
    {
        returnValue = F("Liebenauweg");
        break;
    }
    case 206744:
    {
        returnValue = F("Liebenbachstr.");
        break;
    }
    case 206745:
    {
        returnValue = F("Liebenberg");
        break;
    }
    case 206746:
    {
        returnValue = F("Liebenberger Str.");
        break;
    }
    case 206747:
    {
        returnValue = F("Liebenberger Weg");
        break;
    }
    case 206748:
    {
        returnValue = F("Liebenbergstr.");
        break;
    }
    case 206749:
    {
        returnValue = F("Liebenburgstr.");
        break;
    }
    case 206750:
    {
        returnValue = F("Liebendorferstr.");
        break;
    }
    case 206751:
    {
        returnValue = F("Liebenecker Weg");
        break;
    }
    case 206752:
    {
        returnValue = F("Liebeneckerstr.");
        break;
    }
    case 206753:
    {
        returnValue = F("Liebeneckerweg");
        break;
    }
    case 206754:
    {
        returnValue = F("Liebeneckstr.");
        break;
    }
    case 206755:
    {
        returnValue = F("Liebenfelsstr.");
        break;
    }
    case 206756:
    {
        returnValue = F("Liebengasse");
        break;
    }
    case 206757:
    {
        returnValue = F("Liebengrabenweg");
        break;
    }
    case 206758:
    {
        returnValue = F("Liebengrund");
        break;
    }
    case 206759:
    {
        returnValue = F("Liebengrün");
        break;
    }
    case 206760:
    {
        returnValue = F("Liebenhaller Str.");
        break;
    }
    case 206761:
    {
        returnValue = F("Liebenhof");
        break;
    }
    case 206762:
    {
        returnValue = F("Liebenhofen");
        break;
    }
    case 206763:
    {
        returnValue = F("Liebenhofer Str.");
        break;
    }
    case 206764:
    {
        returnValue = F("Liebenhofstr.");
        break;
    }
    case 206765:
    {
        returnValue = F("Liebenroder Schulberg");
        break;
    }
    case 206766:
    {
        returnValue = F("Liebenroder Siedlung");
        break;
    }
    case 206767:
    {
        returnValue = F("Liebenröder Str.");
        break;
    }
    case 206768:
    {
        returnValue = F("Liebenscheider Str.");
        break;
    }
    case 206769:
    {
        returnValue = F("Liebenscheider Weg");
        break;
    }
    case 206770:
    {
        returnValue = F("Liebenstadt");
        break;
    }
    case 206771:
    {
        returnValue = F("Liebenstein");
        break;
    }
    case 206772:
    {
        returnValue = F("Liebensteiner Str.");
        break;
    }
    case 206773:
    {
        returnValue = F("Liebensteiner Weg");
        break;
    }
    case 206774:
    {
        returnValue = F("Liebensteinstr.");
        break;
    }
    case 206775:
    {
        returnValue = F("Liebenstädter Str.");
        break;
    }
    case 206776:
    {
        returnValue = F("Liebenthal");
        break;
    }
    case 206777:
    {
        returnValue = F("Liebenthaler Dorfstr.");
        break;
    }
    case 206778:
    {
        returnValue = F("Liebenthaler Str.");
        break;
    }
    case 206779:
    {
        returnValue = F("Liebenthaler Weg");
        break;
    }
    case 206780:
    {
        returnValue = F("Liebenthannstr.");
        break;
    }
    case 206781:
    {
        returnValue = F("Liebenwahnscher Plan");
        break;
    }
    case 206782:
    {
        returnValue = F("Liebenwalder Ausbau");
        break;
    }
    case 206783:
    {
        returnValue = F("Liebenwalder Chaussee");
        break;
    }
    case 206784:
    {
        returnValue = F("Liebenwalder Damm");
        break;
    }
    case 206785:
    {
        returnValue = F("Liebenwalder Ende");
        break;
    }
    case 206786:
    {
        returnValue = F("Liebenwalder Schleuse");
        break;
    }
    case 206787:
    {
        returnValue = F("Liebenwalder Str.");
        break;
    }
    case 206788:
    {
        returnValue = F("Liebenwalder Weg");
        break;
    }
    case 206789:
    {
        returnValue = F("Liebenweg");
        break;
    }
    case 206790:
    {
        returnValue = F("Liebenweiler");
        break;
    }
    case 206791:
    {
        returnValue = F("Liebenweiler Str.");
        break;
    }
    case 206792:
    {
        returnValue = F("Liebenwerdaer Chaussee");
        break;
    }
    case 206793:
    {
        returnValue = F("Liebenwerdaer Str.");
        break;
    }
    case 206794:
    {
        returnValue = F("Liebenzeller Str.");
        break;
    }
    case 206795:
    {
        returnValue = F("Liebenzeller Weg");
        break;
    }
    case 206796:
    {
        returnValue = F("Liebenäckerstr.");
        break;
    }
    case 206797:
    {
        returnValue = F("Liebenäckerweg");
        break;
    }
    case 206798:
    {
        returnValue = F("Lieberberge");
        break;
    }
    case 206799:
    {
        returnValue = F("Liebergallshaus");
        break;
    }
    case 206800:
    {
        returnValue = F("Liebergstr.");
        break;
    }
    case 206801:
    {
        returnValue = F("Lieberhausener Str.");
        break;
    }
    case 206802:
    {
        returnValue = F("Lieberhofweg");
        break;
    }
    case 206803:
    {
        returnValue = F("Lieberichsweg");
        break;
    }
    case 206804:
    {
        returnValue = F("Lieberkühnstr.");
        break;
    }
    case 206805:
    {
        returnValue = F("Liebermannring");
        break;
    }
    case 206806:
    {
        returnValue = F("Liebermannstr.");
        break;
    }
    case 206807:
    {
        returnValue = F("Liebermannweg");
        break;
    }
    case 206808:
    {
        returnValue = F("Liebermeisterstr.");
        break;
    }
    case 206809:
    {
        returnValue = F("Lieberoser Str.");
        break;
    }
    case 206810:
    {
        returnValue = F("Liebersbacher Str.");
        break;
    }
    case 206811:
    {
        returnValue = F("Liebersberger Str.");
        break;
    }
    case 206812:
    {
        returnValue = F("Liebersbronner Str.");
        break;
    }
    case 206813:
    {
        returnValue = F("Liebersdorfer Str.");
        break;
    }
    case 206814:
    {
        returnValue = F("Liebersee");
        break;
    }
    case 206815:
    {
        returnValue = F("Liebertsöder Str.");
        break;
    }
    case 206816:
    {
        returnValue = F("Liebertweg");
        break;
    }
    case 206817:
    {
        returnValue = F("Liebertwolkwitzer Str.");
        break;
    }
    case 206818:
    {
        returnValue = F("Lieberwasenstr.");
        break;
    }
    case 206819:
    {
        returnValue = F("Lieberweg");
        break;
    }
    case 206820:
    {
        returnValue = F("Liebes-Kirsch-Allee");
        break;
    }
    case 206821:
    {
        returnValue = F("Liebesallee");
        break;
    }
    case 206822:
    {
        returnValue = F("Liebesbankweg");
        break;
    }
    case 206823:
    {
        returnValue = F("Liebesbrücke");
        break;
    }
    case 206824:
    {
        returnValue = F("Liebesdorfer Str.");
        break;
    }
    case 206825:
    {
        returnValue = F("Liebesdörfel");
        break;
    }
    case 206826:
    {
        returnValue = F("Liebeseicheweg");
        break;
    }
    case 206827:
    {
        returnValue = F("Liebesgasse");
        break;
    }
    case 206828:
    {
        returnValue = F("Liebesgrund");
        break;
    }
    case 206829:
    {
        returnValue = F("Liebesinsel");
        break;
    }
    case 206830:
    {
        returnValue = F("Liebespfad");
        break;
    }
    case 206831:
    {
        returnValue = F("Liebessteig");
        break;
    }
    case 206832:
    {
        returnValue = F("Liebestr.");
        break;
    }
    case 206833:
    {
        returnValue = F("Liebestunnel");
        break;
    }
    case 206834:
    {
        returnValue = F("Liebesweg");
        break;
    }
    case 206835:
    {
        returnValue = F("Liebetalsweg");
        break;
    }
    case 206836:
    {
        returnValue = F("Liebethaler Grund");
        break;
    }
    case 206837:
    {
        returnValue = F("Liebethaler Markt");
        break;
    }
    case 206838:
    {
        returnValue = F("Liebethaler Str.");
        break;
    }
    case 206839:
    {
        returnValue = F("Liebethaler Weg");
        break;
    }
    case 206840:
    {
        returnValue = F("Liebetraustr.");
        break;
    }
    case 206841:
    {
        returnValue = F("Liebezeitstr.");
        break;
    }
    case 206842:
    {
        returnValue = F("Liebfrauenberg");
        break;
    }
    case 206843:
    {
        returnValue = F("Liebfrauenbergstr.");
        break;
    }
    case 206844:
    {
        returnValue = F("Liebfrauenbitz");
        break;
    }
    case 206845:
    {
        returnValue = F("Liebfrauenbreite");
        break;
    }
    case 206846:
    {
        returnValue = F("Liebfrauenbrunnstr.");
        break;
    }
    case 206847:
    {
        returnValue = F("Liebfrauenfeld");
        break;
    }
    case 206848:
    {
        returnValue = F("Liebfrauengasse");
        break;
    }
    case 206849:
    {
        returnValue = F("Liebfrauenheidestr.");
        break;
    }
    case 206850:
    {
        returnValue = F("Liebfrauenkamp");
        break;
    }
    case 206851:
    {
        returnValue = F("Liebfrauenkapelle");
        break;
    }
    case 206852:
    {
        returnValue = F("Liebfrauenkirchhof");
        break;
    }
    case 206853:
    {
        returnValue = F("Liebfrauenkirchplatz");
        break;
    }
    case 206854:
    {
        returnValue = F("Liebfrauenkirchstr.");
        break;
    }
    case 206855:
    {
        returnValue = F("Liebfrauenplatz");
        break;
    }
    case 206856:
    {
        returnValue = F("Liebfrauenring");
        break;
    }
    case 206857:
    {
        returnValue = F("Liebfrauensee");
        break;
    }
    case 206858:
    {
        returnValue = F("Liebfrauenstift");
        break;
    }
    case 206859:
    {
        returnValue = F("Liebfrauenstr.");
        break;
    }
    case 206860:
    {
        returnValue = F("Liebfrauentrift");
        break;
    }
    case 206861:
    {
        returnValue = F("Liebfrauenweg");
        break;
    }
    case 206862:
    {
        returnValue = F("Liebhaldenweg");
        break;
    }
    case 206863:
    {
        returnValue = F("Liebhardtstr.");
        break;
    }
    case 206864:
    {
        returnValue = F("Liebhartstr.");
        break;
    }
    case 206865:
    {
        returnValue = F("Liebherr-Weg");
        break;
    }
    case 206866:
    {
        returnValue = F("Liebherrstr.");
        break;
    }
    case 206867:
    {
        returnValue = F("Liebhof");
        break;
    }
    case 206868:
    {
        returnValue = F("Liebichstr.");
        break;
    }
    case 206869:
    {
        returnValue = F("Liebiegstr.");
        break;
    }
    case 206870:
    {
        returnValue = F("Liebigplatz");
        break;
    }
    case 206871:
    {
        returnValue = F("Liebigring");
        break;
    }
    case 206872:
    {
        returnValue = F("Liebigstr.");
        break;
    }
    case 206873:
    {
        returnValue = F("Liebigtreppe");
        break;
    }
    case 206874:
    {
        returnValue = F("Liebigweg");
        break;
    }
    case 206875:
    {
        returnValue = F("Liebkamp");
        break;
    }
    case 206876:
    {
        returnValue = F("Liebknechtstr.");
        break;
    }
    case 206877:
    {
        returnValue = F("Liebleinstr.");
        break;
    }
    case 206878:
    {
        returnValue = F("Liebleiten");
        break;
    }
    case 206879:
    {
        returnValue = F("Lieblfeld");
        break;
    }
    case 206880:
    {
        returnValue = F("Liebliches Tal");
        break;
    }
    case 206881:
    {
        returnValue = F("Lieblinger Str.");
        break;
    }
    case 206882:
    {
        returnValue = F("Lieblingskämpen");
        break;
    }
    case 206883:
    {
        returnValue = F("Lieblingstr.");
        break;
    }
    case 206884:
    {
        returnValue = F("Liebloser Str.");
        break;
    }
    case 206885:
    {
        returnValue = F("Lieblstr.");
        break;
    }
    case 206886:
    {
        returnValue = F("Liebmannsberg");
        break;
    }
    case 206887:
    {
        returnValue = F("Liebmannstr.");
        break;
    }
    case 206888:
    {
        returnValue = F("Liebnitzstr.");
        break;
    }
    case 206889:
    {
        returnValue = F("Liebnitzweg");
        break;
    }
    case 206890:
    {
        returnValue = F("Lieboldstr.");
        break;
    }
    case 206891:
    {
        returnValue = F("Liebrecht'scher Garten");
        break;
    }
    case 206892:
    {
        returnValue = F("Liebrechtstr.");
        break;
    }
    case 206893:
    {
        returnValue = F("Liebschwitzer Str.");
        break;
    }
    case 206894:
    {
        returnValue = F("Liebsdorf");
        break;
    }
    case 206895:
    {
        returnValue = F("Liebsdorfer Eck");
        break;
    }
    case 206896:
    {
        returnValue = F("Liebsdorfer Str.");
        break;
    }
    case 206897:
    {
        returnValue = F("Liebshausener Str.");
        break;
    }
    case 206898:
    {
        returnValue = F("Liebssiedlung");
        break;
    }
    case 206899:
    {
        returnValue = F("Liebstedter Str.");
        break;
    }
    case 206900:
    {
        returnValue = F("Liebstedter Weg");
        break;
    }
    case 206901:
    {
        returnValue = F("Liebstein");
        break;
    }
    case 206902:
    {
        returnValue = F("Liebsteiner Str.");
        break;
    }
    case 206903:
    {
        returnValue = F("Liebsthaler Str.");
        break;
    }
    case 206904:
    {
        returnValue = F("Liebstr.");
        break;
    }
    case 206905:
    {
        returnValue = F("Liebstädter Str.");
        break;
    }
    case 206906:
    {
        returnValue = F("Liebstöckelweg");
        break;
    }
    case 206907:
    {
        returnValue = F("Liebträgerweg");
        break;
    }
    case 206908:
    {
        returnValue = F("Liebwartweg");
        break;
    }
    case 206909:
    {
        returnValue = F("Liebwiesweg");
        break;
    }
    case 206910:
    {
        returnValue = F("Liebzer Ring");
        break;
    }
    case 206911:
    {
        returnValue = F("Liebühl");
        break;
    }
    case 206912:
    {
        returnValue = F("Liechewäch");
        break;
    }
    case 206913:
    {
        returnValue = F("Liechtensteinplatz");
        break;
    }
    case 206914:
    {
        returnValue = F("Liechtensteinstr.");
        break;
    }
    case 206915:
    {
        returnValue = F("Liechtersmatten");
        break;
    }
    case 206916:
    {
        returnValue = F("Liecker Mühle");
        break;
    }
    case 206917:
    {
        returnValue = F("Liecker Str.");
        break;
    }
    case 206918:
    {
        returnValue = F("Lied");
        break;
    }
    case 206919:
    {
        returnValue = F("Liedbachstr.");
        break;
    }
    case 206920:
    {
        returnValue = F("Liedberger Str.");
        break;
    }
    case 206921:
    {
        returnValue = F("Liedberger Weg");
        break;
    }
    case 206922:
    {
        returnValue = F("Liede");
        break;
    }
    case 206923:
    {
        returnValue = F("Liedekahle");
        break;
    }
    case 206924:
    {
        returnValue = F("Liedekerker Str.");
        break;
    }
    case 206925:
    {
        returnValue = F("Liedelshofer Str.");
        break;
    }
    case 206926:
    {
        returnValue = F("Liedengraben");
        break;
    }
    case 206927:
    {
        returnValue = F("Liedengässchen");
        break;
    }
    case 206928:
    {
        returnValue = F("Liedenstr.");
        break;
    }
    case 206929:
    {
        returnValue = F("Lieder Hof");
        break;
    }
    case 206930:
    {
        returnValue = F("Lieder Str.");
        break;
    }
    case 206931:
    {
        returnValue = F("Liederacker");
        break;
    }
    case 206932:
    {
        returnValue = F("Liederainstr.");
        break;
    }
    case 206933:
    {
        returnValue = F("Liederbacher Str.");
        break;
    }
    case 206934:
    {
        returnValue = F("Liederbacher Weg");
        break;
    }
    case 206935:
    {
        returnValue = F("Liederbachstr.");
        break;
    }
    case 206936:
    {
        returnValue = F("Liederbachweg");
        break;
    }
    case 206937:
    {
        returnValue = F("Liederdorfer Str.");
        break;
    }
    case 206938:
    {
        returnValue = F("Liederhallenweg");
        break;
    }
    case 206939:
    {
        returnValue = F("Liederkranzstr.");
        break;
    }
    case 206940:
    {
        returnValue = F("Liedermatte");
        break;
    }
    case 206941:
    {
        returnValue = F("Liederner Höfgraben");
        break;
    }
    case 206942:
    {
        returnValue = F("Liederner Ringstr.");
        break;
    }
    case 206943:
    {
        returnValue = F("Liederner Str.");
        break;
    }
    case 206944:
    {
        returnValue = F("Liedersdorfer Hauptstr.");
        break;
    }
    case 206945:
    {
        returnValue = F("Liedersdorfer Str.");
        break;
    }
    case 206946:
    {
        returnValue = F("Liederstr.");
        break;
    }
    case 206947:
    {
        returnValue = F("Liederäcker");
        break;
    }
    case 206948:
    {
        returnValue = F("Liedeweg");
        break;
    }
    case 206949:
    {
        returnValue = F("Liedholz");
        break;
    }
    case 206950:
    {
        returnValue = F("Liedhornstr.");
        break;
    }
    case 206951:
    {
        returnValue = F("Liedinger Weg");
        break;
    }
    case 206952:
    {
        returnValue = F("Liedkamp");
        break;
    }
    case 206953:
    {
        returnValue = F("Liedlberg");
        break;
    }
    case 206954:
    {
        returnValue = F("Liedlstr.");
        break;
    }
    case 206955:
    {
        returnValue = F("Liedmannstr.");
        break;
    }
    case 206956:
    {
        returnValue = F("Liedolsheimer Str.");
        break;
    }
    case 206957:
    {
        returnValue = F("Liedolsheimer Weg");
        break;
    }
    case 206958:
    {
        returnValue = F("Liedstr.");
        break;
    }
    case 206959:
    {
        returnValue = F("Liedtstr.");
        break;
    }
    case 206960:
    {
        returnValue = F("Liedweg");
        break;
    }
    case 206961:
    {
        returnValue = F("Liefelds Grund");
        break;
    }
    case 206962:
    {
        returnValue = F("Liefeldstr.");
        break;
    }
    case 206963:
    {
        returnValue = F("Liefenbusch");
        break;
    }
    case 206964:
    {
        returnValue = F("Liefenroth");
        break;
    }
    case 206965:
    {
        returnValue = F("Liefenweg");
        break;
    }
    case 206966:
    {
        returnValue = F("Lieferantenzufahrt");
        break;
    }
    case 206967:
    {
        returnValue = F("Liefergasse");
        break;
    }
    case 206968:
    {
        returnValue = F("Liegaer Str.");
        break;
    }
    case 206969:
    {
        returnValue = F("Liegauer Str.");
        break;
    }
    case 206970:
    {
        returnValue = F("Liegelstr.");
        break;
    }
    case 206971:
    {
        returnValue = F("Liegelweg");
        break;
    }
    case 206972:
    {
        returnValue = F("Liegensberg");
        break;
    }
    case 206973:
    {
        returnValue = F("Lieges");
        break;
    }
    case 206974:
    {
        returnValue = F("Liegestelle 10");
        break;
    }
    case 206975:
    {
        returnValue = F("Liegestelle 11");
        break;
    }
    case 206976:
    {
        returnValue = F("Liegestelle 12");
        break;
    }
    case 206977:
    {
        returnValue = F("Liegestelle 13");
        break;
    }
    case 206978:
    {
        returnValue = F("Liegestelle 6");
        break;
    }
    case 206979:
    {
        returnValue = F("Liegestelle 7");
        break;
    }
    case 206980:
    {
        returnValue = F("Liegestelle 8");
        break;
    }
    case 206981:
    {
        returnValue = F("Liegestelle 9");
        break;
    }
    case 206982:
    {
        returnValue = F("Liegewiese");
        break;
    }
    case 206983:
    {
        returnValue = F("Liegewiese Freilinger See");
        break;
    }
    case 206984:
    {
        returnValue = F("Liegewiese Naturfreibad Eiserbachsee");
        break;
    }
    case 206985:
    {
        returnValue = F("Liegewiese Schwimmbad");
        break;
    }
    case 206986:
    {
        returnValue = F("Liegewiese WLSB");
        break;
    }
    case 206987:
    {
        returnValue = F("Liegewiese am Manteler Weiher");
        break;
    }
    case 206988:
    {
        returnValue = F("Liegewiese am Rothenbürger Weiher");
        break;
    }
    case 206989:
    {
        returnValue = F("Liegewiesen Niedernhaller Bäderlandschaft");
        break;
    }
    case 206990:
    {
        returnValue = F("Liegnitzer Gasse");
        break;
    }
    case 206991:
    {
        returnValue = F("Liegnitzer Hof");
        break;
    }
    case 206992:
    {
        returnValue = F("Liegnitzer Platz");
        break;
    }
    case 206993:
    {
        returnValue = F("Liegnitzer Str.");
        break;
    }
    case 206994:
    {
        returnValue = F("Liegnitzer Weg");
        break;
    }
    case 206995:
    {
        returnValue = F("Liegnitzstr.");
        break;
    }
    case 206996:
    {
        returnValue = F("Liegsalzstr.");
        break;
    }
    case 206997:
    {
        returnValue = F("Liehbergweg");
        break;
    }
    case 206998:
    {
        returnValue = F("Liehenbachstr.");
        break;
    }
    case 206999:
    {
        returnValue = F("Liehrstr.");
        break;
    }
    case 207000:
    {
        returnValue = F("Liek Gang");
        break;
    }
    case 207001:
    {
        returnValue = F("Liekbreen");
        break;
    }
    case 207002:
    {
        returnValue = F("Liekdalsredder");
        break;
    }
    case 207003:
    {
        returnValue = F("Lieke Dör");
        break;
    }
    case 207004:
    {
        returnValue = F("Liekedeweg");
        break;
    }
    case 207005:
    {
        returnValue = F("Liekefettstr.");
        break;
    }
    case 207006:
    {
        returnValue = F("Liekeweg");
        break;
    }
    case 207007:
    {
        returnValue = F("Liekpad");
        break;
    }
    case 207008:
    {
        returnValue = F("Liekstegge");
        break;
    }
    case 207009:
    {
        returnValue = F("Liekutweg");
        break;
    }
    case 207010:
    {
        returnValue = F("Liekweg");
        break;
    }
    case 207011:
    {
        returnValue = F("Liekweger Str.");
        break;
    }
    case 207012:
    {
        returnValue = F("Lielbuckweg");
        break;
    }
    case 207013:
    {
        returnValue = F("Lieler Str.");
        break;
    }
    case 207014:
    {
        returnValue = F("Lielgrabenweg");
        break;
    }
    case 207015:
    {
        returnValue = F("Lielsgasse");
        break;
    }
    case 207016:
    {
        returnValue = F("Liemannsklinge");
        break;
    }
    case 207017:
    {
        returnValue = F("Liemarstr.");
        break;
    }
    case 207018:
    {
        returnValue = F("Liemeckestr.");
        break;
    }
    case 207019:
    {
        returnValue = F("Liemeckeweg");
        break;
    }
    case 207020:
    {
        returnValue = F("Liemehnaer Str.");
        break;
    }
    case 207021:
    {
        returnValue = F("Liemer Str.");
        break;
    }
    case 207022:
    {
        returnValue = F("Liemer Weg");
        break;
    }
    case 207023:
    {
        returnValue = F("Liemersbacher Str.");
        break;
    }
    case 207024:
    {
        returnValue = F("Liemersweg");
        break;
    }
    case 207025:
    {
        returnValue = F("Liemker Str.");
        break;
    }
    case 207026:
    {
        returnValue = F("Liemorgen");
        break;
    }
    case 207027:
    {
        returnValue = F("Lienau-Park");
        break;
    }
    case 207028:
    {
        returnValue = F("Lienaupark");
        break;
    }
    case 207029:
    {
        returnValue = F("Lienaus Allee");
        break;
    }
    case 207030:
    {
        returnValue = F("Lienaustr.");
        break;
    }
    case 207031:
    {
        returnValue = F("Lienbahnstr.");
        break;
    }
    case 207032:
    {
        returnValue = F("Lienberg");
        break;
    }
    case 207033:
    {
        returnValue = F("Lienbusch");
        break;
    }
    case 207034:
    {
        returnValue = F("Liendlage");
        break;
    }
    case 207035:
    {
        returnValue = F("Lienen");
        break;
    }
    case 207036:
    {
        returnValue = F("Lienener Damm");
        break;
    }
    case 207037:
    {
        returnValue = F("Lienener Str.");
        break;
    }
    case 207038:
    {
        returnValue = F("Lienenkamp");
        break;
    }
    case 207039:
    {
        returnValue = F("Lienenkampsweg");
        break;
    }
    case 207040:
    {
        returnValue = F("Lienenklausweg");
        break;
    }
    case 207041:
    {
        returnValue = F("Lienenkämperstr.");
        break;
    }
    case 207042:
    {
        returnValue = F("Lienenweg");
        break;
    }
    case 207043:
    {
        returnValue = F("Lienerbrücke");
        break;
    }
    case 207044:
    {
        returnValue = F("Lienerstr.");
        break;
    }
    case 207045:
    {
        returnValue = F("Lienerts Heide");
        break;
    }
    case 207046:
    {
        returnValue = F("Lienertstr.");
        break;
    }
    case 207047:
    {
        returnValue = F("Lieneschweg");
        break;
    }
    case 207048:
    {
        returnValue = F("Lienestr.");
        break;
    }
    case 207049:
    {
        returnValue = F("Lienewitzseeallee");
        break;
    }
    case 207050:
    {
        returnValue = F("Lienewitzweg");
        break;
    }
    case 207051:
    {
        returnValue = F("Lieneworth");
        break;
    }
    case 207052:
    {
        returnValue = F("Lienhardplatz");
        break;
    }
    case 207053:
    {
        returnValue = F("Lienhardstr.");
        break;
    }
    case 207054:
    {
        returnValue = F("Lienhart-Beys-Str.");
        break;
    }
    case 207055:
    {
        returnValue = F("Lienhartstr.");
        break;
    }
    case 207056:
    {
        returnValue = F("Lienheimer Str.");
        break;
    }
    case 207057:
    {
        returnValue = F("Lienhöffts Gang");
        break;
    }
    case 207058:
    {
        returnValue = F("Lienkamp");
        break;
    }
    case 207059:
    {
        returnValue = F("Lienkolk");
        break;
    }
    case 207060:
    {
        returnValue = F("Lienkämper");
        break;
    }
    case 207061:
    {
        returnValue = F("Liensch");
        break;
    }
    case 207062:
    {
        returnValue = F("Lienseestr.");
        break;
    }
    case 207063:
    {
        returnValue = F("Liensfelder Kirchenweg");
        break;
    }
    case 207064:
    {
        returnValue = F("Lienweg");
        break;
    }
    case 207065:
    {
        returnValue = F("Lienworth");
        break;
    }
    case 207066:
    {
        returnValue = F("Lienzing");
        break;
    }
    case 207067:
    {
        returnValue = F("Lienzinger Moos");
        break;
    }
    case 207068:
    {
        returnValue = F("Lienzinger Str.");
        break;
    }
    case 207069:
    {
        returnValue = F("Liepe");
        break;
    }
    case 207070:
    {
        returnValue = F("Liepelsland");
        break;
    }
    case 207071:
    {
        returnValue = F("Liepen");
        break;
    }
    case 207072:
    {
        returnValue = F("Liepener Str.");
        break;
    }
    case 207073:
    {
        returnValue = F("Lieper Amtsweg");
        break;
    }
    case 207074:
    {
        returnValue = F("Lieper Reitweg");
        break;
    }
    case 207075:
    {
        returnValue = F("Lieper Str.");
        break;
    }
    case 207076:
    {
        returnValue = F("Lieper Weg");
        break;
    }
    case 207077:
    {
        returnValue = F("Lieper Wegg");
        break;
    }
    case 207078:
    {
        returnValue = F("Lieperkingstr.");
        break;
    }
    case 207079:
    {
        returnValue = F("Liepestr.");
        break;
    }
    case 207080:
    {
        returnValue = F("Liepeweg");
        break;
    }
    case 207081:
    {
        returnValue = F("Liepgartener Str.");
        break;
    }
    case 207082:
    {
        returnValue = F("Liepnitzweg");
        break;
    }
    case 207083:
    {
        returnValue = F("Liepolding");
        break;
    }
    case 207084:
    {
        returnValue = F("Liepser Weg");
        break;
    }
    case 207085:
    {
        returnValue = F("Lierbachstr.");
        break;
    }
    case 207086:
    {
        returnValue = F("Lierberg");
        break;
    }
    case 207087:
    {
        returnValue = F("Lierengraben");
        break;
    }
    case 207088:
    {
        returnValue = F("Lierestr.");
        break;
    }
    case 207089:
    {
        returnValue = F("Lierfelder Mühle");
        break;
    }
    case 207090:
    {
        returnValue = F("Liergasse");
        break;
    }
    case 207091:
    {
        returnValue = F("Lieritzhofen");
        break;
    }
    case 207092:
    {
        returnValue = F("Lieritzhöfer Str.");
        break;
    }
    case 207093:
    {
        returnValue = F("Lierloch");
        break;
    }
    case 207094:
    {
        returnValue = F("Liernstr.");
        break;
    }
    case 207095:
    {
        returnValue = F("Liersbachtal");
        break;
    }
    case 207096:
    {
        returnValue = F("Liersbachweg");
        break;
    }
    case 207097:
    {
        returnValue = F("Liersberger Viezallee");
        break;
    }
    case 207098:
    {
        returnValue = F("Liesbachstr.");
        break;
    }
    case 207099:
    {
        returnValue = F("Liesbergstr.");
        break;
    }
    case 207100:
    {
        returnValue = F("Liesbet-Dill-Str.");
        break;
    }
    case 207101:
    {
        returnValue = F("Liesborner Str.");
        break;
    }
    case 207102:
    {
        returnValue = F("Liesborner Weg");
        break;
    }
    case 207103:
    {
        returnValue = F("Liesbüttler Ring");
        break;
    }
    case 207104:
    {
        returnValue = F("Lieschenpfad");
        break;
    }
    case 207105:
    {
        returnValue = F("Lieschenrader Weg");
        break;
    }
    case 207106:
    {
        returnValue = F("Lieschensruh");
        break;
    }
    case 207107:
    {
        returnValue = F("Lieschewäsch (Leichenweg)");
        break;
    }
    case 207108:
    {
        returnValue = F("Lieschingstr.");
        break;
    }
    case 207109:
    {
        returnValue = F("Lieschow");
        break;
    }
    case 207110:
    {
        returnValue = F("Lieschstr.");
        break;
    }
    case 207111:
    {
        returnValue = F("Lieschweg");
        break;
    }
    case 207112:
    {
        returnValue = F("Liese-Dreyer-Weg");
        break;
    }
    case 207113:
    {
        returnValue = F("Liese-Sauter-Str.");
        break;
    }
    case 207114:
    {
        returnValue = F("Lieseberg");
        break;
    }
    case 207115:
    {
        returnValue = F("Liesebühl");
        break;
    }
    case 207116:
    {
        returnValue = F("Liesebühl 41a-c");
        break;
    }
    case 207117:
    {
        returnValue = F("Liesegangstr.");
        break;
    }
    case 207118:
    {
        returnValue = F("Liesegangweg");
        break;
    }
    case 207119:
    {
        returnValue = F("Liesel-Bach-Str.");
        break;
    }
    case 207120:
    {
        returnValue = F("Liesel-Waller-Str.");
        break;
    }
    case 207121:
    {
        returnValue = F("Liesel-Westermann-Weg");
        break;
    }
    case 207122:
    {
        returnValue = F("Lieselotte-Hermann-Str.");
        break;
    }
    case 207123:
    {
        returnValue = F("Lieselotte-Herrmann-Str.");
        break;
    }
    case 207124:
    {
        returnValue = F("Lieselotte-Kahn-Str.");
        break;
    }
    case 207125:
    {
        returnValue = F("Lieselotte-Michel-Ring");
        break;
    }
    case 207126:
    {
        returnValue = F("Lieselottenstr.");
        break;
    }
    case 207127:
    {
        returnValue = F("Lieselottestr.");
        break;
    }
    case 207128:
    {
        returnValue = F("Lieselotteweg");
        break;
    }
    case 207129:
    {
        returnValue = F("Liesels Hangweg");
        break;
    }
    case 207130:
    {
        returnValue = F("Lieselstieg");
        break;
    }
    case 207131:
    {
        returnValue = F("Lieselsweg");
        break;
    }
    case 207132:
    {
        returnValue = F("Liesen Venn");
        break;
    }
    case 207133:
    {
        returnValue = F("Liesenberger Mühle");
        break;
    }
    case 207134:
    {
        returnValue = F("Liesendahler Feld");
        break;
    }
    case 207135:
    {
        returnValue = F("Liesendahler Weg");
        break;
    }
    case 207136:
    {
        returnValue = F("Liesener Dell");
        break;
    }
    case 207137:
    {
        returnValue = F("Liesenfeld");
        break;
    }
    case 207138:
    {
        returnValue = F("Liesenfelder Str.");
        break;
    }
    case 207139:
    {
        returnValue = F("Liesenfeldstr.");
        break;
    }
    case 207140:
    {
        returnValue = F("Liesengasse");
        break;
    }
    case 207141:
    {
        returnValue = F("Liesengrund");
        break;
    }
    case 207142:
    {
        returnValue = F("Liesenstr.");
        break;
    }
    case 207143:
    {
        returnValue = F("Liesentorweg");
        break;
    }
    case 207144:
    {
        returnValue = F("Liesenweg");
        break;
    }
    case 207145:
    {
        returnValue = F("Lieseprinzweg");
        break;
    }
    case 207146:
    {
        returnValue = F("Lieser Garten");
        break;
    }
    case 207147:
    {
        returnValue = F("Lieser Weg");
        break;
    }
    case 207148:
    {
        returnValue = F("Lieserbrücke");
        break;
    }
    case 207149:
    {
        returnValue = F("Lieserer Weg");
        break;
    }
    case 207150:
    {
        returnValue = F("Lieserfeld");
        break;
    }
    case 207151:
    {
        returnValue = F("Lieserpfad");
        break;
    }
    case 207152:
    {
        returnValue = F("Lieserstr.");
        break;
    }
    case 207153:
    {
        returnValue = F("Lieserstr. zum Kuckuck");
        break;
    }
    case 207154:
    {
        returnValue = F("Liesertalstr.");
        break;
    }
    case 207155:
    {
        returnValue = F("Lieserweg");
        break;
    }
    case 207156:
    {
        returnValue = F("Liesestr.");
        break;
    }
    case 207157:
    {
        returnValue = F("Liesetal");
        break;
    }
    case 207158:
    {
        returnValue = F("Liesewaldstr.");
        break;
    }
    case 207159:
    {
        returnValue = F("Lieseweg");
        break;
    }
    case 207160:
    {
        returnValue = F("Liesgrundstr.");
        break;
    }
    case 207161:
    {
        returnValue = F("Liesig");
        break;
    }
    case 207162:
    {
        returnValue = F("Liesingstr.");
        break;
    }
    case 207163:
    {
        returnValue = F("Liesjeweg");
        break;
    }
    case 207164:
    {
        returnValue = F("Lieskauer Dorfstr.");
        break;
    }
    case 207165:
    {
        returnValue = F("Lieskauer Str.");
        break;
    }
    case 207166:
    {
        returnValue = F("Liesker Dorfstr.");
        break;
    }
    case 207167:
    {
        returnValue = F("Liesker Seestr.");
        break;
    }
    case 207168:
    {
        returnValue = F("Liesker Str.");
        break;
    }
    case 207169:
    {
        returnValue = F("Liesker Weg");
        break;
    }
    case 207170:
    {
        returnValue = F("Lieskower Str.");
        break;
    }
    case 207171:
    {
        returnValue = F("Liesl-Karlstadt-Str.");
        break;
    }
    case 207172:
    {
        returnValue = F("Liesl-Karlstadt-Weg");
        break;
    }
    case 207173:
    {
        returnValue = F("Liesl-Kießling-Str.");
        break;
    }
    case 207174:
    {
        returnValue = F("Lieslmoosstr.");
        break;
    }
    case 207175:
    {
        returnValue = F("Liessower Gartenstr.");
        break;
    }
    case 207176:
    {
        returnValue = F("Liessower Wiesenweg");
        break;
    }
    case 207177:
    {
        returnValue = F("Lieste");
        break;
    }
    case 207178:
    {
        returnValue = F("Liestengasse");
        break;
    }
    case 207179:
    {
        returnValue = F("Liester Str.");
        break;
    }
    case 207180:
    {
        returnValue = F("Liesterweg");
        break;
    }
    case 207181:
    {
        returnValue = F("Liestr.");
        break;
    }
    case 207182:
    {
        returnValue = F("Liesweg");
        break;
    }
    case 207183:
    {
        returnValue = F("Liesäckerweg");
        break;
    }
    case 207184:
    {
        returnValue = F("Lietenweg");
        break;
    }
    case 207185:
    {
        returnValue = F("Lietenäckerring");
        break;
    }
    case 207186:
    {
        returnValue = F("Lieterweg");
        break;
    }
    case 207187:
    {
        returnValue = F("Lieteweg");
        break;
    }
    case 207188:
    {
        returnValue = F("Lietgrund");
        break;
    }
    case 207189:
    {
        returnValue = F("Lieth");
        break;
    }
    case 207190:
    {
        returnValue = F("Liethberg");
        break;
    }
    case 207191:
    {
        returnValue = F("Liethbergstr.");
        break;
    }
    case 207192:
    {
        returnValue = F("Liethbergweg");
        break;
    }
    case 207193:
    {
        returnValue = F("Liethe");
        break;
    }
    case 207194:
    {
        returnValue = F("Liethe I");
        break;
    }
    case 207195:
    {
        returnValue = F("Liethe II");
        break;
    }
    case 207196:
    {
        returnValue = F("Liethe III");
        break;
    }
    case 207197:
    {
        returnValue = F("Liethenburgweg");
        break;
    }
    case 207198:
    {
        returnValue = F("Liethenhäuser");
        break;
    }
    case 207199:
    {
        returnValue = F("Liethenkämpen");
        break;
    }
    case 207200:
    {
        returnValue = F("Liethenstr.");
        break;
    }
    case 207201:
    {
        returnValue = F("Liether Damm");
        break;
    }
    case 207202:
    {
        returnValue = F("Liether Feldstr.");
        break;
    }
    case 207203:
    {
        returnValue = F("Liether Moor");
        break;
    }
    case 207204:
    {
        returnValue = F("Liether Ring");
        break;
    }
    case 207205:
    {
        returnValue = F("Liether Schweiz");
        break;
    }
    case 207206:
    {
        returnValue = F("Liether Str.");
        break;
    }
    case 207207:
    {
        returnValue = F("Lietherdamm");
        break;
    }
    case 207208:
    {
        returnValue = F("Liethermoorsweg");
        break;
    }
    case 207209:
    {
        returnValue = F("Liethestr.");
        break;
    }
    case 207210:
    {
        returnValue = F("Lietheweg");
        break;
    }
    case 207211:
    {
        returnValue = F("Liethfeld");
        break;
    }
    case 207212:
    {
        returnValue = F("Liethkoppelweg");
        break;
    }
    case 207213:
    {
        returnValue = F("Liethmoor");
        break;
    }
    case 207214:
    {
        returnValue = F("Liethof");
        break;
    }
    case 207215:
    {
        returnValue = F("Lietholzstr.");
        break;
    }
    case 207216:
    {
        returnValue = F("Liethring");
        break;
    }
    case 207217:
    {
        returnValue = F("Lieths Sand");
        break;
    }
    case 207218:
    {
        returnValue = F("Liethstr.");
        break;
    }
    case 207219:
    {
        returnValue = F("Liethweg");
        break;
    }
    case 207220:
    {
        returnValue = F("Lietkamp");
        break;
    }
    case 207221:
    {
        returnValue = F("Lietstr.");
        break;
    }
    case 207222:
    {
        returnValue = F("Lietweg");
        break;
    }
    case 207223:
    {
        returnValue = F("Lietwerk");
        break;
    }
    case 207224:
    {
        returnValue = F("Lietze");
        break;
    }
    case 207225:
    {
        returnValue = F("Lietzelwiese");
        break;
    }
    case 207226:
    {
        returnValue = F("Lietzen Nord");
        break;
    }
    case 207227:
    {
        returnValue = F("Lietzen Vorwerk");
        break;
    }
    case 207228:
    {
        returnValue = F("Lietzener Str.");
        break;
    }
    case 207229:
    {
        returnValue = F("Lietzener Weg");
        break;
    }
    case 207230:
    {
        returnValue = F("Lietzenweg");
        break;
    }
    case 207231:
    {
        returnValue = F("Lietzes Weg");
        break;
    }
    case 207232:
    {
        returnValue = F("Lietzscher Str.");
        break;
    }
    case 207233:
    {
        returnValue = F("Lievelingsweg");
        break;
    }
    case 207234:
    {
        returnValue = F("Lievensteg");
        break;
    }
    case 207235:
    {
        returnValue = F("Lievenstr.");
        break;
    }
    case 207236:
    {
        returnValue = F("Lievskamp");
        break;
    }
    case 207237:
    {
        returnValue = F("Liezener Str.");
        break;
    }
    case 207238:
    {
        returnValue = F("Liezenhofer Str.");
        break;
    }
    case 207239:
    {
        returnValue = F("Ließemer Kirchweg");
        break;
    }
    case 207240:
    {
        returnValue = F("Ließemer Str.");
        break;
    }
    case 207241:
    {
        returnValue = F("Ließemer Weg");
        break;
    }
    case 207242:
    {
        returnValue = F("Ließener Dorfstr.");
        break;
    }
    case 207243:
    {
        returnValue = F("Ließener Str.");
        break;
    }
    case 207244:
    {
        returnValue = F("Ließnitzer Str.");
        break;
    }
    case 207245:
    {
        returnValue = F("Ließweg");
        break;
    }
    case 207246:
    {
        returnValue = F("Life-Natur-Erlebnispfad");
        break;
    }
    case 207247:
    {
        returnValue = F("Lift-Tunnel");
        break;
    }
    case 207248:
    {
        returnValue = F("Liftbergstr.");
        break;
    }
    case 207249:
    {
        returnValue = F("Liftenweg");
        break;
    }
    case 207250:
    {
        returnValue = F("Liftstr.");
        break;
    }
    case 207251:
    {
        returnValue = F("Liftweg");
        break;
    }
    case 207252:
    {
        returnValue = F("Ligariusstr.");
        break;
    }
    case 207253:
    {
        returnValue = F("Ligastr.");
        break;
    }
    case 207254:
    {
        returnValue = F("Ligetistr.");
        break;
    }
    case 207255:
    {
        returnValue = F("Liggeringer Str.");
        break;
    }
    case 207256:
    {
        returnValue = F("Ligno Park");
        break;
    }
    case 207257:
    {
        returnValue = F("Ligsalzstr.");
        break;
    }
    case 207258:
    {
        returnValue = F("Ligueiler Str.");
        break;
    }
    case 207259:
    {
        returnValue = F("Ligugéstr.");
        break;
    }
    case 207260:
    {
        returnValue = F("Ligustahecke");
        break;
    }
    case 207261:
    {
        returnValue = F("Ligustergang");
        break;
    }
    case 207262:
    {
        returnValue = F("Ligustergasse");
        break;
    }
    case 207263:
    {
        returnValue = F("Ligusterhof");
        break;
    }
    case 207264:
    {
        returnValue = F("Ligusterring");
        break;
    }
    case 207265:
    {
        returnValue = F("Ligusterstieg");
        break;
    }
    case 207266:
    {
        returnValue = F("Ligusterstr.");
        break;
    }
    case 207267:
    {
        returnValue = F("Ligusterweg");
        break;
    }
    case 207268:
    {
        returnValue = F("Lihlstr.");
        break;
    }
    case 207269:
    {
        returnValue = F("Liiger Hörn");
        break;
    }
    case 207270:
    {
        returnValue = F("Liiger Wal");
        break;
    }
    case 207271:
    {
        returnValue = F("Liischejäsje");
        break;
    }
    case 207272:
    {
        returnValue = F("Likedeelerhof");
        break;
    }
    case 207273:
    {
        returnValue = F("Likedeelerstr.");
        break;
    }
    case 207274:
    {
        returnValue = F("Lil-Dagover-Ring");
        break;
    }
    case 207275:
    {
        returnValue = F("Lilenweg");
        break;
    }
    case 207276:
    {
        returnValue = F("Lili-Park");
        break;
    }
    case 207277:
    {
        returnValue = F("Lili-Sasse-Str.");
        break;
    }
    case 207278:
    {
        returnValue = F("Lilian-Harvey-Weg");
        break;
    }
    case 207279:
    {
        returnValue = F("Lilie-Hof-Passage");
        break;
    }
    case 207280:
    {
        returnValue = F("Lilienbeck");
        break;
    }
    case 207281:
    {
        returnValue = F("Lilienbecke");
        break;
    }
    case 207282:
    {
        returnValue = F("Lilienberg");
        break;
    }
    case 207283:
    {
        returnValue = F("Lilienbergsweg");
        break;
    }
    case 207284:
    {
        returnValue = F("Lilienbogen");
        break;
    }
    case 207285:
    {
        returnValue = F("Lilienburgplatz");
        break;
    }
    case 207286:
    {
        returnValue = F("Lilienburgstr.");
        break;
    }
    case 207287:
    {
        returnValue = F("Liliencronhügel");
        break;
    }
    case 207288:
    {
        returnValue = F("Liliencronring");
        break;
    }
    case 207289:
    {
        returnValue = F("Liliencronstr.");
        break;
    }
    case 207290:
    {
        returnValue = F("Liliencrontwiete");
        break;
    }
    case 207291:
    {
        returnValue = F("Liliencronweg");
        break;
    }
    case 207292:
    {
        returnValue = F("Lilienfeinstr.");
        break;
    }
    case 207293:
    {
        returnValue = F("Liliengarten");
        break;
    }
    case 207294:
    {
        returnValue = F("Liliengasse");
        break;
    }
    case 207295:
    {
        returnValue = F("Liliengrund");
        break;
    }
    case 207296:
    {
        returnValue = F("Lilienhof");
        break;
    }
    case 207297:
    {
        returnValue = F("Lilienhöhe");
        break;
    }
    case 207298:
    {
        returnValue = F("Lilienkuhl");
        break;
    }
    case 207299:
    {
        returnValue = F("Lilienmattstr.");
        break;
    }
    case 207300:
    {
        returnValue = F("Lilienpfad");
        break;
    }
    case 207301:
    {
        returnValue = F("Lilienplan");
        break;
    }
    case 207302:
    {
        returnValue = F("Lilienplatz");
        break;
    }
    case 207303:
    {
        returnValue = F("Lilienreihe");
        break;
    }
    case 207304:
    {
        returnValue = F("Lilienring");
        break;
    }
    case 207305:
    {
        returnValue = F("Liliensiek");
        break;
    }
    case 207306:
    {
        returnValue = F("Liliensteg");
        break;
    }
    case 207307:
    {
        returnValue = F("Liliensteig");
        break;
    }
    case 207308:
    {
        returnValue = F("Liliensteinblick");
        break;
    }
    case 207309:
    {
        returnValue = F("Lilienstr.");
        break;
    }
    case 207310:
    {
        returnValue = F("Lilientalweg");
        break;
    }
    case 207311:
    {
        returnValue = F("Lilienthal");
        break;
    }
    case 207312:
    {
        returnValue = F("Lilienthal-Centrum Stölln (BUGA 2015)");
        break;
    }
    case 207313:
    {
        returnValue = F("Lilienthal-Ring");
        break;
    }
    case 207314:
    {
        returnValue = F("Lilienthal-Str.");
        break;
    }
    case 207315:
    {
        returnValue = F("Lilienthalallee");
        break;
    }
    case 207316:
    {
        returnValue = F("Lilienthaler Allee");
        break;
    }
    case 207317:
    {
        returnValue = F("Lilienthaler Str.");
        break;
    }
    case 207318:
    {
        returnValue = F("Lilienthaler Weg");
        break;
    }
    case 207319:
    {
        returnValue = F("Lilienthalhof");
        break;
    }
    case 207320:
    {
        returnValue = F("Lilienthalring");
        break;
    }
    case 207321:
    {
        returnValue = F("Lilienthalstr.");
        break;
    }
    case 207322:
    {
        returnValue = F("Lilienthalweg");
        break;
    }
    case 207323:
    {
        returnValue = F("Lilientorstr.");
        break;
    }
    case 207324:
    {
        returnValue = F("Lilienweg");
        break;
    }
    case 207325:
    {
        returnValue = F("Lilienwinkel");
        break;
    }
    case 207326:
    {
        returnValue = F("Liliethalstr.");
        break;
    }
    case 207327:
    {
        returnValue = F("Liliosaweg");
        break;
    }
    case 207328:
    {
        returnValue = F("Lilistr.");
        break;
    }
    case 207329:
    {
        returnValue = F("Liljenhof");
        break;
    }
    case 207330:
    {
        returnValue = F("Lilkendayweg");
        break;
    }
    case 207331:
    {
        returnValue = F("Lilland");
        break;
    }
    case 207332:
    {
        returnValue = F("Lilledamm");
        break;
    }
    case 207333:
    {
        returnValue = F("Lillengasse");
        break;
    }
    case 207334:
    {
        returnValue = F("Lillers-Str.");
        break;
    }
    case 207335:
    {
        returnValue = F("Lilli Marleen");
        break;
    }
    case 207336:
    {
        returnValue = F("Lilli-Friesicke-Str.");
        break;
    }
    case 207337:
    {
        returnValue = F("Lilli-Martius-Weg");
        break;
    }
    case 207338:
    {
        returnValue = F("Lilli-Zapf-Str.");
        break;
    }
    case 207339:
    {
        returnValue = F("Lillienstr.");
        break;
    }
    case 207340:
    {
        returnValue = F("Lillinger Höhe");
        break;
    }
    case 207341:
    {
        returnValue = F("Lillinger Weg");
        break;
    }
    case 207342:
    {
        returnValue = F("Lillinghof");
        break;
    }
    case 207343:
    {
        returnValue = F("Lilliplatz");
        break;
    }
    case 207344:
    {
        returnValue = F("Lillpoppstr.");
        break;
    }
    case 207345:
    {
        returnValue = F("Lillstadter Steige");
        break;
    }
    case 207346:
    {
        returnValue = F("Lilly-Braumann-Honsell-Weg");
        break;
    }
    case 207347:
    {
        returnValue = F("Lilly-Ehrlich-Str.");
        break;
    }
    case 207348:
    {
        returnValue = F("Lilly-Fischer-Str.");
        break;
    }
    case 207349:
    {
        returnValue = F("Lilly-Fischer-Weg");
        break;
    }
    case 207350:
    {
        returnValue = F("Lilly-Pfrang-Str.");
        break;
    }
    case 207351:
    {
        returnValue = F("Lilly-Reich-Str.");
        break;
    }
    case 207352:
    {
        returnValue = F("Lilly-Zeheter-Str.");
        break;
    }
    case 207353:
    {
        returnValue = F("Lilmark");
        break;
    }
    case 207354:
    {
        returnValue = F("Lilo-Gollowitsch-Weg");
        break;
    }
    case 207355:
    {
        returnValue = F("Lilo-Hermann-Weg");
        break;
    }
    case 207356:
    {
        returnValue = F("Lilo-Herrmann-Ring");
        break;
    }
    case 207357:
    {
        returnValue = F("Lilo-Herrmann-Str.");
        break;
    }
    case 207358:
    {
        returnValue = F("Lilo-Herrmann-Weg");
        break;
    }
    case 207359:
    {
        returnValue = F("Lily-Braun-Str.");
        break;
    }
    case 207360:
    {
        returnValue = F("Lily-Braun-Weg");
        break;
    }
    case 207361:
    {
        returnValue = F("Lily-Franz-Str.");
        break;
    }
    case 207362:
    {
        returnValue = F("Lily-Pringsheim-Weg");
        break;
    }
    case 207363:
    {
        returnValue = F("Limana Str.");
        break;
    }
    case 207364:
    {
        returnValue = F("Limassoler Str.");
        break;
    }
    case 207365:
    {
        returnValue = F("Limbach");
        break;
    }
    case 207366:
    {
        returnValue = F("Limbacher Gasse");
        break;
    }
    case 207367:
    {
        returnValue = F("Limbacher Pfad");
        break;
    }
    case 207368:
    {
        returnValue = F("Limbacher Str.");
        break;
    }
    case 207369:
    {
        returnValue = F("Limbacher Weg");
        break;
    }
    case 207370:
    {
        returnValue = F("Limbachrundweg");
        break;
    }
    case 207371:
    {
        returnValue = F("Limbachsgraben");
        break;
    }
    case 207372:
    {
        returnValue = F("Limbachsruhweg");
        break;
    }
    case 207373:
    {
        returnValue = F("Limbachstr.");
        break;
    }
    case 207374:
    {
        returnValue = F("Limbachtal");
        break;
    }
    case 207375:
    {
        returnValue = F("Limbachtal Rundweg");
        break;
    }
    case 207376:
    {
        returnValue = F("Limbachtalweg");
        break;
    }
    case 207377:
    {
        returnValue = F("Limbachweg");
        break;
    }
    case 207378:
    {
        returnValue = F("Limbeckstr.");
        break;
    }
    case 207379:
    {
        returnValue = F("Limberg");
        break;
    }
    case 207380:
    {
        returnValue = F("Limbergen");
        break;
    }
    case 207381:
    {
        returnValue = F("Limberger Str.");
        break;
    }
    case 207382:
    {
        returnValue = F("Limberger Waldweg");
        break;
    }
    case 207383:
    {
        returnValue = F("Limberger Weg");
        break;
    }
    case 207384:
    {
        returnValue = F("Limbergring");
        break;
    }
    case 207385:
    {
        returnValue = F("Limbergsteige");
        break;
    }
    case 207386:
    {
        returnValue = F("Limbergstr.");
        break;
    }
    case 207387:
    {
        returnValue = F("Limbergweg");
        break;
    }
    case 207388:
    {
        returnValue = F("Limbersweg");
        break;
    }
    case 207389:
    {
        returnValue = F("Limbicher Weg");
        break;
    }
    case 207390:
    {
        returnValue = F("Limbourgplatz");
        break;
    }
    case 207391:
    {
        returnValue = F("Limbourgs Hof");
        break;
    }
    case 207392:
    {
        returnValue = F("Limbourgstr.");
        break;
    }
    case 207393:
    {
        returnValue = F("Limbreede");
        break;
    }
    case 207394:
    {
        returnValue = F("Limbreite");
        break;
    }
    case 207395:
    {
        returnValue = F("Limburg-Styrum-Str.");
        break;
    }
    case 207396:
    {
        returnValue = F("Limburger Gasse");
        break;
    }
    case 207397:
    {
        returnValue = F("Limburger Str.");
        break;
    }
    case 207398:
    {
        returnValue = F("Limburger Weg");
        break;
    }
    case 207399:
    {
        returnValue = F("Limburger-Tor");
        break;
    }
    case 207400:
    {
        returnValue = F("Limburgitweg");
        break;
    }
    case 207401:
    {
        returnValue = F("Limburgstr.");
        break;
    }
    case 207402:
    {
        returnValue = F("Limburgweg");
        break;
    }
    case 207403:
    {
        returnValue = F("Limbusch");
        break;
    }
    case 207404:
    {
        returnValue = F("Limbusskämpken");
        break;
    }
    case 207405:
    {
        returnValue = F("Lime Street");
        break;
    }
    case 207406:
    {
        returnValue = F("Limenkamp");
        break;
    }
    case 207407:
    {
        returnValue = F("Limes");
        break;
    }
    case 207408:
    {
        returnValue = F("Limes Wanderweg");
        break;
    }
    case 207409:
    {
        returnValue = F("Limes-Erlebnispfad");
        break;
    }
    case 207410:
    {
        returnValue = F("Limes-Thermen");
        break;
    }
    case 207411:
    {
        returnValue = F("Limes-Wanderweg");
        break;
    }
    case 207412:
    {
        returnValue = F("Limeshain Himbach Park");
        break;
    }
    case 207413:
    {
        returnValue = F("Limeshof");
        break;
    }
    case 207414:
    {
        returnValue = F("Limeskastell Buch");
        break;
    }
    case 207415:
    {
        returnValue = F("Limespark");
        break;
    }
    case 207416:
    {
        returnValue = F("Limesring");
        break;
    }
    case 207417:
    {
        returnValue = F("Limesrundweg Kastell Zugmantel");
        break;
    }
    case 207418:
    {
        returnValue = F("Limesspange");
        break;
    }
    case 207419:
    {
        returnValue = F("Limesstr.");
        break;
    }
    case 207420:
    {
        returnValue = F("Limeswanderweg");
        break;
    }
    case 207421:
    {
        returnValue = F("Limesweg");
        break;
    }
    case 207422:
    {
        returnValue = F("Limhornstr.");
        break;
    }
    case 207423:
    {
        returnValue = F("Limicker Weg");
        break;
    }
    case 207424:
    {
        returnValue = F("Limitenstr.");
        break;
    }
    case 207425:
    {
        returnValue = F("Limitenweg");
        break;
    }
    case 207426:
    {
        returnValue = F("Limkath");
        break;
    }
    case 207427:
    {
        returnValue = F("Limkerecke");
        break;
    }
    case 207428:
    {
        returnValue = F("Limkerweg");
        break;
    }
    case 207429:
    {
        returnValue = F("Limlingeröder Str.");
        break;
    }
    case 207430:
    {
        returnValue = F("Limmerberg");
        break;
    }
    case 207431:
    {
        returnValue = F("Limmerbornweg");
        break;
    }
    case 207432:
    {
        returnValue = F("Limmerdamm");
        break;
    }
    case 207433:
    {
        returnValue = F("Limmersdorfer Str.");
        break;
    }
    case 207434:
    {
        returnValue = F("Limmerstr.");
        break;
    }
    case 207435:
    {
        returnValue = F("Limmerweg");
        break;
    }
    case 207436:
    {
        returnValue = F("Limminghofer Str.");
        break;
    }
    case 207437:
    {
        returnValue = F("Limmringhausen");
        break;
    }
    case 207438:
    {
        returnValue = F("Limmritzer Furt");
        break;
    }
    case 207439:
    {
        returnValue = F("Limmritzer Hauptstr.");
        break;
    }
    case 207440:
    {
        returnValue = F("Limogesplatz");
        break;
    }
    case 207441:
    {
        returnValue = F("Limonigasse");
        break;
    }
    case 207442:
    {
        returnValue = F("Limours-Str.");
        break;
    }
    case 207443:
    {
        returnValue = F("Limpacher Trail");
        break;
    }
    case 207444:
    {
        returnValue = F("Limpacher Wiesenweg");
        break;
    }
    case 207445:
    {
        returnValue = F("Limpeckstr.");
        break;
    }
    case 207446:
    {
        returnValue = F("Limpelbacher Str.");
        break;
    }
    case 207447:
    {
        returnValue = F("Limpergerstr.");
        break;
    }
    case 207448:
    {
        returnValue = F("Limperstr.");
        break;
    }
    case 207449:
    {
        returnValue = F("Limpurger Str.");
        break;
    }
    case 207450:
    {
        returnValue = F("Limpurger Weg");
        break;
    }
    case 207451:
    {
        returnValue = F("Limpurgerweg");
        break;
    }
    case 207452:
    {
        returnValue = F("Limpurgstr.");
        break;
    }
    case 207453:
    {
        returnValue = F("Limpurgweg");
        break;
    }
    case 207454:
    {
        returnValue = F("Limrain");
        break;
    }
    case 207455:
    {
        returnValue = F("Lina's Diek");
        break;
    }
    case 207456:
    {
        returnValue = F("Lina-Bucksath-Str.");
        break;
    }
    case 207457:
    {
        returnValue = F("Lina-Friedrichs-Str.");
        break;
    }
    case 207458:
    {
        returnValue = F("Lina-Hauck-Str.");
        break;
    }
    case 207459:
    {
        returnValue = F("Lina-Hilger-Str.");
        break;
    }
    case 207460:
    {
        returnValue = F("Lina-Hirchenhein-Weg");
        break;
    }
    case 207461:
    {
        returnValue = F("Lina-Hähnle-Str.");
        break;
    }
    case 207462:
    {
        returnValue = F("Lina-Hähnle-Weg");
        break;
    }
    case 207463:
    {
        returnValue = F("Lina-Kromer-Str.");
        break;
    }
    case 207464:
    {
        returnValue = F("Lina-Kößler-Str.");
        break;
    }
    case 207465:
    {
        returnValue = F("Lina-Meyer-Str.");
        break;
    }
    case 207466:
    {
        returnValue = F("Lina-Mineur-Str.");
        break;
    }
    case 207467:
    {
        returnValue = F("Lina-Morgenstern-Str.");
        break;
    }
    case 207468:
    {
        returnValue = F("Lina-Morgenstern-Weg");
        break;
    }
    case 207469:
    {
        returnValue = F("Lina-Muders-Str.");
        break;
    }
    case 207470:
    {
        returnValue = F("Lina-Müller-Weg");
        break;
    }
    case 207471:
    {
        returnValue = F("Lina-Pfaff-Str.");
        break;
    }
    case 207472:
    {
        returnValue = F("Lina-Radke-Str.");
        break;
    }
    case 207473:
    {
        returnValue = F("Lina-Radke-Weg");
        break;
    }
    case 207474:
    {
        returnValue = F("Lina-Ramann-Str.");
        break;
    }
    case 207475:
    {
        returnValue = F("Lina-Schonder-Weg");
        break;
    }
    case 207476:
    {
        returnValue = F("Lina-Sommer-Platz");
        break;
    }
    case 207477:
    {
        returnValue = F("Lina-Sommer-Str.");
        break;
    }
    case 207478:
    {
        returnValue = F("Lina-Sommer-Weg");
        break;
    }
    case 207479:
    {
        returnValue = F("Lina-Staab-Str.");
        break;
    }
    case 207480:
    {
        returnValue = F("Lina-Stöhr-Weg");
        break;
    }
    case 207481:
    {
        returnValue = F("Lina-Walther-Weg");
        break;
    }
    case 207482:
    {
        returnValue = F("Lina-Wehrle-Str.");
        break;
    }
    case 207483:
    {
        returnValue = F("Linach");
        break;
    }
    case 207484:
    {
        returnValue = F("Linachstr.");
        break;
    }
    case 207485:
    {
        returnValue = F("Linacker Weg");
        break;
    }
    case 207486:
    {
        returnValue = F("Linackerweg");
        break;
    }
    case 207487:
    {
        returnValue = F("Linah");
        break;
    }
    case 207488:
    {
        returnValue = F("Linamarstr.");
        break;
    }
    case 207489:
    {
        returnValue = F("Linastr.");
        break;
    }
    case 207490:
    {
        returnValue = F("Linathsweg");
        break;
    }
    case 207491:
    {
        returnValue = F("Linau Busch");
        break;
    }
    case 207492:
    {
        returnValue = F("Linauer Berg");
        break;
    }
    case 207493:
    {
        returnValue = F("Linaustr.");
        break;
    }
    case 207494:
    {
        returnValue = F("Linauweg");
        break;
    }
    case 207495:
    {
        returnValue = F("Linaweg");
        break;
    }
    case 207496:
    {
        returnValue = F("Linbarg");
        break;
    }
    case 207497:
    {
        returnValue = F("Linchenshöh");
        break;
    }
    case 207498:
    {
        returnValue = F("Linchentalstr.");
        break;
    }
    case 207499:
    {
        returnValue = F("Linckestr.");
        break;
    }
    case 207500:
    {
        returnValue = F("Linckeweg");
        break;
    }
    case 207501:
    {
        returnValue = F("Linckstr.");
        break;
    }
    case 207502:
    {
        returnValue = F("Lincolaweg");
        break;
    }
    case 207503:
    {
        returnValue = F("Lincoln Court");
        break;
    }
    case 207504:
    {
        returnValue = F("Lincolnstr.");
        break;
    }
    case 207505:
    {
        returnValue = F("Lincrustastr.");
        break;
    }
    case 207506:
    {
        returnValue = F("Lind");
        break;
    }
    case 207507:
    {
        returnValue = F("Linda");
        break;
    }
    case 207508:
    {
        returnValue = F("Lindach");
        break;
    }
    case 207509:
    {
        returnValue = F("Lindach-Geräumt");
        break;
    }
    case 207510:
    {
        returnValue = F("Lindachallee");
        break;
    }
    case 207511:
    {
        returnValue = F("Lindacheckstr.");
        break;
    }
    case 207512:
    {
        returnValue = F("Lindacher Feld");
        break;
    }
    case 207513:
    {
        returnValue = F("Lindacher Höhe");
        break;
    }
    case 207514:
    {
        returnValue = F("Lindacher Ring");
        break;
    }
    case 207515:
    {
        returnValue = F("Lindacher Str.");
        break;
    }
    case 207516:
    {
        returnValue = F("Lindacher Weg");
        break;
    }
    case 207517:
    {
        returnValue = F("Lindachfeldweg");
        break;
    }
    case 207518:
    {
        returnValue = F("Lindachgasse");
        break;
    }
    case 207519:
    {
        returnValue = F("Lindachhof");
        break;
    }
    case 207520:
    {
        returnValue = F("Lindachsteig");
        break;
    }
    case 207521:
    {
        returnValue = F("Lindachstr.");
        break;
    }
    case 207522:
    {
        returnValue = F("Lindachweg");
        break;
    }
    case 207523:
    {
        returnValue = F("Lindacker");
        break;
    }
    case 207524:
    {
        returnValue = F("Lindackerstr.");
        break;
    }
    case 207525:
    {
        returnValue = F("Lindaeck");
        break;
    }
    case 207526:
    {
        returnValue = F("Lindaer Weg");
        break;
    }
    case 207527:
    {
        returnValue = F("Lindahlstr.");
        break;
    }
    case 207528:
    {
        returnValue = F("Lindahofring");
        break;
    }
    case 207529:
    {
        returnValue = F("Lindath");
        break;
    }
    case 207530:
    {
        returnValue = F("Lindau");
        break;
    }
    case 207531:
    {
        returnValue = F("Lindauer Str.");
        break;
    }
    case 207532:
    {
        returnValue = F("Lindauer Talweg");
        break;
    }
    case 207533:
    {
        returnValue = F("Lindauer Tor");
        break;
    }
    case 207534:
    {
        returnValue = F("Lindauer Weg");
        break;
    }
    case 207535:
    {
        returnValue = F("Lindauer-Stadtrecht-Str.");
        break;
    }
    case 207536:
    {
        returnValue = F("Lindaufeld");
        break;
    }
    case 207537:
    {
        returnValue = F("Lindaugaard");
        break;
    }
    case 207538:
    {
        returnValue = F("Lindauhof");
        break;
    }
    case 207539:
    {
        returnValue = F("Lindauhöh");
        break;
    }
    case 207540:
    {
        returnValue = F("Lindaunisbrücke");
        break;
    }
    case 207541:
    {
        returnValue = F("Lindaustr.");
        break;
    }
    case 207542:
    {
        returnValue = F("Lindaustraßl");
        break;
    }
    case 207543:
    {
        returnValue = F("Lindbachstr.");
        break;
    }
    case 207544:
    {
        returnValue = F("Lindberg");
        break;
    }
    case 207545:
    {
        returnValue = F("Lindbergh-Allee");
        break;
    }
    case 207546:
    {
        returnValue = F("Lindberghring");
        break;
    }
    case 207547:
    {
        returnValue = F("Lindberghstr.");
        break;
    }
    case 207548:
    {
        returnValue = F("Lindberghweg");
        break;
    }
    case 207549:
    {
        returnValue = F("Lindbergmühle");
        break;
    }
    case 207550:
    {
        returnValue = F("Lindbergsches Feld");
        break;
    }
    case 207551:
    {
        returnValue = F("Lindbergweg");
        break;
    }
    case 207552:
    {
        returnValue = F("Lindbichl");
        break;
    }
    case 207553:
    {
        returnValue = F("Lindbornweg");
        break;
    }
    case 207554:
    {
        returnValue = F("Lindbruch");
        break;
    }
    case 207555:
    {
        returnValue = F("Lindbuckweg");
        break;
    }
    case 207556:
    {
        returnValue = F("Lindbühlstr.");
        break;
    }
    case 207557:
    {
        returnValue = F("Lindchenspfad");
        break;
    }
    case 207558:
    {
        returnValue = F("Lindchenweg");
        break;
    }
    case 207559:
    {
        returnValue = F("Lindches Weg");
        break;
    }
    case 207560:
    {
        returnValue = F("Lindchesdell");
        break;
    }
    case 207561:
    {
        returnValue = F("Lindchesfeld");
        break;
    }
    case 207562:
    {
        returnValue = F("Linde");
        break;
    }
    case 207563:
    {
        returnValue = F("Linde Borschemich");
        break;
    }
    case 207564:
    {
        returnValue = F("Linde-Dorfstr.");
        break;
    }
    case 207565:
    {
        returnValue = F("Lindebeckstr.");
        break;
    }
    case 207566:
    {
        returnValue = F("Lindeberg");
        break;
    }
    case 207567:
    {
        returnValue = F("Lindehof");
        break;
    }
    case 207568:
    {
        returnValue = F("Lindeistr.");
        break;
    }
    case 207569:
    {
        returnValue = F("Lindelachshof");
        break;
    }
    case 207570:
    {
        returnValue = F("Lindelachsmühle");
        break;
    }
    case 207571:
    {
        returnValue = F("Lindelau");
        break;
    }
    case 207572:
    {
        returnValue = F("Lindelbacher Str.");
        break;
    }
    case 207573:
    {
        returnValue = F("Lindelbacher Weg");
        break;
    }
    case 207574:
    {
        returnValue = F("Lindelbachstr.");
        break;
    }
    case 207575:
    {
        returnValue = F("Lindelberg");
        break;
    }
    case 207576:
    {
        returnValue = F("Lindelbergstr.");
        break;
    }
    case 207577:
    {
        returnValue = F("Lindelbergweg");
        break;
    }
    case 207578:
    {
        returnValue = F("Lindelbronnstr.");
        break;
    }
    case 207579:
    {
        returnValue = F("Lindelbrunnstr.");
        break;
    }
    case 207580:
    {
        returnValue = F("Lindelbrunnweg");
        break;
    }
    case 207581:
    {
        returnValue = F("Lindelburger Str.");
        break;
    }
    case 207582:
    {
        returnValue = F("Lindele");
        break;
    }
    case 207583:
    {
        returnValue = F("Lindelestr.");
        break;
    }
    case 207584:
    {
        returnValue = F("Lindellohweg");
        break;
    }
    case 207585:
    {
        returnValue = F("Lindelsbachweg");
        break;
    }
    case 207586:
    {
        returnValue = F("Lindelstr.");
        break;
    }
    case 207587:
    {
        returnValue = F("Lindelweg");
        break;
    }
    case 207588:
    {
        returnValue = F("Lindeläckerweg");
        break;
    }
    case 207589:
    {
        returnValue = F("Lindemannhof");
        break;
    }
    case 207590:
    {
        returnValue = F("Lindemannring");
        break;
    }
    case 207591:
    {
        returnValue = F("Lindemanns Ecke");
        break;
    }
    case 207592:
    {
        returnValue = F("Lindemanns Kamp");
        break;
    }
    case 207593:
    {
        returnValue = F("Lindemannsberg");
        break;
    }
    case 207594:
    {
        returnValue = F("Lindemannsgasse");
        break;
    }
    case 207595:
    {
        returnValue = F("Lindemannsheide");
        break;
    }
    case 207596:
    {
        returnValue = F("Lindemannshof");
        break;
    }
    case 207597:
    {
        returnValue = F("Lindemannskamp");
        break;
    }
    case 207598:
    {
        returnValue = F("Lindemannstr.");
        break;
    }
    case 207599:
    {
        returnValue = F("Lindemannsweg");
        break;
    }
    case 207600:
    {
        returnValue = F("Lindemannweg");
        break;
    }
    case 207601:
    {
        returnValue = F("Lindemoosweg");
        break;
    }
    case 207602:
    {
        returnValue = F("Linden");
        break;
    }
    case 207603:
    {
        returnValue = F("Linden Mitte");
        break;
    }
    case 207604:
    {
        returnValue = F("Linden-Brücke");
        break;
    }
    case 207605:
    {
        returnValue = F("Linden-Kirch-Platz");
        break;
    }
    case 207606:
    {
        returnValue = F("Linden-Platz");
        break;
    }
    case 207607:
    {
        returnValue = F("Linden-Wanderweg");
        break;
    }
    case 207608:
    {
        returnValue = F("Lindenackerstr.");
        break;
    }
    case 207609:
    {
        returnValue = F("Lindenackerweg");
        break;
    }
    case 207610:
    {
        returnValue = F("Lindenaer Str.");
        break;
    }
    case 207611:
    {
        returnValue = F("Lindenaer Weg");
        break;
    }
    case 207612:
    {
        returnValue = F("Lindenalle");
        break;
    }
    case 207613:
    {
        returnValue = F("Lindenallee");
        break;
    }
    case 207614:
    {
        returnValue = F("Lindenallee (neu)");
        break;
    }
    case 207615:
    {
        returnValue = F("Lindenallee I");
        break;
    }
    case 207616:
    {
        returnValue = F("Lindenanger");
        break;
    }
    case 207617:
    {
        returnValue = F("Lindenanlage");
        break;
    }
    case 207618:
    {
        returnValue = F("Lindenau");
        break;
    }
    case 207619:
    {
        returnValue = F("Lindenauallee");
        break;
    }
    case 207620:
    {
        returnValue = F("Lindenauer Grenzweg");
        break;
    }
    case 207621:
    {
        returnValue = F("Lindenauer Str.");
        break;
    }
    case 207622:
    {
        returnValue = F("Lindenauer Weg");
        break;
    }
    case 207623:
    {
        returnValue = F("Lindenaustr.");
        break;
    }
    case 207624:
    {
        returnValue = F("Lindenauweg");
        break;
    }
    case 207625:
    {
        returnValue = F("Lindenbach");
        break;
    }
    case 207626:
    {
        returnValue = F("Lindenbachstr.");
        break;
    }
    case 207627:
    {
        returnValue = F("Lindenbachweg");
        break;
    }
    case 207628:
    {
        returnValue = F("Lindenbadstr.");
        break;
    }
    case 207629:
    {
        returnValue = F("Lindenbahn");
        break;
    }
    case 207630:
    {
        returnValue = F("Lindenbarg");
        break;
    }
    case 207631:
    {
        returnValue = F("Lindenbauerstiege");
        break;
    }
    case 207632:
    {
        returnValue = F("Lindenbaum");
        break;
    }
    case 207633:
    {
        returnValue = F("Lindenbaumstr.");
        break;
    }
    case 207634:
    {
        returnValue = F("Lindenbaumweg");
        break;
    }
    case 207635:
    {
        returnValue = F("Lindenbecker Weg");
        break;
    }
    case 207636:
    {
        returnValue = F("Lindenberg");
        break;
    }
    case 207637:
    {
        returnValue = F("Lindenberg-Anger");
        break;
    }
    case 207638:
    {
        returnValue = F("Lindenbergallee");
        break;
    }
    case 207639:
    {
        returnValue = F("Lindenberganlage");
        break;
    }
    case 207640:
    {
        returnValue = F("Lindenberger Dorfstr.");
        break;
    }
    case 207641:
    {
        returnValue = F("Lindenberger Höhe");
        break;
    }
    case 207642:
    {
        returnValue = F("Lindenberger Ring");
        break;
    }
    case 207643:
    {
        returnValue = F("Lindenberger Str.");
        break;
    }
    case 207644:
    {
        returnValue = F("Lindenberger Weg");
        break;
    }
    case 207645:
    {
        returnValue = F("Lindenbergerstr.");
        break;
    }
    case 207646:
    {
        returnValue = F("Lindenberggasse");
        break;
    }
    case 207647:
    {
        returnValue = F("Lindenbergplatz");
        break;
    }
    case 207648:
    {
        returnValue = F("Lindenbergskamp");
        break;
    }
    case 207649:
    {
        returnValue = F("Lindenbergstr.");
        break;
    }
    case 207650:
    {
        returnValue = F("Lindenbergsweg");
        break;
    }
    case 207651:
    {
        returnValue = F("Lindenbergweg");
        break;
    }
    case 207652:
    {
        returnValue = F("Lindenbeutel");
        break;
    }
    case 207653:
    {
        returnValue = F("Lindenbleek");
        break;
    }
    case 207654:
    {
        returnValue = F("Lindenblick");
        break;
    }
    case 207655:
    {
        returnValue = F("Lindenblütenweg");
        break;
    }
    case 207656:
    {
        returnValue = F("Lindenbodenweg");
        break;
    }
    case 207657:
    {
        returnValue = F("Lindenbogen");
        break;
    }
    case 207658:
    {
        returnValue = F("Lindenbommsweg");
        break;
    }
    case 207659:
    {
        returnValue = F("Lindenbornstr.");
        break;
    }
    case 207660:
    {
        returnValue = F("Lindenbreede");
        break;
    }
    case 207661:
    {
        returnValue = F("Lindenbreite");
        break;
    }
    case 207662:
    {
        returnValue = F("Lindenbrink");
        break;
    }
    case 207663:
    {
        returnValue = F("Lindenbrinke");
        break;
    }
    case 207664:
    {
        returnValue = F("Lindenbronn");
        break;
    }
    case 207665:
    {
        returnValue = F("Lindenbronner Weg");
        break;
    }
    case 207666:
    {
        returnValue = F("Lindenbruchredder");
        break;
    }
    case 207667:
    {
        returnValue = F("Lindenbruchschneise");
        break;
    }
    case 207668:
    {
        returnValue = F("Lindenbruchstr.");
        break;
    }
    case 207669:
    {
        returnValue = F("Lindenbruchweg");
        break;
    }
    case 207670:
    {
        returnValue = F("Lindenbrunn");
        break;
    }
    case 207671:
    {
        returnValue = F("Lindenbrunnen");
        break;
    }
    case 207672:
    {
        returnValue = F("Lindenbrunnenstr.");
        break;
    }
    case 207673:
    {
        returnValue = F("Lindenbrunnenweg");
        break;
    }
    case 207674:
    {
        returnValue = F("Lindenbrücke");
        break;
    }
    case 207675:
    {
        returnValue = F("Lindenbrücker Chaussee");
        break;
    }
    case 207676:
    {
        returnValue = F("Lindenbrücker Dorfstr.");
        break;
    }
    case 207677:
    {
        returnValue = F("Lindenbrücker Str.");
        break;
    }
    case 207678:
    {
        returnValue = F("Lindenbrücker Weg");
        break;
    }
    case 207679:
    {
        returnValue = F("Lindenbuch");
        break;
    }
    case 207680:
    {
        returnValue = F("Lindenbuck");
        break;
    }
    case 207681:
    {
        returnValue = F("Lindenbuckel Schneise");
        break;
    }
    case 207682:
    {
        returnValue = F("Lindenbuckelweg");
        break;
    }
    case 207683:
    {
        returnValue = F("Lindenbusch");
        break;
    }
    case 207684:
    {
        returnValue = F("Lindenbuschring");
        break;
    }
    case 207685:
    {
        returnValue = F("Lindenbuschweg");
        break;
    }
    case 207686:
    {
        returnValue = F("Lindenbühl");
        break;
    }
    case 207687:
    {
        returnValue = F("Lindenbühlstr.");
        break;
    }
    case 207688:
    {
        returnValue = F("Lindenbühlweg");
        break;
    }
    case 207689:
    {
        returnValue = F("Lindendamm");
        break;
    }
    case 207690:
    {
        returnValue = F("Lindeneck");
        break;
    }
    case 207691:
    {
        returnValue = F("Lindenend");
        break;
    }
    case 207692:
    {
        returnValue = F("Lindener Berg");
        break;
    }
    case 207693:
    {
        returnValue = F("Lindener Bergsfeld");
        break;
    }
    case 207694:
    {
        returnValue = F("Lindener Dorfstr.");
        break;
    }
    case 207695:
    {
        returnValue = F("Lindener Koog");
        break;
    }
    case 207696:
    {
        returnValue = F("Lindener Str.");
        break;
    }
    case 207697:
    {
        returnValue = F("Lindener Weg");
        break;
    }
    case 207698:
    {
        returnValue = F("Lindenfeld");
        break;
    }
    case 207699:
    {
        returnValue = F("Lindenfelde");
        break;
    }
    case 207700:
    {
        returnValue = F("Lindenfelder Str.");
        break;
    }
    case 207701:
    {
        returnValue = F("Lindenfelder Weg");
        break;
    }
    case 207702:
    {
        returnValue = F("Lindenfelderweg");
        break;
    }
    case 207703:
    {
        returnValue = F("Lindenfeldstr.");
        break;
    }
    case 207704:
    {
        returnValue = F("Lindenfeldweg");
        break;
    }
    case 207705:
    {
        returnValue = F("Lindenfelser Str.");
        break;
    }
    case 207706:
    {
        returnValue = F("Lindenfelser Weg");
        break;
    }
    case 207707:
    {
        returnValue = F("Lindenfelsstr.");
        break;
    }
    case 207708:
    {
        returnValue = F("Lindenfirststr.");
        break;
    }
    case 207709:
    {
        returnValue = F("Lindenfirstweg");
        break;
    }
    case 207710:
    {
        returnValue = F("Lindenfleck");
        break;
    }
    case 207711:
    {
        returnValue = F("Lindenfurt");
        break;
    }
    case 207712:
    {
        returnValue = F("Lindengang");
        break;
    }
    case 207713:
    {
        returnValue = F("Lindengarten");
        break;
    }
    case 207714:
    {
        returnValue = F("Lindengartenstr.");
        break;
    }
    case 207715:
    {
        returnValue = F("Lindengasse");
        break;
    }
    case 207716:
    {
        returnValue = F("Lindengestell");
        break;
    }
    case 207717:
    {
        returnValue = F("Lindengraben");
        break;
    }
    case 207718:
    {
        returnValue = F("Lindengrabenstr.");
        break;
    }
    case 207719:
    {
        returnValue = F("Lindengrabenweg");
        break;
    }
    case 207720:
    {
        returnValue = F("Lindengreppenstr.");
        break;
    }
    case 207721:
    {
        returnValue = F("Lindengrund");
        break;
    }
    case 207722:
    {
        returnValue = F("Lindengrundstr.");
        break;
    }
    case 207723:
    {
        returnValue = F("Lindengrundweg");
        break;
    }
    case 207724:
    {
        returnValue = F("Lindengründel");
        break;
    }
    case 207725:
    {
        returnValue = F("Lindengärten");
        break;
    }
    case 207726:
    {
        returnValue = F("Lindengärtle");
        break;
    }
    case 207727:
    {
        returnValue = F("Lindengäßchen");
        break;
    }
    case 207728:
    {
        returnValue = F("Lindengäßlein");
        break;
    }
    case 207729:
    {
        returnValue = F("Lindenhain");
        break;
    }
    case 207730:
    {
        returnValue = F("Lindenhainstr.");
        break;
    }
    case 207731:
    {
        returnValue = F("Lindenhalde");
        break;
    }
    case 207732:
    {
        returnValue = F("Lindenhaldenweg");
        break;
    }
    case 207733:
    {
        returnValue = F("Lindenhangweg");
        break;
    }
    case 207734:
    {
        returnValue = F("Lindenharderweg");
        break;
    }
    case 207735:
    {
        returnValue = F("Lindenhardt");
        break;
    }
    case 207736:
    {
        returnValue = F("Lindenhardter Str.");
        break;
    }
    case 207737:
    {
        returnValue = F("Lindenhardter Weg");
        break;
    }
    case 207738:
    {
        returnValue = F("Lindenhart");
        break;
    }
    case 207739:
    {
        returnValue = F("Lindenhaus");
        break;
    }
    case 207740:
    {
        returnValue = F("Lindenhayner Str.");
        break;
    }
    case 207741:
    {
        returnValue = F("Lindenheimweg");
        break;
    }
    case 207742:
    {
        returnValue = F("Lindenhof");
        break;
    }
    case 207743:
    {
        returnValue = F("Lindenhof I");
        break;
    }
    case 207744:
    {
        returnValue = F("Lindenhof II");
        break;
    }
    case 207745:
    {
        returnValue = F("Lindenhof Siedlung");
        break;
    }
    case 207746:
    {
        returnValue = F("Lindenhof-Allee");
        break;
    }
    case 207747:
    {
        returnValue = F("Lindenhof-Salem");
        break;
    }
    case 207748:
    {
        returnValue = F("Lindenhofer Str.");
        break;
    }
    case 207749:
    {
        returnValue = F("Lindenhofpark");
        break;
    }
    case 207750:
    {
        returnValue = F("Lindenhofplatz");
        break;
    }
    case 207751:
    {
        returnValue = F("Lindenhofsbahn");
        break;
    }
    case 207752:
    {
        returnValue = F("Lindenhofsiedlung");
        break;
    }
    case 207753:
    {
        returnValue = F("Lindenhofstr.");
        break;
    }
    case 207754:
    {
        returnValue = F("Lindenhofsweg");
        break;
    }
    case 207755:
    {
        returnValue = F("Lindenhofweg");
        break;
    }
    case 207756:
    {
        returnValue = F("Lindenhoherweg");
        break;
    }
    case 207757:
    {
        returnValue = F("Lindenholt");
        break;
    }
    case 207758:
    {
        returnValue = F("Lindenholzhausener Str.");
        break;
    }
    case 207759:
    {
        returnValue = F("Lindenhopsweg");
        break;
    }
    case 207760:
    {
        returnValue = F("Lindenhorst");
        break;
    }
    case 207761:
    {
        returnValue = F("Lindenhorstschneise");
        break;
    }
    case 207762:
    {
        returnValue = F("Lindenhäusle");
        break;
    }
    case 207763:
    {
        returnValue = F("Lindenhöfe");
        break;
    }
    case 207764:
    {
        returnValue = F("Lindenhög");
        break;
    }
    case 207765:
    {
        returnValue = F("Lindenhöhe");
        break;
    }
    case 207766:
    {
        returnValue = F("Lindenhöher Weg");
        break;
    }
    case 207767:
    {
        returnValue = F("Lindenhügel");
        break;
    }
    case 207768:
    {
        returnValue = F("Lindenhügelschneise");
        break;
    }
    case 207769:
    {
        returnValue = F("Lindenkammweg");
        break;
    }
    case 207770:
    {
        returnValue = F("Lindenkamp");
        break;
    }
    case 207771:
    {
        returnValue = F("Lindenkeller");
        break;
    }
    case 207772:
    {
        returnValue = F("Lindenkopfstr.");
        break;
    }
    case 207773:
    {
        returnValue = F("Lindenkopfweg");
        break;
    }
    case 207774:
    {
        returnValue = F("Lindenkreis");
        break;
    }
    case 207775:
    {
        returnValue = F("Lindenkreuz");
        break;
    }
    case 207776:
    {
        returnValue = F("Lindenkreuzstr.");
        break;
    }
    case 207777:
    {
        returnValue = F("Lindenlachweg");
        break;
    }
    case 207778:
    {
        returnValue = F("Lindenleite");
        break;
    }
    case 207779:
    {
        returnValue = F("Lindenloch");
        break;
    }
    case 207780:
    {
        returnValue = F("Lindenlochebenenweg");
        break;
    }
    case 207781:
    {
        returnValue = F("Lindenlochspfad");
        break;
    }
    case 207782:
    {
        returnValue = F("Lindenlohe");
        break;
    }
    case 207783:
    {
        returnValue = F("Lindenloher Str.");
        break;
    }
    case 207784:
    {
        returnValue = F("Lindenlohstr.");
        break;
    }
    case 207785:
    {
        returnValue = F("Lindenmahdstr.");
        break;
    }
    case 207786:
    {
        returnValue = F("Lindenmatte");
        break;
    }
    case 207787:
    {
        returnValue = F("Lindenmatten");
        break;
    }
    case 207788:
    {
        returnValue = F("Lindenmühle");
        break;
    }
    case 207789:
    {
        returnValue = F("Lindenmühleweg");
        break;
    }
    case 207790:
    {
        returnValue = F("Lindenpark");
        break;
    }
    case 207791:
    {
        returnValue = F("Lindenparkstr.");
        break;
    }
    case 207792:
    {
        returnValue = F("Lindenpassage");
        break;
    }
    case 207793:
    {
        returnValue = F("Lindenpesch");
        break;
    }
    case 207794:
    {
        returnValue = F("Lindenpfad");
        break;
    }
    case 207795:
    {
        returnValue = F("Lindenpfuhlstr.");
        break;
    }
    case 207796:
    {
        returnValue = F("Lindenplan");
        break;
    }
    case 207797:
    {
        returnValue = F("Lindenplanie");
        break;
    }
    case 207798:
    {
        returnValue = F("Lindenplatz");
        break;
    }
    case 207799:
    {
        returnValue = F("Lindenpromenade");
        break;
    }
    case 207800:
    {
        returnValue = F("Lindenpützer Str.");
        break;
    }
    case 207801:
    {
        returnValue = F("Lindenrain");
        break;
    }
    case 207802:
    {
        returnValue = F("Lindenrainstr.");
        break;
    }
    case 207803:
    {
        returnValue = F("Lindenrainweg");
        break;
    }
    case 207804:
    {
        returnValue = F("Lindenrangen");
        break;
    }
    case 207805:
    {
        returnValue = F("Lindenredder");
        break;
    }
    case 207806:
    {
        returnValue = F("Lindenreute");
        break;
    }
    case 207807:
    {
        returnValue = F("Lindenring");
        break;
    }
    case 207808:
    {
        returnValue = F("Lindenringstr.");
        break;
    }
    case 207809:
    {
        returnValue = F("Lindenrondell");
        break;
    }
    case 207810:
    {
        returnValue = F("Lindensaal");
        break;
    }
    case 207811:
    {
        returnValue = F("Lindenschanze");
        break;
    }
    case 207812:
    {
        returnValue = F("Lindenschieder Str.");
        break;
    }
    case 207813:
    {
        returnValue = F("Lindenschlagweg");
        break;
    }
    case 207814:
    {
        returnValue = F("Lindenschmitstr.");
        break;
    }
    case 207815:
    {
        returnValue = F("Lindenschmitweg");
        break;
    }
    case 207816:
    {
        returnValue = F("Lindenschneise");
        break;
    }
    case 207817:
    {
        returnValue = F("Lindenschusterweg");
        break;
    }
    case 207818:
    {
        returnValue = F("Lindensee");
        break;
    }
    case 207819:
    {
        returnValue = F("Lindenseestr.");
        break;
    }
    case 207820:
    {
        returnValue = F("Lindensiedlung");
        break;
    }
    case 207821:
    {
        returnValue = F("Lindensiek");
        break;
    }
    case 207822:
    {
        returnValue = F("Lindensteg");
        break;
    }
    case 207823:
    {
        returnValue = F("Lindensteig");
        break;
    }
    case 207824:
    {
        returnValue = F("Lindensteige");
        break;
    }
    case 207825:
    {
        returnValue = F("Lindensteinstr.");
        break;
    }
    case 207826:
    {
        returnValue = F("Lindenstieg");
        break;
    }
    case 207827:
    {
        returnValue = F("Lindenstiegel");
        break;
    }
    case 207828:
    {
        returnValue = F("Lindenstock");
        break;
    }
    case 207829:
    {
        returnValue = F("Lindenstockstr.");
        break;
    }
    case 207830:
    {
        returnValue = F("Lindenstr.");
        break;
    }
    case 207831:
    {
        returnValue = F("Lindenstr. / A1");
        break;
    }
    case 207832:
    {
        returnValue = F("Lindenstr. Ausbau");
        break;
    }
    case 207833:
    {
        returnValue = F("Lindenstrasse");
        break;
    }
    case 207834:
    {
        returnValue = F("Lindenstrut");
        break;
    }
    case 207835:
    {
        returnValue = F("Lindenstruther Weg");
        break;
    }
    case 207836:
    {
        returnValue = F("Lindensträßchen");
        break;
    }
    case 207837:
    {
        returnValue = F("Lindenstumpf");
        break;
    }
    case 207838:
    {
        returnValue = F("Lindenstätte");
        break;
    }
    case 207839:
    {
        returnValue = F("Lindenstücker");
        break;
    }
    case 207840:
    {
        returnValue = F("Lindental");
        break;
    }
    case 207841:
    {
        returnValue = F("Lindentaler Str.");
        break;
    }
    case 207842:
    {
        returnValue = F("Lindentalstr.");
        break;
    }
    case 207843:
    {
        returnValue = F("Lindentalweg");
        break;
    }
    case 207844:
    {
        returnValue = F("Lindenteichstr.");
        break;
    }
    case 207845:
    {
        returnValue = F("Lindenteichweg");
        break;
    }
    case 207846:
    {
        returnValue = F("Lindenthaler Str.");
        break;
    }
    case 207847:
    {
        returnValue = F("Lindenthalstr.");
        break;
    }
    case 207848:
    {
        returnValue = F("Lindentor");
        break;
    }
    case 207849:
    {
        returnValue = F("Lindentorstr.");
        break;
    }
    case 207850:
    {
        returnValue = F("Lindentrift");
        break;
    }
    case 207851:
    {
        returnValue = F("Lindentrup");
        break;
    }
    case 207852:
    {
        returnValue = F("Lindenturm");
        break;
    }
    case 207853:
    {
        returnValue = F("Lindentwiete");
        break;
    }
    case 207854:
    {
        returnValue = F("Lindenufer");
        break;
    }
    case 207855:
    {
        returnValue = F("Lindenviertel");
        break;
    }
    case 207856:
    {
        returnValue = F("Lindenwaldweg");
        break;
    }
    case 207857:
    {
        returnValue = F("Lindenwall");
        break;
    }
    case 207858:
    {
        returnValue = F("Lindenwarte");
        break;
    }
    case 207859:
    {
        returnValue = F("Lindenwasem");
        break;
    }
    case 207860:
    {
        returnValue = F("Lindenwasen");
        break;
    }
    case 207861:
    {
        returnValue = F("Lindenwasenstr.");
        break;
    }
    case 207862:
    {
        returnValue = F("Lindenweg");
        break;
    }
    case 207863:
    {
        returnValue = F("Lindenweg Falkenhagen");
        break;
    }
    case 207864:
    {
        returnValue = F("Lindenweg Ost");
        break;
    }
    case 207865:
    {
        returnValue = F("Lindenweg West");
        break;
    }
    case 207866:
    {
        returnValue = F("Lindenwegle");
        break;
    }
    case 207867:
    {
        returnValue = F("Lindenwehrweg");
        break;
    }
    case 207868:
    {
        returnValue = F("Lindenwiese");
        break;
    }
    case 207869:
    {
        returnValue = F("Lindenwiesen");
        break;
    }
    case 207870:
    {
        returnValue = F("Lindenwinkel");
        break;
    }
    case 207871:
    {
        returnValue = F("Lindenzweig");
        break;
    }
    case 207872:
    {
        returnValue = F("Lindenäcker");
        break;
    }
    case 207873:
    {
        returnValue = F("Lindenäckerstr.");
        break;
    }
    case 207874:
    {
        returnValue = F("Lindenäckerweg");
        break;
    }
    case 207875:
    {
        returnValue = F("Linder Mauspfad");
        break;
    }
    case 207876:
    {
        returnValue = F("Linder Steg");
        break;
    }
    case 207877:
    {
        returnValue = F("Linder Str.");
        break;
    }
    case 207878:
    {
        returnValue = F("Linder Weg");
        break;
    }
    case 207879:
    {
        returnValue = F("Linderbacher Str.");
        break;
    }
    case 207880:
    {
        returnValue = F("Linderbacher Weg");
        break;
    }
    case 207881:
    {
        returnValue = F("Linderbachweg");
        break;
    }
    case 207882:
    {
        returnValue = F("Linderbergweg");
        break;
    }
    case 207883:
    {
        returnValue = F("Linderbrucher Str.");
        break;
    }
    case 207884:
    {
        returnValue = F("Linderer");
        break;
    }
    case 207885:
    {
        returnValue = F("Linderfeld");
        break;
    }
    case 207886:
    {
        returnValue = F("Linderfeldstr.");
        break;
    }
    case 207887:
    {
        returnValue = F("Lindergasse");
        break;
    }
    case 207888:
    {
        returnValue = F("Linderhauser Str.");
        break;
    }
    case 207889:
    {
        returnValue = F("Linderhof");
        break;
    }
    case 207890:
    {
        returnValue = F("Linderhofer Str.");
        break;
    }
    case 207891:
    {
        returnValue = F("Linderhofstr.");
        break;
    }
    case 207892:
    {
        returnValue = F("Linderhofweg");
        break;
    }
    case 207893:
    {
        returnValue = F("Linderjahn");
        break;
    }
    case 207894:
    {
        returnValue = F("Linderlgarten");
        break;
    }
    case 207895:
    {
        returnValue = F("Lindermannstr.");
        break;
    }
    case 207896:
    {
        returnValue = F("Lindermer");
        break;
    }
    case 207897:
    {
        returnValue = F("Lindermoos");
        break;
    }
    case 207898:
    {
        returnValue = F("Lindern");
        break;
    }
    case 207899:
    {
        returnValue = F("Linderner Bahn");
        break;
    }
    case 207900:
    {
        returnValue = F("Linderner Damm");
        break;
    }
    case 207901:
    {
        returnValue = F("Linderner Feldstr.");
        break;
    }
    case 207902:
    {
        returnValue = F("Linderner Ring");
        break;
    }
    case 207903:
    {
        returnValue = F("Linderner Str.");
        break;
    }
    case 207904:
    {
        returnValue = F("Lindernland");
        break;
    }
    case 207905:
    {
        returnValue = F("Linders Feld");
        break;
    }
    case 207906:
    {
        returnValue = F("Lindersbachstr.");
        break;
    }
    case 207907:
    {
        returnValue = F("Lindersberg");
        break;
    }
    case 207908:
    {
        returnValue = F("Lindersmahdweg");
        break;
    }
    case 207909:
    {
        returnValue = F("Linderst");
        break;
    }
    case 207910:
    {
        returnValue = F("Lindersthalde");
        break;
    }
    case 207911:
    {
        returnValue = F("Linderstr.");
        break;
    }
    case 207912:
    {
        returnValue = F("Linderststräßle");
        break;
    }
    case 207913:
    {
        returnValue = F("Linderstweg");
        break;
    }
    case 207914:
    {
        returnValue = F("Lindersweg");
        break;
    }
    case 207915:
    {
        returnValue = F("Lindert");
        break;
    }
    case 207916:
    {
        returnValue = F("Linderter Weg");
        break;
    }
    case 207917:
    {
        returnValue = F("Lindertschen Diek");
        break;
    }
    case 207918:
    {
        returnValue = F("Lindertstr.");
        break;
    }
    case 207919:
    {
        returnValue = F("Lindertsweg");
        break;
    }
    case 207920:
    {
        returnValue = F("Linderweg");
        break;
    }
    case 207921:
    {
        returnValue = F("Lindesaystr.");
        break;
    }
    case 207922:
    {
        returnValue = F("Lindeshalde");
        break;
    }
    case 207923:
    {
        returnValue = F("Lindesheimer Str.");
        break;
    }
    case 207924:
    {
        returnValue = F("Lindesmühl Passage");
        break;
    }
    case 207925:
    {
        returnValue = F("Lindesmühlpromenade");
        break;
    }
    case 207926:
    {
        returnValue = F("Lindesmühlsteg");
        break;
    }
    case 207927:
    {
        returnValue = F("Lindestr.");
        break;
    }
    case 207928:
    {
        returnValue = F("Lindesweg");
        break;
    }
    case 207929:
    {
        returnValue = F("Lindewarth");
        break;
    }
    case 207930:
    {
        returnValue = F("Lindeweg");
        break;
    }
    case 207931:
    {
        returnValue = F("Lindewiesener Str.");
        break;
    }
    case 207932:
    {
        returnValue = F("Lindewiesener Weg");
        break;
    }
    case 207933:
    {
        returnValue = F("Lindfeld");
        break;
    }
    case 207934:
    {
        returnValue = F("Lindfelder Weg");
        break;
    }
    case 207935:
    {
        returnValue = F("Lindflurer Str.");
        break;
    }
    case 207936:
    {
        returnValue = F("Lindflurer Weg");
        break;
    }
    case 207937:
    {
        returnValue = F("Lindfläche");
        break;
    }
    case 207938:
    {
        returnValue = F("Lindforster Str.");
        break;
    }
    case 207939:
    {
        returnValue = F("Lindgensstr.");
        break;
    }
    case 207940:
    {
        returnValue = F("Lindgenstr.");
        break;
    }
    case 207941:
    {
        returnValue = F("Lindgesfeld");
        break;
    }
    case 207942:
    {
        returnValue = F("Lindgesweg");
        break;
    }
    case 207943:
    {
        returnValue = F("Lindgraben");
        break;
    }
    case 207944:
    {
        returnValue = F("Lindgrenstr.");
        break;
    }
    case 207945:
    {
        returnValue = F("Lindgrenweg");
        break;
    }
    case 207946:
    {
        returnValue = F("Lindgrund");
        break;
    }
    case 207947:
    {
        returnValue = F("Lindhalde");
        break;
    }
    case 207948:
    {
        returnValue = F("Lindhalden");
        break;
    }
    case 207949:
    {
        returnValue = F("Lindhaldenweg");
        break;
    }
    case 207950:
    {
        returnValue = F("Lindhardstr.");
        break;
    }
    case 207951:
    {
        returnValue = F("Lindhardt");
        break;
    }
    case 207952:
    {
        returnValue = F("Lindhardter Str.");
        break;
    }
    case 207953:
    {
        returnValue = F("Lindharter Weg");
        break;
    }
    case 207954:
    {
        returnValue = F("Lindheide");
        break;
    }
    case 207955:
    {
        returnValue = F("Lindheimer Str.");
        break;
    }
    case 207956:
    {
        returnValue = F("Lindhelle");
        break;
    }
    case 207957:
    {
        returnValue = F("Lindhof");
        break;
    }
    case 207958:
    {
        returnValue = F("Lindhoff");
        break;
    }
    case 207959:
    {
        returnValue = F("Lindhofhöhe");
        break;
    }
    case 207960:
    {
        returnValue = F("Lindhofstr.");
        break;
    }
    case 207961:
    {
        returnValue = F("Lindholmplatz");
        break;
    }
    case 207962:
    {
        returnValue = F("Lindholz");
        break;
    }
    case 207963:
    {
        returnValue = F("Lindholzer Weg");
        break;
    }
    case 207964:
    {
        returnValue = F("Lindholzfarm");
        break;
    }
    case 207965:
    {
        returnValue = F("Lindholzweg");
        break;
    }
    case 207966:
    {
        returnValue = F("Lindhoop");
        break;
    }
    case 207967:
    {
        returnValue = F("Lindhooper Str.");
        break;
    }
    case 207968:
    {
        returnValue = F("Lindhorn");
        break;
    }
    case 207969:
    {
        returnValue = F("Lindhornweg");
        break;
    }
    case 207970:
    {
        returnValue = F("Lindhorst");
        break;
    }
    case 207971:
    {
        returnValue = F("Lindhorst-Bahn");
        break;
    }
    case 207972:
    {
        returnValue = F("Lindhorster Str.");
        break;
    }
    case 207973:
    {
        returnValue = F("Lindhorster Weg");
        break;
    }
    case 207974:
    {
        returnValue = F("Lindhorstplatz");
        break;
    }
    case 207975:
    {
        returnValue = F("Lindhorststr.");
        break;
    }
    case 207976:
    {
        returnValue = F("Lindhorstweg");
        break;
    }
    case 207977:
    {
        returnValue = F("Lindhuberstr.");
        break;
    }
    case 207978:
    {
        returnValue = F("Lindhöfter Berg");
        break;
    }
    case 207979:
    {
        returnValue = F("Lindhörst");
        break;
    }
    case 207980:
    {
        returnValue = F("Lindhövel");
        break;
    }
    case 207981:
    {
        returnValue = F("Lindhövelweg");
        break;
    }
    case 207982:
    {
        returnValue = F("Lindichstr.");
        break;
    }
    case 207983:
    {
        returnValue = F("Lindichweg");
        break;
    }
    case 207984:
    {
        returnValue = F("Lindig");
        break;
    }
    case 207985:
    {
        returnValue = F("Lindigallee");
        break;
    }
    case 207986:
    {
        returnValue = F("Lindiger Str.");
        break;
    }
    case 207987:
    {
        returnValue = F("Lindigshof");
        break;
    }
    case 207988:
    {
        returnValue = F("Lindigsmühle");
        break;
    }
    case 207989:
    {
        returnValue = F("Lindigstr.");
        break;
    }
    case 207990:
    {
        returnValue = F("Lindigsweg");
        break;
    }
    case 207991:
    {
        returnValue = F("Lindigtgasse");
        break;
    }
    case 207992:
    {
        returnValue = F("Lindigtgut");
        break;
    }
    case 207993:
    {
        returnValue = F("Lindigtstr.");
        break;
    }
    case 207994:
    {
        returnValue = F("Lindigweg");
        break;
    }
    case 207995:
    {
        returnValue = F("Lindingerweg");
        break;
    }
    case 207996:
    {
        returnValue = F("Lindkamp");
        break;
    }
    case 207997:
    {
        returnValue = F("Lindkirchener Str.");
        break;
    }
    case 207998:
    {
        returnValue = F("Lindl");
        break;
    }
    case 207999:
    {
        returnValue = F("Lindlacher Weg");
        break;
    }
    case 208000:
    {
        returnValue = F("Lindlachsweg");
        break;
    }
    case 208001:
    {
        returnValue = F("Lindlahnerstr.");
        break;
    }
    case 208002:
    {
        returnValue = F("Lindlarer Str.");
        break;
    }
    case 208003:
    {
        returnValue = F("Lindlaufweg");
        break;
    }
    case 208004:
    {
        returnValue = F("Lindlaustr.");
        break;
    }
    case 208005:
    {
        returnValue = F("Lindlberghof");
        break;
    }
    case 208006:
    {
        returnValue = F("Lindlbergstr.");
        break;
    }
    case 208007:
    {
        returnValue = F("Lindleinstr.");
        break;
    }
    case 208008:
    {
        returnValue = F("Lindleinswasenstr.");
        break;
    }
    case 208009:
    {
        returnValue = F("Lindleinweg");
        break;
    }
    case 208010:
    {
        returnValue = F("Lindleite");
        break;
    }
    case 208011:
    {
        returnValue = F("Lindlenweg");
        break;
    }
    case 208012:
    {
        returnValue = F("Lindleshang");
        break;
    }
    case 208013:
    {
        returnValue = F("Lindleshof");
        break;
    }
    case 208014:
    {
        returnValue = F("Lindlestr.");
        break;
    }
    case 208015:
    {
        returnValue = F("Lindlewaldweg");
        break;
    }
    case 208016:
    {
        returnValue = F("Lindlfeldweg");
        break;
    }
    case 208017:
    {
        returnValue = F("Lindlgasse");
        break;
    }
    case 208018:
    {
        returnValue = F("Lindloge");
        break;
    }
    case 208019:
    {
        returnValue = F("Lindloger Moorweg");
        break;
    }
    case 208020:
    {
        returnValue = F("Lindloher Str.");
        break;
    }
    case 208021:
    {
        returnValue = F("Lindlschmiedstr.");
        break;
    }
    case 208022:
    {
        returnValue = F("Lindlstr.");
        break;
    }
    case 208023:
    {
        returnValue = F("Lindlweg");
        break;
    }
    case 208024:
    {
        returnValue = F("Lindmayrstr.");
        break;
    }
    case 208025:
    {
        returnValue = F("Lindnergasse");
        break;
    }
    case 208026:
    {
        returnValue = F("Lindners Berg");
        break;
    }
    case 208027:
    {
        returnValue = F("Lindners Weg");
        break;
    }
    case 208028:
    {
        returnValue = F("Lindnerschmidtstr.");
        break;
    }
    case 208029:
    {
        returnValue = F("Lindnershof");
        break;
    }
    case 208030:
    {
        returnValue = F("Lindnerstr.");
        break;
    }
    case 208031:
    {
        returnValue = F("Lindnersweg");
        break;
    }
    case 208032:
    {
        returnValue = F("Lindnerweg");
        break;
    }
    case 208033:
    {
        returnValue = F("Lindorfer Str.");
        break;
    }
    case 208034:
    {
        returnValue = F("Lindorfer Weg");
        break;
    }
    case 208035:
    {
        returnValue = F("Lindow");
        break;
    }
    case 208036:
    {
        returnValue = F("Lindower Dorfstr.");
        break;
    }
    case 208037:
    {
        returnValue = F("Lindower Str.");
        break;
    }
    case 208038:
    {
        returnValue = F("Lindower Weg");
        break;
    }
    case 208039:
    {
        returnValue = F("Lindrainweg");
        break;
    }
    case 208040:
    {
        returnValue = F("Lindrehm");
        break;
    }
    case 208041:
    {
        returnValue = F("Lindscheid");
        break;
    }
    case 208042:
    {
        returnValue = F("Lindscheider Str.");
        break;
    }
    case 208043:
    {
        returnValue = F("Lindscheidstr.");
        break;
    }
    case 208044:
    {
        returnValue = F("Lindschieder Weg");
        break;
    }
    case 208045:
    {
        returnValue = F("Lindschulteweg");
        break;
    }
    case 208046:
    {
        returnValue = F("Lindspfädchen");
        break;
    }
    case 208047:
    {
        returnValue = F("Lindstedter Chaussee");
        break;
    }
    case 208048:
    {
        returnValue = F("Lindstedter Ring");
        break;
    }
    case 208049:
    {
        returnValue = F("Lindstedter Str.");
        break;
    }
    case 208050:
    {
        returnValue = F("Lindstedter Weg");
        break;
    }
    case 208051:
    {
        returnValue = F("Lindstockstr.");
        break;
    }
    case 208052:
    {
        returnValue = F("Lindstr.");
        break;
    }
    case 208053:
    {
        returnValue = F("Lindtalerweg");
        break;
    }
    case 208054:
    {
        returnValue = F("Lindtalstr.");
        break;
    }
    case 208055:
    {
        returnValue = F("Lindtalsweg");
        break;
    }
    case 208056:
    {
        returnValue = F("Lindtalweg");
        break;
    }
    case 208057:
    {
        returnValue = F("Lindthaler Str.");
        break;
    }
    case 208058:
    {
        returnValue = F("Lindtor");
        break;
    }
    case 208059:
    {
        returnValue = F("Lindtorfer Weg");
        break;
    }
    case 208060:
    {
        returnValue = F("Lindvennweg");
        break;
    }
    case 208061:
    {
        returnValue = F("Lindweg");
        break;
    }
    case 208062:
    {
        returnValue = F("Lindweilerstr.");
        break;
    }
    case 208063:
    {
        returnValue = F("Lindwurmstr.");
        break;
    }
    case 208064:
    {
        returnValue = F("Lindwurmweg");
        break;
    }
    case 208065:
    {
        returnValue = F("Lindäcker");
        break;
    }
    case 208066:
    {
        returnValue = F("Lindäckerweg");
        break;
    }
    case 208067:
    {
        returnValue = F("Lindöschweg");
        break;
    }
    case 208068:
    {
        returnValue = F("Line-Eid-Str.");
        break;
    }
    case 208069:
    {
        returnValue = F("Lineal");
        break;
    }
    case 208070:
    {
        returnValue = F("Linebroker Str.");
        break;
    }
    case 208071:
    {
        returnValue = F("Lineke-Winter-Weg");
        break;
    }
    case 208072:
    {
        returnValue = F("Linerweg");
        break;
    }
    case 208073:
    {
        returnValue = F("Linetweg");
        break;
    }
    case 208074:
    {
        returnValue = F("Ling-Brücke");
        break;
    }
    case 208075:
    {
        returnValue = F("Linge");
        break;
    }
    case 208076:
    {
        returnValue = F("Lingelbacher Str.");
        break;
    }
    case 208077:
    {
        returnValue = F("Lingelbacher Weg");
        break;
    }
    case 208078:
    {
        returnValue = F("Lingelegrundweg");
        break;
    }
    case 208079:
    {
        returnValue = F("Lingelgasse");
        break;
    }
    case 208080:
    {
        returnValue = F("Lingelkopfweg");
        break;
    }
    case 208081:
    {
        returnValue = F("Lingelmühle");
        break;
    }
    case 208082:
    {
        returnValue = F("Lingeloh");
        break;
    }
    case 208083:
    {
        returnValue = F("Lingelscheid");
        break;
    }
    case 208084:
    {
        returnValue = F("Lingelswaldweg");
        break;
    }
    case 208085:
    {
        returnValue = F("Lingemannstr.");
        break;
    }
    case 208086:
    {
        returnValue = F("Lingen");
        break;
    }
    case 208087:
    {
        returnValue = F("Lingenauer Str.");
        break;
    }
    case 208088:
    {
        returnValue = F("Lingenauwer");
        break;
    }
    case 208089:
    {
        returnValue = F("Lingenbach");
        break;
    }
    case 208090:
    {
        returnValue = F("Lingenbacher Weg");
        break;
    }
    case 208091:
    {
        returnValue = F("Lingenbecke");
        break;
    }
    case 208092:
    {
        returnValue = F("Lingenbecker Weg");
        break;
    }
    case 208093:
    {
        returnValue = F("Lingener Damm");
        break;
    }
    case 208094:
    {
        returnValue = F("Lingener Str.");
        break;
    }
    case 208095:
    {
        returnValue = F("Lingenfeld");
        break;
    }
    case 208096:
    {
        returnValue = F("Lingenfelder Str.");
        break;
    }
    case 208097:
    {
        returnValue = F("Lingenhof");
        break;
    }
    case 208098:
    {
        returnValue = F("Lingensiepenstr.");
        break;
    }
    case 208099:
    {
        returnValue = F("Lingenstr.");
        break;
    }
    case 208100:
    {
        returnValue = F("Lingensweg");
        break;
    }
    case 208101:
    {
        returnValue = F("Lingental");
        break;
    }
    case 208102:
    {
        returnValue = F("Lingentaler Hof");
        break;
    }
    case 208103:
    {
        returnValue = F("Linger Str.");
        break;
    }
    case 208104:
    {
        returnValue = F("Linger Weg");
        break;
    }
    case 208105:
    {
        returnValue = F("Lingerbreite");
        break;
    }
    case 208106:
    {
        returnValue = F("Lingerhahner Str.");
        break;
    }
    case 208107:
    {
        returnValue = F("Lingerheide");
        break;
    }
    case 208108:
    {
        returnValue = F("Lingerstiege");
        break;
    }
    case 208109:
    {
        returnValue = F("Lingertstr.");
        break;
    }
    case 208110:
    {
        returnValue = F("Lingestenstr.");
        break;
    }
    case 208111:
    {
        returnValue = F("Lingestrote");
        break;
    }
    case 208112:
    {
        returnValue = F("Lingeweg");
        break;
    }
    case 208113:
    {
        returnValue = F("Linggen");
        break;
    }
    case 208114:
    {
        returnValue = F("Linggstr.");
        break;
    }
    case 208115:
    {
        returnValue = F("Linggweg");
        break;
    }
    case 208116:
    {
        returnValue = F("Lingigsfeld");
        break;
    }
    case 208117:
    {
        returnValue = F("Lingmannstr.");
        break;
    }
    case 208118:
    {
        returnValue = F("Lingmattweg");
        break;
    }
    case 208119:
    {
        returnValue = F("Lingnerstr.");
        break;
    }
    case 208120:
    {
        returnValue = F("Lingscheider Weg");
        break;
    }
    case 208121:
    {
        returnValue = F("Lingscheiderhof");
        break;
    }
    case 208122:
    {
        returnValue = F("Lingscheiderweg");
        break;
    }
    case 208123:
    {
        returnValue = F("Lingsforter Str.");
        break;
    }
    case 208124:
    {
        returnValue = F("Linguster Weg");
        break;
    }
    case 208125:
    {
        returnValue = F("Lingwedeler Weg");
        break;
    }
    case 208126:
    {
        returnValue = F("Lingwiesenstr.");
        break;
    }
    case 208127:
    {
        returnValue = F("Linhart-Strüw-Str.");
        break;
    }
    case 208128:
    {
        returnValue = F("Linhoffstr.");
        break;
    }
    case 208129:
    {
        returnValue = F("Linie");
        break;
    }
    case 208130:
    {
        returnValue = F("Liniengrenzweg");
        break;
    }
    case 208131:
    {
        returnValue = F("Linienring");
        break;
    }
    case 208132:
    {
        returnValue = F("Linienstr.");
        break;
    }
    case 208133:
    {
        returnValue = F("Liniental");
        break;
    }
    case 208134:
    {
        returnValue = F("Linienweg");
        break;
    }
    case 208135:
    {
        returnValue = F("Liningweg");
        break;
    }
    case 208136:
    {
        returnValue = F("Link Geräumt");
        break;
    }
    case 208137:
    {
        returnValue = F("Link-Geräumt");
        break;
    }
    case 208138:
    {
        returnValue = F("Linkaul");
        break;
    }
    case 208139:
    {
        returnValue = F("Linkbergstr.");
        break;
    }
    case 208140:
    {
        returnValue = F("Linke Bachgasse");
        break;
    }
    case 208141:
    {
        returnValue = F("Linke Gasse");
        break;
    }
    case 208142:
    {
        returnValue = F("Linke Hahnenbachstr.");
        break;
    }
    case 208143:
    {
        returnValue = F("Linke Mühle");
        break;
    }
    case 208144:
    {
        returnValue = F("Linke Tauberstr.");
        break;
    }
    case 208145:
    {
        returnValue = F("Linken");
        break;
    }
    case 208146:
    {
        returnValue = F("Linken Mühle");
        break;
    }
    case 208147:
    {
        returnValue = F("Linkenbacher Str.");
        break;
    }
    case 208148:
    {
        returnValue = F("Linkenbacher Weg");
        break;
    }
    case 208149:
    {
        returnValue = F("Linkenboldstr.");
        break;
    }
    case 208150:
    {
        returnValue = F("Linkengasse");
        break;
    }
    case 208151:
    {
        returnValue = F("Linkenheimer Allee");
        break;
    }
    case 208152:
    {
        returnValue = F("Linkenheimer Str.");
        break;
    }
    case 208153:
    {
        returnValue = F("Linkenheimer Weg");
        break;
    }
    case 208154:
    {
        returnValue = F("Linkenhörnleweg");
        break;
    }
    case 208155:
    {
        returnValue = F("Linkenstr.");
        break;
    }
    case 208156:
    {
        returnValue = F("Linkenstückenweg");
        break;
    }
    case 208157:
    {
        returnValue = F("Linkentalstr.");
        break;
    }
    case 208158:
    {
        returnValue = F("Linkenweg");
        break;
    }
    case 208159:
    {
        returnValue = F("Linker Esch");
        break;
    }
    case 208160:
    {
        returnValue = F("Linker Kreuthweg");
        break;
    }
    case 208161:
    {
        returnValue = F("Linker Mühltalweg");
        break;
    }
    case 208162:
    {
        returnValue = F("Linker Pappelbach-Wiesenweg");
        break;
    }
    case 208163:
    {
        returnValue = F("Linker Quadenweg");
        break;
    }
    case 208164:
    {
        returnValue = F("Linker Römerstallweg");
        break;
    }
    case 208165:
    {
        returnValue = F("Linker Steig");
        break;
    }
    case 208166:
    {
        returnValue = F("Linker Weg");
        break;
    }
    case 208167:
    {
        returnValue = F("Linker Weiler");
        break;
    }
    case 208168:
    {
        returnValue = F("Linkerhagen");
        break;
    }
    case 208169:
    {
        returnValue = F("Linkermicke");
        break;
    }
    case 208170:
    {
        returnValue = F("Linkernweg");
        break;
    }
    case 208171:
    {
        returnValue = F("Linkershof");
        break;
    }
    case 208172:
    {
        returnValue = F("Linkershofer Weg");
        break;
    }
    case 208173:
    {
        returnValue = F("Linkertsweg");
        break;
    }
    case 208174:
    {
        returnValue = F("Linkes Hosenbein");
        break;
    }
    case 208175:
    {
        returnValue = F("Linkes Schöntal");
        break;
    }
    case 208176:
    {
        returnValue = F("Linkestal");
        break;
    }
    case 208177:
    {
        returnValue = F("Linkeweg");
        break;
    }
    case 208178:
    {
        returnValue = F("Linkgasse");
        break;
    }
    case 208179:
    {
        returnValue = F("Linkholzweg");
        break;
    }
    case 208180:
    {
        returnValue = F("Linkläuer Str.");
        break;
    }
    case 208181:
    {
        returnValue = F("Links vom Germersheimer Weg");
        break;
    }
    case 208182:
    {
        returnValue = F("Linkshäfen");
        break;
    }
    case 208183:
    {
        returnValue = F("Linkstr.");
        break;
    }
    case 208184:
    {
        returnValue = F("Linkwerkhohle");
        break;
    }
    case 208185:
    {
        returnValue = F("Linkworth");
        break;
    }
    case 208186:
    {
        returnValue = F("Linlandweg");
        break;
    }
    case 208187:
    {
        returnValue = F("Linnackerweg");
        break;
    }
    case 208188:
    {
        returnValue = F("Linnauer Str.");
        break;
    }
    case 208189:
    {
        returnValue = F("Linnbruchweg");
        break;
    }
    case 208190:
    {
        returnValue = F("Linnebachstr.");
        break;
    }
    case 208191:
    {
        returnValue = F("Linnebachweg");
        break;
    }
    case 208192:
    {
        returnValue = F("Linnebergstr.");
        break;
    }
    case 208193:
    {
        returnValue = F("Linnebornweg");
        break;
    }
    case 208194:
    {
        returnValue = F("Linnefantstr.");
        break;
    }
    case 208195:
    {
        returnValue = F("Linnekamp");
        break;
    }
    case 208196:
    {
        returnValue = F("Linnemannweg");
        break;
    }
    case 208197:
    {
        returnValue = F("Linnen-Platz");
        break;
    }
    case 208198:
    {
        returnValue = F("Linnenbacher Weg");
        break;
    }
    case 208199:
    {
        returnValue = F("Linnenbachstr.");
        break;
    }
    case 208200:
    {
        returnValue = F("Linnenbachweg");
        break;
    }
    case 208201:
    {
        returnValue = F("Linnenberg");
        break;
    }
    case 208202:
    {
        returnValue = F("Linnenboo");
        break;
    }
    case 208203:
    {
        returnValue = F("Linnenbrede");
        break;
    }
    case 208204:
    {
        returnValue = F("Linnenbreite");
        break;
    }
    case 208205:
    {
        returnValue = F("Linnenbrunnen");
        break;
    }
    case 208206:
    {
        returnValue = F("Linnenbäk");
        break;
    }
    case 208207:
    {
        returnValue = F("Linnenecke");
        break;
    }
    case 208208:
    {
        returnValue = F("Linnengarten");
        break;
    }
    case 208209:
    {
        returnValue = F("Linnengasse");
        break;
    }
    case 208210:
    {
        returnValue = F("Linnengorn");
        break;
    }
    case 208211:
    {
        returnValue = F("Linnenhöfchen");
        break;
    }
    case 208212:
    {
        returnValue = F("Linnenkamp");
        break;
    }
    case 208213:
    {
        returnValue = F("Linnenkampshof");
        break;
    }
    case 208214:
    {
        returnValue = F("Linnenkampstr.");
        break;
    }
    case 208215:
    {
        returnValue = F("Linnenkämper Str.");
        break;
    }
    case 208216:
    {
        returnValue = F("Linnenpesch");
        break;
    }
    case 208217:
    {
        returnValue = F("Linnenplan");
        break;
    }
    case 208218:
    {
        returnValue = F("Linnenstr.");
        break;
    }
    case 208219:
    {
        returnValue = F("Linnenweg");
        break;
    }
    case 208220:
    {
        returnValue = F("Linnenworth");
        break;
    }
    case 208221:
    {
        returnValue = F("Linnenäckerweg");
        break;
    }
    case 208222:
    {
        returnValue = F("Linneper Weg");
        break;
    }
    case 208223:
    {
        returnValue = F("Linneplatz");
        break;
    }
    case 208224:
    {
        returnValue = F("Linner Landstr.");
        break;
    }
    case 208225:
    {
        returnValue = F("Linner Platz");
        break;
    }
    case 208226:
    {
        returnValue = F("Linner Str.");
        break;
    }
    case 208227:
    {
        returnValue = F("Linner Weg");
        break;
    }
    case 208228:
    {
        returnValue = F("Linnerijstr.");
        break;
    }
    case 208229:
    {
        returnValue = F("Linnersbergstr.");
        break;
    }
    case 208230:
    {
        returnValue = F("Linnert");
        break;
    }
    case 208231:
    {
        returnValue = F("Linnertstr.");
        break;
    }
    case 208232:
    {
        returnValue = F("Linnertsweg");
        break;
    }
    case 208233:
    {
        returnValue = F("Linnertweg");
        break;
    }
    case 208234:
    {
        returnValue = F("Linnerweg");
        break;
    }
    case 208235:
    {
        returnValue = F("Linnerwegstr.");
        break;
    }
    case 208236:
    {
        returnValue = F("Linnestieg");
        break;
    }
    case 208237:
    {
        returnValue = F("Linnesweg");
        break;
    }
    case 208238:
    {
        returnValue = F("Linnfeldstr.");
        break;
    }
    case 208239:
    {
        returnValue = F("Linnhop");
        break;
    }
    case 208240:
    {
        returnValue = F("Linnicher Str.");
        break;
    }
    case 208241:
    {
        returnValue = F("Linnigschneise");
        break;
    }
    case 208242:
    {
        returnValue = F("Linnigweg");
        break;
    }
    case 208243:
    {
        returnValue = F("Linning");
        break;
    }
    case 208244:
    {
        returnValue = F("Linnlandsweg");
        break;
    }
    case 208245:
    {
        returnValue = F("Linnorthskamp");
        break;
    }
    case 208246:
    {
        returnValue = F("Linnorthsweg");
        break;
    }
    case 208247:
    {
        returnValue = F("Linnrück");
        break;
    }
    case 208248:
    {
        returnValue = F("Linnstr.");
        break;
    }
    case 208249:
    {
        returnValue = F("Linnthun");
        break;
    }
    case 208250:
    {
        returnValue = F("Linnwiese");
        break;
    }
    case 208251:
    {
        returnValue = F("Linnéstr.");
        break;
    }
    case 208252:
    {
        returnValue = F("Linnéweg");
        break;
    }
    case 208253:
    {
        returnValue = F("Linoleumstr.");
        break;
    }
    case 208254:
    {
        returnValue = F("Linowskistr.");
        break;
    }
    case 208255:
    {
        returnValue = F("Linprunstr.");
        break;
    }
    case 208256:
    {
        returnValue = F("Lins");
        break;
    }
    case 208257:
    {
        returnValue = F("Linsburger Allee");
        break;
    }
    case 208258:
    {
        returnValue = F("Linscheid-Brücke");
        break;
    }
    case 208259:
    {
        returnValue = F("Linscheider Bach");
        break;
    }
    case 208260:
    {
        returnValue = F("Linscheider Str.");
        break;
    }
    case 208261:
    {
        returnValue = F("Linscheiderbecke");
        break;
    }
    case 208262:
    {
        returnValue = F("Linscheidstr.");
        break;
    }
    case 208263:
    {
        returnValue = F("Linsegass");
        break;
    }
    case 208264:
    {
        returnValue = F("Linsellesstr.");
        break;
    }
    case 208265:
    {
        returnValue = F("Linsen");
        break;
    }
    case 208266:
    {
        returnValue = F("Linsenbach");
        break;
    }
    case 208267:
    {
        returnValue = F("Linsenbaumweg");
        break;
    }
    case 208268:
    {
        returnValue = F("Linsenberg");
        break;
    }
    case 208269:
    {
        returnValue = F("Linsenberger Str.");
        break;
    }
    case 208270:
    {
        returnValue = F("Linsenbergstr.");
        break;
    }
    case 208271:
    {
        returnValue = F("Linsenbergweg");
        break;
    }
    case 208272:
    {
        returnValue = F("Linsenbergweiherstr.");
        break;
    }
    case 208273:
    {
        returnValue = F("Linsenboldstr.");
        break;
    }
    case 208274:
    {
        returnValue = F("Linsenbrunnengasse");
        break;
    }
    case 208275:
    {
        returnValue = F("Linsenbrunnenplatz");
        break;
    }
    case 208276:
    {
        returnValue = F("Linsenbrunnplatz");
        break;
    }
    case 208277:
    {
        returnValue = F("Linsenbuckel");
        break;
    }
    case 208278:
    {
        returnValue = F("Linsenbuckelweg");
        break;
    }
    case 208279:
    {
        returnValue = F("Linsenbuschweg");
        break;
    }
    case 208280:
    {
        returnValue = F("Linsenbühl");
        break;
    }
    case 208281:
    {
        returnValue = F("Linsenbühlstr.");
        break;
    }
    case 208282:
    {
        returnValue = F("Linseneckstr.");
        break;
    }
    case 208283:
    {
        returnValue = F("Linsenfeld");
        break;
    }
    case 208284:
    {
        returnValue = F("Linsengarten");
        break;
    }
    case 208285:
    {
        returnValue = F("Linsengartenweg");
        break;
    }
    case 208286:
    {
        returnValue = F("Linsengasse");
        break;
    }
    case 208287:
    {
        returnValue = F("Linsengraben");
        break;
    }
    case 208288:
    {
        returnValue = F("Linsengrabenstr.");
        break;
    }
    case 208289:
    {
        returnValue = F("Linsengrund");
        break;
    }
    case 208290:
    {
        returnValue = F("Linsenhag");
        break;
    }
    case 208291:
    {
        returnValue = F("Linsenhalde");
        break;
    }
    case 208292:
    {
        returnValue = F("Linsenhof");
        break;
    }
    case 208293:
    {
        returnValue = F("Linsenhofer Berg");
        break;
    }
    case 208294:
    {
        returnValue = F("Linsenhofer Platz");
        break;
    }
    case 208295:
    {
        returnValue = F("Linsenhofer Str.");
        break;
    }
    case 208296:
    {
        returnValue = F("Linsenhofstr.");
        break;
    }
    case 208297:
    {
        returnValue = F("Linsenholzweg");
        break;
    }
    case 208298:
    {
        returnValue = F("Linsenköppel");
        break;
    }
    case 208299:
    {
        returnValue = F("Linsenmannstr.");
        break;
    }
    case 208300:
    {
        returnValue = F("Linsenmarkt");
        break;
    }
    case 208301:
    {
        returnValue = F("Linsenpfad");
        break;
    }
    case 208302:
    {
        returnValue = F("Linsenrain");
        break;
    }
    case 208303:
    {
        returnValue = F("Linsenrainweg");
        break;
    }
    case 208304:
    {
        returnValue = F("Linsensteinplanweg");
        break;
    }
    case 208305:
    {
        returnValue = F("Linsensteinweg");
        break;
    }
    case 208306:
    {
        returnValue = F("Linsenteich-Auweg");
        break;
    }
    case 208307:
    {
        returnValue = F("Linsenteichweg");
        break;
    }
    case 208308:
    {
        returnValue = F("Linsenviertel");
        break;
    }
    case 208309:
    {
        returnValue = F("Linsenwasen");
        break;
    }
    case 208310:
    {
        returnValue = F("Linsenweg");
        break;
    }
    case 208311:
    {
        returnValue = F("Linsenwiese");
        break;
    }
    case 208312:
    {
        returnValue = F("Linsenäcker");
        break;
    }
    case 208313:
    {
        returnValue = F("Linsenäckerlestr.");
        break;
    }
    case 208314:
    {
        returnValue = F("Linsenöschstr.");
        break;
    }
    case 208315:
    {
        returnValue = F("Linser Str.");
        break;
    }
    case 208316:
    {
        returnValue = F("Linsgasse");
        break;
    }
    case 208317:
    {
        returnValue = F("Linsimühle");
        break;
    }
    case 208318:
    {
        returnValue = F("Linsingenstr.");
        break;
    }
    case 208319:
    {
        returnValue = F("Linsinger Str.");
        break;
    }
    case 208320:
    {
        returnValue = F("Linspherradweg");
        break;
    }
    case 208321:
    {
        returnValue = F("Linsstr.");
        break;
    }
    case 208322:
    {
        returnValue = F("Linsweg");
        break;
    }
    case 208323:
    {
        returnValue = F("Linsweger Esch");
        break;
    }
    case 208324:
    {
        returnValue = F("Linsweger Weg");
        break;
    }
    case 208325:
    {
        returnValue = F("Lintach");
        break;
    }
    case 208326:
    {
        returnValue = F("Lintacher Str.");
        break;
    }
    case 208327:
    {
        returnValue = F("Lintel");
        break;
    }
    case 208328:
    {
        returnValue = F("Linteler Feld");
        break;
    }
    case 208329:
    {
        returnValue = F("Linteler Kirchweg");
        break;
    }
    case 208330:
    {
        returnValue = F("Linteler Sandplacken");
        break;
    }
    case 208331:
    {
        returnValue = F("Linteler Str.");
        break;
    }
    case 208332:
    {
        returnValue = F("Lintelers Kamp");
        break;
    }
    case 208333:
    {
        returnValue = F("Linteln");
        break;
    }
    case 208334:
    {
        returnValue = F("Lintelnweg");
        break;
    }
    case 208335:
    {
        returnValue = F("Lintelostr.");
        break;
    }
    case 208336:
    {
        returnValue = F("Lintener Weg");
        break;
    }
    case 208337:
    {
        returnValue = F("Lintermühle");
        break;
    }
    case 208338:
    {
        returnValue = F("Linterner Wiesen");
        break;
    }
    case 208339:
    {
        returnValue = F("Linterstr.");
        break;
    }
    case 208340:
    {
        returnValue = F("Lintertstr.");
        break;
    }
    case 208341:
    {
        returnValue = F("Lintertweg");
        break;
    }
    case 208342:
    {
        returnValue = F("Lintforter Str.");
        break;
    }
    case 208343:
    {
        returnValue = F("Lintgehrstr.");
        break;
    }
    case 208344:
    {
        returnValue = F("Lintgesfuhr");
        break;
    }
    case 208345:
    {
        returnValue = F("Linthaldenweg");
        break;
    }
    case 208346:
    {
        returnValue = F("Linther Weg");
        break;
    }
    case 208347:
    {
        returnValue = F("Lintiger Str.");
        break;
    }
    case 208348:
    {
        returnValue = F("Lintnerstr.");
        break;
    }
    case 208349:
    {
        returnValue = F("Lintorfer Markt");
        break;
    }
    case 208350:
    {
        returnValue = F("Lintorfer Str.");
        break;
    }
    case 208351:
    {
        returnValue = F("Lintorfer Weg");
        break;
    }
    case 208352:
    {
        returnValue = F("Lintvenn");
        break;
    }
    case 208353:
    {
        returnValue = F("Lintzingsweg");
        break;
    }
    case 208354:
    {
        returnValue = F("Lintzstr.");
        break;
    }
    case 208355:
    {
        returnValue = F("Linumer Str.");
        break;
    }
    case 208356:
    {
        returnValue = F("Linumweg");
        break;
    }
    case 208357:
    {
        returnValue = F("Linus Pauling Str.");
        break;
    }
    case 208358:
    {
        returnValue = F("Linus-Pauling-Str.");
        break;
    }
    case 208359:
    {
        returnValue = F("Linward");
        break;
    }
    case 208360:
    {
        returnValue = F("Linxer Str.");
        break;
    }
    case 208361:
    {
        returnValue = F("Linxweilerstr.");
        break;
    }
    case 208362:
    {
        returnValue = F("Linz/Donau-Park");
        break;
    }
    case 208363:
    {
        returnValue = F("Linz/Sachsen-Ufer");
        break;
    }
    case 208364:
    {
        returnValue = F("Linzenburg");
        break;
    }
    case 208365:
    {
        returnValue = F("Linzenicher Str.");
        break;
    }
    case 208366:
    {
        returnValue = F("Linzenicher Weg");
        break;
    }
    case 208367:
    {
        returnValue = F("Linzer Hauptstr.");
        break;
    }
    case 208368:
    {
        returnValue = F("Linzer Str.");
        break;
    }
    case 208369:
    {
        returnValue = F("Linzer Weg");
        break;
    }
    case 208370:
    {
        returnValue = F("Linzeweg");
        break;
    }
    case 208371:
    {
        returnValue = F("Linzgaublick");
        break;
    }
    case 208372:
    {
        returnValue = F("Linzgaustr.");
        break;
    }
    case 208373:
    {
        returnValue = F("Linzgauweg");
        break;
    }
    case 208374:
    {
        returnValue = F("Linzhausenstr.");
        break;
    }
    case 208375:
    {
        returnValue = F("Linzigweg");
        break;
    }
    case 208376:
    {
        returnValue = F("Linzinger Str.");
        break;
    }
    case 208377:
    {
        returnValue = F("Linzitter Weg");
        break;
    }
    case 208378:
    {
        returnValue = F("Linzölner Weg");
        break;
    }
    case 208379:
    {
        returnValue = F("Lioba-Munz-Str.");
        break;
    }
    case 208380:
    {
        returnValue = F("Liobastr.");
        break;
    }
    case 208381:
    {
        returnValue = F("Liobaweg");
        break;
    }
    case 208382:
    {
        returnValue = F("Liominstr.");
        break;
    }
    case 208383:
    {
        returnValue = F("Lion-Feuchtwanger-Allee");
        break;
    }
    case 208384:
    {
        returnValue = F("Lion-Feuchtwanger-Str.");
        break;
    }
    case 208385:
    {
        returnValue = F("Lion-Feuchtwanger-Weg");
        break;
    }
    case 208386:
    {
        returnValue = F("Lion-Weg");
        break;
    }
    case 208387:
    {
        returnValue = F("Lionstr.");
        break;
    }
    case 208388:
    {
        returnValue = F("Lipburger Str.");
        break;
    }
    case 208389:
    {
        returnValue = F("Lipburger Weg");
        break;
    }
    case 208390:
    {
        returnValue = F("Liperiring");
        break;
    }
    case 208391:
    {
        returnValue = F("Lipezker Str.");
        break;
    }
    case 208392:
    {
        returnValue = F("Lipfersberger Str.");
        break;
    }
    case 208393:
    {
        returnValue = F("Lipfersberger Weg");
        break;
    }
    case 208394:
    {
        returnValue = F("Lipianyweg");
        break;
    }
    case 208395:
    {
        returnValue = F("Lipizzanerstr.");
        break;
    }
    case 208396:
    {
        returnValue = F("Lipizzanerweg");
        break;
    }
    case 208397:
    {
        returnValue = F("Lipkeweg");
        break;
    }
    case 208398:
    {
        returnValue = F("Lipp");
        break;
    }
    case 208399:
    {
        returnValue = F("Lippacher Str.");
        break;
    }
    case 208400:
    {
        returnValue = F("Lippacherstr.");
        break;
    }
    case 208401:
    {
        returnValue = F("Lippachstr.");
        break;
    }
    case 208402:
    {
        returnValue = F("Lippachtalstr.");
        break;
    }
    case 208403:
    {
        returnValue = F("Lippachtalweg");
        break;
    }
    case 208404:
    {
        returnValue = F("Lippastr.");
        break;
    }
    case 208405:
    {
        returnValue = F("Lippbergstr.");
        break;
    }
    case 208406:
    {
        returnValue = F("Lippbergweg");
        break;
    }
    case 208407:
    {
        returnValue = F("Lippborger Str.");
        break;
    }
    case 208408:
    {
        returnValue = F("Lippe");
        break;
    }
    case 208409:
    {
        returnValue = F("Lippeaue");
        break;
    }
    case 208410:
    {
        returnValue = F("Lippeblick");
        break;
    }
    case 208411:
    {
        returnValue = F("Lippedahl");
        break;
    }
    case 208412:
    {
        returnValue = F("Lippegarten");
        break;
    }
    case 208413:
    {
        returnValue = F("Lippehner Str.");
        break;
    }
    case 208414:
    {
        returnValue = F("Lippelsdorf");
        break;
    }
    case 208415:
    {
        returnValue = F("Lippelsgasse");
        break;
    }
    case 208416:
    {
        returnValue = F("Lippengasse");
        break;
    }
    case 208417:
    {
        returnValue = F("Lippengärten");
        break;
    }
    case 208418:
    {
        returnValue = F("Lippenhorstweg");
        break;
    }
    case 208419:
    {
        returnValue = F("Lippenhölzlesweg");
        break;
    }
    case 208420:
    {
        returnValue = F("Lippenkuhle");
        break;
    }
    case 208421:
    {
        returnValue = F("Lippenstr.");
        break;
    }
    case 208422:
    {
        returnValue = F("Lippenwiese");
        break;
    }
    case 208423:
    {
        returnValue = F("Lippenwiesen");
        break;
    }
    case 208424:
    {
        returnValue = F("Lippenwieseweg");
        break;
    }
    case 208425:
    {
        returnValue = F("Lippenwäldle");
        break;
    }
    case 208426:
    {
        returnValue = F("Lippepark");
        break;
    }
    case 208427:
    {
        returnValue = F("Lippepfad");
        break;
    }
    case 208428:
    {
        returnValue = F("Lipper Berg");
        break;
    }
    case 208429:
    {
        returnValue = F("Lipper Kamp");
        break;
    }
    case 208430:
    {
        returnValue = F("Lipper Markt");
        break;
    }
    case 208431:
    {
        returnValue = F("Lipper Str.");
        break;
    }
    case 208432:
    {
        returnValue = F("Lipper Tor");
        break;
    }
    case 208433:
    {
        returnValue = F("Lipper Weg");
        break;
    }
    case 208434:
    {
        returnValue = F("Lipper Winkel");
        break;
    }
    case 208435:
    {
        returnValue = F("Lipperheidstr.");
        break;
    }
    case 208436:
    {
        returnValue = F("Lipperheystr.");
        break;
    }
    case 208437:
    {
        returnValue = F("Lipperhofweg");
        break;
    }
    case 208438:
    {
        returnValue = F("Lipperhohl");
        break;
    }
    case 208439:
    {
        returnValue = F("Lippering");
        break;
    }
    case 208440:
    {
        returnValue = F("Lipperlandstr.");
        break;
    }
    case 208441:
    {
        returnValue = F("Lipperoder Str.");
        break;
    }
    case 208442:
    {
        returnValue = F("Lipperpfad");
        break;
    }
    case 208443:
    {
        returnValue = F("Lippersbach");
        break;
    }
    case 208444:
    {
        returnValue = F("Lippersdorfer Str.");
        break;
    }
    case 208445:
    {
        returnValue = F("Lippersfeld");
        break;
    }
    case 208446:
    {
        returnValue = F("Lipperstr.");
        break;
    }
    case 208447:
    {
        returnValue = F("Lippertor");
        break;
    }
    case 208448:
    {
        returnValue = F("Lippertsgrüner Str.");
        break;
    }
    case 208449:
    {
        returnValue = F("Lippertshofener Str.");
        break;
    }
    case 208450:
    {
        returnValue = F("Lippertshofener Weg");
        break;
    }
    case 208451:
    {
        returnValue = F("Lippertskirchen");
        break;
    }
    case 208452:
    {
        returnValue = F("Lippertsreuter Str.");
        break;
    }
    case 208453:
    {
        returnValue = F("Lippertsteichstr.");
        break;
    }
    case 208454:
    {
        returnValue = F("Lippertstr.");
        break;
    }
    case 208455:
    {
        returnValue = F("Lippertweg");
        break;
    }
    case 208456:
    {
        returnValue = F("Lipperweg");
        break;
    }
    case 208457:
    {
        returnValue = F("Lippestr.");
        break;
    }
    case 208458:
    {
        returnValue = F("Lippetal");
        break;
    }
    case 208459:
    {
        returnValue = F("Lippetor");
        break;
    }
    case 208460:
    {
        returnValue = F("Lippeweg");
        break;
    }
    case 208461:
    {
        returnValue = F("Lippinghauser Str.");
        break;
    }
    case 208462:
    {
        returnValue = F("Lippisauweg");
        break;
    }
    case 208463:
    {
        returnValue = F("Lippisbachweg");
        break;
    }
    case 208464:
    {
        returnValue = F("Lippischer Bruch");
        break;
    }
    case 208465:
    {
        returnValue = F("Lippizanerweg");
        break;
    }
    case 208466:
    {
        returnValue = F("Lippkamp");
        break;
    }
    case 208467:
    {
        returnValue = F("Lippkampstr.");
        break;
    }
    case 208468:
    {
        returnValue = F("Lipple-Stühle-Weg");
        break;
    }
    case 208469:
    {
        returnValue = F("Lipplinger Str.");
        break;
    }
    case 208470:
    {
        returnValue = F("Lippmannstr.");
        break;
    }
    case 208471:
    {
        returnValue = F("Lippmannweg");
        break;
    }
    case 208472:
    {
        returnValue = F("Lippmauer");
        break;
    }
    case 208473:
    {
        returnValue = F("Lippnstr.");
        break;
    }
    case 208474:
    {
        returnValue = F("Lippoldring");
        break;
    }
    case 208475:
    {
        returnValue = F("Lippoldsberger Str.");
        break;
    }
    case 208476:
    {
        returnValue = F("Lippoldsberger Weg");
        break;
    }
    case 208477:
    {
        returnValue = F("Lippoldsburgweg");
        break;
    }
    case 208478:
    {
        returnValue = F("Lippoldsdamm");
        break;
    }
    case 208479:
    {
        returnValue = F("Lippoldsruh");
        break;
    }
    case 208480:
    {
        returnValue = F("Lippoldstr.");
        break;
    }
    case 208481:
    {
        returnValue = F("Lippoldsweiler Str.");
        break;
    }
    case 208482:
    {
        returnValue = F("Lipporner Str.");
        break;
    }
    case 208483:
    {
        returnValue = F("Lipporner Weg");
        break;
    }
    case 208484:
    {
        returnValue = F("Lippramsdorfer Str.");
        break;
    }
    case 208485:
    {
        returnValue = F("Lipprandiser Marktsteig");
        break;
    }
    case 208486:
    {
        returnValue = F("Lipprandiser Str.");
        break;
    }
    case 208487:
    {
        returnValue = F("Lippsberg");
        break;
    }
    case 208488:
    {
        returnValue = F("Lippsche Str.");
        break;
    }
    case 208489:
    {
        returnValue = F("Lippscher Str.");
        break;
    }
    case 208490:
    {
        returnValue = F("Lippschneise");
        break;
    }
    case 208491:
    {
        returnValue = F("Lippsgarten");
        break;
    }
    case 208492:
    {
        returnValue = F("Lippspieker");
        break;
    }
    case 208493:
    {
        returnValue = F("Lippspringer Str.");
        break;
    }
    case 208494:
    {
        returnValue = F("Lippstadtweg");
        break;
    }
    case 208495:
    {
        returnValue = F("Lippstr.");
        break;
    }
    case 208496:
    {
        returnValue = F("Lippstädter Str.");
        break;
    }
    case 208497:
    {
        returnValue = F("Lippstädter Weg");
        break;
    }
    case 208498:
    {
        returnValue = F("Lippweg");
        break;
    }
    case 208499:
    {
        returnValue = F("Lipsberger Weg");
        break;
    }
    case 208500:
    {
        returnValue = F("Lipsdammer Str.");
        break;
    }
    case 208501:
    {
        returnValue = F("Lipsenbau");
        break;
    }
    case 208502:
    {
        returnValue = F("Lipsengasse");
        break;
    }
    case 208503:
    {
        returnValue = F("Lipsenstr.");
        break;
    }
    case 208504:
    {
        returnValue = F("Lipser Moor");
        break;
    }
    case 208505:
    {
        returnValue = F("Lipshorst");
        break;
    }
    case 208506:
    {
        returnValue = F("Lipshöfe");
        break;
    }
    case 208507:
    {
        returnValue = F("Lipsitz");
        break;
    }
    case 208508:
    {
        returnValue = F("Lipsweg");
        break;
    }
    case 208509:
    {
        returnValue = F("Liptener Str.");
        break;
    }
    case 208510:
    {
        returnValue = F("Liptiner Str.");
        break;
    }
    case 208511:
    {
        returnValue = F("Liptinger Str.");
        break;
    }
    case 208512:
    {
        returnValue = F("Liptinger Weg");
        break;
    }
    case 208513:
    {
        returnValue = F("Liptingerweg");
        break;
    }
    case 208514:
    {
        returnValue = F("Liptitzer Str.");
        break;
    }
    case 208515:
    {
        returnValue = F("Lirenhaldenweg");
        break;
    }
    case 208516:
    {
        returnValue = F("Liricher Str.");
        break;
    }
    case 208517:
    {
        returnValue = F("Lirkendamm");
        break;
    }
    case 208518:
    {
        returnValue = F("Lisa-Bracht-Str.");
        break;
    }
    case 208519:
    {
        returnValue = F("Lisa-Hausmann-Weg");
        break;
    }
    case 208520:
    {
        returnValue = F("Lisa-Kargoscha-Weg");
        break;
    }
    case 208521:
    {
        returnValue = F("Lisa-Korspeter-Str.");
        break;
    }
    case 208522:
    {
        returnValue = F("Lisa-Marie-Blum-Weg");
        break;
    }
    case 208523:
    {
        returnValue = F("Lisa-Peters-Weg");
        break;
    }
    case 208524:
    {
        returnValue = F("Lisa-Rees-Str.");
        break;
    }
    case 208525:
    {
        returnValue = F("Lisa-Tetzner-Str.");
        break;
    }
    case 208526:
    {
        returnValue = F("Lisa-Tetzner-Weg");
        break;
    }
    case 208527:
    {
        returnValue = F("Lisa-Weinert-Str.");
        break;
    }
    case 208528:
    {
        returnValue = F("Lisa-de-Boor-Str.");
        break;
    }
    case 208529:
    {
        returnValue = F("Lisainestr.");
        break;
    }
    case 208530:
    {
        returnValue = F("Lisberger Weg");
        break;
    }
    case 208531:
    {
        returnValue = F("Lisbergla");
        break;
    }
    case 208532:
    {
        returnValue = F("Lisbergstr.");
        break;
    }
    case 208533:
    {
        returnValue = F("Lisbeth-Weidner-Weg");
        break;
    }
    case 208534:
    {
        returnValue = F("Lisbühl");
        break;
    }
    case 208535:
    {
        returnValue = F("Lischeider Str.");
        break;
    }
    case 208536:
    {
        returnValue = F("Lischow");
        break;
    }
    case 208537:
    {
        returnValue = F("Lischstr.");
        break;
    }
    case 208538:
    {
        returnValue = F("Liscowstr.");
        break;
    }
    case 208539:
    {
        returnValue = F("Lisdorf");
        break;
    }
    case 208540:
    {
        returnValue = F("Lisdorfer Str.");
        break;
    }
    case 208541:
    {
        returnValue = F("Lise-Meitner-Platz");
        break;
    }
    case 208542:
    {
        returnValue = F("Lise-Meitner-Ring");
        break;
    }
    case 208543:
    {
        returnValue = F("Lise-Meitner-Str.");
        break;
    }
    case 208544:
    {
        returnValue = F("Lise-Meitner-Weg");
        break;
    }
    case 208545:
    {
        returnValue = F("Lisebaum");
        break;
    }
    case 208546:
    {
        returnValue = F("Lisel-Oppel-Weg");
        break;
    }
    case 208547:
    {
        returnValue = F("Liselotte Herrmann Str.");
        break;
    }
    case 208548:
    {
        returnValue = F("Liselotte-Gebhard-Weg");
        break;
    }
    case 208549:
    {
        returnValue = F("Liselotte-Herrmann-Str.");
        break;
    }
    case 208550:
    {
        returnValue = F("Liselotte-Rosenthal-Str.");
        break;
    }
    case 208551:
    {
        returnValue = F("Liselotte-Rückert-Str.");
        break;
    }
    case 208552:
    {
        returnValue = F("Liselotte-von-der-Pfalz-Str.");
        break;
    }
    case 208553:
    {
        returnValue = F("Liselottestr.");
        break;
    }
    case 208554:
    {
        returnValue = F("Lisenstr.");
        break;
    }
    case 208555:
    {
        returnValue = F("Lisette-Krusch-Pfad");
        break;
    }
    case 208556:
    {
        returnValue = F("Lisettenstr.");
        break;
    }
    case 208557:
    {
        returnValue = F("Liskircherstr.");
        break;
    }
    case 208558:
    {
        returnValue = F("Liskowstr.");
        break;
    }
    case 208559:
    {
        returnValue = F("Lispenhäuser Str.");
        break;
    }
    case 208560:
    {
        returnValue = F("Liss");
        break;
    }
    case 208561:
    {
        returnValue = F("Lissaboner Allee");
        break;
    }
    case 208562:
    {
        returnValue = F("Lissaboner Str.");
        break;
    }
    case 208563:
    {
        returnValue = F("Lissabonner Str.");
        break;
    }
    case 208564:
    {
        returnValue = F("Lissabonstr.");
        break;
    }
    case 208565:
    {
        returnValue = F("Lissabonweg");
        break;
    }
    case 208566:
    {
        returnValue = F("Lissaer Str.");
        break;
    }
    case 208567:
    {
        returnValue = F("Lissaer Zeile");
        break;
    }
    case 208568:
    {
        returnValue = F("Lissauer Weg");
        break;
    }
    case 208569:
    {
        returnValue = F("Lissen");
        break;
    }
    case 208570:
    {
        returnValue = F("Lissendorfer Str.");
        break;
    }
    case 208571:
    {
        returnValue = F("Lissenstr.");
        break;
    }
    case 208572:
    {
        returnValue = F("Lissenthan");
        break;
    }
    case 208573:
    {
        returnValue = F("Lissenthaner Weg");
        break;
    }
    case 208574:
    {
        returnValue = F("Lissinger Str.");
        break;
    }
    case 208575:
    {
        returnValue = F("Lissingweg");
        break;
    }
    case 208576:
    {
        returnValue = F("Lissow");
        break;
    }
    case 208577:
    {
        returnValue = F("Lissow-Bau");
        break;
    }
    case 208578:
    {
        returnValue = F("Lissweg");
        break;
    }
    case 208579:
    {
        returnValue = F("Lissy-Rieke-Str.");
        break;
    }
    case 208580:
    {
        returnValue = F("Listelberg");
        break;
    }
    case 208581:
    {
        returnValue = F("Listenbachstr.");
        break;
    }
    case 208582:
    {
        returnValue = F("Lister Reede");
        break;
    }
    case 208583:
    {
        returnValue = F("Lister Rund");
        break;
    }
    case 208584:
    {
        returnValue = F("Lister Str.");
        break;
    }
    case 208585:
    {
        returnValue = F("Lister Weg");
        break;
    }
    case 208586:
    {
        returnValue = F("Listerbusch");
        break;
    }
    case 208587:
    {
        returnValue = F("Listerhammer");
        break;
    }
    case 208588:
    {
        returnValue = F("Listerhausen");
        break;
    }
    case 208589:
    {
        returnValue = F("Listerhof");
        break;
    }
    case 208590:
    {
        returnValue = F("Listermühle");
        break;
    }
    case 208591:
    {
        returnValue = F("Listerstr.");
        break;
    }
    case 208592:
    {
        returnValue = F("Listertalstr.");
        break;
    }
    case 208593:
    {
        returnValue = F("Listhof");
        break;
    }
    case 208594:
    {
        returnValue = F("Listinger Str.");
        break;
    }
    case 208595:
    {
        returnValue = F("Listkamp");
        break;
    }
    case 208596:
    {
        returnValue = F("Listlandstr.");
        break;
    }
    case 208597:
    {
        returnValue = F("Listmannstr.");
        break;
    }
    case 208598:
    {
        returnValue = F("Listnerstr.");
        break;
    }
    case 208599:
    {
        returnValue = F("Listplatz");
        break;
    }
    case 208600:
    {
        returnValue = F("Listringer Dorfstr.");
        break;
    }
    case 208601:
    {
        returnValue = F("Listringer Str.");
        break;
    }
    case 208602:
    {
        returnValue = F("Listringer Thie");
        break;
    }
    case 208603:
    {
        returnValue = F("Listringhauser Str.");
        break;
    }
    case 208604:
    {
        returnValue = F("Listruper Wehr");
        break;
    }
    case 208605:
    {
        returnValue = F("Listrupweg");
        break;
    }
    case 208606:
    {
        returnValue = F("Liststiege");
        break;
    }
    case 208607:
    {
        returnValue = F("Liststr.");
        break;
    }
    case 208608:
    {
        returnValue = F("Listweg");
        break;
    }
    case 208609:
    {
        returnValue = F("Liszt-Weg");
        break;
    }
    case 208610:
    {
        returnValue = F("Lisztallee");
        break;
    }
    case 208611:
    {
        returnValue = F("Liszthof");
        break;
    }
    case 208612:
    {
        returnValue = F("Lisztstr.");
        break;
    }
    case 208613:
    {
        returnValue = F("Lisztweg");
        break;
    }
    case 208614:
    {
        returnValue = F("Litauener Str.");
        break;
    }
    case 208615:
    {
        returnValue = F("Litauenring");
        break;
    }
    case 208616:
    {
        returnValue = F("Litauerstr.");
        break;
    }
    case 208617:
    {
        returnValue = F("Litauische Str.");
        break;
    }
    case 208618:
    {
        returnValue = F("Literaturgarten Calw");
        break;
    }
    case 208619:
    {
        returnValue = F("Literaturweg");
        break;
    }
    case 208620:
    {
        returnValue = F("Litermont Gipfel Tour");
        break;
    }
    case 208621:
    {
        returnValue = F("Litermont Gipfeltour");
        break;
    }
    case 208622:
    {
        returnValue = F("Litermontstr.");
        break;
    }
    case 208623:
    {
        returnValue = F("Litestr.");
        break;
    }
    case 208624:
    {
        returnValue = F("Lithenbergstr.");
        break;
    }
    case 208625:
    {
        returnValue = F("Lithstr.");
        break;
    }
    case 208626:
    {
        returnValue = F("Lithweg");
        break;
    }
    case 208627:
    {
        returnValue = F("Litjen Wai");
        break;
    }
    case 208628:
    {
        returnValue = F("Litjmuasem");
        break;
    }
    case 208629:
    {
        returnValue = F("Litschenbecherstr.");
        break;
    }
    case 208630:
    {
        returnValue = F("Litschenberg");
        break;
    }
    case 208631:
    {
        returnValue = F("Litschengarten");
        break;
    }
    case 208632:
    {
        returnValue = F("Litschengasse");
        break;
    }
    case 208633:
    {
        returnValue = F("Litschentalstr.");
        break;
    }
    case 208634:
    {
        returnValue = F("Litscherweg");
        break;
    }
    case 208635:
    {
        returnValue = F("Litschgistr.");
        break;
    }
    case 208636:
    {
        returnValue = F("Litschlesstr.");
        break;
    }
    case 208637:
    {
        returnValue = F("Littardweg");
        break;
    }
    case 208638:
    {
        returnValue = F("Littau");
        break;
    }
    case 208639:
    {
        returnValue = F("Littaustr.");
        break;
    }
    case 208640:
    {
        returnValue = F("Littegasse");
        break;
    }
    case 208641:
    {
        returnValue = F("Litteler Str.");
        break;
    }
    case 208642:
    {
        returnValue = F("Littenheimer Ring");
        break;
    }
    case 208643:
    {
        returnValue = F("Littenhof");
        break;
    }
    case 208644:
    {
        returnValue = F("Littenäcker");
        break;
    }
    case 208645:
    {
        returnValue = F("Littereweg");
        break;
    }
    case 208646:
    {
        returnValue = F("Littersbachstr.");
        break;
    }
    case 208647:
    {
        returnValue = F("Littersbachweg");
        break;
    }
    case 208648:
    {
        returnValue = F("Littersheimer Weg");
        break;
    }
    case 208649:
    {
        returnValue = F("Litterstr.");
        break;
    }
    case 208650:
    {
        returnValue = F("Littfelder Ecke");
        break;
    }
    case 208651:
    {
        returnValue = F("Littfelder Str.");
        break;
    }
    case 208652:
    {
        returnValue = F("Littishart");
        break;
    }
    case 208653:
    {
        returnValue = F("Little Big Horn Street");
        break;
    }
    case 208654:
    {
        returnValue = F("Little Mike Road");
        break;
    }
    case 208655:
    {
        returnValue = F("Littlehampton Platz");
        break;
    }
    case 208656:
    {
        returnValue = F("Littmannstr.");
        break;
    }
    case 208657:
    {
        returnValue = F("Littstr.");
        break;
    }
    case 208658:
    {
        returnValue = F("Littweg");
        break;
    }
    case 208659:
    {
        returnValue = F("Litvinover Str.");
        break;
    }
    case 208660:
    {
        returnValue = F("Litzbühlstr.");
        break;
    }
    case 208661:
    {
        returnValue = F("Litzel-Rimbach");
        break;
    }
    case 208662:
    {
        returnValue = F("Litzelbach");
        break;
    }
    case 208663:
    {
        returnValue = F("Litzelbacher Str.");
        break;
    }
    case 208664:
    {
        returnValue = F("Litzelbachweg");
        break;
    }
    case 208665:
    {
        returnValue = F("Litzelbergstr.");
        break;
    }
    case 208666:
    {
        returnValue = F("Litzelbronner Weg");
        break;
    }
    case 208667:
    {
        returnValue = F("Litzelflurstr.");
        break;
    }
    case 208668:
    {
        returnValue = F("Litzelgässchen");
        break;
    }
    case 208669:
    {
        returnValue = F("Litzelhardtweg");
        break;
    }
    case 208670:
    {
        returnValue = F("Litzelsdorfer Str.");
        break;
    }
    case 208671:
    {
        returnValue = F("Litzelstetter Str.");
        break;
    }
    case 208672:
    {
        returnValue = F("Litzelweg");
        break;
    }
    case 208673:
    {
        returnValue = F("Litzelwiesen");
        break;
    }
    case 208674:
    {
        returnValue = F("Litzelwiesenweg");
        break;
    }
    case 208675:
    {
        returnValue = F("Litzenbachstr.");
        break;
    }
    case 208676:
    {
        returnValue = F("Litzenberg");
        break;
    }
    case 208677:
    {
        returnValue = F("Litzendorfer Str.");
        break;
    }
    case 208678:
    {
        returnValue = F("Litzentalweg");
        break;
    }
    case 208679:
    {
        returnValue = F("Litzenwiesen");
        break;
    }
    case 208680:
    {
        returnValue = F("Litzergaystr.");
        break;
    }
    case 208681:
    {
        returnValue = F("Litzhurststr.");
        break;
    }
    case 208682:
    {
        returnValue = F("Litziger Hirtenpfad");
        break;
    }
    case 208683:
    {
        returnValue = F("Litziger Weg");
        break;
    }
    case 208684:
    {
        returnValue = F("Litzlauer Str.");
        break;
    }
    case 208685:
    {
        returnValue = F("Litzldorfer Str.");
        break;
    }
    case 208686:
    {
        returnValue = F("Litzlkirchener Str.");
        break;
    }
    case 208687:
    {
        returnValue = F("Litzloch");
        break;
    }
    case 208688:
    {
        returnValue = F("Litzloher Str.");
        break;
    }
    case 208689:
    {
        returnValue = F("Litzlunger Str.");
        break;
    }
    case 208690:
    {
        returnValue = F("Litzmannstr.");
        break;
    }
    case 208691:
    {
        returnValue = F("Liudostr.");
        break;
    }
    case 208692:
    {
        returnValue = F("Liutbrandstr.");
        break;
    }
    case 208693:
    {
        returnValue = F("Liutgardweg");
        break;
    }
    case 208694:
    {
        returnValue = F("Liverdunplatz");
        break;
    }
    case 208695:
    {
        returnValue = F("Liverpooler Allee");
        break;
    }
    case 208696:
    {
        returnValue = F("Liverpoolstr.");
        break;
    }
    case 208697:
    {
        returnValue = F("Liviastr.");
        break;
    }
    case 208698:
    {
        returnValue = F("Livingstonestr.");
        break;
    }
    case 208699:
    {
        returnValue = F("Liviusweg");
        break;
    }
    case 208700:
    {
        returnValue = F("Livlandhof");
        break;
    }
    case 208701:
    {
        returnValue = F("Livlandstr.");
        break;
    }
    case 208702:
    {
        returnValue = F("Livlandweg");
        break;
    }
    case 208703:
    {
        returnValue = F("Livry-Gargan-Str.");
        break;
    }
    case 208704:
    {
        returnValue = F("Lixenweg");
        break;
    }
    case 208705:
    {
        returnValue = F("Lixheimer Str.");
        break;
    }
    case 208706:
    {
        returnValue = F("Lixstr.");
        break;
    }
    case 208707:
    {
        returnValue = F("Lizzanostr.");
        break;
    }
    case 208708:
    {
        returnValue = F("Lißberger Str.");
        break;
    }
    case 208709:
    {
        returnValue = F("Lißbergstr.");
        break;
    }
    case 208710:
    {
        returnValue = F("Ljutomer Weg");
        break;
    }
    case 208711:
    {
        returnValue = F("Lloydstr.");
        break;
    }
    case 208712:
    {
        returnValue = F("Loachweg");
        break;
    }
    case 208713:
    {
        returnValue = F("Loachwiesenweg");
        break;
    }
    case 208714:
    {
        returnValue = F("Loarbergsweg");
        break;
    }
    case 208715:
    {
        returnValue = F("Lobachstr.");
        break;
    }
    case 208716:
    {
        returnValue = F("Lobachweg");
        break;
    }
    case 208717:
    {
        returnValue = F("Lobacker");
        break;
    }
    case 208718:
    {
        returnValue = F("Lobaser Dorfstr.");
        break;
    }
    case 208719:
    {
        returnValue = F("Lobbacher Str.");
        break;
    }
    case 208720:
    {
        returnValue = F("Lobbachstr.");
        break;
    }
    case 208721:
    {
        returnValue = F("Lobbachweg");
        break;
    }
    case 208722:
    {
        returnValue = F("Lobbe");
        break;
    }
    case 208723:
    {
        returnValue = F("Lobbenfeld");
        break;
    }
    case 208724:
    {
        returnValue = F("Lobbental");
        break;
    }
    case 208725:
    {
        returnValue = F("Lobbericher Str.");
        break;
    }
    case 208726:
    {
        returnValue = F("Lobbertkamp");
        break;
    }
    case 208727:
    {
        returnValue = F("Lobbeser Dorfstr.");
        break;
    }
    case 208728:
    {
        returnValue = F("Lobbeser Weg");
        break;
    }
    case 208729:
    {
        returnValue = F("Lobdeburgweg");
        break;
    }
    case 208730:
    {
        returnValue = F("Lobdengauplatz");
        break;
    }
    case 208731:
    {
        returnValue = F("Lobdengaustr.");
        break;
    }
    case 208732:
    {
        returnValue = F("Lobdepark");
        break;
    }
    case 208733:
    {
        returnValue = F("Lobeck-Weg");
        break;
    }
    case 208734:
    {
        returnValue = F("Lobedaer Str.");
        break;
    }
    case 208735:
    {
        returnValue = F("Lobedanstr.");
        break;
    }
    case 208736:
    {
        returnValue = F("Lobedanzgang");
        break;
    }
    case 208737:
    {
        returnValue = F("Lobegottweg");
        break;
    }
    case 208738:
    {
        returnValue = F("Lobelienweg");
        break;
    }
    case 208739:
    {
        returnValue = F("Lobenbacher Str.");
        break;
    }
    case 208740:
    {
        returnValue = F("Lobenbacherhof");
        break;
    }
    case 208741:
    {
        returnValue = F("Lobenbreite");
        break;
    }
    case 208742:
    {
        returnValue = F("Lobenfelder Str.");
        break;
    }
    case 208743:
    {
        returnValue = F("Lobenhausenweg");
        break;
    }
    case 208744:
    {
        returnValue = F("Lobenhofferstr.");
        break;
    }
    case 208745:
    {
        returnValue = F("Lobenhäuser Str.");
        break;
    }
    case 208746:
    {
        returnValue = F("Lobenhäuser Weg");
        break;
    }
    case 208747:
    {
        returnValue = F("Lobenroter Fußweg");
        break;
    }
    case 208748:
    {
        returnValue = F("Lobenroter Weg");
        break;
    }
    case 208749:
    {
        returnValue = F("Lobenstein");
        break;
    }
    case 208750:
    {
        returnValue = F("Lobensteiner Str.");
        break;
    }
    case 208751:
    {
        returnValue = F("Lobensteiner Weg");
        break;
    }
    case 208752:
    {
        returnValue = F("Lobensteinstr.");
        break;
    }
    case 208753:
    {
        returnValue = F("Lober-Leine Brücke");
        break;
    }
    case 208754:
    {
        returnValue = F("Loberaue");
        break;
    }
    case 208755:
    {
        returnValue = F("Lobergasse");
        break;
    }
    case 208756:
    {
        returnValue = F("Lobersiedlung");
        break;
    }
    case 208757:
    {
        returnValue = F("Loberstr.");
        break;
    }
    case 208758:
    {
        returnValue = F("Lobertshofener Str.");
        break;
    }
    case 208759:
    {
        returnValue = F("Loberweg");
        break;
    }
    case 208760:
    {
        returnValue = F("Lobetal");
        break;
    }
    case 208761:
    {
        returnValue = F("Lobing");
        break;
    }
    case 208762:
    {
        returnValue = F("Lobither Str.");
        break;
    }
    case 208763:
    {
        returnValue = F("Lobitzscher Hauptstr.");
        break;
    }
    case 208764:
    {
        returnValue = F("Lobitzscher Str.");
        break;
    }
    case 208765:
    {
        returnValue = F("Lobitzstr.");
        break;
    }
    case 208766:
    {
        returnValue = F("Lobke");
        break;
    }
    case 208767:
    {
        returnValue = F("Lobker Str.");
        break;
    }
    case 208768:
    {
        returnValue = F("Lobker Weg");
        break;
    }
    case 208769:
    {
        returnValue = F("Lobkevitz");
        break;
    }
    case 208770:
    {
        returnValue = F("Lobkevitzer Weg");
        break;
    }
    case 208771:
    {
        returnValue = F("Lobkowitzerstr.");
        break;
    }
    case 208772:
    {
        returnValue = F("Lobkowitzstr.");
        break;
    }
    case 208773:
    {
        returnValue = F("Loblocherstr.");
        break;
    }
    case 208774:
    {
        returnValue = F("Lobmachtersche Str.");
        break;
    }
    case 208775:
    {
        returnValue = F("Lobmachtersenstr.");
        break;
    }
    case 208776:
    {
        returnValue = F("Lobmaierplatz");
        break;
    }
    case 208777:
    {
        returnValue = F("Lobnigstr.");
        break;
    }
    case 208778:
    {
        returnValue = F("Loborner Str.");
        break;
    }
    case 208779:
    {
        returnValue = F("Lobsanner Weg");
        break;
    }
    case 208780:
    {
        returnValue = F("Lobscheider Str.");
        break;
    }
    case 208781:
    {
        returnValue = F("Lobsdorfer Str.");
        break;
    }
    case 208782:
    {
        returnValue = F("Lobsgasse");
        break;
    }
    case 208783:
    {
        returnValue = F("Lobshagen");
        break;
    }
    case 208784:
    {
        returnValue = F("Lobsinger Str.");
        break;
    }
    case 208785:
    {
        returnValue = F("Lobstädter Str.");
        break;
    }
    case 208786:
    {
        returnValue = F("Lobtal");
        break;
    }
    case 208787:
    {
        returnValue = F("Loburg");
        break;
    }
    case 208788:
    {
        returnValue = F("Loburger Kamp");
        break;
    }
    case 208789:
    {
        returnValue = F("Loburger Str.");
        break;
    }
    case 208790:
    {
        returnValue = F("Loburger Weg");
        break;
    }
    case 208791:
    {
        returnValue = F("Loccumer Str.");
        break;
    }
    case 208792:
    {
        returnValue = F("Loch");
        break;
    }
    case 208793:
    {
        returnValue = F("Loch-Räumicht");
        break;
    }
    case 208794:
    {
        returnValue = F("Lochacker");
        break;
    }
    case 208795:
    {
        returnValue = F("Lochackerstr.");
        break;
    }
    case 208796:
    {
        returnValue = F("Lochackerweg");
        break;
    }
    case 208797:
    {
        returnValue = F("Lochau");
        break;
    }
    case 208798:
    {
        returnValue = F("Lochauer Str.");
        break;
    }
    case 208799:
    {
        returnValue = F("Lochbach");
        break;
    }
    case 208800:
    {
        returnValue = F("Lochbachklamm");
        break;
    }
    case 208801:
    {
        returnValue = F("Lochbachstr.");
        break;
    }
    case 208802:
    {
        returnValue = F("Lochbachweg");
        break;
    }
    case 208803:
    {
        returnValue = F("Lochberg");
        break;
    }
    case 208804:
    {
        returnValue = F("Lochbergstr.");
        break;
    }
    case 208805:
    {
        returnValue = F("Lochbergweg");
        break;
    }
    case 208806:
    {
        returnValue = F("Lochbornstr.");
        break;
    }
    case 208807:
    {
        returnValue = F("Lochbornweg");
        break;
    }
    case 208808:
    {
        returnValue = F("Lochbronnenweg");
        break;
    }
    case 208809:
    {
        returnValue = F("Lochbrunnen");
        break;
    }
    case 208810:
    {
        returnValue = F("Lochbrunnenstr.");
        break;
    }
    case 208811:
    {
        returnValue = F("Lochbrunnenweg");
        break;
    }
    case 208812:
    {
        returnValue = F("Lochbrunnweg");
        break;
    }
    case 208813:
    {
        returnValue = F("Lochbrücke");
        break;
    }
    case 208814:
    {
        returnValue = F("Lochbühler Str.");
        break;
    }
    case 208815:
    {
        returnValue = F("Lochchaussee");
        break;
    }
    case 208816:
    {
        returnValue = F("Locheichen-Route");
        break;
    }
    case 208817:
    {
        returnValue = F("Lochen");
        break;
    }
    case 208818:
    {
        returnValue = F("Lochener Str.");
        break;
    }
    case 208819:
    {
        returnValue = F("Lochenquerweg");
        break;
    }
    case 208820:
    {
        returnValue = F("Lochenrain");
        break;
    }
    case 208821:
    {
        returnValue = F("Lochensteinstr.");
        break;
    }
    case 208822:
    {
        returnValue = F("Lochensteinweg");
        break;
    }
    case 208823:
    {
        returnValue = F("Lochenstr.");
        break;
    }
    case 208824:
    {
        returnValue = F("Lochenweg");
        break;
    }
    case 208825:
    {
        returnValue = F("Locher Allee");
        break;
    }
    case 208826:
    {
        returnValue = F("Locher Büschchen");
        break;
    }
    case 208827:
    {
        returnValue = F("Locher Kotten");
        break;
    }
    case 208828:
    {
        returnValue = F("Locher Pfad");
        break;
    }
    case 208829:
    {
        returnValue = F("Locher Siefen");
        break;
    }
    case 208830:
    {
        returnValue = F("Locher Str.");
        break;
    }
    case 208831:
    {
        returnValue = F("Locher Weg");
        break;
    }
    case 208832:
    {
        returnValue = F("Lochererweg");
        break;
    }
    case 208833:
    {
        returnValue = F("Locherhofer Str.");
        break;
    }
    case 208834:
    {
        returnValue = F("Locherhofweg");
        break;
    }
    case 208835:
    {
        returnValue = F("Lochermühle");
        break;
    }
    case 208836:
    {
        returnValue = F("Lochermühlsweg");
        break;
    }
    case 208837:
    {
        returnValue = F("Lochernweg");
        break;
    }
    case 208838:
    {
        returnValue = F("Locherstr.");
        break;
    }
    case 208839:
    {
        returnValue = F("Lochert");
        break;
    }
    case 208840:
    {
        returnValue = F("Lochertweg");
        break;
    }
    case 208841:
    {
        returnValue = F("Loches-Platz");
        break;
    }
    case 208842:
    {
        returnValue = F("Lochfelbenstr.");
        break;
    }
    case 208843:
    {
        returnValue = F("Lochfeld");
        break;
    }
    case 208844:
    {
        returnValue = F("Lochfeldstr.");
        break;
    }
    case 208845:
    {
        returnValue = F("Lochfeldweg");
        break;
    }
    case 208846:
    {
        returnValue = F("Lochgartenstr.");
        break;
    }
    case 208847:
    {
        returnValue = F("Lochgartenweg");
        break;
    }
    case 208848:
    {
        returnValue = F("Lochgasse");
        break;
    }
    case 208849:
    {
        returnValue = F("Lochgraben");
        break;
    }
    case 208850:
    {
        returnValue = F("Lochgrabenweg");
        break;
    }
    case 208851:
    {
        returnValue = F("Lochgrund");
        break;
    }
    case 208852:
    {
        returnValue = F("Lochham");
        break;
    }
    case 208853:
    {
        returnValue = F("Lochhamer Str.");
        break;
    }
    case 208854:
    {
        returnValue = F("Lochhauser Str.");
        break;
    }
    case 208855:
    {
        returnValue = F("Lochheimer Str.");
        break;
    }
    case 208856:
    {
        returnValue = F("Lochhofstr.");
        break;
    }
    case 208857:
    {
        returnValue = F("Lochhofsweg");
        break;
    }
    case 208858:
    {
        returnValue = F("Lochholz");
        break;
    }
    case 208859:
    {
        returnValue = F("Lochhäuser");
        break;
    }
    case 208860:
    {
        returnValue = F("Lochhürstweg");
        break;
    }
    case 208861:
    {
        returnValue = F("Lochingerstr.");
        break;
    }
    case 208862:
    {
        returnValue = F("Lochklinge");
        break;
    }
    case 208863:
    {
        returnValue = F("Lochleiteweg");
        break;
    }
    case 208864:
    {
        returnValue = F("Lochmanns Kreuz");
        break;
    }
    case 208865:
    {
        returnValue = F("Lochmannstr.");
        break;
    }
    case 208866:
    {
        returnValue = F("Lochmatt");
        break;
    }
    case 208867:
    {
        returnValue = F("Lochmattenweg");
        break;
    }
    case 208868:
    {
        returnValue = F("Lochmattweg");
        break;
    }
    case 208869:
    {
        returnValue = F("Lochmorgenweg");
        break;
    }
    case 208870:
    {
        returnValue = F("Lochmättleweg");
        break;
    }
    case 208871:
    {
        returnValue = F("Lochmühle");
        break;
    }
    case 208872:
    {
        returnValue = F("Lochmühle - Hirschfeld");
        break;
    }
    case 208873:
    {
        returnValue = F("Lochmühlehalde");
        break;
    }
    case 208874:
    {
        returnValue = F("Lochmühlenweg");
        break;
    }
    case 208875:
    {
        returnValue = F("Lochmühleweg");
        break;
    }
    case 208876:
    {
        returnValue = F("Lochmühlstr.");
        break;
    }
    case 208877:
    {
        returnValue = F("Lochmühlweg");
        break;
    }
    case 208878:
    {
        returnValue = F("Lochnerallee");
        break;
    }
    case 208879:
    {
        returnValue = F("Lochnerstr.");
        break;
    }
    case 208880:
    {
        returnValue = F("Lochnerweg");
        break;
    }
    case 208881:
    {
        returnValue = F("Lochower Str.");
        break;
    }
    case 208882:
    {
        returnValue = F("Lochower Weg");
        break;
    }
    case 208883:
    {
        returnValue = F("Lochpfad");
        break;
    }
    case 208884:
    {
        returnValue = F("Lochplattenweg am Deich");
        break;
    }
    case 208885:
    {
        returnValue = F("Lochport");
        break;
    }
    case 208886:
    {
        returnValue = F("Lochrasen");
        break;
    }
    case 208887:
    {
        returnValue = F("Lochrückweg");
        break;
    }
    case 208888:
    {
        returnValue = F("Lochs-Gäßchen");
        break;
    }
    case 208889:
    {
        returnValue = F("Lochsberg");
        break;
    }
    case 208890:
    {
        returnValue = F("Lochsbergstr.");
        break;
    }
    case 208891:
    {
        returnValue = F("Lochschneise");
        break;
    }
    case 208892:
    {
        returnValue = F("Lochschweineweg");
        break;
    }
    case 208893:
    {
        returnValue = F("Lochschänke");
        break;
    }
    case 208894:
    {
        returnValue = F("Lochsmühle");
        break;
    }
    case 208895:
    {
        returnValue = F("Lochsteige");
        break;
    }
    case 208896:
    {
        returnValue = F("Lochstein");
        break;
    }
    case 208897:
    {
        returnValue = F("Lochsteinweg");
        break;
    }
    case 208898:
    {
        returnValue = F("Lochstr.");
        break;
    }
    case 208899:
    {
        returnValue = F("Locht");
        break;
    }
    case 208900:
    {
        returnValue = F("Lochtal");
        break;
    }
    case 208901:
    {
        returnValue = F("Lochtenscher Stieg");
        break;
    }
    case 208902:
    {
        returnValue = F("Lochterbarig");
        break;
    }
    case 208903:
    {
        returnValue = F("Lochteweg");
        break;
    }
    case 208904:
    {
        returnValue = F("Lochtobel");
        break;
    }
    case 208905:
    {
        returnValue = F("Lochtruper Str.");
        break;
    }
    case 208906:
    {
        returnValue = F("Lochtumer Str.");
        break;
    }
    case 208907:
    {
        returnValue = F("Lochtweg");
        break;
    }
    case 208908:
    {
        returnValue = F("Lochumstr.");
        break;
    }
    case 208909:
    {
        returnValue = F("Lochwald");
        break;
    }
    case 208910:
    {
        returnValue = F("Lochwaldweg");
        break;
    }
    case 208911:
    {
        returnValue = F("Lochweg");
        break;
    }
    case 208912:
    {
        returnValue = F("Lochwiese");
        break;
    }
    case 208913:
    {
        returnValue = F("Lochwiesen");
        break;
    }
    case 208914:
    {
        returnValue = F("Lochwiesenstr.");
        break;
    }
    case 208915:
    {
        returnValue = F("Lochwiesenweg");
        break;
    }
    case 208916:
    {
        returnValue = F("Lochwitzer Str.");
        break;
    }
    case 208917:
    {
        returnValue = F("Lochwitzer Weg");
        break;
    }
    case 208918:
    {
        returnValue = F("Lochäcker");
        break;
    }
    case 208919:
    {
        returnValue = F("Lochäckerweg");
        break;
    }
    case 208920:
    {
        returnValue = F("Lockebreedeweg");
        break;
    }
    case 208921:
    {
        returnValue = F("Lockergass");
        break;
    }
    case 208922:
    {
        returnValue = F("Lockergasse");
        break;
    }
    case 208923:
    {
        returnValue = F("Lockersand-Strecke");
        break;
    }
    case 208924:
    {
        returnValue = F("Lockertstr.");
        break;
    }
    case 208925:
    {
        returnValue = F("Lockfehn");
        break;
    }
    case 208926:
    {
        returnValue = F("Lockfinker Str.");
        break;
    }
    case 208927:
    {
        returnValue = F("Lockgasse");
        break;
    }
    case 208928:
    {
        returnValue = F("Lockgatt");
        break;
    }
    case 208929:
    {
        returnValue = F("Lockhauser Str.");
        break;
    }
    case 208930:
    {
        returnValue = F("Lockhauser Weg");
        break;
    }
    case 208931:
    {
        returnValue = F("Lockhütter Str.");
        break;
    }
    case 208932:
    {
        returnValue = F("Lockmühlenweg");
        break;
    }
    case 208933:
    {
        returnValue = F("Locksiefener Weg");
        break;
    }
    case 208934:
    {
        returnValue = F("Locksiefer Ring");
        break;
    }
    case 208935:
    {
        returnValue = F("Lockstedter Str.");
        break;
    }
    case 208936:
    {
        returnValue = F("Lockstedter Weg");
        break;
    }
    case 208937:
    {
        returnValue = F("Locksteinstr.");
        break;
    }
    case 208938:
    {
        returnValue = F("Locktüner Weg");
        break;
    }
    case 208939:
    {
        returnValue = F("Lockweilerstr.");
        break;
    }
    case 208940:
    {
        returnValue = F("Lockwitzer Str.");
        break;
    }
    case 208941:
    {
        returnValue = F("Lockwitzgrund");
        break;
    }
    case 208942:
    {
        returnValue = F("Locmine-Str.");
        break;
    }
    case 208943:
    {
        returnValue = F("Lodberger Str.");
        break;
    }
    case 208944:
    {
        returnValue = F("Loddeallee");
        break;
    }
    case 208945:
    {
        returnValue = F("Loddenallee");
        break;
    }
    case 208946:
    {
        returnValue = F("Loddenkötterstr.");
        break;
    }
    case 208947:
    {
        returnValue = F("Lodemannweg");
        break;
    }
    case 208948:
    {
        returnValue = F("Lodenbergstr.");
        break;
    }
    case 208949:
    {
        returnValue = F("Lodenheide");
        break;
    }
    case 208950:
    {
        returnValue = F("Lodenstr.");
        break;
    }
    case 208951:
    {
        returnValue = F("Lodentrift");
        break;
    }
    case 208952:
    {
        returnValue = F("Lodenweg");
        break;
    }
    case 208953:
    {
        returnValue = F("Loderbacher Hauptstr.");
        break;
    }
    case 208954:
    {
        returnValue = F("Loderbauerweg");
        break;
    }
    case 208955:
    {
        returnValue = F("Loderergasse");
        break;
    }
    case 208956:
    {
        returnValue = F("Lodergasse");
        break;
    }
    case 208957:
    {
        returnValue = F("Loderhamer Str.");
        break;
    }
    case 208958:
    {
        returnValue = F("Loderhofstr.");
        break;
    }
    case 208959:
    {
        returnValue = F("Lodermühlweg");
        break;
    }
    case 208960:
    {
        returnValue = F("Lodershamweg");
        break;
    }
    case 208961:
    {
        returnValue = F("Loderslebender Str.");
        break;
    }
    case 208962:
    {
        returnValue = F("Loderslebener Str.");
        break;
    }
    case 208963:
    {
        returnValue = F("Loderstr.");
        break;
    }
    case 208964:
    {
        returnValue = F("Loderweg");
        break;
    }
    case 208965:
    {
        returnValue = F("Loderwinkel");
        break;
    }
    case 208966:
    {
        returnValue = F("Lodronstr.");
        break;
    }
    case 208967:
    {
        returnValue = F("Lodronweg");
        break;
    }
    case 208968:
    {
        returnValue = F("Loebestr.");
        break;
    }
    case 208969:
    {
        returnValue = F("Loebichweg");
        break;
    }
    case 208970:
    {
        returnValue = F("Loebschützer Weg");
        break;
    }
    case 208971:
    {
        returnValue = F("Loebstr.");
        break;
    }
    case 208972:
    {
        returnValue = F("Loecknitzstr.");
        break;
    }
    case 208973:
    {
        returnValue = F("Loekampstr.");
        break;
    }
    case 208974:
    {
        returnValue = F("Loekamptor");
        break;
    }
    case 208975:
    {
        returnValue = F("Loemühlenweg");
        break;
    }
    case 208976:
    {
        returnValue = F("Loeperweg");
        break;
    }
    case 208977:
    {
        returnValue = F("Loerbrockstr.");
        break;
    }
    case 208978:
    {
        returnValue = F("Loerbroks-Weg");
        break;
    }
    case 208979:
    {
        returnValue = F("Loerfeldstr.");
        break;
    }
    case 208980:
    {
        returnValue = F("Loerheideweg");
        break;
    }
    case 208981:
    {
        returnValue = F("Loerickstr.");
        break;
    }
    case 208982:
    {
        returnValue = F("Loerpabelsweg");
        break;
    }
    case 208983:
    {
        returnValue = F("Loershagen");
        break;
    }
    case 208984:
    {
        returnValue = F("Loershof");
        break;
    }
    case 208985:
    {
        returnValue = F("Loescherweg");
        break;
    }
    case 208986:
    {
        returnValue = F("Loeschweg");
        break;
    }
    case 208987:
    {
        returnValue = F("Loestr.");
        break;
    }
    case 208988:
    {
        returnValue = F("Loeweg");
        break;
    }
    case 208989:
    {
        returnValue = F("Loewenfeldstr.");
        break;
    }
    case 208990:
    {
        returnValue = F("Loewenfeldweg");
        break;
    }
    case 208991:
    {
        returnValue = F("Loewenichstr.");
        break;
    }
    case 208992:
    {
        returnValue = F("Loewenkamp");
        break;
    }
    case 208993:
    {
        returnValue = F("Loewenstr.");
        break;
    }
    case 208994:
    {
        returnValue = F("Loewes Dieg");
        break;
    }
    case 208995:
    {
        returnValue = F("Loewestr.");
        break;
    }
    case 208996:
    {
        returnValue = F("Loeweweg");
        break;
    }
    case 208997:
    {
        returnValue = F("Loewnerstr.");
        break;
    }
    case 208998:
    {
        returnValue = F("Lofer Brücke");
        break;
    }
    case 208999:
    {
        returnValue = F("Loferaustr.");
        break;
    }
    case 209000:
    {
        returnValue = F("Loferer Str.");
        break;
    }
    case 209001:
    {
        returnValue = F("Loferer Weg");
        break;
    }
    case 209002:
    {
        returnValue = F("Loferweg");
        break;
    }
    case 209003:
    {
        returnValue = F("Loffenauer Str.");
        break;
    }
    case 209004:
    {
        returnValue = F("Loffenauer Weg");
        break;
    }
    case 209005:
    {
        returnValue = F("Lofkampweg");
        break;
    }
    case 209006:
    {
        returnValue = F("Lofotenweg");
        break;
    }
    case 209007:
    {
        returnValue = F("Loftlund");
        break;
    }
    case 209008:
    {
        returnValue = F("Logabirumer Anger");
        break;
    }
    case 209009:
    {
        returnValue = F("Logabirumer Str.");
        break;
    }
    case 209010:
    {
        returnValue = F("Logaer Weg");
        break;
    }
    case 209011:
    {
        returnValue = F("Logaustr.");
        break;
    }
    case 209012:
    {
        returnValue = F("Logauweg");
        break;
    }
    case 209013:
    {
        returnValue = F("Loge");
        break;
    }
    case 209014:
    {
        returnValue = F("Logebachstr.");
        break;
    }
    case 209015:
    {
        returnValue = F("Logedamm");
        break;
    }
    case 209016:
    {
        returnValue = F("Logekampweg");
        break;
    }
    case 209017:
    {
        returnValue = F("Logemannsdeichstr.");
        break;
    }
    case 209018:
    {
        returnValue = F("Logemoorweg");
        break;
    }
    case 209019:
    {
        returnValue = F("Logenbergsweg");
        break;
    }
    case 209020:
    {
        returnValue = F("Logener Weg");
        break;
    }
    case 209021:
    {
        returnValue = F("Logenring");
        break;
    }
    case 209022:
    {
        returnValue = F("Logenstr.");
        break;
    }
    case 209023:
    {
        returnValue = F("Logentannenweg");
        break;
    }
    case 209024:
    {
        returnValue = F("Logentwiete");
        break;
    }
    case 209025:
    {
        returnValue = F("Logenweg");
        break;
    }
    case 209026:
    {
        returnValue = F("Loger Hof");
        break;
    }
    case 209027:
    {
        returnValue = F("Loger Landstr.");
        break;
    }
    case 209028:
    {
        returnValue = F("Loger Str.");
        break;
    }
    case 209029:
    {
        returnValue = F("Loger Weg");
        break;
    }
    case 209030:
    {
        returnValue = F("Loger Weide");
        break;
    }
    case 209031:
    {
        returnValue = F("Logering");
        break;
    }
    case 209032:
    {
        returnValue = F("Logesstr.");
        break;
    }
    case 209033:
    {
        returnValue = F("Logestr.");
        break;
    }
    case 209034:
    {
        returnValue = F("Logeweg");
        break;
    }
    case 209035:
    {
        returnValue = F("Loggenbarg");
        break;
    }
    case 209036:
    {
        returnValue = F("Loggergang");
        break;
    }
    case 209037:
    {
        returnValue = F("Loggerstr.");
        break;
    }
    case 209038:
    {
        returnValue = F("Loggerweg");
        break;
    }
    case 209039:
    {
        returnValue = F("Loghöfe");
        break;
    }
    case 209040:
    {
        returnValue = F("Logistikring");
        break;
    }
    case 209041:
    {
        returnValue = F("Logistikweg");
        break;
    }
    case 209042:
    {
        returnValue = F("Logumer Str.");
        break;
    }
    case 209043:
    {
        returnValue = F("Loh");
        break;
    }
    case 209044:
    {
        returnValue = F("Loh-Heisterweg");
        break;
    }
    case 209045:
    {
        returnValue = F("Lohacker");
        break;
    }
    case 209046:
    {
        returnValue = F("Lohackerweg");
        break;
    }
    case 209047:
    {
        returnValue = F("Lohagener Weg");
        break;
    }
    case 209048:
    {
        returnValue = F("Lohagenweg");
        break;
    }
    case 209049:
    {
        returnValue = F("Lohainsweg");
        break;
    }
    case 209050:
    {
        returnValue = F("Lohanger");
        break;
    }
    case 209051:
    {
        returnValue = F("Lohanger Weg");
        break;
    }
    case 209052:
    {
        returnValue = F("Lohausener Str.");
        break;
    }
    case 209053:
    {
        returnValue = F("Lohausenstr.");
        break;
    }
    case 209054:
    {
        returnValue = F("Lohauser Esch");
        break;
    }
    case 209055:
    {
        returnValue = F("Lohauser Str.");
        break;
    }
    case 209056:
    {
        returnValue = F("Lohausstr.");
        break;
    }
    case 209057:
    {
        returnValue = F("Lohaustr.");
        break;
    }
    case 209058:
    {
        returnValue = F("Lohbach");
        break;
    }
    case 209059:
    {
        returnValue = F("Lohbachhangweg");
        break;
    }
    case 209060:
    {
        returnValue = F("Lohbachsfeld");
        break;
    }
    case 209061:
    {
        returnValue = F("Lohbachsiedlung");
        break;
    }
    case 209062:
    {
        returnValue = F("Lohbachstr.");
        break;
    }
    case 209063:
    {
        returnValue = F("Lohbachweg");
        break;
    }
    case 209064:
    {
        returnValue = F("Lohbankgasse");
        break;
    }
    case 209065:
    {
        returnValue = F("Lohbarbeker Str.");
        break;
    }
    case 209066:
    {
        returnValue = F("Lohbarbeker Weg");
        break;
    }
    case 209067:
    {
        returnValue = F("Lohbau");
        break;
    }
    case 209068:
    {
        returnValue = F("Lohbauernweg");
        break;
    }
    case 209069:
    {
        returnValue = F("Lohbauerstr.");
        break;
    }
    case 209070:
    {
        returnValue = F("Lohbecker Berg");
        break;
    }
    case 209071:
    {
        returnValue = F("Lohbeet");
        break;
    }
    case 209072:
    {
        returnValue = F("Lohbenden");
        break;
    }
    case 209073:
    {
        returnValue = F("Lohberg");
        break;
    }
    case 209074:
    {
        returnValue = F("Lohbergen");
        break;
    }
    case 209075:
    {
        returnValue = F("Lohbergenstr.");
        break;
    }
    case 209076:
    {
        returnValue = F("Lohbergenweg");
        break;
    }
    case 209077:
    {
        returnValue = F("Lohberger Kamp");
        break;
    }
    case 209078:
    {
        returnValue = F("Lohberger Str.");
        break;
    }
    case 209079:
    {
        returnValue = F("Lohberger Weg");
        break;
    }
    case 209080:
    {
        returnValue = F("Lohberggasse");
        break;
    }
    case 209081:
    {
        returnValue = F("Lohbergs Kamp");
        break;
    }
    case 209082:
    {
        returnValue = F("Lohbergsheide");
        break;
    }
    case 209083:
    {
        returnValue = F("Lohbergstr.");
        break;
    }
    case 209084:
    {
        returnValue = F("Lohbergtunnel");
        break;
    }
    case 209085:
    {
        returnValue = F("Lohbergweg");
        break;
    }
    case 209086:
    {
        returnValue = F("Lohbichl");
        break;
    }
    case 209087:
    {
        returnValue = F("Lohbichlweg");
        break;
    }
    case 209088:
    {
        returnValue = F("Lohbinderweg");
        break;
    }
    case 209089:
    {
        returnValue = F("Lohborner Weg");
        break;
    }
    case 209090:
    {
        returnValue = F("Lohbraken");
        break;
    }
    case 209091:
    {
        returnValue = F("Lohbraucksweg");
        break;
    }
    case 209092:
    {
        returnValue = F("Lohbredde");
        break;
    }
    case 209093:
    {
        returnValue = F("Lohbrede");
        break;
    }
    case 209094:
    {
        returnValue = F("Lohbreede");
        break;
    }
    case 209095:
    {
        returnValue = F("Lohbrei Weg");
        break;
    }
    case 209096:
    {
        returnValue = F("Lohbreite");
        break;
    }
    case 209097:
    {
        returnValue = F("Lohbrink");
        break;
    }
    case 209098:
    {
        returnValue = F("Lohbrinkstr.");
        break;
    }
    case 209099:
    {
        returnValue = F("Lohbruchweg");
        break;
    }
    case 209100:
    {
        returnValue = F("Lohbrunnenstr.");
        break;
    }
    case 209101:
    {
        returnValue = F("Lohbrunnstr.");
        break;
    }
    case 209102:
    {
        returnValue = F("Lohbrügger Str.");
        break;
    }
    case 209103:
    {
        returnValue = F("Lohbucherweg");
        break;
    }
    case 209104:
    {
        returnValue = F("Lohburger Str.");
        break;
    }
    case 209105:
    {
        returnValue = F("Lohbusch");
        break;
    }
    case 209106:
    {
        returnValue = F("Lohbuschbreede");
        break;
    }
    case 209107:
    {
        returnValue = F("Lohbuscher Weg");
        break;
    }
    case 209108:
    {
        returnValue = F("Lohbuschstr.");
        break;
    }
    case 209109:
    {
        returnValue = F("Lohbuschteich");
        break;
    }
    case 209110:
    {
        returnValue = F("Lohbächleweg");
        break;
    }
    case 209111:
    {
        returnValue = F("Lohbügler Str.");
        break;
    }
    case 209112:
    {
        returnValue = F("Lohbühlweg");
        break;
    }
    case 209113:
    {
        returnValue = F("Lohbünd");
        break;
    }
    case 209114:
    {
        returnValue = F("Lohchaussee");
        break;
    }
    case 209115:
    {
        returnValue = F("Lohdamm");
        break;
    }
    case 209116:
    {
        returnValue = F("Lohdenberg");
        break;
    }
    case 209117:
    {
        returnValue = F("Lohdenweg");
        break;
    }
    case 209118:
    {
        returnValue = F("Lohdiecksweg");
        break;
    }
    case 209119:
    {
        returnValue = F("Lohe");
        break;
    }
    case 209120:
    {
        returnValue = F("Lohebeneweg");
        break;
    }
    case 209121:
    {
        returnValue = F("Lohebergweg");
        break;
    }
    case 209122:
    {
        returnValue = F("Loheidchen");
        break;
    }
    case 209123:
    {
        returnValue = F("Loheide");
        break;
    }
    case 209124:
    {
        returnValue = F("Loheiden Knapp");
        break;
    }
    case 209125:
    {
        returnValue = F("Loheider Bohlenweg");
        break;
    }
    case 209126:
    {
        returnValue = F("Loheisterweg");
        break;
    }
    case 209127:
    {
        returnValue = F("Lohekamp");
        break;
    }
    case 209128:
    {
        returnValue = F("Lohen");
        break;
    }
    case 209129:
    {
        returnValue = F("Lohende");
        break;
    }
    case 209130:
    {
        returnValue = F("Lohenfeld");
        break;
    }
    case 209131:
    {
        returnValue = F("Lohengaustr.");
        break;
    }
    case 209132:
    {
        returnValue = F("Lohengrinstr.");
        break;
    }
    case 209133:
    {
        returnValue = F("Lohengrinweg");
        break;
    }
    case 209134:
    {
        returnValue = F("Lohensiefen");
        break;
    }
    case 209135:
    {
        returnValue = F("Lohenstr.");
        break;
    }
    case 209136:
    {
        returnValue = F("Loheplatz");
        break;
    }
    case 209137:
    {
        returnValue = F("Loher Berg");
        break;
    }
    case 209138:
    {
        returnValue = F("Loher Busch");
        break;
    }
    case 209139:
    {
        returnValue = F("Loher Dahlweg");
        break;
    }
    case 209140:
    {
        returnValue = F("Loher Dobben");
        break;
    }
    case 209141:
    {
        returnValue = F("Loher Dorfring");
        break;
    }
    case 209142:
    {
        returnValue = F("Loher Friedhofstr.");
        break;
    }
    case 209143:
    {
        returnValue = F("Loher Gartenstr.");
        break;
    }
    case 209144:
    {
        returnValue = F("Loher Hauptstr.");
        break;
    }
    case 209145:
    {
        returnValue = F("Loher Heide");
        break;
    }
    case 209146:
    {
        returnValue = F("Loher Heuweg");
        break;
    }
    case 209147:
    {
        returnValue = F("Loher Mark");
        break;
    }
    case 209148:
    {
        returnValue = F("Loher Mühle");
        break;
    }
    case 209149:
    {
        returnValue = F("Loher Sonnenhang");
        break;
    }
    case 209150:
    {
        returnValue = F("Loher Sonnenleite");
        break;
    }
    case 209151:
    {
        returnValue = F("Loher Str.");
        break;
    }
    case 209152:
    {
        returnValue = F("Loher Wall");
        break;
    }
    case 209153:
    {
        returnValue = F("Loher Weg");
        break;
    }
    case 209154:
    {
        returnValue = F("Loher Winkel");
        break;
    }
    case 209155:
    {
        returnValue = F("Loher Wäldchen");
        break;
    }
    case 209156:
    {
        returnValue = F("Loherfeldstr.");
        break;
    }
    case 209157:
    {
        returnValue = F("Lohering");
        break;
    }
    case 209158:
    {
        returnValue = F("Lohernockenstr.");
        break;
    }
    case 209159:
    {
        returnValue = F("Lohers Kamp");
        break;
    }
    case 209160:
    {
        returnValue = F("Loherstr.");
        break;
    }
    case 209161:
    {
        returnValue = F("Loherweg");
        break;
    }
    case 209162:
    {
        returnValue = F("Lohesch");
        break;
    }
    case 209163:
    {
        returnValue = F("Lohestr.");
        break;
    }
    case 209164:
    {
        returnValue = F("Lohetwiete");
        break;
    }
    case 209165:
    {
        returnValue = F("Loheweg");
        break;
    }
    case 209166:
    {
        returnValue = F("Lohfeld");
        break;
    }
    case 209167:
    {
        returnValue = F("Lohfeldener Str.");
        break;
    }
    case 209168:
    {
        returnValue = F("Lohfeldener Weg");
        break;
    }
    case 209169:
    {
        returnValue = F("Lohfelder Hof");
        break;
    }
    case 209170:
    {
        returnValue = F("Lohfelder Str.");
        break;
    }
    case 209171:
    {
        returnValue = F("Lohfeldstr.");
        break;
    }
    case 209172:
    {
        returnValue = F("Lohfeldweg");
        break;
    }
    case 209173:
    {
        returnValue = F("Lohgarten");
        break;
    }
    case 209174:
    {
        returnValue = F("Lohgartenweg");
        break;
    }
    case 209175:
    {
        returnValue = F("Lohgasse");
        break;
    }
    case 209176:
    {
        returnValue = F("Lohgerbe");
        break;
    }
    case 209177:
    {
        returnValue = F("Lohgerberei");
        break;
    }
    case 209178:
    {
        returnValue = F("Lohgerbergang");
        break;
    }
    case 209179:
    {
        returnValue = F("Lohgerbergasse");
        break;
    }
    case 209180:
    {
        returnValue = F("Lohgerberstr.");
        break;
    }
    case 209181:
    {
        returnValue = F("Lohgerberweg");
        break;
    }
    case 209182:
    {
        returnValue = F("Lohgewanne");
        break;
    }
    case 209183:
    {
        returnValue = F("Lohgraben");
        break;
    }
    case 209184:
    {
        returnValue = F("Lohgrabenstr.");
        break;
    }
    case 209185:
    {
        returnValue = F("Lohgrabenweg");
        break;
    }
    case 209186:
    {
        returnValue = F("Lohgrube");
        break;
    }
    case 209187:
    {
        returnValue = F("Lohgrund");
        break;
    }
    case 209188:
    {
        returnValue = F("Lohgrundweg");
        break;
    }
    case 209189:
    {
        returnValue = F("Lohgässle");
        break;
    }
    case 209190:
    {
        returnValue = F("Lohhagen");
        break;
    }
    case 209191:
    {
        returnValue = F("Lohhain");
        break;
    }
    case 209192:
    {
        returnValue = F("Lohhang");
        break;
    }
    case 209193:
    {
        returnValue = F("Lohhecke");
        break;
    }
    case 209194:
    {
        returnValue = F("Lohheckenweg");
        break;
    }
    case 209195:
    {
        returnValue = F("Lohheide");
        break;
    }
    case 209196:
    {
        returnValue = F("Lohheider Str.");
        break;
    }
    case 209197:
    {
        returnValue = F("Lohhof");
        break;
    }
    case 209198:
    {
        returnValue = F("Lohhofer Str.");
        break;
    }
    case 209199:
    {
        returnValue = F("Lohhofer Weg");
        break;
    }
    case 209200:
    {
        returnValue = F("Lohhofstr.");
        break;
    }
    case 209201:
    {
        returnValue = F("Lohhohl");
        break;
    }
    case 209202:
    {
        returnValue = F("Lohholz");
        break;
    }
    case 209203:
    {
        returnValue = F("Lohholzstr.");
        break;
    }
    case 209204:
    {
        returnValue = F("Lohhorststr.");
        break;
    }
    case 209205:
    {
        returnValue = F("Lohhub");
        break;
    }
    case 209206:
    {
        returnValue = F("Lohhäuser Str.");
        break;
    }
    case 209207:
    {
        returnValue = F("Lohhäusl");
        break;
    }
    case 209208:
    {
        returnValue = F("Lohhöfe");
        break;
    }
    case 209209:
    {
        returnValue = F("Lohkamp");
        break;
    }
    case 209210:
    {
        returnValue = F("Lohkampstr.");
        break;
    }
    case 209211:
    {
        returnValue = F("Lohkaute");
        break;
    }
    case 209212:
    {
        returnValue = F("Lohklingenstr.");
        break;
    }
    case 209213:
    {
        returnValue = F("Lohklinter Weg");
        break;
    }
    case 209214:
    {
        returnValue = F("Lohkoppel");
        break;
    }
    case 209215:
    {
        returnValue = F("Lohkoppelweg");
        break;
    }
    case 209216:
    {
        returnValue = F("Lohkump");
        break;
    }
    case 209217:
    {
        returnValue = F("Lohlachstr.");
        break;
    }
    case 209218:
    {
        returnValue = F("Lohlenbachtäle");
        break;
    }
    case 209219:
    {
        returnValue = F("Lohlenbachweg");
        break;
    }
    case 209220:
    {
        returnValue = F("Lohlweg");
        break;
    }
    case 209221:
    {
        returnValue = F("Lohma");
        break;
    }
    case 209222:
    {
        returnValue = F("Lohma Siedlung");
        break;
    }
    case 209223:
    {
        returnValue = F("Lohmaer Str.");
        break;
    }
    case 209224:
    {
        returnValue = F("Lohmannhof");
        break;
    }
    case 209225:
    {
        returnValue = F("Lohmannmühlweg");
        break;
    }
    case 209226:
    {
        returnValue = F("Lohmanns Hoff");
        break;
    }
    case 209227:
    {
        returnValue = F("Lohmanns Kamp");
        break;
    }
    case 209228:
    {
        returnValue = F("Lohmanns Riege");
        break;
    }
    case 209229:
    {
        returnValue = F("Lohmannsgasse");
        break;
    }
    case 209230:
    {
        returnValue = F("Lohmannsheide");
        break;
    }
    case 209231:
    {
        returnValue = F("Lohmannshof");
        break;
    }
    case 209232:
    {
        returnValue = F("Lohmannskamp");
        break;
    }
    case 209233:
    {
        returnValue = F("Lohmannstr.");
        break;
    }
    case 209234:
    {
        returnValue = F("Lohmannsweg");
        break;
    }
    case 209235:
    {
        returnValue = F("Lohmannsweide");
        break;
    }
    case 209236:
    {
        returnValue = F("Lohmannweg");
        break;
    }
    case 209237:
    {
        returnValue = F("Lohmarer Str.");
        break;
    }
    case 209238:
    {
        returnValue = F("Lohmarhohn");
        break;
    }
    case 209239:
    {
        returnValue = F("Lohmarkt");
        break;
    }
    case 209240:
    {
        returnValue = F("Lohmarstr.");
        break;
    }
    case 209241:
    {
        returnValue = F("Lohmastr.");
        break;
    }
    case 209242:
    {
        returnValue = F("Lohmberg");
        break;
    }
    case 209243:
    {
        returnValue = F("Lohmehlenring");
        break;
    }
    case 209244:
    {
        returnValue = F("Lohmeierweg");
        break;
    }
    case 209245:
    {
        returnValue = F("Lohmener Str.");
        break;
    }
    case 209246:
    {
        returnValue = F("Lohmer Dorfstr.");
        break;
    }
    case 209247:
    {
        returnValue = F("Lohmer Str.");
        break;
    }
    case 209248:
    {
        returnValue = F("Lohmerstr.");
        break;
    }
    case 209249:
    {
        returnValue = F("Lohmeyerstr.");
        break;
    }
    case 209250:
    {
        returnValue = F("Lohmgrund");
        break;
    }
    case 209251:
    {
        returnValue = F("Lohmoor");
        break;
    }
    case 209252:
    {
        returnValue = F("Lohmsteinweg");
        break;
    }
    case 209253:
    {
        returnValue = F("Lohmühle");
        break;
    }
    case 209254:
    {
        returnValue = F("Lohmühlenstr.");
        break;
    }
    case 209255:
    {
        returnValue = F("Lohmühlenweg");
        break;
    }
    case 209256:
    {
        returnValue = F("Lohmühler Berg");
        break;
    }
    case 209257:
    {
        returnValue = F("Lohmühler Weg");
        break;
    }
    case 209258:
    {
        returnValue = F("Lohmühlestr.");
        break;
    }
    case 209259:
    {
        returnValue = F("Lohmühleweg");
        break;
    }
    case 209260:
    {
        returnValue = F("Lohmühlgasse");
        break;
    }
    case 209261:
    {
        returnValue = F("Lohmühlgäßchen");
        break;
    }
    case 209262:
    {
        returnValue = F("Lohmühlstr.");
        break;
    }
    case 209263:
    {
        returnValue = F("Lohmühlweg");
        break;
    }
    case 209264:
    {
        returnValue = F("Lohmühlwiesen");
        break;
    }
    case 209265:
    {
        returnValue = F("Lohmüllerstr.");
        break;
    }
    case 209266:
    {
        returnValue = F("Lohmüllerweg");
        break;
    }
    case 209267:
    {
        returnValue = F("Lohnbachstr.");
        break;
    }
    case 209268:
    {
        returnValue = F("Lohnberg");
        break;
    }
    case 209269:
    {
        returnValue = F("Lohnbergstr.");
        break;
    }
    case 209270:
    {
        returnValue = F("Lohnbrücke");
        break;
    }
    case 209271:
    {
        returnValue = F("Lohnder Str.");
        break;
    }
    case 209272:
    {
        returnValue = F("Lohndorfer Weg");
        break;
    }
    case 209273:
    {
        returnValue = F("Lohndorfstr.");
        break;
    }
    case 209274:
    {
        returnValue = F("Lohne");
        break;
    }
    case 209275:
    {
        returnValue = F("Lohneaue");
        break;
    }
    case 209276:
    {
        returnValue = F("Lohner Brook");
        break;
    }
    case 209277:
    {
        returnValue = F("Lohner Flugplatzstr.");
        break;
    }
    case 209278:
    {
        returnValue = F("Lohner Hof");
        break;
    }
    case 209279:
    {
        returnValue = F("Lohner Höhe");
        break;
    }
    case 209280:
    {
        returnValue = F("Lohner Str.");
        break;
    }
    case 209281:
    {
        returnValue = F("Lohner Warte");
        break;
    }
    case 209282:
    {
        returnValue = F("Lohner Weg");
        break;
    }
    case 209283:
    {
        returnValue = F("Lohnergartenstr.");
        break;
    }
    case 209284:
    {
        returnValue = F("Lohnerhofstr.");
        break;
    }
    case 209285:
    {
        returnValue = F("Lohneufer");
        break;
    }
    case 209286:
    {
        returnValue = F("Lohneweg");
        break;
    }
    case 209287:
    {
        returnValue = F("Lohnewiesen");
        break;
    }
    case 209288:
    {
        returnValue = F("Lohnewinkel");
        break;
    }
    case 209289:
    {
        returnValue = F("Lohnfeld");
        break;
    }
    case 209290:
    {
        returnValue = F("Lohngasse");
        break;
    }
    case 209291:
    {
        returnValue = F("Lohnholzweg");
        break;
    }
    case 209292:
    {
        returnValue = F("Lohnken");
        break;
    }
    case 209293:
    {
        returnValue = F("Lohnkämpen");
        break;
    }
    case 209294:
    {
        returnValue = F("Lohnsitz");
        break;
    }
    case 209295:
    {
        returnValue = F("Lohnstr.");
        break;
    }
    case 209296:
    {
        returnValue = F("Lohntalstr.");
        break;
    }
    case 209297:
    {
        returnValue = F("Lohntütenweg");
        break;
    }
    case 209298:
    {
        returnValue = F("Lohnweg");
        break;
    }
    case 209299:
    {
        returnValue = F("Lohof");
        break;
    }
    case 209300:
    {
        returnValue = F("Lohofer Str.");
        break;
    }
    case 209301:
    {
        returnValue = F("Lohoffs Mühle");
        break;
    }
    case 209302:
    {
        returnValue = F("Lohoffs-Esch");
        break;
    }
    case 209303:
    {
        returnValue = F("Lohoffstr.");
        break;
    }
    case 209304:
    {
        returnValue = F("Lohoffsweg");
        break;
    }
    case 209305:
    {
        returnValue = F("Lohofstr.");
        break;
    }
    case 209306:
    {
        returnValue = F("Lohofweg");
        break;
    }
    case 209307:
    {
        returnValue = F("Loholtstr.");
        break;
    }
    case 209308:
    {
        returnValue = F("Loholzer Weg");
        break;
    }
    case 209309:
    {
        returnValue = F("Lohorn");
        break;
    }
    case 209310:
    {
        returnValue = F("Lohorststr.");
        break;
    }
    case 209311:
    {
        returnValue = F("Lohpförtchen");
        break;
    }
    case 209312:
    {
        returnValue = F("Lohplatz");
        break;
    }
    case 209313:
    {
        returnValue = F("Lohr");
        break;
    }
    case 209314:
    {
        returnValue = F("Lohraer Str.");
        break;
    }
    case 209315:
    {
        returnValue = F("Lohraer Weg");
        break;
    }
    case 209316:
    {
        returnValue = F("Lohrain");
        break;
    }
    case 209317:
    {
        returnValue = F("Lohranger");
        break;
    }
    case 209318:
    {
        returnValue = F("Lohrbacher Str.");
        break;
    }
    case 209319:
    {
        returnValue = F("Lohrbacher Weg");
        break;
    }
    case 209320:
    {
        returnValue = F("Lohrbachstr.");
        break;
    }
    case 209321:
    {
        returnValue = F("Lohrbergrundweg");
        break;
    }
    case 209322:
    {
        returnValue = F("Lohrbergstr.");
        break;
    }
    case 209323:
    {
        returnValue = F("Lohrbergweg");
        break;
    }
    case 209324:
    {
        returnValue = F("Lohreiglgasse");
        break;
    }
    case 209325:
    {
        returnValue = F("Lohrenberg");
        break;
    }
    case 209326:
    {
        returnValue = F("Lohrengelweg");
        break;
    }
    case 209327:
    {
        returnValue = F("Lohrenplatz");
        break;
    }
    case 209328:
    {
        returnValue = F("Lohrer Bergweg");
        break;
    }
    case 209329:
    {
        returnValue = F("Lohrer Hof");
        break;
    }
    case 209330:
    {
        returnValue = F("Lohrer Mühle");
        break;
    }
    case 209331:
    {
        returnValue = F("Lohrer Pfad");
        break;
    }
    case 209332:
    {
        returnValue = F("Lohrer Str.");
        break;
    }
    case 209333:
    {
        returnValue = F("Lohrere");
        break;
    }
    case 209334:
    {
        returnValue = F("Lohreuteweg");
        break;
    }
    case 209335:
    {
        returnValue = F("Lohrgartenweg");
        break;
    }
    case 209336:
    {
        returnValue = F("Lohrhaupter Str.");
        break;
    }
    case 209337:
    {
        returnValue = F("Lohrhaupter Weg");
        break;
    }
    case 209338:
    {
        returnValue = F("Lohrheimer Str.");
        break;
    }
    case 209339:
    {
        returnValue = F("Lohrmannstr.");
        break;
    }
    case 209340:
    {
        returnValue = F("Lohrmannweg");
        break;
    }
    case 209341:
    {
        returnValue = F("Lohrstr.");
        break;
    }
    case 209342:
    {
        returnValue = F("Lohrtalstr.");
        break;
    }
    case 209343:
    {
        returnValue = F("Lohrtalweg");
        break;
    }
    case 209344:
    {
        returnValue = F("Lohrwardtstr.");
        break;
    }
    case 209345:
    {
        returnValue = F("Lohrweg");
        break;
    }
    case 209346:
    {
        returnValue = F("Lohrwiese");
        break;
    }
    case 209347:
    {
        returnValue = F("Lohs-Segen");
        break;
    }
    case 209348:
    {
        returnValue = F("Lohsack");
        break;
    }
    case 209349:
    {
        returnValue = F("Lohsacker Weg");
        break;
    }
    case 209350:
    {
        returnValue = F("Lohsaer Weg");
        break;
    }
    case 209351:
    {
        returnValue = F("Lohscheffelweg");
        break;
    }
    case 209352:
    {
        returnValue = F("Lohscheidt");
        break;
    }
    case 209353:
    {
        returnValue = F("Lohschneise");
        break;
    }
    case 209354:
    {
        returnValue = F("Lohsdorfer Weg");
        break;
    }
    case 209355:
    {
        returnValue = F("Lohsen");
        break;
    }
    case 209356:
    {
        returnValue = F("Lohsenring");
        break;
    }
    case 209357:
    {
        returnValue = F("Lohsenstr.");
        break;
    }
    case 209358:
    {
        returnValue = F("Lohsenweg");
        break;
    }
    case 209359:
    {
        returnValue = F("Lohsiepen");
        break;
    }
    case 209360:
    {
        returnValue = F("Lohsteg");
        break;
    }
    case 209361:
    {
        returnValue = F("Lohstege");
        break;
    }
    case 209362:
    {
        returnValue = F("Lohsteige");
        break;
    }
    case 209363:
    {
        returnValue = F("Lohstieg");
        break;
    }
    case 209364:
    {
        returnValue = F("Lohstr.");
        break;
    }
    case 209365:
    {
        returnValue = F("Lohstädter Weg");
        break;
    }
    case 209366:
    {
        returnValue = F("Lohstätte");
        break;
    }
    case 209367:
    {
        returnValue = F("Lohstücker Weg");
        break;
    }
    case 209368:
    {
        returnValue = F("Lohteich");
        break;
    }
    case 209369:
    {
        returnValue = F("Lohteichweg");
        break;
    }
    case 209370:
    {
        returnValue = F("Lohtorstr.");
        break;
    }
    case 209371:
    {
        returnValue = F("Lohuder Weg");
        break;
    }
    case 209372:
    {
        returnValue = F("Lohwald");
        break;
    }
    case 209373:
    {
        returnValue = F("Lohwaldstr.");
        break;
    }
    case 209374:
    {
        returnValue = F("Lohwaldweg");
        break;
    }
    case 209375:
    {
        returnValue = F("Lohwall");
        break;
    }
    case 209376:
    {
        returnValue = F("Lohwarf");
        break;
    }
    case 209377:
    {
        returnValue = F("Lohwasen");
        break;
    }
    case 209378:
    {
        returnValue = F("Lohwasenweg");
        break;
    }
    case 209379:
    {
        returnValue = F("Lohweg");
        break;
    }
    case 209380:
    {
        returnValue = F("Lohweiher");
        break;
    }
    case 209381:
    {
        returnValue = F("Lohweiherstr.");
        break;
    }
    case 209382:
    {
        returnValue = F("Lohwellsbrook");
        break;
    }
    case 209383:
    {
        returnValue = F("Lohwellskamp");
        break;
    }
    case 209384:
    {
        returnValue = F("Lohwiese");
        break;
    }
    case 209385:
    {
        returnValue = F("Lohwiesen");
        break;
    }
    case 209386:
    {
        returnValue = F("Lohwiesenring");
        break;
    }
    case 209387:
    {
        returnValue = F("Lohwiesenstr.");
        break;
    }
    case 209388:
    {
        returnValue = F("Lohwiesenweg");
        break;
    }
    case 209389:
    {
        returnValue = F("Lohwieserstr.");
        break;
    }
    case 209390:
    {
        returnValue = F("Lohwindener Str.");
        break;
    }
    case 209391:
    {
        returnValue = F("Lohworthsweg");
        break;
    }
    case 209392:
    {
        returnValue = F("Lohwäldle");
        break;
    }
    case 209393:
    {
        returnValue = F("Lohzeisenstr.");
        break;
    }
    case 209394:
    {
        returnValue = F("Lohäcker");
        break;
    }
    case 209395:
    {
        returnValue = F("Lohäcker Weg");
        break;
    }
    case 209396:
    {
        returnValue = F("Lohäckerstr.");
        break;
    }
    case 209397:
    {
        returnValue = F("Lohäckerweg");
        break;
    }
    case 209398:
    {
        returnValue = F("Loibachanger");
        break;
    }
    case 209399:
    {
        returnValue = F("Loibachweg");
        break;
    }
    case 209400:
    {
        returnValue = F("Loiberting");
        break;
    }
    case 209401:
    {
        returnValue = F("Loiblfingstr.");
        break;
    }
    case 209402:
    {
        returnValue = F("Loibling");
        break;
    }
    case 209403:
    {
        returnValue = F("Loiblinger Str.");
        break;
    }
    case 209404:
    {
        returnValue = F("Loiblstr.");
        break;
    }
    case 209405:
    {
        returnValue = F("Loichinger Str.");
        break;
    }
    case 209406:
    {
        returnValue = F("Loichingermoos");
        break;
    }
    case 209407:
    {
        returnValue = F("Loichingerstr.");
        break;
    }
    case 209408:
    {
        returnValue = F("Loickenzin");
        break;
    }
    case 209409:
    {
        returnValue = F("Loickenziner Chaussee");
        break;
    }
    case 209410:
    {
        returnValue = F("Loickenziner Str.");
        break;
    }
    case 209411:
    {
        returnValue = F("Loickstr.");
        break;
    }
    case 209412:
    {
        returnValue = F("Loiderdinger Str.");
        break;
    }
    case 209413:
    {
        returnValue = F("Loifing");
        break;
    }
    case 209414:
    {
        returnValue = F("Loikumer Rott");
        break;
    }
    case 209415:
    {
        returnValue = F("Loikumer Str.");
        break;
    }
    case 209416:
    {
        returnValue = F("Loikumer Weg");
        break;
    }
    case 209417:
    {
        returnValue = F("Loimoos");
        break;
    }
    case 209418:
    {
        returnValue = F("Loipe");
        break;
    }
    case 209419:
    {
        returnValue = F("Loipe 1");
        break;
    }
    case 209420:
    {
        returnValue = F("Loipe 2");
        break;
    }
    case 209421:
    {
        returnValue = F("Loipe 21km");
        break;
    }
    case 209422:
    {
        returnValue = F("Loipe 5km");
        break;
    }
    case 209423:
    {
        returnValue = F("Loipe Zum Wilsamtal");
        break;
    }
    case 209424:
    {
        returnValue = F("Loipe um den Valtenberg");
        break;
    }
    case 209425:
    {
        returnValue = F("Loipenweg");
        break;
    }
    case 209426:
    {
        returnValue = F("Loipersdorf");
        break;
    }
    case 209427:
    {
        returnValue = F("Loipershausen");
        break;
    }
    case 209428:
    {
        returnValue = F("Loipl");
        break;
    }
    case 209429:
    {
        returnValue = F("Loipler Str.");
        break;
    }
    case 209430:
    {
        returnValue = F("Loiplsau");
        break;
    }
    case 209431:
    {
        returnValue = F("Loirestr.");
        break;
    }
    case 209432:
    {
        returnValue = F("Loiretalring");
        break;
    }
    case 209433:
    {
        returnValue = F("Loireweg");
        break;
    }
    case 209434:
    {
        returnValue = F("Loirfeld");
        break;
    }
    case 209435:
    {
        returnValue = F("Loisachauenstr.");
        break;
    }
    case 209436:
    {
        returnValue = F("Loisachblickrundweg");
        break;
    }
    case 209437:
    {
        returnValue = F("Loisachbrücke");
        break;
    }
    case 209438:
    {
        returnValue = F("Loisachpark");
        break;
    }
    case 209439:
    {
        returnValue = F("Loisachpassage");
        break;
    }
    case 209440:
    {
        returnValue = F("Loisachsteg");
        break;
    }
    case 209441:
    {
        returnValue = F("Loisachstr.");
        break;
    }
    case 209442:
    {
        returnValue = F("Loisachufer");
        break;
    }
    case 209443:
    {
        returnValue = F("Loisachweg");
        break;
    }
    case 209444:
    {
        returnValue = F("Loisbachstr.");
        break;
    }
    case 209445:
    {
        returnValue = F("Loisnitz");
        break;
    }
    case 209446:
    {
        returnValue = F("Loisnitzer Str.");
        break;
    }
    case 209447:
    {
        returnValue = F("Loisnitzer Weg");
        break;
    }
    case 209448:
    {
        returnValue = F("Loissiner Str.");
        break;
    }
    case 209449:
    {
        returnValue = F("Loissiner Wende");
        break;
    }
    case 209450:
    {
        returnValue = F("Loiter Str.");
        break;
    }
    case 209451:
    {
        returnValue = F("Loitersdorfer Weg");
        break;
    }
    case 209452:
    {
        returnValue = F("Loitmarkfeld");
        break;
    }
    case 209453:
    {
        returnValue = F("Loitscher Brühl");
        break;
    }
    case 209454:
    {
        returnValue = F("Loitscher Dorfstr.");
        break;
    }
    case 209455:
    {
        returnValue = F("Loitscher Hauptstr.");
        break;
    }
    case 209456:
    {
        returnValue = F("Loitscher Str.");
        break;
    }
    case 209457:
    {
        returnValue = F("Loitscher Weg");
        break;
    }
    case 209458:
    {
        returnValue = F("Loitshauser Str.");
        break;
    }
    case 209459:
    {
        returnValue = F("Loitstr.");
        break;
    }
    case 209460:
    {
        returnValue = F("Loitzer Chaussee");
        break;
    }
    case 209461:
    {
        returnValue = F("Loitzer Landstr.");
        break;
    }
    case 209462:
    {
        returnValue = F("Loitzer Str.");
        break;
    }
    case 209463:
    {
        returnValue = F("Loitzscher Str.");
        break;
    }
    case 209464:
    {
        returnValue = F("Lokalbahnstr.");
        break;
    }
    case 209465:
    {
        returnValue = F("Lokenbach");
        break;
    }
    case 209466:
    {
        returnValue = F("Lokenweg");
        break;
    }
    case 209467:
    {
        returnValue = F("Lokert");
        break;
    }
    case 209468:
    {
        returnValue = F("Lokfeld");
        break;
    }
    case 209469:
    {
        returnValue = F("Lokfelder Heckkaten");
        break;
    }
    case 209470:
    {
        returnValue = F("Loki-Schmidt-Weg");
        break;
    }
    case 209471:
    {
        returnValue = F("Lokomotive");
        break;
    }
    case 209472:
    {
        returnValue = F("Lokomotivenstr.");
        break;
    }
    case 209473:
    {
        returnValue = F("Lokschuppenzufahrt");
        break;
    }
    case 209474:
    {
        returnValue = F("Lokweg");
        break;
    }
    case 209475:
    {
        returnValue = F("Lola-Landau-Ring");
        break;
    }
    case 209476:
    {
        returnValue = F("Lolesgasse");
        break;
    }
    case 209477:
    {
        returnValue = F("Lollarer Str.");
        break;
    }
    case 209478:
    {
        returnValue = F("Lollarer Weg");
        break;
    }
    case 209479:
    {
        returnValue = F("Lollbachgasse");
        break;
    }
    case 209480:
    {
        returnValue = F("Lollfuß");
        break;
    }
    case 209481:
    {
        returnValue = F("Lollo-Rosso-Weg");
        break;
    }
    case 209482:
    {
        returnValue = F("Lombacher Panoramaweg");
        break;
    }
    case 209483:
    {
        returnValue = F("Lombacher Str.");
        break;
    }
    case 209484:
    {
        returnValue = F("Lombacher Weg");
        break;
    }
    case 209485:
    {
        returnValue = F("Lombachstr.");
        break;
    }
    case 209486:
    {
        returnValue = F("Lombachweg");
        break;
    }
    case 209487:
    {
        returnValue = F("Lombardeiweg");
        break;
    }
    case 209488:
    {
        returnValue = F("Lombardenstr.");
        break;
    }
    case 209489:
    {
        returnValue = F("Lombardring");
        break;
    }
    case 209490:
    {
        returnValue = F("Lombergstr.");
        break;
    }
    case 209491:
    {
        returnValue = F("Lomberstr.");
        break;
    }
    case 209492:
    {
        returnValue = F("Lombsiedlung");
        break;
    }
    case 209493:
    {
        returnValue = F("Lomersheimer Str.");
        break;
    }
    case 209494:
    {
        returnValue = F("Lomerweg");
        break;
    }
    case 209495:
    {
        returnValue = F("Lomke");
        break;
    }
    case 209496:
    {
        returnValue = F("Lomlerstr.");
        break;
    }
    case 209497:
    {
        returnValue = F("Lomlerweg");
        break;
    }
    case 209498:
    {
        returnValue = F("Lommatzscher Landstr.");
        break;
    }
    case 209499:
    {
        returnValue = F("Lommatzscher Str.");
        break;
    }
    case 209500:
    {
        returnValue = F("Lommelstr.");
        break;
    }
    case 209501:
    {
        returnValue = F("Lommelweg");
        break;
    }
    case 209502:
    {
        returnValue = F("Lommer Leiten");
        break;
    }
    case 209503:
    {
        returnValue = F("Lommerbruch");
        break;
    }
    case 209504:
    {
        returnValue = F("Lommersdorfer Str.");
        break;
    }
    case 209505:
    {
        returnValue = F("Lommersgasse");
        break;
    }
    case 209506:
    {
        returnValue = F("Lommersheim");
        break;
    }
    case 209507:
    {
        returnValue = F("Lommersheimer Weg");
        break;
    }
    case 209508:
    {
        returnValue = F("Lommerstr.");
        break;
    }
    case 209509:
    {
        returnValue = F("Lommersumer Str.");
        break;
    }
    case 209510:
    {
        returnValue = F("Lommertzheimstr.");
        break;
    }
    case 209511:
    {
        returnValue = F("Lommertzweg");
        break;
    }
    case 209512:
    {
        returnValue = F("Lommerweg");
        break;
    }
    case 209513:
    {
        returnValue = F("Lommerwiese");
        break;
    }
    case 209514:
    {
        returnValue = F("Lommäcker");
        break;
    }
    case 209515:
    {
        returnValue = F("Lomnitzer Hauptstr.");
        break;
    }
    case 209516:
    {
        returnValue = F("Lomnitzer Str.");
        break;
    }
    case 209517:
    {
        returnValue = F("Lomnitzer Weg");
        break;
    }
    case 209518:
    {
        returnValue = F("Lomonossowallee");
        break;
    }
    case 209519:
    {
        returnValue = F("Lomonossowstr.");
        break;
    }
    case 209520:
    {
        returnValue = F("Lomonossowweg");
        break;
    }
    case 209521:
    {
        returnValue = F("Lomstr.");
        break;
    }
    case 209522:
    {
        returnValue = F("Lonauer Str.");
        break;
    }
    case 209523:
    {
        returnValue = F("Londerkampenweg");
        break;
    }
    case 209524:
    {
        returnValue = F("London Street");
        break;
    }
    case 209525:
    {
        returnValue = F("Londoner Ring");
        break;
    }
    case 209526:
    {
        returnValue = F("Londoner Str.");
        break;
    }
    case 209527:
    {
        returnValue = F("Londongstr.");
        break;
    }
    case 209528:
    {
        returnValue = F("Londonring");
        break;
    }
    case 209529:
    {
        returnValue = F("Londonstr.");
        break;
    }
    case 209530:
    {
        returnValue = F("Londorfer Str.");
        break;
    }
    case 209531:
    {
        returnValue = F("Londorfer Weg");
        break;
    }
    case 209532:
    {
        returnValue = F("Lonestr.");
        break;
    }
    case 209533:
    {
        returnValue = F("Lonetalblick");
        break;
    }
    case 209534:
    {
        returnValue = F("Lonetalstr.");
        break;
    }
    case 209535:
    {
        returnValue = F("Lonetalweg");
        break;
    }
    case 209536:
    {
        returnValue = F("Lonewiesen");
        break;
    }
    case 209537:
    {
        returnValue = F("Longbentonstr.");
        break;
    }
    case 209538:
    {
        returnValue = F("Longchampplatz");
        break;
    }
    case 209539:
    {
        returnValue = F("Longenburger Str.");
        break;
    }
    case 209540:
    {
        returnValue = F("Longenweg");
        break;
    }
    case 209541:
    {
        returnValue = F("Longericher Str.");
        break;
    }
    case 209542:
    {
        returnValue = F("Longinusstr.");
        break;
    }
    case 209543:
    {
        returnValue = F("Longkamper Weg");
        break;
    }
    case 209544:
    {
        returnValue = F("Longkampstr.");
        break;
    }
    case 209545:
    {
        returnValue = F("Longnerstr.");
        break;
    }
    case 209546:
    {
        returnValue = F("Longue-Str.");
        break;
    }
    case 209547:
    {
        returnValue = F("Longuyoner Str.");
        break;
    }
    case 209548:
    {
        returnValue = F("Longuyonstr.");
        break;
    }
    case 209549:
    {
        returnValue = F("Loni-Franz-Str.");
        break;
    }
    case 209550:
    {
        returnValue = F("Lonnacker");
        break;
    }
    case 209551:
    {
        returnValue = F("Lonnenweg");
        break;
    }
    case 209552:
    {
        returnValue = F("Lonnerbecker Str.");
        break;
    }
    case 209553:
    {
        returnValue = F("Lonnewitzer Str.");
        break;
    }
    case 209554:
    {
        returnValue = F("Lonniger Str.");
        break;
    }
    case 209555:
    {
        returnValue = F("Lonseer Gasse");
        break;
    }
    case 209556:
    {
        returnValue = F("Lonseer Str.");
        break;
    }
    case 209557:
    {
        returnValue = F("Lonsheimer Str.");
        break;
    }
    case 209558:
    {
        returnValue = F("Lonsinger Str.");
        break;
    }
    case 209559:
    {
        returnValue = F("Lonsinger Tal");
        break;
    }
    case 209560:
    {
        returnValue = F("Lonsstr.");
        break;
    }
    case 209561:
    {
        returnValue = F("Lontalstr.");
        break;
    }
    case 209562:
    {
        returnValue = F("Lontalweg");
        break;
    }
    case 209563:
    {
        returnValue = F("Lontelstr.");
        break;
    }
    case 209564:
    {
        returnValue = F("Lontzekweg");
        break;
    }
    case 209565:
    {
        returnValue = F("Lontzenweg");
        break;
    }
    case 209566:
    {
        returnValue = F("Lonvitz");
        break;
    }
    case 209567:
    {
        returnValue = F("Lonweg");
        break;
    }
    case 209568:
    {
        returnValue = F("Lonystr.");
        break;
    }
    case 209569:
    {
        returnValue = F("Lonzaplatz");
        break;
    }
    case 209570:
    {
        returnValue = F("Lonzaring");
        break;
    }
    case 209571:
    {
        returnValue = F("Lonziger Hauptstr.");
        break;
    }
    case 209572:
    {
        returnValue = F("Loo'sche Heide");
        break;
    }
    case 209573:
    {
        returnValue = F("Loo'scher Weg");
        break;
    }
    case 209574:
    {
        returnValue = F("Looch Heuweg");
        break;
    }
    case 209575:
    {
        returnValue = F("Loochweg");
        break;
    }
    case 209576:
    {
        returnValue = F("Loofkamp");
        break;
    }
    case 209577:
    {
        returnValue = F("Loofter Str.");
        break;
    }
    case 209578:
    {
        returnValue = F("Loog");
        break;
    }
    case 209579:
    {
        returnValue = F("Looge");
        break;
    }
    case 209580:
    {
        returnValue = F("Loogenweg");
        break;
    }
    case 209581:
    {
        returnValue = F("Looger Str.");
        break;
    }
    case 209582:
    {
        returnValue = F("Looger Weg");
        break;
    }
    case 209583:
    {
        returnValue = F("Loogher Mühle");
        break;
    }
    case 209584:
    {
        returnValue = F("Loogher Str.");
        break;
    }
    case 209585:
    {
        returnValue = F("Loogsterdünen");
        break;
    }
    case 209586:
    {
        returnValue = F("Loogstr.");
        break;
    }
    case 209587:
    {
        returnValue = F("Loogstraat");
        break;
    }
    case 209588:
    {
        returnValue = F("Loogsweg");
        break;
    }
    case 209589:
    {
        returnValue = F("Loogweg");
        break;
    }
    case 209590:
    {
        returnValue = F("Looheide");
        break;
    }
    case 209591:
    {
        returnValue = F("Look Kamp");
        break;
    }
    case 209592:
    {
        returnValue = F("Lookamp");
        break;
    }
    case 209593:
    {
        returnValue = F("Lookdyk");
        break;
    }
    case 209594:
    {
        returnValue = F("Lookenweg");
        break;
    }
    case 209595:
    {
        returnValue = F("Looker Str.");
        break;
    }
    case 209596:
    {
        returnValue = F("Lookvenne");
        break;
    }
    case 209597:
    {
        returnValue = F("Loopacabana");
        break;
    }
    case 209598:
    {
        returnValue = F("Looper Berg");
        break;
    }
    case 209599:
    {
        returnValue = F("Looper Weg");
        break;
    }
    case 209600:
    {
        returnValue = F("Loopgraben");
        break;
    }
    case 209601:
    {
        returnValue = F("Loopstedter Str.");
        break;
    }
    case 209602:
    {
        returnValue = F("Loos");
        break;
    }
    case 209603:
    {
        returnValue = F("Loosa");
        break;
    }
    case 209604:
    {
        returnValue = F("Loosbachweg");
        break;
    }
    case 209605:
    {
        returnValue = F("Loosbenden");
        break;
    }
    case 209606:
    {
        returnValue = F("Loosberg");
        break;
    }
    case 209607:
    {
        returnValue = F("Loosbuchweg");
        break;
    }
    case 209608:
    {
        returnValue = F("Looscherbroch");
        break;
    }
    case 209609:
    {
        returnValue = F("Looschkoppel");
        break;
    }
    case 209610:
    {
        returnValue = F("Loose");
        break;
    }
    case 209611:
    {
        returnValue = F("Loose-Stall-Weg");
        break;
    }
    case 209612:
    {
        returnValue = F("Loosekamp");
        break;
    }
    case 209613:
    {
        returnValue = F("Loosen");
        break;
    }
    case 209614:
    {
        returnValue = F("Loosener Str.");
        break;
    }
    case 209615:
    {
        returnValue = F("Loosener Weg");
        break;
    }
    case 209616:
    {
        returnValue = F("Loosenweg");
        break;
    }
    case 209617:
    {
        returnValue = F("Looser Str.");
        break;
    }
    case 209618:
    {
        returnValue = F("Loosestr.");
        break;
    }
    case 209619:
    {
        returnValue = F("Loosgasse");
        break;
    }
    case 209620:
    {
        returnValue = F("Looshof");
        break;
    }
    case 209621:
    {
        returnValue = F("Loosweg");
        break;
    }
    case 209622:
    {
        returnValue = F("Loosäckerweg");
        break;
    }
    case 209623:
    {
        returnValue = F("Lootsche Weg");
        break;
    }
    case 209624:
    {
        returnValue = F("Lopau");
        break;
    }
    case 209625:
    {
        returnValue = F("Lopauer Str.");
        break;
    }
    case 209626:
    {
        returnValue = F("Lopauer Weg");
        break;
    }
    case 209627:
    {
        returnValue = F("Lopaupark");
        break;
    }
    case 209628:
    {
        returnValue = F("Lopautalweg");
        break;
    }
    case 209629:
    {
        returnValue = F("Lopesetteler Str.");
        break;
    }
    case 209630:
    {
        returnValue = F("Lopiker Str.");
        break;
    }
    case 209631:
    {
        returnValue = F("Lopodunumstr.");
        break;
    }
    case 209632:
    {
        returnValue = F("Lopp");
        break;
    }
    case 209633:
    {
        returnValue = F("Loppelter Weg");
        break;
    }
    case 209634:
    {
        returnValue = F("Loppengasse");
        break;
    }
    case 209635:
    {
        returnValue = F("Loppenhausener Str.");
        break;
    }
    case 209636:
    {
        returnValue = F("Loppersumer Ring");
        break;
    }
    case 209637:
    {
        returnValue = F("Loppersumer Str.");
        break;
    }
    case 209638:
    {
        returnValue = F("Lopshop");
        break;
    }
    case 209639:
    {
        returnValue = F("Lopshorner Allee");
        break;
    }
    case 209640:
    {
        returnValue = F("Lopshorner Weg");
        break;
    }
    case 209641:
    {
        returnValue = F("Loquarder Reihe");
        break;
    }
    case 209642:
    {
        returnValue = F("Loquarder Ring");
        break;
    }
    case 209643:
    {
        returnValue = F("Loquitzviadukt");
        break;
    }
    case 209644:
    {
        returnValue = F("Loquitzweg");
        break;
    }
    case 209645:
    {
        returnValue = F("Loraghistr.");
        break;
    }
    case 209646:
    {
        returnValue = F("Lorbacher Str.");
        break;
    }
    case 209647:
    {
        returnValue = F("Lorbacher Weg");
        break;
    }
    case 209648:
    {
        returnValue = F("Lorbeerrosenweg");
        break;
    }
    case 209649:
    {
        returnValue = F("Lorbeerstr.");
        break;
    }
    case 209650:
    {
        returnValue = F("Lorbeerweg");
        break;
    }
    case 209651:
    {
        returnValue = F("Lorbersgasse");
        break;
    }
    case 209652:
    {
        returnValue = F("Lorberweg");
        break;
    }
    case 209653:
    {
        returnValue = F("Lorchensburg");
        break;
    }
    case 209654:
    {
        returnValue = F("Lorcher Hof");
        break;
    }
    case 209655:
    {
        returnValue = F("Lorcher Str.");
        break;
    }
    case 209656:
    {
        returnValue = F("Lorchsmühlweg");
        break;
    }
    case 209657:
    {
        returnValue = F("Lord-Acton-Str.");
        break;
    }
    case 209658:
    {
        returnValue = F("Lore-Dauer-Str.");
        break;
    }
    case 209659:
    {
        returnValue = F("Lore-Gollwitzer-Str.");
        break;
    }
    case 209660:
    {
        returnValue = F("Lore-Rauh-Str.");
        break;
    }
    case 209661:
    {
        returnValue = F("Lore-Schill-Str.");
        break;
    }
    case 209662:
    {
        returnValue = F("Lore-Voith-Str.");
        break;
    }
    case 209663:
    {
        returnValue = F("Lore-Walb-Str.");
        break;
    }
    case 209664:
    {
        returnValue = F("Loreleistr.");
        break;
    }
    case 209665:
    {
        returnValue = F("Loreley");
        break;
    }
    case 209666:
    {
        returnValue = F("Loreley-Burgen-Str.");
        break;
    }
    case 209667:
    {
        returnValue = F("Loreleyblick");
        break;
    }
    case 209668:
    {
        returnValue = F("Loreleypromenade");
        break;
    }
    case 209669:
    {
        returnValue = F("Loreleyring");
        break;
    }
    case 209670:
    {
        returnValue = F("Loreleystr.");
        break;
    }
    case 209671:
    {
        returnValue = F("Loreleyweg");
        break;
    }
    case 209672:
    {
        returnValue = F("Lorenbahntrasse");
        break;
    }
    case 209673:
    {
        returnValue = F("Lorenbeckstr.");
        break;
    }
    case 209674:
    {
        returnValue = F("Lorendamm");
        break;
    }
    case 209675:
    {
        returnValue = F("Lorengasse");
        break;
    }
    case 209676:
    {
        returnValue = F("Lorenkamp");
        break;
    }
    case 209677:
    {
        returnValue = F("Lorens-de-Hahn-Str.");
        break;
    }
    case 209678:
    {
        returnValue = F("Lorenstr.");
        break;
    }
    case 209679:
    {
        returnValue = F("Lorentzenstr.");
        break;
    }
    case 209680:
    {
        returnValue = F("Lorentzstr.");
        break;
    }
    case 209681:
    {
        returnValue = F("Lorenweg");
        break;
    }
    case 209682:
    {
        returnValue = F("Lorenz Wingert");
        break;
    }
    case 209683:
    {
        returnValue = F("Lorenz-Angerer-Weg");
        break;
    }
    case 209684:
    {
        returnValue = F("Lorenz-Bauer-Str.");
        break;
    }
    case 209685:
    {
        returnValue = F("Lorenz-Bock-Str.");
        break;
    }
    case 209686:
    {
        returnValue = F("Lorenz-Boxler-Weg");
        break;
    }
    case 209687:
    {
        returnValue = F("Lorenz-Brandl-Str.");
        break;
    }
    case 209688:
    {
        returnValue = F("Lorenz-Braren-Str.");
        break;
    }
    case 209689:
    {
        returnValue = F("Lorenz-Brentano-Allee");
        break;
    }
    case 209690:
    {
        returnValue = F("Lorenz-Brentano-Str.");
        break;
    }
    case 209691:
    {
        returnValue = F("Lorenz-Breunig-Str.");
        break;
    }
    case 209692:
    {
        returnValue = F("Lorenz-Buchdunger-Str.");
        break;
    }
    case 209693:
    {
        returnValue = F("Lorenz-Dey-Str.");
        break;
    }
    case 209694:
    {
        returnValue = F("Lorenz-Diehl-Str.");
        break;
    }
    case 209695:
    {
        returnValue = F("Lorenz-Fries-Str.");
        break;
    }
    case 209696:
    {
        returnValue = F("Lorenz-Fromhold-Str.");
        break;
    }
    case 209697:
    {
        returnValue = F("Lorenz-Görtz-Str.");
        break;
    }
    case 209698:
    {
        returnValue = F("Lorenz-Götz-Str.");
        break;
    }
    case 209699:
    {
        returnValue = F("Lorenz-Götz-Weg");
        break;
    }
    case 209700:
    {
        returnValue = F("Lorenz-Hagel-Weg");
        break;
    }
    case 209701:
    {
        returnValue = F("Lorenz-Heim-Str.");
        break;
    }
    case 209702:
    {
        returnValue = F("Lorenz-Hengler-Str.");
        break;
    }
    case 209703:
    {
        returnValue = F("Lorenz-Hiltner-Str.");
        break;
    }
    case 209704:
    {
        returnValue = F("Lorenz-Hutschenreuther-Str.");
        break;
    }
    case 209705:
    {
        returnValue = F("Lorenz-Hübner-Str.");
        break;
    }
    case 209706:
    {
        returnValue = F("Lorenz-Jacob-Str.");
        break;
    }
    case 209707:
    {
        returnValue = F("Lorenz-Jaeger-Str.");
        break;
    }
    case 209708:
    {
        returnValue = F("Lorenz-Jannsen-Str.");
        break;
    }
    case 209709:
    {
        returnValue = F("Lorenz-Jehle-Str.");
        break;
    }
    case 209710:
    {
        returnValue = F("Lorenz-Jensen-Str.");
        break;
    }
    case 209711:
    {
        returnValue = F("Lorenz-Kaim-Str.");
        break;
    }
    case 209712:
    {
        returnValue = F("Lorenz-Kellner-Str.");
        break;
    }
    case 209713:
    {
        returnValue = F("Lorenz-Klotz-Str.");
        break;
    }
    case 209714:
    {
        returnValue = F("Lorenz-Kokenbecker-Str.");
        break;
    }
    case 209715:
    {
        returnValue = F("Lorenz-Krapp-Str.");
        break;
    }
    case 209716:
    {
        returnValue = F("Lorenz-Lassen-Str.");
        break;
    }
    case 209717:
    {
        returnValue = F("Lorenz-Lembach-Str.");
        break;
    }
    case 209718:
    {
        returnValue = F("Lorenz-Linseis-Str.");
        break;
    }
    case 209719:
    {
        returnValue = F("Lorenz-Luidl-Str.");
        break;
    }
    case 209720:
    {
        returnValue = F("Lorenz-Meier-Str.");
        break;
    }
    case 209721:
    {
        returnValue = F("Lorenz-Müller-Str.");
        break;
    }
    case 209722:
    {
        returnValue = F("Lorenz-Oechsler-Weg");
        break;
    }
    case 209723:
    {
        returnValue = F("Lorenz-Oettl-Str.");
        break;
    }
    case 209724:
    {
        returnValue = F("Lorenz-Paul-Str.");
        break;
    }
    case 209725:
    {
        returnValue = F("Lorenz-Pfluger-Weg");
        break;
    }
    case 209726:
    {
        returnValue = F("Lorenz-Reißl-Str.");
        break;
    }
    case 209727:
    {
        returnValue = F("Lorenz-Rädler-Weg");
        break;
    }
    case 209728:
    {
        returnValue = F("Lorenz-Sandler-Str.");
        break;
    }
    case 209729:
    {
        returnValue = F("Lorenz-Scherer-Str.");
        break;
    }
    case 209730:
    {
        returnValue = F("Lorenz-Schmitz-Str.");
        break;
    }
    case 209731:
    {
        returnValue = F("Lorenz-Schneider-Str.");
        break;
    }
    case 209732:
    {
        returnValue = F("Lorenz-Spies-Str.");
        break;
    }
    case 209733:
    {
        returnValue = F("Lorenz-Stadler-Str.");
        break;
    }
    case 209734:
    {
        returnValue = F("Lorenz-Steinbrückner-Weg");
        break;
    }
    case 209735:
    {
        returnValue = F("Lorenz-Stemmle-Str.");
        break;
    }
    case 209736:
    {
        returnValue = F("Lorenz-Stumpf-Str.");
        break;
    }
    case 209737:
    {
        returnValue = F("Lorenz-Summa-Str.");
        break;
    }
    case 209738:
    {
        returnValue = F("Lorenz-Unterreiner-Str.");
        break;
    }
    case 209739:
    {
        returnValue = F("Lorenz-Vogel-Weg");
        break;
    }
    case 209740:
    {
        returnValue = F("Lorenz-Weber-Str.");
        break;
    }
    case 209741:
    {
        returnValue = F("Lorenz-Wegele-Bichl");
        break;
    }
    case 209742:
    {
        returnValue = F("Lorenz-Wenk-Weg");
        break;
    }
    case 209743:
    {
        returnValue = F("Lorenz-Werthmann-Str.");
        break;
    }
    case 209744:
    {
        returnValue = F("Lorenz-Wiegels-Str.");
        break;
    }
    case 209745:
    {
        returnValue = F("Lorenz-Zierl-Str.");
        break;
    }
    case 209746:
    {
        returnValue = F("Lorenz-de-Hahn-Wei");
        break;
    }
    case 209747:
    {
        returnValue = F("Lorenz-von-Reitz-Str.");
        break;
    }
    case 209748:
    {
        returnValue = F("Lorenz-von-Stein-Ring");
        break;
    }
    case 209749:
    {
        returnValue = F("Lorenzberg");
        break;
    }
    case 209750:
    {
        returnValue = F("Lorenzburg");
        break;
    }
    case 209751:
    {
        returnValue = F("Lorenzengasse");
        break;
    }
    case 209752:
    {
        returnValue = F("Lorenzengäßle");
        break;
    }
    case 209753:
    {
        returnValue = F("Lorenzenhäusleweg");
        break;
    }
    case 209754:
    {
        returnValue = F("Lorenzenstr.");
        break;
    }
    case 209755:
    {
        returnValue = F("Lorenzenweg");
        break;
    }
    case 209756:
    {
        returnValue = F("Lorenzer Str.");
        break;
    }
    case 209757:
    {
        returnValue = F("Lorenzerstr.");
        break;
    }
    case 209758:
    {
        returnValue = F("Lorenzgang");
        break;
    }
    case 209759:
    {
        returnValue = F("Lorenzgasse");
        break;
    }
    case 209760:
    {
        returnValue = F("Lorenzgässchen");
        break;
    }
    case 209761:
    {
        returnValue = F("Lorenzhaus");
        break;
    }
    case 209762:
    {
        returnValue = F("Lorenzheider Weg");
        break;
    }
    case 209763:
    {
        returnValue = F("Lorenzistr.");
        break;
    }
    case 209764:
    {
        returnValue = F("Lorenziweg");
        break;
    }
    case 209765:
    {
        returnValue = F("Lorenzkamp");
        break;
    }
    case 209766:
    {
        returnValue = F("Lorenzrain");
        break;
    }
    case 209767:
    {
        returnValue = F("Lorenzreuther Str.");
        break;
    }
    case 209768:
    {
        returnValue = F("Lorenzstr.");
        break;
    }
    case 209769:
    {
        returnValue = F("Lorenzweg");
        break;
    }
    case 209770:
    {
        returnValue = F("Lores Gaas");
        break;
    }
    case 209771:
    {
        returnValue = F("Lorestr.");
        break;
    }
    case 209772:
    {
        returnValue = F("Loretostr.");
        break;
    }
    case 209773:
    {
        returnValue = F("Loretoweg");
        break;
    }
    case 209774:
    {
        returnValue = F("Lorettastr.");
        break;
    }
    case 209775:
    {
        returnValue = F("Loretto");
        break;
    }
    case 209776:
    {
        returnValue = F("Lorettokapelle");
        break;
    }
    case 209777:
    {
        returnValue = F("Lorettoplatz");
        break;
    }
    case 209778:
    {
        returnValue = F("Lorettosteig");
        break;
    }
    case 209779:
    {
        returnValue = F("Lorettostr.");
        break;
    }
    case 209780:
    {
        returnValue = F("Lorettoweg");
        break;
    }
    case 209781:
    {
        returnValue = F("Loreyseeschneise");
        break;
    }
    case 209782:
    {
        returnValue = F("Lorfestr.");
        break;
    }
    case 209783:
    {
        returnValue = F("Lori-Ludwig-Str.");
        break;
    }
    case 209784:
    {
        returnValue = F("Loricaweg");
        break;
    }
    case 209785:
    {
        returnValue = F("Lorich");
        break;
    }
    case 209786:
    {
        returnValue = F("Lorichstr.");
        break;
    }
    case 209787:
    {
        returnValue = F("Lorientallee");
        break;
    }
    case 209788:
    {
        returnValue = F("Lorinckstr.");
        break;
    }
    case 209789:
    {
        returnValue = F("Loriolstr.");
        break;
    }
    case 209790:
    {
        returnValue = F("Loriot-Weg");
        break;
    }
    case 209791:
    {
        returnValue = F("Lorisgartenstr.");
        break;
    }
    case 209792:
    {
        returnValue = F("Lorisstr.");
        break;
    }
    case 209793:
    {
        returnValue = F("Loristr.");
        break;
    }
    case 209794:
    {
        returnValue = F("Lorkenhöhe");
        break;
    }
    case 209795:
    {
        returnValue = F("Lorkstr.");
        break;
    }
    case 209796:
    {
        returnValue = F("Lorlebergplatz");
        break;
    }
    case 209797:
    {
        returnValue = F("Lormaisonstr.");
        break;
    }
    case 209798:
    {
        returnValue = F("Lornsendamm");
        break;
    }
    case 209799:
    {
        returnValue = F("Lornsenhof");
        break;
    }
    case 209800:
    {
        returnValue = F("Lornsenplatz");
        break;
    }
    case 209801:
    {
        returnValue = F("Lornsenstr.");
        break;
    }
    case 209802:
    {
        returnValue = F("Lornsenweg");
        break;
    }
    case 209803:
    {
        returnValue = F("Lorsbacher Str.");
        break;
    }
    case 209804:
    {
        returnValue = F("Lorsbachstr.");
        break;
    }
    case 209805:
    {
        returnValue = F("Lorsbecker Str.");
        break;
    }
    case 209806:
    {
        returnValue = F("Lorscher Feldschneise");
        break;
    }
    case 209807:
    {
        returnValue = F("Lorscher Hof");
        break;
    }
    case 209808:
    {
        returnValue = F("Lorscher Platz");
        break;
    }
    case 209809:
    {
        returnValue = F("Lorscher Ring");
        break;
    }
    case 209810:
    {
        returnValue = F("Lorscher Str.");
        break;
    }
    case 209811:
    {
        returnValue = F("Lorscher Weg");
        break;
    }
    case 209812:
    {
        returnValue = F("Lorscher Zehnt");
        break;
    }
    case 209813:
    {
        returnValue = F("Lorscher-Schneise");
        break;
    }
    case 209814:
    {
        returnValue = F("Lorschstr.");
        break;
    }
    case 209815:
    {
        returnValue = F("Lortzingallee");
        break;
    }
    case 209816:
    {
        returnValue = F("Lortzingring");
        break;
    }
    case 209817:
    {
        returnValue = F("Lortzingstr.");
        break;
    }
    case 209818:
    {
        returnValue = F("Lortzingweg");
        break;
    }
    case 209819:
    {
        returnValue = F("Loruper Str.");
        break;
    }
    case 209820:
    {
        returnValue = F("Loruper Weg");
        break;
    }
    case 209821:
    {
        returnValue = F("Lorystr.");
        break;
    }
    case 209822:
    {
        returnValue = F("Lorzingstr.");
        break;
    }
    case 209823:
    {
        returnValue = F("Los");
        break;
    }
    case 209824:
    {
        returnValue = F("Losackerstr.");
        break;
    }
    case 209825:
    {
        returnValue = F("Losaer Kirchsteig");
        break;
    }
    case 209826:
    {
        returnValue = F("Losaer Str.");
        break;
    }
    case 209827:
    {
        returnValue = F("Losau");
        break;
    }
    case 209828:
    {
        returnValue = F("Losaweg");
        break;
    }
    case 209829:
    {
        returnValue = F("Losbaumweg");
        break;
    }
    case 209830:
    {
        returnValue = F("Losberg");
        break;
    }
    case 209831:
    {
        returnValue = F("Losbergstr.");
        break;
    }
    case 209832:
    {
        returnValue = F("Losbichl");
        break;
    }
    case 209833:
    {
        returnValue = F("Losburgstr.");
        break;
    }
    case 209834:
    {
        returnValue = F("Loschberg");
        break;
    }
    case 209835:
    {
        returnValue = F("Loschenwiesenweg");
        break;
    }
    case 209836:
    {
        returnValue = F("Loscherbroch");
        break;
    }
    case 209837:
    {
        returnValue = F("Loschgestr.");
        break;
    }
    case 209838:
    {
        returnValue = F("Losekamp");
        break;
    }
    case 209839:
    {
        returnValue = F("Losemühle");
        break;
    }
    case 209840:
    {
        returnValue = F("Losenbach");
        break;
    }
    case 209841:
    {
        returnValue = F("Losenbergstr.");
        break;
    }
    case 209842:
    {
        returnValue = F("Losenbergtunnel");
        break;
    }
    case 209843:
    {
        returnValue = F("Losenbergweg");
        break;
    }
    case 209844:
    {
        returnValue = F("Losenburger Str.");
        break;
    }
    case 209845:
    {
        returnValue = F("Losenburger Weg");
        break;
    }
    case 209846:
    {
        returnValue = F("Losenbücheler Str.");
        break;
    }
    case 209847:
    {
        returnValue = F("Losengasse");
        break;
    }
    case 209848:
    {
        returnValue = F("Losengewann");
        break;
    }
    case 209849:
    {
        returnValue = F("Losenholz");
        break;
    }
    case 209850:
    {
        returnValue = F("Losenried");
        break;
    }
    case 209851:
    {
        returnValue = F("Losentitz");
        break;
    }
    case 209852:
    {
        returnValue = F("Loserlstr.");
        break;
    }
    case 209853:
    {
        returnValue = F("Loshaldenstr.");
        break;
    }
    case 209854:
    {
        returnValue = F("Loshardt");
        break;
    }
    case 209855:
    {
        returnValue = F("Losheimer Str.");
        break;
    }
    case 209856:
    {
        returnValue = F("Losheimergraben");
        break;
    }
    case 209857:
    {
        returnValue = F("Losheimerstr.");
        break;
    }
    case 209858:
    {
        returnValue = F("Loshäuser Berg");
        break;
    }
    case 209859:
    {
        returnValue = F("Loshäuser Weg");
        break;
    }
    case 209860:
    {
        returnValue = F("Loshülze");
        break;
    }
    case 209861:
    {
        returnValue = F("Lositz");
        break;
    }
    case 209862:
    {
        returnValue = F("Losiusweg");
        break;
    }
    case 209863:
    {
        returnValue = F("Losklinge");
        break;
    }
    case 209864:
    {
        returnValue = F("Loskyller Weg");
        break;
    }
    case 209865:
    {
        returnValue = F("Lossaer Str.");
        break;
    }
    case 209866:
    {
        returnValue = F("Lossastr.");
        break;
    }
    case 209867:
    {
        returnValue = F("Lossaustr.");
        break;
    }
    case 209868:
    {
        returnValue = F("Lossaweg");
        break;
    }
    case 209869:
    {
        returnValue = F("Lossemannweg");
        break;
    }
    case 209870:
    {
        returnValue = F("Lossener Str.");
        break;
    }
    case 209871:
    {
        returnValue = F("Lossenstr.");
        break;
    }
    case 209872:
    {
        returnValue = F("Lossenweg");
        break;
    }
    case 209873:
    {
        returnValue = F("Losser Weg");
        break;
    }
    case 209874:
    {
        returnValue = F("Losseweg");
        break;
    }
    case 209875:
    {
        returnValue = F("Lossiusstr.");
        break;
    }
    case 209876:
    {
        returnValue = F("Lossower Weg");
        break;
    }
    case 209877:
    {
        returnValue = F("Lostauer Str.");
        break;
    }
    case 209878:
    {
        returnValue = F("Lostauer Weg");
        break;
    }
    case 209879:
    {
        returnValue = F("Lostener Str.");
        break;
    }
    case 209880:
    {
        returnValue = F("Losterbachstr.");
        break;
    }
    case 209881:
    {
        returnValue = F("Lostweg");
        break;
    }
    case 209882:
    {
        returnValue = F("Lotberger Str.");
        break;
    }
    case 209883:
    {
        returnValue = F("Lotenbachklamm, Rettungssektor G");
        break;
    }
    case 209884:
    {
        returnValue = F("Lotenbergstr.");
        break;
    }
    case 209885:
    {
        returnValue = F("Lotenbergweg");
        break;
    }
    case 209886:
    {
        returnValue = F("Lotforsterstr.");
        break;
    }
    case 209887:
    {
        returnValue = F("Lothar-Barth-Gedächtnisweg");
        break;
    }
    case 209888:
    {
        returnValue = F("Lothar-Buhne-Weg");
        break;
    }
    case 209889:
    {
        returnValue = F("Lothar-Daiker-Str.");
        break;
    }
    case 209890:
    {
        returnValue = F("Lothar-Dietz-Str.");
        break;
    }
    case 209891:
    {
        returnValue = F("Lothar-Erdmann-Str.");
        break;
    }
    case 209892:
    {
        returnValue = F("Lothar-Fabian-Weg");
        break;
    }
    case 209893:
    {
        returnValue = F("Lothar-Forster-Str.");
        break;
    }
    case 209894:
    {
        returnValue = F("Lothar-Hentschel-Str.");
        break;
    }
    case 209895:
    {
        returnValue = F("Lothar-Irle-Str.");
        break;
    }
    case 209896:
    {
        returnValue = F("Lothar-Kampmann-Str.");
        break;
    }
    case 209897:
    {
        returnValue = F("Lothar-Kreyssig-Str.");
        break;
    }
    case 209898:
    {
        returnValue = F("Lothar-Kunzmann-Str.");
        break;
    }
    case 209899:
    {
        returnValue = F("Lothar-Meyer-Str.");
        break;
    }
    case 209900:
    {
        returnValue = F("Lothar-Prell-Weg");
        break;
    }
    case 209901:
    {
        returnValue = F("Lothar-Rahn-Weg");
        break;
    }
    case 209902:
    {
        returnValue = F("Lothar-Schätzl-Str.");
        break;
    }
    case 209903:
    {
        returnValue = F("Lothar-Streit-Str.");
        break;
    }
    case 209904:
    {
        returnValue = F("Lothar-Wiegand-Ring");
        break;
    }
    case 209905:
    {
        returnValue = F("Lothar-von-Kübel-Str.");
        break;
    }
    case 209906:
    {
        returnValue = F("Lotharstr.");
        break;
    }
    case 209907:
    {
        returnValue = F("Lotharweg");
        break;
    }
    case 209908:
    {
        returnValue = F("Lothbergsfeld");
        break;
    }
    case 209909:
    {
        returnValue = F("Lothemasch");
        break;
    }
    case 209910:
    {
        returnValue = F("Lother Höhe");
        break;
    }
    case 209911:
    {
        returnValue = F("Lother Str.");
        break;
    }
    case 209912:
    {
        returnValue = F("Lothgasse");
        break;
    }
    case 209913:
    {
        returnValue = F("Lothlandstr.");
        break;
    }
    case 209914:
    {
        returnValue = F("Lothoweg");
        break;
    }
    case 209915:
    {
        returnValue = F("Lothradweg");
        break;
    }
    case 209916:
    {
        returnValue = F("Lothramühle");
        break;
    }
    case 209917:
    {
        returnValue = F("Lothringenweg");
        break;
    }
    case 209918:
    {
        returnValue = F("Lothringer Dell");
        break;
    }
    case 209919:
    {
        returnValue = F("Lothringer Ring");
        break;
    }
    case 209920:
    {
        returnValue = F("Lothringer Schlag");
        break;
    }
    case 209921:
    {
        returnValue = F("Lothringer Str.");
        break;
    }
    case 209922:
    {
        returnValue = F("Lothringer Weg");
        break;
    }
    case 209923:
    {
        returnValue = F("Lothringerstr.");
        break;
    }
    case 209924:
    {
        returnValue = F("Lothrönn");
        break;
    }
    case 209925:
    {
        returnValue = F("Lothsief");
        break;
    }
    case 209926:
    {
        returnValue = F("Lothspatt");
        break;
    }
    case 209927:
    {
        returnValue = F("Lotichiusstr.");
        break;
    }
    case 209928:
    {
        returnValue = F("Lotjeweg");
        break;
    }
    case 209929:
    {
        returnValue = F("Lots Padje");
        break;
    }
    case 209930:
    {
        returnValue = F("Lotschackerstr.");
        break;
    }
    case 209931:
    {
        returnValue = F("Lotschen");
        break;
    }
    case 209932:
    {
        returnValue = F("Lotschnauer Weg");
        break;
    }
    case 209933:
    {
        returnValue = F("Lotschstr.");
        break;
    }
    case 209934:
    {
        returnValue = F("Lotsengang");
        break;
    }
    case 209935:
    {
        returnValue = F("Lotsengarten");
        break;
    }
    case 209936:
    {
        returnValue = F("Lotsengasse");
        break;
    }
    case 209937:
    {
        returnValue = F("Lotsenplatz");
        break;
    }
    case 209938:
    {
        returnValue = F("Lotsenring");
        break;
    }
    case 209939:
    {
        returnValue = F("Lotsenstation");
        break;
    }
    case 209940:
    {
        returnValue = F("Lotsenstieg");
        break;
    }
    case 209941:
    {
        returnValue = F("Lotsenstr.");
        break;
    }
    case 209942:
    {
        returnValue = F("Lotsenweg");
        break;
    }
    case 209943:
    {
        returnValue = F("Lotstr.");
        break;
    }
    case 209944:
    {
        returnValue = F("Lotsweg");
        break;
    }
    case 209945:
    {
        returnValue = F("Lott-Str.");
        break;
    }
    case 209946:
    {
        returnValue = F("Lotte-Bach-Weg");
        break;
    }
    case 209947:
    {
        returnValue = F("Lotte-Klein-Weg");
        break;
    }
    case 209948:
    {
        returnValue = F("Lotte-Kümmel-Weg");
        break;
    }
    case 209949:
    {
        returnValue = F("Lotte-Laserstein-Str.");
        break;
    }
    case 209950:
    {
        returnValue = F("Lotte-Lemke-Str.");
        break;
    }
    case 209951:
    {
        returnValue = F("Lotte-Lemke-Weg");
        break;
    }
    case 209952:
    {
        returnValue = F("Lotte-Lenya-Str.");
        break;
    }
    case 209953:
    {
        returnValue = F("Lotte-Loebinger-Str.");
        break;
    }
    case 209954:
    {
        returnValue = F("Lotte-Pulewka-Str.");
        break;
    }
    case 209955:
    {
        returnValue = F("Lottengrüner Str.");
        break;
    }
    case 209956:
    {
        returnValue = F("Lottenhammer");
        break;
    }
    case 209957:
    {
        returnValue = F("Lottenmühle");
        break;
    }
    case 209958:
    {
        returnValue = F("Lottenstr.");
        break;
    }
    case 209959:
    {
        returnValue = F("Lottenweg");
        break;
    }
    case 209960:
    {
        returnValue = F("Lottenweilerweg");
        break;
    }
    case 209961:
    {
        returnValue = F("Lotter Str.");
        break;
    }
    case 209962:
    {
        returnValue = F("Lotter Weg");
        break;
    }
    case 209963:
    {
        returnValue = F("Lotterbachstr.");
        break;
    }
    case 209964:
    {
        returnValue = F("Lotterbachweg");
        break;
    }
    case 209965:
    {
        returnValue = F("Lotterberg");
        break;
    }
    case 209966:
    {
        returnValue = F("Lotterbergstr.");
        break;
    }
    case 209967:
    {
        returnValue = F("Lotterbergweg");
        break;
    }
    case 209968:
    {
        returnValue = F("Lotterfeld");
        break;
    }
    case 209969:
    {
        returnValue = F("Lottergasse");
        break;
    }
    case 209970:
    {
        returnValue = F("Lotteriestr.");
        break;
    }
    case 209971:
    {
        returnValue = F("Lottersteig");
        break;
    }
    case 209972:
    {
        returnValue = F("Lotterstr.");
        break;
    }
    case 209973:
    {
        returnValue = F("Lottestr.");
        break;
    }
    case 209974:
    {
        returnValue = F("Lottiner Str.");
        break;
    }
    case 209975:
    {
        returnValue = F("Lottmannstr.");
        break;
    }
    case 209976:
    {
        returnValue = F("Lottnerstr.");
        break;
    }
    case 209977:
    {
        returnValue = F("Lottoweg");
        break;
    }
    case 209978:
    {
        returnValue = F("Lottscheweg");
        break;
    }
    case 209979:
    {
        returnValue = F("Lottumstr.");
        break;
    }
    case 209980:
    {
        returnValue = F("Lotusblüte");
        break;
    }
    case 209981:
    {
        returnValue = F("Lotusweg");
        break;
    }
    case 209982:
    {
        returnValue = F("Lotzbach");
        break;
    }
    case 209983:
    {
        returnValue = F("Lotzbeck-Anlage");
        break;
    }
    case 209984:
    {
        returnValue = F("Lotzbeckpark");
        break;
    }
    case 209985:
    {
        returnValue = F("Lotzbeckstr.");
        break;
    }
    case 209986:
    {
        returnValue = F("Lotzdorfer Str.");
        break;
    }
    case 209987:
    {
        returnValue = F("Lotzemer");
        break;
    }
    case 209988:
    {
        returnValue = F("Lotzenhohl");
        break;
    }
    case 209989:
    {
        returnValue = F("Lotzenkopfstr.");
        break;
    }
    case 209990:
    {
        returnValue = F("Lotzentaler Weg");
        break;
    }
    case 209991:
    {
        returnValue = F("Lotzenweg");
        break;
    }
    case 209992:
    {
        returnValue = F("Lotzenäcker");
        break;
    }
    case 209993:
    {
        returnValue = F("Lotzerstr.");
        break;
    }
    case 209994:
    {
        returnValue = F("Lotzertweg");
        break;
    }
    case 209995:
    {
        returnValue = F("Lotzerweg");
        break;
    }
    case 209996:
    {
        returnValue = F("Lotzestr.");
        break;
    }
    case 209997:
    {
        returnValue = F("Lotzeweg");
        break;
    }
    case 209998:
    {
        returnValue = F("Lotzfeldchen");
        break;
    }
    case 209999:
    {
        returnValue = F("Lotzstr.");
        break;
    }
    case 210000:
    {
        returnValue = F("Loubaweg");
        break;
    }
    case 210001:
    {
        returnValue = F("Loue Str.");
        break;
    }
    case 210002:
    {
        returnValue = F("Louiesgasse");
        break;
    }
    case 210003:
    {
        returnValue = F("Louis-Adorf-Steg");
        break;
    }
    case 210004:
    {
        returnValue = F("Louis-Anschütz-Str.");
        break;
    }
    case 210005:
    {
        returnValue = F("Louis-Armstrong-Str.");
        break;
    }
    case 210006:
    {
        returnValue = F("Louis-Armstrong-Weg");
        break;
    }
    case 210007:
    {
        returnValue = F("Louis-Bardorf-Str.");
        break;
    }
    case 210008:
    {
        returnValue = F("Louis-Beißel-Str.");
        break;
    }
    case 210009:
    {
        returnValue = F("Louis-Berger-Str.");
        break;
    }
    case 210010:
    {
        returnValue = F("Louis-Bethmann-Str.");
        break;
    }
    case 210011:
    {
        returnValue = F("Louis-Braille-Str.");
        break;
    }
    case 210012:
    {
        returnValue = F("Louis-Braun-Str.");
        break;
    }
    case 210013:
    {
        returnValue = F("Louis-Demme-Str.");
        break;
    }
    case 210014:
    {
        returnValue = F("Louis-Dietrich-Str.");
        break;
    }
    case 210015:
    {
        returnValue = F("Louis-Eckstein-Str.");
        break;
    }
    case 210016:
    {
        returnValue = F("Louis-Escande-Str.");
        break;
    }
    case 210017:
    {
        returnValue = F("Louis-Ferdinand-Schönherr-Str.");
        break;
    }
    case 210018:
    {
        returnValue = F("Louis-Ferdinand-Str.");
        break;
    }
    case 210019:
    {
        returnValue = F("Louis-Flotho-Str.");
        break;
    }
    case 210020:
    {
        returnValue = F("Louis-Frech-Str.");
        break;
    }
    }
    return returnValue;
}
