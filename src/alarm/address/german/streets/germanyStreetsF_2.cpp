#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameF2(unsigned int streetKey)
{
String returnValue = "";
switch (streetKey)
{
case 100010:
{
returnValue = F("Feldbergpfad");
break;
}
case 100011:
{
returnValue = F("Feldbergplatz");
break;
}
case 100012:
{
returnValue = F("Feldbergring");
break;
}
case 100013:
{
returnValue = F("Feldbergschneise");
break;
}
case 100014:
{
returnValue = F("Feldbergsiedlung");
break;
}
case 100015:
{
returnValue = F("Feldbergstr.");
break;
}
case 100016:
{
returnValue = F("Feldbergstr. 12");
break;
}
case 100017:
{
returnValue = F("Feldbergsträßle");
break;
}
case 100018:
{
returnValue = F("Feldbergweg");
break;
}
case 100019:
{
returnValue = F("Feldbißweg");
break;
}
case 100020:
{
returnValue = F("Feldblick");
break;
}
case 100021:
{
returnValue = F("Feldblickstr.");
break;
}
case 100022:
{
returnValue = F("Feldblumenstr.");
break;
}
case 100023:
{
returnValue = F("Feldblumenweg");
break;
}
case 100024:
{
returnValue = F("Feldborde");
break;
}
case 100025:
{
returnValue = F("Feldborn");
break;
}
case 100026:
{
returnValue = F("Feldbornstr.");
break;
}
case 100027:
{
returnValue = F("Feldbrand");
break;
}
case 100028:
{
returnValue = F("Feldbrandstr.");
break;
}
case 100029:
{
returnValue = F("Feldbrandweg");
break;
}
case 100030:
{
returnValue = F("Feldbrechenring");
break;
}
case 100031:
{
returnValue = F("Feldbrede");
break;
}
case 100032:
{
returnValue = F("Feldbreede");
break;
}
case 100033:
{
returnValue = F("Feldbreite");
break;
}
case 100034:
{
returnValue = F("Feldbrunnenweg");
break;
}
case 100035:
{
returnValue = F("Feldbrückenstr.");
break;
}
case 100036:
{
returnValue = F("Feldbrücker Weg");
break;
}
case 100037:
{
returnValue = F("Feldbrügge");
break;
}
case 100038:
{
returnValue = F("Feldbrühlstr.");
break;
}
case 100039:
{
returnValue = F("Feldburgweg");
break;
}
case 100040:
{
returnValue = F("Feldbusch");
break;
}
case 100041:
{
returnValue = F("Feldbuschwende");
break;
}
case 100042:
{
returnValue = F("Feldbäckerei");
break;
}
case 100043:
{
returnValue = F("Feldchen");
break;
}
case 100044:
{
returnValue = F("Feldchenbahnbrücke");
break;
}
case 100045:
{
returnValue = F("Feldchengasse");
break;
}
case 100046:
{
returnValue = F("Feldchenstr.");
break;
}
case 100047:
{
returnValue = F("Feldchenweg");
break;
}
case 100048:
{
returnValue = F("Feldchesgasse");
break;
}
case 100049:
{
returnValue = F("Feldcheshol");
break;
}
case 100050:
{
returnValue = F("Felddamm");
break;
}
case 100051:
{
returnValue = F("Felde");
break;
}
case 100052:
{
returnValue = F("Feldeggerser Weg");
break;
}
case 100053:
{
returnValue = F("Feldeinsamkeit");
break;
}
case 100054:
{
returnValue = F("Feldelestr.");
break;
}
case 100055:
{
returnValue = F("Feldeleweg");
break;
}
case 100056:
{
returnValue = F("Feldend");
break;
}
case 100057:
{
returnValue = F("Feldender Str.");
break;
}
case 100058:
{
returnValue = F("Feldenendstr.");
break;
}
case 100059:
{
returnValue = F("Feldengutweg");
break;
}
case 100060:
{
returnValue = F("Feldenstr.");
break;
}
case 100061:
{
returnValue = F("Feldenweg");
break;
}
case 100062:
{
returnValue = F("Felder Bruchstr.");
break;
}
case 100063:
{
returnValue = F("Felder Dorfstr.");
break;
}
case 100064:
{
returnValue = F("Felder Hof");
break;
}
case 100065:
{
returnValue = F("Felder Höhe");
break;
}
case 100066:
{
returnValue = F("Felder Schlagbaum");
break;
}
case 100067:
{
returnValue = F("Felder Str.");
break;
}
case 100068:
{
returnValue = F("Felderbachstr.");
break;
}
case 100069:
{
returnValue = F("Felderend");
break;
}
case 100070:
{
returnValue = F("Felderhof");
break;
}
case 100071:
{
returnValue = F("Felderhofer Str.");
break;
}
case 100072:
{
returnValue = F("Felderhoferbrücke");
break;
}
case 100073:
{
returnValue = F("Feldermoor");
break;
}
case 100074:
{
returnValue = F("Feldermühle");
break;
}
case 100075:
{
returnValue = F("Feldernkopfstr.");
break;
}
case 100076:
{
returnValue = F("Feldernstr.");
break;
}
case 100077:
{
returnValue = F("Feldersbachweg");
break;
}
case 100078:
{
returnValue = F("Felderseite");
break;
}
case 100079:
{
returnValue = F("Felderstr.");
break;
}
case 100080:
{
returnValue = F("Feldertor");
break;
}
case 100081:
{
returnValue = F("Felderweg");
break;
}
case 100082:
{
returnValue = F("Feldeschweg");
break;
}
case 100083:
{
returnValue = F("Feldfahrt");
break;
}
case 100084:
{
returnValue = F("Feldfichten");
break;
}
case 100085:
{
returnValue = F("Feldflachstr.");
break;
}
case 100086:
{
returnValue = F("Feldflosse");
break;
}
case 100087:
{
returnValue = F("Feldfrieden");
break;
}
case 100088:
{
returnValue = F("Feldgarten");
break;
}
case 100089:
{
returnValue = F("Feldgartenstr.");
break;
}
case 100090:
{
returnValue = F("Feldgartenweg");
break;
}
case 100091:
{
returnValue = F("Feldgasse");
break;
}
case 100092:
{
returnValue = F("Feldgatterweg");
break;
}
case 100093:
{
returnValue = F("Feldgedinger Str.");
break;
}
case 100094:
{
returnValue = F("Feldgehauweg");
break;
}
case 100095:
{
returnValue = F("Feldgenstr.");
break;
}
case 100096:
{
returnValue = F("Feldgereuth");
break;
}
case 100097:
{
returnValue = F("Feldgerichtstr.");
break;
}
case 100098:
{
returnValue = F("Feldgewende");
break;
}
case 100099:
{
returnValue = F("Feldgraben");
break;
}
case 100100:
{
returnValue = F("Feldgrabendamm");
break;
}
case 100101:
{
returnValue = F("Feldgrabenweg");
break;
}
case 100102:
{
returnValue = F("Feldgrenzweg");
break;
}
case 100103:
{
returnValue = F("Feldgrillenstr.");
break;
}
case 100104:
{
returnValue = F("Feldgräben");
break;
}
case 100105:
{
returnValue = F("Feldgärten");
break;
}
case 100106:
{
returnValue = F("Feldgärtenstr.");
break;
}
case 100107:
{
returnValue = F("Feldgäßchen");
break;
}
case 100108:
{
returnValue = F("Feldhag");
break;
}
case 100109:
{
returnValue = F("Feldhagen");
break;
}
case 100110:
{
returnValue = F("Feldhamsterstr.");
break;
}
case 100111:
{
returnValue = F("Feldhamsterweg");
break;
}
case 100112:
{
returnValue = F("Feldhardsweg");
break;
}
case 100113:
{
returnValue = F("Feldhasenweg");
break;
}
case 100114:
{
returnValue = F("Feldhausaue");
break;
}
case 100115:
{
returnValue = F("Feldhausen");
break;
}
case 100116:
{
returnValue = F("Feldhausener Str.");
break;
}
case 100117:
{
returnValue = F("Feldhausener Weg");
break;
}
case 100118:
{
returnValue = F("Feldhausenstr.");
break;
}
case 100119:
{
returnValue = F("Feldhauser Deich");
break;
}
case 100120:
{
returnValue = F("Feldhauser Str.");
break;
}
case 100121:
{
returnValue = F("Feldhauser Weg");
break;
}
case 100122:
{
returnValue = F("Feldhauskamp");
break;
}
case 100123:
{
returnValue = F("Feldhausstr.");
break;
}
case 100124:
{
returnValue = F("Feldhausweg");
break;
}
case 100125:
{
returnValue = F("Feldheckenweg");
break;
}
case 100126:
{
returnValue = F("Feldheider Str.");
break;
}
case 100127:
{
returnValue = F("Feldheider Weg");
break;
}
case 100128:
{
returnValue = F("Feldheimer Str.");
break;
}
case 100129:
{
returnValue = F("Feldheimer Weg");
break;
}
case 100130:
{
returnValue = F("Feldheimer Weitblick");
break;
}
case 100131:
{
returnValue = F("Feldhelmsen");
break;
}
case 100132:
{
returnValue = F("Feldherrenstr.");
break;
}
case 100133:
{
returnValue = F("Feldherrnstr.");
break;
}
case 100134:
{
returnValue = F("Feldherrnweg");
break;
}
case 100135:
{
returnValue = F("Feldhoek");
break;
}
case 100136:
{
returnValue = F("Feldhof");
break;
}
case 100137:
{
returnValue = F("Feldhofer Weg");
break;
}
case 100138:
{
returnValue = F("Feldhoff");
break;
}
case 100139:
{
returnValue = F("Feldhofstr.");
break;
}
case 100140:
{
returnValue = F("Feldhofsweg");
break;
}
case 100141:
{
returnValue = F("Feldhofweg");
break;
}
case 100142:
{
returnValue = F("Feldholzstr.");
break;
}
case 100143:
{
returnValue = F("Feldhook");
break;
}
case 100144:
{
returnValue = F("Feldhorst");
break;
}
case 100145:
{
returnValue = F("Feldhues Hook");
break;
}
case 100146:
{
returnValue = F("Feldhuhnweg");
break;
}
case 100147:
{
returnValue = F("Feldhusen");
break;
}
case 100148:
{
returnValue = F("Feldhusener Str.");
break;
}
case 100149:
{
returnValue = F("Feldhuser Weg");
break;
}
case 100150:
{
returnValue = F("Feldhusstr.");
break;
}
case 100151:
{
returnValue = F("Feldhuterhof");
break;
}
case 100152:
{
returnValue = F("Feldhuuser Karkpadd");
break;
}
case 100153:
{
returnValue = F("Feldhäuser");
break;
}
case 100154:
{
returnValue = F("Feldhäuser Str.");
break;
}
case 100155:
{
returnValue = F("Feldhäuserweg");
break;
}
case 100156:
{
returnValue = F("Feldhöhe");
break;
}
case 100157:
{
returnValue = F("Feldhörn");
break;
}
case 100158:
{
returnValue = F("Feldhörner Weg");
break;
}
case 100159:
{
returnValue = F("Feldhörnstr.");
break;
}
case 100160:
{
returnValue = F("Feldhörnweg");
break;
}
case 100161:
{
returnValue = F("Feldhülbensträßle");
break;
}
case 100162:
{
returnValue = F("Feldhüserweg");
break;
}
case 100163:
{
returnValue = F("Feldhüterhof");
break;
}
case 100164:
{
returnValue = F("Feldhüterstr.");
break;
}
case 100165:
{
returnValue = F("Feldhüterweg");
break;
}
case 100166:
{
returnValue = F("Feldhüttenweg");
break;
}
case 100167:
{
returnValue = F("Feldiglgasse");
break;
}
case 100168:
{
returnValue = F("Feldiglstr.");
break;
}
case 100169:
{
returnValue = F("Feldkahler Str.");
break;
}
case 100170:
{
returnValue = F("Feldkamp");
break;
}
case 100171:
{
returnValue = F("Feldkampen");
break;
}
case 100172:
{
returnValue = F("Feldkampstr.");
break;
}
case 100173:
{
returnValue = F("Feldkampsweg");
break;
}
case 100174:
{
returnValue = F("Feldkampweg");
break;
}
case 100175:
{
returnValue = F("Feldkante");
break;
}
case 100176:
{
returnValue = F("Feldkapellenstr.");
break;
}
case 100177:
{
returnValue = F("Feldkasseler Weg");
break;
}
case 100178:
{
returnValue = F("Feldkerscherweg");
break;
}
case 100179:
{
returnValue = F("Feldkirchen");
break;
}
case 100180:
{
returnValue = F("Feldkirchener Str.");
break;
}
case 100181:
{
returnValue = F("Feldkirchenring");
break;
}
case 100182:
{
returnValue = F("Feldkirchenstr.");
break;
}
case 100183:
{
returnValue = F("Feldkircher Str.");
break;
}
case 100184:
{
returnValue = F("Feldkircher Weg");
break;
}
case 100185:
{
returnValue = F("Feldkirchner Fußweg");
break;
}
case 100186:
{
returnValue = F("Feldkirchner Str.");
break;
}
case 100187:
{
returnValue = F("Feldkirchner Weg");
break;
}
case 100188:
{
returnValue = F("Feldklirrenstr.");
break;
}
case 100189:
{
returnValue = F("Feldkoppel");
break;
}
case 100190:
{
returnValue = F("Feldkreuzstr.");
break;
}
case 100191:
{
returnValue = F("Feldkreuzweg");
break;
}
case 100192:
{
returnValue = F("Feldkrug");
break;
}
case 100193:
{
returnValue = F("Feldkrugweg");
break;
}
case 100194:
{
returnValue = F("Feldkrücker Str.");
break;
}
case 100195:
{
returnValue = F("Feldkrücker Weg");
break;
}
case 100196:
{
returnValue = F("Feldkämpe");
break;
}
case 100197:
{
returnValue = F("Feldkämper Heide");
break;
}
case 100198:
{
returnValue = F("Feldlache");
break;
}
case 100199:
{
returnValue = F("Feldlaweg");
break;
}
case 100200:
{
returnValue = F("Feldle");
break;
}
case 100201:
{
returnValue = F("Feldlerchenflur");
break;
}
case 100202:
{
returnValue = F("Feldlerchengasse");
break;
}
case 100203:
{
returnValue = F("Feldlerchenstr.");
break;
}
case 100204:
{
returnValue = F("Feldlerchenweg");
break;
}
case 100205:
{
returnValue = F("Feldlestr.");
break;
}
case 100206:
{
returnValue = F("Feldlesweg");
break;
}
case 100207:
{
returnValue = F("Feldleuba");
break;
}
case 100208:
{
returnValue = F("Feldlinie");
break;
}
case 100209:
{
returnValue = F("Feldlstr.");
break;
}
case 100210:
{
returnValue = F("Feldlweg");
break;
}
case 100211:
{
returnValue = F("Feldmaierstr.");
break;
}
case 100212:
{
returnValue = F("Feldmann");
break;
}
case 100213:
{
returnValue = F("Feldmannhof");
break;
}
case 100214:
{
returnValue = F("Feldmannshaus");
break;
}
case 100215:
{
returnValue = F("Feldmannshof");
break;
}
case 100216:
{
returnValue = F("Feldmannskamp");
break;
}
case 100217:
{
returnValue = F("Feldmannsplatz");
break;
}
case 100218:
{
returnValue = F("Feldmannstege");
break;
}
case 100219:
{
returnValue = F("Feldmannstr.");
break;
}
case 100220:
{
returnValue = F("Feldmannsweg");
break;
}
case 100221:
{
returnValue = F("Feldmannweg");
break;
}
case 100222:
{
returnValue = F("Feldmark");
break;
}
case 100223:
{
returnValue = F("Feldmark Grevenstein");
break;
}
case 100224:
{
returnValue = F("Feldmark links der Bode");
break;
}
case 100225:
{
returnValue = F("Feldmarkeck");
break;
}
case 100226:
{
returnValue = F("Feldmarker Allee");
break;
}
case 100227:
{
returnValue = F("Feldmarkring");
break;
}
case 100228:
{
returnValue = F("Feldmarkstr.");
break;
}
case 100229:
{
returnValue = F("Feldmarkweg");
break;
}
case 100230:
{
returnValue = F("Feldmattenweg");
break;
}
case 100231:
{
returnValue = F("Feldmattweg");
break;
}
case 100232:
{
returnValue = F("Feldmaurerweg");
break;
}
case 100233:
{
returnValue = F("Feldmausweg");
break;
}
case 100234:
{
returnValue = F("Feldmeiers Weg");
break;
}
case 100235:
{
returnValue = F("Feldmeierweg");
break;
}
case 100236:
{
returnValue = F("Feldmesserstr.");
break;
}
case 100237:
{
returnValue = F("Feldmesserweg");
break;
}
case 100238:
{
returnValue = F("Feldmeßstr.");
break;
}
case 100239:
{
returnValue = F("Feldmitte");
break;
}
case 100240:
{
returnValue = F("Feldmohnstr.");
break;
}
case 100241:
{
returnValue = F("Feldmoos");
break;
}
case 100242:
{
returnValue = F("Feldmooser Str.");
break;
}
case 100243:
{
returnValue = F("Feldmühle");
break;
}
case 100244:
{
returnValue = F("Feldmühlenweg");
break;
}
case 100245:
{
returnValue = F("Feldmühleplatz");
break;
}
case 100246:
{
returnValue = F("Feldmühlestr.");
break;
}
case 100247:
{
returnValue = F("Feldnasche");
break;
}
case 100248:
{
returnValue = F("Feldner Allee");
break;
}
case 100249:
{
returnValue = F("Feldofenstr.");
break;
}
case 100250:
{
returnValue = F("Feldohlentrup");
break;
}
case 100251:
{
returnValue = F("Feldpad");
break;
}
case 100252:
{
returnValue = F("Feldpfad");
break;
}
case 100253:
{
returnValue = F("Feldpforte");
break;
}
case 100254:
{
returnValue = F("Feldpreul");
break;
}
case 100255:
{
returnValue = F("Feldpöhl");
break;
}
case 100256:
{
returnValue = F("Feldrain");
break;
}
case 100257:
{
returnValue = F("Feldrainstr.");
break;
}
case 100258:
{
returnValue = F("Feldrand");
break;
}
case 100259:
{
returnValue = F("Feldrandweg");
break;
}
case 100260:
{
returnValue = F("Feldreihe");
break;
}
case 100261:
{
returnValue = F("Feldrennacher Str.");
break;
}
case 100262:
{
returnValue = F("Feldrennacher Weg");
break;
}
case 100263:
{
returnValue = F("Feldrenne");
break;
}
case 100264:
{
returnValue = F("Feldriede");
break;
}
case 100265:
{
returnValue = F("Feldriethe");
break;
}
case 100266:
{
returnValue = F("Feldring");
break;
}
case 100267:
{
returnValue = F("Feldromer Str.");
break;
}
case 100268:
{
returnValue = F("Feldrosenweg");
break;
}
case 100269:
{
returnValue = F("Feldrücken");
break;
}
case 100270:
{
returnValue = F("Felds");
break;
}
case 100271:
{
returnValue = F("Feldsating");
break;
}
case 100272:
{
returnValue = F("Feldsatinger Weg");
break;
}
case 100273:
{
returnValue = F("Feldscheide");
break;
}
case 100274:
{
returnValue = F("Feldscheidenstr.");
break;
}
case 100275:
{
returnValue = F("Feldscheider Weg");
break;
}
case 100276:
{
returnValue = F("Feldscheiderweg");
break;
}
case 100277:
{
returnValue = F("Feldscheideweg");
break;
}
case 100278:
{
returnValue = F("Feldschere");
break;
}
case 100279:
{
returnValue = F("Feldscherweg");
break;
}
case 100280:
{
returnValue = F("Feldscheunenplan");
break;
}
case 100281:
{
returnValue = F("Feldscheunenweg");
break;
}
case 100282:
{
returnValue = F("Feldschlagstr.");
break;
}
case 100283:
{
returnValue = F("Feldschlagweg");
break;
}
case 100284:
{
returnValue = F("Feldschleife");
break;
}
case 100285:
{
returnValue = F("Feldschlösschen");
break;
}
case 100286:
{
returnValue = F("Feldschlößchen");
break;
}
case 100287:
{
returnValue = F("Feldschlößchenstr.");
break;
}
case 100288:
{
returnValue = F("Feldschlößchenweg");
break;
}
case 100289:
{
returnValue = F("Feldschmiede");
break;
}
case 100290:
{
returnValue = F("Feldschmiedekamp");
break;
}
case 100291:
{
returnValue = F("Feldschneiderweg");
break;
}
case 100292:
{
returnValue = F("Feldschneise");
break;
}
case 100293:
{
returnValue = F("Feldschootenweg");
break;
}
case 100294:
{
returnValue = F("Feldschulplatz");
break;
}
case 100295:
{
returnValue = F("Feldschößchen");
break;
}
case 100296:
{
returnValue = F("Feldschützstr.");
break;
}
case 100297:
{
returnValue = F("Feldseestr.");
break;
}
case 100298:
{
returnValue = F("Feldseeweg");
break;
}
case 100299:
{
returnValue = F("Feldseite");
break;
}
case 100300:
{
returnValue = F("Feldsieben");
break;
}
case 100301:
{
returnValue = F("Feldsiedlung");
break;
}
case 100302:
{
returnValue = F("Feldsiefer Weg");
break;
}
case 100303:
{
returnValue = F("Feldsiefer Wiesen");
break;
}
case 100304:
{
returnValue = F("Feldsieper Str.");
break;
}
case 100305:
{
returnValue = F("Feldspatstr.");
break;
}
case 100306:
{
returnValue = F("Feldspatweg");
break;
}
case 100307:
{
returnValue = F("Feldsstr.");
break;
}
case 100308:
{
returnValue = F("Feldstedt");
break;
}
case 100309:
{
returnValue = F("Feldstedter Str.");
break;
}
case 100310:
{
returnValue = F("Feldstegge");
break;
}
case 100311:
{
returnValue = F("Feldsteig");
break;
}
case 100312:
{
returnValue = F("Feldsteinpflaster");
break;
}
case 100313:
{
returnValue = F("Feldsteinpflaster groß");
break;
}
case 100314:
{
returnValue = F("Feldsteinstr.");
break;
}
case 100315:
{
returnValue = F("Feldsteinweg");
break;
}
case 100316:
{
returnValue = F("Feldstetter Str.");
break;
}
case 100317:
{
returnValue = F("Feldstetter Weg");
break;
}
case 100318:
{
returnValue = F("Feldstiege");
break;
}
case 100319:
{
returnValue = F("Feldstiegenkamp");
break;
}
case 100320:
{
returnValue = F("Feldstr.");
break;
}
case 100321:
{
returnValue = F("Feldstr. (Werrabrücke Mihla)");
break;
}
case 100322:
{
returnValue = F("Feldstr. Klietzen");
break;
}
case 100323:
{
returnValue = F("Feldstr. Trinum");
break;
}
case 100324:
{
returnValue = F("Feldstr.-Ausbau");
break;
}
case 100325:
{
returnValue = F("Feldstrasse");
break;
}
case 100326:
{
returnValue = F("Feldstreek");
break;
}
case 100327:
{
returnValue = F("Feldstreeker Weg");
break;
}
case 100328:
{
returnValue = F("Feldstroot");
break;
}
case 100329:
{
returnValue = F("Feldstückenstr.");
break;
}
case 100330:
{
returnValue = F("Feldstückenweg");
break;
}
case 100331:
{
returnValue = F("Feldtange");
break;
}
case 100332:
{
returnValue = F("Feldteichstr.");
break;
}
case 100333:
{
returnValue = F("Feldteile");
break;
}
case 100334:
{
returnValue = F("Feldteilenweg");
break;
}
case 100335:
{
returnValue = F("Feldtor");
break;
}
case 100336:
{
returnValue = F("Feldtorgasse");
break;
}
case 100337:
{
returnValue = F("Feldtorstr.");
break;
}
case 100338:
{
returnValue = F("Feldtorweg");
break;
}
case 100339:
{
returnValue = F("Feldtraße");
break;
}
case 100340:
{
returnValue = F("Feldwasserstr.");
break;
}
case 100341:
{
returnValue = F("Feldwebel-Boldt-Str.");
break;
}
case 100342:
{
returnValue = F("Feldweberweg");
break;
}
case 100343:
{
returnValue = F("Feldwech");
break;
}
case 100344:
{
returnValue = F("Feldweg");
break;
}
case 100345:
{
returnValue = F("Feldweg 1");
break;
}
case 100346:
{
returnValue = F("Feldweg 102");
break;
}
case 100347:
{
returnValue = F("Feldweg 277");
break;
}
case 100348:
{
returnValue = F("Feldweg 614");
break;
}
case 100349:
{
returnValue = F("Feldweg 95");
break;
}
case 100350:
{
returnValue = F("Feldweg Gemarkung Timmeitz/ Zernien");
break;
}
case 100351:
{
returnValue = F("Feldweg I");
break;
}
case 100352:
{
returnValue = F("Feldweg II");
break;
}
case 100353:
{
returnValue = F("Feldweg Klein Labenz");
break;
}
case 100354:
{
returnValue = F("Feldweg Privat");
break;
}
case 100355:
{
returnValue = F("Feldweg Richtung Salz");
break;
}
case 100356:
{
returnValue = F("Feldweg Sauberg Falkenbuch");
break;
}
case 100357:
{
returnValue = F("Feldweg Schafwiesen");
break;
}
case 100358:
{
returnValue = F("Feldweg Trollenhagen - Neverin");
break;
}
case 100359:
{
returnValue = F("Feldweg Umgehungsstr.");
break;
}
case 100360:
{
returnValue = F("Feldweg am Deich");
break;
}
case 100361:
{
returnValue = F("Feldweg am Schöhsee");
break;
}
case 100362:
{
returnValue = F("Feldweg am Wagnersberg");
break;
}
case 100363:
{
returnValue = F("Feldweg im Polder");
break;
}
case 100364:
{
returnValue = F("Feldweg nach Dürrlauingen");
break;
}
case 100365:
{
returnValue = F("Feldweg nach Oberklütz");
break;
}
case 100366:
{
returnValue = F("Feldweg nach Stangendorf");
break;
}
case 100367:
{
returnValue = F("Feldweg zur Leiblach");
break;
}
case 100368:
{
returnValue = F("Feldweg-Ausbau");
break;
}
case 100369:
{
returnValue = F("Feldweide");
break;
}
case 100370:
{
returnValue = F("Feldweidweg");
break;
}
case 100371:
{
returnValue = F("Feldweiher");
break;
}
case 100372:
{
returnValue = F("Feldwicker Weg");
break;
}
case 100373:
{
returnValue = F("Feldwies");
break;
}
case 100374:
{
returnValue = F("Feldwiese");
break;
}
case 100375:
{
returnValue = F("Feldwiesen");
break;
}
case 100376:
{
returnValue = F("Feldwiesenstr.");
break;
}
case 100377:
{
returnValue = F("Feldwiesenweg");
break;
}
case 100378:
{
returnValue = F("Feldwieser Str.");
break;
}
case 100379:
{
returnValue = F("Feldwingert");
break;
}
case 100380:
{
returnValue = F("Feldwinkel");
break;
}
case 100381:
{
returnValue = F("Feldwörthstr.");
break;
}
case 100382:
{
returnValue = F("Feldzaunweg");
break;
}
case 100383:
{
returnValue = F("Feldzeugmeisterweg");
break;
}
case 100384:
{
returnValue = F("Feldzufahrt");
break;
}
case 100385:
{
returnValue = F("Feldäcker");
break;
}
case 100386:
{
returnValue = F("Feldäckerstr.");
break;
}
case 100387:
{
returnValue = F("Feldöd");
break;
}
case 100388:
{
returnValue = F("Felgeleber Str.");
break;
}
case 100389:
{
returnValue = F("Felgendobelweg");
break;
}
case 100390:
{
returnValue = F("Felgenhauerstr.");
break;
}
case 100391:
{
returnValue = F("Felgenhofstich");
break;
}
case 100392:
{
returnValue = F("Felgenhofstr.");
break;
}
case 100393:
{
returnValue = F("Felgenstr.");
break;
}
case 100394:
{
returnValue = F("Felgentor");
break;
}
case 100395:
{
returnValue = F("Felgentreuer Dorfstr.");
break;
}
case 100396:
{
returnValue = F("Felgentreuer Str.");
break;
}
case 100397:
{
returnValue = F("Felgentreustr.");
break;
}
case 100398:
{
returnValue = F("Felgenwaldkopfweg");
break;
}
case 100399:
{
returnValue = F("Felgenweg");
break;
}
case 100400:
{
returnValue = F("Felheuerstr.");
break;
}
case 100401:
{
returnValue = F("Felicitas-Rose-Str.");
break;
}
case 100402:
{
returnValue = F("Felicitas-Rose-Weg");
break;
}
case 100403:
{
returnValue = F("Felicitas-Zeller-Staffel");
break;
}
case 100404:
{
returnValue = F("Felicitasstr.");
break;
}
case 100405:
{
returnValue = F("Felicitasweg");
break;
}
case 100406:
{
returnValue = F("Felix-Anton-Blau-Str.");
break;
}
case 100407:
{
returnValue = F("Felix-Auerbach-Str.");
break;
}
case 100408:
{
returnValue = F("Felix-Blass-Str.");
break;
}
case 100409:
{
returnValue = F("Felix-Blumenfeld-Str.");
break;
}
case 100410:
{
returnValue = F("Felix-Burda-Park");
break;
}
case 100411:
{
returnValue = F("Felix-Bürgers-Str.");
break;
}
case 100412:
{
returnValue = F("Felix-Dahn-Str.");
break;
}
case 100413:
{
returnValue = F("Felix-Dahn-Weg");
break;
}
case 100414:
{
returnValue = F("Felix-Dittmar-Weg");
break;
}
case 100415:
{
returnValue = F("Felix-Faller-Weg");
break;
}
case 100416:
{
returnValue = F("Felix-Fechenbach-Str.");
break;
}
case 100417:
{
returnValue = F("Felix-Fraling-Str.");
break;
}
case 100418:
{
returnValue = F("Felix-Georgi-Weg");
break;
}
case 100419:
{
returnValue = F("Felix-Gürtler-Str.");
break;
}
case 100420:
{
returnValue = F("Felix-Han-Str.");
break;
}
case 100421:
{
returnValue = F("Felix-Hausdorff-Str.");
break;
}
case 100422:
{
returnValue = F("Felix-Hollenberg-Weg");
break;
}
case 100423:
{
returnValue = F("Felix-Hölzl-Str.");
break;
}
case 100424:
{
returnValue = F("Felix-Kempf-Str.");
break;
}
case 100425:
{
returnValue = F("Felix-Klein-Str.");
break;
}
case 100426:
{
returnValue = F("Felix-Klipstein-Weg");
break;
}
case 100427:
{
returnValue = F("Felix-Korum-Str.");
break;
}
case 100428:
{
returnValue = F("Felix-Kracht-Str.");
break;
}
case 100429:
{
returnValue = F("Felix-Kuhn-Steig");
break;
}
case 100430:
{
returnValue = F("Felix-Lahnstein-Str.");
break;
}
case 100431:
{
returnValue = F("Felix-Lohrmann-Weg");
break;
}
case 100432:
{
returnValue = F("Felix-Löwenstein-Weg");
break;
}
case 100433:
{
returnValue = F("Felix-Mauersberger-Str.");
break;
}
case 100434:
{
returnValue = F("Felix-Meindl-Weg");
break;
}
case 100435:
{
returnValue = F("Felix-Mendelssohn-Str.");
break;
}
case 100436:
{
returnValue = F("Felix-Mendelssohn-Weg");
break;
}
case 100437:
{
returnValue = F("Felix-Mottl-Str.");
break;
}
case 100438:
{
returnValue = F("Felix-Müller-Weg");
break;
}
case 100439:
{
returnValue = F("Felix-Nussbaum-Str.");
break;
}
case 100440:
{
returnValue = F("Felix-Nussbaum-Weg");
break;
}
case 100441:
{
returnValue = F("Felix-Oberborbeck-Str.");
break;
}
case 100442:
{
returnValue = F("Felix-Platter-Weg");
break;
}
case 100443:
{
returnValue = F("Felix-Pusch-Str.");
break;
}
case 100444:
{
returnValue = F("Felix-Roeloffs-Str.");
break;
}
case 100445:
{
returnValue = F("Felix-Rohde-Weg");
break;
}
case 100446:
{
returnValue = F("Felix-Rütten-Str.");
break;
}
case 100447:
{
returnValue = F("Felix-Scharf-Str.");
break;
}
case 100448:
{
returnValue = F("Felix-Schleicher-Str.");
break;
}
case 100449:
{
returnValue = F("Felix-Schulz-Str.");
break;
}
case 100450:
{
returnValue = F("Felix-Seufert-Str.");
break;
}
case 100451:
{
returnValue = F("Felix-Stillfried-Str.");
break;
}
case 100452:
{
returnValue = F("Felix-Timmermans-Str.");
break;
}
case 100453:
{
returnValue = F("Felix-Tonnar-Str.");
break;
}
case 100454:
{
returnValue = F("Felix-Uhl-Weg");
break;
}
case 100455:
{
returnValue = F("Felix-Walter-Str.");
break;
}
case 100456:
{
returnValue = F("Felix-Wankel-Ring");
break;
}
case 100457:
{
returnValue = F("Felix-Wankel-Str.");
break;
}
case 100458:
{
returnValue = F("Felix-Weise-Str.");
break;
}
case 100459:
{
returnValue = F("Felix-Wiesner-Str.");
break;
}
case 100460:
{
returnValue = F("Felix-Wilhelm-Weg");
break;
}
case 100461:
{
returnValue = F("Felix-von-Eckardt-Str.");
break;
}
case 100462:
{
returnValue = F("Felix-von-Gruner-Str.");
break;
}
case 100463:
{
returnValue = F("Felix-von-Roll-Str.");
break;
}
case 100464:
{
returnValue = F("Felixgarten");
break;
}
case 100465:
{
returnValue = F("Felixstowestr.");
break;
}
case 100466:
{
returnValue = F("Felixstr.");
break;
}
case 100467:
{
returnValue = F("Felixweg");
break;
}
case 100468:
{
returnValue = F("Felixzeche");
break;
}
case 100469:
{
returnValue = F("Felizenzeller Str.");
break;
}
case 100470:
{
returnValue = F("Felizitas-Massenkeil-Str.");
break;
}
case 100471:
{
returnValue = F("Felka-Platek-Str.");
break;
}
case 100472:
{
returnValue = F("Felkendorfer Str.");
break;
}
case 100473:
{
returnValue = F("Felkestr.");
break;
}
case 100474:
{
returnValue = F("Felkeweg");
break;
}
case 100475:
{
returnValue = F("Fell");
break;
}
case 100476:
{
returnValue = F("Fellach");
break;
}
case 100477:
{
returnValue = F("Fellacher Str.");
break;
}
case 100478:
{
returnValue = F("Fellackerstr.");
break;
}
case 100479:
{
returnValue = F("Fellage");
break;
}
case 100480:
{
returnValue = F("Fellage Hagen");
break;
}
case 100481:
{
returnValue = F("Fellandsweg");
break;
}
case 100482:
{
returnValue = F("Fellastr.");
break;
}
case 100483:
{
returnValue = F("Fellbacher Str.");
break;
}
case 100484:
{
returnValue = F("Fellbacher Weg");
break;
}
case 100485:
{
returnValue = F("Fellbachstr.");
break;
}
case 100486:
{
returnValue = F("Fellbergweg");
break;
}
case 100487:
{
returnValue = F("Felldorfer Str.");
break;
}
case 100488:
{
returnValue = F("Fellehofgasse");
break;
}
case 100489:
{
returnValue = F("Felleisenweg");
break;
}
case 100490:
{
returnValue = F("Fellenbachstr.");
break;
}
case 100491:
{
returnValue = F("Fellenberg");
break;
}
case 100492:
{
returnValue = F("Fellenbergstr.");
break;
}
case 100493:
{
returnValue = F("Fellenbergweg");
break;
}
case 100494:
{
returnValue = F("Fellendsweg");
break;
}
case 100495:
{
returnValue = F("Fellener Str.");
break;
}
case 100496:
{
returnValue = F("Fellener Weg");
break;
}
case 100497:
{
returnValue = F("Fellensiekstr.");
break;
}
case 100498:
{
returnValue = F("Fellenweg");
break;
}
case 100499:
{
returnValue = F("Feller Gärten");
break;
}
case 100500:
{
returnValue = F("Feller Hof");
break;
}
case 100501:
{
returnValue = F("Feller Str.");
break;
}
case 100502:
{
returnValue = F("Feller Weg");
break;
}
case 100503:
{
returnValue = F("Fellerbachstr.");
break;
}
case 100504:
{
returnValue = F("Fellerdillner Str.");
break;
}
case 100505:
{
returnValue = F("Fellerer");
break;
}
case 100506:
{
returnValue = F("Fellererstr.");
break;
}
case 100507:
{
returnValue = F("Fellerfahrt");
break;
}
case 100508:
{
returnValue = F("Fellerhye");
break;
}
case 100509:
{
returnValue = F("Fellerhöfe");
break;
}
case 100510:
{
returnValue = F("Fellerhöfer Weg");
break;
}
case 100511:
{
returnValue = F("Fellericher Mühle");
break;
}
case 100512:
{
returnValue = F("Fellericher Str.");
break;
}
case 100513:
{
returnValue = F("Fellersborn");
break;
}
case 100514:
{
returnValue = F("Fellerstr.");
break;
}
case 100515:
{
returnValue = F("Fellertstr.");
break;
}
case 100516:
{
returnValue = F("Fellerweg");
break;
}
case 100517:
{
returnValue = F("Fellgiebelstr.");
break;
}
case 100518:
{
returnValue = F("Fellhammerstr.");
break;
}
case 100519:
{
returnValue = F("Fellheim – Kellmünz");
break;
}
case 100520:
{
returnValue = F("Fellheimer Str.");
break;
}
case 100521:
{
returnValue = F("Fellheimer Weg");
break;
}
case 100522:
{
returnValue = F("Fellhornstr.");
break;
}
case 100523:
{
returnValue = F("Fellhornweg");
break;
}
case 100524:
{
returnValue = F("Fellhusen");
break;
}
case 100525:
{
returnValue = F("Fellingerbergstr.");
break;
}
case 100526:
{
returnValue = F("Fellingerstr.");
break;
}
case 100527:
{
returnValue = F("Fellinghausener Str.");
break;
}
case 100528:
{
returnValue = F("Fellingshäuser Str.");
break;
}
case 100529:
{
returnValue = F("Fellitz-Hallig");
break;
}
case 100530:
{
returnValue = F("Fellmannweg");
break;
}
case 100531:
{
returnValue = F("Fellmerstr.");
break;
}
case 100532:
{
returnValue = F("Fellmühlenweg");
break;
}
case 100533:
{
returnValue = F("Fellnerstr.");
break;
}
case 100534:
{
returnValue = F("Fellweg");
break;
}
case 100535:
{
returnValue = F("Fellwiesenweg");
break;
}
case 100536:
{
returnValue = F("Felmer Str.");
break;
}
case 100537:
{
returnValue = F("Felmer Weg");
break;
}
case 100538:
{
returnValue = F("Felmicke");
break;
}
case 100539:
{
returnValue = F("Felmyweg");
break;
}
case 100540:
{
returnValue = F("Fels");
break;
}
case 100541:
{
returnValue = F("Fels-Loh-Str.");
break;
}
case 100542:
{
returnValue = F("Felsackerstr.");
break;
}
case 100543:
{
returnValue = F("Felsalbstr.");
break;
}
case 100544:
{
returnValue = F("Felsbachstr.");
break;
}
case 100545:
{
returnValue = F("Felsbachweg");
break;
}
case 100546:
{
returnValue = F("Felsberger Str.");
break;
}
case 100547:
{
returnValue = F("Felsberger Weg");
break;
}
case 100548:
{
returnValue = F("Felsbergerhof");
break;
}
case 100549:
{
returnValue = F("Felsbergstr.");
break;
}
case 100550:
{
returnValue = F("Felsbergweg");
break;
}
case 100551:
{
returnValue = F("Felsburgstr.");
break;
}
case 100552:
{
returnValue = F("Felschbachhof");
break;
}
case 100553:
{
returnValue = F("Felschers Kamp");
break;
}
case 100554:
{
returnValue = F("Felseck");
break;
}
case 100555:
{
returnValue = F("Felseckerstr.");
break;
}
case 100556:
{
returnValue = F("Felseleweg");
break;
}
case 100557:
{
returnValue = F("Felsenauer Str.");
break;
}
case 100558:
{
returnValue = F("Felsenbachstr.");
break;
}
case 100559:
{
returnValue = F("Felsenberg");
break;
}
case 100560:
{
returnValue = F("Felsenbergstr.");
break;
}
case 100561:
{
returnValue = F("Felsenbergweg");
break;
}
case 100562:
{
returnValue = F("Felsenbirnenstr.");
break;
}
case 100563:
{
returnValue = F("Felsenbirnenweg");
break;
}
case 100564:
{
returnValue = F("Felsenblick");
break;
}
case 100565:
{
returnValue = F("Felsenbruch");
break;
}
case 100566:
{
returnValue = F("Felsenbrunnenstr.");
break;
}
case 100567:
{
returnValue = F("Felsenbrunnental");
break;
}
case 100568:
{
returnValue = F("Felsenbrunnerstr.");
break;
}
case 100569:
{
returnValue = F("Felsenbuamhaus");
break;
}
case 100570:
{
returnValue = F("Felsenbuck");
break;
}
case 100571:
{
returnValue = F("Felsenburg");
break;
}
case 100572:
{
returnValue = F("Felsenburgredder");
break;
}
case 100573:
{
returnValue = F("Felsenburgstr.");
break;
}
case 100574:
{
returnValue = F("Felsenburgweg");
break;
}
case 100575:
{
returnValue = F("Felsener Feldweg");
break;
}
case 100576:
{
returnValue = F("Felsener Höhe");
break;
}
case 100577:
{
returnValue = F("Felsener Str.");
break;
}
case 100578:
{
returnValue = F("Felsener Weg");
break;
}
case 100579:
{
returnValue = F("Felsengarten");
break;
}
case 100580:
{
returnValue = F("Felsengarten Sanspareil");
break;
}
case 100581:
{
returnValue = F("Felsengartenstr.");
break;
}
case 100582:
{
returnValue = F("Felsengartenweg");
break;
}
case 100583:
{
returnValue = F("Felsengasse");
break;
}
case 100584:
{
returnValue = F("Felsengeistweg");
break;
}
case 100585:
{
returnValue = F("Felsengrubweg");
break;
}
case 100586:
{
returnValue = F("Felsengrund");
break;
}
case 100587:
{
returnValue = F("Felsengrundweg");
break;
}
case 100588:
{
returnValue = F("Felsenhagener Str.");
break;
}
case 100589:
{
returnValue = F("Felsenhagener Weg");
break;
}
case 100590:
{
returnValue = F("Felsenhauweg");
break;
}
case 100591:
{
returnValue = F("Felsenhof");
break;
}
case 100592:
{
returnValue = F("Felsenhäusl");
break;
}
case 100593:
{
returnValue = F("Felsenkamp");
break;
}
case 100594:
{
returnValue = F("Felsenkanzel Rundweg");
break;
}
case 100595:
{
returnValue = F("Felsenkeller");
break;
}
case 100596:
{
returnValue = F("Felsenkeller-Park");
break;
}
case 100597:
{
returnValue = F("Felsenkellergasse");
break;
}
case 100598:
{
returnValue = F("Felsenkellerhohle");
break;
}
case 100599:
{
returnValue = F("Felsenkellerpromenade");
break;
}
case 100600:
{
returnValue = F("Felsenkellerstr.");
break;
}
case 100601:
{
returnValue = F("Felsenkellerweg");
break;
}
case 100602:
{
returnValue = F("Felsenkirchstr.");
break;
}
case 100603:
{
returnValue = F("Felsenklingenweg");
break;
}
case 100604:
{
returnValue = F("Felsenkluftweg");
break;
}
case 100605:
{
returnValue = F("Felsenmeer-Aukopfweg");
break;
}
case 100606:
{
returnValue = F("Felsenmeerstr.");
break;
}
case 100607:
{
returnValue = F("Felsenmeerweg");
break;
}
case 100608:
{
returnValue = F("Felsenmühlstr.");
break;
}
case 100609:
{
returnValue = F("Felsennestweg");
break;
}
case 100610:
{
returnValue = F("Felsenpfad");
break;
}
case 100611:
{
returnValue = F("Felsenrade");
break;
}
case 100612:
{
returnValue = F("Felsenrain");
break;
}
case 100613:
{
returnValue = F("Felsenrech");
break;
}
case 100614:
{
returnValue = F("Felsenring");
break;
}
case 100615:
{
returnValue = F("Felsensteig");
break;
}
case 100616:
{
returnValue = F("Felsensteinstr.");
break;
}
case 100617:
{
returnValue = F("Felsenstiege");
break;
}
case 100618:
{
returnValue = F("Felsenstr.");
break;
}
case 100619:
{
returnValue = F("Felsental");
break;
}
case 100620:
{
returnValue = F("Felsentalerstr.");
break;
}
case 100621:
{
returnValue = F("Felsentalstr.");
break;
}
case 100622:
{
returnValue = F("Felsenteichweg");
break;
}
case 100623:
{
returnValue = F("Felsenwaldweg");
break;
}
case 100624:
{
returnValue = F("Felsenwanderweg");
break;
}
case 100625:
{
returnValue = F("Felsenweg");
break;
}
case 100626:
{
returnValue = F("Felsenwässerle");
break;
}
case 100627:
{
returnValue = F("Felsenäcker");
break;
}
case 100628:
{
returnValue = F("Felser");
break;
}
case 100629:
{
returnValue = F("Felserstr.");
break;
}
case 100630:
{
returnValue = F("Felserweg");
break;
}
case 100631:
{
returnValue = F("Felsfeldstr.");
break;
}
case 100632:
{
returnValue = F("Felsformationen");
break;
}
case 100633:
{
returnValue = F("Felsgartenstr.");
break;
}
case 100634:
{
returnValue = F("Felsgässele");
break;
}
case 100635:
{
returnValue = F("Felshütte");
break;
}
case 100636:
{
returnValue = F("Felsingstr.");
break;
}
case 100637:
{
returnValue = F("Felskamp");
break;
}
case 100638:
{
returnValue = F("Felsleite");
break;
}
case 100639:
{
returnValue = F("Felsmannstr.");
break;
}
case 100640:
{
returnValue = F("Felsmühle");
break;
}
case 100641:
{
returnValue = F("Felsmühlstr.");
break;
}
case 100642:
{
returnValue = F("Felsnerstr.");
break;
}
case 100643:
{
returnValue = F("Felspassage");
break;
}
case 100644:
{
returnValue = F("Felsspalte");
break;
}
case 100645:
{
returnValue = F("Felssteinpflaster klein");
break;
}
case 100646:
{
returnValue = F("Felsstr.");
break;
}
case 100647:
{
returnValue = F("Felstehausen");
break;
}
case 100648:
{
returnValue = F("Felsterrasse");
break;
}
case 100649:
{
returnValue = F("Felsum");
break;
}
case 100650:
{
returnValue = F("Felsweg");
break;
}
case 100651:
{
returnValue = F("Felsäckerweg");
break;
}
case 100652:
{
returnValue = F("Feltenbergweg");
break;
}
case 100653:
{
returnValue = F("Feltenstr.");
break;
}
case 100654:
{
returnValue = F("Feltgenstr.");
break;
}
case 100655:
{
returnValue = F("Feltmannweg");
break;
}
case 100656:
{
returnValue = F("Fembach");
break;
}
case 100657:
{
returnValue = F("Fembachstr.");
break;
}
case 100658:
{
returnValue = F("Femberger Str.");
break;
}
case 100659:
{
returnValue = F("Femelwaldweg");
break;
}
case 100660:
{
returnValue = F("Femestr.");
break;
}
case 100661:
{
returnValue = F("Femeweg");
break;
}
case 100662:
{
returnValue = F("Femmestr.");
break;
}
case 100663:
{
returnValue = F("Fempelweg");
break;
}
case 100664:
{
returnValue = F("Femstr.");
break;
}
case 100665:
{
returnValue = F("Fenchelring");
break;
}
case 100666:
{
returnValue = F("Fenchelstr.");
break;
}
case 100667:
{
returnValue = F("Fenchelweg");
break;
}
case 100668:
{
returnValue = F("Fendelsring");
break;
}
case 100669:
{
returnValue = F("Fendelstr.");
break;
}
case 100670:
{
returnValue = F("Fendelweg");
break;
}
case 100671:
{
returnValue = F("Fenderstr.");
break;
}
case 100672:
{
returnValue = F("Fenderweg");
break;
}
case 100673:
{
returnValue = F("Fendrichstr.");
break;
}
case 100674:
{
returnValue = F("Fendrichweg");
break;
}
case 100675:
{
returnValue = F("Fendtenweg");
break;
}
case 100676:
{
returnValue = F("Fendter Str.");
break;
}
case 100677:
{
returnValue = F("Fendtgasse");
break;
}
case 100678:
{
returnValue = F("Fendtgäßchen");
break;
}
case 100679:
{
returnValue = F("Fendtstr.");
break;
}
case 100680:
{
returnValue = F("Fenebergstr.");
break;
}
case 100681:
{
returnValue = F("Feng- Shui- Kurpark");
break;
}
case 100682:
{
returnValue = F("Fenitzerplatz");
break;
}
case 100683:
{
returnValue = F("Fenitzerstr.");
break;
}
case 100684:
{
returnValue = F("Fenker Heideweg");
break;
}
case 100685:
{
returnValue = F("Fenkestr.");
break;
}
case 100686:
{
returnValue = F("Fenkeweg");
break;
}
case 100687:
{
returnValue = F("Fenland-Ring");
break;
}
case 100688:
{
returnValue = F("Fenn");
break;
}
case 100689:
{
returnValue = F("Fenna-Weg");
break;
}
case 100690:
{
returnValue = F("Fennastr.");
break;
}
case 100691:
{
returnValue = F("Fennbergweg");
break;
}
case 100692:
{
returnValue = F("Fennbusch");
break;
}
case 100693:
{
returnValue = F("Fennebergstr.");
break;
}
case 100694:
{
returnValue = F("Fennekerstr.");
break;
}
case 100695:
{
returnValue = F("Fennen");
break;
}
case 100696:
{
returnValue = F("Fennendamm");
break;
}
case 100697:
{
returnValue = F("Fennenstr.");
break;
}
case 100698:
{
returnValue = F("Fennenweg");
break;
}
case 100699:
{
returnValue = F("Fenner Str.");
break;
}
case 100700:
{
returnValue = F("Fennerweg");
break;
}
case 100701:
{
returnValue = F("Fenneweg");
break;
}
case 100702:
{
returnValue = F("Fenngasse");
break;
}
case 100703:
{
returnValue = F("Fennhook");
break;
}
case 100704:
{
returnValue = F("Fennhuser Str.");
break;
}
case 100705:
{
returnValue = F("Fennstr.");
break;
}
case 100706:
{
returnValue = F("Fennweg");
break;
}
case 100707:
{
returnValue = F("Fenschenrain");
break;
}
case 100708:
{
returnValue = F("Fensdorfer Weg");
break;
}
case 100709:
{
returnValue = F("Fensengrundweg");
break;
}
case 100710:
{
returnValue = F("Fenskestr.");
break;
}
case 100711:
{
returnValue = F("Fensterbachweg");
break;
}
case 100712:
{
returnValue = F("Fensterbergstr.");
break;
}
case 100713:
{
returnValue = F("Fensterchen");
break;
}
case 100714:
{
returnValue = F("Fensterle");
break;
}
case 100715:
{
returnValue = F("Fensterstr.");
break;
}
case 100716:
{
returnValue = F("Fensterweg");
break;
}
case 100717:
{
returnValue = F("Fensvogel");
break;
}
case 100718:
{
returnValue = F("Fentbacher Str.");
break;
}
case 100719:
{
returnValue = F("Fentberg");
break;
}
case 100720:
{
returnValue = F("Fentschstr.");
break;
}
case 100721:
{
returnValue = F("Fenzelstr.");
break;
}
case 100722:
{
returnValue = F("Fenzlweg");
break;
}
case 100723:
{
returnValue = F("Feodor-Lynen-Steig");
break;
}
case 100724:
{
returnValue = F("Feodor-Lynen-Str.");
break;
}
case 100725:
{
returnValue = F("Feodorapark");
break;
}
case 100726:
{
returnValue = F("Feodoraweg");
break;
}
case 100727:
{
returnValue = F("Feodorenstr.");
break;
}
case 100728:
{
returnValue = F("Feodorstr.");
break;
}
case 100729:
{
returnValue = F("Fer A Coudre");
break;
}
case 100730:
{
returnValue = F("Ferbachstr.");
break;
}
case 100731:
{
returnValue = F("Ferberberg");
break;
}
case 100732:
{
returnValue = F("Ferbergasse");
break;
}
case 100733:
{
returnValue = F("Ferberpark");
break;
}
case 100734:
{
returnValue = F("Ferbers Anbau");
break;
}
case 100735:
{
returnValue = F("Ferberstr.");
break;
}
case 100736:
{
returnValue = F("Ferbigweg");
break;
}
case 100737:
{
returnValue = F("Ferbitzer Weg");
break;
}
case 100738:
{
returnValue = F("Ferbornstr.");
break;
}
case 100739:
{
returnValue = F("Ferchastr.");
break;
}
case 100740:
{
returnValue = F("Ferchelsstr.");
break;
}
case 100741:
{
returnValue = F("Ferchenbachstr.");
break;
}
case 100742:
{
returnValue = F("Ferchensee");
break;
}
case 100743:
{
returnValue = F("Ferchenseestr.");
break;
}
case 100744:
{
returnValue = F("Ferchenweg");
break;
}
case 100745:
{
returnValue = F("Fercher Bergstr.");
break;
}
case 100746:
{
returnValue = F("Fercher Heideweg");
break;
}
case 100747:
{
returnValue = F("Fercher Str.");
break;
}
case 100748:
{
returnValue = F("Fercher Uferweg");
break;
}
case 100749:
{
returnValue = F("Fercher Waldstr.");
break;
}
case 100750:
{
returnValue = F("Fercher Weg");
break;
}
case 100751:
{
returnValue = F("Ferchesarer Str.");
break;
}
case 100752:
{
returnValue = F("Ferchesarer Weg");
break;
}
case 100753:
{
returnValue = F("Ferchlander Weg");
break;
}
case 100754:
{
returnValue = F("Ferchlipp");
break;
}
case 100755:
{
returnValue = F("Ferchländer Weg");
break;
}
case 100756:
{
returnValue = F("Ferd-Weiler-Str.");
break;
}
case 100757:
{
returnValue = F("Ferdelmannstr.");
break;
}
case 100758:
{
returnValue = F("Ferdi-Bruckes-Str.");
break;
}
case 100759:
{
returnValue = F("Ferdinand-Abt-Str.");
break;
}
case 100760:
{
returnValue = F("Ferdinand-Adolph-Lange-Platz");
break;
}
case 100761:
{
returnValue = F("Ferdinand-Alzer-Str.");
break;
}
case 100762:
{
returnValue = F("Ferdinand-Anton-Hiernle-Str.");
break;
}
case 100763:
{
returnValue = F("Ferdinand-Arauner-Str.");
break;
}
case 100764:
{
returnValue = F("Ferdinand-Aufschläger-Str.");
break;
}
case 100765:
{
returnValue = F("Ferdinand-Avenarius-Str.");
break;
}
case 100766:
{
returnValue = F("Ferdinand-Barth-Str.");
break;
}
case 100767:
{
returnValue = F("Ferdinand-Bauer-Str.");
break;
}
case 100768:
{
returnValue = F("Ferdinand-Baumer-Gasserl");
break;
}
case 100769:
{
returnValue = F("Ferdinand-Behr-Weg");
break;
}
case 100770:
{
returnValue = F("Ferdinand-Benz-Weg");
break;
}
case 100771:
{
returnValue = F("Ferdinand-Benzinger-Str.");
break;
}
case 100772:
{
returnValue = F("Ferdinand-Birgmann-Str.");
break;
}
case 100773:
{
returnValue = F("Ferdinand-Bonn-Str.");
break;
}
case 100774:
{
returnValue = F("Ferdinand-Brandes-Str.");
break;
}
case 100775:
{
returnValue = F("Ferdinand-Brandt-Str.");
break;
}
case 100776:
{
returnValue = F("Ferdinand-Braun-Park (ehem. Städt. Friedhof 1877 - 1931)");
break;
}
case 100777:
{
returnValue = F("Ferdinand-Braun-Str.");
break;
}
case 100778:
{
returnValue = F("Ferdinand-Brütt-Weg");
break;
}
case 100779:
{
returnValue = F("Ferdinand-Chelius-Str.");
break;
}
case 100780:
{
returnValue = F("Ferdinand-Christian-Baur-Str.");
break;
}
case 100781:
{
returnValue = F("Ferdinand-Creutz-Str.");
break;
}
case 100782:
{
returnValue = F("Ferdinand-Culmann-Str.");
break;
}
case 100783:
{
returnValue = F("Ferdinand-Dam-Str.");
break;
}
case 100784:
{
returnValue = F("Ferdinand-Dax-Str.");
break;
}
case 100785:
{
returnValue = F("Ferdinand-Deiters-Ring");
break;
}
case 100786:
{
returnValue = F("Ferdinand-Dietz-Str.");
break;
}
case 100787:
{
returnValue = F("Ferdinand-Dietzsch-Str.");
break;
}
case 100788:
{
returnValue = F("Ferdinand-Dircks-Weg");
break;
}
case 100789:
{
returnValue = F("Ferdinand-Dirichs-Str.");
break;
}
case 100790:
{
returnValue = F("Ferdinand-Dost-Str.");
break;
}
case 100791:
{
returnValue = F("Ferdinand-Dreier-Weg");
break;
}
case 100792:
{
returnValue = F("Ferdinand-Dünkel-Str.");
break;
}
case 100793:
{
returnValue = F("Ferdinand-Egelinski-Str.");
break;
}
case 100794:
{
returnValue = F("Ferdinand-Ehlers-Str.");
break;
}
case 100795:
{
returnValue = F("Ferdinand-Ernst-Platz");
break;
}
case 100796:
{
returnValue = F("Ferdinand-Erpenbeck-Str.");
break;
}
case 100797:
{
returnValue = F("Ferdinand-Feldigl-Str.");
break;
}
case 100798:
{
returnValue = F("Ferdinand-Flinsch-Str.");
break;
}
case 100799:
{
returnValue = F("Ferdinand-Freiherr-von-Raesfeld-Weg");
break;
}
case 100800:
{
returnValue = F("Ferdinand-Freiligrath-Str.");
break;
}
case 100801:
{
returnValue = F("Ferdinand-Freiligrath-Weg");
break;
}
case 100802:
{
returnValue = F("Ferdinand-Friedensburg-Str.");
break;
}
case 100803:
{
returnValue = F("Ferdinand-Friedrich-Str.");
break;
}
case 100804:
{
returnValue = F("Ferdinand-Galle-Str.");
break;
}
case 100805:
{
returnValue = F("Ferdinand-Gerstung-Platz");
break;
}
case 100806:
{
returnValue = F("Ferdinand-Gies-Str.");
break;
}
case 100807:
{
returnValue = F("Ferdinand-Gruner-Str.");
break;
}
case 100808:
{
returnValue = F("Ferdinand-Gröber-Str.");
break;
}
case 100809:
{
returnValue = F("Ferdinand-Haas-Str.");
break;
}
case 100810:
{
returnValue = F("Ferdinand-Hahn-Str.");
break;
}
case 100811:
{
returnValue = F("Ferdinand-Halbeck-Str.");
break;
}
case 100812:
{
returnValue = F("Ferdinand-Hanauer-Str.");
break;
}
case 100813:
{
returnValue = F("Ferdinand-Harms-Str.");
break;
}
case 100814:
{
returnValue = F("Ferdinand-Hasenbalg-Str.");
break;
}
case 100815:
{
returnValue = F("Ferdinand-Heil-Str.");
break;
}
case 100816:
{
returnValue = F("Ferdinand-Henze-Str.");
break;
}
case 100817:
{
returnValue = F("Ferdinand-Heyl-Str.");
break;
}
case 100818:
{
returnValue = F("Ferdinand-Hiller-Weg");
break;
}
case 100819:
{
returnValue = F("Ferdinand-Hofheinz-Weg");
break;
}
case 100820:
{
returnValue = F("Ferdinand-Hohenstein-Str.");
break;
}
case 100821:
{
returnValue = F("Ferdinand-Hoser-Str.");
break;
}
case 100822:
{
returnValue = F("Ferdinand-Hotz-Str.");
break;
}
case 100823:
{
returnValue = F("Ferdinand-Häusler-Str.");
break;
}
case 100824:
{
returnValue = F("Ferdinand-Jessen-Str.");
break;
}
case 100825:
{
returnValue = F("Ferdinand-Joly-Weg");
break;
}
case 100826:
{
returnValue = F("Ferdinand-Jorißen-Str.");
break;
}
case 100827:
{
returnValue = F("Ferdinand-Josef-Remlinger-Str.");
break;
}
case 100828:
{
returnValue = F("Ferdinand-Jost-Str.");
break;
}
case 100829:
{
returnValue = F("Ferdinand-Jühlke-Str.");
break;
}
case 100830:
{
returnValue = F("Ferdinand-Keller-Str.");
break;
}
case 100831:
{
returnValue = F("Ferdinand-Kleibrink-Weg");
break;
}
case 100832:
{
returnValue = F("Ferdinand-Knauer-Str.");
break;
}
case 100833:
{
returnValue = F("Ferdinand-Kobell-Str.");
break;
}
case 100834:
{
returnValue = F("Ferdinand-Koch-Str.");
break;
}
case 100835:
{
returnValue = F("Ferdinand-Kopf-Str.");
break;
}
case 100836:
{
returnValue = F("Ferdinand-Kopf-Weg");
break;
}
case 100837:
{
returnValue = F("Ferdinand-Kortmann-Str.");
break;
}
case 100838:
{
returnValue = F("Ferdinand-Kraus-Str.");
break;
}
case 100839:
{
returnValue = F("Ferdinand-Krausen-Weg");
break;
}
case 100840:
{
returnValue = F("Ferdinand-Krüger-Str.");
break;
}
case 100841:
{
returnValue = F("Ferdinand-Köhler-Str.");
break;
}
case 100842:
{
returnValue = F("Ferdinand-Königshofen-Str.");
break;
}
case 100843:
{
returnValue = F("Ferdinand-Küderli-Str.");
break;
}
case 100844:
{
returnValue = F("Ferdinand-Langenberg-Weg");
break;
}
case 100845:
{
returnValue = F("Ferdinand-Langer-Str.");
break;
}
case 100846:
{
returnValue = F("Ferdinand-Lasalle-Str.");
break;
}
case 100847:
{
returnValue = F("Ferdinand-Lassale-Str.");
break;
}
case 100848:
{
returnValue = F("Ferdinand-Lassalle-Siedlung");
break;
}
case 100849:
{
returnValue = F("Ferdinand-Lassalle-Str.");
break;
}
case 100850:
{
returnValue = F("Ferdinand-Lassalle-Weg");
break;
}
case 100851:
{
returnValue = F("Ferdinand-Lehner-Str.");
break;
}
case 100852:
{
returnValue = F("Ferdinand-Leitner-Steg");
break;
}
case 100853:
{
returnValue = F("Ferdinand-Lentjes-Str.");
break;
}
case 100854:
{
returnValue = F("Ferdinand-Maria-Str.");
break;
}
case 100855:
{
returnValue = F("Ferdinand-Meßmer-Str.");
break;
}
case 100856:
{
returnValue = F("Ferdinand-Miller-Str.");
break;
}
case 100857:
{
returnValue = F("Ferdinand-Mirwald-Str.");
break;
}
case 100858:
{
returnValue = F("Ferdinand-Möhler-Str.");
break;
}
case 100859:
{
returnValue = F("Ferdinand-Mülhens-Str.");
break;
}
case 100860:
{
returnValue = F("Ferdinand-Müller-Str.");
break;
}
case 100861:
{
returnValue = F("Ferdinand-Nebel-Str.");
break;
}
case 100862:
{
returnValue = F("Ferdinand-Neelsen-Str.");
break;
}
case 100863:
{
returnValue = F("Ferdinand-Neisser-Str.");
break;
}
case 100864:
{
returnValue = F("Ferdinand-Neumaier-Str.");
break;
}
case 100865:
{
returnValue = F("Ferdinand-Neumaier-Weg");
break;
}
case 100866:
{
returnValue = F("Ferdinand-Neumeyer-Weg");
break;
}
case 100867:
{
returnValue = F("Ferdinand-Nickl-Str.");
break;
}
case 100868:
{
returnValue = F("Ferdinand-Nickles-Str.");
break;
}
case 100869:
{
returnValue = F("Ferdinand-Pfeuffer-Str.");
break;
}
case 100870:
{
returnValue = F("Ferdinand-Poggel-Str.");
break;
}
case 100871:
{
returnValue = F("Ferdinand-Porsche-Ring");
break;
}
case 100872:
{
returnValue = F("Ferdinand-Porsche-Str.");
break;
}
case 100873:
{
returnValue = F("Ferdinand-Porsche-Weg");
break;
}
case 100874:
{
returnValue = F("Ferdinand-Puchert-Str.");
break;
}
case 100875:
{
returnValue = F("Ferdinand-Reber-Str.");
break;
}
case 100876:
{
returnValue = F("Ferdinand-Reich-Str.");
break;
}
case 100877:
{
returnValue = F("Ferdinand-Reitze-Weg");
break;
}
case 100878:
{
returnValue = F("Ferdinand-Reiß-Str.");
break;
}
case 100879:
{
returnValue = F("Ferdinand-Remy-Str.");
break;
}
case 100880:
{
returnValue = F("Ferdinand-Rhode-Str.");
break;
}
case 100881:
{
returnValue = F("Ferdinand-Richtberg-Str.");
break;
}
case 100882:
{
returnValue = F("Ferdinand-Riegelsberger-Str.");
break;
}
case 100883:
{
returnValue = F("Ferdinand-Ries-Str.");
break;
}
case 100884:
{
returnValue = F("Ferdinand-Rosner-Str.");
break;
}
case 100885:
{
returnValue = F("Ferdinand-Rott-Str.");
break;
}
case 100886:
{
returnValue = F("Ferdinand-Rudolf-Weg");
break;
}
case 100887:
{
returnValue = F("Ferdinand-Runge-Str.");
break;
}
case 100888:
{
returnValue = F("Ferdinand-Sauerbruch-Str.");
break;
}
case 100889:
{
returnValue = F("Ferdinand-Sauerbruch-Weg");
break;
}
case 100890:
{
returnValue = F("Ferdinand-Scheel-Ring");
break;
}
case 100891:
{
returnValue = F("Ferdinand-Schill-Str.");
break;
}
case 100892:
{
returnValue = F("Ferdinand-Schlemm-Str.");
break;
}
case 100893:
{
returnValue = F("Ferdinand-Schlotter-Str.");
break;
}
case 100894:
{
returnValue = F("Ferdinand-Schlufter-Str.");
break;
}
case 100895:
{
returnValue = F("Ferdinand-Schlögl-Weg");
break;
}
case 100896:
{
returnValue = F("Ferdinand-Schmitz-Str.");
break;
}
case 100897:
{
returnValue = F("Ferdinand-Schneider-Str.");
break;
}
case 100898:
{
returnValue = F("Ferdinand-Schrey-Str.");
break;
}
case 100899:
{
returnValue = F("Ferdinand-Schroeder-Str.");
break;
}
case 100900:
{
returnValue = F("Ferdinand-Schultz-Str.");
break;
}
case 100901:
{
returnValue = F("Ferdinand-Schumann-Str.");
break;
}
case 100902:
{
returnValue = F("Ferdinand-Schwarz-Str.");
break;
}
case 100903:
{
returnValue = F("Ferdinand-Schäfer-Str.");
break;
}
case 100904:
{
returnValue = F("Ferdinand-Schütte-Str.");
break;
}
case 100905:
{
returnValue = F("Ferdinand-Secker-Str.");
break;
}
case 100906:
{
returnValue = F("Ferdinand-Sickinger-Weg");
break;
}
case 100907:
{
returnValue = F("Ferdinand-Sommer-Str.");
break;
}
case 100908:
{
returnValue = F("Ferdinand-Spehr-Str.");
break;
}
case 100909:
{
returnValue = F("Ferdinand-Staatz-Str.");
break;
}
case 100910:
{
returnValue = F("Ferdinand-Steinbeis-Str.");
break;
}
case 100911:
{
returnValue = F("Ferdinand-Stieffell-Str.");
break;
}
case 100912:
{
returnValue = F("Ferdinand-Stoffel-Str.");
break;
}
case 100913:
{
returnValue = F("Ferdinand-Strahl-Str.");
break;
}
case 100914:
{
returnValue = F("Ferdinand-Stucker-Str.");
break;
}
case 100915:
{
returnValue = F("Ferdinand-Stuttmann-Str.");
break;
}
case 100916:
{
returnValue = F("Ferdinand-Stücker-Str.");
break;
}
case 100917:
{
returnValue = F("Ferdinand-Thomas-Weg");
break;
}
case 100918:
{
returnValue = F("Ferdinand-Thun-Str.");
break;
}
case 100919:
{
returnValue = F("Ferdinand-Tietz-Str.");
break;
}
case 100920:
{
returnValue = F("Ferdinand-Täfler-Str.");
break;
}
case 100921:
{
returnValue = F("Ferdinand-Tönnies-Str.");
break;
}
case 100922:
{
returnValue = F("Ferdinand-Waentig-Weg");
break;
}
case 100923:
{
returnValue = F("Ferdinand-Wagner-Str.");
break;
}
case 100924:
{
returnValue = F("Ferdinand-Wagner-Weg");
break;
}
case 100925:
{
returnValue = F("Ferdinand-Wahrendorff-Str.");
break;
}
case 100926:
{
returnValue = F("Ferdinand-Wallbrecht-Str.");
break;
}
case 100927:
{
returnValue = F("Ferdinand-Weerth-Str.");
break;
}
case 100928:
{
returnValue = F("Ferdinand-Weg");
break;
}
case 100929:
{
returnValue = F("Ferdinand-Weiler-Weg");
break;
}
case 100930:
{
returnValue = F("Ferdinand-Weiß-Str.");
break;
}
case 100931:
{
returnValue = F("Ferdinand-Werner-Str.");
break;
}
case 100932:
{
returnValue = F("Ferdinand-Wider-Str.");
break;
}
case 100933:
{
returnValue = F("Ferdinand-Wilhelm-Fricke-Weg");
break;
}
case 100934:
{
returnValue = F("Ferdinand-Wimmer-Platz");
break;
}
case 100935:
{
returnValue = F("Ferdinand-Winter-Weg");
break;
}
case 100936:
{
returnValue = F("Ferdinand-Wolf-Str.");
break;
}
case 100937:
{
returnValue = F("Ferdinand-Zeppelin-Str.");
break;
}
case 100938:
{
returnValue = F("Ferdinand-Zink-Str.");
break;
}
case 100939:
{
returnValue = F("Ferdinand-Zix-Weg");
break;
}
case 100940:
{
returnValue = F("Ferdinand-Zumpf-Str.");
break;
}
case 100941:
{
returnValue = F("Ferdinand-Zwack-Str.");
break;
}
case 100942:
{
returnValue = F("Ferdinand-von-Freiligrath-Str.");
break;
}
case 100943:
{
returnValue = F("Ferdinand-von-Lochow-Str.");
break;
}
case 100944:
{
returnValue = F("Ferdinand-von-Lüninck-Str.");
break;
}
case 100945:
{
returnValue = F("Ferdinand-von-Lüninck-Weg");
break;
}
case 100946:
{
returnValue = F("Ferdinand-von-Miller-Str.");
break;
}
case 100947:
{
returnValue = F("Ferdinand-von-Rayski-Platz");
break;
}
case 100948:
{
returnValue = F("Ferdinand-von-Schill-Str.");
break;
}
case 100949:
{
returnValue = F("Ferdinand-von-Schill-Weg");
break;
}
case 100950:
{
returnValue = F("Ferdinand-von-Steinbeis-Ring");
break;
}
case 100951:
{
returnValue = F("Ferdinand-von-Steinbeis-Str.");
break;
}
case 100952:
{
returnValue = F("Ferdinand-von-Stumm-Str.");
break;
}
case 100953:
{
returnValue = F("Ferdinand-von-Zeppelin-Str.");
break;
}
case 100954:
{
returnValue = F("Ferdinande-von-Brackel-Str.");
break;
}
case 100955:
{
returnValue = F("Ferdinandgasse");
break;
}
case 100956:
{
returnValue = F("Ferdinandhof");
break;
}
case 100957:
{
returnValue = F("Ferdinandsfelde");
break;
}
case 100958:
{
returnValue = F("Ferdinandshof");
break;
}
case 100959:
{
returnValue = F("Ferdinandshof - Sprengersfelde");
break;
}
case 100960:
{
returnValue = F("Ferdinandshorster Str.");
break;
}
case 100961:
{
returnValue = F("Ferdinandshöhe");
break;
}
case 100962:
{
returnValue = F("Ferdinandslust");
break;
}
case 100963:
{
returnValue = F("Ferdinandsplatz");
break;
}
case 100964:
{
returnValue = F("Ferdinandsteig");
break;
}
case 100965:
{
returnValue = F("Ferdinandstr.");
break;
}
case 100966:
{
returnValue = F("Ferdinandweg");
break;
}
case 100967:
{
returnValue = F("Ferdinantenstr.");
break;
}
case 100968:
{
returnValue = F("Ferdlsturz");
break;
}
case 100969:
{
returnValue = F("Fergengasse");
break;
}
case 100970:
{
returnValue = F("Fergergasse");
break;
}
case 100971:
{
returnValue = F("Fergersbergstr.");
break;
}
case 100972:
{
returnValue = F("Fergitzer Weg");
break;
}
case 100973:
{
returnValue = F("Ferienclub Maierhöfen");
break;
}
case 100974:
{
returnValue = F("Feriendamm");
break;
}
case 100975:
{
returnValue = F("Feriendorf");
break;
}
case 100976:
{
returnValue = F("Feriendorf Altes Land");
break;
}
case 100977:
{
returnValue = F("Feriendorf Schwarzholz");
break;
}
case 100978:
{
returnValue = F("Feriendorf Südstrand");
break;
}
case 100979:
{
returnValue = F("Feriendorf Ulrichsgrün");
break;
}
case 100980:
{
returnValue = F("Feriendorf Vielbrunn");
break;
}
case 100981:
{
returnValue = F("Feriendorf Wolfsried");
break;
}
case 100982:
{
returnValue = F("Feriendorfstr.");
break;
}
case 100983:
{
returnValue = F("Feriendorfweg");
break;
}
case 100984:
{
returnValue = F("Feriendämmel");
break;
}
case 100985:
{
returnValue = F("Ferieneck");
break;
}
case 100986:
{
returnValue = F("Feriengebiet");
break;
}
case 100987:
{
returnValue = F("Feriengebiet Hengemühlensee");
break;
}
case 100988:
{
returnValue = F("Ferienhausgebiet Bärenhecke");
break;
}
case 100989:
{
returnValue = F("Ferienhaussiedlung");
break;
}
case 100990:
{
returnValue = F("Ferienhausstr.");
break;
}
case 100991:
{
returnValue = F("Ferienheim Sandsee");
break;
}
case 100992:
{
returnValue = F("Ferienheimstr.");
break;
}
case 100993:
{
returnValue = F("Ferienheimweg");
break;
}
case 100994:
{
returnValue = F("Ferienidyll Seepferdchen");
break;
}
case 100995:
{
returnValue = F("Ferienpark");
break;
}
case 100996:
{
returnValue = F("Ferienpark Baumberge");
break;
}
case 100997:
{
returnValue = F("Ferienpark Burgblick");
break;
}
case 100998:
{
returnValue = F("Ferienpark Hüttstadl");
break;
}
case 100999:
{
returnValue = F("Ferienpark Jade");
break;
}
case 101000:
{
returnValue = F("Ferienpark Kevelaer");
break;
}
case 101001:
{
returnValue = F("Ferienpark Kronenburger See");
break;
}
case 101002:
{
returnValue = F("Ferienpark Wingertsberg");
break;
}
case 101003:
{
returnValue = F("Ferienpark im Dornsiek");
break;
}
case 101004:
{
returnValue = F("Ferienparkstr.");
break;
}
case 101005:
{
returnValue = F("Feriensiedlung");
break;
}
case 101006:
{
returnValue = F("Feriensiedlung Residenz");
break;
}
case 101007:
{
returnValue = F("Feriensiedlung Waldesruh");
break;
}
case 101008:
{
returnValue = F("Ferienstr.");
break;
}
case 101009:
{
returnValue = F("Ferienzentrum");
break;
}
case 101010:
{
returnValue = F("Ferigestr.");
break;
}
case 101011:
{
returnValue = F("Feringastr.");
break;
}
case 101012:
{
returnValue = F("Feringerweg");
break;
}
case 101013:
{
returnValue = F("Ferkelsheide");
break;
}
case 101014:
{
returnValue = F("Ferkelstieg");
break;
}
case 101015:
{
returnValue = F("Ferkenfeld");
break;
}
case 101016:
{
returnValue = F("Ferlingsweg");
break;
}
case 101017:
{
returnValue = F("Fermanagh-Weg");
break;
}
case 101018:
{
returnValue = F("Fermersleber Weg");
break;
}
case 101019:
{
returnValue = F("Fermiweg");
break;
}
case 101020:
{
returnValue = F("Fermke");
break;
}
case 101021:
{
returnValue = F("Fermoplatz");
break;
}
case 101022:
{
returnValue = F("Fern Street");
break;
}
case 101023:
{
returnValue = F("Fernabrünster Hauptstr.");
break;
}
case 101024:
{
returnValue = F("Fernabrünster Str.");
break;
}
case 101025:
{
returnValue = F("Fernabrünster Weg");
break;
}
case 101026:
{
returnValue = F("Fernacher Höhe");
break;
}
case 101027:
{
returnValue = F("Fernandinenweg");
break;
}
case 101028:
{
returnValue = F("Fernautal");
break;
}
case 101029:
{
returnValue = F("Fernbergweg");
break;
}
case 101030:
{
returnValue = F("Fernbichl");
break;
}
case 101031:
{
returnValue = F("Fernbirchen");
break;
}
case 101032:
{
returnValue = F("Fernblick");
break;
}
case 101033:
{
returnValue = F("Fernblickstr.");
break;
}
case 101034:
{
returnValue = F("Fernbreitenbacher Weg");
break;
}
case 101035:
{
returnValue = F("Fernbrunnstr.");
break;
}
case 101036:
{
returnValue = F("Ferndobelweg");
break;
}
case 101037:
{
returnValue = F("Ferndorfer Str.");
break;
}
case 101038:
{
returnValue = F("Ferndorfsteg");
break;
}
case 101039:
{
returnValue = F("Ferndorfstr.");
break;
}
case 101040:
{
returnValue = F("Ferndörfl");
break;
}
case 101041:
{
returnValue = F("Fernecker Tal");
break;
}
case 101042:
{
returnValue = F("Ferner Weg");
break;
}
case 101043:
{
returnValue = F("Fernewaldstr.");
break;
}
case 101044:
{
returnValue = F("Fernewerder Weg");
break;
}
case 101045:
{
returnValue = F("Ferngartenweg");
break;
}
case 101046:
{
returnValue = F("Fernhager Str.");
break;
}
case 101047:
{
returnValue = F("Fernholte");
break;
}
case 101048:
{
returnValue = F("Fernholz");
break;
}
case 101049:
{
returnValue = F("Fernholzstr.");
break;
}
case 101050:
{
returnValue = F("Fernichweg");
break;
}
case 101051:
{
returnValue = F("Ferniestr.");
break;
}
case 101052:
{
returnValue = F("Fernkornstr.");
break;
}
case 101053:
{
returnValue = F("Fernmittenhausen");
break;
}
case 101054:
{
returnValue = F("Fernneuendorfer Str.");
break;
}
case 101055:
{
returnValue = F("Fernreuther Weg");
break;
}
case 101056:
{
returnValue = F("Fernrodder Str.");
break;
}
case 101057:
{
returnValue = F("Fernroder Str.");
break;
}
case 101058:
{
returnValue = F("Fernsbergweg");
break;
}
case 101059:
{
returnValue = F("Fernsdorfer Str.");
break;
}
case 101060:
{
returnValue = F("Fernseh-Platz");
break;
}
case 101061:
{
returnValue = F("Fernsehturmstr.");
break;
}
case 101062:
{
returnValue = F("Fernsehturmweg");
break;
}
case 101063:
{
returnValue = F("Fernsicht");
break;
}
case 101064:
{
returnValue = F("Fernsichtstr.");
break;
}
case 101065:
{
returnValue = F("Fernsichtweg");
break;
}
case 101066:
{
returnValue = F("Fernstr.");
break;
}
case 101067:
{
returnValue = F("Fernverkehrsstr.");
break;
}
case 101068:
{
returnValue = F("Fernwasserstr.");
break;
}
case 101069:
{
returnValue = F("Ferrandstr.");
break;
}
case 101070:
{
returnValue = F("Ferrariweg");
break;
}
case 101071:
{
returnValue = F("Ferrastr.");
break;
}
case 101072:
{
returnValue = F("Ferrenberg");
break;
}
case 101073:
{
returnValue = F("Ferrenbergstr.");
break;
}
case 101074:
{
returnValue = F("Ferrero-Ring");
break;
}
case 101075:
{
returnValue = F("Ferrières-Str.");
break;
}
case 101076:
{
returnValue = F("Ferroweg");
break;
}
case 101077:
{
returnValue = F("Ferrowweg");
break;
}
case 101078:
{
returnValue = F("Ferrumstr.");
break;
}
case 101079:
{
returnValue = F("Ferrutiusstr.");
break;
}
case 101080:
{
returnValue = F("Ferry-Steibli-Str.");
break;
}
case 101081:
{
returnValue = F("Ferschweilerstr.");
break;
}
case 101082:
{
returnValue = F("Ferselweg");
break;
}
case 101083:
{
returnValue = F("Fersenbruch");
break;
}
case 101084:
{
returnValue = F("Ferstenborgum");
break;
}
case 101085:
{
returnValue = F("Ferstlstr.");
break;
}
case 101086:
{
returnValue = F("Fertheidestr.");
break;
}
case 101087:
{
returnValue = F("Ferthofer Weg");
break;
}
case 101088:
{
returnValue = F("Fertinger Str.");
break;
}
case 101089:
{
returnValue = F("Fesackerweg");
break;
}
case 101090:
{
returnValue = F("Feschmattweg");
break;
}
case 101091:
{
returnValue = F("Feselenstr.");
break;
}
case 101092:
{
returnValue = F("Fesenbergring");
break;
}
case 101093:
{
returnValue = F("Fesenbergweg");
break;
}
case 101094:
{
returnValue = F("Fesenfeld");
break;
}
case 101095:
{
returnValue = F("Fesenfelder Str.");
break;
}
case 101096:
{
returnValue = F("Fesenmaierstr.");
break;
}
case 101097:
{
returnValue = F("Fesenmayrstr.");
break;
}
case 101098:
{
returnValue = F("Fesenwaldweg");
break;
}
case 101099:
{
returnValue = F("Fesenwengertstaffel");
break;
}
case 101100:
{
returnValue = F("Feskerdam");
break;
}
case 101101:
{
returnValue = F("Fessbacher Str.");
break;
}
case 101102:
{
returnValue = F("Fesselbrandsweg");
break;
}
case 101103:
{
returnValue = F("Fesselgrund");
break;
}
case 101104:
{
returnValue = F("Fesselswiese");
break;
}
case 101105:
{
returnValue = F("Fesselweg");
break;
}
case 101106:
{
returnValue = F("Fessenbacher Str.");
break;
}
case 101107:
{
returnValue = F("Fessenbacher Weg");
break;
}
case 101108:
{
returnValue = F("Fessenheimer Str.");
break;
}
case 101109:
{
returnValue = F("Fesserstr.");
break;
}
case 101110:
{
returnValue = F("Fesslerweg");
break;
}
case 101111:
{
returnValue = F("Festallee");
break;
}
case 101112:
{
returnValue = F("Festanger");
break;
}
case 101113:
{
returnValue = F("Festberge");
break;
}
case 101114:
{
returnValue = F("Feste Franz");
break;
}
case 101115:
{
returnValue = F("Festeburgstr.");
break;
}
case 101116:
{
returnValue = F("Festelsteig");
break;
}
case 101117:
{
returnValue = F("Festenbachweg");
break;
}
case 101118:
{
returnValue = F("Festenbergstr.");
break;
}
case 101119:
{
returnValue = F("Festenburgstr.");
break;
}
case 101120:
{
returnValue = F("Festenfeldstr.");
break;
}
case 101121:
{
returnValue = F("Festentalsgrundweg");
break;
}
case 101122:
{
returnValue = F("Fester Str.");
break;
}
case 101123:
{
returnValue = F("Fester Weg");
break;
}
case 101124:
{
returnValue = F("Festerbachstr.");
break;
}
case 101125:
{
returnValue = F("Festes Riedle");
break;
}
case 101126:
{
returnValue = F("Festgestr.");
break;
}
case 101127:
{
returnValue = F("Festhallenstr.");
break;
}
case 101128:
{
returnValue = F("Festhallenweg");
break;
}
case 101129:
{
returnValue = F("Festivalgelände Fusion / at.tension");
break;
}
case 101130:
{
returnValue = F("Festivalgelände ROCK am GLEIS");
break;
}
case 101131:
{
returnValue = F("Festlweg");
break;
}
case 101132:
{
returnValue = F("Festonallee");
break;
}
case 101133:
{
returnValue = F("Festpark balzfeld");
break;
}
case 101134:
{
returnValue = F("Festplatz");
break;
}
case 101135:
{
returnValue = F("Festplatz / Bolzplatz");
break;
}
case 101136:
{
returnValue = F("Festplatz Althengstett");
break;
}
case 101137:
{
returnValue = F("Festplatz Am Rasen (im Sommer auch Parkplatz)");
break;
}
case 101138:
{
returnValue = F("Festplatz Augenquelle");
break;
}
case 101139:
{
returnValue = F("Festplatz Aßlar");
break;
}
case 101140:
{
returnValue = F("Festplatz Breidenbach");
break;
}
case 101141:
{
returnValue = F("Festplatz Bremm");
break;
}
case 101142:
{
returnValue = F("Festplatz Bruchköbel");
break;
}
case 101143:
{
returnValue = F("Festplatz Eiswiese");
break;
}
case 101144:
{
returnValue = F("Festplatz Ellenz");
break;
}
case 101145:
{
returnValue = F("Festplatz Ernst");
break;
}
case 101146:
{
returnValue = F("Festplatz Fredenbaumplatz");
break;
}
case 101147:
{
returnValue = F("Festplatz Furth");
break;
}
case 101148:
{
returnValue = F("Festplatz Gerberwies");
break;
}
case 101149:
{
returnValue = F("Festplatz Germane Mambach e.V.");
break;
}
case 101150:
{
returnValue = F("Festplatz Gronau");
break;
}
case 101151:
{
returnValue = F("Festplatz Groß Hesepe");
break;
}
case 101152:
{
returnValue = F("Festplatz Herrenshoff");
break;
}
case 101153:
{
returnValue = F("Festplatz KGV \"Kultur");
break;
}
case 101154:
{
returnValue = F("Festplatz Kastanienallee");
break;
}
case 101155:
{
returnValue = F("Festplatz Kaufering");
break;
}
case 101156:
{
returnValue = F("Festplatz Klosterlechfeld");
break;
}
case 101157:
{
returnValue = F("Festplatz Markt Rattelsdorf");
break;
}
case 101158:
{
returnValue = F("Festplatz Martelsberg");
break;
}
case 101159:
{
returnValue = F("Festplatz Neudorf");
break;
}
case 101160:
{
returnValue = F("Festplatz Parsberg");
break;
}
case 101161:
{
returnValue = F("Festplatz Poltersdorf");
break;
}
case 101162:
{
returnValue = F("Festplatz Reinbek");
break;
}
case 101163:
{
returnValue = F("Festplatz Rosenberg");
break;
}
case 101164:
{
returnValue = F("Festplatz Santis Claus");
break;
}
case 101165:
{
returnValue = F("Festplatz Schollene");
break;
}
case 101166:
{
returnValue = F("Festplatz Seigertshausen");
break;
}
case 101167:
{
returnValue = F("Festplatz Senheim");
break;
}
case 101168:
{
returnValue = F("Festplatz Stadthalle");
break;
}
case 101169:
{
returnValue = F("Festplatz Timmerlah");
break;
}
case 101170:
{
returnValue = F("Festplatz Waldhütte");
break;
}
case 101171:
{
returnValue = F("Festplatz Weseke");
break;
}
case 101172:
{
returnValue = F("Festplatz Wollishausen");
break;
}
case 101173:
{
returnValue = F("Festplatz am Anger");
break;
}
case 101174:
{
returnValue = F("Festplatz am Bülten");
break;
}
case 101175:
{
returnValue = F("Festplatz am Paradiesrand");
break;
}
case 101176:
{
returnValue = F("Festplatz an der Wutach");
break;
}
case 101177:
{
returnValue = F("Festplatzstr.");
break;
}
case 101178:
{
returnValue = F("Festplatzweg");
break;
}
case 101179:
{
returnValue = F("Festrech");
break;
}
case 101180:
{
returnValue = F("Festspielhaus Hellerau");
break;
}
case 101181:
{
returnValue = F("Festspielhügel");
break;
}
case 101182:
{
returnValue = F("Feststr.");
break;
}
case 101183:
{
returnValue = F("Festtagswäldchen");
break;
}
case 101184:
{
returnValue = F("Festung");
break;
}
case 101185:
{
returnValue = F("Festungsberg");
break;
}
case 101186:
{
returnValue = F("Festungsblick");
break;
}
case 101187:
{
returnValue = F("Festungshof");
break;
}
case 101188:
{
returnValue = F("Festungspark");
break;
}
case 101189:
{
returnValue = F("Festungspark Asterstein");
break;
}
case 101190:
{
returnValue = F("Festungspark Fronte Lamotte");
break;
}
case 101191:
{
returnValue = F("Festungsstr.");
break;
}
case 101192:
{
returnValue = F("Festungstr.");
break;
}
case 101193:
{
returnValue = F("Festungswaldweg");
break;
}
case 101194:
{
returnValue = F("Festungsweg");
break;
}
case 101195:
{
returnValue = F("Festungsweg Mont Royal");
break;
}
case 101196:
{
returnValue = F("Festwaldstr.");
break;
}
case 101197:
{
returnValue = F("Festweg");
break;
}
case 101198:
{
returnValue = F("Festwiese");
break;
}
case 101199:
{
returnValue = F("Festwiese (ehem. Sportplatz)");
break;
}
case 101200:
{
returnValue = F("Festwiese Biere");
break;
}
case 101201:
{
returnValue = F("Festwiese Flintbek");
break;
}
case 101202:
{
returnValue = F("Festwiese Obergrombach");
break;
}
case 101203:
{
returnValue = F("Festwiese Scharnhauser Park");
break;
}
case 101204:
{
returnValue = F("Festwiesenstr.");
break;
}
case 101205:
{
returnValue = F("Fetschendorfer Weg");
break;
}
case 101206:
{
returnValue = F("Fetscherplatz");
break;
}
case 101207:
{
returnValue = F("Fetscherstr.");
break;
}
case 101208:
{
returnValue = F("Fett Eck");
break;
}
case 101209:
{
returnValue = F("Fettberg");
break;
}
case 101210:
{
returnValue = F("Fette Henn");
break;
}
case 101211:
{
returnValue = F("Fette Wiese");
break;
}
case 101212:
{
returnValue = F("Fettecke");
break;
}
case 101213:
{
returnValue = F("Fettenberger Weg");
break;
}
case 101214:
{
returnValue = F("Fettenhenne");
break;
}
case 101215:
{
returnValue = F("Fetter Hagen");
break;
}
case 101216:
{
returnValue = F("Fetter Strich");
break;
}
case 101217:
{
returnValue = F("Fettgasse");
break;
}
case 101218:
{
returnValue = F("Fetthanshügel");
break;
}
case 101219:
{
returnValue = F("Fettigstr.");
break;
}
case 101220:
{
returnValue = F("Fettingerstr.");
break;
}
case 101221:
{
returnValue = F("Fettkrautweg");
break;
}
case 101222:
{
returnValue = F("Fettlager Weg");
break;
}
case 101223:
{
returnValue = F("Fettpott");
break;
}
case 101224:
{
returnValue = F("Fettpottstr.");
break;
}
case 101225:
{
returnValue = F("Fettpottsweg");
break;
}
case 101226:
{
returnValue = F("Fettpottweg");
break;
}
case 101227:
{
returnValue = F("Fettweide");
break;
}
case 101228:
{
returnValue = F("Fettweisstr.");
break;
}
case 101229:
{
returnValue = F("Fetzachweg");
break;
}
case 101230:
{
returnValue = F("Fetzelhofen");
break;
}
case 101231:
{
returnValue = F("Fetzelhöferweg");
break;
}
case 101232:
{
returnValue = F("Fetzenbach");
break;
}
case 101233:
{
returnValue = F("Fetzenbergweg");
break;
}
case 101234:
{
returnValue = F("Fetzenweg");
break;
}
case 101235:
{
returnValue = F("Fetzerstr.");
break;
}
case 101236:
{
returnValue = F("Fetzerswaldweg");
break;
}
case 101237:
{
returnValue = F("Fetznweg");
break;
}
case 101238:
{
returnValue = F("Feuchtener Str.");
break;
}
case 101239:
{
returnValue = F("Feuchtenrainweg");
break;
}
case 101240:
{
returnValue = F("Feuchter Str.");
break;
}
case 101241:
{
returnValue = F("Feuchter Weg");
break;
}
case 101242:
{
returnValue = F("Feuchterstr.");
break;
}
case 101243:
{
returnValue = F("Feuchtlachfeld");
break;
}
case 101244:
{
returnValue = F("Feuchtlachweg");
break;
}
case 101245:
{
returnValue = F("Feuchtmayer Str.");
break;
}
case 101246:
{
returnValue = F("Feuchtmayerstr.");
break;
}
case 101247:
{
returnValue = F("Feuchtmayr-Str.");
break;
}
case 101248:
{
returnValue = F("Feuchtmayrstr.");
break;
}
case 101249:
{
returnValue = F("Feuchtrüttebühlweg");
break;
}
case 101250:
{
returnValue = F("Feuchtrütteweg");
break;
}
case 101251:
{
returnValue = F("Feuchtstr.");
break;
}
case 101252:
{
returnValue = F("Feuchtwangener Str.");
break;
}
case 101253:
{
returnValue = F("Feuchtwanger Str.");
break;
}
case 101254:
{
returnValue = F("Feuchtwangerstr.");
break;
}
case 101255:
{
returnValue = F("Feudelstr.");
break;
}
case 101256:
{
returnValue = F("Feudenheimer Grün");
break;
}
case 101257:
{
returnValue = F("Feudenheimer Str.");
break;
}
case 101258:
{
returnValue = F("Feudenheimer Weg");
break;
}
case 101259:
{
returnValue = F("Feudinger Weg");
break;
}
case 101260:
{
returnValue = F("Feuer Stellen Weg");
break;
}
case 101261:
{
returnValue = F("Feuer- und Rettungswache 3");
break;
}
case 101262:
{
returnValue = F("Feuerbach");
break;
}
case 101263:
{
returnValue = F("Feuerbacher Str.");
break;
}
case 101264:
{
returnValue = F("Feuerbacher Weg");
break;
}
case 101265:
{
returnValue = F("Feuerbacherholzweg");
break;
}
case 101266:
{
returnValue = F("Feuerbacherweg");
break;
}
case 101267:
{
returnValue = F("Feuerbachpark");
break;
}
case 101268:
{
returnValue = F("Feuerbachplatz");
break;
}
case 101269:
{
returnValue = F("Feuerbachring");
break;
}
case 101270:
{
returnValue = F("Feuerbachstr.");
break;
}
case 101271:
{
returnValue = F("Feuerbachweg");
break;
}
case 101272:
{
returnValue = F("Feuerbahn");
break;
}
case 101273:
{
returnValue = F("Feuerberg");
break;
}
case 101274:
{
returnValue = F("Feuerbergstr.");
break;
}
case 101275:
{
returnValue = F("Feuerbergweg");
break;
}
case 101276:
{
returnValue = F("Feuerbornstr.");
break;
}
case 101277:
{
returnValue = F("Feuerbrunnen");
break;
}
case 101278:
{
returnValue = F("Feuerdorn");
break;
}
case 101279:
{
returnValue = F("Feuerdornstr.");
break;
}
case 101280:
{
returnValue = F("Feuerdornweg");
break;
}
case 101281:
{
returnValue = F("Feuerdornwinkel");
break;
}
case 101282:
{
returnValue = F("Feuergalgen");
break;
}
case 101283:
{
returnValue = F("Feuergang");
break;
}
case 101284:
{
returnValue = F("Feuergasse");
break;
}
case 101285:
{
returnValue = F("Feuergraben");
break;
}
case 101286:
{
returnValue = F("Feuergrabengasse");
break;
}
case 101287:
{
returnValue = F("Feuergräfenstr.");
break;
}
case 101288:
{
returnValue = F("Feuergässchen");
break;
}
case 101289:
{
returnValue = F("Feuergässle");
break;
}
case 101290:
{
returnValue = F("Feuergäßchen");
break;
}
case 101291:
{
returnValue = F("Feuergäßle");
break;
}
case 101292:
{
returnValue = F("Feuerhaldenweg");
break;
}
case 101293:
{
returnValue = F("Feuerhauptstr.");
break;
}
case 101294:
{
returnValue = F("Feuerhausgasse");
break;
}
case 101295:
{
returnValue = F("Feuerhausstr.");
break;
}
case 101296:
{
returnValue = F("Feuerhausweg");
break;
}
case 101297:
{
returnValue = F("Feuerherdstr.");
break;
}
case 101298:
{
returnValue = F("Feuerherdweg");
break;
}
case 101299:
{
returnValue = F("Feuerhörn");
break;
}
case 101300:
{
returnValue = F("Feuerkessel");
break;
}
case 101301:
{
returnValue = F("Feuerkirschenweg");
break;
}
case 101302:
{
returnValue = F("Feuerkrautstr.");
break;
}
case 101303:
{
returnValue = F("Feuerland");
break;
}
case 101304:
{
returnValue = F("Feuerleinstr.");
break;
}
case 101305:
{
returnValue = F("Feuerleinweg");
break;
}
case 101306:
{
returnValue = F("Feuerleitergasse");
break;
}
case 101307:
{
returnValue = F("Feuerlilienstr.");
break;
}
case 101308:
{
returnValue = F("Feuerlinie");
break;
}
case 101309:
{
returnValue = F("Feuerlöschteich");
break;
}
case 101310:
{
returnValue = F("Feuerlöschweg");
break;
}
case 101311:
{
returnValue = F("Feuermauer");
break;
}
case 101312:
{
returnValue = F("Feuerpark");
break;
}
case 101313:
{
returnValue = F("Feuerpool");
break;
}
case 101314:
{
returnValue = F("Feuerreiterweg");
break;
}
case 101315:
{
returnValue = F("Feuerrenne");
break;
}
case 101316:
{
returnValue = F("Feuersalamanderweg");
break;
}
case 101317:
{
returnValue = F("Feuersbacher Str.");
break;
}
case 101318:
{
returnValue = F("Feuerscheider Str.");
break;
}
case 101319:
{
returnValue = F("Feuerschicht");
break;
}
case 101320:
{
returnValue = F("Feuerschützenbostel");
break;
}
case 101321:
{
returnValue = F("Feuersee");
break;
}
case 101322:
{
returnValue = F("Feuerseestr.");
break;
}
case 101323:
{
returnValue = F("Feuerseeweg");
break;
}
case 101324:
{
returnValue = F("Feuerspritzenweg");
break;
}
case 101325:
{
returnValue = F("Feuersteige");
break;
}
case 101326:
{
returnValue = F("Feuerstein");
break;
}
case 101327:
{
returnValue = F("Feuersteiner Wiese");
break;
}
case 101328:
{
returnValue = F("Feuersteinsgrund");
break;
}
case 101329:
{
returnValue = F("Feuersteinstr.");
break;
}
case 101330:
{
returnValue = F("Feuersteinweg");
break;
}
case 101331:
{
returnValue = F("Feuerstelle");
break;
}
case 101332:
{
returnValue = F("Feuerstetterkamp");
break;
}
case 101333:
{
returnValue = F("Feuerstiege");
break;
}
case 101334:
{
returnValue = F("Feuerstr.");
break;
}
case 101335:
{
returnValue = F("Feuerstätte");
break;
}
case 101336:
{
returnValue = F("Feuerstättenweg");
break;
}
case 101337:
{
returnValue = F("Feuerswinkelweg");
break;
}
case 101338:
{
returnValue = F("Feuerteich");
break;
}
case 101339:
{
returnValue = F("Feuerteichplatz");
break;
}
case 101340:
{
returnValue = F("Feuerteichstr.");
break;
}
case 101341:
{
returnValue = F("Feuerthaler Str.");
break;
}
case 101342:
{
returnValue = F("Feuerturmweg");
break;
}
case 101343:
{
returnValue = F("Feuervogelweg");
break;
}
case 101344:
{
returnValue = F("Feuerwache");
break;
}
case 101345:
{
returnValue = F("Feuerweg");
break;
}
case 101346:
{
returnValue = F("Feuerwehr");
break;
}
case 101347:
{
returnValue = F("Feuerwehr Str.");
break;
}
case 101348:
{
returnValue = F("Feuerwehr-Kreisel");
break;
}
case 101349:
{
returnValue = F("Feuerwehrauffahrt");
break;
}
case 101350:
{
returnValue = F("Feuerwehrbrücke Berlin - New York");
break;
}
case 101351:
{
returnValue = F("Feuerwehrgasse");
break;
}
case 101352:
{
returnValue = F("Feuerwehrgässle");
break;
}
case 101353:
{
returnValue = F("Feuerwehrheimstr.");
break;
}
case 101354:
{
returnValue = F("Feuerwehrhütte Weg");
break;
}
case 101355:
{
returnValue = F("Feuerwehrlohne");
break;
}
case 101356:
{
returnValue = F("Feuerwehrpark");
break;
}
case 101357:
{
returnValue = F("Feuerwehrpfad");
break;
}
case 101358:
{
returnValue = F("Feuerwehrplatz");
break;
}
case 101359:
{
returnValue = F("Feuerwehrstr.");
break;
}
case 101360:
{
returnValue = F("Feuerwehrtrainingsstrecke");
break;
}
case 101361:
{
returnValue = F("Feuerwehrweg");
break;
}
case 101362:
{
returnValue = F("Feuerwehrwegle");
break;
}
case 101363:
{
returnValue = F("Feuerwehrzufahrt");
break;
}
case 101364:
{
returnValue = F("Feuerwehrzufahrt Schule");
break;
}
case 101365:
{
returnValue = F("Feuerwehrübungsplatz");
break;
}
case 101366:
{
returnValue = F("Feuerwerkerstr.");
break;
}
case 101367:
{
returnValue = F("Feuerwiese");
break;
}
case 101368:
{
returnValue = F("Feueräckerweg");
break;
}
case 101369:
{
returnValue = F("Feugerolles-Str.");
break;
}
case 101370:
{
returnValue = F("Feulgenstr.");
break;
}
case 101371:
{
returnValue = F("Feulnerstr.");
break;
}
case 101372:
{
returnValue = F("Feurerstr.");
break;
}
case 101373:
{
returnValue = F("Feursstr.");
break;
}
case 101374:
{
returnValue = F("Feursteinstr.");
break;
}
case 101375:
{
returnValue = F("Feusdorfer Str.");
break;
}
case 101376:
{
returnValue = F("Feustelstr.");
break;
}
case 101377:
{
returnValue = F("Feustelweg");
break;
}
case 101378:
{
returnValue = F("Feußweg");
break;
}
case 101379:
{
returnValue = F("Feverstr.");
break;
}
case 101380:
{
returnValue = F("Fexfeld");
break;
}
case 101381:
{
returnValue = F("Feyener Weg");
break;
}
case 101382:
{
returnValue = F("Feyer Weg");
break;
}
case 101383:
{
returnValue = F("Feyerabendscher Park");
break;
}
case 101384:
{
returnValue = F("Feyerabendstr.");
break;
}
case 101385:
{
returnValue = F("Feyermühle");
break;
}
case 101386:
{
returnValue = F("Feyermühler Str.");
break;
}
case 101387:
{
returnValue = F("Feyhlstr.");
break;
}
case 101388:
{
returnValue = F("Feyhöhe");
break;
}
case 101389:
{
returnValue = F("Feystr.");
break;
}
case 101390:
{
returnValue = F("Feytalstr.");
break;
}
case 101391:
{
returnValue = F("Feytiatring");
break;
}
case 101392:
{
returnValue = F("Feyzinplatz");
break;
}
case 101393:
{
returnValue = F("Feßmaierstr.");
break;
}
case 101394:
{
returnValue = F("Fibelstr.");
break;
}
case 101395:
{
returnValue = F("Fibelweg");
break;
}
case 101396:
{
returnValue = F("Fibergasse");
break;
}
case 101397:
{
returnValue = F("Fibigstr.");
break;
}
case 101398:
{
returnValue = F("Fibrola Str.");
break;
}
case 101399:
{
returnValue = F("Fichel");
break;
}
case 101400:
{
returnValue = F("Ficht");
break;
}
case 101401:
{
returnValue = F("Fichta");
break;
}
case 101402:
{
returnValue = F("Fichtacher Str.");
break;
}
case 101403:
{
returnValue = F("Fichtachstr.");
break;
}
case 101404:
{
returnValue = F("Fichtachweg");
break;
}
case 101405:
{
returnValue = F("Fichtackerstr.");
break;
}
case 101406:
{
returnValue = F("Fichtawiesen");
break;
}
case 101407:
{
returnValue = F("Fichtbauerweg");
break;
}
case 101408:
{
returnValue = F("Fichtberg");
break;
}
case 101409:
{
returnValue = F("Fichteallee");
break;
}
case 101410:
{
returnValue = F("Fichteck");
break;
}
case 101411:
{
returnValue = F("Fichtehof");
break;
}
case 101412:
{
returnValue = F("Fichtelanlage");
break;
}
case 101413:
{
returnValue = F("Fichtelbachweg");
break;
}
case 101414:
{
returnValue = F("Fichtelberg-Schwebebahn");
break;
}
case 101415:
{
returnValue = F("Fichtelbergblick");
break;
}
case 101416:
{
returnValue = F("Fichtelberger Str.");
break;
}
case 101417:
{
returnValue = F("Fichtelbergstr.");
break;
}
case 101418:
{
returnValue = F("Fichtelbergweg");
break;
}
case 101419:
{
returnValue = F("Fichtelgasse");
break;
}
case 101420:
{
returnValue = F("Fichtelgebirgestr.");
break;
}
case 101421:
{
returnValue = F("Fichtelgebirgsstr.");
break;
}
case 101422:
{
returnValue = F("Fichtelgebirgstr.");
break;
}
case 101423:
{
returnValue = F("Fichtelgebirgsweg");
break;
}
case 101424:
{
returnValue = F("Fichtelgoldstr.");
break;
}
case 101425:
{
returnValue = F("Fichtelhäuser");
break;
}
case 101426:
{
returnValue = F("Fichtelnaabstr.");
break;
}
case 101427:
{
returnValue = F("Fichtelrode");
break;
}
case 101428:
{
returnValue = F("Fichtelseestr.");
break;
}
case 101429:
{
returnValue = F("Fichtelseestr. / Wunsiedler Steig");
break;
}
case 101430:
{
returnValue = F("Fichtelsgarten");
break;
}
case 101431:
{
returnValue = F("Fichtelshohn");
break;
}
case 101432:
{
returnValue = F("Fichtelstr.");
break;
}
case 101433:
{
returnValue = F("Fichtelweg");
break;
}
case 101434:
{
returnValue = F("Fichtenallee");
break;
}
case 101435:
{
returnValue = F("Fichtenau");
break;
}
case 101436:
{
returnValue = F("Fichtenauer Str.");
break;
}
case 101437:
{
returnValue = F("Fichtenauer Weg");
break;
}
case 101438:
{
returnValue = F("Fichtenbach");
break;
}
case 101439:
{
returnValue = F("Fichtenbacher Weg");
break;
}
case 101440:
{
returnValue = F("Fichtenberg");
break;
}
case 101441:
{
returnValue = F("Fichtenberger Str.");
break;
}
case 101442:
{
returnValue = F("Fichtenbergsiedlung");
break;
}
case 101443:
{
returnValue = F("Fichtenbergstr.");
break;
}
case 101444:
{
returnValue = F("Fichtenbogen");
break;
}
case 101445:
{
returnValue = F("Fichtenbreite");
break;
}
case 101446:
{
returnValue = F("Fichtenbrink");
break;
}
case 101447:
{
returnValue = F("Fichtenbruch");
break;
}
case 101448:
{
returnValue = F("Fichtenburgstr.");
break;
}
case 101449:
{
returnValue = F("Fichtenbuschstr.");
break;
}
case 101450:
{
returnValue = F("Fichtenbühl");
break;
}
case 101451:
{
returnValue = F("Fichtendamm");
break;
}
case 101452:
{
returnValue = F("Fichtendobelweg");
break;
}
case 101453:
{
returnValue = F("Fichteneck");
break;
}
case 101454:
{
returnValue = F("Fichtener Weg");
break;
}
case 101455:
{
returnValue = F("Fichtengang");
break;
}
case 101456:
{
returnValue = F("Fichtengarten");
break;
}
case 101457:
{
returnValue = F("Fichtengasse");
break;
}
case 101458:
{
returnValue = F("Fichtengrund");
break;
}
case 101459:
{
returnValue = F("Fichtengrunder Weg");
break;
}
case 101460:
{
returnValue = F("Fichtengrundweg");
break;
}
case 101461:
{
returnValue = F("Fichtengräben");
break;
}
case 101462:
{
returnValue = F("Fichtenhag");
break;
}
case 101463:
{
returnValue = F("Fichtenhain");
break;
}
case 101464:
{
returnValue = F("Fichtenhainer Allee");
break;
}
case 101465:
{
returnValue = F("Fichtenhainichener Str.");
break;
}
case 101466:
{
returnValue = F("Fichtenhainicher Str.");
break;
}
case 101467:
{
returnValue = F("Fichtenhang");
break;
}
case 101468:
{
returnValue = F("Fichtenhof");
break;
}
case 101469:
{
returnValue = F("Fichtenhofer Str.");
break;
}
case 101470:
{
returnValue = F("Fichtenhofer Weg");
break;
}
case 101471:
{
returnValue = F("Fichtenhäuser");
break;
}
case 101472:
{
returnValue = F("Fichtenhöh");
break;
}
case 101473:
{
returnValue = F("Fichtenhöhe");
break;
}
case 101474:
{
returnValue = F("Fichtenkamp");
break;
}
case 101475:
{
returnValue = F("Fichtenkopfstr.");
break;
}
case 101476:
{
returnValue = F("Fichtenkopfweg");
break;
}
case 101477:
{
returnValue = F("Fichtenmühle");
break;
}
case 101478:
{
returnValue = F("Fichtenmühler Str.");
break;
}
case 101479:
{
returnValue = F("Fichtenoheweg");
break;
}
case 101480:
{
returnValue = F("Fichtenpfad");
break;
}
case 101481:
{
returnValue = F("Fichtenplatz");
break;
}
case 101482:
{
returnValue = F("Fichtenrain");
break;
}
case 101483:
{
returnValue = F("Fichtenring");
break;
}
case 101484:
{
returnValue = F("Fichtenschlag");
break;
}
case 101485:
{
returnValue = F("Fichtenschneise");
break;
}
case 101486:
{
returnValue = F("Fichtensiedlung");
break;
}
case 101487:
{
returnValue = F("Fichtensteg");
break;
}
case 101488:
{
returnValue = F("Fichtensteig");
break;
}
case 101489:
{
returnValue = F("Fichtenstieg");
break;
}
case 101490:
{
returnValue = F("Fichtenstr.");
break;
}
case 101491:
{
returnValue = F("Fichtental");
break;
}
case 101492:
{
returnValue = F("Fichtentalstr.");
break;
}
case 101493:
{
returnValue = F("Fichtentalweg");
break;
}
case 101494:
{
returnValue = F("Fichtenwaldstr.");
break;
}
case 101495:
{
returnValue = F("Fichtenwaldweg");
break;
}
case 101496:
{
returnValue = F("Fichtenwall");
break;
}
case 101497:
{
returnValue = F("Fichtenweg");
break;
}
case 101498:
{
returnValue = F("Fichtenwinkel");
break;
}
case 101499:
{
returnValue = F("Fichtenwäldlesweg");
break;
}
case 101500:
{
returnValue = F("Fichtenzweig");
break;
}
case 101501:
{
returnValue = F("Fichtenäcker");
break;
}
case 101502:
{
returnValue = F("Fichtenäckerstr.");
break;
}
case 101503:
{
returnValue = F("Fichtenäckerweg");
break;
}
case 101504:
{
returnValue = F("Fichtepark");
break;
}
case 101505:
{
returnValue = F("Fichteplatz");
break;
}
case 101506:
{
returnValue = F("Fichter Weg");
break;
}
case 101507:
{
returnValue = F("Fichtera");
break;
}
case 101508:
{
returnValue = F("Fichteraweg");
break;
}
case 101509:
{
returnValue = F("Fichtere Graben");
break;
}
case 101510:
{
returnValue = F("Fichtering");
break;
}
case 101511:
{
returnValue = F("Fichteschulweg");
break;
}
case 101512:
{
returnValue = F("Fichtesiedlung");
break;
}
case 101513:
{
returnValue = F("Fichtestr.");
break;
}
case 101514:
{
returnValue = F("Fichteweg");
break;
}
case 101515:
{
returnValue = F("Fichthang");
break;
}
case 101516:
{
returnValue = F("Fichtholz");
break;
}
case 101517:
{
returnValue = F("Fichtichstr.");
break;
}
case 101518:
{
returnValue = F("Fichtig Weg");
break;
}
case 101519:
{
returnValue = F("Fichtigweg");
break;
}
case 101520:
{
returnValue = F("Fichtlstr.");
break;
}
case 101521:
{
returnValue = F("Fichtnerstr.");
break;
}
case 101522:
{
returnValue = F("Fichtnerweg");
break;
}
case 101523:
{
returnValue = F("Fichtseestr.");
break;
}
case 101524:
{
returnValue = F("Fichtweg");
break;
}
case 101525:
{
returnValue = F("Fichtweideweg");
break;
}
case 101526:
{
returnValue = F("Fichtwinkel");
break;
}
case 101527:
{
returnValue = F("Fichtzig");
break;
}
case 101528:
{
returnValue = F("Fichtäckerstr.");
break;
}
case 101529:
{
returnValue = F("Fickelsmühle");
break;
}
case 101530:
{
returnValue = F("Fickentor");
break;
}
case 101531:
{
returnValue = F("Fickertsberg");
break;
}
case 101532:
{
returnValue = F("Ficklermühle");
break;
}
case 101533:
{
returnValue = F("Fickmühlener Str.");
break;
}
case 101534:
{
returnValue = F("Fiddel");
break;
}
case 101535:
{
returnValue = F("Fiddelhof");
break;
}
case 101536:
{
returnValue = F("Fiddelstr.");
break;
}
case 101537:
{
returnValue = F("Fidel-Berger-Str.");
break;
}
case 101538:
{
returnValue = F("Fidel-Feederle-Str.");
break;
}
case 101539:
{
returnValue = F("Fidel-Fischer-Str.");
break;
}
case 101540:
{
returnValue = F("Fidel-Frick-Str.");
break;
}
case 101541:
{
returnValue = F("Fidel-Kreuzer-Str.");
break;
}
case 101542:
{
returnValue = F("Fidel-Schub-Str.");
break;
}
case 101543:
{
returnValue = F("Fidel-Sporer-Str.");
break;
}
case 101544:
{
returnValue = F("Fidele-Horst-Weg");
break;
}
case 101545:
{
returnValue = F("Fidelekesweg");
break;
}
case 101546:
{
returnValue = F("Fidelenstr.");
break;
}
case 101547:
{
returnValue = F("Fidelgasse");
break;
}
case 101548:
{
returnValue = F("Fidelio-F.-Finke-Str.");
break;
}
case 101549:
{
returnValue = F("Fideliostr.");
break;
}
case 101550:
{
returnValue = F("Fidelioweg");
break;
}
case 101551:
{
returnValue = F("Fidelis-Bentele-Str.");
break;
}
case 101552:
{
returnValue = F("Fidelis-Böhler-Str.");
break;
}
case 101553:
{
returnValue = F("Fidelis-Graf-Str.");
break;
}
case 101554:
{
returnValue = F("Fidelis-Huggle-Str.");
break;
}
case 101555:
{
returnValue = F("Fidelisstr.");
break;
}
case 101556:
{
returnValue = F("Fidelisweg");
break;
}
case 101557:
{
returnValue = F("Fiduciastr.");
break;
}
case 101558:
{
returnValue = F("Fidusallee");
break;
}
case 101559:
{
returnValue = F("Fiebelmannstr.");
break;
}
case 101560:
{
returnValue = F("Fieberkirchweg");
break;
}
case 101561:
{
returnValue = F("Fiebiggasse");
break;
}
case 101562:
{
returnValue = F("Fiebigstr.");
break;
}
case 101563:
{
returnValue = F("Fiebigweg");
break;
}
case 101564:
{
returnValue = F("Fiebinger Str.");
break;
}
case 101565:
{
returnValue = F("Fiebinger Weg");
break;
}
case 101566:
{
returnValue = F("Fiechtnerweg");
break;
}
case 101567:
{
returnValue = F("Fiedelberg");
break;
}
case 101568:
{
returnValue = F("Fiedelerplatz");
break;
}
case 101569:
{
returnValue = F("Fiedelerstr.");
break;
}
case 101570:
{
returnValue = F("Fiedelgasse");
break;
}
case 101571:
{
returnValue = F("Fiedelhof");
break;
}
case 101572:
{
returnValue = F("Fiedelöhr");
break;
}
case 101573:
{
returnValue = F("Fiederblattweg");
break;
}
case 101574:
{
returnValue = F("Fiedererstr.");
break;
}
case 101575:
{
returnValue = F("Fiedlbühl");
break;
}
case 101576:
{
returnValue = F("Fiedlbühlstr.");
break;
}
case 101577:
{
returnValue = F("Fiedlergrund");
break;
}
case 101578:
{
returnValue = F("Fiedlers Steig");
break;
}
case 101579:
{
returnValue = F("Fiedlerstr.");
break;
}
case 101580:
{
returnValue = F("Fiedlerweg");
break;
}
case 101581:
{
returnValue = F("Fief-Grasen-Weg");
break;
}
case 101582:
{
returnValue = F("Fiefblöcken");
break;
}
case 101583:
{
returnValue = F("Fiefhusen");
break;
}
case 101584:
{
returnValue = F("Fiefhusen-Nord");
break;
}
case 101585:
{
returnValue = F("Fiefhusener Weg");
break;
}
case 101586:
{
returnValue = F("Fiefhusenstadt");
break;
}
case 101587:
{
returnValue = F("Fiefhüser Weg");
break;
}
case 101588:
{
returnValue = F("Fiegenburg");
break;
}
case 101589:
{
returnValue = F("Fiegenschuhweg");
break;
}
case 101590:
{
returnValue = F("Fiegenstr.");
break;
}
case 101591:
{
returnValue = F("Fiehe");
break;
}
case 101592:
{
returnValue = F("Fiehnenberg");
break;
}
case 101593:
{
returnValue = F("Fiekemärtens-Weg");
break;
}
case 101594:
{
returnValue = F("Fiel");
break;
}
case 101595:
{
returnValue = F("Field Street");
break;
}
case 101596:
{
returnValue = F("Fiele");
break;
}
case 101597:
{
returnValue = F("Fielenmacherspfad");
break;
}
case 101598:
{
returnValue = F("Fieler Damm");
break;
}
case 101599:
{
returnValue = F("Fielsche Feld");
break;
}
case 101600:
{
returnValue = F("Fielweg");
break;
}
case 101601:
{
returnValue = F("Fiemerbrink");
break;
}
case 101602:
{
returnValue = F("Fiemerstr.");
break;
}
case 101603:
{
returnValue = F("Fienchen-Weg");
break;
}
case 101604:
{
returnValue = F("Fiendsmoor");
break;
}
case 101605:
{
returnValue = F("Fienenweg");
break;
}
case 101606:
{
returnValue = F("Fiener Str.");
break;
}
case 101607:
{
returnValue = F("Fiener Weg");
break;
}
case 101608:
{
returnValue = F("Fienerhof");
break;
}
case 101609:
{
returnValue = F("Fienerstr.");
break;
}
case 101610:
{
returnValue = F("Fienkoppelweg");
break;
}
case 101611:
{
returnValue = F("Fienstedter Str.");
break;
}
case 101612:
{
returnValue = F("Fienstorfer Weg");
break;
}
case 101613:
{
returnValue = F("Fierabendwinkel");
break;
}
case 101614:
{
returnValue = F("Fierbahn");
break;
}
case 101615:
{
returnValue = F("Fierdagsweg");
break;
}
case 101616:
{
returnValue = F("Fierkehof");
break;
}
case 101617:
{
returnValue = F("Fierlbach");
break;
}
case 101618:
{
returnValue = F("Fierlbacher Str.");
break;
}
case 101619:
{
returnValue = F("Fierlitzenweg");
break;
}
case 101620:
{
returnValue = F("Fiernhagen");
break;
}
case 101621:
{
returnValue = F("Fierobendseck");
break;
}
case 101622:
{
returnValue = F("Fiersbacher Str.");
break;
}
case 101623:
{
returnValue = F("Fierthstr.");
break;
}
case 101624:
{
returnValue = F("Fieseler-Storch-Str.");
break;
}
case 101625:
{
returnValue = F("Fieselerstr.");
break;
}
case 101626:
{
returnValue = F("Fieser Stiel");
break;
}
case 101627:
{
returnValue = F("Fieskostr.");
break;
}
case 101628:
{
returnValue = F("Fiesteler Str.");
break;
}
case 101629:
{
returnValue = F("Fiesteler Weg");
break;
}
case 101630:
{
returnValue = F("Fiete-Kay-Platz");
break;
}
case 101631:
{
returnValue = F("Fiete-Noll-Weg");
break;
}
case 101632:
{
returnValue = F("Fiete-Schulze-Str.");
break;
}
case 101633:
{
returnValue = F("Fieteweg");
break;
}
case 101634:
{
returnValue = F("Fietzeweg");
break;
}
case 101635:
{
returnValue = F("Fietzke");
break;
}
case 101636:
{
returnValue = F("Fießlerweg");
break;
}
case 101637:
{
returnValue = F("Fifth Street");
break;
}
case 101638:
{
returnValue = F("Figgenbergweg");
break;
}
case 101639:
{
returnValue = F("Figgenweg");
break;
}
case 101640:
{
returnValue = F("Figline-Valdarno-Ring");
break;
}
case 101641:
{
returnValue = F("Figurenfeld");
break;
}
case 101642:
{
returnValue = F("Figurenweg");
break;
}
case 101643:
{
returnValue = F("Figurstr.");
break;
}
case 101644:
{
returnValue = F("Figurweg");
break;
}
case 101645:
{
returnValue = F("Fikensolterfeld");
break;
}
case 101646:
{
returnValue = F("Fikentscherstr.");
break;
}
case 101647:
{
returnValue = F("Filastr.");
break;
}
case 101648:
{
returnValue = F("Filbensteige");
break;
}
case 101649:
{
returnValue = F("Filberg");
break;
}
case 101650:
{
returnValue = F("Filchendorfer Str.");
break;
}
case 101651:
{
returnValue = F("Filchenhard");
break;
}
case 101652:
{
returnValue = F("Filchnerstr.");
break;
}
case 101653:
{
returnValue = F("Filchnerweg");
break;
}
case 101654:
{
returnValue = F("Filde");
break;
}
case 101655:
{
returnValue = F("Fildenmoos");
break;
}
case 101656:
{
returnValue = F("Fildenstr.");
break;
}
case 101657:
{
returnValue = F("Filder Str.");
break;
}
case 101658:
{
returnValue = F("Filderbahnstr.");
break;
}
case 101659:
{
returnValue = F("Filderheide");
break;
}
case 101660:
{
returnValue = F("Filderhöhe");
break;
}
case 101661:
{
returnValue = F("Fildersteg");
break;
}
case 101662:
{
returnValue = F("Filderstr.");
break;
}
case 101663:
{
returnValue = F("Filderstädter Str.");
break;
}
case 101664:
{
returnValue = F("Filderweg");
break;
}
case 101665:
{
returnValue = F("Fildesweg");
break;
}
case 101666:
{
returnValue = F("Fildeweg");
break;
}
case 101667:
{
returnValue = F("Fileitzen");
break;
}
case 101668:
{
returnValue = F("Filger Bruch");
break;
}
case 101669:
{
returnValue = F("Filialweg");
break;
}
case 101670:
{
returnValue = F("Filkuhlweg");
break;
}
case 101671:
{
returnValue = F("Fillager Weg");
break;
}
case 101672:
{
returnValue = F("Fillastr.");
break;
}
case 101673:
{
returnValue = F("Fillbachstr.");
break;
}
case 101674:
{
returnValue = F("Filleberg");
break;
}
case 101675:
{
returnValue = F("Fillekuhle");
break;
}
case 101676:
{
returnValue = F("Fillenkamp");
break;
}
case 101677:
{
returnValue = F("Filler Klee");
break;
}
case 101678:
{
returnValue = F("Fillerbach");
break;
}
case 101679:
{
returnValue = F("Fillerberg");
break;
}
case 101680:
{
returnValue = F("Fillerbrunnen");
break;
}
case 101681:
{
returnValue = F("Fillerdamm");
break;
}
case 101682:
{
returnValue = F("Fillerfuhren");
break;
}
case 101683:
{
returnValue = F("Fillerheide");
break;
}
case 101684:
{
returnValue = F("Fillerkamp");
break;
}
case 101685:
{
returnValue = F("Fillerkampsweg");
break;
}
case 101686:
{
returnValue = F("Fillerkuhle");
break;
}
case 101687:
{
returnValue = F("Fillerstiege");
break;
}
case 101688:
{
returnValue = F("Fillibachstr.");
break;
}
case 101689:
{
returnValue = F("Fillinghäus");
break;
}
case 101690:
{
returnValue = F("Fillkampstr.");
break;
}
case 101691:
{
returnValue = F("Fillkuhle");
break;
}
case 101692:
{
returnValue = F("Fillstr.");
break;
}
case 101693:
{
returnValue = F("Filmer-Lange-Str.");
break;
}
case 101694:
{
returnValue = F("Filmerdamm");
break;
}
case 101695:
{
returnValue = F("Filmstr.");
break;
}
case 101696:
{
returnValue = F("Filmweg");
break;
}
case 101697:
{
returnValue = F("Fils");
break;
}
case 101698:
{
returnValue = F("Fils-Kätheri-Weg");
break;
}
case 101699:
{
returnValue = F("Filsaue");
break;
}
case 101700:
{
returnValue = F("Filsbogen");
break;
}
case 101701:
{
returnValue = F("Filscheid");
break;
}
case 101702:
{
returnValue = F("Filscher Str.");
break;
}
case 101703:
{
returnValue = F("Filscher Wäldchen");
break;
}
case 101704:
{
returnValue = F("Filsecker Str.");
break;
}
case 101705:
{
returnValue = F("Filseckstr.");
break;
}
case 101706:
{
returnValue = F("Filsenbergstr.");
break;
}
case 101707:
{
returnValue = F("Filsenbergweg");
break;
}
case 101708:
{
returnValue = F("Filsener Kirschenpfad");
break;
}
case 101709:
{
returnValue = F("Filsener Kirschenpfad / Alter Fuhrweg");
break;
}
case 101710:
{
returnValue = F("Filsener Str.");
break;
}
case 101711:
{
returnValue = F("Filsenweg");
break;
}
case 101712:
{
returnValue = F("Filsermayrstr.");
break;
}
case 101713:
{
returnValue = F("Filserstr.");
break;
}
case 101714:
{
returnValue = F("Filserweg");
break;
}
case 101715:
{
returnValue = F("Filskaul");
break;
}
case 101716:
{
returnValue = F("Filssteg");
break;
}
case 101717:
{
returnValue = F("Filsstr.");
break;
}
case 101718:
{
returnValue = F("Filstalstr.");
break;
}
case 101719:
{
returnValue = F("Filstroffer Str.");
break;
}
case 101720:
{
returnValue = F("Filsumer Str.");
break;
}
case 101721:
{
returnValue = F("Filsweg");
break;
}
case 101722:
{
returnValue = F("Filswiesenstr.");
break;
}
case 101723:
{
returnValue = F("Filterberg");
break;
}
case 101724:
{
returnValue = F("Filterskoul");
break;
}
case 101725:
{
returnValue = F("Filterstr.");
break;
}
case 101726:
{
returnValue = F("Filtrastr.");
break;
}
case 101727:
{
returnValue = F("Filzbauernweg");
break;
}
case 101728:
{
returnValue = F("Filzbergstr.");
break;
}
case 101729:
{
returnValue = F("Filzener Weg");
break;
}
case 101730:
{
returnValue = F("Filzengraben");
break;
}
case 101731:
{
returnValue = F("Filzenstr.");
break;
}
case 101732:
{
returnValue = F("Filzenweg");
break;
}
case 101733:
{
returnValue = F("Filzenwiesenweg");
break;
}
case 101734:
{
returnValue = F("Filzgarten");
break;
}
case 101735:
{
returnValue = F("Filzgasse");
break;
}
case 101736:
{
returnValue = F("Filzgrabenweg");
break;
}
case 101737:
{
returnValue = F("Filzinger Kirchenweg");
break;
}
case 101738:
{
returnValue = F("Filzinger Str.");
break;
}
case 101739:
{
returnValue = F("Filzmoosstr.");
break;
}
case 101740:
{
returnValue = F("Filzstr.");
break;
}
case 101741:
{
returnValue = F("Filztal");
break;
}
case 101742:
{
returnValue = F("Filzteichstr.");
break;
}
case 101743:
{
returnValue = F("Filzweg");
break;
}
case 101744:
{
returnValue = F("Filzweidenweg");
break;
}
case 101745:
{
returnValue = F("Filzwiesenweg");
break;
}
case 101746:
{
returnValue = F("Filßstr.");
break;
}
case 101747:
{
returnValue = F("Fimbergstr.");
break;
}
case 101748:
{
returnValue = F("Fin Wai");
break;
}
case 101749:
{
returnValue = F("Finaleweg");
break;
}
case 101750:
{
returnValue = F("Finanzrat-Albert-Str.");
break;
}
case 101751:
{
returnValue = F("Finanzrat-Albrecht-Str.");
break;
}
case 101752:
{
returnValue = F("Finanzstr.");
break;
}
case 101753:
{
returnValue = F("Finckener Str.");
break;
}
case 101754:
{
returnValue = F("Finckenweg");
break;
}
case 101755:
{
returnValue = F("Finckestr.");
break;
}
case 101756:
{
returnValue = F("Finckeweg");
break;
}
case 101757:
{
returnValue = F("Finckstr.");
break;
}
case 101758:
{
returnValue = F("Findanweg");
break;
}
case 101759:
{
returnValue = F("Findberg");
break;
}
case 101760:
{
returnValue = F("Findbergstr.");
break;
}
case 101761:
{
returnValue = F("Findbergweg");
break;
}
case 101762:
{
returnValue = F("Findeisenstr.");
break;
}
case 101763:
{
returnValue = F("Findeisenweg");
break;
}
case 101764:
{
returnValue = F("Findelbergweg");
break;
}
case 101765:
{
returnValue = F("Findelgasse");
break;
}
case 101766:
{
returnValue = F("Findelgäßchen");
break;
}
case 101767:
{
returnValue = F("Findelmühlstr.");
break;
}
case 101768:
{
returnValue = F("Findelsbrink");
break;
}
case 101769:
{
returnValue = F("Findelsgrund");
break;
}
case 101770:
{
returnValue = F("Findelshöhe");
break;
}
case 101771:
{
returnValue = F("Findelstr.");
break;
}
case 101772:
{
returnValue = F("Findelweg");
break;
}
case 101773:
{
returnValue = F("Findelwiesenstr.");
break;
}
case 101774:
{
returnValue = F("Findingstr.");
break;
}
case 101775:
{
returnValue = F("Findlinge groß");
break;
}
case 101776:
{
returnValue = F("Findlingsbogen");
break;
}
case 101777:
{
returnValue = F("Findlingsgarten");
break;
}
case 101778:
{
returnValue = F("Findlingsgarten Königslutter");
break;
}
case 101779:
{
returnValue = F("Findlingspark");
break;
}
case 101780:
{
returnValue = F("Findlingspark Henzendorf");
break;
}
case 101781:
{
returnValue = F("Findlingsplatz");
break;
}
case 101782:
{
returnValue = F("Findlingstr.");
break;
}
case 101783:
{
returnValue = F("Findlingsweg");
break;
}
case 101784:
{
returnValue = F("Findloser Weg");
break;
}
case 101785:
{
returnValue = F("Findlsteiner Str.");
break;
}
case 101786:
{
returnValue = F("Findlweg");
break;
}
case 101787:
{
returnValue = F("Findorfer Str.");
break;
}
case 101788:
{
returnValue = F("Findorff Str.");
break;
}
case 101789:
{
returnValue = F("Findorff-Tunnel");
break;
}
case 101790:
{
returnValue = F("Findorffstr.");
break;
}
case 101791:
{
returnValue = F("Findorffweg");
break;
}
case 101792:
{
returnValue = F("Findstellenweg");
break;
}
case 101793:
{
returnValue = F("Findörfer Str.");
break;
}
case 101794:
{
returnValue = F("Fine Frau");
break;
}
case 101795:
{
returnValue = F("Fineberg");
break;
}
case 101796:
{
returnValue = F("Finefrau");
break;
}
case 101797:
{
returnValue = F("Finefraustr.");
break;
}
case 101798:
{
returnValue = F("Finefrauweg");
break;
}
case 101799:
{
returnValue = F("Finesweg");
break;
}
case 101800:
{
returnValue = F("Fingelweg");
break;
}
case 101801:
{
returnValue = F("Fingergasse");
break;
}
case 101802:
{
returnValue = F("Fingerhut");
break;
}
case 101803:
{
returnValue = F("Fingerhutsgasse");
break;
}
case 101804:
{
returnValue = F("Fingerhutsmühle");
break;
}
case 101805:
{
returnValue = F("Fingerhutsmühlenweg");
break;
}
case 101806:
{
returnValue = F("Fingerhutsteig");
break;
}
case 101807:
{
returnValue = F("Fingerhutstr.");
break;
}
case 101808:
{
returnValue = F("Fingerhutsweg");
break;
}
case 101809:
{
returnValue = F("Fingerhutweg");
break;
}
case 101810:
{
returnValue = F("Fingerkrautweg");
break;
}
case 101811:
{
returnValue = F("Fingerleweg");
break;
}
case 101812:
{
returnValue = F("Fingers Kamp");
break;
}
case 101813:
{
returnValue = F("Fingersbrinkweg");
break;
}
case 101814:
{
returnValue = F("Fingersteinstr.");
break;
}
case 101815:
{
returnValue = F("Fingert");
break;
}
case 101816:
{
returnValue = F("Fingerts Jaas");
break;
}
case 101817:
{
returnValue = F("Fingerweg");
break;
}
case 101818:
{
returnValue = F("Finggasse");
break;
}
case 101819:
{
returnValue = F("Fingscheid");
break;
}
case 101820:
{
returnValue = F("Finienweg");
break;
}
case 101821:
{
returnValue = F("Finike-Str.");
break;
}
case 101822:
{
returnValue = F("Finisberg");
break;
}
case 101823:
{
returnValue = F("Finkecke");
break;
}
case 101824:
{
returnValue = F("Finkelberg");
break;
}
case 101825:
{
returnValue = F("Finkelbergweg");
break;
}
case 101826:
{
returnValue = F("Finkelerstr.");
break;
}
case 101827:
{
returnValue = F("Finkelnburg");
break;
}
case 101828:
{
returnValue = F("Finkelock");
break;
}
case 101829:
{
returnValue = F("Finkelsteinstr.");
break;
}
case 101830:
{
returnValue = F("Finkenallee");
break;
}
case 101831:
{
returnValue = F("Finkenau");
break;
}
case 101832:
{
returnValue = F("Finkenaue");
break;
}
case 101833:
{
returnValue = F("Finkenauel");
break;
}
case 101834:
{
returnValue = F("Finkenbacher Str.");
break;
}
case 101835:
{
returnValue = F("Finkenbacher Weg");
break;
}
case 101836:
{
returnValue = F("Finkenbachstr.");
break;
}
case 101837:
{
returnValue = F("Finkenbachweg");
break;
}
case 101838:
{
returnValue = F("Finkenbalken");
break;
}
case 101839:
{
returnValue = F("Finkenbargen");
break;
}
case 101840:
{
returnValue = F("Finkenbauer");
break;
}
case 101841:
{
returnValue = F("Finkenbecke");
break;
}
case 101842:
{
returnValue = F("Finkenberg");
break;
}
case 101843:
{
returnValue = F("Finkenberger Kirchweg");
break;
}
case 101844:
{
returnValue = F("Finkenberger Weg");
break;
}
case 101845:
{
returnValue = F("Finkenbergstr.");
break;
}
case 101846:
{
returnValue = F("Finkenbergsweg");
break;
}
case 101847:
{
returnValue = F("Finkenbergweg");
break;
}
case 101848:
{
returnValue = F("Finkenbogen");
break;
}
case 101849:
{
returnValue = F("Finkenborner Weg");
break;
}
case 101850:
{
returnValue = F("Finkenbreil");
break;
}
case 101851:
{
returnValue = F("Finkenbreite");
break;
}
case 101852:
{
returnValue = F("Finkenbrink");
break;
}
case 101853:
{
returnValue = F("Finkenbruch");
break;
}
case 101854:
{
returnValue = F("Finkenbrunn");
break;
}
case 101855:
{
returnValue = F("Finkenbrück");
break;
}
case 101856:
{
returnValue = F("Finkenbuckweg");
break;
}
case 101857:
{
returnValue = F("Finkenburg");
break;
}
case 101858:
{
returnValue = F("Finkenburger Weg");
break;
}
case 101859:
{
returnValue = F("Finkenburghang");
break;
}
case 101860:
{
returnValue = F("Finkenburgstr.");
break;
}
case 101861:
{
returnValue = F("Finkenburgweg");
break;
}
case 101862:
{
returnValue = F("Finkenbusch");
break;
}
case 101863:
{
returnValue = F("Finkenbuschsträßle");
break;
}
case 101864:
{
returnValue = F("Finkenbuschweg");
break;
}
case 101865:
{
returnValue = F("Finkenbühlstr.");
break;
}
case 101866:
{
returnValue = F("Finkenbühlweg");
break;
}
case 101867:
{
returnValue = F("Finkendell");
break;
}
case 101868:
{
returnValue = F("Finkeneck");
break;
}
case 101869:
{
returnValue = F("Finkenfeld");
break;
}
case 101870:
{
returnValue = F("Finkenfeldstr.");
break;
}
case 101871:
{
returnValue = F("Finkenflucht");
break;
}
case 101872:
{
returnValue = F("Finkenflugweg");
break;
}
case 101873:
{
returnValue = F("Finkengang");
break;
}
case 101874:
{
returnValue = F("Finkengarten");
break;
}
case 101875:
{
returnValue = F("Finkengasse");
break;
}
case 101876:
{
returnValue = F("Finkengraben");
break;
}
case 101877:
{
returnValue = F("Finkengrund");
break;
}
case 101878:
{
returnValue = F("Finkengässlein");
break;
}
case 101879:
{
returnValue = F("Finkenhag");
break;
}
case 101880:
{
returnValue = F("Finkenhain");
break;
}
case 101881:
{
returnValue = F("Finkenhainer Str.");
break;
}
case 101882:
{
returnValue = F("Finkenhammerweg");
break;
}
case 101883:
{
returnValue = F("Finkenhausen");
break;
}
case 101884:
{
returnValue = F("Finkenhebbel");
break;
}
case 101885:
{
returnValue = F("Finkenheide");
break;
}
case 101886:
{
returnValue = F("Finkenheider Weg");
break;
}
case 101887:
{
returnValue = F("Finkenhein");
break;
}
case 101888:
{
returnValue = F("Finkenherd");
break;
}
case 101889:
{
returnValue = F("Finkenherder Weg");
break;
}
case 101890:
{
returnValue = F("Finkenherdsiedlung");
break;
}
case 101891:
{
returnValue = F("Finkenherdstr.");
break;
}
case 101892:
{
returnValue = F("Finkenhof");
break;
}
case 101893:
{
returnValue = F("Finkenhofpark");
break;
}
case 101894:
{
returnValue = F("Finkenhofweg");
break;
}
case 101895:
{
returnValue = F("Finkenholler Heide");
break;
}
case 101896:
{
returnValue = F("Finkenhuiser Str.");
break;
}
case 101897:
{
returnValue = F("Finkenhähnchenweg");
break;
}
case 101898:
{
returnValue = F("Finkenhöhe");
break;
}
case 101899:
{
returnValue = F("Finkenhörne");
break;
}
case 101900:
{
returnValue = F("Finkenhübelstr.");
break;
}
case 101901:
{
returnValue = F("Finkenhügel");
break;
}
case 101902:
{
returnValue = F("Finkenhütte");
break;
}
case 101903:
{
returnValue = F("Finkenkamp");
break;
}
case 101904:
{
returnValue = F("Finkenkoppel");
break;
}
case 101905:
{
returnValue = F("Finkenkrug");
break;
}
case 101906:
{
returnValue = F("Finkenkruger Str.");
break;
}
case 101907:
{
returnValue = F("Finkenlache");
break;
}
case 101908:
{
returnValue = F("Finkenliethe");
break;
}
case 101909:
{
returnValue = F("Finkenloh");
break;
}
case 101910:
{
returnValue = F("Finkenlohe");
break;
}
case 101911:
{
returnValue = F("Finkenlust");
break;
}
case 101912:
{
returnValue = F("Finkenmoor");
break;
}
case 101913:
{
returnValue = F("Finkenmühle");
break;
}
case 101914:
{
returnValue = F("Finkenmühlenstr.");
break;
}
case 101915:
{
returnValue = F("Finkenmühlenweg");
break;
}
case 101916:
{
returnValue = F("Finkenmüllersweg");
break;
}
case 101917:
{
returnValue = F("Finkennest");
break;
}
case 101918:
{
returnValue = F("Finkennickel Schneise");
break;
}
case 101919:
{
returnValue = F("Finkenpfad");
break;
}
case 101920:
{
returnValue = F("Finkenpfad I");
break;
}
case 101921:
{
returnValue = F("Finkenpfad II");
break;
}
case 101922:
{
returnValue = F("Finkenpfad III");
break;
}
case 101923:
{
returnValue = F("Finkenpfad IV");
break;
}
case 101924:
{
returnValue = F("Finkenpfad V");
break;
}
case 101925:
{
returnValue = F("Finkenpfad VI");
break;
}
case 101926:
{
returnValue = F("Finkenplatz");
break;
}
case 101927:
{
returnValue = F("Finkenrain");
break;
}
case 101928:
{
returnValue = F("Finkenrainweg");
break;
}
case 101929:
{
returnValue = F("Finkenrather Str.");
break;
}
case 101930:
{
returnValue = F("Finkenrather Weg");
break;
}
case 101931:
{
returnValue = F("Finkenrehm");
break;
}
case 101932:
{
returnValue = F("Finkenreuteweg");
break;
}
case 101933:
{
returnValue = F("Finkenried");
break;
}
case 101934:
{
returnValue = F("Finkenring");
break;
}
case 101935:
{
returnValue = F("Finkenschlag");
break;
}
case 101936:
{
returnValue = F("Finkenschlagweg");
break;
}
case 101937:
{
returnValue = F("Finkenschneise");
break;
}
case 101938:
{
returnValue = F("Finkenslag");
break;
}
case 101939:
{
returnValue = F("Finkensteg");
break;
}
case 101940:
{
returnValue = F("Finkensteig");
break;
}
case 101941:
{
returnValue = F("Finkensteige");
break;
}
case 101942:
{
returnValue = F("Finkensteiner Str.");
break;
}
case 101943:
{
returnValue = F("Finkensteinstr.");
break;
}
case 101944:
{
returnValue = F("Finkenstieg");
break;
}
case 101945:
{
returnValue = F("Finkenstiege");
break;
}
case 101946:
{
returnValue = F("Finkenstr.");
break;
}
case 101947:
{
returnValue = F("Finkental");
break;
}
case 101948:
{
returnValue = F("Finkentalweg");
break;
}
case 101949:
{
returnValue = F("Finkenwalder Str.");
break;
}
case 101950:
{
returnValue = F("Finkenweg");
break;
}
case 101951:
{
returnValue = F("Finkenweg 202 - 250");
break;
}
case 101952:
{
returnValue = F("Finkenwerder");
break;
}
case 101953:
{
returnValue = F("Finkenwiese");
break;
}
case 101954:
{
returnValue = F("Finkenwiesen");
break;
}
case 101955:
{
returnValue = F("Finkenwiesenstr.");
break;
}
case 101956:
{
returnValue = F("Finkenwieser Str.");
break;
}
case 101957:
{
returnValue = F("Finkenwärderstr.");
break;
}
case 101958:
{
returnValue = F("Finker");
break;
}
case 101959:
{
returnValue = F("Finkerei");
break;
}
case 101960:
{
returnValue = F("Finkerstalweg");
break;
}
case 101961:
{
returnValue = F("Finkersäckerweg");
break;
}
case 101962:
{
returnValue = F("Finkeschneise");
break;
}
case 101963:
{
returnValue = F("Finkestr.");
break;
}
case 101964:
{
returnValue = F("Finkeweg");
break;
}
case 101965:
{
returnValue = F("Finkgartenweg");
break;
}
case 101966:
{
returnValue = F("Finkhauschaussee");
break;
}
case 101967:
{
returnValue = F("Finkhausweg");
break;
}
case 101968:
{
returnValue = F("Finkhütte");
break;
}
case 101969:
{
returnValue = F("Finkingsen");
break;
}
case 101970:
{
returnValue = F("Finkkreisel");
break;
}
case 101971:
{
returnValue = F("Finklerweg");
break;
}
case 101972:
{
returnValue = F("Finksaal");
break;
}
case 101973:
{
returnValue = F("Finkshagen");
break;
}
case 101974:
{
returnValue = F("Finkstr.");
break;
}
case 101975:
{
returnValue = F("Finkstroth");
break;
}
case 101976:
{
returnValue = F("Finkwarder");
break;
}
case 101977:
{
returnValue = F("Finkweg");
break;
}
case 101978:
{
returnValue = F("Finmanshof");
break;
}
case 101979:
{
returnValue = F("Finn-Dingi-Weg");
break;
}
case 101980:
{
returnValue = F("Finna");
break;
}
case 101981:
{
returnValue = F("Finnaerberg");
break;
}
case 101982:
{
returnValue = F("Finnbahn");
break;
}
case 101983:
{
returnValue = F("Finne Wanderweg");
break;
}
case 101984:
{
returnValue = F("Finnebahn");
break;
}
case 101985:
{
returnValue = F("Finneck");
break;
}
case 101986:
{
returnValue = F("Finnen Bahn gelenkschonender Jogging Pfad 400M");
break;
}
case 101987:
{
returnValue = F("Finnenbahn");
break;
}
case 101988:
{
returnValue = F("Finnenbahn TSV Gersthofen");
break;
}
case 101989:
{
returnValue = F("Finnenbahn des TSV Gersthofen");
break;
}
case 101990:
{
returnValue = F("Finnenhaus");
break;
}
case 101991:
{
returnValue = F("Finnenredder");
break;
}
case 101992:
{
returnValue = F("Finnentroper Str.");
break;
}
case 101993:
{
returnValue = F("Finnenweg");
break;
}
case 101994:
{
returnValue = F("Finnhüttenweg");
break;
}
case 101995:
{
returnValue = F("Finninger Str.");
break;
}
case 101996:
{
returnValue = F("Finninger Weg");
break;
}
case 101997:
{
returnValue = F("Finnische Allee");
break;
}
case 101998:
{
returnValue = F("Finnischer Weg");
break;
}
case 101999:
{
returnValue = F("Finnlandring");
break;
}
case 102000:
{
returnValue = F("Finnlandsiedlung");
break;
}
case 102001:
{
returnValue = F("Finnlandstr.");
break;
}
case 102002:
{
returnValue = F("Finnlandweg");
break;
}
case 102003:
{
returnValue = F("Finnwai");
break;
}
case 102004:
{
returnValue = F("Finower Str.");
break;
}
case 102005:
{
returnValue = F("Finowfurter Ring");
break;
}
case 102006:
{
returnValue = F("Finowstr.");
break;
}
case 102007:
{
returnValue = F("Finschstr.");
break;
}
case 102008:
{
returnValue = F("Finsinger Str.");
break;
}
case 102009:
{
returnValue = F("Finsinger Weg");
break;
}
case 102010:
{
returnValue = F("Finspångsgatan");
break;
}
case 102011:
{
returnValue = F("Finsterauer Lusensteig");
break;
}
case 102012:
{
returnValue = F("Finsterauer Weg");
break;
}
case 102013:
{
returnValue = F("Finsterauerstr.");
break;
}
case 102014:
{
returnValue = F("Finsterbachstr.");
break;
}
case 102015:
{
returnValue = F("Finsterbachweg");
break;
}
case 102016:
{
returnValue = F("Finsterberger Str.");
break;
}
case 102017:
{
returnValue = F("Finsterberger Weg");
break;
}
case 102018:
{
returnValue = F("Finsterbergstr.");
break;
}
case 102019:
{
returnValue = F("Finsterbühlweg");
break;
}
case 102020:
{
returnValue = F("Finsterdobelweg");
break;
}
case 102021:
{
returnValue = F("Finstere Gasse");
break;
}
case 102022:
{
returnValue = F("Finsterer Gang");
break;
}
case 102023:
{
returnValue = F("Finsterer Grund");
break;
}
case 102024:
{
returnValue = F("Finsterer Klingen Weg");
break;
}
case 102025:
{
returnValue = F("Finsterer Weg");
break;
}
case 102026:
{
returnValue = F("Finsterermünzweg");
break;
}
case 102027:
{
returnValue = F("Finstergasse");
break;
}
case 102028:
{
returnValue = F("Finstergrabenweg");
break;
}
case 102029:
{
returnValue = F("Finstergrund");
break;
}
case 102030:
{
returnValue = F("Finstergrundweg");
break;
}
case 102031:
{
returnValue = F("Finstergässel");
break;
}
case 102032:
{
returnValue = F("Finstergässle");
break;
}
case 102033:
{
returnValue = F("Finsterhaid");
break;
}
case 102034:
{
returnValue = F("Finsterheckstr.");
break;
}
case 102035:
{
returnValue = F("Finsterholzstr.");
break;
}
case 102036:
{
returnValue = F("Finsterholzweg");
break;
}
case 102037:
{
returnValue = F("Finsterhäldeweg");
break;
}
case 102038:
{
returnValue = F("Finsterhölzle Weg");
break;
}
case 102039:
{
returnValue = F("Finsterlandstr.");
break;
}
case 102040:
{
returnValue = F("Finsterlindenbachweg");
break;
}
case 102041:
{
returnValue = F("Finsterloch");
break;
}
case 102042:
{
returnValue = F("Finsterlochweg");
break;
}
case 102043:
{
returnValue = F("Finstermattenweg");
break;
}
case 102044:
{
returnValue = F("Finstermühlenstr.");
break;
}
case 102045:
{
returnValue = F("Finstermühlweg");
break;
}
case 102046:
{
returnValue = F("Finsternheimer Str.");
break;
}
case 102047:
{
returnValue = F("Finsternthalerweg");
break;
}
case 102048:
{
returnValue = F("Finsterrainweg");
break;
}
case 102049:
{
returnValue = F("Finsterroter Weg");
break;
}
case 102050:
{
returnValue = F("Finstersichel");
break;
}
case 102051:
{
returnValue = F("Finstertal");
break;
}
case 102052:
{
returnValue = F("Finstertalweg");
break;
}
case 102053:
{
returnValue = F("Finsterteichweg");
break;
}
case 102054:
{
returnValue = F("Finstertorstr.");
break;
}
case 102055:
{
returnValue = F("Finstertäleweg");
break;
}
case 102056:
{
returnValue = F("Finsterwaldaer Str.");
break;
}
case 102057:
{
returnValue = F("Finsterwalder Chaussee");
break;
}
case 102058:
{
returnValue = F("Finsterwalder Landstr.");
break;
}
case 102059:
{
returnValue = F("Finsterwalder Str.");
break;
}
case 102060:
{
returnValue = F("Finsterwalderstr.");
break;
}
case 102061:
{
returnValue = F("Finsterwaldweg");
break;
}
case 102062:
{
returnValue = F("Finsterwandweg");
break;
}
case 102063:
{
returnValue = F("Finsterwinkelweg");
break;
}
case 102064:
{
returnValue = F("Finsterwäldchenweg");
break;
}
case 102065:
{
returnValue = F("Finstingenstr.");
break;
}
case 102066:
{
returnValue = F("Finstingerstr.");
break;
}
case 102067:
{
returnValue = F("Finstres Gassl");
break;
}
case 102068:
{
returnValue = F("Fintan-Guntlin-Str.");
break;
}
case 102069:
{
returnValue = F("Fintauweg");
break;
}
case 102070:
{
returnValue = F("Fintelbarg");
break;
}
case 102071:
{
returnValue = F("Finteler Str.");
break;
}
case 102072:
{
returnValue = F("Finteler Weg");
break;
}
case 102073:
{
returnValue = F("Fintelmannstr.");
break;
}
case 102074:
{
returnValue = F("Fintenweg");
break;
}
case 102075:
{
returnValue = F("Finterei");
break;
}
case 102076:
{
returnValue = F("Finterstr.");
break;
}
case 102077:
{
returnValue = F("Finthener Str.");
break;
}
case 102078:
{
returnValue = F("Finther Hohl");
break;
}
case 102079:
{
returnValue = F("Finther Landstr.");
break;
}
case 102080:
{
returnValue = F("Finther Pfad");
break;
}
case 102081:
{
returnValue = F("Finther Str.");
break;
}
case 102082:
{
returnValue = F("Finther Weg");
break;
}
case 102083:
{
returnValue = F("Fintler Str.");
break;
}
case 102084:
{
returnValue = F("Fintzenstr.");
break;
}
case 102085:
{
returnValue = F("Finzbachklammweg");
break;
}
case 102086:
{
returnValue = F("Finzbachstr.");
break;
}
case 102087:
{
returnValue = F("Finzstr.");
break;
}
case 102088:
{
returnValue = F("Fiorilloweg");
break;
}
case 102089:
{
returnValue = F("Firespace");
break;
}
case 102090:
{
returnValue = F("Firkenweg");
break;
}
case 102091:
{
returnValue = F("Firmaneiplatz");
break;
}
case 102092:
{
returnValue = F("Firmelsdorf");
break;
}
case 102093:
{
returnValue = F("Firmengelände");
break;
}
case 102094:
{
returnValue = F("Firmenicher Pfädchen");
break;
}
case 102095:
{
returnValue = F("Firmenicher Str.");
break;
}
case 102096:
{
returnValue = F("Firmenichstr.");
break;
}
case 102097:
{
returnValue = F("Firmental");
break;
}
case 102098:
{
returnValue = F("Firmiangut");
break;
}
case 102099:
{
returnValue = F("Firmianstr.");
break;
}
case 102100:
{
returnValue = F("Firmiansweg");
break;
}
case 102101:
{
returnValue = F("Firmianweg");
break;
}
case 102102:
{
returnValue = F("Firmusweg");
break;
}
case 102103:
{
returnValue = F("Firnhaberstr.");
break;
}
case 102104:
{
returnValue = F("Firnlohgasse");
break;
}
case 102105:
{
returnValue = F("Firnsbachstr.");
break;
}
case 102106:
{
returnValue = F("Firnsbachtal");
break;
}
case 102107:
{
returnValue = F("Firnskuppenstr.");
break;
}
case 102108:
{
returnValue = F("Firnstr.");
break;
}
case 102109:
{
returnValue = F("Firreler Str.");
break;
}
case 102110:
{
returnValue = F("Firreler Weg");
break;
}
case 102111:
{
returnValue = F("First Avenue");
break;
}
case 102112:
{
returnValue = F("Firstalmweg");
break;
}
case 102113:
{
returnValue = F("Firstbachstr.");
break;
}
case 102114:
{
returnValue = F("Firstbergstr.");
break;
}
case 102115:
{
returnValue = F("Firstbergweg");
break;
}
case 102116:
{
returnValue = F("Firstenweg");
break;
}
case 102117:
{
returnValue = F("Firsthaldeweg");
break;
}
case 102118:
{
returnValue = F("Firststr.");
break;
}
case 102119:
{
returnValue = F("Firstwaldstr.");
break;
}
case 102120:
{
returnValue = F("Firstweg");
break;
}
case 102121:
{
returnValue = F("Fisbecker Forst");
break;
}
case 102122:
{
returnValue = F("Fisch");
break;
}
case 102123:
{
returnValue = F("Fisch-Teichanalge ASV 1989 Höchst/Nidder");
break;
}
case 102124:
{
returnValue = F("Fischacher Str.");
break;
}
case 102125:
{
returnValue = F("Fischacherhüllenweg");
break;
}
case 102126:
{
returnValue = F("Fischachstr.");
break;
}
case 102127:
{
returnValue = F("Fischachweg");
break;
}
case 102128:
{
returnValue = F("Fischadlerweg");
break;
}
case 102129:
{
returnValue = F("Fischaitnach");
break;
}
case 102130:
{
returnValue = F("Fischanger");
break;
}
case 102131:
{
returnValue = F("Fischangerstr.");
break;
}
case 102132:
{
returnValue = F("Fischau");
break;
}
case 102133:
{
returnValue = F("Fischbach");
break;
}
case 102134:
{
returnValue = F("Fischbachalmstr.");
break;
}
case 102135:
{
returnValue = F("Fischbacher Hauptstr.");
break;
}
case 102136:
{
returnValue = F("Fischbacher Kirchstr.");
break;
}
case 102137:
{
returnValue = F("Fischbacher Stellweg");
break;
}
case 102138:
{
returnValue = F("Fischbacher Str.");
break;
}
case 102139:
{
returnValue = F("Fischbacher Weg");
break;
}
case 102140:
{
returnValue = F("Fischbacherbergstr.");
break;
}
case 102141:
{
returnValue = F("Fischbachring");
break;
}
case 102142:
{
returnValue = F("Fischbachseit");
break;
}
case 102143:
{
returnValue = F("Fischbachstr.");
break;
}
case 102144:
{
returnValue = F("Fischbachsträßchen");
break;
}
case 102145:
{
returnValue = F("Fischbachtal");
break;
}
case 102146:
{
returnValue = F("Fischbachweg");
break;
}
case 102147:
{
returnValue = F("Fischbachwiesen");
break;
}
case 102148:
{
returnValue = F("Fischbank");
break;
}
case 102149:
{
returnValue = F("Fischbauerngasse");
break;
}
case 102150:
{
returnValue = F("Fischbecke");
break;
}
case 102151:
{
returnValue = F("Fischbecker Landstr.");
break;
}
case 102152:
{
returnValue = F("Fischbecker Str.");
break;
}
case 102153:
{
returnValue = F("Fischbeckstr.");
break;
}
case 102154:
{
returnValue = F("Fischbeckweg");
break;
}
case 102155:
{
returnValue = F("Fischbeker Str.");
break;
}
case 102156:
{
returnValue = F("Fischbeker Weg");
break;
}
case 102157:
{
returnValue = F("Fischborner Str.");
break;
}
case 102158:
{
returnValue = F("Fischbrunn");
break;
}
case 102159:
{
returnValue = F("Fischbrunnenplatz");
break;
}
case 102160:
{
returnValue = F("Fischbrunnenstr.");
break;
}
case 102161:
{
returnValue = F("Fischbrunner Weg");
break;
}
case 102162:
{
returnValue = F("Fischbräustr.");
break;
}
case 102163:
{
returnValue = F("Fischbrückstr.");
break;
}
case 102164:
{
returnValue = F("Fischbrünnleweg");
break;
}
case 102165:
{
returnValue = F("Fischbuck");
break;
}
case 102166:
{
returnValue = F("Fischburgstr.");
break;
}
case 102167:
{
returnValue = F("Fischbänkenstr.");
break;
}
case 102168:
{
returnValue = F("Fischbüttenweg");
break;
}
case 102169:
{
returnValue = F("Fischdiek");
break;
}
case 102170:
{
returnValue = F("Fischedickstr.");
break;
}
case 102171:
{
returnValue = F("Fischediek");
break;
}
case 102172:
{
returnValue = F("Fischelbacher Str.");
break;
}
case 102173:
{
returnValue = F("Fischelbacher Weg");
break;
}
case 102174:
{
returnValue = F("Fischelbachstr.");
break;
}
case 102175:
{
returnValue = F("Fischeldiek");
break;
}
case 102176:
{
returnValue = F("Fischeln");
break;
}
case 102177:
{
returnValue = F("Fischelner Str.");
break;
}
case 102178:
{
returnValue = F("Fischelner Weg");
break;
}
case 102179:
{
returnValue = F("Fischelstr.");
break;
}
case 102180:
{
returnValue = F("Fischenbeck");
break;
}
case 102181:
{
returnValue = F("Fischenberg");
break;
}
case 102182:
{
returnValue = F("Fischenbergerweg");
break;
}
case 102183:
{
returnValue = F("Fischenbergstr.");
break;
}
case 102184:
{
returnValue = F("Fischendorfer Str.");
break;
}
case 102185:
{
returnValue = F("Fischener Str.");
break;
}
case 102186:
{
returnValue = F("Fischenicher Höfe");
break;
}
case 102187:
{
returnValue = F("Fischenicher Str.");
break;
}
case 102188:
{
returnValue = F("Fischenzstr.");
break;
}
case 102189:
{
returnValue = F("Fischer Wild");
break;
}
case 102190:
{
returnValue = F("Fischer-Ehlers-Weg");
break;
}
case 102191:
{
returnValue = F("Fischer-Lietzow-Weg");
break;
}
case 102192:
{
returnValue = F("Fischer-Privatweg");
break;
}
case 102193:
{
returnValue = F("Fischer-Rueb-Str.");
break;
}
case 102194:
{
returnValue = F("Fischer-Witt-Weg");
break;
}
case 102195:
{
returnValue = F("Fischer-von-Erlach-Str.");
break;
}
case 102196:
{
returnValue = F("Fischerallee");
break;
}
case 102197:
{
returnValue = F("Fischeralmstr.");
break;
}
case 102198:
{
returnValue = F("Fischerau");
break;
}
case 102199:
{
returnValue = F("Fischeraue");
break;
}
case 102200:
{
returnValue = F("Fischerberg");
break;
}
case 102201:
{
returnValue = F("Fischerbergstr.");
break;
}
case 102202:
{
returnValue = F("Fischerbergweg");
break;
}
case 102203:
{
returnValue = F("Fischerbichl");
break;
}
case 102204:
{
returnValue = F("Fischerbrink");
break;
}
case 102205:
{
returnValue = F("Fischerbruch");
break;
}
case 102206:
{
returnValue = F("Fischerbräuwiese");
break;
}
case 102207:
{
returnValue = F("Fischerbrücke");
break;
}
case 102208:
{
returnValue = F("Fischerbuchetstr.");
break;
}
case 102209:
{
returnValue = F("Fischerbucht");
break;
}
case 102210:
{
returnValue = F("Fischerbuck");
break;
}
case 102211:
{
returnValue = F("Fischerbäckenweg");
break;
}
case 102212:
{
returnValue = F("Fischerbänk");
break;
}
case 102213:
{
returnValue = F("Fischerdamm");
break;
}
case 102214:
{
returnValue = F("Fischerdorf");
break;
}
case 102215:
{
returnValue = F("Fischerdörfchen");
break;
}
case 102216:
{
returnValue = F("Fischereck");
break;
}
case 102217:
{
returnValue = F("Fischerei");
break;
}
case 102218:
{
returnValue = F("Fischerei Eselsweg");
break;
}
case 102219:
{
returnValue = F("Fischereichenweg");
break;
}
case 102220:
{
returnValue = F("Fischereihof");
break;
}
case 102221:
{
returnValue = F("Fischereikämpe");
break;
}
case 102222:
{
returnValue = F("Fischereilehrpfad");
break;
}
case 102223:
{
returnValue = F("Fischereipfad");
break;
}
case 102224:
{
returnValue = F("Fischereiweg");
break;
}
case 102225:
{
returnValue = F("Fischerfeld");
break;
}
case 102226:
{
returnValue = F("Fischerfeldstr.");
break;
}
case 102227:
{
returnValue = F("Fischerfestplatz");
break;
}
case 102228:
{
returnValue = F("Fischerfleck");
break;
}
case 102229:
{
returnValue = F("Fischergang");
break;
}
case 102230:
{
returnValue = F("Fischergasse");
break;
}
case 102231:
{
returnValue = F("Fischergassl");
break;
}
case 102232:
{
returnValue = F("Fischergaßl");
break;
}
case 102233:
{
returnValue = F("Fischerglacis");
break;
}
case 102234:
{
returnValue = F("Fischerglasstr.");
break;
}
case 102235:
{
returnValue = F("Fischergreinweg");
break;
}
case 102236:
{
returnValue = F("Fischergrube");
break;
}
case 102237:
{
returnValue = F("Fischergrubweg");
break;
}
case 102238:
{
returnValue = F("Fischergärten");
break;
}
case 102239:
{
returnValue = F("Fischergärtle");
break;
}
case 102240:
{
returnValue = F("Fischergässle");
break;
}
case 102241:
{
returnValue = F("Fischergäßchen");
break;
}
case 102242:
{
returnValue = F("Fischergäßle");
break;
}
case 102243:
{
returnValue = F("Fischergäßlein");
break;
}
case 102244:
{
returnValue = F("Fischerhagen");
break;
}
case 102245:
{
returnValue = F("Fischerhalde");
break;
}
case 102246:
{
returnValue = F("Fischerhau-Str.");
break;
}
case 102247:
{
returnValue = F("Fischerhaus");
break;
}
case 102248:
{
returnValue = F("Fischerhausen");
break;
}
case 102249:
{
returnValue = F("Fischerhauser Weg");
break;
}
case 102250:
{
returnValue = F("Fischerhausgestell");
break;
}
case 102251:
{
returnValue = F("Fischerhausstr.");
break;
}
case 102252:
{
returnValue = F("Fischerhausweg");
break;
}
case 102253:
{
returnValue = F("Fischerheide");
break;
}
case 102254:
{
returnValue = F("Fischerhof");
break;
}
case 102255:
{
returnValue = F("Fischerhofkreisel");
break;
}
case 102256:
{
returnValue = F("Fischerhofstr.");
break;
}
case 102257:
{
returnValue = F("Fischerhohle");
break;
}
case 102258:
{
returnValue = F("Fischerholzweg");
break;
}
case 102259:
{
returnValue = F("Fischerhuder Kirchweg");
break;
}
case 102260:
{
returnValue = F("Fischerhuder Str.");
break;
}
case 102261:
{
returnValue = F("Fischerhäuser");
break;
}
case 102262:
{
returnValue = F("Fischerhäuslweg");
break;
}
case 102263:
{
returnValue = F("Fischerhöhe");
break;
}
case 102264:
{
returnValue = F("Fischerhütte");
break;
}
case 102265:
{
returnValue = F("Fischerhüttelweg");
break;
}
case 102266:
{
returnValue = F("Fischerhüttenweg");
break;
}
case 102267:
{
returnValue = F("Fischerinsel");
break;
}
case 102268:
{
returnValue = F("Fischerkai");
break;
}
case 102269:
{
returnValue = F("Fischerkamp");
break;
}
case 102270:
{
returnValue = F("Fischerkietz");
break;
}
case 102271:
{
returnValue = F("Fischerknabweg");
break;
}
case 102272:
{
returnValue = F("Fischerkoppel");
break;
}
case 102273:
{
returnValue = F("Fischerkrug");
break;
}
case 102274:
{
returnValue = F("Fischerlohe");
break;
}
case 102275:
{
returnValue = F("Fischermartlstr.");
break;
}
case 102276:
{
returnValue = F("Fischermatte");
break;
}
case 102277:
{
returnValue = F("Fischermühlenstr.");
break;
}
case 102278:
{
returnValue = F("Fischermühlenweg");
break;
}
case 102279:
{
returnValue = F("Fischern");
break;
}
case 102280:
{
returnValue = F("Fischerort");
break;
}
case 102281:
{
returnValue = F("Fischerotter Str.");
break;
}
case 102282:
{
returnValue = F("Fischerpatt");
break;
}
case 102283:
{
returnValue = F("Fischerpfad");
break;
}
case 102284:
{
returnValue = F("Fischerpförtchen");
break;
}
case 102285:
{
returnValue = F("Fischerpier");
break;
}
case 102286:
{
returnValue = F("Fischerplatz");
break;
}
case 102287:
{
returnValue = F("Fischerpoint");
break;
}
case 102288:
{
returnValue = F("Fischerrain");
break;
}
case 102289:
{
returnValue = F("Fischerredder");
break;
}
case 102290:
{
returnValue = F("Fischerreihe");
break;
}
case 102291:
{
returnValue = F("Fischerried");
break;
}
case 102292:
{
returnValue = F("Fischerring");
break;
}
case 102293:
{
returnValue = F("Fischerrott");
break;
}
case 102294:
{
returnValue = F("Fischers Brück");
break;
}
case 102295:
{
returnValue = F("Fischers Gasse");
break;
}
case 102296:
{
returnValue = F("Fischers Privatweg");
break;
}
case 102297:
{
returnValue = F("Fischers Weg");
break;
}
case 102298:
{
returnValue = F("Fischers' Gässle");
break;
}
case 102299:
{
returnValue = F("Fischersand");
break;
}
case 102300:
{
returnValue = F("Fischersberg");
break;
}
case 102301:
{
returnValue = F("Fischerschlößlstr.");
break;
}
case 102302:
{
returnValue = F("Fischerseele");
break;
}
case 102303:
{
returnValue = F("Fischerseeschneise");
break;
}
case 102304:
{
returnValue = F("Fischersgasse");
break;
}
case 102305:
{
returnValue = F("Fischersgrundweg");
break;
}
case 102306:
{
returnValue = F("Fischersgässchen");
break;
}
case 102307:
{
returnValue = F("Fischershof");
break;
}
case 102308:
{
returnValue = F("Fischershörn");
break;
}
case 102309:
{
returnValue = F("Fischersiedlung");
break;
}
case 102310:
{
returnValue = F("Fischerskamp");
break;
}
case 102311:
{
returnValue = F("Fischersleite");
break;
}
case 102312:
{
returnValue = F("Fischerspfad");
break;
}
case 102313:
{
returnValue = F("Fischerssiepen");
break;
}
case 102314:
{
returnValue = F("Fischersstr.");
break;
}
case 102315:
{
returnValue = F("Fischerstadt");
break;
}
case 102316:
{
returnValue = F("Fischerstatt");
break;
}
case 102317:
{
returnValue = F("Fischerstecherstr.");
break;
}
case 102318:
{
returnValue = F("Fischersteg");
break;
}
case 102319:
{
returnValue = F("Fischerstege");
break;
}
case 102320:
{
returnValue = F("Fischersteig");
break;
}
case 102321:
{
returnValue = F("Fischersteige");
break;
}
case 102322:
{
returnValue = F("Fischersteigerweg");
break;
}
case 102323:
{
returnValue = F("Fischerstieg");
break;
}
case 102324:
{
returnValue = F("Fischerstr.");
break;
}
case 102325:
{
returnValue = F("Fischersweg");
break;
}
case 102326:
{
returnValue = F("Fischertal");
break;
}
case 102327:
{
returnValue = F("Fischertalweg");
break;
}
case 102328:
{
returnValue = F("Fischertannenweg");
break;
}
case 102329:
{
returnValue = F("Fischerteich");
break;
}
case 102330:
{
returnValue = F("Fischertor");
break;
}
case 102331:
{
returnValue = F("Fischertorstr.");
break;
}
case 102332:
{
returnValue = F("Fischertwiete");
break;
}
case 102333:
{
returnValue = F("Fischerufer");
break;
}
case 102334:
{
returnValue = F("Fischerufer-Str.");
break;
}
case 102335:
{
returnValue = F("Fischervorstadt");
break;
}
case 102336:
{
returnValue = F("Fischerwaldweg");
break;
}
case 102337:
{
returnValue = F("Fischerwall");
break;
}
case 102338:
{
returnValue = F("Fischerweg");
break;
}
case 102339:
{
returnValue = F("Fischerwerdel");
break;
}
case 102340:
{
returnValue = F("Fischerwert");
break;
}
case 102341:
{
returnValue = F("Fischerwies");
break;
}
case 102342:
{
returnValue = F("Fischerwiesen Ring");
break;
}
case 102343:
{
returnValue = F("Fischerwinkel");
break;
}
case 102344:
{
returnValue = F("Fischerzeile");
break;
}
case 102345:
{
returnValue = F("Fischerziel");
break;
}
case 102346:
{
returnValue = F("Fischerzug");
break;
}
case 102347:
{
returnValue = F("Fischeräcker");
break;
}
case 102348:
{
returnValue = F("Fischeräckerstr.");
break;
}
case 102349:
{
returnValue = F("Fischeweg");
break;
}
case 102350:
{
returnValue = F("Fischfang");
break;
}
case 102351:
{
returnValue = F("Fischfeldweg");
break;
}
case 102352:
{
returnValue = F("Fischgarten");
break;
}
case 102353:
{
returnValue = F("Fischgasse");
break;
}
case 102354:
{
returnValue = F("Fischgießenweg");
break;
}
case 102355:
{
returnValue = F("Fischgracht");
break;
}
case 102356:
{
returnValue = F("Fischgrub");
break;
}
case 102357:
{
returnValue = F("Fischgrubengasse");
break;
}
case 102358:
{
returnValue = F("Fischgrubenweg");
break;
}
case 102359:
{
returnValue = F("Fischgärten");
break;
}
case 102360:
{
returnValue = F("Fischgässel");
break;
}
case 102361:
{
returnValue = F("Fischgäßchen");
break;
}
case 102362:
{
returnValue = F("Fischhaberstr.");
break;
}
case 102363:
{
returnValue = F("Fischhaberweg");
break;
}
case 102364:
{
returnValue = F("Fischhaus");
break;
}
case 102365:
{
returnValue = F("Fischhausbrücke");
break;
}
case 102366:
{
returnValue = F("Fischhausener Str.");
break;
}
case 102367:
{
returnValue = F("Fischhausenweg");
break;
}
case 102368:
{
returnValue = F("Fischhauser Str.");
break;
}
case 102369:
{
returnValue = F("Fischhausgasse");
break;
}
case 102370:
{
returnValue = F("Fischhausstr.");
break;
}
case 102371:
{
returnValue = F("Fischhausweg");
break;
}
case 102372:
{
returnValue = F("Fischheimer Str.");
break;
}
case 102373:
{
returnValue = F("Fischhof");
break;
}
case 102374:
{
returnValue = F("Fischhofpark Gartenschaugelände 2013");
break;
}
case 102375:
{
returnValue = F("Fischhäusle");
break;
}
case 102376:
{
returnValue = F("Fischhörn");
break;
}
case 102377:
{
returnValue = F("Fisching");
break;
}
case 102378:
{
returnValue = F("Fischinger Str.");
break;
}
case 102379:
{
returnValue = F("Fischinger Weg");
break;
}
case 102380:
{
returnValue = F("Fischingerstr.");
break;
}
case 102381:
{
returnValue = F("Fischkasten");
break;
}
case 102382:
{
returnValue = F("Fischkaten");
break;
}
case 102383:
{
returnValue = F("Fischkinderstube Edingen-Neckarhausen");
break;
}
case 102384:
{
returnValue = F("Fischkroog");
break;
}
case 102385:
{
returnValue = F("Fischlaeger");
break;
}
case 102386:
{
returnValue = F("Fischland");
break;
}
case 102387:
{
returnValue = F("Fischlandstr.");
break;
}
case 102388:
{
returnValue = F("Fischleingasse");
break;
}
case 102389:
{
returnValue = F("Fischleite");
break;
}
case 102390:
{
returnValue = F("Fischleitenweg");
break;
}
case 102391:
{
returnValue = F("Fischlinger Str.");
break;
}
case 102392:
{
returnValue = F("Fischlingsgasse");
break;
}
case 102393:
{
returnValue = F("Fischlochweg");
break;
}
case 102394:
{
returnValue = F("Fischlohweg");
break;
}
case 102395:
{
returnValue = F("Fischländer Weg");
break;
}
case 102396:
{
returnValue = F("Fischmannsseifen");
break;
}
case 102397:
{
returnValue = F("Fischmannstr.");
break;
}
case 102398:
{
returnValue = F("Fischmarkt");
break;
}
case 102399:
{
returnValue = F("Fischmarktstr.");
break;
}
case 102400:
{
returnValue = F("Fischmattweg");
break;
}
case 102401:
{
returnValue = F("Fischmeisterstr.");
break;
}
case 102402:
{
returnValue = F("Fischmeisterweg");
break;
}
case 102403:
{
returnValue = F("Fischmichlstr.");
break;
}
case 102404:
{
returnValue = F("Fischnau");
break;
}
case 102405:
{
returnValue = F("Fischotter");
break;
}
case 102406:
{
returnValue = F("Fischotterlinie");
break;
}
case 102407:
{
returnValue = F("Fischotterweg");
break;
}
case 102408:
{
returnValue = F("Fischpfad");
break;
}
case 102409:
{
returnValue = F("Fischpfortenstr.");
break;
}
case 102410:
{
returnValue = F("Fischpicke");
break;
}
case 102411:
{
returnValue = F("Fischrain");
break;
}
case 102412:
{
returnValue = F("Fischram");
break;
}
case 102413:
{
returnValue = F("Fischreiherstr.");
break;
}
case 102414:
{
returnValue = F("Fischreiherweg");
break;
}
case 102415:
{
returnValue = F("Fischschneiderstr.");
break;
}
case 102416:
{
returnValue = F("Fischseestr.");
break;
}
case 102417:
{
returnValue = F("Fischstr.");
break;
}
case 102418:
{
returnValue = F("Fischteich");
break;
}
case 102419:
{
returnValue = F("Fischteichallee");
break;
}
case 102420:
{
returnValue = F("Fischteiche");
break;
}
case 102421:
{
returnValue = F("Fischteichenweg");
break;
}
case 102422:
{
returnValue = F("Fischteichhörn");
break;
}
case 102423:
{
returnValue = F("Fischteichsfeld");
break;
}
case 102424:
{
returnValue = F("Fischteichstr.");
break;
}
case 102425:
{
returnValue = F("Fischteichweg");
break;
}
case 102426:
{
returnValue = F("Fischtor");
break;
}
case 102427:
{
returnValue = F("Fischtorplatz");
break;
}
case 102428:
{
returnValue = F("Fischunkelalmweg");
break;
}
case 102429:
{
returnValue = F("Fischwangstr.");
break;
}
case 102430:
{
returnValue = F("Fischwasserstr.");
break;
}
case 102431:
{
returnValue = F("Fischweg");
break;
}
case 102432:
{
returnValue = F("Fischwehrstr.");
break;
}
case 102433:
{
returnValue = F("Fischweide");
break;
}
case 102434:
{
returnValue = F("Fischweierer Weg");
break;
}
case 102435:
{
returnValue = F("Fischweiher");
break;
}
case 102436:
{
returnValue = F("Fischweiherstr.");
break;
}
case 102437:
{
returnValue = F("Fischweiherweg");
break;
}
case 102438:
{
returnValue = F("Fischwiese");
break;
}
case 102439:
{
returnValue = F("Fischwiesenweg");
break;
}
case 102440:
{
returnValue = F("Fischwoogstr.");
break;
}
case 102441:
{
returnValue = F("Fischwässerleweg");
break;
}
case 102442:
{
returnValue = F("Fischzucht");
break;
}
case 102443:
{
returnValue = F("Fischzuchtgrund");
break;
}
case 102444:
{
returnValue = F("Fischzuchtstr.");
break;
}
case 102445:
{
returnValue = F("Fischzuchtweg");
break;
}
case 102446:
{
returnValue = F("Fischzug");
break;
}
case 102447:
{
returnValue = F("Fischäcker");
break;
}
case 102448:
{
returnValue = F("Fischäckerstr.");
break;
}
case 102449:
{
returnValue = F("Fisenistr.");
break;
}
case 102450:
{
returnValue = F("Fiskediek");
break;
}
case 102451:
{
returnValue = F("Fiskerhauk");
break;
}
case 102452:
{
returnValue = F("Fiskerring");
break;
}
case 102453:
{
returnValue = F("Fiskerskamp");
break;
}
case 102454:
{
returnValue = F("Fiskusstr.");
break;
}
case 102455:
{
returnValue = F("Fiskusweg");
break;
}
case 102456:
{
returnValue = F("Fismerstr.");
break;
}
case 102457:
{
returnValue = F("Fisperweg");
break;
}
case 102458:
{
returnValue = F("Fissanweg");
break;
}
case 102459:
{
returnValue = F("Fissaubrück");
break;
}
case 102460:
{
returnValue = F("Fisseldiek");
break;
}
case 102461:
{
returnValue = F("Fissenbergstr.");
break;
}
case 102462:
{
returnValue = F("Fissenknicker Weg");
break;
}
case 102463:
{
returnValue = F("Fissenpad");
break;
}
case 102464:
{
returnValue = F("Fissmer-Anlage");
break;
}
case 102465:
{
returnValue = F("Fit- und Aktivparcours");
break;
}
case 102466:
{
returnValue = F("Fit- und Funpark");
break;
}
case 102467:
{
returnValue = F("Fitchburger Str.");
break;
}
case 102468:
{
returnValue = F("Fitchenweg");
break;
}
case 102469:
{
returnValue = F("Fitisring");
break;
}
case 102470:
{
returnValue = F("Fitness Parcours");
break;
}
case 102471:
{
returnValue = F("Fitness-Parcour");
break;
}
case 102472:
{
returnValue = F("Fitness-Parcours");
break;
}
case 102473:
{
returnValue = F("Fitness-Pfad");
break;
}
case 102474:
{
returnValue = F("Fitness-Pfad Fliegerhorst Fürstenfeldbruck");
break;
}
case 102475:
{
returnValue = F("Fitness-Zirkel");
break;
}
case 102476:
{
returnValue = F("Fitnessbereich");
break;
}
case 102477:
{
returnValue = F("Fitnessparcours");
break;
}
case 102478:
{
returnValue = F("Fitnesspfad");
break;
}
case 102479:
{
returnValue = F("Fitnessweg");
break;
}
case 102480:
{
returnValue = F("Fitschesweg");
break;
}
case 102481:
{
returnValue = F("Fitter Str.");
break;
}
case 102482:
{
returnValue = F("Fitterbach");
break;
}
case 102483:
{
returnValue = F("Fittergasse");
break;
}
case 102484:
{
returnValue = F("Fitting-Weg");
break;
}
case 102485:
{
returnValue = F("Fitz-Siegele-Weg");
break;
}
case 102486:
{
returnValue = F("Fitzbeker Weg");
break;
}
case 102487:
{
returnValue = F("Fitzendorf");
break;
}
case 102488:
{
returnValue = F("Fitzener Str.");
break;
}
case 102489:
{
returnValue = F("Fitzenweg");
break;
}
case 102490:
{
returnValue = F("Fitzenweiler");
break;
}
case 102491:
{
returnValue = F("Fitzenweilerstr.");
break;
}
case 102492:
{
returnValue = F("Fitzgasse");
break;
}
case 102493:
{
returnValue = F("Fitzmaurice-Weg");
break;
}
case 102494:
{
returnValue = F("Fitzplei");
break;
}
case 102495:
{
returnValue = F("Fitzweg");
break;
}
case 102496:
{
returnValue = F("Fiuggiring");
break;
}
case 102497:
{
returnValue = F("Fixberg");
break;
}
case 102498:
{
returnValue = F("Fixeneckallee");
break;
}
case 102499:
{
returnValue = F("Fixengasse");
break;
}
case 102500:
{
returnValue = F("Fixenhansenhofweg");
break;
}
case 102501:
{
returnValue = F("Fixheider Str.");
break;
}
case 102502:
{
returnValue = F("Fixweg");
break;
}
case 102503:
{
returnValue = F("Fizionstr.");
break;
}
case 102504:
{
returnValue = F("Fißmeckeweg");
break;
}
case 102505:
{
returnValue = F("Fißnacht");
break;
}
case 102506:
{
returnValue = F("Fjordallee");
break;
}
case 102507:
{
returnValue = F("Flaadenweg");
break;
}
case 102508:
{
returnValue = F("Flaakenweg");
break;
}
case 102509:
{
returnValue = F("Flaakeweg");
break;
}
case 102510:
{
returnValue = F("Flaarweg");
break;
}
case 102511:
{
returnValue = F("Flaaskamp");
break;
}
case 102512:
{
returnValue = F("Flaatmoor");
break;
}
case 102513:
{
returnValue = F("Flabbenhäuschen");
break;
}
case 102514:
{
returnValue = F("Flaberger Str.");
break;
}
case 102515:
{
returnValue = F("Flach-Fengler-Str.");
break;
}
case 102516:
{
returnValue = F("Flache Schneise");
break;
}
case 102517:
{
returnValue = F("Flachenberg");
break;
}
case 102518:
{
returnValue = F("Flachenfeld");
break;
}
case 102519:
{
returnValue = F("Flachengässchen");
break;
}
case 102520:
{
returnValue = F("Flachenweg");
break;
}
case 102521:
{
returnValue = F("Flaches Feld");
break;
}
case 102522:
{
returnValue = F("Flachfeldstr.");
break;
}
case 102523:
{
returnValue = F("Flachglasstr.");
break;
}
case 102524:
{
returnValue = F("Flachhaus");
break;
}
case 102525:
{
returnValue = F("Flachhofstr.");
break;
}
case 102526:
{
returnValue = F("Flachkolker Weg");
break;
}
case 102527:
{
returnValue = F("Flachlandtapir");
break;
}
case 102528:
{
returnValue = F("Flachmoorweg");
break;
}
case 102529:
{
returnValue = F("Flachsacker");
break;
}
case 102530:
{
returnValue = F("Flachsbachstr.");
break;
}
case 102531:
{
returnValue = F("Flachsbachweg");
break;
}
case 102532:
{
returnValue = F("Flachsbeckweg");
break;
}
case 102533:
{
returnValue = F("Flachsberg");
break;
}
case 102534:
{
returnValue = F("Flachsbergstr.");
break;
}
case 102535:
{
returnValue = F("Flachsbergweg");
break;
}
case 102536:
{
returnValue = F("Flachsbitz");
break;
}
case 102537:
{
returnValue = F("Flachsbleiche");
break;
}
case 102538:
{
returnValue = F("Flachsblumenstr.");
break;
}
case 102539:
{
returnValue = F("Flachsblütenweg");
break;
}
case 102540:
{
returnValue = F("Flachsbreite");
break;
}
case 102541:
{
returnValue = F("Flachsbruch");
break;
}
case 102542:
{
returnValue = F("Flachsbuschweg");
break;
}
case 102543:
{
returnValue = F("Flachsbühlstr.");
break;
}
case 102544:
{
returnValue = F("Flachsdarre");
break;
}
case 102545:
{
returnValue = F("Flachsdehne");
break;
}
case 102546:
{
returnValue = F("Flachsdörre");
break;
}
case 102547:
{
returnValue = F("Flachsfeld");
break;
}
case 102548:
{
returnValue = F("Flachsfelder");
break;
}
case 102549:
{
returnValue = F("Flachsfeldstr.");
break;
}
case 102550:
{
returnValue = F("Flachsfurt");
break;
}
case 102551:
{
returnValue = F("Flachsgarten");
break;
}
case 102552:
{
returnValue = F("Flachsgartenstr.");
break;
}
case 102553:
{
returnValue = F("Flachsgasse");
break;
}
case 102554:
{
returnValue = F("Flachsgraben");
break;
}
case 102555:
{
returnValue = F("Flachshalde");
break;
}
case 102556:
{
returnValue = F("Flachsheide");
break;
}
case 102557:
{
returnValue = F("Flachshofweg");
break;
}
case 102558:
{
returnValue = F("Flachshütte");
break;
}
case 102559:
{
returnValue = F("Flachskamp");
break;
}
case 102560:
{
returnValue = F("Flachskampstr.");
break;
}
case 102561:
{
returnValue = F("Flachskuhlenweg");
break;
}
case 102562:
{
returnValue = F("Flachskämpe");
break;
}
case 102563:
{
returnValue = F("Flachslakestr.");
break;
}
case 102564:
{
returnValue = F("Flachsland-Weg");
break;
}
case 102565:
{
returnValue = F("Flachslande");
break;
}
case 102566:
{
returnValue = F("Flachslandener Str.");
break;
}
case 102567:
{
returnValue = F("Flachslandenstr.");
break;
}
case 102568:
{
returnValue = F("Flachslandstr.");
break;
}
case 102569:
{
returnValue = F("Flachslandweg");
break;
}
case 102570:
{
returnValue = F("Flachsleite");
break;
}
case 102571:
{
returnValue = F("Flachsländerweg");
break;
}
case 102572:
{
returnValue = F("Flachslöcherweg");
break;
}
case 102573:
{
returnValue = F("Flachsmarkt");
break;
}
case 102574:
{
returnValue = F("Flachsmarktstr.");
break;
}
case 102575:
{
returnValue = F("Flachsmeerstr.");
break;
}
case 102576:
{
returnValue = F("Flachsmeerweg");
break;
}
case 102577:
{
returnValue = F("Flachsmoorweg");
break;
}
case 102578:
{
returnValue = F("Flachsmühle");
break;
}
case 102579:
{
returnValue = F("Flachspfuhl");
break;
}
case 102580:
{
returnValue = F("Flachspohler Weg");
break;
}
case 102581:
{
returnValue = F("Flachsrade");
break;
}
case 102582:
{
returnValue = F("Flachsreude");
break;
}
case 102583:
{
returnValue = F("Flachsriede");
break;
}
case 102584:
{
returnValue = F("Flachsring");
break;
}
case 102585:
{
returnValue = F("Flachsrode");
break;
}
case 102586:
{
returnValue = F("Flachsrosenweg");
break;
}
case 102587:
{
returnValue = F("Flachsrotte");
break;
}
case 102588:
{
returnValue = F("Flachsrotten");
break;
}
case 102589:
{
returnValue = F("Flachsrottenstr.");
break;
}
case 102590:
{
returnValue = F("Flachsrottenweg");
break;
}
case 102591:
{
returnValue = F("Flachsröppen");
break;
}
case 102592:
{
returnValue = F("Flachsröste");
break;
}
case 102593:
{
returnValue = F("Flachsröten");
break;
}
case 102594:
{
returnValue = F("Flachsröthe");
break;
}
case 102595:
{
returnValue = F("Flachsröße");
break;
}
case 102596:
{
returnValue = F("Flachsspinnereistr.");
break;
}
case 102597:
{
returnValue = F("Flachsspreit");
break;
}
case 102598:
{
returnValue = F("Flachsspreite");
break;
}
case 102599:
{
returnValue = F("Flachsstr.");
break;
}
case 102600:
{
returnValue = F("Flachsstücke");
break;
}
case 102601:
{
returnValue = F("Flachsstücken");
break;
}
case 102602:
{
returnValue = F("Flachstalstr.");
break;
}
case 102603:
{
returnValue = F("Flachsteichweg");
break;
}
case 102604:
{
returnValue = F("Flachsthumweg");
break;
}
case 102605:
{
returnValue = F("Flachstr.");
break;
}
case 102606:
{
returnValue = F("Flachstöckheimer Str.");
break;
}
case 102607:
{
returnValue = F("Flachswandstr.");
break;
}
case 102608:
{
returnValue = F("Flachsweg");
break;
}
case 102609:
{
returnValue = F("Flachswerk");
break;
}
case 102610:
{
returnValue = F("Flachswerksiedlung");
break;
}
case 102611:
{
returnValue = F("Flachswiese");
break;
}
case 102612:
{
returnValue = F("Flachswiesenstr.");
break;
}
case 102613:
{
returnValue = F("Flachswiesenweg");
break;
}
case 102614:
{
returnValue = F("Flachsworth");
break;
}
case 102615:
{
returnValue = F("Flachswühren");
break;
}
case 102616:
{
returnValue = F("Flachswürden");
break;
}
case 102617:
{
returnValue = F("Flachsäcker");
break;
}
case 102618:
{
returnValue = F("Flachsäckerstr.");
break;
}
case 102619:
{
returnValue = F("Flachsäckerweg");
break;
}
case 102620:
{
returnValue = F("Flachtenstr.");
break;
}
case 102621:
{
returnValue = F("Flachter Str.");
break;
}
case 102622:
{
returnValue = F("Flachter Weg");
break;
}
case 102623:
{
returnValue = F("Flachweg");
break;
}
case 102624:
{
returnValue = F("Flack");
break;
}
case 102625:
{
returnValue = F("Flackeholm");
break;
}
case 102626:
{
returnValue = F("Flacken");
break;
}
case 102627:
{
returnValue = F("Flackstr.");
break;
}
case 102628:
{
returnValue = F("Flackstrom");
break;
}
case 102629:
{
returnValue = F("Flackweg");
break;
}
case 102630:
{
returnValue = F("Fladder");
break;
}
case 102631:
{
returnValue = F("Fladderburger Str.");
break;
}
case 102632:
{
returnValue = F("Fladderdamm");
break;
}
case 102633:
{
returnValue = F("Fladderlohausen");
break;
}
case 102634:
{
returnValue = F("Fladderlohauser Str.");
break;
}
case 102635:
{
returnValue = F("Fladdershullenweg");
break;
}
case 102636:
{
returnValue = F("Fladderskamp");
break;
}
case 102637:
{
returnValue = F("Fladderstr.");
break;
}
case 102638:
{
returnValue = F("Fladderweg");
break;
}
case 102639:
{
returnValue = F("Fladengasse");
break;
}
case 102640:
{
returnValue = F("Fladenmoorweg");
break;
}
case 102641:
{
returnValue = F("Fladensteinstr.");
break;
}
case 102642:
{
returnValue = F("Fladenstr.");
break;
}
case 102643:
{
returnValue = F("Fladenweg");
break;
}
case 102644:
{
returnValue = F("Fladergasse");
break;
}
case 102645:
{
returnValue = F("Fladigenfeld");
break;
}
case 102646:
{
returnValue = F("Fladstr.");
break;
}
case 102647:
{
returnValue = F("Fladweg");
break;
}
case 102648:
{
returnValue = F("Flaeming Skate S1");
break;
}
case 102649:
{
returnValue = F("Flaesheimer Damm");
break;
}
case 102650:
{
returnValue = F("Flaesheimer Meilerweg");
break;
}
case 102651:
{
returnValue = F("Flaesheimer Str.");
break;
}
case 102652:
{
returnValue = F("Flaesheimer Weg");
break;
}
case 102653:
{
returnValue = F("Flagenhof");
break;
}
case 102654:
{
returnValue = F("Flagenstr.");
break;
}
case 102655:
{
returnValue = F("Flagentwiet");
break;
}
case 102656:
{
returnValue = F("Flagentwiete");
break;
}
case 102657:
{
returnValue = F("Flaggentörn");
break;
}
case 102658:
{
returnValue = F("Flaggeweg");
break;
}
case 102659:
{
returnValue = F("Flagredder");
break;
}
case 102660:
{
returnValue = F("Flagweg");
break;
}
case 102661:
{
returnValue = F("Flahberg");
break;
}
case 102662:
{
returnValue = F("Flahstraß");
break;
}
case 102663:
{
returnValue = F("Flaigengasse");
break;
}
case 102664:
{
returnValue = F("Flaischlenstr.");
break;
}
case 102665:
{
returnValue = F("Flaitzgraben");
break;
}
case 102666:
{
returnValue = F("Flakenfort");
break;
}
case 102667:
{
returnValue = F("Flakenfort-Mitte");
break;
}
case 102668:
{
returnValue = F("Flakenholz");
break;
}
case 102669:
{
returnValue = F("Flakenholzweg");
break;
}
case 102670:
{
returnValue = F("Flakenseeweg");
break;
}
case 102671:
{
returnValue = F("Flakenstr.");
break;
}
case 102672:
{
returnValue = F("Flakenweg");
break;
}
case 102673:
{
returnValue = F("Flakstellungsweg");
break;
}
case 102674:
{
returnValue = F("Flakstr.");
break;
}
case 102675:
{
returnValue = F("Flakweg");
break;
}
case 102676:
{
returnValue = F("Flamenstraat");
break;
}
case 102677:
{
returnValue = F("Flamenweg");
break;
}
case 102678:
{
returnValue = F("Flamer Mittelweg");
break;
}
case 102679:
{
returnValue = F("Flamer Weg");
break;
}
case 102680:
{
returnValue = F("Flamersheimer Allee");
break;
}
case 102681:
{
returnValue = F("Flamersheimer Pfad");
break;
}
case 102682:
{
returnValue = F("Flamersheimer Str.");
break;
}
case 102683:
{
returnValue = F("Flamersheimer Weg");
break;
}
case 102684:
{
returnValue = F("Flamingos");
break;
}
case 102685:
{
returnValue = F("Flamingos/Schnabelstorch");
break;
}
case 102686:
{
returnValue = F("Flamingostr.");
break;
}
case 102687:
{
returnValue = F("Flamingoweg");
break;
}
case 102688:
{
returnValue = F("Flamländerstr.");
break;
}
case 102689:
{
returnValue = F("Flammberg");
break;
}
case 102690:
{
returnValue = F("Flammenkamps Berg");
break;
}
case 102691:
{
returnValue = F("Flammenleite");
break;
}
case 102692:
{
returnValue = F("Flammenstr.");
break;
}
case 102693:
{
returnValue = F("Flammersbacher Str.");
break;
}
case 102694:
{
returnValue = F("Flammersbachstr.");
break;
}
case 102695:
{
returnValue = F("Flammersfelder Str.");
break;
}
case 102696:
{
returnValue = F("Flammerweg");
break;
}
case 102697:
{
returnValue = F("Flammgasse");
break;
}
case 102698:
{
returnValue = F("Flammigerweg");
break;
}
case 102699:
{
returnValue = F("Flammrieder Str.");
break;
}
case 102700:
{
returnValue = F("Flammstr.");
break;
}
case 102701:
{
returnValue = F("Flammweg");
break;
}
case 102702:
{
returnValue = F("Flamschen");
break;
}
case 102703:
{
returnValue = F("Flamschener Weg");
break;
}
case 102704:
{
returnValue = F("Flamweg");
break;
}
case 102705:
{
returnValue = F("Flanderner Str.");
break;
}
case 102706:
{
returnValue = F("Flandernring");
break;
}
case 102707:
{
returnValue = F("Flandernstr.");
break;
}
case 102708:
{
returnValue = F("Flandernweg");
break;
}
case 102709:
{
returnValue = F("Flandersbach");
break;
}
case 102710:
{
returnValue = F("Flandersbacher Str.");
break;
}
case 102711:
{
returnValue = F("Flandersbacher Weg");
break;
}
case 102712:
{
returnValue = F("Flanderstr.");
break;
}
case 102713:
{
returnValue = F("Flandrische Str.");
break;
}
case 102714:
{
returnValue = F("Flanhard");
break;
}
case 102715:
{
returnValue = F("Flanitz");
break;
}
case 102716:
{
returnValue = F("Flanitzalm");
break;
}
case 102717:
{
returnValue = F("Flanitzbrücke");
break;
}
case 102718:
{
returnValue = F("Flanitzer Kirchweg");
break;
}
case 102719:
{
returnValue = F("Flanitzer Str.");
break;
}
case 102720:
{
returnValue = F("Flanitzschwellstr.");
break;
}
case 102721:
{
returnValue = F("Flanitzstr.");
break;
}
case 102722:
{
returnValue = F("Flankendeichweg");
break;
}
case 102723:
{
returnValue = F("Flanzstr.");
break;
}
case 102724:
{
returnValue = F("Flaper Schulweg");
break;
}
case 102725:
{
returnValue = F("Flaper Str.");
break;
}
case 102726:
{
returnValue = F("Flappachstr.");
break;
}
case 102727:
{
returnValue = F("Flarchheimer Hauptstr.");
break;
}
case 102728:
{
returnValue = F("Flarchweg");
break;
}
case 102729:
{
returnValue = F("Flarichsmühle");
break;
}
case 102730:
{
returnValue = F("Flaringer Berg");
break;
}
case 102731:
{
returnValue = F("Flarup");
break;
}
case 102732:
{
returnValue = F("Flaruper Str.");
break;
}
case 102733:
{
returnValue = F("Flasbarg");
break;
}
case 102734:
{
returnValue = F("Flasbloem");
break;
}
case 102735:
{
returnValue = F("Flasbree");
break;
}
case 102736:
{
returnValue = F("Flaschenstr.");
break;
}
case 102737:
{
returnValue = F("Flaschenweg");
break;
}
case 102738:
{
returnValue = F("Flaschnerstr.");
break;
}
case 102739:
{
returnValue = F("Flashorn");
break;
}
case 102740:
{
returnValue = F("Flaskweg");
break;
}
case 102741:
{
returnValue = F("Flaspoete");
break;
}
case 102742:
{
returnValue = F("Flassbarg");
break;
}
case 102743:
{
returnValue = F("Flassbree");
break;
}
case 102744:
{
returnValue = F("Flassdiek");
break;
}
case 102745:
{
returnValue = F("Flassenberger Str.");
break;
}
case 102746:
{
returnValue = F("Flassenswisch");
break;
}
case 102747:
{
returnValue = F("Flasskamp");
break;
}
case 102748:
{
returnValue = F("Flassworth");
break;
}
case 102749:
{
returnValue = F("Flatacker");
break;
}
case 102750:
{
returnValue = F("Flatenstr.");
break;
}
case 102751:
{
returnValue = F("Flathweg");
break;
}
case 102752:
{
returnValue = F("Flatower Str.");
break;
}
case 102753:
{
returnValue = F("Flatowstr.");
break;
}
case 102754:
{
returnValue = F("Flattacher Str.");
break;
}
case 102755:
{
returnValue = F("Flattbergstr.");
break;
}
case 102756:
{
returnValue = F("Flattenberg");
break;
}
case 102757:
{
returnValue = F("Flatterdamm");
break;
}
case 102758:
{
returnValue = F("Flattichstr.");
break;
}
case 102759:
{
returnValue = F("Flattig");
break;
}
case 102760:
{
returnValue = F("Flattigstr.");
break;
}
case 102761:
{
returnValue = F("Flattigsweg (Alte Str.)");
break;
}
case 102762:
{
returnValue = F("Flattigweg");
break;
}
case 102763:
{
returnValue = F("Flattstr.");
break;
}
case 102764:
{
returnValue = F("Flattweg");
break;
}
case 102765:
{
returnValue = F("Flatzbyer Str.");
break;
}
case 102766:
{
returnValue = F("Flatzstr.");
break;
}
case 102767:
{
returnValue = F("Flauchhalde");
break;
}
case 102768:
{
returnValue = F("Flauerstweete");
break;
}
case 102769:
{
returnValue = F("Flaumbach");
break;
}
case 102770:
{
returnValue = F("Flaumbachstr.");
break;
}
case 102771:
{
returnValue = F("Flaumbachtal");
break;
}
case 102772:
{
returnValue = F("Flaunser Weg");
break;
}
case 102773:
{
returnValue = F("Flaunserstr.");
break;
}
case 102774:
{
returnValue = F("Flaunserweg");
break;
}
case 102775:
{
returnValue = F("Flaut");
break;
}
case 102776:
{
returnValue = F("Flautstollen");
break;
}
case 102777:
{
returnValue = F("Flautweg");
break;
}
case 102778:
{
returnValue = F("Flaviaweg");
break;
}
case 102779:
{
returnValue = F("Flavierstr.");
break;
}
case 102780:
{
returnValue = F("Flavierweg");
break;
}
case 102781:
{
returnValue = F("Flavusstr.");
break;
}
case 102782:
{
returnValue = F("Flawilstr.");
break;
}
case 102783:
{
returnValue = F("Flaßbarg");
break;
}
case 102784:
{
returnValue = F("Flaßbieke");
break;
}
case 102785:
{
returnValue = F("Flaßhof");
break;
}
case 102786:
{
returnValue = F("Flaßhofstr.");
break;
}
case 102787:
{
returnValue = F("Flaßkamp");
break;
}
case 102788:
{
returnValue = F("Flaßkampstr.");
break;
}
case 102789:
{
returnValue = F("Flaßkoppweg");
break;
}
case 102790:
{
returnValue = F("Flaßkuhle");
break;
}
case 102791:
{
returnValue = F("Flaßkuhlstr.");
break;
}
case 102792:
{
returnValue = F("Flaßpöthen");
break;
}
case 102793:
{
returnValue = F("Flaßrade");
break;
}
case 102794:
{
returnValue = F("Flaßrath");
break;
}
case 102795:
{
returnValue = F("Flaßrather Weg");
break;
}
case 102796:
{
returnValue = F("Flaßweg");
break;
}
case 102797:
{
returnValue = F("Flaßworth");
break;
}
case 102798:
{
returnValue = F("Flebbe Brücke");
break;
}
case 102799:
{
returnValue = F("Flebbestr.");
break;
}
case 102800:
{
returnValue = F("Flebbeweg");
break;
}
case 102801:
{
returnValue = F("Flechsigweg");
break;
}
case 102802:
{
returnValue = F("Flechtdorfer Berg");
break;
}
case 102803:
{
returnValue = F("Flechtdorfer Str.");
break;
}
case 102804:
{
returnValue = F("Flechtenweg");
break;
}
case 102805:
{
returnValue = F("Flechter Weg");
break;
}
case 102806:
{
returnValue = F("Flechtheimer Str.");
break;
}
case 102807:
{
returnValue = F("Flechtinger Str.");
break;
}
case 102808:
{
returnValue = F("Flechtinger Weg");
break;
}
case 102809:
{
returnValue = F("Flechtner Weg");
break;
}
case 102810:
{
returnValue = F("Flechtorfer Str.");
break;
}
case 102811:
{
returnValue = F("Flechtweg");
break;
}
case 102812:
{
returnValue = F("Fleck");
break;
}
case 102813:
{
returnValue = F("Fleckebyer Landstr.");
break;
}
case 102814:
{
returnValue = F("Fleckebyer Str.");
break;
}
case 102815:
{
returnValue = F("Flecken");
break;
}
case 102816:
{
returnValue = F("Fleckenackerweg");
break;
}
case 102817:
{
returnValue = F("Fleckenberger Str.");
break;
}
case 102818:
{
returnValue = F("Fleckenbergsweg");
break;
}
case 102819:
{
returnValue = F("Fleckenbornstr.");
break;
}
case 102820:
{
returnValue = F("Fleckenbühl");
break;
}
case 102821:
{
returnValue = F("Fleckenbühler Weg");
break;
}
case 102822:
{
returnValue = F("Fleckenfeld");
break;
}
case 102823:
{
returnValue = F("Fleckengasse");
break;
}
case 102824:
{
returnValue = F("Fleckenhof");
break;
}
case 102825:
{
returnValue = F("Fleckenhofenstr.");
break;
}
case 102826:
{
returnValue = F("Fleckenleite");
break;
}
case 102827:
{
returnValue = F("Fleckenpüsterweg");
break;
}
case 102828:
{
returnValue = F("Fleckensteiner Weg");
break;
}
case 102829:
{
returnValue = F("Fleckensteinstr.");
break;
}
case 102830:
{
returnValue = F("Fleckensteinweg");
break;
}
case 102831:
{
returnValue = F("Fleckenstr.");
break;
}
case 102832:
{
returnValue = F("Fleckenwaldweg");
break;
}
case 102833:
{
returnValue = F("Fleckenweg");
break;
}
case 102834:
{
returnValue = F("Fleckenweiher");
break;
}
case 102835:
{
returnValue = F("Fleckenweinberge");
break;
}
case 102836:
{
returnValue = F("Fleckenwiese");
break;
}
case 102837:
{
returnValue = F("Fleckenäcker");
break;
}
case 102838:
{
returnValue = F("Fleckenäckerweg");
break;
}
case 102839:
{
returnValue = F("Fleckerlgasse");
break;
}
case 102840:
{
returnValue = F("Fleckerweg");
break;
}
case 102841:
{
returnValue = F("Fleckhamerstr.");
break;
}
case 102842:
{
returnValue = F("Fleckinger Weg");
break;
}
case 102843:
{
returnValue = F("Fleckkelterweg");
break;
}
case 102844:
{
returnValue = F("Fleckl");
break;
}
case 102845:
{
returnValue = F("Fleckleinstr.");
break;
}
case 102846:
{
returnValue = F("Fleckleinsweg");
break;
}
case 102847:
{
returnValue = F("Flecklerisweg");
break;
}
case 102848:
{
returnValue = F("Flecklsteinstr.");
break;
}
case 102849:
{
returnValue = F("Flecklstr.");
break;
}
case 102850:
{
returnValue = F("Fleckmauerstr.");
break;
}
case 102851:
{
returnValue = F("Fleckmühler Weg");
break;
}
case 102852:
{
returnValue = F("Fleckrain");
break;
}
case 102853:
{
returnValue = F("Fleckspitzweg");
break;
}
case 102854:
{
returnValue = F("Fleckstr.");
break;
}
case 102855:
{
returnValue = F("Flecksweg");
break;
}
case 102856:
{
returnValue = F("Fleckweg");
break;
}
case 102857:
{
returnValue = F("Fleckwiesenweg");
break;
}
case 102858:
{
returnValue = F("Fleddenweg");
break;
}
case 102859:
{
returnValue = F("Fledderhorst");
break;
}
case 102860:
{
returnValue = F("Fledderstr.");
break;
}
case 102861:
{
returnValue = F("Fledderweg");
break;
}
case 102862:
{
returnValue = F("Flederbusch");
break;
}
case 102863:
{
returnValue = F("Flederichsmühle");
break;
}
case 102864:
{
returnValue = F("Fledermaus");
break;
}
case 102865:
{
returnValue = F("Fledermausareal");
break;
}
case 102866:
{
returnValue = F("Fledermauserlebnisgarten");
break;
}
case 102867:
{
returnValue = F("Fledermauskamp");
break;
}
case 102868:
{
returnValue = F("Fledermausweg");
break;
}
case 102869:
{
returnValue = F("Flederwischgasse");
break;
}
case 102870:
{
returnValue = F("Fleederbogen");
break;
}
case 102871:
{
returnValue = F("Fleederbusch");
break;
}
case 102872:
{
returnValue = F("Fleedereck");
break;
}
case 102873:
{
returnValue = F("Fleederkamp");
break;
}
case 102874:
{
returnValue = F("Fleederkampredder");
break;
}
case 102875:
{
returnValue = F("Fleegamwai");
break;
}
case 102876:
{
returnValue = F("Fleege-Althoff-Str.");
break;
}
case 102877:
{
returnValue = F("Fleegenweg");
break;
}
case 102878:
{
returnValue = F("Fleehook");
break;
}
case 102879:
{
returnValue = F("Fleekweg");
break;
}
case 102880:
{
returnValue = F("Fleenerweg");
break;
}
case 102881:
{
returnValue = F("Fleerbeerweg");
break;
}
case 102882:
{
returnValue = F("Fleerbuschweg");
break;
}
case 102883:
{
returnValue = F("Fleerstr.");
break;
}
case 102884:
{
returnValue = F("Fleerweg");
break;
}
case 102885:
{
returnValue = F("Fleestedter Ring");
break;
}
case 102886:
{
returnValue = F("Fleestedter Weg");
break;
}
case 102887:
{
returnValue = F("Fleester Höpen");
break;
}
case 102888:
{
returnValue = F("Fleester Marktplatz");
break;
}
case 102889:
{
returnValue = F("Fleester Str.");
break;
}
case 102890:
{
returnValue = F("Fleetenweg");
break;
}
case 102891:
{
returnValue = F("Fleeth");
break;
}
case 102892:
{
returnValue = F("Fleether Mühle");
break;
}
case 102893:
{
returnValue = F("Fleethof");
break;
}
case 102894:
{
returnValue = F("Fleethstr.");
break;
}
case 102895:
{
returnValue = F("Fleethweg");
break;
}
case 102896:
{
returnValue = F("Fleethörn");
break;
}
case 102897:
{
returnValue = F("Fleetstr.");
break;
}
case 102898:
{
returnValue = F("Flegesser Str.");
break;
}
case 102899:
{
returnValue = F("Fleggestr.");
break;
}
case 102900:
{
returnValue = F("Fleggeweg");
break;
}
case 102901:
{
returnValue = F("Flehbachmühlenweg");
break;
}
case 102902:
{
returnValue = F("Flehder Chaussee");
break;
}
case 102903:
{
returnValue = F("Flehenberg");
break;
}
case 102904:
{
returnValue = F("Flehengasse");
break;
}
case 102905:
{
returnValue = F("Fleher Str.");
break;
}
case 102906:
{
returnValue = F("Flehgasse");
break;
}
case 102907:
{
returnValue = F("Flehinger Str.");
break;
}
case 102908:
{
returnValue = F("Flehinger Weg");
break;
}
case 102909:
{
returnValue = F("Flehmannshof");
break;
}
case 102910:
{
returnValue = F("Flehmengasse");
break;
}
case 102911:
{
returnValue = F("Flehmestr.");
break;
}
case 102912:
{
returnValue = F("Flehmigsruh");
break;
}
case 102913:
{
returnValue = F("Fleierlstr.");
break;
}
case 102914:
{
returnValue = F("Fleierlweg");
break;
}
case 102915:
{
returnValue = F("Fleigenkamp");
break;
}
case 102916:
{
returnValue = F("Fleigenweg");
break;
}
case 102917:
{
returnValue = F("Fleiges Hof");
break;
}
case 102918:
{
returnValue = F("Fleigestr.");
break;
}
case 102919:
{
returnValue = F("Flein, Rathaus");
break;
}
case 102920:
{
returnValue = F("Fleiner Grund");
break;
}
case 102921:
{
returnValue = F("Fleiner Str.");
break;
}
case 102922:
{
returnValue = F("Fleiner Weg");
break;
}
case 102923:
{
returnValue = F("Fleinersmühlenweg");
break;
}
case 102924:
{
returnValue = F("Fleinerweg");
break;
}
case 102925:
{
returnValue = F("Fleinhauser Str.");
break;
}
case 102926:
{
returnValue = F("Fleinheimer Str.");
break;
}
case 102927:
{
returnValue = F("Fleinheimer Weg");
break;
}
case 102928:
{
returnValue = F("Fleinsbachstr.");
break;
}
case 102929:
{
returnValue = F("Fleinsbergleweg");
break;
}
case 102930:
{
returnValue = F("Fleinsweg");
break;
}
case 102931:
{
returnValue = F("Fleisbacher Str.");
break;
}
case 102932:
{
returnValue = F("Fleischackerweg");
break;
}
case 102933:
{
returnValue = F("Fleischbank");
break;
}
case 102934:
{
returnValue = F("Fleischbankgasse");
break;
}
case 102935:
{
returnValue = F("Fleischbankplatz");
break;
}
case 102936:
{
returnValue = F("Fleischbrücke");
break;
}
case 102937:
{
returnValue = F("Fleischbänke");
break;
}
case 102938:
{
returnValue = F("Fleischer-Pättken");
break;
}
case 102939:
{
returnValue = F("Fleischerberg");
break;
}
case 102940:
{
returnValue = F("Fleischergasse");
break;
}
case 102941:
{
returnValue = F("Fleischergässchen");
break;
}
case 102942:
{
returnValue = F("Fleischerhang");
break;
}
case 102943:
{
returnValue = F("Fleischerhorst");
break;
}
case 102944:
{
returnValue = F("Fleischerplatz");
break;
}
case 102945:
{
returnValue = F("Fleischerstr.");
break;
}
case 102946:
{
returnValue = F("Fleischerweg");
break;
}
case 102947:
{
returnValue = F("Fleischerwiese");
break;
}
case 102948:
{
returnValue = F("Fleischerwinkel");
break;
}
case 102949:
{
returnValue = F("Fleischgaffel");
break;
}
case 102950:
{
returnValue = F("Fleischgasse");
break;
}
case 102951:
{
returnValue = F("Fleischhackerweg");
break;
}
case 102952:
{
returnValue = F("Fleischhauerstr.");
break;
}
case 102953:
{
returnValue = F("Fleischmannstr.");
break;
}
case 102954:
{
returnValue = F("Fleischmannweg");
break;
}
case 102955:
{
returnValue = F("Fleischmarkt");
break;
}
case 102956:
{
returnValue = F("Fleischnershausen");
break;
}
case 102957:
{
returnValue = F("Fleischstr.");
break;
}
case 102958:
{
returnValue = F("Fleischwanger Str.");
break;
}
case 102959:
{
returnValue = F("Fleischäckerweg");
break;
}
case 102960:
{
returnValue = F("Fleitberg");
break;
}
case 102961:
{
returnValue = F("Fleite Heide");
break;
}
case 102962:
{
returnValue = F("Fleithestr.");
break;
}
case 102963:
{
returnValue = F("Fleithgarten");
break;
}
case 102964:
{
returnValue = F("Fleitmannsplatz");
break;
}
case 102965:
{
returnValue = F("Fleitmannstr.");
break;
}
case 102966:
{
returnValue = F("Fleitmühle");
break;
}
case 102967:
{
returnValue = F("Fleitsmühlenweg");
break;
}
case 102968:
{
returnValue = F("Fleitweg");
break;
}
case 102969:
{
returnValue = F("Fleiweg");
break;
}
case 102970:
{
returnValue = F("Fleißenhammerweg");
break;
}
case 102971:
{
returnValue = F("Fleißerstr.");
break;
}
case 102972:
{
returnValue = F("Fleißner Str.");
break;
}
case 102973:
{
returnValue = F("Fleißnerstr.");
break;
}
case 102974:
{
returnValue = F("Flembachgrund");
break;
}
case 102975:
{
returnValue = F("Flemendorfer Weg");
break;
}
case 102976:
{
returnValue = F("Flemesstr.");
break;
}
case 102977:
{
returnValue = F("Flemhuder Str.");
break;
}
case 102978:
{
returnValue = F("Flemingstr.");
break;
}
case 102979:
{
returnValue = F("Flemingweg");
break;
}
case 102980:
{
returnValue = F("Flemlinger Weg");
break;
}
case 102981:
{
returnValue = F("Flemmersgasse");
break;
}
case 102982:
{
returnValue = F("Flemmingener Weg");
break;
}
case 102983:
{
returnValue = F("Flemminger Str.");
break;
}
case 102984:
{
returnValue = F("Flemminger Weg");
break;
}
case 102985:
{
returnValue = F("Flemmingplatz");
break;
}
case 102986:
{
returnValue = F("Flemmingstr.");
break;
}
case 102987:
{
returnValue = F("Flemsdorfer Dorfstr.");
break;
}
case 102988:
{
returnValue = F("Flemsdorfer Str.");
break;
}
case 102989:
{
returnValue = F("Flenderlersberg");
break;
}
case 102990:
{
returnValue = F("Flenderplatz");
break;
}
case 102991:
{
returnValue = F("Flenderstr.");
break;
}
case 102992:
{
returnValue = F("Flenkenweg");
break;
}
case 102993:
{
returnValue = F("Flennersweg");
break;
}
case 102994:
{
returnValue = F("Flennscher Weg");
break;
}
case 102995:
{
returnValue = F("Flensbergstr.");
break;
}
case 102996:
{
returnValue = F("Flensbergweg");
break;
}
case 102997:
{
returnValue = F("Flensburger Chaussee");
break;
}
case 102998:
{
returnValue = F("Flensburger Damm");
break;
}
case 102999:
{
returnValue = F("Flensburger Hagen");
break;
}
case 103000:
{
returnValue = F("Flensburger Ring");
break;
}
case 103001:
{
returnValue = F("Flensburger Str.");
break;
}
case 103002:
{
returnValue = F("Flensburger Straat");
break;
}
case 103003:
{
returnValue = F("Flensburger Zeile");
break;
}
case 103004:
{
returnValue = F("Flensunger Str.");
break;
}
case 103005:
{
returnValue = F("Flensunger Weg");
break;
}
case 103006:
{
returnValue = F("Flentjenburg");
break;
}
case 103007:
{
returnValue = F("Flenzerei");
break;
}
case 103008:
{
returnValue = F("Flerker Landwehr");
break;
}
case 103009:
{
returnValue = F("Flerker Str.");
break;
}
case 103010:
{
returnValue = F("Flerlagenweg");
break;
}
case 103011:
{
returnValue = F("Flerrentwiete");
break;
}
case 103012:
{
returnValue = F("Flersheimer Str.");
break;
}
case 103013:
{
returnValue = F("Flerzheimer Allee");
break;
}
case 103014:
{
returnValue = F("Flerzheimer Str.");
break;
}
case 103015:
{
returnValue = F("Fleschenbacher Str.");
break;
}
case 103016:
{
returnValue = F("Flescheweg");
break;
}
case 103017:
{
returnValue = F("Fleschützen");
break;
}
case 103018:
{
returnValue = F("Fleschützer Str.");
break;
}
case 103019:
{
returnValue = F("Flesgentor");
break;
}
case 103020:
{
returnValue = F("Flessastr.");
break;
}
case 103021:
{
returnValue = F("Flessenmoor");
break;
}
case 103022:
{
returnValue = F("Flessenrade");
break;
}
case 103023:
{
returnValue = F("Flessinghauser Str.");
break;
}
case 103024:
{
returnValue = F("Flethdamm");
break;
}
case 103025:
{
returnValue = F("Flethe");
break;
}
case 103026:
{
returnValue = F("Flethseer Str.");
break;
}
case 103027:
{
returnValue = F("Flethstaken");
break;
}
case 103028:
{
returnValue = F("Flethstr.");
break;
}
case 103029:
{
returnValue = F("Flethweg");
break;
}
case 103030:
{
returnValue = F("Fletschenreuth");
break;
}
case 103031:
{
returnValue = F("Fletschenreuther Str.");
break;
}
case 103032:
{
returnValue = F("Fletschenreuther Weg");
break;
}
case 103033:
{
returnValue = F("Fletschweg");
break;
}
case 103034:
{
returnValue = F("Fletstr.");
break;
}
case 103035:
{
returnValue = F("Flettenbergweg");
break;
}
case 103036:
{
returnValue = F("Flettnerstr.");
break;
}
case 103037:
{
returnValue = F("Fletumer Hof");
break;
}
case 103038:
{
returnValue = F("Fletumer Str.");
break;
}
case 103039:
{
returnValue = F("Fleu Herut");
break;
}
case 103040:
{
returnValue = F("Fleurkeusstr.");
break;
}
case 103041:
{
returnValue = F("Fleurystr.");
break;
}
case 103042:
{
returnValue = F("Fleutestr.");
break;
}
case 103043:
{
returnValue = F("Fleuteweg");
break;
}
case 103044:
{
returnValue = F("Fleuthebrücke");
break;
}
case 103045:
{
returnValue = F("Fleutjenburg");
break;
}
case 103046:
{
returnValue = F("Flexdorfer Str.");
break;
}
case 103047:
{
returnValue = F("Flexstr.");
break;
}
case 103048:
{
returnValue = F("Fleyerbecke");
break;
}
case 103049:
{
returnValue = F("Fleyhellmer");
break;
}
case 103050:
{
returnValue = F("Flickengasse");
break;
}
case 103051:
{
returnValue = F("Flickenspitzweg");
break;
}
case 103052:
{
returnValue = F("Flickenweg");
break;
}
case 103053:
{
returnValue = F("Flickerstal");
break;
}
case 103054:
{
returnValue = F("Flickweg");
break;
}
case 103055:
{
returnValue = F("Flidder");
break;
}
case 103056:
{
returnValue = F("Flidderbreite");
break;
}
case 103057:
{
returnValue = F("Fliedener Str.");
break;
}
case 103058:
{
returnValue = F("Fliederallee");
break;
}
case 103059:
{
returnValue = F("Fliederbeerweg");
break;
}
case 103060:
{
returnValue = F("Fliederberg");
break;
}
case 103061:
{
returnValue = F("Fliederbergstr.");
break;
}
case 103062:
{
returnValue = F("Fliederbogen");
break;
}
case 103063:
{
returnValue = F("Fliederbusch");
break;
}
case 103064:
{
returnValue = F("Fliedergang");
break;
}
case 103065:
{
returnValue = F("Fliedergarten");
break;
}
case 103066:
{
returnValue = F("Fliedergasse");
break;
}
case 103067:
{
returnValue = F("Fliedergraben");
break;
}
case 103068:
{
returnValue = F("Fliedergrund");
break;
}
case 103069:
{
returnValue = F("Fliederhain");
break;
}
case 103070:
{
returnValue = F("Fliederhang");
break;
}
case 103071:
{
returnValue = F("Fliederhof");
break;
}
case 103072:
{
returnValue = F("Fliederhorst");
break;
}
case 103073:
{
returnValue = F("Fliederhöhe");
break;
}
case 103074:
{
returnValue = F("Fliederkamp");
break;
}
case 103075:
{
returnValue = F("Fliederkehre");
break;
}
case 103076:
{
returnValue = F("Fliederkoppel");
break;
}
case 103077:
{
returnValue = F("Fliedernweg");
break;
}
case 103078:
{
returnValue = F("Fliederplatz");
break;
}
case 103079:
{
returnValue = F("Fliederring");
break;
}
case 103080:
{
returnValue = F("Fliedersteg");
break;
}
case 103081:
{
returnValue = F("Fliedersteig");
break;
}
case 103082:
{
returnValue = F("Fliederstieg");
break;
}
case 103083:
{
returnValue = F("Fliederstr.");
break;
}
case 103084:
{
returnValue = F("Fliederweg");
break;
}
case 103085:
{
returnValue = F("Fliederwegstr.");
break;
}
case 103086:
{
returnValue = F("Fliederwinkel");
break;
}
case 103087:
{
returnValue = F("Fliedeweg");
break;
}
case 103088:
{
returnValue = F("Fliednerstr.");
break;
}
case 103089:
{
returnValue = F("Fliednerweg");
break;
}
case 103090:
{
returnValue = F("Fliegelstr.");
break;
}
case 103091:
{
returnValue = F("Fliegenberg");
break;
}
case 103092:
{
returnValue = F("Fliegenbergstr.");
break;
}
case 103093:
{
returnValue = F("Fliegenbrink");
break;
}
case 103094:
{
returnValue = F("Fliegenbuscher Weg");
break;
}
case 103095:
{
returnValue = F("Fliegender Holländer");
break;
}
case 103096:
{
returnValue = F("Fliegeneichen");
break;
}
case 103097:
{
returnValue = F("Fliegenfelde");
break;
}
case 103098:
{
returnValue = F("Fliegenhof");
break;
}
case 103099:
{
returnValue = F("Fliegenhofer Weg");
break;
}
case 103100:
{
returnValue = F("Fliegenhofsträßle");
break;
}
case 103101:
{
returnValue = F("Fliegenlochweg");
break;
}
case 103102:
{
returnValue = F("Fliegenmarkt");
break;
}
case 103103:
{
returnValue = F("Fliegenmoor");
break;
}
case 103104:
{
returnValue = F("Fliegenpilzstr.");
break;
}
case 103105:
{
returnValue = F("Fliegenrott");
break;
}
case 103106:
{
returnValue = F("Fliegenschneise");
break;
}
case 103107:
{
returnValue = F("Fliegenstr.");
break;
}
case 103108:
{
returnValue = F("Fliegentörle");
break;
}
case 103109:
{
returnValue = F("Flieger-Humann-Str.");
break;
}
case 103110:
{
returnValue = F("Flieger-Schneise");
break;
}
case 103111:
{
returnValue = F("Fliegerallee");
break;
}
case 103112:
{
returnValue = F("Fliegerhorstallee");
break;
}
case 103113:
{
returnValue = F("Fliegerhorststr.");
break;
}
case 103114:
{
returnValue = F("Fliegerhorstweg");
break;
}
case 103115:
{
returnValue = F("Fliegerpark");
break;
}
case 103116:
{
returnValue = F("Fliegersiedlung");
break;
}
case 103117:
{
returnValue = F("Fliegerstr.");
break;
}
case 103118:
{
returnValue = F("Fliegerweg");
break;
}
case 103119:
{
returnValue = F("Fliehbergstr.");
break;
}
case 103120:
{
returnValue = F("Fliehburgweg");
break;
}
case 103121:
{
returnValue = F("Flieherweg");
break;
}
case 103122:
{
returnValue = F("Fliehgasse");
break;
}
case 103123:
{
returnValue = F("Fliehweg");
break;
}
case 103124:
{
returnValue = F("Fliemstorf");
break;
}
case 103125:
{
returnValue = F("Fliemstorfer Str.");
break;
}
case 103126:
{
returnValue = F("Flienkenstr.");
break;
}
case 103127:
{
returnValue = F("Fliericher Kirchplatz");
break;
}
case 103128:
{
returnValue = F("Fliersbachstr.");
break;
}
case 103129:
{
returnValue = F("Fliersol");
break;
}
case 103130:
{
returnValue = F("Fliescherberg");
break;
}
case 103131:
{
returnValue = F("Flieschweg");
break;
}
case 103132:
{
returnValue = F("Fliesenbrücke");
break;
}
case 103133:
{
returnValue = F("Fliestedener Str.");
break;
}
case 103134:
{
returnValue = F("Fliestedener Weg");
break;
}
case 103135:
{
returnValue = F("Fliesweg");
break;
}
case 103136:
{
returnValue = F("Flieth");
break;
}
case 103137:
{
returnValue = F("Fliethgraben");
break;
}
case 103138:
{
returnValue = F("Fliethstr.");
break;
}
case 103139:
{
returnValue = F("Fliethweg");
break;
}
case 103140:
{
returnValue = F("Flietweg");
break;
}
case 103141:
{
returnValue = F("Fließallee");
break;
}
case 103142:
{
returnValue = F("Fließauer Weg");
break;
}
case 103143:
{
returnValue = F("Fließbachstr.");
break;
}
case 103144:
{
returnValue = F("Fließe");
break;
}
case 103145:
{
returnValue = F("Fließenbachstr.");
break;
}
case 103146:
{
returnValue = F("Fließender Sand");
break;
}
case 103147:
{
returnValue = F("Fließenhardtstr.");
break;
}
case 103148:
{
returnValue = F("Fließgasse");
break;
}
case 103149:
{
returnValue = F("Fließgrabenbrücke");
break;
}
case 103150:
{
returnValue = F("Fließhornstr.");
break;
}
case 103151:
{
returnValue = F("Fließsteig");
break;
}
case 103152:
{
returnValue = F("Fließstr.");
break;
}
case 103153:
{
returnValue = F("Fließweg");
break;
}
case 103154:
{
returnValue = F("Flinckstr.");
break;
}
case 103155:
{
returnValue = F("Flindthof");
break;
}
case 103156:
{
returnValue = F("Flinerlesberg");
break;
}
case 103157:
{
returnValue = F("Flinger Broich");
break;
}
case 103158:
{
returnValue = F("Flinger Passage");
break;
}
case 103159:
{
returnValue = F("Flinger Richtweg");
break;
}
case 103160:
{
returnValue = F("Flingerstr.");
break;
}
case 103161:
{
returnValue = F("Flink");
break;
}
case 103162:
{
returnValue = F("Flinkenberg");
break;
}
case 103163:
{
returnValue = F("Flinkenhaspel");
break;
}
case 103164:
{
returnValue = F("Flinker-Spatz-Weg");
break;
}
case 103165:
{
returnValue = F("Flinkerskoppel");
break;
}
case 103166:
{
returnValue = F("Flinksberg");
break;
}
case 103167:
{
returnValue = F("Flinksberger Str.");
break;
}
case 103168:
{
returnValue = F("Flinsbacher Str.");
break;
}
case 103169:
{
returnValue = F("Flinsbachstr.");
break;
}
case 103170:
{
returnValue = F("Flinsberger Str.");
break;
}
case 103171:
{
returnValue = F("Flinsberger Weg");
break;
}
case 103172:
{
returnValue = F("Flinschpark");
break;
}
case 103173:
{
returnValue = F("Flinschstr.");
break;
}
case 103174:
{
returnValue = F("Flinsenlauhweg");
break;
}
case 103175:
{
returnValue = F("Flinser Weg");
break;
}
case 103176:
{
returnValue = F("Flinspachstr.");
break;
}
case 103177:
{
returnValue = F("Flinsweg");
break;
}
case 103178:
{
returnValue = F("Flintacker");
break;
}
case 103179:
{
returnValue = F("Flintbeker Str.");
break;
}
case 103180:
{
returnValue = F("Flintberg");
break;
}
case 103181:
{
returnValue = F("Flintenbreite");
break;
}
case 103182:
{
returnValue = F("Flintener Weg");
break;
}
case 103183:
{
returnValue = F("Flintenstr.");
break;
}
case 103184:
{
returnValue = F("Flintenstück");
break;
}
case 103185:
{
returnValue = F("Flinterei");
break;
}
case 103186:
{
returnValue = F("Flintholm");
break;
}
case 103187:
{
returnValue = F("Flinthörn");
break;
}
case 103188:
{
returnValue = F("Flinthörnweg");
break;
}
case 103189:
{
returnValue = F("Flintkamp");
break;
}
case 103190:
{
returnValue = F("Flintkampsredder");
break;
}
case 103191:
{
returnValue = F("Flintkaserne");
break;
}
case 103192:
{
returnValue = F("Flintkoppel");
break;
}
case 103193:
{
returnValue = F("Flintruper Ring");
break;
}
case 103194:
{
returnValue = F("Flintsbacher Str.");
break;
}
case 103195:
{
returnValue = F("Flintweg");
break;
}
case 103196:
{
returnValue = F("Flinzstr.");
break;
}
case 103197:
{
returnValue = F("Flinzweg");
break;
}
case 103198:
{
returnValue = F("Flischbach");
break;
}
case 103199:
{
returnValue = F("Flissertkopfweg");
break;
}
case 103200:
{
returnValue = F("Flitnerstr.");
break;
}
case 103201:
{
returnValue = F("Flitnerweg");
break;
}
case 103202:
{
returnValue = F("Flitschberg");
break;
}
case 103203:
{
returnValue = F("Flitschbergstr.");
break;
}
case 103204:
{
returnValue = F("Flitschstr.");
break;
}
case 103205:
{
returnValue = F("Flitterbachtal Brücke");
break;
}
case 103206:
{
returnValue = F("Flitteresche");
break;
}
case 103207:
{
returnValue = F("Flittergasse");
break;
}
case 103208:
{
returnValue = F("Flittermühle");
break;
}
case 103209:
{
returnValue = F("Flitterseeschneise");
break;
}
case 103210:
{
returnValue = F("Flitzerberg");
break;
}
case 103211:
{
returnValue = F("Flockenberg");
break;
}
case 103212:
{
returnValue = F("Flockenblumenweg");
break;
}
case 103213:
{
returnValue = F("Flockenbusch");
break;
}
case 103214:
{
returnValue = F("Flockenbuschweg");
break;
}
case 103215:
{
returnValue = F("Flockenfeld");
break;
}
case 103216:
{
returnValue = F("Flockenmühle");
break;
}
case 103217:
{
returnValue = F("Flockenstr.");
break;
}
case 103218:
{
returnValue = F("Flockenweg");
break;
}
case 103219:
{
returnValue = F("Flockertsberg");
break;
}
case 103220:
{
returnValue = F("Flockertsholzer Weg");
break;
}
case 103221:
{
returnValue = F("Flockstr.");
break;
}
case 103222:
{
returnValue = F("Flodelingsweg");
break;
}
case 103223:
{
returnValue = F("Floenbarg");
break;
}
case 103224:
{
returnValue = F("Floerickeweg");
break;
}
case 103225:
{
returnValue = F("Floerkenweg");
break;
}
case 103226:
{
returnValue = F("Floerkestr.");
break;
}
case 103227:
{
returnValue = F("Floet");
break;
}
case 103228:
{
returnValue = F("Floetheide");
break;
}
case 103229:
{
returnValue = F("Floetstr.");
break;
}
case 103230:
{
returnValue = F("Floeßer Str.");
break;
}
case 103231:
{
returnValue = F("Floggensee");
break;
}
case 103232:
{
returnValue = F("Flogheide");
break;
}
case 103233:
{
returnValue = F("Flogtstr.");
break;
}
case 103234:
{
returnValue = F("Flohagen");
break;
}
case 103235:
{
returnValue = F("Flohbühlweg");
break;
}
case 103236:
{
returnValue = F("Floher Str.");
break;
}
case 103237:
{
returnValue = F("Flohgraben");
break;
}
case 103238:
{
returnValue = F("Flohrergasse");
break;
}
case 103239:
{
returnValue = F("Flohrscher Hof");
break;
}
case 103240:
{
returnValue = F("Flohrschützenstr.");
break;
}
case 103241:
{
returnValue = F("Flohrstr.");
break;
}
case 103242:
{
returnValue = F("Flohweg");
break;
}
case 103243:
{
returnValue = F("Floidenkamp");
break;
}
case 103244:
{
returnValue = F("Floigerweg");
break;
}
case 103245:
{
returnValue = F("Floisdorfer Str.");
break;
}
case 103246:
{
returnValue = F("Flomborner Weg");
break;
}
case 103247:
{
returnValue = F("Flomersheimer Eck");
break;
}
case 103248:
{
returnValue = F("Flomersheimer Str.");
break;
}
case 103249:
{
returnValue = F("Flonheimer Str.");
break;
}
case 103250:
{
returnValue = F("Flonheimer Weg");
break;
}
case 103251:
{
returnValue = F("Floorenstr.");
break;
}
case 103252:
{
returnValue = F("Floorsweg");
break;
}
case 103253:
{
returnValue = F("Flootlock");
break;
}
case 103254:
{
returnValue = F("Flora-Rossenrayweg");
break;
}
case 103255:
{
returnValue = F("Flora-Westfalica-Park");
break;
}
case 103256:
{
returnValue = F("Florabrücke");
break;
}
case 103257:
{
returnValue = F("Florapark");
break;
}
case 103258:
{
returnValue = F("Floraplatz");
break;
}
case 103259:
{
returnValue = F("Florapromenade");
break;
}
case 103260:
{
returnValue = F("Floraring Nord");
break;
}
case 103261:
{
returnValue = F("Floraring Süd");
break;
}
case 103262:
{
returnValue = F("Florastr.");
break;
}
case 103263:
{
returnValue = F("Floraweg");
break;
}
case 103264:
{
returnValue = F("Florazeile");
break;
}
case 103265:
{
returnValue = F("Florbachsweg");
break;
}
case 103266:
{
returnValue = F("Florenberger Str.");
break;
}
case 103267:
{
returnValue = F("Florenbergstr.");
break;
}
case 103268:
{
returnValue = F("Florenbicke");
break;
}
case 103269:
{
returnValue = F("Florence-Nightingale-Str.");
break;
}
case 103270:
{
returnValue = F("Florengasse");
break;
}
case 103271:
{
returnValue = F("Florens-Windmöller-Str.");
break;
}
case 103272:
{
returnValue = F("Florensstr.");
break;
}
case 103273:
{
returnValue = F("Florentin-Kästner-Weg");
break;
}
case 103274:
{
returnValue = F("Florentine-Benfer-Str.");
break;
}
case 103275:
{
returnValue = F("Florentinengang");
break;
}
case 103276:
{
returnValue = F("Florentineweg");
break;
}
case 103277:
{
returnValue = F("Florentinusplatz");
break;
}
case 103278:
{
returnValue = F("Florentiusgraben");
break;
}
case 103279:
{
returnValue = F("Florenz Peters Platz");
break;
}
case 103280:
{
returnValue = F("Florenz-Maisch-Str.");
break;
}
case 103281:
{
returnValue = F("Florenz-Sartorius-Str.");
break;
}
case 103282:
{
returnValue = F("Florestanweg");
break;
}
case 103283:
{
returnValue = F("Florettweg");
break;
}
case 103284:
{
returnValue = F("Florheckstr.");
break;
}
case 103285:
{
returnValue = F("Florhof");
break;
}
case 103286:
{
returnValue = F("Florian Feilmeier Allee");
break;
}
case 103287:
{
returnValue = F("Florian Geyer Siedlung");
break;
}
case 103288:
{
returnValue = F("Florian Geyer Str.");
break;
}
case 103289:
{
returnValue = F("Florian-Bartos-Str.");
break;
}
case 103290:
{
returnValue = F("Florian-Fischer-Str.");
break;
}
case 103291:
{
returnValue = F("Florian-Geyer-Ring");
break;
}
case 103292:
{
returnValue = F("Florian-Geyer-Siedlung");
break;
}
case 103293:
{
returnValue = F("Florian-Geyer-Str.");
break;
}
case 103294:
{
returnValue = F("Florian-Geyer-Weg");
break;
}
case 103295:
{
returnValue = F("Florian-Maurer-Str.");
break;
}
case 103296:
{
returnValue = F("Florian-Mayr-Weg");
break;
}
case 103297:
{
returnValue = F("Florian-Müller-Steg");
break;
}
case 103298:
{
returnValue = F("Florian-Park");
break;
}
case 103299:
{
returnValue = F("Florian-Weber-Str.");
break;
}
case 103300:
{
returnValue = F("Florian-Wengenmayr-Str.");
break;
}
case 103301:
{
returnValue = F("Florian-von-Lorch-Str.");
break;
}
case 103302:
{
returnValue = F("Florianergasse");
break;
}
case 103303:
{
returnValue = F("Florianerstr.");
break;
}
case 103304:
{
returnValue = F("Floriangasse");
break;
}
case 103305:
{
returnValue = F("Florianibergstr.");
break;
}
case 103306:
{
returnValue = F("Florianiplatz");
break;
}
case 103307:
{
returnValue = F("Florianistr.");
break;
}
case 103308:
{
returnValue = F("Florianplatz");
break;
}
case 103309:
{
returnValue = F("Florianring");
break;
}
case 103310:
{
returnValue = F("Floriansanger");
break;
}
case 103311:
{
returnValue = F("Floriansbogen");
break;
}
case 103312:
{
returnValue = F("Florianshöhe");
break;
}
case 103313:
{
returnValue = F("Floriansplatz");
break;
}
case 103314:
{
returnValue = F("Floriansring");
break;
}
case 103315:
{
returnValue = F("Florianssiedlung");
break;
}
case 103316:
{
returnValue = F("Florianstr.");
break;
}
case 103317:
{
returnValue = F("Floriansweg");
break;
}
case 103318:
{
returnValue = F("Florianweg");
break;
}
case 103319:
{
returnValue = F("Floriastr.");
break;
}
case 103320:
{
returnValue = F("Florida Loop");
break;
}
case 103321:
{
returnValue = F("Floridaring");
break;
}
case 103322:
{
returnValue = F("Floridastr.");
break;
}
case 103323:
{
returnValue = F("Floridoweg");
break;
}
case 103324:
{
returnValue = F("Florinsgarten");
break;
}
case 103325:
{
returnValue = F("Florinsmarkt");
break;
}
case 103326:
{
returnValue = F("Florinstr.");
break;
}
case 103327:
{
returnValue = F("Florinsweg");
break;
}
case 103328:
{
returnValue = F("Florinusweg");
break;
}
case 103329:
{
returnValue = F("Florisgarten");
break;
}
case 103330:
{
returnValue = F("Floriweg");
break;
}
case 103331:
{
returnValue = F("Florsackallee");
break;
}
case 103332:
{
returnValue = F("Florscheidstr.");
break;
}
case 103333:
{
returnValue = F("Florschützstr.");
break;
}
case 103334:
{
returnValue = F("Florstädter Str.");
break;
}
case 103335:
{
returnValue = F("Florstädter Weg");
break;
}
case 103336:
{
returnValue = F("Florusstr.");
break;
}
case 103337:
{
returnValue = F("Florweg");
break;
}
case 103338:
{
returnValue = F("Florwiese");
break;
}
case 103339:
{
returnValue = F("Florwiesenweg");
break;
}
case 103340:
{
returnValue = F("Floschenweg");
break;
}
case 103341:
{
returnValue = F("Floschweg");
break;
}
case 103342:
{
returnValue = F("Floschäcker");
break;
}
case 103343:
{
returnValue = F("Floss");
break;
}
case 103344:
{
returnValue = F("Flossachstr.");
break;
}
case 103345:
{
returnValue = F("Flossenbürger Str.");
break;
}
case 103346:
{
returnValue = F("Flossenbürgerstr.");
break;
}
case 103347:
{
returnValue = F("Flosshaustr.");
break;
}
case 103348:
{
returnValue = F("Flossweg");
break;
}
case 103349:
{
returnValue = F("Flosswiesen");
break;
}
case 103350:
{
returnValue = F("Flothbachgasse");
break;
}
case 103351:
{
returnValue = F("Flothbachring");
break;
}
case 103352:
{
returnValue = F("Flothend");
break;
}
case 103353:
{
returnValue = F("Flothender Str.");
break;
}
case 103354:
{
returnValue = F("Flothestr.");
break;
}
case 103355:
{
returnValue = F("Flothgasse");
break;
}
case 103356:
{
returnValue = F("Flothmersch");
break;
}
case 103357:
{
returnValue = F("Flothstr.");
break;
}
case 103358:
{
returnValue = F("Flotostr.");
break;
}
case 103359:
{
returnValue = F("Flotower Str.");
break;
}
case 103360:
{
returnValue = F("Flotowstiege");
break;
}
case 103361:
{
returnValue = F("Flotowstr.");
break;
}
case 103362:
{
returnValue = F("Flotowweg");
break;
}
case 103363:
{
returnValue = F("Flotstr.");
break;
}
case 103364:
{
returnValue = F("Flottbek");
break;
}
case 103365:
{
returnValue = F("Flottbeker Stieg");
break;
}
case 103366:
{
returnValue = F("Flottenstr.");
break;
}
case 103367:
{
returnValue = F("Flotternweg");
break;
}
case 103368:
{
returnValue = F("Flottgarten");
break;
}
case 103369:
{
returnValue = F("Flottheide");
break;
}
case 103370:
{
returnValue = F("Flotthof");
break;
}
case 103371:
{
returnValue = F("Flottkamp");
break;
}
case 103372:
{
returnValue = F("Flottmannstr.");
break;
}
case 103373:
{
returnValue = F("Flottmeierstr.");
break;
}
case 103374:
{
returnValue = F("Flottmoorpark");
break;
}
case 103375:
{
returnValue = F("Flottmoorring");
break;
}
case 103376:
{
returnValue = F("Flottowenweg");
break;
}
case 103377:
{
returnValue = F("Flottstelle");
break;
}
case 103378:
{
returnValue = F("Flottsteller Str.");
break;
}
case 103379:
{
returnValue = F("Flottstr.");
break;
}
case 103380:
{
returnValue = F("Flottwellstr.");
break;
}
case 103381:
{
returnValue = F("Flottwiesenweg");
break;
}
case 103382:
{
returnValue = F("Flotzer Weg");
break;
}
case 103383:
{
returnValue = F("Flotzwand");
break;
}
case 103384:
{
returnValue = F("Floußweg");
break;
}
case 103385:
{
returnValue = F("Flovericher Str.");
break;
}
case 103386:
{
returnValue = F("Flower Street");
break;
}
case 103387:
{
returnValue = F("Flowtrail");
break;
}
case 103388:
{
returnValue = F("Floxenstr.");
break;
}
case 103389:
{
returnValue = F("Flozbrunnen");
break;
}
case 103390:
{
returnValue = F("Floßbachstr.");
break;
}
case 103391:
{
returnValue = F("Floßbahn");
break;
}
case 103392:
{
returnValue = F("Floßberg");
break;
}
case 103393:
{
returnValue = F("Floßbergweg");
break;
}
case 103394:
{
returnValue = F("Floßbinderweg");
break;
}
case 103395:
{
returnValue = F("Floßer Pfad");
break;
}
case 103396:
{
returnValue = F("Floßer Str.");
break;
}
case 103397:
{
returnValue = F("Floßergasse");
break;
}
case 103398:
{
returnValue = F("Floßfeldgäßle");
break;
}
case 103399:
{
returnValue = F("Floßgasse");
break;
}
case 103400:
{
returnValue = F("Floßgassenweg");
break;
}
case 103401:
{
returnValue = F("Floßgatter");
break;
}
case 103402:
{
returnValue = F("Floßgraben");
break;
}
case 103403:
{
returnValue = F("Floßgrabensiedlung");
break;
}
case 103404:
{
returnValue = F("Floßgrabenstr.");
break;
}
case 103405:
{
returnValue = F("Floßgrabenweg");
break;
}
case 103406:
{
returnValue = F("Floßhafenstr.");
break;
}
case 103407:
{
returnValue = F("Floßhaistr.");
break;
}
case 103408:
{
returnValue = F("Floßholzweg");
break;
}
case 103409:
{
returnValue = F("Floßholzzechenweg");
break;
}
case 103410:
{
returnValue = F("Floßleppenweg");
break;
}
case 103411:
{
returnValue = F("Floßlände");
break;
}
case 103412:
{
returnValue = F("Floßländle");
break;
}
case 103413:
{
returnValue = F("Floßmannstr.");
break;
}
case 103414:
{
returnValue = F("Floßmannweg");
break;
}
case 103415:
{
returnValue = F("Floßmeisterweg");
break;
}
case 103416:
{
returnValue = F("Floßmühle");
break;
}
case 103417:
{
returnValue = F("Floßmühler Str.");
break;
}
case 103418:
{
returnValue = F("Floßplatz");
break;
}
case 103419:
{
returnValue = F("Floßstegstr.");
break;
}
case 103420:
{
returnValue = F("Floßstr.");
break;
}
case 103421:
{
returnValue = F("Floßwaldstr.");
break;
}
case 103422:
{
returnValue = F("Floßweg");
break;
}
case 103423:
{
returnValue = F("Floßweiherweg");
break;
}
case 103424:
{
returnValue = F("Floßwiese");
break;
}
case 103425:
{
returnValue = F("Floßwörthstr.");
break;
}
case 103426:
{
returnValue = F("Floßzechenweg");
break;
}
case 103427:
{
returnValue = F("Fluchgasse");
break;
}
case 103428:
{
returnValue = F("Fluchtstollen Ost");
break;
}
case 103429:
{
returnValue = F("Fluchtstollen West");
break;
}
case 103430:
{
returnValue = F("Fluchtweg");
break;
}
case 103431:
{
returnValue = F("Fludern");
break;
}
case 103432:
{
returnValue = F("Fludersbach");
break;
}
case 103433:
{
returnValue = F("Fluderstr.");
break;
}
case 103434:
{
returnValue = F("Fluderweg");
break;
}
case 103435:
{
returnValue = F("Fluegrabenweg");
break;
}
case 103436:
{
returnValue = F("Fluertshäuser Hof");
break;
}
case 103437:
{
returnValue = F("Fluetgraben");
break;
}
case 103438:
{
returnValue = F("Flugfeld-Allee");
break;
}
case 103439:
{
returnValue = F("Flugfeldstr.");
break;
}
case 103440:
{
returnValue = F("Flughafen-Ring");
break;
}
case 103441:
{
returnValue = F("Flughafenallee");
break;
}
case 103442:
{
returnValue = F("Flughafenblick");
break;
}
case 103443:
{
returnValue = F("Flughafenentlastungsstr.");
break;
}
case 103444:
{
returnValue = F("Flughafenring");
break;
}
case 103445:
{
returnValue = F("Flughafenstr.");
break;
}
case 103446:
{
returnValue = F("Flughafenweg");
break;
}
case 103447:
{
returnValue = F("Flughorst");
break;
}
case 103448:
{
returnValue = F("Flugplatz");
break;
}
case 103449:
{
returnValue = F("Flugplatz Kassel Calden");
break;
}
case 103450:
{
returnValue = F("Flugplatz Ringweg");
break;
}
case 103451:
{
returnValue = F("Flugplatz-Str.");
break;
}
case 103452:
{
returnValue = F("Flugplatzbrücke");
break;
}
case 103453:
{
returnValue = F("Flugplatzsiedlung");
break;
}
case 103454:
{
returnValue = F("Flugplatzstr.");
break;
}
case 103455:
{
returnValue = F("Flugplatzstr. F1");
break;
}
case 103456:
{
returnValue = F("Flugplatzstr. F2");
break;
}
case 103457:
{
returnValue = F("Flugplatzweg");
break;
}
case 103458:
{
returnValue = F("Flugsand");
break;
}
case 103459:
{
returnValue = F("Flugshofer Str.");
break;
}
case 103460:
{
returnValue = F("Flugstr.");
break;
}
case 103461:
{
returnValue = F("Flugsweg");
break;
}
case 103462:
{
returnValue = F("Fluhensteinweg");
break;
}
case 103463:
{
returnValue = F("Fluhstr.");
break;
}
case 103464:
{
returnValue = F("Fluhweg");
break;
}
case 103465:
{
returnValue = F("Fluitweg");
break;
}
case 103466:
{
returnValue = F("Flummweg");
break;
}
case 103467:
{
returnValue = F("Flunau");
break;
}
case 103468:
{
returnValue = F("Flunderstr.");
break;
}
case 103469:
{
returnValue = F("Flungergasse");
break;
}
case 103470:
{
returnValue = F("Fluorner Str.");
break;
}
case 103471:
{
returnValue = F("Fluorner Weg");
break;
}
case 103472:
{
returnValue = F("Flur");
break;
}
case 103473:
{
returnValue = F("Flur 8 - 1151");
break;
}
case 103474:
{
returnValue = F("Flur A");
break;
}
case 103475:
{
returnValue = F("Flur B");
break;
}
case 103476:
{
returnValue = F("Flur Buche");
break;
}
case 103477:
{
returnValue = F("Flur C");
break;
}
case 103478:
{
returnValue = F("Flur D");
break;
}
case 103479:
{
returnValue = F("Flur E");
break;
}
case 103480:
{
returnValue = F("Flur F");
break;
}
case 103481:
{
returnValue = F("Flur König");
break;
}
case 103482:
{
returnValue = F("Flur Moos");
break;
}
case 103483:
{
returnValue = F("Flur Oelzsch");
break;
}
case 103484:
{
returnValue = F("Flur Stäudig");
break;
}
case 103485:
{
returnValue = F("Flur Stöckigt");
break;
}
case 103486:
{
returnValue = F("Flur Troppach");
break;
}
case 103487:
{
returnValue = F("Flur Tscherlich");
break;
}
case 103488:
{
returnValue = F("Flur am Stadtbad");
break;
}
case 103489:
{
returnValue = F("Fluranger");
break;
}
case 103490:
{
returnValue = F("Flurau");
break;
}
case 103491:
{
returnValue = F("Fluraustr.");
break;
}
case 103492:
{
returnValue = F("Flurbachstr.");
break;
}
case 103493:
{
returnValue = F("Flurbereinigungsstr.");
break;
}
case 103494:
{
returnValue = F("Flurbergstr.");
break;
}
case 103495:
{
returnValue = F("Flurblick");
break;
}
case 103496:
{
returnValue = F("Flurenstr.");
break;
}
case 103497:
{
returnValue = F("Flurenwende");
break;
}
case 103498:
{
returnValue = F("Flurergasse");
break;
}
case 103499:
{
returnValue = F("Flurgarten");
break;
}
case 103500:
{
returnValue = F("Flurgartenstr.");
break;
}
case 103501:
{
returnValue = F("Flurgasse");
break;
}
case 103502:
{
returnValue = F("Flurgaßl");
break;
}
case 103503:
{
returnValue = F("Flurgrenzstr.");
break;
}
case 103504:
{
returnValue = F("Flurgrenzweg");
break;
}
case 103505:
{
returnValue = F("Flurgäßchen");
break;
}
case 103506:
{
returnValue = F("Flurhofstr.");
break;
}
case 103507:
{
returnValue = F("Flurhofweg");
break;
}
case 103508:
{
returnValue = F("Flurholz");
break;
}
case 103509:
{
returnValue = F("Flurhübel");
break;
}
case 103510:
{
returnValue = F("Flurhütte");
break;
}
case 103511:
{
returnValue = F("Flurküppelweg");
break;
}
case 103512:
{
returnValue = F("Flurlgasse");
break;
}
case 103513:
{
returnValue = F("Flurlstr.");
break;
}
case 103514:
{
returnValue = F("Flurring");
break;
}
case 103515:
{
returnValue = F("Flurscheide");
break;
}
case 103516:
{
returnValue = F("Flurschneise");
break;
}
case 103517:
{
returnValue = F("Flurschützenweg");
break;
}
case 103518:
{
returnValue = F("Flursstr.");
break;
}
case 103519:
{
returnValue = F("Flursteige");
break;
}
case 103520:
{
returnValue = F("Flursteinweg");
break;
}
case 103521:
{
returnValue = F("Flurstr.");
break;
}
case 103522:
{
returnValue = F("Flurstütze");
break;
}
case 103523:
{
returnValue = F("Flurstützenweg");
break;
}
case 103524:
{
returnValue = F("Flurteil Brille");
break;
}
case 103525:
{
returnValue = F("Flurteil Eule");
break;
}
case 103526:
{
returnValue = F("Flurweg");
break;
}
case 103527:
{
returnValue = F("Flurweg Schwärzermühle");
break;
}
case 103528:
{
returnValue = F("Flurwiese");
break;
}
case 103529:
{
returnValue = F("Flurwiesen");
break;
}
case 103530:
{
returnValue = F("Flurwiesenweg");
break;
}
case 103531:
{
returnValue = F("Flurystr.");
break;
}
case 103532:
{
returnValue = F("Flurzaun");
break;
}
case 103533:
{
returnValue = F("Flurzaunstr.");
break;
}
case 103534:
{
returnValue = F("Fluräckerstr.");
break;
}
case 103535:
{
returnValue = F("Fluräckerweg");
break;
}
case 103536:
{
returnValue = F("Flusspferd");
break;
}
case 103537:
{
returnValue = F("Flusswanderweg");
break;
}
case 103538:
{
returnValue = F("Flustr.");
break;
}
case 103539:
{
returnValue = F("Flutbachstr.");
break;
}
case 103540:
{
returnValue = F("Flutbrücke");
break;
}
case 103541:
{
returnValue = F("Flutenwinkel");
break;
}
case 103542:
{
returnValue = F("Flutgasse");
break;
}
case 103543:
{
returnValue = F("Flutgraben");
break;
}
case 103544:
{
returnValue = F("Flutgrabenring");
break;
}
case 103545:
{
returnValue = F("Flutgrabenstr.");
break;
}
case 103546:
{
returnValue = F("Flutgrabenweg");
break;
}
case 103547:
{
returnValue = F("Flutgraf");
break;
}
case 103548:
{
returnValue = F("Fluthamelstr.");
break;
}
case 103549:
{
returnValue = F("Fluthgrafstr.");
break;
}
case 103550:
{
returnValue = F("Fluthstr.");
break;
}
case 103551:
{
returnValue = F("Fluthweg");
break;
}
case 103552:
{
returnValue = F("Flutkamp");
break;
}
case 103553:
{
returnValue = F("Flutkanal");
break;
}
case 103554:
{
returnValue = F("Flutmulde");
break;
}
case 103555:
{
returnValue = F("Flutmuldenweg");
break;
}
case 103556:
{
returnValue = F("Flutstr.");
break;
}
case 103557:
{
returnValue = F("Flutufer");
break;
}
case 103558:
{
returnValue = F("Flutweg");
break;
}
case 103559:
{
returnValue = F("Flutwidde");
break;
}
case 103560:
{
returnValue = F("Fluusweg");
break;
}
case 103561:
{
returnValue = F("Fluwaweg");
break;
}
case 103562:
{
returnValue = F("Flußbacher Weg");
break;
}
case 103563:
{
returnValue = F("Flußbadeanstalt");
break;
}
case 103564:
{
returnValue = F("Flußbergstr.");
break;
}
case 103565:
{
returnValue = F("Flußgasse");
break;
}
case 103566:
{
returnValue = F("Flußhüterweg");
break;
}
case 103567:
{
returnValue = F("Flußspatweg");
break;
}
case 103568:
{
returnValue = F("Flußstr.");
break;
}
case 103569:
{
returnValue = F("Flußweg");
break;
}
case 103570:
{
returnValue = F("Flyhöhe");
break;
}
case 103571:
{
returnValue = F("Flächennaturdenkmal Luchpfuhl");
break;
}
case 103572:
{
returnValue = F("Flächenweg");
break;
}
case 103573:
{
returnValue = F("Flächeweg");
break;
}
case 103574:
{
returnValue = F("Flächteichweg");
break;
}
case 103575:
{
returnValue = F("Fläminger Ufer");
break;
}
case 103576:
{
returnValue = F("Flämingstr.");
break;
}
case 103577:
{
returnValue = F("Flämingweg");
break;
}
case 103578:
{
returnValue = F("Flämische Allee");
break;
}
case 103579:
{
returnValue = F("Flämische Str.");
break;
}
case 103580:
{
returnValue = F("Flämmergasse");
break;
}
case 103581:
{
returnValue = F("Flämmigtweg");
break;
}
case 103582:
{
returnValue = F("Flärnweg");
break;
}
case 103583:
{
returnValue = F("Fläutendörper Steg");
break;
}
case 103584:
{
returnValue = F("Flöahüggl");
break;
}
case 103585:
{
returnValue = F("Flöckberg");
break;
}
case 103586:
{
returnValue = F("Flöddertstr.");
break;
}
case 103587:
{
returnValue = F("Flödderweg");
break;
}
case 103588:
{
returnValue = F("Flögelinger Str.");
break;
}
case 103589:
{
returnValue = F("Flögelner Str.");
break;
}
case 103590:
{
returnValue = F("Flögemannsesch");
break;
}
case 103591:
{
returnValue = F("Flögerstr.");
break;
}
case 103592:
{
returnValue = F("Flögerter Weg");
break;
}
case 103593:
{
returnValue = F("Flögsand");
break;
}
case 103594:
{
returnValue = F("Flöhatalradweg");
break;
}
case 103595:
{
returnValue = F("Flöhatalstr.");
break;
}
case 103596:
{
returnValue = F("Flöhbachäcker");
break;
}
case 103597:
{
returnValue = F("Flöhbergstr.");
break;
}
case 103598:
{
returnValue = F("Flöhbergweg");
break;
}
case 103599:
{
returnValue = F("Flöhkamp");
break;
}
case 103600:
{
returnValue = F("Flöhrbrinkweg");
break;
}
case 103601:
{
returnValue = F("Flökershauser Weg");
break;
}
case 103602:
{
returnValue = F("Flönbarg");
break;
}
case 103603:
{
returnValue = F("Flönstalweg");
break;
}
case 103604:
{
returnValue = F("Flörbachstr.");
break;
}
case 103605:
{
returnValue = F("Flörbachweg");
break;
}
case 103606:
{
returnValue = F("Flörekeweg");
break;
}
case 103607:
{
returnValue = F("Flörenhof");
break;
}
case 103608:
{
returnValue = F("Flörkendorfer Weg");
break;
}
case 103609:
{
returnValue = F("Flörkenkamp");
break;
}
case 103610:
{
returnValue = F("Flörkestr.");
break;
}
case 103611:
{
returnValue = F("Flörsel");
break;
}
case 103612:
{
returnValue = F("Flörsheimer Grenzweg");
break;
}
case 103613:
{
returnValue = F("Flörsheimer Str.");
break;
}
case 103614:
{
returnValue = F("Flörsheimer Waldweg");
break;
}
case 103615:
{
returnValue = F("Flörsheimer Weg");
break;
}
case 103616:
{
returnValue = F("Flörstr.");
break;
}
case 103617:
{
returnValue = F("Flösse");
break;
}
case 103618:
{
returnValue = F("Flössergasse");
break;
}
case 103619:
{
returnValue = F("Flösserstr.");
break;
}
case 103620:
{
returnValue = F("Flösserweg");
break;
}
case 103621:
{
returnValue = F("Flötebachweg");
break;
}
case 103622:
{
returnValue = F("Flötebrink");
break;
}
case 103623:
{
returnValue = F("Flötenhalterweg");
break;
}
case 103624:
{
returnValue = F("Flötenkamp");
break;
}
case 103625:
{
returnValue = F("Flötenkiel");
break;
}
case 103626:
{
returnValue = F("Flötenlinder Weg");
break;
}
case 103627:
{
returnValue = F("Flöter Weg");
break;
}
case 103628:
{
returnValue = F("Flötergrabenbrücke");
break;
}
case 103629:
{
returnValue = F("Flötgraben");
break;
}
case 103630:
{
returnValue = F("Flöthbruchstr.");
break;
}
case 103631:
{
returnValue = F("Flöthdamm");
break;
}
case 103632:
{
returnValue = F("Flöthekreisel");
break;
}
case 103633:
{
returnValue = F("Flöther Str.");
break;
}
case 103634:
{
returnValue = F("Flöther Weg");
break;
}
case 103635:
{
returnValue = F("Flöthesiek");
break;
}
case 103636:
{
returnValue = F("Flöthestr.");
break;
}
case 103637:
{
returnValue = F("Flöthstr.");
break;
}
case 103638:
{
returnValue = F("Flöthweg");
break;
}
case 103639:
{
returnValue = F("Flötten-Pättken");
break;
}
case 103640:
{
returnValue = F("Flöttenweg");
break;
}
case 103641:
{
returnValue = F("Flöttestr.");
break;
}
case 103642:
{
returnValue = F("Flötteweg");
break;
}
case 103643:
{
returnValue = F("Flöttlinstorstr.");
break;
}
case 103644:
{
returnValue = F("Flötweg");
break;
}
case 103645:
{
returnValue = F("Flötzbachstr.");
break;
}
case 103646:
{
returnValue = F("Flötzweg");
break;
}
case 103647:
{
returnValue = F("Flöz Dickebank");
break;
}
case 103648:
{
returnValue = F("Flöz Finefrau");
break;
}
case 103649:
{
returnValue = F("Flöz Gretchen");
break;
}
case 103650:
{
returnValue = F("Flöz Sonnenschein");
break;
}
case 103651:
{
returnValue = F("Flöz-Gretchen-Str.");
break;
}
case 103652:
{
returnValue = F("Flöz-Herrenbank-Str.");
break;
}
case 103653:
{
returnValue = F("Flöz-Hugo-Siedlung");
break;
}
case 103654:
{
returnValue = F("Flöz-Laura-Str.");
break;
}
case 103655:
{
returnValue = F("Flöz-Matthias-Str.");
break;
}
case 103656:
{
returnValue = F("Flöz-Röttgersbank-Str.");
break;
}
case 103657:
{
returnValue = F("Flöz-Wilhelm-Str.");
break;
}
case 103658:
{
returnValue = F("Flöz-Zollverein-Str.");
break;
}
case 103659:
{
returnValue = F("Flözlinger Str.");
break;
}
case 103660:
{
returnValue = F("Flözstr.");
break;
}
case 103661:
{
returnValue = F("Flözweg");
break;
}
case 103662:
{
returnValue = F("Flößaustr.");
break;
}
case 103663:
{
returnValue = F("Flößbahn");
break;
}
case 103664:
{
returnValue = F("Flößberg");
break;
}
case 103665:
{
returnValue = F("Flößberger Str.");
break;
}
case 103666:
{
returnValue = F("Flößberger Waldsiedlung");
break;
}
case 103667:
{
returnValue = F("Flößberger Weg");
break;
}
case 103668:
{
returnValue = F("Flößerbachweg");
break;
}
case 103669:
{
returnValue = F("Flößergang");
break;
}
case 103670:
{
returnValue = F("Flößergasse");
break;
}
case 103671:
{
returnValue = F("Flößerpark");
break;
}
case 103672:
{
returnValue = F("Flößerpfad");
break;
}
case 103673:
{
returnValue = F("Flößerplatz");
break;
}
case 103674:
{
returnValue = F("Flößersteg");
break;
}
case 103675:
{
returnValue = F("Flößersteig");
break;
}
case 103676:
{
returnValue = F("Flößerstr.");
break;
}
case 103677:
{
returnValue = F("Flößerweg");
break;
}
case 103678:
{
returnValue = F("Flößerwegle");
break;
}
case 103679:
{
returnValue = F("Flößgraben");
break;
}
case 103680:
{
returnValue = F("Flößholzweg");
break;
}
case 103681:
{
returnValue = F("Flößlein");
break;
}
case 103682:
{
returnValue = F("Flößleinstr.");
break;
}
case 103683:
{
returnValue = F("Flößleinsweg");
break;
}
case 103684:
{
returnValue = F("Flößlestr.");
break;
}
case 103685:
{
returnValue = F("Flößstr.");
break;
}
case 103686:
{
returnValue = F("Flößweg");
break;
}
case 103687:
{
returnValue = F("Flößwehrtal");
break;
}
case 103688:
{
returnValue = F("Flößwiese");
break;
}
case 103689:
{
returnValue = F("Flößzechenweg");
break;
}
case 103690:
{
returnValue = F("Flüburg");
break;
}
case 103691:
{
returnValue = F("Flüchterei");
break;
}
case 103692:
{
returnValue = F("Flückigerstr.");
break;
}
case 103693:
{
returnValue = F("Flückspatt");
break;
}
case 103694:
{
returnValue = F("Flügel");
break;
}
case 103695:
{
returnValue = F("Flügel 1");
break;
}
case 103696:
{
returnValue = F("Flügel 10");
break;
}
case 103697:
{
returnValue = F("Flügel 12");
break;
}
case 103698:
{
returnValue = F("Flügel 12a");
break;
}
case 103699:
{
returnValue = F("Flügel 13");
break;
}
case 103700:
{
returnValue = F("Flügel 14");
break;
}
case 103701:
{
returnValue = F("Flügel 15");
break;
}
case 103702:
{
returnValue = F("Flügel 16");
break;
}
case 103703:
{
returnValue = F("Flügel 17");
break;
}
case 103704:
{
returnValue = F("Flügel 18");
break;
}
case 103705:
{
returnValue = F("Flügel 19");
break;
}
case 103706:
{
returnValue = F("Flügel 2");
break;
}
case 103707:
{
returnValue = F("Flügel 20");
break;
}
case 103708:
{
returnValue = F("Flügel 21");
break;
}
case 103709:
{
returnValue = F("Flügel 22");
break;
}
case 103710:
{
returnValue = F("Flügel 23");
break;
}
case 103711:
{
returnValue = F("Flügel 24");
break;
}
case 103712:
{
returnValue = F("Flügel 25");
break;
}
case 103713:
{
returnValue = F("Flügel 26");
break;
}
case 103714:
{
returnValue = F("Flügel 3");
break;
}
case 103715:
{
returnValue = F("Flügel 4");
break;
}
case 103716:
{
returnValue = F("Flügel 5");
break;
}
case 103717:
{
returnValue = F("Flügel 6");
break;
}
case 103718:
{
returnValue = F("Flügel 8");
break;
}
case 103719:
{
returnValue = F("Flügel 9 (Neunenweg)");
break;
}
case 103720:
{
returnValue = F("Flügel A");
break;
}
case 103721:
{
returnValue = F("Flügel B");
break;
}
case 103722:
{
returnValue = F("Flügel C");
break;
}
case 103723:
{
returnValue = F("Flügel D");
break;
}
case 103724:
{
returnValue = F("Flügel E");
break;
}
case 103725:
{
returnValue = F("Flügel F");
break;
}
case 103726:
{
returnValue = F("Flügel G");
break;
}
case 103727:
{
returnValue = F("Flügel H");
break;
}
case 103728:
{
returnValue = F("Flügel H- Z");
break;
}
case 103729:
{
returnValue = F("Flügel II");
break;
}
case 103730:
{
returnValue = F("Flügel III");
break;
}
case 103731:
{
returnValue = F("Flügel IV");
break;
}
case 103732:
{
returnValue = F("Flügel J");
break;
}
case 103733:
{
returnValue = F("Flügel K");
break;
}
case 103734:
{
returnValue = F("Flügel L");
break;
}
case 103735:
{
returnValue = F("Flügel M");
break;
}
case 103736:
{
returnValue = F("Flügel N");
break;
}
case 103737:
{
returnValue = F("Flügel O");
break;
}
case 103738:
{
returnValue = F("Flügel P");
break;
}
case 103739:
{
returnValue = F("Flügel Q");
break;
}
case 103740:
{
returnValue = F("Flügel R");
break;
}
case 103741:
{
returnValue = F("Flügel Ringel");
break;
}
case 103742:
{
returnValue = F("Flügel T");
break;
}
case 103743:
{
returnValue = F("Flügel V");
break;
}
case 103744:
{
returnValue = F("Flügel VI");
break;
}
case 103745:
{
returnValue = F("Flügel VIII");
break;
}
case 103746:
{
returnValue = F("Flügel Weg 10");
break;
}
case 103747:
{
returnValue = F("Flügel Weg 3");
break;
}
case 103748:
{
returnValue = F("Flügel Weg 5");
break;
}
case 103749:
{
returnValue = F("Flügel Weg 7");
break;
}
case 103750:
{
returnValue = F("Flügel Weg Z");
break;
}
case 103751:
{
returnValue = F("Flügel X");
break;
}
case 103752:
{
returnValue = F("Flügel Z");
break;
}
case 103753:
{
returnValue = F("Flügel-A");
break;
}
case 103754:
{
returnValue = F("Flügel-B");
break;
}
case 103755:
{
returnValue = F("Flügel-F");
break;
}
case 103756:
{
returnValue = F("Flügel-L");
break;
}
case 103757:
{
returnValue = F("Flügel-N");
break;
}
case 103758:
{
returnValue = F("Flügel-O");
break;
}
case 103759:
{
returnValue = F("Flügel-V");
break;
}
case 103760:
{
returnValue = F("Flügel-X");
break;
}
case 103761:
{
returnValue = F("Flügelaustr.");
break;
}
case 103762:
{
returnValue = F("Flügelgasse");
break;
}
case 103763:
{
returnValue = F("Flügelhorn");
break;
}
case 103764:
{
returnValue = F("Flügelhorst");
break;
}
case 103765:
{
returnValue = F("Flügelsbuch");
break;
}
case 103766:
{
returnValue = F("Flügelschneise");
break;
}
case 103767:
{
returnValue = F("Flügelskämpchen");
break;
}
case 103768:
{
returnValue = F("Flügelstr.");
break;
}
case 103769:
{
returnValue = F("Flügelweg");
break;
}
case 103770:
{
returnValue = F("Flügelweg 11");
break;
}
case 103771:
{
returnValue = F("Flügelweg 13");
break;
}
case 103772:
{
returnValue = F("Flügelweg 2");
break;
}
case 103773:
{
returnValue = F("Flügelweg 3");
break;
}
case 103774:
{
returnValue = F("Flügelweg A");
break;
}
case 103775:
{
returnValue = F("Flügelweg B");
break;
}
case 103776:
{
returnValue = F("Flügelweg C");
break;
}
case 103777:
{
returnValue = F("Flügelweg D");
break;
}
case 103778:
{
returnValue = F("Flügelweg E");
break;
}
case 103779:
{
returnValue = F("Flügelweg F");
break;
}
case 103780:
{
returnValue = F("Flügelweg V");
break;
}
case 103781:
{
returnValue = F("Flüggendorfer Str.");
break;
}
case 103782:
{
returnValue = F("Flüggenweg");
break;
}
case 103783:
{
returnValue = F("Flüglinger Weg");
break;
}
case 103784:
{
returnValue = F("Flüheblick");
break;
}
case 103785:
{
returnValue = F("Flühenstr.");
break;
}
case 103786:
{
returnValue = F("Flühgasse");
break;
}
case 103787:
{
returnValue = F("Flühlingstr.");
break;
}
case 103788:
{
returnValue = F("Flühlistr.");
break;
}
case 103789:
{
returnValue = F("Flühlosweg");
break;
}
case 103790:
{
returnValue = F("Flühweg");
break;
}
case 103791:
{
returnValue = F("Flümberg");
break;
}
case 103792:
{
returnValue = F("Flünnertzdyk");
break;
}
case 103793:
{
returnValue = F("Flürchen");
break;
}
case 103794:
{
returnValue = F("Flürchenstr.");
break;
}
case 103795:
{
returnValue = F("Flürener Weg");
break;
}
case 103796:
{
returnValue = F("Flürle Ring");
break;
}
case 103797:
{
returnValue = F("Flürlein");
break;
}
case 103798:
{
returnValue = F("Flürleinstr.");
break;
}
case 103799:
{
returnValue = F("Flürleinsweg");
break;
}
case 103800:
{
returnValue = F("Flürlenstr.");
break;
}
case 103801:
{
returnValue = F("Flürlesweg");
break;
}
case 103802:
{
returnValue = F("Flürleweg");
break;
}
case 103803:
{
returnValue = F("Flürlweg");
break;
}
case 103804:
{
returnValue = F("Flürscheimsteg");
break;
}
case 103805:
{
returnValue = F("Flüsselweg");
break;
}
case 103806:
{
returnValue = F("Flüssen");
break;
}
case 103807:
{
returnValue = F("Flüssener Weg");
break;
}
case 103808:
{
returnValue = F("Flüssenweg");
break;
}
case 103809:
{
returnValue = F("Flüsslestr.");
break;
}
case 103810:
{
returnValue = F("Flüte");
break;
}
case 103811:
{
returnValue = F("Flütenkamp");
break;
}
case 103812:
{
returnValue = F("Flüthenweg");
break;
}
case 103813:
{
returnValue = F("Flüthörn");
break;
}
case 103814:
{
returnValue = F("Flütjenburgstr.");
break;
}
case 103815:
{
returnValue = F("Flütjergasse");
break;
}
case 103816:
{
returnValue = F("Flütstr.");
break;
}
case 103817:
{
returnValue = F("Flüttenstr.");
break;
}
case 103818:
{
returnValue = F("Flüttenweg");
break;
}
case 103819:
{
returnValue = F("Flüzer Platz");
break;
}
case 103820:
{
returnValue = F("Fm. Riebeling Weg");
break;
}
case 103821:
{
returnValue = F("Fobachweg");
break;
}
case 103822:
{
returnValue = F("Focher Dahl");
break;
}
case 103823:
{
returnValue = F("Focher Str.");
break;
}
case 103824:
{
returnValue = F("Fockbeker Chaussee");
break;
}
case 103825:
{
returnValue = F("Fockbeker Str.");
break;
}
case 103826:
{
returnValue = F("Fockbekfeld");
break;
}
case 103827:
{
returnValue = F("Focke-Wulf-Str.");
break;
}
case 103828:
{
returnValue = F("Fockeltenweg");
break;
}
case 103829:
{
returnValue = F("Fockenbachsstr.");
break;
}
case 103830:
{
returnValue = F("Fockenbachstr.");
break;
}
case 103831:
{
returnValue = F("Fockenberger Str.");
break;
}
case 103832:
{
returnValue = F("Fockenbollwerkstr.");
break;
}
case 103833:
{
returnValue = F("Fockenbrockstr.");
break;
}
case 103834:
{
returnValue = F("Fockenbrunnen");
break;
}
case 103835:
{
returnValue = F("Fockendorf");
break;
}
case 103836:
{
returnValue = F("Fockendorfer Grund");
break;
}
case 103837:
{
returnValue = F("Fockendorfer Weg");
break;
}
case 103838:
{
returnValue = F("Fockenfeld");
break;
}
case 103839:
{
returnValue = F("Fockenfelder Str.");
break;
}
case 103840:
{
returnValue = F("Fockengraben");
break;
}
case 103841:
{
returnValue = F("Fockenhalde");
break;
}
case 103842:
{
returnValue = F("Fockenhausen");
break;
}
case 103843:
{
returnValue = F("Fockenkamp");
break;
}
case 103844:
{
returnValue = F("Fockenrader Redder");
break;
}
case 103845:
{
returnValue = F("Fockenstegge");
break;
}
case 103846:
{
returnValue = F("Fockensteinstr.");
break;
}
case 103847:
{
returnValue = F("Fockensteinweg");
break;
}
case 103848:
{
returnValue = F("Fockentalstr.");
break;
}
case 103849:
{
returnValue = F("Fockentalweg");
break;
}
case 103850:
{
returnValue = F("Fockenweg");
break;
}
case 103851:
{
returnValue = F("Fockes Weg");
break;
}
case 103852:
{
returnValue = F("Fockestr.");
break;
}
case 103853:
{
returnValue = F("Focko Ukena Str.");
break;
}
case 103854:
{
returnValue = F("Focko-Ukena-Str.");
break;
}
case 103855:
{
returnValue = F("Fockpoolstr.");
break;
}
case 103856:
{
returnValue = F("Fockstr.");
break;
}
case 103857:
{
returnValue = F("Fockweg");
break;
}
case 103858:
{
returnValue = F("Foelixstr.");
break;
}
case 103859:
{
returnValue = F("Foelkes Kamp");
break;
}
case 103860:
{
returnValue = F("Foellerweg");
break;
}
case 103861:
{
returnValue = F("Foerstermühle");
break;
}
case 103862:
{
returnValue = F("Foersterstr.");
break;
}
case 103863:
{
returnValue = F("Foglpark");
break;
}
case 103864:
{
returnValue = F("Fohentalstr.");
break;
}
case 103865:
{
returnValue = F("Fohlbergweg");
break;
}
case 103866:
{
returnValue = F("Fohlenbergstr.");
break;
}
case 103867:
{
returnValue = F("Fohlenbergweg");
break;
}
case 103868:
{
returnValue = F("Fohlenbruch");
break;
}
case 103869:
{
returnValue = F("Fohlenfeld");
break;
}
case 103870:
{
returnValue = F("Fohlengarten");
break;
}
case 103871:
{
returnValue = F("Fohlengartenstr.");
break;
}
case 103872:
{
returnValue = F("Fohlengartenweg");
break;
}
case 103873:
{
returnValue = F("Fohlengasse");
break;
}
case 103874:
{
returnValue = F("Fohlengrund");
break;
}
case 103875:
{
returnValue = F("Fohlenhof");
break;
}
case 103876:
{
returnValue = F("Fohlenhofstr.");
break;
}
case 103877:
{
returnValue = F("Fohlenhofweg");
break;
}
case 103878:
{
returnValue = F("Fohlenkamp");
break;
}
case 103879:
{
returnValue = F("Fohlenplackener Str.");
break;
}
case 103880:
{
returnValue = F("Fohlenstallschneise");
break;
}
case 103881:
{
returnValue = F("Fohlenstandsweg");
break;
}
case 103882:
{
returnValue = F("Fohlensteige");
break;
}
case 103883:
{
returnValue = F("Fohlensteigweg");
break;
}
case 103884:
{
returnValue = F("Fohlensteinstr.");
break;
}
case 103885:
{
returnValue = F("Fohlenstr.");
break;
}
case 103886:
{
returnValue = F("Fohlentrift");
break;
}
case 103887:
{
returnValue = F("Fohlenweg");
break;
}
case 103888:
{
returnValue = F("Fohlenweg I");
break;
}
case 103889:
{
returnValue = F("Fohlenweg II");
break;
}
case 103890:
{
returnValue = F("Fohlenweide");
break;
}
case 103891:
{
returnValue = F("Fohlenweidetraufweg");
break;
}
case 103892:
{
returnValue = F("Fohlenweideweg");
break;
}
case 103893:
{
returnValue = F("Fohlenwiese");
break;
}
case 103894:
{
returnValue = F("Fohlenwiesweg");
break;
}
case 103895:
{
returnValue = F("Fohlenwinkel");
break;
}
case 103896:
{
returnValue = F("Fohlenäckerweg");
break;
}
case 103897:
{
returnValue = F("Fohling");
break;
}
case 103898:
{
returnValue = F("Fohlochweg");
break;
}
case 103899:
{
returnValue = F("Fohnbachstr.");
break;
}
case 103900:
{
returnValue = F("Fohr");
break;
}
case 103901:
{
returnValue = F("Fohrder Hauptstr.");
break;
}
case 103902:
{
returnValue = F("Fohrder Landstr.");
break;
}
case 103903:
{
returnValue = F("Fohrenbachstr.");
break;
}
case 103904:
{
returnValue = F("Fohrenberg");
break;
}
case 103905:
{
returnValue = F("Fohrenbergstr.");
break;
}
case 103906:
{
returnValue = F("Fohrenbreide");
break;
}
case 103907:
{
returnValue = F("Fohrenbuckweg");
break;
}
case 103908:
{
returnValue = F("Fohrenbühl");
break;
}
case 103909:
{
returnValue = F("Fohrenbühlstr.");
break;
}
case 103910:
{
returnValue = F("Fohrenbühlweg");
break;
}
case 103911:
{
returnValue = F("Fohreneckstr.");
break;
}
case 103912:
{
returnValue = F("Fohreneckweg");
break;
}
case 103913:
{
returnValue = F("Fohrenhöfe");
break;
}
case 103914:
{
returnValue = F("Fohrenplatz");
break;
}
case 103915:
{
returnValue = F("Fohrenreuther Str.");
break;
}
case 103916:
{
returnValue = F("Fohrenstr.");
break;
}
case 103917:
{
returnValue = F("Fohrenstraat");
break;
}
case 103918:
{
returnValue = F("Fohrenweg");
break;
}
case 103919:
{
returnValue = F("Fohrenwiesen");
break;
}
case 103920:
{
returnValue = F("Fohrenwingert");
break;
}
case 103921:
{
returnValue = F("Fohrsfeld");
break;
}
case 103922:
{
returnValue = F("Fohrstr.");
break;
}
case 103923:
{
returnValue = F("Fohrtweg");
break;
}
case 103924:
{
returnValue = F("Fohrweg");
break;
}
case 103925:
{
returnValue = F("Fohwasenweg");
break;
}
case 103926:
{
returnValue = F("Foitjenweg");
break;
}
case 103927:
{
returnValue = F("Fokkenort");
break;
}
case 103928:
{
returnValue = F("Fokkerstr.");
break;
}
case 103929:
{
returnValue = F("Fokko-Pannenborg-Str.");
break;
}
case 103930:
{
returnValue = F("Fokko-Ukena-Str.");
break;
}
case 103931:
{
returnValue = F("Fokko-Weiland-Ring");
break;
}
case 103932:
{
returnValue = F("Foleniusstr.");
break;
}
case 103933:
{
returnValue = F("Folgaria Str.");
break;
}
case 103934:
{
returnValue = F("Folge");
break;
}
case 103935:
{
returnValue = F("Folgenhang");
break;
}
case 103936:
{
returnValue = F("Folgenstr.");
break;
}
case 103937:
{
returnValue = F("Folgentalweg");
break;
}
case 103938:
{
returnValue = F("Folgenweg");
break;
}
case 103939:
{
returnValue = F("Folgeweg");
break;
}
case 103940:
{
returnValue = F("Folke-Bernadotte-Str.");
break;
}
case 103941:
{
returnValue = F("Folkenbornstr.");
break;
}
case 103942:
{
returnValue = F("Folkenborntal");
break;
}
case 103943:
{
returnValue = F("Folkersdammweg");
break;
}
case 103944:
{
returnValue = F("Folkert-Potrykus-Str.");
break;
}
case 103945:
{
returnValue = F("Folkertshausen");
break;
}
case 103946:
{
returnValue = F("Folkertsstr.");
break;
}
case 103947:
{
returnValue = F("Folkertsweg");
break;
}
case 103948:
{
returnValue = F("Folkertweg");
break;
}
case 103949:
{
returnValue = F("Folkeskampweg");
break;
}
case 103950:
{
returnValue = F("Folkmar-Allena-Str.");
break;
}
case 103951:
{
returnValue = F("Folkmarweg");
break;
}
case 103952:
{
returnValue = F("Folleniusstr.");
break;
}
case 103953:
{
returnValue = F("Follmannstr.");
break;
}
case 103954:
{
returnValue = F("Follmerstr.");
break;
}
case 103955:
{
returnValue = F("Follmettstr.");
break;
}
case 103956:
{
returnValue = F("Folmhuser Str.");
break;
}
case 103957:
{
returnValue = F("Folradstr.");
break;
}
case 103958:
{
returnValue = F("Folstenhausener Str.");
break;
}
case 103959:
{
returnValue = F("Folsterweg");
break;
}
case 103960:
{
returnValue = F("Foltzring");
break;
}
case 103961:
{
returnValue = F("Folzbachstr.");
break;
}
case 103962:
{
returnValue = F("Folzerweg");
break;
}
case 103963:
{
returnValue = F("Folzstr.");
break;
}
case 103964:
{
returnValue = F("Fombachstr.");
break;
}
case 103965:
{
returnValue = F("Fomelweg");
break;
}
case 103966:
{
returnValue = F("Fonck-Str.");
break;
}
case 103967:
{
returnValue = F("Fonckstr.");
break;
}
case 103968:
{
returnValue = F("Fondelystr.");
break;
}
case 103969:
{
returnValue = F("Fondetter Str.");
break;
}
case 103970:
{
returnValue = F("Fongern");
break;
}
case 103971:
{
returnValue = F("Fontaine-les-Dijon-Str.");
break;
}
case 103972:
{
returnValue = F("Fontainebleau-Allee");
break;
}
case 103973:
{
returnValue = F("Fontainengraben");
break;
}
case 103974:
{
returnValue = F("Fontainestr.");
break;
}
case 103975:
{
returnValue = F("Fontane Park");
break;
}
case 103976:
{
returnValue = F("Fontane-Literaturpark");
break;
}
case 103977:
{
returnValue = F("Fontaneallee");
break;
}
case 103978:
{
returnValue = F("Fontaneeck");
break;
}
case 103979:
{
returnValue = F("Fontanehof");
break;
}
case 103980:
{
returnValue = F("Fontanehöfe");
break;
}
case 103981:
{
returnValue = F("Fontanellato Str.");
break;
}
case 103982:
{
returnValue = F("Fontanepark");
break;
}
case 103983:
{
returnValue = F("Fontaneplatz");
break;
}
case 103984:
{
returnValue = F("Fontanepromenade");
break;
}
case 103985:
{
returnValue = F("Fontanering");
break;
}
case 103986:
{
returnValue = F("Fontanesiedlung");
break;
}
case 103987:
{
returnValue = F("Fontanesistr.");
break;
}
case 103988:
{
returnValue = F("Fontanestr.");
break;
}
case 103989:
{
returnValue = F("Fontaneweg");
break;
}
case 103990:
{
returnValue = F("Fontheimstr.");
break;
}
case 103991:
{
returnValue = F("Fontis Loop");
break;
}
case 103992:
{
returnValue = F("Fontänestr.");
break;
}
case 103993:
{
returnValue = F("Fonyoder Str.");
break;
}
case 103994:
{
returnValue = F("Foodsharing");
break;
}
case 103995:
{
returnValue = F("Foogeds Wäi");
break;
}
case 103996:
{
returnValue = F("Fookwarf");
break;
}
case 103997:
{
returnValue = F("Foortweg");
break;
}
case 103998:
{
returnValue = F("Footlandsweg");
break;
}
case 103999:
{
returnValue = F("Forbach-Pfad");
break;
}
case 104000:
{
returnValue = F("Forbach-Weg");
break;
}
case 104001:
{
returnValue = F("Forbacher Str.");
break;
}
case 104002:
{
returnValue = F("Forbacher Weg");
break;
}
case 104003:
{
returnValue = F("Forbachstr.");
break;
}
case 104004:
{
returnValue = F("Forbenhofweg");
break;
}
case 104005:
{
returnValue = F("Forbentalweg");
break;
}
case 104006:
{
returnValue = F("Forberger Ring");
break;
}
case 104007:
{
returnValue = F("Forchenbergweg");
break;
}
case 104008:
{
returnValue = F("Forchenbusch");
break;
}
case 104009:
{
returnValue = F("Forchenhain");
break;
}
case 104010:
{
returnValue = F("Forchenhainweg");
break;
}
case 104011:
{
returnValue = F("Forchenhalde");
break;
}
case 104012:
{
returnValue = F("Forchenhauerweg");
break;
}
case 104013:
{
returnValue = F("Forchenhügelweg");
break;
}
case 104014:
{
returnValue = F("Forchenkopfstr.");
break;
}
case 104015:
{
returnValue = F("Forchenkopfweg");
break;
}
case 104016:
{
returnValue = F("Forchenrain");
break;
}
case 104017:
{
returnValue = F("Forchenrainstr.");
break;
}
case 104018:
{
returnValue = F("Forchenschlagweg");
break;
}
case 104019:
{
returnValue = F("Forchenseestr.");
break;
}
case 104020:
{
returnValue = F("Forchensteige");
break;
}
case 104021:
{
returnValue = F("Forchenstr.");
break;
}
case 104022:
{
returnValue = F("Forchenstückweg");
break;
}
case 104023:
{
returnValue = F("Forchenwaldstr.");
break;
}
case 104024:
{
returnValue = F("Forchenweg");
break;
}
case 104025:
{
returnValue = F("Forchenwiesenweg");
break;
}
case 104026:
{
returnValue = F("Forchhammerstr.");
break;
}
case 104027:
{
returnValue = F("Forchheimer Str.");
break;
}
case 104028:
{
returnValue = F("Forchheimer Weg");
break;
}
case 104029:
{
returnValue = F("Forchheimerstr.");
break;
}
case 104030:
{
returnValue = F("Forchtenberger Str.");
break;
}
case 104031:
{
returnValue = F("Forchtenegg");
break;
}
case 104032:
{
returnValue = F("Forckenbeckstr.");
break;
}
case 104033:
{
returnValue = F("Forckestr.");
break;
}
case 104034:
{
returnValue = F("Ford-Madison-Str.");
break;
}
case 104035:
{
returnValue = F("Fordeweg");
break;
}
case 104036:
{
returnValue = F("Forellenbachweg");
break;
}
case 104037:
{
returnValue = F("Forellenbuckelweg");
break;
}
case 104038:
{
returnValue = F("Forellenbächleweg");
break;
}
case 104039:
{
returnValue = F("Forellengang");
break;
}
case 104040:
{
returnValue = F("Forellengasse");
break;
}
case 104041:
{
returnValue = F("Forellengrund");
break;
}
case 104042:
{
returnValue = F("Forellengrundstr.");
break;
}
case 104043:
{
returnValue = F("Forellenhof");
break;
}
case 104044:
{
returnValue = F("Forellenhofweg");
break;
}
case 104045:
{
returnValue = F("Forellenkamp");
break;
}
case 104046:
{
returnValue = F("Forellenklause");
break;
}
case 104047:
{
returnValue = F("Forellenmühlenweg");
break;
}
case 104048:
{
returnValue = F("Forellenpark Quellental");
break;
}
case 104049:
{
returnValue = F("Forellenring");
break;
}
case 104050:
{
returnValue = F("Forellensteg");
break;
}
case 104051:
{
returnValue = F("Forellensteig");
break;
}
case 104052:
{
returnValue = F("Forellenstieg");
break;
}
case 104053:
{
returnValue = F("Forellenstr.");
break;
}
case 104054:
{
returnValue = F("Forellental");
break;
}
case 104055:
{
returnValue = F("Forellenteich");
break;
}
case 104056:
{
returnValue = F("Forellenweg");
break;
}
case 104057:
{
returnValue = F("Forellenwinkel");
break;
}
case 104058:
{
returnValue = F("Forellstr.");
break;
}
case 104059:
{
returnValue = F("Forensberger Str.");
break;
}
case 104060:
{
returnValue = F("Forest Street");
break;
}
case 104061:
{
returnValue = F("Forestastr.");
break;
}
case 104062:
{
returnValue = F("Forettle");
break;
}
case 104063:
{
returnValue = F("Forggenseestr.");
break;
}
case 104064:
{
returnValue = F("Forheimer Str.");
break;
}
case 104065:
{
returnValue = F("Forkatshof");
break;
}
case 104066:
{
returnValue = F("Forkatshofer Weg");
break;
}
case 104067:
{
returnValue = F("Forkendorfer Str.");
break;
}
case 104068:
{
returnValue = F("Forkenkamp");
break;
}
case 104069:
{
returnValue = F("Forkscheid");
break;
}
case 104070:
{
returnValue = F("Forkstr.");
break;
}
case 104071:
{
returnValue = F("Forlacher Str.");
break;
}
case 104072:
{
returnValue = F("Forlberg");
break;
}
case 104073:
{
returnValue = F("Forlenbrandweg");
break;
}
case 104074:
{
returnValue = F("Forlenbuckelweg");
break;
}
case 104075:
{
returnValue = F("Forlengartenweg");
break;
}
case 104076:
{
returnValue = F("Forlenhaldenweg");
break;
}
case 104077:
{
returnValue = F("Forlenhof");
break;
}
case 104078:
{
returnValue = F("Forlenhöfe");
break;
}
case 104079:
{
returnValue = F("Forlenschlagweg");
break;
}
case 104080:
{
returnValue = F("Forlenspitzweg");
break;
}
case 104081:
{
returnValue = F("Forlenstiegweg");
break;
}
case 104082:
{
returnValue = F("Forlenstr.");
break;
}
case 104083:
{
returnValue = F("Forlenwaldweg");
break;
}
case 104084:
{
returnValue = F("Forlenweg");
break;
}
case 104085:
{
returnValue = F("Forlerlenweg");
break;
}
case 104086:
{
returnValue = F("Forlesbrunnweg");
break;
}
case 104087:
{
returnValue = F("Forlewaldweg");
break;
}
case 104088:
{
returnValue = F("Forlinger Heide");
break;
}
case 104089:
{
returnValue = F("Forlitzer Str.");
break;
}
case 104090:
{
returnValue = F("Formalausbildungsplatz");
break;
}
case 104091:
{
returnValue = F("Formegey");
break;
}
case 104092:
{
returnValue = F("Formen für Europa");
break;
}
case 104093:
{
returnValue = F("Formerstr.");
break;
}
case 104094:
{
returnValue = F("Formerweg");
break;
}
case 104095:
{
returnValue = F("Formholz");
break;
}
case 104096:
{
returnValue = F("Formisch Weg");
break;
}
case 104097:
{
returnValue = F("Fornbacher Str.");
break;
}
case 104098:
{
returnValue = F("Fornbacher Weg");
break;
}
case 104099:
{
returnValue = F("Fornbachsleite");
break;
}
case 104100:
{
returnValue = F("Fornhorst");
break;
}
case 104101:
{
returnValue = F("Fornich");
break;
}
case 104102:
{
returnValue = F("Fornsbacher Str.");
break;
}
case 104103:
{
returnValue = F("Fornsbacher Weg");
break;
}
case 104104:
{
returnValue = F("Forrenstr.");
break;
}
case 104105:
{
returnValue = F("Forrest-E.-Peden-Ring");
break;
}
case 104106:
{
returnValue = F("Forsche Höhe");
break;
}
case 104107:
{
returnValue = F("Forschengereuther Platz");
break;
}
case 104108:
{
returnValue = F("Forschengereuther Str.");
break;
}
case 104109:
{
returnValue = F("Forscherpark");
break;
}
case 104110:
{
returnValue = F("Forscherpfad");
break;
}
case 104111:
{
returnValue = F("Forscherweg");
break;
}
case 104112:
{
returnValue = F("Forschnergaßl");
break;
}
case 104113:
{
returnValue = F("Forschungsallee");
break;
}
case 104114:
{
returnValue = F("Forshaus Amelith");
break;
}
case 104115:
{
returnValue = F("Forshaus Gelm");
break;
}
case 104116:
{
returnValue = F("Forst");
break;
}
case 104117:
{
returnValue = F("Forst 4");
break;
}
case 104118:
{
returnValue = F("Forst Joachimsthal");
break;
}
case 104119:
{
returnValue = F("Forst Zinna");
break;
}
case 104120:
{
returnValue = F("Forst-Arenberg-Str.");
break;
}
case 104121:
{
returnValue = F("Forst-Kasten-Str.");
break;
}
case 104122:
{
returnValue = F("Forst-Kasten-Weg");
break;
}
case 104123:
{
returnValue = F("Forstacker");
break;
}
case 104124:
{
returnValue = F("Forstackerstr.");
break;
}
case 104125:
{
returnValue = F("Forstackerweg");
break;
}
case 104126:
{
returnValue = F("Forstaibach");
break;
}
case 104127:
{
returnValue = F("Forstallee");
break;
}
case 104128:
{
returnValue = F("Forstamt");
break;
}
case 104129:
{
returnValue = F("Forstamtmann-Schweikert-Weg");
break;
}
case 104130:
{
returnValue = F("Forstamtsgarten");
break;
}
case 104131:
{
returnValue = F("Forstamtsgasse");
break;
}
case 104132:
{
returnValue = F("Forstamtsplatz");
break;
}
case 104133:
{
returnValue = F("Forstamtsstr.");
break;
}
case 104134:
{
returnValue = F("Forstamtstr.");
break;
}
case 104135:
{
returnValue = F("Forstamtsweg");
break;
}
case 104136:
{
returnValue = F("Forstamtweg");
break;
}
case 104137:
{
returnValue = F("Forstanger");
break;
}
case 104138:
{
returnValue = F("Forstarbeitersiedlung");
break;
}
case 104139:
{
returnValue = F("Forstaufseher-Karl-Piepho-Weg");
break;
}
case 104140:
{
returnValue = F("Forstbachseeweg");
break;
}
case 104141:
{
returnValue = F("Forstbachstr.");
break;
}
case 104142:
{
returnValue = F("Forstbachtal");
break;
}
case 104143:
{
returnValue = F("Forstbachtalstr.");
break;
}
case 104144:
{
returnValue = F("Forstbachweg");
break;
}
case 104145:
{
returnValue = F("Forstbaum");
break;
}
case 104146:
{
returnValue = F("Forstbaumschule");
break;
}
case 104147:
{
returnValue = F("Forstberg");
break;
}
case 104148:
{
returnValue = F("Forstbergring");
break;
}
case 104149:
{
returnValue = F("Forstbergstr.");
break;
}
case 104150:
{
returnValue = F("Forstbergweg");
break;
}
case 104151:
{
returnValue = F("Forstbotanischer Garten");
break;
}
case 104152:
{
returnValue = F("Forstbotanischer Garten Tharandt");
break;
}
case 104153:
{
returnValue = F("Forstbotanischer Wanderweg 2007");
break;
}
case 104154:
{
returnValue = F("Forstbrede");
break;
}
case 104155:
{
returnValue = F("Forstbreite");
break;
}
case 104156:
{
returnValue = F("Forstbrunnengrabenweg");
break;
}
case 104157:
{
returnValue = F("Forstdeichstr.");
break;
}
case 104158:
{
returnValue = F("Forstdirektor-Füllgrabe-Weg");
break;
}
case 104159:
{
returnValue = F("Forstdirektor-Greis-Weg");
break;
}
case 104160:
{
returnValue = F("Forsteck");
break;
}
case 104161:
{
returnValue = F("Forsteckstr.");
break;
}
case 104162:
{
returnValue = F("Forsteistr.");
break;
}
case 104163:
{
returnValue = F("Forsten");
break;
}
case 104164:
{
returnValue = F("Forstenburgstr.");
break;
}
case 104165:
{
returnValue = F("Forstenhausen");
break;
}
case 104166:
{
returnValue = F("Forstenhäuser");
break;
}
case 104167:
{
returnValue = F("Forstenhöhe");
break;
}
case 104168:
{
returnValue = F("Forstenrieder Allee");
break;
}
case 104169:
{
returnValue = F("Forstenrieder Str.");
break;
}
case 104170:
{
returnValue = F("Forstenrieder Weg");
break;
}
case 104171:
{
returnValue = F("Forstenrieder-Park-Str.");
break;
}
case 104172:
{
returnValue = F("Forster");
break;
}
case 104173:
{
returnValue = F("Forster Chaussee");
break;
}
case 104174:
{
returnValue = F("Forster Hauptstr.");
break;
}
case 104175:
{
returnValue = F("Forster Landstr.");
break;
}
case 104176:
{
returnValue = F("Forster Linde");
break;
}
case 104177:
{
returnValue = F("Forster Str.");
break;
}
case 104178:
{
returnValue = F("Forster Weg");
break;
}
case 104179:
{
returnValue = F("Forster-Str.");
break;
}
case 104180:
{
returnValue = F("Forsterbruchstr.");
break;
}
case 104181:
{
returnValue = F("Forstergasse");
break;
}
case 104182:
{
returnValue = F("Forsterheider Str.");
break;
}
case 104183:
{
returnValue = F("Forsterhütte");
break;
}
case 104184:
{
returnValue = F("Forsterlohweg");
break;
}
case 104185:
{
returnValue = F("Forsterner Str.");
break;
}
case 104186:
{
returnValue = F("Forsterring");
break;
}
case 104187:
{
returnValue = F("Forstersbühl");
break;
}
case 104188:
{
returnValue = F("Forsterstr.");
break;
}
case 104189:
{
returnValue = F("Forsterweg");
break;
}
case 104190:
{
returnValue = F("Forstfeld");
break;
}
case 104191:
{
returnValue = F("Forstfeldstr.");
break;
}
case 104192:
{
returnValue = F("Forstgarten");
break;
}
case 104193:
{
returnValue = F("Forstgarten Climbach");
break;
}
case 104194:
{
returnValue = F("Forstgarten-Linie");
break;
}
case 104195:
{
returnValue = F("Forstgartenschneise");
break;
}
case 104196:
{
returnValue = F("Forstgartenstr.");
break;
}
case 104197:
{
returnValue = F("Forstgartenweg");
break;
}
case 104198:
{
returnValue = F("Forstgasse");
break;
}
case 104199:
{
returnValue = F("Forstgehöft");
break;
}
case 104200:
{
returnValue = F("Forstgraben");
break;
}
case 104201:
{
returnValue = F("Forstgraben-Geräumt");
break;
}
case 104202:
{
returnValue = F("Forstgrenzweg");
break;
}
case 104203:
{
returnValue = F("Forstgrund");
break;
}
case 104204:
{
returnValue = F("Forstgrundweg");
break;
}
case 104205:
{
returnValue = F("Forstgut Einem");
break;
}
case 104206:
{
returnValue = F("Forstgäßle");
break;
}
case 104207:
{
returnValue = F("Forsthain");
break;
}
case 104208:
{
returnValue = F("Forsthaus");
break;
}
case 104209:
{
returnValue = F("Forsthaus Alt Lenzburg");
break;
}
case 104210:
{
returnValue = F("Forsthaus Beerenbusch");
break;
}
case 104211:
{
returnValue = F("Forsthaus Bischofstein");
break;
}
case 104212:
{
returnValue = F("Forsthaus Bovenberg");
break;
}
case 104213:
{
returnValue = F("Forsthaus Broich");
break;
}
case 104214:
{
returnValue = F("Forsthaus Buchheide");
break;
}
case 104215:
{
returnValue = F("Forsthaus Erlenbusch");
break;
}
case 104216:
{
returnValue = F("Forsthaus Gelm");
break;
}
case 104217:
{
returnValue = F("Forsthaus Geney");
break;
}
case 104218:
{
returnValue = F("Forsthaus Haarhof");
break;
}
case 104219:
{
returnValue = F("Forsthaus Hochau");
break;
}
case 104220:
{
returnValue = F("Forsthaus Hofswald");
break;
}
case 104221:
{
returnValue = F("Forsthaus Hohe Linde");
break;
}
case 104222:
{
returnValue = F("Forsthaus Hohenstein");
break;
}
case 104223:
{
returnValue = F("Forsthaus Homrighausen");
break;
}
case 104224:
{
returnValue = F("Forsthaus Jüngersdorf");
break;
}
case 104225:
{
returnValue = F("Forsthaus Kaiserteich");
break;
}
case 104226:
{
returnValue = F("Forsthaus Kastaven");
break;
}
case 104227:
{
returnValue = F("Forsthaus Katzental");
break;
}
case 104228:
{
returnValue = F("Forsthaus Klosterheide");
break;
}
case 104229:
{
returnValue = F("Forsthaus Krams");
break;
}
case 104230:
{
returnValue = F("Forsthaus Kreyern");
break;
}
case 104231:
{
returnValue = F("Forsthaus Köthen");
break;
}
case 104232:
{
returnValue = F("Forsthaus Laatz");
break;
}
case 104233:
{
returnValue = F("Forsthaus Lindhorst");
break;
}
case 104234:
{
returnValue = F("Forsthaus Mookenloch");
break;
}
case 104235:
{
returnValue = F("Forsthaus Märtensmühle");
break;
}
case 104236:
{
returnValue = F("Forsthaus Nienover");
break;
}
case 104237:
{
returnValue = F("Forsthaus Remstecken");
break;
}
case 104238:
{
returnValue = F("Forsthaus Ringofen");
break;
}
case 104239:
{
returnValue = F("Forsthaus Sattelbach");
break;
}
case 104240:
{
returnValue = F("Forsthaus Scharrl");
break;
}
case 104241:
{
returnValue = F("Forsthaus Spitzelbach");
break;
}
case 104242:
{
returnValue = F("Forsthaus Stavenow");
break;
}
case 104243:
{
returnValue = F("Forsthaus Stempelberg");
break;
}
case 104244:
{
returnValue = F("Forsthaus Stetternich");
break;
}
case 104245:
{
returnValue = F("Forsthaus Str.");
break;
}
case 104246:
{
returnValue = F("Forsthaus Stötebrück");
break;
}
case 104247:
{
returnValue = F("Forsthaus Thiergarten");
break;
}
case 104248:
{
returnValue = F("Forsthaus Thießen");
break;
}
case 104249:
{
returnValue = F("Forsthaus Tornow");
break;
}
case 104250:
{
returnValue = F("Forsthaus Trufterhain");
break;
}
case 104251:
{
returnValue = F("Forsthaus Wahrmbeck");
break;
}
case 104252:
{
returnValue = F("Forsthaus Weißer Hirsch");
break;
}
case 104253:
{
returnValue = F("Forsthaus Wenau");
break;
}
case 104254:
{
returnValue = F("Forsthaus Werder");
break;
}
case 104255:
{
returnValue = F("Forsthaus Weyern");
break;
}
case 104256:
{
returnValue = F("Forsthaus Wiera");
break;
}
case 104257:
{
returnValue = F("Forsthaus Wolfseck");
break;
}
case 104258:
{
returnValue = F("Forsthaus Wolfsgarten");
break;
}
case 104259:
{
returnValue = F("Forsthaus Wunder");
break;
}
case 104260:
{
returnValue = F("Forsthaus am See");
break;
}
case 104261:
{
returnValue = F("Forsthaus am Steiger");
break;
}
case 104262:
{
returnValue = F("Forsthaus zur Hohen Tanne");
break;
}
case 104263:
{
returnValue = F("Forsthaus Ölbach");
break;
}
case 104264:
{
returnValue = F("Forsthaus-Schneise");
break;
}
case 104265:
{
returnValue = F("Forsthaus-Weg (FH)");
break;
}
case 104266:
{
returnValue = F("Forsthaus-Weg (FH/F1)");
break;
}
case 104267:
{
returnValue = F("Forsthaus-Weg (FH/F2)");
break;
}
case 104268:
{
returnValue = F("Forsthausallee");
break;
}
case 104269:
{
returnValue = F("Forsthausbrücke");
break;
}
case 104270:
{
returnValue = F("Forsthausenstr.");
break;
}
case 104271:
{
returnValue = F("Forsthausgasse");
break;
}
case 104272:
{
returnValue = F("Forsthausschneise");
break;
}
case 104273:
{
returnValue = F("Forsthaussteg");
break;
}
case 104274:
{
returnValue = F("Forsthausstr.");
break;
}
case 104275:
{
returnValue = F("Forsthausweg");
break;
}
case 104276:
{
returnValue = F("Forsthauswinkel");
break;
}
case 104277:
{
returnValue = F("Forstheider Str.");
break;
}
case 104278:
{
returnValue = F("Forsthof");
break;
}
case 104279:
{
returnValue = F("Forsthof Hagen");
break;
}
case 104280:
{
returnValue = F("Forsthof Niendorf");
break;
}
case 104281:
{
returnValue = F("Forsthofer Str.");
break;
}
case 104282:
{
returnValue = F("Forsthofer Weg");
break;
}
case 104283:
{
returnValue = F("Forsthofstr.");
break;
}
case 104284:
{
returnValue = F("Forsthofweg");
break;
}
case 104285:
{
returnValue = F("Forsthube");
break;
}
case 104286:
{
returnValue = F("Forsthubenweg");
break;
}
case 104287:
{
returnValue = F("Forsthut");
break;
}
case 104288:
{
returnValue = F("Forsthäldelesweg");
break;
}
case 104289:
{
returnValue = F("Forsthäuser");
break;
}
case 104290:
{
returnValue = F("Forsthövel-Dreischkenweg");
break;
}
case 104291:
{
returnValue = F("Forsthövel-Heuweg");
break;
}
case 104292:
{
returnValue = F("Forsthövel-Immelbrink");
break;
}
case 104293:
{
returnValue = F("Forsthövel-Merschstr.");
break;
}
case 104294:
{
returnValue = F("Forsthövel-Münsterstr.");
break;
}
case 104295:
{
returnValue = F("Forsting");
break;
}
case 104296:
{
returnValue = F("Forstinger Str.");
break;
}
case 104297:
{
returnValue = F("Forstinninger Str.");
break;
}
case 104298:
{
returnValue = F("Forstkamp");
break;
}
case 104299:
{
returnValue = F("Forstkampweg");
break;
}
case 104300:
{
returnValue = F("Forstkastenstr.");
break;
}
case 104301:
{
returnValue = F("Forstkaten");
break;
}
case 104302:
{
returnValue = F("Forstkoppel");
break;
}
case 104303:
{
returnValue = F("Forstlahmer Str.");
break;
}
case 104304:
{
returnValue = F("Forstlandallee");
break;
}
case 104305:
{
returnValue = F("Forstlandring");
break;
}
case 104306:
{
returnValue = F("Forstlandstr.");
break;
}
case 104307:
{
returnValue = F("Forstlehrpfad");
break;
}
case 104308:
{
returnValue = F("Forstleitenweg");
break;
}
case 104309:
{
returnValue = F("Forstleithen");
break;
}
case 104310:
{
returnValue = F("Forstmahd");
break;
}
case 104311:
{
returnValue = F("Forstmaierstr.");
break;
}
case 104312:
{
returnValue = F("Forstmannweg");
break;
}
case 104313:
{
returnValue = F("Forstmatt");
break;
}
case 104314:
{
returnValue = F("Forstmeierstr.");
break;
}
case 104315:
{
returnValue = F("Forstmeister Mattke Schneise");
break;
}
case 104316:
{
returnValue = F("Forstmeister Schneise");
break;
}
case 104317:
{
returnValue = F("Forstmeister Sinz Weg");
break;
}
case 104318:
{
returnValue = F("Forstmeister-Brücke");
break;
}
case 104319:
{
returnValue = F("Forstmeister-Gräff-Str.");
break;
}
case 104320:
{
returnValue = F("Forstmeister-Löffelmann-Weg");
break;
}
case 104321:
{
returnValue = F("Forstmeister-Mentz-Weg");
break;
}
case 104322:
{
returnValue = F("Forstmeister-Müller-Weg");
break;
}
case 104323:
{
returnValue = F("Forstmeister-Prinz-Weg");
break;
}
case 104324:
{
returnValue = F("Forstmeister-Schmidt-Weg");
break;
}
case 104325:
{
returnValue = F("Forstmeister-Sietz-Weg");
break;
}
case 104326:
{
returnValue = F("Forstmeister-Vay-Str.");
break;
}
case 104327:
{
returnValue = F("Forstmeisterschneise");
break;
}
case 104328:
{
returnValue = F("Forstmeistersteig");
break;
}
case 104329:
{
returnValue = F("Forstmeisterstieg");
break;
}
case 104330:
{
returnValue = F("Forstmeisterstr.");
break;
}
case 104331:
{
returnValue = F("Forstmeisterweg");
break;
}
case 104332:
{
returnValue = F("Forstmühle");
break;
}
case 104333:
{
returnValue = F("Forstmühlenweg");
break;
}
case 104334:
{
returnValue = F("Forstnerstr.");
break;
}
case 104335:
{
returnValue = F("Forstnerweg");
break;
}
case 104336:
{
returnValue = F("Forstpark");
break;
}
case 104337:
{
returnValue = F("Forstpfad");
break;
}
case 104338:
{
returnValue = F("Forstplanie");
break;
}
case 104339:
{
returnValue = F("Forstplatz");
break;
}
case 104340:
{
returnValue = F("Forstpoint");
break;
}
case 104341:
{
returnValue = F("Forstprielstr.");
break;
}
case 104342:
{
returnValue = F("Forstr.");
break;
}
case 104343:
{
returnValue = F("Forstrat Kayestr.");
break;
}
case 104344:
{
returnValue = F("Forstrat Louis-Weg");
break;
}
case 104345:
{
returnValue = F("Forstrat-Jäger-Weg");
break;
}
case 104346:
{
returnValue = F("Forstring");
break;
}
case 104347:
{
returnValue = F("Forstschneise");
break;
}
case 104348:
{
returnValue = F("Forstschule");
break;
}
case 104349:
{
returnValue = F("Forstschützenweg");
break;
}
case 104350:
{
returnValue = F("Forstseeon");
break;
}
case 104351:
{
returnValue = F("Forstseeoner Str.");
break;
}
case 104352:
{
returnValue = F("Forstsiedlung");
break;
}
case 104353:
{
returnValue = F("Forstsiedlungsstr.");
break;
}
case 104354:
{
returnValue = F("Forststeig");
break;
}
case 104355:
{
returnValue = F("Forststeige");
break;
}
case 104356:
{
returnValue = F("Forststiege");
break;
}
case 104357:
{
returnValue = F("Forststr.");
break;
}
case 104358:
{
returnValue = F("Forststräßle");
break;
}
case 104359:
{
returnValue = F("Forstteichweg");
break;
}
case 104360:
{
returnValue = F("Forstum");
break;
}
case 104361:
{
returnValue = F("Forstumer Str.");
break;
}
case 104362:
{
returnValue = F("Forstvereinsweg");
break;
}
case 104363:
{
returnValue = F("Forstverwaltung");
break;
}
case 104364:
{
returnValue = F("Forstwaldstr.");
break;
}
case 104365:
{
returnValue = F("Forstwaldweg");
break;
}
case 104366:
{
returnValue = F("Forstwart-Schwalbe-Weg");
break;
}
case 104367:
{
returnValue = F("Forstwartweg");
break;
}
case 104368:
{
returnValue = F("Forstwasenstr.");
break;
}
case 104369:
{
returnValue = F("Forstweg");
break;
}
case 104370:
{
returnValue = F("Forstweg (nicht öffentlich)");
break;
}
case 104371:
{
returnValue = F("Forstweg Rottachalpe");
break;
}
case 104372:
{
returnValue = F("Forstweg Schachen");
break;
}
case 104373:
{
returnValue = F("Forstweg nach Hessen I");
break;
}
case 104374:
{
returnValue = F("Forstweg nach Hessen II");
break;
}
case 104375:
{
returnValue = F("Forstweg,Waldweg");
break;
}
case 104376:
{
returnValue = F("Forstwegle");
break;
}
case 104377:
{
returnValue = F("Forstweide");
break;
}
case 104378:
{
returnValue = F("Forstwiese");
break;
}
case 104379:
{
returnValue = F("Forstwiesen");
break;
}
case 104380:
{
returnValue = F("Forstwiesen-Schneise");
break;
}
case 104381:
{
returnValue = F("Forstwiesenstr.");
break;
}
case 104382:
{
returnValue = F("Forstwiesenweg");
break;
}
case 104383:
{
returnValue = F("Forstwirtschaftsplatz");
break;
}
case 104384:
{
returnValue = F("Forstwolfersdorf");
break;
}
case 104385:
{
returnValue = F("Forstäcker");
break;
}
case 104386:
{
returnValue = F("Forstäckerweg");
break;
}
case 104387:
{
returnValue = F("Forsythienhof");
break;
}
case 104388:
{
returnValue = F("Forsythienweg");
break;
}
case 104389:
{
returnValue = F("Fort Luise");
break;
}
case 104390:
{
returnValue = F("Fort Peyerl");
break;
}
case 104391:
{
returnValue = F("Fort Rauch");
break;
}
case 104392:
{
returnValue = F("Fort XII");
break;
}
case 104393:
{
returnValue = F("Fort-Bose-Str.");
break;
}
case 104394:
{
returnValue = F("Fort-Kirchbach-Str.");
break;
}
case 104395:
{
returnValue = F("Fort-Skelly-Str.");
break;
}
case 104396:
{
returnValue = F("Fortbergstr.");
break;
}
case 104397:
{
returnValue = F("Fortbuchenweg");
break;
}
case 104398:
{
returnValue = F("Forte");
break;
}
case 104399:
{
returnValue = F("Fortelgasse");
break;
}
case 104400:
{
returnValue = F("Fortenbacherweg");
break;
}
case 104401:
{
returnValue = F("Fortenbachweg");
break;
}
case 104402:
{
returnValue = F("Fortenzipfelweg");
break;
}
case 104403:
{
returnValue = F("Forth");
break;
}
case 104404:
{
returnValue = F("Forth Street");
break;
}
case 104405:
{
returnValue = F("Forth Trift");
break;
}
case 104406:
{
returnValue = F("Forthaus");
break;
}
case 104407:
{
returnValue = F("Forther Hauptstr.");
break;
}
case 104408:
{
returnValue = F("Forther Str.");
break;
}
case 104409:
{
returnValue = F("Forthmoorweg");
break;
}
case 104410:
{
returnValue = F("Forthofstr.");
break;
}
case 104411:
{
returnValue = F("Forthweg");
break;
}
case 104412:
{
returnValue = F("Fortkamp");
break;
}
case 104413:
{
returnValue = F("Fortlagestr.");
break;
}
case 104414:
{
returnValue = F("Fortlweg");
break;
}
case 104415:
{
returnValue = F("Fortmannweg");
break;
}
case 104416:
{
returnValue = F("Fortmühlstr.");
break;
}
case 104417:
{
returnValue = F("Fortschau");
break;
}
case 104418:
{
returnValue = F("Fortschrittweg");
break;
}
case 104419:
{
returnValue = F("Fortsetzungstr.");
break;
}
case 104420:
{
returnValue = F("Fortstr.");
break;
}
case 104421:
{
returnValue = F("Fortsweg");
break;
}
case 104422:
{
returnValue = F("Fortuna");
break;
}
case 104423:
{
returnValue = F("Fortuna-Nord-Str.");
break;
}
case 104424:
{
returnValue = F("Fortuna-Platz");
break;
}
case 104425:
{
returnValue = F("Fortunaplatz");
break;
}
case 104426:
{
returnValue = F("Fortunastr.");
break;
}
case 104427:
{
returnValue = F("Fortunatstr.");
break;
}
case 104428:
{
returnValue = F("Fortunatusstr.");
break;
}
case 104429:
{
returnValue = F("Fortunaweg");
break;
}
case 104430:
{
returnValue = F("Fortweg");
break;
}
case 104431:
{
returnValue = F("Fortwiesen");
break;
}
case 104432:
{
returnValue = F("Forum");
break;
}
case 104433:
{
returnValue = F("Forum Castrop Rauxel");
break;
}
case 104434:
{
returnValue = F("Forum Wissenschaft | Bibliothek | Musik");
break;
}
case 104435:
{
returnValue = F("Forum am Sternplatz");
break;
}
case 104436:
{
returnValue = F("Forum des Handwerks");
break;
}
case 104437:
{
returnValue = F("Forumsplatz");
break;
}
case 104438:
{
returnValue = F("Forumstr.");
break;
}
case 104439:
{
returnValue = F("Forweilerstr.");
break;
}
case 104440:
{
returnValue = F("Forßmannstr.");
break;
}
case 104441:
{
returnValue = F("Foschenrodaer Str.");
break;
}
case 104442:
{
returnValue = F("Foschenrodaer Weg");
break;
}
case 104443:
{
returnValue = F("Foshöller");
break;
}
case 104444:
{
returnValue = F("Foss Sieck");
break;
}
case 104445:
{
returnValue = F("Fossastr.");
break;
}
case 104446:
{
returnValue = F("Fossato-di-Vico-Weg");
break;
}
case 104447:
{
returnValue = F("Fossbrink");
break;
}
case 104448:
{
returnValue = F("Fosse Bredde");
break;
}
case 104449:
{
returnValue = F("Fosse Grund");
break;
}
case 104450:
{
returnValue = F("Fosseckenweg");
break;
}
case 104451:
{
returnValue = F("Fosshöwwel");
break;
}
case 104452:
{
returnValue = F("Fossilienweg");
break;
}
case 104453:
{
returnValue = F("Fossillenweg");
break;
}
case 104454:
{
returnValue = F("Fosskesfeld");
break;
}
case 104455:
{
returnValue = F("Fosséstr.");
break;
}
case 104456:
{
returnValue = F("Foubitrail 1");
break;
}
case 104457:
{
returnValue = F("Foucarstr.");
break;
}
case 104458:
{
returnValue = F("Fouchskoppel");
break;
}
case 104459:
{
returnValue = F("Fouesnantplatz");
break;
}
case 104460:
{
returnValue = F("Fougerollesstr.");
break;
}
case 104461:
{
returnValue = F("Fougèresstr.");
break;
}
case 104462:
{
returnValue = F("Foulerweg");
break;
}
case 104463:
{
returnValue = F("Fouquettin");
break;
}
case 104464:
{
returnValue = F("Fouqué-Platz");
break;
}
case 104465:
{
returnValue = F("Fouquéstr.");
break;
}
case 104466:
{
returnValue = F("Fourniermühlenweg");
break;
}
case 104467:
{
returnValue = F("Fourtgasse");
break;
}
case 104468:
{
returnValue = F("Fourth Avenue");
break;
}
case 104469:
{
returnValue = F("Fourthweg");
break;
}
case 104470:
{
returnValue = F("Fourtstr.");
break;
}
case 104471:
{
returnValue = F("Foussais Str.");
break;
}
case 104472:
{
returnValue = F("Foveauxweg");
break;
}
case 104473:
{
returnValue = F("Foßbecke");
break;
}
case 104474:
{
returnValue = F("Foßecke");
break;
}
case 104475:
{
returnValue = F("Foßfeld");
break;
}
case 104476:
{
returnValue = F("Foßhöpener Weg");
break;
}
case 104477:
{
returnValue = F("Foßstr.");
break;
}
case 104478:
{
returnValue = F("Foßtruben");
break;
}
case 104479:
{
returnValue = F("Fr. Naumann-Str.");
break;
}
case 104480:
{
returnValue = F("Fr.-Christoph-Müller-Str.");
break;
}
case 104481:
{
returnValue = F("Fr.-Hoffmeister-Weg");
break;
}
case 104482:
{
returnValue = F("Fr.-Ludwig-Jahn-Str.");
break;
}
case 104483:
{
returnValue = F("Fr.-v.-Bodelschwingh-Str.");
break;
}
case 104484:
{
returnValue = F("Fr.-von-Füll-Str.");
break;
}
case 104485:
{
returnValue = F("Fraaschweg");
break;
}
case 104486:
{
returnValue = F("Fraasenweg");
break;
}
case 104487:
{
returnValue = F("Frabertshamer Str.");
break;
}
case 104488:
{
returnValue = F("Frabriciusstr.");
break;
}
case 104489:
{
returnValue = F("Frachtstr.");
break;
}
case 104490:
{
returnValue = F("Frachtweg");
break;
}
case 104491:
{
returnValue = F("Frackeler Str.");
break;
}
case 104492:
{
returnValue = F("Frackenpohler Str.");
break;
}
case 104493:
{
returnValue = F("Frackenstieg");
break;
}
case 104494:
{
returnValue = F("Frackmannsfeld");
break;
}
case 104495:
{
returnValue = F("Fradlberg");
break;
}
case 104496:
{
returnValue = F("Fraenkelstr.");
break;
}
case 104497:
{
returnValue = F("Fragenhütte");
break;
}
case 104498:
{
returnValue = F("Fragnerstr.");
break;
}
case 104499:
{
returnValue = F("Frahelser Str.");
break;
}
case 104500:
{
returnValue = F("Frahlings Hof");
break;
}
case 104501:
{
returnValue = F("Frahmredder");
break;
}
case 104502:
{
returnValue = F("Frahmsallee");
break;
}
case 104503:
{
returnValue = F("Frahmsort");
break;
}
case 104504:
{
returnValue = F("Frahmstr.");
break;
}
case 104505:
{
returnValue = F("Fraitsch");
break;
}
case 104506:
{
returnValue = F("Framersheimer Str.");
break;
}
case 104507:
{
returnValue = F("Framersheimer Weg");
break;
}
case 104508:
{
returnValue = F("Frammersbacher Weg");
break;
}
case 104509:
{
returnValue = F("Francheviller Platz");
break;
}
case 104510:
{
returnValue = F("Francisco-de-Goya-Str.");
break;
}
case 104511:
{
returnValue = F("Franciscus-Nagler-Str.");
break;
}
case 104512:
{
returnValue = F("Franck-Steg");
break;
}
case 104513:
{
returnValue = F("Franck-Zügel-Weg");
break;
}
case 104514:
{
returnValue = F("Franckenbergallee");
break;
}
case 104515:
{
returnValue = F("Franckensteinstr.");
break;
}
case 104516:
{
returnValue = F("Franckestr.");
break;
}
case 104517:
{
returnValue = F("Franckeweg");
break;
}
case 104518:
{
returnValue = F("Franckstr.");
break;
}
case 104519:
{
returnValue = F("Francois-Gärten");
break;
}
case 104520:
{
returnValue = F("Francois-Mitterrand-Allee");
break;
}
case 104521:
{
returnValue = F("Francoisallee");
break;
}
case 104522:
{
returnValue = F("Francoisstr.");
break;
}
case 104523:
{
returnValue = F("Franconvillestr.");
break;
}
case 104524:
{
returnValue = F("Frandergasse");
break;
}
case 104525:
{
returnValue = F("Franekerweg");
break;
}
case 104526:
{
returnValue = F("Frangenberg");
break;
}
case 104527:
{
returnValue = F("Franhofer Ring");
break;
}
case 104528:
{
returnValue = F("Frank-Behrens-Str.");
break;
}
case 104529:
{
returnValue = F("Frank-Buchman-Weg");
break;
}
case 104530:
{
returnValue = F("Frank-Duveneck-Str.");
break;
}
case 104531:
{
returnValue = F("Frank-Kirchhof-Str.");
break;
}
case 104532:
{
returnValue = F("Frank-Luck-Str.");
break;
}
case 104533:
{
returnValue = F("Frank-Ritter-Str.");
break;
}
case 104534:
{
returnValue = F("Frank-Sinatra-Str.");
break;
}
case 104535:
{
returnValue = F("Frank-Thiess-Weg");
break;
}
case 104536:
{
returnValue = F("Frank-Tschinkel-Str.");
break;
}
case 104537:
{
returnValue = F("Frank-Ullrich-Weg");
break;
}
case 104538:
{
returnValue = F("Frank-Wedekind-Str.");
break;
}
case 104539:
{
returnValue = F("Frank-Weg");
break;
}
case 104540:
{
returnValue = F("Frank-Zügel-Weg");
break;
}
case 104541:
{
returnValue = F("Frank-v.-Römer-Weg");
break;
}
case 104542:
{
returnValue = F("Frank-von-Müller-Str.");
break;
}
case 104543:
{
returnValue = F("Frankampstr.");
break;
}
case 104544:
{
returnValue = F("Franke-und-Heidecke-Str.");
break;
}
case 104545:
{
returnValue = F("Frankefelde");
break;
}
case 104546:
{
returnValue = F("Frankelbacher Weg");
break;
}
case 104547:
{
returnValue = F("Frankelsweg");
break;
}
case 104548:
{
returnValue = F("Franken");
break;
}
case 104549:
{
returnValue = F("Frankenacker");
break;
}
case 104550:
{
returnValue = F("Frankenaer Dorfstr.");
break;
}
case 104551:
{
returnValue = F("Frankenaer Hauptstr.");
break;
}
case 104552:
{
returnValue = F("Frankenaer Weg");
break;
}
case 104553:
{
returnValue = F("Frankenallee");
break;
}
case 104554:
{
returnValue = F("Frankenau");
break;
}
case 104555:
{
returnValue = F("Frankenauer Str.");
break;
}
case 104556:
{
returnValue = F("Frankenbach");
break;
}
case 104557:
{
returnValue = F("Frankenbach-Weg");
break;
}
case 104558:
{
returnValue = F("Frankenbacher Hof");
break;
}
case 104559:
{
returnValue = F("Frankenbacher Str.");
break;
}
case 104560:
{
returnValue = F("Frankenbachstr.");
break;
}
case 104561:
{
returnValue = F("Frankenbachweg");
break;
}
case 104562:
{
returnValue = F("Frankenberg");
break;
}
case 104563:
{
returnValue = F("Frankenberg/Eder-Str.");
break;
}
case 104564:
{
returnValue = F("Frankenberger Landstr.");
break;
}
case 104565:
{
returnValue = F("Frankenberger Park");
break;
}
case 104566:
{
returnValue = F("Frankenberger Plan");
break;
}
case 104567:
{
returnValue = F("Frankenberger Str.");
break;
}
case 104568:
{
returnValue = F("Frankenberger Sträßchen");
break;
}
case 104569:
{
returnValue = F("Frankenberger Weg");
break;
}
case 104570:
{
returnValue = F("Frankenbergstr.");
break;
}
case 104571:
{
returnValue = F("Frankenbergweg");
break;
}
case 104572:
{
returnValue = F("Frankenblick");
break;
}
case 104573:
{
returnValue = F("Frankenbogen");
break;
}
case 104574:
{
returnValue = F("Frankenborn");
break;
}
case 104575:
{
returnValue = F("Frankenbosteler Str.");
break;
}
case 104576:
{
returnValue = F("Frankenbosteler Weg");
break;
}
case 104577:
{
returnValue = F("Frankenbrücke");
break;
}
case 104578:
{
returnValue = F("Frankenbuchstr.");
break;
}
case 104579:
{
returnValue = F("Frankenburg");
break;
}
case 104580:
{
returnValue = F("Frankenburgstr.");
break;
}
case 104581:
{
returnValue = F("Frankenbühnd");
break;
}
case 104582:
{
returnValue = F("Frankendamm");
break;
}
case 104583:
{
returnValue = F("Frankendomstr.");
break;
}
case 104584:
{
returnValue = F("Frankendorf");
break;
}
case 104585:
{
returnValue = F("Frankendorfer Steig");
break;
}
case 104586:
{
returnValue = F("Frankendorfer Str.");
break;
}
case 104587:
{
returnValue = F("Frankeneich");
break;
}
case 104588:
{
returnValue = F("Frankeneichstr.");
break;
}
case 104589:
{
returnValue = F("Frankener Str.");
break;
}
case 104590:
{
returnValue = F("Frankener Weg");
break;
}
case 104591:
{
returnValue = F("Frankenfeld");
break;
}
case 104592:
{
returnValue = F("Frankenfelder Chaussee");
break;
}
case 104593:
{
returnValue = F("Frankenfelder Str.");
break;
}
case 104594:
{
returnValue = F("Frankenfelder Weg");
break;
}
case 104595:
{
returnValue = F("Frankenfeldstr.");
break;
}
case 104596:
{
returnValue = F("Frankenfelsstr.");
break;
}
case 104597:
{
returnValue = F("Frankenforster Str.");
break;
}
case 104598:
{
returnValue = F("Frankenforster Weg");
break;
}
case 104599:
{
returnValue = F("Frankenfurt");
break;
}
case 104600:
{
returnValue = F("Frankenförder Str.");
break;
}
case 104601:
{
returnValue = F("Frankengasse");
break;
}
case 104602:
{
returnValue = F("Frankengraben");
break;
}
case 104603:
{
returnValue = F("Frankengrabenweg");
break;
}
case 104604:
{
returnValue = F("Frankengrund");
break;
}
case 104605:
{
returnValue = F("Frankengutstr.");
break;
}
case 104606:
{
returnValue = F("Frankengymnasiummosaik im römischen Stil");
break;
}
case 104607:
{
returnValue = F("Frankenhaager Str.");
break;
}
case 104608:
{
returnValue = F("Frankenhagen");
break;
}
case 104609:
{
returnValue = F("Frankenhain");
break;
}
case 104610:
{
returnValue = F("Frankenhainer Gartenstr.");
break;
}
case 104611:
{
returnValue = F("Frankenhainer Str.");
break;
}
case 104612:
{
returnValue = F("Frankenhainer Weg");
break;
}
case 104613:
{
returnValue = F("Frankenhardt Radweg 1");
break;
}
case 104614:
{
returnValue = F("Frankenhausener Str.");
break;
}
case 104615:
{
returnValue = F("Frankenheimer Str.");
break;
}
case 104616:
{
returnValue = F("Frankenheimer Weg");
break;
}
case 104617:
{
returnValue = F("Frankenhilfer Str.");
break;
}
case 104618:
{
returnValue = F("Frankenhof");
break;
}
case 104619:
{
returnValue = F("Frankenhofener Str.");
break;
}
case 104620:
{
returnValue = F("Frankenhofer Weg");
break;
}
case 104621:
{
returnValue = F("Frankenhofpassage");
break;
}
case 104622:
{
returnValue = F("Frankenholzer Str.");
break;
}
case 104623:
{
returnValue = F("Frankenholzweg");
break;
}
case 104624:
{
returnValue = F("Frankenhorst");
break;
}
case 104625:
{
returnValue = F("Frankenhorster Damm");
break;
}
case 104626:
{
returnValue = F("Frankenhäuser Allee");
break;
}
case 104627:
{
returnValue = F("Frankenhäuser Str.");
break;
}
case 104628:
{
returnValue = F("Frankenhäuser Weg");
break;
}
case 104629:
{
returnValue = F("Frankenhöhe");
break;
}
case 104630:
{
returnValue = F("Frankenhöhestr.");
break;
}
case 104631:
{
returnValue = F("Frankeninsel");
break;
}
case 104632:
{
returnValue = F("Frankenkamp");
break;
}
case 104633:
{
returnValue = F("Frankenkrogweg");
break;
}
case 104634:
{
returnValue = F("Frankenland");
break;
}
case 104635:
{
returnValue = F("Frankenlandstr.");
break;
}
case 104636:
{
returnValue = F("Frankenleite");
break;
}
case 104637:
{
returnValue = F("Frankenluster Str.");
break;
}
case 104638:
{
returnValue = F("Frankenmaas");
break;
}
case 104639:
{
returnValue = F("Frankenmatt");
break;
}
case 104640:
{
returnValue = F("Frankenmoosen");
break;
}
case 104641:
{
returnValue = F("Frankenmuther Str.");
break;
}
case 104642:
{
returnValue = F("Frankenmühle");
break;
}
case 104643:
{
returnValue = F("Frankenorthstr.");
break;
}
case 104644:
{
returnValue = F("Frankenpfad");
break;
}
case 104645:
{
returnValue = F("Frankenplatz");
break;
}
case 104646:
{
returnValue = F("Frankenreute");
break;
}
case 104647:
{
returnValue = F("Frankenreuth");
break;
}
case 104648:
{
returnValue = F("Frankenreuther Str.");
break;
}
case 104649:
{
returnValue = F("Frankenrieder Str.");
break;
}
case 104650:
{
returnValue = F("Frankenring");
break;
}
case 104651:
{
returnValue = F("Frankenrodaer Str.");
break;
}
case 104652:
{
returnValue = F("Frankens Ecke");
break;
}
case 104653:
{
returnValue = F("Frankenseite");
break;
}
case 104654:
{
returnValue = F("Frankensteg");
break;
}
case 104655:
{
returnValue = F("Frankenstein Gasse");
break;
}
case 104656:
{
returnValue = F("Frankensteiner Gasse");
break;
}
case 104657:
{
returnValue = F("Frankensteiner Schneise");
break;
}
case 104658:
{
returnValue = F("Frankensteiner Str.");
break;
}
case 104659:
{
returnValue = F("Frankensteiner Weg");
break;
}
case 104660:
{
returnValue = F("Frankensteiner Äcker Schneise");
break;
}
case 104661:
{
returnValue = F("Frankensteiner-Schneise");
break;
}
case 104662:
{
returnValue = F("Frankensteinstr.");
break;
}
case 104663:
{
returnValue = F("Frankensteinweg");
break;
}
case 104664:
{
returnValue = F("Frankenstr.");
break;
}
case 104665:
{
returnValue = F("Frankental");
break;
}
case 104666:
{
returnValue = F("Frankentalbrücke");
break;
}
case 104667:
{
returnValue = F("Frankenthal");
break;
}
case 104668:
{
returnValue = F("Frankenthaler Str.");
break;
}
case 104669:
{
returnValue = F("Frankenthaler Weg");
break;
}
case 104670:
{
returnValue = F("Frankenthalstr.");
break;
}
case 104671:
{
returnValue = F("Frankentobelstr.");
break;
}
case 104672:
{
returnValue = F("Frankentobelweg");
break;
}
case 104673:
{
returnValue = F("Frankentroster Str.");
break;
}
case 104674:
{
returnValue = F("Frankenufer");
break;
}
case 104675:
{
returnValue = F("Frankenwaldallee");
break;
}
case 104676:
{
returnValue = F("Frankenwaldsteig");
break;
}
case 104677:
{
returnValue = F("Frankenwaldstr.");
break;
}
case 104678:
{
returnValue = F("Frankenwaldweg");
break;
}
case 104679:
{
returnValue = F("Frankenwall");
break;
}
case 104680:
{
returnValue = F("Frankenweg");
break;
}
case 104681:
{
returnValue = F("Frankenweiler");
break;
}
case 104682:
{
returnValue = F("Frankenwinheimer Str.");
break;
}
case 104683:
{
returnValue = F("Frankenäcker");
break;
}
case 104684:
{
returnValue = F("Frankenäckerweg");
break;
}
case 104685:
{
returnValue = F("Frankeplatz");
break;
}
case 104686:
{
returnValue = F("Frankestr.");
break;
}
case 104687:
{
returnValue = F("Frankeweg");
break;
}
case 104688:
{
returnValue = F("Frankfurt");
break;
}
case 104689:
{
returnValue = F("Frankfurt-Leipziger-Str.");
break;
}
case 104690:
{
returnValue = F("Frankfurt-Oder-Str.");
break;
}
case 104691:
{
returnValue = F("Frankfurter Allee");
break;
}
case 104692:
{
returnValue = F("Frankfurter Chaussee");
break;
}
case 104693:
{
returnValue = F("Frankfurter Damm");
break;
}
case 104694:
{
returnValue = F("Frankfurter Heerstr.");
break;
}
case 104695:
{
returnValue = F("Frankfurter Hohl");
break;
}
case 104696:
{
returnValue = F("Frankfurter Landstr.");
break;
}
case 104697:
{
returnValue = F("Frankfurter Platz");
break;
}
case 104698:
{
returnValue = F("Frankfurter Schneise");
break;
}
case 104699:
{
returnValue = F("Frankfurter Str.");
break;
}
case 104700:
{
returnValue = F("Frankfurter Straßé");
break;
}
case 104701:
{
returnValue = F("Frankfurter Weg");
break;
}
case 104702:
{
returnValue = F("Franklbachstr.");
break;
}
case 104703:
{
returnValue = F("Frankldorfer Str.");
break;
}
case 104704:
{
returnValue = F("Franklebene Str.");
break;
}
case 104705:
{
returnValue = F("Franklebener Str.");
break;
}
case 104706:
{
returnValue = F("Franklenweg");
break;
}
case 104707:
{
returnValue = F("Franklin Field");
break;
}
case 104708:
{
returnValue = F("Franklin-D.-Roosevelt-Str.");
break;
}
case 104709:
{
returnValue = F("Franklinplatz");
break;
}
case 104710:
{
returnValue = F("Franklinstr.");
break;
}
case 104711:
{
returnValue = F("Frankonenweg");
break;
}
case 104712:
{
returnValue = F("Frankostr.");
break;
}
case 104713:
{
returnValue = F("Frankreicher Str.");
break;
}
case 104714:
{
returnValue = F("Frankreichstr.");
break;
}
case 104715:
{
returnValue = F("Franksmannstr.");
break;
}
case 104716:
{
returnValue = F("Frankstr.");
break;
}
case 104717:
{
returnValue = F("Frankstädter Str.");
break;
}
case 104718:
{
returnValue = F("Frankweg");
break;
}
case 104719:
{
returnValue = F("Frankweilerer Str.");
break;
}
case 104720:
{
returnValue = F("Frankweilerstr.");
break;
}
case 104721:
{
returnValue = F("Frankweilerweg");
break;
}
case 104722:
{
returnValue = F("Frans-Hals-Ring");
break;
}
case 104723:
{
returnValue = F("Frans-Hals-Str.");
break;
}
case 104724:
{
returnValue = F("Frans-Hals-Weg");
break;
}
case 104725:
{
returnValue = F("Frans-Masereel-Str.");
break;
}
case 104726:
{
returnValue = F("Franseckystr.");
break;
}
case 104727:
{
returnValue = F("Frantostr.");
break;
}
case 104728:
{
returnValue = F("Frantzengäßchen");
break;
}
case 104729:
{
returnValue = F("Frantzplatz");
break;
}
case 104730:
{
returnValue = F("Franz Krotz Str.");
break;
}
case 104731:
{
returnValue = F("Franz Kümmeckeweg");
break;
}
case 104732:
{
returnValue = F("Franz Liszt Promenadenweg");
break;
}
case 104733:
{
returnValue = F("Franz Müller Weg");
break;
}
case 104734:
{
returnValue = F("Franz Schmitz Winkel");
break;
}
case 104735:
{
returnValue = F("Franz Xaver Mehr-Steg");
break;
}
case 104736:
{
returnValue = F("Franz Xaver-Singer-Str.");
break;
}
case 104737:
{
returnValue = F("Franz Zoller Weg");
break;
}
case 104738:
{
returnValue = F("Franz--Josef-Strauss-Platz");
break;
}
case 104739:
{
returnValue = F("Franz-Abel-Weg");
break;
}
case 104740:
{
returnValue = F("Franz-Abt-Str.");
break;
}
case 104741:
{
returnValue = F("Franz-Adam-Beyerlein-Platz");
break;
}
case 104742:
{
returnValue = F("Franz-Adam-Landvogt-Str.");
break;
}
case 104743:
{
returnValue = F("Franz-Adamo-Str.");
break;
}
case 104744:
{
returnValue = F("Franz-Aletsee-Str.");
break;
}
case 104745:
{
returnValue = F("Franz-Alexander-Str.");
break;
}
case 104746:
{
returnValue = F("Franz-Alfons-Wolpert-Str.");
break;
}
case 104747:
{
returnValue = F("Franz-Alfred-Muth-Str.");
break;
}
case 104748:
{
returnValue = F("Franz-Allgaier-Str.");
break;
}
case 104749:
{
returnValue = F("Franz-Altenhofen-Str.");
break;
}
case 104750:
{
returnValue = F("Franz-Altmeyer-Str.");
break;
}
case 104751:
{
returnValue = F("Franz-Annecke-Str.");
break;
}
case 104752:
{
returnValue = F("Franz-Anneser-Str.");
break;
}
case 104753:
{
returnValue = F("Franz-Anton-Beer-Str.");
break;
}
case 104754:
{
returnValue = F("Franz-Anton-Hermann-Str.");
break;
}
case 104755:
{
returnValue = F("Franz-Anton-Mesmer-Str.");
break;
}
case 104756:
{
returnValue = F("Franz-Anton-Messmer Str.");
break;
}
case 104757:
{
returnValue = F("Franz-Antoni-Str.");
break;
}
case 104758:
{
returnValue = F("Franz-Arnold-Str.");
break;
}
case 104759:
{
returnValue = F("Franz-Arnoldt-Str.");
break;
}
case 104760:
{
returnValue = F("Franz-August-Becker-Str.");
break;
}
case 104761:
{
returnValue = F("Franz-August-Kümpers-Str.");
break;
}
case 104762:
{
returnValue = F("Franz-Baader-Str.");
break;
}
case 104763:
{
returnValue = F("Franz-Bach-Str.");
break;
}
case 104764:
{
returnValue = F("Franz-Bader-Weg");
break;
}
case 104765:
{
returnValue = F("Franz-Balke-Weg");
break;
}
case 104766:
{
returnValue = F("Franz-Ballhorn-Weg");
break;
}
case 104767:
{
returnValue = F("Franz-Balluff-Weg");
break;
}
case 104768:
{
returnValue = F("Franz-Bals-Str.");
break;
}
case 104769:
{
returnValue = F("Franz-Barca-Weg");
break;
}
case 104770:
{
returnValue = F("Franz-Bardroff-Str.");
break;
}
case 104771:
{
returnValue = F("Franz-Baum-Weg");
break;
}
case 104772:
{
returnValue = F("Franz-Baumgartner-Str.");
break;
}
case 104773:
{
returnValue = F("Franz-Bayer-Str.");
break;
}
case 104774:
{
returnValue = F("Franz-Bayertz-Str.");
break;
}
case 104775:
{
returnValue = F("Franz-Becher-Str.");
break;
}
case 104776:
{
returnValue = F("Franz-Becht-Str.");
break;
}
case 104777:
{
returnValue = F("Franz-Beck-Str.");
break;
}
case 104778:
{
returnValue = F("Franz-Becker-Str.");
break;
}
case 104779:
{
returnValue = F("Franz-Becker-Weg");
break;
}
case 104780:
{
returnValue = F("Franz-Beer-Str.");
break;
}
case 104781:
{
returnValue = F("Franz-Beer-Weg");
break;
}
case 104782:
{
returnValue = F("Franz-Beiser-Weg");
break;
}
case 104783:
{
returnValue = F("Franz-Belzer-Str.");
break;
}
case 104784:
{
returnValue = F("Franz-Bender-Str.");
break;
}
case 104785:
{
returnValue = F("Franz-Bergen-Str.");
break;
}
case 104786:
{
returnValue = F("Franz-Bergmüller-Str.");
break;
}
case 104787:
{
returnValue = F("Franz-Bernhard-Str.");
break;
}
case 104788:
{
returnValue = F("Franz-Best-Weg");
break;
}
case 104789:
{
returnValue = F("Franz-Bettinger-Str.");
break;
}
case 104790:
{
returnValue = F("Franz-Betz-Str.");
break;
}
case 104791:
{
returnValue = F("Franz-Bielefeld-Str.");
break;
}
case 104792:
{
returnValue = F("Franz-Bindrum-Weg");
break;
}
case 104793:
{
returnValue = F("Franz-Bingler-Str.");
break;
}
case 104794:
{
returnValue = F("Franz-Birkhan-Ring");
break;
}
case 104795:
{
returnValue = F("Franz-Birringer-Str.");
break;
}
case 104796:
{
returnValue = F("Franz-Bläsi-Str.");
break;
}
case 104797:
{
returnValue = F("Franz-Boas-Str.");
break;
}
case 104798:
{
returnValue = F("Franz-Boehm-Str.");
break;
}
case 104799:
{
returnValue = F("Franz-Bollhagen-Ring");
break;
}
case 104800:
{
returnValue = F("Franz-Book-Str.");
break;
}
case 104801:
{
returnValue = F("Franz-Boss-Str.");
break;
}
case 104802:
{
returnValue = F("Franz-Bracht-Str.");
break;
}
case 104803:
{
returnValue = F("Franz-Brandts-Allee");
break;
}
case 104804:
{
returnValue = F("Franz-Breitenbach-Str.");
break;
}
case 104805:
{
returnValue = F("Franz-Brentano-Str.");
break;
}
case 104806:
{
returnValue = F("Franz-Bresgen-Str.");
break;
}
case 104807:
{
returnValue = F("Franz-Bretz-Str.");
break;
}
case 104808:
{
returnValue = F("Franz-Brovot-Str.");
break;
}
case 104809:
{
returnValue = F("Franz-Brugger-Str.");
break;
}
case 104810:
{
returnValue = F("Franz-Brunner-Weg");
break;
}
case 104811:
{
returnValue = F("Franz-Bräunig-Str.");
break;
}
case 104812:
{
returnValue = F("Franz-Brüning-Str.");
break;
}
case 104813:
{
returnValue = F("Franz-Bunke-Allee");
break;
}
case 104814:
{
returnValue = F("Franz-Bunke-Weg");
break;
}
case 104815:
{
returnValue = F("Franz-Burhoff-Str.");
break;
}
case 104816:
{
returnValue = F("Franz-Burkard-Str.");
break;
}
case 104817:
{
returnValue = F("Franz-Burkhardt-Str.");
break;
}
case 104818:
{
returnValue = F("Franz-Busbach-Str.");
break;
}
case 104819:
{
returnValue = F("Franz-Busche-Str.");
break;
}
case 104820:
{
returnValue = F("Franz-Buß-Str.");
break;
}
case 104821:
{
returnValue = F("Franz-Bögler-Weg");
break;
}
case 104822:
{
returnValue = F("Franz-Böhm-Gasse");
break;
}
case 104823:
{
returnValue = F("Franz-Böhm-Str.");
break;
}
case 104824:
{
returnValue = F("Franz-Böres-Str.");
break;
}
case 104825:
{
returnValue = F("Franz-Bötsch-Str.");
break;
}
case 104826:
{
returnValue = F("Franz-Bühler-Str.");
break;
}
case 104827:
{
returnValue = F("Franz-Büttner-Str.");
break;
}
case 104828:
{
returnValue = F("Franz-Carl-Achard-Str.");
break;
}
case 104829:
{
returnValue = F("Franz-Carl-Nüdling-Platz");
break;
}
case 104830:
{
returnValue = F("Franz-Chlum-Str.");
break;
}
case 104831:
{
returnValue = F("Franz-Cloidt-Weg");
break;
}
case 104832:
{
returnValue = F("Franz-Coenen-Str.");
break;
}
case 104833:
{
returnValue = F("Franz-Conrad-Linck-Str.");
break;
}
case 104834:
{
returnValue = F("Franz-Conrad-Str.");
break;
}
case 104835:
{
returnValue = F("Franz-Cordel-Weg");
break;
}
case 104836:
{
returnValue = F("Franz-Cramer-Str.");
break;
}
case 104837:
{
returnValue = F("Franz-Cyranek-Str.");
break;
}
case 104838:
{
returnValue = F("Franz-Czisch-Str.");
break;
}
case 104839:
{
returnValue = F("Franz-Dango-Str.");
break;
}
case 104840:
{
returnValue = F("Franz-Daniel-Hagelstein-Weg");
break;
}
case 104841:
{
returnValue = F("Franz-Darpe-Str.");
break;
}
case 104842:
{
returnValue = F("Franz-Darpe-Weg");
break;
}
case 104843:
{
returnValue = F("Franz-Delheid-Str.");
break;
}
case 104844:
{
returnValue = F("Franz-Dick-Str.");
break;
}
case 104845:
{
returnValue = F("Franz-Dietel-Str.");
break;
}
case 104846:
{
returnValue = F("Franz-Dietsche-Str.");
break;
}
case 104847:
{
returnValue = F("Franz-Dietze-Str.");
break;
}
case 104848:
{
returnValue = F("Franz-Disch-Str.");
break;
}
case 104849:
{
returnValue = F("Franz-Durant-Str.");
break;
}
case 104850:
{
returnValue = F("Franz-Dusberger-Str.");
break;
}
case 104851:
{
returnValue = F("Franz-Dziebko-Str.");
break;
}
case 104852:
{
returnValue = F("Franz-Dörrzapf-Str.");
break;
}
case 104853:
{
returnValue = F("Franz-Düwell-Str.");
break;
}
case 104854:
{
returnValue = F("Franz-Eberhofer-Kreisel");
break;
}
case 104855:
{
returnValue = F("Franz-Ebert-Str.");
break;
}
case 104856:
{
returnValue = F("Franz-Eckert-Str.");
break;
}
case 104857:
{
returnValue = F("Franz-Eger-Str.");
break;
}
case 104858:
{
returnValue = F("Franz-Egon-Str.");
break;
}
case 104859:
{
returnValue = F("Franz-Ehrenthaler-Str.");
break;
}
case 104860:
{
returnValue = F("Franz-Ehret-Str.");
break;
}
case 104861:
{
returnValue = F("Franz-Eichenauer-Str.");
break;
}
case 104862:
{
returnValue = F("Franz-Eichkorn-Weg");
break;
}
case 104863:
{
returnValue = F("Franz-Eidt-Str.");
break;
}
case 104864:
{
returnValue = F("Franz-Eifler-Str.");
break;
}
case 104865:
{
returnValue = F("Franz-Eifler-Weg");
break;
}
case 104866:
{
returnValue = F("Franz-Eigler-Weg");
break;
}
case 104867:
{
returnValue = F("Franz-Eisele-Allee");
break;
}
case 104868:
{
returnValue = F("Franz-Eisele-Str.");
break;
}
case 104869:
{
returnValue = F("Franz-Ell-Str.");
break;
}
case 104870:
{
returnValue = F("Franz-Ellerbrock-Str.");
break;
}
case 104871:
{
returnValue = F("Franz-Emil-Keller-Str.");
break;
}
case 104872:
{
returnValue = F("Franz-Emschermann-Str.");
break;
}
case 104873:
{
returnValue = F("Franz-Engels-Str.");
break;
}
case 104874:
{
returnValue = F("Franz-Engländer-Str.");
break;
}
case 104875:
{
returnValue = F("Franz-Enz-Str.");
break;
}
case 104876:
{
returnValue = F("Franz-Erler-Str.");
break;
}
case 104877:
{
returnValue = F("Franz-Essenwanger-Str.");
break;
}
case 104878:
{
returnValue = F("Franz-Esser-Str.");
break;
}
case 104879:
{
returnValue = F("Franz-Ettenreich-Platz");
break;
}
case 104880:
{
returnValue = F("Franz-Etzel-Platz");
break;
}
case 104881:
{
returnValue = F("Franz-Eugen-Huber-Str.");
break;
}
case 104882:
{
returnValue = F("Franz-Fabry-Str.");
break;
}
case 104883:
{
returnValue = F("Franz-Faßbender-Str.");
break;
}
case 104884:
{
returnValue = F("Franz-Fecht-Str.");
break;
}
case 104885:
{
returnValue = F("Franz-Fechter-Str.");
break;
}
case 104886:
{
returnValue = F("Franz-Fedder-Str.");
break;
}
case 104887:
{
returnValue = F("Franz-Fehringer-Weg");
break;
}
case 104888:
{
returnValue = F("Franz-Ferdinand-Greiner-Str.");
break;
}
case 104889:
{
returnValue = F("Franz-Ferdinand-Str.");
break;
}
case 104890:
{
returnValue = F("Franz-Feustel-Höhe");
break;
}
case 104891:
{
returnValue = F("Franz-Feustel-Str.");
break;
}
case 104892:
{
returnValue = F("Franz-Fischer-Str.");
break;
}
case 104893:
{
returnValue = F("Franz-Fischer-Weg");
break;
}
case 104894:
{
returnValue = F("Franz-Flach-Weg");
break;
}
case 104895:
{
returnValue = F("Franz-Flegler-Weg");
break;
}
case 104896:
{
returnValue = F("Franz-Fleischer-Str.");
break;
}
case 104897:
{
returnValue = F("Franz-Fluch-Str.");
break;
}
case 104898:
{
returnValue = F("Franz-Fuchs-Str.");
break;
}
case 104899:
{
returnValue = F("Franz-Fühmann-Weg");
break;
}
case 104900:
{
returnValue = F("Franz-Fürst-Str.");
break;
}
case 104901:
{
returnValue = F("Franz-Galitz-Str.");
break;
}
case 104902:
{
returnValue = F("Franz-Ganghofer-Weg");
break;
}
case 104903:
{
returnValue = F("Franz-Gareis-Weg");
break;
}
case 104904:
{
returnValue = F("Franz-Geiger-Str.");
break;
}
case 104905:
{
returnValue = F("Franz-Geiler-Platz");
break;
}
case 104906:
{
returnValue = F("Franz-Geist-Str.");
break;
}
case 104907:
{
returnValue = F("Franz-Gelb-Weg");
break;
}
case 104908:
{
returnValue = F("Franz-Gember-Anlage");
break;
}
case 104909:
{
returnValue = F("Franz-Gensler-Str.");
break;
}
case 104910:
{
returnValue = F("Franz-Georg-Str.");
break;
}
case 104911:
{
returnValue = F("Franz-Gerauer-Str.");
break;
}
case 104912:
{
returnValue = F("Franz-Gerstner-Str.");
break;
}
case 104913:
{
returnValue = F("Franz-Gerwin-Str.");
break;
}
case 104914:
{
returnValue = F("Franz-Geshe-Str.");
break;
}
case 104915:
{
returnValue = F("Franz-Gessen-Str.");
break;
}
case 104916:
{
returnValue = F("Franz-Gielen-Str.");
break;
}
case 104917:
{
returnValue = F("Franz-Gleim-Str.");
break;
}
case 104918:
{
returnValue = F("Franz-Gleißner-Str.");
break;
}
case 104919:
{
returnValue = F("Franz-Goormann-Str.");
break;
}
case 104920:
{
returnValue = F("Franz-Grabe-Str.");
break;
}
case 104921:
{
returnValue = F("Franz-Graf-Str.");
break;
}
case 104922:
{
returnValue = F("Franz-Grashof-Str.");
break;
}
case 104923:
{
returnValue = F("Franz-Gresitza-Str.");
break;
}
case 104924:
{
returnValue = F("Franz-Grimmeisen-Weg");
break;
}
case 104925:
{
returnValue = F("Franz-Grochtmann-Str.");
break;
}
case 104926:
{
returnValue = F("Franz-Groedel-Str.");
break;
}
case 104927:
{
returnValue = F("Franz-Große-Str.");
break;
}
case 104928:
{
returnValue = F("Franz-Gruber-Platz");
break;
}
case 104929:
{
returnValue = F("Franz-Gruber-Str.");
break;
}
case 104930:
{
returnValue = F("Franz-Grunick-Str.");
break;
}
case 104931:
{
returnValue = F("Franz-Gschrey-Str.");
break;
}
case 104932:
{
returnValue = F("Franz-Gurk-Str.");
break;
}
case 104933:
{
returnValue = F("Franz-Gussek-Ring");
break;
}
case 104934:
{
returnValue = F("Franz-Göhler-Str.");
break;
}
case 104935:
{
returnValue = F("Franz-Göttler-Weg");
break;
}
case 104936:
{
returnValue = F("Franz-Gößmann-Str.");
break;
}
case 104937:
{
returnValue = F("Franz-Günther-Weg");
break;
}
case 104938:
{
returnValue = F("Franz-Haas-Str.");
break;
}
case 104939:
{
returnValue = F("Franz-Haas-Weg");
break;
}
case 104940:
{
returnValue = F("Franz-Hagn-Str.");
break;
}
case 104941:
{
returnValue = F("Franz-Haimer-Str.");
break;
}
case 104942:
{
returnValue = F("Franz-Halcour-Str.");
break;
}
case 104943:
{
returnValue = F("Franz-Hammer-Str.");
break;
}
case 104944:
{
returnValue = F("Franz-Haniel-Str.");
break;
}
case 104945:
{
returnValue = F("Franz-Hardebusch-Str.");
break;
}
case 104946:
{
returnValue = F("Franz-Hartard-Str.");
break;
}
case 104947:
{
returnValue = F("Franz-Hartl-Str.");
break;
}
case 104948:
{
returnValue = F("Franz-Hartmann-Str.");
break;
}
case 104949:
{
returnValue = F("Franz-Hartmann-Weg");
break;
}
case 104950:
{
returnValue = F("Franz-Hartz-Str.");
break;
}
case 104951:
{
returnValue = F("Franz-Hausmann-Str.");
break;
}
case 104952:
{
returnValue = F("Franz-Hecker-Str.");
break;
}
case 104953:
{
returnValue = F("Franz-Heckmanns-Str.");
break;
}
case 104954:
{
returnValue = F("Franz-Heeg-Str.");
break;
}
case 104955:
{
returnValue = F("Franz-Hegemann-Str.");
break;
}
case 104956:
{
returnValue = F("Franz-Hegmann-Str.");
break;
}
case 104957:
{
returnValue = F("Franz-Heider-Str.");
break;
}
case 104958:
{
returnValue = F("Franz-Heidinger-Str.");
break;
}
case 104959:
{
returnValue = F("Franz-Heim-Weg");
break;
}
case 104960:
{
returnValue = F("Franz-Heinecke-Str.");
break;
}
case 104961:
{
returnValue = F("Franz-Heinrich-Str.");
break;
}
case 104962:
{
returnValue = F("Franz-Heinz-Hohenschutz-Str.");
break;
}
case 104963:
{
returnValue = F("Franz-Heitzler-Weg");
break;
}
case 104964:
{
returnValue = F("Franz-Held-Weg");
break;
}
case 104965:
{
returnValue = F("Franz-Heldmann-Str.");
break;
}
case 104966:
{
returnValue = F("Franz-Hell-Str.");
break;
}
case 104967:
{
returnValue = F("Franz-Hellner-Str.");
break;
}
case 104968:
{
returnValue = F("Franz-Hengsbach-Str.");
break;
}
case 104969:
{
returnValue = F("Franz-Hennegriff-Str.");
break;
}
case 104970:
{
returnValue = F("Franz-Hennes-Str.");
break;
}
case 104971:
{
returnValue = F("Franz-Hentze-Str.");
break;
}
case 104972:
{
returnValue = F("Franz-Herb-Weg");
break;
}
case 104973:
{
returnValue = F("Franz-Herbert-Str.");
break;
}
case 104974:
{
returnValue = F("Franz-Herbst-Str.");
break;
}
case 104975:
{
returnValue = F("Franz-Hermann-Kemp-Str.");
break;
}
case 104976:
{
returnValue = F("Franz-Hermanns-Weg");
break;
}
case 104977:
{
returnValue = F("Franz-Hermle-Str.");
break;
}
case 104978:
{
returnValue = F("Franz-Hertle-Str.");
break;
}
case 104979:
{
returnValue = F("Franz-Heuel-Str.");
break;
}
case 104980:
{
returnValue = F("Franz-Heymann-Str.");
break;
}
case 104981:
{
returnValue = F("Franz-Heß-Str.");
break;
}
case 104982:
{
returnValue = F("Franz-Hillebrand-Platz");
break;
}
case 104983:
{
returnValue = F("Franz-Hillebrand-Str.");
break;
}
case 104984:
{
returnValue = F("Franz-Hirth-Str.");
break;
}
case 104985:
{
returnValue = F("Franz-Hitze-Str.");
break;
}
case 104986:
{
returnValue = F("Franz-Hitze-Weg");
break;
}
case 104987:
{
returnValue = F("Franz-Hoffmann-Str.");
break;
}
case 104988:
{
returnValue = F("Franz-Hoffmeister-Str.");
break;
}
case 104989:
{
returnValue = F("Franz-Hofmeister-Str.");
break;
}
case 104990:
{
returnValue = F("Franz-Holl-Str.");
break;
}
case 104991:
{
returnValue = F("Franz-Hollenbach-Str.");
break;
}
case 104992:
{
returnValue = F("Franz-Holtz-Weg");
break;
}
case 104993:
{
returnValue = F("Franz-Holzhauer-Weg");
break;
}
case 104994:
{
returnValue = F("Franz-Holzmann-Str.");
break;
}
case 104995:
{
returnValue = F("Franz-Horch-Str.");
break;
}
case 104996:
{
returnValue = F("Franz-Horn-Str.");
break;
}
case 104997:
{
returnValue = F("Franz-Huber-Ring");
break;
}
case 104998:
{
returnValue = F("Franz-Huber-Str.");
break;
}
case 104999:
{
returnValue = F("Franz-Huebel-Weg");
break;
}
case 105000:
{
returnValue = F("Franz-Huf-Str.");
break;
}
case 105001:
{
returnValue = F("Franz-Hummel-Weg");
break;
}
case 105002:
{
returnValue = F("Franz-Hußenether-Str.");
break;
}
case 105003:
{
returnValue = F("Franz-Häfelin-Str.");
break;
}
case 105004:
{
returnValue = F("Franz-Högner-Weg");
break;
}
case 105005:
{
returnValue = F("Franz-Höhne-Weg");
break;
}
case 105006:
{
returnValue = F("Franz-Höltig-Weg");
break;
}
case 105007:
{
returnValue = F("Franz-Hübsch-Str.");
break;
}
case 105008:
{
returnValue = F("Franz-Ignaz-Krohmer-Str.");
break;
}
case 105009:
{
returnValue = F("Franz-Inselkammer-Str.");
break;
}
case 105010:
{
returnValue = F("Franz-Inselkammer-Weg");
break;
}
case 105011:
{
returnValue = F("Franz-Itting-Str.");
break;
}
case 105012:
{
returnValue = F("Franz-Jacob-Str.");
break;
}
case 105013:
{
returnValue = F("Franz-Jacobi-Str.");
break;
}
case 105014:
{
returnValue = F("Franz-Jakoby-Str.");
break;
}
case 105015:
{
returnValue = F("Franz-Jaksch-Weg");
break;
}
case 105016:
{
returnValue = F("Franz-Joachim-Beich-Str.");
break;
}
case 105017:
{
returnValue = F("Franz-John-Str.");
break;
}
case 105018:
{
returnValue = F("Franz-Jonetat-Str.");
break;
}
case 105019:
{
returnValue = F("Franz-Josef-Ahles-Str.");
break;
}
case 105020:
{
returnValue = F("Franz-Josef-Baumgartner-Str.");
break;
}
case 105021:
{
returnValue = F("Franz-Josef-Brunck-Str.");
break;
}
case 105022:
{
returnValue = F("Franz-Josef-Ehrhart-Str.");
break;
}
case 105023:
{
returnValue = F("Franz-Josef-Faller-Str.");
break;
}
case 105024:
{
returnValue = F("Franz-Josef-Fischer-Str.");
break;
}
case 105025:
{
returnValue = F("Franz-Josef-Gall-Str.");
break;
}
case 105026:
{
returnValue = F("Franz-Josef-Gall-Weg");
break;
}
case 105027:
{
returnValue = F("Franz-Josef-Gassenschmidt-Weg");
break;
}
case 105028:
{
returnValue = F("Franz-Josef-Geiger-Weg");
break;
}
case 105029:
{
returnValue = F("Franz-Josef-Halm-Platz");
break;
}
case 105030:
{
returnValue = F("Franz-Josef-Kellner-Weg");
break;
}
case 105031:
{
returnValue = F("Franz-Josef-Krayer-Str.");
break;
}
case 105032:
{
returnValue = F("Franz-Josef-Magnus-Str.");
break;
}
case 105033:
{
returnValue = F("Franz-Josef-Mall-Str.");
break;
}
case 105034:
{
returnValue = F("Franz-Josef-Pey-Str.");
break;
}
case 105035:
{
returnValue = F("Franz-Josef-Reuter-Str.");
break;
}
case 105036:
{
returnValue = F("Franz-Josef-Roth-Str.");
break;
}
case 105037:
{
returnValue = F("Franz-Josef-Röder-Brücke");
break;
}
case 105038:
{
returnValue = F("Franz-Josef-Schellenberger-Str.");
break;
}
case 105039:
{
returnValue = F("Franz-Josef-Soll-Str.");
break;
}
case 105040:
{
returnValue = F("Franz-Josef-Str.");
break;
}
case 105041:
{
returnValue = F("Franz-Josef-Strauss-Str.");
break;
}
case 105042:
{
returnValue = F("Franz-Josef-Strauß-Allee");
break;
}
case 105043:
{
returnValue = F("Franz-Josef-Strauß-Brücke");
break;
}
case 105044:
{
returnValue = F("Franz-Josef-Strauß-Platz");
break;
}
case 105045:
{
returnValue = F("Franz-Josef-Strauß-Str.");
break;
}
case 105046:
{
returnValue = F("Franz-Josef-Streibl-Str.");
break;
}
case 105047:
{
returnValue = F("Franz-Josef-Sulzer-Weg");
break;
}
case 105048:
{
returnValue = F("Franz-Josef-Weg");
break;
}
case 105049:
{
returnValue = F("Franz-Josef-Zoll-Str.");
break;
}
case 105050:
{
returnValue = F("Franz-Josef-v.-Weiß-Str.");
break;
}
case 105051:
{
returnValue = F("Franz-Joseph-Buss-Str.");
break;
}
case 105052:
{
returnValue = F("Franz-Joseph-Egenter-Str.");
break;
}
case 105053:
{
returnValue = F("Franz-Joseph-Nuß-Str.");
break;
}
case 105054:
{
returnValue = F("Franz-Joseph-Spiegler-Str.");
break;
}
case 105055:
{
returnValue = F("Franz-Jostes-Weg");
break;
}
case 105056:
{
returnValue = F("Franz-Julius-Haenel-Str.");
break;
}
case 105057:
{
returnValue = F("Franz-Julius-Hoeltz-Str.");
break;
}
case 105058:
{
returnValue = F("Franz-Kafka-Ring");
break;
}
case 105059:
{
returnValue = F("Franz-Kafka-Str.");
break;
}
case 105060:
{
returnValue = F("Franz-Kafka-Weg");
break;
}
case 105061:
{
returnValue = F("Franz-Kahmen-Str.");
break;
}
case 105062:
{
returnValue = F("Franz-Kail-Str.");
break;
}
case 105063:
{
returnValue = F("Franz-Kaltner-Str.");
break;
}
case 105064:
{
returnValue = F("Franz-Kamerseder-Str.");
break;
}
case 105065:
{
returnValue = F("Franz-Karl-Kremer-Str.");
break;
}
case 105066:
{
returnValue = F("Franz-Karl-Maurath-Weg");
break;
}
case 105067:
{
returnValue = F("Franz-Karl-Petter-Weg");
break;
}
case 105068:
{
returnValue = F("Franz-Karsten-Str.");
break;
}
case 105069:
{
returnValue = F("Franz-Kaufmann-Str.");
break;
}
case 105070:
{
returnValue = F("Franz-Kayser-Str.");
break;
}
case 105071:
{
returnValue = F("Franz-Keim-Str.");
break;
}
case 105072:
{
returnValue = F("Franz-Keller-Str.");
break;
}
case 105073:
{
returnValue = F("Franz-Kerl-Weg");
break;
}
case 105074:
{
returnValue = F("Franz-Kern-Str.");
break;
}
case 105075:
{
returnValue = F("Franz-Kesting-Weg");
break;
}
case 105076:
{
returnValue = F("Franz-Keßler-Platz");
break;
}
case 105077:
{
returnValue = F("Franz-Kilian-Str.");
break;
}
case 105078:
{
returnValue = F("Franz-Kirrmeier-Str.");
break;
}
case 105079:
{
returnValue = F("Franz-Kirsten-Str.");
break;
}
case 105080:
{
returnValue = F("Franz-Klarmeyer-Weg");
break;
}
case 105081:
{
returnValue = F("Franz-Kleespies-Str.");
break;
}
case 105082:
{
returnValue = F("Franz-Kleine Park");
break;
}
case 105083:
{
returnValue = F("Franz-Kleinhans-Str.");
break;
}
case 105084:
{
returnValue = F("Franz-Kleinheyer-Str.");
break;
}
case 105085:
{
returnValue = F("Franz-Kleinschrod-Weg");
break;
}
case 105086:
{
returnValue = F("Franz-Klingenthal-Str.");
break;
}
case 105087:
{
returnValue = F("Franz-Klingler-Str.");
break;
}
case 105088:
{
returnValue = F("Franz-Klopietz-Str.");
break;
}
case 105089:
{
returnValue = F("Franz-Klüsner-Weg");
break;
}
case 105090:
{
returnValue = F("Franz-Knauff-Str.");
break;
}
case 105091:
{
returnValue = F("Franz-Knauschner-Str.");
break;
}
case 105092:
{
returnValue = F("Franz-Knöbel-Str.");
break;
}
case 105093:
{
returnValue = F("Franz-Kobinger-Str.");
break;
}
case 105094:
{
returnValue = F("Franz-Koch-Str.");
break;
}
case 105095:
{
returnValue = F("Franz-Kocks-Str.");
break;
}
case 105096:
{
returnValue = F("Franz-Kofler-Str.");
break;
}
case 105097:
{
returnValue = F("Franz-Kohl-Str.");
break;
}
case 105098:
{
returnValue = F("Franz-Kohlhepp-Str.");
break;
}
case 105099:
{
returnValue = F("Franz-Kolck-Str.");
break;
}
case 105100:
{
returnValue = F("Franz-Konrad-Str.");
break;
}
case 105101:
{
returnValue = F("Franz-Korwan-Weg");
break;
}
case 105102:
{
returnValue = F("Franz-Kriechbaum-Str.");
break;
}
case 105103:
{
returnValue = F("Franz-Krieger-Str.");
break;
}
case 105104:
{
returnValue = F("Franz-Krinninger-Weg");
break;
}
case 105105:
{
returnValue = F("Franz-Kruckenberg-Str.");
break;
}
case 105106:
{
returnValue = F("Franz-Krug-Str.");
break;
}
case 105107:
{
returnValue = F("Franz-Krämer-Str.");
break;
}
case 105108:
{
returnValue = F("Franz-Kuen-Weg");
break;
}
case 105109:
{
returnValue = F("Franz-Kugler-Str.");
break;
}
case 105110:
{
returnValue = F("Franz-Kuhn-Str.");
break;
}
case 105111:
{
returnValue = F("Franz-Kunze-Str.");
break;
}
case 105112:
{
returnValue = F("Franz-Käth-Str.");
break;
}
case 105113:
{
returnValue = F("Franz-Kögler-Ring");
break;
}
case 105114:
{
returnValue = F("Franz-Kölbl-Weg");
break;
}
case 105115:
{
returnValue = F("Franz-König-Str.");
break;
}
case 105116:
{
returnValue = F("Franz-Könings-Str.");
break;
}
case 105117:
{
returnValue = F("Franz-Könitzer-Str.");
break;
}
case 105118:
{
returnValue = F("Franz-Künstler-Siedlung");
break;
}
case 105119:
{
returnValue = F("Franz-Künstler-Str.");
break;
}
case 105120:
{
returnValue = F("Franz-Künzer-Str.");
break;
}
case 105121:
{
returnValue = F("Franz-Lachner-Str.");
break;
}
case 105122:
{
returnValue = F("Franz-Lahde-Str.");
break;
}
case 105123:
{
returnValue = F("Franz-Lammerding-Weg");
break;
}
case 105124:
{
returnValue = F("Franz-Lang-Str.");
break;
}
case 105125:
{
returnValue = F("Franz-Langsdorf-Platz");
break;
}
case 105126:
{
returnValue = F("Franz-Lappe-Str.");
break;
}
case 105127:
{
returnValue = F("Franz-Larcher-Str.");
break;
}
case 105128:
{
returnValue = F("Franz-Laub-Weg");
break;
}
case 105129:
{
returnValue = F("Franz-Lefevre-Str.");
break;
}
case 105130:
{
returnValue = F("Franz-Lehar-Str.");
break;
}
case 105131:
{
returnValue = F("Franz-Lehar-Weg");
break;
}
case 105132:
{
returnValue = F("Franz-Lehmann-Str.");
break;
}
case 105133:
{
returnValue = F("Franz-Lehnen-Str.");
break;
}
case 105134:
{
returnValue = F("Franz-Lehner-Str.");
break;
}
case 105135:
{
returnValue = F("Franz-Lehár-Str.");
break;
}
case 105136:
{
returnValue = F("Franz-Lehár-Weg");
break;
}
case 105137:
{
returnValue = F("Franz-Lenbach-Str.");
break;
}
case 105138:
{
returnValue = F("Franz-Lenders-Str.");
break;
}
case 105139:
{
returnValue = F("Franz-Lenz-Str.");
break;
}
case 105140:
{
returnValue = F("Franz-Leonhard-Pregler-Str.");
break;
}
case 105141:
{
returnValue = F("Franz-Leonhard-Weg");
break;
}
case 105142:
{
returnValue = F("Franz-Leopold-Link-Str.");
break;
}
case 105143:
{
returnValue = F("Franz-Leopold-Schecher-Str.");
break;
}
case 105144:
{
returnValue = F("Franz-Leuninger-Str.");
break;
}
case 105145:
{
returnValue = F("Franz-Leuninger-Weg");
break;
}
case 105146:
{
returnValue = F("Franz-Lilling-Str.");
break;
}
case 105147:
{
returnValue = F("Franz-Lind-Str.");
break;
}
case 105148:
{
returnValue = F("Franz-Linnemann-Weg");
break;
}
case 105149:
{
returnValue = F("Franz-Lipp-Str.");
break;
}
case 105150:
{
returnValue = F("Franz-Liszt-Allee");
break;
}
case 105151:
{
returnValue = F("Franz-Liszt-Hof");
break;
}
case 105152:
{
returnValue = F("Franz-Liszt-Ring");
break;
}
case 105153:
{
returnValue = F("Franz-Liszt-Str.");
break;
}
case 105154:
{
returnValue = F("Franz-Liszt-Weg");
break;
}
case 105155:
{
returnValue = F("Franz-Loewen-Str.");
break;
}
case 105156:
{
returnValue = F("Franz-Lorenz-Str.");
break;
}
case 105157:
{
returnValue = F("Franz-Loritz-Str.");
break;
}
case 105158:
{
returnValue = F("Franz-Ludwig-Göbel-Weg");
break;
}
case 105159:
{
returnValue = F("Franz-Ludwig-Mersy-Str.");
break;
}
case 105160:
{
returnValue = F("Franz-Ludwig-Rasch-Str.");
break;
}
case 105161:
{
returnValue = F("Franz-Ludwig-Str.");
break;
}
case 105162:
{
returnValue = F("Franz-Ludwig-von-Cancrin-Weg");
break;
}
case 105163:
{
returnValue = F("Franz-Lust-Str.");
break;
}
case 105164:
{
returnValue = F("Franz-Lutz-Str.");
break;
}
case 105165:
{
returnValue = F("Franz-Léhar-Promenade");
break;
}
case 105166:
{
returnValue = F("Franz-Mack-Str.");
break;
}
case 105167:
{
returnValue = F("Franz-Mader-Str.");
break;
}
case 105168:
{
returnValue = F("Franz-Mader-Weg");
break;
}
case 105169:
{
returnValue = F("Franz-Maecker-Str.");
break;
}
case 105170:
{
returnValue = F("Franz-Magnus-Böhme-Str.");
break;
}
case 105171:
{
returnValue = F("Franz-Maier-Platz");
break;
}
case 105172:
{
returnValue = F("Franz-Maltan-Str.");
break;
}
case 105173:
{
returnValue = F("Franz-Mang-Str.");
break;
}
case 105174:
{
returnValue = F("Franz-Marc-Ring");
break;
}
case 105175:
{
returnValue = F("Franz-Marc-Str.");
break;
}
case 105176:
{
returnValue = F("Franz-Marc-Weg");
break;
}
case 105177:
{
returnValue = F("Franz-Martin-Str.");
break;
}
case 105178:
{
returnValue = F("Franz-Mary-Weg");
break;
}
case 105179:
{
returnValue = F("Franz-Matt-Str.");
break;
}
case 105180:
{
returnValue = F("Franz-Matuska-Weg");
break;
}
case 105181:
{
returnValue = F("Franz-Mawick-Weg");
break;
}
case 105182:
{
returnValue = F("Franz-Mayer-Str.");
break;
}
case 105183:
{
returnValue = F("Franz-Mayr-Str.");
break;
}
case 105184:
{
returnValue = F("Franz-Mecker-Str.");
break;
}
case 105185:
{
returnValue = F("Franz-Meguin-Str.");
break;
}
case 105186:
{
returnValue = F("Franz-Mehring-Platz");
break;
}
case 105187:
{
returnValue = F("Franz-Mehring-Str.");
break;
}
case 105188:
{
returnValue = F("Franz-Mehring-Viertel");
break;
}
case 105189:
{
returnValue = F("Franz-Meier-Str.");
break;
}
case 105190:
{
returnValue = F("Franz-Menke-Str.");
break;
}
case 105191:
{
returnValue = F("Franz-Meyer-Str.");
break;
}
case 105192:
{
returnValue = F("Franz-Meyer-Weg");
break;
}
case 105193:
{
returnValue = F("Franz-Meyers-Str.");
break;
}
case 105194:
{
returnValue = F("Franz-Mitta-Weg");
break;
}
case 105195:
{
returnValue = F("Franz-Moorfeld-Str.");
break;
}
case 105196:
{
returnValue = F("Franz-Moser-Str.");
break;
}
case 105197:
{
returnValue = F("Franz-Möckl-Weg");
break;
}
case 105198:
{
returnValue = F("Franz-Mörchen-Weg");
break;
}
case 105199:
{
returnValue = F("Franz-Möricke-Str.");
break;
}
case 105200:
{
returnValue = F("Franz-Mörtl-Str.");
break;
}
case 105201:
{
returnValue = F("Franz-Mülder-Str.");
break;
}
case 105202:
{
returnValue = F("Franz-Müller-Str.");
break;
}
case 105203:
{
returnValue = F("Franz-Naager-Str.");
break;
}
case 105204:
{
returnValue = F("Franz-Nauen-Weg");
break;
}
case 105205:
{
returnValue = F("Franz-Nawa-Str.");
break;
}
case 105206:
{
returnValue = F("Franz-Nekes-Str.");
break;
}
case 105207:
{
returnValue = F("Franz-Nelihsen-Str.");
break;
}
case 105208:
{
returnValue = F("Franz-Neumaier-Str.");
break;
}
case 105209:
{
returnValue = F("Franz-Niesner-Weg");
break;
}
case 105210:
{
returnValue = F("Franz-Nigge-Str.");
break;
}
case 105211:
{
returnValue = F("Franz-Nissl-Str.");
break;
}
case 105212:
{
returnValue = F("Franz-Nolte-Str.");
break;
}
case 105213:
{
returnValue = F("Franz-Nölken-Weg");
break;
}
case 105214:
{
returnValue = F("Franz-Oberhofer-Str.");
break;
}
case 105215:
{
returnValue = F("Franz-Obermayer-Str.");
break;
}
case 105216:
{
returnValue = F("Franz-Offergeld-Str.");
break;
}
case 105217:
{
returnValue = F("Franz-Ott-Str.");
break;
}
case 105218:
{
returnValue = F("Franz-Pantel-Ring");
break;
}
case 105219:
{
returnValue = F("Franz-Parr-Platz");
break;
}
case 105220:
{
returnValue = F("Franz-Pascher-Str.");
break;
}
case 105221:
{
returnValue = F("Franz-Paul-Str.");
break;
}
case 105222:
{
returnValue = F("Franz-Pauli-Str.");
break;
}
case 105223:
{
returnValue = F("Franz-Pauly-Str.");
break;
}
case 105224:
{
returnValue = F("Franz-Pesch-Str.");
break;
}
case 105225:
{
returnValue = F("Franz-Peter-Seifert-Str.");
break;
}
case 105226:
{
returnValue = F("Franz-Peter-Sigel-Str.");
break;
}
case 105227:
{
returnValue = F("Franz-Peter-Str.");
break;
}
case 105228:
{
returnValue = F("Franz-Petrich-Str.");
break;
}
case 105229:
{
returnValue = F("Franz-Pfaffenberger-Str.");
break;
}
case 105230:
{
returnValue = F("Franz-Pfeifer-Weg");
break;
}
case 105231:
{
returnValue = F("Franz-Pflugradt-Str.");
break;
}
case 105232:
{
returnValue = F("Franz-Philipp-Str.");
break;
}
case 105233:
{
returnValue = F("Franz-Plank-Str.");
break;
}
case 105234:
{
returnValue = F("Franz-Plattner Str.");
break;
}
case 105235:
{
returnValue = F("Franz-Pohlmann-Str.");
break;
}
case 105236:
{
returnValue = F("Franz-Poppe-Str.");
break;
}
case 105237:
{
returnValue = F("Franz-Poschner-Str.");
break;
}
case 105238:
{
returnValue = F("Franz-Prantl-Str.");
break;
}
case 105239:
{
returnValue = F("Franz-Pries-Weg");
break;
}
case 105240:
{
returnValue = F("Franz-Pusl-Str.");
break;
}
case 105241:
{
returnValue = F("Franz-Rabe-Str.");
break;
}
case 105242:
{
returnValue = F("Franz-Radziwill-Weg");
break;
}
case 105243:
{
returnValue = F("Franz-Ramesohl-Str.");
break;
}
case 105244:
{
returnValue = F("Franz-Ranz-Str.");
break;
}
case 105245:
{
returnValue = F("Franz-Rapp-Str.");
break;
}
case 105246:
{
returnValue = F("Franz-Rath-Platz");
break;
}
case 105247:
{
returnValue = F("Franz-Rau-Str.");
break;
}
case 105248:
{
returnValue = F("Franz-Rauch-Str.");
break;
}
case 105249:
{
returnValue = F("Franz-Rauhut-Str.");
break;
}
case 105250:
{
returnValue = F("Franz-Rector-Str.");
break;
}
case 105251:
{
returnValue = F("Franz-Reichle-Str.");
break;
}
case 105252:
{
returnValue = F("Franz-Reiff-Str.");
break;
}
case 105253:
{
returnValue = F("Franz-Renner-Str.");
break;
}
case 105254:
{
returnValue = F("Franz-Rettig-Str.");
break;
}
case 105255:
{
returnValue = F("Franz-Rettig-Weg");
break;
}
case 105256:
{
returnValue = F("Franz-Rieder-Str.");
break;
}
case 105257:
{
returnValue = F("Franz-Rieger-Weg");
break;
}
case 105258:
{
returnValue = F("Franz-Riemhofer-Weg");
break;
}
case 105259:
{
returnValue = F("Franz-Riepe-Str.");
break;
}
case 105260:
{
returnValue = F("Franz-Rieping-Str.");
break;
}
case 105261:
{
returnValue = F("Franz-Riester-Str.");
break;
}
case 105262:
{
returnValue = F("Franz-Ringseis-Str.");
break;
}
case 105263:
{
returnValue = F("Franz-Ringseis-Weg");
break;
}
case 105264:
{
returnValue = F("Franz-Rinsche-Str.");
break;
}
case 105265:
{
returnValue = F("Franz-Rinscheid-Str.");
break;
}
case 105266:
{
returnValue = F("Franz-Rixen-Str.");
break;
}
case 105267:
{
returnValue = F("Franz-Roh-Str.");
break;
}
case 105268:
{
returnValue = F("Franz-Rohls-Platz");
break;
}
case 105269:
{
returnValue = F("Franz-Rohwer-Platz");
break;
}
case 105270:
{
returnValue = F("Franz-Roscher-Str.");
break;
}
case 105271:
{
returnValue = F("Franz-Rosenbruch-Weg");
break;
}
case 105272:
{
returnValue = F("Franz-Roth-Platz");
break;
}
case 105273:
{
returnValue = F("Franz-Rothweil-Weg");
break;
}
case 105274:
{
returnValue = F("Franz-Rotter-Allee");
break;
}
case 105275:
{
returnValue = F("Franz-Rotthäuser-Str.");
break;
}
case 105276:
{
returnValue = F("Franz-Rueff-Str.");
break;
}
case 105277:
{
returnValue = F("Franz-Rumpel-Weg");
break;
}
case 105278:
{
returnValue = F("Franz-Rupp-Str.");
break;
}
case 105279:
{
returnValue = F("Franz-Rüth-Str.");
break;
}
case 105280:
{
returnValue = F("Franz-Sackmann-Brücke");
break;
}
case 105281:
{
returnValue = F("Franz-Sales-Gailler-Str.");
break;
}
case 105282:
{
returnValue = F("Franz-Sales-Str.");
break;
}
case 105283:
{
returnValue = F("Franz-Sales-Wocheler-Weg");
break;
}
case 105284:
{
returnValue = F("Franz-Salomon-Str.");
break;
}
case 105285:
{
returnValue = F("Franz-Saumer-Weg");
break;
}
case 105286:
{
returnValue = F("Franz-Savels-Str.");
break;
}
case 105287:
{
returnValue = F("Franz-Schain-Str.");
break;
}
case 105288:
{
returnValue = F("Franz-Schanz-Str.");
break;
}
case 105289:
{
returnValue = F("Franz-Schell-Str.");
break;
}
case 105290:
{
returnValue = F("Franz-Scheuern-Str.");
break;
}
case 105291:
{
returnValue = F("Franz-Schiele-Str.");
break;
}
case 105292:
{
returnValue = F("Franz-Schiele-Weg");
break;
}
case 105293:
{
returnValue = F("Franz-Schildhammer-Str.");
break;
}
case 105294:
{
returnValue = F("Franz-Schilling-Str.");
break;
}
case 105295:
{
returnValue = F("Franz-Schindler-Str.");
break;
}
case 105296:
{
returnValue = F("Franz-Schmal-Str.");
break;
}
case 105297:
{
returnValue = F("Franz-Schmid-Str.");
break;
}
case 105298:
{
returnValue = F("Franz-Schmider-Str.");
break;
}
case 105299:
{
returnValue = F("Franz-Schmidt-Str.");
break;
}
case 105300:
{
returnValue = F("Franz-Schmidt-Weg");
break;
}
case 105301:
{
returnValue = F("Franz-Schmitz-Weg");
break;
}
case 105302:
{
returnValue = F("Franz-Schmuzer-Weg");
break;
}
case 105303:
{
returnValue = F("Franz-Schnabel-Str.");
break;
}
case 105304:
{
returnValue = F("Franz-Schneider-Str.");
break;
}
case 105305:
{
returnValue = F("Franz-Schneider-Weg");
break;
}
case 105306:
{
returnValue = F("Franz-Schneller-Str.");
break;
}
case 105307:
{
returnValue = F("Franz-Schosser-Str.");
break;
}
case 105308:
{
returnValue = F("Franz-Schrank-Str.");
break;
}
case 105309:
{
returnValue = F("Franz-Schratz-Str.");
break;
}
case 105310:
{
returnValue = F("Franz-Schreck-Weg");
break;
}
case 105311:
{
returnValue = F("Franz-Schröer-Weg");
break;
}
case 105312:
{
returnValue = F("Franz-Schröter-Str.");
break;
}
case 105313:
{
returnValue = F("Franz-Schubert-Allee");
break;
}
case 105314:
{
returnValue = F("Franz-Schubert-Hof");
break;
}
case 105315:
{
returnValue = F("Franz-Schubert-Platz");
break;
}
case 105316:
{
returnValue = F("Franz-Schubert-Str.");
break;
}
case 105317:
{
returnValue = F("Franz-Schubert-Weg");
break;
}
case 105318:
{
returnValue = F("Franz-Schuhmacher-Str.");
break;
}
case 105319:
{
returnValue = F("Franz-Schulz-Str.");
break;
}
case 105320:
{
returnValue = F("Franz-Schulze-Isfort-Str.");
break;
}
case 105321:
{
returnValue = F("Franz-Schuster-Str.");
break;
}
case 105322:
{
returnValue = F("Franz-Schwarz-Str.");
break;
}
case 105323:
{
returnValue = F("Franz-Schweiger-Str.");
break;
}
case 105324:
{
returnValue = F("Franz-Schweizer-Str.");
break;
}
case 105325:
{
returnValue = F("Franz-Schädler-Str.");
break;
}
case 105326:
{
returnValue = F("Franz-Schöberl-Str.");
break;
}
case 105327:
{
returnValue = F("Franz-Schüßler-Str.");
break;
}
case 105328:
{
returnValue = F("Franz-Seidl-Weg");
break;
}
case 105329:
{
returnValue = F("Franz-Seiff-Str.");
break;
}
case 105330:
{
returnValue = F("Franz-Seiffert-Str.");
break;
}
case 105331:
{
returnValue = F("Franz-Seitner-Str.");
break;
}
case 105332:
{
returnValue = F("Franz-Seliger-Str.");
break;
}
case 105333:
{
returnValue = F("Franz-Sellhorst-Str.");
break;
}
case 105334:
{
returnValue = F("Franz-Senn-Weg");
break;
}
case 105335:
{
returnValue = F("Franz-Sequenc-Weg");
break;
}
case 105336:
{
returnValue = F("Franz-Seraph-Lederer-Str.");
break;
}
case 105337:
{
returnValue = F("Franz-Sester-Str.");
break;
}
case 105338:
{
returnValue = F("Franz-Seuling-Str.");
break;
}
case 105339:
{
returnValue = F("Franz-Sickinger-Str.");
break;
}
case 105340:
{
returnValue = F("Franz-Siebe-Weg");
break;
}
case 105341:
{
returnValue = F("Franz-Sieber-Str.");
break;
}
case 105342:
{
returnValue = F("Franz-Siegele-Weg");
break;
}
case 105343:
{
returnValue = F("Franz-Sievers-Str.");
break;
}
case 105344:
{
returnValue = F("Franz-Sigel-Str.");
break;
}
case 105345:
{
returnValue = F("Franz-Sigel-Weg");
break;
}
case 105346:
{
returnValue = F("Franz-Siglin-Str.");
break;
}
case 105347:
{
returnValue = F("Franz-Sigrist-Str.");
break;
}
case 105348:
{
returnValue = F("Franz-Silies-Str.");
break;
}
case 105349:
{
returnValue = F("Franz-Simmler-Str.");
break;
}
case 105350:
{
returnValue = F("Franz-Sollfrank-Str.");
break;
}
case 105351:
{
returnValue = F("Franz-Sommer-Str.");
break;
}
case 105352:
{
returnValue = F("Franz-Sperber-Str.");
break;
}
case 105353:
{
returnValue = F("Franz-Speth-Str.");
break;
}
case 105354:
{
returnValue = F("Franz-Spiller-Platz");
break;
}
case 105355:
{
returnValue = F("Franz-Stadelmayer-Str.");
break;
}
case 105356:
{
returnValue = F("Franz-Stapf-Str.");
break;
}
case 105357:
{
returnValue = F("Franz-Steinbrecher-Weg");
break;
}
case 105358:
{
returnValue = F("Franz-Steineke-Weg");
break;
}
case 105359:
{
returnValue = F("Franz-Stelzenberger-Str.");
break;
}
case 105360:
{
returnValue = F("Franz-Stelzhamer-Str.");
break;
}
case 105361:
{
returnValue = F("Franz-Stephan-Str.");
break;
}
case 105362:
{
returnValue = F("Franz-Stern-Str.");
break;
}
case 105363:
{
returnValue = F("Franz-Stettmeier-Str.");
break;
}
case 105364:
{
returnValue = F("Franz-Stille-Str.");
break;
}
case 105365:
{
returnValue = F("Franz-Stock-Str.");
break;
}
case 105366:
{
returnValue = F("Franz-Stockbauer-Weg");
break;
}
case 105367:
{
returnValue = F("Franz-Stollwerck-Str.");
break;
}
case 105368:
{
returnValue = F("Franz-Str.r-Str.");
break;
}
case 105369:
{
returnValue = F("Franz-Strauch-Weg");
break;
}
case 105370:
{
returnValue = F("Franz-Striebel-Str.");
break;
}
case 105371:
{
returnValue = F("Franz-Stryck-Str.");
break;
}
case 105372:
{
returnValue = F("Franz-Stumpf-Weg");
break;
}
case 105373:
{
returnValue = F("Franz-Stößl-Str.");
break;
}
case 105374:
{
returnValue = F("Franz-Stützel-Str.");
break;
}
case 105375:
{
returnValue = F("Franz-Susemihl-Str.");
break;
}
case 105376:
{
returnValue = F("Franz-Tacke-Str.");
break;
}
case 105377:
{
returnValue = F("Franz-Terhoeven-Str.");
break;
}
case 105378:
{
returnValue = F("Franz-Thaele-Str.");
break;
}
case 105379:
{
returnValue = F("Franz-Theodor-Strauß-Str.");
break;
}
case 105380:
{
returnValue = F("Franz-Thielenberg-Str.");
break;
}
case 105381:
{
returnValue = F("Franz-Tiefenbruch-Weg");
break;
}
case 105382:
{
returnValue = F("Franz-Tobey-Str.");
break;
}
case 105383:
{
returnValue = F("Franz-Traub-Str.");
break;
}
case 105384:
{
returnValue = F("Franz-Tuczek-Weg");
break;
}
case 105385:
{
returnValue = F("Franz-Töpel-Weg");
break;
}
case 105386:
{
returnValue = F("Franz-Utz-Weg");
break;
}
case 105387:
{
returnValue = F("Franz-Vetter-Str.");
break;
}
case 105388:
{
returnValue = F("Franz-Vietor-Str.");
break;
}
case 105389:
{
returnValue = F("Franz-Vlasdeck-Anlage");
break;
}
case 105390:
{
returnValue = F("Franz-Vogt-Str.");
break;
}
case 105391:
{
returnValue = F("Franz-Volhard-Str.");
break;
}
case 105392:
{
returnValue = F("Franz-Volk-Park");
break;
}
case 105393:
{
returnValue = F("Franz-Volk-Str.");
break;
}
case 105394:
{
returnValue = F("Franz-Voll-Str.");
break;
}
case 105395:
{
returnValue = F("Franz-Von-Papen-Str.");
break;
}
case 105396:
{
returnValue = F("Franz-Vorwerk-Str.");
break;
}
case 105397:
{
returnValue = F("Franz-Vosen-Str.");
break;
}
case 105398:
{
returnValue = F("Franz-Völker-Str.");
break;
}
case 105399:
{
returnValue = F("Franz-Völker-Weg");
break;
}
case 105400:
{
returnValue = F("Franz-Wabler-Str.");
break;
}
case 105401:
{
returnValue = F("Franz-Walchner-Str.");
break;
}
case 105402:
{
returnValue = F("Franz-Waldmann-Str.");
break;
}
case 105403:
{
returnValue = F("Franz-Wallraff-Str.");
break;
}
case 105404:
{
returnValue = F("Franz-Wamich-Str.");
break;
}
case 105405:
{
returnValue = F("Franz-Wandinger-Str.");
break;
}
case 105406:
{
returnValue = F("Franz-Wandl-Str.");
break;
}
case 105407:
{
returnValue = F("Franz-Wartner-Ring");
break;
}
case 105408:
{
returnValue = F("Franz-Wastian-Weg");
break;
}
case 105409:
{
returnValue = F("Franz-Weger-Weg");
break;
}
case 105410:
{
returnValue = F("Franz-Wehrl-Str.");
break;
}
case 105411:
{
returnValue = F("Franz-Wehrstedt-Weg");
break;
}
case 105412:
{
returnValue = F("Franz-Weinrich-Str.");
break;
}
case 105413:
{
returnValue = F("Franz-Weis-Str.");
break;
}
case 105414:
{
returnValue = F("Franz-Weise-Str.");
break;
}
case 105415:
{
returnValue = F("Franz-Weiß-Str.");
break;
}
case 105416:
{
returnValue = F("Franz-Weller-Str.");
break;
}
case 105417:
{
returnValue = F("Franz-Welschof-Str.");
break;
}
case 105418:
{
returnValue = F("Franz-Wendler-Str.");
break;
}
case 105419:
{
returnValue = F("Franz-Wenzel-Str.");
break;
}
case 105420:
{
returnValue = F("Franz-Wenzeler-Str.");
break;
}
case 105421:
{
returnValue = F("Franz-Werfel-Str.");
break;
}
case 105422:
{
returnValue = F("Franz-Werfel-Weg");
break;
}
case 105423:
{
returnValue = F("Franz-Wesener-Str.");
break;
}
case 105424:
{
returnValue = F("Franz-Wessel-Str.");
break;
}
case 105425:
{
returnValue = F("Franz-Wieber-Str.");
break;
}
case 105426:
{
returnValue = F("Franz-Wieland-Str.");
break;
}
case 105427:
{
returnValue = F("Franz-Wieman-Str.");
break;
}
case 105428:
{
returnValue = F("Franz-Wienhold-Str.");
break;
}
case 105429:
{
returnValue = F("Franz-Wienholz-Str.");
break;
}
case 105430:
{
returnValue = F("Franz-Wiesehöfer-Str.");
break;
}
case 105431:
{
returnValue = F("Franz-Wieser-Weg");
break;
}
case 105432:
{
returnValue = F("Franz-Wiesner-Str.");
break;
}
case 105433:
{
returnValue = F("Franz-Wilhelm-Beck-Str.");
break;
}
case 105434:
{
returnValue = F("Franz-Wilking-Str.");
break;
}
case 105435:
{
returnValue = F("Franz-Wimmer-Str.");
break;
}
case 105436:
{
returnValue = F("Franz-Winkeler-Str.");
break;
}
case 105437:
{
returnValue = F("Franz-Winter-Str.");
break;
}
case 105438:
{
returnValue = F("Franz-Winzinger-Weg");
break;
}
case 105439:
{
returnValue = F("Franz-Wisbacher-Str.");
break;
}
case 105440:
{
returnValue = F("Franz-Wittig-Weg");
break;
}
case 105441:
{
returnValue = F("Franz-Wittmann-Gasse");
break;
}
case 105442:
{
returnValue = F("Franz-Wolf-Str.");
break;
}
case 105443:
{
returnValue = F("Franz-Wolters-Platz");
break;
}
case 105444:
{
returnValue = F("Franz-Wunner-Str.");
break;
}
case 105445:
{
returnValue = F("Franz-Wörner-Str.");
break;
}
case 105446:
{
returnValue = F("Franz-Wüllner-Str.");
break;
}
case 105447:
{
returnValue = F("Franz-Würzinger-Str.");
break;
}
case 105448:
{
returnValue = F("Franz-Xaver-Altegger-Str.");
break;
}
case 105449:
{
returnValue = F("Franz-Xaver-Bauer-Str.");
break;
}
case 105450:
{
returnValue = F("Franz-Xaver-Baumann-Str.");
break;
}
case 105451:
{
returnValue = F("Franz-Xaver-Braun-Str.");
break;
}
case 105452:
{
returnValue = F("Franz-Xaver-Brunner-Str.");
break;
}
case 105453:
{
returnValue = F("Franz-Xaver-Böck-Str.");
break;
}
case 105454:
{
returnValue = F("Franz-Xaver-Dentler-Weg");
break;
}
case 105455:
{
returnValue = F("Franz-Xaver-Engelhardt-Str.");
break;
}
case 105456:
{
returnValue = F("Franz-Xaver-Eser-Str.");
break;
}
case 105457:
{
returnValue = F("Franz-Xaver-Feichtmayr-Str.");
break;
}
case 105458:
{
returnValue = F("Franz-Xaver-Graf-Str.");
break;
}
case 105459:
{
returnValue = F("Franz-Xaver-Haberl-Str.");
break;
}
case 105460:
{
returnValue = F("Franz-Xaver-Heilig-Str.");
break;
}
case 105461:
{
returnValue = F("Franz-Xaver-Heizmann-Str.");
break;
}
case 105462:
{
returnValue = F("Franz-Xaver-Hieber-Str.");
break;
}
case 105463:
{
returnValue = F("Franz-Xaver-Honer-Str.");
break;
}
case 105464:
{
returnValue = F("Franz-Xaver-Honold-Str.");
break;
}
case 105465:
{
returnValue = F("Franz-Xaver-Höll-Str.");
break;
}
case 105466:
{
returnValue = F("Franz-Xaver-Keller-Weg");
break;
}
case 105467:
{
returnValue = F("Franz-Xaver-Knabenbauer-Str.");
break;
}
case 105468:
{
returnValue = F("Franz-Xaver-Koller-Str.");
break;
}
case 105469:
{
returnValue = F("Franz-Xaver-Kurländer-Str.");
break;
}
case 105470:
{
returnValue = F("Franz-Xaver-Lang-Str.");
break;
}
case 105471:
{
returnValue = F("Franz-Xaver-Lehner-Weg");
break;
}
case 105472:
{
returnValue = F("Franz-Xaver-Lender-Str.");
break;
}
case 105473:
{
returnValue = F("Franz-Xaver-Loibl-Str.");
break;
}
case 105474:
{
returnValue = F("Franz-Xaver-Mauer-Str.");
break;
}
case 105475:
{
returnValue = F("Franz-Xaver-Metzler-Weg");
break;
}
case 105476:
{
returnValue = F("Franz-Xaver-Mezler-Str.");
break;
}
case 105477:
{
returnValue = F("Franz-Xaver-Neun-Weg");
break;
}
case 105478:
{
returnValue = F("Franz-Xaver-Oexle-Str.");
break;
}
case 105479:
{
returnValue = F("Franz-Xaver-Richter-Str.");
break;
}
case 105480:
{
returnValue = F("Franz-Xaver-Saller-Str.");
break;
}
case 105481:
{
returnValue = F("Franz-Xaver-Schild Weg");
break;
}
case 105482:
{
returnValue = F("Franz-Xaver-Schmädl-Str.");
break;
}
case 105483:
{
returnValue = F("Franz-Xaver-Schuster-Str.");
break;
}
case 105484:
{
returnValue = F("Franz-Xaver-Seiler-Str.");
break;
}
case 105485:
{
returnValue = F("Franz-Xaver-Steber-Str.");
break;
}
case 105486:
{
returnValue = F("Franz-Xaver-Stenzel-Str.");
break;
}
case 105487:
{
returnValue = F("Franz-Xaver-Str.");
break;
}
case 105488:
{
returnValue = F("Franz-Xaver-Uhl-Str.");
break;
}
case 105489:
{
returnValue = F("Franz-Xaver-Unertl-Str.");
break;
}
case 105490:
{
returnValue = F("Franz-Xaver-Wagner-Str.");
break;
}
case 105491:
{
returnValue = F("Franz-Xaver-Witt-Str.");
break;
}
case 105492:
{
returnValue = F("Franz-Xaver-Würf-Str.");
break;
}
case 105493:
{
returnValue = F("Franz-Zang-Str.");
break;
}
case 105494:
{
returnValue = F("Franz-Zebisch-Str.");
break;
}
case 105495:
{
returnValue = F("Franz-Zehendner-Str.");
break;
}
case 105496:
{
returnValue = F("Franz-Zell-Str.");
break;
}
case 105497:
{
returnValue = F("Franz-Ziegler-Str.");
break;
}
case 105498:
{
returnValue = F("Franz-Zielasko-Weg");
break;
}
case 105499:
{
returnValue = F("Franz-Ziwey-Ring");
break;
}
case 105500:
{
returnValue = F("Franz-Zobel-Str.");
break;
}
case 105501:
{
returnValue = F("Franz-sin-Damm");
break;
}
case 105502:
{
returnValue = F("Franz-und-Johann-Wallach-Str.");
break;
}
case 105503:
{
returnValue = F("Franz-van-Kempen-Str.");
break;
}
case 105504:
{
returnValue = F("Franz-von-Assisi-Brücke");
break;
}
case 105505:
{
returnValue = F("Franz-von-Assisi-Platz");
break;
}
case 105506:
{
returnValue = F("Franz-von-Assisi-Str.");
break;
}
case 105507:
{
returnValue = F("Franz-von-Buhl-Str.");
break;
}
case 105508:
{
returnValue = F("Franz-von-Defregger-Str.");
break;
}
case 105509:
{
returnValue = F("Franz-von-Heeren-Str.");
break;
}
case 105510:
{
returnValue = F("Franz-von-Kempis-Weg");
break;
}
case 105511:
{
returnValue = F("Franz-von-Kesseler-Str.");
break;
}
case 105512:
{
returnValue = F("Franz-von-Kobell-Str.");
break;
}
case 105513:
{
returnValue = F("Franz-von-Lenbach-Weg");
break;
}
case 105514:
{
returnValue = F("Franz-von-Liszt-Weg");
break;
}
case 105515:
{
returnValue = F("Franz-von-Miller-Str.");
break;
}
case 105516:
{
returnValue = F("Franz-von-Perfall-Höhe");
break;
}
case 105517:
{
returnValue = F("Franz-von-Reber-Str.");
break;
}
case 105518:
{
returnValue = F("Franz-von-Rinecker-Weg");
break;
}
case 105519:
{
returnValue = F("Franz-von-Roques-Str.");
break;
}
case 105520:
{
returnValue = F("Franz-von-Sales-Str.");
break;
}
case 105521:
{
returnValue = F("Franz-von-Sales-Weg");
break;
}
case 105522:
{
returnValue = F("Franz-von-Schwendi-Str.");
break;
}
case 105523:
{
returnValue = F("Franz-von-Sickingen-Str.");
break;
}
case 105524:
{
returnValue = F("Franz-von-Sickingen-Weg");
break;
}
case 105525:
{
returnValue = F("Franz-von-Stuck-Str.");
break;
}
case 105526:
{
returnValue = F("Franz-von-Taxis-Ring");
break;
}
case 105527:
{
returnValue = F("Franz-von-Welz-Str.");
break;
}
case 105528:
{
returnValue = F("Franz-von-Winckel-Weg");
break;
}
case 105529:
{
returnValue = F("Franz-Öchsle-Str.");
break;
}
case 105530:
{
returnValue = F("Franz-Öhrlein-Str.");
break;
}
case 105531:
{
returnValue = F("Franzberg");
break;
}
case 105532:
{
returnValue = F("Franzburger Chaussee");
break;
}
case 105533:
{
returnValue = F("Franzburger Str.");
break;
}
case 105534:
{
returnValue = F("Franzburger Weg");
break;
}
case 105535:
{
returnValue = F("Franzdorfer Weg");
break;
}
case 105536:
{
returnValue = F("Franze Berg");
break;
}
case 105537:
{
returnValue = F("Franze Päädee");
break;
}
case 105538:
{
returnValue = F("Franzeleweg");
break;
}
case 105539:
{
returnValue = F("Franzen Garten");
break;
}
case 105540:
{
returnValue = F("Franzenbachweg");
break;
}
case 105541:
{
returnValue = F("Franzenbergweg");
break;
}
case 105542:
{
returnValue = F("Franzenburg");
break;
}
case 105543:
{
returnValue = F("Franzenburger Weg");
break;
}
case 105544:
{
returnValue = F("Franzeneschle");
break;
}
case 105545:
{
returnValue = F("Franzengang");
break;
}
case 105546:
{
returnValue = F("Franzengasse");
break;
}
case 105547:
{
returnValue = F("Franzenhausweg");
break;
}
case 105548:
{
returnValue = F("Franzenheimer Str.");
break;
}
case 105549:
{
returnValue = F("Franzenkamp");
break;
}
case 105550:
{
returnValue = F("Franzenklingen");
break;
}
case 105551:
{
returnValue = F("Franzenklingenweg");
break;
}
case 105552:
{
returnValue = F("Franzenmühle");
break;
}
case 105553:
{
returnValue = F("Franzenrain");
break;
}
case 105554:
{
returnValue = F("Franzensbader Str.");
break;
}
case 105555:
{
returnValue = F("Franzensbader Weg");
break;
}
case 105556:
{
returnValue = F("Franzensbaderstr.");
break;
}
case 105557:
{
returnValue = F("Franzensbadstr.");
break;
}
case 105558:
{
returnValue = F("Franzensbadweg");
break;
}
case 105559:
{
returnValue = F("Franzensberg");
break;
}
case 105560:
{
returnValue = F("Franzenseck");
break;
}
case 105561:
{
returnValue = F("Franzensplatz");
break;
}
case 105562:
{
returnValue = F("Franzenstr.");
break;
}
case 105563:
{
returnValue = F("Franzensträßle");
break;
}
case 105564:
{
returnValue = F("Franzenweg");
break;
}
case 105565:
{
returnValue = F("Franzfelder Str.");
break;
}
case 105566:
{
returnValue = F("Franzfelder Weg");
break;
}
case 105567:
{
returnValue = F("Franzfeldstr.");
break;
}
case 105568:
{
returnValue = F("Franzfeldweg");
break;
}
case 105569:
{
returnValue = F("Franzhagener Str.");
break;
}
case 105570:
{
returnValue = F("Franzheimer Ring");
break;
}
case 105571:
{
returnValue = F("Franzheimer Str.");
break;
}
case 105572:
{
returnValue = F("Franzhorner Str.");
break;
}
case 105573:
{
returnValue = F("Franzhäuschenstr.");
break;
}
case 105574:
{
returnValue = F("Franzhöhe");
break;
}
case 105575:
{
returnValue = F("Franzigmark");
break;
}
case 105576:
{
returnValue = F("Franziska Streitel Str.");
break;
}
case 105577:
{
returnValue = F("Franziska-Anneke-Weg");
break;
}
case 105578:
{
returnValue = F("Franziska-Barbara-Str.");
break;
}
case 105579:
{
returnValue = F("Franziska-Berg-Str.");
break;
}
case 105580:
{
returnValue = F("Franziska-Cratz-Str.");
break;
}
case 105581:
{
returnValue = F("Franziska-Günther-Str.");
break;
}
case 105582:
{
returnValue = F("Franziska-Hager-Str.");
break;
}
case 105583:
{
returnValue = F("Franziska-Kessel-Str.");
break;
}
case 105584:
{
returnValue = F("Franziska-Knoke-Str.");
break;
}
case 105585:
{
returnValue = F("Franziska-Luibl-Siedlung");
break;
}
case 105586:
{
returnValue = F("Franziska-Puricelli-Str.");
break;
}
case 105587:
{
returnValue = F("Franziska-Schenk-Ring");
break;
}
case 105588:
{
returnValue = F("Franziska-Schmidt-Weg");
break;
}
case 105589:
{
returnValue = F("Franziska-Spiegel-Str.");
break;
}
case 105590:
{
returnValue = F("Franziska-Spiegel-Weg");
break;
}
case 105591:
{
returnValue = F("Franziska-Streitel-Str.");
break;
}
case 105592:
{
returnValue = F("Franziska-Streitel-Weg");
break;
}
case 105593:
{
returnValue = F("Franziska-Tiburtius-Str.");
break;
}
case 105594:
{
returnValue = F("Franziska-Umfahrer-Str.");
break;
}
case 105595:
{
returnValue = F("Franziska-Witmann-Str.");
break;
}
case 105596:
{
returnValue = F("Franziska-Wittmann-Str.");
break;
}
case 105597:
{
returnValue = F("Franziska-von-Hohenheim-Str.");
break;
}
case 105598:
{
returnValue = F("Franziska-von-Oldershausen-Str.");
break;
}
case 105599:
{
returnValue = F("Franziska-von-Wettstein-Str.");
break;
}
case 105600:
{
returnValue = F("Franziska-zu-Reventlow-Str.");
break;
}
case 105601:
{
returnValue = F("Franziskaner Str.");
break;
}
case 105602:
{
returnValue = F("Franziskaner-Kurgarten");
break;
}
case 105603:
{
returnValue = F("Franziskaneranger");
break;
}
case 105604:
{
returnValue = F("Franziskanergasse");
break;
}
case 105605:
{
returnValue = F("Franziskanerhöhe");
break;
}
case 105606:
{
returnValue = F("Franziskanerinnenstr.");
break;
}
case 105607:
{
returnValue = F("Franziskanerinnenweg");
break;
}
case 105608:
{
returnValue = F("Franziskanerkloster");
break;
}
case 105609:
{
returnValue = F("Franziskanermauer");
break;
}
case 105610:
{
returnValue = F("Franziskanerplatz");
break;
}
case 105611:
{
returnValue = F("Franziskanerstr.");
break;
}
case 105612:
{
returnValue = F("Franziskanerweg");
break;
}
case 105613:
{
returnValue = F("Franziskastr.");
break;
}
case 105614:
{
returnValue = F("Franziskaweg");
break;
}
case 105615:
{
returnValue = F("Franziskus-Ampfele-Str.");
break;
}
case 105616:
{
returnValue = F("Franziskus-Demann-Str.");
break;
}
case 105617:
{
returnValue = F("Franziskus-Quellen-Weg");
break;
}
case 105618:
{
returnValue = F("Franziskusgarten");
break;
}
case 105619:
{
returnValue = F("Franziskusgasse");
break;
}
case 105620:
{
returnValue = F("Franziskushöhe");
break;
}
case 105621:
{
returnValue = F("Franziskuspfad");
break;
}
case 105622:
{
returnValue = F("Franziskusplatz");
break;
}
case 105623:
{
returnValue = F("Franziskusring");
break;
}
case 105624:
{
returnValue = F("Franziskusstr.");
break;
}
case 105625:
{
returnValue = F("Franziskusweg");
break;
}
case 105626:
{
returnValue = F("Franzissenhäuschen");
break;
}
case 105627:
{
returnValue = F("Franzisstr.");
break;
}
case 105628:
{
returnValue = F("Franziusallee");
break;
}
case 105629:
{
returnValue = F("Franziusfeld");
break;
}
case 105630:
{
returnValue = F("Franziusstr.");
break;
}
case 105631:
{
returnValue = F("Franziusweg");
break;
}
case 105632:
{
returnValue = F("Franzjosef-Schneider-Str.");
break;
}
case 105633:
{
returnValue = F("Franzküchenweg");
break;
}
case 105634:
{
returnValue = F("Franzleskopfweg");
break;
}
case 105635:
{
returnValue = F("Franzlsteig");
break;
}
case 105636:
{
returnValue = F("Franzmattweg");
break;
}
case 105637:
{
returnValue = F("Franzosen Weg");
break;
}
case 105638:
{
returnValue = F("Franzosen-Steg");
break;
}
case 105639:
{
returnValue = F("Franzosenberg");
break;
}
case 105640:
{
returnValue = F("Franzosenbergstr.");
break;
}
case 105641:
{
returnValue = F("Franzosenbornweg");
break;
}
case 105642:
{
returnValue = F("Franzosenbrücke");
break;
}
case 105643:
{
returnValue = F("Franzosenbrügg");
break;
}
case 105644:
{
returnValue = F("Franzosenbuckel");
break;
}
case 105645:
{
returnValue = F("Franzosenfichten");
break;
}
case 105646:
{
returnValue = F("Franzosenfuhr");
break;
}
case 105647:
{
returnValue = F("Franzosengasse");
break;
}
case 105648:
{
returnValue = F("Franzosengraben");
break;
}
case 105649:
{
returnValue = F("Franzosengrund");
break;
}
case 105650:
{
returnValue = F("Franzosenhai");
break;
}
case 105651:
{
returnValue = F("Franzosenkamp");
break;
}
case 105652:
{
returnValue = F("Franzosenlochweg");
break;
}
case 105653:
{
returnValue = F("Franzosenpfad");
break;
}
case 105654:
{
returnValue = F("Franzosensand");
break;
}
case 105655:
{
returnValue = F("Franzosenschanze");
break;
}
case 105656:
{
returnValue = F("Franzosenschlagbrücke");
break;
}
case 105657:
{
returnValue = F("Franzosenschlagweg");
break;
}
case 105658:
{
returnValue = F("Franzosensteg");
break;
}
case 105659:
{
returnValue = F("Franzosensteige");
break;
}
case 105660:
{
returnValue = F("Franzosenstr.");
break;
}
case 105661:
{
returnValue = F("Franzosental");
break;
}
case 105662:
{
returnValue = F("Franzosenweg");
break;
}
case 105663:
{
returnValue = F("Franzosenwäldchen");
break;
}
case 105664:
{
returnValue = F("Franzrasen");
break;
}
case 105665:
{
returnValue = F("Franzseeblick");
break;
}
case 105666:
{
returnValue = F("Franzstr.");
break;
}
case 105667:
{
returnValue = F("Französische Allee");
break;
}
case 105668:
{
returnValue = F("Französische Str.");
break;
}
case 105669:
{
returnValue = F("Französische Twiete");
break;
}
case 105670:
{
returnValue = F("Französischer Garten");
break;
}
case 105671:
{
returnValue = F("Französischer Platz");
break;
}
case 105672:
{
returnValue = F("Französischer Weg");
break;
}
case 105673:
{
returnValue = F("Französisches Gäßchen");
break;
}
case 105674:
{
returnValue = F("François-Lachenal-Platz");
break;
}
case 105675:
{
returnValue = F("Françoise-Dolto-Str.");
break;
}
case 105676:
{
returnValue = F("Fraschstr.");
break;
}
case 105677:
{
returnValue = F("Frasdorfer Str.");
break;
}
case 105678:
{
returnValue = F("Frasenbachweg");
break;
}
case 105679:
{
returnValue = F("Fraseweg");
break;
}
case 105680:
{
returnValue = F("Frasselter Str.");
break;
}
case 105681:
{
returnValue = F("Frasselter Weg");
break;
}
case 105682:
{
returnValue = F("Frater-Sabbas-Str.");
break;
}
case 105683:
{
returnValue = F("Fraterherrenstiege");
break;
}
case 105684:
{
returnValue = F("Frath");
break;
}
case 105685:
{
returnValue = F("Fratrelstr.");
break;
}
case 105686:
{
returnValue = F("Fratzenweg");
break;
}
case 105687:
{
returnValue = F("Fratzenwiesenweg");
break;
}
case 105688:
{
returnValue = F("Frau Fichteweg");
break;
}
case 105689:
{
returnValue = F("Frau Holle");
break;
}
case 105690:
{
returnValue = F("Frau Holle Park");
break;
}
case 105691:
{
returnValue = F("Frau Holle Pfad");
break;
}
case 105692:
{
returnValue = F("Frau Meedeweg");
break;
}
case 105693:
{
returnValue = F("Frau Nauses");
break;
}
case 105694:
{
returnValue = F("Frau-Clara-Str.");
break;
}
case 105695:
{
returnValue = F("Frau-Ennichen-Helmer");
break;
}
case 105696:
{
returnValue = F("Frau-Ennichen-Helmer-Weg");
break;
}
case 105697:
{
returnValue = F("Frau-Harke-Sagenpfad");
break;
}
case 105698:
{
returnValue = F("Frau-Holle-Hof");
break;
}
case 105699:
{
returnValue = F("Frau-Holle-Pfad");
break;
}
case 105700:
{
returnValue = F("Frau-Holle-Str.");
break;
}
case 105701:
{
returnValue = F("Frau-Holle-Weg");
break;
}
case 105702:
{
returnValue = F("Frau-Luna-Str.");
break;
}
case 105703:
{
returnValue = F("Frau-Sophienhütte");
break;
}
case 105704:
{
returnValue = F("Frau-von-Salis-Str.");
break;
}
case 105705:
{
returnValue = F("Fraubachtal");
break;
}
case 105706:
{
returnValue = F("Fraubachtalstr.");
break;
}
case 105707:
{
returnValue = F("Frauberg");
break;
}
case 105708:
{
returnValue = F("Frauen-Platz");
break;
}
case 105709:
{
returnValue = F("Frauenackerweg");
break;
}
case 105710:
{
returnValue = F("Frauenalber Pfad");
break;
}
case 105711:
{
returnValue = F("Frauenalber Str.");
break;
}
case 105712:
{
returnValue = F("Frauenalpweg");
break;
}
case 105713:
{
returnValue = F("Frauenanger");
break;
}
case 105714:
{
returnValue = F("Frauenauer Str.");
break;
}
case 105715:
{
returnValue = F("Frauenauracher Str.");
break;
}
case 105716:
{
returnValue = F("Frauenbach");
break;
}
case 105717:
{
returnValue = F("Frauenbach III");
break;
}
case 105718:
{
returnValue = F("Frauenbachstr.");
break;
}
case 105719:
{
returnValue = F("Frauenbachsweg");
break;
}
case 105720:
{
returnValue = F("Frauenberg");
break;
}
case 105721:
{
returnValue = F("Frauenberger Str.");
break;
}
case 105722:
{
returnValue = F("Frauenberger Weg");
break;
}
case 105723:
{
returnValue = F("Frauenberggasse");
break;
}
case 105724:
{
returnValue = F("Frauenbergstr.");
break;
}
case 105725:
{
returnValue = F("Frauenbergweg");
break;
}
case 105726:
{
returnValue = F("Frauenbiburger Str.");
break;
}
case 105727:
{
returnValue = F("Frauenboden");
break;
}
case 105728:
{
returnValue = F("Frauenbreitunger Weg");
break;
}
case 105729:
{
returnValue = F("Frauenbrunnengasse");
break;
}
case 105730:
{
returnValue = F("Frauenbrunnenstr.");
break;
}
case 105731:
{
returnValue = F("Frauenbrunnerstr.");
break;
}
case 105732:
{
returnValue = F("Frauenbrunnerweg");
break;
}
case 105733:
{
returnValue = F("Frauenbrunnstr.");
break;
}
case 105734:
{
returnValue = F("Frauenbründlstr.");
break;
}
case 105735:
{
returnValue = F("Frauenbrünnlstr.");
break;
}
case 105736:
{
returnValue = F("Frauenburger Str.");
break;
}
case 105737:
{
returnValue = F("Frauenburgstr.");
break;
}
case 105738:
{
returnValue = F("Frauenbörner Str.");
break;
}
case 105739:
{
returnValue = F("Frauenbühlstr.");
break;
}
case 105740:
{
returnValue = F("Frauendamm");
break;
}
case 105741:
{
returnValue = F("Frauendoblstr.");
break;
}
case 105742:
{
returnValue = F("Frauendorf");
break;
}
case 105743:
{
returnValue = F("Frauendorfer Hauptstr.");
break;
}
case 105744:
{
returnValue = F("Frauendorfer Str.");
break;
}
case 105745:
{
returnValue = F("Frauendorfer Weg");
break;
}
case 105746:
{
returnValue = F("Frauendorferstr.");
break;
}
case 105747:
{
returnValue = F("Frauendorferweg");
break;
}
case 105748:
{
returnValue = F("Fraueneck");
break;
}
case 105749:
{
returnValue = F("Fraueneichweg");
break;
}
case 105750:
{
returnValue = F("Frauenfarnweg");
break;
}
case 105751:
{
returnValue = F("Frauenfeld");
break;
}
case 105752:
{
returnValue = F("Frauenfelder Weg");
break;
}
case 105753:
{
returnValue = F("Frauenfeldstr.");
break;
}
case 105754:
{
returnValue = F("Frauenfelsstr.");
break;
}
case 105755:
{
returnValue = F("Frauengartenring");
break;
}
case 105756:
{
returnValue = F("Frauengartenstr.");
break;
}
case 105757:
{
returnValue = F("Frauengasse");
break;
}
case 105758:
{
returnValue = F("Frauengraben");
break;
}
case 105759:
{
returnValue = F("Frauengrund");
break;
}
case 105760:
{
returnValue = F("Frauenhaarbach");
break;
}
case 105761:
{
returnValue = F("Frauenhagen");
break;
}
case 105762:
{
returnValue = F("Frauenhagener Str.");
break;
}
case 105763:
{
returnValue = F("Frauenhagener Weg");
break;
}
case 105764:
{
returnValue = F("Frauenhainer Hauptstr.");
break;
}
case 105765:
{
returnValue = F("Frauenhainer Str.");
break;
}
case 105766:
{
returnValue = F("Frauenhainer Weg");
break;
}
case 105767:
{
returnValue = F("Frauenhalde");
break;
}
case 105768:
{
returnValue = F("Frauenhauweg");
break;
}
case 105769:
{
returnValue = F("Frauenhoek");
break;
}
case 105770:
{
returnValue = F("Frauenhof");
break;
}
case 105771:
{
returnValue = F("Frauenhofenerstr.");
break;
}
case 105772:
{
returnValue = F("Frauenhofer Str.");
break;
}
case 105773:
{
returnValue = F("Frauenhofer Weg");
break;
}
case 105774:
{
returnValue = F("Frauenhoferstr.");
break;
}
case 105775:
{
returnValue = F("Frauenhofner Str.");
break;
}
case 105776:
{
returnValue = F("Frauenholz");
break;
}
case 105777:
{
returnValue = F("Frauenholzstr.");
break;
}
case 105778:
{
returnValue = F("Frauenholzweg");
break;
}
case 105779:
{
returnValue = F("Frauenhorststr.");
break;
}
case 105780:
{
returnValue = F("Frauenhäusl");
break;
}
case 105781:
{
returnValue = F("Frauenkau");
break;
}
case 105782:
{
returnValue = F("Frauenkirchhof");
break;
}
case 105783:
{
returnValue = F("Frauenkirchplatz");
break;
}
case 105784:
{
returnValue = F("Frauenkirchsiedlung");
break;
}
case 105785:
{
returnValue = F("Frauenkirchstr.");
break;
}
case 105786:
{
returnValue = F("Frauenkirchweg");
break;
}
case 105787:
{
returnValue = F("Frauenklingenweg");
break;
}
case 105788:
{
returnValue = F("Frauenknechtstr.");
break;
}
case 105789:
{
returnValue = F("Frauenkroner Str.");
break;
}
case 105790:
{
returnValue = F("Frauenkroner Weg");
break;
}
case 105791:
{
returnValue = F("Frauenlandplatz");
break;
}
case 105792:
{
returnValue = F("Frauenlandstr.");
break;
}
case 105793:
{
returnValue = F("Frauenlehnsweg");
break;
}
case 105794:
{
returnValue = F("Frauenleite");
break;
}
case 105795:
{
returnValue = F("Frauenlobplatz");
break;
}
case 105796:
{
returnValue = F("Frauenlobstr.");
break;
}
case 105797:
{
returnValue = F("Frauenlochweg");
break;
}
case 105798:
{
returnValue = F("Frauenländerstr.");
break;
}
case 105799:
{
returnValue = F("Frauenmantelweg");
break;
}
case 105800:
{
returnValue = F("Frauenmarker Str.");
break;
}
case 105801:
{
returnValue = F("Frauenmarkt");
break;
}
case 105802:
{
returnValue = F("Frauenmatt");
break;
}
case 105803:
{
returnValue = F("Frauenmühlstr.");
break;
}
case 105804:
{
returnValue = F("Frauenpfad");
break;
}
case 105805:
{
returnValue = F("Frauenplan");
break;
}
case 105806:
{
returnValue = F("Frauenplatz");
break;
}
case 105807:
{
returnValue = F("Frauenpointstr.");
break;
}
case 105808:
{
returnValue = F("Frauenrain");
break;
}
case 105809:
{
returnValue = F("Frauenrainer Str.");
break;
}
case 105810:
{
returnValue = F("Frauenrainer Weg");
break;
}
case 105811:
{
returnValue = F("Frauenrather Str.");
break;
}
case 105812:
{
returnValue = F("Frauenreiter Weg");
break;
}
case 105813:
{
returnValue = F("Frauenreuth");
break;
}
case 105814:
{
returnValue = F("Frauenreuther Str.");
break;
}
case 105815:
{
returnValue = F("Frauenrichter Dorfplatz");
break;
}
case 105816:
{
returnValue = F("Frauenrichter Str.");
break;
}
case 105817:
{
returnValue = F("Frauenried");
break;
}
case 105818:
{
returnValue = F("Frauenriedhauser Str.");
break;
}
case 105819:
{
returnValue = F("Frauenring");
break;
}
case 105820:
{
returnValue = F("Frauenrodestr.");
break;
}
case 105821:
{
returnValue = F("Frauenrötchen");
break;
}
case 105822:
{
returnValue = F("Frauensattlinger Str.");
break;
}
case 105823:
{
returnValue = F("Frauenschlägerstr.");
break;
}
case 105824:
{
returnValue = F("Frauenschuhstr.");
break;
}
case 105825:
{
returnValue = F("Frauenschuhweg");
break;
}
case 105826:
{
returnValue = F("Frauenschulstr.");
break;
}
case 105827:
{
returnValue = F("Frauenseer Str.");
break;
}
case 105828:
{
returnValue = F("Frauenseestr.");
break;
}
case 105829:
{
returnValue = F("Frauensiek");
break;
}
case 105830:
{
returnValue = F("Frauensteigstr.");
break;
}
case 105831:
{
returnValue = F("Frauensteigweg");
break;
}
case 105832:
{
returnValue = F("Frauenstein");
break;
}
case 105833:
{
returnValue = F("Frauensteiner Marktsteig");
break;
}
case 105834:
{
returnValue = F("Frauensteiner Str.");
break;
}
case 105835:
{
returnValue = F("Frauensteiner Str/Wendeschleife");
break;
}
case 105836:
{
returnValue = F("Frauensteiner Weg");
break;
}
case 105837:
{
returnValue = F("Frauensteinstr.");
break;
}
case 105838:
{
returnValue = F("Frauensteinweg");
break;
}
case 105839:
{
returnValue = F("Frauenstelle");
break;
}
case 105840:
{
returnValue = F("Frauenstetter Str.");
break;
}
case 105841:
{
returnValue = F("Frauenstr.");
break;
}
case 105842:
{
returnValue = F("Frauenstuhlweg");
break;
}
case 105843:
{
returnValue = F("Frauenstätt");
break;
}
case 105844:
{
returnValue = F("Frauental");
break;
}
case 105845:
{
returnValue = F("Frauentalstr.");
break;
}
case 105846:
{
returnValue = F("Frauenteichstr.");
break;
}
case 105847:
{
returnValue = F("Frauenteichweg");
break;
}
case 105848:
{
returnValue = F("Frauenthal");
break;
}
case 105849:
{
returnValue = F("Frauenthaler Str.");
break;
}
case 105850:
{
returnValue = F("Frauentor");
break;
}
case 105851:
{
returnValue = F("Frauentorplatz");
break;
}
case 105852:
{
returnValue = F("Frauentorstr.");
break;
}
case 105853:
{
returnValue = F("Frauentorweg");
break;
}
case 105854:
{
returnValue = F("Frauentrautgasse");
break;
}
case 105855:
{
returnValue = F("Frauenvils");
break;
}
case 105856:
{
returnValue = F("Frauenwalder Str.");
break;
}
case 105857:
{
returnValue = F("Frauenwaldstr.");
break;
}
case 105858:
{
returnValue = F("Frauenwaldweg");
break;
}
case 105859:
{
returnValue = F("Frauenweg");
break;
}
case 105860:
{
returnValue = F("Frauenweiherstr.");
break;
}
case 105861:
{
returnValue = F("Frauenweiherweg");
break;
}
case 105862:
{
returnValue = F("Frauenweilerstr.");
break;
}
case 105863:
{
returnValue = F("Frauenweilerweg");
break;
}
case 105864:
{
returnValue = F("Frauenwies");
break;
}
case 105865:
{
returnValue = F("Frauenwiese");
break;
}
case 105866:
{
returnValue = F("Frauenwiesen");
break;
}
case 105867:
{
returnValue = F("Frauenwiesenweg");
break;
}
case 105868:
{
returnValue = F("Frauenwinkel");
break;
}
case 105869:
{
returnValue = F("Frauenwälder Str.");
break;
}
case 105870:
{
returnValue = F("Frauenzell");
break;
}
case 105871:
{
returnValue = F("Frauenzeller Str.");
break;
}
case 105872:
{
returnValue = F("Frauenzellstr.");
break;
}
case 105873:
{
returnValue = F("Frauenzimmerner Str.");
break;
}
case 105874:
{
returnValue = F("Frauenäcker");
break;
}
case 105875:
{
returnValue = F("Frauenäckerstr.");
break;
}
case 105876:
{
returnValue = F("Frauenöder-Linie");
break;
}
case 105877:
{
returnValue = F("Frauhohlwiesenweg");
break;
}
case 105878:
{
returnValue = F("Fraukeweg");
break;
}
case 105879:
{
returnValue = F("Fraukirch");
break;
}
case 105880:
{
returnValue = F("Fraukircher Str.");
break;
}
case 105881:
{
returnValue = F("Fraukircher Weg");
break;
}
case 105882:
{
returnValue = F("Fraulauterner Str.");
break;
}
case 105883:
{
returnValue = F("Fraulund");
break;
}
case 105884:
{
returnValue = F("Fraulunder Weg");
break;
}
case 105885:
{
returnValue = F("Fraumersbergstr.");
break;
}
case 105886:
{
returnValue = F("Fraumünsterstr.");
break;
}
case 105887:
{
returnValue = F("Fraunbergerstr.");
break;
}
case 105888:
{
returnValue = F("Fraunbergerweg");
break;
}
case 105889:
{
returnValue = F("Fraunbergstr.");
break;
}
case 105890:
{
returnValue = F("Fraunbergweg");
break;
}
case 105891:
{
returnValue = F("Fraundienststr.");
break;
}
case 105892:
{
returnValue = F("Fraundorf");
break;
}
case 105893:
{
returnValue = F("Fraundorferstr.");
break;
}
case 105894:
{
returnValue = F("Fraunhofer Str.");
break;
}
case 105895:
{
returnValue = F("Fraunhofer-Platz");
break;
}
case 105896:
{
returnValue = F("Fraunhofer-Str.");
break;
}
case 105897:
{
returnValue = F("Fraunhoferplatz");
break;
}
case 105898:
{
returnValue = F("Fraunhoferring");
break;
}
case 105899:
{
returnValue = F("Fraunhoferstr.");
break;
}
case 105900:
{
returnValue = F("Fraunhoferweg");
break;
}
case 105901:
{
returnValue = F("Fraureuther Steig");
break;
}
case 105902:
{
returnValue = F("Fraureuther Str.");
break;
}
case 105903:
{
returnValue = F("Fraurombacher Str.");
break;
}
case 105904:
{
returnValue = F("Frauwalder Str.");
break;
}
case 105905:
{
returnValue = F("Frauwalder Weg");
break;
}
case 105906:
{
returnValue = F("Frauweilerring");
break;
}
case 105907:
{
returnValue = F("Frauwiesenweg");
break;
}
case 105908:
{
returnValue = F("Frauwüllesheimer Str.");
break;
}
case 105909:
{
returnValue = F("Fraß-Geräumt");
break;
}
case 105910:
{
returnValue = F("Fraßhauser Str.");
break;
}
case 105911:
{
returnValue = F("Fraßweg");
break;
}
case 105912:
{
returnValue = F("Freankensteuerweg");
break;
}
case 105913:
{
returnValue = F("Frebergstr.");
break;
}
case 105914:
{
returnValue = F("Frebershauser Str.");
break;
}
case 105915:
{
returnValue = F("Frebershäuser Str.");
break;
}
case 105916:
{
returnValue = F("Freche Flitzer");
break;
}
case 105917:
{
returnValue = F("Frechener Str.");
break;
}
case 105918:
{
returnValue = F("Frechener Weg");
break;
}
case 105919:
{
returnValue = F("Frechenklausbachbrücke");
break;
}
case 105920:
{
returnValue = F("Frechenseeweg");
break;
}
case 105921:
{
returnValue = F("Frecher-Fasanen-Weg");
break;
}
case 105922:
{
returnValue = F("Frechholzhauser Str.");
break;
}
case 105923:
{
returnValue = F("Frechter Str.");
break;
}
case 105924:
{
returnValue = F("Frechtweg");
break;
}
case 105925:
{
returnValue = F("Freckenfelder Allee");
break;
}
case 105926:
{
returnValue = F("Freckenhausen");
break;
}
case 105927:
{
returnValue = F("Freckenhorster Str.");
break;
}
case 105928:
{
returnValue = F("Freckenhorster Wall");
break;
}
case 105929:
{
returnValue = F("Freckhausener Str.");
break;
}
case 105930:
{
returnValue = F("Fred-Bieser-Str.");
break;
}
case 105931:
{
returnValue = F("Fred-Bishop-Weg");
break;
}
case 105932:
{
returnValue = F("Fred-Endrikat-Str.");
break;
}
case 105933:
{
returnValue = F("Fred-Frankenberger-Str.");
break;
}
case 105934:
{
returnValue = F("Fred-Hahn-Str.");
break;
}
case 105935:
{
returnValue = F("Fred-Hill-Weg");
break;
}
case 105936:
{
returnValue = F("Fred-Joachim-Schoeps-Str.");
break;
}
case 105937:
{
returnValue = F("Fred-Josef-Str.");
break;
}
case 105938:
{
returnValue = F("Fred-Joseph-Platz");
break;
}
case 105939:
{
returnValue = F("Fred-Meier Platz");
break;
}
case 105940:
{
returnValue = F("Fred-Oertel-Bürgerpark");
break;
}
case 105941:
{
returnValue = F("Fred-Raymond-Weg");
break;
}
case 105942:
{
returnValue = F("Fred-Schäfer-Str.");
break;
}
case 105943:
{
returnValue = F("Fred-Weickert-Str.");
break;
}
case 105944:
{
returnValue = F("Fred-West-Str.");
break;
}
case 105945:
{
returnValue = F("Freda-Wuesthoff-Str.");
break;
}
case 105946:
{
returnValue = F("Freda-Wuesthoff-Weg");
break;
}
case 105947:
{
returnValue = F("Freda-Wüsthoff-Str.");
break;
}
case 105948:
{
returnValue = F("Fredde");
break;
}
case 105949:
{
returnValue = F("Freddeweg");
break;
}
case 105950:
{
returnValue = F("Fredeborgstr.");
break;
}
case 105951:
{
returnValue = F("Fredeburger Str.");
break;
}
case 105952:
{
returnValue = F("Fredeburger Weg");
break;
}
case 105953:
{
returnValue = F("Fredegasse");
break;
}
case 105954:
{
returnValue = F("Fredegrasstr.");
break;
}
case 105955:
{
returnValue = F("Fredeholzweg");
break;
}
case 105956:
{
returnValue = F("Fredelaker Str.");
break;
}
case 105957:
{
returnValue = F("Fredelsloher Str.");
break;
}
case 105958:
{
returnValue = F("Fredemanns Kamp");
break;
}
case 105959:
{
returnValue = F("Fredenbecker Str.");
break;
}
case 105960:
{
returnValue = F("Fredenbecker Weg");
break;
}
case 105961:
{
returnValue = F("Fredenbruch");
break;
}
case 105962:
{
returnValue = F("Fredener Str.");
break;
}
case 105963:
{
returnValue = F("Fredenhagenweg");
break;
}
case 105964:
{
returnValue = F("Fredenhorstweg");
break;
}
case 105965:
{
returnValue = F("Fredenkamp");
break;
}
case 105966:
{
returnValue = F("Fredenplan");
break;
}
case 105967:
{
returnValue = F("Fredenseck");
break;
}
case 105968:
{
returnValue = F("Fredenstiege");
break;
}
case 105969:
{
returnValue = F("Fredenwalder Weg");
break;
}
case 105970:
{
returnValue = F("Frederic-Chopin-Str.");
break;
}
case 105971:
{
returnValue = F("Frederic-Chopin-Weg");
break;
}
case 105972:
{
returnValue = F("Frederic-Joliot-Curie-Str.");
break;
}
case 105973:
{
returnValue = F("Fredericia-Ufer");
break;
}
case 105974:
{
returnValue = F("Frederick-Schumacher-Str.");
break;
}
case 105975:
{
returnValue = F("Frederick-Stock-Str.");
break;
}
case 105976:
{
returnValue = F("Frederickstr.");
break;
}
case 105977:
{
returnValue = F("Frederikring");
break;
}
case 105978:
{
returnValue = F("Frederikshavner Str.");
break;
}
case 105979:
{
returnValue = F("Frederingshäuser Str.");
break;
}
case 105980:
{
returnValue = F("Fredersdorfer Chaussee");
break;
}
case 105981:
{
returnValue = F("Fredersdorfer Dorfstr.");
break;
}
case 105982:
{
returnValue = F("Fredersdorfer Str.");
break;
}
case 105983:
{
returnValue = F("Fredersdorfer Weg");
break;
}
case 105984:
{
returnValue = F("Fredershäuser Weg");
break;
}
case 105985:
{
returnValue = F("Fredesdorfer Str.");
break;
}
case 105986:
{
returnValue = F("Fredesdorfer Weg");
break;
}
case 105987:
{
returnValue = F("Fredestr.");
break;
}
case 105988:
{
returnValue = F("Fredholt");
break;
}
case 105989:
{
returnValue = F("Freeden");
break;
}
case 105990:
{
returnValue = F("Freedom Drive");
break;
}
case 105991:
{
returnValue = F("Freeheit");
break;
}
case 105992:
{
returnValue = F("Freek-Simeons-Weg");
break;
}
case 105993:
{
returnValue = F("Freepsumer Coldewehrstr.");
break;
}
case 105994:
{
returnValue = F("Freepsumer Landstr.");
break;
}
case 105995:
{
returnValue = F("Freepsumer Reihe");
break;
}
case 105996:
{
returnValue = F("Freerbruchstr.");
break;
}
case 105997:
{
returnValue = F("Freerk-Simeons-Weg");
break;
}
case 105998:
{
returnValue = F("Freerkedamm");
break;
}
case 105999:
{
returnValue = F("Freerkingweg");
break;
}
case 106000:
{
returnValue = F("Freesdorf");
break;
}
case 106001:
{
returnValue = F("Freese-Siedlung");
break;
}
case 106002:
{
returnValue = F("Freesebusch");
break;
}
case 106003:
{
returnValue = F("Freesen Krog");
break;
}
case 106004:
{
returnValue = F("Freesenberg");
break;
}
case 106005:
{
returnValue = F("Freesenburg");
break;
}
case 106006:
{
returnValue = F("Freesendamm");
break;
}
case 106007:
{
returnValue = F("Freesendorfer Str.");
break;
}
case 106008:
{
returnValue = F("Freesenhof");
break;
}
case 106009:
{
returnValue = F("Freesenkamp");
break;
}
case 106010:
{
returnValue = F("Freesenkoog");
break;
}
case 106011:
{
returnValue = F("Freesenmoor");
break;
}
case 106012:
{
returnValue = F("Freesenort");
break;
}
case 106013:
{
returnValue = F("Freesenweg");
break;
}
case 106014:
{
returnValue = F("Freesestr.");
break;
}
case 106015:
{
returnValue = F("Freeseweg");
break;
}
case 106016:
{
returnValue = F("Freesienstr.");
break;
}
case 106017:
{
returnValue = F("Freesienweg");
break;
}
case 106018:
{
returnValue = F("Freeslandstr.");
break;
}
case 106019:
{
returnValue = F("Freester Str.");
break;
}
case 106020:
{
returnValue = F("Freestot");
break;
}
case 106021:
{
returnValue = F("Freesweg");
break;
}
case 106022:
{
returnValue = F("Freeswinkel");
break;
}
case 106023:
{
returnValue = F("Freeweid");
break;
}
case 106024:
{
returnValue = F("Fregattenstr.");
break;
}
case 106025:
{
returnValue = F("Fregattenweg");
break;
}
case 106026:
{
returnValue = F("Fregestr.");
break;
}
case 106027:
{
returnValue = F("Frehenbergstr.");
break;
}
case 106028:
{
returnValue = F("Frehner Allee");
break;
}
case 106029:
{
returnValue = F("Frehner Damm");
break;
}
case 106030:
{
returnValue = F("Frehner Weg");
break;
}
case 106031:
{
returnValue = F("Frehorster Str.");
break;
}
case 106032:
{
returnValue = F("Frei bis Behler Haisl");
break;
}
case 106033:
{
returnValue = F("Frei im Felde");
break;
}
case 106034:
{
returnValue = F("Freiackerstr.");
break;
}
case 106035:
{
returnValue = F("Freiackerweg");
break;
}
case 106036:
{
returnValue = F("Freialdenhovener Weg");
break;
}
case 106037:
{
returnValue = F("Freiamt");
break;
}
case 106038:
{
returnValue = F("Freiarche");
break;
}
case 106039:
{
returnValue = F("Freiastr.");
break;
}
case 106040:
{
returnValue = F("Freiatzenbacher Str.");
break;
}
case 106041:
{
returnValue = F("Freiatzenbacher Weg");
break;
}
case 106042:
{
returnValue = F("Freiaustr.");
break;
}
case 106043:
{
returnValue = F("Freibachstr.");
break;
}
case 106044:
{
returnValue = F("Freibachtal");
break;
}
case 106045:
{
returnValue = F("Freibad");
break;
}
case 106046:
{
returnValue = F("Freibad Allendorf");
break;
}
case 106047:
{
returnValue = F("Freibad Bad Iburg");
break;
}
case 106048:
{
returnValue = F("Freibad Baggersee");
break;
}
case 106049:
{
returnValue = F("Freibad Degersee");
break;
}
case 106050:
{
returnValue = F("Freibad Ettingshausen");
break;
}
case 106051:
{
returnValue = F("Freibad Feudingen");
break;
}
case 106052:
{
returnValue = F("Freibad Freudenbach");
break;
}
case 106053:
{
returnValue = F("Freibad Gerbstedt");
break;
}
case 106054:
{
returnValue = F("Freibad Gladenbach");
break;
}
case 106055:
{
returnValue = F("Freibad Großköllnbach");
break;
}
case 106056:
{
returnValue = F("Freibad Hänigsen");
break;
}
case 106057:
{
returnValue = F("Freibad Höfen");
break;
}
case 106058:
{
returnValue = F("Freibad Itzehoe");
break;
}
case 106059:
{
returnValue = F("Freibad Jahnplatz");
break;
}
case 106060:
{
returnValue = F("Freibad Kalmitbad");
break;
}
case 106061:
{
returnValue = F("Freibad Laggenbeck");
break;
}
case 106062:
{
returnValue = F("Freibad Landau");
break;
}
case 106063:
{
returnValue = F("Freibad Lengefeld");
break;
}
case 106064:
{
returnValue = F("Freibad Linden");
break;
}
case 106065:
{
returnValue = F("Freibad Ludwigsstadt");
break;
}
case 106066:
{
returnValue = F("Freibad Marktgölitz");
break;
}
case 106067:
{
returnValue = F("Freibad Markwasen");
break;
}
case 106068:
{
returnValue = F("Freibad Medenbach");
break;
}
case 106069:
{
returnValue = F("Freibad Moisling");
break;
}
case 106070:
{
returnValue = F("Freibad Neuenkruge");
break;
}
case 106071:
{
returnValue = F("Freibad Neukirchen");
break;
}
case 106072:
{
returnValue = F("Freibad Oberbobritzsch");
break;
}
case 106073:
{
returnValue = F("Freibad Oberharmersbach");
break;
}
case 106074:
{
returnValue = F("Freibad Ockstadt");
break;
}
case 106075:
{
returnValue = F("Freibad Oßmannstedt");
break;
}
case 106076:
{
returnValue = F("Freibad Poppenhausen");
break;
}
case 106077:
{
returnValue = F("Freibad Rödinghausen");
break;
}
case 106078:
{
returnValue = F("Freibad Schlutup");
break;
}
case 106079:
{
returnValue = F("Freibad Schwaigern");
break;
}
case 106080:
{
returnValue = F("Freibad Spiesel");
break;
}
case 106081:
{
returnValue = F("Freibad Steinbach");
break;
}
case 106082:
{
returnValue = F("Freibad Tannenberg");
break;
}
case 106083:
{
returnValue = F("Freibad Thüngersheim");
break;
}
case 106084:
{
returnValue = F("Freibad Traisa");
break;
}
case 106085:
{
returnValue = F("Freibad Unterrombach");
break;
}
case 106086:
{
returnValue = F("Freibad Wallefeld");
break;
}
case 106087:
{
returnValue = F("Freibad Welper");
break;
}
case 106088:
{
returnValue = F("Freibad Wüstenrot");
break;
}
case 106089:
{
returnValue = F("Freibad am Willersinnweiher");
break;
}
case 106090:
{
returnValue = F("Freibad Ötisheim");
break;
}
case 106091:
{
returnValue = F("Freibadanlage der Gemeinde Hohenlockstedt");
break;
}
case 106092:
{
returnValue = F("Freibadstr.");
break;
}
case 106093:
{
returnValue = F("Freibadtalstr.");
break;
}
case 106094:
{
returnValue = F("Freibadweg");
break;
}
case 106095:
{
returnValue = F("Freibauerngasse");
break;
}
case 106096:
{
returnValue = F("Freibauernstr.");
break;
}
case 106097:
{
returnValue = F("Freiberg");
break;
}
case 106098:
{
returnValue = F("Freiberg, Donatsring/Meißner Tor");
break;
}
case 106099:
{
returnValue = F("Freiberg-am-Neckar-Str.");
break;
}
case 106100:
{
returnValue = F("Freiberger Platz");
break;
}
case 106101:
{
returnValue = F("Freiberger Steig");
break;
}
case 106102:
{
returnValue = F("Freiberger Str.");
break;
}
case 106103:
{
returnValue = F("Freiberger Str. 23");
break;
}
case 106104:
{
returnValue = F("Freiberger Weg");
break;
}
case 106105:
{
returnValue = F("Freiberger-Platz");
break;
}
case 106106:
{
returnValue = F("Freibergerstr.");
break;
}
case 106107:
{
returnValue = F("Freibergsee");
break;
}
case 106108:
{
returnValue = F("Freibergstr.");
break;
}
case 106109:
{
returnValue = F("Freibergweg");
break;
}
case 106110:
{
returnValue = F("Freibeuterweg");
break;
}
case 106111:
{
returnValue = F("Freibuck");
break;
}
case 106112:
{
returnValue = F("Freiburger Allee");
break;
}
case 106113:
{
returnValue = F("Freiburger Landstr.");
break;
}
case 106114:
{
returnValue = F("Freiburger Str.");
break;
}
case 106115:
{
returnValue = F("Freiburger Weg");
break;
}
case 106116:
{
returnValue = F("Freiburgstr.");
break;
}
case 106117:
{
returnValue = F("Freiburgweg");
break;
}
case 106118:
{
returnValue = F("Freibühl");
break;
}
case 106119:
{
returnValue = F("Freibühlstr.");
break;
}
case 106120:
{
returnValue = F("Freibündstr.");
break;
}
case 106121:
{
returnValue = F("Freibürgleweg");
break;
}
case 106122:
{
returnValue = F("Freidhof");
break;
}
case 106123:
{
returnValue = F("Freidhofsgasse");
break;
}
case 106124:
{
returnValue = F("Freidlinger Str.");
break;
}
case 106125:
{
returnValue = F("Freidorfer Str.");
break;
}
case 106126:
{
returnValue = F("Freidorfer Weg");
break;
}
case 106127:
{
returnValue = F("Freidorfstr.");
break;
}
case 106128:
{
returnValue = F("Freidrich-Schlegel-Weg");
break;
}
case 106129:
{
returnValue = F("Freie Bauernstr.");
break;
}
case 106130:
{
returnValue = F("Freie Bitze");
break;
}
case 106131:
{
returnValue = F("Freie Buschstr.");
break;
}
case 106132:
{
returnValue = F("Freie Feldlage");
break;
}
case 106133:
{
returnValue = F("Freie Flur");
break;
}
case 106134:
{
returnValue = F("Freie Lande");
break;
}
case 106135:
{
returnValue = F("Freie Reichsstr.");
break;
}
case 106136:
{
returnValue = F("Freie Scholle");
break;
}
case 106137:
{
returnValue = F("Freie Str.");
break;
}
case 106138:
{
returnValue = F("Freie-Turner-Platz");
break;
}
case 106139:
{
returnValue = F("Freie-Vogel-Str.");
break;
}
case 106140:
{
returnValue = F("Freielsbach");
break;
}
case 106141:
{
returnValue = F("Freien");
break;
}
case 106142:
{
returnValue = F("Freien Breitsweg");
break;
}
case 106143:
{
returnValue = F("Freienberg");
break;
}
case 106144:
{
returnValue = F("Freienbornstr.");
break;
}
case 106145:
{
returnValue = F("Freiendahler Weg");
break;
}
case 106146:
{
returnValue = F("Freienfelde");
break;
}
case 106147:
{
returnValue = F("Freienfelder Weg");
break;
}
case 106148:
{
returnValue = F("Freienfeldweg");
break;
}
case 106149:
{
returnValue = F("Freienfelser Str.");
break;
}
case 106150:
{
returnValue = F("Freiengericht");
break;
}
case 106151:
{
returnValue = F("Freiengründer Str.");
break;
}
case 106152:
{
returnValue = F("Freienhagen");
break;
}
case 106153:
{
returnValue = F("Freienhagener Str.");
break;
}
case 106154:
{
returnValue = F("Freienhagener Weg");
break;
}
case 106155:
{
returnValue = F("Freienhalle");
break;
}
case 106156:
{
returnValue = F("Freienhof");
break;
}
case 106157:
{
returnValue = F("Freienhufer Str.");
break;
}
case 106158:
{
returnValue = F("Freienhägener Str.");
break;
}
case 106159:
{
returnValue = F("Freienlande");
break;
}
case 106160:
{
returnValue = F("Freienohler Str.");
break;
}
case 106161:
{
returnValue = F("Freienohler Weg");
break;
}
case 106162:
{
returnValue = F("Freienrieder Weg");
break;
}
case 106163:
{
returnValue = F("Freienseener Str.");
break;
}
case 106164:
{
returnValue = F("Freienseener Weg");
break;
}
case 106165:
{
returnValue = F("Freiensehnerstr.");
break;
}
case 106166:
{
returnValue = F("Freiensteinauer Str.");
break;
}
case 106167:
{
returnValue = F("Freiensteinstr.");
break;
}
case 106168:
{
returnValue = F("Freienstr.");
break;
}
case 106169:
{
returnValue = F("Freienstuhl");
break;
}
case 106170:
{
returnValue = F("Freienthal");
break;
}
case 106171:
{
returnValue = F("Freientroper Weg");
break;
}
case 106172:
{
returnValue = F("Freienwalder Allee");
break;
}
case 106173:
{
returnValue = F("Freienwalder Chaussee");
break;
}
case 106174:
{
returnValue = F("Freienwalder Str.");
break;
}
case 106175:
{
returnValue = F("Freienwalder Weg");
break;
}
case 106176:
{
returnValue = F("Freienwillen");
break;
}
case 106177:
{
returnValue = F("Freier Blick");
break;
}
case 106178:
{
returnValue = F("Freier Damm");
break;
}
case 106179:
{
returnValue = F("Freier Grunder Str.");
break;
}
case 106180:
{
returnValue = F("Freier Hof");
break;
}
case 106181:
{
returnValue = F("Freier Platz");
break;
}
case 106182:
{
returnValue = F("Freier Wasen");
break;
}
case 106183:
{
returnValue = F("Freier Weg");
break;
}
case 106184:
{
returnValue = F("Freier-Grund-Str.");
break;
}
case 106185:
{
returnValue = F("Freiersbach");
break;
}
case 106186:
{
returnValue = F("Freiersbachweg");
break;
}
case 106187:
{
returnValue = F("Freiersstr.");
break;
}
case 106188:
{
returnValue = F("Freies Holz");
break;
}
case 106189:
{
returnValue = F("Freieslebenstr.");
break;
}
case 106190:
{
returnValue = F("Freieweg");
break;
}
case 106191:
{
returnValue = F("Freifeld");
break;
}
case 106192:
{
returnValue = F("Freifeldstr.");
break;
}
case 106193:
{
returnValue = F("Freifläche Energiemuseum");
break;
}
case 106194:
{
returnValue = F("Freifläche Hahnemann-Haus");
break;
}
case 106195:
{
returnValue = F("Freifläche mit Brunnen");
break;
}
case 106196:
{
returnValue = F("Freifläche mit Gedenktafel (Enstehungsort des Dorfbrandes von 1716)");
break;
}
case 106197:
{
returnValue = F("Freifrau-von-Löwendahl-Str.");
break;
}
case 106198:
{
returnValue = F("Freifrau-von-Moreau-Str.");
break;
}
case 106199:
{
returnValue = F("Freigarten");
break;
}
case 106200:
{
returnValue = F("Freigartenweg");
break;
}
case 106201:
{
returnValue = F("Freigasse");
break;
}
case 106202:
{
returnValue = F("Freigasse 33-39");
break;
}
case 106203:
{
returnValue = F("Freigebiet");
break;
}
case 106204:
{
returnValue = F("Freigerichter Str.");
break;
}
case 106205:
{
returnValue = F("Freigerichtstr.");
break;
}
case 106206:
{
returnValue = F("Freigerichtsweg");
break;
}
case 106207:
{
returnValue = F("Freigraben");
break;
}
case 106208:
{
returnValue = F("Freigrabenweg");
break;
}
case 106209:
{
returnValue = F("Freigrafendamm");
break;
}
case 106210:
{
returnValue = F("Freigrafenstr.");
break;
}
case 106211:
{
returnValue = F("Freigrafenweg");
break;
}
case 106212:
{
returnValue = F("Freigutfeldweg");
break;
}
case 106213:
{
returnValue = F("Freigutsgasse");
break;
}
case 106214:
{
returnValue = F("Freih.-von-Türckheim-Str.");
break;
}
case 106215:
{
returnValue = F("Freihalder Str.");
break;
}
case 106216:
{
returnValue = F("Freihamer Str.");
break;
}
case 106217:
{
returnValue = F("Freihardt");
break;
}
case 106218:
{
returnValue = F("Freihaslach");
break;
}
case 106219:
{
returnValue = F("Freihauser Str.");
break;
}
case 106220:
{
returnValue = F("Freihausstr.");
break;
}
case 106221:
{
returnValue = F("Freihausweg");
break;
}
case 106222:
{
returnValue = F("Freihauswinkl");
break;
}
case 106223:
{
returnValue = F("Freiheideplatzweg");
break;
}
case 106224:
{
returnValue = F("Freiheider Str.");
break;
}
case 106225:
{
returnValue = F("Freiheit");
break;
}
case 106226:
{
returnValue = F("Freiheit Wolfsberg");
break;
}
case 106227:
{
returnValue = F("Freiheiter Berg");
break;
}
case 106228:
{
returnValue = F("Freiheiter Str.");
break;
}
case 106229:
{
returnValue = F("Freiheiter Weg");
break;
}
case 106230:
{
returnValue = F("Freiheitsallee");
break;
}
case 106231:
{
returnValue = F("Freiheitsbrücke");
break;
}
case 106232:
{
returnValue = F("Freiheitsdamm");
break;
}
case 106233:
{
returnValue = F("Freiheitsgasse");
break;
}
case 106234:
{
returnValue = F("Freiheitsplatz");
break;
}
case 106235:
{
returnValue = F("Freiheitsring");
break;
}
case 106236:
{
returnValue = F("Freiheitssiedlung");
break;
}
case 106237:
{
returnValue = F("Freiheitsstr.");
break;
}
case 106238:
{
returnValue = F("Freiheitstr.");
break;
}
case 106239:
{
returnValue = F("Freiheitstr. -neu-");
break;
}
case 106240:
{
returnValue = F("Freiheitsweg");
break;
}
case 106241:
{
returnValue = F("Freiheitweg");
break;
}
case 106242:
{
returnValue = F("Freiherr Knigge Str.");
break;
}
case 106243:
{
returnValue = F("Freiherr vom Stein Str.");
break;
}
case 106244:
{
returnValue = F("Freiherr von Drais-Weg");
break;
}
case 106245:
{
returnValue = F("Freiherr von Seebachweg");
break;
}
case 106246:
{
returnValue = F("Freiherr-Joachim-Str.");
break;
}
case 106247:
{
returnValue = F("Freiherr-Vom-Stein-Str.");
break;
}
case 106248:
{
returnValue = F("Freiherr-vom-Stein Park");
break;
}
case 106249:
{
returnValue = F("Freiherr-vom-Stein Str.");
break;
}
case 106250:
{
returnValue = F("Freiherr-vom-Stein-Allee");
break;
}
case 106251:
{
returnValue = F("Freiherr-vom-Stein-Park");
break;
}
case 106252:
{
returnValue = F("Freiherr-vom-Stein-Platz");
break;
}
case 106253:
{
returnValue = F("Freiherr-vom-Stein-Promenade");
break;
}
case 106254:
{
returnValue = F("Freiherr-vom-Stein-Ring");
break;
}
case 106255:
{
returnValue = F("Freiherr-vom-Stein-Str.");
break;
}
case 106256:
{
returnValue = F("Freiherr-vom-Stein-Weg");
break;
}
case 106257:
{
returnValue = F("Freiherr-von Ketteler-Str.");
break;
}
case 106258:
{
returnValue = F("Freiherr-von-Aretin-Platz");
break;
}
case 106259:
{
returnValue = F("Freiherr-von-Aufseß-Str.");
break;
}
case 106260:
{
returnValue = F("Freiherr-von-Barth-Str.");
break;
}
case 106261:
{
returnValue = F("Freiherr-von-Beust-Str.");
break;
}
case 106262:
{
returnValue = F("Freiherr-von-Bibra-Str.");
break;
}
case 106263:
{
returnValue = F("Freiherr-von-Brachel-Str.");
break;
}
case 106264:
{
returnValue = F("Freiherr-von-Brutscher-Str.");
break;
}
case 106265:
{
returnValue = F("Freiherr-von-Dachroth-Str.");
break;
}
case 106266:
{
returnValue = F("Freiherr-von-Dernbach-Str.");
break;
}
case 106267:
{
returnValue = F("Freiherr-von-Diemar-Str.");
break;
}
case 106268:
{
returnValue = F("Freiherr-von-Drais-Str.");
break;
}
case 106269:
{
returnValue = F("Freiherr-von-Draiss-Str.");
break;
}
case 106270:
{
returnValue = F("Freiherr-von-Dörnberg-Str.");
break;
}
case 106271:
{
returnValue = F("Freiherr-von-Eichendorff-Str.");
break;
}
case 106272:
{
returnValue = F("Freiherr-von-Feilitzsch-Str.");
break;
}
case 106273:
{
returnValue = F("Freiherr-von-Fetzer-Weg");
break;
}
case 106274:
{
returnValue = F("Freiherr-von-Gagern-Str.");
break;
}
case 106275:
{
returnValue = F("Freiherr-von-Gemmingen-Platz");
break;
}
case 106276:
{
returnValue = F("Freiherr-von-Gienanth-Str.");
break;
}
case 106277:
{
returnValue = F("Freiherr-von-Grechtler-Str.");
break;
}
case 106278:
{
returnValue = F("Freiherr-von-Haacke-Str.");
break;
}
case 106279:
{
returnValue = F("Freiherr-von-Hacke-Str.");
break;
}
case 106280:
{
returnValue = F("Freiherr-von-Hallberg-Platz");
break;
}
case 106281:
{
returnValue = F("Freiherr-von-Hundbiß-Str.");
break;
}
case 106282:
{
returnValue = F("Freiherr-von-Hundt-Str.");
break;
}
case 106283:
{
returnValue = F("Freiherr-von-Ickstatt-Str.");
break;
}
case 106284:
{
returnValue = F("Freiherr-von-Ketteler-Str.");
break;
}
case 106285:
{
returnValue = F("Freiherr-von-Kober-Str.");
break;
}
case 106286:
{
returnValue = F("Freiherr-von-Kolborn-Str.");
break;
}
case 106287:
{
returnValue = F("Freiherr-von-Kreitmayr-Str.");
break;
}
case 106288:
{
returnValue = F("Freiherr-von-König-Str.");
break;
}
case 106289:
{
returnValue = F("Freiherr-von-Langen-Str.");
break;
}
case 106290:
{
returnValue = F("Freiherr-von-Langsdorff-Str.");
break;
}
case 106291:
{
returnValue = F("Freiherr-von-Liebig-Str.");
break;
}
case 106292:
{
returnValue = F("Freiherr-von-Linden-Str.");
break;
}
case 106293:
{
returnValue = F("Freiherr-von-Lindenfels-Str.");
break;
}
case 106294:
{
returnValue = F("Freiherr-von-Loeben-Str.");
break;
}
case 106295:
{
returnValue = F("Freiherr-von-Lutz-Str.");
break;
}
case 106296:
{
returnValue = F("Freiherr-von-Lösch-Str.");
break;
}
case 106297:
{
returnValue = F("Freiherr-von-Lützow-Ring");
break;
}
case 106298:
{
returnValue = F("Freiherr-von-Mayr-Str.");
break;
}
case 106299:
{
returnValue = F("Freiherr-von-Neveu-Str.");
break;
}
case 106300:
{
returnValue = F("Freiherr-von-Palm-Str.");
break;
}
case 106301:
{
returnValue = F("Freiherr-von-Palm-Weg");
break;
}
case 106302:
{
returnValue = F("Freiherr-von-Pestalozza-Weg");
break;
}
case 106303:
{
returnValue = F("Freiherr-von-Poschinger-Str.");
break;
}
case 106304:
{
returnValue = F("Freiherr-von-Redwitz-Gasse");
break;
}
case 106305:
{
returnValue = F("Freiherr-von-Reichenbach-Str.");
break;
}
case 106306:
{
returnValue = F("Freiherr-von-Richthofen-Str.");
break;
}
case 106307:
{
returnValue = F("Freiherr-von-Ried-Str.");
break;
}
case 106308:
{
returnValue = F("Freiherr-von-Rotsmann-Str.");
break;
}
case 106309:
{
returnValue = F("Freiherr-von-Schacky-Str.");
break;
}
case 106310:
{
returnValue = F("Freiherr-von-Schad-Str.");
break;
}
case 106311:
{
returnValue = F("Freiherr-von-Schleich-Platz");
break;
}
case 106312:
{
returnValue = F("Freiherr-von-Schleich-Str.");
break;
}
case 106313:
{
returnValue = F("Freiherr-von-Schmid-Ring");
break;
}
case 106314:
{
returnValue = F("Freiherr-von-Schrenk-Str.");
break;
}
case 106315:
{
returnValue = F("Freiherr-von-Schrenk-Weg");
break;
}
case 106316:
{
returnValue = F("Freiherr-von-Speth-Str.");
break;
}
case 106317:
{
returnValue = F("Freiherr-von-Stein-Str.");
break;
}
case 106318:
{
returnValue = F("Freiherr-von-Stengel-Str.");
break;
}
case 106319:
{
returnValue = F("Freiherr-von-Sturmfeder-Str.");
break;
}
case 106320:
{
returnValue = F("Freiherr-von-Süßkind-Str.");
break;
}
case 106321:
{
returnValue = F("Freiherr-von-Tessin-Str.");
break;
}
case 106322:
{
returnValue = F("Freiherr-von-Thüngen-Str.");
break;
}
case 106323:
{
returnValue = F("Freiherr-von-Twickel-Str.");
break;
}
case 106324:
{
returnValue = F("Freiherr-von-Varnbüler-Str.");
break;
}
case 106325:
{
returnValue = F("Freiherr-von-Vincke-Str.");
break;
}
case 106326:
{
returnValue = F("Freiherr-von-Wallbrunn-Str.");
break;
}
case 106327:
{
returnValue = F("Freiherr-von-Wambolt-Str.");
break;
}
case 106328:
{
returnValue = F("Freiherr-von-Weißenstein-Str.");
break;
}
case 106329:
{
returnValue = F("Freiherr-von-Zech-Str.");
break;
}
case 106330:
{
returnValue = F("Freiherr-von-Zobel-Str.");
break;
}
case 106331:
{
returnValue = F("Freiherren-von-Friesen-Str.");
break;
}
case 106332:
{
returnValue = F("Freiherrenstr.");
break;
}
case 106333:
{
returnValue = F("Freiherrn-von-Speth-Str.");
break;
}
case 106334:
{
returnValue = F("Freiherrnstr.");
break;
}
case 106335:
{
returnValue = F("Freiherrstr.");
break;
}
case 106336:
{
returnValue = F("Freihoels");
break;
}
case 106337:
{
returnValue = F("Freihof");
break;
}
case 106338:
{
returnValue = F("Freihofer Ring");
break;
}
case 106339:
{
returnValue = F("Freihofer Str.");
break;
}
case 106340:
{
returnValue = F("Freihofgasse");
break;
}
case 106341:
{
returnValue = F("Freihofgärten");
break;
}
case 106342:
{
returnValue = F("Freihofplatz");
break;
}
case 106343:
{
returnValue = F("Freihofsgasse");
break;
}
case 106344:
{
returnValue = F("Freihofsplatz");
break;
}
case 106345:
{
returnValue = F("Freihofstr.");
break;
}
case 106346:
{
returnValue = F("Freihofsweg");
break;
}
case 106347:
{
returnValue = F("Freihofweg");
break;
}
case 106348:
{
returnValue = F("Freiholzer Weg");
break;
}
case 106349:
{
returnValue = F("Freihufenweg");
break;
}
case 106350:
{
returnValue = F("Freihunger Str.");
break;
}
case 106351:
{
returnValue = F("Freihäuschen");
break;
}
case 106352:
{
returnValue = F("Freihöls");
break;
}
case 106353:
{
returnValue = F("Freihölser Weg");
break;
}
case 106354:
{
returnValue = F("Freiimfelde");
break;
}
case 106355:
{
returnValue = F("Freiimfelder Str.");
break;
}
case 106356:
{
returnValue = F("Freiin-von-Dehrn-Str.");
break;
}
case 106357:
{
returnValue = F("Freiing");
break;
}
case 106358:
{
returnValue = F("Freikamp");
break;
}
case 106359:
{
returnValue = F("Freikoppel");
break;
}
case 106360:
{
returnValue = F("Freikorpsstr.");
break;
}
case 106361:
{
returnValue = F("Freiladestr.");
break;
}
case 106362:
{
returnValue = F("Freiland");
break;
}
case 106363:
{
returnValue = F("Freilandlabor");
break;
}
case 106364:
{
returnValue = F("Freilandstieg");
break;
}
case 106365:
{
returnValue = F("Freilandstr.");
break;
}
case 106366:
{
returnValue = F("Freilandweg");
break;
}
case 106367:
{
returnValue = F("Freilassinger Str.");
break;
}
case 106368:
{
returnValue = F("Freilaß");
break;
}
case 106369:
{
returnValue = F("Freilichtbühne");
break;
}
case 106370:
{
returnValue = F("Freilichtbühne Twiste");
break;
}
case 106371:
{
returnValue = F("Freilichtbühnenstr.");
break;
}
case 106372:
{
returnValue = F("Freilichtbühnenweg");
break;
}
case 106373:
{
returnValue = F("Freilichtmuseum");
break;
}
case 106374:
{
returnValue = F("Freilichtmuseum Diesdorf");
break;
}
case 106375:
{
returnValue = F("Freiligrathanger");
break;
}
case 106376:
{
returnValue = F("Freiligrathhof");
break;
}
case 106377:
{
returnValue = F("Freiligrathring");
break;
}
case 106378:
{
returnValue = F("Freiligrathstr.");
break;
}
case 106379:
{
returnValue = F("Freiligrathwall");
break;
}
case 106380:
{
returnValue = F("Freiligrathweg");
break;
}
case 106381:
{
returnValue = F("Freiling");
break;
}
case 106382:
{
returnValue = F("Freilinger Str.");
break;
}
case 106383:
{
returnValue = F("Freilufthäuser");
break;
}
case 106384:
{
returnValue = F("Freimanner Str.");
break;
}
case 106385:
{
returnValue = F("Freimannstr.");
break;
}
case 106386:
{
returnValue = F("Freimannweg");
break;
}
case 106387:
{
returnValue = F("Freimarkt");
break;
}
case 106388:
{
returnValue = F("Freimath");
break;
}
case 106389:
{
returnValue = F("Freimatt");
break;
}
case 106390:
{
returnValue = F("Freimersdorf");
break;
}
case 106391:
{
returnValue = F("Freimersdorfer Weg");
break;
}
case 106392:
{
returnValue = F("Freimersheimer Str.");
break;
}
case 106393:
{
returnValue = F("Freimersheimer Weg");
break;
}
case 106394:
{
returnValue = F("Freimuthstr.");
break;
}
case 106395:
{
returnValue = F("Freinberger Str.");
break;
}
case 106396:
{
returnValue = F("Freinsheimer Str.");
break;
}
case 106397:
{
returnValue = F("Freinsheimer Weg");
break;
}
case 106398:
{
returnValue = F("Freinsheimerstr.");
break;
}
case 106399:
{
returnValue = F("Freiolsheimer Str.");
break;
}
case 106400:
{
returnValue = F("Freiolsheimer Weg");
break;
}
case 106401:
{
returnValue = F("Freiplatz");
break;
}
case 106402:
{
returnValue = F("Freirachdorfer Str.");
break;
}
case 106403:
{
returnValue = F("Freirodaer Str.");
break;
}
case 106404:
{
returnValue = F("Freirodaer Weg");
break;
}
case 106405:
{
returnValue = F("Freiröttenbach");
break;
}
case 106406:
{
returnValue = F("Freisamerweg");
break;
}
case 106407:
{
returnValue = F("Freisbacher Weg");
break;
}
case 106408:
{
returnValue = F("Freisbachstr.");
break;
}
case 106409:
{
returnValue = F("Freisberger Weg");
break;
}
case 106410:
{
returnValue = F("Freischfeld");
break;
}
case 106411:
{
returnValue = F("Freischlade");
break;
}
case 106412:
{
returnValue = F("Freischlagstr.");
break;
}
case 106413:
{
returnValue = F("Freischneiderweg");
break;
}
case 106414:
{
returnValue = F("Freischweibach");
break;
}
case 106415:
{
returnValue = F("Freischützstr.");
break;
}
case 106416:
{
returnValue = F("Freisemicke");
break;
}
case 106417:
{
returnValue = F("Freisenbergstr.");
break;
}
case 106418:
{
returnValue = F("Freisenbrock");
break;
}
case 106419:
{
returnValue = F("Freisener Str.");
break;
}
case 106420:
{
returnValue = F("Freisenstr.");
break;
}
case 106421:
{
returnValue = F("Freisinger Landstr.");
break;
}
case 106422:
{
returnValue = F("Freisinger Str.");
break;
}
case 106423:
{
returnValue = F("Freisinger Weg");
break;
}
case 106424:
{
returnValue = F("Freisingerstr.");
break;
}
case 106425:
{
returnValue = F("Freislebenstr.");
break;
}
case 106426:
{
returnValue = F("Freistegstr.");
break;
}
case 106427:
{
returnValue = F("Freister Str.");
break;
}
case 106428:
{
returnValue = F("Freister Weg");
break;
}
case 106429:
{
returnValue = F("Freistr.");
break;
}
case 106430:
{
returnValue = F("Freistuhl");
break;
}
case 106431:
{
returnValue = F("Freistuhlgasse");
break;
}
case 106432:
{
returnValue = F("Freita,l Potschappel Friedhof (2)");
break;
}
case 106433:
{
returnValue = F("Freitager Weg");
break;
}
case 106434:
{
returnValue = F("Freitagsfeld");
break;
}
case 106435:
{
returnValue = F("Freitagsgasse");
break;
}
case 106436:
{
returnValue = F("Freitagskamp");
break;
}
case 106437:
{
returnValue = F("Freitagstr.");
break;
}
case 106438:
{
returnValue = F("Freitagstr.-Nord");
break;
}
case 106439:
{
returnValue = F("Freitagstr.-Süd");
break;
}
case 106440:
{
returnValue = F("Freital Abzweig Pesterwitz Steig 1");
break;
}
case 106441:
{
returnValue = F("Freital Abzweig Pesterwitz Steig 2");
break;
}
case 106442:
{
returnValue = F("Freital Bürgerstr. (1)");
break;
}
case 106443:
{
returnValue = F("Freital Bürgerstr. (2)");
break;
}
case 106444:
{
returnValue = F("Freital Döhlen Daubenbergweg");
break;
}
case 106445:
{
returnValue = F("Freital Gitterseer Str. (1)");
break;
}
case 106446:
{
returnValue = F("Freital Platz des Friedens (1)");
break;
}
case 106447:
{
returnValue = F("Freital Platz des Friedens (2)");
break;
}
case 106448:
{
returnValue = F("Freital Rudeltstr. (1)");
break;
}
case 106449:
{
returnValue = F("Freital Rudeltstr. (2)");
break;
}
case 106450:
{
returnValue = F("Freital S-Bahnhof (1)");
break;
}
case 106451:
{
returnValue = F("Freital S-Bahnhof Potschappel (2)");
break;
}
case 106452:
{
returnValue = F("Freital S-Bf Hainsberg");
break;
}
case 106453:
{
returnValue = F("Freital Saalhausener Str. Steig 1");
break;
}
case 106454:
{
returnValue = F("Freital Weißig Schulstr.");
break;
}
case 106455:
{
returnValue = F("Freital Windbergallee");
break;
}
case 106456:
{
returnValue = F("Freital, Potschappel Friedhof (1)");
break;
}
case 106457:
{
returnValue = F("Freitaler Str.");
break;
}
case 106458:
{
returnValue = F("Freitaler Weg");
break;
}
case 106459:
{
returnValue = F("Freitelsdorfer Str.");
break;
}
case 106460:
{
returnValue = F("Freiter Pättken");
break;
}
case 106461:
{
returnValue = F("Freithof");
break;
}
case 106462:
{
returnValue = F("Freithoffstr.");
break;
}
case 106463:
{
returnValue = F("Freithofstr.");
break;
}
case 106464:
{
returnValue = F("Freitorstr.");
break;
}
case 106465:
{
returnValue = F("Freiung");
break;
}
case 106466:
{
returnValue = F("Freiungsfeld");
break;
}
case 106467:
{
returnValue = F("Freiwald");
break;
}
case 106468:
{
returnValue = F("Freiwaldauer Str.");
break;
}
case 106469:
{
returnValue = F("Freiwaldauer Weg");
break;
}
case 106470:
{
returnValue = F("Freiwaldaustr.");
break;
}
case 106471:
{
returnValue = F("Freiwalder Str.");
break;
}
case 106472:
{
returnValue = F("Freiwalder Weg");
break;
}
case 106473:
{
returnValue = F("Freiwasser");
break;
}
case 106474:
{
returnValue = F("Freiweg");
break;
}
case 106475:
{
returnValue = F("Freiweidacher Str.");
break;
}
case 106476:
{
returnValue = F("Freiweide");
break;
}
case 106477:
{
returnValue = F("Freiwillige Feuerwehr Hemmingen/Wilkenburg (neu)");
break;
}
case 106478:
{
returnValue = F("Freiwilligen-Arbeitsdienst-Weg");
break;
}
case 106479:
{
returnValue = F("Freiwinklstr.");
break;
}
case 106480:
{
returnValue = F("Freiwinklweg");
break;
}
case 106481:
{
returnValue = F("Freizeit und Erholungspark \"Zum Possen");
break;
}
case 106482:
{
returnValue = F("Freizeit- und Tourismuszentrum FTZ");
break;
}
case 106483:
{
returnValue = F("Freizeit-Sportpark Weidenberg");
break;
}
case 106484:
{
returnValue = F("Freizeitanger");
break;
}
case 106485:
{
returnValue = F("Freizeitanlage");
break;
}
case 106486:
{
returnValue = F("Freizeitanlage \"Dicke Eiche");
break;
}
case 106487:
{
returnValue = F("Freizeitanlage \"Haus Rott");
break;
}
case 106488:
{
returnValue = F("Freizeitanlage Am Knückel");
break;
}
case 106489:
{
returnValue = F("Freizeitanlage Am Sportpark");
break;
}
case 106490:
{
returnValue = F("Freizeitanlage Bosselbach");
break;
}
case 106491:
{
returnValue = F("Freizeitanlage Georgenhausen");
break;
}
case 106492:
{
returnValue = F("Freizeitanlage Guckaisee");
break;
}
case 106493:
{
returnValue = F("Freizeitanlage Haselgrund");
break;
}
case 106494:
{
returnValue = F("Freizeitanlage Liedertafel Steinbach");
break;
}
case 106495:
{
returnValue = F("Freizeitanlage Nebelhorn");
break;
}
case 106496:
{
returnValue = F("Freizeitanlage Roter Bohles");
break;
}
case 106497:
{
returnValue = F("Freizeitanlage Steinbach");
break;
}
case 106498:
{
returnValue = F("Freizeitanlage am Esper");
break;
}
case 106499:
{
returnValue = F("Freizeitanlage am Weiher");
break;
}
case 106500:
{
returnValue = F("Freizeitanlage an der Lauchert");
break;
}
case 106501:
{
returnValue = F("Freizeitbad Bad Lauchstädt");
break;
}
case 106502:
{
returnValue = F("Freizeitbad Neukirchen-Vluyn");
break;
}
case 106503:
{
returnValue = F("Freizeitbäder Saarburg");
break;
}
case 106504:
{
returnValue = F("Freizeitgelände");
break;
}
case 106505:
{
returnValue = F("Freizeitgelände Dultplatz");
break;
}
case 106506:
{
returnValue = F("Freizeitgelände Grillhütte Kreuzenstein");
break;
}
case 106507:
{
returnValue = F("Freizeitgelände Hohenbrunn");
break;
}
case 106508:
{
returnValue = F("Freizeitgelände Huntsteert");
break;
}
case 106509:
{
returnValue = F("Freizeitgelände Mäandertal");
break;
}
case 106510:
{
returnValue = F("Freizeitgelände Stenne");
break;
}
case 106511:
{
returnValue = F("Freizeitpark");
break;
}
case 106512:
{
returnValue = F("Freizeitpark \"Villeneuve sur Lot");
break;
}
case 106513:
{
returnValue = F("Freizeitpark Brassert");
break;
}
case 106514:
{
returnValue = F("Freizeitpark Ellbachaue");
break;
}
case 106515:
{
returnValue = F("Freizeitpark Eppenbrunn");
break;
}
case 106516:
{
returnValue = F("Freizeitpark Europa");
break;
}
case 106517:
{
returnValue = F("Freizeitpark Gut Eversum");
break;
}
case 106518:
{
returnValue = F("Freizeitpark Langfort");
break;
}
case 106519:
{
returnValue = F("Freizeitpark Nordstadt");
break;
}
case 106520:
{
returnValue = F("Freizeitpark Nottensdorf");
break;
}
case 106521:
{
returnValue = F("Freizeitpark Pfingstanger");
break;
}
case 106522:
{
returnValue = F("Freizeitpark Spießwiesen");
break;
}
case 106523:
{
returnValue = F("Freizeitpark Unterwiesen");
break;
}
case 106524:
{
returnValue = F("Freizeitpark Weißwasser");
break;
}
case 106525:
{
returnValue = F("Freizeitpark am Goldbach");
break;
}
case 106526:
{
returnValue = F("Freizeitpark im Briebel");
break;
}
case 106527:
{
returnValue = F("Freizeitpark mit Spielplatz");
break;
}
case 106528:
{
returnValue = F("Freizeitweg");
break;
}
case 106529:
{
returnValue = F("Freizeitzentrum");
break;
}
case 106530:
{
returnValue = F("Freizeitzentrum Mayen");
break;
}
case 106531:
{
returnValue = F("Freizeitzentrum Mühlenkamp");
break;
}
case 106532:
{
returnValue = F("Freizeitzentrum Süd");
break;
}
case 106533:
{
returnValue = F("Freißenbütteler Weg");
break;
}
case 106534:
{
returnValue = F("Freiäckerweg");
break;
}
case 106535:
{
returnValue = F("Freiämter Str.");
break;
}
case 106536:
{
returnValue = F("Frejusstr.");
break;
}
case 106537:
{
returnValue = F("Frekings Weg");
break;
}
case 106538:
{
returnValue = F("Freks Berg");
break;
}
case 106539:
{
returnValue = F("Frelenberger Wald");
break;
}
case 106540:
{
returnValue = F("Frelenberger Weg");
break;
}
case 106541:
{
returnValue = F("Frelsdorfer Str.");
break;
}
case 106542:
{
returnValue = F("Frelsdorfermühlen");
break;
}
case 106543:
{
returnValue = F("Fremdenstr.");
break;
}
case 106544:
{
returnValue = F("Fremdenweg");
break;
}
case 106545:
{
returnValue = F("Fremdiswalde");
break;
}
case 106546:
{
returnValue = F("Fremdiswalder Str.");
break;
}
case 106547:
{
returnValue = F("Fremersbergstr.");
break;
}
case 106548:
{
returnValue = F("Fremersbergweg");
break;
}
case 106549:
{
returnValue = F("Fremersdorfer Str.");
break;
}
case 106550:
{
returnValue = F("Frenaystr.");
break;
}
case 106551:
{
returnValue = F("Frenkeloe");
break;
}
case 106552:
{
returnValue = F("Frenkenweg");
break;
}
case 106553:
{
returnValue = F("Frenker Str.");
break;
}
case 106554:
{
returnValue = F("Frenkers Weg");
break;
}
case 106555:
{
returnValue = F("Frenkhauser Str.");
break;
}
case 106556:
{
returnValue = F("Frenkhauserhöh");
break;
}
case 106557:
{
returnValue = F("Frenkinger Platz");
break;
}
case 106558:
{
returnValue = F("Frenkings Weide");
break;
}
case 106559:
{
returnValue = F("Frenkstiege");
break;
}
case 106560:
{
returnValue = F("Frenkstr.");
break;
}
case 106561:
{
returnValue = F("Frennetstr.");
break;
}
case 106562:
{
returnValue = F("Frenrade");
break;
}
case 106563:
{
returnValue = F("Frenschenweg");
break;
}
case 106564:
{
returnValue = F("Frensdorfer Ring");
break;
}
case 106565:
{
returnValue = F("Frensdorfer Str.");
break;
}
case 106566:
{
returnValue = F("Frensdorferhaar");
break;
}
case 106567:
{
returnValue = F("Frenser Allee");
break;
}
case 106568:
{
returnValue = F("Frenser Str.");
break;
}
case 106569:
{
returnValue = F("Frenshofer Hauptstr.");
break;
}
case 106570:
{
returnValue = F("Frenssenstr.");
break;
}
case 106571:
{
returnValue = F("Frentroper Str.");
break;
}
case 106572:
{
returnValue = F("Frentruper Str.");
break;
}
case 106573:
{
returnValue = F("Frentrupweg");
break;
}
case 106574:
{
returnValue = F("Frentzenhofstr.");
break;
}
case 106575:
{
returnValue = F("Frentzstr.");
break;
}
case 106576:
{
returnValue = F("Frenzelstr.");
break;
}
case 106577:
{
returnValue = F("Frenzenberg");
break;
}
case 106578:
{
returnValue = F("Frenzenhofstr.");
break;
}
case 106579:
{
returnValue = F("Frenzenstr.");
break;
}
case 106580:
{
returnValue = F("Frenzer Dorfplatz");
break;
}
case 106581:
{
returnValue = F("Frenzer Feldstr.");
break;
}
case 106582:
{
returnValue = F("Frenzer Hauptstr.");
break;
}
case 106583:
{
returnValue = F("Frenzer Park");
break;
}
case 106584:
{
returnValue = F("Frenzer Siedlung");
break;
}
case 106585:
{
returnValue = F("Frenzer Str.");
break;
}
case 106586:
{
returnValue = F("Frenzer Weg");
break;
}
case 106587:
{
returnValue = F("Frerener Damm");
break;
}
case 106588:
{
returnValue = F("Frerener Str.");
break;
}
case 106589:
{
returnValue = F("Frerich-Oldewurtel-Str.");
break;
}
case 106590:
{
returnValue = F("Frerichs Placken");
break;
}
case 106591:
{
returnValue = F("Frerichskamp");
break;
}
case 106592:
{
returnValue = F("Frerichsweg");
break;
}
case 106593:
{
returnValue = F("Frericksweg");
break;
}
case 106594:
{
returnValue = F("Frerkes Ring");
break;
}
case 106595:
{
returnValue = F("Frersings Hof");
break;
}
case 106596:
{
returnValue = F("Fresagrandinariastr.");
break;
}
case 106597:
{
returnValue = F("Freschenhausener Weg");
break;
}
case 106598:
{
returnValue = F("Freschenstr.");
break;
}
case 106599:
{
returnValue = F("Fresdorfer Bergstr.");
break;
}
case 106600:
{
returnValue = F("Fresdorfer Feldstr.");
break;
}
case 106601:
{
returnValue = F("Fresekenweg");
break;
}
case 106602:
{
returnValue = F("Fresenbrink");
break;
}
case 106603:
{
returnValue = F("Fresenbrügger Dorfstr.");
break;
}
case 106604:
{
returnValue = F("Fresenburg");
break;
}
case 106605:
{
returnValue = F("Fresenburger Str.");
break;
}
case 106606:
{
returnValue = F("Fresenburger Weg");
break;
}
case 106607:
{
returnValue = F("Fresendorfer Weg");
break;
}
case 106608:
{
returnValue = F("Fresengasse");
break;
}
case 106609:
{
returnValue = F("Fresenhede");
break;
}
case 106610:
{
returnValue = F("Freseniusstr.");
break;
}
case 106611:
{
returnValue = F("Freseniusweg");
break;
}
case 106612:
{
returnValue = F("Fresenrühm");
break;
}
case 106613:
{
returnValue = F("Fresenweg");
break;
}
case 106614:
{
returnValue = F("Fresenwisch");
break;
}
case 106615:
{
returnValue = F("Fresestr.");
break;
}
case 106616:
{
returnValue = F("Fresiengasse");
break;
}
case 106617:
{
returnValue = F("Fresienweg");
break;
}
case 106618:
{
returnValue = F("Freskenhof");
break;
}
case 106619:
{
returnValue = F("Fressgass");
break;
}
case 106620:
{
returnValue = F("Fressgasse");
break;
}
case 106621:
{
returnValue = F("Frestedter Weg");
break;
}
case 106622:
{
returnValue = F("Frestorfer Chaussee");
break;
}
case 106623:
{
returnValue = F("Frestorfer Dorfstr.");
break;
}
case 106624:
{
returnValue = F("Frestorfer Weg");
break;
}
case 106625:
{
returnValue = F("Frettchenweg");
break;
}
case 106626:
{
returnValue = F("Frettelt Park");
break;
}
case 106627:
{
returnValue = F("Frettenheimer Str.");
break;
}
case 106628:
{
returnValue = F("Frettenshofen");
break;
}
case 106629:
{
returnValue = F("Fretterbachstr.");
break;
}
case 106630:
{
returnValue = F("Fretterstr.");
break;
}
case 106631:
{
returnValue = F("Frettholz");
break;
}
case 106632:
{
returnValue = F("Frettholzweg");
break;
}
case 106633:
{
returnValue = F("Fretz-Moon-Str.");
break;
}
case 106634:
{
returnValue = F("Fretzdorfer Bahnhofstr.");
break;
}
case 106635:
{
returnValue = F("Fretzdorfer Dorfstr.");
break;
}
case 106636:
{
returnValue = F("Fretzdorfer Eichenweg");
break;
}
case 106637:
{
returnValue = F("Fretzdorfer Steinstr.");
break;
}
case 106638:
{
returnValue = F("Fretzdorfer Str.");
break;
}
case 106639:
{
returnValue = F("Freudenbach");
break;
}
case 106640:
{
returnValue = F("Freudenberg");
break;
}
case 106641:
{
returnValue = F("Freudenberger Landweg");
break;
}
case 106642:
{
returnValue = F("Freudenberger Str.");
break;
}
case 106643:
{
returnValue = F("Freudenberger Weg");
break;
}
case 106644:
{
returnValue = F("Freudenbergerhofstr.");
break;
}
case 106645:
{
returnValue = F("Freudenbergstr.");
break;
}
case 106646:
{
returnValue = F("Freudenbergweg");
break;
}
case 106647:
{
returnValue = F("Freudenblick");
break;
}
case 106648:
{
returnValue = F("Freudenburg");
break;
}
case 106649:
{
returnValue = F("Freudenegger Str.");
break;
}
case 106650:
{
returnValue = F("Freudengasse");
break;
}
case 106651:
{
returnValue = F("Freudengäßchen");
break;
}
case 106652:
{
returnValue = F("Freudenhain");
break;
}
case 106653:
{
returnValue = F("Freudenhälde");
break;
}
case 106654:
{
returnValue = F("Freudenmoor");
break;
}
case 106655:
{
returnValue = F("Freudenplan");
break;
}
case 106656:
{
returnValue = F("Freudenreich");
break;
}
case 106657:
{
returnValue = F("Freudenreichweg");
break;
}
case 106658:
{
returnValue = F("Freudenricht");
break;
}
case 106659:
{
returnValue = F("Freudensee");
break;
}
case 106660:
{
returnValue = F("Freudenseestr.");
break;
}
case 106661:
{
returnValue = F("Freudensprungstr.");
break;
}
case 106662:
{
returnValue = F("Freudenstadter Str.");
break;
}
case 106663:
{
returnValue = F("Freudenstein");
break;
}
case 106664:
{
returnValue = F("Freudensteiner Str.");
break;
}
case 106665:
{
returnValue = F("Freudenstr.");
break;
}
case 106666:
{
returnValue = F("Freudenstädter Str.");
break;
}
case 106667:
{
returnValue = F("Freudental");
break;
}
case 106668:
{
returnValue = F("Freudentaler Ring");
break;
}
case 106669:
{
returnValue = F("Freudentaler Str.");
break;
}
case 106670:
{
returnValue = F("Freudentaler Weg");
break;
}
case 106671:
{
returnValue = F("Freudentaler-Weg");
break;
}
case 106672:
{
returnValue = F("Freudentalstr.");
break;
}
case 106673:
{
returnValue = F("Freudenthal");
break;
}
case 106674:
{
returnValue = F("Freudenthaler Str.");
break;
}
case 106675:
{
returnValue = F("Freudenthaler Weg");
break;
}
case 106676:
{
returnValue = F("Freudenthalstr.");
break;
}
case 106677:
{
returnValue = F("Freudenthalsweg");
break;
}
case 106678:
{
returnValue = F("Freudenthalweg");
break;
}
case 106679:
{
returnValue = F("Freudentheilstr.");
break;
}
case 106680:
{
returnValue = F("Freudenweiler");
break;
}
case 106681:
{
returnValue = F("Freudenweiler Str.");
break;
}
case 106682:
{
returnValue = F("Freudiger Weg");
break;
}
case 106683:
{
returnValue = F("Freuleinsheumatweg");
break;
}
case 106684:
{
returnValue = F("Freumericher Weg");
break;
}
case 106685:
{
returnValue = F("Freundchenstr.");
break;
}
case 106686:
{
returnValue = F("Freundegrund");
break;
}
case 106687:
{
returnValue = F("Freunder Heideweg");
break;
}
case 106688:
{
returnValue = F("Freunder Landstr.");
break;
}
case 106689:
{
returnValue = F("Freunder Str.");
break;
}
case 106690:
{
returnValue = F("Freunder Weg");
break;
}
case 106691:
{
returnValue = F("Freundhofweg");
break;
}
case 106692:
{
returnValue = F("Freundlichgasse");
break;
}
case 106693:
{
returnValue = F("Freundorf");
break;
}
case 106694:
{
returnValue = F("Freundorf-Süd");
break;
}
case 106695:
{
returnValue = F("Freundorfer Str.");
break;
}
case 106696:
{
returnValue = F("Freundorferstr.");
break;
}
case 106697:
{
returnValue = F("Freundsbach");
break;
}
case 106698:
{
returnValue = F("Freundschaftsbuchenweg");
break;
}
case 106699:
{
returnValue = F("Freundschaftseck");
break;
}
case 106700:
{
returnValue = F("Freundschaftspark");
break;
}
case 106701:
{
returnValue = F("Freundschaftsstr.");
break;
}
case 106702:
{
returnValue = F("Freundschaftsweg");
break;
}
case 106703:
{
returnValue = F("Freundstr.");
break;
}
case 106704:
{
returnValue = F("Freundstückweg");
break;
}
case 106705:
{
returnValue = F("Freusbergstr.");
break;
}
case 106706:
{
returnValue = F("Freusbergweg");
break;
}
case 106707:
{
returnValue = F("Freverts Berg");
break;
}
case 106708:
{
returnValue = F("Frevlet");
break;
}
case 106709:
{
returnValue = F("Frey-Platz");
break;
}
case 106710:
{
returnValue = F("Frey-Schneise");
break;
}
case 106711:
{
returnValue = F("Freya-Markus-Str.");
break;
}
case 106712:
{
returnValue = F("Freyastr.");
break;
}
case 106713:
{
returnValue = F("Freybergerstr.");
break;
}
case 106714:
{
returnValue = F("Freybergring");
break;
}
case 106715:
{
returnValue = F("Freybergstr.");
break;
}
case 106716:
{
returnValue = F("Freybergweg");
break;
}
case 106717:
{
returnValue = F("Freyburger Allee");
break;
}
case 106718:
{
returnValue = F("Freyburger Str.");
break;
}
case 106719:
{
returnValue = F("Freyelweg");
break;
}
case 106720:
{
returnValue = F("Freyenberger Weg");
break;
}
case 106721:
{
returnValue = F("Freyendahl");
break;
}
case 106722:
{
returnValue = F("Freyenhöfe");
break;
}
case 106723:
{
returnValue = F("Freyensteiner Chaussee");
break;
}
case 106724:
{
returnValue = F("Freyensteiner Chaussee Beveringen");
break;
}
case 106725:
{
returnValue = F("Freyensteiner Str.");
break;
}
case 106726:
{
returnValue = F("Freyenstr.");
break;
}
case 106727:
{
returnValue = F("Freyenweg");
break;
}
case 106728:
{
returnValue = F("Freyer Str.");
break;
}
case 106729:
{
returnValue = F("Freyerser Str.");
break;
}
case 106730:
{
returnValue = F("Freyeslebenstr.");
break;
}
case 106731:
{
returnValue = F("Freyhaushof");
break;
}
case 106732:
{
returnValue = F("Freyjastr.");
break;
}
case 106733:
{
returnValue = F("Freymannstr.");
break;
}
case 106734:
{
returnValue = F("Freymuth-Weg");
break;
}
case 106735:
{
returnValue = F("Freys Heide");
break;
}
case 106736:
{
returnValue = F("Freyschmidtstr.");
break;
}
case 106737:
{
returnValue = F("Freysestr.");
break;
}
case 106738:
{
returnValue = F("Freystr.");
break;
}
case 106739:
{
returnValue = F("Freystädter Str.");
break;
}
case 106740:
{
returnValue = F("Freytagstr.");
break;
}
case 106741:
{
returnValue = F("Freytagweg");
break;
}
case 106742:
{
returnValue = F("Freyung");
break;
}
case 106743:
{
returnValue = F("Freyunger Str.");
break;
}
case 106744:
{
returnValue = F("Freyweg");
break;
}
case 106745:
{
returnValue = F("Freßberger Steige");
break;
}
case 106746:
{
returnValue = F("Frh.-v.-Lichtenstern-Str.");
break;
}
case 106747:
{
returnValue = F("Frh.-v.-Münnich-Str.");
break;
}
case 106748:
{
returnValue = F("Frh.-v.-Wobersnow-Str.");
break;
}
case 106749:
{
returnValue = F("Frh.-vom-Stein-Str.");
break;
}
case 106750:
{
returnValue = F("Frh.-von-Richthofen-Str.");
break;
}
case 106751:
{
returnValue = F("Fribergweg");
break;
}
case 106752:
{
returnValue = F("Fribolinstr.");
break;
}
case 106753:
{
returnValue = F("Fribourgstr.");
break;
}
case 106754:
{
returnValue = F("Fribörn");
break;
}
case 106755:
{
returnValue = F("Frickastr.");
break;
}
case 106756:
{
returnValue = F("Frickegasse");
break;
}
case 106757:
{
returnValue = F("Frickegässchen");
break;
}
case 106758:
{
returnValue = F("Frickenberg");
break;
}
case 106759:
{
returnValue = F("Frickendorfer Weg");
break;
}
case 106760:
{
returnValue = F("Frickengarten");
break;
}
case 106761:
{
returnValue = F("Frickenhake");
break;
}
case 106762:
{
returnValue = F("Frickenhausener Str.");
break;
}
case 106763:
{
returnValue = F("Frickenhauser Str.");
break;
}
case 106764:
{
returnValue = F("Frickenhausweg");
break;
}
case 106765:
{
returnValue = F("Frickenhofener Str.");
break;
}
case 106766:
{
returnValue = F("Frickenhofenstr.");
break;
}
case 106767:
{
returnValue = F("Frickenhofer Str.");
break;
}
case 106768:
{
returnValue = F("Frickenhäuser Str.");
break;
}
case 106769:
{
returnValue = F("Frickenhäuserweg");
break;
}
case 106770:
{
returnValue = F("Frickenhöchstädter Str.");
break;
}
case 106771:
{
returnValue = F("Frickenkamp");
break;
}
case 106772:
{
returnValue = F("Frickenlohweg");
break;
}
case 106773:
{
returnValue = F("Frickenstr.");
break;
}
case 106774:
{
returnValue = F("Frickentalplatz");
break;
}
case 106775:
{
returnValue = F("Frickentalstr.");
break;
}
case 106776:
{
returnValue = F("Frickenweg");
break;
}
case 106777:
{
returnValue = F("Frickenwiesenweg");
break;
}
case 106778:
{
returnValue = F("Frickenwäsele");
break;
}
case 106779:
{
returnValue = F("Fricker Platz");
break;
}
case 106780:
{
returnValue = F("Frickestr.");
break;
}
case 106781:
{
returnValue = F("Frickhinger Anlagen");
break;
}
case 106782:
{
returnValue = F("Frickhofener Str.");
break;
}
case 106783:
{
returnValue = F("Frickhöfer Str.");
break;
}
case 106784:
{
returnValue = F("Frickhöfferstr.");
break;
}
case 106785:
{
returnValue = F("Frickinger Str.");
break;
}
case 106786:
{
returnValue = F("Frickinger Tobel");
break;
}
case 106787:
{
returnValue = F("Fricksbachstr.");
break;
}
case 106788:
{
returnValue = F("Frickstr.");
break;
}
case 106789:
{
returnValue = F("Fricktalstr.");
break;
}
case 106790:
{
returnValue = F("Fricourtweg");
break;
}
case 106791:
{
returnValue = F("Frida-Kahlo-Str.");
break;
}
case 106792:
{
returnValue = F("Frida-Kahlo-Weg");
break;
}
case 106793:
{
returnValue = F("Frida-Lenz-Str.");
break;
}
case 106794:
{
returnValue = F("Frida-Schröer-Str.");
break;
}
case 106795:
{
returnValue = F("Frida-Schuhmacher-Str.");
break;
}
case 106796:
{
returnValue = F("Frida-Schönborn-Weg");
break;
}
case 106797:
{
returnValue = F("Frida-von-Soden-Str.");
break;
}
case 106798:
{
returnValue = F("Fridagsgut");
break;
}
case 106799:
{
returnValue = F("Fridagsweg");
break;
}
case 106800:
{
returnValue = F("Fridastr.");
break;
}
case 106801:
{
returnValue = F("Fridauer Str.");
break;
}
case 106802:
{
returnValue = F("Fridaweg");
break;
}
case 106803:
{
returnValue = F("Friddelbusch");
break;
}
case 106804:
{
returnValue = F("Friddenbüller Weg");
break;
}
case 106805:
{
returnValue = F("Frideggstr.");
break;
}
case 106806:
{
returnValue = F("Fridel-Dethleffs-Weg");
break;
}
case 106807:
{
returnValue = F("Friderunstr.");
break;
}
case 106808:
{
returnValue = F("Fridinger Str.");
break;
}
case 106809:
{
returnValue = F("Frido-Grelle-Str.");
break;
}
case 106810:
{
returnValue = F("Frido-Witte-Weg");
break;
}
case 106811:
{
returnValue = F("Fridolfinger Str.");
break;
}
case 106812:
{
returnValue = F("Fridolin-Amann-Str.");
break;
}
case 106813:
{
returnValue = F("Fridolin-Bischof-Str.");
break;
}
case 106814:
{
returnValue = F("Fridolin-Burgkard-Str.");
break;
}
case 106815:
{
returnValue = F("Fridolin-Endraß-Platz");
break;
}
case 106816:
{
returnValue = F("Fridolin-Endraß-Weg");
break;
}
case 106817:
{
returnValue = F("Fridolin-Engel-Str.");
break;
}
case 106818:
{
returnValue = F("Fridolin-Fink-Str.");
break;
}
case 106819:
{
returnValue = F("Fridolin-Holzer-Str.");
break;
}
case 106820:
{
returnValue = F("Fridolin-Kastl-Str.");
break;
}
case 106821:
{
returnValue = F("Fridolin-Lauber-Str.");
break;
}
case 106822:
{
returnValue = F("Fridolin-Mayer-Str.");
break;
}
case 106823:
{
returnValue = F("Fridolin-Schmid-Weg");
break;
}
case 106824:
{
returnValue = F("Fridolin-Vochezer-Str.");
break;
}
case 106825:
{
returnValue = F("Fridolin-Wißler-Str.");
break;
}
case 106826:
{
returnValue = F("Fridolina-Schuler-Str.");
break;
}
case 106827:
{
returnValue = F("Fridolinsbrücke");
break;
}
case 106828:
{
returnValue = F("Fridolinsgasse");
break;
}
case 106829:
{
returnValue = F("Fridolinstr.");
break;
}
case 106830:
{
returnValue = F("Fridrich Ebert Strasse");
break;
}
case 106831:
{
returnValue = F("Fridritter Str.");
break;
}
case 106832:
{
returnValue = F("Fridtjof-Nansen-Ring");
break;
}
case 106833:
{
returnValue = F("Fridtjof-Nansen-Str.");
break;
}
case 106834:
{
returnValue = F("Fridtjof-Nansen-Weg");
break;
}
case 106835:
{
returnValue = F("Friduwistr.");
break;
}
case 106836:
{
returnValue = F("Frieberting");
break;
}
case 106837:
{
returnValue = F("Friebertsheim");
break;
}
case 106838:
{
returnValue = F("Friebertshäuser Str.");
break;
}
case 106839:
{
returnValue = F("Friebestr.");
break;
}
case 106840:
{
returnValue = F("Friebuser Weg");
break;
}
case 106841:
{
returnValue = F("Fried-Heuler-Str.");
break;
}
case 106842:
{
returnValue = F("Fried-Lübbecke-Platz");
break;
}
case 106843:
{
returnValue = F("Fried-Walter-Str.");
break;
}
case 106844:
{
returnValue = F("Frieda-Bäcker-Str.");
break;
}
case 106845:
{
returnValue = F("Frieda-Engel-Weg");
break;
}
case 106846:
{
returnValue = F("Frieda-Forster-Str.");
break;
}
case 106847:
{
returnValue = F("Frieda-Fronmüller-Ring");
break;
}
case 106848:
{
returnValue = F("Frieda-Glücksmann-Str.");
break;
}
case 106849:
{
returnValue = F("Frieda-Gröner-Weg");
break;
}
case 106850:
{
returnValue = F("Frieda-Hense-Str.");
break;
}
case 106851:
{
returnValue = F("Frieda-Kröger-Zeile");
break;
}
case 106852:
{
returnValue = F("Frieda-Nadig-Stieg");
break;
}
case 106853:
{
returnValue = F("Frieda-Nadig-Str.");
break;
}
case 106854:
{
returnValue = F("Frieda-Nadig-Weg");
break;
}
case 106855:
{
returnValue = F("Frieda-Nading-Str.");
break;
}
case 106856:
{
returnValue = F("Frieda-Reißaus-Weg");
break;
}
case 106857:
{
returnValue = F("Frieda-Schwarz-Weg");
break;
}
case 106858:
{
returnValue = F("Frieda-Schäfer-Str.");
break;
}
case 106859:
{
returnValue = F("Frieda-Weber-Str.");
break;
}
case 106860:
{
returnValue = F("Frieda-Wild-Str.");
break;
}
case 106861:
{
returnValue = F("Friedach");
break;
}
case 106862:
{
returnValue = F("Friedaer Str.");
break;
}
case 106863:
{
returnValue = F("Friedastr.");
break;
}
case 106864:
{
returnValue = F("Friedaweg");
break;
}
case 106865:
{
returnValue = F("Friedbachstr.");
break;
}
case 106866:
{
returnValue = F("Friedberg");
break;
}
case 106867:
{
returnValue = F("Friedbergblick");
break;
}
case 106868:
{
returnValue = F("Friedberger Berg");
break;
}
case 106869:
{
returnValue = F("Friedberger Fußweg");
break;
}
case 106870:
{
returnValue = F("Friedberger Gäßchen");
break;
}
case 106871:
{
returnValue = F("Friedberger Landstr.");
break;
}
case 106872:
{
returnValue = F("Friedberger Str.");
break;
}
case 106873:
{
returnValue = F("Friedberger Weg");
break;
}
case 106874:
{
returnValue = F("Friedberger-Weg");
break;
}
case 106875:
{
returnValue = F("Friedbergstr.");
break;
}
case 106876:
{
returnValue = F("Friedbergweg");
break;
}
case 106877:
{
returnValue = F("Friedbichlerstr.");
break;
}
case 106878:
{
returnValue = F("Friedbichlweg");
break;
}
case 106879:
{
returnValue = F("Friedbüsch");
break;
}
case 106880:
{
returnValue = F("Friedbüschstr.");
break;
}
case 106881:
{
returnValue = F("Friede-Nadig-Str.");
break;
}
case 106882:
{
returnValue = F("Friedebacher Gasse");
break;
}
case 106883:
{
returnValue = F("Friedebacher Str.");
break;
}
case 106884:
{
returnValue = F("Friedebacher Weg");
break;
}
case 106885:
{
returnValue = F("Friedeberger Str.");
break;
}
case 106886:
{
returnValue = F("Friedeberger Weg");
break;
}
case 106887:
{
returnValue = F("Friedebergstr.");
break;
}
case 106888:
{
returnValue = F("Friedebreite");
break;
}
case 106889:
{
returnValue = F("Friedebrinkstr.");
break;
}
case 106890:
{
returnValue = F("Friedeburger Forstweg");
break;
}
case 106891:
{
returnValue = F("Friedeburger Grenzweg");
break;
}
case 106892:
{
returnValue = F("Friedeburger Hauptstr.");
break;
}
case 106893:
{
returnValue = F("Friedeburger Ochsenhammer Weg");
break;
}
case 106894:
{
returnValue = F("Friedeburger Schulweg");
break;
}
case 106895:
{
returnValue = F("Friedeburger Str.");
break;
}
case 106896:
{
returnValue = F("Friedeburger Weg");
break;
}
case 106897:
{
returnValue = F("Friedeburgstr.");
break;
}
case 106898:
{
returnValue = F("Friedefelder Str.");
break;
}
case 106899:
{
returnValue = F("Friedegart-Belusa-Str.");
break;
}
case 106900:
{
returnValue = F("Friedegasse");
break;
}
case 106901:
{
returnValue = F("Friedeheider Weg");
break;
}
case 106902:
{
returnValue = F("Friedeholzstr.");
break;
}
case 106903:
{
returnValue = F("Friedel Köther Weg");
break;
}
case 106904:
{
returnValue = F("Friedel-Heintz-Str.");
break;
}
case 106905:
{
returnValue = F("Friedel-Hoefer-Weg");
break;
}
case 106906:
{
returnValue = F("Friedel-Münch-Str.");
break;
}
case 106907:
{
returnValue = F("Friedel-Netzer-Str.");
break;
}
case 106908:
{
returnValue = F("Friedel-Schirmer-Str.");
break;
}
case 106909:
{
returnValue = F("Friedelhauser Str.");
break;
}
case 106910:
{
returnValue = F("Friedelholzweg");
break;
}
case 106911:
{
returnValue = F("Friedelind-Wagner-Str.");
break;
}
case 106912:
{
returnValue = F("Friedelsheimer Str.");
break;
}
case 106913:
{
returnValue = F("Friedelstr.");
break;
}
case 106914:
{
returnValue = F("Friedelweg");
break;
}
case 106915:
{
returnValue = F("Friedemann-Bach-Str.");
break;
}
case 106916:
{
returnValue = F("Friedenau");
break;
}
case 106917:
{
returnValue = F("Friedenauer Str.");
break;
}
case 106918:
{
returnValue = F("Friedenauer Weg");
break;
}
case 106919:
{
returnValue = F("Friedenaustr.");
break;
}
case 106920:
{
returnValue = F("Friedenbachstr.");
break;
}
case 106921:
{
returnValue = F("Friedenberger Str.");
break;
}
case 106922:
{
returnValue = F("Friedenbergstr.");
break;
}
case 106923:
{
returnValue = F("Friedendorfer Str.");
break;
}
case 106924:
{
returnValue = F("Friedenfelder Weg");
break;
}
case 106925:
{
returnValue = F("Friedenfelser Str.");
break;
}
case 106926:
{
returnValue = F("Friedenfelserweg");
break;
}
case 106927:
{
returnValue = F("Friedenhain");
break;
}
case 106928:
{
returnValue = F("Friedenhainer Str.");
break;
}
case 106929:
{
returnValue = F("Friedenheimstr.");
break;
}
case 106930:
{
returnValue = F("Friedenrathstr.");
break;
}
case 106931:
{
returnValue = F("Friedens Aue");
break;
}
case 106932:
{
returnValue = F("Friedens Eiche");
break;
}
case 106933:
{
returnValue = F("Friedens-Allee");
break;
}
case 106934:
{
returnValue = F("Friedensallee");
break;
}
case 106935:
{
returnValue = F("Friedensanlage");
break;
}
case 106936:
{
returnValue = F("Friedensau");
break;
}
case 106937:
{
returnValue = F("Friedensaue");
break;
}
case 106938:
{
returnValue = F("Friedensauer Str.");
break;
}
case 106939:
{
returnValue = F("Friedensberg");
break;
}
case 106940:
{
returnValue = F("Friedensbergweg");
break;
}
case 106941:
{
returnValue = F("Friedensblick");
break;
}
case 106942:
{
returnValue = F("Friedensbrücke");
break;
}
case 106943:
{
returnValue = F("Friedensburg");
break;
}
case 106944:
{
returnValue = F("Friedensburgstr.");
break;
}
case 106945:
{
returnValue = F("Friedensdorfer Str.");
break;
}
case 106946:
{
returnValue = F("Friedensdorfer Weg");
break;
}
case 106947:
{
returnValue = F("Friedenseck");
break;
}
case 106948:
{
returnValue = F("Friedenseiche");
break;
}
case 106949:
{
returnValue = F("Friedenseichenweg");
break;
}
case 106950:
{
returnValue = F("Friedenseicheplatz");
break;
}
case 106951:
{
returnValue = F("Friedensgasse");
break;
}
case 106952:
{
returnValue = F("Friedensgärtchen");
break;
}
case 106953:
{
returnValue = F("Friedenshain");
break;
}
case 106954:
{
returnValue = F("Friedensheim");
break;
}
case 106955:
{
returnValue = F("Friedensheimer Str.");
break;
}
case 106956:
{
returnValue = F("Friedensheimer Weg");
break;
}
case 106957:
{
returnValue = F("Friedenshof");
break;
}
case 106958:
{
returnValue = F("Friedenshort");
break;
}
case 106959:
{
returnValue = F("Friedenshortstr.");
break;
}
case 106960:
{
returnValue = F("Friedenshöhe");
break;
}
case 106961:
{
returnValue = F("Friedenshöher Str.");
break;
}
case 106962:
{
returnValue = F("Friedenshöheweg");
break;
}
case 106963:
{
returnValue = F("Friedenshügel");
break;
}
case 106964:
{
returnValue = F("Friedensinsel");
break;
}
case 106965:
{
returnValue = F("Friedenskamp");
break;
}
case 106966:
{
returnValue = F("Friedenskreuz");
break;
}
case 106967:
{
returnValue = F("Friedenslinde");
break;
}
case 106968:
{
returnValue = F("Friedenslindeweg");
break;
}
case 106969:
{
returnValue = F("Friedenspark");
break;
}
case 106970:
{
returnValue = F("Friedenspfad");
break;
}
case 106971:
{
returnValue = F("Friedensplan");
break;
}
case 106972:
{
returnValue = F("Friedensplatz");
break;
}
case 106973:
{
returnValue = F("Friedensreich-Hundertwasser-Platz");
break;
}
case 106974:
{
returnValue = F("Friedensring");
break;
}
case 106975:
{
returnValue = F("Friedensruh");
break;
}
case 106976:
{
returnValue = F("Friedensschachtstr.");
break;
}
case 106977:
{
returnValue = F("Friedenssiedlung");
break;
}
case 106978:
{
returnValue = F("Friedensstarße");
break;
}
case 106979:
{
returnValue = F("Friedensstr.");
break;
}
case 106980:
{
returnValue = F("Friedenstal");
break;
}
case 106981:
{
returnValue = F("Friedenstaler Str.");
break;
}
case 106982:
{
returnValue = F("Friedenstaler Weg");
break;
}
case 106983:
{
returnValue = F("Friedenstalstr.");
break;
}
case 106984:
{
returnValue = F("Friedensteinstr.");
break;
}
case 106985:
{
returnValue = F("Friedenstr.");
break;
}
case 106986:
{
returnValue = F("Friedenstreppe");
break;
}
case 106987:
{
returnValue = F("Friedenswald");
break;
}
case 106988:
{
returnValue = F("Friedensweg");
break;
}
case 106989:
{
returnValue = F("Friedenswinkel");
break;
}
case 106990:
{
returnValue = F("Friedentalstr.");
break;
}
case 106991:
{
returnValue = F("Friedenthaler Weg");
break;
}
case 106992:
{
returnValue = F("Friedenweg");
break;
}
case 106993:
{
returnValue = F("Friedenweilerstr.");
break;
}
case 106994:
{
returnValue = F("Frieder-Nögge-Weg");
break;
}
case 106995:
{
returnValue = F("Frieder-Schwarz-Weg");
break;
}
case 106996:
{
returnValue = F("Friederica-Kocher-Str.");
break;
}
case 106997:
{
returnValue = F("Friederich-Diffiné-Str.");
break;
}
case 106998:
{
returnValue = F("Friederich-Eber-Str.");
break;
}
case 106999:
{
returnValue = F("Friederich-Thies-Weg");
break;
}
case 107000:
{
returnValue = F("Friederichstr.");
break;
}
case 107001:
{
returnValue = F("Friedericistr.");
break;
}
case 107002:
{
returnValue = F("Friedericke-Krüger-Str.");
break;
}
case 107003:
{
returnValue = F("Friedericke-Nadig-Weg");
break;
}
case 107004:
{
returnValue = F("Friedericus-van-Bree-Str.");
break;
}
case 107005:
{
returnValue = F("Friederike-Brion-Weg");
break;
}
case 107006:
{
returnValue = F("Friederike-Fliedner-Str.");
break;
}
case 107007:
{
returnValue = F("Friederike-Franck-Str.");
break;
}
case 107008:
{
returnValue = F("Friederike-Fricke-Weg");
break;
}
case 107009:
{
returnValue = F("Friederike-Henrici-Str.");
break;
}
case 107010:
{
returnValue = F("Friederike-Krüger-Str.");
break;
}
case 107011:
{
returnValue = F("Friederike-Luise-Allee");
break;
}
case 107012:
{
returnValue = F("Friederike-Mannel-Str.");
break;
}
case 107013:
{
returnValue = F("Friederike-Nadig Str.");
break;
}
case 107014:
{
returnValue = F("Friederike-Nadig-Str.");
break;
}
case 107015:
{
returnValue = F("Friederike-Nadig-Weg");
break;
}
case 107016:
{
returnValue = F("Friederike-Peuschel-Str.");
break;
}
case 107017:
{
returnValue = F("Friederike-Renata Weg");
break;
}
case 107018:
{
returnValue = F("Friederiken Geräumt");
break;
}
case 107019:
{
returnValue = F("Friederiken-Brücke");
break;
}
case 107020:
{
returnValue = F("Friederikenfeld");
break;
}
case 107021:
{
returnValue = F("Friederikenhofer Str.");
break;
}
case 107022:
{
returnValue = F("Friederikenplatz");
break;
}
case 107023:
{
returnValue = F("Friederikenring");
break;
}
case 107024:
{
returnValue = F("Friederikenstr.");
break;
}
case 107025:
{
returnValue = F("Friederikental");
break;
}
case 107026:
{
returnValue = F("Friederikenthaler Weg");
break;
}
case 107027:
{
returnValue = F("Friederikenweg");
break;
}
case 107028:
{
returnValue = F("Friederikeweg");
break;
}
case 107029:
{
returnValue = F("Friedersdorf");
break;
}
case 107030:
{
returnValue = F("Friedersdorfer Chaussee");
break;
}
case 107031:
{
returnValue = F("Friedersdorfer Hauptstr.");
break;
}
case 107032:
{
returnValue = F("Friedersdorfer Siedlung");
break;
}
case 107033:
{
returnValue = F("Friedersdorfer Str.");
break;
}
case 107034:
{
returnValue = F("Friedersdorfer Weg");
break;
}
case 107035:
{
returnValue = F("Friedersreuther Str.");
break;
}
case 107036:
{
returnValue = F("Friedersried");
break;
}
case 107037:
{
returnValue = F("Friedersrieder Str.");
break;
}
case 107038:
{
returnValue = F("Friederweg");
break;
}
case 107039:
{
returnValue = F("Friedestr.");
break;
}
case 107040:
{
returnValue = F("Friedewalder Str.");
break;
}
case 107041:
{
returnValue = F("Friedewaldstr.");
break;
}
case 107042:
{
returnValue = F("Friedewaldweg");
break;
}
case 107043:
{
returnValue = F("Friedeweg");
break;
}
case 107044:
{
returnValue = F("Friedewälder Str.");
break;
}
case 107045:
{
returnValue = F("Friedgarten Mitteldeutschland (Ökofriedhof)");
break;
}
case 107046:
{
returnValue = F("Friedgartenstr.");
break;
}
case 107047:
{
returnValue = F("Friedgasse");
break;
}
case 107048:
{
returnValue = F("Friedgrasstr.");
break;
}
case 107049:
{
returnValue = F("Friedhafstr.");
break;
}
case 107050:
{
returnValue = F("Friedhager Str.");
break;
}
case 107051:
{
returnValue = F("Friedhardtskirchener Str.");
break;
}
case 107052:
{
returnValue = F("Friedheim");
break;
}
case 107053:
{
returnValue = F("Friedheimer Str.");
break;
}
case 107054:
{
returnValue = F("Friedheimer Waldweg");
break;
}
case 107055:
{
returnValue = F("Friedheimer Weg");
break;
}
case 107056:
{
returnValue = F("Friedhelm-Gärtner-Str.");
break;
}
case 107057:
{
returnValue = F("Friedhelm-Jansen-Weg");
break;
}
case 107058:
{
returnValue = F("Friedhof");
break;
}
case 107059:
{
returnValue = F("Friedhof Gottesacker");
break;
}
case 107060:
{
returnValue = F("Friedhof Groß Neuendorf");
break;
}
case 107061:
{
returnValue = F("Friedhof Hausneindorf");
break;
}
case 107062:
{
returnValue = F("Friedhof Holzhausen");
break;
}
case 107063:
{
returnValue = F("Friedhof Homburg");
break;
}
case 107064:
{
returnValue = F("Friedhof Maßweiler");
break;
}
case 107065:
{
returnValue = F("Friedhof Sagard");
break;
}
case 107066:
{
returnValue = F("Friedhof Schlangen");
break;
}
case 107067:
{
returnValue = F("Friedhof Str.");
break;
}
case 107068:
{
returnValue = F("Friedhofallee");
break;
}
case 107069:
{
returnValue = F("Friedhofberg");
break;
}
case 107070:
{
returnValue = F("Friedhofgasse");
break;
}
case 107071:
{
returnValue = F("Friedhofgäßle");
break;
}
case 107072:
{
returnValue = F("Friedhofpark");
break;
}
case 107073:
{
returnValue = F("Friedhofpfad");
break;
}
case 107074:
{
returnValue = F("Friedhofpfad / Im Brühl");
break;
}
case 107075:
{
returnValue = F("Friedhofplatz");
break;
}
case 107076:
{
returnValue = F("Friedhofpromenade");
break;
}
case 107077:
{
returnValue = F("Friedhofring");
break;
}
case 107078:
{
returnValue = F("Friedhofsallee");
break;
}
case 107079:
{
returnValue = F("Friedhofsberg");
break;
}
case 107080:
{
returnValue = F("Friedhofsbrücke");
break;
}
case 107081:
{
returnValue = F("Friedhofschneise");
break;
}
case 107082:
{
returnValue = F("Friedhofsdamm");
break;
}
case 107083:
{
returnValue = F("Friedhofseingang");
break;
}
case 107084:
{
returnValue = F("Friedhofsfußweg");
break;
}
case 107085:
{
returnValue = F("Friedhofsgang");
break;
}
case 107086:
{
returnValue = F("Friedhofsgarten");
break;
}
case 107087:
{
returnValue = F("Friedhofsgasse");
break;
}
case 107088:
{
returnValue = F("Friedhofsgässchen");
break;
}
case 107089:
{
returnValue = F("Friedhofsgäßchen");
break;
}
case 107090:
{
returnValue = F("Friedhofspark");
break;
}
case 107091:
{
returnValue = F("Friedhofsplatz");
break;
}
case 107092:
{
returnValue = F("Friedhofspromenade");
break;
}
case 107093:
{
returnValue = F("Friedhofspädchen");
break;
}
case 107094:
{
returnValue = F("Friedhofssiedlung");
break;
}
case 107095:
{
returnValue = F("Friedhofsstr.");
break;
}
case 107096:
{
returnValue = F("Friedhofsteig");
break;
}
case 107097:
{
returnValue = F("Friedhofsteige");
break;
}
case 107098:
{
returnValue = F("Friedhofstr.");
break;
}
case 107099:
{
returnValue = F("Friedhofstr. 18");
break;
}
case 107100:
{
returnValue = F("Friedhofswall");
break;
}
case 107101:
{
returnValue = F("Friedhofsweg");
break;
}
case 107102:
{
returnValue = F("Friedhofszugang");
break;
}
case 107103:
{
returnValue = F("Friedhoftstr.");
break;
}
case 107104:
{
returnValue = F("Friedhofweg");
break;
}
case 107105:
{
returnValue = F("Friedholt");
break;
}
case 107106:
{
returnValue = F("Friedigeröder Str.");
break;
}
case 107107:
{
returnValue = F("Friedinger Str.");
break;
}
case 107108:
{
returnValue = F("Friedinger Weg");
break;
}
case 107109:
{
returnValue = F("Friedkensweg");
break;
}
case 107110:
{
returnValue = F("Friedland");
break;
}
case 107111:
{
returnValue = F("Friedland, Mohrmannshof");
break;
}
case 107112:
{
returnValue = F("Friedlandplatz");
break;
}
case 107113:
{
returnValue = F("Friedlandstr.");
break;
}
case 107114:
{
returnValue = F("Friedlandweg");
break;
}
case 107115:
{
returnValue = F("Friedleinstr.");
break;
}
case 107116:
{
returnValue = F("Friedleweg");
break;
}
case 107117:
{
returnValue = F("Friedlieb-Ferdinand-Runge-Str.");
break;
}
case 107118:
{
returnValue = F("Friedliebstr.");
break;
}
case 107119:
{
returnValue = F("Friedliner Str.");
break;
}
case 107120:
{
returnValue = F("Friedloser Str.");
break;
}
case 107121:
{
returnValue = F("Friedlweg");
break;
}
case 107122:
{
returnValue = F("Friedländer Ausbau");
break;
}
case 107123:
{
returnValue = F("Friedländer Berg");
break;
}
case 107124:
{
returnValue = F("Friedländer Chaussee");
break;
}
case 107125:
{
returnValue = F("Friedländer Eck");
break;
}
case 107126:
{
returnValue = F("Friedländer Landstr.");
break;
}
case 107127:
{
returnValue = F("Friedländer Str.");
break;
}
case 107128:
{
returnValue = F("Friedländer Weg");
break;
}
case 107129:
{
returnValue = F("Friedmannsdorf");
break;
}
case 107130:
{
returnValue = F("Friedmannsdorfer Str.");
break;
}
case 107131:
{
returnValue = F("Friedmar-Brendel-Weg");
break;
}
case 107132:
{
returnValue = F("Friedmate");
break;
}
case 107133:
{
returnValue = F("Friedorfer Hof");
break;
}
case 107134:
{
returnValue = F("Friedr-Bodelschwingh-Str.");
break;
}
case 107135:
{
returnValue = F("Friedr.-Karl-Ströher-Str.");
break;
}
case 107136:
{
returnValue = F("Friedr.-Schoppenhorst-Weg");
break;
}
case 107137:
{
returnValue = F("Friedr.-v.-Bodelschwingh-Str.");
break;
}
case 107138:
{
returnValue = F("Friedrich Baumann Siedlung");
break;
}
case 107139:
{
returnValue = F("Friedrich Chrysander Park");
break;
}
case 107140:
{
returnValue = F("Friedrich Ebert Str.");
break;
}
case 107141:
{
returnValue = F("Friedrich der Große");
break;
}
case 107142:
{
returnValue = F("Friedrich-A.-Tischbein-Str.");
break;
}
case 107143:
{
returnValue = F("Friedrich-Abel-Str.");
break;
}
case 107144:
{
returnValue = F("Friedrich-Abert-Str.");
break;
}
case 107145:
{
returnValue = F("Friedrich-Ackermann-Str.");
break;
}
case 107146:
{
returnValue = F("Friedrich-Adler-Str.");
break;
}
case 107147:
{
returnValue = F("Friedrich-Adlung-Str.");
break;
}
case 107148:
{
returnValue = F("Friedrich-Adolf-Lampe-Str.");
break;
}
case 107149:
{
returnValue = F("Friedrich-Adolf-Richter-Str.");
break;
}
case 107150:
{
returnValue = F("Friedrich-Adolf-Soergel-Str.");
break;
}
case 107151:
{
returnValue = F("Friedrich-Adolf-Str.");
break;
}
case 107152:
{
returnValue = F("Friedrich-Alber-Weg");
break;
}
case 107153:
{
returnValue = F("Friedrich-Albert-Lange-Str.");
break;
}
case 107154:
{
returnValue = F("Friedrich-Andrae-Str.");
break;
}
case 107155:
{
returnValue = F("Friedrich-Anton-Ulrich-Str.");
break;
}
case 107156:
{
returnValue = F("Friedrich-Asbeck-Str.");
break;
}
case 107157:
{
returnValue = F("Friedrich-August-Lehlbach-Platz");
break;
}
case 107158:
{
returnValue = F("Friedrich-August-Stein");
break;
}
case 107159:
{
returnValue = F("Friedrich-August-Str.");
break;
}
case 107160:
{
returnValue = F("Friedrich-August-von-Pauli-Str.");
break;
}
case 107161:
{
returnValue = F("Friedrich-Augustengroden");
break;
}
case 107162:
{
returnValue = F("Friedrich-Bach-Str.");
break;
}
case 107163:
{
returnValue = F("Friedrich-Back-Str.");
break;
}
case 107164:
{
returnValue = F("Friedrich-Bamberg-Ring");
break;
}
case 107165:
{
returnValue = F("Friedrich-Bangert-Str.");
break;
}
case 107166:
{
returnValue = F("Friedrich-Barenscheer-Weg");
break;
}
case 107167:
{
returnValue = F("Friedrich-Barnewitz-Str.");
break;
}
case 107168:
{
returnValue = F("Friedrich-Barnutz-Str.");
break;
}
case 107169:
{
returnValue = F("Friedrich-Barth-Str.");
break;
}
case 107170:
{
returnValue = F("Friedrich-Bassemir-Str.");
break;
}
case 107171:
{
returnValue = F("Friedrich-Bauer-Str.");
break;
}
case 107172:
{
returnValue = F("Friedrich-Bauer-Weg");
break;
}
case 107173:
{
returnValue = F("Friedrich-Baur-Str.");
break;
}
case 107174:
{
returnValue = F("Friedrich-Bayer-Str.");
break;
}
case 107175:
{
returnValue = F("Friedrich-Bebensee-Str.");
break;
}
case 107176:
{
returnValue = F("Friedrich-Becker-Str.");
break;
}
case 107177:
{
returnValue = F("Friedrich-Behrens-Str.");
break;
}
case 107178:
{
returnValue = F("Friedrich-Beisse-Str.");
break;
}
case 107179:
{
returnValue = F("Friedrich-Belg-Str.");
break;
}
case 107180:
{
returnValue = F("Friedrich-Bender-Str.");
break;
}
case 107181:
{
returnValue = F("Friedrich-Benjamin-Osiander-Weg");
break;
}
case 107182:
{
returnValue = F("Friedrich-Bergius-Ring");
break;
}
case 107183:
{
returnValue = F("Friedrich-Bergius-Str.");
break;
}
case 107184:
{
returnValue = F("Friedrich-Bering-Str.");
break;
}
case 107185:
{
returnValue = F("Friedrich-Bernhardt-Str.");
break;
}
case 107186:
{
returnValue = F("Friedrich-Bernheim-Str.");
break;
}
case 107187:
{
returnValue = F("Friedrich-Bertram-Weg");
break;
}
case 107188:
{
returnValue = F("Friedrich-Bertsche-Str.");
break;
}
case 107189:
{
returnValue = F("Friedrich-Bessel-Str.");
break;
}
case 107190:
{
returnValue = F("Friedrich-Binder-Str.");
break;
}
case 107191:
{
returnValue = F("Friedrich-Birkendahl-Str.");
break;
}
case 107192:
{
returnValue = F("Friedrich-Bischoff-Str.");
break;
}
case 107193:
{
returnValue = F("Friedrich-Blersch-Str.");
break;
}
case 107194:
{
returnValue = F("Friedrich-Blink-Str.");
break;
}
case 107195:
{
returnValue = F("Friedrich-Blohm-Ring");
break;
}
case 107196:
{
returnValue = F("Friedrich-Bodelschwingh-Str.");
break;
}
case 107197:
{
returnValue = F("Friedrich-Bogler-Str.");
break;
}
case 107198:
{
returnValue = F("Friedrich-Borchers-Str.");
break;
}
case 107199:
{
returnValue = F("Friedrich-Borgwardt-Str.");
break;
}
case 107200:
{
returnValue = F("Friedrich-Boysen-Str.");
break;
}
case 107201:
{
returnValue = F("Friedrich-Bracht-Str.");
break;
}
case 107202:
{
returnValue = F("Friedrich-Brandt-Str.");
break;
}
case 107203:
{
returnValue = F("Friedrich-Breining-Str.");
break;
}
case 107204:
{
returnValue = F("Friedrich-Breitbach-Str.");
break;
}
case 107205:
{
returnValue = F("Friedrich-Brinkmann-Str.");
break;
}
case 107206:
{
returnValue = F("Friedrich-Brockhoff-Str.");
break;
}
case 107207:
{
returnValue = F("Friedrich-Bruch-Str.");
break;
}
case 107208:
{
returnValue = F("Friedrich-Brücke");
break;
}
case 107209:
{
returnValue = F("Friedrich-Brücker-Str.");
break;
}
case 107210:
{
returnValue = F("Friedrich-Brülle-Str.");
break;
}
case 107211:
{
returnValue = F("Friedrich-Burr-Str.");
break;
}
case 107212:
{
returnValue = F("Friedrich-Burschell-Weg");
break;
}
case 107213:
{
returnValue = F("Friedrich-Buschmann-Ring");
break;
}
case 107214:
{
returnValue = F("Friedrich-Bähre-Str.");
break;
}
case 107215:
{
returnValue = F("Friedrich-Böhlen-Str.");
break;
}
case 107216:
{
returnValue = F("Friedrich-Bölck-Str.");
break;
}
case 107217:
{
returnValue = F("Friedrich-Bückling-Str.");
break;
}
case 107218:
{
returnValue = F("Friedrich-Bülten-Str.");
break;
}
case 107219:
{
returnValue = F("Friedrich-Bürklein-Str.");
break;
}
case 107220:
{
returnValue = F("Friedrich-Cammin-Weg");
break;
}
case 107221:
{
returnValue = F("Friedrich-Carl-Str.");
break;
}
case 107222:
{
returnValue = F("Friedrich-Carstens-Stieg");
break;
}
case 107223:
{
returnValue = F("Friedrich-Caspar-Str.");
break;
}
case 107224:
{
returnValue = F("Friedrich-Castelle-Str.");
break;
}
case 107225:
{
returnValue = F("Friedrich-Castelle-Weg");
break;
}
case 107226:
{
returnValue = F("Friedrich-Christoph-Müller-Str.");
break;
}
case 107227:
{
returnValue = F("Friedrich-Corcilius-Weg");
break;
}
case 107228:
{
returnValue = F("Friedrich-Daake-Str.");
break;
}
case 107229:
{
returnValue = F("Friedrich-Dannenmann-Str.");
break;
}
case 107230:
{
returnValue = F("Friedrich-Daps-Weg");
break;
}
case 107231:
{
returnValue = F("Friedrich-Dedecke-Str.");
break;
}
case 107232:
{
returnValue = F("Friedrich-Deike-Ring");
break;
}
case 107233:
{
returnValue = F("Friedrich-Dessloch-Str.");
break;
}
case 107234:
{
returnValue = F("Friedrich-Deusch-Str.");
break;
}
case 107235:
{
returnValue = F("Friedrich-Dietsche-Str.");
break;
}
case 107236:
{
returnValue = F("Friedrich-Dietz-Str.");
break;
}
case 107237:
{
returnValue = F("Friedrich-Distel-Str.");
break;
}
case 107238:
{
returnValue = F("Friedrich-Domeyer-Str.");
break;
}
case 107239:
{
returnValue = F("Friedrich-Drake-Str.");
break;
}
case 107240:
{
returnValue = F("Friedrich-Dreyer-Str.");
break;
}
case 107241:
{
returnValue = F("Friedrich-Drinkuth-Str.");
break;
}
case 107242:
{
returnValue = F("Friedrich-Duss-Str.");
break;
}
case 107243:
{
returnValue = F("Friedrich-Dümmler-Str.");
break;
}
case 107244:
{
returnValue = F("Friedrich-Dürr-Str.");
break;
}
case 107245:
{
returnValue = F("Friedrich-Dürrenmatt-Str.");
break;
}
case 107246:
{
returnValue = F("Friedrich-Ebel-Weg");
break;
}
case 107247:
{
returnValue = F("Friedrich-Ebert Str.");
break;
}
case 107248:
{
returnValue = F("Friedrich-Ebert-Allee");
break;
}
case 107249:
{
returnValue = F("Friedrich-Ebert-Anlage");
break;
}
case 107250:
{
returnValue = F("Friedrich-Ebert-Brücke");
break;
}
case 107251:
{
returnValue = F("Friedrich-Ebert-Gasse");
break;
}
case 107252:
{
returnValue = F("Friedrich-Ebert-Park");
break;
}
case 107253:
{
returnValue = F("Friedrich-Ebert-Platz");
break;
}
case 107254:
{
returnValue = F("Friedrich-Ebert-Ring");
break;
}
case 107255:
{
returnValue = F("Friedrich-Ebert-Siedlung");
break;
}
case 107256:
{
returnValue = F("Friedrich-Ebert-Str.");
break;
}
case 107257:
{
returnValue = F("Friedrich-Ebert-Wall");
break;
}
case 107258:
{
returnValue = F("Friedrich-Ebert-Weg");
break;
}
case 107259:
{
returnValue = F("Friedrich-Eck-Str.");
break;
}
case 107260:
{
returnValue = F("Friedrich-Eckardt-Str.");
break;
}
case 107261:
{
returnValue = F("Friedrich-Eckert-Str.");
break;
}
case 107262:
{
returnValue = F("Friedrich-Egermann-Weg");
break;
}
case 107263:
{
returnValue = F("Friedrich-Eggers-Str.");
break;
}
case 107264:
{
returnValue = F("Friedrich-Eicke-Str.");
break;
}
case 107265:
{
returnValue = F("Friedrich-Eigenbrod-Str.");
break;
}
case 107266:
{
returnValue = F("Friedrich-Einhoff-Ring");
break;
}
case 107267:
{
returnValue = F("Friedrich-Eisenmenger-Str.");
break;
}
case 107268:
{
returnValue = F("Friedrich-Elfers-Weg");
break;
}
case 107269:
{
returnValue = F("Friedrich-Emmerich-Str.");
break;
}
case 107270:
{
returnValue = F("Friedrich-Endemann-Str.");
break;
}
case 107271:
{
returnValue = F("Friedrich-Engelbert-Weg");
break;
}
case 107272:
{
returnValue = F("Friedrich-Engelhardt-Str.");
break;
}
case 107273:
{
returnValue = F("Friedrich-Engelhorn Str.");
break;
}
case 107274:
{
returnValue = F("Friedrich-Engelhorn-Str.");
break;
}
case 107275:
{
returnValue = F("Friedrich-Engels Str.");
break;
}
case 107276:
{
returnValue = F("Friedrich-Engels-Allee");
break;
}
case 107277:
{
returnValue = F("Friedrich-Engels-Berg");
break;
}
case 107278:
{
returnValue = F("Friedrich-Engels-Damm");
break;
}
case 107279:
{
returnValue = F("Friedrich-Engels-Platz");
break;
}
case 107280:
{
returnValue = F("Friedrich-Engels-Ring");
break;
}
case 107281:
{
returnValue = F("Friedrich-Engels-Siedlung");
break;
}
case 107282:
{
returnValue = F("Friedrich-Engels-Str.");
break;
}
case 107283:
{
returnValue = F("Friedrich-Engels-Weg");
break;
}
case 107284:
{
returnValue = F("Friedrich-Esswurm-Str.");
break;
}
case 107285:
{
returnValue = F("Friedrich-Fangmeier-Str.");
break;
}
case 107286:
{
returnValue = F("Friedrich-Fendt-Str.");
break;
}
case 107287:
{
returnValue = F("Friedrich-Fick-Str.");
break;
}
case 107288:
{
returnValue = F("Friedrich-Fischer-Str.");
break;
}
case 107289:
{
returnValue = F("Friedrich-Fischer-Weg");
break;
}
case 107290:
{
returnValue = F("Friedrich-Fleischauer-Str.");
break;
}
case 107291:
{
returnValue = F("Friedrich-Flick-Str.");
break;
}
case 107292:
{
returnValue = F("Friedrich-Franz-Schneise");
break;
}
case 107293:
{
returnValue = F("Friedrich-Franz-Str.");
break;
}
case 107294:
{
returnValue = F("Friedrich-Freitag-Str.");
break;
}
case 107295:
{
returnValue = F("Friedrich-Freudenthal-Str.");
break;
}
case 107296:
{
returnValue = F("Friedrich-Freye-Str.");
break;
}
case 107297:
{
returnValue = F("Friedrich-Friesen-Str.");
break;
}
case 107298:
{
returnValue = F("Friedrich-Froh-Str.");
break;
}
case 107299:
{
returnValue = F("Friedrich-Fröbel-Str.");
break;
}
case 107300:
{
returnValue = F("Friedrich-Fröbel-Weg");
break;
}
case 107301:
{
returnValue = F("Friedrich-Fuckel-Str.");
break;
}
case 107302:
{
returnValue = F("Friedrich-Gauss-Str.");
break;
}
case 107303:
{
returnValue = F("Friedrich-Gauß-Ring");
break;
}
case 107304:
{
returnValue = F("Friedrich-Gauß-Str.");
break;
}
case 107305:
{
returnValue = F("Friedrich-Gauß-Weg");
break;
}
case 107306:
{
returnValue = F("Friedrich-Gehring-Str.");
break;
}
case 107307:
{
returnValue = F("Friedrich-Gelsam-Str.");
break;
}
case 107308:
{
returnValue = F("Friedrich-Georg-Schmieder-Str.");
break;
}
case 107309:
{
returnValue = F("Friedrich-Gerg-Str.");
break;
}
case 107310:
{
returnValue = F("Friedrich-Gerlach-Str.");
break;
}
case 107311:
{
returnValue = F("Friedrich-Gerner-Ring");
break;
}
case 107312:
{
returnValue = F("Friedrich-Gerstlacher-Str.");
break;
}
case 107313:
{
returnValue = F("Friedrich-Gerstäcker-Str.");
break;
}
case 107314:
{
returnValue = F("Friedrich-Gerstäcker-Weg");
break;
}
case 107315:
{
returnValue = F("Friedrich-Geselschap-Str.");
break;
}
case 107316:
{
returnValue = F("Friedrich-Geyer-Str.");
break;
}
case 107317:
{
returnValue = F("Friedrich-Geßler-Str.");
break;
}
case 107318:
{
returnValue = F("Friedrich-Glier-Str.");
break;
}
case 107319:
{
returnValue = F("Friedrich-Glück-Str.");
break;
}
case 107320:
{
returnValue = F("Friedrich-Goerdeler-Str.");
break;
}
case 107321:
{
returnValue = F("Friedrich-Goetze-Str.");
break;
}
case 107322:
{
returnValue = F("Friedrich-Goll-Weg");
break;
}
case 107323:
{
returnValue = F("Friedrich-Gottlieb-Klopstock-Str.");
break;
}
case 107324:
{
returnValue = F("Friedrich-Gottlob-Keller-Siedlung");
break;
}
case 107325:
{
returnValue = F("Friedrich-Gottlob-Keller-Str.");
break;
}
case 107326:
{
returnValue = F("Friedrich-Graepel-Damm");
break;
}
case 107327:
{
returnValue = F("Friedrich-Graf-Str.");
break;
}
case 107328:
{
returnValue = F("Friedrich-Grasow-Str.");
break;
}
case 107329:
{
returnValue = F("Friedrich-Greiner-Str.");
break;
}
case 107330:
{
returnValue = F("Friedrich-Greve-Str.");
break;
}
case 107331:
{
returnValue = F("Friedrich-Grieb-Weg");
break;
}
case 107332:
{
returnValue = F("Friedrich-Griese-Str.");
break;
}
case 107333:
{
returnValue = F("Friedrich-Griese-Weg");
break;
}
case 107334:
{
returnValue = F("Friedrich-Grimm-Str.");
break;
}
case 107335:
{
returnValue = F("Friedrich-Grohe-Str.");
break;
}
case 107336:
{
returnValue = F("Friedrich-Groos-Str.");
break;
}
case 107337:
{
returnValue = F("Friedrich-Grosholz-Weg");
break;
}
case 107338:
{
returnValue = F("Friedrich-Grotmak-Str.");
break;
}
case 107339:
{
returnValue = F("Friedrich-Groß-Str.");
break;
}
case 107340:
{
returnValue = F("Friedrich-Großheim-Str.");
break;
}
case 107341:
{
returnValue = F("Friedrich-Großmann-Weg");
break;
}
case 107342:
{
returnValue = F("Friedrich-Gruhl-Str.");
break;
}
case 107343:
{
returnValue = F("Friedrich-Gräf-Str.");
break;
}
case 107344:
{
returnValue = F("Friedrich-Gutöhrlein-Str.");
break;
}
case 107345:
{
returnValue = F("Friedrich-Günther-Park");
break;
}
case 107346:
{
returnValue = F("Friedrich-Haag-Platz");
break;
}
case 107347:
{
returnValue = F("Friedrich-Haarstick-Str.");
break;
}
case 107348:
{
returnValue = F("Friedrich-Haas-Weg");
break;
}
case 107349:
{
returnValue = F("Friedrich-Hacker-Str.");
break;
}
case 107350:
{
returnValue = F("Friedrich-Hage-Weg");
break;
}
case 107351:
{
returnValue = F("Friedrich-Hahn-Str.");
break;
}
case 107352:
{
returnValue = F("Friedrich-Hamm-Str.");
break;
}
case 107353:
{
returnValue = F("Friedrich-Harkort-Str.");
break;
}
case 107354:
{
returnValue = F("Friedrich-Harkort-Weg");
break;
}
case 107355:
{
returnValue = F("Friedrich-Hartmann-Str.");
break;
}
case 107356:
{
returnValue = F("Friedrich-Hartung-Str.");
break;
}
case 107357:
{
returnValue = F("Friedrich-Haug-Str.");
break;
}
case 107358:
{
returnValue = F("Friedrich-Haupt-Str.");
break;
}
case 107359:
{
returnValue = F("Friedrich-Haux-Str.");
break;
}
case 107360:
{
returnValue = F("Friedrich-Hayn-Str.");
break;
}
case 107361:
{
returnValue = F("Friedrich-Hebbel-Ring");
break;
}
case 107362:
{
returnValue = F("Friedrich-Hebbel-Str.");
break;
}
case 107363:
{
returnValue = F("Friedrich-Hebbel-Weg");
break;
}
case 107364:
{
returnValue = F("Friedrich-Hecker-Allee");
break;
}
case 107365:
{
returnValue = F("Friedrich-Hecker-Str.");
break;
}
case 107366:
{
returnValue = F("Friedrich-Hecker-Weg");
break;
}
case 107367:
{
returnValue = F("Friedrich-Heddies-Tetens-Str.");
break;
}
case 107368:
{
returnValue = F("Friedrich-Hegel-Str.");
break;
}
case 107369:
{
returnValue = F("Friedrich-Hegel-Weg");
break;
}
case 107370:
{
returnValue = F("Friedrich-Heim-Str.");
break;
}
case 107371:
{
returnValue = F("Friedrich-Heincke-Str.");
break;
}
case 107372:
{
returnValue = F("Friedrich-Heinrich-Allee");
break;
}
case 107373:
{
returnValue = F("Friedrich-Heinrich-Platz");
break;
}
case 107374:
{
returnValue = F("Friedrich-Heitz-Str.");
break;
}
case 107375:
{
returnValue = F("Friedrich-Hellmann-Str.");
break;
}
case 107376:
{
returnValue = F("Friedrich-Henkel-Str.");
break;
}
case 107377:
{
returnValue = F("Friedrich-Henning-Str.");
break;
}
case 107378:
{
returnValue = F("Friedrich-Henze-Str.");
break;
}
case 107379:
{
returnValue = F("Friedrich-Herdegen-Weg");
break;
}
case 107380:
{
returnValue = F("Friedrich-Herder-Str.");
break;
}
case 107381:
{
returnValue = F("Friedrich-Herlin-Weg");
break;
}
case 107382:
{
returnValue = F("Friedrich-Herold-Weg");
break;
}
case 107383:
{
returnValue = F("Friedrich-Herrmann-Str.");
break;
}
case 107384:
{
returnValue = F("Friedrich-Herschel-Weg");
break;
}
case 107385:
{
returnValue = F("Friedrich-Hessing-Weg");
break;
}
case 107386:
{
returnValue = F("Friedrich-Heun-Weg");
break;
}
case 107387:
{
returnValue = F("Friedrich-Heusser-Str.");
break;
}
case 107388:
{
returnValue = F("Friedrich-Heyking-Str.");
break;
}
case 107389:
{
returnValue = F("Friedrich-Hiller-Str.");
break;
}
case 107390:
{
returnValue = F("Friedrich-Hilscher-Str.");
break;
}
case 107391:
{
returnValue = F("Friedrich-Hinsen-Str.");
break;
}
case 107392:
{
returnValue = F("Friedrich-Hinterthür-Weg");
break;
}
case 107393:
{
returnValue = F("Friedrich-Hoffmann-Str.");
break;
}
case 107394:
{
returnValue = F("Friedrich-Hofmann-Str.");
break;
}
case 107395:
{
returnValue = F("Friedrich-Hohlfeld-Str.");
break;
}
case 107396:
{
returnValue = F("Friedrich-Holdermann-Weg");
break;
}
case 107397:
{
returnValue = F("Friedrich-Holl-Weg");
break;
}
case 107398:
{
returnValue = F("Friedrich-Hollmann-Str.");
break;
}
case 107399:
{
returnValue = F("Friedrich-Holm-Weg");
break;
}
case 107400:
{
returnValue = F("Friedrich-Holthaus-Str.");
break;
}
case 107401:
{
returnValue = F("Friedrich-Hoppe-Weg");
break;
}
case 107402:
{
returnValue = F("Friedrich-Hornfeck-Str.");
break;
}
case 107403:
{
returnValue = F("Friedrich-Hoßbach-Str.");
break;
}
case 107404:
{
returnValue = F("Friedrich-Hub-Str.");
break;
}
case 107405:
{
returnValue = F("Friedrich-Hufeisen-Str.");
break;
}
case 107406:
{
returnValue = F("Friedrich-Hug-Str.");
break;
}
case 107407:
{
returnValue = F("Friedrich-Hund-Platz");
break;
}
case 107408:
{
returnValue = F("Friedrich-Hunzinger-Str.");
break;
}
case 107409:
{
returnValue = F("Friedrich-Husemann-Weg");
break;
}
case 107410:
{
returnValue = F("Friedrich-Huth-Str.");
break;
}
case 107411:
{
returnValue = F("Friedrich-Hutter-Weg");
break;
}
case 107412:
{
returnValue = F("Friedrich-Händel-Str.");
break;
}
case 107413:
{
returnValue = F("Friedrich-Händel-Weg");
break;
}
case 107414:
{
returnValue = F("Friedrich-Hänssler-Weg");
break;
}
case 107415:
{
returnValue = F("Friedrich-Hölderlin-Str.");
break;
}
case 107416:
{
returnValue = F("Friedrich-Hölderlin-Weg");
break;
}
case 107417:
{
returnValue = F("Friedrich-Hörner-Weg");
break;
}
case 107418:
{
returnValue = F("Friedrich-Hüttemann-Str.");
break;
}
case 107419:
{
returnValue = F("Friedrich-Jacobs-Str.");
break;
}
case 107420:
{
returnValue = F("Friedrich-Jage-Str.");
break;
}
case 107421:
{
returnValue = F("Friedrich-Jahn-Str.");
break;
}
case 107422:
{
returnValue = F("Friedrich-Jakob-Heim-Str.");
break;
}
case 107423:
{
returnValue = F("Friedrich-Jansen-Str.");
break;
}
case 107424:
{
returnValue = F("Friedrich-Janssen-Str.");
break;
}
case 107425:
{
returnValue = F("Friedrich-Jenner-Str.");
break;
}
case 107426:
{
returnValue = F("Friedrich-Jericho-Str.");
break;
}
case 107427:
{
returnValue = F("Friedrich-Jockers-Str.");
break;
}
case 107428:
{
returnValue = F("Friedrich-Jürgensmeyer-Str.");
break;
}
case 107429:
{
returnValue = F("Friedrich-Kaiser-Str.");
break;
}
case 107430:
{
returnValue = F("Friedrich-Kaiser-Weg");
break;
}
case 107431:
{
returnValue = F("Friedrich-Kallmorgen-Weg");
break;
}
case 107432:
{
returnValue = F("Friedrich-Kanzler-Str.");
break;
}
case 107433:
{
returnValue = F("Friedrich-Karl-Becker-Weg");
break;
}
case 107434:
{
returnValue = F("Friedrich-Karl-Güldenberg-Weg");
break;
}
case 107435:
{
returnValue = F("Friedrich-Karl-Str.");
break;
}
case 107436:
{
returnValue = F("Friedrich-Karl-Ströher-Str.");
break;
}
case 107437:
{
returnValue = F("Friedrich-Karrenberg-Platz");
break;
}
case 107438:
{
returnValue = F("Friedrich-Karrer-Str.");
break;
}
case 107439:
{
returnValue = F("Friedrich-Katz-Str.");
break;
}
case 107440:
{
returnValue = F("Friedrich-Kaulbach-Ring");
break;
}
case 107441:
{
returnValue = F("Friedrich-Kauth-Weg");
break;
}
case 107442:
{
returnValue = F("Friedrich-Kayssler-Str.");
break;
}
case 107443:
{
returnValue = F("Friedrich-Keller-Str.");
break;
}
case 107444:
{
returnValue = F("Friedrich-Kellner-Str.");
break;
}
case 107445:
{
returnValue = F("Friedrich-Kemm-Str.");
break;
}
case 107446:
{
returnValue = F("Friedrich-Kenkel-Str.");
break;
}
case 107447:
{
returnValue = F("Friedrich-Keßler-Platz");
break;
}
case 107448:
{
returnValue = F("Friedrich-Kiel-Str.");
break;
}
case 107449:
{
returnValue = F("Friedrich-Kipp-Weg");
break;
}
case 107450:
{
returnValue = F("Friedrich-Kirchhoff-Str.");
break;
}
case 107451:
{
returnValue = F("Friedrich-Klausing-Str.");
break;
}
case 107452:
{
returnValue = F("Friedrich-Kleffmann-Str.");
break;
}
case 107453:
{
returnValue = F("Friedrich-Koenig-Str.");
break;
}
case 107454:
{
returnValue = F("Friedrich-Koenig-Weg");
break;
}
case 107455:
{
returnValue = F("Friedrich-Kohlrausch-Str.");
break;
}
case 107456:
{
returnValue = F("Friedrich-Kollmar-Str.");
break;
}
case 107457:
{
returnValue = F("Friedrich-Koopmann-Str.");
break;
}
case 107458:
{
returnValue = F("Friedrich-Kottemann-Str.");
break;
}
case 107459:
{
returnValue = F("Friedrich-Kramer-Str.");
break;
}
case 107460:
{
returnValue = F("Friedrich-Krane-Platz");
break;
}
case 107461:
{
returnValue = F("Friedrich-Krapf-Str.");
break;
}
case 107462:
{
returnValue = F("Friedrich-Krause-Weg");
break;
}
case 107463:
{
returnValue = F("Friedrich-Kraut-Str.");
break;
}
case 107464:
{
returnValue = F("Friedrich-Krauß-Str.");
break;
}
case 107465:
{
returnValue = F("Friedrich-Kreusch-Weg");
break;
}
case 107466:
{
returnValue = F("Friedrich-Kreutz-Ring");
break;
}
case 107467:
{
returnValue = F("Friedrich-Kreutzer-Str.");
break;
}
case 107468:
{
returnValue = F("Friedrich-Kring-Str.");
break;
}
case 107469:
{
returnValue = F("Friedrich-Krone-Str.");
break;
}
case 107470:
{
returnValue = F("Friedrich-Krupp-Str.");
break;
}
case 107471:
{
returnValue = F("Friedrich-Krupp-Weg");
break;
}
case 107472:
{
returnValue = F("Friedrich-Kröner-Str.");
break;
}
case 107473:
{
returnValue = F("Friedrich-Krüger-Str.");
break;
}
case 107474:
{
returnValue = F("Friedrich-Kunert-Weg");
break;
}
case 107475:
{
returnValue = F("Friedrich-Kurz-Str.");
break;
}
case 107476:
{
returnValue = F("Friedrich-Köchert-Str.");
break;
}
case 107477:
{
returnValue = F("Friedrich-Köhnlein-Str.");
break;
}
case 107478:
{
returnValue = F("Friedrich-Kölling-Str.");
break;
}
case 107479:
{
returnValue = F("Friedrich-König-Str.");
break;
}
case 107480:
{
returnValue = F("Friedrich-König-Weg");
break;
}
case 107481:
{
returnValue = F("Friedrich-Körner-Str.");
break;
}
case 107482:
{
returnValue = F("Friedrich-Köster-Weg");
break;
}
case 107483:
{
returnValue = F("Friedrich-Kücken-Str.");
break;
}
case 107484:
{
returnValue = F("Friedrich-Küpper-Weg");
break;
}
case 107485:
{
returnValue = F("Friedrich-Ladegast-Weg");
break;
}
case 107486:
{
returnValue = F("Friedrich-Lambrecht-Str.");
break;
}
case 107487:
{
returnValue = F("Friedrich-Lamp-Str.");
break;
}
case 107488:
{
returnValue = F("Friedrich-Lange-Str.");
break;
}
case 107489:
{
returnValue = F("Friedrich-Langewiesche-Weg");
break;
}
case 107490:
{
returnValue = F("Friedrich-Lau-Str.");
break;
}
case 107491:
{
returnValue = F("Friedrich-Lehmann-Platz");
break;
}
case 107492:
{
returnValue = F("Friedrich-Lehne-Str.");
break;
}
case 107493:
{
returnValue = F("Friedrich-Leitgen-Str.");
break;
}
case 107494:
{
returnValue = F("Friedrich-Lekve-Str.");
break;
}
case 107495:
{
returnValue = F("Friedrich-Lessen-Weg");
break;
}
case 107496:
{
returnValue = F("Friedrich-Lichtenauer-Allee");
break;
}
case 107497:
{
returnValue = F("Friedrich-Lindinger-Str.");
break;
}
case 107498:
{
returnValue = F("Friedrich-Linke-Str.");
break;
}
case 107499:
{
returnValue = F("Friedrich-Linkh-Str.");
break;
}
case 107500:
{
returnValue = F("Friedrich-Linnemann-Str.");
break;
}
case 107501:
{
returnValue = F("Friedrich-List-Allee");
break;
}
case 107502:
{
returnValue = F("Friedrich-List-Platz");
break;
}
case 107503:
{
returnValue = F("Friedrich-List-Str.");
break;
}
case 107504:
{
returnValue = F("Friedrich-List-Weg");
break;
}
case 107505:
{
returnValue = F("Friedrich-Loeffler-Str.");
break;
}
case 107506:
{
returnValue = F("Friedrich-Loennies-Weg");
break;
}
case 107507:
{
returnValue = F("Friedrich-Lohmeyer-Str.");
break;
}
case 107508:
{
returnValue = F("Friedrich-Lohner-Str.");
break;
}
case 107509:
{
returnValue = F("Friedrich-Loose-Str.");
break;
}
case 107510:
{
returnValue = F("Friedrich-Luber-Str.");
break;
}
case 107511:
{
returnValue = F("Friedrich-Ludw.-Jahn-Str.");
break;
}
case 107512:
{
returnValue = F("Friedrich-Ludwig-Jahn-Allee");
break;
}
case 107513:
{
returnValue = F("Friedrich-Ludwig-Jahn-Eck");
break;
}
case 107514:
{
returnValue = F("Friedrich-Ludwig-Jahn-Platz");
break;
}
case 107515:
{
returnValue = F("Friedrich-Ludwig-Jahn-Ring");
break;
}
case 107516:
{
returnValue = F("Friedrich-Ludwig-Jahn-Str.");
break;
}
case 107517:
{
returnValue = F("Friedrich-Ludwig-Jahn-Weg");
break;
}
case 107518:
{
returnValue = F("Friedrich-Ludwig-Str.");
break;
}
case 107519:
{
returnValue = F("Friedrich-Lundgreen-Str.");
break;
}
case 107520:
{
returnValue = F("Friedrich-Lutter-Str.");
break;
}
case 107521:
{
returnValue = F("Friedrich-Lutzmann-Ring");
break;
}
case 107522:
{
returnValue = F("Friedrich-Lux-Str.");
break;
}
case 107523:
{
returnValue = F("Friedrich-Löhers-Weg");
break;
}
case 107524:
{
returnValue = F("Friedrich-Löhrl-Str.");
break;
}
case 107525:
{
returnValue = F("Friedrich-Löll-Str.");
break;
}
case 107526:
{
returnValue = F("Friedrich-Lübbers-Str.");
break;
}
case 107527:
{
returnValue = F("Friedrich-Lübs-Weg");
break;
}
case 107528:
{
returnValue = F("Friedrich-Lücke-Platz");
break;
}
case 107529:
{
returnValue = F("Friedrich-Lüders-Weg");
break;
}
case 107530:
{
returnValue = F("Friedrich-Lütvogt-Str.");
break;
}
case 107531:
{
returnValue = F("Friedrich-Maag-Str.");
break;
}
case 107532:
{
returnValue = F("Friedrich-Maiweg-Str.");
break;
}
case 107533:
{
returnValue = F("Friedrich-Mann-Str.");
break;
}
case 107534:
{
returnValue = F("Friedrich-Marschner-Str.");
break;
}
case 107535:
{
returnValue = F("Friedrich-Marstatt-Str.");
break;
}
case 107536:
{
returnValue = F("Friedrich-Maurer-Weg");
break;
}
case 107537:
{
returnValue = F("Friedrich-Mayer-Str.");
break;
}
case 107538:
{
returnValue = F("Friedrich-Meinel-Str.");
break;
}
case 107539:
{
returnValue = F("Friedrich-Meins-Weg");
break;
}
case 107540:
{
returnValue = F("Friedrich-Meister-Str.");
break;
}
case 107541:
{
returnValue = F("Friedrich-Menges-Gasse");
break;
}
case 107542:
{
returnValue = F("Friedrich-Menzefricke-Str.");
break;
}
case 107543:
{
returnValue = F("Friedrich-Merz-Str.");
break;
}
case 107544:
{
returnValue = F("Friedrich-Metz-Str.");
break;
}
case 107545:
{
returnValue = F("Friedrich-Meyer-Str.");
break;
}
case 107546:
{
returnValue = F("Friedrich-Middendorff-Platz");
break;
}
case 107547:
{
returnValue = F("Friedrich-Miescher-Str.");
break;
}
case 107548:
{
returnValue = F("Friedrich-Miethe-Weg");
break;
}
case 107549:
{
returnValue = F("Friedrich-Mildner-Str.");
break;
}
case 107550:
{
returnValue = F("Friedrich-Milla-Str.");
break;
}
case 107551:
{
returnValue = F("Friedrich-Mohn-Str.");
break;
}
case 107552:
{
returnValue = F("Friedrich-Mohr-Str.");
break;
}
case 107553:
{
returnValue = F("Friedrich-Mumme-Str.");
break;
}
case 107554:
{
returnValue = F("Friedrich-Möschke-Str.");
break;
}
case 107555:
{
returnValue = F("Friedrich-Mößinger-Str.");
break;
}
case 107556:
{
returnValue = F("Friedrich-Mößner-Str.");
break;
}
case 107557:
{
returnValue = F("Friedrich-Müller-Str.");
break;
}
case 107558:
{
returnValue = F("Friedrich-Müller-Weg");
break;
}
case 107559:
{
returnValue = F("Friedrich-Münch-Str.");
break;
}
case 107560:
{
returnValue = F("Friedrich-Münter-Str.");
break;
}
case 107561:
{
returnValue = F("Friedrich-Münzinger-Str.");
break;
}
case 107562:
{
returnValue = F("Friedrich-Naumann-Allee");
break;
}
case 107563:
{
returnValue = F("Friedrich-Naumann-Platz");
break;
}
case 107564:
{
returnValue = F("Friedrich-Naumann-Promenade");
break;
}
case 107565:
{
returnValue = F("Friedrich-Naumann-Str.");
break;
}
case 107566:
{
returnValue = F("Friedrich-Naumann-Weg");
break;
}
case 107567:
{
returnValue = F("Friedrich-Naundorf-Str.");
break;
}
case 107568:
{
returnValue = F("Friedrich-Neelsen-Str.");
break;
}
case 107569:
{
returnValue = F("Friedrich-Neff-Str.");
break;
}
case 107570:
{
returnValue = F("Friedrich-Neid-Weg");
break;
}
case 107571:
{
returnValue = F("Friedrich-Nembach-Str.");
break;
}
case 107572:
{
returnValue = F("Friedrich-Nettesheim-Str.");
break;
}
case 107573:
{
returnValue = F("Friedrich-Neukirchen-Str.");
break;
}
case 107574:
{
returnValue = F("Friedrich-Neumann-Str.");
break;
}
case 107575:
{
returnValue = F("Friedrich-Neuper-Str.");
break;
}
case 107576:
{
returnValue = F("Friedrich-Neuweiler-Str.");
break;
}
case 107577:
{
returnValue = F("Friedrich-Niedermayer-Str.");
break;
}
case 107578:
{
returnValue = F("Friedrich-Niemeyer-Str.");
break;
}
case 107579:
{
returnValue = F("Friedrich-Nietzsche-Str.");
break;
}
case 107580:
{
returnValue = F("Friedrich-Nietzsche-Weg");
break;
}
case 107581:
{
returnValue = F("Friedrich-Oberheide-Str.");
break;
}
case 107582:
{
returnValue = F("Friedrich-Ochs-Str.");
break;
}
case 107583:
{
returnValue = F("Friedrich-Oettler-Str.");
break;
}
case 107584:
{
returnValue = F("Friedrich-Offermann-Str.");
break;
}
case 107585:
{
returnValue = F("Friedrich-Olbricht-Str.");
break;
}
case 107586:
{
returnValue = F("Friedrich-Orth-Weg");
break;
}
case 107587:
{
returnValue = F("Friedrich-Otto-Schott-Weg");
break;
}
case 107588:
{
returnValue = F("Friedrich-Ottomeyer-Str.");
break;
}
case 107589:
{
returnValue = F("Friedrich-Otzmann-Str.");
break;
}
case 107590:
{
returnValue = F("Friedrich-Overheu-Weg");
break;
}
case 107591:
{
returnValue = F("Friedrich-Paffrath-Str.");
break;
}
case 107592:
{
returnValue = F("Friedrich-Palm-Str.");
break;
}
case 107593:
{
returnValue = F("Friedrich-Paulsen-Str.");
break;
}
case 107594:
{
returnValue = F("Friedrich-Paulsen-Weg");
break;
}
case 107595:
{
returnValue = F("Friedrich-Pecht-Weg");
break;
}
case 107596:
{
returnValue = F("Friedrich-Penseler-Str.");
break;
}
case 107597:
{
returnValue = F("Friedrich-Perthes-Str.");
break;
}
case 107598:
{
returnValue = F("Friedrich-Peters-Allee");
break;
}
case 107599:
{
returnValue = F("Friedrich-Petri-Str.");
break;
}
case 107600:
{
returnValue = F("Friedrich-Pfaff-Str.");
break;
}
case 107601:
{
returnValue = F("Friedrich-Pfeiffer-Str.");
break;
}
case 107602:
{
returnValue = F("Friedrich-Pfeil-Str.");
break;
}
case 107603:
{
returnValue = F("Friedrich-Pfenning-Str.");
break;
}
case 107604:
{
returnValue = F("Friedrich-Pfister-Str.");
break;
}
case 107605:
{
returnValue = F("Friedrich-Pflieger-Weg");
break;
}
case 107606:
{
returnValue = F("Friedrich-Pieper-Str.");
break;
}
case 107607:
{
returnValue = F("Friedrich-Pietzsch-Str.");
break;
}
case 107608:
{
returnValue = F("Friedrich-Plate-Str.");
break;
}
case 107609:
{
returnValue = F("Friedrich-Plettke-Weg");
break;
}
case 107610:
{
returnValue = F("Friedrich-Pogge-Weg");
break;
}
case 107611:
{
returnValue = F("Friedrich-Polling-Str.");
break;
}
case 107612:
{
returnValue = F("Friedrich-Poppe-sen.-Str.");
break;
}
case 107613:
{
returnValue = F("Friedrich-Poth-Str.");
break;
}
case 107614:
{
returnValue = F("Friedrich-Press-Str.");
break;
}
case 107615:
{
returnValue = F("Friedrich-Preuninger-Str.");
break;
}
case 107616:
{
returnValue = F("Friedrich-Profit-Str.");
break;
}
case 107617:
{
returnValue = F("Friedrich-Puchta-Str.");
break;
}
case 107618:
{
returnValue = F("Friedrich-Pützer-Ring");
break;
}
case 107619:
{
returnValue = F("Friedrich-Quenstedt-Str.");
break;
}
case 107620:
{
returnValue = F("Friedrich-Quest-Weg");
break;
}
case 107621:
{
returnValue = F("Friedrich-Raab-Weg");
break;
}
case 107622:
{
returnValue = F("Friedrich-Raiffeisen-Str.");
break;
}
case 107623:
{
returnValue = F("Friedrich-Ratzel-Str.");
break;
}
case 107624:
{
returnValue = F("Friedrich-Raue-Str.");
break;
}
case 107625:
{
returnValue = F("Friedrich-Rech-Str.");
break;
}
case 107626:
{
returnValue = F("Friedrich-Reif-Weg");
break;
}
case 107627:
{
returnValue = F("Friedrich-Reimann-Str.");
break;
}
case 107628:
{
returnValue = F("Friedrich-Reinhardt-Str.");
break;
}
case 107629:
{
returnValue = F("Friedrich-Rese-Str.");
break;
}
case 107630:
{
returnValue = F("Friedrich-Rettig-Weg");
break;
}
case 107631:
{
returnValue = F("Friedrich-Richta-Str.");
break;
}
case 107632:
{
returnValue = F("Friedrich-Richter-Str.");
break;
}
case 107633:
{
returnValue = F("Friedrich-Ritzmann-Str.");
break;
}
case 107634:
{
returnValue = F("Friedrich-Rodehorst-Str.");
break;
}
case 107635:
{
returnValue = F("Friedrich-Rogge-Platz");
break;
}
case 107636:
{
returnValue = F("Friedrich-Rogge-Str.");
break;
}
case 107637:
{
returnValue = F("Friedrich-Rohr-Str.");
break;
}
case 107638:
{
returnValue = F("Friedrich-Rolle-Str.");
break;
}
case 107639:
{
returnValue = F("Friedrich-Rosengarth-Str.");
break;
}
case 107640:
{
returnValue = F("Friedrich-Rothfuß-Str.");
break;
}
case 107641:
{
returnValue = F("Friedrich-Rottra-Str.");
break;
}
case 107642:
{
returnValue = F("Friedrich-Ruin-Str.");
break;
}
case 107643:
{
returnValue = F("Friedrich-Rumpf-Str.");
break;
}
case 107644:
{
returnValue = F("Friedrich-Runge-Str.");
break;
}
case 107645:
{
returnValue = F("Friedrich-Rusinski-Str.");
break;
}
case 107646:
{
returnValue = F("Friedrich-Ruß-Str.");
break;
}
case 107647:
{
returnValue = F("Friedrich-Röber-Str.");
break;
}
case 107648:
{
returnValue = F("Friedrich-Römer-Str.");
break;
}
case 107649:
{
returnValue = F("Friedrich-Rössert-Str.");
break;
}
case 107650:
{
returnValue = F("Friedrich-Rückert-Anlage");
break;
}
case 107651:
{
returnValue = F("Friedrich-Rückert-Ring");
break;
}
case 107652:
{
returnValue = F("Friedrich-Rückert-Str.");
break;
}
case 107653:
{
returnValue = F("Friedrich-Rückert-Weg");
break;
}
case 107654:
{
returnValue = F("Friedrich-Rüder-Str.");
break;
}
case 107655:
{
returnValue = F("Friedrich-Samhammer-Str.");
break;
}
case 107656:
{
returnValue = F("Friedrich-Sander-Weg");
break;
}
case 107657:
{
returnValue = F("Friedrich-Schaal-Str.");
break;
}
case 107658:
{
returnValue = F("Friedrich-Schaefer-Str.");
break;
}
case 107659:
{
returnValue = F("Friedrich-Schaffert-Str.");
break;
}
case 107660:
{
returnValue = F("Friedrich-Schanzlin-Str.");
break;
}
case 107661:
{
returnValue = F("Friedrich-Schauer-Weg");
break;
}
case 107662:
{
returnValue = F("Friedrich-Scheele-Str.");
break;
}
case 107663:
{
returnValue = F("Friedrich-Schelling-Str.");
break;
}
case 107664:
{
returnValue = F("Friedrich-Schelling-Weg");
break;
}
case 107665:
{
returnValue = F("Friedrich-Schenk-Weg");
break;
}
case 107666:
{
returnValue = F("Friedrich-Scheunemann-Str.");
break;
}
case 107667:
{
returnValue = F("Friedrich-Schiffmann-Platz");
break;
}
case 107668:
{
returnValue = F("Friedrich-Schiller-Ring");
break;
}
case 107669:
{
returnValue = F("Friedrich-Schiller-Str.");
break;
}
case 107670:
{
returnValue = F("Friedrich-Schiller-Weg");
break;
}
case 107671:
{
returnValue = F("Friedrich-Schleeh-Str.");
break;
}
case 107672:
{
returnValue = F("Friedrich-Schlie-Str.");
break;
}
case 107673:
{
returnValue = F("Friedrich-Schmid-Str.");
break;
}
case 107674:
{
returnValue = F("Friedrich-Schmidt-Str.");
break;
}
case 107675:
{
returnValue = F("Friedrich-Schmuch-Str.");
break;
}
case 107676:
{
returnValue = F("Friedrich-Schneck-Str.");
break;
}
case 107677:
{
returnValue = F("Friedrich-Schneider-Str.");
break;
}
case 107678:
{
returnValue = F("Friedrich-Schneider-Weg");
break;
}
case 107679:
{
returnValue = F("Friedrich-Schnellbacher-Str.");
break;
}
case 107680:
{
returnValue = F("Friedrich-Schoedel-Str.");
break;
}
case 107681:
{
returnValue = F("Friedrich-Schofer-Str.");
break;
}
case 107682:
{
returnValue = F("Friedrich-Schoppenhorst-Weg");
break;
}
case 107683:
{
returnValue = F("Friedrich-Schott-Str.");
break;
}
case 107684:
{
returnValue = F("Friedrich-Schrader-Weg");
break;
}
case 107685:
{
returnValue = F("Friedrich-Schramm-Platz");
break;
}
case 107686:
{
returnValue = F("Friedrich-Schramm-Weg");
break;
}
case 107687:
{
returnValue = F("Friedrich-Schrems-Str.");
break;
}
case 107688:
{
returnValue = F("Friedrich-Schröder-Weg");
break;
}
case 107689:
{
returnValue = F("Friedrich-Schuck-Str.");
break;
}
case 107690:
{
returnValue = F("Friedrich-Schult-Weg");
break;
}
case 107691:
{
returnValue = F("Friedrich-Schulze-Str.");
break;
}
case 107692:
{
returnValue = F("Friedrich-Schulze-Weg");
break;
}
case 107693:
{
returnValue = F("Friedrich-Schwarz-Str.");
break;
}
case 107694:
{
returnValue = F("Friedrich-Schweigardt-Weg");
break;
}
case 107695:
{
returnValue = F("Friedrich-Schäfer-Str.");
break;
}
case 107696:
{
returnValue = F("Friedrich-Schönauer-Str.");
break;
}
case 107697:
{
returnValue = F("Friedrich-Schönheit-Str.");
break;
}
case 107698:
{
returnValue = F("Friedrich-Schüle-Str.");
break;
}
case 107699:
{
returnValue = F("Friedrich-Schülein-Str.");
break;
}
case 107700:
{
returnValue = F("Friedrich-Schünemann-Str.");
break;
}
case 107701:
{
returnValue = F("Friedrich-Schünzel-Str.");
break;
}
case 107702:
{
returnValue = F("Friedrich-Schütte-Weg");
break;
}
case 107703:
{
returnValue = F("Friedrich-Schüz-Weg");
break;
}
case 107704:
{
returnValue = F("Friedrich-Seeger-Str.");
break;
}
case 107705:
{
returnValue = F("Friedrich-Seeßelberg-Str.");
break;
}
case 107706:
{
returnValue = F("Friedrich-Seggel-Str.");
break;
}
case 107707:
{
returnValue = F("Friedrich-Seifriz-Str.");
break;
}
case 107708:
{
returnValue = F("Friedrich-Seitz-Weg");
break;
}
case 107709:
{
returnValue = F("Friedrich-Seyffert-Str.");
break;
}
case 107710:
{
returnValue = F("Friedrich-Sickler-Str.");
break;
}
case 107711:
{
returnValue = F("Friedrich-Siebert-Weg");
break;
}
case 107712:
{
returnValue = F("Friedrich-Siegert-Str.");
break;
}
case 107713:
{
returnValue = F("Friedrich-Siems-Str.");
break;
}
case 107714:
{
returnValue = F("Friedrich-Siewert-Str.");
break;
}
case 107715:
{
returnValue = F("Friedrich-Silcher-Str.");
break;
}
case 107716:
{
returnValue = F("Friedrich-Silcher-Weg");
break;
}
case 107717:
{
returnValue = F("Friedrich-Siller-Str.");
break;
}
case 107718:
{
returnValue = F("Friedrich-Spath-Str.");
break;
}
case 107719:
{
returnValue = F("Friedrich-Speck-Str.");
break;
}
case 107720:
{
returnValue = F("Friedrich-Spee-Str.");
break;
}
case 107721:
{
returnValue = F("Friedrich-Speidel-Str.");
break;
}
case 107722:
{
returnValue = F("Friedrich-Sprandel-Weg");
break;
}
case 107723:
{
returnValue = F("Friedrich-Sprater-Str.");
break;
}
case 107724:
{
returnValue = F("Friedrich-Stadelmeier-Str.");
break;
}
case 107725:
{
returnValue = F("Friedrich-Starke-Str.");
break;
}
case 107726:
{
returnValue = F("Friedrich-Staude-Str.");
break;
}
case 107727:
{
returnValue = F("Friedrich-Stehlin-Str.");
break;
}
case 107728:
{
returnValue = F("Friedrich-Stein-Str.");
break;
}
case 107729:
{
returnValue = F("Friedrich-Steinmeyer-Str.");
break;
}
case 107730:
{
returnValue = F("Friedrich-Steinwachs-Weg");
break;
}
case 107731:
{
returnValue = F("Friedrich-Stellwagen-Weg");
break;
}
case 107732:
{
returnValue = F("Friedrich-Stender-Weg");
break;
}
case 107733:
{
returnValue = F("Friedrich-Stengel-Str.");
break;
}
case 107734:
{
returnValue = F("Friedrich-Steuer-Weg");
break;
}
case 107735:
{
returnValue = F("Friedrich-Stingel-Weg");
break;
}
case 107736:
{
returnValue = F("Friedrich-Stoer-Str.");
break;
}
case 107737:
{
returnValue = F("Friedrich-Stolberg-Allee");
break;
}
case 107738:
{
returnValue = F("Friedrich-Stoll-Str.");
break;
}
case 107739:
{
returnValue = F("Friedrich-Stoltze-Str.");
break;
}
case 107740:
{
returnValue = F("Friedrich-Streib-Str.");
break;
}
case 107741:
{
returnValue = F("Friedrich-Strobel-Str.");
break;
}
case 107742:
{
returnValue = F("Friedrich-Stummel-Str.");
break;
}
case 107743:
{
returnValue = F("Friedrich-Stärk-Weg");
break;
}
case 107744:
{
returnValue = F("Friedrich-Sulzer-Weg");
break;
}
case 107745:
{
returnValue = F("Friedrich-Surmann-Str.");
break;
}
case 107746:
{
returnValue = F("Friedrich-Syrup-Str.");
break;
}
case 107747:
{
returnValue = F("Friedrich-Taphorn-Str.");
break;
}
case 107748:
{
returnValue = F("Friedrich-Tarnow-Str.");
break;
}
case 107749:
{
returnValue = F("Friedrich-Techen-Str.");
break;
}
case 107750:
{
returnValue = F("Friedrich-Tedsen-Ring");
break;
}
case 107751:
{
returnValue = F("Friedrich-Telser-Str.");
break;
}
case 107752:
{
returnValue = F("Friedrich-Theiler-Siedlung");
break;
}
case 107753:
{
returnValue = F("Friedrich-Then-Weg");
break;
}
case 107754:
{
returnValue = F("Friedrich-Thies-Weg");
break;
}
case 107755:
{
returnValue = F("Friedrich-Tietjen-Str.");
break;
}
case 107756:
{
returnValue = F("Friedrich-Tilegant-Str.");
break;
}
case 107757:
{
returnValue = F("Friedrich-Tisch-Str.");
break;
}
case 107758:
{
returnValue = F("Friedrich-Trendelenburg-Allee");
break;
}
case 107759:
{
returnValue = F("Friedrich-Trippe-Str.");
break;
}
case 107760:
{
returnValue = F("Friedrich-Tritschler-Str.");
break;
}
case 107761:
{
returnValue = F("Friedrich-Trützschler-Str.");
break;
}
case 107762:
{
returnValue = F("Friedrich-Turra-Str.");
break;
}
case 107763:
{
returnValue = F("Friedrich-Veith-Str.");
break;
}
case 107764:
{
returnValue = F("Friedrich-Viehbacher-Allee");
break;
}
case 107765:
{
returnValue = F("Friedrich-Voelcker-Weg");
break;
}
case 107766:
{
returnValue = F("Friedrich-Vogler-Str.");
break;
}
case 107767:
{
returnValue = F("Friedrich-Vogts-Str.");
break;
}
case 107768:
{
returnValue = F("Friedrich-Voith-Str.");
break;
}
case 107769:
{
returnValue = F("Friedrich-Volckmar-Weg");
break;
}
case 107770:
{
returnValue = F("Friedrich-Vollmar-Str.");
break;
}
case 107771:
{
returnValue = F("Friedrich-Von-Spee-Str.");
break;
}
case 107772:
{
returnValue = F("Friedrich-Vordemberge-Gildewart-Platz");
break;
}
case 107773:
{
returnValue = F("Friedrich-Vorwerk-Str.");
break;
}
case 107774:
{
returnValue = F("Friedrich-Voß-Platz");
break;
}
case 107775:
{
returnValue = F("Friedrich-Voß-Ufer");
break;
}
case 107776:
{
returnValue = F("Friedrich-Völklein-Str.");
break;
}
case 107777:
{
returnValue = F("Friedrich-Wachter-Str.");
break;
}
case 107778:
{
returnValue = F("Friedrich-Wacket-Str.");
break;
}
case 107779:
{
returnValue = F("Friedrich-Wagner-Siedlung");
break;
}
case 107780:
{
returnValue = F("Friedrich-Wagner-Str.");
break;
}
case 107781:
{
returnValue = F("Friedrich-Walther-Str.");
break;
}
case 107782:
{
returnValue = F("Friedrich-Wandesleben-Str.");
break;
}
case 107783:
{
returnValue = F("Friedrich-Weber-Str.");
break;
}
case 107784:
{
returnValue = F("Friedrich-Weck-Str.");
break;
}
case 107785:
{
returnValue = F("Friedrich-Weddeler-Str.");
break;
}
case 107786:
{
returnValue = F("Friedrich-Wege-Str.");
break;
}
case 107787:
{
returnValue = F("Friedrich-Wegner-Platz");
break;
}
case 107788:
{
returnValue = F("Friedrich-Wehmer-Str.");
break;
}
case 107789:
{
returnValue = F("Friedrich-Weigandt-Str.");
break;
}
case 107790:
{
returnValue = F("Friedrich-Weihler-Weg");
break;
}
case 107791:
{
returnValue = F("Friedrich-Weiler-Platz");
break;
}
case 107792:
{
returnValue = F("Friedrich-Weinbrenner-Str.");
break;
}
case 107793:
{
returnValue = F("Friedrich-Weise-Str.");
break;
}
case 107794:
{
returnValue = F("Friedrich-Weißler-Platz");
break;
}
case 107795:
{
returnValue = F("Friedrich-Wencker-Str.");
break;
}
case 107796:
{
returnValue = F("Friedrich-Werber-Str.");
break;
}
case 107797:
{
returnValue = F("Friedrich-Werthmann-Siedlung");
break;
}
case 107798:
{
returnValue = F("Friedrich-Wertz-Weg");
break;
}
case 107799:
{
returnValue = F("Friedrich-Wesemann-Str.");
break;
}
case 107800:
{
returnValue = F("Friedrich-Westphal-Weg");
break;
}
case 107801:
{
returnValue = F("Friedrich-Widmann-Str.");
break;
}
case 107802:
{
returnValue = F("Friedrich-Wienke-Str.");
break;
}
case 107803:
{
returnValue = F("Friedrich-Wienroth-Weg");
break;
}
case 107804:
{
returnValue = F("Friedrich-Wilhelm-Ande-Str.");
break;
}
case 107805:
{
returnValue = F("Friedrich-Wilhelm-Brinkmann-Str.");
break;
}
case 107806:
{
returnValue = F("Friedrich-Wilhelm-Buttel-Platz");
break;
}
case 107807:
{
returnValue = F("Friedrich-Wilhelm-Düker-Str.");
break;
}
case 107808:
{
returnValue = F("Friedrich-Wilhelm-Fröbel-Weg");
break;
}
case 107809:
{
returnValue = F("Friedrich-Wilhelm-Leede-Weg");
break;
}
case 107810:
{
returnValue = F("Friedrich-Wilhelm-Pein-Str.");
break;
}
case 107811:
{
returnValue = F("Friedrich-Wilhelm-Platz");
break;
}
case 107812:
{
returnValue = F("Friedrich-Wilhelm-Raasch-Str.");
break;
}
case 107813:
{
returnValue = F("Friedrich-Wilhelm-Raiffeisen-Platz");
break;
}
case 107814:
{
returnValue = F("Friedrich-Wilhelm-Raiffeisen-Ring");
break;
}
case 107815:
{
returnValue = F("Friedrich-Wilhelm-Raiffeisen-Str.");
break;
}
case 107816:
{
returnValue = F("Friedrich-Wilhelm-Schmidt-Str.");
break;
}
case 107817:
{
returnValue = F("Friedrich-Wilhelm-Str.");
break;
}
case 107818:
{
returnValue = F("Friedrich-Wilhelm-Weber-Platz");
break;
}
case 107819:
{
returnValue = F("Friedrich-Wilhelm-Weber-Str.");
break;
}
case 107820:
{
returnValue = F("Friedrich-Wilhelm-Weber-Weg");
break;
}
case 107821:
{
returnValue = F("Friedrich-Wilhelm-von-Bauer-Str.");
break;
}
case 107822:
{
returnValue = F("Friedrich-Wilhelms-Au");
break;
}
case 107823:
{
returnValue = F("Friedrich-Wilhelmsdorfer Str.");
break;
}
case 107824:
{
returnValue = F("Friedrich-Wilke-Platz");
break;
}
case 107825:
{
returnValue = F("Friedrich-Wilke-Weg");
break;
}
case 107826:
{
returnValue = F("Friedrich-Winter-Str.");
break;
}
case 107827:
{
returnValue = F("Friedrich-Wirth-Str.");
break;
}
case 107828:
{
returnValue = F("Friedrich-Witte-Str.");
break;
}
case 107829:
{
returnValue = F("Friedrich-Wittmann-Str.");
break;
}
case 107830:
{
returnValue = F("Friedrich-Wolf-Ring");
break;
}
case 107831:
{
returnValue = F("Friedrich-Wolf-Siedlung");
break;
}
case 107832:
{
returnValue = F("Friedrich-Wolf-Str.");
break;
}
case 107833:
{
returnValue = F("Friedrich-Wolf-Weg");
break;
}
case 107834:
{
returnValue = F("Friedrich-Wolfarth-Str.");
break;
}
case 107835:
{
returnValue = F("Friedrich-Wolff-Str.");
break;
}
case 107836:
{
returnValue = F("Friedrich-Wöhler-Str.");
break;
}
case 107837:
{
returnValue = F("Friedrich-Zabel-Ring");
break;
}
case 107838:
{
returnValue = F("Friedrich-Zahn-Str.");
break;
}
case 107839:
{
returnValue = F("Friedrich-Zeitler-Str.");
break;
}
case 107840:
{
returnValue = F("Friedrich-Zelter-Str.");
break;
}
case 107841:
{
returnValue = F("Friedrich-Zoepfl-Str.");
break;
}
case 107842:
{
returnValue = F("Friedrich-Zollinger-Str.");
break;
}
case 107843:
{
returnValue = F("Friedrich-Zucker-Str.");
break;
}
case 107844:
{
returnValue = F("Friedrich-Zundel-Str.");
break;
}
case 107845:
{
returnValue = F("Friedrich-Züfle-Weg");
break;
}
case 107846:
{
returnValue = F("Friedrich-Zürner-Str.");
break;
}
case 107847:
{
returnValue = F("Friedrich-Zürner-Weg");
break;
}
case 107848:
{
returnValue = F("Friedrich-van-Senden-Str.");
break;
}
case 107849:
{
returnValue = F("Friedrich-von-Baumbach-Str.");
break;
}
case 107850:
{
returnValue = F("Friedrich-von-Bausznern-Str.");
break;
}
case 107851:
{
returnValue = F("Friedrich-von-Bodelschwingh-Str.");
break;
}
case 107852:
{
returnValue = F("Friedrich-von-Bodelschwingh-Weg");
break;
}
case 107853:
{
returnValue = F("Friedrich-von-Büren-Str.");
break;
}
case 107854:
{
returnValue = F("Friedrich-von-Flotow-Ring");
break;
}
case 107855:
{
returnValue = F("Friedrich-von-Flotow-Str.");
break;
}
case 107856:
{
returnValue = F("Friedrich-von-Flotow-Weg");
break;
}
case 107857:
{
returnValue = F("Friedrich-von-Fürer-Str.");
break;
}
case 107858:
{
returnValue = F("Friedrich-von-Gärtner-Ring");
break;
}
case 107859:
{
returnValue = F("Friedrich-von-Gärtner-Str.");
break;
}
case 107860:
{
returnValue = F("Friedrich-von-Hagenow-Str.");
break;
}
case 107861:
{
returnValue = F("Friedrich-von-Halder-Str.");
break;
}
case 107862:
{
returnValue = F("Friedrich-von-Hardenberg-Str.");
break;
}
case 107863:
{
returnValue = F("Friedrich-von-Hardenberg-Weg");
break;
}
case 107864:
{
returnValue = F("Friedrich-von-Hayek-Str.");
break;
}
case 107865:
{
returnValue = F("Friedrich-von-Heyd-Str.");
break;
}
case 107866:
{
returnValue = F("Friedrich-von-Heyden-Platz");
break;
}
case 107867:
{
returnValue = F("Friedrich-von-Heyden-Weg");
break;
}
case 107868:
{
returnValue = F("Friedrich-von-Klocke-Weg");
break;
}
case 107869:
{
returnValue = F("Friedrich-von-Salza-Str.");
break;
}
case 107870:
{
returnValue = F("Friedrich-von-Schelling-Weg");
break;
}
case 107871:
{
returnValue = F("Friedrich-von-Schenk-Str.");
break;
}
case 107872:
{
returnValue = F("Friedrich-von-Schiller-Str.");
break;
}
case 107873:
{
returnValue = F("Friedrich-von-Schletz-Str.");
break;
}
case 107874:
{
returnValue = F("Friedrich-von-Spee-Str.");
break;
}
case 107875:
{
returnValue = F("Friedrich-von-Spee-Weg");
break;
}
case 107876:
{
returnValue = F("Friedrich-von-Teck-Str.");
break;
}
case 107877:
{
returnValue = F("Friedrich-von-der-Leyen-Str.");
break;
}
case 107878:
{
returnValue = F("Friedrich-von-der-Schulenburg-Str.");
break;
}
case 107879:
{
returnValue = F("Friedrich-​Röther-​Platz");
break;
}
case 107880:
{
returnValue = F("Friedrichplatz");
break;
}
case 107881:
{
returnValue = F("Friedrichring");
break;
}
case 107882:
{
returnValue = F("Friedrichrodaer Str.");
break;
}
case 107883:
{
returnValue = F("Friedrichrodaer Weg");
break;
}
case 107884:
{
returnValue = F("Friedrichrode");
break;
}
case 107885:
{
returnValue = F("Friedrichroder Weg");
break;
}
case 107886:
{
returnValue = F("Friedrichs Glück");
break;
}
case 107887:
{
returnValue = F("Friedrichsallee");
break;
}
case 107888:
{
returnValue = F("Friedrichsanfang");
break;
}
case 107889:
{
returnValue = F("Friedrichsaue");
break;
}
case 107890:
{
returnValue = F("Friedrichsauer Ring");
break;
}
case 107891:
{
returnValue = F("Friedrichsauer Str.");
break;
}
case 107892:
{
returnValue = F("Friedrichsauer Weg");
break;
}
case 107893:
{
returnValue = F("Friedrichsaustr.");
break;
}
case 107894:
{
returnValue = F("Friedrichsbachweg");
break;
}
case 107895:
{
returnValue = F("Friedrichsbaupassage");
break;
}
case 107896:
{
returnValue = F("Friedrichsberg");
break;
}
case 107897:
{
returnValue = F("Friedrichsberger Weg");
break;
}
case 107898:
{
returnValue = F("Friedrichsbergstr.");
break;
}
case 107899:
{
returnValue = F("Friedrichsbergweg");
break;
}
case 107900:
{
returnValue = F("Friedrichsbruch");
break;
}
case 107901:
{
returnValue = F("Friedrichsbrunn-Viktorshöhe");
break;
}
case 107902:
{
returnValue = F("Friedrichsbrunner Chaussee");
break;
}
case 107903:
{
returnValue = F("Friedrichsbrunner Runde");
break;
}
case 107904:
{
returnValue = F("Friedrichsbrunner Str.");
break;
}
case 107905:
{
returnValue = F("Friedrichsbrücke");
break;
}
case 107906:
{
returnValue = F("Friedrichsbrücker Str.");
break;
}
case 107907:
{
returnValue = F("Friedrichsburger Str.");
break;
}
case 107908:
{
returnValue = F("Friedrichsbühn");
break;
}
case 107909:
{
returnValue = F("Friedrichsdamm");
break;
}
case 107910:
{
returnValue = F("Friedrichsdorf");
break;
}
case 107911:
{
returnValue = F("Friedrichsdorfer Landstr.");
break;
}
case 107912:
{
returnValue = F("Friedrichsdorfer Str.");
break;
}
case 107913:
{
returnValue = F("Friedrichsdorfer Weg");
break;
}
case 107914:
{
returnValue = F("Friedrichsdorfstr.");
break;
}
case 107915:
{
returnValue = F("Friedrichseewiesen");
break;
}
case 107916:
{
returnValue = F("Friedrichsfehner Str.");
break;
}
case 107917:
{
returnValue = F("Friedrichsfeld");
break;
}
case 107918:
{
returnValue = F("Friedrichsfelde");
break;
}
case 107919:
{
returnValue = F("Friedrichsfelder Ring");
break;
}
case 107920:
{
returnValue = F("Friedrichsfelder Str.");
break;
}
case 107921:
{
returnValue = F("Friedrichsfelder Weg");
break;
}
case 107922:
{
returnValue = F("Friedrichsfeldweg");
break;
}
case 107923:
{
returnValue = F("Friedrichsgabe");
break;
}
case 107924:
{
returnValue = F("Friedrichsgaber Str.");
break;
}
case 107925:
{
returnValue = F("Friedrichsgaber Weg");
break;
}
case 107926:
{
returnValue = F("Friedrichsgasse");
break;
}
case 107927:
{
returnValue = F("Friedrichsgroden");
break;
}
case 107928:
{
returnValue = F("Friedrichsgrund");
break;
}
case 107929:
{
returnValue = F("Friedrichsgrüner Park");
break;
}
case 107930:
{
returnValue = F("Friedrichsgrüner Str.");
break;
}
case 107931:
{
returnValue = F("Friedrichshafener Str.");
break;
}
case 107932:
{
returnValue = F("Friedrichshagen");
break;
}
case 107933:
{
returnValue = F("Friedrichshagen Dorfstr.");
break;
}
case 107934:
{
returnValue = F("Friedrichshagener Chaussee");
break;
}
case 107935:
{
returnValue = F("Friedrichshagener Str.");
break;
}
case 107936:
{
returnValue = F("Friedrichshagener Weg");
break;
}
case 107937:
{
returnValue = F("Friedrichshainer Weg");
break;
}
case 107938:
{
returnValue = F("Friedrichshalde");
break;
}
case 107939:
{
returnValue = F("Friedrichshaller Str.");
break;
}
case 107940:
{
returnValue = F("Friedrichshausen");
break;
}
case 107941:
{
returnValue = F("Friedrichsheck");
break;
}
case 107942:
{
returnValue = F("Friedrichshof");
break;
}
case 107943:
{
returnValue = F("Friedrichshofener Str.");
break;
}
case 107944:
{
returnValue = F("Friedrichshofer Weg");
break;
}
case 107945:
{
returnValue = F("Friedrichsholz");
break;
}
case 107946:
{
returnValue = F("Friedrichshulder Stieg");
break;
}
case 107947:
{
returnValue = F("Friedrichshulder Weg");
break;
}
case 107948:
{
returnValue = F("Friedrichshäger Str.");
break;
}
case 107949:
{
returnValue = F("Friedrichshäng");
break;
}
case 107950:
{
returnValue = F("Friedrichshäuser Str.");
break;
}
case 107951:
{
returnValue = F("Friedrichshöferstr.");
break;
}
case 107952:
{
returnValue = F("Friedrichshöh");
break;
}
case 107953:
{
returnValue = F("Friedrichshöhe");
break;
}
case 107954:
{
returnValue = F("Friedrichshöher Str.");
break;
}
case 107955:
{
returnValue = F("Friedrichshütte");
break;
}
case 107956:
{
returnValue = F("Friedrichskamp");
break;
}
case 107957:
{
returnValue = F("Friedrichsköger Str.");
break;
}
case 107958:
{
returnValue = F("Friedrichsmoorsche Allee");
break;
}
case 107959:
{
returnValue = F("Friedrichsmühle");
break;
}
case 107960:
{
returnValue = F("Friedrichsmühlenweg");
break;
}
case 107961:
{
returnValue = F("Friedrichsorter Str.");
break;
}
case 107962:
{
returnValue = F("Friedrichspark");
break;
}
case 107963:
{
returnValue = F("Friedrichspfad");
break;
}
case 107964:
{
returnValue = F("Friedrichsplatz");
break;
}
case 107965:
{
returnValue = F("Friedrichsrain");
break;
}
case 107966:
{
returnValue = F("Friedrichsried");
break;
}
case 107967:
{
returnValue = F("Friedrichsring");
break;
}
case 107968:
{
returnValue = F("Friedrichsruh");
break;
}
case 107969:
{
returnValue = F("Friedrichsruhe");
break;
}
case 107970:
{
returnValue = F("Friedrichsruher Ring");
break;
}
case 107971:
{
returnValue = F("Friedrichsruher Str.");
break;
}
case 107972:
{
returnValue = F("Friedrichsruher Weg");
break;
}
case 107973:
{
returnValue = F("Friedrichsruhweg");
break;
}
case 107974:
{
returnValue = F("Friedrichsröder Str.");
break;
}
case 107975:
{
returnValue = F("Friedrichsschleuse");
break;
}
case 107976:
{
returnValue = F("Friedrichssiedlung");
break;
}
case 107977:
{
returnValue = F("Friedrichsstr.");
break;
}
case 107978:
{
returnValue = F("Friedrichstal");
break;
}
case 107979:
{
returnValue = F("Friedrichstaler Allee");
break;
}
case 107980:
{
returnValue = F("Friedrichstaler Str.");
break;
}
case 107981:
{
returnValue = F("Friedrichstaler Weg");
break;
}
case 107982:
{
returnValue = F("Friedrichstalstr.");
break;
}
case 107983:
{
returnValue = F("Friedrichstalweg");
break;
}
case 107984:
{
returnValue = F("Friedrichsthal");
break;
}
case 107985:
{
returnValue = F("Friedrichsthaler Chaussee");
break;
}
case 107986:
{
returnValue = F("Friedrichsthaler Feldweg");
break;
}
case 107987:
{
returnValue = F("Friedrichsthaler Str.");
break;
}
case 107988:
{
returnValue = F("Friedrichsthaler Weg");
break;
}
case 107989:
{
returnValue = F("Friedrichsthalstr.");
break;
}
case 107990:
{
returnValue = F("Friedrichstr.");
break;
}
case 107991:
{
returnValue = F("Friedrichstädter Chaussee");
break;
}
case 107992:
{
returnValue = F("Friedrichstädter Str.");
break;
}
case 107993:
{
returnValue = F("Friedrichswalde");
break;
}
case 107994:
{
returnValue = F("Friedrichswalder Platz");
break;
}
case 107995:
{
returnValue = F("Friedrichswalder Str.");
break;
}
case 107996:
{
returnValue = F("Friedrichswalder Weiche");
break;
}
case 107997:
{
returnValue = F("Friedrichsweg");
break;
}
case 107998:
{
returnValue = F("Friedrichswerk");
break;
}
case 107999:
{
returnValue = F("Friedrichswerther Chaussee");
break;
}
case 108000:
{
returnValue = F("Friedrichswerther Str.");
break;
}
case 108001:
{
returnValue = F("Friedrichswerther Weg");
break;
}
case 108002:
{
returnValue = F("Friedrichswiese");
break;
}
case 108003:
{
returnValue = F("Friedrichweg");
break;
}
case 108004:
{
returnValue = F("Friedrichweilerstr.");
break;
}
case 108005:
{
returnValue = F("Friedrikenstr.");
break;
}
case 108006:
{
returnValue = F("Friedsgasse");
break;
}
case 108007:
{
returnValue = F("Friedshofsweg");
break;
}
case 108008:
{
returnValue = F("Friedsteinstr.");
break;
}
case 108009:
{
returnValue = F("Friedstr.");
break;
}
case 108010:
{
returnValue = F("Friedwaldweg");
break;
}
case 108011:
{
returnValue = F("Friedweg");
break;
}
case 108012:
{
returnValue = F("Friefeldstr.");
break;
}
case 108013:
{
returnValue = F("Friehenstr.");
break;
}
case 108014:
{
returnValue = F("Frielendorfer Str.");
break;
}
case 108015:
{
returnValue = F("Frielentrop");
break;
}
case 108016:
{
returnValue = F("Frielentroper Weg");
break;
}
case 108017:
{
returnValue = F("Frielinger Str.");
break;
}
case 108018:
{
returnValue = F("Frielinger Weg");
break;
}
case 108019:
{
returnValue = F("Frielingerweg");
break;
}
case 108020:
{
returnValue = F("Frielinghausen");
break;
}
case 108021:
{
returnValue = F("Frielinghausener Str.");
break;
}
case 108022:
{
returnValue = F("Frielinghauser Str.");
break;
}
case 108023:
{
returnValue = F("Frielinghausstr.");
break;
}
case 108024:
{
returnValue = F("Frielings Feld");
break;
}
case 108025:
{
returnValue = F("Frielingsdorfer Str.");
break;
}
case 108026:
{
returnValue = F("Frielingsweg");
break;
}
case 108027:
{
returnValue = F("Frielsweg");
break;
}
case 108028:
{
returnValue = F("Friemannsweg");
break;
}
case 108029:
{
returnValue = F("Friemannweg");
break;
}
case 108030:
{
returnValue = F("Friemarer Str.");
break;
}
case 108031:
{
returnValue = F("Friemarstr.");
break;
}
case 108032:
{
returnValue = F("Friemer Str.");
break;
}
case 108033:
{
returnValue = F("Friemersheimer Str.");
break;
}
case 108034:
{
returnValue = F("Friemoor");
break;
}
case 108035:
{
returnValue = F("Friemsackerweg");
break;
}
case 108036:
{
returnValue = F("Frienendorfweg");
break;
}
case 108037:
{
returnValue = F("Frienhorn");
break;
}
case 108038:
{
returnValue = F("Frienstedter Weg");
break;
}
case 108039:
{
returnValue = F("Frienweg");
break;
}
case 108040:
{
returnValue = F("Frieport");
break;
}
case 108041:
{
returnValue = F("Fries Kamp");
break;
}
case 108042:
{
returnValue = F("Fries-Weg");
break;
}
case 108043:
{
returnValue = F("Friesacker Str.");
break;
}
case 108044:
{
returnValue = F("Friesacker Weg");
break;
}
case 108045:
{
returnValue = F("Friesau");
break;
}
case 108046:
{
returnValue = F("Friesauer Hügel");
break;
}
case 108047:
{
returnValue = F("Friesauer Weg");
break;
}
case 108048:
{
returnValue = F("Frieschenmoorer Str.");
break;
}
case 108049:
{
returnValue = F("Friesdonker Weg");
break;
}
case 108050:
{
returnValue = F("Friesdorf");
break;
}
case 108051:
{
returnValue = F("Friesdorfer Anger");
break;
}
case 108052:
{
returnValue = F("Friesdorfer Dorfstr.");
break;
}
case 108053:
{
returnValue = F("Friesdorfer Hauptstr.");
break;
}
case 108054:
{
returnValue = F("Friesen");
break;
}
case 108055:
{
returnValue = F("Friesenbenden");
break;
}
case 108056:
{
returnValue = F("Friesenberg");
break;
}
case 108057:
{
returnValue = F("Friesenbergstr.");
break;
}
case 108058:
{
returnValue = F("Friesenbergsweg");
break;
}
case 108059:
{
returnValue = F("Friesendamm");
break;
}
case 108060:
{
returnValue = F("Frieseneggerweg");
break;
}
case 108061:
{
returnValue = F("Friesener Hauptstr.");
break;
}
case 108062:
{
returnValue = F("Friesener Str.");
break;
}
case 108063:
{
returnValue = F("Friesener Torweg");
break;
}
case 108064:
{
returnValue = F("Friesener Weg");
break;
}
case 108065:
{
returnValue = F("Friesenfeld");
break;
}
case 108066:
{
returnValue = F("Friesengasse");
break;
}
case 108067:
{
returnValue = F("Friesenhausener Str.");
break;
}
case 108068:
{
returnValue = F("Friesenheimer Hauptstr.");
break;
}
case 108069:
{
returnValue = F("Friesenheimer Hauptstr. (Winterseite)");
break;
}
case 108070:
{
returnValue = F("Friesenheimer Str.");
break;
}
case 108071:
{
returnValue = F("Friesenheimer Weg");
break;
}
case 108072:
{
returnValue = F("Friesenhof");
break;
}
case 108073:
{
returnValue = F("Friesenhofen Bahnhof");
break;
}
case 108074:
{
returnValue = F("Friesenhofener Str.");
break;
}
case 108075:
{
returnValue = F("Friesenhofstr.");
break;
}
case 108076:
{
returnValue = F("Friesenhäusler Str.");
break;
}
case 108077:
{
returnValue = F("Friesenhörn");
break;
}
case 108078:
{
returnValue = F("Friesenkamp");
break;
}
case 108079:
{
returnValue = F("Friesenpark");
break;
}
case 108080:
{
returnValue = F("Friesenpatt");
break;
}
case 108081:
{
returnValue = F("Friesenplatz");
break;
}
case 108082:
{
returnValue = F("Friesenrieder Str.");
break;
}
case 108083:
{
returnValue = F("Friesenring");
break;
}
case 108084:
{
returnValue = F("Friesenschanze");
break;
}
case 108085:
{
returnValue = F("Friesensportplatz");
break;
}
case 108086:
{
returnValue = F("Friesenstieg");
break;
}
case 108087:
{
returnValue = F("Friesenstr.");
break;
}
case 108088:
{
returnValue = F("Friesentalstr.");
break;
}
case 108089:
{
returnValue = F("Friesentor");
break;
}
case 108090:
{
returnValue = F("Friesenweg");
break;
}
case 108091:
{
returnValue = F("Friesenweide");
break;
}
case 108092:
{
returnValue = F("Friesenwinkel");
break;
}
case 108093:
{
returnValue = F("Friesenäcker");
break;
}
case 108094:
{
returnValue = F("Friesestr.");
break;
}
case 108095:
{
returnValue = F("Frieseweg");
break;
}
case 108096:
{
returnValue = F("Frieshaken");
break;
}
case 108097:
{
returnValue = F("Friesheimer Str.");
break;
}
case 108098:
{
returnValue = F("Frieshölzlweg");
break;
}
case 108099:
{
returnValue = F("Friesik");
break;
}
case 108100:
{
returnValue = F("Friesingerstr.");
break;
}
case 108101:
{
returnValue = F("Friesische Lücke");
break;
}
case 108102:
{
returnValue = F("Friesische Str.");
break;
}
case 108103:
{
returnValue = F("Friesischer Bogen");
break;
}
case 108104:
{
returnValue = F("Frieslandring");
break;
}
case 108105:
{
returnValue = F("Frieslandstr.");
break;
}
case 108106:
{
returnValue = F("Frieslandweg");
break;
}
case 108107:
{
returnValue = F("Frieslewaldweg");
break;
}
case 108108:
{
returnValue = F("Friesländer Str.");
break;
}
case 108109:
{
returnValue = F("Friesnergässchen");
break;
}
case 108110:
{
returnValue = F("Friesoyther Str.");
break;
}
case 108111:
{
returnValue = F("Friesstr.");
break;
}
case 108112:
{
returnValue = F("Friesweg");
break;
}
case 108113:
{
returnValue = F("Frietenweg");
break;
}
case 108114:
{
returnValue = F("Frieterhofstr.");
break;
}
case 108115:
{
returnValue = F("Frieth");
break;
}
case 108116:
{
returnValue = F("Friethweg");
break;
}
case 108117:
{
returnValue = F("Friethöfer Kamp");
break;
}
case 108118:
{
returnValue = F("Frietinger Str.");
break;
}
case 108119:
{
returnValue = F("Frietstr.");
break;
}
case 108120:
{
returnValue = F("Friewei");
break;
}
case 108121:
{
returnValue = F("Frießenbeuneweg");
break;
}
case 108122:
{
returnValue = F("Friggastr.");
break;
}
case 108123:
{
returnValue = F("Friggenplass");
break;
}
case 108124:
{
returnValue = F("Friggepättken");
break;
}
case 108125:
{
returnValue = F("Frigghof");
break;
}
case 108126:
{
returnValue = F("Frijagang");
break;
}
case 108127:
{
returnValue = F("Frikhinger Anlagen");
break;
}
case 108128:
{
returnValue = F("Frilinghoven");
break;
}
case 108129:
{
returnValue = F("Frillenseestr.");
break;
}
case 108130:
{
returnValue = F("Frillenseeweg");
break;
}
case 108131:
{
returnValue = F("Friller Kirchweg");
break;
}
case 108132:
{
returnValue = F("Friller Str.");
break;
}
case 108133:
{
returnValue = F("Friller Weg");
break;
}
case 108134:
{
returnValue = F("Friller Wiesen");
break;
}
case 108135:
{
returnValue = F("Frillings Esch");
break;
}
case 108136:
{
returnValue = F("Frillingstr.");
break;
}
case 108137:
{
returnValue = F("Frimarstr.");
break;
}
case 108138:
{
returnValue = F("Frimhöringer Str.");
break;
}
case 108139:
{
returnValue = F("Frimleystr.");
break;
}
case 108140:
{
returnValue = F("Frimmersdorfer Str.");
break;
}
case 108141:
{
returnValue = F("Fringsgasse");
break;
}
case 108142:
{
returnValue = F("Fringsgässchen");
break;
}
case 108143:
{
returnValue = F("Fringsstr.");
break;
}
case 108144:
{
returnValue = F("Fringstr.");
break;
}
case 108145:
{
returnValue = F("Frinkenstr.");
break;
}
case 108146:
{
returnValue = F("Frintroper Str.");
break;
}
case 108147:
{
returnValue = F("Frinzberg");
break;
}
case 108148:
{
returnValue = F("Friolzheimer Str.");
break;
}
case 108149:
{
returnValue = F("Frisch-Glück-Str.");
break;
}
case 108150:
{
returnValue = F("Frischborner Str.");
break;
}
case 108151:
{
returnValue = F("Frischbörner Str.");
break;
}
case 108152:
{
returnValue = F("Frische Mühle");
break;
}
case 108153:
{
returnValue = F("Frischeck");
break;
}
case 108154:
{
returnValue = F("Frischecker Str.");
break;
}
case 108155:
{
returnValue = F("Frischer Wind");
break;
}
case 108156:
{
returnValue = F("Frischeweg");
break;
}
case 108157:
{
returnValue = F("Frischglückweg");
break;
}
case 108158:
{
returnValue = F("Frischholt");
break;
}
case 108159:
{
returnValue = F("Frischlinstr.");
break;
}
case 108160:
{
returnValue = F("Frischlinweg");
break;
}
case 108161:
{
returnValue = F("Frischmuthstr.");
break;
}
case 108162:
{
returnValue = F("Frischnau");
break;
}
case 108163:
{
returnValue = F("Frischstr.");
break;
}
case 108164:
{
returnValue = F("Frischwassertal");
break;
}
case 108165:
{
returnValue = F("Frischweid");
break;
}
case 108166:
{
returnValue = F("Frisia");
break;
}
case 108167:
{
returnValue = F("Frisiastr.");
break;
}
case 108168:
{
returnValue = F("Frisiaweg");
break;
}
case 108169:
{
returnValue = F("Frisierstr.");
break;
}
case 108170:
{
returnValue = F("Frisonistr.");
break;
}
case 108171:
{
returnValue = F("Fristinger Str.");
break;
}
case 108172:
{
returnValue = F("Fristower Weg");
break;
}
case 108173:
{
returnValue = F("Frisörstege");
break;
}
case 108174:
{
returnValue = F("Fritilostr.");
break;
}
case 108175:
{
returnValue = F("Fritschendorfer Weg");
break;
}
case 108176:
{
returnValue = F("Fritscheplatz");
break;
}
case 108177:
{
returnValue = F("Fritscheshofer Str.");
break;
}
case 108178:
{
returnValue = F("Frittlinger Str.");
break;
}
case 108179:
{
returnValue = F("Fritweg");
break;
}
case 108180:
{
returnValue = F("Fritz Korhammer Strasse");
break;
}
case 108181:
{
returnValue = F("Fritz Maier-Weg");
break;
}
case 108182:
{
returnValue = F("Fritz Opel Schneise");
break;
}
case 108183:
{
returnValue = F("Fritz Schellbach Weg");
break;
}
case 108184:
{
returnValue = F("Fritz Schröppel Strasse");
break;
}
case 108185:
{
returnValue = F("Fritz Schüler Strasse");
break;
}
case 108186:
{
returnValue = F("Fritz-Abel-Steig");
break;
}
case 108187:
{
returnValue = F("Fritz-Aichele-Farm");
break;
}
case 108188:
{
returnValue = F("Fritz-Albrecht-Str.");
break;
}
case 108189:
{
returnValue = F("Fritz-Allard-Str.");
break;
}
case 108190:
{
returnValue = F("Fritz-Alther-Str.");
break;
}
case 108191:
{
returnValue = F("Fritz-Amann-Weg");
break;
}
case 108192:
{
returnValue = F("Fritz-Appel-Str.");
break;
}
case 108193:
{
returnValue = F("Fritz-Arno-Wagner-Str.");
break;
}
case 108194:
{
returnValue = F("Fritz-Arnold-Str.");
break;
}
case 108195:
{
returnValue = F("Fritz-Aßmus-Str.");
break;
}
case 108196:
{
returnValue = F("Fritz-B.-Busch-Weg");
break;
}
case 108197:
{
returnValue = F("Fritz-Bachert-Str.");
break;
}
case 108198:
{
returnValue = F("Fritz-Bartling-Str.");
break;
}
case 108199:
{
returnValue = F("Fritz-Bauche-Weg");
break;
}
case 108200:
{
returnValue = F("Fritz-Bauer-Str.");
break;
}
case 108201:
{
returnValue = F("Fritz-Baum-Allee");
break;
}
case 108202:
{
returnValue = F("Fritz-Baumgärtner-Str.");
break;
}
case 108203:
{
returnValue = F("Fritz-Bayerlein-Weg");
break;
}
case 108204:
{
returnValue = F("Fritz-Bebber-Weg");
break;
}
case 108205:
{
returnValue = F("Fritz-Bechtold-Str.");
break;
}
case 108206:
{
returnValue = F("Fritz-Beck-Str.");
break;
}
case 108207:
{
returnValue = F("Fritz-Behn-Str.");
break;
}
case 108208:
{
returnValue = F("Fritz-Bell-Str.");
break;
}
case 108209:
{
returnValue = F("Fritz-Bender-Str.");
break;
}
case 108210:
{
returnValue = F("Fritz-Berckhemer-Weg");
break;
}
case 108211:
{
returnValue = F("Fritz-Berndt-Str.");
break;
}
case 108212:
{
returnValue = F("Fritz-Berodt-Str.");
break;
}
case 108213:
{
returnValue = F("Fritz-Bertschweg");
break;
}
case 108214:
{
returnValue = F("Fritz-Bilek-Weg");
break;
}
case 108215:
{
returnValue = F("Fritz-Binder-Str.");
break;
}
case 108216:
{
returnValue = F("Fritz-Blank-Str.");
break;
}
case 108217:
{
returnValue = F("Fritz-Blettner-Weg");
break;
}
case 108218:
{
returnValue = F("Fritz-Bleyl-Str.");
break;
}
case 108219:
{
returnValue = F("Fritz-Bleyl-Weg");
break;
}
case 108220:
{
returnValue = F("Fritz-Bluhm-Str.");
break;
}
case 108221:
{
returnValue = F("Fritz-Blume-Weg");
break;
}
case 108222:
{
returnValue = F("Fritz-Bochinger-Weg");
break;
}
case 108223:
{
returnValue = F("Fritz-Bockius-Str.");
break;
}
case 108224:
{
returnValue = F("Fritz-Bodmer-Weg");
break;
}
case 108225:
{
returnValue = F("Fritz-Boehle-Str.");
break;
}
case 108226:
{
returnValue = F("Fritz-Bohr-Str.");
break;
}
case 108227:
{
returnValue = F("Fritz-Bolland-Str.");
break;
}
case 108228:
{
returnValue = F("Fritz-Bonnet-Str.");
break;
}
case 108229:
{
returnValue = F("Fritz-Born-Str.");
break;
}
case 108230:
{
returnValue = F("Fritz-Bosch-Str.");
break;
}
case 108231:
{
returnValue = F("Fritz-Brandt-Str.");
break;
}
case 108232:
{
returnValue = F("Fritz-Brather-Str.");
break;
}
case 108233:
{
returnValue = F("Fritz-Braun-Str.");
break;
}
case 108234:
{
returnValue = F("Fritz-Buddin-Ring");
break;
}
case 108235:
{
returnValue = F("Fritz-Burmann-Str.");
break;
}
case 108236:
{
returnValue = F("Fritz-Bölts-Str.");
break;
}
case 108237:
{
returnValue = F("Fritz-Börner-Str.");
break;
}
case 108238:
{
returnValue = F("Fritz-Büsing-Str.");
break;
}
case 108239:
{
returnValue = F("Fritz-Carry-Str.");
break;
}
case 108240:
{
returnValue = F("Fritz-Claus-Ring");
break;
}
case 108241:
{
returnValue = F("Fritz-Claus-Str.");
break;
}
case 108242:
{
returnValue = F("Fritz-Claus-Weg");
break;
}
case 108243:
{
returnValue = F("Fritz-Cording-Str.");
break;
}
case 108244:
{
returnValue = F("Fritz-Cremer-Str.");
break;
}
case 108245:
{
returnValue = F("Fritz-Curschmann-Weg");
break;
}
case 108246:
{
returnValue = F("Fritz-Dann-Str.");
break;
}
case 108247:
{
returnValue = F("Fritz-Dedat-Str.");
break;
}
case 108248:
{
returnValue = F("Fritz-Dehn-Str.");
break;
}
case 108249:
{
returnValue = F("Fritz-Delius-Str.");
break;
}
case 108250:
{
returnValue = F("Fritz-Deubner-Platz");
break;
}
case 108251:
{
returnValue = F("Fritz-Deutzmann-Str.");
break;
}
case 108252:
{
returnValue = F("Fritz-Deuß-Str.");
break;
}
case 108253:
{
returnValue = F("Fritz-Diekmann-Str.");
break;
}
case 108254:
{
returnValue = F("Fritz-Dobisch-Str.");
break;
}
case 108255:
{
returnValue = F("Fritz-Domke-Str.");
break;
}
case 108256:
{
returnValue = F("Fritz-Doppel-Str.");
break;
}
case 108257:
{
returnValue = F("Fritz-Drescher-Str.");
break;
}
case 108258:
{
returnValue = F("Fritz-Dächert-Weg");
break;
}
case 108259:
{
returnValue = F("Fritz-Ebel-Allee");
break;
}
case 108260:
{
returnValue = F("Fritz-Eberle-Str.");
break;
}
case 108261:
{
returnValue = F("Fritz-Ebert-Ring");
break;
}
case 108262:
{
returnValue = F("Fritz-Ebert-Str.");
break;
}
case 108263:
{
returnValue = F("Fritz-Eggeling-Allee");
break;
}
case 108264:
{
returnValue = F("Fritz-Egner-Str.");
break;
}
case 108265:
{
returnValue = F("Fritz-Ehlers-Weg");
break;
}
case 108266:
{
returnValue = F("Fritz-Ehrler-Str.");
break;
}
case 108267:
{
returnValue = F("Fritz-Ehrlich-Str.");
break;
}
case 108268:
{
returnValue = F("Fritz-Ehrmann-Str.");
break;
}
case 108269:
{
returnValue = F("Fritz-Eilers-Str.");
break;
}
case 108270:
{
returnValue = F("Fritz-Elling-Str.");
break;
}
case 108271:
{
returnValue = F("Fritz-Endreß-Weg");
break;
}
case 108272:
{
returnValue = F("Fritz-Erbe-Str.");
break;
}
case 108273:
{
returnValue = F("Fritz-Erdner-Str.");
break;
}
case 108274:
{
returnValue = F("Fritz-Erler-Ring");
break;
}
case 108275:
{
returnValue = F("Fritz-Erler-Str.");
break;
}
case 108276:
{
returnValue = F("Fritz-Erler-Weg");
break;
}
case 108277:
{
returnValue = F("Fritz-Ettengruber-Str.");
break;
}
case 108278:
{
returnValue = F("Fritz-Feil-Str.");
break;
}
case 108279:
{
returnValue = F("Fritz-Fend-Str.");
break;
}
case 108280:
{
returnValue = F("Fritz-Figge-Weg");
break;
}
case 108281:
{
returnValue = F("Fritz-Fischer-Str.");
break;
}
case 108282:
{
returnValue = F("Fritz-Fischer-Weg");
break;
}
case 108283:
{
returnValue = F("Fritz-Forster-Weg");
break;
}
case 108284:
{
returnValue = F("Fritz-Franck-Weg");
break;
}
case 108285:
{
returnValue = F("Fritz-Franz-Str.");
break;
}
case 108286:
{
returnValue = F("Fritz-Freisleben-Str.");
break;
}
case 108287:
{
returnValue = F("Fritz-Frerichs-Str.");
break;
}
case 108288:
{
returnValue = F("Fritz-Freund-Park");
break;
}
case 108289:
{
returnValue = F("Fritz-Frey-Str.");
break;
}
case 108290:
{
returnValue = F("Fritz-Friedrich-Str.");
break;
}
case 108291:
{
returnValue = F("Fritz-Furthmann-Weg");
break;
}
case 108292:
{
returnValue = F("Fritz-Färber-Weg");
break;
}
case 108293:
{
returnValue = F("Fritz-Gagelmann-Weg");
break;
}
case 108294:
{
returnValue = F("Fritz-Gartz-Weg");
break;
}
case 108295:
{
returnValue = F("Fritz-Gastager-Str.");
break;
}
case 108296:
{
returnValue = F("Fritz-Gegauf-Str.");
break;
}
case 108297:
{
returnValue = F("Fritz-Gehle-Str.");
break;
}
case 108298:
{
returnValue = F("Fritz-Gempt-Str.");
break;
}
case 108299:
{
returnValue = F("Fritz-Gerasch-Weg");
break;
}
case 108300:
{
returnValue = F("Fritz-Geray-Str.");
break;
}
case 108301:
{
returnValue = F("Fritz-Gerlich-Str.");
break;
}
case 108302:
{
returnValue = F("Fritz-Gernsheim-Str.");
break;
}
case 108303:
{
returnValue = F("Fritz-Gille-Weg");
break;
}
case 108304:
{
returnValue = F("Fritz-Glahn-Str.");
break;
}
case 108305:
{
returnValue = F("Fritz-Glenz-Str.");
break;
}
case 108306:
{
returnValue = F("Fritz-Golsen-Str.");
break;
}
case 108307:
{
returnValue = F("Fritz-Gontermann-Str.");
break;
}
case 108308:
{
returnValue = F("Fritz-Gottsleben-Str.");
break;
}
case 108309:
{
returnValue = F("Fritz-Goßler-Str.");
break;
}
case 108310:
{
returnValue = F("Fritz-Graef-Weg");
break;
}
case 108311:
{
returnValue = F("Fritz-Grasshoff-Gasse");
break;
}
case 108312:
{
returnValue = F("Fritz-Graßhoff-Str.");
break;
}
case 108313:
{
returnValue = F("Fritz-Grebe-Weg");
break;
}
case 108314:
{
returnValue = F("Fritz-Griebel-Str.");
break;
}
case 108315:
{
returnValue = F("Fritz-Grimpe-Str.");
break;
}
case 108316:
{
returnValue = F("Fritz-Große-Str.");
break;
}
case 108317:
{
returnValue = F("Fritz-Gräbe-Str.");
break;
}
case 108318:
{
returnValue = F("Fritz-Gugelmeier-Str.");
break;
}
case 108319:
{
returnValue = F("Fritz-Gumpert-Platz");
break;
}
case 108320:
{
returnValue = F("Fritz-Güntzler-Weg");
break;
}
case 108321:
{
returnValue = F("Fritz-Haber-Str.");
break;
}
case 108322:
{
returnValue = F("Fritz-Hachenberg-Str.");
break;
}
case 108323:
{
returnValue = F("Fritz-Hagner-Promenade");
break;
}
case 108324:
{
returnValue = F("Fritz-Hahne-Str.");
break;
}
case 108325:
{
returnValue = F("Fritz-Hampel-Weg");
break;
}
case 108326:
{
returnValue = F("Fritz-Hankel-Str.");
break;
}
case 108327:
{
returnValue = F("Fritz-Hanna-Str.");
break;
}
case 108328:
{
returnValue = F("Fritz-Harries-Str.");
break;
}
case 108329:
{
returnValue = F("Fritz-Hartmann-Str.");
break;
}
case 108330:
{
returnValue = F("Fritz-Heckens-Weg");
break;
}
case 108331:
{
returnValue = F("Fritz-Heckert-Ring");
break;
}
case 108332:
{
returnValue = F("Fritz-Heckert-Siedlung");
break;
}
case 108333:
{
returnValue = F("Fritz-Heckert-Str.");
break;
}
case 108334:
{
returnValue = F("Fritz-Heckert-Weg");
break;
}
case 108335:
{
returnValue = F("Fritz-Heeg-Erasmus-Weg");
break;
}
case 108336:
{
returnValue = F("Fritz-Heil-Str.");
break;
}
case 108337:
{
returnValue = F("Fritz-Heilmann-Weg");
break;
}
case 108338:
{
returnValue = F("Fritz-Helmut-Allee");
break;
}
case 108339:
{
returnValue = F("Fritz-Henkel-Park");
break;
}
case 108340:
{
returnValue = F("Fritz-Henkel-Str.");
break;
}
case 108341:
{
returnValue = F("Fritz-Herzberg-Weg");
break;
}
case 108342:
{
returnValue = F("Fritz-Hesse-Gasse");
break;
}
case 108343:
{
returnValue = F("Fritz-Hesse-Str.");
break;
}
case 108344:
{
returnValue = F("Fritz-Heun-Weg");
break;
}
case 108345:
{
returnValue = F("Fritz-Himmelmann-Str.");
break;
}
case 108346:
{
returnValue = F("Fritz-Himpel-Str.");
break;
}
case 108347:
{
returnValue = F("Fritz-Hirsch-Str.");
break;
}
case 108348:
{
returnValue = F("Fritz-Hoffmann-Str.");
break;
}
case 108349:
{
returnValue = F("Fritz-Hofmann-Str.");
break;
}
case 108350:
{
returnValue = F("Fritz-Hofmann-Weg");
break;
}
case 108351:
{
returnValue = F("Fritz-Hollweg-Ring");
break;
}
case 108352:
{
returnValue = F("Fritz-Honsel-Str.");
break;
}
case 108353:
{
returnValue = F("Fritz-Hopf-Str.");
break;
}
case 108354:
{
returnValue = F("Fritz-Horn-Str.");
break;
}
case 108355:
{
returnValue = F("Fritz-Hornschuch-Platz");
break;
}
case 108356:
{
returnValue = F("Fritz-Hornschuch-Str.");
break;
}
case 108357:
{
returnValue = F("Fritz-Huhn-Str.");
break;
}
case 108358:
{
returnValue = F("Fritz-Huhnen-Str.");
break;
}
case 108359:
{
returnValue = F("Fritz-Husemann-Str.");
break;
}
case 108360:
{
returnValue = F("Fritz-Husemann-Weg");
break;
}
case 108361:
{
returnValue = F("Fritz-Husmann-Str.");
break;
}
case 108362:
{
returnValue = F("Fritz-Husmann-Weg");
break;
}
case 108363:
{
returnValue = F("Fritz-Huxel-Platz");
break;
}
case 108364:
{
returnValue = F("Fritz-Huxel-Str.");
break;
}
case 108365:
{
returnValue = F("Fritz-Häuser-Str.");
break;
}
case 108366:
{
returnValue = F("Fritz-Häußer-Weg");
break;
}
case 108367:
{
returnValue = F("Fritz-Höger-Karree");
break;
}
case 108368:
{
returnValue = F("Fritz-Höger-Ring");
break;
}
case 108369:
{
returnValue = F("Fritz-Höger-Str.");
break;
}
case 108370:
{
returnValue = F("Fritz-Höhn-Weg");
break;
}
case 108371:
{
returnValue = F("Fritz-Höppler-Str.");
break;
}
case 108372:
{
returnValue = F("Fritz-Hörnig-Weg");
break;
}
case 108373:
{
returnValue = F("Fritz-Hübscher-Str.");
break;
}
case 108374:
{
returnValue = F("Fritz-Hüfelinger-Weg");
break;
}
case 108375:
{
returnValue = F("Fritz-Jaeger-Allee");
break;
}
case 108376:
{
returnValue = F("Fritz-Jaeger-Str.");
break;
}
case 108377:
{
returnValue = F("Fritz-Jahn-Str.");
break;
}
case 108378:
{
returnValue = F("Fritz-Jebe-Str.");
break;
}
case 108379:
{
returnValue = F("Fritz-Josephs-Str.");
break;
}
case 108380:
{
returnValue = F("Fritz-Jung-Str.");
break;
}
case 108381:
{
returnValue = F("Fritz-Junge-Str.");
break;
}
case 108382:
{
returnValue = F("Fritz-Jöde-Str.");
break;
}
case 108383:
{
returnValue = F("Fritz-Jöde-Weg");
break;
}
case 108384:
{
returnValue = F("Fritz-Jürges-Weg");
break;
}
case 108385:
{
returnValue = F("Fritz-Kalisch-Str.");
break;
}
case 108386:
{
returnValue = F("Fritz-Kaltenbach-Str.");
break;
}
case 108387:
{
returnValue = F("Fritz-Kauffmann-Str.");
break;
}
case 108388:
{
returnValue = F("Fritz-Keck-Str.");
break;
}
case 108389:
{
returnValue = F("Fritz-Keller-Str.");
break;
}
case 108390:
{
returnValue = F("Fritz-Keller-Weg");
break;
}
case 108391:
{
returnValue = F("Fritz-Kempe-Str.");
break;
}
case 108392:
{
returnValue = F("Fritz-Kiehn-Str.");
break;
}
case 108393:
{
returnValue = F("Fritz-Kieninger-Str.");
break;
}
case 108394:
{
returnValue = F("Fritz-Kircher-Str.");
break;
}
case 108395:
{
returnValue = F("Fritz-Klatt-Str.");
break;
}
case 108396:
{
returnValue = F("Fritz-Klatte-Str.");
break;
}
case 108397:
{
returnValue = F("Fritz-Kleiner-Str.");
break;
}
case 108398:
{
returnValue = F("Fritz-Klett-Str.");
break;
}
case 108399:
{
returnValue = F("Fritz-Klose-Weg");
break;
}
case 108400:
{
returnValue = F("Fritz-Knape-Str.");
break;
}
case 108401:
{
returnValue = F("Fritz-Kneidl-Str.");
break;
}
case 108402:
{
returnValue = F("Fritz-Knoll-Ring");
break;
}
case 108403:
{
returnValue = F("Fritz-Kobbe-Weg");
break;
}
case 108404:
{
returnValue = F("Fritz-Koch-Str.");
break;
}
case 108405:
{
returnValue = F("Fritz-Koldewey-Str.");
break;
}
case 108406:
{
returnValue = F("Fritz-Kopp-Str.");
break;
}
case 108407:
{
returnValue = F("Fritz-Kortner-Weg");
break;
}
case 108408:
{
returnValue = F("Fritz-Kotz-Str.");
break;
}
case 108409:
{
returnValue = F("Fritz-Kraemer-Weg");
break;
}
case 108410:
{
returnValue = F("Fritz-Kramer-Str.");
break;
}
case 108411:
{
returnValue = F("Fritz-Krause-Str.");
break;
}
case 108412:
{
returnValue = F("Fritz-Kredel-Str.");
break;
}
case 108413:
{
returnValue = F("Fritz-Kreß-Str.");
break;
}
case 108414:
{
returnValue = F("Fritz-Krieger-Str.");
break;
}
case 108415:
{
returnValue = F("Fritz-Krug-Weg");
break;
}
case 108416:
{
returnValue = F("Fritz-Krumbach-Str.");
break;
}
case 108417:
{
returnValue = F("Fritz-Krämer-Str.");
break;
}
case 108418:
{
returnValue = F("Fritz-Kube-Ring");
break;
}
case 108419:
{
returnValue = F("Fritz-Kuckuck-Str.");
break;
}
case 108420:
{
returnValue = F("Fritz-Kuhlenkamp-Weg");
break;
}
case 108421:
{
returnValue = F("Fritz-Kuhn-Str.");
break;
}
case 108422:
{
returnValue = F("Fritz-Kunert-Weg");
break;
}
case 108423:
{
returnValue = F("Fritz-Kunke-Str.");
break;
}
case 108424:
{
returnValue = F("Fritz-Kähler-Str.");
break;
}
case 108425:
{
returnValue = F("Fritz-König-Str.");
break;
}
case 108426:
{
returnValue = F("Fritz-König-Weg");
break;
}
case 108427:
{
returnValue = F("Fritz-König-Winkel");
break;
}
case 108428:
{
returnValue = F("Fritz-Kühn-Platz");
break;
}
case 108429:
{
returnValue = F("Fritz-Langrehr-Str.");
break;
}
case 108430:
{
returnValue = F("Fritz-Lau-Platz");
break;
}
case 108431:
{
returnValue = F("Fritz-Lau-Str.");
break;
}
case 108432:
{
returnValue = F("Fritz-Lau-Weg");
break;
}
case 108433:
{
returnValue = F("Fritz-Lehmann-Str.");
break;
}
case 108434:
{
returnValue = F("Fritz-Lehmhaus-Weg");
break;
}
case 108435:
{
returnValue = F("Fritz-Leitz-Weg");
break;
}
case 108436:
{
returnValue = F("Fritz-Levermann-Platz");
break;
}
case 108437:
{
returnValue = F("Fritz-Lieb-Str.");
break;
}
case 108438:
{
returnValue = F("Fritz-Liebsch-Str.");
break;
}
case 108439:
{
returnValue = F("Fritz-Lieken-Eck");
break;
}
case 108440:
{
returnValue = F("Fritz-Lieken-Str.");
break;
}
case 108441:
{
returnValue = F("Fritz-Linde-Str.");
break;
}
case 108442:
{
returnValue = F("Fritz-Litzlfelder-Str.");
break;
}
case 108443:
{
returnValue = F("Fritz-Lochmann-Str.");
break;
}
case 108444:
{
returnValue = F("Fritz-Loichinger-Str.");
break;
}
case 108445:
{
returnValue = F("Fritz-Lottmann-Str.");
break;
}
case 108446:
{
returnValue = F("Fritz-Lyncker-Str.");
break;
}
case 108447:
{
returnValue = F("Fritz-Lürmann-Str.");
break;
}
case 108448:
{
returnValue = F("Fritz-Mackensen-Str.");
break;
}
case 108449:
{
returnValue = F("Fritz-Mackensen-Weg");
break;
}
case 108450:
{
returnValue = F("Fritz-Maier-Str.");
break;
}
case 108451:
{
returnValue = F("Fritz-Mayer-Str.");
break;
}
case 108452:
{
returnValue = F("Fritz-Meinecke Weg");
break;
}
case 108453:
{
returnValue = F("Fritz-Meister-Anlage");
break;
}
case 108454:
{
returnValue = F("Fritz-Meyer-Ring");
break;
}
case 108455:
{
returnValue = F("Fritz-Meyer-Str.");
break;
}
case 108456:
{
returnValue = F("Fritz-Michalski-Str.");
break;
}
case 108457:
{
returnValue = F("Fritz-Michel-Str.");
break;
}
case 108458:
{
returnValue = F("Fritz-Munz-Weg");
break;
}
case 108459:
{
returnValue = F("Fritz-Müller-Allee");
break;
}
case 108460:
{
returnValue = F("Fritz-Müller-Platz");
break;
}
case 108461:
{
returnValue = F("Fritz-Müller-Str.");
break;
}
case 108462:
{
returnValue = F("Fritz-Nagel-Siedlung");
break;
}
case 108463:
{
returnValue = F("Fritz-Neuert-Str.");
break;
}
case 108464:
{
returnValue = F("Fritz-Neumeyer-Platz");
break;
}
case 108465:
{
returnValue = F("Fritz-Niewald-Weg");
break;
}
case 108466:
{
returnValue = F("Fritz-Ober-Str.");
break;
}
case 108467:
{
returnValue = F("Fritz-Ortner-Str.");
break;
}
case 108468:
{
returnValue = F("Fritz-Osterburg-Str.");
break;
}
case 108469:
{
returnValue = F("Fritz-Ott-Randweg");
break;
}
case 108470:
{
returnValue = F("Fritz-Overbeck-Weg");
break;
}
case 108471:
{
returnValue = F("Fritz-Pahlke-Str.");
break;
}
case 108472:
{
returnValue = F("Fritz-Pannier-Str.");
break;
}
case 108473:
{
returnValue = F("Fritz-Paulmann-Weg");
break;
}
case 108474:
{
returnValue = F("Fritz-Pehlmann-Str.");
break;
}
case 108475:
{
returnValue = F("Fritz-Peters-Str.");
break;
}
case 108476:
{
returnValue = F("Fritz-Peuser-Str.");
break;
}
case 108477:
{
returnValue = F("Fritz-Pfaff-Str.");
break;
}
case 108478:
{
returnValue = F("Fritz-Pfaffinger-Weg");
break;
}
case 108479:
{
returnValue = F("Fritz-Philippi-Str.");
break;
}
case 108480:
{
returnValue = F("Fritz-Pley-Str.");
break;
}
case 108481:
{
returnValue = F("Fritz-Pollion-Str.");
break;
}
case 108482:
{
returnValue = F("Fritz-Pregl-Str.");
break;
}
case 108483:
{
returnValue = F("Fritz-Präg-Weg");
break;
}
case 108484:
{
returnValue = F("Fritz-Präuner-Str.");
break;
}
case 108485:
{
returnValue = F("Fritz-Prölß-Platz");
break;
}
case 108486:
{
returnValue = F("Fritz-Pullig-Str.");
break;
}
case 108487:
{
returnValue = F("Fritz-Quant-Str.");
break;
}
case 108488:
{
returnValue = F("Fritz-Raab-Str.");
break;
}
case 108489:
{
returnValue = F("Fritz-Rampfmoser-Weg");
break;
}
case 108490:
{
returnValue = F("Fritz-Rau-Str.");
break;
}
case 108491:
{
returnValue = F("Fritz-Rechberg-Str.");
break;
}
case 108492:
{
returnValue = F("Fritz-Rehburg-Str.");
break;
}
case 108493:
{
returnValue = F("Fritz-Reichardt-Str.");
break;
}
case 108494:
{
returnValue = F("Fritz-Reichle-Ring");
break;
}
case 108495:
{
returnValue = F("Fritz-Reim-Str.");
break;
}
case 108496:
{
returnValue = F("Fritz-Reimold-Str.");
break;
}
case 108497:
{
returnValue = F("Fritz-Remy-Str.");
break;
}
case 108498:
{
returnValue = F("Fritz-Rentzsch-Weg");
break;
}
case 108499:
{
returnValue = F("Fritz-Reusing-Weg");
break;
}
case 108500:
{
returnValue = F("Fritz-Reuter-Allee");
break;
}
case 108501:
{
returnValue = F("Fritz-Reuter-Gasse");
break;
}
case 108502:
{
returnValue = F("Fritz-Reuter-Platz");
break;
}
case 108503:
{
returnValue = F("Fritz-Reuter-Ring");
break;
}
case 108504:
{
returnValue = F("Fritz-Reuter-Str.");
break;
}
case 108505:
{
returnValue = F("Fritz-Reuter-Wall");
break;
}
case 108506:
{
returnValue = F("Fritz-Reuter-Weg");
break;
}
case 108507:
{
returnValue = F("Fritz-Rey-Str.");
break;
}
case 108508:
{
returnValue = F("Fritz-Ribot-Str.");
break;
}
case 108509:
{
returnValue = F("Fritz-Riegel-Str.");
break;
}
case 108510:
{
returnValue = F("Fritz-Riester-Str.");
break;
}
case 108511:
{
returnValue = F("Fritz-Ringler-Str.");
break;
}
case 108512:
{
returnValue = F("Fritz-Ritter-Str.");
break;
}
case 108513:
{
returnValue = F("Fritz-Romig-Weg");
break;
}
case 108514:
{
returnValue = F("Fritz-Roth-Str.");
break;
}
case 108515:
{
returnValue = F("Fritz-Ruhrmann-Str.");
break;
}
case 108516:
{
returnValue = F("Fritz-Ruoff-Str.");
break;
}
case 108517:
{
returnValue = F("Fritz-Räcke-Str.");
break;
}
case 108518:
{
returnValue = F("Fritz-Rödel-Str.");
break;
}
case 108519:
{
returnValue = F("Fritz-Rödiger-Weg");
break;
}
case 108520:
{
returnValue = F("Fritz-Rönneburg-Ring");
break;
}
case 108521:
{
returnValue = F("Fritz-Röttger-Str.");
break;
}
case 108522:
{
returnValue = F("Fritz-Röver-Str.");
break;
}
case 108523:
{
returnValue = F("Fritz-Rüffer-Str.");
break;
}
case 108524:
{
returnValue = F("Fritz-Rümmelein-Weg");
break;
}
case 108525:
{
returnValue = F("Fritz-Saacke-Str.");
break;
}
case 108526:
{
returnValue = F("Fritz-Sackewitz-Str.");
break;
}
case 108527:
{
returnValue = F("Fritz-Sauer-Str.");
break;
}
case 108528:
{
returnValue = F("Fritz-Sauter-Str.");
break;
}
case 108529:
{
returnValue = F("Fritz-Schalk-Str.");
break;
}
case 108530:
{
returnValue = F("Fritz-Schellbach-Str.");
break;
}
case 108531:
{
returnValue = F("Fritz-Schieler-Str.");
break;
}
case 108532:
{
returnValue = F("Fritz-Schilling-Weg");
break;
}
case 108533:
{
returnValue = F("Fritz-Schlampp-Str.");
break;
}
case 108534:
{
returnValue = F("Fritz-Schmenkel-Str.");
break;
}
case 108535:
{
returnValue = F("Fritz-Schmidt-Str.");
break;
}
case 108536:
{
returnValue = F("Fritz-Schneider-Str.");
break;
}
case 108537:
{
returnValue = F("Fritz-Schnelbögl-Str.");
break;
}
case 108538:
{
returnValue = F("Fritz-Schofer-Str.");
break;
}
case 108539:
{
returnValue = F("Fritz-Scholl-Str.");
break;
}
case 108540:
{
returnValue = F("Fritz-Scholl-Weg");
break;
}
case 108541:
{
returnValue = F("Fritz-Schramm-Ring");
break;
}
case 108542:
{
returnValue = F("Fritz-Schröder-Str.");
break;
}
case 108543:
{
returnValue = F("Fritz-Schubert-Ring");
break;
}
case 108544:
{
returnValue = F("Fritz-Schubert-Str.");
break;
}
case 108545:
{
returnValue = F("Fritz-Schulenburg-Str.");
break;
}
case 108546:
{
returnValue = F("Fritz-Schulte-Str.");
break;
}
case 108547:
{
returnValue = F("Fritz-Schultz-Str.");
break;
}
case 108548:
{
returnValue = F("Fritz-Schulz-Str.");
break;
}
case 108549:
{
returnValue = F("Fritz-Schulze-Str.");
break;
}
case 108550:
{
returnValue = F("Fritz-Schumacher-Str.");
break;
}
case 108551:
{
returnValue = F("Fritz-Schunck-Str.");
break;
}
case 108552:
{
returnValue = F("Fritz-Schupp-Weg");
break;
}
case 108553:
{
returnValue = F("Fritz-Schweiger-Str.");
break;
}
case 108554:
{
returnValue = F("Fritz-Schweizer-Str.");
break;
}
case 108555:
{
returnValue = F("Fritz-Schäfer-Str.");
break;
}
case 108556:
{
returnValue = F("Fritz-Schäffer-Promenade");
break;
}
case 108557:
{
returnValue = F("Fritz-Schäffer-Str.");
break;
}
case 108558:
{
returnValue = F("Fritz-Schäffer-Weg");
break;
}
case 108559:
{
returnValue = F("Fritz-Schöttler-Str.");
break;
}
case 108560:
{
returnValue = F("Fritz-Schülin-Weg");
break;
}
case 108561:
{
returnValue = F("Fritz-Schütte-Str.");
break;
}
case 108562:
{
returnValue = F("Fritz-Sebastian-Str.");
break;
}
case 108563:
{
returnValue = F("Fritz-Seebach-Str.");
break;
}
case 108564:
{
returnValue = F("Fritz-Seifert-Str.");
break;
}
case 108565:
{
returnValue = F("Fritz-Siegel-Str.");
break;
}
case 108566:
{
returnValue = F("Fritz-Snowdon-Weg");
break;
}
case 108567:
{
returnValue = F("Fritz-Soldmann-Str.");
break;
}
case 108568:
{
returnValue = F("Fritz-Sommer-Str.");
break;
}
case 108569:
{
returnValue = F("Fritz-Souchon-Str.");
break;
}
case 108570:
{
returnValue = F("Fritz-Specht-Weg");
break;
}
case 108571:
{
returnValue = F("Fritz-Spießhofer-Str.");
break;
}
case 108572:
{
returnValue = F("Fritz-Spießhofer-Weg");
break;
}
case 108573:
{
returnValue = F("Fritz-Sporn-Weg");
break;
}
case 108574:
{
returnValue = F("Fritz-Springer-Weg");
break;
}
case 108575:
{
returnValue = F("Fritz-Staiger-Str.");
break;
}
case 108576:
{
returnValue = F("Fritz-Staiger-Weg");
break;
}
case 108577:
{
returnValue = F("Fritz-Stamer-Str.");
break;
}
case 108578:
{
returnValue = F("Fritz-Stammer-Str.");
break;
}
case 108579:
{
returnValue = F("Fritz-Stegen-Allee");
break;
}
case 108580:
{
returnValue = F("Fritz-Steinhaus-Weg");
break;
}
case 108581:
{
returnValue = F("Fritz-Steinhoff-Str.");
break;
}
case 108582:
{
returnValue = F("Fritz-Steinhoff-Weg");
break;
}
case 108583:
{
returnValue = F("Fritz-Steisslinger-Str.");
break;
}
case 108584:
{
returnValue = F("Fritz-Stemmer-Str.");
break;
}
case 108585:
{
returnValue = F("Fritz-Stettner-Str.");
break;
}
case 108586:
{
returnValue = F("Fritz-Stotmeister-Str.");
break;
}
case 108587:
{
returnValue = F("Fritz-Straßmann-Str.");
break;
}
case 108588:
{
returnValue = F("Fritz-Stöckl-Str.");
break;
}
case 108589:
{
returnValue = F("Fritz-Tarnow-Str.");
break;
}
case 108590:
{
returnValue = F("Fritz-Tepe-Platz");
break;
}
case 108591:
{
returnValue = F("Fritz-Theilmann-Str.");
break;
}
case 108592:
{
returnValue = F("Fritz-Theurer-Weg");
break;
}
case 108593:
{
returnValue = F("Fritz-Thiedemann-Str.");
break;
}
case 108594:
{
returnValue = F("Fritz-Thiedemann-Weg");
break;
}
case 108595:
{
returnValue = F("Fritz-Thiele-Platz");
break;
}
case 108596:
{
returnValue = F("Fritz-Thienst-Weg");
break;
}
case 108597:
{
returnValue = F("Fritz-Thomas-Str.");
break;
}
case 108598:
{
returnValue = F("Fritz-Thomee-Str.");
break;
}
case 108599:
{
returnValue = F("Fritz-Thomée-Platz");
break;
}
case 108600:
{
returnValue = F("Fritz-Thyssen-Str.");
break;
}
case 108601:
{
returnValue = F("Fritz-Triddelfitz-Weg");
break;
}
case 108602:
{
returnValue = F("Fritz-Tröndle-Str.");
break;
}
case 108603:
{
returnValue = F("Fritz-Tölle-Str.");
break;
}
case 108604:
{
returnValue = F("Fritz-Ullmann-Weg");
break;
}
case 108605:
{
returnValue = F("Fritz-Ullmayer-Ring");
break;
}
case 108606:
{
returnValue = F("Fritz-Ulrich-Weg");
break;
}
case 108607:
{
returnValue = F("Fritz-Ungerer-Str.");
break;
}
case 108608:
{
returnValue = F("Fritz-Vogel-Weg");
break;
}
case 108609:
{
returnValue = F("Fritz-Voigt-Str.");
break;
}
case 108610:
{
returnValue = F("Fritz-Volbach-Str.");
break;
}
case 108611:
{
returnValue = F("Fritz-Wagener-Str.");
break;
}
case 108612:
{
returnValue = F("Fritz-Wagner-Str.");
break;
}
case 108613:
{
returnValue = F("Fritz-Wagner-Weg");
break;
}
case 108614:
{
returnValue = F("Fritz-Wallis-Str.");
break;
}
case 108615:
{
returnValue = F("Fritz-Walter-Str.");
break;
}
case 108616:
{
returnValue = F("Fritz-Walter-Weg");
break;
}
case 108617:
{
returnValue = F("Fritz-Weber-Str.");
break;
}
case 108618:
{
returnValue = F("Fritz-Weiberg-Str.");
break;
}
case 108619:
{
returnValue = F("Fritz-Weidinger-Str.");
break;
}
case 108620:
{
returnValue = F("Fritz-Weigl-Str.");
break;
}
case 108621:
{
returnValue = F("Fritz-Weineck-Str.");
break;
}
case 108622:
{
returnValue = F("Fritz-Wendel-Str.");
break;
}
case 108623:
{
returnValue = F("Fritz-Wendt-Str.");
break;
}
case 108624:
{
returnValue = F("Fritz-Wenk-Str.");
break;
}
case 108625:
{
returnValue = F("Fritz-Wiegleb-Str.");
break;
}
case 108626:
{
returnValue = F("Fritz-Wieland-Weg");
break;
}
case 108627:
{
returnValue = F("Fritz-Wieter-Str.");
break;
}
case 108628:
{
returnValue = F("Fritz-Wilhelm-Hörauf-Str.");
break;
}
case 108629:
{
returnValue = F("Fritz-Wilhelm-Str.");
break;
}
case 108630:
{
returnValue = F("Fritz-Wilhelm-Weg");
break;
}
case 108631:
{
returnValue = F("Fritz-Wilmering-Str.");
break;
}
case 108632:
{
returnValue = F("Fritz-Wimmer-Weg");
break;
}
case 108633:
{
returnValue = F("Fritz-Windisch-Str.");
break;
}
case 108634:
{
returnValue = F("Fritz-Wingen-Str.");
break;
}
case 108635:
{
returnValue = F("Fritz-Winkler-Str.");
break;
}
case 108636:
{
returnValue = F("Fritz-Winkler-Str..");
break;
}
case 108637:
{
returnValue = F("Fritz-Winter-Str.");
break;
}
case 108638:
{
returnValue = F("Fritz-Winter-Weg");
break;
}
case 108639:
{
returnValue = F("Fritz-Wischer-Str.");
break;
}
case 108640:
{
returnValue = F("Fritz-Wolfsberger-Str.");
break;
}
case 108641:
{
returnValue = F("Fritz-Wollrodt-Str.");
break;
}
case 108642:
{
returnValue = F("Fritz-Worm-Str.");
break;
}
case 108643:
{
returnValue = F("Fritz-Wucherer-Str.");
break;
}
case 108644:
{
returnValue = F("Fritz-Wunderlich-Str.");
break;
}
case 108645:
{
returnValue = F("Fritz-Wunderlich-Weg");
break;
}
case 108646:
{
returnValue = F("Fritz-Wurm-Weg");
break;
}
case 108647:
{
returnValue = F("Fritz-Wündisch-Str.");
break;
}
case 108648:
{
returnValue = F("Fritz-Würzburger-Weg");
break;
}
case 108649:
{
returnValue = F("Fritz-Zimmer-Str.");
break;
}
case 108650:
{
returnValue = F("Fritz-Zoll-Str.");
break;
}
case 108651:
{
returnValue = F("Fritz-Zolnhofer-Str.");
break;
}
case 108652:
{
returnValue = F("Fritz-Zumpe-Str.");
break;
}
case 108653:
{
returnValue = F("Fritz-Züchner-Str.");
break;
}
case 108654:
{
returnValue = F("Fritz-vom-Stein-Str.");
break;
}
case 108655:
{
returnValue = F("Fritz-von-Briesen-Str.");
break;
}
case 108656:
{
returnValue = F("Fritz-von-Engelberg-Str.");
break;
}
case 108657:
{
returnValue = F("Fritz-von-Graevenitz-Str.");
break;
}
case 108658:
{
returnValue = F("Fritz-von-Leonhardi-Str.");
break;
}
case 108659:
{
returnValue = F("Fritz-von-Miller-Weg");
break;
}
case 108660:
{
returnValue = F("Fritz-von-Opel-Str.");
break;
}
case 108661:
{
returnValue = F("Fritz-von-Pressenthin-Str.");
break;
}
case 108662:
{
returnValue = F("Fritz-von-Unruh-Siedlung");
break;
}
case 108663:
{
returnValue = F("Fritz-von-Unruh-Str.");
break;
}
case 108664:
{
returnValue = F("Fritz-von-Weidenbach-Str.");
break;
}
case 108665:
{
returnValue = F("Fritz-von-Wille-Str.");
break;
}
case 108666:
{
returnValue = F("Fritz-von-Wille-Weg");
break;
}
case 108667:
{
returnValue = F("Fritz-von-dem-Berge-Str.");
break;
}
case 108668:
{
returnValue = F("Fritzbruch");
break;
}
case 108669:
{
returnValue = F("Fritzdorfer Str.");
break;
}
case 108670:
{
returnValue = F("Fritze-Bollmann-Weg");
break;
}
case 108671:
{
returnValue = F("Fritzegarten");
break;
}
case 108672:
{
returnValue = F("Fritzegäßchen");
break;
}
case 108673:
{
returnValue = F("Fritzelsgasse");
break;
}
case 108674:
{
returnValue = F("Fritzenanger");
break;
}
case 108675:
{
returnValue = F("Fritzenberg");
break;
}
case 108676:
{
returnValue = F("Fritzenbergstr.");
break;
}
case 108677:
{
returnValue = F("Fritzeneck");
break;
}
case 108678:
{
returnValue = F("Fritzengasse");
break;
}
case 108679:
{
returnValue = F("Fritzengärtlein");
break;
}
case 108680:
{
returnValue = F("Fritzengässchen");
break;
}
case 108681:
{
returnValue = F("Fritzenhausgasse");
break;
}
case 108682:
{
returnValue = F("Fritzenrain");
break;
}
case 108683:
{
returnValue = F("Fritzenrasen");
break;
}
case 108684:
{
returnValue = F("Fritzenstr.");
break;
}
case 108685:
{
returnValue = F("Fritzental");
break;
}
case 108686:
{
returnValue = F("Fritzenweg");
break;
}
case 108687:
{
returnValue = F("Fritzenwiese");
break;
}
case 108688:
{
returnValue = F("Fritzerweg");
break;
}
case 108689:
{
returnValue = F("Fritzhof");
break;
}
case 108690:
{
returnValue = F("Fritzlarer Str.");
break;
}
case 108691:
{
returnValue = F("Fritzow");
break;
}
case 108692:
{
returnValue = F("Fritzower Damm");
break;
}
case 108693:
{
returnValue = F("Fritzplatz");
break;
}
case 108694:
{
returnValue = F("Fritzschberg");
break;
}
case 108695:
{
returnValue = F("Fritzstr.");
break;
}
case 108696:
{
returnValue = F("Fritzweg");
break;
}
case 108697:
{
returnValue = F("Friweh");
break;
}
case 108698:
{
returnValue = F("Friwoler Str.");
break;
}
case 108699:
{
returnValue = F("Frixheimer Str.");
break;
}
case 108700:
{
returnValue = F("Frixing");
break;
}
case 108701:
{
returnValue = F("Frixinger Str.");
break;
}
case 108702:
{
returnValue = F("Frizstr.");
break;
}
case 108703:
{
returnValue = F("Frobenius-Forster-Str.");
break;
}
case 108704:
{
returnValue = F("Frobeniusstr.");
break;
}
case 108705:
{
returnValue = F("Frochtmannsweg");
break;
}
case 108706:
{
returnValue = F("Frochtwinkel");
break;
}
case 108707:
{
returnValue = F("Froddegaardweg");
break;
}
case 108708:
{
returnValue = F("Frodshamstr.");
break;
}
case 108709:
{
returnValue = F("Froebelstr.");
break;
}
case 108710:
{
returnValue = F("Froelichstr.");
break;
}
case 108711:
{
returnValue = F("Frohbenden");
break;
}
case 108712:
{
returnValue = F("Frohbergweg");
break;
}
case 108713:
{
returnValue = F("Frohburger Str.");
break;
}
case 108714:
{
returnValue = F("Frohe Aussicht");
break;
}
case 108715:
{
returnValue = F("Frohe Zukunft");
break;
}
case 108716:
{
returnValue = F("Frohes Wochenende");
break;
}
case 108717:
{
returnValue = F("Frohgarten");
break;
}
case 108718:
{
returnValue = F("Frohlinder Str.");
break;
}
case 108719:
{
returnValue = F("Frohlochweg");
break;
}
case 108720:
{
returnValue = F("Frohmatten");
break;
}
case 108721:
{
returnValue = F("Frohmattenstr.");
break;
}
case 108722:
{
returnValue = F("Frohmattweg");
break;
}
case 108723:
{
returnValue = F("Frohmollenstr.");
break;
}
case 108724:
{
returnValue = F("Frohnacker");
break;
}
case 108725:
{
returnValue = F("Frohnauer Gasse");
break;
}
case 108726:
{
returnValue = F("Frohnauer Kirchsteig");
break;
}
case 108727:
{
returnValue = F("Frohnauer Str.");
break;
}
case 108728:
{
returnValue = F("Frohnauer Weg");
break;
}
case 108729:
{
returnValue = F("Frohnbach");
break;
}
case 108730:
{
returnValue = F("Frohnbacherhof");
break;
}
case 108731:
{
returnValue = F("Frohnbachstr.");
break;
}
case 108732:
{
returnValue = F("Frohnberg");
break;
}
case 108733:
{
returnValue = F("Frohnbergstr.");
break;
}
case 108734:
{
returnValue = F("Frohnbergsweg");
break;
}
case 108735:
{
returnValue = F("Frohnbergweg");
break;
}
case 108736:
{
returnValue = F("Frohndackerweg");
break;
}
case 108737:
{
returnValue = F("Frohndberg");
break;
}
case 108738:
{
returnValue = F("Frohndgasse");
break;
}
case 108739:
{
returnValue = F("Frohndhofstr.");
break;
}
case 108740:
{
returnValue = F("Frohndorfer Str.");
break;
}
case 108741:
{
returnValue = F("Frohndwaldweg");
break;
}
case 108742:
{
returnValue = F("Frohnen Weg");
break;
}
case 108743:
{
returnValue = F("Frohnenberg");
break;
}
case 108744:
{
returnValue = F("Frohnenbergstr.");
break;
}
case 108745:
{
returnValue = F("Frohnengrund");
break;
}
case 108746:
{
returnValue = F("Frohnenkamp");
break;
}
case 108747:
{
returnValue = F("Frohnepfad");
break;
}
case 108748:
{
returnValue = F("Frohner Str.");
break;
}
case 108749:
{
returnValue = F("Frohnertweg");
break;
}
case 108750:
{
returnValue = F("Frohnerweg");
break;
}
case 108751:
{
returnValue = F("Frohnestr.");
break;
}
case 108752:
{
returnValue = F("Frohnfeldstr.");
break;
}
case 108753:
{
returnValue = F("Frohngasse");
break;
}
case 108754:
{
returnValue = F("Frohngauer Str.");
break;
}
case 108755:
{
returnValue = F("Frohngrabenstr.");
break;
}
case 108756:
{
returnValue = F("Frohngrube");
break;
}
case 108757:
{
returnValue = F("Frohngäßchen");
break;
}
case 108758:
{
returnValue = F("Frohnhallenweg");
break;
}
case 108759:
{
returnValue = F("Frohnhardter Str.");
break;
}
case 108760:
{
returnValue = F("Frohnhausener Str.");
break;
}
case 108761:
{
returnValue = F("Frohnhauser Str.");
break;
}
case 108762:
{
returnValue = F("Frohnhauser Weg");
break;
}
case 108763:
{
returnValue = F("Frohnhecken");
break;
}
case 108764:
{
returnValue = F("Frohnhof");
break;
}
case 108765:
{
returnValue = F("Frohnhofer Hauptstr.");
break;
}
case 108766:
{
returnValue = F("Frohnhofer Str.");
break;
}
case 108767:
{
returnValue = F("Frohnhofgasse");
break;
}
case 108768:
{
returnValue = F("Frohnhofstr.");
break;
}
case 108769:
{
returnValue = F("Frohnhofweg");
break;
}
case 108770:
{
returnValue = F("Frohnholzen");
break;
}
case 108771:
{
returnValue = F("Frohnholzstr.");
break;
}
case 108772:
{
returnValue = F("Frohnholzweg");
break;
}
case 108773:
{
returnValue = F("Frohnhäuser Str.");
break;
}
case 108774:
{
returnValue = F("Frohnhäuserstr.");
break;
}
case 108775:
{
returnValue = F("Frohnkamp");
break;
}
case 108776:
{
returnValue = F("Frohnklingenhof");
break;
}
case 108777:
{
returnValue = F("Frohnklingenstr.");
break;
}
case 108778:
{
returnValue = F("Frohnklinger Str.");
break;
}
case 108779:
{
returnValue = F("Frohnlacher Str.");
break;
}
case 108780:
{
returnValue = F("Frohnlehenweg");
break;
}
case 108781:
{
returnValue = F("Frohnleitener Str.");
break;
}
case 108782:
{
returnValue = F("Frohnlochweg");
break;
}
case 108783:
{
returnValue = F("Frohnmattenstr.");
break;
}
case 108784:
{
returnValue = F("Frohnmühle");
break;
}
case 108785:
{
returnValue = F("Frohnmühlengasse");
break;
}
case 108786:
{
returnValue = F("Frohnmühlweg");
break;
}
case 108787:
{
returnValue = F("Frohnradstr.");
break;
}
case 108788:
{
returnValue = F("Frohnrather Weg");
break;
}
case 108789:
{
returnValue = F("Frohnreut");
break;
}
case 108790:
{
returnValue = F("Frohnreutherstr.");
break;
}
case 108791:
{
returnValue = F("Frohnschwand");
break;
}
case 108792:
{
returnValue = F("Frohnseestr.");
break;
}
case 108793:
{
returnValue = F("Frohnstetter Str.");
break;
}
case 108794:
{
returnValue = F("Frohnstr.");
break;
}
case 108795:
{
returnValue = F("Frohnsweg");
break;
}
case 108796:
{
returnValue = F("Frohntaler Str.");
break;
}
case 108797:
{
returnValue = F("Frohntalweg");
break;
}
case 108798:
{
returnValue = F("Frohntor");
break;
}
case 108799:
{
returnValue = F("Frohnwasenweg");
break;
}
case 108800:
{
returnValue = F("Frohnweg");
break;
}
case 108801:
{
returnValue = F("Frohnwiese");
break;
}
case 108802:
{
returnValue = F("Frohnwiesen");
break;
}
case 108803:
{
returnValue = F("Frohnwiesenstr.");
break;
}
case 108804:
{
returnValue = F("Frohnwiesenweg");
break;
}
case 108805:
{
returnValue = F("Frohnäcker");
break;
}
case 108806:
{
returnValue = F("Frohser Weg");
break;
}
case 108807:
{
returnValue = F("Frohsinngasse");
break;
}
case 108808:
{
returnValue = F("Frohsinnstr.");
break;
}
case 108809:
{
returnValue = F("Frohstundenweg");
break;
}
case 108810:
{
returnValue = F("Frohweg");
break;
}
case 108811:
{
returnValue = F("Frohwein-Büchner-Platz");
break;
}
case 108812:
{
returnValue = F("Frohwein-Büchner-Str.");
break;
}
case 108813:
{
returnValue = F("Froitscheidter Str.");
break;
}
case 108814:
{
returnValue = F("Froitzheimer Weg");
break;
}
case 108815:
{
returnValue = F("Frombachstr.");
break;
}
case 108816:
{
returnValue = F("Frombergfeld");
break;
}
case 108817:
{
returnValue = F("Frombergstr.");
break;
}
case 108818:
{
returnValue = F("Fromersbacher Str.");
break;
}
case 108819:
{
returnValue = F("Fromersbert");
break;
}
case 108820:
{
returnValue = F("Fromhausener Str.");
break;
}
case 108821:
{
returnValue = F("Fromhauser Str.");
break;
}
case 108822:
{
returnValue = F("Frommannscher Skulpturengarten");
break;
}
case 108823:
{
returnValue = F("Frommannstr.");
break;
}
case 108824:
{
returnValue = F("Fromme-Helene-Weg");
break;
}
case 108825:
{
returnValue = F("Frommelstr.");
break;
}
case 108826:
{
returnValue = F("Frommelweg");
break;
}
case 108827:
{
returnValue = F("Frommengasse");
break;
}
case 108828:
{
returnValue = F("Frommenhauser Str.");
break;
}
case 108829:
{
returnValue = F("Frommerner Str.");
break;
}
case 108830:
{
returnValue = F("Frommersgrund");
break;
}
case 108831:
{
returnValue = F("Frommershäuser Str.");
break;
}
case 108832:
{
returnValue = F("Frommert");
break;
}
case 108833:
{
returnValue = F("Frommeskothen");
break;
}
case 108834:
{
returnValue = F("Frommestr.");
break;
}
case 108835:
{
returnValue = F("Frommeyerstr.");
break;
}
case 108836:
{
returnValue = F("Frommeyerweg");
break;
}
case 108837:
{
returnValue = F("Frommgasse");
break;
}
case 108838:
{
returnValue = F("Frommhagenstr.");
break;
}
case 108839:
{
returnValue = F("Frommholdstr.");
break;
}
case 108840:
{
returnValue = F("Frommpfad");
break;
}
case 108841:
{
returnValue = F("Fronacker");
break;
}
case 108842:
{
returnValue = F("Fronackerstr.");
break;
}
case 108843:
{
returnValue = F("Fronackerweg");
break;
}
case 108844:
{
returnValue = F("Fronaspen");
break;
}
case 108845:
{
returnValue = F("Fronau");
break;
}
case 108846:
{
returnValue = F("Fronauer Str.");
break;
}
case 108847:
{
returnValue = F("Fronauer Weg");
break;
}
case 108848:
{
returnValue = F("Fronauweg");
break;
}
case 108849:
{
returnValue = F("Fronbachstr.");
break;
}
case 108850:
{
returnValue = F("Fronberger Str.");
break;
}
case 108851:
{
returnValue = F("Fronberggasse");
break;
}
case 108852:
{
returnValue = F("Fronbergstr.");
break;
}
case 108853:
{
returnValue = F("Fronbergsweg");
break;
}
case 108854:
{
returnValue = F("Fronbergweg");
break;
}
case 108855:
{
returnValue = F("Frondeichstr.");
break;
}
case 108856:
{
returnValue = F("Fronderath");
break;
}
case 108857:
{
returnValue = F("Fronderoder Str.");
break;
}
case 108858:
{
returnValue = F("Fronderöder Str.");
break;
}
case 108859:
{
returnValue = F("Frondsbergstr.");
break;
}
case 108860:
{
returnValue = F("Fronenberg");
break;
}
case 108861:
{
returnValue = F("Fronenpesch");
break;
}
case 108862:
{
returnValue = F("Fronereiweg");
break;
}
case 108863:
{
returnValue = F("Fronertsweg");
break;
}
case 108864:
{
returnValue = F("Fronetstr.");
break;
}
case 108865:
{
returnValue = F("Fronfeld");
break;
}
case 108866:
{
returnValue = F("Fronfeste");
break;
}
case 108867:
{
returnValue = F("Fronfestgasse");
break;
}
case 108868:
{
returnValue = F("Frongarten");
break;
}
case 108869:
{
returnValue = F("Frongartenstr.");
break;
}
case 108870:
{
returnValue = F("Frongartenweg");
break;
}
case 108871:
{
returnValue = F("Frongasse");
break;
}
case 108872:
{
returnValue = F("Frongraben");
break;
}
case 108873:
{
returnValue = F("Frongrabenweg");
break;
}
case 108874:
{
returnValue = F("Fronhaldenweg");
break;
}
case 108875:
{
returnValue = F("Fronhallenweg");
break;
}
case 108876:
{
returnValue = F("Fronhamerstr.");
break;
}
case 108877:
{
returnValue = F("Fronhof");
break;
}
case 108878:
{
returnValue = F("Fronhofallee");
break;
}
case 108879:
{
returnValue = F("Fronhofen");
break;
}
case 108880:
{
returnValue = F("Fronhofener Str.");
break;
}
case 108881:
{
returnValue = F("Fronhofer Str.");
break;
}
case 108882:
{
returnValue = F("Fronhofgasse");
break;
}
case 108883:
{
returnValue = F("Fronhofsgäßchen");
break;
}
case 108884:
{
returnValue = F("Fronhofstr.");
break;
}
case 108885:
{
returnValue = F("Fronhofweg");
break;
}
case 108886:
{
returnValue = F("Fronholt");
break;
}
case 108887:
{
returnValue = F("Fronholzstr.");
break;
}
case 108888:
{
returnValue = F("Fronholzweg");
break;
}
case 108889:
{
returnValue = F("Fronhoven");
break;
}
case 108890:
{
returnValue = F("Fronhovener Str.");
break;
}
case 108891:
{
returnValue = F("Fronhäuser Str.");
break;
}
case 108892:
{
returnValue = F("Fronhäuser Weg");
break;
}
case 108893:
{
returnValue = F("Froningholz");
break;
}
case 108894:
{
returnValue = F("Fronius Str.");
break;
}
case 108895:
{
returnValue = F("Fronlachweg");
break;
}
case 108896:
{
returnValue = F("Fronlachwiesen");
break;
}
case 108897:
{
returnValue = F("Fronland");
break;
}
case 108898:
{
returnValue = F("Fronleichnamsweg");
break;
}
case 108899:
{
returnValue = F("Fronleite");
break;
}
case 108900:
{
returnValue = F("Fronlohe");
break;
}
case 108901:
{
returnValue = F("Fronländer");
break;
}
case 108902:
{
returnValue = F("Fronmattenstr.");
break;
}
case 108903:
{
returnValue = F("Fronmeister-Kommer-Str.");
break;
}
case 108904:
{
returnValue = F("Fronmühlenweg");
break;
}
case 108905:
{
returnValue = F("Fronpforte");
break;
}
case 108906:
{
returnValue = F("Fronrater Weg");
break;
}
case 108907:
{
returnValue = F("Fronrather Weg");
break;
}
case 108908:
{
returnValue = F("Fronrot");
break;
}
case 108909:
{
returnValue = F("Fronsbrücke");
break;
}
case 108910:
{
returnValue = F("Fronschlagallee");
break;
}
case 108911:
{
returnValue = F("Fronseeweg");
break;
}
case 108912:
{
returnValue = F("Fronstein");
break;
}
case 108913:
{
returnValue = F("Fronstr.");
break;
}
case 108914:
{
returnValue = F("Frontal");
break;
}
case 108915:
{
returnValue = F("Frontalerhof");
break;
}
case 108916:
{
returnValue = F("Frontalgasse");
break;
}
case 108917:
{
returnValue = F("Frontalstr.");
break;
}
case 108918:
{
returnValue = F("Fronte");
break;
}
case 108919:
{
returnValue = F("Fronte Beckers");
break;
}
case 108920:
{
returnValue = F("Frontenhausener Str.");
break;
}
case 108921:
{
returnValue = F("Frontorstr.");
break;
}
case 108922:
{
returnValue = F("Fronveststr.");
break;
}
case 108923:
{
returnValue = F("Fronwaldstr.");
break;
}
case 108924:
{
returnValue = F("Fronweg");
break;
}
case 108925:
{
returnValue = F("Fronwiese");
break;
}
case 108926:
{
returnValue = F("Fronwiesen");
break;
}
case 108927:
{
returnValue = F("Fronwiesenstr.");
break;
}
case 108928:
{
returnValue = F("Fronwiesenweg");
break;
}
case 108929:
{
returnValue = F("Fronwieserstr.");
break;
}
case 108930:
{
returnValue = F("Fronäcker");
break;
}
case 108931:
{
returnValue = F("Fronäckerstr.");
break;
}
case 108932:
{
returnValue = F("Fronäckerweg");
break;
}
case 108933:
{
returnValue = F("Fronängerstr.");
break;
}
case 108934:
{
returnValue = F("Frosch");
break;
}
case 108935:
{
returnValue = F("Froschackerweg");
break;
}
case 108936:
{
returnValue = F("Froschallee");
break;
}
case 108937:
{
returnValue = F("Froschanger");
break;
}
case 108938:
{
returnValue = F("Froschau");
break;
}
case 108939:
{
returnValue = F("Froschaustr.");
break;
}
case 108940:
{
returnValue = F("Froschbachstr.");
break;
}
case 108941:
{
returnValue = F("Froschberg");
break;
}
case 108942:
{
returnValue = F("Froschbergstr.");
break;
}
case 108943:
{
returnValue = F("Froschbiegel");
break;
}
case 108944:
{
returnValue = F("Froschbißstr.");
break;
}
case 108945:
{
returnValue = F("Froschbrunnen");
break;
}
case 108946:
{
returnValue = F("Froschbrunnenweg");
break;
}
case 108947:
{
returnValue = F("Froschbrücke");
break;
}
case 108948:
{
returnValue = F("Froschegert");
break;
}
case 108949:
{
returnValue = F("Froschengässle");
break;
}
case 108950:
{
returnValue = F("Froschenseestr.");
break;
}
case 108951:
{
returnValue = F("Froschewiese");
break;
}
case 108952:
{
returnValue = F("Froschgang");
break;
}
case 108953:
{
returnValue = F("Froschgasse");
break;
}
case 108954:
{
returnValue = F("Froschgraben");
break;
}
case 108955:
{
returnValue = F("Froschgrund");
break;
}
case 108956:
{
returnValue = F("Froschgrundstr.");
break;
}
case 108957:
{
returnValue = F("Froschgrüner Park");
break;
}
case 108958:
{
returnValue = F("Froschgrüner Str.");
break;
}
case 108959:
{
returnValue = F("Froschgäßchen");
break;
}
case 108960:
{
returnValue = F("Froschhamerweg");
break;
}
case 108961:
{
returnValue = F("Froschheide");
break;
}
case 108962:
{
returnValue = F("Froschholzstr.");
break;
}
case 108963:
{
returnValue = F("Froschkern");
break;
}
case 108964:
{
returnValue = F("Froschkoppel");
break;
}
case 108965:
{
returnValue = F("Froschkönigweg");
break;
}
case 108966:
{
returnValue = F("Froschlach");
break;
}
case 108967:
{
returnValue = F("Froschlache");
break;
}
case 108968:
{
returnValue = F("Froschlachenweg");
break;
}
case 108969:
{
returnValue = F("Froschlachweg");
break;
}
case 108970:
{
returnValue = F("Froschleite");
break;
}
case 108971:
{
returnValue = F("Froschleitenweg");
break;
}
case 108972:
{
returnValue = F("Froschländer");
break;
}
case 108973:
{
returnValue = F("Froschmarkt");
break;
}
case 108974:
{
returnValue = F("Froschmühlenweg");
break;
}
case 108975:
{
returnValue = F("Froschmühlweg");
break;
}
case 108976:
{
returnValue = F("Froschpfad");
break;
}
case 108977:
{
returnValue = F("Froschschneise");
break;
}
case 108978:
{
returnValue = F("Froschseer Str.");
break;
}
case 108979:
{
returnValue = F("Froschsteg");
break;
}
case 108980:
{
returnValue = F("Froschstr.");
break;
}
case 108981:
{
returnValue = F("Froschteichweg");
break;
}
case 108982:
{
returnValue = F("Froschwasen");
break;
}
case 108983:
{
returnValue = F("Froschwede");
break;
}
case 108984:
{
returnValue = F("Froschweg");
break;
}
case 108985:
{
returnValue = F("Froschweide");
break;
}
case 108986:
{
returnValue = F("Froschweilerweg");
break;
}
case 108987:
{
returnValue = F("Froschwiesenweg");
break;
}
case 108988:
{
returnValue = F("Froschäcker");
break;
}
case 108989:
{
returnValue = F("Froschäckerweg");
break;
}
case 108990:
{
returnValue = F("Froser Str.");
break;
}
case 108991:
{
returnValue = F("Froser Weg");
break;
}
case 108992:
{
returnValue = F("Frostenwalder Str.");
break;
}
case 108993:
{
returnValue = F("Frostenwalder Weg");
break;
}
case 108994:
{
returnValue = F("Frotheimer Str.");
break;
}
case 108995:
{
returnValue = F("Frotheimer Weg");
break;
}
case 108996:
{
returnValue = F("Frotschau");
break;
}
case 108997:
{
returnValue = F("Frotschauer Str.");
break;
}
case 108998:
{
returnValue = F("Frottenbergweg");
break;
}
case 108999:
{
returnValue = F("Frotzersrichter Weg");
break;
}
case 109000:
{
returnValue = F("Frotzhofner-Geräumt");
break;
}
case 109001:
{
returnValue = F("Frouardplatz");
break;
}
case 109002:
{
returnValue = F("Froumundstr.");
break;
}
case 109003:
{
returnValue = F("Frouwe-Kwinkensteen-Str.");
break;
}
case 109004:
{
returnValue = F("Froweinplatz");
break;
}
case 109005:
{
returnValue = F("Froweinstr.");
break;
}
case 109006:
{
returnValue = F("Frowin-von-Hutten-Str.");
break;
}
case 109007:
{
returnValue = F("Frowinkelshäuschen");
break;
}
case 109008:
{
returnValue = F("Fru-Metten-Weg");
break;
}
case 109009:
{
returnValue = F("Fruchtallee");
break;
}
case 109010:
{
returnValue = F("Fruchthallstr.");
break;
}
case 109011:
{
returnValue = F("Fruchtheim");
break;
}
case 109012:
{
returnValue = F("Fruchtmarkt");
break;
}
case 109013:
{
returnValue = F("Fruchtmarktstr.");
break;
}
case 109014:
{
returnValue = F("Fruchtschuppenstr.");
break;
}
case 109015:
{
returnValue = F("Fruchtstr.");
break;
}
case 109016:
{
returnValue = F("Frueaufstr.");
break;
}
case 109017:
{
returnValue = F("Fruehaufstr.");
break;
}
case 109018:
{
returnValue = F("Fruerlunder Bogen");
break;
}
case 109019:
{
returnValue = F("Fruerlunder Str.");
break;
}
case 109020:
{
returnValue = F("Fruerlundhof");
break;
}
case 109021:
{
returnValue = F("Fruerlundholz");
break;
}
case 109022:
{
returnValue = F("Fruerlundlücke");
break;
}
case 109023:
{
returnValue = F("Fruerlundmühle");
break;
}
case 109024:
{
returnValue = F("Fruges Str.");
break;
}
case 109025:
{
returnValue = F("Fruhstorfer Weg");
break;
}
case 109026:
{
returnValue = F("Frundeckhof");
break;
}
case 109027:
{
returnValue = F("Frundeckstr.");
break;
}
case 109028:
{
returnValue = F("Frundsbergallee");
break;
}
case 109029:
{
returnValue = F("Frundsbergerstr.");
break;
}
case 109030:
{
returnValue = F("Frundsbergstr.");
break;
}
case 109031:
{
returnValue = F("Frunsbeerstr.");
break;
}
case 109032:
{
returnValue = F("Frunsestr.");
break;
}
case 109033:
{
returnValue = F("Frutenhofer Weg");
break;
}
case 109034:
{
returnValue = F("Frutolfstr.");
break;
}
case 109035:
{
returnValue = F("Frutzweiler Str.");
break;
}
case 109036:
{
returnValue = F("Frydlanter Str.");
break;
}
case 109037:
{
returnValue = F("Frye und Grüner Str.");
break;
}
case 109038:
{
returnValue = F("Fränikischer Marienweg");
break;
}
case 109039:
{
returnValue = F("Fränkelstr.");
break;
}
case 109040:
{
returnValue = F("Fränkenauer Weg");
break;
}
case 109041:
{
returnValue = F("Fränkendorf");
break;
}
case 109042:
{
returnValue = F("Fränkingstr.");
break;
}
case 109043:
{
returnValue = F("Fränkische Str.");
break;
}
case 109044:
{
returnValue = F("Fränkische-Schweiz-Str.");
break;
}
case 109045:
{
returnValue = F("Fränkischer Gebirgsweg");
break;
}
case 109046:
{
returnValue = F("Fränkischer Rotweinwanderweg");
break;
}
case 109047:
{
returnValue = F("Fränkischer Weg");
break;
}
case 109048:
{
returnValue = F("Fränskamp");
break;
}
case 109049:
{
returnValue = F("Fränzenbergstr.");
break;
}
case 109050:
{
returnValue = F("Fränzersgarten");
break;
}
case 109051:
{
returnValue = F("Fränzkesweg");
break;
}
case 109052:
{
returnValue = F("Fränzle-Faller-Weg");
break;
}
case 109053:
{
returnValue = F("Fränzliweg");
break;
}
case 109054:
{
returnValue = F("Fränznickstr.");
break;
}
case 109055:
{
returnValue = F("Fräulein-Maria-Str.");
break;
}
case 109056:
{
returnValue = F("Fräulein-Marien-Str.");
break;
}
case 109057:
{
returnValue = F("Fräuleingasse");
break;
}
case 109058:
{
returnValue = F("Fräuleinpatt");
break;
}
case 109059:
{
returnValue = F("Fräuleinsbaum");
break;
}
case 109060:
{
returnValue = F("Fräuleinshof");
break;
}
case 109061:
{
returnValue = F("Fräuleinstr.");
break;
}
case 109062:
{
returnValue = F("Fräulinsberg");
break;
}
case 109063:
{
returnValue = F("Fräßtal");
break;
}
case 109064:
{
returnValue = F("Frère-Roger-Str.");
break;
}
case 109065:
{
returnValue = F("Fréventstr.");
break;
}
case 109066:
{
returnValue = F("Fröbelbogen");
break;
}
case 109067:
{
returnValue = F("Fröbelplatz");
break;
}
case 109068:
{
returnValue = F("Fröbelring");
break;
}
case 109069:
{
returnValue = F("Fröbelstieg");
break;
}
case 109070:
{
returnValue = F("Fröbelstr.");
break;
}
case 109071:
{
returnValue = F("Fröbelweg");
break;
}
case 109072:
{
returnValue = F("Fröbersgrüner Str.");
break;
}
case 109073:
{
returnValue = F("Fröbershammer");
break;
}
case 109074:
{
returnValue = F("Fröbestr.");
break;
}
case 109075:
{
returnValue = F("Fröbeweg");
break;
}
case 109076:
{
returnValue = F("Fröbitz");
break;
}
case 109077:
{
returnValue = F("Fröchweg");
break;
}
case 109078:
{
returnValue = F("Fröddenwai");
break;
}
case 109079:
{
returnValue = F("Frödenberger Str.");
break;
}
case 109080:
{
returnValue = F("Fröhdener Dorfstr.");
break;
}
case 109081:
{
returnValue = F("Fröhdener Heideberg");
break;
}
case 109082:
{
returnValue = F("Fröhdener Mühlenstr.");
break;
}
case 109083:
{
returnValue = F("Fröhdener Siedlung");
break;
}
case 109084:
{
returnValue = F("Fröhdener Str.");
break;
}
case 109085:
{
returnValue = F("Fröhdener Weg");
break;
}
case 109086:
{
returnValue = F("Fröhlefelderweg");
break;
}
case 109087:
{
returnValue = F("Fröhlenende");
break;
}
case 109088:
{
returnValue = F("Fröhliche-Mann-Str.");
break;
}
case 109089:
{
returnValue = F("Fröhliche-Türken-Str.");
break;
}
case 109090:
{
returnValue = F("Fröhlicherstr.");
break;
}
case 109091:
{
returnValue = F("Fröhlichgasse");
break;
}
case 109092:
{
returnValue = F("Fröhlichhof");
break;
}
case 109093:
{
returnValue = F("Fröhlichsbitz");
break;
}
case 109094:
{
returnValue = F("Fröhlichstr.");
break;
}
case 109095:
{
returnValue = F("Fröhlichweg");
break;
}
case 109096:
{
returnValue = F("Fröhlingsweg");
break;
}
case 109097:
{
returnValue = F("Fröhlingweg");
break;
}
case 109098:
{
returnValue = F("Fröhlinser Str.");
break;
}
case 109099:
{
returnValue = F("Fröhlkingstr.");
break;
}
case 109100:
{
returnValue = F("Fröhnerhof");
break;
}
case 109101:
{
returnValue = F("Fröhnerweg");
break;
}
case 109102:
{
returnValue = F("Fröhnstr.");
break;
}
case 109103:
{
returnValue = F("Fröhnweg");
break;
}
case 109104:
{
returnValue = F("Fröhstockheimer Str.");
break;
}
case 109105:
{
returnValue = F("Fröhstockheimer Weg");
break;
}
case 109106:
{
returnValue = F("Fröhwaldstr.");
break;
}
case 109107:
{
returnValue = F("Frölenberg");
break;
}
case 109108:
{
returnValue = F("Frölichweg");
break;
}
case 109109:
{
returnValue = F("Frölichwiese");
break;
}
case 109110:
{
returnValue = F("Frölingstr.");
break;
}
case 109111:
{
returnValue = F("Frömerner Str.");
break;
}
case 109112:
{
returnValue = F("Frömmersbacher Str.");
break;
}
case 109113:
{
returnValue = F("Frömmstedter Str.");
break;
}
case 109114:
{
returnValue = F("Frönaustr.");
break;
}
case 109115:
{
returnValue = F("Fröndenberger Str.");
break;
}
case 109116:
{
returnValue = F("Frönsbarg");
break;
}
case 109117:
{
returnValue = F("Frönsberger Str.");
break;
}
case 109118:
{
returnValue = F("Frörup-Mühle");
break;
}
case 109119:
{
returnValue = F("Frörupsand");
break;
}
case 109120:
{
returnValue = F("Fröschau");
break;
}
case 109121:
{
returnValue = F("Fröschauer Str.");
break;
}
case 109122:
{
returnValue = F("Fröschauweg");
break;
}
case 109123:
{
returnValue = F("Fröschbacher Str.");
break;
}
case 109124:
{
returnValue = F("Fröschberg");
break;
}
case 109125:
{
returnValue = F("Fröschbrunn");
break;
}
case 109126:
{
returnValue = F("Fröschburgweg");
break;
}
case 109127:
{
returnValue = F("Fröschen Weiher");
break;
}
case 109128:
{
returnValue = F("Fröschenbachweg");
break;
}
case 109129:
{
returnValue = F("Fröschenbündt");
break;
}
case 109130:
{
returnValue = F("Fröschener Str.");
break;
}
case 109131:
{
returnValue = F("Fröschengasse");
break;
}
case 109132:
{
returnValue = F("Fröschenpfuhl");
break;
}
case 109133:
{
returnValue = F("Fröschenpuhl");
break;
}
case 109134:
{
returnValue = F("Fröschenwiese");
break;
}
case 109135:
{
returnValue = F("Fröscheweid");
break;
}
case 109136:
{
returnValue = F("Fröschgasse");
break;
}
case 109137:
{
returnValue = F("Fröschlach");
break;
}
case 109138:
{
returnValue = F("Fröschlachweg");
break;
}
case 109139:
{
returnValue = F("Fröschlbauerweg");
break;
}
case 109140:
{
returnValue = F("Fröschlstr.");
break;
}
case 109141:
{
returnValue = F("Fröschlthal");
break;
}
case 109142:
{
returnValue = F("Fröschnerstr.");
break;
}
case 109143:
{
returnValue = F("Fröschpfortstr.");
break;
}
case 109144:
{
returnValue = F("Fröschweilerstr.");
break;
}
case 109145:
{
returnValue = F("Fröshölter Weg");
break;
}
case 109146:
{
returnValue = F("Frösleer Bogen");
break;
}
case 109147:
{
returnValue = F("Frösleer Hof");
break;
}
case 109148:
{
returnValue = F("Frösleeweg");
break;
}
case 109149:
{
returnValue = F("Frössen");
break;
}
case 109150:
{
returnValue = F("Frötteweg");
break;
}
case 109151:
{
returnValue = F("Fröttmaninger Str.");
break;
}
case 109152:
{
returnValue = F("Fröttstädter Str.");
break;
}
case 109153:
{
returnValue = F("Fröttstädter Weg");
break;
}
case 109154:
{
returnValue = F("Frößeln");
break;
}
case 109155:
{
returnValue = F("Frößnitzer Str.");
break;
}
case 109156:
{
returnValue = F("Früchte");
break;
}
case 109157:
{
returnValue = F("Früchteburger Weg");
break;
}
case 109158:
{
returnValue = F("Früchtepfad");
break;
}
case 109159:
{
returnValue = F("Früchter Str.");
break;
}
case 109160:
{
returnValue = F("Früchter Weg");
break;
}
case 109161:
{
returnValue = F("Frühaufstr.");
break;
}
case 109162:
{
returnValue = F("Frühbaumweg");
break;
}
case 109163:
{
returnValue = F("Frühbusser Str.");
break;
}
case 109164:
{
returnValue = F("Frühbußer Steig");
break;
}
case 109165:
{
returnValue = F("Frühgartenstr.");
break;
}
case 109166:
{
returnValue = F("Frühgasse");
break;
}
case 109167:
{
returnValue = F("Frühherrenstr.");
break;
}
case 109168:
{
returnValue = F("Frühjahrsstr.");
break;
}
case 109169:
{
returnValue = F("Frühlinger Spitz");
break;
}
case 109170:
{
returnValue = F("Frühlinger Weg");
break;
}
case 109171:
{
returnValue = F("Frühlinghausen");
break;
}
case 109172:
{
returnValue = F("Frühlinghauser Str.");
break;
}
case 109173:
{
returnValue = F("Frühlings Hof");
break;
}
case 109174:
{
returnValue = F("Frühlings- und Hosta-Weg");
break;
}
case 109175:
{
returnValue = F("Frühlingsallee");
break;
}
case 109176:
{
returnValue = F("Frühlingsau");
break;
}
case 109177:
{
returnValue = F("Frühlingsaustr.");
break;
}
case 109178:
{
returnValue = F("Frühlingsauweg");
break;
}
case 109179:
{
returnValue = F("Frühlingsberg");
break;
}
case 109180:
{
returnValue = F("Frühlingsbogen");
break;
}
case 109181:
{
returnValue = F("Frühlingsgarten");
break;
}
case 109182:
{
returnValue = F("Frühlingsgasse");
break;
}
case 109183:
{
returnValue = F("Frühlingshalde");
break;
}
case 109184:
{
returnValue = F("Frühlingskamp");
break;
}
case 109185:
{
returnValue = F("Frühlingspadd");
break;
}
case 109186:
{
returnValue = F("Frühlingsplatz");
break;
}
case 109187:
{
returnValue = F("Frühlingsstr.");
break;
}
case 109188:
{
returnValue = F("Frühlingstal");
break;
}
case 109189:
{
returnValue = F("Frühlingstr.");
break;
}
case 109190:
{
returnValue = F("Frühlingsufer");
break;
}
case 109191:
{
returnValue = F("Frühlingsweg");
break;
}
case 109192:
{
returnValue = F("Frühlingswiese");
break;
}
case 109193:
{
returnValue = F("Frühmahd");
break;
}
case 109194:
{
returnValue = F("Frühmessergasse");
break;
}
case 109195:
{
returnValue = F("Frühmesserstr.");
break;
}
case 109196:
{
returnValue = F("Frühmesserweg");
break;
}
case 109197:
{
returnValue = F("Frühmessgasse");
break;
}
case 109198:
{
returnValue = F("Frühmessweg");
break;
}
case 109199:
{
returnValue = F("Frühmessweinberg");
break;
}
case 109200:
{
returnValue = F("Frühmeß");
break;
}
case 109201:
{
returnValue = F("Frühmeß-Str.");
break;
}
case 109202:
{
returnValue = F("Frühmeßgarten");
break;
}
case 109203:
{
returnValue = F("Frühmeßgasse");
break;
}
case 109204:
{
returnValue = F("Frühmeßgärten");
break;
}
case 109205:
{
returnValue = F("Frühmeßhalde");
break;
}
case 109206:
{
returnValue = F("Frühmeßleite");
break;
}
case 109207:
{
returnValue = F("Frühmeßstr.");
break;
}
case 109208:
{
returnValue = F("Frühmeßweg");
break;
}
case 109209:
{
returnValue = F("Frühschoppen-Allee");
break;
}
case 109210:
{
returnValue = F("Frühwaldstr.");
break;
}
case 109211:
{
returnValue = F("Frümbergstr.");
break;
}
case 109212:
{
returnValue = F("Fründts Park");
break;
}
case 109213:
{
returnValue = F("Fuchs");
break;
}
case 109214:
{
returnValue = F("Fuchs Geräumt");
break;
}
case 109215:
{
returnValue = F("Fuchs Schneise");
break;
}
case 109216:
{
returnValue = F("Fuchs-Schneise");
break;
}
case 109217:
{
returnValue = F("Fuchsacker");
break;
}
case 109218:
{
returnValue = F("Fuchsackerschneise");
break;
}
case 109219:
{
returnValue = F("Fuchsackerweg");
break;
}
case 109220:
{
returnValue = F("Fuchsallee");
break;
}
case 109221:
{
returnValue = F("Fuchsanger");
break;
}
case 109222:
{
returnValue = F("Fuchsarmweg");
break;
}
case 109223:
{
returnValue = F("Fuchsau");
break;
}
case 109224:
{
returnValue = F("Fuchsbachpark");
break;
}
case 109225:
{
returnValue = F("Fuchsbachstr.");
break;
}
case 109226:
{
returnValue = F("Fuchsbachweg");
break;
}
case 109227:
{
returnValue = F("Fuchsbau");
break;
}
case 109228:
{
returnValue = F("Fuchsbau Allee");
break;
}
case 109229:
{
returnValue = F("Fuchsbauerweg");
break;
}
case 109230:
{
returnValue = F("Fuchsbauschneise");
break;
}
case 109231:
{
returnValue = F("Fuchsbaustr.");
break;
}
case 109232:
{
returnValue = F("Fuchsbausträßle");
break;
}
case 109233:
{
returnValue = F("Fuchsbauweg");
break;
}
case 109234:
{
returnValue = F("Fuchsberg");
break;
}
case 109235:
{
returnValue = F("Fuchsbergdamm");
break;
}
case 109236:
{
returnValue = F("Fuchsberge");
break;
}
case 109237:
{
returnValue = F("Fuchsbergenweg");
break;
}
case 109238:
{
returnValue = F("Fuchsberger Allee");
break;
}
case 109239:
{
returnValue = F("Fuchsberger Damm");
break;
}
case 109240:
{
returnValue = F("Fuchsberger Str.");
break;
}
case 109241:
{
returnValue = F("Fuchsbergerstr.");
break;
}
case 109242:
{
returnValue = F("Fuchsbergredder");
break;
}
case 109243:
{
returnValue = F("Fuchsbergring");
break;
}
case 109244:
{
returnValue = F("Fuchsbergschneise");
break;
}
case 109245:
{
returnValue = F("Fuchsbergsgrund");
break;
}
case 109246:
{
returnValue = F("Fuchsbergsiedlung");
break;
}
case 109247:
{
returnValue = F("Fuchsbergstr.");
break;
}
case 109248:
{
returnValue = F("Fuchsbergstreuweg");
break;
}
case 109249:
{
returnValue = F("Fuchsbergsträßle");
break;
}
case 109250:
{
returnValue = F("Fuchsbergsweg");
break;
}
case 109251:
{
returnValue = F("Fuchsbergweg");
break;
}
case 109252:
{
returnValue = F("Fuchsbichl");
break;
}
case 109253:
{
returnValue = F("Fuchsbichlweg");
break;
}
case 109254:
{
returnValue = F("Fuchsbreite");
break;
}
case 109255:
{
returnValue = F("Fuchsbrunnenstr.");
break;
}
case 109256:
{
returnValue = F("Fuchsbräugasse");
break;
}
case 109257:
{
returnValue = F("Fuchsbrückenweg");
break;
}
case 109258:
{
returnValue = F("Fuchsbrühl");
break;
}
case 109259:
{
returnValue = F("Fuchsbäumer Weg");
break;
}
case 109260:
{
returnValue = F("Fuchsbüchlerkellerstr.");
break;
}
case 109261:
{
returnValue = F("Fuchsbühl");
break;
}
case 109262:
{
returnValue = F("Fuchsbühlstr.");
break;
}
case 109263:
{
returnValue = F("Fuchsbühlweg");
break;
}
case 109264:
{
returnValue = F("Fuchsdamm");
break;
}
case 109265:
{
returnValue = F("Fuchsdell");
break;
}
case 109266:
{
returnValue = F("Fuchseck");
break;
}
case 109267:
{
returnValue = F("Fuchsecke");
break;
}
case 109268:
{
returnValue = F("Fuchseckstr.");
break;
}
case 109269:
{
returnValue = F("Fuchseckweg");
break;
}
case 109270:
{
returnValue = F("Fuchsenackerweg");
break;
}
case 109271:
{
returnValue = F("Fuchsenberg");
break;
}
case 109272:
{
returnValue = F("Fuchsenbergstr.");
break;
}
case 109273:
{
returnValue = F("Fuchsend");
break;
}
case 109274:
{
returnValue = F("Fuchsendorfer Str.");
break;
}
case 109275:
{
returnValue = F("Fuchsengang");
break;
}
case 109276:
{
returnValue = F("Fuchsengasse");
break;
}
case 109277:
{
returnValue = F("Fuchsengasserl");
break;
}
case 109278:
{
returnValue = F("Fuchsengassl");
break;
}
case 109279:
{
returnValue = F("Fuchsengäßchen");
break;
}
case 109280:
{
returnValue = F("Fuchsengäßle");
break;
}
case 109281:
{
returnValue = F("Fuchsenhausweg");
break;
}
case 109282:
{
returnValue = F("Fuchsenhof");
break;
}
case 109283:
{
returnValue = F("Fuchsenhöhe");
break;
}
case 109284:
{
returnValue = F("Fuchsenklinge");
break;
}
case 109285:
{
returnValue = F("Fuchsenkothe");
break;
}
case 109286:
{
returnValue = F("Fuchsenloch");
break;
}
case 109287:
{
returnValue = F("Fuchsenlochweg");
break;
}
case 109288:
{
returnValue = F("Fuchsenrissweg");
break;
}
case 109289:
{
returnValue = F("Fuchsensteig");
break;
}
case 109290:
{
returnValue = F("Fuchsensteinstr.");
break;
}
case 109291:
{
returnValue = F("Fuchsenstr.");
break;
}
case 109292:
{
returnValue = F("Fuchsenweg");
break;
}
case 109293:
{
returnValue = F("Fuchsenäckerstr.");
break;
}
case 109294:
{
returnValue = F("Fuchserb");
break;
}
case 109295:
{
returnValue = F("Fuchsfang");
break;
}
case 109296:
{
returnValue = F("Fuchsfarm");
break;
}
case 109297:
{
returnValue = F("Fuchsfarmstr.");
break;
}
case 109298:
{
returnValue = F("Fuchsfeld");
break;
}
case 109299:
{
returnValue = F("Fuchsfeldstr.");
break;
}
case 109300:
{
returnValue = F("Fuchsfeldweg");
break;
}
case 109301:
{
returnValue = F("Fuchsfelsenweg");
break;
}
case 109302:
{
returnValue = F("Fuchsfichtenweg");
break;
}
case 109303:
{
returnValue = F("Fuchsgang");
break;
}
case 109304:
{
returnValue = F("Fuchsgarten");
break;
}
case 109305:
{
returnValue = F("Fuchsgasse");
break;
}
case 109306:
{
returnValue = F("Fuchsgraben");
break;
}
case 109307:
{
returnValue = F("Fuchsgrabenstr.");
break;
}
case 109308:
{
returnValue = F("Fuchsgrabenweg");
break;
}
case 109309:
{
returnValue = F("Fuchsgracht");
break;
}
case 109310:
{
returnValue = F("Fuchsgrube");
break;
}
case 109311:
{
returnValue = F("Fuchsgruben");
break;
}
case 109312:
{
returnValue = F("Fuchsgrubenweg");
break;
}
case 109313:
{
returnValue = F("Fuchsgrund");
break;
}
case 109314:
{
returnValue = F("Fuchsgässel");
break;
}
case 109315:
{
returnValue = F("Fuchshainer Str.");
break;
}
case 109316:
{
returnValue = F("Fuchshalde");
break;
}
case 109317:
{
returnValue = F("Fuchshaldengäßle");
break;
}
case 109318:
{
returnValue = F("Fuchshaldenweg");
break;
}
case 109319:
{
returnValue = F("Fuchshaldeweg");
break;
}
case 109320:
{
returnValue = F("Fuchshaller Weg");
break;
}
case 109321:
{
returnValue = F("Fuchshardtweg");
break;
}
case 109322:
{
returnValue = F("Fuchshausen");
break;
}
case 109323:
{
returnValue = F("Fuchshauweg");
break;
}
case 109324:
{
returnValue = F("Fuchsheck");
break;
}
case 109325:
{
returnValue = F("Fuchshecke");
break;
}
case 109326:
{
returnValue = F("Fuchshecker Hof");
break;
}
case 109327:
{
returnValue = F("Fuchshege");
break;
}
case 109328:
{
returnValue = F("Fuchshof");
break;
}
case 109329:
{
returnValue = F("Fuchshofener Panoramapfad");
break;
}
case 109330:
{
returnValue = F("Fuchshofener Str.");
break;
}
case 109331:
{
returnValue = F("Fuchshofstr.");
break;
}
case 109332:
{
returnValue = F("Fuchshofweg");
break;
}
case 109333:
{
returnValue = F("Fuchshohl");
break;
}
case 109334:
{
returnValue = F("Fuchshol");
break;
}
case 109335:
{
returnValue = F("Fuchsholz");
break;
}
case 109336:
{
returnValue = F("Fuchsholzweg");
break;
}
case 109337:
{
returnValue = F("Fuchshub");
break;
}
case 109338:
{
returnValue = F("Fuchshöhe");
break;
}
case 109339:
{
returnValue = F("Fuchshöhle");
break;
}
case 109340:
{
returnValue = F("Fuchshöhlenweg");
break;
}
case 109341:
{
returnValue = F("Fuchshölzla");
break;
}
case 109342:
{
returnValue = F("Fuchshübelstr.");
break;
}
case 109343:
{
returnValue = F("Fuchshübelweg");
break;
}
case 109344:
{
returnValue = F("Fuchshügel");
break;
}
case 109345:
{
returnValue = F("Fuchshügelweg");
break;
}
case 109346:
{
returnValue = F("Fuchsien");
break;
}
case 109347:
{
returnValue = F("Fuchsienstr.");
break;
}
case 109348:
{
returnValue = F("Fuchsienweg");
break;
}
case 109349:
{
returnValue = F("Fuchsienwinkel");
break;
}
case 109350:
{
returnValue = F("Fuchsiusstr.");
break;
}
case 109351:
{
returnValue = F("Fuchsjochweg");
break;
}
case 109352:
{
returnValue = F("Fuchskamp");
break;
}
case 109353:
{
returnValue = F("Fuchskaul");
break;
}
case 109354:
{
returnValue = F("Fuchskaule");
break;
}
case 109355:
{
returnValue = F("Fuchskaulenstr.");
break;
}
case 109356:
{
returnValue = F("Fuchskaut");
break;
}
case 109357:
{
returnValue = F("Fuchskaute");
break;
}
case 109358:
{
returnValue = F("Fuchskavelweg");
break;
}
case 109359:
{
returnValue = F("Fuchsklinge");
break;
}
case 109360:
{
returnValue = F("Fuchsklingensträßchen");
break;
}
case 109361:
{
returnValue = F("Fuchsklingenweg");
break;
}
case 109362:
{
returnValue = F("Fuchsklint");
break;
}
case 109363:
{
returnValue = F("Fuchskopf");
break;
}
case 109364:
{
returnValue = F("Fuchskoppel");
break;
}
case 109365:
{
returnValue = F("Fuchskuhle");
break;
}
case 109366:
{
returnValue = F("Fuchskörnung");
break;
}
case 109367:
{
returnValue = F("Fuchslandenweg");
break;
}
case 109368:
{
returnValue = F("Fuchsleite");
break;
}
case 109369:
{
returnValue = F("Fuchsloch");
break;
}
case 109370:
{
returnValue = F("FuchslochSchwarzenlache nb");
break;
}
case 109371:
{
returnValue = F("Fuchslochrainweg");
break;
}
case 109372:
{
returnValue = F("Fuchslochrandweg");
break;
}
case 109373:
{
returnValue = F("Fuchslochstr.");
break;
}
case 109374:
{
returnValue = F("Fuchslochweg");
break;
}
case 109375:
{
returnValue = F("Fuchsloh");
break;
}
case 109376:
{
returnValue = F("Fuchslohweg");
break;
}
case 109377:
{
returnValue = F("Fuchslöcher");
break;
}
case 109378:
{
returnValue = F("Fuchslöcherallee");
break;
}
case 109379:
{
returnValue = F("Fuchslöcherschneise");
break;
}
case 109380:
{
returnValue = F("Fuchslöcherstr.");
break;
}
case 109381:
{
returnValue = F("Fuchslöcherweg");
break;
}
case 109382:
{
returnValue = F("Fuchsmattstr.");
break;
}
case 109383:
{
returnValue = F("Fuchsmauerweg");
break;
}
case 109384:
{
returnValue = F("Fuchsmoorweg");
break;
}
case 109385:
{
returnValue = F("Fuchsmühlenweg");
break;
}
case 109386:
{
returnValue = F("Fuchsmühler Str.");
break;
}
case 109387:
{
returnValue = F("Fuchsmühlerstr.");
break;
}
case 109388:
{
returnValue = F("Fuchsmühlstr.");
break;
}
case 109389:
{
returnValue = F("Fuchsmühlweg");
break;
}
case 109390:
{
returnValue = F("Fuchspad");
break;
}
case 109391:
{
returnValue = F("Fuchspass");
break;
}
case 109392:
{
returnValue = F("Fuchspaß");
break;
}
case 109393:
{
returnValue = F("Fuchspfad");
break;
}
case 109394:
{
returnValue = F("Fuchsplattweg");
break;
}
case 109395:
{
returnValue = F("Fuchspöhler Weg");
break;
}
case 109396:
{
returnValue = F("Fuchsrain");
break;
}
case 109397:
{
returnValue = F("Fuchsrainweg");
break;
}
case 109398:
{
returnValue = F("Fuchsrankweg");
break;
}
case 109399:
{
returnValue = F("Fuchsrech");
break;
}
case 109400:
{
returnValue = F("Fuchsreibenweg");
break;
}
case 109401:
{
returnValue = F("Fuchsriegelweg");
break;
}
case 109402:
{
returnValue = F("Fuchsring");
break;
}
case 109403:
{
returnValue = F("Fuchsrute");
break;
}
case 109404:
{
returnValue = F("Fuchsröhre");
break;
}
case 109405:
{
returnValue = F("Fuchssbräugasse");
break;
}
case 109406:
{
returnValue = F("Fuchsschlag");
break;
}
case 109407:
{
returnValue = F("Fuchsschneise");
break;
}
case 109408:
{
returnValue = F("Fuchsschwanz");
break;
}
case 109409:
{
returnValue = F("Fuchsschwanzweg");
break;
}
case 109410:
{
returnValue = F("Fuchssiepen");
break;
}
case 109411:
{
returnValue = F("Fuchssprungweg");
break;
}
case 109412:
{
returnValue = F("Fuchsstadter Hardte");
break;
}
case 109413:
{
returnValue = F("Fuchsstadter Str.");
break;
}
case 109414:
{
returnValue = F("Fuchsstadter Weg");
break;
}
case 109415:
{
returnValue = F("Fuchssteg");
break;
}
case 109416:
{
returnValue = F("Fuchssteig");
break;
}
case 109417:
{
returnValue = F("Fuchssteige");
break;
}
case 109418:
{
returnValue = F("Fuchssteiner Str.");
break;
}
case 109419:
{
returnValue = F("Fuchssteinweg");
break;
}
case 109420:
{
returnValue = F("Fuchsstiege");
break;
}
case 109421:
{
returnValue = F("Fuchsstr.");
break;
}
case 109422:
{
returnValue = F("Fuchsstädter Str.");
break;
}
case 109423:
{
returnValue = F("Fuchsstädter Weg");
break;
}
case 109424:
{
returnValue = F("Fuchstal");
break;
}
case 109425:
{
returnValue = F("Fuchstalstr.");
break;
}
case 109426:
{
returnValue = F("Fuchstanzstr.");
break;
}
case 109427:
{
returnValue = F("Fuchstanzweg");
break;
}
case 109428:
{
returnValue = F("Fuchsteichsträßle");
break;
}
case 109429:
{
returnValue = F("Fuchsthal");
break;
}
case 109430:
{
returnValue = F("Fuchstobel");
break;
}
case 109431:
{
returnValue = F("Fuchstobelstr.");
break;
}
case 109432:
{
returnValue = F("Fuchstrail");
break;
}
case 109433:
{
returnValue = F("Fuchstriebsträßchen");
break;
}
case 109434:
{
returnValue = F("Fuchstriebweg");
break;
}
case 109435:
{
returnValue = F("Fuchstrift");
break;
}
case 109436:
{
returnValue = F("Fuchsturmweg");
break;
}
case 109437:
{
returnValue = F("Fuchswaldstr.");
break;
}
case 109438:
{
returnValue = F("Fuchswasenstr.");
break;
}
case 109439:
{
returnValue = F("Fuchswasenweg");
break;
}
case 109440:
{
returnValue = F("Fuchsweberstr.");
break;
}
case 109441:
{
returnValue = F("Fuchsweg");
break;
}
case 109442:
{
returnValue = F("Fuchswegele");
break;
}
case 109443:
{
returnValue = F("Fuchswegl Geräumt");
break;
}
case 109444:
{
returnValue = F("Fuchsweiherstr.");
break;
}
case 109445:
{
returnValue = F("Fuchswende");
break;
}
case 109446:
{
returnValue = F("Fuchswiese");
break;
}
case 109447:
{
returnValue = F("Fuchswiesen");
break;
}
case 109448:
{
returnValue = F("Fuchswiesenstr.");
break;
}
case 109449:
{
returnValue = F("Fuchswiesenweg");
break;
}
case 109450:
{
returnValue = F("Fuchswinkel");
break;
}
case 109451:
{
returnValue = F("Fuchswinklstr.");
break;
}
case 109452:
{
returnValue = F("Fuchswirtgaßl");
break;
}
case 109453:
{
returnValue = F("Fuchswirtsweg");
break;
}
case 109454:
{
returnValue = F("Fuchsäcker");
break;
}
case 109455:
{
returnValue = F("Fuchsäckerstr.");
break;
}
case 109456:
{
returnValue = F("Fuchsäckerweg");
break;
}
case 109457:
{
returnValue = F("Fuchtrail");
break;
}
case 109458:
{
returnValue = F("Fuckelweg");
break;
}
case 109459:
{
returnValue = F("Fuckengasse");
break;
}
case 109460:
{
returnValue = F("Fuckerter Weg");
break;
}
case 109461:
{
returnValue = F("Fuderheubergstr.");
break;
}
case 109462:
{
returnValue = F("Fuderweg");
break;
}
case 109463:
{
returnValue = F("Fudestr.");
break;
}
case 109464:
{
returnValue = F("Fuefuki-Str.");
break;
}
case 109465:
{
returnValue = F("Fuelbecker Str.");
break;
}
case 109466:
{
returnValue = F("Fuestruper Str.");
break;
}
case 109467:
{
returnValue = F("Fugauer Str.");
break;
}
case 109468:
{
returnValue = F("Fuge");
break;
}
case 109469:
{
returnValue = F("Fugelstr.");
break;
}
case 109470:
{
returnValue = F("Fugger-Glött-Str.");
break;
}
case 109471:
{
returnValue = F("Fuggerallee");
break;
}
case 109472:
{
returnValue = F("Fuggergasse");
break;
}
case 109473:
{
returnValue = F("Fuggerhof");
break;
}
case 109474:
{
returnValue = F("Fuggerpark");
break;
}
case 109475:
{
returnValue = F("Fuggerplatz");
break;
}
case 109476:
{
returnValue = F("Fuggerring");
break;
}
case 109477:
{
returnValue = F("Fuggerstr.");
break;
}
case 109478:
{
returnValue = F("Fuggerweg");
break;
}
case 109479:
{
returnValue = F("Fuggishofweg");
break;
}
case 109480:
{
returnValue = F("Fuhlaublick");
break;
}
case 109481:
{
returnValue = F("Fuhlboomstr.");
break;
}
case 109482:
{
returnValue = F("Fuhlenbeek");
break;
}
case 109483:
{
returnValue = F("Fuhlenbek");
break;
}
case 109484:
{
returnValue = F("Fuhlenborn");
break;
}
case 109485:
{
returnValue = F("Fuhlenbrook");
break;
}
case 109486:
{
returnValue = F("Fuhlenbrügge");
break;
}
case 109487:
{
returnValue = F("Fuhlendiek");
break;
}
case 109488:
{
returnValue = F("Fuhlendorf Park");
break;
}
case 109489:
{
returnValue = F("Fuhlendorfer Weg");
break;
}
case 109490:
{
returnValue = F("Fuhlenhagener Weg");
break;
}
case 109491:
{
returnValue = F("Fuhlenhemmer Weg");
break;
}
case 109492:
{
returnValue = F("Fuhlenhof");
break;
}
case 109493:
{
returnValue = F("Fuhlenkrog");
break;
}
case 109494:
{
returnValue = F("Fuhlenpott");
break;
}
case 109495:
{
returnValue = F("Fuhlenriedeweg");
break;
}
case 109496:
{
returnValue = F("Fuhlenriedweg");
break;
}
case 109497:
{
returnValue = F("Fuhlenrüer Str.");
break;
}
case 109498:
{
returnValue = F("Fuhlensee");
break;
}
case 109499:
{
returnValue = F("Fuhlensteg");
break;
}
case 109500:
{
returnValue = F("Fuhlenstr.");
break;
}
case 109501:
{
returnValue = F("Fuhlentwiete");
break;
}
case 109502:
{
returnValue = F("Fuhlenweg");
break;
}
case 109503:
{
returnValue = F("Fuhlenwisch");
break;
}
case 109504:
{
returnValue = F("Fuhler Str.");
break;
}
case 109505:
{
returnValue = F("Fuhlerhook");
break;
}
case 109506:
{
returnValue = F("Fuhlerhäuker Esch");
break;
}
case 109507:
{
returnValue = F("Fuhlerhäuker Kamp");
break;
}
case 109508:
{
returnValue = F("Fuhlerhäuker Ring");
break;
}
case 109509:
{
returnValue = F("Fuhlestr.");
break;
}
case 109510:
{
returnValue = F("Fuhlfarve");
break;
}
case 109511:
{
returnValue = F("Fuhlhorn");
break;
}
case 109512:
{
returnValue = F("Fuhlnborn");
break;
}
case 109513:
{
returnValue = F("Fuhlndiek");
break;
}
case 109514:
{
returnValue = F("Fuhlreiter Weg");
break;
}
case 109515:
{
returnValue = F("Fuhlriedeweg");
break;
}
case 109516:
{
returnValue = F("Fuhlriege");
break;
}
case 109517:
{
returnValue = F("Fuhlrottstr.");
break;
}
case 109518:
{
returnValue = F("Fuhlsbütteler Weg");
break;
}
case 109519:
{
returnValue = F("Fuhneanger");
break;
}
case 109520:
{
returnValue = F("Fuhneblick");
break;
}
case 109521:
{
returnValue = F("Fuhnestr.");
break;
}
case 109522:
{
returnValue = F("Fuhneweg");
break;
}
case 109523:
{
returnValue = F("Fuhr");
break;
}
case 109524:
{
returnValue = F("Fuhramt");
break;
}
case 109525:
{
returnValue = F("Fuhrbacher Str.");
break;
}
case 109526:
{
returnValue = F("Fuhrbachstr.");
break;
}
case 109527:
{
returnValue = F("Fuhrbach’sche Koppel");
break;
}
case 109528:
{
returnValue = F("Fuhrberger Landstr.");
break;
}
case 109529:
{
returnValue = F("Fuhrberger Str.");
break;
}
case 109530:
{
returnValue = F("Fuhrberger Weg");
break;
}
case 109531:
{
returnValue = F("Fuhrbergsweg");
break;
}
case 109532:
{
returnValue = F("Fuhrbleek");
break;
}
case 109533:
{
returnValue = F("Fuhrenbahn");
break;
}
case 109534:
{
returnValue = F("Fuhrenblick");
break;
}
case 109535:
{
returnValue = F("Fuhrenbusch");
break;
}
case 109536:
{
returnValue = F("Fuhrenbuschweg");
break;
}
case 109537:
{
returnValue = F("Fuhrengraben");
break;
}
case 109538:
{
returnValue = F("Fuhrengrund");
break;
}
case 109539:
{
returnValue = F("Fuhrenheide");
break;
}
case 109540:
{
returnValue = F("Fuhrenhorst");
break;
}
case 109541:
{
returnValue = F("Fuhrenkamp");
break;
}
case 109542:
{
returnValue = F("Fuhrenkampstr.");
break;
}
case 109543:
{
returnValue = F("Fuhrenkampsweg");
break;
}
case 109544:
{
returnValue = F("Fuhrenkämpe");
break;
}
case 109545:
{
returnValue = F("Fuhrenmoor");
break;
}
case 109546:
{
returnValue = F("Fuhrenpark");
break;
}
case 109547:
{
returnValue = F("Fuhrenring");
break;
}
case 109548:
{
returnValue = F("Fuhrenstieg");
break;
}
case 109549:
{
returnValue = F("Fuhrenstr.");
break;
}
case 109550:
{
returnValue = F("Fuhrenweg");
break;
}
case 109551:
{
returnValue = F("Fuhrenwinkel");
break;
}
case 109552:
{
returnValue = F("Fuhrgasse");
break;
}
case 109553:
{
returnValue = F("Fuhrgraben");
break;
}
case 109554:
{
returnValue = F("Fuhrhorstweg");
break;
}
case 109555:
{
returnValue = F("Fuhrkamp");
break;
}
case 109556:
{
returnValue = F("Fuhrkampseck");
break;
}
case 109557:
{
returnValue = F("Fuhrmanngasse");
break;
}
case 109558:
{
returnValue = F("Fuhrmanns Birken");
break;
}
case 109559:
{
returnValue = F("Fuhrmannsbrücke");
break;
}
case 109560:
{
returnValue = F("Fuhrmannsgasse");
break;
}
case 109561:
{
returnValue = F("Fuhrmannshöhe");
break;
}
case 109562:
{
returnValue = F("Fuhrmannsplatz");
break;
}
case 109563:
{
returnValue = F("Fuhrmannsruh");
break;
}
case 109564:
{
returnValue = F("Fuhrmannstr.");
break;
}
case 109565:
{
returnValue = F("Fuhrmannsweg");
break;
}
case 109566:
{
returnValue = F("Fuhrmannweg");
break;
}
case 109567:
{
returnValue = F("Fuhrmansstr.");
break;
}
case 109568:
{
returnValue = F("Fuhrn");
break;
}
case 109569:
{
returnValue = F("Fuhrnkamp");
break;
}
case 109570:
{
returnValue = F("Fuhrpuhl");
break;
}
case 109571:
{
returnValue = F("Fuhrshöfe");
break;
}
case 109572:
{
returnValue = F("Fuhrsteige");
break;
}
case 109573:
{
returnValue = F("Fuhrstr.");
break;
}
case 109574:
{
returnValue = F("Fuhrtsberg");
break;
}
case 109575:
{
returnValue = F("Fuhrtstr.");
break;
}
case 109576:
{
returnValue = F("Fuhrtweg");
break;
}
case 109577:
{
returnValue = F("Fuhrweg");
break;
}
case 109578:
{
returnValue = F("Fuhrwegen");
break;
}
case 109579:
{
returnValue = F("Fuhrwerksgasse");
break;
}
case 109580:
{
returnValue = F("Fuhrwerkstr.");
break;
}
case 109581:
{
returnValue = F("Fuhseaue");
break;
}
case 109582:
{
returnValue = F("Fuhseauen");
break;
}
case 109583:
{
returnValue = F("Fuhseblick");
break;
}
case 109584:
{
returnValue = F("Fuhsebrücke Rosenthaler Landstr.");
break;
}
case 109585:
{
returnValue = F("Fuhsekamp");
break;
}
case 109586:
{
returnValue = F("Fuhserandweg");
break;
}
case 109587:
{
returnValue = F("Fuhsering");
break;
}
case 109588:
{
returnValue = F("Fuhsesteg");
break;
}
case 109589:
{
returnValue = F("Fuhsestr.");
break;
}
case 109590:
{
returnValue = F("Fuhsetal");
break;
}
case 109591:
{
returnValue = F("Fuhseweg");
break;
}
case 109592:
{
returnValue = F("Fuistingstr.");
break;
}
case 109593:
{
returnValue = F("Fukui Str.");
break;
}
case 109594:
{
returnValue = F("Fulau");
break;
}
case 109595:
{
returnValue = F("Fulbachweg");
break;
}
case 109596:
{
returnValue = F("Fuldaaue Bergshausen");
break;
}
case 109597:
{
returnValue = F("Fuldablick");
break;
}
case 109598:
{
returnValue = F("Fuldabrückenstr.");
break;
}
case 109599:
{
returnValue = F("Fuldaer Berg");
break;
}
case 109600:
{
returnValue = F("Fuldaer Graben");
break;
}
case 109601:
{
returnValue = F("Fuldaer Str.");
break;
}
case 109602:
{
returnValue = F("Fuldaer Weg");
break;
}
case 109603:
{
returnValue = F("Fuldaischen Höfe");
break;
}
case 109604:
{
returnValue = F("Fuldaring");
break;
}
case 109605:
{
returnValue = F("Fuldasteig");
break;
}
case 109606:
{
returnValue = F("Fuldastr.");
break;
}
case 109607:
{
returnValue = F("Fuldatalstr.");
break;
}
case 109608:
{
returnValue = F("Fuldaweg");
break;
}
case 109609:
{
returnValue = F("Fuldenweg");
break;
}
case 109610:
{
returnValue = F("Fuldepark");
break;
}
case 109611:
{
returnValue = F("Fulder Tor");
break;
}
case 109612:
{
returnValue = F("Fulderbergstr.");
break;
}
case 109613:
{
returnValue = F("Fuldischer Hof");
break;
}
case 109614:
{
returnValue = F("Fulfsweg");
break;
}
case 109615:
{
returnValue = F("Fulge");
break;
}
case 109616:
{
returnValue = F("Fulgen");
break;
}
case 109617:
{
returnValue = F("Fulgengrund");
break;
}
case 109618:
{
returnValue = F("Fulgenstadter Str.");
break;
}
case 109619:
{
returnValue = F("Fulgenweg");
break;
}
case 109620:
{
returnValue = F("Fulinpachstr.");
break;
}
case 109621:
{
returnValue = F("Fulkenbruchsweg");
break;
}
case 109622:
{
returnValue = F("Fulkostr.");
break;
}
case 109623:
{
returnValue = F("Fulkoweg");
break;
}
case 109624:
{
returnValue = F("Fulkstr.");
break;
}
case 109625:
{
returnValue = F("Fulkumer Weg");
break;
}
case 109626:
{
returnValue = F("Fulkwinstr.");
break;
}
case 109627:
{
returnValue = F("Fullbergrundweg");
break;
}
case 109628:
{
returnValue = F("Fullbergstr.");
break;
}
case 109629:
{
returnValue = F("Fullener Str.");
break;
}
case 109630:
{
returnValue = F("Fuller Kirchweg");
break;
}
case 109631:
{
returnValue = F("Fuller Str.");
break;
}
case 109632:
{
returnValue = F("Fulmecke");
break;
}
case 109633:
{
returnValue = F("Fulminastr.");
break;
}
case 109634:
{
returnValue = F("Fulminastrasse");
break;
}
case 109635:
{
returnValue = F("Fulshaarweg");
break;
}
case 109636:
{
returnValue = F("Fultonstr.");
break;
}
case 109637:
{
returnValue = F("Fultrischstr.");
break;
}
case 109638:
{
returnValue = F("Fumbach");
break;
}
case 109639:
{
returnValue = F("Fumberg");
break;
}
case 109640:
{
returnValue = F("Funckstr.");
break;
}
case 109641:
{
returnValue = F("Fundenring");
break;
}
case 109642:
{
returnValue = F("Fundermannsweg");
break;
}
case 109643:
{
returnValue = F("Fundgrube Anna und Paul");
break;
}
case 109644:
{
returnValue = F("Fundgrube Anna und Schindler");
break;
}
case 109645:
{
returnValue = F("Fundgrube Gesellschaft");
break;
}
case 109646:
{
returnValue = F("Fundgrube Hüttengrund");
break;
}
case 109647:
{
returnValue = F("Fundgrube Morgenstern");
break;
}
case 109648:
{
returnValue = F("Fundgrube Peter und Paul");
break;
}
case 109649:
{
returnValue = F("Fundgrube Rosenkranz");
break;
}
case 109650:
{
returnValue = F("Fundgrube Sauschwart");
break;
}
case 109651:
{
returnValue = F("Fundgrube Siebenschlehen");
break;
}
case 109652:
{
returnValue = F("Fundgrube Sonnenwirbel");
break;
}
case 109653:
{
returnValue = F("Fundgrube Wildschwein");
break;
}
case 109654:
{
returnValue = F("Fundgrube Wolfgangmaßen");
break;
}
case 109655:
{
returnValue = F("Fundumstr.");
break;
}
case 109656:
{
returnValue = F("Funekestr.");
break;
}
case 109657:
{
returnValue = F("Fungendonk");
break;
}
case 109658:
{
returnValue = F("Funkegässchen");
break;
}
case 109659:
{
returnValue = F("Funkekamp");
break;
}
case 109660:
{
returnValue = F("Funkelinweg");
break;
}
case 109661:
{
returnValue = F("Funkenbachstr.");
break;
}
case 109662:
{
returnValue = F("Funkenbadstr.");
break;
}
case 109663:
{
returnValue = F("Funkenberg");
break;
}
case 109664:
{
returnValue = F("Funkenbergstr.");
break;
}
case 109665:
{
returnValue = F("Funkenbergweg");
break;
}
case 109666:
{
returnValue = F("Funkenbitze");
break;
}
case 109667:
{
returnValue = F("Funkenbruch");
break;
}
case 109668:
{
returnValue = F("Funkenburg");
break;
}
case 109669:
{
returnValue = F("Funkenburgstr.");
break;
}
case 109670:
{
returnValue = F("Funkenbuschstr.");
break;
}
case 109671:
{
returnValue = F("Funkenbühl");
break;
}
case 109672:
{
returnValue = F("Funkendorfer Weg");
break;
}
case 109673:
{
returnValue = F("Funkendyk");
break;
}
case 109674:
{
returnValue = F("Funkengasse");
break;
}
case 109675:
{
returnValue = F("Funkengärtenstr.");
break;
}
case 109676:
{
returnValue = F("Funkenhagen");
break;
}
case 109677:
{
returnValue = F("Funkenhagener Str.");
break;
}
case 109678:
{
returnValue = F("Funkenhauweg");
break;
}
case 109679:
{
returnValue = F("Funkenmühle");
break;
}
case 109680:
{
returnValue = F("Funkenreuth");
break;
}
case 109681:
{
returnValue = F("Funkenreuther Str.");
break;
}
case 109682:
{
returnValue = F("Funkenstaigweg");
break;
}
case 109683:
{
returnValue = F("Funkenstiege");
break;
}
case 109684:
{
returnValue = F("Funkenstr.");
break;
}
case 109685:
{
returnValue = F("Funkenweg");
break;
}
case 109686:
{
returnValue = F("Funkenwiese");
break;
}
case 109687:
{
returnValue = F("Funkerberg");
break;
}
case 109688:
{
returnValue = F("Funkestr.");
break;
}
case 109689:
{
returnValue = F("Funkesweg");
break;
}
case 109690:
{
returnValue = F("Funkgarten");
break;
}
case 109691:
{
returnValue = F("Funkhaus");
break;
}
case 109692:
{
returnValue = F("Funkhaus-Passage");
break;
}
case 109693:
{
returnValue = F("Funkland");
break;
}
case 109694:
{
returnValue = F("Funkmastweg");
break;
}
case 109695:
{
returnValue = F("Funkplatz");
break;
}
case 109696:
{
returnValue = F("Funksberg");
break;
}
case 109697:
{
returnValue = F("Funkstationenweg");
break;
}
case 109698:
{
returnValue = F("Funkstattweg");
break;
}
case 109699:
{
returnValue = F("Funkstelle");
break;
}
case 109700:
{
returnValue = F("Funkstr.");
break;
}
case 109701:
{
returnValue = F("Funkstätter Weg");
break;
}
case 109702:
{
returnValue = F("Funkturm");
break;
}
case 109703:
{
returnValue = F("Funkturmstr.");
break;
}
case 109704:
{
returnValue = F("Funkturmweg");
break;
}
case 109705:
{
returnValue = F("Funkweg");
break;
}
case 109706:
{
returnValue = F("Funnenkampstr.");
break;
}
case 109707:
{
returnValue = F("Funnens");
break;
}
case 109708:
{
returnValue = F("Funnenser Altendeich");
break;
}
case 109709:
{
returnValue = F("Funnenser Neuendeich");
break;
}
case 109710:
{
returnValue = F("Funneweg");
break;
}
case 109711:
{
returnValue = F("Funnix");
break;
}
case 109712:
{
returnValue = F("Funnixer Altengroden");
break;
}
case 109713:
{
returnValue = F("Funnixer Riege");
break;
}
case 109714:
{
returnValue = F("Funnixer Siedlung");
break;
}
case 109715:
{
returnValue = F("Funnixer Str.");
break;
}
case 109716:
{
returnValue = F("Funnixerhörn");
break;
}
case 109717:
{
returnValue = F("Funny World");
break;
}
case 109718:
{
returnValue = F("Funpark Inselsberg");
break;
}
case 109719:
{
returnValue = F("Furatweiler");
break;
}
case 109720:
{
returnValue = F("Furchgasse");
break;
}
case 109721:
{
returnValue = F("Furkenweg");
break;
}
case 109722:
{
returnValue = F("Furkeweg");
break;
}
case 109723:
{
returnValue = F("Furlweg");
break;
}
case 109724:
{
returnValue = F("Furlwiese");
break;
}
case 109725:
{
returnValue = F("Furmannstr.");
break;
}
case 109726:
{
returnValue = F("Furmansweg");
break;
}
case 109727:
{
returnValue = F("Furmisstr.");
break;
}
case 109728:
{
returnValue = F("Furnierplatz Heigenbrücken");
break;
}
case 109729:
{
returnValue = F("Furnusweg");
break;
}
case 109730:
{
returnValue = F("Furschweilerstr.");
break;
}
case 109731:
{
returnValue = F("Furt");
break;
}
case 109732:
{
returnValue = F("Furt 2");
break;
}
case 109733:
{
returnValue = F("Furt 3");
break;
}
case 109734:
{
returnValue = F("Furt durch die Reichenbach");
break;
}
case 109735:
{
returnValue = F("Furt über den Sieggraben");
break;
}
case 109736:
{
returnValue = F("Furtackergasse");
break;
}
case 109737:
{
returnValue = F("Furtackerweg");
break;
}
case 109738:
{
returnValue = F("Furtanger");
break;
}
case 109739:
{
returnValue = F("Furtarner Weg");
break;
}
case 109740:
{
returnValue = F("Furtbachstr.");
break;
}
case 109741:
{
returnValue = F("Furtbektal");
break;
}
case 109742:
{
returnValue = F("Furtbergstr.");
break;
}
case 109743:
{
returnValue = F("Furtbrunnen");
break;
}
case 109744:
{
returnValue = F("Furtbrückwiese");
break;
}
case 109745:
{
returnValue = F("Furtenackerweg");
break;
}
case 109746:
{
returnValue = F("Furtenbachstr.");
break;
}
case 109747:
{
returnValue = F("Furtenbachweg");
break;
}
case 109748:
{
returnValue = F("Furtenweg");
break;
}
case 109749:
{
returnValue = F("Furter Feld");
break;
}
case 109750:
{
returnValue = F("Furter Str.");
break;
}
case 109751:
{
returnValue = F("Furtesch");
break;
}
case 109752:
{
returnValue = F("Furtfeld");
break;
}
case 109753:
{
returnValue = F("Furtgasse");
break;
}
case 109754:
{
returnValue = F("Furth");
break;
}
case 109755:
{
returnValue = F("Furth Brücke");
break;
}
case 109756:
{
returnValue = F("Furthammer");
break;
}
case 109757:
{
returnValue = F("Furtheimertalweg");
break;
}
case 109758:
{
returnValue = F("Further Dorfpark");
break;
}
case 109759:
{
returnValue = F("Further Str.");
break;
}
case 109760:
{
returnValue = F("Further Weg");
break;
}
case 109761:
{
returnValue = F("Further-Bahnhof-Str.");
break;
}
case 109762:
{
returnValue = F("Furtherhofstr.");
break;
}
case 109763:
{
returnValue = F("Furtherweg");
break;
}
case 109764:
{
returnValue = F("Furthgasse");
break;
}
case 109765:
{
returnValue = F("Furthkoppel");
break;
}
case 109766:
{
returnValue = F("Furthmühle");
break;
}
case 109767:
{
returnValue = F("Furthmühlweg");
break;
}
case 109768:
{
returnValue = F("Furtholz");
break;
}
case 109769:
{
returnValue = F("Furthsbachweg");
break;
}
case 109770:
{
returnValue = F("Furthstr.");
break;
}
case 109771:
{
returnValue = F("Furthweg");
break;
}
case 109772:
{
returnValue = F("Furthweisen");
break;
}
case 109773:
{
returnValue = F("Furthwiese");
break;
}
case 109774:
{
returnValue = F("Furtmatten");
break;
}
case 109775:
{
returnValue = F("Furtmühlweg");
break;
}
case 109776:
{
returnValue = F("Furtmüllerweg");
break;
}
case 109777:
{
returnValue = F("Furtnerbräugasse");
break;
}
case 109778:
{
returnValue = F("Furtnergasse");
break;
}
case 109779:
{
returnValue = F("Furtnerhöhe");
break;
}
case 109780:
{
returnValue = F("Furtsteggasse");
break;
}
case 109781:
{
returnValue = F("Furtstr.");
break;
}
case 109782:
{
returnValue = F("Furtwanger Str.");
break;
}
case 109783:
{
returnValue = F("Furtwasen");
break;
}
case 109784:
{
returnValue = F("Furtweg");
break;
}
case 109785:
{
returnValue = F("Furtweinberg");
break;
}
case 109786:
{
returnValue = F("Furtwiese");
break;
}
case 109787:
{
returnValue = F("Furtwiesen");
break;
}
case 109788:
{
returnValue = F("Furtwiesenstr.");
break;
}
case 109789:
{
returnValue = F("Furtwiesenweg");
break;
}
case 109790:
{
returnValue = F("Furtwinkel");
break;
}
case 109791:
{
returnValue = F("Furtwänglerstr.");
break;
}
case 109792:
{
returnValue = F("Furtwänglerweg");
break;
}
case 109793:
{
returnValue = F("Furtäcker");
break;
}
case 109794:
{
returnValue = F("Fusenicher Str.");
break;
}
case 109795:
{
returnValue = F("Fusenrech");
break;
}
case 109796:
{
returnValue = F("Fussenwaldweg");
break;
}
case 109797:
{
returnValue = F("Fussgängerbrücke");
break;
}
case 109798:
{
returnValue = F("Fusshof-Weg");
break;
}
case 109799:
{
returnValue = F("Fussinger Str.");
break;
}
case 109800:
{
returnValue = F("Fussinger Weg");
break;
}
case 109801:
{
returnValue = F("Fussleite");
break;
}
case 109802:
{
returnValue = F("Fussweg");
break;
}
case 109803:
{
returnValue = F("Fussweg \"Gässje");
break;
}
case 109804:
{
returnValue = F("Fussweg Arbeit und Freude");
break;
}
case 109805:
{
returnValue = F("Fussweg Auf Damm");
break;
}
case 109806:
{
returnValue = F("Fussweg Kantstr. - Friedrich-Liszt-Str.");
break;
}
case 109807:
{
returnValue = F("Fussweg Schrebergartenanlage");
break;
}
case 109808:
{
returnValue = F("Fussweg Tenne und Grundschule");
break;
}
case 109809:
{
returnValue = F("Fussweg Weinbergstr.");
break;
}
case 109810:
{
returnValue = F("Fussweg am Bahnhaltepunkt");
break;
}
case 109811:
{
returnValue = F("Fussweg am Köhlerweg");
break;
}
case 109812:
{
returnValue = F("Fussweg zum Bahnhof");
break;
}
case 109813:
{
returnValue = F("Fussweg zum Spielplatz");
break;
}
case 109814:
{
returnValue = F("Fussweg zur Bushaltestelle");
break;
}
case 109815:
{
returnValue = F("Fussweg zur Klosterschänke");
break;
}
case 109816:
{
returnValue = F("Fustenburgstr.");
break;
}
case 109817:
{
returnValue = F("Fusternberger Str.");
break;
}
case 109818:
{
returnValue = F("Fuststr.");
break;
}
case 109819:
{
returnValue = F("Futapaßstr.");
break;
}
case 109820:
{
returnValue = F("Futapaßweg");
break;
}
case 109821:
{
returnValue = F("Futtelteichweg");
break;
}
case 109822:
{
returnValue = F("Futterbuchenweg");
break;
}
case 109823:
{
returnValue = F("Futtererstr.");
break;
}
case 109824:
{
returnValue = F("Futtergasse");
break;
}
case 109825:
{
returnValue = F("Futtergestell");
break;
}
case 109826:
{
returnValue = F("Futterholzweg");
break;
}
case 109827:
{
returnValue = F("Futterkamp");
break;
}
case 109828:
{
returnValue = F("Futterplatzschleifweg");
break;
}
case 109829:
{
returnValue = F("Futtersackweg");
break;
}
case 109830:
{
returnValue = F("Futtersteig");
break;
}
case 109831:
{
returnValue = F("Futterstr.");
break;
}
case 109832:
{
returnValue = F("Futterweg");
break;
}
case 109833:
{
returnValue = F("Futterwiese");
break;
}
case 109834:
{
returnValue = F("Futterwiesenweg");
break;
}
case 109835:
{
returnValue = F("Fuulstege");
break;
}
case 109836:
{
returnValue = F("Fuß am Holm");
break;
}
case 109837:
{
returnValue = F("Fuß und Radweg");
break;
}
case 109838:
{
returnValue = F("Fuß- ud Radweg");
break;
}
case 109839:
{
returnValue = F("Fuß-/Radweg über Natobrücke");
break;
}
case 109840:
{
returnValue = F("Fuß/Radweg");
break;
}
case 109841:
{
returnValue = F("Fußackerweg");
break;
}
case 109842:
{
returnValue = F("Fußbach");
break;
}
case 109843:
{
returnValue = F("Fußbachstr.");
break;
}
case 109844:
{
returnValue = F("Fußballplatz");
break;
}
case 109845:
{
returnValue = F("Fußberger Str.");
break;
}
case 109846:
{
returnValue = F("Fußbergstr.");
break;
}
case 109847:
{
returnValue = F("Fußbraake");
break;
}
case 109848:
{
returnValue = F("Fußenburg");
break;
}
case 109849:
{
returnValue = F("Fußgarten");
break;
}
case 109850:
{
returnValue = F("Fußgasse");
break;
}
case 109851:
{
returnValue = F("Fußgänger-Querungshilfe");
break;
}
case 109852:
{
returnValue = F("Fußgängerbehelfsbrücke Wallstr.");
break;
}
case 109853:
{
returnValue = F("Fußgängerbrücke");
break;
}
case 109854:
{
returnValue = F("Fußgängerbrücke (Holzbalken)");
break;
}
case 109855:
{
returnValue = F("Fußgängerbrücke Bant");
break;
}
case 109856:
{
returnValue = F("Fußgängerbrücke Miellen");
break;
}
case 109857:
{
returnValue = F("Fußgängerbrücke Zippendorf");
break;
}
case 109858:
{
returnValue = F("Fußgängerbrücke am Tierpark");
break;
}
case 109859:
{
returnValue = F("Fußgängerbrücke am Wehr");
break;
}
case 109860:
{
returnValue = F("Fußgängerbrücke zum Parkhaus Stadtmitte");
break;
}
case 109861:
{
returnValue = F("Fußgängerbrücke zur Phänomenta");
break;
}
case 109862:
{
returnValue = F("Fußgängerpromenade");
break;
}
case 109863:
{
returnValue = F("Fußgängersteg");
break;
}
case 109864:
{
returnValue = F("Fußgängertunnel");
break;
}
case 109865:
{
returnValue = F("Fußgängertunnel Lübecker Str.");
break;
}
case 109866:
{
returnValue = F("Fußgängerunterführung");
break;
}
case 109867:
{
returnValue = F("Fußgängerunterführung Stadtbahnhof");
break;
}
case 109868:
{
returnValue = F("Fußgängerzugang Penny Altenmünster");
break;
}
case 109869:
{
returnValue = F("Fußgängerübergang (Ampel)");
break;
}
case 109870:
{
returnValue = F("Fußgängerüberquerung");
break;
}
case 109871:
{
returnValue = F("Fußgängerüberweg");
break;
}
case 109872:
{
returnValue = F("Fußgängerüberweg zum Bw Gießen");
break;
}
case 109873:
{
returnValue = F("Fußgäßle");
break;
}
case 109874:
{
returnValue = F("Fußgönheimer Str.");
break;
}
case 109875:
{
returnValue = F("Fußgönheimer Weg");
break;
}
case 109876:
{
returnValue = F("Fußhain");
break;
}
case 109877:
{
returnValue = F("Fußholdgasse");
break;
}
case 109878:
{
returnValue = F("Fußkreuzweg");
break;
}
case 109879:
{
returnValue = F("Fußlochweg");
break;
}
case 109880:
{
returnValue = F("Fußpfad");
break;
}
case 109881:
{
returnValue = F("Fußpfad (geduldet)");
break;
}
case 109882:
{
returnValue = F("Fußrain");
break;
}
case 109883:
{
returnValue = F("Fußsteig");
break;
}
case 109884:
{
returnValue = F("Fußsteigkoppel");
break;
}
case 109885:
{
returnValue = F("Fußsteinerstr.");
break;
}
case 109886:
{
returnValue = F("Fußstieg");
break;
}
case 109887:
{
returnValue = F("Fußstr.");
break;
}
case 109888:
{
returnValue = F("Fußstätt");
break;
}
case 109889:
{
returnValue = F("Fußwanderweg zur Redoute");
break;
}
case 109890:
{
returnValue = F("Fußwasser");
break;
}
case 109891:
{
returnValue = F("Fußweg");
break;
}
case 109892:
{
returnValue = F("Fußweg \"Kunstwegen");
break;
}
case 109893:
{
returnValue = F("Fußweg (Hotel)");
break;
}
case 109894:
{
returnValue = F("Fußweg (barrierefrei)");
break;
}
case 109895:
{
returnValue = F("Fußweg Aartalschule - Kirchfeldhalle");
break;
}
case 109896:
{
returnValue = F("Fußweg Am Gesehr");
break;
}
case 109897:
{
returnValue = F("Fußweg Angelgärten");
break;
}
case 109898:
{
returnValue = F("Fußweg Bamlach - Rhein");
break;
}
case 109899:
{
returnValue = F("Fußweg Burg Maus");
break;
}
case 109900:
{
returnValue = F("Fußweg Burgmauer");
break;
}
case 109901:
{
returnValue = F("Fußweg Buswartehaus z. Haltestelle");
break;
}
case 109902:
{
returnValue = F("Fußweg Bäckerstr.");
break;
}
case 109903:
{
returnValue = F("Fußweg Dünenvilla Sommerhaus");
break;
}
case 109904:
{
returnValue = F("Fußweg Friedhof");
break;
}
case 109905:
{
returnValue = F("Fußweg Grüne Harfe");
break;
}
case 109906:
{
returnValue = F("Fußweg Hubertusstr.");
break;
}
case 109907:
{
returnValue = F("Fußweg Humboldstr. - Hermann-Löns-Str.");
break;
}
case 109908:
{
returnValue = F("Fußweg Hübenthal - Sielmann-Stiftung");
break;
}
case 109909:
{
returnValue = F("Fußweg Kanalstr.");
break;
}
case 109910:
{
returnValue = F("Fußweg Klein Barnitz");
break;
}
case 109911:
{
returnValue = F("Fußweg Lilienweg-Blumenstr.");
break;
}
case 109912:
{
returnValue = F("Fußweg Menzbühndstr. - Langesträngstr.");
break;
}
case 109913:
{
returnValue = F("Fußweg Oberkircher Str. - Bachstr.");
break;
}
case 109914:
{
returnValue = F("Fußweg Richtung Donau");
break;
}
case 109915:
{
returnValue = F("Fußweg Spielplatz");
break;
}
case 109916:
{
returnValue = F("Fußweg Spielplatz im Keltersfeld");
break;
}
case 109917:
{
returnValue = F("Fußweg St. Petri Kirche");
break;
}
case 109918:
{
returnValue = F("Fußweg Steinbruch");
break;
}
case 109919:
{
returnValue = F("Fußweg Synagoge");
break;
}
case 109920:
{
returnValue = F("Fußweg Verbindung zwischen Franziskanerstr. und Josef-Maurer-Str.");
break;
}
case 109921:
{
returnValue = F("Fußweg Wendehammer zur Schule");
break;
}
case 109922:
{
returnValue = F("Fußweg Zwiebelstück");
break;
}
case 109923:
{
returnValue = F("Fußweg am Bildungshügel");
break;
}
case 109924:
{
returnValue = F("Fußweg am Parkplatz");
break;
}
case 109925:
{
returnValue = F("Fußweg am Rathaus");
break;
}
case 109926:
{
returnValue = F("Fußweg an der B-Zone");
break;
}
case 109927:
{
returnValue = F("Fußweg an der Goldach");
break;
}
case 109928:
{
returnValue = F("Fußweg der Dammstr.");
break;
}
case 109929:
{
returnValue = F("Fußweg durch Wäldchen");
break;
}
case 109930:
{
returnValue = F("Fußweg ehem. Bahnweg");
break;
}
case 109931:
{
returnValue = F("Fußweg entlang der Pfrimm unter zwei Bahnbrücken");
break;
}
case 109932:
{
returnValue = F("Fußweg hinzugefügt");
break;
}
case 109933:
{
returnValue = F("Fußweg im Kidrontal");
break;
}
case 109934:
{
returnValue = F("Fußweg im Köbele");
break;
}
case 109935:
{
returnValue = F("Fußweg in den Park und zum Spielplatz");
break;
}
case 109936:
{
returnValue = F("Fußweg mit zwei Treppen");
break;
}
case 109937:
{
returnValue = F("Fußweg nach Auerbach");
break;
}
case 109938:
{
returnValue = F("Fußweg nach Bayerisch Gmain");
break;
}
case 109939:
{
returnValue = F("Fußweg nach Immendorf");
break;
}
case 109940:
{
returnValue = F("Fußweg nach Villingendorf");
break;
}
case 109941:
{
returnValue = F("Fußweg nach dem Bahnhof");
break;
}
case 109942:
{
returnValue = F("Fußweg um den Brunnen");
break;
}
case 109943:
{
returnValue = F("Fußweg um den Schwanenteich");
break;
}
case 109944:
{
returnValue = F("Fußweg zu Küche D");
break;
}
case 109945:
{
returnValue = F("Fußweg zum Bikepark");
break;
}
case 109946:
{
returnValue = F("Fußweg zum Egerlandweg");
break;
}
case 109947:
{
returnValue = F("Fußweg zum Friedhof");
break;
}
case 109948:
{
returnValue = F("Fußweg zum Horn");
break;
}
case 109949:
{
returnValue = F("Fußweg zum Marienstein");
break;
}
case 109950:
{
returnValue = F("Fußweg zum Mittleren Waldweg");
break;
}
case 109951:
{
returnValue = F("Fußweg zum Oberen Waldweg");
break;
}
case 109952:
{
returnValue = F("Fußweg zum Oelsberg");
break;
}
case 109953:
{
returnValue = F("Fußweg zum Sportgelände");
break;
}
case 109954:
{
returnValue = F("Fußweg zum Sportplatz");
break;
}
case 109955:
{
returnValue = F("Fußweg zum Stadthaus");
break;
}
case 109956:
{
returnValue = F("Fußweg zum Startplatz");
break;
}
case 109957:
{
returnValue = F("Fußweg zum Unteren Waldweg");
break;
}
case 109958:
{
returnValue = F("Fußweg zum Westen");
break;
}
case 109959:
{
returnValue = F("Fußweg zur \"Alten Eiche");
break;
}
case 109960:
{
returnValue = F("Fußweg zur Bahnhofstr.");
break;
}
case 109961:
{
returnValue = F("Fußweg zur Burg");
break;
}
case 109962:
{
returnValue = F("Fußweg zur Bushaltestelle / Schule");
break;
}
case 109963:
{
returnValue = F("Fußweg zur Friedrich-Ebert-Str.");
break;
}
case 109964:
{
returnValue = F("Fußweg zur Lutherhöhe");
break;
}
case 109965:
{
returnValue = F("Fußweg zur Max-Herz-Str.");
break;
}
case 109966:
{
returnValue = F("Fußweg zur Schachener Bucht");
break;
}
case 109967:
{
returnValue = F("Fußweg zur Schmiedegasse");
break;
}
case 109968:
{
returnValue = F("Fußweg zur Walhalla");
break;
}
case 109969:
{
returnValue = F("Fußweg zur oberen Scheidquelle");
break;
}
case 109970:
{
returnValue = F("Fußweg zur roten Schule");
break;
}
case 109971:
{
returnValue = F("Fußweg zwischen Kirche und Rathaus");
break;
}
case 109972:
{
returnValue = F("Fußweg über die Bülze");
break;
}
case 109973:
{
returnValue = F("Fußweg, Verbindung Enge Gasse - Enge Gasse");
break;
}
case 109974:
{
returnValue = F("Fußweg/Skispur");
break;
}
case 109975:
{
returnValue = F("Fußwegele");
break;
}
case 109976:
{
returnValue = F("Fußßweg (episodisch überflutet)");
break;
}
case 109977:
{
returnValue = F("Fw. Keim-Weg");
break;
}
case 109978:
{
returnValue = F("Fw.-Heller-Weg");
break;
}
case 109979:
{
returnValue = F("Fächelweg");
break;
}
case 109980:
{
returnValue = F("Fächerstr.");
break;
}
case 109981:
{
returnValue = F("Fädersmühle");
break;
}
case 109982:
{
returnValue = F("Fähenweg");
break;
}
case 109983:
{
returnValue = F("Fählersgasse");
break;
}
case 109984:
{
returnValue = F("Fähnchenhole");
break;
}
case 109985:
{
returnValue = F("Fähndrichsweg");
break;
}
case 109986:
{
returnValue = F("Fähnrichstr.");
break;
}
case 109987:
{
returnValue = F("Fähnrichsweg");
break;
}
case 109988:
{
returnValue = F("Fähnrichweg");
break;
}
case 109989:
{
returnValue = F("Fähr");
break;
}
case 109990:
{
returnValue = F("Fähranger");
break;
}
case 109991:
{
returnValue = F("Fähranleger Buckau");
break;
}
case 109992:
{
returnValue = F("Fähranleger Stadtpark Rotehorn");
break;
}
case 109993:
{
returnValue = F("Fährbaum");
break;
}
case 109994:
{
returnValue = F("Fährberg");
break;
}
case 109995:
{
returnValue = F("Fährbergweg");
break;
}
case 109996:
{
returnValue = F("Fährblick");
break;
}
case 109997:
{
returnValue = F("Fährbrücke");
break;
}
case 109998:
{
returnValue = F("Fährbrücker Str.");
break;
}
case 109999:
{
returnValue = F("Fährdamm");
break;
}
case 110000:
{
returnValue = F("Fährdammstr.");
break;
}
case 110001:
{
returnValue = F("Fährdorf-Ausbau");
break;
}
case 110002:
{
returnValue = F("Fährdorf-Dorf");
break;
}
case 110003:
{
returnValue = F("Fährdorf-Hof");
break;
}
case 110004:
{
returnValue = F("Fähre");
break;
}
case 110005:
{
returnValue = F("Fähre-Nord");
break;
}
case 110006:
{
returnValue = F("Fähre-Süd");
break;
}
case 110007:
{
returnValue = F("Fährenhorn");
break;
}
case 110008:
{
returnValue = F("Fährenkamp");
break;
}
case 110009:
{
returnValue = F("Fährenkampweg");
break;
}
case 110010:
{
returnValue = F("Fährenkotten");
break;
}
}
return returnValue;
}
