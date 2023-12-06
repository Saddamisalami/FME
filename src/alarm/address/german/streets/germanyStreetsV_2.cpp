#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameV2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 320032:
    {
        returnValue = F("Viola-Sommer-Weg");
        break;
    }
    case 320033:
    {
        returnValue = F("Violainesstr.");
        break;
    }
    case 320034:
    {
        returnValue = F("Violastr.");
        break;
    }
    case 320035:
    {
        returnValue = F("Violauer Str.");
        break;
    }
    case 320036:
    {
        returnValue = F("Violaweg");
        break;
    }
    case 320037:
    {
        returnValue = F("Violengasse");
        break;
    }
    case 320038:
    {
        returnValue = F("Violenstr.");
        break;
    }
    case 320039:
    {
        returnValue = F("Violinengasse");
        break;
    }
    case 320040:
    {
        returnValue = F("Violinengäßchen");
        break;
    }
    case 320041:
    {
        returnValue = F("Violinenstr.");
        break;
    }
    case 320042:
    {
        returnValue = F("Violinenweg");
        break;
    }
    case 320043:
    {
        returnValue = F("Violinstr.");
        break;
    }
    case 320044:
    {
        returnValue = F("Violstr.");
        break;
    }
    case 320045:
    {
        returnValue = F("Vionvillestr.");
        break;
    }
    case 320046:
    {
        returnValue = F("Vipernitzer Weg");
        break;
    }
    case 320047:
    {
        returnValue = F("Vippachedelhäuser Str.");
        break;
    }
    case 320048:
    {
        returnValue = F("Vippacher Gasse");
        break;
    }
    case 320049:
    {
        returnValue = F("Virchovstr.");
        break;
    }
    case 320050:
    {
        returnValue = F("Virchowanger");
        break;
    }
    case 320051:
    {
        returnValue = F("Virchower Str.");
        break;
    }
    case 320052:
    {
        returnValue = F("Virchower Weg");
        break;
    }
    case 320053:
    {
        returnValue = F("Virchowgasse");
        break;
    }
    case 320054:
    {
        returnValue = F("Virchowhang");
        break;
    }
    case 320055:
    {
        returnValue = F("Virchowplatz");
        break;
    }
    case 320056:
    {
        returnValue = F("Virchowring");
        break;
    }
    case 320057:
    {
        returnValue = F("Virchowstr.");
        break;
    }
    case 320058:
    {
        returnValue = F("Virchowweg");
        break;
    }
    case 320059:
    {
        returnValue = F("Virdungstr.");
        break;
    }
    case 320060:
    {
        returnValue = F("Virgiliastr.");
        break;
    }
    case 320061:
    {
        returnValue = F("Virgiliusstr.");
        break;
    }
    case 320062:
    {
        returnValue = F("Virgilstr.");
        break;
    }
    case 320063:
    {
        returnValue = F("Virgilweg");
        break;
    }
    case 320064:
    {
        returnValue = F("Virginia Str.");
        break;
    }
    case 320065:
    {
        returnValue = F("Virginia-Woolf-Weg");
        break;
    }
    case 320066:
    {
        returnValue = F("Virginiastr.");
        break;
    }
    case 320067:
    {
        returnValue = F("Virginiaweg");
        break;
    }
    case 320068:
    {
        returnValue = F("Virginie-Hölling-Weg");
        break;
    }
    case 320069:
    {
        returnValue = F("Virmondstr.");
        break;
    }
    case 320070:
    {
        returnValue = F("Virnebergstr.");
        break;
    }
    case 320071:
    {
        returnValue = F("Virneburger Str.");
        break;
    }
    case 320072:
    {
        returnValue = F("Virneburger Weg");
        break;
    }
    case 320073:
    {
        returnValue = F("Virneburgstr.");
        break;
    }
    case 320074:
    {
        returnValue = F("Virneburgweg");
        break;
    }
    case 320075:
    {
        returnValue = F("Virngrundstr.");
        break;
    }
    case 320076:
    {
        returnValue = F("Virnich");
        break;
    }
    case 320077:
    {
        returnValue = F("Virnicher Str.");
        break;
    }
    case 320078:
    {
        returnValue = F("Virnsberger Str.");
        break;
    }
    case 320079:
    {
        returnValue = F("Virnsberger Weg");
        break;
    }
    case 320080:
    {
        returnValue = F("Viroflayer Str.");
        break;
    }
    case 320081:
    {
        returnValue = F("Vis-à-Vis");
        break;
    }
    case 320082:
    {
        returnValue = F("Visbecker Ring");
        break;
    }
    case 320083:
    {
        returnValue = F("Visbecker Str.");
        break;
    }
    case 320084:
    {
        returnValue = F("Visbeckstr.");
        break;
    }
    case 320085:
    {
        returnValue = F("Visbeker Damm");
        break;
    }
    case 320086:
    {
        returnValue = F("Visbeker Str.");
        break;
    }
    case 320087:
    {
        returnValue = F("Visbeker Weg");
        break;
    }
    case 320088:
    {
        returnValue = F("Visbekstr.");
        break;
    }
    case 320089:
    {
        returnValue = F("Visbystr.");
        break;
    }
    case 320090:
    {
        returnValue = F("Visbyweg");
        break;
    }
    case 320091:
    {
        returnValue = F("Viscardihof");
        break;
    }
    case 320092:
    {
        returnValue = F("Viscardistr.");
        break;
    }
    case 320093:
    {
        returnValue = F("Vischeler Str.");
        break;
    }
    case 320094:
    {
        returnValue = F("Vischeltal");
        break;
    }
    case 320095:
    {
        returnValue = F("Vischenichstr.");
        break;
    }
    case 320096:
    {
        returnValue = F("Vischergasse");
        break;
    }
    case 320097:
    {
        returnValue = F("Vischeringstr.");
        break;
    }
    case 320098:
    {
        returnValue = F("Vischerkurve");
        break;
    }
    case 320099:
    {
        returnValue = F("Vischerstr.");
        break;
    }
    case 320100:
    {
        returnValue = F("Vischerweg");
        break;
    }
    case 320101:
    {
        returnValue = F("Vischlstr.");
        break;
    }
    case 320102:
    {
        returnValue = F("Visdael");
        break;
    }
    case 320103:
    {
        returnValue = F("Visinoweg");
        break;
    }
    case 320104:
    {
        returnValue = F("Visionstr.");
        break;
    }
    case 320105:
    {
        returnValue = F("Viskerte Noitgedocht");
        break;
    }
    case 320106:
    {
        returnValue = F("Viskulenhof");
        break;
    }
    case 320107:
    {
        returnValue = F("Vislerstr.");
        break;
    }
    case 320108:
    {
        returnValue = F("Visoh");
        break;
    }
    case 320109:
    {
        returnValue = F("Visolohweg");
        break;
    }
    case 320110:
    {
        returnValue = F("Visquarder Reihe");
        break;
    }
    case 320111:
    {
        returnValue = F("Visquarder Ring");
        break;
    }
    case 320112:
    {
        returnValue = F("Vissel");
        break;
    }
    case 320113:
    {
        returnValue = F("Visselhöveder Str.");
        break;
    }
    case 320114:
    {
        returnValue = F("Visselquelle");
        break;
    }
    case 320115:
    {
        returnValue = F("Visselseen");
        break;
    }
    case 320116:
    {
        returnValue = F("Vissingkamp");
        break;
    }
    case 320117:
    {
        returnValue = F("Vissum");
        break;
    }
    case 320118:
    {
        returnValue = F("Visteonstr.");
        break;
    }
    case 320119:
    {
        returnValue = F("Vistrastr.");
        break;
    }
    case 320120:
    {
        returnValue = F("Visurgisstr.");
        break;
    }
    case 320121:
    {
        returnValue = F("Vital-Daelen-Str.");
        break;
    }
    case 320122:
    {
        returnValue = F("Vital-Weg");
        break;
    }
    case 320123:
    {
        returnValue = F("Vitalis-Keil-Str.");
        break;
    }
    case 320124:
    {
        returnValue = F("Vitalisbergweg");
        break;
    }
    case 320125:
    {
        returnValue = F("Vitalisstr.");
        break;
    }
    case 320126:
    {
        returnValue = F("Vitaloh");
        break;
    }
    case 320127:
    {
        returnValue = F("Vitaparcours");
        break;
    }
    case 320128:
    {
        returnValue = F("Vitelliusstr.");
        break;
    }
    case 320129:
    {
        returnValue = F("Vitenbergweg");
        break;
    }
    case 320130:
    {
        returnValue = F("Vitenhofweg");
        break;
    }
    case 320131:
    {
        returnValue = F("Vitense");
        break;
    }
    case 320132:
    {
        returnValue = F("Viti Furth");
        break;
    }
    case 320133:
    {
        returnValue = F("Vitihof");
        break;
    }
    case 320134:
    {
        returnValue = F("Vititorwall");
        break;
    }
    case 320135:
    {
        returnValue = F("Vitos-Gelände");
        break;
    }
    case 320136:
    {
        returnValue = F("Vitrolles-Ring");
        break;
    }
    case 320137:
    {
        returnValue = F("Vitryallee");
        break;
    }
    case 320138:
    {
        returnValue = F("Vitréstr.");
        break;
    }
    case 320139:
    {
        returnValue = F("Vitsgasse");
        break;
    }
    case 320140:
    {
        returnValue = F("Vitskamp");
        break;
    }
    case 320141:
    {
        returnValue = F("Vitskirchhof");
        break;
    }
    case 320142:
    {
        returnValue = F("Vitt");
        break;
    }
    case 320143:
    {
        returnValue = F("Vittenbergstr.");
        break;
    }
    case 320144:
    {
        returnValue = F("Vitter Weg");
        break;
    }
    case 320145:
    {
        returnValue = F("Vittinghoff-Schell-Park");
        break;
    }
    case 320146:
    {
        returnValue = F("Vittinghoffstr.");
        break;
    }
    case 320147:
    {
        returnValue = F("Vittweg");
        break;
    }
    case 320148:
    {
        returnValue = F("Vitumhof");
        break;
    }
    case 320149:
    {
        returnValue = F("Vitus-Bering-Str.");
        break;
    }
    case 320150:
    {
        returnValue = F("Vitus-Born");
        break;
    }
    case 320151:
    {
        returnValue = F("Vitus-Brander-Str.");
        break;
    }
    case 320152:
    {
        returnValue = F("Vitus-Burg-Str.");
        break;
    }
    case 320153:
    {
        returnValue = F("Vitus-Kapelle-Weg");
        break;
    }
    case 320154:
    {
        returnValue = F("Vitus-Park");
        break;
    }
    case 320155:
    {
        returnValue = F("Vitus-Pichler-Weg");
        break;
    }
    case 320156:
    {
        returnValue = F("Vitus-Platz");
        break;
    }
    case 320157:
    {
        returnValue = F("Vitus-Recke-Platz");
        break;
    }
    case 320158:
    {
        returnValue = F("Vitusberg");
        break;
    }
    case 320159:
    {
        returnValue = F("Vitusgasse");
        break;
    }
    case 320160:
    {
        returnValue = F("Vitusplatz");
        break;
    }
    case 320161:
    {
        returnValue = F("Vitusring");
        break;
    }
    case 320162:
    {
        returnValue = F("Vitusstr.");
        break;
    }
    case 320163:
    {
        returnValue = F("Vitustor");
        break;
    }
    case 320164:
    {
        returnValue = F("Vitusweg");
        break;
    }
    case 320165:
    {
        returnValue = F("Vitzdorf");
        break;
    }
    case 320166:
    {
        returnValue = F("Vitzen");
        break;
    }
    case 320167:
    {
        returnValue = F("Vitzer Kirchweg");
        break;
    }
    case 320168:
    {
        returnValue = F("Vitzeroadaer Str.");
        break;
    }
    case 320169:
    {
        returnValue = F("Vitzerodaer Str.");
        break;
    }
    case 320170:
    {
        returnValue = F("Vitzke");
        break;
    }
    case 320171:
    {
        returnValue = F("Vitzker Str.");
        break;
    }
    case 320172:
    {
        returnValue = F("Vitzthumallee");
        break;
    }
    case 320173:
    {
        returnValue = F("Vitzthumgasse");
        break;
    }
    case 320174:
    {
        returnValue = F("Vitzthumstr.");
        break;
    }
    case 320175:
    {
        returnValue = F("Vitztumamtstr.");
        break;
    }
    case 320176:
    {
        returnValue = F("Vitztumstr.");
        break;
    }
    case 320177:
    {
        returnValue = F("Viulenberg");
        break;
    }
    case 320178:
    {
        returnValue = F("Vivaldi-Str.");
        break;
    }
    case 320179:
    {
        returnValue = F("Vivaldiplatz");
        break;
    }
    case 320180:
    {
        returnValue = F("Vivaldiring");
        break;
    }
    case 320181:
    {
        returnValue = F("Vivaldistr.");
        break;
    }
    case 320182:
    {
        returnValue = F("Vivaldiweg");
        break;
    }
    case 320183:
    {
        returnValue = F("Vivatsgasse");
        break;
    }
    case 320184:
    {
        returnValue = F("Viverstr.");
        break;
    }
    case 320185:
    {
        returnValue = F("Vivilostr.");
        break;
    }
    case 320186:
    {
        returnValue = F("Vixröder Str.");
        break;
    }
    case 320187:
    {
        returnValue = F("Vizekanzler-Reuß-Str.");
        break;
    }
    case 320188:
    {
        returnValue = F("Vizelinstr.");
        break;
    }
    case 320189:
    {
        returnValue = F("Vizestr.");
        break;
    }
    case 320190:
    {
        returnValue = F("Vizeweg");
        break;
    }
    case 320191:
    {
        returnValue = F("Vizinalbahnradweg");
        break;
    }
    case 320192:
    {
        returnValue = F("Vizinalstr.");
        break;
    }
    case 320193:
    {
        returnValue = F("Vizinalweg");
        break;
    }
    case 320194:
    {
        returnValue = F("Viöler Weg");
        break;
    }
    case 320195:
    {
        returnValue = F("Vlaeksweg");
        break;
    }
    case 320196:
    {
        returnValue = F("Vlamenstr.");
        break;
    }
    case 320197:
    {
        returnValue = F("Vlattenstr.");
        break;
    }
    case 320198:
    {
        returnValue = F("Vliehauser Weg");
        break;
    }
    case 320199:
    {
        returnValue = F("Vlijmener Str.");
        break;
    }
    case 320200:
    {
        returnValue = F("Vlissinger Str.");
        break;
    }
    case 320201:
    {
        returnValue = F("Vlitzweg");
        break;
    }
    case 320202:
    {
        returnValue = F("Vlodroper Str.");
        break;
    }
    case 320203:
    {
        returnValue = F("Vlodropstr.");
        break;
    }
    case 320204:
    {
        returnValue = F("Vlohtenstr.");
        break;
    }
    case 320205:
    {
        returnValue = F("Vlothoer Str.");
        break;
    }
    case 320206:
    {
        returnValue = F("Vluyner Nordring");
        break;
    }
    case 320207:
    {
        returnValue = F("Vluyner Platz");
        break;
    }
    case 320208:
    {
        returnValue = F("Vluyner Str.");
        break;
    }
    case 320209:
    {
        returnValue = F("Vluyner Südring");
        break;
    }
    case 320210:
    {
        returnValue = F("Vlämenweg");
        break;
    }
    case 320211:
    {
        returnValue = F("Vlämische Str.");
        break;
    }
    case 320212:
    {
        returnValue = F("Vlöthskeweg");
        break;
    }
    case 320213:
    {
        returnValue = F("Voccartstr.");
        break;
    }
    case 320214:
    {
        returnValue = F("Voccawind");
        break;
    }
    case 320215:
    {
        returnValue = F("Vochemer Str.");
        break;
    }
    case 320216:
    {
        returnValue = F("Vochemsgasse");
        break;
    }
    case 320217:
    {
        returnValue = F("Vochemsweg");
        break;
    }
    case 320218:
    {
        returnValue = F("Vochezenholzstr.");
        break;
    }
    case 320219:
    {
        returnValue = F("Vochezer Str.");
        break;
    }
    case 320220:
    {
        returnValue = F("Vockelied");
        break;
    }
    case 320221:
    {
        returnValue = F("Vockelsteinstr.");
        break;
    }
    case 320222:
    {
        returnValue = F("Vocken");
        break;
    }
    case 320223:
    {
        returnValue = F("Vockenberger Weg");
        break;
    }
    case 320224:
    {
        returnValue = F("Vockenbergsweg");
        break;
    }
    case 320225:
    {
        returnValue = F("Vockener Weg");
        break;
    }
    case 320226:
    {
        returnValue = F("Vockenhauser Str.");
        break;
    }
    case 320227:
    {
        returnValue = F("Vockenhof");
        break;
    }
    case 320228:
    {
        returnValue = F("Vockenroder Str.");
        break;
    }
    case 320229:
    {
        returnValue = F("Vockenröder Weg");
        break;
    }
    case 320230:
    {
        returnValue = F("Vockenseeschneise");
        break;
    }
    case 320231:
    {
        returnValue = F("Vockensteinweg");
        break;
    }
    case 320232:
    {
        returnValue = F("Vockenthal");
        break;
    }
    case 320233:
    {
        returnValue = F("Vockenweg");
        break;
    }
    case 320234:
    {
        returnValue = F("Vockeradtstr.");
        break;
    }
    case 320235:
    {
        returnValue = F("Vockeroder Platz");
        break;
    }
    case 320236:
    {
        returnValue = F("Vockeroder Str.");
        break;
    }
    case 320237:
    {
        returnValue = F("Vockert");
        break;
    }
    case 320238:
    {
        returnValue = F("Vockerter Busch");
        break;
    }
    case 320239:
    {
        returnValue = F("Vockerter Str.");
        break;
    }
    case 320240:
    {
        returnValue = F("Vockeröder Str.");
        break;
    }
    case 320241:
    {
        returnValue = F("Vockestr.");
        break;
    }
    case 320242:
    {
        returnValue = F("Vockeweg");
        break;
    }
    case 320243:
    {
        returnValue = F("Vockfeyer Str.");
        break;
    }
    case 320244:
    {
        returnValue = F("Vockhof");
        break;
    }
    case 320245:
    {
        returnValue = F("Vockmannshof");
        break;
    }
    case 320246:
    {
        returnValue = F("Vockrather Str.");
        break;
    }
    case 320247:
    {
        returnValue = F("Voddower Weg");
        break;
    }
    case 320248:
    {
        returnValue = F("Vodekestr.");
        break;
    }
    case 320249:
    {
        returnValue = F("Vodelstr.");
        break;
    }
    case 320250:
    {
        returnValue = F("Voechtingstr.");
        break;
    }
    case 320251:
    {
        returnValue = F("Voedeplatz");
        break;
    }
    case 320252:
    {
        returnValue = F("Voedestr.");
        break;
    }
    case 320253:
    {
        returnValue = F("Voegedeweg");
        break;
    }
    case 320254:
    {
        returnValue = F("Voegelmaättleweg");
        break;
    }
    case 320255:
    {
        returnValue = F("Voehdestr.");
        break;
    }
    case 320256:
    {
        returnValue = F("Voelckerstr.");
        break;
    }
    case 320257:
    {
        returnValue = F("Voerdenweg");
        break;
    }
    case 320258:
    {
        returnValue = F("Voerder Str.");
        break;
    }
    case 320259:
    {
        returnValue = F("Voerkampen");
        break;
    }
    case 320260:
    {
        returnValue = F("Voerkampstr.");
        break;
    }
    case 320261:
    {
        returnValue = F("Voerstad");
        break;
    }
    case 320262:
    {
        returnValue = F("Voerste-Dieckhof-Str.");
        break;
    }
    case 320263:
    {
        returnValue = F("Voerstestr.");
        break;
    }
    case 320264:
    {
        returnValue = F("Voesch");
        break;
    }
    case 320265:
    {
        returnValue = F("Voestdiek");
        break;
    }
    case 320266:
    {
        returnValue = F("Voestenstr.");
        break;
    }
    case 320267:
    {
        returnValue = F("Voetsdyck");
        break;
    }
    case 320268:
    {
        returnValue = F("Vogel-Greif-Str.");
        break;
    }
    case 320269:
    {
        returnValue = F("Vogel-Weg");
        break;
    }
    case 320270:
    {
        returnValue = F("Vogel-von-Falkenstein-Str.");
        break;
    }
    case 320271:
    {
        returnValue = F("Vogelallee");
        break;
    }
    case 320272:
    {
        returnValue = F("Vogelanger");
        break;
    }
    case 320273:
    {
        returnValue = F("Vogelangerweg");
        break;
    }
    case 320274:
    {
        returnValue = F("Vogelar");
        break;
    }
    case 320275:
    {
        returnValue = F("Vogelau");
        break;
    }
    case 320276:
    {
        returnValue = F("Vogelaue");
        break;
    }
    case 320277:
    {
        returnValue = F("Vogelauweg");
        break;
    }
    case 320278:
    {
        returnValue = F("Vogelbach");
        break;
    }
    case 320279:
    {
        returnValue = F("Vogelbacher Weg");
        break;
    }
    case 320280:
    {
        returnValue = F("Vogelbacherweg");
        break;
    }
    case 320281:
    {
        returnValue = F("Vogelbachstr.");
        break;
    }
    case 320282:
    {
        returnValue = F("Vogelbachweg");
        break;
    }
    case 320283:
    {
        returnValue = F("Vogelbauerebeneweg");
        break;
    }
    case 320284:
    {
        returnValue = F("Vogelbaumweg");
        break;
    }
    case 320285:
    {
        returnValue = F("Vogelbecker Str.");
        break;
    }
    case 320286:
    {
        returnValue = F("Vogelbeerallee");
        break;
    }
    case 320287:
    {
        returnValue = F("Vogelbeereckschneise");
        break;
    }
    case 320288:
    {
        returnValue = F("Vogelbeerenring");
        break;
    }
    case 320289:
    {
        returnValue = F("Vogelbeerenstr.");
        break;
    }
    case 320290:
    {
        returnValue = F("Vogelbeerenweg");
        break;
    }
    case 320291:
    {
        returnValue = F("Vogelbeerhecke");
        break;
    }
    case 320292:
    {
        returnValue = F("Vogelbeernweg");
        break;
    }
    case 320293:
    {
        returnValue = F("Vogelbeerstr.");
        break;
    }
    case 320294:
    {
        returnValue = F("Vogelbeerweg");
        break;
    }
    case 320295:
    {
        returnValue = F("Vogelberg");
        break;
    }
    case 320296:
    {
        returnValue = F("Vogelberger Weg");
        break;
    }
    case 320297:
    {
        returnValue = F("Vogelbergersiepen");
        break;
    }
    case 320298:
    {
        returnValue = F("Vogelbergerstr.");
        break;
    }
    case 320299:
    {
        returnValue = F("Vogelbergstr.");
        break;
    }
    case 320300:
    {
        returnValue = F("Vogelbergweg");
        break;
    }
    case 320301:
    {
        returnValue = F("Vogelbreede");
        break;
    }
    case 320302:
    {
        returnValue = F("Vogelbreite");
        break;
    }
    case 320303:
    {
        returnValue = F("Vogelbrink");
        break;
    }
    case 320304:
    {
        returnValue = F("Vogelbrinkstr.");
        break;
    }
    case 320305:
    {
        returnValue = F("Vogelbruch");
        break;
    }
    case 320306:
    {
        returnValue = F("Vogelbrunn");
        break;
    }
    case 320307:
    {
        returnValue = F("Vogelbrunnen Surheim");
        break;
    }
    case 320308:
    {
        returnValue = F("Vogelbrunnenstr.");
        break;
    }
    case 320309:
    {
        returnValue = F("Vogelbrunnenweg");
        break;
    }
    case 320310:
    {
        returnValue = F("Vogelbrunner Str.");
        break;
    }
    case 320311:
    {
        returnValue = F("Vogelbuck");
        break;
    }
    case 320312:
    {
        returnValue = F("Vogelbuckweg");
        break;
    }
    case 320313:
    {
        returnValue = F("Vogelbusch");
        break;
    }
    case 320314:
    {
        returnValue = F("Vogelbühl");
        break;
    }
    case 320315:
    {
        returnValue = F("Vogeldamm");
        break;
    }
    case 320316:
    {
        returnValue = F("Vogeldickicht");
        break;
    }
    case 320317:
    {
        returnValue = F("Vogeleck");
        break;
    }
    case 320318:
    {
        returnValue = F("Vogelecke");
        break;
    }
    case 320319:
    {
        returnValue = F("Vogeler-Uhl-Str.");
        break;
    }
    case 320320:
    {
        returnValue = F("Vogelerstr.");
        break;
    }
    case 320321:
    {
        returnValue = F("Vogelerweg");
        break;
    }
    case 320322:
    {
        returnValue = F("Vogelfeldstr.");
        break;
    }
    case 320323:
    {
        returnValue = F("Vogelfleck");
        break;
    }
    case 320324:
    {
        returnValue = F("Vogelflug");
        break;
    }
    case 320325:
    {
        returnValue = F("Vogelfängerstr.");
        break;
    }
    case 320326:
    {
        returnValue = F("Vogelgarten");
        break;
    }
    case 320327:
    {
        returnValue = F("Vogelgartenstr.");
        break;
    }
    case 320328:
    {
        returnValue = F("Vogelgartenweg");
        break;
    }
    case 320329:
    {
        returnValue = F("Vogelgasse");
        break;
    }
    case 320330:
    {
        returnValue = F("Vogelgehau");
        break;
    }
    case 320331:
    {
        returnValue = F("Vogelgehölz");
        break;
    }
    case 320332:
    {
        returnValue = F("Vogelgesang");
        break;
    }
    case 320333:
    {
        returnValue = F("Vogelgesanggasse");
        break;
    }
    case 320334:
    {
        returnValue = F("Vogelgesangstr.");
        break;
    }
    case 320335:
    {
        returnValue = F("Vogelgitter");
        break;
    }
    case 320336:
    {
        returnValue = F("Vogelgraben");
        break;
    }
    case 320337:
    {
        returnValue = F("Vogelgässle");
        break;
    }
    case 320338:
    {
        returnValue = F("Vogelhain");
        break;
    }
    case 320339:
    {
        returnValue = F("Vogelhainweg");
        break;
    }
    case 320340:
    {
        returnValue = F("Vogelhalde");
        break;
    }
    case 320341:
    {
        returnValue = F("Vogelhaldeweg");
        break;
    }
    case 320342:
    {
        returnValue = F("Vogelhammerstr.");
        break;
    }
    case 320343:
    {
        returnValue = F("Vogelhard Weg");
        break;
    }
    case 320344:
    {
        returnValue = F("Vogelhard-Weg");
        break;
    }
    case 320345:
    {
        returnValue = F("Vogelhardsweg");
        break;
    }
    case 320346:
    {
        returnValue = F("Vogelhartstr.");
        break;
    }
    case 320347:
    {
        returnValue = F("Vogelhausstr.");
        break;
    }
    case 320348:
    {
        returnValue = F("Vogelhausweg");
        break;
    }
    case 320349:
    {
        returnValue = F("Vogelheck-Schneise");
        break;
    }
    case 320350:
    {
        returnValue = F("Vogelhecke");
        break;
    }
    case 320351:
    {
        returnValue = F("Vogelheerdweg");
        break;
    }
    case 320352:
    {
        returnValue = F("Vogelheide");
        break;
    }
    case 320353:
    {
        returnValue = F("Vogelheidi");
        break;
    }
    case 320354:
    {
        returnValue = F("Vogelheimer Str.");
        break;
    }
    case 320355:
    {
        returnValue = F("Vogelherd");
        break;
    }
    case 320356:
    {
        returnValue = F("Vogelherd Geräumt");
        break;
    }
    case 320357:
    {
        returnValue = F("Vogelherdbogen");
        break;
    }
    case 320358:
    {
        returnValue = F("Vogelherder Str.");
        break;
    }
    case 320359:
    {
        returnValue = F("Vogelherdgasse");
        break;
    }
    case 320360:
    {
        returnValue = F("Vogelherdrückenweg");
        break;
    }
    case 320361:
    {
        returnValue = F("Vogelherdstr.");
        break;
    }
    case 320362:
    {
        returnValue = F("Vogelherdweg");
        break;
    }
    case 320363:
    {
        returnValue = F("Vogelhof");
        break;
    }
    case 320364:
    {
        returnValue = F("Vogelhofer Str.");
        break;
    }
    case 320365:
    {
        returnValue = F("Vogelhofsteig");
        break;
    }
    case 320366:
    {
        returnValue = F("Vogelhofstr.");
        break;
    }
    case 320367:
    {
        returnValue = F("Vogelhohle");
        break;
    }
    case 320368:
    {
        returnValue = F("Vogelholz");
        break;
    }
    case 320369:
    {
        returnValue = F("Vogelhord Weg");
        break;
    }
    case 320370:
    {
        returnValue = F("Vogelhornweg");
        break;
    }
    case 320371:
    {
        returnValue = F("Vogelhorst");
        break;
    }
    case 320372:
    {
        returnValue = F("Vogelhorster Str.");
        break;
    }
    case 320373:
    {
        returnValue = F("Vogelhuberstr.");
        break;
    }
    case 320374:
    {
        returnValue = F("Vogelhöfle");
        break;
    }
    case 320375:
    {
        returnValue = F("Vogelhöh");
        break;
    }
    case 320376:
    {
        returnValue = F("Vogelhöhstr.");
        break;
    }
    case 320377:
    {
        returnValue = F("Vogelhütte");
        break;
    }
    case 320378:
    {
        returnValue = F("Vogelhüttenschneise");
        break;
    }
    case 320379:
    {
        returnValue = F("Vogelhüttenweg");
        break;
    }
    case 320380:
    {
        returnValue = F("Vogelinckweg");
        break;
    }
    case 320381:
    {
        returnValue = F("Vogelkamp");
        break;
    }
    case 320382:
    {
        returnValue = F("Vogelkirschenring");
        break;
    }
    case 320383:
    {
        returnValue = F("Vogelkirschenstr.");
        break;
    }
    case 320384:
    {
        returnValue = F("Vogelkirschenweg");
        break;
    }
    case 320385:
    {
        returnValue = F("Vogelkirschweg");
        break;
    }
    case 320386:
    {
        returnValue = F("Vogelklingenweg");
        break;
    }
    case 320387:
    {
        returnValue = F("Vogelkoje");
        break;
    }
    case 320388:
    {
        returnValue = F("Vogelkundeweg");
        break;
    }
    case 320389:
    {
        returnValue = F("Vogelkäfigweg");
        break;
    }
    case 320390:
    {
        returnValue = F("Vogellehrpfad");
        break;
    }
    case 320391:
    {
        returnValue = F("Vogellehrpfad (zerstört)");
        break;
    }
    case 320392:
    {
        returnValue = F("Vogellehrpfad Bexterwald");
        break;
    }
    case 320393:
    {
        returnValue = F("Vogelleite");
        break;
    }
    case 320394:
    {
        returnValue = F("Vogelleithe");
        break;
    }
    case 320395:
    {
        returnValue = F("Vogelloh");
        break;
    }
    case 320396:
    {
        returnValue = F("Vogelmannstr.");
        break;
    }
    case 320397:
    {
        returnValue = F("Vogelmauer");
        break;
    }
    case 320398:
    {
        returnValue = F("Vogelmühle");
        break;
    }
    case 320399:
    {
        returnValue = F("Vogelnest");
        break;
    }
    case 320400:
    {
        returnValue = F("Vogelpark");
        break;
    }
    case 320401:
    {
        returnValue = F("Vogelpark Graben-Neudorf");
        break;
    }
    case 320402:
    {
        returnValue = F("Vogelpark Heddesheim");
        break;
    }
    case 320403:
    {
        returnValue = F("Vogelpark Heglachaue");
        break;
    }
    case 320404:
    {
        returnValue = F("Vogelpark Leopoldshafen");
        break;
    }
    case 320405:
    {
        returnValue = F("Vogelpark Linkenheim-Hochstetten");
        break;
    }
    case 320406:
    {
        returnValue = F("Vogelpark Schifferstadt");
        break;
    }
    case 320407:
    {
        returnValue = F("Vogelpark Staffort");
        break;
    }
    case 320408:
    {
        returnValue = F("Vogelparkweg");
        break;
    }
    case 320409:
    {
        returnValue = F("Vogelpohl");
        break;
    }
    case 320410:
    {
        returnValue = F("Vogelpohls Damm");
        break;
    }
    case 320411:
    {
        returnValue = F("Vogelpool");
        break;
    }
    case 320412:
    {
        returnValue = F("Vogelpothsweg");
        break;
    }
    case 320413:
    {
        returnValue = F("Vogelrainstr.");
        break;
    }
    case 320414:
    {
        returnValue = F("Vogelrainweg");
        break;
    }
    case 320415:
    {
        returnValue = F("Vogelreichsweg");
        break;
    }
    case 320416:
    {
        returnValue = F("Vogelriederstr.");
        break;
    }
    case 320417:
    {
        returnValue = F("Vogelring");
        break;
    }
    case 320418:
    {
        returnValue = F("Vogelrohrsheide");
        break;
    }
    case 320419:
    {
        returnValue = F("Vogelroute");
        break;
    }
    case 320420:
    {
        returnValue = F("Vogelrute");
        break;
    }
    case 320421:
    {
        returnValue = F("Vogelruth");
        break;
    }
    case 320422:
    {
        returnValue = F("Vogelruther Weg");
        break;
    }
    case 320423:
    {
        returnValue = F("Vogels Spitze");
        break;
    }
    case 320424:
    {
        returnValue = F("Vogels-Anger");
        break;
    }
    case 320425:
    {
        returnValue = F("Vogelsand");
        break;
    }
    case 320426:
    {
        returnValue = F("Vogelsandgasse");
        break;
    }
    case 320427:
    {
        returnValue = F("Vogelsandstr.");
        break;
    }
    case 320428:
    {
        returnValue = F("Vogelsang");
        break;
    }
    case 320429:
    {
        returnValue = F("Vogelsangbrücke");
        break;
    }
    case 320430:
    {
        returnValue = F("Vogelsangen");
        break;
    }
    case 320431:
    {
        returnValue = F("Vogelsanger Kirchweg");
        break;
    }
    case 320432:
    {
        returnValue = F("Vogelsanger Markt");
        break;
    }
    case 320433:
    {
        returnValue = F("Vogelsanger Platz");
        break;
    }
    case 320434:
    {
        returnValue = F("Vogelsanger Stieg");
        break;
    }
    case 320435:
    {
        returnValue = F("Vogelsanger Str.");
        break;
    }
    case 320436:
    {
        returnValue = F("Vogelsanger Weg");
        break;
    }
    case 320437:
    {
        returnValue = F("Vogelsangerweg");
        break;
    }
    case 320438:
    {
        returnValue = F("Vogelsangfeld");
        break;
    }
    case 320439:
    {
        returnValue = F("Vogelsangplatz");
        break;
    }
    case 320440:
    {
        returnValue = F("Vogelsangring");
        break;
    }
    case 320441:
    {
        returnValue = F("Vogelsangsberg");
        break;
    }
    case 320442:
    {
        returnValue = F("Vogelsangsfeld");
        break;
    }
    case 320443:
    {
        returnValue = F("Vogelsangsfuhren");
        break;
    }
    case 320444:
    {
        returnValue = F("Vogelsangskamp");
        break;
    }
    case 320445:
    {
        returnValue = F("Vogelsangsruh");
        break;
    }
    case 320446:
    {
        returnValue = F("Vogelsangstr.");
        break;
    }
    case 320447:
    {
        returnValue = F("Vogelsangweg");
        break;
    }
    case 320448:
    {
        returnValue = F("Vogelsangzwinger");
        break;
    }
    case 320449:
    {
        returnValue = F("Vogelsaue");
        break;
    }
    case 320450:
    {
        returnValue = F("Vogelsauer Treppe");
        break;
    }
    case 320451:
    {
        returnValue = F("Vogelsbach");
        break;
    }
    case 320452:
    {
        returnValue = F("Vogelsbaum");
        break;
    }
    case 320453:
    {
        returnValue = F("Vogelsberg");
        break;
    }
    case 320454:
    {
        returnValue = F("Vogelsbergblick");
        break;
    }
    case 320455:
    {
        returnValue = F("Vogelsberger Steige");
        break;
    }
    case 320456:
    {
        returnValue = F("Vogelsberger Str.");
        break;
    }
    case 320457:
    {
        returnValue = F("Vogelsbergerstr.");
        break;
    }
    case 320458:
    {
        returnValue = F("Vogelsbergring");
        break;
    }
    case 320459:
    {
        returnValue = F("Vogelsbergstr.");
        break;
    }
    case 320460:
    {
        returnValue = F("Vogelsbergweg");
        break;
    }
    case 320461:
    {
        returnValue = F("Vogelsbitze");
        break;
    }
    case 320462:
    {
        returnValue = F("Vogelsborn");
        break;
    }
    case 320463:
    {
        returnValue = F("Vogelsbruch");
        break;
    }
    case 320464:
    {
        returnValue = F("Vogelsbünden");
        break;
    }
    case 320465:
    {
        returnValue = F("Vogelsbüsch");
        break;
    }
    case 320466:
    {
        returnValue = F("Vogelschau");
        break;
    }
    case 320467:
    {
        returnValue = F("Vogelschlagstr.");
        break;
    }
    case 320468:
    {
        returnValue = F("Vogelschneise");
        break;
    }
    case 320469:
    {
        returnValue = F("Vogelschutz");
        break;
    }
    case 320470:
    {
        returnValue = F("Vogelschutzgebiet");
        break;
    }
    case 320471:
    {
        returnValue = F("Vogelschutzpfad");
        break;
    }
    case 320472:
    {
        returnValue = F("Vogelschutzstr.");
        break;
    }
    case 320473:
    {
        returnValue = F("Vogelsdorfer Platz");
        break;
    }
    case 320474:
    {
        returnValue = F("Vogelsdorfer Str.");
        break;
    }
    case 320475:
    {
        returnValue = F("Vogelsdorfer weg");
        break;
    }
    case 320476:
    {
        returnValue = F("Vogelseckweg");
        break;
    }
    case 320477:
    {
        returnValue = F("Vogelsgarten");
        break;
    }
    case 320478:
    {
        returnValue = F("Vogelsgartenstr.");
        break;
    }
    case 320479:
    {
        returnValue = F("Vogelsgasse");
        break;
    }
    case 320480:
    {
        returnValue = F("Vogelsgesang");
        break;
    }
    case 320481:
    {
        returnValue = F("Vogelsgesangweg");
        break;
    }
    case 320482:
    {
        returnValue = F("Vogelsgrund");
        break;
    }
    case 320483:
    {
        returnValue = F("Vogelsgrundweg");
        break;
    }
    case 320484:
    {
        returnValue = F("Vogelsgrüner Str.");
        break;
    }
    case 320485:
    {
        returnValue = F("Vogelsgrüner Weg");
        break;
    }
    case 320486:
    {
        returnValue = F("Vogelshaus");
        break;
    }
    case 320487:
    {
        returnValue = F("Vogelsheerd");
        break;
    }
    case 320488:
    {
        returnValue = F("Vogelsheide");
        break;
    }
    case 320489:
    {
        returnValue = F("Vogelsiepener Schneise");
        break;
    }
    case 320490:
    {
        returnValue = F("Vogelskamp");
        break;
    }
    case 320491:
    {
        returnValue = F("Vogelskaulerweg");
        break;
    }
    case 320492:
    {
        returnValue = F("Vogelskopf");
        break;
    }
    case 320493:
    {
        returnValue = F("Vogelskopfstr.");
        break;
    }
    case 320494:
    {
        returnValue = F("Vogelskopfweg");
        break;
    }
    case 320495:
    {
        returnValue = F("Vogelskothen");
        break;
    }
    case 320496:
    {
        returnValue = F("Vogelsleite");
        break;
    }
    case 320497:
    {
        returnValue = F("Vogelslohe");
        break;
    }
    case 320498:
    {
        returnValue = F("Vogelsmatt");
        break;
    }
    case 320499:
    {
        returnValue = F("Vogelsmühle");
        break;
    }
    case 320500:
    {
        returnValue = F("Vogelsprung");
        break;
    }
    case 320501:
    {
        returnValue = F("Vogelspur");
        break;
    }
    case 320502:
    {
        returnValue = F("Vogelsrath");
        break;
    }
    case 320503:
    {
        returnValue = F("Vogelsrauh");
        break;
    }
    case 320504:
    {
        returnValue = F("Vogelsruhweg");
        break;
    }
    case 320505:
    {
        returnValue = F("Vogelsruth");
        break;
    }
    case 320506:
    {
        returnValue = F("Vogelstang-Kreisel");
        break;
    }
    case 320507:
    {
        returnValue = F("Vogelstange");
        break;
    }
    case 320508:
    {
        returnValue = F("Vogelstangenberg");
        break;
    }
    case 320509:
    {
        returnValue = F("Vogelstangenweg");
        break;
    }
    case 320510:
    {
        returnValue = F("Vogelstation");
        break;
    }
    case 320511:
    {
        returnValue = F("Vogelsteig");
        break;
    }
    case 320512:
    {
        returnValue = F("Vogelsteige");
        break;
    }
    case 320513:
    {
        returnValue = F("Vogelsteinstr.");
        break;
    }
    case 320514:
    {
        returnValue = F("Vogelstellerweg");
        break;
    }
    case 320515:
    {
        returnValue = F("Vogelstiege");
        break;
    }
    case 320516:
    {
        returnValue = F("Vogelstr.");
        break;
    }
    case 320517:
    {
        returnValue = F("Vogelstromweg");
        break;
    }
    case 320518:
    {
        returnValue = F("Vogelsweg");
        break;
    }
    case 320519:
    {
        returnValue = F("Vogelswiesenweg");
        break;
    }
    case 320520:
    {
        returnValue = F("Vogelsänger Chaussee");
        break;
    }
    case 320521:
    {
        returnValue = F("Vogelsänger Str.");
        break;
    }
    case 320522:
    {
        returnValue = F("Vogelsänger Weg");
        break;
    }
    case 320523:
    {
        returnValue = F("Vogeltalstr.");
        break;
    }
    case 320524:
    {
        returnValue = F("Vogeltaufe");
        break;
    }
    case 320525:
    {
        returnValue = F("Vogelthenne");
        break;
    }
    case 320526:
    {
        returnValue = F("Vogelthennstr.");
        break;
    }
    case 320527:
    {
        returnValue = F("Vogeltäle");
        break;
    }
    case 320528:
    {
        returnValue = F("Vogelvoliere");
        break;
    }
    case 320529:
    {
        returnValue = F("Vogelwaidstr.");
        break;
    }
    case 320530:
    {
        returnValue = F("Vogelwald");
        break;
    }
    case 320531:
    {
        returnValue = F("Vogelwaldstr.");
        break;
    }
    case 320532:
    {
        returnValue = F("Vogelwarte");
        break;
    }
    case 320533:
    {
        returnValue = F("Vogelwartenweg");
        break;
    }
    case 320534:
    {
        returnValue = F("Vogelweg");
        break;
    }
    case 320535:
    {
        returnValue = F("Vogelweher Str.");
        break;
    }
    case 320536:
    {
        returnValue = F("Vogelweid");
        break;
    }
    case 320537:
    {
        returnValue = F("Vogelweide");
        break;
    }
    case 320538:
    {
        returnValue = F("Vogelweiderstr.");
        break;
    }
    case 320539:
    {
        returnValue = F("Vogelweiderweg");
        break;
    }
    case 320540:
    {
        returnValue = F("Vogelweidestr.");
        break;
    }
    case 320541:
    {
        returnValue = F("Vogelweidstr.");
        break;
    }
    case 320542:
    {
        returnValue = F("Vogelweige");
        break;
    }
    case 320543:
    {
        returnValue = F("Vogelweiherstr.");
        break;
    }
    case 320544:
    {
        returnValue = F("Vogelwiese");
        break;
    }
    case 320545:
    {
        returnValue = F("Vogelwiesen");
        break;
    }
    case 320546:
    {
        returnValue = F("Vogelwiesenstr.");
        break;
    }
    case 320547:
    {
        returnValue = F("Vogelwiesenweg");
        break;
    }
    case 320548:
    {
        returnValue = F("Vogelwiesweg");
        break;
    }
    case 320549:
    {
        returnValue = F("Vogelwinkel");
        break;
    }
    case 320550:
    {
        returnValue = F("Vogelwoogstr.");
        break;
    }
    case 320551:
    {
        returnValue = F("Vogelwäldchen");
        break;
    }
    case 320552:
    {
        returnValue = F("Vogelwäldeleweg");
        break;
    }
    case 320553:
    {
        returnValue = F("Vogelwäldlesweg");
        break;
    }
    case 320554:
    {
        returnValue = F("Vogelzipfel");
        break;
    }
    case 320555:
    {
        returnValue = F("Vogelzunge");
        break;
    }
    case 320556:
    {
        returnValue = F("Vogelödweg");
        break;
    }
    case 320557:
    {
        returnValue = F("Voges Garten");
        break;
    }
    case 320558:
    {
        returnValue = F("Vogesberg");
        break;
    }
    case 320559:
    {
        returnValue = F("Vogesen Str.");
        break;
    }
    case 320560:
    {
        returnValue = F("Vogesenallee");
        break;
    }
    case 320561:
    {
        returnValue = F("Vogesenblick");
        break;
    }
    case 320562:
    {
        returnValue = F("Vogesenbrücke");
        break;
    }
    case 320563:
    {
        returnValue = F("Vogesenring");
        break;
    }
    case 320564:
    {
        returnValue = F("Vogesenstr.");
        break;
    }
    case 320565:
    {
        returnValue = F("Vogesenweg");
        break;
    }
    case 320566:
    {
        returnValue = F("Vogeskamp");
        break;
    }
    case 320567:
    {
        returnValue = F("Vogesort");
        break;
    }
    case 320568:
    {
        returnValue = F("Vogesweg");
        break;
    }
    case 320569:
    {
        returnValue = F("Voggenberg");
        break;
    }
    case 320570:
    {
        returnValue = F("Voggenberger Weg");
        break;
    }
    case 320571:
    {
        returnValue = F("Voggenbergstr.");
        break;
    }
    case 320572:
    {
        returnValue = F("Voggendorf");
        break;
    }
    case 320573:
    {
        returnValue = F("Voggendorfer Weg");
        break;
    }
    case 320574:
    {
        returnValue = F("Voggenfeld");
        break;
    }
    case 320575:
    {
        returnValue = F("Voggenhof");
        break;
    }
    case 320576:
    {
        returnValue = F("Voggenhofer Str.");
        break;
    }
    case 320577:
    {
        returnValue = F("Voggenhofstr.");
        break;
    }
    case 320578:
    {
        returnValue = F("Voggenwaldweg");
        break;
    }
    case 320579:
    {
        returnValue = F("Voggenzeller Str.");
        break;
    }
    case 320580:
    {
        returnValue = F("Voglaicher Str.");
        break;
    }
    case 320581:
    {
        returnValue = F("Voglau");
        break;
    }
    case 320582:
    {
        returnValue = F("Voglberg");
        break;
    }
    case 320583:
    {
        returnValue = F("Vogldorn");
        break;
    }
    case 320584:
    {
        returnValue = F("Vogleck");
        break;
    }
    case 320585:
    {
        returnValue = F("Vogler Str.");
        break;
    }
    case 320586:
    {
        returnValue = F("Voglerblick");
        break;
    }
    case 320587:
    {
        returnValue = F("Voglergasse");
        break;
    }
    case 320588:
    {
        returnValue = F("Voglergrund");
        break;
    }
    case 320589:
    {
        returnValue = F("Voglerinweg");
        break;
    }
    case 320590:
    {
        returnValue = F("Voglersheck");
        break;
    }
    case 320591:
    {
        returnValue = F("Voglershäusle");
        break;
    }
    case 320592:
    {
        returnValue = F("Voglershäuslesträßchen");
        break;
    }
    case 320593:
    {
        returnValue = F("Voglerstr.");
        break;
    }
    case 320594:
    {
        returnValue = F("Voglerweg");
        break;
    }
    case 320595:
    {
        returnValue = F("Voglherdstr.");
        break;
    }
    case 320596:
    {
        returnValue = F("Voglherdweg");
        break;
    }
    case 320597:
    {
        returnValue = F("Voglhof");
        break;
    }
    case 320598:
    {
        returnValue = F("Voglinger Str.");
        break;
    }
    case 320599:
    {
        returnValue = F("Voglmeierstr.");
        break;
    }
    case 320600:
    {
        returnValue = F("Voglried");
        break;
    }
    case 320601:
    {
        returnValue = F("Voglsang");
        break;
    }
    case 320602:
    {
        returnValue = F("Voglweg");
        break;
    }
    case 320603:
    {
        returnValue = F("Voglöd");
        break;
    }
    case 320604:
    {
        returnValue = F("Vogskampen");
        break;
    }
    case 320605:
    {
        returnValue = F("Vogt's Mistweg");
        break;
    }
    case 320606:
    {
        returnValue = F("Vogt-Armbruster-Str.");
        break;
    }
    case 320607:
    {
        returnValue = F("Vogt-Dufner-Str.");
        break;
    }
    case 320608:
    {
        returnValue = F("Vogt-Ehinger-Str.");
        break;
    }
    case 320609:
    {
        returnValue = F("Vogt-Fierler-Str.");
        break;
    }
    case 320610:
    {
        returnValue = F("Vogt-Flaig-Str.");
        break;
    }
    case 320611:
    {
        returnValue = F("Vogt-Greber-Str.");
        break;
    }
    case 320612:
    {
        returnValue = F("Vogt-Greber-Weg");
        break;
    }
    case 320613:
    {
        returnValue = F("Vogt-Heß-Str.");
        break;
    }
    case 320614:
    {
        returnValue = F("Vogt-Jung-Str.");
        break;
    }
    case 320615:
    {
        returnValue = F("Vogt-Kistner-Str.");
        break;
    }
    case 320616:
    {
        returnValue = F("Vogt-Körner-Str.");
        break;
    }
    case 320617:
    {
        returnValue = F("Vogt-Meine-Pad");
        break;
    }
    case 320618:
    {
        returnValue = F("Vogt-Mühlstein-Ring");
        break;
    }
    case 320619:
    {
        returnValue = F("Vogt-Ramcke-Str.");
        break;
    }
    case 320620:
    {
        returnValue = F("Vogt-Sanmann-Weg");
        break;
    }
    case 320621:
    {
        returnValue = F("Vogt-Schmidt-Str.");
        break;
    }
    case 320622:
    {
        returnValue = F("Vogt-Schnyder-Weg");
        break;
    }
    case 320623:
    {
        returnValue = F("Vogt-Spittelmeister-Str.");
        break;
    }
    case 320624:
    {
        returnValue = F("Vogt-von-Belle-Platz");
        break;
    }
    case 320625:
    {
        returnValue = F("Vogtareuther Str.");
        break;
    }
    case 320626:
    {
        returnValue = F("Vogtbenediktweg");
        break;
    }
    case 320627:
    {
        returnValue = F("Vogtberg");
        break;
    }
    case 320628:
    {
        returnValue = F("Vogtei");
        break;
    }
    case 320629:
    {
        returnValue = F("Vogtei-Ruthe-Str.");
        break;
    }
    case 320630:
    {
        returnValue = F("Vogteier Platz");
        break;
    }
    case 320631:
    {
        returnValue = F("Vogteier Str.");
        break;
    }
    case 320632:
    {
        returnValue = F("Vogteier Weg");
        break;
    }
    case 320633:
    {
        returnValue = F("Vogteigang");
        break;
    }
    case 320634:
    {
        returnValue = F("Vogteigarten");
        break;
    }
    case 320635:
    {
        returnValue = F("Vogteiplatz");
        break;
    }
    case 320636:
    {
        returnValue = F("Vogteistr.");
        break;
    }
    case 320637:
    {
        returnValue = F("Vogteiwaldweg");
        break;
    }
    case 320638:
    {
        returnValue = F("Vogteiweg");
        break;
    }
    case 320639:
    {
        returnValue = F("Vogtendorf");
        break;
    }
    case 320640:
    {
        returnValue = F("Vogtengasse");
        break;
    }
    case 320641:
    {
        returnValue = F("Vogter Str.");
        break;
    }
    case 320642:
    {
        returnValue = F("Vogtgarten");
        break;
    }
    case 320643:
    {
        returnValue = F("Vogtgasse");
        break;
    }
    case 320644:
    {
        returnValue = F("Vogtherrstr.");
        break;
    }
    case 320645:
    {
        returnValue = F("Vogthoff");
        break;
    }
    case 320646:
    {
        returnValue = F("Vogtkamp");
        break;
    }
    case 320647:
    {
        returnValue = F("Vogtland");
        break;
    }
    case 320648:
    {
        returnValue = F("Vogtland-Panorama-Weg");
        break;
    }
    case 320649:
    {
        returnValue = F("Vogtlandblick");
        break;
    }
    case 320650:
    {
        returnValue = F("Vogtlandstr.");
        break;
    }
    case 320651:
    {
        returnValue = F("Vogtlandweg");
        break;
    }
    case 320652:
    {
        returnValue = F("Vogtländer Ring");
        break;
    }
    case 320653:
    {
        returnValue = F("Vogtländer Weg");
        break;
    }
    case 320654:
    {
        returnValue = F("Vogtmühle");
        break;
    }
    case 320655:
    {
        returnValue = F("Vogtpad");
        break;
    }
    case 320656:
    {
        returnValue = F("Vogts Busch");
        break;
    }
    case 320657:
    {
        returnValue = F("Vogts Teich");
        break;
    }
    case 320658:
    {
        returnValue = F("Vogtsbachweg");
        break;
    }
    case 320659:
    {
        returnValue = F("Vogtsbell");
        break;
    }
    case 320660:
    {
        returnValue = F("Vogtsbergstr.");
        break;
    }
    case 320661:
    {
        returnValue = F("Vogtsburger Str.");
        break;
    }
    case 320662:
    {
        returnValue = F("Vogtsebeneweg");
        break;
    }
    case 320663:
    {
        returnValue = F("Vogtsgarten");
        break;
    }
    case 320664:
    {
        returnValue = F("Vogtsgasse");
        break;
    }
    case 320665:
    {
        returnValue = F("Vogtsgehaustr.");
        break;
    }
    case 320666:
    {
        returnValue = F("Vogtsgrabenweg");
        break;
    }
    case 320667:
    {
        returnValue = F("Vogtshagen");
        break;
    }
    case 320668:
    {
        returnValue = F("Vogtshalde");
        break;
    }
    case 320669:
    {
        returnValue = F("Vogtshaldenstr.");
        break;
    }
    case 320670:
    {
        returnValue = F("Vogtshof");
        break;
    }
    case 320671:
    {
        returnValue = F("Vogtshofweg");
        break;
    }
    case 320672:
    {
        returnValue = F("Vogtsjörgehofweg");
        break;
    }
    case 320673:
    {
        returnValue = F("Vogtskamp");
        break;
    }
    case 320674:
    {
        returnValue = F("Vogtsmattenweg");
        break;
    }
    case 320675:
    {
        returnValue = F("Vogtsmühlenweg");
        break;
    }
    case 320676:
    {
        returnValue = F("Vogtsplatz");
        break;
    }
    case 320677:
    {
        returnValue = F("Vogtsreichenbacher Str.");
        break;
    }
    case 320678:
    {
        returnValue = F("Vogtsstr.");
        break;
    }
    case 320679:
    {
        returnValue = F("Vogtsstück");
        break;
    }
    case 320680:
    {
        returnValue = F("Vogtsteinweg");
        break;
    }
    case 320681:
    {
        returnValue = F("Vogtstiege");
        break;
    }
    case 320682:
    {
        returnValue = F("Vogtstorstr.");
        break;
    }
    case 320683:
    {
        returnValue = F("Vogtstr.");
        break;
    }
    case 320684:
    {
        returnValue = F("Vogtsvorstadt");
        break;
    }
    case 320685:
    {
        returnValue = F("Vogtsweg");
        break;
    }
    case 320686:
    {
        returnValue = F("Vogtswiesen");
        break;
    }
    case 320687:
    {
        returnValue = F("Vogtswinkel");
        break;
    }
    case 320688:
    {
        returnValue = F("Vogtweg");
        break;
    }
    case 320689:
    {
        returnValue = F("Vogtwiesweg");
        break;
    }
    case 320690:
    {
        returnValue = F("Vogtäcker");
        break;
    }
    case 320691:
    {
        returnValue = F("Vohbachweg");
        break;
    }
    case 320692:
    {
        returnValue = F("Vohbergerstr.");
        break;
    }
    case 320693:
    {
        returnValue = F("Vohbergstr.");
        break;
    }
    case 320694:
    {
        returnValue = F("Vohbergweg");
        break;
    }
    case 320695:
    {
        returnValue = F("Vohburger Str.");
        break;
    }
    case 320696:
    {
        returnValue = F("Vohburger Weg");
        break;
    }
    case 320697:
    {
        returnValue = F("Vohbühlweg");
        break;
    }
    case 320698:
    {
        returnValue = F("Vohenburgerstr.");
        break;
    }
    case 320699:
    {
        returnValue = F("Vohenloher Str.");
        break;
    }
    case 320700:
    {
        returnValue = F("Vohenstein");
        break;
    }
    case 320701:
    {
        returnValue = F("Vohensteinweg");
        break;
    }
    case 320702:
    {
        returnValue = F("Vohenstraußer Str.");
        break;
    }
    case 320703:
    {
        returnValue = F("Vohklingenweg");
        break;
    }
    case 320704:
    {
        returnValue = F("Vohlenstr.");
        break;
    }
    case 320705:
    {
        returnValue = F("Vohlhauser Weg");
        break;
    }
    case 320706:
    {
        returnValue = F("Vohlstr.");
        break;
    }
    case 320707:
    {
        returnValue = F("Vohnenstr.");
        break;
    }
    case 320708:
    {
        returnValue = F("Vohren");
        break;
    }
    case 320709:
    {
        returnValue = F("Vohrener Str.");
        break;
    }
    case 320710:
    {
        returnValue = F("Vohrener Weg");
        break;
    }
    case 320711:
    {
        returnValue = F("Vohrenkamp");
        break;
    }
    case 320712:
    {
        returnValue = F("Vohrlingen");
        break;
    }
    case 320713:
    {
        returnValue = F("Vohwinkelallee");
        break;
    }
    case 320714:
    {
        returnValue = F("Vohwinkeler Feld");
        break;
    }
    case 320715:
    {
        returnValue = F("Vohwinkeler Str.");
        break;
    }
    case 320716:
    {
        returnValue = F("Vohwinkelshof");
        break;
    }
    case 320717:
    {
        returnValue = F("Vohwinkelstr.");
        break;
    }
    case 320718:
    {
        returnValue = F("Voigdehagen");
        break;
    }
    case 320719:
    {
        returnValue = F("Voigdehäger Weg");
        break;
    }
    case 320720:
    {
        returnValue = F("Voigendorf");
        break;
    }
    case 320721:
    {
        returnValue = F("Voigtding");
        break;
    }
    case 320722:
    {
        returnValue = F("Voigtdinger Geest");
        break;
    }
    case 320723:
    {
        returnValue = F("Voigtei");
        break;
    }
    case 320724:
    {
        returnValue = F("Voigtei-Heide");
        break;
    }
    case 320725:
    {
        returnValue = F("Voigten");
        break;
    }
    case 320726:
    {
        returnValue = F("Voigtgasse");
        break;
    }
    case 320727:
    {
        returnValue = F("Voigthainweg");
        break;
    }
    case 320728:
    {
        returnValue = F("Voigtkamp");
        break;
    }
    case 320729:
    {
        returnValue = F("Voigtlaidener Str.");
        break;
    }
    case 320730:
    {
        returnValue = F("Voigtlaider Str.");
        break;
    }
    case 320731:
    {
        returnValue = F("Voigtländer-Weg");
        break;
    }
    case 320732:
    {
        returnValue = F("Voigtländerstr.");
        break;
    }
    case 320733:
    {
        returnValue = F("Voigtmannbrücke");
        break;
    }
    case 320734:
    {
        returnValue = F("Voigtplatz");
        break;
    }
    case 320735:
    {
        returnValue = F("Voigts-Rhetz-Str.");
        break;
    }
    case 320736:
    {
        returnValue = F("Voigtsberger Str.");
        break;
    }
    case 320737:
    {
        returnValue = F("Voigtsdahlumer Str.");
        break;
    }
    case 320738:
    {
        returnValue = F("Voigtsdorf");
        break;
    }
    case 320739:
    {
        returnValue = F("Voigtsdorfer Str.");
        break;
    }
    case 320740:
    {
        returnValue = F("Voigtsdorfer Weg");
        break;
    }
    case 320741:
    {
        returnValue = F("Voigtsfeld");
        break;
    }
    case 320742:
    {
        returnValue = F("Voigtsgrüner Str.");
        break;
    }
    case 320743:
    {
        returnValue = F("Voigtsgrüner Weg");
        break;
    }
    case 320744:
    {
        returnValue = F("Voigtshainer Str.");
        break;
    }
    case 320745:
    {
        returnValue = F("Voigtshof");
        break;
    }
    case 320746:
    {
        returnValue = F("Voigtshofer Allee");
        break;
    }
    case 320747:
    {
        returnValue = F("Voigtskamp");
        break;
    }
    case 320748:
    {
        returnValue = F("Voigtslach");
        break;
    }
    case 320749:
    {
        returnValue = F("Voigtsmauer");
        break;
    }
    case 320750:
    {
        returnValue = F("Voigtsmühle");
        break;
    }
    case 320751:
    {
        returnValue = F("Voigtsstr.");
        break;
    }
    case 320752:
    {
        returnValue = F("Voigtstedter Str.");
        break;
    }
    case 320753:
    {
        returnValue = F("Voigtstedter Weg");
        break;
    }
    case 320754:
    {
        returnValue = F("Voigtstieg");
        break;
    }
    case 320755:
    {
        returnValue = F("Voigtstr.");
        break;
    }
    case 320756:
    {
        returnValue = F("Voigtsweg");
        break;
    }
    case 320757:
    {
        returnValue = F("Voigtswiese");
        break;
    }
    case 320758:
    {
        returnValue = F("Voigtweg");
        break;
    }
    case 320759:
    {
        returnValue = F("Voigtwiese");
        break;
    }
    case 320760:
    {
        returnValue = F("Voisberger Weg");
        break;
    }
    case 320761:
    {
        returnValue = F("Voisheider Weg");
        break;
    }
    case 320762:
    {
        returnValue = F("Voisholz");
        break;
    }
    case 320763:
    {
        returnValue = F("Voiskülheim");
        break;
    }
    case 320764:
    {
        returnValue = F("Voislöhe");
        break;
    }
    case 320765:
    {
        returnValue = F("Voisweg");
        break;
    }
    case 320766:
    {
        returnValue = F("Voiswinkeler Str.");
        break;
    }
    case 320767:
    {
        returnValue = F("Voit-von-Rieneck-Str.");
        break;
    }
    case 320768:
    {
        returnValue = F("Voitenthan");
        break;
    }
    case 320769:
    {
        returnValue = F("Voiter Str.");
        break;
    }
    case 320770:
    {
        returnValue = F("Voithenberg");
        break;
    }
    case 320771:
    {
        returnValue = F("Voithenbergstr.");
        break;
    }
    case 320772:
    {
        returnValue = F("Voithsteg");
        break;
    }
    case 320773:
    {
        returnValue = F("Voithstr.");
        break;
    }
    case 320774:
    {
        returnValue = F("Voitlweg");
        break;
    }
    case 320775:
    {
        returnValue = F("Voitmannsdorf");
        break;
    }
    case 320776:
    {
        returnValue = F("Voitsberg");
        break;
    }
    case 320777:
    {
        returnValue = F("Voitsried");
        break;
    }
    case 320778:
    {
        returnValue = F("Voitstr.");
        break;
    }
    case 320779:
    {
        returnValue = F("Voitsumra");
        break;
    }
    case 320780:
    {
        returnValue = F("Voitweg");
        break;
    }
    case 320781:
    {
        returnValue = F("Voitzer Weg");
        break;
    }
    case 320782:
    {
        returnValue = F("Voißberg");
        break;
    }
    case 320783:
    {
        returnValue = F("Voißeler Str.");
        break;
    }
    case 320784:
    {
        returnValue = F("Vojensring");
        break;
    }
    case 320785:
    {
        returnValue = F("Vokkenaustr.");
        break;
    }
    case 320786:
    {
        returnValue = F("Vokkenhäldeweg");
        break;
    }
    case 320787:
    {
        returnValue = F("Volapükweg");
        break;
    }
    case 320788:
    {
        returnValue = F("Volbacher Berg");
        break;
    }
    case 320789:
    {
        returnValue = F("Volbachstr.");
        break;
    }
    case 320790:
    {
        returnValue = F("Volbachweg");
        break;
    }
    case 320791:
    {
        returnValue = F("Volbedingstr.");
        break;
    }
    case 320792:
    {
        returnValue = F("Volbehrstr.");
        break;
    }
    case 320793:
    {
        returnValue = F("Volberg");
        break;
    }
    case 320794:
    {
        returnValue = F("Volberger Str.");
        break;
    }
    case 320795:
    {
        returnValue = F("Volberskroog");
        break;
    }
    case 320796:
    {
        returnValue = F("Volbertskamp");
        break;
    }
    case 320797:
    {
        returnValue = F("Volbrexener Str.");
        break;
    }
    case 320798:
    {
        returnValue = F("Volcanusweg");
        break;
    }
    case 320799:
    {
        returnValue = F("Volchlinstr.");
        break;
    }
    case 320800:
    {
        returnValue = F("Volckamerplatz");
        break;
    }
    case 320801:
    {
        returnValue = F("Volckamerstr.");
        break;
    }
    case 320802:
    {
        returnValue = F("Volckmarstr.");
        break;
    }
    case 320803:
    {
        returnValue = F("Voldagsen");
        break;
    }
    case 320804:
    {
        returnValue = F("Voldewraaer Str.");
        break;
    }
    case 320805:
    {
        returnValue = F("Volenspitweg");
        break;
    }
    case 320806:
    {
        returnValue = F("Volgelsheimer Str.");
        break;
    }
    case 320807:
    {
        returnValue = F("Volgers Weg");
        break;
    }
    case 320808:
    {
        returnValue = F("Volgersbrunnenweg");
        break;
    }
    case 320809:
    {
        returnValue = F("Volgershall");
        break;
    }
    case 320810:
    {
        returnValue = F("Volgerstr.");
        break;
    }
    case 320811:
    {
        returnValue = F("Volgersweg");
        break;
    }
    case 320812:
    {
        returnValue = F("Volgerwiesenstr.");
        break;
    }
    case 320813:
    {
        returnValue = F("Volgfelder Dorfstr.");
        break;
    }
    case 320814:
    {
        returnValue = F("Volgfelder Mühlenstr.");
        break;
    }
    case 320815:
    {
        returnValue = F("Volgfelder Str.");
        break;
    }
    case 320816:
    {
        returnValue = F("Volhardstr.");
        break;
    }
    case 320817:
    {
        returnValue = F("Voliere");
        break;
    }
    case 320818:
    {
        returnValue = F("Volk-Weg");
        break;
    }
    case 320819:
    {
        returnValue = F("Volkacher Str.");
        break;
    }
    case 320820:
    {
        returnValue = F("Volkachstr.");
        break;
    }
    case 320821:
    {
        returnValue = F("Volkardeyer Str.");
        break;
    }
    case 320822:
    {
        returnValue = F("Volkardeyer Weg");
        break;
    }
    case 320823:
    {
        returnValue = F("Volkartshainer Str.");
        break;
    }
    case 320824:
    {
        returnValue = F("Volkartshainer Strasse");
        break;
    }
    case 320825:
    {
        returnValue = F("Volkartshainer Weg");
        break;
    }
    case 320826:
    {
        returnValue = F("Volkenbachstr.");
        break;
    }
    case 320827:
    {
        returnValue = F("Volkenbachweg");
        break;
    }
    case 320828:
    {
        returnValue = F("Volkenbergstr.");
        break;
    }
    case 320829:
    {
        returnValue = F("Volkeningstr.");
        break;
    }
    case 320830:
    {
        returnValue = F("Volkeningweg");
        break;
    }
    case 320831:
    {
        returnValue = F("Volkenkamp");
        break;
    }
    case 320832:
    {
        returnValue = F("Volkenrather Str.");
        break;
    }
    case 320833:
    {
        returnValue = F("Volkenroda-Str.");
        break;
    }
    case 320834:
    {
        returnValue = F("Volkenrodaer Str.");
        break;
    }
    case 320835:
    {
        returnValue = F("Volkenrodaer Weg");
        break;
    }
    case 320836:
    {
        returnValue = F("Volkenroder Weg");
        break;
    }
    case 320837:
    {
        returnValue = F("Volkenröder Str.");
        break;
    }
    case 320838:
    {
        returnValue = F("Volkenschwander Str.");
        break;
    }
    case 320839:
    {
        returnValue = F("Volkenser Weg");
        break;
    }
    case 320840:
    {
        returnValue = F("Volkenskopfweg");
        break;
    }
    case 320841:
    {
        returnValue = F("Volker-Ammann-Weg");
        break;
    }
    case 320842:
    {
        returnValue = F("Volker-Boehringer-Weg");
        break;
    }
    case 320843:
    {
        returnValue = F("Volker-Coiter-Str.");
        break;
    }
    case 320844:
    {
        returnValue = F("Volkerbachstr.");
        break;
    }
    case 320845:
    {
        returnValue = F("Volkers");
        break;
    }
    case 320846:
    {
        returnValue = F("Volkers Hof");
        break;
    }
    case 320847:
    {
        returnValue = F("Volkers Kamp");
        break;
    }
    case 320848:
    {
        returnValue = F("Volkersbachweg");
        break;
    }
    case 320849:
    {
        returnValue = F("Volkersberger Weg");
        break;
    }
    case 320850:
    {
        returnValue = F("Volkersbergstr.");
        break;
    }
    case 320851:
    {
        returnValue = F("Volkersbergweg");
        break;
    }
    case 320852:
    {
        returnValue = F("Volkersbrunner Str.");
        break;
    }
    case 320853:
    {
        returnValue = F("Volkersbrunner Weg");
        break;
    }
    case 320854:
    {
        returnValue = F("Volkersdorfer Str.");
        break;
    }
    case 320855:
    {
        returnValue = F("Volkersdorfer Weg");
        break;
    }
    case 320856:
    {
        returnValue = F("Volkerser Str.");
        break;
    }
    case 320857:
    {
        returnValue = F("Volkershausener Str.");
        break;
    }
    case 320858:
    {
        returnValue = F("Volkersheimer Grenzweg");
        break;
    }
    case 320859:
    {
        returnValue = F("Volkersheimer Stieg");
        break;
    }
    case 320860:
    {
        returnValue = F("Volkersheimer Str.");
        break;
    }
    case 320861:
    {
        returnValue = F("Volkershäuser Str.");
        break;
    }
    case 320862:
    {
        returnValue = F("Volkerskircher Weg");
        break;
    }
    case 320863:
    {
        returnValue = F("Volkerspachweg");
        break;
    }
    case 320864:
    {
        returnValue = F("Volkersstieg");
        break;
    }
    case 320865:
    {
        returnValue = F("Volkerstal");
        break;
    }
    case 320866:
    {
        returnValue = F("Volkerstr.");
        break;
    }
    case 320867:
    {
        returnValue = F("Volkersweg");
        break;
    }
    case 320868:
    {
        returnValue = F("Volkert-Ady-Weg");
        break;
    }
    case 320869:
    {
        returnValue = F("Volkert-Quedens-Str.");
        break;
    }
    case 320870:
    {
        returnValue = F("Volkertshofener Str.");
        break;
    }
    case 320871:
    {
        returnValue = F("Volkertsweiler");
        break;
    }
    case 320872:
    {
        returnValue = F("Volkertswiesenweg");
        break;
    }
    case 320873:
    {
        returnValue = F("Volkertweg");
        break;
    }
    case 320874:
    {
        returnValue = F("Volkerweg");
        break;
    }
    case 320875:
    {
        returnValue = F("Volkerzer Str.");
        break;
    }
    case 320876:
    {
        returnValue = F("Volkerzer Weg");
        break;
    }
    case 320877:
    {
        returnValue = F("Volkesberg");
        break;
    }
    case 320878:
    {
        returnValue = F("Volkeshaus");
        break;
    }
    case 320879:
    {
        returnValue = F("Volkfeldstr.");
        break;
    }
    case 320880:
    {
        returnValue = F("Volkhardinghäuser Str.");
        break;
    }
    case 320881:
    {
        returnValue = F("Volkhardstr.");
        break;
    }
    case 320882:
    {
        returnValue = F("Volkhardtstr.");
        break;
    }
    case 320883:
    {
        returnValue = F("Volkhardweg");
        break;
    }
    case 320884:
    {
        returnValue = F("Volkhartstr.");
        break;
    }
    case 320885:
    {
        returnValue = F("Volkhausenstr.");
        break;
    }
    case 320886:
    {
        returnValue = F("Volkhausenweg");
        break;
    }
    case 320887:
    {
        returnValue = F("Volkholzer Str.");
        break;
    }
    case 320888:
    {
        returnValue = F("Volkmann-Str.");
        break;
    }
    case 320889:
    {
        returnValue = F("Volkmanns Weg");
        break;
    }
    case 320890:
    {
        returnValue = F("Volkmannsgrün");
        break;
    }
    case 320891:
    {
        returnValue = F("Volkmannshäuser Dorfstr.");
        break;
    }
    case 320892:
    {
        returnValue = F("Volkmannshäuser Str.");
        break;
    }
    case 320893:
    {
        returnValue = F("Volkmannstr.");
        break;
    }
    case 320894:
    {
        returnValue = F("Volkmar-Kroll-Str.");
        break;
    }
    case 320895:
    {
        returnValue = F("Volkmar-Stoy-Str.");
        break;
    }
    case 320896:
    {
        returnValue = F("Volkmar-von-Kemnat-Str.");
        break;
    }
    case 320897:
    {
        returnValue = F("Volkmaritzer Hauptstr.");
        break;
    }
    case 320898:
    {
        returnValue = F("Volkmaroder Str.");
        break;
    }
    case 320899:
    {
        returnValue = F("Volkmarsbergstr.");
        break;
    }
    case 320900:
    {
        returnValue = F("Volkmarsbergweg");
        break;
    }
    case 320901:
    {
        returnValue = F("Volkmarsdorfer Str.");
        break;
    }
    case 320902:
    {
        returnValue = F("Volkmarsdorfer Weg");
        break;
    }
    case 320903:
    {
        returnValue = F("Volkmarsener Platz");
        break;
    }
    case 320904:
    {
        returnValue = F("Volkmarser Str.");
        break;
    }
    case 320905:
    {
        returnValue = F("Volkmarser Weg");
        break;
    }
    case 320906:
    {
        returnValue = F("Volkmarshäuser Str.");
        break;
    }
    case 320907:
    {
        returnValue = F("Volkmarster Str.");
        break;
    }
    case 320908:
    {
        returnValue = F("Volkmarstr.");
        break;
    }
    case 320909:
    {
        returnValue = F("Volkmarsweg");
        break;
    }
    case 320910:
    {
        returnValue = F("Volkmarweg");
        break;
    }
    case 320911:
    {
        returnValue = F("Volkowenweg");
        break;
    }
    case 320912:
    {
        returnValue = F("Volkrading");
        break;
    }
    case 320913:
    {
        returnValue = F("Volkram-Anton-Scharf-Weg");
        break;
    }
    case 320914:
    {
        returnValue = F("Volkratshofer Weg");
        break;
    }
    case 320915:
    {
        returnValue = F("Volkringhauser Weg");
        break;
    }
    case 320916:
    {
        returnValue = F("Volksbadstr.");
        break;
    }
    case 320917:
    {
        returnValue = F("Volksbank-Passage");
        break;
    }
    case 320918:
    {
        returnValue = F("Volksbankbrücke");
        break;
    }
    case 320919:
    {
        returnValue = F("Volksbankwiese");
        break;
    }
    case 320920:
    {
        returnValue = F("Volksbundstr.");
        break;
    }
    case 320921:
    {
        returnValue = F("Volksdorf");
        break;
    }
    case 320922:
    {
        returnValue = F("Volksdorfer Weg");
        break;
    }
    case 320923:
    {
        returnValue = F("Volkser Str.");
        break;
    }
    case 320924:
    {
        returnValue = F("Volkser Weg");
        break;
    }
    case 320925:
    {
        returnValue = F("Volksfestplatz");
        break;
    }
    case 320926:
    {
        returnValue = F("Volksgarten");
        break;
    }
    case 320927:
    {
        returnValue = F("Volksgarten Bövinghausen");
        break;
    }
    case 320928:
    {
        returnValue = F("Volksgarten Eickel");
        break;
    }
    case 320929:
    {
        returnValue = F("Volksgarten Lütgendortmund");
        break;
    }
    case 320930:
    {
        returnValue = F("Volksgartenstr.");
        break;
    }
    case 320931:
    {
        returnValue = F("Volksgartenweg");
        break;
    }
    case 320932:
    {
        returnValue = F("Volksgasse");
        break;
    }
    case 320933:
    {
        returnValue = F("Volksgut");
        break;
    }
    case 320934:
    {
        returnValue = F("Volksgut Riesa-Göhlis");
        break;
    }
    case 320935:
    {
        returnValue = F("Volksgutstr.");
        break;
    }
    case 320936:
    {
        returnValue = F("Volksgutweg");
        break;
    }
    case 320937:
    {
        returnValue = F("Volksgäßle");
        break;
    }
    case 320938:
    {
        returnValue = F("Volkshausen");
        break;
    }
    case 320939:
    {
        returnValue = F("Volkshauspark");
        break;
    }
    case 320940:
    {
        returnValue = F("Volkshausstr.");
        break;
    }
    case 320941:
    {
        returnValue = F("Volkshof");
        break;
    }
    case 320942:
    {
        returnValue = F("Volkskamp");
        break;
    }
    case 320943:
    {
        returnValue = F("Volkslaufweg");
        break;
    }
    case 320944:
    {
        returnValue = F("Volksloh");
        break;
    }
    case 320945:
    {
        returnValue = F("Volkspark");
        break;
    }
    case 320946:
    {
        returnValue = F("Volkspark Aschendorf");
        break;
    }
    case 320947:
    {
        returnValue = F("Volkspark Gehaus");
        break;
    }
    case 320948:
    {
        returnValue = F("Volkspark Gerthe");
        break;
    }
    case 320949:
    {
        returnValue = F("Volkspark Großböhla");
        break;
    }
    case 320950:
    {
        returnValue = F("Volkspark Langendreer");
        break;
    }
    case 320951:
    {
        returnValue = F("Volkspark Marienberg");
        break;
    }
    case 320952:
    {
        returnValue = F("Volkspark Niddatal");
        break;
    }
    case 320953:
    {
        returnValue = F("Volkspark Potsdam");
        break;
    }
    case 320954:
    {
        returnValue = F("Volkspark Rheinhausen");
        break;
    }
    case 320955:
    {
        returnValue = F("Volkspark Räcknitz");
        break;
    }
    case 320956:
    {
        returnValue = F("Volkspark Schwelgern");
        break;
    }
    case 320957:
    {
        returnValue = F("Volkspark Sterkrade");
        break;
    }
    case 320958:
    {
        returnValue = F("Volkspark Uhyst");
        break;
    }
    case 320959:
    {
        returnValue = F("Volksschulweg");
        break;
    }
    case 320960:
    {
        returnValue = F("Volksstegweg");
        break;
    }
    case 320961:
    {
        returnValue = F("Volksstr.");
        break;
    }
    case 320962:
    {
        returnValue = F("Volkstedter Weg");
        break;
    }
    case 320963:
    {
        returnValue = F("Volkswohlstr.");
        break;
    }
    case 320964:
    {
        returnValue = F("Volkwardingen");
        break;
    }
    case 320965:
    {
        returnValue = F("Volkwardinger Str.");
        break;
    }
    case 320966:
    {
        returnValue = F("Volkweg");
        break;
    }
    case 320967:
    {
        returnValue = F("Volkweinstr.");
        break;
    }
    case 320968:
    {
        returnValue = F("Volkwiger Str.");
        break;
    }
    case 320969:
    {
        returnValue = F("Volkwinhalde");
        break;
    }
    case 320970:
    {
        returnValue = F("Volkwinstr.");
        break;
    }
    case 320971:
    {
        returnValue = F("Volkwinsweg");
        break;
    }
    case 320972:
    {
        returnValue = F("Volkwinweg");
        break;
    }
    case 320973:
    {
        returnValue = F("Volkwortstr.");
        break;
    }
    case 320974:
    {
        returnValue = F("Vollandgasse");
        break;
    }
    case 320975:
    {
        returnValue = F("Vollandsgässchen");
        break;
    }
    case 320976:
    {
        returnValue = F("Vollandstr.");
        break;
    }
    case 320977:
    {
        returnValue = F("Vollauf");
        break;
    }
    case 320978:
    {
        returnValue = F("Vollbach");
        break;
    }
    case 320979:
    {
        returnValue = F("Vollbergstr.");
        break;
    }
    case 320980:
    {
        returnValue = F("Vollbrachtstr.");
        break;
    }
    case 320981:
    {
        returnValue = F("Vollbrechtstr.");
        break;
    }
    case 320982:
    {
        returnValue = F("Vollbruchstr.");
        break;
    }
    case 320983:
    {
        returnValue = F("Vollburgstr.");
        break;
    }
    case 320984:
    {
        returnValue = F("Vollemer Weg");
        break;
    }
    case 320985:
    {
        returnValue = F("Vollenbrok");
        break;
    }
    case 320986:
    {
        returnValue = F("Vollenhover Weg");
        break;
    }
    case 320987:
    {
        returnValue = F("Vollenschierer Weg");
        break;
    }
    case 320988:
    {
        returnValue = F("Vollenstr.");
        break;
    }
    case 320989:
    {
        returnValue = F("Vollenweiderweg");
        break;
    }
    case 320990:
    {
        returnValue = F("Vollersdorfer Str.");
        break;
    }
    case 320991:
    {
        returnValue = F("Vollershagen");
        break;
    }
    case 320992:
    {
        returnValue = F("Vollersoder Kirchweg");
        break;
    }
    case 320993:
    {
        returnValue = F("Vollersoder Str.");
        break;
    }
    case 320994:
    {
        returnValue = F("Vollersrodaer Str.");
        break;
    }
    case 320995:
    {
        returnValue = F("Vollersstr.");
        break;
    }
    case 320996:
    {
        returnValue = F("Vollersweg");
        break;
    }
    case 320997:
    {
        returnValue = F("Volleschweg");
        break;
    }
    case 320998:
    {
        returnValue = F("Volleulenweg");
        break;
    }
    case 320999:
    {
        returnValue = F("Vollhardtstr.");
        break;
    }
    case 321000:
    {
        returnValue = F("Vollhofstr.");
        break;
    }
    case 321001:
    {
        returnValue = F("Vollingstr.");
        break;
    }
    case 321002:
    {
        returnValue = F("Volllochweg");
        break;
    }
    case 321003:
    {
        returnValue = F("Vollmachttweute");
        break;
    }
    case 321004:
    {
        returnValue = F("Vollmaringer Str.");
        break;
    }
    case 321005:
    {
        returnValue = F("Vollmaringer Weg");
        break;
    }
    case 321006:
    {
        returnValue = F("Vollmarsgasse");
        break;
    }
    case 321007:
    {
        returnValue = F("Vollmarshäuser Str.");
        break;
    }
    case 321008:
    {
        returnValue = F("Vollmarstr.");
        break;
    }
    case 321009:
    {
        returnValue = F("Vollmarweg");
        break;
    }
    case 321010:
    {
        returnValue = F("Vollmauer Str.");
        break;
    }
    case 321011:
    {
        returnValue = F("Vollmeierweg");
        break;
    }
    case 321012:
    {
        returnValue = F("Vollmerhausener Weg");
        break;
    }
    case 321013:
    {
        returnValue = F("Vollmerhauser Str.");
        break;
    }
    case 321014:
    {
        returnValue = F("Vollmers Kamp");
        break;
    }
    case 321015:
    {
        returnValue = F("Vollmers Padd");
        break;
    }
    case 321016:
    {
        returnValue = F("Vollmersbach");
        break;
    }
    case 321017:
    {
        returnValue = F("Vollmersbachstr.");
        break;
    }
    case 321018:
    {
        returnValue = F("Vollmersbergweg");
        break;
    }
    case 321019:
    {
        returnValue = F("Vollmersdorfer Str.");
        break;
    }
    case 321020:
    {
        returnValue = F("Vollmerseckstr.");
        break;
    }
    case 321021:
    {
        returnValue = F("Vollmerskamp");
        break;
    }
    case 321022:
    {
        returnValue = F("Vollmersstr.");
        break;
    }
    case 321023:
    {
        returnValue = F("Vollmerstr.");
        break;
    }
    case 321024:
    {
        returnValue = F("Vollmersweg");
        break;
    }
    case 321025:
    {
        returnValue = F("Vollmersweilerer Str.");
        break;
    }
    case 321026:
    {
        returnValue = F("Vollmert");
        break;
    }
    case 321027:
    {
        returnValue = F("Vollmertstr.");
        break;
    }
    case 321028:
    {
        returnValue = F("Vollmerweg");
        break;
    }
    case 321029:
    {
        returnValue = F("Vollmestr.");
        break;
    }
    case 321030:
    {
        returnValue = F("Vollmich");
        break;
    }
    case 321031:
    {
        returnValue = F("Vollmoellerstr.");
        break;
    }
    case 321032:
    {
        returnValue = F("Vollmondstr.");
        break;
    }
    case 321033:
    {
        returnValue = F("Vollmühle");
        break;
    }
    case 321034:
    {
        returnValue = F("Vollmühlenweg");
        break;
    }
    case 321035:
    {
        returnValue = F("Vollmüllerstr.");
        break;
    }
    case 321036:
    {
        returnValue = F("Vollnbacher Str.");
        break;
    }
    case 321037:
    {
        returnValue = F("Vollnkirchener Str.");
        break;
    }
    case 321038:
    {
        returnValue = F("Vollochstr.");
        break;
    }
    case 321039:
    {
        returnValue = F("Vollochweg");
        break;
    }
    case 321040:
    {
        returnValue = F("Vollohweg");
        break;
    }
    case 321041:
    {
        returnValue = F("Vollradser Allee");
        break;
    }
    case 321042:
    {
        returnValue = F("Vollrath-Müller-Str.");
        break;
    }
    case 321043:
    {
        returnValue = F("Vollrather Str.");
        break;
    }
    case 321044:
    {
        returnValue = F("Vollrather Weg");
        break;
    }
    case 321045:
    {
        returnValue = F("Vollrathsgasse");
        break;
    }
    case 321046:
    {
        returnValue = F("Vollrathskamp");
        break;
    }
    case 321047:
    {
        returnValue = F("Vollrathstr.");
        break;
    }
    case 321048:
    {
        returnValue = F("Vollrathsweg");
        break;
    }
    case 321049:
    {
        returnValue = F("Vollsackstr.");
        break;
    }
    case 321050:
    {
        returnValue = F("Vollstedter Str.");
        break;
    }
    case 321051:
    {
        returnValue = F("Vollstedter Weg");
        break;
    }
    case 321052:
    {
        returnValue = F("Volltuchweg");
        break;
    }
    case 321053:
    {
        returnValue = F("Vollungstr.");
        break;
    }
    case 321054:
    {
        returnValue = F("Vollweidstr.");
        break;
    }
    case 321055:
    {
        returnValue = F("Volmaristr.");
        break;
    }
    case 321056:
    {
        returnValue = F("Volmarsteiner Str.");
        break;
    }
    case 321057:
    {
        returnValue = F("Volmarsteinweg");
        break;
    }
    case 321058:
    {
        returnValue = F("Volmarstr.");
        break;
    }
    case 321059:
    {
        returnValue = F("Volmarweg");
        break;
    }
    case 321060:
    {
        returnValue = F("Volme-Freizeitpark");
        break;
    }
    case 321061:
    {
        returnValue = F("Volmehang");
        break;
    }
    case 321062:
    {
        returnValue = F("Volmerdingsener Str.");
        break;
    }
    case 321063:
    {
        returnValue = F("Volmers Kamp");
        break;
    }
    case 321064:
    {
        returnValue = F("Volmersbacher Kirchweg");
        break;
    }
    case 321065:
    {
        returnValue = F("Volmerswerther Deich");
        break;
    }
    case 321066:
    {
        returnValue = F("Volmerswerther Str.");
        break;
    }
    case 321067:
    {
        returnValue = F("Volmestr.");
        break;
    }
    case 321068:
    {
        returnValue = F("Volmeweg");
        break;
    }
    case 321069:
    {
        returnValue = F("Volminghof");
        break;
    }
    case 321070:
    {
        returnValue = F("Volmser Heide");
        break;
    }
    case 321071:
    {
        returnValue = F("Volmser Heidkamp");
        break;
    }
    case 321072:
    {
        returnValue = F("Volmserloh");
        break;
    }
    case 321073:
    {
        returnValue = F("Volnsberger Str.");
        break;
    }
    case 321074:
    {
        returnValue = F("Volnsberger Weg");
        break;
    }
    case 321075:
    {
        returnValue = F("Volpenhennstr.");
        break;
    }
    case 321076:
    {
        returnValue = F("Volperstr.");
        break;
    }
    case 321077:
    {
        returnValue = F("Volpertshäuser Str.");
        break;
    }
    case 321078:
    {
        returnValue = F("Volpertstr.");
        break;
    }
    case 321079:
    {
        returnValue = F("Volpertstriesch");
        break;
    }
    case 321080:
    {
        returnValue = F("Volprechtstr.");
        break;
    }
    case 321081:
    {
        returnValue = F("Volpriehäuser Str.");
        break;
    }
    case 321082:
    {
        returnValue = F("Volquart-Pauls-Str.");
        break;
    }
    case 321083:
    {
        returnValue = F("Volquartzdamm");
        break;
    }
    case 321084:
    {
        returnValue = F("Volsemenhusen");
        break;
    }
    case 321085:
    {
        returnValue = F("Volsenhusen");
        break;
    }
    case 321086:
    {
        returnValue = F("Volsenweg");
        break;
    }
    case 321087:
    {
        returnValue = F("Volsvitz");
        break;
    }
    case 321088:
    {
        returnValue = F("Voltaire-Weg");
        break;
    }
    case 321089:
    {
        returnValue = F("Voltairestr.");
        break;
    }
    case 321090:
    {
        returnValue = F("Voltaireweg");
        break;
    }
    case 321091:
    {
        returnValue = F("Voltasteg");
        break;
    }
    case 321092:
    {
        returnValue = F("Voltastr.");
        break;
    }
    case 321093:
    {
        returnValue = F("Voltaweg");
        break;
    }
    case 321094:
    {
        returnValue = F("Voltenseestr.");
        break;
    }
    case 321095:
    {
        returnValue = F("Voltenseeweg");
        break;
    }
    case 321096:
    {
        returnValue = F("Voltensteg");
        break;
    }
    case 321097:
    {
        returnValue = F("Volterodaer Weg");
        break;
    }
    case 321098:
    {
        returnValue = F("Voltlager Damm");
        break;
    }
    case 321099:
    {
        returnValue = F("Voltlager Str.");
        break;
    }
    case 321100:
    {
        returnValue = F("Voltmannstr.");
        break;
    }
    case 321101:
    {
        returnValue = F("Voltmerstr.");
        break;
    }
    case 321102:
    {
        returnValue = F("Voltstr.");
        break;
    }
    case 321103:
    {
        returnValue = F("Voltzstr.");
        break;
    }
    case 321104:
    {
        returnValue = F("Volxheimer Str.");
        break;
    }
    case 321105:
    {
        returnValue = F("Volze-Gässchen");
        break;
    }
    case 321106:
    {
        returnValue = F("Volzeler Feldweg");
        break;
    }
    case 321107:
    {
        returnValue = F("Volzeler Mühlenweg");
        break;
    }
    case 321108:
    {
        returnValue = F("Volzen");
        break;
    }
    case 321109:
    {
        returnValue = F("Volzendorf");
        break;
    }
    case 321110:
    {
        returnValue = F("Volzrader Str.");
        break;
    }
    case 321111:
    {
        returnValue = F("Volzrader Weg");
        break;
    }
    case 321112:
    {
        returnValue = F("Volzstr.");
        break;
    }
    case 321113:
    {
        returnValue = F("Volzumer Str.");
        break;
    }
    case 321114:
    {
        returnValue = F("Vom Hofstr.");
        break;
    }
    case 321115:
    {
        returnValue = F("Vom Hölchen");
        break;
    }
    case 321116:
    {
        returnValue = F("Vom Mühlhagen");
        break;
    }
    case 321117:
    {
        returnValue = F("Vom-Bruck-Platz");
        break;
    }
    case 321118:
    {
        returnValue = F("Vom-Bruck-Str.");
        break;
    }
    case 321119:
    {
        returnValue = F("Vom-Endt-Str.");
        break;
    }
    case 321120:
    {
        returnValue = F("Vom-Hofe-Str.");
        break;
    }
    case 321121:
    {
        returnValue = F("Vom-Holtz-Str.");
        break;
    }
    case 321122:
    {
        returnValue = F("Vom-Lo-Weg");
        break;
    }
    case 321123:
    {
        returnValue = F("Vom-Rath-Str.");
        break;
    }
    case 321124:
    {
        returnValue = F("Vom-Stein-Platz");
        break;
    }
    case 321125:
    {
        returnValue = F("Vom-Stein-Str.");
        break;
    }
    case 321126:
    {
        returnValue = F("Vombachgäßchen");
        break;
    }
    case 321127:
    {
        returnValue = F("Vombachstr.");
        break;
    }
    case 321128:
    {
        returnValue = F("Vomper Platz");
        break;
    }
    case 321129:
    {
        returnValue = F("Von Bodelschwingh-Str.");
        break;
    }
    case 321130:
    {
        returnValue = F("Von Borau nach Kleben");
        break;
    }
    case 321131:
    {
        returnValue = F("Von Brook");
        break;
    }
    case 321132:
    {
        returnValue = F("Von Brule Str.");
        break;
    }
    case 321133:
    {
        returnValue = F("Von Brunck-Str.");
        break;
    }
    case 321134:
    {
        returnValue = F("Von Brühlstr.");
        break;
    }
    case 321135:
    {
        returnValue = F("Von Droste-Hülshoff-Weg");
        break;
    }
    case 321136:
    {
        returnValue = F("Von Dungern Str.");
        break;
    }
    case 321137:
    {
        returnValue = F("Von Eicher Str.");
        break;
    }
    case 321138:
    {
        returnValue = F("Von Estorffs Weg");
        break;
    }
    case 321139:
    {
        returnValue = F("Von Flach");
        break;
    }
    case 321140:
    {
        returnValue = F("Von Galen Str.");
        break;
    }
    case 321141:
    {
        returnValue = F("Von Galen Weg");
        break;
    }
    case 321142:
    {
        returnValue = F("Von Hund-Weg");
        break;
    }
    case 321143:
    {
        returnValue = F("Von Katzbeck-Str.");
        break;
    }
    case 321144:
    {
        returnValue = F("Von Kleist Str.");
        break;
    }
    case 321145:
    {
        returnValue = F("Von Klenk-Str.");
        break;
    }
    case 321146:
    {
        returnValue = F("Von Korffscher Weg");
        break;
    }
    case 321147:
    {
        returnValue = F("Von Lamberg Str.");
        break;
    }
    case 321148:
    {
        returnValue = F("Von Langen Reihe");
        break;
    }
    case 321149:
    {
        returnValue = F("Von Lichtenstein-Weg");
        break;
    }
    case 321150:
    {
        returnValue = F("Von Oppenheimstr.");
        break;
    }
    case 321151:
    {
        returnValue = F("Von Plettenberg-Str.");
        break;
    }
    case 321152:
    {
        returnValue = F("Von Redwitzstr.");
        break;
    }
    case 321153:
    {
        returnValue = F("Von Schnetzstr.");
        break;
    }
    case 321154:
    {
        returnValue = F("Von Schönborn Str.");
        break;
    }
    case 321155:
    {
        returnValue = F("Von Schützstr.");
        break;
    }
    case 321156:
    {
        returnValue = F("Von Stauffenberg-Str.");
        break;
    }
    case 321157:
    {
        returnValue = F("Von Stein Str.");
        break;
    }
    case 321158:
    {
        returnValue = F("Von Stettenberg-Weg");
        break;
    }
    case 321159:
    {
        returnValue = F("Von Thünen-Park");
        break;
    }
    case 321160:
    {
        returnValue = F("Von Thüngen Str.");
        break;
    }
    case 321161:
    {
        returnValue = F("Von Vietinghoff Str.");
        break;
    }
    case 321162:
    {
        returnValue = F("Von Waldthausenstr.");
        break;
    }
    case 321163:
    {
        returnValue = F("Von Wedderkopstr.");
        break;
    }
    case 321164:
    {
        returnValue = F("Von Werth-Str.");
        break;
    }
    case 321165:
    {
        returnValue = F("Von Wuthenau Platz");
        break;
    }
    case 321166:
    {
        returnValue = F("Von dem Steinbruch");
        break;
    }
    case 321167:
    {
        returnValue = F("Von der Brelie Weg");
        break;
    }
    case 321168:
    {
        returnValue = F("Von der Heide");
        break;
    }
    case 321169:
    {
        returnValue = F("Von der Heydt");
        break;
    }
    case 321170:
    {
        returnValue = F("Von der Höge");
        break;
    }
    case 321171:
    {
        returnValue = F("Von der Leyen Str.");
        break;
    }
    case 321172:
    {
        returnValue = F("Von der Leyen-Str.");
        break;
    }
    case 321173:
    {
        returnValue = F("Von der Leyenstr.");
        break;
    }
    case 321174:
    {
        returnValue = F("Von-Aare-Str.");
        break;
    }
    case 321175:
    {
        returnValue = F("Von-Achenbach-Str.");
        break;
    }
    case 321176:
    {
        returnValue = F("Von-Adelsheim-Str.");
        break;
    }
    case 321177:
    {
        returnValue = F("Von-Agris-Str.");
        break;
    }
    case 321178:
    {
        returnValue = F("Von-Ahlefeld-Str.");
        break;
    }
    case 321179:
    {
        returnValue = F("Von-Ahlefeldt-Stieg");
        break;
    }
    case 321180:
    {
        returnValue = F("Von-Ahnen-Weg");
        break;
    }
    case 321181:
    {
        returnValue = F("Von-Albert-Str.");
        break;
    }
    case 321182:
    {
        returnValue = F("Von-Aldenbockum-Weg");
        break;
    }
    case 321183:
    {
        returnValue = F("Von-Aldenburg-Str.");
        break;
    }
    case 321184:
    {
        returnValue = F("Von-Alpen-Str.");
        break;
    }
    case 321185:
    {
        returnValue = F("Von-Alten-Allee");
        break;
    }
    case 321186:
    {
        returnValue = F("Von-Alten-Garten");
        break;
    }
    case 321187:
    {
        returnValue = F("Von-Alten-Weg");
        break;
    }
    case 321188:
    {
        returnValue = F("Von-Altenburg-Str.");
        break;
    }
    case 321189:
    {
        returnValue = F("Von-Althaus-Weg");
        break;
    }
    case 321190:
    {
        returnValue = F("Von-Alvensleben-Ring");
        break;
    }
    case 321191:
    {
        returnValue = F("Von-Alvensleben-Str.");
        break;
    }
    case 321192:
    {
        returnValue = F("Von-Amelunxen-Str.");
        break;
    }
    case 321193:
    {
        returnValue = F("Von-Amelunxen-Weg");
        break;
    }
    case 321194:
    {
        returnValue = F("Von-Amstenradt-Str.");
        break;
    }
    case 321195:
    {
        returnValue = F("Von-Andreae-Str.");
        break;
    }
    case 321196:
    {
        returnValue = F("Von-Andrian-Str.");
        break;
    }
    case 321197:
    {
        returnValue = F("Von-Ankens-Weg");
        break;
    }
    case 321198:
    {
        returnValue = F("Von-Ansembourg-Str.");
        break;
    }
    case 321199:
    {
        returnValue = F("Von-Arco-Weg");
        break;
    }
    case 321200:
    {
        returnValue = F("Von-Ardenne-Str.");
        break;
    }
    case 321201:
    {
        returnValue = F("Von-Are-Str.");
        break;
    }
    case 321202:
    {
        returnValue = F("Von-Arenberg-Str.");
        break;
    }
    case 321203:
    {
        returnValue = F("Von-Arentsschild-Str.");
        break;
    }
    case 321204:
    {
        returnValue = F("Von-Aretin-Str.");
        break;
    }
    case 321205:
    {
        returnValue = F("Von-Arndt-Str.");
        break;
    }
    case 321206:
    {
        returnValue = F("Von-Arnim-Str.");
        break;
    }
    case 321207:
    {
        returnValue = F("Von-Arnim-Weg");
        break;
    }
    case 321208:
    {
        returnValue = F("Von-Arnoldi-Str.");
        break;
    }
    case 321209:
    {
        returnValue = F("Von-Arx-Str.");
        break;
    }
    case 321210:
    {
        returnValue = F("Von-Ascheberg-Str.");
        break;
    }
    case 321211:
    {
        returnValue = F("Von-Ascheberg-Weg");
        break;
    }
    case 321212:
    {
        returnValue = F("Von-Aspern-Str.");
        break;
    }
    case 321213:
    {
        returnValue = F("Von-Asseburg-Str.");
        break;
    }
    case 321214:
    {
        returnValue = F("Von-Aue-Str.");
        break;
    }
    case 321215:
    {
        returnValue = F("Von-Auer-Str.");
        break;
    }
    case 321216:
    {
        returnValue = F("Von-Aychsteter-Str.");
        break;
    }
    case 321217:
    {
        returnValue = F("Von-Ayx-Str.");
        break;
    }
    case 321218:
    {
        returnValue = F("Von-Baab-Weg");
        break;
    }
    case 321219:
    {
        returnValue = F("Von-Babenberg-Str.");
        break;
    }
    case 321220:
    {
        returnValue = F("Von-Bach-Str.");
        break;
    }
    case 321221:
    {
        returnValue = F("Von-Baer-Str.");
        break;
    }
    case 321222:
    {
        returnValue = F("Von-Baeyer-Str.");
        break;
    }
    case 321223:
    {
        returnValue = F("Von-Bar-Str.");
        break;
    }
    case 321224:
    {
        returnValue = F("Von-Barth-Weg");
        break;
    }
    case 321225:
    {
        returnValue = F("Von-Basedow-Str.");
        break;
    }
    case 321226:
    {
        returnValue = F("Von-Basse-Str.");
        break;
    }
    case 321227:
    {
        returnValue = F("Von-Bassenheim-Str.");
        break;
    }
    case 321228:
    {
        returnValue = F("Von-Baudissin-Str.");
        break;
    }
    case 321229:
    {
        returnValue = F("Von-Baußen-Allee");
        break;
    }
    case 321230:
    {
        returnValue = F("Von-Bayer-Str.");
        break;
    }
    case 321231:
    {
        returnValue = F("Von-Beck-Str.");
        break;
    }
    case 321232:
    {
        returnValue = F("Von-Beckerath-Platz");
        break;
    }
    case 321233:
    {
        returnValue = F("Von-Beckerath-Str.");
        break;
    }
    case 321234:
    {
        returnValue = F("Von-Beckers-Str.");
        break;
    }
    case 321235:
    {
        returnValue = F("Von-Beecke-Str.");
        break;
    }
    case 321236:
    {
        returnValue = F("Von-Beesten-Str.");
        break;
    }
    case 321237:
    {
        returnValue = F("Von-Behring-Platz");
        break;
    }
    case 321238:
    {
        returnValue = F("Von-Behring-Str.");
        break;
    }
    case 321239:
    {
        returnValue = F("Von-Behring-Weg");
        break;
    }
    case 321240:
    {
        returnValue = F("Von-Beken-Str.");
        break;
    }
    case 321241:
    {
        returnValue = F("Von-Benckendorf-Ring");
        break;
    }
    case 321242:
    {
        returnValue = F("Von-Bendeleben-Str.");
        break;
    }
    case 321243:
    {
        returnValue = F("Von-Bender-Str.");
        break;
    }
    case 321244:
    {
        returnValue = F("Von-Bentheim-Weg");
        break;
    }
    case 321245:
    {
        returnValue = F("Von-Berckefeldt-Str.");
        break;
    }
    case 321246:
    {
        returnValue = F("Von-Berckholtz-Str.");
        break;
    }
    case 321247:
    {
        returnValue = F("Von-Berg-Str.");
        break;
    }
    case 321248:
    {
        returnValue = F("Von-Berger-Str.");
        break;
    }
    case 321249:
    {
        returnValue = F("Von-Bergmann-Str.");
        break;
    }
    case 321250:
    {
        returnValue = F("Von-Bering-Str.");
        break;
    }
    case 321251:
    {
        returnValue = F("Von-Berlepsch-Str.");
        break;
    }
    case 321252:
    {
        returnValue = F("Von-Berlichingen-Str.");
        break;
    }
    case 321253:
    {
        returnValue = F("Von-Berninghusen-Str.");
        break;
    }
    case 321254:
    {
        returnValue = F("Von-Bernuth-Str.");
        break;
    }
    case 321255:
    {
        returnValue = F("Von-Besserer-Str.");
        break;
    }
    case 321256:
    {
        returnValue = F("Von-Bethmann-Str.");
        break;
    }
    case 321257:
    {
        returnValue = F("Von-Bettendorf-Str.");
        break;
    }
    case 321258:
    {
        returnValue = F("Von-Bettendorf-Weg");
        break;
    }
    case 321259:
    {
        returnValue = F("Von-Beulwitz-Str.");
        break;
    }
    case 321260:
    {
        returnValue = F("Von-Beust-Str.");
        break;
    }
    case 321261:
    {
        returnValue = F("Von-Bezzel-Str.");
        break;
    }
    case 321262:
    {
        returnValue = F("Von-Bibra-Str.");
        break;
    }
    case 321263:
    {
        returnValue = F("Von-Bicken-Weg");
        break;
    }
    case 321264:
    {
        returnValue = F("Von-Bieber-Str.");
        break;
    }
    case 321265:
    {
        returnValue = F("Von-Binsfeld-Str.");
        break;
    }
    case 321266:
    {
        returnValue = F("Von-Bippen-Str.");
        break;
    }
    case 321267:
    {
        returnValue = F("Von-Blanckart-Str.");
        break;
    }
    case 321268:
    {
        returnValue = F("Von-Bliedung-Weg");
        break;
    }
    case 321269:
    {
        returnValue = F("Von-Blücher-Str.");
        break;
    }
    case 321270:
    {
        returnValue = F("Von-Bobenhausen-Str.");
        break;
    }
    case 321271:
    {
        returnValue = F("Von-Boch-Liebig-Str.");
        break;
    }
    case 321272:
    {
        returnValue = F("Von-Boch-Str.");
        break;
    }
    case 321273:
    {
        returnValue = F("Von-Bocholtz-Str.");
        break;
    }
    case 321274:
    {
        returnValue = F("Von-Bock-Str.");
        break;
    }
    case 321275:
    {
        returnValue = F("Von-Bodelschwingh-Siedlung");
        break;
    }
    case 321276:
    {
        returnValue = F("Von-Bodelschwingh-Str.");
        break;
    }
    case 321277:
    {
        returnValue = F("Von-Bodelschwingh-Weg");
        break;
    }
    case 321278:
    {
        returnValue = F("Von-Boeselager-Platz");
        break;
    }
    case 321279:
    {
        returnValue = F("Von-Boetticher-Str.");
        break;
    }
    case 321280:
    {
        returnValue = F("Von-Bolanden-Str.");
        break;
    }
    case 321281:
    {
        returnValue = F("Von-Bolin-Str.");
        break;
    }
    case 321282:
    {
        returnValue = F("Von-Bollstatt-Str.");
        break;
    }
    case 321283:
    {
        returnValue = F("Von-Bongart-Str.");
        break;
    }
    case 321284:
    {
        returnValue = F("Von-Bora-Str.");
        break;
    }
    case 321285:
    {
        returnValue = F("Von-Bora-Weg");
        break;
    }
    case 321286:
    {
        returnValue = F("Von-Borcke-Str.");
        break;
    }
    case 321287:
    {
        returnValue = F("Von-Borgh-Weg");
        break;
    }
    case 321288:
    {
        returnValue = F("Von-Born-Str.");
        break;
    }
    case 321289:
    {
        returnValue = F("Von-Borries-Str.");
        break;
    }
    case 321290:
    {
        returnValue = F("Von-Borries-Weg");
        break;
    }
    case 321291:
    {
        returnValue = F("Von-Bosen-Str.");
        break;
    }
    case 321292:
    {
        returnValue = F("Von-Bosen-Strtaße");
        break;
    }
    case 321293:
    {
        returnValue = F("Von-Bothwell-Str.");
        break;
    }
    case 321294:
    {
        returnValue = F("Von-Botic-Str.");
        break;
    }
    case 321295:
    {
        returnValue = F("Von-Bottlenberg-Str.");
        break;
    }
    case 321296:
    {
        returnValue = F("Von-Brachum-Str.");
        break;
    }
    case 321297:
    {
        returnValue = F("Von-Branca-Str.");
        break;
    }
    case 321298:
    {
        returnValue = F("Von-Brandis-Str.");
        break;
    }
    case 321299:
    {
        returnValue = F("Von-Brandl-Str.");
        break;
    }
    case 321300:
    {
        returnValue = F("Von-Braun-Str.");
        break;
    }
    case 321301:
    {
        returnValue = F("Von-Braunfels-Str.");
        break;
    }
    case 321302:
    {
        returnValue = F("Von-Braunsberg-Str.");
        break;
    }
    case 321303:
    {
        returnValue = F("Von-Bredow-Str.");
        break;
    }
    case 321304:
    {
        returnValue = F("Von-Bredow-Weg");
        break;
    }
    case 321305:
    {
        returnValue = F("Von-Brempt-Str.");
        break;
    }
    case 321306:
    {
        returnValue = F("Von-Brenken-Str.");
        break;
    }
    case 321307:
    {
        returnValue = F("Von-Brentano-Str.");
        break;
    }
    case 321308:
    {
        returnValue = F("Von-Brettreich-Str.");
        break;
    }
    case 321309:
    {
        returnValue = F("Von-Briesen-Str.");
        break;
    }
    case 321310:
    {
        returnValue = F("Von-Brockdorf-Sreaße");
        break;
    }
    case 321311:
    {
        returnValue = F("Von-Broich-Str.");
        break;
    }
    case 321312:
    {
        returnValue = F("Von-Broichhausen-Allee");
        break;
    }
    case 321313:
    {
        returnValue = F("Von-Bronckhorst-Str.");
        break;
    }
    case 321314:
    {
        returnValue = F("Von-Bronsfeld-Str.");
        break;
    }
    case 321315:
    {
        returnValue = F("Von-Bruchhausen-Str.");
        break;
    }
    case 321316:
    {
        returnValue = F("Von-Brug-Str.");
        break;
    }
    case 321317:
    {
        returnValue = F("Von-Brummer-Str.");
        break;
    }
    case 321318:
    {
        returnValue = F("Von-Brun-Str.");
        break;
    }
    case 321319:
    {
        returnValue = F("Von-Brunn-Str.");
        break;
    }
    case 321320:
    {
        returnValue = F("Von-Bucholtz-Str.");
        break;
    }
    case 321321:
    {
        returnValue = F("Von-Buirette-Str.");
        break;
    }
    case 321322:
    {
        returnValue = F("Von-Buol-Str.");
        break;
    }
    case 321323:
    {
        returnValue = F("Von-Burgdorf-Str.");
        break;
    }
    case 321324:
    {
        returnValue = F("Von-Burgsdorff-Str.");
        break;
    }
    case 321325:
    {
        returnValue = F("Von-Burkhardt-Str.");
        break;
    }
    case 321326:
    {
        returnValue = F("Von-Buseck-Str.");
        break;
    }
    case 321327:
    {
        returnValue = F("Von-Busek-Str.");
        break;
    }
    case 321328:
    {
        returnValue = F("Von-Busseck-Str.");
        break;
    }
    case 321329:
    {
        returnValue = F("Von-Butler-Str.");
        break;
    }
    case 321330:
    {
        returnValue = F("Von-Buttel-Str.");
        break;
    }
    case 321331:
    {
        returnValue = F("Von-Buttlar-Str.");
        break;
    }
    case 321332:
    {
        returnValue = F("Von-Buz-Str.");
        break;
    }
    case 321333:
    {
        returnValue = F("Von-Bußeck-Str.");
        break;
    }
    case 321334:
    {
        returnValue = F("Von-Byland-Str.");
        break;
    }
    case 321335:
    {
        returnValue = F("Von-Bönninghausen-Str.");
        break;
    }
    case 321336:
    {
        returnValue = F("Von-Böttinger-Str.");
        break;
    }
    case 321337:
    {
        returnValue = F("Von-Büllingen-Str.");
        break;
    }
    case 321338:
    {
        returnValue = F("Von-Bülow-Platz");
        break;
    }
    case 321339:
    {
        returnValue = F("Von-Bülow-Str.");
        break;
    }
    case 321340:
    {
        returnValue = F("Von-Bünau-Str.");
        break;
    }
    case 321341:
    {
        returnValue = F("Von-Büren-Allee");
        break;
    }
    case 321342:
    {
        returnValue = F("Von-Büren-Str.");
        break;
    }
    case 321343:
    {
        returnValue = F("Von-Calenberg-Str.");
        break;
    }
    case 321344:
    {
        returnValue = F("Von-Campe-Ring");
        break;
    }
    case 321345:
    {
        returnValue = F("Von-Campe-Weg");
        break;
    }
    case 321346:
    {
        returnValue = F("Von-Cancrin-Str.");
        break;
    }
    case 321347:
    {
        returnValue = F("Von-Carlowitz-Str.");
        break;
    }
    case 321348:
    {
        returnValue = F("Von-Carlshausen-Allee");
        break;
    }
    case 321349:
    {
        returnValue = F("Von-Carnall-Str.");
        break;
    }
    case 321350:
    {
        returnValue = F("Von-Carnall-Weg");
        break;
    }
    case 321351:
    {
        returnValue = F("Von-Casum-Weg");
        break;
    }
    case 321352:
    {
        returnValue = F("Von-Claer-Str.");
        break;
    }
    case 321353:
    {
        returnValue = F("Von-Closter-Str.");
        break;
    }
    case 321354:
    {
        returnValue = F("Von-Cobres-Str.");
        break;
    }
    case 321355:
    {
        returnValue = F("Von-Coels-Str.");
        break;
    }
    case 321356:
    {
        returnValue = F("Von-Coevorden-Str.");
        break;
    }
    case 321357:
    {
        returnValue = F("Von-Cohausen-Str.");
        break;
    }
    case 321358:
    {
        returnValue = F("Von-Colyn-Str.");
        break;
    }
    case 321359:
    {
        returnValue = F("Von-Coudenhofen-Str.");
        break;
    }
    case 321360:
    {
        returnValue = F("Von-Cramer-Klett-Str.");
        break;
    }
    case 321361:
    {
        returnValue = F("Von-Cramm-Str.");
        break;
    }
    case 321362:
    {
        returnValue = F("Von-Cramm-Weg");
        break;
    }
    case 321363:
    {
        returnValue = F("Von-Croy-Weg");
        break;
    }
    case 321364:
    {
        returnValue = F("Von-Cölln-Str.");
        break;
    }
    case 321365:
    {
        returnValue = F("Von-Dadenberg-Str.");
        break;
    }
    case 321366:
    {
        returnValue = F("Von-Dalberg-Str.");
        break;
    }
    case 321367:
    {
        returnValue = F("Von-Dalheim-Str.");
        break;
    }
    case 321368:
    {
        returnValue = F("Von-Dallwig-Str.");
        break;
    }
    case 321369:
    {
        returnValue = F("Von-Dalwigk-Str.");
        break;
    }
    case 321370:
    {
        returnValue = F("Von-Danckelmann-Platz");
        break;
    }
    case 321371:
    {
        returnValue = F("Von-Dannenberg-Str.");
        break;
    }
    case 321372:
    {
        returnValue = F("Von-Dassel-Str.");
        break;
    }
    case 321373:
    {
        returnValue = F("Von-Dechen-Str.");
        break;
    }
    case 321374:
    {
        returnValue = F("Von-Defregger-Str.");
        break;
    }
    case 321375:
    {
        returnValue = F("Von-Degenfeld-Str.");
        break;
    }
    case 321376:
    {
        returnValue = F("Von-Degenfeld-Weg");
        break;
    }
    case 321377:
    {
        returnValue = F("Von-Delius-Str.");
        break;
    }
    case 321378:
    {
        returnValue = F("Von-Dem-Weiher-Str.");
        break;
    }
    case 321379:
    {
        returnValue = F("Von-Denicke-Weg");
        break;
    }
    case 321380:
    {
        returnValue = F("Von-Denis-Str.");
        break;
    }
    case 321381:
    {
        returnValue = F("Von-Der-Heyden-Str.");
        break;
    }
    case 321382:
    {
        returnValue = F("Von-Der-Heydt-Str.");
        break;
    }
    case 321383:
    {
        returnValue = F("Von-Derschau-Str.");
        break;
    }
    case 321384:
    {
        returnValue = F("Von-Deuster-Str.");
        break;
    }
    case 321385:
    {
        returnValue = F("Von-Diergardt-Str.");
        break;
    }
    case 321386:
    {
        returnValue = F("Von-Diest-Str.");
        break;
    }
    case 321387:
    {
        returnValue = F("Von-Dinklage-Str.");
        break;
    }
    case 321388:
    {
        returnValue = F("Von-Doderer-Str.");
        break;
    }
    case 321389:
    {
        returnValue = F("Von-Donle-Str.");
        break;
    }
    case 321390:
    {
        returnValue = F("Von-Dornik-Str.");
        break;
    }
    case 321391:
    {
        returnValue = F("Von-Doß-Str.");
        break;
    }
    case 321392:
    {
        returnValue = F("Von-Drais-Str.");
        break;
    }
    case 321393:
    {
        returnValue = F("Von-Drathen-Weg");
        break;
    }
    case 321394:
    {
        returnValue = F("Von-Drey-Str.");
        break;
    }
    case 321395:
    {
        returnValue = F("Von-Dript-Weg");
        break;
    }
    case 321396:
    {
        returnValue = F("Von-Droste-Hülshoff-Str.");
        break;
    }
    case 321397:
    {
        returnValue = F("Von-Droste-Hülshoff-Weg");
        break;
    }
    case 321398:
    {
        returnValue = F("Von-Droste-Str.");
        break;
    }
    case 321399:
    {
        returnValue = F("Von-Drove-Str.");
        break;
    }
    case 321400:
    {
        returnValue = F("Von-Dyrr-Str.");
        break;
    }
    case 321401:
    {
        returnValue = F("Von-Döllen-Str.");
        break;
    }
    case 321402:
    {
        returnValue = F("Von-Döring-Weg");
        break;
    }
    case 321403:
    {
        returnValue = F("Von-Dücker-Str.");
        break;
    }
    case 321404:
    {
        returnValue = F("Von-Düesberg-Str.");
        break;
    }
    case 321405:
    {
        returnValue = F("Von-Dürfeld-Str.");
        break;
    }
    case 321406:
    {
        returnValue = F("Von-Düring-Str.");
        break;
    }
    case 321407:
    {
        returnValue = F("Von-Düring-Weg");
        break;
    }
    case 321408:
    {
        returnValue = F("Von-Düthe-Str.");
        break;
    }
    case 321409:
    {
        returnValue = F("Von-Ebner-Eschenbach-Ring");
        break;
    }
    case 321410:
    {
        returnValue = F("Von-Ebner-Eschenbach-Str.");
        break;
    }
    case 321411:
    {
        returnValue = F("Von-Echter-Ring");
        break;
    }
    case 321412:
    {
        returnValue = F("Von-Eck-Str.");
        break;
    }
    case 321413:
    {
        returnValue = F("Von-Eckenbrecher-Weg");
        break;
    }
    case 321414:
    {
        returnValue = F("Von-Egloffstein-Str.");
        break;
    }
    case 321415:
    {
        returnValue = F("Von-Ehmann-Weg");
        break;
    }
    case 321416:
    {
        returnValue = F("Von-Ehrenberg-Str.");
        break;
    }
    case 321417:
    {
        returnValue = F("Von-Ehrlen-Weg");
        break;
    }
    case 321418:
    {
        returnValue = F("Von-Eichendorff-Hof");
        break;
    }
    case 321419:
    {
        returnValue = F("Von-Eichendorff-Platz");
        break;
    }
    case 321420:
    {
        returnValue = F("Von-Eichendorff-Ring");
        break;
    }
    case 321421:
    {
        returnValue = F("Von-Eichendorff-Str.");
        break;
    }
    case 321422:
    {
        returnValue = F("Von-Eichendorff-Weg");
        break;
    }
    case 321423:
    {
        returnValue = F("Von-Eiff-Str.");
        break;
    }
    case 321424:
    {
        returnValue = F("Von-Einbeck-Str.");
        break;
    }
    case 321425:
    {
        returnValue = F("Von-Einem-Str.");
        break;
    }
    case 321426:
    {
        returnValue = F("Von-Eisenberg-Str.");
        break;
    }
    case 321427:
    {
        returnValue = F("Von-Eitzen-Weg");
        break;
    }
    case 321428:
    {
        returnValue = F("Von-Ellerbach-Str.");
        break;
    }
    case 321429:
    {
        returnValue = F("Von-Ellerbach-Weg");
        break;
    }
    case 321430:
    {
        returnValue = F("Von-Ellrichshausen-Str.");
        break;
    }
    case 321431:
    {
        returnValue = F("Von-Elm-Weg");
        break;
    }
    case 321432:
    {
        returnValue = F("Von-Elmendorff-Str.");
        break;
    }
    case 321433:
    {
        returnValue = F("Von-Elmpt-Str.");
        break;
    }
    case 321434:
    {
        returnValue = F("Von-Eltz-Str.");
        break;
    }
    case 321435:
    {
        returnValue = F("Von-Elverfeldt-Allee");
        break;
    }
    case 321436:
    {
        returnValue = F("Von-Emmich-Str.");
        break;
    }
    case 321437:
    {
        returnValue = F("Von-Ems-Str.");
        break;
    }
    case 321438:
    {
        returnValue = F("Von-Erlbeck-Str.");
        break;
    }
    case 321439:
    {
        returnValue = F("Von-Ersingen-Str.");
        break;
    }
    case 321440:
    {
        returnValue = F("Von-Erthal-Str.");
        break;
    }
    case 321441:
    {
        returnValue = F("Von-Escherte-Str.");
        break;
    }
    case 321442:
    {
        returnValue = F("Von-Estorff-Str.");
        break;
    }
    case 321443:
    {
        returnValue = F("Von-Estorffs-Berg");
        break;
    }
    case 321444:
    {
        returnValue = F("Von-Estorffs-Deich");
        break;
    }
    case 321445:
    {
        returnValue = F("Von-Etzbach-Str.");
        break;
    }
    case 321446:
    {
        returnValue = F("Von-Eucken-Weg");
        break;
    }
    case 321447:
    {
        returnValue = F("Von-Eyb-Str.");
        break;
    }
    case 321448:
    {
        returnValue = F("Von-Eye-Str.");
        break;
    }
    case 321449:
    {
        returnValue = F("Von-Eyll-Str.");
        break;
    }
    case 321450:
    {
        returnValue = F("Von-Eynern-Str.");
        break;
    }
    case 321451:
    {
        returnValue = F("Von-Eyß-Str.");
        break;
    }
    case 321452:
    {
        returnValue = F("Von-Faber-Str.");
        break;
    }
    case 321453:
    {
        returnValue = F("Von-Falkenstein-Str.");
        break;
    }
    case 321454:
    {
        returnValue = F("Von-Fallersleben-Str.");
        break;
    }
    case 321455:
    {
        returnValue = F("Von-Fallersleben-Weg");
        break;
    }
    case 321456:
    {
        returnValue = F("Von-Fechenbach-Str.");
        break;
    }
    case 321457:
    {
        returnValue = F("Von-Federl-Str.");
        break;
    }
    case 321458:
    {
        returnValue = F("Von-Feury-Str.");
        break;
    }
    case 321459:
    {
        returnValue = F("Von-Finckh-Str.");
        break;
    }
    case 321460:
    {
        returnValue = F("Von-Finsterlin-Str.");
        break;
    }
    case 321461:
    {
        returnValue = F("Von-Fleck-Str.");
        break;
    }
    case 321462:
    {
        returnValue = F("Von-Flotow-Str.");
        break;
    }
    case 321463:
    {
        returnValue = F("Von-Franckenstein-Str.");
        break;
    }
    case 321464:
    {
        returnValue = F("Von-Frauenberg-Str.");
        break;
    }
    case 321465:
    {
        returnValue = F("Von-Fraunhofen-Str.");
        break;
    }
    case 321466:
    {
        returnValue = F("Von-Fraunhofer-Ring");
        break;
    }
    case 321467:
    {
        returnValue = F("Von-Fraunhofer-Str.");
        break;
    }
    case 321468:
    {
        returnValue = F("Von-Freiberg-Str.");
        break;
    }
    case 321469:
    {
        returnValue = F("Von-Frentz-Str.");
        break;
    }
    case 321470:
    {
        returnValue = F("Von-Frerichs-Str.");
        break;
    }
    case 321471:
    {
        returnValue = F("Von-Freudenberg-Str.");
        break;
    }
    case 321472:
    {
        returnValue = F("Von-Freyberg-Park");
        break;
    }
    case 321473:
    {
        returnValue = F("Von-Freyberg-Platz");
        break;
    }
    case 321474:
    {
        returnValue = F("Von-Freyberg-Str.");
        break;
    }
    case 321475:
    {
        returnValue = F("Von-Frydag-Str.");
        break;
    }
    case 321476:
    {
        returnValue = F("Von-Furtenbach-Str.");
        break;
    }
    case 321477:
    {
        returnValue = F("Von-Fürer-Str.");
        break;
    }
    case 321478:
    {
        returnValue = F("Von-Fürstenberg-Str.");
        break;
    }
    case 321479:
    {
        returnValue = F("Von-Gagern-Str.");
        break;
    }
    case 321480:
    {
        returnValue = F("Von-Gahlen-Str.");
        break;
    }
    case 321481:
    {
        returnValue = F("Von-Gaisberg-Str.");
        break;
    }
    case 321482:
    {
        returnValue = F("Von-Galen-Platz");
        break;
    }
    case 321483:
    {
        returnValue = F("Von-Galen-Ring");
        break;
    }
    case 321484:
    {
        returnValue = F("Von-Galen-Str.");
        break;
    }
    case 321485:
    {
        returnValue = F("Von-Galen-Weg");
        break;
    }
    case 321486:
    {
        returnValue = F("Von-Galhau-Str.");
        break;
    }
    case 321487:
    {
        returnValue = F("Von-Gall-Str.");
        break;
    }
    case 321488:
    {
        returnValue = F("Von-Gall-Weg");
        break;
    }
    case 321489:
    {
        returnValue = F("Von-Gallitzin-Str.");
        break;
    }
    case 321490:
    {
        returnValue = F("Von-Garßen-Str.");
        break;
    }
    case 321491:
    {
        returnValue = F("Von-Gauvain-Str.");
        break;
    }
    case 321492:
    {
        returnValue = F("Von-Gayling-Str.");
        break;
    }
    case 321493:
    {
        returnValue = F("Von-Geben-Str.");
        break;
    }
    case 321494:
    {
        returnValue = F("Von-Geismar-Str.");
        break;
    }
    case 321495:
    {
        returnValue = F("Von-Geissel-Str.");
        break;
    }
    case 321496:
    {
        returnValue = F("Von-Gemmingen-Str.");
        break;
    }
    case 321497:
    {
        returnValue = F("Von-Gemminger-Str.");
        break;
    }
    case 321498:
    {
        returnValue = F("Von-Gericke-Str.");
        break;
    }
    case 321499:
    {
        returnValue = F("Von-Gesner-Str.");
        break;
    }
    case 321500:
    {
        returnValue = F("Von-Gevore-Weg");
        break;
    }
    case 321501:
    {
        returnValue = F("Von-Geyr-Ring");
        break;
    }
    case 321502:
    {
        returnValue = F("Von-Giech-Weg");
        break;
    }
    case 321503:
    {
        returnValue = F("Von-Gielsberg-Str.");
        break;
    }
    case 321504:
    {
        returnValue = F("Von-Gienanth-Str.");
        break;
    }
    case 321505:
    {
        returnValue = F("Von-Giso-Str.");
        break;
    }
    case 321506:
    {
        returnValue = F("Von-Glahn-Str.");
        break;
    }
    case 321507:
    {
        returnValue = F("Von-Glan-Str.");
        break;
    }
    case 321508:
    {
        returnValue = F("Von-Gluck-Str.");
        break;
    }
    case 321509:
    {
        returnValue = F("Von-Gneisenau-Weg");
        break;
    }
    case 321510:
    {
        returnValue = F("Von-Gockel-Weg");
        break;
    }
    case 321511:
    {
        returnValue = F("Von-Goer-Str.");
        break;
    }
    case 321512:
    {
        returnValue = F("Von-Goerschen-Str.");
        break;
    }
    case 321513:
    {
        returnValue = F("Von-Goethe-Str.");
        break;
    }
    case 321514:
    {
        returnValue = F("Von-Goldammer-Str.");
        break;
    }
    case 321515:
    {
        returnValue = F("Von-Goltstein-Str.");
        break;
    }
    case 321516:
    {
        returnValue = F("Von-Gosen-Str.");
        break;
    }
    case 321517:
    {
        returnValue = F("Von-Graba-Str.");
        break;
    }
    case 321518:
    {
        returnValue = F("Von-Graefe-Str.");
        break;
    }
    case 321519:
    {
        returnValue = F("Von-Graevemeyer-Weg");
        break;
    }
    case 321520:
    {
        returnValue = F("Von-Grafenegg-Str.");
        break;
    }
    case 321521:
    {
        returnValue = F("Von-Grafenstein-Str.");
        break;
    }
    case 321522:
    {
        returnValue = F("Von-Grainger-Weg");
        break;
    }
    case 321523:
    {
        returnValue = F("Von-Gramann-Str.");
        break;
    }
    case 321524:
    {
        returnValue = F("Von-Grass-Str.");
        break;
    }
    case 321525:
    {
        returnValue = F("Von-Gravenreuth-Str.");
        break;
    }
    case 321526:
    {
        returnValue = F("Von-Greyerz-Str.");
        break;
    }
    case 321527:
    {
        returnValue = F("Von-Grimberg-Str.");
        break;
    }
    case 321528:
    {
        returnValue = F("Von-Groote-Platz");
        break;
    }
    case 321529:
    {
        returnValue = F("Von-Groote-Ring");
        break;
    }
    case 321530:
    {
        returnValue = F("Von-Groote-Str.");
        break;
    }
    case 321531:
    {
        returnValue = F("Von-Gruner-Str.");
        break;
    }
    case 321532:
    {
        returnValue = F("Von-Grünenstein-Str.");
        break;
    }
    case 321533:
    {
        returnValue = F("Von-Guericke-Allee");
        break;
    }
    case 321534:
    {
        returnValue = F("Von-Guericke-Str.");
        break;
    }
    case 321535:
    {
        returnValue = F("Von-Gugler-Weg");
        break;
    }
    case 321536:
    {
        returnValue = F("Von-Gumppenberg-Str.");
        break;
    }
    case 321537:
    {
        returnValue = F("Von-Gunzert-Str.");
        break;
    }
    case 321538:
    {
        returnValue = F("Von-Guttenberg-Str.");
        break;
    }
    case 321539:
    {
        returnValue = F("Von-Guttenberg-Weg");
        break;
    }
    case 321540:
    {
        returnValue = F("Von-Göler-Weg");
        break;
    }
    case 321541:
    {
        returnValue = F("Von-Görres-Str.");
        break;
    }
    case 321542:
    {
        returnValue = F("Von-Görschen-Str.");
        break;
    }
    case 321543:
    {
        returnValue = F("Von-Görtz-Str.");
        break;
    }
    case 321544:
    {
        returnValue = F("Von-Gümbel-Str.");
        break;
    }
    case 321545:
    {
        returnValue = F("Von-Haag-Str.");
        break;
    }
    case 321546:
    {
        returnValue = F("Von-Haake-Str.");
        break;
    }
    case 321547:
    {
        returnValue = F("Von-Haeften-Str.");
        break;
    }
    case 321548:
    {
        returnValue = F("Von-Hagen-Str.");
        break;
    }
    case 321549:
    {
        returnValue = F("Von-Hahn-Allee");
        break;
    }
    case 321550:
    {
        returnValue = F("Von-Hahn-Str.");
        break;
    }
    case 321551:
    {
        returnValue = F("Von-Halberg-Str.");
        break;
    }
    case 321552:
    {
        returnValue = F("Von-Halem-Str.");
        break;
    }
    case 321553:
    {
        returnValue = F("Von-Halfern-Park");
        break;
    }
    case 321554:
    {
        returnValue = F("Von-Halfern-Weg");
        break;
    }
    case 321555:
    {
        returnValue = F("Von-Halle-Str.");
        break;
    }
    case 321556:
    {
        returnValue = F("Von-Hallerstein-Str.");
        break;
    }
    case 321557:
    {
        returnValue = F("Von-Halt-Str.");
        break;
    }
    case 321558:
    {
        returnValue = F("Von-Hammerstein-Weg");
        break;
    }
    case 321559:
    {
        returnValue = F("Von-Hanffstengel-Str.");
        break;
    }
    case 321560:
    {
        returnValue = F("Von-Haniel-Allee");
        break;
    }
    case 321561:
    {
        returnValue = F("Von-Haniel-Str.");
        break;
    }
    case 321562:
    {
        returnValue = F("Von-Hardenberg-Str.");
        break;
    }
    case 321563:
    {
        returnValue = F("Von-Harff-Str.");
        break;
    }
    case 321564:
    {
        returnValue = F("Von-Harnack-Str.");
        break;
    }
    case 321565:
    {
        returnValue = F("Von-Hartmann-Str.");
        break;
    }
    case 321566:
    {
        returnValue = F("Von-Hartmann-Weg");
        break;
    }
    case 321567:
    {
        returnValue = F("Von-Hartrad-Str.");
        break;
    }
    case 321568:
    {
        returnValue = F("Von-Hase-Weg");
        break;
    }
    case 321569:
    {
        returnValue = F("Von-Hasencamp-Str.");
        break;
    }
    case 321570:
    {
        returnValue = F("Von-Hasewinkel-Weg");
        break;
    }
    case 321571:
    {
        returnValue = F("Von-Haslang-Str.");
        break;
    }
    case 321572:
    {
        returnValue = F("Von-Hasselt-Str.");
        break;
    }
    case 321573:
    {
        returnValue = F("Von-Hatzfeld-Str.");
        break;
    }
    case 321574:
    {
        returnValue = F("Von-Hauck-Str.");
        break;
    }
    case 321575:
    {
        returnValue = F("Von-Hauer-Str.");
        break;
    }
    case 321576:
    {
        returnValue = F("Von-Hauert-Str.");
        break;
    }
    case 321577:
    {
        returnValue = F("Von-Haunsberg-Weg");
        break;
    }
    case 321578:
    {
        returnValue = F("Von-Hausen-Str.");
        break;
    }
    case 321579:
    {
        returnValue = F("Von-Haxthausen-Str.");
        break;
    }
    case 321580:
    {
        returnValue = F("Von-Haxthausen-Weg");
        break;
    }
    case 321581:
    {
        returnValue = F("Von-Hazzi-Str.");
        break;
    }
    case 321582:
    {
        returnValue = F("Von-Hazzi-Weg");
        break;
    }
    case 321583:
    {
        returnValue = F("Von-Heidenab-Weg");
        break;
    }
    case 321584:
    {
        returnValue = F("Von-Heidenheim-Str.");
        break;
    }
    case 321585:
    {
        returnValue = F("Von-Heidenstam-Str.");
        break;
    }
    case 321586:
    {
        returnValue = F("Von-Heimbach-Str.");
        break;
    }
    case 321587:
    {
        returnValue = F("Von-Heimburg-Str.");
        break;
    }
    case 321588:
    {
        returnValue = F("Von-Heinitz-Str.");
        break;
    }
    case 321589:
    {
        returnValue = F("Von-Heinleth-Str.");
        break;
    }
    case 321590:
    {
        returnValue = F("Von-Heinsberg-Str.");
        break;
    }
    case 321591:
    {
        returnValue = F("Von-Helfenstein-Str.");
        break;
    }
    case 321592:
    {
        returnValue = F("Von-Helmholtz-Stieg");
        break;
    }
    case 321593:
    {
        returnValue = F("Von-Helmholtz-Str.");
        break;
    }
    case 321594:
    {
        returnValue = F("Von-Helmholtz-Weg");
        break;
    }
    case 321595:
    {
        returnValue = F("Von-Helms-Str.");
        break;
    }
    case 321596:
    {
        returnValue = F("Von-Hengebach-Str.");
        break;
    }
    case 321597:
    {
        returnValue = F("Von-Henle-Ring");
        break;
    }
    case 321598:
    {
        returnValue = F("Von-Henneberg-Gasse");
        break;
    }
    case 321599:
    {
        returnValue = F("Von-Henneberg-Str.");
        break;
    }
    case 321600:
    {
        returnValue = F("Von-Herder-Str.");
        break;
    }
    case 321601:
    {
        returnValue = F("Von-Hermann-Weg");
        break;
    }
    case 321602:
    {
        returnValue = F("Von-Hersel-Str.");
        break;
    }
    case 321603:
    {
        returnValue = F("Von-Herterich-Str.");
        break;
    }
    case 321604:
    {
        returnValue = F("Von-Hertling-Str.");
        break;
    }
    case 321605:
    {
        returnValue = F("Von-Herwarth-Str.");
        break;
    }
    case 321606:
    {
        returnValue = F("Von-Herz-Str.");
        break;
    }
    case 321607:
    {
        returnValue = F("Von-Hess-Str.");
        break;
    }
    case 321608:
    {
        returnValue = F("Von-Hessen-Str.");
        break;
    }
    case 321609:
    {
        returnValue = F("Von-Hessing-Str.");
        break;
    }
    case 321610:
    {
        returnValue = F("Von-Heydeck-Str.");
        break;
    }
    case 321611:
    {
        returnValue = F("Von-Heyden-Str.");
        break;
    }
    case 321612:
    {
        returnValue = F("Von-Heygen-Str.");
        break;
    }
    case 321613:
    {
        returnValue = F("Von-Heyl-Str.");
        break;
    }
    case 321614:
    {
        returnValue = F("Von-Hillern-Weg");
        break;
    }
    case 321615:
    {
        returnValue = F("Von-Hindenburg-Allee");
        break;
    }
    case 321616:
    {
        returnValue = F("Von-Hirsch-Weg");
        break;
    }
    case 321617:
    {
        returnValue = F("Von-Hirschberg-Str.");
        break;
    }
    case 321618:
    {
        returnValue = F("Von-Hochstaden-Str.");
        break;
    }
    case 321619:
    {
        returnValue = F("Von-Hodenberg-Str.");
        break;
    }
    case 321620:
    {
        returnValue = F("Von-Hoerde-Str.");
        break;
    }
    case 321621:
    {
        returnValue = F("Von-Hoesslin-Str.");
        break;
    }
    case 321622:
    {
        returnValue = F("Von-Hoff-Str.");
        break;
    }
    case 321623:
    {
        returnValue = F("Von-Hohenhau-Str.");
        break;
    }
    case 321624:
    {
        returnValue = F("Von-Hohenhausen-Str.");
        break;
    }
    case 321625:
    {
        returnValue = F("Von-Hohenlohe-Str.");
        break;
    }
    case 321626:
    {
        returnValue = F("Von-Hohenthann-Str.");
        break;
    }
    case 321627:
    {
        returnValue = F("Von-Holle-Str.");
        break;
    }
    case 321628:
    {
        returnValue = F("Von-Holler-Str.");
        break;
    }
    case 321629:
    {
        returnValue = F("Von-Holnstein-Weg");
        break;
    }
    case 321630:
    {
        returnValue = F("Von-Holstein-Str.");
        break;
    }
    case 321631:
    {
        returnValue = F("Von-Holte-Str.");
        break;
    }
    case 321632:
    {
        returnValue = F("Von-Holthusen-Str.");
        break;
    }
    case 321633:
    {
        returnValue = F("Von-Holzapfel-Str.");
        break;
    }
    case 321634:
    {
        returnValue = F("Von-Homeyer-Str.");
        break;
    }
    case 321635:
    {
        returnValue = F("Von-Hommer-Str.");
        break;
    }
    case 321636:
    {
        returnValue = F("Von-Hompesch-Str.");
        break;
    }
    case 321637:
    {
        returnValue = F("Von-Hornstein-Str.");
        break;
    }
    case 321638:
    {
        returnValue = F("Von-Hornstein-Weg");
        break;
    }
    case 321639:
    {
        returnValue = F("Von-Horsteloh-Str.");
        break;
    }
    case 321640:
    {
        returnValue = F("Von-Humann-Str.");
        break;
    }
    case 321641:
    {
        returnValue = F("Von-Humboldt-Platz");
        break;
    }
    case 321642:
    {
        returnValue = F("Von-Humboldt-Str.");
        break;
    }
    case 321643:
    {
        returnValue = F("Von-Humboldt-Weg");
        break;
    }
    case 321644:
    {
        returnValue = F("Von-Hund-Gasse");
        break;
    }
    case 321645:
    {
        returnValue = F("Von-Hundt-Str.");
        break;
    }
    case 321646:
    {
        returnValue = F("Von-Hutten-Str.");
        break;
    }
    case 321647:
    {
        returnValue = F("Von-Hymmen-Platz");
        break;
    }
    case 321648:
    {
        returnValue = F("Von-Häberlen-Str.");
        break;
    }
    case 321649:
    {
        returnValue = F("Von-Hörde-Str.");
        break;
    }
    case 321650:
    {
        returnValue = F("Von-Hövell-Str.");
        break;
    }
    case 321651:
    {
        returnValue = F("Von-Hühnefeld-Str.");
        break;
    }
    case 321652:
    {
        returnValue = F("Von-Hünefeld-Str.");
        break;
    }
    case 321653:
    {
        returnValue = F("Von-Hünefeld-Weg");
        break;
    }
    case 321654:
    {
        returnValue = F("Von-Hürnheim-Str.");
        break;
    }
    case 321655:
    {
        returnValue = F("Von-Ike-Str.");
        break;
    }
    case 321656:
    {
        returnValue = F("Von-Imhof-Str.");
        break;
    }
    case 321657:
    {
        returnValue = F("Von-Imhoff-Weg");
        break;
    }
    case 321658:
    {
        returnValue = F("Von-Immelhausen-Str.");
        break;
    }
    case 321659:
    {
        returnValue = F("Von-Ingelheim-Weg");
        break;
    }
    case 321660:
    {
        returnValue = F("Von-Ingelheimer-Str.");
        break;
    }
    case 321661:
    {
        returnValue = F("Von-Isenburg-Str.");
        break;
    }
    case 321662:
    {
        returnValue = F("Von-Itter-Platz");
        break;
    }
    case 321663:
    {
        returnValue = F("Von-Itzstein-Str.");
        break;
    }
    case 321664:
    {
        returnValue = F("Von-Jan-Weg");
        break;
    }
    case 321665:
    {
        returnValue = F("Von-Jhering-Str.");
        break;
    }
    case 321666:
    {
        returnValue = F("Von-Jonner-Str.");
        break;
    }
    case 321667:
    {
        returnValue = F("Von-Jüssa-Weg");
        break;
    }
    case 321668:
    {
        returnValue = F("Von-Kahl-Str.");
        break;
    }
    case 321669:
    {
        returnValue = F("Von-Kalb-Ring");
        break;
    }
    case 321670:
    {
        returnValue = F("Von-Karg-Str.");
        break;
    }
    case 321671:
    {
        returnValue = F("Von-Karpfen-Weg");
        break;
    }
    case 321672:
    {
        returnValue = F("Von-Kellenbach-Str.");
        break;
    }
    case 321673:
    {
        returnValue = F("Von-Keller-Str.");
        break;
    }
    case 321674:
    {
        returnValue = F("Von-Kemmaten-Str.");
        break;
    }
    case 321675:
    {
        returnValue = F("Von-Kempis-Str.");
        break;
    }
    case 321676:
    {
        returnValue = F("Von-Keppel-Str.");
        break;
    }
    case 321677:
    {
        returnValue = F("Von-Keppenbach-Str.");
        break;
    }
    case 321678:
    {
        returnValue = F("Von-Kerssenbrock-Allee");
        break;
    }
    case 321679:
    {
        returnValue = F("Von-Kessel-Weg");
        break;
    }
    case 321680:
    {
        returnValue = F("Von-Kesseler-Str.");
        break;
    }
    case 321681:
    {
        returnValue = F("Von-Ketteler-Platz");
        break;
    }
    case 321682:
    {
        returnValue = F("Von-Ketteler-Ring");
        break;
    }
    case 321683:
    {
        returnValue = F("Von-Ketteler-Str.");
        break;
    }
    case 321684:
    {
        returnValue = F("Von-Ketteler-Weg");
        break;
    }
    case 321685:
    {
        returnValue = F("Von-Keudell-Ring");
        break;
    }
    case 321686:
    {
        returnValue = F("Von-Keutschach-Weg");
        break;
    }
    case 321687:
    {
        returnValue = F("Von-Keverberg-Str.");
        break;
    }
    case 321688:
    {
        returnValue = F("Von-Kieffer-Str.");
        break;
    }
    case 321689:
    {
        returnValue = F("Von-Kiene-Str.");
        break;
    }
    case 321690:
    {
        returnValue = F("Von-Kiesling-Str.");
        break;
    }
    case 321691:
    {
        returnValue = F("Von-Kilian-Str.");
        break;
    }
    case 321692:
    {
        returnValue = F("Von-Kirn-Str.");
        break;
    }
    case 321693:
    {
        returnValue = F("Von-Kleist-Str.");
        break;
    }
    case 321694:
    {
        returnValue = F("Von-Kleist-Weg");
        break;
    }
    case 321695:
    {
        returnValue = F("Von-Klenck-Str.");
        break;
    }
    case 321696:
    {
        returnValue = F("Von-Klespe-Str.");
        break;
    }
    case 321697:
    {
        returnValue = F("Von-Kling-Str.");
        break;
    }
    case 321698:
    {
        returnValue = F("Von-Klug-Str.");
        break;
    }
    case 321699:
    {
        returnValue = F("Von-Knebel-Str.");
        break;
    }
    case 321700:
    {
        returnValue = F("Von-Kniprode-Weg");
        break;
    }
    case 321701:
    {
        returnValue = F("Von-Knobelsdorff-Str.");
        break;
    }
    case 321702:
    {
        returnValue = F("Von-Knoeringen-Str.");
        break;
    }
    case 321703:
    {
        returnValue = F("Von-Knoeringen-Weg");
        break;
    }
    case 321704:
    {
        returnValue = F("Von-Knöringen-Str.");
        break;
    }
    case 321705:
    {
        returnValue = F("Von-Kobbe-Str.");
        break;
    }
    case 321706:
    {
        returnValue = F("Von-Kobell-Str.");
        break;
    }
    case 321707:
    {
        returnValue = F("Von-Kobell-Weg");
        break;
    }
    case 321708:
    {
        returnValue = F("Von-Kobrink-Weg");
        break;
    }
    case 321709:
    {
        returnValue = F("Von-Koch-Str.");
        break;
    }
    case 321710:
    {
        returnValue = F("Von-Koeler-Str.");
        break;
    }
    case 321711:
    {
        returnValue = F("Von-Koenig-Str.");
        break;
    }
    case 321712:
    {
        returnValue = F("Von-Kohlbrenner-Str.");
        break;
    }
    case 321713:
    {
        returnValue = F("Von-Kolb-Str.");
        break;
    }
    case 321714:
    {
        returnValue = F("Von-Konarsky-Str.");
        break;
    }
    case 321715:
    {
        returnValue = F("Von-Korff-Str.");
        break;
    }
    case 321716:
    {
        returnValue = F("Von-Kotzau-Str.");
        break;
    }
    case 321717:
    {
        returnValue = F("Von-Krafft-Str.");
        break;
    }
    case 321718:
    {
        returnValue = F("Von-Kramer-Str.");
        break;
    }
    case 321719:
    {
        returnValue = F("Von-Krehl-Str.");
        break;
    }
    case 321720:
    {
        returnValue = F("Von-Kreyenribbe-Str.");
        break;
    }
    case 321721:
    {
        returnValue = F("Von-Kreß-Str.");
        break;
    }
    case 321722:
    {
        returnValue = F("Von-Kronenfeldt-Str.");
        break;
    }
    case 321723:
    {
        returnValue = F("Von-Krüger-Str.");
        break;
    }
    case 321724:
    {
        returnValue = F("Von-Kuhl-Str.");
        break;
    }
    case 321725:
    {
        returnValue = F("Von-Köckeritz-Str.");
        break;
    }
    case 321726:
    {
        returnValue = F("Von-Köppen-Weg");
        break;
    }
    case 321727:
    {
        returnValue = F("Von-Kügelgen-Str.");
        break;
    }
    case 321728:
    {
        returnValue = F("Von-Kühlmann-Str.");
        break;
    }
    case 321729:
    {
        returnValue = F("Von-Kühlmann-Stumm-Str.");
        break;
    }
    case 321730:
    {
        returnValue = F("Von-Lade-Str.");
        break;
    }
    case 321731:
    {
        returnValue = F("Von-Lamberg-Str.");
        break;
    }
    case 321732:
    {
        returnValue = F("Von-Langen-Allee");
        break;
    }
    case 321733:
    {
        returnValue = F("Von-Langen-Str.");
        break;
    }
    case 321734:
    {
        returnValue = F("Von-Langen-Weg");
        break;
    }
    case 321735:
    {
        returnValue = F("Von-Langenmantel-Str.");
        break;
    }
    case 321736:
    {
        returnValue = F("Von-Langsdorff-Weg");
        break;
    }
    case 321737:
    {
        returnValue = F("Von-Lans-Platz");
        break;
    }
    case 321738:
    {
        returnValue = F("Von-Lapp-Str.");
        break;
    }
    case 321739:
    {
        returnValue = F("Von-Lassaulx-Platz");
        break;
    }
    case 321740:
    {
        returnValue = F("Von-Lassaulx-Str.");
        break;
    }
    case 321741:
    {
        returnValue = F("Von-Laue-Str.");
        break;
    }
    case 321742:
    {
        returnValue = F("Von-Lauff-Str.");
        break;
    }
    case 321743:
    {
        returnValue = F("Von-Lauff-Weg");
        break;
    }
    case 321744:
    {
        returnValue = F("Von-Leerodt-Str.");
        break;
    }
    case 321745:
    {
        returnValue = F("Von-Leersstr.");
        break;
    }
    case 321746:
    {
        returnValue = F("Von-Lehe-Str.");
        break;
    }
    case 321747:
    {
        returnValue = F("Von-Leibniz-Str.");
        break;
    }
    case 321748:
    {
        returnValue = F("Von-Leiningen-Str.");
        break;
    }
    case 321749:
    {
        returnValue = F("Von-Leistner-Str.");
        break;
    }
    case 321750:
    {
        returnValue = F("Von-Lentersheim-Str.");
        break;
    }
    case 321751:
    {
        returnValue = F("Von-Lenthe-Allee");
        break;
    }
    case 321752:
    {
        returnValue = F("Von-Lenthe-Str.");
        break;
    }
    case 321753:
    {
        returnValue = F("Von-Leonrod-Str.");
        break;
    }
    case 321754:
    {
        returnValue = F("Von-Leoprechting-Str.");
        break;
    }
    case 321755:
    {
        returnValue = F("Von-Lepel-Str.");
        break;
    }
    case 321756:
    {
        returnValue = F("Von-Lerchenfeld-Str.");
        break;
    }
    case 321757:
    {
        returnValue = F("Von-Levern-Ring");
        break;
    }
    case 321758:
    {
        returnValue = F("Von-Ley-Str.");
        break;
    }
    case 321759:
    {
        returnValue = F("Von-Leyden-Str.");
        break;
    }
    case 321760:
    {
        returnValue = F("Von-Lieben-Str.");
        break;
    }
    case 321761:
    {
        returnValue = F("Von-Liebig-Str.");
        break;
    }
    case 321762:
    {
        returnValue = F("Von-Lieck-Str.");
        break;
    }
    case 321763:
    {
        returnValue = F("Von-Lilien-Anger");
        break;
    }
    case 321764:
    {
        returnValue = F("Von-Lilien-Str.");
        break;
    }
    case 321765:
    {
        returnValue = F("Von-Liliencron-Str.");
        break;
    }
    case 321766:
    {
        returnValue = F("Von-Limburg-Str.");
        break;
    }
    case 321767:
    {
        returnValue = F("Von-Linde-Str.");
        break;
    }
    case 321768:
    {
        returnValue = F("Von-Lindenfels-Str.");
        break;
    }
    case 321769:
    {
        returnValue = F("Von-Lindenfels-Weg");
        break;
    }
    case 321770:
    {
        returnValue = F("Von-Lindenthal-Str.");
        break;
    }
    case 321771:
    {
        returnValue = F("Von-Line-Str.");
        break;
    }
    case 321772:
    {
        returnValue = F("Von-Lingg-Str.");
        break;
    }
    case 321773:
    {
        returnValue = F("Von-Linné-Str.");
        break;
    }
    case 321774:
    {
        returnValue = F("Von-Linsingen-Str.");
        break;
    }
    case 321775:
    {
        returnValue = F("Von-Liszt-Str.");
        break;
    }
    case 321776:
    {
        returnValue = F("Von-Lobdeburg-Str.");
        break;
    }
    case 321777:
    {
        returnValue = F("Von-Loe-Str.");
        break;
    }
    case 321778:
    {
        returnValue = F("Von-Loefen-Str.");
        break;
    }
    case 321779:
    {
        returnValue = F("Von-Loen-Str.");
        break;
    }
    case 321780:
    {
        returnValue = F("Von-Lorentz-Weg");
        break;
    }
    case 321781:
    {
        returnValue = F("Von-Lossow-Str.");
        break;
    }
    case 321782:
    {
        returnValue = F("Von-Lotzbeck-Str.");
        break;
    }
    case 321783:
    {
        returnValue = F("Von-Lupenau-Str.");
        break;
    }
    case 321784:
    {
        returnValue = F("Von-Lutz-Str.");
        break;
    }
    case 321785:
    {
        returnValue = F("Von-Lutzenberger-Str.");
        break;
    }
    case 321786:
    {
        returnValue = F("Von-Luxburg-Str.");
        break;
    }
    case 321787:
    {
        returnValue = F("Von-Löffelholz-Str.");
        break;
    }
    case 321788:
    {
        returnValue = F("Von-Lösch-Str.");
        break;
    }
    case 321789:
    {
        returnValue = F("Von-Löwen-Str.");
        break;
    }
    case 321790:
    {
        returnValue = F("Von-Lüderitz-Str.");
        break;
    }
    case 321791:
    {
        returnValue = F("Von-Lüninck-Str.");
        break;
    }
    case 321792:
    {
        returnValue = F("Von-Lüttwitz-Str.");
        break;
    }
    case 321793:
    {
        returnValue = F("Von-Lützow-Str.");
        break;
    }
    case 321794:
    {
        returnValue = F("Von-Maierhofen-Str.");
        break;
    }
    case 321795:
    {
        returnValue = F("Von-Maldeghem-Str.");
        break;
    }
    case 321796:
    {
        returnValue = F("Von-Mallinckrodt-Str.");
        break;
    }
    case 321797:
    {
        returnValue = F("Von-Malsen-Ring");
        break;
    }
    case 321798:
    {
        returnValue = F("Von-Maltiz-Str.");
        break;
    }
    case 321799:
    {
        returnValue = F("Von-Manderscheidt-Str.");
        break;
    }
    case 321800:
    {
        returnValue = F("Von-Mandl-Str.");
        break;
    }
    case 321801:
    {
        returnValue = F("Von-Manger-Str.");
        break;
    }
    case 321802:
    {
        returnValue = F("Von-Marschalk-Str.");
        break;
    }
    case 321803:
    {
        returnValue = F("Von-Martius-Str.");
        break;
    }
    case 321804:
    {
        returnValue = F("Von-Maurer-Str.");
        break;
    }
    case 321805:
    {
        returnValue = F("Von-Meer-Str.");
        break;
    }
    case 321806:
    {
        returnValue = F("Von-Meinfelder-Str.");
        break;
    }
    case 321807:
    {
        returnValue = F("Von-Mengersen-Str.");
        break;
    }
    case 321808:
    {
        returnValue = F("Von-Mengerßen-Str.");
        break;
    }
    case 321809:
    {
        returnValue = F("Von-Menzel-Str.");
        break;
    }
    case 321810:
    {
        returnValue = F("Von-Menzel-Weg");
        break;
    }
    case 321811:
    {
        returnValue = F("Von-Meranien-Str.");
        break;
    }
    case 321812:
    {
        returnValue = F("Von-Mercy-Str.");
        break;
    }
    case 321813:
    {
        returnValue = F("Von-Merklin-Str.");
        break;
    }
    case 321814:
    {
        returnValue = F("Von-Merlau-Str.");
        break;
    }
    case 321815:
    {
        returnValue = F("Von-Merode-Str.");
        break;
    }
    case 321816:
    {
        returnValue = F("Von-Merveldt-Str.");
        break;
    }
    case 321817:
    {
        returnValue = F("Von-Meurers-Str.");
        break;
    }
    case 321818:
    {
        returnValue = F("Von-Mezzi-Str.");
        break;
    }
    case 321819:
    {
        returnValue = F("Von-Miedel-Str.");
        break;
    }
    case 321820:
    {
        returnValue = F("Von-Mieg-Str.");
        break;
    }
    case 321821:
    {
        returnValue = F("Von-Millau-Str.");
        break;
    }
    case 321822:
    {
        returnValue = F("Von-Miller-Str.");
        break;
    }
    case 321823:
    {
        returnValue = F("Von-Minckwitz-Allee");
        break;
    }
    case 321824:
    {
        returnValue = F("Von-Minckwitz-Str.");
        break;
    }
    case 321825:
    {
        returnValue = F("Von-Minden-Weg");
        break;
    }
    case 321826:
    {
        returnValue = F("Von-Miquel-Str.");
        break;
    }
    case 321827:
    {
        returnValue = F("Von-Mirbach-Harff-Str.");
        break;
    }
    case 321828:
    {
        returnValue = F("Von-Mirbach-Str.");
        break;
    }
    case 321829:
    {
        returnValue = F("Von-Moeller-Str.");
        break;
    }
    case 321830:
    {
        returnValue = F("Von-Moers-Str.");
        break;
    }
    case 321831:
    {
        returnValue = F("Von-Moltke-Hof");
        break;
    }
    case 321832:
    {
        returnValue = F("Von-Moltke-Ring");
        break;
    }
    case 321833:
    {
        returnValue = F("Von-Moltke-Str.");
        break;
    }
    case 321834:
    {
        returnValue = F("Von-Monteton-Str.");
        break;
    }
    case 321835:
    {
        returnValue = F("Von-Moreau-Str.");
        break;
    }
    case 321836:
    {
        returnValue = F("Von-Morgen-Str.");
        break;
    }
    case 321837:
    {
        returnValue = F("Von-Mulert-Str.");
        break;
    }
    case 321838:
    {
        returnValue = F("Von-Mylius-Str.");
        break;
    }
    case 321839:
    {
        returnValue = F("Von-Möller-Str.");
        break;
    }
    case 321840:
    {
        returnValue = F("Von-Mörle-Str.");
        break;
    }
    case 321841:
    {
        returnValue = F("Von-Müldner-Str.");
        break;
    }
    case 321842:
    {
        returnValue = F("Von-Müllenark-Str.");
        break;
    }
    case 321843:
    {
        returnValue = F("Von-Müller-Str.");
        break;
    }
    case 321844:
    {
        returnValue = F("Von-Münch-Weg");
        break;
    }
    case 321845:
    {
        returnValue = F("Von-Münchhausen-Str.");
        break;
    }
    case 321846:
    {
        returnValue = F("Von-Münnich-Str.");
        break;
    }
    case 321847:
    {
        returnValue = F("Von-Münster-Str.");
        break;
    }
    case 321848:
    {
        returnValue = F("Von-Nagel-Str.");
        break;
    }
    case 321849:
    {
        returnValue = F("Von-Nassau-Weg");
        break;
    }
    case 321850:
    {
        returnValue = F("Von-Negelein-Str.");
        break;
    }
    case 321851:
    {
        returnValue = F("Von-Nell-Breuning-Str.");
        break;
    }
    case 321852:
    {
        returnValue = F("Von-Nell-Gasse");
        break;
    }
    case 321853:
    {
        returnValue = F("Von-Nesselrode-Str.");
        break;
    }
    case 321854:
    {
        returnValue = F("Von-Nesselrode-Weg");
        break;
    }
    case 321855:
    {
        returnValue = F("Von-Neuenahr-Str.");
        break;
    }
    case 321856:
    {
        returnValue = F("Von-Neuenstein-Weg");
        break;
    }
    case 321857:
    {
        returnValue = F("Von-Neuhaus-Str.");
        break;
    }
    case 321858:
    {
        returnValue = F("Von-Neuneck-Str.");
        break;
    }
    case 321859:
    {
        returnValue = F("Von-Neurath-Str.");
        break;
    }
    case 321860:
    {
        returnValue = F("Von-Niesewand-Str.");
        break;
    }
    case 321861:
    {
        returnValue = F("Von-Niethammer-Str.");
        break;
    }
    case 321862:
    {
        returnValue = F("Von-Nievenheim-Str.");
        break;
    }
    case 321863:
    {
        returnValue = F("Von-Notthaft-Str.");
        break;
    }
    case 321864:
    {
        returnValue = F("Von-Notz-Park");
        break;
    }
    case 321865:
    {
        returnValue = F("Von-Oelhafen-Str.");
        break;
    }
    case 321866:
    {
        returnValue = F("Von-Oer-Str.");
        break;
    }
    case 321867:
    {
        returnValue = F("Von-Oeynhausen-Str.");
        break;
    }
    case 321868:
    {
        returnValue = F("Von-Ohrs-Weg");
        break;
    }
    case 321869:
    {
        returnValue = F("Von-Oldenbockum-Str.");
        break;
    }
    case 321870:
    {
        returnValue = F("Von-Olnhausen-Str.");
        break;
    }
    case 321871:
    {
        returnValue = F("Von-Opel-Str.");
        break;
    }
    case 321872:
    {
        returnValue = F("Von-Oppen-Weg");
        break;
    }
    case 321873:
    {
        returnValue = F("Von-Orsbach-Weg");
        break;
    }
    case 321874:
    {
        returnValue = F("Von-Orsbeck-Str.");
        break;
    }
    case 321875:
    {
        returnValue = F("Von-Ossietzky-Str.");
        break;
    }
    case 321876:
    {
        returnValue = F("Von-Ossietzky-Weg");
        break;
    }
    case 321877:
    {
        returnValue = F("Von-Ostein Allee");
        break;
    }
    case 321878:
    {
        returnValue = F("Von-Osten-Str.");
        break;
    }
    case 321879:
    {
        returnValue = F("Von-Osterberg-Str.");
        break;
    }
    case 321880:
    {
        returnValue = F("Von-Ostheim-Str.");
        break;
    }
    case 321881:
    {
        returnValue = F("Von-Ostini-Str.");
        break;
    }
    case 321882:
    {
        returnValue = F("Von-Ostrach-Str.");
        break;
    }
    case 321883:
    {
        returnValue = F("Von-Otto-Str.");
        break;
    }
    case 321884:
    {
        returnValue = F("Von-Oven-Str.");
        break;
    }
    case 321885:
    {
        returnValue = F("Von-Ow-Str.");
        break;
    }
    case 321886:
    {
        returnValue = F("Von-Padberg-Str.");
        break;
    }
    case 321887:
    {
        returnValue = F("Von-Paland-Str.");
        break;
    }
    case 321888:
    {
        returnValue = F("Von-Palant-Str.");
        break;
    }
    case 321889:
    {
        returnValue = F("Von-Pallandt-Str.");
        break;
    }
    case 321890:
    {
        returnValue = F("Von-Palm-Str.");
        break;
    }
    case 321891:
    {
        returnValue = F("Von-Papen-Anger");
        break;
    }
    case 321892:
    {
        returnValue = F("Von-Papen-Weg");
        break;
    }
    case 321893:
    {
        returnValue = F("Von-Pappenheim-Str.");
        break;
    }
    case 321894:
    {
        returnValue = F("Von-Paris-Str.");
        break;
    }
    case 321895:
    {
        returnValue = F("Von-Parkentin-Str.");
        break;
    }
    case 321896:
    {
        returnValue = F("Von-Parseval-Str.");
        break;
    }
    case 321897:
    {
        returnValue = F("Von-Pastor-Str.");
        break;
    }
    case 321898:
    {
        returnValue = F("Von-Pechmann-Str.");
        break;
    }
    case 321899:
    {
        returnValue = F("Von-Pelkhoven-Str.");
        break;
    }
    case 321900:
    {
        returnValue = F("Von-Pentz-Allee");
        break;
    }
    case 321901:
    {
        returnValue = F("Von-Perglas-Str.");
        break;
    }
    case 321902:
    {
        returnValue = F("Von-Petersson-Str.");
        break;
    }
    case 321903:
    {
        returnValue = F("Von-Pettenkofer-Str.");
        break;
    }
    case 321904:
    {
        returnValue = F("Von-Pfeil-Str.");
        break;
    }
    case 321905:
    {
        returnValue = F("Von-Pfetten-Füll-Platz");
        break;
    }
    case 321906:
    {
        returnValue = F("Von-Pfetten-Füll-Str.");
        break;
    }
    case 321907:
    {
        returnValue = F("Von-Pfetten-Str.");
        break;
    }
    case 321908:
    {
        returnValue = F("Von-Pfingsten-Str.");
        break;
    }
    case 321909:
    {
        returnValue = F("Von-Pflugk-Str.");
        break;
    }
    case 321910:
    {
        returnValue = F("Von-Pflummern-Str.");
        break;
    }
    case 321911:
    {
        returnValue = F("Von-Pforzheim-Str.");
        break;
    }
    case 321912:
    {
        returnValue = F("Von-Pichler-Str.");
        break;
    }
    case 321913:
    {
        returnValue = F("Von-Pidoll-Str.");
        break;
    }
    case 321914:
    {
        returnValue = F("Von-Plankh-Str.");
        break;
    }
    case 321915:
    {
        returnValue = F("Von-Platen-Str.");
        break;
    }
    case 321916:
    {
        returnValue = F("Von-Platen-Weg");
        break;
    }
    case 321917:
    {
        returnValue = F("Von-Plauen-Str.");
        break;
    }
    case 321918:
    {
        returnValue = F("Von-Plencken-Str.");
        break;
    }
    case 321919:
    {
        returnValue = F("Von-Plettenberg-Str.");
        break;
    }
    case 321920:
    {
        returnValue = F("Von-Plettenberg-Weg");
        break;
    }
    case 321921:
    {
        returnValue = F("Von-Plieningen-Str.");
        break;
    }
    case 321922:
    {
        returnValue = F("Von-Plüschow-Str.");
        break;
    }
    case 321923:
    {
        returnValue = F("Von-Pocci-Str.");
        break;
    }
    case 321924:
    {
        returnValue = F("Von-Poschinger-Str.");
        break;
    }
    case 321925:
    {
        returnValue = F("Von-Poseck-Weg");
        break;
    }
    case 321926:
    {
        returnValue = F("Von-Prachbeck-Str.");
        break;
    }
    case 321927:
    {
        returnValue = F("Von-Prant-Str.");
        break;
    }
    case 321928:
    {
        returnValue = F("Von-Preislinger-Str.");
        break;
    }
    case 321929:
    {
        returnValue = F("Von-Preysing-Str.");
        break;
    }
    case 321930:
    {
        returnValue = F("Von-Pruckberg-Str.");
        break;
    }
    case 321931:
    {
        returnValue = F("Von-Pröpper-Str.");
        break;
    }
    case 321932:
    {
        returnValue = F("Von-Puech-Str.");
        break;
    }
    case 321933:
    {
        returnValue = F("Von-Puttkammer-Str.");
        break;
    }
    case 321934:
    {
        returnValue = F("Von-Pylsum-Weg");
        break;
    }
    case 321935:
    {
        returnValue = F("Von-Pölnitz-Str.");
        break;
    }
    case 321936:
    {
        returnValue = F("Von-Pölnitz-Weg");
        break;
    }
    case 321937:
    {
        returnValue = F("Von-Pühel-Str.");
        break;
    }
    case 321938:
    {
        returnValue = F("Von-Pünzendorf-Str.");
        break;
    }
    case 321939:
    {
        returnValue = F("Von-Püring-Str.");
        break;
    }
    case 321940:
    {
        returnValue = F("Von-Quade-Weg");
        break;
    }
    case 321941:
    {
        returnValue = F("Von-Querfurt-Str.");
        break;
    }
    case 321942:
    {
        returnValue = F("Von-Rad-Str.");
        break;
    }
    case 321943:
    {
        returnValue = F("Von-Raesfeld-Str.");
        break;
    }
    case 321944:
    {
        returnValue = F("Von-Rainer-Str.");
        break;
    }
    case 321945:
    {
        returnValue = F("Von-Ramingen-Str.");
        break;
    }
    case 321946:
    {
        returnValue = F("Von-Randerath-Str.");
        break;
    }
    case 321947:
    {
        returnValue = F("Von-Ranke-Str.");
        break;
    }
    case 321948:
    {
        returnValue = F("Von-Rassler-Str.");
        break;
    }
    case 321949:
    {
        returnValue = F("Von-Rauhenberg-Str.");
        break;
    }
    case 321950:
    {
        returnValue = F("Von-Raumer-Str.");
        break;
    }
    case 321951:
    {
        returnValue = F("Von-Ravenstein-Weg");
        break;
    }
    case 321952:
    {
        returnValue = F("Von-Rechberg-Str.");
        break;
    }
    case 321953:
    {
        returnValue = F("Von-Rechteren-Limpurg-Str.");
        break;
    }
    case 321954:
    {
        returnValue = F("Von-Reck-Str.");
        break;
    }
    case 321955:
    {
        returnValue = F("Von-Recklinghausen-Str.");
        break;
    }
    case 321956:
    {
        returnValue = F("Von-Reden-Kamp");
        break;
    }
    case 321957:
    {
        returnValue = F("Von-Reden-Str.");
        break;
    }
    case 321958:
    {
        returnValue = F("Von-Reden-Weg");
        break;
    }
    case 321959:
    {
        returnValue = F("Von-Redwitz-Weg");
        break;
    }
    case 321960:
    {
        returnValue = F("Von-Reeth-Platz");
        break;
    }
    case 321961:
    {
        returnValue = F("Von-Rehlingen-Str.");
        break;
    }
    case 321962:
    {
        returnValue = F("Von-Reiche-Str.");
        break;
    }
    case 321963:
    {
        returnValue = F("Von-Reichenau-Str.");
        break;
    }
    case 321964:
    {
        returnValue = F("Von-Reider-Str.");
        break;
    }
    case 321965:
    {
        returnValue = F("Von-Reifenberg-Str.");
        break;
    }
    case 321966:
    {
        returnValue = F("Von-Reiffenstein-Str.");
        break;
    }
    case 321967:
    {
        returnValue = F("Von-Reigersberg-Str.");
        break;
    }
    case 321968:
    {
        returnValue = F("Von-Reiner-Str.");
        break;
    }
    case 321969:
    {
        returnValue = F("Von-Reinhardstöttner-Str.");
        break;
    }
    case 321970:
    {
        returnValue = F("Von-Reisach-Str.");
        break;
    }
    case 321971:
    {
        returnValue = F("Von-Reisbach-Str.");
        break;
    }
    case 321972:
    {
        returnValue = F("Von-Reischach-Str.");
        break;
    }
    case 321973:
    {
        returnValue = F("Von-Reitzenstein-Str.");
        break;
    }
    case 321974:
    {
        returnValue = F("Von-Rethe-Weg");
        break;
    }
    case 321975:
    {
        returnValue = F("Von-Reuental-Str.");
        break;
    }
    case 321976:
    {
        returnValue = F("Von-Reuschenberg-Str.");
        break;
    }
    case 321977:
    {
        returnValue = F("Von-Reventlou-Weg");
        break;
    }
    case 321978:
    {
        returnValue = F("Von-Rheinl-Str.");
        break;
    }
    case 321979:
    {
        returnValue = F("Von-Rhemen-Str.");
        break;
    }
    case 321980:
    {
        returnValue = F("Von-Richthofen-Str.");
        break;
    }
    case 321981:
    {
        returnValue = F("Von-Riederer-Str.");
        break;
    }
    case 321982:
    {
        returnValue = F("Von-Riedheim-Str.");
        break;
    }
    case 321983:
    {
        returnValue = F("Von-Riedheim-Weg");
        break;
    }
    case 321984:
    {
        returnValue = F("Von-Riedheimweg");
        break;
    }
    case 321985:
    {
        returnValue = F("Von-Rieneck-Str.");
        break;
    }
    case 321986:
    {
        returnValue = F("Von-Rienecker-Str.");
        break;
    }
    case 321987:
    {
        returnValue = F("Von-Rieneckstr.");
        break;
    }
    case 321988:
    {
        returnValue = F("Von-Riezler-Weg");
        break;
    }
    case 321989:
    {
        returnValue = F("Von-Ritter-Str.");
        break;
    }
    case 321990:
    {
        returnValue = F("Von-Roden-Weg");
        break;
    }
    case 321991:
    {
        returnValue = F("Von-Rodenhausen-Str.");
        break;
    }
    case 321992:
    {
        returnValue = F("Von-Rodewitz-Weg");
        break;
    }
    case 321993:
    {
        returnValue = F("Von-Roeder-Weg");
        break;
    }
    case 321994:
    {
        returnValue = F("Von-Roenne-Str.");
        break;
    }
    case 321995:
    {
        returnValue = F("Von-Roggenbach-Str.");
        break;
    }
    case 321996:
    {
        returnValue = F("Von-Roggenstein-Str.");
        break;
    }
    case 321997:
    {
        returnValue = F("Von-Rohrbach-Str.");
        break;
    }
    case 321998:
    {
        returnValue = F("Von-Rolf-Str.");
        break;
    }
    case 321999:
    {
        returnValue = F("Von-Roll-Str.");
        break;
    }
    case 322000:
    {
        returnValue = F("Von-Rom-Str.");
        break;
    }
    case 322001:
    {
        returnValue = F("Von-Romberg-Str.");
        break;
    }
    case 322002:
    {
        returnValue = F("Von-Roon-Str.");
        break;
    }
    case 322003:
    {
        returnValue = F("Von-Rosen-Str.");
        break;
    }
    case 322004:
    {
        returnValue = F("Von-Rosenau-Str.");
        break;
    }
    case 322005:
    {
        returnValue = F("Von-Rosenbusch-Str.");
        break;
    }
    case 322006:
    {
        returnValue = F("Von-Rotenhan-Str.");
        break;
    }
    case 322007:
    {
        returnValue = F("Von-Roth-Str.");
        break;
    }
    case 322008:
    {
        returnValue = F("Von-Roth-Weg");
        break;
    }
    case 322009:
    {
        returnValue = F("Von-Ruckteschell-Weg");
        break;
    }
    case 322010:
    {
        returnValue = F("Von-Rudhart-Str.");
        break;
    }
    case 322011:
    {
        returnValue = F("Von-Rummel-Str.");
        break;
    }
    case 322012:
    {
        returnValue = F("Von-Rump-Str.");
        break;
    }
    case 322013:
    {
        returnValue = F("Von-Runkel-Platz");
        break;
    }
    case 322014:
    {
        returnValue = F("Von-Rutenberg-Anger");
        break;
    }
    case 322015:
    {
        returnValue = F("Von-Ruys-Str.");
        break;
    }
    case 322016:
    {
        returnValue = F("Von-Röfingen-Weg");
        break;
    }
    case 322017:
    {
        returnValue = F("Von-Röntgen-Str.");
        break;
    }
    case 322018:
    {
        returnValue = F("Von-Rüti-Str.");
        break;
    }
    case 322019:
    {
        returnValue = F("Von-Saarwerden-Str.");
        break;
    }
    case 322020:
    {
        returnValue = F("Von-Sachs-Weg");
        break;
    }
    case 322021:
    {
        returnValue = F("Von-Sack-Platz");
        break;
    }
    case 322022:
    {
        returnValue = F("Von-Sahr-Str.");
        break;
    }
    case 322023:
    {
        returnValue = F("Von-Sallwürk-Str.");
        break;
    }
    case 322024:
    {
        returnValue = F("Von-Sanden-Str.");
        break;
    }
    case 322025:
    {
        returnValue = F("Von-Sandt-Str.");
        break;
    }
    case 322026:
    {
        returnValue = F("Von-Sandt-Ufer");
        break;
    }
    case 322027:
    {
        returnValue = F("Von-Scala-Str.");
        break;
    }
    case 322028:
    {
        returnValue = F("Von-Scanzoni-Str.");
        break;
    }
    case 322029:
    {
        returnValue = F("Von-Schack-Str.");
        break;
    }
    case 322030:
    {
        returnValue = F("Von-Schacky-Str.");
        break;
    }
    case 322031:
    {
        returnValue = F("Von-Schad-Str.");
        break;
    }
    case 322032:
    {
        returnValue = F("Von-Schaden-Str.");
        break;
    }
    case 322033:
    {
        returnValue = F("Von-Schaesberg-Weg");
        break;
    }
    case 322034:
    {
        returnValue = F("Von-Schaezler-Str.");
        break;
    }
    case 322035:
    {
        returnValue = F("Von-Schaezler-Str. 6");
        break;
    }
    case 322036:
    {
        returnValue = F("Von-Schagen-Weg");
        break;
    }
    case 322037:
    {
        returnValue = F("Von-Schaumberg-Str.");
        break;
    }
    case 322038:
    {
        returnValue = F("Von-Scheben-Str.");
        break;
    }
    case 322039:
    {
        returnValue = F("Von-Scheffel-Steig");
        break;
    }
    case 322040:
    {
        returnValue = F("Von-Scheffel-Str.");
        break;
    }
    case 322041:
    {
        returnValue = F("Von-Scheffel-Weg");
        break;
    }
    case 322042:
    {
        returnValue = F("Von-Scheid-Weg");
        break;
    }
    case 322043:
    {
        returnValue = F("Von-Schell-Str.");
        break;
    }
    case 322044:
    {
        returnValue = F("Von-Schellenberg-Str.");
        break;
    }
    case 322045:
    {
        returnValue = F("Von-Schelling-Str.");
        break;
    }
    case 322046:
    {
        returnValue = F("Von-Schenk-Str.");
        break;
    }
    case 322047:
    {
        returnValue = F("Von-Schenkendorf-Str.");
        break;
    }
    case 322048:
    {
        returnValue = F("Von-Schenking-Str.");
        break;
    }
    case 322049:
    {
        returnValue = F("Von-Schenkl-Str.");
        break;
    }
    case 322050:
    {
        returnValue = F("Von-Scheurl-Str.");
        break;
    }
    case 322051:
    {
        returnValue = F("Von-Schilcher-Str.");
        break;
    }
    case 322052:
    {
        returnValue = F("Von-Schildeck-Str.");
        break;
    }
    case 322053:
    {
        returnValue = F("Von-Schilder-Str.");
        break;
    }
    case 322054:
    {
        returnValue = F("Von-Schill-Str.");
        break;
    }
    case 322055:
    {
        returnValue = F("Von-Schiller-Str.");
        break;
    }
    case 322056:
    {
        returnValue = F("Von-Schilling-Str.");
        break;
    }
    case 322057:
    {
        returnValue = F("Von-Schirnding-Str.");
        break;
    }
    case 322058:
    {
        returnValue = F("Von-Schlechtendal-Weg");
        break;
    }
    case 322059:
    {
        returnValue = F("Von-Schlegel-Str.");
        break;
    }
    case 322060:
    {
        returnValue = F("Von-Schleiffras-Str.");
        break;
    }
    case 322061:
    {
        returnValue = F("Von-Schlereth-Str.");
        break;
    }
    case 322062:
    {
        returnValue = F("Von-Schlüsselfelder-Str.");
        break;
    }
    case 322063:
    {
        returnValue = F("Von-Schmitt-Str.");
        break;
    }
    case 322064:
    {
        returnValue = F("Von-Schmittmann-Str.");
        break;
    }
    case 322065:
    {
        returnValue = F("Von-Schnewlin-Str.");
        break;
    }
    case 322066:
    {
        returnValue = F("Von-Schoen-Str.");
        break;
    }
    case 322067:
    {
        returnValue = F("Von-Schorlemer-Str.");
        break;
    }
    case 322068:
    {
        returnValue = F("Von-Schorn-Weg");
        break;
    }
    case 322069:
    {
        returnValue = F("Von-Schrenck-Str.");
        break;
    }
    case 322070:
    {
        returnValue = F("Von-Schwalbach-Weg");
        break;
    }
    case 322071:
    {
        returnValue = F("Von-Schwerdt-Weg");
        break;
    }
    case 322072:
    {
        returnValue = F("Von-Schwerz-Weg");
        break;
    }
    case 322073:
    {
        returnValue = F("Von-Schwind-Str.");
        break;
    }
    case 322074:
    {
        returnValue = F("Von-Schwind-Weg");
        break;
    }
    case 322075:
    {
        returnValue = F("Von-Schwäbl-Str.");
        break;
    }
    case 322076:
    {
        returnValue = F("Von-Schöfer-Ring");
        break;
    }
    case 322077:
    {
        returnValue = F("Von-Schönau-Str.");
        break;
    }
    case 322078:
    {
        returnValue = F("Von-Schönau-Weg");
        break;
    }
    case 322079:
    {
        returnValue = F("Von-Schönberg-Gasse");
        break;
    }
    case 322080:
    {
        returnValue = F("Von-Schönborn-Str.");
        break;
    }
    case 322081:
    {
        returnValue = F("Von-Schönborn-Weg");
        break;
    }
    case 322082:
    {
        returnValue = F("Von-Schöpf-Weg");
        break;
    }
    case 322083:
    {
        returnValue = F("Von-Schürmann-Str.");
        break;
    }
    case 322084:
    {
        returnValue = F("Von-Schütz-Str.");
        break;
    }
    case 322085:
    {
        returnValue = F("Von-Seckendorf-Str.");
        break;
    }
    case 322086:
    {
        returnValue = F("Von-Seckendorff-Platz");
        break;
    }
    case 322087:
    {
        returnValue = F("Von-Seckendorff-Str.");
        break;
    }
    case 322088:
    {
        returnValue = F("Von-Seebach-Str.");
        break;
    }
    case 322089:
    {
        returnValue = F("Von-Seeckt-Str.");
        break;
    }
    case 322090:
    {
        returnValue = F("Von-Seelen-Weg");
        break;
    }
    case 322091:
    {
        returnValue = F("Von-Seht-Str.");
        break;
    }
    case 322092:
    {
        returnValue = F("Von-Seinsheim-Str.");
        break;
    }
    case 322093:
    {
        returnValue = F("Von-Senden-Str.");
        break;
    }
    case 322094:
    {
        returnValue = F("Von-Seydewitz-Str.");
        break;
    }
    case 322095:
    {
        returnValue = F("Von-Seydlitz-Str.");
        break;
    }
    case 322096:
    {
        returnValue = F("Von-Sickenhauser-Str.");
        break;
    }
    case 322097:
    {
        returnValue = F("Von-Siebold-Str.");
        break;
    }
    case 322098:
    {
        returnValue = F("Von-Siemens-Str.");
        break;
    }
    case 322099:
    {
        returnValue = F("Von-Siemens-Weg");
        break;
    }
    case 322100:
    {
        returnValue = F("Von-Sigertshofen-Str.");
        break;
    }
    case 322101:
    {
        returnValue = F("Von-Sobbe-Str.");
        break;
    }
    case 322102:
    {
        returnValue = F("Von-Soden-Str.");
        break;
    }
    case 322103:
    {
        returnValue = F("Von-Soldner-Str.");
        break;
    }
    case 322104:
    {
        returnValue = F("Von-Somnitz-Ring");
        break;
    }
    case 322105:
    {
        returnValue = F("Von-Sothen-Str.");
        break;
    }
    case 322106:
    {
        returnValue = F("Von-Spaen-Str.");
        break;
    }
    case 322107:
    {
        returnValue = F("Von-Sparr-Str.");
        break;
    }
    case 322108:
    {
        returnValue = F("Von-Spee-Str.");
        break;
    }
    case 322109:
    {
        returnValue = F("Von-Speth-Schülzburg-Str.");
        break;
    }
    case 322110:
    {
        returnValue = F("Von-Speth-Str.");
        break;
    }
    case 322111:
    {
        returnValue = F("Von-Spiegel-Str.");
        break;
    }
    case 322112:
    {
        returnValue = F("Von-Spiering-Str.");
        break;
    }
    case 322113:
    {
        returnValue = F("Von-Spies-Str.");
        break;
    }
    case 322114:
    {
        returnValue = F("Von-Spitaell-Weg");
        break;
    }
    case 322115:
    {
        returnValue = F("Von-Sprenge-Weg");
        break;
    }
    case 322116:
    {
        returnValue = F("Von-Sprewitz-Str.");
        break;
    }
    case 322117:
    {
        returnValue = F("Von-Staden-Str.");
        break;
    }
    case 322118:
    {
        returnValue = F("Von-Stael-Str.");
        break;
    }
    case 322119:
    {
        returnValue = F("Von-Staffhorst-Str.");
        break;
    }
    case 322120:
    {
        returnValue = F("Von-Stain-Str.");
        break;
    }
    case 322121:
    {
        returnValue = F("Von-Stain-Weg");
        break;
    }
    case 322122:
    {
        returnValue = F("Von-Stauffenberg-Allee");
        break;
    }
    case 322123:
    {
        returnValue = F("Von-Stauffenberg-Str.");
        break;
    }
    case 322124:
    {
        returnValue = F("Von-Stauffenberg-Weg");
        break;
    }
    case 322125:
    {
        returnValue = F("Von-Stechow-Str.");
        break;
    }
    case 322126:
    {
        returnValue = F("Von-Stein-Ring");
        break;
    }
    case 322127:
    {
        returnValue = F("Von-Stein-Str.");
        break;
    }
    case 322128:
    {
        returnValue = F("Von-Stein-Weg");
        break;
    }
    case 322129:
    {
        returnValue = F("Von-Steinau-Str.");
        break;
    }
    case 322130:
    {
        returnValue = F("Von-Steinbeis-Str.");
        break;
    }
    case 322131:
    {
        returnValue = F("Von-Steinberg-Str.");
        break;
    }
    case 322132:
    {
        returnValue = F("Von-Steinen-Str.");
        break;
    }
    case 322133:
    {
        returnValue = F("Von-Steinfurt-Str.");
        break;
    }
    case 322134:
    {
        returnValue = F("Von-Steinrück-Platz");
        break;
    }
    case 322135:
    {
        returnValue = F("Von-Stephan-Str.");
        break;
    }
    case 322136:
    {
        returnValue = F("Von-Steuben-Str.");
        break;
    }
    case 322137:
    {
        returnValue = F("Von-Stieber-Str.");
        break;
    }
    case 322138:
    {
        returnValue = F("Von-Stietencron-Str.");
        break;
    }
    case 322139:
    {
        returnValue = F("Von-Stinglhaimer-Str.");
        break;
    }
    case 322140:
    {
        returnValue = F("Von-Stockmar-Str.");
        break;
    }
    case 322141:
    {
        returnValue = F("Von-Stoltzenberg-Str.");
        break;
    }
    case 322142:
    {
        returnValue = F("Von-Streber-Str.");
        break;
    }
    case 322143:
    {
        returnValue = F("Von-Streithorst-Str.");
        break;
    }
    case 322144:
    {
        returnValue = F("Von-Stuben-Str.");
        break;
    }
    case 322145:
    {
        returnValue = F("Von-Stubenrauch-Str.");
        break;
    }
    case 322146:
    {
        returnValue = F("Von-Stuckrad-Weg");
        break;
    }
    case 322147:
    {
        returnValue = F("Von-Stumm-Str.");
        break;
    }
    case 322148:
    {
        returnValue = F("Von-Sturmfeder-Str.");
        break;
    }
    case 322149:
    {
        returnValue = F("Von-Suttner-Str.");
        break;
    }
    case 322150:
    {
        returnValue = F("Von-Suttner-Weg");
        break;
    }
    case 322151:
    {
        returnValue = F("Von-Süßkind-Schwendi-Str.");
        break;
    }
    case 322152:
    {
        returnValue = F("Von-Tambach-Str.");
        break;
    }
    case 322153:
    {
        returnValue = F("Von-Tann-Str.");
        break;
    }
    case 322154:
    {
        returnValue = F("Von-Tanne-Str.");
        break;
    }
    case 322155:
    {
        returnValue = F("Von-Taube-Weg");
        break;
    }
    case 322156:
    {
        returnValue = F("Von-Taxis-Str.");
        break;
    }
    case 322157:
    {
        returnValue = F("Von-Tetzel-Str.");
        break;
    }
    case 322158:
    {
        returnValue = F("Von-Teuffel-Str.");
        break;
    }
    case 322159:
    {
        returnValue = F("Von-Thoma-Str.");
        break;
    }
    case 322160:
    {
        returnValue = F("Von-Thuenefeld-Str.");
        break;
    }
    case 322161:
    {
        returnValue = F("Von-Thun Str.");
        break;
    }
    case 322162:
    {
        returnValue = F("Von-Thun-Weg");
        break;
    }
    case 322163:
    {
        returnValue = F("Von-Thümmel-Str.");
        break;
    }
    case 322164:
    {
        returnValue = F("Von-Thünen-Str.");
        break;
    }
    case 322165:
    {
        returnValue = F("Von-Thünen-Weg");
        break;
    }
    case 322166:
    {
        returnValue = F("Von-Thürheim-Str.");
        break;
    }
    case 322167:
    {
        returnValue = F("Von-Tilly-Str.");
        break;
    }
    case 322168:
    {
        returnValue = F("Von-Tirpitz-Str.");
        break;
    }
    case 322169:
    {
        returnValue = F("Von-Torck-Str.");
        break;
    }
    case 322170:
    {
        returnValue = F("Von-Tossum-Str.");
        break;
    }
    case 322171:
    {
        returnValue = F("Von-Tresckow-Str.");
        break;
    }
    case 322172:
    {
        returnValue = F("Von-Tresckow-Weg");
        break;
    }
    case 322173:
    {
        returnValue = F("Von-Tribbe-Weg");
        break;
    }
    case 322174:
    {
        returnValue = F("Von-Trips-Platz");
        break;
    }
    case 322175:
    {
        returnValue = F("Von-Trips-Str.");
        break;
    }
    case 322176:
    {
        returnValue = F("Von-Trotha-Str.");
        break;
    }
    case 322177:
    {
        returnValue = F("Von-Trott-zu-Solz-Str.");
        break;
    }
    case 322178:
    {
        returnValue = F("Von-Tucher-Str.");
        break;
    }
    case 322179:
    {
        returnValue = F("Von-Tungeln-Str.");
        break;
    }
    case 322180:
    {
        returnValue = F("Von-Tuto-Str.");
        break;
    }
    case 322181:
    {
        returnValue = F("Von-Twickel-Str.");
        break;
    }
    case 322182:
    {
        returnValue = F("Von-Twist-Str.");
        break;
    }
    case 322183:
    {
        returnValue = F("Von-Uhde-Weg");
        break;
    }
    case 322184:
    {
        returnValue = F("Von-Uslar-Weg");
        break;
    }
    case 322185:
    {
        returnValue = F("Von-Uttensen-Str.");
        break;
    }
    case 322186:
    {
        returnValue = F("Von-Vah-Str.");
        break;
    }
    case 322187:
    {
        returnValue = F("Von-Varell-Str.");
        break;
    }
    case 322188:
    {
        returnValue = F("Von-Varendorff-Str.");
        break;
    }
    case 322189:
    {
        returnValue = F("Von-Velbrück-Str.");
        break;
    }
    case 322190:
    {
        returnValue = F("Von-Velen-Weg");
        break;
    }
    case 322191:
    {
        returnValue = F("Von-Velsen-Str.");
        break;
    }
    case 322192:
    {
        returnValue = F("Von-Veltheim-Str.");
        break;
    }
    case 322193:
    {
        returnValue = F("Von-Veltheim-Weg");
        break;
    }
    case 322194:
    {
        returnValue = F("Von-Vennigen-Str.");
        break;
    }
    case 322195:
    {
        returnValue = F("Von-Venningen-Str.");
        break;
    }
    case 322196:
    {
        returnValue = F("Von-Vequel-Str.");
        break;
    }
    case 322197:
    {
        returnValue = F("Von-Vincke-Platz");
        break;
    }
    case 322198:
    {
        returnValue = F("Von-Vincke-Str.");
        break;
    }
    case 322199:
    {
        returnValue = F("Von-Vincke-Weg");
        break;
    }
    case 322200:
    {
        returnValue = F("Von-Virneburg-Str.");
        break;
    }
    case 322201:
    {
        returnValue = F("Von-Vischbach-Str.");
        break;
    }
    case 322202:
    {
        returnValue = F("Von-Voigts-Rhetz-Str.");
        break;
    }
    case 322203:
    {
        returnValue = F("Von-Voithenberg-Str.");
        break;
    }
    case 322204:
    {
        returnValue = F("Von-Volckamer-Str.");
        break;
    }
    case 322205:
    {
        returnValue = F("Von-Vollmar-Str.");
        break;
    }
    case 322206:
    {
        returnValue = F("Von-Volmar-Str.");
        break;
    }
    case 322207:
    {
        returnValue = F("Von-Vorsete-Str.");
        break;
    }
    case 322208:
    {
        returnValue = F("Von-Voss-Str.");
        break;
    }
    case 322209:
    {
        returnValue = F("Von-Vöhlin-Str.");
        break;
    }
    case 322210:
    {
        returnValue = F("Von-Wachholtz-Weg");
        break;
    }
    case 322211:
    {
        returnValue = F("Von-Wagner-Str.");
        break;
    }
    case 322212:
    {
        returnValue = F("Von-Waldenfels-Str.");
        break;
    }
    case 322213:
    {
        returnValue = F("Von-Walderdorff-Str.");
        break;
    }
    case 322214:
    {
        returnValue = F("Von-Waldois-Str.");
        break;
    }
    case 322215:
    {
        returnValue = F("Von-Waldthausen-Str.");
        break;
    }
    case 322216:
    {
        returnValue = F("Von-Walser-Str.");
        break;
    }
    case 322217:
    {
        returnValue = F("Von-Walther-Str.");
        break;
    }
    case 322218:
    {
        returnValue = F("Von-Wambold-Str.");
        break;
    }
    case 322219:
    {
        returnValue = F("Von-Wartenberg-Str.");
        break;
    }
    case 322220:
    {
        returnValue = F("Von-Wartenburg-Dtraße");
        break;
    }
    case 322221:
    {
        returnValue = F("Von-Wartensleben-Weg");
        break;
    }
    case 322222:
    {
        returnValue = F("Von-Weber-Str.");
        break;
    }
    case 322223:
    {
        returnValue = F("Von-Wedelstaedt-Park");
        break;
    }
    case 322224:
    {
        returnValue = F("Von-Wehren-Str.");
        break;
    }
    case 322225:
    {
        returnValue = F("Von-Weichs-Str.");
        break;
    }
    case 322226:
    {
        returnValue = F("Von-Weis-Str.");
        break;
    }
    case 322227:
    {
        returnValue = F("Von-Weiss-Str.");
        break;
    }
    case 322228:
    {
        returnValue = F("Von-Weitz-Str.");
        break;
    }
    case 322229:
    {
        returnValue = F("Von-Weißenfels-Str.");
        break;
    }
    case 322230:
    {
        returnValue = F("Von-Welden-Str.");
        break;
    }
    case 322231:
    {
        returnValue = F("Von-Welfeld-Str.");
        break;
    }
    case 322232:
    {
        returnValue = F("Von-Wellenburg-Str.");
        break;
    }
    case 322233:
    {
        returnValue = F("Von-Wellenstein-Str.");
        break;
    }
    case 322234:
    {
        returnValue = F("Von-Welsberg-Str.");
        break;
    }
    case 322235:
    {
        returnValue = F("Von-Welsch-Str.");
        break;
    }
    case 322236:
    {
        returnValue = F("Von-Wemighe-Str.");
        break;
    }
    case 322237:
    {
        returnValue = F("Von-Wendelstadt-Str.");
        break;
    }
    case 322238:
    {
        returnValue = F("Von-Wenden-Str.");
        break;
    }
    case 322239:
    {
        returnValue = F("Von-Wendt-Str.");
        break;
    }
    case 322240:
    {
        returnValue = F("Von-Wendt-Weg");
        break;
    }
    case 322241:
    {
        returnValue = F("Von-Wenkheim-Str.");
        break;
    }
    case 322242:
    {
        returnValue = F("Von-Werner-Str.");
        break;
    }
    case 322243:
    {
        returnValue = F("Von-Werth-Str.");
        break;
    }
    case 322244:
    {
        returnValue = F("Von-Werthern-Platz");
        break;
    }
    case 322245:
    {
        returnValue = F("Von-Werthern-Str.");
        break;
    }
    case 322246:
    {
        returnValue = F("Von-Westerburg-Str.");
        break;
    }
    case 322247:
    {
        returnValue = F("Von-Westernach-Str.");
        break;
    }
    case 322248:
    {
        returnValue = F("Von-Westernhagen-Platz");
        break;
    }
    case 322249:
    {
        returnValue = F("Von-Westphalen-Str.");
        break;
    }
    case 322250:
    {
        returnValue = F("Von-Westphalen-Weg");
        break;
    }
    case 322251:
    {
        returnValue = F("Von-Weveld-Str.");
        break;
    }
    case 322252:
    {
        returnValue = F("Von-Wieck-Str.");
        break;
    }
    case 322253:
    {
        returnValue = F("Von-Wied-Str.");
        break;
    }
    case 322254:
    {
        returnValue = F("Von-Wieland-Str.");
        break;
    }
    case 322255:
    {
        returnValue = F("Von-Wieser-Str.");
        break;
    }
    case 322256:
    {
        returnValue = F("Von-Wildenfels-Str.");
        break;
    }
    case 322257:
    {
        returnValue = F("Von-Willen-Str.");
        break;
    }
    case 322258:
    {
        returnValue = F("Von-Willibald-Str.");
        break;
    }
    case 322259:
    {
        returnValue = F("Von-Wiltberg-Str.");
        break;
    }
    case 322260:
    {
        returnValue = F("Von-Winkelin-Str.");
        break;
    }
    case 322261:
    {
        returnValue = F("Von-Wintheim-Str.");
        break;
    }
    case 322262:
    {
        returnValue = F("Von-Winzingen-Str.");
        break;
    }
    case 322263:
    {
        returnValue = F("Von-Wirsperg-Str.");
        break;
    }
    case 322264:
    {
        returnValue = F("Von-Witken-Str.");
        break;
    }
    case 322265:
    {
        returnValue = F("Von-Witzleben-Allee");
        break;
    }
    case 322266:
    {
        returnValue = F("Von-Witzleben-Str.");
        break;
    }
    case 322267:
    {
        returnValue = F("Von-Wißmann-Str.");
        break;
    }
    case 322268:
    {
        returnValue = F("Von-Wolkenstein-Str.");
        break;
    }
    case 322269:
    {
        returnValue = F("Von-Wrangell-Str.");
        break;
    }
    case 322270:
    {
        returnValue = F("Von-Wrede-Str.");
        break;
    }
    case 322271:
    {
        returnValue = F("Von-Wussow-Weg");
        break;
    }
    case 322272:
    {
        returnValue = F("Von-Wylich-Str.");
        break;
    }
    case 322273:
    {
        returnValue = F("Von-Ysenburg-Str.");
        break;
    }
    case 322274:
    {
        returnValue = F("Von-Zabuesnig-Str.");
        break;
    }
    case 322275:
    {
        returnValue = F("Von-Zach-Str.");
        break;
    }
    case 322276:
    {
        returnValue = F("Von-Zedtwitz-Str.");
        break;
    }
    case 322277:
    {
        returnValue = F("Von-Zeller-Weg");
        break;
    }
    case 322278:
    {
        returnValue = F("Von-Zenetti-Str.");
        break;
    }
    case 322279:
    {
        returnValue = F("Von-Zeppelin-Str.");
        break;
    }
    case 322280:
    {
        returnValue = F("Von-Zimmermann-Str.");
        break;
    }
    case 322281:
    {
        returnValue = F("Von-Zwehl-Weg");
        break;
    }
    case 322282:
    {
        returnValue = F("Von-Zweiffel-Str.");
        break;
    }
    case 322283:
    {
        returnValue = F("Von-Zwerger-Str.");
        break;
    }
    case 322284:
    {
        returnValue = F("Von-Zweter-Weg");
        break;
    }
    case 322285:
    {
        returnValue = F("Von-Zyllnhardt-Str.");
        break;
    }
    case 322286:
    {
        returnValue = F("Von-Zügel-Weg");
        break;
    }
    case 322287:
    {
        returnValue = F("Von-dem-Busche-Str.");
        break;
    }
    case 322288:
    {
        returnValue = F("Von-dem-Bussche-Allee");
        break;
    }
    case 322289:
    {
        returnValue = F("Von-dem-Bussche-Str.");
        break;
    }
    case 322290:
    {
        returnValue = F("Von-dem-Hagen-Weg");
        break;
    }
    case 322291:
    {
        returnValue = F("Von-den-Berken-Str.");
        break;
    }
    case 322292:
    {
        returnValue = F("Von-den-Driesch-Str.");
        break;
    }
    case 322293:
    {
        returnValue = F("Von-den-Hoff-Platz");
        break;
    }
    case 322294:
    {
        returnValue = F("Von-den-Hoff-Str.");
        break;
    }
    case 322295:
    {
        returnValue = F("Von-der-Arken-Str.");
        break;
    }
    case 322296:
    {
        returnValue = F("Von-der-Au-Str.");
        break;
    }
    case 322297:
    {
        returnValue = F("Von-der-Borch-Str.");
        break;
    }
    case 322298:
    {
        returnValue = F("Von-der-Borg-Str.");
        break;
    }
    case 322299:
    {
        returnValue = F("Von-der-Cappel-Str.");
        break;
    }
    case 322300:
    {
        returnValue = F("Von-der-Decken-Str.");
        break;
    }
    case 322301:
    {
        returnValue = F("Von-der-Flüe-Platz");
        break;
    }
    case 322302:
    {
        returnValue = F("Von-der-Gabelentz-Str.");
        break;
    }
    case 322303:
    {
        returnValue = F("Von-der-Goltz-Allee");
        break;
    }
    case 322304:
    {
        returnValue = F("Von-der-Goltz-Str.");
        break;
    }
    case 322305:
    {
        returnValue = F("Von-der-Groeben-Str.");
        break;
    }
    case 322306:
    {
        returnValue = F("Von-der-Haar-Str.");
        break;
    }
    case 322307:
    {
        returnValue = F("Von-der-Helm-Str.");
        break;
    }
    case 322308:
    {
        returnValue = F("Von-der-Heyde-Str.");
        break;
    }
    case 322309:
    {
        returnValue = F("Von-der-Heydestr.");
        break;
    }
    case 322310:
    {
        returnValue = F("Von-der-Heydt");
        break;
    }
    case 322311:
    {
        returnValue = F("Von-der-Heydt-Park");
        break;
    }
    case 322312:
    {
        returnValue = F("Von-der-Heydt-Str.");
        break;
    }
    case 322313:
    {
        returnValue = F("Von-der-Heydter-Brücke");
        break;
    }
    case 322314:
    {
        returnValue = F("Von-der-Horst-Str.");
        break;
    }
    case 322315:
    {
        returnValue = F("Von-der-Horst-Weg");
        break;
    }
    case 322316:
    {
        returnValue = F("Von-der-Kere-Weg");
        break;
    }
    case 322317:
    {
        returnValue = F("Von-der-Kuhlen-Str.");
        break;
    }
    case 322318:
    {
        returnValue = F("Von-der-Leyen-Str.");
        break;
    }
    case 322319:
    {
        returnValue = F("Von-der-Leyenstr.");
        break;
    }
    case 322320:
    {
        returnValue = F("Von-der-Lieth-Weg");
        break;
    }
    case 322321:
    {
        returnValue = F("Von-der-Marck-Str.");
        break;
    }
    case 322322:
    {
        returnValue = F("Von-der-Mark-Str.");
        break;
    }
    case 322323:
    {
        returnValue = F("Von-der-Marwitz-Weg");
        break;
    }
    case 322324:
    {
        returnValue = F("Von-der-Meden-Weg");
        break;
    }
    case 322325:
    {
        returnValue = F("Von-der-Mühle-Eckart-Str.");
        break;
    }
    case 322326:
    {
        returnValue = F("Von-der-Pfordten-Str.");
        break;
    }
    case 322327:
    {
        returnValue = F("Von-der-Porten-Str.");
        break;
    }
    case 322328:
    {
        returnValue = F("Von-der-Reck-Str.");
        break;
    }
    case 322329:
    {
        returnValue = F("Von-der-Recke-Str.");
        break;
    }
    case 322330:
    {
        returnValue = F("Von-der-Schulenburg-Str.");
        break;
    }
    case 322331:
    {
        returnValue = F("Von-der-Sitt-Str.");
        break;
    }
    case 322332:
    {
        returnValue = F("Von-der-Tann Str.");
        break;
    }
    case 322333:
    {
        returnValue = F("Von-der-Tann-Str.");
        break;
    }
    case 322334:
    {
        returnValue = F("Von-der-Thann-Str.");
        break;
    }
    case 322335:
    {
        returnValue = F("Von-der-Thann-Weg");
        break;
    }
    case 322336:
    {
        returnValue = F("Von-der-Trenk-Weg");
        break;
    }
    case 322337:
    {
        returnValue = F("Von-der-Wahl-Str.");
        break;
    }
    case 322338:
    {
        returnValue = F("Von-der-Wense-Weg");
        break;
    }
    case 322339:
    {
        returnValue = F("Von-der-Wisch-Str.");
        break;
    }
    case 322340:
    {
        returnValue = F("Von-und-zu-Franckenstein-Str.");
        break;
    }
    case 322341:
    {
        returnValue = F("Von-Öttingen-Str.");
        break;
    }
    case 322342:
    {
        returnValue = F("Von.Gadenstedt-Weg");
        break;
    }
    case 322343:
    {
        returnValue = F("Vonbrunngasse");
        break;
    }
    case 322344:
    {
        returnValue = F("Vonderbeckweg");
        break;
    }
    case 322345:
    {
        returnValue = F("Vonderbergstr.");
        break;
    }
    case 322346:
    {
        returnValue = F("Vonderorter Str.");
        break;
    }
    case 322347:
    {
        returnValue = F("Vondersweg");
        break;
    }
    case 322348:
    {
        returnValue = F("Vondeystr.");
        break;
    }
    case 322349:
    {
        returnValue = F("Vonfichtstr.");
        break;
    }
    case 322350:
    {
        returnValue = F("Vonhäuser Str.");
        break;
    }
    case 322351:
    {
        returnValue = F("Vonhäuser Weg");
        break;
    }
    case 322352:
    {
        returnValue = F("Vonierweg");
        break;
    }
    case 322353:
    {
        returnValue = F("Vonkeln");
        break;
    }
    case 322354:
    {
        returnValue = F("Vonnesstr.");
        break;
    }
    case 322355:
    {
        returnValue = F("Vonsbach");
        break;
    }
    case 322356:
    {
        returnValue = F("Vonscheidts Hof");
        break;
    }
    case 322357:
    {
        returnValue = F("Voogds-Gruener-Weg");
        break;
    }
    case 322358:
    {
        returnValue = F("Voogtskamp");
        break;
    }
    case 322359:
    {
        returnValue = F("Voorder Winkel");
        break;
    }
    case 322360:
    {
        returnValue = F("Voorenbreede");
        break;
    }
    case 322361:
    {
        returnValue = F("Voorthuysen");
        break;
    }
    case 322362:
    {
        returnValue = F("Voortkapeler Str.");
        break;
    }
    case 322363:
    {
        returnValue = F("Voorwoldstr.");
        break;
    }
    case 322364:
    {
        returnValue = F("Voosen");
        break;
    }
    case 322365:
    {
        returnValue = F("Voosener Str.");
        break;
    }
    case 322366:
    {
        returnValue = F("Vopeliusstr.");
        break;
    }
    case 322367:
    {
        returnValue = F("Vor Bettenborn");
        break;
    }
    case 322368:
    {
        returnValue = F("Vor Birk");
        break;
    }
    case 322369:
    {
        returnValue = F("Vor Bolten Hofe");
        break;
    }
    case 322370:
    {
        returnValue = F("Vor Borret");
        break;
    }
    case 322371:
    {
        returnValue = F("Vor Boxlen");
        break;
    }
    case 322372:
    {
        returnValue = F("Vor Brach");
        break;
    }
    case 322373:
    {
        returnValue = F("Vor Brakens Höhe");
        break;
    }
    case 322374:
    {
        returnValue = F("Vor Brewater");
        break;
    }
    case 322375:
    {
        returnValue = F("Vor Buch Weg");
        break;
    }
    case 322376:
    {
        returnValue = F("Vor Buchen");
        break;
    }
    case 322377:
    {
        returnValue = F("Vor Buchhalden");
        break;
    }
    case 322378:
    {
        returnValue = F("Vor Buchholz");
        break;
    }
    case 322379:
    {
        returnValue = F("Vor Burggraben");
        break;
    }
    case 322380:
    {
        returnValue = F("Vor Der Linde");
        break;
    }
    case 322381:
    {
        returnValue = F("Vor Dreifallen");
        break;
    }
    case 322382:
    {
        returnValue = F("Vor Ebersbach");
        break;
    }
    case 322383:
    {
        returnValue = F("Vor Ehrling");
        break;
    }
    case 322384:
    {
        returnValue = F("Vor Eichen");
        break;
    }
    case 322385:
    {
        returnValue = F("Vor Eichhalde");
        break;
    }
    case 322386:
    {
        returnValue = F("Vor Elsenloch");
        break;
    }
    case 322387:
    {
        returnValue = F("Vor Erdlinsbach");
        break;
    }
    case 322388:
    {
        returnValue = F("Vor Eulersbach");
        break;
    }
    case 322389:
    {
        returnValue = F("Vor Ferdinandshaus");
        break;
    }
    case 322390:
    {
        returnValue = F("Vor Forst");
        break;
    }
    case 322391:
    {
        returnValue = F("Vor Gonsert");
        break;
    }
    case 322392:
    {
        returnValue = F("Vor Gruben");
        break;
    }
    case 322393:
    {
        returnValue = F("Vor Gumbelsbach");
        break;
    }
    case 322394:
    {
        returnValue = F("Vor Haardt");
        break;
    }
    case 322395:
    {
        returnValue = F("Vor Hahlen");
        break;
    }
    case 322396:
    {
        returnValue = F("Vor Hahn");
        break;
    }
    case 322397:
    {
        returnValue = F("Vor Harms Holt");
        break;
    }
    case 322398:
    {
        returnValue = F("Vor Haslen");
        break;
    }
    case 322399:
    {
        returnValue = F("Vor Heibel");
        break;
    }
    case 322400:
    {
        returnValue = F("Vor Heimbären");
        break;
    }
    case 322401:
    {
        returnValue = F("Vor Hellert");
        break;
    }
    case 322402:
    {
        returnValue = F("Vor Heubach");
        break;
    }
    case 322403:
    {
        returnValue = F("Vor Holz");
        break;
    }
    case 322404:
    {
        returnValue = F("Vor Hunsel");
        break;
    }
    case 322405:
    {
        returnValue = F("Vor Hägin");
        break;
    }
    case 322406:
    {
        returnValue = F("Vor Härtenbach");
        break;
    }
    case 322407:
    {
        returnValue = F("Vor Jähren");
        break;
    }
    case 322408:
    {
        returnValue = F("Vor Kasels");
        break;
    }
    case 322409:
    {
        returnValue = F("Vor Kassels");
        break;
    }
    case 322410:
    {
        returnValue = F("Vor Kiesel");
        break;
    }
    case 322411:
    {
        returnValue = F("Vor Klopp");
        break;
    }
    case 322412:
    {
        returnValue = F("Vor Kuhbach");
        break;
    }
    case 322413:
    {
        returnValue = F("Vor Kyllerhöhe");
        break;
    }
    case 322414:
    {
        returnValue = F("Vor Lau");
        break;
    }
    case 322415:
    {
        returnValue = F("Vor Lauterbachs Tür");
        break;
    }
    case 322416:
    {
        returnValue = F("Vor Löw");
        break;
    }
    case 322417:
    {
        returnValue = F("Vor Mönchsgarten");
        break;
    }
    case 322418:
    {
        returnValue = F("Vor Nack");
        break;
    }
    case 322419:
    {
        returnValue = F("Vor Ort");
        break;
    }
    case 322420:
    {
        returnValue = F("Vor Pastors Busch");
        break;
    }
    case 322421:
    {
        returnValue = F("Vor Pfuhlbüsch");
        break;
    }
    case 322422:
    {
        returnValue = F("Vor Plein");
        break;
    }
    case 322423:
    {
        returnValue = F("Vor Reitenberg");
        break;
    }
    case 322424:
    {
        returnValue = F("Vor Remig");
        break;
    }
    case 322425:
    {
        returnValue = F("Vor Schwickers Keller");
        break;
    }
    case 322426:
    {
        returnValue = F("Vor Schwärzen");
        break;
    }
    case 322427:
    {
        returnValue = F("Vor Seiters");
        break;
    }
    case 322428:
    {
        returnValue = F("Vor Seitert");
        break;
    }
    case 322429:
    {
        returnValue = F("Vor Selms");
        break;
    }
    case 322430:
    {
        returnValue = F("Vor Singersbach");
        break;
    }
    case 322431:
    {
        returnValue = F("Vor Steigen");
        break;
    }
    case 322432:
    {
        returnValue = F("Vor Steinbeul");
        break;
    }
    case 322433:
    {
        returnValue = F("Vor Sterg");
        break;
    }
    case 322434:
    {
        returnValue = F("Vor Stoppelbergs Hause");
        break;
    }
    case 322435:
    {
        returnValue = F("Vor Tannen");
        break;
    }
    case 322436:
    {
        returnValue = F("Vor Theren");
        break;
    }
    case 322437:
    {
        returnValue = F("Vor Thurant");
        break;
    }
    case 322438:
    {
        returnValue = F("Vor Viehland");
        break;
    }
    case 322439:
    {
        returnValue = F("Vor Vierhausen");
        break;
    }
    case 322440:
    {
        returnValue = F("Vor Waldbeerbaum");
        break;
    }
    case 322441:
    {
        returnValue = F("Vor Weiden");
        break;
    }
    case 322442:
    {
        returnValue = F("Vor Weilersberg");
        break;
    }
    case 322443:
    {
        returnValue = F("Vor Weillend");
        break;
    }
    case 322444:
    {
        returnValue = F("Vor Weinstein");
        break;
    }
    case 322445:
    {
        returnValue = F("Vor Weitzmühlen");
        break;
    }
    case 322446:
    {
        returnValue = F("Vor Weltersbühl");
        break;
    }
    case 322447:
    {
        returnValue = F("Vor Westerlau");
        break;
    }
    case 322448:
    {
        returnValue = F("Vor Wetzelscheid");
        break;
    }
    case 322449:
    {
        returnValue = F("Vor Weyerdeelen");
        break;
    }
    case 322450:
    {
        returnValue = F("Vor dem Ahlsberg");
        break;
    }
    case 322451:
    {
        returnValue = F("Vor dem Altenberg");
        break;
    }
    case 322452:
    {
        returnValue = F("Vor dem Amt");
        break;
    }
    case 322453:
    {
        returnValue = F("Vor dem Anger");
        break;
    }
    case 322454:
    {
        returnValue = F("Vor dem Anker");
        break;
    }
    case 322455:
    {
        returnValue = F("Vor dem Anspacher Berg");
        break;
    }
    case 322456:
    {
        returnValue = F("Vor dem Asbach");
        break;
    }
    case 322457:
    {
        returnValue = F("Vor dem Attenberg");
        break;
    }
    case 322458:
    {
        returnValue = F("Vor dem Aussichtsturm");
        break;
    }
    case 322459:
    {
        returnValue = F("Vor dem Badenhop");
        break;
    }
    case 322460:
    {
        returnValue = F("Vor dem Bahnhof");
        break;
    }
    case 322461:
    {
        returnValue = F("Vor dem Balken");
        break;
    }
    case 322462:
    {
        returnValue = F("Vor dem Band");
        break;
    }
    case 322463:
    {
        returnValue = F("Vor dem Bangert");
        break;
    }
    case 322464:
    {
        returnValue = F("Vor dem Bardowicker Felde");
        break;
    }
    case 322465:
    {
        returnValue = F("Vor dem Bardowicker Tore");
        break;
    }
    case 322466:
    {
        returnValue = F("Vor dem Bauernwald");
        break;
    }
    case 322467:
    {
        returnValue = F("Vor dem Baumhof");
        break;
    }
    case 322468:
    {
        returnValue = F("Vor dem Belsgraben");
        break;
    }
    case 322469:
    {
        returnValue = F("Vor dem Berg");
        break;
    }
    case 322470:
    {
        returnValue = F("Vor dem Berge");
        break;
    }
    case 322471:
    {
        returnValue = F("Vor dem Beul");
        break;
    }
    case 322472:
    {
        returnValue = F("Vor dem Birkenkamp");
        break;
    }
    case 322473:
    {
        returnValue = F("Vor dem Blumberg");
        break;
    }
    case 322474:
    {
        returnValue = F("Vor dem Blöcken");
        break;
    }
    case 322475:
    {
        returnValue = F("Vor dem Boorm");
        break;
    }
    case 322476:
    {
        returnValue = F("Vor dem Borstel");
        break;
    }
    case 322477:
    {
        returnValue = F("Vor dem Bovenberg");
        break;
    }
    case 322478:
    {
        returnValue = F("Vor dem Brande");
        break;
    }
    case 322479:
    {
        returnValue = F("Vor dem Brannen");
        break;
    }
    case 322480:
    {
        returnValue = F("Vor dem Brauel");
        break;
    }
    case 322481:
    {
        returnValue = F("Vor dem Braunschweiger Tor");
        break;
    }
    case 322482:
    {
        returnValue = F("Vor dem Breiten Stein");
        break;
    }
    case 322483:
    {
        returnValue = F("Vor dem Brinke");
        break;
    }
    case 322484:
    {
        returnValue = F("Vor dem Brommelsberg");
        break;
    }
    case 322485:
    {
        returnValue = F("Vor dem Brook");
        break;
    }
    case 322486:
    {
        returnValue = F("Vor dem Bruch");
        break;
    }
    case 322487:
    {
        returnValue = F("Vor dem Bruche");
        break;
    }
    case 322488:
    {
        returnValue = F("Vor dem Brückentor");
        break;
    }
    case 322489:
    {
        returnValue = F("Vor dem Brücktor");
        break;
    }
    case 322490:
    {
        returnValue = F("Vor dem Brühl");
        break;
    }
    case 322491:
    {
        returnValue = F("Vor dem Buchholze");
        break;
    }
    case 322492:
    {
        returnValue = F("Vor dem Buchwald");
        break;
    }
    case 322493:
    {
        returnValue = F("Vor dem Buckel");
        break;
    }
    case 322494:
    {
        returnValue = F("Vor dem Bundeberg");
        break;
    }
    case 322495:
    {
        returnValue = F("Vor dem Busch");
        break;
    }
    case 322496:
    {
        returnValue = F("Vor dem Buschart");
        break;
    }
    case 322497:
    {
        returnValue = F("Vor dem Busche");
        break;
    }
    case 322498:
    {
        returnValue = F("Vor dem Butterberg");
        break;
    }
    case 322499:
    {
        returnValue = F("Vor dem Böhmen");
        break;
    }
    case 322500:
    {
        returnValue = F("Vor dem Büchenberg");
        break;
    }
    case 322501:
    {
        returnValue = F("Vor dem Celler Tor");
        break;
    }
    case 322502:
    {
        returnValue = F("Vor dem Clauswerth");
        break;
    }
    case 322503:
    {
        returnValue = F("Vor dem Damm");
        break;
    }
    case 322504:
    {
        returnValue = F("Vor dem Dammtor");
        break;
    }
    case 322505:
    {
        returnValue = F("Vor dem Deich");
        break;
    }
    case 322506:
    {
        returnValue = F("Vor dem Deichtor");
        break;
    }
    case 322507:
    {
        returnValue = F("Vor dem Deister");
        break;
    }
    case 322508:
    {
        returnValue = F("Vor dem Delftor");
        break;
    }
    case 322509:
    {
        returnValue = F("Vor dem Delltor");
        break;
    }
    case 322510:
    {
        returnValue = F("Vor dem Dickenhahn");
        break;
    }
    case 322511:
    {
        returnValue = F("Vor dem Dorf");
        break;
    }
    case 322512:
    {
        returnValue = F("Vor dem Dorfe");
        break;
    }
    case 322513:
    {
        returnValue = F("Vor dem Dorn");
        break;
    }
    case 322514:
    {
        returnValue = F("Vor dem Dreeser Tor");
        break;
    }
    case 322515:
    {
        returnValue = F("Vor dem Driesch");
        break;
    }
    case 322516:
    {
        returnValue = F("Vor dem Drostentor");
        break;
    }
    case 322517:
    {
        returnValue = F("Vor dem Durchgang");
        break;
    }
    case 322518:
    {
        returnValue = F("Vor dem Eichberg");
        break;
    }
    case 322519:
    {
        returnValue = F("Vor dem Eichberge");
        break;
    }
    case 322520:
    {
        returnValue = F("Vor dem Eichhain");
        break;
    }
    case 322521:
    {
        returnValue = F("Vor dem Eichholz");
        break;
    }
    case 322522:
    {
        returnValue = F("Vor dem Eickhoop");
        break;
    }
    case 322523:
    {
        returnValue = F("Vor dem Einoth");
        break;
    }
    case 322524:
    {
        returnValue = F("Vor dem Eisberge");
        break;
    }
    case 322525:
    {
        returnValue = F("Vor dem Elfas");
        break;
    }
    case 322526:
    {
        returnValue = F("Vor dem Eller");
        break;
    }
    case 322527:
    {
        returnValue = F("Vor dem Ellershagen");
        break;
    }
    case 322528:
    {
        returnValue = F("Vor dem Elm");
        break;
    }
    case 322529:
    {
        returnValue = F("Vor dem Erfurter Tore");
        break;
    }
    case 322530:
    {
        returnValue = F("Vor dem Erzberge");
        break;
    }
    case 322531:
    {
        returnValue = F("Vor dem Esch");
        break;
    }
    case 322532:
    {
        returnValue = F("Vor dem Eschend");
        break;
    }
    case 322533:
    {
        returnValue = F("Vor dem Falltor");
        break;
    }
    case 322534:
    {
        returnValue = F("Vor dem Fang");
        break;
    }
    case 322535:
    {
        returnValue = F("Vor dem Fege");
        break;
    }
    case 322536:
    {
        returnValue = F("Vor dem Feld");
        break;
    }
    case 322537:
    {
        returnValue = F("Vor dem Felde");
        break;
    }
    case 322538:
    {
        returnValue = F("Vor dem Fensterlande");
        break;
    }
    case 322539:
    {
        returnValue = F("Vor dem Flach");
        break;
    }
    case 322540:
    {
        returnValue = F("Vor dem Flecken");
        break;
    }
    case 322541:
    {
        returnValue = F("Vor dem Forde");
        break;
    }
    case 322542:
    {
        returnValue = F("Vor dem Forst");
        break;
    }
    case 322543:
    {
        returnValue = F("Vor dem Forsthaus");
        break;
    }
    case 322544:
    {
        returnValue = F("Vor dem Friedhof");
        break;
    }
    case 322545:
    {
        returnValue = F("Vor dem Fuhrenkamp");
        break;
    }
    case 322546:
    {
        returnValue = F("Vor dem Fürstenhof");
        break;
    }
    case 322547:
    {
        returnValue = F("Vor dem Gatter");
        break;
    }
    case 322548:
    {
        returnValue = F("Vor dem Gebrannten");
        break;
    }
    case 322549:
    {
        returnValue = F("Vor dem Gehrn");
        break;
    }
    case 322550:
    {
        returnValue = F("Vor dem Gemeindeberge");
        break;
    }
    case 322551:
    {
        returnValue = F("Vor dem Gerbertor");
        break;
    }
    case 322552:
    {
        returnValue = F("Vor dem Gereut");
        break;
    }
    case 322553:
    {
        returnValue = F("Vor dem Glauchauer Tor");
        break;
    }
    case 322554:
    {
        returnValue = F("Vor dem Gotteslager");
        break;
    }
    case 322555:
    {
        returnValue = F("Vor dem Graben");
        break;
    }
    case 322556:
    {
        returnValue = F("Vor dem Grabensmoor");
        break;
    }
    case 322557:
    {
        returnValue = F("Vor dem Grevenkoper Tor");
        break;
    }
    case 322558:
    {
        returnValue = F("Vor dem Grimms");
        break;
    }
    case 322559:
    {
        returnValue = F("Vor dem Großen Holz");
        break;
    }
    case 322560:
    {
        returnValue = F("Vor dem Gröperntor");
        break;
    }
    case 322561:
    {
        returnValue = F("Vor dem Grünlaube");
        break;
    }
    case 322562:
    {
        returnValue = F("Vor dem Haagtor");
        break;
    }
    case 322563:
    {
        returnValue = F("Vor dem Haderholz");
        break;
    }
    case 322564:
    {
        returnValue = F("Vor dem Hag");
        break;
    }
    case 322565:
    {
        returnValue = F("Vor dem Hagen");
        break;
    }
    case 322566:
    {
        returnValue = F("Vor dem Hagentor");
        break;
    }
    case 322567:
    {
        returnValue = F("Vor dem Hahnenberg");
        break;
    }
    case 322568:
    {
        returnValue = F("Vor dem Hain");
        break;
    }
    case 322569:
    {
        returnValue = F("Vor dem Hainberg");
        break;
    }
    case 322570:
    {
        returnValue = F("Vor dem Halberstädter Tor");
        break;
    }
    case 322571:
    {
        returnValue = F("Vor dem Haldenwald");
        break;
    }
    case 322572:
    {
        returnValue = F("Vor dem Halleschen Tor");
        break;
    }
    case 322573:
    {
        returnValue = F("Vor dem Hammer");
        break;
    }
    case 322574:
    {
        returnValue = F("Vor dem Hamstertor");
        break;
    }
    case 322575:
    {
        returnValue = F("Vor dem Hannoverschen Tor");
        break;
    }
    case 322576:
    {
        returnValue = F("Vor dem Harret");
        break;
    }
    case 322577:
    {
        returnValue = F("Vor dem Hau");
        break;
    }
    case 322578:
    {
        returnValue = F("Vor dem Haun");
        break;
    }
    case 322579:
    {
        returnValue = F("Vor dem Haveltor");
        break;
    }
    case 322580:
    {
        returnValue = F("Vor dem Haßel");
        break;
    }
    case 322581:
    {
        returnValue = F("Vor dem Heeg");
        break;
    }
    case 322582:
    {
        returnValue = F("Vor dem Heegen");
        break;
    }
    case 322583:
    {
        returnValue = F("Vor dem Heesing");
        break;
    }
    case 322584:
    {
        returnValue = F("Vor dem Heeßel");
        break;
    }
    case 322585:
    {
        returnValue = F("Vor dem Hegwald");
        break;
    }
    case 322586:
    {
        returnValue = F("Vor dem Heidenkopf");
        break;
    }
    case 322587:
    {
        returnValue = F("Vor dem Heik");
        break;
    }
    case 322588:
    {
        returnValue = F("Vor dem Heiligenberg");
        break;
    }
    case 322589:
    {
        returnValue = F("Vor dem Heisterberg");
        break;
    }
    case 322590:
    {
        returnValue = F("Vor dem Heisterbusch");
        break;
    }
    case 322591:
    {
        returnValue = F("Vor dem Heldshahn");
        break;
    }
    case 322592:
    {
        returnValue = F("Vor dem Heller");
        break;
    }
    case 322593:
    {
        returnValue = F("Vor dem Hellersberg");
        break;
    }
    case 322594:
    {
        returnValue = F("Vor dem Helmskamp");
        break;
    }
    case 322595:
    {
        returnValue = F("Vor dem Herrenbach");
        break;
    }
    case 322596:
    {
        returnValue = F("Vor dem Heukenberg");
        break;
    }
    case 322597:
    {
        returnValue = F("Vor dem Hexenberg");
        break;
    }
    case 322598:
    {
        returnValue = F("Vor dem Hillah");
        break;
    }
    case 322599:
    {
        returnValue = F("Vor dem Hirschloh");
        break;
    }
    case 322600:
    {
        returnValue = F("Vor dem Hirtentore");
        break;
    }
    case 322601:
    {
        returnValue = F("Vor dem Hirtstor");
        break;
    }
    case 322602:
    {
        returnValue = F("Vor dem Hof");
        break;
    }
    case 322603:
    {
        returnValue = F("Vor dem Hofe");
        break;
    }
    case 322604:
    {
        returnValue = F("Vor dem Hohen Stieg");
        break;
    }
    case 322605:
    {
        returnValue = F("Vor dem Hohen Tor");
        break;
    }
    case 322606:
    {
        returnValue = F("Vor dem Hollen");
        break;
    }
    case 322607:
    {
        returnValue = F("Vor dem Holz");
        break;
    }
    case 322608:
    {
        returnValue = F("Vor dem Holzberge");
        break;
    }
    case 322609:
    {
        returnValue = F("Vor dem Holzborn");
        break;
    }
    case 322610:
    {
        returnValue = F("Vor dem Holze");
        break;
    }
    case 322611:
    {
        returnValue = F("Vor dem Holzhäuser Tor");
        break;
    }
    case 322612:
    {
        returnValue = F("Vor dem Hopey");
        break;
    }
    case 322613:
    {
        returnValue = F("Vor dem Hornwerk");
        break;
    }
    case 322614:
    {
        returnValue = F("Vor dem Hospitaltore");
        break;
    }
    case 322615:
    {
        returnValue = F("Vor dem Huchte");
        break;
    }
    case 322616:
    {
        returnValue = F("Vor dem Hummelholz");
        break;
    }
    case 322617:
    {
        returnValue = F("Vor dem Hummelsholz");
        break;
    }
    case 322618:
    {
        returnValue = F("Vor dem Hämig");
        break;
    }
    case 322619:
    {
        returnValue = F("Vor dem Härdle");
        break;
    }
    case 322620:
    {
        returnValue = F("Vor dem Hölzchen");
        break;
    }
    case 322621:
    {
        returnValue = F("Vor dem Immesberge");
        break;
    }
    case 322622:
    {
        returnValue = F("Vor dem Isern");
        break;
    }
    case 322623:
    {
        returnValue = F("Vor dem Ishoop");
        break;
    }
    case 322624:
    {
        returnValue = F("Vor dem Ith");
        break;
    }
    case 322625:
    {
        returnValue = F("Vor dem Jechator");
        break;
    }
    case 322626:
    {
        returnValue = F("Vor dem Johannestor");
        break;
    }
    case 322627:
    {
        returnValue = F("Vor dem Johannistor");
        break;
    }
    case 322628:
    {
        returnValue = F("Vor dem Junkernhof");
        break;
    }
    case 322629:
    {
        returnValue = F("Vor dem Jürgensberg");
        break;
    }
    case 322630:
    {
        returnValue = F("Vor dem Kahlen Hahn");
        break;
    }
    case 322631:
    {
        returnValue = F("Vor dem Kahlenberge");
        break;
    }
    case 322632:
    {
        returnValue = F("Vor dem Kaiserdom");
        break;
    }
    case 322633:
    {
        returnValue = F("Vor dem Kalk");
        break;
    }
    case 322634:
    {
        returnValue = F("Vor dem Kamp");
        break;
    }
    case 322635:
    {
        returnValue = F("Vor dem Kampe");
        break;
    }
    case 322636:
    {
        returnValue = F("Vor dem Kanaltor");
        break;
    }
    case 322637:
    {
        returnValue = F("Vor dem Kapellentor");
        break;
    }
    case 322638:
    {
        returnValue = F("Vor dem Kelkertor");
        break;
    }
    case 322639:
    {
        returnValue = F("Vor dem Kienmoor");
        break;
    }
    case 322640:
    {
        returnValue = F("Vor dem Kies");
        break;
    }
    case 322641:
    {
        returnValue = F("Vor dem Kietz");
        break;
    }
    case 322642:
    {
        returnValue = F("Vor dem Kirchenholz");
        break;
    }
    case 322643:
    {
        returnValue = F("Vor dem Kirchenwald");
        break;
    }
    case 322644:
    {
        returnValue = F("Vor dem Kirchforst");
        break;
    }
    case 322645:
    {
        returnValue = F("Vor dem Kirchhof");
        break;
    }
    case 322646:
    {
        returnValue = F("Vor dem Kirchtor");
        break;
    }
    case 322647:
    {
        returnValue = F("Vor dem Kirchtore");
        break;
    }
    case 322648:
    {
        returnValue = F("Vor dem Kirchweg");
        break;
    }
    case 322649:
    {
        returnValue = F("Vor dem Kirschberg");
        break;
    }
    case 322650:
    {
        returnValue = F("Vor dem Klagetor");
        break;
    }
    case 322651:
    {
        returnValue = F("Vor dem Klapp");
        break;
    }
    case 322652:
    {
        returnValue = F("Vor dem Klausentor");
        break;
    }
    case 322653:
    {
        returnValue = F("Vor dem Kleinen Holze");
        break;
    }
    case 322654:
    {
        returnValue = F("Vor dem Klopp");
        break;
    }
    case 322655:
    {
        returnValue = F("Vor dem Kloster");
        break;
    }
    case 322656:
    {
        returnValue = F("Vor dem Klosterhof");
        break;
    }
    case 322657:
    {
        returnValue = F("Vor dem Klosterwald");
        break;
    }
    case 322658:
    {
        returnValue = F("Vor dem Knick");
        break;
    }
    case 322659:
    {
        returnValue = F("Vor dem Koboldsberg");
        break;
    }
    case 322660:
    {
        returnValue = F("Vor dem Kolem");
        break;
    }
    case 322661:
    {
        returnValue = F("Vor dem Kollmoor");
        break;
    }
    case 322662:
    {
        returnValue = F("Vor dem Kranzenberg");
        break;
    }
    case 322663:
    {
        returnValue = F("Vor dem Kremper Tor");
        break;
    }
    case 322664:
    {
        returnValue = F("Vor dem Kreuz");
        break;
    }
    case 322665:
    {
        returnValue = F("Vor dem Kreuzberg");
        break;
    }
    case 322666:
    {
        returnValue = F("Vor dem Kreuze");
        break;
    }
    case 322667:
    {
        returnValue = F("Vor dem Kreuztal");
        break;
    }
    case 322668:
    {
        returnValue = F("Vor dem Kreuztor");
        break;
    }
    case 322669:
    {
        returnValue = F("Vor dem Kreyenhoop");
        break;
    }
    case 322670:
    {
        returnValue = F("Vor dem Künneckenberg");
        break;
    }
    case 322671:
    {
        returnValue = F("Vor dem Kütiner Tor");
        break;
    }
    case 322672:
    {
        returnValue = F("Vor dem Langen Loh");
        break;
    }
    case 322673:
    {
        returnValue = F("Vor dem Langenberg");
        break;
    }
    case 322674:
    {
        returnValue = F("Vor dem Langholz");
        break;
    }
    case 322675:
    {
        returnValue = F("Vor dem Leetor");
        break;
    }
    case 322676:
    {
        returnValue = F("Vor dem Leipziger Tor");
        break;
    }
    case 322677:
    {
        returnValue = F("Vor dem Lieh");
        break;
    }
    case 322678:
    {
        returnValue = F("Vor dem Lindenberg");
        break;
    }
    case 322679:
    {
        returnValue = F("Vor dem Lindendamm");
        break;
    }
    case 322680:
    {
        returnValue = F("Vor dem Lindentore");
        break;
    }
    case 322681:
    {
        returnValue = F("Vor dem Lister");
        break;
    }
    case 322682:
    {
        returnValue = F("Vor dem Loh");
        break;
    }
    case 322683:
    {
        returnValue = F("Vor dem Lohe");
        break;
    }
    case 322684:
    {
        returnValue = F("Vor dem Lohholze");
        break;
    }
    case 322685:
    {
        returnValue = F("Vor dem Loog");
        break;
    }
    case 322686:
    {
        returnValue = F("Vor dem Löh");
        break;
    }
    case 322687:
    {
        returnValue = F("Vor dem Lüchower Tor");
        break;
    }
    case 322688:
    {
        returnValue = F("Vor dem Meißner Tor");
        break;
    }
    case 322689:
    {
        returnValue = F("Vor dem Melmen");
        break;
    }
    case 322690:
    {
        returnValue = F("Vor dem Moor");
        break;
    }
    case 322691:
    {
        returnValue = F("Vor dem Moore");
        break;
    }
    case 322692:
    {
        returnValue = F("Vor dem Morgenstern");
        break;
    }
    case 322693:
    {
        returnValue = F("Vor dem Muldedamm");
        break;
    }
    case 322694:
    {
        returnValue = F("Vor dem Musenberge");
        break;
    }
    case 322695:
    {
        returnValue = F("Vor dem Mühlenberge");
        break;
    }
    case 322696:
    {
        returnValue = F("Vor dem Mühlentor");
        break;
    }
    case 322697:
    {
        returnValue = F("Vor dem Mühltor");
        break;
    }
    case 322698:
    {
        returnValue = F("Vor dem Nebraer Tor");
        break;
    }
    case 322699:
    {
        returnValue = F("Vor dem Nettelberg");
        break;
    }
    case 322700:
    {
        returnValue = F("Vor dem Neuen Damm");
        break;
    }
    case 322701:
    {
        returnValue = F("Vor dem Neuen Land");
        break;
    }
    case 322702:
    {
        returnValue = F("Vor dem Neuen Tor");
        break;
    }
    case 322703:
    {
        returnValue = F("Vor dem Neuen Tore");
        break;
    }
    case 322704:
    {
        returnValue = F("Vor dem Neuhaus");
        break;
    }
    case 322705:
    {
        returnValue = F("Vor dem Neukirchentor");
        break;
    }
    case 322706:
    {
        returnValue = F("Vor dem Neuperver Tor");
        break;
    }
    case 322707:
    {
        returnValue = F("Vor dem Neutor");
        break;
    }
    case 322708:
    {
        returnValue = F("Vor dem Niedertor");
        break;
    }
    case 322709:
    {
        returnValue = F("Vor dem Norde");
        break;
    }
    case 322710:
    {
        returnValue = F("Vor dem Nordhees");
        break;
    }
    case 322711:
    {
        returnValue = F("Vor dem Nordwald");
        break;
    }
    case 322712:
    {
        returnValue = F("Vor dem Nücksberg");
        break;
    }
    case 322713:
    {
        returnValue = F("Vor dem Oberhölzle");
        break;
    }
    case 322714:
    {
        returnValue = F("Vor dem Oberntore");
        break;
    }
    case 322715:
    {
        returnValue = F("Vor dem Obertor");
        break;
    }
    case 322716:
    {
        returnValue = F("Vor dem Obertore");
        break;
    }
    case 322717:
    {
        returnValue = F("Vor dem Ort");
        break;
    }
    case 322718:
    {
        returnValue = F("Vor dem Osterberg");
        break;
    }
    case 322719:
    {
        returnValue = F("Vor dem Osterholz");
        break;
    }
    case 322720:
    {
        returnValue = F("Vor dem Osterholze");
        break;
    }
    case 322721:
    {
        returnValue = F("Vor dem Pastiner Tor");
        break;
    }
    case 322722:
    {
        returnValue = F("Vor dem Peterstor");
        break;
    }
    case 322723:
    {
        returnValue = F("Vor dem Pfingstberg");
        break;
    }
    case 322724:
    {
        returnValue = F("Vor dem Pfingstbleek");
        break;
    }
    case 322725:
    {
        returnValue = F("Vor dem Polstück");
        break;
    }
    case 322726:
    {
        returnValue = F("Vor dem Queenbruch");
        break;
    }
    case 322727:
    {
        returnValue = F("Vor dem Rabensberg");
        break;
    }
    case 322728:
    {
        returnValue = F("Vor dem Raden");
        break;
    }
    case 322729:
    {
        returnValue = F("Vor dem Range");
        break;
    }
    case 322730:
    {
        returnValue = F("Vor dem Rehm");
        break;
    }
    case 322731:
    {
        returnValue = F("Vor dem Reisberg");
        break;
    }
    case 322732:
    {
        returnValue = F("Vor dem Reithbruch");
        break;
    }
    case 322733:
    {
        returnValue = F("Vor dem Renthof");
        break;
    }
    case 322734:
    {
        returnValue = F("Vor dem Rettberge");
        break;
    }
    case 322735:
    {
        returnValue = F("Vor dem Rheintor");
        break;
    }
    case 322736:
    {
        returnValue = F("Vor dem Richtmoor");
        break;
    }
    case 322737:
    {
        returnValue = F("Vor dem Riedtor");
        break;
    }
    case 322738:
    {
        returnValue = F("Vor dem Riepenberg");
        break;
    }
    case 322739:
    {
        returnValue = F("Vor dem Rittertor");
        break;
    }
    case 322740:
    {
        returnValue = F("Vor dem Rohre");
        break;
    }
    case 322741:
    {
        returnValue = F("Vor dem Rollgarten");
        break;
    }
    case 322742:
    {
        returnValue = F("Vor dem Rostocker Tor");
        break;
    }
    case 322743:
    {
        returnValue = F("Vor dem Roten Tore");
        break;
    }
    case 322744:
    {
        returnValue = F("Vor dem Rottland");
        break;
    }
    case 322745:
    {
        returnValue = F("Vor dem Rundling");
        break;
    }
    case 322746:
    {
        returnValue = F("Vor dem Rundum");
        break;
    }
    case 322747:
    {
        returnValue = F("Vor dem Rönneberge");
        break;
    }
    case 322748:
    {
        returnValue = F("Vor dem Rößling");
        break;
    }
    case 322749:
    {
        returnValue = F("Vor dem Rübenacker");
        break;
    }
    case 322750:
    {
        returnValue = F("Vor dem Rühner Tor");
        break;
    }
    case 322751:
    {
        returnValue = F("Vor dem Rüsch");
        break;
    }
    case 322752:
    {
        returnValue = F("Vor dem Salzwedeler Tor");
        break;
    }
    case 322753:
    {
        returnValue = F("Vor dem Sand");
        break;
    }
    case 322754:
    {
        returnValue = F("Vor dem Sandbeck");
        break;
    }
    case 322755:
    {
        returnValue = F("Vor dem Sandberg");
        break;
    }
    case 322756:
    {
        returnValue = F("Vor dem Sande");
        break;
    }
    case 322757:
    {
        returnValue = F("Vor dem Sanden");
        break;
    }
    case 322758:
    {
        returnValue = F("Vor dem Sandgraben");
        break;
    }
    case 322759:
    {
        returnValue = F("Vor dem Sauerwassertor");
        break;
    }
    case 322760:
    {
        returnValue = F("Vor dem Schafskamp");
        break;
    }
    case 322761:
    {
        returnValue = F("Vor dem Scheid");
        break;
    }
    case 322762:
    {
        returnValue = F("Vor dem Scheuerchen");
        break;
    }
    case 322763:
    {
        returnValue = F("Vor dem Schierpke");
        break;
    }
    case 322764:
    {
        returnValue = F("Vor dem Schifftor");
        break;
    }
    case 322765:
    {
        returnValue = F("Vor dem Schlehengraben");
        break;
    }
    case 322766:
    {
        returnValue = F("Vor dem Schleusentore");
        break;
    }
    case 322767:
    {
        returnValue = F("Vor dem Schlittenberg");
        break;
    }
    case 322768:
    {
        returnValue = F("Vor dem Schlosse");
        break;
    }
    case 322769:
    {
        returnValue = F("Vor dem Schloß");
        break;
    }
    case 322770:
    {
        returnValue = F("Vor dem Schloßtor");
        break;
    }
    case 322771:
    {
        returnValue = F("Vor dem Schneidelwald");
        break;
    }
    case 322772:
    {
        returnValue = F("Vor dem Schonekindtor");
        break;
    }
    case 322773:
    {
        returnValue = F("Vor dem Schorn");
        break;
    }
    case 322774:
    {
        returnValue = F("Vor dem Schulzentor");
        break;
    }
    case 322775:
    {
        returnValue = F("Vor dem Schwarzenkopf");
        break;
    }
    case 322776:
    {
        returnValue = F("Vor dem Schäferberg");
        break;
    }
    case 322777:
    {
        returnValue = F("Vor dem Schöneberger Tor");
        break;
    }
    case 322778:
    {
        returnValue = F("Vor dem Schülertor");
        break;
    }
    case 322779:
    {
        returnValue = F("Vor dem Schültingertor");
        break;
    }
    case 322780:
    {
        returnValue = F("Vor dem See");
        break;
    }
    case 322781:
    {
        returnValue = F("Vor dem Seehäuser Tor");
        break;
    }
    case 322782:
    {
        returnValue = F("Vor dem Seemoor");
        break;
    }
    case 322783:
    {
        returnValue = F("Vor dem Seifen");
        break;
    }
    case 322784:
    {
        returnValue = F("Vor dem Siechhof");
        break;
    }
    case 322785:
    {
        returnValue = F("Vor dem Siegen");
        break;
    }
    case 322786:
    {
        returnValue = F("Vor dem Silberg");
        break;
    }
    case 322787:
    {
        returnValue = F("Vor dem Slavertore");
        break;
    }
    case 322788:
    {
        returnValue = F("Vor dem Speer");
        break;
    }
    case 322789:
    {
        returnValue = F("Vor dem Sportplatz");
        break;
    }
    case 322790:
    {
        returnValue = F("Vor dem Stachenrod");
        break;
    }
    case 322791:
    {
        returnValue = F("Vor dem Stadtberge");
        break;
    }
    case 322792:
    {
        returnValue = F("Vor dem Staufenberg");
        break;
    }
    case 322793:
    {
        returnValue = F("Vor dem Steg");
        break;
    }
    case 322794:
    {
        returnValue = F("Vor dem Stein");
        break;
    }
    case 322795:
    {
        returnValue = F("Vor dem Steinchen");
        break;
    }
    case 322796:
    {
        returnValue = F("Vor dem Steinkippel");
        break;
    }
    case 322797:
    {
        returnValue = F("Vor dem Steintor");
        break;
    }
    case 322798:
    {
        returnValue = F("Vor dem Stiegel");
        break;
    }
    case 322799:
    {
        returnValue = F("Vor dem Stockfeld");
        break;
    }
    case 322800:
    {
        returnValue = F("Vor dem Stodt");
        break;
    }
    case 322801:
    {
        returnValue = F("Vor dem Sträßchen");
        break;
    }
    case 322802:
    {
        returnValue = F("Vor dem Stuck");
        break;
    }
    case 322803:
    {
        returnValue = F("Vor dem Stöffel");
        break;
    }
    case 322804:
    {
        returnValue = F("Vor dem Sudentor");
        break;
    }
    case 322805:
    {
        returnValue = F("Vor dem Tagebau");
        break;
    }
    case 322806:
    {
        returnValue = F("Vor dem Tal");
        break;
    }
    case 322807:
    {
        returnValue = F("Vor dem Teich");
        break;
    }
    case 322808:
    {
        returnValue = F("Vor dem Teichdamme");
        break;
    }
    case 322809:
    {
        returnValue = F("Vor dem Teiche");
        break;
    }
    case 322810:
    {
        returnValue = F("Vor dem Thiesberg");
        break;
    }
    case 322811:
    {
        returnValue = F("Vor dem Thor");
        break;
    }
    case 322812:
    {
        returnValue = F("Vor dem Thore");
        break;
    }
    case 322813:
    {
        returnValue = F("Vor dem Tor");
        break;
    }
    case 322814:
    {
        returnValue = F("Vor dem Tore");
        break;
    }
    case 322815:
    {
        returnValue = F("Vor dem Turm");
        break;
    }
    case 322816:
    {
        returnValue = F("Vor dem Uhlenbusch");
        break;
    }
    case 322817:
    {
        returnValue = F("Vor dem Umspannwerk");
        break;
    }
    case 322818:
    {
        returnValue = F("Vor dem Untertor");
        break;
    }
    case 322819:
    {
        returnValue = F("Vor dem Untertore");
        break;
    }
    case 322820:
    {
        returnValue = F("Vor dem Viehtor");
        break;
    }
    case 322821:
    {
        returnValue = F("Vor dem Viertel");
        break;
    }
    case 322822:
    {
        returnValue = F("Vor dem Vogel");
        break;
    }
    case 322823:
    {
        returnValue = F("Vor dem Voigtstor");
        break;
    }
    case 322824:
    {
        returnValue = F("Vor dem Vorwerkstor");
        break;
    }
    case 322825:
    {
        returnValue = F("Vor dem Walberg");
        break;
    }
    case 322826:
    {
        returnValue = F("Vor dem Walburgertor");
        break;
    }
    case 322827:
    {
        returnValue = F("Vor dem Wald");
        break;
    }
    case 322828:
    {
        returnValue = F("Vor dem Walde");
        break;
    }
    case 322829:
    {
        returnValue = F("Vor dem Walderberge");
        break;
    }
    case 322830:
    {
        returnValue = F("Vor dem Walle");
        break;
    }
    case 322831:
    {
        returnValue = F("Vor dem Walltor");
        break;
    }
    case 322832:
    {
        returnValue = F("Vor dem Walsen");
        break;
    }
    case 322833:
    {
        returnValue = F("Vor dem Warteberge");
        break;
    }
    case 322834:
    {
        returnValue = F("Vor dem Warthügel");
        break;
    }
    case 322835:
    {
        returnValue = F("Vor dem Wassertor");
        break;
    }
    case 322836:
    {
        returnValue = F("Vor dem Wehrgras");
        break;
    }
    case 322837:
    {
        returnValue = F("Vor dem Weiherbusch");
        break;
    }
    case 322838:
    {
        returnValue = F("Vor dem Weinberge");
        break;
    }
    case 322839:
    {
        returnValue = F("Vor dem Weingarten");
        break;
    }
    case 322840:
    {
        returnValue = F("Vor dem Weißen Berge");
        break;
    }
    case 322841:
    {
        returnValue = F("Vor dem Welgersberg");
        break;
    }
    case 322842:
    {
        returnValue = F("Vor dem Welschen Tor");
        break;
    }
    case 322843:
    {
        returnValue = F("Vor dem Wendischen Tor");
        break;
    }
    case 322844:
    {
        returnValue = F("Vor dem Westentor");
        break;
    }
    case 322845:
    {
        returnValue = F("Vor dem Westtor");
        break;
    }
    case 322846:
    {
        returnValue = F("Vor dem Wiedehagen");
        break;
    }
    case 322847:
    {
        returnValue = F("Vor dem Wiesenborn");
        break;
    }
    case 322848:
    {
        returnValue = F("Vor dem Wietzenfelde");
        break;
    }
    case 322849:
    {
        returnValue = F("Vor dem Wiggert");
        break;
    }
    case 322850:
    {
        returnValue = F("Vor dem Wilden Moore");
        break;
    }
    case 322851:
    {
        returnValue = F("Vor dem Wind");
        break;
    }
    case 322852:
    {
        returnValue = F("Vor dem Wippertor");
        break;
    }
    case 322853:
    {
        returnValue = F("Vor dem Wischer");
        break;
    }
    case 322854:
    {
        returnValue = F("Vor dem Witten");
        break;
    }
    case 322855:
    {
        returnValue = F("Vor dem Wittenburger Tor");
        break;
    }
    case 322856:
    {
        returnValue = F("Vor dem Wäldchen");
        break;
    }
    case 322857:
    {
        returnValue = F("Vor dem Wüstenhof");
        break;
    }
    case 322858:
    {
        returnValue = F("Vor dem Zeckensee");
        break;
    }
    case 322859:
    {
        returnValue = F("Vor dem alten Kampe");
        break;
    }
    case 322860:
    {
        returnValue = F("Vor dem dürren Grunde");
        break;
    }
    case 322861:
    {
        returnValue = F("Vor dem frischen Tore");
        break;
    }
    case 322862:
    {
        returnValue = F("Vor dem langen Grund");
        break;
    }
    case 322863:
    {
        returnValue = F("Vor dem langen Tal");
        break;
    }
    case 322864:
    {
        returnValue = F("Vor dem schwarzen Lande");
        break;
    }
    case 322865:
    {
        returnValue = F("Vor dem tiefen Siek");
        break;
    }
    case 322866:
    {
        returnValue = F("Vor den Ackern");
        break;
    }
    case 322867:
    {
        returnValue = F("Vor den Ahnewelgen");
        break;
    }
    case 322868:
    {
        returnValue = F("Vor den Bachwiesen");
        break;
    }
    case 322869:
    {
        returnValue = F("Vor den Balken");
        break;
    }
    case 322870:
    {
        returnValue = F("Vor den Beeken");
        break;
    }
    case 322871:
    {
        returnValue = F("Vor den Bensebülten");
        break;
    }
    case 322872:
    {
        returnValue = F("Vor den Bensträuchen");
        break;
    }
    case 322873:
    {
        returnValue = F("Vor den Betten");
        break;
    }
    case 322874:
    {
        returnValue = F("Vor den Biesen");
        break;
    }
    case 322875:
    {
        returnValue = F("Vor den Birken");
        break;
    }
    case 322876:
    {
        returnValue = F("Vor den Bruchhöfen");
        break;
    }
    case 322877:
    {
        returnValue = F("Vor den Bruchwiesen");
        break;
    }
    case 322878:
    {
        returnValue = F("Vor den Brüchen");
        break;
    }
    case 322879:
    {
        returnValue = F("Vor den Burgweiden");
        break;
    }
    case 322880:
    {
        returnValue = F("Vor den Bäumen");
        break;
    }
    case 322881:
    {
        returnValue = F("Vor den Büschen");
        break;
    }
    case 322882:
    {
        returnValue = F("Vor den Driften");
        break;
    }
    case 322883:
    {
        returnValue = F("Vor den Drohnen");
        break;
    }
    case 322884:
    {
        returnValue = F("Vor den Döhren");
        break;
    }
    case 322885:
    {
        returnValue = F("Vor den Dünen");
        break;
    }
    case 322886:
    {
        returnValue = F("Vor den Eichen");
        break;
    }
    case 322887:
    {
        returnValue = F("Vor den Eicken");
        break;
    }
    case 322888:
    {
        returnValue = F("Vor den Eisenkauten");
        break;
    }
    case 322889:
    {
        returnValue = F("Vor den Ellern");
        break;
    }
    case 322890:
    {
        returnValue = F("Vor den Erlen");
        break;
    }
    case 322891:
    {
        returnValue = F("Vor den Feldern");
        break;
    }
    case 322892:
    {
        returnValue = F("Vor den Fichten");
        break;
    }
    case 322893:
    {
        returnValue = F("Vor den Fischteichen");
        break;
    }
    case 322894:
    {
        returnValue = F("Vor den Fuchslöchern");
        break;
    }
    case 322895:
    {
        returnValue = F("Vor den Fuhren");
        break;
    }
    case 322896:
    {
        returnValue = F("Vor den Furchen");
        break;
    }
    case 322897:
    {
        returnValue = F("Vor den Graden");
        break;
    }
    case 322898:
    {
        returnValue = F("Vor den Grashöfen");
        break;
    }
    case 322899:
    {
        returnValue = F("Vor den Grasteilen");
        break;
    }
    case 322900:
    {
        returnValue = F("Vor den Gruben");
        break;
    }
    case 322901:
    {
        returnValue = F("Vor den Gräben");
        break;
    }
    case 322902:
    {
        returnValue = F("Vor den Gründen");
        break;
    }
    case 322903:
    {
        returnValue = F("Vor den Gärten");
        break;
    }
    case 322904:
    {
        returnValue = F("Vor den Hainbuchen");
        break;
    }
    case 322905:
    {
        returnValue = F("Vor den Hallonen");
        break;
    }
    case 322906:
    {
        returnValue = F("Vor den Hasseln");
        break;
    }
    case 322907:
    {
        returnValue = F("Vor den Haßeln");
        break;
    }
    case 322908:
    {
        returnValue = F("Vor den Hegen");
        break;
    }
    case 322909:
    {
        returnValue = F("Vor den Heidstücken");
        break;
    }
    case 322910:
    {
        returnValue = F("Vor den Herzogsbergen");
        break;
    }
    case 322911:
    {
        returnValue = F("Vor den Hockenkuhlen");
        break;
    }
    case 322912:
    {
        returnValue = F("Vor den Hohen Bunten");
        break;
    }
    case 322913:
    {
        returnValue = F("Vor den Häusern");
        break;
    }
    case 322914:
    {
        returnValue = F("Vor den Höfen");
        break;
    }
    case 322915:
    {
        returnValue = F("Vor den Höhen");
        break;
    }
    case 322916:
    {
        returnValue = F("Vor den Hütten");
        break;
    }
    case 322917:
    {
        returnValue = F("Vor den Klappen");
        break;
    }
    case 322918:
    {
        returnValue = F("Vor den Kleingärten");
        break;
    }
    case 322919:
    {
        returnValue = F("Vor den Klippen");
        break;
    }
    case 322920:
    {
        returnValue = F("Vor den Knäppen");
        break;
    }
    case 322921:
    {
        returnValue = F("Vor den Kohlstätten");
        break;
    }
    case 322922:
    {
        returnValue = F("Vor den Kreuzbirken");
        break;
    }
    case 322923:
    {
        returnValue = F("Vor den Kreuzen");
        break;
    }
    case 322924:
    {
        returnValue = F("Vor den Kämpen");
        break;
    }
    case 322925:
    {
        returnValue = F("Vor den Landen");
        break;
    }
    case 322926:
    {
        returnValue = F("Vor den Lehmkuhlen");
        break;
    }
    case 322927:
    {
        returnValue = F("Vor den Längen");
        break;
    }
    case 322928:
    {
        returnValue = F("Vor den Maiwiesen");
        break;
    }
    case 322929:
    {
        returnValue = F("Vor den Mauern");
        break;
    }
    case 322930:
    {
        returnValue = F("Vor den Mayen");
        break;
    }
    case 322931:
    {
        returnValue = F("Vor den Meeden");
        break;
    }
    case 322932:
    {
        returnValue = F("Vor den Meedenstücken");
        break;
    }
    case 322933:
    {
        returnValue = F("Vor den Moorhöfen");
        break;
    }
    case 322934:
    {
        returnValue = F("Vor den Mühlen");
        break;
    }
    case 322935:
    {
        returnValue = F("Vor den Mühlenwiesen");
        break;
    }
    case 322936:
    {
        returnValue = F("Vor den Obergärten");
        break;
    }
    case 322937:
    {
        returnValue = F("Vor den Pferdeweiden");
        break;
    }
    case 322938:
    {
        returnValue = F("Vor den Quellen");
        break;
    }
    case 322939:
    {
        returnValue = F("Vor den Rahmen");
        break;
    }
    case 322940:
    {
        returnValue = F("Vor den Rieden");
        break;
    }
    case 322941:
    {
        returnValue = F("Vor den Ringsböllen");
        break;
    }
    case 322942:
    {
        returnValue = F("Vor den Rosen");
        break;
    }
    case 322943:
    {
        returnValue = F("Vor den Rosenfeldern");
        break;
    }
    case 322944:
    {
        returnValue = F("Vor den Rothen");
        break;
    }
    case 322945:
    {
        returnValue = F("Vor den Rotten");
        break;
    }
    case 322946:
    {
        returnValue = F("Vor den Rödern");
        break;
    }
    case 322947:
    {
        returnValue = F("Vor den Röthen");
        break;
    }
    case 322948:
    {
        returnValue = F("Vor den Rützen");
        break;
    }
    case 322949:
    {
        returnValue = F("Vor den Salzwiesen");
        break;
    }
    case 322950:
    {
        returnValue = F("Vor den Sandgruben");
        break;
    }
    case 322951:
    {
        returnValue = F("Vor den Sandkoppeln");
        break;
    }
    case 322952:
    {
        returnValue = F("Vor den Schüttenbrüchen");
        break;
    }
    case 322953:
    {
        returnValue = F("Vor den Secheln");
        break;
    }
    case 322954:
    {
        returnValue = F("Vor den Specken");
        break;
    }
    case 322955:
    {
        returnValue = F("Vor den Stangen");
        break;
    }
    case 322956:
    {
        returnValue = F("Vor den Steinbrüchen");
        break;
    }
    case 322957:
    {
        returnValue = F("Vor den Stuken");
        break;
    }
    case 322958:
    {
        returnValue = F("Vor den Stämmerchen");
        break;
    }
    case 322959:
    {
        returnValue = F("Vor den Söhlen");
        break;
    }
    case 322960:
    {
        returnValue = F("Vor den Tannen");
        break;
    }
    case 322961:
    {
        returnValue = F("Vor den Teichen");
        break;
    }
    case 322962:
    {
        returnValue = F("Vor den Teilen");
        break;
    }
    case 322963:
    {
        returnValue = F("Vor den Thoren");
        break;
    }
    case 322964:
    {
        returnValue = F("Vor den Thranen");
        break;
    }
    case 322965:
    {
        returnValue = F("Vor den Toren");
        break;
    }
    case 322966:
    {
        returnValue = F("Vor den Warfen");
        break;
    }
    case 322967:
    {
        returnValue = F("Vor den Weiden");
        break;
    }
    case 322968:
    {
        returnValue = F("Vor den Weingärten");
        break;
    }
    case 322969:
    {
        returnValue = F("Vor den Werren");
        break;
    }
    case 322970:
    {
        returnValue = F("Vor den Wetten");
        break;
    }
    case 322971:
    {
        returnValue = F("Vor den Wiesen");
        break;
    }
    case 322972:
    {
        returnValue = F("Vor den Wischen");
        break;
    }
    case 322973:
    {
        returnValue = F("Vor den Wolfskuhlen");
        break;
    }
    case 322974:
    {
        returnValue = F("Vor den Wösten");
        break;
    }
    case 322975:
    {
        returnValue = F("Vor den Zuschlägen");
        break;
    }
    case 322976:
    {
        returnValue = F("Vor den Zäunen");
        break;
    }
    case 322977:
    {
        returnValue = F("Vor den neuen Häusern");
        break;
    }
    case 322978:
    {
        returnValue = F("Vor der Abendröte");
        break;
    }
    case 322979:
    {
        returnValue = F("Vor der Alten Höh");
        break;
    }
    case 322980:
    {
        returnValue = F("Vor der Alten Schmiede");
        break;
    }
    case 322981:
    {
        returnValue = F("Vor der Aspe");
        break;
    }
    case 322982:
    {
        returnValue = F("Vor der Au");
        break;
    }
    case 322983:
    {
        returnValue = F("Vor der Aue");
        break;
    }
    case 322984:
    {
        returnValue = F("Vor der Autobahn");
        break;
    }
    case 322985:
    {
        returnValue = F("Vor der Avel");
        break;
    }
    case 322986:
    {
        returnValue = F("Vor der Bahn");
        break;
    }
    case 322987:
    {
        returnValue = F("Vor der Beeke");
        break;
    }
    case 322988:
    {
        returnValue = F("Vor der Bek");
        break;
    }
    case 322989:
    {
        returnValue = F("Vor der Bend");
        break;
    }
    case 322990:
    {
        returnValue = F("Vor der Beule");
        break;
    }
    case 322991:
    {
        returnValue = F("Vor der Beune");
        break;
    }
    case 322992:
    {
        returnValue = F("Vor der Birke");
        break;
    }
    case 322993:
    {
        returnValue = F("Vor der Bitz");
        break;
    }
    case 322994:
    {
        returnValue = F("Vor der Blauen Hütte");
        break;
    }
    case 322995:
    {
        returnValue = F("Vor der Bleiche");
        break;
    }
    case 322996:
    {
        returnValue = F("Vor der Borg");
        break;
    }
    case 322997:
    {
        returnValue = F("Vor der Brake");
        break;
    }
    case 322998:
    {
        returnValue = F("Vor der Brede");
        break;
    }
    case 322999:
    {
        returnValue = F("Vor der Brobirke");
        break;
    }
    case 323000:
    {
        returnValue = F("Vor der Bruck");
        break;
    }
    case 323001:
    {
        returnValue = F("Vor der Brücke");
        break;
    }
    case 323002:
    {
        returnValue = F("Vor der Buch");
        break;
    }
    case 323003:
    {
        returnValue = F("Vor der Buchschirm");
        break;
    }
    case 323004:
    {
        returnValue = F("Vor der Burg");
        break;
    }
    case 323005:
    {
        returnValue = F("Vor der Bäke");
        break;
    }
    case 323006:
    {
        returnValue = F("Vor der Börnung");
        break;
    }
    case 323007:
    {
        returnValue = F("Vor der Bülte");
        break;
    }
    case 323008:
    {
        returnValue = F("Vor der Clewe");
        break;
    }
    case 323009:
    {
        returnValue = F("Vor der Dahl");
        break;
    }
    case 323010:
    {
        returnValue = F("Vor der Dautenbach");
        break;
    }
    case 323011:
    {
        returnValue = F("Vor der Deine");
        break;
    }
    case 323012:
    {
        returnValue = F("Vor der Dell");
        break;
    }
    case 323013:
    {
        returnValue = F("Vor der Dorneiche");
        break;
    }
    case 323014:
    {
        returnValue = F("Vor der Egelskaute");
        break;
    }
    case 323015:
    {
        returnValue = F("Vor der Egge");
        break;
    }
    case 323016:
    {
        returnValue = F("Vor der Eich");
        break;
    }
    case 323017:
    {
        returnValue = F("Vor der Eichert");
        break;
    }
    case 323018:
    {
        returnValue = F("Vor der Eichhecke");
        break;
    }
    case 323019:
    {
        returnValue = F("Vor der Eichkopfhalle");
        break;
    }
    case 323020:
    {
        returnValue = F("Vor der Eiskaut");
        break;
    }
    case 323021:
    {
        returnValue = F("Vor der Emmet");
        break;
    }
    case 323022:
    {
        returnValue = F("Vor der Eselsburg");
        break;
    }
    case 323023:
    {
        returnValue = F("Vor der Eulenkammer");
        break;
    }
    case 323024:
    {
        returnValue = F("Vor der Fehle");
        break;
    }
    case 323025:
    {
        returnValue = F("Vor der Fischerpforte");
        break;
    }
    case 323026:
    {
        returnValue = F("Vor der Frecht");
        break;
    }
    case 323027:
    {
        returnValue = F("Vor der Furth");
        break;
    }
    case 323028:
    {
        returnValue = F("Vor der Gartenstr.");
        break;
    }
    case 323029:
    {
        returnValue = F("Vor der Gasse");
        break;
    }
    case 323030:
    {
        returnValue = F("Vor der Gathe");
        break;
    }
    case 323031:
    {
        returnValue = F("Vor der Gaß");
        break;
    }
    case 323032:
    {
        returnValue = F("Vor der Gembdenmühle");
        break;
    }
    case 323033:
    {
        returnValue = F("Vor der Gemeinde");
        break;
    }
    case 323034:
    {
        returnValue = F("Vor der Goldbreede");
        break;
    }
    case 323035:
    {
        returnValue = F("Vor der Graue");
        break;
    }
    case 323036:
    {
        returnValue = F("Vor der Grenze");
        break;
    }
    case 323037:
    {
        returnValue = F("Vor der Grieb");
        break;
    }
    case 323038:
    {
        returnValue = F("Vor der Grube");
        break;
    }
    case 323039:
    {
        returnValue = F("Vor der Grund");
        break;
    }
    case 323040:
    {
        returnValue = F("Vor der Göhrde");
        break;
    }
    case 323041:
    {
        returnValue = F("Vor der Haar");
        break;
    }
    case 323042:
    {
        returnValue = F("Vor der Haardt");
        break;
    }
    case 323043:
    {
        returnValue = F("Vor der Hahle");
        break;
    }
    case 323044:
    {
        returnValue = F("Vor der Hahlshube");
        break;
    }
    case 323045:
    {
        returnValue = F("Vor der Halde");
        break;
    }
    case 323046:
    {
        returnValue = F("Vor der Hanlah");
        break;
    }
    case 323047:
    {
        returnValue = F("Vor der Harber Brücke");
        break;
    }
    case 323048:
    {
        returnValue = F("Vor der Hardt");
        break;
    }
    case 323049:
    {
        returnValue = F("Vor der Harth");
        break;
    }
    case 323050:
    {
        returnValue = F("Vor der Hasenhecke");
        break;
    }
    case 323051:
    {
        returnValue = F("Vor der Haube");
        break;
    }
    case 323052:
    {
        returnValue = F("Vor der Heck");
        break;
    }
    case 323053:
    {
        returnValue = F("Vor der Hecke");
        break;
    }
    case 323054:
    {
        returnValue = F("Vor der Heeg");
        break;
    }
    case 323055:
    {
        returnValue = F("Vor der Heeke");
        break;
    }
    case 323056:
    {
        returnValue = F("Vor der Hege");
        break;
    }
    case 323057:
    {
        returnValue = F("Vor der Heide");
        break;
    }
    case 323058:
    {
        returnValue = F("Vor der Heisterwies");
        break;
    }
    case 323059:
    {
        returnValue = F("Vor der Helle");
        break;
    }
    case 323060:
    {
        returnValue = F("Vor der Hembach");
        break;
    }
    case 323061:
    {
        returnValue = F("Vor der Hergenlieth");
        break;
    }
    case 323062:
    {
        returnValue = F("Vor der Hermecke");
        break;
    }
    case 323063:
    {
        returnValue = F("Vor der Hohe");
        break;
    }
    case 323064:
    {
        returnValue = F("Vor der Hohleich");
        break;
    }
    case 323065:
    {
        returnValue = F("Vor der Hohler");
        break;
    }
    case 323066:
    {
        returnValue = F("Vor der Hohnert");
        break;
    }
    case 323067:
    {
        returnValue = F("Vor der Hohnhorst");
        break;
    }
    case 323068:
    {
        returnValue = F("Vor der Holeburg");
        break;
    }
    case 323069:
    {
        returnValue = F("Vor der Holzkate");
        break;
    }
    case 323070:
    {
        returnValue = F("Vor der Horst");
        break;
    }
    case 323071:
    {
        returnValue = F("Vor der Hort");
        break;
    }
    case 323072:
    {
        returnValue = F("Vor der Hub");
        break;
    }
    case 323073:
    {
        returnValue = F("Vor der Hube");
        break;
    }
    case 323074:
    {
        returnValue = F("Vor der Hurth");
        break;
    }
    case 323075:
    {
        returnValue = F("Vor der Hustert");
        break;
    }
    case 323076:
    {
        returnValue = F("Vor der Häke");
        break;
    }
    case 323077:
    {
        returnValue = F("Vor der Häsel");
        break;
    }
    case 323078:
    {
        returnValue = F("Vor der Höh");
        break;
    }
    case 323079:
    {
        returnValue = F("Vor der Höhe");
        break;
    }
    case 323080:
    {
        returnValue = F("Vor der Höhstadt");
        break;
    }
    case 323081:
    {
        returnValue = F("Vor der Kaserne");
        break;
    }
    case 323082:
    {
        returnValue = F("Vor der Katze");
        break;
    }
    case 323083:
    {
        returnValue = F("Vor der Katzennase");
        break;
    }
    case 323084:
    {
        returnValue = F("Vor der Kiefer");
        break;
    }
    case 323085:
    {
        returnValue = F("Vor der Kiehwiese");
        break;
    }
    case 323086:
    {
        returnValue = F("Vor der Kikelborch");
        break;
    }
    case 323087:
    {
        returnValue = F("Vor der Kinzigbrücke");
        break;
    }
    case 323088:
    {
        returnValue = F("Vor der Kipp");
        break;
    }
    case 323089:
    {
        returnValue = F("Vor der Kirche");
        break;
    }
    case 323090:
    {
        returnValue = F("Vor der Kirchpforte");
        break;
    }
    case 323091:
    {
        returnValue = F("Vor der Kirchwies");
        break;
    }
    case 323092:
    {
        returnValue = F("Vor der Kohlhause");
        break;
    }
    case 323093:
    {
        returnValue = F("Vor der Koppe");
        break;
    }
    case 323094:
    {
        returnValue = F("Vor der Kornhast");
        break;
    }
    case 323095:
    {
        returnValue = F("Vor der Kreuzhöhle");
        break;
    }
    case 323096:
    {
        returnValue = F("Vor der Kreuzwiese");
        break;
    }
    case 323097:
    {
        returnValue = F("Vor der Kripp");
        break;
    }
    case 323098:
    {
        returnValue = F("Vor der Kuppe");
        break;
    }
    case 323099:
    {
        returnValue = F("Vor der Laake");
        break;
    }
    case 323100:
    {
        returnValue = F("Vor der Laakenbreite");
        break;
    }
    case 323101:
    {
        returnValue = F("Vor der Lache");
        break;
    }
    case 323102:
    {
        returnValue = F("Vor der Lake");
        break;
    }
    case 323103:
    {
        returnValue = F("Vor der Landwehr");
        break;
    }
    case 323104:
    {
        returnValue = F("Vor der Lehmkaut");
        break;
    }
    case 323105:
    {
        returnValue = F("Vor der Lehmkuhle");
        break;
    }
    case 323106:
    {
        returnValue = F("Vor der Ley");
        break;
    }
    case 323107:
    {
        returnValue = F("Vor der Lichten Heide");
        break;
    }
    case 323108:
    {
        returnValue = F("Vor der Lieh");
        break;
    }
    case 323109:
    {
        returnValue = F("Vor der Linde");
        break;
    }
    case 323110:
    {
        returnValue = F("Vor der Lohhecke");
        break;
    }
    case 323111:
    {
        returnValue = F("Vor der Lohr");
        break;
    }
    case 323112:
    {
        returnValue = F("Vor der Lohweide");
        break;
    }
    case 323113:
    {
        returnValue = F("Vor der Loos");
        break;
    }
    case 323114:
    {
        returnValue = F("Vor der Lucke");
        break;
    }
    case 323115:
    {
        returnValue = F("Vor der Luhe");
        break;
    }
    case 323116:
    {
        returnValue = F("Vor der Lücke");
        break;
    }
    case 323117:
    {
        returnValue = F("Vor der Mark");
        break;
    }
    case 323118:
    {
        returnValue = F("Vor der Marktkirche");
        break;
    }
    case 323119:
    {
        returnValue = F("Vor der Masch");
        break;
    }
    case 323120:
    {
        returnValue = F("Vor der Mauer");
        break;
    }
    case 323121:
    {
        returnValue = F("Vor der Mooskammer");
        break;
    }
    case 323122:
    {
        returnValue = F("Vor der Muhl");
        break;
    }
    case 323123:
    {
        returnValue = F("Vor der Mühle");
        break;
    }
    case 323124:
    {
        returnValue = F("Vor der Nade");
        break;
    }
    case 323125:
    {
        returnValue = F("Vor der Niederpfort");
        break;
    }
    case 323126:
    {
        returnValue = F("Vor der Noll");
        break;
    }
    case 323127:
    {
        returnValue = F("Vor der Nörr");
        break;
    }
    case 323128:
    {
        returnValue = F("Vor der Nück");
        break;
    }
    case 323129:
    {
        returnValue = F("Vor der Oberpforte");
        break;
    }
    case 323130:
    {
        returnValue = F("Vor der Oberwiese");
        break;
    }
    case 323131:
    {
        returnValue = F("Vor der Oelmühle");
        break;
    }
    case 323132:
    {
        returnValue = F("Vor der Ohe");
        break;
    }
    case 323133:
    {
        returnValue = F("Vor der Pforte");
        break;
    }
    case 323134:
    {
        returnValue = F("Vor der Platte");
        break;
    }
    case 323135:
    {
        returnValue = F("Vor der Prinzenquelle");
        break;
    }
    case 323136:
    {
        returnValue = F("Vor der Pulvermühle");
        break;
    }
    case 323137:
    {
        returnValue = F("Vor der Ramhorst");
        break;
    }
    case 323138:
    {
        returnValue = F("Vor der Recke");
        break;
    }
    case 323139:
    {
        returnValue = F("Vor der Reihe");
        break;
    }
    case 323140:
    {
        returnValue = F("Vor der Reitbahn");
        break;
    }
    case 323141:
    {
        returnValue = F("Vor der Richtel");
        break;
    }
    case 323142:
    {
        returnValue = F("Vor der Riede");
        break;
    }
    case 323143:
    {
        returnValue = F("Vor der Riege");
        break;
    }
    case 323144:
    {
        returnValue = F("Vor der Riehe");
        break;
    }
    case 323145:
    {
        returnValue = F("Vor der Rodau");
        break;
    }
    case 323146:
    {
        returnValue = F("Vor der Roten Kaul");
        break;
    }
    case 323147:
    {
        returnValue = F("Vor der Sang");
        break;
    }
    case 323148:
    {
        returnValue = F("Vor der Schafbrücke");
        break;
    }
    case 323149:
    {
        returnValue = F("Vor der Schanz");
        break;
    }
    case 323150:
    {
        returnValue = F("Vor der Schanze");
        break;
    }
    case 323151:
    {
        returnValue = F("Vor der Scheibe");
        break;
    }
    case 323152:
    {
        returnValue = F("Vor der Scheue");
        break;
    }
    case 323153:
    {
        returnValue = F("Vor der Schinderwiese");
        break;
    }
    case 323154:
    {
        returnValue = F("Vor der Schlepphorst");
        break;
    }
    case 323155:
    {
        returnValue = F("Vor der Schnellert");
        break;
    }
    case 323156:
    {
        returnValue = F("Vor der Schreiberpforte");
        break;
    }
    case 323157:
    {
        returnValue = F("Vor der Schule");
        break;
    }
    case 323158:
    {
        returnValue = F("Vor der See");
        break;
    }
    case 323159:
    {
        returnValue = F("Vor der Seelhorst");
        break;
    }
    case 323160:
    {
        returnValue = F("Vor der Seiters");
        break;
    }
    case 323161:
    {
        returnValue = F("Vor der Siedlung");
        break;
    }
    case 323162:
    {
        returnValue = F("Vor der Sielbach");
        break;
    }
    case 323163:
    {
        returnValue = F("Vor der Sommerweide");
        break;
    }
    case 323164:
    {
        returnValue = F("Vor der Stackliet");
        break;
    }
    case 323165:
    {
        returnValue = F("Vor der Stadt");
        break;
    }
    case 323166:
    {
        returnValue = F("Vor der Stadtmauer");
        break;
    }
    case 323167:
    {
        returnValue = F("Vor der Stauriede");
        break;
    }
    case 323168:
    {
        returnValue = F("Vor der Steige");
        break;
    }
    case 323169:
    {
        returnValue = F("Vor der Steinbreite");
        break;
    }
    case 323170:
    {
        returnValue = F("Vor der Steine");
        break;
    }
    case 323171:
    {
        returnValue = F("Vor der Steinert");
        break;
    }
    case 323172:
    {
        returnValue = F("Vor der Steinhardt");
        break;
    }
    case 323173:
    {
        returnValue = F("Vor der Steinkirche");
        break;
    }
    case 323174:
    {
        returnValue = F("Vor der Stephanskuppe");
        break;
    }
    case 323175:
    {
        returnValue = F("Vor der Steyer");
        break;
    }
    case 323176:
    {
        returnValue = F("Vor der Stimmbach");
        break;
    }
    case 323177:
    {
        returnValue = F("Vor der Struth");
        break;
    }
    case 323178:
    {
        returnValue = F("Vor der Sülze");
        break;
    }
    case 323179:
    {
        returnValue = F("Vor der Sündwiese");
        break;
    }
    case 323180:
    {
        returnValue = F("Vor der Teufelsküche");
        break;
    }
    case 323181:
    {
        returnValue = F("Vor der Thalebener Birke");
        break;
    }
    case 323182:
    {
        returnValue = F("Vor der Tonkaute");
        break;
    }
    case 323183:
    {
        returnValue = F("Vor der Trift");
        break;
    }
    case 323184:
    {
        returnValue = F("Vor der Tränke");
        break;
    }
    case 323185:
    {
        returnValue = F("Vor der Turmschanze");
        break;
    }
    case 323186:
    {
        returnValue = F("Vor der Turnhalle");
        break;
    }
    case 323187:
    {
        returnValue = F("Vor der Töngesmühle");
        break;
    }
    case 323188:
    {
        returnValue = F("Vor der Uhle");
        break;
    }
    case 323189:
    {
        returnValue = F("Vor der Uhlenmühle");
        break;
    }
    case 323190:
    {
        returnValue = F("Vor der Unsohle");
        break;
    }
    case 323191:
    {
        returnValue = F("Vor der Wache");
        break;
    }
    case 323192:
    {
        returnValue = F("Vor der Wagenstedter Brücke");
        break;
    }
    case 323193:
    {
        returnValue = F("Vor der Waidmühle");
        break;
    }
    case 323194:
    {
        returnValue = F("Vor der Waisenmühle");
        break;
    }
    case 323195:
    {
        returnValue = F("Vor der Wakhorst");
        break;
    }
    case 323196:
    {
        returnValue = F("Vor der Wanne");
        break;
    }
    case 323197:
    {
        returnValue = F("Vor der Warf");
        break;
    }
    case 323198:
    {
        returnValue = F("Vor der Warte");
        break;
    }
    case 323199:
    {
        returnValue = F("Vor der Warwer Riede");
        break;
    }
    case 323200:
    {
        returnValue = F("Vor der Weide");
        break;
    }
    case 323201:
    {
        returnValue = F("Vor der Westermarsch");
        break;
    }
    case 323202:
    {
        returnValue = F("Vor der Westerwiese");
        break;
    }
    case 323203:
    {
        returnValue = F("Vor der Wetterau");
        break;
    }
    case 323204:
    {
        returnValue = F("Vor der Wickenbach");
        break;
    }
    case 323205:
    {
        returnValue = F("Vor der Wiese");
        break;
    }
    case 323206:
    {
        returnValue = F("Vor der Wildhecke");
        break;
    }
    case 323207:
    {
        returnValue = F("Vor der Windleite");
        break;
    }
    case 323208:
    {
        returnValue = F("Vor der Windmühle");
        break;
    }
    case 323209:
    {
        returnValue = F("Vor der Winterbach");
        break;
    }
    case 323210:
    {
        returnValue = F("Vor der Wintersburg");
        break;
    }
    case 323211:
    {
        returnValue = F("Vor der Wohlruthe");
        break;
    }
    case 323212:
    {
        returnValue = F("Vor der Wolfskaut");
        break;
    }
    case 323213:
    {
        returnValue = F("Vor der Wümme");
        break;
    }
    case 323214:
    {
        returnValue = F("Vor der Ziegelei");
        break;
    }
    case 323215:
    {
        returnValue = F("Vor der Ziegelhütte");
        break;
    }
    case 323216:
    {
        returnValue = F("Vor der alten Burg");
        break;
    }
    case 323217:
    {
        returnValue = F("Vor der Ödenburg");
        break;
    }
    case 323218:
    {
        returnValue = F("Vor'm Beekdeel");
        break;
    }
    case 323219:
    {
        returnValue = F("Vor'm Fohre");
        break;
    }
    case 323220:
    {
        returnValue = F("Vor'm Hagen");
        break;
    }
    case 323221:
    {
        returnValue = F("Vor'm Hof");
        break;
    }
    case 323222:
    {
        returnValue = F("Vor'm Illstrich");
        break;
    }
    case 323223:
    {
        returnValue = F("Vor'm Keller");
        break;
    }
    case 323224:
    {
        returnValue = F("Vor'm Lindig");
        break;
    }
    case 323225:
    {
        returnValue = F("Vor'm Schee");
        break;
    }
    case 323226:
    {
        returnValue = F("Vor'm Scheid");
        break;
    }
    case 323227:
    {
        returnValue = F("Vor'm Tiergarten");
        break;
    }
    case 323228:
    {
        returnValue = F("VorOrt-Garten");
        break;
    }
    case 323229:
    {
        returnValue = F("Vor`m Holz");
        break;
    }
    case 323230:
    {
        returnValue = F("Voracker");
        break;
    }
    case 323231:
    {
        returnValue = F("Vorackerweg");
        break;
    }
    case 323232:
    {
        returnValue = F("Voradelberg");
        break;
    }
    case 323233:
    {
        returnValue = F("Vorading Siedlung");
        break;
    }
    case 323234:
    {
        returnValue = F("Voranger");
        break;
    }
    case 323235:
    {
        returnValue = F("Vorarlberger Str.");
        break;
    }
    case 323236:
    {
        returnValue = F("Vorarlberger Weg");
        break;
    }
    case 323237:
    {
        returnValue = F("Vorarlbergweg");
        break;
    }
    case 323238:
    {
        returnValue = F("Voraspweg");
        break;
    }
    case 323239:
    {
        returnValue = F("Vorau");
        break;
    }
    case 323240:
    {
        returnValue = F("Vorbach");
        break;
    }
    case 323241:
    {
        returnValue = F("Vorbacher Str.");
        break;
    }
    case 323242:
    {
        returnValue = F("Vorbacher Weg");
        break;
    }
    case 323243:
    {
        returnValue = F("Vorbachstr.");
        break;
    }
    case 323244:
    {
        returnValue = F("Vorbachzimmerner Str.");
        break;
    }
    case 323245:
    {
        returnValue = F("Vorbecker Chaussee");
        break;
    }
    case 323246:
    {
        returnValue = F("Vorbecker Landweg");
        break;
    }
    case 323247:
    {
        returnValue = F("Vorbecker Str.");
        break;
    }
    case 323248:
    {
        returnValue = F("Vorbecks-Riehe");
        break;
    }
    case 323249:
    {
        returnValue = F("Vorbeckstr.");
        break;
    }
    case 323250:
    {
        returnValue = F("Vorberg");
        break;
    }
    case 323251:
    {
        returnValue = F("Vorberger Heide");
        break;
    }
    case 323252:
    {
        returnValue = F("Vorberger Rott");
        break;
    }
    case 323253:
    {
        returnValue = F("Vorberger Str.");
        break;
    }
    case 323254:
    {
        returnValue = F("Vorberger Südkamp");
        break;
    }
    case 323255:
    {
        returnValue = F("Vorberger Weg");
        break;
    }
    case 323256:
    {
        returnValue = F("Vorbergstr.");
        break;
    }
    case 323257:
    {
        returnValue = F("Vorbergsweg");
        break;
    }
    case 323258:
    {
        returnValue = F("Vorbergweg");
        break;
    }
    case 323259:
    {
        returnValue = F("Vorborn");
        break;
    }
    case 323260:
    {
        returnValue = F("Vorbrink");
        break;
    }
    case 323261:
    {
        returnValue = F("Vorbruch");
        break;
    }
    case 323262:
    {
        returnValue = F("Vorbrucher Str.");
        break;
    }
    case 323263:
    {
        returnValue = F("Vorbruchstr.");
        break;
    }
    case 323264:
    {
        returnValue = F("Vorbrückenstr.");
        break;
    }
    case 323265:
    {
        returnValue = F("Vorbrücker Ring");
        break;
    }
    case 323266:
    {
        returnValue = F("Vorbrücker Str.");
        break;
    }
    case 323267:
    {
        returnValue = F("Vorbrügger Str.");
        break;
    }
    case 323268:
    {
        returnValue = F("Vorburg");
        break;
    }
    case 323269:
    {
        returnValue = F("Vorburger Str.");
        break;
    }
    case 323270:
    {
        returnValue = F("Vorburger Weg");
        break;
    }
    case 323271:
    {
        returnValue = F("Vorburggasse");
        break;
    }
    case 323272:
    {
        returnValue = F("Vorburgstr.");
        break;
    }
    case 323273:
    {
        returnValue = F("Vorbusch");
        break;
    }
    case 323274:
    {
        returnValue = F("Vorbuschstr.");
        break;
    }
    case 323275:
    {
        returnValue = F("Vorbächstr.");
        break;
    }
    case 323276:
    {
        returnValue = F("Vord. Holzschlagweg");
        break;
    }
    case 323277:
    {
        returnValue = F("Vord. Steigweg");
        break;
    }
    case 323278:
    {
        returnValue = F("Vordamm");
        break;
    }
    case 323279:
    {
        returnValue = F("Vordee Geisbergweg");
        break;
    }
    case 323280:
    {
        returnValue = F("Vordelbacher Str.");
        break;
    }
    case 323281:
    {
        returnValue = F("Vordembergestr.");
        break;
    }
    case 323282:
    {
        returnValue = F("Vorder Bramberg");
        break;
    }
    case 323283:
    {
        returnValue = F("Vorder Eckfeld");
        break;
    }
    case 323284:
    {
        returnValue = F("Vorder Halden");
        break;
    }
    case 323285:
    {
        returnValue = F("Vorder-Neuendorf");
        break;
    }
    case 323286:
    {
        returnValue = F("Vorder-Winterbach");
        break;
    }
    case 323287:
    {
        returnValue = F("Vorder-Wittichen");
        break;
    }
    case 323288:
    {
        returnValue = F("Vorderaha");
        break;
    }
    case 323289:
    {
        returnValue = F("Vorderanger");
        break;
    }
    case 323290:
    {
        returnValue = F("Vorderbachweg");
        break;
    }
    case 323291:
    {
        returnValue = F("Vorderberg");
        break;
    }
    case 323292:
    {
        returnValue = F("Vorderbergleiten");
        break;
    }
    case 323293:
    {
        returnValue = F("Vorderbergstr.");
        break;
    }
    case 323294:
    {
        returnValue = F("Vorderbergweg");
        break;
    }
    case 323295:
    {
        returnValue = F("Vorderbichl");
        break;
    }
    case 323296:
    {
        returnValue = F("Vorderbinge");
        break;
    }
    case 323297:
    {
        returnValue = F("Vorderbrandstr.");
        break;
    }
    case 323298:
    {
        returnValue = F("Vorderbreite");
        break;
    }
    case 323299:
    {
        returnValue = F("Vorderbruchstr.");
        break;
    }
    case 323300:
    {
        returnValue = F("Vorderbrunn");
        break;
    }
    case 323301:
    {
        returnValue = F("Vorderbuchberg");
        break;
    }
    case 323302:
    {
        returnValue = F("Vorderbuchberger Str.");
        break;
    }
    case 323303:
    {
        returnValue = F("Vorderburger Str.");
        break;
    }
    case 323304:
    {
        returnValue = F("Vorderbärenburger Weg");
        break;
    }
    case 323305:
    {
        returnValue = F("Vorderbüchelberg");
        break;
    }
    case 323306:
    {
        returnValue = F("Vorderbüchelberger Str.");
        break;
    }
    case 323307:
    {
        returnValue = F("Vorderbühlweg");
        break;
    }
    case 323308:
    {
        returnValue = F("Vorderdohr");
        break;
    }
    case 323309:
    {
        returnValue = F("Vorderdorf");
        break;
    }
    case 323310:
    {
        returnValue = F("Vorderdorfstr.");
        break;
    }
    case 323311:
    {
        returnValue = F("Vordere Allee");
        break;
    }
    case 323312:
    {
        returnValue = F("Vordere Allmend");
        break;
    }
    case 323313:
    {
        returnValue = F("Vordere Alm");
        break;
    }
    case 323314:
    {
        returnValue = F("Vordere Angerstr.");
        break;
    }
    case 323315:
    {
        returnValue = F("Vordere Anwand");
        break;
    }
    case 323316:
    {
        returnValue = F("Vordere Au");
        break;
    }
    case 323317:
    {
        returnValue = F("Vordere Bergstr.");
        break;
    }
    case 323318:
    {
        returnValue = F("Vordere Binzengrabenweg");
        break;
    }
    case 323319:
    {
        returnValue = F("Vordere Bohrermühle");
        break;
    }
    case 323320:
    {
        returnValue = F("Vordere Brauhausgasse");
        break;
    }
    case 323321:
    {
        returnValue = F("Vordere Breite");
        break;
    }
    case 323322:
    {
        returnValue = F("Vordere Bronnwiesen");
        break;
    }
    case 323323:
    {
        returnValue = F("Vordere Brunnenstr.");
        break;
    }
    case 323324:
    {
        returnValue = F("Vordere Burgauffahrt");
        break;
    }
    case 323325:
    {
        returnValue = F("Vordere Burgstr.");
        break;
    }
    case 323326:
    {
        returnValue = F("Vordere Bögebreite");
        break;
    }
    case 323327:
    {
        returnValue = F("Vordere Dauserad");
        break;
    }
    case 323328:
    {
        returnValue = F("Vordere Dell");
        break;
    }
    case 323329:
    {
        returnValue = F("Vordere Dick");
        break;
    }
    case 323330:
    {
        returnValue = F("Vordere Dorfstr.");
        break;
    }
    case 323331:
    {
        returnValue = F("Vordere Eichhalde");
        break;
    }
    case 323332:
    {
        returnValue = F("Vordere Erbisgasse");
        break;
    }
    case 323333:
    {
        returnValue = F("Vordere Erbistalweg");
        break;
    }
    case 323334:
    {
        returnValue = F("Vordere Esch");
        break;
    }
    case 323335:
    {
        returnValue = F("Vordere Farbhalde");
        break;
    }
    case 323336:
    {
        returnValue = F("Vordere Feldstr.");
        break;
    }
    case 323337:
    {
        returnValue = F("Vordere Flecht");
        break;
    }
    case 323338:
    {
        returnValue = F("Vordere Fröhnstr.");
        break;
    }
    case 323339:
    {
        returnValue = F("Vordere Galgenäcker");
        break;
    }
    case 323340:
    {
        returnValue = F("Vordere Gasse");
        break;
    }
    case 323341:
    {
        returnValue = F("Vordere Gellertstr.");
        break;
    }
    case 323342:
    {
        returnValue = F("Vordere Gerbergasse");
        break;
    }
    case 323343:
    {
        returnValue = F("Vordere Giertloh");
        break;
    }
    case 323344:
    {
        returnValue = F("Vordere Grabenstr.");
        break;
    }
    case 323345:
    {
        returnValue = F("Vordere Griesäcker");
        break;
    }
    case 323346:
    {
        returnValue = F("Vordere Grohleite");
        break;
    }
    case 323347:
    {
        returnValue = F("Vordere Hacke");
        break;
    }
    case 323348:
    {
        returnValue = F("Vordere Halde");
        break;
    }
    case 323349:
    {
        returnValue = F("Vordere Halle");
        break;
    }
    case 323350:
    {
        returnValue = F("Vordere Hardt");
        break;
    }
    case 323351:
    {
        returnValue = F("Vordere Hart");
        break;
    }
    case 323352:
    {
        returnValue = F("Vordere Harth");
        break;
    }
    case 323353:
    {
        returnValue = F("Vordere Hassen");
        break;
    }
    case 323354:
    {
        returnValue = F("Vordere Hauptstr.");
        break;
    }
    case 323355:
    {
        returnValue = F("Vordere Heide");
        break;
    }
    case 323356:
    {
        returnValue = F("Vordere Hobelsstr.");
        break;
    }
    case 323357:
    {
        returnValue = F("Vordere Hochstr.");
        break;
    }
    case 323358:
    {
        returnValue = F("Vordere Hofstatt");
        break;
    }
    case 323359:
    {
        returnValue = F("Vordere Höristr.");
        break;
    }
    case 323360:
    {
        returnValue = F("Vordere Imserstr.");
        break;
    }
    case 323361:
    {
        returnValue = F("Vordere Insbach");
        break;
    }
    case 323362:
    {
        returnValue = F("Vordere Jägerlochweg");
        break;
    }
    case 323363:
    {
        returnValue = F("Vordere Karlstr.");
        break;
    }
    case 323364:
    {
        returnValue = F("Vordere Kernenstr.");
        break;
    }
    case 323365:
    {
        returnValue = F("Vordere Kirchgasse");
        break;
    }
    case 323366:
    {
        returnValue = F("Vordere Kirschgartenstr.");
        break;
    }
    case 323367:
    {
        returnValue = F("Vordere Kohlhöfe");
        break;
    }
    case 323368:
    {
        returnValue = F("Vordere Kreuzgasse");
        break;
    }
    case 323369:
    {
        returnValue = F("Vordere Landwehr");
        break;
    }
    case 323370:
    {
        returnValue = F("Vordere Lehen");
        break;
    }
    case 323371:
    {
        returnValue = F("Vordere Leite");
        break;
    }
    case 323372:
    {
        returnValue = F("Vordere Lerchensteige");
        break;
    }
    case 323373:
    {
        returnValue = F("Vordere Malteserstiege");
        break;
    }
    case 323374:
    {
        returnValue = F("Vordere Masch");
        break;
    }
    case 323375:
    {
        returnValue = F("Vordere Mauergasse");
        break;
    }
    case 323376:
    {
        returnValue = F("Vordere Meergasse");
        break;
    }
    case 323377:
    {
        returnValue = F("Vordere Mühlgasse");
        break;
    }
    case 323378:
    {
        returnValue = F("Vordere Mühllache");
        break;
    }
    case 323379:
    {
        returnValue = F("Vordere Mühlstr.");
        break;
    }
    case 323380:
    {
        returnValue = F("Vordere Naßschlüchte");
        break;
    }
    case 323381:
    {
        returnValue = F("Vordere Oderstr.");
        break;
    }
    case 323382:
    {
        returnValue = F("Vordere Ostergasse");
        break;
    }
    case 323383:
    {
        returnValue = F("Vordere Pechschlüchte");
        break;
    }
    case 323384:
    {
        returnValue = F("Vordere Pechschschlüchte");
        break;
    }
    case 323385:
    {
        returnValue = F("Vordere Pfaffenleite");
        break;
    }
    case 323386:
    {
        returnValue = F("Vordere Pfarrgasse");
        break;
    }
    case 323387:
    {
        returnValue = F("Vordere Planie");
        break;
    }
    case 323388:
    {
        returnValue = F("Vordere Poche");
        break;
    }
    case 323389:
    {
        returnValue = F("Vordere Priestergasse");
        break;
    }
    case 323390:
    {
        returnValue = F("Vordere Raingasse");
        break;
    }
    case 323391:
    {
        returnValue = F("Vordere Rainstr.");
        break;
    }
    case 323392:
    {
        returnValue = F("Vordere Ramsbachstr.");
        break;
    }
    case 323393:
    {
        returnValue = F("Vordere Rehmerstr.");
        break;
    }
    case 323394:
    {
        returnValue = F("Vordere Reute");
        break;
    }
    case 323395:
    {
        returnValue = F("Vordere Ruh");
        break;
    }
    case 323396:
    {
        returnValue = F("Vordere Röthe");
        break;
    }
    case 323397:
    {
        returnValue = F("Vordere Sandstr.");
        break;
    }
    case 323398:
    {
        returnValue = F("Vordere Schleifersgasse");
        break;
    }
    case 323399:
    {
        returnValue = F("Vordere Schlobachstr.");
        break;
    }
    case 323400:
    {
        returnValue = F("Vordere Schlosssteige");
        break;
    }
    case 323401:
    {
        returnValue = F("Vordere Schloßgasse");
        break;
    }
    case 323402:
    {
        returnValue = F("Vordere Schmiedgasse");
        break;
    }
    case 323403:
    {
        returnValue = F("Vordere Schulgasse");
        break;
    }
    case 323404:
    {
        returnValue = F("Vordere Schweingruben");
        break;
    }
    case 323405:
    {
        returnValue = F("Vordere Schöbstr.");
        break;
    }
    case 323406:
    {
        returnValue = F("Vordere Schöneworth");
        break;
    }
    case 323407:
    {
        returnValue = F("Vordere Schützenhausstr.");
        break;
    }
    case 323408:
    {
        returnValue = F("Vordere Seestr.");
        break;
    }
    case 323409:
    {
        returnValue = F("Vordere Siebenhitze");
        break;
    }
    case 323410:
    {
        returnValue = F("Vordere Steige");
        break;
    }
    case 323411:
    {
        returnValue = F("Vordere Steinchenstr.");
        break;
    }
    case 323412:
    {
        returnValue = F("Vordere Steineller");
        break;
    }
    case 323413:
    {
        returnValue = F("Vordere Steingasse");
        break;
    }
    case 323414:
    {
        returnValue = F("Vordere Steinstr.");
        break;
    }
    case 323415:
    {
        returnValue = F("Vordere Stelle");
        break;
    }
    case 323416:
    {
        returnValue = F("Vordere Str.");
        break;
    }
    case 323417:
    {
        returnValue = F("Vordere Synagogenstr.");
        break;
    }
    case 323418:
    {
        returnValue = F("Vordere Talstr.");
        break;
    }
    case 323419:
    {
        returnValue = F("Vordere Taunusstr.");
        break;
    }
    case 323420:
    {
        returnValue = F("Vordere Teichgasse");
        break;
    }
    case 323421:
    {
        returnValue = F("Vordere Töpfergasse");
        break;
    }
    case 323422:
    {
        returnValue = F("Vordere Viehtrift");
        break;
    }
    case 323423:
    {
        returnValue = F("Vordere Wacht");
        break;
    }
    case 323424:
    {
        returnValue = F("Vordere Wanne");
        break;
    }
    case 323425:
    {
        returnValue = F("Vordere Warmeleite");
        break;
    }
    case 323426:
    {
        returnValue = F("Vordere Warte");
        break;
    }
    case 323427:
    {
        returnValue = F("Vordere Wattenbach");
        break;
    }
    case 323428:
    {
        returnValue = F("Vordere Weichselgartenstr.");
        break;
    }
    case 323429:
    {
        returnValue = F("Vordere Weidstaud");
        break;
    }
    case 323430:
    {
        returnValue = F("Vordere Weingartenstr.");
        break;
    }
    case 323431:
    {
        returnValue = F("Vordere Wurth");
        break;
    }
    case 323432:
    {
        returnValue = F("Vordere Zaismatt");
        break;
    }
    case 323433:
    {
        returnValue = F("Vordere Zehngasse");
        break;
    }
    case 323434:
    {
        returnValue = F("Vordere Zeil");
        break;
    }
    case 323435:
    {
        returnValue = F("Vordere-Halde-Weg");
        break;
    }
    case 323436:
    {
        returnValue = F("Vorderegger Weg");
        break;
    }
    case 323437:
    {
        returnValue = F("Vorderegglburg");
        break;
    }
    case 323438:
    {
        returnValue = F("Vordereich");
        break;
    }
    case 323439:
    {
        returnValue = F("Vordereisfeldstr.");
        break;
    }
    case 323440:
    {
        returnValue = F("Vorderer Ackerweg");
        break;
    }
    case 323441:
    {
        returnValue = F("Vorderer Aischbach");
        break;
    }
    case 323442:
    {
        returnValue = F("Vorderer Alnisbuckweg");
        break;
    }
    case 323443:
    {
        returnValue = F("Vorderer Alter Berg");
        break;
    }
    case 323444:
    {
        returnValue = F("Vorderer Anger");
        break;
    }
    case 323445:
    {
        returnValue = F("Vorderer Bach");
        break;
    }
    case 323446:
    {
        returnValue = F("Vorderer Bannscheideweg");
        break;
    }
    case 323447:
    {
        returnValue = F("Vorderer Baumweg");
        break;
    }
    case 323448:
    {
        returnValue = F("Vorderer Berg");
        break;
    }
    case 323449:
    {
        returnValue = F("Vorderer Birken");
        break;
    }
    case 323450:
    {
        returnValue = F("Vorderer Blachenweg");
        break;
    }
    case 323451:
    {
        returnValue = F("Vorderer Blinzgrabenweg");
        break;
    }
    case 323452:
    {
        returnValue = F("Vorderer Bocksberg");
        break;
    }
    case 323453:
    {
        returnValue = F("Vorderer Buch");
        break;
    }
    case 323454:
    {
        returnValue = F("Vorderer Buchwaldsweg");
        break;
    }
    case 323455:
    {
        returnValue = F("Vorderer Buchweg");
        break;
    }
    case 323456:
    {
        returnValue = F("Vorderer Böhl");
        break;
    }
    case 323457:
    {
        returnValue = F("Vorderer Bühl");
        break;
    }
    case 323458:
    {
        returnValue = F("Vorderer Dembachweg");
        break;
    }
    case 323459:
    {
        returnValue = F("Vorderer Diebespfad");
        break;
    }
    case 323460:
    {
        returnValue = F("Vorderer Düsitalweg");
        break;
    }
    case 323461:
    {
        returnValue = F("Vorderer Eckweg");
        break;
    }
    case 323462:
    {
        returnValue = F("Vorderer Einkorn");
        break;
    }
    case 323463:
    {
        returnValue = F("Vorderer Epfenbergweg");
        break;
    }
    case 323464:
    {
        returnValue = F("Vorderer Erlenweg");
        break;
    }
    case 323465:
    {
        returnValue = F("Vorderer Eschachweg");
        break;
    }
    case 323466:
    {
        returnValue = F("Vorderer Floßanger");
        break;
    }
    case 323467:
    {
        returnValue = F("Vorderer Fohlberg");
        break;
    }
    case 323468:
    {
        returnValue = F("Vorderer Franzosenklingenweg");
        break;
    }
    case 323469:
    {
        returnValue = F("Vorderer Fuchsbergweg");
        break;
    }
    case 323470:
    {
        returnValue = F("Vorderer Gauertweg");
        break;
    }
    case 323471:
    {
        returnValue = F("Vorderer Geräumtweg");
        break;
    }
    case 323472:
    {
        returnValue = F("Vorderer Graben");
        break;
    }
    case 323473:
    {
        returnValue = F("Vorderer Grabenweg");
        break;
    }
    case 323474:
    {
        returnValue = F("Vorderer Grenzweg");
        break;
    }
    case 323475:
    {
        returnValue = F("Vorderer Grund");
        break;
    }
    case 323476:
    {
        returnValue = F("Vorderer Gunzenriedhofweg");
        break;
    }
    case 323477:
    {
        returnValue = F("Vorderer Hainweg");
        break;
    }
    case 323478:
    {
        returnValue = F("Vorderer Hang");
        break;
    }
    case 323479:
    {
        returnValue = F("Vorderer Hardtweg");
        break;
    }
    case 323480:
    {
        returnValue = F("Vorderer Haselbach");
        break;
    }
    case 323481:
    {
        returnValue = F("Vorderer Hau");
        break;
    }
    case 323482:
    {
        returnValue = F("Vorderer Heideweg");
        break;
    }
    case 323483:
    {
        returnValue = F("Vorderer Hettenberg");
        break;
    }
    case 323484:
    {
        returnValue = F("Vorderer Heuergrund");
        break;
    }
    case 323485:
    {
        returnValue = F("Vorderer Hinterbergweg");
        break;
    }
    case 323486:
    {
        returnValue = F("Vorderer Hinterfeldweg");
        break;
    }
    case 323487:
    {
        returnValue = F("Vorderer Hirschauerwald");
        break;
    }
    case 323488:
    {
        returnValue = F("Vorderer Hirschweg");
        break;
    }
    case 323489:
    {
        returnValue = F("Vorderer Hochweg");
        break;
    }
    case 323490:
    {
        returnValue = F("Vorderer Holzschlagweg");
        break;
    }
    case 323491:
    {
        returnValue = F("Vorderer Hombergweg");
        break;
    }
    case 323492:
    {
        returnValue = F("Vorderer Hubweg");
        break;
    }
    case 323493:
    {
        returnValue = F("Vorderer Häuslesweg");
        break;
    }
    case 323494:
    {
        returnValue = F("Vorderer Höges");
        break;
    }
    case 323495:
    {
        returnValue = F("Vorderer Hörnleshangweg");
        break;
    }
    case 323496:
    {
        returnValue = F("Vorderer Kammweg");
        break;
    }
    case 323497:
    {
        returnValue = F("Vorderer Kamp");
        break;
    }
    case 323498:
    {
        returnValue = F("Vorderer Karwiedenweg");
        break;
    }
    case 323499:
    {
        returnValue = F("Vorderer Kienbergweg");
        break;
    }
    case 323500:
    {
        returnValue = F("Vorderer Kindleinsweg");
        break;
    }
    case 323501:
    {
        returnValue = F("Vorderer Kirchberg");
        break;
    }
    case 323502:
    {
        returnValue = F("Vorderer Klingenbergweg");
        break;
    }
    case 323503:
    {
        returnValue = F("Vorderer Kohlweg");
        break;
    }
    case 323504:
    {
        returnValue = F("Vorderer Konrad");
        break;
    }
    case 323505:
    {
        returnValue = F("Vorderer Krapfenwiesenweg");
        break;
    }
    case 323506:
    {
        returnValue = F("Vorderer Kreuzgrund");
        break;
    }
    case 323507:
    {
        returnValue = F("Vorderer Kreuzweg");
        break;
    }
    case 323508:
    {
        returnValue = F("Vorderer Krugberg");
        break;
    }
    case 323509:
    {
        returnValue = F("Vorderer Köhlgartenweg");
        break;
    }
    case 323510:
    {
        returnValue = F("Vorderer Königsbergweg");
        break;
    }
    case 323511:
    {
        returnValue = F("Vorderer Langhaldenweg");
        break;
    }
    case 323512:
    {
        returnValue = F("Vorderer Lech");
        break;
    }
    case 323513:
    {
        returnValue = F("Vorderer Leitenberg");
        break;
    }
    case 323514:
    {
        returnValue = F("Vorderer Lohweg");
        break;
    }
    case 323515:
    {
        returnValue = F("Vorderer Moosweg");
        break;
    }
    case 323516:
    {
        returnValue = F("Vorderer Mäusebergweg");
        break;
    }
    case 323517:
    {
        returnValue = F("Vorderer Mühlbuck");
        break;
    }
    case 323518:
    {
        returnValue = F("Vorderer Mühlrangen");
        break;
    }
    case 323519:
    {
        returnValue = F("Vorderer Mühlwaldweg");
        break;
    }
    case 323520:
    {
        returnValue = F("Vorderer Mühlweg");
        break;
    }
    case 323521:
    {
        returnValue = F("Vorderer Nankweg");
        break;
    }
    case 323522:
    {
        returnValue = F("Vorderer Rainweg");
        break;
    }
    case 323523:
    {
        returnValue = F("Vorderer Rangenberg");
        break;
    }
    case 323524:
    {
        returnValue = F("Vorderer Rebstock");
        break;
    }
    case 323525:
    {
        returnValue = F("Vorderer Reesiek");
        break;
    }
    case 323526:
    {
        returnValue = F("Vorderer Rheil");
        break;
    }
    case 323527:
    {
        returnValue = F("Vorderer Rindweg");
        break;
    }
    case 323528:
    {
        returnValue = F("Vorderer Ring");
        break;
    }
    case 323529:
    {
        returnValue = F("Vorderer Rosenkopf");
        break;
    }
    case 323530:
    {
        returnValue = F("Vorderer Rotenberg");
        break;
    }
    case 323531:
    {
        returnValue = F("Vorderer Rotenbergweg");
        break;
    }
    case 323532:
    {
        returnValue = F("Vorderer Roterrainweg");
        break;
    }
    case 323533:
    {
        returnValue = F("Vorderer Runzengrabenweg");
        break;
    }
    case 323534:
    {
        returnValue = F("Vorderer Rutschberg");
        break;
    }
    case 323535:
    {
        returnValue = F("Vorderer Saun");
        break;
    }
    case 323536:
    {
        returnValue = F("Vorderer Schleifweg");
        break;
    }
    case 323537:
    {
        returnValue = F("Vorderer Schlossweg");
        break;
    }
    case 323538:
    {
        returnValue = F("Vorderer Schloßberg");
        break;
    }
    case 323539:
    {
        returnValue = F("Vorderer Schwellborn");
        break;
    }
    case 323540:
    {
        returnValue = F("Vorderer Schönrain");
        break;
    }
    case 323541:
    {
        returnValue = F("Vorderer Seeberg");
        break;
    }
    case 323542:
    {
        returnValue = F("Vorderer Seeweg");
        break;
    }
    case 323543:
    {
        returnValue = F("Vorderer Siedlungsweg");
        break;
    }
    case 323544:
    {
        returnValue = F("Vorderer Siek");
        break;
    }
    case 323545:
    {
        returnValue = F("Vorderer Sporwörth");
        break;
    }
    case 323546:
    {
        returnValue = F("Vorderer Steig");
        break;
    }
    case 323547:
    {
        returnValue = F("Vorderer Steinberg");
        break;
    }
    case 323548:
    {
        returnValue = F("Vorderer Steinbühl");
        break;
    }
    case 323549:
    {
        returnValue = F("Vorderer Steingraben");
        break;
    }
    case 323550:
    {
        returnValue = F("Vorderer Steinweg");
        break;
    }
    case 323551:
    {
        returnValue = F("Vorderer Stockertweg");
        break;
    }
    case 323552:
    {
        returnValue = F("Vorderer Stubenrain");
        break;
    }
    case 323553:
    {
        returnValue = F("Vorderer Studweg");
        break;
    }
    case 323554:
    {
        returnValue = F("Vorderer Stäffelesweg");
        break;
    }
    case 323555:
    {
        returnValue = F("Vorderer Suurgaster Weg");
        break;
    }
    case 323556:
    {
        returnValue = F("Vorderer Talweg");
        break;
    }
    case 323557:
    {
        returnValue = F("Vorderer Teichweg");
        break;
    }
    case 323558:
    {
        returnValue = F("Vorderer Thorwaldweg");
        break;
    }
    case 323559:
    {
        returnValue = F("Vorderer Tränkeweg");
        break;
    }
    case 323560:
    {
        returnValue = F("Vorderer Viehmarktweg");
        break;
    }
    case 323561:
    {
        returnValue = F("Vorderer Voßwinkel");
        break;
    }
    case 323562:
    {
        returnValue = F("Vorderer Wasen");
        break;
    }
    case 323563:
    {
        returnValue = F("Vorderer Weg");
        break;
    }
    case 323564:
    {
        returnValue = F("Vorderer Weidengraben");
        break;
    }
    case 323565:
    {
        returnValue = F("Vorderer Weinberg");
        break;
    }
    case 323566:
    {
        returnValue = F("Vorderer Weißeberg");
        break;
    }
    case 323567:
    {
        returnValue = F("Vorderer Wetschbergweg");
        break;
    }
    case 323568:
    {
        returnValue = F("Vorderer Wiesenweg");
        break;
    }
    case 323569:
    {
        returnValue = F("Vorderer Winkel");
        break;
    }
    case 323570:
    {
        returnValue = F("Vorderer-Berg-Weg");
        break;
    }
    case 323571:
    {
        returnValue = F("Vorderes Annental");
        break;
    }
    case 323572:
    {
        returnValue = F("Vorderes Dachsbausträßle");
        break;
    }
    case 323573:
    {
        returnValue = F("Vorderes Eck");
        break;
    }
    case 323574:
    {
        returnValue = F("Vorderes Eisfeld");
        break;
    }
    case 323575:
    {
        returnValue = F("Vorderes Feld");
        break;
    }
    case 323576:
    {
        returnValue = F("Vorderes Gelände");
        break;
    }
    case 323577:
    {
        returnValue = F("Vorderes Gleißental");
        break;
    }
    case 323578:
    {
        returnValue = F("Vorderes Gwend");
        break;
    }
    case 323579:
    {
        returnValue = F("Vorderes Gässle");
        break;
    }
    case 323580:
    {
        returnValue = F("Vorderes Gäßle");
        break;
    }
    case 323581:
    {
        returnValue = F("Vorderes Hohefeld");
        break;
    }
    case 323582:
    {
        returnValue = F("Vorderes Hägle");
        break;
    }
    case 323583:
    {
        returnValue = F("Vorderes Kretzengäßchen");
        break;
    }
    case 323584:
    {
        returnValue = F("Vorderes Lindensträßle");
        break;
    }
    case 323585:
    {
        returnValue = F("Vorderes Meierfeld");
        break;
    }
    case 323586:
    {
        returnValue = F("Vorderes Ostertal");
        break;
    }
    case 323587:
    {
        returnValue = F("Vorderes Ried");
        break;
    }
    case 323588:
    {
        returnValue = F("Vorderes Schweineloch");
        break;
    }
    case 323589:
    {
        returnValue = F("Vorderes Sörenfeld");
        break;
    }
    case 323590:
    {
        returnValue = F("Vorderes Teich");
        break;
    }
    case 323591:
    {
        returnValue = F("Vorderes Tiefentalsträßle");
        break;
    }
    case 323592:
    {
        returnValue = F("Vorderes Tor");
        break;
    }
    case 323593:
    {
        returnValue = F("Vorderes Weidenbergel");
        break;
    }
    case 323594:
    {
        returnValue = F("Vordereschen");
        break;
    }
    case 323595:
    {
        returnValue = F("Vorderespiger Weg");
        break;
    }
    case 323596:
    {
        returnValue = F("Vorderettenberg");
        break;
    }
    case 323597:
    {
        returnValue = F("Vorderey");
        break;
    }
    case 323598:
    {
        returnValue = F("Vorderfenne");
        break;
    }
    case 323599:
    {
        returnValue = F("Vorderfreundorfer Str.");
        break;
    }
    case 323600:
    {
        returnValue = F("Vordergasse");
        break;
    }
    case 323601:
    {
        returnValue = F("Vordergeiersberg");
        break;
    }
    case 323602:
    {
        returnValue = F("Vordergeiersberg / Fleckl");
        break;
    }
    case 323603:
    {
        returnValue = F("Vordergrub");
        break;
    }
    case 323604:
    {
        returnValue = F("Vordergschwall");
        break;
    }
    case 323605:
    {
        returnValue = F("Vordergschwendt");
        break;
    }
    case 323606:
    {
        returnValue = F("Vorderhagen");
        break;
    }
    case 323607:
    {
        returnValue = F("Vorderhaidhof");
        break;
    }
    case 323608:
    {
        returnValue = F("Vorderhaimpfarrich");
        break;
    }
    case 323609:
    {
        returnValue = F("Vorderhainberg");
        break;
    }
    case 323610:
    {
        returnValue = F("Vorderhainberger Weg");
        break;
    }
    case 323611:
    {
        returnValue = F("Vorderhall");
        break;
    }
    case 323612:
    {
        returnValue = F("Vorderharpfing");
        break;
    }
    case 323613:
    {
        returnValue = F("Vorderharresheim");
        break;
    }
    case 323614:
    {
        returnValue = F("Vorderheide");
        break;
    }
    case 323615:
    {
        returnValue = F("Vorderheimat");
        break;
    }
    case 323616:
    {
        returnValue = F("Vorderhenneberg");
        break;
    }
    case 323617:
    {
        returnValue = F("Vorderheubronn");
        break;
    }
    case 323618:
    {
        returnValue = F("Vorderhof");
        break;
    }
    case 323619:
    {
        returnValue = F("Vorderhohl");
        break;
    }
    case 323620:
    {
        returnValue = F("Vorderhufe");
        break;
    }
    case 323621:
    {
        returnValue = F("Vorderhundsberg");
        break;
    }
    case 323622:
    {
        returnValue = F("Vorderhügel");
        break;
    }
    case 323623:
    {
        returnValue = F("Vorderkamp");
        break;
    }
    case 323624:
    {
        returnValue = F("Vorderkehr");
        break;
    }
    case 323625:
    {
        returnValue = F("Vorderkohlstetten");
        break;
    }
    case 323626:
    {
        returnValue = F("Vorderkreuth");
        break;
    }
    case 323627:
    {
        returnValue = F("Vorderkronsberg");
        break;
    }
    case 323628:
    {
        returnValue = F("Vorderlinden");
        break;
    }
    case 323629:
    {
        returnValue = F("Vorderlohe");
        break;
    }
    case 323630:
    {
        returnValue = F("Vorderlohweg");
        break;
    }
    case 323631:
    {
        returnValue = F("Vordermattenstr.");
        break;
    }
    case 323632:
    {
        returnValue = F("Vordermiesenbach");
        break;
    }
    case 323633:
    {
        returnValue = F("Vordermoorsweg");
        break;
    }
    case 323634:
    {
        returnValue = F("Vordermoos");
        break;
    }
    case 323635:
    {
        returnValue = F("Vordermurrhärle");
        break;
    }
    case 323636:
    {
        returnValue = F("Vordermühle");
        break;
    }
    case 323637:
    {
        returnValue = F("Vordermühlstr.");
        break;
    }
    case 323638:
    {
        returnValue = F("Vorderorbroich");
        break;
    }
    case 323639:
    {
        returnValue = F("Vorderreckenberg");
        break;
    }
    case 323640:
    {
        returnValue = F("Vorderreihe");
        break;
    }
    case 323641:
    {
        returnValue = F("Vorderreute");
        break;
    }
    case 323642:
    {
        returnValue = F("Vorderreuther Str.");
        break;
    }
    case 323643:
    {
        returnValue = F("Vorderriß");
        break;
    }
    case 323644:
    {
        returnValue = F("Vorderruh");
        break;
    }
    case 323645:
    {
        returnValue = F("Vorderrübach");
        break;
    }
    case 323646:
    {
        returnValue = F("Vorderschanze");
        break;
    }
    case 323647:
    {
        returnValue = F("Vorderschlag");
        break;
    }
    case 323648:
    {
        returnValue = F("Vorderschloss");
        break;
    }
    case 323649:
    {
        returnValue = F("Vorderschmelz");
        break;
    }
    case 323650:
    {
        returnValue = F("Vorderschützenbach");
        break;
    }
    case 323651:
    {
        returnValue = F("Vordersexauer Weg");
        break;
    }
    case 323652:
    {
        returnValue = F("Vorderst Seitert");
        break;
    }
    case 323653:
    {
        returnValue = F("Vorderste Bree");
        break;
    }
    case 323654:
    {
        returnValue = F("Vorderste Fichteln");
        break;
    }
    case 323655:
    {
        returnValue = F("Vorderste Gärten");
        break;
    }
    case 323656:
    {
        returnValue = F("Vorderste Koppel");
        break;
    }
    case 323657:
    {
        returnValue = F("Vorderste Mark");
        break;
    }
    case 323658:
    {
        returnValue = F("Vorderste Str.");
        break;
    }
    case 323659:
    {
        returnValue = F("Vorderste Weide");
        break;
    }
    case 323660:
    {
        returnValue = F("Vordersteig");
        break;
    }
    case 323661:
    {
        returnValue = F("Vordersteigen");
        break;
    }
    case 323662:
    {
        returnValue = F("Vordersteimel");
        break;
    }
    case 323663:
    {
        returnValue = F("Vordersteinberg");
        break;
    }
    case 323664:
    {
        returnValue = F("Vordersteinenberger Str.");
        break;
    }
    case 323665:
    {
        returnValue = F("Vorderstellberg");
        break;
    }
    case 323666:
    {
        returnValue = F("Vordersten Büchel");
        break;
    }
    case 323667:
    {
        returnValue = F("Vorderster Berg");
        break;
    }
    case 323668:
    {
        returnValue = F("Vorderster Kalkofen");
        break;
    }
    case 323669:
    {
        returnValue = F("Vorderster Kamp");
        break;
    }
    case 323670:
    {
        returnValue = F("Vorderstes Feld");
        break;
    }
    case 323671:
    {
        returnValue = F("Vorderstr.");
        break;
    }
    case 323672:
    {
        returnValue = F("Vorderstöppel");
        break;
    }
    case 323673:
    {
        returnValue = F("Vordertal");
        break;
    }
    case 323674:
    {
        returnValue = F("Vordertalstr.");
        break;
    }
    case 323675:
    {
        returnValue = F("Vorderteichweg");
        break;
    }
    case 323676:
    {
        returnValue = F("Vorderthüler Str.");
        break;
    }
    case 323677:
    {
        returnValue = F("Vorderthürn");
        break;
    }
    case 323678:
    {
        returnValue = F("Vorderwaldstr.");
        break;
    }
    case 323679:
    {
        returnValue = F("Vorderwaldsweg");
        break;
    }
    case 323680:
    {
        returnValue = F("Vorderwaldweg");
        break;
    }
    case 323681:
    {
        returnValue = F("Vorderwart");
        break;
    }
    case 323682:
    {
        returnValue = F("Vorderweg");
        break;
    }
    case 323683:
    {
        returnValue = F("Vorderwegscheitelweg");
        break;
    }
    case 323684:
    {
        returnValue = F("Vorderweide");
        break;
    }
    case 323685:
    {
        returnValue = F("Vorderweidenau");
        break;
    }
    case 323686:
    {
        returnValue = F("Vorderwestermurr");
        break;
    }
    case 323687:
    {
        returnValue = F("Vorderwies");
        break;
    }
    case 323688:
    {
        returnValue = F("Vorderwiesenschneise");
        break;
    }
    case 323689:
    {
        returnValue = F("Vorderwinkel");
        break;
    }
    case 323690:
    {
        returnValue = F("Vorderwörth");
        break;
    }
    case 323691:
    {
        returnValue = F("Vorderöschle");
        break;
    }
    case 323692:
    {
        returnValue = F("Vordingborger Str.");
        break;
    }
    case 323693:
    {
        returnValue = F("Vordorf");
        break;
    }
    case 323694:
    {
        returnValue = F("Vordorfer Str.");
        break;
    }
    case 323695:
    {
        returnValue = F("Vordorfermühle");
        break;
    }
    case 323696:
    {
        returnValue = F("Vordorfsfeld I");
        break;
    }
    case 323697:
    {
        returnValue = F("Vordorfsfeld II");
        break;
    }
    case 323698:
    {
        returnValue = F("Vordtriedenweg");
        break;
    }
    case 323699:
    {
        returnValue = F("Voreller");
        break;
    }
    case 323700:
    {
        returnValue = F("Voremberger Str.");
        break;
    }
    case 323701:
    {
        returnValue = F("Vorengeleweg");
        break;
    }
    case 323702:
    {
        returnValue = F("Vorenhagen");
        break;
    }
    case 323703:
    {
        returnValue = F("Vorerlenweg");
        break;
    }
    case 323704:
    {
        returnValue = F("Vorerlenwiesen");
        break;
    }
    case 323705:
    {
        returnValue = F("Voreschstr.");
        break;
    }
    case 323706:
    {
        returnValue = F("Vorfeld");
        break;
    }
    case 323707:
    {
        returnValue = F("Vorfeldring");
        break;
    }
    case 323708:
    {
        returnValue = F("Vorfeldstr.");
        break;
    }
    case 323709:
    {
        returnValue = F("Vorfeldsträßle");
        break;
    }
    case 323710:
    {
        returnValue = F("Vorfeldweg");
        break;
    }
    case 323711:
    {
        returnValue = F("Vorfluter Seitenweg Süd");
        break;
    }
    case 323712:
    {
        returnValue = F("Vorfluterweg");
        break;
    }
    case 323713:
    {
        returnValue = F("Vorgaißweg");
        break;
    }
    case 323714:
    {
        returnValue = F("Vorgangstr.");
        break;
    }
    case 323715:
    {
        returnValue = F("Vorgarten");
        break;
    }
    case 323716:
    {
        returnValue = F("Vorgartenstr.");
        break;
    }
    case 323717:
    {
        returnValue = F("Vorgasse");
        break;
    }
    case 323718:
    {
        returnValue = F("Vorgatterweg");
        break;
    }
    case 323719:
    {
        returnValue = F("Vorgebirgsbahnweg");
        break;
    }
    case 323720:
    {
        returnValue = F("Vorgebirgsblick");
        break;
    }
    case 323721:
    {
        returnValue = F("Vorgebirgsstr.");
        break;
    }
    case 323722:
    {
        returnValue = F("Vorgebirgsweg");
        break;
    }
    case 323723:
    {
        returnValue = F("Vorgeestweg");
        break;
    }
    case 323724:
    {
        returnValue = F("Vorgrundweg");
        break;
    }
    case 323725:
    {
        returnValue = F("Vorhalden");
        break;
    }
    case 323726:
    {
        returnValue = F("Vorhaldeweg");
        break;
    }
    case 323727:
    {
        returnValue = F("Vorhaller Weg");
        break;
    }
    case 323728:
    {
        returnValue = F("Vorhardsweilerweg");
        break;
    }
    case 323729:
    {
        returnValue = F("Vorheide");
        break;
    }
    case 323730:
    {
        returnValue = F("Vorheider Weg");
        break;
    }
    case 323731:
    {
        returnValue = F("Vorhelmer Str.");
        break;
    }
    case 323732:
    {
        returnValue = F("Vorhelmer Weg");
        break;
    }
    case 323733:
    {
        returnValue = F("Vorhoelzerstr.");
        break;
    }
    case 323734:
    {
        returnValue = F("Vorhof");
        break;
    }
    case 323735:
    {
        returnValue = F("Vorhofer Str.");
        break;
    }
    case 323736:
    {
        returnValue = F("Vorhofstr.");
        break;
    }
    case 323737:
    {
        returnValue = F("Vorholtstr.");
        break;
    }
    case 323738:
    {
        returnValue = F("Vorholz");
        break;
    }
    case 323739:
    {
        returnValue = F("Vorholzplatz");
        break;
    }
    case 323740:
    {
        returnValue = F("Vorholzstr.");
        break;
    }
    case 323741:
    {
        returnValue = F("Vorholzweg");
        break;
    }
    case 323742:
    {
        returnValue = F("Vorhonig");
        break;
    }
    case 323743:
    {
        returnValue = F("Vorhäuser");
        break;
    }
    case 323744:
    {
        returnValue = F("Vorhölzerstr.");
        break;
    }
    case 323745:
    {
        returnValue = F("Vorkamp");
        break;
    }
    case 323746:
    {
        returnValue = F("Vorkampstr.");
        break;
    }
    case 323747:
    {
        returnValue = F("Vorkampsweg");
        break;
    }
    case 323748:
    {
        returnValue = F("Vorketzin");
        break;
    }
    case 323749:
    {
        returnValue = F("Vorlaenderstr.");
        break;
    }
    case 323750:
    {
        returnValue = F("Vorlahm");
        break;
    }
    case 323751:
    {
        returnValue = F("Vorlaia");
        break;
    }
    case 323752:
    {
        returnValue = F("Vorland");
        break;
    }
    case 323753:
    {
        returnValue = F("Vorlandbrücke Nord");
        break;
    }
    case 323754:
    {
        returnValue = F("Vorlandbrücke Süd");
        break;
    }
    case 323755:
    {
        returnValue = F("Vorlandenweg");
        break;
    }
    case 323756:
    {
        returnValue = F("Vorlandstr.");
        break;
    }
    case 323757:
    {
        returnValue = F("Vorlandung");
        break;
    }
    case 323758:
    {
        returnValue = F("Vorlandweg");
        break;
    }
    case 323759:
    {
        returnValue = F("Vorlinger Weg");
        break;
    }
    case 323760:
    {
        returnValue = F("Vorlingskamp");
        break;
    }
    case 323761:
    {
        returnValue = F("Vorländerstr.");
        break;
    }
    case 323762:
    {
        returnValue = F("Vorländerweg");
        break;
    }
    case 323763:
    {
        returnValue = F("Vorlöhnhorster Weg");
        break;
    }
    case 323764:
    {
        returnValue = F("Vorm Anthaupt");
        break;
    }
    case 323765:
    {
        returnValue = F("Vorm Arheckengarten");
        break;
    }
    case 323766:
    {
        returnValue = F("Vorm Backofen");
        break;
    }
    case 323767:
    {
        returnValue = F("Vorm Backtor");
        break;
    }
    case 323768:
    {
        returnValue = F("Vorm Bahnhof");
        break;
    }
    case 323769:
    {
        returnValue = F("Vorm Baum");
        break;
    }
    case 323770:
    {
        returnValue = F("Vorm Baume");
        break;
    }
    case 323771:
    {
        returnValue = F("Vorm Berchen");
        break;
    }
    case 323772:
    {
        returnValue = F("Vorm Berg");
        break;
    }
    case 323773:
    {
        returnValue = F("Vorm Berge");
        break;
    }
    case 323774:
    {
        returnValue = F("Vorm Blauen Kamp");
        break;
    }
    case 323775:
    {
        returnValue = F("Vorm Bornplatz");
        break;
    }
    case 323776:
    {
        returnValue = F("Vorm Brand");
        break;
    }
    case 323777:
    {
        returnValue = F("Vorm Breitenberg");
        break;
    }
    case 323778:
    {
        returnValue = F("Vorm Brink");
        break;
    }
    case 323779:
    {
        returnValue = F("Vorm Bruch");
        break;
    }
    case 323780:
    {
        returnValue = F("Vorm Bröckelbeck");
        break;
    }
    case 323781:
    {
        returnValue = F("Vorm Buchholz");
        break;
    }
    case 323782:
    {
        returnValue = F("Vorm Buchwald");
        break;
    }
    case 323783:
    {
        returnValue = F("Vorm Burgtor");
        break;
    }
    case 323784:
    {
        returnValue = F("Vorm Busch");
        break;
    }
    case 323785:
    {
        returnValue = F("Vorm Bärscheid");
        break;
    }
    case 323786:
    {
        returnValue = F("Vorm Bütersten Door");
        break;
    }
    case 323787:
    {
        returnValue = F("Vorm Deich");
        break;
    }
    case 323788:
    {
        returnValue = F("Vorm Dickenbusch");
        break;
    }
    case 323789:
    {
        returnValue = F("Vorm Dorf");
        break;
    }
    case 323790:
    {
        returnValue = F("Vorm Dorfe");
        break;
    }
    case 323791:
    {
        returnValue = F("Vorm Eichholz");
        break;
    }
    case 323792:
    {
        returnValue = F("Vorm Eichhölzchen");
        break;
    }
    case 323793:
    {
        returnValue = F("Vorm Eickerberg");
        break;
    }
    case 323794:
    {
        returnValue = F("Vorm Elger");
        break;
    }
    case 323795:
    {
        returnValue = F("Vorm Endstor");
        break;
    }
    case 323796:
    {
        returnValue = F("Vorm Engelstein");
        break;
    }
    case 323797:
    {
        returnValue = F("Vorm Erl");
        break;
    }
    case 323798:
    {
        returnValue = F("Vorm Erle");
        break;
    }
    case 323799:
    {
        returnValue = F("Vorm Eschenbach");
        break;
    }
    case 323800:
    {
        returnValue = F("Vorm Feld");
        break;
    }
    case 323801:
    {
        returnValue = F("Vorm Felde");
        break;
    }
    case 323802:
    {
        returnValue = F("Vorm Fledder");
        break;
    }
    case 323803:
    {
        returnValue = F("Vorm Geestmoor");
        break;
    }
    case 323804:
    {
        returnValue = F("Vorm Graben");
        break;
    }
    case 323805:
    {
        returnValue = F("Vorm Grabersberg");
        break;
    }
    case 323806:
    {
        returnValue = F("Vorm Grafenholz");
        break;
    }
    case 323807:
    {
        returnValue = F("Vorm Grenzgraben");
        break;
    }
    case 323808:
    {
        returnValue = F("Vorm Grindsbruch");
        break;
    }
    case 323809:
    {
        returnValue = F("Vorm Großen Felde");
        break;
    }
    case 323810:
    {
        returnValue = F("Vorm Grund");
        break;
    }
    case 323811:
    {
        returnValue = F("Vorm Gruthoff");
        break;
    }
    case 323812:
    {
        returnValue = F("Vorm Hahnrod");
        break;
    }
    case 323813:
    {
        returnValue = F("Vorm Haidland");
        break;
    }
    case 323814:
    {
        returnValue = F("Vorm Hain");
        break;
    }
    case 323815:
    {
        returnValue = F("Vorm Hammergässer Tor");
        break;
    }
    case 323816:
    {
        returnValue = F("Vorm Hanecker");
        break;
    }
    case 323817:
    {
        returnValue = F("Vorm Heckwald");
        break;
    }
    case 323818:
    {
        returnValue = F("Vorm Heideland");
        break;
    }
    case 323819:
    {
        returnValue = F("Vorm Heiensiepen");
        break;
    }
    case 323820:
    {
        returnValue = F("Vorm Heiligen Kreuz");
        break;
    }
    case 323821:
    {
        returnValue = F("Vorm Himberg");
        break;
    }
    case 323822:
    {
        returnValue = F("Vorm Hirtentor");
        break;
    }
    case 323823:
    {
        returnValue = F("Vorm Hofe");
        break;
    }
    case 323824:
    {
        returnValue = F("Vorm Holte");
        break;
    }
    case 323825:
    {
        returnValue = F("Vorm Holz");
        break;
    }
    case 323826:
    {
        returnValue = F("Vorm Holzschlinge");
        break;
    }
    case 323827:
    {
        returnValue = F("Vorm Homberg");
        break;
    }
    case 323828:
    {
        returnValue = F("Vorm Hähl");
        break;
    }
    case 323829:
    {
        returnValue = F("Vorm Höldchen");
        break;
    }
    case 323830:
    {
        returnValue = F("Vorm Hübschbeul");
        break;
    }
    case 323831:
    {
        returnValue = F("Vorm Hügel");
        break;
    }
    case 323832:
    {
        returnValue = F("Vorm Hülsen");
        break;
    }
    case 323833:
    {
        returnValue = F("Vorm Jäger");
        break;
    }
    case 323834:
    {
        returnValue = F("Vorm Kalfhagen");
        break;
    }
    case 323835:
    {
        returnValue = F("Vorm Kalkofen");
        break;
    }
    case 323836:
    {
        returnValue = F("Vorm Kamp");
        break;
    }
    case 323837:
    {
        returnValue = F("Vorm Kampe");
        break;
    }
    case 323838:
    {
        returnValue = F("Vorm Kieselstein");
        break;
    }
    case 323839:
    {
        returnValue = F("Vorm Kiwitt");
        break;
    }
    case 323840:
    {
        returnValue = F("Vorm Klebe");
        break;
    }
    case 323841:
    {
        returnValue = F("Vorm Kleekamp");
        break;
    }
    case 323842:
    {
        returnValue = F("Vorm Kreuz");
        break;
    }
    case 323843:
    {
        returnValue = F("Vorm Kälberg");
        break;
    }
    case 323844:
    {
        returnValue = F("Vorm Langen Wald");
        break;
    }
    case 323845:
    {
        returnValue = F("Vorm Laufholz");
        break;
    }
    case 323846:
    {
        returnValue = F("Vorm Lehmsal");
        break;
    }
    case 323847:
    {
        returnValue = F("Vorm Loh");
        break;
    }
    case 323848:
    {
        returnValue = F("Vorm Lohe");
        break;
    }
    case 323849:
    {
        returnValue = F("Vorm Lohn");
        break;
    }
    case 323850:
    {
        returnValue = F("Vorm Löh");
        break;
    }
    case 323851:
    {
        returnValue = F("Vorm Löhnchen");
        break;
    }
    case 323852:
    {
        returnValue = F("Vorm Lüer");
        break;
    }
    case 323853:
    {
        returnValue = F("Vorm Moor");
        break;
    }
    case 323854:
    {
        returnValue = F("Vorm Mühlberg");
        break;
    }
    case 323855:
    {
        returnValue = F("Vorm Neuen Wäldchen");
        break;
    }
    case 323856:
    {
        returnValue = F("Vorm Niederend");
        break;
    }
    case 323857:
    {
        returnValue = F("Vorm Nussbaum");
        break;
    }
    case 323858:
    {
        returnValue = F("Vorm Nöll");
        break;
    }
    case 323859:
    {
        returnValue = F("Vorm Obernberge");
        break;
    }
    case 323860:
    {
        returnValue = F("Vorm Pfeilern");
        break;
    }
    case 323861:
    {
        returnValue = F("Vorm Piepenbrink");
        break;
    }
    case 323862:
    {
        returnValue = F("Vorm Rohrbach");
        break;
    }
    case 323863:
    {
        returnValue = F("Vorm Röhrig");
        break;
    }
    case 323864:
    {
        returnValue = F("Vorm Röschberg");
        break;
    }
    case 323865:
    {
        returnValue = F("Vorm Salzeck");
        break;
    }
    case 323866:
    {
        returnValue = F("Vorm Schlage");
        break;
    }
    case 323867:
    {
        returnValue = F("Vorm Schorfe");
        break;
    }
    case 323868:
    {
        returnValue = F("Vorm Schulzenkamp");
        break;
    }
    case 323869:
    {
        returnValue = F("Vorm Schürbusch");
        break;
    }
    case 323870:
    {
        returnValue = F("Vorm See");
        break;
    }
    case 323871:
    {
        returnValue = F("Vorm Seifchen");
        break;
    }
    case 323872:
    {
        returnValue = F("Vorm Seifen");
        break;
    }
    case 323873:
    {
        returnValue = F("Vorm Siedenmoor");
        break;
    }
    case 323874:
    {
        returnValue = F("Vorm Sielerholz");
        break;
    }
    case 323875:
    {
        returnValue = F("Vorm Sonnenbrink");
        break;
    }
    case 323876:
    {
        returnValue = F("Vorm Stein");
        break;
    }
    case 323877:
    {
        returnValue = F("Vorm Steinfeld");
        break;
    }
    case 323878:
    {
        returnValue = F("Vorm Stellohberg");
        break;
    }
    case 323879:
    {
        returnValue = F("Vorm Stichel");
        break;
    }
    case 323880:
    {
        returnValue = F("Vorm Stiegel");
        break;
    }
    case 323881:
    {
        returnValue = F("Vorm Südertor");
        break;
    }
    case 323882:
    {
        returnValue = F("Vorm Südtor");
        break;
    }
    case 323883:
    {
        returnValue = F("Vorm Teich");
        break;
    }
    case 323884:
    {
        returnValue = F("Vorm Thoren");
        break;
    }
    case 323885:
    {
        returnValue = F("Vorm Tor");
        break;
    }
    case 323886:
    {
        returnValue = F("Vorm Tore");
        break;
    }
    case 323887:
    {
        returnValue = F("Vorm Vitstor");
        break;
    }
    case 323888:
    {
        returnValue = F("Vorm Wald");
        break;
    }
    case 323889:
    {
        returnValue = F("Vorm Walde");
        break;
    }
    case 323890:
    {
        returnValue = F("Vorm Waltersberg");
        break;
    }
    case 323891:
    {
        returnValue = F("Vorm Westerberg");
        break;
    }
    case 323892:
    {
        returnValue = F("Vorm Wiesentor");
        break;
    }
    case 323893:
    {
        returnValue = F("Vorm Wildhaus");
        break;
    }
    case 323894:
    {
        returnValue = F("Vorm Wäldchen");
        break;
    }
    case 323895:
    {
        returnValue = F("Vorm Würzberg");
        break;
    }
    case 323896:
    {
        returnValue = F("Vorm Würzburger Tor");
        break;
    }
    case 323897:
    {
        returnValue = F("Vorm Ziegenbart");
        break;
    }
    case 323898:
    {
        returnValue = F("Vorm niederen Felde");
        break;
    }
    case 323899:
    {
        returnValue = F("Vormahdweg");
        break;
    }
    case 323900:
    {
        returnValue = F("Vormann-Otten-Weg");
        break;
    }
    case 323901:
    {
        returnValue = F("Vormann-Stuhr-Weg");
        break;
    }
    case 323902:
    {
        returnValue = F("Vormann-Stüve-Weg");
        break;
    }
    case 323903:
    {
        returnValue = F("Vormannstr.");
        break;
    }
    case 323904:
    {
        returnValue = F("Vormarkt");
        break;
    }
    case 323905:
    {
        returnValue = F("Vormarschweg");
        break;
    }
    case 323906:
    {
        returnValue = F("Vormathen");
        break;
    }
    case 323907:
    {
        returnValue = F("Vormaystr.");
        break;
    }
    case 323908:
    {
        returnValue = F("Vormbaumstr.");
        break;
    }
    case 323909:
    {
        returnValue = F("Vormberger Str.");
        break;
    }
    case 323910:
    {
        returnValue = F("Vormbrocksiedlung");
        break;
    }
    case 323911:
    {
        returnValue = F("Vormbrockstr.");
        break;
    }
    case 323912:
    {
        returnValue = F("Vormholzer Ring");
        break;
    }
    case 323913:
    {
        returnValue = F("Vormholzer Str.");
        break;
    }
    case 323914:
    {
        returnValue = F("Vormholzstr.");
        break;
    }
    case 323915:
    {
        returnValue = F("Vormoosweg");
        break;
    }
    case 323916:
    {
        returnValue = F("Vormorgen");
        break;
    }
    case 323917:
    {
        returnValue = F("Vormstegen");
        break;
    }
    case 323918:
    {
        returnValue = F("Vormwalder Str.");
        break;
    }
    case 323919:
    {
        returnValue = F("Vorn Diek");
        break;
    }
    case 323920:
    {
        returnValue = F("Vorn Dorpe");
        break;
    }
    case 323921:
    {
        returnValue = F("Vorn im Bruche");
        break;
    }
    case 323922:
    {
        returnValue = F("Vornagel");
        break;
    }
    case 323923:
    {
        returnValue = F("Vornagelweg");
        break;
    }
    case 323924:
    {
        returnValue = F("Vornbacherweg");
        break;
    }
    case 323925:
    {
        returnValue = F("Vorndranweg");
        break;
    }
    case 323926:
    {
        returnValue = F("Vorne am Berg");
        break;
    }
    case 323927:
    {
        returnValue = F("Vornerweg");
        break;
    }
    case 323928:
    {
        returnValue = F("Vornhagen");
        break;
    }
    case 323929:
    {
        returnValue = F("Vornhagen Siedlung");
        break;
    }
    case 323930:
    {
        returnValue = F("Vornholtstr.");
        break;
    }
    case 323931:
    {
        returnValue = F("Vornholzstr.");
        break;
    }
    case 323932:
    {
        returnValue = F("Vornholzweg");
        break;
    }
    case 323933:
    {
        returnValue = F("Vornhorst");
        break;
    }
    case 323934:
    {
        returnValue = F("Vornhäger Str.");
        break;
    }
    case 323935:
    {
        returnValue = F("Vornicker Str.");
        break;
    }
    case 323936:
    {
        returnValue = F("Vornsberg");
        break;
    }
    case 323937:
    {
        returnValue = F("Vorparkstr.");
        break;
    }
    case 323938:
    {
        returnValue = F("Vorpforte");
        break;
    }
    case 323939:
    {
        returnValue = F("Vorplatz");
        break;
    }
    case 323940:
    {
        returnValue = F("Vorplatz Fahrzeughalle");
        break;
    }
    case 323941:
    {
        returnValue = F("Vorplatz Gutshaus");
        break;
    }
    case 323942:
    {
        returnValue = F("Vorplatz Heimethus");
        break;
    }
    case 323943:
    {
        returnValue = F("Vorplatz Kirchengemeinde");
        break;
    }
    case 323944:
    {
        returnValue = F("Vorplatz Marktmuseum Gaimersheim");
        break;
    }
    case 323945:
    {
        returnValue = F("Vorplatz Rinderbacher Tor");
        break;
    }
    case 323946:
    {
        returnValue = F("Vorpochtener Str.");
        break;
    }
    case 323947:
    {
        returnValue = F("Vorpommernweg");
        break;
    }
    case 323948:
    {
        returnValue = F("Vorrade");
        break;
    }
    case 323949:
    {
        returnValue = F("Vorrader Hauptstr.");
        break;
    }
    case 323950:
    {
        returnValue = F("Vorrader Str.");
        break;
    }
    case 323951:
    {
        returnValue = F("Vorschlag Radschnellwerg (Zubringer Obersteinbeck2)");
        break;
    }
    case 323952:
    {
        returnValue = F("Vorschlehern");
        break;
    }
    case 323953:
    {
        returnValue = F("Vorschnittstr.");
        break;
    }
    case 323954:
    {
        returnValue = F("Vorschoßberg");
        break;
    }
    case 323955:
    {
        returnValue = F("Vorschwärzstr.");
        break;
    }
    case 323956:
    {
        returnValue = F("Vorschützer Str.");
        break;
    }
    case 323957:
    {
        returnValue = F("Vorsee");
        break;
    }
    case 323958:
    {
        returnValue = F("Vorseer Str.");
        break;
    }
    case 323959:
    {
        returnValue = F("Vorsfelder Str.");
        break;
    }
    case 323960:
    {
        returnValue = F("Vorspanneberg");
        break;
    }
    case 323961:
    {
        returnValue = F("Vorspel");
        break;
    }
    case 323962:
    {
        returnValue = F("Vorspessartstr.");
        break;
    }
    case 323963:
    {
        returnValue = F("Vorst");
        break;
    }
    case 323964:
    {
        returnValue = F("Vorstadt");
        break;
    }
    case 323965:
    {
        returnValue = F("Vorstadt Neumarkt");
        break;
    }
    case 323966:
    {
        returnValue = F("Vorstadt zum Garten");
        break;
    }
    case 323967:
    {
        returnValue = F("Vorstadt-Hintergasse");
        break;
    }
    case 323968:
    {
        returnValue = F("Vorstadtbahnhof");
        break;
    }
    case 323969:
    {
        returnValue = F("Vorstadtbrücke");
        break;
    }
    case 323970:
    {
        returnValue = F("Vorstadtgäßchen");
        break;
    }
    case 323971:
    {
        returnValue = F("Vorstadtstr.");
        break;
    }
    case 323972:
    {
        returnValue = F("Vorstadtweg");
        break;
    }
    case 323973:
    {
        returnValue = F("Vorstart");
        break;
    }
    case 323974:
    {
        returnValue = F("Vorstatt");
        break;
    }
    case 323975:
    {
        returnValue = F("Vorstatter Berg");
        break;
    }
    case 323976:
    {
        returnValue = F("Vorstattweg");
        break;
    }
    case 323977:
    {
        returnValue = F("Vorsteher-Kirchhoff-Str.");
        break;
    }
    case 323978:
    {
        returnValue = F("Vorsteher-Niemann-Weg");
        break;
    }
    case 323979:
    {
        returnValue = F("Vorsteher-Rust-Str.");
        break;
    }
    case 323980:
    {
        returnValue = F("Vorsteherweg");
        break;
    }
    case 323981:
    {
        returnValue = F("Vorsteigstr.");
        break;
    }
    case 323982:
    {
        returnValue = F("Vorstenberg");
        break;
    }
    case 323983:
    {
        returnValue = F("Vorster Bürgerpark");
        break;
    }
    case 323984:
    {
        returnValue = F("Vorster Feldweg");
        break;
    }
    case 323985:
    {
        returnValue = F("Vorster Heidweg");
        break;
    }
    case 323986:
    {
        returnValue = F("Vorster Landwehr");
        break;
    }
    case 323987:
    {
        returnValue = F("Vorster Str.");
        break;
    }
    case 323988:
    {
        returnValue = F("Vorster Weg");
        break;
    }
    case 323989:
    {
        returnValue = F("Vorsterpark");
        break;
    }
    case 323990:
    {
        returnValue = F("Vorsterstr.");
        break;
    }
    case 323991:
    {
        returnValue = F("Vorsterweg");
        break;
    }
    case 323992:
    {
        returnValue = F("Vorstr.");
        break;
    }
    case 323993:
    {
        returnValue = F("Vorstädter Brücke");
        break;
    }
    case 323994:
    {
        returnValue = F("Vorstädter Str.");
        break;
    }
    case 323995:
    {
        returnValue = F("Vorstädter Weg");
        break;
    }
    case 323996:
    {
        returnValue = F("Vorstädterstr.");
        break;
    }
    case 323997:
    {
        returnValue = F("Vorstädtische Kleinsiedlung");
        break;
    }
    case 323998:
    {
        returnValue = F("Vorstädtl");
        break;
    }
    case 323999:
    {
        returnValue = F("Vorstädtleweg");
        break;
    }
    case 324000:
    {
        returnValue = F("Vorstückstr.");
        break;
    }
    case 324001:
    {
        returnValue = F("Vorsuchhüttenweg");
        break;
    }
    case 324002:
    {
        returnValue = F("Vorsumer Weg");
        break;
    }
    case 324003:
    {
        returnValue = F("Vorsundern");
        break;
    }
    case 324004:
    {
        returnValue = F("Vorsäßbrücke");
        break;
    }
    case 324005:
    {
        returnValue = F("Vortal");
        break;
    }
    case 324006:
    {
        returnValue = F("Vortaucha");
        break;
    }
    case 324007:
    {
        returnValue = F("Vorteltal");
        break;
    }
    case 324008:
    {
        returnValue = F("Vorth");
        break;
    }
    case 324009:
    {
        returnValue = F("Vorthstr.");
        break;
    }
    case 324010:
    {
        returnValue = F("Vorthuiyser Weg");
        break;
    }
    case 324011:
    {
        returnValue = F("Vortmanns Weg");
        break;
    }
    case 324012:
    {
        returnValue = F("Vortridener Weg");
        break;
    }
    case 324013:
    {
        returnValue = F("Vortsahl");
        break;
    }
    case 324014:
    {
        returnValue = F("Vorwalder Str.");
        break;
    }
    case 324015:
    {
        returnValue = F("Vorwaldstr.");
        break;
    }
    case 324016:
    {
        returnValue = F("Vorwaßweg");
        break;
    }
    case 324017:
    {
        returnValue = F("Vorwedener Weg");
        break;
    }
    case 324018:
    {
        returnValue = F("Vorweg");
        break;
    }
    case 324019:
    {
        returnValue = F("Vorwerk");
        break;
    }
    case 324020:
    {
        returnValue = F("Vorwerk Heideberg");
        break;
    }
    case 324021:
    {
        returnValue = F("Vorwerk Lagnitz");
        break;
    }
    case 324022:
    {
        returnValue = F("Vorwerk-Bogen");
        break;
    }
    case 324023:
    {
        returnValue = F("Vorwerk-Deschwitz-Gemäuer");
        break;
    }
    case 324024:
    {
        returnValue = F("Vorwerk-Park");
        break;
    }
    case 324025:
    {
        returnValue = F("Vorwerk-Ring");
        break;
    }
    case 324026:
    {
        returnValue = F("Vorwerkallee");
        break;
    }
    case 324027:
    {
        returnValue = F("Vorwerkberg");
        break;
    }
    case 324028:
    {
        returnValue = F("Vorwerker Brücke");
        break;
    }
    case 324029:
    {
        returnValue = F("Vorwerker Heide");
        break;
    }
    case 324030:
    {
        returnValue = F("Vorwerker Platz");
        break;
    }
    case 324031:
    {
        returnValue = F("Vorwerker Str.");
        break;
    }
    case 324032:
    {
        returnValue = F("Vorwerker Weg");
        break;
    }
    case 324033:
    {
        returnValue = F("Vorwerkring");
        break;
    }
    case 324034:
    {
        returnValue = F("Vorwerks Hof");
        break;
    }
    case 324035:
    {
        returnValue = F("Vorwerksgarten");
        break;
    }
    case 324036:
    {
        returnValue = F("Vorwerksgasse");
        break;
    }
    case 324037:
    {
        returnValue = F("Vorwerkshof");
        break;
    }
    case 324038:
    {
        returnValue = F("Vorwerkstr.");
        break;
    }
    case 324039:
    {
        returnValue = F("Vorwerksweg");
        break;
    }
    case 324040:
    {
        returnValue = F("Vorwerkswinkel");
        break;
    }
    case 324041:
    {
        returnValue = F("Vorwerkweg");
        break;
    }
    case 324042:
    {
        returnValue = F("Vorwiese");
        break;
    }
    case 324043:
    {
        returnValue = F("Vorwiesen");
        break;
    }
    case 324044:
    {
        returnValue = F("Vorwiesenanger");
        break;
    }
    case 324045:
    {
        returnValue = F("Vorwiesenweg");
        break;
    }
    case 324046:
    {
        returnValue = F("Vorwisch");
        break;
    }
    case 324047:
    {
        returnValue = F("Vorwohlde");
        break;
    }
    case 324048:
    {
        returnValue = F("Vorwohler Stieg");
        break;
    }
    case 324049:
    {
        returnValue = F("Vorwärtsstr.");
        break;
    }
    case 324050:
    {
        returnValue = F("Vorzepfweg");
        break;
    }
    case 324051:
    {
        returnValue = F("Voräckerstr.");
        break;
    }
    case 324052:
    {
        returnValue = F("Vos-Vorsanger-Hof");
        break;
    }
    case 324053:
    {
        returnValue = F("Voslapper Str.");
        break;
    }
    case 324054:
    {
        returnValue = F("Vosloge");
        break;
    }
    case 324055:
    {
        returnValue = F("Vosloger Str.");
        break;
    }
    case 324056:
    {
        returnValue = F("Vosloger Weg");
        break;
    }
    case 324057:
    {
        returnValue = F("Voss Patt");
        break;
    }
    case 324058:
    {
        returnValue = F("Voss-Str.");
        break;
    }
    case 324059:
    {
        returnValue = F("Vossbachstr.");
        break;
    }
    case 324060:
    {
        returnValue = F("Vossbarg");
        break;
    }
    case 324061:
    {
        returnValue = F("Vossberg");
        break;
    }
    case 324062:
    {
        returnValue = F("Vossbergweg");
        break;
    }
    case 324063:
    {
        returnValue = F("Vossbicke");
        break;
    }
    case 324064:
    {
        returnValue = F("Vossbitze");
        break;
    }
    case 324065:
    {
        returnValue = F("Vossbreite");
        break;
    }
    case 324066:
    {
        returnValue = F("Vossbrink");
        break;
    }
    case 324067:
    {
        returnValue = F("Vossbölt");
        break;
    }
    case 324068:
    {
        returnValue = F("Vossebeinweg");
        break;
    }
    case 324069:
    {
        returnValue = F("Vosseberg");
        break;
    }
    case 324070:
    {
        returnValue = F("Vossecke");
        break;
    }
    case 324071:
    {
        returnValue = F("Vossecken");
        break;
    }
    case 324072:
    {
        returnValue = F("Vossegatt");
        break;
    }
    case 324073:
    {
        returnValue = F("Vossegattweg");
        break;
    }
    case 324074:
    {
        returnValue = F("Vossegge");
        break;
    }
    case 324075:
    {
        returnValue = F("Vossekuhl");
        break;
    }
    case 324076:
    {
        returnValue = F("Vossekuhle");
        break;
    }
    case 324077:
    {
        returnValue = F("Vossekuhlsweg");
        break;
    }
    case 324078:
    {
        returnValue = F("Vosselbruch");
        break;
    }
    case 324079:
    {
        returnValue = F("Vosselstr.");
        break;
    }
    case 324080:
    {
        returnValue = F("Vossem");
        break;
    }
    case 324081:
    {
        returnValue = F("Vossemer Str.");
        break;
    }
    case 324082:
    {
        returnValue = F("Vossen Links");
        break;
    }
    case 324083:
    {
        returnValue = F("Vossen Neufeld");
        break;
    }
    case 324084:
    {
        returnValue = F("Vossen Reitweg");
        break;
    }
    case 324085:
    {
        returnValue = F("Vossenacker Str.");
        break;
    }
    case 324086:
    {
        returnValue = F("Vossenbarger Weg");
        break;
    }
    case 324087:
    {
        returnValue = F("Vossenberg");
        break;
    }
    case 324088:
    {
        returnValue = F("Vossenbergweg");
        break;
    }
    case 324089:
    {
        returnValue = F("Vossenbäumchen");
        break;
    }
    case 324090:
    {
        returnValue = F("Vossenfeld");
        break;
    }
    case 324091:
    {
        returnValue = F("Vossengang");
        break;
    }
    case 324092:
    {
        returnValue = F("Vossenhütte");
        break;
    }
    case 324093:
    {
        returnValue = F("Vossenkamp");
        break;
    }
    case 324094:
    {
        returnValue = F("Vossenpad");
        break;
    }
    case 324095:
    {
        returnValue = F("Vossenredder");
        break;
    }
    case 324096:
    {
        returnValue = F("Vossens Tannen");
        break;
    }
    case 324097:
    {
        returnValue = F("Vossenstr.");
        break;
    }
    case 324098:
    {
        returnValue = F("Vossenweg");
        break;
    }
    case 324099:
    {
        returnValue = F("Vossgarten");
        break;
    }
    case 324100:
    {
        returnValue = F("Vosshaar");
        break;
    }
    case 324101:
    {
        returnValue = F("Vosshusen");
        break;
    }
    case 324102:
    {
        returnValue = F("Vosshöge");
        break;
    }
    case 324103:
    {
        returnValue = F("Vosshöhle");
        break;
    }
    case 324104:
    {
        returnValue = F("Vosshöhlen");
        break;
    }
    case 324105:
    {
        returnValue = F("Vossiekweg");
        break;
    }
    case 324106:
    {
        returnValue = F("Vosskamp");
        break;
    }
    case 324107:
    {
        returnValue = F("Vosskoppel");
        break;
    }
    case 324108:
    {
        returnValue = F("Vosskuhlenweg");
        break;
    }
    case 324109:
    {
        returnValue = F("Vossland");
        break;
    }
    case 324110:
    {
        returnValue = F("Vosslohstr.");
        break;
    }
    case 324111:
    {
        returnValue = F("Vossmoor");
        break;
    }
    case 324112:
    {
        returnValue = F("Vossmoorstr.");
        break;
    }
    case 324113:
    {
        returnValue = F("Vossmoorweg");
        break;
    }
    case 324114:
    {
        returnValue = F("Vossn Weg");
        break;
    }
    case 324115:
    {
        returnValue = F("Vossort");
        break;
    }
    case 324116:
    {
        returnValue = F("Vossortweg");
        break;
    }
    case 324117:
    {
        returnValue = F("Vossredder");
        break;
    }
    case 324118:
    {
        returnValue = F("Vossricke");
        break;
    }
    case 324119:
    {
        returnValue = F("Vossumer Str.");
        break;
    }
    case 324120:
    {
        returnValue = F("Vossundern");
        break;
    }
    case 324121:
    {
        returnValue = F("Vosswaldestr.");
        break;
    }
    case 324122:
    {
        returnValue = F("Vossweg");
        break;
    }
    case 324123:
    {
        returnValue = F("Vosswinkel");
        break;
    }
    case 324124:
    {
        returnValue = F("Vossworth");
        break;
    }
    case 324125:
    {
        returnValue = F("Vosteen");
        break;
    }
    case 324126:
    {
        returnValue = F("Vosteens Kamp");
        break;
    }
    case 324127:
    {
        returnValue = F("Vosteenskamp");
        break;
    }
    case 324128:
    {
        returnValue = F("Voswinckel");
        break;
    }
    case 324129:
    {
        returnValue = F("Voswinckelstr.");
        break;
    }
    case 324130:
    {
        returnValue = F("Votteler-Platz");
        break;
    }
    case 324131:
    {
        returnValue = F("Vottjeweg");
        break;
    }
    case 324132:
    {
        returnValue = F("Votzhöfe");
        break;
    }
    case 324133:
    {
        returnValue = F("Votzhöfer Feld");
        break;
    }
    case 324134:
    {
        returnValue = F("Voursenbeck");
        break;
    }
    case 324135:
    {
        returnValue = F("Voweydeweg");
        break;
    }
    case 324136:
    {
        returnValue = F("Vowinckelstr.");
        break;
    }
    case 324137:
    {
        returnValue = F("Vowinkelstr.");
        break;
    }
    case 324138:
    {
        returnValue = F("Voxtruper Str.");
        break;
    }
    case 324139:
    {
        returnValue = F("Voß-Str.");
        break;
    }
    case 324140:
    {
        returnValue = F("Voßacker");
        break;
    }
    case 324141:
    {
        returnValue = F("Voßackerweg");
        break;
    }
    case 324142:
    {
        returnValue = F("Voßallee");
        break;
    }
    case 324143:
    {
        returnValue = F("Voßbarg");
        break;
    }
    case 324144:
    {
        returnValue = F("Voßbargbültenweg");
        break;
    }
    case 324145:
    {
        returnValue = F("Voßbarger Weg");
        break;
    }
    case 324146:
    {
        returnValue = F("Voßbargsweg");
        break;
    }
    case 324147:
    {
        returnValue = F("Voßbargweg");
        break;
    }
    case 324148:
    {
        returnValue = F("Voßbargweide");
        break;
    }
    case 324149:
    {
        returnValue = F("Voßbeckstr.");
        break;
    }
    case 324150:
    {
        returnValue = F("Voßbeeck");
        break;
    }
    case 324151:
    {
        returnValue = F("Voßberg");
        break;
    }
    case 324152:
    {
        returnValue = F("Voßbergbogen");
        break;
    }
    case 324153:
    {
        returnValue = F("Voßberger Ring");
        break;
    }
    case 324154:
    {
        returnValue = F("Voßberger Weg");
        break;
    }
    case 324155:
    {
        returnValue = F("Voßberggrube");
        break;
    }
    case 324156:
    {
        returnValue = F("Voßbergstr.");
        break;
    }
    case 324157:
    {
        returnValue = F("Voßbergweg");
        break;
    }
    case 324158:
    {
        returnValue = F("Voßberweg");
        break;
    }
    case 324159:
    {
        returnValue = F("Voßbrede");
        break;
    }
    case 324160:
    {
        returnValue = F("Voßbrink");
        break;
    }
    case 324161:
    {
        returnValue = F("Voßbrinkstr.");
        break;
    }
    case 324162:
    {
        returnValue = F("Voßbrinkweg");
        break;
    }
    case 324163:
    {
        returnValue = F("Voßbruch");
        break;
    }
    case 324164:
    {
        returnValue = F("Voßbrucher Feld");
        break;
    }
    case 324165:
    {
        returnValue = F("Voßbrucher Str.");
        break;
    }
    case 324166:
    {
        returnValue = F("Voßbruchweg");
        break;
    }
    case 324167:
    {
        returnValue = F("Voßbuschstr.");
        break;
    }
    case 324168:
    {
        returnValue = F("Voßbäk");
        break;
    }
    case 324169:
    {
        returnValue = F("Voßdamm");
        break;
    }
    case 324170:
    {
        returnValue = F("Voßdyk");
        break;
    }
    case 324171:
    {
        returnValue = F("Voßecke");
        break;
    }
    case 324172:
    {
        returnValue = F("Voßfeld");
        break;
    }
    case 324173:
    {
        returnValue = F("Voßfelder Allee");
        break;
    }
    case 324174:
    {
        returnValue = F("Voßfelder Str.");
        break;
    }
    case 324175:
    {
        returnValue = F("Voßfenne");
        break;
    }
    case 324176:
    {
        returnValue = F("Voßgang");
        break;
    }
    case 324177:
    {
        returnValue = F("Voßgraben");
        break;
    }
    case 324178:
    {
        returnValue = F("Voßgrund");
        break;
    }
    case 324179:
    {
        returnValue = F("Voßhaar");
        break;
    }
    case 324180:
    {
        returnValue = F("Voßhaardiek");
        break;
    }
    case 324181:
    {
        returnValue = F("Voßhagen");
        break;
    }
    case 324182:
    {
        returnValue = F("Voßheide");
        break;
    }
    case 324183:
    {
        returnValue = F("Voßheider Str.");
        break;
    }
    case 324184:
    {
        returnValue = F("Voßhelle");
        break;
    }
    case 324185:
    {
        returnValue = F("Voßhof");
        break;
    }
    case 324186:
    {
        returnValue = F("Voßhoffweg");
        break;
    }
    case 324187:
    {
        returnValue = F("Voßholter Str.");
        break;
    }
    case 324188:
    {
        returnValue = F("Voßholzweg");
        break;
    }
    case 324189:
    {
        returnValue = F("Voßhorst");
        break;
    }
    case 324190:
    {
        returnValue = F("Voßhöcht");
        break;
    }
    case 324191:
    {
        returnValue = F("Voßhöfen");
        break;
    }
    case 324192:
    {
        returnValue = F("Voßhöhenweg");
        break;
    }
    case 324193:
    {
        returnValue = F("Voßhöhle");
        break;
    }
    case 324194:
    {
        returnValue = F("Voßhöhlen");
        break;
    }
    case 324195:
    {
        returnValue = F("Voßhölzchen");
        break;
    }
    case 324196:
    {
        returnValue = F("Voßhörn");
        break;
    }
    case 324197:
    {
        returnValue = F("Voßhörner Weg");
        break;
    }
    case 324198:
    {
        returnValue = F("Voßhügel");
        break;
    }
    case 324199:
    {
        returnValue = F("Voßkamp");
        break;
    }
    case 324200:
    {
        returnValue = F("Voßkampsfeld");
        break;
    }
    case 324201:
    {
        returnValue = F("Voßkampstr.");
        break;
    }
    case 324202:
    {
        returnValue = F("Voßkanal");
        break;
    }
    case 324203:
    {
        returnValue = F("Voßkate");
        break;
    }
    case 324204:
    {
        returnValue = F("Voßkaten");
        break;
    }
    case 324205:
    {
        returnValue = F("Voßkuhl");
        break;
    }
    case 324206:
    {
        returnValue = F("Voßkuhle");
        break;
    }
    case 324207:
    {
        returnValue = F("Voßkuhlen");
        break;
    }
    case 324208:
    {
        returnValue = F("Voßkuhlenstr.");
        break;
    }
    case 324209:
    {
        returnValue = F("Voßkuhlenweg");
        break;
    }
    case 324210:
    {
        returnValue = F("Voßkuhler Str.");
        break;
    }
    case 324211:
    {
        returnValue = F("Voßkuhlredder");
        break;
    }
    case 324212:
    {
        returnValue = F("Voßkuhlstr.");
        break;
    }
    case 324213:
    {
        returnValue = F("Voßland");
        break;
    }
    case 324214:
    {
        returnValue = F("Voßloch");
        break;
    }
    case 324215:
    {
        returnValue = F("Voßlocher Chaussee");
        break;
    }
    case 324216:
    {
        returnValue = F("Voßloh");
        break;
    }
    case 324217:
    {
        returnValue = F("Voßlohredder");
        break;
    }
    case 324218:
    {
        returnValue = F("Voßmannsfeld");
        break;
    }
    case 324219:
    {
        returnValue = F("Voßmar");
        break;
    }
    case 324220:
    {
        returnValue = F("Voßmoorredder");
        break;
    }
    case 324221:
    {
        returnValue = F("Voßnacke");
        break;
    }
    case 324222:
    {
        returnValue = F("Voßnacken");
        break;
    }
    case 324223:
    {
        returnValue = F("Voßnacker Str.");
        break;
    }
    case 324224:
    {
        returnValue = F("Voßnackstr.");
        break;
    }
    case 324225:
    {
        returnValue = F("Voßpad");
        break;
    }
    case 324226:
    {
        returnValue = F("Voßpaß");
        break;
    }
    case 324227:
    {
        returnValue = F("Voßpesch");
        break;
    }
    case 324228:
    {
        returnValue = F("Voßpfädchen");
        break;
    }
    case 324229:
    {
        returnValue = F("Voßplacke");
        break;
    }
    case 324230:
    {
        returnValue = F("Voßplatz");
        break;
    }
    case 324231:
    {
        returnValue = F("Voßrather Str.");
        break;
    }
    case 324232:
    {
        returnValue = F("Voßredder");
        break;
    }
    case 324233:
    {
        returnValue = F("Voßring");
        break;
    }
    case 324234:
    {
        returnValue = F("Voßschatenweg");
        break;
    }
    case 324235:
    {
        returnValue = F("Voßschneise");
        break;
    }
    case 324236:
    {
        returnValue = F("Voßsiek");
        break;
    }
    case 324237:
    {
        returnValue = F("Voßsiepen");
        break;
    }
    case 324238:
    {
        returnValue = F("Voßstr.");
        break;
    }
    case 324239:
    {
        returnValue = F("Voßweg");
        break;
    }
    case 324240:
    {
        returnValue = F("Voßwiese");
        break;
    }
    case 324241:
    {
        returnValue = F("Voßwinkel");
        break;
    }
    case 324242:
    {
        returnValue = F("Voßwinkeler Str.");
        break;
    }
    case 324243:
    {
        returnValue = F("Voßwurth");
        break;
    }
    case 324244:
    {
        returnValue = F("Vrasselt");
        break;
    }
    case 324245:
    {
        returnValue = F("Vrchlabi Platz");
        break;
    }
    case 324246:
    {
        returnValue = F("Vreburger Weg");
        break;
    }
    case 324247:
    {
        returnValue = F("Vredener Dyk");
        break;
    }
    case 324248:
    {
        returnValue = F("Vredener Str.");
        break;
    }
    case 324249:
    {
        returnValue = F("Vredestr.");
        break;
    }
    case 324250:
    {
        returnValue = F("Vreeser Str.");
        break;
    }
    case 324251:
    {
        returnValue = F("Vreesner Str.");
        break;
    }
    case 324252:
    {
        returnValue = F("Vreesner Weg");
        break;
    }
    case 324253:
    {
        returnValue = F("Vrenzel");
        break;
    }
    case 324254:
    {
        returnValue = F("Vrestorfer Fähre");
        break;
    }
    case 324255:
    {
        returnValue = F("Vrestorfer Weg");
        break;
    }
    case 324256:
    {
        returnValue = F("Vriezenveener Str.");
        break;
    }
    case 324257:
    {
        returnValue = F("Vrilissia-Brücke");
        break;
    }
    case 324258:
    {
        returnValue = F("Vrischemaiweg");
        break;
    }
    case 324259:
    {
        returnValue = F("Vromelo");
        break;
    }
    case 324260:
    {
        returnValue = F("Vronoverhof");
        break;
    }
    case 324261:
    {
        returnValue = F("Vruwenwisch");
        break;
    }
    case 324262:
    {
        returnValue = F("Vrysgard");
        break;
    }
    case 324263:
    {
        returnValue = F("Vugelgustbarg");
        break;
    }
    case 324264:
    {
        returnValue = F("Vughter Str.");
        break;
    }
    case 324265:
    {
        returnValue = F("Vulcan");
        break;
    }
    case 324266:
    {
        returnValue = F("Vulcan Avenue");
        break;
    }
    case 324267:
    {
        returnValue = F("Vulhops Kamp");
        break;
    }
    case 324268:
    {
        returnValue = F("Vulhopsfeld");
        break;
    }
    case 324269:
    {
        returnValue = F("Vulhopsgang");
        break;
    }
    case 324270:
    {
        returnValue = F("Vulhopsweg");
        break;
    }
    case 324271:
    {
        returnValue = F("Vulkan- und Panoramaweg (Zuweg)");
        break;
    }
    case 324272:
    {
        returnValue = F("Vulkaneifelstr.");
        break;
    }
    case 324273:
    {
        returnValue = F("Vulkanhof");
        break;
    }
    case 324274:
    {
        returnValue = F("Vulkanpfad");
        break;
    }
    case 324275:
    {
        returnValue = F("Vulkanring");
        break;
    }
    case 324276:
    {
        returnValue = F("Vulkanstr.");
        break;
    }
    case 324277:
    {
        returnValue = F("Vulkanusweg");
        break;
    }
    case 324278:
    {
        returnValue = F("Vulkanweg");
        break;
    }
    case 324279:
    {
        returnValue = F("Vullbrocks Esch");
        break;
    }
    case 324280:
    {
        returnValue = F("Vulligstr.");
        break;
    }
    case 324281:
    {
        returnValue = F("Vulmahnstr.");
        break;
    }
    case 324282:
    {
        returnValue = F("Vulmersbergweg");
        break;
    }
    case 324283:
    {
        returnValue = F("Vulpiusstr.");
        break;
    }
    case 324284:
    {
        returnValue = F("Vulpiusweg");
        break;
    }
    case 324285:
    {
        returnValue = F("Vulsiekshof");
        break;
    }
    case 324286:
    {
        returnValue = F("Vultejusstr.");
        break;
    }
    case 324287:
    {
        returnValue = F("Vusmecke");
        break;
    }
    case 324288:
    {
        returnValue = F("Vussemer Str.");
        break;
    }
    case 324289:
    {
        returnValue = F("Vynener Str.");
        break;
    }
    case 324290:
    {
        returnValue = F("Vynhovenstr.");
        break;
    }
    case 324291:
    {
        returnValue = F("Vyskover Str.");
        break;
    }
    case 324292:
    {
        returnValue = F("Vysoke-Myto-Str.");
        break;
    }
    case 324293:
    {
        returnValue = F("Vyth-Spier-Platz");
        break;
    }
    case 324294:
    {
        returnValue = F("Václav-Havel-Platz");
        break;
    }
    case 324295:
    {
        returnValue = F("Václav-Neumann-Str.");
        break;
    }
    case 324296:
    {
        returnValue = F("Vächer Weg");
        break;
    }
    case 324297:
    {
        returnValue = F("Vältinstr.");
        break;
    }
    case 324298:
    {
        returnValue = F("Väterweg");
        break;
    }
    case 324299:
    {
        returnValue = F("Väth-König-Str.");
        break;
    }
    case 324300:
    {
        returnValue = F("Väthstr.");
        break;
    }
    case 324301:
    {
        returnValue = F("Vélizystr.");
        break;
    }
    case 324302:
    {
        returnValue = F("Vöchtingstr.");
        break;
    }
    case 324303:
    {
        returnValue = F("Vöckelsbacher Str.");
        break;
    }
    case 324304:
    {
        returnValue = F("Vöckelsbacher Weg");
        break;
    }
    case 324305:
    {
        returnValue = F("Vöckenberg");
        break;
    }
    case 324306:
    {
        returnValue = F("Vöcklinger Hang");
        break;
    }
    case 324307:
    {
        returnValue = F("Vöcklinghauser Str.");
        break;
    }
    case 324308:
    {
        returnValue = F("Vödestr.");
        break;
    }
    case 324309:
    {
        returnValue = F("Vödeweg");
        break;
    }
    case 324310:
    {
        returnValue = F("Vögedingplatz");
        break;
    }
    case 324311:
    {
        returnValue = F("Vögelaser Weg");
        break;
    }
    case 324312:
    {
        returnValue = F("Vögelesreute");
        break;
    }
    case 324313:
    {
        returnValue = F("Vögelestr.");
        break;
    }
    case 324314:
    {
        returnValue = F("Vögelesäckerweg");
        break;
    }
    case 324315:
    {
        returnValue = F("Vögelingässchen");
        break;
    }
    case 324316:
    {
        returnValue = F("Vögelser Kamp");
        break;
    }
    case 324317:
    {
        returnValue = F("Vögelser Str.");
        break;
    }
    case 324318:
    {
        returnValue = F("Vögelser Weg");
        break;
    }
    case 324319:
    {
        returnValue = F("Vögelsgrundweg");
        break;
    }
    case 324320:
    {
        returnValue = F("Vögelwatersweg");
        break;
    }
    case 324321:
    {
        returnValue = F("Vögenstr.");
        break;
    }
    case 324322:
    {
        returnValue = F("Vögisheimer Weg");
        break;
    }
    case 324323:
    {
        returnValue = F("Vögisheimerweg");
        break;
    }
    case 324324:
    {
        returnValue = F("Vögleinsleite");
        break;
    }
    case 324325:
    {
        returnValue = F("Vöglerswiessattelweg");
        break;
    }
    case 324326:
    {
        returnValue = F("Vöglerweg");
        break;
    }
    case 324327:
    {
        returnValue = F("Vögnitzer Str.");
        break;
    }
    case 324328:
    {
        returnValue = F("Vögtleinweg");
        break;
    }
    case 324329:
    {
        returnValue = F("Vögtleshalde");
        break;
    }
    case 324330:
    {
        returnValue = F("Vögwiesstr.");
        break;
    }
    case 324331:
    {
        returnValue = F("Vöhde");
        break;
    }
    case 324332:
    {
        returnValue = F("Vöhdestr.");
        break;
    }
    case 324333:
    {
        returnValue = F("Vöhdeweg");
        break;
    }
    case 324334:
    {
        returnValue = F("Vöhinger Weg");
        break;
    }
    case 324335:
    {
        returnValue = F("Vöhler Str.");
        break;
    }
    case 324336:
    {
        returnValue = F("Vöhlinstr.");
        break;
    }
    case 324337:
    {
        returnValue = F("Vöhlinweg");
        break;
    }
    case 324338:
    {
        returnValue = F("Vöhrenbacher Str.");
        break;
    }
    case 324339:
    {
        returnValue = F("Vöhreweg");
        break;
    }
    case 324340:
    {
        returnValue = F("Vöhringer Steige");
        break;
    }
    case 324341:
    {
        returnValue = F("Vöhringer Str.");
        break;
    }
    case 324342:
    {
        returnValue = F("Vöhringer Tor");
        break;
    }
    case 324343:
    {
        returnValue = F("Vöhringer Weg");
        break;
    }
    case 324344:
    {
        returnValue = F("Vöhrumer Str.");
        break;
    }
    case 324345:
    {
        returnValue = F("Vöhteich");
        break;
    }
    case 324346:
    {
        returnValue = F("Völckers Park");
        break;
    }
    case 324347:
    {
        returnValue = F("Völge");
        break;
    }
    case 324348:
    {
        returnValue = F("Völkelstr.");
        break;
    }
    case 324349:
    {
        returnValue = F("Völken");
        break;
    }
    case 324350:
    {
        returnValue = F("Völkenreuth");
        break;
    }
    case 324351:
    {
        returnValue = F("Völkerhausen");
        break;
    }
    case 324352:
    {
        returnValue = F("Völkerhauser Str.");
        break;
    }
    case 324353:
    {
        returnValue = F("Völkermühle");
        break;
    }
    case 324354:
    {
        returnValue = F("Völkers Röttchen");
        break;
    }
    case 324355:
    {
        returnValue = F("Völkersbacher Str.");
        break;
    }
    case 324356:
    {
        returnValue = F("Völkersbacher Sträßel");
        break;
    }
    case 324357:
    {
        returnValue = F("Völkerschlachtdenkmal");
        break;
    }
    case 324358:
    {
        returnValue = F("Völkerser Landstr.");
        break;
    }
    case 324359:
    {
        returnValue = F("Völkerser Str.");
        break;
    }
    case 324360:
    {
        returnValue = F("Völkersgasse");
        break;
    }
    case 324361:
    {
        returnValue = F("Völkershauser Postweg");
        break;
    }
    case 324362:
    {
        returnValue = F("Völkersheide");
        break;
    }
    case 324363:
    {
        returnValue = F("Völkershäuser Str.");
        break;
    }
    case 324364:
    {
        returnValue = F("Völkershäuser Weg");
        break;
    }
    case 324365:
    {
        returnValue = F("Völkerskamp");
        break;
    }
    case 324366:
    {
        returnValue = F("Völkersleier Str.");
        break;
    }
    case 324367:
    {
        returnValue = F("Völkerstr.");
        break;
    }
    case 324368:
    {
        returnValue = F("Völkerweg");
        break;
    }
    case 324369:
    {
        returnValue = F("Völkerwiese");
        break;
    }
    case 324370:
    {
        returnValue = F("Völkeshofer-Kurzacher-Str.");
        break;
    }
    case 324371:
    {
        returnValue = F("Völkleshofen");
        break;
    }
    case 324372:
    {
        returnValue = F("Völklestalweg");
        break;
    }
    case 324373:
    {
        returnValue = F("Völklingenstr.");
        break;
    }
    case 324374:
    {
        returnValue = F("Völklingenweg");
        break;
    }
    case 324375:
    {
        returnValue = F("Völklinger Platz");
        break;
    }
    case 324376:
    {
        returnValue = F("Völklinger Stieg");
        break;
    }
    case 324377:
    {
        returnValue = F("Völklinger Str.");
        break;
    }
    case 324378:
    {
        returnValue = F("Völklinger Weg");
        break;
    }
    case 324379:
    {
        returnValue = F("Völkmannsweg");
        break;
    }
    case 324380:
    {
        returnValue = F("Völksener Str.");
        break;
    }
    case 324381:
    {
        returnValue = F("Völkshäger Weg");
        break;
    }
    case 324382:
    {
        returnValue = F("Völkstr.");
        break;
    }
    case 324383:
    {
        returnValue = F("Völlener Dorfstr.");
        break;
    }
    case 324384:
    {
        returnValue = F("Völlergasse");
        break;
    }
    case 324385:
    {
        returnValue = F("Völlerstr.");
        break;
    }
    case 324386:
    {
        returnValue = F("Völlerweg");
        break;
    }
    case 324387:
    {
        returnValue = F("Völlesbruchstr.");
        break;
    }
    case 324388:
    {
        returnValue = F("Völligweg");
        break;
    }
    case 324389:
    {
        returnValue = F("Völlinghauser Str.");
        break;
    }
    case 324390:
    {
        returnValue = F("Völlinghauser Weg");
        break;
    }
    case 324391:
    {
        returnValue = F("Völlinkhoff");
        break;
    }
    case 324392:
    {
        returnValue = F("Völlinks Feld");
        break;
    }
    case 324393:
    {
        returnValue = F("Völlkofer Str.");
        break;
    }
    case 324394:
    {
        returnValue = F("Völlstützstr.");
        break;
    }
    case 324395:
    {
        returnValue = F("Völmeder Str.");
        break;
    }
    case 324396:
    {
        returnValue = F("Völmlesmühle");
        break;
    }
    case 324397:
    {
        returnValue = F("Völpker Bahnhofstr.");
        break;
    }
    case 324398:
    {
        returnValue = F("Völpker Str.");
        break;
    }
    case 324399:
    {
        returnValue = F("Völpker Weg");
        break;
    }
    case 324400:
    {
        returnValue = F("Völschow Weg");
        break;
    }
    case 324401:
    {
        returnValue = F("Völser Str.");
        break;
    }
    case 324402:
    {
        returnValue = F("Völterbaumweg");
        break;
    }
    case 324403:
    {
        returnValue = F("Völterweg");
        break;
    }
    case 324404:
    {
        returnValue = F("Völzberger Str.");
        break;
    }
    case 324405:
    {
        returnValue = F("Vömmelbach");
        break;
    }
    case 324406:
    {
        returnValue = F("Vöppstedter Tor");
        break;
    }
    case 324407:
    {
        returnValue = F("Vöppstedter Weg");
        break;
    }
    case 324408:
    {
        returnValue = F("Vör Kösters Kamp");
        break;
    }
    case 324409:
    {
        returnValue = F("Vör de Heid");
        break;
    }
    case 324410:
    {
        returnValue = F("Vör de Rehgen");
        break;
    }
    case 324411:
    {
        returnValue = F("Vör de Tummel");
        break;
    }
    case 324412:
    {
        returnValue = F("Vör de Weid");
        break;
    }
    case 324413:
    {
        returnValue = F("Vörbacher Str.");
        break;
    }
    case 324414:
    {
        returnValue = F("Vörbacher Weg");
        break;
    }
    case 324415:
    {
        returnValue = F("Vörbachweg");
        break;
    }
    case 324416:
    {
        returnValue = F("Vörbrandenweg");
        break;
    }
    case 324417:
    {
        returnValue = F("Vördemöhlen");
        break;
    }
    case 324418:
    {
        returnValue = F("Vördener Damm");
        break;
    }
    case 324419:
    {
        returnValue = F("Vördener Str.");
        break;
    }
    case 324420:
    {
        returnValue = F("Vörder Feld");
        break;
    }
    case 324421:
    {
        returnValue = F("Vördestr.");
        break;
    }
    case 324422:
    {
        returnValue = F("Vörfken");
        break;
    }
    case 324423:
    {
        returnValue = F("Vörier Str.");
        break;
    }
    case 324424:
    {
        returnValue = F("Vörknöllenweg");
        break;
    }
    case 324425:
    {
        returnValue = F("Vörlinsbachstr.");
        break;
    }
    case 324426:
    {
        returnValue = F("Vörn Felben");
        break;
    }
    case 324427:
    {
        returnValue = F("Vörn Westergroben");
        break;
    }
    case 324428:
    {
        returnValue = F("Vörnste Koppel");
        break;
    }
    case 324429:
    {
        returnValue = F("Vörreeg");
        break;
    }
    case 324430:
    {
        returnValue = F("Vörst Brook");
        break;
    }
    case 324431:
    {
        returnValue = F("Vörstenmoor");
        break;
    }
    case 324432:
    {
        returnValue = F("Vörstetter Str.");
        break;
    }
    case 324433:
    {
        returnValue = F("Vörstkoppel");
        break;
    }
    case 324434:
    {
        returnValue = F("Vörtelweg");
        break;
    }
    case 324435:
    {
        returnValue = F("Vörwinn");
        break;
    }
    case 324436:
    {
        returnValue = F("Vörwolderweg");
        break;
    }
    case 324437:
    {
        returnValue = F("Vösendorfring");
        break;
    }
    case 324438:
    {
        returnValue = F("Vöslesrieth");
        break;
    }
    case 324439:
    {
        returnValue = F("Vösseberge");
        break;
    }
    case 324440:
    {
        returnValue = F("Vössener Str.");
        break;
    }
    case 324441:
    {
        returnValue = F("Vössingweg");
        break;
    }
    case 324442:
    {
        returnValue = F("Vöstweg");
        break;
    }
    case 324443:
    {
        returnValue = F("Vötgeshof");
        break;
    }
    case 324444:
    {
        returnValue = F("Vöttelweg");
        break;
    }
    case 324445:
    {
        returnValue = F("Vötterlgasse");
        break;
    }
    case 324446:
    {
        returnValue = F("Vötterstr.");
        break;
    }
    case 324447:
    {
        returnValue = F("Vöttinger Str.");
        break;
    }
    case 324448:
    {
        returnValue = F("Vürfels");
        break;
    }
    case 324449:
    {
        returnValue = F("Vürfelser Kaule");
        break;
    }
    }
    return returnValue;
}
