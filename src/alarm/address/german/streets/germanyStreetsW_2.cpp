#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameW2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 330033:
    {
        returnValue = F("Weidenberger Pfad");
        break;
    }
    case 330034:
    {
        returnValue = F("Weidenberger Str.");
        break;
    }
    case 330035:
    {
        returnValue = F("Weidenberggasse");
        break;
    }
    case 330036:
    {
        returnValue = F("Weidenbergstr.");
        break;
    }
    case 330037:
    {
        returnValue = F("Weidenbergweg");
        break;
    }
    case 330038:
    {
        returnValue = F("Weidenbleek");
        break;
    }
    case 330039:
    {
        returnValue = F("Weidenbogen");
        break;
    }
    case 330040:
    {
        returnValue = F("Weidenborn");
        break;
    }
    case 330041:
    {
        returnValue = F("Weidenbornstr.");
        break;
    }
    case 330042:
    {
        returnValue = F("Weidenbornweg");
        break;
    }
    case 330043:
    {
        returnValue = F("Weidenbrede");
        break;
    }
    case 330044:
    {
        returnValue = F("Weidenbreite");
        break;
    }
    case 330045:
    {
        returnValue = F("Weidenbrink");
        break;
    }
    case 330046:
    {
        returnValue = F("Weidenbruch");
        break;
    }
    case 330047:
    {
        returnValue = F("Weidenbruchsweg");
        break;
    }
    case 330048:
    {
        returnValue = F("Weidenbruchweg");
        break;
    }
    case 330049:
    {
        returnValue = F("Weidenbruck");
        break;
    }
    case 330050:
    {
        returnValue = F("Weidenbrunkel");
        break;
    }
    case 330051:
    {
        returnValue = F("Weidenbrunnenweg");
        break;
    }
    case 330052:
    {
        returnValue = F("Weidenbrücke");
        break;
    }
    case 330053:
    {
        returnValue = F("Weidenbrücker Richtweg");
        break;
    }
    case 330054:
    {
        returnValue = F("Weidenburg");
        break;
    }
    case 330055:
    {
        returnValue = F("Weidenbusch");
        break;
    }
    case 330056:
    {
        returnValue = F("Weidenbuscher Weg");
        break;
    }
    case 330057:
    {
        returnValue = F("Weidenbuschtwete");
        break;
    }
    case 330058:
    {
        returnValue = F("Weidenbuschweg");
        break;
    }
    case 330059:
    {
        returnValue = F("Weidenbörnerstr.");
        break;
    }
    case 330060:
    {
        returnValue = F("Weidenbühlstr.");
        break;
    }
    case 330061:
    {
        returnValue = F("Weidenbühlweg");
        break;
    }
    case 330062:
    {
        returnValue = F("Weidendamm");
        break;
    }
    case 330063:
    {
        returnValue = F("Weidendammsweg");
        break;
    }
    case 330064:
    {
        returnValue = F("Weidendonk");
        break;
    }
    case 330065:
    {
        returnValue = F("Weidendorf");
        break;
    }
    case 330066:
    {
        returnValue = F("Weidendyk");
        break;
    }
    case 330067:
    {
        returnValue = F("Weideneck");
        break;
    }
    case 330068:
    {
        returnValue = F("Weideneckerstr.");
        break;
    }
    case 330069:
    {
        returnValue = F("Weidener Anger");
        break;
    }
    case 330070:
    {
        returnValue = F("Weidener Spitze");
        break;
    }
    case 330071:
    {
        returnValue = F("Weidener Str.");
        break;
    }
    case 330072:
    {
        returnValue = F("Weidener Viehweg");
        break;
    }
    case 330073:
    {
        returnValue = F("Weidener Weg");
        break;
    }
    case 330074:
    {
        returnValue = F("Weidenfeld");
        break;
    }
    case 330075:
    {
        returnValue = F("Weidenfelder Str.");
        break;
    }
    case 330076:
    {
        returnValue = F("Weidenfelderweg");
        break;
    }
    case 330077:
    {
        returnValue = F("Weidenfeldle");
        break;
    }
    case 330078:
    {
        returnValue = F("Weidenfeldstr.");
        break;
    }
    case 330079:
    {
        returnValue = F("Weidenfeldweg");
        break;
    }
    case 330080:
    {
        returnValue = F("Weidenfohr");
        break;
    }
    case 330081:
    {
        returnValue = F("Weidenfurt");
        break;
    }
    case 330082:
    {
        returnValue = F("Weidengalle");
        break;
    }
    case 330083:
    {
        returnValue = F("Weidengang");
        break;
    }
    case 330084:
    {
        returnValue = F("Weidengarten");
        break;
    }
    case 330085:
    {
        returnValue = F("Weidengartenweg");
        break;
    }
    case 330086:
    {
        returnValue = F("Weidengasse");
        break;
    }
    case 330087:
    {
        returnValue = F("Weidengewann");
        break;
    }
    case 330088:
    {
        returnValue = F("Weidengraben");
        break;
    }
    case 330089:
    {
        returnValue = F("Weidengracht");
        break;
    }
    case 330090:
    {
        returnValue = F("Weidengrund");
        break;
    }
    case 330091:
    {
        returnValue = F("Weidengrundring");
        break;
    }
    case 330092:
    {
        returnValue = F("Weidengrundstr.");
        break;
    }
    case 330093:
    {
        returnValue = F("Weidengründeweg");
        break;
    }
    case 330094:
    {
        returnValue = F("Weidengärten");
        break;
    }
    case 330095:
    {
        returnValue = F("Weidenhaag");
        break;
    }
    case 330096:
    {
        returnValue = F("Weidenhagen");
        break;
    }
    case 330097:
    {
        returnValue = F("Weidenhahner Str.");
        break;
    }
    case 330098:
    {
        returnValue = F("Weidenhain-Dommitzscher Weg");
        break;
    }
    case 330099:
    {
        returnValue = F("Weidenhainer Str.");
        break;
    }
    case 330100:
    {
        returnValue = F("Weidenhainer Weg");
        break;
    }
    case 330101:
    {
        returnValue = F("Weidenhalde");
        break;
    }
    case 330102:
    {
        returnValue = F("Weidenhaldeweg");
        break;
    }
    case 330103:
    {
        returnValue = F("Weidenhang");
        break;
    }
    case 330104:
    {
        returnValue = F("Weidenhartstr.");
        break;
    }
    case 330105:
    {
        returnValue = F("Weidenhausen");
        break;
    }
    case 330106:
    {
        returnValue = F("Weidenhecke");
        break;
    }
    case 330107:
    {
        returnValue = F("Weidenheckerweg");
        break;
    }
    case 330108:
    {
        returnValue = F("Weidenhillerstr.");
        break;
    }
    case 330109:
    {
        returnValue = F("Weidenhof");
        break;
    }
    case 330110:
    {
        returnValue = F("Weidenhofweg");
        break;
    }
    case 330111:
    {
        returnValue = F("Weidenhohl");
        break;
    }
    case 330112:
    {
        returnValue = F("Weidenhorst");
        break;
    }
    case 330113:
    {
        returnValue = F("Weidenhäuser Brücke");
        break;
    }
    case 330114:
    {
        returnValue = F("Weidenhäuser Str.");
        break;
    }
    case 330115:
    {
        returnValue = F("Weidenhäuser Weg");
        break;
    }
    case 330116:
    {
        returnValue = F("Weidenhöhe");
        break;
    }
    case 330117:
    {
        returnValue = F("Weidenhövel");
        break;
    }
    case 330118:
    {
        returnValue = F("Weidenhüll bei Elbersberg");
        break;
    }
    case 330119:
    {
        returnValue = F("Weidenhüller Weg");
        break;
    }
    case 330120:
    {
        returnValue = F("Weidenkamp");
        break;
    }
    case 330121:
    {
        returnValue = F("Weidenkampstr.");
        break;
    }
    case 330122:
    {
        returnValue = F("Weidenkappele");
        break;
    }
    case 330123:
    {
        returnValue = F("Weidenkopf");
        break;
    }
    case 330124:
    {
        returnValue = F("Weidenkorbstieg");
        break;
    }
    case 330125:
    {
        returnValue = F("Weidenkätzchenweg");
        break;
    }
    case 330126:
    {
        returnValue = F("Weidenlehen");
        break;
    }
    case 330127:
    {
        returnValue = F("Weidenleite");
        break;
    }
    case 330128:
    {
        returnValue = F("Weidenloher Weg");
        break;
    }
    case 330129:
    {
        returnValue = F("Weidenlohestr.");
        break;
    }
    case 330130:
    {
        returnValue = F("Weidenloheweg");
        break;
    }
    case 330131:
    {
        returnValue = F("Weidenlohstr.");
        break;
    }
    case 330132:
    {
        returnValue = F("Weidenmattenstr.");
        break;
    }
    case 330133:
    {
        returnValue = F("Weidenmattweg");
        break;
    }
    case 330134:
    {
        returnValue = F("Weidenmühle");
        break;
    }
    case 330135:
    {
        returnValue = F("Weidenpalast Vauban");
        break;
    }
    case 330136:
    {
        returnValue = F("Weidenpark");
        break;
    }
    case 330137:
    {
        returnValue = F("Weidenpesch");
        break;
    }
    case 330138:
    {
        returnValue = F("Weidenpescher Str.");
        break;
    }
    case 330139:
    {
        returnValue = F("Weidenpeschstr.");
        break;
    }
    case 330140:
    {
        returnValue = F("Weidenpeschweg");
        break;
    }
    case 330141:
    {
        returnValue = F("Weidenpfad");
        break;
    }
    case 330142:
    {
        returnValue = F("Weidenpfuhlweg");
        break;
    }
    case 330143:
    {
        returnValue = F("Weidenplan");
        break;
    }
    case 330144:
    {
        returnValue = F("Weidenplatz");
        break;
    }
    case 330145:
    {
        returnValue = F("Weidenrade");
        break;
    }
    case 330146:
    {
        returnValue = F("Weidenrain");
        break;
    }
    case 330147:
    {
        returnValue = F("Weidenrebe");
        break;
    }
    case 330148:
    {
        returnValue = F("Weidenredder");
        break;
    }
    case 330149:
    {
        returnValue = F("Weidenring");
        break;
    }
    case 330150:
    {
        returnValue = F("Weidenröschenweg");
        break;
    }
    case 330151:
    {
        returnValue = F("Weidensdorfer Str.");
        break;
    }
    case 330152:
    {
        returnValue = F("Weidensee");
        break;
    }
    case 330153:
    {
        returnValue = F("Weidenseer Weg");
        break;
    }
    case 330154:
    {
        returnValue = F("Weidenseeser Weg");
        break;
    }
    case 330155:
    {
        returnValue = F("Weidenseestr.");
        break;
    }
    case 330156:
    {
        returnValue = F("Weidensiek");
        break;
    }
    case 330157:
    {
        returnValue = F("Weidensoll");
        break;
    }
    case 330158:
    {
        returnValue = F("Weidensolweg");
        break;
    }
    case 330159:
    {
        returnValue = F("Weidenstamm");
        break;
    }
    case 330160:
    {
        returnValue = F("Weidensteg");
        break;
    }
    case 330161:
    {
        returnValue = F("Weidensteig");
        break;
    }
    case 330162:
    {
        returnValue = F("Weidensteige");
        break;
    }
    case 330163:
    {
        returnValue = F("Weidenstetter Weg");
        break;
    }
    case 330164:
    {
        returnValue = F("Weidenstieg");
        break;
    }
    case 330165:
    {
        returnValue = F("Weidenstiege");
        break;
    }
    case 330166:
    {
        returnValue = F("Weidenstock");
        break;
    }
    case 330167:
    {
        returnValue = F("Weidenstr.");
        break;
    }
    case 330168:
    {
        returnValue = F("Weidenstrauch");
        break;
    }
    case 330169:
    {
        returnValue = F("Weidenstrauchweg");
        break;
    }
    case 330170:
    {
        returnValue = F("Weidenstraßweg");
        break;
    }
    case 330171:
    {
        returnValue = F("Weidenstämme");
        break;
    }
    case 330172:
    {
        returnValue = F("Weidenstück");
        break;
    }
    case 330173:
    {
        returnValue = F("Weidentaler Str.");
        break;
    }
    case 330174:
    {
        returnValue = F("Weidentalstr.");
        break;
    }
    case 330175:
    {
        returnValue = F("Weidenteilung");
        break;
    }
    case 330176:
    {
        returnValue = F("Weidenthal");
        break;
    }
    case 330177:
    {
        returnValue = F("Weidenthaler Hohl");
        break;
    }
    case 330178:
    {
        returnValue = F("Weidentrift");
        break;
    }
    case 330179:
    {
        returnValue = F("Weidenufer");
        break;
    }
    case 330180:
    {
        returnValue = F("Weidenwang A");
        break;
    }
    case 330181:
    {
        returnValue = F("Weidenwang B");
        break;
    }
    case 330182:
    {
        returnValue = F("Weidenwang C");
        break;
    }
    case 330183:
    {
        returnValue = F("Weidenwang D");
        break;
    }
    case 330184:
    {
        returnValue = F("Weidenwang E");
        break;
    }
    case 330185:
    {
        returnValue = F("Weidenwang F");
        break;
    }
    case 330186:
    {
        returnValue = F("Weidenwang G");
        break;
    }
    case 330187:
    {
        returnValue = F("Weidenwang H");
        break;
    }
    case 330188:
    {
        returnValue = F("Weidenwang K");
        break;
    }
    case 330189:
    {
        returnValue = F("Weidenweg");
        break;
    }
    case 330190:
    {
        returnValue = F("Weidenwiesen");
        break;
    }
    case 330191:
    {
        returnValue = F("Weidenwinkel");
        break;
    }
    case 330192:
    {
        returnValue = F("Weidenäcker");
        break;
    }
    case 330193:
    {
        returnValue = F("Weidenäckerstr.");
        break;
    }
    case 330194:
    {
        returnValue = F("Weidenäckerweg");
        break;
    }
    case 330195:
    {
        returnValue = F("Weidepadd");
        break;
    }
    case 330196:
    {
        returnValue = F("Weidepark");
        break;
    }
    case 330197:
    {
        returnValue = F("Weidepatt");
        break;
    }
    case 330198:
    {
        returnValue = F("Weideplatz");
        break;
    }
    case 330199:
    {
        returnValue = F("Weider Höhe");
        break;
    }
    case 330200:
    {
        returnValue = F("Weider Str.");
        break;
    }
    case 330201:
    {
        returnValue = F("Weider Weg");
        break;
    }
    case 330202:
    {
        returnValue = F("Weiderbaum");
        break;
    }
    case 330203:
    {
        returnValue = F("Weiderehre");
        break;
    }
    case 330204:
    {
        returnValue = F("Weiderichstr.");
        break;
    }
    case 330205:
    {
        returnValue = F("Weidering");
        break;
    }
    case 330206:
    {
        returnValue = F("Weiderodaer Weg");
        break;
    }
    case 330207:
    {
        returnValue = F("Weidersberg");
        break;
    }
    case 330208:
    {
        returnValue = F("Weidertsweg");
        break;
    }
    case 330209:
    {
        returnValue = F("Weiderweg");
        break;
    }
    case 330210:
    {
        returnValue = F("Weidesbach");
        break;
    }
    case 330211:
    {
        returnValue = F("Weidesgrün");
        break;
    }
    case 330212:
    {
        returnValue = F("Weidesheimer Str.");
        break;
    }
    case 330213:
    {
        returnValue = F("Weidestr.");
        break;
    }
    case 330214:
    {
        returnValue = F("Weidet");
        break;
    }
    case 330215:
    {
        returnValue = F("Weideweg");
        break;
    }
    case 330216:
    {
        returnValue = F("Weideweg I");
        break;
    }
    case 330217:
    {
        returnValue = F("Weideweg II");
        break;
    }
    case 330218:
    {
        returnValue = F("Weidfeld Schneise");
        break;
    }
    case 330219:
    {
        returnValue = F("Weidfeldstr.");
        break;
    }
    case 330220:
    {
        returnValue = F("Weidfeldsweg");
        break;
    }
    case 330221:
    {
        returnValue = F("Weidflächenweg");
        break;
    }
    case 330222:
    {
        returnValue = F("Weidgang");
        break;
    }
    case 330223:
    {
        returnValue = F("Weidgarten");
        break;
    }
    case 330224:
    {
        returnValue = F("Weidgasse");
        break;
    }
    case 330225:
    {
        returnValue = F("Weidgenstr.");
        break;
    }
    case 330226:
    {
        returnValue = F("Weidgenweg");
        break;
    }
    case 330227:
    {
        returnValue = F("Weidgraben");
        break;
    }
    case 330228:
    {
        returnValue = F("Weidhalde");
        break;
    }
    case 330229:
    {
        returnValue = F("Weidhausstr.");
        break;
    }
    case 330230:
    {
        returnValue = F("Weidhellweg");
        break;
    }
    case 330231:
    {
        returnValue = F("Weidhof");
        break;
    }
    case 330232:
    {
        returnValue = F("Weidhäuser Höhe");
        break;
    }
    case 330233:
    {
        returnValue = F("Weidhäuser Str.");
        break;
    }
    case 330234:
    {
        returnValue = F("Weidichstr.");
        break;
    }
    case 330235:
    {
        returnValue = F("Weidicht");
        break;
    }
    case 330236:
    {
        returnValue = F("Weidig");
        break;
    }
    case 330237:
    {
        returnValue = F("Weidig-Schneise");
        break;
    }
    case 330238:
    {
        returnValue = F("Weidiger Weg");
        break;
    }
    case 330239:
    {
        returnValue = F("Weidigstr.");
        break;
    }
    case 330240:
    {
        returnValue = F("Weidigsweg");
        break;
    }
    case 330241:
    {
        returnValue = F("Weidigt");
        break;
    }
    case 330242:
    {
        returnValue = F("Weidigtweg");
        break;
    }
    case 330243:
    {
        returnValue = F("Weidigweg");
        break;
    }
    case 330244:
    {
        returnValue = F("Weiding");
        break;
    }
    case 330245:
    {
        returnValue = F("Weidinger Str.");
        break;
    }
    case 330246:
    {
        returnValue = F("Weidingerring");
        break;
    }
    case 330247:
    {
        returnValue = F("Weidingerstr.");
        break;
    }
    case 330248:
    {
        returnValue = F("Weidingweg");
        break;
    }
    case 330249:
    {
        returnValue = F("Weidkamp");
        break;
    }
    case 330250:
    {
        returnValue = F("Weidkämpe");
        break;
    }
    case 330251:
    {
        returnValue = F("Weidle");
        break;
    }
    case 330252:
    {
        returnValue = F("Weidleinsgraben");
        break;
    }
    case 330253:
    {
        returnValue = F("Weidleinsweg");
        break;
    }
    case 330254:
    {
        returnValue = F("Weidleite");
        break;
    }
    case 330255:
    {
        returnValue = F("Weidlenstr.");
        break;
    }
    case 330256:
    {
        returnValue = F("Weidlenweg");
        break;
    }
    case 330257:
    {
        returnValue = F("Weidlestr.");
        break;
    }
    case 330258:
    {
        returnValue = F("Weidlesweg");
        break;
    }
    case 330259:
    {
        returnValue = F("Weidleweg");
        break;
    }
    case 330260:
    {
        returnValue = F("Weidlingstr.");
        break;
    }
    case 330261:
    {
        returnValue = F("Weidloh");
        break;
    }
    case 330262:
    {
        returnValue = F("Weidlstr.");
        break;
    }
    case 330263:
    {
        returnValue = F("Weidlweg");
        break;
    }
    case 330264:
    {
        returnValue = F("Weidmannsgasse");
        break;
    }
    case 330265:
    {
        returnValue = F("Weidmannsgesees");
        break;
    }
    case 330266:
    {
        returnValue = F("Weidmannsheil");
        break;
    }
    case 330267:
    {
        returnValue = F("Weidmannsheim");
        break;
    }
    case 330268:
    {
        returnValue = F("Weidmannshöhe");
        break;
    }
    case 330269:
    {
        returnValue = F("Weidmannspfad");
        break;
    }
    case 330270:
    {
        returnValue = F("Weidmannsruh");
        break;
    }
    case 330271:
    {
        returnValue = F("Weidmannsruher Str.");
        break;
    }
    case 330272:
    {
        returnValue = F("Weidmannstr.");
        break;
    }
    case 330273:
    {
        returnValue = F("Weidmannsweg");
        break;
    }
    case 330274:
    {
        returnValue = F("Weidmannweg");
        break;
    }
    case 330275:
    {
        returnValue = F("Weidmattenstr.");
        break;
    }
    case 330276:
    {
        returnValue = F("Weidmes");
        break;
    }
    case 330277:
    {
        returnValue = F("Weidmichelesweg");
        break;
    }
    case 330278:
    {
        returnValue = F("Weidmoosweg");
        break;
    }
    case 330279:
    {
        returnValue = F("Weidmühlenstr.");
        break;
    }
    case 330280:
    {
        returnValue = F("Weidmühlenweg");
        break;
    }
    case 330281:
    {
        returnValue = F("Weidnerstr.");
        break;
    }
    case 330282:
    {
        returnValue = F("Weidnitzer Str.");
        break;
    }
    case 330283:
    {
        returnValue = F("Weidnitzer Weg");
        break;
    }
    case 330284:
    {
        returnValue = F("Weidorfer Weg");
        break;
    }
    case 330285:
    {
        returnValue = F("Weidplatz");
        break;
    }
    case 330286:
    {
        returnValue = F("Weidrichstr.");
        break;
    }
    case 330287:
    {
        returnValue = F("Weidsee-Schneise");
        break;
    }
    case 330288:
    {
        returnValue = F("Weidstr.");
        break;
    }
    case 330289:
    {
        returnValue = F("Weidstückenweg");
        break;
    }
    case 330290:
    {
        returnValue = F("Weidstückerstr.");
        break;
    }
    case 330291:
    {
        returnValue = F("Weidt");
        break;
    }
    case 330292:
    {
        returnValue = F("Weidtmannweg");
        break;
    }
    case 330293:
    {
        returnValue = F("Weidtmanstr.");
        break;
    }
    case 330294:
    {
        returnValue = F("Weidtstr.");
        break;
    }
    case 330295:
    {
        returnValue = F("Weidwall");
        break;
    }
    case 330296:
    {
        returnValue = F("Weidweg");
        break;
    }
    case 330297:
    {
        returnValue = F("Weidwiese");
        break;
    }
    case 330298:
    {
        returnValue = F("Weidwiesenweg");
        break;
    }
    case 330299:
    {
        returnValue = F("Weidwiesweg");
        break;
    }
    case 330300:
    {
        returnValue = F("Weidäcker");
        break;
    }
    case 330301:
    {
        returnValue = F("Weienhard");
        break;
    }
    case 330302:
    {
        returnValue = F("Weierbacher Str.");
        break;
    }
    case 330303:
    {
        returnValue = F("Weierbacher Weg");
        break;
    }
    case 330304:
    {
        returnValue = F("Weierbachstr.");
        break;
    }
    case 330305:
    {
        returnValue = F("Weierberg");
        break;
    }
    case 330306:
    {
        returnValue = F("Weierbergstr.");
        break;
    }
    case 330307:
    {
        returnValue = F("Weierbornstr.");
        break;
    }
    case 330308:
    {
        returnValue = F("Weierbächle");
        break;
    }
    case 330309:
    {
        returnValue = F("Weiereckleweg");
        break;
    }
    case 330310:
    {
        returnValue = F("Weierer Str.");
        break;
    }
    case 330311:
    {
        returnValue = F("Weierfeld");
        break;
    }
    case 330312:
    {
        returnValue = F("Weiergarten");
        break;
    }
    case 330313:
    {
        returnValue = F("Weiergartenweg");
        break;
    }
    case 330314:
    {
        returnValue = F("Weiergrund");
        break;
    }
    case 330315:
    {
        returnValue = F("Weierhalden");
        break;
    }
    case 330316:
    {
        returnValue = F("Weierhardt");
        break;
    }
    case 330317:
    {
        returnValue = F("Weierhof");
        break;
    }
    case 330318:
    {
        returnValue = F("Weierhofweg");
        break;
    }
    case 330319:
    {
        returnValue = F("Weierkopf");
        break;
    }
    case 330320:
    {
        returnValue = F("Weierleweg");
        break;
    }
    case 330321:
    {
        returnValue = F("Weiermannsbuschweg");
        break;
    }
    case 330322:
    {
        returnValue = F("Weiermatt");
        break;
    }
    case 330323:
    {
        returnValue = F("Weiermatten");
        break;
    }
    case 330324:
    {
        returnValue = F("Weiermattstr.");
        break;
    }
    case 330325:
    {
        returnValue = F("Weiermühle");
        break;
    }
    case 330326:
    {
        returnValue = F("Weiern");
        break;
    }
    case 330327:
    {
        returnValue = F("Weiers Wiesen");
        break;
    }
    case 330328:
    {
        returnValue = F("Weiersgärten");
        break;
    }
    case 330329:
    {
        returnValue = F("Weiershagener Str.");
        break;
    }
    case 330330:
    {
        returnValue = F("Weiershäuser Str.");
        break;
    }
    case 330331:
    {
        returnValue = F("Weierskamp");
        break;
    }
    case 330332:
    {
        returnValue = F("Weierstadt");
        break;
    }
    case 330333:
    {
        returnValue = F("Weierstall");
        break;
    }
    case 330334:
    {
        returnValue = F("Weiersteinstr.");
        break;
    }
    case 330335:
    {
        returnValue = F("Weierstr.");
        break;
    }
    case 330336:
    {
        returnValue = F("Weierstraßweg");
        break;
    }
    case 330337:
    {
        returnValue = F("Weiersweg");
        break;
    }
    case 330338:
    {
        returnValue = F("Weierswies");
        break;
    }
    case 330339:
    {
        returnValue = F("Weierswiese");
        break;
    }
    case 330340:
    {
        returnValue = F("Weierter Str.");
        break;
    }
    case 330341:
    {
        returnValue = F("Weierwaldstr.");
        break;
    }
    case 330342:
    {
        returnValue = F("Weierweg");
        break;
    }
    case 330343:
    {
        returnValue = F("Weierwies");
        break;
    }
    case 330344:
    {
        returnValue = F("Weieräcker");
        break;
    }
    case 330345:
    {
        returnValue = F("Weifaer Str.");
        break;
    }
    case 330346:
    {
        returnValue = F("Weifaer Weg");
        break;
    }
    case 330347:
    {
        returnValue = F("Weifbergstr.");
        break;
    }
    case 330348:
    {
        returnValue = F("Weifeldweg");
        break;
    }
    case 330349:
    {
        returnValue = F("Weifenbacher Weg");
        break;
    }
    case 330350:
    {
        returnValue = F("Weiferei");
        break;
    }
    case 330351:
    {
        returnValue = F("Weifert-Janz-Str.");
        break;
    }
    case 330352:
    {
        returnValue = F("Weiferweg");
        break;
    }
    case 330353:
    {
        returnValue = F("Weigandstr.");
        break;
    }
    case 330354:
    {
        returnValue = F("Weigandtweg");
        break;
    }
    case 330355:
    {
        returnValue = F("Weigandweg");
        break;
    }
    case 330356:
    {
        returnValue = F("Weigangstr.");
        break;
    }
    case 330357:
    {
        returnValue = F("Weigelienhof");
        break;
    }
    case 330358:
    {
        returnValue = F("Weigeliweg");
        break;
    }
    case 330359:
    {
        returnValue = F("Weigels");
        break;
    }
    case 330360:
    {
        returnValue = F("Weigelstr.");
        break;
    }
    case 330361:
    {
        returnValue = F("Weigeltweg");
        break;
    }
    case 330362:
    {
        returnValue = F("Weigendorfer Str.");
        break;
    }
    case 330363:
    {
        returnValue = F("Weigenhofener Hauptstr.");
        break;
    }
    case 330364:
    {
        returnValue = F("Weigensdorf");
        break;
    }
    case 330365:
    {
        returnValue = F("Weigental");
        break;
    }
    case 330366:
    {
        returnValue = F("Weiger-Guardini-Str.");
        break;
    }
    case 330367:
    {
        returnValue = F("Weigheimer Str.");
        break;
    }
    case 330368:
    {
        returnValue = F("Weigheimer Weg");
        break;
    }
    case 330369:
    {
        returnValue = F("Weiglberg");
        break;
    }
    case 330370:
    {
        returnValue = F("Weiglestr.");
        break;
    }
    case 330371:
    {
        returnValue = F("Weiglgasse");
        break;
    }
    case 330372:
    {
        returnValue = F("Weiglstr.");
        break;
    }
    case 330373:
    {
        returnValue = F("Weigmannstr.");
        break;
    }
    case 330374:
    {
        returnValue = F("Weigoldsbergstr.");
        break;
    }
    case 330375:
    {
        returnValue = F("Weigsdorfer Berg");
        break;
    }
    case 330376:
    {
        returnValue = F("Weihagen");
        break;
    }
    case 330377:
    {
        returnValue = F("Weihanger");
        break;
    }
    case 330378:
    {
        returnValue = F("Weihbach");
        break;
    }
    case 330379:
    {
        returnValue = F("Weihbachstr.");
        break;
    }
    case 330380:
    {
        returnValue = F("Weihberg");
        break;
    }
    case 330381:
    {
        returnValue = F("Weihbergstr.");
        break;
    }
    case 330382:
    {
        returnValue = F("Weihbergweg");
        break;
    }
    case 330383:
    {
        returnValue = F("Weihbett");
        break;
    }
    case 330384:
    {
        returnValue = F("Weihbischof-Defregger-Str.");
        break;
    }
    case 330385:
    {
        returnValue = F("Weihbornstr.");
        break;
    }
    case 330386:
    {
        returnValue = F("Weihburgweg");
        break;
    }
    case 330387:
    {
        returnValue = F("Weihdorfer Str.");
        break;
    }
    case 330388:
    {
        returnValue = F("Weihe");
        break;
    }
    case 330389:
    {
        returnValue = F("Weihecke");
        break;
    }
    case 330390:
    {
        returnValue = F("Weihenbronner Landstr.");
        break;
    }
    case 330391:
    {
        returnValue = F("Weihenbronner Str.");
        break;
    }
    case 330392:
    {
        returnValue = F("Weihenbrunnenweg");
        break;
    }
    case 330393:
    {
        returnValue = F("Weihengang");
        break;
    }
    case 330394:
    {
        returnValue = F("Weihengäßle");
        break;
    }
    case 330395:
    {
        returnValue = F("Weihenlindener Str.");
        break;
    }
    case 330396:
    {
        returnValue = F("Weihenloherstr.");
        break;
    }
    case 330397:
    {
        returnValue = F("Weihensteg");
        break;
    }
    case 330398:
    {
        returnValue = F("Weihenstephaner Berg");
        break;
    }
    case 330399:
    {
        returnValue = F("Weihenstephaner Fußweg");
        break;
    }
    case 330400:
    {
        returnValue = F("Weihenstephaner Ring");
        break;
    }
    case 330401:
    {
        returnValue = F("Weihenstephaner Steig");
        break;
    }
    case 330402:
    {
        returnValue = F("Weihenstephaner Str.");
        break;
    }
    case 330403:
    {
        returnValue = F("Weihenstieg");
        break;
    }
    case 330404:
    {
        returnValue = F("Weihenstr.");
        break;
    }
    case 330405:
    {
        returnValue = F("Weihentalstr.");
        break;
    }
    case 330406:
    {
        returnValue = F("Weihenweg");
        break;
    }
    case 330407:
    {
        returnValue = F("Weihenwiesenweg");
        break;
    }
    case 330408:
    {
        returnValue = F("Weiher");
        break;
    }
    case 330409:
    {
        returnValue = F("Weiher Str.");
        break;
    }
    case 330410:
    {
        returnValue = F("Weiher Tor");
        break;
    }
    case 330411:
    {
        returnValue = F("Weiher Weg");
        break;
    }
    case 330412:
    {
        returnValue = F("Weiher Wegle");
        break;
    }
    case 330413:
    {
        returnValue = F("Weiher-Geräumt");
        break;
    }
    case 330414:
    {
        returnValue = F("Weiher-Passage");
        break;
    }
    case 330415:
    {
        returnValue = F("Weiher-Winkl-Weg");
        break;
    }
    case 330416:
    {
        returnValue = F("Weiheracker");
        break;
    }
    case 330417:
    {
        returnValue = F("Weiherackerweg");
        break;
    }
    case 330418:
    {
        returnValue = F("Weiherallee");
        break;
    }
    case 330419:
    {
        returnValue = F("Weiheranger");
        break;
    }
    case 330420:
    {
        returnValue = F("Weiherau");
        break;
    }
    case 330421:
    {
        returnValue = F("Weiherbach");
        break;
    }
    case 330422:
    {
        returnValue = F("Weiherbach Str.");
        break;
    }
    case 330423:
    {
        returnValue = F("Weiherbachstr.");
        break;
    }
    case 330424:
    {
        returnValue = F("Weiherbachweg");
        break;
    }
    case 330425:
    {
        returnValue = F("Weiherbenden");
        break;
    }
    case 330426:
    {
        returnValue = F("Weiherberg");
        break;
    }
    case 330427:
    {
        returnValue = F("Weiherbergstr.");
        break;
    }
    case 330428:
    {
        returnValue = F("Weiherbergweg");
        break;
    }
    case 330429:
    {
        returnValue = F("Weiherblick");
        break;
    }
    case 330430:
    {
        returnValue = F("Weiherborn");
        break;
    }
    case 330431:
    {
        returnValue = F("Weiherbornsgraben");
        break;
    }
    case 330432:
    {
        returnValue = F("Weiherbornstr.");
        break;
    }
    case 330433:
    {
        returnValue = F("Weiherbreiten");
        break;
    }
    case 330434:
    {
        returnValue = F("Weiherbrunnenstr.");
        break;
    }
    case 330435:
    {
        returnValue = F("Weiherbuck");
        break;
    }
    case 330436:
    {
        returnValue = F("Weiherbuckel");
        break;
    }
    case 330437:
    {
        returnValue = F("Weiherbuckweg");
        break;
    }
    case 330438:
    {
        returnValue = F("Weiherbühl");
        break;
    }
    case 330439:
    {
        returnValue = F("Weiherbünd");
        break;
    }
    case 330440:
    {
        returnValue = F("Weiherdamm");
        break;
    }
    case 330441:
    {
        returnValue = F("Weiherdammstr.");
        break;
    }
    case 330442:
    {
        returnValue = F("Weiherdobel");
        break;
    }
    case 330443:
    {
        returnValue = F("Weiherdorf");
        break;
    }
    case 330444:
    {
        returnValue = F("Weihereckstr.");
        break;
    }
    case 330445:
    {
        returnValue = F("Weiherer Hauptstr.");
        break;
    }
    case 330446:
    {
        returnValue = F("Weiherer Str.");
        break;
    }
    case 330447:
    {
        returnValue = F("Weiherer Weg");
        break;
    }
    case 330448:
    {
        returnValue = F("Weihererweg");
        break;
    }
    case 330449:
    {
        returnValue = F("Weiheresch");
        break;
    }
    case 330450:
    {
        returnValue = F("Weiherfeld");
        break;
    }
    case 330451:
    {
        returnValue = F("Weiherfeldallee");
        break;
    }
    case 330452:
    {
        returnValue = F("Weiherfeldbrücke");
        break;
    }
    case 330453:
    {
        returnValue = F("Weiherfeldchen");
        break;
    }
    case 330454:
    {
        returnValue = F("Weiherfeldring");
        break;
    }
    case 330455:
    {
        returnValue = F("Weiherfeldsiedlung");
        break;
    }
    case 330456:
    {
        returnValue = F("Weiherfeldstr.");
        break;
    }
    case 330457:
    {
        returnValue = F("Weiherfelsenweg");
        break;
    }
    case 330458:
    {
        returnValue = F("Weiherfloß");
        break;
    }
    case 330459:
    {
        returnValue = F("Weiherfurt");
        break;
    }
    case 330460:
    {
        returnValue = F("Weiherfurtweg");
        break;
    }
    case 330461:
    {
        returnValue = F("Weihergarten");
        break;
    }
    case 330462:
    {
        returnValue = F("Weihergartenstr.");
        break;
    }
    case 330463:
    {
        returnValue = F("Weihergasse");
        break;
    }
    case 330464:
    {
        returnValue = F("Weihergaßweg");
        break;
    }
    case 330465:
    {
        returnValue = F("Weihergraben");
        break;
    }
    case 330466:
    {
        returnValue = F("Weihergrundstr.");
        break;
    }
    case 330467:
    {
        returnValue = F("Weihergutstr.");
        break;
    }
    case 330468:
    {
        returnValue = F("Weihergärten");
        break;
    }
    case 330469:
    {
        returnValue = F("Weihergärtenweg");
        break;
    }
    case 330470:
    {
        returnValue = F("Weihergärtle");
        break;
    }
    case 330471:
    {
        returnValue = F("Weihergässlein");
        break;
    }
    case 330472:
    {
        returnValue = F("Weihergäßchen");
        break;
    }
    case 330473:
    {
        returnValue = F("Weihergäßel");
        break;
    }
    case 330474:
    {
        returnValue = F("Weiherhagstr.");
        break;
    }
    case 330475:
    {
        returnValue = F("Weiherhalde");
        break;
    }
    case 330476:
    {
        returnValue = F("Weiherhaldenstr.");
        break;
    }
    case 330477:
    {
        returnValue = F("Weiherhaldenweg");
        break;
    }
    case 330478:
    {
        returnValue = F("Weiherhaldestr.");
        break;
    }
    case 330479:
    {
        returnValue = F("Weiherhaldesträßchen");
        break;
    }
    case 330480:
    {
        returnValue = F("Weiherhaldeweg");
        break;
    }
    case 330481:
    {
        returnValue = F("Weiherhammerstr.");
        break;
    }
    case 330482:
    {
        returnValue = F("Weiherhaus");
        break;
    }
    case 330483:
    {
        returnValue = F("Weiherhauserweg");
        break;
    }
    case 330484:
    {
        returnValue = F("Weiherhausstr.");
        break;
    }
    case 330485:
    {
        returnValue = F("Weiherhausweg");
        break;
    }
    case 330486:
    {
        returnValue = F("Weiherheck");
        break;
    }
    case 330487:
    {
        returnValue = F("Weiherhof");
        break;
    }
    case 330488:
    {
        returnValue = F("Weiherhofer Hauptstr.");
        break;
    }
    case 330489:
    {
        returnValue = F("Weiherhofer Str.");
        break;
    }
    case 330490:
    {
        returnValue = F("Weiherhofstr.");
        break;
    }
    case 330491:
    {
        returnValue = F("Weiherhofweg");
        break;
    }
    case 330492:
    {
        returnValue = F("Weiherholzallee");
        break;
    }
    case 330493:
    {
        returnValue = F("Weiherholzstr.");
        break;
    }
    case 330494:
    {
        returnValue = F("Weiherhäuschen");
        break;
    }
    case 330495:
    {
        returnValue = F("Weiherhäuser");
        break;
    }
    case 330496:
    {
        returnValue = F("Weiherkopfstr.");
        break;
    }
    case 330497:
    {
        returnValue = F("Weiherkopfweg");
        break;
    }
    case 330498:
    {
        returnValue = F("Weiherkreuzstr.");
        break;
    }
    case 330499:
    {
        returnValue = F("Weiherköpfchenweg");
        break;
    }
    case 330500:
    {
        returnValue = F("Weiherle");
        break;
    }
    case 330501:
    {
        returnValue = F("Weiherleite");
        break;
    }
    case 330502:
    {
        returnValue = F("Weiherleiten");
        break;
    }
    case 330503:
    {
        returnValue = F("Weiherles-Weg");
        break;
    }
    case 330504:
    {
        returnValue = F("Weiherlesweg");
        break;
    }
    case 330505:
    {
        returnValue = F("Weiherleweg");
        break;
    }
    case 330506:
    {
        returnValue = F("Weiherlohstr.");
        break;
    }
    case 330507:
    {
        returnValue = F("Weihermahd");
        break;
    }
    case 330508:
    {
        returnValue = F("Weihermahdstr.");
        break;
    }
    case 330509:
    {
        returnValue = F("Weihermatt");
        break;
    }
    case 330510:
    {
        returnValue = F("Weihermatte");
        break;
    }
    case 330511:
    {
        returnValue = F("Weihermatten");
        break;
    }
    case 330512:
    {
        returnValue = F("Weihermattenweg");
        break;
    }
    case 330513:
    {
        returnValue = F("Weihermattstr.");
        break;
    }
    case 330514:
    {
        returnValue = F("Weihermoos");
        break;
    }
    case 330515:
    {
        returnValue = F("Weihermoosweg");
        break;
    }
    case 330516:
    {
        returnValue = F("Weihermähderstr.");
        break;
    }
    case 330517:
    {
        returnValue = F("Weihermättleweg");
        break;
    }
    case 330518:
    {
        returnValue = F("Weihermühle");
        break;
    }
    case 330519:
    {
        returnValue = F("Weihermühler Weg");
        break;
    }
    case 330520:
    {
        returnValue = F("Weihermühleweg");
        break;
    }
    case 330521:
    {
        returnValue = F("Weihermühlstr.");
        break;
    }
    case 330522:
    {
        returnValue = F("Weihermühlweg");
        break;
    }
    case 330523:
    {
        returnValue = F("Weihern");
        break;
    }
    case 330524:
    {
        returnValue = F("Weiherner Weg");
        break;
    }
    case 330525:
    {
        returnValue = F("Weihernstr.");
        break;
    }
    case 330526:
    {
        returnValue = F("Weihernweg");
        break;
    }
    case 330527:
    {
        returnValue = F("Weiherpark");
        break;
    }
    case 330528:
    {
        returnValue = F("Weiherpfad");
        break;
    }
    case 330529:
    {
        returnValue = F("Weiherplatz");
        break;
    }
    case 330530:
    {
        returnValue = F("Weiherplatzweg");
        break;
    }
    case 330531:
    {
        returnValue = F("Weiherrain");
        break;
    }
    case 330532:
    {
        returnValue = F("Weihers");
        break;
    }
    case 330533:
    {
        returnValue = F("Weihersbach");
        break;
    }
    case 330534:
    {
        returnValue = F("Weihersbachweg");
        break;
    }
    case 330535:
    {
        returnValue = F("Weihersberg");
        break;
    }
    case 330536:
    {
        returnValue = F("Weihersbergstr.");
        break;
    }
    case 330537:
    {
        returnValue = F("Weihersborn");
        break;
    }
    case 330538:
    {
        returnValue = F("Weihersbrunnenstr.");
        break;
    }
    case 330539:
    {
        returnValue = F("Weihersbrunnenweg");
        break;
    }
    case 330540:
    {
        returnValue = F("Weiherschlagallee");
        break;
    }
    case 330541:
    {
        returnValue = F("Weiherschlagweg");
        break;
    }
    case 330542:
    {
        returnValue = F("Weiherschlauch");
        break;
    }
    case 330543:
    {
        returnValue = F("Weiherschleife");
        break;
    }
    case 330544:
    {
        returnValue = F("Weiherschneise");
        break;
    }
    case 330545:
    {
        returnValue = F("Weihersdorfer Hauptstr.");
        break;
    }
    case 330546:
    {
        returnValue = F("Weiherseifenweg");
        break;
    }
    case 330547:
    {
        returnValue = F("Weiherser Weg");
        break;
    }
    case 330548:
    {
        returnValue = F("Weihersfeld");
        break;
    }
    case 330549:
    {
        returnValue = F("Weihersgartenstr.");
        break;
    }
    case 330550:
    {
        returnValue = F("Weihersgasse");
        break;
    }
    case 330551:
    {
        returnValue = F("Weihersgrund");
        break;
    }
    case 330552:
    {
        returnValue = F("Weihersgärten");
        break;
    }
    case 330553:
    {
        returnValue = F("Weihershöfer Weg");
        break;
    }
    case 330554:
    {
        returnValue = F("Weihersiedlung");
        break;
    }
    case 330555:
    {
        returnValue = F("Weihersmühle");
        break;
    }
    case 330556:
    {
        returnValue = F("Weihersteg");
        break;
    }
    case 330557:
    {
        returnValue = F("Weihersteigstr.");
        break;
    }
    case 330558:
    {
        returnValue = F("Weiherstetten");
        break;
    }
    case 330559:
    {
        returnValue = F("Weiherstieg");
        break;
    }
    case 330560:
    {
        returnValue = F("Weiherstobelweg");
        break;
    }
    case 330561:
    {
        returnValue = F("Weiherstr.");
        break;
    }
    case 330562:
    {
        returnValue = F("Weihersweg");
        break;
    }
    case 330563:
    {
        returnValue = F("Weiherswiesenweg");
        break;
    }
    case 330564:
    {
        returnValue = F("Weihersäcker");
        break;
    }
    case 330565:
    {
        returnValue = F("Weihersäge");
        break;
    }
    case 330566:
    {
        returnValue = F("Weihertal");
        break;
    }
    case 330567:
    {
        returnValue = F("Weihertalstr.");
        break;
    }
    case 330568:
    {
        returnValue = F("Weihertalweg");
        break;
    }
    case 330569:
    {
        returnValue = F("Weihertobelstr.");
        break;
    }
    case 330570:
    {
        returnValue = F("Weihertorplatz");
        break;
    }
    case 330571:
    {
        returnValue = F("Weihertorstr.");
        break;
    }
    case 330572:
    {
        returnValue = F("Weiherwaldweg");
        break;
    }
    case 330573:
    {
        returnValue = F("Weiherwasen");
        break;
    }
    case 330574:
    {
        returnValue = F("Weiherwasenstr.");
        break;
    }
    case 330575:
    {
        returnValue = F("Weiherweg");
        break;
    }
    case 330576:
    {
        returnValue = F("Weiherwehr");
        break;
    }
    case 330577:
    {
        returnValue = F("Weiherwiese");
        break;
    }
    case 330578:
    {
        returnValue = F("Weiherwiesen");
        break;
    }
    case 330579:
    {
        returnValue = F("Weiherwiesenstr.");
        break;
    }
    case 330580:
    {
        returnValue = F("Weiherwiesenweg");
        break;
    }
    case 330581:
    {
        returnValue = F("Weiherwinkel");
        break;
    }
    case 330582:
    {
        returnValue = F("Weiherzant");
        break;
    }
    case 330583:
    {
        returnValue = F("Weiherzanter Weg");
        break;
    }
    case 330584:
    {
        returnValue = F("Weiheräcker");
        break;
    }
    case 330585:
    {
        returnValue = F("Weiheräckerstr.");
        break;
    }
    case 330586:
    {
        returnValue = F("Weiheräckerweg");
        break;
    }
    case 330587:
    {
        returnValue = F("Weihestr.");
        break;
    }
    case 330588:
    {
        returnValue = F("Weiheweg");
        break;
    }
    case 330589:
    {
        returnValue = F("Weihewinkel");
        break;
    }
    case 330590:
    {
        returnValue = F("Weihgartenstr.");
        break;
    }
    case 330591:
    {
        returnValue = F("Weihgasse");
        break;
    }
    case 330592:
    {
        returnValue = F("Weihgässchen");
        break;
    }
    case 330593:
    {
        returnValue = F("Weihinger Weg");
        break;
    }
    case 330594:
    {
        returnValue = F("Weihmannsried");
        break;
    }
    case 330595:
    {
        returnValue = F("Weihmättlesgrabenweg");
        break;
    }
    case 330596:
    {
        returnValue = F("Weihmühlstr.");
        break;
    }
    case 330597:
    {
        returnValue = F("Weihnachtsdorf");
        break;
    }
    case 330598:
    {
        returnValue = F("Weihnachtsfütterungsweg");
        break;
    }
    case 330599:
    {
        returnValue = F("Weihnachtsmannallee");
        break;
    }
    case 330600:
    {
        returnValue = F("Weihnachtsmannweg");
        break;
    }
    case 330601:
    {
        returnValue = F("Weihnachtswald");
        break;
    }
    case 330602:
    {
        returnValue = F("Weihrauchsberg");
        break;
    }
    case 330603:
    {
        returnValue = F("Weihregen");
        break;
    }
    case 330604:
    {
        returnValue = F("Weihreute");
        break;
    }
    case 330605:
    {
        returnValue = F("Weihrichweg");
        break;
    }
    case 330606:
    {
        returnValue = F("Weihungstr.");
        break;
    }
    case 330607:
    {
        returnValue = F("Weihwang");
        break;
    }
    case 330608:
    {
        returnValue = F("Weihwanger Str.");
        break;
    }
    case 330609:
    {
        returnValue = F("Weihwiesenweg");
        break;
    }
    case 330610:
    {
        returnValue = F("Weihäuslstr.");
        break;
    }
    case 330611:
    {
        returnValue = F("Weikamp");
        break;
    }
    case 330612:
    {
        returnValue = F("Weikamps Land");
        break;
    }
    case 330613:
    {
        returnValue = F("Weikenhammer");
        break;
    }
    case 330614:
    {
        returnValue = F("Weikenmühleweg");
        break;
    }
    case 330615:
    {
        returnValue = F("Weikenreuther Str.");
        break;
    }
    case 330616:
    {
        returnValue = F("Weikenrott");
        break;
    }
    case 330617:
    {
        returnValue = F("Weikenweg");
        break;
    }
    case 330618:
    {
        returnValue = F("Weikering");
        break;
    }
    case 330619:
    {
        returnValue = F("Weikersbergstr.");
        break;
    }
    case 330620:
    {
        returnValue = F("Weikersbergsträßle");
        break;
    }
    case 330621:
    {
        returnValue = F("Weikersdorf");
        break;
    }
    case 330622:
    {
        returnValue = F("Weikersheimer Str.");
        break;
    }
    case 330623:
    {
        returnValue = F("Weikershofer Str.");
        break;
    }
    case 330624:
    {
        returnValue = F("Weikerstetten");
        break;
    }
    case 330625:
    {
        returnValue = F("Weikersthalstr.");
        break;
    }
    case 330626:
    {
        returnValue = F("Weikertgasse");
        break;
    }
    case 330627:
    {
        returnValue = F("Weikertsblochstr.");
        break;
    }
    case 330628:
    {
        returnValue = F("Weikertsham");
        break;
    }
    case 330629:
    {
        returnValue = F("Weikertsteinstr.");
        break;
    }
    case 330630:
    {
        returnValue = F("Weikertswiesenstr.");
        break;
    }
    case 330631:
    {
        returnValue = F("Weiklesstr.");
        break;
    }
    case 330632:
    {
        returnValue = F("Weikselweg");
        break;
    }
    case 330633:
    {
        returnValue = F("Weil der Städter Str.");
        break;
    }
    case 330634:
    {
        returnValue = F("Weil der Städter Weg");
        break;
    }
    case 330635:
    {
        returnValue = F("Weilachstr.");
        break;
    }
    case 330636:
    {
        returnValue = F("Weiland");
        break;
    }
    case 330637:
    {
        returnValue = F("Weilandstr.");
        break;
    }
    case 330638:
    {
        returnValue = F("Weilatten");
        break;
    }
    case 330639:
    {
        returnValue = F("Weilautstr.");
        break;
    }
    case 330640:
    {
        returnValue = F("Weilbach");
        break;
    }
    case 330641:
    {
        returnValue = F("Weilbacher Str.");
        break;
    }
    case 330642:
    {
        returnValue = F("Weilbachstr.");
        break;
    }
    case 330643:
    {
        returnValue = F("Weilbachweg");
        break;
    }
    case 330644:
    {
        returnValue = F("Weilberg- Siedlung");
        break;
    }
    case 330645:
    {
        returnValue = F("Weilberg-Rundweg");
        break;
    }
    case 330646:
    {
        returnValue = F("Weilbergsiedlung");
        break;
    }
    case 330647:
    {
        returnValue = F("Weilbergstr.");
        break;
    }
    case 330648:
    {
        returnValue = F("Weilbergweg");
        break;
    }
    case 330649:
    {
        returnValue = F("Weilblick");
        break;
    }
    case 330650:
    {
        returnValue = F("Weilbornstr.");
        break;
    }
    case 330651:
    {
        returnValue = F("Weilbrock");
        break;
    }
    case 330652:
    {
        returnValue = F("Weilburger Grenze");
        break;
    }
    case 330653:
    {
        returnValue = F("Weilburger Str.");
        break;
    }
    case 330654:
    {
        returnValue = F("Weilburger Tal");
        break;
    }
    case 330655:
    {
        returnValue = F("Weilburger Weg");
        break;
    }
    case 330656:
    {
        returnValue = F("Weilderstädter Str.");
        break;
    }
    case 330657:
    {
        returnValue = F("Weildorf");
        break;
    }
    case 330658:
    {
        returnValue = F("Weildorfer Hardt");
        break;
    }
    case 330659:
    {
        returnValue = F("Weildorfer Kreuz");
        break;
    }
    case 330660:
    {
        returnValue = F("Weildorfer Str.");
        break;
    }
    case 330661:
    {
        returnValue = F("Weildorfweg");
        break;
    }
    case 330662:
    {
        returnValue = F("Weilemer Str.");
        break;
    }
    case 330663:
    {
        returnValue = F("Weilemer Weg");
        break;
    }
    case 330664:
    {
        returnValue = F("Weilenbergweg");
        break;
    }
    case 330665:
    {
        returnValue = F("Weilenbrink");
        break;
    }
    case 330666:
    {
        returnValue = F("Weilenburgstr.");
        break;
    }
    case 330667:
    {
        returnValue = F("Weilenbühlstr.");
        break;
    }
    case 330668:
    {
        returnValue = F("Weilener Str.");
        break;
    }
    case 330669:
    {
        returnValue = F("Weilenhaus");
        break;
    }
    case 330670:
    {
        returnValue = F("Weilenhäuschenstr.");
        break;
    }
    case 330671:
    {
        returnValue = F("Weilenstr.");
        break;
    }
    case 330672:
    {
        returnValue = F("Weiler");
        break;
    }
    case 330673:
    {
        returnValue = F("Weiler Dottighofen");
        break;
    }
    case 330674:
    {
        returnValue = F("Weiler Ebene");
        break;
    }
    case 330675:
    {
        returnValue = F("Weiler Gnailes");
        break;
    }
    case 330676:
    {
        returnValue = F("Weiler Hohenholz");
        break;
    }
    case 330677:
    {
        returnValue = F("Weiler Nächstenbach");
        break;
    }
    case 330678:
    {
        returnValue = F("Weiler Platz");
        break;
    }
    case 330679:
    {
        returnValue = F("Weiler Schafhof");
        break;
    }
    case 330680:
    {
        returnValue = F("Weiler Steige");
        break;
    }
    case 330681:
    {
        returnValue = F("Weiler Str.");
        break;
    }
    case 330682:
    {
        returnValue = F("Weiler Strässchen");
        break;
    }
    case 330683:
    {
        returnValue = F("Weiler Weg");
        break;
    }
    case 330684:
    {
        returnValue = F("Weiler am See");
        break;
    }
    case 330685:
    {
        returnValue = F("Weiler an der Eck");
        break;
    }
    case 330686:
    {
        returnValue = F("Weiler-Hüttenweg");
        break;
    }
    case 330687:
    {
        returnValue = F("Weilerauer Str.");
        break;
    }
    case 330688:
    {
        returnValue = F("Weilerbach");
        break;
    }
    case 330689:
    {
        returnValue = F("Weilerbacher Str.");
        break;
    }
    case 330690:
    {
        returnValue = F("Weilerbacher Wäldchen");
        break;
    }
    case 330691:
    {
        returnValue = F("Weilerbachstr.");
        break;
    }
    case 330692:
    {
        returnValue = F("Weilerbachweg");
        break;
    }
    case 330693:
    {
        returnValue = F("Weilerberg");
        break;
    }
    case 330694:
    {
        returnValue = F("Weilerbergstr.");
        break;
    }
    case 330695:
    {
        returnValue = F("Weilerburgstr.");
        break;
    }
    case 330696:
    {
        returnValue = F("Weilerbuschstr.");
        break;
    }
    case 330697:
    {
        returnValue = F("Weilerer Berg");
        break;
    }
    case 330698:
    {
        returnValue = F("Weilerer Str.");
        break;
    }
    case 330699:
    {
        returnValue = F("Weilerer Weg");
        break;
    }
    case 330700:
    {
        returnValue = F("Weilerfeld");
        break;
    }
    case 330701:
    {
        returnValue = F("Weilerfeldstr.");
        break;
    }
    case 330702:
    {
        returnValue = F("Weilergarten");
        break;
    }
    case 330703:
    {
        returnValue = F("Weilergasse");
        break;
    }
    case 330704:
    {
        returnValue = F("Weilergässchen");
        break;
    }
    case 330705:
    {
        returnValue = F("Weilerhagsträßle");
        break;
    }
    case 330706:
    {
        returnValue = F("Weilerhalde");
        break;
    }
    case 330707:
    {
        returnValue = F("Weilerhangweg");
        break;
    }
    case 330708:
    {
        returnValue = F("Weilerhauweg");
        break;
    }
    case 330709:
    {
        returnValue = F("Weilerhof");
        break;
    }
    case 330710:
    {
        returnValue = F("Weilerhofstr.");
        break;
    }
    case 330711:
    {
        returnValue = F("Weilerhohn");
        break;
    }
    case 330712:
    {
        returnValue = F("Weilerhöfe");
        break;
    }
    case 330713:
    {
        returnValue = F("Weilerhöfer Weg");
        break;
    }
    case 330714:
    {
        returnValue = F("Weilermatt");
        break;
    }
    case 330715:
    {
        returnValue = F("Weilermattweg");
        break;
    }
    case 330716:
    {
        returnValue = F("Weilermer Str.");
        break;
    }
    case 330717:
    {
        returnValue = F("Weilermerkinger Weg");
        break;
    }
    case 330718:
    {
        returnValue = F("Weilermühle");
        break;
    }
    case 330719:
    {
        returnValue = F("Weilerner Str.");
        break;
    }
    case 330720:
    {
        returnValue = F("Weilers");
        break;
    }
    case 330721:
    {
        returnValue = F("Weilersbach");
        break;
    }
    case 330722:
    {
        returnValue = F("Weilersbacher Str.");
        break;
    }
    case 330723:
    {
        returnValue = F("Weilersbachstr.");
        break;
    }
    case 330724:
    {
        returnValue = F("Weilersbachweg");
        break;
    }
    case 330725:
    {
        returnValue = F("Weilersberg");
        break;
    }
    case 330726:
    {
        returnValue = F("Weilersbroich");
        break;
    }
    case 330727:
    {
        returnValue = F("Weilerschlagweg");
        break;
    }
    case 330728:
    {
        returnValue = F("Weilerser Str.");
        break;
    }
    case 330729:
    {
        returnValue = F("Weilersgrund");
        break;
    }
    case 330730:
    {
        returnValue = F("Weilershofstr.");
        break;
    }
    case 330731:
    {
        returnValue = F("Weilersiedlung");
        break;
    }
    case 330732:
    {
        returnValue = F("Weilersteig");
        break;
    }
    case 330733:
    {
        returnValue = F("Weilersteigstr.");
        break;
    }
    case 330734:
    {
        returnValue = F("Weilerstr.");
        break;
    }
    case 330735:
    {
        returnValue = F("Weilersweg");
        break;
    }
    case 330736:
    {
        returnValue = F("Weilerswister Str.");
        break;
    }
    case 330737:
    {
        returnValue = F("Weilertalstr.");
        break;
    }
    case 330738:
    {
        returnValue = F("Weilertalweg");
        break;
    }
    case 330739:
    {
        returnValue = F("Weilertor");
        break;
    }
    case 330740:
    {
        returnValue = F("Weilertorweg");
        break;
    }
    case 330741:
    {
        returnValue = F("Weilertsriedweg");
        break;
    }
    case 330742:
    {
        returnValue = F("Weilervorstadt");
        break;
    }
    case 330743:
    {
        returnValue = F("Weilerwaldkopfweg");
        break;
    }
    case 330744:
    {
        returnValue = F("Weilerwaldstr.");
        break;
    }
    case 330745:
    {
        returnValue = F("Weilerwasen");
        break;
    }
    case 330746:
    {
        returnValue = F("Weilerweg");
        break;
    }
    case 330747:
    {
        returnValue = F("Weilerweingart");
        break;
    }
    case 330748:
    {
        returnValue = F("Weilerwiese");
        break;
    }
    case 330749:
    {
        returnValue = F("Weilerwiesen");
        break;
    }
    case 330750:
    {
        returnValue = F("Weilerwiesenstr.");
        break;
    }
    case 330751:
    {
        returnValue = F("Weilerwiesenweg");
        break;
    }
    case 330752:
    {
        returnValue = F("Weileräcker");
        break;
    }
    case 330753:
    {
        returnValue = F("Weileräckerstr.");
        break;
    }
    case 330754:
    {
        returnValue = F("Weilgartenstr.");
        break;
    }
    case 330755:
    {
        returnValue = F("Weilhammerstr.");
        break;
    }
    case 330756:
    {
        returnValue = F("Weilhammerweg");
        break;
    }
    case 330757:
    {
        returnValue = F("Weilhau");
        break;
    }
    case 330758:
    {
        returnValue = F("Weilhauweg");
        break;
    }
    case 330759:
    {
        returnValue = F("Weilheimer Feld");
        break;
    }
    case 330760:
    {
        returnValue = F("Weilheimer Halde Weg");
        break;
    }
    case 330761:
    {
        returnValue = F("Weilheimer Str.");
        break;
    }
    case 330762:
    {
        returnValue = F("Weilheimer Weg");
        break;
    }
    case 330763:
    {
        returnValue = F("Weilimdorfer Str.");
        break;
    }
    case 330764:
    {
        returnValue = F("Weiling");
        break;
    }
    case 330765:
    {
        returnValue = F("Weilinger Str.");
        break;
    }
    case 330766:
    {
        returnValue = F("Weilingerweg");
        break;
    }
    case 330767:
    {
        returnValue = F("Weilkirchen");
        break;
    }
    case 330768:
    {
        returnValue = F("Weillindestr.");
        break;
    }
    case 330769:
    {
        returnValue = F("Weilloher Str.");
        break;
    }
    case 330770:
    {
        returnValue = F("Weillstr.");
        break;
    }
    case 330771:
    {
        returnValue = F("Weilnauer Str.");
        break;
    }
    case 330772:
    {
        returnValue = F("Weilnbachweg");
        break;
    }
    case 330773:
    {
        returnValue = F("Weilpark");
        break;
    }
    case 330774:
    {
        returnValue = F("Weilroder Str.");
        break;
    }
    case 330775:
    {
        returnValue = F("Weilroder Weg");
        break;
    }
    case 330776:
    {
        returnValue = F("Weilröder Str.");
        break;
    }
    case 330777:
    {
        returnValue = F("Weilsteinstr.");
        break;
    }
    case 330778:
    {
        returnValue = F("Weilstetter Str.");
        break;
    }
    case 330779:
    {
        returnValue = F("Weilstr.");
        break;
    }
    case 330780:
    {
        returnValue = F("Weiltalbahn");
        break;
    }
    case 330781:
    {
        returnValue = F("Weiltalweg");
        break;
    }
    case 330782:
    {
        returnValue = F("Weiltinger Str.");
        break;
    }
    case 330783:
    {
        returnValue = F("Weiltinger Weg");
        break;
    }
    case 330784:
    {
        returnValue = F("Weiltorgasse");
        break;
    }
    case 330785:
    {
        returnValue = F("Weilweg");
        break;
    }
    case 330786:
    {
        returnValue = F("Weimann's Hof");
        break;
    }
    case 330787:
    {
        returnValue = F("Weimannsdyk");
        break;
    }
    case 330788:
    {
        returnValue = F("Weimaranerplatz");
        break;
    }
    case 330789:
    {
        returnValue = F("Weimarer Allee");
        break;
    }
    case 330790:
    {
        returnValue = F("Weimarer Bogen");
        break;
    }
    case 330791:
    {
        returnValue = F("Weimarer Platz");
        break;
    }
    case 330792:
    {
        returnValue = F("Weimarer Ring");
        break;
    }
    case 330793:
    {
        returnValue = F("Weimarer Str.");
        break;
    }
    case 330794:
    {
        returnValue = F("Weimarer Weg");
        break;
    }
    case 330795:
    {
        returnValue = F("Weimargasse");
        break;
    }
    case 330796:
    {
        returnValue = F("Weimarische Ecke");
        break;
    }
    case 330797:
    {
        returnValue = F("Weimarische Landstr.");
        break;
    }
    case 330798:
    {
        returnValue = F("Weimarische Str.");
        break;
    }
    case 330799:
    {
        returnValue = F("Weimarischer Weg");
        break;
    }
    case 330800:
    {
        returnValue = F("Weimarisches Tor");
        break;
    }
    case 330801:
    {
        returnValue = F("Weimarscher Weg");
        break;
    }
    case 330802:
    {
        returnValue = F("Weimarschmiedener Str.");
        break;
    }
    case 330803:
    {
        returnValue = F("Weimarstr.");
        break;
    }
    case 330804:
    {
        returnValue = F("Weimarweg");
        break;
    }
    case 330805:
    {
        returnValue = F("Weimerhohl");
        break;
    }
    case 330806:
    {
        returnValue = F("Weimers Jaas");
        break;
    }
    case 330807:
    {
        returnValue = F("Weimersdorfer Str.");
        break;
    }
    case 330808:
    {
        returnValue = F("Weimersgasse");
        break;
    }
    case 330809:
    {
        returnValue = F("Weimersheimer Str.");
        break;
    }
    case 330810:
    {
        returnValue = F("Weimerskamp");
        break;
    }
    case 330811:
    {
        returnValue = F("Weimerstal");
        break;
    }
    case 330812:
    {
        returnValue = F("Weimerstr.");
        break;
    }
    case 330813:
    {
        returnValue = F("Weimertstr.");
        break;
    }
    case 330814:
    {
        returnValue = F("Weimerweg");
        break;
    }
    case 330815:
    {
        returnValue = F("Weimeskamp");
        break;
    }
    case 330816:
    {
        returnValue = F("Weimesstr.");
        break;
    }
    case 330817:
    {
        returnValue = F("Wein Lehrpfad");
        break;
    }
    case 330818:
    {
        returnValue = F("Wein- Rundweg");
        break;
    }
    case 330819:
    {
        returnValue = F("Wein- und Rosenweg");
        break;
    }
    case 330820:
    {
        returnValue = F("Wein-Erlebnispfad Nußdorf");
        break;
    }
    case 330821:
    {
        returnValue = F("Wein-Panoramaweg");
        break;
    }
    case 330822:
    {
        returnValue = F("Weinackerweg");
        break;
    }
    case 330823:
    {
        returnValue = F("Weinanger");
        break;
    }
    case 330824:
    {
        returnValue = F("Weinauallee");
        break;
    }
    case 330825:
    {
        returnValue = F("Weinauer Hof");
        break;
    }
    case 330826:
    {
        returnValue = F("Weinauer Str.");
        break;
    }
    case 330827:
    {
        returnValue = F("Weinauerstr.");
        break;
    }
    case 330828:
    {
        returnValue = F("Weinaupark");
        break;
    }
    case 330829:
    {
        returnValue = F("Weinauring");
        break;
    }
    case 330830:
    {
        returnValue = F("Weinbach");
        break;
    }
    case 330831:
    {
        returnValue = F("Weinbacher Str.");
        break;
    }
    case 330832:
    {
        returnValue = F("Weinbachstr.");
        break;
    }
    case 330833:
    {
        returnValue = F("Weinbachweg");
        break;
    }
    case 330834:
    {
        returnValue = F("Weinbauerstr.");
        break;
    }
    case 330835:
    {
        returnValue = F("Weinbecker Geist");
        break;
    }
    case 330836:
    {
        returnValue = F("Weinbeckstr.");
        break;
    }
    case 330837:
    {
        returnValue = F("Weinbeerstr.");
        break;
    }
    case 330838:
    {
        returnValue = F("Weinberg");
        break;
    }
    case 330839:
    {
        returnValue = F("Weinberg Str.");
        break;
    }
    case 330840:
    {
        returnValue = F("Weinberg Wirtschaftsweg");
        break;
    }
    case 330841:
    {
        returnValue = F("Weinbergblick");
        break;
    }
    case 330842:
    {
        returnValue = F("Weinbergbrücke");
        break;
    }
    case 330843:
    {
        returnValue = F("Weinberge");
        break;
    }
    case 330844:
    {
        returnValue = F("Weinberger Str.");
        break;
    }
    case 330845:
    {
        returnValue = F("Weinbergerstr.");
        break;
    }
    case 330846:
    {
        returnValue = F("Weinbergerweg");
        break;
    }
    case 330847:
    {
        returnValue = F("Weinbergfeld");
        break;
    }
    case 330848:
    {
        returnValue = F("Weinbergfeldweg");
        break;
    }
    case 330849:
    {
        returnValue = F("Weinberggang");
        break;
    }
    case 330850:
    {
        returnValue = F("Weinberggasse");
        break;
    }
    case 330851:
    {
        returnValue = F("Weinberghalde");
        break;
    }
    case 330852:
    {
        returnValue = F("Weinberghof");
        break;
    }
    case 330853:
    {
        returnValue = F("Weinberghohle");
        break;
    }
    case 330854:
    {
        returnValue = F("Weinbergholz");
        break;
    }
    case 330855:
    {
        returnValue = F("Weinberghäuser");
        break;
    }
    case 330856:
    {
        returnValue = F("Weinberghöhe");
        break;
    }
    case 330857:
    {
        returnValue = F("Weinbergpark");
        break;
    }
    case 330858:
    {
        returnValue = F("Weinbergring");
        break;
    }
    case 330859:
    {
        returnValue = F("Weinbergsblick");
        break;
    }
    case 330860:
    {
        returnValue = F("Weinbergschneise");
        break;
    }
    case 330861:
    {
        returnValue = F("Weinbergsenden");
        break;
    }
    case 330862:
    {
        returnValue = F("Weinbergsfeld");
        break;
    }
    case 330863:
    {
        returnValue = F("Weinbergsgasse");
        break;
    }
    case 330864:
    {
        returnValue = F("Weinbergsgrund");
        break;
    }
    case 330865:
    {
        returnValue = F("Weinbergsiedlung");
        break;
    }
    case 330866:
    {
        returnValue = F("Weinbergsleithe");
        break;
    }
    case 330867:
    {
        returnValue = F("Weinbergspfad");
        break;
    }
    case 330868:
    {
        returnValue = F("Weinbergsring");
        break;
    }
    case 330869:
    {
        returnValue = F("Weinbergsstr.");
        break;
    }
    case 330870:
    {
        returnValue = F("Weinbergsteig");
        break;
    }
    case 330871:
    {
        returnValue = F("Weinbergsteige");
        break;
    }
    case 330872:
    {
        returnValue = F("Weinbergsthalweg");
        break;
    }
    case 330873:
    {
        returnValue = F("Weinbergstr.");
        break;
    }
    case 330874:
    {
        returnValue = F("Weinbergswanderweg");
        break;
    }
    case 330875:
    {
        returnValue = F("Weinbergsweg");
        break;
    }
    case 330876:
    {
        returnValue = F("Weinbergtal");
        break;
    }
    case 330877:
    {
        returnValue = F("Weinbergterrassen");
        break;
    }
    case 330878:
    {
        returnValue = F("Weinbergweg");
        break;
    }
    case 330879:
    {
        returnValue = F("Weinbergwiesen");
        break;
    }
    case 330880:
    {
        returnValue = F("Weinbietring");
        break;
    }
    case 330881:
    {
        returnValue = F("Weinbietstr.");
        break;
    }
    case 330882:
    {
        returnValue = F("Weinbietweg");
        break;
    }
    case 330883:
    {
        returnValue = F("Weinbirnenstr.");
        break;
    }
    case 330884:
    {
        returnValue = F("Weinbirnenweg");
        break;
    }
    case 330885:
    {
        returnValue = F("Weinblütenstr.");
        break;
    }
    case 330886:
    {
        returnValue = F("Weinbreite");
        break;
    }
    case 330887:
    {
        returnValue = F("Weinbrennerallee");
        break;
    }
    case 330888:
    {
        returnValue = F("Weinbrennerstr.");
        break;
    }
    case 330889:
    {
        returnValue = F("Weinbrennerweg");
        break;
    }
    case 330890:
    {
        returnValue = F("Weinbrinksweg");
        break;
    }
    case 330891:
    {
        returnValue = F("Weinbrunn");
        break;
    }
    case 330892:
    {
        returnValue = F("Weinbrunnenstr.");
        break;
    }
    case 330893:
    {
        returnValue = F("Weinbrunnerhof");
        break;
    }
    case 330894:
    {
        returnValue = F("Weinbrünnlestr.");
        break;
    }
    case 330895:
    {
        returnValue = F("Weinbuchweg");
        break;
    }
    case 330896:
    {
        returnValue = F("Weinbuckstr.");
        break;
    }
    case 330897:
    {
        returnValue = F("Weinburgstr.");
        break;
    }
    case 330898:
    {
        returnValue = F("Weinböhlaer Str.");
        break;
    }
    case 330899:
    {
        returnValue = F("Weindl-Lenz-Str.");
        break;
    }
    case 330900:
    {
        returnValue = F("Weindlgrub");
        break;
    }
    case 330901:
    {
        returnValue = F("Weindlstr.");
        break;
    }
    case 330902:
    {
        returnValue = F("Weindorfer Str.");
        break;
    }
    case 330903:
    {
        returnValue = F("Weindorfer Weg");
        break;
    }
    case 330904:
    {
        returnValue = F("Weindorfstr.");
        break;
    }
    case 330905:
    {
        returnValue = F("Weinenweg");
        break;
    }
    case 330906:
    {
        returnValue = F("Weiner");
        break;
    }
    case 330907:
    {
        returnValue = F("Weiner Heide");
        break;
    }
    case 330908:
    {
        returnValue = F("Weiner Heide, Höhenweg");
        break;
    }
    case 330909:
    {
        returnValue = F("Weiner Kirchweg");
        break;
    }
    case 330910:
    {
        returnValue = F("Weinerbergstr.");
        break;
    }
    case 330911:
    {
        returnValue = F("Weinersbergweg");
        break;
    }
    case 330912:
    {
        returnValue = F("Weinerstr.");
        break;
    }
    case 330913:
    {
        returnValue = F("Weinesch");
        break;
    }
    case 330914:
    {
        returnValue = F("Weinfeld");
        break;
    }
    case 330915:
    {
        returnValue = F("Weinfelder Str.");
        break;
    }
    case 330916:
    {
        returnValue = F("Weinfelder Weg");
        break;
    }
    case 330917:
    {
        returnValue = F("Weinfeldstr.");
        break;
    }
    case 330918:
    {
        returnValue = F("Weinfeldweg");
        break;
    }
    case 330919:
    {
        returnValue = F("Weinfestgelände");
        break;
    }
    case 330920:
    {
        returnValue = F("Weinfurth");
        break;
    }
    case 330921:
    {
        returnValue = F("Weingangsweg");
        break;
    }
    case 330922:
    {
        returnValue = F("Weingarten");
        break;
    }
    case 330923:
    {
        returnValue = F("Weingartenacker");
        break;
    }
    case 330924:
    {
        returnValue = F("Weingartenallee");
        break;
    }
    case 330925:
    {
        returnValue = F("Weingartenberg");
        break;
    }
    case 330926:
    {
        returnValue = F("Weingartenbergstr.");
        break;
    }
    case 330927:
    {
        returnValue = F("Weingartener Str.");
        break;
    }
    case 330928:
    {
        returnValue = F("Weingartener Weg");
        break;
    }
    case 330929:
    {
        returnValue = F("Weingartenfeldweg");
        break;
    }
    case 330930:
    {
        returnValue = F("Weingartenrain");
        break;
    }
    case 330931:
    {
        returnValue = F("Weingartensteige");
        break;
    }
    case 330932:
    {
        returnValue = F("Weingartenstr.");
        break;
    }
    case 330933:
    {
        returnValue = F("Weingartental");
        break;
    }
    case 330934:
    {
        returnValue = F("Weingartenweg");
        break;
    }
    case 330935:
    {
        returnValue = F("Weingarter Str.");
        break;
    }
    case 330936:
    {
        returnValue = F("Weingarthalde");
        break;
    }
    case 330937:
    {
        returnValue = F("Weingartl");
        break;
    }
    case 330938:
    {
        returnValue = F("Weingartlstr.");
        break;
    }
    case 330939:
    {
        returnValue = F("Weingartnerallee");
        break;
    }
    case 330940:
    {
        returnValue = F("Weingartnerstr.");
        break;
    }
    case 330941:
    {
        returnValue = F("Weingartsbahn");
        break;
    }
    case 330942:
    {
        returnValue = F("Weingartsberg");
        break;
    }
    case 330943:
    {
        returnValue = F("Weingartsgasse");
        break;
    }
    case 330944:
    {
        returnValue = F("Weingartshalde");
        break;
    }
    case 330945:
    {
        returnValue = F("Weingartshof");
        break;
    }
    case 330946:
    {
        returnValue = F("Weingartshofer Str.");
        break;
    }
    case 330947:
    {
        returnValue = F("Weingartskamp");
        break;
    }
    case 330948:
    {
        returnValue = F("Weingartspfad");
        break;
    }
    case 330949:
    {
        returnValue = F("Weingartspfädle");
        break;
    }
    case 330950:
    {
        returnValue = F("Weingartsstr.");
        break;
    }
    case 330951:
    {
        returnValue = F("Weingartstr.");
        break;
    }
    case 330952:
    {
        returnValue = F("Weingartsweg");
        break;
    }
    case 330953:
    {
        returnValue = F("Weingartsäcker");
        break;
    }
    case 330954:
    {
        returnValue = F("Weingartweg");
        break;
    }
    case 330955:
    {
        returnValue = F("Weingartzgarten");
        break;
    }
    case 330956:
    {
        returnValue = F("Weingartzhof");
        break;
    }
    case 330957:
    {
        returnValue = F("Weingasse");
        break;
    }
    case 330958:
    {
        returnValue = F("Weingaß");
        break;
    }
    case 330959:
    {
        returnValue = F("Weingraben");
        break;
    }
    case 330960:
    {
        returnValue = F("Weingrund");
        break;
    }
    case 330961:
    {
        returnValue = F("Weingut Elisabethenberg");
        break;
    }
    case 330962:
    {
        returnValue = F("Weingärten");
        break;
    }
    case 330963:
    {
        returnValue = F("Weingärtenstr.");
        break;
    }
    case 330964:
    {
        returnValue = F("Weingärterstr.");
        break;
    }
    case 330965:
    {
        returnValue = F("Weingärtle");
        break;
    }
    case 330966:
    {
        returnValue = F("Weingärtner Vorstadt");
        break;
    }
    case 330967:
    {
        returnValue = F("Weingärtnerstr.");
        break;
    }
    case 330968:
    {
        returnValue = F("Weingärtnerweg");
        break;
    }
    case 330969:
    {
        returnValue = F("Weingässle");
        break;
    }
    case 330970:
    {
        returnValue = F("Weingäßchen");
        break;
    }
    case 330971:
    {
        returnValue = F("Weinhagenstr.");
        break;
    }
    case 330972:
    {
        returnValue = F("Weinhalde");
        break;
    }
    case 330973:
    {
        returnValue = F("Weinhalden");
        break;
    }
    case 330974:
    {
        returnValue = F("Weinhaldenstr.");
        break;
    }
    case 330975:
    {
        returnValue = F("Weinhaldenweg");
        break;
    }
    case 330976:
    {
        returnValue = F("Weinhaldeweg");
        break;
    }
    case 330977:
    {
        returnValue = F("Weinhardstr.");
        break;
    }
    case 330978:
    {
        returnValue = F("Weinhartstr.");
        break;
    }
    case 330979:
    {
        returnValue = F("Weinhauerweg");
        break;
    }
    case 330980:
    {
        returnValue = F("Weinhausener Str.");
        break;
    }
    case 330981:
    {
        returnValue = F("Weinhauser Weid");
        break;
    }
    case 330982:
    {
        returnValue = F("Weinhecken");
        break;
    }
    case 330983:
    {
        returnValue = F("Weinheckstr.");
        break;
    }
    case 330984:
    {
        returnValue = F("Weinheimer Landstr.");
        break;
    }
    case 330985:
    {
        returnValue = F("Weinheimer Str.");
        break;
    }
    case 330986:
    {
        returnValue = F("Weinheimer Weg");
        break;
    }
    case 330987:
    {
        returnValue = F("Weinheimstr.");
        break;
    }
    case 330988:
    {
        returnValue = F("Weinhexweg");
        break;
    }
    case 330989:
    {
        returnValue = F("Weinhof");
        break;
    }
    case 330990:
    {
        returnValue = F("Weinhofer Str.");
        break;
    }
    case 330991:
    {
        returnValue = F("Weinhohl");
        break;
    }
    case 330992:
    {
        returnValue = F("Weinhohle");
        break;
    }
    case 330993:
    {
        returnValue = F("Weinhold-Arkade");
        break;
    }
    case 330994:
    {
        returnValue = F("Weinholdstr.");
        break;
    }
    case 330995:
    {
        returnValue = F("Weinholdweg");
        break;
    }
    case 330996:
    {
        returnValue = F("Weinholzerweg");
        break;
    }
    case 330997:
    {
        returnValue = F("Weinhude");
        break;
    }
    case 330998:
    {
        returnValue = F("Weinhumesweg");
        break;
    }
    case 330999:
    {
        returnValue = F("Weinhäldele");
        break;
    }
    case 331000:
    {
        returnValue = F("Weinhäuserstr.");
        break;
    }
    case 331001:
    {
        returnValue = F("Weinhöfe");
        break;
    }
    case 331002:
    {
        returnValue = F("Weinhübel-Mitte");
        break;
    }
    case 331003:
    {
        returnValue = F("Weinhübler Seeweg");
        break;
    }
    case 331004:
    {
        returnValue = F("Weinhübler Str.");
        break;
    }
    case 331005:
    {
        returnValue = F("Weinhüterweg");
        break;
    }
    case 331006:
    {
        returnValue = F("Weinhütten");
        break;
    }
    case 331007:
    {
        returnValue = F("Weinigstr.");
        break;
    }
    case 331008:
    {
        returnValue = F("Weiningstr.");
        break;
    }
    case 331009:
    {
        returnValue = F("Weinitzerstr.");
        break;
    }
    case 331010:
    {
        returnValue = F("Weinkamp");
        break;
    }
    case 331011:
    {
        returnValue = F("Weinkauffstr.");
        break;
    }
    case 331012:
    {
        returnValue = F("Weinkaufsmoorer Str.");
        break;
    }
    case 331013:
    {
        returnValue = F("Weinkellergasse");
        break;
    }
    case 331014:
    {
        returnValue = F("Weinkellerstiege");
        break;
    }
    case 331015:
    {
        returnValue = F("Weinkellerstr.");
        break;
    }
    case 331016:
    {
        returnValue = F("Weinkellerweg");
        break;
    }
    case 331017:
    {
        returnValue = F("Weinkuhle");
        break;
    }
    case 331018:
    {
        returnValue = F("Weinküppel");
        break;
    }
    case 331019:
    {
        returnValue = F("Weinlagenweg");
        break;
    }
    case 331020:
    {
        returnValue = F("Weinland");
        break;
    }
    case 331021:
    {
        returnValue = F("Weinlandstr.");
        break;
    }
    case 331022:
    {
        returnValue = F("Weinlandweg");
        break;
    }
    case 331023:
    {
        returnValue = F("Weinlehrpfad");
        break;
    }
    case 331024:
    {
        returnValue = F("Weinlehrpfad Edelberg");
        break;
    }
    case 331025:
    {
        returnValue = F("Weinleite");
        break;
    }
    case 331026:
    {
        returnValue = F("Weinleiten");
        break;
    }
    case 331027:
    {
        returnValue = F("Weinleitenweg");
        break;
    }
    case 331028:
    {
        returnValue = F("Weinleithe");
        break;
    }
    case 331029:
    {
        returnValue = F("Weinleseweg");
        break;
    }
    case 331030:
    {
        returnValue = F("Weinleswaldweg");
        break;
    }
    case 331031:
    {
        returnValue = F("Weinligstr.");
        break;
    }
    case 331032:
    {
        returnValue = F("Weinlände");
        break;
    }
    case 331033:
    {
        returnValue = F("Weinmannstr.");
        break;
    }
    case 331034:
    {
        returnValue = F("Weinmarkt");
        break;
    }
    case 331035:
    {
        returnValue = F("Weinmarktplatz");
        break;
    }
    case 331036:
    {
        returnValue = F("Weinmayrsbergstr.");
        break;
    }
    case 331037:
    {
        returnValue = F("Weinmeisterstr.");
        break;
    }
    case 331038:
    {
        returnValue = F("Weinmeisterweg");
        break;
    }
    case 331039:
    {
        returnValue = F("Weinmiller-Str.");
        break;
    }
    case 331040:
    {
        returnValue = F("Weinmillerstr.");
        break;
    }
    case 331041:
    {
        returnValue = F("Weinmoosstr.");
        break;
    }
    case 331042:
    {
        returnValue = F("Weinmühlstr.");
        break;
    }
    case 331043:
    {
        returnValue = F("Weinolsheimer Str.");
        break;
    }
    case 331044:
    {
        returnValue = F("Weinolsheimer Weg");
        break;
    }
    case 331045:
    {
        returnValue = F("Weinorweg");
        break;
    }
    case 331046:
    {
        returnValue = F("Weinpfad");
        break;
    }
    case 331047:
    {
        returnValue = F("Weinpfad Kraichgau (W)");
        break;
    }
    case 331048:
    {
        returnValue = F("Weinpreß");
        break;
    }
    case 331049:
    {
        returnValue = F("Weinprobierstand");
        break;
    }
    case 331050:
    {
        returnValue = F("Weinrichstr.");
        break;
    }
    case 331051:
    {
        returnValue = F("Weinrieder Str.");
        break;
    }
    case 331052:
    {
        returnValue = F("Weinrieder Weg");
        break;
    }
    case 331053:
    {
        returnValue = F("Weinrieth");
        break;
    }
    case 331054:
    {
        returnValue = F("Weinring");
        break;
    }
    case 331055:
    {
        returnValue = F("Weinrosenstr.");
        break;
    }
    case 331056:
    {
        returnValue = F("Weinrufstr.");
        break;
    }
    case 331057:
    {
        returnValue = F("Weinsau");
        break;
    }
    case 331058:
    {
        returnValue = F("Weinsbacher Str.");
        break;
    }
    case 331059:
    {
        returnValue = F("Weinsberg");
        break;
    }
    case 331060:
    {
        returnValue = F("Weinsberger Hohlgasse");
        break;
    }
    case 331061:
    {
        returnValue = F("Weinsberger Str.");
        break;
    }
    case 331062:
    {
        returnValue = F("Weinsberger Weg");
        break;
    }
    case 331063:
    {
        returnValue = F("Weinsberger-Hau-Weg");
        break;
    }
    case 331064:
    {
        returnValue = F("Weinsbergtalstr.");
        break;
    }
    case 331065:
    {
        returnValue = F("Weinsbergweg");
        break;
    }
    case 331066:
    {
        returnValue = F("Weinschnitter Gässchen");
        break;
    }
    case 331067:
    {
        returnValue = F("Weinsdorfer Str.");
        break;
    }
    case 331068:
    {
        returnValue = F("Weinseite");
        break;
    }
    case 331069:
    {
        returnValue = F("Weinsgarten");
        break;
    }
    case 331070:
    {
        returnValue = F("Weinshalde");
        break;
    }
    case 331071:
    {
        returnValue = F("Weinsheimer Hauptstr.");
        break;
    }
    case 331072:
    {
        returnValue = F("Weinsheimer Held");
        break;
    }
    case 331073:
    {
        returnValue = F("Weinsheimer Postweg");
        break;
    }
    case 331074:
    {
        returnValue = F("Weinsheimer Str.");
        break;
    }
    case 331075:
    {
        returnValue = F("Weinsheimer Weg");
        break;
    }
    case 331076:
    {
        returnValue = F("Weinskoppel");
        break;
    }
    case 331077:
    {
        returnValue = F("Weinspangen-Wanderweg (Weinspange)");
        break;
    }
    case 331078:
    {
        returnValue = F("Weinsteig");
        break;
    }
    case 331079:
    {
        returnValue = F("Weinsteige");
        break;
    }
    case 331080:
    {
        returnValue = F("Weinsteigerstr.");
        break;
    }
    case 331081:
    {
        returnValue = F("Weinsteigle");
        break;
    }
    case 331082:
    {
        returnValue = F("Weinsteiglesweg");
        break;
    }
    case 331083:
    {
        returnValue = F("Weinsteigstr.");
        break;
    }
    case 331084:
    {
        returnValue = F("Weinsteigweg");
        break;
    }
    case 331085:
    {
        returnValue = F("Weinsteinstr.");
        break;
    }
    case 331086:
    {
        returnValue = F("Weinstetten");
        break;
    }
    case 331087:
    {
        returnValue = F("Weinstetter Str.");
        break;
    }
    case 331088:
    {
        returnValue = F("Weinstockstr.");
        break;
    }
    case 331089:
    {
        returnValue = F("Weinstr.");
        break;
    }
    case 331090:
    {
        returnValue = F("Weinstr. Nord");
        break;
    }
    case 331091:
    {
        returnValue = F("Weinstr. Süd");
        break;
    }
    case 331092:
    {
        returnValue = F("Weinstrasse");
        break;
    }
    case 331093:
    {
        returnValue = F("Weinsträßle");
        break;
    }
    case 331094:
    {
        returnValue = F("Weintalstr.");
        break;
    }
    case 331095:
    {
        returnValue = F("Weintalweg");
        break;
    }
    case 331096:
    {
        returnValue = F("Weinthal");
        break;
    }
    case 331097:
    {
        returnValue = F("Weinthalslohne");
        break;
    }
    case 331098:
    {
        returnValue = F("Weintinger Weg");
        break;
    }
    case 331099:
    {
        returnValue = F("Weintingergasse");
        break;
    }
    case 331100:
    {
        returnValue = F("Weintorstr.");
        break;
    }
    case 331101:
    {
        returnValue = F("Weintrauben Gang");
        break;
    }
    case 331102:
    {
        returnValue = F("Weintraubenstr.");
        break;
    }
    case 331103:
    {
        returnValue = F("Weintraubenweg");
        break;
    }
    case 331104:
    {
        returnValue = F("Weintrautstr.");
        break;
    }
    case 331105:
    {
        returnValue = F("Weinturmallee");
        break;
    }
    case 331106:
    {
        returnValue = F("Weinturmstr.");
        break;
    }
    case 331107:
    {
        returnValue = F("Weinturmweg");
        break;
    }
    case 331108:
    {
        returnValue = F("Weinwanderweg");
        break;
    }
    case 331109:
    {
        returnValue = F("Weinwanderweg Friedensburg");
        break;
    }
    case 331110:
    {
        returnValue = F("Weinweg");
        break;
    }
    case 331111:
    {
        returnValue = F("Weinwegsdellenweg");
        break;
    }
    case 331112:
    {
        returnValue = F("Weinwehr");
        break;
    }
    case 331113:
    {
        returnValue = F("Weinwiesenweg");
        break;
    }
    case 331114:
    {
        returnValue = F("Weinzeile");
        break;
    }
    case 331115:
    {
        returnValue = F("Weinziehr Weg");
        break;
    }
    case 331116:
    {
        returnValue = F("Weinzierleiner Str.");
        break;
    }
    case 331117:
    {
        returnValue = F("Weinzierler Str.");
        break;
    }
    case 331118:
    {
        returnValue = F("Weinzierlstr.");
        break;
    }
    case 331119:
    {
        returnValue = F("Weinzierlweg");
        break;
    }
    case 331120:
    {
        returnValue = F("Weinäckerplatz");
        break;
    }
    case 331121:
    {
        returnValue = F("Weinäckerstr.");
        break;
    }
    case 331122:
    {
        returnValue = F("Weipelsdorfer Str.");
        break;
    }
    case 331123:
    {
        returnValue = F("Weiperath");
        break;
    }
    case 331124:
    {
        returnValue = F("Weiperfeldener Str.");
        break;
    }
    case 331125:
    {
        returnValue = F("Weiperter Str.");
        break;
    }
    case 331126:
    {
        returnValue = F("Weipertererweg");
        break;
    }
    case 331127:
    {
        returnValue = F("Weiperterweg");
        break;
    }
    case 331128:
    {
        returnValue = F("Weipertshausen");
        break;
    }
    case 331129:
    {
        returnValue = F("Weipertshausener Str.");
        break;
    }
    case 331130:
    {
        returnValue = F("Weipertstr.");
        break;
    }
    case 331131:
    {
        returnValue = F("Weiperzer Str.");
        break;
    }
    case 331132:
    {
        returnValue = F("Weipoldsweg");
        break;
    }
    case 331133:
    {
        returnValue = F("Weipoltshausener Str.");
        break;
    }
    case 331134:
    {
        returnValue = F("Weippertstrifter Weg");
        break;
    }
    case 331135:
    {
        returnValue = F("Weirachstr.");
        break;
    }
    case 331136:
    {
        returnValue = F("Weirastr.");
        break;
    }
    case 331137:
    {
        returnValue = F("Weirenhalde");
        break;
    }
    case 331138:
    {
        returnValue = F("Weirichklamm");
        break;
    }
    case 331139:
    {
        returnValue = F("Weisachstr.");
        break;
    }
    case 331140:
    {
        returnValue = F("Weisachweg");
        break;
    }
    case 331141:
    {
        returnValue = F("Weisbach");
        break;
    }
    case 331142:
    {
        returnValue = F("Weisbacher Str.");
        break;
    }
    case 331143:
    {
        returnValue = F("Weisbachstr.");
        break;
    }
    case 331144:
    {
        returnValue = F("Weisbergerstr.");
        break;
    }
    case 331145:
    {
        returnValue = F("Weisbergstr.");
        break;
    }
    case 331146:
    {
        returnValue = F("Weisbrunn");
        break;
    }
    case 331147:
    {
        returnValue = F("Weisbrunner Str.");
        break;
    }
    case 331148:
    {
        returnValue = F("Weisbrunner Weg");
        break;
    }
    case 331149:
    {
        returnValue = F("Weisbäumlein");
        break;
    }
    case 331150:
    {
        returnValue = F("Weischerstiege");
        break;
    }
    case 331151:
    {
        returnValue = F("Weischerstr.");
        break;
    }
    case 331152:
    {
        returnValue = F("Weischlitzer Str.");
        break;
    }
    case 331153:
    {
        returnValue = F("Weischützer Str.");
        break;
    }
    case 331154:
    {
        returnValue = F("Weisdorffstr.");
        break;
    }
    case 331155:
    {
        returnValue = F("Weise Wiese");
        break;
    }
    case 331156:
    {
        returnValue = F("Weiselberg");
        break;
    }
    case 331157:
    {
        returnValue = F("Weiselbergstr.");
        break;
    }
    case 331158:
    {
        returnValue = F("Weiseler Str.");
        break;
    }
    case 331159:
    {
        returnValue = F("Weiseler Weg");
        break;
    }
    case 331160:
    {
        returnValue = F("Weiselstein");
        break;
    }
    case 331161:
    {
        returnValue = F("Weiselstr.");
        break;
    }
    case 331162:
    {
        returnValue = F("Weiselweg");
        break;
    }
    case 331163:
    {
        returnValue = F("Weisenau");
        break;
    }
    case 331164:
    {
        returnValue = F("Weisenauer Gasse");
        break;
    }
    case 331165:
    {
        returnValue = F("Weisenauer Str.");
        break;
    }
    case 331166:
    {
        returnValue = F("Weisenauer Weg");
        break;
    }
    case 331167:
    {
        returnValue = F("Weisenbachweg");
        break;
    }
    case 331168:
    {
        returnValue = F("Weisenbergstr.");
        break;
    }
    case 331169:
    {
        returnValue = F("Weisenbergweg");
        break;
    }
    case 331170:
    {
        returnValue = F("Weisenbohl");
        break;
    }
    case 331171:
    {
        returnValue = F("Weisendorfer Str.");
        break;
    }
    case 331172:
    {
        returnValue = F("Weisener Str.");
        break;
    }
    case 331173:
    {
        returnValue = F("Weisener Weg");
        break;
    }
    case 331174:
    {
        returnValue = F("Weisenfeldweg");
        break;
    }
    case 331175:
    {
        returnValue = F("Weisengasse");
        break;
    }
    case 331176:
    {
        returnValue = F("Weisengärtenstr.");
        break;
    }
    case 331177:
    {
        returnValue = F("Weisenheimer Str.");
        break;
    }
    case 331178:
    {
        returnValue = F("Weisenheimer Weg");
        break;
    }
    case 331179:
    {
        returnValue = F("Weisensteinstr.");
        break;
    }
    case 331180:
    {
        returnValue = F("Weisenwiesen");
        break;
    }
    case 331181:
    {
        returnValue = F("Weiser Str.");
        break;
    }
    case 331182:
    {
        returnValue = F("Weisertrift");
        break;
    }
    case 331183:
    {
        returnValue = F("Weisestr.");
        break;
    }
    case 331184:
    {
        returnValue = F("Weiseweg");
        break;
    }
    case 331185:
    {
        returnValue = F("Weisgerberstr.");
        break;
    }
    case 331186:
    {
        returnValue = F("Weisgerberweg");
        break;
    }
    case 331187:
    {
        returnValue = F("Weisgutstr.");
        break;
    }
    case 331188:
    {
        returnValue = F("Weishaarstr.");
        break;
    }
    case 331189:
    {
        returnValue = F("Weishamer Str.");
        break;
    }
    case 331190:
    {
        returnValue = F("Weishaupts Pfad");
        break;
    }
    case 331191:
    {
        returnValue = F("Weishauptstr.");
        break;
    }
    case 331192:
    {
        returnValue = F("Weisheimer Str.");
        break;
    }
    case 331193:
    {
        returnValue = F("Weishof");
        break;
    }
    case 331194:
    {
        returnValue = F("Weisiner Weg");
        break;
    }
    case 331195:
    {
        returnValue = F("Weisinger Str.");
        break;
    }
    case 331196:
    {
        returnValue = F("Weiskirchener Str.");
        break;
    }
    case 331197:
    {
        returnValue = F("Weiskircher Str.");
        break;
    }
    case 331198:
    {
        returnValue = F("Weiskircher Weg");
        break;
    }
    case 331199:
    {
        returnValue = F("Weislesweg");
        break;
    }
    case 331200:
    {
        returnValue = F("Weislingweg");
        break;
    }
    case 331201:
    {
        returnValue = F("Weislitz");
        break;
    }
    case 331202:
    {
        returnValue = F("Weismainer Str.");
        break;
    }
    case 331203:
    {
        returnValue = F("Weismannstr.");
        break;
    }
    case 331204:
    {
        returnValue = F("Weismauerweg");
        break;
    }
    case 331205:
    {
        returnValue = F("Weissacher Str.");
        break;
    }
    case 331206:
    {
        returnValue = F("Weissacher Sträßle");
        break;
    }
    case 331207:
    {
        returnValue = F("Weissacher Weg");
        break;
    }
    case 331208:
    {
        returnValue = F("Weissachstr.");
        break;
    }
    case 331209:
    {
        returnValue = F("Weissauer Str.");
        break;
    }
    case 331210:
    {
        returnValue = F("Weissbachgrund");
        break;
    }
    case 331211:
    {
        returnValue = F("Weissbachtalweg");
        break;
    }
    case 331212:
    {
        returnValue = F("Weissbachweg");
        break;
    }
    case 331213:
    {
        returnValue = F("Weissbrunnenweg");
        break;
    }
    case 331214:
    {
        returnValue = F("Weissdornweg");
        break;
    }
    case 331215:
    {
        returnValue = F("Weisse Brücke");
        break;
    }
    case 331216:
    {
        returnValue = F("Weisse Gasse");
        break;
    }
    case 331217:
    {
        returnValue = F("Weisse Str.");
        break;
    }
    case 331218:
    {
        returnValue = F("Weissenauer Weg");
        break;
    }
    case 331219:
    {
        returnValue = F("Weissenbachstr.");
        break;
    }
    case 331220:
    {
        returnValue = F("Weissenberger Weg");
        break;
    }
    case 331221:
    {
        returnValue = F("Weissenburger Str.");
        break;
    }
    case 331222:
    {
        returnValue = F("Weissenkopfweg");
        break;
    }
    case 331223:
    {
        returnValue = F("Weissenseestr.");
        break;
    }
    case 331224:
    {
        returnValue = F("Weissenseifener Str.");
        break;
    }
    case 331225:
    {
        returnValue = F("Weissenstein");
        break;
    }
    case 331226:
    {
        returnValue = F("Weissensteiner Brücke");
        break;
    }
    case 331227:
    {
        returnValue = F("Weissensteinweg");
        break;
    }
    case 331228:
    {
        returnValue = F("Weissenthalstr.");
        break;
    }
    case 331229:
    {
        returnValue = F("Weisser Sandweg");
        break;
    }
    case 331230:
    {
        returnValue = F("Weisser-Weg");
        break;
    }
    case 331231:
    {
        returnValue = F("Weissergasse");
        break;
    }
    case 331232:
    {
        returnValue = F("Weissfelsenweg");
        break;
    }
    case 331233:
    {
        returnValue = F("Weissgerberweg");
        break;
    }
    case 331234:
    {
        returnValue = F("Weissmattenweg");
        break;
    }
    case 331235:
    {
        returnValue = F("Weissmättle");
        break;
    }
    case 331236:
    {
        returnValue = F("Weissmühlweg");
        break;
    }
    case 331237:
    {
        returnValue = F("Weisstannenkopf");
        break;
    }
    case 331238:
    {
        returnValue = F("Weisstannenweg");
        break;
    }
    case 331239:
    {
        returnValue = F("Weisstränkschneise");
        break;
    }
    case 331240:
    {
        returnValue = F("Weisswaldweg");
        break;
    }
    case 331241:
    {
        returnValue = F("Weist");
        break;
    }
    case 331242:
    {
        returnValue = F("Weisteweg");
        break;
    }
    case 331243:
    {
        returnValue = F("Weistr.");
        break;
    }
    case 331244:
    {
        returnValue = F("Weistritzstr.");
        break;
    }
    case 331245:
    {
        returnValue = F("Weistropper Str.");
        break;
    }
    case 331246:
    {
        returnValue = F("Weisweiler Str.");
        break;
    }
    case 331247:
    {
        returnValue = F("Weisweilerstr.");
        break;
    }
    case 331248:
    {
        returnValue = F("Weisäckerstr.");
        break;
    }
    case 331249:
    {
        returnValue = F("Weit-Lück");
        break;
    }
    case 331250:
    {
        returnValue = F("Weitbachweg");
        break;
    }
    case 331251:
    {
        returnValue = F("Weitblick");
        break;
    }
    case 331252:
    {
        returnValue = F("Weitblickstr.");
        break;
    }
    case 331253:
    {
        returnValue = F("Weitbrechtstr.");
        break;
    }
    case 331254:
    {
        returnValue = F("Weitbrechtweg");
        break;
    }
    case 331255:
    {
        returnValue = F("Weite Ebeneweg");
        break;
    }
    case 331256:
    {
        returnValue = F("Weite Gasse");
        break;
    }
    case 331257:
    {
        returnValue = F("Weite Höhe");
        break;
    }
    case 331258:
    {
        returnValue = F("Weite Schlüppe");
        break;
    }
    case 331259:
    {
        returnValue = F("Weite Str.");
        break;
    }
    case 331260:
    {
        returnValue = F("Weite Twete");
        break;
    }
    case 331261:
    {
        returnValue = F("Weite Umgebung");
        break;
    }
    case 331262:
    {
        returnValue = F("Weite Welt");
        break;
    }
    case 331263:
    {
        returnValue = F("Weite Wiese");
        break;
    }
    case 331264:
    {
        returnValue = F("Weite Äcker Weg");
        break;
    }
    case 331265:
    {
        returnValue = F("Weitebrunnen");
        break;
    }
    case 331266:
    {
        returnValue = F("Weitefelder Garten");
        break;
    }
    case 331267:
    {
        returnValue = F("Weitefelder Str.");
        break;
    }
    case 331268:
    {
        returnValue = F("Weitegasse");
        break;
    }
    case 331269:
    {
        returnValue = F("Weiten-Gesäßer Weg");
        break;
    }
    case 331270:
    {
        returnValue = F("Weiten-Gesäßer-Str.");
        break;
    }
    case 331271:
    {
        returnValue = F("Weitenau");
        break;
    }
    case 331272:
    {
        returnValue = F("Weitenauer Str.");
        break;
    }
    case 331273:
    {
        returnValue = F("Weitenbornstr.");
        break;
    }
    case 331274:
    {
        returnValue = F("Weitenburger Str.");
        break;
    }
    case 331275:
    {
        returnValue = F("Weitendorf");
        break;
    }
    case 331276:
    {
        returnValue = F("Weitendorf Hof");
        break;
    }
    case 331277:
    {
        returnValue = F("Weitendorfer Str.");
        break;
    }
    case 331278:
    {
        returnValue = F("Weitenfeld");
        break;
    }
    case 331279:
    {
        returnValue = F("Weitengasse");
        break;
    }
    case 331280:
    {
        returnValue = F("Weitengrundweg");
        break;
    }
    case 331281:
    {
        returnValue = F("Weitenhäger Landweg");
        break;
    }
    case 331282:
    {
        returnValue = F("Weitenhülln");
        break;
    }
    case 331283:
    {
        returnValue = F("Weitenhüllner Str.");
        break;
    }
    case 331284:
    {
        returnValue = F("Weitenkamp");
        break;
    }
    case 331285:
    {
        returnValue = F("Weitenruß");
        break;
    }
    case 331286:
    {
        returnValue = F("Weitenunger Str.");
        break;
    }
    case 331287:
    {
        returnValue = F("Weiter Krambuden");
        break;
    }
    case 331288:
    {
        returnValue = F("Weiter Weg");
        break;
    }
    case 331289:
    {
        returnValue = F("Weiterdinger Str.");
        break;
    }
    case 331290:
    {
        returnValue = F("Weitergasse");
        break;
    }
    case 331291:
    {
        returnValue = F("Weiterndorfer Str.");
        break;
    }
    case 331292:
    {
        returnValue = F("Weitersbacher-Hütte");
        break;
    }
    case 331293:
    {
        returnValue = F("Weitersbachstr.");
        break;
    }
    case 331294:
    {
        returnValue = F("Weitersburger Weg");
        break;
    }
    case 331295:
    {
        returnValue = F("Weitersburgweg");
        break;
    }
    case 331296:
    {
        returnValue = F("Weitersdorfer Hauptstr.");
        break;
    }
    case 331297:
    {
        returnValue = F("Weitersdorfer Str.");
        break;
    }
    case 331298:
    {
        returnValue = F("Weitersfelder Str.");
        break;
    }
    case 331299:
    {
        returnValue = F("Weitershainer Str.");
        break;
    }
    case 331300:
    {
        returnValue = F("Weitershäuser Str.");
        break;
    }
    case 331301:
    {
        returnValue = F("Weitersrodaer Str.");
        break;
    }
    case 331302:
    {
        returnValue = F("Weiterstädter Landstr.");
        break;
    }
    case 331303:
    {
        returnValue = F("Weiterstädter Str.");
        break;
    }
    case 331304:
    {
        returnValue = F("Weiterstädter Weg");
        break;
    }
    case 331305:
    {
        returnValue = F("Weitersweg");
        break;
    }
    case 331306:
    {
        returnValue = F("Weitersweiler Str.");
        break;
    }
    case 331307:
    {
        returnValue = F("Weitersweiler Weg");
        break;
    }
    case 331308:
    {
        returnValue = F("Weiteröder Weg");
        break;
    }
    case 331309:
    {
        returnValue = F("Weites Tal");
        break;
    }
    case 331310:
    {
        returnValue = F("Weitesfeld");
        break;
    }
    case 331311:
    {
        returnValue = F("Weitesthaler Str.");
        break;
    }
    case 331312:
    {
        returnValue = F("Weitewelt");
        break;
    }
    case 331313:
    {
        returnValue = F("Weitfelder Weg");
        break;
    }
    case 331314:
    {
        returnValue = F("Weitfelderstr.");
        break;
    }
    case 331315:
    {
        returnValue = F("Weitfeldstr.");
        break;
    }
    case 331316:
    {
        returnValue = F("Weitfeldweg");
        break;
    }
    case 331317:
    {
        returnValue = F("Weitgasse");
        break;
    }
    case 331318:
    {
        returnValue = F("Weitgaßstr.");
        break;
    }
    case 331319:
    {
        returnValue = F("Weitgendorfer Chaussee");
        break;
    }
    case 331320:
    {
        returnValue = F("Weithartstr.");
        break;
    }
    case 331321:
    {
        returnValue = F("Weithartweg");
        break;
    }
    case 331322:
    {
        returnValue = F("Weithochstr.");
        break;
    }
    case 331323:
    {
        returnValue = F("Weithäuslesweg");
        break;
    }
    case 331324:
    {
        returnValue = F("Weitiner Str.");
        break;
    }
    case 331325:
    {
        returnValue = F("Weitinger Kniebisstr.");
        break;
    }
    case 331326:
    {
        returnValue = F("Weitinger Mühle");
        break;
    }
    case 331327:
    {
        returnValue = F("Weitinger Str.");
        break;
    }
    case 331328:
    {
        returnValue = F("Weitingerstr.");
        break;
    }
    case 331329:
    {
        returnValue = F("Weitisberga");
        break;
    }
    case 331330:
    {
        returnValue = F("Weitkamp");
        break;
    }
    case 331331:
    {
        returnValue = F("Weitkampstr.");
        break;
    }
    case 331332:
    {
        returnValue = F("Weitkampweg");
        break;
    }
    case 331333:
    {
        returnValue = F("Weitlachestr.");
        break;
    }
    case 331334:
    {
        returnValue = F("Weitlahner Str.");
        break;
    }
    case 331335:
    {
        returnValue = F("Weitlahnerstr.");
        break;
    }
    case 331336:
    {
        returnValue = F("Weitlandsweg");
        break;
    }
    case 331337:
    {
        returnValue = F("Weitlingstr.");
        break;
    }
    case 331338:
    {
        returnValue = F("Weitlweg");
        break;
    }
    case 331339:
    {
        returnValue = F("Weitlückenweg");
        break;
    }
    case 331340:
    {
        returnValue = F("Weitmar Mitte");
        break;
    }
    case 331341:
    {
        returnValue = F("Weitmarer Platz");
        break;
    }
    case 331342:
    {
        returnValue = F("Weitmarer Str.");
        break;
    }
    case 331343:
    {
        returnValue = F("Weitmarer-Holz-Str.");
        break;
    }
    case 331344:
    {
        returnValue = F("Weitmarser Sträßchen");
        break;
    }
    case 331345:
    {
        returnValue = F("Weitmarserweg");
        break;
    }
    case 331346:
    {
        returnValue = F("Weitmoosweg");
        break;
    }
    case 331347:
    {
        returnValue = F("Weitoldstr.");
        break;
    }
    case 331348:
    {
        returnValue = F("Weitprechtser Str.");
        break;
    }
    case 331349:
    {
        returnValue = F("Weitscheidter Str.");
        break;
    }
    case 331350:
    {
        returnValue = F("Weitscher Str.");
        break;
    }
    case 331351:
    {
        returnValue = F("Weitschkenweg");
        break;
    }
    case 331352:
    {
        returnValue = F("Weitseestr.");
        break;
    }
    case 331353:
    {
        returnValue = F("Weitsprung");
        break;
    }
    case 331354:
    {
        returnValue = F("Weittalweg");
        break;
    }
    case 331355:
    {
        returnValue = F("Weittenauerstr.");
        break;
    }
    case 331356:
    {
        returnValue = F("Weitwiesen");
        break;
    }
    case 331357:
    {
        returnValue = F("Weitwiesenring");
        break;
    }
    case 331358:
    {
        returnValue = F("Weitwiesstr.");
        break;
    }
    case 331359:
    {
        returnValue = F("Weitzbachstr.");
        break;
    }
    case 331360:
    {
        returnValue = F("Weitzbitze");
        break;
    }
    case 331361:
    {
        returnValue = F("Weitzelstr.");
        break;
    }
    case 331362:
    {
        returnValue = F("Weitzesweg");
        break;
    }
    case 331363:
    {
        returnValue = F("Weitzgrunder Allee");
        break;
    }
    case 331364:
    {
        returnValue = F("Weitzgrunder Str.");
        break;
    }
    case 331365:
    {
        returnValue = F("Weitzgrunder Weg");
        break;
    }
    case 331366:
    {
        returnValue = F("Weitzkaut");
        break;
    }
    case 331367:
    {
        returnValue = F("Weitzmannstr.");
        break;
    }
    case 331368:
    {
        returnValue = F("Weitzmühlener Dorfstr.");
        break;
    }
    case 331369:
    {
        returnValue = F("Weitzmühlener Str.");
        break;
    }
    case 331370:
    {
        returnValue = F("Weitzschenhain");
        break;
    }
    case 331371:
    {
        returnValue = F("Weitzscher Garten");
        break;
    }
    case 331372:
    {
        returnValue = F("Weitzstr.");
        break;
    }
    case 331373:
    {
        returnValue = F("Weitzweg");
        break;
    }
    case 331374:
    {
        returnValue = F("Weitzäckerstr.");
        break;
    }
    case 331375:
    {
        returnValue = F("Weiweg");
        break;
    }
    case 331376:
    {
        returnValue = F("Weixdorfer Str.");
        break;
    }
    case 331377:
    {
        returnValue = F("Weixerauer Str.");
        break;
    }
    case 331378:
    {
        returnValue = F("Weizackerstr.");
        break;
    }
    case 331379:
    {
        returnValue = F("Weizauer Weg");
        break;
    }
    case 331380:
    {
        returnValue = F("Weizbühl");
        break;
    }
    case 331381:
    {
        returnValue = F("Weizenacker");
        break;
    }
    case 331382:
    {
        returnValue = F("Weizenackerweg");
        break;
    }
    case 331383:
    {
        returnValue = F("Weizenberg");
        break;
    }
    case 331384:
    {
        returnValue = F("Weizenberge");
        break;
    }
    case 331385:
    {
        returnValue = F("Weizenbergsweg");
        break;
    }
    case 331386:
    {
        returnValue = F("Weizenbleek");
        break;
    }
    case 331387:
    {
        returnValue = F("Weizenbornschneise");
        break;
    }
    case 331388:
    {
        returnValue = F("Weizenbrede");
        break;
    }
    case 331389:
    {
        returnValue = F("Weizenbrink");
        break;
    }
    case 331390:
    {
        returnValue = F("Weizeneck");
        break;
    }
    case 331391:
    {
        returnValue = F("Weizener Steg");
        break;
    }
    case 331392:
    {
        returnValue = F("Weizenfeld");
        break;
    }
    case 331393:
    {
        returnValue = F("Weizenfeldring");
        break;
    }
    case 331394:
    {
        returnValue = F("Weizenflur");
        break;
    }
    case 331395:
    {
        returnValue = F("Weizengarten");
        break;
    }
    case 331396:
    {
        returnValue = F("Weizengasse");
        break;
    }
    case 331397:
    {
        returnValue = F("Weizengewann");
        break;
    }
    case 331398:
    {
        returnValue = F("Weizengrund");
        break;
    }
    case 331399:
    {
        returnValue = F("Weizenhagen");
        break;
    }
    case 331400:
    {
        returnValue = F("Weizenhübelstr.");
        break;
    }
    case 331401:
    {
        returnValue = F("Weizenkamp");
        break;
    }
    case 331402:
    {
        returnValue = F("Weizenkoppelweg");
        break;
    }
    case 331403:
    {
        returnValue = F("Weizenmühle");
        break;
    }
    case 331404:
    {
        returnValue = F("Weizenring");
        break;
    }
    case 331405:
    {
        returnValue = F("Weizenstieg");
        break;
    }
    case 331406:
    {
        returnValue = F("Weizenstr.");
        break;
    }
    case 331407:
    {
        returnValue = F("Weizenweg");
        break;
    }
    case 331408:
    {
        returnValue = F("Weizenwinkel");
        break;
    }
    case 331409:
    {
        returnValue = F("Weizenäcker");
        break;
    }
    case 331410:
    {
        returnValue = F("Weizer Str.");
        break;
    }
    case 331411:
    {
        returnValue = F("Weizern");
        break;
    }
    case 331412:
    {
        returnValue = F("Weizgang");
        break;
    }
    case 331413:
    {
        returnValue = F("Weizkamp");
        break;
    }
    case 331414:
    {
        returnValue = F("Weizlandweg");
        break;
    }
    case 331415:
    {
        returnValue = F("Weizsäckerstr.");
        break;
    }
    case 331416:
    {
        returnValue = F("Weiztstr.");
        break;
    }
    case 331417:
    {
        returnValue = F("Weizäcker");
        break;
    }
    case 331418:
    {
        returnValue = F("Weiß-Ferdl-Str.");
        break;
    }
    case 331419:
    {
        returnValue = F("Weiß-Ferdl-Weg");
        break;
    }
    case 331420:
    {
        returnValue = F("Weiß-Str.");
        break;
    }
    case 331421:
    {
        returnValue = F("Weiß-Taubener Weg");
        break;
    }
    case 331422:
    {
        returnValue = F("Weißachaustr.");
        break;
    }
    case 331423:
    {
        returnValue = F("Weißachdamm");
        break;
    }
    case 331424:
    {
        returnValue = F("Weißachdammweg");
        break;
    }
    case 331425:
    {
        returnValue = F("Weißachener Str.");
        break;
    }
    case 331426:
    {
        returnValue = F("Weißacher Weg");
        break;
    }
    case 331427:
    {
        returnValue = F("Weißachstr.");
        break;
    }
    case 331428:
    {
        returnValue = F("Weißacker Dorfstr.");
        break;
    }
    case 331429:
    {
        returnValue = F("Weißacker Papiermühle");
        break;
    }
    case 331430:
    {
        returnValue = F("Weißacker Pechhütte");
        break;
    }
    case 331431:
    {
        returnValue = F("Weißacker Torfstich");
        break;
    }
    case 331432:
    {
        returnValue = F("Weißacker Waldstr.");
        break;
    }
    case 331433:
    {
        returnValue = F("Weißackerstr.");
        break;
    }
    case 331434:
    {
        returnValue = F("Weißackerweg");
        break;
    }
    case 331435:
    {
        returnValue = F("Weißager Dorfstr.");
        break;
    }
    case 331436:
    {
        returnValue = F("Weißagker Str.");
        break;
    }
    case 331437:
    {
        returnValue = F("Weißagker Weg");
        break;
    }
    case 331438:
    {
        returnValue = F("Weißanger");
        break;
    }
    case 331439:
    {
        returnValue = F("Weißbach");
        break;
    }
    case 331440:
    {
        returnValue = F("Weißbacher Str.");
        break;
    }
    case 331441:
    {
        returnValue = F("Weißbachstr.");
        break;
    }
    case 331442:
    {
        returnValue = F("Weißbachtal");
        break;
    }
    case 331443:
    {
        returnValue = F("Weißbachweg");
        break;
    }
    case 331444:
    {
        returnValue = F("Weißbaumstr.");
        break;
    }
    case 331445:
    {
        returnValue = F("Weißberg");
        break;
    }
    case 331446:
    {
        returnValue = F("Weißbergstr.");
        break;
    }
    case 331447:
    {
        returnValue = F("Weißbirkenweg");
        break;
    }
    case 331448:
    {
        returnValue = F("Weißbornbrücke");
        break;
    }
    case 331449:
    {
        returnValue = F("Weißborr");
        break;
    }
    case 331450:
    {
        returnValue = F("Weißbrotrottsweg");
        break;
    }
    case 331451:
    {
        returnValue = F("Weißbrunnen");
        break;
    }
    case 331452:
    {
        returnValue = F("Weißbrunnenholzweg");
        break;
    }
    case 331453:
    {
        returnValue = F("Weißbrunntal");
        break;
    }
    case 331454:
    {
        returnValue = F("Weißbuchenstr.");
        break;
    }
    case 331455:
    {
        returnValue = F("Weißbuchenweg");
        break;
    }
    case 331456:
    {
        returnValue = F("Weißbucher Str.");
        break;
    }
    case 331457:
    {
        returnValue = F("Weißburgunderhof");
        break;
    }
    case 331458:
    {
        returnValue = F("Weißburgunderweg");
        break;
    }
    case 331459:
    {
        returnValue = F("Weißdorfer Str.");
        break;
    }
    case 331460:
    {
        returnValue = F("Weißdorfer Weg");
        break;
    }
    case 331461:
    {
        returnValue = F("Weißdorn");
        break;
    }
    case 331462:
    {
        returnValue = F("Weißdornallee");
        break;
    }
    case 331463:
    {
        returnValue = F("Weißdornbogen");
        break;
    }
    case 331464:
    {
        returnValue = F("Weißdornbusch");
        break;
    }
    case 331465:
    {
        returnValue = F("Weißdornflur");
        break;
    }
    case 331466:
    {
        returnValue = F("Weißdornhag");
        break;
    }
    case 331467:
    {
        returnValue = F("Weißdornhecke");
        break;
    }
    case 331468:
    {
        returnValue = F("Weißdornhof");
        break;
    }
    case 331469:
    {
        returnValue = F("Weißdornring");
        break;
    }
    case 331470:
    {
        returnValue = F("Weißdornstieg");
        break;
    }
    case 331471:
    {
        returnValue = F("Weißdornstr.");
        break;
    }
    case 331472:
    {
        returnValue = F("Weißdornweg");
        break;
    }
    case 331473:
    {
        returnValue = F("Weiße Ahe");
        break;
    }
    case 331474:
    {
        returnValue = F("Weiße Brede");
        break;
    }
    case 331475:
    {
        returnValue = F("Weiße Breden");
        break;
    }
    case 331476:
    {
        returnValue = F("Weiße Breite");
        break;
    }
    case 331477:
    {
        returnValue = F("Weiße Brücke");
        break;
    }
    case 331478:
    {
        returnValue = F("Weiße Brücken");
        break;
    }
    case 331479:
    {
        returnValue = F("Weiße Ecke");
        break;
    }
    case 331480:
    {
        returnValue = F("Weiße Erde");
        break;
    }
    case 331481:
    {
        returnValue = F("Weiße Gasse");
        break;
    }
    case 331482:
    {
        returnValue = F("Weiße Gelster");
        break;
    }
    case 331483:
    {
        returnValue = F("Weiße Halde");
        break;
    }
    case 331484:
    {
        returnValue = F("Weiße Heide");
        break;
    }
    case 331485:
    {
        returnValue = F("Weiße Hülle");
        break;
    }
    case 331486:
    {
        returnValue = F("Weiße Leite");
        break;
    }
    case 331487:
    {
        returnValue = F("Weiße Mark");
        break;
    }
    case 331488:
    {
        returnValue = F("Weiße Marter");
        break;
    }
    case 331489:
    {
        returnValue = F("Weiße Marterstr.");
        break;
    }
    case 331490:
    {
        returnValue = F("Weiße Mauer");
        break;
    }
    case 331491:
    {
        returnValue = F("Weiße Mühle");
        break;
    }
    case 331492:
    {
        returnValue = F("Weiße Reute");
        break;
    }
    case 331493:
    {
        returnValue = F("Weiße Riede");
        break;
    }
    case 331494:
    {
        returnValue = F("Weiße Rose");
        break;
    }
    case 331495:
    {
        returnValue = F("Weiße Sandgrube");
        break;
    }
    case 331496:
    {
        returnValue = F("Weiße Schanze");
        break;
    }
    case 331497:
    {
        returnValue = F("Weiße Schneise");
        break;
    }
    case 331498:
    {
        returnValue = F("Weiße Seehau");
        break;
    }
    case 331499:
    {
        returnValue = F("Weiße Siedlung");
        break;
    }
    case 331500:
    {
        returnValue = F("Weiße Steige");
        break;
    }
    case 331501:
    {
        returnValue = F("Weiße Str.");
        break;
    }
    case 331502:
    {
        returnValue = F("Weiße Stücker");
        break;
    }
    case 331503:
    {
        returnValue = F("Weiße Wand");
        break;
    }
    case 331504:
    {
        returnValue = F("Weiße-Burg-Str.");
        break;
    }
    case 331505:
    {
        returnValue = F("Weiße-Hahnen-Gasse");
        break;
    }
    case 331506:
    {
        returnValue = F("Weiße-Haus-Chaussee");
        break;
    }
    case 331507:
    {
        returnValue = F("Weiße-Hütte-Weg");
        break;
    }
    case 331508:
    {
        returnValue = F("Weiße-Kreuz-Str.");
        break;
    }
    case 331509:
    {
        returnValue = F("Weiße-Lamm-Gasse");
        break;
    }
    case 331510:
    {
        returnValue = F("Weiße-Marter-Str.");
        break;
    }
    case 331511:
    {
        returnValue = F("Weiße-Raben-Str.");
        break;
    }
    case 331512:
    {
        returnValue = F("Weiße-Rose-Allee");
        break;
    }
    case 331513:
    {
        returnValue = F("Weiße-Steine-Weg");
        break;
    }
    case 331514:
    {
        returnValue = F("Weiße-Tor-Str.");
        break;
    }
    case 331515:
    {
        returnValue = F("Weiße-Turm-Str.");
        break;
    }
    case 331516:
    {
        returnValue = F("Weißegasse");
        break;
    }
    case 331517:
    {
        returnValue = F("Weißehütte");
        break;
    }
    case 331518:
    {
        returnValue = F("Weißehütte-Süd");
        break;
    }
    case 331519:
    {
        returnValue = F("Weißelberg Rundwanderweg");
        break;
    }
    case 331520:
    {
        returnValue = F("Weißen");
        break;
    }
    case 331521:
    {
        returnValue = F("Weißen Pferdchen");
        break;
    }
    case 331522:
    {
        returnValue = F("Weißenauer Halde");
        break;
    }
    case 331523:
    {
        returnValue = F("Weißenauweg");
        break;
    }
    case 331524:
    {
        returnValue = F("Weißenbach");
        break;
    }
    case 331525:
    {
        returnValue = F("Weißenbacher Str.");
        break;
    }
    case 331526:
    {
        returnValue = F("Weißenbacher Weg");
        break;
    }
    case 331527:
    {
        returnValue = F("Weißenbachstr.");
        break;
    }
    case 331528:
    {
        returnValue = F("Weißenbachweg");
        break;
    }
    case 331529:
    {
        returnValue = F("Weißenbeger Str.");
        break;
    }
    case 331530:
    {
        returnValue = F("Weißenberg");
        break;
    }
    case 331531:
    {
        returnValue = F("Weißenberger Allee");
        break;
    }
    case 331532:
    {
        returnValue = F("Weißenberger Landstr.");
        break;
    }
    case 331533:
    {
        returnValue = F("Weißenberger Str.");
        break;
    }
    case 331534:
    {
        returnValue = F("Weißenberger Weg");
        break;
    }
    case 331535:
    {
        returnValue = F("Weißenbergerstr.");
        break;
    }
    case 331536:
    {
        returnValue = F("Weißenbergstr.");
        break;
    }
    case 331537:
    {
        returnValue = F("Weißenbergsweg");
        break;
    }
    case 331538:
    {
        returnValue = F("Weißenbergweg");
        break;
    }
    case 331539:
    {
        returnValue = F("Weißenbildstr.");
        break;
    }
    case 331540:
    {
        returnValue = F("Weißenborner Str.");
        break;
    }
    case 331541:
    {
        returnValue = F("Weißenborner Weg");
        break;
    }
    case 331542:
    {
        returnValue = F("Weißenbronner Str.");
        break;
    }
    case 331543:
    {
        returnValue = F("Weißenbrunn");
        break;
    }
    case 331544:
    {
        returnValue = F("Weißenbrunner Hauptstr.");
        break;
    }
    case 331545:
    {
        returnValue = F("Weißenbrunner Str.");
        break;
    }
    case 331546:
    {
        returnValue = F("Weißenbrunner Weg");
        break;
    }
    case 331547:
    {
        returnValue = F("Weißenburg");
        break;
    }
    case 331548:
    {
        returnValue = F("Weißenburger Platz");
        break;
    }
    case 331549:
    {
        returnValue = F("Weißenburger Str.");
        break;
    }
    case 331550:
    {
        returnValue = F("Weißenburger Weg");
        break;
    }
    case 331551:
    {
        returnValue = F("Weißenburgring");
        break;
    }
    case 331552:
    {
        returnValue = F("Weißenburgstr.");
        break;
    }
    case 331553:
    {
        returnValue = F("Weißenbörnchen");
        break;
    }
    case 331554:
    {
        returnValue = F("Weißenbörner Str.");
        break;
    }
    case 331555:
    {
        returnValue = F("Weißenbörner Weg");
        break;
    }
    case 331556:
    {
        returnValue = F("Weißenbühl");
        break;
    }
    case 331557:
    {
        returnValue = F("Weißendiez");
        break;
    }
    case 331558:
    {
        returnValue = F("Weißendiezer Str.");
        break;
    }
    case 331559:
    {
        returnValue = F("Weißener Str.");
        break;
    }
    case 331560:
    {
        returnValue = F("Weißener Weg");
        break;
    }
    case 331561:
    {
        returnValue = F("Weißenfeld");
        break;
    }
    case 331562:
    {
        returnValue = F("Weißenfelde");
        break;
    }
    case 331563:
    {
        returnValue = F("Weißenfelder Str.");
        break;
    }
    case 331564:
    {
        returnValue = F("Weißenfelder Weg");
        break;
    }
    case 331565:
    {
        returnValue = F("Weißenfelderstr.");
        break;
    }
    case 331566:
    {
        returnValue = F("Weißenfeldplatz");
        break;
    }
    case 331567:
    {
        returnValue = F("Weißenfeldweg");
        break;
    }
    case 331568:
    {
        returnValue = F("Weißenfels");
        break;
    }
    case 331569:
    {
        returnValue = F("Weißenfelser Landstr.");
        break;
    }
    case 331570:
    {
        returnValue = F("Weißenfelser Ring");
        break;
    }
    case 331571:
    {
        returnValue = F("Weißenfelser Str.");
        break;
    }
    case 331572:
    {
        returnValue = F("Weißenfelser Weg");
        break;
    }
    case 331573:
    {
        returnValue = F("Weißenhof");
        break;
    }
    case 331574:
    {
        returnValue = F("Weißenhofstr.");
        break;
    }
    case 331575:
    {
        returnValue = F("Weißenhofweg");
        break;
    }
    case 331576:
    {
        returnValue = F("Weißenhorner Str.");
        break;
    }
    case 331577:
    {
        returnValue = F("Weißenhornstr.");
        break;
    }
    case 331578:
    {
        returnValue = F("Weißenkirchener Str.");
        break;
    }
    case 331579:
    {
        returnValue = F("Weißenkirchner Str.");
        break;
    }
    case 331580:
    {
        returnValue = F("Weißenlohweg");
        break;
    }
    case 331581:
    {
        returnValue = F("Weißenmoor");
        break;
    }
    case 331582:
    {
        returnValue = F("Weißenmoorstr.");
        break;
    }
    case 331583:
    {
        returnValue = F("Weißenpferd");
        break;
    }
    case 331584:
    {
        returnValue = F("Weißenportz");
        break;
    }
    case 331585:
    {
        returnValue = F("Weißenregen");
        break;
    }
    case 331586:
    {
        returnValue = F("Weißenregener Str.");
        break;
    }
    case 331587:
    {
        returnValue = F("Weißenrichtweg");
        break;
    }
    case 331588:
    {
        returnValue = F("Weißenried");
        break;
    }
    case 331589:
    {
        returnValue = F("Weißensander Str.");
        break;
    }
    case 331590:
    {
        returnValue = F("Weißensander Weg");
        break;
    }
    case 331591:
    {
        returnValue = F("Weißenschirmbacher Str.");
        break;
    }
    case 331592:
    {
        returnValue = F("Weißensee");
        break;
    }
    case 331593:
    {
        returnValue = F("Weißenseelinie");
        break;
    }
    case 331594:
    {
        returnValue = F("Weißenseer Str.");
        break;
    }
    case 331595:
    {
        returnValue = F("Weißenseer Tor");
        break;
    }
    case 331596:
    {
        returnValue = F("Weißenseer Weg");
        break;
    }
    case 331597:
    {
        returnValue = F("Weißenseestr.");
        break;
    }
    case 331598:
    {
        returnValue = F("Weißenseeweg");
        break;
    }
    case 331599:
    {
        returnValue = F("Weißenstein");
        break;
    }
    case 331600:
    {
        returnValue = F("Weißensteinblick");
        break;
    }
    case 331601:
    {
        returnValue = F("Weißensteiner Fußweg");
        break;
    }
    case 331602:
    {
        returnValue = F("Weißensteiner Str.");
        break;
    }
    case 331603:
    {
        returnValue = F("Weißensteiner Weg");
        break;
    }
    case 331604:
    {
        returnValue = F("Weißensteinerstr.");
        break;
    }
    case 331605:
    {
        returnValue = F("Weißensteinstr.");
        break;
    }
    case 331606:
    {
        returnValue = F("Weißensteinsweg");
        break;
    }
    case 331607:
    {
        returnValue = F("Weißensteinweg");
        break;
    }
    case 331608:
    {
        returnValue = F("Weißenstraßl");
        break;
    }
    case 331609:
    {
        returnValue = F("Weißenstädter Str.");
        break;
    }
    case 331610:
    {
        returnValue = F("Weißenthurmer Str.");
        break;
    }
    case 331611:
    {
        returnValue = F("Weißenweg");
        break;
    }
    case 331612:
    {
        returnValue = F("Weißenöder Weg");
        break;
    }
    case 331613:
    {
        returnValue = F("Weißer Acker");
        break;
    }
    case 331614:
    {
        returnValue = F("Weißer Berg");
        break;
    }
    case 331615:
    {
        returnValue = F("Weißer Bildweg");
        break;
    }
    case 331616:
    {
        returnValue = F("Weißer Brink");
        break;
    }
    case 331617:
    {
        returnValue = F("Weißer Bruch");
        break;
    }
    case 331618:
    {
        returnValue = F("Weißer Damm");
        break;
    }
    case 331619:
    {
        returnValue = F("Weißer Flath");
        break;
    }
    case 331620:
    {
        returnValue = F("Weißer Garten");
        break;
    }
    case 331621:
    {
        returnValue = F("Weißer Gasse");
        break;
    }
    case 331622:
    {
        returnValue = F("Weißer Grund");
        break;
    }
    case 331623:
    {
        returnValue = F("Weißer Hirsch");
        break;
    }
    case 331624:
    {
        returnValue = F("Weißer Hof");
        break;
    }
    case 331625:
    {
        returnValue = F("Weißer Kamp");
        break;
    }
    case 331626:
    {
        returnValue = F("Weißer Kuhl");
        break;
    }
    case 331627:
    {
        returnValue = F("Weißer Moorweg");
        break;
    }
    case 331628:
    {
        returnValue = F("Weißer Morgen");
        break;
    }
    case 331629:
    {
        returnValue = F("Weißer Rabe");
        break;
    }
    case 331630:
    {
        returnValue = F("Weißer Rain");
        break;
    }
    case 331631:
    {
        returnValue = F("Weißer Rainpfad");
        break;
    }
    case 331632:
    {
        returnValue = F("Weißer Sand");
        break;
    }
    case 331633:
    {
        returnValue = F("Weißer Sandweg");
        break;
    }
    case 331634:
    {
        returnValue = F("Weißer Steg");
        break;
    }
    case 331635:
    {
        returnValue = F("Weißer Stein");
        break;
    }
    case 331636:
    {
        returnValue = F("Weißer Steinschlagweg");
        break;
    }
    case 331637:
    {
        returnValue = F("Weißer Steinweg");
        break;
    }
    case 331638:
    {
        returnValue = F("Weißer Str.");
        break;
    }
    case 331639:
    {
        returnValue = F("Weißer Tunnel");
        break;
    }
    case 331640:
    {
        returnValue = F("Weißer Weg");
        break;
    }
    case 331641:
    {
        returnValue = F("Weißer Zahlenweg");
        break;
    }
    case 331642:
    {
        returnValue = F("Weißer-Flieder-Platz");
        break;
    }
    case 331643:
    {
        returnValue = F("Weißer-Kamp-Weg");
        break;
    }
    case 331644:
    {
        returnValue = F("Weißer-Stein-Str.");
        break;
    }
    case 331645:
    {
        returnValue = F("Weißer-Stein-Weg");
        break;
    }
    case 331646:
    {
        returnValue = F("Weißerbergweg");
        break;
    }
    case 331647:
    {
        returnValue = F("Weißerde");
        break;
    }
    case 331648:
    {
        returnValue = F("Weißerdenweg");
        break;
    }
    case 331649:
    {
        returnValue = F("Weißerdeweg");
        break;
    }
    case 331650:
    {
        returnValue = F("Weißerdstr.");
        break;
    }
    case 331651:
    {
        returnValue = F("Weißergasse");
        break;
    }
    case 331652:
    {
        returnValue = F("Weißerhorner Weg");
        break;
    }
    case 331653:
    {
        returnValue = F("Weißeritzgäßchen");
        break;
    }
    case 331654:
    {
        returnValue = F("Weißeritzhangweg");
        break;
    }
    case 331655:
    {
        returnValue = F("Weißeritzhangweg / Abendleite");
        break;
    }
    case 331656:
    {
        returnValue = F("Weißeritzstr.");
        break;
    }
    case 331657:
    {
        returnValue = F("Weißeritztalstr.");
        break;
    }
    case 331658:
    {
        returnValue = F("Weißeritzweg");
        break;
    }
    case 331659:
    {
        returnValue = F("Weißerlenstr.");
        break;
    }
    case 331660:
    {
        returnValue = F("Weißeroßgasse");
        break;
    }
    case 331661:
    {
        returnValue = F("Weißerstr.");
        break;
    }
    case 331662:
    {
        returnValue = F("Weißerweg");
        break;
    }
    case 331663:
    {
        returnValue = F("Weißes Feld");
        break;
    }
    case 331664:
    {
        returnValue = F("Weißes Moor");
        break;
    }
    case 331665:
    {
        returnValue = F("Weißes Roß");
        break;
    }
    case 331666:
    {
        returnValue = F("Weißes Venn");
        break;
    }
    case 331667:
    {
        returnValue = F("Weißes-Kreuz-Str.");
        break;
    }
    case 331668:
    {
        returnValue = F("Weißestiegsfeld");
        break;
    }
    case 331669:
    {
        returnValue = F("Weißewarte-Grieben");
        break;
    }
    case 331670:
    {
        returnValue = F("Weißewarter Dorfstr.");
        break;
    }
    case 331671:
    {
        returnValue = F("Weißewarter Lindenstr.");
        break;
    }
    case 331672:
    {
        returnValue = F("Weißewarter Str.");
        break;
    }
    case 331673:
    {
        returnValue = F("Weißfeld");
        break;
    }
    case 331674:
    {
        returnValue = F("Weißfrauengasse");
        break;
    }
    case 331675:
    {
        returnValue = F("Weißfrauenhofstr.");
        break;
    }
    case 331676:
    {
        returnValue = F("Weißfrauenstr.");
        break;
    }
    case 331677:
    {
        returnValue = F("Weißgasse");
        break;
    }
    case 331678:
    {
        returnValue = F("Weißgaß");
        break;
    }
    case 331679:
    {
        returnValue = F("Weißgerbergasse");
        break;
    }
    case 331680:
    {
        returnValue = F("Weißgerbergraben");
        break;
    }
    case 331681:
    {
        returnValue = F("Weißgerbersteig");
        break;
    }
    case 331682:
    {
        returnValue = F("Weißgerberstr.");
        break;
    }
    case 331683:
    {
        returnValue = F("Weißgerberweg");
        break;
    }
    case 331684:
    {
        returnValue = F("Weißgässle");
        break;
    }
    case 331685:
    {
        returnValue = F("Weißgäßle");
        break;
    }
    case 331686:
    {
        returnValue = F("Weißhaidenweg");
        break;
    }
    case 331687:
    {
        returnValue = F("Weißhanstr.");
        break;
    }
    case 331688:
    {
        returnValue = F("Weißhauptstr.");
        break;
    }
    case 331689:
    {
        returnValue = F("Weißhausstr.");
        break;
    }
    case 331690:
    {
        returnValue = F("Weißheimerstr.");
        break;
    }
    case 331691:
    {
        returnValue = F("Weißhirschweg");
        break;
    }
    case 331692:
    {
        returnValue = F("Weißhofer Str.");
        break;
    }
    case 331693:
    {
        returnValue = F("Weißholzblick");
        break;
    }
    case 331694:
    {
        returnValue = F("Weißig");
        break;
    }
    case 331695:
    {
        returnValue = F("Weißig Deubener Weg");
        break;
    }
    case 331696:
    {
        returnValue = F("Weißiger Dorfstr.");
        break;
    }
    case 331697:
    {
        returnValue = F("Weißiger Hang");
        break;
    }
    case 331698:
    {
        returnValue = F("Weißiger Höhe");
        break;
    }
    case 331699:
    {
        returnValue = F("Weißiger Str.");
        break;
    }
    case 331700:
    {
        returnValue = F("Weißinger Str.");
        break;
    }
    case 331701:
    {
        returnValue = F("Weißkeißeler Weg");
        break;
    }
    case 331702:
    {
        returnValue = F("Weißkirchener Str.");
        break;
    }
    case 331703:
    {
        returnValue = F("Weißkirchener Weg");
        break;
    }
    case 331704:
    {
        returnValue = F("Weißkirchenweg");
        break;
    }
    case 331705:
    {
        returnValue = F("Weißkleeweg");
        break;
    }
    case 331706:
    {
        returnValue = F("Weißkopfchaussee");
        break;
    }
    case 331707:
    {
        returnValue = F("Weißkopfstr.");
        break;
    }
    case 331708:
    {
        returnValue = F("Weißkreuzgasse");
        break;
    }
    case 331709:
    {
        returnValue = F("Weißkreuzstr.");
        break;
    }
    case 331710:
    {
        returnValue = F("Weißkreuzweg");
        break;
    }
    case 331711:
    {
        returnValue = F("Weißkreuzäcker");
        break;
    }
    case 331712:
    {
        returnValue = F("Weißlackerplatz");
        break;
    }
    case 331713:
    {
        returnValue = F("Weißlandstr.");
        break;
    }
    case 331714:
    {
        returnValue = F("Weißlederweg");
        break;
    }
    case 331715:
    {
        returnValue = F("Weißleite");
        break;
    }
    case 331716:
    {
        returnValue = F("Weißlenreuther Weg");
        break;
    }
    case 331717:
    {
        returnValue = F("Weißlensburger Str.");
        break;
    }
    case 331718:
    {
        returnValue = F("Weißliliengasse");
        break;
    }
    case 331719:
    {
        returnValue = F("Weißlinger Str.");
        break;
    }
    case 331720:
    {
        returnValue = F("Weißlingstr.");
        break;
    }
    case 331721:
    {
        returnValue = F("Weißlingweg");
        break;
    }
    case 331722:
    {
        returnValue = F("Weißlohstr.");
        break;
    }
    case 331723:
    {
        returnValue = F("Weißmainweg");
        break;
    }
    case 331724:
    {
        returnValue = F("Weißmauerweg");
        break;
    }
    case 331725:
    {
        returnValue = F("Weißmoor");
        break;
    }
    case 331726:
    {
        returnValue = F("Weißmoorweg");
        break;
    }
    case 331727:
    {
        returnValue = F("Weißmoos");
        break;
    }
    case 331728:
    {
        returnValue = F("Weißmühle");
        break;
    }
    case 331729:
    {
        returnValue = F("Weißmühlenstr.");
        break;
    }
    case 331730:
    {
        returnValue = F("Weißmühlenweg");
        break;
    }
    case 331731:
    {
        returnValue = F("Weißochsengasse");
        break;
    }
    case 331732:
    {
        returnValue = F("Weißquartierplatz");
        break;
    }
    case 331733:
    {
        returnValue = F("Weißquartierstr.");
        break;
    }
    case 331734:
    {
        returnValue = F("Weißriesweg");
        break;
    }
    case 331735:
    {
        returnValue = F("Weißrosenstr.");
        break;
    }
    case 331736:
    {
        returnValue = F("Weißsandkautschneise");
        break;
    }
    case 331737:
    {
        returnValue = F("Weißstorchweg");
        break;
    }
    case 331738:
    {
        returnValue = F("Weißstr.");
        break;
    }
    case 331739:
    {
        returnValue = F("Weißtalstr.");
        break;
    }
    case 331740:
    {
        returnValue = F("Weißtannenstr.");
        break;
    }
    case 331741:
    {
        returnValue = F("Weißtannenweg");
        break;
    }
    case 331742:
    {
        returnValue = F("Weißteichstr.");
        break;
    }
    case 331743:
    {
        returnValue = F("Weißthal");
        break;
    }
    case 331744:
    {
        returnValue = F("Weißtorweg");
        break;
    }
    case 331745:
    {
        returnValue = F("Weißturmstr.");
        break;
    }
    case 331746:
    {
        returnValue = F("Weißwaldstr.");
        break;
    }
    case 331747:
    {
        returnValue = F("Weißwasserbrücke");
        break;
    }
    case 331748:
    {
        returnValue = F("Weißwasserstr.");
        break;
    }
    case 331749:
    {
        returnValue = F("Weißwasserweg");
        break;
    }
    case 331750:
    {
        returnValue = F("Weißweinweg");
        break;
    }
    case 331751:
    {
        returnValue = F("Weißwiesenstr.");
        break;
    }
    case 331752:
    {
        returnValue = F("Weißwurstweg");
        break;
    }
    case 331753:
    {
        returnValue = F("Weißäcker");
        break;
    }
    case 331754:
    {
        returnValue = F("Wekeln");
        break;
    }
    case 331755:
    {
        returnValue = F("Wekenborg");
        break;
    }
    case 331756:
    {
        returnValue = F("Wekhrlinstr.");
        break;
    }
    case 331757:
    {
        returnValue = F("Wekhrlinweg");
        break;
    }
    case 331758:
    {
        returnValue = F("Wekkuhlen");
        break;
    }
    case 331759:
    {
        returnValue = F("Welbergener Damm");
        break;
    }
    case 331760:
    {
        returnValue = F("Welberger Damm");
        break;
    }
    case 331761:
    {
        returnValue = F("Welbhauser Str.");
        break;
    }
    case 331762:
    {
        returnValue = F("Welbhäuser Weg");
        break;
    }
    case 331763:
    {
        returnValue = F("Welbslebener Chaussee");
        break;
    }
    case 331764:
    {
        returnValue = F("Welbslebener Hauptstr.");
        break;
    }
    case 331765:
    {
        returnValue = F("Welbslebener Str.");
        break;
    }
    case 331766:
    {
        returnValue = F("Welbslebener Weg");
        break;
    }
    case 331767:
    {
        returnValue = F("Welchenberger Str.");
        break;
    }
    case 331768:
    {
        returnValue = F("Welchendorfer Str.");
        break;
    }
    case 331769:
    {
        returnValue = F("Welchengasse");
        break;
    }
    case 331770:
    {
        returnValue = F("Welchenholzer Str.");
        break;
    }
    case 331771:
    {
        returnValue = F("Welchentalstr.");
        break;
    }
    case 331772:
    {
        returnValue = F("Welcheroder Str.");
        break;
    }
    case 331773:
    {
        returnValue = F("Welchesweg");
        break;
    }
    case 331774:
    {
        returnValue = F("Welchweilerer Str.");
        break;
    }
    case 331775:
    {
        returnValue = F("Welckerstr.");
        break;
    }
    case 331776:
    {
        returnValue = F("Welckstr.");
        break;
    }
    case 331777:
    {
        returnValue = F("Weldaer Str.");
        break;
    }
    case 331778:
    {
        returnValue = F("Weldaweg");
        break;
    }
    case 331779:
    {
        returnValue = F("Weldemannsweg");
        break;
    }
    case 331780:
    {
        returnValue = F("Welden");
        break;
    }
    case 331781:
    {
        returnValue = F("Weldener Str.");
        break;
    }
    case 331782:
    {
        returnValue = F("Weldenstr.");
        break;
    }
    case 331783:
    {
        returnValue = F("Welderstr.");
        break;
    }
    case 331784:
    {
        returnValue = F("Weldertstr.");
        break;
    }
    case 331785:
    {
        returnValue = F("Weldingsfelder Steige");
        break;
    }
    case 331786:
    {
        returnValue = F("Weldingsfelder Str.");
        break;
    }
    case 331787:
    {
        returnValue = F("Weldingsfelder Weg");
        break;
    }
    case 331788:
    {
        returnValue = F("Welengsweg");
        break;
    }
    case 331789:
    {
        returnValue = F("Welfen Weg");
        break;
    }
    case 331790:
    {
        returnValue = F("Welfenallee");
        break;
    }
    case 331791:
    {
        returnValue = F("Welfengasse");
        break;
    }
    case 331792:
    {
        returnValue = F("Welfenhof");
        break;
    }
    case 331793:
    {
        returnValue = F("Welfenhöhe");
        break;
    }
    case 331794:
    {
        returnValue = F("Welfenplatz");
        break;
    }
    case 331795:
    {
        returnValue = F("Welfenring");
        break;
    }
    case 331796:
    {
        returnValue = F("Welfenstieg");
        break;
    }
    case 331797:
    {
        returnValue = F("Welfenstr.");
        break;
    }
    case 331798:
    {
        returnValue = F("Welfenweg");
        break;
    }
    case 331799:
    {
        returnValue = F("Welferoder Str.");
        break;
    }
    case 331800:
    {
        returnValue = F("Welfesholzer Str.");
        break;
    }
    case 331801:
    {
        returnValue = F("Welgengasse");
        break;
    }
    case 331802:
    {
        returnValue = F("Welgenhöhe");
        break;
    }
    case 331803:
    {
        returnValue = F("Welgersgraben");
        break;
    }
    case 331804:
    {
        returnValue = F("Welgerstal");
        break;
    }
    case 331805:
    {
        returnValue = F("Welgesheimer Weg");
        break;
    }
    case 331806:
    {
        returnValue = F("Welheimer Str.");
        break;
    }
    case 331807:
    {
        returnValue = F("Welheimer Weg");
        break;
    }
    case 331808:
    {
        returnValue = F("Welitscher Str.");
        break;
    }
    case 331809:
    {
        returnValue = F("Welk");
        break;
    }
    case 331810:
    {
        returnValue = F("Welkaer Str.");
        break;
    }
    case 331811:
    {
        returnValue = F("Welkartswiesen");
        break;
    }
    case 331812:
    {
        returnValue = F("Welke");
        break;
    }
    case 331813:
    {
        returnValue = F("Welkenbacher Kirchweg");
        break;
    }
    case 331814:
    {
        returnValue = F("Welkenbacher Str.");
        break;
    }
    case 331815:
    {
        returnValue = F("Welkendorf");
        break;
    }
    case 331816:
    {
        returnValue = F("Welkenrather Str.");
        break;
    }
    case 331817:
    {
        returnValue = F("Welkergasse");
        break;
    }
    case 331818:
    {
        returnValue = F("Welkerser Str.");
        break;
    }
    case 331819:
    {
        returnValue = F("Welkershausen");
        break;
    }
    case 331820:
    {
        returnValue = F("Welkersiedlung");
        break;
    }
    case 331821:
    {
        returnValue = F("Welkerstr.");
        break;
    }
    case 331822:
    {
        returnValue = F("Welkertor");
        break;
    }
    case 331823:
    {
        returnValue = F("Welkfeldstr.");
        break;
    }
    case 331824:
    {
        returnValue = F("Welkinghove");
        break;
    }
    case 331825:
    {
        returnValue = F("Welkmühle");
        break;
    }
    case 331826:
    {
        returnValue = F("Well");
        break;
    }
    case 331827:
    {
        returnValue = F("Well-Pisten");
        break;
    }
    case 331828:
    {
        returnValue = F("Welland");
        break;
    }
    case 331829:
    {
        returnValue = F("Wellandstr.");
        break;
    }
    case 331830:
    {
        returnValue = F("Wellanger");
        break;
    }
    case 331831:
    {
        returnValue = F("Wellastr.");
        break;
    }
    case 331832:
    {
        returnValue = F("Wellauner Str.");
        break;
    }
    case 331833:
    {
        returnValue = F("Wellbachstr.");
        break;
    }
    case 331834:
    {
        returnValue = F("Wellbachweg");
        break;
    }
    case 331835:
    {
        returnValue = F("Wellbaumweg");
        break;
    }
    case 331836:
    {
        returnValue = F("Wellbeek");
        break;
    }
    case 331837:
    {
        returnValue = F("Wellbodenweg");
        break;
    }
    case 331838:
    {
        returnValue = F("Wellbornstr.");
        break;
    }
    case 331839:
    {
        returnValue = F("Wellbraucksweg");
        break;
    }
    case 331840:
    {
        returnValue = F("Wellbrede");
        break;
    }
    case 331841:
    {
        returnValue = F("Wellbrocker Weg");
        break;
    }
    case 331842:
    {
        returnValue = F("Wellbrockweg");
        break;
    }
    case 331843:
    {
        returnValue = F("Wellbruchweg");
        break;
    }
    case 331844:
    {
        returnValue = F("Welldorfer Str.");
        break;
    }
    case 331845:
    {
        returnValue = F("Welldorfer Weg");
        break;
    }
    case 331846:
    {
        returnValue = F("Welle");
        break;
    }
    case 331847:
    {
        returnValue = F("Wellebachstr.");
        break;
    }
    case 331848:
    {
        returnValue = F("Wellebeekweg");
        break;
    }
    case 331849:
    {
        returnValue = F("Welleck");
        break;
    }
    case 331850:
    {
        returnValue = F("Wellekamp");
        break;
    }
    case 331851:
    {
        returnValue = F("Wellenbad & Tennispark");
        break;
    }
    case 331852:
    {
        returnValue = F("Wellenbad Planegg");
        break;
    }
    case 331853:
    {
        returnValue = F("Wellenberg");
        break;
    }
    case 331854:
    {
        returnValue = F("Wellenbergstr.");
        break;
    }
    case 331855:
    {
        returnValue = F("Wellenbogen");
        break;
    }
    case 331856:
    {
        returnValue = F("Wellenbrede");
        break;
    }
    case 331857:
    {
        returnValue = F("Wellenbrink");
        break;
    }
    case 331858:
    {
        returnValue = F("Wellenbrock");
        break;
    }
    case 331859:
    {
        returnValue = F("Wellenbruch");
        break;
    }
    case 331860:
    {
        returnValue = F("Wellenbruchsweg");
        break;
    }
    case 331861:
    {
        returnValue = F("Wellenburger Str.");
        break;
    }
    case 331862:
    {
        returnValue = F("Wellenburger Weg");
        break;
    }
    case 331863:
    {
        returnValue = F("Wellenbusch");
        break;
    }
    case 331864:
    {
        returnValue = F("Wellendinger Str.");
        break;
    }
    case 331865:
    {
        returnValue = F("Wellendorfer Str.");
        break;
    }
    case 331866:
    {
        returnValue = F("Wellener Str.");
        break;
    }
    case 331867:
    {
        returnValue = F("Wellener Weg");
        break;
    }
    case 331868:
    {
        returnValue = F("Wellenesch");
        break;
    }
    case 331869:
    {
        returnValue = F("Wellenforth");
        break;
    }
    case 331870:
    {
        returnValue = F("Wellengang");
        break;
    }
    case 331871:
    {
        returnValue = F("Wellengartenstr.");
        break;
    }
    case 331872:
    {
        returnValue = F("Wellengrund");
        break;
    }
    case 331873:
    {
        returnValue = F("Wellenheide");
        break;
    }
    case 331874:
    {
        returnValue = F("Wellenhofsweg");
        break;
    }
    case 331875:
    {
        returnValue = F("Wellenholzhausen");
        break;
    }
    case 331876:
    {
        returnValue = F("Wellenkamp");
        break;
    }
    case 331877:
    {
        returnValue = F("Wellenkamper Chaussee");
        break;
    }
    case 331878:
    {
        returnValue = F("Wellenkampstr.");
        break;
    }
    case 331879:
    {
        returnValue = F("Wellenköpfeweg");
        break;
    }
    case 331880:
    {
        returnValue = F("Wellenköpfleweg");
        break;
    }
    case 331881:
    {
        returnValue = F("Wellenort");
        break;
    }
    case 331882:
    {
        returnValue = F("Wellenpark");
        break;
    }
    case 331883:
    {
        returnValue = F("Wellenpöhlen");
        break;
    }
    case 331884:
    {
        returnValue = F("Wellenschaukel");
        break;
    }
    case 331885:
    {
        returnValue = F("Wellensieks Kamp");
        break;
    }
    case 331886:
    {
        returnValue = F("Wellensiekstr.");
        break;
    }
    case 331887:
    {
        returnValue = F("Wellensieksweg");
        break;
    }
    case 331888:
    {
        returnValue = F("Wellensiekweg");
        break;
    }
    case 331889:
    {
        returnValue = F("Wellenspringchaussee");
        break;
    }
    case 331890:
    {
        returnValue = F("Wellenspringstr.");
        break;
    }
    case 331891:
    {
        returnValue = F("Wellenstr.");
        break;
    }
    case 331892:
    {
        returnValue = F("Wellenteich");
        break;
    }
    case 331893:
    {
        returnValue = F("Wellentruper Str.");
        break;
    }
    case 331894:
    {
        returnValue = F("Wellentruper Weg");
        break;
    }
    case 331895:
    {
        returnValue = F("Wellenweg");
        break;
    }
    case 331896:
    {
        returnValue = F("Wellenwiese");
        break;
    }
    case 331897:
    {
        returnValue = F("Weller Dorfstr.");
        break;
    }
    case 331898:
    {
        returnValue = F("Weller Landstr.");
        break;
    }
    case 331899:
    {
        returnValue = F("Weller Str.");
        break;
    }
    case 331900:
    {
        returnValue = F("Weller Weg");
        break;
    }
    case 331901:
    {
        returnValue = F("Wellerbachstr.");
        break;
    }
    case 331902:
    {
        returnValue = F("Wellerdings Grund");
        break;
    }
    case 331903:
    {
        returnValue = F("Wellerdings Hof");
        break;
    }
    case 331904:
    {
        returnValue = F("Wellerfeldweg");
        break;
    }
    case 331905:
    {
        returnValue = F("Wellergasse");
        break;
    }
    case 331906:
    {
        returnValue = F("Wellergrund");
        break;
    }
    case 331907:
    {
        returnValue = F("Wellerhofweg");
        break;
    }
    case 331908:
    {
        returnValue = F("Wellerhoper Str.");
        break;
    }
    case 331909:
    {
        returnValue = F("Welleroder Weg");
        break;
    }
    case 331910:
    {
        returnValue = F("Wellerpfad");
        break;
    }
    case 331911:
    {
        returnValue = F("Wellersbergstr.");
        break;
    }
    case 331912:
    {
        returnValue = F("Wellersbergtunnel");
        break;
    }
    case 331913:
    {
        returnValue = F("Wellersburgring");
        break;
    }
    case 331914:
    {
        returnValue = F("Wellerscheid");
        break;
    }
    case 331915:
    {
        returnValue = F("Wellerser Str.");
        break;
    }
    case 331916:
    {
        returnValue = F("Wellerser Weg");
        break;
    }
    case 331917:
    {
        returnValue = F("Wellershausen");
        break;
    }
    case 331918:
    {
        returnValue = F("Wellersiefen");
        break;
    }
    case 331919:
    {
        returnValue = F("Wellerstalweg");
        break;
    }
    case 331920:
    {
        returnValue = F("Wellersteinstr.");
        break;
    }
    case 331921:
    {
        returnValue = F("Wellerstr.");
        break;
    }
    case 331922:
    {
        returnValue = F("Wellerstädter Hauptstr.");
        break;
    }
    case 331923:
    {
        returnValue = F("Wellerstädter Weg");
        break;
    }
    case 331924:
    {
        returnValue = F("Wellerswalder Str.");
        break;
    }
    case 331925:
    {
        returnValue = F("Wellerswalder Weg");
        break;
    }
    case 331926:
    {
        returnValue = F("Wellertstr.");
        break;
    }
    case 331927:
    {
        returnValue = F("Wellerwandweg");
        break;
    }
    case 331928:
    {
        returnValue = F("Wellerweg");
        break;
    }
    case 331929:
    {
        returnValue = F("Welleröder Str.");
        break;
    }
    case 331930:
    {
        returnValue = F("Wellesmühle");
        break;
    }
    case 331931:
    {
        returnValue = F("Wellestr.");
        break;
    }
    case 331932:
    {
        returnValue = F("Wellesweg");
        break;
    }
    case 331933:
    {
        returnValue = F("Wellesweilerstr.");
        break;
    }
    case 331934:
    {
        returnValue = F("Wellgendellsknipp");
        break;
    }
    case 331935:
    {
        returnValue = F("Wellgrube");
        break;
    }
    case 331936:
    {
        returnValue = F("Wellhaarstr.");
        break;
    }
    case 331937:
    {
        returnValue = F("Wellhausenstr.");
        break;
    }
    case 331938:
    {
        returnValue = F("Wellhausenweg");
        break;
    }
    case 331939:
    {
        returnValue = F("Wellhecke");
        break;
    }
    case 331940:
    {
        returnValue = F("Wellheimer Str.");
        break;
    }
    case 331941:
    {
        returnValue = F("Wellhoeferstr.");
        break;
    }
    case 331942:
    {
        returnValue = F("Wellhöferweg");
        break;
    }
    case 331943:
    {
        returnValue = F("Wellhügel");
        break;
    }
    case 331944:
    {
        returnValue = F("Wellie");
        break;
    }
    case 331945:
    {
        returnValue = F("Welliehäuser Str.");
        break;
    }
    case 331946:
    {
        returnValue = F("Welligenpaß");
        break;
    }
    case 331947:
    {
        returnValue = F("Wellin");
        break;
    }
    case 331948:
    {
        returnValue = F("Wellingdorfer Str.");
        break;
    }
    case 331949:
    {
        returnValue = F("Wellinger Str.");
        break;
    }
    case 331950:
    {
        returnValue = F("Wellinger Traufweg");
        break;
    }
    case 331951:
    {
        returnValue = F("Wellinger Weg");
        break;
    }
    case 331952:
    {
        returnValue = F("Wellingerkopfweg");
        break;
    }
    case 331953:
    {
        returnValue = F("Wellingholt");
        break;
    }
    case 331954:
    {
        returnValue = F("Wellingholzhausener Str.");
        break;
    }
    case 331955:
    {
        returnValue = F("Wellingholzhauser Str.");
        break;
    }
    case 331956:
    {
        returnValue = F("Wellinghorster Str.");
        break;
    }
    case 331957:
    {
        returnValue = F("Wellingloh");
        break;
    }
    case 331958:
    {
        returnValue = F("Wellingmaase");
        break;
    }
    case 331959:
    {
        returnValue = F("Wellingsbütteler Weg");
        break;
    }
    case 331960:
    {
        returnValue = F("Wellingstr.");
        break;
    }
    case 331961:
    {
        returnValue = F("Wellingsweg");
        break;
    }
    case 331962:
    {
        returnValue = F("Wellingtonienplatz bei Wüstenrot");
        break;
    }
    case 331963:
    {
        returnValue = F("Wellingtonienstr.");
        break;
    }
    case 331964:
    {
        returnValue = F("Wellingtonienweg");
        break;
    }
    case 331965:
    {
        returnValue = F("Wellingtonstr.");
        break;
    }
    case 331966:
    {
        returnValue = F("Wellingweg");
        break;
    }
    case 331967:
    {
        returnValue = F("Wellitzleithener Weg");
        break;
    }
    case 331968:
    {
        returnValue = F("Wellkamp");
        break;
    }
    case 331969:
    {
        returnValue = F("Wellkampweg");
        break;
    }
    case 331970:
    {
        returnValue = F("Wellmanns Kamp");
        break;
    }
    case 331971:
    {
        returnValue = F("Wellmanns Ring");
        break;
    }
    case 331972:
    {
        returnValue = F("Wellmanns Weg");
        break;
    }
    case 331973:
    {
        returnValue = F("Wellmannsbruch");
        break;
    }
    case 331974:
    {
        returnValue = F("Wellmannstr.");
        break;
    }
    case 331975:
    {
        returnValue = F("Wellmannsweg");
        break;
    }
    case 331976:
    {
        returnValue = F("Wellmannswiesen");
        break;
    }
    case 331977:
    {
        returnValue = F("Wellmersdorfer Str.");
        break;
    }
    case 331978:
    {
        returnValue = F("Wellmicher Str.");
        break;
    }
    case 331979:
    {
        returnValue = F("Wellmühle");
        break;
    }
    case 331980:
    {
        returnValue = F("Wellner Fahrweg");
        break;
    }
    case 331981:
    {
        returnValue = F("Wellner Str.");
        break;
    }
    case 331982:
    {
        returnValue = F("Wellnerweg");
        break;
    }
    case 331983:
    {
        returnValue = F("Wellnhoferstr.");
        break;
    }
    case 331984:
    {
        returnValue = F("Wellnitzstr.");
        break;
    }
    case 331985:
    {
        returnValue = F("Wellrade");
        break;
    }
    case 331986:
    {
        returnValue = F("Wellringrade");
        break;
    }
    case 331987:
    {
        returnValue = F("Wellritzstr.");
        break;
    }
    case 331988:
    {
        returnValue = F("Wellscheider Str.");
        break;
    }
    case 331989:
    {
        returnValue = F("Wellsdorf");
        break;
    }
    case 331990:
    {
        returnValue = F("Wellseedamm");
        break;
    }
    case 331991:
    {
        returnValue = F("Wellseer Weg");
        break;
    }
    case 331992:
    {
        returnValue = F("Wellsgrundweg");
        break;
    }
    case 331993:
    {
        returnValue = F("Wellsring");
        break;
    }
    case 331994:
    {
        returnValue = F("Wellstr.");
        break;
    }
    case 331995:
    {
        returnValue = F("Welluck");
        break;
    }
    case 331996:
    {
        returnValue = F("Wellucken");
        break;
    }
    case 331997:
    {
        returnValue = F("Welluckenweg");
        break;
    }
    case 331998:
    {
        returnValue = F("Wellucker Str.");
        break;
    }
    case 331999:
    {
        returnValue = F("Wellumweg");
        break;
    }
    case 332000:
    {
        returnValue = F("Wellweg");
        break;
    }
    case 332001:
    {
        returnValue = F("Wellwiese");
        break;
    }
    case 332002:
    {
        returnValue = F("Wellwiesstr.");
        break;
    }
    case 332003:
    {
        returnValue = F("Welmecke");
        break;
    }
    case 332004:
    {
        returnValue = F("Welmersdorfer Str.");
        break;
    }
    case 332005:
    {
        returnValue = F("Welmlinger Weg");
        break;
    }
    case 332006:
    {
        returnValue = F("Welna");
        break;
    }
    case 332007:
    {
        returnValue = F("Welpenweg");
        break;
    }
    case 332008:
    {
        returnValue = F("Welper Siefen");
        break;
    }
    case 332009:
    {
        returnValue = F("Welper Str.");
        break;
    }
    case 332010:
    {
        returnValue = F("Welperstr.");
        break;
    }
    case 332011:
    {
        returnValue = F("Welpestr.");
        break;
    }
    case 332012:
    {
        returnValue = F("Welplagestr.");
        break;
    }
    case 332013:
    {
        returnValue = F("Welrichsweg");
        break;
    }
    case 332014:
    {
        returnValue = F("Welsallee");
        break;
    }
    case 332015:
    {
        returnValue = F("Welsauer Weg");
        break;
    }
    case 332016:
    {
        returnValue = F("Welsbacher Weg");
        break;
    }
    case 332017:
    {
        returnValue = F("Welsbachstr.");
        break;
    }
    case 332018:
    {
        returnValue = F("Welsberg");
        break;
    }
    case 332019:
    {
        returnValue = F("Welsburger Damm");
        break;
    }
    case 332020:
    {
        returnValue = F("Welsburger Heide");
        break;
    }
    case 332021:
    {
        returnValue = F("Welschbach");
        break;
    }
    case 332022:
    {
        returnValue = F("Welschbacher Str.");
        break;
    }
    case 332023:
    {
        returnValue = F("Welschbachstr.");
        break;
    }
    case 332024:
    {
        returnValue = F("Welschbergblick");
        break;
    }
    case 332025:
    {
        returnValue = F("Welschbergweg");
        break;
    }
    case 332026:
    {
        returnValue = F("Welschbilliger Str.");
        break;
    }
    case 332027:
    {
        returnValue = F("Welschdorfgasse");
        break;
    }
    case 332028:
    {
        returnValue = F("Welsche Gasse");
        break;
    }
    case 332029:
    {
        returnValue = F("Welsche Höfe");
        break;
    }
    case 332030:
    {
        returnValue = F("Welsche Mühle");
        break;
    }
    case 332031:
    {
        returnValue = F("Welsche Stiege");
        break;
    }
    case 332032:
    {
        returnValue = F("Welsche Str.");
        break;
    }
    case 332033:
    {
        returnValue = F("Welschenbachstr.");
        break;
    }
    case 332034:
    {
        returnValue = F("Welschenbergweg");
        break;
    }
    case 332035:
    {
        returnValue = F("Welschendriesch");
        break;
    }
    case 332036:
    {
        returnValue = F("Welschengasse");
        break;
    }
    case 332037:
    {
        returnValue = F("Welschenkahl");
        break;
    }
    case 332038:
    {
        returnValue = F("Welschensteinacher Str.");
        break;
    }
    case 332039:
    {
        returnValue = F("Welschenweg");
        break;
    }
    case 332040:
    {
        returnValue = F("Welschenäckerstr.");
        break;
    }
    case 332041:
    {
        returnValue = F("Welscher Busch");
        break;
    }
    case 332042:
    {
        returnValue = F("Welscher Forst");
        break;
    }
    case 332043:
    {
        returnValue = F("Welscher Heide");
        break;
    }
    case 332044:
    {
        returnValue = F("Welscher Weg");
        break;
    }
    case 332045:
    {
        returnValue = F("Welscher Wiese");
        break;
    }
    case 332046:
    {
        returnValue = F("Welschgasse");
        break;
    }
    case 332047:
    {
        returnValue = F("Welschgrabenstr.");
        break;
    }
    case 332048:
    {
        returnValue = F("Welschhalbvirtelweg");
        break;
    }
    case 332049:
    {
        returnValue = F("Welschhauweg");
        break;
    }
    case 332050:
    {
        returnValue = F("Welschhufer Str.");
        break;
    }
    case 332051:
    {
        returnValue = F("Welschinger Str.");
        break;
    }
    case 332052:
    {
        returnValue = F("Welschlachenweg");
        break;
    }
    case 332053:
    {
        returnValue = F("Welschland");
        break;
    }
    case 332054:
    {
        returnValue = F("Welschmühle");
        break;
    }
    case 332055:
    {
        returnValue = F("Welschneudorfer Str.");
        break;
    }
    case 332056:
    {
        returnValue = F("Welschneudorfer Weg");
        break;
    }
    case 332057:
    {
        returnValue = F("Welschnonnengasse");
        break;
    }
    case 332058:
    {
        returnValue = F("Welschnonnenstr.");
        break;
    }
    case 332059:
    {
        returnValue = F("Welschplatz");
        break;
    }
    case 332060:
    {
        returnValue = F("Welschseite");
        break;
    }
    case 332061:
    {
        returnValue = F("Welschstr.");
        break;
    }
    case 332062:
    {
        returnValue = F("Welschtalweg");
        break;
    }
    case 332063:
    {
        returnValue = F("Welschweg");
        break;
    }
    case 332064:
    {
        returnValue = F("Welseder Str.");
        break;
    }
    case 332065:
    {
        returnValue = F("Welsegarten");
        break;
    }
    case 332066:
    {
        returnValue = F("Welsegraben");
        break;
    }
    case 332067:
    {
        returnValue = F("Welsehof");
        break;
    }
    case 332068:
    {
        returnValue = F("Welsenhof");
        break;
    }
    case 332069:
    {
        returnValue = F("Welser Str.");
        break;
    }
    case 332070:
    {
        returnValue = F("Welserplatz");
        break;
    }
    case 332071:
    {
        returnValue = F("Welserstr.");
        break;
    }
    case 332072:
    {
        returnValue = F("Welsestr.");
        break;
    }
    case 332073:
    {
        returnValue = F("Welsestrand");
        break;
    }
    case 332074:
    {
        returnValue = F("Welseweg");
        break;
    }
    case 332075:
    {
        returnValue = F("Welsgasse");
        break;
    }
    case 332076:
    {
        returnValue = F("Welsingstr.");
        break;
    }
    case 332077:
    {
        returnValue = F("Welskittelweg");
        break;
    }
    case 332078:
    {
        returnValue = F("Welslebener Str.");
        break;
    }
    case 332079:
    {
        returnValue = F("Welsleber Graseweg");
        break;
    }
    case 332080:
    {
        returnValue = F("Welsleber Str.");
        break;
    }
    case 332081:
    {
        returnValue = F("Welsleber Weg");
        break;
    }
    case 332082:
    {
        returnValue = F("Welsower Damm");
        break;
    }
    case 332083:
    {
        returnValue = F("Welsower Str.");
        break;
    }
    case 332084:
    {
        returnValue = F("Welsower Str. Ausbau");
        break;
    }
    case 332085:
    {
        returnValue = F("Welsstr.");
        break;
    }
    case 332086:
    {
        returnValue = F("Welstorfer Str.");
        break;
    }
    case 332087:
    {
        returnValue = F("Welsumer Str.");
        break;
    }
    case 332088:
    {
        returnValue = F("Welsweg");
        break;
    }
    case 332089:
    {
        returnValue = F("Welt");
        break;
    }
    case 332090:
    {
        returnValue = F("Welt der Sinne");
        break;
    }
    case 332091:
    {
        returnValue = F("Weltbreite");
        break;
    }
    case 332092:
    {
        returnValue = F("Welte");
        break;
    }
    case 332093:
    {
        returnValue = F("Weltenburger Str.");
        break;
    }
    case 332094:
    {
        returnValue = F("Welter Chaussee");
        break;
    }
    case 332095:
    {
        returnValue = F("Welter Str.");
        break;
    }
    case 332096:
    {
        returnValue = F("Welteroder Weg");
        break;
    }
    case 332097:
    {
        returnValue = F("Weltersbacher Str.");
        break;
    }
    case 332098:
    {
        returnValue = F("Weltersbachstr.");
        break;
    }
    case 332099:
    {
        returnValue = F("Weltersberg");
        break;
    }
    case 332100:
    {
        returnValue = F("Weltersgasse");
        break;
    }
    case 332101:
    {
        returnValue = F("Weltersmühle");
        break;
    }
    case 332102:
    {
        returnValue = F("Welterstahl");
        break;
    }
    case 332103:
    {
        returnValue = F("Welterstal");
        break;
    }
    case 332104:
    {
        returnValue = F("Welterstr.");
        break;
    }
    case 332105:
    {
        returnValue = F("Weltestr.");
        break;
    }
    case 332106:
    {
        returnValue = F("Weltewitzer Landstr.");
        break;
    }
    case 332107:
    {
        returnValue = F("Weltgarten Remshalden");
        break;
    }
    case 332108:
    {
        returnValue = F("Weltinstr.");
        break;
    }
    case 332109:
    {
        returnValue = F("Weltismatte");
        break;
    }
    case 332110:
    {
        returnValue = F("Weltkulturpfad");
        break;
    }
    case 332111:
    {
        returnValue = F("Weltleinweg");
        break;
    }
    case 332112:
    {
        returnValue = F("Weltrichstr.");
        break;
    }
    case 332113:
    {
        returnValue = F("Weltring-Park");
        break;
    }
    case 332114:
    {
        returnValue = F("Weltsöden");
        break;
    }
    case 332115:
    {
        returnValue = F("Weltwitz");
        break;
    }
    case 332116:
    {
        returnValue = F("Weltwitzer Str.");
        break;
    }
    case 332117:
    {
        returnValue = F("Weltziner Weg");
        break;
    }
    case 332118:
    {
        returnValue = F("Welwers Wiesen");
        break;
    }
    case 332119:
    {
        returnValue = F("Welxander Str.");
        break;
    }
    case 332120:
    {
        returnValue = F("Welzbachring");
        break;
    }
    case 332121:
    {
        returnValue = F("Welzbachstr.");
        break;
    }
    case 332122:
    {
        returnValue = F("Welzbachweg");
        break;
    }
    case 332123:
    {
        returnValue = F("Welzberggweg");
        break;
    }
    case 332124:
    {
        returnValue = F("Welzbergsteige");
        break;
    }
    case 332125:
    {
        returnValue = F("Welzbergweg");
        break;
    }
    case 332126:
    {
        returnValue = F("Welzebachsweg");
        break;
    }
    case 332127:
    {
        returnValue = F("Welzen");
        break;
    }
    case 332128:
    {
        returnValue = F("Welzengraben");
        break;
    }
    case 332129:
    {
        returnValue = F("Welzenwiler Str.");
        break;
    }
    case 332130:
    {
        returnValue = F("Welzer Str.");
        break;
    }
    case 332131:
    {
        returnValue = F("Welzgasse");
        break;
    }
    case 332132:
    {
        returnValue = F("Welzgraben");
        break;
    }
    case 332133:
    {
        returnValue = F("Welzgrabenbrücke");
        break;
    }
    case 332134:
    {
        returnValue = F("Welzheimer Str.");
        break;
    }
    case 332135:
    {
        returnValue = F("Welzheimer Weg");
        break;
    }
    case 332136:
    {
        returnValue = F("Welzheimer-Wald-Str.");
        break;
    }
    case 332137:
    {
        returnValue = F("Welzin");
        break;
    }
    case 332138:
    {
        returnValue = F("Welziner Str.");
        break;
    }
    case 332139:
    {
        returnValue = F("Welziner Weg");
        break;
    }
    case 332140:
    {
        returnValue = F("Welzlinweg");
        break;
    }
    case 332141:
    {
        returnValue = F("Welzower Str.");
        break;
    }
    case 332142:
    {
        returnValue = F("Welzstr.");
        break;
    }
    case 332143:
    {
        returnValue = F("Wembachweg");
        break;
    }
    case 332144:
    {
        returnValue = F("Wember Str.");
        break;
    }
    case 332145:
    {
        returnValue = F("Wemberweg");
        break;
    }
    case 332146:
    {
        returnValue = F("Wembkenstr.");
        break;
    }
    case 332147:
    {
        returnValue = F("Wembodstr.");
        break;
    }
    case 332148:
    {
        returnValue = F("Wemdinger Str.");
        break;
    }
    case 332149:
    {
        returnValue = F("Wemelstr.");
        break;
    }
    case 332150:
    {
        returnValue = F("Wemenschlad");
        break;
    }
    case 332151:
    {
        returnValue = F("Wemensiepen");
        break;
    }
    case 332152:
    {
        returnValue = F("Wemhoff");
        break;
    }
    case 332153:
    {
        returnValue = F("Wemhofstr.");
        break;
    }
    case 332154:
    {
        returnValue = F("Wemhöferstiege");
        break;
    }
    case 332155:
    {
        returnValue = F("Wemkendorfer Weg");
        break;
    }
    case 332156:
    {
        returnValue = F("Wemkenstr.");
        break;
    }
    case 332157:
    {
        returnValue = F("Wemlighäuser Str.");
        break;
    }
    case 332158:
    {
        returnValue = F("Wemmer Mähre");
        break;
    }
    case 332159:
    {
        returnValue = F("Wemmershöfer Str.");
        break;
    }
    case 332160:
    {
        returnValue = F("Wemmerweg");
        break;
    }
    case 332161:
    {
        returnValue = F("Wemmetsweilerstr.");
        break;
    }
    case 332162:
    {
        returnValue = F("Wemmstr.");
        break;
    }
    case 332163:
    {
        returnValue = F("Wenau");
        break;
    }
    case 332164:
    {
        returnValue = F("Wenauer Höfchen");
        break;
    }
    case 332165:
    {
        returnValue = F("Wenauer Str.");
        break;
    }
    case 332166:
    {
        returnValue = F("Wenceslaigasse");
        break;
    }
    case 332167:
    {
        returnValue = F("Wenckeweg");
        break;
    }
    case 332168:
    {
        returnValue = F("Wenckstr.");
        break;
    }
    case 332169:
    {
        returnValue = F("Wencostr.");
        break;
    }
    case 332170:
    {
        returnValue = F("Wend Dörp");
        break;
    }
    case 332171:
    {
        returnValue = F("Wendalinusgasse");
        break;
    }
    case 332172:
    {
        returnValue = F("Wendalinusstr.");
        break;
    }
    case 332173:
    {
        returnValue = F("Wendalinusweg");
        break;
    }
    case 332174:
    {
        returnValue = F("Wendbachstr.");
        break;
    }
    case 332175:
    {
        returnValue = F("Wenddorfer Weg");
        break;
    }
    case 332176:
    {
        returnValue = F("Wende");
        break;
    }
    case 332177:
    {
        returnValue = F("Wendebach");
        break;
    }
    case 332178:
    {
        returnValue = F("Wendebachstr.");
        break;
    }
    case 332179:
    {
        returnValue = F("Wendebeckenstr.");
        break;
    }
    case 332180:
    {
        returnValue = F("Wendeberg");
        break;
    }
    case 332181:
    {
        returnValue = F("Wendeberger Weg");
        break;
    }
    case 332182:
    {
        returnValue = F("Wendebornstr.");
        break;
    }
    case 332183:
    {
        returnValue = F("Wendebrück");
        break;
    }
    case 332184:
    {
        returnValue = F("Wendeburger Str.");
        break;
    }
    case 332185:
    {
        returnValue = F("Wendeburggraben");
        break;
    }
    case 332186:
    {
        returnValue = F("Wendefeld");
        break;
    }
    case 332187:
    {
        returnValue = F("Wendefurther Weg");
        break;
    }
    case 332188:
    {
        returnValue = F("Wendegang");
        break;
    }
    case 332189:
    {
        returnValue = F("Wendegasse");
        break;
    }
    case 332190:
    {
        returnValue = F("Wendegrund");
        break;
    }
    case 332191:
    {
        returnValue = F("Wendegräbener Weg");
        break;
    }
    case 332192:
    {
        returnValue = F("Wendehammer");
        break;
    }
    case 332193:
    {
        returnValue = F("Wendehammer ÖPNV");
        break;
    }
    case 332194:
    {
        returnValue = F("Wendehäuser Str.");
        break;
    }
    case 332195:
    {
        returnValue = F("Wendehäuser Weg");
        break;
    }
    case 332196:
    {
        returnValue = F("Wendekamp");
        break;
    }
    case 332197:
    {
        returnValue = F("Wendekreis");
        break;
    }
    case 332198:
    {
        returnValue = F("Wendel-Hipler-Str.");
        break;
    }
    case 332199:
    {
        returnValue = F("Wendel-Hipler-Weg");
        break;
    }
    case 332200:
    {
        returnValue = F("Wendel-Roskopf-Str.");
        break;
    }
    case 332201:
    {
        returnValue = F("Wendel-Schorr-Str.");
        break;
    }
    case 332202:
    {
        returnValue = F("Wendel-Str.");
        break;
    }
    case 332203:
    {
        returnValue = F("Wendelbach");
        break;
    }
    case 332204:
    {
        returnValue = F("Wendelbergstr.");
        break;
    }
    case 332205:
    {
        returnValue = F("Wendelbergsweg");
        break;
    }
    case 332206:
    {
        returnValue = F("Wendelborgasse");
        break;
    }
    case 332207:
    {
        returnValue = F("Wendelbornweg");
        break;
    }
    case 332208:
    {
        returnValue = F("Wendelfeldstr.");
        break;
    }
    case 332209:
    {
        returnValue = F("Wendelgardstr.");
        break;
    }
    case 332210:
    {
        returnValue = F("Wendelgardweg");
        break;
    }
    case 332211:
    {
        returnValue = F("Wendelgasse");
        break;
    }
    case 332212:
    {
        returnValue = F("Wendelhof");
        break;
    }
    case 332213:
    {
        returnValue = F("Wendelhofstr.");
        break;
    }
    case 332214:
    {
        returnValue = F("Wendelhöfen");
        break;
    }
    case 332215:
    {
        returnValue = F("Wendelin-Berberich-Str.");
        break;
    }
    case 332216:
    {
        returnValue = F("Wendelin-Burkard-Str.");
        break;
    }
    case 332217:
    {
        returnValue = F("Wendelin-Dietz-Weg");
        break;
    }
    case 332218:
    {
        returnValue = F("Wendelin-Ernst-Str.");
        break;
    }
    case 332219:
    {
        returnValue = F("Wendelin-Geßler-Str.");
        break;
    }
    case 332220:
    {
        returnValue = F("Wendelin-Kamp-Str.");
        break;
    }
    case 332221:
    {
        returnValue = F("Wendelin-Morgenthaler-Str.");
        break;
    }
    case 332222:
    {
        returnValue = F("Wendelin-Nufer-Str.");
        break;
    }
    case 332223:
    {
        returnValue = F("Wendelin-Rauch-Str.");
        break;
    }
    case 332224:
    {
        returnValue = F("Wendelin-Scheuermann-Str.");
        break;
    }
    case 332225:
    {
        returnValue = F("Wendelin-Steinbach-Weg");
        break;
    }
    case 332226:
    {
        returnValue = F("Wendelin-Veit-Str.");
        break;
    }
    case 332227:
    {
        returnValue = F("Wendelin-Weißheimer-Platz");
        break;
    }
    case 332228:
    {
        returnValue = F("Wendelingasse");
        break;
    }
    case 332229:
    {
        returnValue = F("Wendelinistr.");
        break;
    }
    case 332230:
    {
        returnValue = F("Wendelinsgrube");
        break;
    }
    case 332231:
    {
        returnValue = F("Wendelinstr.");
        break;
    }
    case 332232:
    {
        returnValue = F("Wendelinsweg");
        break;
    }
    case 332233:
    {
        returnValue = F("Wendelinus Brücke");
        break;
    }
    case 332234:
    {
        returnValue = F("Wendelinus Schlefje");
        break;
    }
    case 332235:
    {
        returnValue = F("Wendelinus-Weg");
        break;
    }
    case 332236:
    {
        returnValue = F("Wendelinushof");
        break;
    }
    case 332237:
    {
        returnValue = F("Wendelinuspark");
        break;
    }
    case 332238:
    {
        returnValue = F("Wendelinuspfad");
        break;
    }
    case 332239:
    {
        returnValue = F("Wendelinusplatz");
        break;
    }
    case 332240:
    {
        returnValue = F("Wendelinusschneise");
        break;
    }
    case 332241:
    {
        returnValue = F("Wendelinussteig");
        break;
    }
    case 332242:
    {
        returnValue = F("Wendelinusstr.");
        break;
    }
    case 332243:
    {
        returnValue = F("Wendelinusweg");
        break;
    }
    case 332244:
    {
        returnValue = F("Wendelinweg");
        break;
    }
    case 332245:
    {
        returnValue = F("Wendeljarden");
        break;
    }
    case 332246:
    {
        returnValue = F("Wendelkamp");
        break;
    }
    case 332247:
    {
        returnValue = F("Wendelkönig");
        break;
    }
    case 332248:
    {
        returnValue = F("Wendelsbergstr.");
        break;
    }
    case 332249:
    {
        returnValue = F("Wendelsgarten");
        break;
    }
    case 332250:
    {
        returnValue = F("Wendelsgasse");
        break;
    }
    case 332251:
    {
        returnValue = F("Wendelsgrundweg");
        break;
    }
    case 332252:
    {
        returnValue = F("Wendelsheimer Str.");
        break;
    }
    case 332253:
    {
        returnValue = F("Wendelsheimer Weg");
        break;
    }
    case 332254:
    {
        returnValue = F("Wendelskamp");
        break;
    }
    case 332255:
    {
        returnValue = F("Wendelstadtallee");
        break;
    }
    case 332256:
    {
        returnValue = F("Wendelstadtanlage");
        break;
    }
    case 332257:
    {
        returnValue = F("Wendelsteig");
        break;
    }
    case 332258:
    {
        returnValue = F("Wendelstein");
        break;
    }
    case 332259:
    {
        returnValue = F("Wendelsteiner Str.");
        break;
    }
    case 332260:
    {
        returnValue = F("Wendelsteiner Weg");
        break;
    }
    case 332261:
    {
        returnValue = F("Wendelsteinpark");
        break;
    }
    case 332262:
    {
        returnValue = F("Wendelsteinring");
        break;
    }
    case 332263:
    {
        returnValue = F("Wendelsteinstr.");
        break;
    }
    case 332264:
    {
        returnValue = F("Wendelsteinweg");
        break;
    }
    case 332265:
    {
        returnValue = F("Wendelstorfer Weg");
        break;
    }
    case 332266:
    {
        returnValue = F("Wendelstr.");
        break;
    }
    case 332267:
    {
        returnValue = F("Wendelsweg");
        break;
    }
    case 332268:
    {
        returnValue = F("Wendeltreppe");
        break;
    }
    case 332269:
    {
        returnValue = F("Wendeltreppentalweg");
        break;
    }
    case 332270:
    {
        returnValue = F("Wendelweg");
        break;
    }
    case 332271:
    {
        returnValue = F("Wendemark");
        break;
    }
    case 332272:
    {
        returnValue = F("Wendemarken");
        break;
    }
    case 332273:
    {
        returnValue = F("Wendemarker Weg");
        break;
    }
    case 332274:
    {
        returnValue = F("Wendemarkstr.");
        break;
    }
    case 332275:
    {
        returnValue = F("Wenden Weg");
        break;
    }
    case 332276:
    {
        returnValue = F("Wendenborsteler Damm");
        break;
    }
    case 332277:
    {
        returnValue = F("Wendenborsteler Str.");
        break;
    }
    case 332278:
    {
        returnValue = F("Wendenbühl");
        break;
    }
    case 332279:
    {
        returnValue = F("Wendendamm");
        break;
    }
    case 332280:
    {
        returnValue = F("Wendener Str.");
        break;
    }
    case 332281:
    {
        returnValue = F("Wendener Weg");
        break;
    }
    case 332282:
    {
        returnValue = F("Wendengasse");
        break;
    }
    case 332283:
    {
        returnValue = F("Wendenhof");
        break;
    }
    case 332284:
    {
        returnValue = F("Wendenhofsiedlung");
        break;
    }
    case 332285:
    {
        returnValue = F("Wendenkirchhofweg");
        break;
    }
    case 332286:
    {
        returnValue = F("Wendenkopfrückenweg");
        break;
    }
    case 332287:
    {
        returnValue = F("Wendenkopfweg");
        break;
    }
    case 332288:
    {
        returnValue = F("Wendenmaschstr.");
        break;
    }
    case 332289:
    {
        returnValue = F("Wendenmühle");
        break;
    }
    case 332290:
    {
        returnValue = F("Wendenplan");
        break;
    }
    case 332291:
    {
        returnValue = F("Wendenplatz");
        break;
    }
    case 332292:
    {
        returnValue = F("Wendenreute");
        break;
    }
    case 332293:
    {
        returnValue = F("Wendenring");
        break;
    }
    case 332294:
    {
        returnValue = F("Wendenrund");
        break;
    }
    case 332295:
    {
        returnValue = F("Wendensteg");
        break;
    }
    case 332296:
    {
        returnValue = F("Wendensteig");
        break;
    }
    case 332297:
    {
        returnValue = F("Wendensteinausfahrt");
        break;
    }
    case 332298:
    {
        returnValue = F("Wendensteinstr.");
        break;
    }
    case 332299:
    {
        returnValue = F("Wendenstieg");
        break;
    }
    case 332300:
    {
        returnValue = F("Wendenstr.");
        break;
    }
    case 332301:
    {
        returnValue = F("Wendentorwall");
        break;
    }
    case 332302:
    {
        returnValue = F("Wendenweg");
        break;
    }
    case 332303:
    {
        returnValue = F("Wendeplatte");
        break;
    }
    case 332304:
    {
        returnValue = F("Wendeplatte-Traufweg");
        break;
    }
    case 332305:
    {
        returnValue = F("Wendeplatz");
        break;
    }
    case 332306:
    {
        returnValue = F("Wendeplatz (Anlieger)");
        break;
    }
    case 332307:
    {
        returnValue = F("Wendeplatz Abzweig Pustohl");
        break;
    }
    case 332308:
    {
        returnValue = F("Wenderfeld");
        break;
    }
    case 332309:
    {
        returnValue = F("Wendernstr.");
        break;
    }
    case 332310:
    {
        returnValue = F("Wendersreuth");
        break;
    }
    case 332311:
    {
        returnValue = F("Wendersreuther Weg");
        break;
    }
    case 332312:
    {
        returnValue = F("Wendersstr.");
        break;
    }
    case 332313:
    {
        returnValue = F("Wenderstr.");
        break;
    }
    case 332314:
    {
        returnValue = F("Wenderter Str.");
        break;
    }
    case 332315:
    {
        returnValue = F("Wenderweg");
        break;
    }
    case 332316:
    {
        returnValue = F("Wendesche Loh");
        break;
    }
    case 332317:
    {
        returnValue = F("Wendeschleife");
        break;
    }
    case 332318:
    {
        returnValue = F("Wendessener Str.");
        break;
    }
    case 332319:
    {
        returnValue = F("Wendesser Landstr.");
        break;
    }
    case 332320:
    {
        returnValue = F("Wendesser Str.");
        break;
    }
    case 332321:
    {
        returnValue = F("Wendesteig");
        break;
    }
    case 332322:
    {
        returnValue = F("Wendestein");
        break;
    }
    case 332323:
    {
        returnValue = F("Wendestelle");
        break;
    }
    case 332324:
    {
        returnValue = F("Wendestelle Campus Jungfernsee");
        break;
    }
    case 332325:
    {
        returnValue = F("Wendestelle Haltestelle Hulvershorn");
        break;
    }
    case 332326:
    {
        returnValue = F("Wendestieg");
        break;
    }
    case 332327:
    {
        returnValue = F("Wendestr.");
        break;
    }
    case 332328:
    {
        returnValue = F("Wendeweg");
        break;
    }
    case 332329:
    {
        returnValue = F("Wendewehrstr.");
        break;
    }
    case 332330:
    {
        returnValue = F("Wendezeller Ring");
        break;
    }
    case 332331:
    {
        returnValue = F("Wendfeld");
        break;
    }
    case 332332:
    {
        returnValue = F("Wendfelder Damm");
        break;
    }
    case 332333:
    {
        returnValue = F("Wendgasse");
        break;
    }
    case 332334:
    {
        returnValue = F("Wendgräben");
        break;
    }
    case 332335:
    {
        returnValue = F("Wendgräbener Chaussee");
        break;
    }
    case 332336:
    {
        returnValue = F("Wendhausenstr.");
        break;
    }
    case 332337:
    {
        returnValue = F("Wendhofer Str.");
        break;
    }
    case 332338:
    {
        returnValue = F("Wendhofer Weg");
        break;
    }
    case 332339:
    {
        returnValue = F("Wendhusenstr.");
        break;
    }
    case 332340:
    {
        returnValue = F("Wendhäuser Weg");
        break;
    }
    case 332341:
    {
        returnValue = F("Wendilaweg");
        break;
    }
    case 332342:
    {
        returnValue = F("Wendinger Str.");
        break;
    }
    case 332343:
    {
        returnValue = F("Wendisch Ende");
        break;
    }
    case 332344:
    {
        returnValue = F("Wendisch Rietzer Str.");
        break;
    }
    case 332345:
    {
        returnValue = F("Wendisch-Borschütz");
        break;
    }
    case 332346:
    {
        returnValue = F("Wendischauweg");
        break;
    }
    case 332347:
    {
        returnValue = F("Wendischbora");
        break;
    }
    case 332348:
    {
        returnValue = F("Wendischbromer Str.");
        break;
    }
    case 332349:
    {
        returnValue = F("Wendische Mark");
        break;
    }
    case 332350:
    {
        returnValue = F("Wendische Str.");
        break;
    }
    case 332351:
    {
        returnValue = F("Wendischer Berg");
        break;
    }
    case 332352:
    {
        returnValue = F("Wendischer Graben");
        break;
    }
    case 332353:
    {
        returnValue = F("Wendischer Kirchhof");
        break;
    }
    case 332354:
    {
        returnValue = F("Wendischer Markt");
        break;
    }
    case 332355:
    {
        returnValue = F("Wendischer Ring");
        break;
    }
    case 332356:
    {
        returnValue = F("Wendisches Dorf");
        break;
    }
    case 332357:
    {
        returnValue = F("Wendischhagen");
        break;
    }
    case 332358:
    {
        returnValue = F("Wendischhägener Str.");
        break;
    }
    case 332359:
    {
        returnValue = F("Wendischhägener Weg");
        break;
    }
    case 332360:
    {
        returnValue = F("Wendischthuner Str.");
        break;
    }
    case 332361:
    {
        returnValue = F("Wendishain");
        break;
    }
    case 332362:
    {
        returnValue = F("Wendkoken");
        break;
    }
    case 332363:
    {
        returnValue = F("Wendlands Kamp");
        break;
    }
    case 332364:
    {
        returnValue = F("Wendlandstr.");
        break;
    }
    case 332365:
    {
        returnValue = F("Wendleite");
        break;
    }
    case 332366:
    {
        returnValue = F("Wendlershofer Weg");
        break;
    }
    case 332367:
    {
        returnValue = F("Wendlerstr.");
        break;
    }
    case 332368:
    {
        returnValue = F("Wendlerweg");
        break;
    }
    case 332369:
    {
        returnValue = F("Wendlesäcker");
        break;
    }
    case 332370:
    {
        returnValue = F("Wendling");
        break;
    }
    case 332371:
    {
        returnValue = F("Wendlinger Breite");
        break;
    }
    case 332372:
    {
        returnValue = F("Wendlinger Str.");
        break;
    }
    case 332373:
    {
        returnValue = F("Wendlinger Weg");
        break;
    }
    case 332374:
    {
        returnValue = F("Wendlingsbühn");
        break;
    }
    case 332375:
    {
        returnValue = F("Wendlmanntal");
        break;
    }
    case 332376:
    {
        returnValue = F("Wendlohe");
        break;
    }
    case 332377:
    {
        returnValue = F("Wendloher Weg");
        break;
    }
    case 332378:
    {
        returnValue = F("Wendlweg");
        break;
    }
    case 332379:
    {
        returnValue = F("Wendorf");
        break;
    }
    case 332380:
    {
        returnValue = F("Wendorf-Wendorfer Weg");
        break;
    }
    case 332381:
    {
        returnValue = F("Wendorfer Str.");
        break;
    }
    case 332382:
    {
        returnValue = F("Wendorfer Weg");
        break;
    }
    case 332383:
    {
        returnValue = F("Wendschotter Weg");
        break;
    }
    case 332384:
    {
        returnValue = F("Wendsdorfer Str.");
        break;
    }
    case 332385:
    {
        returnValue = F("Wendsdorfer Weg");
        break;
    }
    case 332386:
    {
        returnValue = F("Wendseeufer");
        break;
    }
    case 332387:
    {
        returnValue = F("Wendstr.");
        break;
    }
    case 332388:
    {
        returnValue = F("Wendtchaussee");
        break;
    }
    case 332389:
    {
        returnValue = F("Wendthäger Str.");
        break;
    }
    case 332390:
    {
        returnValue = F("Wendthöhe");
        break;
    }
    case 332391:
    {
        returnValue = F("Wendtpromenade");
        break;
    }
    case 332392:
    {
        returnValue = F("Wendtshof");
        break;
    }
    case 332393:
    {
        returnValue = F("Wendtstr.");
        break;
    }
    case 332394:
    {
        returnValue = F("Wendum");
        break;
    }
    case 332395:
    {
        returnValue = F("Weng");
        break;
    }
    case 332396:
    {
        returnValue = F("Wengbergstr.");
        break;
    }
    case 332397:
    {
        returnValue = F("Wengeberg");
        break;
    }
    case 332398:
    {
        returnValue = F("Wengelen");
        break;
    }
    case 332399:
    {
        returnValue = F("Wengelsbacher Str.");
        break;
    }
    case 332400:
    {
        returnValue = F("Wengelsdorfer Str.");
        break;
    }
    case 332401:
    {
        returnValue = F("Wengelssiefweg");
        break;
    }
    case 332402:
    {
        returnValue = F("Wengen");
        break;
    }
    case 332403:
    {
        returnValue = F("Wengener Str.");
        break;
    }
    case 332404:
    {
        returnValue = F("Wengenreuter Str.");
        break;
    }
    case 332405:
    {
        returnValue = F("Wengenrothstr.");
        break;
    }
    case 332406:
    {
        returnValue = F("Wengenstr.");
        break;
    }
    case 332407:
    {
        returnValue = F("Wengenweg");
        break;
    }
    case 332408:
    {
        returnValue = F("Wengenäckerstr.");
        break;
    }
    case 332409:
    {
        returnValue = F("Wenger Höfe");
        break;
    }
    case 332410:
    {
        returnValue = F("Wenger Str.");
        break;
    }
    case 332411:
    {
        returnValue = F("Wenger Wiese");
        break;
    }
    case 332412:
    {
        returnValue = F("Wengerberg");
        break;
    }
    case 332413:
    {
        returnValue = F("Wengerohrer Weg");
        break;
    }
    case 332414:
    {
        returnValue = F("Wengert");
        break;
    }
    case 332415:
    {
        returnValue = F("Wengertbergweg");
        break;
    }
    case 332416:
    {
        returnValue = F("Wengertenstr.");
        break;
    }
    case 332417:
    {
        returnValue = F("Wengertgasse");
        break;
    }
    case 332418:
    {
        returnValue = F("Wengertplatz");
        break;
    }
    case 332419:
    {
        returnValue = F("Wengertsberg");
        break;
    }
    case 332420:
    {
        returnValue = F("Wengertsbergallee");
        break;
    }
    case 332421:
    {
        returnValue = F("Wengertsgasse");
        break;
    }
    case 332422:
    {
        returnValue = F("Wengertsleite");
        break;
    }
    case 332423:
    {
        returnValue = F("Wengertspfad");
        break;
    }
    case 332424:
    {
        returnValue = F("Wengertsteg");
        break;
    }
    case 332425:
    {
        returnValue = F("Wengertsteig");
        break;
    }
    case 332426:
    {
        returnValue = F("Wengertsteige");
        break;
    }
    case 332427:
    {
        returnValue = F("Wengertstr.");
        break;
    }
    case 332428:
    {
        returnValue = F("Wengertsweg");
        break;
    }
    case 332429:
    {
        returnValue = F("Wengertsäcker");
        break;
    }
    case 332430:
    {
        returnValue = F("Wengertweg");
        break;
    }
    case 332431:
    {
        returnValue = F("Wengestr.");
        break;
    }
    case 332432:
    {
        returnValue = F("Wenggasse");
        break;
    }
    case 332433:
    {
        returnValue = F("Wengleinstr.");
        break;
    }
    case 332434:
    {
        returnValue = F("Wenglinger Str.");
        break;
    }
    case 332435:
    {
        returnValue = F("Wenhagener Str.");
        break;
    }
    case 332436:
    {
        returnValue = F("Wenigbach");
        break;
    }
    case 332437:
    {
        returnValue = F("Wenigenaue");
        break;
    }
    case 332438:
    {
        returnValue = F("Wenigenauma");
        break;
    }
    case 332439:
    {
        returnValue = F("Wenigendorf");
        break;
    }
    case 332440:
    {
        returnValue = F("Wenigenehricher Hauptstr.");
        break;
    }
    case 332441:
    {
        returnValue = F("Wenigenehricher Str.");
        break;
    }
    case 332442:
    {
        returnValue = F("Wenigenfeldstr.");
        break;
    }
    case 332443:
    {
        returnValue = F("Wenigenfeldsweg");
        break;
    }
    case 332444:
    {
        returnValue = F("Wenigenhasunger Weg");
        break;
    }
    case 332445:
    {
        returnValue = F("Wenigenjenaer Platz");
        break;
    }
    case 332446:
    {
        returnValue = F("Wenigenjenaer Ufer");
        break;
    }
    case 332447:
    {
        returnValue = F("Wenigensömmersche Str.");
        break;
    }
    case 332448:
    {
        returnValue = F("Wenigentafter Str.");
        break;
    }
    case 332449:
    {
        returnValue = F("Wenigerbachstr.");
        break;
    }
    case 332450:
    {
        returnValue = F("Wenighösbacher Str.");
        break;
    }
    case 332451:
    {
        returnValue = F("Wenigossa");
        break;
    }
    case 332452:
    {
        returnValue = F("Wenigrötz");
        break;
    }
    case 332453:
    {
        returnValue = F("Wenigumstädter Str.");
        break;
    }
    case 332454:
    {
        returnValue = F("Wenigwies");
        break;
    }
    case 332455:
    {
        returnValue = F("Weningser Str.");
        break;
    }
    case 332456:
    {
        returnValue = F("Weningshof");
        break;
    }
    case 332457:
    {
        returnValue = F("Weningstr.");
        break;
    }
    case 332458:
    {
        returnValue = F("Wenjenstr.");
        break;
    }
    case 332459:
    {
        returnValue = F("Wenkbacher Str.");
        break;
    }
    case 332460:
    {
        returnValue = F("Wenkeloh");
        break;
    }
    case 332461:
    {
        returnValue = F("Wenkeloher Str.");
        break;
    }
    case 332462:
    {
        returnValue = F("Wenkelsweg");
        break;
    }
    case 332463:
    {
        returnValue = F("Wenkenburgstr.");
        break;
    }
    case 332464:
    {
        returnValue = F("Wenkendorf");
        break;
    }
    case 332465:
    {
        returnValue = F("Wenkendörper Weg");
        break;
    }
    case 332466:
    {
        returnValue = F("Wenkenstr.");
        break;
    }
    case 332467:
    {
        returnValue = F("Wenkenwiesenweg");
        break;
    }
    case 332468:
    {
        returnValue = F("Wenkerei");
        break;
    }
    case 332469:
    {
        returnValue = F("Wenkerstr.");
        break;
    }
    case 332470:
    {
        returnValue = F("Wenkheimer Gäßchen");
        break;
    }
    case 332471:
    {
        returnValue = F("Wenkheimer Str.");
        break;
    }
    case 332472:
    {
        returnValue = F("Wenkheimer Weg");
        break;
    }
    case 332473:
    {
        returnValue = F("Wenkheimgasse");
        break;
    }
    case 332474:
    {
        returnValue = F("Wenkheimweg");
        break;
    }
    case 332475:
    {
        returnValue = F("Wenksweg");
        break;
    }
    case 332476:
    {
        returnValue = F("Wenlihörner Weg");
        break;
    }
    case 332477:
    {
        returnValue = F("Wennebach");
        break;
    }
    case 332478:
    {
        returnValue = F("Wenneberg");
        break;
    }
    case 332479:
    {
        returnValue = F("Wenneberstr.");
        break;
    }
    case 332480:
    {
        returnValue = F("Wennebosteler Hof");
        break;
    }
    case 332481:
    {
        returnValue = F("Wennebosteler Kirchweg");
        break;
    }
    case 332482:
    {
        returnValue = F("Wennebruchstr.");
        break;
    }
    case 332483:
    {
        returnValue = F("Wennedacher Str.");
        break;
    }
    case 332484:
    {
        returnValue = F("Wennekath");
        break;
    }
    case 332485:
    {
        returnValue = F("Wennekenstr.");
        break;
    }
    case 332486:
    {
        returnValue = F("Wennemannstr.");
        break;
    }
    case 332487:
    {
        returnValue = F("Wennemannswisch");
        break;
    }
    case 332488:
    {
        returnValue = F("Wennemarstr.");
        break;
    }
    case 332489:
    {
        returnValue = F("Wennemer Höhenweg");
        break;
    }
    case 332490:
    {
        returnValue = F("Wennemer Str.");
        break;
    }
    case 332491:
    {
        returnValue = F("Wennenbarg");
        break;
    }
    case 332492:
    {
        returnValue = F("Wennender Steigweg");
        break;
    }
    case 332493:
    {
        returnValue = F("Wennender Str.");
        break;
    }
    case 332494:
    {
        returnValue = F("Wennenkämper Str.");
        break;
    }
    case 332495:
    {
        returnValue = F("Wennerbergstr.");
        break;
    }
    case 332496:
    {
        returnValue = F("Wennereck");
        break;
    }
    case 332497:
    {
        returnValue = F("Wennern");
        break;
    }
    case 332498:
    {
        returnValue = F("Wennerode");
        break;
    }
    case 332499:
    {
        returnValue = F("Wennerscheider Str.");
        break;
    }
    case 332500:
    {
        returnValue = F("Wennerstorfer Kirchweg");
        break;
    }
    case 332501:
    {
        returnValue = F("Wennerstorfer Str.");
        break;
    }
    case 332502:
    {
        returnValue = F("Wennerstorfer Weg");
        break;
    }
    case 332503:
    {
        returnValue = F("Wennerweg");
        break;
    }
    case 332504:
    {
        returnValue = F("Wennestr.");
        break;
    }
    case 332505:
    {
        returnValue = F("Wennewick");
        break;
    }
    case 332506:
    {
        returnValue = F("Wennfelder Garten");
        break;
    }
    case 332507:
    {
        returnValue = F("Wennholdsweg");
        break;
    }
    case 332508:
    {
        returnValue = F("Wennhorn");
        break;
    }
    case 332509:
    {
        returnValue = F("Wennigloher Str.");
        break;
    }
    case 332510:
    {
        returnValue = F("Wennigser Ring");
        break;
    }
    case 332511:
    {
        returnValue = F("Wennigser Str.");
        break;
    }
    case 332512:
    {
        returnValue = F("Wennigser Weg");
        break;
    }
    case 332513:
    {
        returnValue = F("Wennigweg");
        break;
    }
    case 332514:
    {
        returnValue = F("Wenningen");
        break;
    }
    case 332515:
    {
        returnValue = F("Wenninger Weg");
        break;
    }
    case 332516:
    {
        returnValue = F("Wenningfeld");
        break;
    }
    case 332517:
    {
        returnValue = F("Wennings Kamp");
        break;
    }
    case 332518:
    {
        returnValue = F("Wennings Stiege");
        break;
    }
    case 332519:
    {
        returnValue = F("Wenningstedter Weg");
        break;
    }
    case 332520:
    {
        returnValue = F("Wenningweg");
        break;
    }
    case 332521:
    {
        returnValue = F("Wennseestr.");
        break;
    }
    case 332522:
    {
        returnValue = F("Wenntalstr.");
        break;
    }
    case 332523:
    {
        returnValue = F("Wennweg");
        break;
    }
    case 332524:
    {
        returnValue = F("Wenrade");
        break;
    }
    case 332525:
    {
        returnValue = F("Wenschdorf");
        break;
    }
    case 332526:
    {
        returnValue = F("Wenschdorfer Steige");
        break;
    }
    case 332527:
    {
        returnValue = F("Wenschdorfer Str.");
        break;
    }
    case 332528:
    {
        returnValue = F("Wenschdorfer Str. (Nr. 30-40)");
        break;
    }
    case 332529:
    {
        returnValue = F("Wenschdorfer Weg");
        break;
    }
    case 332530:
    {
        returnValue = F("Wenschebach");
        break;
    }
    case 332531:
    {
        returnValue = F("Wenschtstr.");
        break;
    }
    case 332532:
    {
        returnValue = F("Wensebrock");
        break;
    }
    case 332533:
    {
        returnValue = F("Wenselstr.");
        break;
    }
    case 332534:
    {
        returnValue = F("Wenser Bergstr.");
        break;
    }
    case 332535:
    {
        returnValue = F("Wenser Str.");
        break;
    }
    case 332536:
    {
        returnValue = F("Wensestr.");
        break;
    }
    case 332537:
    {
        returnValue = F("Wenseweg");
        break;
    }
    case 332538:
    {
        returnValue = F("Wensickendorfer Chaussee");
        break;
    }
    case 332539:
    {
        returnValue = F("Wensickendorfer Str.");
        break;
    }
    case 332540:
    {
        returnValue = F("Wensickendorfer Weg");
        break;
    }
    case 332541:
    {
        returnValue = F("Wenstrup");
        break;
    }
    case 332542:
    {
        returnValue = F("Wenstruper Str.");
        break;
    }
    case 332543:
    {
        returnValue = F("Wensöhlenweg");
        break;
    }
    case 332544:
    {
        returnValue = F("Wentallehrpfad");
        break;
    }
    case 332545:
    {
        returnValue = F("Wentalweg");
        break;
    }
    case 332546:
    {
        returnValue = F("Wentdorfer Ring");
        break;
    }
    case 332547:
    {
        returnValue = F("Wentelstr.");
        break;
    }
    case 332548:
    {
        returnValue = F("Wenterstr.");
        break;
    }
    case 332549:
    {
        returnValue = F("Wentorf");
        break;
    }
    case 332550:
    {
        returnValue = F("Wentorfer Str.");
        break;
    }
    case 332551:
    {
        returnValue = F("Wentorfer Weg");
        break;
    }
    case 332552:
    {
        returnValue = F("Wentorfstr.");
        break;
    }
    case 332553:
    {
        returnValue = F("Wentower Str.");
        break;
    }
    case 332554:
    {
        returnValue = F("Wentruper Mark");
        break;
    }
    case 332555:
    {
        returnValue = F("Wentruper Weg");
        break;
    }
    case 332556:
    {
        returnValue = F("Wentrupstr.");
        break;
    }
    case 332557:
    {
        returnValue = F("Wentzinger Str.");
        break;
    }
    case 332558:
    {
        returnValue = F("Wentzingerplatz");
        break;
    }
    case 332559:
    {
        returnValue = F("Wentzingerstr.");
        break;
    }
    case 332560:
    {
        returnValue = F("Wenzberg");
        break;
    }
    case 332561:
    {
        returnValue = F("Wenzburger Weg");
        break;
    }
    case 332562:
    {
        returnValue = F("Wenzel Gässchen");
        break;
    }
    case 332563:
    {
        returnValue = F("Wenzel-Hablik-Str.");
        break;
    }
    case 332564:
    {
        returnValue = F("Wenzel-Hablik-Weg");
        break;
    }
    case 332565:
    {
        returnValue = F("Wenzel-Hollar-Str.");
        break;
    }
    case 332566:
    {
        returnValue = F("Wenzel-Jaksch-Str.");
        break;
    }
    case 332567:
    {
        returnValue = F("Wenzel-Jorhan-Str.");
        break;
    }
    case 332568:
    {
        returnValue = F("Wenzel-Köhler-Str.");
        break;
    }
    case 332569:
    {
        returnValue = F("Wenzel-Parler-Weg");
        break;
    }
    case 332570:
    {
        returnValue = F("Wenzel-Soukup-Str.");
        break;
    }
    case 332571:
    {
        returnValue = F("Wenzel-Verner-Park");
        break;
    }
    case 332572:
    {
        returnValue = F("Wenzel-Verner-Str.");
        break;
    }
    case 332573:
    {
        returnValue = F("Wenzelbach");
        break;
    }
    case 332574:
    {
        returnValue = F("Wenzelbachstr.");
        break;
    }
    case 332575:
    {
        returnValue = F("Wenzelberg");
        break;
    }
    case 332576:
    {
        returnValue = F("Wenzelgasse");
        break;
    }
    case 332577:
    {
        returnValue = F("Wenzelhausen");
        break;
    }
    case 332578:
    {
        returnValue = F("Wenzelhausener Weg");
        break;
    }
    case 332579:
    {
        returnValue = F("Wenzelplatz");
        break;
    }
    case 332580:
    {
        returnValue = F("Wenzelsberg");
        break;
    }
    case 332581:
    {
        returnValue = F("Wenzelsgasse");
        break;
    }
    case 332582:
    {
        returnValue = F("Wenzelsring");
        break;
    }
    case 332583:
    {
        returnValue = F("Wenzelsstr.");
        break;
    }
    case 332584:
    {
        returnValue = F("Wenzelsteig");
        break;
    }
    case 332585:
    {
        returnValue = F("Wenzelsteinstr.");
        break;
    }
    case 332586:
    {
        returnValue = F("Wenzelsteinweg");
        break;
    }
    case 332587:
    {
        returnValue = F("Wenzelstr.");
        break;
    }
    case 332588:
    {
        returnValue = F("Wenzelsweg");
        break;
    }
    case 332589:
    {
        returnValue = F("Wenzelweg");
        break;
    }
    case 332590:
    {
        returnValue = F("Wenzendorfer Str.");
        break;
    }
    case 332591:
    {
        returnValue = F("Wenzendorfer Weg");
        break;
    }
    case 332592:
    {
        returnValue = F("Wenzenried");
        break;
    }
    case 332593:
    {
        returnValue = F("Wenzepfuhl");
        break;
    }
    case 332594:
    {
        returnValue = F("Wenzer Pflasterstr.");
        break;
    }
    case 332595:
    {
        returnValue = F("Wenzer Weg");
        break;
    }
    case 332596:
    {
        returnValue = F("Wenzingerstr.");
        break;
    }
    case 332597:
    {
        returnValue = F("Wenzkestr.");
        break;
    }
    case 332598:
    {
        returnValue = F("Wenzkirchhof");
        break;
    }
    case 332599:
    {
        returnValue = F("Wenzlerweg");
        break;
    }
    case 332600:
    {
        returnValue = F("Wenzlower Dorfstr.");
        break;
    }
    case 332601:
    {
        returnValue = F("Wenzlower Str.");
        break;
    }
    case 332602:
    {
        returnValue = F("Wepeling-Hole-Str.");
        break;
    }
    case 332603:
    {
        returnValue = F("Weperstr.");
        break;
    }
    case 332604:
    {
        returnValue = F("Weppach");
        break;
    }
    case 332605:
    {
        returnValue = F("Weppachweg");
        break;
    }
    case 332606:
    {
        returnValue = F("Weprajetzky-Weg");
        break;
    }
    case 332607:
    {
        returnValue = F("Werastr.");
        break;
    }
    case 332608:
    {
        returnValue = F("Werbaer Str.");
        break;
    }
    case 332609:
    {
        returnValue = F("Werbasweg");
        break;
    }
    case 332610:
    {
        returnValue = F("Werbeliner Str.");
        break;
    }
    case 332611:
    {
        returnValue = F("Werbeliner Weg");
        break;
    }
    case 332612:
    {
        returnValue = F("Werbelliner Dorfstr.");
        break;
    }
    case 332613:
    {
        returnValue = F("Werbelliner Str.");
        break;
    }
    case 332614:
    {
        returnValue = F("Werbelner Str.");
        break;
    }
    case 332615:
    {
        returnValue = F("Werbelow");
        break;
    }
    case 332616:
    {
        returnValue = F("Werbelsbrunnen");
        break;
    }
    case 332617:
    {
        returnValue = F("Werbener Landstr.");
        break;
    }
    case 332618:
    {
        returnValue = F("Werbener Str.");
        break;
    }
    case 332619:
    {
        returnValue = F("Werbener Weg");
        break;
    }
    case 332620:
    {
        returnValue = F("Werbenhainer Str.");
        break;
    }
    case 332621:
    {
        returnValue = F("Werbenweg");
        break;
    }
    case 332622:
    {
        returnValue = F("Werberger Weg");
        break;
    }
    case 332623:
    {
        returnValue = F("Werbetalstr.");
        break;
    }
    case 332624:
    {
        returnValue = F("Werbfeldstr.");
        break;
    }
    case 332625:
    {
        returnValue = F("Werbiger Dorfstr.");
        break;
    }
    case 332626:
    {
        returnValue = F("Werbiger Landstr.");
        break;
    }
    case 332627:
    {
        returnValue = F("Werbiger Str.");
        break;
    }
    case 332628:
    {
        returnValue = F("Werbiger Weg");
        break;
    }
    case 332629:
    {
        returnValue = F("Werbsiepen");
        break;
    }
    case 332630:
    {
        returnValue = F("Werbstr.");
        break;
    }
    case 332631:
    {
        returnValue = F("Werburger Str.");
        break;
    }
    case 332632:
    {
        returnValue = F("Werchau");
        break;
    }
    case 332633:
    {
        returnValue = F("Werchauer Str.");
        break;
    }
    case 332634:
    {
        returnValue = F("Werchauer Weg");
        break;
    }
    case 332635:
    {
        returnValue = F("Werchone-Weg");
        break;
    }
    case 332636:
    {
        returnValue = F("Werd");
        break;
    }
    case 332637:
    {
        returnValue = F("Werdandiweg");
        break;
    }
    case 332638:
    {
        returnValue = F("Werdau");
        break;
    }
    case 332639:
    {
        returnValue = F("Werdauer Str.");
        break;
    }
    case 332640:
    {
        returnValue = F("Werdegangstr.");
        break;
    }
    case 332641:
    {
        returnValue = F("Werdelsgraben");
        break;
    }
    case 332642:
    {
        returnValue = F("Werdelweg");
        break;
    }
    case 332643:
    {
        returnValue = F("Werden");
        break;
    }
    case 332644:
    {
        returnValue = F("Werdenbergstr.");
        break;
    }
    case 332645:
    {
        returnValue = F("Werdener Hof");
        break;
    }
    case 332646:
    {
        returnValue = F("Werdener Str.");
        break;
    }
    case 332647:
    {
        returnValue = F("Werdener Weg");
        break;
    }
    case 332648:
    {
        returnValue = F("Werdenfelser Str.");
        break;
    }
    case 332649:
    {
        returnValue = F("Werdenfelser Weg");
        break;
    }
    case 332650:
    {
        returnValue = F("Werdensteiner Weg");
        break;
    }
    case 332651:
    {
        returnValue = F("Werdensteinstr.");
        break;
    }
    case 332652:
    {
        returnValue = F("Werdenstr.");
        break;
    }
    case 332653:
    {
        returnValue = F("Werdenweg");
        break;
    }
    case 332654:
    {
        returnValue = F("Werder");
        break;
    }
    case 332655:
    {
        returnValue = F("Werder Anlagen");
        break;
    }
    case 332656:
    {
        returnValue = F("Werder Dorfstr.");
        break;
    }
    case 332657:
    {
        returnValue = F("Werder Str.");
        break;
    }
    case 332658:
    {
        returnValue = F("Werder Weg");
        break;
    }
    case 332659:
    {
        returnValue = F("Werder Ziegelei");
        break;
    }
    case 332660:
    {
        returnValue = F("Werderbrücke");
        break;
    }
    case 332661:
    {
        returnValue = F("Werderdammstr.");
        break;
    }
    case 332662:
    {
        returnValue = F("Werderhof");
        break;
    }
    case 332663:
    {
        returnValue = F("Werdermannstr.");
        break;
    }
    case 332664:
    {
        returnValue = F("Werdermühle");
        break;
    }
    case 332665:
    {
        returnValue = F("Werderpark");
        break;
    }
    case 332666:
    {
        returnValue = F("Werderplatz");
        break;
    }
    case 332667:
    {
        returnValue = F("Werdersche Dorfstr.");
        break;
    }
    case 332668:
    {
        returnValue = F("Werdersche Str.");
        break;
    }
    case 332669:
    {
        returnValue = F("Werderscher Damm");
        break;
    }
    case 332670:
    {
        returnValue = F("Werderscher Weg");
        break;
    }
    case 332671:
    {
        returnValue = F("Werdershof");
        break;
    }
    case 332672:
    {
        returnValue = F("Werdersteg");
        break;
    }
    case 332673:
    {
        returnValue = F("Werdersteig");
        break;
    }
    case 332674:
    {
        returnValue = F("Werderstr.");
        break;
    }
    case 332675:
    {
        returnValue = F("Werderthauer Dorfstr.");
        break;
    }
    case 332676:
    {
        returnValue = F("Werdertrail");
        break;
    }
    case 332677:
    {
        returnValue = F("Werderweg");
        break;
    }
    case 332678:
    {
        returnValue = F("Werderwiesen");
        break;
    }
    case 332679:
    {
        returnValue = F("Werdestr.");
        break;
    }
    case 332680:
    {
        returnValue = F("Werdingstr.");
        break;
    }
    case 332681:
    {
        returnValue = F("Werdlinstr.");
        break;
    }
    case 332682:
    {
        returnValue = F("Werdohler Landstr.");
        break;
    }
    case 332683:
    {
        returnValue = F("Werdohler Str.");
        break;
    }
    case 332684:
    {
        returnValue = F("Werdorfstr.");
        break;
    }
    case 332685:
    {
        returnValue = F("Werdstr.");
        break;
    }
    case 332686:
    {
        returnValue = F("Werdumer Altendeich");
        break;
    }
    case 332687:
    {
        returnValue = F("Werdumer Altengroden");
        break;
    }
    case 332688:
    {
        returnValue = F("Werdumer Altengrodendeich");
        break;
    }
    case 332689:
    {
        returnValue = F("Werdumer Kleiweg");
        break;
    }
    case 332690:
    {
        returnValue = F("Werdumer Str.");
        break;
    }
    case 332691:
    {
        returnValue = F("Weredunstr.");
        break;
    }
    case 332692:
    {
        returnValue = F("Weremboldstr.");
        break;
    }
    case 332693:
    {
        returnValue = F("Werenbergstr.");
        break;
    }
    case 332694:
    {
        returnValue = F("Werenfriedplatz");
        break;
    }
    case 332695:
    {
        returnValue = F("Werenwager Str.");
        break;
    }
    case 332696:
    {
        returnValue = F("Werenwagstr.");
        break;
    }
    case 332697:
    {
        returnValue = F("Werenzhainer Hauptstr.");
        break;
    }
    case 332698:
    {
        returnValue = F("Werenzhainer Wiesenweg");
        break;
    }
    case 332699:
    {
        returnValue = F("Werenzhainer Ziegelei");
        break;
    }
    case 332700:
    {
        returnValue = F("Werenzostr.");
        break;
    }
    case 332701:
    {
        returnValue = F("Werfelgasse");
        break;
    }
    case 332702:
    {
        returnValue = F("Werfelstr.");
        break;
    }
    case 332703:
    {
        returnValue = F("Werfelweg");
        break;
    }
    case 332704:
    {
        returnValue = F("Werfenstr.");
        break;
    }
    case 332705:
    {
        returnValue = F("Werfer Str.");
        break;
    }
    case 332706:
    {
        returnValue = F("Werfermühle");
        break;
    }
    case 332707:
    {
        returnValue = F("Werflinger Str.");
        break;
    }
    case 332708:
    {
        returnValue = F("Werftallee");
        break;
    }
    case 332709:
    {
        returnValue = F("Werftbahnstr.");
        break;
    }
    case 332710:
    {
        returnValue = F("Werftgasse");
        break;
    }
    case 332711:
    {
        returnValue = F("Werftpark");
        break;
    }
    case 332712:
    {
        returnValue = F("Werftstr.");
        break;
    }
    case 332713:
    {
        returnValue = F("Werfttangente");
        break;
    }
    case 332714:
    {
        returnValue = F("Werftweg");
        break;
    }
    case 332715:
    {
        returnValue = F("Wergandweg");
        break;
    }
    case 332716:
    {
        returnValue = F("Wergenstr.");
        break;
    }
    case 332717:
    {
        returnValue = F("Wergenweg");
        break;
    }
    case 332718:
    {
        returnValue = F("Wergzahna");
        break;
    }
    case 332719:
    {
        returnValue = F("Wergzahna am Wald");
        break;
    }
    case 332720:
    {
        returnValue = F("Werheide");
        break;
    }
    case 332721:
    {
        returnValue = F("Weringer Steige");
        break;
    }
    case 332722:
    {
        returnValue = F("Weringhauser Str.");
        break;
    }
    case 332723:
    {
        returnValue = F("Weringhusener Str.");
        break;
    }
    case 332724:
    {
        returnValue = F("Werinherstr.");
        break;
    }
    case 332725:
    {
        returnValue = F("Werkallee");
        break;
    }
    case 332726:
    {
        returnValue = F("Werkbrücke");
        break;
    }
    case 332727:
    {
        returnValue = F("Werkel");
        break;
    }
    case 332728:
    {
        returnValue = F("Werkeler Str.");
        break;
    }
    case 332729:
    {
        returnValue = F("Werkelslay");
        break;
    }
    case 332730:
    {
        returnValue = F("Werkerbachstr.");
        break;
    }
    case 332731:
    {
        returnValue = F("Werkerhofplatz");
        break;
    }
    case 332732:
    {
        returnValue = F("Werkerhofstr.");
        break;
    }
    case 332733:
    {
        returnValue = F("Werkgartenstr.");
        break;
    }
    case 332734:
    {
        returnValue = F("Werkgasse");
        break;
    }
    case 332735:
    {
        returnValue = F("Werkhaldenstr.");
        break;
    }
    case 332736:
    {
        returnValue = F("Werkhausgasse");
        break;
    }
    case 332737:
    {
        returnValue = F("Werkheimstr.");
        break;
    }
    case 332738:
    {
        returnValue = F("Werkhofstr.");
        break;
    }
    case 332739:
    {
        returnValue = F("Werkingstr.");
        break;
    }
    case 332740:
    {
        returnValue = F("Werkmannstr.");
        break;
    }
    case 332741:
    {
        returnValue = F("Werkmannsweg");
        break;
    }
    case 332742:
    {
        returnValue = F("Werkmeisterstr.");
        break;
    }
    case 332743:
    {
        returnValue = F("Werkmeisterweg");
        break;
    }
    case 332744:
    {
        returnValue = F("Werksallee");
        break;
    }
    case 332745:
    {
        returnValue = F("Werksausfahrt Rheinmetall");
        break;
    }
    case 332746:
    {
        returnValue = F("Werkschutzstr.");
        break;
    }
    case 332747:
    {
        returnValue = F("Werksgelände");
        break;
    }
    case 332748:
    {
        returnValue = F("Werkshagen");
        break;
    }
    case 332749:
    {
        returnValue = F("Werkshagener Str.");
        break;
    }
    case 332750:
    {
        returnValue = F("Werksiedelung Hufnagel");
        break;
    }
    case 332751:
    {
        returnValue = F("Werksiedlung");
        break;
    }
    case 332752:
    {
        returnValue = F("Werksiedlung Zechau-Ost");
        break;
    }
    case 332753:
    {
        returnValue = F("Werksplatz");
        break;
    }
    case 332754:
    {
        returnValue = F("Werksstr.");
        break;
    }
    case 332755:
    {
        returnValue = F("Werksstr. MKK");
        break;
    }
    case 332756:
    {
        returnValue = F("Werkstadthof");
        break;
    }
    case 332757:
    {
        returnValue = F("Werkstatthaus");
        break;
    }
    case 332758:
    {
        returnValue = F("Werkstattstr.");
        break;
    }
    case 332759:
    {
        returnValue = F("Werkstattweg");
        break;
    }
    case 332760:
    {
        returnValue = F("Werkstr.");
        break;
    }
    case 332761:
    {
        returnValue = F("Werkstr. Kiesgrube");
        break;
    }
    case 332762:
    {
        returnValue = F("Werkstättenplatz");
        break;
    }
    case 332763:
    {
        returnValue = F("Werkstättenstr.");
        break;
    }
    case 332764:
    {
        returnValue = F("Werkstättenweg");
        break;
    }
    case 332765:
    {
        returnValue = F("Werkstättestr.");
        break;
    }
    case 332766:
    {
        returnValue = F("Werksweg");
        break;
    }
    case 332767:
    {
        returnValue = F("Werkszufahrt Rheinmetall");
        break;
    }
    case 332768:
    {
        returnValue = F("Werkvolksiedlung");
        break;
    }
    case 332769:
    {
        returnValue = F("Werkvolkstr.");
        break;
    }
    case 332770:
    {
        returnValue = F("Werkweg");
        break;
    }
    case 332771:
    {
        returnValue = F("Werl");
        break;
    }
    case 332772:
    {
        returnValue = F("Werlbergerstr.");
        break;
    }
    case 332773:
    {
        returnValue = F("Werle Dorf");
        break;
    }
    case 332774:
    {
        returnValue = F("Werler Landstr.");
        break;
    }
    case 332775:
    {
        returnValue = F("Werler Str.");
        break;
    }
    case 332776:
    {
        returnValue = F("Werler Weg");
        break;
    }
    case 332777:
    {
        returnValue = F("Werlesmühle");
        break;
    }
    case 332778:
    {
        returnValue = F("Werlestr.");
        break;
    }
    case 332779:
    {
        returnValue = F("Werlhofstr.");
        break;
    }
    case 332780:
    {
        returnValue = F("Werlingstr.");
        break;
    }
    case 332781:
    {
        returnValue = F("Werlinstr.");
        break;
    }
    case 332782:
    {
        returnValue = F("Werlitzgraben");
        break;
    }
    case 332783:
    {
        returnValue = F("Werlitzscher Str.");
        break;
    }
    case 332784:
    {
        returnValue = F("Werlitzscher Weg");
        break;
    }
    case 332785:
    {
        returnValue = F("Werlo");
        break;
    }
    case 332786:
    {
        returnValue = F("Werlofeld");
        break;
    }
    case 332787:
    {
        returnValue = F("Werlohweg");
        break;
    }
    case 332788:
    {
        returnValue = F("Werlpad");
        break;
    }
    case 332789:
    {
        returnValue = F("Werlsbreite");
        break;
    }
    case 332790:
    {
        returnValue = F("Werlter Str.");
        break;
    }
    case 332791:
    {
        returnValue = F("Werlter Weg");
        break;
    }
    case 332792:
    {
        returnValue = F("Werltzscher Weg / Glesiener Str.");
        break;
    }
    case 332793:
    {
        returnValue = F("Werlweg");
        break;
    }
    case 332794:
    {
        returnValue = F("Werléstr.");
        break;
    }
    case 332795:
    {
        returnValue = F("Wermbachstr.");
        break;
    }
    case 332796:
    {
        returnValue = F("Wermecker Grund");
        break;
    }
    case 332797:
    {
        returnValue = F("Wermecker Weg");
        break;
    }
    case 332798:
    {
        returnValue = F("Wermeierfeld");
        break;
    }
    case 332799:
    {
        returnValue = F("Wermeisterweg");
        break;
    }
    case 332800:
    {
        returnValue = F("Wermeketal");
        break;
    }
    case 332801:
    {
        returnValue = F("Wermekeweg");
        break;
    }
    case 332802:
    {
        returnValue = F("Wermelskirchener Str.");
        break;
    }
    case 332803:
    {
        returnValue = F("Wermeltswiesenweg");
        break;
    }
    case 332804:
    {
        returnValue = F("Wermerichshäuser Weg");
        break;
    }
    case 332805:
    {
        returnValue = F("Wermertsgrund");
        break;
    }
    case 332806:
    {
        returnValue = F("Wermertshäuser Str.");
        break;
    }
    case 332807:
    {
        returnValue = F("Wermertsweg");
        break;
    }
    case 332808:
    {
        returnValue = F("Werminghoffstr.");
        break;
    }
    case 332809:
    {
        returnValue = F("Wermingser Bach");
        break;
    }
    case 332810:
    {
        returnValue = F("Wermsdorfer Str.");
        break;
    }
    case 332811:
    {
        returnValue = F("Wermsdorfer Weg");
        break;
    }
    case 332812:
    {
        returnValue = F("Wermuthstr.");
        break;
    }
    case 332813:
    {
        returnValue = F("Wermutsbrunnstr.");
        break;
    }
    case 332814:
    {
        returnValue = F("Wermutshausen");
        break;
    }
    case 332815:
    {
        returnValue = F("Wermutshäuser Str.");
        break;
    }
    case 332816:
    {
        returnValue = F("Wernaer Str.");
        break;
    }
    case 332817:
    {
        returnValue = F("Wernaer Tor");
        break;
    }
    case 332818:
    {
        returnValue = F("Wernapi-Ring");
        break;
    }
    case 332819:
    {
        returnValue = F("Wernarzer Str.");
        break;
    }
    case 332820:
    {
        returnValue = F("Wernauer Str.");
        break;
    }
    case 332821:
    {
        returnValue = F("Wernaustr.");
        break;
    }
    case 332822:
    {
        returnValue = F("Wernberger Str.");
        break;
    }
    case 332823:
    {
        returnValue = F("Wernbergstr.");
        break;
    }
    case 332824:
    {
        returnValue = F("Wernborner Str.");
        break;
    }
    case 332825:
    {
        returnValue = F("Wernborner Weg");
        break;
    }
    case 332826:
    {
        returnValue = F("Wernborner-Weg");
        break;
    }
    case 332827:
    {
        returnValue = F("Wernburger Weg");
        break;
    }
    case 332828:
    {
        returnValue = F("Werneburgstr.");
        break;
    }
    case 332829:
    {
        returnValue = F("Wernecker Gasse");
        break;
    }
    case 332830:
    {
        returnValue = F("Werneckestr.");
        break;
    }
    case 332831:
    {
        returnValue = F("Werner Christ Str.");
        break;
    }
    case 332832:
    {
        returnValue = F("Werner Gasse");
        break;
    }
    case 332833:
    {
        returnValue = F("Werner Heißler Weg");
        break;
    }
    case 332834:
    {
        returnValue = F("Werner Kuchebuch Weg");
        break;
    }
    case 332835:
    {
        returnValue = F("Werner Speer-Weg");
        break;
    }
    case 332836:
    {
        returnValue = F("Werner Str.");
        break;
    }
    case 332837:
    {
        returnValue = F("Werner-Ansorg-Str.");
        break;
    }
    case 332838:
    {
        returnValue = F("Werner-Artus-Str.");
        break;
    }
    case 332839:
    {
        returnValue = F("Werner-Baesmann-Park");
        break;
    }
    case 332840:
    {
        returnValue = F("Werner-Baier-Str.");
        break;
    }
    case 332841:
    {
        returnValue = F("Werner-Bauer-Str.");
        break;
    }
    case 332842:
    {
        returnValue = F("Werner-Becker-Str.");
        break;
    }
    case 332843:
    {
        returnValue = F("Werner-Bergengruen-Str.");
        break;
    }
    case 332844:
    {
        returnValue = F("Werner-Bergengruen-Weg");
        break;
    }
    case 332845:
    {
        returnValue = F("Werner-Bloss-Str.");
        break;
    }
    case 332846:
    {
        returnValue = F("Werner-Bochmann-Str.");
        break;
    }
    case 332847:
    {
        returnValue = F("Werner-Boeck-Stieg");
        break;
    }
    case 332848:
    {
        returnValue = F("Werner-Boie-Str.");
        break;
    }
    case 332849:
    {
        returnValue = F("Werner-Bosch-Str.");
        break;
    }
    case 332850:
    {
        returnValue = F("Werner-Brinkwirth-Str.");
        break;
    }
    case 332851:
    {
        returnValue = F("Werner-Buschmann-Str.");
        break;
    }
    case 332852:
    {
        returnValue = F("Werner-Cords-Weg");
        break;
    }
    case 332853:
    {
        returnValue = F("Werner-Deschauer-Str.");
        break;
    }
    case 332854:
    {
        returnValue = F("Werner-Diedrich-Str.");
        break;
    }
    case 332855:
    {
        returnValue = F("Werner-Diegmüller-Weg");
        break;
    }
    case 332856:
    {
        returnValue = F("Werner-Dirks-Weg");
        break;
    }
    case 332857:
    {
        returnValue = F("Werner-Disse-Str.");
        break;
    }
    case 332858:
    {
        returnValue = F("Werner-Dreesen-Weg");
        break;
    }
    case 332859:
    {
        returnValue = F("Werner-Düwel-Str.");
        break;
    }
    case 332860:
    {
        returnValue = F("Werner-Eckart-Ring");
        break;
    }
    case 332861:
    {
        returnValue = F("Werner-Egk-Platz");
        break;
    }
    case 332862:
    {
        returnValue = F("Werner-Egk-Str.");
        break;
    }
    case 332863:
    {
        returnValue = F("Werner-Egk-Weg");
        break;
    }
    case 332864:
    {
        returnValue = F("Werner-Eisenberg-Weg");
        break;
    }
    case 332865:
    {
        returnValue = F("Werner-Erkens-Str.");
        break;
    }
    case 332866:
    {
        returnValue = F("Werner-Finck-Weg");
        break;
    }
    case 332867:
    {
        returnValue = F("Werner-Forssmann-Weg");
        break;
    }
    case 332868:
    {
        returnValue = F("Werner-Forßmann-Ring");
        break;
    }
    case 332869:
    {
        returnValue = F("Werner-Forßmann-Str.");
        break;
    }
    case 332870:
    {
        returnValue = F("Werner-Franz-Weg");
        break;
    }
    case 332871:
    {
        returnValue = F("Werner-Gebhardt-Weg");
        break;
    }
    case 332872:
    {
        returnValue = F("Werner-Gilles-Str.");
        break;
    }
    case 332873:
    {
        returnValue = F("Werner-Gleim-Deich");
        break;
    }
    case 332874:
    {
        returnValue = F("Werner-Götz-Str.");
        break;
    }
    case 332875:
    {
        returnValue = F("Werner-Haarnagel-Weg");
        break;
    }
    case 332876:
    {
        returnValue = F("Werner-Haas-Str.");
        break;
    }
    case 332877:
    {
        returnValue = F("Werner-Haberland-Weg");
        break;
    }
    case 332878:
    {
        returnValue = F("Werner-Habig-Str.");
        break;
    }
    case 332879:
    {
        returnValue = F("Werner-Hammerschlag-Weg");
        break;
    }
    case 332880:
    {
        returnValue = F("Werner-Heinicke-Weg");
        break;
    }
    case 332881:
    {
        returnValue = F("Werner-Heins-Weg");
        break;
    }
    case 332882:
    {
        returnValue = F("Werner-Heisenberg-Str.");
        break;
    }
    case 332883:
    {
        returnValue = F("Werner-Heisenberg-Weg");
        break;
    }
    case 332884:
    {
        returnValue = F("Werner-Henn-Weg");
        break;
    }
    case 332885:
    {
        returnValue = F("Werner-Henschel-Str.");
        break;
    }
    case 332886:
    {
        returnValue = F("Werner-Hepp-Weg");
        break;
    }
    case 332887:
    {
        returnValue = F("Werner-Herrmann-Weg");
        break;
    }
    case 332888:
    {
        returnValue = F("Werner-Heyd Weg");
        break;
    }
    case 332889:
    {
        returnValue = F("Werner-Hilpert-Str.");
        break;
    }
    case 332890:
    {
        returnValue = F("Werner-Holderied-Weg");
        break;
    }
    case 332891:
    {
        returnValue = F("Werner-Höchstädt-Str.");
        break;
    }
    case 332892:
    {
        returnValue = F("Werner-Hübner-Weg");
        break;
    }
    case 332893:
    {
        returnValue = F("Werner-Jacobi-Platz");
        break;
    }
    case 332894:
    {
        returnValue = F("Werner-Jaeger-Str.");
        break;
    }
    case 332895:
    {
        returnValue = F("Werner-John-Str.");
        break;
    }
    case 332896:
    {
        returnValue = F("Werner-Juchler-Platz");
        break;
    }
    case 332897:
    {
        returnValue = F("Werner-Kammann-Str.");
        break;
    }
    case 332898:
    {
        returnValue = F("Werner-Karl-Heisenberg-Str.");
        break;
    }
    case 332899:
    {
        returnValue = F("Werner-Klebb-Weg");
        break;
    }
    case 332900:
    {
        returnValue = F("Werner-Klein-Str.");
        break;
    }
    case 332901:
    {
        returnValue = F("Werner-Klemke-Str.");
        break;
    }
    case 332902:
    {
        returnValue = F("Werner-Kling-Str.");
        break;
    }
    case 332903:
    {
        returnValue = F("Werner-Knebel-Weg");
        break;
    }
    case 332904:
    {
        returnValue = F("Werner-Kowalski-Str.");
        break;
    }
    case 332905:
    {
        returnValue = F("Werner-Krauß-Str.");
        break;
    }
    case 332906:
    {
        returnValue = F("Werner-Kremeyer-Str.");
        break;
    }
    case 332907:
    {
        returnValue = F("Werner-Kroll-Weg");
        break;
    }
    case 332908:
    {
        returnValue = F("Werner-Kubitza-Str.");
        break;
    }
    case 332909:
    {
        returnValue = F("Werner-Köppe-Weg");
        break;
    }
    case 332910:
    {
        returnValue = F("Werner-Körvers-Str.");
        break;
    }
    case 332911:
    {
        returnValue = F("Werner-Lamberz-Str.");
        break;
    }
    case 332912:
    {
        returnValue = F("Werner-Lesser-Str.");
        break;
    }
    case 332913:
    {
        returnValue = F("Werner-Lücke-Str.");
        break;
    }
    case 332914:
    {
        returnValue = F("Werner-Lüderitz-Weg");
        break;
    }
    case 332915:
    {
        returnValue = F("Werner-Lüdtke-Str.");
        break;
    }
    case 332916:
    {
        returnValue = F("Werner-Manz-Str.");
        break;
    }
    case 332917:
    {
        returnValue = F("Werner-Martin-Weg");
        break;
    }
    case 332918:
    {
        returnValue = F("Werner-Menne-Pfad");
        break;
    }
    case 332919:
    {
        returnValue = F("Werner-Metzen-Str.");
        break;
    }
    case 332920:
    {
        returnValue = F("Werner-Müller-Weg");
        break;
    }
    case 332921:
    {
        returnValue = F("Werner-Nerlich-Bogen");
        break;
    }
    case 332922:
    {
        returnValue = F("Werner-Nordmeyer-Str.");
        break;
    }
    case 332923:
    {
        returnValue = F("Werner-Peix-Str.");
        break;
    }
    case 332924:
    {
        returnValue = F("Werner-Petzold-Str.");
        break;
    }
    case 332925:
    {
        returnValue = F("Werner-Pfrommer-Weg");
        break;
    }
    case 332926:
    {
        returnValue = F("Werner-Pinhack-Weg");
        break;
    }
    case 332927:
    {
        returnValue = F("Werner-Pomikal-Ring");
        break;
    }
    case 332928:
    {
        returnValue = F("Werner-Preuß-Hof");
        break;
    }
    case 332929:
    {
        returnValue = F("Werner-Priegnitz-Str.");
        break;
    }
    case 332930:
    {
        returnValue = F("Werner-Rech-Str.");
        break;
    }
    case 332931:
    {
        returnValue = F("Werner-Reich-Str.");
        break;
    }
    case 332932:
    {
        returnValue = F("Werner-Reif-Str.");
        break;
    }
    case 332933:
    {
        returnValue = F("Werner-Reimers-Str.");
        break;
    }
    case 332934:
    {
        returnValue = F("Werner-Reinartz-Str.");
        break;
    }
    case 332935:
    {
        returnValue = F("Werner-Reiner-Allee");
        break;
    }
    case 332936:
    {
        returnValue = F("Werner-Rolevinck-Grundschule");
        break;
    }
    case 332937:
    {
        returnValue = F("Werner-Rolevinck-Str.");
        break;
    }
    case 332938:
    {
        returnValue = F("Werner-Rottenau-Weg");
        break;
    }
    case 332939:
    {
        returnValue = F("Werner-Rummelt-Str.");
        break;
    }
    case 332940:
    {
        returnValue = F("Werner-Salomon-Str.");
        break;
    }
    case 332941:
    {
        returnValue = F("Werner-Scheidt-Str.");
        break;
    }
    case 332942:
    {
        returnValue = F("Werner-Scherer-Platz");
        break;
    }
    case 332943:
    {
        returnValue = F("Werner-Schlimme-Str.");
        break;
    }
    case 332944:
    {
        returnValue = F("Werner-Schlinsog-Str.");
        break;
    }
    case 332945:
    {
        returnValue = F("Werner-Schmid-Str.");
        break;
    }
    case 332946:
    {
        returnValue = F("Werner-Schmidt-Weg");
        break;
    }
    case 332947:
    {
        returnValue = F("Werner-Schrader-Str.");
        break;
    }
    case 332948:
    {
        returnValue = F("Werner-Schreiner-Str.");
        break;
    }
    case 332949:
    {
        returnValue = F("Werner-Schuller-Str.");
        break;
    }
    case 332950:
    {
        returnValue = F("Werner-Schumacher-Str.");
        break;
    }
    case 332951:
    {
        returnValue = F("Werner-Schöne-Str.");
        break;
    }
    case 332952:
    {
        returnValue = F("Werner-Schürer-Platz");
        break;
    }
    case 332953:
    {
        returnValue = F("Werner-Seelenbinder-Ring");
        break;
    }
    case 332954:
    {
        returnValue = F("Werner-Seelenbinder-Ring 4A");
        break;
    }
    case 332955:
    {
        returnValue = F("Werner-Seelenbinder-Str.");
        break;
    }
    case 332956:
    {
        returnValue = F("Werner-Seelenbinder-Weg");
        break;
    }
    case 332957:
    {
        returnValue = F("Werner-Seidensticker-Allee");
        break;
    }
    case 332958:
    {
        returnValue = F("Werner-Senger-Str.");
        break;
    }
    case 332959:
    {
        returnValue = F("Werner-Setzer-Weg");
        break;
    }
    case 332960:
    {
        returnValue = F("Werner-Siemens-Str.");
        break;
    }
    case 332961:
    {
        returnValue = F("Werner-Sombart-Str.");
        break;
    }
    case 332962:
    {
        returnValue = F("Werner-Spieß-Str.");
        break;
    }
    case 332963:
    {
        returnValue = F("Werner-Steinem-Platz");
        break;
    }
    case 332964:
    {
        returnValue = F("Werner-Stemmann-Weg");
        break;
    }
    case 332965:
    {
        returnValue = F("Werner-Strobel-Str.");
        break;
    }
    case 332966:
    {
        returnValue = F("Werner-Suffa-Str.");
        break;
    }
    case 332967:
    {
        returnValue = F("Werner-Sylten-Str.");
        break;
    }
    case 332968:
    {
        returnValue = F("Werner-Utter-Weg");
        break;
    }
    case 332969:
    {
        returnValue = F("Werner-Voß-Str.");
        break;
    }
    case 332970:
    {
        returnValue = F("Werner-Wachenbrunner-Str.");
        break;
    }
    case 332971:
    {
        returnValue = F("Werner-Walz-Str.");
        break;
    }
    case 332972:
    {
        returnValue = F("Werner-Warsinsky-Str.");
        break;
    }
    case 332973:
    {
        returnValue = F("Werner-Wenzel-Str.");
        break;
    }
    case 332974:
    {
        returnValue = F("Werner-Wittig-Weg");
        break;
    }
    case 332975:
    {
        returnValue = F("Werner-Zwiebelberg-Str.");
        break;
    }
    case 332976:
    {
        returnValue = F("Werner-v.-Siemens-Str.");
        break;
    }
    case 332977:
    {
        returnValue = F("Werner-von-Kirchen-Str.");
        break;
    }
    case 332978:
    {
        returnValue = F("Werner-von-Leuckart-Str.");
        break;
    }
    case 332979:
    {
        returnValue = F("Werner-von-Meding-Str.");
        break;
    }
    case 332980:
    {
        returnValue = F("Werner-von-Negenborn-Str.");
        break;
    }
    case 332981:
    {
        returnValue = F("Werner-von-Schienen-Str.");
        break;
    }
    case 332982:
    {
        returnValue = F("Werner-von-Siemens-Allee");
        break;
    }
    case 332983:
    {
        returnValue = F("Werner-von-Siemens-Ring");
        break;
    }
    case 332984:
    {
        returnValue = F("Werner-von-Siemens-Str.");
        break;
    }
    case 332985:
    {
        returnValue = F("Werner-von-Siemens-Weg");
        break;
    }
    case 332986:
    {
        returnValue = F("Werner-von-der-Schulenburg-Str.");
        break;
    }
    case 332987:
    {
        returnValue = F("Wernergasse");
        break;
    }
    case 332988:
    {
        returnValue = F("Wernergraben");
        break;
    }
    case 332989:
    {
        returnValue = F("Wernergässel");
        break;
    }
    case 332990:
    {
        returnValue = F("Wernerhäusl");
        break;
    }
    case 332991:
    {
        returnValue = F("Wernerhüttenweg");
        break;
    }
    case 332992:
    {
        returnValue = F("Wernerplatz");
        break;
    }
    case 332993:
    {
        returnValue = F("Werners Weg");
        break;
    }
    case 332994:
    {
        returnValue = F("Wernersbachweg");
        break;
    }
    case 332995:
    {
        returnValue = F("Wernersbergerstr.");
        break;
    }
    case 332996:
    {
        returnValue = F("Wernersbergstr.");
        break;
    }
    case 332997:
    {
        returnValue = F("Wernerschneise");
        break;
    }
    case 332998:
    {
        returnValue = F("Wernerseck");
        break;
    }
    case 332999:
    {
        returnValue = F("Wernerseckstr.");
        break;
    }
    case 333000:
    {
        returnValue = F("Wernersgarten");
        break;
    }
    case 333001:
    {
        returnValue = F("Wernershagener Weg");
        break;
    }
    case 333002:
    {
        returnValue = F("Wernershäuser Str.");
        break;
    }
    case 333003:
    {
        returnValue = F("Wernershäuser Weg");
        break;
    }
    case 333004:
    {
        returnValue = F("Wernersreuth");
        break;
    }
    case 333005:
    {
        returnValue = F("Wernersstr.");
        break;
    }
    case 333006:
    {
        returnValue = F("Wernerstr.");
        break;
    }
    case 333007:
    {
        returnValue = F("Wernerswiese");
        break;
    }
    case 333008:
    {
        returnValue = F("Wernerusstr.");
        break;
    }
    case 333009:
    {
        returnValue = F("Wernerwaldstr.");
        break;
    }
    case 333010:
    {
        returnValue = F("Wernerweg");
        break;
    }
    case 333011:
    {
        returnValue = F("Wernerwerkstr.");
        break;
    }
    case 333012:
    {
        returnValue = F("Wernesgrüner Siedlung");
        break;
    }
    case 333013:
    {
        returnValue = F("Wernesgrüner Str.");
        break;
    }
    case 333014:
    {
        returnValue = F("Wernesser Weg");
        break;
    }
    case 333015:
    {
        returnValue = F("Wernesäcker");
        break;
    }
    case 333016:
    {
        returnValue = F("Werneuchener Chaussee");
        break;
    }
    case 333017:
    {
        returnValue = F("Werneuchener Str.");
        break;
    }
    case 333018:
    {
        returnValue = F("Werneuchener Weg");
        break;
    }
    case 333019:
    {
        returnValue = F("Werneweg");
        break;
    }
    case 333020:
    {
        returnValue = F("Wernfelder Str.");
        break;
    }
    case 333021:
    {
        returnValue = F("Wernfelser Weg");
        break;
    }
    case 333022:
    {
        returnValue = F("Werngasse");
        break;
    }
    case 333023:
    {
        returnValue = F("Werngeser Str.");
        break;
    }
    case 333024:
    {
        returnValue = F("Werngrund");
        break;
    }
    case 333025:
    {
        returnValue = F("Wernhammerstr.");
        break;
    }
    case 333026:
    {
        returnValue = F("Wernhardsberger Str.");
        break;
    }
    case 333027:
    {
        returnValue = F("Wernhardstr.");
        break;
    }
    case 333028:
    {
        returnValue = F("Wernhardtstr.");
        break;
    }
    case 333029:
    {
        returnValue = F("Wernher-Von-Braun-Str.");
        break;
    }
    case 333030:
    {
        returnValue = F("Wernher-von-Braun-Str.");
        break;
    }
    case 333031:
    {
        returnValue = F("Wernher-von-Braun-Weg");
        break;
    }
    case 333032:
    {
        returnValue = F("Wernhergasse");
        break;
    }
    case 333033:
    {
        returnValue = F("Wernherstr.");
        break;
    }
    case 333034:
    {
        returnValue = F("Wernickstr.");
        break;
    }
    case 333035:
    {
        returnValue = F("Wernigeroder Str.");
        break;
    }
    case 333036:
    {
        returnValue = F("Wernigerodestr.");
        break;
    }
    case 333037:
    {
        returnValue = F("Wernigeröder Str.");
        break;
    }
    case 333038:
    {
        returnValue = F("Wernigeröder Tor");
        break;
    }
    case 333039:
    {
        returnValue = F("Wernigeröder Weg");
        break;
    }
    case 333040:
    {
        returnValue = F("Wernikower Dorfstr.");
        break;
    }
    case 333041:
    {
        returnValue = F("Wernikower Str.");
        break;
    }
    case 333042:
    {
        returnValue = F("Werningeröder Dorfstr.");
        break;
    }
    case 333043:
    {
        returnValue = F("Werninghoker Str.");
        break;
    }
    case 333044:
    {
        returnValue = F("Werningkamp");
        break;
    }
    case 333045:
    {
        returnValue = F("Wernings");
        break;
    }
    case 333046:
    {
        returnValue = F("Werningser Str.");
        break;
    }
    case 333047:
    {
        returnValue = F("Werningslebener Str.");
        break;
    }
    case 333048:
    {
        returnValue = F("Wernitzer Str.");
        break;
    }
    case 333049:
    {
        returnValue = F("Wernitzer Weg");
        break;
    }
    case 333050:
    {
        returnValue = F("Wernitzerstr.");
        break;
    }
    case 333051:
    {
        returnValue = F("Wernitzgrüner Str.");
        break;
    }
    case 333052:
    {
        returnValue = F("Wernitzgrüner Weg");
        break;
    }
    case 333053:
    {
        returnValue = F("Wernizer Str.");
        break;
    }
    case 333054:
    {
        returnValue = F("Wernleite");
        break;
    }
    case 333055:
    {
        returnValue = F("Wernleitenstr.");
        break;
    }
    case 333056:
    {
        returnValue = F("Wernpark");
        break;
    }
    case 333057:
    {
        returnValue = F("Wernroder Str.");
        break;
    }
    case 333058:
    {
        returnValue = F("Wernröder Hauptstr.");
        break;
    }
    case 333059:
    {
        returnValue = F("Wernsbach");
        break;
    }
    case 333060:
    {
        returnValue = F("Wernsbacher Weg");
        break;
    }
    case 333061:
    {
        returnValue = F("Wernsbachstr.");
        break;
    }
    case 333062:
    {
        returnValue = F("Wernsbachweg");
        break;
    }
    case 333063:
    {
        returnValue = F("Wernscheider Berg");
        break;
    }
    case 333064:
    {
        returnValue = F("Wernsdorf");
        break;
    }
    case 333065:
    {
        returnValue = F("Wernsdorf Lange Str.");
        break;
    }
    case 333066:
    {
        returnValue = F("Wernsdorf Wiesengrund");
        break;
    }
    case 333067:
    {
        returnValue = F("Wernsdorfer Papierfabrik");
        break;
    }
    case 333068:
    {
        returnValue = F("Wernsdorfer Str.");
        break;
    }
    case 333069:
    {
        returnValue = F("Wernsdorfer Weg");
        break;
    }
    case 333070:
    {
        returnValue = F("Wernsdorfring");
        break;
    }
    case 333071:
    {
        returnValue = F("Wernshagen");
        break;
    }
    case 333072:
    {
        returnValue = F("Wernsmühle");
        break;
    }
    case 333073:
    {
        returnValue = F("Wernstedter Bahnhofstr.");
        break;
    }
    case 333074:
    {
        returnValue = F("Wernstedter Dorfstr.");
        break;
    }
    case 333075:
    {
        returnValue = F("Wernstedter Str.");
        break;
    }
    case 333076:
    {
        returnValue = F("Wernstein");
        break;
    }
    case 333077:
    {
        returnValue = F("Wernsteiner Str.");
        break;
    }
    case 333078:
    {
        returnValue = F("Wernstorferstr.");
        break;
    }
    case 333079:
    {
        returnValue = F("Wernstr.");
        break;
    }
    case 333080:
    {
        returnValue = F("Werntalstr.");
        break;
    }
    case 333081:
    {
        returnValue = F("Werntgens Hof");
        break;
    }
    case 333082:
    {
        returnValue = F("Werntgenstr.");
        break;
    }
    case 333083:
    {
        returnValue = F("Werntzeweg");
        break;
    }
    case 333084:
    {
        returnValue = F("Wernweg");
        break;
    }
    case 333085:
    {
        returnValue = F("Wernzstr.");
        break;
    }
    case 333086:
    {
        returnValue = F("Werother Str.");
        break;
    }
    case 333087:
    {
        returnValue = F("Werother Weg");
        break;
    }
    case 333088:
    {
        returnValue = F("Werper Str.");
        break;
    }
    case 333089:
    {
        returnValue = F("Werra Burgen Steig");
        break;
    }
    case 333090:
    {
        returnValue = F("Werra-Aue");
        break;
    }
    case 333091:
    {
        returnValue = F("Werra-Burgen-Steig");
        break;
    }
    case 333092:
    {
        returnValue = F("Werraaue");
        break;
    }
    case 333093:
    {
        returnValue = F("Werrablick");
        break;
    }
    case 333094:
    {
        returnValue = F("Werrabrücke");
        break;
    }
    case 333095:
    {
        returnValue = F("Werrachstr.");
        break;
    }
    case 333096:
    {
        returnValue = F("Werragasse");
        break;
    }
    case 333097:
    {
        returnValue = F("Werrahof");
        break;
    }
    case 333098:
    {
        returnValue = F("Werrarain");
        break;
    }
    case 333099:
    {
        returnValue = F("Werraring");
        break;
    }
    case 333100:
    {
        returnValue = F("Werrastr.");
        break;
    }
    case 333101:
    {
        returnValue = F("Werratal-Radweg");
        break;
    }
    case 333102:
    {
        returnValue = F("Werrator");
        break;
    }
    case 333103:
    {
        returnValue = F("Werraweg");
        break;
    }
    case 333104:
    {
        returnValue = F("Werrbachstr.");
        break;
    }
    case 333105:
    {
        returnValue = F("Werrchenstr.");
        break;
    }
    case 333106:
    {
        returnValue = F("Werre");
        break;
    }
    case 333107:
    {
        returnValue = F("Werreaue");
        break;
    }
    case 333108:
    {
        returnValue = F("Werrebogen");
        break;
    }
    case 333109:
    {
        returnValue = F("Werregrund");
        break;
    }
    case 333110:
    {
        returnValue = F("Werregärten");
        break;
    }
    case 333111:
    {
        returnValue = F("Werrengasse");
        break;
    }
    case 333112:
    {
        returnValue = F("Werrengärten");
        break;
    }
    case 333113:
    {
        returnValue = F("Werrensee");
        break;
    }
    case 333114:
    {
        returnValue = F("Werrenstr.");
        break;
    }
    case 333115:
    {
        returnValue = F("Werrenweg");
        break;
    }
    case 333116:
    {
        returnValue = F("Werrenwiesenstr.");
        break;
    }
    case 333117:
    {
        returnValue = F("Werrenäckerstr.");
        break;
    }
    case 333118:
    {
        returnValue = F("Werrestr.");
        break;
    }
    case 333119:
    {
        returnValue = F("Werresweg");
        break;
    }
    case 333120:
    {
        returnValue = F("Werreweg");
        break;
    }
    case 333121:
    {
        returnValue = F("Werrgasse");
        break;
    }
    case 333122:
    {
        returnValue = F("Werricher Str.");
        break;
    }
    case 333123:
    {
        returnValue = F("Werringer Str.");
        break;
    }
    case 333124:
    {
        returnValue = F("Werringer Weg");
        break;
    }
    case 333125:
    {
        returnValue = F("Werrsfeldweg");
        break;
    }
    case 333126:
    {
        returnValue = F("Werrweg");
        break;
    }
    case 333127:
    {
        returnValue = F("Werrystr.");
        break;
    }
    case 333128:
    {
        returnValue = F("Wersaber Dorfstr.");
        break;
    }
    case 333129:
    {
        returnValue = F("Wersauer Str.");
        break;
    }
    case 333130:
    {
        returnValue = F("Wersauer Weg");
        break;
    }
    case 333131:
    {
        returnValue = F("Wersbachtal");
        break;
    }
    case 333132:
    {
        returnValue = F("Wersborgweg");
        break;
    }
    case 333133:
    {
        returnValue = F("Wersch");
        break;
    }
    case 333134:
    {
        returnValue = F("Werschbachtal");
        break;
    }
    case 333135:
    {
        returnValue = F("Werschberg");
        break;
    }
    case 333136:
    {
        returnValue = F("Werschbroichweg");
        break;
    }
    case 333137:
    {
        returnValue = F("Wersche");
        break;
    }
    case 333138:
    {
        returnValue = F("Werschener Str.");
        break;
    }
    case 333139:
    {
        returnValue = F("Werschenreger Str.");
        break;
    }
    case 333140:
    {
        returnValue = F("Werscher Str.");
        break;
    }
    case 333141:
    {
        returnValue = F("Werschstr.");
        break;
    }
    case 333142:
    {
        returnValue = F("Werschtalstr.");
        break;
    }
    case 333143:
    {
        returnValue = F("Werschweilerstr.");
        break;
    }
    case 333144:
    {
        returnValue = F("Werschweilerweg");
        break;
    }
    case 333145:
    {
        returnValue = F("Wersdorfer Weg");
        break;
    }
    case 333146:
    {
        returnValue = F("Werseaue");
        break;
    }
    case 333147:
    {
        returnValue = F("Wersebrede");
        break;
    }
    case 333148:
    {
        returnValue = F("Wersedamm");
        break;
    }
    case 333149:
    {
        returnValue = F("Wersedreisch");
        break;
    }
    case 333150:
    {
        returnValue = F("Wersenberg");
        break;
    }
    case 333151:
    {
        returnValue = F("Wersener Damm");
        break;
    }
    case 333152:
    {
        returnValue = F("Wersener Landstr.");
        break;
    }
    case 333153:
    {
        returnValue = F("Wersener Str.");
        break;
    }
    case 333154:
    {
        returnValue = F("Wersenweg");
        break;
    }
    case 333155:
    {
        returnValue = F("Wersepromenade");
        break;
    }
    case 333156:
    {
        returnValue = F("Wersestr.");
        break;
    }
    case 333157:
    {
        returnValue = F("Wersetal");
        break;
    }
    case 333158:
    {
        returnValue = F("Werseufer");
        break;
    }
    case 333159:
    {
        returnValue = F("Werseweg");
        break;
    }
    case 333160:
    {
        returnValue = F("Werster Siek");
        break;
    }
    case 333161:
    {
        returnValue = F("Werster Str.");
        break;
    }
    case 333162:
    {
        returnValue = F("Werster Wiehe");
        break;
    }
    case 333163:
    {
        returnValue = F("Wersterholz");
        break;
    }
    case 333164:
    {
        returnValue = F("Wert");
        break;
    }
    case 333165:
    {
        returnValue = F("Wertachbogen");
        break;
    }
    case 333166:
    {
        returnValue = F("Wertachbrücke");
        break;
    }
    case 333167:
    {
        returnValue = F("Wertacher Str.");
        break;
    }
    case 333168:
    {
        returnValue = F("Wertachpark");
        break;
    }
    case 333169:
    {
        returnValue = F("Wertachsteg");
        break;
    }
    case 333170:
    {
        returnValue = F("Wertachstr.");
        break;
    }
    case 333171:
    {
        returnValue = F("Wertachtalstr.");
        break;
    }
    case 333172:
    {
        returnValue = F("Wertachweg");
        break;
    }
    case 333173:
    {
        returnValue = F("Wertchenstr.");
        break;
    }
    case 333174:
    {
        returnValue = F("Wertenbachstr.");
        break;
    }
    case 333175:
    {
        returnValue = F("Wertenbruch");
        break;
    }
    case 333176:
    {
        returnValue = F("Wertenbrucher Str.");
        break;
    }
    case 333177:
    {
        returnValue = F("Wertenwasenweg");
        break;
    }
    case 333178:
    {
        returnValue = F("Wertgasse");
        break;
    }
    case 333179:
    {
        returnValue = F("Werth");
        break;
    }
    case 333180:
    {
        returnValue = F("Werthalde");
        break;
    }
    case 333181:
    {
        returnValue = F("Werthallee");
        break;
    }
    case 333182:
    {
        returnValue = F("Wertheimer Ring");
        break;
    }
    case 333183:
    {
        returnValue = F("Wertheimer Str.");
        break;
    }
    case 333184:
    {
        returnValue = F("Wertheimer Weg");
        break;
    }
    case 333185:
    {
        returnValue = F("Wertheimstr.");
        break;
    }
    case 333186:
    {
        returnValue = F("Werther Hof");
        break;
    }
    case 333187:
    {
        returnValue = F("Werther Postweg");
        break;
    }
    case 333188:
    {
        returnValue = F("Werther Str.");
        break;
    }
    case 333189:
    {
        returnValue = F("Wertherberg");
        break;
    }
    case 333190:
    {
        returnValue = F("Wertherbrucher Str.");
        break;
    }
    case 333191:
    {
        returnValue = F("Wertherstr.");
        break;
    }
    case 333192:
    {
        returnValue = F("Werthestr.");
        break;
    }
    case 333193:
    {
        returnValue = F("Werthfeldstr.");
        break;
    }
    case 333194:
    {
        returnValue = F("Werthgasse");
        break;
    }
    case 333195:
    {
        returnValue = F("Werthhovener Str.");
        break;
    }
    case 333196:
    {
        returnValue = F("Werthhovener Weg");
        break;
    }
    case 333197:
    {
        returnValue = F("Werthmannstr.");
        break;
    }
    case 333198:
    {
        returnValue = F("Werthmannweg");
        break;
    }
    case 333199:
    {
        returnValue = F("Werthmühlenstr.");
        break;
    }
    case 333200:
    {
        returnValue = F("Wertholzlager");
        break;
    }
    case 333201:
    {
        returnValue = F("Wertholzlagerplatz");
        break;
    }
    case 333202:
    {
        returnValue = F("Wertholzplatz");
        break;
    }
    case 333203:
    {
        returnValue = F("Werthovener Str.");
        break;
    }
    case 333204:
    {
        returnValue = F("Werthsiefen");
        break;
    }
    case 333205:
    {
        returnValue = F("Werthstr.");
        break;
    }
    case 333206:
    {
        returnValue = F("Werthweg");
        break;
    }
    case 333207:
    {
        returnValue = F("Wertinger Str.");
        break;
    }
    case 333208:
    {
        returnValue = F("Wertinger Weg");
        break;
    }
    case 333209:
    {
        returnValue = F("Wertingerstr.");
        break;
    }
    case 333210:
    {
        returnValue = F("Wertlauer Weg");
        break;
    }
    case 333211:
    {
        returnValue = F("Wertsbach");
        break;
    }
    case 333212:
    {
        returnValue = F("Wertshäuser Str.");
        break;
    }
    case 333213:
    {
        returnValue = F("Wertshäuser Weg");
        break;
    }
    case 333214:
    {
        returnValue = F("Wertstr.");
        break;
    }
    case 333215:
    {
        returnValue = F("Wertweg");
        break;
    }
    case 333216:
    {
        returnValue = F("Wertweinstr.");
        break;
    }
    case 333217:
    {
        returnValue = F("Wertwiesen");
        break;
    }
    case 333218:
    {
        returnValue = F("Wertwiesenpark");
        break;
    }
    case 333219:
    {
        returnValue = F("Wertäcker");
        break;
    }
    case 333220:
    {
        returnValue = F("Werver Mark");
        break;
    }
    case 333221:
    {
        returnValue = F("Werver Platz");
        break;
    }
    case 333222:
    {
        returnValue = F("Wervershoofer Str.");
        break;
    }
    case 333223:
    {
        returnValue = F("Wervicq Platz");
        break;
    }
    case 333224:
    {
        returnValue = F("Werwer Weg");
        break;
    }
    case 333225:
    {
        returnValue = F("Werwolf");
        break;
    }
    case 333226:
    {
        returnValue = F("Werwolfsweg");
        break;
    }
    case 333227:
    {
        returnValue = F("Werxhäuser Str.");
        break;
    }
    case 333228:
    {
        returnValue = F("Weryweg");
        break;
    }
    case 333229:
    {
        returnValue = F("Wesbach");
        break;
    }
    case 333230:
    {
        returnValue = F("Wesbachring");
        break;
    }
    case 333231:
    {
        returnValue = F("Wesbachstr.");
        break;
    }
    case 333232:
    {
        returnValue = F("Weschbach");
        break;
    }
    case 333233:
    {
        returnValue = F("Weschbachstr.");
        break;
    }
    case 333234:
    {
        returnValue = F("Weschbugglplatz");
        break;
    }
    case 333235:
    {
        returnValue = F("Wescheder Weg");
        break;
    }
    case 333236:
    {
        returnValue = F("Weschental");
        break;
    }
    case 333237:
    {
        returnValue = F("Wescherheckerweg");
        break;
    }
    case 333238:
    {
        returnValue = F("Wescherweg");
        break;
    }
    case 333239:
    {
        returnValue = F("Weschnitzacker");
        break;
    }
    case 333240:
    {
        returnValue = F("Weschnitzer Str.");
        break;
    }
    case 333241:
    {
        returnValue = F("Weschnitzmühle");
        break;
    }
    case 333242:
    {
        returnValue = F("Weschnitzquellenweg");
        break;
    }
    case 333243:
    {
        returnValue = F("Weschnitzstr.");
        break;
    }
    case 333244:
    {
        returnValue = F("Weschnitzweg");
        break;
    }
    case 333245:
    {
        returnValue = F("Weschnitzäcker");
        break;
    }
    case 333246:
    {
        returnValue = F("Wesebachstr.");
        break;
    }
    case 333247:
    {
        returnValue = F("Wesebyer Weg");
        break;
    }
    case 333248:
    {
        returnValue = F("Wesebykjer");
        break;
    }
    case 333249:
    {
        returnValue = F("Wesehof");
        break;
    }
    case 333250:
    {
        returnValue = F("Weseker Landweg");
        break;
    }
    case 333251:
    {
        returnValue = F("Weseker Str.");
        break;
    }
    case 333252:
    {
        returnValue = F("Weseker Weg");
        break;
    }
    case 333253:
    {
        returnValue = F("Weselbergstr.");
        break;
    }
    case 333254:
    {
        returnValue = F("Weseler Dorfstr.");
        break;
    }
    case 333255:
    {
        returnValue = F("Weseler Heide");
        break;
    }
    case 333256:
    {
        returnValue = F("Weseler Landstr.");
        break;
    }
    case 333257:
    {
        returnValue = F("Weseler Landweg");
        break;
    }
    case 333258:
    {
        returnValue = F("Weseler Str.");
        break;
    }
    case 333259:
    {
        returnValue = F("Weseler Weg");
        break;
    }
    case 333260:
    {
        returnValue = F("Weselitz");
        break;
    }
    case 333261:
    {
        returnValue = F("Weseloher Eichen");
        break;
    }
    case 333262:
    {
        returnValue = F("Weseloher Str.");
        break;
    }
    case 333263:
    {
        returnValue = F("Weselsdorfer Str.");
        break;
    }
    case 333264:
    {
        returnValue = F("Weselshofstr.");
        break;
    }
    case 333265:
    {
        returnValue = F("Weselweg");
        break;
    }
    case 333266:
    {
        returnValue = F("Wesemannstr.");
        break;
    }
    case 333267:
    {
        returnValue = F("Wesemühle");
        break;
    }
    case 333268:
    {
        returnValue = F("Wesenberg Ringweg");
        break;
    }
    case 333269:
    {
        returnValue = F("Wesenberger Chaussee");
        break;
    }
    case 333270:
    {
        returnValue = F("Wesenberger Str.");
        break;
    }
    case 333271:
    {
        returnValue = F("Wesenberger Weg");
        break;
    }
    case 333272:
    {
        returnValue = F("Wesendahler Chaussee");
        break;
    }
    case 333273:
    {
        returnValue = F("Wesendahler Str.");
        break;
    }
    case 333274:
    {
        returnValue = F("Wesendonkshof");
        break;
    }
    case 333275:
    {
        returnValue = F("Wesendonkstr.");
        break;
    }
    case 333276:
    {
        returnValue = F("Wesendorfer Str.");
        break;
    }
    case 333277:
    {
        returnValue = F("Wesendorfer Weg");
        break;
    }
    case 333278:
    {
        returnValue = F("Wesenitzer Weg");
        break;
    }
    case 333279:
    {
        returnValue = F("Wesenitzleite");
        break;
    }
    case 333280:
    {
        returnValue = F("Wesenitzstr.");
        break;
    }
    case 333281:
    {
        returnValue = F("Wesenitztalstr.");
        break;
    }
    case 333282:
    {
        returnValue = F("Wesenitztalweg");
        break;
    }
    case 333283:
    {
        returnValue = F("Wesenitzweg");
        break;
    }
    case 333284:
    {
        returnValue = F("Wesenrodesiedlung");
        break;
    }
    case 333285:
    {
        returnValue = F("Wesenstedt");
        break;
    }
    case 333286:
    {
        returnValue = F("Wesenweg");
        break;
    }
    case 333287:
    {
        returnValue = F("Weseramer Str.");
        break;
    }
    case 333288:
    {
        returnValue = F("Weseramer Weg");
        break;
    }
    case 333289:
    {
        returnValue = F("Weseraue");
        break;
    }
    case 333290:
    {
        returnValue = F("Weserberghausweg");
        break;
    }
    case 333291:
    {
        returnValue = F("Weserbergland Wanderweg");
        break;
    }
    case 333292:
    {
        returnValue = F("Weserberglandsee");
        break;
    }
    case 333293:
    {
        returnValue = F("Weserberglandstr.");
        break;
    }
    case 333294:
    {
        returnValue = F("Weserberland Wanderweg");
        break;
    }
    case 333295:
    {
        returnValue = F("Weserblick");
        break;
    }
    case 333296:
    {
        returnValue = F("Weserbrücke");
        break;
    }
    case 333297:
    {
        returnValue = F("Weserbrücke Porta Westfalica");
        break;
    }
    case 333298:
    {
        returnValue = F("Weserdüne");
        break;
    }
    case 333299:
    {
        returnValue = F("Wesereschstr.");
        break;
    }
    case 333300:
    {
        returnValue = F("Weserfahrt");
        break;
    }
    case 333301:
    {
        returnValue = F("Wesergarten");
        break;
    }
    case 333302:
    {
        returnValue = F("Wesergasse");
        break;
    }
    case 333303:
    {
        returnValue = F("Weserglacis");
        break;
    }
    case 333304:
    {
        returnValue = F("Weserhangweg");
        break;
    }
    case 333305:
    {
        returnValue = F("Weserhof");
        break;
    }
    case 333306:
    {
        returnValue = F("Weserhöhe");
        break;
    }
    case 333307:
    {
        returnValue = F("Weseritzer Str.");
        break;
    }
    case 333308:
    {
        returnValue = F("Weserkai");
        break;
    }
    case 333309:
    {
        returnValue = F("Wesermarschdamm");
        break;
    }
    case 333310:
    {
        returnValue = F("Wesermünder Str.");
        break;
    }
    case 333311:
    {
        returnValue = F("Wesermünder Weg");
        break;
    }
    case 333312:
    {
        returnValue = F("Weserpfad");
        break;
    }
    case 333313:
    {
        returnValue = F("Weserplatz");
        break;
    }
    case 333314:
    {
        returnValue = F("Weserpromenade");
        break;
    }
    case 333315:
    {
        returnValue = F("Weserradweg");
        break;
    }
    case 333316:
    {
        returnValue = F("Weserring");
        break;
    }
    case 333317:
    {
        returnValue = F("Weserstr.");
        break;
    }
    case 333318:
    {
        returnValue = F("Wesertalweg");
        break;
    }
    case 333319:
    {
        returnValue = F("Weserufer");
        break;
    }
    case 333320:
    {
        returnValue = F("Weserweg");
        break;
    }
    case 333321:
    {
        returnValue = F("Weserwiese");
        break;
    }
    case 333322:
    {
        returnValue = F("Wesetalstr.");
        break;
    }
    case 333323:
    {
        returnValue = F("Wesfladen");
        break;
    }
    case 333324:
    {
        returnValue = F("Wesheimstr.");
        break;
    }
    case 333325:
    {
        returnValue = F("Weshorn");
        break;
    }
    case 333326:
    {
        returnValue = F("Weskampstr.");
        break;
    }
    case 333327:
    {
        returnValue = F("Wesker");
        break;
    }
    case 333328:
    {
        returnValue = F("Weskerhok");
        break;
    }
    case 333329:
    {
        returnValue = F("Weskower Allee");
        break;
    }
    case 333330:
    {
        returnValue = F("Weskower Platz");
        break;
    }
    case 333331:
    {
        returnValue = F("Weskower Str.");
        break;
    }
    case 333332:
    {
        returnValue = F("Weslarner Str.");
        break;
    }
    case 333333:
    {
        returnValue = F("Weslarner Weg");
        break;
    }
    case 333334:
    {
        returnValue = F("Wesleystr.");
        break;
    }
    case 333335:
    {
        returnValue = F("Wesling");
        break;
    }
    case 333336:
    {
        returnValue = F("Wesmarstr.");
        break;
    }
    case 333337:
    {
        returnValue = F("Wesmecke");
        break;
    }
    case 333338:
    {
        returnValue = F("Wesmeckestr.");
        break;
    }
    case 333339:
    {
        returnValue = F("Wesostr.");
        break;
    }
    case 333340:
    {
        returnValue = F("Wespachweg");
        break;
    }
    case 333341:
    {
        returnValue = F("Wespelweg");
        break;
    }
    case 333342:
    {
        returnValue = F("Wespenpfad");
        break;
    }
    case 333343:
    {
        returnValue = F("Wespensteig");
        break;
    }
    case 333344:
    {
        returnValue = F("Wespenstr.");
        break;
    }
    case 333345:
    {
        returnValue = F("Wespenweg");
        break;
    }
    case 333346:
    {
        returnValue = F("Wesphaldenweg");
        break;
    }
    case 333347:
    {
        returnValue = F("Wespienstr.");
        break;
    }
    case 333348:
    {
        returnValue = F("Wessel-Onken-Weg");
        break;
    }
    case 333349:
    {
        returnValue = F("Wesselberg");
        break;
    }
    case 333350:
    {
        returnValue = F("Wesselbergstr.");
        break;
    }
    case 333351:
    {
        returnValue = F("Wesselburener Str.");
        break;
    }
    case 333352:
    {
        returnValue = F("Wesselei");
        break;
    }
    case 333353:
    {
        returnValue = F("Wesseler Riege");
        break;
    }
    case 333354:
    {
        returnValue = F("Wesseler Str.");
        break;
    }
    case 333355:
    {
        returnValue = F("Wesselhorn");
        break;
    }
    case 333356:
    {
        returnValue = F("Wesselinger Str.");
        break;
    }
    case 333357:
    {
        returnValue = F("Wesselinger Weg");
        break;
    }
    case 333358:
    {
        returnValue = F("Wesselingstr.");
        break;
    }
    case 333359:
    {
        returnValue = F("Wesselkampstr.");
        break;
    }
    case 333360:
    {
        returnValue = F("Wesselner Nordhangweg");
        break;
    }
    case 333361:
    {
        returnValue = F("Wesseloher Str.");
        break;
    }
    case 333362:
    {
        returnValue = F("Wessels Str.");
        break;
    }
    case 333363:
    {
        returnValue = F("Wessels Weg");
        break;
    }
    case 333364:
    {
        returnValue = F("Wesselsreith");
        break;
    }
    case 333365:
    {
        returnValue = F("Wesselsteinbach");
        break;
    }
    case 333366:
    {
        returnValue = F("Wesselstorf");
        break;
    }
    case 333367:
    {
        returnValue = F("Wesselstr.");
        break;
    }
    case 333368:
    {
        returnValue = F("Wesselweg");
        break;
    }
    case 333369:
    {
        returnValue = F("Wessemer Str.");
        break;
    }
    case 333370:
    {
        returnValue = F("Wessenbergstr.");
        break;
    }
    case 333371:
    {
        returnValue = F("Wessendorfer Str.");
        break;
    }
    case 333372:
    {
        returnValue = F("Wessendorfstr.");
        break;
    }
    case 333373:
    {
        returnValue = F("Wessenhorst");
        break;
    }
    case 333374:
    {
        returnValue = F("Wessenstedt");
        break;
    }
    case 333375:
    {
        returnValue = F("Wessenstedter Str.");
        break;
    }
    case 333376:
    {
        returnValue = F("Wessentin Ausbau");
        break;
    }
    case 333377:
    {
        returnValue = F("Wesserstr.");
        break;
    }
    case 333378:
    {
        returnValue = F("Wessex Close");
        break;
    }
    case 333379:
    {
        returnValue = F("Wessiner Weg");
        break;
    }
    case 333380:
    {
        returnValue = F("Wessingerweg");
        break;
    }
    case 333381:
    {
        returnValue = F("Wessingkamp");
        break;
    }
    case 333382:
    {
        returnValue = F("Wessingstr.");
        break;
    }
    case 333383:
    {
        returnValue = F("Wessingweg");
        break;
    }
    case 333384:
    {
        returnValue = F("Wessiszeller Str.");
        break;
    }
    case 333385:
    {
        returnValue = F("Wessobrunner Str.");
        break;
    }
    case 333386:
    {
        returnValue = F("Wessobrunner-Ring");
        break;
    }
    case 333387:
    {
        returnValue = F("Wessobrunnerweg");
        break;
    }
    case 333388:
    {
        returnValue = F("Wessumer Str.");
        break;
    }
    case 333389:
    {
        returnValue = F("West");
        break;
    }
    case 333390:
    {
        returnValue = F("West Devon Str.");
        break;
    }
    case 333391:
    {
        returnValue = F("West I");
        break;
    }
    case 333392:
    {
        returnValue = F("West-Contrescarpe");
        break;
    }
    case 333393:
    {
        returnValue = F("West-Lindsey-Str.");
        break;
    }
    case 333394:
    {
        returnValue = F("West. Hornbergweg");
        break;
    }
    case 333395:
    {
        returnValue = F("West. Karlstr.");
        break;
    }
    case 333396:
    {
        returnValue = F("Westaap");
        break;
    }
    case 333397:
    {
        returnValue = F("Westacker");
        break;
    }
    case 333398:
    {
        returnValue = F("Westallee");
        break;
    }
    case 333399:
    {
        returnValue = F("Westanger");
        break;
    }
    case 333400:
    {
        returnValue = F("Westanlage");
        break;
    }
    case 333401:
    {
        returnValue = F("Westbahnhofstr.");
        break;
    }
    case 333402:
    {
        returnValue = F("Westbahnstr.");
        break;
    }
    case 333403:
    {
        returnValue = F("Westbarthauser Str.");
        break;
    }
    case 333404:
    {
        returnValue = F("Westbeeke");
        break;
    }
    case 333405:
    {
        returnValue = F("Westbense");
        break;
    }
    case 333406:
    {
        returnValue = F("Westbergblick");
        break;
    }
    case 333407:
    {
        returnValue = F("Westberghöfen");
        break;
    }
    case 333408:
    {
        returnValue = F("Westbergpark");
        break;
    }
    case 333409:
    {
        returnValue = F("Westbergstr.");
        break;
    }
    case 333410:
    {
        returnValue = F("Westbergsweg");
        break;
    }
    case 333411:
    {
        returnValue = F("Westbergweg");
        break;
    }
    case 333412:
    {
        returnValue = F("Westbeverner Str.");
        break;
    }
    case 333413:
    {
        returnValue = F("Westblick");
        break;
    }
    case 333414:
    {
        returnValue = F("Westblickstr.");
        break;
    }
    case 333415:
    {
        returnValue = F("Westbogen");
        break;
    }
    case 333416:
    {
        returnValue = F("Westbrookweg");
        break;
    }
    case 333417:
    {
        returnValue = F("Westbrücke");
        break;
    }
    case 333418:
    {
        returnValue = F("Westcellertorstr.");
        break;
    }
    case 333419:
    {
        returnValue = F("Westcharweg");
        break;
    }
    case 333420:
    {
        returnValue = F("Westdamm");
        break;
    }
    case 333421:
    {
        returnValue = F("Westdamm Eckartsweier");
        break;
    }
    case 333422:
    {
        returnValue = F("Westdorf");
        break;
    }
    case 333423:
    {
        returnValue = F("Westdorfer Str.");
        break;
    }
    case 333424:
    {
        returnValue = F("Westdorfer Süderweg");
        break;
    }
    case 333425:
    {
        returnValue = F("Westebbe");
        break;
    }
    case 333426:
    {
        returnValue = F("Westeck");
        break;
    }
    case 333427:
    {
        returnValue = F("Westeeler Weg");
        break;
    }
    case 333428:
    {
        returnValue = F("Westekelbur");
        break;
    }
    case 333429:
    {
        returnValue = F("Westelreinweg");
        break;
    }
    case 333430:
    {
        returnValue = F("Westelschlüchte");
        break;
    }
    case 333431:
    {
        returnValue = F("Westen");
        break;
    }
    case 333432:
    {
        returnValue = F("Westen de Kark");
        break;
    }
    case 333433:
    {
        returnValue = F("Westenbachhof");
        break;
    }
    case 333434:
    {
        returnValue = F("Westenberg");
        break;
    }
    case 333435:
    {
        returnValue = F("Westenberger Str.");
        break;
    }
    case 333436:
    {
        returnValue = F("Westenbergstr.");
        break;
    }
    case 333437:
    {
        returnValue = F("Westenborkener Str.");
        break;
    }
    case 333438:
    {
        returnValue = F("Westenborn");
        break;
    }
    case 333439:
    {
        returnValue = F("Westenbrücke");
        break;
    }
    case 333440:
    {
        returnValue = F("Westend");
        break;
    }
    case 333441:
    {
        returnValue = F("Westendamm");
        break;
    }
    case 333442:
    {
        returnValue = F("Westende");
        break;
    }
    case 333443:
    {
        returnValue = F("Westender Str.");
        break;
    }
    case 333444:
    {
        returnValue = F("Westender Weg");
        break;
    }
    case 333445:
    {
        returnValue = F("Westendorf");
        break;
    }
    case 333446:
    {
        returnValue = F("Westendorfer Str.");
        break;
    }
    case 333447:
    {
        returnValue = F("Westendorfer Weg");
        break;
    }
    case 333448:
    {
        returnValue = F("Westendorferstr.");
        break;
    }
    case 333449:
    {
        returnValue = F("Westendorfstr.");
        break;
    }
    case 333450:
    {
        returnValue = F("Westendorfweg");
        break;
    }
    case 333451:
    {
        returnValue = F("Westendpark");
        break;
    }
    case 333452:
    {
        returnValue = F("Westendplatz");
        break;
    }
    case 333453:
    {
        returnValue = F("Westendstr.");
        break;
    }
    case 333454:
    {
        returnValue = F("Westendweg");
        break;
    }
    case 333455:
    {
        returnValue = F("Westendörp");
        break;
    }
    case 333456:
    {
        returnValue = F("Westenfeld");
        break;
    }
    case 333457:
    {
        returnValue = F("Westenfelder Dorfstr.");
        break;
    }
    case 333458:
    {
        returnValue = F("Westenfelder Str.");
        break;
    }
    case 333459:
    {
        returnValue = F("Westenfelderstr.");
        break;
    }
    case 333460:
    {
        returnValue = F("Westenfeldmark");
        break;
    }
    case 333461:
    {
        returnValue = F("Westenfeldstr.");
        break;
    }
    case 333462:
    {
        returnValue = F("Westenfeldweg");
        break;
    }
    case 333463:
    {
        returnValue = F("Westenhellweg");
        break;
    }
    case 333464:
    {
        returnValue = F("Westenhoffweg");
        break;
    }
    case 333465:
    {
        returnValue = F("Westenhofstr.");
        break;
    }
    case 333466:
    {
        returnValue = F("Westenholz");
        break;
    }
    case 333467:
    {
        returnValue = F("Westenholzer Str.");
        break;
    }
    case 333468:
    {
        returnValue = F("Westenholzweg");
        break;
    }
    case 333469:
    {
        returnValue = F("Westenkamp");
        break;
    }
    case 333470:
    {
        returnValue = F("Westenmauer");
        break;
    }
    case 333471:
    {
        returnValue = F("Westenort");
        break;
    }
    case 333472:
    {
        returnValue = F("Westenschulweg");
        break;
    }
    case 333473:
    {
        returnValue = F("Westenstr.");
        break;
    }
    case 333474:
    {
        returnValue = F("Westental");
        break;
    }
    case 333475:
    {
        returnValue = F("Westentlastungsstr.");
        break;
    }
    case 333476:
    {
        returnValue = F("Westentor");
        break;
    }
    case 333477:
    {
        returnValue = F("Westenwandweg");
        break;
    }
    case 333478:
    {
        returnValue = F("Westenweg");
        break;
    }
    case 333479:
    {
        returnValue = F("Westenzäune");
        break;
    }
    case 333480:
    {
        returnValue = F("Westenäckerstr.");
        break;
    }
    case 333481:
    {
        returnValue = F("Wester");
        break;
    }
    case 333482:
    {
        returnValue = F("Wester Borgweg");
        break;
    }
    case 333483:
    {
        returnValue = F("Wester Esch");
        break;
    }
    case 333484:
    {
        returnValue = F("Wester Riege");
        break;
    }
    case 333485:
    {
        returnValue = F("Wester Rott");
        break;
    }
    case 333486:
    {
        returnValue = F("Wester Staatsweg");
        break;
    }
    case 333487:
    {
        returnValue = F("Wester Wischer");
        break;
    }
    case 333488:
    {
        returnValue = F("Wester-Anlage");
        break;
    }
    case 333489:
    {
        returnValue = F("Wester-Liederweg");
        break;
    }
    case 333490:
    {
        returnValue = F("Wester-Mardorf");
        break;
    }
    case 333491:
    {
        returnValue = F("Wester-Walter-Weg");
        break;
    }
    case 333492:
    {
        returnValue = F("Westeracker");
        break;
    }
    case 333493:
    {
        returnValue = F("Westerallee");
        break;
    }
    case 333494:
    {
        returnValue = F("Westeranger");
        break;
    }
    case 333495:
    {
        returnValue = F("Westerauer Str.");
        break;
    }
    case 333496:
    {
        returnValue = F("Westerbach");
        break;
    }
    case 333497:
    {
        returnValue = F("Westerbacher Weg");
        break;
    }
    case 333498:
    {
        returnValue = F("Westerbachstr.");
        break;
    }
    case 333499:
    {
        returnValue = F("Westerbakumer Str.");
        break;
    }
    case 333500:
    {
        returnValue = F("Westerbalje");
        break;
    }
    case 333501:
    {
        returnValue = F("Westerbarg");
        break;
    }
    case 333502:
    {
        returnValue = F("Westerbauer");
        break;
    }
    case 333503:
    {
        returnValue = F("Westerbeck");
        break;
    }
    case 333504:
    {
        returnValue = F("Westerbecker Damm");
        break;
    }
    case 333505:
    {
        returnValue = F("Westerbecker Str.");
        break;
    }
    case 333506:
    {
        returnValue = F("Westerbecker Weg");
        break;
    }
    case 333507:
    {
        returnValue = F("Westerbeek");
        break;
    }
    case 333508:
    {
        returnValue = F("Westerbeeke");
        break;
    }
    case 333509:
    {
        returnValue = F("Westerbelmhusener Str.");
        break;
    }
    case 333510:
    {
        returnValue = F("Westerberg");
        break;
    }
    case 333511:
    {
        returnValue = F("Westerberg Weg");
        break;
    }
    case 333512:
    {
        returnValue = F("Westerbergen-Feriensiedlung");
        break;
    }
    case 333513:
    {
        returnValue = F("Westerberger Weg");
        break;
    }
    case 333514:
    {
        returnValue = F("Westerbergfeldweg");
        break;
    }
    case 333515:
    {
        returnValue = F("Westerbergstr.");
        break;
    }
    case 333516:
    {
        returnValue = F("Westerbergweg");
        break;
    }
    case 333517:
    {
        returnValue = F("Westerbeverstedter Str.");
        break;
    }
    case 333518:
    {
        returnValue = F("Westerblöcken");
        break;
    }
    case 333519:
    {
        returnValue = F("Westerbollhaus");
        break;
    }
    case 333520:
    {
        returnValue = F("Westerborn");
        break;
    }
    case 333521:
    {
        returnValue = F("Westerborstelstr.");
        break;
    }
    case 333522:
    {
        returnValue = F("Westerbrak");
        break;
    }
    case 333523:
    {
        returnValue = F("Westerbraker Str.");
        break;
    }
    case 333524:
    {
        returnValue = F("Westerbrander Weg");
        break;
    }
    case 333525:
    {
        returnValue = F("Westerbreite");
        break;
    }
    case 333526:
    {
        returnValue = F("Westerbrink");
        break;
    }
    case 333527:
    {
        returnValue = F("Westerbrook");
        break;
    }
    case 333528:
    {
        returnValue = F("Westerbruchsheide");
        break;
    }
    case 333529:
    {
        returnValue = F("Westerbruchstr.");
        break;
    }
    case 333530:
    {
        returnValue = F("Westerbruchweg");
        break;
    }
    case 333531:
    {
        returnValue = F("Westerbuchberg");
        break;
    }
    case 333532:
    {
        returnValue = F("Westerburg");
        break;
    }
    case 333533:
    {
        returnValue = F("Westerburger Str.");
        break;
    }
    case 333534:
    {
        returnValue = F("Westerburger Weg");
        break;
    }
    case 333535:
    {
        returnValue = F("Westerburgerstr.");
        break;
    }
    case 333536:
    {
        returnValue = F("Westerburgstr.");
        break;
    }
    case 333537:
    {
        returnValue = F("Westerbutvenne");
        break;
    }
    case 333538:
    {
        returnValue = F("Westerböhmen");
        break;
    }
    case 333539:
    {
        returnValue = F("Westerbühlweg");
        break;
    }
    case 333540:
    {
        returnValue = F("Westerbührener Str.");
        break;
    }
    case 333541:
    {
        returnValue = F("Westerbütteler Str.");
        break;
    }
    case 333542:
    {
        returnValue = F("Westerceller Str.");
        break;
    }
    case 333543:
    {
        returnValue = F("Westerdamm");
        break;
    }
    case 333544:
    {
        returnValue = F("Westerdeich");
        break;
    }
    case 333545:
    {
        returnValue = F("Westerdeicher Str.");
        break;
    }
    case 333546:
    {
        returnValue = F("Westerdiek");
        break;
    }
    case 333547:
    {
        returnValue = F("Westerdieker Strot");
        break;
    }
    case 333548:
    {
        returnValue = F("Westerdor");
        break;
    }
    case 333549:
    {
        returnValue = F("Westerdorf");
        break;
    }
    case 333550:
    {
        returnValue = F("Westereck");
        break;
    }
    case 333551:
    {
        returnValue = F("Westereeschweg");
        break;
    }
    case 333552:
    {
        returnValue = F("Westereidener Str.");
        break;
    }
    case 333553:
    {
        returnValue = F("Westeremsteker Str.");
        break;
    }
    case 333554:
    {
        returnValue = F("Westerend");
        break;
    }
    case 333555:
    {
        returnValue = F("Westerende");
        break;
    }
    case 333556:
    {
        returnValue = F("Westerender Str.");
        break;
    }
    case 333557:
    {
        returnValue = F("Westerender Weg");
        break;
    }
    case 333558:
    {
        returnValue = F("Westerenderweg");
        break;
    }
    case 333559:
    {
        returnValue = F("Westerendstr.");
        break;
    }
    case 333560:
    {
        returnValue = F("Westerengerstr.");
        break;
    }
    case 333561:
    {
        returnValue = F("Westerengler Hauptstr.");
        break;
    }
    case 333562:
    {
        returnValue = F("Westerenn");
        break;
    }
    case 333563:
    {
        returnValue = F("Westerer Weg");
        break;
    }
    case 333564:
    {
        returnValue = F("Westeresch");
        break;
    }
    case 333565:
    {
        returnValue = F("Westereschenfeld");
        break;
    }
    case 333566:
    {
        returnValue = F("Westerescher Str.");
        break;
    }
    case 333567:
    {
        returnValue = F("Westerescher Weg");
        break;
    }
    case 333568:
    {
        returnValue = F("Westereschweg");
        break;
    }
    case 333569:
    {
        returnValue = F("Westeresker Weg");
        break;
    }
    case 333570:
    {
        returnValue = F("Westerfeld");
        break;
    }
    case 333571:
    {
        returnValue = F("Westerfelde");
        break;
    }
    case 333572:
    {
        returnValue = F("Westerfelder Ring");
        break;
    }
    case 333573:
    {
        returnValue = F("Westerfelder Str.");
        break;
    }
    case 333574:
    {
        returnValue = F("Westerfelder Weg");
        break;
    }
    case 333575:
    {
        returnValue = F("Westerfeldstr.");
        break;
    }
    case 333576:
    {
        returnValue = F("Westerfeldweg");
        break;
    }
    case 333577:
    {
        returnValue = F("Westerfelln");
        break;
    }
    case 333578:
    {
        returnValue = F("Westerfenne");
        break;
    }
    case 333579:
    {
        returnValue = F("Westerfennenweg");
        break;
    }
    case 333580:
    {
        returnValue = F("Westerfilder Str.");
        break;
    }
    case 333581:
    {
        returnValue = F("Westergang");
        break;
    }
    case 333582:
    {
        returnValue = F("Westergarms");
        break;
    }
    case 333583:
    {
        returnValue = F("Westergarmser Weg");
        break;
    }
    case 333584:
    {
        returnValue = F("Westergarten");
        break;
    }
    case 333585:
    {
        returnValue = F("Westergasse");
        break;
    }
    case 333586:
    {
        returnValue = F("Westergast");
        break;
    }
    case 333587:
    {
        returnValue = F("Westergaste");
        break;
    }
    case 333588:
    {
        returnValue = F("Westergastweg");
        break;
    }
    case 333589:
    {
        returnValue = F("Westergellerser Heide");
        break;
    }
    case 333590:
    {
        returnValue = F("Westergellerser Str.");
        break;
    }
    case 333591:
    {
        returnValue = F("Westergellerser Weg");
        break;
    }
    case 333592:
    {
        returnValue = F("Westergraben");
        break;
    }
    case 333593:
    {
        returnValue = F("Westergrund");
        break;
    }
    case 333594:
    {
        returnValue = F("Westerhafenstr.");
        break;
    }
    case 333595:
    {
        returnValue = F("Westerhagen");
        break;
    }
    case 333596:
    {
        returnValue = F("Westerhaldenstr.");
        break;
    }
    case 333597:
    {
        returnValue = F("Westerhallermaschweg");
        break;
    }
    case 333598:
    {
        returnValue = F("Westerhalligweg");
        break;
    }
    case 333599:
    {
        returnValue = F("Westerham");
        break;
    }
    case 333600:
    {
        returnValue = F("Westerhamer Str.");
        break;
    }
    case 333601:
    {
        returnValue = F("Westerhamer Weg");
        break;
    }
    case 333602:
    {
        returnValue = F("Westerhamm");
        break;
    }
    case 333603:
    {
        returnValue = F("Westerhammer");
        break;
    }
    case 333604:
    {
        returnValue = F("Westerhang");
        break;
    }
    case 333605:
    {
        returnValue = F("Westerharler Str.");
        break;
    }
    case 333606:
    {
        returnValue = F("Westerharler Weg");
        break;
    }
    case 333607:
    {
        returnValue = F("Westerhausener Berg");
        break;
    }
    case 333608:
    {
        returnValue = F("Westerhausener Str.");
        break;
    }
    case 333609:
    {
        returnValue = F("Westerhauser Str.");
        break;
    }
    case 333610:
    {
        returnValue = F("Westerhausstr.");
        break;
    }
    case 333611:
    {
        returnValue = F("Westerheckweg");
        break;
    }
    case 333612:
    {
        returnValue = F("Westerheese");
        break;
    }
    case 333613:
    {
        returnValue = F("Westerheide");
        break;
    }
    case 333614:
    {
        returnValue = F("Westerheideweg");
        break;
    }
    case 333615:
    {
        returnValue = F("Westerheimer Str.");
        break;
    }
    case 333616:
    {
        returnValue = F("Westerheimer Weg");
        break;
    }
    case 333617:
    {
        returnValue = F("Westerhellmer Weg");
        break;
    }
    case 333618:
    {
        returnValue = F("Westerheverstr.");
        break;
    }
    case 333619:
    {
        returnValue = F("Westerhiege");
        break;
    }
    case 333620:
    {
        returnValue = F("Westerhof");
        break;
    }
    case 333621:
    {
        returnValue = F("Westerhofen");
        break;
    }
    case 333622:
    {
        returnValue = F("Westerhofer Str.");
        break;
    }
    case 333623:
    {
        returnValue = F("Westerhoferweg");
        break;
    }
    case 333624:
    {
        returnValue = F("Westerhoffweg");
        break;
    }
    case 333625:
    {
        returnValue = F("Westerhofstr.");
        break;
    }
    case 333626:
    {
        returnValue = F("Westerhofweg");
        break;
    }
    case 333627:
    {
        returnValue = F("Westerholmer Str.");
        break;
    }
    case 333628:
    {
        returnValue = F("Westerholmfeld");
        break;
    }
    case 333629:
    {
        returnValue = F("Westerholt");
        break;
    }
    case 333630:
    {
        returnValue = F("Westerholte");
        break;
    }
    case 333631:
    {
        returnValue = F("Westerholten");
        break;
    }
    case 333632:
    {
        returnValue = F("Westerholter Grenzweg");
        break;
    }
    case 333633:
    {
        returnValue = F("Westerholter Str.");
        break;
    }
    case 333634:
    {
        returnValue = F("Westerholter Weg");
        break;
    }
    case 333635:
    {
        returnValue = F("Westerholtkamp");
        break;
    }
    case 333636:
    {
        returnValue = F("Westerholtreede");
        break;
    }
    case 333637:
    {
        returnValue = F("Westerholtsfelder Str.");
        break;
    }
    case 333638:
    {
        returnValue = F("Westerholtstr.");
        break;
    }
    case 333639:
    {
        returnValue = F("Westerholtsweg");
        break;
    }
    case 333640:
    {
        returnValue = F("Westerholtweg");
        break;
    }
    case 333641:
    {
        returnValue = F("Westerholz");
        break;
    }
    case 333642:
    {
        returnValue = F("Westerholzer Dorfstr.");
        break;
    }
    case 333643:
    {
        returnValue = F("Westerholzer Str.");
        break;
    }
    case 333644:
    {
        returnValue = F("Westerholzer Weg");
        break;
    }
    case 333645:
    {
        returnValue = F("Westerholzhausen");
        break;
    }
    case 333646:
    {
        returnValue = F("Westerholzstr.");
        break;
    }
    case 333647:
    {
        returnValue = F("Westerholzweg");
        break;
    }
    case 333648:
    {
        returnValue = F("Westerhook");
        break;
    }
    case 333649:
    {
        returnValue = F("Westerhop");
        break;
    }
    case 333650:
    {
        returnValue = F("Westerhorn");
        break;
    }
    case 333651:
    {
        returnValue = F("Westerhouk Eisten");
        break;
    }
    case 333652:
    {
        returnValue = F("Westerhudestr.");
        break;
    }
    case 333653:
    {
        returnValue = F("Westerhuesweg");
        break;
    }
    case 333654:
    {
        returnValue = F("Westerhusen");
        break;
    }
    case 333655:
    {
        returnValue = F("Westerhäuser Gartenstr.");
        break;
    }
    case 333656:
    {
        returnValue = F("Westerhäuser Landstr.");
        break;
    }
    case 333657:
    {
        returnValue = F("Westerhäuser Str.");
        break;
    }
    case 333658:
    {
        returnValue = F("Westerhöfer Str.");
        break;
    }
    case 333659:
    {
        returnValue = F("Westerhöhe");
        break;
    }
    case 333660:
    {
        returnValue = F("Westerhörn");
        break;
    }
    case 333661:
    {
        returnValue = F("Westeries");
        break;
    }
    case 333662:
    {
        returnValue = F("Westerjaden");
        break;
    }
    case 333663:
    {
        returnValue = F("Westerjork");
        break;
    }
    case 333664:
    {
        returnValue = F("Westerjähren");
        break;
    }
    case 333665:
    {
        returnValue = F("Westerkamp");
        break;
    }
    case 333666:
    {
        returnValue = F("Westerkampstr.");
        break;
    }
    case 333667:
    {
        returnValue = F("Westerkampsweg");
        break;
    }
    case 333668:
    {
        returnValue = F("Westerkampweg");
        break;
    }
    case 333669:
    {
        returnValue = F("Westerkappelner Str.");
        break;
    }
    case 333670:
    {
        returnValue = F("Westerkjer");
        break;
    }
    case 333671:
    {
        returnValue = F("Westerkoog");
        break;
    }
    case 333672:
    {
        returnValue = F("Westerkoppel");
        break;
    }
    case 333673:
    {
        returnValue = F("Westerkämpe");
        break;
    }
    case 333674:
    {
        returnValue = F("Westerkämper Masch");
        break;
    }
    case 333675:
    {
        returnValue = F("Westerladekop");
        break;
    }
    case 333676:
    {
        returnValue = F("Westerladekoper Minnerweg");
        break;
    }
    case 333677:
    {
        returnValue = F("Westerlandstieg");
        break;
    }
    case 333678:
    {
        returnValue = F("Westerlandstr.");
        break;
    }
    case 333679:
    {
        returnValue = F("Westerlandweg");
        break;
    }
    case 333680:
    {
        returnValue = F("Westerlangstedt");
        break;
    }
    case 333681:
    {
        returnValue = F("Westerleye");
        break;
    }
    case 333682:
    {
        returnValue = F("Westerlilienstr.");
        break;
    }
    case 333683:
    {
        returnValue = F("Westerlinder Kirchweg");
        break;
    }
    case 333684:
    {
        returnValue = F("Westerloer Allee");
        break;
    }
    case 333685:
    {
        returnValue = F("Westerloger Str.");
        break;
    }
    case 333686:
    {
        returnValue = F("Westerloher Str.");
        break;
    }
    case 333687:
    {
        returnValue = F("Westerlohne");
        break;
    }
    case 333688:
    {
        returnValue = F("Westerloog");
        break;
    }
    case 333689:
    {
        returnValue = F("Westerlooger Gaste");
        break;
    }
    case 333690:
    {
        returnValue = F("Westerlooger Str.");
        break;
    }
    case 333691:
    {
        returnValue = F("Westerlooger Unlandsweg");
        break;
    }
    case 333692:
    {
        returnValue = F("Westerloostr.");
        break;
    }
    case 333693:
    {
        returnValue = F("Westerlostr.");
        break;
    }
    case 333694:
    {
        returnValue = F("Westerloyer Str.");
        break;
    }
    case 333695:
    {
        returnValue = F("Westerlund");
        break;
    }
    case 333696:
    {
        returnValue = F("Westerländer Str.");
        break;
    }
    case 333697:
    {
        returnValue = F("Westerlück");
        break;
    }
    case 333698:
    {
        returnValue = F("Westerlücke");
        break;
    }
    case 333699:
    {
        returnValue = F("Westerlücken");
        break;
    }
    case 333700:
    {
        returnValue = F("Westermaad");
        break;
    }
    case 333701:
    {
        returnValue = F("Westermahdweg");
        break;
    }
    case 333702:
    {
        returnValue = F("Westermaierstr.");
        break;
    }
    case 333703:
    {
        returnValue = F("Westermaninger Str.");
        break;
    }
    case 333704:
    {
        returnValue = F("Westermannstr.");
        break;
    }
    case 333705:
    {
        returnValue = F("Westermannsweg");
        break;
    }
    case 333706:
    {
        returnValue = F("Westermark");
        break;
    }
    case 333707:
    {
        returnValue = F("Westermarkelsdorf");
        break;
    }
    case 333708:
    {
        returnValue = F("Westermarkt");
        break;
    }
    case 333709:
    {
        returnValue = F("Westermarktstr.");
        break;
    }
    case 333710:
    {
        returnValue = F("Westermarscher Str.");
        break;
    }
    case 333711:
    {
        returnValue = F("Westermarschweg");
        break;
    }
    case 333712:
    {
        returnValue = F("Westermayerstr.");
        break;
    }
    case 333713:
    {
        returnValue = F("Westermeedlandsweg");
        break;
    }
    case 333714:
    {
        returnValue = F("Westermeerweg");
        break;
    }
    case 333715:
    {
        returnValue = F("Westermeierstr.");
        break;
    }
    case 333716:
    {
        returnValue = F("Westermenghusen");
        break;
    }
    case 333717:
    {
        returnValue = F("Westermeyerstr.");
        break;
    }
    case 333718:
    {
        returnValue = F("Westerminnerweg");
        break;
    }
    case 333719:
    {
        returnValue = F("Westermoor");
        break;
    }
    case 333720:
    {
        returnValue = F("Westermooringer Str.");
        break;
    }
    case 333721:
    {
        returnValue = F("Westermoorstr.");
        break;
    }
    case 333722:
    {
        returnValue = F("Westermoorweg");
        break;
    }
    case 333723:
    {
        returnValue = F("Westermooser Str.");
        break;
    }
    case 333724:
    {
        returnValue = F("Westermoosweg");
        break;
    }
    case 333725:
    {
        returnValue = F("Westermühle");
        break;
    }
    case 333726:
    {
        returnValue = F("Westermühlenweg");
        break;
    }
    case 333727:
    {
        returnValue = F("Westernacher Str.");
        break;
    }
    case 333728:
    {
        returnValue = F("Westernachstr.");
        break;
    }
    case 333729:
    {
        returnValue = F("Westernau");
        break;
    }
    case 333730:
    {
        returnValue = F("Westernbacher Str.");
        break;
    }
    case 333731:
    {
        returnValue = F("Westernbergweg");
        break;
    }
    case 333732:
    {
        returnValue = F("Westernbrink");
        break;
    }
    case 333733:
    {
        returnValue = F("Westernbruchstr.");
        break;
    }
    case 333734:
    {
        returnValue = F("Westerndorf");
        break;
    }
    case 333735:
    {
        returnValue = F("Westerndorfer Str.");
        break;
    }
    case 333736:
    {
        returnValue = F("Westernecke");
        break;
    }
    case 333737:
    {
        returnValue = F("Westernfeld");
        break;
    }
    case 333738:
    {
        returnValue = F("Westernfelder Str.");
        break;
    }
    case 333739:
    {
        returnValue = F("Westernhauser Str.");
        break;
    }
    case 333740:
    {
        returnValue = F("Westernheide");
        break;
    }
    case 333741:
    {
        returnValue = F("Westernholz");
        break;
    }
    case 333742:
    {
        returnValue = F("Westernhäuser Str.");
        break;
    }
    case 333743:
    {
        returnValue = F("Westernkamp");
        break;
    }
    case 333744:
    {
        returnValue = F("Westernkampstr.");
        break;
    }
    case 333745:
    {
        returnValue = F("Westernkötter Str.");
        break;
    }
    case 333746:
    {
        returnValue = F("Westernmauer");
        break;
    }
    case 333747:
    {
        returnValue = F("Westernoher Str.");
        break;
    }
    case 333748:
    {
        returnValue = F("Westernordysweg");
        break;
    }
    case 333749:
    {
        returnValue = F("Westernpatt");
        break;
    }
    case 333750:
    {
        returnValue = F("Westernstr.");
        break;
    }
    case 333751:
    {
        returnValue = F("Westerntor");
        break;
    }
    case 333752:
    {
        returnValue = F("Westerntorstr.");
        break;
    }
    case 333753:
    {
        returnValue = F("Westernweg");
        break;
    }
    case 333754:
    {
        returnValue = F("Westernwiese");
        break;
    }
    case 333755:
    {
        returnValue = F("Westernwiesenweg");
        break;
    }
    case 333756:
    {
        returnValue = F("Westerode");
        break;
    }
    case 333757:
    {
        returnValue = F("Westeroder Str.");
        break;
    }
    case 333758:
    {
        returnValue = F("Westerohe");
        break;
    }
    case 333759:
    {
        returnValue = F("Westerort");
        break;
    }
    case 333760:
    {
        returnValue = F("Westerpad");
        break;
    }
    case 333761:
    {
        returnValue = F("Westerpointweg");
        break;
    }
    case 333762:
    {
        returnValue = F("Westerpoltweg");
        break;
    }
    case 333763:
    {
        returnValue = F("Westerport");
        break;
    }
    case 333764:
    {
        returnValue = F("Westerrade");
        break;
    }
    case 333765:
    {
        returnValue = F("Westerrader Weg");
        break;
    }
    case 333766:
    {
        returnValue = F("Westerreideweg");
        break;
    }
    case 333767:
    {
        returnValue = F("Westerreihe");
        break;
    }
    case 333768:
    {
        returnValue = F("Westerriede");
        break;
    }
    case 333769:
    {
        returnValue = F("Westerriff");
        break;
    }
    case 333770:
    {
        returnValue = F("Westerriß");
        break;
    }
    case 333771:
    {
        returnValue = F("Westerrodener Str.");
        break;
    }
    case 333772:
    {
        returnValue = F("Westersand");
        break;
    }
    case 333773:
    {
        returnValue = F("Westersander Str.");
        break;
    }
    case 333774:
    {
        returnValue = F("Westersbachweg");
        break;
    }
    case 333775:
    {
        returnValue = F("Westersbergham");
        break;
    }
    case 333776:
    {
        returnValue = F("Westersburg");
        break;
    }
    case 333777:
    {
        returnValue = F("Westerschauer Weg");
        break;
    }
    case 333778:
    {
        returnValue = F("Westerschepser Str.");
        break;
    }
    case 333779:
    {
        returnValue = F("Westerschinkeldeich");
        break;
    }
    case 333780:
    {
        returnValue = F("Westerschondorfer Str.");
        break;
    }
    case 333781:
    {
        returnValue = F("Westerschooer Str.");
        break;
    }
    case 333782:
    {
        returnValue = F("Westersee");
        break;
    }
    case 333783:
    {
        returnValue = F("Westerseeweg");
        break;
    }
    case 333784:
    {
        returnValue = F("Westersoder Schulstr.");
        break;
    }
    case 333785:
    {
        returnValue = F("Westersteder Str.");
        break;
    }
    case 333786:
    {
        returnValue = F("Westersteder Weg");
        break;
    }
    case 333787:
    {
        returnValue = F("Westersteig");
        break;
    }
    case 333788:
    {
        returnValue = F("Westerstettenstr.");
        break;
    }
    case 333789:
    {
        returnValue = F("Westerstetter Str.");
        break;
    }
    case 333790:
    {
        returnValue = F("Westerstetter Weg");
        break;
    }
    case 333791:
    {
        returnValue = F("Westerstieg");
        break;
    }
    case 333792:
    {
        returnValue = F("Westerstr.");
        break;
    }
    case 333793:
    {
        returnValue = F("Westerstraat");
        break;
    }
    case 333794:
    {
        returnValue = F("Westerstück");
        break;
    }
    case 333795:
    {
        returnValue = F("Westersweg");
        break;
    }
    case 333796:
    {
        returnValue = F("Westert");
        break;
    }
    case 333797:
    {
        returnValue = F("Westertill");
        break;
    }
    case 333798:
    {
        returnValue = F("Westertilli");
        break;
    }
    case 333799:
    {
        returnValue = F("Westertoft");
        break;
    }
    case 333800:
    {
        returnValue = F("Westertor");
        break;
    }
    case 333801:
    {
        returnValue = F("Westertorstr.");
        break;
    }
    case 333802:
    {
        returnValue = F("Westertresker");
        break;
    }
    case 333803:
    {
        returnValue = F("Westertstr.");
        break;
    }
    case 333804:
    {
        returnValue = F("Westertweute");
        break;
    }
    case 333805:
    {
        returnValue = F("Westerunterland");
        break;
    }
    case 333806:
    {
        returnValue = F("Westervenn");
        break;
    }
    case 333807:
    {
        returnValue = F("Westerveseder Landstr.");
        break;
    }
    case 333808:
    {
        returnValue = F("Westerwaldbahn (Kreis Altenkirchen)");
        break;
    }
    case 333809:
    {
        returnValue = F("Westerwaldblick");
        break;
    }
    case 333810:
    {
        returnValue = F("Westerwalder Str.");
        break;
    }
    case 333811:
    {
        returnValue = F("Westerwaldloipe");
        break;
    }
    case 333812:
    {
        returnValue = F("Westerwaldquerbahn");
        break;
    }
    case 333813:
    {
        returnValue = F("Westerwaldring");
        break;
    }
    case 333814:
    {
        returnValue = F("Westerwaldsteig");
        break;
    }
    case 333815:
    {
        returnValue = F("Westerwaldstr.");
        break;
    }
    case 333816:
    {
        returnValue = F("Westerwaldweg");
        break;
    }
    case 333817:
    {
        returnValue = F("Westerwall");
        break;
    }
    case 333818:
    {
        returnValue = F("Westerwalseder Str.");
        break;
    }
    case 333819:
    {
        returnValue = F("Westerwarf");
        break;
    }
    case 333820:
    {
        returnValue = F("Westerwarft");
        break;
    }
    case 333821:
    {
        returnValue = F("Westerweder Losdamm");
        break;
    }
    case 333822:
    {
        returnValue = F("Westerweder Str.");
        break;
    }
    case 333823:
    {
        returnValue = F("Westerweg");
        break;
    }
    case 333824:
    {
        returnValue = F("Westerweide");
        break;
    }
    case 333825:
    {
        returnValue = F("Westerweidenweg");
        break;
    }
    case 333826:
    {
        returnValue = F("Westerweyher Str.");
        break;
    }
    case 333827:
    {
        returnValue = F("Westerweyher Weg");
        break;
    }
    case 333828:
    {
        returnValue = F("Westerwiede");
        break;
    }
    case 333829:
    {
        returnValue = F("Westerwieder Weg");
        break;
    }
    case 333830:
    {
        returnValue = F("Westerwieher Str.");
        break;
    }
    case 333831:
    {
        returnValue = F("Westerwieke");
        break;
    }
    case 333832:
    {
        returnValue = F("Westerwieke I");
        break;
    }
    case 333833:
    {
        returnValue = F("Westerwieke II");
        break;
    }
    case 333834:
    {
        returnValue = F("Westerwiesen");
        break;
    }
    case 333835:
    {
        returnValue = F("Westerwiesenstr.");
        break;
    }
    case 333836:
    {
        returnValue = F("Westerwiesenweg");
        break;
    }
    case 333837:
    {
        returnValue = F("Westerwinkel");
        break;
    }
    case 333838:
    {
        returnValue = F("Westerwischen");
        break;
    }
    case 333839:
    {
        returnValue = F("Westerwischer Str.");
        break;
    }
    case 333840:
    {
        returnValue = F("Westerwischer Wasserlöse");
        break;
    }
    case 333841:
    {
        returnValue = F("Westerwischweg");
        break;
    }
    case 333842:
    {
        returnValue = F("Westerwitzer Str.");
        break;
    }
    case 333843:
    {
        returnValue = F("Westerwohld");
        break;
    }
    case 333844:
    {
        returnValue = F("Westerwohlder Str.");
        break;
    }
    case 333845:
    {
        returnValue = F("Westerwohldstieg");
        break;
    }
    case 333846:
    {
        returnValue = F("Westerwohldweg");
        break;
    }
    case 333847:
    {
        returnValue = F("Westerwung");
        break;
    }
    case 333848:
    {
        returnValue = F("Westerwungweg");
        break;
    }
    case 333849:
    {
        returnValue = F("Westerwälder Str.");
        break;
    }
    case 333850:
    {
        returnValue = F("Westerwälder Weg");
        break;
    }
    case 333851:
    {
        returnValue = F("Westerwördener Weg");
        break;
    }
    case 333852:
    {
        returnValue = F("Westeräcker");
        break;
    }
    case 333853:
    {
        returnValue = F("Westeröder Str.");
        break;
    }
    case 333854:
    {
        returnValue = F("Westesch");
        break;
    }
    case 333855:
    {
        returnValue = F("Westewitzer Str.");
        break;
    }
    case 333856:
    {
        returnValue = F("Westfahlenallee");
        break;
    }
    case 333857:
    {
        returnValue = F("Westfalendamm");
        break;
    }
    case 333858:
    {
        returnValue = F("Westfalenhof");
        break;
    }
    case 333859:
    {
        returnValue = F("Westfalenplatz");
        break;
    }
    case 333860:
    {
        returnValue = F("Westfalenring");
        break;
    }
    case 333861:
    {
        returnValue = F("Westfalenstr.");
        break;
    }
    case 333862:
    {
        returnValue = F("Westfalentor");
        break;
    }
    case 333863:
    {
        returnValue = F("Westfalenweg");
        break;
    }
    case 333864:
    {
        returnValue = F("Westfalenwinkel");
        break;
    }
    case 333865:
    {
        returnValue = F("Westfaliastr.");
        break;
    }
    case 333866:
    {
        returnValue = F("Westfaliaweg");
        break;
    }
    case 333867:
    {
        returnValue = F("Westfeld");
        break;
    }
    case 333868:
    {
        returnValue = F("Westfelder Hauptstr.");
        break;
    }
    case 333869:
    {
        returnValue = F("Westfelder Str.");
        break;
    }
    case 333870:
    {
        returnValue = F("Westfeldstr.");
        break;
    }
    case 333871:
    {
        returnValue = F("Westfleth");
        break;
    }
    case 333872:
    {
        returnValue = F("Westfleth-Passage");
        break;
    }
    case 333873:
    {
        returnValue = F("Westfriesenstr.");
        break;
    }
    case 333874:
    {
        returnValue = F("Westfälische Str.");
        break;
    }
    case 333875:
    {
        returnValue = F("Westfälischer Hof Garbrock");
        break;
    }
    case 333876:
    {
        returnValue = F("Westfälischer Kamp");
        break;
    }
    case 333877:
    {
        returnValue = F("Westfälischer-Friede-Weg");
        break;
    }
    case 333878:
    {
        returnValue = F("Westgartshausener Hauptstr.");
        break;
    }
    case 333879:
    {
        returnValue = F("Westgasse");
        break;
    }
    case 333880:
    {
        returnValue = F("Westgaster Weg");
        break;
    }
    case 333881:
    {
        returnValue = F("Westglindkamp");
        break;
    }
    case 333882:
    {
        returnValue = F("Westgotenallee");
        break;
    }
    case 333883:
    {
        returnValue = F("Westgotenweg");
        break;
    }
    case 333884:
    {
        returnValue = F("Westgraben");
        break;
    }
    case 333885:
    {
        returnValue = F("Westgreußener Str.");
        break;
    }
    case 333886:
    {
        returnValue = F("Westhagen");
        break;
    }
    case 333887:
    {
        returnValue = F("Westhalde");
        break;
    }
    case 333888:
    {
        returnValue = F("Westhang");
        break;
    }
    case 333889:
    {
        returnValue = F("Westharinger Weg");
        break;
    }
    case 333890:
    {
        returnValue = F("Westhausen");
        break;
    }
    case 333891:
    {
        returnValue = F("Westhausener Str.");
        break;
    }
    case 333892:
    {
        returnValue = F("Westhauser Str.");
        break;
    }
    case 333893:
    {
        returnValue = F("Westheck");
        break;
    }
    case 333894:
    {
        returnValue = F("Westhedig");
        break;
    }
    case 333895:
    {
        returnValue = F("Westheerener Str.");
        break;
    }
    case 333896:
    {
        returnValue = F("Westheermannstr.");
        break;
    }
    case 333897:
    {
        returnValue = F("Westheide");
        break;
    }
    case 333898:
    {
        returnValue = F("Westheider Weg");
        break;
    }
    case 333899:
    {
        returnValue = F("Westheim");
        break;
    }
    case 333900:
    {
        returnValue = F("Westheimer Bogen");
        break;
    }
    case 333901:
    {
        returnValue = F("Westheimer Hauptstr.");
        break;
    }
    case 333902:
    {
        returnValue = F("Westheimer Str.");
        break;
    }
    case 333903:
    {
        returnValue = F("Westheimer Weg");
        break;
    }
    case 333904:
    {
        returnValue = F("Westhellen");
        break;
    }
    case 333905:
    {
        returnValue = F("Westhellweg");
        break;
    }
    case 333906:
    {
        returnValue = F("Westhemmerder Dorfstr.");
        break;
    }
    case 333907:
    {
        returnValue = F("Westhemmerder Weg");
        break;
    }
    case 333908:
    {
        returnValue = F("Westhof");
        break;
    }
    case 333909:
    {
        returnValue = F("Westhofen");
        break;
    }
    case 333910:
    {
        returnValue = F("Westhofener Str.");
        break;
    }
    case 333911:
    {
        returnValue = F("Westhofener Weg");
        break;
    }
    case 333912:
    {
        returnValue = F("Westhofenstr.");
        break;
    }
    case 333913:
    {
        returnValue = F("Westhofer Str.");
        break;
    }
    case 333914:
    {
        returnValue = F("Westhoferweg");
        break;
    }
    case 333915:
    {
        returnValue = F("Westhoffstr.");
        break;
    }
    case 333916:
    {
        returnValue = F("Westhoffweg");
        break;
    }
    case 333917:
    {
        returnValue = F("Westholts Damm");
        break;
    }
    case 333918:
    {
        returnValue = F("Westholtskamp");
        break;
    }
    case 333919:
    {
        returnValue = F("Westholz");
        break;
    }
    case 333920:
    {
        returnValue = F("Westhoovenstr.");
        break;
    }
    case 333921:
    {
        returnValue = F("Westhoyeler Str.");
        break;
    }
    case 333922:
    {
        returnValue = F("Westhäuser Str.");
        break;
    }
    case 333923:
    {
        returnValue = F("Westhöfe");
        break;
    }
    case 333924:
    {
        returnValue = F("Westhöhe");
        break;
    }
    case 333925:
    {
        returnValue = F("Westhüs");
        break;
    }
    case 333926:
    {
        returnValue = F("Westick");
        break;
    }
    case 333927:
    {
        returnValue = F("Westicker Heide");
        break;
    }
    case 333928:
    {
        returnValue = F("Westicker Str.");
        break;
    }
    case 333929:
    {
        returnValue = F("Westig to Adam and ... Uphill");
        break;
    }
    case 333930:
    {
        returnValue = F("Westiger Str.");
        break;
    }
    case 333931:
    {
        returnValue = F("Westinerbrücke");
        break;
    }
    case 333932:
    {
        returnValue = F("Westingstr.");
        break;
    }
    case 333933:
    {
        returnValue = F("Westkamp");
        break;
    }
    case 333934:
    {
        returnValue = F("Westkampstr.");
        break;
    }
    case 333935:
    {
        returnValue = F("Westkampweg");
        break;
    }
    case 333936:
    {
        returnValue = F("Westkapeller Ring");
        break;
    }
    case 333937:
    {
        returnValue = F("Westkilverstr.");
        break;
    }
    case 333938:
    {
        returnValue = F("Westkirchener Str.");
        break;
    }
    case 333939:
    {
        returnValue = F("Westklüne");
        break;
    }
    case 333940:
    {
        returnValue = F("Westkolonie");
        break;
    }
    case 333941:
    {
        returnValue = F("Westkopfumfahrung");
        break;
    }
    case 333942:
    {
        returnValue = F("Westkoppel");
        break;
    }
    case 333943:
    {
        returnValue = F("Westkorso");
        break;
    }
    case 333944:
    {
        returnValue = F("Westkotter Str.");
        break;
    }
    case 333945:
    {
        returnValue = F("Westküstenstr.");
        break;
    }
    case 333946:
    {
        returnValue = F("Westl. Grenzweg");
        break;
    }
    case 333947:
    {
        returnValue = F("Westl. Seehaldeweg");
        break;
    }
    case 333948:
    {
        returnValue = F("Westlachenbühl");
        break;
    }
    case 333949:
    {
        returnValue = F("Westladbergen");
        break;
    }
    case 333950:
    {
        returnValue = F("Westladbergener Str.");
        break;
    }
    case 333951:
    {
        returnValue = F("Westlandstr.");
        break;
    }
    case 333952:
    {
        returnValue = F("Westleiten");
        break;
    }
    case 333953:
    {
        returnValue = F("Westliche Bergstr.");
        break;
    }
    case 333954:
    {
        returnValue = F("Westliche Bernfurter Str.");
        break;
    }
    case 333955:
    {
        returnValue = F("Westliche Brühlstr.");
        break;
    }
    case 333956:
    {
        returnValue = F("Westliche Feldmark");
        break;
    }
    case 333957:
    {
        returnValue = F("Westliche Friedrichstr.");
        break;
    }
    case 333958:
    {
        returnValue = F("Westliche Gewerbestr.");
        break;
    }
    case 333959:
    {
        returnValue = F("Westliche Gleisbergstr.");
        break;
    }
    case 333960:
    {
        returnValue = F("Westliche Hauptstr.");
        break;
    }
    case 333961:
    {
        returnValue = F("Westliche Hellendoornstiege");
        break;
    }
    case 333962:
    {
        returnValue = F("Westliche Hummelstr.");
        break;
    }
    case 333963:
    {
        returnValue = F("Westliche Karl-Friedrich-Str.");
        break;
    }
    case 333964:
    {
        returnValue = F("Westliche Lehen");
        break;
    }
    case 333965:
    {
        returnValue = F("Westliche Linsenholz-Ausfahrt");
        break;
    }
    case 333966:
    {
        returnValue = F("Westliche Luhrbachstr.");
        break;
    }
    case 333967:
    {
        returnValue = F("Westliche Querstr.");
        break;
    }
    case 333968:
    {
        returnValue = F("Westliche Ringstr.");
        break;
    }
    case 333969:
    {
        returnValue = F("Westliche Siedlung");
        break;
    }
    case 333970:
    {
        returnValue = F("Westliche Stadtmauerstr.");
        break;
    }
    case 333971:
    {
        returnValue = F("Westliche Umgehungsstr.");
        break;
    }
    case 333972:
    {
        returnValue = F("Westliche Waldringstr.");
        break;
    }
    case 333973:
    {
        returnValue = F("Westliche Zufahrt");
        break;
    }
    case 333974:
    {
        returnValue = F("Westliche Zwingergasse");
        break;
    }
    case 333975:
    {
        returnValue = F("Westlicher Bahnweg");
        break;
    }
    case 333976:
    {
        returnValue = F("Westlicher Birkenweg");
        break;
    }
    case 333977:
    {
        returnValue = F("Westlicher Burggraben");
        break;
    }
    case 333978:
    {
        returnValue = F("Westlicher Dwarsdiek");
        break;
    }
    case 333979:
    {
        returnValue = F("Westlicher Graben");
        break;
    }
    case 333980:
    {
        returnValue = F("Westlicher Höhenweg");
        break;
    }
    case 333981:
    {
        returnValue = F("Westlicher Kohlbergweg");
        break;
    }
    case 333982:
    {
        returnValue = F("Westlicher Mittelweg");
        break;
    }
    case 333983:
    {
        returnValue = F("Westlicher Neulinger Weg");
        break;
    }
    case 333984:
    {
        returnValue = F("Westlicher Niemandsbohlweg");
        break;
    }
    case 333985:
    {
        returnValue = F("Westlicher Ortsringweg");
        break;
    }
    case 333986:
    {
        returnValue = F("Westlicher Polderdeich");
        break;
    }
    case 333987:
    {
        returnValue = F("Westlicher Rennweg");
        break;
    }
    case 333988:
    {
        returnValue = F("Westlicher Seeweg");
        break;
    }
    case 333989:
    {
        returnValue = F("Westlicher Stadtgraben");
        break;
    }
    case 333990:
    {
        returnValue = F("Westlicher Stangenbergweg");
        break;
    }
    case 333991:
    {
        returnValue = F("Westlicher Traufweg");
        break;
    }
    case 333992:
    {
        returnValue = F("Westlicher-Grenzweg");
        break;
    }
    case 333993:
    {
        returnValue = F("Westlinteler Weg");
        break;
    }
    case 333994:
    {
        returnValue = F("Westlohne");
        break;
    }
    case 333995:
    {
        returnValue = F("Westmark");
        break;
    }
    case 333996:
    {
        returnValue = F("Westmarkstr.");
        break;
    }
    case 333997:
    {
        returnValue = F("Westmarkweg");
        break;
    }
    case 333998:
    {
        returnValue = F("Westmauer");
        break;
    }
    case 333999:
    {
        returnValue = F("Westmauerstr.");
        break;
    }
    case 334000:
    {
        returnValue = F("Westmeyers Feld");
        break;
    }
    case 334001:
    {
        returnValue = F("Westminsterstr.");
        break;
    }
    case 334002:
    {
        returnValue = F("Westmole");
        break;
    }
    case 334003:
    {
        returnValue = F("Westmoor");
        break;
    }
    case 334004:
    {
        returnValue = F("Westmoreland Lane");
        break;
    }
    case 334005:
    {
        returnValue = F("Westmöllerstr.");
        break;
    }
    case 334006:
    {
        returnValue = F("Westnerweg");
        break;
    }
    case 334007:
    {
        returnValue = F("Westoheweg");
        break;
    }
    case 334008:
    {
        returnValue = F("Westorfer Str.");
        break;
    }
    case 334009:
    {
        returnValue = F("Westpark");
        break;
    }
    case 334010:
    {
        returnValue = F("Westparkstr.");
        break;
    }
    case 334011:
    {
        returnValue = F("Westpfad");
        break;
    }
    case 334012:
    {
        returnValue = F("Westphalenweg");
        break;
    }
    case 334013:
    {
        returnValue = F("Westphalstr.");
        break;
    }
    case 334014:
    {
        returnValue = F("Westplatz");
        break;
    }
    case 334015:
    {
        returnValue = F("Westpoterne");
        break;
    }
    case 334016:
    {
        returnValue = F("Westpreussenstr.");
        break;
    }
    case 334017:
    {
        returnValue = F("Westpreußenring");
        break;
    }
    case 334018:
    {
        returnValue = F("Westpreußenstr.");
        break;
    }
    case 334019:
    {
        returnValue = F("Westpreußenweg");
        break;
    }
    case 334020:
    {
        returnValue = F("Westpreußische Str.");
        break;
    }
    case 334021:
    {
        returnValue = F("Westpromenade");
        break;
    }
    case 334022:
    {
        returnValue = F("Westrain");
        break;
    }
    case 334023:
    {
        returnValue = F("Westrampe");
        break;
    }
    case 334024:
    {
        returnValue = F("Westrandallee");
        break;
    }
    case 334025:
    {
        returnValue = F("Westrandsiedlung");
        break;
    }
    case 334026:
    {
        returnValue = F("Westrandstr.");
        break;
    }
    case 334027:
    {
        returnValue = F("Westrandweg");
        break;
    }
    case 334028:
    {
        returnValue = F("Westremstr.");
        break;
    }
    case 334029:
    {
        returnValue = F("Westremweg");
        break;
    }
    case 334030:
    {
        returnValue = F("Westricher Str.");
        break;
    }
    case 334031:
    {
        returnValue = F("Westricher Str. (neu)");
        break;
    }
    case 334032:
    {
        returnValue = F("Westricher Weg");
        break;
    }
    case 334033:
    {
        returnValue = F("Westrichstr.");
        break;
    }
    case 334034:
    {
        returnValue = F("Westrichweg");
        break;
    }
    case 334035:
    {
        returnValue = F("Westrickweg");
        break;
    }
    case 334036:
    {
        returnValue = F("Westring");
        break;
    }
    case 334037:
    {
        returnValue = F("Westring-Park");
        break;
    }
    case 334038:
    {
        returnValue = F("Westringend");
        break;
    }
    case 334039:
    {
        returnValue = F("Westringer Wall");
        break;
    }
    case 334040:
    {
        returnValue = F("Westringstr.");
        break;
    }
    case 334041:
    {
        returnValue = F("Westruck");
        break;
    }
    case 334042:
    {
        returnValue = F("Westrum");
        break;
    }
    case 334043:
    {
        returnValue = F("Westrumbstr.");
        break;
    }
    case 334044:
    {
        returnValue = F("Westrumer Str.");
        break;
    }
    case 334045:
    {
        returnValue = F("Westrumer Weg");
        break;
    }
    case 334046:
    {
        returnValue = F("Westrup");
        break;
    }
    case 334047:
    {
        returnValue = F("Westruper Str.");
        break;
    }
    case 334048:
    {
        returnValue = F("Westruper Weg");
        break;
    }
    case 334049:
    {
        returnValue = F("Westschachtstr.");
        break;
    }
    case 334050:
    {
        returnValue = F("Westscheider Weg");
        break;
    }
    case 334051:
    {
        returnValue = F("Westschnat");
        break;
    }
    case 334052:
    {
        returnValue = F("Westseite");
        break;
    }
    case 334053:
    {
        returnValue = F("Westsid");
        break;
    }
    case 334054:
    {
        returnValue = F("Westsiedlung");
        break;
    }
    case 334055:
    {
        returnValue = F("Westspange");
        break;
    }
    case 334056:
    {
        returnValue = F("Weststeig");
        break;
    }
    case 334057:
    {
        returnValue = F("Weststollen");
        break;
    }
    case 334058:
    {
        returnValue = F("Weststr.");
        break;
    }
    case 334059:
    {
        returnValue = F("Weststrasse");
        break;
    }
    case 334060:
    {
        returnValue = F("Westtangente");
        break;
    }
    case 334061:
    {
        returnValue = F("Westtangente Freising");
        break;
    }
    case 334062:
    {
        returnValue = F("Westtangente Freising (FS 44)");
        break;
    }
    case 334063:
    {
        returnValue = F("Westtangente Freising (Tunnel Vötting)");
        break;
    }
    case 334064:
    {
        returnValue = F("Westtangententunnel");
        break;
    }
    case 334065:
    {
        returnValue = F("Westterrasse");
        break;
    }
    case 334066:
    {
        returnValue = F("Westtor");
        break;
    }
    case 334067:
    {
        returnValue = F("Westtorstr.");
        break;
    }
    case 334068:
    {
        returnValue = F("Westtrasse");
        break;
    }
    case 334069:
    {
        returnValue = F("Westufer");
        break;
    }
    case 334070:
    {
        returnValue = F("Westuferpark");
        break;
    }
    case 334071:
    {
        returnValue = F("Westuffler Weg");
        break;
    }
    case 334072:
    {
        returnValue = F("Westumer Landstr.");
        break;
    }
    case 334073:
    {
        returnValue = F("Westumer Str.");
        break;
    }
    case 334074:
    {
        returnValue = F("Westumfahrung");
        break;
    }
    case 334075:
    {
        returnValue = F("Westumfahrung Gilching");
        break;
    }
    case 334076:
    {
        returnValue = F("Westumfahrung Starnberg");
        break;
    }
    case 334077:
    {
        returnValue = F("Westumgehung");
        break;
    }
    case 334078:
    {
        returnValue = F("Westumgehung Wetzlar");
        break;
    }
    case 334079:
    {
        returnValue = F("Westverbinder");
        break;
    }
    case 334080:
    {
        returnValue = F("Westvictorburer Str.");
        break;
    }
    case 334081:
    {
        returnValue = F("Westwall");
        break;
    }
    case 334082:
    {
        returnValue = F("Westwall-Park");
        break;
    }
    case 334083:
    {
        returnValue = F("Westwallstr.");
        break;
    }
    case 334084:
    {
        returnValue = F("Westwallwanderweg");
        break;
    }
    case 334085:
    {
        returnValue = F("Westwallweg");
        break;
    }
    case 334086:
    {
        returnValue = F("Westweg");
        break;
    }
    case 334087:
    {
        returnValue = F("Westweide");
        break;
    }
    case 334088:
    {
        returnValue = F("Westwieke");
        break;
    }
    case 334089:
    {
        returnValue = F("Westädts Garten");
        break;
    }
    case 334090:
    {
        returnValue = F("Westönner Bachstr.");
        break;
    }
    case 334091:
    {
        returnValue = F("Westönner Bundesstr.");
        break;
    }
    case 334092:
    {
        returnValue = F("Westönner Hellweg");
        break;
    }
    case 334093:
    {
        returnValue = F("Westönner Kirchstr.");
        break;
    }
    case 334094:
    {
        returnValue = F("Westönner Schützenstr.");
        break;
    }
    case 334095:
    {
        returnValue = F("Wetekampweg");
        break;
    }
    case 334096:
    {
        returnValue = F("Wetenkamp");
        break;
    }
    case 334097:
    {
        returnValue = F("Wetenstieg");
        break;
    }
    case 334098:
    {
        returnValue = F("Weteritzer Landstr.");
        break;
    }
    case 334099:
    {
        returnValue = F("Weteritzer Park");
        break;
    }
    case 334100:
    {
        returnValue = F("Wetermarschweg");
        break;
    }
    case 334101:
    {
        returnValue = F("Weteschenweg");
        break;
    }
    case 334102:
    {
        returnValue = F("Wethauer Landstr.");
        break;
    }
    case 334103:
    {
        returnValue = F("Wethautalstr.");
        break;
    }
    case 334104:
    {
        returnValue = F("Wethauweg");
        break;
    }
    case 334105:
    {
        returnValue = F("Wethbergrundweg");
        break;
    }
    case 334106:
    {
        returnValue = F("Wethener Str.");
        break;
    }
    case 334107:
    {
        returnValue = F("Wether Str.");
        break;
    }
    case 334108:
    {
        returnValue = F("Wethgarten");
        break;
    }
    case 334109:
    {
        returnValue = F("Wethgasse");
        break;
    }
    case 334110:
    {
        returnValue = F("Wethhof");
        break;
    }
    case 334111:
    {
        returnValue = F("Wethmar Mark");
        break;
    }
    case 334112:
    {
        returnValue = F("Wethplatz");
        break;
    }
    case 334113:
    {
        returnValue = F("Wethstr.");
        break;
    }
    case 334114:
    {
        returnValue = F("Wethweg");
        break;
    }
    case 334115:
    {
        returnValue = F("Wetigaustr.");
        break;
    }
    case 334116:
    {
        returnValue = F("Wetitzweg");
        break;
    }
    case 334117:
    {
        returnValue = F("Wetkampstr.");
        break;
    }
    case 334118:
    {
        returnValue = F("Wetley-Rocks-Str.");
        break;
    }
    case 334119:
    {
        returnValue = F("Wetmarstr.");
        break;
    }
    case 334120:
    {
        returnValue = F("Wetrihstr.");
        break;
    }
    case 334121:
    {
        returnValue = F("Wetro-Dorf");
        break;
    }
    case 334122:
    {
        returnValue = F("Wetro-Siedlung");
        break;
    }
    case 334123:
    {
        returnValue = F("Wetschbergkopfweg");
        break;
    }
    case 334124:
    {
        returnValue = F("Wetschener Str.");
        break;
    }
    case 334125:
    {
        returnValue = F("Wetscher Bruchstr.");
        break;
    }
    case 334126:
    {
        returnValue = F("Wetscher Str.");
        break;
    }
    case 334127:
    {
        returnValue = F("Wetscher Torfweg");
        break;
    }
    case 334128:
    {
        returnValue = F("Wetscherhardter Str.");
        break;
    }
    case 334129:
    {
        returnValue = F("Wetschewell");
        break;
    }
    case 334130:
    {
        returnValue = F("Wetscheweller Str.");
        break;
    }
    case 334131:
    {
        returnValue = F("Wetschhauser Str.");
        break;
    }
    case 334132:
    {
        returnValue = F("Wetsteg");
        break;
    }
    case 334133:
    {
        returnValue = F("Wetstr.");
        break;
    }
    case 334134:
    {
        returnValue = F("Wettaburger Str.");
        break;
    }
    case 334135:
    {
        returnValue = F("Wettachstr.");
        break;
    }
    case 334136:
    {
        returnValue = F("Wettau");
        break;
    }
    case 334137:
    {
        returnValue = F("Wettbach");
        break;
    }
    case 334138:
    {
        returnValue = F("Wettbachstr.");
        break;
    }
    case 334139:
    {
        returnValue = F("Wettberger Str.");
        break;
    }
    case 334140:
    {
        returnValue = F("Wettbreden");
        break;
    }
    case 334141:
    {
        returnValue = F("Wette");
        break;
    }
    case 334142:
    {
        returnValue = F("Wetteborner Weg");
        break;
    }
    case 334143:
    {
        returnValue = F("Wettegartenstr.");
        break;
    }
    case 334144:
    {
        returnValue = F("Wettegasse");
        break;
    }
    case 334145:
    {
        returnValue = F("Wettegraben");
        break;
    }
    case 334146:
    {
        returnValue = F("Wettegässle");
        break;
    }
    case 334147:
    {
        returnValue = F("Wettehof");
        break;
    }
    case 334148:
    {
        returnValue = F("Wettelbrunner Str.");
        break;
    }
    case 334149:
    {
        returnValue = F("Wettelbrunner Weg");
        break;
    }
    case 334150:
    {
        returnValue = F("Wetteldorfer Str.");
        break;
    }
    case 334151:
    {
        returnValue = F("Wettelröder Str.");
        break;
    }
    case 334152:
    {
        returnValue = F("Wettelsheimer Str.");
        break;
    }
    case 334153:
    {
        returnValue = F("Wettelswalde");
        break;
    }
    case 334154:
    {
        returnValue = F("Wettemarkt");
        break;
    }
    case 334155:
    {
        returnValue = F("Wetten");
        break;
    }
    case 334156:
    {
        returnValue = F("Wetten Kämpe");
        break;
    }
    case 334157:
    {
        returnValue = F("Wettenberger Weg");
        break;
    }
    case 334158:
    {
        returnValue = F("Wettenbergring");
        break;
    }
    case 334159:
    {
        returnValue = F("Wettenbostel");
        break;
    }
    case 334160:
    {
        returnValue = F("Wettenbrunnen");
        break;
    }
    case 334161:
    {
        returnValue = F("Wettener Str.");
        break;
    }
    case 334162:
    {
        returnValue = F("Wettengass");
        break;
    }
    case 334163:
    {
        returnValue = F("Wettengasse");
        break;
    }
    case 334164:
    {
        returnValue = F("Wettengelstr.");
        break;
    }
    case 334165:
    {
        returnValue = F("Wettenhartstr.");
        break;
    }
    case 334166:
    {
        returnValue = F("Wettenhauser Str.");
        break;
    }
    case 334167:
    {
        returnValue = F("Wettenhauser Weg");
        break;
    }
    case 334168:
    {
        returnValue = F("Wettenhofen");
        break;
    }
    case 334169:
    {
        returnValue = F("Wettenmoor");
        break;
    }
    case 334170:
    {
        returnValue = F("Wettenser Schlei");
        break;
    }
    case 334171:
    {
        returnValue = F("Wettenstr.");
        break;
    }
    case 334172:
    {
        returnValue = F("Wettenweg");
        break;
    }
    case 334173:
    {
        returnValue = F("Wettenwiesen");
        break;
    }
    case 334174:
    {
        returnValue = F("Wetteplatz");
        break;
    }
    case 334175:
    {
        returnValue = F("Wetterabucht");
        break;
    }
    case 334176:
    {
        returnValue = F("Wetterader Schmiede");
        break;
    }
    case 334177:
    {
        returnValue = F("Wetterauer Str.");
        break;
    }
    case 334178:
    {
        returnValue = F("Wetterauer Weg");
        break;
    }
    case 334179:
    {
        returnValue = F("Wetteraustr.");
        break;
    }
    case 334180:
    {
        returnValue = F("Wetterauweg");
        break;
    }
    case 334181:
    {
        returnValue = F("Wetteraweg");
        break;
    }
    case 334182:
    {
        returnValue = F("Wetterbach");
        break;
    }
    case 334183:
    {
        returnValue = F("Wetterbek");
        break;
    }
    case 334184:
    {
        returnValue = F("Wetterbergstr.");
        break;
    }
    case 334185:
    {
        returnValue = F("Wetterbergsweg");
        break;
    }
    case 334186:
    {
        returnValue = F("Wetterburg");
        break;
    }
    case 334187:
    {
        returnValue = F("Wetterburger Str.");
        break;
    }
    case 334188:
    {
        returnValue = F("Wetteren Str.");
        break;
    }
    case 334189:
    {
        returnValue = F("Wetterfelder Str.");
        break;
    }
    case 334190:
    {
        returnValue = F("Wetterfeldstr.");
        break;
    }
    case 334191:
    {
        returnValue = F("Wettergasse");
        break;
    }
    case 334192:
    {
        returnValue = F("Wetterhahnweg");
        break;
    }
    case 334193:
    {
        returnValue = F("Wetterhecke");
        break;
    }
    case 334194:
    {
        returnValue = F("Wetterhof");
        break;
    }
    case 334195:
    {
        returnValue = F("Wetterhofstr.");
        break;
    }
    case 334196:
    {
        returnValue = F("Wetterhöhe");
        break;
    }
    case 334197:
    {
        returnValue = F("Wetteringhof");
        break;
    }
    case 334198:
    {
        returnValue = F("Wetteritzer Weg");
        break;
    }
    case 334199:
    {
        returnValue = F("Wetterkreuz");
        break;
    }
    case 334200:
    {
        returnValue = F("Wetterkreuzstr.");
        break;
    }
    case 334201:
    {
        returnValue = F("Wetterkreuzweg");
        break;
    }
    case 334202:
    {
        returnValue = F("Wettermühlweg");
        break;
    }
    case 334203:
    {
        returnValue = F("Wetterndorf");
        break;
    }
    case 334204:
    {
        returnValue = F("Wetternstr.");
        break;
    }
    case 334205:
    {
        returnValue = F("Wetternweg");
        break;
    }
    case 334206:
    {
        returnValue = F("Wetterpark");
        break;
    }
    case 334207:
    {
        returnValue = F("Wetterriedstr.");
        break;
    }
    case 334208:
    {
        returnValue = F("Wettersbach");
        break;
    }
    case 334209:
    {
        returnValue = F("Wettersberg");
        break;
    }
    case 334210:
    {
        returnValue = F("Wetterschacht");
        break;
    }
    case 334211:
    {
        returnValue = F("Wetterschachtweg");
        break;
    }
    case 334212:
    {
        returnValue = F("Wettersche Str.");
        break;
    }
    case 334213:
    {
        returnValue = F("Wetterscheidter Str.");
        break;
    }
    case 334214:
    {
        returnValue = F("Wetterschlag-Weg");
        break;
    }
    case 334215:
    {
        returnValue = F("Wettersdorf");
        break;
    }
    case 334216:
    {
        returnValue = F("Wettersdorfer Str.");
        break;
    }
    case 334217:
    {
        returnValue = F("Wettersdorfer Weg");
        break;
    }
    case 334218:
    {
        returnValue = F("Wetterskamp");
        break;
    }
    case 334219:
    {
        returnValue = F("Wetterspitzstr.");
        break;
    }
    case 334220:
    {
        returnValue = F("Wetterstation");
        break;
    }
    case 334221:
    {
        returnValue = F("Wettersteinring");
        break;
    }
    case 334222:
    {
        returnValue = F("Wettersteinstr.");
        break;
    }
    case 334223:
    {
        returnValue = F("Wettersteinweg");
        break;
    }
    case 334224:
    {
        returnValue = F("Wetterstr.");
        break;
    }
    case 334225:
    {
        returnValue = F("Wettertalstr.");
        break;
    }
    case 334226:
    {
        returnValue = F("Wetterweg");
        break;
    }
    case 334227:
    {
        returnValue = F("Wetterwitz");
        break;
    }
    case 334228:
    {
        returnValue = F("Wetterwitzer Str.");
        break;
    }
    case 334229:
    {
        returnValue = F("Wettesinger Str.");
        break;
    }
    case 334230:
    {
        returnValue = F("Wettesinger Weg");
        break;
    }
    case 334231:
    {
        returnValue = F("Wettestr.");
        break;
    }
    case 334232:
    {
        returnValue = F("Wetteweg");
        break;
    }
    case 334233:
    {
        returnValue = F("Wetteäckerweg");
        break;
    }
    case 334234:
    {
        returnValue = F("Wettgasse");
        break;
    }
    case 334235:
    {
        returnValue = F("Wettgeser Str.");
        break;
    }
    case 334236:
    {
        returnValue = F("Wetthoope");
        break;
    }
    case 334237:
    {
        returnValue = F("Wettig-Park");
        break;
    }
    case 334238:
    {
        returnValue = F("Wettigasse");
        break;
    }
    case 334239:
    {
        returnValue = F("Wettiner Landstr.");
        break;
    }
    case 334240:
    {
        returnValue = F("Wettiner Platz");
        break;
    }
    case 334241:
    {
        returnValue = F("Wettiner Ring");
        break;
    }
    case 334242:
    {
        returnValue = F("Wettiner Sackgasse");
        break;
    }
    case 334243:
    {
        returnValue = F("Wettiner Stein");
        break;
    }
    case 334244:
    {
        returnValue = F("Wettiner Str.");
        break;
    }
    case 334245:
    {
        returnValue = F("Wettiner Weg");
        break;
    }
    case 334246:
    {
        returnValue = F("Wettinerplatz");
        break;
    }
    case 334247:
    {
        returnValue = F("Wettinerstr.");
        break;
    }
    case 334248:
    {
        returnValue = F("Wettinerweg");
        break;
    }
    case 334249:
    {
        returnValue = F("Wettinger Str.");
        break;
    }
    case 334250:
    {
        returnValue = F("Wettinhöhe");
        break;
    }
    case 334251:
    {
        returnValue = F("Wettinplatz");
        break;
    }
    case 334252:
    {
        returnValue = F("Wettinstr.");
        break;
    }
    case 334253:
    {
        returnValue = F("Wettinweg");
        break;
    }
    case 334254:
    {
        returnValue = F("Wettlager Weg");
        break;
    }
    case 334255:
    {
        returnValue = F("Wettlinger Str.");
        break;
    }
    case 334256:
    {
        returnValue = F("Wettlkam");
        break;
    }
    case 334257:
    {
        returnValue = F("Wettlkamer Str.");
        break;
    }
    case 334258:
    {
        returnValue = F("Wettlkamer Weg");
        break;
    }
    case 334259:
    {
        returnValue = F("Wettloopsweg");
        break;
    }
    case 334260:
    {
        returnValue = F("Wettmarer Str.");
        break;
    }
    case 334261:
    {
        returnValue = F("Wettmarer Weg");
        break;
    }
    case 334262:
    {
        returnValue = F("Wettmarsen");
        break;
    }
    case 334263:
    {
        returnValue = F("Wettmarser Weg");
        break;
    }
    case 334264:
    {
        returnValue = F("Wettmershagener Str.");
        break;
    }
    case 334265:
    {
        returnValue = F("Wettorstr.");
        break;
    }
    case 334266:
    {
        returnValue = F("Wettring");
        break;
    }
    case 334267:
    {
        returnValue = F("Wettringener Str.");
        break;
    }
    case 334268:
    {
        returnValue = F("Wettringer Str.");
        break;
    }
    case 334269:
    {
        returnValue = F("Wettruper Damm");
        break;
    }
    case 334270:
    {
        returnValue = F("Wettruper Moordamm");
        break;
    }
    case 334271:
    {
        returnValue = F("Wettruper Str.");
        break;
    }
    case 334272:
    {
        returnValue = F("Wettschafttalstr.");
        break;
    }
    case 334273:
    {
        returnValue = F("Wettsteg");
        break;
    }
    case 334274:
    {
        returnValue = F("Wettstettener Str.");
        break;
    }
    case 334275:
    {
        returnValue = F("Wettumgraben");
        break;
    }
    case 334276:
    {
        returnValue = F("Wettzell");
        break;
    }
    case 334277:
    {
        returnValue = F("Wettzeller Str.");
        break;
    }
    case 334278:
    {
        returnValue = F("Wettäcker");
        break;
    }
    case 334279:
    {
        returnValue = F("Wetzbach");
        break;
    }
    case 334280:
    {
        returnValue = F("Wetzbachstr.");
        break;
    }
    case 334281:
    {
        returnValue = F("Wetzdorf");
        break;
    }
    case 334282:
    {
        returnValue = F("Wetze");
        break;
    }
    case 334283:
    {
        returnValue = F("Wetzelgasse");
        break;
    }
    case 334284:
    {
        returnValue = F("Wetzelsgrün");
        break;
    }
    case 334285:
    {
        returnValue = F("Wetzelsgrüner Str.");
        break;
    }
    case 334286:
    {
        returnValue = F("Wetzelsrieder Str.");
        break;
    }
    case 334287:
    {
        returnValue = F("Wetzelstal");
        break;
    }
    case 334288:
    {
        returnValue = F("Wetzelstein");
        break;
    }
    case 334289:
    {
        returnValue = F("Wetzelstr.");
        break;
    }
    case 334290:
    {
        returnValue = F("Wetzelweg");
        break;
    }
    case 334291:
    {
        returnValue = F("Wetzendorfer Hauptstr.");
        break;
    }
    case 334292:
    {
        returnValue = F("Wetzendorfer Str.");
        break;
    }
    case 334293:
    {
        returnValue = F("Wetzener Str.");
        break;
    }
    case 334294:
    {
        returnValue = F("Wetzenow");
        break;
    }
    case 334295:
    {
        returnValue = F("Wetzenower Weg");
        break;
    }
    case 334296:
    {
        returnValue = F("Wetzer Kreisel");
        break;
    }
    case 334297:
    {
        returnValue = F("Wetzer Weg");
        break;
    }
    case 334298:
    {
        returnValue = F("Wetzgau Mitte");
        break;
    }
    case 334299:
    {
        returnValue = F("Wetzgauer Str.");
        break;
    }
    case 334300:
    {
        returnValue = F("Wetzgauer Weg");
        break;
    }
    case 334301:
    {
        returnValue = F("Wetzgerweg");
        break;
    }
    case 334302:
    {
        returnValue = F("Wetzgräbchen");
        break;
    }
    case 334303:
    {
        returnValue = F("Wetzhäuser Str.");
        break;
    }
    case 334304:
    {
        returnValue = F("Wetzkamp");
        break;
    }
    case 334305:
    {
        returnValue = F("Wetzkeil");
        break;
    }
    case 334306:
    {
        returnValue = F("Wetzl");
        break;
    }
    case 334307:
    {
        returnValue = F("Wetzlarer Berg");
        break;
    }
    case 334308:
    {
        returnValue = F("Wetzlarer Hohl");
        break;
    }
    case 334309:
    {
        returnValue = F("Wetzlarer Platz");
        break;
    }
    case 334310:
    {
        returnValue = F("Wetzlarer Str.");
        break;
    }
    case 334311:
    {
        returnValue = F("Wetzlarer Weg");
        break;
    }
    case 334312:
    {
        returnValue = F("Wetzlarn");
        break;
    }
    case 334313:
    {
        returnValue = F("Wetzldorf");
        break;
    }
    case 334314:
    {
        returnValue = F("Wetzldorfer Str.");
        break;
    }
    case 334315:
    {
        returnValue = F("Wetzlebener Str.");
        break;
    }
    case 334316:
    {
        returnValue = F("Wetzleber Str.");
        break;
    }
    case 334317:
    {
        returnValue = F("Wetzlerstr.");
        break;
    }
    case 334318:
    {
        returnValue = F("Wetzlhofer Str.");
        break;
    }
    case 334319:
    {
        returnValue = F("Wetzloser Str.");
        break;
    }
    case 334320:
    {
        returnValue = F("Wetzloser Weg");
        break;
    }
    case 334321:
    {
        returnValue = F("Wetzmühlenstr.");
        break;
    }
    case 334322:
    {
        returnValue = F("Wetzogasse");
        break;
    }
    case 334323:
    {
        returnValue = F("Wetzstein");
        break;
    }
    case 334324:
    {
        returnValue = F("Wetzsteinkaut");
        break;
    }
    case 334325:
    {
        returnValue = F("Wetzsteinring");
        break;
    }
    case 334326:
    {
        returnValue = F("Wetzsteinstr.");
        break;
    }
    case 334327:
    {
        returnValue = F("Wetzsteinweg");
        break;
    }
    case 334328:
    {
        returnValue = F("Wetzstr.");
        break;
    }
    case 334329:
    {
        returnValue = F("Weuert");
        break;
    }
    case 334330:
    {
        returnValue = F("Weuspert");
        break;
    }
    case 334331:
    {
        returnValue = F("Weusperter Str.");
        break;
    }
    case 334332:
    {
        returnValue = F("Weuste");
        break;
    }
    case 334333:
    {
        returnValue = F("Weusten Weg");
        break;
    }
    case 334334:
    {
        returnValue = F("Weustenweg");
        break;
    }
    case 334335:
    {
        returnValue = F("Weusters Weg");
        break;
    }
    case 334336:
    {
        returnValue = F("Weustingstr.");
        break;
    }
    case 334337:
    {
        returnValue = F("Weveldweg");
        break;
    }
    case 334338:
    {
        returnValue = F("Wevelinghoven");
        break;
    }
    case 334339:
    {
        returnValue = F("Wevelinghovener Str.");
        break;
    }
    case 334340:
    {
        returnValue = F("Wevelinghover Str.");
        break;
    }
    case 334341:
    {
        returnValue = F("Wevels Wiese");
        break;
    }
    case 334342:
    {
        returnValue = F("Wevelsbacher Weg");
        break;
    }
    case 334343:
    {
        returnValue = F("Weverweg");
        break;
    }
    case 334344:
    {
        returnValue = F("Weweckleite");
        break;
    }
    case 334345:
    {
        returnValue = F("Weweler Str.");
        break;
    }
    case 334346:
    {
        returnValue = F("Wewelerstr.");
        break;
    }
    case 334347:
    {
        returnValue = F("Wewelingstr.");
        break;
    }
    case 334348:
    {
        returnValue = F("Wewelsburger Str.");
        break;
    }
    case 334349:
    {
        returnValue = F("Wewelsburger Weg");
        break;
    }
    case 334350:
    {
        returnValue = F("Wewerin");
        break;
    }
    case 334351:
    {
        returnValue = F("Wewersbusch");
        break;
    }
    case 334352:
    {
        returnValue = F("Wewersche Hude");
        break;
    }
    case 334353:
    {
        returnValue = F("Wewersche Str.");
        break;
    }
    case 334354:
    {
        returnValue = F("Wewerstr.");
        break;
    }
    case 334355:
    {
        returnValue = F("Wewordenstr.");
        break;
    }
    case 334356:
    {
        returnValue = F("Wexelbergerstr.");
        break;
    }
    case 334357:
    {
        returnValue = F("Wexter Kreuz");
        break;
    }
    case 334358:
    {
        returnValue = F("Wexter Str.");
        break;
    }
    case 334359:
    {
        returnValue = F("Wexter-Haar");
        break;
    }
    case 334360:
    {
        returnValue = F("Wey");
        break;
    }
    case 334361:
    {
        returnValue = F("Weyandstr.");
        break;
    }
    case 334362:
    {
        returnValue = F("Weyarner Str.");
        break;
    }
    case 334363:
    {
        returnValue = F("Weychardt Weg");
        break;
    }
    case 334364:
    {
        returnValue = F("Weydamm");
        break;
    }
    case 334365:
    {
        returnValue = F("Weydemeyerstr.");
        break;
    }
    case 334366:
    {
        returnValue = F("Weydenstr.");
        break;
    }
    case 334367:
    {
        returnValue = F("Weyenhof");
        break;
    }
    case 334368:
    {
        returnValue = F("Weyenstr.");
        break;
    }
    case 334369:
    {
        returnValue = F("Weyer Damm");
        break;
    }
    case 334370:
    {
        returnValue = F("Weyer Weg");
        break;
    }
    case 334371:
    {
        returnValue = F("Weyerberg");
        break;
    }
    case 334372:
    {
        returnValue = F("Weyerburgstr.");
        break;
    }
    case 334373:
    {
        returnValue = F("Weyerbuscher Str.");
        break;
    }
    case 334374:
    {
        returnValue = F("Weyerbuscher Weg");
        break;
    }
    case 334375:
    {
        returnValue = F("Weyerbuschweg");
        break;
    }
    case 334376:
    {
        returnValue = F("Weyerdamm");
        break;
    }
    case 334377:
    {
        returnValue = F("Weyerer Str.");
        break;
    }
    case 334378:
    {
        returnValue = F("Weyergarten");
        break;
    }
    case 334379:
    {
        returnValue = F("Weyergasse");
        break;
    }
    case 334380:
    {
        returnValue = F("Weyergassen");
        break;
    }
    case 334381:
    {
        returnValue = F("Weyergrafweg");
        break;
    }
    case 334382:
    {
        returnValue = F("Weyergäßchen");
        break;
    }
    case 334383:
    {
        returnValue = F("Weyerhardt");
        break;
    }
    case 334384:
    {
        returnValue = F("Weyerhof");
        break;
    }
    case 334385:
    {
        returnValue = F("Weyerhofstr.");
        break;
    }
    case 334386:
    {
        returnValue = F("Weyermannallee");
        break;
    }
    case 334387:
    {
        returnValue = F("Weyermannstr.");
        break;
    }
    case 334388:
    {
        returnValue = F("Weyermoorer Str.");
        break;
    }
    case 334389:
    {
        returnValue = F("Weyern");
        break;
    }
    case 334390:
    {
        returnValue = F("Weyernstr.");
        break;
    }
    case 334391:
    {
        returnValue = F("Weyers Weg");
        break;
    }
    case 334392:
    {
        returnValue = F("Weyersberger Str.");
        break;
    }
    case 334393:
    {
        returnValue = F("Weyersbusch");
        break;
    }
    case 334394:
    {
        returnValue = F("Weyershardt");
        break;
    }
    case 334395:
    {
        returnValue = F("Weyersheimer Weg");
        break;
    }
    case 334396:
    {
        returnValue = F("Weyerskamp");
        break;
    }
    case 334397:
    {
        returnValue = F("Weyersmühle");
        break;
    }
    case 334398:
    {
        returnValue = F("Weyersmühlenweg");
        break;
    }
    case 334399:
    {
        returnValue = F("Weyersstr.");
        break;
    }
    case 334400:
    {
        returnValue = F("Weyerstege");
        break;
    }
    case 334401:
    {
        returnValue = F("Weyerstr.");
        break;
    }
    case 334402:
    {
        returnValue = F("Weyersweg");
        break;
    }
    case 334403:
    {
        returnValue = F("Weyerswiesenstr.");
        break;
    }
    case 334404:
    {
        returnValue = F("Weyertshainstr.");
        break;
    }
    case 334405:
    {
        returnValue = F("Weyerweg");
        break;
    }
    case 334406:
    {
        returnValue = F("Weyerwiesenweg");
        break;
    }
    case 334407:
    {
        returnValue = F("Weygandstr.");
        break;
    }
    case 334408:
    {
        returnValue = F("Weygandtstr.");
        break;
    }
    case 334409:
    {
        returnValue = F("Weygandtsweg");
        break;
    }
    case 334410:
    {
        returnValue = F("Weygangstr.");
        break;
    }
    case 334411:
    {
        returnValue = F("Weygoldstr.");
        break;
    }
    case 334412:
    {
        returnValue = F("Weyhausenstr.");
        break;
    }
    case 334413:
    {
        returnValue = F("Weyhausenweg");
        break;
    }
    case 334414:
    {
        returnValue = F("Weyhegarten");
        break;
    }
    case 334415:
    {
        returnValue = F("Weyher Bruch");
        break;
    }
    case 334416:
    {
        returnValue = F("Weyher Str.");
        break;
    }
    case 334417:
    {
        returnValue = F("Weyherer Str.");
        break;
    }
    case 334418:
    {
        returnValue = F("Weyhererweg");
        break;
    }
    case 334419:
    {
        returnValue = F("Weyhern");
        break;
    }
    case 334420:
    {
        returnValue = F("Weyherser Weg");
        break;
    }
    case 334421:
    {
        returnValue = F("Weyhestr.");
        break;
    }
    case 334422:
    {
        returnValue = F("Weyheweg");
        break;
    }
    case 334423:
    {
        returnValue = F("Weyhknechtstr.");
        break;
    }
    case 334424:
    {
        returnValue = F("Weyhof");
        break;
    }
    case 334425:
    {
        returnValue = F("Weyhäuser Str.");
        break;
    }
    case 334426:
    {
        returnValue = F("Weyhäuser Weg");
        break;
    }
    case 334427:
    {
        returnValue = F("Weylandweg");
        break;
    }
    case 334428:
    {
        returnValue = F("Weyler Str.");
        break;
    }
    case 334429:
    {
        returnValue = F("Weylerstr.");
        break;
    }
    case 334430:
    {
        returnValue = F("Weylstr.");
        break;
    }
    case 334431:
    {
        returnValue = F("Weymannstr.");
        break;
    }
    case 334432:
    {
        returnValue = F("Weymarstr.");
        break;
    }
    case 334433:
    {
        returnValue = F("Weymerodweg");
        break;
    }
    case 334434:
    {
        returnValue = F("Weyprechtstr.");
        break;
    }
    case 334435:
    {
        returnValue = F("Weyrauchsweg");
        break;
    }
    case 334436:
    {
        returnValue = F("Weyrer Sträuch");
        break;
    }
    case 334437:
    {
        returnValue = F("Weyrerstr.");
        break;
    }
    case 334438:
    {
        returnValue = F("Weyresstr.");
        break;
    }
    case 334439:
    {
        returnValue = F("Weyrichstr.");
        break;
    }
    case 334440:
    {
        returnValue = F("Weyrichsweg");
        break;
    }
    case 334441:
    {
        returnValue = F("Weyroth");
        break;
    }
    case 334442:
    {
        returnValue = F("Weythgasse");
        break;
    }
    case 334443:
    {
        returnValue = F("Wezelstr.");
        break;
    }
    case 334444:
    {
        returnValue = F("Wezenäckerweg");
        break;
    }
    case 334445:
    {
        returnValue = F("Wezzostr.");
        break;
    }
    case 334446:
    {
        returnValue = F("Weßkamp");
        break;
    }
    case 334447:
    {
        returnValue = F("Weßlaustr.");
        break;
    }
    case 334448:
    {
        returnValue = F("Weßlinger Str.");
        break;
    }
    case 334449:
    {
        returnValue = F("Weßlings Kamp");
        break;
    }
    case 334450:
    {
        returnValue = F("Weßnitzer Str.");
        break;
    }
    case 334451:
    {
        returnValue = F("Weßweg");
        break;
    }
    case 334452:
    {
        returnValue = F("Whitehorse-Str.");
        break;
    }
    case 334453:
    {
        returnValue = F("Whitstablestr.");
        break;
    }
    case 334454:
    {
        returnValue = F("Wi-Ha-dukt");
        break;
    }
    case 334455:
    {
        returnValue = F("Wiard-Haiken-Str.");
        break;
    }
    case 334456:
    {
        returnValue = F("Wiard-Lüpkes-Str.");
        break;
    }
    case 334457:
    {
        returnValue = F("Wiard-Meckena-Str.");
        break;
    }
    case 334458:
    {
        returnValue = F("Wiarda-Lüpkes-Str.");
        break;
    }
    case 334459:
    {
        returnValue = F("Wiardastr.");
        break;
    }
    case 334460:
    {
        returnValue = F("Wiardaweg");
        break;
    }
    case 334461:
    {
        returnValue = F("Wiarder Altendeich");
        break;
    }
    case 334462:
    {
        returnValue = F("Wiardergroden");
        break;
    }
    case 334463:
    {
        returnValue = F("Wiardstr.");
        break;
    }
    case 334464:
    {
        returnValue = F("Wibaldstr.");
        break;
    }
    case 334465:
    {
        returnValue = F("Wibaustr.");
        break;
    }
    case 334466:
    {
        returnValue = F("Wibbecker Str.");
        break;
    }
    case 334467:
    {
        returnValue = F("Wibbelrather Weg");
        break;
    }
    case 334468:
    {
        returnValue = F("Wibbelsberg");
        break;
    }
    case 334469:
    {
        returnValue = F("Wibbelskequerweg");
        break;
    }
    case 334470:
    {
        returnValue = F("Wibbelskeweg");
        break;
    }
    case 334471:
    {
        returnValue = F("Wibbelspforte");
        break;
    }
    case 334472:
    {
        returnValue = F("Wibbeltanger");
        break;
    }
    case 334473:
    {
        returnValue = F("Wibbelthof");
        break;
    }
    case 334474:
    {
        returnValue = F("Wibbeltpfad");
        break;
    }
    case 334475:
    {
        returnValue = F("Wibbeltrath");
        break;
    }
    case 334476:
    {
        returnValue = F("Wibbeltrather Weg");
        break;
    }
    case 334477:
    {
        returnValue = F("Wibbeltring");
        break;
    }
    case 334478:
    {
        returnValue = F("Wibbeltstr.");
        break;
    }
    case 334479:
    {
        returnValue = F("Wibbeltweg");
        break;
    }
    case 334480:
    {
        returnValue = F("Wibe-Junge-Weg");
        break;
    }
    case 334481:
    {
        returnValue = F("Wibelstr.");
        break;
    }
    case 334482:
    {
        returnValue = F("Wibelweg");
        break;
    }
    case 334483:
    {
        returnValue = F("Wibiloweg");
        break;
    }
    case 334484:
    {
        returnValue = F("Wiblinger Steig");
        break;
    }
    case 334485:
    {
        returnValue = F("Wiblinger Str.");
        break;
    }
    case 334486:
    {
        returnValue = F("Wiblingwerder Landstr.");
        break;
    }
    case 334487:
    {
        returnValue = F("Wiblingwerder Str.");
        break;
    }
    case 334488:
    {
        returnValue = F("Wiblishauserhof");
        break;
    }
    case 334489:
    {
        returnValue = F("Wiboradaweg");
        break;
    }
    case 334490:
    {
        returnValue = F("Wibschla");
        break;
    }
    case 334491:
    {
        returnValue = F("Wibüschenweg");
        break;
    }
    case 334492:
    {
        returnValue = F("Wicbertstr.");
        break;
    }
    case 334493:
    {
        returnValue = F("Wichandsstr.");
        break;
    }
    case 334494:
    {
        returnValue = F("Wichardstr.");
        break;
    }
    case 334495:
    {
        returnValue = F("Wicharts-Str.");
        break;
    }
    case 334496:
    {
        returnValue = F("Wichartstr.");
        break;
    }
    case 334497:
    {
        returnValue = F("Wichartweg");
        break;
    }
    case 334498:
    {
        returnValue = F("Wichburgastr.");
        break;
    }
    case 334499:
    {
        returnValue = F("Wichdorfer Str.");
        break;
    }
    case 334500:
    {
        returnValue = F("Wicheldamm");
        break;
    }
    case 334501:
    {
        returnValue = F("Wicheldorf");
        break;
    }
    case 334502:
    {
        returnValue = F("Wicheldorfstr.");
        break;
    }
    case 334503:
    {
        returnValue = F("Wicheler Flur");
        break;
    }
    case 334504:
    {
        returnValue = F("Wicheler Hain");
        break;
    }
    case 334505:
    {
        returnValue = F("Wicheler Höhe");
        break;
    }
    case 334506:
    {
        returnValue = F("Wicheler Kamp");
        break;
    }
    case 334507:
    {
        returnValue = F("Wicheler Kreuz");
        break;
    }
    case 334508:
    {
        returnValue = F("Wicheler Ring");
        break;
    }
    case 334509:
    {
        returnValue = F("Wicheler Str.");
        break;
    }
    case 334510:
    {
        returnValue = F("Wicheler Weg");
        break;
    }
    case 334511:
    {
        returnValue = F("Wicheler Weiden");
        break;
    }
    case 334512:
    {
        returnValue = F("Wichelhaushof");
        break;
    }
    case 334513:
    {
        returnValue = F("Wichelmannsdamm");
        break;
    }
    case 334514:
    {
        returnValue = F("Wichelmannstr.");
        break;
    }
    case 334515:
    {
        returnValue = F("Wicheln");
        break;
    }
    case 334516:
    {
        returnValue = F("Wichelnförth");
        break;
    }
    case 334517:
    {
        returnValue = F("Wichelnkamp");
        break;
    }
    case 334518:
    {
        returnValue = F("Wichelnstr.");
        break;
    }
    case 334519:
    {
        returnValue = F("Wichelnweg");
        break;
    }
    case 334520:
    {
        returnValue = F("Wichelskamp");
        break;
    }
    case 334521:
    {
        returnValue = F("Wichelstieg");
        break;
    }
    case 334522:
    {
        returnValue = F("Wichelstr.");
        break;
    }
    case 334523:
    {
        returnValue = F("Wichelweg");
        break;
    }
    case 334524:
    {
        returnValue = F("Wichentalsweg");
        break;
    }
    case 334525:
    {
        returnValue = F("Wichern-Weg");
        break;
    }
    case 334526:
    {
        returnValue = F("Wichernshoff");
        break;
    }
    case 334527:
    {
        returnValue = F("Wichernsiedlung");
        break;
    }
    case 334528:
    {
        returnValue = F("Wichernstift");
        break;
    }
    case 334529:
    {
        returnValue = F("Wichernstr.");
        break;
    }
    case 334530:
    {
        returnValue = F("Wichernstrasse");
        break;
    }
    case 334531:
    {
        returnValue = F("Wichernweg");
        break;
    }
    case 334532:
    {
        returnValue = F("Wicherstr.");
        break;
    }
    case 334533:
    {
        returnValue = F("Wichertsweg");
        break;
    }
    case 334534:
    {
        returnValue = F("Wichfriedweg");
        break;
    }
    case 334535:
    {
        returnValue = F("Wichgrafstr.");
        break;
    }
    case 334536:
    {
        returnValue = F("Wichhausen Weg");
        break;
    }
    case 334537:
    {
        returnValue = F("Wichlinghausen");
        break;
    }
    case 334538:
    {
        returnValue = F("Wichlinghauser Weg");
        break;
    }
    case 334539:
    {
        returnValue = F("Wichmannallee");
        break;
    }
    case 334540:
    {
        returnValue = F("Wichmanngasse");
        break;
    }
    case 334541:
    {
        returnValue = F("Wichmannpromenade");
        break;
    }
    case 334542:
    {
        returnValue = F("Wichmannsdorfer Str.");
        break;
    }
    case 334543:
    {
        returnValue = F("Wichmannsdorfer Weg");
        break;
    }
    case 334544:
    {
        returnValue = F("Wichmannsgang");
        break;
    }
    case 334545:
    {
        returnValue = F("Wichmannspadd");
        break;
    }
    case 334546:
    {
        returnValue = F("Wichmannstiege");
        break;
    }
    case 334547:
    {
        returnValue = F("Wichmannstr.");
        break;
    }
    case 334548:
    {
        returnValue = F("Wichmannsweg");
        break;
    }
    case 334549:
    {
        returnValue = F("Wichmannswiese");
        break;
    }
    case 334550:
    {
        returnValue = F("Wichmannweg");
        break;
    }
    case 334551:
    {
        returnValue = F("Wichmansen");
        break;
    }
    case 334552:
    {
        returnValue = F("Wichmarstr.");
        break;
    }
    case 334553:
    {
        returnValue = F("Wichtegasse");
        break;
    }
    case 334554:
    {
        returnValue = F("Wichtelbrunnenstr.");
        break;
    }
    case 334555:
    {
        returnValue = F("Wichtelhecke");
        break;
    }
    case 334556:
    {
        returnValue = F("Wichtelpark");
        break;
    }
    case 334557:
    {
        returnValue = F("Wichtelpfad");
        break;
    }
    case 334558:
    {
        returnValue = F("Wichtelsteig");
        break;
    }
    case 334559:
    {
        returnValue = F("Wichtelstieg");
        break;
    }
    case 334560:
    {
        returnValue = F("Wichtelstr.");
        break;
    }
    case 334561:
    {
        returnValue = F("Wichtelweg");
        break;
    }
    case 334562:
    {
        returnValue = F("Wichtenbecker Weg");
        break;
    }
    case 334563:
    {
        returnValue = F("Wichtens");
        break;
    }
    case 334564:
    {
        returnValue = F("Wichter Str.");
        break;
    }
    case 334565:
    {
        returnValue = F("Wichter Weg");
        break;
    }
    case 334566:
    {
        returnValue = F("Wichtericher Str.");
        break;
    }
    case 334567:
    {
        returnValue = F("Wichtericher Weg");
        break;
    }
    case 334568:
    {
        returnValue = F("Wichteweg");
        break;
    }
    case 334569:
    {
        returnValue = F("Wichtlweg");
        break;
    }
    case 334570:
    {
        returnValue = F("Wichtringhäuser Kirchweg");
        break;
    }
    case 334571:
    {
        returnValue = F("Wichtrudstr.");
        break;
    }
    case 334572:
    {
        returnValue = F("Wickchenstr.");
        break;
    }
    case 334573:
    {
        returnValue = F("Wickedekamp");
        break;
    }
    case 334574:
    {
        returnValue = F("Wickeder Str.");
        break;
    }
    case 334575:
    {
        returnValue = F("Wickedestr.");
        break;
    }
    case 334576:
    {
        returnValue = F("Wickegarten");
        break;
    }
    case 334577:
    {
        returnValue = F("Wickelborn");
        break;
    }
    case 334578:
    {
        returnValue = F("Wickelhöfer Str.");
        break;
    }
    case 334579:
    {
        returnValue = F("Wickelkindweg");
        break;
    }
    case 334580:
    {
        returnValue = F("Wickeloh");
        break;
    }
    case 334581:
    {
        returnValue = F("Wickelshäuser Weg");
        break;
    }
    case 334582:
    {
        returnValue = F("Wickelstr.");
        break;
    }
    case 334583:
    {
        returnValue = F("Wickenberg");
        break;
    }
    case 334584:
    {
        returnValue = F("Wickenbitz");
        break;
    }
    case 334585:
    {
        returnValue = F("Wickenbreite");
        break;
    }
    case 334586:
    {
        returnValue = F("Wickendorf");
        break;
    }
    case 334587:
    {
        returnValue = F("Wickendorfer Markt");
        break;
    }
    case 334588:
    {
        returnValue = F("Wickendorfer Str.");
        break;
    }
    case 334589:
    {
        returnValue = F("Wickendorfer Weg");
        break;
    }
    case 334590:
    {
        returnValue = F("Wickenfeld");
        break;
    }
    case 334591:
    {
        returnValue = F("Wickengarten");
        break;
    }
    case 334592:
    {
        returnValue = F("Wickengartenstr.");
        break;
    }
    case 334593:
    {
        returnValue = F("Wickengasse");
        break;
    }
    case 334594:
    {
        returnValue = F("Wickengärten");
        break;
    }
    case 334595:
    {
        returnValue = F("Wickenhagenweg");
        break;
    }
    case 334596:
    {
        returnValue = F("Wickenhauser Str.");
        break;
    }
    case 334597:
    {
        returnValue = F("Wickenhof");
        break;
    }
    case 334598:
    {
        returnValue = F("Wickenhofweg");
        break;
    }
    case 334599:
    {
        returnValue = F("Wickenhohle");
        break;
    }
    case 334600:
    {
        returnValue = F("Wickenhäuser Str.");
        break;
    }
    case 334601:
    {
        returnValue = F("Wickenhöfen");
        break;
    }
    case 334602:
    {
        returnValue = F("Wickenkamp");
        break;
    }
    case 334603:
    {
        returnValue = F("Wickenmayerstr.");
        break;
    }
    case 334604:
    {
        returnValue = F("Wickenpfädchen");
        break;
    }
    case 334605:
    {
        returnValue = F("Wickenreuther Allee");
        break;
    }
    case 334606:
    {
        returnValue = F("Wickenrodter Weg");
        break;
    }
    case 334607:
    {
        returnValue = F("Wickenröder Str.");
        break;
    }
    case 334608:
    {
        returnValue = F("Wickensen");
        break;
    }
    case 334609:
    {
        returnValue = F("Wickensener Str.");
        break;
    }
    case 334610:
    {
        returnValue = F("Wickenstr.");
        break;
    }
    case 334611:
    {
        returnValue = F("Wickental");
        break;
    }
    case 334612:
    {
        returnValue = F("Wickentalweg");
        break;
    }
    case 334613:
    {
        returnValue = F("Wickenweg");
        break;
    }
    case 334614:
    {
        returnValue = F("Wickenäckerstr.");
        break;
    }
    case 334615:
    {
        returnValue = F("Wickenäckerweg");
        break;
    }
    case 334616:
    {
        returnValue = F("Wickerer Weg");
        break;
    }
    case 334617:
    {
        returnValue = F("Wickerhof");
        break;
    }
    case 334618:
    {
        returnValue = F("Wickers Immberg");
        break;
    }
    case 334619:
    {
        returnValue = F("Wickersbacher Weg");
        break;
    }
    case 334620:
    {
        returnValue = F("Wickersboll");
        break;
    }
    case 334621:
    {
        returnValue = F("Wickersdorf");
        break;
    }
    case 334622:
    {
        returnValue = F("Wickersdorfer Ring");
        break;
    }
    case 334623:
    {
        returnValue = F("Wickersdorfer Str.");
        break;
    }
    case 334624:
    {
        returnValue = F("Wickerser Str.");
        break;
    }
    case 334625:
    {
        returnValue = F("Wickershain");
        break;
    }
    case 334626:
    {
        returnValue = F("Wickersheller Brücke");
        break;
    }
    case 334627:
    {
        returnValue = F("Wickersley Ring");
        break;
    }
    case 334628:
    {
        returnValue = F("Wickersröder Str.");
        break;
    }
    case 334629:
    {
        returnValue = F("Wickerstedter Str.");
        break;
    }
    case 334630:
    {
        returnValue = F("Wickerup");
        break;
    }
    case 334631:
    {
        returnValue = F("Wickeröder Landstr.");
        break;
    }
    case 334632:
    {
        returnValue = F("Wickeröder Str.");
        break;
    }
    case 334633:
    {
        returnValue = F("Wickeröder Weg");
        break;
    }
    case 334634:
    {
        returnValue = F("Wickesberg");
        break;
    }
    case 334635:
    {
        returnValue = F("Wickfeldtstr.");
        break;
    }
    case 334636:
    {
        returnValue = F("Wickgartenstr.");
        break;
    }
    case 334637:
    {
        returnValue = F("Wickgasse");
        break;
    }
    case 334638:
    {
        returnValue = F("Wickhausen");
        break;
    }
    case 334639:
    {
        returnValue = F("Wickhäusle");
        break;
    }
    case 334640:
    {
        returnValue = F("Wickingerstr.");
        break;
    }
    case 334641:
    {
        returnValue = F("Wickingplatz");
        break;
    }
    case 334642:
    {
        returnValue = F("Wickingstr.");
        break;
    }
    case 334643:
    {
        returnValue = F("Wicklesgreuther Str.");
        break;
    }
    case 334644:
    {
        returnValue = F("Wickopweg");
        break;
    }
    case 334645:
    {
        returnValue = F("Wickrathberger Str.");
        break;
    }
    case 334646:
    {
        returnValue = F("Wickrather Str.");
        break;
    }
    case 334647:
    {
        returnValue = F("Wickrathhahner Str.");
        break;
    }
    case 334648:
    {
        returnValue = F("Wickriede");
        break;
    }
    case 334649:
    {
        returnValue = F("Wickstr.");
        break;
    }
    case 334650:
    {
        returnValue = F("Wickstädter Str.");
        break;
    }
    case 334651:
    {
        returnValue = F("Wickuhl");
        break;
    }
    case 334652:
    {
        returnValue = F("Widackerring");
        break;
    }
    case 334653:
    {
        returnValue = F("Widau");
        break;
    }
    case 334654:
    {
        returnValue = F("Widayweg");
        break;
    }
    case 334655:
    {
        returnValue = F("Widbuschweg");
        break;
    }
    case 334656:
    {
        returnValue = F("Widdauener Str.");
        break;
    }
    case 334657:
    {
        returnValue = F("Widdauer Weg");
        break;
    }
    case 334658:
    {
        returnValue = F("Widdeau");
        break;
    }
    case 334659:
    {
        returnValue = F("Widdehagen");
        break;
    }
    case 334660:
    {
        returnValue = F("Widdei");
        break;
    }
    case 334661:
    {
        returnValue = F("Widdelswehrster Str.");
        break;
    }
    case 334662:
    {
        returnValue = F("Widdelswehrster Warf");
        break;
    }
    case 334663:
    {
        returnValue = F("Widden");
        break;
    }
    case 334664:
    {
        returnValue = F("Widdenberg");
        break;
    }
    case 334665:
    {
        returnValue = F("Widdendorfer Str.");
        break;
    }
    case 334666:
    {
        returnValue = F("Widdenhofstr.");
        break;
    }
    case 334667:
    {
        returnValue = F("Widdenser Weg");
        break;
    }
    case 334668:
    {
        returnValue = F("Widder Geräumt");
        break;
    }
    case 334669:
    {
        returnValue = F("Widderbergweg");
        break;
    }
    case 334670:
    {
        returnValue = F("Widdergasse");
        break;
    }
    case 334671:
    {
        returnValue = F("Widderichs Weide");
        break;
    }
    case 334672:
    {
        returnValue = F("Widdern Weg");
        break;
    }
    case 334673:
    {
        returnValue = F("Widderner Str.");
        break;
    }
    case 334674:
    {
        returnValue = F("Widders");
        break;
    }
    case 334675:
    {
        returnValue = F("Widdersche Str.");
        break;
    }
    case 334676:
    {
        returnValue = F("Widdersche Weg");
        break;
    }
    case 334677:
    {
        returnValue = F("Widderschneise");
        break;
    }
    case 334678:
    {
        returnValue = F("Widdersdorf");
        break;
    }
    case 334679:
    {
        returnValue = F("Widdersdorfer Str.");
        break;
    }
    case 334680:
    {
        returnValue = F("Widdersteig");
        break;
    }
    case 334681:
    {
        returnValue = F("Widdersteinstr.");
        break;
    }
    case 334682:
    {
        returnValue = F("Widdersteinweg");
        break;
    }
    case 334683:
    {
        returnValue = F("Widderstr.");
        break;
    }
    case 334684:
    {
        returnValue = F("Widdert");
        break;
    }
    case 334685:
    {
        returnValue = F("Widderter Str.");
        break;
    }
    case 334686:
    {
        returnValue = F("Widderweg");
        break;
    }
    case 334687:
    {
        returnValue = F("Widdeshovener Str.");
        break;
    }
    case 334688:
    {
        returnValue = F("Widdiger Talweg");
        break;
    }
    case 334689:
    {
        returnValue = F("Widdiger Weg");
        break;
    }
    case 334690:
    {
        returnValue = F("Widdmoos");
        break;
    }
    case 334691:
    {
        returnValue = F("Widdum");
        break;
    }
    case 334692:
    {
        returnValue = F("Widdumgasse");
        break;
    }
    case 334693:
    {
        returnValue = F("Widdumgäßle");
        break;
    }
    case 334694:
    {
        returnValue = F("Widdumhof");
        break;
    }
    case 334695:
    {
        returnValue = F("Widdumhofstr.");
        break;
    }
    case 334696:
    {
        returnValue = F("Widdumring");
        break;
    }
    case 334697:
    {
        returnValue = F("Widdumstr.");
        break;
    }
    case 334698:
    {
        returnValue = F("Widdumweg");
        break;
    }
    case 334699:
    {
        returnValue = F("Wideiweg");
        break;
    }
    case 334700:
    {
        returnValue = F("Widemarkter Str.");
        break;
    }
    case 334701:
    {
        returnValue = F("Widemstr.");
        break;
    }
    case 334702:
    {
        returnValue = F("Widemweg");
        break;
    }
    case 334703:
    {
        returnValue = F("Widenanger");
        break;
    }
    case 334704:
    {
        returnValue = F("Widencer Platz");
        break;
    }
    case 334705:
    {
        returnValue = F("Widenhofweg");
        break;
    }
    case 334706:
    {
        returnValue = F("Widenmayerstr.");
        break;
    }
    case 334707:
    {
        returnValue = F("Widentwiete");
        break;
    }
    case 334708:
    {
        returnValue = F("Widenweg");
        break;
    }
    case 334709:
    {
        returnValue = F("Widerholdstr.");
        break;
    }
    case 334710:
    {
        returnValue = F("Widerholtplatz");
        break;
    }
    case 334711:
    {
        returnValue = F("Widerholtstr.");
        break;
    }
    case 334712:
    {
        returnValue = F("Widerlichstr.");
        break;
    }
    case 334713:
    {
        returnValue = F("Widerschein");
        break;
    }
    case 334714:
    {
        returnValue = F("Widerscheinstr.");
        break;
    }
    case 334715:
    {
        returnValue = F("Widerstr.");
        break;
    }
    case 334716:
    {
        returnValue = F("Widerumring");
        break;
    }
    case 334717:
    {
        returnValue = F("Wideyweg");
        break;
    }
    case 334718:
    {
        returnValue = F("Widhagstr.");
        break;
    }
    case 334719:
    {
        returnValue = F("Widhalm");
        break;
    }
    case 334720:
    {
        returnValue = F("Widhalmer Ring");
        break;
    }
    case 334721:
    {
        returnValue = F("Widholzerstr.");
        break;
    }
    case 334722:
    {
        returnValue = F("Widichshaldeweg");
        break;
    }
    case 334723:
    {
        returnValue = F("Widilostr.");
        break;
    }
    case 334724:
    {
        returnValue = F("Widlstr.");
        break;
    }
    case 334725:
    {
        returnValue = F("Widmaierstr.");
        break;
    }
    case 334726:
    {
        returnValue = F("Widmannstal");
        break;
    }
    case 334727:
    {
        returnValue = F("Widmannstr.");
        break;
    }
    case 334728:
    {
        returnValue = F("Widmannweg");
        break;
    }
    case 334729:
    {
        returnValue = F("Widmanweg");
        break;
    }
    case 334730:
    {
        returnValue = F("Widmayerweg");
        break;
    }
    case 334731:
    {
        returnValue = F("Widmenweg");
        break;
    }
    case 334732:
    {
        returnValue = F("Widonenweg");
        break;
    }
    case 334733:
    {
        returnValue = F("Widostr.");
        break;
    }
    case 334734:
    {
        returnValue = F("Widukind-Str.");
        break;
    }
    case 334735:
    {
        returnValue = F("Widukindplatz");
        break;
    }
    case 334736:
    {
        returnValue = F("Widukindstr.");
        break;
    }
    case 334737:
    {
        returnValue = F("Widukindweg");
        break;
    }
    case 334738:
    {
        returnValue = F("Widum");
        break;
    }
    case 334739:
    {
        returnValue = F("Widumer Str.");
        break;
    }
    case 334740:
    {
        returnValue = F("Widumgasse");
        break;
    }
    case 334741:
    {
        returnValue = F("Widumring");
        break;
    }
    case 334742:
    {
        returnValue = F("Widumstr.");
        break;
    }
    case 334743:
    {
        returnValue = F("Widumweg");
        break;
    }
    case 334744:
    {
        returnValue = F("Widzel-Tom-Brook-Str.");
        break;
    }
    case 334745:
    {
        returnValue = F("Wiebach");
        break;
    }
    case 334746:
    {
        returnValue = F("Wiebachsgasse");
        break;
    }
    case 334747:
    {
        returnValue = F("Wiebachstr.");
        break;
    }
    case 334748:
    {
        returnValue = F("Wiebbecker Damm");
        break;
    }
    case 334749:
    {
        returnValue = F("Wiebche");
        break;
    }
    case 334750:
    {
        returnValue = F("Wiebecker Str.");
        break;
    }
    case 334751:
    {
        returnValue = F("Wiebeckplatz");
        break;
    }
    case 334752:
    {
        returnValue = F("Wiebeckstr.");
        break;
    }
    case 334753:
    {
        returnValue = F("Wiebehowe");
        break;
    }
    case 334754:
    {
        returnValue = F("Wiebeke-Kruse-Str.");
        break;
    }
    case 334755:
    {
        returnValue = F("Wiebelhausen");
        break;
    }
    case 334756:
    {
        returnValue = F("Wiebelhäuser Str.");
        break;
    }
    case 334757:
    {
        returnValue = F("Wiebelsbacher Str.");
        break;
    }
    case 334758:
    {
        returnValue = F("Wiebelsberger Str.");
        break;
    }
    case 334759:
    {
        returnValue = F("Wiebelsdorf");
        break;
    }
    case 334760:
    {
        returnValue = F("Wiebelsheidestr.");
        break;
    }
    case 334761:
    {
        returnValue = F("Wiebelsheim");
        break;
    }
    case 334762:
    {
        returnValue = F("Wiebelsheimer Str.");
        break;
    }
    case 334763:
    {
        returnValue = F("Wiebelsheu");
        break;
    }
    case 334764:
    {
        returnValue = F("Wiebelskircher Str.");
        break;
    }
    case 334765:
    {
        returnValue = F("Wiebelsteinweg");
        break;
    }
    case 334766:
    {
        returnValue = F("Wiebersgasse");
        break;
    }
    case 334767:
    {
        returnValue = F("Wiebertshof");
        break;
    }
    case 334768:
    {
        returnValue = F("Wiebesfeld");
        break;
    }
    case 334769:
    {
        returnValue = F("Wiebesiek");
        break;
    }
    case 334770:
    {
        returnValue = F("Wiebke-Kruse-Str.");
        break;
    }
    case 334771:
    {
        returnValue = F("Wiebkestr.");
        break;
    }
    case 334772:
    {
        returnValue = F("Wiebkeweg");
        break;
    }
    case 334773:
    {
        returnValue = F("Wieblinger Str.");
        break;
    }
    case 334774:
    {
        returnValue = F("Wieblinger Weg");
        break;
    }
    case 334775:
    {
        returnValue = F("Wieboldstr.");
        break;
    }
    case 334776:
    {
        returnValue = F("Wiebrechtshausen");
        break;
    }
    case 334777:
    {
        returnValue = F("Wiebrechtshäuser Str.");
        break;
    }
    case 334778:
    {
        returnValue = F("Wiebringhausstr.");
        break;
    }
    case 334779:
    {
        returnValue = F("Wiebrockweg");
        break;
    }
    case 334780:
    {
        returnValue = F("Wiebusch");
        break;
    }
    case 334781:
    {
        returnValue = F("Wiebüschen");
        break;
    }
    case 334782:
    {
        returnValue = F("Wiecheler Weg");
        break;
    }
    case 334783:
    {
        returnValue = F("Wiechelhornfeld");
        break;
    }
    case 334784:
    {
        returnValue = F("Wiecheln");
        break;
    }
    case 334785:
    {
        returnValue = F("Wiechelner Weg");
        break;
    }
    case 334786:
    {
        returnValue = F("Wiechenandgasse");
        break;
    }
    case 334787:
    {
        returnValue = F("Wiechendorfer Weg");
        break;
    }
    case 334788:
    {
        returnValue = F("Wiecheringweg");
        break;
    }
    case 334789:
    {
        returnValue = F("Wiechers Land");
        break;
    }
    case 334790:
    {
        returnValue = F("Wiechersweg");
        break;
    }
    case 334791:
    {
        returnValue = F("Wiechertstr.");
        break;
    }
    case 334792:
    {
        returnValue = F("Wiechertweg");
        break;
    }
    case 334793:
    {
        returnValue = F("Wiechmannsallee");
        break;
    }
    case 334794:
    {
        returnValue = F("Wiechser Str.");
        break;
    }
    case 334795:
    {
        returnValue = F("Wieck-Promenade");
        break;
    }
    case 334796:
    {
        returnValue = F("Wieckenberger Str.");
        break;
    }
    case 334797:
    {
        returnValue = F("Wieckenberger Weg");
        break;
    }
    case 334798:
    {
        returnValue = F("Wieckenbergweg");
        break;
    }
    case 334799:
    {
        returnValue = F("Wiecker Postweg");
        break;
    }
    case 334800:
    {
        returnValue = F("Wiecker Weg");
        break;
    }
    case 334801:
    {
        returnValue = F("Wiecker Wende");
        break;
    }
    case 334802:
    {
        returnValue = F("Wieckhorster Str.");
        break;
    }
    case 334803:
    {
        returnValue = F("Wieckmerther Weg");
        break;
    }
    case 334804:
    {
        returnValue = F("Wieckstr.");
        break;
    }
    case 334805:
    {
        returnValue = F("Wied");
        break;
    }
    case 334806:
    {
        returnValue = F("Wied-Runkel-Str.");
        break;
    }
    case 334807:
    {
        returnValue = F("Wiedacker");
        break;
    }
    case 334808:
    {
        returnValue = F("Wiedaer Str.");
        break;
    }
    case 334809:
    {
        returnValue = F("Wiedaschstr.");
        break;
    }
    case 334810:
    {
        returnValue = F("Wiedau");
        break;
    }
    case 334811:
    {
        returnValue = F("Wiedauer Weg");
        break;
    }
    case 334812:
    {
        returnValue = F("Wiedaustr.");
        break;
    }
    case 334813:
    {
        returnValue = F("Wiedbachstr.");
        break;
    }
    case 334814:
    {
        returnValue = F("Wiedblick");
        break;
    }
    case 334815:
    {
        returnValue = F("Wiedblickstr.");
        break;
    }
    case 334816:
    {
        returnValue = F("Wiedbusch");
        break;
    }
    case 334817:
    {
        returnValue = F("Wiedbüschenweg");
        break;
    }
    case 334818:
    {
        returnValue = F("Wiedeberger Weg");
        break;
    }
    case 334819:
    {
        returnValue = F("Wiedeblick");
        break;
    }
    case 334820:
    {
        returnValue = F("Wiedebrocksheide");
        break;
    }
    case 334821:
    {
        returnValue = F("Wiedebuschbreite");
        break;
    }
    case 334822:
    {
        returnValue = F("Wiedegasse");
        break;
    }
    case 334823:
    {
        returnValue = F("Wiedehopfstr.");
        break;
    }
    case 334824:
    {
        returnValue = F("Wiedehopfweg");
        break;
    }
    case 334825:
    {
        returnValue = F("Wiedehopp");
        break;
    }
    case 334826:
    {
        returnValue = F("Wiedekamp");
        break;
    }
    case 334827:
    {
        returnValue = F("Wiedekampstr.");
        break;
    }
    case 334828:
    {
        returnValue = F("Wiedel");
        break;
    }
    case 334829:
    {
        returnValue = F("Wiedelaher Str.");
        break;
    }
    case 334830:
    {
        returnValue = F("Wiedelhalde");
        break;
    }
    case 334831:
    {
        returnValue = F("Wiedelohweg");
        break;
    }
    case 334832:
    {
        returnValue = F("Wiedelskamp");
        break;
    }
    case 334833:
    {
        returnValue = F("Wiedelsweg");
        break;
    }
    case 334834:
    {
        returnValue = F("Wiedemanns Koppel");
        break;
    }
    case 334835:
    {
        returnValue = F("Wiedemannstr.");
        break;
    }
    case 334836:
    {
        returnValue = F("Wiedemannsweg");
        break;
    }
    case 334837:
    {
        returnValue = F("Wiedemannweg");
        break;
    }
    case 334838:
    {
        returnValue = F("Wiedemen");
        break;
    }
    case 334839:
    {
        returnValue = F("Wiedemenstr.");
        break;
    }
    case 334840:
    {
        returnValue = F("Wieden");
        break;
    }
    case 334841:
    {
        returnValue = F("Wiedenacker");
        break;
    }
    case 334842:
    {
        returnValue = F("Wiedenangerweg");
        break;
    }
    case 334843:
    {
        returnValue = F("Wiedenaustr.");
        break;
    }
    case 334844:
    {
        returnValue = F("Wiedenbach");
        break;
    }
    case 334845:
    {
        returnValue = F("Wiedenbachweg");
        break;
    }
    case 334846:
    {
        returnValue = F("Wiedenberger Weg");
        break;
    }
    case 334847:
    {
        returnValue = F("Wiedenbergweg");
        break;
    }
    case 334848:
    {
        returnValue = F("Wiedenbleek");
        break;
    }
    case 334849:
    {
        returnValue = F("Wiedenborstel");
        break;
    }
    case 334850:
    {
        returnValue = F("Wiedenbrede");
        break;
    }
    case 334851:
    {
        returnValue = F("Wiedenbruchstr.");
        break;
    }
    case 334852:
    {
        returnValue = F("Wiedenbrücker Str.");
        break;
    }
    case 334853:
    {
        returnValue = F("Wiedenbrücker Tor");
        break;
    }
    case 334854:
    {
        returnValue = F("Wiedenbrügger Str.");
        break;
    }
    case 334855:
    {
        returnValue = F("Wiedenbusk");
        break;
    }
    case 334856:
    {
        returnValue = F("Wiedendobelweg");
        break;
    }
    case 334857:
    {
        returnValue = F("Wiedener Str.");
        break;
    }
    case 334858:
    {
        returnValue = F("Wiedenester Blick");
        break;
    }
    case 334859:
    {
        returnValue = F("Wiedeneststr.");
        break;
    }
    case 334860:
    {
        returnValue = F("Wiedenfeld");
        break;
    }
    case 334861:
    {
        returnValue = F("Wiedenfelder Weg");
        break;
    }
    case 334862:
    {
        returnValue = F("Wiedenfeldgasse");
        break;
    }
    case 334863:
    {
        returnValue = F("Wiedenfeldstr.");
        break;
    }
    case 334864:
    {
        returnValue = F("Wiedenfläut");
        break;
    }
    case 334865:
    {
        returnValue = F("Wiedengasse");
        break;
    }
    case 334866:
    {
        returnValue = F("Wiedengrün");
        break;
    }
    case 334867:
    {
        returnValue = F("Wiedenhaldestr.");
        break;
    }
    case 334868:
    {
        returnValue = F("Wiedenhaufe");
        break;
    }
    case 334869:
    {
        returnValue = F("Wiedenhof");
        break;
    }
    case 334870:
    {
        returnValue = F("Wiedenhofen");
        break;
    }
    case 334871:
    {
        returnValue = F("Wiedenhofener Str.");
        break;
    }
    case 334872:
    {
        returnValue = F("Wiedenhofer Str.");
        break;
    }
    case 334873:
    {
        returnValue = F("Wiedenhoff");
        break;
    }
    case 334874:
    {
        returnValue = F("Wiedenhofkamp");
        break;
    }
    case 334875:
    {
        returnValue = F("Wiedenhofstr.");
        break;
    }
    case 334876:
    {
        returnValue = F("Wiedenhutweg");
        break;
    }
    case 334877:
    {
        returnValue = F("Wiedenkamp");
        break;
    }
    case 334878:
    {
        returnValue = F("Wiedenkamper Park");
        break;
    }
    case 334879:
    {
        returnValue = F("Wiedenkamper Str.");
        break;
    }
    case 334880:
    {
        returnValue = F("Wiedenlübbertsweg");
        break;
    }
    case 334881:
    {
        returnValue = F("Wiedenmayerstr.");
        break;
    }
    case 334882:
    {
        returnValue = F("Wiedenort");
        break;
    }
    case 334883:
    {
        returnValue = F("Wiedenroder Str.");
        break;
    }
    case 334884:
    {
        returnValue = F("Wiedenrothsweg");
        break;
    }
    case 334885:
    {
        returnValue = F("Wiedensahler Str.");
        break;
    }
    case 334886:
    {
        returnValue = F("Wiedenstr.");
        break;
    }
    case 334887:
    {
        returnValue = F("Wiedensähler Str.");
        break;
    }
    case 334888:
    {
        returnValue = F("Wiedent");
        break;
    }
    case 334889:
    {
        returnValue = F("Wiedenthal");
        break;
    }
    case 334890:
    {
        returnValue = F("Wiedenwaldweg");
        break;
    }
    case 334891:
    {
        returnValue = F("Wiedenweg");
        break;
    }
    case 334892:
    {
        returnValue = F("Wiedenwiese");
        break;
    }
    case 334893:
    {
        returnValue = F("Wiedenwiesen");
        break;
    }
    case 334894:
    {
        returnValue = F("Wiedenäcker");
        break;
    }
    case 334895:
    {
        returnValue = F("Wiedenäckerweg");
        break;
    }
    case 334896:
    {
        returnValue = F("Wiedepohl");
        break;
    }
    case 334897:
    {
        returnValue = F("Wiederauer Str.");
        break;
    }
    case 334898:
    {
        returnValue = F("Wiederauer Weg");
        break;
    }
    case 334899:
    {
        returnValue = F("Wiederaufbaustr.");
        break;
    }
    case 334900:
    {
        returnValue = F("Wiederbacher Winkel");
        break;
    }
    case 334901:
    {
        returnValue = F("Wiederberg");
        break;
    }
    case 334902:
    {
        returnValue = F("Wiederbergauf");
        break;
    }
    case 334903:
    {
        returnValue = F("Wiedergeltinger Str.");
        break;
    }
    case 334904:
    {
        returnValue = F("Wiedergrub");
        break;
    }
    case 334905:
    {
        returnValue = F("Wiedergrün");
        break;
    }
    case 334906:
    {
        returnValue = F("Wiederholdstr.");
        break;
    }
    case 334907:
    {
        returnValue = F("Wiederitzscher Str.");
        break;
    }
    case 334908:
    {
        returnValue = F("Wiederkehr");
        break;
    }
    case 334909:
    {
        returnValue = F("Wiederleiten");
        break;
    }
    case 334910:
    {
        returnValue = F("Wiederodaer Str.");
        break;
    }
    case 334911:
    {
        returnValue = F("Wiedersbacher Str.");
        break;
    }
    case 334912:
    {
        returnValue = F("Wiedersbacher Weg");
        break;
    }
    case 334913:
    {
        returnValue = F("Wiederspanweg");
        break;
    }
    case 334914:
    {
        returnValue = F("Wiedertäuferschneise");
        break;
    }
    case 334915:
    {
        returnValue = F("Wiederweg");
        break;
    }
    case 334916:
    {
        returnValue = F("Wiedestr.");
        break;
    }
    case 334917:
    {
        returnValue = F("Wiedetwiete");
        break;
    }
    case 334918:
    {
        returnValue = F("Wiedevenn");
        break;
    }
    case 334919:
    {
        returnValue = F("Wiedewies");
        break;
    }
    case 334920:
    {
        returnValue = F("Wiedeystr.");
        break;
    }
    case 334921:
    {
        returnValue = F("Wiedhagen");
        break;
    }
    case 334922:
    {
        returnValue = F("Wiedhof");
        break;
    }
    case 334923:
    {
        returnValue = F("Wiedhofstr.");
        break;
    }
    case 334924:
    {
        returnValue = F("Wiedholz");
        break;
    }
    case 334925:
    {
        returnValue = F("Wiedhoop");
        break;
    }
    case 334926:
    {
        returnValue = F("Wiedhöhe");
        break;
    }
    case 334927:
    {
        returnValue = F("Wiedhöhenstr.");
        break;
    }
    case 334928:
    {
        returnValue = F("Wiedichstr.");
        break;
    }
    case 334929:
    {
        returnValue = F("Wiedigsburg");
        break;
    }
    case 334930:
    {
        returnValue = F("Wiedigshof");
        break;
    }
    case 334931:
    {
        returnValue = F("Wiedigshofer Str.");
        break;
    }
    case 334932:
    {
        returnValue = F("Wiedigstr.");
        break;
    }
    case 334933:
    {
        returnValue = F("Wiedingen");
        break;
    }
    case 334934:
    {
        returnValue = F("Wiedinger Weg");
        break;
    }
    case 334935:
    {
        returnValue = F("Wiedingharder Weg");
        break;
    }
    case 334936:
    {
        returnValue = F("Wiedings Stegge");
        break;
    }
    case 334937:
    {
        returnValue = F("Wiedkamp");
        break;
    }
    case 334938:
    {
        returnValue = F("Wiedlemattenweg");
        break;
    }
    case 334939:
    {
        returnValue = F("Wiedlerweg");
        break;
    }
    case 334940:
    {
        returnValue = F("Wiedlestr.");
        break;
    }
    case 334941:
    {
        returnValue = F("Wiedlingäcker");
        break;
    }
    case 334942:
    {
        returnValue = F("Wiedmaierweg");
        break;
    }
    case 334943:
    {
        returnValue = F("Wiedmannsfelden");
        break;
    }
    case 334944:
    {
        returnValue = F("Wiedmannsried");
        break;
    }
    case 334945:
    {
        returnValue = F("Wiedmannstr.");
        break;
    }
    case 334946:
    {
        returnValue = F("Wiedmannsweg");
        break;
    }
    case 334947:
    {
        returnValue = F("Wiedmarer Str.");
        break;
    }
    case 334948:
    {
        returnValue = F("Wiedmenstr.");
        break;
    }
    case 334949:
    {
        returnValue = F("Wiedmochstr.");
        break;
    }
    case 334950:
    {
        returnValue = F("Wiedmoos");
        break;
    }
    case 334951:
    {
        returnValue = F("Wiednergasse");
        break;
    }
    case 334952:
    {
        returnValue = F("Wiednitzer Str.");
        break;
    }
    case 334953:
    {
        returnValue = F("Wiedock");
        break;
    }
    case 334954:
    {
        returnValue = F("Wiedortschneise");
        break;
    }
    case 334955:
    {
        returnValue = F("Wiedpfad");
        break;
    }
    case 334956:
    {
        returnValue = F("Wiedring");
        break;
    }
    case 334957:
    {
        returnValue = F("Wiedsoll");
        break;
    }
    case 334958:
    {
        returnValue = F("Wiedstr.");
        break;
    }
    case 334959:
    {
        returnValue = F("Wiedstruckweg");
        break;
    }
    case 334960:
    {
        returnValue = F("Wiedtalstr.");
        break;
    }
    case 334961:
    {
        returnValue = F("Wiedthalstr.");
        break;
    }
    case 334962:
    {
        returnValue = F("Wiedufer");
        break;
    }
    case 334963:
    {
        returnValue = F("Wieduferstr.");
        break;
    }
    case 334964:
    {
        returnValue = F("Wiedumgasse");
        break;
    }
    case 334965:
    {
        returnValue = F("Wiedweg");
        break;
    }
    case 334966:
    {
        returnValue = F("Wiedüppel");
        break;
    }
    case 334967:
    {
        returnValue = F("Wiefeldick");
        break;
    }
    case 334968:
    {
        returnValue = F("Wiefeldicker Str.");
        break;
    }
    case 334969:
    {
        returnValue = F("Wiefelsdorfer Str.");
        break;
    }
    case 334970:
    {
        returnValue = F("Wiefelser Str.");
        break;
    }
    case 334971:
    {
        returnValue = F("Wiefelsteder Grenzweg");
        break;
    }
    case 334972:
    {
        returnValue = F("Wiefelsteder Str.");
        break;
    }
    case 334973:
    {
        returnValue = F("Wiefelsteder Weg");
        break;
    }
    case 334974:
    {
        returnValue = F("Wieferigs Hof");
        break;
    }
    case 334975:
    {
        returnValue = F("Wiegand Weg");
        break;
    }
    case 334976:
    {
        returnValue = F("Wiegandsmühle");
        break;
    }
    case 334977:
    {
        returnValue = F("Wiegandstr.");
        break;
    }
    case 334978:
    {
        returnValue = F("Wiegartenweg");
        break;
    }
    case 334979:
    {
        returnValue = F("Wiegbold");
        break;
    }
    case 334980:
    {
        returnValue = F("Wiegegasse");
        break;
    }
    case 334981:
    {
        returnValue = F("Wiegelsweg");
        break;
    }
    case 334982:
    {
        returnValue = F("Wiegen");
        break;
    }
    case 334983:
    {
        returnValue = F("Wiegen-Park");
        break;
    }
    case 334984:
    {
        returnValue = F("Wiegenberg");
        break;
    }
    case 334985:
    {
        returnValue = F("Wiegendorfer Weg");
        break;
    }
    case 334986:
    {
        returnValue = F("Wiegenfeld");
        break;
    }
    case 334987:
    {
        returnValue = F("Wiegenfeldring");
        break;
    }
    case 334988:
    {
        returnValue = F("Wiegenfeldstr.");
        break;
    }
    case 334989:
    {
        returnValue = F("Wiegenfleck");
        break;
    }
    case 334990:
    {
        returnValue = F("Wiegenkamp");
        break;
    }
    case 334991:
    {
        returnValue = F("Wiegenrain");
        break;
    }
    case 334992:
    {
        returnValue = F("Wiegenstr.");
        break;
    }
    case 334993:
    {
        returnValue = F("Wiegentalweg");
        break;
    }
    case 334994:
    {
        returnValue = F("Wiegenäckerweg");
        break;
    }
    case 334995:
    {
        returnValue = F("Wiegerser Str.");
        break;
    }
    case 334996:
    {
        returnValue = F("Wiegerstr.");
        break;
    }
    case 334997:
    {
        returnValue = F("Wiegersweg");
        break;
    }
    case 334998:
    {
        returnValue = F("Wiegings Weide");
        break;
    }
    case 334999:
    {
        returnValue = F("Wiegkammerstr.");
        break;
    }
    case 335000:
    {
        returnValue = F("Wiegleber Str.");
        break;
    }
    case 335001:
    {
        returnValue = F("Wiegleber Weg");
        break;
    }
    case 335002:
    {
        returnValue = F("Wiegmanns Weg");
        break;
    }
    case 335003:
    {
        returnValue = F("Wiegmannstr.");
        break;
    }
    case 335004:
    {
        returnValue = F("Wiegnerstr.");
        break;
    }
    case 335005:
    {
        returnValue = F("Wiegrainer Weg");
        break;
    }
    case 335006:
    {
        returnValue = F("Wieh");
        break;
    }
    case 335007:
    {
        returnValue = F("Wiehagen");
        break;
    }
    case 335008:
    {
        returnValue = F("Wiehagener Str.");
        break;
    }
    case 335009:
    {
        returnValue = F("Wiehbachtal");
        break;
    }
    case 335010:
    {
        returnValue = F("Wiehdweg");
        break;
    }
    case 335011:
    {
        returnValue = F("Wiehebad");
        break;
    }
    case 335012:
    {
        returnValue = F("Wieheberg");
        break;
    }
    case 335013:
    {
        returnValue = F("Wiehebüschenweg");
        break;
    }
    case 335014:
    {
        returnValue = F("Wieheholz");
        break;
    }
    case 335015:
    {
        returnValue = F("Wieheholzer Str.");
        break;
    }
    case 335016:
    {
        returnValue = F("Wieheholzer Weg");
        break;
    }
    case 335017:
    {
        returnValue = F("Wiehekamp");
        break;
    }
    case 335018:
    {
        returnValue = F("Wiehenberg");
        break;
    }
    case 335019:
    {
        returnValue = F("Wiehengebirgsstr.");
        break;
    }
    case 335020:
    {
        returnValue = F("Wiehengebirgsweg");
        break;
    }
    case 335021:
    {
        returnValue = F("Wiehenkamp");
        break;
    }
    case 335022:
    {
        returnValue = F("Wiehenkämpen");
        break;
    }
    case 335023:
    {
        returnValue = F("Wiehenredder");
        break;
    }
    case 335024:
    {
        returnValue = F("Wiehenstr.");
        break;
    }
    case 335025:
    {
        returnValue = F("Wiehenweg");
        break;
    }
    case 335026:
    {
        returnValue = F("Wieher Eschweg");
        break;
    }
    case 335027:
    {
        returnValue = F("Wieher Kirchweg");
        break;
    }
    case 335028:
    {
        returnValue = F("Wiehesche Str.");
        break;
    }
    case 335029:
    {
        returnValue = F("Wieheweg");
        break;
    }
    case 335030:
    {
        returnValue = F("Wiehl");
        break;
    }
    case 335031:
    {
        returnValue = F("Wiehlblick");
        break;
    }
    case 335032:
    {
        returnValue = F("Wiehler Str.");
        break;
    }
    case 335033:
    {
        returnValue = F("Wiehlerweg");
        break;
    }
    case 335034:
    {
        returnValue = F("Wiehlmündener Höhe");
        break;
    }
    case 335035:
    {
        returnValue = F("Wiehlpuhl");
        break;
    }
    case 335036:
    {
        returnValue = F("Wiehlsiefen");
        break;
    }
    case 335037:
    {
        returnValue = F("Wiehlsiefener Str.");
        break;
    }
    case 335038:
    {
        returnValue = F("Wiehlstr.");
        break;
    }
    case 335039:
    {
        returnValue = F("Wiehnbachstr.");
        break;
    }
    case 335040:
    {
        returnValue = F("Wiehnhusen");
        break;
    }
    case 335041:
    {
        returnValue = F("Wiehoffstr.");
        break;
    }
    case 335042:
    {
        returnValue = F("Wiehrstr.");
        break;
    }
    case 335043:
    {
        returnValue = F("Wiehtfeld");
        break;
    }
    case 335044:
    {
        returnValue = F("Wiehweg");
        break;
    }
    case 335045:
    {
        returnValue = F("Wiehäger Weg");
        break;
    }
    case 335046:
    {
        returnValue = F("Wiek links");
        break;
    }
    case 335047:
    {
        returnValue = F("Wiek rechts");
        break;
    }
    case 335048:
    {
        returnValue = F("Wieke");
        break;
    }
    case 335049:
    {
        returnValue = F("Wieke Nord");
        break;
    }
    case 335050:
    {
        returnValue = F("Wieke Süd");
        break;
    }
    case 335051:
    {
        returnValue = F("Wiekenbergstr.");
        break;
    }
    case 335052:
    {
        returnValue = F("Wiekend");
        break;
    }
    case 335053:
    {
        returnValue = F("Wiekenstr.");
        break;
    }
    case 335054:
    {
        returnValue = F("Wiekenweg");
        break;
    }
    case 335055:
    {
        returnValue = F("Wieker Berg");
        break;
    }
    case 335056:
    {
        returnValue = F("Wieker Str.");
        break;
    }
    case 335057:
    {
        returnValue = F("Wieker Weg");
        break;
    }
    case 335058:
    {
        returnValue = F("Wiekertweg");
        break;
    }
    case 335059:
    {
        returnValue = F("Wiekesch");
        break;
    }
    case 335060:
    {
        returnValue = F("Wiekhorner Heuweg");
        break;
    }
    case 335061:
    {
        returnValue = F("Wiekier Acker");
        break;
    }
    case 335062:
    {
        returnValue = F("Wiekriede");
        break;
    }
    case 335063:
    {
        returnValue = F("Wieksbergstr.");
        break;
    }
    case 335064:
    {
        returnValue = F("Wiekstr.");
        break;
    }
    case 335065:
    {
        returnValue = F("Wieksweg");
        break;
    }
    case 335066:
    {
        returnValue = F("Wiekäckernstr.");
        break;
    }
    case 335067:
    {
        returnValue = F("Wiel");
        break;
    }
    case 335068:
    {
        returnValue = F("Wieladingen");
        break;
    }
    case 335069:
    {
        returnValue = F("Wieladinger Str.");
        break;
    }
    case 335070:
    {
        returnValue = F("Wielage");
        break;
    }
    case 335071:
    {
        returnValue = F("Wieland-Wagner-Str.");
        break;
    }
    case 335072:
    {
        returnValue = F("Wielandhof");
        break;
    }
    case 335073:
    {
        returnValue = F("Wielandpark");
        break;
    }
    case 335074:
    {
        returnValue = F("Wielandplatz");
        break;
    }
    case 335075:
    {
        returnValue = F("Wielandrückenweg");
        break;
    }
    case 335076:
    {
        returnValue = F("Wielandsteinweg");
        break;
    }
    case 335077:
    {
        returnValue = F("Wielandstr.");
        break;
    }
    case 335078:
    {
        returnValue = F("Wielandsweg");
        break;
    }
    case 335079:
    {
        returnValue = F("Wielandswiese");
        break;
    }
    case 335080:
    {
        returnValue = F("Wielandtstr.");
        break;
    }
    case 335081:
    {
        returnValue = F("Wielandweg");
        break;
    }
    case 335082:
    {
        returnValue = F("Wielazhofen");
        break;
    }
    case 335083:
    {
        returnValue = F("Wielen");
        break;
    }
    case 335084:
    {
        returnValue = F("Wielenbacher Str.");
        break;
    }
    case 335085:
    {
        returnValue = F("Wielenbachstr.");
        break;
    }
    case 335086:
    {
        returnValue = F("Wielener Str.");
        break;
    }
    case 335087:
    {
        returnValue = F("Wielenweg");
        break;
    }
    case 335088:
    {
        returnValue = F("Wielersbenden");
        break;
    }
    case 335089:
    {
        returnValue = F("Wielhagen");
        break;
    }
    case 335090:
    {
        returnValue = F("Wielinger Kämpe");
        break;
    }
    case 335091:
    {
        returnValue = F("Wielinger Str.");
        break;
    }
    case 335092:
    {
        returnValue = F("Wielohweg");
        break;
    }
    case 335093:
    {
        returnValue = F("Wielpützer Str.");
        break;
    }
    case 335094:
    {
        returnValue = F("Wielsiepen");
        break;
    }
    case 335095:
    {
        returnValue = F("Wielstr.");
        break;
    }
    case 335096:
    {
        returnValue = F("Wieltdamm");
        break;
    }
    case 335097:
    {
        returnValue = F("Wiemann-Bispinck-Weg");
        break;
    }
    case 335098:
    {
        returnValue = F("Wiemanns Hof");
        break;
    }
    case 335099:
    {
        returnValue = F("Wiemanns Holt");
        break;
    }
    case 335100:
    {
        returnValue = F("Wiemanns Weg");
        break;
    }
    case 335101:
    {
        returnValue = F("Wiemannstr.");
        break;
    }
    case 335102:
    {
        returnValue = F("Wiemannsweg");
        break;
    }
    case 335103:
    {
        returnValue = F("Wiemark");
        break;
    }
    case 335104:
    {
        returnValue = F("Wiembachallee");
        break;
    }
    case 335105:
    {
        returnValue = F("Wiembecker Str.");
        break;
    }
    case 335106:
    {
        returnValue = F("Wiembeksweg");
        break;
    }
    case 335107:
    {
        returnValue = F("Wiemecker Feld");
        break;
    }
    case 335108:
    {
        returnValue = F("Wiemecker Str.");
        break;
    }
    case 335109:
    {
        returnValue = F("Wiemelfeldstr.");
        break;
    }
    case 335110:
    {
        returnValue = F("Wiemer");
        break;
    }
    case 335111:
    {
        returnValue = F("Wiemer Pfad");
        break;
    }
    case 335112:
    {
        returnValue = F("Wiemerhofstr.");
        break;
    }
    case 335113:
    {
        returnValue = F("Wiemersdorfer Weg");
        break;
    }
    case 335114:
    {
        returnValue = F("Wiemerskamper Weg");
        break;
    }
    case 335115:
    {
        returnValue = F("Wiemerslager Str.");
        break;
    }
    case 335116:
    {
        returnValue = F("Wiemerslande");
        break;
    }
    case 335117:
    {
        returnValue = F("Wiemerstr.");
        break;
    }
    case 335118:
    {
        returnValue = F("Wiemerswinkel");
        break;
    }
    case 335119:
    {
        returnValue = F("Wiemerweg");
        break;
    }
    case 335120:
    {
        returnValue = F("Wiemeshütte");
        break;
    }
    case 335121:
    {
        returnValue = F("Wiemespfad");
        break;
    }
    case 335122:
    {
        returnValue = F("Wiemestr.");
        break;
    }
    case 335123:
    {
        returnValue = F("Wiemhof");
        break;
    }
    case 335124:
    {
        returnValue = F("Wiemholzweg");
        break;
    }
    case 335125:
    {
        returnValue = F("Wiemkenkamp");
        break;
    }
    case 335126:
    {
        returnValue = F("Wiemkenstr.");
        break;
    }
    case 335127:
    {
        returnValue = F("Wiemker Weg");
        break;
    }
    case 335128:
    {
        returnValue = F("Wiemlake");
        break;
    }
    case 335129:
    {
        returnValue = F("Wiemsdorfer Burweg");
        break;
    }
    case 335130:
    {
        returnValue = F("Wiemstr.");
        break;
    }
    case 335131:
    {
        returnValue = F("Wienacker");
        break;
    }
    case 335132:
    {
        returnValue = F("Wienackerstr.");
        break;
    }
    case 335133:
    {
        returnValue = F("Wienandstr.");
        break;
    }
    case 335134:
    {
        returnValue = F("Wienauer Kirchweg");
        break;
    }
    case 335135:
    {
        returnValue = F("Wienbachstr.");
        break;
    }
    case 335136:
    {
        returnValue = F("Wienbeck");
        break;
    }
    case 335137:
    {
        returnValue = F("Wienbeckwinkel");
        break;
    }
    case 335138:
    {
        returnValue = F("Wienberg");
        break;
    }
    case 335139:
    {
        returnValue = F("Wienbergshof");
        break;
    }
    case 335140:
    {
        returnValue = F("Wienbergstr.");
        break;
    }
    case 335141:
    {
        returnValue = F("Wienbergweg");
        break;
    }
    case 335142:
    {
        returnValue = F("Wienbrede");
        break;
    }
    case 335143:
    {
        returnValue = F("Wienbuscher Weg");
        break;
    }
    case 335144:
    {
        returnValue = F("Wiendorfer Birkenweg");
        break;
    }
    case 335145:
    {
        returnValue = F("Wiendorfer Str.");
        break;
    }
    case 335146:
    {
        returnValue = F("Wiendorfer Weg");
        break;
    }
    case 335147:
    {
        returnValue = F("Wiene");
        break;
    }
    case 335148:
    {
        returnValue = F("Wienebusch");
        break;
    }
    case 335149:
    {
        returnValue = F("Wienenbuschstr.");
        break;
    }
    case 335150:
    {
        returnValue = F("Wienenfeldstr.");
        break;
    }
    case 335151:
    {
        returnValue = F("Wienenweg");
        break;
    }
    case 335152:
    {
        returnValue = F("Wiener Allee");
        break;
    }
    case 335153:
    {
        returnValue = F("Wiener Eck");
        break;
    }
    case 335154:
    {
        returnValue = F("Wiener Neustädter Str.");
        break;
    }
    case 335155:
    {
        returnValue = F("Wiener Platz");
        break;
    }
    case 335156:
    {
        returnValue = F("Wiener Ring");
        break;
    }
    case 335157:
    {
        returnValue = F("Wiener Str.");
        break;
    }
    case 335158:
    {
        returnValue = F("Wiener Weg");
        break;
    }
    case 335159:
    {
        returnValue = F("Wienerberger Str.");
        break;
    }
    case 335160:
    {
        returnValue = F("Wienerstr.");
        break;
    }
    case 335161:
    {
        returnValue = F("Wienertal");
        break;
    }
    case 335162:
    {
        returnValue = F("Wienfeld");
        break;
    }
    case 335163:
    {
        returnValue = F("Wiengasse");
        break;
    }
    case 335164:
    {
        returnValue = F("Wienhellerweg");
        break;
    }
    case 335165:
    {
        returnValue = F("Wienhofstr.");
        break;
    }
    case 335166:
    {
        returnValue = F("Wienhäuser Str.");
        break;
    }
    case 335167:
    {
        returnValue = F("Wienhörsterbach");
        break;
    }
    case 335168:
    {
        returnValue = F("Wieningen");
        break;
    }
    case 335169:
    {
        returnValue = F("Wieninger Str.");
        break;
    }
    case 335170:
    {
        returnValue = F("Wieningerstr.");
        break;
    }
    case 335171:
    {
        returnValue = F("Wienkamp");
        break;
    }
    case 335172:
    {
        returnValue = F("Wienkamp rechts");
        break;
    }
    case 335173:
    {
        returnValue = F("Wienkampstr.");
        break;
    }
    case 335174:
    {
        returnValue = F("Wienkampsweg");
        break;
    }
    case 335175:
    {
        returnValue = F("Wienkenredder");
        break;
    }
    case 335176:
    {
        returnValue = F("Wienkensfeld");
        break;
    }
    case 335177:
    {
        returnValue = F("Wienkerskamp");
        break;
    }
    case 335178:
    {
        returnValue = F("Wienkestr.");
        break;
    }
    case 335179:
    {
        returnValue = F("Wienkeweg");
        break;
    }
    case 335180:
    {
        returnValue = F("Wienkoopstr.");
        break;
    }
    case 335181:
    {
        returnValue = F("Wienlandsweg");
        break;
    }
    case 335182:
    {
        returnValue = F("Wienröder Str.");
        break;
    }
    case 335183:
    {
        returnValue = F("Wiensberg");
        break;
    }
    case 335184:
    {
        returnValue = F("Wienschenke");
        break;
    }
    case 335185:
    {
        returnValue = F("Wienser Str.");
        break;
    }
    case 335186:
    {
        returnValue = F("Wienshop");
        break;
    }
    case 335187:
    {
        returnValue = F("Wiensieker Weg");
        break;
    }
    case 335188:
    {
        returnValue = F("Wienstede");
        break;
    }
    case 335189:
    {
        returnValue = F("Wienstück");
        break;
    }
    case 335190:
    {
        returnValue = F("Wiensüke");
        break;
    }
    case 335191:
    {
        returnValue = F("Wienweg");
        break;
    }
    case 335192:
    {
        returnValue = F("Wiepelnbusch");
        break;
    }
    case 335193:
    {
        returnValue = F("Wiepen Acker");
        break;
    }
    case 335194:
    {
        returnValue = F("Wiepenkathener Str.");
        break;
    }
    case 335195:
    {
        returnValue = F("Wiepersdorfer Str.");
        break;
    }
    case 335196:
    {
        returnValue = F("Wiepersdorfer Weg");
        break;
    }
    case 335197:
    {
        returnValue = F("Wiepkenhäger Str.");
        break;
    }
    case 335198:
    {
        returnValue = F("Wieprechtstr.");
        break;
    }
    case 335199:
    {
        returnValue = F("Wiepurgstr.");
        break;
    }
    case 335200:
    {
        returnValue = F("Wieraer Weg");
        break;
    }
    case 335201:
    {
        returnValue = F("Wieragrundkreisel");
        break;
    }
    case 335202:
    {
        returnValue = F("Wieragrundstr.");
        break;
    }
    case 335203:
    {
        returnValue = F("Wierastr.");
        break;
    }
    case 335204:
    {
        returnValue = F("Wierborn");
        break;
    }
    case 335205:
    {
        returnValue = F("Wierborner Allee");
        break;
    }
    case 335206:
    {
        returnValue = F("Wierdener Patt");
        break;
    }
    case 335207:
    {
        returnValue = F("Wierdener Str.");
        break;
    }
    case 335208:
    {
        returnValue = F("Wierdenstr.");
        break;
    }
    case 335209:
    {
        returnValue = F("Wieren");
        break;
    }
    case 335210:
    {
        returnValue = F("Wierener Str.");
        break;
    }
    case 335211:
    {
        returnValue = F("Wierener Weg");
        break;
    }
    case 335212:
    {
        returnValue = F("Wierigsdorf");
        break;
    }
    case 335213:
    {
        returnValue = F("Wierigsweg");
        break;
    }
    case 335214:
    {
        returnValue = F("Wieringastr.");
        break;
    }
    case 335215:
    {
        returnValue = F("Wieringer Str.");
        break;
    }
    case 335216:
    {
        returnValue = F("Wieringsen");
        break;
    }
    case 335217:
    {
        returnValue = F("Wierlauker Weg");
        break;
    }
    case 335218:
    {
        returnValue = F("Wierling");
        break;
    }
    case 335219:
    {
        returnValue = F("Wierlings Busch");
        break;
    }
    case 335220:
    {
        returnValue = F("Wierlingstr.");
        break;
    }
    case 335221:
    {
        returnValue = F("Wierlingsweg");
        break;
    }
    case 335222:
    {
        returnValue = F("Wierlweg");
        break;
    }
    case 335223:
    {
        returnValue = F("Wiernsheimer Str.");
        break;
    }
    case 335224:
    {
        returnValue = F("Wiernsheimer Weg");
        break;
    }
    case 335225:
    {
        returnValue = F("Wierschemer Str.");
        break;
    }
    case 335226:
    {
        returnValue = F("Wierschemer Weg");
        break;
    }
    case 335227:
    {
        returnValue = F("Wiersdorfer Kamp");
        break;
    }
    case 335228:
    {
        returnValue = F("Wiersdorfer Str.");
        break;
    }
    case 335229:
    {
        returnValue = F("Wiersener Str.");
        break;
    }
    case 335230:
    {
        returnValue = F("Wierser Landwehr");
        break;
    }
    case 335231:
    {
        returnValue = F("Wiershoper Weg");
        break;
    }
    case 335232:
    {
        returnValue = F("Wiershäuser Str.");
        break;
    }
    case 335233:
    {
        returnValue = F("Wiershäuser Weg");
        break;
    }
    case 335234:
    {
        returnValue = F("Wierstraetweg");
        break;
    }
    case 335235:
    {
        returnValue = F("Wiersweg");
        break;
    }
    case 335236:
    {
        returnValue = F("Wierth");
        break;
    }
    case 335237:
    {
        returnValue = F("Wierther Str.");
        break;
    }
    case 335238:
    {
        returnValue = F("Wiertzweg");
        break;
    }
    case 335239:
    {
        returnValue = F("Wies");
        break;
    }
    case 335240:
    {
        returnValue = F("Wies'chenstr.");
        break;
    }
    case 335241:
    {
        returnValue = F("Wiesach");
        break;
    }
    case 335242:
    {
        returnValue = F("Wiesachweg");
        break;
    }
    case 335243:
    {
        returnValue = F("Wiesacker");
        break;
    }
    case 335244:
    {
        returnValue = F("Wiesackerstr.");
        break;
    }
    case 335245:
    {
        returnValue = F("Wiesaer Flügel");
        break;
    }
    case 335246:
    {
        returnValue = F("Wiesaer Str.");
        break;
    }
    case 335247:
    {
        returnValue = F("Wiesallee");
        break;
    }
    case 335248:
    {
        returnValue = F("Wiesandstr.");
        break;
    }
    case 335249:
    {
        returnValue = F("Wiesangerweg");
        break;
    }
    case 335250:
    {
        returnValue = F("Wiesauer Str.");
        break;
    }
    case 335251:
    {
        returnValue = F("Wiesaztalweg");
        break;
    }
    case 335252:
    {
        returnValue = F("Wiesbach");
        break;
    }
    case 335253:
    {
        returnValue = F("Wiesbacher Str.");
        break;
    }
    case 335254:
    {
        returnValue = F("Wiesbachstr.");
        break;
    }
    case 335255:
    {
        returnValue = F("Wiesbachweg");
        break;
    }
    case 335256:
    {
        returnValue = F("Wiesbadener Platz");
        break;
    }
    case 335257:
    {
        returnValue = F("Wiesbadener Ring");
        break;
    }
    case 335258:
    {
        returnValue = F("Wiesbadener Str.");
        break;
    }
    case 335259:
    {
        returnValue = F("Wiesbadener Weg");
        break;
    }
    case 335260:
    {
        returnValue = F("Wiesbauerfeld");
        break;
    }
    case 335261:
    {
        returnValue = F("Wiesbauerstr.");
        break;
    }
    case 335262:
    {
        returnValue = F("Wiesbaumer Str.");
        break;
    }
    case 335263:
    {
        returnValue = F("Wiesbaumer Wies");
        break;
    }
    case 335264:
    {
        returnValue = F("Wiesberg");
        break;
    }
    case 335265:
    {
        returnValue = F("Wiesbergstr.");
        break;
    }
    case 335266:
    {
        returnValue = F("Wiesbodenweg");
        break;
    }
    case 335267:
    {
        returnValue = F("Wiesborn");
        break;
    }
    case 335268:
    {
        returnValue = F("Wiesbruchweg");
        break;
    }
    case 335269:
    {
        returnValue = F("Wiesbrunnenstr.");
        break;
    }
    case 335270:
    {
        returnValue = F("Wiesbrunnenweg");
        break;
    }
    case 335271:
    {
        returnValue = F("Wiesbrücke");
        break;
    }
    case 335272:
    {
        returnValue = F("Wiesch");
        break;
    }
    case 335273:
    {
        returnValue = F("Wieschebrink");
        break;
    }
    case 335274:
    {
        returnValue = F("Wieschebrinkweg");
        break;
    }
    case 335275:
    {
        returnValue = F("Wiescheider Str.");
        break;
    }
    case 335276:
    {
        returnValue = F("Wieschenbeck");
        break;
    }
    case 335277:
    {
        returnValue = F("Wieschendorfer Str.");
        break;
    }
    case 335278:
    {
        returnValue = F("Wiescher Hof");
        break;
    }
    case 335279:
    {
        returnValue = F("Wiescher Weg");
        break;
    }
    case 335280:
    {
        returnValue = F("Wiescherstr.");
        break;
    }
    case 335281:
    {
        returnValue = F("Wieschhof");
        break;
    }
    case 335282:
    {
        returnValue = F("Wiesdorfer Platz");
        break;
    }
    case 335283:
    {
        returnValue = F("Wiese");
        break;
    }
    case 335284:
    {
        returnValue = F("Wiese in Schneeberg");
        break;
    }
    case 335285:
    {
        returnValue = F("Wieseckau");
        break;
    }
    case 335286:
    {
        returnValue = F("Wiesecker Weg");
        break;
    }
    case 335287:
    {
        returnValue = F("Wieseckstr.");
        break;
    }
    case 335288:
    {
        returnValue = F("Wiesedemeerer Hauptstr.");
        break;
    }
    case 335289:
    {
        returnValue = F("Wieseder Dorfstr.");
        break;
    }
    case 335290:
    {
        returnValue = F("Wieseder Feldweg");
        break;
    }
    case 335291:
    {
        returnValue = F("Wieseder Grenzweg");
        break;
    }
    case 335292:
    {
        returnValue = F("Wieseder Str.");
        break;
    }
    case 335293:
    {
        returnValue = F("Wiesedermeerer Birkenweg");
        break;
    }
    case 335294:
    {
        returnValue = F("Wiesedermeerer Birkhahnweg");
        break;
    }
    case 335295:
    {
        returnValue = F("Wiesedermeerer Kanalweg");
        break;
    }
    case 335296:
    {
        returnValue = F("Wieselacker");
        break;
    }
    case 335297:
    {
        returnValue = F("Wieselbacher Weg");
        break;
    }
    case 335298:
    {
        returnValue = F("Wieselborner Weg");
        break;
    }
    case 335299:
    {
        returnValue = F("Wieselbrunnen");
        break;
    }
    case 335300:
    {
        returnValue = F("Wieseleck");
        break;
    }
    case 335301:
    {
        returnValue = F("Wieselesweg");
        break;
    }
    case 335302:
    {
        returnValue = F("Wieselgang");
        break;
    }
    case 335303:
    {
        returnValue = F("Wieselgasse");
        break;
    }
    case 335304:
    {
        returnValue = F("Wieselgraben");
        break;
    }
    case 335305:
    {
        returnValue = F("Wieselhecke");
        break;
    }
    case 335306:
    {
        returnValue = F("Wieselhof");
        break;
    }
    case 335307:
    {
        returnValue = F("Wieselkamp");
        break;
    }
    case 335308:
    {
        returnValue = F("Wieselkiez");
        break;
    }
    case 335309:
    {
        returnValue = F("Wieselpad");
        break;
    }
    case 335310:
    {
        returnValue = F("Wieselpaß");
        break;
    }
    case 335311:
    {
        returnValue = F("Wieselpfad");
        break;
    }
    case 335312:
    {
        returnValue = F("Wieselplatz");
        break;
    }
    case 335313:
    {
        returnValue = F("Wieselrieth");
        break;
    }
    case 335314:
    {
        returnValue = F("Wieselring");
        break;
    }
    case 335315:
    {
        returnValue = F("Wieselsbachweg");
        break;
    }
    case 335316:
    {
        returnValue = F("Wieselsberg");
        break;
    }
    case 335317:
    {
        returnValue = F("Wieselsberger Weg");
        break;
    }
    case 335318:
    {
        returnValue = F("Wieselsbergstr.");
        break;
    }
    case 335319:
    {
        returnValue = F("Wieselsmaar");
        break;
    }
    case 335320:
    {
        returnValue = F("Wieselsteg");
        break;
    }
    case 335321:
    {
        returnValue = F("Wieselsteig");
        break;
    }
    case 335322:
    {
        returnValue = F("Wieselstieg");
        break;
    }
    case 335323:
    {
        returnValue = F("Wieselstr.");
        break;
    }
    case 335324:
    {
        returnValue = F("Wieselweg");
        break;
    }
    case 335325:
    {
        returnValue = F("Wiesemauer");
        break;
    }
    case 335326:
    {
        returnValue = F("Wiesen");
        break;
    }
    case 335327:
    {
        returnValue = F("Wiesen Schneise");
        break;
    }
    case 335328:
    {
        returnValue = F("Wiesen-Weg (Glücksweg)");
        break;
    }
    case 335329:
    {
        returnValue = F("Wiesenacker");
        break;
    }
    case 335330:
    {
        returnValue = F("Wiesenackerweg");
        break;
    }
    case 335331:
    {
        returnValue = F("Wiesenanger");
        break;
    }
    case 335332:
    {
        returnValue = F("Wiesenangerweg");
        break;
    }
    case 335333:
    {
        returnValue = F("Wiesenau");
        break;
    }
    case 335334:
    {
        returnValue = F("Wiesenaue");
        break;
    }
    case 335335:
    {
        returnValue = F("Wiesenauel");
        break;
    }
    case 335336:
    {
        returnValue = F("Wiesenauer Str.");
        break;
    }
    case 335337:
    {
        returnValue = F("Wiesenauweg");
        break;
    }
    case 335338:
    {
        returnValue = F("Wiesenbach");
        break;
    }
    case 335339:
    {
        returnValue = F("Wiesenbachbrücke");
        break;
    }
    case 335340:
    {
        returnValue = F("Wiesenbacher Landstr.");
        break;
    }
    case 335341:
    {
        returnValue = F("Wiesenbacher Str.");
        break;
    }
    case 335342:
    {
        returnValue = F("Wiesenbacher Weg");
        break;
    }
    case 335343:
    {
        returnValue = F("Wiesenbachstr.");
        break;
    }
    case 335344:
    {
        returnValue = F("Wiesenbader Str.");
        break;
    }
    case 335345:
    {
        returnValue = F("Wiesenbader Weg");
        break;
    }
    case 335346:
    {
        returnValue = F("Wiesenbektalstr.");
        break;
    }
    case 335347:
    {
        returnValue = F("Wiesenberg");
        break;
    }
    case 335348:
    {
        returnValue = F("Wiesenberger Ring");
        break;
    }
    case 335349:
    {
        returnValue = F("Wiesenbergstr.");
        break;
    }
    case 335350:
    {
        returnValue = F("Wiesenbergweg");
        break;
    }
    case 335351:
    {
        returnValue = F("Wiesenbinder");
        break;
    }
    case 335352:
    {
        returnValue = F("Wiesenblack");
        break;
    }
    case 335353:
    {
        returnValue = F("Wiesenblick");
        break;
    }
    case 335354:
    {
        returnValue = F("Wiesenblumenweg");
        break;
    }
    case 335355:
    {
        returnValue = F("Wiesenblättchen");
        break;
    }
    case 335356:
    {
        returnValue = F("Wiesenbogen");
        break;
    }
    case 335357:
    {
        returnValue = F("Wiesenbogenweg");
        break;
    }
    case 335358:
    {
        returnValue = F("Wiesenborn");
        break;
    }
    case 335359:
    {
        returnValue = F("Wiesenbornstr.");
        break;
    }
    case 335360:
    {
        returnValue = F("Wiesenbornweg");
        break;
    }
    case 335361:
    {
        returnValue = F("Wiesenbrede");
        break;
    }
    case 335362:
    {
        returnValue = F("Wiesenbreite");
        break;
    }
    case 335363:
    {
        returnValue = F("Wiesenbreitenweg");
        break;
    }
    case 335364:
    {
        returnValue = F("Wiesenbrink");
        break;
    }
    case 335365:
    {
        returnValue = F("Wiesenbronner Str.");
        break;
    }
    case 335366:
    {
        returnValue = F("Wiesenbrook");
        break;
    }
    case 335367:
    {
        returnValue = F("Wiesenbruch");
        break;
    }
    case 335368:
    {
        returnValue = F("Wiesenbruchstr.");
        break;
    }
    case 335369:
    {
        returnValue = F("Wiesenbrunnen");
        break;
    }
    case 335370:
    {
        returnValue = F("Wiesenbrücke");
        break;
    }
    case 335371:
    {
        returnValue = F("Wiesenbrüterweg");
        break;
    }
    case 335372:
    {
        returnValue = F("Wiesenburg");
        break;
    }
    case 335373:
    {
        returnValue = F("Wiesenburger Str.");
        break;
    }
    case 335374:
    {
        returnValue = F("Wiesenburger Weg");
        break;
    }
    case 335375:
    {
        returnValue = F("Wiesenbusch");
        break;
    }
    case 335376:
    {
        returnValue = F("Wiesenbühl");
        break;
    }
    case 335377:
    {
        returnValue = F("Wiesendamm");
        break;
    }
    case 335378:
    {
        returnValue = F("Wiesendangerweg");
        break;
    }
    case 335379:
    {
        returnValue = F("Wiesendellstr.");
        break;
    }
    case 335380:
    {
        returnValue = F("Wiesendorf");
        break;
    }
    case 335381:
    {
        returnValue = F("Wiesendorf-Siedlung");
        break;
    }
    case 335382:
    {
        returnValue = F("Wiesendorfstr.");
        break;
    }
    case 335383:
    {
        returnValue = F("Wieseneck");
        break;
    }
    case 335384:
    {
        returnValue = F("Wieseneckerstr.");
        break;
    }
    case 335385:
    {
        returnValue = F("Wiesenenaer Str.");
        break;
    }
    case 335386:
    {
        returnValue = F("Wiesener Meedenweg");
        break;
    }
    case 335387:
    {
        returnValue = F("Wiesener Str.");
        break;
    }
    case 335388:
    {
        returnValue = F("Wiesener Weg");
        break;
    }
    case 335389:
    {
        returnValue = F("Wiesenerskamp");
        break;
    }
    case 335390:
    {
        returnValue = F("Wiesenfeld");
        break;
    }
    case 335391:
    {
        returnValue = F("Wiesenfeldener Str.");
        break;
    }
    case 335392:
    {
        returnValue = F("Wiesenfelder Str.");
        break;
    }
    case 335393:
    {
        returnValue = F("Wiesenfelder Weg");
        break;
    }
    case 335394:
    {
        returnValue = F("Wiesenfeldstr.");
        break;
    }
    case 335395:
    {
        returnValue = F("Wiesenfeldweg");
        break;
    }
    case 335396:
    {
        returnValue = F("Wiesenfestplatz");
        break;
    }
    case 335397:
    {
        returnValue = F("Wiesenfeststeig");
        break;
    }
    case 335398:
    {
        returnValue = F("Wiesenfichtenweg");
        break;
    }
    case 335399:
    {
        returnValue = F("Wiesenfleck");
        break;
    }
    case 335400:
    {
        returnValue = F("Wiesenflecklein");
        break;
    }
    case 335401:
    {
        returnValue = F("Wiesenflurweg");
        break;
    }
    case 335402:
    {
        returnValue = F("Wiesenfurt");
        break;
    }
    case 335403:
    {
        returnValue = F("Wiesengang");
        break;
    }
    case 335404:
    {
        returnValue = F("Wiesengarten");
        break;
    }
    case 335405:
    {
        returnValue = F("Wiesengartenweg");
        break;
    }
    case 335406:
    {
        returnValue = F("Wiesengasse");
        break;
    }
    case 335407:
    {
        returnValue = F("Wiesengewannweg");
        break;
    }
    case 335408:
    {
        returnValue = F("Wiesengraben");
        break;
    }
    case 335409:
    {
        returnValue = F("Wiesengrasweg");
        break;
    }
    case 335410:
    {
        returnValue = F("Wiesengrund");
        break;
    }
    case 335411:
    {
        returnValue = F("Wiesengrund-Weg");
        break;
    }
    case 335412:
    {
        returnValue = F("Wiesengrundpark");
        break;
    }
    case 335413:
    {
        returnValue = F("Wiesengrundstr.");
        break;
    }
    case 335414:
    {
        returnValue = F("Wiesengrundweg");
        break;
    }
    case 335415:
    {
        returnValue = F("Wiesengärten");
        break;
    }
    case 335416:
    {
        returnValue = F("Wiesengärtenweg");
        break;
    }
    case 335417:
    {
        returnValue = F("Wiesengässle");
        break;
    }
    case 335418:
    {
        returnValue = F("Wiesengäßchen");
        break;
    }
    case 335419:
    {
        returnValue = F("Wiesengäßlein");
        break;
    }
    case 335420:
    {
        returnValue = F("Wiesenhaferstr.");
        break;
    }
    case 335421:
    {
        returnValue = F("Wiesenhaidstr.");
        break;
    }
    case 335422:
    {
        returnValue = F("Wiesenhain");
        break;
    }
    case 335423:
    {
        returnValue = F("Wiesenhalde");
        break;
    }
    case 335424:
    {
        returnValue = F("Wiesenhaldenweg");
        break;
    }
    case 335425:
    {
        returnValue = F("Wiesenhang");
        break;
    }
    case 335426:
    {
        returnValue = F("Wiesenhausen");
        break;
    }
    case 335427:
    {
        returnValue = F("Wiesenhausweg");
        break;
    }
    case 335428:
    {
        returnValue = F("Wiesenheegstr.");
        break;
    }
    case 335429:
    {
        returnValue = F("Wiesenhof");
        break;
    }
    case 335430:
    {
        returnValue = F("Wiesenhofener Str.");
        break;
    }
    case 335431:
    {
        returnValue = F("Wiesenhofring");
        break;
    }
    case 335432:
    {
        returnValue = F("Wiesenhofstr.");
        break;
    }
    case 335433:
    {
        returnValue = F("Wiesenhofweg");
        break;
    }
    case 335434:
    {
        returnValue = F("Wiesenhäuser");
        break;
    }
    case 335435:
    {
        returnValue = F("Wiesenhäuser Weg");
        break;
    }
    case 335436:
    {
        returnValue = F("Wiesenhöfe");
        break;
    }
    case 335437:
    {
        returnValue = F("Wiesenhöh");
        break;
    }
    case 335438:
    {
        returnValue = F("Wiesenhöhenweg");
        break;
    }
    case 335439:
    {
        returnValue = F("Wiesenhölzle");
        break;
    }
    case 335440:
    {
        returnValue = F("Wiesenhörn");
        break;
    }
    case 335441:
    {
        returnValue = F("Wiesenich");
        break;
    }
    case 335442:
    {
        returnValue = F("Wiesenkamp");
        break;
    }
    case 335443:
    {
        returnValue = F("Wiesenkampstr.");
        break;
    }
    case 335444:
    {
        returnValue = F("Wiesenkehre");
        break;
    }
    case 335445:
    {
        returnValue = F("Wiesenkelter");
        break;
    }
    case 335446:
    {
        returnValue = F("Wiesenklee");
        break;
    }
    case 335447:
    {
        returnValue = F("Wiesenkleering");
        break;
    }
    case 335448:
    {
        returnValue = F("Wiesenknopfweg");
        break;
    }
    case 335449:
    {
        returnValue = F("Wiesenkoppe");
        break;
    }
    case 335450:
    {
        returnValue = F("Wiesenkoppel");
        break;
    }
    case 335451:
    {
        returnValue = F("Wiesenkoppelkamp");
        break;
    }
    case 335452:
    {
        returnValue = F("Wiesenkrog");
        break;
    }
    case 335453:
    {
        returnValue = F("Wiesenkämpe");
        break;
    }
    case 335454:
    {
        returnValue = F("Wiesenleite");
        break;
    }
    case 335455:
    {
        returnValue = F("Wiesenleiten");
        break;
    }
    case 335456:
    {
        returnValue = F("Wiesenloch");
        break;
    }
    case 335457:
    {
        returnValue = F("Wiesenlängen");
        break;
    }
    case 335458:
    {
        returnValue = F("Wiesenlücke");
        break;
    }
    case 335459:
    {
        returnValue = F("Wiesenlückenweg");
        break;
    }
    case 335460:
    {
        returnValue = F("Wiesenmaschweg");
        break;
    }
    case 335461:
    {
        returnValue = F("Wiesenmauer");
        break;
    }
    case 335462:
    {
        returnValue = F("Wiesenmoorstr.");
        break;
    }
    case 335463:
    {
        returnValue = F("Wiesenmühle");
        break;
    }
    case 335464:
    {
        returnValue = F("Wiesenmühlenstr.");
        break;
    }
    case 335465:
    {
        returnValue = F("Wiesenmühlenweg");
        break;
    }
    case 335466:
    {
        returnValue = F("Wiesenmühlweg");
        break;
    }
    case 335467:
    {
        returnValue = F("Wiesenpark");
        break;
    }
    case 335468:
    {
        returnValue = F("Wiesenpfad");
        break;
    }
    case 335469:
    {
        returnValue = F("Wiesenpieper Ring");
        break;
    }
    case 335470:
    {
        returnValue = F("Wiesenpieperweg");
        break;
    }
    case 335471:
    {
        returnValue = F("Wiesenplatz");
        break;
    }
    case 335472:
    {
        returnValue = F("Wiesenplätz");
        break;
    }
    case 335473:
    {
        returnValue = F("Wiesenpromenade");
        break;
    }
    case 335474:
    {
        returnValue = F("Wiesenpromenade West");
        break;
    }
    case 335475:
    {
        returnValue = F("Wiesenrain");
        break;
    }
    case 335476:
    {
        returnValue = F("Wiesenrainsgarten");
        break;
    }
    case 335477:
    {
        returnValue = F("Wiesenrainstr.");
        break;
    }
    case 335478:
    {
        returnValue = F("Wiesenrainweg");
        break;
    }
    case 335479:
    {
        returnValue = F("Wiesenrandweg");
        break;
    }
    case 335480:
    {
        returnValue = F("Wiesenredder");
        break;
    }
    case 335481:
    {
        returnValue = F("Wiesenreihe");
        break;
    }
    case 335482:
    {
        returnValue = F("Wiesenring");
        break;
    }
    case 335483:
    {
        returnValue = F("Wiesenschlag");
        break;
    }
    case 335484:
    {
        returnValue = F("Wiesenschneese");
        break;
    }
    case 335485:
    {
        returnValue = F("Wiesenschneise");
        break;
    }
    case 335486:
    {
        returnValue = F("Wiesenser Str.");
        break;
    }
    case 335487:
    {
        returnValue = F("Wiesenser Weg");
        break;
    }
    case 335488:
    {
        returnValue = F("Wiesensiedlung");
        break;
    }
    case 335489:
    {
        returnValue = F("Wiesensteg");
        break;
    }
    case 335490:
    {
        returnValue = F("Wiesensteig");
        break;
    }
    case 335491:
    {
        returnValue = F("Wiesensteige");
        break;
    }
    case 335492:
    {
        returnValue = F("Wiesensteiger Steig");
        break;
    }
    case 335493:
    {
        returnValue = F("Wiesensteiger Str.");
        break;
    }
    case 335494:
    {
        returnValue = F("Wiesensteiger Weg");
        break;
    }
    case 335495:
    {
        returnValue = F("Wiesensteighof");
        break;
    }
    case 335496:
    {
        returnValue = F("Wiesensteigle");
        break;
    }
    case 335497:
    {
        returnValue = F("Wiesenstein");
        break;
    }
    case 335498:
    {
        returnValue = F("Wiesensteinigweg");
        break;
    }
    case 335499:
    {
        returnValue = F("Wiesenstetter Str.");
        break;
    }
    case 335500:
    {
        returnValue = F("Wiesenstieg");
        break;
    }
    case 335501:
    {
        returnValue = F("Wiesenstr.");
        break;
    }
    case 335502:
    {
        returnValue = F("Wiesenstrauch");
        break;
    }
    case 335503:
    {
        returnValue = F("Wiesenstriegel");
        break;
    }
    case 335504:
    {
        returnValue = F("Wiesensumpfweg");
        break;
    }
    case 335505:
    {
        returnValue = F("Wiesensüß");
        break;
    }
    case 335506:
    {
        returnValue = F("Wiesental");
        break;
    }
    case 335507:
    {
        returnValue = F("Wiesental-Schneise");
        break;
    }
    case 335508:
    {
        returnValue = F("Wiesentaler Str.");
        break;
    }
    case 335509:
    {
        returnValue = F("Wiesentaler Weg");
        break;
    }
    case 335510:
    {
        returnValue = F("Wiesentalgraben");
        break;
    }
    case 335511:
    {
        returnValue = F("Wiesentalgrasweg");
        break;
    }
    case 335512:
    {
        returnValue = F("Wiesentalstr.");
        break;
    }
    case 335513:
    {
        returnValue = F("Wiesentalweg");
        break;
    }
    case 335514:
    {
        returnValue = F("Wiesenteich");
        break;
    }
    case 335515:
    {
        returnValue = F("Wiesenteiler");
        break;
    }
    case 335516:
    {
        returnValue = F("Wiesenthal");
        break;
    }
    case 335517:
    {
        returnValue = F("Wiesenthaler Str.");
        break;
    }
    case 335518:
    {
        returnValue = F("Wiesenthaler Weg");
        break;
    }
    case 335519:
    {
        returnValue = F("Wiesenthalstr.");
        break;
    }
    case 335520:
    {
        returnValue = F("Wiesenthauer Weg");
        break;
    }
    case 335521:
    {
        returnValue = F("Wiesenthaustr.");
        break;
    }
    case 335522:
    {
        returnValue = F("Wiesentheider Str.");
        break;
    }
    case 335523:
    {
        returnValue = F("Wiesentoft");
        break;
    }
    case 335524:
    {
        returnValue = F("Wiesentor");
        break;
    }
    case 335525:
    {
        returnValue = F("Wiesentorstr.");
        break;
    }
    case 335526:
    {
        returnValue = F("Wiesentstr.");
        break;
    }
    case 335527:
    {
        returnValue = F("Wiesentweg");
        break;
    }
    case 335528:
    {
        returnValue = F("Wiesentürle");
        break;
    }
    case 335529:
    {
        returnValue = F("Wiesenufer");
        break;
    }
    case 335530:
    {
        returnValue = F("Wiesenwaldstr.");
        break;
    }
    case 335531:
    {
        returnValue = F("Wiesenweg");
        break;
    }
    case 335532:
    {
        returnValue = F("Wiesenweg (KM)");
        break;
    }
    case 335533:
    {
        returnValue = F("Wiesenweg 1-4");
        break;
    }
    case 335534:
    {
        returnValue = F("Wiesenweg Falkenhagen");
        break;
    }
    case 335535:
    {
        returnValue = F("Wiesenweg Wilmersdorf");
        break;
    }
    case 335536:
    {
        returnValue = F("Wiesenweg im Sailergrund");
        break;
    }
    case 335537:
    {
        returnValue = F("Wiesenweg-Brücke");
        break;
    }
    case 335538:
    {
        returnValue = F("Wiesenwegle");
        break;
    }
    case 335539:
    {
        returnValue = F("Wiesenwegstr.");
        break;
    }
    case 335540:
    {
        returnValue = F("Wiesenweingärtenweg");
        break;
    }
    case 335541:
    {
        returnValue = F("Wiesenwinkel");
        break;
    }
    case 335542:
    {
        returnValue = F("Wiesenzahl");
        break;
    }
    case 335543:
    {
        returnValue = F("Wiesenzart");
        break;
    }
    case 335544:
    {
        returnValue = F("Wiesenzeile");
        break;
    }
    case 335545:
    {
        returnValue = F("Wiesenzugangsweg");
        break;
    }
    case 335546:
    {
        returnValue = F("Wiesenäcker");
        break;
    }
    case 335547:
    {
        returnValue = F("Wiesenäckerstr.");
        break;
    }
    case 335548:
    {
        returnValue = F("Wiesenäckerweg");
        break;
    }
    case 335549:
    {
        returnValue = F("Wieser Str.");
        break;
    }
    case 335550:
    {
        returnValue = F("Wieser Weg");
        break;
    }
    case 335551:
    {
        returnValue = F("Wieserebeneweg");
        break;
    }
    case 335552:
    {
        returnValue = F("Wiesertsweiler");
        break;
    }
    case 335553:
    {
        returnValue = F("Wieserweg");
        break;
    }
    case 335554:
    {
        returnValue = F("Wiesestr.");
        break;
    }
    case 335555:
    {
        returnValue = F("Wieset");
        break;
    }
    case 335556:
    {
        returnValue = F("Wiesether Str.");
        break;
    }
    case 335557:
    {
        returnValue = F("Wiesethgrund");
        break;
    }
    case 335558:
    {
        returnValue = F("Wiesethstr.");
        break;
    }
    case 335559:
    {
        returnValue = F("Wiesewitzer Platz");
        break;
    }
    case 335560:
    {
        returnValue = F("Wiesfeld");
        break;
    }
    case 335561:
    {
        returnValue = F("Wiesfeldstr.");
        break;
    }
    case 335562:
    {
        returnValue = F("Wiesfeldweg");
        break;
    }
    case 335563:
    {
        returnValue = F("Wiesfleck");
        break;
    }
    case 335564:
    {
        returnValue = F("Wiesflecken");
        break;
    }
    case 335565:
    {
        returnValue = F("Wiesfleckenstr.");
        break;
    }
    case 335566:
    {
        returnValue = F("Wiesfleckenweg");
        break;
    }
    case 335567:
    {
        returnValue = F("Wiesfleckweg");
        break;
    }
    case 335568:
    {
        returnValue = F("Wiesfurthstr.");
        break;
    }
    case 335569:
    {
        returnValue = F("Wiesgarten");
        break;
    }
    case 335570:
    {
        returnValue = F("Wiesgartenstr.");
        break;
    }
    case 335571:
    {
        returnValue = F("Wiesgartenweg");
        break;
    }
    case 335572:
    {
        returnValue = F("Wiesgasse");
        break;
    }
    case 335573:
    {
        returnValue = F("Wiesgehrenweg");
        break;
    }
    case 335574:
    {
        returnValue = F("Wiesgen");
        break;
    }
    case 335575:
    {
        returnValue = F("Wiesgenstr.");
        break;
    }
    case 335576:
    {
        returnValue = F("Wiesgrabenweg");
        break;
    }
    case 335577:
    {
        returnValue = F("Wiesgrund");
        break;
    }
    case 335578:
    {
        returnValue = F("Wiesgrundweg");
        break;
    }
    case 335579:
    {
        returnValue = F("Wiesgärten");
        break;
    }
    case 335580:
    {
        returnValue = F("Wiesgärtenstr.");
        break;
    }
    case 335581:
    {
        returnValue = F("Wiesgäßchen");
        break;
    }
    case 335582:
    {
        returnValue = F("Wiesharder Str.");
        break;
    }
    case 335583:
    {
        returnValue = F("Wiesheckstr.");
        break;
    }
    case 335584:
    {
        returnValue = F("Wieshof");
        break;
    }
    case 335585:
    {
        returnValue = F("Wieshofstr.");
        break;
    }
    case 335586:
    {
        returnValue = F("Wieshofweg");
        break;
    }
    case 335587:
    {
        returnValue = F("Wiesholzer Str.");
        break;
    }
    case 335588:
    {
        returnValue = F("Wiesholzweg");
        break;
    }
    case 335589:
    {
        returnValue = F("Wieshop");
        break;
    }
    case 335590:
    {
        returnValue = F("Wieshuberstr.");
        break;
    }
    case 335591:
    {
        returnValue = F("Wieshöfer Str.");
        break;
    }
    case 335592:
    {
        returnValue = F("Wiesigk");
        break;
    }
    case 335593:
    {
        returnValue = F("Wiesing");
        break;
    }
    case 335594:
    {
        returnValue = F("Wiesinger Str.");
        break;
    }
    case 335595:
    {
        returnValue = F("Wiesings Garten");
        break;
    }
    case 335596:
    {
        returnValue = F("Wiesk");
        break;
    }
    case 335597:
    {
        returnValue = F("Wieskamp");
        break;
    }
    case 335598:
    {
        returnValue = F("Wieskauer Str.");
        break;
    }
    case 335599:
    {
        returnValue = F("Wieskebrook");
        break;
    }
    case 335600:
    {
        returnValue = F("Wiesken");
        break;
    }
    case 335601:
    {
        returnValue = F("Wieskesholde");
        break;
    }
    case 335602:
    {
        returnValue = F("Wieskirchenstr.");
        break;
    }
    case 335603:
    {
        returnValue = F("Wieskopfweg");
        break;
    }
    case 335604:
    {
        returnValue = F("Wieskuhl");
        break;
    }
    case 335605:
    {
        returnValue = F("Wieslaufhaldenweg");
        break;
    }
    case 335606:
    {
        returnValue = F("Wieslaufstr.");
        break;
    }
    case 335607:
    {
        returnValue = F("Wieslaufsträßchen");
        break;
    }
    case 335608:
    {
        returnValue = F("Wieslauftalstr.");
        break;
    }
    case 335609:
    {
        returnValue = F("Wieslaufweg");
        break;
    }
    case 335610:
    {
        returnValue = F("Wieslauterstr.");
        break;
    }
    case 335611:
    {
        returnValue = F("Wieslauterweg");
        break;
    }
    case 335612:
    {
        returnValue = F("Wiesle");
        break;
    }
    case 335613:
    {
        returnValue = F("Wiesleinweg");
        break;
    }
    case 335614:
    {
        returnValue = F("Wieslensdorfer Str.");
        break;
    }
    case 335615:
    {
        returnValue = F("Wieslenshauweg");
        break;
    }
    case 335616:
    {
        returnValue = F("Wieslenstr.");
        break;
    }
    case 335617:
    {
        returnValue = F("Wiesleshauweg");
        break;
    }
    case 335618:
    {
        returnValue = F("Wieslestr.");
        break;
    }
    case 335619:
    {
        returnValue = F("Wieslesweg");
        break;
    }
    case 335620:
    {
        returnValue = F("Wiesleter Str.");
        break;
    }
    case 335621:
    {
        returnValue = F("Wiesleutener Str.");
        break;
    }
    case 335622:
    {
        returnValue = F("Wiesleweg");
        break;
    }
    case 335623:
    {
        returnValue = F("Wieslhuberstr.");
        break;
    }
    case 335624:
    {
        returnValue = F("Wiesling");
        break;
    }
    case 335625:
    {
        returnValue = F("Wieslinger Weg");
        break;
    }
    case 335626:
    {
        returnValue = F("Wieslocher Str.");
        break;
    }
    case 335627:
    {
        returnValue = F("Wieslocher Weg");
        break;
    }
    case 335628:
    {
        returnValue = F("Wieslochsackweg");
        break;
    }
    case 335629:
    {
        returnValue = F("Wieslochweg");
        break;
    }
    case 335630:
    {
        returnValue = F("Wiesmahdstr.");
        break;
    }
    case 335631:
    {
        returnValue = F("Wiesmahdweg (Kappel)");
        break;
    }
    case 335632:
    {
        returnValue = F("Wiesmann's Weg");
        break;
    }
    case 335633:
    {
        returnValue = F("Wiesmannshof");
        break;
    }
    case 335634:
    {
        returnValue = F("Wiesmannstr.");
        break;
    }
    case 335635:
    {
        returnValue = F("Wiesmannsweg");
        break;
    }
    case 335636:
    {
        returnValue = F("Wiesmannweg");
        break;
    }
    case 335637:
    {
        returnValue = F("Wiesmeierweg");
        break;
    }
    case 335638:
    {
        returnValue = F("Wiesmoorer Str.");
        break;
    }
    case 335639:
    {
        returnValue = F("Wiesmoorer Weg");
        break;
    }
    case 335640:
    {
        returnValue = F("Wiesmoorweg");
        break;
    }
    case 335641:
    {
        returnValue = F("Wiesmühl");
        break;
    }
    case 335642:
    {
        returnValue = F("Wiesmühle");
        break;
    }
    case 335643:
    {
        returnValue = F("Wiesmühlenweg");
        break;
    }
    case 335644:
    {
        returnValue = F("Wiesmühler Str.");
        break;
    }
    case 335645:
    {
        returnValue = F("Wiesmühlstr.");
        break;
    }
    case 335646:
    {
        returnValue = F("Wiesmühlweg");
        break;
    }
    case 335647:
    {
        returnValue = F("Wiesmüllerweg");
        break;
    }
    case 335648:
    {
        returnValue = F("Wiesneckstr.");
        break;
    }
    case 335649:
    {
        returnValue = F("Wiesnergasse");
        break;
    }
    case 335650:
    {
        returnValue = F("Wiesnerstr.");
        break;
    }
    case 335651:
    {
        returnValue = F("Wiesoppenheimer Str.");
        break;
    }
    case 335652:
    {
        returnValue = F("Wiesplätz");
        break;
    }
    case 335653:
    {
        returnValue = F("Wiesplätzchen");
        break;
    }
    case 335654:
    {
        returnValue = F("Wiesseer Str.");
        break;
    }
    case 335655:
    {
        returnValue = F("Wiesstr.");
        break;
    }
    case 335656:
    {
        returnValue = F("Wiestalstr.");
        break;
    }
    case 335657:
    {
        returnValue = F("Wiestalweg");
        break;
    }
    case 335658:
    {
        returnValue = F("Wiester Str.");
        break;
    }
    case 335659:
    {
        returnValue = F("Wiestering");
        break;
    }
    case 335660:
    {
        returnValue = F("Wiesteweg");
        break;
    }
    case 335661:
    {
        returnValue = F("Wiesthaler Str.");
        break;
    }
    case 335662:
    {
        returnValue = F("Wiesthaler Weg");
        break;
    }
    case 335663:
    {
        returnValue = F("Wiestorstr.");
        break;
    }
    case 335664:
    {
        returnValue = F("Wieststr.");
        break;
    }
    case 335665:
    {
        returnValue = F("Wieswannenstr.");
        break;
    }
    case 335666:
    {
        returnValue = F("Wiesweg");
        break;
    }
    case 335667:
    {
        returnValue = F("Wiesweiher");
        break;
    }
    case 335668:
    {
        returnValue = F("Wiesweiherweg");
        break;
    }
    case 335669:
    {
        returnValue = F("Wiesweiler");
        break;
    }
    case 335670:
    {
        returnValue = F("Wieswässerweg");
        break;
    }
    case 335671:
    {
        returnValue = F("Wiesäcker");
        break;
    }
    case 335672:
    {
        returnValue = F("Wiesäckerstr.");
        break;
    }
    case 335673:
    {
        returnValue = F("Wiesäckerweg");
        break;
    }
    case 335674:
    {
        returnValue = F("Wietacker");
        break;
    }
    case 335675:
    {
        returnValue = F("Wietackerweg");
        break;
    }
    case 335676:
    {
        returnValue = F("Wietbrauk");
        break;
    }
    case 335677:
    {
        returnValue = F("Wietbrede");
        break;
    }
    case 335678:
    {
        returnValue = F("Wietbusch");
        break;
    }
    case 335679:
    {
        returnValue = F("Wietelbrink");
        break;
    }
    case 335680:
    {
        returnValue = F("Wietelbülte");
        break;
    }
    case 335681:
    {
        returnValue = F("Wieteleck");
        break;
    }
    case 335682:
    {
        returnValue = F("Wietels Kamp");
        break;
    }
    case 335683:
    {
        returnValue = F("Wietensholz");
        break;
    }
    case 335684:
    {
        returnValue = F("Wieterallee");
        break;
    }
    case 335685:
    {
        returnValue = F("Wieterblick");
        break;
    }
    case 335686:
    {
        returnValue = F("Wieterfeld");
        break;
    }
    case 335687:
    {
        returnValue = F("Wietersheimer Str.");
        break;
    }
    case 335688:
    {
        returnValue = F("Wietersheimstr.");
        break;
    }
    case 335689:
    {
        returnValue = F("Wieterstr.");
        break;
    }
    case 335690:
    {
        returnValue = F("Wieteschstr.");
        break;
    }
    case 335691:
    {
        returnValue = F("Wietfelder Str.");
        break;
    }
    case 335692:
    {
        returnValue = F("Wietfelder Weg");
        break;
    }
    case 335693:
    {
        returnValue = F("Wietfeldstr.");
        break;
    }
    case 335694:
    {
        returnValue = F("Wietföhr");
        break;
    }
    case 335695:
    {
        returnValue = F("Wiethagen");
        break;
    }
    case 335696:
    {
        returnValue = F("Wiethagenstr.");
        break;
    }
    case 335697:
    {
        returnValue = F("Wiethagenweg");
        break;
    }
    case 335698:
    {
        returnValue = F("Wietheimer Str.");
        break;
    }
    case 335699:
    {
        returnValue = F("Wietheimer Weg");
        break;
    }
    case 335700:
    {
        returnValue = F("Wiethfelder Str.");
        break;
    }
    case 335701:
    {
        returnValue = F("Wiethmarstr.");
        break;
    }
    case 335702:
    {
        returnValue = F("Wiethofstr.");
        break;
    }
    case 335703:
    {
        returnValue = F("Wiethold-Schubert-Str.");
        break;
    }
    case 335704:
    {
        returnValue = F("Wietholds Stiege");
        break;
    }
    case 335705:
    {
        returnValue = F("Wietholt");
        break;
    }
    case 335706:
    {
        returnValue = F("Wietholz");
        break;
    }
    case 335707:
    {
        returnValue = F("Wietholzgasse");
        break;
    }
    case 335708:
    {
        returnValue = F("Wiethoop");
        break;
    }
    case 335709:
    {
        returnValue = F("Wiethop");
        break;
    }
    case 335710:
    {
        returnValue = F("Wiethops Kamp");
        break;
    }
    case 335711:
    {
        returnValue = F("Wiethorngärten");
        break;
    }
    case 335712:
    {
        returnValue = F("Wiethornskamp");
        break;
    }
    case 335713:
    {
        returnValue = F("Wiethweg");
        break;
    }
    case 335714:
    {
        returnValue = F("Wiethäger Schneise");
        break;
    }
    case 335715:
    {
        returnValue = F("Wiethäger Str.");
        break;
    }
    case 335716:
    {
        returnValue = F("Wiethöpen");
        break;
    }
    case 335717:
    {
        returnValue = F("Wietinghäuser Moorweg");
        break;
    }
    case 335718:
    {
        returnValue = F("Wietinghäuser Weg");
        break;
    }
    case 335719:
    {
        returnValue = F("Wietingstr.");
        break;
    }
    case 335720:
    {
        returnValue = F("Wietingsweg");
        break;
    }
    case 335721:
    {
        returnValue = F("Wietkamp");
        break;
    }
    case 335722:
    {
        returnValue = F("Wietkampstr.");
        break;
    }
    case 335723:
    {
        returnValue = F("Wietkampsweg");
        break;
    }
    case 335724:
    {
        returnValue = F("Wietkiekenweg");
        break;
    }
    case 335725:
    {
        returnValue = F("Wietlakenweg");
        break;
    }
    case 335726:
    {
        returnValue = F("Wietmarscher Damm");
        break;
    }
    case 335727:
    {
        returnValue = F("Wietmarscher Str.");
        break;
    }
    case 335728:
    {
        returnValue = F("Wietow");
        break;
    }
    case 335729:
    {
        returnValue = F("Wietrege");
        break;
    }
    case 335730:
    {
        returnValue = F("Wietrogsweg");
        break;
    }
    case 335731:
    {
        returnValue = F("Wietsahlsweg");
        break;
    }
    case 335732:
    {
        returnValue = F("Wietsbergen");
        break;
    }
    case 335733:
    {
        returnValue = F("Wietschke");
        break;
    }
    case 335734:
    {
        returnValue = F("Wietsollweg");
        break;
    }
    case 335735:
    {
        returnValue = F("Wietstocker Dorfstr.");
        break;
    }
    case 335736:
    {
        returnValue = F("Wietstocker Str.");
        break;
    }
    case 335737:
    {
        returnValue = F("Wietstocker Weg");
        break;
    }
    case 335738:
    {
        returnValue = F("Wietstruk");
        break;
    }
    case 335739:
    {
        returnValue = F("Wietze-Aue");
        break;
    }
    case 335740:
    {
        returnValue = F("Wietzeaue");
        break;
    }
    case 335741:
    {
        returnValue = F("Wietzegraben");
        break;
    }
    case 335742:
    {
        returnValue = F("Wietzegrund");
        break;
    }
    case 335743:
    {
        returnValue = F("Wietzendorf");
        break;
    }
    case 335744:
    {
        returnValue = F("Wietzendorfer Str.");
        break;
    }
    case 335745:
    {
        returnValue = F("Wietzendorfer Weg");
        break;
    }
    case 335746:
    {
        returnValue = F("Wietzepark");
        break;
    }
    case 335747:
    {
        returnValue = F("Wietzer Feld");
        break;
    }
    case 335748:
    {
        returnValue = F("Wietzer Str.");
        break;
    }
    case 335749:
    {
        returnValue = F("Wietzer Weg");
        break;
    }
    case 335750:
    {
        returnValue = F("Wietzerberg");
        break;
    }
    case 335751:
    {
        returnValue = F("Wietzering");
        break;
    }
    case 335752:
    {
        returnValue = F("Wietzow");
        break;
    }
    case 335753:
    {
        returnValue = F("Wievenesch");
        break;
    }
    case 335754:
    {
        returnValue = F("Wiewisch");
        break;
    }
    case 335755:
    {
        returnValue = F("Wiewohler Weg");
        break;
    }
    case 335756:
    {
        returnValue = F("Wiezerweg");
        break;
    }
    case 335757:
    {
        returnValue = F("Wiffertshauser Str.");
        break;
    }
    case 335758:
    {
        returnValue = F("Wiflinger Str.");
        break;
    }
    case 335759:
    {
        returnValue = F("Wiflingshauser Str.");
        break;
    }
    case 335760:
    {
        returnValue = F("Wiflingstr.");
        break;
    }
    case 335761:
    {
        returnValue = F("Wifostr.");
        break;
    }
    case 335762:
    {
        returnValue = F("Wigand - Lüst - Weg");
        break;
    }
    case 335763:
    {
        returnValue = F("Wigandstr.");
        break;
    }
    case 335764:
    {
        returnValue = F("Wiganstr.");
        break;
    }
    case 335765:
    {
        returnValue = F("Wigardstr.");
        break;
    }
    case 335766:
    {
        returnValue = F("Wigbert-Platz");
        break;
    }
    case 335767:
    {
        returnValue = F("Wigbertstr.");
        break;
    }
    case 335768:
    {
        returnValue = F("Wigbold-von-Holte-Str.");
        break;
    }
    case 335769:
    {
        returnValue = F("Wigboldstr.");
        break;
    }
    case 335770:
    {
        returnValue = F("Wigerleinweg");
        break;
    }
    case 335771:
    {
        returnValue = F("Wigersheimstr.");
        break;
    }
    case 335772:
    {
        returnValue = F("Wigeystr.");
        break;
    }
    case 335773:
    {
        returnValue = F("Wiggenbergstr.");
        break;
    }
    case 335774:
    {
        returnValue = F("Wiggenbreite");
        break;
    }
    case 335775:
    {
        returnValue = F("Wiggenbrink");
        break;
    }
    case 335776:
    {
        returnValue = F("Wiggengrundweg");
        break;
    }
    case 335777:
    {
        returnValue = F("Wiggenhauser Weg");
        break;
    }
    case 335778:
    {
        returnValue = F("Wiggenhornweg");
        break;
    }
    case 335779:
    {
        returnValue = F("Wiggenscheid");
        break;
    }
    case 335780:
    {
        returnValue = F("Wigger Str.");
        break;
    }
    case 335781:
    {
        returnValue = F("Wiggerhof");
        break;
    }
    case 335782:
    {
        returnValue = F("Wiggeringhausen");
        break;
    }
    case 335783:
    {
        returnValue = F("Wiggeringhauser Str.");
        break;
    }
    case 335784:
    {
        returnValue = F("Wiggermannstr.");
        break;
    }
    case 335785:
    {
        returnValue = F("Wiggers");
        break;
    }
    case 335786:
    {
        returnValue = F("Wiggerskamp");
        break;
    }
    case 335787:
    {
        returnValue = F("Wiggerstr.");
        break;
    }
    case 335788:
    {
        returnValue = F("Wiggerweg");
        break;
    }
    case 335789:
    {
        returnValue = F("Wigginghausen");
        break;
    }
    case 335790:
    {
        returnValue = F("Wiggishagweg");
        break;
    }
    case 335791:
    {
        returnValue = F("Wiglowstr.");
        break;
    }
    case 335792:
    {
        returnValue = F("Wignandstr.");
        break;
    }
    case 335793:
    {
        returnValue = F("Wigramstr.");
        break;
    }
    case 335794:
    {
        returnValue = F("Wihdumweg");
        break;
    }
    case 335795:
    {
        returnValue = F("Wihmsfeld");
        break;
    }
    case 335796:
    {
        returnValue = F("Wihmundweg");
        break;
    }
    case 335797:
    {
        returnValue = F("Wihostr.");
        break;
    }
    case 335798:
    {
        returnValue = F("Wiip Wai");
        break;
    }
    case 335799:
    {
        returnValue = F("Wikbergweg");
        break;
    }
    case 335800:
    {
        returnValue = F("Wikbertstr.");
        break;
    }
    case 335801:
    {
        returnValue = F("Wikbildstr.");
        break;
    }
    case 335802:
    {
        returnValue = F("Wiker Str.");
        break;
    }
    case 335803:
    {
        returnValue = F("Wikingeck");
        break;
    }
    case 335804:
    {
        returnValue = F("Wikingerallee");
        break;
    }
    case 335805:
    {
        returnValue = F("Wikingerhörn");
        break;
    }
    case 335806:
    {
        returnValue = F("Wikingerring");
        break;
    }
    case 335807:
    {
        returnValue = F("Wikingerstr.");
        break;
    }
    case 335808:
    {
        returnValue = F("Wikingerweg");
        break;
    }
    case 335809:
    {
        returnValue = F("Wikingwai");
        break;
    }
    case 335810:
    {
        returnValue = F("Wiklohstr.");
        break;
    }
    case 335811:
    {
        returnValue = F("Wilarestr.");
        break;
    }
    case 335812:
    {
        returnValue = F("Wilbachstr.");
        break;
    }
    case 335813:
    {
        returnValue = F("Wilbankstr.");
        break;
    }
    case 335814:
    {
        returnValue = F("Wilbaser Str.");
        break;
    }
    case 335815:
    {
        returnValue = F("Wilbaser Weg");
        break;
    }
    case 335816:
    {
        returnValue = F("Wilbecke");
        break;
    }
    case 335817:
    {
        returnValue = F("Wilberger Str.");
        break;
    }
    case 335818:
    {
        returnValue = F("Wilbergstr.");
        break;
    }
    case 335819:
    {
        returnValue = F("Wilberhofener Str.");
        break;
    }
    case 335820:
    {
        returnValue = F("Wilbetstr.");
        break;
    }
    case 335821:
    {
        returnValue = F("Wilbicher Weg");
        break;
    }
    case 335822:
    {
        returnValue = F("Wilboldweg");
        break;
    }
    case 335823:
    {
        returnValue = F("Wilbrand-Schneise");
        break;
    }
    case 335824:
    {
        returnValue = F("Wilbrandschneise");
        break;
    }
    case 335825:
    {
        returnValue = F("Wilbrandtstr.");
        break;
    }
    case 335826:
    {
        returnValue = F("Wilbrechtweg");
        break;
    }
    case 335827:
    {
        returnValue = F("Wilbringhausen");
        break;
    }
    case 335828:
    {
        returnValue = F("Wilbringhausener Str.");
        break;
    }
    case 335829:
    {
        returnValue = F("Wilburgpfad");
        break;
    }
    case 335830:
    {
        returnValue = F("Wilburgstetter Str.");
        break;
    }
    case 335831:
    {
        returnValue = F("Wilchenreuth");
        break;
    }
    case 335832:
    {
        returnValue = F("Wilchertsmattweg");
        break;
    }
    case 335833:
    {
        returnValue = F("Wilchinger Str.");
        break;
    }
    case 335834:
    {
        returnValue = F("Wilchwitzer Str.");
        break;
    }
    case 335835:
    {
        returnValue = F("Wilchwitzer Weg");
        break;
    }
    case 335836:
    {
        returnValue = F("Wilckens Hof");
        break;
    }
    case 335837:
    {
        returnValue = F("Wilckensstr.");
        break;
    }
    case 335838:
    {
        returnValue = F("Wild Boar Reacreation Center");
        break;
    }
    case 335839:
    {
        returnValue = F("Wild's Garten");
        break;
    }
    case 335840:
    {
        returnValue = F("Wild- und Freizeitpark Ostrittrum");
        break;
    }
    case 335841:
    {
        returnValue = F("Wild/Pfau");
        break;
    }
    case 335842:
    {
        returnValue = F("Wildacker");
        break;
    }
    case 335843:
    {
        returnValue = F("Wildackerschneise");
        break;
    }
    case 335844:
    {
        returnValue = F("Wildackerweg");
        break;
    }
    case 335845:
    {
        returnValue = F("Wildanger");
        break;
    }
    case 335846:
    {
        returnValue = F("Wildapfelstr.");
        break;
    }
    case 335847:
    {
        returnValue = F("Wildapfelweg");
        break;
    }
    case 335848:
    {
        returnValue = F("Wildau");
        break;
    }
    case 335849:
    {
        returnValue = F("Wildau-Wentdorf");
        break;
    }
    case 335850:
    {
        returnValue = F("Wildaustr.");
        break;
    }
    case 335851:
    {
        returnValue = F("Wildbacher Hang");
        break;
    }
    case 335852:
    {
        returnValue = F("Wildbacher Hauptstr.");
        break;
    }
    case 335853:
    {
        returnValue = F("Wildbacher Mühle");
        break;
    }
    case 335854:
    {
        returnValue = F("Wildbacher Schulstr.");
        break;
    }
    case 335855:
    {
        returnValue = F("Wildbacher Str.");
        break;
    }
    case 335856:
    {
        returnValue = F("Wildbachlehrpfad");
        break;
    }
    case 335857:
    {
        returnValue = F("Wildbachstr.");
        break;
    }
    case 335858:
    {
        returnValue = F("Wildbachweg");
        break;
    }
    case 335859:
    {
        returnValue = F("Wildbad");
        break;
    }
    case 335860:
    {
        returnValue = F("Wildbad-Dobler-Sträßle");
        break;
    }
    case 335861:
    {
        returnValue = F("Wildbader Hangweg");
        break;
    }
    case 335862:
    {
        returnValue = F("Wildbader Str.");
        break;
    }
    case 335863:
    {
        returnValue = F("Wildbader Weg");
        break;
    }
    case 335864:
    {
        returnValue = F("Wildbadsteg");
        break;
    }
    case 335865:
    {
        returnValue = F("Wildbadstr.");
        break;
    }
    case 335866:
    {
        returnValue = F("Wildbahn");
        break;
    }
    case 335867:
    {
        returnValue = F("Wildbahn X3, ARS NATURA");
        break;
    }
    case 335868:
    {
        returnValue = F("Wildbahnschneise");
        break;
    }
    case 335869:
    {
        returnValue = F("Wildbahnstr.");
        break;
    }
    case 335870:
    {
        returnValue = F("Wildbahnweg");
        break;
    }
    case 335871:
    {
        returnValue = F("Wildbannstr.");
        break;
    }
    case 335872:
    {
        returnValue = F("Wildbarrenstr.");
        break;
    }
    case 335873:
    {
        returnValue = F("Wildbarrenweg");
        break;
    }
    case 335874:
    {
        returnValue = F("Wildbarrnweg");
        break;
    }
    case 335875:
    {
        returnValue = F("Wildberg");
        break;
    }
    case 335876:
    {
        returnValue = F("Wildberger Steige");
        break;
    }
    case 335877:
    {
        returnValue = F("Wildberger Str.");
        break;
    }
    case 335878:
    {
        returnValue = F("Wildberger Weg");
        break;
    }
    case 335879:
    {
        returnValue = F("Wildbergstr.");
        break;
    }
    case 335880:
    {
        returnValue = F("Wildbergweg");
        break;
    }
    case 335881:
    {
        returnValue = F("Wildbienenpark");
        break;
    }
    case 335882:
    {
        returnValue = F("Wildbienenweg");
        break;
    }
    case 335883:
    {
        returnValue = F("Wildbirnenweg");
        break;
    }
    case 335884:
    {
        returnValue = F("Wildblech");
        break;
    }
    case 335885:
    {
        returnValue = F("Wildblumenweg");
        break;
    }
    case 335886:
    {
        returnValue = F("Wildblumenwiese");
        break;
    }
    case 335887:
    {
        returnValue = F("Wildbret");
        break;
    }
    case 335888:
    {
        returnValue = F("Wildbretflügel");
        break;
    }
    case 335889:
    {
        returnValue = F("Wildbretweg");
        break;
    }
    case 335890:
    {
        returnValue = F("Wildbrink");
        break;
    }
    case 335891:
    {
        returnValue = F("Wildbruch");
        break;
    }
    case 335892:
    {
        returnValue = F("Wildbrücke");
        break;
    }
    case 335893:
    {
        returnValue = F("Wildbrückenweg");
        break;
    }
    case 335894:
    {
        returnValue = F("Wildburger Linie");
        break;
    }
    case 335895:
    {
        returnValue = F("Wildburger Str.");
        break;
    }
    case 335896:
    {
        returnValue = F("Wildburgmühle");
        break;
    }
    case 335897:
    {
        returnValue = F("Wildburgstr.");
        break;
    }
    case 335898:
    {
        returnValue = F("Wilddiebsweg");
        break;
    }
    case 335899:
    {
        returnValue = F("Wilddumhof");
        break;
    }
    case 335900:
    {
        returnValue = F("Wilde Aa");
        break;
    }
    case 335901:
    {
        returnValue = F("Wilde Heide");
        break;
    }
    case 335902:
    {
        returnValue = F("Wilde Hütung");
        break;
    }
    case 335903:
    {
        returnValue = F("Wilde Rott Weg");
        break;
    }
    case 335904:
    {
        returnValue = F("Wilde See");
        break;
    }
    case 335905:
    {
        returnValue = F("Wilde Str.");
        break;
    }
    case 335906:
    {
        returnValue = F("Wilde Taube");
        break;
    }
    case 335907:
    {
        returnValue = F("Wilde Wech");
        break;
    }
    case 335908:
    {
        returnValue = F("Wilde Weg");
        break;
    }
    case 335909:
    {
        returnValue = F("Wilde-Manns-Weg");
        break;
    }
    case 335910:
    {
        returnValue = F("Wilde-Wiesenweg");
        break;
    }
    case 335911:
    {
        returnValue = F("Wilde-Äcker-Weg");
        break;
    }
    case 335912:
    {
        returnValue = F("Wildebauer");
        break;
    }
    case 335913:
    {
        returnValue = F("Wildebergstr.");
        break;
    }
    case 335914:
    {
        returnValue = F("Wildebühlweg");
        break;
    }
    case 335915:
    {
        returnValue = F("Wildeck");
        break;
    }
    case 335916:
    {
        returnValue = F("Wildecker Str.");
        break;
    }
    case 335917:
    {
        returnValue = F("Wildecker Weg");
        break;
    }
    case 335918:
    {
        returnValue = F("Wildeckstr.");
        break;
    }
    case 335919:
    {
        returnValue = F("Wildeckweg");
        break;
    }
    case 335920:
    {
        returnValue = F("Wildefüerstr.");
        break;
    }
    case 335921:
    {
        returnValue = F("Wildeggerstr.");
        break;
    }
    case 335922:
    {
        returnValue = F("Wildemann-Brücke");
        break;
    }
    case 335923:
    {
        returnValue = F("Wildemanner Str.");
        break;
    }
    case 335924:
    {
        returnValue = F("Wildemannschlucht");
        break;
    }
    case 335925:
    {
        returnValue = F("Wildemannsgang");
        break;
    }
    case 335926:
    {
        returnValue = F("Wildemannsgasse");
        break;
    }
    case 335927:
    {
        returnValue = F("Wildemannstr.");
        break;
    }
    case 335928:
    {
        returnValue = F("Wildemannweg");
        break;
    }
    case 335929:
    {
        returnValue = F("Wildemoor");
        break;
    }
    case 335930:
    {
        returnValue = F("Wilden");
        break;
    }
    case 335931:
    {
        returnValue = F("Wilden-Mann-Gasse");
        break;
    }
    case 335932:
    {
        returnValue = F("Wildenauer Kirchsteig");
        break;
    }
    case 335933:
    {
        returnValue = F("Wildenauer Str.");
        break;
    }
    case 335934:
    {
        returnValue = F("Wildenauer Weg");
        break;
    }
    case 335935:
    {
        returnValue = F("Wildenaustr.");
        break;
    }
    case 335936:
    {
        returnValue = F("Wildenbach");
        break;
    }
    case 335937:
    {
        returnValue = F("Wildenberg");
        break;
    }
    case 335938:
    {
        returnValue = F("Wildenbergener Str.");
        break;
    }
    case 335939:
    {
        returnValue = F("Wildenberger Str.");
        break;
    }
    case 335940:
    {
        returnValue = F("Wildenbergerring");
        break;
    }
    case 335941:
    {
        returnValue = F("Wildenbergstr.");
        break;
    }
    case 335942:
    {
        returnValue = F("Wildenbergweg");
        break;
    }
    case 335943:
    {
        returnValue = F("Wildenborgweg");
        break;
    }
    case 335944:
    {
        returnValue = F("Wildenborner Allee");
        break;
    }
    case 335945:
    {
        returnValue = F("Wildenborner Weg");
        break;
    }
    case 335946:
    {
        returnValue = F("Wildenbruchstr.");
        break;
    }
    case 335947:
    {
        returnValue = F("Wildenburg");
        break;
    }
    case 335948:
    {
        returnValue = F("Wildenburger Str.");
        break;
    }
    case 335949:
    {
        returnValue = F("Wildenburgerstr.");
        break;
    }
    case 335950:
    {
        returnValue = F("Wildenburgstr.");
        break;
    }
    case 335951:
    {
        returnValue = F("Wildenburgweg");
        break;
    }
    case 335952:
    {
        returnValue = F("Wildenbörtener Kirchplatz");
        break;
    }
    case 335953:
    {
        returnValue = F("Wildenbörtener Str.");
        break;
    }
    case 335954:
    {
        returnValue = F("Wildendobelweg");
        break;
    }
    case 335955:
    {
        returnValue = F("Wildeneck");
        break;
    }
    case 335956:
    {
        returnValue = F("Wildeneggstr.");
        break;
    }
    case 335957:
    {
        returnValue = F("Wildenesch");
        break;
    }
    case 335958:
    {
        returnValue = F("Wildenfels");
        break;
    }
    case 335959:
    {
        returnValue = F("Wildenfelser Str.");
        break;
    }
    case 335960:
    {
        returnValue = F("Wildenfelser Weg");
        break;
    }
    case 335961:
    {
        returnValue = F("Wildengraben");
        break;
    }
    case 335962:
    {
        returnValue = F("Wildengrubenweg");
        break;
    }
    case 335963:
    {
        returnValue = F("Wildengrundweg");
        break;
    }
    case 335964:
    {
        returnValue = F("Wildenhahnstr.");
        break;
    }
    case 335965:
    {
        returnValue = F("Wildenhain");
        break;
    }
    case 335966:
    {
        returnValue = F("Wildenhainer Hauptstr.");
        break;
    }
    case 335967:
    {
        returnValue = F("Wildenhainer Str.");
        break;
    }
    case 335968:
    {
        returnValue = F("Wildenhainer Weg");
        break;
    }
    case 335969:
    {
        returnValue = F("Wildenhang");
        break;
    }
    case 335970:
    {
        returnValue = F("Wildenhaus");
        break;
    }
    case 335971:
    {
        returnValue = F("Wildenhausweg");
        break;
    }
    case 335972:
    {
        returnValue = F("Wildenheider Str.");
        break;
    }
    case 335973:
    {
        returnValue = F("Wildenhofeck");
        break;
    }
    case 335974:
    {
        returnValue = F("Wildenhoff");
        break;
    }
    case 335975:
    {
        returnValue = F("Wildenhofgasse");
        break;
    }
    case 335976:
    {
        returnValue = F("Wildenhofstr.");
        break;
    }
    case 335977:
    {
        returnValue = F("Wildenhofweg");
        break;
    }
    case 335978:
    {
        returnValue = F("Wildenhorster Weg");
        break;
    }
    case 335979:
    {
        returnValue = F("Wildenhöfle");
        break;
    }
    case 335980:
    {
        returnValue = F("Wildenkielsgrund");
        break;
    }
    case 335981:
    {
        returnValue = F("Wildenlohsdamm");
        break;
    }
    case 335982:
    {
        returnValue = F("Wildenlohslinie");
        break;
    }
    case 335983:
    {
        returnValue = F("Wildenrather Str.");
        break;
    }
    case 335984:
    {
        returnValue = F("Wildenreuth A");
        break;
    }
    case 335985:
    {
        returnValue = F("Wildenreuth B");
        break;
    }
    case 335986:
    {
        returnValue = F("Wildenreuth C");
        break;
    }
    case 335987:
    {
        returnValue = F("Wildenreuth D");
        break;
    }
    case 335988:
    {
        returnValue = F("Wildenreuth F");
        break;
    }
    case 335989:
    {
        returnValue = F("Wildenreuth G");
        break;
    }
    case 335990:
    {
        returnValue = F("Wildenreuth H");
        break;
    }
    case 335991:
    {
        returnValue = F("Wildenreuth I");
        break;
    }
    case 335992:
    {
        returnValue = F("Wildenreuth K");
        break;
    }
    case 335993:
    {
        returnValue = F("Wildenreuth L");
        break;
    }
    case 335994:
    {
        returnValue = F("Wildenreuth M");
        break;
    }
    case 335995:
    {
        returnValue = F("Wildenreuth N");
        break;
    }
    case 335996:
    {
        returnValue = F("Wildenreuth R");
        break;
    }
    case 335997:
    {
        returnValue = F("Wildenreuth S");
        break;
    }
    case 335998:
    {
        returnValue = F("Wildenreuth T");
        break;
    }
    case 335999:
    {
        returnValue = F("Wildenreuth U");
        break;
    }
    case 336000:
    {
        returnValue = F("Wildenreuth W");
        break;
    }
    case 336001:
    {
        returnValue = F("Wildenreutweg");
        break;
    }
    case 336002:
    {
        returnValue = F("Wildensee");
        break;
    }
    case 336003:
    {
        returnValue = F("Wildenseer Str.");
        break;
    }
    case 336004:
    {
        returnValue = F("Wildenseer Weg");
        break;
    }
    case 336005:
    {
        returnValue = F("Wildensorger Str.");
        break;
    }
    case 336006:
    {
        returnValue = F("Wildenspringer Str.");
        break;
    }
    case 336007:
    {
        returnValue = F("Wildenstall");
        break;
    }
    case 336008:
    {
        returnValue = F("Wildenstein");
        break;
    }
    case 336009:
    {
        returnValue = F("Wildensteinblick");
        break;
    }
    case 336010:
    {
        returnValue = F("Wildensteiner Str.");
        break;
    }
    case 336011:
    {
        returnValue = F("Wildensteinstr.");
        break;
    }
    case 336012:
    {
        returnValue = F("Wildensteinweg");
        break;
    }
    case 336013:
    {
        returnValue = F("Wildentenstr.");
        break;
    }
    case 336014:
    {
        returnValue = F("Wildentenweg");
        break;
    }
    case 336015:
    {
        returnValue = F("Wildenthalweg");
        break;
    }
    case 336016:
    {
        returnValue = F("Wildentierbach");
        break;
    }
    case 336017:
    {
        returnValue = F("Wildentierbacher Str.");
        break;
    }
    case 336018:
    {
        returnValue = F("Wildeppenried");
        break;
    }
    case 336019:
    {
        returnValue = F("Wilder Berg");
        break;
    }
    case 336020:
    {
        returnValue = F("Wilder Busch Weg");
        break;
    }
    case 336021:
    {
        returnValue = F("Wilder Garten");
        break;
    }
    case 336022:
    {
        returnValue = F("Wilder Graben");
        break;
    }
    case 336023:
    {
        returnValue = F("Wilder Hammer");
        break;
    }
    case 336024:
    {
        returnValue = F("Wilder Kamp");
        break;
    }
    case 336025:
    {
        returnValue = F("Wilder Mann");
        break;
    }
    case 336026:
    {
        returnValue = F("Wilder Pool");
        break;
    }
    case 336027:
    {
        returnValue = F("Wilder Wald Weg");
        break;
    }
    case 336028:
    {
        returnValue = F("Wilder Weg");
        break;
    }
    case 336029:
    {
        returnValue = F("Wilder Wiesenweg");
        break;
    }
    case 336030:
    {
        returnValue = F("Wilder-Schmied-Pfad");
        break;
    }
    case 336031:
    {
        returnValue = F("Wilderer-Pfad");
        break;
    }
    case 336032:
    {
        returnValue = F("Wilderer-Schneise");
        break;
    }
    case 336033:
    {
        returnValue = F("Wildererpfad");
        break;
    }
    case 336034:
    {
        returnValue = F("Wilderich-von-Ketteler-Weg");
        break;
    }
    case 336035:
    {
        returnValue = F("Wilderichstr.");
        break;
    }
    case 336036:
    {
        returnValue = F("Wilderkamp");
        break;
    }
    case 336037:
    {
        returnValue = F("Wildermann");
        break;
    }
    case 336038:
    {
        returnValue = F("Wildermannstr.");
        break;
    }
    case 336039:
    {
        returnValue = F("Wildermuthstr.");
        break;
    }
    case 336040:
    {
        returnValue = F("Wilderniss III");
        break;
    }
    case 336041:
    {
        returnValue = F("Wildes Loch");
        break;
    }
    case 336042:
    {
        returnValue = F("Wildeshauser Landstr.");
        break;
    }
    case 336043:
    {
        returnValue = F("Wildeshauser Str.");
        break;
    }
    case 336044:
    {
        returnValue = F("Wildeshauser Weg");
        break;
    }
    case 336045:
    {
        returnValue = F("Wildeshäuser Str.");
        break;
    }
    case 336046:
    {
        returnValue = F("Wildeshäuser Weg");
        break;
    }
    case 336047:
    {
        returnValue = F("Wildestr.");
        break;
    }
    case 336048:
    {
        returnValue = F("Wildetaubener Hauptstr.");
        break;
    }
    case 336049:
    {
        returnValue = F("Wildetaubenflügel");
        break;
    }
    case 336050:
    {
        returnValue = F("Wildeweg");
        break;
    }
    case 336051:
    {
        returnValue = F("Wildfuhr");
        break;
    }
    case 336052:
    {
        returnValue = F("Wildfuhre");
        break;
    }
    case 336053:
    {
        returnValue = F("Wildfährte");
        break;
    }
    case 336054:
    {
        returnValue = F("Wildganssteg");
        break;
    }
    case 336055:
    {
        returnValue = F("Wildgansstieg");
        break;
    }
    case 336056:
    {
        returnValue = F("Wildgansstr.");
        break;
    }
    case 336057:
    {
        returnValue = F("Wildgansweg");
        break;
    }
    case 336058:
    {
        returnValue = F("Wildgarten");
        break;
    }
    case 336059:
    {
        returnValue = F("Wildgartenstr.");
        break;
    }
    case 336060:
    {
        returnValue = F("Wildgasse");
        break;
    }
    case 336061:
    {
        returnValue = F("Wildgatter");
        break;
    }
    case 336062:
    {
        returnValue = F("Wildgehege");
        break;
    }
    case 336063:
    {
        returnValue = F("Wildgehege Horgen");
        break;
    }
    case 336064:
    {
        returnValue = F("Wildgehege Mesekendahl");
        break;
    }
    case 336065:
    {
        returnValue = F("Wildgraben");
        break;
    }
    case 336066:
    {
        returnValue = F("Wildgrabenweg");
        break;
    }
    case 336067:
    {
        returnValue = F("Wildgrafenstr.");
        break;
    }
    case 336068:
    {
        returnValue = F("Wildgruber Chaussee");
        break;
    }
    case 336069:
    {
        returnValue = F("Wildgruber Str.");
        break;
    }
    case 336070:
    {
        returnValue = F("Wildgrund");
        break;
    }
    case 336071:
    {
        returnValue = F("Wildgutacher Sträßle");
        break;
    }
    case 336072:
    {
        returnValue = F("Wildgäßchen");
        break;
    }
    case 336073:
    {
        returnValue = F("Wildhagen");
        break;
    }
    case 336074:
    {
        returnValue = F("Wildhagenweg");
        break;
    }
    case 336075:
    {
        returnValue = F("Wildhagweg");
        break;
    }
    case 336076:
    {
        returnValue = F("Wildhaider Weg");
        break;
    }
    case 336077:
    {
        returnValue = F("Wildhang");
        break;
    }
    case 336078:
    {
        returnValue = F("Wildhausstr.");
        break;
    }
    case 336079:
    {
        returnValue = F("Wildhof");
        break;
    }
    case 336080:
    {
        returnValue = F("Wildhof Försterei");
        break;
    }
    case 336081:
    {
        returnValue = F("Wildhofer Str.");
        break;
    }
    case 336082:
    {
        returnValue = F("Wildhofstr.");
        break;
    }
    case 336083:
    {
        returnValue = F("Wildhubenweg");
        break;
    }
    case 336084:
    {
        returnValue = F("Wildhütte");
        break;
    }
    case 336085:
    {
        returnValue = F("Wildkamp");
        break;
    }
    case 336086:
    {
        returnValue = F("Wildkanzelweg");
        break;
    }
    case 336087:
    {
        returnValue = F("Wildkatzen, Dachs, Hörnchen");
        break;
    }
    case 336088:
    {
        returnValue = F("Wildkatzen- und Artenschutzzentrum Felidae");
        break;
    }
    case 336089:
    {
        returnValue = F("Wildkatzenpfad");
        break;
    }
    case 336090:
    {
        returnValue = F("Wildkatzenweg");
        break;
    }
    case 336091:
    {
        returnValue = F("Wildkirschenweg");
        break;
    }
    case 336092:
    {
        returnValue = F("Wildkoppel");
        break;
    }
    case 336093:
    {
        returnValue = F("Wildkoppelweg");
        break;
    }
    case 336094:
    {
        returnValue = F("Wildkuhler Str.");
        break;
    }
    case 336095:
    {
        returnValue = F("Wildkuhler Weg");
        break;
    }
    case 336096:
    {
        returnValue = F("Wildkämpe");
        break;
    }
    case 336097:
    {
        returnValue = F("Wildlehrpfad");
        break;
    }
    case 336098:
    {
        returnValue = F("Wildmecke");
        break;
    }
    case 336099:
    {
        returnValue = F("Wildmeisterschneise");
        break;
    }
    case 336100:
    {
        returnValue = F("Wildmeisterstr.");
        break;
    }
    case 336101:
    {
        returnValue = F("Wildmeisterweg");
        break;
    }
    case 336102:
    {
        returnValue = F("Wildmoos");
        break;
    }
    case 336103:
    {
        returnValue = F("Wildmoos Str.");
        break;
    }
    case 336104:
    {
        returnValue = F("Wildmoosstr.");
        break;
    }
    case 336105:
    {
        returnValue = F("Wildmoosweg");
        break;
    }
    case 336106:
    {
        returnValue = F("Wildnis");
        break;
    }
    case 336107:
    {
        returnValue = F("Wildnistrail (Eifel)");
        break;
    }
    case 336108:
    {
        returnValue = F("Wildor-Hollmann-Str.");
        break;
    }
    case 336109:
    {
        returnValue = F("Wildorn");
        break;
    }
    case 336110:
    {
        returnValue = F("Wildpad");
        break;
    }
    case 336111:
    {
        returnValue = F("Wildpark");
        break;
    }
    case 336112:
    {
        returnValue = F("Wildpark Christianental");
        break;
    }
    case 336113:
    {
        returnValue = F("Wildpark Dülmen");
        break;
    }
    case 336114:
    {
        returnValue = F("Wildpark Hundshaupten");
        break;
    }
    case 336115:
    {
        returnValue = F("Wildpark Möhnesee-Völlinghausen");
        break;
    }
    case 336116:
    {
        returnValue = F("Wildpark Osterzgebirge");
        break;
    }
    case 336117:
    {
        returnValue = F("Wildpark Potzberg");
        break;
    }
    case 336118:
    {
        returnValue = F("Wildpark Saarbrücken");
        break;
    }
    case 336119:
    {
        returnValue = F("Wildpark Uhlenkolk");
        break;
    }
    case 336120:
    {
        returnValue = F("Wildpark an den Eichen");
        break;
    }
    case 336121:
    {
        returnValue = F("Wildparkloipe");
        break;
    }
    case 336122:
    {
        returnValue = F("Wildparkring");
        break;
    }
    case 336123:
    {
        returnValue = F("Wildparkstr.");
        break;
    }
    case 336124:
    {
        returnValue = F("Wildparkweg");
        break;
    }
    case 336125:
    {
        returnValue = F("Wildpaßweg");
        break;
    }
    case 336126:
    {
        returnValue = F("Wildpfad");
        break;
    }
    case 336127:
    {
        returnValue = F("Wildpferde");
        break;
    }
    case 336128:
    {
        returnValue = F("Wildpflanzenpark");
        break;
    }
    case 336129:
    {
        returnValue = F("Wildphal");
        break;
    }
    case 336130:
    {
        returnValue = F("Wildprechting");
        break;
    }
    case 336131:
    {
        returnValue = F("Wildrebenweg");
        break;
    }
    case 336132:
    {
        returnValue = F("Wildrose");
        break;
    }
    case 336133:
    {
        returnValue = F("Wildrosengarten");
        break;
    }
    case 336134:
    {
        returnValue = F("Wildrosenpromenade");
        break;
    }
    case 336135:
    {
        returnValue = F("Wildrosenstr.");
        break;
    }
    case 336136:
    {
        returnValue = F("Wildrosenweg");
        break;
    }
    case 336137:
    {
        returnValue = F("Wildroßstr.");
        break;
    }
    case 336138:
    {
        returnValue = F("Wildruhezone");
        break;
    }
    case 336139:
    {
        returnValue = F("Wildrups Hoff");
        break;
    }
    case 336140:
    {
        returnValue = F("Wildsachsener Str.");
        break;
    }
    case 336141:
    {
        returnValue = F("Wildsau");
        break;
    }
    case 336142:
    {
        returnValue = F("Wildsauengrund");
        break;
    }
    case 336143:
    {
        returnValue = F("Wildsaupfad");
        break;
    }
    case 336144:
    {
        returnValue = F("Wildsauweg");
        break;
    }
    case 336145:
    {
        returnValue = F("Wildsbergstr.");
        break;
    }
    case 336146:
    {
        returnValue = F("Wildschapbachstr.");
        break;
    }
    case 336147:
    {
        returnValue = F("Wildscheine");
        break;
    }
    case 336148:
    {
        returnValue = F("Wildscheuer Schneise");
        break;
    }
    case 336149:
    {
        returnValue = F("Wildscheuerschneise");
        break;
    }
    case 336150:
    {
        returnValue = F("Wildscheuerweg");
        break;
    }
    case 336151:
    {
        returnValue = F("Wildschneise");
        break;
    }
    case 336152:
    {
        returnValue = F("Wildschwaiger");
        break;
    }
    case 336153:
    {
        returnValue = F("Wildschwaigerweg");
        break;
    }
    case 336154:
    {
        returnValue = F("Wildschweine");
        break;
    }
    case 336155:
    {
        returnValue = F("Wildschweingehege");
        break;
    }
    case 336156:
    {
        returnValue = F("Wildschweinpfad");
        break;
    }
    case 336157:
    {
        returnValue = F("Wildschweinweg");
        break;
    }
    case 336158:
    {
        returnValue = F("Wildschützenweg");
        break;
    }
    case 336159:
    {
        returnValue = F("Wildschützer Str.");
        break;
    }
    case 336160:
    {
        returnValue = F("Wildschützer Weg");
        break;
    }
    case 336161:
    {
        returnValue = F("Wildseepfad");
        break;
    }
    case 336162:
    {
        returnValue = F("Wildseepfad2");
        break;
    }
    case 336163:
    {
        returnValue = F("Wildseestr.");
        break;
    }
    case 336164:
    {
        returnValue = F("Wildseeweg");
        break;
    }
    case 336165:
    {
        returnValue = F("Wildshausen");
        break;
    }
    case 336166:
    {
        returnValue = F("Wildshausener Str.");
        break;
    }
    case 336167:
    {
        returnValue = F("Wildshutterstr.");
        break;
    }
    case 336168:
    {
        returnValue = F("Wildspitzstr.");
        break;
    }
    case 336169:
    {
        returnValue = F("Wildstal");
        break;
    }
    case 336170:
    {
        returnValue = F("Wildsteiger Str.");
        break;
    }
    case 336171:
    {
        returnValue = F("Wildsteiger Weg");
        break;
    }
    case 336172:
    {
        returnValue = F("Wildsteiner Str.");
        break;
    }
    case 336173:
    {
        returnValue = F("Wildsteiner Weg");
        break;
    }
    case 336174:
    {
        returnValue = F("Wildsteinstr.");
        break;
    }
    case 336175:
    {
        returnValue = F("Wildstr.");
        break;
    }
    case 336176:
    {
        returnValue = F("Wildtalstr.");
        break;
    }
    case 336177:
    {
        returnValue = F("Wildtalweg");
        break;
    }
    case 336178:
    {
        returnValue = F("Wildtaubenweg");
        break;
    }
    case 336179:
    {
        returnValue = F("Wildtonigassl");
        break;
    }
    case 336180:
    {
        returnValue = F("Wildtor");
        break;
    }
    case 336181:
    {
        returnValue = F("Wildtstr.");
        break;
    }
    case 336182:
    {
        returnValue = F("Wildunger Landstr.");
        break;
    }
    case 336183:
    {
        returnValue = F("Wildunger Str.");
        break;
    }
    case 336184:
    {
        returnValue = F("Wildunger Weg");
        break;
    }
    case 336185:
    {
        returnValue = F("Wildungstr.");
        break;
    }
    case 336186:
    {
        returnValue = F("Wildvangweg");
        break;
    }
    case 336187:
    {
        returnValue = F("Wildwasser");
        break;
    }
    case 336188:
    {
        returnValue = F("Wildwassergraben");
        break;
    }
    case 336189:
    {
        returnValue = F("Wildwasserkehre");
        break;
    }
    case 336190:
    {
        returnValue = F("Wildwechsel");
        break;
    }
    case 336191:
    {
        returnValue = F("Wildweg");
        break;
    }
    case 336192:
    {
        returnValue = F("Wildwestweg");
        break;
    }
    case 336193:
    {
        returnValue = F("Wildwiesenstr.");
        break;
    }
    case 336194:
    {
        returnValue = F("Wildwiesenweg");
        break;
    }
    case 336195:
    {
        returnValue = F("Wildwinkel");
        break;
    }
    case 336196:
    {
        returnValue = F("Wildäcker");
        break;
    }
    case 336197:
    {
        returnValue = F("Wildäckerweg");
        break;
    }
    case 336198:
    {
        returnValue = F("Wildäsungsflächen");
        break;
    }
    case 336199:
    {
        returnValue = F("Wilensteiner Str.");
        break;
    }
    case 336200:
    {
        returnValue = F("Wilensteiner Weg");
        break;
    }
    case 336201:
    {
        returnValue = F("Wileystr.");
        break;
    }
    case 336202:
    {
        returnValue = F("Wilfenbergweg");
        break;
    }
    case 336203:
    {
        returnValue = F("Wilfensee");
        break;
    }
    case 336204:
    {
        returnValue = F("Wilfenseeweg");
        break;
    }
    case 336205:
    {
        returnValue = F("Wilferdinger Str.");
        break;
    }
    case 336206:
    {
        returnValue = F("Wilfertshofen");
        break;
    }
    case 336207:
    {
        returnValue = F("Wilfertsweilerstr.");
        break;
    }
    case 336208:
    {
        returnValue = F("Wilflinger Hauptstr.");
        break;
    }
    case 336209:
    {
        returnValue = F("Wilflinger Str.");
        break;
    }
    case 336210:
    {
        returnValue = F("Wilflingerstr.");
        break;
    }
    case 336211:
    {
        returnValue = F("Wilflingstr.");
        break;
    }
    case 336212:
    {
        returnValue = F("Wilfried-Ensinger-Str.");
        break;
    }
    case 336213:
    {
        returnValue = F("Wilfried-Finke-Allee");
        break;
    }
    case 336214:
    {
        returnValue = F("Wilfried-Fäßer-Weg");
        break;
    }
    case 336215:
    {
        returnValue = F("Wilfried-Hilbrig-Str.");
        break;
    }
    case 336216:
    {
        returnValue = F("Wilfried-Ismar-Str.");
        break;
    }
    case 336217:
    {
        returnValue = F("Wilfried-Neumann-Str.");
        break;
    }
    case 336218:
    {
        returnValue = F("Wilfried-Wroost-Weg");
        break;
    }
    case 336219:
    {
        returnValue = F("Wilfriedstr.");
        break;
    }
    case 336220:
    {
        returnValue = F("Wilgartswieser Weg");
        break;
    }
    case 336221:
    {
        returnValue = F("Wilgen");
        break;
    }
    case 336222:
    {
        returnValue = F("Wilgengrund");
        break;
    }
    case 336223:
    {
        returnValue = F("Wilgenweg");
        break;
    }
    case 336224:
    {
        returnValue = F("Wilgering");
        break;
    }
    case 336225:
    {
        returnValue = F("Wilgertweg");
        break;
    }
    case 336226:
    {
        returnValue = F("Wilgeshohl");
        break;
    }
    case 336227:
    {
        returnValue = F("Wilgumer Str.");
        break;
    }
    case 336228:
    {
        returnValue = F("Wilgumer Weg");
        break;
    }
    case 336229:
    {
        returnValue = F("Wilh.- Schwarzmaierweg");
        break;
    }
    case 336230:
    {
        returnValue = F("Wilh.-Friedr.-Laur-Weg");
        break;
    }
    case 336231:
    {
        returnValue = F("Wilh.-Passavant-Str.");
        break;
    }
    case 336232:
    {
        returnValue = F("Wilhadi-Kirchhof");
        break;
    }
    case 336233:
    {
        returnValue = F("Wilhalmstr.");
        break;
    }
    case 336234:
    {
        returnValue = F("Wilhams");
        break;
    }
    case 336235:
    {
        returnValue = F("Wilhardstr.");
        break;
    }
    case 336236:
    {
        returnValue = F("Wilharmsring");
        break;
    }
    case 336237:
    {
        returnValue = F("Wilhelm Opel Schneise");
        break;
    }
    case 336238:
    {
        returnValue = F("Wilhelm Ripking Str.");
        break;
    }
    case 336239:
    {
        returnValue = F("Wilhelm Stein Schneise");
        break;
    }
    case 336240:
    {
        returnValue = F("Wilhelm von Kügelgen Brücke");
        break;
    }
    case 336241:
    {
        returnValue = F("Wilhelm's Avenue");
        break;
    }
    case 336242:
    {
        returnValue = F("Wilhelm- Gefeller-Bildungs- und Tagungszentrum");
        break;
    }
    case 336243:
    {
        returnValue = F("Wilhelm-A.-Jacobs-Str.");
        break;
    }
    case 336244:
    {
        returnValue = F("Wilhelm-Abel-Weg");
        break;
    }
    case 336245:
    {
        returnValue = F("Wilhelm-Acht-Str.");
        break;
    }
    case 336246:
    {
        returnValue = F("Wilhelm-Adrian-Str.");
        break;
    }
    case 336247:
    {
        returnValue = F("Wilhelm-Ahles-Str.");
        break;
    }
    case 336248:
    {
        returnValue = F("Wilhelm-Ahrens-Weg");
        break;
    }
    case 336249:
    {
        returnValue = F("Wilhelm-Albert-Weg");
        break;
    }
    case 336250:
    {
        returnValue = F("Wilhelm-Albrecht-Str.");
        break;
    }
    case 336251:
    {
        returnValue = F("Wilhelm-Alles-Ring");
        break;
    }
    case 336252:
    {
        returnValue = F("Wilhelm-Altheim-Str.");
        break;
    }
    case 336253:
    {
        returnValue = F("Wilhelm-Ammon-Str.");
        break;
    }
    case 336254:
    {
        returnValue = F("Wilhelm-Arndt-Weg");
        break;
    }
    case 336255:
    {
        returnValue = F("Wilhelm-Arnold-Platz");
        break;
    }
    case 336256:
    {
        returnValue = F("Wilhelm-Asche-Weg");
        break;
    }
    case 336257:
    {
        returnValue = F("Wilhelm-Aschenberg-Str.");
        break;
    }
    case 336258:
    {
        returnValue = F("Wilhelm-Aschka-Str.");
        break;
    }
    case 336259:
    {
        returnValue = F("Wilhelm-Augst-Weg");
        break;
    }
    case 336260:
    {
        returnValue = F("Wilhelm-August-Berberich-Str.");
        break;
    }
    case 336261:
    {
        returnValue = F("Wilhelm-August-Kirsch-Str.");
        break;
    }
    case 336262:
    {
        returnValue = F("Wilhelm-Ax-Str.");
        break;
    }
    case 336263:
    {
        returnValue = F("Wilhelm-Baastrup-Platz");
        break;
    }
    case 336264:
    {
        returnValue = F("Wilhelm-Bader-Str.");
        break;
    }
    case 336265:
    {
        returnValue = F("Wilhelm-Bahmüller-Str.");
        break;
    }
    case 336266:
    {
        returnValue = F("Wilhelm-Bahr-Str.");
        break;
    }
    case 336267:
    {
        returnValue = F("Wilhelm-Bakker-Str.");
        break;
    }
    case 336268:
    {
        returnValue = F("Wilhelm-Bald-Weg");
        break;
    }
    case 336269:
    {
        returnValue = F("Wilhelm-Barner-Weg");
        break;
    }
    case 336270:
    {
        returnValue = F("Wilhelm-Bartels-Str.");
        break;
    }
    case 336271:
    {
        returnValue = F("Wilhelm-Bartelt-Str.");
        break;
    }
    case 336272:
    {
        returnValue = F("Wilhelm-Barth-Str.");
        break;
    }
    case 336273:
    {
        returnValue = F("Wilhelm-Bauer-Str.");
        break;
    }
    case 336274:
    {
        returnValue = F("Wilhelm-Baumann-Str.");
        break;
    }
    case 336275:
    {
        returnValue = F("Wilhelm-Baur-Str.");
        break;
    }
    case 336276:
    {
        returnValue = F("Wilhelm-Bayer-Weg");
        break;
    }
    case 336277:
    {
        returnValue = F("Wilhelm-Bechert-Str.");
        break;
    }
    case 336278:
    {
        returnValue = F("Wilhelm-Bechtold-Str.");
        break;
    }
    case 336279:
    {
        returnValue = F("Wilhelm-Beck-Str.");
        break;
    }
    case 336280:
    {
        returnValue = F("Wilhelm-Becker-Str.");
        break;
    }
    case 336281:
    {
        returnValue = F("Wilhelm-Beckmann-Str.");
        break;
    }
    case 336282:
    {
        returnValue = F("Wilhelm-Beckmeier-Str.");
        break;
    }
    case 336283:
    {
        returnValue = F("Wilhelm-Bedenknecht-Str.");
        break;
    }
    case 336284:
    {
        returnValue = F("Wilhelm-Bee-Str.");
        break;
    }
    case 336285:
    {
        returnValue = F("Wilhelm-Behr-Str.");
        break;
    }
    case 336286:
    {
        returnValue = F("Wilhelm-Behrens-Str.");
        break;
    }
    case 336287:
    {
        returnValue = F("Wilhelm-Behrens-Weg");
        break;
    }
    case 336288:
    {
        returnValue = F("Wilhelm-Beile-Str.");
        break;
    }
    case 336289:
    {
        returnValue = F("Wilhelm-Beindorf-Weg");
        break;
    }
    case 336290:
    {
        returnValue = F("Wilhelm-Beinert-Str.");
        break;
    }
    case 336291:
    {
        returnValue = F("Wilhelm-Bell-Str.");
        break;
    }
    case 336292:
    {
        returnValue = F("Wilhelm-Beltz-Weg");
        break;
    }
    case 336293:
    {
        returnValue = F("Wilhelm-Bender-Str.");
        break;
    }
    case 336294:
    {
        returnValue = F("Wilhelm-Bendick-Str.");
        break;
    }
    case 336295:
    {
        returnValue = F("Wilhelm-Beneker-Str.");
        break;
    }
    case 336296:
    {
        returnValue = F("Wilhelm-Bergner-Str.");
        break;
    }
    case 336297:
    {
        returnValue = F("Wilhelm-Berkemeyer-Str.");
        break;
    }
    case 336298:
    {
        returnValue = F("Wilhelm-Bernhard-Str.");
        break;
    }
    case 336299:
    {
        returnValue = F("Wilhelm-Berning-Str.");
        break;
    }
    case 336300:
    {
        returnValue = F("Wilhelm-Bestel-Str.");
        break;
    }
    case 336301:
    {
        returnValue = F("Wilhelm-Bettenhäuser-Weg");
        break;
    }
    case 336302:
    {
        returnValue = F("Wilhelm-Beumer-Weg");
        break;
    }
    case 336303:
    {
        returnValue = F("Wilhelm-Biel-Str.");
        break;
    }
    case 336304:
    {
        returnValue = F("Wilhelm-Bieser-Str.");
        break;
    }
    case 336305:
    {
        returnValue = F("Wilhelm-Biester-Str.");
        break;
    }
    case 336306:
    {
        returnValue = F("Wilhelm-Bihler-Str.");
        break;
    }
    case 336307:
    {
        returnValue = F("Wilhelm-Binder-Str.");
        break;
    }
    case 336308:
    {
        returnValue = F("Wilhelm-Bindl-Str.");
        break;
    }
    case 336309:
    {
        returnValue = F("Wilhelm-Bitter-Platz");
        break;
    }
    case 336310:
    {
        returnValue = F("Wilhelm-Blab-Str.");
        break;
    }
    case 336311:
    {
        returnValue = F("Wilhelm-Blanke-Str.");
        break;
    }
    case 336312:
    {
        returnValue = F("Wilhelm-Blankertz-Str.");
        break;
    }
    case 336313:
    {
        returnValue = F("Wilhelm-Bleek-Str.");
        break;
    }
    case 336314:
    {
        returnValue = F("Wilhelm-Bleyle-Str.");
        break;
    }
    case 336315:
    {
        returnValue = F("Wilhelm-Blos-Str.");
        break;
    }
    case 336316:
    {
        returnValue = F("Wilhelm-Bluhm-Str.");
        break;
    }
    case 336317:
    {
        returnValue = F("Wilhelm-Blum-Str.");
        break;
    }
    case 336318:
    {
        returnValue = F("Wilhelm-Blutbacher-Str.");
        break;
    }
    case 336319:
    {
        returnValue = F("Wilhelm-Blümel-Str.");
        break;
    }
    case 336320:
    {
        returnValue = F("Wilhelm-Bock-Gasse");
        break;
    }
    case 336321:
    {
        returnValue = F("Wilhelm-Bock-Str.");
        break;
    }
    case 336322:
    {
        returnValue = F("Wilhelm-Bockelmann-Str.");
        break;
    }
    case 336323:
    {
        returnValue = F("Wilhelm-Boddenberg-Str.");
        break;
    }
    case 336324:
    {
        returnValue = F("Wilhelm-Bode-Str.");
        break;
    }
    case 336325:
    {
        returnValue = F("Wilhelm-Bohn-Str.");
        break;
    }
    case 336326:
    {
        returnValue = F("Wilhelm-Bongard-Str.");
        break;
    }
    case 336327:
    {
        returnValue = F("Wilhelm-Bonin-Str.");
        break;
    }
    case 336328:
    {
        returnValue = F("Wilhelm-Bonn-Str.");
        break;
    }
    case 336329:
    {
        returnValue = F("Wilhelm-Bott-Str.");
        break;
    }
    case 336330:
    {
        returnValue = F("Wilhelm-Brandes-Str.");
        break;
    }
    case 336331:
    {
        returnValue = F("Wilhelm-Bratfisch-Str.");
        break;
    }
    case 336332:
    {
        returnValue = F("Wilhelm-Braun-Str.");
        break;
    }
    case 336333:
    {
        returnValue = F("Wilhelm-Braun-Weg");
        break;
    }
    case 336334:
    {
        returnValue = F("Wilhelm-Breckow-Allee");
        break;
    }
    case 336335:
    {
        returnValue = F("Wilhelm-Brehm-Weg");
        break;
    }
    case 336336:
    {
        returnValue = F("Wilhelm-Breidenbach-Weg");
        break;
    }
    case 336337:
    {
        returnValue = F("Wilhelm-Breithaupt-Str.");
        break;
    }
    case 336338:
    {
        returnValue = F("Wilhelm-Brester-Str.");
        break;
    }
    case 336339:
    {
        returnValue = F("Wilhelm-Brielmayer-Str.");
        break;
    }
    case 336340:
    {
        returnValue = F("Wilhelm-Bruer-Str.");
        break;
    }
    case 336341:
    {
        returnValue = F("Wilhelm-Brökelmann-Str.");
        break;
    }
    case 336342:
    {
        returnValue = F("Wilhelm-Brück-Str.");
        break;
    }
    case 336343:
    {
        returnValue = F("Wilhelm-Brücke-Ring");
        break;
    }
    case 336344:
    {
        returnValue = F("Wilhelm-Buchholz-Str.");
        break;
    }
    case 336345:
    {
        returnValue = F("Wilhelm-Buckermann-Str.");
        break;
    }
    case 336346:
    {
        returnValue = F("Wilhelm-Bulk-Str.");
        break;
    }
    case 336347:
    {
        returnValue = F("Wilhelm-Bunsen-Str.");
        break;
    }
    case 336348:
    {
        returnValue = F("Wilhelm-Burkard-Str.");
        break;
    }
    case 336349:
    {
        returnValue = F("Wilhelm-Burmeister-Weg");
        break;
    }
    case 336350:
    {
        returnValue = F("Wilhelm-Busch-Anger");
        break;
    }
    case 336351:
    {
        returnValue = F("Wilhelm-Busch-Gasse");
        break;
    }
    case 336352:
    {
        returnValue = F("Wilhelm-Busch-Passage");
        break;
    }
    case 336353:
    {
        returnValue = F("Wilhelm-Busch-Platz");
        break;
    }
    case 336354:
    {
        returnValue = F("Wilhelm-Busch-Ring");
        break;
    }
    case 336355:
    {
        returnValue = F("Wilhelm-Busch-Str.");
        break;
    }
    case 336356:
    {
        returnValue = F("Wilhelm-Busch-Weg");
        break;
    }
    case 336357:
    {
        returnValue = F("Wilhelm-Busch-Winkel");
        break;
    }
    case 336358:
    {
        returnValue = F("Wilhelm-Buß-Stiege");
        break;
    }
    case 336359:
    {
        returnValue = F("Wilhelm-Böckler-Str.");
        break;
    }
    case 336360:
    {
        returnValue = F("Wilhelm-Böhmer-Str.");
        break;
    }
    case 336361:
    {
        returnValue = F("Wilhelm-Böning-Str.");
        break;
    }
    case 336362:
    {
        returnValue = F("Wilhelm-Böttger-Weg");
        break;
    }
    case 336363:
    {
        returnValue = F("Wilhelm-Büchner-Str.");
        break;
    }
    case 336364:
    {
        returnValue = F("Wilhelm-Büren-Weg");
        break;
    }
    case 336365:
    {
        returnValue = F("Wilhelm-C.-Röntgen-Hof");
        break;
    }
    case 336366:
    {
        returnValue = F("Wilhelm-Canaris-Str.");
        break;
    }
    case 336367:
    {
        returnValue = F("Wilhelm-Carl-Schreiber-Str.");
        break;
    }
    case 336368:
    {
        returnValue = F("Wilhelm-Carl-Str.");
        break;
    }
    case 336369:
    {
        returnValue = F("Wilhelm-Christ-Str.");
        break;
    }
    case 336370:
    {
        returnValue = F("Wilhelm-Christange-Str.");
        break;
    }
    case 336371:
    {
        returnValue = F("Wilhelm-Classen-Str.");
        break;
    }
    case 336372:
    {
        returnValue = F("Wilhelm-Claus-Weg");
        break;
    }
    case 336373:
    {
        returnValue = F("Wilhelm-Cohrs-Weg");
        break;
    }
    case 336374:
    {
        returnValue = F("Wilhelm-Conrad-Röntgen-Ring");
        break;
    }
    case 336375:
    {
        returnValue = F("Wilhelm-Conrad-Röntgen-Stieg");
        break;
    }
    case 336376:
    {
        returnValue = F("Wilhelm-Conrad-Röntgen-Str.");
        break;
    }
    case 336377:
    {
        returnValue = F("Wilhelm-Conrad-Röntgen-Weg");
        break;
    }
    case 336378:
    {
        returnValue = F("Wilhelm-Cord-Müller-Str.");
        break;
    }
    case 336379:
    {
        returnValue = F("Wilhelm-Cordes-Str.");
        break;
    }
    case 336380:
    {
        returnValue = F("Wilhelm-Crone-Hain");
        break;
    }
    case 336381:
    {
        returnValue = F("Wilhelm-Dahl-Str.");
        break;
    }
    case 336382:
    {
        returnValue = F("Wilhelm-Dahlhoff-Str.");
        break;
    }
    case 336383:
    {
        returnValue = F("Wilhelm-Dandler-Str.");
        break;
    }
    case 336384:
    {
        returnValue = F("Wilhelm-Danner-Str.");
        break;
    }
    case 336385:
    {
        returnValue = F("Wilhelm-Davids-Str.");
        break;
    }
    case 336386:
    {
        returnValue = F("Wilhelm-Deecke-Str.");
        break;
    }
    case 336387:
    {
        returnValue = F("Wilhelm-Deisterberg-Str.");
        break;
    }
    case 336388:
    {
        returnValue = F("Wilhelm-Demker-Str.");
        break;
    }
    case 336389:
    {
        returnValue = F("Wilhelm-Deuser-Str.");
        break;
    }
    case 336390:
    {
        returnValue = F("Wilhelm-Diederichs-Str.");
        break;
    }
    case 336391:
    {
        returnValue = F("Wilhelm-Diener-Str.");
        break;
    }
    case 336392:
    {
        returnValue = F("Wilhelm-Diersmann-Str.");
        break;
    }
    case 336393:
    {
        returnValue = F("Wilhelm-Diess-Str.");
        break;
    }
    case 336394:
    {
        returnValue = F("Wilhelm-Diess-Weg");
        break;
    }
    case 336395:
    {
        returnValue = F("Wilhelm-Dieß-Str.");
        break;
    }
    case 336396:
    {
        returnValue = F("Wilhelm-Dilich-Str.");
        break;
    }
    case 336397:
    {
        returnValue = F("Wilhelm-Dodel-Gasse");
        break;
    }
    case 336398:
    {
        returnValue = F("Wilhelm-Dohmen-Str.");
        break;
    }
    case 336399:
    {
        returnValue = F("Wilhelm-Doles-Str.");
        break;
    }
    case 336400:
    {
        returnValue = F("Wilhelm-Dopatka-Park");
        break;
    }
    case 336401:
    {
        returnValue = F("Wilhelm-Dorn-Str.");
        break;
    }
    case 336402:
    {
        returnValue = F("Wilhelm-Dotter-Str.");
        break;
    }
    case 336403:
    {
        returnValue = F("Wilhelm-Drapp-Str.");
        break;
    }
    case 336404:
    {
        returnValue = F("Wilhelm-Dreesen-Bogen");
        break;
    }
    case 336405:
    {
        returnValue = F("Wilhelm-Drescher-Str.");
        break;
    }
    case 336406:
    {
        returnValue = F("Wilhelm-Dröscher-Str.");
        break;
    }
    case 336407:
    {
        returnValue = F("Wilhelm-Dubsky-Weg");
        break;
    }
    case 336408:
    {
        returnValue = F("Wilhelm-Dusch-Str.");
        break;
    }
    case 336409:
    {
        returnValue = F("Wilhelm-Dusche-Weg");
        break;
    }
    case 336410:
    {
        returnValue = F("Wilhelm-Dutt-Str.");
        break;
    }
    case 336411:
    {
        returnValue = F("Wilhelm-Dörnhaus-Str.");
        break;
    }
    case 336412:
    {
        returnValue = F("Wilhelm-Dörries-Str.");
        break;
    }
    case 336413:
    {
        returnValue = F("Wilhelm-Dümmler-Str.");
        break;
    }
    case 336414:
    {
        returnValue = F("Wilhelm-Dürr-Str.");
        break;
    }
    case 336415:
    {
        returnValue = F("Wilhelm-Eckert-Weg");
        break;
    }
    case 336416:
    {
        returnValue = F("Wilhelm-Eckhardt-Platz");
        break;
    }
    case 336417:
    {
        returnValue = F("Wilhelm-Eckhardt-Weg");
        break;
    }
    case 336418:
    {
        returnValue = F("Wilhelm-Eckmann-Weg");
        break;
    }
    case 336419:
    {
        returnValue = F("Wilhelm-Ehlers-Str.");
        break;
    }
    case 336420:
    {
        returnValue = F("Wilhelm-Ehlers-Weg");
        break;
    }
    case 336421:
    {
        returnValue = F("Wilhelm-Ehrich-Str.");
        break;
    }
    case 336422:
    {
        returnValue = F("Wilhelm-Eichhoff-Str.");
        break;
    }
    case 336423:
    {
        returnValue = F("Wilhelm-Eichler-Str.");
        break;
    }
    case 336424:
    {
        returnValue = F("Wilhelm-Eiselin-Str.");
        break;
    }
    case 336425:
    {
        returnValue = F("Wilhelm-Eisen-Weg");
        break;
    }
    case 336426:
    {
        returnValue = F("Wilhelm-Ellermann-Str.");
        break;
    }
    case 336427:
    {
        returnValue = F("Wilhelm-Emanuel-von-Ketteler-Str.");
        break;
    }
    case 336428:
    {
        returnValue = F("Wilhelm-Emde-Str.");
        break;
    }
    case 336429:
    {
        returnValue = F("Wilhelm-Engbrocks-Str.");
        break;
    }
    case 336430:
    {
        returnValue = F("Wilhelm-Engel-Str.");
        break;
    }
    case 336431:
    {
        returnValue = F("Wilhelm-Engelberg-Str.");
        break;
    }
    case 336432:
    {
        returnValue = F("Wilhelm-Engelhardt-Str.");
        break;
    }
    case 336433:
    {
        returnValue = F("Wilhelm-Engels-Str.");
        break;
    }
    case 336434:
    {
        returnValue = F("Wilhelm-Enßle-Str.");
        break;
    }
    case 336435:
    {
        returnValue = F("Wilhelm-Epple-Str.");
        break;
    }
    case 336436:
    {
        returnValue = F("Wilhelm-Euler-Str.");
        break;
    }
    case 336437:
    {
        returnValue = F("Wilhelm-Evers-Str.");
        break;
    }
    case 336438:
    {
        returnValue = F("Wilhelm-Eylmann-Str.");
        break;
    }
    case 336439:
    {
        returnValue = F("Wilhelm-Faber-Str.");
        break;
    }
    case 336440:
    {
        returnValue = F("Wilhelm-Falkenberg-Str.");
        break;
    }
    case 336441:
    {
        returnValue = F("Wilhelm-Falldorf-Str.");
        break;
    }
    case 336442:
    {
        returnValue = F("Wilhelm-Faßoli-Weg");
        break;
    }
    case 336443:
    {
        returnValue = F("Wilhelm-Feder-Str.");
        break;
    }
    case 336444:
    {
        returnValue = F("Wilhelm-Feil-Str.");
        break;
    }
    case 336445:
    {
        returnValue = F("Wilhelm-Fein-Str.");
        break;
    }
    case 336446:
    {
        returnValue = F("Wilhelm-Feiser-Str.");
        break;
    }
    case 336447:
    {
        returnValue = F("Wilhelm-Feldhoff-Str.");
        break;
    }
    case 336448:
    {
        returnValue = F("Wilhelm-Feuerhake-Str.");
        break;
    }
    case 336449:
    {
        returnValue = F("Wilhelm-Feuerherdt-Platz");
        break;
    }
    case 336450:
    {
        returnValue = F("Wilhelm-Feuerherdt-Str.");
        break;
    }
    case 336451:
    {
        returnValue = F("Wilhelm-Feyler-Str.");
        break;
    }
    case 336452:
    {
        returnValue = F("Wilhelm-Fichte-Siedlung");
        break;
    }
    case 336453:
    {
        returnValue = F("Wilhelm-Fiebiger-Str.");
        break;
    }
    case 336454:
    {
        returnValue = F("Wilhelm-Fink-Str.");
        break;
    }
    case 336455:
    {
        returnValue = F("Wilhelm-Finkeldey-Str.");
        break;
    }
    case 336456:
    {
        returnValue = F("Wilhelm-Firl-Str.");
        break;
    }
    case 336457:
    {
        returnValue = F("Wilhelm-Firse-Str.");
        break;
    }
    case 336458:
    {
        returnValue = F("Wilhelm-Fischer-Str.");
        break;
    }
    case 336459:
    {
        returnValue = F("Wilhelm-Fischer-Weg");
        break;
    }
    case 336460:
    {
        returnValue = F("Wilhelm-Flinspach-Str.");
        break;
    }
    case 336461:
    {
        returnValue = F("Wilhelm-Florin-Str.");
        break;
    }
    case 336462:
    {
        returnValue = F("Wilhelm-Florin-Weg");
        break;
    }
    case 336463:
    {
        returnValue = F("Wilhelm-Focke-Str.");
        break;
    }
    case 336464:
    {
        returnValue = F("Wilhelm-Frank-Str.");
        break;
    }
    case 336465:
    {
        returnValue = F("Wilhelm-Frank-Weg");
        break;
    }
    case 336466:
    {
        returnValue = F("Wilhelm-Franke-Str.");
        break;
    }
    case 336467:
    {
        returnValue = F("Wilhelm-Franz-Str.");
        break;
    }
    case 336468:
    {
        returnValue = F("Wilhelm-Fressel-Str.");
        break;
    }
    case 336469:
    {
        returnValue = F("Wilhelm-Freund-Weg");
        break;
    }
    case 336470:
    {
        returnValue = F("Wilhelm-Fricke-Str.");
        break;
    }
    case 336471:
    {
        returnValue = F("Wilhelm-Fricke-Weg");
        break;
    }
    case 336472:
    {
        returnValue = F("Wilhelm-Friedrich-Weg");
        break;
    }
    case 336473:
    {
        returnValue = F("Wilhelm-Frieling-Str.");
        break;
    }
    case 336474:
    {
        returnValue = F("Wilhelm-Fries-Str.");
        break;
    }
    case 336475:
    {
        returnValue = F("Wilhelm-Frische-Str.");
        break;
    }
    case 336476:
    {
        returnValue = F("Wilhelm-Fröhlich-Str.");
        break;
    }
    case 336477:
    {
        returnValue = F("Wilhelm-Fröhlich-Weg");
        break;
    }
    case 336478:
    {
        returnValue = F("Wilhelm-Fulda-Str.");
        break;
    }
    case 336479:
    {
        returnValue = F("Wilhelm-Funk-Str.");
        break;
    }
    case 336480:
    {
        returnValue = F("Wilhelm-Funke-Str.");
        break;
    }
    case 336481:
    {
        returnValue = F("Wilhelm-Furtwängler-Str.");
        break;
    }
    case 336482:
    {
        returnValue = F("Wilhelm-Föll-Str.");
        break;
    }
    case 336483:
    {
        returnValue = F("Wilhelm-G.-Spangenberg-Str.");
        break;
    }
    case 336484:
    {
        returnValue = F("Wilhelm-Ganzhorn-Str.");
        break;
    }
    case 336485:
    {
        returnValue = F("Wilhelm-Ganzhorn-Weg");
        break;
    }
    case 336486:
    {
        returnValue = F("Wilhelm-Gayer-Str.");
        break;
    }
    case 336487:
    {
        returnValue = F("Wilhelm-Geerken-Weg");
        break;
    }
    case 336488:
    {
        returnValue = F("Wilhelm-Gehrlein-Str.");
        break;
    }
    case 336489:
    {
        returnValue = F("Wilhelm-Geiger-Str.");
        break;
    }
    case 336490:
    {
        returnValue = F("Wilhelm-Geiler-Str.");
        break;
    }
    case 336491:
    {
        returnValue = F("Wilhelm-Georg-Str.");
        break;
    }
    case 336492:
    {
        returnValue = F("Wilhelm-Gerhard-Str.");
        break;
    }
    case 336493:
    {
        returnValue = F("Wilhelm-Gerke-Weg");
        break;
    }
    case 336494:
    {
        returnValue = F("Wilhelm-Gerlach-Str.");
        break;
    }
    case 336495:
    {
        returnValue = F("Wilhelm-Giese-Str.");
        break;
    }
    case 336496:
    {
        returnValue = F("Wilhelm-Giesecke-Str.");
        break;
    }
    case 336497:
    {
        returnValue = F("Wilhelm-Gille-Str.");
        break;
    }
    case 336498:
    {
        returnValue = F("Wilhelm-Gisbertz-Str.");
        break;
    }
    case 336499:
    {
        returnValue = F("Wilhelm-Gleimius-Str.");
        break;
    }
    case 336500:
    {
        returnValue = F("Wilhelm-Glock-Str.");
        break;
    }
    case 336501:
    {
        returnValue = F("Wilhelm-Glässing-Str.");
        break;
    }
    case 336502:
    {
        returnValue = F("Wilhelm-Goette-Str.");
        break;
    }
    case 336503:
    {
        returnValue = F("Wilhelm-Gotsmann-Str.");
        break;
    }
    case 336504:
    {
        returnValue = F("Wilhelm-Gottschalk-Str.");
        break;
    }
    case 336505:
    {
        returnValue = F("Wilhelm-Graefe-Str.");
        break;
    }
    case 336506:
    {
        returnValue = F("Wilhelm-Graewe-Str.");
        break;
    }
    case 336507:
    {
        returnValue = F("Wilhelm-Graf-Str.");
        break;
    }
    case 336508:
    {
        returnValue = F("Wilhelm-Graf-Weg");
        break;
    }
    case 336509:
    {
        returnValue = F("Wilhelm-Gramann-Weg");
        break;
    }
    case 336510:
    {
        returnValue = F("Wilhelm-Granderath-Str.");
        break;
    }
    case 336511:
    {
        returnValue = F("Wilhelm-Grasmehr-Str.");
        break;
    }
    case 336512:
    {
        returnValue = F("Wilhelm-Grauer-Str.");
        break;
    }
    case 336513:
    {
        returnValue = F("Wilhelm-Griasch-Weg");
        break;
    }
    case 336514:
    {
        returnValue = F("Wilhelm-Grieser-Str.");
        break;
    }
    case 336515:
    {
        returnValue = F("Wilhelm-Grimm-Weg");
        break;
    }
    case 336516:
    {
        returnValue = F("Wilhelm-Grobben-Str.");
        break;
    }
    case 336517:
    {
        returnValue = F("Wilhelm-Groß-Str.");
        break;
    }
    case 336518:
    {
        returnValue = F("Wilhelm-Grube-Weg");
        break;
    }
    case 336519:
    {
        returnValue = F("Wilhelm-Gruber-Str.");
        break;
    }
    case 336520:
    {
        returnValue = F("Wilhelm-Grune-Str.");
        break;
    }
    case 336521:
    {
        returnValue = F("Wilhelm-Grunwald-Str.");
        break;
    }
    case 336522:
    {
        returnValue = F("Wilhelm-Grupp-Str.");
        break;
    }
    case 336523:
    {
        returnValue = F("Wilhelm-Gräser-Str.");
        break;
    }
    case 336524:
    {
        returnValue = F("Wilhelm-Grötz-Str.");
        break;
    }
    case 336525:
    {
        returnValue = F("Wilhelm-Grümer-Weg");
        break;
    }
    case 336526:
    {
        returnValue = F("Wilhelm-Grüttemeier-Weg");
        break;
    }
    case 336527:
    {
        returnValue = F("Wilhelm-Guse-Str.");
        break;
    }
    case 336528:
    {
        returnValue = F("Wilhelm-Gutbrod-Str.");
        break;
    }
    case 336529:
    {
        returnValue = F("Wilhelm-Guthke-Str.");
        break;
    }
    case 336530:
    {
        returnValue = F("Wilhelm-Görg-Str.");
        break;
    }
    case 336531:
    {
        returnValue = F("Wilhelm-Götting-Str.");
        break;
    }
    case 336532:
    {
        returnValue = F("Wilhelm-Götz-Str.");
        break;
    }
    case 336533:
    {
        returnValue = F("Wilhelm-Gülpen-Str.");
        break;
    }
    case 336534:
    {
        returnValue = F("Wilhelm-Günter-Weg");
        break;
    }
    case 336535:
    {
        returnValue = F("Wilhelm-Haaf-Str.");
        break;
    }
    case 336536:
    {
        returnValue = F("Wilhelm-Haarer-Str.");
        break;
    }
    case 336537:
    {
        returnValue = F("Wilhelm-Haarmann-Str.");
        break;
    }
    case 336538:
    {
        returnValue = F("Wilhelm-Haas-Platz");
        break;
    }
    case 336539:
    {
        returnValue = F("Wilhelm-Haas-Str.");
        break;
    }
    case 336540:
    {
        returnValue = F("Wilhelm-Haas-Weg");
        break;
    }
    case 336541:
    {
        returnValue = F("Wilhelm-Hachtel-Str.");
        break;
    }
    case 336542:
    {
        returnValue = F("Wilhelm-Hacker-Str.");
        break;
    }
    case 336543:
    {
        returnValue = F("Wilhelm-Hagen-Str.");
        break;
    }
    case 336544:
    {
        returnValue = F("Wilhelm-Hamm-Str.");
        break;
    }
    case 336545:
    {
        returnValue = F("Wilhelm-Hammann-Str.");
        break;
    }
    case 336546:
    {
        returnValue = F("Wilhelm-Hanebuth-Weg");
        break;
    }
    case 336547:
    {
        returnValue = F("Wilhelm-Hardebeck-Str.");
        break;
    }
    case 336548:
    {
        returnValue = F("Wilhelm-Hardt-Str.");
        break;
    }
    case 336549:
    {
        returnValue = F("Wilhelm-Harms-Str.");
        break;
    }
    case 336550:
    {
        returnValue = F("Wilhelm-Hartz-Str.");
        break;
    }
    case 336551:
    {
        returnValue = F("Wilhelm-Hasemann-Str.");
        break;
    }
    case 336552:
    {
        returnValue = F("Wilhelm-Hasenclever-Str.");
        break;
    }
    case 336553:
    {
        returnValue = F("Wilhelm-Haspel-Str.");
        break;
    }
    case 336554:
    {
        returnValue = F("Wilhelm-Hasselmann-Str.");
        break;
    }
    case 336555:
    {
        returnValue = F("Wilhelm-Hauff-Allee");
        break;
    }
    case 336556:
    {
        returnValue = F("Wilhelm-Hauff-Str.");
        break;
    }
    case 336557:
    {
        returnValue = F("Wilhelm-Hauff-Weg");
        break;
    }
    case 336558:
    {
        returnValue = F("Wilhelm-Haug-Str.");
        break;
    }
    case 336559:
    {
        returnValue = F("Wilhelm-Hausenstein-Str.");
        break;
    }
    case 336560:
    {
        returnValue = F("Wilhelm-Hautau-Str.");
        break;
    }
    case 336561:
    {
        returnValue = F("Wilhelm-Haverkamp-Str.");
        break;
    }
    case 336562:
    {
        returnValue = F("Wilhelm-Heck-Str.");
        break;
    }
    case 336563:
    {
        returnValue = F("Wilhelm-Heidbreder-Str.");
        break;
    }
    case 336564:
    {
        returnValue = F("Wilhelm-Heidkamp-Str.");
        break;
    }
    case 336565:
    {
        returnValue = F("Wilhelm-Heidsiek-Str.");
        break;
    }
    case 336566:
    {
        returnValue = F("Wilhelm-Heidwolf-Arnold-Platz");
        break;
    }
    case 336567:
    {
        returnValue = F("Wilhelm-Heile-Str.");
        break;
    }
    case 336568:
    {
        returnValue = F("Wilhelm-Heimberg-Weg");
        break;
    }
    case 336569:
    {
        returnValue = F("Wilhelm-Heinichen-Ring");
        break;
    }
    case 336570:
    {
        returnValue = F("Wilhelm-Heinrich-Brücke");
        break;
    }
    case 336571:
    {
        returnValue = F("Wilhelm-Heinrich-Str.");
        break;
    }
    case 336572:
    {
        returnValue = F("Wilhelm-Heinrich-Weg");
        break;
    }
    case 336573:
    {
        returnValue = F("Wilhelm-Heinrichs-Str.");
        break;
    }
    case 336574:
    {
        returnValue = F("Wilhelm-Heitmann-Platz");
        break;
    }
    case 336575:
    {
        returnValue = F("Wilhelm-Heller-Ring");
        break;
    }
    case 336576:
    {
        returnValue = F("Wilhelm-Heller-Str.");
        break;
    }
    case 336577:
    {
        returnValue = F("Wilhelm-Helwig-Str.");
        break;
    }
    case 336578:
    {
        returnValue = F("Wilhelm-Hennemann-Str.");
        break;
    }
    case 336579:
    {
        returnValue = F("Wilhelm-Hensel-Str.");
        break;
    }
    case 336580:
    {
        returnValue = F("Wilhelm-Henz-Weg");
        break;
    }
    case 336581:
    {
        returnValue = F("Wilhelm-Henze-Str.");
        break;
    }
    case 336582:
    {
        returnValue = F("Wilhelm-Henze-Weg");
        break;
    }
    case 336583:
    {
        returnValue = F("Wilhelm-Herkert-Str.");
        break;
    }
    case 336584:
    {
        returnValue = F("Wilhelm-Herter-Str.");
        break;
    }
    case 336585:
    {
        returnValue = F("Wilhelm-Hertz-Str.");
        break;
    }
    case 336586:
    {
        returnValue = F("Wilhelm-Herz-Str.");
        break;
    }
    case 336587:
    {
        returnValue = F("Wilhelm-Heuck-Allee");
        break;
    }
    case 336588:
    {
        returnValue = F("Wilhelm-Heusel-Str.");
        break;
    }
    case 336589:
    {
        returnValue = F("Wilhelm-Hey-Str.");
        break;
    }
    case 336590:
    {
        returnValue = F("Wilhelm-Heß-Str.");
        break;
    }
    case 336591:
    {
        returnValue = F("Wilhelm-Hidding-Weg");
        break;
    }
    case 336592:
    {
        returnValue = F("Wilhelm-Hildebrandt-Str.");
        break;
    }
    case 336593:
    {
        returnValue = F("Wilhelm-Hillermann-Weg");
        break;
    }
    case 336594:
    {
        returnValue = F("Wilhelm-Hillmer-Str.");
        break;
    }
    case 336595:
    {
        returnValue = F("Wilhelm-Hirchert-Str.");
        break;
    }
    case 336596:
    {
        returnValue = F("Wilhelm-Hirte-Str.");
        break;
    }
    case 336597:
    {
        returnValue = F("Wilhelm-Hoegner-Platz");
        break;
    }
    case 336598:
    {
        returnValue = F("Wilhelm-Hoegner-Str.");
        break;
    }
    case 336599:
    {
        returnValue = F("Wilhelm-Hoffmann-Siedlung");
        break;
    }
    case 336600:
    {
        returnValue = F("Wilhelm-Hoffmann-Str.");
        break;
    }
    case 336601:
    {
        returnValue = F("Wilhelm-Hoffstadt-Str.");
        break;
    }
    case 336602:
    {
        returnValue = F("Wilhelm-Hohoff-Weg");
        break;
    }
    case 336603:
    {
        returnValue = F("Wilhelm-Holert-Str.");
        break;
    }
    case 336604:
    {
        returnValue = F("Wilhelm-Holländer-Weg");
        break;
    }
    case 336605:
    {
        returnValue = F("Wilhelm-Holtz-Str.");
        break;
    }
    case 336606:
    {
        returnValue = F("Wilhelm-Holzamer-Str.");
        break;
    }
    case 336607:
    {
        returnValue = F("Wilhelm-Holzamer-Weg");
        break;
    }
    case 336608:
    {
        returnValue = F("Wilhelm-Homburger-Str.");
        break;
    }
    case 336609:
    {
        returnValue = F("Wilhelm-Huber-Str.");
        break;
    }
    case 336610:
    {
        returnValue = F("Wilhelm-Huck-Str.");
        break;
    }
    case 336611:
    {
        returnValue = F("Wilhelm-Hugues-Str.");
        break;
    }
    case 336612:
    {
        returnValue = F("Wilhelm-Humbeck-Str.");
        break;
    }
    case 336613:
    {
        returnValue = F("Wilhelm-Humser-Str.");
        break;
    }
    case 336614:
    {
        returnValue = F("Wilhelm-Hurtz-Str.");
        break;
    }
    case 336615:
    {
        returnValue = F("Wilhelm-Högner-Str.");
        break;
    }
    case 336616:
    {
        returnValue = F("Wilhelm-Höpflinger-Str.");
        break;
    }
    case 336617:
    {
        returnValue = F("Wilhelm-Hörmann-Str.");
        break;
    }
    case 336618:
    {
        returnValue = F("Wilhelm-Hörmes-Str.");
        break;
    }
    case 336619:
    {
        returnValue = F("Wilhelm-Hücker-Str.");
        break;
    }
    case 336620:
    {
        returnValue = F("Wilhelm-Hüffer-Str.");
        break;
    }
    case 336621:
    {
        returnValue = F("Wilhelm-Hüsing-Str.");
        break;
    }
    case 336622:
    {
        returnValue = F("Wilhelm-Idel-Str.");
        break;
    }
    case 336623:
    {
        returnValue = F("Wilhelm-Ingold-Weg");
        break;
    }
    case 336624:
    {
        returnValue = F("Wilhelm-Ivens-Weg");
        break;
    }
    case 336625:
    {
        returnValue = F("Wilhelm-Jackson-Str.");
        break;
    }
    case 336626:
    {
        returnValue = F("Wilhelm-Jacoby-Str.");
        break;
    }
    case 336627:
    {
        returnValue = F("Wilhelm-Jaklinski-Platz");
        break;
    }
    case 336628:
    {
        returnValue = F("Wilhelm-Jansen-Str.");
        break;
    }
    case 336629:
    {
        returnValue = F("Wilhelm-Janßen-Platz");
        break;
    }
    case 336630:
    {
        returnValue = F("Wilhelm-Jark-Weg");
        break;
    }
    case 336631:
    {
        returnValue = F("Wilhelm-Jensen-Str.");
        break;
    }
    case 336632:
    {
        returnValue = F("Wilhelm-Jensen-Weg");
        break;
    }
    case 336633:
    {
        returnValue = F("Wilhelm-Jerger-Str.");
        break;
    }
    case 336634:
    {
        returnValue = F("Wilhelm-Johnsen-Str.");
        break;
    }
    case 336635:
    {
        returnValue = F("Wilhelm-Jost-Ring");
        break;
    }
    case 336636:
    {
        returnValue = F("Wilhelm-Jourdan-Weg");
        break;
    }
    case 336637:
    {
        returnValue = F("Wilhelm-Joutz-Str.");
        break;
    }
    case 336638:
    {
        returnValue = F("Wilhelm-Jung-Str.");
        break;
    }
    case 336639:
    {
        returnValue = F("Wilhelm-Jäger-Str.");
        break;
    }
    case 336640:
    {
        returnValue = F("Wilhelm-Kaiser-Weg");
        break;
    }
    case 336641:
    {
        returnValue = F("Wilhelm-Kalff-Str.");
        break;
    }
    case 336642:
    {
        returnValue = F("Wilhelm-Kaltenbach-Weg");
        break;
    }
    case 336643:
    {
        returnValue = F("Wilhelm-Kamm-Str.");
        break;
    }
    case 336644:
    {
        returnValue = F("Wilhelm-Kapferer-Platz");
        break;
    }
    case 336645:
    {
        returnValue = F("Wilhelm-Kappus-Weg");
        break;
    }
    case 336646:
    {
        returnValue = F("Wilhelm-Kastern-Str.");
        break;
    }
    case 336647:
    {
        returnValue = F("Wilhelm-Kattwinkel-Str.");
        break;
    }
    case 336648:
    {
        returnValue = F("Wilhelm-Kaulbach-Str.");
        break;
    }
    case 336649:
    {
        returnValue = F("Wilhelm-Kaulisch-Str.");
        break;
    }
    case 336650:
    {
        returnValue = F("Wilhelm-Kaune-Str.");
        break;
    }
    case 336651:
    {
        returnValue = F("Wilhelm-Kaune-Weg");
        break;
    }
    case 336652:
    {
        returnValue = F("Wilhelm-Keil-Anlage");
        break;
    }
    case 336653:
    {
        returnValue = F("Wilhelm-Keil-Str.");
        break;
    }
    case 336654:
    {
        returnValue = F("Wilhelm-Keim-Str.");
        break;
    }
    case 336655:
    {
        returnValue = F("Wilhelm-Keller-Str.");
        break;
    }
    case 336656:
    {
        returnValue = F("Wilhelm-Kellermann-Str.");
        break;
    }
    case 336657:
    {
        returnValue = F("Wilhelm-Kellermann-Weg");
        break;
    }
    case 336658:
    {
        returnValue = F("Wilhelm-Kemmelmeyer-Bogen");
        break;
    }
    case 336659:
    {
        returnValue = F("Wilhelm-Kemner-Str.");
        break;
    }
    case 336660:
    {
        returnValue = F("Wilhelm-Kempff-Weg");
        break;
    }
    case 336661:
    {
        returnValue = F("Wilhelm-Keppler-Str.");
        break;
    }
    case 336662:
    {
        returnValue = F("Wilhelm-Kiefer-Weg");
        break;
    }
    case 336663:
    {
        returnValue = F("Wilhelm-Kiel-Str.");
        break;
    }
    case 336664:
    {
        returnValue = F("Wilhelm-Kilian-Str.");
        break;
    }
    case 336665:
    {
        returnValue = F("Wilhelm-Kirchner-Ring");
        break;
    }
    case 336666:
    {
        returnValue = F("Wilhelm-Kirschner-Weg");
        break;
    }
    case 336667:
    {
        returnValue = F("Wilhelm-Kistenmacher-Str.");
        break;
    }
    case 336668:
    {
        returnValue = F("Wilhelm-Kittelberger-Str.");
        break;
    }
    case 336669:
    {
        returnValue = F("Wilhelm-Klauditz-Str.");
        break;
    }
    case 336670:
    {
        returnValue = F("Wilhelm-Kleemann-Weg");
        break;
    }
    case 336671:
    {
        returnValue = F("Wilhelm-Klein-Str.");
        break;
    }
    case 336672:
    {
        returnValue = F("Wilhelm-Kleisslerweg");
        break;
    }
    case 336673:
    {
        returnValue = F("Wilhelm-Klemm-Str.");
        break;
    }
    case 336674:
    {
        returnValue = F("Wilhelm-Kleyling-Str.");
        break;
    }
    case 336675:
    {
        returnValue = F("Wilhelm-Klink-Str.");
        break;
    }
    case 336676:
    {
        returnValue = F("Wilhelm-Klinz-Weg");
        break;
    }
    case 336677:
    {
        returnValue = F("Wilhelm-Klipp-Str.");
        break;
    }
    case 336678:
    {
        returnValue = F("Wilhelm-Klopp-Promenade");
        break;
    }
    case 336679:
    {
        returnValue = F("Wilhelm-Klug-Str.");
        break;
    }
    case 336680:
    {
        returnValue = F("Wilhelm-Klunk-Weg");
        break;
    }
    case 336681:
    {
        returnValue = F("Wilhelm-Klönner-Str.");
        break;
    }
    case 336682:
    {
        returnValue = F("Wilhelm-Knigge-Str.");
        break;
    }
    case 336683:
    {
        returnValue = F("Wilhelm-Knupp-Str.");
        break;
    }
    case 336684:
    {
        returnValue = F("Wilhelm-Knöchel-Weg");
        break;
    }
    case 336685:
    {
        returnValue = F("Wilhelm-Kobbe-Str.");
        break;
    }
    case 336686:
    {
        returnValue = F("Wilhelm-Koch-Str.");
        break;
    }
    case 336687:
    {
        returnValue = F("Wilhelm-Koch-Weg");
        break;
    }
    case 336688:
    {
        returnValue = F("Wilhelm-Koene-Str.");
        break;
    }
    case 336689:
    {
        returnValue = F("Wilhelm-Koenen-Str.");
        break;
    }
    case 336690:
    {
        returnValue = F("Wilhelm-Kohlhammer-Str.");
        break;
    }
    case 336691:
    {
        returnValue = F("Wilhelm-Kohlhoff-Str.");
        break;
    }
    case 336692:
    {
        returnValue = F("Wilhelm-Kopf-Str.");
        break;
    }
    case 336693:
    {
        returnValue = F("Wilhelm-Kopp-Str.");
        break;
    }
    case 336694:
    {
        returnValue = F("Wilhelm-Kraatz-Str.");
        break;
    }
    case 336695:
    {
        returnValue = F("Wilhelm-Kraft-Str.");
        break;
    }
    case 336696:
    {
        returnValue = F("Wilhelm-Krause-Weg");
        break;
    }
    case 336697:
    {
        returnValue = F("Wilhelm-Kraushaar-Str.");
        break;
    }
    case 336698:
    {
        returnValue = F("Wilhelm-Kraut-Str.");
        break;
    }
    case 336699:
    {
        returnValue = F("Wilhelm-Kreis-Str.");
        break;
    }
    case 336700:
    {
        returnValue = F("Wilhelm-Kreutzberg-Str.");
        break;
    }
    case 336701:
    {
        returnValue = F("Wilhelm-Kricheldorff-Str.");
        break;
    }
    case 336702:
    {
        returnValue = F("Wilhelm-Kritzinger-Str.");
        break;
    }
    case 336703:
    {
        returnValue = F("Wilhelm-Krull-Str.");
        break;
    }
    case 336704:
    {
        returnValue = F("Wilhelm-Kruse-Str.");
        break;
    }
    case 336705:
    {
        returnValue = F("Wilhelm-Kruse-Weg");
        break;
    }
    case 336706:
    {
        returnValue = F("Wilhelm-Krämer-Weg");
        break;
    }
    case 336707:
    {
        returnValue = F("Wilhelm-Kröger-Str.");
        break;
    }
    case 336708:
    {
        returnValue = F("Wilhelm-Kröner-Str.");
        break;
    }
    case 336709:
    {
        returnValue = F("Wilhelm-Kröz-Weg");
        break;
    }
    case 336710:
    {
        returnValue = F("Wilhelm-Krüger-Str.");
        break;
    }
    case 336711:
    {
        returnValue = F("Wilhelm-Kuelz-Str.");
        break;
    }
    case 336712:
    {
        returnValue = F("Wilhelm-Kuhn-Str.");
        break;
    }
    case 336713:
    {
        returnValue = F("Wilhelm-Kuhn-Weg");
        break;
    }
    case 336714:
    {
        returnValue = F("Wilhelm-Kunze-Ring");
        break;
    }
    case 336715:
    {
        returnValue = F("Wilhelm-Köhler-Str.");
        break;
    }
    case 336716:
    {
        returnValue = F("Wilhelm-Köhne-Str.");
        break;
    }
    case 336717:
    {
        returnValue = F("Wilhelm-Köhne-Weg");
        break;
    }
    case 336718:
    {
        returnValue = F("Wilhelm-Kölling-Str.");
        break;
    }
    case 336719:
    {
        returnValue = F("Wilhelm-Köllner-Str.");
        break;
    }
    case 336720:
    {
        returnValue = F("Wilhelm-Kühn-Str.");
        break;
    }
    case 336721:
    {
        returnValue = F("Wilhelm-Külper-Str.");
        break;
    }
    case 336722:
    {
        returnValue = F("Wilhelm-Külz-Platz");
        break;
    }
    case 336723:
    {
        returnValue = F("Wilhelm-Külz-Str.");
        break;
    }
    case 336724:
    {
        returnValue = F("Wilhelm-Külz-Weg");
        break;
    }
    case 336725:
    {
        returnValue = F("Wilhelm-Küppers-Str.");
        break;
    }
    case 336726:
    {
        returnValue = F("Wilhelm-Küppers-Weg");
        break;
    }
    case 336727:
    {
        returnValue = F("Wilhelm-Küster-Str.");
        break;
    }
    case 336728:
    {
        returnValue = F("Wilhelm-Laage-Weg");
        break;
    }
    case 336729:
    {
        returnValue = F("Wilhelm-Lampe-Str.");
        break;
    }
    case 336730:
    {
        returnValue = F("Wilhelm-Langguth-Str.");
        break;
    }
    case 336731:
    {
        returnValue = F("Wilhelm-Lantermann-Str.");
        break;
    }
    case 336732:
    {
        returnValue = F("Wilhelm-Leger-Str.");
        break;
    }
    case 336733:
    {
        returnValue = F("Wilhelm-Lehmann-Str.");
        break;
    }
    case 336734:
    {
        returnValue = F("Wilhelm-Lehmbruck-Str.");
        break;
    }
    case 336735:
    {
        returnValue = F("Wilhelm-Leibl-Platz");
        break;
    }
    case 336736:
    {
        returnValue = F("Wilhelm-Leibl-Str.");
        break;
    }
    case 336737:
    {
        returnValue = F("Wilhelm-Leibl-Weg");
        break;
    }
    case 336738:
    {
        returnValue = F("Wilhelm-Leibniz-Stieg");
        break;
    }
    case 336739:
    {
        returnValue = F("Wilhelm-Leibniz-Str.");
        break;
    }
    case 336740:
    {
        returnValue = F("Wilhelm-Leibniz-Weg");
        break;
    }
    case 336741:
    {
        returnValue = F("Wilhelm-Leichum-Str.");
        break;
    }
    case 336742:
    {
        returnValue = F("Wilhelm-Leitschuh-Str.");
        break;
    }
    case 336743:
    {
        returnValue = F("Wilhelm-Lennemann-Str.");
        break;
    }
    case 336744:
    {
        returnValue = F("Wilhelm-Leuschner Str.");
        break;
    }
    case 336745:
    {
        returnValue = F("Wilhelm-Leuschner-Platz");
        break;
    }
    case 336746:
    {
        returnValue = F("Wilhelm-Leuschner-Str.");
        break;
    }
    case 336747:
    {
        returnValue = F("Wilhelm-Leuschner-Weg");
        break;
    }
    case 336748:
    {
        returnValue = F("Wilhelm-Ley-Str.");
        break;
    }
    case 336749:
    {
        returnValue = F("Wilhelm-Liebertz-Str.");
        break;
    }
    case 336750:
    {
        returnValue = F("Wilhelm-Liebetrau-Weg");
        break;
    }
    case 336751:
    {
        returnValue = F("Wilhelm-Liebhaber-Str.");
        break;
    }
    case 336752:
    {
        returnValue = F("Wilhelm-Liebherr-Str.");
        break;
    }
    case 336753:
    {
        returnValue = F("Wilhelm-Liebknecht-Str.");
        break;
    }
    case 336754:
    {
        returnValue = F("Wilhelm-Lindig-Str.");
        break;
    }
    case 336755:
    {
        returnValue = F("Wilhelm-Ling-Str.");
        break;
    }
    case 336756:
    {
        returnValue = F("Wilhelm-Lobsien-Str.");
        break;
    }
    case 336757:
    {
        returnValue = F("Wilhelm-Loewe-Str.");
        break;
    }
    case 336758:
    {
        returnValue = F("Wilhelm-Loh-Str.");
        break;
    }
    case 336759:
    {
        returnValue = F("Wilhelm-Lorenz-Str.");
        break;
    }
    case 336760:
    {
        returnValue = F("Wilhelm-Lorenz-Weg");
        break;
    }
    case 336761:
    {
        returnValue = F("Wilhelm-Lotze-Weg");
        break;
    }
    case 336762:
    {
        returnValue = F("Wilhelm-Lucke-Weg");
        break;
    }
    case 336763:
    {
        returnValue = F("Wilhelm-Lutz-Str.");
        break;
    }
    case 336764:
    {
        returnValue = F("Wilhelm-Lux-Str.");
        break;
    }
    case 336765:
    {
        returnValue = F("Wilhelm-Lächele-Str.");
        break;
    }
    case 336766:
    {
        returnValue = F("Wilhelm-Läpple-Weg");
        break;
    }
    case 336767:
    {
        returnValue = F("Wilhelm-Löbbe-Allee");
        break;
    }
    case 336768:
    {
        returnValue = F("Wilhelm-Löbbe-Str.");
        break;
    }
    case 336769:
    {
        returnValue = F("Wilhelm-Löber-Str.");
        break;
    }
    case 336770:
    {
        returnValue = F("Wilhelm-Löhe-Ring");
        break;
    }
    case 336771:
    {
        returnValue = F("Wilhelm-Löhe-Str.");
        break;
    }
    case 336772:
    {
        returnValue = F("Wilhelm-Löhe-Weg");
        break;
    }
    case 336773:
    {
        returnValue = F("Wilhelm-Löhne-Str.");
        break;
    }
    case 336774:
    {
        returnValue = F("Wilhelm-Löhrs-Weg");
        break;
    }
    case 336775:
    {
        returnValue = F("Wilhelm-Lückert-Str.");
        break;
    }
    case 336776:
    {
        returnValue = F("Wilhelm-Maass-Weg");
        break;
    }
    case 336777:
    {
        returnValue = F("Wilhelm-Maassen-Str.");
        break;
    }
    case 336778:
    {
        returnValue = F("Wilhelm-Maier-Str.");
        break;
    }
    case 336779:
    {
        returnValue = F("Wilhelm-Maigatter-Weg");
        break;
    }
    case 336780:
    {
        returnValue = F("Wilhelm-Maisel-Str.");
        break;
    }
    case 336781:
    {
        returnValue = F("Wilhelm-Malsch-Weg");
        break;
    }
    case 336782:
    {
        returnValue = F("Wilhelm-Mangels-Str.");
        break;
    }
    case 336783:
    {
        returnValue = F("Wilhelm-Mankel-Str.");
        break;
    }
    case 336784:
    {
        returnValue = F("Wilhelm-Mann-Str.");
        break;
    }
    case 336785:
    {
        returnValue = F("Wilhelm-Markgraf-Str.");
        break;
    }
    case 336786:
    {
        returnValue = F("Wilhelm-Martin-Dienstbach-Str.");
        break;
    }
    case 336787:
    {
        returnValue = F("Wilhelm-Martin-Str.");
        break;
    }
    case 336788:
    {
        returnValue = F("Wilhelm-Marx-Str.");
        break;
    }
    case 336789:
    {
        returnValue = F("Wilhelm-Mathern-Str.");
        break;
    }
    case 336790:
    {
        returnValue = F("Wilhelm-Matschke-Str.");
        break;
    }
    case 336791:
    {
        returnValue = F("Wilhelm-Mattes-Str.");
        break;
    }
    case 336792:
    {
        returnValue = F("Wilhelm-Mattes-Weg");
        break;
    }
    case 336793:
    {
        returnValue = F("Wilhelm-Maurer-Weg");
        break;
    }
    case 336794:
    {
        returnValue = F("Wilhelm-Maxon-Str.");
        break;
    }
    case 336795:
    {
        returnValue = F("Wilhelm-Maybach-Str.");
        break;
    }
    case 336796:
    {
        returnValue = F("Wilhelm-Maybach-Weg");
        break;
    }
    case 336797:
    {
        returnValue = F("Wilhelm-Mayer-Str.");
        break;
    }
    case 336798:
    {
        returnValue = F("Wilhelm-Meier-Str.");
        break;
    }
    case 336799:
    {
        returnValue = F("Wilhelm-Meinicke-Str.");
        break;
    }
    case 336800:
    {
        returnValue = F("Wilhelm-Meister-Str.");
        break;
    }
    case 336801:
    {
        returnValue = F("Wilhelm-Meister-Weg");
        break;
    }
    case 336802:
    {
        returnValue = F("Wilhelm-Mellies-Str.");
        break;
    }
    case 336803:
    {
        returnValue = F("Wilhelm-Mennerich-Str.");
        break;
    }
    case 336804:
    {
        returnValue = F("Wilhelm-Mensinga-Str.");
        break;
    }
    case 336805:
    {
        returnValue = F("Wilhelm-Mercy-Str.");
        break;
    }
    case 336806:
    {
        returnValue = F("Wilhelm-Merz-Str.");
        break;
    }
    case 336807:
    {
        returnValue = F("Wilhelm-Messer-Str.");
        break;
    }
    case 336808:
    {
        returnValue = F("Wilhelm-Messerschmidt-Platz");
        break;
    }
    case 336809:
    {
        returnValue = F("Wilhelm-Meußdoerffer-Str.");
        break;
    }
    case 336810:
    {
        returnValue = F("Wilhelm-Mewing-Weg");
        break;
    }
    case 336811:
    {
        returnValue = F("Wilhelm-Meyer-Brücke");
        break;
    }
    case 336812:
    {
        returnValue = F("Wilhelm-Meyer-Str.");
        break;
    }
    case 336813:
    {
        returnValue = F("Wilhelm-Middendorf-Str.");
        break;
    }
    case 336814:
    {
        returnValue = F("Wilhelm-Milius-Weg");
        break;
    }
    case 336815:
    {
        returnValue = F("Wilhelm-Mittelmann-Str.");
        break;
    }
    case 336816:
    {
        returnValue = F("Wilhelm-Mittelmeier-Str.");
        break;
    }
    case 336817:
    {
        returnValue = F("Wilhelm-Mittendorf-Stieg");
        break;
    }
    case 336818:
    {
        returnValue = F("Wilhelm-Morgner-Str.");
        break;
    }
    case 336819:
    {
        returnValue = F("Wilhelm-Morgner-Weg");
        break;
    }
    case 336820:
    {
        returnValue = F("Wilhelm-Moriell-Str.");
        break;
    }
    case 336821:
    {
        returnValue = F("Wilhelm-Moritz-Str.");
        break;
    }
    case 336822:
    {
        returnValue = F("Wilhelm-Mund-Str.");
        break;
    }
    case 336823:
    {
        returnValue = F("Wilhelm-März-Str.");
        break;
    }
    case 336824:
    {
        returnValue = F("Wilhelm-Mönch-Str.");
        break;
    }
    case 336825:
    {
        returnValue = F("Wilhelm-Mühler-Platz");
        break;
    }
    case 336826:
    {
        returnValue = F("Wilhelm-Mühlmeyer-Str.");
        break;
    }
    case 336827:
    {
        returnValue = F("Wilhelm-Müller-Str.");
        break;
    }
    case 336828:
    {
        returnValue = F("Wilhelm-Müller-Weg");
        break;
    }
    case 336829:
    {
        returnValue = F("Wilhelm-Münker-Str.");
        break;
    }
    case 336830:
    {
        returnValue = F("Wilhelm-Münker-Weg");
        break;
    }
    case 336831:
    {
        returnValue = F("Wilhelm-Münster-Str.");
        break;
    }
    case 336832:
    {
        returnValue = F("Wilhelm-Nagel-Allee");
        break;
    }
    case 336833:
    {
        returnValue = F("Wilhelm-Nagel-Str.");
        break;
    }
    case 336834:
    {
        returnValue = F("Wilhelm-Nagel-Weg");
        break;
    }
    case 336835:
    {
        returnValue = F("Wilhelm-Nebelung-Str.");
        break;
    }
    case 336836:
    {
        returnValue = F("Wilhelm-Nesen-Str.");
        break;
    }
    case 336837:
    {
        returnValue = F("Wilhelm-Neuffer-Str.");
        break;
    }
    case 336838:
    {
        returnValue = F("Wilhelm-Neuhaus-Str.");
        break;
    }
    case 336839:
    {
        returnValue = F("Wilhelm-Neuhaus-Weg");
        break;
    }
    case 336840:
    {
        returnValue = F("Wilhelm-Neuhäuser-Str.");
        break;
    }
    case 336841:
    {
        returnValue = F("Wilhelm-Neumeyer-Str.");
        break;
    }
    case 336842:
    {
        returnValue = F("Wilhelm-Nevoigt-Platz");
        break;
    }
    case 336843:
    {
        returnValue = F("Wilhelm-Nevoigt-Str.");
        break;
    }
    case 336844:
    {
        returnValue = F("Wilhelm-Ney-Str.");
        break;
    }
    case 336845:
    {
        returnValue = F("Wilhelm-Niedermayer-Str.");
        break;
    }
    case 336846:
    {
        returnValue = F("Wilhelm-Niemeier-Str.");
        break;
    }
    case 336847:
    {
        returnValue = F("Wilhelm-Niemeier-Weg");
        break;
    }
    case 336848:
    {
        returnValue = F("Wilhelm-Noll-Str.");
        break;
    }
    case 336849:
    {
        returnValue = F("Wilhelm-Norres-Str.");
        break;
    }
    case 336850:
    {
        returnValue = F("Wilhelm-Oberhaus-Str.");
        break;
    }
    case 336851:
    {
        returnValue = F("Wilhelm-Oberle-Weg");
        break;
    }
    case 336852:
    {
        returnValue = F("Wilhelm-Oberlies-Weg");
        break;
    }
    case 336853:
    {
        returnValue = F("Wilhelm-Oesterle-Str.");
        break;
    }
    case 336854:
    {
        returnValue = F("Wilhelm-Oestreich-Str.");
        break;
    }
    case 336855:
    {
        returnValue = F("Wilhelm-Offermann-Str.");
        break;
    }
    case 336856:
    {
        returnValue = F("Wilhelm-Ohlert-Weg");
        break;
    }
    case 336857:
    {
        returnValue = F("Wilhelm-Ohlert-Weg (neu)");
        break;
    }
    case 336858:
    {
        returnValue = F("Wilhelm-Ohse-Weg");
        break;
    }
    case 336859:
    {
        returnValue = F("Wilhelm-Oldörp-Str.");
        break;
    }
    case 336860:
    {
        returnValue = F("Wilhelm-Olejnik-Str.");
        break;
    }
    case 336861:
    {
        returnValue = F("Wilhelm-Opheys-Str.");
        break;
    }
    case 336862:
    {
        returnValue = F("Wilhelm-Ortloff-Weg");
        break;
    }
    case 336863:
    {
        returnValue = F("Wilhelm-Ostwald-Park");
        break;
    }
    case 336864:
    {
        returnValue = F("Wilhelm-Ostwald-Str.");
        break;
    }
    case 336865:
    {
        returnValue = F("Wilhelm-Oswald-Str.");
        break;
    }
    case 336866:
    {
        returnValue = F("Wilhelm-Otten-Str.");
        break;
    }
    case 336867:
    {
        returnValue = F("Wilhelm-Ottermann-Weg");
        break;
    }
    case 336868:
    {
        returnValue = F("Wilhelm-Otto-Str.");
        break;
    }
    case 336869:
    {
        returnValue = F("Wilhelm-Pampus-Höhe");
        break;
    }
    case 336870:
    {
        returnValue = F("Wilhelm-Passage");
        break;
    }
    case 336871:
    {
        returnValue = F("Wilhelm-Passavant-Str.");
        break;
    }
    case 336872:
    {
        returnValue = F("Wilhelm-Paul-Str.");
        break;
    }
    case 336873:
    {
        returnValue = F("Wilhelm-Paulus-Str.");
        break;
    }
    case 336874:
    {
        returnValue = F("Wilhelm-Peek-Str.");
        break;
    }
    case 336875:
    {
        returnValue = F("Wilhelm-Pfeffer-Str.");
        break;
    }
    case 336876:
    {
        returnValue = F("Wilhelm-Pfeiffer-Str.");
        break;
    }
    case 336877:
    {
        returnValue = F("Wilhelm-Pfeiffer-Weg");
        break;
    }
    case 336878:
    {
        returnValue = F("Wilhelm-Pfitzer-Str.");
        break;
    }
    case 336879:
    {
        returnValue = F("Wilhelm-Pfoh-Str.");
        break;
    }
    case 336880:
    {
        returnValue = F("Wilhelm-Picker-Str.");
        break;
    }
    case 336881:
    {
        returnValue = F("Wilhelm-Pieck-Allee");
        break;
    }
    case 336882:
    {
        returnValue = F("Wilhelm-Pieck-Platz");
        break;
    }
    case 336883:
    {
        returnValue = F("Wilhelm-Pieck-Ring");
        break;
    }
    case 336884:
    {
        returnValue = F("Wilhelm-Pieck-Str.");
        break;
    }
    case 336885:
    {
        returnValue = F("Wilhelm-Pieck-Weg");
        break;
    }
    case 336886:
    {
        returnValue = F("Wilhelm-Pippart-Str.");
        break;
    }
    case 336887:
    {
        returnValue = F("Wilhelm-Pitt-Weg");
        break;
    }
    case 336888:
    {
        returnValue = F("Wilhelm-Pitz-Str.");
        break;
    }
    case 336889:
    {
        returnValue = F("Wilhelm-Pitz-Weg");
        break;
    }
    case 336890:
    {
        returnValue = F("Wilhelm-Plum-Str.");
        break;
    }
    case 336891:
    {
        returnValue = F("Wilhelm-Postl-Weg");
        break;
    }
    case 336892:
    {
        returnValue = F("Wilhelm-Potenberg-Str.");
        break;
    }
    case 336893:
    {
        returnValue = F("Wilhelm-Poth-Str.");
        break;
    }
    case 336894:
    {
        returnValue = F("Wilhelm-Pramme-Str.");
        break;
    }
    case 336895:
    {
        returnValue = F("Wilhelm-Proemper-Str.");
        break;
    }
    case 336896:
    {
        returnValue = F("Wilhelm-Raab-Str.");
        break;
    }
    case 336897:
    {
        returnValue = F("Wilhelm-Raabe-Str.");
        break;
    }
    case 336898:
    {
        returnValue = F("Wilhelm-Raabe-Weg");
        break;
    }
    case 336899:
    {
        returnValue = F("Wilhelm-Rabe-Str.");
        break;
    }
    case 336900:
    {
        returnValue = F("Wilhelm-Rademacher-Str.");
        break;
    }
    case 336901:
    {
        returnValue = F("Wilhelm-Rahden-Str.");
        break;
    }
    case 336902:
    {
        returnValue = F("Wilhelm-Raiffeisen-Str.");
        break;
    }
    case 336903:
    {
        returnValue = F("Wilhelm-Rappold-Str.");
        break;
    }
    case 336904:
    {
        returnValue = F("Wilhelm-Rathke-Str.");
        break;
    }
    case 336905:
    {
        returnValue = F("Wilhelm-Rauls-Str.");
        break;
    }
    case 336906:
    {
        returnValue = F("Wilhelm-Rausch-Str.");
        break;
    }
    case 336907:
    {
        returnValue = F("Wilhelm-Rautenstrauch-Park");
        break;
    }
    case 336908:
    {
        returnValue = F("Wilhelm-Rautenstrauch-Str.");
        break;
    }
    case 336909:
    {
        returnValue = F("Wilhelm-Rees-Str.");
        break;
    }
    case 336910:
    {
        returnValue = F("Wilhelm-Rehling-Weg");
        break;
    }
    case 336911:
    {
        returnValue = F("Wilhelm-Reiff-Str.");
        break;
    }
    case 336912:
    {
        returnValue = F("Wilhelm-Reime-Str.");
        break;
    }
    case 336913:
    {
        returnValue = F("Wilhelm-Reimes-Str.");
        break;
    }
    case 336914:
    {
        returnValue = F("Wilhelm-Rein-Str.");
        break;
    }
    case 336915:
    {
        returnValue = F("Wilhelm-Reinecke-Str.");
        break;
    }
    case 336916:
    {
        returnValue = F("Wilhelm-Reintjes-Str.");
        break;
    }
    case 336917:
    {
        returnValue = F("Wilhelm-Reiter-Stieg");
        break;
    }
    case 336918:
    {
        returnValue = F("Wilhelm-Reitmeier-Str.");
        break;
    }
    case 336919:
    {
        returnValue = F("Wilhelm-Reuter-Str.");
        break;
    }
    case 336920:
    {
        returnValue = F("Wilhelm-Reuter-Weg");
        break;
    }
    case 336921:
    {
        returnValue = F("Wilhelm-Richter-Weg");
        break;
    }
    case 336922:
    {
        returnValue = F("Wilhelm-Riedel-Str.");
        break;
    }
    case 336923:
    {
        returnValue = F("Wilhelm-Riefstahl-Platz");
        break;
    }
    case 336924:
    {
        returnValue = F("Wilhelm-Riehm-Str.");
        break;
    }
    case 336925:
    {
        returnValue = F("Wilhelm-Rieländer-Str.");
        break;
    }
    case 336926:
    {
        returnValue = F("Wilhelm-Rinkens-Str.");
        break;
    }
    case 336927:
    {
        returnValue = F("Wilhelm-Rippen-Str.");
        break;
    }
    case 336928:
    {
        returnValue = F("Wilhelm-Risse-Weg");
        break;
    }
    case 336929:
    {
        returnValue = F("Wilhelm-Ritter-Str.");
        break;
    }
    case 336930:
    {
        returnValue = F("Wilhelm-Roesler-Str.");
        break;
    }
    case 336931:
    {
        returnValue = F("Wilhelm-Roether-Str.");
        break;
    }
    case 336932:
    {
        returnValue = F("Wilhelm-Rohleder-Weg");
        break;
    }
    case 336933:
    {
        returnValue = F("Wilhelm-Rohlfs-Str.");
        break;
    }
    case 336934:
    {
        returnValue = F("Wilhelm-Romberg-Str.");
        break;
    }
    case 336935:
    {
        returnValue = F("Wilhelm-Rongius-Weg");
        break;
    }
    case 336936:
    {
        returnValue = F("Wilhelm-Rose-Str.");
        break;
    }
    case 336937:
    {
        returnValue = F("Wilhelm-Rosenbaum-Weg");
        break;
    }
    case 336938:
    {
        returnValue = F("Wilhelm-Roser-Str.");
        break;
    }
    case 336939:
    {
        returnValue = F("Wilhelm-Ross-Str.");
        break;
    }
    case 336940:
    {
        returnValue = F("Wilhelm-Rottwilm-Str.");
        break;
    }
    case 336941:
    {
        returnValue = F("Wilhelm-Ruch-Weg");
        break;
    }
    case 336942:
    {
        returnValue = F("Wilhelm-Rumpf-Str.");
        break;
    }
    case 336943:
    {
        returnValue = F("Wilhelm-Ruppel-Str.");
        break;
    }
    case 336944:
    {
        returnValue = F("Wilhelm-Röben-Str.");
        break;
    }
    case 336945:
    {
        returnValue = F("Wilhelm-Röcker-Str.");
        break;
    }
    case 336946:
    {
        returnValue = F("Wilhelm-Römer-Str.");
        break;
    }
    case 336947:
    {
        returnValue = F("Wilhelm-Rönsch-Str.");
        break;
    }
    case 336948:
    {
        returnValue = F("Wilhelm-Röntgen-Str.");
        break;
    }
    case 336949:
    {
        returnValue = F("Wilhelm-Röntgen-Viertel");
        break;
    }
    case 336950:
    {
        returnValue = F("Wilhelm-Röntgen-Weg");
        break;
    }
    case 336951:
    {
        returnValue = F("Wilhelm-Röpcke-Str.");
        break;
    }
    case 336952:
    {
        returnValue = F("Wilhelm-Röpke-Str.");
        break;
    }
    case 336953:
    {
        returnValue = F("Wilhelm-Röthe-Weg");
        break;
    }
    case 336954:
    {
        returnValue = F("Wilhelm-Rühle-Weg");
        break;
    }
    case 336955:
    {
        returnValue = F("Wilhelm-Rümenapf-Str.");
        break;
    }
    case 336956:
    {
        returnValue = F("Wilhelm-Sander-Str.");
        break;
    }
    case 336957:
    {
        returnValue = F("Wilhelm-Sattler-Str.");
        break;
    }
    case 336958:
    {
        returnValue = F("Wilhelm-Saucke-Str.");
        break;
    }
    case 336959:
    {
        returnValue = F("Wilhelm-Sauer-Str.");
        break;
    }
    case 336960:
    {
        returnValue = F("Wilhelm-Sauer-Weg");
        break;
    }
    case 336961:
    {
        returnValue = F("Wilhelm-Schacht-Str.");
        break;
    }
    case 336962:
    {
        returnValue = F("Wilhelm-Schall-Str.");
        break;
    }
    case 336963:
    {
        returnValue = F("Wilhelm-Scharf-Str.");
        break;
    }
    case 336964:
    {
        returnValue = F("Wilhelm-Scharff-Allee");
        break;
    }
    case 336965:
    {
        returnValue = F("Wilhelm-Scharrelmann-Str.");
        break;
    }
    case 336966:
    {
        returnValue = F("Wilhelm-Scharrelmann-Weg");
        break;
    }
    case 336967:
    {
        returnValue = F("Wilhelm-Scharrer-Str.");
        break;
    }
    case 336968:
    {
        returnValue = F("Wilhelm-Schaudig-Str.");
        break;
    }
    case 336969:
    {
        returnValue = F("Wilhelm-Schauenberg-Str.");
        break;
    }
    case 336970:
    {
        returnValue = F("Wilhelm-Schech-Str.");
        break;
    }
    case 336971:
    {
        returnValue = F("Wilhelm-Schechter-Str.");
        break;
    }
    case 336972:
    {
        returnValue = F("Wilhelm-Scheerer-Str.");
        break;
    }
    case 336973:
    {
        returnValue = F("Wilhelm-Schelfbeck-Str.");
        break;
    }
    case 336974:
    {
        returnValue = F("Wilhelm-Schenk-Weg");
        break;
    }
    case 336975:
    {
        returnValue = F("Wilhelm-Scherer-Platz");
        break;
    }
    case 336976:
    {
        returnValue = F("Wilhelm-Scheufele-Weg");
        break;
    }
    case 336977:
    {
        returnValue = F("Wilhelm-Schick-Str.");
        break;
    }
    case 336978:
    {
        returnValue = F("Wilhelm-Schickard-Str.");
        break;
    }
    case 336979:
    {
        returnValue = F("Wilhelm-Schiedermaier-Str.");
        break;
    }
    case 336980:
    {
        returnValue = F("Wilhelm-Schierenberg-Str.");
        break;
    }
    case 336981:
    {
        returnValue = F("Wilhelm-Schießl-Weg");
        break;
    }
    case 336982:
    {
        returnValue = F("Wilhelm-Schildhauer-Str.");
        break;
    }
    case 336983:
    {
        returnValue = F("Wilhelm-Schiml-Str.");
        break;
    }
    case 336984:
    {
        returnValue = F("Wilhelm-Schindler-Weg");
        break;
    }
    case 336985:
    {
        returnValue = F("Wilhelm-Schleicher-Weg");
        break;
    }
    case 336986:
    {
        returnValue = F("Wilhelm-Schläper-Str.");
        break;
    }
    case 336987:
    {
        returnValue = F("Wilhelm-Schmelzer-Weg");
        break;
    }
    case 336988:
    {
        returnValue = F("Wilhelm-Schmid-Str.");
        break;
    }
    case 336989:
    {
        returnValue = F("Wilhelm-Schmidt-Park");
        break;
    }
    case 336990:
    {
        returnValue = F("Wilhelm-Schmidt-Siedlung");
        break;
    }
    case 336991:
    {
        returnValue = F("Wilhelm-Schmidt-Str.");
        break;
    }
    case 336992:
    {
        returnValue = F("Wilhelm-Schmitt-Str.");
        break;
    }
    case 336993:
    {
        returnValue = F("Wilhelm-Schmitz-Str.");
        break;
    }
    case 336994:
    {
        returnValue = F("Wilhelm-Schmölder-Str.");
        break;
    }
    case 336995:
    {
        returnValue = F("Wilhelm-Schneider-Str.");
        break;
    }
    case 336996:
    {
        returnValue = F("Wilhelm-Schnoor-Weg");
        break;
    }
    case 336997:
    {
        returnValue = F("Wilhelm-Schrader-Str.");
        break;
    }
    case 336998:
    {
        returnValue = F("Wilhelm-Schramm-Str.");
        break;
    }
    case 336999:
    {
        returnValue = F("Wilhelm-Schreuer-Str.");
        break;
    }
    case 337000:
    {
        returnValue = F("Wilhelm-Schriever-Str.");
        break;
    }
    case 337001:
    {
        returnValue = F("Wilhelm-Schroeder-Str.");
        break;
    }
    case 337002:
    {
        returnValue = F("Wilhelm-Schröder-Str.");
        break;
    }
    case 337003:
    {
        returnValue = F("Wilhelm-Schulte-Str.");
        break;
    }
    case 337004:
    {
        returnValue = F("Wilhelm-Schultheis-Str.");
        break;
    }
    case 337005:
    {
        returnValue = F("Wilhelm-Schultz-Str.");
        break;
    }
    case 337006:
    {
        returnValue = F("Wilhelm-Schulze-Str.");
        break;
    }
    case 337007:
    {
        returnValue = F("Wilhelm-Schulze-Weg");
        break;
    }
    case 337008:
    {
        returnValue = F("Wilhelm-Schumacher-Str.");
        break;
    }
    case 337009:
    {
        returnValue = F("Wilhelm-Schussen-Str.");
        break;
    }
    case 337010:
    {
        returnValue = F("Wilhelm-Schussen-Weg");
        break;
    }
    case 337011:
    {
        returnValue = F("Wilhelm-Schuy-Str.");
        break;
    }
    case 337012:
    {
        returnValue = F("Wilhelm-Schwarz-Str.");
        break;
    }
    case 337013:
    {
        returnValue = F("Wilhelm-Schwarzer-Str.");
        break;
    }
    case 337014:
    {
        returnValue = F("Wilhelm-Schweizer-Str.");
        break;
    }
    case 337015:
    {
        returnValue = F("Wilhelm-Schwickert-Str.");
        break;
    }
    case 337016:
    {
        returnValue = F("Wilhelm-Schwieger-Str.");
        break;
    }
    case 337017:
    {
        returnValue = F("Wilhelm-Schwöppe-Str.");
        break;
    }
    case 337018:
    {
        returnValue = F("Wilhelm-Schäfer-Str.");
        break;
    }
    case 337019:
    {
        returnValue = F("Wilhelm-Schäfer-Weg");
        break;
    }
    case 337020:
    {
        returnValue = F("Wilhelm-Schäffer-Str.");
        break;
    }
    case 337021:
    {
        returnValue = F("Wilhelm-Schöder-Str.");
        break;
    }
    case 337022:
    {
        returnValue = F("Wilhelm-Schöffer-Str.");
        break;
    }
    case 337023:
    {
        returnValue = F("Wilhelm-Schöpflin-Str.");
        break;
    }
    case 337024:
    {
        returnValue = F("Wilhelm-Schüll-Str.");
        break;
    }
    case 337025:
    {
        returnValue = F("Wilhelm-Sedlbauer Str.");
        break;
    }
    case 337026:
    {
        returnValue = F("Wilhelm-Seedorf-Str.");
        break;
    }
    case 337027:
    {
        returnValue = F("Wilhelm-Seipp-Str.");
        break;
    }
    case 337028:
    {
        returnValue = F("Wilhelm-Seißenschmidt-Str.");
        break;
    }
    case 337029:
    {
        returnValue = F("Wilhelm-Servas-Str.");
        break;
    }
    case 337030:
    {
        returnValue = F("Wilhelm-Seydel-Str.");
        break;
    }
    case 337031:
    {
        returnValue = F("Wilhelm-Siegel-Weg");
        break;
    }
    case 337032:
    {
        returnValue = F("Wilhelm-Sietas-Str.");
        break;
    }
    case 337033:
    {
        returnValue = F("Wilhelm-Sihn-Str.");
        break;
    }
    case 337034:
    {
        returnValue = F("Wilhelm-Soehnle-Str.");
        break;
    }
    case 337035:
    {
        returnValue = F("Wilhelm-Spaeth-Str.");
        break;
    }
    case 337036:
    {
        returnValue = F("Wilhelm-Speck-Platz");
        break;
    }
    case 337037:
    {
        returnValue = F("Wilhelm-Speiser-Weg");
        break;
    }
    case 337038:
    {
        returnValue = F("Wilhelm-Spengler-Str.");
        break;
    }
    case 337039:
    {
        returnValue = F("Wilhelm-Springer-Str.");
        break;
    }
    case 337040:
    {
        returnValue = F("Wilhelm-Sprott-Str.");
        break;
    }
    case 337041:
    {
        returnValue = F("Wilhelm-Stabe-Str.");
        break;
    }
    case 337042:
    {
        returnValue = F("Wilhelm-Stabernack-Str.");
        break;
    }
    case 337043:
    {
        returnValue = F("Wilhelm-Stade-Str.");
        break;
    }
    case 337044:
    {
        returnValue = F("Wilhelm-Staehle-Str.");
        break;
    }
    case 337045:
    {
        returnValue = F("Wilhelm-Stahl-Allee");
        break;
    }
    case 337046:
    {
        returnValue = F("Wilhelm-Stahl-Str.");
        break;
    }
    case 337047:
    {
        returnValue = F("Wilhelm-Staudacher-Str.");
        break;
    }
    case 337048:
    {
        returnValue = F("Wilhelm-Staudenmayer-Str.");
        break;
    }
    case 337049:
    {
        returnValue = F("Wilhelm-Steckel-Weg");
        break;
    }
    case 337050:
    {
        returnValue = F("Wilhelm-Stefen-Str.");
        break;
    }
    case 337051:
    {
        returnValue = F("Wilhelm-Stegen-Str.");
        break;
    }
    case 337052:
    {
        returnValue = F("Wilhelm-Stegerer-Str.");
        break;
    }
    case 337053:
    {
        returnValue = F("Wilhelm-Stern-Str.");
        break;
    }
    case 337054:
    {
        returnValue = F("Wilhelm-Sternfeld-Gasse");
        break;
    }
    case 337055:
    {
        returnValue = F("Wilhelm-Stille-Str.");
        break;
    }
    case 337056:
    {
        returnValue = F("Wilhelm-Stoll-Ring");
        break;
    }
    case 337057:
    {
        returnValue = F("Wilhelm-Stolle-Platz");
        break;
    }
    case 337058:
    {
        returnValue = F("Wilhelm-Stolle-Siedlung");
        break;
    }
    case 337059:
    {
        returnValue = F("Wilhelm-Stolle-Weg");
        break;
    }
    case 337060:
    {
        returnValue = F("Wilhelm-Stolte-Str.");
        break;
    }
    case 337061:
    {
        returnValue = F("Wilhelm-Storck-Str.");
        break;
    }
    case 337062:
    {
        returnValue = F("Wilhelm-Stricker-Weg");
        break;
    }
    case 337063:
    {
        returnValue = F("Wilhelm-Sträubig-Str.");
        break;
    }
    case 337064:
    {
        returnValue = F("Wilhelm-Ströh-Weg");
        break;
    }
    case 337065:
    {
        returnValue = F("Wilhelm-Ströpke-Str.");
        break;
    }
    case 337066:
    {
        returnValue = F("Wilhelm-Sturmfels-Str.");
        break;
    }
    case 337067:
    {
        returnValue = F("Wilhelm-Stähle-Str.");
        break;
    }
    case 337068:
    {
        returnValue = F("Wilhelm-Stöber-Platz");
        break;
    }
    case 337069:
    {
        returnValue = F("Wilhelm-Stölting-Weg");
        break;
    }
    case 337070:
    {
        returnValue = F("Wilhelm-Stöppler-Platz");
        break;
    }
    case 337071:
    {
        returnValue = F("Wilhelm-Störk-Str.");
        break;
    }
    case 337072:
    {
        returnValue = F("Wilhelm-Suder-Str.");
        break;
    }
    case 337073:
    {
        returnValue = F("Wilhelm-Suhr-Str.");
        break;
    }
    case 337074:
    {
        returnValue = F("Wilhelm-Sulser-Str.");
        break;
    }
    case 337075:
    {
        returnValue = F("Wilhelm-Sutter-Str.");
        break;
    }
    case 337076:
    {
        returnValue = F("Wilhelm-Söhngen-Str.");
        break;
    }
    case 337077:
    {
        returnValue = F("Wilhelm-Söller-Str.");
        break;
    }
    case 337078:
    {
        returnValue = F("Wilhelm-Taxis-Str.");
        break;
    }
    case 337079:
    {
        returnValue = F("Wilhelm-Tegeler-Str.");
        break;
    }
    case 337080:
    {
        returnValue = F("Wilhelm-Teggenthien-Str.");
        break;
    }
    case 337081:
    {
        returnValue = F("Wilhelm-Teleu-Weg");
        break;
    }
    case 337082:
    {
        returnValue = F("Wilhelm-Tell-Platz");
        break;
    }
    case 337083:
    {
        returnValue = F("Wilhelm-Tell-Str.");
        break;
    }
    case 337084:
    {
        returnValue = F("Wilhelm-Tell-Weg");
        break;
    }
    case 337085:
    {
        returnValue = F("Wilhelm-Tempel-Platz");
        break;
    }
    case 337086:
    {
        returnValue = F("Wilhelm-Tenhagen-Str.");
        break;
    }
    case 337087:
    {
        returnValue = F("Wilhelm-Tent-Str.");
        break;
    }
    case 337088:
    {
        returnValue = F("Wilhelm-Ternis-Str.");
        break;
    }
    case 337089:
    {
        returnValue = F("Wilhelm-Teuwen-Str.");
        break;
    }
    case 337090:
    {
        returnValue = F("Wilhelm-Thenee-Weg");
        break;
    }
    case 337091:
    {
        returnValue = F("Wilhelm-Thielemann-Str.");
        break;
    }
    case 337092:
    {
        returnValue = F("Wilhelm-Thielmann-Str.");
        break;
    }
    case 337093:
    {
        returnValue = F("Wilhelm-Thielmann-Weg");
        break;
    }
    case 337094:
    {
        returnValue = F("Wilhelm-Thiermann-Weg");
        break;
    }
    case 337095:
    {
        returnValue = F("Wilhelm-Thoerle-Str.");
        break;
    }
    case 337096:
    {
        returnValue = F("Wilhelm-Thomas-Str.");
        break;
    }
    case 337097:
    {
        returnValue = F("Wilhelm-Tophinke-Ring");
        break;
    }
    case 337098:
    {
        returnValue = F("Wilhelm-Traupe-Str.");
        break;
    }
    case 337099:
    {
        returnValue = F("Wilhelm-Trautewein-Str.");
        break;
    }
    case 337100:
    {
        returnValue = F("Wilhelm-Trockel-Weg");
        break;
    }
    case 337101:
    {
        returnValue = F("Wilhelm-Trumann-Str.");
        break;
    }
    case 337102:
    {
        returnValue = F("Wilhelm-Trübner-Str.");
        break;
    }
    case 337103:
    {
        returnValue = F("Wilhelm-Tönsing-Weg");
        break;
    }
    case 337104:
    {
        returnValue = F("Wilhelm-Uhe-Str.");
        break;
    }
    case 337105:
    {
        returnValue = F("Wilhelm-Ulmer-Str.");
        break;
    }
    case 337106:
    {
        returnValue = F("Wilhelm-Umbreit-Str.");
        break;
    }
    case 337107:
    {
        returnValue = F("Wilhelm-Vesper-Str.");
        break;
    }
    case 337108:
    {
        returnValue = F("Wilhelm-Vetter-Str.");
        break;
    }
    case 337109:
    {
        returnValue = F("Wilhelm-Vinke-Ring");
        break;
    }
    case 337110:
    {
        returnValue = F("Wilhelm-Vogt-Str.");
        break;
    }
    case 337111:
    {
        returnValue = F("Wilhelm-Voigt-Stieg");
        break;
    }
    case 337112:
    {
        returnValue = F("Wilhelm-Volckmar-Weg");
        break;
    }
    case 337113:
    {
        returnValue = F("Wilhelm-Volkmer-Weg");
        break;
    }
    case 337114:
    {
        returnValue = F("Wilhelm-Voltz-Weg");
        break;
    }
    case 337115:
    {
        returnValue = F("Wilhelm-Volz-Str.");
        break;
    }
    case 337116:
    {
        returnValue = F("Wilhelm-Vorholz-Str.");
        break;
    }
    case 337117:
    {
        returnValue = F("Wilhelm-Vorwallner-Str.");
        break;
    }
    case 337118:
    {
        returnValue = F("Wilhelm-Wacker-Str.");
        break;
    }
    case 337119:
    {
        returnValue = F("Wilhelm-Wagener-Platz");
        break;
    }
    case 337120:
    {
        returnValue = F("Wilhelm-Wagenfeld-Str.");
        break;
    }
    case 337121:
    {
        returnValue = F("Wilhelm-Wagner-Str.");
        break;
    }
    case 337122:
    {
        returnValue = F("Wilhelm-Waldmann Str.");
        break;
    }
    case 337123:
    {
        returnValue = F("Wilhelm-Walker-Str.");
        break;
    }
    case 337124:
    {
        returnValue = F("Wilhelm-Walkhoff-Platz");
        break;
    }
    case 337125:
    {
        returnValue = F("Wilhelm-Wallenborn-Str.");
        break;
    }
    case 337126:
    {
        returnValue = F("Wilhelm-Wander-Str.");
        break;
    }
    case 337127:
    {
        returnValue = F("Wilhelm-Warsch-Str.");
        break;
    }
    case 337128:
    {
        returnValue = F("Wilhelm-Waschbisch-Str.");
        break;
    }
    case 337129:
    {
        returnValue = F("Wilhelm-Webels-Str.");
        break;
    }
    case 337130:
    {
        returnValue = F("Wilhelm-Weber-Str.");
        break;
    }
    case 337131:
    {
        returnValue = F("Wilhelm-Weber-Weg");
        break;
    }
    case 337132:
    {
        returnValue = F("Wilhelm-Weigand-Str.");
        break;
    }
    case 337133:
    {
        returnValue = F("Wilhelm-Weihrauch-Str.");
        break;
    }
    case 337134:
    {
        returnValue = F("Wilhelm-Weingärtner-Str.");
        break;
    }
    case 337135:
    {
        returnValue = F("Wilhelm-Weitling-Str.");
        break;
    }
    case 337136:
    {
        returnValue = F("Wilhelm-Weitzel-Weg");
        break;
    }
    case 337137:
    {
        returnValue = F("Wilhelm-Wemmer-Str.");
        break;
    }
    case 337138:
    {
        returnValue = F("Wilhelm-Wendel-Weg");
        break;
    }
    case 337139:
    {
        returnValue = F("Wilhelm-Wentzel-Str.");
        break;
    }
    case 337140:
    {
        returnValue = F("Wilhelm-Wernseher-Str.");
        break;
    }
    case 337141:
    {
        returnValue = F("Wilhelm-Wessel-Str.");
        break;
    }
    case 337142:
    {
        returnValue = F("Wilhelm-Wester-Weg");
        break;
    }
    case 337143:
    {
        returnValue = F("Wilhelm-Westmeyer-Weg");
        break;
    }
    case 337144:
    {
        returnValue = F("Wilhelm-Westphal-Str.");
        break;
    }
    case 337145:
    {
        returnValue = F("Wilhelm-Wever-Str.");
        break;
    }
    case 337146:
    {
        returnValue = F("Wilhelm-Wewer-Str.");
        break;
    }
    case 337147:
    {
        returnValue = F("Wilhelm-Weyhe-Str.");
        break;
    }
    case 337148:
    {
        returnValue = F("Wilhelm-Weß-Str.");
        break;
    }
    case 337149:
    {
        returnValue = F("Wilhelm-Wichmann-Weg");
        break;
    }
    case 337150:
    {
        returnValue = F("Wilhelm-Wiechering-Str.");
        break;
    }
    case 337151:
    {
        returnValue = F("Wilhelm-Wiegmann-Str.");
        break;
    }
    case 337152:
    {
        returnValue = F("Wilhelm-Wiesehahn-Str.");
        break;
    }
    case 337153:
    {
        returnValue = F("Wilhelm-Wiesner-Str.");
        break;
    }
    case 337154:
    {
        returnValue = F("Wilhelm-Wiethase-Str.");
        break;
    }
    case 337155:
    {
        returnValue = F("Wilhelm-Wilcke-Str.");
        break;
    }
    case 337156:
    {
        returnValue = F("Wilhelm-Wilfert-Str.");
        break;
    }
    case 337157:
    {
        returnValue = F("Wilhelm-Wilkens-Ring");
        break;
    }
    case 337158:
    {
        returnValue = F("Wilhelm-Will-Str.");
        break;
    }
    case 337159:
    {
        returnValue = F("Wilhelm-Windhorn-Str.");
        break;
    }
    case 337160:
    {
        returnValue = F("Wilhelm-Winter-Gasse");
        break;
    }
    case 337161:
    {
        returnValue = F("Wilhelm-Winter-Str.");
        break;
    }
    case 337162:
    {
        returnValue = F("Wilhelm-Winter-Weg");
        break;
    }
    case 337163:
    {
        returnValue = F("Wilhelm-Wintzerer-Str.");
        break;
    }
    case 337164:
    {
        returnValue = F("Wilhelm-Wirner-Str.");
        break;
    }
    case 337165:
    {
        returnValue = F("Wilhelm-Wirtz-Platz");
        break;
    }
    case 337166:
    {
        returnValue = F("Wilhelm-Wisser-Str.");
        break;
    }
    case 337167:
    {
        returnValue = F("Wilhelm-Witzel-Str.");
        break;
    }
    case 337168:
    {
        returnValue = F("Wilhelm-Wolf-Str.");
        break;
    }
    case 337169:
    {
        returnValue = F("Wilhelm-Wolf-Weg");
        break;
    }
    case 337170:
    {
        returnValue = F("Wilhelm-Wulff-Weg");
        break;
    }
    case 337171:
    {
        returnValue = F("Wilhelm-Wunderlich-Garten");
        break;
    }
    case 337172:
    {
        returnValue = F("Wilhelm-Wunderlich-Park");
        break;
    }
    case 337173:
    {
        returnValue = F("Wilhelm-Wunderlich-Platz");
        break;
    }
    case 337174:
    {
        returnValue = F("Wilhelm-Wust-Str.");
        break;
    }
    case 337175:
    {
        returnValue = F("Wilhelm-Wußler-Str.");
        break;
    }
    case 337176:
    {
        returnValue = F("Wilhelm-Wächter-Str.");
        break;
    }
    case 337177:
    {
        returnValue = F("Wilhelm-Wörle-Str.");
        break;
    }
    case 337178:
    {
        returnValue = F("Wilhelm-Wüst-Str.");
        break;
    }
    case 337179:
    {
        returnValue = F("Wilhelm-Zapf-Str.");
        break;
    }
    case 337180:
    {
        returnValue = F("Wilhelm-Zaun-Str.");
        break;
    }
    case 337181:
    {
        returnValue = F("Wilhelm-Zerr-Str.");
        break;
    }
    case 337182:
    {
        returnValue = F("Wilhelm-Ziegler-Str.");
        break;
    }
    case 337183:
    {
        returnValue = F("Wilhelm-Ziegler-Weg");
        break;
    }
    case 337184:
    {
        returnValue = F("Wilhelm-Zierold-Weg");
        break;
    }
    case 337185:
    {
        returnValue = F("Wilhelm-Ziervogel-Str.");
        break;
    }
    case 337186:
    {
        returnValue = F("Wilhelm-Zimmermann-Weg");
        break;
    }
    case 337187:
    {
        returnValue = F("Wilhelm-Zinn-Str.");
        break;
    }
    case 337188:
    {
        returnValue = F("Wilhelm-Zirkel-Str.");
        break;
    }
    case 337189:
    {
        returnValue = F("Wilhelm-van-Lengerich-Str.");
        break;
    }
    case 337190:
    {
        returnValue = F("Wilhelm-von-Bode-Weg");
        break;
    }
    case 337191:
    {
        returnValue = F("Wilhelm-von-Brawe-Str.");
        break;
    }
    case 337192:
    {
        returnValue = F("Wilhelm-von-Cölln-Str.");
        break;
    }
    case 337193:
    {
        returnValue = F("Wilhelm-von-Diez-Str.");
        break;
    }
    case 337194:
    {
        returnValue = F("Wilhelm-von-Erlanger-Str.");
        break;
    }
    case 337195:
    {
        returnValue = F("Wilhelm-von-Hohenheim-Str.");
        break;
    }
    case 337196:
    {
        returnValue = F("Wilhelm-von-Holland-Weg");
        break;
    }
    case 337197:
    {
        returnValue = F("Wilhelm-von-Humboldt-Str.");
        break;
    }
    case 337198:
    {
        returnValue = F("Wilhelm-von-Humboldt-Weg");
        break;
    }
    case 337199:
    {
        returnValue = F("Wilhelm-von-Kaulbach-Weg");
        break;
    }
    case 337200:
    {
        returnValue = F("Wilhelm-von-Ketteler-Str.");
        break;
    }
    case 337201:
    {
        returnValue = F("Wilhelm-von-Ketteler-Weg");
        break;
    }
    case 337202:
    {
        returnValue = F("Wilhelm-von-Kobell-Weg");
        break;
    }
    case 337203:
    {
        returnValue = F("Wilhelm-von-Leibniz-Str.");
        break;
    }
    case 337204:
    {
        returnValue = F("Wilhelm-von-Miller-Weg");
        break;
    }
    case 337205:
    {
        returnValue = F("Wilhelm-von-Münster-Str.");
        break;
    }
    case 337206:
    {
        returnValue = F("Wilhelm-von-Nassau-Park");
        break;
    }
    case 337207:
    {
        returnValue = F("Wilhelm-von-Polenz Park");
        break;
    }
    case 337208:
    {
        returnValue = F("Wilhelm-von-Polenz-Str.");
        break;
    }
    case 337209:
    {
        returnValue = F("Wilhelm-von-Polenz-Weg");
        break;
    }
    case 337210:
    {
        returnValue = F("Wilhelm-von-Rottau-Weg");
        break;
    }
    case 337211:
    {
        returnValue = F("Wilhelm-von-Steuben-Weg");
        break;
    }
    case 337212:
    {
        returnValue = F("Wilhelmibrücke");
        break;
    }
    case 337213:
    {
        returnValue = F("Wilhelminastr.");
        break;
    }
    case 337214:
    {
        returnValue = F("Wilhelmine-Fey-Str.");
        break;
    }
    case 337215:
    {
        returnValue = F("Wilhelmine-Fliedner-Str.");
        break;
    }
    case 337216:
    {
        returnValue = F("Wilhelmine-Mayer-Str.");
        break;
    }
    case 337217:
    {
        returnValue = F("Wilhelmine-Pötter-Str.");
        break;
    }
    case 337218:
    {
        returnValue = F("Wilhelmine-Reichard-Weg");
        break;
    }
    case 337219:
    {
        returnValue = F("Wilhelmine-Rüdiger-Str.");
        break;
    }
    case 337220:
    {
        returnValue = F("Wilhelmine-Scholz-Str.");
        break;
    }
    case 337221:
    {
        returnValue = F("Wilhelmine-Siefkes-Str.");
        break;
    }
    case 337222:
    {
        returnValue = F("Wilhelmine-Strauß-Weg");
        break;
    }
    case 337223:
    {
        returnValue = F("Wilhelminen-Passage");
        break;
    }
    case 337224:
    {
        returnValue = F("Wilhelminenberg");
        break;
    }
    case 337225:
    {
        returnValue = F("Wilhelminenhof");
        break;
    }
    case 337226:
    {
        returnValue = F("Wilhelminenhofer Weg");
        break;
    }
    case 337227:
    {
        returnValue = F("Wilhelminenkoog");
        break;
    }
    case 337228:
    {
        returnValue = F("Wilhelminenplatz");
        break;
    }
    case 337229:
    {
        returnValue = F("Wilhelminenstr.");
        break;
    }
    case 337230:
    {
        returnValue = F("Wilhelminental");
        break;
    }
    case 337231:
    {
        returnValue = F("Wilhelminenthaler Str.");
        break;
    }
    case 337232:
    {
        returnValue = F("Wilhelminenweg");
        break;
    }
    case 337233:
    {
        returnValue = F("Wilhelminestr.");
        break;
    }
    case 337234:
    {
        returnValue = F("Wilhelmistr.");
        break;
    }
    case 337235:
    {
        returnValue = F("Wilhelmitenpfad");
        break;
    }
    case 337236:
    {
        returnValue = F("Wilhelmitenstr.");
        break;
    }
    case 337237:
    {
        returnValue = F("Wilhelmiterstr.");
        break;
    }
    case 337238:
    {
        returnValue = F("Wilhelmjstr.");
        break;
    }
    case 337239:
    {
        returnValue = F("Wilhelmkorso");
        break;
    }
    case 337240:
    {
        returnValue = F("Wilhelmplatz");
        break;
    }
    case 337241:
    {
        returnValue = F("Wilhelmring");
        break;
    }
    case 337242:
    {
        returnValue = F("Wilhelms Heide");
        break;
    }
    case 337243:
    {
        returnValue = F("Wilhelms Lust");
        break;
    }
    case 337244:
    {
        returnValue = F("Wilhelms Richtstatt");
        break;
    }
    case 337245:
    {
        returnValue = F("Wilhelmsallee");
        break;
    }
    case 337246:
    {
        returnValue = F("Wilhelmsau");
        break;
    }
    case 337247:
    {
        returnValue = F("Wilhelmsauer Dorfstr.");
        break;
    }
    case 337248:
    {
        returnValue = F("Wilhelmsbader Allee");
        break;
    }
    case 337249:
    {
        returnValue = F("Wilhelmsbader Ring");
        break;
    }
    case 337250:
    {
        returnValue = F("Wilhelmsbader Str.");
        break;
    }
    case 337251:
    {
        returnValue = F("Wilhelmsberg");
        break;
    }
    case 337252:
    {
        returnValue = F("Wilhelmsbrunnenstr.");
        break;
    }
    case 337253:
    {
        returnValue = F("Wilhelmsbrücke");
        break;
    }
    case 337254:
    {
        returnValue = F("Wilhelmsburg");
        break;
    }
    case 337255:
    {
        returnValue = F("Wilhelmsburger Str.");
        break;
    }
    case 337256:
    {
        returnValue = F("Wilhelmsbühl");
        break;
    }
    case 337257:
    {
        returnValue = F("Wilhelmschacht");
        break;
    }
    case 337258:
    {
        returnValue = F("Wilhelmschachtweg");
        break;
    }
    case 337259:
    {
        returnValue = F("Wilhelmsdorf");
        break;
    }
    case 337260:
    {
        returnValue = F("Wilhelmsdorfer Landstr.");
        break;
    }
    case 337261:
    {
        returnValue = F("Wilhelmsdorfer Str.");
        break;
    }
    case 337262:
    {
        returnValue = F("Wilhelmseck");
        break;
    }
    case 337263:
    {
        returnValue = F("Wilhelmsederweg");
        break;
    }
    case 337264:
    {
        returnValue = F("Wilhelmseiche");
        break;
    }
    case 337265:
    {
        returnValue = F("Wilhelmsfelde");
        break;
    }
    case 337266:
    {
        returnValue = F("Wilhelmsfelder Str.");
        break;
    }
    case 337267:
    {
        returnValue = F("Wilhelmsfelder Weg");
        break;
    }
    case 337268:
    {
        returnValue = F("Wilhelmsgarten");
        break;
    }
    case 337269:
    {
        returnValue = F("Wilhelmsgasse");
        break;
    }
    case 337270:
    {
        returnValue = F("Wilhelmsgrille");
        break;
    }
    case 337271:
    {
        returnValue = F("Wilhelmsgrund");
        break;
    }
    case 337272:
    {
        returnValue = F("Wilhelmshall");
        break;
    }
    case 337273:
    {
        returnValue = F("Wilhelmshaller Weg");
        break;
    }
    case 337274:
    {
        returnValue = F("Wilhelmshauser Str.");
        break;
    }
    case 337275:
    {
        returnValue = F("Wilhelmshavener Str.");
        break;
    }
    case 337276:
    {
        returnValue = F("Wilhelmsheim");
        break;
    }
    case 337277:
    {
        returnValue = F("Wilhelmsheimer Str.");
        break;
    }
    case 337278:
    {
        returnValue = F("Wilhelmshof");
        break;
    }
    case 337279:
    {
        returnValue = F("Wilhelmshofallee");
        break;
    }
    case 337280:
    {
        returnValue = F("Wilhelmshofer Ring");
        break;
    }
    case 337281:
    {
        returnValue = F("Wilhelmshofer Str.");
        break;
    }
    case 337282:
    {
        returnValue = F("Wilhelmshofstr.");
        break;
    }
    case 337283:
    {
        returnValue = F("Wilhelmshofwiese");
        break;
    }
    case 337284:
    {
        returnValue = F("Wilhelmshäuser Str.");
        break;
    }
    case 337285:
    {
        returnValue = F("Wilhelmshäuser Weg");
        break;
    }
    case 337286:
    {
        returnValue = F("Wilhelmshäuserweg");
        break;
    }
    case 337287:
    {
        returnValue = F("Wilhelmshöh");
        break;
    }
    case 337288:
    {
        returnValue = F("Wilhelmshöhe");
        break;
    }
    case 337289:
    {
        returnValue = F("Wilhelmshöhenstr.");
        break;
    }
    case 337290:
    {
        returnValue = F("Wilhelmshöhenweg");
        break;
    }
    case 337291:
    {
        returnValue = F("Wilhelmshöher Str.");
        break;
    }
    case 337292:
    {
        returnValue = F("Wilhelmshöher Weg");
        break;
    }
    case 337293:
    {
        returnValue = F("Wilhelmshütte");
        break;
    }
    case 337294:
    {
        returnValue = F("Wilhelmshüttenweg");
        break;
    }
    case 337295:
    {
        returnValue = F("Wilhelmskamp");
        break;
    }
    case 337296:
    {
        returnValue = F("Wilhelmskuhle");
        break;
    }
    case 337297:
    {
        returnValue = F("Wilhelmslinie");
        break;
    }
    case 337298:
    {
        returnValue = F("Wilhelmslust");
        break;
    }
    case 337299:
    {
        returnValue = F("Wilhelmsmühle");
        break;
    }
    case 337300:
    {
        returnValue = F("Wilhelmspark");
        break;
    }
    case 337301:
    {
        returnValue = F("Wilhelmsplatz");
        break;
    }
    case 337302:
    {
        returnValue = F("Wilhelmsrast");
        break;
    }
    case 337303:
    {
        returnValue = F("Wilhelmsruh");
        break;
    }
    case 337304:
    {
        returnValue = F("Wilhelmstal");
        break;
    }
    case 337305:
    {
        returnValue = F("Wilhelmstaler Str.");
        break;
    }
    case 337306:
    {
        returnValue = F("Wilhelmsteig");
        break;
    }
    case 337307:
    {
        returnValue = F("Wilhelmstein");
        break;
    }
    case 337308:
    {
        returnValue = F("Wilhelmsthal");
        break;
    }
    case 337309:
    {
        returnValue = F("Wilhelmsthaler Str.");
        break;
    }
    case 337310:
    {
        returnValue = F("Wilhelmsthaler Weg");
        break;
    }
    case 337311:
    {
        returnValue = F("Wilhelmstr.");
        break;
    }
    case 337312:
    {
        returnValue = F("Wilhelmsweg");
        break;
    }
    case 337313:
    {
        returnValue = F("Wilhelmsäcker");
        break;
    }
    case 337314:
    {
        returnValue = F("Wilhelmsäckerweg");
        break;
    }
    case 337315:
    {
        returnValue = F("Wilhelmweg");
        break;
    }
    case 337316:
    {
        returnValue = F("Wilhem Leuschner Str.");
        break;
    }
    case 337317:
    {
        returnValue = F("Wilhem-Braubach-Str.");
        break;
    }
    case 337318:
    {
        returnValue = F("Wilhem-Henze-Str.");
        break;
    }
    case 337319:
    {
        returnValue = F("Wilhem-von-Stein-Str.");
        break;
    }
    case 337320:
    {
        returnValue = F("Wilhemsstich");
        break;
    }
    case 337321:
    {
        returnValue = F("Wilhermsdorfer Str.");
        break;
    }
    case 337322:
    {
        returnValue = F("Wilholter Str.");
        break;
    }
    case 337323:
    {
        returnValue = F("Wilhörster Teich");
        break;
    }
    case 337324:
    {
        returnValue = F("Wiligrader Str.");
        break;
    }
    case 337325:
    {
        returnValue = F("Wilischbaude");
        break;
    }
    case 337326:
    {
        returnValue = F("Wilischblick");
        break;
    }
    case 337327:
    {
        returnValue = F("Wilischradweg");
        break;
    }
    case 337328:
    {
        returnValue = F("Wilischstr.");
        break;
    }
    case 337329:
    {
        returnValue = F("Wilischthaler Str.");
        break;
    }
    case 337330:
    {
        returnValue = F("Wilischweg");
        break;
    }
    case 337331:
    {
        returnValue = F("Wiljamsstr.");
        break;
    }
    case 337332:
    {
        returnValue = F("Wilkau-Haßlauer Str.");
        break;
    }
    case 337333:
    {
        returnValue = F("Wilkauer Str.");
        break;
    }
    case 337334:
    {
        returnValue = F("Wilke-Gardner-Str.");
        break;
    }
    case 337335:
    {
        returnValue = F("Wilke-Steding-Str.");
        break;
    }
    case 337336:
    {
        returnValue = F("Wilken Pad");
        break;
    }
    case 337337:
    {
        returnValue = F("Wilkenberg");
        break;
    }
    case 337338:
    {
        returnValue = F("Wilkenbrand");
        break;
    }
    case 337339:
    {
        returnValue = F("Wilkenbreite");
        break;
    }
    case 337340:
    {
        returnValue = F("Wilkenburger Str.");
        break;
    }
    case 337341:
    {
        returnValue = F("Wilkendorfer Str.");
        break;
    }
    case 337342:
    {
        returnValue = F("Wilkendorfer Weg");
        break;
    }
    case 337343:
    {
        returnValue = F("Wilkenhausener Str.");
        break;
    }
    case 337344:
    {
        returnValue = F("Wilkenheide");
        break;
    }
    case 337345:
    {
        returnValue = F("Wilkenhof");
        break;
    }
    case 337346:
    {
        returnValue = F("Wilkeningstr.");
        break;
    }
    case 337347:
    {
        returnValue = F("Wilkenkampstr.");
        break;
    }
    case 337348:
    {
        returnValue = F("Wilkenrother Weg");
        break;
    }
    case 337349:
    {
        returnValue = F("Wilkensche Allee");
        break;
    }
    case 337350:
    {
        returnValue = F("Wilkensstr.");
        break;
    }
    case 337351:
    {
        returnValue = F("Wilkenstr.");
        break;
    }
    case 337352:
    {
        returnValue = F("Wilkensweg");
        break;
    }
    case 337353:
    {
        returnValue = F("Wilkenweg");
        break;
    }
    case 337354:
    {
        returnValue = F("Wilkeplatz");
        break;
    }
    case 337355:
    {
        returnValue = F("Wilkerott");
        break;
    }
    case 337356:
    {
        returnValue = F("Wilkesche Höfe");
        break;
    }
    case 337357:
    {
        returnValue = F("Wilkestr.");
        break;
    }
    case 337358:
    {
        returnValue = F("Wilkiensweg");
        break;
    }
    case 337359:
    {
        returnValue = F("Wilkings Hof");
        break;
    }
    case 337360:
    {
        returnValue = F("Wilkings Kamp");
        break;
    }
    case 337361:
    {
        returnValue = F("Wilkostr.");
        break;
    }
    case 337362:
    {
        returnValue = F("Wilksteighalde");
        break;
    }
    case 337363:
    {
        returnValue = F("Wilkstr.");
        break;
    }
    case 337364:
    {
        returnValue = F("Will-Hall-Str.");
        break;
    }
    case 337365:
    {
        returnValue = F("Will-Hanebal-Platz");
        break;
    }
    case 337366:
    {
        returnValue = F("Will-Küpper-Str.");
        break;
    }
    case 337367:
    {
        returnValue = F("Will-Quadflieg-Str.");
        break;
    }
    case 337368:
    {
        returnValue = F("Will-Sohl-Anlage");
        break;
    }
    case 337369:
    {
        returnValue = F("Will-Sohl-Str.");
        break;
    }
    case 337370:
    {
        returnValue = F("Willa-Thorade-Str.");
        break;
    }
    case 337371:
    {
        returnValue = F("Willah");
        break;
    }
    case 337372:
    {
        returnValue = F("Willanzheimer Str.");
        break;
    }
    case 337373:
    {
        returnValue = F("Willaringen");
        break;
    }
    case 337374:
    {
        returnValue = F("Willbecker Busch");
        break;
    }
    case 337375:
    {
        returnValue = F("Willbecker Str.");
        break;
    }
    case 337376:
    {
        returnValue = F("Willbrandsweg");
        break;
    }
    case 337377:
    {
        returnValue = F("Willbrannen");
        break;
    }
    case 337378:
    {
        returnValue = F("Willbroksmoor");
        break;
    }
    case 337379:
    {
        returnValue = F("Willebadessener Str.");
        break;
    }
    case 337380:
    {
        returnValue = F("Willebadessener Weg");
        break;
    }
    case 337381:
    {
        returnValue = F("Willeberge");
        break;
    }
    case 337382:
    {
        returnValue = F("Willeburgstr.");
        break;
    }
    case 337383:
    {
        returnValue = F("Willeckstr.");
        break;
    }
    case 337384:
    {
        returnValue = F("Willegassen");
        break;
    }
    case 337385:
    {
        returnValue = F("Willehadstr.");
        break;
    }
    case 337386:
    {
        returnValue = F("Willehadusstr.");
        break;
    }
    case 337387:
    {
        returnValue = F("Willehalmstr.");
        break;
    }
    case 337388:
    {
        returnValue = F("Willem-Barents-Weg");
        break;
    }
    case 337389:
    {
        returnValue = F("Willem-Mennen-Str.");
        break;
    }
    case 337390:
    {
        returnValue = F("Willem-Schol-Pfad");
        break;
    }
    case 337391:
    {
        returnValue = F("Willemerstr.");
        break;
    }
    case 337392:
    {
        returnValue = F("Willemsestr.");
        break;
    }
    case 337393:
    {
        returnValue = F("Willemsfahrt");
        break;
    }
    case 337394:
    {
        returnValue = F("Willemslägerweg");
        break;
    }
    case 337395:
    {
        returnValue = F("Willemsstr.");
        break;
    }
    case 337396:
    {
        returnValue = F("Willemstr.");
        break;
    }
    case 337397:
    {
        returnValue = F("Willen");
        break;
    }
    case 337398:
    {
        returnValue = F("Willenbach");
        break;
    }
    case 337399:
    {
        returnValue = F("Willenbacher Str.");
        break;
    }
    case 337400:
    {
        returnValue = F("Willenbachstr.");
        break;
    }
    case 337401:
    {
        returnValue = F("Willenberg");
        break;
    }
    case 337402:
    {
        returnValue = F("Willenberger Masch");
        break;
    }
    case 337403:
    {
        returnValue = F("Willenberger Str.");
        break;
    }
    case 337404:
    {
        returnValue = F("Willenborgsdamm");
        break;
    }
    case 337405:
    {
        returnValue = F("Willenbrockstr.");
        break;
    }
    case 337406:
    {
        returnValue = F("Willenbrook");
        break;
    }
    case 337407:
    {
        returnValue = F("Willenbucher Schneise");
        break;
    }
    case 337408:
    {
        returnValue = F("Willendorf");
        break;
    }
    case 337409:
    {
        returnValue = F("Willenhofener Str.");
        break;
    }
    case 337410:
    {
        returnValue = F("Willenröther Str.");
        break;
    }
    case 337411:
    {
        returnValue = F("Willenscharener Str.");
        break;
    }
    case 337412:
    {
        returnValue = F("Willenweg");
        break;
    }
    case 337413:
    {
        returnValue = F("Willer");
        break;
    }
    case 337414:
    {
        returnValue = F("Willerazhofen");
        break;
    }
    case 337415:
    {
        returnValue = F("Willerfang");
        break;
    }
    case 337416:
    {
        returnValue = F("Willers Kamp");
        break;
    }
    case 337417:
    {
        returnValue = F("Willersdorf");
        break;
    }
    case 337418:
    {
        returnValue = F("Willersdorfer Str.");
        break;
    }
    case 337419:
    {
        returnValue = F("Willersdorfer Weg");
        break;
    }
    case 337420:
    {
        returnValue = F("Willersgasse");
        break;
    }
    case 337421:
    {
        returnValue = F("Willershusen");
        break;
    }
    case 337422:
    {
        returnValue = F("Willershäger Landweg");
        break;
    }
    case 337423:
    {
        returnValue = F("Willershäuser Str.");
        break;
    }
    case 337424:
    {
        returnValue = F("Willerstedter Landstr.");
        break;
    }
    case 337425:
    {
        returnValue = F("Willerstedter Str.");
        break;
    }
    case 337426:
    {
        returnValue = F("Willerswalde");
        break;
    }
    case 337427:
    {
        returnValue = F("Willerszell");
        break;
    }
    case 337428:
    {
        returnValue = F("Willertshagen");
        break;
    }
    case 337429:
    {
        returnValue = F("Willertshagener Str.");
        break;
    }
    case 337430:
    {
        returnValue = F("Willertshagener Weg");
        break;
    }
    case 337431:
    {
        returnValue = F("Willerweg");
        break;
    }
    case 337432:
    {
        returnValue = F("Willeröder Str.");
        break;
    }
    case 337433:
    {
        returnValue = F("Willeröder Weg");
        break;
    }
    case 337434:
    {
        returnValue = F("Willestr.");
        break;
    }
    case 337435:
    {
        returnValue = F("Willesweg");
        break;
    }
    case 337436:
    {
        returnValue = F("Willettstr.");
        break;
    }
    case 337437:
    {
        returnValue = F("Willeweg");
        break;
    }
    case 337438:
    {
        returnValue = F("Willhartsberg");
        break;
    }
    case 337439:
    {
        returnValue = F("Willhelm-Busch-Str.");
        break;
    }
    case 337440:
    {
        returnValue = F("Willhelm-Millauer-Weg");
        break;
    }
    case 337441:
    {
        returnValue = F("Willhelm-Raabe-Str.");
        break;
    }
    case 337442:
    {
        returnValue = F("Willhelmweg");
        break;
    }
    case 337443:
    {
        returnValue = F("Willhorner Heide");
        break;
    }
    case 337444:
    {
        returnValue = F("Willhörn");
        break;
    }
    case 337445:
    {
        returnValue = F("Willi Becker-Steig");
        break;
    }
    case 337446:
    {
        returnValue = F("Willi Heuser-Str.");
        break;
    }
    case 337447:
    {
        returnValue = F("Willi Rausch Brücke");
        break;
    }
    case 337448:
    {
        returnValue = F("Willi-Bauer-Str.");
        break;
    }
    case 337449:
    {
        returnValue = F("Willi-Baumann-Str.");
        break;
    }
    case 337450:
    {
        returnValue = F("Willi-Baumeister-Str.");
        break;
    }
    case 337451:
    {
        returnValue = F("Willi-Baumeister-Weg");
        break;
    }
    case 337452:
    {
        returnValue = F("Willi-Betz-Str.");
        break;
    }
    case 337453:
    {
        returnValue = F("Willi-Bleicher-Str.");
        break;
    }
    case 337454:
    {
        returnValue = F("Willi-Blume-Weg");
        break;
    }
    case 337455:
    {
        returnValue = F("Willi-Bock-Str.");
        break;
    }
    case 337456:
    {
        returnValue = F("Willi-Braun-Str.");
        break;
    }
    case 337457:
    {
        returnValue = F("Willi-Bredel-Ring");
        break;
    }
    case 337458:
    {
        returnValue = F("Willi-Bredel-Str.");
        break;
    }
    case 337459:
    {
        returnValue = F("Willi-Bredel-Weg");
        break;
    }
    case 337460:
    {
        returnValue = F("Willi-Brehm-Str.");
        break;
    }
    case 337461:
    {
        returnValue = F("Willi-Bruch-Str.");
        break;
    }
    case 337462:
    {
        returnValue = F("Willi-Brückner-Str.");
        break;
    }
    case 337463:
    {
        returnValue = F("Willi-Budich-Str.");
        break;
    }
    case 337464:
    {
        returnValue = F("Willi-Burth-Str.");
        break;
    }
    case 337465:
    {
        returnValue = F("Willi-Büscher-Ring");
        break;
    }
    case 337466:
    {
        returnValue = F("Willi-Büßen-Weg");
        break;
    }
    case 337467:
    {
        returnValue = F("Willi-Dammasch-Weg");
        break;
    }
    case 337468:
    {
        returnValue = F("Willi-Decker Weg");
        break;
    }
    case 337469:
    {
        returnValue = F("Willi-Deichmüller-Str.");
        break;
    }
    case 337470:
    {
        returnValue = F("Willi-Döring-Ring");
        break;
    }
    case 337471:
    {
        returnValue = F("Willi-Döring-Str.");
        break;
    }
    case 337472:
    {
        returnValue = F("Willi-Egler-Weg");
        break;
    }
    case 337473:
    {
        returnValue = F("Willi-Eichin-Str.");
        break;
    }
    case 337474:
    {
        returnValue = F("Willi-Enders-Str.");
        break;
    }
    case 337475:
    {
        returnValue = F("Willi-Erlbeck-Ring");
        break;
    }
    case 337476:
    {
        returnValue = F("Willi-Ernst-Weg");
        break;
    }
    case 337477:
    {
        returnValue = F("Willi-Fischer-Str.");
        break;
    }
    case 337478:
    {
        returnValue = F("Willi-Foerster-Anlage");
        break;
    }
    case 337479:
    {
        returnValue = F("Willi-Fründt-Str.");
        break;
    }
    case 337480:
    {
        returnValue = F("Willi-Fährmann-Platz");
        break;
    }
    case 337481:
    {
        returnValue = F("Willi-Führer-Steg");
        break;
    }
    case 337482:
    {
        returnValue = F("Willi-Gall-Str.");
        break;
    }
    case 337483:
    {
        returnValue = F("Willi-Geiger-Weg");
        break;
    }
    case 337484:
    {
        returnValue = F("Willi-Graf-Str.");
        break;
    }
    case 337485:
    {
        returnValue = F("Willi-Graf-Weg");
        break;
    }
    case 337486:
    {
        returnValue = F("Willi-Grasser-Str.");
        break;
    }
    case 337487:
    {
        returnValue = F("Willi-Grimm-Weg");
        break;
    }
    case 337488:
    {
        returnValue = F("Willi-Gruber-Weg");
        break;
    }
    case 337489:
    {
        returnValue = F("Willi-Gutting-Str.");
        break;
    }
    case 337490:
    {
        returnValue = F("Willi-Hamacher-Ring");
        break;
    }
    case 337491:
    {
        returnValue = F("Willi-Hannen-Park");
        break;
    }
    case 337492:
    {
        returnValue = F("Willi-Hannen-Str.");
        break;
    }
    case 337493:
    {
        returnValue = F("Willi-Hartung-Weg");
        break;
    }
    case 337494:
    {
        returnValue = F("Willi-Heinkelein-Weg");
        break;
    }
    case 337495:
    {
        returnValue = F("Willi-Heinrichsmeier-Str.");
        break;
    }
    case 337496:
    {
        returnValue = F("Willi-Hoffmann-Str.");
        break;
    }
    case 337497:
    {
        returnValue = F("Willi-Hofmann-Str.");
        break;
    }
    case 337498:
    {
        returnValue = F("Willi-Holzmann-Ring");
        break;
    }
    case 337499:
    {
        returnValue = F("Willi-Hormann-Str.");
        break;
    }
    case 337500:
    {
        returnValue = F("Willi-Hussong-Str.");
        break;
    }
    case 337501:
    {
        returnValue = F("Willi-Häcker-Str.");
        break;
    }
    case 337502:
    {
        returnValue = F("Willi-Jamann-Str.");
        break;
    }
    case 337503:
    {
        returnValue = F("Willi-Jünemann-Allee");
        break;
    }
    case 337504:
    {
        returnValue = F("Willi-Kaidel-Str.");
        break;
    }
    case 337505:
    {
        returnValue = F("Willi-Kastrup-Weg");
        break;
    }
    case 337506:
    {
        returnValue = F("Willi-Kate-Str.");
        break;
    }
    case 337507:
    {
        returnValue = F("Willi-Keller-Siedlung");
        break;
    }
    case 337508:
    {
        returnValue = F("Willi-Kellermann-Str.");
        break;
    }
    case 337509:
    {
        returnValue = F("Willi-Kettmann-Str.");
        break;
    }
    case 337510:
    {
        returnValue = F("Willi-Klenck-Weg");
        break;
    }
    case 337511:
    {
        returnValue = F("Willi-Klotz-Weg");
        break;
    }
    case 337512:
    {
        returnValue = F("Willi-Koch-Str.");
        break;
    }
    case 337513:
    {
        returnValue = F("Willi-Kröckel-Allee");
        break;
    }
    case 337514:
    {
        returnValue = F("Willi-Kugelstadt-Platz");
        break;
    }
    case 337515:
    {
        returnValue = F("Willi-König-Str.");
        break;
    }
    case 337516:
    {
        returnValue = F("Willi-Könler-Ring");
        break;
    }
    case 337517:
    {
        returnValue = F("Willi-Küppers-Str.");
        break;
    }
    case 337518:
    {
        returnValue = F("Willi-Langhorst-Str.");
        break;
    }
    case 337519:
    {
        returnValue = F("Willi-Laschet-Str.");
        break;
    }
    case 337520:
    {
        returnValue = F("Willi-Ledermann-Str.");
        break;
    }
    case 337521:
    {
        returnValue = F("Willi-Lochte-Weg");
        break;
    }
    case 337522:
    {
        returnValue = F("Willi-Lohmann-Str.");
        break;
    }
    case 337523:
    {
        returnValue = F("Willi-Lohrengel-Weg");
        break;
    }
    case 337524:
    {
        returnValue = F("Willi-Maaß-Weg");
        break;
    }
    case 337525:
    {
        returnValue = F("Willi-Mainzer-Str.");
        break;
    }
    case 337526:
    {
        returnValue = F("Willi-Matthies-Str.");
        break;
    }
    case 337527:
    {
        returnValue = F("Willi-Mauthe-Weg");
        break;
    }
    case 337528:
    {
        returnValue = F("Willi-Melchers-Str.");
        break;
    }
    case 337529:
    {
        returnValue = F("Willi-Memmert-Str.");
        break;
    }
    case 337530:
    {
        returnValue = F("Willi-Merkl-Str.");
        break;
    }
    case 337531:
    {
        returnValue = F("Willi-Mertens-Weg");
        break;
    }
    case 337532:
    {
        returnValue = F("Willi-Moll-Weg");
        break;
    }
    case 337533:
    {
        returnValue = F("Willi-Müller-Str.");
        break;
    }
    case 337534:
    {
        returnValue = F("Willi-Müller-Weg");
        break;
    }
    case 337535:
    {
        returnValue = F("Willi-Münz-Str.");
        break;
    }
    case 337536:
    {
        returnValue = F("Willi-Neu-Ring");
        break;
    }
    case 337537:
    {
        returnValue = F("Willi-Nusser-Str.");
        break;
    }
    case 337538:
    {
        returnValue = F("Willi-Obermüller-Str.");
        break;
    }
    case 337539:
    {
        returnValue = F("Willi-Ohler-Weg");
        break;
    }
    case 337540:
    {
        returnValue = F("Willi-Oltmanns-Str.");
        break;
    }
    case 337541:
    {
        returnValue = F("Willi-Ostermann-Str.");
        break;
    }
    case 337542:
    {
        returnValue = F("Willi-Otte-Weg");
        break;
    }
    case 337543:
    {
        returnValue = F("Willi-Papert-Str.");
        break;
    }
    case 337544:
    {
        returnValue = F("Willi-Pattberg-Ring");
        break;
    }
    case 337545:
    {
        returnValue = F("Willi-Plappert-Str.");
        break;
    }
    case 337546:
    {
        returnValue = F("Willi-Potsch-Str.");
        break;
    }
    case 337547:
    {
        returnValue = F("Willi-Richter-Platz");
        break;
    }
    case 337548:
    {
        returnValue = F("Willi-Ricker-Weg");
        break;
    }
    case 337549:
    {
        returnValue = F("Willi-Rixen-Str.");
        break;
    }
    case 337550:
    {
        returnValue = F("Willi-Roth-Str.");
        break;
    }
    case 337551:
    {
        returnValue = F("Willi-Röder-Str.");
        break;
    }
    case 337552:
    {
        returnValue = F("Willi-Rösner-Str.");
        break;
    }
    case 337553:
    {
        returnValue = F("Willi-Sackmann-Str.");
        break;
    }
    case 337554:
    {
        returnValue = F("Willi-Sander-Platz");
        break;
    }
    case 337555:
    {
        returnValue = F("Willi-Sauer-Weg");
        break;
    }
    case 337556:
    {
        returnValue = F("Willi-Schertle-Ring");
        break;
    }
    case 337557:
    {
        returnValue = F("Willi-Schmidt-Str.");
        break;
    }
    case 337558:
    {
        returnValue = F("Willi-Schramm-Str.");
        break;
    }
    case 337559:
    {
        returnValue = F("Willi-Schröder-Platz");
        break;
    }
    case 337560:
    {
        returnValue = F("Willi-Schröder-Str.");
        break;
    }
    case 337561:
    {
        returnValue = F("Willi-Schwienhorst-Str.");
        break;
    }
    case 337562:
    {
        returnValue = F("Willi-Schürgers-Ring");
        break;
    }
    case 337563:
    {
        returnValue = F("Willi-Siebler-Str.");
        break;
    }
    case 337564:
    {
        returnValue = F("Willi-Stamer-Str.");
        break;
    }
    case 337565:
    {
        returnValue = F("Willi-Steitz-Str.");
        break;
    }
    case 337566:
    {
        returnValue = F("Willi-Stroß-Weg");
        break;
    }
    case 337567:
    {
        returnValue = F("Willi-Sänger-Str.");
        break;
    }
    case 337568:
    {
        returnValue = F("Willi-Tillmanns-Weg");
        break;
    }
    case 337569:
    {
        returnValue = F("Willi-Ulfig-Weg");
        break;
    }
    case 337570:
    {
        returnValue = F("Willi-Wegewitz-Ring");
        break;
    }
    case 337571:
    {
        returnValue = F("Willi-Weiß-Allee");
        break;
    }
    case 337572:
    {
        returnValue = F("Willi-Weyer-Str.");
        break;
    }
    case 337573:
    {
        returnValue = F("Willi-Winkler-Str.");
        break;
    }
    case 337574:
    {
        returnValue = F("Willi-Wörner-Weg");
        break;
    }
    case 337575:
    {
        returnValue = F("Willi-Zachow-Weg");
        break;
    }
    case 337576:
    {
        returnValue = F("Willi-Zander-Str.");
        break;
    }
    case 337577:
    {
        returnValue = F("William-Busch-Weg");
        break;
    }
    case 337578:
    {
        returnValue = F("William-Büller-Str.");
        break;
    }
    case 337579:
    {
        returnValue = F("William-Elliot-Platz");
        break;
    }
    case 337580:
    {
        returnValue = F("William-Graf-Platz");
        break;
    }
    case 337581:
    {
        returnValue = F("William-Grote-Weg");
        break;
    }
    case 337582:
    {
        returnValue = F("William-Kerckhoff-Str.");
        break;
    }
    case 337583:
    {
        returnValue = F("William-O'Dwyer-Str.");
        break;
    }
    case 337584:
    {
        returnValue = F("William-Prym-Str.");
        break;
    }
    case 337585:
    {
        returnValue = F("William-Shakespeare-Ring");
        break;
    }
    case 337586:
    {
        returnValue = F("William-Shakespeare-Str.");
        break;
    }
    case 337587:
    {
        returnValue = F("William-Tubman-Weg");
        break;
    }
    case 337588:
    {
        returnValue = F("William-Watt-Str.");
        break;
    }
    case 337589:
    {
        returnValue = F("William-Wauer-Weg");
        break;
    }
    case 337590:
    {
        returnValue = F("Williams-Road");
        break;
    }
    case 337591:
    {
        returnValue = F("Williamsweg");
        break;
    }
    case 337592:
    {
        returnValue = F("Willib.-Hauer-Str.");
        break;
    }
    case 337593:
    {
        returnValue = F("Willibald-Alexis-Str.");
        break;
    }
    case 337594:
    {
        returnValue = F("Willibald-Emmrich-Str.");
        break;
    }
    case 337595:
    {
        returnValue = F("Willibald-Frisch-Str.");
        break;
    }
    case 337596:
    {
        returnValue = F("Willibald-Gluck-Str.");
        break;
    }
    case 337597:
    {
        returnValue = F("Willibald-Gluck-Weg");
        break;
    }
    case 337598:
    {
        returnValue = F("Willibald-Groh-Str.");
        break;
    }
    case 337599:
    {
        returnValue = F("Willibald-Hamburger-Str.");
        break;
    }
    case 337600:
    {
        returnValue = F("Willibald-Müller-Str.");
        break;
    }
    case 337601:
    {
        returnValue = F("Willibald-Pirckheimer-Str.");
        break;
    }
    case 337602:
    {
        returnValue = F("Willibald-Schmidt-Kreisel");
        break;
    }
    case 337603:
    {
        returnValue = F("Willibald-Schwab-Str.");
        break;
    }
    case 337604:
    {
        returnValue = F("Willibald-Schütz-Platz");
        break;
    }
    case 337605:
    {
        returnValue = F("Willibaldsbrücke");
        break;
    }
    case 337606:
    {
        returnValue = F("Willibaldstr.");
        break;
    }
    case 337607:
    {
        returnValue = F("Willibrord-Benzler-Str.");
        break;
    }
    case 337608:
    {
        returnValue = F("Willibrordiplatz");
        break;
    }
    case 337609:
    {
        returnValue = F("Willibrordplatz");
        break;
    }
    case 337610:
    {
        returnValue = F("Willibrordstr.");
        break;
    }
    case 337611:
    {
        returnValue = F("Willibrordusstr.");
        break;
    }
    case 337612:
    {
        returnValue = F("Willibrordusweg");
        break;
    }
    case 337613:
    {
        returnValue = F("Willibrordweg");
        break;
    }
    case 337614:
    {
        returnValue = F("Willicher Feld");
        break;
    }
    case 337615:
    {
        returnValue = F("Willicher Heide");
        break;
    }
    case 337616:
    {
        returnValue = F("Willicher Str.");
        break;
    }
    case 337617:
    {
        returnValue = F("Willichsheck");
        break;
    }
    case 337618:
    {
        returnValue = F("Willichstr.");
        break;
    }
    case 337619:
    {
        returnValue = F("Williges Worth");
        break;
    }
    case 337620:
    {
        returnValue = F("Willighäuser Weg");
        break;
    }
    case 337621:
    {
        returnValue = F("Willigisbrücke");
        break;
    }
    case 337622:
    {
        returnValue = F("Willigisstr.");
        break;
    }
    case 337623:
    {
        returnValue = F("Willihalmstr.");
        break;
    }
    case 337624:
    {
        returnValue = F("Willihof");
        break;
    }
    case 337625:
    {
        returnValue = F("Willina");
        break;
    }
    case 337626:
    {
        returnValue = F("Willindebrücke");
        break;
    }
    case 337627:
    {
        returnValue = F("Willinger Str.");
        break;
    }
    case 337628:
    {
        returnValue = F("Willinger Weg");
        break;
    }
    case 337629:
    {
        returnValue = F("Willingertal-Sträßle");
        break;
    }
    case 337630:
    {
        returnValue = F("Willingertalsträßchen");
        break;
    }
    case 337631:
    {
        returnValue = F("Willinghausen");
        break;
    }
    case 337632:
    {
        returnValue = F("Willinghepper Str.");
        break;
    }
    case 337633:
    {
        returnValue = F("Willinghusener Birkenweg");
        break;
    }
    case 337634:
    {
        returnValue = F("Willinghusener Landstr.");
        break;
    }
    case 337635:
    {
        returnValue = F("Willinghusener Weg");
        break;
    }
    case 337636:
    {
        returnValue = F("Willinghäuser Damm");
        break;
    }
    case 337637:
    {
        returnValue = F("Willingrader Str.");
        break;
    }
    case 337638:
    {
        returnValue = F("Willingshäuser Str.");
        break;
    }
    case 337639:
    {
        returnValue = F("Willingshäuser Weg");
        break;
    }
    case 337640:
    {
        returnValue = F("Willingsweide");
        break;
    }
    case 337641:
    {
        returnValue = F("Willingweg");
        break;
    }
    case 337642:
    {
        returnValue = F("Willis");
        break;
    }
    case 337643:
    {
        returnValue = F("Willishauser Str.");
        break;
    }
    case 337644:
    {
        returnValue = F("Williswindastr.");
        break;
    }
    case 337645:
    {
        returnValue = F("Willitzgrüner Weg");
        break;
    }
    case 337646:
    {
        returnValue = F("Willkommen");
        break;
    }
    case 337647:
    {
        returnValue = F("Willkommstr.");
        break;
    }
    case 337648:
    {
        returnValue = F("Willmandinger Str.");
        break;
    }
    case 337649:
    {
        returnValue = F("Willmanns");
        break;
    }
    case 337650:
    {
        returnValue = F("Willmannstr.");
        break;
    }
    case 337651:
    {
        returnValue = F("Willmarser Str.");
        break;
    }
    case 337652:
    {
        returnValue = F("Willmendinger Str.");
        break;
    }
    case 337653:
    {
        returnValue = F("Willmenroder Str.");
        break;
    }
    case 337654:
    {
        returnValue = F("Willmericher Str.");
        break;
    }
    case 337655:
    {
        returnValue = F("Willmeringer Weg");
        break;
    }
    case 337656:
    {
        returnValue = F("Willmerother Str.");
        break;
    }
    case 337657:
    {
        returnValue = F("Willmersdorfer Chaussee");
        break;
    }
    case 337658:
    {
        returnValue = F("Willmersdorfer Landstr.");
        break;
    }
    case 337659:
    {
        returnValue = F("Willmersdorfer Str.");
        break;
    }
    case 337660:
    {
        returnValue = F("Willmersdorfer Weg");
        break;
    }
    case 337661:
    {
        returnValue = F("Willmersreuth");
        break;
    }
    case 337662:
    {
        returnValue = F("Willmkeweg");
        break;
    }
    case 337663:
    {
        returnValue = F("Willmsstr.");
        break;
    }
    case 337664:
    {
        returnValue = F("Willmuthstr.");
        break;
    }
    case 337665:
    {
        returnValue = F("Willofser Str.");
        break;
    }
    case 337666:
    {
        returnValue = F("Willofser Weg");
        break;
    }
    case 337667:
    {
        returnValue = F("Willohstr.");
        break;
    }
    case 337668:
    {
        returnValue = F("Willostr.");
        break;
    }
    case 337669:
    {
        returnValue = F("Willrath-Dreesen-Str.");
        break;
    }
    case 337670:
    {
        returnValue = F("Willsbacher Str.");
        break;
    }
    case 337671:
    {
        returnValue = F("Willscheider Weg");
        break;
    }
    case 337672:
    {
        returnValue = F("Willscheidweg");
        break;
    }
    case 337673:
    {
        returnValue = F("Willschütz");
        break;
    }
    case 337674:
    {
        returnValue = F("Willstr.");
        break;
    }
    case 337675:
    {
        returnValue = F("Willstätter Ring");
        break;
    }
    case 337676:
    {
        returnValue = F("Willstätter Str.");
        break;
    }
    case 337677:
    {
        returnValue = F("Willstätterstr.");
        break;
    }
    case 337678:
    {
        returnValue = F("Willweg");
        break;
    }
    case 337679:
    {
        returnValue = F("Willy Düsch Brücke");
        break;
    }
    case 337680:
    {
        returnValue = F("Willy-Andreas-Weg");
        break;
    }
    case 337681:
    {
        returnValue = F("Willy-Anker-Weg");
        break;
    }
    case 337682:
    {
        returnValue = F("Willy-Arndt-Str.");
        break;
    }
    case 337683:
    {
        returnValue = F("Willy-Aron-Str.");
        break;
    }
    case 337684:
    {
        returnValue = F("Willy-Batta-Str.");
        break;
    }
    case 337685:
    {
        returnValue = F("Willy-Bechstein-Str.");
        break;
    }
    case 337686:
    {
        returnValue = F("Willy-Behm-Weg");
        break;
    }
    case 337687:
    {
        returnValue = F("Willy-Bolz-Weg");
        break;
    }
    case 337688:
    {
        returnValue = F("Willy-Brand-Str.");
        break;
    }
    case 337689:
    {
        returnValue = F("Willy-Brandt-Allee");
        break;
    }
    case 337690:
    {
        returnValue = F("Willy-Brandt-Anlage");
        break;
    }
    case 337691:
    {
        returnValue = F("Willy-Brandt-Kai");
        break;
    }
    case 337692:
    {
        returnValue = F("Willy-Brandt-Park");
        break;
    }
    case 337693:
    {
        returnValue = F("Willy-Brandt-Platz");
        break;
    }
    case 337694:
    {
        returnValue = F("Willy-Brandt-Ring");
        break;
    }
    case 337695:
    {
        returnValue = F("Willy-Brandt-Str.");
        break;
    }
    case 337696:
    {
        returnValue = F("Willy-Brandt-Str. 1-37");
        break;
    }
    case 337697:
    {
        returnValue = F("Willy-Brandt-Weg");
        break;
    }
    case 337698:
    {
        returnValue = F("Willy-Bretschneider-Platz");
        break;
    }
    case 337699:
    {
        returnValue = F("Willy-Buchauer-Ring");
        break;
    }
    case 337700:
    {
        returnValue = F("Willy-Buckel-Str.");
        break;
    }
    case 337701:
    {
        returnValue = F("Willy-Busch-Str.");
        break;
    }
    case 337702:
    {
        returnValue = F("Willy-Böhme-Str.");
        break;
    }
    case 337703:
    {
        returnValue = F("Willy-Büker-Str.");
        break;
    }
    case 337704:
    {
        returnValue = F("Willy-Bürger-Str.");
        break;
    }
    case 337705:
    {
        returnValue = F("Willy-Deutschmann-Str.");
        break;
    }
    case 337706:
    {
        returnValue = F("Willy-Dieninghoff-Weg");
        break;
    }
    case 337707:
    {
        returnValue = F("Willy-Dohmen-Park");
        break;
    }
    case 337708:
    {
        returnValue = F("Willy-Dolge-Weg");
        break;
    }
    case 337709:
    {
        returnValue = F("Willy-Dörner-Str.");
        break;
    }
    case 337710:
    {
        returnValue = F("Willy-Grimm-Weg");
        break;
    }
    case 337711:
    {
        returnValue = F("Willy-Gutting-Str.");
        break;
    }
    case 337712:
    {
        returnValue = F("Willy-Gäbler-Weg");
        break;
    }
    case 337713:
    {
        returnValue = F("Willy-Haas-Str.");
        break;
    }
    case 337714:
    {
        returnValue = F("Willy-Himmelhuber-Str.");
        break;
    }
    case 337715:
    {
        returnValue = F("Willy-Horstmann-Weg");
        break;
    }
    case 337716:
    {
        returnValue = F("Willy-Häußler-Weg");
        break;
    }
    case 337717:
    {
        returnValue = F("Willy-Jannasch-Str.");
        break;
    }
    case 337718:
    {
        returnValue = F("Willy-Kantelberg-Ring");
        break;
    }
    case 337719:
    {
        returnValue = F("Willy-Kessel-Str.");
        break;
    }
    case 337720:
    {
        returnValue = F("Willy-Knoll-Str.");
        break;
    }
    case 337721:
    {
        returnValue = F("Willy-Knoop-Weg");
        break;
    }
    case 337722:
    {
        returnValue = F("Willy-Kress-Weg");
        break;
    }
    case 337723:
    {
        returnValue = F("Willy-Kreutz-Str.");
        break;
    }
    case 337724:
    {
        returnValue = F("Willy-Kreutzer-Weg");
        break;
    }
    case 337725:
    {
        returnValue = F("Willy-Kölbl-Weg");
        break;
    }
    case 337726:
    {
        returnValue = F("Willy-Lessing-Str.");
        break;
    }
    case 337727:
    {
        returnValue = F("Willy-Lindner-Str.");
        break;
    }
    case 337728:
    {
        returnValue = F("Willy-Lohmann-Str.");
        break;
    }
    case 337729:
    {
        returnValue = F("Willy-Lucas-Weg");
        break;
    }
    case 337730:
    {
        returnValue = F("Willy-Ludin-Weg");
        break;
    }
    case 337731:
    {
        returnValue = F("Willy-Merkl-Str.");
        break;
    }
    case 337732:
    {
        returnValue = F("Willy-Messerschmitt-Str.");
        break;
    }
    case 337733:
    {
        returnValue = F("Willy-Meyer-Str.");
        break;
    }
    case 337734:
    {
        returnValue = F("Willy-Mock-Str.");
        break;
    }
    case 337735:
    {
        returnValue = F("Willy-Mößle-Str.");
        break;
    }
    case 337736:
    {
        returnValue = F("Willy-Müller-Ring");
        break;
    }
    case 337737:
    {
        returnValue = F("Willy-Orth-Weg");
        break;
    }
    case 337738:
    {
        returnValue = F("Willy-Pelz-Str.");
        break;
    }
    case 337739:
    {
        returnValue = F("Willy-Penzel-Platz");
        break;
    }
    case 337740:
    {
        returnValue = F("Willy-Poller-Str.");
        break;
    }
    case 337741:
    {
        returnValue = F("Willy-Potratz-Weg");
        break;
    }
    case 337742:
    {
        returnValue = F("Willy-Reichert-Str.");
        break;
    }
    case 337743:
    {
        returnValue = F("Willy-Rudert-Platz");
        break;
    }
    case 337744:
    {
        returnValue = F("Willy-Räde-Weg");
        break;
    }
    case 337745:
    {
        returnValue = F("Willy-Rösler-Str.");
        break;
    }
    case 337746:
    {
        returnValue = F("Willy-Rüsch-Str.");
        break;
    }
    case 337747:
    {
        returnValue = F("Willy-Rüsch-Str. 11");
        break;
    }
    case 337748:
    {
        returnValue = F("Willy-Sachse-Str.");
        break;
    }
    case 337749:
    {
        returnValue = F("Willy-Schade-Anlage");
        break;
    }
    case 337750:
    {
        returnValue = F("Willy-Schenk-Str.");
        break;
    }
    case 337751:
    {
        returnValue = F("Willy-Schlegelmilch-Str.");
        break;
    }
    case 337752:
    {
        returnValue = F("Willy-Schmieder-Str.");
        break;
    }
    case 337753:
    {
        returnValue = F("Willy-Schober-Str.");
        break;
    }
    case 337754:
    {
        returnValue = F("Willy-Schreier-Str.");
        break;
    }
    case 337755:
    {
        returnValue = F("Willy-Teufelhart-Weg");
        break;
    }
    case 337756:
    {
        returnValue = F("Willy-Träutlein-Str.");
        break;
    }
    case 337757:
    {
        returnValue = F("Willy-Vogel-Weg");
        break;
    }
    case 337758:
    {
        returnValue = F("Willy-Voit-Str.");
        break;
    }
    case 337759:
    {
        returnValue = F("Wilm-Rinck-Str.");
        break;
    }
    case 337760:
    {
        returnValue = F("Wilma-Bayer-Weg");
        break;
    }
    case 337761:
    {
        returnValue = F("Wilma-Treppe-Str.");
        break;
    }
    case 337762:
    {
        returnValue = F("Wilma-von-Friedrich-Str.");
        break;
    }
    case 337763:
    {
        returnValue = F("Wilmaanlage");
        break;
    }
    case 337764:
    {
        returnValue = F("Wilmannstr.");
        break;
    }
    case 337765:
    {
        returnValue = F("Wilmastr.");
        break;
    }
    case 337766:
    {
        returnValue = F("Wilmendobelweg");
        break;
    }
    case 337767:
    {
        returnValue = F("Wilmenweg");
        break;
    }
    case 337768:
    {
        returnValue = F("Wilmerei");
        break;
    }
    case 337769:
    {
        returnValue = F("Wilmeresch");
        break;
    }
    case 337770:
    {
        returnValue = F("Wilmers Winkel");
        break;
    }
    case 337771:
    {
        returnValue = F("Wilmersdorf");
        break;
    }
    case 337772:
    {
        returnValue = F("Wilmersdorfer Eck");
        break;
    }
    case 337773:
    {
        returnValue = F("Wilmersdorfer Str.");
        break;
    }
    case 337774:
    {
        returnValue = F("Wilmersdorfer Weg");
        break;
    }
    case 337775:
    {
        returnValue = F("Wilmersiek");
        break;
    }
    case 337776:
    {
        returnValue = F("Wilmersreuther Str.");
        break;
    }
    case 337777:
    {
        returnValue = F("Wilmeröderberg");
        break;
    }
    case 337778:
    {
        returnValue = F("Wilmes Kamp");
        break;
    }
    case 337779:
    {
        returnValue = F("Wilmetstr.");
        break;
    }
    case 337780:
    {
        returnValue = F("Wilminkweg");
        break;
    }
    case 337781:
    {
        returnValue = F("Wilmiusstr.");
        break;
    }
    case 337782:
    {
        returnValue = F("Wilmkestr.");
        break;
    }
    case 337783:
    {
        returnValue = F("Wilmkingweg");
        break;
    }
    case 337784:
    {
        returnValue = F("Wilmowskystr.");
        break;
    }
    case 337785:
    {
        returnValue = F("Wilmsberg");
        break;
    }
    case 337786:
    {
        returnValue = F("Wilmsberger Weg");
        break;
    }
    case 337787:
    {
        returnValue = F("Wilmsbrink");
        break;
    }
    case 337788:
    {
        returnValue = F("Wilmsdorfer Str.");
        break;
    }
    case 337789:
    {
        returnValue = F("Wilmshagen");
        break;
    }
    case 337790:
    {
        returnValue = F("Wilmskamp");
        break;
    }
    case 337791:
    {
        returnValue = F("Wilmslück");
        break;
    }
    case 337792:
    {
        returnValue = F("Wilmsstr.");
        break;
    }
    case 337793:
    {
        returnValue = F("Wilmstr.");
        break;
    }
    case 337794:
    {
        returnValue = F("Wilmsweg");
        break;
    }
    case 337795:
    {
        returnValue = F("Wilmundsheimer Str.");
        break;
    }
    case 337796:
    {
        returnValue = F("Wilnaer Weg");
        break;
    }
    case 337797:
    {
        returnValue = F("Wilnsdorfer Str.");
        break;
    }
    case 337798:
    {
        returnValue = F("Wilonstr.");
        break;
    }
    case 337799:
    {
        returnValue = F("Wilopstr.");
        break;
    }
    case 337800:
    {
        returnValue = F("Wilpasing");
        break;
    }
    case 337801:
    {
        returnValue = F("Wilpertingerstr.");
        break;
    }
    case 337802:
    {
        returnValue = F("Wilsbacher Weg");
        break;
    }
    case 337803:
    {
        returnValue = F("Wilsberg");
        break;
    }
    case 337804:
    {
        returnValue = F("Wilsberger Str.");
        break;
    }
    case 337805:
    {
        returnValue = F("Wilsbrinkstr.");
        break;
    }
    case 337806:
    {
        returnValue = F("Wilschdorfer Landstr.");
        break;
    }
    case 337807:
    {
        returnValue = F("Wilschdorfer Str.");
        break;
    }
    case 337808:
    {
        returnValue = F("Wilschenbrucher Weg");
        break;
    }
    case 337809:
    {
        returnValue = F("Wilscher Str.");
        break;
    }
    case 337810:
    {
        returnValue = F("Wilscher Weg");
        break;
    }
    case 337811:
    {
        returnValue = F("Wilschwitzer Weg");
        break;
    }
    case 337812:
    {
        returnValue = F("Wilsdorf");
        break;
    }
    case 337813:
    {
        returnValue = F("Wilsdorfer Str.");
        break;
    }
    case 337814:
    {
        returnValue = F("Wilsdorfweg");
        break;
    }
    case 337815:
    {
        returnValue = F("Wilsdruffer Chaussee");
        break;
    }
    case 337816:
    {
        returnValue = F("Wilsdruffer Str.");
        break;
    }
    case 337817:
    {
        returnValue = F("Wilseckerstr.");
        break;
    }
    case 337818:
    {
        returnValue = F("Wilseder Str.");
        break;
    }
    case 337819:
    {
        returnValue = F("Wilseder Weg");
        break;
    }
    case 337820:
    {
        returnValue = F("Wilsen");
        break;
    }
    case 337821:
    {
        returnValue = F("Wilsener Chaussee");
        break;
    }
    case 337822:
    {
        returnValue = F("Wilsener Str.");
        break;
    }
    case 337823:
    {
        returnValue = F("Wilsener Weg");
        break;
    }
    case 337824:
    {
        returnValue = F("Wilsenröther Str.");
        break;
    }
    case 337825:
    {
        returnValue = F("Wilsenscher Waldweg");
        break;
    }
    case 337826:
    {
        returnValue = F("Wilsenstr.");
        break;
    }
    case 337827:
    {
        returnValue = F("Wilser Weg");
        break;
    }
    case 337828:
    {
        returnValue = F("Wilsgasse");
        break;
    }
    case 337829:
    {
        returnValue = F("Wilshagen");
        break;
    }
    case 337830:
    {
        returnValue = F("Wilshornsfeld");
        break;
    }
    case 337831:
    {
        returnValue = F("Wilshornweg");
        break;
    }
    case 337832:
    {
        returnValue = F("Wilsickow");
        break;
    }
    case 337833:
    {
        returnValue = F("Wilsickower Str.");
        break;
    }
    case 337834:
    {
        returnValue = F("Wilsinger Spitzweg");
        break;
    }
    case 337835:
    {
        returnValue = F("Wilsinger Str.");
        break;
    }
    case 337836:
    {
        returnValue = F("Wilsinger Weg");
        break;
    }
    case 337837:
    {
        returnValue = F("Wilsingweg");
        break;
    }
    case 337838:
    {
        returnValue = F("Wilskamp");
        break;
    }
    case 337839:
    {
        returnValue = F("Wilslebener Chaussee");
        break;
    }
    case 337840:
    {
        returnValue = F("Wilslebener Str.");
        break;
    }
    case 337841:
    {
        returnValue = F("Wilsnacker Chaussee");
        break;
    }
    case 337842:
    {
        returnValue = F("Wilsnacker Str.");
        break;
    }
    case 337843:
    {
        returnValue = F("Wilsnacker Weg");
        break;
    }
    case 337844:
    {
        returnValue = F("Wilsonstr.");
        break;
    }
    case 337845:
    {
        returnValue = F("Wilstedter Kirchweg");
        break;
    }
    case 337846:
    {
        returnValue = F("Wilstedter Str.");
        break;
    }
    case 337847:
    {
        returnValue = F("Wilstedter Weg");
        break;
    }
    case 337848:
    {
        returnValue = F("Wilstedtermoorer Schiffgraben");
        break;
    }
    case 337849:
    {
        returnValue = F("Wilsteinstr.");
        break;
    }
    case 337850:
    {
        returnValue = F("Wilster Str.");
        break;
    }
    case 337851:
    {
        returnValue = F("Wilstorfstr.");
        break;
    }
    case 337852:
    {
        returnValue = F("Wilsumer Str.");
        break;
    }
    case 337853:
    {
        returnValue = F("Wilsumer Wanderweg");
        break;
    }
    case 337854:
    {
        returnValue = F("Wiltbergerstr.");
        break;
    }
    case 337855:
    {
        returnValue = F("Wiltekampsweg");
        break;
    }
    case 337856:
    {
        returnValue = F("Wiltengang");
        break;
    }
    case 337857:
    {
        returnValue = F("Wilthener Str.");
        break;
    }
    case 337858:
    {
        returnValue = F("Wilthener Weg");
        break;
    }
    case 337859:
    {
        returnValue = F("Wiltinger Str.");
        break;
    }
    case 337860:
    {
        returnValue = F("Wiltinger Weg");
        break;
    }
    case 337861:
    {
        returnValue = F("Wiltmaisterstr.");
        break;
    }
    case 337862:
    {
        returnValue = F("Wiltmanns Garten");
        break;
    }
    case 337863:
    {
        returnValue = F("Wiltrop");
        break;
    }
    case 337864:
    {
        returnValue = F("Wiltroper Str.");
        break;
    }
    case 337865:
    {
        returnValue = F("Wiltrudisstr.");
        break;
    }
    case 337866:
    {
        returnValue = F("Wiltrudstr.");
        break;
    }
    case 337867:
    {
        returnValue = F("Wiltshausener Hörn");
        break;
    }
    case 337868:
    {
        returnValue = F("Wiltzsch");
        break;
    }
    case 337869:
    {
        returnValue = F("Wilxener Str.");
        break;
    }
    case 337870:
    {
        returnValue = F("Wilzenberger Str.");
        break;
    }
    case 337871:
    {
        returnValue = F("Wilzenburger Str.");
        break;
    }
    case 337872:
    {
        returnValue = F("Wilzerstr.");
        break;
    }
    case 337873:
    {
        returnValue = F("Wilzschhaus");
        break;
    }
    case 337874:
    {
        returnValue = F("Wilzschhäuserweg");
        break;
    }
    case 337875:
    {
        returnValue = F("Wim-Nöbel-Str.");
        break;
    }
    case 337876:
    {
        returnValue = F("Wimarusstr.");
        break;
    }
    case 337877:
    {
        returnValue = F("Wimbach");
        break;
    }
    case 337878:
    {
        returnValue = F("Wimbachstr.");
        break;
    }
    case 337879:
    {
        returnValue = F("Wimbachweg");
        break;
    }
    case 337880:
    {
        returnValue = F("Wimbauernleiten");
        break;
    }
    case 337881:
    {
        returnValue = F("Wimbauerstr.");
        break;
    }
    case 337882:
    {
        returnValue = F("Wimberg");
        break;
    }
    case 337883:
    {
        returnValue = F("Wimberger Höhe");
        break;
    }
    case 337884:
    {
        returnValue = F("Wimberger Str.");
        break;
    }
    case 337885:
    {
        returnValue = F("Wimbergstr.");
        break;
    }
    case 337886:
    {
        returnValue = F("Wimbergweg");
        break;
    }
    case 337887:
    {
        returnValue = F("Wimborner Str.");
        break;
    }
    case 337888:
    {
        returnValue = F("Wimburggasse");
        break;
    }
    case 337889:
    {
        returnValue = F("Wimenweg");
        break;
    }
    case 337890:
    {
        returnValue = F("Wimereuxstr.");
        break;
    }
    case 337891:
    {
        returnValue = F("Wimm");
        break;
    }
    case 337892:
    {
        returnValue = F("Wimmelbacher Str.");
        break;
    }
    case 337893:
    {
        returnValue = F("Wimmelburger Str.");
        break;
    }
    case 337894:
    {
        returnValue = F("Wimmelröder Dorfstr.");
        break;
    }
    case 337895:
    {
        returnValue = F("Wimmelröder Weg");
        break;
    }
    case 337896:
    {
        returnValue = F("Wimmelsbacher Weg");
        break;
    }
    case 337897:
    {
        returnValue = F("Wimmentaler Str.");
        break;
    }
    case 337898:
    {
        returnValue = F("Wimmer");
        break;
    }
    case 337899:
    {
        returnValue = F("Wimmer Moor");
        break;
    }
    case 337900:
    {
        returnValue = F("Wimmer Str.");
        break;
    }
    case 337901:
    {
        returnValue = F("Wimmer-G' wanden");
        break;
    }
    case 337902:
    {
        returnValue = F("Wimmerer Str.");
        break;
    }
    case 337903:
    {
        returnValue = F("Wimmergasse");
        break;
    }
    case 337904:
    {
        returnValue = F("Wimmerkreuzweg");
        break;
    }
    case 337905:
    {
        returnValue = F("Wimmersbacher Weg");
        break;
    }
    case 337906:
    {
        returnValue = F("Wimmersbacherweg");
        break;
    }
    case 337907:
    {
        returnValue = F("Wimmersberger Str.");
        break;
    }
    case 337908:
    {
        returnValue = F("Wimmersbüller Str.");
        break;
    }
    case 337909:
    {
        returnValue = F("Wimmershof");
        break;
    }
    case 337910:
    {
        returnValue = F("Wimmerweg");
        break;
    }
    case 337911:
    {
        returnValue = F("Wimmlerstr.");
        break;
    }
    case 337912:
    {
        returnValue = F("Wimmmerweg");
        break;
    }
    case 337913:
    {
        returnValue = F("Wimmstr.");
        break;
    }
    case 337914:
    {
        returnValue = F("Wimpashof");
        break;
    }
    case 337915:
    {
        returnValue = F("Wimpashofer Str.");
        break;
    }
    case 337916:
    {
        returnValue = F("Wimpasing");
        break;
    }
    case 337917:
    {
        returnValue = F("Wimpasinger Feld");
        break;
    }
    case 337918:
    {
        returnValue = F("Wimpassing");
        break;
    }
    case 337919:
    {
        returnValue = F("Wimpelingasse");
        break;
    }
    case 337920:
    {
        returnValue = F("Wimpelstr.");
        break;
    }
    case 337921:
    {
        returnValue = F("Wimpersing");
        break;
    }
    case 337922:
    {
        returnValue = F("Wimpes");
        break;
    }
    case 337923:
    {
        returnValue = F("Wimpfener Str.");
        break;
    }
    case 337924:
    {
        returnValue = F("Wimpfener Weg");
        break;
    }
    case 337925:
    {
        returnValue = F("Wimphelingstr.");
        break;
    }
    case 337926:
    {
        returnValue = F("Wimsbacher Str.");
        break;
    }
    case 337927:
    {
        returnValue = F("Wimsbacher Str. Verlängerung");
        break;
    }
    case 337928:
    {
        returnValue = F("Wimsener Weg");
        break;
    }
    case 337929:
    {
        returnValue = F("Wimsheimer Str.");
        break;
    }
    case 337930:
    {
        returnValue = F("Winand-Dammers-Str.");
        break;
    }
    case 337931:
    {
        returnValue = F("Winand-Kaiser-Str.");
        break;
    }
    case 337932:
    {
        returnValue = F("Winand-Kayser-Str.");
        break;
    }
    case 337933:
    {
        returnValue = F("Winand-Lukas-Str.");
        break;
    }
    case 337934:
    {
        returnValue = F("Winand-Lüttgens-Str.");
        break;
    }
    case 337935:
    {
        returnValue = F("Winand-Mausbach-Weg");
        break;
    }
    case 337936:
    {
        returnValue = F("Winand-Nick-Str.");
        break;
    }
    case 337937:
    {
        returnValue = F("Winand-Rossi-Str.");
        break;
    }
    case 337938:
    {
        returnValue = F("Winandswiese");
        break;
    }
    case 337939:
    {
        returnValue = F("Winchesterstr.");
        break;
    }
    case 337940:
    {
        returnValue = F("Winchilostr.");
        break;
    }
    case 337941:
    {
        returnValue = F("Winckelhoferstr.");
        break;
    }
    case 337942:
    {
        returnValue = F("Winckelmannstr.");
        break;
    }
    case 337943:
    {
        returnValue = F("Wincklerplatz");
        break;
    }
    case 337944:
    {
        returnValue = F("Wincklerstr.");
        break;
    }
    case 337945:
    {
        returnValue = F("Winckstr.");
        break;
    }
    case 337946:
    {
        returnValue = F("Wind");
        break;
    }
    case 337947:
    {
        returnValue = F("Windacher Str.");
        break;
    }
    case 337948:
    {
        returnValue = F("Windachstr.");
        break;
    }
    case 337949:
    {
        returnValue = F("Windallee");
        break;
    }
    case 337950:
    {
        returnValue = F("Windausstr.");
        break;
    }
    case 337951:
    {
        returnValue = F("Windauweg");
        break;
    }
    case 337952:
    {
        returnValue = F("Windbarger Weg");
        break;
    }
    case 337953:
    {
        returnValue = F("Windbargsweg");
        break;
    }
    case 337954:
    {
        returnValue = F("Windberg");
        break;
    }
    case 337955:
    {
        returnValue = F("Windbergallee");
        break;
    }
    case 337956:
    {
        returnValue = F("Windbergbahn");
        break;
    }
    case 337957:
    {
        returnValue = F("Windbergbrücke");
        break;
    }
    case 337958:
    {
        returnValue = F("Windberger Dorfstr.");
        break;
    }
    case 337959:
    {
        returnValue = F("Windberger Kirchweg");
        break;
    }
    case 337960:
    {
        returnValue = F("Windberger Str.");
        break;
    }
    case 337961:
    {
        returnValue = F("Windberger Weg");
        break;
    }
    case 337962:
    {
        returnValue = F("Windbergstr.");
        break;
    }
    case 337963:
    {
        returnValue = F("Windbergsweg");
        break;
    }
    case 337964:
    {
        returnValue = F("Windbergtal");
        break;
    }
    case 337965:
    {
        returnValue = F("Windbergweg");
        break;
    }
    case 337966:
    {
        returnValue = F("Windbrink");
        break;
    }
    case 337967:
    {
        returnValue = F("Windbuckweg");
        break;
    }
    case 337968:
    {
        returnValue = F("Windbuschstr.");
        break;
    }
    case 337969:
    {
        returnValue = F("Windbühl");
        break;
    }
    case 337970:
    {
        returnValue = F("Windbühlhöhenweg");
        break;
    }
    case 337971:
    {
        returnValue = F("Windbühlweg");
        break;
    }
    case 337972:
    {
        returnValue = F("Windchenbrinkbach");
        break;
    }
    case 337973:
    {
        returnValue = F("Winde");
        break;
    }
    case 337974:
    {
        returnValue = F("Windeberger Landstr.");
        break;
    }
    case 337975:
    {
        returnValue = F("Windeberger Str.");
        break;
    }
    case 337976:
    {
        returnValue = F("Windeberger Weg");
        break;
    }
    case 337977:
    {
        returnValue = F("Windebornstr.");
        break;
    }
    case 337978:
    {
        returnValue = F("Windebrak");
        break;
    }
    case 337979:
    {
        returnValue = F("Windebrucher Str.");
        break;
    }
    case 337980:
    {
        returnValue = F("Windebyer Weg");
        break;
    }
    case 337981:
    {
        returnValue = F("Windeck");
        break;
    }
    case 337982:
    {
        returnValue = F("Windeckenstr.");
        break;
    }
    case 337983:
    {
        returnValue = F("Windecker Pfad");
        break;
    }
    case 337984:
    {
        returnValue = F("Windecker Str.");
        break;
    }
    case 337985:
    {
        returnValue = F("Windecker Weg");
        break;
    }
    case 337986:
    {
        returnValue = F("Windeckgässchen");
        break;
    }
    case 337987:
    {
        returnValue = F("Windeckkopfweg");
        break;
    }
    case 337988:
    {
        returnValue = F("Windeckstr.");
        break;
    }
    case 337989:
    {
        returnValue = F("Windeckweg");
        break;
    }
    case 337990:
    {
        returnValue = F("Windegg");
        break;
    }
    case 337991:
    {
        returnValue = F("Windegg-Tuttlinger-Str.");
        break;
    }
    case 337992:
    {
        returnValue = F("Windegger Str.");
        break;
    }
    case 337993:
    {
        returnValue = F("Windehamer Str.");
        break;
    }
    case 337994:
    {
        returnValue = F("Windeichenweg");
        break;
    }
    case 337995:
    {
        returnValue = F("Windelbachweg");
        break;
    }
    case 337996:
    {
        returnValue = F("Windelerstr.");
        break;
    }
    case 337997:
    {
        returnValue = F("Windelsbleicher Str.");
        break;
    }
    case 337998:
    {
        returnValue = F("Windelweg");
        break;
    }
    case 337999:
    {
        returnValue = F("Windemöller Str.");
        break;
    }
    case 338000:
    {
        returnValue = F("Winden");
        break;
    }
    case 338001:
    {
        returnValue = F("Windenbergstr.");
        break;
    }
    case 338002:
    {
        returnValue = F("Windenchaussee");
        break;
    }
    case 338003:
    {
        returnValue = F("Windener Str.");
        break;
    }
    case 338004:
    {
        returnValue = F("Windener Torweg");
        break;
    }
    case 338005:
    {
        returnValue = F("Windener Weg");
        break;
    }
    case 338006:
    {
        returnValue = F("Windenhof");
        break;
    }
    case 338007:
    {
        returnValue = F("Windenhäuleweg");
        break;
    }
    case 338008:
    {
        returnValue = F("Windenloch");
        break;
    }
    case 338009:
    {
        returnValue = F("Windenreuter Str.");
        break;
    }
    case 338010:
    {
        returnValue = F("Windenschlagweg");
        break;
    }
    case 338011:
    {
        returnValue = F("Windenstr.");
        break;
    }
    case 338012:
    {
        returnValue = F("Windenweg");
        break;
    }
    case 338013:
    {
        returnValue = F("Winderatt");
        break;
    }
    case 338014:
    {
        returnValue = F("Winderatter Weg");
        break;
    }
    case 338015:
    {
        returnValue = F("Winderattheck");
        break;
    }
    case 338016:
    {
        returnValue = F("Windereistr.");
        break;
    }
    case 338017:
    {
        returnValue = F("Windermerestr.");
        break;
    }
    case 338018:
    {
        returnValue = F("Windershusen");
        break;
    }
    case 338019:
    {
        returnValue = F("Windesheimer Str.");
        break;
    }
    case 338020:
    {
        returnValue = F("Windestr.");
        break;
    }
    case 338021:
    {
        returnValue = F("Windeweg");
        break;
    }
    case 338022:
    {
        returnValue = F("Windfalterstr.");
        break;
    }
    case 338023:
    {
        returnValue = F("Windfang");
        break;
    }
    case 338024:
    {
        returnValue = F("Windfangstr.");
        break;
    }
    case 338025:
    {
        returnValue = F("Windfeder");
        break;
    }
    case 338026:
    {
        returnValue = F("Windfeld");
        break;
    }
    case 338027:
    {
        returnValue = F("Windfeldpark");
        break;
    }
    case 338028:
    {
        returnValue = F("Windfeldstr.");
        break;
    }
    case 338029:
    {
        returnValue = F("Windfochweg");
        break;
    }
    case 338030:
    {
        returnValue = F("Windfuhr");
        break;
    }
    case 338031:
    {
        returnValue = F("Windfuser Weg");
        break;
    }
    case 338032:
    {
        returnValue = F("Windgarten");
        break;
    }
    case 338033:
    {
        returnValue = F("Windgasse");
        break;
    }
    case 338034:
    {
        returnValue = F("Windgassenplatz");
        break;
    }
    case 338035:
    {
        returnValue = F("Windgatt");
        break;
    }
    case 338036:
    {
        returnValue = F("Windgensgasse");
        break;
    }
    case 338037:
    {
        returnValue = F("Windgfällstr.");
        break;
    }
    case 338038:
    {
        returnValue = F("Windgrat");
        break;
    }
    case 338039:
    {
        returnValue = F("Windgässchen");
        break;
    }
    case 338040:
    {
        returnValue = F("Windgäßchen");
        break;
    }
    case 338041:
    {
        returnValue = F("Windhag");
        break;
    }
    case 338042:
    {
        returnValue = F("Windhagen");
        break;
    }
    case 338043:
    {
        returnValue = F("Windhagener Str.");
        break;
    }
    case 338044:
    {
        returnValue = F("Windhagener Weg");
        break;
    }
    case 338045:
    {
        returnValue = F("Windhager Str.");
        break;
    }
    case 338046:
    {
        returnValue = F("Windhagerstr.");
        break;
    }
    case 338047:
    {
        returnValue = F("Windhainer Str.");
        break;
    }
    case 338048:
    {
        returnValue = F("Windhainstr.");
        break;
    }
    case 338049:
    {
        returnValue = F("Windham");
        break;
    }
    case 338050:
    {
        returnValue = F("Windhaus");
        break;
    }
    case 338051:
    {
        returnValue = F("Windhausen");
        break;
    }
    case 338052:
    {
        returnValue = F("Windhausener Str.");
        break;
    }
    case 338053:
    {
        returnValue = F("Windhausener Weg");
        break;
    }
    case 338054:
    {
        returnValue = F("Windhausenstr.");
        break;
    }
    case 338055:
    {
        returnValue = F("Windhauser Str.");
        break;
    }
    case 338056:
    {
        returnValue = F("Windhauser Weg");
        break;
    }
    case 338057:
    {
        returnValue = F("Windheckenweg");
        break;
    }
    case 338058:
    {
        returnValue = F("Windhegge");
        break;
    }
    case 338059:
    {
        returnValue = F("Windheimer Str.");
        break;
    }
    case 338060:
    {
        returnValue = F("Windheimer Weg");
        break;
    }
    case 338061:
    {
        returnValue = F("Windheimerschlagallee");
        break;
    }
    case 338062:
    {
        returnValue = F("Windheuserpfad");
        break;
    }
    case 338063:
    {
        returnValue = F("Windheuserstr.");
        break;
    }
    case 338064:
    {
        returnValue = F("Windhoch");
        break;
    }
    case 338065:
    {
        returnValue = F("Windhof");
        break;
    }
    case 338066:
    {
        returnValue = F("Windhofstr.");
        break;
    }
    case 338067:
    {
        returnValue = F("Windhofweg");
        break;
    }
    case 338068:
    {
        returnValue = F("Windhornsfeld");
        break;
    }
    case 338069:
    {
        returnValue = F("Windhornstr.");
        break;
    }
    case 338070:
    {
        returnValue = F("Windhorst");
        break;
    }
    case 338071:
    {
        returnValue = F("Windhorster Eck");
        break;
    }
    case 338072:
    {
        returnValue = F("Windhorster Weg");
        break;
    }
    case 338073:
    {
        returnValue = F("Windhorststr.");
        break;
    }
    case 338074:
    {
        returnValue = F("Windhorstweg");
        break;
    }
    case 338075:
    {
        returnValue = F("Windhuk");
        break;
    }
    case 338076:
    {
        returnValue = F("Windhus");
        break;
    }
    case 338077:
    {
        returnValue = F("Windhäuser");
        break;
    }
    case 338078:
    {
        returnValue = F("Windhäuser Hof");
        break;
    }
    case 338079:
    {
        returnValue = F("Windhäuser Str.");
        break;
    }
    case 338080:
    {
        returnValue = F("Windhäuser Weg");
        break;
    }
    case 338081:
    {
        returnValue = F("Windhäusern");
        break;
    }
    case 338082:
    {
        returnValue = F("Windhöfe");
        break;
    }
    case 338083:
    {
        returnValue = F("Windhöhe");
        break;
    }
    case 338084:
    {
        returnValue = F("Windhövenweg");
        break;
    }
    case 338085:
    {
        returnValue = F("Windhügelstr.");
        break;
    }
    case 338086:
    {
        returnValue = F("Windirsch-Geräumt");
        break;
    }
    case 338087:
    {
        returnValue = F("Windisch-Äcker-Weg");
        break;
    }
    case 338088:
    {
        returnValue = F("Windischbuchener Str.");
        break;
    }
    case 338089:
    {
        returnValue = F("Windischbucher Str.");
        break;
    }
    case 338090:
    {
        returnValue = F("Windische Gasse");
        break;
    }
    case 338091:
    {
        returnValue = F("Windische Lache");
        break;
    }
    case 338092:
    {
        returnValue = F("Windische Str.");
        break;
    }
    case 338093:
    {
        returnValue = F("Windischenbacher Str.");
        break;
    }
    case 338094:
    {
        returnValue = F("Windischenbacher Weg");
        break;
    }
    case 338095:
    {
        returnValue = F("Windischengrüner Weg");
        break;
    }
    case 338096:
    {
        returnValue = F("Windischeschenbacher Str.");
        break;
    }
    case 338097:
    {
        returnValue = F("Windischgaillenreuth");
        break;
    }
    case 338098:
    {
        returnValue = F("Windischhausen");
        break;
    }
    case 338099:
    {
        returnValue = F("Windischhausener Gasse");
        break;
    }
    case 338100:
    {
        returnValue = F("Windischhausener Str.");
        break;
    }
    case 338101:
    {
        returnValue = F("Windischkapellenstr.");
        break;
    }
    case 338102:
    {
        returnValue = F("Windischlettener Str.");
        break;
    }
    case 338103:
    {
        returnValue = F("Windischweg");
        break;
    }
    case 338104:
    {
        returnValue = F("Windjammerkai");
        break;
    }
    case 338105:
    {
        returnValue = F("Windkamp");
        break;
    }
    case 338106:
    {
        returnValue = F("Windkampf");
        break;
    }
    case 338107:
    {
        returnValue = F("Windland");
        break;
    }
    case 338108:
    {
        returnValue = F("Windleitenweg");
        break;
    }
    case 338109:
    {
        returnValue = F("Windlochsträßle");
        break;
    }
    case 338110:
    {
        returnValue = F("Windlochweg");
        break;
    }
    case 338111:
    {
        returnValue = F("Windlohe");
        break;
    }
    case 338112:
    {
        returnValue = F("Windlucke");
        break;
    }
    case 338113:
    {
        returnValue = F("Windlück");
        break;
    }
    case 338114:
    {
        returnValue = F("Windlücke");
        break;
    }
    case 338115:
    {
        returnValue = F("Windlücker Weg");
        break;
    }
    case 338116:
    {
        returnValue = F("Windmeierweg");
        break;
    }
    case 338117:
    {
        returnValue = F("Windmeißerstr.");
        break;
    }
    case 338118:
    {
        returnValue = F("Windmuhlenweg");
        break;
    }
    case 338119:
    {
        returnValue = F("Windmöhlenbarg");
        break;
    }
    case 338120:
    {
        returnValue = F("Windmöhlenstieg");
        break;
    }
    case 338121:
    {
        returnValue = F("Windmühlberg");
        break;
    }
    case 338122:
    {
        returnValue = F("Windmühle");
        break;
    }
    case 338123:
    {
        returnValue = F("Windmühlemstr.");
        break;
    }
    case 338124:
    {
        returnValue = F("Windmühlenallee");
        break;
    }
    case 338125:
    {
        returnValue = F("Windmühlenberg");
        break;
    }
    case 338126:
    {
        returnValue = F("Windmühlenbergstr.");
        break;
    }
    case 338127:
    {
        returnValue = F("Windmühlenblick");
        break;
    }
    case 338128:
    {
        returnValue = F("Windmühlenbreite");
        break;
    }
    case 338129:
    {
        returnValue = F("Windmühlenesch");
        break;
    }
    case 338130:
    {
        returnValue = F("Windmühlenfeld");
        break;
    }
    case 338131:
    {
        returnValue = F("Windmühlengasse");
        break;
    }
    case 338132:
    {
        returnValue = F("Windmühlengässchen");
        break;
    }
    case 338133:
    {
        returnValue = F("Windmühlenhöhe");
        break;
    }
    case 338134:
    {
        returnValue = F("Windmühlenkamp");
        break;
    }
    case 338135:
    {
        returnValue = F("Windmühlenkoppel");
        break;
    }
    case 338136:
    {
        returnValue = F("Windmühlenpfad");
        break;
    }
    case 338137:
    {
        returnValue = F("Windmühlenplan");
        break;
    }
    case 338138:
    {
        returnValue = F("Windmühlenplatz");
        break;
    }
    case 338139:
    {
        returnValue = F("Windmühlenstr.");
        break;
    }
    case 338140:
    {
        returnValue = F("Windmühlentor");
        break;
    }
    case 338141:
    {
        returnValue = F("Windmühlenwall");
        break;
    }
    case 338142:
    {
        returnValue = F("Windmühlenweg");
        break;
    }
    case 338143:
    {
        returnValue = F("Windmühlgasse");
        break;
    }
    case 338144:
    {
        returnValue = F("Windmühlnstr.");
        break;
    }
    case 338145:
    {
        returnValue = F("Windmühlsberg");
        break;
    }
    case 338146:
    {
        returnValue = F("Windmühlstr.");
        break;
    }
    case 338147:
    {
        returnValue = F("Windmühlweg");
        break;
    }
    case 338148:
    {
        returnValue = F("Windmüllerkamp");
        break;
    }
    case 338149:
    {
        returnValue = F("Windmüllerstr.");
        break;
    }
    case 338150:
    {
        returnValue = F("Windmüllerweg");
        break;
    }
    case 338151:
    {
        returnValue = F("Windner Weg");
        break;
    }
    case 338152:
    {
        returnValue = F("Windolfstr.");
        break;
    }
    case 338153:
    {
        returnValue = F("Windorfer Str.");
        break;
    }
    case 338154:
    {
        returnValue = F("Windpark Wüstenhöfen");
        break;
    }
    case 338155:
    {
        returnValue = F("Windpassing");
        break;
    }
    case 338156:
    {
        returnValue = F("Windpothstr.");
        break;
    }
    case 338157:
    {
        returnValue = F("Windpäßelweg");
        break;
    }
    case 338158:
    {
        returnValue = F("Windpäßlweg");
        break;
    }
    case 338159:
    {
        returnValue = F("Windradstr.");
        break;
    }
    case 338160:
    {
        returnValue = F("Windradweg");
        break;
    }
    case 338161:
    {
        returnValue = F("Windrather Str.");
        break;
    }
    case 338162:
    {
        returnValue = F("Windritze");
        break;
    }
    case 338163:
    {
        returnValue = F("Windrose");
        break;
    }
    case 338164:
    {
        returnValue = F("Windrosenweg");
        break;
    }
    case 338165:
    {
        returnValue = F("Windrödel");
        break;
    }
    case 338166:
    {
        returnValue = F("Windröschengasse");
        break;
    }
    case 338167:
    {
        returnValue = F("Windröschenstr.");
        break;
    }
    case 338168:
    {
        returnValue = F("Windröschenweg");
        break;
    }
    case 338169:
    {
        returnValue = F("Winds Wieske");
        break;
    }
    case 338170:
    {
        returnValue = F("Windsauerweg");
        break;
    }
    case 338171:
    {
        returnValue = F("Windsbacher Str.");
        break;
    }
    case 338172:
    {
        returnValue = F("Windsberger Str.");
        break;
    }
    case 338173:
    {
        returnValue = F("Windsburgweg");
        break;
    }
    case 338174:
    {
        returnValue = F("Windscheer");
        break;
    }
    case 338175:
    {
        returnValue = F("Windscheidstr.");
        break;
    }
    case 338176:
    {
        returnValue = F("Windschläger Str.");
        break;
    }
    case 338177:
    {
        returnValue = F("Windschlägwaldstr.");
        break;
    }
    case 338178:
    {
        returnValue = F("Windschnur");
        break;
    }
    case 338179:
    {
        returnValue = F("Windschutzweg");
        break;
    }
    case 338180:
    {
        returnValue = F("Windschäufelnstr.");
        break;
    }
    case 338181:
    {
        returnValue = F("Windseestr.");
        break;
    }
    case 338182:
    {
        returnValue = F("Windsfelder Str.");
        break;
    }
    case 338183:
    {
        returnValue = F("Windshausen");
        break;
    }
    case 338184:
    {
        returnValue = F("Windsheimer Schneise");
        break;
    }
    case 338185:
    {
        returnValue = F("Windsheimer Str.");
        break;
    }
    case 338186:
    {
        returnValue = F("Windshofener Str.");
        break;
    }
    case 338187:
    {
        returnValue = F("Windshäuser Weg");
        break;
    }
    case 338188:
    {
        returnValue = F("Windsiedlung");
        break;
    }
    case 338189:
    {
        returnValue = F("Windspiel");
        break;
    }
    case 338190:
    {
        returnValue = F("Windsprach");
        break;
    }
    case 338191:
    {
        returnValue = F("Windstege");
        break;
    }
    case 338192:
    {
        returnValue = F("Windstegweg");
        break;
    }
    case 338193:
    {
        returnValue = F("Windstr.");
        break;
    }
    case 338194:
    {
        returnValue = F("Windtal");
        break;
    }
    case 338195:
    {
        returnValue = F("Windten");
        break;
    }
    case 338196:
    {
        returnValue = F("Windtener Str.");
        break;
    }
    case 338197:
    {
        returnValue = F("Windthorststr.");
        break;
    }
    case 338198:
    {
        returnValue = F("Windthorstweg");
        break;
    }
    case 338199:
    {
        returnValue = F("Windtschmidtstr.");
        break;
    }
    case 338200:
    {
        returnValue = F("Windusstr.");
        break;
    }
    case 338201:
    {
        returnValue = F("Windusweg");
        break;
    }
    case 338202:
    {
        returnValue = F("Windvogt");
        break;
    }
    case 338203:
    {
        returnValue = F("Windweg");
        break;
    }
    case 338204:
    {
        returnValue = F("Windwiesenstr.");
        break;
    }
    case 338205:
    {
        returnValue = F("Windwiesenweg");
        break;
    }
    case 338206:
    {
        returnValue = F("Windwärtsstr.");
        break;
    }
    case 338207:
    {
        returnValue = F("Windäcker");
        break;
    }
    case 338208:
    {
        returnValue = F("Winet");
        break;
    }
    case 338209:
    {
        returnValue = F("Winfried-Damrow-Str.");
        break;
    }
    case 338210:
    {
        returnValue = F("Winfried-Kübler-Kreisel");
        break;
    }
    case 338211:
    {
        returnValue = F("Winfried-Laube-Platz");
        break;
    }
    case 338212:
    {
        returnValue = F("Winfried-Ziemann-Str.");
        break;
    }
    case 338213:
    {
        returnValue = F("Winfriedstr.");
        break;
    }
    case 338214:
    {
        returnValue = F("Winfriedweg");
        break;
    }
    case 338215:
    {
        returnValue = F("Wingchen");
        break;
    }
    case 338216:
    {
        returnValue = F("Wingelsteiner Weg");
        break;
    }
    case 338217:
    {
        returnValue = F("Wingenbach");
        break;
    }
    case 338218:
    {
        returnValue = F("Wingenbacher Hof");
        break;
    }
    case 338219:
    {
        returnValue = F("Wingenbacher Str.");
        break;
    }
    case 338220:
    {
        returnValue = F("Wingenderstr.");
        break;
    }
    case 338221:
    {
        returnValue = F("Wingendorf");
        break;
    }
    case 338222:
    {
        returnValue = F("Wingenerstr.");
        break;
    }
    case 338223:
    {
        returnValue = F("Wingensiefer Kamp");
        break;
    }
    case 338224:
    {
        returnValue = F("Wingerathstr.");
        break;
    }
    case 338225:
    {
        returnValue = F("Wingerbach");
        break;
    }
    case 338226:
    {
        returnValue = F("Wingerbergskamp");
        break;
    }
    case 338227:
    {
        returnValue = F("Wingershäuser Str.");
        break;
    }
    case 338228:
    {
        returnValue = F("Wingerstweg");
        break;
    }
    case 338229:
    {
        returnValue = F("Wingert");
        break;
    }
    case 338230:
    {
        returnValue = F("Wingertberg");
        break;
    }
    case 338231:
    {
        returnValue = F("Wingertchen");
        break;
    }
    case 338232:
    {
        returnValue = F("Wingerten");
        break;
    }
    case 338233:
    {
        returnValue = F("Wingertenstr.");
        break;
    }
    case 338234:
    {
        returnValue = F("Wingertgasse");
        break;
    }
    case 338235:
    {
        returnValue = F("Wingertpfädchen");
        break;
    }
    case 338236:
    {
        returnValue = F("Wingertsberg");
        break;
    }
    case 338237:
    {
        returnValue = F("Wingertsbergpark");
        break;
    }
    case 338238:
    {
        returnValue = F("Wingertsbergstr.");
        break;
    }
    case 338239:
    {
        returnValue = F("Wingertsbergweg");
        break;
    }
    case 338240:
    {
        returnValue = F("Wingertsborn");
        break;
    }
    case 338241:
    {
        returnValue = F("Wingertsbuckel");
        break;
    }
    case 338242:
    {
        returnValue = F("Wingertsbuckelweg");
        break;
    }
    case 338243:
    {
        returnValue = F("Wingertsfeldstr.");
        break;
    }
    case 338244:
    {
        returnValue = F("Wingertsgasse");
        break;
    }
    case 338245:
    {
        returnValue = F("Wingertsgewann");
        break;
    }
    case 338246:
    {
        returnValue = F("Wingertshardt");
        break;
    }
    case 338247:
    {
        returnValue = F("Wingertshecke");
        break;
    }
    case 338248:
    {
        returnValue = F("Wingertsheide");
        break;
    }
    case 338249:
    {
        returnValue = F("Wingertsklahm");
        break;
    }
    case 338250:
    {
        returnValue = F("Wingertspfad");
        break;
    }
    case 338251:
    {
        returnValue = F("Wingertsteige");
        break;
    }
    case 338252:
    {
        returnValue = F("Wingertstr.");
        break;
    }
    case 338253:
    {
        returnValue = F("Wingertsweg");
        break;
    }
    case 338254:
    {
        returnValue = F("Wingertsweilerhof");
        break;
    }
    case 338255:
    {
        returnValue = F("Wingertsäcker");
        break;
    }
    case 338256:
    {
        returnValue = F("Wingertweg");
        break;
    }
    case 338257:
    {
        returnValue = F("Wingertweide");
        break;
    }
    case 338258:
    {
        returnValue = F("Wingesberg");
        break;
    }
    case 338259:
    {
        returnValue = F("Wingespfad");
        break;
    }
    case 338260:
    {
        returnValue = F("Wingesterz");
        break;
    }
    case 338261:
    {
        returnValue = F("Winghoferstr.");
        break;
    }
    case 338262:
    {
        returnValue = F("Wingsbacher Weg");
        break;
    }
    case 338263:
    {
        returnValue = F("Wingsstr.");
        break;
    }
    case 338264:
    {
        returnValue = F("Winholzstr.");
        break;
    }
    case 338265:
    {
        returnValue = F("Winibaldstr.");
        break;
    }
    case 338266:
    {
        returnValue = F("Winifridweg");
        break;
    }
    case 338267:
    {
        returnValue = F("Winiham");
        break;
    }
    case 338268:
    {
        returnValue = F("Winiherstr.");
        break;
    }
    case 338269:
    {
        returnValue = F("Winjshoog Gung");
        break;
    }
    case 338270:
    {
        returnValue = F("Winkel");
        break;
    }
    case 338271:
    {
        returnValue = F("Winkel am Oberdorf");
        break;
    }
    case 338272:
    {
        returnValue = F("Winkel-Schneise");
        break;
    }
    case 338273:
    {
        returnValue = F("Winkelackerweg");
        break;
    }
    case 338274:
    {
        returnValue = F("Winkelbach");
        break;
    }
    case 338275:
    {
        returnValue = F("Winkelbachweg");
        break;
    }
    case 338276:
    {
        returnValue = F("Winkelberg");
        break;
    }
    case 338277:
    {
        returnValue = F("Winkelberger Höhe");
        break;
    }
    case 338278:
    {
        returnValue = F("Winkelbergweg");
        break;
    }
    case 338279:
    {
        returnValue = F("Winkelbreite");
        break;
    }
    case 338280:
    {
        returnValue = F("Winkelbrink");
        break;
    }
    case 338281:
    {
        returnValue = F("Winkelbuckweg");
        break;
    }
    case 338282:
    {
        returnValue = F("Winkelchen");
        break;
    }
    case 338283:
    {
        returnValue = F("Winkeldorfer Str.");
        break;
    }
    case 338284:
    {
        returnValue = F("Winkele");
        break;
    }
    case 338285:
    {
        returnValue = F("Winkeleck");
        break;
    }
    case 338286:
    {
        returnValue = F("Winkelei");
        break;
    }
    case 338287:
    {
        returnValue = F("Winkeler Str.");
        break;
    }
    case 338288:
    {
        returnValue = F("Winkeler Weg");
        break;
    }
    case 338289:
    {
        returnValue = F("Winkelfeld");
        break;
    }
    case 338290:
    {
        returnValue = F("Winkelfeld Schneise");
        break;
    }
    case 338291:
    {
        returnValue = F("Winkelfeldstr.");
        break;
    }
    case 338292:
    {
        returnValue = F("Winkelfeldweg");
        break;
    }
    case 338293:
    {
        returnValue = F("Winkelförthsheide");
        break;
    }
    case 338294:
    {
        returnValue = F("Winkelgartenstr.");
        break;
    }
    case 338295:
    {
        returnValue = F("Winkelgasse");
        break;
    }
    case 338296:
    {
        returnValue = F("Winkelgraben");
        break;
    }
    case 338297:
    {
        returnValue = F("Winkelgässchen");
        break;
    }
    case 338298:
    {
        returnValue = F("Winkelgäßle");
        break;
    }
    case 338299:
    {
        returnValue = F("Winkelhaid");
        break;
    }
    case 338300:
    {
        returnValue = F("Winkelhaider Str.");
        break;
    }
    case 338301:
    {
        returnValue = F("Winkelhakenweg");
        break;
    }
    case 338302:
    {
        returnValue = F("Winkelhalde");
        break;
    }
    case 338303:
    {
        returnValue = F("Winkelhausen");
        break;
    }
    case 338304:
    {
        returnValue = F("Winkelhausener Str.");
        break;
    }
    case 338305:
    {
        returnValue = F("Winkelhauser Esch");
        break;
    }
    case 338306:
    {
        returnValue = F("Winkelhauser Str.");
        break;
    }
    case 338307:
    {
        returnValue = F("Winkelhauser Weg");
        break;
    }
    case 338308:
    {
        returnValue = F("Winkelheimer Str.");
        break;
    }
    case 338309:
    {
        returnValue = F("Winkelhof");
        break;
    }
    case 338310:
    {
        returnValue = F("Winkelhofer Weg");
        break;
    }
    case 338311:
    {
        returnValue = F("Winkelhofstr.");
        break;
    }
    case 338312:
    {
        returnValue = F("Winkelholm");
        break;
    }
    case 338313:
    {
        returnValue = F("Winkelhorster Str.");
        break;
    }
    case 338314:
    {
        returnValue = F("Winkelhuderweg");
        break;
    }
    case 338315:
    {
        returnValue = F("Winkelhäuser");
        break;
    }
    case 338316:
    {
        returnValue = F("Winkelhäuser Weg");
        break;
    }
    case 338317:
    {
        returnValue = F("Winkelhöfe");
        break;
    }
    case 338318:
    {
        returnValue = F("Winkelhörner Weg");
        break;
    }
    case 338319:
    {
        returnValue = F("Winkeling");
        break;
    }
    case 338320:
    {
        returnValue = F("Winkelkamp");
        break;
    }
    case 338321:
    {
        returnValue = F("Winkelleitenweg");
        break;
    }
    case 338322:
    {
        returnValue = F("Winkelmahdstr.");
        break;
    }
    case 338323:
    {
        returnValue = F("Winkelmanns Graft");
        break;
    }
    case 338324:
    {
        returnValue = F("Winkelmannshof");
        break;
    }
    case 338325:
    {
        returnValue = F("Winkelmannstr.");
        break;
    }
    case 338326:
    {
        returnValue = F("Winkelmannweg");
        break;
    }
    case 338327:
    {
        returnValue = F("Winkelmatten");
        break;
    }
    case 338328:
    {
        returnValue = F("Winkelmoor");
        break;
    }
    case 338329:
    {
        returnValue = F("Winkelmühle");
        break;
    }
    case 338330:
    {
        returnValue = F("Winkeln");
        break;
    }
    case 338331:
    {
        returnValue = F("Winkelpainerstr.");
        break;
    }
    case 338332:
    {
        returnValue = F("Winkelpfad");
        break;
    }
    case 338333:
    {
        returnValue = F("Winkelplatz");
        break;
    }
    case 338334:
    {
        returnValue = F("Winkelreuth");
        break;
    }
    case 338335:
    {
        returnValue = F("Winkelrundweg");
        break;
    }
    case 338336:
    {
        returnValue = F("Winkels Feld");
        break;
    }
    case 338337:
    {
        returnValue = F("Winkelscher Weg");
        break;
    }
    case 338338:
    {
        returnValue = F("Winkelschneise");
        break;
    }
    case 338339:
    {
        returnValue = F("Winkelsen");
        break;
    }
    case 338340:
    {
        returnValue = F("Winkelser Str.");
        break;
    }
    case 338341:
    {
        returnValue = F("Winkelsettener Ring");
        break;
    }
    case 338342:
    {
        returnValue = F("Winkelsetter Str.");
        break;
    }
    case 338343:
    {
        returnValue = F("Winkelsfalter");
        break;
    }
    case 338344:
    {
        returnValue = F("Winkelsgasse");
        break;
    }
    case 338345:
    {
        returnValue = F("Winkelsheck");
        break;
    }
    case 338346:
    {
        returnValue = F("Winkelsheide");
        break;
    }
    case 338347:
    {
        returnValue = F("Winkelshof");
        break;
    }
    case 338348:
    {
        returnValue = F("Winkelskopfweg");
        break;
    }
    case 338349:
    {
        returnValue = F("Winkelsmühle");
        break;
    }
    case 338350:
    {
        returnValue = F("Winkelsmühler Weg");
        break;
    }
    case 338351:
    {
        returnValue = F("Winkelsted im Rundling");
        break;
    }
    case 338352:
    {
        returnValue = F("Winkelsteder Dorfstr.");
        break;
    }
    case 338353:
    {
        returnValue = F("Winkelstedt am Löschteich");
        break;
    }
    case 338354:
    {
        returnValue = F("Winkelstedter Bahnhofstr.");
        break;
    }
    case 338355:
    {
        returnValue = F("Winkelsteg");
        break;
    }
    case 338356:
    {
        returnValue = F("Winkelsteigstr.");
        break;
    }
    case 338357:
    {
        returnValue = F("Winkelstock");
        break;
    }
    case 338358:
    {
        returnValue = F("Winkelstr.");
        break;
    }
    case 338359:
    {
        returnValue = F("Winkelsweg");
        break;
    }
    case 338360:
    {
        returnValue = F("Winkelsöring");
        break;
    }
    case 338361:
    {
        returnValue = F("Winkeltal");
        break;
    }
    case 338362:
    {
        returnValue = F("Winkeltalstr.");
        break;
    }
    case 338363:
    {
        returnValue = F("Winkelvogtsgarten");
        break;
    }
    case 338364:
    {
        returnValue = F("Winkelwald");
        break;
    }
    case 338365:
    {
        returnValue = F("Winkelweg");
        break;
    }
    case 338366:
    {
        returnValue = F("Winkelweg-Geräumt");
        break;
    }
    case 338367:
    {
        returnValue = F("Winkelwies");
        break;
    }
    case 338368:
    {
        returnValue = F("Winkelwiese");
        break;
    }
    case 338369:
    {
        returnValue = F("Winkelwiesen");
        break;
    }
    case 338370:
    {
        returnValue = F("Winkelwiesenweg");
        break;
    }
    case 338371:
    {
        returnValue = F("Winkelwiesenäcker");
        break;
    }
    case 338372:
    {
        returnValue = F("Winkelwiesweg");
        break;
    }
    case 338373:
    {
        returnValue = F("Winkeläckerstr.");
        break;
    }
    case 338374:
    {
        returnValue = F("Winkelösch");
        break;
    }
    case 338375:
    {
        returnValue = F("Winkensstr.");
        break;
    }
    case 338376:
    {
        returnValue = F("Winker Feld");
        break;
    }
    case 338377:
    {
        returnValue = F("Winkerl");
        break;
    }
    case 338378:
    {
        returnValue = F("Winkhausen");
        break;
    }
    case 338379:
    {
        returnValue = F("Winkhausener Str.");
        break;
    }
    case 338380:
    {
        returnValue = F("Winkhauser Str.");
        break;
    }
    case 338381:
    {
        returnValue = F("Winkhauser Talweg");
        break;
    }
    case 338382:
    {
        returnValue = F("Winkhausstr.");
        break;
    }
    case 338383:
    {
        returnValue = F("Winkhof");
        break;
    }
    case 338384:
    {
        returnValue = F("Winkl");
        break;
    }
    case 338385:
    {
        returnValue = F("Winklacker");
        break;
    }
    case 338386:
    {
        returnValue = F("Winklarner Str.");
        break;
    }
    case 338387:
    {
        returnValue = F("Winklbauerweg");
        break;
    }
    case 338388:
    {
        returnValue = F("Winklberg");
        break;
    }
    case 338389:
    {
        returnValue = F("Winklenweg");
        break;
    }
    case 338390:
    {
        returnValue = F("Winkler");
        break;
    }
    case 338391:
    {
        returnValue = F("Winkler Strässle");
        break;
    }
    case 338392:
    {
        returnValue = F("Winkler Weg");
        break;
    }
    case 338393:
    {
        returnValue = F("Winkler-von-Mohrenfels-Str.");
        break;
    }
    case 338394:
    {
        returnValue = F("Winklerbergstr.");
        break;
    }
    case 338395:
    {
        returnValue = F("Winklergasse");
        break;
    }
    case 338396:
    {
        returnValue = F("Winklerheide");
        break;
    }
    case 338397:
    {
        returnValue = F("Winklerring");
        break;
    }
    case 338398:
    {
        returnValue = F("Winklersgang");
        break;
    }
    case 338399:
    {
        returnValue = F("Winklersgrundweg");
        break;
    }
    case 338400:
    {
        returnValue = F("Winklerstr.");
        break;
    }
    case 338401:
    {
        returnValue = F("Winklerweg");
        break;
    }
    case 338402:
    {
        returnValue = F("Winklfeldweg");
        break;
    }
    case 338403:
    {
        returnValue = F("Winklgasse");
        break;
    }
    case 338404:
    {
        returnValue = F("Winklhamer Str.");
        break;
    }
    case 338405:
    {
        returnValue = F("Winklhardt");
        break;
    }
    case 338406:
    {
        returnValue = F("Winklhof");
        break;
    }
    case 338407:
    {
        returnValue = F("Winklische Hauptstr.");
        break;
    }
    case 338408:
    {
        returnValue = F("Winklmanngasse");
        break;
    }
    case 338409:
    {
        returnValue = F("Winklstr.");
        break;
    }
    case 338410:
    {
        returnValue = F("Winklweg");
        break;
    }
    case 338411:
    {
        returnValue = F("Winkumer Str.");
        break;
    }
    case 338412:
    {
        returnValue = F("Winkwitzer Str.");
        break;
    }
    case 338413:
    {
        returnValue = F("Winlingstr.");
        break;
    }
    case 338414:
    {
        returnValue = F("Winnauer Str.");
        break;
    }
    case 338415:
    {
        returnValue = F("Winnberger Str.");
        break;
    }
    case 338416:
    {
        returnValue = F("Winnberger Weg");
        break;
    }
    case 338417:
    {
        returnValue = F("Winne Hof");
        break;
    }
    case 338418:
    {
        returnValue = F("Winne Siedlung");
        break;
    }
    case 338419:
    {
        returnValue = F("Winnebrook");
        break;
    }
    case 338420:
    {
        returnValue = F("Winneburger Weg");
        break;
    }
    case 338421:
    {
        returnValue = F("Winneburgerweg");
        break;
    }
    case 338422:
    {
        returnValue = F("Winnefelder Str.");
        break;
    }
    case 338423:
    {
        returnValue = F("Winnekendonker Str.");
        break;
    }
    case 338424:
    {
        returnValue = F("Winnenberger Str.");
        break;
    }
    case 338425:
    {
        returnValue = F("Winnenberger Weg");
        break;
    }
    case 338426:
    {
        returnValue = F("Winnender Str.");
        break;
    }
    case 338427:
    {
        returnValue = F("Winnendonk");
        break;
    }
    case 338428:
    {
        returnValue = F("Winnenthaler Str.");
        break;
    }
    case 338429:
    {
        returnValue = F("Winner Au");
        break;
    }
    case 338430:
    {
        returnValue = F("Winner Hauptstr.");
        break;
    }
    case 338431:
    {
        returnValue = F("Winner Höhe");
        break;
    }
    case 338432:
    {
        returnValue = F("Winner Str.");
        break;
    }
    case 338433:
    {
        returnValue = F("Winner Weg");
        break;
    }
    case 338434:
    {
        returnValue = F("Winnerter Str.");
        break;
    }
    case 338435:
    {
        returnValue = F("Winneröder Str.");
        break;
    }
    case 338436:
    {
        returnValue = F("Winnestr.");
        break;
    }
    case 338437:
    {
        returnValue = F("Winnettener Str.");
        break;
    }
    case 338438:
    {
        returnValue = F("Winneweg");
        break;
    }
    case 338439:
    {
        returnValue = F("Winneworpskamp");
        break;
    }
    case 338440:
    {
        returnValue = F("Winnewuppstraat");
        break;
    }
    case 338441:
    {
        returnValue = F("Winnfeld-Rampe");
        break;
    }
    case 338442:
    {
        returnValue = F("Winnigstedter Str.");
        break;
    }
    case 338443:
    {
        returnValue = F("Winninger Allee");
        break;
    }
    case 338444:
    {
        returnValue = F("Winninger Str.");
        break;
    }
    case 338445:
    {
        returnValue = F("Winninger Weg");
        break;
    }
    case 338446:
    {
        returnValue = F("Winninghoff Pättken");
        break;
    }
    case 338447:
    {
        returnValue = F("Winninghoffstiege");
        break;
    }
    case 338448:
    {
        returnValue = F("Winninghäuser Weg");
        break;
    }
    case 338449:
    {
        returnValue = F("Winningmay");
        break;
    }
    case 338450:
    {
        returnValue = F("Winnipeg-Str.");
        break;
    }
    case 338451:
    {
        returnValue = F("Winnisger Weg");
        break;
    }
    case 338452:
    {
        returnValue = F("Winnlohstr.");
        break;
    }
    case 338453:
    {
        returnValue = F("Winnweg");
        break;
    }
    case 338454:
    {
        returnValue = F("Winnweilerstr.");
        break;
    }
    case 338455:
    {
        returnValue = F("Winsberger Str.");
        break;
    }
    case 338456:
    {
        returnValue = F("Winschenweg");
        break;
    }
    case 338457:
    {
        returnValue = F("Winsel");
        break;
    }
    case 338458:
    {
        returnValue = F("Winselburg");
        break;
    }
    case 338459:
    {
        returnValue = F("Winselhof");
        break;
    }
    case 338460:
    {
        returnValue = F("Winselweg");
        break;
    }
    case 338461:
    {
        returnValue = F("Winsener Knell");
        break;
    }
    case 338462:
    {
        returnValue = F("Winsener Landstr.");
        break;
    }
    case 338463:
    {
        returnValue = F("Winsener Str.");
        break;
    }
    case 338464:
    {
        returnValue = F("Winsener Weg");
        break;
    }
    case 338465:
    {
        returnValue = F("Winsener Weide");
        break;
    }
    case 338466:
    {
        returnValue = F("Winsenweg");
        break;
    }
    case 338467:
    {
        returnValue = F("Winser Baum");
        break;
    }
    case 338468:
    {
        returnValue = F("Winser Ilmer");
        break;
    }
    case 338469:
    {
        returnValue = F("Winsheimstr.");
        break;
    }
    case 338470:
    {
        returnValue = F("Winsing");
        break;
    }
    case 338471:
    {
        returnValue = F("Winsstr.");
        break;
    }
    case 338472:
    {
        returnValue = F("Winstersweg");
        break;
    }
    case 338473:
    {
        returnValue = F("Winten");
        break;
    }
    case 338474:
    {
        returnValue = F("Winterackerweg");
        break;
    }
    case 338475:
    {
        returnValue = F("Winterbach");
        break;
    }
    case 338476:
    {
        returnValue = F("Winterbach Weg");
        break;
    }
    case 338477:
    {
        returnValue = F("Winterbacher Str.");
        break;
    }
    case 338478:
    {
        returnValue = F("Winterbacher Weg");
        break;
    }
    case 338479:
    {
        returnValue = F("Winterbachstr.");
        break;
    }
    case 338480:
    {
        returnValue = F("Winterbachweg");
        break;
    }
    case 338481:
    {
        returnValue = F("Winterbahn");
        break;
    }
    case 338482:
    {
        returnValue = F("Winterbeckestr.");
        break;
    }
    case 338483:
    {
        returnValue = F("Winterberg");
        break;
    }
    case 338484:
    {
        returnValue = F("Winterberg (Westf)");
        break;
    }
    case 338485:
    {
        returnValue = F("Winterberger Str.");
        break;
    }
    case 338486:
    {
        returnValue = F("Winterbergkopfweg");
        break;
    }
    case 338487:
    {
        returnValue = F("Winterbergsteige");
        break;
    }
    case 338488:
    {
        returnValue = F("Winterbergstr.");
        break;
    }
    case 338489:
    {
        returnValue = F("Winterbergweg");
        break;
    }
    case 338490:
    {
        returnValue = F("Winterboensweg");
        break;
    }
    case 338491:
    {
        returnValue = F("Winterborner Str.");
        break;
    }
    case 338492:
    {
        returnValue = F("Winterbruckenweg");
        break;
    }
    case 338493:
    {
        returnValue = F("Winterbrünnl");
        break;
    }
    case 338494:
    {
        returnValue = F("Winterburg");
        break;
    }
    case 338495:
    {
        returnValue = F("Winterburger Str.");
        break;
    }
    case 338496:
    {
        returnValue = F("Winterbürg");
        break;
    }
    case 338497:
    {
        returnValue = F("Winterdamm");
        break;
    }
    case 338498:
    {
        returnValue = F("Winterdeich");
        break;
    }
    case 338499:
    {
        returnValue = F("Wintereckweg");
        break;
    }
    case 338500:
    {
        returnValue = F("Winterer Str.");
        break;
    }
    case 338501:
    {
        returnValue = F("Winterersteig");
        break;
    }
    case 338502:
    {
        returnValue = F("Winterfeld");
        break;
    }
    case 338503:
    {
        returnValue = F("Winterfeldallee");
        break;
    }
    case 338504:
    {
        returnValue = F("Winterfeldstr.");
        break;
    }
    case 338505:
    {
        returnValue = F("Winterfeldtstr.");
        break;
    }
    case 338506:
    {
        returnValue = F("Winterfeldweg");
        break;
    }
    case 338507:
    {
        returnValue = F("Winterfurth");
        break;
    }
    case 338508:
    {
        returnValue = F("Wintergarten");
        break;
    }
    case 338509:
    {
        returnValue = F("Wintergasse");
        break;
    }
    case 338510:
    {
        returnValue = F("Wintergatter");
        break;
    }
    case 338511:
    {
        returnValue = F("Wintergatter Ahornschachten");
        break;
    }
    case 338512:
    {
        returnValue = F("Wintergatter Riedlhäng");
        break;
    }
    case 338513:
    {
        returnValue = F("Wintergerststr.");
        break;
    }
    case 338514:
    {
        returnValue = F("Wintergerstweg");
        break;
    }
    case 338515:
    {
        returnValue = F("Wintergraben");
        break;
    }
    case 338516:
    {
        returnValue = F("Wintergrün");
        break;
    }
    case 338517:
    {
        returnValue = F("Wintergrüne");
        break;
    }
    case 338518:
    {
        returnValue = F("Wintergrünstr.");
        break;
    }
    case 338519:
    {
        returnValue = F("Wintergrünweg");
        break;
    }
    case 338520:
    {
        returnValue = F("Winterhagen");
        break;
    }
    case 338521:
    {
        returnValue = F("Winterhalbe");
        break;
    }
    case 338522:
    {
        returnValue = F("Winterhalde");
        break;
    }
    case 338523:
    {
        returnValue = F("Winterhalden Weg");
        break;
    }
    case 338524:
    {
        returnValue = F("Winterhaldenstr.");
        break;
    }
    case 338525:
    {
        returnValue = F("Winterhaldensträßle");
        break;
    }
    case 338526:
    {
        returnValue = F("Winterhaldenweg");
        break;
    }
    case 338527:
    {
        returnValue = F("Winterhalderstr.");
        break;
    }
    case 338528:
    {
        returnValue = F("Winterhaldeweg");
        break;
    }
    case 338529:
    {
        returnValue = F("Winterhalterstr.");
        break;
    }
    case 338530:
    {
        returnValue = F("Winterhalterweg");
        break;
    }
    case 338531:
    {
        returnValue = F("Winterhangweg");
        break;
    }
    case 338532:
    {
        returnValue = F("Winterhardtstr.");
        break;
    }
    case 338533:
    {
        returnValue = F("Winterhauchstr.");
        break;
    }
    case 338534:
    {
        returnValue = F("Winterhaus");
        break;
    }
    case 338535:
    {
        returnValue = F("Winterhauser Str.");
        break;
    }
    case 338536:
    {
        returnValue = F("Winterhelle");
        break;
    }
    case 338537:
    {
        returnValue = F("Winterheltstr.");
        break;
    }
    case 338538:
    {
        returnValue = F("Winterhof");
        break;
    }
    case 338539:
    {
        returnValue = F("Winterhofstr.");
        break;
    }
    case 338540:
    {
        returnValue = F("Winterhofweg");
        break;
    }
    case 338541:
    {
        returnValue = F("Winterholenweg");
        break;
    }
    case 338542:
    {
        returnValue = F("Winterhollerweg");
        break;
    }
    case 338543:
    {
        returnValue = F("Winterhuder Stieg");
        break;
    }
    case 338544:
    {
        returnValue = F("Winterhäldestr.");
        break;
    }
    case 338545:
    {
        returnValue = F("Winterhäuser Str.");
        break;
    }
    case 338546:
    {
        returnValue = F("Winterhöfe");
        break;
    }
    case 338547:
    {
        returnValue = F("Winterhöhe");
        break;
    }
    case 338548:
    {
        returnValue = F("Winterhöhlenweg");
        break;
    }
    case 338549:
    {
        returnValue = F("Winterkaltenbüchleweg");
        break;
    }
    case 338550:
    {
        returnValue = F("Winterkamp");
        break;
    }
    case 338551:
    {
        returnValue = F("Winterkastener Weg");
        break;
    }
    case 338552:
    {
        returnValue = F("Winterkehle");
        break;
    }
    case 338553:
    {
        returnValue = F("Winterlaite");
        break;
    }
    case 338554:
    {
        returnValue = F("Winterlauterstr.");
        break;
    }
    case 338555:
    {
        returnValue = F("Winterleite");
        break;
    }
    case 338556:
    {
        returnValue = F("Winterleiten");
        break;
    }
    case 338557:
    {
        returnValue = F("Winterleitenstr.");
        break;
    }
    case 338558:
    {
        returnValue = F("Winterleitenweg");
        break;
    }
    case 338559:
    {
        returnValue = F("Winterleitweg");
        break;
    }
    case 338560:
    {
        returnValue = F("Winterliede");
        break;
    }
    case 338561:
    {
        returnValue = F("Winterliete");
        break;
    }
    case 338562:
    {
        returnValue = F("Winterlindenweg");
        break;
    }
    case 338563:
    {
        returnValue = F("Winterling-Porzellan-Str.");
        break;
    }
    case 338564:
    {
        returnValue = F("Winterlinger Str.");
        break;
    }
    case 338565:
    {
        returnValue = F("Winterlit");
        break;
    }
    case 338566:
    {
        returnValue = F("Winterloh");
        break;
    }
    case 338567:
    {
        returnValue = F("Wintermantelweg");
        break;
    }
    case 338568:
    {
        returnValue = F("Wintermarsch");
        break;
    }
    case 338569:
    {
        returnValue = F("Wintermattweg");
        break;
    }
    case 338570:
    {
        returnValue = F("Wintermaxenweg");
        break;
    }
    case 338571:
    {
        returnValue = F("Wintermeierstr.");
        break;
    }
    case 338572:
    {
        returnValue = F("Wintermoorer Kirchweg");
        break;
    }
    case 338573:
    {
        returnValue = F("Wintermoorer Str.");
        break;
    }
    case 338574:
    {
        returnValue = F("Winternam");
        break;
    }
    case 338575:
    {
        returnValue = F("Winternamer Mühlenweg");
        break;
    }
    case 338576:
    {
        returnValue = F("Winternheimer Str.");
        break;
    }
    case 338577:
    {
        returnValue = F("Winternheimweg");
        break;
    }
    case 338578:
    {
        returnValue = F("Winternstr.");
        break;
    }
    case 338579:
    {
        returnValue = F("Winterpad");
        break;
    }
    case 338580:
    {
        returnValue = F("Winterpadd");
        break;
    }
    case 338581:
    {
        returnValue = F("Winterplatz");
        break;
    }
    case 338582:
    {
        returnValue = F("Winterrainstr.");
        break;
    }
    case 338583:
    {
        returnValue = F("Winterrainweg");
        break;
    }
    case 338584:
    {
        returnValue = F("Winterreute");
        break;
    }
    case 338585:
    {
        returnValue = F("Winterreuter Str.");
        break;
    }
    case 338586:
    {
        returnValue = F("Winterreutestr.");
        break;
    }
    case 338587:
    {
        returnValue = F("Winterrodelbahn");
        break;
    }
    case 338588:
    {
        returnValue = F("Winters Kamp");
        break;
    }
    case 338589:
    {
        returnValue = F("Winters Weg");
        break;
    }
    case 338590:
    {
        returnValue = F("Wintersbach");
        break;
    }
    case 338591:
    {
        returnValue = F("Wintersbacher Str.");
        break;
    }
    case 338592:
    {
        returnValue = F("Wintersberg");
        break;
    }
    case 338593:
    {
        returnValue = F("Wintersberger Weg");
        break;
    }
    case 338594:
    {
        returnValue = F("Wintersbergerweg");
        break;
    }
    case 338595:
    {
        returnValue = F("Wintersbergstr.");
        break;
    }
    case 338596:
    {
        returnValue = F("Wintersborner Weg");
        break;
    }
    case 338597:
    {
        returnValue = F("Wintersbuckstr.");
        break;
    }
    case 338598:
    {
        returnValue = F("Wintersburgstr.");
        break;
    }
    case 338599:
    {
        returnValue = F("Winterscheid");
        break;
    }
    case 338600:
    {
        returnValue = F("Winterscheider Str.");
        break;
    }
    case 338601:
    {
        returnValue = F("Winterscheidstr.");
        break;
    }
    case 338602:
    {
        returnValue = F("Winterscheidtstr.");
        break;
    }
    case 338603:
    {
        returnValue = F("Winterschlittenbahn");
        break;
    }
    case 338604:
    {
        returnValue = F("Winterschneisser-Ring");
        break;
    }
    case 338605:
    {
        returnValue = F("Wintersdorfer Str.");
        break;
    }
    case 338606:
    {
        returnValue = F("Winterseck");
        break;
    }
    case 338607:
    {
        returnValue = F("Winterseelach");
        break;
    }
    case 338608:
    {
        returnValue = F("Winterseite");
        break;
    }
    case 338609:
    {
        returnValue = F("Winterseitenweg");
        break;
    }
    case 338610:
    {
        returnValue = F("Winterseitestr.");
        break;
    }
    case 338611:
    {
        returnValue = F("Winterseitetalsträßchen");
        break;
    }
    case 338612:
    {
        returnValue = F("Wintersgrund");
        break;
    }
    case 338613:
    {
        returnValue = F("Wintershall-Allee");
        break;
    }
    case 338614:
    {
        returnValue = F("Wintershallstr.");
        break;
    }
    case 338615:
    {
        returnValue = F("Wintershaus");
        break;
    }
    case 338616:
    {
        returnValue = F("Wintersheimer Str.");
        break;
    }
    case 338617:
    {
        returnValue = F("Wintershofer Weg");
        break;
    }
    case 338618:
    {
        returnValue = F("Winterskamp");
        break;
    }
    case 338619:
    {
        returnValue = F("Winterslake");
        break;
    }
    case 338620:
    {
        returnValue = F("Wintersohl");
        break;
    }
    case 338621:
    {
        returnValue = F("Wintersohler Str.");
        break;
    }
    case 338622:
    {
        returnValue = F("Winterspreitsteige");
        break;
    }
    case 338623:
    {
        returnValue = F("Winterspürer Str.");
        break;
    }
    case 338624:
    {
        returnValue = F("Wintersreuth");
        break;
    }
    case 338625:
    {
        returnValue = F("Wintersreuther Str.");
        break;
    }
    case 338626:
    {
        returnValue = F("Winterstalweg");
        break;
    }
    case 338627:
    {
        returnValue = F("Wintersteig");
        break;
    }
    case 338628:
    {
        returnValue = F("Wintersteige");
        break;
    }
    case 338629:
    {
        returnValue = F("Wintersteigstr.");
        break;
    }
    case 338630:
    {
        returnValue = F("Wintersteiner Landstr.");
        break;
    }
    case 338631:
    {
        returnValue = F("Wintersteiner Str.");
        break;
    }
    case 338632:
    {
        returnValue = F("Wintersteinstr.");
        break;
    }
    case 338633:
    {
        returnValue = F("Winterstetten");
        break;
    }
    case 338634:
    {
        returnValue = F("Winterstettendorfer Str.");
        break;
    }
    case 338635:
    {
        returnValue = F("Winterstetter Staig");
        break;
    }
    case 338636:
    {
        returnValue = F("Winterstetter Str.");
        break;
    }
    case 338637:
    {
        returnValue = F("Winterstetter Weg");
        break;
    }
    case 338638:
    {
        returnValue = F("Winterstr.");
        break;
    }
    case 338639:
    {
        returnValue = F("Wintersweg");
        break;
    }
    case 338640:
    {
        returnValue = F("Winterswicker Feld");
        break;
    }
    case 338641:
    {
        returnValue = F("Winterswicker Weg");
        break;
    }
    case 338642:
    {
        returnValue = F("Winterswijker Str.");
        break;
    }
    case 338643:
    {
        returnValue = F("Winterswyker Str.");
        break;
    }
    case 338644:
    {
        returnValue = F("Wintert");
        break;
    }
    case 338645:
    {
        returnValue = F("Wintertalstr.");
        break;
    }
    case 338646:
    {
        returnValue = F("Wintertalweg");
        break;
    }
    case 338647:
    {
        returnValue = F("Winterthurer Weg");
        break;
    }
    case 338648:
    {
        returnValue = F("Winterthurstr.");
        break;
    }
    case 338649:
    {
        returnValue = F("Winterungsweg");
        break;
    }
    case 338650:
    {
        returnValue = F("Winterwaldweg");
        break;
    }
    case 338651:
    {
        returnValue = F("Winterwanderweg");
        break;
    }
    case 338652:
    {
        returnValue = F("Winterwanderweg / Barrierefreier Weg");
        break;
    }
    case 338653:
    {
        returnValue = F("Winterweg");
        break;
    }
    case 338654:
    {
        returnValue = F("Winterweg / Rodelbahn");
        break;
    }
    case 338655:
    {
        returnValue = F("Winterwerber Str.");
        break;
    }
    case 338656:
    {
        returnValue = F("Winterwiesen");
        break;
    }
    case 338657:
    {
        returnValue = F("Winterwiesenstr.");
        break;
    }
    case 338658:
    {
        returnValue = F("Winterwiesenweg");
        break;
    }
    case 338659:
    {
        returnValue = F("Winterzhofener Str.");
        break;
    }
    case 338660:
    {
        returnValue = F("Winteräcker");
        break;
    }
    case 338661:
    {
        returnValue = F("Wintringer Str.");
        break;
    }
    case 338662:
    {
        returnValue = F("Wintrop");
        break;
    }
    case 338663:
    {
        returnValue = F("Wintroper Weg");
        break;
    }
    case 338664:
    {
        returnValue = F("Wintruper Str.");
        break;
    }
    case 338665:
    {
        returnValue = F("Wintzen");
        break;
    }
    case 338666:
    {
        returnValue = F("Wintzener Str.");
        break;
    }
    case 338667:
    {
        returnValue = F("Wintzener Weg");
        break;
    }
    case 338668:
    {
        returnValue = F("Winweilerstr.");
        break;
    }
    case 338669:
    {
        returnValue = F("Winzebacher Pfad");
        break;
    }
    case 338670:
    {
        returnValue = F("Winzel");
        break;
    }
    case 338671:
    {
        returnValue = F("Winzeldorfer Str.");
        break;
    }
    case 338672:
    {
        returnValue = F("Winzeldorfer Weg");
        break;
    }
    case 338673:
    {
        returnValue = F("Winzelner Str.");
        break;
    }
    case 338674:
    {
        returnValue = F("Winzenbergstr.");
        break;
    }
    case 338675:
    {
        returnValue = F("Winzenburg");
        break;
    }
    case 338676:
    {
        returnValue = F("Winzenburger Str.");
        break;
    }
    case 338677:
    {
        returnValue = F("Winzenheimer Str.");
        break;
    }
    case 338678:
    {
        returnValue = F("Winzenhohler Str.");
        break;
    }
    case 338679:
    {
        returnValue = F("Winzenweg");
        break;
    }
    case 338680:
    {
        returnValue = F("Winzer");
        break;
    }
    case 338681:
    {
        returnValue = F("Winzer Str.");
        break;
    }
    case 338682:
    {
        returnValue = F("Winzerather Str.");
        break;
    }
    case 338683:
    {
        returnValue = F("Winzerberg");
        break;
    }
    case 338684:
    {
        returnValue = F("Winzerbergstr.");
        break;
    }
    case 338685:
    {
        returnValue = F("Winzerer Str.");
        break;
    }
    case 338686:
    {
        returnValue = F("Winzererstr.");
        break;
    }
    case 338687:
    {
        returnValue = F("Winzergarten");
        break;
    }
    case 338688:
    {
        returnValue = F("Winzergasse");
        break;
    }
    case 338689:
    {
        returnValue = F("Winzerhausener Weg");
        break;
    }
    case 338690:
    {
        returnValue = F("Winzerhäuser Str.");
        break;
    }
    case 338691:
    {
        returnValue = F("Winzerhöhe");
        break;
    }
    case 338692:
    {
        returnValue = F("Winzerkellerweg");
        break;
    }
    case 338693:
    {
        returnValue = F("Winzerlache");
        break;
    }
    case 338694:
    {
        returnValue = F("Winzerlaer Str.");
        break;
    }
    case 338695:
    {
        returnValue = F("Winzerleite");
        break;
    }
    case 338696:
    {
        returnValue = F("Winzerlohweg");
        break;
    }
    case 338697:
    {
        returnValue = F("Winzermarkstr.");
        break;
    }
    case 338698:
    {
        returnValue = F("Winzerpfad");
        break;
    }
    case 338699:
    {
        returnValue = F("Winzerplatz");
        break;
    }
    case 338700:
    {
        returnValue = F("Winzersdorf");
        break;
    }
    case 338701:
    {
        returnValue = F("Winzersteg");
        break;
    }
    case 338702:
    {
        returnValue = F("Winzerstr.");
        break;
    }
    case 338703:
    {
        returnValue = F("Winzertal");
        break;
    }
    case 338704:
    {
        returnValue = F("Winzerweg");
        break;
    }
    case 338705:
    {
        returnValue = F("Winziger Platz");
        break;
    }
    case 338706:
    {
        returnValue = F("Winziger Str.");
        break;
    }
    case 338707:
    {
        returnValue = F("Winzinger Str.");
        break;
    }
    case 338708:
    {
        returnValue = F("Winzlarer Str.");
        break;
    }
    case 338709:
    {
        returnValue = F("Winzler Bühl");
        break;
    }
    case 338710:
    {
        returnValue = F("Winzler Str.");
        break;
    }
    case 338711:
    {
        returnValue = F("Winzlerstr.");
        break;
    }
    case 338712:
    {
        returnValue = F("Wipersdorfer Str.");
        break;
    }
    case 338713:
    {
        returnValue = F("Wipertikreisel");
        break;
    }
    case 338714:
    {
        returnValue = F("Wipertistr.");
        break;
    }
    case 338715:
    {
        returnValue = F("Wipfelder Str.");
        break;
    }
    case 338716:
    {
        returnValue = F("Wipfelder Weg");
        break;
    }
    case 338717:
    {
        returnValue = F("Wippbergweg");
        break;
    }
    case 338718:
    {
        returnValue = F("Wippe");
        break;
    }
    case 338719:
    {
        returnValue = F("Wippekühl");
        break;
    }
    case 338720:
    {
        returnValue = F("Wippenbacher Str.");
        break;
    }
    case 338721:
    {
        returnValue = F("Wippendorf");
        break;
    }
    case 338722:
    {
        returnValue = F("Wippendorfer Knochenmühle");
        break;
    }
    case 338723:
    {
        returnValue = F("Wippendorfstr.");
        break;
    }
    case 338724:
    {
        returnValue = F("Wippenhauser Dorfstr.");
        break;
    }
    case 338725:
    {
        returnValue = F("Wippenhauser Str.");
        break;
    }
    case 338726:
    {
        returnValue = F("Wippenkausen");
        break;
    }
    case 338727:
    {
        returnValue = F("Wippenkausener Str.");
        break;
    }
    case 338728:
    {
        returnValue = F("Wippenkielstr.");
        break;
    }
    case 338729:
    {
        returnValue = F("Wippenreute");
        break;
    }
    case 338730:
    {
        returnValue = F("Wipperberg");
        break;
    }
    case 338731:
    {
        returnValue = F("Wipperbrück");
        break;
    }
    case 338732:
    {
        returnValue = F("Wipperdorfer Bahnhofstr.");
        break;
    }
    case 338733:
    {
        returnValue = F("Wipperdorfer Brückenstr.");
        break;
    }
    case 338734:
    {
        returnValue = F("Wipperdorfer Freiheitsstr.");
        break;
    }
    case 338735:
    {
        returnValue = F("Wipperdorfer Lindenstr.");
        break;
    }
    case 338736:
    {
        returnValue = F("Wipperdorfer Siedlung");
        break;
    }
    case 338737:
    {
        returnValue = F("Wipperdorfer Weberstr.");
        break;
    }
    case 338738:
    {
        returnValue = F("Wipperfürther Str.");
        break;
    }
    case 338739:
    {
        returnValue = F("Wippergasse");
        break;
    }
    case 338740:
    {
        returnValue = F("Wippergrund");
        break;
    }
    case 338741:
    {
        returnValue = F("Wipperhof");
        break;
    }
    case 338742:
    {
        returnValue = F("Wippermanns Richtstatt");
        break;
    }
    case 338743:
    {
        returnValue = F("Wippermannstr.");
        break;
    }
    case 338744:
    {
        returnValue = F("Wipperring");
        break;
    }
    case 338745:
    {
        returnValue = F("Wippers");
        break;
    }
    case 338746:
    {
        returnValue = F("Wippershain 10. Str.");
        break;
    }
    case 338747:
    {
        returnValue = F("Wippershain 101. Str.");
        break;
    }
    case 338748:
    {
        returnValue = F("Wippershain 102. Str.");
        break;
    }
    case 338749:
    {
        returnValue = F("Wippershain 11. Str.");
        break;
    }
    case 338750:
    {
        returnValue = F("Wippershain 111. Str.");
        break;
    }
    case 338751:
    {
        returnValue = F("Wippershain 112. Str.");
        break;
    }
    case 338752:
    {
        returnValue = F("Wippershain 113. Str.");
        break;
    }
    case 338753:
    {
        returnValue = F("Wippershain 114. Str.");
        break;
    }
    case 338754:
    {
        returnValue = F("Wippershain 115. Str.");
        break;
    }
    case 338755:
    {
        returnValue = F("Wippershain 12. Str.");
        break;
    }
    case 338756:
    {
        returnValue = F("Wippershain 13. Str.");
        break;
    }
    case 338757:
    {
        returnValue = F("Wippershain 131. Str.");
        break;
    }
    case 338758:
    {
        returnValue = F("Wippershain 132. Str.");
        break;
    }
    case 338759:
    {
        returnValue = F("Wippershain 3. Str.");
        break;
    }
    case 338760:
    {
        returnValue = F("Wippershain 6. Str.");
        break;
    }
    case 338761:
    {
        returnValue = F("Wippershain 7. Str.");
        break;
    }
    case 338762:
    {
        returnValue = F("Wippershain 71. Str.");
        break;
    }
    case 338763:
    {
        returnValue = F("Wippershain 8. Str.");
        break;
    }
    case 338764:
    {
        returnValue = F("Wippershain 9. Str.");
        break;
    }
    case 338765:
    {
        returnValue = F("Wippershain 91. Str.");
        break;
    }
    case 338766:
    {
        returnValue = F("Wippershainer Str.");
        break;
    }
    case 338767:
    {
        returnValue = F("Wippersteg");
        break;
    }
    case 338768:
    {
        returnValue = F("Wipperstr.");
        break;
    }
    case 338769:
    {
        returnValue = F("Wippertalstr.");
        break;
    }
    case 338770:
    {
        returnValue = F("Wippertalweg");
        break;
    }
    case 338771:
    {
        returnValue = F("Wipperteichweg");
        break;
    }
    case 338772:
    {
        returnValue = F("Wippertsweg");
        break;
    }
    case 338773:
    {
        returnValue = F("Wipperwanderweg");
        break;
    }
    case 338774:
    {
        returnValue = F("Wipperweg");
        break;
    }
    case 338775:
    {
        returnValue = F("Wipperwiese");
        break;
    }
    case 338776:
    {
        returnValue = F("Wippeskuhlen");
        break;
    }
    case 338777:
    {
        returnValue = F("Wippgasse");
        break;
    }
    case 338778:
    {
        returnValue = F("Wippinger Kirchweg");
        break;
    }
    case 338779:
    {
        returnValue = F("Wippinger Str.");
        break;
    }
    case 338780:
    {
        returnValue = F("Wippinger Weg");
        break;
    }
    case 338781:
    {
        returnValue = F("Wipplas");
        break;
    }
    case 338782:
    {
        returnValue = F("Wippraer Bahnhofstr.");
        break;
    }
    case 338783:
    {
        returnValue = F("Wippringser Heide");
        break;
    }
    case 338784:
    {
        returnValue = F("Wippringser Weg");
        break;
    }
    case 338785:
    {
        returnValue = F("Wippsteertweg");
        break;
    }
    case 338786:
    {
        returnValue = F("Wiprechtstr.");
        break;
    }
    case 338787:
    {
        returnValue = F("Wipsch");
        break;
    }
    case 338788:
    {
        returnValue = F("Wipsch Passage");
        break;
    }
    case 338789:
    {
        returnValue = F("Wipshäuser Str.");
        break;
    }
    case 338790:
    {
        returnValue = F("Wir bauen Zukunft");
        break;
    }
    case 338791:
    {
        returnValue = F("Wirbacher Str.");
        break;
    }
    case 338792:
    {
        returnValue = F("Wirbel");
        break;
    }
    case 338793:
    {
        returnValue = F("Wirbelbachstr.");
        break;
    }
    case 338794:
    {
        returnValue = F("Wirbelbrunnenweg");
        break;
    }
    case 338795:
    {
        returnValue = F("Wirbelsteinweg");
        break;
    }
    case 338796:
    {
        returnValue = F("Wirbelweg");
        break;
    }
    case 338797:
    {
        returnValue = F("Wirbenz");
        break;
    }
    case 338798:
    {
        returnValue = F("Wirberger Str.");
        break;
    }
    case 338799:
    {
        returnValue = F("Wirberger Weg");
        break;
    }
    case 338800:
    {
        returnValue = F("Wirchinger Str.");
        break;
    }
    case 338801:
    {
        returnValue = F("Wirdeweg");
        break;
    }
    case 338802:
    {
        returnValue = F("Wirdumer Altendeich");
        break;
    }
    case 338803:
    {
        returnValue = F("Wirdumer Reihe");
        break;
    }
    case 338804:
    {
        returnValue = F("Wirdumer Str.");
        break;
    }
    case 338805:
    {
        returnValue = F("Wirftstr.");
        break;
    }
    case 338806:
    {
        returnValue = F("Wirfuser Str.");
        break;
    }
    case 338807:
    {
        returnValue = F("Wirgelskaul");
        break;
    }
    case 338808:
    {
        returnValue = F("Wirgeser Str.");
        break;
    }
    case 338809:
    {
        returnValue = F("Wirgeser Weg");
        break;
    }
    case 338810:
    {
        returnValue = F("Wirichstr.");
        break;
    }
    case 338811:
    {
        returnValue = F("Wirkaustr.");
        break;
    }
    case 338812:
    {
        returnValue = F("Wirkelandstr.");
        break;
    }
    case 338813:
    {
        returnValue = F("Wirkergasse");
        break;
    }
    case 338814:
    {
        returnValue = F("Wirkerpark");
        break;
    }
    case 338815:
    {
        returnValue = F("Wirkerstr.");
        break;
    }
    case 338816:
    {
        returnValue = F("Wirkerweg");
        break;
    }
    case 338817:
    {
        returnValue = F("Wirkshof");
        break;
    }
    case 338818:
    {
        returnValue = F("Wirler Bahn");
        break;
    }
    case 338819:
    {
        returnValue = F("Wirlhofer Str.");
        break;
    }
    case 338820:
    {
        returnValue = F("Wirlinger Str.");
        break;
    }
    case 338821:
    {
        returnValue = F("Wirme");
        break;
    }
    case 338822:
    {
        returnValue = F("Wirmerstr.");
        break;
    }
    case 338823:
    {
        returnValue = F("Wirmighäuser Str.");
        break;
    }
    case 338824:
    {
        returnValue = F("Wirnsweiler");
        break;
    }
    case 338825:
    {
        returnValue = F("Wirntoweg");
        break;
    }
    case 338826:
    {
        returnValue = F("Wirrenburg");
        break;
    }
    case 338827:
    {
        returnValue = F("Wirringer Garten");
        break;
    }
    case 338828:
    {
        returnValue = F("Wirringer Str.");
        break;
    }
    case 338829:
    {
        returnValue = F("Wirringer Weg");
        break;
    }
    case 338830:
    {
        returnValue = F("Wirrweg");
        break;
    }
    case 338831:
    {
        returnValue = F("Wirsberger Str.");
        break;
    }
    case 338832:
    {
        returnValue = F("Wirsberger Weg");
        break;
    }
    case 338833:
    {
        returnValue = F("Wirsbergstr.");
        break;
    }
    case 338834:
    {
        returnValue = F("Wirschbachstr.");
        break;
    }
    case 338835:
    {
        returnValue = F("Wirschingstr.");
        break;
    }
    case 338836:
    {
        returnValue = F("Wirsingstr.");
        break;
    }
    case 338837:
    {
        returnValue = F("Wirtacker");
        break;
    }
    case 338838:
    {
        returnValue = F("Wirtelbergstr.");
        break;
    }
    case 338839:
    {
        returnValue = F("Wirtelbergsträßle");
        break;
    }
    case 338840:
    {
        returnValue = F("Wirtelbergweg");
        break;
    }
    case 338841:
    {
        returnValue = F("Wirteltorplatz");
        break;
    }
    case 338842:
    {
        returnValue = F("Wirtembergstr.");
        break;
    }
    case 338843:
    {
        returnValue = F("Wirtenbacher Str.");
        break;
    }
    case 338844:
    {
        returnValue = F("Wirtgasse");
        break;
    }
    case 338845:
    {
        returnValue = F("Wirtgenstr.");
        break;
    }
    case 338846:
    {
        returnValue = F("Wirth-Allee");
        break;
    }
    case 338847:
    {
        returnValue = F("Wirtheimer Str.");
        break;
    }
    case 338848:
    {
        returnValue = F("Wirtheimer Weg");
        break;
    }
    case 338849:
    {
        returnValue = F("Wirthenbergweg");
        break;
    }
    case 338850:
    {
        returnValue = F("Wirthfeldweg");
        break;
    }
    case 338851:
    {
        returnValue = F("Wirthsbergweg");
        break;
    }
    case 338852:
    {
        returnValue = F("Wirthsfeld");
        break;
    }
    case 338853:
    {
        returnValue = F("Wirthsfeldweg");
        break;
    }
    case 338854:
    {
        returnValue = F("Wirthsgarten");
        break;
    }
    case 338855:
    {
        returnValue = F("Wirthsgasse");
        break;
    }
    case 338856:
    {
        returnValue = F("Wirthsleite");
        break;
    }
    case 338857:
    {
        returnValue = F("Wirthsrangen");
        break;
    }
    case 338858:
    {
        returnValue = F("Wirthstr.");
        break;
    }
    case 338859:
    {
        returnValue = F("Wirthsweg");
        break;
    }
    case 338860:
    {
        returnValue = F("Wirthswiese");
        break;
    }
    case 338861:
    {
        returnValue = F("Wirtsanger");
        break;
    }
    case 338862:
    {
        returnValue = F("Wirtsangerstr.");
        break;
    }
    case 338863:
    {
        returnValue = F("Wirtsbauergasse");
        break;
    }
    case 338864:
    {
        returnValue = F("Wirtsbauernstr.");
        break;
    }
    case 338865:
    {
        returnValue = F("Wirtsberg");
        break;
    }
    case 338866:
    {
        returnValue = F("Wirtsbergstr.");
        break;
    }
    case 338867:
    {
        returnValue = F("Wirtsbergweg");
        break;
    }
    case 338868:
    {
        returnValue = F("Wirtsbreite");
        break;
    }
    case 338869:
    {
        returnValue = F("Wirtsbuck");
        break;
    }
    case 338870:
    {
        returnValue = F("Wirtsbühl");
        break;
    }
    case 338871:
    {
        returnValue = F("Wirtschaftsbrücke");
        break;
    }
    case 338872:
    {
        returnValue = F("Wirtschaftsdamm");
        break;
    }
    case 338873:
    {
        returnValue = F("Wirtschaftshof");
        break;
    }
    case 338874:
    {
        returnValue = F("Wirtschaftshofstr.");
        break;
    }
    case 338875:
    {
        returnValue = F("Wirtschaftsstr.");
        break;
    }
    case 338876:
    {
        returnValue = F("Wirtschaftsstreifen E");
        break;
    }
    case 338877:
    {
        returnValue = F("Wirtschaftsweg");
        break;
    }
    case 338878:
    {
        returnValue = F("Wirtschaftsweg \"Schwarzer Hag");
        break;
    }
    case 338879:
    {
        returnValue = F("Wirtschaftsweg Gernschachen");
        break;
    }
    case 338880:
    {
        returnValue = F("Wirtschaftsweg Giesensdorf");
        break;
    }
    case 338881:
    {
        returnValue = F("Wirtschaftsweg Kuhstall");
        break;
    }
    case 338882:
    {
        returnValue = F("Wirtschaftsweg Parzelle 155");
        break;
    }
    case 338883:
    {
        returnValue = F("Wirtschaftsweg Schönhagen");
        break;
    }
    case 338884:
    {
        returnValue = F("Wirtschaftsweg Steffenshagen");
        break;
    }
    case 338885:
    {
        returnValue = F("Wirtschaftsweg nach Neuhof");
        break;
    }
    case 338886:
    {
        returnValue = F("Wirtschaftsweg_am_Schweinbach");
        break;
    }
    case 338887:
    {
        returnValue = F("Wirtschlagweg");
        break;
    }
    case 338888:
    {
        returnValue = F("Wirtsecke");
        break;
    }
    case 338889:
    {
        returnValue = F("Wirtsfeld");
        break;
    }
    case 338890:
    {
        returnValue = F("Wirtsfeldring");
        break;
    }
    case 338891:
    {
        returnValue = F("Wirtsfeldstr.");
        break;
    }
    case 338892:
    {
        returnValue = F("Wirtsgarten");
        break;
    }
    case 338893:
    {
        returnValue = F("Wirtsgartenstr.");
        break;
    }
    case 338894:
    {
        returnValue = F("Wirtsgass");
        break;
    }
    case 338895:
    {
        returnValue = F("Wirtsgasse");
        break;
    }
    case 338896:
    {
        returnValue = F("Wirtsgrund");
        break;
    }
    case 338897:
    {
        returnValue = F("Wirtsgrundweg");
        break;
    }
    case 338898:
    {
        returnValue = F("Wirtsgässle");
        break;
    }
    case 338899:
    {
        returnValue = F("Wirtsgäßchen");
        break;
    }
    case 338900:
    {
        returnValue = F("Wirtsgäßle");
        break;
    }
    case 338901:
    {
        returnValue = F("Wirtsgäßlein");
        break;
    }
    case 338902:
    {
        returnValue = F("Wirtshalde");
        break;
    }
    case 338903:
    {
        returnValue = F("Wirtshalder Weg");
        break;
    }
    case 338904:
    {
        returnValue = F("Wirtshausweg");
        break;
    }
    case 338905:
    {
        returnValue = F("Wirtshof");
        break;
    }
    case 338906:
    {
        returnValue = F("Wirtshohle");
        break;
    }
    case 338907:
    {
        returnValue = F("Wirtsholz");
        break;
    }
    case 338908:
    {
        returnValue = F("Wirtshäuser Hof");
        break;
    }
    case 338909:
    {
        returnValue = F("Wirtshöhe");
        break;
    }
    case 338910:
    {
        returnValue = F("Wirtskellerstr.");
        break;
    }
    case 338911:
    {
        returnValue = F("Wirtsleite");
        break;
    }
    case 338912:
    {
        returnValue = F("Wirtsleiten");
        break;
    }
    case 338913:
    {
        returnValue = F("Wirtsmatten");
        break;
    }
    case 338914:
    {
        returnValue = F("Wirtsmühle");
        break;
    }
    case 338915:
    {
        returnValue = F("Wirtsmühler Str.");
        break;
    }
    case 338916:
    {
        returnValue = F("Wirtsspezard");
        break;
    }
    case 338917:
    {
        returnValue = F("Wirtsstr.");
        break;
    }
    case 338918:
    {
        returnValue = F("Wirtstalstr.");
        break;
    }
    case 338919:
    {
        returnValue = F("Wirtstr.");
        break;
    }
    case 338920:
    {
        returnValue = F("Wirtsweg");
        break;
    }
    case 338921:
    {
        returnValue = F("Wirtswiese");
        break;
    }
    case 338922:
    {
        returnValue = F("Wirtswäldeleweg");
        break;
    }
    case 338923:
    {
        returnValue = F("Wirtsäcker");
        break;
    }
    case 338924:
    {
        returnValue = F("Wirtsäckerstr.");
        break;
    }
    case 338925:
    {
        returnValue = F("Wirtweg");
        break;
    }
    case 338926:
    {
        returnValue = F("Wirusstr.");
        break;
    }
    case 338927:
    {
        returnValue = F("Wirzenborner Str.");
        break;
    }
    case 338928:
    {
        returnValue = F("Wisbacherstr.");
        break;
    }
    case 338929:
    {
        returnValue = F("Wisbek");
        break;
    }
    case 338930:
    {
        returnValue = F("Wisbeker Weg");
        break;
    }
    case 338931:
    {
        returnValue = F("Wisberg");
        break;
    }
    case 338932:
    {
        returnValue = F("Wisbrooker Weg");
        break;
    }
    case 338933:
    {
        returnValue = F("Wisbyring");
        break;
    }
    case 338934:
    {
        returnValue = F("Wisch");
        break;
    }
    case 338935:
    {
        returnValue = F("Wischartstr.");
        break;
    }
    case 338936:
    {
        returnValue = F("Wischauer Str.");
        break;
    }
    case 338937:
    {
        returnValue = F("Wischbleek");
        break;
    }
    case 338938:
    {
        returnValue = F("Wischbrakenweg");
        break;
    }
    case 338939:
    {
        returnValue = F("Wischdamm");
        break;
    }
    case 338940:
    {
        returnValue = F("Wischen Redder");
        break;
    }
    case 338941:
    {
        returnValue = F("Wischendamm");
        break;
    }
    case 338942:
    {
        returnValue = F("Wischender Weg");
        break;
    }
    case 338943:
    {
        returnValue = F("Wischengrund");
        break;
    }
    case 338944:
    {
        returnValue = F("Wischenkiecker");
        break;
    }
    case 338945:
    {
        returnValue = F("Wischenstieg");
        break;
    }
    case 338946:
    {
        returnValue = F("Wischenstr.");
        break;
    }
    case 338947:
    {
        returnValue = F("Wischenstück");
        break;
    }
    case 338948:
    {
        returnValue = F("Wischentwiet");
        break;
    }
    case 338949:
    {
        returnValue = F("Wischenweg");
        break;
    }
    case 338950:
    {
        returnValue = F("Wischer Str.");
        break;
    }
    case 338951:
    {
        returnValue = F("Wischergasse");
        break;
    }
    case 338952:
    {
        returnValue = F("Wischershausen");
        break;
    }
    case 338953:
    {
        returnValue = F("Wischeweg");
        break;
    }
    case 338954:
    {
        returnValue = F("Wischgrundstr.");
        break;
    }
    case 338955:
    {
        returnValue = F("Wischhafenersandstr.");
        break;
    }
    case 338956:
    {
        returnValue = F("Wischhausener Weg");
        break;
    }
    case 338957:
    {
        returnValue = F("Wischhausstr.");
        break;
    }
    case 338958:
    {
        returnValue = F("Wischhof");
        break;
    }
    case 338959:
    {
        returnValue = F("Wischhoff");
        break;
    }
    case 338960:
    {
        returnValue = F("Wischhofkoppel");
        break;
    }
    case 338961:
    {
        returnValue = F("Wischhofredder");
        break;
    }
    case 338962:
    {
        returnValue = F("Wischhofsdamm");
        break;
    }
    case 338963:
    {
        returnValue = F("Wischhofstr.");
        break;
    }
    case 338964:
    {
        returnValue = F("Wischhofsweg");
        break;
    }
    case 338965:
    {
        returnValue = F("Wischhoft");
        break;
    }
    case 338966:
    {
        returnValue = F("Wischhofweg");
        break;
    }
    case 338967:
    {
        returnValue = F("Wischhop");
        break;
    }
    case 338968:
    {
        returnValue = F("Wischhöfe");
        break;
    }
    case 338969:
    {
        returnValue = F("Wischhöfersweg");
        break;
    }
    case 338970:
    {
        returnValue = F("Wischhörn");
        break;
    }
    case 338971:
    {
        returnValue = F("Wischkamp");
        break;
    }
    case 338972:
    {
        returnValue = F("Wischkamper Bogen");
        break;
    }
    case 338973:
    {
        returnValue = F("Wischke");
        break;
    }
    case 338974:
    {
        returnValue = F("Wischkoppel");
        break;
    }
    case 338975:
    {
        returnValue = F("Wischland");
        break;
    }
    case 338976:
    {
        returnValue = F("Wischlandweg");
        break;
    }
    case 338977:
    {
        returnValue = F("Wischlburger Str.");
        break;
    }
    case 338978:
    {
        returnValue = F("Wischler Holzweg");
        break;
    }
    case 338979:
    {
        returnValue = F("Wischmeyerstr.");
        break;
    }
    case 338980:
    {
        returnValue = F("Wischmöhlen");
        break;
    }
    case 338981:
    {
        returnValue = F("Wischmöhlenweg");
        break;
    }
    case 338982:
    {
        returnValue = F("Wischredder");
        break;
    }
    case 338983:
    {
        returnValue = F("Wischrehre");
        break;
    }
    case 338984:
    {
        returnValue = F("Wischreihe");
        break;
    }
    case 338985:
    {
        returnValue = F("Wischroda");
        break;
    }
    case 338986:
    {
        returnValue = F("Wischwech");
        break;
    }
    case 338987:
    {
        returnValue = F("Wischweg");
        break;
    }
    case 338988:
    {
        returnValue = F("Wisent");
        break;
    }
    case 338989:
    {
        returnValue = F("Wisentastr.");
        break;
    }
    case 338990:
    {
        returnValue = F("Wisentbrücke");
        break;
    }
    case 338991:
    {
        returnValue = F("Wisente");
        break;
    }
    case 338992:
    {
        returnValue = F("Wisentring");
        break;
    }
    case 338993:
    {
        returnValue = F("Wisentstr.");
        break;
    }
    case 338994:
    {
        returnValue = F("Wisentweg");
        break;
    }
    case 338995:
    {
        returnValue = F("Wiserstr.");
        break;
    }
    case 338996:
    {
        returnValue = F("Wiserweg");
        break;
    }
    case 338997:
    {
        returnValue = F("Wisgass");
        break;
    }
    case 338998:
    {
        returnValue = F("Wiskenweg");
        break;
    }
    case 338999:
    {
        returnValue = F("Wisker Weg");
        break;
    }
    case 339000:
    {
        returnValue = F("Wislader Weg");
        break;
    }
    case 339001:
    {
        returnValue = F("Wislicenusstr.");
        break;
    }
    case 339002:
    {
        returnValue = F("Wismar");
        break;
    }
    case 339003:
    {
        returnValue = F("Wismarer Ring");
        break;
    }
    case 339004:
    {
        returnValue = F("Wismarer Str.");
        break;
    }
    case 339005:
    {
        returnValue = F("Wismarer Weg");
        break;
    }
    case 339006:
    {
        returnValue = F("Wismarring");
        break;
    }
    case 339007:
    {
        returnValue = F("Wismarsche Str.");
        break;
    }
    case 339008:
    {
        returnValue = F("Wismarstr.");
        break;
    }
    case 339009:
    {
        returnValue = F("Wismarweg");
        break;
    }
    case 339010:
    {
        returnValue = F("Wismutstr.");
        break;
    }
    case 339011:
    {
        returnValue = F("Wismutweg");
        break;
    }
    case 339012:
    {
        returnValue = F("Wisor");
        break;
    }
    case 339013:
    {
        returnValue = F("Wispaurstr.");
        break;
    }
    case 339014:
    {
        returnValue = F("Wispeckweg");
        break;
    }
    case 339015:
    {
        returnValue = F("Wispel");
        break;
    }
    case 339016:
    {
        returnValue = F("Wispelins Boom");
        break;
    }
    case 339017:
    {
        returnValue = F("Wispelwald");
        break;
    }
    case 339018:
    {
        returnValue = F("Wispensteiner Str.");
        break;
    }
    case 339019:
    {
        returnValue = F("Wisperberg");
        break;
    }
    case 339020:
    {
        returnValue = F("Wispergrund");
        break;
    }
    case 339021:
    {
        returnValue = F("Wisperstr.");
        break;
    }
    case 339022:
    {
        returnValue = F("Wispertorgasse");
        break;
    }
    case 339023:
    {
        returnValue = F("Wisperweg");
        break;
    }
    case 339024:
    {
        returnValue = F("Wisportstr.");
        break;
    }
    case 339025:
    {
        returnValue = F("Wisreuterstr.");
        break;
    }
    case 339026:
    {
        returnValue = F("Wissahln");
        break;
    }
    case 339027:
    {
        returnValue = F("Wisselbachweg");
        break;
    }
    case 339028:
    {
        returnValue = F("Wisseler Park");
        break;
    }
    case 339029:
    {
        returnValue = F("Wisseler Str.");
        break;
    }
    case 339030:
    {
        returnValue = F("Wisselsbergstr.");
        break;
    }
    case 339031:
    {
        returnValue = F("Wisselsdorf");
        break;
    }
    case 339032:
    {
        returnValue = F("Wisselsdorfer Str.");
        break;
    }
    case 339033:
    {
        returnValue = F("Wisselser Str.");
        break;
    }
    case 339034:
    {
        returnValue = F("Wisselsheimer Hauptstr.");
        break;
    }
    case 339035:
    {
        returnValue = F("Wisselsheimer Str.");
        break;
    }
    case 339036:
    {
        returnValue = F("Wisselshorster Weg");
        break;
    }
    case 339037:
    {
        returnValue = F("Wisselsinger Str.");
        break;
    }
    case 339038:
    {
        returnValue = F("Wisselskamp");
        break;
    }
    case 339039:
    {
        returnValue = F("Wisselsroder Str.");
        break;
    }
    case 339040:
    {
        returnValue = F("Wisselter Weg");
        break;
    }
    case 339041:
    {
        returnValue = F("Wisselweg");
        break;
    }
    case 339042:
    {
        returnValue = F("Wissembourger Str.");
        break;
    }
    case 339043:
    {
        returnValue = F("Wissenbacher Weg");
        break;
    }
    case 339044:
    {
        returnValue = F("Wissener Str.");
        break;
    }
    case 339045:
    {
        returnValue = F("Wissener Weg");
        break;
    }
    case 339046:
    {
        returnValue = F("Wissenerfeld");
        break;
    }
    case 339047:
    {
        returnValue = F("Wissenschaftlerlaufbahn");
        break;
    }
    case 339048:
    {
        returnValue = F("Wissenscher Weg");
        break;
    }
    case 339049:
    {
        returnValue = F("Wissenstiege");
        break;
    }
    case 339050:
    {
        returnValue = F("Wissepädche");
        break;
    }
    case 339051:
    {
        returnValue = F("Wissepäädche");
        break;
    }
    case 339052:
    {
        returnValue = F("Wisseraue");
        break;
    }
    case 339053:
    {
        returnValue = F("Wissereckstr.");
        break;
    }
    case 339054:
    {
        returnValue = F("Wissersheimer Weg");
        break;
    }
    case 339055:
    {
        returnValue = F("Wisserstr.");
        break;
    }
    case 339056:
    {
        returnValue = F("Wisserswandstr.");
        break;
    }
    case 339057:
    {
        returnValue = F("Wissigauer Weg");
        break;
    }
    case 339058:
    {
        returnValue = F("Wissigstr.");
        break;
    }
    case 339059:
    {
        returnValue = F("Wissing");
        break;
    }
    case 339060:
    {
        returnValue = F("Wissing Esch");
        break;
    }
    case 339061:
    {
        returnValue = F("Wissing Passage");
        break;
    }
    case 339062:
    {
        returnValue = F("Wissinger Heide");
        break;
    }
    case 339063:
    {
        returnValue = F("Wissinger Mark");
        break;
    }
    case 339064:
    {
        returnValue = F("Wissinger Str.");
        break;
    }
    case 339065:
    {
        returnValue = F("Wissinger Weg");
        break;
    }
    case 339066:
    {
        returnValue = F("Wissinghauser Str.");
        break;
    }
    case 339067:
    {
        returnValue = F("Wissingkamp");
        break;
    }
    case 339068:
    {
        returnValue = F("Wissings Weg");
        break;
    }
    case 339069:
    {
        returnValue = F("Wisslingweg");
        break;
    }
    case 339070:
    {
        returnValue = F("Wissmannshof");
        break;
    }
    case 339071:
    {
        returnValue = F("Wissmannstr.");
        break;
    }
    case 339072:
    {
        returnValue = F("Wissmathweg");
        break;
    }
    case 339073:
    {
        returnValue = F("Wissower Str.");
        break;
    }
    case 339074:
    {
        returnValue = F("Wistedt");
        break;
    }
    case 339075:
    {
        returnValue = F("Wistedter Weg");
        break;
    }
    case 339076:
    {
        returnValue = F("Wistinghauser Senne");
        break;
    }
    case 339077:
    {
        returnValue = F("Wistobastr.");
        break;
    }
    case 339078:
    {
        returnValue = F("Wiswedeler Str.");
        break;
    }
    case 339079:
    {
        returnValue = F("Wiswedeler Weg");
        break;
    }
    case 339080:
    {
        returnValue = F("Witfrauenlochweg");
        break;
    }
    case 339081:
    {
        returnValue = F("Withalde");
        break;
    }
    case 339082:
    {
        returnValue = F("Withaugrund");
        break;
    }
    case 339083:
    {
        returnValue = F("Withaustr.");
        break;
    }
    case 339084:
    {
        returnValue = F("Withauweg");
        break;
    }
    case 339085:
    {
        returnValue = F("Witheborgstr.");
        break;
    }
    case 339086:
    {
        returnValue = F("Witholt");
        break;
    }
    case 339087:
    {
        returnValue = F("Withop");
        break;
    }
    case 339088:
    {
        returnValue = F("Withumanlage");
        break;
    }
    case 339089:
    {
        returnValue = F("Witikostr.");
        break;
    }
    case 339090:
    {
        returnValue = F("Witikoweg");
        break;
    }
    case 339091:
    {
        returnValue = F("Witkenpfad");
        break;
    }
    case 339092:
    {
        returnValue = F("Witmeßstr.");
        break;
    }
    case 339093:
    {
        returnValue = F("Witneystr.");
        break;
    }
    case 339094:
    {
        returnValue = F("Witramstr.");
        break;
    }
    case 339095:
    {
        returnValue = F("Witrowsiedlung");
        break;
    }
    case 339096:
    {
        returnValue = F("Witschgasse");
        break;
    }
    case 339097:
    {
        returnValue = F("Witschstr.");
        break;
    }
    case 339098:
    {
        returnValue = F("Witsoepe");
        break;
    }
    case 339099:
    {
        returnValue = F("Witt Lönn");
        break;
    }
    case 339100:
    {
        returnValue = F("Wittackersweg");
        break;
    }
    case 339101:
    {
        returnValue = F("Wittastr.");
        break;
    }
    case 339102:
    {
        returnValue = F("Wittauer Hauptstr.");
        break;
    }
    case 339103:
    {
        returnValue = F("Wittauer Str.");
        break;
    }
    case 339104:
    {
        returnValue = F("Wittbachstr.");
        break;
    }
    case 339105:
    {
        returnValue = F("Wittbargsweg");
        break;
    }
    case 339106:
    {
        returnValue = F("Wittbeck");
        break;
    }
    case 339107:
    {
        returnValue = F("Wittbecker Str.");
        break;
    }
    case 339108:
    {
        returnValue = F("Wittbeker Weg");
        break;
    }
    case 339109:
    {
        returnValue = F("Wittbende");
        break;
    }
    case 339110:
    {
        returnValue = F("Wittbergstr.");
        break;
    }
    case 339111:
    {
        returnValue = F("Wittbrede");
        break;
    }
    case 339112:
    {
        returnValue = F("Wittbrietzener Dorfplatz");
        break;
    }
    case 339113:
    {
        returnValue = F("Wittbrietzener Dorfstr.");
        break;
    }
    case 339114:
    {
        returnValue = F("Wittbrietzener Str.");
        break;
    }
    case 339115:
    {
        returnValue = F("Wittbräucker Str.");
        break;
    }
    case 339116:
    {
        returnValue = F("Wittbüschen");
        break;
    }
    case 339117:
    {
        returnValue = F("Wittchendorf");
        break;
    }
    case 339118:
    {
        returnValue = F("Wittchental");
        break;
    }
    case 339119:
    {
        returnValue = F("Wittchweg");
        break;
    }
    case 339120:
    {
        returnValue = F("Wittdoornweg");
        break;
    }
    case 339121:
    {
        returnValue = F("Wittdornkamp");
        break;
    }
    case 339122:
    {
        returnValue = F("Wittdornweg");
        break;
    }
    case 339123:
    {
        returnValue = F("Wittdün");
        break;
    }
    case 339124:
    {
        returnValue = F("Witte");
        break;
    }
    case 339125:
    {
        returnValue = F("Witte Asselsweg");
        break;
    }
    case 339126:
    {
        returnValue = F("Witte Berge");
        break;
    }
    case 339127:
    {
        returnValue = F("Witte Brook");
        break;
    }
    case 339128:
    {
        returnValue = F("Witte Dose");
        break;
    }
    case 339129:
    {
        returnValue = F("Witte Heide");
        break;
    }
    case 339130:
    {
        returnValue = F("Witte Masch");
        break;
    }
    case 339131:
    {
        returnValue = F("Witte Moor");
        break;
    }
    case 339132:
    {
        returnValue = F("Witte Oever");
        break;
    }
    case 339133:
    {
        returnValue = F("Witte Riede");
        break;
    }
    case 339134:
    {
        returnValue = F("Witte Sand");
        break;
    }
    case 339135:
    {
        returnValue = F("Witte Steen");
        break;
    }
    case 339136:
    {
        returnValue = F("Witte-Lenoir-Str.");
        break;
    }
    case 339137:
    {
        returnValue = F("Witteanger");
        break;
    }
    case 339138:
    {
        returnValue = F("Witteberg");
        break;
    }
    case 339139:
    {
        returnValue = F("Wittebergweg");
        break;
    }
    case 339140:
    {
        returnValue = F("Wittefehnstr.");
        break;
    }
    case 339141:
    {
        returnValue = F("Wittefehnsweg");
        break;
    }
    case 339142:
    {
        returnValue = F("Wittefelsallee");
        break;
    }
    case 339143:
    {
        returnValue = F("Witteflügel");
        break;
    }
    case 339144:
    {
        returnValue = F("Wittegarten");
        break;
    }
    case 339145:
    {
        returnValue = F("Wittegrund");
        break;
    }
    case 339146:
    {
        returnValue = F("Wittekamp");
        break;
    }
    case 339147:
    {
        returnValue = F("Wittekindbrücke");
        break;
    }
    case 339148:
    {
        returnValue = F("Wittekindgrund");
        break;
    }
    case 339149:
    {
        returnValue = F("Wittekindplatz");
        break;
    }
    case 339150:
    {
        returnValue = F("Wittekindstr.");
        break;
    }
    case 339151:
    {
        returnValue = F("Wittekindsweg");
        break;
    }
    case 339152:
    {
        returnValue = F("Wittekindweg");
        break;
    }
    case 339153:
    {
        returnValue = F("Wittekstr.");
        break;
    }
    case 339154:
    {
        returnValue = F("Witteler Str.");
        break;
    }
    case 339155:
    {
        returnValue = F("Wittelohweg");
        break;
    }
    case 339156:
    {
        returnValue = F("Wittelsbacher Allee");
        break;
    }
    case 339157:
    {
        returnValue = F("Wittelsbacher Gasse");
        break;
    }
    case 339158:
    {
        returnValue = F("Wittelsbacher Grenzweg");
        break;
    }
    case 339159:
    {
        returnValue = F("Wittelsbacher Ring");
        break;
    }
    case 339160:
    {
        returnValue = F("Wittelsbacher Str.");
        break;
    }
    case 339161:
    {
        returnValue = F("Wittelsbacher Weg");
        break;
    }
    case 339162:
    {
        returnValue = F("Wittelsbacherallee");
        break;
    }
    case 339163:
    {
        returnValue = F("Wittelsbacherhöhe");
        break;
    }
    case 339164:
    {
        returnValue = F("Wittelsbacherplatz");
        break;
    }
    case 339165:
    {
        returnValue = F("Wittelsbacherring");
        break;
    }
    case 339166:
    {
        returnValue = F("Wittelsbacherstr.");
        break;
    }
    case 339167:
    {
        returnValue = F("Wittelsbacherweg");
        break;
    }
    case 339168:
    {
        returnValue = F("Wittelsberger Str.");
        break;
    }
    case 339169:
    {
        returnValue = F("Wittelsheimer Allee");
        break;
    }
    case 339170:
    {
        returnValue = F("Wittelshof");
        break;
    }
    case 339171:
    {
        returnValue = F("Wittelshofener Str.");
        break;
    }
    case 339172:
    {
        returnValue = F("Wittelstr.");
        break;
    }
    case 339173:
    {
        returnValue = F("Wittelweg");
        break;
    }
    case 339174:
    {
        returnValue = F("Wittemannstr.");
        break;
    }
    case 339175:
    {
        returnValue = F("Wittemleweg");
        break;
    }
    case 339176:
    {
        returnValue = F("Wittemoor");
        break;
    }
    case 339177:
    {
        returnValue = F("Wittemoorweg");
        break;
    }
    case 339178:
    {
        returnValue = F("Witten");
        break;
    }
    case 339179:
    {
        returnValue = F("Witten Barg");
        break;
    }
    case 339180:
    {
        returnValue = F("Witten Door");
        break;
    }
    case 339181:
    {
        returnValue = F("Witten Dresch");
        break;
    }
    case 339182:
    {
        returnValue = F("Witten Holt");
        break;
    }
    case 339183:
    {
        returnValue = F("Witten Höhen");
        break;
    }
    case 339184:
    {
        returnValue = F("Witten Land'n");
        break;
    }
    case 339185:
    {
        returnValue = F("Witten Wall");
        break;
    }
    case 339186:
    {
        returnValue = F("Witten Weide");
        break;
    }
    case 339187:
    {
        returnValue = F("Witten-Legden");
        break;
    }
    case 339188:
    {
        returnValue = F("Wittenacker");
        break;
    }
    case 339189:
    {
        returnValue = F("Wittenauer Str.");
        break;
    }
    case 339190:
    {
        returnValue = F("Wittenaustr.");
        break;
    }
    case 339191:
    {
        returnValue = F("Wittenbacher Str.");
        break;
    }
    case 339192:
    {
        returnValue = F("Wittenbachstr.");
        break;
    }
    case 339193:
    {
        returnValue = F("Wittenbarg");
        break;
    }
    case 339194:
    {
        returnValue = F("Wittenbecker Landweg");
        break;
    }
    case 339195:
    {
        returnValue = F("Wittenbecksweg");
        break;
    }
    case 339196:
    {
        returnValue = F("Wittenbeeke");
        break;
    }
    case 339197:
    {
        returnValue = F("Wittenberg");
        break;
    }
    case 339198:
    {
        returnValue = F("Wittenberger Allee");
        break;
    }
    case 339199:
    {
        returnValue = F("Wittenberger Chaussee");
        break;
    }
    case 339200:
    {
        returnValue = F("Wittenberger Damm");
        break;
    }
    case 339201:
    {
        returnValue = F("Wittenberger Feld");
        break;
    }
    case 339202:
    {
        returnValue = F("Wittenberger Heeresstr.");
        break;
    }
    case 339203:
    {
        returnValue = F("Wittenberger Neumarkt");
        break;
    }
    case 339204:
    {
        returnValue = F("Wittenberger Str.");
        break;
    }
    case 339205:
    {
        returnValue = F("Wittenberger Südstr.");
        break;
    }
    case 339206:
    {
        returnValue = F("Wittenberger Weg");
        break;
    }
    case 339207:
    {
        returnValue = F("Wittenbergskamp");
        break;
    }
    case 339208:
    {
        returnValue = F("Wittenbergstr.");
        break;
    }
    case 339209:
    {
        returnValue = F("Wittenborghof");
        break;
    }
    case 339210:
    {
        returnValue = F("Wittenborn");
        break;
    }
    case 339211:
    {
        returnValue = F("Wittenborner Str.");
        break;
    }
    case 339212:
    {
        returnValue = F("Wittenborner Weg");
        break;
    }
    case 339213:
    {
        returnValue = F("Wittenbrink");
        break;
    }
    case 339214:
    {
        returnValue = F("Wittenburger Allee");
        break;
    }
    case 339215:
    {
        returnValue = F("Wittenburger Chaussee");
        break;
    }
    case 339216:
    {
        returnValue = F("Wittenburger Landstr.");
        break;
    }
    case 339217:
    {
        returnValue = F("Wittenburger Ring");
        break;
    }
    case 339218:
    {
        returnValue = F("Wittenburger Str.");
        break;
    }
    case 339219:
    {
        returnValue = F("Wittenburgweg");
        break;
    }
    case 339220:
    {
        returnValue = F("Wittendorfer Str.");
        break;
    }
    case 339221:
    {
        returnValue = F("Wittendorfer Weg");
        break;
    }
    case 339222:
    {
        returnValue = F("Wittendüner Allee");
        break;
    }
    case 339223:
    {
        returnValue = F("Wittendüner Geest");
        break;
    }
    case 339224:
    {
        returnValue = F("Wittener Landstr.");
        break;
    }
    case 339225:
    {
        returnValue = F("Wittener Str.");
        break;
    }
    case 339226:
    {
        returnValue = F("Wittenfeld");
        break;
    }
    case 339227:
    {
        returnValue = F("Wittenfelder Allee");
        break;
    }
    case 339228:
    {
        returnValue = F("Wittenfelder Str.");
        break;
    }
    case 339229:
    {
        returnValue = F("Wittenfeldstr.");
        break;
    }
    case 339230:
    {
        returnValue = F("Wittenfeldweg");
        break;
    }
    case 339231:
    {
        returnValue = F("Wittenfördener Weg");
        break;
    }
    case 339232:
    {
        returnValue = F("Wittengarten");
        break;
    }
    case 339233:
    {
        returnValue = F("Wittenhagener Berg");
        break;
    }
    case 339234:
    {
        returnValue = F("Wittenhausweg");
        break;
    }
    case 339235:
    {
        returnValue = F("Wittenheimstr.");
        break;
    }
    case 339236:
    {
        returnValue = F("Wittenhof");
        break;
    }
    case 339237:
    {
        returnValue = F("Wittenhofer Str.");
        break;
    }
    case 339238:
    {
        returnValue = F("Wittenhorst Freifläche");
        break;
    }
    case 339239:
    {
        returnValue = F("Wittenhorster Heide");
        break;
    }
    case 339240:
    {
        returnValue = F("Wittenhorster Weg");
        break;
    }
    case 339241:
    {
        returnValue = F("Wittenhusen");
        break;
    }
    case 339242:
    {
        returnValue = F("Wittenhäger Str.");
        break;
    }
    case 339243:
    {
        returnValue = F("Wittenhögen");
        break;
    }
    case 339244:
    {
        returnValue = F("Wittenhöher Str.");
        break;
    }
    case 339245:
    {
        returnValue = F("Wittenhörn");
        break;
    }
    case 339246:
    {
        returnValue = F("Wittenkamp");
        break;
    }
    case 339247:
    {
        returnValue = F("Wittenkampsweg");
        break;
    }
    case 339248:
    {
        returnValue = F("Wittenkuhlen");
        break;
    }
    case 339249:
    {
        returnValue = F("Wittenkämpeweg");
        break;
    }
    case 339250:
    {
        returnValue = F("Wittenmoordamm");
        break;
    }
    case 339251:
    {
        returnValue = F("Wittenmoorer Weg");
        break;
    }
    case 339252:
    {
        returnValue = F("Wittenmoorweg");
        break;
    }
    case 339253:
    {
        returnValue = F("Wittenrieder Str.");
        break;
    }
    case 339254:
    {
        returnValue = F("Wittensand");
        break;
    }
    case 339255:
    {
        returnValue = F("Wittensander Str.");
        break;
    }
    case 339256:
    {
        returnValue = F("Wittenseer Str.");
        break;
    }
    case 339257:
    {
        returnValue = F("Wittensknapp");
        break;
    }
    case 339258:
    {
        returnValue = F("Wittenstein");
        break;
    }
    case 339259:
    {
        returnValue = F("Wittensteiner Str.");
        break;
    }
    case 339260:
    {
        returnValue = F("Wittensteinweg");
        break;
    }
    case 339261:
    {
        returnValue = F("Wittenstr.");
        break;
    }
    case 339262:
    {
        returnValue = F("Wittentalstr.");
        break;
    }
    case 339263:
    {
        returnValue = F("Wittenwater");
        break;
    }
    case 339264:
    {
        returnValue = F("Wittenwater Weg");
        break;
    }
    case 339265:
    {
        returnValue = F("Wittenweg");
        break;
    }
    case 339266:
    {
        returnValue = F("Wittenwehr");
        break;
    }
    case 339267:
    {
        returnValue = F("Wittenweiererstr.");
        break;
    }
    case 339268:
    {
        returnValue = F("Wittenweierstr.");
        break;
    }
    case 339269:
    {
        returnValue = F("Wittenweilerstr.");
        break;
    }
    case 339270:
    {
        returnValue = F("Wittenwiesenstr.");
        break;
    }
    case 339271:
    {
        returnValue = F("Wittenwinkelweg");
        break;
    }
    case 339272:
    {
        returnValue = F("Witter Moorweg");
        break;
    }
    case 339273:
    {
        returnValue = F("Witterdaer Str.");
        break;
    }
    case 339274:
    {
        returnValue = F("Witternstr.");
        break;
    }
    case 339275:
    {
        returnValue = F("Witterodaer Weg");
        break;
    }
    case 339276:
    {
        returnValue = F("Wittersbachstr.");
        break;
    }
    case 339277:
    {
        returnValue = F("Witterschlicker Allee");
        break;
    }
    case 339278:
    {
        returnValue = F("Wittersgasse");
        break;
    }
    case 339279:
    {
        returnValue = F("Wittersheimer Str.");
        break;
    }
    case 339280:
    {
        returnValue = F("Wittershäuser Str.");
        break;
    }
    case 339281:
    {
        returnValue = F("Wittersrodaer Str.");
        break;
    }
    case 339282:
    {
        returnValue = F("Wittes Feld");
        break;
    }
    case 339283:
    {
        returnValue = F("Wittes Hof");
        break;
    }
    case 339284:
    {
        returnValue = F("Wittesheimer Str.");
        break;
    }
    case 339285:
    {
        returnValue = F("Witteshoferstr.");
        break;
    }
    case 339286:
    {
        returnValue = F("Wittestr.");
        break;
    }
    case 339287:
    {
        returnValue = F("Wittfelder Hof");
        break;
    }
    case 339288:
    {
        returnValue = F("Wittfelder Stich");
        break;
    }
    case 339289:
    {
        returnValue = F("Wittfeldstr.");
        break;
    }
    case 339290:
    {
        returnValue = F("Wittfeldsweg");
        break;
    }
    case 339291:
    {
        returnValue = F("Wittfeldweg");
        break;
    }
    case 339292:
    {
        returnValue = F("Wittgartendurchstich");
        break;
    }
    case 339293:
    {
        returnValue = F("Wittgeistkamp");
        break;
    }
    case 339294:
    {
        returnValue = F("Wittgenborner Str.");
        break;
    }
    case 339295:
    {
        returnValue = F("Wittgenborner Weg");
        break;
    }
    case 339296:
    {
        returnValue = F("Wittgendorf - Roter Wegweg");
        break;
    }
    case 339297:
    {
        returnValue = F("Wittgendorfer Dorfstr.");
        break;
    }
    case 339298:
    {
        returnValue = F("Wittgendorfer Feld");
        break;
    }
    case 339299:
    {
        returnValue = F("Wittgendorfer Str.");
        break;
    }
    case 339300:
    {
        returnValue = F("Wittgenhege");
        break;
    }
    case 339301:
    {
        returnValue = F("Wittgensdorf");
        break;
    }
    case 339302:
    {
        returnValue = F("Wittgensdorfer Höhe");
        break;
    }
    case 339303:
    {
        returnValue = F("Wittgensdorfer Str.");
        break;
    }
    case 339304:
    {
        returnValue = F("Wittgensdorfer Weg");
        break;
    }
    case 339305:
    {
        returnValue = F("Wittgensteiner Platz");
        break;
    }
    case 339306:
    {
        returnValue = F("Wittgensteiner Str.");
        break;
    }
    case 339307:
    {
        returnValue = F("Wittgensteinerstr.");
        break;
    }
    case 339308:
    {
        returnValue = F("Wittgensteinstr.");
        break;
    }
    case 339309:
    {
        returnValue = F("Wittgenthal");
        break;
    }
    case 339310:
    {
        returnValue = F("Wittgeser Str.");
        break;
    }
    case 339311:
    {
        returnValue = F("Wittgesgasse");
        break;
    }
    case 339312:
    {
        returnValue = F("Wittgesweg");
        break;
    }
    case 339313:
    {
        returnValue = F("Witthaustr.");
        break;
    }
    case 339314:
    {
        returnValue = F("Witthautraufweg");
        break;
    }
    case 339315:
    {
        returnValue = F("Witthauweg");
        break;
    }
    case 339316:
    {
        returnValue = F("Witthecke");
        break;
    }
    case 339317:
    {
        returnValue = F("Witthecker Weg");
        break;
    }
    case 339318:
    {
        returnValue = F("Witthoffs Weide");
        break;
    }
    case 339319:
    {
        returnValue = F("Witthoffstr.");
        break;
    }
    case 339320:
    {
        returnValue = F("Witthohsteige");
        break;
    }
    case 339321:
    {
        returnValue = F("Witthohstr.");
        break;
    }
    case 339322:
    {
        returnValue = F("Wittholt");
        break;
    }
    case 339323:
    {
        returnValue = F("Wittholz-Ring");
        break;
    }
    case 339324:
    {
        returnValue = F("Wittholzstr.");
        break;
    }
    case 339325:
    {
        returnValue = F("Witthus");
        break;
    }
    case 339326:
    {
        returnValue = F("Witthöftsfelde");
        break;
    }
    case 339327:
    {
        returnValue = F("Witthöge");
        break;
    }
    case 339328:
    {
        returnValue = F("Witthöhn-Nord");
        break;
    }
    case 339329:
    {
        returnValue = F("Witthöhn-Süd");
        break;
    }
    case 339330:
    {
        returnValue = F("Witthöpen");
        break;
    }
    case 339331:
    {
        returnValue = F("Witthügel");
        break;
    }
    case 339332:
    {
        returnValue = F("Wittibreuter Str.");
        break;
    }
    case 339333:
    {
        returnValue = F("Wittichenauer Str.");
        break;
    }
    case 339334:
    {
        returnValue = F("Witticher Str.");
        break;
    }
    case 339335:
    {
        returnValue = F("Witticher Talstr.");
        break;
    }
    case 339336:
    {
        returnValue = F("Wittichweg");
        break;
    }
    case 339337:
    {
        returnValue = F("Wittigbachweg");
        break;
    }
    case 339338:
    {
        returnValue = F("Wittighausen");
        break;
    }
    case 339339:
    {
        returnValue = F("Wittighäuser Steige");
        break;
    }
    case 339340:
    {
        returnValue = F("Wittighäuser Str.");
        break;
    }
    case 339341:
    {
        returnValue = F("Wittighäuser Weg");
        break;
    }
    case 339342:
    {
        returnValue = F("Wittighöfer Str.");
        break;
    }
    case 339343:
    {
        returnValue = F("Wittigostr.");
        break;
    }
    case 339344:
    {
        returnValue = F("Wittigowostr.");
        break;
    }
    case 339345:
    {
        returnValue = F("Wittigsrasen");
        break;
    }
    case 339346:
    {
        returnValue = F("Wittigsthalstr.");
        break;
    }
    case 339347:
    {
        returnValue = F("Wittigstr.");
        break;
    }
    case 339348:
    {
        returnValue = F("Wittilostr.");
        break;
    }
    case 339349:
    {
        returnValue = F("Wittingen");
        break;
    }
    case 339350:
    {
        returnValue = F("Wittingener Berg");
        break;
    }
    case 339351:
    {
        returnValue = F("Wittinger Str.");
        break;
    }
    case 339352:
    {
        returnValue = F("Wittinger Weg");
        break;
    }
    case 339353:
    {
        returnValue = F("Wittingsbach");
        break;
    }
    case 339354:
    {
        returnValue = F("Wittislinger Str.");
        break;
    }
    case 339355:
    {
        returnValue = F("Wittjestr.");
        break;
    }
    case 339356:
    {
        returnValue = F("Wittjeweg");
        break;
    }
    case 339357:
    {
        returnValue = F("Wittkamp");
        break;
    }
    case 339358:
    {
        returnValue = F("Wittkampsring");
        break;
    }
    case 339359:
    {
        returnValue = F("Wittkampstiege");
        break;
    }
    case 339360:
    {
        returnValue = F("Wittkampsweg");
        break;
    }
    case 339361:
    {
        returnValue = F("Wittkenstr.");
        break;
    }
    case 339362:
    {
        returnValue = F("Wittkestr.");
        break;
    }
    case 339363:
    {
        returnValue = F("Wittkiel");
        break;
    }
    case 339364:
    {
        returnValue = F("Wittkielhof");
        break;
    }
    case 339365:
    {
        returnValue = F("Wittkopps Höhe");
        break;
    }
    case 339366:
    {
        returnValue = F("Wittkoppsweg");
        break;
    }
    case 339367:
    {
        returnValue = F("Wittkopshof");
        break;
    }
    case 339368:
    {
        returnValue = F("Wittkopstr.");
        break;
    }
    case 339369:
    {
        returnValue = F("Wittkopsweg");
        break;
    }
    case 339370:
    {
        returnValue = F("Wittkuhlenstr.");
        break;
    }
    case 339371:
    {
        returnValue = F("Wittlaerer Str.");
        break;
    }
    case 339372:
    {
        returnValue = F("Wittlager Str.");
        break;
    }
    case 339373:
    {
        returnValue = F("Wittland");
        break;
    }
    case 339374:
    {
        returnValue = F("Wittleiweg");
        break;
    }
    case 339375:
    {
        returnValue = F("Wittlensweilerstr.");
        break;
    }
    case 339376:
    {
        returnValue = F("Wittlers Garten");
        break;
    }
    case 339377:
    {
        returnValue = F("Wittlicher Str.");
        break;
    }
    case 339378:
    {
        returnValue = F("Wittlicher Talweg");
        break;
    }
    case 339379:
    {
        returnValue = F("Wittlinger Str.");
        break;
    }
    case 339380:
    {
        returnValue = F("Wittlinger Weg");
        break;
    }
    case 339381:
    {
        returnValue = F("Wittlingerweg");
        break;
    }
    case 339382:
    {
        returnValue = F("Wittlisbergweg");
        break;
    }
    case 339383:
    {
        returnValue = F("Wittloher Dorfstr.");
        break;
    }
    case 339384:
    {
        returnValue = F("Wittlohstr.");
        break;
    }
    case 339385:
    {
        returnValue = F("Wittmackstr.");
        break;
    }
    case 339386:
    {
        returnValue = F("Wittmannsberg");
        break;
    }
    case 339387:
    {
        returnValue = F("Wittmannsdorf");
        break;
    }
    case 339388:
    {
        returnValue = F("Wittmannsgereuth");
        break;
    }
    case 339389:
    {
        returnValue = F("Wittmannsgereuther Str.");
        break;
    }
    case 339390:
    {
        returnValue = F("Wittmannstalstr.");
        break;
    }
    case 339391:
    {
        returnValue = F("Wittmannstalweg");
        break;
    }
    case 339392:
    {
        returnValue = F("Wittmannstr.");
        break;
    }
    case 339393:
    {
        returnValue = F("Wittmanstalweg");
        break;
    }
    case 339394:
    {
        returnValue = F("Wittmarstr.");
        break;
    }
    case 339395:
    {
        returnValue = F("Wittmehren");
        break;
    }
    case 339396:
    {
        returnValue = F("Wittmenweg");
        break;
    }
    case 339397:
    {
        returnValue = F("Wittmersklingen");
        break;
    }
    case 339398:
    {
        returnValue = F("Wittmerstr.");
        break;
    }
    case 339399:
    {
        returnValue = F("Wittmersweg");
        break;
    }
    case 339400:
    {
        returnValue = F("Wittmerweg");
        break;
    }
    case 339401:
    {
        returnValue = F("Wittmeßstr.");
        break;
    }
    case 339402:
    {
        returnValue = F("Wittmoor");
        break;
    }
    case 339403:
    {
        returnValue = F("Wittmoor-Süd");
        break;
    }
    case 339404:
    {
        returnValue = F("Wittmoorer Dorfstr.");
        break;
    }
    case 339405:
    {
        returnValue = F("Wittmoorredder");
        break;
    }
    case 339406:
    {
        returnValue = F("Wittmoortwiete");
        break;
    }
    case 339407:
    {
        returnValue = F("Wittmoorweg");
        break;
    }
    case 339408:
    {
        returnValue = F("Wittmoosstr.");
        break;
    }
    case 339409:
    {
        returnValue = F("Wittmunder Platz");
        break;
    }
    case 339410:
    {
        returnValue = F("Wittmunder Str.");
        break;
    }
    case 339411:
    {
        returnValue = F("Wittmunder Weg");
        break;
    }
    case 339412:
    {
        returnValue = F("Wittmundstr.");
        break;
    }
    case 339413:
    {
        returnValue = F("Wittmöör");
        break;
    }
    case 339414:
    {
        returnValue = F("Wittorfer Ecke");
        break;
    }
    case 339415:
    {
        returnValue = F("Wittorfer Str.");
        break;
    }
    case 339416:
    {
        returnValue = F("Wittorfer Weg");
        break;
    }
    case 339417:
    {
        returnValue = F("Wittower Fähre");
        break;
    }
    case 339418:
    {
        returnValue = F("Wittower Heide");
        break;
    }
    case 339419:
    {
        returnValue = F("Wittower Str.");
        break;
    }
    case 339420:
    {
        returnValue = F("Wittower Weg");
        break;
    }
    case 339421:
    {
        returnValue = F("Wittpennigstr.");
        break;
    }
    case 339422:
    {
        returnValue = F("Wittrahmsweg");
        break;
    }
    case 339423:
    {
        returnValue = F("Wittrehm");
        break;
    }
    case 339424:
    {
        returnValue = F("Wittriehendamm");
        break;
    }
    case 339425:
    {
        returnValue = F("Wittringer Str.");
        break;
    }
    case 339426:
    {
        returnValue = F("Wittrock");
        break;
    }
    case 339427:
    {
        returnValue = F("Wittrocks Riede");
        break;
    }
    case 339428:
    {
        returnValue = F("Wittrockstr.");
        break;
    }
    case 339429:
    {
        returnValue = F("Wittsand");
        break;
    }
    case 339430:
    {
        returnValue = F("Wittschau");
        break;
    }
    case 339431:
    {
        returnValue = F("Wittschauer Str.");
        break;
    }
    case 339432:
    {
        returnValue = F("Wittscheid");
        break;
    }
    case 339433:
    {
        returnValue = F("Wittscheidter Str.");
        break;
    }
    case 339434:
    {
        returnValue = F("Wittschen Kamp");
        break;
    }
    case 339435:
    {
        returnValue = F("Wittsiek");
        break;
    }
    case 339436:
    {
        returnValue = F("Wittstadter Weg");
        break;
    }
    case 339437:
    {
        returnValue = F("Wittstaig");
        break;
    }
    case 339438:
    {
        returnValue = F("Wittstammstr.");
        break;
    }
    case 339439:
    {
        returnValue = F("Wittstattweg");
        break;
    }
    case 339440:
    {
        returnValue = F("Wittstock");
        break;
    }
    case 339441:
    {
        returnValue = F("Wittstocker Allee");
        break;
    }
    case 339442:
    {
        returnValue = F("Wittstocker Chaussee");
        break;
    }
    case 339443:
    {
        returnValue = F("Wittstocker Chaussee Kemnitz");
        break;
    }
    case 339444:
    {
        returnValue = F("Wittstocker Damm");
        break;
    }
    case 339445:
    {
        returnValue = F("Wittstocker Eck");
        break;
    }
    case 339446:
    {
        returnValue = F("Wittstocker Gäßchen");
        break;
    }
    case 339447:
    {
        returnValue = F("Wittstocker Str.");
        break;
    }
    case 339448:
    {
        returnValue = F("Wittstocker Weg");
        break;
    }
    case 339449:
    {
        returnValue = F("Wittstockstr.");
        break;
    }
    case 339450:
    {
        returnValue = F("Wittstr.");
        break;
    }
    case 339451:
    {
        returnValue = F("Wittum");
        break;
    }
    case 339452:
    {
        returnValue = F("Wittumgarten");
        break;
    }
    case 339453:
    {
        returnValue = F("Wittumgärten");
        break;
    }
    case 339454:
    {
        returnValue = F("Wittumhalde");
        break;
    }
    case 339455:
    {
        returnValue = F("Wittumhof");
        break;
    }
    case 339456:
    {
        returnValue = F("Wittumhofstr.");
        break;
    }
    case 339457:
    {
        returnValue = F("Wittumsgasse");
        break;
    }
    case 339458:
    {
        returnValue = F("Wittumshof");
        break;
    }
    case 339459:
    {
        returnValue = F("Wittumsteige");
        break;
    }
    case 339460:
    {
        returnValue = F("Wittumstr.");
        break;
    }
    case 339461:
    {
        returnValue = F("Wittumsweg");
        break;
    }
    case 339462:
    {
        returnValue = F("Wittumweg");
        break;
    }
    case 339463:
    {
        returnValue = F("Wittwaisstr.");
        break;
    }
    case 339464:
    {
        returnValue = F("Wittweg");
        break;
    }
    case 339465:
    {
        returnValue = F("Witwe-Bolte-Weg");
        break;
    }
    case 339466:
    {
        returnValue = F("Witwenberg");
        break;
    }
    case 339467:
    {
        returnValue = F("Witwengang");
        break;
    }
    case 339468:
    {
        returnValue = F("Witwengarten");
        break;
    }
    case 339469:
    {
        returnValue = F("Witwengasse");
        break;
    }
    case 339470:
    {
        returnValue = F("Witwenkamp");
        break;
    }
    case 339471:
    {
        returnValue = F("Witwenstr.");
        break;
    }
    case 339472:
    {
        returnValue = F("Witwenweg");
        break;
    }
    case 339473:
    {
        returnValue = F("Witze");
        break;
    }
    case 339474:
    {
        returnValue = F("Witzeldorf");
        break;
    }
    case 339475:
    {
        returnValue = F("Witzelgasse");
        break;
    }
    case 339476:
    {
        returnValue = F("Witzelspergerstr.");
        break;
    }
    case 339477:
    {
        returnValue = F("Witzenbachstr.");
        break;
    }
    case 339478:
    {
        returnValue = F("Witzenberger Weg");
        break;
    }
    case 339479:
    {
        returnValue = F("Witzendorf");
        break;
    }
    case 339480:
    {
        returnValue = F("Witzendorfer Str.");
        break;
    }
    case 339481:
    {
        returnValue = F("Witzendorffstr.");
        break;
    }
    case 339482:
    {
        returnValue = F("Witzenhäuser Landstr.");
        break;
    }
    case 339483:
    {
        returnValue = F("Witzenhäuser Str.");
        break;
    }
    case 339484:
    {
        returnValue = F("Witzenstr.");
        break;
    }
    case 339485:
    {
        returnValue = F("Witzenthal");
        break;
    }
    case 339486:
    {
        returnValue = F("Witzerather Str.");
        break;
    }
    case 339487:
    {
        returnValue = F("Witzerkuhl");
        break;
    }
    case 339488:
    {
        returnValue = F("Witzfeldstr.");
        break;
    }
    case 339489:
    {
        returnValue = F("Witzhalder Str.");
        break;
    }
    case 339490:
    {
        returnValue = F("Witzheldener Str.");
        break;
    }
    case 339491:
    {
        returnValue = F("Witzighauser Str.");
        break;
    }
    case 339492:
    {
        returnValue = F("Witziner Str.");
        break;
    }
    case 339493:
    {
        returnValue = F("Witzingerreuter Str.");
        break;
    }
    case 339494:
    {
        returnValue = F("Witzker Dorfstr.");
        break;
    }
    case 339495:
    {
        returnValue = F("Witzlasreuther Weg");
        break;
    }
    case 339496:
    {
        returnValue = F("Witzlawstr.");
        break;
    }
    case 339497:
    {
        returnValue = F("Witzleben");
        break;
    }
    case 339498:
    {
        returnValue = F("Witzlebener Str.");
        break;
    }
    case 339499:
    {
        returnValue = F("Witzlebener Weg");
        break;
    }
    case 339500:
    {
        returnValue = F("Witzlebenstr.");
        break;
    }
    case 339501:
    {
        returnValue = F("Witzlebenweg");
        break;
    }
    case 339502:
    {
        returnValue = F("Witzleshofener Str.");
        break;
    }
    case 339503:
    {
        returnValue = F("Witzlesweg");
        break;
    }
    case 339504:
    {
        returnValue = F("Witzlhof");
        break;
    }
    case 339505:
    {
        returnValue = F("Witzling");
        break;
    }
    case 339506:
    {
        returnValue = F("Witzlricht");
        break;
    }
    case 339507:
    {
        returnValue = F("Witzmannsberg");
        break;
    }
    case 339508:
    {
        returnValue = F("Witzmannser Str.");
        break;
    }
    case 339509:
    {
        returnValue = F("Witzmoning");
        break;
    }
    case 339510:
    {
        returnValue = F("Witzmoninger Str.");
        break;
    }
    case 339511:
    {
        returnValue = F("Witznauweg");
        break;
    }
    case 339512:
    {
        returnValue = F("Witznitzer Str.");
        break;
    }
    case 339513:
    {
        returnValue = F("Witznitzer Werkstr.");
        break;
    }
    case 339514:
    {
        returnValue = F("Witzschdorfer Str.");
        break;
    }
    case 339515:
    {
        returnValue = F("Witzschdorfweg");
        break;
    }
    case 339516:
    {
        returnValue = F("Witzschersdorf");
        break;
    }
    case 339517:
    {
        returnValue = F("Wiwaweiherpark");
        break;
    }
    case 339518:
    {
        returnValue = F("Wixbergstr.");
        break;
    }
    case 339519:
    {
        returnValue = F("Wixhäuser Hausschneise");
        break;
    }
    case 339520:
    {
        returnValue = F("Wixhäuser Str.");
        break;
    }
    case 339521:
    {
        returnValue = F("Wizengasse");
        break;
    }
    case 339522:
    {
        returnValue = F("Wizlawstr.");
        break;
    }
    case 339523:
    {
        returnValue = F("Wißbergblick");
        break;
    }
    case 339524:
    {
        returnValue = F("Wißbergstr.");
        break;
    }
    case 339525:
    {
        returnValue = F("Wißbergweg");
        break;
    }
    case 339526:
    {
        returnValue = F("Wißblickstr.");
        break;
    }
    case 339527:
    {
        returnValue = F("Wißfeldstr.");
        break;
    }
    case 339528:
    {
        returnValue = F("Wißkirchener Fließ");
        break;
    }
    case 339529:
    {
        returnValue = F("Wißkirchener Str.");
        break;
    }
    case 339530:
    {
        returnValue = F("Wißlerstr.");
        break;
    }
    case 339531:
    {
        returnValue = F("Wißmanns Kamp");
        break;
    }
    case 339532:
    {
        returnValue = F("Wißmannstr.");
        break;
    }
    case 339533:
    {
        returnValue = F("Wißmarer Str.");
        break;
    }
    case 339534:
    {
        returnValue = F("Wißmarer Weg");
        break;
    }
    case 339535:
    {
        returnValue = F("Wißstr.");
        break;
    }
    case 339536:
    {
        returnValue = F("Wladimir-Komarow-Str.");
        break;
    }
    case 339537:
    {
        returnValue = F("Wladimirstr.");
        break;
    }
    case 339538:
    {
        returnValue = F("Wladislaw-Wolkow-Str.");
        break;
    }
    case 339539:
    {
        returnValue = F("Wobachstr.");
        break;
    }
    case 339540:
    {
        returnValue = F("Wobbelkower Weg");
        break;
    }
    case 339541:
    {
        returnValue = F("Wobbenbüller Chaussee");
        break;
    }
    case 339542:
    {
        returnValue = F("Wobecker Str.");
        break;
    }
    case 339543:
    {
        returnValue = F("Wobelstr.");
        break;
    }
    case 339544:
    {
        returnValue = F("Woblitzweg");
        break;
    }
    case 339545:
    {
        returnValue = F("Wobringstr.");
        break;
    }
    case 339546:
    {
        returnValue = F("Wochenauer Str.");
        break;
    }
    case 339547:
    {
        returnValue = F("Wochenbergstr.");
        break;
    }
    case 339548:
    {
        returnValue = F("Wochenend");
        break;
    }
    case 339549:
    {
        returnValue = F("Wochenendgebiet A");
        break;
    }
    case 339550:
    {
        returnValue = F("Wochenendgebiet A.d.Berg");
        break;
    }
    case 339551:
    {
        returnValue = F("Wochenendgebiet B");
        break;
    }
    case 339552:
    {
        returnValue = F("Wochenendsiedlung");
        break;
    }
    case 339553:
    {
        returnValue = F("Wochenendsiedlung Am Mirrbach");
        break;
    }
    case 339554:
    {
        returnValue = F("Wochenendsiedlung An der Schlaube");
        break;
    }
    case 339555:
    {
        returnValue = F("Wochenendsiedlung Im Lauch");
        break;
    }
    case 339556:
    {
        returnValue = F("Wochenendsiedlung Langer Grund");
        break;
    }
    case 339557:
    {
        returnValue = F("Wochenendsiedlung Leuenberg");
        break;
    }
    case 339558:
    {
        returnValue = F("Wochenendsiedlung Nord");
        break;
    }
    case 339559:
    {
        returnValue = F("Wochenendsiedlung Wartburgblick");
        break;
    }
    case 339560:
    {
        returnValue = F("Wochenendsiedlung West");
        break;
    }
    case 339561:
    {
        returnValue = F("Wochenendsiedlung Wiesenaue");
        break;
    }
    case 339562:
    {
        returnValue = F("Wochenendstr.");
        break;
    }
    case 339563:
    {
        returnValue = F("Wochenendweg");
        break;
    }
    case 339564:
    {
        returnValue = F("Wochenmarkt");
        break;
    }
    case 339565:
    {
        returnValue = F("Wochenweis");
        break;
    }
    case 339566:
    {
        returnValue = F("Wocherner Str.");
        break;
    }
    case 339567:
    {
        returnValue = F("Wochinger Spitz");
        break;
    }
    case 339568:
    {
        returnValue = F("Wochinger Str.");
        break;
    }
    case 339569:
    {
        returnValue = F("Wocka");
        break;
    }
    case 339570:
    {
        returnValue = F("Wockenbornstr.");
        break;
    }
    case 339571:
    {
        returnValue = F("Wockenbrinkweg");
        break;
    }
    case 339572:
    {
        returnValue = F("Wockengrund");
        break;
    }
    case 339573:
    {
        returnValue = F("Wockerather Weg");
        break;
    }
    case 339574:
    {
        returnValue = F("Wockerstr.");
        break;
    }
    case 339575:
    {
        returnValue = F("Wocklumer Allee");
        break;
    }
    case 339576:
    {
        returnValue = F("Wocklumer Weg");
        break;
    }
    case 339577:
    {
        returnValue = F("Wockninstr.");
        break;
    }
    case 339578:
    {
        returnValue = F("Wodansberger Str.");
        break;
    }
    case 339579:
    {
        returnValue = F("Wodanstr.");
        break;
    }
    case 339580:
    {
        returnValue = F("Wodantal");
        break;
    }
    case 339581:
    {
        returnValue = F("Wodarg");
        break;
    }
    case 339582:
    {
        returnValue = F("Wodarger Str.");
        break;
    }
    case 339583:
    {
        returnValue = F("Woddow");
        break;
    }
    case 339584:
    {
        returnValue = F("Woddower Weg");
        break;
    }
    case 339585:
    {
        returnValue = F("Wodenhofer Str.");
        break;
    }
    case 339586:
    {
        returnValue = F("Wodkaweg");
        break;
    }
    case 339587:
    {
        returnValue = F("Wodorf");
        break;
    }
    case 339588:
    {
        returnValue = F("Wodzislawweg");
        break;
    }
    case 339589:
    {
        returnValue = F("Woebelstr.");
        break;
    }
    case 339590:
    {
        returnValue = F("Woelckernstr.");
        break;
    }
    case 339591:
    {
        returnValue = F("Woelkestr.");
        break;
    }
    case 339592:
    {
        returnValue = F("Woellenstiege");
        break;
    }
    case 339593:
    {
        returnValue = F("Woenigstr.");
        break;
    }
    case 339594:
    {
        returnValue = F("Woer Ackers");
        break;
    }
    case 339595:
    {
        returnValue = F("Woerdener Str.");
        break;
    }
    case 339596:
    {
        returnValue = F("Woerdestr.");
        break;
    }
    case 339597:
    {
        returnValue = F("Woernerstr.");
        break;
    }
    case 339598:
    {
        returnValue = F("Woerther Weg");
        break;
    }
    case 339599:
    {
        returnValue = F("Woertzstr.");
        break;
    }
    case 339600:
    {
        returnValue = F("Woeschenhoff");
        break;
    }
    case 339601:
    {
        returnValue = F("Woestendiek");
        break;
    }
    case 339602:
    {
        returnValue = F("Woestestr.");
        break;
    }
    case 339603:
    {
        returnValue = F("Woesteweg");
        break;
    }
    case 339604:
    {
        returnValue = F("Woetener Weg");
        break;
    }
    case 339605:
    {
        returnValue = F("Woezer Dorfstr.");
        break;
    }
    case 339606:
    {
        returnValue = F("Woffelsbacher Str.");
        break;
    }
    case 339607:
    {
        returnValue = F("Woffenbacher Str.");
        break;
    }
    case 339608:
    {
        returnValue = F("Woffendorfer Str.");
        break;
    }
    case 339609:
    {
        returnValue = F("Wofflebener Str.");
        break;
    }
    case 339610:
    {
        returnValue = F("Wogauer Str.");
        break;
    }
    case 339611:
    {
        returnValue = F("Wogemannenweg");
        break;
    }
    case 339612:
    {
        returnValue = F("Wogemannsweg");
        break;
    }
    case 339613:
    {
        returnValue = F("Woggersiner Str.");
        break;
    }
    case 339614:
    {
        returnValue = F("Wohl");
        break;
    }
    case 339615:
    {
        returnValue = F("Wohlackerum");
        break;
    }
    case 339616:
    {
        returnValue = F("Wohlaer Str.");
        break;
    }
    case 339617:
    {
        returnValue = F("Wohlandstr.");
        break;
    }
    case 339618:
    {
        returnValue = F("Wohlau-Brücke");
        break;
    }
    case 339619:
    {
        returnValue = F("Wohlauer Str.");
        break;
    }
    case 339620:
    {
        returnValue = F("Wohlbacher Str.");
        break;
    }
    case 339621:
    {
        returnValue = F("Wohlboldstr.");
        break;
    }
    case 339622:
    {
        returnValue = F("Wohld-Schandelah");
        break;
    }
    case 339623:
    {
        returnValue = F("Wohldamm");
        break;
    }
    case 339624:
    {
        returnValue = F("Wohldenberg");
        break;
    }
    case 339625:
    {
        returnValue = F("Wohldenberger Str.");
        break;
    }
    case 339626:
    {
        returnValue = F("Wohldenbergstr.");
        break;
    }
    case 339627:
    {
        returnValue = F("Wohlder Weg");
        break;
    }
    case 339628:
    {
        returnValue = F("Wohldkamp");
        break;
    }
    case 339629:
    {
        returnValue = F("Wohldkamper Weg");
        break;
    }
    case 339630:
    {
        returnValue = F("Wohldmaas");
        break;
    }
    case 339631:
    {
        returnValue = F("Wohldredder");
        break;
    }
    case 339632:
    {
        returnValue = F("Wohlds Weg");
        break;
    }
    case 339633:
    {
        returnValue = F("Wohldsgang");
        break;
    }
    case 339634:
    {
        returnValue = F("Wohldstr.");
        break;
    }
    case 339635:
    {
        returnValue = F("Wohldtor");
        break;
    }
    case 339636:
    {
        returnValue = F("Wohldtrift");
        break;
    }
    case 339637:
    {
        returnValue = F("Wohldweg");
        break;
    }
    case 339638:
    {
        returnValue = F("Wohlenberg Nr.");
        break;
    }
    case 339639:
    {
        returnValue = F("Wohlenbergstr.");
        break;
    }
    case 339640:
    {
        returnValue = F("Wohlenbütteler Str.");
        break;
    }
    case 339641:
    {
        returnValue = F("Wohlenhauser Str.");
        break;
    }
    case 339642:
    {
        returnValue = F("Wohlenhäuser Kirchweg");
        break;
    }
    case 339643:
    {
        returnValue = F("Wohlenroder Str.");
        break;
    }
    case 339644:
    {
        returnValue = F("Wohlenroder Weg");
        break;
    }
    case 339645:
    {
        returnValue = F("Wohlers Feld");
        break;
    }
    case 339646:
    {
        returnValue = F("Wohlersend");
        break;
    }
    case 339647:
    {
        returnValue = F("Wohlerskoppel");
        break;
    }
    case 339648:
    {
        returnValue = F("Wohlerst");
        break;
    }
    case 339649:
    {
        returnValue = F("Wohlerster Aue");
        break;
    }
    case 339650:
    {
        returnValue = F("Wohlerster Horst");
        break;
    }
    case 339651:
    {
        returnValue = F("Wohlesbosteler Str.");
        break;
    }
    case 339652:
    {
        returnValue = F("Wohlfahrts Allee");
        break;
    }
    case 339653:
    {
        returnValue = F("Wohlfahrtsberg");
        break;
    }
    case 339654:
    {
        returnValue = F("Wohlfahrtstr.");
        break;
    }
    case 339655:
    {
        returnValue = F("Wohlfahrtsweg");
        break;
    }
    case 339656:
    {
        returnValue = F("Wohlfarthstr.");
        break;
    }
    case 339657:
    {
        returnValue = F("Wohlfeil");
        break;
    }
    case 339658:
    {
        returnValue = F("Wohlfester Weg");
        break;
    }
    case 339659:
    {
        returnValue = F("Wohlgasse");
        break;
    }
    case 339660:
    {
        returnValue = F("Wohlgemuth");
        break;
    }
    case 339661:
    {
        returnValue = F("Wohlgemuthstr.");
        break;
    }
    case 339662:
    {
        returnValue = F("Wohlhaupterstr.");
        break;
    }
    case 339663:
    {
        returnValue = F("Wohlhausener Str.");
        break;
    }
    case 339664:
    {
        returnValue = F("Wohlkopfsweg");
        break;
    }
    case 339665:
    {
        returnValue = F("Wohllebensgasse");
        break;
    }
    case 339666:
    {
        returnValue = F("Wohlmannsgesees");
        break;
    }
    case 339667:
    {
        returnValue = F("Wohlmeine");
        break;
    }
    case 339668:
    {
        returnValue = F("Wohlmirstedter Str.");
        break;
    }
    case 339669:
    {
        returnValue = F("Wohlmuthshüller Str.");
        break;
    }
    case 339670:
    {
        returnValue = F("Wohlmuthweg");
        break;
    }
    case 339671:
    {
        returnValue = F("Wohlmuthäuser Str.");
        break;
    }
    case 339672:
    {
        returnValue = F("Wohlmuts");
        break;
    }
    case 339673:
    {
        returnValue = F("Wohlmutser Weg");
        break;
    }
    case 339674:
    {
        returnValue = F("Wohlrosestr.");
        break;
    }
    case 339675:
    {
        returnValue = F("Wohlsbacher Str.");
        break;
    }
    case 339676:
    {
        returnValue = F("Wohlsberg");
        break;
    }
    case 339677:
    {
        returnValue = F("Wohlsborner Str.");
        break;
    }
    case 339678:
    {
        returnValue = F("Wohlsdorfer Str.");
        break;
    }
    case 339679:
    {
        returnValue = F("Wohlsenstr.");
        break;
    }
    case 339680:
    {
        returnValue = F("Wohlskamp");
        break;
    }
    case 339681:
    {
        returnValue = F("Wohlstreck");
        break;
    }
    case 339682:
    {
        returnValue = F("Wohlthöfener Str.");
        break;
    }
    case 339683:
    {
        returnValue = F("Wohltkamp");
        break;
    }
    case 339684:
    {
        returnValue = F("Wohltorfer Brücke");
        break;
    }
    case 339685:
    {
        returnValue = F("Wohltorfer Str.");
        break;
    }
    case 339686:
    {
        returnValue = F("Wohltorfer Weg");
        break;
    }
    case 339687:
    {
        returnValue = F("Wohltsweg");
        break;
    }
    case 339688:
    {
        returnValue = F("Wohlweg");
        break;
    }
    case 339689:
    {
        returnValue = F("Wohlwiesenweg");
        break;
    }
    case 339690:
    {
        returnValue = F("Wohmbachstr.");
        break;
    }
    case 339691:
    {
        returnValue = F("Wohmbachtal");
        break;
    }
    case 339692:
    {
        returnValue = F("Wohn");
        break;
    }
    case 339693:
    {
        returnValue = F("Wohnanlage am See");
        break;
    }
    case 339694:
    {
        returnValue = F("Wohnaue");
        break;
    }
    case 339695:
    {
        returnValue = F("Wohnbacher Str.");
        break;
    }
    case 339696:
    {
        returnValue = F("Wohnbacher Weg");
        break;
    }
    case 339697:
    {
        returnValue = F("Wohnbaustr.");
        break;
    }
    case 339698:
    {
        returnValue = F("Wohnfelder Str.");
        break;
    }
    case 339699:
    {
        returnValue = F("Wohngarten");
        break;
    }
    case 339700:
    {
        returnValue = F("Wohngebiet Adam Ries");
        break;
    }
    case 339701:
    {
        returnValue = F("Wohngebiet Albrecht Thaer");
        break;
    }
    case 339702:
    {
        returnValue = F("Wohngebiet Annaberger Str.");
        break;
    }
    case 339703:
    {
        returnValue = F("Wohngebiet Ernst Thälmann");
        break;
    }
    case 339704:
    {
        returnValue = F("Wohngebiet Herzfelder Weg");
        break;
    }
    case 339705:
    {
        returnValue = F("Wohngebietspark Eckersbach");
        break;
    }
    case 339706:
    {
        returnValue = F("Wohngebietspark Wolkenrasen");
        break;
    }
    case 339707:
    {
        returnValue = F("Wohnheim");
        break;
    }
    case 339708:
    {
        returnValue = F("Wohnlager Frankreiter");
        break;
    }
    case 339709:
    {
        returnValue = F("Wohnpark");
        break;
    }
    case 339710:
    {
        returnValue = F("Wohnpark Blammerberg");
        break;
    }
    case 339711:
    {
        returnValue = F("Wohnpark Falke");
        break;
    }
    case 339712:
    {
        returnValue = F("Wohnpark Gentilly");
        break;
    }
    case 339713:
    {
        returnValue = F("Wohnpark Gullringen");
        break;
    }
    case 339714:
    {
        returnValue = F("Wohnpark Kreuz");
        break;
    }
    case 339715:
    {
        returnValue = F("Wohnpark Neuwelt");
        break;
    }
    case 339716:
    {
        returnValue = F("Wohnpark Nord");
        break;
    }
    case 339717:
    {
        returnValue = F("Wohnpark Nucourt");
        break;
    }
    case 339718:
    {
        returnValue = F("Wohnpark Rotkäppchen");
        break;
    }
    case 339719:
    {
        returnValue = F("Wohnpark Sonnenhof");
        break;
    }
    case 339720:
    {
        returnValue = F("Wohnpark am Brand");
        break;
    }
    case 339721:
    {
        returnValue = F("Wohnpark am Landberg");
        break;
    }
    case 339722:
    {
        returnValue = F("Wohnpark am Stienitzsee");
        break;
    }
    case 339723:
    {
        returnValue = F("Wohnplatz Herrenbergerhof");
        break;
    }
    case 339724:
    {
        returnValue = F("Wohnplatz Schleusenhaus");
        break;
    }
    case 339725:
    {
        returnValue = F("Wohnplatz Wohltmann");
        break;
    }
    case 339726:
    {
        returnValue = F("Wohnroder Str.");
        break;
    }
    case 339727:
    {
        returnValue = F("Wohnrother Str.");
        break;
    }
    case 339728:
    {
        returnValue = F("Wohnsiedlung");
        break;
    }
    case 339729:
    {
        returnValue = F("Wohnsiedlung am Flugplatz");
        break;
    }
    case 339730:
    {
        returnValue = F("Wohnsiger Weg");
        break;
    }
    case 339731:
    {
        returnValue = F("Wohnstr.");
        break;
    }
    case 339732:
    {
        returnValue = F("Wohnstädter Weg");
        break;
    }
    case 339733:
    {
        returnValue = F("Wohnweg");
        break;
    }
    case 339734:
    {
        returnValue = F("Wohnzammweg-Allee");
        break;
    }
    case 339735:
    {
        returnValue = F("Wohraer Str.");
        break;
    }
    case 339736:
    {
        returnValue = F("Wohrastr.");
        break;
    }
    case 339737:
    {
        returnValue = F("Wohrataler Str.");
        break;
    }
    case 339738:
    {
        returnValue = F("Wohratalstr.");
        break;
    }
    case 339739:
    {
        returnValue = F("Wohrbarg");
        break;
    }
    case 339740:
    {
        returnValue = F("Wohrenstorf");
        break;
    }
    case 339741:
    {
        returnValue = F("Wohrenweg");
        break;
    }
    case 339742:
    {
        returnValue = F("Wohrsberg");
        break;
    }
    case 339743:
    {
        returnValue = F("Wohrtacker");
        break;
    }
    case 339744:
    {
        returnValue = F("Wohrtdrift");
        break;
    }
    case 339745:
    {
        returnValue = F("Wohsener Dorfstr.");
        break;
    }
    case 339746:
    {
        returnValue = F("Woichingerstr.");
        break;
    }
    case 339747:
    {
        returnValue = F("Wokrent");
        break;
    }
    case 339748:
    {
        returnValue = F("Wokrenter Weg");
        break;
    }
    case 339749:
    {
        returnValue = F("Wolander Chaussee");
        break;
    }
    case 339750:
    {
        returnValue = F("Wolbecke");
        break;
    }
    case 339751:
    {
        returnValue = F("Wolbecker Str.");
        break;
    }
    case 339752:
    {
        returnValue = F("Wolber Gässle");
        break;
    }
    case 339753:
    {
        returnValue = F("Wolberostr.");
        break;
    }
    case 339754:
    {
        returnValue = F("Wolboldstr.");
        break;
    }
    case 339755:
    {
        returnValue = F("Wolbrechtshäuser Weg");
        break;
    }
    case 339756:
    {
        returnValue = F("Wolbringstr.");
        break;
    }
    case 339757:
    {
        returnValue = F("Wolbrinkstr.");
        break;
    }
    case 339758:
    {
        returnValue = F("Wolburgstr.");
        break;
    }
    case 339759:
    {
        returnValue = F("Wold");
        break;
    }
    case 339760:
    {
        returnValue = F("Woldaweg");
        break;
    }
    case 339761:
    {
        returnValue = F("Wolde Weg");
        break;
    }
    case 339762:
    {
        returnValue = F("Woldegker Chaussee");
        break;
    }
    case 339763:
    {
        returnValue = F("Woldegker Str.");
        break;
    }
    case 339764:
    {
        returnValue = F("Woldemarstr.");
        break;
    }
    case 339765:
    {
        returnValue = F("Woldemei");
        break;
    }
    case 339766:
    {
        returnValue = F("Woldemeipassage");
        break;
    }
    case 339767:
    {
        returnValue = F("Woldenhorn");
        break;
    }
    case 339768:
    {
        returnValue = F("Woldenhornstieg");
        break;
    }
    case 339769:
    {
        returnValue = F("Woldenitz");
        break;
    }
    case 339770:
    {
        returnValue = F("Woldenweg");
        break;
    }
    case 339771:
    {
        returnValue = F("Wolder Flage");
        break;
    }
    case 339772:
    {
        returnValue = F("Wolder Str.");
        break;
    }
    case 339773:
    {
        returnValue = F("Wolder Weg");
        break;
    }
    case 339774:
    {
        returnValue = F("Woldeweg");
        break;
    }
    case 339775:
    {
        returnValue = F("Woldlandstr.");
        break;
    }
    case 339776:
    {
        returnValue = F("Woldlinie");
        break;
    }
    case 339777:
    {
        returnValue = F("Woldmer Weg");
        break;
    }
    case 339778:
    {
        returnValue = F("Woldsenstr.");
        break;
    }
    case 339779:
    {
        returnValue = F("Woldweg");
        break;
    }
    case 339780:
    {
        returnValue = F("Woldzegartener Chaussee");
        break;
    }
    case 339781:
    {
        returnValue = F("Woldzegartener Str.");
        break;
    }
    case 339782:
    {
        returnValue = F("Wolf Schneise");
        break;
    }
    case 339783:
    {
        returnValue = F("Wolf-Dietrich-Kraneis-Str.");
        break;
    }
    case 339784:
    {
        returnValue = F("Wolf-Dietrich-Mayr-Str.");
        break;
    }
    case 339785:
    {
        returnValue = F("Wolf-Dietrich-Str.");
        break;
    }
    case 339786:
    {
        returnValue = F("Wolf-Eberstein-Str.");
        break;
    }
    case 339787:
    {
        returnValue = F("Wolf-Ferrari-Str.");
        break;
    }
    case 339788:
    {
        returnValue = F("Wolf-Georg-von-Zscheplitz-Str.");
        break;
    }
    case 339789:
    {
        returnValue = F("Wolf-Heidenheim Gasse");
        break;
    }
    case 339790:
    {
        returnValue = F("Wolf-Hirth-Str.");
        break;
    }
    case 339791:
    {
        returnValue = F("Wolf-Hirth-Weg");
        break;
    }
    case 339792:
    {
        returnValue = F("Wolf-Huber-Str.");
        break;
    }
    case 339793:
    {
        returnValue = F("Wolf-Hudelmaier-Weg");
        break;
    }
    case 339794:
    {
        returnValue = F("Wolf-Keller-Str.");
        break;
    }
    case 339795:
    {
        returnValue = F("Wolf-Zieß-Str.");
        break;
    }
    case 339796:
    {
        returnValue = F("Wolf-von-Eltz-Ring");
        break;
    }
    case 339797:
    {
        returnValue = F("Wolf-von-Schaumberg-Str.");
        break;
    }
    case 339798:
    {
        returnValue = F("Wolf-von-Schönleiten-Str.");
        break;
    }
    case 339799:
    {
        returnValue = F("Wolfachauer Ring");
        break;
    }
    case 339800:
    {
        returnValue = F("Wolfacher Str.");
        break;
    }
    case 339801:
    {
        returnValue = F("Wolfacher Weg");
        break;
    }
    case 339802:
    {
        returnValue = F("Wolfachstr.");
        break;
    }
    case 339803:
    {
        returnValue = F("Wolfachtaler Str.");
        break;
    }
    case 339804:
    {
        returnValue = F("Wolfachtalweg");
        break;
    }
    case 339805:
    {
        returnValue = F("Wolfachweg");
        break;
    }
    case 339806:
    {
        returnValue = F("Wolfacker");
        break;
    }
    case 339807:
    {
        returnValue = F("Wolfackerstr.");
        break;
    }
    case 339808:
    {
        returnValue = F("Wolfackerweg");
        break;
    }
    case 339809:
    {
        returnValue = F("Wolfakirchener Str.");
        break;
    }
    case 339810:
    {
        returnValue = F("Wolfangerstr.");
        break;
    }
    case 339811:
    {
        returnValue = F("Wolfartsweg");
        break;
    }
    case 339812:
    {
        returnValue = F("Wolfartsweilerstr.");
        break;
    }
    case 339813:
    {
        returnValue = F("Wolfau");
        break;
    }
    case 339814:
    {
        returnValue = F("Wolfazer Weg");
        break;
    }
    case 339815:
    {
        returnValue = F("Wolfbachstr.");
        break;
    }
    case 339816:
    {
        returnValue = F("Wolfbachweg");
        break;
    }
    case 339817:
    {
        returnValue = F("Wolfbauernweg");
        break;
    }
    case 339818:
    {
        returnValue = F("Wolfbauerweg");
        break;
    }
    case 339819:
    {
        returnValue = F("Wolfbaumer Weg");
        break;
    }
    case 339820:
    {
        returnValue = F("Wolfbaumstr.");
        break;
    }
    case 339821:
    {
        returnValue = F("Wolfbaumweg");
        break;
    }
    case 339822:
    {
        returnValue = F("Wolfbergstr.");
        break;
    }
    case 339823:
    {
        returnValue = F("Wolfbornstr.");
        break;
    }
    case 339824:
    {
        returnValue = F("Wolfbühl");
        break;
    }
    case 339825:
    {
        returnValue = F("Wolfbühlweg");
        break;
    }
    case 339826:
    {
        returnValue = F("Wolfdrossel");
        break;
    }
    case 339827:
    {
        returnValue = F("Wolfegart");
        break;
    }
    case 339828:
    {
        returnValue = F("Wolfegger Str.");
        break;
    }
    case 339829:
    {
        returnValue = F("Wolfeggstr.");
        break;
    }
    case 339830:
    {
        returnValue = F("Wolfeggweg");
        break;
    }
    case 339831:
    {
        returnValue = F("Wolfen");
        break;
    }
    case 339832:
    {
        returnValue = F("Wolfenborn");
        break;
    }
    case 339833:
    {
        returnValue = F("Wolfenbüttel");
        break;
    }
    case 339834:
    {
        returnValue = F("Wolfenbütteler Str.");
        break;
    }
    case 339835:
    {
        returnValue = F("Wolfenbütteler Weg");
        break;
    }
    case 339836:
    {
        returnValue = F("Wolfenbüttler Str.");
        break;
    }
    case 339837:
    {
        returnValue = F("Wolfener Chaussee");
        break;
    }
    case 339838:
    {
        returnValue = F("Wolfener Str.");
        break;
    }
    case 339839:
    {
        returnValue = F("Wolfenesch");
        break;
    }
    case 339840:
    {
        returnValue = F("Wolfengasse");
        break;
    }
    case 339841:
    {
        returnValue = F("Wolfengärten");
        break;
    }
    case 339842:
    {
        returnValue = F("Wolfenhauser Str.");
        break;
    }
    case 339843:
    {
        returnValue = F("Wolfenhauser Weg");
        break;
    }
    case 339844:
    {
        returnValue = F("Wolfenhäuser Weg");
        break;
    }
    case 339845:
    {
        returnValue = F("Wolfenklingeweg");
        break;
    }
    case 339846:
    {
        returnValue = F("Wolfenmühle");
        break;
    }
    case 339847:
    {
        returnValue = F("Wolfensteige");
        break;
    }
    case 339848:
    {
        returnValue = F("Wolfenstr.");
        break;
    }
    case 339849:
    {
        returnValue = F("Wolfental");
        break;
    }
    case 339850:
    {
        returnValue = F("Wolfentalblick");
        break;
    }
    case 339851:
    {
        returnValue = F("Wolfentalstr.");
        break;
    }
    case 339852:
    {
        returnValue = F("Wolfentalweg");
        break;
    }
    case 339853:
    {
        returnValue = F("Wolfenwasen");
        break;
    }
    case 339854:
    {
        returnValue = F("Wolfenweg");
        break;
    }
    case 339855:
    {
        returnValue = F("Wolfenweiherweg");
        break;
    }
    case 339856:
    {
        returnValue = F("Wolfenäckerstr.");
        break;
    }
    case 339857:
    {
        returnValue = F("Wolfer Str.");
        break;
    }
    case 339858:
    {
        returnValue = F("Wolfer Weg");
        break;
    }
    case 339859:
    {
        returnValue = F("Wolferazhofer Str.");
        break;
    }
    case 339860:
    {
        returnValue = F("Wolferborner Str.");
        break;
    }
    case 339861:
    {
        returnValue = F("Wolferborner Weg");
        break;
    }
    case 339862:
    {
        returnValue = F("Wolferding");
        break;
    }
    case 339863:
    {
        returnValue = F("Wolfergleiche");
        break;
    }
    case 339864:
    {
        returnValue = F("Wolferkam");
        break;
    }
    case 339865:
    {
        returnValue = F("Wolfermoosstr.");
        break;
    }
    case 339866:
    {
        returnValue = F("Wolfermoosweg");
        break;
    }
    case 339867:
    {
        returnValue = F("Wolferoder Str.");
        break;
    }
    case 339868:
    {
        returnValue = F("Wolferoder Weg");
        break;
    }
    case 339869:
    {
        returnValue = F("Wolfersbach");
        break;
    }
    case 339870:
    {
        returnValue = F("Wolfersbachhangweg");
        break;
    }
    case 339871:
    {
        returnValue = F("Wolfersbachweg");
        break;
    }
    case 339872:
    {
        returnValue = F("Wolfersberger Str.");
        break;
    }
    case 339873:
    {
        returnValue = F("Wolfersbergstr.");
        break;
    }
    case 339874:
    {
        returnValue = F("Wolferschlah");
        break;
    }
    case 339875:
    {
        returnValue = F("Wolfersdorf");
        break;
    }
    case 339876:
    {
        returnValue = F("Wolfersdorf Am Reiterhof");
        break;
    }
    case 339877:
    {
        returnValue = F("Wolfersdorf Bählergasse");
        break;
    }
    case 339878:
    {
        returnValue = F("Wolfersdorf Hauptstr.");
        break;
    }
    case 339879:
    {
        returnValue = F("Wolfersdorf Herrengasse");
        break;
    }
    case 339880:
    {
        returnValue = F("Wolfersdorf Inselweg");
        break;
    }
    case 339881:
    {
        returnValue = F("Wolfersdorf Kohlberg");
        break;
    }
    case 339882:
    {
        returnValue = F("Wolfersdorf Mühlenweg");
        break;
    }
    case 339883:
    {
        returnValue = F("Wolfersdorf Prügelberg");
        break;
    }
    case 339884:
    {
        returnValue = F("Wolfersdorf Sonnenweg");
        break;
    }
    case 339885:
    {
        returnValue = F("Wolfersdorf Zum Fuchstal");
        break;
    }
    case 339886:
    {
        returnValue = F("Wolfersdorf Zur Kirche");
        break;
    }
    case 339887:
    {
        returnValue = F("Wolfersdorfer Str.");
        break;
    }
    case 339888:
    {
        returnValue = F("Wolfersdorfer Weg");
        break;
    }
    case 339889:
    {
        returnValue = F("Wolfersdyk");
        break;
    }
    case 339890:
    {
        returnValue = F("Wolfersheimer Str.");
        break;
    }
    case 339891:
    {
        returnValue = F("Wolfershäuser Str.");
        break;
    }
    case 339892:
    {
        returnValue = F("Wolfershäuser Weg");
        break;
    }
    case 339893:
    {
        returnValue = F("Wolfersreuth");
        break;
    }
    case 339894:
    {
        returnValue = F("Wolfersreuther Str.");
        break;
    }
    case 339895:
    {
        returnValue = F("Wolferstetter Weg");
        break;
    }
    case 339896:
    {
        returnValue = F("Wolferstr.");
        break;
    }
    case 339897:
    {
        returnValue = F("Wolferstädter Str.");
        break;
    }
    case 339898:
    {
        returnValue = F("Wolferszeller Weg");
        break;
    }
    case 339899:
    {
        returnValue = F("Wolfert");
        break;
    }
    case 339900:
    {
        returnValue = F("Wolfertal");
        break;
    }
    case 339901:
    {
        returnValue = F("Wolferter Weg");
        break;
    }
    case 339902:
    {
        returnValue = F("Wolferts");
        break;
    }
    case 339903:
    {
        returnValue = F("Wolfertsbronn");
        break;
    }
    case 339904:
    {
        returnValue = F("Wolfertshofen");
        break;
    }
    case 339905:
    {
        returnValue = F("Wolfertstal");
        break;
    }
    case 339906:
    {
        returnValue = F("Wolfertstalstr.");
        break;
    }
    case 339907:
    {
        returnValue = F("Wolfertsthaler Str.");
        break;
    }
    case 339908:
    {
        returnValue = F("Wolfertsweg");
        break;
    }
    case 339909:
    {
        returnValue = F("Wolfertweg");
        break;
    }
    case 339910:
    {
        returnValue = F("Wolferweg");
        break;
    }
    case 339911:
    {
        returnValue = F("Wolferöder Chaussee");
        break;
    }
    case 339912:
    {
        returnValue = F("Wolferöder Weg");
        break;
    }
    case 339913:
    {
        returnValue = F("Wolfeschle");
        break;
    }
    case 339914:
    {
        returnValue = F("Wolfesecke");
        break;
    }
    case 339915:
    {
        returnValue = F("Wolfesfeld");
        break;
    }
    case 339916:
    {
        returnValue = F("Wolfeshorn");
        break;
    }
    case 339917:
    {
        returnValue = F("Wolfesinger Str.");
        break;
    }
    case 339918:
    {
        returnValue = F("Wolfeslau");
        break;
    }
    case 339919:
    {
        returnValue = F("Wolff-Dietrich-Weg");
        break;
    }
    case 339920:
    {
        returnValue = F("Wolff-von-Baudissin-Weg");
        break;
    }
    case 339921:
    {
        returnValue = F("Wolffangelstr.");
        break;
    }
    case 339922:
    {
        returnValue = F("Wolffenstr.");
        break;
    }
    case 339923:
    {
        returnValue = F("Wolffersdorffstr.");
        break;
    }
    case 339924:
    {
        returnValue = F("Wolfframsdorffstr.");
        break;
    }
    case 339925:
    {
        returnValue = F("Wolffs Mühle");
        break;
    }
    case 339926:
    {
        returnValue = F("Wolffsgasse");
        break;
    }
    case 339927:
    {
        returnValue = F("Wolffskeelplatz");
        break;
    }
    case 339928:
    {
        returnValue = F("Wolffstr.");
        break;
    }
    case 339929:
    {
        returnValue = F("Wolffurtstr.");
        break;
    }
    case 339930:
    {
        returnValue = F("Wolffweg");
        break;
    }
    case 339931:
    {
        returnValue = F("Wolfgalgenstr.");
        break;
    }
    case 339932:
    {
        returnValue = F("Wolfgalgenweg");
        break;
    }
    case 339933:
    {
        returnValue = F("Wolfgang");
        break;
    }
    case 339934:
    {
        returnValue = F("Wolfgang Zerna Weg");
        break;
    }
    case 339935:
    {
        returnValue = F("Wolfgang-Amadeus-Mozart-Str.");
        break;
    }
    case 339936:
    {
        returnValue = F("Wolfgang-Baumann-Str.");
        break;
    }
    case 339937:
    {
        returnValue = F("Wolfgang-Best-Weg");
        break;
    }
    case 339938:
    {
        returnValue = F("Wolfgang-Borchert-Str.");
        break;
    }
    case 339939:
    {
        returnValue = F("Wolfgang-Borchert-Weg");
        break;
    }
    case 339940:
    {
        returnValue = F("Wolfgang-Brumme-Allee");
        break;
    }
    case 339941:
    {
        returnValue = F("Wolfgang-Bräuning-Str.");
        break;
    }
    case 339942:
    {
        returnValue = F("Wolfgang-Dachstein-Str.");
        break;
    }
    case 339943:
    {
        returnValue = F("Wolfgang-Daffinger-Str.");
        break;
    }
    case 339944:
    {
        returnValue = F("Wolfgang-Dinkler-Str.");
        break;
    }
    case 339945:
    {
        returnValue = F("Wolfgang-Dorfner-Str.");
        break;
    }
    case 339946:
    {
        returnValue = F("Wolfgang-Droßbach-Str.");
        break;
    }
    case 339947:
    {
        returnValue = F("Wolfgang-Dürr-Weg");
        break;
    }
    case 339948:
    {
        returnValue = F("Wolfgang-Frary-Weg");
        break;
    }
    case 339949:
    {
        returnValue = F("Wolfgang-Fries-Str.");
        break;
    }
    case 339950:
    {
        returnValue = F("Wolfgang-Fräger-Str.");
        break;
    }
    case 339951:
    {
        returnValue = F("Wolfgang-Fränkl-Str.");
        break;
    }
    case 339952:
    {
        returnValue = F("Wolfgang-Gack-Str.");
        break;
    }
    case 339953:
    {
        returnValue = F("Wolfgang-Gans-Str.");
        break;
    }
    case 339954:
    {
        returnValue = F("Wolfgang-Geiger-Ring");
        break;
    }
    case 339955:
    {
        returnValue = F("Wolfgang-Graf-Platz");
        break;
    }
    case 339956:
    {
        returnValue = F("Wolfgang-Griesstätter-Str.");
        break;
    }
    case 339957:
    {
        returnValue = F("Wolfgang-Göbel-Str.");
        break;
    }
    case 339958:
    {
        returnValue = F("Wolfgang-Hackh-Str.");
        break;
    }
    case 339959:
    {
        returnValue = F("Wolfgang-Hagenauer-Str.");
        break;
    }
    case 339960:
    {
        returnValue = F("Wolfgang-Heinze-Str.");
        break;
    }
    case 339961:
    {
        returnValue = F("Wolfgang-Hirth-Str.");
        break;
    }
    case 339962:
    {
        returnValue = F("Wolfgang-Keuchl-Str.");
        break;
    }
    case 339963:
    {
        returnValue = F("Wolfgang-Klausner-Str.");
        break;
    }
    case 339964:
    {
        returnValue = F("Wolfgang-Klee-Weg");
        break;
    }
    case 339965:
    {
        returnValue = F("Wolfgang-Koeppen-Str.");
        break;
    }
    case 339966:
    {
        returnValue = F("Wolfgang-Koller-Str.");
        break;
    }
    case 339967:
    {
        returnValue = F("Wolfgang-Krauß-Str.");
        break;
    }
    case 339968:
    {
        returnValue = F("Wolfgang-Krodel-Str.");
        break;
    }
    case 339969:
    {
        returnValue = F("Wolfgang-Krämer-Str.");
        break;
    }
    case 339970:
    {
        returnValue = F("Wolfgang-Kühle-Str.");
        break;
    }
    case 339971:
    {
        returnValue = F("Wolfgang-Küntscher-Str.");
        break;
    }
    case 339972:
    {
        returnValue = F("Wolfgang-Lenz-Weg");
        break;
    }
    case 339973:
    {
        returnValue = F("Wolfgang-Luckhner-Str.");
        break;
    }
    case 339974:
    {
        returnValue = F("Wolfgang-Marius-Str.");
        break;
    }
    case 339975:
    {
        returnValue = F("Wolfgang-Marius-Weg");
        break;
    }
    case 339976:
    {
        returnValue = F("Wolfgang-Medding-Str.");
        break;
    }
    case 339977:
    {
        returnValue = F("Wolfgang-Miether-Str.");
        break;
    }
    case 339978:
    {
        returnValue = F("Wolfgang-Mischnick-Str.");
        break;
    }
    case 339979:
    {
        returnValue = F("Wolfgang-Müller-Str.");
        break;
    }
    case 339980:
    {
        returnValue = F("Wolfgang-Nitsche-Str.");
        break;
    }
    case 339981:
    {
        returnValue = F("Wolfgang-Oehlke-Gasse");
        break;
    }
    case 339982:
    {
        returnValue = F("Wolfgang-Peter-Str.");
        break;
    }
    case 339983:
    {
        returnValue = F("Wolfgang-Petter-Weg");
        break;
    }
    case 339984:
    {
        returnValue = F("Wolfgang-Reinisch-Str.");
        break;
    }
    case 339985:
    {
        returnValue = F("Wolfgang-Roth-Str.");
        break;
    }
    case 339986:
    {
        returnValue = F("Wolfgang-Schmeltzl-Str.");
        break;
    }
    case 339987:
    {
        returnValue = F("Wolfgang-Schmid-Str.");
        break;
    }
    case 339988:
    {
        returnValue = F("Wolfgang-Schmidbauer-Str.");
        break;
    }
    case 339989:
    {
        returnValue = F("Wolfgang-Schwabe-Weg");
        break;
    }
    case 339990:
    {
        returnValue = F("Wolfgang-Sonder-Weg");
        break;
    }
    case 339991:
    {
        returnValue = F("Wolfgang-Spengler-Str.");
        break;
    }
    case 339992:
    {
        returnValue = F("Wolfgang-Wagner-Str.");
        break;
    }
    case 339993:
    {
        returnValue = F("Wolfgang-Waldinger-Platz");
        break;
    }
    case 339994:
    {
        returnValue = F("Wolfgang-Wilhelm-Platz");
        break;
    }
    case 339995:
    {
        returnValue = F("Wolfgang-Wilhelm-Str.");
        break;
    }
    case 339996:
    {
        returnValue = F("Wolfgang-Zeller-Str.");
        break;
    }
    case 339997:
    {
        returnValue = F("Wolfgang-Zimmerer-Str.");
        break;
    }
    case 339998:
    {
        returnValue = F("Wolfgang-Zötl-Str.");
        break;
    }
    case 339999:
    {
        returnValue = F("Wolfganger Str.");
        break;
    }
    case 340000:
    {
        returnValue = F("Wolfganger Weg");
        break;
    }
    case 340001:
    {
        returnValue = F("Wolfganggasse");
        break;
    }
    case 340002:
    {
        returnValue = F("Wolfganghof");
        break;
    }
    case 340003:
    {
        returnValue = F("Wolfgangistr.");
        break;
    }
    case 340004:
    {
        returnValue = F("Wolfgangmaßener Str.");
        break;
    }
    case 340005:
    {
        returnValue = F("Wolfgangpark");
        break;
    }
    case 340006:
    {
        returnValue = F("Wolfgangsstr.");
        break;
    }
    case 340007:
    {
        returnValue = F("Wolfgangstr.");
        break;
    }
    case 340008:
    {
        returnValue = F("Wolfgangswall");
        break;
    }
    case 340009:
    {
        returnValue = F("Wolfgangsweg");
        break;
    }
    case 340010:
    {
        returnValue = F("Wolfgangsäcker");
        break;
    }
    case 340011:
    {
        returnValue = F("Wolfgangweg");
        break;
    }
    case 340012:
    {
        returnValue = F("Wolfgangweiher");
        break;
    }
    case 340013:
    {
        returnValue = F("Wolfgarten");
        break;
    }
    case 340014:
    {
        returnValue = F("Wolfgartenstr.");
        break;
    }
    case 340015:
    {
        returnValue = F("Wolfgartenweg");
        break;
    }
    case 340016:
    {
        returnValue = F("Wolfgasse");
        break;
    }
    case 340017:
    {
        returnValue = F("Wolfgrubenweg");
        break;
    }
    case 340018:
    {
        returnValue = F("Wolfgrubstr.");
        break;
    }
    case 340019:
    {
        returnValue = F("Wolfgsgeräumt");
        break;
    }
    case 340020:
    {
        returnValue = F("Wolfgäßle");
        break;
    }
    case 340021:
    {
        returnValue = F("Wolfhag");
        break;
    }
    case 340022:
    {
        returnValue = F("Wolfhagen");
        break;
    }
    case 340023:
    {
        returnValue = F("Wolfhagener Str.");
        break;
    }
    case 340024:
    {
        returnValue = F("Wolfhagenstr.");
        break;
    }
    case 340025:
    {
        returnValue = F("Wolfhager Str.");
        break;
    }
    case 340026:
    {
        returnValue = F("Wolfhager Weg");
        break;
    }
    case 340027:
    {
        returnValue = F("Wolfhagermühle");
        break;
    }
    case 340028:
    {
        returnValue = F("Wolfhain");
        break;
    }
    case 340029:
    {
        returnValue = F("Wolfhainsiedlung");
        break;
    }
    case 340030:
    {
        returnValue = F("Wolfhalde");
        break;
    }
    case 340031:
    {
        returnValue = F("Wolfhaldenweg");
        break;
    }
    case 340032:
    {
        returnValue = F("Wolfhardstr.");
        break;
    }
    case 340033:
    {
        returnValue = F("Wolfharistr.");
        break;
    }
    }
    return returnValue;
}
