#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameD2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 80008:
    {
        returnValue = F("Dinkelbeetweg");
        break;
    }
    case 80009:
    {
        returnValue = F("Dinkelberger Str.");
        break;
    }
    case 80010:
    {
        returnValue = F("Dinkelbergstr.");
        break;
    }
    case 80011:
    {
        returnValue = F("Dinkelbergweg");
        break;
    }
    case 80012:
    {
        returnValue = F("Dinkelbogen");
        break;
    }
    case 80013:
    {
        returnValue = F("Dinkelburg");
        break;
    }
    case 80014:
    {
        returnValue = F("Dinkelburgweg");
        break;
    }
    case 80015:
    {
        returnValue = F("Dinkelfeld");
        break;
    }
    case 80016:
    {
        returnValue = F("Dinkelgarbe");
        break;
    }
    case 80017:
    {
        returnValue = F("Dinkelgasse");
        break;
    }
    case 80018:
    {
        returnValue = F("Dinkelgrund");
        break;
    }
    case 80019:
    {
        returnValue = F("Dinkelhof");
        break;
    }
    case 80020:
    {
        returnValue = F("Dinkelhook");
        break;
    }
    case 80021:
    {
        returnValue = F("Dinkelkamp");
        break;
    }
    case 80022:
    {
        returnValue = F("Dinkellandstr.");
        break;
    }
    case 80023:
    {
        returnValue = F("Dinkelleite");
        break;
    }
    case 80024:
    {
        returnValue = F("Dinkelmaate");
        break;
    }
    case 80025:
    {
        returnValue = F("Dinkelring");
        break;
    }
    case 80026:
    {
        returnValue = F("Dinkelroder Str.");
        break;
    }
    case 80027:
    {
        returnValue = F("Dinkelsbühler Str.");
        break;
    }
    case 80028:
    {
        returnValue = F("Dinkelsbühler Weg");
        break;
    }
    case 80029:
    {
        returnValue = F("Dinkelscherbener Str.");
        break;
    }
    case 80030:
    {
        returnValue = F("Dinkelshausen A");
        break;
    }
    case 80031:
    {
        returnValue = F("Dinkelshausen B");
        break;
    }
    case 80032:
    {
        returnValue = F("Dinkelstieg");
        break;
    }
    case 80033:
    {
        returnValue = F("Dinkelstr.");
        break;
    }
    case 80034:
    {
        returnValue = F("Dinkeltal");
        break;
    }
    case 80035:
    {
        returnValue = F("Dinkelufer");
        break;
    }
    case 80036:
    {
        returnValue = F("Dinkelweg");
        break;
    }
    case 80037:
    {
        returnValue = F("Dinkeläcker");
        break;
    }
    case 80038:
    {
        returnValue = F("Dinkeläckerweg");
        break;
    }
    case 80039:
    {
        returnValue = F("Dinker Berg");
        break;
    }
    case 80040:
    {
        returnValue = F("Dinkermichsweg");
        break;
    }
    case 80041:
    {
        returnValue = F("Dinklagenkamp");
        break;
    }
    case 80042:
    {
        returnValue = F("Dinklager Hagen");
        break;
    }
    case 80043:
    {
        returnValue = F("Dinklager Landstr.");
        break;
    }
    case 80044:
    {
        returnValue = F("Dinklager Ring");
        break;
    }
    case 80045:
    {
        returnValue = F("Dinklager Str.");
        break;
    }
    case 80046:
    {
        returnValue = F("Dinklager Weg");
        break;
    }
    case 80047:
    {
        returnValue = F("Dinklarer Str.");
        break;
    }
    case 80048:
    {
        returnValue = F("Dinklarstr.");
        break;
    }
    case 80049:
    {
        returnValue = F("Dinklohstr.");
        break;
    }
    case 80050:
    {
        returnValue = F("Dinneike");
        break;
    }
    case 80051:
    {
        returnValue = F("Dinnendahls Höhe");
        break;
    }
    case 80052:
    {
        returnValue = F("Dinnendahlstr.");
        break;
    }
    case 80053:
    {
        returnValue = F("Dinniesser Weg");
        break;
    }
    case 80054:
    {
        returnValue = F("Dino Zoo Metelen");
        break;
    }
    case 80055:
    {
        returnValue = F("Dinosaurierland");
        break;
    }
    case 80056:
    {
        returnValue = F("Dinscheder Bogen");
        break;
    }
    case 80057:
    {
        returnValue = F("Dinscheder Str.");
        break;
    }
    case 80058:
    {
        returnValue = F("Dinscheder Weg");
        break;
    }
    case 80059:
    {
        returnValue = F("Dinselstr.");
        break;
    }
    case 80060:
    {
        returnValue = F("Dinsenwirtsgasse");
        break;
    }
    case 80061:
    {
        returnValue = F("Dinsergasse");
        break;
    }
    case 80062:
    {
        returnValue = F("Dinslakener Landstr.");
        break;
    }
    case 80063:
    {
        returnValue = F("Dinslakener Ring");
        break;
    }
    case 80064:
    {
        returnValue = F("Dinslakener Str.");
        break;
    }
    case 80065:
    {
        returnValue = F("Dinslaker Str.");
        break;
    }
    case 80066:
    {
        returnValue = F("Dinspel");
        break;
    }
    case 80067:
    {
        returnValue = F("Dinspeler Weg");
        break;
    }
    case 80068:
    {
        returnValue = F("Dinstorfer Str.");
        break;
    }
    case 80069:
    {
        returnValue = F("Dinstweg");
        break;
    }
    case 80070:
    {
        returnValue = F("Dinstühlerstr.");
        break;
    }
    case 80071:
    {
        returnValue = F("Dinterplatz");
        break;
    }
    case 80072:
    {
        returnValue = F("Dinterweg");
        break;
    }
    case 80073:
    {
        returnValue = F("Dinxperloer Str.");
        break;
    }
    case 80074:
    {
        returnValue = F("Dinxperloer Weg");
        break;
    }
    case 80075:
    {
        returnValue = F("Dinzlweg");
        break;
    }
    case 80076:
    {
        returnValue = F("Dionys-Bartmann-Str.");
        break;
    }
    case 80077:
    {
        returnValue = F("Dionys-Danegger-Str.");
        break;
    }
    case 80078:
    {
        returnValue = F("Dionys-Mellert-Str.");
        break;
    }
    case 80079:
    {
        returnValue = F("Dionysiusgasse");
        break;
    }
    case 80080:
    {
        returnValue = F("Dionysiuspark");
        break;
    }
    case 80081:
    {
        returnValue = F("Dionysiusplatz");
        break;
    }
    case 80082:
    {
        returnValue = F("Dionysiusstr.");
        break;
    }
    case 80083:
    {
        returnValue = F("Dionysiusweg");
        break;
    }
    case 80084:
    {
        returnValue = F("Dionysstr.");
        break;
    }
    case 80085:
    {
        returnValue = F("Diorolfstr.");
        break;
    }
    case 80086:
    {
        returnValue = F("Dipbacher Str.");
        break;
    }
    case 80087:
    {
        returnValue = F("Diplomatenweg");
        break;
    }
    case 80088:
    {
        returnValue = F("Dippach");
        break;
    }
    case 80089:
    {
        returnValue = F("Dippacher Orles");
        break;
    }
    case 80090:
    {
        returnValue = F("Dippacher Str.");
        break;
    }
    case 80091:
    {
        returnValue = F("Dippacher Weg");
        break;
    }
    case 80092:
    {
        returnValue = F("Dippachsgrund");
        break;
    }
    case 80093:
    {
        returnValue = F("Dippachsweg");
        break;
    }
    case 80094:
    {
        returnValue = F("Dippehäuser Str.");
        break;
    }
    case 80095:
    {
        returnValue = F("Dippelgasse");
        break;
    }
    case 80096:
    {
        returnValue = F("Dippelsbachtal");
        break;
    }
    case 80097:
    {
        returnValue = F("Dippelsdorfer Str.");
        break;
    }
    case 80098:
    {
        returnValue = F("Dippelsdorfer Weg");
        break;
    }
    case 80099:
    {
        returnValue = F("Dippelshofweg");
        break;
    }
    case 80100:
    {
        returnValue = F("Dippelstr.");
        break;
    }
    case 80101:
    {
        returnValue = F("Dippenmarkt");
        break;
    }
    case 80102:
    {
        returnValue = F("Dippeplatz");
        break;
    }
    case 80103:
    {
        returnValue = F("Dippersricht");
        break;
    }
    case 80104:
    {
        returnValue = F("Dippersrichter Str.");
        break;
    }
    case 80105:
    {
        returnValue = F("Dipperzer Str.");
        break;
    }
    case 80106:
    {
        returnValue = F("Dippich");
        break;
    }
    case 80107:
    {
        returnValue = F("Dippoldgasse");
        break;
    }
    case 80108:
    {
        returnValue = F("Dippoldisplatz");
        break;
    }
    case 80109:
    {
        returnValue = F("Dippoldiswalder Platz");
        break;
    }
    case 80110:
    {
        returnValue = F("Dippoldiswalder Str.");
        break;
    }
    case 80111:
    {
        returnValue = F("Dipshorner Str.");
        break;
    }
    case 80112:
    {
        returnValue = F("Diptamweg");
        break;
    }
    case 80113:
    {
        returnValue = F("Dir-Wolf-Str.");
        break;
    }
    case 80114:
    {
        returnValue = F("Direktor-Haberl-Str.");
        break;
    }
    case 80115:
    {
        returnValue = F("Direktor-Hoegl-Str.");
        break;
    }
    case 80116:
    {
        returnValue = F("Direktor-Knödler-Weg");
        break;
    }
    case 80117:
    {
        returnValue = F("Direktor-Rimmele-Str.");
        break;
    }
    case 80118:
    {
        returnValue = F("Direktor-Schmidt-Str.");
        break;
    }
    case 80119:
    {
        returnValue = F("Direktor-Schneller-Str.");
        break;
    }
    case 80120:
    {
        returnValue = F("Direktor-Schütz-Weg");
        break;
    }
    case 80121:
    {
        returnValue = F("Direktorenwiese");
        break;
    }
    case 80122:
    {
        returnValue = F("Dirgeltweg");
        break;
    }
    case 80123:
    {
        returnValue = F("Dirhamerfeldstr.");
        break;
    }
    case 80124:
    {
        returnValue = F("Dirichletweg");
        break;
    }
    case 80125:
    {
        returnValue = F("Dirichsring");
        break;
    }
    case 80126:
    {
        returnValue = F("Dirichsstr.");
        break;
    }
    case 80127:
    {
        returnValue = F("Dirk Leiber Str.");
        break;
    }
    case 80128:
    {
        returnValue = F("Dirk Sauer Weg");
        break;
    }
    case 80129:
    {
        returnValue = F("Dirk Weg");
        break;
    }
    case 80130:
    {
        returnValue = F("Dirk-Aue-Str.");
        break;
    }
    case 80131:
    {
        returnValue = F("Dirk-Brodersen-Str.");
        break;
    }
    case 80132:
    {
        returnValue = F("Dirk-Kollmar-Str.");
        break;
    }
    case 80133:
    {
        returnValue = F("Dirk-Raudies-Weg");
        break;
    }
    case 80134:
    {
        returnValue = F("Dirk-Vahldiek-Weg");
        break;
    }
    case 80135:
    {
        returnValue = F("Dirkenshof");
        break;
    }
    case 80136:
    {
        returnValue = F("Dirkensweg");
        break;
    }
    case 80137:
    {
        returnValue = F("Dirkes Allee");
        break;
    }
    case 80138:
    {
        returnValue = F("Dirkeweg");
        break;
    }
    case 80139:
    {
        returnValue = F("Dirksenstr.");
        break;
    }
    case 80140:
    {
        returnValue = F("Dirksfeld");
        break;
    }
    case 80141:
    {
        returnValue = F("Dirkshof");
        break;
    }
    case 80142:
    {
        returnValue = F("Dirksstr.");
        break;
    }
    case 80143:
    {
        returnValue = F("Dirlammer Str.");
        break;
    }
    case 80144:
    {
        returnValue = F("Dirlauer Weg");
        break;
    }
    case 80145:
    {
        returnValue = F("Dirlenbacher Str.");
        break;
    }
    case 80146:
    {
        returnValue = F("Dirlenbacher Weg");
        break;
    }
    case 80147:
    {
        returnValue = F("Dirleser Weg");
        break;
    }
    case 80148:
    {
        returnValue = F("Dirlewanger Ring");
        break;
    }
    case 80149:
    {
        returnValue = F("Dirlewanger Str.");
        break;
    }
    case 80150:
    {
        returnValue = F("Dirlingsweg");
        break;
    }
    case 80151:
    {
        returnValue = F("Dirlosborn");
        break;
    }
    case 80152:
    {
        returnValue = F("Dirloser Str.");
        break;
    }
    case 80153:
    {
        returnValue = F("Dirmbachstr.");
        break;
    }
    case 80154:
    {
        returnValue = F("Dirmenstr.");
        break;
    }
    case 80155:
    {
        returnValue = F("Dirmerzheimer Str.");
        break;
    }
    case 80156:
    {
        returnValue = F("Dirminger Str.");
        break;
    }
    case 80157:
    {
        returnValue = F("Dirmsteiner Str.");
        break;
    }
    case 80158:
    {
        returnValue = F("Dirmsteiner Weg");
        break;
    }
    case 80159:
    {
        returnValue = F("Dirnaglstr.");
        break;
    }
    case 80160:
    {
        returnValue = F("Dirnauweg");
        break;
    }
    case 80161:
    {
        returnValue = F("Dirnberger Str.");
        break;
    }
    case 80162:
    {
        returnValue = F("Dirnbergerweg");
        break;
    }
    case 80163:
    {
        returnValue = F("Dirnecker Str.");
        break;
    }
    case 80164:
    {
        returnValue = F("Dirnitzstr.");
        break;
    }
    case 80165:
    {
        returnValue = F("Dirnitzweg");
        break;
    }
    case 80166:
    {
        returnValue = F("Dirnäckerweg");
        break;
    }
    case 80167:
    {
        returnValue = F("Dirolfstr.");
        break;
    }
    case 80168:
    {
        returnValue = F("Dirrfelden");
        break;
    }
    case 80169:
    {
        returnValue = F("Dirrfelder Str.");
        break;
    }
    case 80170:
    {
        returnValue = F("Dirrstr.");
        break;
    }
    case 80171:
    {
        returnValue = F("Dirrweg");
        break;
    }
    case 80172:
    {
        returnValue = F("Dirschauer Str.");
        break;
    }
    case 80173:
    {
        returnValue = F("Dirschauer Weg");
        break;
    }
    case 80174:
    {
        returnValue = F("Dirt Park Bergen");
        break;
    }
    case 80175:
    {
        returnValue = F("DirtPark Stadthagen");
        break;
    }
    case 80176:
    {
        returnValue = F("Dirtpark Dippoldiswalde");
        break;
    }
    case 80177:
    {
        returnValue = F("Dirtpark Steinbrücken");
        break;
    }
    case 80178:
    {
        returnValue = F("Dirtpark Wang");
        break;
    }
    case 80179:
    {
        returnValue = F("Dirtpark in Planung");
        break;
    }
    case 80180:
    {
        returnValue = F("Disaweg");
        break;
    }
    case 80181:
    {
        returnValue = F("Discgolf Park");
        break;
    }
    case 80182:
    {
        returnValue = F("Dischers Barg");
        break;
    }
    case 80183:
    {
        returnValue = F("Dischinger Str.");
        break;
    }
    case 80184:
    {
        returnValue = F("Dischingerstr.");
        break;
    }
    case 80185:
    {
        returnValue = F("Dischingerweg");
        break;
    }
    case 80186:
    {
        returnValue = F("Dischkaul");
        break;
    }
    case 80187:
    {
        returnValue = F("Dischlerstr.");
        break;
    }
    case 80188:
    {
        returnValue = F("Dishleyer Str.");
        break;
    }
    case 80189:
    {
        returnValue = F("Dishoffstr.");
        break;
    }
    case 80190:
    {
        returnValue = F("Disibodenbergblick");
        break;
    }
    case 80191:
    {
        returnValue = F("Disibodenberger Str.");
        break;
    }
    case 80192:
    {
        returnValue = F("Diskusweg");
        break;
    }
    case 80193:
    {
        returnValue = F("Dismas-Reheis-Str.");
        break;
    }
    case 80194:
    {
        returnValue = F("Dismerkamp");
        break;
    }
    case 80195:
    {
        returnValue = F("Disnacker Weg");
        break;
    }
    case 80196:
    {
        returnValue = F("Dissauer Dorfstr.");
        break;
    }
    case 80197:
    {
        returnValue = F("Dissauer Str.");
        break;
    }
    case 80198:
    {
        returnValue = F("Disselbergstr.");
        break;
    }
    case 80199:
    {
        returnValue = F("Disseler Brücke");
        break;
    }
    case 80200:
    {
        returnValue = F("Disselfinkstroot");
        break;
    }
    case 80201:
    {
        returnValue = F("Disselhof");
        break;
    }
    case 80202:
    {
        returnValue = F("Disselhoffweg");
        break;
    }
    case 80203:
    {
        returnValue = F("Disselhook");
        break;
    }
    case 80204:
    {
        returnValue = F("Disselkampstr.");
        break;
    }
    case 80205:
    {
        returnValue = F("Disselstr.");
        break;
    }
    case 80206:
    {
        returnValue = F("Dissenbachtalstr.");
        break;
    }
    case 80207:
    {
        returnValue = F("Dissenchener Hauptstr.");
        break;
    }
    case 80208:
    {
        returnValue = F("Dissenchener Schulstr.");
        break;
    }
    case 80209:
    {
        returnValue = F("Dissenchener Str.");
        break;
    }
    case 80210:
    {
        returnValue = F("Dissenchener Turnstr.");
        break;
    }
    case 80211:
    {
        returnValue = F("Dissenchener Waldstr.");
        break;
    }
    case 80212:
    {
        returnValue = F("Dissener Str.");
        break;
    }
    case 80213:
    {
        returnValue = F("Dissener Weg");
        break;
    }
    case 80214:
    {
        returnValue = F("Dissengrabenweg");
        break;
    }
    case 80215:
    {
        returnValue = F("Dissenhofweg");
        break;
    }
    case 80216:
    {
        returnValue = F("Dissenhornweg");
        break;
    }
    case 80217:
    {
        returnValue = F("Dissenkamp");
        break;
    }
    case 80218:
    {
        returnValue = F("Dissestr.");
        break;
    }
    case 80219:
    {
        returnValue = F("Distelacker");
        break;
    }
    case 80220:
    {
        returnValue = F("Distelather Pfädchen");
        break;
    }
    case 80221:
    {
        returnValue = F("Distelbachstr.");
        break;
    }
    case 80222:
    {
        returnValue = F("Distelbeck");
        break;
    }
    case 80223:
    {
        returnValue = F("Distelberg");
        break;
    }
    case 80224:
    {
        returnValue = F("Distelberger Weg");
        break;
    }
    case 80225:
    {
        returnValue = F("Distelbergstr.");
        break;
    }
    case 80226:
    {
        returnValue = F("Distelbergweg");
        break;
    }
    case 80227:
    {
        returnValue = F("Distelbreite");
        break;
    }
    case 80228:
    {
        returnValue = F("Distelbusch");
        break;
    }
    case 80229:
    {
        returnValue = F("Distelecke");
        break;
    }
    case 80230:
    {
        returnValue = F("Distelfalterhof");
        break;
    }
    case 80231:
    {
        returnValue = F("Distelfalterweg");
        break;
    }
    case 80232:
    {
        returnValue = F("Distelfeld");
        break;
    }
    case 80233:
    {
        returnValue = F("Distelfeldstr.");
        break;
    }
    case 80234:
    {
        returnValue = F("Distelfinkenweg");
        break;
    }
    case 80235:
    {
        returnValue = F("Distelfinkstr.");
        break;
    }
    case 80236:
    {
        returnValue = F("Distelfinkweg");
        break;
    }
    case 80237:
    {
        returnValue = F("Distelgasse");
        break;
    }
    case 80238:
    {
        returnValue = F("Distelgrabenweg");
        break;
    }
    case 80239:
    {
        returnValue = F("Distelhaus");
        break;
    }
    case 80240:
    {
        returnValue = F("Distelheide");
        break;
    }
    case 80241:
    {
        returnValue = F("Distelhof");
        break;
    }
    case 80242:
    {
        returnValue = F("Distelkamp");
        break;
    }
    case 80243:
    {
        returnValue = F("Distelkamper Str.");
        break;
    }
    case 80244:
    {
        returnValue = F("Distelkampstr.");
        break;
    }
    case 80245:
    {
        returnValue = F("Distelklinge");
        break;
    }
    case 80246:
    {
        returnValue = F("Distelknock");
        break;
    }
    case 80247:
    {
        returnValue = F("Distelkoppel");
        break;
    }
    case 80248:
    {
        returnValue = F("Distelkrog");
        break;
    }
    case 80249:
    {
        returnValue = F("Distelner Heide");
        break;
    }
    case 80250:
    {
        returnValue = F("Distelner Str.");
        break;
    }
    case 80251:
    {
        returnValue = F("Distelort");
        break;
    }
    case 80252:
    {
        returnValue = F("Distelrasen");
        break;
    }
    case 80253:
    {
        returnValue = F("Distelrather Str.");
        break;
    }
    case 80254:
    {
        returnValue = F("Distelrather Weg");
        break;
    }
    case 80255:
    {
        returnValue = F("Distelring");
        break;
    }
    case 80256:
    {
        returnValue = F("Distelsand");
        break;
    }
    case 80257:
    {
        returnValue = F("Distelshausen");
        break;
    }
    case 80258:
    {
        returnValue = F("Distelstr.");
        break;
    }
    case 80259:
    {
        returnValue = F("Distelweg");
        break;
    }
    case 80260:
    {
        returnValue = F("Distelwies");
        break;
    }
    case 80261:
    {
        returnValue = F("Distelzell");
        break;
    }
    case 80262:
    {
        returnValue = F("Disteläckerstr.");
        break;
    }
    case 80263:
    {
        returnValue = F("Distenicher Str.");
        break;
    }
    case 80264:
    {
        returnValue = F("Disternicher Auel");
        break;
    }
    case 80265:
    {
        returnValue = F("Disternicher Str.");
        break;
    }
    case 80266:
    {
        returnValue = F("Disternicher Torwall");
        break;
    }
    case 80267:
    {
        returnValue = F("Disternicher Weg");
        break;
    }
    case 80268:
    {
        returnValue = F("Distler");
        break;
    }
    case 80269:
    {
        returnValue = F("Distlerweg");
        break;
    }
    case 80270:
    {
        returnValue = F("Distlhofer Str.");
        break;
    }
    case 80271:
    {
        returnValue = F("Distrikt Kohlhau");
        break;
    }
    case 80272:
    {
        returnValue = F("Ditfurter Str.");
        break;
    }
    case 80273:
    {
        returnValue = F("Ditfurter Weg");
        break;
    }
    case 80274:
    {
        returnValue = F("Ditfurthstr.");
        break;
    }
    case 80275:
    {
        returnValue = F("Ditgesend");
        break;
    }
    case 80276:
    {
        returnValue = F("Ditgesgasse");
        break;
    }
    case 80277:
    {
        returnValue = F("Dithartstr.");
        break;
    }
    case 80278:
    {
        returnValue = F("Dithmarschenstr.");
        break;
    }
    case 80279:
    {
        returnValue = F("Dithmarscher Platz");
        break;
    }
    case 80280:
    {
        returnValue = F("Dithmarscher Ring");
        break;
    }
    case 80281:
    {
        returnValue = F("Dithmarscher Str.");
        break;
    }
    case 80282:
    {
        returnValue = F("Dithmarscher Weg");
        break;
    }
    case 80283:
    {
        returnValue = F("Ditmar-Gurk-Weg");
        break;
    }
    case 80284:
    {
        returnValue = F("Ditmar-Koel-Str.");
        break;
    }
    case 80285:
    {
        returnValue = F("Ditmar-Schaup-Brücke");
        break;
    }
    case 80286:
    {
        returnValue = F("Ditscheider Str.");
        break;
    }
    case 80287:
    {
        returnValue = F("Ditschgarten");
        break;
    }
    case 80288:
    {
        returnValue = F("Dittelbrunner Str.");
        break;
    }
    case 80289:
    {
        returnValue = F("Dittelbrunner Weg");
        break;
    }
    case 80290:
    {
        returnValue = F("Dittelsdorfer Str.");
        break;
    }
    case 80291:
    {
        returnValue = F("Dittelsheimer Str.");
        break;
    }
    case 80292:
    {
        returnValue = F("Dittelsheimer Weg");
        break;
    }
    case 80293:
    {
        returnValue = F("Dittelstedter Grenze");
        break;
    }
    case 80294:
    {
        returnValue = F("Dittelstedter Weg");
        break;
    }
    case 80295:
    {
        returnValue = F("Dittenbergerstr.");
        break;
    }
    case 80296:
    {
        returnValue = F("Dittenbrunnenweg");
        break;
    }
    case 80297:
    {
        returnValue = F("Dittenheimer Str.");
        break;
    }
    case 80298:
    {
        returnValue = F("Dittenkofen");
        break;
    }
    case 80299:
    {
        returnValue = F("Dittenplatz");
        break;
    }
    case 80300:
    {
        returnValue = F("Ditterker Weg");
        break;
    }
    case 80301:
    {
        returnValue = F("Dittersbacher Gewerbering");
        break;
    }
    case 80302:
    {
        returnValue = F("Dittersbacher Str.");
        break;
    }
    case 80303:
    {
        returnValue = F("Dittersbacher Weg");
        break;
    }
    case 80304:
    {
        returnValue = F("Dittersdorf");
        break;
    }
    case 80305:
    {
        returnValue = F("Dittersdorf-Eibenberger Weg");
        break;
    }
    case 80306:
    {
        returnValue = F("Dittersdorfer Str.");
        break;
    }
    case 80307:
    {
        returnValue = F("Dittersdorfer Weg");
        break;
    }
    case 80308:
    {
        returnValue = F("Dittershäuser Str.");
        break;
    }
    case 80309:
    {
        returnValue = F("Ditterstal");
        break;
    }
    case 80310:
    {
        returnValue = F("Dittesstr.");
        break;
    }
    case 80311:
    {
        returnValue = F("Ditthornstr.");
        break;
    }
    case 80312:
    {
        returnValue = F("Dittichenröder Dorfstr.");
        break;
    }
    case 80313:
    {
        returnValue = F("Dittigheimer Boden");
        break;
    }
    case 80314:
    {
        returnValue = F("Dittigheimer Str.");
        break;
    }
    case 80315:
    {
        returnValue = F("Dittigheimer Weg");
        break;
    }
    case 80316:
    {
        returnValue = F("Dittishauser Str.");
        break;
    }
    case 80317:
    {
        returnValue = F("Dittlau");
        break;
    }
    case 80318:
    {
        returnValue = F("Dittlofroder Str.");
        break;
    }
    case 80319:
    {
        returnValue = F("Dittmannsdorfer Str.");
        break;
    }
    case 80320:
    {
        returnValue = F("Dittmannsdorfer Weg");
        break;
    }
    case 80321:
    {
        returnValue = F("Dittmannsdorfweg");
        break;
    }
    case 80322:
    {
        returnValue = F("Dittmannstr.");
        break;
    }
    case 80323:
    {
        returnValue = F("Dittmannswiesen");
        break;
    }
    case 80324:
    {
        returnValue = F("Dittmar Str.");
        break;
    }
    case 80325:
    {
        returnValue = F("Dittmarstr.");
        break;
    }
    case 80326:
    {
        returnValue = F("Dittmarweg");
        break;
    }
    case 80327:
    {
        returnValue = F("Dittmer Brücke");
        break;
    }
    case 80328:
    {
        returnValue = F("Dittmers Eck");
        break;
    }
    case 80329:
    {
        returnValue = F("Dittrichplatz");
        break;
    }
    case 80330:
    {
        returnValue = F("Dittrichring");
        break;
    }
    case 80331:
    {
        returnValue = F("Dittrichshütter Hauptstr.");
        break;
    }
    case 80332:
    {
        returnValue = F("Dittrichstr.");
        break;
    }
    case 80333:
    {
        returnValue = F("Dittrichsweg");
        break;
    }
    case 80334:
    {
        returnValue = F("Dittsteg");
        break;
    }
    case 80335:
    {
        returnValue = F("Dittwarer Str.");
        break;
    }
    case 80336:
    {
        returnValue = F("Dittweilerstr.");
        break;
    }
    case 80337:
    {
        returnValue = F("Ditz Knäppchen");
        break;
    }
    case 80338:
    {
        returnValue = F("Ditzenbacher Str.");
        break;
    }
    case 80339:
    {
        returnValue = F("Ditzenbacher Weg");
        break;
    }
    case 80340:
    {
        returnValue = F("Ditzenbrunner Str.");
        break;
    }
    case 80341:
    {
        returnValue = F("Ditzenhöfe");
        break;
    }
    case 80342:
    {
        returnValue = F("Ditzenkamp");
        break;
    }
    case 80343:
    {
        returnValue = F("Ditzentalweg");
        break;
    }
    case 80344:
    {
        returnValue = F("Ditzinger Str.");
        break;
    }
    case 80345:
    {
        returnValue = F("Ditzinger Weg");
        break;
    }
    case 80346:
    {
        returnValue = F("Ditzlingsteige");
        break;
    }
    case 80347:
    {
        returnValue = F("Ditzroder Weg");
        break;
    }
    case 80348:
    {
        returnValue = F("Ditzumer Hofstr.");
        break;
    }
    case 80349:
    {
        returnValue = F("Ditzumer Weg");
        break;
    }
    case 80350:
    {
        returnValue = F("Ditzumerhammrich");
        break;
    }
    case 80351:
    {
        returnValue = F("Ditzumerverlaat");
        break;
    }
    case 80352:
    {
        returnValue = F("Diutweg");
        break;
    }
    case 80353:
    {
        returnValue = F("Dives-sur-Mer-Str.");
        break;
    }
    case 80354:
    {
        returnValue = F("Divitzer Weg");
        break;
    }
    case 80355:
    {
        returnValue = F("Dixe Birke");
        break;
    }
    case 80356:
    {
        returnValue = F("Dixenhausen");
        break;
    }
    case 80357:
    {
        returnValue = F("Dixmühlenweg");
        break;
    }
    case 80358:
    {
        returnValue = F("Dixstr.");
        break;
    }
    case 80359:
    {
        returnValue = F("Dixweg");
        break;
    }
    case 80360:
    {
        returnValue = F("Diätenweg");
        break;
    }
    case 80361:
    {
        returnValue = F("Diözesanstr.");
        break;
    }
    case 80362:
    {
        returnValue = F("Djurslandweg");
        break;
    }
    case 80363:
    {
        returnValue = F("Dmitrower-Kreisel");
        break;
    }
    case 80364:
    {
        returnValue = F("Doagl-Alm-Str.");
        break;
    }
    case 80365:
    {
        returnValue = F("Dobacher Str.");
        break;
    }
    case 80366:
    {
        returnValue = F("Dobareuth");
        break;
    }
    case 80367:
    {
        returnValue = F("Dobbefenne");
        break;
    }
    case 80368:
    {
        returnValue = F("Dobbelei");
        break;
    }
    case 80369:
    {
        returnValue = F("Dobbelhofskamp");
        break;
    }
    case 80370:
    {
        returnValue = F("Dobbelner Str.");
        break;
    }
    case 80371:
    {
        returnValue = F("Dobbelsteiner Weg");
        break;
    }
    case 80372:
    {
        returnValue = F("Dobben");
        break;
    }
    case 80373:
    {
        returnValue = F("Dobbendamm");
        break;
    }
    case 80374:
    {
        returnValue = F("Dobbenende");
        break;
    }
    case 80375:
    {
        returnValue = F("Dobbenlandstr.");
        break;
    }
    case 80376:
    {
        returnValue = F("Dobbenlohne");
        break;
    }
    case 80377:
    {
        returnValue = F("Dobbenstr.");
        break;
    }
    case 80378:
    {
        returnValue = F("Dobbenweg");
        break;
    }
    case 80379:
    {
        returnValue = F("Dobbertinweg");
        break;
    }
    case 80380:
    {
        returnValue = F("Dobberziner Dorfstr.");
        break;
    }
    case 80381:
    {
        returnValue = F("Dobberziner Str.");
        break;
    }
    case 80382:
    {
        returnValue = F("Dobberziner Weg");
        break;
    }
    case 80383:
    {
        returnValue = F("Dobbheide");
        break;
    }
    case 80384:
    {
        returnValue = F("Dobbiner Chaussee");
        break;
    }
    case 80385:
    {
        returnValue = F("Dobbiner Str.");
        break;
    }
    case 80386:
    {
        returnValue = F("Dobbiner Weg");
        break;
    }
    case 80387:
    {
        returnValue = F("Dobbrikower Str.");
        break;
    }
    case 80388:
    {
        returnValue = F("Dobbrikower Weg");
        break;
    }
    case 80389:
    {
        returnValue = F("Dobel");
        break;
    }
    case 80390:
    {
        returnValue = F("Dobelbachweg");
        break;
    }
    case 80391:
    {
        returnValue = F("Dobelblick");
        break;
    }
    case 80392:
    {
        returnValue = F("Dobelfeld");
        break;
    }
    case 80393:
    {
        returnValue = F("Dobelgasse");
        break;
    }
    case 80394:
    {
        returnValue = F("Dobelhalde");
        break;
    }
    case 80395:
    {
        returnValue = F("Dobelhof");
        break;
    }
    case 80396:
    {
        returnValue = F("Dobelklingenstr.");
        break;
    }
    case 80397:
    {
        returnValue = F("Dobelmatte-Weg");
        break;
    }
    case 80398:
    {
        returnValue = F("Dobelrain");
        break;
    }
    case 80399:
    {
        returnValue = F("Dobelstr.");
        break;
    }
    case 80400:
    {
        returnValue = F("Dobeltal");
        break;
    }
    case 80401:
    {
        returnValue = F("Dobeltalweg");
        break;
    }
    case 80402:
    {
        returnValue = F("Dobelwasen");
        break;
    }
    case 80403:
    {
        returnValue = F("Dobelweg");
        break;
    }
    case 80404:
    {
        returnValue = F("Dobelwiesenstr.");
        break;
    }
    case 80405:
    {
        returnValue = F("Dobeläcker");
        break;
    }
    case 80406:
    {
        returnValue = F("Dobenaustr.");
        break;
    }
    case 80407:
    {
        returnValue = F("Dobenecker Weg");
        break;
    }
    case 80408:
    {
        returnValue = F("Dobeneckerstr.");
        break;
    }
    case 80409:
    {
        returnValue = F("Dobenkamp");
        break;
    }
    case 80410:
    {
        returnValue = F("Dobenreuther Str.");
        break;
    }
    case 80411:
    {
        returnValue = F("Dobenstr.");
        break;
    }
    case 80412:
    {
        returnValue = F("Doberaner Landstr.");
        break;
    }
    case 80413:
    {
        returnValue = F("Doberaner Landweg");
        break;
    }
    case 80414:
    {
        returnValue = F("Doberaner Platz");
        break;
    }
    case 80415:
    {
        returnValue = F("Doberaner Str.");
        break;
    }
    case 80416:
    {
        returnValue = F("Doberaner Weg");
        break;
    }
    case 80417:
    {
        returnValue = F("Doberanweg");
        break;
    }
    case 80418:
    {
        returnValue = F("Doberbergstr.");
        break;
    }
    case 80419:
    {
        returnValue = F("Doberburg");
        break;
    }
    case 80420:
    {
        returnValue = F("Dobergaster Str.");
        break;
    }
    case 80421:
    {
        returnValue = F("Dobergstr.");
        break;
    }
    case 80422:
    {
        returnValue = F("Doberitzer Weg");
        break;
    }
    case 80423:
    {
        returnValue = F("Doberkamp");
        break;
    }
    case 80424:
    {
        returnValue = F("Doberluger Chaussee");
        break;
    }
    case 80425:
    {
        returnValue = F("Doberluger Str.");
        break;
    }
    case 80426:
    {
        returnValue = F("Dobermannstr.");
        break;
    }
    case 80427:
    {
        returnValue = F("Dobernitz");
        break;
    }
    case 80428:
    {
        returnValue = F("Doberow");
        break;
    }
    case 80429:
    {
        returnValue = F("Doberquitz");
        break;
    }
    case 80430:
    {
        returnValue = F("Doberschwitz");
        break;
    }
    case 80431:
    {
        returnValue = F("Doberschützer Hauptstr.");
        break;
    }
    case 80432:
    {
        returnValue = F("Doberschützer Str.");
        break;
    }
    case 80433:
    {
        returnValue = F("Dobersdorfer Str.");
        break;
    }
    case 80434:
    {
        returnValue = F("Doberseiker Str.");
        break;
    }
    case 80435:
    {
        returnValue = F("Dobersgrund");
        break;
    }
    case 80436:
    {
        returnValue = F("Doberstauer Str.");
        break;
    }
    case 80437:
    {
        returnValue = F("Doberstauer Weg");
        break;
    }
    case 80438:
    {
        returnValue = F("Dobertschiner Weg");
        break;
    }
    case 80439:
    {
        returnValue = F("Doberweg");
        break;
    }
    case 80440:
    {
        returnValue = F("Doberzeiter Str.");
        break;
    }
    case 80441:
    {
        returnValue = F("Dobewand");
        break;
    }
    case 80442:
    {
        returnValue = F("Dobia");
        break;
    }
    case 80443:
    {
        returnValue = F("Dobichauer Str.");
        break;
    }
    case 80444:
    {
        returnValue = F("Dobiener Bachstr.");
        break;
    }
    case 80445:
    {
        returnValue = F("Dobiener Feldstr.");
        break;
    }
    case 80446:
    {
        returnValue = F("Dobiener Grünstr.");
        break;
    }
    case 80447:
    {
        returnValue = F("Dobiener Mühlstr.");
        break;
    }
    case 80448:
    {
        returnValue = F("Dobiener Str.");
        break;
    }
    case 80449:
    {
        returnValue = F("Dobiener Weg");
        break;
    }
    case 80450:
    {
        returnValue = F("Dobiser Weg");
        break;
    }
    case 80451:
    {
        returnValue = F("Dobl");
        break;
    }
    case 80452:
    {
        returnValue = F("Doblbachstr.");
        break;
    }
    case 80453:
    {
        returnValue = F("Doblbauer Str.");
        break;
    }
    case 80454:
    {
        returnValue = F("Dobler Str.");
        break;
    }
    case 80455:
    {
        returnValue = F("Dobler Weg");
        break;
    }
    case 80456:
    {
        returnValue = F("Doblerstr.");
        break;
    }
    case 80457:
    {
        returnValue = F("Doblhof");
        break;
    }
    case 80458:
    {
        returnValue = F("Doblinaweg");
        break;
    }
    case 80459:
    {
        returnValue = F("Doblingerstr.");
        break;
    }
    case 80460:
    {
        returnValue = F("Doblsteiner Weg");
        break;
    }
    case 80461:
    {
        returnValue = F("Doblstr.");
        break;
    }
    case 80462:
    {
        returnValue = F("Doblweg");
        break;
    }
    case 80463:
    {
        returnValue = F("Dobmeierstr.");
        break;
    }
    case 80464:
    {
        returnValue = F("Dobra");
        break;
    }
    case 80465:
    {
        returnValue = F("Dobrachstr.");
        break;
    }
    case 80466:
    {
        returnValue = F("Dobraer Weg");
        break;
    }
    case 80467:
    {
        returnValue = F("Dobrigau");
        break;
    }
    case 80468:
    {
        returnValue = F("Dobriner Str.");
        break;
    }
    case 80469:
    {
        returnValue = F("Dobritzer Str.");
        break;
    }
    case 80470:
    {
        returnValue = F("Dobro");
        break;
    }
    case 80471:
    {
        returnValue = F("Dobrock");
        break;
    }
    case 80472:
    {
        returnValue = F("Dobronstr.");
        break;
    }
    case 80473:
    {
        returnValue = F("Dobrudschastr.");
        break;
    }
    case 80474:
    {
        returnValue = F("Dobschützstr.");
        break;
    }
    case 80475:
    {
        returnValue = F("Dochnahlstr.");
        break;
    }
    case 80476:
    {
        returnValue = F("Dochtermannstr.");
        break;
    }
    case 80477:
    {
        returnValue = F("Docke, Themenpark Fisch");
        break;
    }
    case 80478:
    {
        returnValue = F("Dockendorfer Str.");
        break;
    }
    case 80479:
    {
        returnValue = F("Dockendorffstr.");
        break;
    }
    case 80480:
    {
        returnValue = F("Dockenhudener Chaussee");
        break;
    }
    case 80481:
    {
        returnValue = F("Dockenried");
        break;
    }
    case 80482:
    {
        returnValue = F("Dockenschlag");
        break;
    }
    case 80483:
    {
        returnValue = F("Dockenweg");
        break;
    }
    case 80484:
    {
        returnValue = F("Dockenäcker");
        break;
    }
    case 80485:
    {
        returnValue = F("Dockshöhe");
        break;
    }
    case 80486:
    {
        returnValue = F("Dockstr.");
        break;
    }
    case 80487:
    {
        returnValue = F("Dockweiler Str.");
        break;
    }
    case 80488:
    {
        returnValue = F("Dockweilerstr.");
        break;
    }
    case 80489:
    {
        returnValue = F("Doctor-Eisenbart-Ring");
        break;
    }
    case 80490:
    {
        returnValue = F("Doctor-Eisenbarth-Ring");
        break;
    }
    case 80491:
    {
        returnValue = F("Doddendam");
        break;
    }
    case 80492:
    {
        returnValue = F("Doddestr.");
        break;
    }
    case 80493:
    {
        returnValue = F("Dodeleber Weg");
        break;
    }
    case 80494:
    {
        returnValue = F("Dodelstr.");
        break;
    }
    case 80495:
    {
        returnValue = F("Dodelweg");
        break;
    }
    case 80496:
    {
        returnValue = F("Dodenburger Str.");
        break;
    }
    case 80497:
    {
        returnValue = F("Dodendorfer Platz");
        break;
    }
    case 80498:
    {
        returnValue = F("Dodendorfer Str.");
        break;
    }
    case 80499:
    {
        returnValue = F("Dodendorfer Weg");
        break;
    }
    case 80500:
    {
        returnValue = F("Dodenkampsweg");
        break;
    }
    case 80501:
    {
        returnValue = F("Dodentwenter");
        break;
    }
    case 80502:
    {
        returnValue = F("Dodeshausweg");
        break;
    }
    case 80503:
    {
        returnValue = F("Dodo-Wildvang-Str.");
        break;
    }
    case 80504:
    {
        returnValue = F("Dodo-Wildvang-Weg");
        break;
    }
    case 80505:
    {
        returnValue = F("Dodoweg");
        break;
    }
    case 80506:
    {
        returnValue = F("Dodower Weg");
        break;
    }
    case 80507:
    {
        returnValue = F("Dodstr.");
        break;
    }
    case 80508:
    {
        returnValue = F("Doebelsdiek");
        break;
    }
    case 80509:
    {
        returnValue = F("Doebelstr.");
        break;
    }
    case 80510:
    {
        returnValue = F("Doeberlstr.");
        break;
    }
    case 80511:
    {
        returnValue = F("Doebnerstr.");
        break;
    }
    case 80512:
    {
        returnValue = F("Doeckelstr.");
        break;
    }
    case 80513:
    {
        returnValue = F("Doeckerplatz");
        break;
    }
    case 80514:
    {
        returnValue = F("Doeckerweg");
        break;
    }
    case 80515:
    {
        returnValue = F("Doelenstr.");
        break;
    }
    case 80516:
    {
        returnValue = F("Doelestr.");
        break;
    }
    case 80517:
    {
        returnValue = F("Doemern");
        break;
    }
    case 80518:
    {
        returnValue = F("Doenchstr.");
        break;
    }
    case 80519:
    {
        returnValue = F("Doenhauser Marschstr.");
        break;
    }
    case 80520:
    {
        returnValue = F("Doenhauser Str.");
        break;
    }
    case 80521:
    {
        returnValue = F("Doenhauser Weg");
        break;
    }
    case 80522:
    {
        returnValue = F("Doer De Hahlingjes");
        break;
    }
    case 80523:
    {
        returnValue = F("Doerfelstr.");
        break;
    }
    case 80524:
    {
        returnValue = F("Doergensstr.");
        break;
    }
    case 80525:
    {
        returnValue = F("Doeringstr.");
        break;
    }
    case 80526:
    {
        returnValue = F("Doerkesplatz");
        break;
    }
    case 80527:
    {
        returnValue = F("Doernestr.");
        break;
    }
    case 80528:
    {
        returnValue = F("Doernkamp");
        break;
    }
    case 80529:
    {
        returnValue = F("Doerperhofstr.");
        break;
    }
    case 80530:
    {
        returnValue = F("Doerpstraat");
        break;
    }
    case 80531:
    {
        returnValue = F("Doershelfer Weg");
        break;
    }
    case 80532:
    {
        returnValue = F("Doesburger Str.");
        break;
    }
    case 80533:
    {
        returnValue = F("Doesemoor");
        break;
    }
    case 80534:
    {
        returnValue = F("Doetsch-Werner-Platz");
        break;
    }
    case 80535:
    {
        returnValue = F("Doetschstr.");
        break;
    }
    case 80536:
    {
        returnValue = F("Doevenspeck");
        break;
    }
    case 80537:
    {
        returnValue = F("Doferlgäßchen");
        break;
    }
    case 80538:
    {
        returnValue = F("Doffenleitenweg");
        break;
    }
    case 80539:
    {
        returnValue = F("Doger Goat");
        break;
    }
    case 80540:
    {
        returnValue = F("Dogerner Str.");
        break;
    }
    case 80541:
    {
        returnValue = F("Dogge");
        break;
    }
    case 80542:
    {
        returnValue = F("Doggenbrunnen");
        break;
    }
    case 80543:
    {
        returnValue = F("Doggenriedstr.");
        break;
    }
    case 80544:
    {
        returnValue = F("Doggenweg");
        break;
    }
    case 80545:
    {
        returnValue = F("Doggerbankstr.");
        break;
    }
    case 80546:
    {
        returnValue = F("Doggererzweg");
        break;
    }
    case 80547:
    {
        returnValue = F("Doggerstr.");
        break;
    }
    case 80548:
    {
        returnValue = F("Doheermanns Höhe");
        break;
    }
    case 80549:
    {
        returnValue = F("Dohkaule");
        break;
    }
    case 80550:
    {
        returnValue = F("Dohl");
        break;
    }
    case 80551:
    {
        returnValue = F("Dohlacker Weg");
        break;
    }
    case 80552:
    {
        returnValue = F("Dohlberg");
        break;
    }
    case 80553:
    {
        returnValue = F("Dohle");
        break;
    }
    case 80554:
    {
        returnValue = F("Dohlenbachweg");
        break;
    }
    case 80555:
    {
        returnValue = F("Dohlenfeld");
        break;
    }
    case 80556:
    {
        returnValue = F("Dohlenfelsenstr.");
        break;
    }
    case 80557:
    {
        returnValue = F("Dohlengasse");
        break;
    }
    case 80558:
    {
        returnValue = F("Dohlengässle");
        break;
    }
    case 80559:
    {
        returnValue = F("Dohlenhorst");
        break;
    }
    case 80560:
    {
        returnValue = F("Dohlenkamp");
        break;
    }
    case 80561:
    {
        returnValue = F("Dohlenreihe");
        break;
    }
    case 80562:
    {
        returnValue = F("Dohlensteg");
        break;
    }
    case 80563:
    {
        returnValue = F("Dohlenstieg");
        break;
    }
    case 80564:
    {
        returnValue = F("Dohlenstiege");
        break;
    }
    case 80565:
    {
        returnValue = F("Dohlenstr.");
        break;
    }
    case 80566:
    {
        returnValue = F("Dohlenweg");
        break;
    }
    case 80567:
    {
        returnValue = F("Dohler Str.");
        break;
    }
    case 80568:
    {
        returnValue = F("Dohleweg");
        break;
    }
    case 80569:
    {
        returnValue = F("Dohlgraben");
        break;
    }
    case 80570:
    {
        returnValue = F("Dohlsbachstr.");
        break;
    }
    case 80571:
    {
        returnValue = F("Dohlweg");
        break;
    }
    case 80572:
    {
        returnValue = F("Dohm");
        break;
    }
    case 80573:
    {
        returnValue = F("Dohmanns Weg");
        break;
    }
    case 80574:
    {
        returnValue = F("Dohmengarten");
        break;
    }
    case 80575:
    {
        returnValue = F("Dohmengasse");
        break;
    }
    case 80576:
    {
        returnValue = F("Dohmenstr.");
        break;
    }
    case 80577:
    {
        returnValue = F("Dohmeswiese");
        break;
    }
    case 80578:
    {
        returnValue = F("Dohmetweg");
        break;
    }
    case 80579:
    {
        returnValue = F("Dohmstr.");
        break;
    }
    case 80580:
    {
        returnValue = F("Dohmwirthhof");
        break;
    }
    case 80581:
    {
        returnValue = F("Dohnaer Platz");
        break;
    }
    case 80582:
    {
        returnValue = F("Dohnaer Str.");
        break;
    }
    case 80583:
    {
        returnValue = F("Dohnaische Str.");
        break;
    }
    case 80584:
    {
        returnValue = F("Dohnaischer Platz");
        break;
    }
    case 80585:
    {
        returnValue = F("Dohndorfer Weg");
        break;
    }
    case 80586:
    {
        returnValue = F("Dohne");
        break;
    }
    case 80587:
    {
        returnValue = F("Dohnenstieg");
        break;
    }
    case 80588:
    {
        returnValue = F("Dohnenstiege");
        break;
    }
    case 80589:
    {
        returnValue = F("Dohneweg");
        break;
    }
    case 80590:
    {
        returnValue = F("Dohnkamp");
        break;
    }
    case 80591:
    {
        returnValue = F("Dohns Weg");
        break;
    }
    case 80592:
    {
        returnValue = F("Dohnsen");
        break;
    }
    case 80593:
    {
        returnValue = F("Dohnser Weg");
        break;
    }
    case 80594:
    {
        returnValue = F("Dohnwaldstr.");
        break;
    }
    case 80595:
    {
        returnValue = F("Dohr");
        break;
    }
    case 80596:
    {
        returnValue = F("Dohren");
        break;
    }
    case 80597:
    {
        returnValue = F("Dohrener Brook");
        break;
    }
    case 80598:
    {
        returnValue = F("Dohrener Str.");
        break;
    }
    case 80599:
    {
        returnValue = F("Dohrener Weg");
        break;
    }
    case 80600:
    {
        returnValue = F("Dohrenstr.");
        break;
    }
    case 80601:
    {
        returnValue = F("Dohrenweg");
        break;
    }
    case 80602:
    {
        returnValue = F("Dohrer Str.");
        break;
    }
    case 80603:
    {
        returnValue = F("Dohrer Weg");
        break;
    }
    case 80604:
    {
        returnValue = F("Dohrfelder Str.");
        break;
    }
    case 80605:
    {
        returnValue = F("Dohrgasse");
        break;
    }
    case 80606:
    {
        returnValue = F("Dohrgaul");
        break;
    }
    case 80607:
    {
        returnValue = F("Dohrgauler Str.");
        break;
    }
    case 80608:
    {
        returnValue = F("Dohrhofweg");
        break;
    }
    case 80609:
    {
        returnValue = F("Dohrkamp");
        break;
    }
    case 80610:
    {
        returnValue = F("Dohrmanns Horst");
        break;
    }
    case 80611:
    {
        returnValue = F("Dohrmannskamp");
        break;
    }
    case 80612:
    {
        returnValue = F("Dohrmannstr.");
        break;
    }
    case 80613:
    {
        returnValue = F("Dohrmannweg");
        break;
    }
    case 80614:
    {
        returnValue = F("Dohrmeerweg");
        break;
    }
    case 80615:
    {
        returnValue = F("Dohrnstr.");
        break;
    }
    case 80616:
    {
        returnValue = F("Dohrstr.");
        break;
    }
    case 80617:
    {
        returnValue = F("Dohrweg");
        break;
    }
    case 80618:
    {
        returnValue = F("Dohsbühlerweg");
        break;
    }
    case 80619:
    {
        returnValue = F("Dohsener Str.");
        break;
    }
    case 80620:
    {
        returnValue = F("Dohusen");
        break;
    }
    case 80621:
    {
        returnValue = F("Dohuser Weg");
        break;
    }
    case 80622:
    {
        returnValue = F("Doikstrote");
        break;
    }
    case 80623:
    {
        returnValue = F("Dokkumstr.");
        break;
    }
    case 80624:
    {
        returnValue = F("Dokorweg");
        break;
    }
    case 80625:
    {
        returnValue = F("Doktor Faller Weg");
        break;
    }
    case 80626:
    {
        returnValue = F("Doktor Wald Weg");
        break;
    }
    case 80627:
    {
        returnValue = F("Doktor-Albert-Frank-Str.");
        break;
    }
    case 80628:
    {
        returnValue = F("Doktor-Albert-Hoffa-Str.");
        break;
    }
    case 80629:
    {
        returnValue = F("Doktor-Albert-Schweitzer-Str.");
        break;
    }
    case 80630:
    {
        returnValue = F("Doktor-Albert-Zölch-Str.");
        break;
    }
    case 80631:
    {
        returnValue = F("Doktor-Alfred-Weckesser-Str.");
        break;
    }
    case 80632:
    {
        returnValue = F("Doktor-Ambundi-Str.");
        break;
    }
    case 80633:
    {
        returnValue = F("Doktor-Appelhans-Weg");
        break;
    }
    case 80634:
    {
        returnValue = F("Doktor-Arko-Str.");
        break;
    }
    case 80635:
    {
        returnValue = F("Doktor-August-Tuppert-Str.");
        break;
    }
    case 80636:
    {
        returnValue = F("Doktor-August-Wolfstieg-Str.");
        break;
    }
    case 80637:
    {
        returnValue = F("Doktor-Bach-Str.");
        break;
    }
    case 80638:
    {
        returnValue = F("Doktor-Barbara-Renz-Weg");
        break;
    }
    case 80639:
    {
        returnValue = F("Doktor-Baumgartner-Str.");
        break;
    }
    case 80640:
    {
        returnValue = F("Doktor-Baur-Str.");
        break;
    }
    case 80641:
    {
        returnValue = F("Doktor-Bayer-Str.");
        break;
    }
    case 80642:
    {
        returnValue = F("Doktor-Beber-Str.");
        break;
    }
    case 80643:
    {
        returnValue = F("Doktor-Benker-Str.");
        break;
    }
    case 80644:
    {
        returnValue = F("Doktor-Beyer-Str.");
        break;
    }
    case 80645:
    {
        returnValue = F("Doktor-Bihler-Weg");
        break;
    }
    case 80646:
    {
        returnValue = F("Doktor-Blaich-Str.");
        break;
    }
    case 80647:
    {
        returnValue = F("Doktor-Blank-Str.");
        break;
    }
    case 80648:
    {
        returnValue = F("Doktor-Breitscheid-Platz");
        break;
    }
    case 80649:
    {
        returnValue = F("Doktor-Buchner-Str.");
        break;
    }
    case 80650:
    {
        returnValue = F("Doktor-Butenberg-Str.");
        break;
    }
    case 80651:
    {
        returnValue = F("Doktor-Carl-Brand-Str.");
        break;
    }
    case 80652:
    {
        returnValue = F("Doktor-Carl-Goerdeler-Str.");
        break;
    }
    case 80653:
    {
        returnValue = F("Doktor-Deist-Str.");
        break;
    }
    case 80654:
    {
        returnValue = F("Doktor-Demmeler-Str.");
        break;
    }
    case 80655:
    {
        returnValue = F("Doktor-Doetsch-Str.");
        break;
    }
    case 80656:
    {
        returnValue = F("Doktor-Douwes-Str.");
        break;
    }
    case 80657:
    {
        returnValue = F("Doktor-Dürrwaechter-Weg");
        break;
    }
    case 80658:
    {
        returnValue = F("Doktor-Eberl-Str.");
        break;
    }
    case 80659:
    {
        returnValue = F("Doktor-Eckener-Platz");
        break;
    }
    case 80660:
    {
        returnValue = F("Doktor-Einhauser-Str.");
        break;
    }
    case 80661:
    {
        returnValue = F("Doktor-Eisenbart-Str.");
        break;
    }
    case 80662:
    {
        returnValue = F("Doktor-Eisenmann-Str.");
        break;
    }
    case 80663:
    {
        returnValue = F("Doktor-Eisenreiter-Weg");
        break;
    }
    case 80664:
    {
        returnValue = F("Doktor-Elisabeth-Selbert-Ring");
        break;
    }
    case 80665:
    {
        returnValue = F("Doktor-Elisabeth-Selbert-Weg");
        break;
    }
    case 80666:
    {
        returnValue = F("Doktor-Emil-Beysel-Str.");
        break;
    }
    case 80667:
    {
        returnValue = F("Doktor-Emil-Hasel-Siedlung");
        break;
    }
    case 80668:
    {
        returnValue = F("Doktor-Enzinger-Str.");
        break;
    }
    case 80669:
    {
        returnValue = F("Doktor-Ernst-Kilb-Weg");
        break;
    }
    case 80670:
    {
        returnValue = F("Doktor-Ernst-Wachler-Str.");
        break;
    }
    case 80671:
    {
        returnValue = F("Doktor-Ernst-Zimmermann-Allee");
        break;
    }
    case 80672:
    {
        returnValue = F("Doktor-Eva-Glees-Str.");
        break;
    }
    case 80673:
    {
        returnValue = F("Doktor-Everken-Weg");
        break;
    }
    case 80674:
    {
        returnValue = F("Doktor-Ewald-Simon-Str.");
        break;
    }
    case 80675:
    {
        returnValue = F("Doktor-Fabri-Str.");
        break;
    }
    case 80676:
    {
        returnValue = F("Doktor-Feddersen-Weg");
        break;
    }
    case 80677:
    {
        returnValue = F("Doktor-Felix-Gerhardus-Str.");
        break;
    }
    case 80678:
    {
        returnValue = F("Doktor-Franz-Bachmayr-Str.");
        break;
    }
    case 80679:
    {
        returnValue = F("Doktor-Friedeberg-Str.");
        break;
    }
    case 80680:
    {
        returnValue = F("Doktor-Friedrich-Elz-Str.");
        break;
    }
    case 80681:
    {
        returnValue = F("Doktor-Friedrich-Heß-Str.");
        break;
    }
    case 80682:
    {
        returnValue = F("Doktor-Friedrich-Str.");
        break;
    }
    case 80683:
    {
        returnValue = F("Doktor-Friedrichs-Siedlung");
        break;
    }
    case 80684:
    {
        returnValue = F("Doktor-Friedrichs-Str.");
        break;
    }
    case 80685:
    {
        returnValue = F("Doktor-Friton-Str.");
        break;
    }
    case 80686:
    {
        returnValue = F("Doktor-Fritz-Guth-Str.");
        break;
    }
    case 80687:
    {
        returnValue = F("Doktor-Färber-Str.");
        break;
    }
    case 80688:
    {
        returnValue = F("Doktor-Gantenberg-Str.");
        break;
    }
    case 80689:
    {
        returnValue = F("Doktor-Gazert-Str.");
        break;
    }
    case 80690:
    {
        returnValue = F("Doktor-Georg-Heim-Str.");
        break;
    }
    case 80691:
    {
        returnValue = F("Doktor-Georg-Schäfer-Str.");
        break;
    }
    case 80692:
    {
        returnValue = F("Doktor-Gerhard-Hanke-Weg");
        break;
    }
    case 80693:
    {
        returnValue = F("Doktor-German-Roßkopf-Str.");
        break;
    }
    case 80694:
    {
        returnValue = F("Doktor-Gertrud-Bäumer-Weg");
        break;
    }
    case 80695:
    {
        returnValue = F("Doktor-Gessler-Str.");
        break;
    }
    case 80696:
    {
        returnValue = F("Doktor-Giglinger-Str.");
        break;
    }
    case 80697:
    {
        returnValue = F("Doktor-Grünewald-Str.");
        break;
    }
    case 80698:
    {
        returnValue = F("Doktor-Gutmann-Str.");
        break;
    }
    case 80699:
    {
        returnValue = F("Doktor-Gäch-Str.");
        break;
    }
    case 80700:
    {
        returnValue = F("Doktor-Götz-Str.");
        break;
    }
    case 80701:
    {
        returnValue = F("Doktor-H.-W.-Gehlen-Str.");
        break;
    }
    case 80702:
    {
        returnValue = F("Doktor-Hackmann-Str.");
        break;
    }
    case 80703:
    {
        returnValue = F("Doktor-Hammerschmidt-Platz");
        break;
    }
    case 80704:
    {
        returnValue = F("Doktor-Hanns-Georgi-Weg");
        break;
    }
    case 80705:
    {
        returnValue = F("Doktor-Hans-Curtius-Str.");
        break;
    }
    case 80706:
    {
        returnValue = F("Doktor-Hans-Friedel-Str.");
        break;
    }
    case 80707:
    {
        returnValue = F("Doktor-Hans-Fuchs-Str.");
        break;
    }
    case 80708:
    {
        returnValue = F("Doktor-Hans-Jakob-Str.");
        break;
    }
    case 80709:
    {
        returnValue = F("Doktor-Hans-Künzel-Str.");
        break;
    }
    case 80710:
    {
        returnValue = F("Doktor-Hans-Wilhelmi-Weg");
        break;
    }
    case 80711:
    {
        returnValue = F("Doktor-Harnier-Str.");
        break;
    }
    case 80712:
    {
        returnValue = F("Doktor-Hausmann-Str.");
        break;
    }
    case 80713:
    {
        returnValue = F("Doktor-Haußner-Str.");
        break;
    }
    case 80714:
    {
        returnValue = F("Doktor-Heim-Str.");
        break;
    }
    case 80715:
    {
        returnValue = F("Doktor-Heinrich-Bohley-Str.");
        break;
    }
    case 80716:
    {
        returnValue = F("Doktor-Heinrich-Dräger-Str.");
        break;
    }
    case 80717:
    {
        returnValue = F("Doktor-Heinrich-Jasper-Str.");
        break;
    }
    case 80718:
    {
        returnValue = F("Doktor-Heinrich-Pfropfe-Str.");
        break;
    }
    case 80719:
    {
        returnValue = F("Doktor-Heinrich-Renkl-Str.");
        break;
    }
    case 80720:
    {
        returnValue = F("Doktor-Heinrich-Rosenhaupt-Str.");
        break;
    }
    case 80721:
    {
        returnValue = F("Doktor-Heinrich-Zippel-Park");
        break;
    }
    case 80722:
    {
        returnValue = F("Doktor-Heiß-Str.");
        break;
    }
    case 80723:
    {
        returnValue = F("Doktor-Held-Str.");
        break;
    }
    case 80724:
    {
        returnValue = F("Doktor-Helmut-Lemke-Str.");
        break;
    }
    case 80725:
    {
        returnValue = F("Doktor-Herbert-Kittel-Str.");
        break;
    }
    case 80726:
    {
        returnValue = F("Doktor-Hermann-Brosig-Weg");
        break;
    }
    case 80727:
    {
        returnValue = F("Doktor-Hermann-Ehlers-Str.");
        break;
    }
    case 80728:
    {
        returnValue = F("Doktor-Hermann-Jöckel-Str.");
        break;
    }
    case 80729:
    {
        returnValue = F("Doktor-Hermann-Schleenbecker-Str.");
        break;
    }
    case 80730:
    {
        returnValue = F("Doktor-Hermannes-Weg");
        break;
    }
    case 80731:
    {
        returnValue = F("Doktor-Herold-Weg");
        break;
    }
    case 80732:
    {
        returnValue = F("Doktor-Herrmann-Str.");
        break;
    }
    case 80733:
    {
        returnValue = F("Doktor-Herz-Str.");
        break;
    }
    case 80734:
    {
        returnValue = F("Doktor-Hesse-Str.");
        break;
    }
    case 80735:
    {
        returnValue = F("Doktor-Hildegard-Sina-Str.");
        break;
    }
    case 80736:
    {
        returnValue = F("Doktor-Hilger-Str.");
        break;
    }
    case 80737:
    {
        returnValue = F("Doktor-Hiller-Str.");
        break;
    }
    case 80738:
    {
        returnValue = F("Doktor-Hilmar-Jahn-Str.");
        break;
    }
    case 80739:
    {
        returnValue = F("Doktor-Hofmeister-Str.");
        break;
    }
    case 80740:
    {
        returnValue = F("Doktor-Hugo-Oster-Platz");
        break;
    }
    case 80741:
    {
        returnValue = F("Doktor-Hübner-Weg");
        break;
    }
    case 80742:
    {
        returnValue = F("Doktor-Hünerhoff-Str.");
        break;
    }
    case 80743:
    {
        returnValue = F("Doktor-Jacob-Str.");
        break;
    }
    case 80744:
    {
        returnValue = F("Doktor-Jakob-Scheckh-Str.");
        break;
    }
    case 80745:
    {
        returnValue = F("Doktor-Jakob-Wittemann-Str.");
        break;
    }
    case 80746:
    {
        returnValue = F("Doktor-Jasper-Plan");
        break;
    }
    case 80747:
    {
        returnValue = F("Doktor-Jochner-Weg");
        break;
    }
    case 80748:
    {
        returnValue = F("Doktor-Johann-Heitzer-Str.");
        break;
    }
    case 80749:
    {
        returnValue = F("Doktor-Josef-Gutmann-Str.");
        break;
    }
    case 80750:
    {
        returnValue = F("Doktor-Josef-Horbach-Str.");
        break;
    }
    case 80751:
    {
        returnValue = F("Doktor-Josef-Kiener-Str.");
        break;
    }
    case 80752:
    {
        returnValue = F("Doktor-Josef-Schießl-Str.");
        break;
    }
    case 80753:
    {
        returnValue = F("Doktor-Josef-Schäfers-Str.");
        break;
    }
    case 80754:
    {
        returnValue = F("Doktor-Josef-Steinhausen-Str.");
        break;
    }
    case 80755:
    {
        returnValue = F("Doktor-Josef-Thiel-Weg");
        break;
    }
    case 80756:
    {
        returnValue = F("Doktor-Joseph-Bernhart-Str.");
        break;
    }
    case 80757:
    {
        returnValue = F("Doktor-Julius-Leber-Str.");
        break;
    }
    case 80758:
    {
        returnValue = F("Doktor-Julius-Mayer-Str.");
        break;
    }
    case 80759:
    {
        returnValue = F("Doktor-Julius-Str.");
        break;
    }
    case 80760:
    {
        returnValue = F("Doktor-Jäger-Str.");
        break;
    }
    case 80761:
    {
        returnValue = F("Doktor-Kahlbaum-Allee");
        break;
    }
    case 80762:
    {
        returnValue = F("Doktor-Kainz-Str.");
        break;
    }
    case 80763:
    {
        returnValue = F("Doktor-Karl-Baumann-Str.");
        break;
    }
    case 80764:
    {
        returnValue = F("Doktor-Karl-Gelbke-Str.");
        break;
    }
    case 80765:
    {
        returnValue = F("Doktor-Karl-Haaser-Weg");
        break;
    }
    case 80766:
    {
        returnValue = F("Doktor-Karl-Krause-Str.");
        break;
    }
    case 80767:
    {
        returnValue = F("Doktor-Karl-Ott-Str.");
        break;
    }
    case 80768:
    {
        returnValue = F("Doktor-Karl-Reus-Str.");
        break;
    }
    case 80769:
    {
        returnValue = F("Doktor-Karl-Schorndorff-Str.");
        break;
    }
    case 80770:
    {
        returnValue = F("Doktor-Kiefl-Str.");
        break;
    }
    case 80771:
    {
        returnValue = F("Doktor-Kihn-Ring");
        break;
    }
    case 80772:
    {
        returnValue = F("Doktor-Kirchhoff-Platz");
        break;
    }
    case 80773:
    {
        returnValue = F("Doktor-Kirchner-Platz");
        break;
    }
    case 80774:
    {
        returnValue = F("Doktor-Kisselmann-Str.");
        break;
    }
    case 80775:
    {
        returnValue = F("Doktor-Knauer-Str.");
        break;
    }
    case 80776:
    {
        returnValue = F("Doktor-Knipping-Weg");
        break;
    }
    case 80777:
    {
        returnValue = F("Doktor-Knoller-Str.");
        break;
    }
    case 80778:
    {
        returnValue = F("Doktor-Knorz-Str.");
        break;
    }
    case 80779:
    {
        returnValue = F("Doktor-Konrad-Koch-Str.");
        break;
    }
    case 80780:
    {
        returnValue = F("Doktor-Korshenrich-Str.");
        break;
    }
    case 80781:
    {
        returnValue = F("Doktor-Kurt-Kronenberg-Weg");
        break;
    }
    case 80782:
    {
        returnValue = F("Doktor-Kurt-Schumacher-Str.");
        break;
    }
    case 80783:
    {
        returnValue = F("Doktor-Köhler-Weg");
        break;
    }
    case 80784:
    {
        returnValue = F("Doktor-Kübler-Str.");
        break;
    }
    case 80785:
    {
        returnValue = F("Doktor-Külz-Str.");
        break;
    }
    case 80786:
    {
        returnValue = F("Doktor-Lauterbach-Weg");
        break;
    }
    case 80787:
    {
        returnValue = F("Doktor-Leber-Str.");
        break;
    }
    case 80788:
    {
        returnValue = F("Doktor-Leewog-Str.");
        break;
    }
    case 80789:
    {
        returnValue = F("Doktor-Lena-Ohnesorge-Weg");
        break;
    }
    case 80790:
    {
        returnValue = F("Doktor-Leo-Ritter-Str.");
        break;
    }
    case 80791:
    {
        returnValue = F("Doktor-Lieser-Str.");
        break;
    }
    case 80792:
    {
        returnValue = F("Doktor-Lincke-Weg");
        break;
    }
    case 80793:
    {
        returnValue = F("Doktor-Lindemann-Str.");
        break;
    }
    case 80794:
    {
        returnValue = F("Doktor-Loewenberg-Str.");
        break;
    }
    case 80795:
    {
        returnValue = F("Doktor-Luise-Klinsmann-Str.");
        break;
    }
    case 80796:
    {
        returnValue = F("Doktor-Manfred-Hirschvogel-Str.");
        break;
    }
    case 80797:
    {
        returnValue = F("Doktor-Marcus-Allee");
        break;
    }
    case 80798:
    {
        returnValue = F("Doktor-Martin-Bahr-Str.");
        break;
    }
    case 80799:
    {
        returnValue = F("Doktor-Martin-Luther-Platz");
        break;
    }
    case 80800:
    {
        returnValue = F("Doktor-Martin-Luther-Str.");
        break;
    }
    case 80801:
    {
        returnValue = F("Doktor-Matt-Str.");
        break;
    }
    case 80802:
    {
        returnValue = F("Doktor-Max-Schwaab-Str.");
        break;
    }
    case 80803:
    {
        returnValue = F("Doktor-Max-Westermaier-Str.");
        break;
    }
    case 80804:
    {
        returnValue = F("Doktor-Maximilian-Rech-Str.");
        break;
    }
    case 80805:
    {
        returnValue = F("Doktor-Meyer-Str.");
        break;
    }
    case 80806:
    {
        returnValue = F("Doktor-Molitor-Str.");
        break;
    }
    case 80807:
    {
        returnValue = F("Doktor-Moritz-David-Str.");
        break;
    }
    case 80808:
    {
        returnValue = F("Doktor-Muhler-Str.");
        break;
    }
    case 80809:
    {
        returnValue = F("Doktor-Müller-Str.");
        break;
    }
    case 80810:
    {
        returnValue = F("Doktor-Nardini-Str.");
        break;
    }
    case 80811:
    {
        returnValue = F("Doktor-Neuhauser-Str.");
        break;
    }
    case 80812:
    {
        returnValue = F("Doktor-Neukam-Str.");
        break;
    }
    case 80813:
    {
        returnValue = F("Doktor-Niermann-Str.");
        break;
    }
    case 80814:
    {
        returnValue = F("Doktor-Obereit-Str.");
        break;
    }
    case 80815:
    {
        returnValue = F("Doktor-Oetker-Str.");
        break;
    }
    case 80816:
    {
        returnValue = F("Doktor-Otto-Bohl-Str.");
        break;
    }
    case 80817:
    {
        returnValue = F("Doktor-Otto-Höchtl-Str.");
        break;
    }
    case 80818:
    {
        returnValue = F("Doktor-Otto-Klemp-Str.");
        break;
    }
    case 80819:
    {
        returnValue = F("Doktor-Otto-Mayer-Str.");
        break;
    }
    case 80820:
    {
        returnValue = F("Doktor-Otto-Nuschke Str.");
        break;
    }
    case 80821:
    {
        returnValue = F("Doktor-Otto-Nuschke-Str.");
        break;
    }
    case 80822:
    {
        returnValue = F("Doktor-Otto-Röhm-Str.");
        break;
    }
    case 80823:
    {
        returnValue = F("Doktor-Paul-Goes-Weg");
        break;
    }
    case 80824:
    {
        returnValue = F("Doktor-Petzold-Str.");
        break;
    }
    case 80825:
    {
        returnValue = F("Doktor-Pfaffendorf-Weg");
        break;
    }
    case 80826:
    {
        returnValue = F("Doktor-Pfahl-Str.");
        break;
    }
    case 80827:
    {
        returnValue = F("Doktor-R.-Seiler-Str.");
        break;
    }
    case 80828:
    {
        returnValue = F("Doktor-Raupach-Str.");
        break;
    }
    case 80829:
    {
        returnValue = F("Doktor-Reiner-Straßburg-Weg");
        break;
    }
    case 80830:
    {
        returnValue = F("Doktor-Renger-Str.");
        break;
    }
    case 80831:
    {
        returnValue = F("Doktor-Robert-Strell-Str.");
        break;
    }
    case 80832:
    {
        returnValue = F("Doktor-Rohmer-Weg");
        break;
    }
    case 80833:
    {
        returnValue = F("Doktor-Rohrmayr-Str.");
        break;
    }
    case 80834:
    {
        returnValue = F("Doktor-Rose-Weg");
        break;
    }
    case 80835:
    {
        returnValue = F("Doktor-Ruben-Str.");
        break;
    }
    case 80836:
    {
        returnValue = F("Doktor-Ruckert-Str.");
        break;
    }
    case 80837:
    {
        returnValue = F("Doktor-Rudolf-Link-Str.");
        break;
    }
    case 80838:
    {
        returnValue = F("Doktor-Rueß-Platz");
        break;
    }
    case 80839:
    {
        returnValue = F("Doktor-Ruff-Str.");
        break;
    }
    case 80840:
    {
        returnValue = F("Doktor-Ruth-Büttner-Weg");
        break;
    }
    case 80841:
    {
        returnValue = F("Doktor-Rütten-Promenade");
        break;
    }
    case 80842:
    {
        returnValue = F("Doktor-Rüttiger-Str.");
        break;
    }
    case 80843:
    {
        returnValue = F("Doktor-Samer-Str.");
        break;
    }
    case 80844:
    {
        returnValue = F("Doktor-Sartorius-Str.");
        break;
    }
    case 80845:
    {
        returnValue = F("Doktor-Sauerbruch-Str.");
        break;
    }
    case 80846:
    {
        returnValue = F("Doktor-Schanz-Str.");
        break;
    }
    case 80847:
    {
        returnValue = F("Doktor-Scheele-Str.");
        break;
    }
    case 80848:
    {
        returnValue = F("Doktor-Scheider-Str.");
        break;
    }
    case 80849:
    {
        returnValue = F("Doktor-Schmidt-Str.");
        break;
    }
    case 80850:
    {
        returnValue = F("Doktor-Schmitt-Str.");
        break;
    }
    case 80851:
    {
        returnValue = F("Doktor-Schrettenbrunner-Str.");
        break;
    }
    case 80852:
    {
        returnValue = F("Doktor-Schröder-Weg");
        break;
    }
    case 80853:
    {
        returnValue = F("Doktor-Schwalber-Str.");
        break;
    }
    case 80854:
    {
        returnValue = F("Doktor-Schweigel-Str.");
        break;
    }
    case 80855:
    {
        returnValue = F("Doktor-Schönenborn-Str.");
        break;
    }
    case 80856:
    {
        returnValue = F("Doktor-Semmelweis-Str.");
        break;
    }
    case 80857:
    {
        returnValue = F("Doktor-Silberborth-Str.");
        break;
    }
    case 80858:
    {
        returnValue = F("Doktor-Spang-Str.");
        break;
    }
    case 80859:
    {
        returnValue = F("Doktor-Sproll-Str.");
        break;
    }
    case 80860:
    {
        returnValue = F("Doktor-Stahl-Str.");
        break;
    }
    case 80861:
    {
        returnValue = F("Doktor-Stemplinger-Str.");
        break;
    }
    case 80862:
    {
        returnValue = F("Doktor-Stettler-Str.");
        break;
    }
    case 80863:
    {
        returnValue = F("Doktor-Steudner-Str.");
        break;
    }
    case 80864:
    {
        returnValue = F("Doktor-Strasser-Str.");
        break;
    }
    case 80865:
    {
        returnValue = F("Doktor-Sturm-Str.");
        break;
    }
    case 80866:
    {
        returnValue = F("Doktor-Sturmthal-Str.");
        break;
    }
    case 80867:
    {
        returnValue = F("Doktor-Terhalle-Str.");
        break;
    }
    case 80868:
    {
        returnValue = F("Doktor-Theobald-Schrems-Str.");
        break;
    }
    case 80869:
    {
        returnValue = F("Doktor-Theodor-Neubauer-Str.");
        break;
    }
    case 80870:
    {
        returnValue = F("Doktor-Todsen-Str.");
        break;
    }
    case 80871:
    {
        returnValue = F("Doktor-Trepte-Str.");
        break;
    }
    case 80872:
    {
        returnValue = F("Doktor-Troll-Str.");
        break;
    }
    case 80873:
    {
        returnValue = F("Doktor-Trösch-Str.");
        break;
    }
    case 80874:
    {
        returnValue = F("Doktor-Wachler-Weg");
        break;
    }
    case 80875:
    {
        returnValue = F("Doktor-Wald-Weg");
        break;
    }
    case 80876:
    {
        returnValue = F("Doktor-Wallner-Str.");
        break;
    }
    case 80877:
    {
        returnValue = F("Doktor-Walter-Bruch-Str.");
        break;
    }
    case 80878:
    {
        returnValue = F("Doktor-Weber-Str.");
        break;
    }
    case 80879:
    {
        returnValue = F("Doktor-Weis-Platz");
        break;
    }
    case 80880:
    {
        returnValue = F("Doktor-Werner-Str.");
        break;
    }
    case 80881:
    {
        returnValue = F("Doktor-Wigger-Str.");
        break;
    }
    case 80882:
    {
        returnValue = F("Doktor-Wilhelm-Külz-Str.");
        break;
    }
    case 80883:
    {
        returnValue = F("Doktor-Wilhelm-Schaeffler-Str.");
        break;
    }
    case 80884:
    {
        returnValue = F("Doktor-Wilhem-Dürr-Weg");
        break;
    }
    case 80885:
    {
        returnValue = F("Doktor-Wimmer-Ring");
        break;
    }
    case 80886:
    {
        returnValue = F("Doktor-Winnacker-Str.");
        break;
    }
    case 80887:
    {
        returnValue = F("Doktor-Winterling-Str.");
        break;
    }
    case 80888:
    {
        returnValue = F("Doktor-Zahner-Str.");
        break;
    }
    case 80889:
    {
        returnValue = F("Doktor-Zippel-Str.");
        break;
    }
    case 80890:
    {
        returnValue = F("Doktor-von-Gregel-Str.");
        break;
    }
    case 80891:
    {
        returnValue = F("Doktor-von-Schmitt-Str.");
        break;
    }
    case 80892:
    {
        returnValue = F("Doktorberg");
        break;
    }
    case 80893:
    {
        returnValue = F("Doktorbrücke");
        break;
    }
    case 80894:
    {
        returnValue = F("Doktorbäuerinweg");
        break;
    }
    case 80895:
    {
        returnValue = F("Doktorenstr.");
        break;
    }
    case 80896:
    {
        returnValue = F("Doktorgasse");
        break;
    }
    case 80897:
    {
        returnValue = F("Doktorgässi");
        break;
    }
    case 80898:
    {
        returnValue = F("Doktorgäßchen");
        break;
    }
    case 80899:
    {
        returnValue = F("Doktorhaus");
        break;
    }
    case 80900:
    {
        returnValue = F("Doktorhof");
        break;
    }
    case 80901:
    {
        returnValue = F("Doktorhofweg");
        break;
    }
    case 80902:
    {
        returnValue = F("Doktorhügel");
        break;
    }
    case 80903:
    {
        returnValue = F("Doktorkamp");
        break;
    }
    case 80904:
    {
        returnValue = F("Doktorpark");
        break;
    }
    case 80905:
    {
        returnValue = F("Doktorsberg");
        break;
    }
    case 80906:
    {
        returnValue = F("Doktorsbuck");
        break;
    }
    case 80907:
    {
        returnValue = F("Doktorsbusch");
        break;
    }
    case 80908:
    {
        returnValue = F("Doktorshofstr.");
        break;
    }
    case 80909:
    {
        returnValue = F("Doktorskamp");
        break;
    }
    case 80910:
    {
        returnValue = F("Doktorsleite");
        break;
    }
    case 80911:
    {
        returnValue = F("Doktorsteg");
        break;
    }
    case 80912:
    {
        returnValue = F("Doktorstieg");
        break;
    }
    case 80913:
    {
        returnValue = F("Doktorstr.");
        break;
    }
    case 80914:
    {
        returnValue = F("Doktorswiese");
        break;
    }
    case 80915:
    {
        returnValue = F("Doktorswinkel");
        break;
    }
    case 80916:
    {
        returnValue = F("Doktorweg");
        break;
    }
    case 80917:
    {
        returnValue = F("Doktorwegerl");
        break;
    }
    case 80918:
    {
        returnValue = F("Doktorwerder");
        break;
    }
    case 80919:
    {
        returnValue = F("Dolanallee");
        break;
    }
    case 80920:
    {
        returnValue = F("Dolbaumstr.");
        break;
    }
    case 80921:
    {
        returnValue = F("Dolberger Str.");
        break;
    }
    case 80922:
    {
        returnValue = F("Dolchauer Dorfstr.");
        break;
    }
    case 80923:
    {
        returnValue = F("Dolche");
        break;
    }
    case 80924:
    {
        returnValue = F("Dolcè-Ring");
        break;
    }
    case 80925:
    {
        returnValue = F("Doldenhausen");
        break;
    }
    case 80926:
    {
        returnValue = F("Doldenhof");
        break;
    }
    case 80927:
    {
        returnValue = F("Doldenweg");
        break;
    }
    case 80928:
    {
        returnValue = F("Doldenäcker");
        break;
    }
    case 80929:
    {
        returnValue = F("Dolderstr.");
        break;
    }
    case 80930:
    {
        returnValue = F("Dolengäßle");
        break;
    }
    case 80931:
    {
        returnValue = F("Dolenweg");
        break;
    }
    case 80932:
    {
        returnValue = F("Doler Platz");
        break;
    }
    case 80933:
    {
        returnValue = F("Dolf-Sternberger-Weg");
        break;
    }
    case 80934:
    {
        returnValue = F("Dolfenstr.");
        break;
    }
    case 80935:
    {
        returnValue = F("Dolgeliner Str.");
        break;
    }
    case 80936:
    {
        returnValue = F("Dolgeliner Weg");
        break;
    }
    case 80937:
    {
        returnValue = F("Dolgemost");
        break;
    }
    case 80938:
    {
        returnValue = F("Dolgen");
        break;
    }
    case 80939:
    {
        returnValue = F("Dolgener Str.");
        break;
    }
    case 80940:
    {
        returnValue = F("Dolgener Weg");
        break;
    }
    case 80941:
    {
        returnValue = F("Dolgesheimer Str.");
        break;
    }
    case 80942:
    {
        returnValue = F("Dolgesheimer Weg");
        break;
    }
    case 80943:
    {
        returnValue = F("Dolgower Rundling");
        break;
    }
    case 80944:
    {
        returnValue = F("Dolgower Str.");
        break;
    }
    case 80945:
    {
        returnValue = F("Dolgowitzer Str.");
        break;
    }
    case 80946:
    {
        returnValue = F("Dolinenweg");
        break;
    }
    case 80947:
    {
        returnValue = F("Dolivostr.");
        break;
    }
    case 80948:
    {
        returnValue = F("Dolkstr.");
        break;
    }
    case 80949:
    {
        returnValue = F("Doll");
        break;
    }
    case 80950:
    {
        returnValue = F("Dollackerstr.");
        break;
    }
    case 80951:
    {
        returnValue = F("Dollahner Str.");
        break;
    }
    case 80952:
    {
        returnValue = F("Dollargasse");
        break;
    }
    case 80953:
    {
        returnValue = F("Dollartstr.");
        break;
    }
    case 80954:
    {
        returnValue = F("Dollartweg");
        break;
    }
    case 80955:
    {
        returnValue = F("Dollauweg");
        break;
    }
    case 80956:
    {
        returnValue = F("Dollbachstr.");
        break;
    }
    case 80957:
    {
        returnValue = F("Dollberger Str.");
        break;
    }
    case 80958:
    {
        returnValue = F("Dollbergstr.");
        break;
    }
    case 80959:
    {
        returnValue = F("Dollbergweg");
        break;
    }
    case 80960:
    {
        returnValue = F("Dollbronner Str.");
        break;
    }
    case 80961:
    {
        returnValue = F("Dollbronnerstr.");
        break;
    }
    case 80962:
    {
        returnValue = F("Dolldorf");
        break;
    }
    case 80963:
    {
        returnValue = F("Dolldorfer Eichenweg");
        break;
    }
    case 80964:
    {
        returnValue = F("Dollenbergstr.");
        break;
    }
    case 80965:
    {
        returnValue = F("Dollenburen");
        break;
    }
    case 80966:
    {
        returnValue = F("Dollencher Str.");
        break;
    }
    case 80967:
    {
        returnValue = F("Dollendorfer Allee");
        break;
    }
    case 80968:
    {
        returnValue = F("Dollendorfer Str.");
        break;
    }
    case 80969:
    {
        returnValue = F("Dollenkamp");
        break;
    }
    case 80970:
    {
        returnValue = F("Dollenschlucht");
        break;
    }
    case 80971:
    {
        returnValue = F("Dollenstr.");
        break;
    }
    case 80972:
    {
        returnValue = F("Dollenweg");
        break;
    }
    case 80973:
    {
        returnValue = F("Dollenäcker");
        break;
    }
    case 80974:
    {
        returnValue = F("Dollerner Str.");
        break;
    }
    case 80975:
    {
        returnValue = F("Dollerner Weg");
        break;
    }
    case 80976:
    {
        returnValue = F("Dolleruper Str.");
        break;
    }
    case 80977:
    {
        returnValue = F("Dollerweg");
        break;
    }
    case 80978:
    {
        returnValue = F("Dollesbachweg");
        break;
    }
    case 80979:
    {
        returnValue = F("Dolleshof");
        break;
    }
    case 80980:
    {
        returnValue = F("Dollespark");
        break;
    }
    case 80981:
    {
        returnValue = F("Dollgasse");
        break;
    }
    case 80982:
    {
        returnValue = F("Dollgower Damm");
        break;
    }
    case 80983:
    {
        returnValue = F("Dollgower Weg");
        break;
    }
    case 80984:
    {
        returnValue = F("Dollinger Pfad");
        break;
    }
    case 80985:
    {
        returnValue = F("Dollinger Str.");
        break;
    }
    case 80986:
    {
        returnValue = F("Dollinger Weg");
        break;
    }
    case 80987:
    {
        returnValue = F("Dollingerstr.");
        break;
    }
    case 80988:
    {
        returnValue = F("Dollingsweg");
        break;
    }
    case 80989:
    {
        returnValue = F("Dollmannstr.");
        break;
    }
    case 80990:
    {
        returnValue = F("Dollmätschstr.");
        break;
    }
    case 80991:
    {
        returnValue = F("Dollnsteiner Str.");
        break;
    }
    case 80992:
    {
        returnValue = F("Dollrade-Schneise");
        break;
    }
    case 80993:
    {
        returnValue = F("Dollrottholz");
        break;
    }
    case 80994:
    {
        returnValue = F("Dollshof");
        break;
    }
    case 80995:
    {
        returnValue = F("Dollstr.");
        break;
    }
    case 80996:
    {
        returnValue = F("Dollstädtweg");
        break;
    }
    case 80997:
    {
        returnValue = F("Dollweg");
        break;
    }
    case 80998:
    {
        returnValue = F("Dolmanstr.");
        break;
    }
    case 80999:
    {
        returnValue = F("Dolmarrundweg");
        break;
    }
    case 81000:
    {
        returnValue = F("Dolmarstr.");
        break;
    }
    case 81001:
    {
        returnValue = F("Dolmenkotten");
        break;
    }
    case 81002:
    {
        returnValue = F("Dolmenring");
        break;
    }
    case 81003:
    {
        returnValue = F("Doloff");
        break;
    }
    case 81004:
    {
        returnValue = F("Dolomitenblick");
        break;
    }
    case 81005:
    {
        returnValue = F("Dolomitensteig");
        break;
    }
    case 81006:
    {
        returnValue = F("Dolomitenstr.");
        break;
    }
    case 81007:
    {
        returnValue = F("Dolomitenweg");
        break;
    }
    case 81008:
    {
        returnValue = F("Dolomitstr.");
        break;
    }
    case 81009:
    {
        returnValue = F("Dolomitweg");
        break;
    }
    case 81010:
    {
        returnValue = F("Dolrichtstadt");
        break;
    }
    case 81011:
    {
        returnValue = F("Dolsenhainer Str.");
        break;
    }
    case 81012:
    {
        returnValue = F("Dolslebener Str.");
        break;
    }
    case 81013:
    {
        returnValue = F("Dolsthaidaer Str.");
        break;
    }
    case 81014:
    {
        returnValue = F("Dolweg");
        break;
    }
    case 81015:
    {
        returnValue = F("Dolwiesenweg");
        break;
    }
    case 81016:
    {
        returnValue = F("Dom");
        break;
    }
    case 81017:
    {
        returnValue = F("Dom-Esch-Str.");
        break;
    }
    case 81018:
    {
        returnValue = F("Dom-Escher-Str.");
        break;
    }
    case 81019:
    {
        returnValue = F("Domacker");
        break;
    }
    case 81020:
    {
        returnValue = F("Domackerstr.");
        break;
    }
    case 81021:
    {
        returnValue = F("Domagkstr.");
        break;
    }
    case 81022:
    {
        returnValue = F("Domagkweg");
        break;
    }
    case 81023:
    {
        returnValue = F("Domanialeweg");
        break;
    }
    case 81024:
    {
        returnValue = F("Domanialweg");
        break;
    }
    case 81025:
    {
        returnValue = F("Domauer Str.");
        break;
    }
    case 81026:
    {
        returnValue = F("Domaweg");
        break;
    }
    case 81027:
    {
        returnValue = F("Domaxen");
        break;
    }
    case 81028:
    {
        returnValue = F("Dombach im Loch");
        break;
    }
    case 81029:
    {
        returnValue = F("Dombach-Sander-Str.");
        break;
    }
    case 81030:
    {
        returnValue = F("Dombacher Str.");
        break;
    }
    case 81031:
    {
        returnValue = F("Dombacher Weg");
        break;
    }
    case 81032:
    {
        returnValue = F("Dombachhaus");
        break;
    }
    case 81033:
    {
        returnValue = F("Dombachstr.");
        break;
    }
    case 81034:
    {
        returnValue = F("Dombachtalweg");
        break;
    }
    case 81035:
    {
        returnValue = F("Dombaumeister-Schneider-Str.");
        break;
    }
    case 81036:
    {
        returnValue = F("Domberg");
        break;
    }
    case 81037:
    {
        returnValue = F("Dombergstr.");
        break;
    }
    case 81038:
    {
        returnValue = F("Dombergweg");
        break;
    }
    case 81039:
    {
        returnValue = F("Domblick");
        break;
    }
    case 81040:
    {
        returnValue = F("Dombogen");
        break;
    }
    case 81041:
    {
        returnValue = F("Dombrede");
        break;
    }
    case 81042:
    {
        returnValue = F("Dombreede");
        break;
    }
    case 81043:
    {
        returnValue = F("Dombrowskistr.");
        break;
    }
    case 81044:
    {
        returnValue = F("Dombóvárstr.");
        break;
    }
    case 81045:
    {
        returnValue = F("Dombühler Str.");
        break;
    }
    case 81046:
    {
        returnValue = F("Domdech.-Benkert-Weg");
        break;
    }
    case 81047:
    {
        returnValue = F("Domdechanei");
        break;
    }
    case 81048:
    {
        returnValue = F("Domdekan-Reindl-Str.");
        break;
    }
    case 81049:
    {
        returnValue = F("Domdeystr.");
        break;
    }
    case 81050:
    {
        returnValue = F("Dome");
        break;
    }
    case 81051:
    {
        returnValue = F("Domeierstr.");
        break;
    }
    case 81052:
    {
        returnValue = F("Domelerweg");
        break;
    }
    case 81053:
    {
        returnValue = F("Domenecker Str.");
        break;
    }
    case 81054:
    {
        returnValue = F("Domenriede");
        break;
    }
    case 81055:
    {
        returnValue = F("Domensoot");
        break;
    }
    case 81056:
    {
        returnValue = F("Domentalsweg");
        break;
    }
    case 81057:
    {
        returnValue = F("Domerpfarrgasse");
        break;
    }
    case 81058:
    {
        returnValue = F("Domerschulstr.");
        break;
    }
    case 81059:
    {
        returnValue = F("Domerslebener Str.");
        break;
    }
    case 81060:
    {
        returnValue = F("Domersleber Str.");
        break;
    }
    case 81061:
    {
        returnValue = F("Domersleber Weg");
        break;
    }
    case 81062:
    {
        returnValue = F("Dometzwies");
        break;
    }
    case 81063:
    {
        returnValue = F("Domeyerpark");
        break;
    }
    case 81064:
    {
        returnValue = F("Domfreihof");
        break;
    }
    case 81065:
    {
        returnValue = F("Domgang");
        break;
    }
    case 81066:
    {
        returnValue = F("Domgarten");
        break;
    }
    case 81067:
    {
        returnValue = F("Domgarten Naumburg");
        break;
    }
    case 81068:
    {
        returnValue = F("Domgasse");
        break;
    }
    case 81069:
    {
        returnValue = F("Domgäßchen");
        break;
    }
    case 81070:
    {
        returnValue = F("Domherr-Gottfried-Weg");
        break;
    }
    case 81071:
    {
        returnValue = F("Domherrengasse");
        break;
    }
    case 81072:
    {
        returnValue = F("Domherrenkamp");
        break;
    }
    case 81073:
    {
        returnValue = F("Domherrenplatz");
        break;
    }
    case 81074:
    {
        returnValue = F("Domherrenstr.");
        break;
    }
    case 81075:
    {
        returnValue = F("Domherrenweg");
        break;
    }
    case 81076:
    {
        returnValue = F("Domherrngasse");
        break;
    }
    case 81077:
    {
        returnValue = F("Domherrnkamp");
        break;
    }
    case 81078:
    {
        returnValue = F("Domherrnstr.");
        break;
    }
    case 81079:
    {
        returnValue = F("Domherrnviertel");
        break;
    }
    case 81080:
    {
        returnValue = F("Domhof");
        break;
    }
    case 81081:
    {
        returnValue = F("Domhoffstr.");
        break;
    }
    case 81082:
    {
        returnValue = F("Domhofgasse");
        break;
    }
    case 81083:
    {
        returnValue = F("Domhofplatz");
        break;
    }
    case 81084:
    {
        returnValue = F("Domhofstr.");
        break;
    }
    case 81085:
    {
        returnValue = F("Domhofweg");
        break;
    }
    case 81086:
    {
        returnValue = F("Domholz");
        break;
    }
    case 81087:
    {
        returnValue = F("Domholzweg");
        break;
    }
    case 81088:
    {
        returnValue = F("Domhorster Allee");
        break;
    }
    case 81089:
    {
        returnValue = F("Domhuesfeld");
        break;
    }
    case 81090:
    {
        returnValue = F("Domhuser Weg");
        break;
    }
    case 81091:
    {
        returnValue = F("Domhüllenweg");
        break;
    }
    case 81092:
    {
        returnValue = F("Dominicus Hacks Weg");
        break;
    }
    case 81093:
    {
        returnValue = F("Dominicus-Zimmermann-Str.");
        break;
    }
    case 81094:
    {
        returnValue = F("Dominicusstr.");
        break;
    }
    case 81095:
    {
        returnValue = F("Dominik-Brunner-Weg");
        break;
    }
    case 81096:
    {
        returnValue = F("Dominik-Spadinger-Weg");
        break;
    }
    case 81097:
    {
        returnValue = F("Dominik-Weber-Str.");
        break;
    }
    case 81098:
    {
        returnValue = F("Dominikaner Bongert");
        break;
    }
    case 81099:
    {
        returnValue = F("Dominikanergasse");
        break;
    }
    case 81100:
    {
        returnValue = F("Dominikanergässchen");
        break;
    }
    case 81101:
    {
        returnValue = F("Dominikanerinnenplatz");
        break;
    }
    case 81102:
    {
        returnValue = F("Dominikanerinnenstr.");
        break;
    }
    case 81103:
    {
        returnValue = F("Dominikanerpassage");
        break;
    }
    case 81104:
    {
        returnValue = F("Dominikanerstr.");
        break;
    }
    case 81105:
    {
        returnValue = F("Dominikanerweg");
        break;
    }
    case 81106:
    {
        returnValue = F("Dominikstr.");
        break;
    }
    case 81107:
    {
        returnValue = F("Dominiksweg");
        break;
    }
    case 81108:
    {
        returnValue = F("Dominikus-Böhm-Str.");
        break;
    }
    case 81109:
    {
        returnValue = F("Dominikus-Böhm-Weg");
        break;
    }
    case 81110:
    {
        returnValue = F("Dominikus-Debler-Str.");
        break;
    }
    case 81111:
    {
        returnValue = F("Dominikus-Kneidl-Str.");
        break;
    }
    case 81112:
    {
        returnValue = F("Dominikus-Käser-Str.");
        break;
    }
    case 81113:
    {
        returnValue = F("Dominikus-Mettenleiter-Str.");
        break;
    }
    case 81114:
    {
        returnValue = F("Dominikus-Ringeisen-Platz");
        break;
    }
    case 81115:
    {
        returnValue = F("Dominikus-Ringeisen-Str.");
        break;
    }
    case 81116:
    {
        returnValue = F("Dominikus-Ringeisen-Weg");
        break;
    }
    case 81117:
    {
        returnValue = F("Dominikus-Savio-Str.");
        break;
    }
    case 81118:
    {
        returnValue = F("Dominikus-Schneider-Str.");
        break;
    }
    case 81119:
    {
        returnValue = F("Dominikus-Schramm-Str.");
        break;
    }
    case 81120:
    {
        returnValue = F("Dominikus-Späth-Str.");
        break;
    }
    case 81121:
    {
        returnValue = F("Dominikus-Vraetz-Str.");
        break;
    }
    case 81122:
    {
        returnValue = F("Dominikus-Zell-Weg");
        break;
    }
    case 81123:
    {
        returnValue = F("Dominikus-Zimmermann-Str.");
        break;
    }
    case 81124:
    {
        returnValue = F("Dominikusstr.");
        break;
    }
    case 81125:
    {
        returnValue = F("Dominikusweg");
        break;
    }
    case 81126:
    {
        returnValue = F("Doministr.");
        break;
    }
    case 81127:
    {
        returnValue = F("Dominitstr.");
        break;
    }
    case 81128:
    {
        returnValue = F("Dominium");
        break;
    }
    case 81129:
    {
        returnValue = F("Dominiweg");
        break;
    }
    case 81130:
    {
        returnValue = F("Dominoweg");
        break;
    }
    case 81131:
    {
        returnValue = F("Domitianstr.");
        break;
    }
    case 81132:
    {
        returnValue = F("Domkapitelstr.");
        break;
    }
    case 81133:
    {
        returnValue = F("Domkapitelweg");
        break;
    }
    case 81134:
    {
        returnValue = F("Domkauler Weg");
        break;
    }
    case 81135:
    {
        returnValue = F("Domkeweg");
        break;
    }
    case 81136:
    {
        returnValue = F("Domkietz");
        break;
    }
    case 81137:
    {
        returnValue = F("Domkirchhof");
        break;
    }
    case 81138:
    {
        returnValue = F("Domküsterhof");
        break;
    }
    case 81139:
    {
        returnValue = F("Domlandweg");
        break;
    }
    case 81140:
    {
        returnValue = F("Domlehen");
        break;
    }
    case 81141:
    {
        returnValue = F("Domlinden");
        break;
    }
    case 81142:
    {
        returnValue = F("Dommelsberger Weg");
        break;
    }
    case 81143:
    {
        returnValue = F("Dommeltal");
        break;
    }
    case 81144:
    {
        returnValue = F("Dommersbach");
        break;
    }
    case 81145:
    {
        returnValue = F("Dommersbergweg");
        break;
    }
    case 81146:
    {
        returnValue = F("Dommerswinkel");
        break;
    }
    case 81147:
    {
        returnValue = F("Dommesstr.");
        break;
    }
    case 81148:
    {
        returnValue = F("Dommesweg");
        break;
    }
    case 81149:
    {
        returnValue = F("Dommitzscher Allee");
        break;
    }
    case 81150:
    {
        returnValue = F("Dommitzscher Str.");
        break;
    }
    case 81151:
    {
        returnValue = F("Domnitzer Lindenstr.");
        break;
    }
    case 81152:
    {
        returnValue = F("Domnitzer Str.");
        break;
    }
    case 81153:
    {
        returnValue = F("Domnitzer Weg");
        break;
    }
    case 81154:
    {
        returnValue = F("Domonter Str.");
        break;
    }
    case 81155:
    {
        returnValue = F("Dompaffstr.");
        break;
    }
    case 81156:
    {
        returnValue = F("Dompassage");
        break;
    }
    case 81157:
    {
        returnValue = F("Dompeldobbenweg");
        break;
    }
    case 81158:
    {
        returnValue = F("Dompenweg");
        break;
    }
    case 81159:
    {
        returnValue = F("Dompeweg");
        break;
    }
    case 81160:
    {
        returnValue = F("Dompfad");
        break;
    }
    case 81161:
    {
        returnValue = F("Dompfaffbrink");
        break;
    }
    case 81162:
    {
        returnValue = F("Dompfaffenstr.");
        break;
    }
    case 81163:
    {
        returnValue = F("Dompfaffenweg");
        break;
    }
    case 81164:
    {
        returnValue = F("Dompfaffgasse");
        break;
    }
    case 81165:
    {
        returnValue = F("Dompfaffstr.");
        break;
    }
    case 81166:
    {
        returnValue = F("Dompfaffweg");
        break;
    }
    case 81167:
    {
        returnValue = F("Dompfaffweg (TuS-Gäßchen)");
        break;
    }
    case 81168:
    {
        returnValue = F("Domplatz");
        break;
    }
    case 81169:
    {
        returnValue = F("Dompopenweg");
        break;
    }
    case 81170:
    {
        returnValue = F("Domprediger-Dr.-Maier-Str.");
        break;
    }
    case 81171:
    {
        returnValue = F("Dompredigergasse");
        break;
    }
    case 81172:
    {
        returnValue = F("Domprobst-Dr.-Weindel-Str.");
        break;
    }
    case 81173:
    {
        returnValue = F("Domprobst-von-Lechner-Platz");
        break;
    }
    case 81174:
    {
        returnValue = F("Domprobstei");
        break;
    }
    case 81175:
    {
        returnValue = F("Dompromenade");
        break;
    }
    case 81176:
    {
        returnValue = F("Dompropst-Dr.-Weindel-Str.");
        break;
    }
    case 81177:
    {
        returnValue = F("Dompropst-Pichler-Str.");
        break;
    }
    case 81178:
    {
        returnValue = F("Dompropst-Stahler-Str.");
        break;
    }
    case 81179:
    {
        returnValue = F("Dompropsteigasse");
        break;
    }
    case 81180:
    {
        returnValue = F("Dompropststr.");
        break;
    }
    case 81181:
    {
        returnValue = F("Dompstr.");
        break;
    }
    case 81182:
    {
        returnValue = F("Domring");
        break;
    }
    case 81183:
    {
        returnValue = F("Domsdorfer Kirchweg");
        break;
    }
    case 81184:
    {
        returnValue = F("Domsdorfer Str.");
        break;
    }
    case 81185:
    {
        returnValue = F("Domsdorfer Weg");
        break;
    }
    case 81186:
    {
        returnValue = F("Domselwitzer Gäßchen");
        break;
    }
    case 81187:
    {
        returnValue = F("Domselwitzer Str.");
        break;
    }
    case 81188:
    {
        returnValue = F("Domsener Str.");
        break;
    }
    case 81189:
    {
        returnValue = F("Domsener Weg");
        break;
    }
    case 81190:
    {
        returnValue = F("Domsfurth");
        break;
    }
    case 81191:
    {
        returnValue = F("Domsheide");
        break;
    }
    case 81192:
    {
        returnValue = F("Domshove");
        break;
    }
    case 81193:
    {
        returnValue = F("Domskuhlweg");
        break;
    }
    case 81194:
    {
        returnValue = F("Domsland");
        break;
    }
    case 81195:
    {
        returnValue = F("Domsoder Kirchweg");
        break;
    }
    case 81196:
    {
        returnValue = F("Domspatzenstr.");
        break;
    }
    case 81197:
    {
        returnValue = F("Domstag");
        break;
    }
    case 81198:
    {
        returnValue = F("Domstiftstr.");
        break;
    }
    case 81199:
    {
        returnValue = F("Domstr.");
        break;
    }
    case 81200:
    {
        returnValue = F("Domstrengbrücke");
        break;
    }
    case 81201:
    {
        returnValue = F("Domsühler Str.");
        break;
    }
    case 81202:
    {
        returnValue = F("Domtalweg");
        break;
    }
    case 81203:
    {
        returnValue = F("Domtreppe");
        break;
    }
    case 81204:
    {
        returnValue = F("Domvikar-Kutscher-Str.");
        break;
    }
    case 81205:
    {
        returnValue = F("Domvorplatz");
        break;
    }
    case 81206:
    {
        returnValue = F("Domweg");
        break;
    }
    case 81207:
    {
        returnValue = F("Domweide");
        break;
    }
    case 81208:
    {
        returnValue = F("Domziegelhof");
        break;
    }
    case 81209:
    {
        returnValue = F("Domäne");
        break;
    }
    case 81210:
    {
        returnValue = F("Domäne Breda");
        break;
    }
    case 81211:
    {
        returnValue = F("Domäne Fahre");
        break;
    }
    case 81212:
    {
        returnValue = F("Domäne Fürstenhagen");
        break;
    }
    case 81213:
    {
        returnValue = F("Domäne Hünkemann");
        break;
    }
    case 81214:
    {
        returnValue = F("Domäne Melkhörn");
        break;
    }
    case 81215:
    {
        returnValue = F("Domänengarten");
        break;
    }
    case 81216:
    {
        returnValue = F("Domänenhof");
        break;
    }
    case 81217:
    {
        returnValue = F("Domänenpadd");
        break;
    }
    case 81218:
    {
        returnValue = F("Domänenpark");
        break;
    }
    case 81219:
    {
        returnValue = F("Domänenplatz");
        break;
    }
    case 81220:
    {
        returnValue = F("Domänenrat-Kreuz-Str.");
        break;
    }
    case 81221:
    {
        returnValue = F("Domänensiedlung");
        break;
    }
    case 81222:
    {
        returnValue = F("Domänenstr.");
        break;
    }
    case 81223:
    {
        returnValue = F("Domänenweg");
        break;
    }
    case 81224:
    {
        returnValue = F("Domännelweg");
        break;
    }
    case 81225:
    {
        returnValue = F("Don Bosco Park");
        break;
    }
    case 81226:
    {
        returnValue = F("Don-Bosco-Allee");
        break;
    }
    case 81227:
    {
        returnValue = F("Don-Bosco-Platz");
        break;
    }
    case 81228:
    {
        returnValue = F("Don-Bosco-Str.");
        break;
    }
    case 81229:
    {
        returnValue = F("Don-Bosco-Weg");
        break;
    }
    case 81230:
    {
        returnValue = F("Don-Bosco-weg");
        break;
    }
    case 81231:
    {
        returnValue = F("Don-Carlos-Str.");
        break;
    }
    case 81232:
    {
        returnValue = F("Donald-Rex-Ring");
        break;
    }
    case 81233:
    {
        returnValue = F("Donaliesstr.");
        break;
    }
    case 81234:
    {
        returnValue = F("Donareichenweg");
        break;
    }
    case 81235:
    {
        returnValue = F("Donarstr.");
        break;
    }
    case 81236:
    {
        returnValue = F("Donastr.");
        break;
    }
    case 81237:
    {
        returnValue = F("Donat-Grömling-Str.");
        break;
    }
    case 81238:
    {
        returnValue = F("Donat-Osterhammer-Str.");
        break;
    }
    case 81239:
    {
        returnValue = F("Donathstr.");
        break;
    }
    case 81240:
    {
        returnValue = F("Donato-Polli-Str.");
        break;
    }
    case 81241:
    {
        returnValue = F("Donats Gang");
        break;
    }
    case 81242:
    {
        returnValue = F("Donatsgasse");
        break;
    }
    case 81243:
    {
        returnValue = F("Donatsring");
        break;
    }
    case 81244:
    {
        returnValue = F("Donatus-Haugg-Str.");
        break;
    }
    case 81245:
    {
        returnValue = F("Donatushof");
        break;
    }
    case 81246:
    {
        returnValue = F("Donatusplatz");
        break;
    }
    case 81247:
    {
        returnValue = F("Donatusring");
        break;
    }
    case 81248:
    {
        returnValue = F("Donatusstr.");
        break;
    }
    case 81249:
    {
        returnValue = F("Donatusweg");
        break;
    }
    case 81250:
    {
        returnValue = F("Donau-Rad-Wanderweg");
        break;
    }
    case 81251:
    {
        returnValue = F("Donau-Radwanderweg");
        break;
    }
    case 81252:
    {
        returnValue = F("Donau-Schwaben-Str.");
        break;
    }
    case 81253:
    {
        returnValue = F("Donauallee");
        break;
    }
    case 81254:
    {
        returnValue = F("Donaubadweg");
        break;
    }
    case 81255:
    {
        returnValue = F("Donaublick");
        break;
    }
    case 81256:
    {
        returnValue = F("Donaubogen");
        break;
    }
    case 81257:
    {
        returnValue = F("Donaubrunnenweg");
        break;
    }
    case 81258:
    {
        returnValue = F("Donaubrücke");
        break;
    }
    case 81259:
    {
        returnValue = F("Donauerweg");
        break;
    }
    case 81260:
    {
        returnValue = F("Donaueschinger Str.");
        break;
    }
    case 81261:
    {
        returnValue = F("Donaufeldstr.");
        break;
    }
    case 81262:
    {
        returnValue = F("Donaugasse");
        break;
    }
    case 81263:
    {
        returnValue = F("Donaugewerbepark");
        break;
    }
    case 81264:
    {
        returnValue = F("Donaugründe");
        break;
    }
    case 81265:
    {
        returnValue = F("Donauhalde");
        break;
    }
    case 81266:
    {
        returnValue = F("Donauhaus");
        break;
    }
    case 81267:
    {
        returnValue = F("Donauhof");
        break;
    }
    case 81268:
    {
        returnValue = F("Donauinsel");
        break;
    }
    case 81269:
    {
        returnValue = F("Donaukai");
        break;
    }
    case 81270:
    {
        returnValue = F("Donaukiesweg");
        break;
    }
    case 81271:
    {
        returnValue = F("Donauknoten");
        break;
    }
    case 81272:
    {
        returnValue = F("Donaulandstr.");
        break;
    }
    case 81273:
    {
        returnValue = F("Donaulände");
        break;
    }
    case 81274:
    {
        returnValue = F("Donaumarkt");
        break;
    }
    case 81275:
    {
        returnValue = F("Donaumühle");
        break;
    }
    case 81276:
    {
        returnValue = F("Donaupark");
        break;
    }
    case 81277:
    {
        returnValue = F("Donauplatz");
        break;
    }
    case 81278:
    {
        returnValue = F("Donaupromenade");
        break;
    }
    case 81279:
    {
        returnValue = F("Donauradweg");
        break;
    }
    case 81280:
    {
        returnValue = F("Donaurieder Str.");
        break;
    }
    case 81281:
    {
        returnValue = F("Donauring");
        break;
    }
    case 81282:
    {
        returnValue = F("Donauschleife");
        break;
    }
    case 81283:
    {
        returnValue = F("Donauschwabenring");
        break;
    }
    case 81284:
    {
        returnValue = F("Donauschwabenstr.");
        break;
    }
    case 81285:
    {
        returnValue = F("Donauschwabenufer");
        break;
    }
    case 81286:
    {
        returnValue = F("Donauschwabenweg");
        break;
    }
    case 81287:
    {
        returnValue = F("Donaustaufer Str.");
        break;
    }
    case 81288:
    {
        returnValue = F("Donausteg");
        break;
    }
    case 81289:
    {
        returnValue = F("Donaustetter Str.");
        break;
    }
    case 81290:
    {
        returnValue = F("Donaustr.");
        break;
    }
    case 81291:
    {
        returnValue = F("Donautal");
        break;
    }
    case 81292:
    {
        returnValue = F("Donautalstr.");
        break;
    }
    case 81293:
    {
        returnValue = F("Donauufer");
        break;
    }
    case 81294:
    {
        returnValue = F("Donauufer Park Gansturm");
        break;
    }
    case 81295:
    {
        returnValue = F("Donauuferstr.");
        break;
    }
    case 81296:
    {
        returnValue = F("Donauweg");
        break;
    }
    case 81297:
    {
        returnValue = F("Donauwellen");
        break;
    }
    case 81298:
    {
        returnValue = F("Donauwetzdorf");
        break;
    }
    case 81299:
    {
        returnValue = F("Donauwiese Ulm");
        break;
    }
    case 81300:
    {
        returnValue = F("Donauwinkel");
        break;
    }
    case 81301:
    {
        returnValue = F("Donauwörther Str.");
        break;
    }
    case 81302:
    {
        returnValue = F("Donauwörther Weg");
        break;
    }
    case 81303:
    {
        returnValue = F("Donawitzstr.");
        break;
    }
    case 81304:
    {
        returnValue = F("Doncaster-Platz");
        break;
    }
    case 81305:
    {
        returnValue = F("Dondertstr.");
        break;
    }
    case 81306:
    {
        returnValue = F("Dondörflein");
        break;
    }
    case 81307:
    {
        returnValue = F("Donebacher Str.");
        break;
    }
    case 81308:
    {
        returnValue = F("Donellusstr.");
        break;
    }
    case 81309:
    {
        returnValue = F("Dongenstr.");
        break;
    }
    case 81310:
    {
        returnValue = F("Dongrathshof");
        break;
    }
    case 81311:
    {
        returnValue = F("Dongstr.");
        break;
    }
    case 81312:
    {
        returnValue = F("Donhausen");
        break;
    }
    case 81313:
    {
        returnValue = F("Donhauser Weg");
        break;
    }
    case 81314:
    {
        returnValue = F("Donislstr.");
        break;
    }
    case 81315:
    {
        returnValue = F("Donismühle");
        break;
    }
    case 81316:
    {
        returnValue = F("Donitzschkau");
        break;
    }
    case 81317:
    {
        returnValue = F("Doniweg");
        break;
    }
    case 81318:
    {
        returnValue = F("Donizettistr.");
        break;
    }
    case 81319:
    {
        returnValue = F("Donkelspfad");
        break;
    }
    case 81320:
    {
        returnValue = F("Donkelsvennweg");
        break;
    }
    case 81321:
    {
        returnValue = F("Donkensweg");
        break;
    }
    case 81322:
    {
        returnValue = F("Donker Str.");
        break;
    }
    case 81323:
    {
        returnValue = F("Donker Weg");
        break;
    }
    case 81324:
    {
        returnValue = F("Donkring");
        break;
    }
    case 81325:
    {
        returnValue = F("Donkwall");
        break;
    }
    case 81326:
    {
        returnValue = F("Donkweg");
        break;
    }
    case 81327:
    {
        returnValue = F("Donnbronner Str.");
        break;
    }
    case 81328:
    {
        returnValue = F("Donndorfer Str.");
        break;
    }
    case 81329:
    {
        returnValue = F("Donndorferin");
        break;
    }
    case 81330:
    {
        returnValue = F("Donndorfstr.");
        break;
    }
    case 81331:
    {
        returnValue = F("Donnelly Park");
        break;
    }
    case 81332:
    {
        returnValue = F("Donnenberger Str.");
        break;
    }
    case 81333:
    {
        returnValue = F("Donnenstr.");
        break;
    }
    case 81334:
    {
        returnValue = F("Donnerberg");
        break;
    }
    case 81335:
    {
        returnValue = F("Donnerbergstr.");
        break;
    }
    case 81336:
    {
        returnValue = F("Donnerbleek");
        break;
    }
    case 81337:
    {
        returnValue = F("Donnerblock");
        break;
    }
    case 81338:
    {
        returnValue = F("Donnerbrink");
        break;
    }
    case 81339:
    {
        returnValue = F("Donnerbrinksweg");
        break;
    }
    case 81340:
    {
        returnValue = F("Donnerbruchgasse");
        break;
    }
    case 81341:
    {
        returnValue = F("Donnerburg");
        break;
    }
    case 81342:
    {
        returnValue = F("Donnerburgbrücke");
        break;
    }
    case 81343:
    {
        returnValue = F("Donnerburgstr.");
        break;
    }
    case 81344:
    {
        returnValue = F("Donnerburgweg");
        break;
    }
    case 81345:
    {
        returnValue = F("Donneresch");
        break;
    }
    case 81346:
    {
        returnValue = F("Donnerfeld");
        break;
    }
    case 81347:
    {
        returnValue = F("Donnergarten");
        break;
    }
    case 81348:
    {
        returnValue = F("Donnerhorst");
        break;
    }
    case 81349:
    {
        returnValue = F("Donnerhorster Weg");
        break;
    }
    case 81350:
    {
        returnValue = F("Donnerie");
        break;
    }
    case 81351:
    {
        returnValue = F("Donnerkaul");
        break;
    }
    case 81352:
    {
        returnValue = F("Donnermoor");
        break;
    }
    case 81353:
    {
        returnValue = F("Donnerpark");
        break;
    }
    case 81354:
    {
        returnValue = F("Donnersberg Str.");
        break;
    }
    case 81355:
    {
        returnValue = F("Donnersbergblick");
        break;
    }
    case 81356:
    {
        returnValue = F("Donnersberger Str.");
        break;
    }
    case 81357:
    {
        returnValue = F("Donnersberger Weg");
        break;
    }
    case 81358:
    {
        returnValue = F("Donnersbergerstr.");
        break;
    }
    case 81359:
    {
        returnValue = F("Donnersbergring");
        break;
    }
    case 81360:
    {
        returnValue = F("Donnersbergstege");
        break;
    }
    case 81361:
    {
        returnValue = F("Donnersbergstr.");
        break;
    }
    case 81362:
    {
        returnValue = F("Donnersbergweg");
        break;
    }
    case 81363:
    {
        returnValue = F("Donnerscheidstr.");
        break;
    }
    case 81364:
    {
        returnValue = F("Donnerscher Weg");
        break;
    }
    case 81365:
    {
        returnValue = F("Donnerschweer Str.");
        break;
    }
    case 81366:
    {
        returnValue = F("Donnersgasse");
        break;
    }
    case 81367:
    {
        returnValue = F("Donnershag");
        break;
    }
    case 81368:
    {
        returnValue = F("Donnersreuth");
        break;
    }
    case 81369:
    {
        returnValue = F("Donnersreuther Weg");
        break;
    }
    case 81370:
    {
        returnValue = F("Donnerstedter Dorfstr.");
        break;
    }
    case 81371:
    {
        returnValue = F("Donnerstedter Weg");
        break;
    }
    case 81372:
    {
        returnValue = F("Donnersteige");
        break;
    }
    case 81373:
    {
        returnValue = F("Donnerstein");
        break;
    }
    case 81374:
    {
        returnValue = F("Donnerstr.");
        break;
    }
    case 81375:
    {
        returnValue = F("Donnersweg");
        break;
    }
    case 81376:
    {
        returnValue = F("Donnerwenge");
        break;
    }
    case 81377:
    {
        returnValue = F("Donnsbergstr.");
        break;
    }
    case 81378:
    {
        returnValue = F("Donnstetter Str.");
        break;
    }
    case 81379:
    {
        returnValue = F("Donnstetter Weg");
        break;
    }
    case 81380:
    {
        returnValue = F("Donntalstr.");
        break;
    }
    case 81381:
    {
        returnValue = F("Donoer Str.");
        break;
    }
    case 81382:
    {
        returnValue = F("Dononstr.");
        break;
    }
    case 81383:
    {
        returnValue = F("Donopberg");
        break;
    }
    case 81384:
    {
        returnValue = F("Donoper Str.");
        break;
    }
    case 81385:
    {
        returnValue = F("Donoperteich");
        break;
    }
    case 81386:
    {
        returnValue = F("Donopskuppe");
        break;
    }
    case 81387:
    {
        returnValue = F("Donopstr.");
        break;
    }
    case 81388:
    {
        returnValue = F("Donopweg");
        break;
    }
    case 81389:
    {
        returnValue = F("Donrather Dreieck");
        break;
    }
    case 81390:
    {
        returnValue = F("Donrather Kreuzung");
        break;
    }
    case 81391:
    {
        returnValue = F("Donrather Str.");
        break;
    }
    case 81392:
    {
        returnValue = F("Donsbacher Str.");
        break;
    }
    case 81393:
    {
        returnValue = F("Donsbacher Weg");
        break;
    }
    case 81394:
    {
        returnValue = F("Donselen");
        break;
    }
    case 81395:
    {
        returnValue = F("Donstorf");
        break;
    }
    case 81396:
    {
        returnValue = F("Donstr.");
        break;
    }
    case 81397:
    {
        returnValue = F("Dontental");
        break;
    }
    case 81398:
    {
        returnValue = F("Donzdorfer Str.");
        break;
    }
    case 81399:
    {
        returnValue = F("Donzdorfer Wegle");
        break;
    }
    case 81400:
    {
        returnValue = F("Donzenbachstr.");
        break;
    }
    case 81401:
    {
        returnValue = F("Donzliger Ort");
        break;
    }
    case 81402:
    {
        returnValue = F("Doode Hörn");
        break;
    }
    case 81403:
    {
        returnValue = F("Doodentwiete");
        break;
    }
    case 81404:
    {
        returnValue = F("Doodshörner Weg");
        break;
    }
    case 81405:
    {
        returnValue = F("Doomerstr.");
        break;
    }
    case 81406:
    {
        returnValue = F("Door");
        break;
    }
    case 81407:
    {
        returnValue = F("Doormorgen");
        break;
    }
    case 81408:
    {
        returnValue = F("Doorner Str.");
        break;
    }
    case 81409:
    {
        returnValue = F("Doornickweg");
        break;
    }
    case 81410:
    {
        returnValue = F("Doornkaatlohne");
        break;
    }
    case 81411:
    {
        returnValue = F("Doornkaatsweg");
        break;
    }
    case 81412:
    {
        returnValue = F("Doornkaatweg");
        break;
    }
    case 81413:
    {
        returnValue = F("Doornkamp");
        break;
    }
    case 81414:
    {
        returnValue = F("Doornte");
        break;
    }
    case 81415:
    {
        returnValue = F("Doornteweg");
        break;
    }
    case 81416:
    {
        returnValue = F("Doosendiek");
        break;
    }
    case 81417:
    {
        returnValue = F("Dooser Berg");
        break;
    }
    case 81418:
    {
        returnValue = F("Dooser Str.");
        break;
    }
    case 81419:
    {
        returnValue = F("Doosthof");
        break;
    }
    case 81420:
    {
        returnValue = F("Dopbusch");
        break;
    }
    case 81421:
    {
        returnValue = F("Dopheide");
        break;
    }
    case 81422:
    {
        returnValue = F("Dopheidestr.");
        break;
    }
    case 81423:
    {
        returnValue = F("Dopkotten");
        break;
    }
    case 81424:
    {
        returnValue = F("Dopmeyerstr.");
        break;
    }
    case 81425:
    {
        returnValue = F("Doppel E");
        break;
    }
    case 81426:
    {
        returnValue = F("Doppelbrücke");
        break;
    }
    case 81427:
    {
        returnValue = F("Doppeldolenweg");
        break;
    }
    case 81428:
    {
        returnValue = F("Doppeleiche");
        break;
    }
    case 81429:
    {
        returnValue = F("Doppeleichweg");
        break;
    }
    case 81430:
    {
        returnValue = F("Doppelfeldstr.");
        break;
    }
    case 81431:
    {
        returnValue = F("Doppelgasse");
        break;
    }
    case 81432:
    {
        returnValue = F("Doppelkanalweg");
        break;
    }
    case 81433:
    {
        returnValue = F("Doppelkorn-Allee");
        break;
    }
    case 81434:
    {
        returnValue = F("Doppelmayrstr.");
        break;
    }
    case 81435:
    {
        returnValue = F("Doppelmühle");
        break;
    }
    case 81436:
    {
        returnValue = F("Doppelreihe");
        break;
    }
    case 81437:
    {
        returnValue = F("Doppelringel");
        break;
    }
    case 81438:
    {
        returnValue = F("Doppeltes Ringel");
        break;
    }
    case 81439:
    {
        returnValue = F("Doppelweg");
        break;
    }
    case 81440:
    {
        returnValue = F("Doppelwehr");
        break;
    }
    case 81441:
    {
        returnValue = F("Doppesstr.");
        break;
    }
    case 81442:
    {
        returnValue = F("Doppheide");
        break;
    }
    case 81443:
    {
        returnValue = F("Dopplerstr.");
        break;
    }
    case 81444:
    {
        returnValue = F("Dopplerweg");
        break;
    }
    case 81445:
    {
        returnValue = F("Dopprück");
        break;
    }
    case 81446:
    {
        returnValue = F("Doppstr.");
        break;
    }
    case 81447:
    {
        returnValue = F("Dora Twiete");
        break;
    }
    case 81448:
    {
        returnValue = F("Dora-Dimel-Str.");
        break;
    }
    case 81449:
    {
        returnValue = F("Dora-Heigenmooser-Str.");
        break;
    }
    case 81450:
    {
        returnValue = F("Dora-Helene-Str.");
        break;
    }
    case 81451:
    {
        returnValue = F("Dora-Hinrichs-Weg");
        break;
    }
    case 81452:
    {
        returnValue = F("Dora-Hitz-Str.");
        break;
    }
    case 81453:
    {
        returnValue = F("Dora-Koch-Stetter-Weg");
        break;
    }
    case 81454:
    {
        returnValue = F("Dora-Löwenstein-Ring");
        break;
    }
    case 81455:
    {
        returnValue = F("Dora-Maar-Str.");
        break;
    }
    case 81456:
    {
        returnValue = F("Dora-Müller-Str.");
        break;
    }
    case 81457:
    {
        returnValue = F("Dora-Scherf-Str.");
        break;
    }
    case 81458:
    {
        returnValue = F("Dora-Specht-Allee");
        break;
    }
    case 81459:
    {
        returnValue = F("Dora-Springhorn-Str.");
        break;
    }
    case 81460:
    {
        returnValue = F("Dora-Stock-Str.");
        break;
    }
    case 81461:
    {
        returnValue = F("Doradoweg");
        break;
    }
    case 81462:
    {
        returnValue = F("Doramaweg");
        break;
    }
    case 81463:
    {
        returnValue = F("Dorastr.");
        break;
    }
    case 81464:
    {
        returnValue = F("Dorath");
        break;
    }
    case 81465:
    {
        returnValue = F("Doraweg");
        break;
    }
    case 81466:
    {
        returnValue = F("Dorbach");
        break;
    }
    case 81467:
    {
        returnValue = F("Dorbachstr.");
        break;
    }
    case 81468:
    {
        returnValue = F("Dorbekskamp");
        break;
    }
    case 81469:
    {
        returnValue = F("Dorbenstr.");
        break;
    }
    case 81470:
    {
        returnValue = F("Dorber Weg");
        break;
    }
    case 81471:
    {
        returnValue = F("Dorbichtweg");
        break;
    }
    case 81472:
    {
        returnValue = F("Dorbröker");
        break;
    }
    case 81473:
    {
        returnValue = F("Dorchentöbeleweg");
        break;
    }
    case 81474:
    {
        returnValue = F("Dorchesterstr.");
        break;
    }
    case 81475:
    {
        returnValue = F("Dorchheimer Str.");
        break;
    }
    case 81476:
    {
        returnValue = F("Dorddelweg");
        break;
    }
    case 81477:
    {
        returnValue = F("Dordrechtring");
        break;
    }
    case 81478:
    {
        returnValue = F("Dorenbeckweg");
        break;
    }
    case 81479:
    {
        returnValue = F("Dorenborg");
        break;
    }
    case 81480:
    {
        returnValue = F("Dorenbrook");
        break;
    }
    case 81481:
    {
        returnValue = F("Dorenburgstr.");
        break;
    }
    case 81482:
    {
        returnValue = F("Dorenbusch");
        break;
    }
    case 81483:
    {
        returnValue = F("Dorenkamp");
        break;
    }
    case 81484:
    {
        returnValue = F("Dorenkampstr.");
        break;
    }
    case 81485:
    {
        returnValue = F("Dorenwaid");
        break;
    }
    case 81486:
    {
        returnValue = F("Dorenweg");
        break;
    }
    case 81487:
    {
        returnValue = F("Dorenwinkel");
        break;
    }
    case 81488:
    {
        returnValue = F("Dorerhof");
        break;
    }
    case 81489:
    {
        returnValue = F("Dores-Albrecht-Str.");
        break;
    }
    case 81490:
    {
        returnValue = F("Dorette-von-Stern-Str.");
        break;
    }
    case 81491:
    {
        returnValue = F("Dorettenhof");
        break;
    }
    case 81492:
    {
        returnValue = F("Dorf");
        break;
    }
    case 81493:
    {
        returnValue = F("Dorf Bansin");
        break;
    }
    case 81494:
    {
        returnValue = F("Dorf Ganzow");
        break;
    }
    case 81495:
    {
        returnValue = F("Dorf Ilster");
        break;
    }
    case 81496:
    {
        returnValue = F("Dorf Neukirchen");
        break;
    }
    case 81497:
    {
        returnValue = F("Dorf Park");
        break;
    }
    case 81498:
    {
        returnValue = F("Dorf Platz");
        break;
    }
    case 81499:
    {
        returnValue = F("Dorf Priggenhagen");
        break;
    }
    case 81500:
    {
        returnValue = F("Dorf Seebschütz");
        break;
    }
    case 81501:
    {
        returnValue = F("Dorf Seilitz");
        break;
    }
    case 81502:
    {
        returnValue = F("Dorf Triwalk");
        break;
    }
    case 81503:
    {
        returnValue = F("Dorf Zellhub");
        break;
    }
    case 81504:
    {
        returnValue = F("Dorf's Acker");
        break;
    }
    case 81505:
    {
        returnValue = F("Dorf-Dobelstr.");
        break;
    }
    case 81506:
    {
        returnValue = F("Dorf-Güller Str.");
        break;
    }
    case 81507:
    {
        returnValue = F("Dorf-Güller Weg");
        break;
    }
    case 81508:
    {
        returnValue = F("Dorf-Güller-Str.");
        break;
    }
    case 81509:
    {
        returnValue = F("Dorf-Hauptstr.");
        break;
    }
    case 81510:
    {
        returnValue = F("Dorf-Platz");
        break;
    }
    case 81511:
    {
        returnValue = F("Dorfacker");
        break;
    }
    case 81512:
    {
        returnValue = F("Dorfackerstr.");
        break;
    }
    case 81513:
    {
        returnValue = F("Dorfackerweg");
        break;
    }
    case 81514:
    {
        returnValue = F("Dorfallee");
        break;
    }
    case 81515:
    {
        returnValue = F("Dorfanger");
        break;
    }
    case 81516:
    {
        returnValue = F("Dorfanger Gressow");
        break;
    }
    case 81517:
    {
        returnValue = F("Dorfanger Oberdorla");
        break;
    }
    case 81518:
    {
        returnValue = F("Dorfangerweg");
        break;
    }
    case 81519:
    {
        returnValue = F("Dorfaue");
        break;
    }
    case 81520:
    {
        returnValue = F("Dorfaue Saalow");
        break;
    }
    case 81521:
    {
        returnValue = F("Dorfaue am See");
        break;
    }
    case 81522:
    {
        returnValue = F("Dorfbach");
        break;
    }
    case 81523:
    {
        returnValue = F("Dorfbacher Str.");
        break;
    }
    case 81524:
    {
        returnValue = F("Dorfbachgasse");
        break;
    }
    case 81525:
    {
        returnValue = F("Dorfbachgrund");
        break;
    }
    case 81526:
    {
        returnValue = F("Dorfbachstr.");
        break;
    }
    case 81527:
    {
        returnValue = F("Dorfbachweg");
        break;
    }
    case 81528:
    {
        returnValue = F("Dorfbachweg Bockau");
        break;
    }
    case 81529:
    {
        returnValue = F("Dorfbachwiesenweg");
        break;
    }
    case 81530:
    {
        returnValue = F("Dorfbauernstr.");
        break;
    }
    case 81531:
    {
        returnValue = F("Dorfbauerschaft");
        break;
    }
    case 81532:
    {
        returnValue = F("Dorfbauerweg");
        break;
    }
    case 81533:
    {
        returnValue = F("Dorfberg");
        break;
    }
    case 81534:
    {
        returnValue = F("Dorfbergstr.");
        break;
    }
    case 81535:
    {
        returnValue = F("Dorfblick");
        break;
    }
    case 81536:
    {
        returnValue = F("Dorfblickstr.");
        break;
    }
    case 81537:
    {
        returnValue = F("Dorfborngasse");
        break;
    }
    case 81538:
    {
        returnValue = F("Dorfbornstr.");
        break;
    }
    case 81539:
    {
        returnValue = F("Dorfbrede");
        break;
    }
    case 81540:
    {
        returnValue = F("Dorfbreite");
        break;
    }
    case 81541:
    {
        returnValue = F("Dorfbreiten");
        break;
    }
    case 81542:
    {
        returnValue = F("Dorfbroicher Str.");
        break;
    }
    case 81543:
    {
        returnValue = F("Dorfbruch");
        break;
    }
    case 81544:
    {
        returnValue = F("Dorfbrunnen");
        break;
    }
    case 81545:
    {
        returnValue = F("Dorfbrunnenstr.");
        break;
    }
    case 81546:
    {
        returnValue = F("Dorfbrunnenweg");
        break;
    }
    case 81547:
    {
        returnValue = F("Dorfbrücke");
        break;
    }
    case 81548:
    {
        returnValue = F("Dorfbündt");
        break;
    }
    case 81549:
    {
        returnValue = F("Dorfchaussee");
        break;
    }
    case 81550:
    {
        returnValue = F("Dorfchemnitzer Str.");
        break;
    }
    case 81551:
    {
        returnValue = F("Dorfchemnitzer Weg");
        break;
    }
    case 81552:
    {
        returnValue = F("Dorfeck");
        break;
    }
    case 81553:
    {
        returnValue = F("Dorfelder Str.");
        break;
    }
    case 81554:
    {
        returnValue = F("Dorfelder Weg");
        break;
    }
    case 81555:
    {
        returnValue = F("Dorfener Str.");
        break;
    }
    case 81556:
    {
        returnValue = F("Dorfener Weg");
        break;
    }
    case 81557:
    {
        returnValue = F("Dorfenstr.");
        break;
    }
    case 81558:
    {
        returnValue = F("Dorfenweg");
        break;
    }
    case 81559:
    {
        returnValue = F("Dorfer Feld");
        break;
    }
    case 81560:
    {
        returnValue = F("Dorfer Feldweg");
        break;
    }
    case 81561:
    {
        returnValue = F("Dorfer Str.");
        break;
    }
    case 81562:
    {
        returnValue = F("Dorfer Weg");
        break;
    }
    case 81563:
    {
        returnValue = F("Dorferbahn");
        break;
    }
    case 81564:
    {
        returnValue = F("Dorfermühlenweg");
        break;
    }
    case 81565:
    {
        returnValue = F("Dorfesch");
        break;
    }
    case 81566:
    {
        returnValue = F("Dorfesweg");
        break;
    }
    case 81567:
    {
        returnValue = F("Dorffeld");
        break;
    }
    case 81568:
    {
        returnValue = F("Dorffelder Str.");
        break;
    }
    case 81569:
    {
        returnValue = F("Dorffeldstr.");
        break;
    }
    case 81570:
    {
        returnValue = F("Dorffeldsweg");
        break;
    }
    case 81571:
    {
        returnValue = F("Dorffeldweg");
        break;
    }
    case 81572:
    {
        returnValue = F("Dorffleck");
        break;
    }
    case 81573:
    {
        returnValue = F("Dorffriedhofsweg");
        break;
    }
    case 81574:
    {
        returnValue = F("Dorfgarten");
        break;
    }
    case 81575:
    {
        returnValue = F("Dorfgartenweg");
        break;
    }
    case 81576:
    {
        returnValue = F("Dorfgasse");
        break;
    }
    case 81577:
    {
        returnValue = F("Dorfgemeinschaftshaus Ulfa");
        break;
    }
    case 81578:
    {
        returnValue = F("Dorfgemeinschaftspark");
        break;
    }
    case 81579:
    {
        returnValue = F("Dorfgraben");
        break;
    }
    case 81580:
    {
        returnValue = F("Dorfgrabenstr.");
        break;
    }
    case 81581:
    {
        returnValue = F("Dorfgrabenweg");
        break;
    }
    case 81582:
    {
        returnValue = F("Dorfgrenze");
        break;
    }
    case 81583:
    {
        returnValue = F("Dorfgrund");
        break;
    }
    case 81584:
    {
        returnValue = F("Dorfgärten");
        break;
    }
    case 81585:
    {
        returnValue = F("Dorfgärtenstr.");
        break;
    }
    case 81586:
    {
        returnValue = F("Dorfgärtle");
        break;
    }
    case 81587:
    {
        returnValue = F("Dorfhagen");
        break;
    }
    case 81588:
    {
        returnValue = F("Dorfhagener Weg");
        break;
    }
    case 81589:
    {
        returnValue = F("Dorfhainer Str.");
        break;
    }
    case 81590:
    {
        returnValue = F("Dorfhainer Weg");
        break;
    }
    case 81591:
    {
        returnValue = F("Dorfhalde");
        break;
    }
    case 81592:
    {
        returnValue = F("Dorfhaldeweg");
        break;
    }
    case 81593:
    {
        returnValue = F("Dorfhammerles");
        break;
    }
    case 81594:
    {
        returnValue = F("Dorfhauser Str.");
        break;
    }
    case 81595:
    {
        returnValue = F("Dorfheide");
        break;
    }
    case 81596:
    {
        returnValue = F("Dorfheimstr.");
        break;
    }
    case 81597:
    {
        returnValue = F("Dorfhölzleweg");
        break;
    }
    case 81598:
    {
        returnValue = F("Dorfhüttenplatz");
        break;
    }
    case 81599:
    {
        returnValue = F("Dorfilm");
        break;
    }
    case 81600:
    {
        returnValue = F("Dorfinsel");
        break;
    }
    case 81601:
    {
        returnValue = F("Dorfkamp");
        break;
    }
    case 81602:
    {
        returnValue = F("Dorfkern");
        break;
    }
    case 81603:
    {
        returnValue = F("Dorfkessel");
        break;
    }
    case 81604:
    {
        returnValue = F("Dorfkirche");
        break;
    }
    case 81605:
    {
        returnValue = F("Dorfkoppel");
        break;
    }
    case 81606:
    {
        returnValue = F("Dorfkoppeln");
        break;
    }
    case 81607:
    {
        returnValue = F("Dorfkrug");
        break;
    }
    case 81608:
    {
        returnValue = F("Dorfkrugstr.");
        break;
    }
    case 81609:
    {
        returnValue = F("Dorfkulmer Weg");
        break;
    }
    case 81610:
    {
        returnValue = F("Dorflache");
        break;
    }
    case 81611:
    {
        returnValue = F("Dorflage");
        break;
    }
    case 81612:
    {
        returnValue = F("Dorfland");
        break;
    }
    case 81613:
    {
        returnValue = F("Dorflandstr.");
        break;
    }
    case 81614:
    {
        returnValue = F("Dorfleite");
        break;
    }
    case 81615:
    {
        returnValue = F("Dorfleitenweg");
        break;
    }
    case 81616:
    {
        returnValue = F("Dorflinde");
        break;
    }
    case 81617:
    {
        returnValue = F("Dorflinde Neuenstein-Mühlbach");
        break;
    }
    case 81618:
    {
        returnValue = F("Dorflindenstr.");
        break;
    }
    case 81619:
    {
        returnValue = F("Dorflohne");
        break;
    }
    case 81620:
    {
        returnValue = F("Dorfländerweg");
        break;
    }
    case 81621:
    {
        returnValue = F("Dorflücke");
        break;
    }
    case 81622:
    {
        returnValue = F("Dorflücken");
        break;
    }
    case 81623:
    {
        returnValue = F("Dorfmark");
        break;
    }
    case 81624:
    {
        returnValue = F("Dorfmarker Weg");
        break;
    }
    case 81625:
    {
        returnValue = F("Dorfmarkstr.");
        break;
    }
    case 81626:
    {
        returnValue = F("Dorfmathen");
        break;
    }
    case 81627:
    {
        returnValue = F("Dorfmatt");
        break;
    }
    case 81628:
    {
        returnValue = F("Dorfmatten");
        break;
    }
    case 81629:
    {
        returnValue = F("Dorfmattenstr.");
        break;
    }
    case 81630:
    {
        returnValue = F("Dorfmattenweg");
        break;
    }
    case 81631:
    {
        returnValue = F("Dorfmattweg");
        break;
    }
    case 81632:
    {
        returnValue = F("Dorfmauerweg");
        break;
    }
    case 81633:
    {
        returnValue = F("Dorfmeisterweg");
        break;
    }
    case 81634:
    {
        returnValue = F("Dorfmerkinger Str.");
        break;
    }
    case 81635:
    {
        returnValue = F("Dorfmitte");
        break;
    }
    case 81636:
    {
        returnValue = F("Dorfmitte Langenneufnach");
        break;
    }
    case 81637:
    {
        returnValue = F("Dorfmitte Lützow");
        break;
    }
    case 81638:
    {
        returnValue = F("Dorfmitte Rosenow");
        break;
    }
    case 81639:
    {
        returnValue = F("Dorfmolke");
        break;
    }
    case 81640:
    {
        returnValue = F("Dorfmoos");
        break;
    }
    case 81641:
    {
        returnValue = F("Dorfmühle");
        break;
    }
    case 81642:
    {
        returnValue = F("Dorfmühlenstr.");
        break;
    }
    case 81643:
    {
        returnValue = F("Dorfmühler Str.");
        break;
    }
    case 81644:
    {
        returnValue = F("Dorfmühlstr.");
        break;
    }
    case 81645:
    {
        returnValue = F("Dorfmühlweg");
        break;
    }
    case 81646:
    {
        returnValue = F("Dorfmüllershammer");
        break;
    }
    case 81647:
    {
        returnValue = F("Dorfmüllerstr.");
        break;
    }
    case 81648:
    {
        returnValue = F("Dorfner Str.");
        break;
    }
    case 81649:
    {
        returnValue = F("Dorfner Weg");
        break;
    }
    case 81650:
    {
        returnValue = F("Dorfnerweg");
        break;
    }
    case 81651:
    {
        returnValue = F("Dorfpark");
        break;
    }
    case 81652:
    {
        returnValue = F("Dorfpark Altenplos");
        break;
    }
    case 81653:
    {
        returnValue = F("Dorfpark Behringen");
        break;
    }
    case 81654:
    {
        returnValue = F("Dorfpark Bentorf");
        break;
    }
    case 81655:
    {
        returnValue = F("Dorfpark Bösel");
        break;
    }
    case 81656:
    {
        returnValue = F("Dorfpark Capelle");
        break;
    }
    case 81657:
    {
        returnValue = F("Dorfpark Garrel");
        break;
    }
    case 81658:
    {
        returnValue = F("Dorfpark Hohenbrünzow");
        break;
    }
    case 81659:
    {
        returnValue = F("Dorfpark Horstmar-Leer");
        break;
    }
    case 81660:
    {
        returnValue = F("Dorfpark Lastrup");
        break;
    }
    case 81661:
    {
        returnValue = F("Dorfpark Mackenrode");
        break;
    }
    case 81662:
    {
        returnValue = F("Dorfpark Waldorf");
        break;
    }
    case 81663:
    {
        returnValue = F("Dorfpark am Denkmal");
        break;
    }
    case 81664:
    {
        returnValue = F("Dorfpatt");
        break;
    }
    case 81665:
    {
        returnValue = F("Dorfpfad");
        break;
    }
    case 81666:
    {
        returnValue = F("Dorfplan");
        break;
    }
    case 81667:
    {
        returnValue = F("Dorfplatz");
        break;
    }
    case 81668:
    {
        returnValue = F("Dorfplatz Adelshofen");
        break;
    }
    case 81669:
    {
        returnValue = F("Dorfplatz Allenfeld");
        break;
    }
    case 81670:
    {
        returnValue = F("Dorfplatz Altenkleusheim");
        break;
    }
    case 81671:
    {
        returnValue = F("Dorfplatz Altenmittlau");
        break;
    }
    case 81672:
    {
        returnValue = F("Dorfplatz Altenschwand");
        break;
    }
    case 81673:
    {
        returnValue = F("Dorfplatz Alter Schulhof");
        break;
    }
    case 81674:
    {
        returnValue = F("Dorfplatz Altmannshofen");
        break;
    }
    case 81675:
    {
        returnValue = F("Dorfplatz Auf dem Steinchen");
        break;
    }
    case 81676:
    {
        returnValue = F("Dorfplatz Blankenbach");
        break;
    }
    case 81677:
    {
        returnValue = F("Dorfplatz Bönninghardt");
        break;
    }
    case 81678:
    {
        returnValue = F("Dorfplatz Colnrade");
        break;
    }
    case 81679:
    {
        returnValue = F("Dorfplatz Diebzig");
        break;
    }
    case 81680:
    {
        returnValue = F("Dorfplatz Dorfitter");
        break;
    }
    case 81681:
    {
        returnValue = F("Dorfplatz Drope");
        break;
    }
    case 81682:
    {
        returnValue = F("Dorfplatz Ehingen");
        break;
    }
    case 81683:
    {
        returnValue = F("Dorfplatz Eiderstede");
        break;
    }
    case 81684:
    {
        returnValue = F("Dorfplatz Elte");
        break;
    }
    case 81685:
    {
        returnValue = F("Dorfplatz Eurasburg");
        break;
    }
    case 81686:
    {
        returnValue = F("Dorfplatz Fladersbach");
        break;
    }
    case 81687:
    {
        returnValue = F("Dorfplatz Gristede");
        break;
    }
    case 81688:
    {
        returnValue = F("Dorfplatz Harperscheid");
        break;
    }
    case 81689:
    {
        returnValue = F("Dorfplatz Herchenbach");
        break;
    }
    case 81690:
    {
        returnValue = F("Dorfplatz Hochstr.");
        break;
    }
    case 81691:
    {
        returnValue = F("Dorfplatz Holzheim");
        break;
    }
    case 81692:
    {
        returnValue = F("Dorfplatz Hussenhofen");
        break;
    }
    case 81693:
    {
        returnValue = F("Dorfplatz Josbach");
        break;
    }
    case 81694:
    {
        returnValue = F("Dorfplatz Langenreichen");
        break;
    }
    case 81695:
    {
        returnValue = F("Dorfplatz Lisdorf");
        break;
    }
    case 81696:
    {
        returnValue = F("Dorfplatz Lobscheid");
        break;
    }
    case 81697:
    {
        returnValue = F("Dorfplatz Marklkofen");
        break;
    }
    case 81698:
    {
        returnValue = F("Dorfplatz Miesau");
        break;
    }
    case 81699:
    {
        returnValue = F("Dorfplatz Niedermennig");
        break;
    }
    case 81700:
    {
        returnValue = F("Dorfplatz Nievenheim");
        break;
    }
    case 81701:
    {
        returnValue = F("Dorfplatz Paetrow");
        break;
    }
    case 81702:
    {
        returnValue = F("Dorfplatz Reith");
        break;
    }
    case 81703:
    {
        returnValue = F("Dorfplatz Rinkerode");
        break;
    }
    case 81704:
    {
        returnValue = F("Dorfplatz Schwedelbach");
        break;
    }
    case 81705:
    {
        returnValue = F("Dorfplatz St.Sebastian");
        break;
    }
    case 81706:
    {
        returnValue = F("Dorfplatz Sulzbach");
        break;
    }
    case 81707:
    {
        returnValue = F("Dorfplatz Sundern");
        break;
    }
    case 81708:
    {
        returnValue = F("Dorfplatz Teichnitz");
        break;
    }
    case 81709:
    {
        returnValue = F("Dorfplatz Urexweiler");
        break;
    }
    case 81710:
    {
        returnValue = F("Dorfplatz Vettelschoß");
        break;
    }
    case 81711:
    {
        returnValue = F("Dorfplatz Wessum");
        break;
    }
    case 81712:
    {
        returnValue = F("Dorfplatz Wichte");
        break;
    }
    case 81713:
    {
        returnValue = F("Dorfplatz Wittershausen");
        break;
    }
    case 81714:
    {
        returnValue = F("Dorfplatz Zwischenbergen");
        break;
    }
    case 81715:
    {
        returnValue = F("Dorfplatz am Glockenturm");
        break;
    }
    case 81716:
    {
        returnValue = F("Dorfplatz der Generationen");
        break;
    }
    case 81717:
    {
        returnValue = F("Dorfplatz mit Linde");
        break;
    }
    case 81718:
    {
        returnValue = F("Dorfplatz/Festplatz");
        break;
    }
    case 81719:
    {
        returnValue = F("Dorfplatzstr.");
        break;
    }
    case 81720:
    {
        returnValue = F("Dorfplatzweg");
        break;
    }
    case 81721:
    {
        returnValue = F("Dorfplatzwiese mit Kastanienbäume, Brunnen mit Wappen von Oberrieden und ein Pavillon");
        break;
    }
    case 81722:
    {
        returnValue = F("Dorfrain");
        break;
    }
    case 81723:
    {
        returnValue = F("Dorfrand");
        break;
    }
    case 81724:
    {
        returnValue = F("Dorfrandweg");
        break;
    }
    case 81725:
    {
        returnValue = F("Dorfrasen");
        break;
    }
    case 81726:
    {
        returnValue = F("Dorfreihe");
        break;
    }
    case 81727:
    {
        returnValue = F("Dorfring");
        break;
    }
    case 81728:
    {
        returnValue = F("Dorfringstr.");
        break;
    }
    case 81729:
    {
        returnValue = F("Dorfrstr.");
        break;
    }
    case 81730:
    {
        returnValue = F("Dorfrunde");
        break;
    }
    case 81731:
    {
        returnValue = F("Dorfröthen");
        break;
    }
    case 81732:
    {
        returnValue = F("Dorfschmiedweg");
        break;
    }
    case 81733:
    {
        returnValue = F("Dorfschulweg");
        break;
    }
    case 81734:
    {
        returnValue = F("Dorfschulzenweg");
        break;
    }
    case 81735:
    {
        returnValue = F("Dorfschwalbenweg");
        break;
    }
    case 81736:
    {
        returnValue = F("Dorfseestr.");
        break;
    }
    case 81737:
    {
        returnValue = F("Dorfsfeld");
        break;
    }
    case 81738:
    {
        returnValue = F("Dorfsheeg");
        break;
    }
    case 81739:
    {
        returnValue = F("Dorfskamp");
        break;
    }
    case 81740:
    {
        returnValue = F("Dorfskoppel");
        break;
    }
    case 81741:
    {
        returnValue = F("Dorfstaße");
        break;
    }
    case 81742:
    {
        returnValue = F("Dorfstede");
        break;
    }
    case 81743:
    {
        returnValue = F("Dorfsteg");
        break;
    }
    case 81744:
    {
        returnValue = F("Dorfstelle");
        break;
    }
    case 81745:
    {
        returnValue = F("Dorfstellenstr.");
        break;
    }
    case 81746:
    {
        returnValue = F("Dorfstieg");
        break;
    }
    case 81747:
    {
        returnValue = F("Dorfstr.");
        break;
    }
    case 81748:
    {
        returnValue = F("Dorfstr. ");
        break;
    }
    case 81749:
    {
        returnValue = F("Dorfstr. 'Siegenthal'");
        break;
    }
    case 81750:
    {
        returnValue = F("Dorfstr. (OT Stöffin)");
        break;
    }
    case 81751:
    {
        returnValue = F("Dorfstr. (OT Wuthenow)");
        break;
    }
    case 81752:
    {
        returnValue = F("Dorfstr. (OTTarmow)");
        break;
    }
    case 81753:
    {
        returnValue = F("Dorfstr. 2-10");
        break;
    }
    case 81754:
    {
        returnValue = F("Dorfstr. Alt Krüssow");
        break;
    }
    case 81755:
    {
        returnValue = F("Dorfstr. Babst");
        break;
    }
    case 81756:
    {
        returnValue = F("Dorfstr. Benz");
        break;
    }
    case 81757:
    {
        returnValue = F("Dorfstr. Beveringen");
        break;
    }
    case 81758:
    {
        returnValue = F("Dorfstr. Biesenrode");
        break;
    }
    case 81759:
    {
        returnValue = F("Dorfstr. Braunschwende");
        break;
    }
    case 81760:
    {
        returnValue = F("Dorfstr. Breesen");
        break;
    }
    case 81761:
    {
        returnValue = F("Dorfstr. Bäbelin");
        break;
    }
    case 81762:
    {
        returnValue = F("Dorfstr. Böken");
        break;
    }
    case 81763:
    {
        returnValue = F("Dorfstr. Bössow");
        break;
    }
    case 81764:
    {
        returnValue = F("Dorfstr. Büschow");
        break;
    }
    case 81765:
    {
        returnValue = F("Dorfstr. Cordshagen");
        break;
    }
    case 81766:
    {
        returnValue = F("Dorfstr. Dechow");
        break;
    }
    case 81767:
    {
        returnValue = F("Dorfstr. Diedrichshagen");
        break;
    }
    case 81768:
    {
        returnValue = F("Dorfstr. Fahren");
        break;
    }
    case 81769:
    {
        returnValue = F("Dorfstr. Gagzow");
        break;
    }
    case 81770:
    {
        returnValue = F("Dorfstr. Giesensdorf");
        break;
    }
    case 81771:
    {
        returnValue = F("Dorfstr. Glasin");
        break;
    }
    case 81772:
    {
        returnValue = F("Dorfstr. Goddin");
        break;
    }
    case 81773:
    {
        returnValue = F("Dorfstr. Godendorf");
        break;
    }
    case 81774:
    {
        returnValue = F("Dorfstr. Gorschendorf");
        break;
    }
    case 81775:
    {
        returnValue = F("Dorfstr. Gramkow");
        break;
    }
    case 81776:
    {
        returnValue = F("Dorfstr. Greifenhagen");
        break;
    }
    case 81777:
    {
        returnValue = F("Dorfstr. Groß Hundorf");
        break;
    }
    case 81778:
    {
        returnValue = F("Dorfstr. Groß Labenz");
        break;
    }
    case 81779:
    {
        returnValue = F("Dorfstr. Groß Neuleben");
        break;
    }
    case 81780:
    {
        returnValue = F("Dorfstr. Groß Salitz");
        break;
    }
    case 81781:
    {
        returnValue = F("Dorfstr. Groß Tessin");
        break;
    }
    case 81782:
    {
        returnValue = F("Dorfstr. Großpillingsdorf");
        break;
    }
    case 81783:
    {
        returnValue = F("Dorfstr. Grundshagen");
        break;
    }
    case 81784:
    {
        returnValue = F("Dorfstr. Gräfenstuhl");
        break;
    }
    case 81785:
    {
        returnValue = F("Dorfstr. Hagebök");
        break;
    }
    case 81786:
    {
        returnValue = F("Dorfstr. Hochreit");
        break;
    }
    case 81787:
    {
        returnValue = F("Dorfstr. Hof Selmsdorf");
        break;
    }
    case 81788:
    {
        returnValue = F("Dorfstr. Hofzumfelde");
        break;
    }
    case 81789:
    {
        returnValue = F("Dorfstr. Kaeselow");
        break;
    }
    case 81790:
    {
        returnValue = F("Dorfstr. Kahlenberg");
        break;
    }
    case 81791:
    {
        returnValue = F("Dorfstr. Kemnitz");
        break;
    }
    case 81792:
    {
        returnValue = F("Dorfstr. Klein Labenz");
        break;
    }
    case 81793:
    {
        returnValue = F("Dorfstr. Klein Molzahn");
        break;
    }
    case 81794:
    {
        returnValue = F("Dorfstr. Klein Neuleben");
        break;
    }
    case 81795:
    {
        returnValue = F("Dorfstr. Klein Salitz");
        break;
    }
    case 81796:
    {
        returnValue = F("Dorfstr. Klein Thurow");
        break;
    }
    case 81797:
    {
        returnValue = F("Dorfstr. Klein Warin");
        break;
    }
    case 81798:
    {
        returnValue = F("Dorfstr. Kneese");
        break;
    }
    case 81799:
    {
        returnValue = F("Dorfstr. Krampfer");
        break;
    }
    case 81800:
    {
        returnValue = F("Dorfstr. Kratzeburg");
        break;
    }
    case 81801:
    {
        returnValue = F("Dorfstr. Kritzow");
        break;
    }
    case 81802:
    {
        returnValue = F("Dorfstr. Köchelstorf");
        break;
    }
    case 81803:
    {
        returnValue = F("Dorfstr. Lüdersdorf");
        break;
    }
    case 81804:
    {
        returnValue = F("Dorfstr. Marienthal");
        break;
    }
    case 81805:
    {
        returnValue = F("Dorfstr. Meetzen");
        break;
    }
    case 81806:
    {
        returnValue = F("Dorfstr. Moltow");
        break;
    }
    case 81807:
    {
        returnValue = F("Dorfstr. Moor");
        break;
    }
    case 81808:
    {
        returnValue = F("Dorfstr. Munkwolstrup");
        break;
    }
    case 81809:
    {
        returnValue = F("Dorfstr. Mühlen Eichsen");
        break;
    }
    case 81810:
    {
        returnValue = F("Dorfstr. Neu Steinbeck");
        break;
    }
    case 81811:
    {
        returnValue = F("Dorfstr. Niendorf");
        break;
    }
    case 81812:
    {
        returnValue = F("Dorfstr. Ost");
        break;
    }
    case 81813:
    {
        returnValue = F("Dorfstr. Passee");
        break;
    }
    case 81814:
    {
        returnValue = F("Dorfstr. Passow");
        break;
    }
    case 81815:
    {
        returnValue = F("Dorfstr. Perniek");
        break;
    }
    case 81816:
    {
        returnValue = F("Dorfstr. Petersberg");
        break;
    }
    case 81817:
    {
        returnValue = F("Dorfstr. Pinnowhof");
        break;
    }
    case 81818:
    {
        returnValue = F("Dorfstr. Piskaborn");
        break;
    }
    case 81819:
    {
        returnValue = F("Dorfstr. Plüschow");
        break;
    }
    case 81820:
    {
        returnValue = F("Dorfstr. Pogez");
        break;
    }
    case 81821:
    {
        returnValue = F("Dorfstr. Poischendorf");
        break;
    }
    case 81822:
    {
        returnValue = F("Dorfstr. Pokrent");
        break;
    }
    case 81823:
    {
        returnValue = F("Dorfstr. Rambeel");
        break;
    }
    case 81824:
    {
        returnValue = F("Dorfstr. Ramstedt");
        break;
    }
    case 81825:
    {
        returnValue = F("Dorfstr. Rüggow");
        break;
    }
    case 81826:
    {
        returnValue = F("Dorfstr. Saalow");
        break;
    }
    case 81827:
    {
        returnValue = F("Dorfstr. Sadenbeck");
        break;
    }
    case 81828:
    {
        returnValue = F("Dorfstr. Samkow");
        break;
    }
    case 81829:
    {
        returnValue = F("Dorfstr. Sarnow");
        break;
    }
    case 81830:
    {
        returnValue = F("Dorfstr. Scharpzow");
        break;
    }
    case 81831:
    {
        returnValue = F("Dorfstr. Schildberg");
        break;
    }
    case 81832:
    {
        returnValue = F("Dorfstr. Schmakentin");
        break;
    }
    case 81833:
    {
        returnValue = F("Dorfstr. Schönhagen");
        break;
    }
    case 81834:
    {
        returnValue = F("Dorfstr. Schönhausen");
        break;
    }
    case 81835:
    {
        returnValue = F("Dorfstr. Schönwolde");
        break;
    }
    case 81836:
    {
        returnValue = F("Dorfstr. Seefeld");
        break;
    }
    case 81837:
    {
        returnValue = F("Dorfstr. Steffenshagen");
        break;
    }
    case 81838:
    {
        returnValue = F("Dorfstr. Stofferstorf");
        break;
    }
    case 81839:
    {
        returnValue = F("Dorfstr. Strameuß");
        break;
    }
    case 81840:
    {
        returnValue = F("Dorfstr. Sülsdorf");
        break;
    }
    case 81841:
    {
        returnValue = F("Dorfstr. Teplitz");
        break;
    }
    case 81842:
    {
        returnValue = F("Dorfstr. Trams");
        break;
    }
    case 81843:
    {
        returnValue = F("Dorfstr. Trebnitz");
        break;
    }
    case 81844:
    {
        returnValue = F("Dorfstr. Udars");
        break;
    }
    case 81845:
    {
        returnValue = F("Dorfstr. Vatterode");
        break;
    }
    case 81846:
    {
        returnValue = F("Dorfstr. Veelböken");
        break;
    }
    case 81847:
    {
        returnValue = F("Dorfstr. Venz");
        break;
    }
    case 81848:
    {
        returnValue = F("Dorfstr. Wakendorf");
        break;
    }
    case 81849:
    {
        returnValue = F("Dorfstr. Warnkenhagen");
        break;
    }
    case 81850:
    {
        returnValue = F("Dorfstr. Warnow");
        break;
    }
    case 81851:
    {
        returnValue = F("Dorfstr. Weißenschirmbach");
        break;
    }
    case 81852:
    {
        returnValue = F("Dorfstr. Wendelstorf");
        break;
    }
    case 81853:
    {
        returnValue = F("Dorfstr. West");
        break;
    }
    case 81854:
    {
        returnValue = F("Dorfstr. Wilmersdorf");
        break;
    }
    case 81855:
    {
        returnValue = F("Dorfstr. Wustrow");
        break;
    }
    case 81856:
    {
        returnValue = F("Dorfstr. Wüsteneutzsch");
        break;
    }
    case 81857:
    {
        returnValue = F("Dorfstr. Zarnewenz");
        break;
    }
    case 81858:
    {
        returnValue = F("Dorfstr. Zurow");
        break;
    }
    case 81859:
    {
        returnValue = F("Dorfstr. nach Grub");
        break;
    }
    case 81860:
    {
        returnValue = F("Dorfstr. zum Feldstein");
        break;
    }
    case 81861:
    {
        returnValue = F("Dorfstr. zum Kalkofen");
        break;
    }
    case 81862:
    {
        returnValue = F("Dorfstr., Heidehügel");
        break;
    }
    case 81863:
    {
        returnValue = F("Dorfstr., Winkel");
        break;
    }
    case 81864:
    {
        returnValue = F("Dorfstr.,Hinterreihe");
        break;
    }
    case 81865:
    {
        returnValue = F("Dorfstr.-Böhmerwold");
        break;
    }
    case 81866:
    {
        returnValue = F("Dorfstr.-Grüssow");
        break;
    }
    case 81867:
    {
        returnValue = F("Dorfstr.-Jarplund");
        break;
    }
    case 81868:
    {
        returnValue = F("Dorfstr.-Krienke");
        break;
    }
    case 81869:
    {
        returnValue = F("Dorfstr.-Ost");
        break;
    }
    case 81870:
    {
        returnValue = F("Dorfstr.-Quilitz");
        break;
    }
    case 81871:
    {
        returnValue = F("Dorfstr.-Rankwitz");
        break;
    }
    case 81872:
    {
        returnValue = F("Dorfstr.-Reestow");
        break;
    }
    case 81873:
    {
        returnValue = F("Dorfstr.-Sonnenberg");
        break;
    }
    case 81874:
    {
        returnValue = F("Dorfstr.-Suckow");
        break;
    }
    case 81875:
    {
        returnValue = F("Dorfstr.-West");
        break;
    }
    case 81876:
    {
        returnValue = F("Dorfstr./K8");
        break;
    }
    case 81877:
    {
        returnValue = F("Dorfstr./Tangstedter Chaussee");
        break;
    }
    case 81878:
    {
        returnValue = F("Dorfstr.?");
        break;
    }
    case 81879:
    {
        returnValue = F("Dorfstrtaße");
        break;
    }
    case 81880:
    {
        returnValue = F("Dorfsträßle");
        break;
    }
    case 81881:
    {
        returnValue = F("Dorfstädter Str.");
        break;
    }
    case 81882:
    {
        returnValue = F("Dorfswiese");
        break;
    }
    case 81883:
    {
        returnValue = F("Dorftal");
        break;
    }
    case 81884:
    {
        returnValue = F("Dorfteich");
        break;
    }
    case 81885:
    {
        returnValue = F("Dorfteichsteg");
        break;
    }
    case 81886:
    {
        returnValue = F("Dorfteichstr.");
        break;
    }
    case 81887:
    {
        returnValue = F("Dorfteichweg");
        break;
    }
    case 81888:
    {
        returnValue = F("Dorftrift");
        break;
    }
    case 81889:
    {
        returnValue = F("Dorftwiete");
        break;
    }
    case 81890:
    {
        returnValue = F("Dorfweg");
        break;
    }
    case 81891:
    {
        returnValue = F("Dorfwegli");
        break;
    }
    case 81892:
    {
        returnValue = F("Dorfweiher");
        break;
    }
    case 81893:
    {
        returnValue = F("Dorfweiherweg");
        break;
    }
    case 81894:
    {
        returnValue = F("Dorfweiler Str.");
        break;
    }
    case 81895:
    {
        returnValue = F("Dorfweinberg");
        break;
    }
    case 81896:
    {
        returnValue = F("Dorfwies");
        break;
    }
    case 81897:
    {
        returnValue = F("Dorfwiese");
        break;
    }
    case 81898:
    {
        returnValue = F("Dorfwiesen");
        break;
    }
    case 81899:
    {
        returnValue = F("Dorfwiesenblick");
        break;
    }
    case 81900:
    {
        returnValue = F("Dorfwiesengasse");
        break;
    }
    case 81901:
    {
        returnValue = F("Dorfwiesenstr.");
        break;
    }
    case 81902:
    {
        returnValue = F("Dorfwiesenweg");
        break;
    }
    case 81903:
    {
        returnValue = F("Dorfwinkel");
        break;
    }
    case 81904:
    {
        returnValue = F("Dorfwäldchen");
        break;
    }
    case 81905:
    {
        returnValue = F("Dorfzelgstr.");
        break;
    }
    case 81906:
    {
        returnValue = F("Dorfzentrum");
        break;
    }
    case 81907:
    {
        returnValue = F("Dorfäcker");
        break;
    }
    case 81908:
    {
        returnValue = F("Dorfäcker Weg");
        break;
    }
    case 81909:
    {
        returnValue = F("Dorfäckerstr.");
        break;
    }
    case 81910:
    {
        returnValue = F("Dorfäckerweg");
        break;
    }
    case 81911:
    {
        returnValue = F("Dorfänger");
        break;
    }
    case 81912:
    {
        returnValue = F("Dorgarten Unterjoch");
        break;
    }
    case 81913:
    {
        returnValue = F("Dorgdamm");
        break;
    }
    case 81914:
    {
        returnValue = F("Dorgelohstr.");
        break;
    }
    case 81915:
    {
        returnValue = F("Dorgenstedter Weg");
        break;
    }
    case 81916:
    {
        returnValue = F("Dorheck");
        break;
    }
    case 81917:
    {
        returnValue = F("Dorheimer Str.");
        break;
    }
    case 81918:
    {
        returnValue = F("Doriderweg");
        break;
    }
    case 81919:
    {
        returnValue = F("Doris-Dreier-Str.");
        break;
    }
    case 81920:
    {
        returnValue = F("Doris-Heye-Str.");
        break;
    }
    case 81921:
    {
        returnValue = F("Doris-Korte-Str.");
        break;
    }
    case 81922:
    {
        returnValue = F("Doris-Lessing-Str.");
        break;
    }
    case 81923:
    {
        returnValue = F("Doris-Oberländer-Weg");
        break;
    }
    case 81924:
    {
        returnValue = F("Doris-Ruppenstein-Str.");
        break;
    }
    case 81925:
    {
        returnValue = F("Dorisstr.");
        break;
    }
    case 81926:
    {
        returnValue = F("Dorisweg");
        break;
    }
    case 81927:
    {
        returnValue = F("Dorlaer Str.");
        break;
    }
    case 81928:
    {
        returnValue = F("Dorlaer Weg");
        break;
    }
    case 81929:
    {
        returnValue = F("Dorlarer Str.");
        break;
    }
    case 81930:
    {
        returnValue = F("Dorlastr.");
        break;
    }
    case 81931:
    {
        returnValue = F("Dorlblick");
        break;
    }
    case 81932:
    {
        returnValue = F("Dorlesweg");
        break;
    }
    case 81933:
    {
        returnValue = F("Dorlohstr.");
        break;
    }
    case 81934:
    {
        returnValue = F("Dormagener Str.");
        break;
    }
    case 81935:
    {
        returnValue = F("Dormannweg");
        break;
    }
    case 81936:
    {
        returnValue = F("Dormansring");
        break;
    }
    case 81937:
    {
        returnValue = F("Dormayrstr.");
        break;
    }
    case 81938:
    {
        returnValue = F("Dormblick");
        break;
    }
    case 81939:
    {
        returnValue = F("Dormettinger Str.");
        break;
    }
    case 81940:
    {
        returnValue = F("Dormitzer Str.");
        break;
    }
    case 81941:
    {
        returnValue = F("Dormkeweg");
        break;
    }
    case 81942:
    {
        returnValue = F("Dormstr.");
        break;
    }
    case 81943:
    {
        returnValue = F("Dormweg");
        break;
    }
    case 81944:
    {
        returnValue = F("Dorn");
        break;
    }
    case 81945:
    {
        returnValue = F("Dorn-Ackern-Weg");
        break;
    }
    case 81946:
    {
        returnValue = F("Dorn-Assenheimer Str.");
        break;
    }
    case 81947:
    {
        returnValue = F("Dorn-Assenheimer Weg");
        break;
    }
    case 81948:
    {
        returnValue = F("Dorn-Assenheimer-Str.");
        break;
    }
    case 81949:
    {
        returnValue = F("Dorn-Dürkheimer-Str.");
        break;
    }
    case 81950:
    {
        returnValue = F("Dorn-Schneise");
        break;
    }
    case 81951:
    {
        returnValue = F("Dorn-Young-Str.");
        break;
    }
    case 81952:
    {
        returnValue = F("Dorna");
        break;
    }
    case 81953:
    {
        returnValue = F("Dornach");
        break;
    }
    case 81954:
    {
        returnValue = F("Dornacher Str.");
        break;
    }
    case 81955:
    {
        returnValue = F("Dornachweg");
        break;
    }
    case 81956:
    {
        returnValue = F("Dornacker");
        break;
    }
    case 81957:
    {
        returnValue = F("Dornackerstr.");
        break;
    }
    case 81958:
    {
        returnValue = F("Dornaer Dorfstr.");
        break;
    }
    case 81959:
    {
        returnValue = F("Dornaer Str.");
        break;
    }
    case 81960:
    {
        returnValue = F("Dornaer Weg");
        break;
    }
    case 81961:
    {
        returnValue = F("Dornaischer Weg");
        break;
    }
    case 81962:
    {
        returnValue = F("Dornallee");
        break;
    }
    case 81963:
    {
        returnValue = F("Dornaper Str.");
        break;
    }
    case 81964:
    {
        returnValue = F("Dornaper Weg");
        break;
    }
    case 81965:
    {
        returnValue = F("Dornatorbogen");
        break;
    }
    case 81966:
    {
        returnValue = F("Dornau");
        break;
    }
    case 81967:
    {
        returnValue = F("Dornauer Ring");
        break;
    }
    case 81968:
    {
        returnValue = F("Dornauer Str.");
        break;
    }
    case 81969:
    {
        returnValue = F("Dornauer Weg");
        break;
    }
    case 81970:
    {
        returnValue = F("Dornaustr.");
        break;
    }
    case 81971:
    {
        returnValue = F("Dornbacher Str.");
        break;
    }
    case 81972:
    {
        returnValue = F("Dornbachstr.");
        break;
    }
    case 81973:
    {
        returnValue = F("Dornbachweg");
        break;
    }
    case 81974:
    {
        returnValue = F("Dornbeeksfeld");
        break;
    }
    case 81975:
    {
        returnValue = F("Dornberg");
        break;
    }
    case 81976:
    {
        returnValue = F("Dornberger Heide");
        break;
    }
    case 81977:
    {
        returnValue = F("Dornberger Pforte");
        break;
    }
    case 81978:
    {
        returnValue = F("Dornberger Str.");
        break;
    }
    case 81979:
    {
        returnValue = F("Dornberger Weg");
        break;
    }
    case 81980:
    {
        returnValue = F("Dornbergerstr.");
        break;
    }
    case 81981:
    {
        returnValue = F("Dornberginsel");
        break;
    }
    case 81982:
    {
        returnValue = F("Dornbergstr.");
        break;
    }
    case 81983:
    {
        returnValue = F("Dornbergsweg");
        break;
    }
    case 81984:
    {
        returnValue = F("Dornbergweg");
        break;
    }
    case 81985:
    {
        returnValue = F("Dornbichlweg");
        break;
    }
    case 81986:
    {
        returnValue = F("Dornbirner Weg");
        break;
    }
    case 81987:
    {
        returnValue = F("Dornbitzenweg");
        break;
    }
    case 81988:
    {
        returnValue = F("Dornbluthweg");
        break;
    }
    case 81989:
    {
        returnValue = F("Dornblüthstr.");
        break;
    }
    case 81990:
    {
        returnValue = F("Dornbocker Lindenstr.");
        break;
    }
    case 81991:
    {
        returnValue = F("Dornbocker Str.");
        break;
    }
    case 81992:
    {
        returnValue = F("Dornbornpfad");
        break;
    }
    case 81993:
    {
        returnValue = F("Dornbornstr.");
        break;
    }
    case 81994:
    {
        returnValue = F("Dornboschweg");
        break;
    }
    case 81995:
    {
        returnValue = F("Dornbrachtweg");
        break;
    }
    case 81996:
    {
        returnValue = F("Dornbrede");
        break;
    }
    case 81997:
    {
        returnValue = F("Dornbreede");
        break;
    }
    case 81998:
    {
        returnValue = F("Dornbreite");
        break;
    }
    case 81999:
    {
        returnValue = F("Dornbruchweg");
        break;
    }
    case 82000:
    {
        returnValue = F("Dornburger Platz");
        break;
    }
    case 82001:
    {
        returnValue = F("Dornburger Schlösser");
        break;
    }
    case 82002:
    {
        returnValue = F("Dornburger Str.");
        break;
    }
    case 82003:
    {
        returnValue = F("Dornburger Weg");
        break;
    }
    case 82004:
    {
        returnValue = F("Dornburgstr.");
        break;
    }
    case 82005:
    {
        returnValue = F("Dornbusch");
        break;
    }
    case 82006:
    {
        returnValue = F("Dornbusch 4-6-8");
        break;
    }
    case 82007:
    {
        returnValue = F("Dornbuscher Hafenstr.");
        break;
    }
    case 82008:
    {
        returnValue = F("Dornbuscher Str.");
        break;
    }
    case 82009:
    {
        returnValue = F("Dornbuscher Weg");
        break;
    }
    case 82010:
    {
        returnValue = F("Dornbuschermoor");
        break;
    }
    case 82011:
    {
        returnValue = F("Dornbuschpark");
        break;
    }
    case 82012:
    {
        returnValue = F("Dornbuschschneise");
        break;
    }
    case 82013:
    {
        returnValue = F("Dornbuschstr.");
        break;
    }
    case 82014:
    {
        returnValue = F("Dornbuschweg");
        break;
    }
    case 82015:
    {
        returnValue = F("Dornbäumlesbrücke");
        break;
    }
    case 82016:
    {
        returnValue = F("Dornbäumlesweg");
        break;
    }
    case 82017:
    {
        returnValue = F("Dornbüh");
        break;
    }
    case 82018:
    {
        returnValue = F("Dornbühl");
        break;
    }
    case 82019:
    {
        returnValue = F("Dorndieler Kirchwenweg");
        break;
    }
    case 82020:
    {
        returnValue = F("Dorndorf");
        break;
    }
    case 82021:
    {
        returnValue = F("Dorndorfer Str.");
        break;
    }
    case 82022:
    {
        returnValue = F("Dorndorfstr.");
        break;
    }
    case 82023:
    {
        returnValue = F("Dorneburger Park");
        break;
    }
    case 82024:
    {
        returnValue = F("Dorneburger Str.");
        break;
    }
    case 82025:
    {
        returnValue = F("Dorneck");
        break;
    }
    case 82026:
    {
        returnValue = F("Dornecke");
        break;
    }
    case 82027:
    {
        returnValue = F("Dorneckstr.");
        break;
    }
    case 82028:
    {
        returnValue = F("Dornegertenweg");
        break;
    }
    case 82029:
    {
        returnValue = F("Dornegge");
        break;
    }
    case 82030:
    {
        returnValue = F("Dornekamp");
        break;
    }
    case 82031:
    {
        returnValue = F("Dornemannshof");
        break;
    }
    case 82032:
    {
        returnValue = F("Dornenbergweg");
        break;
    }
    case 82033:
    {
        returnValue = F("Dornenbrede");
        break;
    }
    case 82034:
    {
        returnValue = F("Dornenbreite");
        break;
    }
    case 82035:
    {
        returnValue = F("Dornenbusch");
        break;
    }
    case 82036:
    {
        returnValue = F("Dorneneck");
        break;
    }
    case 82037:
    {
        returnValue = F("Dornengrubweg");
        break;
    }
    case 82038:
    {
        returnValue = F("Dornenhügel");
        break;
    }
    case 82039:
    {
        returnValue = F("Dornenkamp");
        break;
    }
    case 82040:
    {
        returnValue = F("Dornenkreuzstr.");
        break;
    }
    case 82041:
    {
        returnValue = F("Dornenkrugsweg");
        break;
    }
    case 82042:
    {
        returnValue = F("Dornenpark");
        break;
    }
    case 82043:
    {
        returnValue = F("Dornenreeke");
        break;
    }
    case 82044:
    {
        returnValue = F("Dornenreihe");
        break;
    }
    case 82045:
    {
        returnValue = F("Dornensiek");
        break;
    }
    case 82046:
    {
        returnValue = F("Dornenstr.");
        break;
    }
    case 82047:
    {
        returnValue = F("Dornentalweg");
        break;
    }
    case 82048:
    {
        returnValue = F("Dornenweg");
        break;
    }
    case 82049:
    {
        returnValue = F("Dornenweide");
        break;
    }
    case 82050:
    {
        returnValue = F("Dorner Str.");
        break;
    }
    case 82051:
    {
        returnValue = F("Dorner Weg");
        break;
    }
    case 82052:
    {
        returnValue = F("Dornersbachweg");
        break;
    }
    case 82053:
    {
        returnValue = F("Dornerstr.");
        break;
    }
    case 82054:
    {
        returnValue = F("Dornerweg");
        break;
    }
    case 82055:
    {
        returnValue = F("Dornes Hof");
        break;
    }
    case 82056:
    {
        returnValue = F("Dornes Str.");
        break;
    }
    case 82057:
    {
        returnValue = F("Dornestr.");
        break;
    }
    case 82058:
    {
        returnValue = F("Dornewitzer Str.");
        break;
    }
    case 82059:
    {
        returnValue = F("Dornfelder Weg");
        break;
    }
    case 82060:
    {
        returnValue = F("Dornfelderring");
        break;
    }
    case 82061:
    {
        returnValue = F("Dornfelderstr.");
        break;
    }
    case 82062:
    {
        returnValue = F("Dornfelderweg");
        break;
    }
    case 82063:
    {
        returnValue = F("Dornfeldstr.");
        break;
    }
    case 82064:
    {
        returnValue = F("Dorngarten");
        break;
    }
    case 82065:
    {
        returnValue = F("Dorngasse");
        break;
    }
    case 82066:
    {
        returnValue = F("Dorngäßchen");
        break;
    }
    case 82067:
    {
        returnValue = F("Dornhag");
        break;
    }
    case 82068:
    {
        returnValue = F("Dornhagen");
        break;
    }
    case 82069:
    {
        returnValue = F("Dornhagweg");
        break;
    }
    case 82070:
    {
        returnValue = F("Dornhalde");
        break;
    }
    case 82071:
    {
        returnValue = F("Dornhaldenstr.");
        break;
    }
    case 82072:
    {
        returnValue = F("Dornhaldeweg");
        break;
    }
    case 82073:
    {
        returnValue = F("Dornhaner Str.");
        break;
    }
    case 82074:
    {
        returnValue = F("Dornhaustr.");
        break;
    }
    case 82075:
    {
        returnValue = F("Dornhauweg");
        break;
    }
    case 82076:
    {
        returnValue = F("Dornheck");
        break;
    }
    case 82077:
    {
        returnValue = F("Dornhecke");
        break;
    }
    case 82078:
    {
        returnValue = F("Dornheckenstr.");
        break;
    }
    case 82079:
    {
        returnValue = F("Dornheckenweg");
        break;
    }
    case 82080:
    {
        returnValue = F("Dornhecker Str.");
        break;
    }
    case 82081:
    {
        returnValue = F("Dornheckstr.");
        break;
    }
    case 82082:
    {
        returnValue = F("Dornheckweg");
        break;
    }
    case 82083:
    {
        returnValue = F("Dornhege");
        break;
    }
    case 82084:
    {
        returnValue = F("Dornheide");
        break;
    }
    case 82085:
    {
        returnValue = F("Dornheim");
        break;
    }
    case 82086:
    {
        returnValue = F("Dornheimer Ring");
        break;
    }
    case 82087:
    {
        returnValue = F("Dornheimer Str.");
        break;
    }
    case 82088:
    {
        returnValue = F("Dornheimer Weg");
        break;
    }
    case 82089:
    {
        returnValue = F("Dornheimstr.");
        break;
    }
    case 82090:
    {
        returnValue = F("Dornhof");
        break;
    }
    case 82091:
    {
        returnValue = F("Dornhofstr.");
        break;
    }
    case 82092:
    {
        returnValue = F("Dornholzhäuser Str.");
        break;
    }
    case 82093:
    {
        returnValue = F("Dornhoop");
        break;
    }
    case 82094:
    {
        returnValue = F("Dornhorn");
        break;
    }
    case 82095:
    {
        returnValue = F("Dornhöfer Weg");
        break;
    }
    case 82096:
    {
        returnValue = F("Dornhöh");
        break;
    }
    case 82097:
    {
        returnValue = F("Dornhürste");
        break;
    }
    case 82098:
    {
        returnValue = F("Dornicker Str.");
        break;
    }
    case 82099:
    {
        returnValue = F("Dornierstr.");
        break;
    }
    case 82100:
    {
        returnValue = F("Dornierweg");
        break;
    }
    case 82101:
    {
        returnValue = F("Dornigtweg");
        break;
    }
    case 82102:
    {
        returnValue = F("Dornisweg");
        break;
    }
    case 82103:
    {
        returnValue = F("Dornkamp");
        break;
    }
    case 82104:
    {
        returnValue = F("Dornkampstr.");
        break;
    }
    case 82105:
    {
        returnValue = F("Dornkampsweg");
        break;
    }
    case 82106:
    {
        returnValue = F("Dornkaulstr.");
        break;
    }
    case 82107:
    {
        returnValue = F("Dornkratzstr.");
        break;
    }
    case 82108:
    {
        returnValue = F("Dornliedstr.");
        break;
    }
    case 82109:
    {
        returnValue = F("Dornlo");
        break;
    }
    case 82110:
    {
        returnValue = F("Dornländerweg");
        break;
    }
    case 82111:
    {
        returnValue = F("Dornmannweg");
        break;
    }
    case 82112:
    {
        returnValue = F("Dornmattstr.");
        break;
    }
    case 82113:
    {
        returnValue = F("Dornmühle");
        break;
    }
    case 82114:
    {
        returnValue = F("Dornmühlstr.");
        break;
    }
    case 82115:
    {
        returnValue = F("Dornmührleweg");
        break;
    }
    case 82116:
    {
        returnValue = F("Dornrade");
        break;
    }
    case 82117:
    {
        returnValue = F("Dornrain");
        break;
    }
    case 82118:
    {
        returnValue = F("Dornrainsträßle");
        break;
    }
    case 82119:
    {
        returnValue = F("Dornrainweg");
        break;
    }
    case 82120:
    {
        returnValue = F("Dornredder");
        break;
    }
    case 82121:
    {
        returnValue = F("Dornregt");
        break;
    }
    case 82122:
    {
        returnValue = F("Dornrosenstr.");
        break;
    }
    case 82123:
    {
        returnValue = F("Dornröschenpfad");
        break;
    }
    case 82124:
    {
        returnValue = F("Dornröschensteg");
        break;
    }
    case 82125:
    {
        returnValue = F("Dornröschenstr.");
        break;
    }
    case 82126:
    {
        returnValue = F("Dornröschenweg");
        break;
    }
    case 82127:
    {
        returnValue = F("Dorns Hof");
        break;
    }
    case 82128:
    {
        returnValue = F("Dornsbergweg");
        break;
    }
    case 82129:
    {
        returnValue = F("Dornschlagweg");
        break;
    }
    case 82130:
    {
        returnValue = F("Dornschlatt");
        break;
    }
    case 82131:
    {
        returnValue = F("Dornschnabel");
        break;
    }
    case 82132:
    {
        returnValue = F("Dornschneise");
        break;
    }
    case 82133:
    {
        returnValue = F("Dornseeschneise");
        break;
    }
    case 82134:
    {
        returnValue = F("Dornseifer Str.");
        break;
    }
    case 82135:
    {
        returnValue = F("Dornsengasse");
        break;
    }
    case 82136:
    {
        returnValue = F("Dornsenplatz");
        break;
    }
    case 82137:
    {
        returnValue = F("Dornsgasse");
        break;
    }
    case 82138:
    {
        returnValue = F("Dornshecke");
        break;
    }
    case 82139:
    {
        returnValue = F("Dornsheimer Weg");
        break;
    }
    case 82140:
    {
        returnValue = F("Dornsiek");
        break;
    }
    case 82141:
    {
        returnValue = F("Dornsiepen");
        break;
    }
    case 82142:
    {
        returnValue = F("Dornsoder Str.");
        break;
    }
    case 82143:
    {
        returnValue = F("Dornspachstr.");
        break;
    }
    case 82144:
    {
        returnValue = F("Dornstadter Str.");
        break;
    }
    case 82145:
    {
        returnValue = F("Dornstadter Weg");
        break;
    }
    case 82146:
    {
        returnValue = F("Dornstauden");
        break;
    }
    case 82147:
    {
        returnValue = F("Dornsteinweg");
        break;
    }
    case 82148:
    {
        returnValue = F("Dornstettener Str.");
        break;
    }
    case 82149:
    {
        returnValue = F("Dornstetter Str.");
        break;
    }
    case 82150:
    {
        returnValue = F("Dornstetter Weg");
        break;
    }
    case 82151:
    {
        returnValue = F("Dornstiege");
        break;
    }
    case 82152:
    {
        returnValue = F("Dornstr.");
        break;
    }
    case 82153:
    {
        returnValue = F("Dornstrauchbreite");
        break;
    }
    case 82154:
    {
        returnValue = F("Dornswalder Str.");
        break;
    }
    case 82155:
    {
        returnValue = F("Dornsweg");
        break;
    }
    case 82156:
    {
        returnValue = F("Dorntalweg");
        break;
    }
    case 82157:
    {
        returnValue = F("Dornteichweg");
        break;
    }
    case 82158:
    {
        returnValue = F("Dorntriftweg");
        break;
    }
    case 82159:
    {
        returnValue = F("Dornumer Str.");
        break;
    }
    case 82160:
    {
        returnValue = F("Dornumer Weg");
        break;
    }
    case 82161:
    {
        returnValue = F("Dornungweg");
        break;
    }
    case 82162:
    {
        returnValue = F("Dornwald");
        break;
    }
    case 82163:
    {
        returnValue = F("Dornwaldstr.");
        break;
    }
    case 82164:
    {
        returnValue = F("Dornwanger Str.");
        break;
    }
    case 82165:
    {
        returnValue = F("Dornweg");
        break;
    }
    case 82166:
    {
        returnValue = F("Dornwegshöhstr.");
        break;
    }
    case 82167:
    {
        returnValue = F("Dornweißstr.");
        break;
    }
    case 82168:
    {
        returnValue = F("Dornwiese");
        break;
    }
    case 82169:
    {
        returnValue = F("Dornwiesenstr.");
        break;
    }
    case 82170:
    {
        returnValue = F("Dornwiesenweg");
        break;
    }
    case 82171:
    {
        returnValue = F("Dornwurthstr.");
        break;
    }
    case 82172:
    {
        returnValue = F("Dornzunistr.");
        break;
    }
    case 82173:
    {
        returnValue = F("Dornäcker");
        break;
    }
    case 82174:
    {
        returnValue = F("Dornäckerstr.");
        break;
    }
    case 82175:
    {
        returnValue = F("Dornäckerweg");
        break;
    }
    case 82176:
    {
        returnValue = F("Doroteenstr.");
        break;
    }
    case 82177:
    {
        returnValue = F("Dorothea Erxleben Weg");
        break;
    }
    case 82178:
    {
        returnValue = F("Dorothea-Borchers-Str.");
        break;
    }
    case 82179:
    {
        returnValue = F("Dorothea-Brede-Weg");
        break;
    }
    case 82180:
    {
        returnValue = F("Dorothea-Erxleben-Ring");
        break;
    }
    case 82181:
    {
        returnValue = F("Dorothea-Erxleben-Str.");
        break;
    }
    case 82182:
    {
        returnValue = F("Dorothea-Erxleben-Weg");
        break;
    }
    case 82183:
    {
        returnValue = F("Dorothea-Flebbe-Weg");
        break;
    }
    case 82184:
    {
        returnValue = F("Dorothea-Milde-Weg");
        break;
    }
    case 82185:
    {
        returnValue = F("Dorothea-Püschel-Weg");
        break;
    }
    case 82186:
    {
        returnValue = F("Dorothea-Schlegel-Str.");
        break;
    }
    case 82187:
    {
        returnValue = F("Dorothea-Schlegel-Weg");
        break;
    }
    case 82188:
    {
        returnValue = F("Dorothea-Schlözer-Bogen");
        break;
    }
    case 82189:
    {
        returnValue = F("Dorothea-Schlözer-Str.");
        break;
    }
    case 82190:
    {
        returnValue = F("Dorothea-Schlözer-Weg");
        break;
    }
    case 82191:
    {
        returnValue = F("Dorothea-Schneider-Str.");
        break;
    }
    case 82192:
    {
        returnValue = F("Dorothea-Siemon-Str.");
        break;
    }
    case 82193:
    {
        returnValue = F("Dorothea-Veit-Str.");
        break;
    }
    case 82194:
    {
        returnValue = F("Dorothea-Viehmann-Park");
        break;
    }
    case 82195:
    {
        returnValue = F("Dorothea-Viehmann-Str.");
        break;
    }
    case 82196:
    {
        returnValue = F("Dorotheastr.");
        break;
    }
    case 82197:
    {
        returnValue = F("Dorotheenbogen");
        break;
    }
    case 82198:
    {
        returnValue = F("Dorotheenhof");
        break;
    }
    case 82199:
    {
        returnValue = F("Dorotheenhofer Weg");
        break;
    }
    case 82200:
    {
        returnValue = F("Dorotheenplatz");
        break;
    }
    case 82201:
    {
        returnValue = F("Dorotheenring");
        break;
    }
    case 82202:
    {
        returnValue = F("Dorotheenstieg");
        break;
    }
    case 82203:
    {
        returnValue = F("Dorotheenstr.");
        break;
    }
    case 82204:
    {
        returnValue = F("Dorotheental");
        break;
    }
    case 82205:
    {
        returnValue = F("Dorotheenwalde");
        break;
    }
    case 82206:
    {
        returnValue = F("Dorotheenweg");
        break;
    }
    case 82207:
    {
        returnValue = F("Dorotheer Zechenhaus");
        break;
    }
    case 82208:
    {
        returnValue = F("Dorow");
        break;
    }
    case 82209:
    {
        returnValue = F("Dorp-Kamp");
        break;
    }
    case 82210:
    {
        returnValue = F("Dorpe");
        break;
    }
    case 82211:
    {
        returnValue = F("Dorper Str.");
        break;
    }
    case 82212:
    {
        returnValue = F("Dorperhof");
        break;
    }
    case 82213:
    {
        returnValue = F("Dorpkamp");
        break;
    }
    case 82214:
    {
        returnValue = F("Dorpweg");
        break;
    }
    case 82215:
    {
        returnValue = F("Dorrenbachweg");
        break;
    }
    case 82216:
    {
        returnValue = F("Dorrerstr.");
        break;
    }
    case 82217:
    {
        returnValue = F("Dorrlochstr.");
        break;
    }
    case 82218:
    {
        returnValue = F("Dorrwiese");
        break;
    }
    case 82219:
    {
        returnValue = F("Dorsaweg");
        break;
    }
    case 82220:
    {
        returnValue = F("Dorsbrunn");
        break;
    }
    case 82221:
    {
        returnValue = F("Dorsbrunner Str.");
        break;
    }
    case 82222:
    {
        returnValue = F("Dorschberger Hohl");
        break;
    }
    case 82223:
    {
        returnValue = F("Dorschbergstr.");
        break;
    }
    case 82224:
    {
        returnValue = F("Dorscheider Str.");
        break;
    }
    case 82225:
    {
        returnValue = F("Dorschenbergweg");
        break;
    }
    case 82226:
    {
        returnValue = F("Dorschenweg");
        break;
    }
    case 82227:
    {
        returnValue = F("Dorschgraben");
        break;
    }
    case 82228:
    {
        returnValue = F("Dorschhausener Str.");
        break;
    }
    case 82229:
    {
        returnValue = F("Dorschhauser Weg");
        break;
    }
    case 82230:
    {
        returnValue = F("Dorschstr.");
        break;
    }
    case 82231:
    {
        returnValue = F("Dorschtelweg");
        break;
    }
    case 82232:
    {
        returnValue = F("Dorschweg");
        break;
    }
    case 82233:
    {
        returnValue = F("Dorseler Weg");
        break;
    }
    case 82234:
    {
        returnValue = F("Dorsfeld");
        break;
    }
    case 82235:
    {
        returnValue = F("Dorsheimer Str.");
        break;
    }
    case 82236:
    {
        returnValue = F("Dorstbornstr.");
        break;
    }
    case 82237:
    {
        returnValue = F("Dorsteinweg");
        break;
    }
    case 82238:
    {
        returnValue = F("Dorstener Landweg");
        break;
    }
    case 82239:
    {
        returnValue = F("Dorstener Str.");
        break;
    }
    case 82240:
    {
        returnValue = F("Dorstener Weg");
        break;
    }
    case 82241:
    {
        returnValue = F("Dorstenfeld");
        break;
    }
    case 82242:
    {
        returnValue = F("Dorster Str.");
        break;
    }
    case 82243:
    {
        returnValue = F("Dorststr.");
        break;
    }
    case 82244:
    {
        returnValue = F("Dorstädter Str.");
        break;
    }
    case 82245:
    {
        returnValue = F("Dortansstr.");
        break;
    }
    case 82246:
    {
        returnValue = F("Dortebachstr.");
        break;
    }
    case 82247:
    {
        returnValue = F("Dortelweiler Ring");
        break;
    }
    case 82248:
    {
        returnValue = F("Dortelweiler Str.");
        break;
    }
    case 82249:
    {
        returnValue = F("Dortenhof");
        break;
    }
    case 82250:
    {
        returnValue = F("Dorthausen");
        break;
    }
    case 82251:
    {
        returnValue = F("Dortmunder Allee");
        break;
    }
    case 82252:
    {
        returnValue = F("Dortmunder Landstr.");
        break;
    }
    case 82253:
    {
        returnValue = F("Dortmunder Moorweg");
        break;
    }
    case 82254:
    {
        returnValue = F("Dortmunder Str.");
        break;
    }
    case 82255:
    {
        returnValue = F("Dortmunder Weg");
        break;
    }
    case 82256:
    {
        returnValue = F("Dortmundweg");
        break;
    }
    case 82257:
    {
        returnValue = F("Dortustr.");
        break;
    }
    case 82258:
    {
        returnValue = F("Dorumer Bahnhofstr.");
        break;
    }
    case 82259:
    {
        returnValue = F("Dorumer Helmer");
        break;
    }
    case 82260:
    {
        returnValue = F("Dorumer Marren");
        break;
    }
    case 82261:
    {
        returnValue = F("Dorumer Str.");
        break;
    }
    case 82262:
    {
        returnValue = F("Dorumer Strichweg");
        break;
    }
    case 82263:
    {
        returnValue = F("Dorumer Weg");
        break;
    }
    case 82264:
    {
        returnValue = F("Dorweilerstr.");
        break;
    }
    case 82265:
    {
        returnValue = F("Doräcker");
        break;
    }
    case 82266:
    {
        returnValue = F("Dosbachweg");
        break;
    }
    case 82267:
    {
        returnValue = F("Dosborn");
        break;
    }
    case 82268:
    {
        returnValue = F("Doschenklingenweg");
        break;
    }
    case 82269:
    {
        returnValue = F("Doschower Seetrail");
        break;
    }
    case 82270:
    {
        returnValue = F("Dosdorf");
        break;
    }
    case 82271:
    {
        returnValue = F("Dosen-Schneise");
        break;
    }
    case 82272:
    {
        returnValue = F("Dosenbeker Str.");
        break;
    }
    case 82273:
    {
        returnValue = F("Dosenmoor");
        break;
    }
    case 82274:
    {
        returnValue = F("Dosenredder");
        break;
    }
    case 82275:
    {
        returnValue = F("Dosenschneise");
        break;
    }
    case 82276:
    {
        returnValue = F("Dosenweg");
        break;
    }
    case 82277:
    {
        returnValue = F("Doser Weg");
        break;
    }
    case 82278:
    {
        returnValue = F("Dosewieke");
        break;
    }
    case 82279:
    {
        returnValue = F("Dosfeld");
        break;
    }
    case 82280:
    {
        returnValue = F("Dosfelder Str.");
        break;
    }
    case 82281:
    {
        returnValue = F("Dossenbacher Str.");
        break;
    }
    case 82282:
    {
        returnValue = F("Dossenberger Str.");
        break;
    }
    case 82283:
    {
        returnValue = F("Dossenbergerstr.");
        break;
    }
    case 82284:
    {
        returnValue = F("Dossenbergerweg");
        break;
    }
    case 82285:
    {
        returnValue = F("Dossenheimer Landstr.");
        break;
    }
    case 82286:
    {
        returnValue = F("Dossenheimer Str.");
        break;
    }
    case 82287:
    {
        returnValue = F("Dossenheimer Weg");
        break;
    }
    case 82288:
    {
        returnValue = F("Dossenheimerweg");
        break;
    }
    case 82289:
    {
        returnValue = F("Dossental");
        break;
    }
    case 82290:
    {
        returnValue = F("Dossentalstr.");
        break;
    }
    case 82291:
    {
        returnValue = F("Dossenwaldweg");
        break;
    }
    case 82292:
    {
        returnValue = F("Dossenweg");
        break;
    }
    case 82293:
    {
        returnValue = F("Dossespeicher");
        break;
    }
    case 82294:
    {
        returnValue = F("Dossestr.");
        break;
    }
    case 82295:
    {
        returnValue = F("Dossewall");
        break;
    }
    case 82296:
    {
        returnValue = F("Dosseweg");
        break;
    }
    case 82297:
    {
        returnValue = F("Dossinger Str.");
        break;
    }
    case 82298:
    {
        returnValue = F("Dossinger Weg");
        break;
    }
    case 82299:
    {
        returnValue = F("Dossower Bahnhofstr.");
        break;
    }
    case 82300:
    {
        returnValue = F("Dossower Damm");
        break;
    }
    case 82301:
    {
        returnValue = F("Dossower Dorfstr.");
        break;
    }
    case 82302:
    {
        returnValue = F("Dossower Str.");
        break;
    }
    case 82303:
    {
        returnValue = F("Dossower Weg");
        break;
    }
    case 82304:
    {
        returnValue = F("Dostalstr.");
        break;
    }
    case 82305:
    {
        returnValue = F("Dostenweg");
        break;
    }
    case 82306:
    {
        returnValue = F("Dostlerstr.");
        break;
    }
    case 82307:
    {
        returnValue = F("Dostluk");
        break;
    }
    case 82308:
    {
        returnValue = F("Dostojewskistr.");
        break;
    }
    case 82309:
    {
        returnValue = F("Dostteichstr.");
        break;
    }
    case 82310:
    {
        returnValue = F("Dostweg");
        break;
    }
    case 82311:
    {
        returnValue = F("Dothen");
        break;
    }
    case 82312:
    {
        returnValue = F("Dothmarkstr.");
        break;
    }
    case 82313:
    {
        returnValue = F("Dotkamp");
        break;
    }
    case 82314:
    {
        returnValue = F("Dotteler Weg");
        break;
    }
    case 82315:
    {
        returnValue = F("Dottendorfer Allee");
        break;
    }
    case 82316:
    {
        returnValue = F("Dottendorfer Str.");
        break;
    }
    case 82317:
    {
        returnValue = F("Dottenheimer Hauptstr.");
        break;
    }
    case 82318:
    {
        returnValue = F("Dottenheimer Str.");
        break;
    }
    case 82319:
    {
        returnValue = F("Dottenweiler Str.");
        break;
    }
    case 82320:
    {
        returnValue = F("Dotterblumenweg");
        break;
    }
    case 82321:
    {
        returnValue = F("Dotterbruch");
        break;
    }
    case 82322:
    {
        returnValue = F("Dottighofer Str.");
        break;
    }
    case 82323:
    {
        returnValue = F("Dottinger Str.");
        break;
    }
    case 82324:
    {
        returnValue = F("Dottinger Weg");
        break;
    }
    case 82325:
    {
        returnValue = F("Dottingerweg");
        break;
    }
    case 82326:
    {
        returnValue = F("Dotzenwangweg");
        break;
    }
    case 82327:
    {
        returnValue = F("Dotzheimer Str.");
        break;
    }
    case 82328:
    {
        returnValue = F("Dotzingergasse");
        break;
    }
    case 82329:
    {
        returnValue = F("Dotzlarer Hauptstr.");
        break;
    }
    case 82330:
    {
        returnValue = F("Dotzlerstr.");
        break;
    }
    case 82331:
    {
        returnValue = F("Douaistr.");
        break;
    }
    case 82332:
    {
        returnValue = F("Doudevillestr.");
        break;
    }
    case 82333:
    {
        returnValue = F("Douffsteg");
        break;
    }
    case 82334:
    {
        returnValue = F("Douglas Way");
        break;
    }
    case 82335:
    {
        returnValue = F("Douglas-Lister-Str.");
        break;
    }
    case 82336:
    {
        returnValue = F("Douglasienstr.");
        break;
    }
    case 82337:
    {
        returnValue = F("Douglasienweg");
        break;
    }
    case 82338:
    {
        returnValue = F("Douglasienweg (D1)");
        break;
    }
    case 82339:
    {
        returnValue = F("Douglassstr.");
        break;
    }
    case 82340:
    {
        returnValue = F("Douglasstr.");
        break;
    }
    case 82341:
    {
        returnValue = F("Douglasweg");
        break;
    }
    case 82342:
    {
        returnValue = F("Doulenweg");
        break;
    }
    case 82343:
    {
        returnValue = F("Doullenser Str.");
        break;
    }
    case 82344:
    {
        returnValue = F("Douquéstr.");
        break;
    }
    case 82345:
    {
        returnValue = F("Dourdanplatz");
        break;
    }
    case 82346:
    {
        returnValue = F("Douvengasse");
        break;
    }
    case 82347:
    {
        returnValue = F("Douvermannstege");
        break;
    }
    case 82348:
    {
        returnValue = F("Douvermannstr.");
        break;
    }
    case 82349:
    {
        returnValue = F("Douwesstr.");
        break;
    }
    case 82350:
    {
        returnValue = F("Douzettering");
        break;
    }
    case 82351:
    {
        returnValue = F("Douzettestr.");
        break;
    }
    case 82352:
    {
        returnValue = F("Douzystr.");
        break;
    }
    case 82353:
    {
        returnValue = F("Dovemühlen");
        break;
    }
    case 82354:
    {
        returnValue = F("Dovenkamp");
        break;
    }
    case 82355:
    {
        returnValue = F("Doverack");
        break;
    }
    case 82356:
    {
        returnValue = F("Doverener Markt");
        break;
    }
    case 82357:
    {
        returnValue = F("Doverhahn");
        break;
    }
    case 82358:
    {
        returnValue = F("Doverheide");
        break;
    }
    case 82359:
    {
        returnValue = F("Doverhörnweg");
        break;
    }
    case 82360:
    {
        returnValue = F("Doverweg");
        break;
    }
    case 82361:
    {
        returnValue = F("Dovestr.");
        break;
    }
    case 82362:
    {
        returnValue = F("Dowidatsiedlung");
        break;
    }
    case 82363:
    {
        returnValue = F("Dowiesenweg");
        break;
    }
    case 82364:
    {
        returnValue = F("Dowitzweg");
        break;
    }
    case 82365:
    {
        returnValue = F("Downhill Ellwangen");
        break;
    }
    case 82366:
    {
        returnValue = F("Downhill Wurzeltrail");
        break;
    }
    case 82367:
    {
        returnValue = F("Dozerotherweg");
        break;
    }
    case 82368:
    {
        returnValue = F("Dr-Alois-Alzheimer-Str.");
        break;
    }
    case 82369:
    {
        returnValue = F("Dr-Austel-Str.");
        break;
    }
    case 82370:
    {
        returnValue = F("Dr-Engelhardt-Weg");
        break;
    }
    case 82371:
    {
        returnValue = F("Dr-Gerhard-Jacob-Weg");
        break;
    }
    case 82372:
    {
        returnValue = F("Dr-Gminder-Str.");
        break;
    }
    case 82373:
    {
        returnValue = F("Dr-Hermann-Messer-Weg");
        break;
    }
    case 82374:
    {
        returnValue = F("Dr-Hämmerle-Weg");
        break;
    }
    case 82375:
    {
        returnValue = F("Dr-Hönlein-Str.");
        break;
    }
    case 82376:
    {
        returnValue = F("Dr-Madler-Weg");
        break;
    }
    case 82377:
    {
        returnValue = F("Dr-Schmid-Str.");
        break;
    }
    case 82378:
    {
        returnValue = F("Dr-Wagenmann-Str.");
        break;
    }
    case 82379:
    {
        returnValue = F("Dr. - Roos - Str.");
        break;
    }
    case 82380:
    {
        returnValue = F("Dr. Albert Grimminger-Str.");
        break;
    }
    case 82381:
    {
        returnValue = F("Dr. Alfons-Schmitz-Weg");
        break;
    }
    case 82382:
    {
        returnValue = F("Dr. Alfred Sasse-Brücke");
        break;
    }
    case 82383:
    {
        returnValue = F("Dr. Alfred-Neff-Str.");
        break;
    }
    case 82384:
    {
        returnValue = F("Dr. Alma-Langenbach-Str.");
        break;
    }
    case 82385:
    {
        returnValue = F("Dr. Alois Schleinzer-Weg");
        break;
    }
    case 82386:
    {
        returnValue = F("Dr. Aloys-Henhöfer-Str.");
        break;
    }
    case 82387:
    {
        returnValue = F("Dr. Arens-Str.");
        break;
    }
    case 82388:
    {
        returnValue = F("Dr. Arnoldi-Str.");
        break;
    }
    case 82389:
    {
        returnValue = F("Dr. Baumgartner Str.");
        break;
    }
    case 82390:
    {
        returnValue = F("Dr. Behm-Ring");
        break;
    }
    case 82391:
    {
        returnValue = F("Dr. Behm-Ring.8");
        break;
    }
    case 82392:
    {
        returnValue = F("Dr. Bellinghausen-Str.");
        break;
    }
    case 82393:
    {
        returnValue = F("Dr. Bernhard-Hauff-Str.");
        break;
    }
    case 82394:
    {
        returnValue = F("Dr. Bockemüller-Ring");
        break;
    }
    case 82395:
    {
        returnValue = F("Dr. Breitscheid Str.");
        break;
    }
    case 82396:
    {
        returnValue = F("Dr. Broer Street");
        break;
    }
    case 82397:
    {
        returnValue = F("Dr. Bruno Türkheimer-Str.");
        break;
    }
    case 82398:
    {
        returnValue = F("Dr. Brückner Weg");
        break;
    }
    case 82399:
    {
        returnValue = F("Dr. Carl-Henß-Str.");
        break;
    }
    case 82400:
    {
        returnValue = F("Dr. Damian Wolf Str.");
        break;
    }
    case 82401:
    {
        returnValue = F("Dr. Degener Promenade");
        break;
    }
    case 82402:
    {
        returnValue = F("Dr. Denckmann Wanderweg");
        break;
    }
    case 82403:
    {
        returnValue = F("Dr. Dieck-Str.");
        break;
    }
    case 82404:
    {
        returnValue = F("Dr. Eckener-Str.");
        break;
    }
    case 82405:
    {
        returnValue = F("Dr. Eckerle-Str.");
        break;
    }
    case 82406:
    {
        returnValue = F("Dr. Eisenbachstr.");
        break;
    }
    case 82407:
    {
        returnValue = F("Dr. Elisabeth-Vomstein-Str.");
        break;
    }
    case 82408:
    {
        returnValue = F("Dr. Erich-Hesse-Str.");
        break;
    }
    case 82409:
    {
        returnValue = F("Dr. Erich-Klausener-Platz");
        break;
    }
    case 82410:
    {
        returnValue = F("Dr. Ernst-Spies-Allee");
        break;
    }
    case 82411:
    {
        returnValue = F("Dr. Euteneuer Str.");
        break;
    }
    case 82412:
    {
        returnValue = F("Dr. Friedrich-Dittmann-Weg");
        break;
    }
    case 82413:
    {
        returnValue = F("Dr. Fritz Klocke Brücke");
        break;
    }
    case 82414:
    {
        returnValue = F("Dr. Ganter Weg");
        break;
    }
    case 82415:
    {
        returnValue = F("Dr. Geier-Str.");
        break;
    }
    case 82416:
    {
        returnValue = F("Dr. Georg-Hergesell-Str.");
        break;
    }
    case 82417:
    {
        returnValue = F("Dr. Gerhard Pusch Park");
        break;
    }
    case 82418:
    {
        returnValue = F("Dr. Gothe-Weg");
        break;
    }
    case 82419:
    {
        returnValue = F("Dr. Hanns-Simon-Str.");
        break;
    }
    case 82420:
    {
        returnValue = F("Dr. Hans Wey Brücke");
        break;
    }
    case 82421:
    {
        returnValue = F("Dr. Hans-Brüll-Str.");
        break;
    }
    case 82422:
    {
        returnValue = F("Dr. Hans-Greef-Str.");
        break;
    }
    case 82423:
    {
        returnValue = F("Dr. Hans-Karl-Glinz-Str.");
        break;
    }
    case 82424:
    {
        returnValue = F("Dr. Hans-Lampenscherff-Platz");
        break;
    }
    case 82425:
    {
        returnValue = F("Dr. Hans-Lochmann-Str.");
        break;
    }
    case 82426:
    {
        returnValue = F("Dr. Hans-Schurig-Weg");
        break;
    }
    case 82427:
    {
        returnValue = F("Dr. Hans-Vogt-Platz");
        break;
    }
    case 82428:
    {
        returnValue = F("Dr. Harter Str.");
        break;
    }
    case 82429:
    {
        returnValue = F("Dr. Heimburger Str.");
        break;
    }
    case 82430:
    {
        returnValue = F("Dr. Heinrich-Gremmels-Str.");
        break;
    }
    case 82431:
    {
        returnValue = F("Dr. Heinrich-Stein-Str.");
        break;
    }
    case 82432:
    {
        returnValue = F("Dr. Helmuth Hörstmann Weg");
        break;
    }
    case 82433:
    {
        returnValue = F("Dr. Herbert-König Weg");
        break;
    }
    case 82434:
    {
        returnValue = F("Dr. Herbert-König-Weg");
        break;
    }
    case 82435:
    {
        returnValue = F("Dr. Herbert-Mrozik-Str.");
        break;
    }
    case 82436:
    {
        returnValue = F("Dr. Heusler-Edenhuizen-Str.");
        break;
    }
    case 82437:
    {
        returnValue = F("Dr. Hilger-Str.");
        break;
    }
    case 82438:
    {
        returnValue = F("Dr. Hohenadel-Weg");
        break;
    }
    case 82439:
    {
        returnValue = F("Dr. Hörl-Str.");
        break;
    }
    case 82440:
    {
        returnValue = F("Dr. Iseke Str.");
        break;
    }
    case 82441:
    {
        returnValue = F("Dr. Jakob-Ebner-Weg");
        break;
    }
    case 82442:
    {
        returnValue = F("Dr. Jamil-Kahey-Str.");
        break;
    }
    case 82443:
    {
        returnValue = F("Dr. Jasper-Str.");
        break;
    }
    case 82444:
    {
        returnValue = F("Dr. Jestaedt-Str.");
        break;
    }
    case 82445:
    {
        returnValue = F("Dr. Josef-Vögtle-Str.");
        break;
    }
    case 82446:
    {
        returnValue = F("Dr. Joseph Hammes-Park");
        break;
    }
    case 82447:
    {
        returnValue = F("Dr. Jörgerweg");
        break;
    }
    case 82448:
    {
        returnValue = F("Dr. Karl-Heinrich-Weg");
        break;
    }
    case 82449:
    {
        returnValue = F("Dr. Karl-Hohner-Str.");
        break;
    }
    case 82450:
    {
        returnValue = F("Dr. Karl-Storz-Platz");
        break;
    }
    case 82451:
    {
        returnValue = F("Dr. Karl-Storz-Str.");
        break;
    }
    case 82452:
    {
        returnValue = F("Dr. Kausch Str.");
        break;
    }
    case 82453:
    {
        returnValue = F("Dr. Kleber-Str.");
        break;
    }
    case 82454:
    {
        returnValue = F("Dr. Konrad-Adenauer-Str.");
        break;
    }
    case 82455:
    {
        returnValue = F("Dr. Koyenuma Str.");
        break;
    }
    case 82456:
    {
        returnValue = F("Dr. Kremers Str.");
        break;
    }
    case 82457:
    {
        returnValue = F("Dr. Kurt-Schumacher-Str.");
        break;
    }
    case 82458:
    {
        returnValue = F("Dr. Lax-Str.");
        break;
    }
    case 82459:
    {
        returnValue = F("Dr. Leisner-Str.");
        break;
    }
    case 82460:
    {
        returnValue = F("Dr. Lilli-Jahn-Str.");
        break;
    }
    case 82461:
    {
        returnValue = F("Dr. Lilo-Gloeden-Str.");
        break;
    }
    case 82462:
    {
        returnValue = F("Dr. Max-Otto-Bruker-Str.");
        break;
    }
    case 82463:
    {
        returnValue = F("Dr. Otto Weber-Str.");
        break;
    }
    case 82464:
    {
        returnValue = F("Dr. Patheiger-Str.");
        break;
    }
    case 82465:
    {
        returnValue = F("Dr. Plaßmann-Str.");
        break;
    }
    case 82466:
    {
        returnValue = F("Dr. R. Rademacher Str.");
        break;
    }
    case 82467:
    {
        returnValue = F("Dr. Rademacher-Str.");
        break;
    }
    case 82468:
    {
        returnValue = F("Dr. Reichard-Weg");
        break;
    }
    case 82469:
    {
        returnValue = F("Dr. Reif Promenade");
        break;
    }
    case 82470:
    {
        returnValue = F("Dr. Richards Garten");
        break;
    }
    case 82471:
    {
        returnValue = F("Dr. Robert Koch Str.");
        break;
    }
    case 82472:
    {
        returnValue = F("Dr. Rosenbaum Str.");
        break;
    }
    case 82473:
    {
        returnValue = F("Dr. Rudolf Faber-Str.");
        break;
    }
    case 82474:
    {
        returnValue = F("Dr. Rudolf-Eberle-Str.");
        break;
    }
    case 82475:
    {
        returnValue = F("Dr. Rütten-Str.");
        break;
    }
    case 82476:
    {
        returnValue = F("Dr. Schellerer Park");
        break;
    }
    case 82477:
    {
        returnValue = F("Dr. Schmidt Weg");
        break;
    }
    case 82478:
    {
        returnValue = F("Dr. Schmitz-Str.");
        break;
    }
    case 82479:
    {
        returnValue = F("Dr. Schrauth-Str.");
        break;
    }
    case 82480:
    {
        returnValue = F("Dr. Schraven-Str.");
        break;
    }
    case 82481:
    {
        returnValue = F("Dr. Schroff-Weg");
        break;
    }
    case 82482:
    {
        returnValue = F("Dr. Siegfried-Pflugfelder-Platz");
        break;
    }
    case 82483:
    {
        returnValue = F("Dr. Singer Park");
        break;
    }
    case 82484:
    {
        returnValue = F("Dr. Steinmüller-Str.");
        break;
    }
    case 82485:
    {
        returnValue = F("Dr. Valentin-Gaa-Str.");
        break;
    }
    case 82486:
    {
        returnValue = F("Dr. Wailersbacher Str.");
        break;
    }
    case 82487:
    {
        returnValue = F("Dr. Weis-Str.");
        break;
    }
    case 82488:
    {
        returnValue = F("Dr. Welte-Str.");
        break;
    }
    case 82489:
    {
        returnValue = F("Dr. Werner Vogl Weg");
        break;
    }
    case 82490:
    {
        returnValue = F("Dr. Wester Str.");
        break;
    }
    case 82491:
    {
        returnValue = F("Dr. Wetzel Str.");
        break;
    }
    case 82492:
    {
        returnValue = F("Dr. Wieschhölter-Str.");
        break;
    }
    case 82493:
    {
        returnValue = F("Dr. h.c. Albert-Schumacher-Weg");
        break;
    }
    case 82494:
    {
        returnValue = F("Dr. h.c. Schumacher-Weg");
        break;
    }
    case 82495:
    {
        returnValue = F("Dr.- Goerdeler-Str.");
        break;
    }
    case 82496:
    {
        returnValue = F("Dr.- Pfeufer-Weg");
        break;
    }
    case 82497:
    {
        returnValue = F("Dr.-A.-Köbrich-Str.");
        break;
    }
    case 82498:
    {
        returnValue = F("Dr.-Abele-Weg");
        break;
    }
    case 82499:
    {
        returnValue = F("Dr.-Abraham-Schweizer-Platz");
        break;
    }
    case 82500:
    {
        returnValue = F("Dr.-Adalbert-Jordan-Str.");
        break;
    }
    case 82501:
    {
        returnValue = F("Dr.-Adam-Voll-Str.");
        break;
    }
    case 82502:
    {
        returnValue = F("Dr.-Adelmann-Str.");
        break;
    }
    case 82503:
    {
        returnValue = F("Dr.-Adenauer-Ring");
        break;
    }
    case 82504:
    {
        returnValue = F("Dr.-Adenauer-Str.");
        break;
    }
    case 82505:
    {
        returnValue = F("Dr.-Adler-Str.");
        break;
    }
    case 82506:
    {
        returnValue = F("Dr.-Adolf-Evers-Str.");
        break;
    }
    case 82507:
    {
        returnValue = F("Dr.-Adolf-Faber-Str.");
        break;
    }
    case 82508:
    {
        returnValue = F("Dr.-Adolf-Oswald-Str.");
        break;
    }
    case 82509:
    {
        returnValue = F("Dr.-Adolf-Schindler-Str.");
        break;
    }
    case 82510:
    {
        returnValue = F("Dr.-Adolf-Schneider-Str.");
        break;
    }
    case 82511:
    {
        returnValue = F("Dr.-Adolf-Strauss-Gasse");
        break;
    }
    case 82512:
    {
        returnValue = F("Dr.-Aigner-Str.");
        break;
    }
    case 82513:
    {
        returnValue = F("Dr.-Albach-Str.");
        break;
    }
    case 82514:
    {
        returnValue = F("Dr.-Alban-Str.");
        break;
    }
    case 82515:
    {
        returnValue = F("Dr.-Albert-Becker-Str.");
        break;
    }
    case 82516:
    {
        returnValue = F("Dr.-Albert-David-Str.");
        break;
    }
    case 82517:
    {
        returnValue = F("Dr.-Albert-Dietze-Str.");
        break;
    }
    case 82518:
    {
        returnValue = F("Dr.-Albert-Frank-Str.");
        break;
    }
    case 82519:
    {
        returnValue = F("Dr.-Albert-Jung-Str.");
        break;
    }
    case 82520:
    {
        returnValue = F("Dr.-Albert-Schweitzer-Str.");
        break;
    }
    case 82521:
    {
        returnValue = F("Dr.-Albin-Schubert-Weg");
        break;
    }
    case 82522:
    {
        returnValue = F("Dr.-Alex-Frick-Weg");
        break;
    }
    case 82523:
    {
        returnValue = F("Dr.-Alex-Schönberg-Str.");
        break;
    }
    case 82524:
    {
        returnValue = F("Dr.-Alex.-Röder-Str.");
        break;
    }
    case 82525:
    {
        returnValue = F("Dr.-Alexander-Grupp-Str.");
        break;
    }
    case 82526:
    {
        returnValue = F("Dr.-Alexander-Stollenwerk-Str.");
        break;
    }
    case 82527:
    {
        returnValue = F("Dr.-Alfons-Gamp-Str.");
        break;
    }
    case 82528:
    {
        returnValue = F("Dr.-Alfons-Knauf-Str.");
        break;
    }
    case 82529:
    {
        returnValue = F("Dr.-Alfons-Maria-Wachsmann-Siedlung");
        break;
    }
    case 82530:
    {
        returnValue = F("Dr.-Alfred-Block-Allee");
        break;
    }
    case 82531:
    {
        returnValue = F("Dr.-Alfred-Brehm-Str.");
        break;
    }
    case 82532:
    {
        returnValue = F("Dr.-Alfred-Leitz-Str.");
        break;
    }
    case 82533:
    {
        returnValue = F("Dr.-Alfred-Meiche-Weg");
        break;
    }
    case 82534:
    {
        returnValue = F("Dr.-Alfred-Moschkau-Str.");
        break;
    }
    case 82535:
    {
        returnValue = F("Dr.-Alfred-Reichmann-Str.");
        break;
    }
    case 82536:
    {
        returnValue = F("Dr.-Allende-Str.");
        break;
    }
    case 82537:
    {
        returnValue = F("Dr.-Alois-Gaßner-Weg");
        break;
    }
    case 82538:
    {
        returnValue = F("Dr.-Alois-Keßler-Str.");
        break;
    }
    case 82539:
    {
        returnValue = F("Dr.-Aloys-Lehnert-Weg");
        break;
    }
    case 82540:
    {
        returnValue = F("Dr.-Aloys-Schmitt-Str.");
        break;
    }
    case 82541:
    {
        returnValue = F("Dr.-Aloys-Wittrup-Str.");
        break;
    }
    case 82542:
    {
        returnValue = F("Dr.-Altmann-Str.");
        break;
    }
    case 82543:
    {
        returnValue = F("Dr.-Amberger-Str.");
        break;
    }
    case 82544:
    {
        returnValue = F("Dr.-Amrhein-Str.");
        break;
    }
    case 82545:
    {
        returnValue = F("Dr.-Ancot-Steg");
        break;
    }
    case 82546:
    {
        returnValue = F("Dr.-Anschütz-Str.");
        break;
    }
    case 82547:
    {
        returnValue = F("Dr.-Anton-Mayer-Str.");
        break;
    }
    case 82548:
    {
        returnValue = F("Dr.-Anton-Sattler-Str.");
        break;
    }
    case 82549:
    {
        returnValue = F("Dr.-Anton-Schneider-Str.");
        break;
    }
    case 82550:
    {
        returnValue = F("Dr.-Antonie-Krebs-Str.");
        break;
    }
    case 82551:
    {
        returnValue = F("Dr.-Apke-Str.");
        break;
    }
    case 82552:
    {
        returnValue = F("Dr.-Appia-Str.");
        break;
    }
    case 82553:
    {
        returnValue = F("Dr.-Arno-Bergmann-Str.");
        break;
    }
    case 82554:
    {
        returnValue = F("Dr.-Arnold-Hueck-Str.");
        break;
    }
    case 82555:
    {
        returnValue = F("Dr.-Arnoldi-Str.");
        break;
    }
    case 82556:
    {
        returnValue = F("Dr.-Aronsohn-Str.");
        break;
    }
    case 82557:
    {
        returnValue = F("Dr.-Arthur-Schulz-Str.");
        break;
    }
    case 82558:
    {
        returnValue = F("Dr.-Arweiler-Str.");
        break;
    }
    case 82559:
    {
        returnValue = F("Dr.-Aschenbrenner-Str.");
        break;
    }
    case 82560:
    {
        returnValue = F("Dr.-Ascher-Weg");
        break;
    }
    case 82561:
    {
        returnValue = F("Dr.-Atzinger-Str.");
        break;
    }
    case 82562:
    {
        returnValue = F("Dr.-Augele-Str.");
        break;
    }
    case 82563:
    {
        returnValue = F("Dr.-August-Behne-Str.");
        break;
    }
    case 82564:
    {
        returnValue = F("Dr.-August-Blank-Str.");
        break;
    }
    case 82565:
    {
        returnValue = F("Dr.-August-Euler-Weg");
        break;
    }
    case 82566:
    {
        returnValue = F("Dr.-August-Hübenthal-Str.");
        break;
    }
    case 82567:
    {
        returnValue = F("Dr.-August-Koch-Str.");
        break;
    }
    case 82568:
    {
        returnValue = F("Dr.-August-Müller-Str.");
        break;
    }
    case 82569:
    {
        returnValue = F("Dr.-August-Stumpf-Str.");
        break;
    }
    case 82570:
    {
        returnValue = F("Dr.-August-Weber-Weg");
        break;
    }
    case 82571:
    {
        returnValue = F("Dr.-August-Weckesser-Str.");
        break;
    }
    case 82572:
    {
        returnValue = F("Dr.-August-Wild-Str.");
        break;
    }
    case 82573:
    {
        returnValue = F("Dr.-Augustin-Str.");
        break;
    }
    case 82574:
    {
        returnValue = F("Dr.-Ayrer-Str.");
        break;
    }
    case 82575:
    {
        returnValue = F("Dr.-Bach-Weg");
        break;
    }
    case 82576:
    {
        returnValue = F("Dr.-Bachenheimer-Str.");
        break;
    }
    case 82577:
    {
        returnValue = F("Dr.-Bachl-Str.");
        break;
    }
    case 82578:
    {
        returnValue = F("Dr.-Bader-Weg");
        break;
    }
    case 82579:
    {
        returnValue = F("Dr.-Balthasar-Hubmaier-Str.");
        break;
    }
    case 82580:
    {
        returnValue = F("Dr.-Baptist-Sigl-Str.");
        break;
    }
    case 82581:
    {
        returnValue = F("Dr.-Barbara-Renz-Str.");
        break;
    }
    case 82582:
    {
        returnValue = F("Dr.-Bareilles-Str.");
        break;
    }
    case 82583:
    {
        returnValue = F("Dr.-Barner-Str.");
        break;
    }
    case 82584:
    {
        returnValue = F("Dr.-Barth-Str.");
        break;
    }
    case 82585:
    {
        returnValue = F("Dr.-Bast-Str.");
        break;
    }
    case 82586:
    {
        returnValue = F("Dr.-Baur-Siedlung");
        break;
    }
    case 82587:
    {
        returnValue = F("Dr.-Bayberger-Str.");
        break;
    }
    case 82588:
    {
        returnValue = F("Dr.-Bayer-Str.");
        break;
    }
    case 82589:
    {
        returnValue = F("Dr.-Becher-Str.");
        break;
    }
    case 82590:
    {
        returnValue = F("Dr.-Bechtold-Str.");
        break;
    }
    case 82591:
    {
        returnValue = F("Dr.-Beck-Str.");
        break;
    }
    case 82592:
    {
        returnValue = F("Dr.-Beeg-Str.");
        break;
    }
    case 82593:
    {
        returnValue = F("Dr.-Beer-Str.");
        break;
    }
    case 82594:
    {
        returnValue = F("Dr.-Begger-Str.");
        break;
    }
    case 82595:
    {
        returnValue = F("Dr.-Behring-Str.");
        break;
    }
    case 82596:
    {
        returnValue = F("Dr.-Behring-Weg");
        break;
    }
    case 82597:
    {
        returnValue = F("Dr.-Belian-Str.");
        break;
    }
    case 82598:
    {
        returnValue = F("Dr.-Bell-Str.");
        break;
    }
    case 82599:
    {
        returnValue = F("Dr.-Benckiser-Str.");
        break;
    }
    case 82600:
    {
        returnValue = F("Dr.-Bender-Str.");
        break;
    }
    case 82601:
    {
        returnValue = F("Dr.-Benecke-Str.");
        break;
    }
    case 82602:
    {
        returnValue = F("Dr.-Benjamin-Halevi-Str.");
        break;
    }
    case 82603:
    {
        returnValue = F("Dr.-Bennewitz-Str.");
        break;
    }
    case 82604:
    {
        returnValue = F("Dr.-Benno-Koppenhagen-Str.");
        break;
    }
    case 82605:
    {
        returnValue = F("Dr.-Benno-Scholze-Str.");
        break;
    }
    case 82606:
    {
        returnValue = F("Dr.-Benzion-Kellermann-Stiege");
        break;
    }
    case 82607:
    {
        returnValue = F("Dr.-Bergius-Str.");
        break;
    }
    case 82608:
    {
        returnValue = F("Dr.-Bergmeister-Str.");
        break;
    }
    case 82609:
    {
        returnValue = F("Dr.-Berhorst-Str.");
        break;
    }
    case 82610:
    {
        returnValue = F("Dr.-Berkmann-Str.");
        break;
    }
    case 82611:
    {
        returnValue = F("Dr.-Bernatek-Weg");
        break;
    }
    case 82612:
    {
        returnValue = F("Dr.-Berndl-Platz");
        break;
    }
    case 82613:
    {
        returnValue = F("Dr.-Berndl-Str.");
        break;
    }
    case 82614:
    {
        returnValue = F("Dr.-Berndt-Weg");
        break;
    }
    case 82615:
    {
        returnValue = F("Dr.-Bernhard-Hinkelmann-Str.");
        break;
    }
    case 82616:
    {
        returnValue = F("Dr.-Bernhard-Klein-Str.");
        break;
    }
    case 82617:
    {
        returnValue = F("Dr.-Bernhard-Riese-Str.");
        break;
    }
    case 82618:
    {
        returnValue = F("Dr.-Bernhard-Thieme-Str.");
        break;
    }
    case 82619:
    {
        returnValue = F("Dr.-Bernhard-Wensch-Weg");
        break;
    }
    case 82620:
    {
        returnValue = F("Dr.-Berns-Str.");
        break;
    }
    case 82621:
    {
        returnValue = F("Dr.-Bernstein-Str.");
        break;
    }
    case 82622:
    {
        returnValue = F("Dr.-Berta-Erlanger-Platz");
        break;
    }
    case 82623:
    {
        returnValue = F("Dr.-Berthold-Leinweber-Str.");
        break;
    }
    case 82624:
    {
        returnValue = F("Dr.-Berwig-Weg");
        break;
    }
    case 82625:
    {
        returnValue = F("Dr.-Bethune-Str.");
        break;
    }
    case 82626:
    {
        returnValue = F("Dr.-Bettinger-Weg");
        break;
    }
    case 82627:
    {
        returnValue = F("Dr.-Beyerle-Str.");
        break;
    }
    case 82628:
    {
        returnValue = F("Dr.-Bigalke-Str.");
        break;
    }
    case 82629:
    {
        returnValue = F("Dr.-Birner-Str.");
        break;
    }
    case 82630:
    {
        returnValue = F("Dr.-Blank-Str.");
        break;
    }
    case 82631:
    {
        returnValue = F("Dr.-Bock-Brücke");
        break;
    }
    case 82632:
    {
        returnValue = F("Dr.-Bock-Str.");
        break;
    }
    case 82633:
    {
        returnValue = F("Dr.-Bodo-Otto-Str.");
        break;
    }
    case 82634:
    {
        returnValue = F("Dr.-Boecale-Str.");
        break;
    }
    case 82635:
    {
        returnValue = F("Dr.-Boer-Str.");
        break;
    }
    case 82636:
    {
        returnValue = F("Dr.-Borggreve-Str.");
        break;
    }
    case 82637:
    {
        returnValue = F("Dr.-Born-Str.");
        break;
    }
    case 82638:
    {
        returnValue = F("Dr.-Bosch-Str.");
        break;
    }
    case 82639:
    {
        returnValue = F("Dr.-Brandenburg-Str.");
        break;
    }
    case 82640:
    {
        returnValue = F("Dr.-Braun-Str.");
        break;
    }
    case 82641:
    {
        returnValue = F("Dr.-Breitscheid-Platz");
        break;
    }
    case 82642:
    {
        returnValue = F("Dr.-Breitscheid-Str.");
        break;
    }
    case 82643:
    {
        returnValue = F("Dr.-Bremer-Str.");
        break;
    }
    case 82644:
    {
        returnValue = F("Dr.-Brendel-Str.");
        break;
    }
    case 82645:
    {
        returnValue = F("Dr.-Brenner-Str.");
        break;
    }
    case 82646:
    {
        returnValue = F("Dr.-Breuer-Str.");
        break;
    }
    case 82647:
    {
        returnValue = F("Dr.-Breuning-Weg");
        break;
    }
    case 82648:
    {
        returnValue = F("Dr.-Brinitzer-Str.");
        break;
    }
    case 82649:
    {
        returnValue = F("Dr.-Brinkmann-Str.");
        break;
    }
    case 82650:
    {
        returnValue = F("Dr.-Brodführer-Weg");
        break;
    }
    case 82651:
    {
        returnValue = F("Dr.-Broekmann-Str.");
        break;
    }
    case 82652:
    {
        returnValue = F("Dr.-Bruder-Str.");
        break;
    }
    case 82653:
    {
        returnValue = F("Dr.-Brunner-Str.");
        break;
    }
    case 82654:
    {
        returnValue = F("Dr.-Bruno-Kochmann-Str.");
        break;
    }
    case 82655:
    {
        returnValue = F("Dr.-Bruno-Sahliger-Str.");
        break;
    }
    case 82656:
    {
        returnValue = F("Dr.-Bruno-Uhl-Str.");
        break;
    }
    case 82657:
    {
        returnValue = F("Dr.-Brunotte-Str.");
        break;
    }
    case 82658:
    {
        returnValue = F("Dr.-Brück-Weg");
        break;
    }
    case 82659:
    {
        returnValue = F("Dr.-Brüll-Str.");
        break;
    }
    case 82660:
    {
        returnValue = F("Dr.-Brüning-Str.");
        break;
    }
    case 82661:
    {
        returnValue = F("Dr.-Brüning-Weg");
        break;
    }
    case 82662:
    {
        returnValue = F("Dr.-Bube-Str.");
        break;
    }
    case 82663:
    {
        returnValue = F("Dr.-Buchberger-Str.");
        break;
    }
    case 82664:
    {
        returnValue = F("Dr.-Buchner-Str.");
        break;
    }
    case 82665:
    {
        returnValue = F("Dr.-Bullinger-Str.");
        break;
    }
    case 82666:
    {
        returnValue = F("Dr.-Bundschuh-Str.");
        break;
    }
    case 82667:
    {
        returnValue = F("Dr.-Burchard-Sielmann-Str.");
        break;
    }
    case 82668:
    {
        returnValue = F("Dr.-Burger-Str.");
        break;
    }
    case 82669:
    {
        returnValue = F("Dr.-Burghard-Str.");
        break;
    }
    case 82670:
    {
        returnValue = F("Dr.-Burgholzer-Weg");
        break;
    }
    case 82671:
    {
        returnValue = F("Dr.-Burgkart-Str.");
        break;
    }
    case 82672:
    {
        returnValue = F("Dr.-Burkhart-Str.");
        break;
    }
    case 82673:
    {
        returnValue = F("Dr.-Bähr-Str.");
        break;
    }
    case 82674:
    {
        returnValue = F("Dr.-Bäseler-Str.");
        break;
    }
    case 82675:
    {
        returnValue = F("Dr.-Bäumker-Str.");
        break;
    }
    case 82676:
    {
        returnValue = F("Dr.-Böckler-Str.");
        break;
    }
    case 82677:
    {
        returnValue = F("Dr.-Bühler-Str.");
        break;
    }
    case 82678:
    {
        returnValue = F("Dr.-Bühner-Str.");
        break;
    }
    case 82679:
    {
        returnValue = F("Dr.-C.-Otto-Str.");
        break;
    }
    case 82680:
    {
        returnValue = F("Dr.-Cammerer-Str.");
        break;
    }
    case 82681:
    {
        returnValue = F("Dr.-Carl-Benz-Platz");
        break;
    }
    case 82682:
    {
        returnValue = F("Dr.-Carl-Düffert-Str.");
        break;
    }
    case 82683:
    {
        returnValue = F("Dr.-Carl-Eibes-Str.");
        break;
    }
    case 82684:
    {
        returnValue = F("Dr.-Carl-Foerster-Str.");
        break;
    }
    case 82685:
    {
        returnValue = F("Dr.-Carl-Friderich-Str.");
        break;
    }
    case 82686:
    {
        returnValue = F("Dr.-Carl-Glaser-Str.");
        break;
    }
    case 82687:
    {
        returnValue = F("Dr.-Carl-Goerdeler-Str.");
        break;
    }
    case 82688:
    {
        returnValue = F("Dr.-Carl-Kraus-Str.");
        break;
    }
    case 82689:
    {
        returnValue = F("Dr.-Carl-Schwenk-Str.");
        break;
    }
    case 82690:
    {
        returnValue = F("Dr.-Carl-Schöppner-Str.");
        break;
    }
    case 82691:
    {
        returnValue = F("Dr.-Carl-Sonnenschein-Str.");
        break;
    }
    case 82692:
    {
        returnValue = F("Dr.-Caspar-Wimmer-Str.");
        break;
    }
    case 82693:
    {
        returnValue = F("Dr.-Caspary-Weg");
        break;
    }
    case 82694:
    {
        returnValue = F("Dr.-Charlotte-Krenzer-Str.");
        break;
    }
    case 82695:
    {
        returnValue = F("Dr.-Chrastny-Str.");
        break;
    }
    case 82696:
    {
        returnValue = F("Dr.-Christian-Beßler-Str.");
        break;
    }
    case 82697:
    {
        returnValue = F("Dr.-Christian-Junkenitz-Str.");
        break;
    }
    case 82698:
    {
        returnValue = F("Dr.-Christian-Seybold-Str");
        break;
    }
    case 82699:
    {
        returnValue = F("Dr.-Christian-Seybold-Str.");
        break;
    }
    case 82700:
    {
        returnValue = F("Dr.-Christoph-Gack-Str.");
        break;
    }
    case 82701:
    {
        returnValue = F("Dr.-Christoph-Hufeland-Str.");
        break;
    }
    case 82702:
    {
        returnValue = F("Dr.-Clemen-Weg");
        break;
    }
    case 82703:
    {
        returnValue = F("Dr.-Clemm-Str.");
        break;
    }
    case 82704:
    {
        returnValue = F("Dr.-Conrad-Gröber-Str.");
        break;
    }
    case 82705:
    {
        returnValue = F("Dr.-Conrad-Str.");
        break;
    }
    case 82706:
    {
        returnValue = F("Dr.-Conrads-Str.");
        break;
    }
    case 82707:
    {
        returnValue = F("Dr.-Cornelius-Scholten-Str.");
        break;
    }
    case 82708:
    {
        returnValue = F("Dr.-Crede-Steig");
        break;
    }
    case 82709:
    {
        returnValue = F("Dr.-Cremer-Weg");
        break;
    }
    case 82710:
    {
        returnValue = F("Dr.-Creutz-Platz");
        break;
    }
    case 82711:
    {
        returnValue = F("Dr.-Crohn-Str.");
        break;
    }
    case 82712:
    {
        returnValue = F("Dr.-Cupei-Str.");
        break;
    }
    case 82713:
    {
        returnValue = F("Dr.-Curt-Weidhaas-Str.");
        break;
    }
    case 82714:
    {
        returnValue = F("Dr.-Dachsberger-Str.");
        break;
    }
    case 82715:
    {
        returnValue = F("Dr.-Dahl-Str.");
        break;
    }
    case 82716:
    {
        returnValue = F("Dr.-Daniel-Str.");
        break;
    }
    case 82717:
    {
        returnValue = F("Dr.-Danzebrink-Str.");
        break;
    }
    case 82718:
    {
        returnValue = F("Dr.-David-Morgenstern-Str.");
        break;
    }
    case 82719:
    {
        returnValue = F("Dr.-Daßler-Str.");
        break;
    }
    case 82720:
    {
        returnValue = F("Dr.-De-Millas-Str.");
        break;
    }
    case 82721:
    {
        returnValue = F("Dr.-Debus-Str.");
        break;
    }
    case 82722:
    {
        returnValue = F("Dr.-Decker-Str.");
        break;
    }
    case 82723:
    {
        returnValue = F("Dr.-Decking-Str.");
        break;
    }
    case 82724:
    {
        returnValue = F("Dr.-Deisting-Str.");
        break;
    }
    case 82725:
    {
        returnValue = F("Dr.-Deißböck-Weg");
        break;
    }
    case 82726:
    {
        returnValue = F("Dr.-Dessauer-Str.");
        break;
    }
    case 82727:
    {
        returnValue = F("Dr.-Determannweg");
        break;
    }
    case 82728:
    {
        returnValue = F("Dr.-Dettmer-Weg");
        break;
    }
    case 82729:
    {
        returnValue = F("Dr.-Deys-Weg");
        break;
    }
    case 82730:
    {
        returnValue = F("Dr.-Diehl-Str.");
        break;
    }
    case 82731:
    {
        returnValue = F("Dr.-Dieter-Curschmann-Str.");
        break;
    }
    case 82732:
    {
        returnValue = F("Dr.-Dietter-Str.");
        break;
    }
    case 82733:
    {
        returnValue = F("Dr.-Dietz Str.");
        break;
    }
    case 82734:
    {
        returnValue = F("Dr.-Dietz-Str.");
        break;
    }
    case 82735:
    {
        returnValue = F("Dr.-Dinkler-Allee");
        break;
    }
    case 82736:
    {
        returnValue = F("Dr.-Dobereiner-Weg");
        break;
    }
    case 82737:
    {
        returnValue = F("Dr.-Domarus-Str.");
        break;
    }
    case 82738:
    {
        returnValue = F("Dr.-Dominik-Gollowitz-Str.");
        break;
    }
    case 82739:
    {
        returnValue = F("Dr.-Donath-Str.");
        break;
    }
    case 82740:
    {
        returnValue = F("Dr.-Donner-Str.");
        break;
    }
    case 82741:
    {
        returnValue = F("Dr.-Doris-Schurig-Str.");
        break;
    }
    case 82742:
    {
        returnValue = F("Dr.-Dorn-Str.");
        break;
    }
    case 82743:
    {
        returnValue = F("Dr.-Dorothea-Erxleben-Str.");
        break;
    }
    case 82744:
    {
        returnValue = F("Dr.-Dorpmüller-Weg");
        break;
    }
    case 82745:
    {
        returnValue = F("Dr.-Dr.-Bertha-Kipfmüller-Str.");
        break;
    }
    case 82746:
    {
        returnValue = F("Dr.-Draeck-Str.");
        break;
    }
    case 82747:
    {
        returnValue = F("Dr.-Dreesen-Str.");
        break;
    }
    case 82748:
    {
        returnValue = F("Dr.-Dunker-Str.");
        break;
    }
    case 82749:
    {
        returnValue = F("Dr.-Dörffel-Str.");
        break;
    }
    case 82750:
    {
        returnValue = F("Dr.-Dörfler-Str.");
        break;
    }
    case 82751:
    {
        returnValue = F("Dr.-Dörnemann-Str.");
        break;
    }
    case 82752:
    {
        returnValue = F("Dr.-Dürbeck-Weg");
        break;
    }
    case 82753:
    {
        returnValue = F("Dr.-Dürr-Str.");
        break;
    }
    case 82754:
    {
        returnValue = F("Dr.-Dürrwanger-Str.");
        break;
    }
    case 82755:
    {
        returnValue = F("Dr.-Ebeling-Str.");
        break;
    }
    case 82756:
    {
        returnValue = F("Dr.-Eberle-Platz");
        break;
    }
    case 82757:
    {
        returnValue = F("Dr.-Eberle-Str.");
        break;
    }
    case 82758:
    {
        returnValue = F("Dr.-Ebertsheim-Str.");
        break;
    }
    case 82759:
    {
        returnValue = F("Dr.-Eckart-Weg");
        break;
    }
    case 82760:
    {
        returnValue = F("Dr.-Eckener-Str.");
        break;
    }
    case 82761:
    {
        returnValue = F("Dr.-Edeltraud-Sießl-Allee");
        break;
    }
    case 82762:
    {
        returnValue = F("Dr.-Edith-Ebers-Str.");
        break;
    }
    case 82763:
    {
        returnValue = F("Dr.-Edith-Stein-Str.");
        break;
    }
    case 82764:
    {
        returnValue = F("Dr.-Edith-Weyde-Str.");
        break;
    }
    case 82765:
    {
        returnValue = F("Dr.-Edmund-Abb-Str.");
        break;
    }
    case 82766:
    {
        returnValue = F("Dr.-Edo-Niemann-Str.");
        break;
    }
    case 82767:
    {
        returnValue = F("Dr.-Eduard-Haas-Str.");
        break;
    }
    case 82768:
    {
        returnValue = F("Dr.-Eduard-Krauß-Weg");
        break;
    }
    case 82769:
    {
        returnValue = F("Dr.-Eduard-Orth-Str.");
        break;
    }
    case 82770:
    {
        returnValue = F("Dr.-Eduard-Schulte-Str.");
        break;
    }
    case 82771:
    {
        returnValue = F("Dr.-Eduard-Stadler-Str.");
        break;
    }
    case 82772:
    {
        returnValue = F("Dr.-Eduard-Stieler-Str.");
        break;
    }
    case 82773:
    {
        returnValue = F("Dr.-Edwin-Grüninger-Str.");
        break;
    }
    case 82774:
    {
        returnValue = F("Dr.-Eggersdorfer-Str.");
        break;
    }
    case 82775:
    {
        returnValue = F("Dr.-Ehlen-Str.");
        break;
    }
    case 82776:
    {
        returnValue = F("Dr.-Ehrengut-Weg");
        break;
    }
    case 82777:
    {
        returnValue = F("Dr.-Ehrensberger-Str.");
        break;
    }
    case 82778:
    {
        returnValue = F("Dr.-Ehrhardt-Str.");
        break;
    }
    case 82779:
    {
        returnValue = F("Dr.-Eiber-Str.");
        break;
    }
    case 82780:
    {
        returnValue = F("Dr.-Eibl-Str.");
        break;
    }
    case 82781:
    {
        returnValue = F("Dr.-Eichinger-Str.");
        break;
    }
    case 82782:
    {
        returnValue = F("Dr.-Eichmeyer-Str.");
        break;
    }
    case 82783:
    {
        returnValue = F("Dr.-Eireiner-Str.");
        break;
    }
    case 82784:
    {
        returnValue = F("Dr.-Eisenbart-Hof");
        break;
    }
    case 82785:
    {
        returnValue = F("Dr.-Eisenbarth-Str.");
        break;
    }
    case 82786:
    {
        returnValue = F("Dr.-Eisenmann-Str.");
        break;
    }
    case 82787:
    {
        returnValue = F("Dr.-Elisabeth-Bremer-Str.");
        break;
    }
    case 82788:
    {
        returnValue = F("Dr.-Elisabeth-Schmitz-Str.");
        break;
    }
    case 82789:
    {
        returnValue = F("Dr.-Elisabeth-Selbert-Str.");
        break;
    }
    case 82790:
    {
        returnValue = F("Dr.-Elmar-Mauch-Str.");
        break;
    }
    case 82791:
    {
        returnValue = F("Dr.-Elschner-Str.");
        break;
    }
    case 82792:
    {
        returnValue = F("Dr.-Else-Heidegger-Str.");
        break;
    }
    case 82793:
    {
        returnValue = F("Dr.-Emde-Str.");
        break;
    }
    case 82794:
    {
        returnValue = F("Dr.-Emil-Beysel-Str.");
        break;
    }
    case 82795:
    {
        returnValue = F("Dr.-Emil-Brichta-Str.");
        break;
    }
    case 82796:
    {
        returnValue = F("Dr.-Emil-König-Str.");
        break;
    }
    case 82797:
    {
        returnValue = F("Dr.-Emil-Schilling-Str.");
        break;
    }
    case 82798:
    {
        returnValue = F("Dr.-Emmy-Marke-Weg");
        break;
    }
    case 82799:
    {
        returnValue = F("Dr.-Enders-Str.");
        break;
    }
    case 82800:
    {
        returnValue = F("Dr.-Endres-Str.");
        break;
    }
    case 82801:
    {
        returnValue = F("Dr.-Engel-Str.");
        break;
    }
    case 82802:
    {
        returnValue = F("Dr.-Engel-Weg");
        break;
    }
    case 82803:
    {
        returnValue = F("Dr.-Engelhard-Str.");
        break;
    }
    case 82804:
    {
        returnValue = F("Dr.-Engelhard-Weg");
        break;
    }
    case 82805:
    {
        returnValue = F("Dr.-Engels-Str.");
        break;
    }
    case 82806:
    {
        returnValue = F("Dr.-Engelsperger-Str.");
        break;
    }
    case 82807:
    {
        returnValue = F("Dr.-Engert-Str.");
        break;
    }
    case 82808:
    {
        returnValue = F("Dr.-Enk-Str.");
        break;
    }
    case 82809:
    {
        returnValue = F("Dr.-Enno-Sander-Str.");
        break;
    }
    case 82810:
    {
        returnValue = F("Dr.-Epple-Weg");
        break;
    }
    case 82811:
    {
        returnValue = F("Dr.-Erdmann-Str.");
        break;
    }
    case 82812:
    {
        returnValue = F("Dr.-Erfurth-Str.");
        break;
    }
    case 82813:
    {
        returnValue = F("Dr.-Erhard-Messmer-Str.");
        break;
    }
    case 82814:
    {
        returnValue = F("Dr.-Erhart-Schlobach-Str.");
        break;
    }
    case 82815:
    {
        returnValue = F("Dr.-Erich-Brüggemann-Ufer");
        break;
    }
    case 82816:
    {
        returnValue = F("Dr.-Erich-Jung-Str.");
        break;
    }
    case 82817:
    {
        returnValue = F("Dr.-Erich-Köhler-Str.");
        break;
    }
    case 82818:
    {
        returnValue = F("Dr.-Erich-Moning-Str.");
        break;
    }
    case 82819:
    {
        returnValue = F("Dr.-Erich-Naumann-Str.");
        break;
    }
    case 82820:
    {
        returnValue = F("Dr.-Erich-Oberhauer-Str.");
        break;
    }
    case 82821:
    {
        returnValue = F("Dr.-Erich-Schneider-Str.");
        break;
    }
    case 82822:
    {
        returnValue = F("Dr.-Erich-Thieler-Str.");
        break;
    }
    case 82823:
    {
        returnValue = F("Dr.-Erna-Scheffler-Str.");
        break;
    }
    case 82824:
    {
        returnValue = F("Dr.-Erna-Schiefenbusch-Weg");
        break;
    }
    case 82825:
    {
        returnValue = F("Dr.-Ernst-Alban-Str.");
        break;
    }
    case 82826:
    {
        returnValue = F("Dr.-Ernst-Anschütz-Str.");
        break;
    }
    case 82827:
    {
        returnValue = F("Dr.-Ernst-Braun-Str.");
        break;
    }
    case 82828:
    {
        returnValue = F("Dr.-Ernst-Derra-Str.");
        break;
    }
    case 82829:
    {
        returnValue = F("Dr.-Ernst-Döhling-Weg");
        break;
    }
    case 82830:
    {
        returnValue = F("Dr.-Ernst-Huhn-Str.");
        break;
    }
    case 82831:
    {
        returnValue = F("Dr.-Ernst-Hönn-Str.");
        break;
    }
    case 82832:
    {
        returnValue = F("Dr.-Ernst-Mucke-Str.");
        break;
    }
    case 82833:
    {
        returnValue = F("Dr.-Ernst-Richter-Str.");
        break;
    }
    case 82834:
    {
        returnValue = F("Dr.-Ernst-Schlapper-Weg");
        break;
    }
    case 82835:
    {
        returnValue = F("Dr.-Ernst-Str.");
        break;
    }
    case 82836:
    {
        returnValue = F("Dr.-Ernst-Urbahn-Str.");
        break;
    }
    case 82837:
    {
        returnValue = F("Dr.-Ernst-Weber-Str.");
        break;
    }
    case 82838:
    {
        returnValue = F("Dr.-Ernst-Weidinger-Str.");
        break;
    }
    case 82839:
    {
        returnValue = F("Dr.-Ernst-Zimmermann-Allee");
        break;
    }
    case 82840:
    {
        returnValue = F("Dr.-Ernst-Zindel-Str.");
        break;
    }
    case 82841:
    {
        returnValue = F("Dr.-Erwin-Fahr-Str.");
        break;
    }
    case 82842:
    {
        returnValue = F("Dr.-Eschle-Str.");
        break;
    }
    case 82843:
    {
        returnValue = F("Dr.-Eugen-Essig-Str.");
        break;
    }
    case 82844:
    {
        returnValue = F("Dr.-Eugen-Kersting-Str.");
        break;
    }
    case 82845:
    {
        returnValue = F("Dr.-Eugen-Schön-Str.");
        break;
    }
    case 82846:
    {
        returnValue = F("Dr.-Eugenie-Lautensach-Str.");
        break;
    }
    case 82847:
    {
        returnValue = F("Dr.-Eva-Elsner-Str.");
        break;
    }
    case 82848:
    {
        returnValue = F("Dr.-Evers-Gang");
        break;
    }
    case 82849:
    {
        returnValue = F("Dr.-Eversbusch-Weg");
        break;
    }
    case 82850:
    {
        returnValue = F("Dr.-Ewald-Lang-Weg");
        break;
    }
    case 82851:
    {
        returnValue = F("Dr.-Ewald-Str.");
        break;
    }
    case 82852:
    {
        returnValue = F("Dr.-F.-Riemer-Str.");
        break;
    }
    case 82853:
    {
        returnValue = F("Dr.-F.A.-Freundt-Str.");
        break;
    }
    case 82854:
    {
        returnValue = F("Dr.-Faber-Str.");
        break;
    }
    case 82855:
    {
        returnValue = F("Dr.-Fabricius-Str.");
        break;
    }
    case 82856:
    {
        returnValue = F("Dr.-Fankhänel-Str.");
        break;
    }
    case 82857:
    {
        returnValue = F("Dr.-Faust-Str.");
        break;
    }
    case 82858:
    {
        returnValue = F("Dr.-Feldbauer-Str.");
        break;
    }
    case 82859:
    {
        returnValue = F("Dr.-Felicitas-Kolde-Weg");
        break;
    }
    case 82860:
    {
        returnValue = F("Dr.-Felix-Str.");
        break;
    }
    case 82861:
    {
        returnValue = F("Dr.-Ferdinand-Geldner-Str.");
        break;
    }
    case 82862:
    {
        returnValue = F("Dr.-Ferdinand-Schröder-Weg");
        break;
    }
    case 82863:
    {
        returnValue = F("Dr.-Fickert-Str.");
        break;
    }
    case 82864:
    {
        returnValue = F("Dr.-Fiege-Weg");
        break;
    }
    case 82865:
    {
        returnValue = F("Dr.-Filchner-Str.");
        break;
    }
    case 82866:
    {
        returnValue = F("Dr.-Fitzthum-Str.");
        break;
    }
    case 82867:
    {
        returnValue = F("Dr.-Flaskamp-Str.");
        break;
    }
    case 82868:
    {
        returnValue = F("Dr.-Fleck-Str.");
        break;
    }
    case 82869:
    {
        returnValue = F("Dr.-Florian-Rieß-Str.");
        break;
    }
    case 82870:
    {
        returnValue = F("Dr.-Flume-Str.");
        break;
    }
    case 82871:
    {
        returnValue = F("Dr.-Flörsheim-Allee");
        break;
    }
    case 82872:
    {
        returnValue = F("Dr.-Flügel-Str.");
        break;
    }
    case 82873:
    {
        returnValue = F("Dr.-Forster-Str.");
        break;
    }
    case 82874:
    {
        returnValue = F("Dr.-Frank-Str.");
        break;
    }
    case 82875:
    {
        returnValue = F("Dr.-Frankenberg-Str.");
        break;
    }
    case 82876:
    {
        returnValue = F("Dr.-Franz-Grabowski-Str.");
        break;
    }
    case 82877:
    {
        returnValue = F("Dr.-Franz-Grimm-Str.");
        break;
    }
    case 82878:
    {
        returnValue = F("Dr.-Franz-Große-Weg");
        break;
    }
    case 82879:
    {
        returnValue = F("Dr.-Franz-Günther-Str.");
        break;
    }
    case 82880:
    {
        returnValue = F("Dr.-Franz-Hardt-Weg");
        break;
    }
    case 82881:
    {
        returnValue = F("Dr.-Franz-Hayler-Steg");
        break;
    }
    case 82882:
    {
        returnValue = F("Dr.-Franz-Hefele-Str.");
        break;
    }
    case 82883:
    {
        returnValue = F("Dr.-Franz-Kloidt-Weg");
        break;
    }
    case 82884:
    {
        returnValue = F("Dr.-Franz-Langecker-Str.");
        break;
    }
    case 82885:
    {
        returnValue = F("Dr.-Franz-Mertens-Str.");
        break;
    }
    case 82886:
    {
        returnValue = F("Dr.-Franz-Reich-Str.");
        break;
    }
    case 82887:
    {
        returnValue = F("Dr.-Franz-Riederer-Allee");
        break;
    }
    case 82888:
    {
        returnValue = F("Dr.-Franz-Schmitz-Str.");
        break;
    }
    case 82889:
    {
        returnValue = F("Dr.-Franz-Schneider-Str.");
        break;
    }
    case 82890:
    {
        returnValue = F("Dr.-Franz-Schorn-Str.");
        break;
    }
    case 82891:
    {
        returnValue = F("Dr.-Franz-Schuster-Str.");
        break;
    }
    case 82892:
    {
        returnValue = F("Dr.-Franz-Schütz-Platz");
        break;
    }
    case 82893:
    {
        returnValue = F("Dr.-Franz-Str.");
        break;
    }
    case 82894:
    {
        returnValue = F("Dr.-Franz-Weidenreich-Str.");
        break;
    }
    case 82895:
    {
        returnValue = F("Dr.-Frerichs-Str.");
        break;
    }
    case 82896:
    {
        returnValue = F("Dr.-Frey-Str.");
        break;
    }
    case 82897:
    {
        returnValue = F("Dr.-Frick-Str.");
        break;
    }
    case 82898:
    {
        returnValue = F("Dr.-Fricke-Weg");
        break;
    }
    case 82899:
    {
        returnValue = F("Dr.-Frieda-Duensing-Str.");
        break;
    }
    case 82900:
    {
        returnValue = F("Dr.-Friedl-Str.");
        break;
    }
    case 82901:
    {
        returnValue = F("Dr.-Friedrich- Höhenberger-Str.");
        break;
    }
    case 82902:
    {
        returnValue = F("Dr.-Friedrich-Arnold-Str.");
        break;
    }
    case 82903:
    {
        returnValue = F("Dr.-Friedrich-Baur-Str.");
        break;
    }
    case 82904:
    {
        returnValue = F("Dr.-Friedrich-Böttcher-Str.");
        break;
    }
    case 82905:
    {
        returnValue = F("Dr.-Friedrich-Drechsler-Str.");
        break;
    }
    case 82906:
    {
        returnValue = F("Dr.-Friedrich-Flick-Str.");
        break;
    }
    case 82907:
    {
        returnValue = F("Dr.-Friedrich-Glaser-Anlage");
        break;
    }
    case 82908:
    {
        returnValue = F("Dr.-Friedrich-Haass-Str.");
        break;
    }
    case 82909:
    {
        returnValue = F("Dr.-Friedrich-Hecker-Str.");
        break;
    }
    case 82910:
    {
        returnValue = F("Dr.-Friedrich-Hörter-Str.");
        break;
    }
    case 82911:
    {
        returnValue = F("Dr.-Friedrich-Kirchhoff-Str.");
        break;
    }
    case 82912:
    {
        returnValue = F("Dr.-Friedrich-Kuhn-Weg");
        break;
    }
    case 82913:
    {
        returnValue = F("Dr.-Friedrich-Neiß-Str.");
        break;
    }
    case 82914:
    {
        returnValue = F("Dr.-Friedrich-Schadeberg-Str.");
        break;
    }
    case 82915:
    {
        returnValue = F("Dr.-Friedrich-Schmidtmann-Str.");
        break;
    }
    case 82916:
    {
        returnValue = F("Dr.-Friedrich-Schmitt-Str.");
        break;
    }
    case 82917:
    {
        returnValue = F("Dr.-Friedrich-Schwanecke-Str.");
        break;
    }
    case 82918:
    {
        returnValue = F("Dr.-Friedrich-Stein-Str.");
        break;
    }
    case 82919:
    {
        returnValue = F("Dr.-Friedrich-Steiner-Str.");
        break;
    }
    case 82920:
    {
        returnValue = F("Dr.-Friedrich-Uhde-Str.");
        break;
    }
    case 82921:
    {
        returnValue = F("Dr.-Friedrich-Wegner-Str.");
        break;
    }
    case 82922:
    {
        returnValue = F("Dr.-Friedrich-Werner-Platz");
        break;
    }
    case 82923:
    {
        returnValue = F("Dr.-Friedrich-Wolf-Str.");
        break;
    }
    case 82924:
    {
        returnValue = F("Dr.-Friedrichs-Höhe");
        break;
    }
    case 82925:
    {
        returnValue = F("Dr.-Friedrichs-Ring");
        break;
    }
    case 82926:
    {
        returnValue = F("Dr.-Friedrichs-Str.");
        break;
    }
    case 82927:
    {
        returnValue = F("Dr.-Friton-Str.");
        break;
    }
    case 82928:
    {
        returnValue = F("Dr.-Fritz-Baas-Weg");
        break;
    }
    case 82929:
    {
        returnValue = F("Dr.-Fritz-Blume-Weg");
        break;
    }
    case 82930:
    {
        returnValue = F("Dr.-Fritz-Bockius-Str.");
        break;
    }
    case 82931:
    {
        returnValue = F("Dr.-Fritz-Ebbert-Str.");
        break;
    }
    case 82932:
    {
        returnValue = F("Dr.-Fritz-Eidt-Str.");
        break;
    }
    case 82933:
    {
        returnValue = F("Dr.-Fritz-Gontermann-Str.");
        break;
    }
    case 82934:
    {
        returnValue = F("Dr.-Fritz-Kalkoff-Str.");
        break;
    }
    case 82935:
    {
        returnValue = F("Dr.-Fritz-Kempfler-Str.");
        break;
    }
    case 82936:
    {
        returnValue = F("Dr.-Fritz-Loew-Str.");
        break;
    }
    case 82937:
    {
        returnValue = F("Dr.-Fritz-Lohmüller-Str.");
        break;
    }
    case 82938:
    {
        returnValue = F("Dr.-Fritz-Meyer-Weg");
        break;
    }
    case 82939:
    {
        returnValue = F("Dr.-Fritz-Opel-Platz");
        break;
    }
    case 82940:
    {
        returnValue = F("Dr.-Fritz-Pirkl-Str.");
        break;
    }
    case 82941:
    {
        returnValue = F("Dr.-Fritz-Sturm-Str.");
        break;
    }
    case 82942:
    {
        returnValue = F("Dr.-Fritz-Textor-Ring");
        break;
    }
    case 82943:
    {
        returnValue = F("Dr.-Fritz-Usinger-Platz");
        break;
    }
    case 82944:
    {
        returnValue = F("Dr.-Fritz-Wiede-Str.");
        break;
    }
    case 82945:
    {
        returnValue = F("Dr.-Fritz-Wilhelm-Str.");
        break;
    }
    case 82946:
    {
        returnValue = F("Dr.-Fritz-Zimmermann-Str.");
        break;
    }
    case 82947:
    {
        returnValue = F("Dr.-Fröhlich-Str.");
        break;
    }
    case 82948:
    {
        returnValue = F("Dr.-Frössel-Allee");
        break;
    }
    case 82949:
    {
        returnValue = F("Dr.-Fuchs-Str.");
        break;
    }
    case 82950:
    {
        returnValue = F("Dr.-Fuchsberger-Str.");
        break;
    }
    case 82951:
    {
        returnValue = F("Dr.-Fuckel-Str.");
        break;
    }
    case 82952:
    {
        returnValue = F("Dr.-Futterer-Str.");
        break;
    }
    case 82953:
    {
        returnValue = F("Dr.-Föppl-Str.");
        break;
    }
    case 82954:
    {
        returnValue = F("Dr.-Förster-Str.");
        break;
    }
    case 82955:
    {
        returnValue = F("Dr.-Förtsch-Platz");
        break;
    }
    case 82956:
    {
        returnValue = F("Dr.-Förtsch-Str.");
        break;
    }
    case 82957:
    {
        returnValue = F("Dr.-G.-Barthels-Str.");
        break;
    }
    case 82958:
    {
        returnValue = F("Dr.-Gabert-Weg");
        break;
    }
    case 82959:
    {
        returnValue = F("Dr.-Ganther-Str.");
        break;
    }
    case 82960:
    {
        returnValue = F("Dr.-Gartenhof-Str.");
        break;
    }
    case 82961:
    {
        returnValue = F("Dr.-Gaugele-Str.");
        break;
    }
    case 82962:
    {
        returnValue = F("Dr.-Gebauer-Str.");
        break;
    }
    case 82963:
    {
        returnValue = F("Dr.-Gebhard-Str.");
        break;
    }
    case 82964:
    {
        returnValue = F("Dr.-Gebhardt-Steuer-Str.");
        break;
    }
    case 82965:
    {
        returnValue = F("Dr.-Gebhardt-Str.");
        break;
    }
    case 82966:
    {
        returnValue = F("Dr.-Gebler-Platz");
        break;
    }
    case 82967:
    {
        returnValue = F("Dr.-Gebler-Str.");
        break;
    }
    case 82968:
    {
        returnValue = F("Dr.-Gehlmann-Str.");
        break;
    }
    case 82969:
    {
        returnValue = F("Dr.-Geiger-Str.");
        break;
    }
    case 82970:
    {
        returnValue = F("Dr.-Geiger-Weg");
        break;
    }
    case 82971:
    {
        returnValue = F("Dr.-Geisenheyner-Str.");
        break;
    }
    case 82972:
    {
        returnValue = F("Dr.-Geldmacher-Str.");
        break;
    }
    case 82973:
    {
        returnValue = F("Dr.-Gemeinhardt-Str.");
        break;
    }
    case 82974:
    {
        returnValue = F("Dr.-Gemmert-Str.");
        break;
    }
    case 82975:
    {
        returnValue = F("Dr.-Gengler-Str.");
        break;
    }
    case 82976:
    {
        returnValue = F("Dr.-Georg-Benjamin-Str.");
        break;
    }
    case 82977:
    {
        returnValue = F("Dr.-Georg-Betz-Str.");
        break;
    }
    case 82978:
    {
        returnValue = F("Dr.-Georg-Brömser-Str.");
        break;
    }
    case 82979:
    {
        returnValue = F("Dr.-Georg-Dassler-Str.");
        break;
    }
    case 82980:
    {
        returnValue = F("Dr.-Georg-Dittmar-Str.");
        break;
    }
    case 82981:
    {
        returnValue = F("Dr.-Georg-Durst-Str.");
        break;
    }
    case 82982:
    {
        returnValue = F("Dr.-Georg-Eberlein-Weg");
        break;
    }
    case 82983:
    {
        returnValue = F("Dr.-Georg-Feuerer-Str.");
        break;
    }
    case 82984:
    {
        returnValue = F("Dr.-Georg-Fischer-Str.");
        break;
    }
    case 82985:
    {
        returnValue = F("Dr.-Georg-Fuchs-Str.");
        break;
    }
    case 82986:
    {
        returnValue = F("Dr.-Georg-Göckel-Weg");
        break;
    }
    case 82987:
    {
        returnValue = F("Dr.-Georg-Hacker-Str.");
        break;
    }
    case 82988:
    {
        returnValue = F("Dr.-Georg-Heeger-Allee");
        break;
    }
    case 82989:
    {
        returnValue = F("Dr.-Georg-Heim-Allee");
        break;
    }
    case 82990:
    {
        returnValue = F("Dr.-Georg-Klinkhammer-Weg");
        break;
    }
    case 82991:
    {
        returnValue = F("Dr.-Georg-Klitta-Str.");
        break;
    }
    case 82992:
    {
        returnValue = F("Dr.-Georg-Koch-Str.");
        break;
    }
    case 82993:
    {
        returnValue = F("Dr.-Georg-Kohnert-Str.");
        break;
    }
    case 82994:
    {
        returnValue = F("Dr.-Georg-Meier-Str.");
        break;
    }
    case 82995:
    {
        returnValue = F("Dr.-Georg-Möller-Str.");
        break;
    }
    case 82996:
    {
        returnValue = F("Dr.-Georg-Priehäußer-Str.");
        break;
    }
    case 82997:
    {
        returnValue = F("Dr.-Georg-Schaeffler-Str.");
        break;
    }
    case 82998:
    {
        returnValue = F("Dr.-Georg-Schierghofer-Weg");
        break;
    }
    case 82999:
    {
        returnValue = F("Dr.-Georg-Schäfer-Str.");
        break;
    }
    case 83000:
    {
        returnValue = F("Dr.-Georg-Simnacher-Ring");
        break;
    }
    case 83001:
    {
        returnValue = F("Dr.-Georg-Stauber-Str.");
        break;
    }
    case 83002:
    {
        returnValue = F("Dr.-Georg-Teichtweier-Str.");
        break;
    }
    case 83003:
    {
        returnValue = F("Dr.-Georg-Thamer-Str.");
        break;
    }
    case 83004:
    {
        returnValue = F("Dr.-Georg-Volk-Weg");
        break;
    }
    case 83005:
    {
        returnValue = F("Dr.-Georg-Völkl-Str.");
        break;
    }
    case 83006:
    {
        returnValue = F("Dr.-Geppert-Str.");
        break;
    }
    case 83007:
    {
        returnValue = F("Dr.-Gerbl-Str.");
        break;
    }
    case 83008:
    {
        returnValue = F("Dr.-Gerd-Jakop-Weg");
        break;
    }
    case 83009:
    {
        returnValue = F("Dr.-Gerhard-Hasse-Str.");
        break;
    }
    case 83010:
    {
        returnValue = F("Dr.-Gerhard-Muhs-Str.");
        break;
    }
    case 83011:
    {
        returnValue = F("Dr.-Gerhard-Petschelt-Brücke");
        break;
    }
    case 83012:
    {
        returnValue = F("Dr.-Gerhard-Pusch-Str.");
        break;
    }
    case 83013:
    {
        returnValue = F("Dr.-Gerhard-Rüdiger-Str.");
        break;
    }
    case 83014:
    {
        returnValue = F("Dr.-Gerlich-Str.");
        break;
    }
    case 83015:
    {
        returnValue = F("Dr.-Gertrud-Otto-Str.");
        break;
    }
    case 83016:
    {
        returnValue = F("Dr.-Giglinger-Str.");
        break;
    }
    case 83017:
    {
        returnValue = F("Dr.-Gilbert-Weg");
        break;
    }
    case 83018:
    {
        returnValue = F("Dr.-Gilles-Str.");
        break;
    }
    case 83019:
    {
        returnValue = F("Dr.-Gillitzer-Str.");
        break;
    }
    case 83020:
    {
        returnValue = F("Dr.-Gillwald-Höhe");
        break;
    }
    case 83021:
    {
        returnValue = F("Dr.-Gisela-Thews-Platz");
        break;
    }
    case 83022:
    {
        returnValue = F("Dr.-Glitsch-Str.");
        break;
    }
    case 83023:
    {
        returnValue = F("Dr.-Glock-Str.");
        break;
    }
    case 83024:
    {
        returnValue = F("Dr.-Glücksmann-Str.");
        break;
    }
    case 83025:
    {
        returnValue = F("Dr.-Gnädinger-Str.");
        break;
    }
    case 83026:
    {
        returnValue = F("Dr.-Goerdeler-Str.");
        break;
    }
    case 83027:
    {
        returnValue = F("Dr.-Goldenbogen-Str.");
        break;
    }
    case 83028:
    {
        returnValue = F("Dr.-Goll-Str.");
        break;
    }
    case 83029:
    {
        returnValue = F("Dr.-Golm-Str.");
        break;
    }
    case 83030:
    {
        returnValue = F("Dr.-Gottfried-Cremer-Allee");
        break;
    }
    case 83031:
    {
        returnValue = F("Dr.-Gotthardt-Str.");
        break;
    }
    case 83032:
    {
        returnValue = F("Dr.-Gotthilf-Näher-Str.");
        break;
    }
    case 83033:
    {
        returnValue = F("Dr.-Gotthilf-Schenkel-Weg");
        break;
    }
    case 83034:
    {
        returnValue = F("Dr.-Grabmann-Str.");
        break;
    }
    case 83035:
    {
        returnValue = F("Dr.-Graef-Str.");
        break;
    }
    case 83036:
    {
        returnValue = F("Dr.-Graf-Str.");
        break;
    }
    case 83037:
    {
        returnValue = F("Dr.-Grandel-Str.");
        break;
    }
    case 83038:
    {
        returnValue = F("Dr.-Grashey-Str.");
        break;
    }
    case 83039:
    {
        returnValue = F("Dr.-Grasso-Str.");
        break;
    }
    case 83040:
    {
        returnValue = F("Dr.-Gremmelsbacher-Str.");
        break;
    }
    case 83041:
    {
        returnValue = F("Dr.-Gretchen-Holle-Platz");
        break;
    }
    case 83042:
    {
        returnValue = F("Dr.-Greve-Str.");
        break;
    }
    case 83043:
    {
        returnValue = F("Dr.-Groddeck-Weg");
        break;
    }
    case 83044:
    {
        returnValue = F("Dr.-Grosz-Str.");
        break;
    }
    case 83045:
    {
        returnValue = F("Dr.-Grote-Weg");
        break;
    }
    case 83046:
    {
        returnValue = F("Dr.-Groß-Ring");
        break;
    }
    case 83047:
    {
        returnValue = F("Dr.-Groß-Str.");
        break;
    }
    case 83048:
    {
        returnValue = F("Dr.-Große-Wietfeld-Str.");
        break;
    }
    case 83049:
    {
        returnValue = F("Dr.-Großkopf-Str.");
        break;
    }
    case 83050:
    {
        returnValue = F("Dr.-Großmann-Str.");
        break;
    }
    case 83051:
    {
        returnValue = F("Dr.-Grundhöfer-Str.");
        break;
    }
    case 83052:
    {
        returnValue = F("Dr.-Grundler-Gaßl");
        break;
    }
    case 83053:
    {
        returnValue = F("Dr.-Grundler-Str.");
        break;
    }
    case 83054:
    {
        returnValue = F("Dr.-Gryll-Str.");
        break;
    }
    case 83055:
    {
        returnValue = F("Dr.-Gräßel-Str.");
        break;
    }
    case 83056:
    {
        returnValue = F("Dr.-Gräßmann-Str.");
        break;
    }
    case 83057:
    {
        returnValue = F("Dr.-Guischard-Str.");
        break;
    }
    case 83058:
    {
        returnValue = F("Dr.-Gulde-Weg");
        break;
    }
    case 83059:
    {
        returnValue = F("Dr.-Gustav-Frank-Str.");
        break;
    }
    case 83060:
    {
        returnValue = F("Dr.-Gustav-Heinemann-Str.");
        break;
    }
    case 83061:
    {
        returnValue = F("Dr.-Gustav-Hoch-Str.");
        break;
    }
    case 83062:
    {
        returnValue = F("Dr.-Gustav-Möhring-Str.");
        break;
    }
    case 83063:
    {
        returnValue = F("Dr.-Gustav-Nachtigal-Str.");
        break;
    }
    case 83064:
    {
        returnValue = F("Dr.-Gustav-Porsche-Weg");
        break;
    }
    case 83065:
    {
        returnValue = F("Dr.-Gustav-Rossbach-Str.");
        break;
    }
    case 83066:
    {
        returnValue = F("Dr.-Gustav-Schaeling-Weg");
        break;
    }
    case 83067:
    {
        returnValue = F("Dr.-Gustav-Schickedanz-Str.");
        break;
    }
    case 83068:
    {
        returnValue = F("Dr.-Gustav-Schöner-Weg");
        break;
    }
    case 83069:
    {
        returnValue = F("Dr.-Gustav-Thye-Str.");
        break;
    }
    case 83070:
    {
        returnValue = F("Dr.-Gutermann-Str.");
        break;
    }
    case 83071:
    {
        returnValue = F("Dr.-Guttenberg-Str.");
        break;
    }
    case 83072:
    {
        returnValue = F("Dr.-Gärtel-Weg");
        break;
    }
    case 83073:
    {
        returnValue = F("Dr.-Gördeler-Allee");
        break;
    }
    case 83074:
    {
        returnValue = F("Dr.-Göttinger-Str.");
        break;
    }
    case 83075:
    {
        returnValue = F("Dr.-Günter-Bodek-Str.");
        break;
    }
    case 83076:
    {
        returnValue = F("Dr.-Günter-Erckens-Weg");
        break;
    }
    case 83077:
    {
        returnValue = F("Dr.-Günter-Henle-Str.");
        break;
    }
    case 83078:
    {
        returnValue = F("Dr.-Günther-Deilmann-Str.");
        break;
    }
    case 83079:
    {
        returnValue = F("Dr.-Günther-Winkelmann-Weg");
        break;
    }
    case 83080:
    {
        returnValue = F("Dr.-Haas-Gasse");
        break;
    }
    case 83081:
    {
        returnValue = F("Dr.-Haas-Str.");
        break;
    }
    case 83082:
    {
        returnValue = F("Dr.-Haberer-Str.");
        break;
    }
    case 83083:
    {
        returnValue = F("Dr.-Haberl-Str.");
        break;
    }
    case 83084:
    {
        returnValue = F("Dr.-Habicht-Str.");
        break;
    }
    case 83085:
    {
        returnValue = F("Dr.-Haenert-Weg");
        break;
    }
    case 83086:
    {
        returnValue = F("Dr.-Hahn-Str.");
        break;
    }
    case 83087:
    {
        returnValue = F("Dr.-Halbsguth-Str.");
        break;
    }
    case 83088:
    {
        returnValue = F("Dr.-Hallauer-Str.");
        break;
    }
    case 83089:
    {
        returnValue = F("Dr.-Hanauer-Str.");
        break;
    }
    case 83090:
    {
        returnValue = F("Dr.-Hans-Anton-Str.");
        break;
    }
    case 83091:
    {
        returnValue = F("Dr.-Hans-Berger-Str.");
        break;
    }
    case 83092:
    {
        returnValue = F("Dr.-Hans-Bredow-Str.");
        break;
    }
    case 83093:
    {
        returnValue = F("Dr.-Hans-Böckler-Platz");
        break;
    }
    case 83094:
    {
        returnValue = F("Dr.-Hans-Böckler-Str.");
        break;
    }
    case 83095:
    {
        returnValue = F("Dr.-Hans-Ehard-Str.");
        break;
    }
    case 83096:
    {
        returnValue = F("Dr.-Hans-Eisenmann-Str.");
        break;
    }
    case 83097:
    {
        returnValue = F("Dr.-Hans-Grabke-Str.");
        break;
    }
    case 83098:
    {
        returnValue = F("Dr.-Hans-Güthlein-Weg");
        break;
    }
    case 83099:
    {
        returnValue = F("Dr.-Hans-Hoch-Str.");
        break;
    }
    case 83100:
    {
        returnValue = F("Dr.-Hans-Hoffmann-Str.");
        break;
    }
    case 83101:
    {
        returnValue = F("Dr.-Hans-Hutter-Str.");
        break;
    }
    case 83102:
    {
        returnValue = F("Dr.-Hans-Jordan-Str.");
        break;
    }
    case 83103:
    {
        returnValue = F("Dr.-Hans-Kapfinger-Str.");
        break;
    }
    case 83104:
    {
        returnValue = F("Dr.-Hans-Karl-Fischer-Str.");
        break;
    }
    case 83105:
    {
        returnValue = F("Dr.-Hans-Kentmann-Weg");
        break;
    }
    case 83106:
    {
        returnValue = F("Dr.-Hans-Kluck-Str.");
        break;
    }
    case 83107:
    {
        returnValue = F("Dr.-Hans-Kudlich-Str.");
        break;
    }
    case 83108:
    {
        returnValue = F("Dr.-Hans-Liebherr-Str.");
        break;
    }
    case 83109:
    {
        returnValue = F("Dr.-Hans-Loch-Str.");
        break;
    }
    case 83110:
    {
        returnValue = F("Dr.-Hans-Müller-Ring");
        break;
    }
    case 83111:
    {
        returnValue = F("Dr.-Hans-Neubauer-Str.");
        break;
    }
    case 83112:
    {
        returnValue = F("Dr.-Hans-Pinzl-Str.");
        break;
    }
    case 83113:
    {
        returnValue = F("Dr.-Hans-Popp-Str.");
        break;
    }
    case 83114:
    {
        returnValue = F("Dr.-Hans-Raum-Str.");
        break;
    }
    case 83115:
    {
        returnValue = F("Dr.-Hans-Raß-Str.");
        break;
    }
    case 83116:
    {
        returnValue = F("Dr.-Hans-Reichold-Weg");
        break;
    }
    case 83117:
    {
        returnValue = F("Dr.-Hans-Richter-Str.");
        break;
    }
    case 83118:
    {
        returnValue = F("Dr.-Hans-Schack-Str.");
        break;
    }
    case 83119:
    {
        returnValue = F("Dr.-Hans-Siebe-Str.");
        break;
    }
    case 83120:
    {
        returnValue = F("Dr.-Hans-Sitzmann-Str.");
        break;
    }
    case 83121:
    {
        returnValue = F("Dr.-Hans-Staub-Str.");
        break;
    }
    case 83122:
    {
        returnValue = F("Dr.-Hans-Stempel-Ring");
        break;
    }
    case 83123:
    {
        returnValue = F("Dr.-Hans-Vogel-Weg");
        break;
    }
    case 83124:
    {
        returnValue = F("Dr.-Hans-Vogt-Str.");
        break;
    }
    case 83125:
    {
        returnValue = F("Dr.-Hans-Wattler-Str.");
        break;
    }
    case 83126:
    {
        returnValue = F("Dr.-Hans-Wernscheid-Str.");
        break;
    }
    case 83127:
    {
        returnValue = F("Dr.-Hans-Wolf-Str.");
        break;
    }
    case 83128:
    {
        returnValue = F("Dr.-Hans-Zorn-Str.");
        break;
    }
    case 83129:
    {
        returnValue = F("Dr.-Hans-und-Paul-Riegel-Str.");
        break;
    }
    case 83130:
    {
        returnValue = F("Dr.-Harry-Wiegand-Str.");
        break;
    }
    case 83131:
    {
        returnValue = F("Dr.-Harster-Str.");
        break;
    }
    case 83132:
    {
        returnValue = F("Dr.-Hartlaub-Ring");
        break;
    }
    case 83133:
    {
        returnValue = F("Dr.-Hartwig-Str.");
        break;
    }
    case 83134:
    {
        returnValue = F("Dr.-Haselmann-Weg");
        break;
    }
    case 83135:
    {
        returnValue = F("Dr.-Haselmayr-Str.");
        break;
    }
    case 83136:
    {
        returnValue = F("Dr.-Hasse-Str.");
        break;
    }
    case 83137:
    {
        returnValue = F("Dr.-Hattemer-Str.");
        break;
    }
    case 83138:
    {
        returnValue = F("Dr.-Hau-Platz");
        break;
    }
    case 83139:
    {
        returnValue = F("Dr.-Hauber-Str.");
        break;
    }
    case 83140:
    {
        returnValue = F("Dr.-Hauer-Weg");
        break;
    }
    case 83141:
    {
        returnValue = F("Dr.-Haug-Str.");
        break;
    }
    case 83142:
    {
        returnValue = F("Dr.-Hauner-Str.");
        break;
    }
    case 83143:
    {
        returnValue = F("Dr.-Haupt-Weg");
        break;
    }
    case 83144:
    {
        returnValue = F("Dr.-Hauschild-Weg");
        break;
    }
    case 83145:
    {
        returnValue = F("Dr.-Hausladen-Str.");
        break;
    }
    case 83146:
    {
        returnValue = F("Dr.-Hausmann-Str.");
        break;
    }
    case 83147:
    {
        returnValue = F("Dr.-Haußner-Weg");
        break;
    }
    case 83148:
    {
        returnValue = F("Dr.-Hayler-Weg");
        break;
    }
    case 83149:
    {
        returnValue = F("Dr.-Heffner-Str.");
        break;
    }
    case 83150:
    {
        returnValue = F("Dr.-Hefner-Str.");
        break;
    }
    case 83151:
    {
        returnValue = F("Dr.-Heger-Str.");
        break;
    }
    case 83152:
    {
        returnValue = F("Dr.-Heggen-Str.");
        break;
    }
    case 83153:
    {
        returnValue = F("Dr.-Heim-Str.");
        break;
    }
    case 83154:
    {
        returnValue = F("Dr.-Heim-Weg");
        break;
    }
    case 83155:
    {
        returnValue = F("Dr.-Heinen-Str.");
        break;
    }
    case 83156:
    {
        returnValue = F("Dr.-Heinrich-Byk-Str.");
        break;
    }
    case 83157:
    {
        returnValue = F("Dr.-Heinrich-Dambmann-Str.");
        break;
    }
    case 83158:
    {
        returnValue = F("Dr.-Heinrich-Dittrich-Allee");
        break;
    }
    case 83159:
    {
        returnValue = F("Dr.-Heinrich-Eidam-Platz");
        break;
    }
    case 83160:
    {
        returnValue = F("Dr.-Heinrich-F.-Paulitzky-Str.");
        break;
    }
    case 83161:
    {
        returnValue = F("Dr.-Heinrich-Fix-Weg");
        break;
    }
    case 83162:
    {
        returnValue = F("Dr.-Heinrich-Greiner-Str.");
        break;
    }
    case 83163:
    {
        returnValue = F("Dr.-Heinrich-Hahn-Str.");
        break;
    }
    case 83164:
    {
        returnValue = F("Dr.-Heinrich-Hartlieb-Str.");
        break;
    }
    case 83165:
    {
        returnValue = F("Dr.-Heinrich-Hohenner-Str.");
        break;
    }
    case 83166:
    {
        returnValue = F("Dr.-Heinrich-Jasper-Platz");
        break;
    }
    case 83167:
    {
        returnValue = F("Dr.-Heinrich-Jasper-Str.");
        break;
    }
    case 83168:
    {
        returnValue = F("Dr.-Heinrich-Krone-Str.");
        break;
    }
    case 83169:
    {
        returnValue = F("Dr.-Heinrich-Köhler-Str.");
        break;
    }
    case 83170:
    {
        returnValue = F("Dr.-Heinrich-Lohmann-Str.");
        break;
    }
    case 83171:
    {
        returnValue = F("Dr.-Heinrich-Marzell-Str.");
        break;
    }
    case 83172:
    {
        returnValue = F("Dr.-Heinrich-Mohn-Str.");
        break;
    }
    case 83173:
    {
        returnValue = F("Dr.-Heinrich-Stromer-Str.");
        break;
    }
    case 83174:
    {
        returnValue = F("Dr.-Heinrich-Sturm-Str.");
        break;
    }
    case 83175:
    {
        returnValue = F("Dr.-Heinrich-Winter-Str.");
        break;
    }
    case 83176:
    {
        returnValue = F("Dr.-Heinrich-Wunderlich-Str.");
        break;
    }
    case 83177:
    {
        returnValue = F("Dr.-Heinrich-von-Brunck-Str.");
        break;
    }
    case 83178:
    {
        returnValue = F("Dr.-Heinrich-von-Wolffersdorff-Str.");
        break;
    }
    case 83179:
    {
        returnValue = F("Dr.-Heinrichs-Str.");
        break;
    }
    case 83180:
    {
        returnValue = F("Dr.-Heinz-Fischer-Str.");
        break;
    }
    case 83181:
    {
        returnValue = F("Dr.-Heinz-Pfeiffer-Str.");
        break;
    }
    case 83182:
    {
        returnValue = F("Dr.-Heiß-Str.");
        break;
    }
    case 83183:
    {
        returnValue = F("Dr.-Held Weg");
        break;
    }
    case 83184:
    {
        returnValue = F("Dr.-Held-Str.");
        break;
    }
    case 83185:
    {
        returnValue = F("Dr.-Helene-Hoffmann-Str.");
        break;
    }
    case 83186:
    {
        returnValue = F("Dr.-Helene-Weber-Str.");
        break;
    }
    case 83187:
    {
        returnValue = F("Dr.-Helle-Gasse");
        break;
    }
    case 83188:
    {
        returnValue = F("Dr.-Helle-Str.");
        break;
    }
    case 83189:
    {
        returnValue = F("Dr.-Hellge-Str.");
        break;
    }
    case 83190:
    {
        returnValue = F("Dr.-Hellmich-Str.");
        break;
    }
    case 83191:
    {
        returnValue = F("Dr.-Hellrung-Str.");
        break;
    }
    case 83192:
    {
        returnValue = F("Dr.-Helming-Str.");
        break;
    }
    case 83193:
    {
        returnValue = F("Dr.-Helmut-Eckert-Str.");
        break;
    }
    case 83194:
    {
        returnValue = F("Dr.-Helmut-Junghans-Str.");
        break;
    }
    case 83195:
    {
        returnValue = F("Dr.-Helmut-Kohl-Str.");
        break;
    }
    case 83196:
    {
        returnValue = F("Dr.-Helmut-Pömsl-Str.");
        break;
    }
    case 83197:
    {
        returnValue = F("Dr.-Helmut-Ross-Weg");
        break;
    }
    case 83198:
    {
        returnValue = F("Dr.-Helmut-Schreyer-Str.");
        break;
    }
    case 83199:
    {
        returnValue = F("Dr.-Henkel-Str.");
        break;
    }
    case 83200:
    {
        returnValue = F("Dr.-Henrichs-Weg");
        break;
    }
    case 83201:
    {
        returnValue = F("Dr.-Henrichs-Weg (neu)");
        break;
    }
    case 83202:
    {
        returnValue = F("Dr.-Henry-Kissinger-Platz");
        break;
    }
    case 83203:
    {
        returnValue = F("Dr.-Henryk-Fenigstein-Weg");
        break;
    }
    case 83204:
    {
        returnValue = F("Dr.-Hepp-Str.");
        break;
    }
    case 83205:
    {
        returnValue = F("Dr.-Herbert-Augat-Weg");
        break;
    }
    case 83206:
    {
        returnValue = F("Dr.-Herbert-Eimert-Str.");
        break;
    }
    case 83207:
    {
        returnValue = F("Dr.-Herbert-Heim-Str.");
        break;
    }
    case 83208:
    {
        returnValue = F("Dr.-Herbert-Kienle-Str.");
        break;
    }
    case 83209:
    {
        returnValue = F("Dr.-Herbert-Quandt-Str.");
        break;
    }
    case 83210:
    {
        returnValue = F("Dr.-Herbert-Renner-Weg");
        break;
    }
    case 83211:
    {
        returnValue = F("Dr.-Herbold-Str.");
        break;
    }
    case 83212:
    {
        returnValue = F("Dr.-Hering-Platz");
        break;
    }
    case 83213:
    {
        returnValue = F("Dr.-Herman-Gretsch-Str.");
        break;
    }
    case 83214:
    {
        returnValue = F("Dr.-Hermann-Aschenbach-Weg");
        break;
    }
    case 83215:
    {
        returnValue = F("Dr.-Hermann-Bizer-Str.");
        break;
    }
    case 83216:
    {
        returnValue = F("Dr.-Hermann-Boschheidgen-Str.");
        break;
    }
    case 83217:
    {
        returnValue = F("Dr.-Hermann-Braun-Str.");
        break;
    }
    case 83218:
    {
        returnValue = F("Dr.-Hermann-Brunn-Str.");
        break;
    }
    case 83219:
    {
        returnValue = F("Dr.-Hermann-Bähr-Str.");
        break;
    }
    case 83220:
    {
        returnValue = F("Dr.-Hermann-Dieden-Str.");
        break;
    }
    case 83221:
    {
        returnValue = F("Dr.-Hermann-Ehlers-Str.");
        break;
    }
    case 83222:
    {
        returnValue = F("Dr.-Hermann-Engel-Str.");
        break;
    }
    case 83223:
    {
        returnValue = F("Dr.-Hermann-Fleck-Allee");
        break;
    }
    case 83224:
    {
        returnValue = F("Dr.-Hermann-Gellner-Str.");
        break;
    }
    case 83225:
    {
        returnValue = F("Dr.-Hermann-Grochtmann-Str.");
        break;
    }
    case 83226:
    {
        returnValue = F("Dr.-Hermann-Hahn-Str.");
        break;
    }
    case 83227:
    {
        returnValue = F("Dr.-Hermann-Huttel-Str.");
        break;
    }
    case 83228:
    {
        returnValue = F("Dr.-Hermann-Iseke-Str.");
        break;
    }
    case 83229:
    {
        returnValue = F("Dr.-Hermann-Klumpp-Str.");
        break;
    }
    case 83230:
    {
        returnValue = F("Dr.-Hermann-Koerber-Str.");
        break;
    }
    case 83231:
    {
        returnValue = F("Dr.-Hermann-Krause-Str.");
        break;
    }
    case 83232:
    {
        returnValue = F("Dr.-Hermann-Kronseder-Str.");
        break;
    }
    case 83233:
    {
        returnValue = F("Dr.-Hermann-Künanz-Str.");
        break;
    }
    case 83234:
    {
        returnValue = F("Dr.-Hermann-Lagally-Str.");
        break;
    }
    case 83235:
    {
        returnValue = F("Dr.-Hermann-Lindrath-Str.");
        break;
    }
    case 83236:
    {
        returnValue = F("Dr.-Hermann-Ludewig-Ring");
        break;
    }
    case 83237:
    {
        returnValue = F("Dr.-Hermann-Marcks-Str.");
        break;
    }
    case 83238:
    {
        returnValue = F("Dr.-Hermann-Meyer-Str.");
        break;
    }
    case 83239:
    {
        returnValue = F("Dr.-Hermann-Müller-Str.");
        break;
    }
    case 83240:
    {
        returnValue = F("Dr.-Hermann-Plettrichs-Weg");
        break;
    }
    case 83241:
    {
        returnValue = F("Dr.-Hermann-Schleenbecker-Str.");
        break;
    }
    case 83242:
    {
        returnValue = F("Dr.-Hermann-Siemer-Str.");
        break;
    }
    case 83243:
    {
        returnValue = F("Dr.-Hermann-Str.");
        break;
    }
    case 83244:
    {
        returnValue = F("Dr.-Hermann-Wille-Str.");
        break;
    }
    case 83245:
    {
        returnValue = F("Dr.-Herrmann-Kronseder-Str.");
        break;
    }
    case 83246:
    {
        returnValue = F("Dr.-Herrmann-Neubauer-Ring");
        break;
    }
    case 83247:
    {
        returnValue = F("Dr.-Herrmann-Schwarz-Str.");
        break;
    }
    case 83248:
    {
        returnValue = F("Dr.-Herrmann-Str.");
        break;
    }
    case 83249:
    {
        returnValue = F("Dr.-Hertel-Str.");
        break;
    }
    case 83250:
    {
        returnValue = F("Dr.-Herterich-Allee");
        break;
    }
    case 83251:
    {
        returnValue = F("Dr.-Herzfeld-Str.");
        break;
    }
    case 83252:
    {
        returnValue = F("Dr.-Hesse-Weg");
        break;
    }
    case 83253:
    {
        returnValue = F("Dr.-Hesseken-Ring");
        break;
    }
    case 83254:
    {
        returnValue = F("Dr.-Heumann-Weg");
        break;
    }
    case 83255:
    {
        returnValue = F("Dr.-Heuwieser-Str.");
        break;
    }
    case 83256:
    {
        returnValue = F("Dr.-Hezner-Str.");
        break;
    }
    case 83257:
    {
        returnValue = F("Dr.-Hiemer-Str.");
        break;
    }
    case 83258:
    {
        returnValue = F("Dr.-Hiereth-Str.");
        break;
    }
    case 83259:
    {
        returnValue = F("Dr.-Hildegard-Basting-Str.");
        break;
    }
    case 83260:
    {
        returnValue = F("Dr.-Hillengaß-Str.");
        break;
    }
    case 83261:
    {
        returnValue = F("Dr.-Hiller-Str.");
        break;
    }
    case 83262:
    {
        returnValue = F("Dr.-Hinteler-Str.");
        break;
    }
    case 83263:
    {
        returnValue = F("Dr.-Hochheimer-Str.");
        break;
    }
    case 83264:
    {
        returnValue = F("Dr.-Hockertz-Str.");
        break;
    }
    case 83265:
    {
        returnValue = F("Dr.-Hofele-Str.");
        break;
    }
    case 83266:
    {
        returnValue = F("Dr.-Hoffmann-Platz");
        break;
    }
    case 83267:
    {
        returnValue = F("Dr.-Hoffmann-Str.");
        break;
    }
    case 83268:
    {
        returnValue = F("Dr.-Hoffschulte-Weg");
        break;
    }
    case 83269:
    {
        returnValue = F("Dr.-Hoffsümmer-Str.");
        break;
    }
    case 83270:
    {
        returnValue = F("Dr.-Hofmann-Str.");
        break;
    }
    case 83271:
    {
        returnValue = F("Dr.-Hoh-Str.");
        break;
    }
    case 83272:
    {
        returnValue = F("Dr.-Holzner-Weg");
        break;
    }
    case 83273:
    {
        returnValue = F("Dr.-Hopmann-Str.");
        break;
    }
    case 83274:
    {
        returnValue = F("Dr.-Horst-Frese-Str.");
        break;
    }
    case 83275:
    {
        returnValue = F("Dr.-Horst-Rocholl-Str.");
        break;
    }
    case 83276:
    {
        returnValue = F("Dr.-Horst-Schmidt-Str.");
        break;
    }
    case 83277:
    {
        returnValue = F("Dr.-Horstmann-Str.");
        break;
    }
    case 83278:
    {
        returnValue = F("Dr.-Huber-Str.");
        break;
    }
    case 83279:
    {
        returnValue = F("Dr.-Hubert-Eisinger-Weg");
        break;
    }
    case 83280:
    {
        returnValue = F("Dr.-Hubert-Lesaar-Str.");
        break;
    }
    case 83281:
    {
        returnValue = F("Dr.-Hubert-Müller-Weg");
        break;
    }
    case 83282:
    {
        returnValue = F("Dr.-Hudler-Str.");
        break;
    }
    case 83283:
    {
        returnValue = F("Dr.-Hufeland-Str.");
        break;
    }
    case 83284:
    {
        returnValue = F("Dr.-Hugo-Bischoff-Str.");
        break;
    }
    case 83285:
    {
        returnValue = F("Dr.-Hugo-Eckener-Weg");
        break;
    }
    case 83286:
    {
        returnValue = F("Dr.-Hugo-Mönnig-Str.");
        break;
    }
    case 83287:
    {
        returnValue = F("Dr.-Hummel-Str.");
        break;
    }
    case 83288:
    {
        returnValue = F("Dr.-Humpert-Str.");
        break;
    }
    case 83289:
    {
        returnValue = F("Dr.-Hundt-Str.");
        break;
    }
    case 83290:
    {
        returnValue = F("Dr.-Hutzelmann-Ring");
        break;
    }
    case 83291:
    {
        returnValue = F("Dr.-Häberle-Str.");
        break;
    }
    case 83292:
    {
        returnValue = F("Dr.-Härting-Str.");
        break;
    }
    case 83293:
    {
        returnValue = F("Dr.-Höcht-Str.");
        break;
    }
    case 83294:
    {
        returnValue = F("Dr.-Höffling-Str.");
        break;
    }
    case 83295:
    {
        returnValue = F("Dr.-Höfling-Str.");
        break;
    }
    case 83296:
    {
        returnValue = F("Dr.-Höfling-Weg");
        break;
    }
    case 83297:
    {
        returnValue = F("Dr.-Höhle-Str.");
        break;
    }
    case 83298:
    {
        returnValue = F("Dr.-Hörmann-Str.");
        break;
    }
    case 83299:
    {
        returnValue = F("Dr.-Hövener-Str.");
        break;
    }
    case 83300:
    {
        returnValue = F("Dr.-Hübener-Str.");
        break;
    }
    case 83301:
    {
        returnValue = F("Dr.-Hübsch-Str.");
        break;
    }
    case 83302:
    {
        returnValue = F("Dr.-Hümmer-Str.");
        break;
    }
    case 83303:
    {
        returnValue = F("Dr.-Ida-Noddack-Str.");
        break;
    }
    case 83304:
    {
        returnValue = F("Dr.-Illert-Str.");
        break;
    }
    case 83305:
    {
        returnValue = F("Dr.-Ilsabe-Gestering-Str.");
        break;
    }
    case 83306:
    {
        returnValue = F("Dr.-Imhof-Str.");
        break;
    }
    case 83307:
    {
        returnValue = F("Dr.-Irmgard-Ackermann-Str.");
        break;
    }
    case 83308:
    {
        returnValue = F("Dr.-Isbruch-Str.");
        break;
    }
    case 83309:
    {
        returnValue = F("Dr.-Isidor-Meyerhoff-Str.");
        break;
    }
    case 83310:
    {
        returnValue = F("Dr.-Jack-Schiefer-Str.");
        break;
    }
    case 83311:
    {
        returnValue = F("Dr.-Jacobi-Weg");
        break;
    }
    case 83312:
    {
        returnValue = F("Dr.-Jacobs-Str.");
        break;
    }
    case 83313:
    {
        returnValue = F("Dr.-Jaeckel-Str.");
        break;
    }
    case 83314:
    {
        returnValue = F("Dr.-Jahn-Str.");
        break;
    }
    case 83315:
    {
        returnValue = F("Dr.-Jakob-Berlinger-Weg");
        break;
    }
    case 83316:
    {
        returnValue = F("Dr.-Jakob-Hartmann-Str.");
        break;
    }
    case 83317:
    {
        returnValue = F("Dr.-Jakob-Hector-Str.");
        break;
    }
    case 83318:
    {
        returnValue = F("Dr.-Jakob-Herle-Str.");
        break;
    }
    case 83319:
    {
        returnValue = F("Dr.-Jakob-Löhr-Str.");
        break;
    }
    case 83320:
    {
        returnValue = F("Dr.-Jakob-Staudt-Str.");
        break;
    }
    case 83321:
    {
        returnValue = F("Dr.-Jakobs-Str.");
        break;
    }
    case 83322:
    {
        returnValue = F("Dr.-Jansen-Str.");
        break;
    }
    case 83323:
    {
        returnValue = F("Dr.-Jasper-Str.");
        break;
    }
    case 83324:
    {
        returnValue = F("Dr.-Jaufmann-Str.");
        break;
    }
    case 83325:
    {
        returnValue = F("Dr.-Jestädt-Platz");
        break;
    }
    case 83326:
    {
        returnValue = F("Dr.-Joh.-Peter-Frank-Str.");
        break;
    }
    case 83327:
    {
        returnValue = F("Dr.-Johann-Baptist-Kurz-Platz");
        break;
    }
    case 83328:
    {
        returnValue = F("Dr.-Johann-Friedrich-Röhr-Str.");
        break;
    }
    case 83329:
    {
        returnValue = F("Dr.-Johann-Götz-Str.");
        break;
    }
    case 83330:
    {
        returnValue = F("Dr.-Johann-Hans-Str.");
        break;
    }
    case 83331:
    {
        returnValue = F("Dr.-Johann-Maier-Str.");
        break;
    }
    case 83332:
    {
        returnValue = F("Dr.-Johann-Stark-Str.");
        break;
    }
    case 83333:
    {
        returnValue = F("Dr.-Johann-Stöhr-Str.");
        break;
    }
    case 83334:
    {
        returnValue = F("Dr.-Johannes-Alff-Str.");
        break;
    }
    case 83335:
    {
        returnValue = F("Dr.-Johannes-Heidenhain-Str.");
        break;
    }
    case 83336:
    {
        returnValue = F("Dr.-Johannes-Kohl-Str.");
        break;
    }
    case 83337:
    {
        returnValue = F("Dr.-Johannes-Ledroit-Str.");
        break;
    }
    case 83338:
    {
        returnValue = F("Dr.-Johannes-Löber-Str.");
        break;
    }
    case 83339:
    {
        returnValue = F("Dr.-Johannes-Robert-Becher-Str.");
        break;
    }
    case 83340:
    {
        returnValue = F("Dr.-Johannes-Scholz-Str.");
        break;
    }
    case 83341:
    {
        returnValue = F("Dr.-Johannes-Weiß-Str.");
        break;
    }
    case 83342:
    {
        returnValue = F("Dr.-Jordan-Str.");
        break;
    }
    case 83343:
    {
        returnValue = F("Dr.-Josef-Ammer-Str.");
        break;
    }
    case 83344:
    {
        returnValue = F("Dr.-Josef-Bulitta-Str.");
        break;
    }
    case 83345:
    {
        returnValue = F("Dr.-Josef-Fieger-Str.");
        break;
    }
    case 83346:
    {
        returnValue = F("Dr.-Josef-Fischer-Str.");
        break;
    }
    case 83347:
    {
        returnValue = F("Dr.-Josef-Gutmann-Str.");
        break;
    }
    case 83348:
    {
        returnValue = F("Dr.-Josef-Hastreiter-Str.");
        break;
    }
    case 83349:
    {
        returnValue = F("Dr.-Josef-Heimes-Str.");
        break;
    }
    case 83350:
    {
        returnValue = F("Dr.-Josef-Huber-Str.");
        break;
    }
    case 83351:
    {
        returnValue = F("Dr.-Josef-Keim-Str.");
        break;
    }
    case 83352:
    {
        returnValue = F("Dr.-Josef-Koch-Str.");
        break;
    }
    case 83353:
    {
        returnValue = F("Dr.-Josef-Lamby-Str.");
        break;
    }
    case 83354:
    {
        returnValue = F("Dr.-Josef-Müller-Str.");
        break;
    }
    case 83355:
    {
        returnValue = F("Dr.-Josef-Otto-Kolb-Str.");
        break;
    }
    case 83356:
    {
        returnValue = F("Dr.-Josef-Reichart-Weg");
        break;
    }
    case 83357:
    {
        returnValue = F("Dr.-Josef-Schinke-Str.");
        break;
    }
    case 83358:
    {
        returnValue = F("Dr.-Josef-Stockmann-Str.");
        break;
    }
    case 83359:
    {
        returnValue = F("Dr.-Josef-Tils-Str.");
        break;
    }
    case 83360:
    {
        returnValue = F("Dr.-Josef-Weigl-Str.");
        break;
    }
    case 83361:
    {
        returnValue = F("Dr.-Josef-Wirth-Str.");
        break;
    }
    case 83362:
    {
        returnValue = F("Dr.-Joseph-Herzfeld-Str.");
        break;
    }
    case 83363:
    {
        returnValue = F("Dr.-Joseph-Lechner-Str.");
        break;
    }
    case 83364:
    {
        returnValue = F("Dr.-Joseph-Vochezer-Weg");
        break;
    }
    case 83365:
    {
        returnValue = F("Dr.-Joseph-Vogtt-Gasse");
        break;
    }
    case 83366:
    {
        returnValue = F("Dr.-Jula-Dittmar-Weg");
        break;
    }
    case 83367:
    {
        returnValue = F("Dr.-Julius-Brecht-Weg");
        break;
    }
    case 83368:
    {
        returnValue = F("Dr.-Julius-Leber-Str.");
        break;
    }
    case 83369:
    {
        returnValue = F("Dr.-Julius-Levi-Str.");
        break;
    }
    case 83370:
    {
        returnValue = F("Dr.-Julius-Mayr-Str.");
        break;
    }
    case 83371:
    {
        returnValue = F("Dr.-Julius-Schmidt-Str.");
        break;
    }
    case 83372:
    {
        returnValue = F("Dr.-Julius-Siben-Str.");
        break;
    }
    case 83373:
    {
        returnValue = F("Dr.-Julius-Stinde-Str.");
        break;
    }
    case 83374:
    {
        returnValue = F("Dr.-Jungheinrich-Platz");
        break;
    }
    case 83375:
    {
        returnValue = F("Dr.-Jäger-Str.");
        break;
    }
    case 83376:
    {
        returnValue = F("Dr.-Jünemann-Str.");
        break;
    }
    case 83377:
    {
        returnValue = F("Dr.-Jürgen-Ulderup-Str.");
        break;
    }
    case 83378:
    {
        returnValue = F("Dr.-K.-E.-Zachariae-von-Lingenthal-Str.");
        break;
    }
    case 83379:
    {
        returnValue = F("Dr.-Kahlbaum-Allee");
        break;
    }
    case 83380:
    {
        returnValue = F("Dr.-Kahn-Str.");
        break;
    }
    case 83381:
    {
        returnValue = F("Dr.-Kahn-Weg");
        break;
    }
    case 83382:
    {
        returnValue = F("Dr.-Kallen-Str.");
        break;
    }
    case 83383:
    {
        returnValue = F("Dr.-Kanngießer-Weg");
        break;
    }
    case 83384:
    {
        returnValue = F("Dr.-Kanzler-Weg");
        break;
    }
    case 83385:
    {
        returnValue = F("Dr.-Karg-Str.");
        break;
    }
    case 83386:
    {
        returnValue = F("Dr.-Karkosch-Str.");
        break;
    }
    case 83387:
    {
        returnValue = F("Dr.-Karl-Anklam-Str.");
        break;
    }
    case 83388:
    {
        returnValue = F("Dr.-Karl-Aschoff-Str.");
        break;
    }
    case 83389:
    {
        returnValue = F("Dr.-Karl-Bartels-Weg");
        break;
    }
    case 83390:
    {
        returnValue = F("Dr.-Karl-Bausch-Str.");
        break;
    }
    case 83391:
    {
        returnValue = F("Dr.-Karl-Beyer-Str.");
        break;
    }
    case 83392:
    {
        returnValue = F("Dr.-Karl-Braun-Str.");
        break;
    }
    case 83393:
    {
        returnValue = F("Dr.-Karl-Carstens-Str.");
        break;
    }
    case 83394:
    {
        returnValue = F("Dr.-Karl-Eibl-Str.");
        break;
    }
    case 83395:
    {
        returnValue = F("Dr.-Karl-Fischer-Str.");
        break;
    }
    case 83396:
    {
        returnValue = F("Dr.-Karl-Flesch-Str.");
        break;
    }
    case 83397:
    {
        returnValue = F("Dr.-Karl-Forster-Str.");
        break;
    }
    case 83398:
    {
        returnValue = F("Dr.-Karl-Fuchs-Str.");
        break;
    }
    case 83399:
    {
        returnValue = F("Dr.-Karl-Gelbke-Str.");
        break;
    }
    case 83400:
    {
        returnValue = F("Dr.-Karl-Grünewald-Str.");
        break;
    }
    case 83401:
    {
        returnValue = F("Dr.-Karl-Heinz-Muhr-Str.");
        break;
    }
    case 83402:
    {
        returnValue = F("Dr.-Karl-Hermann-May-Str.");
        break;
    }
    case 83403:
    {
        returnValue = F("Dr.-Karl-Hessel-Str.");
        break;
    }
    case 83404:
    {
        returnValue = F("Dr.-Karl-Hirschberg-Str.");
        break;
    }
    case 83405:
    {
        returnValue = F("Dr.-Karl-Kötzner-Str.");
        break;
    }
    case 83406:
    {
        returnValue = F("Dr.-Karl-Lappe-Str.");
        break;
    }
    case 83407:
    {
        returnValue = F("Dr.-Karl-Larsen-Weg");
        break;
    }
    case 83408:
    {
        returnValue = F("Dr.-Karl-Lenz-Str.");
        break;
    }
    case 83409:
    {
        returnValue = F("Dr.-Karl-Mahler-Str.");
        break;
    }
    case 83410:
    {
        returnValue = F("Dr.-Karl-Möller-Platz");
        break;
    }
    case 83411:
    {
        returnValue = F("Dr.-Karl-Rauch-Str.");
        break;
    }
    case 83412:
    {
        returnValue = F("Dr.-Karl-Reiß-Weg");
        break;
    }
    case 83413:
    {
        returnValue = F("Dr.-Karl-Sack-Str.");
        break;
    }
    case 83414:
    {
        returnValue = F("Dr.-Karl-Schramm-Str.");
        break;
    }
    case 83415:
    {
        returnValue = F("Dr.-Karl-Schuster-Str.");
        break;
    }
    case 83416:
    {
        returnValue = F("Dr.-Karl-Schwarze-Str.");
        break;
    }
    case 83417:
    {
        returnValue = F("Dr.-Karl-Senft-Str.");
        break;
    }
    case 83418:
    {
        returnValue = F("Dr.-Karl-Slevogt-Str.");
        break;
    }
    case 83419:
    {
        returnValue = F("Dr.-Karl-Stern-Str.");
        break;
    }
    case 83420:
    {
        returnValue = F("Dr.-Karl-Stingl-Str.");
        break;
    }
    case 83421:
    {
        returnValue = F("Dr.-Karl-Walz-Weg");
        break;
    }
    case 83422:
    {
        returnValue = F("Dr.-Karl-Wild-Str.");
        break;
    }
    case 83423:
    {
        returnValue = F("Dr.-Karl-Wolff-Str.");
        break;
    }
    case 83424:
    {
        returnValue = F("Dr.-Karlheinz-Spielmann-Str.");
        break;
    }
    case 83425:
    {
        returnValue = F("Dr.-Kaufmann-Str.");
        break;
    }
    case 83426:
    {
        returnValue = F("Dr.-Kayser-Str.");
        break;
    }
    case 83427:
    {
        returnValue = F("Dr.-Keller-Str.");
        break;
    }
    case 83428:
    {
        returnValue = F("Dr.-Kelp-Str.");
        break;
    }
    case 83429:
    {
        returnValue = F("Dr.-Kempf-Str.");
        break;
    }
    case 83430:
    {
        returnValue = F("Dr.-Kern-Gasse");
        break;
    }
    case 83431:
    {
        returnValue = F("Dr.-Kern-Str.");
        break;
    }
    case 83432:
    {
        returnValue = F("Dr.-Kersten-Weg");
        break;
    }
    case 83433:
    {
        returnValue = F("Dr.-Kessel-Str.");
        break;
    }
    case 83434:
    {
        returnValue = F("Dr.-Kessler-Weg");
        break;
    }
    case 83435:
    {
        returnValue = F("Dr.-Kiefl-Str.");
        break;
    }
    case 83436:
    {
        returnValue = F("Dr.-Kilian-Str.");
        break;
    }
    case 83437:
    {
        returnValue = F("Dr.-Kiliani-Weg");
        break;
    }
    case 83438:
    {
        returnValue = F("Dr.-Kimmel-Weg");
        break;
    }
    case 83439:
    {
        returnValue = F("Dr.-Kirbs-Str.");
        break;
    }
    case 83440:
    {
        returnValue = F("Dr.-Kirchheimer-Str.");
        break;
    }
    case 83441:
    {
        returnValue = F("Dr.-Kirschke-Weg");
        break;
    }
    case 83442:
    {
        returnValue = F("Dr.-Kitschen-Platz");
        break;
    }
    case 83443:
    {
        returnValue = F("Dr.-Kittler-Str.");
        break;
    }
    case 83444:
    {
        returnValue = F("Dr.-Kitz-Park");
        break;
    }
    case 83445:
    {
        returnValue = F("Dr.-Kitz-Str.");
        break;
    }
    case 83446:
    {
        returnValue = F("Dr.-Klass-Weg");
        break;
    }
    case 83447:
    {
        returnValue = F("Dr.-Klatte-Str.");
        break;
    }
    case 83448:
    {
        returnValue = F("Dr.-Klaus-Dieter-Wolff-Str.");
        break;
    }
    case 83449:
    {
        returnValue = F("Dr.-Klaus-Kopfermann-Weg");
        break;
    }
    case 83450:
    {
        returnValue = F("Dr.-Klaus-Leder-Weg");
        break;
    }
    case 83451:
    {
        returnValue = F("Dr.-Klausener-Str.");
        break;
    }
    case 83452:
    {
        returnValue = F("Dr.-Klausener-Weg");
        break;
    }
    case 83453:
    {
        returnValue = F("Dr.-Klein-Str.");
        break;
    }
    case 83454:
    {
        returnValue = F("Dr.-Kleinschmidt-Platz");
        break;
    }
    case 83455:
    {
        returnValue = F("Dr.-Kleinschmidt-Str.");
        break;
    }
    case 83456:
    {
        returnValue = F("Dr.-Kleinsorge-Str.");
        break;
    }
    case 83457:
    {
        returnValue = F("Dr.-Kleitner-Str.");
        break;
    }
    case 83458:
    {
        returnValue = F("Dr.-Klevinghaus-Str.");
        break;
    }
    case 83459:
    {
        returnValue = F("Dr.-Kliegl-Str.");
        break;
    }
    case 83460:
    {
        returnValue = F("Dr.-Klingenberg-Str.");
        break;
    }
    case 83461:
    {
        returnValue = F("Dr.-Klinghammer-Weg");
        break;
    }
    case 83462:
    {
        returnValue = F("Dr.-Klöpfel-Str.");
        break;
    }
    case 83463:
    {
        returnValue = F("Dr.-Knoll-Str.");
        break;
    }
    case 83464:
    {
        returnValue = F("Dr.-Koch-Str.");
        break;
    }
    case 83465:
    {
        returnValue = F("Dr.-Kock-am-Brink-Weg");
        break;
    }
    case 83466:
    {
        returnValue = F("Dr.-Koeppler-Str.");
        break;
    }
    case 83467:
    {
        returnValue = F("Dr.-Kohler-Str.");
        break;
    }
    case 83468:
    {
        returnValue = F("Dr.-Kohnle-Weg");
        break;
    }
    case 83469:
    {
        returnValue = F("Dr.-Kohnstamm-Weg");
        break;
    }
    case 83470:
    {
        returnValue = F("Dr.-Kollmann-Str.");
        break;
    }
    case 83471:
    {
        returnValue = F("Dr.-Komp-Str.");
        break;
    }
    case 83472:
    {
        returnValue = F("Dr.-Konrad-Adenauer-Anlage");
        break;
    }
    case 83473:
    {
        returnValue = F("Dr.-Konrad-Adenauer-Brücke");
        break;
    }
    case 83474:
    {
        returnValue = F("Dr.-Konrad-Adenauer-Ring");
        break;
    }
    case 83475:
    {
        returnValue = F("Dr.-Konrad-Adenauer-Ring/Riedpark");
        break;
    }
    case 83476:
    {
        returnValue = F("Dr.-Konrad-Adenauer-Str.");
        break;
    }
    case 83477:
    {
        returnValue = F("Dr.-Konrad-Baldauf-Str.");
        break;
    }
    case 83478:
    {
        returnValue = F("Dr.-Konrad-Fecher-Str.");
        break;
    }
    case 83479:
    {
        returnValue = F("Dr.-Konrad-Kirch-Str.");
        break;
    }
    case 83480:
    {
        returnValue = F("Dr.-Konrad-Martin-Str.");
        break;
    }
    case 83481:
    {
        returnValue = F("Dr.-Konrad-Pöhner-Str.");
        break;
    }
    case 83482:
    {
        returnValue = F("Dr.-Konrad-Weg");
        break;
    }
    case 83483:
    {
        returnValue = F("Dr.-Konstantin-Hank-Str.");
        break;
    }
    case 83484:
    {
        returnValue = F("Dr.-Kopp-Str.");
        break;
    }
    case 83485:
    {
        returnValue = F("Dr.-Koppen-Weg");
        break;
    }
    case 83486:
    {
        returnValue = F("Dr.-Kortüm-Str.");
        break;
    }
    case 83487:
    {
        returnValue = F("Dr.-Kosmowski-Str.");
        break;
    }
    case 83488:
    {
        returnValue = F("Dr.-Kotthaus-Str.");
        break;
    }
    case 83489:
    {
        returnValue = F("Dr.-Kottmann-Str.");
        break;
    }
    case 83490:
    {
        returnValue = F("Dr.-Kraft-Str.");
        break;
    }
    case 83491:
    {
        returnValue = F("Dr.-Kranefuß-Str.");
        break;
    }
    case 83492:
    {
        returnValue = F("Dr.-Kraus-Str.");
        break;
    }
    case 83493:
    {
        returnValue = F("Dr.-Krautheim-Weg");
        break;
    }
    case 83494:
    {
        returnValue = F("Dr.-Krauß-Str.");
        break;
    }
    case 83495:
    {
        returnValue = F("Dr.-Kremser-Str.");
        break;
    }
    case 83496:
    {
        returnValue = F("Dr.-Krismann-Str.");
        break;
    }
    case 83497:
    {
        returnValue = F("Dr.-Kron-Weg");
        break;
    }
    case 83498:
    {
        returnValue = F("Dr.-Kronenberger-Str.");
        break;
    }
    case 83499:
    {
        returnValue = F("Dr.-Kropfhammer-Str.");
        break;
    }
    case 83500:
    {
        returnValue = F("Dr.-Krug-Str.");
        break;
    }
    case 83501:
    {
        returnValue = F("Dr.-Krukenberg-Str.");
        break;
    }
    case 83502:
    {
        returnValue = F("Dr.-Kubisch-Weg");
        break;
    }
    case 83503:
    {
        returnValue = F("Dr.-Kumpfmüller-Str.");
        break;
    }
    case 83504:
    {
        returnValue = F("Dr.-Kurt-Fischer-Siedlung");
        break;
    }
    case 83505:
    {
        returnValue = F("Dr.-Kurt-Fischer-Str.");
        break;
    }
    case 83506:
    {
        returnValue = F("Dr.-Kurt-Flöricke-Promenade");
        break;
    }
    case 83507:
    {
        returnValue = F("Dr.-Kurt-Herberts-Str.");
        break;
    }
    case 83508:
    {
        returnValue = F("Dr.-Kurt-Huber-Str.");
        break;
    }
    case 83509:
    {
        returnValue = F("Dr.-Kurt-Isemann-Str.");
        break;
    }
    case 83510:
    {
        returnValue = F("Dr.-Kurt-Scharf-Str.");
        break;
    }
    case 83511:
    {
        returnValue = F("Dr.-Kurt-Schober-Str.");
        break;
    }
    case 83512:
    {
        returnValue = F("Dr.-Kurt-Schroeder-Promenade");
        break;
    }
    case 83513:
    {
        returnValue = F("Dr.-Kurt-Schumacher-Ring");
        break;
    }
    case 83514:
    {
        returnValue = F("Dr.-Kurt-Schumacher-Str.");
        break;
    }
    case 83515:
    {
        returnValue = F("Dr.-Kurt-Steim-Str.");
        break;
    }
    case 83516:
    {
        returnValue = F("Dr.-Kurz-Platz");
        break;
    }
    case 83517:
    {
        returnValue = F("Dr.-Kurz-Str.");
        break;
    }
    case 83518:
    {
        returnValue = F("Dr.-Kutsch-Str.");
        break;
    }
    case 83519:
    {
        returnValue = F("Dr.-Kämpf-Str.");
        break;
    }
    case 83520:
    {
        returnValue = F("Dr.-Köberle-Str.");
        break;
    }
    case 83521:
    {
        returnValue = F("Dr.-Köhl-Str.");
        break;
    }
    case 83522:
    {
        returnValue = F("Dr.-Köhler-Platz");
        break;
    }
    case 83523:
    {
        returnValue = F("Dr.-Köhler-Str.");
        break;
    }
    case 83524:
    {
        returnValue = F("Dr.-Köller-Str.");
        break;
    }
    case 83525:
    {
        returnValue = F("Dr.-König-Platz");
        break;
    }
    case 83526:
    {
        returnValue = F("Dr.-König-Str.");
        break;
    }
    case 83527:
    {
        returnValue = F("Dr.-Köring-Str.");
        break;
    }
    case 83528:
    {
        returnValue = F("Dr.-Kühne-Str.");
        break;
    }
    case 83529:
    {
        returnValue = F("Dr.-Külz-Ring");
        break;
    }
    case 83530:
    {
        returnValue = F("Dr.-Külz-Str.");
        break;
    }
    case 83531:
    {
        returnValue = F("Dr.-Külz-Ufer");
        break;
    }
    case 83532:
    {
        returnValue = F("Dr.-Kürten-Str.");
        break;
    }
    case 83533:
    {
        returnValue = F("Dr.-Lagai-Str.");
        break;
    }
    case 83534:
    {
        returnValue = F("Dr.-Lammers-Weg");
        break;
    }
    case 83535:
    {
        returnValue = F("Dr.-Landgraf-Str.");
        break;
    }
    case 83536:
    {
        returnValue = F("Dr.-Lang-Str.");
        break;
    }
    case 83537:
    {
        returnValue = F("Dr.-Lange Str.");
        break;
    }
    case 83538:
    {
        returnValue = F("Dr.-Lange-Str.");
        break;
    }
    case 83539:
    {
        returnValue = F("Dr.-Langerhans-Str.");
        break;
    }
    case 83540:
    {
        returnValue = F("Dr.-Langhans-Anlage");
        break;
    }
    case 83541:
    {
        returnValue = F("Dr.-Lappe-Str.");
        break;
    }
    case 83542:
    {
        returnValue = F("Dr.-Laue-Weg");
        break;
    }
    case 83543:
    {
        returnValue = F("Dr.-Lausberg-Str.");
        break;
    }
    case 83544:
    {
        returnValue = F("Dr.-Lautz-Weg");
        break;
    }
    case 83545:
    {
        returnValue = F("Dr.-Lea-Ültzhöffer-Str.");
        break;
    }
    case 83546:
    {
        returnValue = F("Dr.-Leber-Str.");
        break;
    }
    case 83547:
    {
        returnValue = F("Dr.-Leberecht-Schulze-Str.");
        break;
    }
    case 83548:
    {
        returnValue = F("Dr.-Lecheler-Str.");
        break;
    }
    case 83549:
    {
        returnValue = F("Dr.-Lederer-Str.");
        break;
    }
    case 83550:
    {
        returnValue = F("Dr.-Leege-Str.");
        break;
    }
    case 83551:
    {
        returnValue = F("Dr.-Lehmann-Str.");
        break;
    }
    case 83552:
    {
        returnValue = F("Dr.-Lehmann-Weg");
        break;
    }
    case 83553:
    {
        returnValue = F("Dr.-Lehmer-Str.");
        break;
    }
    case 83554:
    {
        returnValue = F("Dr.-Lehner-Str.");
        break;
    }
    case 83555:
    {
        returnValue = F("Dr.-Leicht-Str.");
        break;
    }
    case 83556:
    {
        returnValue = F("Dr.-Leidenfrost-Str.");
        break;
    }
    case 83557:
    {
        returnValue = F("Dr.-Leidholdt-Str.");
        break;
    }
    case 83558:
    {
        returnValue = F("Dr.-Leinz-Str.");
        break;
    }
    case 83559:
    {
        returnValue = F("Dr.-Leitner-Str.");
        break;
    }
    case 83560:
    {
        returnValue = F("Dr.-Leix-Str.");
        break;
    }
    case 83561:
    {
        returnValue = F("Dr.-Lena-Ohnesorge-Str.");
        break;
    }
    case 83562:
    {
        returnValue = F("Dr.-Leonhard-Nimis-Str.");
        break;
    }
    case 83563:
    {
        returnValue = F("Dr.-Leonhardi-Weg");
        break;
    }
    case 83564:
    {
        returnValue = F("Dr.-Leopold-Weg");
        break;
    }
    case 83565:
    {
        returnValue = F("Dr.-Lepenau-Str.");
        break;
    }
    case 83566:
    {
        returnValue = F("Dr.-Lerch-Weg");
        break;
    }
    case 83567:
    {
        returnValue = F("Dr.-Lerner-Str.");
        break;
    }
    case 83568:
    {
        returnValue = F("Dr.-Leubner-Weg");
        break;
    }
    case 83569:
    {
        returnValue = F("Dr.-Leukert-Weg");
        break;
    }
    case 83570:
    {
        returnValue = F("Dr.-Leve-Str.");
        break;
    }
    case 83571:
    {
        returnValue = F("Dr.-Liebenthal-Str.");
        break;
    }
    case 83572:
    {
        returnValue = F("Dr.-Liegl-Str.");
        break;
    }
    case 83573:
    {
        returnValue = F("Dr.-Lienke-Weg");
        break;
    }
    case 83574:
    {
        returnValue = F("Dr.-Liesegang-Str.");
        break;
    }
    case 83575:
    {
        returnValue = F("Dr.-Lina-Kadel-Str.");
        break;
    }
    case 83576:
    {
        returnValue = F("Dr.-Linck-Weg");
        break;
    }
    case 83577:
    {
        returnValue = F("Dr.-Lindemann-Str.");
        break;
    }
    case 83578:
    {
        returnValue = F("Dr.-Lindner-Str.");
        break;
    }
    case 83579:
    {
        returnValue = F("Dr.-Lise-Meitner-Str.");
        break;
    }
    case 83580:
    {
        returnValue = F("Dr.-Loeffellad-Str.");
        break;
    }
    case 83581:
    {
        returnValue = F("Dr.-Loermann-Str.");
        break;
    }
    case 83582:
    {
        returnValue = F("Dr.-Loewenstein-Str.");
        break;
    }
    case 83583:
    {
        returnValue = F("Dr.-Lorenz-Lampl-Str.");
        break;
    }
    case 83584:
    {
        returnValue = F("Dr.-Lorenz-Weg");
        break;
    }
    case 83585:
    {
        returnValue = F("Dr.-Lotich-Str.");
        break;
    }
    case 83586:
    {
        returnValue = F("Dr.-Louis-Koopmann-Str.");
        break;
    }
    case 83587:
    {
        returnValue = F("Dr.-Louis-Lehmann-Str.");
        break;
    }
    case 83588:
    {
        returnValue = F("Dr.-Ludwig-Baur-Str.");
        break;
    }
    case 83589:
    {
        returnValue = F("Dr.-Ludwig-Betz-Str.");
        break;
    }
    case 83590:
    {
        returnValue = F("Dr.-Ludwig-Bölkow-Str.");
        break;
    }
    case 83591:
    {
        returnValue = F("Dr.-Ludwig-Kayser-Str.");
        break;
    }
    case 83592:
    {
        returnValue = F("Dr.-Ludwig-Knobloch-Str.");
        break;
    }
    case 83593:
    {
        returnValue = F("Dr.-Ludwig-Kraus-Str.");
        break;
    }
    case 83594:
    {
        returnValue = F("Dr.-Ludwig-Nieder-Str.");
        break;
    }
    case 83595:
    {
        returnValue = F("Dr.-Ludwig-Opel-Str.");
        break;
    }
    case 83596:
    {
        returnValue = F("Dr.-Ludwig-Seiler-Str.");
        break;
    }
    case 83597:
    {
        returnValue = F("Dr.-Ludwig-Simmet-Str.");
        break;
    }
    case 83598:
    {
        returnValue = F("Dr.-Ludwig-Str.");
        break;
    }
    case 83599:
    {
        returnValue = F("Dr.-Ludwig-Veit-Weg");
        break;
    }
    case 83600:
    {
        returnValue = F("Dr.-Ludwig-Vierling-Str.");
        break;
    }
    case 83601:
    {
        returnValue = F("Dr.-Ludwig-Zamenhof-Str.");
        break;
    }
    case 83602:
    {
        returnValue = F("Dr.-Ludwig-und-Johanna-Stockbauer-Platz");
        break;
    }
    case 83603:
    {
        returnValue = F("Dr.-Ludwig-von-Rauffer-Str.");
        break;
    }
    case 83604:
    {
        returnValue = F("Dr.-Luft-Str.");
        break;
    }
    case 83605:
    {
        returnValue = F("Dr.-Lukaschek-Str.");
        break;
    }
    case 83606:
    {
        returnValue = F("Dr.-Luschberger-Str.");
        break;
    }
    case 83607:
    {
        returnValue = F("Dr.-Löffler-Str.");
        break;
    }
    case 83608:
    {
        returnValue = F("Dr.-Lönne-Str.");
        break;
    }
    case 83609:
    {
        returnValue = F("Dr.-Lübbers-Weg");
        break;
    }
    case 83610:
    {
        returnValue = F("Dr.-Lüning-Str.");
        break;
    }
    case 83611:
    {
        returnValue = F("Dr.-Lüssem-Str.");
        break;
    }
    case 83612:
    {
        returnValue = F("Dr.-M.-Lutherstr.");
        break;
    }
    case 83613:
    {
        returnValue = F("Dr.-Mach-Str.");
        break;
    }
    case 83614:
    {
        returnValue = F("Dr.-Mack-Str.");
        break;
    }
    case 83615:
    {
        returnValue = F("Dr.-Madlung-Str.");
        break;
    }
    case 83616:
    {
        returnValue = F("Dr.-Mager-Str.");
        break;
    }
    case 83617:
    {
        returnValue = F("Dr.-Magg-Weg");
        break;
    }
    case 83618:
    {
        returnValue = F("Dr.-Magnus-Weinberg-Platz");
        break;
    }
    case 83619:
    {
        returnValue = F("Dr.-Mahner-Weg");
        break;
    }
    case 83620:
    {
        returnValue = F("Dr.-Maier-Str.");
        break;
    }
    case 83621:
    {
        returnValue = F("Dr.-Mainer-Str.");
        break;
    }
    case 83622:
    {
        returnValue = F("Dr.-Mally-Str.");
        break;
    }
    case 83623:
    {
        returnValue = F("Dr.-Manasse-Str.");
        break;
    }
    case 83624:
    {
        returnValue = F("Dr.-Manfred-Henrich-Platz");
        break;
    }
    case 83625:
    {
        returnValue = F("Dr.-Manfred-Hirschvogel-Str.");
        break;
    }
    case 83626:
    {
        returnValue = F("Dr.-Manfred-Müller-Str.");
        break;
    }
    case 83627:
    {
        returnValue = F("Dr.-Mann-Siedlung");
        break;
    }
    case 83628:
    {
        returnValue = F("Dr.-Mantel-Weg");
        break;
    }
    case 83629:
    {
        returnValue = F("Dr.-Marc-Str.");
        break;
    }
    case 83630:
    {
        returnValue = F("Dr.-Margarete-Blank-Str.");
        break;
    }
    case 83631:
    {
        returnValue = F("Dr.-Margarethe-Bahrmann-Weg");
        break;
    }
    case 83632:
    {
        returnValue = F("Dr.-Margit-Naarmann-Str.");
        break;
    }
    case 83633:
    {
        returnValue = F("Dr.-Maria-Birkenfeld-Weg");
        break;
    }
    case 83634:
    {
        returnValue = F("Dr.-Maria-Eder-Str.");
        break;
    }
    case 83635:
    {
        returnValue = F("Dr.-Maria-Grollmuß-Str.");
        break;
    }
    case 83636:
    {
        returnValue = F("Dr.-Maria-Heilmann-Str.");
        break;
    }
    case 83637:
    {
        returnValue = F("Dr.-Maria-Herr-Beck-Platz");
        break;
    }
    case 83638:
    {
        returnValue = F("Dr.-Maria-Moormann-Str.");
        break;
    }
    case 83639:
    {
        returnValue = F("Dr.-Maria-Probst-Str.");
        break;
    }
    case 83640:
    {
        returnValue = F("Dr.-Maria-Schmidt-Weg");
        break;
    }
    case 83641:
    {
        returnValue = F("Dr.-Marianus-Vetter-Str.");
        break;
    }
    case 83642:
    {
        returnValue = F("Dr.-Marie-Elisabeth-Lüders-Str.");
        break;
    }
    case 83643:
    {
        returnValue = F("Dr.-Marie-Elise-Kayser-Str.");
        break;
    }
    case 83644:
    {
        returnValue = F("Dr.-Markstaller-Str.");
        break;
    }
    case 83645:
    {
        returnValue = F("Dr.-Martha-Kage-Str.");
        break;
    }
    case 83646:
    {
        returnValue = F("Dr.-Martin-Henning-Str.");
        break;
    }
    case 83647:
    {
        returnValue = F("Dr.-Martin-Herrenknecht-Str.");
        break;
    }
    case 83648:
    {
        returnValue = F("Dr.-Martin-Janke-Weg");
        break;
    }
    case 83649:
    {
        returnValue = F("Dr.-Martin-Luther-King-Str.");
        break;
    }
    case 83650:
    {
        returnValue = F("Dr.-Martin-Luther-King-Weg");
        break;
    }
    case 83651:
    {
        returnValue = F("Dr.-Martin-Luther-Platz");
        break;
    }
    case 83652:
    {
        returnValue = F("Dr.-Martin-Luther-Promenade");
        break;
    }
    case 83653:
    {
        returnValue = F("Dr.-Martin-Luther-Str.");
        break;
    }
    case 83654:
    {
        returnValue = F("Dr.-Martin-Thilo-Str.");
        break;
    }
    case 83655:
    {
        returnValue = F("Dr.-Martin-Weg");
        break;
    }
    case 83656:
    {
        returnValue = F("Dr.-Martin-Winkler-Str.");
        break;
    }
    case 83657:
    {
        returnValue = F("Dr.-Martini-Str.");
        break;
    }
    case 83658:
    {
        returnValue = F("Dr.-Martiny-Str.");
        break;
    }
    case 83659:
    {
        returnValue = F("Dr.-Martius-Str.");
        break;
    }
    case 83660:
    {
        returnValue = F("Dr.-Marx-Str.");
        break;
    }
    case 83661:
    {
        returnValue = F("Dr.-Mathieu-Str.");
        break;
    }
    case 83662:
    {
        returnValue = F("Dr.-Matthias-Horn-Str.");
        break;
    }
    case 83663:
    {
        returnValue = F("Dr.-Matthias-Lechner-Str.");
        break;
    }
    case 83664:
    {
        returnValue = F("Dr.-Matthiesen-Str.");
        break;
    }
    case 83665:
    {
        returnValue = F("Dr.-Matzke-Str.");
        break;
    }
    case 83666:
    {
        returnValue = F("Dr.-Mauderer-Str.");
        break;
    }
    case 83667:
    {
        returnValue = F("Dr.-Maurer-Str.");
        break;
    }
    case 83668:
    {
        returnValue = F("Dr.-Mauser-Str.");
        break;
    }
    case 83669:
    {
        returnValue = F("Dr.-Max-Breitung-Str.");
        break;
    }
    case 83670:
    {
        returnValue = F("Dr.-Max-Bühler-Str.");
        break;
    }
    case 83671:
    {
        returnValue = F("Dr.-Max-Dietrich-Str.");
        break;
    }
    case 83672:
    {
        returnValue = F("Dr.-Max-Ehrenpfordt-Str.");
        break;
    }
    case 83673:
    {
        returnValue = F("Dr.-Max-Grünzinger-Str.");
        break;
    }
    case 83674:
    {
        returnValue = F("Dr.-Max-Hagedorn-Str.");
        break;
    }
    case 83675:
    {
        returnValue = F("Dr.-Max-Herold-Str.");
        break;
    }
    case 83676:
    {
        returnValue = F("Dr.-Max-Hofmann-Str.");
        break;
    }
    case 83677:
    {
        returnValue = F("Dr.-Max-Ilgner-Str.");
        break;
    }
    case 83678:
    {
        returnValue = F("Dr.-Max-Isserlin-Str.");
        break;
    }
    case 83679:
    {
        returnValue = F("Dr.-Max-Krell-Park");
        break;
    }
    case 83680:
    {
        returnValue = F("Dr.-Max-Näder-Platz");
        break;
    }
    case 83681:
    {
        returnValue = F("Dr.-Max-Otto-Bruker Heil- und Kräutergarten");
        break;
    }
    case 83682:
    {
        returnValue = F("Dr.-Max-Schmidt-Weg");
        break;
    }
    case 83683:
    {
        returnValue = F("Dr.-Max-Schneider-Str.");
        break;
    }
    case 83684:
    {
        returnValue = F("Dr.-Max-Schwarz-Platz");
        break;
    }
    case 83685:
    {
        returnValue = F("Dr.-Max-Schwarz-Str.");
        break;
    }
    case 83686:
    {
        returnValue = F("Dr.-Max-Simon-Str.");
        break;
    }
    case 83687:
    {
        returnValue = F("Dr.-Max-Str.");
        break;
    }
    case 83688:
    {
        returnValue = F("Dr.-Max-Vogler-Str.");
        break;
    }
    case 83689:
    {
        returnValue = F("Dr.-Max-Volk-Str.");
        break;
    }
    case 83690:
    {
        returnValue = F("Dr.-Maximilian-Rech-Str.");
        break;
    }
    case 83691:
    {
        returnValue = F("Dr.-Mayer-Str.");
        break;
    }
    case 83692:
    {
        returnValue = F("Dr.-Mayer-Weg");
        break;
    }
    case 83693:
    {
        returnValue = F("Dr.-Mayerhausen-Str.");
        break;
    }
    case 83694:
    {
        returnValue = F("Dr.-Mayr-Str.");
        break;
    }
    case 83695:
    {
        returnValue = F("Dr.-Mayr-Weg");
        break;
    }
    case 83696:
    {
        returnValue = F("Dr.-Meier-Spanier-Str.");
        break;
    }
    case 83697:
    {
        returnValue = F("Dr.-Meinerzhagen-Str.");
        break;
    }
    case 83698:
    {
        returnValue = F("Dr.-Meinhard-Fisch-Str.");
        break;
    }
    case 83699:
    {
        returnValue = F("Dr.-Meißner-Weg");
        break;
    }
    case 83700:
    {
        returnValue = F("Dr.-Melchior-Adam-Weikard-Str.");
        break;
    }
    case 83701:
    {
        returnValue = F("Dr.-Melzl-Str.");
        break;
    }
    case 83702:
    {
        returnValue = F("Dr.-Menge-Str.");
        break;
    }
    case 83703:
    {
        returnValue = F("Dr.-Menne-Str.");
        break;
    }
    case 83704:
    {
        returnValue = F("Dr.-Menser-Weg");
        break;
    }
    case 83705:
    {
        returnValue = F("Dr.-Menzinger-Str.");
        break;
    }
    case 83706:
    {
        returnValue = F("Dr.-Merkenschlager-Str.");
        break;
    }
    case 83707:
    {
        returnValue = F("Dr.-Merkle-Str.");
        break;
    }
    case 83708:
    {
        returnValue = F("Dr.-Mertens-Weg");
        break;
    }
    case 83709:
    {
        returnValue = F("Dr.-Mettenheimer-Weg");
        break;
    }
    case 83710:
    {
        returnValue = F("Dr.-Metzger-Str.");
        break;
    }
    case 83711:
    {
        returnValue = F("Dr.-Metzger-Weg");
        break;
    }
    case 83712:
    {
        returnValue = F("Dr.-Metzner-Str.");
        break;
    }
    case 83713:
    {
        returnValue = F("Dr.-Meyer-Jagenberg-Weg");
        break;
    }
    case 83714:
    {
        returnValue = F("Dr.-Meyer-Spreckels-Str.");
        break;
    }
    case 83715:
    {
        returnValue = F("Dr.-Meyer-Str.");
        break;
    }
    case 83716:
    {
        returnValue = F("Dr.-Michael-Fischer-Str.");
        break;
    }
    case 83717:
    {
        returnValue = F("Dr.-Michael-Samer-Ring");
        break;
    }
    case 83718:
    {
        returnValue = F("Dr.-Michael-Str.");
        break;
    }
    case 83719:
    {
        returnValue = F("Dr.-Michel-Str.");
        break;
    }
    case 83720:
    {
        returnValue = F("Dr.-Miedel-Str.");
        break;
    }
    case 83721:
    {
        returnValue = F("Dr.-Mitterwieser-Str.");
        break;
    }
    case 83722:
    {
        returnValue = F("Dr.-Model-Str.");
        break;
    }
    case 83723:
    {
        returnValue = F("Dr.-Moeller-Str.");
        break;
    }
    case 83724:
    {
        returnValue = F("Dr.-Mohr-Str.");
        break;
    }
    case 83725:
    {
        returnValue = F("Dr.-Moll-Platz");
        break;
    }
    case 83726:
    {
        returnValue = F("Dr.-Moning-Str.");
        break;
    }
    case 83727:
    {
        returnValue = F("Dr.-Moritz-Mitzenheim-Str.");
        break;
    }
    case 83728:
    {
        returnValue = F("Dr.-Moser-Str.");
        break;
    }
    case 83729:
    {
        returnValue = F("Dr.-Muggenthaler-Str.");
        break;
    }
    case 83730:
    {
        returnValue = F("Dr.-Munderloh-Str.");
        break;
    }
    case 83731:
    {
        returnValue = F("Dr.-Muschak-Str.");
        break;
    }
    case 83732:
    {
        returnValue = F("Dr.-Muser-Str.");
        break;
    }
    case 83733:
    {
        returnValue = F("Dr.-Mutterer-Str.");
        break;
    }
    case 83734:
    {
        returnValue = F("Dr.-Möller-Weg");
        break;
    }
    case 83735:
    {
        returnValue = F("Dr.-Müller-Desterro-Str.");
        break;
    }
    case 83736:
    {
        returnValue = F("Dr.-Müller-Frank-Str.");
        break;
    }
    case 83737:
    {
        returnValue = F("Dr.-Müller-Str.");
        break;
    }
    case 83738:
    {
        returnValue = F("Dr.-Münz-Str.");
        break;
    }
    case 83739:
    {
        returnValue = F("Dr.-Nathan-Str.");
        break;
    }
    case 83740:
    {
        returnValue = F("Dr.-Nebel-Str.");
        break;
    }
    case 83741:
    {
        returnValue = F("Dr.-Neideck-Str.");
        break;
    }
    case 83742:
    {
        returnValue = F("Dr.-Neteler-Str.");
        break;
    }
    case 83743:
    {
        returnValue = F("Dr.-Neuber-Str.");
        break;
    }
    case 83744:
    {
        returnValue = F("Dr.-Neuhäußer-Str.");
        break;
    }
    case 83745:
    {
        returnValue = F("Dr.-Neumeyer-Str.");
        break;
    }
    case 83746:
    {
        returnValue = F("Dr.-Nick-Str.");
        break;
    }
    case 83747:
    {
        returnValue = F("Dr.-Nicolas-Str.");
        break;
    }
    case 83748:
    {
        returnValue = F("Dr.-Nieder-Str.");
        break;
    }
    case 83749:
    {
        returnValue = F("Dr.-Niemann-Str.");
        break;
    }
    case 83750:
    {
        returnValue = F("Dr.-Niemeyer-Weg");
        break;
    }
    case 83751:
    {
        returnValue = F("Dr.-Nieper-Str.");
        break;
    }
    case 83752:
    {
        returnValue = F("Dr.-Nitzsche-Weg");
        break;
    }
    case 83753:
    {
        returnValue = F("Dr.-O.-Walter-Weg");
        break;
    }
    case 83754:
    {
        returnValue = F("Dr.-Ohlendorf-Str.");
        break;
    }
    case 83755:
    {
        returnValue = F("Dr.-Onymus-Str.");
        break;
    }
    case 83756:
    {
        returnValue = F("Dr.-Orth-Str.");
        break;
    }
    case 83757:
    {
        returnValue = F("Dr.-Oskar-Gluth-Str.");
        break;
    }
    case 83758:
    {
        returnValue = F("Dr.-Oskar-Kohler-Str.");
        break;
    }
    case 83759:
    {
        returnValue = F("Dr.-Oskar-Michel-Str.");
        break;
    }
    case 83760:
    {
        returnValue = F("Dr.-Osten-Str.");
        break;
    }
    case 83761:
    {
        returnValue = F("Dr.-Ottmar-Kohler-Str.");
        break;
    }
    case 83762:
    {
        returnValue = F("Dr.-Ottmar-Maurer-Str.");
        break;
    }
    case 83763:
    {
        returnValue = F("Dr.-Ottmar-Weiß-Str.");
        break;
    }
    case 83764:
    {
        returnValue = F("Dr.-Otto-Armbrecht-Str.");
        break;
    }
    case 83765:
    {
        returnValue = F("Dr.-Otto-Bardong-Str.");
        break;
    }
    case 83766:
    {
        returnValue = F("Dr.-Otto-Bott-Ring");
        break;
    }
    case 83767:
    {
        returnValue = F("Dr.-Otto-Bößner-Weg");
        break;
    }
    case 83768:
    {
        returnValue = F("Dr.-Otto-Eyrich-Str.");
        break;
    }
    case 83769:
    {
        returnValue = F("Dr.-Otto-Geßler-Platz");
        break;
    }
    case 83770:
    {
        returnValue = F("Dr.-Otto-Graßmüller-Str.");
        break;
    }
    case 83771:
    {
        returnValue = F("Dr.-Otto-Günther-Str.");
        break;
    }
    case 83772:
    {
        returnValue = F("Dr.-Otto-Kunzmann-Str.");
        break;
    }
    case 83773:
    {
        returnValue = F("Dr.-Otto-Leich-Str.");
        break;
    }
    case 83774:
    {
        returnValue = F("Dr.-Otto-Müller-Str.");
        break;
    }
    case 83775:
    {
        returnValue = F("Dr.-Otto-Nuschke-Str.");
        break;
    }
    case 83776:
    {
        returnValue = F("Dr.-Otto-Röhm-Str.");
        break;
    }
    case 83777:
    {
        returnValue = F("Dr.-Otto-Schedl-Str.");
        break;
    }
    case 83778:
    {
        returnValue = F("Dr.-Otto-Schmitz-Weg");
        break;
    }
    case 83779:
    {
        returnValue = F("Dr.-Otto-Schneider-Str.");
        break;
    }
    case 83780:
    {
        returnValue = F("Dr.-Otto-Seidel-Str.");
        break;
    }
    case 83781:
    {
        returnValue = F("Dr.-Otto-Seidl-Str.");
        break;
    }
    case 83782:
    {
        returnValue = F("Dr.-Otto-Siedlung");
        break;
    }
    case 83783:
    {
        returnValue = F("Dr.-Otto-Steinfatt-Str.");
        break;
    }
    case 83784:
    {
        returnValue = F("Dr.-Otto-Str.");
        break;
    }
    case 83785:
    {
        returnValue = F("Dr.-Otto-Walther-Str.");
        break;
    }
    case 83786:
    {
        returnValue = F("Dr.-Otto-Werkmeister-Str.");
        break;
    }
    case 83787:
    {
        returnValue = F("Dr.-Overhues-Allee");
        break;
    }
    case 83788:
    {
        returnValue = F("Dr.-Pater-Stehle-Str.");
        break;
    }
    case 83789:
    {
        returnValue = F("Dr.-Paul-Edelmann-Str.");
        break;
    }
    case 83790:
    {
        returnValue = F("Dr.-Paul-Gräser-Weg");
        break;
    }
    case 83791:
    {
        returnValue = F("Dr.-Paul-Hahn-Str.");
        break;
    }
    case 83792:
    {
        returnValue = F("Dr.-Paul-Morelon-Str.");
        break;
    }
    case 83793:
    {
        returnValue = F("Dr.-Paul-Müller-Str.");
        break;
    }
    case 83794:
    {
        returnValue = F("Dr.-Paul-Töpfner-Str.");
        break;
    }
    case 83795:
    {
        returnValue = F("Dr.-Paul-Weinhart-Str.");
        break;
    }
    case 83796:
    {
        returnValue = F("Dr.-Pauli-Str.");
        break;
    }
    case 83797:
    {
        returnValue = F("Dr.-Pauling-Str.");
        break;
    }
    case 83798:
    {
        returnValue = F("Dr.-Paulus-Weg");
        break;
    }
    case 83799:
    {
        returnValue = F("Dr.-Pawlik-Str.");
        break;
    }
    case 83800:
    {
        returnValue = F("Dr.-Pelz-Str.");
        break;
    }
    case 83801:
    {
        returnValue = F("Dr.-Pentrup-Str.");
        break;
    }
    case 83802:
    {
        returnValue = F("Dr.-Penzl-Weg");
        break;
    }
    case 83803:
    {
        returnValue = F("Dr.-Pesch-Str.");
        break;
    }
    case 83804:
    {
        returnValue = F("Dr.-Peter-Bümlein-Platz");
        break;
    }
    case 83805:
    {
        returnValue = F("Dr.-Peter-Doll-Str.");
        break;
    }
    case 83806:
    {
        returnValue = F("Dr.-Peter-Engelhart-Str.");
        break;
    }
    case 83807:
    {
        returnValue = F("Dr.-Peter-Hecker-Str.");
        break;
    }
    case 83808:
    {
        returnValue = F("Dr.-Peter-Jordan-Str.");
        break;
    }
    case 83809:
    {
        returnValue = F("Dr.-Peter-Str.");
        break;
    }
    case 83810:
    {
        returnValue = F("Dr.-Peter-Weg");
        break;
    }
    case 83811:
    {
        returnValue = F("Dr.-Peter-Willmann-Allee");
        break;
    }
    case 83812:
    {
        returnValue = F("Dr.-Peters-Str.");
        break;
    }
    case 83813:
    {
        returnValue = F("Dr.-Pfab-Str.");
        break;
    }
    case 83814:
    {
        returnValue = F("Dr.-Pfahler-Str.");
        break;
    }
    case 83815:
    {
        returnValue = F("Dr.-Pfannenstiel-Str.");
        break;
    }
    case 83816:
    {
        returnValue = F("Dr.-Pfeiffer-Str.");
        break;
    }
    case 83817:
    {
        returnValue = F("Dr.-Pfennigmann-Str.");
        break;
    }
    case 83818:
    {
        returnValue = F("Dr.-Pfleger-Str.");
        break;
    }
    case 83819:
    {
        returnValue = F("Dr.-Pfotel-Str.");
        break;
    }
    case 83820:
    {
        returnValue = F("Dr.-Philipp-Braun-Str.");
        break;
    }
    case 83821:
    {
        returnValue = F("Dr.-Picardt-Hof");
        break;
    }
    case 83822:
    {
        returnValue = F("Dr.-Picardt-Str.");
        break;
    }
    case 83823:
    {
        returnValue = F("Dr.-Pickart-Str.");
        break;
    }
    case 83824:
    {
        returnValue = F("Dr.-Piderit-Weg");
        break;
    }
    case 83825:
    {
        returnValue = F("Dr.-Pieke-Str.");
        break;
    }
    case 83826:
    {
        returnValue = F("Dr.-Pienitz-Park");
        break;
    }
    case 83827:
    {
        returnValue = F("Dr.-Pieper-Str.");
        break;
    }
    case 83828:
    {
        returnValue = F("Dr.-Pils-Str.");
        break;
    }
    case 83829:
    {
        returnValue = F("Dr.-Piro-Str.");
        break;
    }
    case 83830:
    {
        returnValue = F("Dr.-Pistorius-Str.");
        break;
    }
    case 83831:
    {
        returnValue = F("Dr.-Pohl-Str.");
        break;
    }
    case 83832:
    {
        returnValue = F("Dr.-Pollmann-Str.");
        break;
    }
    case 83833:
    {
        returnValue = F("Dr.-Prechtl-Steig");
        break;
    }
    case 83834:
    {
        returnValue = F("Dr.-Prechtl-Str.");
        break;
    }
    case 83835:
    {
        returnValue = F("Dr.-Prior-Str.");
        break;
    }
    case 83836:
    {
        returnValue = F("Dr.-Probst-Str.");
        break;
    }
    case 83837:
    {
        returnValue = F("Dr.-Prophet-Str.");
        break;
    }
    case 83838:
    {
        returnValue = F("Dr.-Prüssing-Str.");
        break;
    }
    case 83839:
    {
        returnValue = F("Dr.-Putz-Str.");
        break;
    }
    case 83840:
    {
        returnValue = F("Dr.-Pöllmann-Str.");
        break;
    }
    case 83841:
    {
        returnValue = F("Dr.-Pühn-Str.");
        break;
    }
    case 83842:
    {
        returnValue = F("Dr.-R.-Breitscheid-Str.");
        break;
    }
    case 83843:
    {
        returnValue = F("Dr.-Raber-Str.");
        break;
    }
    case 83844:
    {
        returnValue = F("Dr.-Rademacher-Str.");
        break;
    }
    case 83845:
    {
        returnValue = F("Dr.-Radlmaier-Str.");
        break;
    }
    case 83846:
    {
        returnValue = F("Dr.-Ram-Str.");
        break;
    }
    case 83847:
    {
        returnValue = F("Dr.-Rathenau-Platz");
        break;
    }
    case 83848:
    {
        returnValue = F("Dr.-Rattel-Str.");
        break;
    }
    case 83849:
    {
        returnValue = F("Dr.-Rau-Allee");
        break;
    }
    case 83850:
    {
        returnValue = F("Dr.-Rau-Str.");
        break;
    }
    case 83851:
    {
        returnValue = F("Dr.-Rau-Weg");
        break;
    }
    case 83852:
    {
        returnValue = F("Dr.-Rauch-Str.");
        break;
    }
    case 83853:
    {
        returnValue = F("Dr.-Rebentisch-Str.");
        break;
    }
    case 83854:
    {
        returnValue = F("Dr.-Redlich-Str.");
        break;
    }
    case 83855:
    {
        returnValue = F("Dr.-Regelsberger-Str.");
        break;
    }
    case 83856:
    {
        returnValue = F("Dr.-Regenbogen-Str.");
        break;
    }
    case 83857:
    {
        returnValue = F("Dr.-Rehm-Str.");
        break;
    }
    case 83858:
    {
        returnValue = F("Dr.-Reichel-Str.");
        break;
    }
    case 83859:
    {
        returnValue = F("Dr.-Reichenberger-Str.");
        break;
    }
    case 83860:
    {
        returnValue = F("Dr.-Reicherstetter-Str.");
        break;
    }
    case 83861:
    {
        returnValue = F("Dr.-Reil-Weg");
        break;
    }
    case 83862:
    {
        returnValue = F("Dr.-Reimer-Str.");
        break;
    }
    case 83863:
    {
        returnValue = F("Dr.-Reinhard-Str.");
        break;
    }
    case 83864:
    {
        returnValue = F("Dr.-Reinhard-Weg");
        break;
    }
    case 83865:
    {
        returnValue = F("Dr.-Reinhold-Fuchs-Weg");
        break;
    }
    case 83866:
    {
        returnValue = F("Dr.-Reinhold-Thiel-Str.");
        break;
    }
    case 83867:
    {
        returnValue = F("Dr.-Remeis-Str.");
        break;
    }
    case 83868:
    {
        returnValue = F("Dr.-Renner-Str.");
        break;
    }
    case 83869:
    {
        returnValue = F("Dr.-Reuber-Str.");
        break;
    }
    case 83870:
    {
        returnValue = F("Dr.-Reuss-Str.");
        break;
    }
    case 83871:
    {
        returnValue = F("Dr.-Richard-Beck-Str.");
        break;
    }
    case 83872:
    {
        returnValue = F("Dr.-Richard-Bonz-Str.");
        break;
    }
    case 83873:
    {
        returnValue = F("Dr.-Richard-Drescher-Str.");
        break;
    }
    case 83874:
    {
        returnValue = F("Dr.-Richard-Dörr-Str.");
        break;
    }
    case 83875:
    {
        returnValue = F("Dr.-Richard-Heyder-Str.");
        break;
    }
    case 83876:
    {
        returnValue = F("Dr.-Richard-Heye-Str.");
        break;
    }
    case 83877:
    {
        returnValue = F("Dr.-Richard-Koch-Str.");
        break;
    }
    case 83878:
    {
        returnValue = F("Dr.-Richard-Küch-Str.");
        break;
    }
    case 83879:
    {
        returnValue = F("Dr.-Richard-Schmincke-Str.");
        break;
    }
    case 83880:
    {
        returnValue = F("Dr.-Richard-Sorge-Str.");
        break;
    }
    case 83881:
    {
        returnValue = F("Dr.-Richard-Str.");
        break;
    }
    case 83882:
    {
        returnValue = F("Dr.-Richard-Zöller-Str.");
        break;
    }
    case 83883:
    {
        returnValue = F("Dr.-Richter-Str.");
        break;
    }
    case 83884:
    {
        returnValue = F("Dr.-Ricken-Str.");
        break;
    }
    case 83885:
    {
        returnValue = F("Dr.-Rieck-Str.");
        break;
    }
    case 83886:
    {
        returnValue = F("Dr.-Ried-Str.");
        break;
    }
    case 83887:
    {
        returnValue = F("Dr.-Riese-Str.");
        break;
    }
    case 83888:
    {
        returnValue = F("Dr.-Rieth-Str.");
        break;
    }
    case 83889:
    {
        returnValue = F("Dr.-Ringens-Str.");
        break;
    }
    case 83890:
    {
        returnValue = F("Dr.-Ritter-von-Scheuring-Str.");
        break;
    }
    case 83891:
    {
        returnValue = F("Dr.-Ritz-Str.");
        break;
    }
    case 83892:
    {
        returnValue = F("Dr.-Robbers-Str.");
        break;
    }
    case 83893:
    {
        returnValue = F("Dr.-Robert-Eckert-Str.");
        break;
    }
    case 83894:
    {
        returnValue = F("Dr.-Robert-Koch-Siedlung");
        break;
    }
    case 83895:
    {
        returnValue = F("Dr.-Robert-Koch-Str.");
        break;
    }
    case 83896:
    {
        returnValue = F("Dr.-Robert-Kutschbach-Str.");
        break;
    }
    case 83897:
    {
        returnValue = F("Dr.-Robert-Murjahn-Str.");
        break;
    }
    case 83898:
    {
        returnValue = F("Dr.-Robert-Pickl-Str.");
        break;
    }
    case 83899:
    {
        returnValue = F("Dr.-Robert-Pütz-Str.");
        break;
    }
    case 83900:
    {
        returnValue = F("Dr.-Robert-Schelp-Platz");
        break;
    }
    case 83901:
    {
        returnValue = F("Dr.-Roch-Str.");
        break;
    }
    case 83902:
    {
        returnValue = F("Dr.-Roderius-Str.");
        break;
    }
    case 83903:
    {
        returnValue = F("Dr.-Rody-Str.");
        break;
    }
    case 83904:
    {
        returnValue = F("Dr.-Rohde-Str.");
        break;
    }
    case 83905:
    {
        returnValue = F("Dr.-Rohr-Str.");
        break;
    }
    case 83906:
    {
        returnValue = F("Dr.-Rolf-Filler-Str.");
        break;
    }
    case 83907:
    {
        returnValue = F("Dr.-Romberg-Str.");
        break;
    }
    case 83908:
    {
        returnValue = F("Dr.-Ronge-Weg");
        break;
    }
    case 83909:
    {
        returnValue = F("Dr.-Rosa-Goldschmidt-Str.");
        break;
    }
    case 83910:
    {
        returnValue = F("Dr.-Rosenberger-Weg");
        break;
    }
    case 83911:
    {
        returnValue = F("Dr.-Rosenmeyer-Weg");
        break;
    }
    case 83912:
    {
        returnValue = F("Dr.-Rosenthal-Weg");
        break;
    }
    case 83913:
    {
        returnValue = F("Dr.-Ross-Str.");
        break;
    }
    case 83914:
    {
        returnValue = F("Dr.-Rost-Str.");
        break;
    }
    case 83915:
    {
        returnValue = F("Dr.-Roth-Str.");
        break;
    }
    case 83916:
    {
        returnValue = F("Dr.-Rothermel-Str.");
        break;
    }
    case 83917:
    {
        returnValue = F("Dr.-Rothermel-Weg");
        break;
    }
    case 83918:
    {
        returnValue = F("Dr.-Rotter-Str.");
        break;
    }
    case 83919:
    {
        returnValue = F("Dr.-Roß-Str.");
        break;
    }
    case 83920:
    {
        returnValue = F("Dr.-Ruben-Str.");
        break;
    }
    case 83921:
    {
        returnValue = F("Dr.-Rudi-Moser-Str.");
        break;
    }
    case 83922:
    {
        returnValue = F("Dr.-Rudolf-Benario-Str.");
        break;
    }
    case 83923:
    {
        returnValue = F("Dr.-Rudolf-Bensch-Weg");
        break;
    }
    case 83924:
    {
        returnValue = F("Dr.-Rudolf-Breitscheid-Str.");
        break;
    }
    case 83925:
    {
        returnValue = F("Dr.-Rudolf-Drumm-Str.");
        break;
    }
    case 83926:
    {
        returnValue = F("Dr.-Rudolf-Dunger-Str.");
        break;
    }
    case 83927:
    {
        returnValue = F("Dr.-Rudolf-Eberle-Str.");
        break;
    }
    case 83928:
    {
        returnValue = F("Dr.-Rudolf-Faulhaber-Str.");
        break;
    }
    case 83929:
    {
        returnValue = F("Dr.-Rudolf-Friedrichs-Str.");
        break;
    }
    case 83930:
    {
        returnValue = F("Dr.-Rudolf-Hedler-Str.");
        break;
    }
    case 83931:
    {
        returnValue = F("Dr.-Rudolf-Illing-Weg");
        break;
    }
    case 83932:
    {
        returnValue = F("Dr.-Rudolf-Kellermann-Str.");
        break;
    }
    case 83933:
    {
        returnValue = F("Dr.-Rudolf-Quast-Str.");
        break;
    }
    case 83934:
    {
        returnValue = F("Dr.-Rudolf-Schick-Str.");
        break;
    }
    case 83935:
    {
        returnValue = F("Dr.-Rudolf-Schieber-Str.");
        break;
    }
    case 83936:
    {
        returnValue = F("Dr.-Rudolf-Schütz-Str.");
        break;
    }
    case 83937:
    {
        returnValue = F("Dr.-Rudolf-Tschäpe-Platz");
        break;
    }
    case 83938:
    {
        returnValue = F("Dr.-Rudolf-Veh-Str.");
        break;
    }
    case 83939:
    {
        returnValue = F("Dr.-Rudolf-Wobser-Str.");
        break;
    }
    case 83940:
    {
        returnValue = F("Dr.-Rummel-Str.");
        break;
    }
    case 83941:
    {
        returnValue = F("Dr.-Rumpf-Weg");
        break;
    }
    case 83942:
    {
        returnValue = F("Dr.-Ruppert-Schneider-Str.");
        break;
    }
    case 83943:
    {
        returnValue = F("Dr.-Ruth-Pfau-Str.");
        break;
    }
    case 83944:
    {
        returnValue = F("Dr.-Röder-Str.");
        break;
    }
    case 83945:
    {
        returnValue = F("Dr.-Rörig-Weg");
        break;
    }
    case 83946:
    {
        returnValue = F("Dr.-Röser-Str.");
        break;
    }
    case 83947:
    {
        returnValue = F("Dr.-Röttscher-Str.");
        break;
    }
    case 83948:
    {
        returnValue = F("Dr.-Rühfel-Weg");
        break;
    }
    case 83949:
    {
        returnValue = F("Dr.-Rühl-Str.");
        break;
    }
    case 83950:
    {
        returnValue = F("Dr.-Rühle-von-Lilienstern-Str.");
        break;
    }
    case 83951:
    {
        returnValue = F("Dr.-Salvador-Allende-Siedlung");
        break;
    }
    case 83952:
    {
        returnValue = F("Dr.-Salvador-Allende-Str.");
        break;
    }
    case 83953:
    {
        returnValue = F("Dr.-Salzmann-Str.");
        break;
    }
    case 83954:
    {
        returnValue = F("Dr.-Sandforth-Str.");
        break;
    }
    case 83955:
    {
        returnValue = F("Dr.-Sattler-Ring");
        break;
    }
    case 83956:
    {
        returnValue = F("Dr.-Sattler-Str.");
        break;
    }
    case 83957:
    {
        returnValue = F("Dr.-Sauer-Str.");
        break;
    }
    case 83958:
    {
        returnValue = F("Dr.-Sauerbruch-Weg");
        break;
    }
    case 83959:
    {
        returnValue = F("Dr.-Sauermann-Weg");
        break;
    }
    case 83960:
    {
        returnValue = F("Dr.-Schack-Str.");
        break;
    }
    case 83961:
    {
        returnValue = F("Dr.-Scharl-Str.");
        break;
    }
    case 83962:
    {
        returnValue = F("Dr.-Scheele-Str.");
        break;
    }
    case 83963:
    {
        returnValue = F("Dr.-Scheid-Str.");
        break;
    }
    case 83964:
    {
        returnValue = F("Dr.-Scheiding-Str.");
        break;
    }
    case 83965:
    {
        returnValue = F("Dr.-Schellerer-Str.");
        break;
    }
    case 83966:
    {
        returnValue = F("Dr.-Schels-Str.");
        break;
    }
    case 83967:
    {
        returnValue = F("Dr.-Schenz-Weg");
        break;
    }
    case 83968:
    {
        returnValue = F("Dr.-Scheube-Str.");
        break;
    }
    case 83969:
    {
        returnValue = F("Dr.-Scheurmann-Platz");
        break;
    }
    case 83970:
    {
        returnValue = F("Dr.-Schier-Str.");
        break;
    }
    case 83971:
    {
        returnValue = F("Dr.-Schierbel-Str.");
        break;
    }
    case 83972:
    {
        returnValue = F("Dr.-Schierghofer-Weg");
        break;
    }
    case 83973:
    {
        returnValue = F("Dr.-Schindler-Str.");
        break;
    }
    case 83974:
    {
        returnValue = F("Dr.-Schirmer-Str.");
        break;
    }
    case 83975:
    {
        returnValue = F("Dr.-Schleyer-Str.");
        break;
    }
    case 83976:
    {
        returnValue = F("Dr.-Schlier-Weg");
        break;
    }
    case 83977:
    {
        returnValue = F("Dr.-Schlittenbauer-Str.");
        break;
    }
    case 83978:
    {
        returnValue = F("Dr.-Schlittmeier-Str.");
        break;
    }
    case 83979:
    {
        returnValue = F("Dr.-Schloegel-Str.");
        break;
    }
    case 83980:
    {
        returnValue = F("Dr.-Schlögl-Str.");
        break;
    }
    case 83981:
    {
        returnValue = F("Dr.-Schmidt-Petersen-Str.");
        break;
    }
    case 83982:
    {
        returnValue = F("Dr.-Schmidt-Str.");
        break;
    }
    case 83983:
    {
        returnValue = F("Dr.-Schmidtchen-Weg");
        break;
    }
    case 83984:
    {
        returnValue = F("Dr.-Schmincke-Allee");
        break;
    }
    case 83985:
    {
        returnValue = F("Dr.-Schminke-Str.");
        break;
    }
    case 83986:
    {
        returnValue = F("Dr.-Schmitt-Str.");
        break;
    }
    case 83987:
    {
        returnValue = F("Dr.-Schmöller-Str.");
        break;
    }
    case 83988:
    {
        returnValue = F("Dr.-Schneider-Str.");
        break;
    }
    case 83989:
    {
        returnValue = F("Dr.-Schoenemann-Str.");
        break;
    }
    case 83990:
    {
        returnValue = F("Dr.-Schomburg-Str.");
        break;
    }
    case 83991:
    {
        returnValue = F("Dr.-Schomerus-Str.");
        break;
    }
    case 83992:
    {
        returnValue = F("Dr.-Schott-Str.");
        break;
    }
    case 83993:
    {
        returnValue = F("Dr.-Schotte-Str.");
        break;
    }
    case 83994:
    {
        returnValue = F("Dr.-Schramm-Str.");
        break;
    }
    case 83995:
    {
        returnValue = F("Dr.-Schrauth-Str.");
        break;
    }
    case 83996:
    {
        returnValue = F("Dr.-Schreber-Str.");
        break;
    }
    case 83997:
    {
        returnValue = F("Dr.-Schreber-Weg");
        break;
    }
    case 83998:
    {
        returnValue = F("Dr.-Schreiber-Str.");
        break;
    }
    case 83999:
    {
        returnValue = F("Dr.-Schreyer-Str.");
        break;
    }
    case 84000:
    {
        returnValue = F("Dr.-Schröder-Weg");
        break;
    }
    case 84001:
    {
        returnValue = F("Dr.-Schubert-Str.");
        break;
    }
    case 84002:
    {
        returnValue = F("Dr.-Schuck-Str.");
        break;
    }
    case 84003:
    {
        returnValue = F("Dr.-Schuhbaur-Weg");
        break;
    }
    case 84004:
    {
        returnValue = F("Dr.-Schuhmacher-Str.");
        break;
    }
    case 84005:
    {
        returnValue = F("Dr.-Schuhwerk-Str.");
        break;
    }
    case 84006:
    {
        returnValue = F("Dr.-Schulthess-Str.");
        break;
    }
    case 84007:
    {
        returnValue = F("Dr.-Schultz-Lupitz-Str.");
        break;
    }
    case 84008:
    {
        returnValue = F("Dr.-Schultz-Str.");
        break;
    }
    case 84009:
    {
        returnValue = F("Dr.-Schulz-Weg");
        break;
    }
    case 84010:
    {
        returnValue = F("Dr.-Schumacher-Str.");
        break;
    }
    case 84011:
    {
        returnValue = F("Dr.-Schwab-Str.");
        break;
    }
    case 84012:
    {
        returnValue = F("Dr.-Schwabe-Str.");
        break;
    }
    case 84013:
    {
        returnValue = F("Dr.-Schwanhäuser-Weg");
        break;
    }
    case 84014:
    {
        returnValue = F("Dr.-Schweitzer-Str.");
        break;
    }
    case 84015:
    {
        returnValue = F("Dr.-Schwend-Str.");
        break;
    }
    case 84016:
    {
        returnValue = F("Dr.-Schwentner-Str.");
        break;
    }
    case 84017:
    {
        returnValue = F("Dr.-Schwindt-Str.");
        break;
    }
    case 84018:
    {
        returnValue = F("Dr.-Schwörer-Str.");
        break;
    }
    case 84019:
    {
        returnValue = F("Dr.-Schäfer-Str.");
        break;
    }
    case 84020:
    {
        returnValue = F("Dr.-Schätzel-Str.");
        break;
    }
    case 84021:
    {
        returnValue = F("Dr.-Schäufele-Str.");
        break;
    }
    case 84022:
    {
        returnValue = F("Dr.-Schöttl-Weg");
        break;
    }
    case 84023:
    {
        returnValue = F("Dr.-Schütz-Str.");
        break;
    }
    case 84024:
    {
        returnValue = F("Dr.-Schützhold-Platz");
        break;
    }
    case 84025:
    {
        returnValue = F("Dr.-Schüßler-Str.");
        break;
    }
    case 84026:
    {
        returnValue = F("Dr.-Sedl-Weg");
        break;
    }
    case 84027:
    {
        returnValue = F("Dr.-Seeling-Str.");
        break;
    }
    case 84028:
    {
        returnValue = F("Dr.-Seidl-Str.");
        break;
    }
    case 84029:
    {
        returnValue = F("Dr.-Seiterich-Str.");
        break;
    }
    case 84030:
    {
        returnValue = F("Dr.-Seitner-Weg");
        break;
    }
    case 84031:
    {
        returnValue = F("Dr.-Seitz-Platz");
        break;
    }
    case 84032:
    {
        returnValue = F("Dr.-Seitz-Str.");
        break;
    }
    case 84033:
    {
        returnValue = F("Dr.-Seitz-Weg");
        break;
    }
    case 84034:
    {
        returnValue = F("Dr.-Sell-Str.");
        break;
    }
    case 84035:
    {
        returnValue = F("Dr.-Selmair-Ring");
        break;
    }
    case 84036:
    {
        returnValue = F("Dr.-Semmelweis-Str.");
        break;
    }
    case 84037:
    {
        returnValue = F("Dr.-Semmelweis-Weg");
        break;
    }
    case 84038:
    {
        returnValue = F("Dr.-Severin-Illig-Str.");
        break;
    }
    case 84039:
    {
        returnValue = F("Dr.-Siebenpfeiffer-Str.");
        break;
    }
    case 84040:
    {
        returnValue = F("Dr.-Siegert-Weg");
        break;
    }
    case 84041:
    {
        returnValue = F("Dr.-Siegfried-Block-Str.");
        break;
    }
    case 84042:
    {
        returnValue = F("Dr.-Siegfried-Kohler-Str.");
        break;
    }
    case 84043:
    {
        returnValue = F("Dr.-Siegfried-Schütz-Str.");
        break;
    }
    case 84044:
    {
        returnValue = F("Dr.-Siegfried-Sieber-Weg");
        break;
    }
    case 84045:
    {
        returnValue = F("Dr.-Siegfried-Str.");
        break;
    }
    case 84046:
    {
        returnValue = F("Dr.-Sieglitz-Str.");
        break;
    }
    case 84047:
    {
        returnValue = F("Dr.-Siekermann-Weg");
        break;
    }
    case 84048:
    {
        returnValue = F("Dr.-Siekmann-Weg");
        break;
    }
    case 84049:
    {
        returnValue = F("Dr.-Sigl-Str.");
        break;
    }
    case 84050:
    {
        returnValue = F("Dr.-Sigmund-Jähn-Str.");
        break;
    }
    case 84051:
    {
        returnValue = F("Dr.-Silberborth-Str.");
        break;
    }
    case 84052:
    {
        returnValue = F("Dr.-Simbeck-Str.");
        break;
    }
    case 84053:
    {
        returnValue = F("Dr.-Simon-Weg");
        break;
    }
    case 84054:
    {
        returnValue = F("Dr.-Simoneit-Str.");
        break;
    }
    case 84055:
    {
        returnValue = F("Dr.-Simons-Str.");
        break;
    }
    case 84056:
    {
        returnValue = F("Dr.-Sinsteden-Str.");
        break;
    }
    case 84057:
    {
        returnValue = F("Dr.-Sittler-Str.");
        break;
    }
    case 84058:
    {
        returnValue = F("Dr.-Sommer-Str.");
        break;
    }
    case 84059:
    {
        returnValue = F("Dr.-Sondheimer-Str.");
        break;
    }
    case 84060:
    {
        returnValue = F("Dr.-Sonnenschein-Str.");
        break;
    }
    case 84061:
    {
        returnValue = F("Dr.-Spang-Str.");
        break;
    }
    case 84062:
    {
        returnValue = F("Dr.-Spieler-Str.");
        break;
    }
    case 84063:
    {
        returnValue = F("Dr.-Sprandel-Str.");
        break;
    }
    case 84064:
    {
        returnValue = F("Dr.-Springorum-Str.");
        break;
    }
    case 84065:
    {
        returnValue = F("Dr.-Spätling-Str.");
        break;
    }
    case 84066:
    {
        returnValue = F("Dr.-Stadler-Str.");
        break;
    }
    case 84067:
    {
        returnValue = F("Dr.-Stapff-Str.");
        break;
    }
    case 84068:
    {
        returnValue = F("Dr.-Stark-Str.");
        break;
    }
    case 84069:
    {
        returnValue = F("Dr.-Stecher-Promenade");
        break;
    }
    case 84070:
    {
        returnValue = F("Dr.-Steichele-Str.");
        break;
    }
    case 84071:
    {
        returnValue = F("Dr.-Steinbeißer-Str.");
        break;
    }
    case 84072:
    {
        returnValue = F("Dr.-Steinbrück-Str.");
        break;
    }
    case 84073:
    {
        returnValue = F("Dr.-Steiner-Str.");
        break;
    }
    case 84074:
    {
        returnValue = F("Dr.-Stelbrink-Str.");
        break;
    }
    case 84075:
    {
        returnValue = F("Dr.-Stelzner-Str.");
        break;
    }
    case 84076:
    {
        returnValue = F("Dr.-Stemler-Str.");
        break;
    }
    case 84077:
    {
        returnValue = F("Dr.-Stephan-Billinger-Str.");
        break;
    }
    case 84078:
    {
        returnValue = F("Dr.-Stephan-Grüter-Weg");
        break;
    }
    case 84079:
    {
        returnValue = F("Dr.-Stephani-Str.");
        break;
    }
    case 84080:
    {
        returnValue = F("Dr.-Stich-Str.");
        break;
    }
    case 84081:
    {
        returnValue = F("Dr.-Stiebel-Str.");
        break;
    }
    case 84082:
    {
        returnValue = F("Dr.-Stieler-Str.");
        break;
    }
    case 84083:
    {
        returnValue = F("Dr.-Stocker-Str.");
        break;
    }
    case 84084:
    {
        returnValue = F("Dr.-Stockmann-Str.");
        break;
    }
    case 84085:
    {
        returnValue = F("Dr.-Stolze-Str.");
        break;
    }
    case 84086:
    {
        returnValue = F("Dr.-Strahlmann-Weg");
        break;
    }
    case 84087:
    {
        returnValue = F("Dr.-Straub-Str.");
        break;
    }
    case 84088:
    {
        returnValue = F("Dr.-Strauß-Str.");
        break;
    }
    case 84089:
    {
        returnValue = F("Dr.-Strecker-Weg");
        break;
    }
    case 84090:
    {
        returnValue = F("Dr.-Striegler-Str.");
        break;
    }
    case 84091:
    {
        returnValue = F("Dr.-Strube-Platz");
        break;
    }
    case 84092:
    {
        returnValue = F("Dr.-Stöcker-Str.");
        break;
    }
    case 84093:
    {
        returnValue = F("Dr.-Stöcker-Weg");
        break;
    }
    case 84094:
    {
        returnValue = F("Dr.-Stöwesand-Str.");
        break;
    }
    case 84095:
    {
        returnValue = F("Dr.-Stützle-Weg");
        break;
    }
    case 84096:
    {
        returnValue = F("Dr.-Sunder-Str.");
        break;
    }
    case 84097:
    {
        returnValue = F("Dr.-Suren-Str.");
        break;
    }
    case 84098:
    {
        returnValue = F("Dr.-Tack-Str.");
        break;
    }
    case 84099:
    {
        returnValue = F("Dr.-Tadey-Weg");
        break;
    }
    case 84100:
    {
        returnValue = F("Dr.-Ted-Fritsche-Weg");
        break;
    }
    case 84101:
    {
        returnValue = F("Dr.-Terörde-Weg");
        break;
    }
    case 84102:
    {
        returnValue = F("Dr.-Th.-Nörber-Str.");
        break;
    }
    case 84103:
    {
        returnValue = F("Dr.-Thaler-Str.");
        break;
    }
    case 84104:
    {
        returnValue = F("Dr.-Thann-Str.");
        break;
    }
    case 84105:
    {
        returnValue = F("Dr.-Thenn-Str.");
        break;
    }
    case 84106:
    {
        returnValue = F("Dr.-Theo-Müller-Str.");
        break;
    }
    case 84107:
    {
        returnValue = F("Dr.-Theo-Neubauer-Str.");
        break;
    }
    case 84108:
    {
        returnValue = F("Dr.-Theobald-Schrems-Str.");
        break;
    }
    case 84109:
    {
        returnValue = F("Dr.-Theodor-Brugsch-Str.");
        break;
    }
    case 84110:
    {
        returnValue = F("Dr.-Theodor-Haubach-Str.");
        break;
    }
    case 84111:
    {
        returnValue = F("Dr.-Theodor-Neubauer-Siedlung");
        break;
    }
    case 84112:
    {
        returnValue = F("Dr.-Theodor-Neubauer-Str.");
        break;
    }
    case 84113:
    {
        returnValue = F("Dr.-Thomas-Dehler-Str.");
        break;
    }
    case 84114:
    {
        returnValue = F("Dr.-Thomas-Plaßmann-Weg");
        break;
    }
    case 84115:
    {
        returnValue = F("Dr.-Thomas-Schäfer-Platz");
        break;
    }
    case 84116:
    {
        returnValue = F("Dr.-Thoni-Str.");
        break;
    }
    case 84117:
    {
        returnValue = F("Dr.-Thyroff-Str.");
        break;
    }
    case 84118:
    {
        returnValue = F("Dr.-Tigges-Weg");
        break;
    }
    case 84119:
    {
        returnValue = F("Dr.-Timmermann-Str.");
        break;
    }
    case 84120:
    {
        returnValue = F("Dr.-Tippkemper-Str.");
        break;
    }
    case 84121:
    {
        returnValue = F("Dr.-Tjarks-Str.");
        break;
    }
    case 84122:
    {
        returnValue = F("Dr.-Toll-Str.");
        break;
    }
    case 84123:
    {
        returnValue = F("Dr.-Trampel-Weg");
        break;
    }
    case 84124:
    {
        returnValue = F("Dr.-Traugott-Bender-Str.");
        break;
    }
    case 84125:
    {
        returnValue = F("Dr.-Trautmann-Str.");
        break;
    }
    case 84126:
    {
        returnValue = F("Dr.-Treutlein-Weg");
        break;
    }
    case 84127:
    {
        returnValue = F("Dr.-Tribulowski-Str.");
        break;
    }
    case 84128:
    {
        returnValue = F("Dr.-Troch-Str.");
        break;
    }
    case 84129:
    {
        returnValue = F("Dr.-Tusch-Str.");
        break;
    }
    case 84130:
    {
        returnValue = F("Dr.-Tönsmeyer-Str.");
        break;
    }
    case 84131:
    {
        returnValue = F("Dr.-Tüffers-Str.");
        break;
    }
    case 84132:
    {
        returnValue = F("Dr.-Türk-Str.");
        break;
    }
    case 84133:
    {
        returnValue = F("Dr.-Ulla-Schirmer-Str.");
        break;
    }
    case 84134:
    {
        returnValue = F("Dr.-Ulrich-Koepff-Str.");
        break;
    }
    case 84135:
    {
        returnValue = F("Dr.-Ulrich-Platz");
        break;
    }
    case 84136:
    {
        returnValue = F("Dr.-Ulrich-Roshop-Str.");
        break;
    }
    case 84137:
    {
        returnValue = F("Dr.-Ulrich-Str.");
        break;
    }
    case 84138:
    {
        returnValue = F("Dr.-Ungewitter-Weg");
        break;
    }
    case 84139:
    {
        returnValue = F("Dr.-Unruh-Str.");
        break;
    }
    case 84140:
    {
        returnValue = F("Dr.-Urlage-Str.");
        break;
    }
    case 84141:
    {
        returnValue = F("Dr.-Urnau-Str.");
        break;
    }
    case 84142:
    {
        returnValue = F("Dr.-Valentin-Degen-Weg");
        break;
    }
    case 84143:
    {
        returnValue = F("Dr.-Valentin-Koch-Str.");
        break;
    }
    case 84144:
    {
        returnValue = F("Dr.-Valentin-Leicht-Str.");
        break;
    }
    case 84145:
    {
        returnValue = F("Dr.-Valentin-Müller-Str.");
        break;
    }
    case 84146:
    {
        returnValue = F("Dr.-Vehmeyer-Str.");
        break;
    }
    case 84147:
    {
        returnValue = F("Dr.-Velten-Str.");
        break;
    }
    case 84148:
    {
        returnValue = F("Dr.-Verbeek-Str.");
        break;
    }
    case 84149:
    {
        returnValue = F("Dr.-Verweyen-Str.");
        break;
    }
    case 84150:
    {
        returnValue = F("Dr.-Vesenmayer-Weg");
        break;
    }
    case 84151:
    {
        returnValue = F("Dr.-Vetter-Str.");
        break;
    }
    case 84152:
    {
        returnValue = F("Dr.-Viktor-Frankl-Weg");
        break;
    }
    case 84153:
    {
        returnValue = F("Dr.-Virchow-Str.");
        break;
    }
    case 84154:
    {
        returnValue = F("Dr.-Vits-Str.");
        break;
    }
    case 84155:
    {
        returnValue = F("Dr.-Vitus-Metz-Str.");
        break;
    }
    case 84156:
    {
        returnValue = F("Dr.-Vogelbacher-Str.");
        break;
    }
    case 84157:
    {
        returnValue = F("Dr.-Vogeler-Str.");
        break;
    }
    case 84158:
    {
        returnValue = F("Dr.-Vogt-Str.");
        break;
    }
    case 84159:
    {
        returnValue = F("Dr.-Voigt-Str.");
        break;
    }
    case 84160:
    {
        returnValue = F("Dr.-Vollbracht-Str.");
        break;
    }
    case 84161:
    {
        returnValue = F("Dr.-Vorbrugg-Weg");
        break;
    }
    case 84162:
    {
        returnValue = F("Dr.-Voss-Str.");
        break;
    }
    case 84163:
    {
        returnValue = F("Dr.-Völk-Weg");
        break;
    }
    case 84164:
    {
        returnValue = F("Dr.-Völker-Str.");
        break;
    }
    case 84165:
    {
        returnValue = F("Dr.-W.-Külz-Str.");
        break;
    }
    case 84166:
    {
        returnValue = F("Dr.-Wachsmann-Str.");
        break;
    }
    case 84167:
    {
        returnValue = F("Dr.-Wacker-Str.");
        break;
    }
    case 84168:
    {
        returnValue = F("Dr.-Wagner-Gasse");
        break;
    }
    case 84169:
    {
        returnValue = F("Dr.-Wagner-Str.");
        break;
    }
    case 84170:
    {
        returnValue = F("Dr.-Wagner-Weg");
        break;
    }
    case 84171:
    {
        returnValue = F("Dr.-Wahl-Promenade");
        break;
    }
    case 84172:
    {
        returnValue = F("Dr.-Walder-Promenade");
        break;
    }
    case 84173:
    {
        returnValue = F("Dr.-Waldmann-Str.");
        break;
    }
    case 84174:
    {
        returnValue = F("Dr.-Waldmann-Weg");
        break;
    }
    case 84175:
    {
        returnValue = F("Dr.-Wallner-Str.");
        break;
    }
    case 84176:
    {
        returnValue = F("Dr.-Wallrapp-Weg");
        break;
    }
    case 84177:
    {
        returnValue = F("Dr.-Walter-Friedrich-Str.");
        break;
    }
    case 84178:
    {
        returnValue = F("Dr.-Walter-Haschke-Str.");
        break;
    }
    case 84179:
    {
        returnValue = F("Dr.-Walter-Hüttel-Str.");
        break;
    }
    case 84180:
    {
        returnValue = F("Dr.-Walter-Kleinschmidt-Str.");
        break;
    }
    case 84181:
    {
        returnValue = F("Dr.-Walter-Kolb-Str.");
        break;
    }
    case 84182:
    {
        returnValue = F("Dr.-Walter-Lang-Weg");
        break;
    }
    case 84183:
    {
        returnValue = F("Dr.-Walter-Langer-Str.");
        break;
    }
    case 84184:
    {
        returnValue = F("Dr.-Walter-Lessing-Str.");
        break;
    }
    case 84185:
    {
        returnValue = F("Dr.-Walter-Richter-Weg");
        break;
    }
    case 84186:
    {
        returnValue = F("Dr.-Walter-Romberg-Steig");
        break;
    }
    case 84187:
    {
        returnValue = F("Dr.-Walter-Schmitt-Anlage");
        break;
    }
    case 84188:
    {
        returnValue = F("Dr.-Walter-Thom-Str.");
        break;
    }
    case 84189:
    {
        returnValue = F("Dr.-Walter-Zoth-Allee");
        break;
    }
    case 84190:
    {
        returnValue = F("Dr.-Walther-Hartmann-Str.");
        break;
    }
    case 84191:
    {
        returnValue = F("Dr.-Walther-Str.");
        break;
    }
    case 84192:
    {
        returnValue = F("Dr.-Wander-Str.");
        break;
    }
    case 84193:
    {
        returnValue = F("Dr.-Wandinger-Str.");
        break;
    }
    case 84194:
    {
        returnValue = F("Dr.-Warsing-Str.");
        break;
    }
    case 84195:
    {
        returnValue = F("Dr.-Waßmund-Str.");
        break;
    }
    case 84196:
    {
        returnValue = F("Dr.-Weber-Str.");
        break;
    }
    case 84197:
    {
        returnValue = F("Dr.-Wehner-Str.");
        break;
    }
    case 84198:
    {
        returnValue = F("Dr.-Wehsarg-Str.");
        break;
    }
    case 84199:
    {
        returnValue = F("Dr.-Weidig-Str.");
        break;
    }
    case 84200:
    {
        returnValue = F("Dr.-Weil-Str.");
        break;
    }
    case 84201:
    {
        returnValue = F("Dr.-Weil-Weg");
        break;
    }
    case 84202:
    {
        returnValue = F("Dr.-Weinberg-Str.");
        break;
    }
    case 84203:
    {
        returnValue = F("Dr.-Weinholz-Str.");
        break;
    }
    case 84204:
    {
        returnValue = F("Dr.-Weinmann-Str.");
        break;
    }
    case 84205:
    {
        returnValue = F("Dr.-Weise-Str.");
        break;
    }
    case 84206:
    {
        returnValue = F("Dr.-Weiß-Str.");
        break;
    }
    case 84207:
    {
        returnValue = F("Dr.-Weißenfeld-Str.");
        break;
    }
    case 84208:
    {
        returnValue = F("Dr.-Weißler-Weg");
        break;
    }
    case 84209:
    {
        returnValue = F("Dr.-Welsch-Terrasse");
        break;
    }
    case 84210:
    {
        returnValue = F("Dr.-Wendel-Mertz-Str.");
        break;
    }
    case 84211:
    {
        returnValue = F("Dr.-Werner-Forßmann-Str.");
        break;
    }
    case 84212:
    {
        returnValue = F("Dr.-Werner-Freyberg-Str.");
        break;
    }
    case 84213:
    {
        returnValue = F("Dr.-Werner-Lay-Weg");
        break;
    }
    case 84214:
    {
        returnValue = F("Dr.-Werner-Stoll-Str.");
        break;
    }
    case 84215:
    {
        returnValue = F("Dr.-Werner-Str.");
        break;
    }
    case 84216:
    {
        returnValue = F("Dr.-Wessel-Weg");
        break;
    }
    case 84217:
    {
        returnValue = F("Dr.-Wesselsstr.");
        break;
    }
    case 84218:
    {
        returnValue = F("Dr.-Weyer-Str.");
        break;
    }
    case 84219:
    {
        returnValue = F("Dr.-Weymann-Str.");
        break;
    }
    case 84220:
    {
        returnValue = F("Dr.-Widmann-Str.");
        break;
    }
    case 84221:
    {
        returnValue = F("Dr.-Wieland-Str.");
        break;
    }
    case 84222:
    {
        returnValue = F("Dr.-Wiesand-Str.");
        break;
    }
    case 84223:
    {
        returnValue = F("Dr.-Wild-Str.");
        break;
    }
    case 84224:
    {
        returnValue = F("Dr.-Wilde-Str.");
        break;
    }
    case 84225:
    {
        returnValue = F("Dr.-Wilhelm-Adt-Str.");
        break;
    }
    case 84226:
    {
        returnValue = F("Dr.-Wilhelm-Arnold-Str.");
        break;
    }
    case 84227:
    {
        returnValue = F("Dr.-Wilhelm-Erb-Str.");
        break;
    }
    case 84228:
    {
        returnValue = F("Dr.-Wilhelm-Feit-Str.");
        break;
    }
    case 84229:
    {
        returnValue = F("Dr.-Wilhelm-Glasser Weg");
        break;
    }
    case 84230:
    {
        returnValue = F("Dr.-Wilhelm-Haller-Str.");
        break;
    }
    case 84231:
    {
        returnValue = F("Dr.-Wilhelm-Harnisch-Str.");
        break;
    }
    case 84232:
    {
        returnValue = F("Dr.-Wilhelm-Hilser-Str.");
        break;
    }
    case 84233:
    {
        returnValue = F("Dr.-Wilhelm-Hoegner-Platz");
        break;
    }
    case 84234:
    {
        returnValue = F("Dr.-Wilhelm-Hoegner-Str.");
        break;
    }
    case 84235:
    {
        returnValue = F("Dr.-Wilhelm-Höck-Ring");
        break;
    }
    case 84236:
    {
        returnValue = F("Dr.-Wilhelm-Kempe-Str.");
        break;
    }
    case 84237:
    {
        returnValue = F("Dr.-Wilhelm-Kinghorst-Str.");
        break;
    }
    case 84238:
    {
        returnValue = F("Dr.-Wilhelm-Kirchhoff-Str.");
        break;
    }
    case 84239:
    {
        returnValue = F("Dr.-Wilhelm-Knarr-Weg");
        break;
    }
    case 84240:
    {
        returnValue = F("Dr.-Wilhelm-Kraft-Weg");
        break;
    }
    case 84241:
    {
        returnValue = F("Dr.-Wilhelm-Krohn-Weg");
        break;
    }
    case 84242:
    {
        returnValue = F("Dr.-Wilhelm-Külz-Allee");
        break;
    }
    case 84243:
    {
        returnValue = F("Dr.-Wilhelm-Külz-Platz");
        break;
    }
    case 84244:
    {
        returnValue = F("Dr.-Wilhelm-Külz-Siedlung");
        break;
    }
    case 84245:
    {
        returnValue = F("Dr.-Wilhelm-Külz-Str.");
        break;
    }
    case 84246:
    {
        returnValue = F("Dr.-Wilhelm-Külz-Viertel");
        break;
    }
    case 84247:
    {
        returnValue = F("Dr.-Wilhelm-Ladenburger-Str.");
        break;
    }
    case 84248:
    {
        returnValue = F("Dr.-Wilhelm-Lohmüller-Str.");
        break;
    }
    case 84249:
    {
        returnValue = F("Dr.-Wilhelm-Löffler-Str.");
        break;
    }
    case 84250:
    {
        returnValue = F("Dr.-Wilhelm-May-Str.");
        break;
    }
    case 84251:
    {
        returnValue = F("Dr.-Wilhelm-Monz-Str.");
        break;
    }
    case 84252:
    {
        returnValue = F("Dr.-Wilhelm-Reuter-Str.");
        break;
    }
    case 84253:
    {
        returnValue = F("Dr.-Wilhelm-Röpke-Str.");
        break;
    }
    case 84254:
    {
        returnValue = F("Dr.-Wilhelm-Schaeffler-Str.");
        break;
    }
    case 84255:
    {
        returnValue = F("Dr.-Wilhelm-Schmidt-Str.");
        break;
    }
    case 84256:
    {
        returnValue = F("Dr.-Wilhelm-Schoof-Str.");
        break;
    }
    case 84257:
    {
        returnValue = F("Dr.-Wilhelm-Schultheis-Str.");
        break;
    }
    case 84258:
    {
        returnValue = F("Dr.-Wilhelm-Schüler-Ring");
        break;
    }
    case 84259:
    {
        returnValue = F("Dr.-Wilhelm-Stich-Str.");
        break;
    }
    case 84260:
    {
        returnValue = F("Dr.-Wilhelm-Upmeyer-Str.");
        break;
    }
    case 84261:
    {
        returnValue = F("Dr.-Wilhelm-Wielandt-Str.");
        break;
    }
    case 84262:
    {
        returnValue = F("Dr.-Wilke-Str.");
        break;
    }
    case 84263:
    {
        returnValue = F("Dr.-Wille-Str.");
        break;
    }
    case 84264:
    {
        returnValue = F("Dr.-Willem-Pies-Str.");
        break;
    }
    case 84265:
    {
        returnValue = F("Dr.-Willi-Bergmann-Str.");
        break;
    }
    case 84266:
    {
        returnValue = F("Dr.-Willi-Krüger-Weg");
        break;
    }
    case 84267:
    {
        returnValue = F("Dr.-Willi-Reiland-Ring");
        break;
    }
    case 84268:
    {
        returnValue = F("Dr.-Willms-Str.");
        break;
    }
    case 84269:
    {
        returnValue = F("Dr.-Winckler-Str.");
        break;
    }
    case 84270:
    {
        returnValue = F("Dr.-Winkhaus-Weg");
        break;
    }
    case 84271:
    {
        returnValue = F("Dr.-Winkler-Weg");
        break;
    }
    case 84272:
    {
        returnValue = F("Dr.-Winklhofer-Str.");
        break;
    }
    case 84273:
    {
        returnValue = F("Dr.-Winklmann-Weg");
        break;
    }
    case 84274:
    {
        returnValue = F("Dr.-Winter-Str.");
        break;
    }
    case 84275:
    {
        returnValue = F("Dr.-Winters-Str.");
        break;
    }
    case 84276:
    {
        returnValue = F("Dr.-Wintrich-Str.");
        break;
    }
    case 84277:
    {
        returnValue = F("Dr.-Wintterlin-Weg");
        break;
    }
    case 84278:
    {
        returnValue = F("Dr.-Wirth-Str.");
        break;
    }
    case 84279:
    {
        returnValue = F("Dr.-Wirtz-Str.");
        break;
    }
    case 84280:
    {
        returnValue = F("Dr.-Wirzmüller-Str.");
        break;
    }
    case 84281:
    {
        returnValue = F("Dr.-Witt-Platz");
        break;
    }
    case 84282:
    {
        returnValue = F("Dr.-Witte-Str.");
        break;
    }
    case 84283:
    {
        returnValue = F("Dr.-Wittern-Gang");
        break;
    }
    case 84284:
    {
        returnValue = F("Dr.-Wittmann-Str.");
        break;
    }
    case 84285:
    {
        returnValue = F("Dr.-Wittrup-Str.");
        break;
    }
    case 84286:
    {
        returnValue = F("Dr.-Wodrich-Str.");
        break;
    }
    case 84287:
    {
        returnValue = F("Dr.-Wohlfahrt-Str.");
        break;
    }
    case 84288:
    {
        returnValue = F("Dr.-Wohnlich-Str.");
        break;
    }
    case 84289:
    {
        returnValue = F("Dr.-Wolf-Str.");
        break;
    }
    case 84290:
    {
        returnValue = F("Dr.-Wolff-Str.");
        break;
    }
    case 84291:
    {
        returnValue = F("Dr.-Wolfgang-Gruber-Str.");
        break;
    }
    case 84292:
    {
        returnValue = F("Dr.-Wolfgang-Günther-Str.");
        break;
    }
    case 84293:
    {
        returnValue = F("Dr.-Wolfgang-Heybey-Weg");
        break;
    }
    case 84294:
    {
        returnValue = F("Dr.-Wolfgang-Krämer-Str.");
        break;
    }
    case 84295:
    {
        returnValue = F("Dr.-Wolfgang-Schoene-Weg");
        break;
    }
    case 84296:
    {
        returnValue = F("Dr.-Wolfhart-Scharf-Str.");
        break;
    }
    case 84297:
    {
        returnValue = F("Dr.-Wolman-Str.");
        break;
    }
    case 84298:
    {
        returnValue = F("Dr.-Wuttig-Str.");
        break;
    }
    case 84299:
    {
        returnValue = F("Dr.-Würth-Str.");
        break;
    }
    case 84300:
    {
        returnValue = F("Dr.-Würzburger-Str.");
        break;
    }
    case 84301:
    {
        returnValue = F("Dr.-Wüstenfeld-Str.");
        break;
    }
    case 84302:
    {
        returnValue = F("Dr.-Zacher-Str.");
        break;
    }
    case 84303:
    {
        returnValue = F("Dr.-Zahn-Str.");
        break;
    }
    case 84304:
    {
        returnValue = F("Dr.-Zamenhof-Str.");
        break;
    }
    case 84305:
    {
        returnValue = F("Dr.-Zenglein-Str.");
        break;
    }
    case 84306:
    {
        returnValue = F("Dr.-Zieger-Str.");
        break;
    }
    case 84307:
    {
        returnValue = F("Dr.-Zierl-Str.");
        break;
    }
    case 84308:
    {
        returnValue = F("Dr.-Ziesche-Str.");
        break;
    }
    case 84309:
    {
        returnValue = F("Dr.-Zimmer-Str.");
        break;
    }
    case 84310:
    {
        returnValue = F("Dr.-Zimmermann-Str.");
        break;
    }
    case 84311:
    {
        returnValue = F("Dr.-Zimmermann-Weg");
        break;
    }
    case 84312:
    {
        returnValue = F("Dr.-Zinn-Str.");
        break;
    }
    case 84313:
    {
        returnValue = F("Dr.-Zinn-Weg");
        break;
    }
    case 84314:
    {
        returnValue = F("Dr.-Zoller-Str.");
        break;
    }
    case 84315:
    {
        returnValue = F("Dr.-Zumach-Ring");
        break;
    }
    case 84316:
    {
        returnValue = F("Dr.-Zurbrüggen-Str.");
        break;
    }
    case 84317:
    {
        returnValue = F("Dr.-van-Heek-Str.");
        break;
    }
    case 84318:
    {
        returnValue = F("Dr.-vom-Bruch- Brücke");
        break;
    }
    case 84319:
    {
        returnValue = F("Dr.-von-Bangold-Str.");
        break;
    }
    case 84320:
    {
        returnValue = F("Dr.-von-Brentano-Str.");
        break;
    }
    case 84321:
    {
        returnValue = F("Dr.-von-Daller-Str.");
        break;
    }
    case 84322:
    {
        returnValue = F("Dr.-von-Fromm-Str.");
        break;
    }
    case 84323:
    {
        returnValue = F("Dr.-von-Hörmann-Str.");
        break;
    }
    case 84324:
    {
        returnValue = F("Dr.-von-Jhering-Str.");
        break;
    }
    case 84325:
    {
        returnValue = F("Dr.-von-Lips-Str.");
        break;
    }
    case 84326:
    {
        returnValue = F("Dr.-von-Oy-Weg");
        break;
    }
    case 84327:
    {
        returnValue = F("Dr.-von-Pichler-Platz");
        break;
    }
    case 84328:
    {
        returnValue = F("Dr.-von-Rieppel-Str.");
        break;
    }
    case 84329:
    {
        returnValue = F("Dr.-von-den-Driesch-Str.");
        break;
    }
    case 84330:
    {
        returnValue = F("Dr.-Üblacker-Weg");
        break;
    }
    case 84331:
    {
        returnValue = F("Dr.Alfred-Berg-Str.");
        break;
    }
    case 84332:
    {
        returnValue = F("Dr.Avenarius-Herborn-Str.");
        break;
    }
    case 84333:
    {
        returnValue = F("Dr.Benson-Str.");
        break;
    }
    case 84334:
    {
        returnValue = F("Dr.Carl-Busch-Str.");
        break;
    }
    case 84335:
    {
        returnValue = F("Dr.Darge-Str.");
        break;
    }
    case 84336:
    {
        returnValue = F("Dr.Dudziak-Park");
        break;
    }
    case 84337:
    {
        returnValue = F("Dr.Eckener-Str.");
        break;
    }
    case 84338:
    {
        returnValue = F("Dr.Eduard-Rolle-Str.");
        break;
    }
    case 84339:
    {
        returnValue = F("Dr.Gossmann-Str.");
        break;
    }
    case 84340:
    {
        returnValue = F("Dr.Gustav-Knodel-Str.");
        break;
    }
    case 84341:
    {
        returnValue = F("Dr.Haxpointner-Str.");
        break;
    }
    case 84342:
    {
        returnValue = F("Dr.Herrmann Str.");
        break;
    }
    case 84343:
    {
        returnValue = F("Dr.Josef-Drescher-Str.");
        break;
    }
    case 84344:
    {
        returnValue = F("Dr.Karsten-Weg");
        break;
    }
    case 84345:
    {
        returnValue = F("Dr.Levi-Str.");
        break;
    }
    case 84346:
    {
        returnValue = F("Dr.Ottmar-Kohler-Str.");
        break;
    }
    case 84347:
    {
        returnValue = F("Dr.Rentzing-Str.");
        break;
    }
    case 84348:
    {
        returnValue = F("Dr.Sauerbruchstr.");
        break;
    }
    case 84349:
    {
        returnValue = F("Dr.Sudbrack-Str.");
        break;
    }
    case 84350:
    {
        returnValue = F("Dr.Trittelvitzstr.");
        break;
    }
    case 84351:
    {
        returnValue = F("Dr.Werner-Esser-Str.");
        break;
    }
    case 84352:
    {
        returnValue = F("Dr.Wiefel-Str.");
        break;
    }
    case 84353:
    {
        returnValue = F("Dr.h.c.-Karl-Barich-Str.");
        break;
    }
    case 84354:
    {
        returnValue = F("Dr.–Schlögl-Str.");
        break;
    }
    case 84355:
    {
        returnValue = F("Draakenstieg");
        break;
    }
    case 84356:
    {
        returnValue = F("Draaser Weg");
        break;
    }
    case 84357:
    {
        returnValue = F("Drabastr.");
        break;
    }
    case 84358:
    {
        returnValue = F("Drabbenstr.");
        break;
    }
    case 84359:
    {
        returnValue = F("Drabenderhöher Str.");
        break;
    }
    case 84360:
    {
        returnValue = F("Drabertstr.");
        break;
    }
    case 84361:
    {
        returnValue = F("Dracheler Weg");
        break;
    }
    case 84362:
    {
        returnValue = F("Drachen");
        break;
    }
    case 84363:
    {
        returnValue = F("Drachenbahn");
        break;
    }
    case 84364:
    {
        returnValue = F("Drachenberg");
        break;
    }
    case 84365:
    {
        returnValue = F("Drachenbergblick");
        break;
    }
    case 84366:
    {
        returnValue = F("Drachenbergstr.");
        break;
    }
    case 84367:
    {
        returnValue = F("Drachenbergweg");
        break;
    }
    case 84368:
    {
        returnValue = F("Drachenburg");
        break;
    }
    case 84369:
    {
        returnValue = F("Drachenburgstr.");
        break;
    }
    case 84370:
    {
        returnValue = F("Drachenburgweg");
        break;
    }
    case 84371:
    {
        returnValue = F("Drachenfeld");
        break;
    }
    case 84372:
    {
        returnValue = F("Drachenfels");
        break;
    }
    case 84373:
    {
        returnValue = F("Drachenfelsblick");
        break;
    }
    case 84374:
    {
        returnValue = F("Drachenfelsplateau");
        break;
    }
    case 84375:
    {
        returnValue = F("Drachenfelsstr.");
        break;
    }
    case 84376:
    {
        returnValue = F("Drachenfelsweg");
        break;
    }
    case 84377:
    {
        returnValue = F("Drachengasse");
        break;
    }
    case 84378:
    {
        returnValue = F("Drachenhohl");
        break;
    }
    case 84379:
    {
        returnValue = F("Drachenkehle");
        break;
    }
    case 84380:
    {
        returnValue = F("Drachenkopf");
        break;
    }
    case 84381:
    {
        returnValue = F("Drachenkopfweg");
        break;
    }
    case 84382:
    {
        returnValue = F("Drachenkoppel");
        break;
    }
    case 84383:
    {
        returnValue = F("Drachenleithe");
        break;
    }
    case 84384:
    {
        returnValue = F("Drachenloch");
        break;
    }
    case 84385:
    {
        returnValue = F("Drachenpfad");
        break;
    }
    case 84386:
    {
        returnValue = F("Drachenrebenweg");
        break;
    }
    case 84387:
    {
        returnValue = F("Drachenschwanz");
        break;
    }
    case 84388:
    {
        returnValue = F("Drachenschwanzbrücke");
        break;
    }
    case 84389:
    {
        returnValue = F("Drachenschwanzstr.");
        break;
    }
    case 84390:
    {
        returnValue = F("Drachensteig");
        break;
    }
    case 84391:
    {
        returnValue = F("Drachensteiner Weg");
        break;
    }
    case 84392:
    {
        returnValue = F("Drachensteinstr.");
        break;
    }
    case 84393:
    {
        returnValue = F("Drachenthal");
        break;
    }
    case 84394:
    {
        returnValue = F("Drachenweg");
        break;
    }
    case 84395:
    {
        returnValue = F("Drachenwiese");
        break;
    }
    case 84396:
    {
        returnValue = F("Drachestr.");
        break;
    }
    case 84397:
    {
        returnValue = F("Drachhausener Mühlenweg");
        break;
    }
    case 84398:
    {
        returnValue = F("Drachhausener Str.");
        break;
    }
    case 84399:
    {
        returnValue = F("Drachselebene");
        break;
    }
    case 84400:
    {
        returnValue = F("Drachters Weg");
        break;
    }
    case 84401:
    {
        returnValue = F("Drackenbergweg");
        break;
    }
    case 84402:
    {
        returnValue = F("Drackendorf-Center");
        break;
    }
    case 84403:
    {
        returnValue = F("Drackendorfer Str.");
        break;
    }
    case 84404:
    {
        returnValue = F("Drackendorfer Weg");
        break;
    }
    case 84405:
    {
        returnValue = F("Drackenstedter Str.");
        break;
    }
    case 84406:
    {
        returnValue = F("Drackenstedter Weg");
        break;
    }
    case 84407:
    {
        returnValue = F("Drackensteiner Str.");
        break;
    }
    case 84408:
    {
        returnValue = F("Drackensteinstr.");
        break;
    }
    case 84409:
    {
        returnValue = F("Dradtweg");
        break;
    }
    case 84410:
    {
        returnValue = F("Draemannsmühle");
        break;
    }
    case 84411:
    {
        returnValue = F("Draesekestr.");
        break;
    }
    case 84412:
    {
        returnValue = F("Draf-Weg");
        break;
    }
    case 84413:
    {
        returnValue = F("Drafenstr.");
        break;
    }
    case 84414:
    {
        returnValue = F("Draft");
        break;
    }
    case 84415:
    {
        returnValue = F("Dragahner Weg");
        break;
    }
    case 84416:
    {
        returnValue = F("Dragendorffstr.");
        break;
    }
    case 84417:
    {
        returnValue = F("Dragensdorf");
        break;
    }
    case 84418:
    {
        returnValue = F("Drager Str.");
        break;
    }
    case 84419:
    {
        returnValue = F("Drager Weg");
        break;
    }
    case 84420:
    {
        returnValue = F("Dragocostr.");
        break;
    }
    case 84421:
    {
        returnValue = F("Dragoner");
        break;
    }
    case 84422:
    {
        returnValue = F("Dragoneranger");
        break;
    }
    case 84423:
    {
        returnValue = F("Dragonergasse");
        break;
    }
    case 84424:
    {
        returnValue = F("Dragonergässle");
        break;
    }
    case 84425:
    {
        returnValue = F("Dragonerschneise");
        break;
    }
    case 84426:
    {
        returnValue = F("Dragonerstr.");
        break;
    }
    case 84427:
    {
        returnValue = F("Dragonerweg");
        break;
    }
    case 84428:
    {
        returnValue = F("Dragsdorfer Dorfstr.");
        break;
    }
    case 84429:
    {
        returnValue = F("Dragsdorfer Hauptstr.");
        break;
    }
    case 84430:
    {
        returnValue = F("Dragsdorfer Str.");
        break;
    }
    case 84431:
    {
        returnValue = F("Draguner Weg");
        break;
    }
    case 84432:
    {
        returnValue = F("Dragweg");
        break;
    }
    case 84433:
    {
        returnValue = F("Drahn");
        break;
    }
    case 84434:
    {
        returnValue = F("Drahnstr.");
        break;
    }
    case 84435:
    {
        returnValue = F("Draht");
        break;
    }
    case 84436:
    {
        returnValue = F("Drahtbühl");
        break;
    }
    case 84437:
    {
        returnValue = F("Drahthammer");
        break;
    }
    case 84438:
    {
        returnValue = F("Drahthammerstr.");
        break;
    }
    case 84439:
    {
        returnValue = F("Drahthüttenweg");
        break;
    }
    case 84440:
    {
        returnValue = F("Drahtmühle");
        break;
    }
    case 84441:
    {
        returnValue = F("Drahtmühlenweg");
        break;
    }
    case 84442:
    {
        returnValue = F("Drahtmühlhof");
        break;
    }
    case 84443:
    {
        returnValue = F("Drahtweg");
        break;
    }
    case 84444:
    {
        returnValue = F("Drahtwerke");
        break;
    }
    case 84445:
    {
        returnValue = F("Drahtzieherstr.");
        break;
    }
    case 84446:
    {
        returnValue = F("Drahtzieherweg");
        break;
    }
    case 84447:
    {
        returnValue = F("Drahwener Ring");
        break;
    }
    case 84448:
    {
        returnValue = F("Draiberg");
        break;
    }
    case 84449:
    {
        returnValue = F("Draibergweg");
        break;
    }
    case 84450:
    {
        returnValue = F("Draisdorfer Str.");
        break;
    }
    case 84451:
    {
        returnValue = F("Draisdorfer Weg");
        break;
    }
    case 84452:
    {
        returnValue = F("Draisendorf");
        break;
    }
    case 84453:
    {
        returnValue = F("Draisendorfer Str.");
        break;
    }
    case 84454:
    {
        returnValue = F("Draisendorfer Weg");
        break;
    }
    case 84455:
    {
        returnValue = F("Draiser Str.");
        break;
    }
    case 84456:
    {
        returnValue = F("Draiser Weg");
        break;
    }
    case 84457:
    {
        returnValue = F("Draisstr.");
        break;
    }
    case 84458:
    {
        returnValue = F("Draisweg");
        break;
    }
    case 84459:
    {
        returnValue = F("Drakenburg");
        break;
    }
    case 84460:
    {
        returnValue = F("Drakenburger Str.");
        break;
    }
    case 84461:
    {
        returnValue = F("Drakenpfuhl");
        break;
    }
    case 84462:
    {
        returnValue = F("Drakenschwanz");
        break;
    }
    case 84463:
    {
        returnValue = F("Drakenstieg");
        break;
    }
    case 84464:
    {
        returnValue = F("Drakestr.");
        break;
    }
    case 84465:
    {
        returnValue = F("Drallenhorenstr.");
        break;
    }
    case 84466:
    {
        returnValue = F("Drallweg");
        break;
    }
    case 84467:
    {
        returnValue = F("Dramburger Str.");
        break;
    }
    case 84468:
    {
        returnValue = F("Dramburger Weg");
        break;
    }
    case 84469:
    {
        returnValue = F("Dramfelder Str.");
        break;
    }
    case 84470:
    {
        returnValue = F("Drammeeck");
        break;
    }
    case 84471:
    {
        returnValue = F("Drammendorf");
        break;
    }
    case 84472:
    {
        returnValue = F("Drammenweg");
        break;
    }
    case 84473:
    {
        returnValue = F("Drammestr.");
        break;
    }
    case 84474:
    {
        returnValue = F("Drammeweg");
        break;
    }
    case 84475:
    {
        returnValue = F("Drangstedter Chaussee");
        break;
    }
    case 84476:
    {
        returnValue = F("Drangstedter Postweg");
        break;
    }
    case 84477:
    {
        returnValue = F("Drangstedter Str.");
        break;
    }
    case 84478:
    {
        returnValue = F("Drangstedter Weg");
        break;
    }
    case 84479:
    {
        returnValue = F("Drangstweg");
        break;
    }
    case 84480:
    {
        returnValue = F("Drankhausen");
        break;
    }
    case 84481:
    {
        returnValue = F("Drannemanns Kamp");
        break;
    }
    case 84482:
    {
        returnValue = F("Dransbergstr.");
        break;
    }
    case 84483:
    {
        returnValue = F("Dransbergweg");
        break;
    }
    case 84484:
    {
        returnValue = F("Dranser Damm");
        break;
    }
    case 84485:
    {
        returnValue = F("Dranser Dorfstr.");
        break;
    }
    case 84486:
    {
        returnValue = F("Dranser Str.");
        break;
    }
    case 84487:
    {
        returnValue = F("Dranser Wiesenstr.");
        break;
    }
    case 84488:
    {
        returnValue = F("Dransesiedlung An den Eichen");
        break;
    }
    case 84489:
    {
        returnValue = F("Dransesiedlung Seeblick");
        break;
    }
    case 84490:
    {
        returnValue = F("Dransesiedlung Waldeck");
        break;
    }
    case 84491:
    {
        returnValue = F("Dransestr.");
        break;
    }
    case 84492:
    {
        returnValue = F("Dranseweg");
        break;
    }
    case 84493:
    {
        returnValue = F("Dransfelder Rampe");
        break;
    }
    case 84494:
    {
        returnValue = F("Dransfelder Str.");
        break;
    }
    case 84495:
    {
        returnValue = F("Dransfelder Weg");
        break;
    }
    case 84496:
    {
        returnValue = F("Dranske Hof");
        break;
    }
    case 84497:
    {
        returnValue = F("Drantumer Weg");
        break;
    }
    case 84498:
    {
        returnValue = F("Draperstr.");
        break;
    }
    case 84499:
    {
        returnValue = F("Drasberger Weg");
        break;
    }
    case 84500:
    {
        returnValue = F("Draschwitzer Hauptstr.");
        break;
    }
    case 84501:
    {
        returnValue = F("Draschwitzer Landstr.");
        break;
    }
    case 84502:
    {
        returnValue = F("Draschwitzer Str.");
        break;
    }
    case 84503:
    {
        returnValue = F("Drasdoer Str.");
        break;
    }
    case 84504:
    {
        returnValue = F("Draseiertweg");
        break;
    }
    case 84505:
    {
        returnValue = F("Drasenbeck");
        break;
    }
    case 84506:
    {
        returnValue = F("Drasenberg");
        break;
    }
    case 84507:
    {
        returnValue = F("Drasewitztwete");
        break;
    }
    case 84508:
    {
        returnValue = F("Dratumer Str.");
        break;
    }
    case 84509:
    {
        returnValue = F("Drau");
        break;
    }
    case 84510:
    {
        returnValue = F("Draudtschneise");
        break;
    }
    case 84511:
    {
        returnValue = F("Draum");
        break;
    }
    case 84512:
    {
        returnValue = F("Drausendorfer Str.");
        break;
    }
    case 84513:
    {
        returnValue = F("Drausnickstr.");
        break;
    }
    case 84514:
    {
        returnValue = F("Draustr.");
        break;
    }
    case 84515:
    {
        returnValue = F("Draustweg");
        break;
    }
    case 84516:
    {
        returnValue = F("Draußenberg");
        break;
    }
    case 84517:
    {
        returnValue = F("Draußgartenstr.");
        break;
    }
    case 84518:
    {
        returnValue = F("Dravenhöh");
        break;
    }
    case 84519:
    {
        returnValue = F("Dravisweg");
        break;
    }
    case 84520:
    {
        returnValue = F("Drawehner Str.");
        break;
    }
    case 84521:
    {
        returnValue = F("Drawenweg");
        break;
    }
    case 84522:
    {
        returnValue = F("Draxlbergstr.");
        break;
    }
    case 84523:
    {
        returnValue = F("Drayerbühl");
        break;
    }
    case 84524:
    {
        returnValue = F("Dreangel");
        break;
    }
    case 84525:
    {
        returnValue = F("Drebacher Str.");
        break;
    }
    case 84526:
    {
        returnValue = F("Drebagrund");
        break;
    }
    case 84527:
    {
        returnValue = F("Drebber Str.");
        break;
    }
    case 84528:
    {
        returnValue = F("Drebberfuhrenweg");
        break;
    }
    case 84529:
    {
        returnValue = F("Drebberweg");
        break;
    }
    case 84530:
    {
        returnValue = F("Drebenstedt");
        break;
    }
    case 84531:
    {
        returnValue = F("Drebkauer Str.");
        break;
    }
    case 84532:
    {
        returnValue = F("Drebnitzer Weg");
        break;
    }
    case 84533:
    {
        returnValue = F("Drebsdorfer Dorfstr.");
        break;
    }
    case 84534:
    {
        returnValue = F("Drebsdorfer Str.");
        break;
    }
    case 84535:
    {
        returnValue = F("Drechselbergweg");
        break;
    }
    case 84536:
    {
        returnValue = F("Drechselstr.");
        break;
    }
    case 84537:
    {
        returnValue = F("Drechserweg");
        break;
    }
    case 84538:
    {
        returnValue = F("Drechslereck");
        break;
    }
    case 84539:
    {
        returnValue = F("Drechslergasse");
        break;
    }
    case 84540:
    {
        returnValue = F("Drechslerstr.");
        break;
    }
    case 84541:
    {
        returnValue = F("Drechslerweg");
        break;
    }
    case 84542:
    {
        returnValue = F("Drecht");
        break;
    }
    case 84543:
    {
        returnValue = F("Dreckallee");
        break;
    }
    case 84544:
    {
        returnValue = F("Dreckburg");
        break;
    }
    case 84545:
    {
        returnValue = F("Dreckchaussee");
        break;
    }
    case 84546:
    {
        returnValue = F("Dreckelsbergweg");
        break;
    }
    case 84547:
    {
        returnValue = F("Drecken");
        break;
    }
    case 84548:
    {
        returnValue = F("Dreckenacher Weg");
        break;
    }
    case 84549:
    {
        returnValue = F("Dreckenter Weg");
        break;
    }
    case 84550:
    {
        returnValue = F("Drecker Wiese");
        break;
    }
    case 84551:
    {
        returnValue = F("Dreckerbusch");
        break;
    }
    case 84552:
    {
        returnValue = F("Dreckerstr.");
        break;
    }
    case 84553:
    {
        returnValue = F("Drecketerweg");
        break;
    }
    case 84554:
    {
        returnValue = F("Dreckgasse");
        break;
    }
    case 84555:
    {
        returnValue = F("Dreckgäßle");
        break;
    }
    case 84556:
    {
        returnValue = F("Dreckhoffsfeld");
        break;
    }
    case 84557:
    {
        returnValue = F("Dreckige Gasse");
        break;
    }
    case 84558:
    {
        returnValue = F("Dreckiger Richtweg");
        break;
    }
    case 84559:
    {
        returnValue = F("Dreckiger Weg");
        break;
    }
    case 84560:
    {
        returnValue = F("Dreckjatsche");
        break;
    }
    case 84561:
    {
        returnValue = F("Drecklochweg");
        break;
    }
    case 84562:
    {
        returnValue = F("Dreckmannskamp");
        break;
    }
    case 84563:
    {
        returnValue = F("Dreckweg");
        break;
    }
    case 84564:
    {
        returnValue = F("Dree Hoog Bargen");
        break;
    }
    case 84565:
    {
        returnValue = F("Dree Hüüs");
        break;
    }
    case 84566:
    {
        returnValue = F("Dreeangel");
        break;
    }
    case 84567:
    {
        returnValue = F("Dreebargen");
        break;
    }
    case 84568:
    {
        returnValue = F("Dreeblöcken");
        break;
    }
    case 84569:
    {
        returnValue = F("Dreebstr.");
        break;
    }
    case 84570:
    {
        returnValue = F("Dreeheid");
        break;
    }
    case 84571:
    {
        returnValue = F("Dreehusen");
        break;
    }
    case 84572:
    {
        returnValue = F("Dreekamp");
        break;
    }
    case 84573:
    {
        returnValue = F("Dreeke");
        break;
    }
    case 84574:
    {
        returnValue = F("Dreeker Moorstr.");
        break;
    }
    case 84575:
    {
        returnValue = F("Dreeker Str.");
        break;
    }
    case 84576:
    {
        returnValue = F("Dreenkrögener See");
        break;
    }
    case 84577:
    {
        returnValue = F("Dreerhöhe");
        break;
    }
    case 84578:
    {
        returnValue = F("Dreerstr.");
        break;
    }
    case 84579:
    {
        returnValue = F("Dreerweg");
        break;
    }
    case 84580:
    {
        returnValue = F("Dreesbachstr.");
        break;
    }
    case 84581:
    {
        returnValue = F("Dreesch");
        break;
    }
    case 84582:
    {
        returnValue = F("Dreeschacker");
        break;
    }
    case 84583:
    {
        returnValue = F("Dreesche");
        break;
    }
    case 84584:
    {
        returnValue = F("Dreescher Fenne");
        break;
    }
    case 84585:
    {
        returnValue = F("Dreescher Höchte");
        break;
    }
    case 84586:
    {
        returnValue = F("Dreescher Kamp");
        break;
    }
    case 84587:
    {
        returnValue = F("Dreescher Leegde");
        break;
    }
    case 84588:
    {
        returnValue = F("Dreescher Markt");
        break;
    }
    case 84589:
    {
        returnValue = F("Dreescher Str.");
        break;
    }
    case 84590:
    {
        returnValue = F("Dreescher Weg");
        break;
    }
    case 84591:
    {
        returnValue = F("Dreese Gässchen");
        break;
    }
    case 84592:
    {
        returnValue = F("Dreeser Str.");
        break;
    }
    case 84593:
    {
        returnValue = F("Dreeser Weg");
        break;
    }
    case 84594:
    {
        returnValue = F("Dreeskamp");
        break;
    }
    case 84595:
    {
        returnValue = F("Dreeskenweg");
        break;
    }
    case 84596:
    {
        returnValue = F("Dreeskeweg");
        break;
    }
    case 84597:
    {
        returnValue = F("Dreesmannskamp");
        break;
    }
    case 84598:
    {
        returnValue = F("Dreesprung");
        break;
    }
    case 84599:
    {
        returnValue = F("Dreesstr.");
        break;
    }
    case 84600:
    {
        returnValue = F("Dreesweg");
        break;
    }
    case 84601:
    {
        returnValue = F("Dreetzer Str.");
        break;
    }
    case 84602:
    {
        returnValue = F("Dreetzer Weg");
        break;
    }
    case 84603:
    {
        returnValue = F("Dreeßel");
        break;
    }
    case 84604:
    {
        returnValue = F("Dreeßenweg");
        break;
    }
    case 84605:
    {
        returnValue = F("Drefahler Damm");
        break;
    }
    case 84606:
    {
        returnValue = F("Dreffdonk");
        break;
    }
    case 84607:
    {
        returnValue = F("Dreh");
        break;
    }
    case 84608:
    {
        returnValue = F("Drehangel");
        break;
    }
    case 84609:
    {
        returnValue = F("Drehbach");
        break;
    }
    case 84610:
    {
        returnValue = F("Drehberg");
        break;
    }
    case 84611:
    {
        returnValue = F("Drehbrunnenstr.");
        break;
    }
    case 84612:
    {
        returnValue = F("Drehbrücke");
        break;
    }
    case 84613:
    {
        returnValue = F("Drehbrücke Klevendeich");
        break;
    }
    case 84614:
    {
        returnValue = F("Drehbrücke Malchow");
        break;
    }
    case 84615:
    {
        returnValue = F("Drehbrückenplatz");
        break;
    }
    case 84616:
    {
        returnValue = F("Drehe");
        break;
    }
    case 84617:
    {
        returnValue = F("Dreher Weg");
        break;
    }
    case 84618:
    {
        returnValue = F("Dreherfelsenweg");
        break;
    }
    case 84619:
    {
        returnValue = F("Drehergasse");
        break;
    }
    case 84620:
    {
        returnValue = F("Drehergässle");
        break;
    }
    case 84621:
    {
        returnValue = F("Drehergäßle");
        break;
    }
    case 84622:
    {
        returnValue = F("Dreherhausweg");
        break;
    }
    case 84623:
    {
        returnValue = F("Dreherhäusleweg");
        break;
    }
    case 84624:
    {
        returnValue = F("Drehersacker");
        break;
    }
    case 84625:
    {
        returnValue = F("Drehersberg");
        break;
    }
    case 84626:
    {
        returnValue = F("Drehersteig");
        break;
    }
    case 84627:
    {
        returnValue = F("Dreherstr.");
        break;
    }
    case 84628:
    {
        returnValue = F("Dreherweg");
        break;
    }
    case 84629:
    {
        returnValue = F("Drehgasse");
        break;
    }
    case 84630:
    {
        returnValue = F("Drehhalde");
        break;
    }
    case 84631:
    {
        returnValue = F("Drehklingenweg");
        break;
    }
    case 84632:
    {
        returnValue = F("Drehler Str.");
        break;
    }
    case 84633:
    {
        returnValue = F("Drehlitzer Dorfplatz");
        break;
    }
    case 84634:
    {
        returnValue = F("Drehlitzer Weg");
        break;
    }
    case 84635:
    {
        returnValue = F("Drehnaer Weg");
        break;
    }
    case 84636:
    {
        returnValue = F("Drehnitzstr.");
        break;
    }
    case 84637:
    {
        returnValue = F("Drehnower Weg");
        break;
    }
    case 84638:
    {
        returnValue = F("Drehscheibe");
        break;
    }
    case 84639:
    {
        returnValue = F("Drehscheibenweg");
        break;
    }
    case 84640:
    {
        returnValue = F("Drehstr.");
        break;
    }
    case 84641:
    {
        returnValue = F("Drehwanstr.");
        break;
    }
    case 84642:
    {
        returnValue = F("Drehweg");
        break;
    }
    case 84643:
    {
        returnValue = F("Drei");
        break;
    }
    case 84644:
    {
        returnValue = F("Drei Acker Weg");
        break;
    }
    case 84645:
    {
        returnValue = F("Drei Berge");
        break;
    }
    case 84646:
    {
        returnValue = F("Drei Birken");
        break;
    }
    case 84647:
    {
        returnValue = F("Drei Brunnen");
        break;
    }
    case 84648:
    {
        returnValue = F("Drei Eichen");
        break;
    }
    case 84649:
    {
        returnValue = F("Drei Eichen Weg");
        break;
    }
    case 84650:
    {
        returnValue = F("Drei Finken");
        break;
    }
    case 84651:
    {
        returnValue = F("Drei Grenzen");
        break;
    }
    case 84652:
    {
        returnValue = F("Drei Häuser");
        break;
    }
    case 84653:
    {
        returnValue = F("Drei Häuserweg");
        break;
    }
    case 84654:
    {
        returnValue = F("Drei Höfe");
        break;
    }
    case 84655:
    {
        returnValue = F("Drei Katen");
        break;
    }
    case 84656:
    {
        returnValue = F("Drei Knappen");
        break;
    }
    case 84657:
    {
        returnValue = F("Drei Kronen");
        break;
    }
    case 84658:
    {
        returnValue = F("Drei Lerchen");
        break;
    }
    case 84659:
    {
        returnValue = F("Drei Linden");
        break;
    }
    case 84660:
    {
        returnValue = F("Drei Morgen");
        break;
    }
    case 84661:
    {
        returnValue = F("Drei Pütten Weg");
        break;
    }
    case 84662:
    {
        returnValue = F("Drei Raine");
        break;
    }
    case 84663:
    {
        returnValue = F("Drei Seelein");
        break;
    }
    case 84664:
    {
        returnValue = F("Drei Seen");
        break;
    }
    case 84665:
    {
        returnValue = F("Drei Sessel");
        break;
    }
    case 84666:
    {
        returnValue = F("Drei Steine");
        break;
    }
    case 84667:
    {
        returnValue = F("Drei Steine Weg");
        break;
    }
    case 84668:
    {
        returnValue = F("Drei Stämme");
        break;
    }
    case 84669:
    {
        returnValue = F("Drei Tannenweg");
        break;
    }
    case 84670:
    {
        returnValue = F("Drei Taubenschläge");
        break;
    }
    case 84671:
    {
        returnValue = F("Drei Wege");
        break;
    }
    case 84672:
    {
        returnValue = F("Drei-Baum-Weg");
        break;
    }
    case 84673:
    {
        returnValue = F("Drei-Birken-Platz");
        break;
    }
    case 84674:
    {
        returnValue = F("Drei-Birken-Weg");
        break;
    }
    case 84675:
    {
        returnValue = F("Drei-Brunnen-Weg");
        break;
    }
    case 84676:
    {
        returnValue = F("Drei-Brücken-Weg");
        break;
    }
    case 84677:
    {
        returnValue = F("Drei-Buchen-Weg");
        break;
    }
    case 84678:
    {
        returnValue = F("Drei-Burgen-Kreisel");
        break;
    }
    case 84679:
    {
        returnValue = F("Drei-Eichen-Str.");
        break;
    }
    case 84680:
    {
        returnValue = F("Drei-Eichen-Weg");
        break;
    }
    case 84681:
    {
        returnValue = F("Drei-Eichenschlagweg");
        break;
    }
    case 84682:
    {
        returnValue = F("Drei-Felder-Weg");
        break;
    }
    case 84683:
    {
        returnValue = F("Drei-Gleichen-Str.");
        break;
    }
    case 84684:
    {
        returnValue = F("Drei-Häuser-Weg");
        break;
    }
    case 84685:
    {
        returnValue = F("Drei-Kreuz-Schneise");
        break;
    }
    case 84686:
    {
        returnValue = F("Drei-Kreuz-Str.");
        break;
    }
    case 84687:
    {
        returnValue = F("Drei-Kronen-Gasse");
        break;
    }
    case 84688:
    {
        returnValue = F("Drei-Kronen-Str.");
        break;
    }
    case 84689:
    {
        returnValue = F("Drei-Kämpen-Weg");
        break;
    }
    case 84690:
    {
        returnValue = F("Drei-Köhler-Str.");
        break;
    }
    case 84691:
    {
        returnValue = F("Drei-König-Stollen");
        break;
    }
    case 84692:
    {
        returnValue = F("Drei-König-Str.");
        break;
    }
    case 84693:
    {
        returnValue = F("Drei-König-Weg");
        break;
    }
    case 84694:
    {
        returnValue = F("Drei-Lerchen");
        break;
    }
    case 84695:
    {
        returnValue = F("Drei-Lilien-Platz");
        break;
    }
    case 84696:
    {
        returnValue = F("Drei-Linden-Kreisel");
        break;
    }
    case 84697:
    {
        returnValue = F("Drei-Linden-Str.");
        break;
    }
    case 84698:
    {
        returnValue = F("Drei-Linden-Weg");
        break;
    }
    case 84699:
    {
        returnValue = F("Drei-Länder-Eck-Str.");
        break;
    }
    case 84700:
    {
        returnValue = F("Drei-Länder-Weg");
        break;
    }
    case 84701:
    {
        returnValue = F("Drei-Lärchen-Weg");
        break;
    }
    case 84702:
    {
        returnValue = F("Drei-Marien-Str.");
        break;
    }
    case 84703:
    {
        returnValue = F("Drei-Meister-Str.");
        break;
    }
    case 84704:
    {
        returnValue = F("Drei-Mohren-Str.");
        break;
    }
    case 84705:
    {
        returnValue = F("Drei-Quellen-Str.");
        break;
    }
    case 84706:
    {
        returnValue = F("Drei-Rosen-Str.");
        break;
    }
    case 84707:
    {
        returnValue = F("Drei-Rosen-Weg");
        break;
    }
    case 84708:
    {
        returnValue = F("Drei-Stein-Weg");
        break;
    }
    case 84709:
    {
        returnValue = F("Drei-Steine-Ring");
        break;
    }
    case 84710:
    {
        returnValue = F("Drei-Talsperrenweg");
        break;
    }
    case 84711:
    {
        returnValue = F("Drei-Tannen-Str.");
        break;
    }
    case 84712:
    {
        returnValue = F("Drei-Tannen-Weg");
        break;
    }
    case 84713:
    {
        returnValue = F("Drei-Tannenweg");
        break;
    }
    case 84714:
    {
        returnValue = F("Drei-Thorn-Str.");
        break;
    }
    case 84715:
    {
        returnValue = F("Drei-Tore-Str.");
        break;
    }
    case 84716:
    {
        returnValue = F("Drei-Ähren-Str.");
        break;
    }
    case 84717:
    {
        returnValue = F("DreiSteinweg");
        break;
    }
    case 84718:
    {
        returnValue = F("Dreiackerweg");
        break;
    }
    case 84719:
    {
        returnValue = F("Dreiangel");
        break;
    }
    case 84720:
    {
        returnValue = F("Dreiangelstr.");
        break;
    }
    case 84721:
    {
        returnValue = F("Dreiangelweg");
        break;
    }
    case 84722:
    {
        returnValue = F("Dreianger");
        break;
    }
    case 84723:
    {
        returnValue = F("Dreibeekenmoorweg");
        break;
    }
    case 84724:
    {
        returnValue = F("Dreibeetweg");
        break;
    }
    case 84725:
    {
        returnValue = F("Dreibekenweg");
        break;
    }
    case 84726:
    {
        returnValue = F("Dreiberg");
        break;
    }
    case 84727:
    {
        returnValue = F("Dreiberge");
        break;
    }
    case 84728:
    {
        returnValue = F("Dreibergen");
        break;
    }
    case 84729:
    {
        returnValue = F("Dreiberger Str.");
        break;
    }
    case 84730:
    {
        returnValue = F("Dreibergestr.");
        break;
    }
    case 84731:
    {
        returnValue = F("Dreibergstr.");
        break;
    }
    case 84732:
    {
        returnValue = F("Dreibergweg");
        break;
    }
    case 84733:
    {
        returnValue = F("Dreibholzer Str.");
        break;
    }
    case 84734:
    {
        returnValue = F("Dreibirkenweg");
        break;
    }
    case 84735:
    {
        returnValue = F("Dreiborner Str.");
        break;
    }
    case 84736:
    {
        returnValue = F("Dreiborner Weg");
        break;
    }
    case 84737:
    {
        returnValue = F("Dreibornruthenweg");
        break;
    }
    case 84738:
    {
        returnValue = F("Dreibornweg");
        break;
    }
    case 84739:
    {
        returnValue = F("Dreibrodestr.");
        break;
    }
    case 84740:
    {
        returnValue = F("Dreibronnenstr.");
        break;
    }
    case 84741:
    {
        returnValue = F("Dreibrunnen");
        break;
    }
    case 84742:
    {
        returnValue = F("Dreibrunnen-Schneise");
        break;
    }
    case 84743:
    {
        returnValue = F("Dreibrunnenkopfweg");
        break;
    }
    case 84744:
    {
        returnValue = F("Dreibrunnenstr.");
        break;
    }
    case 84745:
    {
        returnValue = F("Dreibrunnensträßle");
        break;
    }
    case 84746:
    {
        returnValue = F("Dreibrunnenweg");
        break;
    }
    case 84747:
    {
        returnValue = F("Dreibrückenschneise");
        break;
    }
    case 84748:
    {
        returnValue = F("Dreibrückenstr.");
        break;
    }
    case 84749:
    {
        returnValue = F("Dreibrückenweg");
        break;
    }
    case 84750:
    {
        returnValue = F("Dreibrüderstr.");
        break;
    }
    case 84751:
    {
        returnValue = F("Dreibrüderweg");
        break;
    }
    case 84752:
    {
        returnValue = F("Dreibuben Kreuz");
        break;
    }
    case 84753:
    {
        returnValue = F("Dreibuchen-Schneise");
        break;
    }
    case 84754:
    {
        returnValue = F("Dreibuchenweg");
        break;
    }
    case 84755:
    {
        returnValue = F("Dreibuckelweg");
        break;
    }
    case 84756:
    {
        returnValue = F("Dreiburgenblick");
        break;
    }
    case 84757:
    {
        returnValue = F("Dreiburgenstr.");
        break;
    }
    case 84758:
    {
        returnValue = F("Dreiburgenweg");
        break;
    }
    case 84759:
    {
        returnValue = F("Dreibächelweg");
        break;
    }
    case 84760:
    {
        returnValue = F("Dreibäumen");
        break;
    }
    case 84761:
    {
        returnValue = F("Dreibömerweg");
        break;
    }
    case 84762:
    {
        returnValue = F("Dreibörnerweg");
        break;
    }
    case 84763:
    {
        returnValue = F("Dreibüchelackerstr.");
        break;
    }
    case 84764:
    {
        returnValue = F("Dreibüchelackerweg");
        break;
    }
    case 84765:
    {
        returnValue = F("Dreichlingerstr.");
        break;
    }
    case 84766:
    {
        returnValue = F("Dreichtenweg");
        break;
    }
    case 84767:
    {
        returnValue = F("Dreicker Weg");
        break;
    }
    case 84768:
    {
        returnValue = F("Dreidobelweg");
        break;
    }
    case 84769:
    {
        returnValue = F("Dreidorfer Weg");
        break;
    }
    case 84770:
    {
        returnValue = F("Dreieck");
        break;
    }
    case 84771:
    {
        returnValue = F("Dreieckhöfe");
        break;
    }
    case 84772:
    {
        returnValue = F("Dreieckpark");
        break;
    }
    case 84773:
    {
        returnValue = F("Dreiecksee");
        break;
    }
    case 84774:
    {
        returnValue = F("Dreiecksplatz");
        break;
    }
    case 84775:
    {
        returnValue = F("Dreiecksteinweg");
        break;
    }
    case 84776:
    {
        returnValue = F("Dreieckstr.");
        break;
    }
    case 84777:
    {
        returnValue = F("Dreiecksweg");
        break;
    }
    case 84778:
    {
        returnValue = F("Dreieckweg");
        break;
    }
    case 84779:
    {
        returnValue = F("Dreieichanlage");
        break;
    }
    case 84780:
    {
        returnValue = F("Dreieiche");
        break;
    }
    case 84781:
    {
        returnValue = F("Dreieichen");
        break;
    }
    case 84782:
    {
        returnValue = F("Dreieichenstr.");
        break;
    }
    case 84783:
    {
        returnValue = F("Dreieichenweg");
        break;
    }
    case 84784:
    {
        returnValue = F("Dreieichmannstr.");
        break;
    }
    case 84785:
    {
        returnValue = F("Dreieichpark");
        break;
    }
    case 84786:
    {
        returnValue = F("Dreieichplatz");
        break;
    }
    case 84787:
    {
        returnValue = F("Dreieichring");
        break;
    }
    case 84788:
    {
        returnValue = F("Dreieichstr.");
        break;
    }
    case 84789:
    {
        returnValue = F("Dreieichweg");
        break;
    }
    case 84790:
    {
        returnValue = F("Dreieinigkeit");
        break;
    }
    case 84791:
    {
        returnValue = F("Dreieinigkeitsstr.");
        break;
    }
    case 84792:
    {
        returnValue = F("Dreienbergstr.");
        break;
    }
    case 84793:
    {
        returnValue = F("Dreienkamp");
        break;
    }
    case 84794:
    {
        returnValue = F("Dreienortsweg");
        break;
    }
    case 84795:
    {
        returnValue = F("Dreienweg");
        break;
    }
    case 84796:
    {
        returnValue = F("Dreier Reitweg");
        break;
    }
    case 84797:
    {
        returnValue = F("Dreiergrund");
        break;
    }
    case 84798:
    {
        returnValue = F("Dreierkrugplatz");
        break;
    }
    case 84799:
    {
        returnValue = F("Dreiers Garten");
        break;
    }
    case 84800:
    {
        returnValue = F("Dreiers Gärten");
        break;
    }
    case 84801:
    {
        returnValue = F("Dreiersgasse");
        break;
    }
    case 84802:
    {
        returnValue = F("Dreiersiedlung");
        break;
    }
    case 84803:
    {
        returnValue = F("Dreierskrugweg");
        break;
    }
    case 84804:
    {
        returnValue = F("Dreierstr.");
        break;
    }
    case 84805:
    {
        returnValue = F("Dreierswisch");
        break;
    }
    case 84806:
    {
        returnValue = F("Dreierwalder Damm");
        break;
    }
    case 84807:
    {
        returnValue = F("Dreierwalder Str.");
        break;
    }
    case 84808:
    {
        returnValue = F("Dreierweg");
        break;
    }
    case 84809:
    {
        returnValue = F("Dreifaltigkeit");
        break;
    }
    case 84810:
    {
        returnValue = F("Dreifaltigkeitsberg");
        break;
    }
    case 84811:
    {
        returnValue = F("Dreifaltigkeitsbergstr.");
        break;
    }
    case 84812:
    {
        returnValue = F("Dreifaltigkeitsbergweg");
        break;
    }
    case 84813:
    {
        returnValue = F("Dreifaltigkeitsgasse");
        break;
    }
    case 84814:
    {
        returnValue = F("Dreifaltigkeitsplatz");
        break;
    }
    case 84815:
    {
        returnValue = F("Dreifaltigkeitsstr.");
        break;
    }
    case 84816:
    {
        returnValue = F("Dreifaltigkeitsweg");
        break;
    }
    case 84817:
    {
        returnValue = F("Dreifeldbrücke");
        break;
    }
    case 84818:
    {
        returnValue = F("Dreifelder Kirchweg");
        break;
    }
    case 84819:
    {
        returnValue = F("Dreifelderweg");
        break;
    }
    case 84820:
    {
        returnValue = F("Dreifeldstr.");
        break;
    }
    case 84821:
    {
        returnValue = F("Dreifeldweg");
        break;
    }
    case 84822:
    {
        returnValue = F("Dreifertstr.");
        break;
    }
    case 84823:
    {
        returnValue = F("Dreifichtenweg");
        break;
    }
    case 84824:
    {
        returnValue = F("Dreiflügel");
        break;
    }
    case 84825:
    {
        returnValue = F("Dreiflügelweg");
        break;
    }
    case 84826:
    {
        returnValue = F("Dreifuß");
        break;
    }
    case 84827:
    {
        returnValue = F("Dreifußgasse");
        break;
    }
    case 84828:
    {
        returnValue = F("Dreifußstr.");
        break;
    }
    case 84829:
    {
        returnValue = F("Dreifürstensteinstr.");
        break;
    }
    case 84830:
    {
        returnValue = F("Dreifürstenstr.");
        break;
    }
    case 84831:
    {
        returnValue = F("Dreigass");
        break;
    }
    case 84832:
    {
        returnValue = F("Dreigemeindenweg");
        break;
    }
    case 84833:
    {
        returnValue = F("Dreigüterstr.");
        break;
    }
    case 84834:
    {
        returnValue = F("Dreihalde");
        break;
    }
    case 84835:
    {
        returnValue = F("Dreihansner Str.");
        break;
    }
    case 84836:
    {
        returnValue = F("Dreihausen");
        break;
    }
    case 84837:
    {
        returnValue = F("Dreihausendorf");
        break;
    }
    case 84838:
    {
        returnValue = F("Dreihausener Weg");
        break;
    }
    case 84839:
    {
        returnValue = F("Dreihausweg");
        break;
    }
    case 84840:
    {
        returnValue = F("Dreiheiligenweg");
        break;
    }
    case 84841:
    {
        returnValue = F("Dreiheisterweg");
        break;
    }
    case 84842:
    {
        returnValue = F("Dreiherrenstein");
        break;
    }
    case 84843:
    {
        returnValue = F("Dreiherrenstein-Route");
        break;
    }
    case 84844:
    {
        returnValue = F("Dreiherrnsteinplatz");
        break;
    }
    case 84845:
    {
        returnValue = F("Dreiherrnsteinweg");
        break;
    }
    case 84846:
    {
        returnValue = F("Dreiherstr.");
        break;
    }
    case 84847:
    {
        returnValue = F("Dreiherzenweg");
        break;
    }
    case 84848:
    {
        returnValue = F("Dreihiaslstr.");
        break;
    }
    case 84849:
    {
        returnValue = F("Dreihof");
        break;
    }
    case 84850:
    {
        returnValue = F("Dreihornmühlgasse");
        break;
    }
    case 84851:
    {
        returnValue = F("Dreihorstbrücke");
        break;
    }
    case 84852:
    {
        returnValue = F("Dreihuesweg");
        break;
    }
    case 84853:
    {
        returnValue = F("Dreihusen");
        break;
    }
    case 84854:
    {
        returnValue = F("Dreihäuser");
        break;
    }
    case 84855:
    {
        returnValue = F("Dreihäuser Platz");
        break;
    }
    case 84856:
    {
        returnValue = F("Dreihäuser Str.");
        break;
    }
    case 84857:
    {
        returnValue = F("Dreihäusergasse");
        break;
    }
    case 84858:
    {
        returnValue = F("Dreihäuserweg");
        break;
    }
    case 84859:
    {
        returnValue = F("Dreihöf");
        break;
    }
    case 84860:
    {
        returnValue = F("Dreihöfer Schmiede");
        break;
    }
    case 84861:
    {
        returnValue = F("Dreihöfer Str.");
        break;
    }
    case 84862:
    {
        returnValue = F("Dreihübelstr.");
        break;
    }
    case 84863:
    {
        returnValue = F("Dreihügelstr.");
        break;
    }
    case 84864:
    {
        returnValue = F("Dreihügelweg");
        break;
    }
    case 84865:
    {
        returnValue = F("Dreihüm");
        break;
    }
    case 84866:
    {
        returnValue = F("Dreikaiserweg");
        break;
    }
    case 84867:
    {
        returnValue = F("Dreikalktäleweg");
        break;
    }
    case 84868:
    {
        returnValue = F("Dreikegelebenweg");
        break;
    }
    case 84869:
    {
        returnValue = F("Dreikirchenstr.");
        break;
    }
    case 84870:
    {
        returnValue = F("Dreiklingensträßle");
        break;
    }
    case 84871:
    {
        returnValue = F("Dreikohlplattenweg");
        break;
    }
    case 84872:
    {
        returnValue = F("Dreikreuzweg");
        break;
    }
    case 84873:
    {
        returnValue = F("Dreikronen");
        break;
    }
    case 84874:
    {
        returnValue = F("Dreikronengasse");
        break;
    }
    case 84875:
    {
        returnValue = F("Dreikronenstr.");
        break;
    }
    case 84876:
    {
        returnValue = F("Dreikuttener Weg");
        break;
    }
    case 84877:
    {
        returnValue = F("Dreikäseklippenweg");
        break;
    }
    case 84878:
    {
        returnValue = F("Dreikönig-Str.");
        break;
    }
    case 84879:
    {
        returnValue = F("Dreikönige");
        break;
    }
    case 84880:
    {
        returnValue = F("Dreikönigenstr.");
        break;
    }
    case 84881:
    {
        returnValue = F("Dreikönigenweg");
        break;
    }
    case 84882:
    {
        returnValue = F("Dreiköniggasse");
        break;
    }
    case 84883:
    {
        returnValue = F("Dreikönigsgasse");
        break;
    }
    case 84884:
    {
        returnValue = F("Dreikönigskeller");
        break;
    }
    case 84885:
    {
        returnValue = F("Dreikönigsloipe 20 km");
        break;
    }
    case 84886:
    {
        returnValue = F("Dreikönigsstr.");
        break;
    }
    case 84887:
    {
        returnValue = F("Dreikönigstr.");
        break;
    }
    case 84888:
    {
        returnValue = F("Dreikönigsweg");
        break;
    }
    case 84889:
    {
        returnValue = F("Dreikönigszug");
        break;
    }
    case 84890:
    {
        returnValue = F("Dreikönigweg");
        break;
    }
    case 84891:
    {
        returnValue = F("Dreilanden");
        break;
    }
    case 84892:
    {
        returnValue = F("Dreilebener Bahnhof");
        break;
    }
    case 84893:
    {
        returnValue = F("Dreilebener Str.");
        break;
    }
    case 84894:
    {
        returnValue = F("Dreileber Weg");
        break;
    }
    case 84895:
    {
        returnValue = F("Dreilerchenweg");
        break;
    }
    case 84896:
    {
        returnValue = F("Dreilinden");
        break;
    }
    case 84897:
    {
        returnValue = F("Dreilindenallee");
        break;
    }
    case 84898:
    {
        returnValue = F("Dreilindenbergstr.");
        break;
    }
    case 84899:
    {
        returnValue = F("Dreilindengrund");
        break;
    }
    case 84900:
    {
        returnValue = F("Dreilindenhof");
        break;
    }
    case 84901:
    {
        returnValue = F("Dreilindenstr.");
        break;
    }
    case 84902:
    {
        returnValue = F("Dreilindenweg");
        break;
    }
    case 84903:
    {
        returnValue = F("Dreiling");
        break;
    }
    case 84904:
    {
        returnValue = F("Dreilinger Stadtweg");
        break;
    }
    case 84905:
    {
        returnValue = F("Dreilinger Weg");
        break;
    }
    case 84906:
    {
        returnValue = F("Dreilinienweg");
        break;
    }
    case 84907:
    {
        returnValue = F("Dreiländerbrücke");
        break;
    }
    case 84908:
    {
        returnValue = F("Dreiländereck");
        break;
    }
    case 84909:
    {
        returnValue = F("Dreiländerring");
        break;
    }
    case 84910:
    {
        returnValue = F("Dreiländerstr.");
        break;
    }
    case 84911:
    {
        returnValue = F("Dreiländerweg");
        break;
    }
    case 84912:
    {
        returnValue = F("Dreilärchenweg");
        break;
    }
    case 84913:
    {
        returnValue = F("Dreilützower Chaussee");
        break;
    }
    case 84914:
    {
        returnValue = F("Dreilützower Dorfstr.");
        break;
    }
    case 84915:
    {
        returnValue = F("Dreilützower Weg");
        break;
    }
    case 84916:
    {
        returnValue = F("Dreimannsgasse");
        break;
    }
    case 84917:
    {
        returnValue = F("Dreimannstr.");
        break;
    }
    case 84918:
    {
        returnValue = F("Dreimarkenweg");
        break;
    }
    case 84919:
    {
        returnValue = F("Dreimarkerweg");
        break;
    }
    case 84920:
    {
        returnValue = F("Dreimarksteinweg");
        break;
    }
    case 84921:
    {
        returnValue = F("Dreimeter Weg");
        break;
    }
    case 84922:
    {
        returnValue = F("Dreimeterweg");
        break;
    }
    case 84923:
    {
        returnValue = F("Dreimorgen");
        break;
    }
    case 84924:
    {
        returnValue = F("Dreimorgenstr.");
        break;
    }
    case 84925:
    {
        returnValue = F("Dreimorgenstück");
        break;
    }
    case 84926:
    {
        returnValue = F("Dreimäderlweg");
        break;
    }
    case 84927:
    {
        returnValue = F("Dreimännchen");
        break;
    }
    case 84928:
    {
        returnValue = F("Dreimännerstr.");
        break;
    }
    case 84929:
    {
        returnValue = F("Dreimännerweg");
        break;
    }
    case 84930:
    {
        returnValue = F("Dreimärkerschneise");
        break;
    }
    case 84931:
    {
        returnValue = F("Dreimärkerweg");
        break;
    }
    case 84932:
    {
        returnValue = F("Dreimärklerweg");
        break;
    }
    case 84933:
    {
        returnValue = F("Dreimühlenstr.");
        break;
    }
    case 84934:
    {
        returnValue = F("Dreimühlenweg");
        break;
    }
    case 84935:
    {
        returnValue = F("Dreimüllerhof");
        break;
    }
    case 84936:
    {
        returnValue = F("Dreiner Weg");
        break;
    }
    case 84937:
    {
        returnValue = F("Dreingaustr.");
        break;
    }
    case 84938:
    {
        returnValue = F("Dreiningfeldstr.");
        break;
    }
    case 84939:
    {
        returnValue = F("Dreiort Ovenhausen");
        break;
    }
    case 84940:
    {
        returnValue = F("Dreipfennigsweg");
        break;
    }
    case 84941:
    {
        returnValue = F("Dreiplattenweg");
        break;
    }
    case 84942:
    {
        returnValue = F("Dreipost");
        break;
    }
    case 84943:
    {
        returnValue = F("Dreirosenberg");
        break;
    }
    case 84944:
    {
        returnValue = F("Dreirosengasse");
        break;
    }
    case 84945:
    {
        returnValue = F("Dreirutenweg");
        break;
    }
    case 84946:
    {
        returnValue = F("Dreiruthenweg");
        break;
    }
    case 84947:
    {
        returnValue = F("Dreisaaler Berg");
        break;
    }
    case 84948:
    {
        returnValue = F("Dreisamstr.");
        break;
    }
    case 84949:
    {
        returnValue = F("Dreisamweg");
        break;
    }
    case 84950:
    {
        returnValue = F("Dreisbach");
        break;
    }
    case 84951:
    {
        returnValue = F("Dreisbacher Höhe");
        break;
    }
    case 84952:
    {
        returnValue = F("Dreisbacher Mühle");
        break;
    }
    case 84953:
    {
        returnValue = F("Dreisbacher Str.");
        break;
    }
    case 84954:
    {
        returnValue = F("Dreisbachstr.");
        break;
    }
    case 84955:
    {
        returnValue = F("Dreisbachtal");
        break;
    }
    case 84956:
    {
        returnValue = F("Dreisborn");
        break;
    }
    case 84957:
    {
        returnValue = F("Dreisborner Weg");
        break;
    }
    case 84958:
    {
        returnValue = F("Dreisbuschstr.");
        break;
    }
    case 84959:
    {
        returnValue = F("Dreisch");
        break;
    }
    case 84960:
    {
        returnValue = F("Dreischenbreite");
        break;
    }
    case 84961:
    {
        returnValue = F("Dreischenhoff");
        break;
    }
    case 84962:
    {
        returnValue = F("Dreischenkamp");
        break;
    }
    case 84963:
    {
        returnValue = F("Dreischerweg");
        break;
    }
    case 84964:
    {
        returnValue = F("Dreischeweg");
        break;
    }
    case 84965:
    {
        returnValue = F("Dreischfeld");
        break;
    }
    case 84966:
    {
        returnValue = F("Dreischkamp");
        break;
    }
    case 84967:
    {
        returnValue = F("Dreischläger Allee");
        break;
    }
    case 84968:
    {
        returnValue = F("Dreischläger Str.");
        break;
    }
    case 84969:
    {
        returnValue = F("Dreischweg");
        break;
    }
    case 84970:
    {
        returnValue = F("Dreischwesternweg");
        break;
    }
    case 84971:
    {
        returnValue = F("Dreischäferberg");
        break;
    }
    case 84972:
    {
        returnValue = F("Dreiseler Str.");
        break;
    }
    case 84973:
    {
        returnValue = F("Dreisener Str.");
        break;
    }
    case 84974:
    {
        returnValue = F("Dreisenmühlstr.");
        break;
    }
    case 84975:
    {
        returnValue = F("Dreiserstr.");
        break;
    }
    case 84976:
    {
        returnValue = F("Dreisesselsteig");
        break;
    }
    case 84977:
    {
        returnValue = F("Dreisesselstr.");
        break;
    }
    case 84978:
    {
        returnValue = F("Dreisesselweg");
        break;
    }
    case 84979:
    {
        returnValue = F("Dreiseweg");
        break;
    }
    case 84980:
    {
        returnValue = F("Dreisfeldstr.");
        break;
    }
    case 84981:
    {
        returnValue = F("Dreishofstr.");
        break;
    }
    case 84982:
    {
        returnValue = F("Dreisk");
        break;
    }
    case 84983:
    {
        returnValue = F("Dreiskauer Ring");
        break;
    }
    case 84984:
    {
        returnValue = F("Dreiskauer Str.");
        break;
    }
    case 84985:
    {
        returnValue = F("Dreislarer Str.");
        break;
    }
    case 84986:
    {
        returnValue = F("Dreispitz");
        break;
    }
    case 84987:
    {
        returnValue = F("Dreispitzallee");
        break;
    }
    case 84988:
    {
        returnValue = F("Dreispitze");
        break;
    }
    case 84989:
    {
        returnValue = F("Dreispitzenhohle");
        break;
    }
    case 84990:
    {
        returnValue = F("Dreispitzenklammweg");
        break;
    }
    case 84991:
    {
        returnValue = F("Dreispitzstr.");
        break;
    }
    case 84992:
    {
        returnValue = F("Dreispitzweg");
        break;
    }
    case 84993:
    {
        returnValue = F("Dreisprung");
        break;
    }
    case 84994:
    {
        returnValue = F("Dreisselstr.");
        break;
    }
    case 84995:
    {
        returnValue = F("Dreistegen");
        break;
    }
    case 84996:
    {
        returnValue = F("Dreisteig");
        break;
    }
    case 84997:
    {
        returnValue = F("Dreistein-Weg");
        break;
    }
    case 84998:
    {
        returnValue = F("Dreisteinenweg");
        break;
    }
    case 84999:
    {
        returnValue = F("Dreisteineweg");
        break;
    }
    case 85000:
    {
        returnValue = F("Dreisteinschlagweg");
        break;
    }
    case 85001:
    {
        returnValue = F("Dreisteinweg");
        break;
    }
    case 85002:
    {
        returnValue = F("Dreistelz");
        break;
    }
    case 85003:
    {
        returnValue = F("Dreistelzstr.");
        break;
    }
    case 85004:
    {
        returnValue = F("Dreistromstr.");
        break;
    }
    case 85005:
    {
        returnValue = F("Dreiströmestr.");
        break;
    }
    case 85006:
    {
        returnValue = F("Dreitalstr.");
        break;
    }
    case 85007:
    {
        returnValue = F("Dreitannenriegelstr.");
        break;
    }
    case 85008:
    {
        returnValue = F("Dreitannenweg");
        break;
    }
    case 85009:
    {
        returnValue = F("Dreiteichsgrund");
        break;
    }
    case 85010:
    {
        returnValue = F("Dreitelle");
        break;
    }
    case 85011:
    {
        returnValue = F("Dreitorspitzstr.");
        break;
    }
    case 85012:
    {
        returnValue = F("Dreitorweg");
        break;
    }
    case 85013:
    {
        returnValue = F("Dreitrögweg");
        break;
    }
    case 85014:
    {
        returnValue = F("Dreiturmsiedlung");
        break;
    }
    case 85015:
    {
        returnValue = F("Dreiturmstr.");
        break;
    }
    case 85016:
    {
        returnValue = F("Dreiviertelweg");
        break;
    }
    case 85017:
    {
        returnValue = F("Dreivorlinge");
        break;
    }
    case 85018:
    {
        returnValue = F("Dreiwappen Weg");
        break;
    }
    case 85019:
    {
        returnValue = F("Dreiweg");
        break;
    }
    case 85020:
    {
        returnValue = F("Dreiwegeland");
        break;
    }
    case 85021:
    {
        returnValue = F("Dreiweidenstr.");
        break;
    }
    case 85022:
    {
        returnValue = F("Dreiweiherweg");
        break;
    }
    case 85023:
    {
        returnValue = F("Dreiweiler Str.");
        break;
    }
    case 85024:
    {
        returnValue = F("Dreiweilerstr.");
        break;
    }
    case 85025:
    {
        returnValue = F("Dreiwerdener Weg");
        break;
    }
    case 85026:
    {
        returnValue = F("Dreizehn Jauchert");
        break;
    }
    case 85027:
    {
        returnValue = F("Dreizehnerallee");
        break;
    }
    case 85028:
    {
        returnValue = F("Dreizehnerstr.");
        break;
    }
    case 85029:
    {
        returnValue = F("Dreizehnhausen");
        break;
    }
    case 85030:
    {
        returnValue = F("Dreizehnhausener Str.");
        break;
    }
    case 85031:
    {
        returnValue = F("Dreizehnlinden");
        break;
    }
    case 85032:
    {
        returnValue = F("Dreizehnlindenstr.");
        break;
    }
    case 85033:
    {
        returnValue = F("Dreizehnlindenweg");
        break;
    }
    case 85034:
    {
        returnValue = F("Dreizielsteinweg");
        break;
    }
    case 85035:
    {
        returnValue = F("Dreißentalstr.");
        break;
    }
    case 85036:
    {
        returnValue = F("Dreißig Morgen");
        break;
    }
    case 85037:
    {
        returnValue = F("Dreißig-Diemat-Weg");
        break;
    }
    case 85038:
    {
        returnValue = F("Dreißig-Morgen-Str.");
        break;
    }
    case 85039:
    {
        returnValue = F("Dreißig-Morgen-Weg");
        break;
    }
    case 85040:
    {
        returnValue = F("Dreißigacker");
        break;
    }
    case 85041:
    {
        returnValue = F("Dreiüm");
        break;
    }
    case 85042:
    {
        returnValue = F("Drellborg");
        break;
    }
    case 85043:
    {
        returnValue = F("Drelsdorfer Chaussee");
        break;
    }
    case 85044:
    {
        returnValue = F("Drelsdorfer Str.");
        break;
    }
    case 85045:
    {
        returnValue = F("Dremmener Str.");
        break;
    }
    case 85046:
    {
        returnValue = F("Drempwiesen");
        break;
    }
    case 85047:
    {
        returnValue = F("Drenbrüggenstr.");
        break;
    }
    case 85048:
    {
        returnValue = F("Drengenburg");
        break;
    }
    case 85049:
    {
        returnValue = F("Drengfurter Str.");
        break;
    }
    case 85050:
    {
        returnValue = F("Drengort");
        break;
    }
    case 85051:
    {
        returnValue = F("Drenkelvehn");
        break;
    }
    case 85052:
    {
        returnValue = F("Drenker Str.");
        break;
    }
    case 85053:
    {
        returnValue = F("Drenkower Str.");
        break;
    }
    case 85054:
    {
        returnValue = F("Drenkower Weg");
        break;
    }
    case 85055:
    {
        returnValue = F("Drenkstr.");
        break;
    }
    case 85056:
    {
        returnValue = F("Drennesweg");
        break;
    }
    case 85057:
    {
        returnValue = F("Drennhäuser Elbdeich");
        break;
    }
    case 85058:
    {
        returnValue = F("Drennhäuser Str.");
        break;
    }
    case 85059:
    {
        returnValue = F("Drennhäuser Weg");
        break;
    }
    case 85060:
    {
        returnValue = F("Drenser Str.");
        break;
    }
    case 85061:
    {
        returnValue = F("Drenseweg");
        break;
    }
    case 85062:
    {
        returnValue = F("Drensteinfurter Str.");
        break;
    }
    case 85063:
    {
        returnValue = F("Drensäcker");
        break;
    }
    case 85064:
    {
        returnValue = F("Drenthestr.");
        break;
    }
    case 85065:
    {
        returnValue = F("Drentheweg");
        break;
    }
    case 85066:
    {
        returnValue = F("Drentweder Str.");
        break;
    }
    case 85067:
    {
        returnValue = F("Drentwedestr.");
        break;
    }
    case 85068:
    {
        returnValue = F("Drentwettsteg");
        break;
    }
    case 85069:
    {
        returnValue = F("Drentwettstr.");
        break;
    }
    case 85070:
    {
        returnValue = F("Drepperstr.");
        break;
    }
    case 85071:
    {
        returnValue = F("Drepsenhoek");
        break;
    }
    case 85072:
    {
        returnValue = F("Dresbach");
        break;
    }
    case 85073:
    {
        returnValue = F("Dresbacher Str.");
        break;
    }
    case 85074:
    {
        returnValue = F("Dreschaer Dorfstr.");
        break;
    }
    case 85075:
    {
        returnValue = F("Dreschaer Weg");
        break;
    }
    case 85076:
    {
        returnValue = F("Dreschbogen");
        break;
    }
    case 85077:
    {
        returnValue = F("Dreschehaus");
        break;
    }
    case 85078:
    {
        returnValue = F("Drescheider Str.");
        break;
    }
    case 85079:
    {
        returnValue = F("Drescheiderhagen");
        break;
    }
    case 85080:
    {
        returnValue = F("Dreschenkampweg");
        break;
    }
    case 85081:
    {
        returnValue = F("Dreschenweg");
        break;
    }
    case 85082:
    {
        returnValue = F("Dreschereistr.");
        break;
    }
    case 85083:
    {
        returnValue = F("Dreschergasse");
        break;
    }
    case 85084:
    {
        returnValue = F("Drescherhof");
        break;
    }
    case 85085:
    {
        returnValue = F("Drescherstieg");
        break;
    }
    case 85086:
    {
        returnValue = F("Drescherstr.");
        break;
    }
    case 85087:
    {
        returnValue = F("Drescherweg");
        break;
    }
    case 85088:
    {
        returnValue = F("Dreschflegel");
        break;
    }
    case 85089:
    {
        returnValue = F("Dreschgasse");
        break;
    }
    case 85090:
    {
        returnValue = F("Dreschhalle");
        break;
    }
    case 85091:
    {
        returnValue = F("Dreschhallenstr.");
        break;
    }
    case 85092:
    {
        returnValue = F("Dreschhallenweg");
        break;
    }
    case 85093:
    {
        returnValue = F("Dreschhausener Str.");
        break;
    }
    case 85094:
    {
        returnValue = F("Dreschkamp");
        break;
    }
    case 85095:
    {
        returnValue = F("Dreschkoppel");
        break;
    }
    case 85096:
    {
        returnValue = F("Dreschplatz");
        break;
    }
    case 85097:
    {
        returnValue = F("Dreschschopfweg");
        break;
    }
    case 85098:
    {
        returnValue = F("Dreschstr.");
        break;
    }
    case 85099:
    {
        returnValue = F("Dreschstück");
        break;
    }
    case 85100:
    {
        returnValue = F("Dreschweg");
        break;
    }
    case 85101:
    {
        returnValue = F("Dresdener Allee");
        break;
    }
    case 85102:
    {
        returnValue = F("Dresdener Chaussee");
        break;
    }
    case 85103:
    {
        returnValue = F("Dresdener Landstr.");
        break;
    }
    case 85104:
    {
        returnValue = F("Dresdener Platz");
        break;
    }
    case 85105:
    {
        returnValue = F("Dresdener Ring");
        break;
    }
    case 85106:
    {
        returnValue = F("Dresdener Str.");
        break;
    }
    case 85107:
    {
        returnValue = F("Dresdener Weg");
        break;
    }
    case 85108:
    {
        returnValue = F("Dresdenerstr.");
        break;
    }
    case 85109:
    {
        returnValue = F("Dresdenweg");
        break;
    }
    case 85110:
    {
        returnValue = F("Dresdner Berg");
        break;
    }
    case 85111:
    {
        returnValue = F("Dresdner Brücke");
        break;
    }
    case 85112:
    {
        returnValue = F("Dresdner Damm");
        break;
    }
    case 85113:
    {
        returnValue = F("Dresdner Landstr.");
        break;
    }
    case 85114:
    {
        returnValue = F("Dresdner Platz");
        break;
    }
    case 85115:
    {
        returnValue = F("Dresdner Ring");
        break;
    }
    case 85116:
    {
        returnValue = F("Dresdner Str.");
        break;
    }
    case 85117:
    {
        returnValue = F("Dresdner Tor");
        break;
    }
    case 85118:
    {
        returnValue = F("Dresdner Weg");
        break;
    }
    case 85119:
    {
        returnValue = F("Dresel");
        break;
    }
    case 85120:
    {
        returnValue = F("Dresenbitze");
        break;
    }
    case 85121:
    {
        returnValue = F("Dresenower Mühle");
        break;
    }
    case 85122:
    {
        returnValue = F("Dresenower Weg");
        break;
    }
    case 85123:
    {
        returnValue = F("Dresherscheid");
        break;
    }
    case 85124:
    {
        returnValue = F("Dreskaer Str.");
        break;
    }
    case 85125:
    {
        returnValue = F("Dreskaer Weg");
        break;
    }
    case 85126:
    {
        returnValue = F("Dreskamp");
        break;
    }
    case 85127:
    {
        returnValue = F("Dreskenkamp");
        break;
    }
    case 85128:
    {
        returnValue = F("Dreslers Park");
        break;
    }
    case 85129:
    {
        returnValue = F("Dreslinger Str.");
        break;
    }
    case 85130:
    {
        returnValue = F("Dresper Str.");
        break;
    }
    case 85131:
    {
        returnValue = F("Dresselbach");
        break;
    }
    case 85132:
    {
        returnValue = F("Dresselbacher Str.");
        break;
    }
    case 85133:
    {
        returnValue = F("Dresselbacher Weg");
        break;
    }
    case 85134:
    {
        returnValue = F("Dresselbachweg");
        break;
    }
    case 85135:
    {
        returnValue = F("Dresselgasse");
        break;
    }
    case 85136:
    {
        returnValue = F("Dresselhofstr.");
        break;
    }
    case 85137:
    {
        returnValue = F("Dresselhofweg");
        break;
    }
    case 85138:
    {
        returnValue = F("Dresselndorfer Str.");
        break;
    }
    case 85139:
    {
        returnValue = F("Dressels Weg");
        break;
    }
    case 85140:
    {
        returnValue = F("Dresselsgrün");
        break;
    }
    case 85141:
    {
        returnValue = F("Dresselsgrüner Weg");
        break;
    }
    case 85142:
    {
        returnValue = F("Dresselweg");
        break;
    }
    case 85143:
    {
        returnValue = F("Dressendorfer Str.");
        break;
    }
    case 85144:
    {
        returnValue = F("Dresslerpark");
        break;
    }
    case 85145:
    {
        returnValue = F("Dresslers Hof");
        break;
    }
    case 85146:
    {
        returnValue = F("Dressurweg");
        break;
    }
    case 85147:
    {
        returnValue = F("Drestedter Weg");
        break;
    }
    case 85148:
    {
        returnValue = F("Dretzeler Str.");
        break;
    }
    case 85149:
    {
        returnValue = F("Dretzen");
        break;
    }
    case 85150:
    {
        returnValue = F("Dreufte");
        break;
    }
    case 85151:
    {
        returnValue = F("Dreuge Mesk");
        break;
    }
    case 85152:
    {
        returnValue = F("Dreuländerweg");
        break;
    }
    case 85153:
    {
        returnValue = F("Dreuschendorf");
        break;
    }
    case 85154:
    {
        returnValue = F("Dreuscherstr.");
        break;
    }
    case 85155:
    {
        returnValue = F("Dreuxallee");
        break;
    }
    case 85156:
    {
        returnValue = F("Dreve");
        break;
    }
    case 85157:
    {
        returnValue = F("Drevelsdyk");
        break;
    }
    case 85158:
    {
        returnValue = F("Drevenacker Str.");
        break;
    }
    case 85159:
    {
        returnValue = F("Drever Weg");
        break;
    }
    case 85160:
    {
        returnValue = F("Dreversiepen");
        break;
    }
    case 85161:
    {
        returnValue = F("Drevesstr.");
        break;
    }
    case 85162:
    {
        returnValue = F("Drevestr.");
        break;
    }
    case 85163:
    {
        returnValue = F("Drewelow");
        break;
    }
    case 85164:
    {
        returnValue = F("Drewelower Damm");
        break;
    }
    case 85165:
    {
        returnValue = F("Drewener Dorfstr.");
        break;
    }
    case 85166:
    {
        returnValue = F("Drewener Seestr.");
        break;
    }
    case 85167:
    {
        returnValue = F("Drewenzplatz");
        break;
    }
    case 85168:
    {
        returnValue = F("Drewer Brücke");
        break;
    }
    case 85169:
    {
        returnValue = F("Drewer Schemm");
        break;
    }
    case 85170:
    {
        returnValue = F("Drewer Weg");
        break;
    }
    case 85171:
    {
        returnValue = F("Drewer-Heide");
        break;
    }
    case 85172:
    {
        returnValue = F("Drewerstr.");
        break;
    }
    case 85173:
    {
        returnValue = F("Drewertstr.");
        break;
    }
    case 85174:
    {
        returnValue = F("Drewerweg");
        break;
    }
    case 85175:
    {
        returnValue = F("Drewesburg");
        break;
    }
    case 85176:
    {
        returnValue = F("Dreweswäldchen");
        break;
    }
    case 85177:
    {
        returnValue = F("Drewin");
        break;
    }
    case 85178:
    {
        returnValue = F("Drewinscher Weg");
        break;
    }
    case 85179:
    {
        returnValue = F("Drewitz Ausbau");
        break;
    }
    case 85180:
    {
        returnValue = F("Drewitzer Chaussee");
        break;
    }
    case 85181:
    {
        returnValue = F("Drewitzer Str.");
        break;
    }
    case 85182:
    {
        returnValue = F("Drewitzer Weg");
        break;
    }
    case 85183:
    {
        returnValue = F("Drews-Privatweg");
        break;
    }
    case 85184:
    {
        returnValue = F("Drewshof");
        break;
    }
    case 85185:
    {
        returnValue = F("Drewsstr.");
        break;
    }
    case 85186:
    {
        returnValue = F("Drexelhofweg");
        break;
    }
    case 85187:
    {
        returnValue = F("Drexlerstr.");
        break;
    }
    case 85188:
    {
        returnValue = F("Drexlerwiese");
        break;
    }
    case 85189:
    {
        returnValue = F("Dreyener Str.");
        break;
    }
    case 85190:
    {
        returnValue = F("Dreyer Ecke");
        break;
    }
    case 85191:
    {
        returnValue = F("Dreyer Str.");
        break;
    }
    case 85192:
    {
        returnValue = F("Dreyer`s Reeg");
        break;
    }
    case 85193:
    {
        returnValue = F("Dreyergässle");
        break;
    }
    case 85194:
    {
        returnValue = F("Dreyers Kamp");
        break;
    }
    case 85195:
    {
        returnValue = F("Dreyers Twiete");
        break;
    }
    case 85196:
    {
        returnValue = F("Dreyershof");
        break;
    }
    case 85197:
    {
        returnValue = F("Dreyershofer Weg");
        break;
    }
    case 85198:
    {
        returnValue = F("Dreyerstr.");
        break;
    }
    case 85199:
    {
        returnValue = F("Dreyspringstr.");
        break;
    }
    case 85200:
    {
        returnValue = F("Drezdenko Str.");
        break;
    }
    case 85201:
    {
        returnValue = F("Dreßlerstr.");
        break;
    }
    case 85202:
    {
        returnValue = F("Driangelweg");
        break;
    }
    case 85203:
    {
        returnValue = F("Driburger Str.");
        break;
    }
    case 85204:
    {
        returnValue = F("Driebe");
        break;
    }
    case 85205:
    {
        returnValue = F("Drieberger Weg");
        break;
    }
    case 85206:
    {
        returnValue = F("Driedorfer Str.");
        break;
    }
    case 85207:
    {
        returnValue = F("Driedorfstr.");
        break;
    }
    case 85208:
    {
        returnValue = F("Driefeler Wiesen");
        break;
    }
    case 85209:
    {
        returnValue = F("Driegelkamp");
        break;
    }
    case 85210:
    {
        returnValue = F("Driegelweg");
        break;
    }
    case 85211:
    {
        returnValue = F("Driehauser Feldstr.");
        break;
    }
    case 85212:
    {
        returnValue = F("Driehauser Stadtweg");
        break;
    }
    case 85213:
    {
        returnValue = F("Driehauser Str.");
        break;
    }
    case 85214:
    {
        returnValue = F("Driehauser Weg");
        break;
    }
    case 85215:
    {
        returnValue = F("Driernweg");
        break;
    }
    case 85216:
    {
        returnValue = F("Driesbergstr.");
        break;
    }
    case 85217:
    {
        returnValue = F("Driesch");
        break;
    }
    case 85218:
    {
        returnValue = F("Driescheider Weg");
        break;
    }
    case 85219:
    {
        returnValue = F("Drieschenberg");
        break;
    }
    case 85220:
    {
        returnValue = F("Driescher Gässchen");
        break;
    }
    case 85221:
    {
        returnValue = F("Driescher Hecke");
        break;
    }
    case 85222:
    {
        returnValue = F("Driescher Hof");
        break;
    }
    case 85223:
    {
        returnValue = F("Driescher Kreisel");
        break;
    }
    case 85224:
    {
        returnValue = F("Driescher Kämpen");
        break;
    }
    case 85225:
    {
        returnValue = F("Driescher Mühle");
        break;
    }
    case 85226:
    {
        returnValue = F("Driescher Seifen");
        break;
    }
    case 85227:
    {
        returnValue = F("Driescher Str.");
        break;
    }
    case 85228:
    {
        returnValue = F("Driescher Weg");
        break;
    }
    case 85229:
    {
        returnValue = F("Driescherfeld");
        break;
    }
    case 85230:
    {
        returnValue = F("Driescherstr.");
        break;
    }
    case 85231:
    {
        returnValue = F("Drieschgasse");
        break;
    }
    case 85232:
    {
        returnValue = F("Drieschgärten");
        break;
    }
    case 85233:
    {
        returnValue = F("Drieschnitz-Vorwerk");
        break;
    }
    case 85234:
    {
        returnValue = F("Drieschnitzer Dorfstr.");
        break;
    }
    case 85235:
    {
        returnValue = F("Drieschstr.");
        break;
    }
    case 85236:
    {
        returnValue = F("Drieschweg");
        break;
    }
    case 85237:
    {
        returnValue = F("Driesemannstr.");
        break;
    }
    case 85238:
    {
        returnValue = F("Driesenweg");
        break;
    }
    case 85239:
    {
        returnValue = F("Driessenstr.");
        break;
    }
    case 85240:
    {
        returnValue = F("Driestweg");
        break;
    }
    case 85241:
    {
        returnValue = F("Driever Deichweg");
        break;
    }
    case 85242:
    {
        returnValue = F("Driever Heuweg");
        break;
    }
    case 85243:
    {
        returnValue = F("Drieversfeld");
        break;
    }
    case 85244:
    {
        returnValue = F("Drievordener Diek");
        break;
    }
    case 85245:
    {
        returnValue = F("Drievordener Str.");
        break;
    }
    case 85246:
    {
        returnValue = F("Drieweweg");
        break;
    }
    case 85247:
    {
        returnValue = F("Drießen");
        break;
    }
    case 85248:
    {
        returnValue = F("Drießendorfer Str.");
        break;
    }
    case 85249:
    {
        returnValue = F("Drießenstr.");
        break;
    }
    case 85250:
    {
        returnValue = F("Driffenstr.");
        break;
    }
    case 85251:
    {
        returnValue = F("Drifft");
        break;
    }
    case 85252:
    {
        returnValue = F("Drift");
        break;
    }
    case 85253:
    {
        returnValue = F("Drift Redder");
        break;
    }
    case 85254:
    {
        returnValue = F("Driftenstr.");
        break;
    }
    case 85255:
    {
        returnValue = F("Driftenweg");
        break;
    }
    case 85256:
    {
        returnValue = F("Driftkamp");
        break;
    }
    case 85257:
    {
        returnValue = F("Driftkoppel");
        break;
    }
    case 85258:
    {
        returnValue = F("Driftplatz");
        break;
    }
    case 85259:
    {
        returnValue = F("Driftsether Weg");
        break;
    }
    case 85260:
    {
        returnValue = F("Driftstr.");
        break;
    }
    case 85261:
    {
        returnValue = F("Driftsweg");
        break;
    }
    case 85262:
    {
        returnValue = F("Driftthun");
        break;
    }
    case 85263:
    {
        returnValue = F("Driftweg");
        break;
    }
    case 85264:
    {
        returnValue = F("Drigge");
        break;
    }
    case 85265:
    {
        returnValue = F("Drigger Weg");
        break;
    }
    case 85266:
    {
        returnValue = F("Driggernweg");
        break;
    }
    case 85267:
    {
        returnValue = F("Drijschämm");
        break;
    }
    case 85268:
    {
        returnValue = F("Drilkersweg");
        break;
    }
    case 85269:
    {
        returnValue = F("Drill");
        break;
    }
    case 85270:
    {
        returnValue = F("Drillerstr.");
        break;
    }
    case 85271:
    {
        returnValue = F("Drillespfad");
        break;
    }
    case 85272:
    {
        returnValue = F("Drillesplatz");
        break;
    }
    case 85273:
    {
        returnValue = F("Drillgasse");
        break;
    }
    case 85274:
    {
        returnValue = F("Drillmakersweg");
        break;
    }
    case 85275:
    {
        returnValue = F("Drilltauweg");
        break;
    }
    case 85276:
    {
        returnValue = F("Drimborner Wäldchen");
        break;
    }
    case 85277:
    {
        returnValue = F("Drimbornstr.");
        break;
    }
    case 85278:
    {
        returnValue = F("Drimbornweg");
        break;
    }
    case 85279:
    {
        returnValue = F("Dringenauer Str.");
        break;
    }
    case 85280:
    {
        returnValue = F("Dringenberger Str.");
        break;
    }
    case 85281:
    {
        returnValue = F("Dringenberger Weg");
        break;
    }
    case 85282:
    {
        returnValue = F("Dringenburger Str.");
        break;
    }
    case 85283:
    {
        returnValue = F("Dringenburgstr.");
        break;
    }
    case 85284:
    {
        returnValue = F("Drinhausen");
        break;
    }
    case 85285:
    {
        returnValue = F("Drinhausener Str.");
        break;
    }
    case 85286:
    {
        returnValue = F("Drinkelgrund");
        break;
    }
    case 85287:
    {
        returnValue = F("Drinker Schlaa");
        break;
    }
    case 85288:
    {
        returnValue = F("Drinkwedel");
        break;
    }
    case 85289:
    {
        returnValue = F("Drinsahler Str.");
        break;
    }
    case 85290:
    {
        returnValue = F("Drischbreite");
        break;
    }
    case 85291:
    {
        returnValue = F("Drischer Str.");
        break;
    }
    case 85292:
    {
        returnValue = F("Drischfeld");
        break;
    }
    case 85293:
    {
        returnValue = F("Drissenpaß");
        break;
    }
    case 85294:
    {
        returnValue = F("Drissenplatz");
        break;
    }
    case 85295:
    {
        returnValue = F("Dritte Felsengasse");
        break;
    }
    case 85296:
    {
        returnValue = F("Dritte Industriestr.");
        break;
    }
    case 85297:
    {
        returnValue = F("Dritte Str.");
        break;
    }
    case 85298:
    {
        returnValue = F("Dritte-Bult-Str.");
        break;
    }
    case 85299:
    {
        returnValue = F("Drittelfeld");
        break;
    }
    case 85300:
    {
        returnValue = F("Drittelsgasse");
        break;
    }
    case 85301:
    {
        returnValue = F("Drittelshof");
        break;
    }
    case 85302:
    {
        returnValue = F("Drittelwaldweg");
        break;
    }
    case 85303:
    {
        returnValue = F("Dritteläcker");
        break;
    }
    case 85304:
    {
        returnValue = F("Drittenbach");
        break;
    }
    case 85305:
    {
        returnValue = F("Dritteneimerweg");
        break;
    }
    case 85306:
    {
        returnValue = F("Drittenjahren");
        break;
    }
    case 85307:
    {
        returnValue = F("Drittenzell");
        break;
    }
    case 85308:
    {
        returnValue = F("Dritter Geräumtweg");
        break;
    }
    case 85309:
    {
        returnValue = F("Dritter Maschweg");
        break;
    }
    case 85310:
    {
        returnValue = F("Dritter Meedeweg");
        break;
    }
    case 85311:
    {
        returnValue = F("Dritter Moordamm");
        break;
    }
    case 85312:
    {
        returnValue = F("Dritter Mühlenbruchdamm");
        break;
    }
    case 85313:
    {
        returnValue = F("Dritter Neuenkruger Weg");
        break;
    }
    case 85314:
    {
        returnValue = F("Dritter Querweg");
        break;
    }
    case 85315:
    {
        returnValue = F("Dritter Rundweg");
        break;
    }
    case 85316:
    {
        returnValue = F("Dritter Seckbruchdamm");
        break;
    }
    case 85317:
    {
        returnValue = F("Dritter Weg");
        break;
    }
    case 85318:
    {
        returnValue = F("Drittes Quergäßchen");
        break;
    }
    case 85319:
    {
        returnValue = F("Drittgeest");
        break;
    }
    case 85320:
    {
        returnValue = F("Drivel");
        break;
    }
    case 85321:
    {
        returnValue = F("Driverstr.");
        break;
    }
    case 85322:
    {
        returnValue = F("Drißkamp");
        break;
    }
    case 85323:
    {
        returnValue = F("Drobitzer Str.");
        break;
    }
    case 85324:
    {
        returnValue = F("Drobollacher Platz");
        break;
    }
    case 85325:
    {
        returnValue = F("Drochauser Str.");
        break;
    }
    case 85326:
    {
        returnValue = F("Drochower Str.");
        break;
    }
    case 85327:
    {
        returnValue = F("Drochterser Str.");
        break;
    }
    case 85328:
    {
        returnValue = F("Drochtersermoor");
        break;
    }
    case 85329:
    {
        returnValue = F("Droemlingsstr.");
        break;
    }
    case 85330:
    {
        returnValue = F("Droetscher Str.");
        break;
    }
    case 85331:
    {
        returnValue = F("Drogener Str.");
        break;
    }
    case 85332:
    {
        returnValue = F("Drognitzer Str.");
        break;
    }
    case 85333:
    {
        returnValue = F("Drogostr.");
        break;
    }
    case 85334:
    {
        returnValue = F("Drohbuschweg");
        break;
    }
    case 85335:
    {
        returnValue = F("Drohe");
        break;
    }
    case 85336:
    {
        returnValue = F("Droher Str.");
        break;
    }
    case 85337:
    {
        returnValue = F("Drohmweg");
        break;
    }
    case 85338:
    {
        returnValue = F("Drohndorfer Landstr.");
        break;
    }
    case 85339:
    {
        returnValue = F("Drohndorfer Str.");
        break;
    }
    case 85340:
    {
        returnValue = F("Drohnenkampweg");
        break;
    }
    case 85341:
    {
        returnValue = F("Drohnenweg");
        break;
    }
    case 85342:
    {
        returnValue = F("Drohner Str.");
        break;
    }
    case 85343:
    {
        returnValue = F("Drohner Weg");
        break;
    }
    case 85344:
    {
        returnValue = F("Drohneweg");
        break;
    }
    case 85345:
    {
        returnValue = F("Drohnfeld");
        break;
    }
    case 85346:
    {
        returnValue = F("Drohnhorstweg");
        break;
    }
    case 85347:
    {
        returnValue = F("Drohnweg");
        break;
    }
    case 85348:
    {
        returnValue = F("Drohtwinkel");
        break;
    }
    case 85349:
    {
        returnValue = F("Drolshagenstr.");
        break;
    }
    case 85350:
    {
        returnValue = F("Dromersheimer Chaussee");
        break;
    }
    case 85351:
    {
        returnValue = F("Dromersheimer Str.");
        break;
    }
    case 85352:
    {
        returnValue = F("Dromigt");
        break;
    }
    case 85353:
    {
        returnValue = F("Dromigthof");
        break;
    }
    case 85354:
    {
        returnValue = F("Drommershäuser Str.");
        break;
    }
    case 85355:
    {
        returnValue = F("Dronfieldpark");
        break;
    }
    case 85356:
    {
        returnValue = F("Drongasse");
        break;
    }
    case 85357:
    {
        returnValue = F("Dronke-Weg");
        break;
    }
    case 85358:
    {
        returnValue = F("Dronkestr.");
        break;
    }
    case 85359:
    {
        returnValue = F("Dronneweg");
        break;
    }
    case 85360:
    {
        returnValue = F("Dronweg");
        break;
    }
    case 85361:
    {
        returnValue = F("Droogen");
        break;
    }
    case 85362:
    {
        returnValue = F("Drook");
        break;
    }
    case 85363:
    {
        returnValue = F("Droonsweg");
        break;
    }
    case 85364:
    {
        returnValue = F("Droopskamp");
        break;
    }
    case 85365:
    {
        returnValue = F("Dropebrücke");
        break;
    }
    case 85366:
    {
        returnValue = F("Droper Str.");
        break;
    }
    case 85367:
    {
        returnValue = F("Droptrail");
        break;
    }
    case 85368:
    {
        returnValue = F("Drosaer Gartenstr.");
        break;
    }
    case 85369:
    {
        returnValue = F("Drosaer Lindenstr.");
        break;
    }
    case 85370:
    {
        returnValue = F("Drosaer Schulstr.");
        break;
    }
    case 85371:
    {
        returnValue = F("Drosaer Str.");
        break;
    }
    case 85372:
    {
        returnValue = F("Droschkenweg");
        break;
    }
    case 85373:
    {
        returnValue = F("Drosedow");
        break;
    }
    case 85374:
    {
        returnValue = F("Drosedow Bungalowsiedlung");
        break;
    }
    case 85375:
    {
        returnValue = F("Drosedower Str.");
        break;
    }
    case 85376:
    {
        returnValue = F("Drosedower Weg");
        break;
    }
    case 85377:
    {
        returnValue = F("Drosendorfer Str.");
        break;
    }
    case 85378:
    {
        returnValue = F("Drosselanger");
        break;
    }
    case 85379:
    {
        returnValue = F("Drosselbart");
        break;
    }
    case 85380:
    {
        returnValue = F("Drosselbartstr.");
        break;
    }
    case 85381:
    {
        returnValue = F("Drosselbartweg");
        break;
    }
    case 85382:
    {
        returnValue = F("Drosselbauwerk");
        break;
    }
    case 85383:
    {
        returnValue = F("Drosselbergstr.");
        break;
    }
    case 85384:
    {
        returnValue = F("Drosselbrink");
        break;
    }
    case 85385:
    {
        returnValue = F("Drosselbusch");
        break;
    }
    case 85386:
    {
        returnValue = F("Drosseleck");
        break;
    }
    case 85387:
    {
        returnValue = F("Drosselfeld");
        break;
    }
    case 85388:
    {
        returnValue = F("Drosselgang");
        break;
    }
    case 85389:
    {
        returnValue = F("Drosselgarten");
        break;
    }
    case 85390:
    {
        returnValue = F("Drosselgasse");
        break;
    }
    case 85391:
    {
        returnValue = F("Drosselgrund");
        break;
    }
    case 85392:
    {
        returnValue = F("Drosselhardt");
        break;
    }
    case 85393:
    {
        returnValue = F("Drosselheide");
        break;
    }
    case 85394:
    {
        returnValue = F("Drosselhof");
        break;
    }
    case 85395:
    {
        returnValue = F("Drosselhörn");
        break;
    }
    case 85396:
    {
        returnValue = F("Drosselkamp");
        break;
    }
    case 85397:
    {
        returnValue = F("Drosselkehre");
        break;
    }
    case 85398:
    {
        returnValue = F("Drosselngang");
        break;
    }
    case 85399:
    {
        returnValue = F("Drosselpfad");
        break;
    }
    case 85400:
    {
        returnValue = F("Drosselring");
        break;
    }
    case 85401:
    {
        returnValue = F("Drosselsangweg");
        break;
    }
    case 85402:
    {
        returnValue = F("Drosselschlag");
        break;
    }
    case 85403:
    {
        returnValue = F("Drosselsteg");
        break;
    }
    case 85404:
    {
        returnValue = F("Drosselsteig");
        break;
    }
    case 85405:
    {
        returnValue = F("Drosselstieg");
        break;
    }
    case 85406:
    {
        returnValue = F("Drosselstiege");
        break;
    }
    case 85407:
    {
        returnValue = F("Drosselstr.");
        break;
    }
    case 85408:
    {
        returnValue = F("Drosselweg");
        break;
    }
    case 85409:
    {
        returnValue = F("Drosselweg 251 - 295");
        break;
    }
    case 85410:
    {
        returnValue = F("Drosselweg A");
        break;
    }
    case 85411:
    {
        returnValue = F("Drosselwinkel");
        break;
    }
    case 85412:
    {
        returnValue = F("Drosselwweg");
        break;
    }
    case 85413:
    {
        returnValue = F("Drossenfelder Str.");
        break;
    }
    case 85414:
    {
        returnValue = F("Drossenhäuser Weg");
        break;
    }
    case 85415:
    {
        returnValue = F("Drossingweg");
        break;
    }
    case 85416:
    {
        returnValue = F("Drost-Rose-Str.");
        break;
    }
    case 85417:
    {
        returnValue = F("Droste Gärten");
        break;
    }
    case 85418:
    {
        returnValue = F("Droste-Hülshoff-Allee");
        break;
    }
    case 85419:
    {
        returnValue = F("Droste-Hülshoff-Eck");
        break;
    }
    case 85420:
    {
        returnValue = F("Droste-Hülshoff-Platz");
        break;
    }
    case 85421:
    {
        returnValue = F("Droste-Hülshoff-Ring");
        break;
    }
    case 85422:
    {
        returnValue = F("Droste-Hülshoff-Str.");
        break;
    }
    case 85423:
    {
        returnValue = F("Droste-Hülshoff-Weg");
        break;
    }
    case 85424:
    {
        returnValue = F("Droste-Twickel-Str.");
        break;
    }
    case 85425:
    {
        returnValue = F("Droste-Vischering-Str.");
        break;
    }
    case 85426:
    {
        returnValue = F("Droste-zu-Senden-Str.");
        break;
    }
    case 85427:
    {
        returnValue = F("Droste-zu-Vischering-Weg");
        break;
    }
    case 85428:
    {
        returnValue = F("Drosteallee");
        break;
    }
    case 85429:
    {
        returnValue = F("Drostehof");
        break;
    }
    case 85430:
    {
        returnValue = F("Drostei");
        break;
    }
    case 85431:
    {
        returnValue = F("Drosteipark");
        break;
    }
    case 85432:
    {
        returnValue = F("Drosteiweg");
        break;
    }
    case 85433:
    {
        returnValue = F("Drosten Land");
        break;
    }
    case 85434:
    {
        returnValue = F("Drostenberg");
        break;
    }
    case 85435:
    {
        returnValue = F("Drostenbrink");
        break;
    }
    case 85436:
    {
        returnValue = F("Drostendick");
        break;
    }
    case 85437:
    {
        returnValue = F("Drostenfeld");
        break;
    }
    case 85438:
    {
        returnValue = F("Drostengarten Rietberg");
        break;
    }
    case 85439:
    {
        returnValue = F("Drostengasse");
        break;
    }
    case 85440:
    {
        returnValue = F("Drostenhof");
        break;
    }
    case 85441:
    {
        returnValue = F("Drostenhorst");
        break;
    }
    case 85442:
    {
        returnValue = F("Drostenkamp");
        break;
    }
    case 85443:
    {
        returnValue = F("Drostenkampstr.");
        break;
    }
    case 85444:
    {
        returnValue = F("Drostenkämpchen");
        break;
    }
    case 85445:
    {
        returnValue = F("Drostenpfad");
        break;
    }
    case 85446:
    {
        returnValue = F("Drostenstr.");
        break;
    }
    case 85447:
    {
        returnValue = F("Drostenweg");
        break;
    }
    case 85448:
    {
        returnValue = F("Drostenwiese");
        break;
    }
    case 85449:
    {
        returnValue = F("Drostestr.");
        break;
    }
    case 85450:
    {
        returnValue = F("Drosteweg");
        break;
    }
    case 85451:
    {
        returnValue = F("Drover Heide - hellgrüner Weg");
        break;
    }
    case 85452:
    {
        returnValue = F("Drover Str.");
        break;
    }
    case 85453:
    {
        returnValue = F("Drovestr.");
        break;
    }
    case 85454:
    {
        returnValue = F("Droysenkehre");
        break;
    }
    case 85455:
    {
        returnValue = F("Droysenstr.");
        break;
    }
    case 85456:
    {
        returnValue = F("Droyßiger Str.");
        break;
    }
    case 85457:
    {
        returnValue = F("Droyßiger Weg");
        break;
    }
    case 85458:
    {
        returnValue = F("Drozzastr.");
        break;
    }
    case 85459:
    {
        returnValue = F("Droßbachsiedlung");
        break;
    }
    case 85460:
    {
        returnValue = F("Droßdorfer Str.");
        break;
    }
    case 85461:
    {
        returnValue = F("Droßkau");
        break;
    }
    case 85462:
    {
        returnValue = F("Droßlingstr.");
        break;
    }
    case 85463:
    {
        returnValue = F("Drubachweg");
        break;
    }
    case 85464:
    {
        returnValue = F("Drubbel");
        break;
    }
    case 85465:
    {
        returnValue = F("Drubbelhelle");
        break;
    }
    case 85466:
    {
        returnValue = F("Drubbelstr.");
        break;
    }
    case 85467:
    {
        returnValue = F("Drubbelweg");
        break;
    }
    case 85468:
    {
        returnValue = F("Druchgang Mittelfeld / Nordfeld");
        break;
    }
    case 85469:
    {
        returnValue = F("Druchhorner Str.");
        break;
    }
    case 85470:
    {
        returnValue = F("Druchtemicke");
        break;
    }
    case 85471:
    {
        returnValue = F("Druckenmüllerstr.");
        break;
    }
    case 85472:
    {
        returnValue = F("Druckereihäuser");
        break;
    }
    case 85473:
    {
        returnValue = F("Druckereistr.");
        break;
    }
    case 85474:
    {
        returnValue = F("Druckergasse");
        break;
    }
    case 85475:
    {
        returnValue = F("Druckerstr.");
        break;
    }
    case 85476:
    {
        returnValue = F("Druckerweg");
        break;
    }
    case 85477:
    {
        returnValue = F("Druckmüllerstr.");
        break;
    }
    case 85478:
    {
        returnValue = F("Druckrohrweg");
        break;
    }
    case 85479:
    {
        returnValue = F("Drucksbrücke");
        break;
    }
    case 85480:
    {
        returnValue = F("Drudenstr.");
        break;
    }
    case 85481:
    {
        returnValue = F("Drudenweg");
        break;
    }
    case 85482:
    {
        returnValue = F("Drudestr.");
        break;
    }
    case 85483:
    {
        returnValue = F("Druffelbecker Weg");
        break;
    }
    case 85484:
    {
        returnValue = F("Druffeler Str.");
        break;
    }
    case 85485:
    {
        returnValue = F("Druffelkamp");
        break;
    }
    case 85486:
    {
        returnValue = F("Druffels Weg");
        break;
    }
    case 85487:
    {
        returnValue = F("Druffelstr.");
        break;
    }
    case 85488:
    {
        returnValue = F("Druhwaldstr.");
        break;
    }
    case 85489:
    {
        returnValue = F("Druhwaldsweg");
        break;
    }
    case 85490:
    {
        returnValue = F("Druidenstr.");
        break;
    }
    case 85491:
    {
        returnValue = F("Druidenweg");
        break;
    }
    case 85492:
    {
        returnValue = F("Druisheimer Str.");
        break;
    }
    case 85493:
    {
        returnValue = F("Drukenstr.");
        break;
    }
    case 85494:
    {
        returnValue = F("Drulinger Eck");
        break;
    }
    case 85495:
    {
        returnValue = F("Drumberg");
        break;
    }
    case 85496:
    {
        returnValue = F("Drumbergen");
        break;
    }
    case 85497:
    {
        returnValue = F("Drumbergen-Radweg");
        break;
    }
    case 85498:
    {
        returnValue = F("Drumlinweg");
        break;
    }
    case 85499:
    {
        returnValue = F("Drumshorner Str.");
        break;
    }
    case 85500:
    {
        returnValue = F("Drumstege");
        break;
    }
    case 85501:
    {
        returnValue = F("Drunken-Manns-Stieg");
        break;
    }
    case 85502:
    {
        returnValue = F("Druppskampweg");
        break;
    }
    case 85503:
    {
        returnValue = F("Druschweg");
        break;
    }
    case 85504:
    {
        returnValue = F("Drusenborn");
        break;
    }
    case 85505:
    {
        returnValue = F("Druslachstr.");
        break;
    }
    case 85506:
    {
        returnValue = F("Drusselstr.");
        break;
    }
    case 85507:
    {
        returnValue = F("Drustenweg");
        break;
    }
    case 85508:
    {
        returnValue = F("Drususallee");
        break;
    }
    case 85509:
    {
        returnValue = F("Drususdeich");
        break;
    }
    case 85510:
    {
        returnValue = F("Drususplatz");
        break;
    }
    case 85511:
    {
        returnValue = F("Drususring");
        break;
    }
    case 85512:
    {
        returnValue = F("Drususstr.");
        break;
    }
    case 85513:
    {
        returnValue = F("Drususwall");
        break;
    }
    case 85514:
    {
        returnValue = F("Druventwiete");
        break;
    }
    case 85515:
    {
        returnValue = F("Druwappelplatz");
        break;
    }
    case 85516:
    {
        returnValue = F("Druxberger Bergstr.");
        break;
    }
    case 85517:
    {
        returnValue = F("Druxberger Weg");
        break;
    }
    case 85518:
    {
        returnValue = F("Dryanderstr.");
        break;
    }
    case 85519:
    {
        returnValue = F("Dryburg");
        break;
    }
    case 85520:
    {
        returnValue = F("Drysatz");
        break;
    }
    case 85521:
    {
        returnValue = F("Drägerkoppel");
        break;
    }
    case 85522:
    {
        returnValue = F("Drägerweg");
        break;
    }
    case 85523:
    {
        returnValue = F("Drängetal");
        break;
    }
    case 85524:
    {
        returnValue = F("Drängetal Hangweg");
        break;
    }
    case 85525:
    {
        returnValue = F("Dränke");
        break;
    }
    case 85526:
    {
        returnValue = F("Dränkerkampstr.");
        break;
    }
    case 85527:
    {
        returnValue = F("Dränkeweg");
        break;
    }
    case 85528:
    {
        returnValue = F("Dränkweg");
        break;
    }
    case 85529:
    {
        returnValue = F("Dräsdorfer Weg");
        break;
    }
    case 85530:
    {
        returnValue = F("Dräseckeplatz");
        break;
    }
    case 85531:
    {
        returnValue = F("Dräxlmairweg");
        break;
    }
    case 85532:
    {
        returnValue = F("Dröbakstr.");
        break;
    }
    case 85533:
    {
        returnValue = F("Drödaer Str.");
        break;
    }
    case 85534:
    {
        returnValue = F("Dröft");
        break;
    }
    case 85535:
    {
        returnValue = F("Dröge Grund");
        break;
    }
    case 85536:
    {
        returnValue = F("Dröge Hörn");
        break;
    }
    case 85537:
    {
        returnValue = F("Dröge Möhl");
        break;
    }
    case 85538:
    {
        returnValue = F("Dröge Wiese");
        break;
    }
    case 85539:
    {
        returnValue = F("Dröge Wisch");
        break;
    }
    case 85540:
    {
        returnValue = F("Drögeholt");
        break;
    }
    case 85541:
    {
        returnValue = F("Drögekamp");
        break;
    }
    case 85542:
    {
        returnValue = F("Drögen");
        break;
    }
    case 85543:
    {
        returnValue = F("Drögen-Hasen-Weg");
        break;
    }
    case 85544:
    {
        returnValue = F("Drögenborn");
        break;
    }
    case 85545:
    {
        returnValue = F("Drögendiek");
        break;
    }
    case 85546:
    {
        returnValue = F("Drögeneck");
        break;
    }
    case 85547:
    {
        returnValue = F("Drögener Weg");
        break;
    }
    case 85548:
    {
        returnValue = F("Drögenheide");
        break;
    }
    case 85549:
    {
        returnValue = F("Drögenholz");
        break;
    }
    case 85550:
    {
        returnValue = F("Drögenholzberg");
        break;
    }
    case 85551:
    {
        returnValue = F("Drögenhorst");
        break;
    }
    case 85552:
    {
        returnValue = F("Drögenkamp");
        break;
    }
    case 85553:
    {
        returnValue = F("Drögennindorfer Str.");
        break;
    }
    case 85554:
    {
        returnValue = F("Drögenstr.");
        break;
    }
    case 85555:
    {
        returnValue = F("Drögenweg");
        break;
    }
    case 85556:
    {
        returnValue = F("Dröger Teich");
        break;
    }
    case 85557:
    {
        returnValue = F("Drögerhorst");
        break;
    }
    case 85558:
    {
        returnValue = F("Dröges Pättken");
        break;
    }
    case 85559:
    {
        returnValue = F("Drögfenne");
        break;
    }
    case 85560:
    {
        returnValue = F("Dröhbergstr.");
        break;
    }
    case 85561:
    {
        returnValue = F("Dröhnenweg");
        break;
    }
    case 85562:
    {
        returnValue = F("Drölitzer Chaussee");
        break;
    }
    case 85563:
    {
        returnValue = F("Drölsholz");
        break;
    }
    case 85564:
    {
        returnValue = F("Drömling Str.");
        break;
    }
    case 85565:
    {
        returnValue = F("Drömlinger Str.");
        break;
    }
    case 85566:
    {
        returnValue = F("Drömlingsstr.");
        break;
    }
    case 85567:
    {
        returnValue = F("Drömlingstr.");
        break;
    }
    case 85568:
    {
        returnValue = F("Drömlingsweg");
        break;
    }
    case 85569:
    {
        returnValue = F("Drömlingweg");
        break;
    }
    case 85570:
    {
        returnValue = F("Drömptweg");
        break;
    }
    case 85571:
    {
        returnValue = F("Drömscher Str.");
        break;
    }
    case 85572:
    {
        returnValue = F("Drönkerweg");
        break;
    }
    case 85573:
    {
        returnValue = F("Drönnewitz");
        break;
    }
    case 85574:
    {
        returnValue = F("Drönnewitzer Str.");
        break;
    }
    case 85575:
    {
        returnValue = F("Drönnewitzer Weg");
        break;
    }
    case 85576:
    {
        returnValue = F("Dröper");
        break;
    }
    case 85577:
    {
        returnValue = F("Dröpsenweg");
        break;
    }
    case 85578:
    {
        returnValue = F("Dröscheder Berg");
        break;
    }
    case 85579:
    {
        returnValue = F("Dröscheder Weg");
        break;
    }
    case 85580:
    {
        returnValue = F("Dröschiweg");
        break;
    }
    case 85581:
    {
        returnValue = F("Dröschkau");
        break;
    }
    case 85582:
    {
        returnValue = F("Dröschkauer Forsthaus");
        break;
    }
    case 85583:
    {
        returnValue = F("Dröschkauer Weinberg");
        break;
    }
    case 85584:
    {
        returnValue = F("Drösede");
        break;
    }
    case 85585:
    {
        returnValue = F("Dröseder Weg");
        break;
    }
    case 85586:
    {
        returnValue = F("Drösewiese");
        break;
    }
    case 85587:
    {
        returnValue = F("Dröstendrift");
        break;
    }
    case 85588:
    {
        returnValue = F("Dröttbomsweg");
        break;
    }
    case 85589:
    {
        returnValue = F("Drößiger Str.");
        break;
    }
    case 85590:
    {
        returnValue = F("Drößiger Weg");
        break;
    }
    case 85591:
    {
        returnValue = F("Drößlinger Str.");
        break;
    }
    case 85592:
    {
        returnValue = F("Drübber");
        break;
    }
    case 85593:
    {
        returnValue = F("Drübecker Weg");
        break;
    }
    case 85594:
    {
        returnValue = F("Drübelweg");
        break;
    }
    case 85595:
    {
        returnValue = F("Drückerboden");
        break;
    }
    case 85596:
    {
        returnValue = F("Drückers Heide");
        break;
    }
    case 85597:
    {
        returnValue = F("Drüdingstr.");
        break;
    }
    case 85598:
    {
        returnValue = F("Drüenstr.");
        break;
    }
    case 85599:
    {
        returnValue = F("Drüerland");
        break;
    }
    case 85600:
    {
        returnValue = F("Drügendorfer Str.");
        break;
    }
    case 85601:
    {
        returnValue = F("Drügstr.");
        break;
    }
    case 85602:
    {
        returnValue = F("Drüingsplatz");
        break;
    }
    case 85603:
    {
        returnValue = F("Drüller Weg");
        break;
    }
    case 85604:
    {
        returnValue = F("Drülloh");
        break;
    }
    case 85605:
    {
        returnValue = F("Drült");
        break;
    }
    case 85606:
    {
        returnValue = F("Drültstr.");
        break;
    }
    case 85607:
    {
        returnValue = F("Drümmelbergstr.");
        break;
    }
    case 85608:
    {
        returnValue = F("Drümpen");
        break;
    }
    case 85609:
    {
        returnValue = F("Drüner Weg");
        break;
    }
    case 85610:
    {
        returnValue = F("Drüohl");
        break;
    }
    case 85611:
    {
        returnValue = F("Drüppelgasse");
        break;
    }
    case 85612:
    {
        returnValue = F("Drüpplingser Hardt");
        break;
    }
    case 85613:
    {
        returnValue = F("Drüpplingser Str.");
        break;
    }
    case 85614:
    {
        returnValue = F("Drüpter Weg");
        break;
    }
    case 85615:
    {
        returnValue = F("Drüsedau");
        break;
    }
    case 85616:
    {
        returnValue = F("Drüsewitz");
        break;
    }
    case 85617:
    {
        returnValue = F("Drüstenstr.");
        break;
    }
    case 85618:
    {
        returnValue = F("Drütter Str.");
        break;
    }
    case 85619:
    {
        returnValue = F("Dschungel Safari-Tour");
        break;
    }
    case 85620:
    {
        returnValue = F("Du-Mesnil-Str.");
        break;
    }
    case 85621:
    {
        returnValue = F("Du-Pont-Str.");
        break;
    }
    case 85622:
    {
        returnValue = F("Du-Russel-Str.");
        break;
    }
    case 85623:
    {
        returnValue = F("Duannenweg");
        break;
    }
    case 85624:
    {
        returnValue = F("Duballig");
        break;
    }
    case 85625:
    {
        returnValue = F("Dubben");
        break;
    }
    case 85626:
    {
        returnValue = F("Dubbensahlskamp");
        break;
    }
    case 85627:
    {
        returnValue = F("Dubbenstieg");
        break;
    }
    case 85628:
    {
        returnValue = F("Dubbenweg");
        break;
    }
    case 85629:
    {
        returnValue = F("Dubberskamp");
        break;
    }
    case 85630:
    {
        returnValue = F("Dubenbeke");
        break;
    }
    case 85631:
    {
        returnValue = F("Dubenbrok");
        break;
    }
    case 85632:
    {
        returnValue = F("Dubener Bahnhofstr.");
        break;
    }
    case 85633:
    {
        returnValue = F("Dubener Hauptstr.");
        break;
    }
    case 85634:
    {
        returnValue = F("Dubener Landstr.");
        break;
    }
    case 85635:
    {
        returnValue = F("Dubener Weg");
        break;
    }
    case 85636:
    {
        returnValue = F("Dubenhorst");
        break;
    }
    case 85637:
    {
        returnValue = F("Dubenkamp");
        break;
    }
    case 85638:
    {
        returnValue = F("Dubenweg");
        break;
    }
    case 85639:
    {
        returnValue = F("Dubkevitz");
        break;
    }
    case 85640:
    {
        returnValue = F("Dubliner Allee");
        break;
    }
    case 85641:
    {
        returnValue = F("Dubliner Str.");
        break;
    }
    case 85642:
    {
        returnValue = F("Dubliner Weg");
        break;
    }
    case 85643:
    {
        returnValue = F("Dublinstr.");
        break;
    }
    case 85644:
    {
        returnValue = F("Dublinweg");
        break;
    }
    case 85645:
    {
        returnValue = F("Dubnaring");
        break;
    }
    case 85646:
    {
        returnValue = F("Dubnastr.");
        break;
    }
    case 85647:
    {
        returnValue = F("Dubnitz");
        break;
    }
    case 85648:
    {
        returnValue = F("Duborgstr.");
        break;
    }
    case 85649:
    {
        returnValue = F("Dubrauer Dorfstr.");
        break;
    }
    case 85650:
    {
        returnValue = F("Dubrauer Str.");
        break;
    }
    case 85651:
    {
        returnValue = F("Dubrauker Str.");
        break;
    }
    case 85652:
    {
        returnValue = F("Dubrauker Waldweg");
        break;
    }
    case 85653:
    {
        returnValue = F("Dubrauweg");
        break;
    }
    case 85654:
    {
        returnValue = F("Dubring");
        break;
    }
    case 85655:
    {
        returnValue = F("Dubrovnik Platz");
        break;
    }
    case 85656:
    {
        returnValue = F("Dubrower Str.");
        break;
    }
    case 85657:
    {
        returnValue = F("Dubrower Weg");
        break;
    }
    case 85658:
    {
        returnValue = F("Duburger Str.");
        break;
    }
    case 85659:
    {
        returnValue = F("Dubweg");
        break;
    }
    case 85660:
    {
        returnValue = F("Duccastr.");
        break;
    }
    case 85661:
    {
        returnValue = F("Duchrother Str.");
        break;
    }
    case 85662:
    {
        returnValue = F("Duchselgasse");
        break;
    }
    case 85663:
    {
        returnValue = F("Duchtlinger Steig");
        break;
    }
    case 85664:
    {
        returnValue = F("Duchtlinger Str.");
        break;
    }
    case 85665:
    {
        returnValue = F("Duckensweg");
        break;
    }
    case 85666:
    {
        returnValue = F("Duckmaus");
        break;
    }
    case 85667:
    {
        returnValue = F("Ducksteingasse");
        break;
    }
    case 85668:
    {
        returnValue = F("Ducksteinweg");
        break;
    }
    case 85669:
    {
        returnValue = F("Duckterather Busch");
        break;
    }
    case 85670:
    {
        returnValue = F("Duckterather Weg");
        break;
    }
    case 85671:
    {
        returnValue = F("Duckunder");
        break;
    }
    case 85672:
    {
        returnValue = F("Duckweilerstr.");
        break;
    }
    case 85673:
    {
        returnValue = F("Duckwitz");
        break;
    }
    case 85674:
    {
        returnValue = F("Duclairstr.");
        break;
    }
    case 85675:
    {
        returnValue = F("Dudastr.");
        break;
    }
    case 85676:
    {
        returnValue = F("Dudden");
        break;
    }
    case 85677:
    {
        returnValue = F("Duddenhausen");
        break;
    }
    case 85678:
    {
        returnValue = F("Duddenhauser Str.");
        break;
    }
    case 85679:
    {
        returnValue = F("Duddenhäuser Str.");
        break;
    }
    case 85680:
    {
        returnValue = F("Duddinger Weg");
        break;
    }
    case 85681:
    {
        returnValue = F("Dudel");
        break;
    }
    case 85682:
    {
        returnValue = F("Dudeldorfer Str.");
        break;
    }
    case 85683:
    {
        returnValue = F("Dudelerstr.");
        break;
    }
    case 85684:
    {
        returnValue = F("Dudelsack");
        break;
    }
    case 85685:
    {
        returnValue = F("Dudelsackstr.");
        break;
    }
    case 85686:
    {
        returnValue = F("Dudelsbachweg");
        break;
    }
    case 85687:
    {
        returnValue = F("Dudelstr.");
        break;
    }
    case 85688:
    {
        returnValue = F("Dudenbacherhof");
        break;
    }
    case 85689:
    {
        returnValue = F("Dudenbachstr.");
        break;
    }
    case 85690:
    {
        returnValue = F("Dudenborgstr.");
        break;
    }
    case 85691:
    {
        returnValue = F("Dudenhofener Str.");
        break;
    }
    case 85692:
    {
        returnValue = F("Dudenhofer Str.");
        break;
    }
    case 85693:
    {
        returnValue = F("Dudenhöfer Feldschneise");
        break;
    }
    case 85694:
    {
        returnValue = F("Dudenhöfer Str.");
        break;
    }
    case 85695:
    {
        returnValue = F("Dudenhöfer Weg");
        break;
    }
    case 85696:
    {
        returnValue = F("Dudenhöfer Wegschneise");
        break;
    }
    case 85697:
    {
        returnValue = F("Dudenroder Str.");
        break;
    }
    case 85698:
    {
        returnValue = F("Dudenrother Str.");
        break;
    }
    case 85699:
    {
        returnValue = F("Dudenser Str.");
        break;
    }
    case 85700:
    {
        returnValue = F("Dudenser Weg");
        break;
    }
    case 85701:
    {
        returnValue = F("Dudenstr.");
        break;
    }
    case 85702:
    {
        returnValue = F("Dudenweg");
        break;
    }
    case 85703:
    {
        returnValue = F("Dudersbachweg");
        break;
    }
    case 85704:
    {
        returnValue = F("Duderstadter Weg");
        break;
    }
    case 85705:
    {
        returnValue = F("Duderstädter Allee");
        break;
    }
    case 85706:
    {
        returnValue = F("Duderstädter Landstr.");
        break;
    }
    case 85707:
    {
        returnValue = F("Duderstädter Str.");
        break;
    }
    case 85708:
    {
        returnValue = F("Duderstädter Weg");
        break;
    }
    case 85709:
    {
        returnValue = F("Dudewar");
        break;
    }
    case 85710:
    {
        returnValue = F("Dudinger Weg");
        break;
    }
    case 85711:
    {
        returnValue = F("Dudoplatz");
        break;
    }
    case 85712:
    {
        returnValue = F("Dudostr.");
        break;
    }
    case 85713:
    {
        returnValue = F("Dudoweg");
        break;
    }
    case 85714:
    {
        returnValue = F("Dudweiler Landstr.");
        break;
    }
    case 85715:
    {
        returnValue = F("Dudweiler Stadtweg");
        break;
    }
    case 85716:
    {
        returnValue = F("Dudweiler Str.");
        break;
    }
    case 85717:
    {
        returnValue = F("Dudweilerhof");
        break;
    }
    case 85718:
    {
        returnValue = F("Dudweilerstr.");
        break;
    }
    case 85719:
    {
        returnValue = F("Dudweilertal");
        break;
    }
    case 85720:
    {
        returnValue = F("Duellweg");
        break;
    }
    case 85721:
    {
        returnValue = F("Duenseeweg");
        break;
    }
    case 85722:
    {
        returnValue = F("Duenser Weg");
        break;
    }
    case 85723:
    {
        returnValue = F("Duererstr.");
        break;
    }
    case 85724:
    {
        returnValue = F("Duesbergs Kamp");
        break;
    }
    case 85725:
    {
        returnValue = F("Duesbergstr.");
        break;
    }
    case 85726:
    {
        returnValue = F("Duettchens Höh");
        break;
    }
    case 85727:
    {
        returnValue = F("Dueviller Platz");
        break;
    }
    case 85728:
    {
        returnValue = F("Dufelbachweg");
        break;
    }
    case 85729:
    {
        returnValue = F("Dufenkamp");
        break;
    }
    case 85730:
    {
        returnValue = F("Duffeler Ring");
        break;
    }
    case 85731:
    {
        returnValue = F("Duffernbachstr.");
        break;
    }
    case 85732:
    {
        returnValue = F("Duffesbach");
        break;
    }
    case 85733:
    {
        returnValue = F("Duffesbachstr.");
        break;
    }
    case 85734:
    {
        returnValue = F("Duffesheider Weg");
        break;
    }
    case 85735:
    {
        returnValue = F("Duffesweg");
        break;
    }
    case 85736:
    {
        returnValue = F("Dufhaussteg");
        break;
    }
    case 85737:
    {
        returnValue = F("Dufkampstr.");
        break;
    }
    case 85738:
    {
        returnValue = F("Dufnerwinkelweg");
        break;
    }
    case 85739:
    {
        returnValue = F("Duft-Tunnel");
        break;
    }
    case 85740:
    {
        returnValue = F("Duftbachweg");
        break;
    }
    case 85741:
    {
        returnValue = F("Duftberg");
        break;
    }
    case 85742:
    {
        returnValue = F("Dufthang");
        break;
    }
    case 85743:
    {
        returnValue = F("Duftrosenpark Kienberg");
        break;
    }
    case 85744:
    {
        returnValue = F("Duggelplatz");
        break;
    }
    case 85745:
    {
        returnValue = F("Duggendorfer Str.");
        break;
    }
    case 85746:
    {
        returnValue = F("Duggenkoppel");
        break;
    }
    case 85747:
    {
        returnValue = F("Duhamel Weg");
        break;
    }
    case 85748:
    {
        returnValue = F("Duhlwiesen");
        break;
    }
    case 85749:
    {
        returnValue = F("Duhmblick");
        break;
    }
    case 85750:
    {
        returnValue = F("Duhmes Wiese");
        break;
    }
    case 85751:
    {
        returnValue = F("Duhner Allee");
        break;
    }
    case 85752:
    {
        returnValue = F("Duhner Kreisel");
        break;
    }
    case 85753:
    {
        returnValue = F("Duhner Strandstr.");
        break;
    }
    case 85754:
    {
        returnValue = F("Duhner Weg");
        break;
    }
    case 85755:
    {
        returnValue = F("Duhorn");
        break;
    }
    case 85756:
    {
        returnValue = F("Duhr");
        break;
    }
    case 85757:
    {
        returnValue = F("Duinger Landstr.");
        break;
    }
    case 85758:
    {
        returnValue = F("Duinger Str.");
        break;
    }
    case 85759:
    {
        returnValue = F("Duinger Weg");
        break;
    }
    case 85760:
    {
        returnValue = F("Duisbergstr.");
        break;
    }
    case 85761:
    {
        returnValue = F("Duisburger Str.");
        break;
    }
    case 85762:
    {
        returnValue = F("Duisburger Weg");
        break;
    }
    case 85763:
    {
        returnValue = F("Duisdorfer Str.");
        break;
    }
    case 85764:
    {
        returnValue = F("Duisenburg");
        break;
    }
    case 85765:
    {
        returnValue = F("Duisenburger Brink");
        break;
    }
    case 85766:
    {
        returnValue = F("Duisenburger Diek");
        break;
    }
    case 85767:
    {
        returnValue = F("Duiserpesch");
        break;
    }
    case 85768:
    {
        returnValue = F("Duisfeld");
        break;
    }
    case 85769:
    {
        returnValue = F("Duismicke");
        break;
    }
    case 85770:
    {
        returnValue = F("Duistersteeg");
        break;
    }
    case 85771:
    {
        returnValue = F("Duivenallee");
        break;
    }
    case 85772:
    {
        returnValue = F("Duiwels Küke");
        break;
    }
    case 85773:
    {
        returnValue = F("Dukatenwaldweg");
        break;
    }
    case 85774:
    {
        returnValue = F("Dukatenweg");
        break;
    }
    case 85775:
    {
        returnValue = F("Dukegat");
        break;
    }
    case 85776:
    {
        returnValue = F("Dukelweg");
        break;
    }
    case 85777:
    {
        returnValue = F("Dulflacher Weg");
        break;
    }
    case 85778:
    {
        returnValue = F("Dulgenkoppel");
        break;
    }
    case 85779:
    {
        returnValue = F("Dulings Breite");
        break;
    }
    case 85780:
    {
        returnValue = F("Dulkweg");
        break;
    }
    case 85781:
    {
        returnValue = F("Dullenbergstr.");
        break;
    }
    case 85782:
    {
        returnValue = F("Dullenriedweg");
        break;
    }
    case 85783:
    {
        returnValue = F("Dullenwang");
        break;
    }
    case 85784:
    {
        returnValue = F("Dullertwerg");
        break;
    }
    case 85785:
    {
        returnValue = F("Dullgarten");
        break;
    }
    case 85786:
    {
        returnValue = F("Dullgartenweg");
        break;
    }
    case 85787:
    {
        returnValue = F("Dulliker Platz");
        break;
    }
    case 85788:
    {
        returnValue = F("Dullingersiedlung");
        break;
    }
    case 85789:
    {
        returnValue = F("Dullrodt");
        break;
    }
    case 85790:
    {
        returnValue = F("Dullwalsweg");
        break;
    }
    case 85791:
    {
        returnValue = F("Dulmecker Weg");
        break;
    }
    case 85792:
    {
        returnValue = F("Dulohstr.");
        break;
    }
    case 85793:
    {
        returnValue = F("Dulohweg");
        break;
    }
    case 85794:
    {
        returnValue = F("Dulonstr.");
        break;
    }
    case 85795:
    {
        returnValue = F("Dulskamp");
        break;
    }
    case 85796:
    {
        returnValue = F("Dultplatz");
        break;
    }
    case 85797:
    {
        returnValue = F("Dumas-Weg");
        break;
    }
    case 85798:
    {
        returnValue = F("Dumbergergasse");
        break;
    }
    case 85799:
    {
        returnValue = F("Dumekestr.");
        break;
    }
    case 85800:
    {
        returnValue = F("Dumelweg");
        break;
    }
    case 85801:
    {
        returnValue = F("Dumen");
        break;
    }
    case 85802:
    {
        returnValue = F("Dumfrieser Ring");
        break;
    }
    case 85803:
    {
        returnValue = F("Dumgenevitz");
        break;
    }
    case 85804:
    {
        returnValue = F("Dumicker Str.");
        break;
    }
    case 85805:
    {
        returnValue = F("Dumicker Weg");
        break;
    }
    case 85806:
    {
        returnValue = F("Dumkuhlenweg");
        break;
    }
    case 85807:
    {
        returnValue = F("Dummelsmoos Brücke");
        break;
    }
    case 85808:
    {
        returnValue = F("Dummeltshausener Str.");
        break;
    }
    case 85809:
    {
        returnValue = F("Dummentaler Weg");
        break;
    }
    case 85810:
    {
        returnValue = F("Dummer Weg");
        break;
    }
    case 85811:
    {
        returnValue = F("Dummerstorfer Chaussee");
        break;
    }
    case 85812:
    {
        returnValue = F("Dumnissusstr.");
        break;
    }
    case 85813:
    {
        returnValue = F("Dumontstr.");
        break;
    }
    case 85814:
    {
        returnValue = F("Dumpe");
        break;
    }
    case 85815:
    {
        returnValue = F("Dumpel-Steig");
        break;
    }
    case 85816:
    {
        returnValue = F("Dumperweg");
        break;
    }
    case 85817:
    {
        returnValue = F("Dumpf");
        break;
    }
    case 85818:
    {
        returnValue = F("Dumpfweg");
        break;
    }
    case 85819:
    {
        returnValue = F("Dumrigstr.");
        break;
    }
    case 85820:
    {
        returnValue = F("Dumrigstrasse");
        break;
    }
    case 85821:
    {
        returnValue = F("Dumsevitz");
        break;
    }
    case 85822:
    {
        returnValue = F("Dumstorf");
        break;
    }
    case 85823:
    {
        returnValue = F("Dumstr.");
        break;
    }
    case 85824:
    {
        returnValue = F("Dumte");
        break;
    }
    case 85825:
    {
        returnValue = F("Dumter Str.");
        break;
    }
    case 85826:
    {
        returnValue = F("Dunaföldvarer Allee");
        break;
    }
    case 85827:
    {
        returnValue = F("Dunanstr.");
        break;
    }
    case 85828:
    {
        returnValue = F("Dunantplatz");
        break;
    }
    case 85829:
    {
        returnValue = F("Dunantring");
        break;
    }
    case 85830:
    {
        returnValue = F("Dunantstr.");
        break;
    }
    case 85831:
    {
        returnValue = F("Dunantweg");
        break;
    }
    case 85832:
    {
        returnValue = F("Dunckergasse");
        break;
    }
    case 85833:
    {
        returnValue = F("Dunckernbek");
        break;
    }
    case 85834:
    {
        returnValue = F("Dunckerplatz");
        break;
    }
    case 85835:
    {
        returnValue = F("Dundee Way");
        break;
    }
    case 85836:
    {
        returnValue = F("Dundeestr.");
        break;
    }
    case 85837:
    {
        returnValue = F("Dundenheimer Str.");
        break;
    }
    case 85838:
    {
        returnValue = F("Dundorfweg");
        break;
    }
    case 85839:
    {
        returnValue = F("Dune");
        break;
    }
    case 85840:
    {
        returnValue = F("Dune Mühle");
        break;
    }
    case 85841:
    {
        returnValue = F("Dunenweg");
        break;
    }
    case 85842:
    {
        returnValue = F("Dungaustr.");
        break;
    }
    case 85843:
    {
        returnValue = F("Dungelbecker Str.");
        break;
    }
    case 85844:
    {
        returnValue = F("Dungelfeld");
        break;
    }
    case 85845:
    {
        returnValue = F("Dungenhorst");
        break;
    }
    case 85846:
    {
        returnValue = F("Dunger Tor");
        break;
    }
    case 85847:
    {
        returnValue = F("Dungertweg");
        break;
    }
    case 85848:
    {
        returnValue = F("Dungestr.");
        break;
    }
    case 85849:
    {
        returnValue = F("Dungkweg");
        break;
    }
    case 85850:
    {
        returnValue = F("Dungweg");
        break;
    }
    case 85851:
    {
        returnValue = F("Dunhausener Weg");
        break;
    }
    case 85852:
    {
        returnValue = F("Duniwang");
        break;
    }
    case 85853:
    {
        returnValue = F("Dunk");
        break;
    }
    case 85854:
    {
        returnValue = F("Dunke");
        break;
    }
    case 85855:
    {
        returnValue = F("Dunkelallee");
        break;
    }
    case 85856:
    {
        returnValue = F("Dunkelebrunnenweg");
        break;
    }
    case 85857:
    {
        returnValue = F("Dunkelfurt");
        break;
    }
    case 85858:
    {
        returnValue = F("Dunkelgasse");
        break;
    }
    case 85859:
    {
        returnValue = F("Dunkelhauweg");
        break;
    }
    case 85860:
    {
        returnValue = F("Dunkelhäuser");
        break;
    }
    case 85861:
    {
        returnValue = F("Dunkelhöh");
        break;
    }
    case 85862:
    {
        returnValue = F("Dunkelnberger Str.");
        break;
    }
    case 85863:
    {
        returnValue = F("Dunkelsruher Weg");
        break;
    }
    case 85864:
    {
        returnValue = F("Dunkelstieg");
        break;
    }
    case 85865:
    {
        returnValue = F("Dunkelstr.");
        break;
    }
    case 85866:
    {
        returnValue = F("Dunkeltal");
        break;
    }
    case 85867:
    {
        returnValue = F("Dunkenbre");
        break;
    }
    case 85868:
    {
        returnValue = F("Dunkenweg");
        break;
    }
    case 85869:
    {
        returnValue = F("Dunker Weg");
        break;
    }
    case 85870:
    {
        returnValue = F("Dunkerhofstr.");
        break;
    }
    case 85871:
    {
        returnValue = F("Dunkersiedlung");
        break;
    }
    case 85872:
    {
        returnValue = F("Dunkerskamp");
        break;
    }
    case 85873:
    {
        returnValue = F("Dunkerstr.");
        break;
    }
    case 85874:
    {
        returnValue = F("Dunkhorst");
        break;
    }
    case 85875:
    {
        returnValue = F("Dunkhörnweg");
        break;
    }
    case 85876:
    {
        returnValue = F("Dunkle Appareille");
        break;
    }
    case 85877:
    {
        returnValue = F("Dunkle Gasse");
        break;
    }
    case 85878:
    {
        returnValue = F("Dunkle Halle");
        break;
    }
    case 85879:
    {
        returnValue = F("Dunkle Str.");
        break;
    }
    case 85880:
    {
        returnValue = F("Dunkler Bogen");
        break;
    }
    case 85881:
    {
        returnValue = F("Dunkler Gang");
        break;
    }
    case 85882:
    {
        returnValue = F("Dunkler Ort");
        break;
    }
    case 85883:
    {
        returnValue = F("Dunkler Pfarrdellenweg");
        break;
    }
    case 85884:
    {
        returnValue = F("Dunkler Weg");
        break;
    }
    case 85885:
    {
        returnValue = F("Dunkler Wiesenbogen");
        break;
    }
    case 85886:
    {
        returnValue = F("Dunkles Tor");
        break;
    }
    case 85887:
    {
        returnValue = F("Dunklestr.");
        break;
    }
    case 85888:
    {
        returnValue = F("Dunlopstr.");
        break;
    }
    case 85889:
    {
        returnValue = F("Dunninger Str.");
        break;
    }
    case 85890:
    {
        returnValue = F("Dunninger Weg");
        break;
    }
    case 85891:
    {
        returnValue = F("Dunse");
        break;
    }
    case 85892:
    {
        returnValue = F("Dunsem Stich");
        break;
    }
    case 85893:
    {
        returnValue = F("Dunser Str.");
        break;
    }
    case 85894:
    {
        returnValue = F("Dunsernstr.");
        break;
    }
    case 85895:
    {
        returnValue = F("Dunshörn");
        break;
    }
    case 85896:
    {
        returnValue = F("Dunstelkinger Hauptstr.");
        break;
    }
    case 85897:
    {
        returnValue = F("Dunsterbornweg");
        break;
    }
    case 85898:
    {
        returnValue = F("Dunsterweg");
        break;
    }
    case 85899:
    {
        returnValue = F("Dunsting");
        break;
    }
    case 85900:
    {
        returnValue = F("Dunsum Stich");
        break;
    }
    case 85901:
    {
        returnValue = F("Dunumer Str.");
        break;
    }
    case 85902:
    {
        returnValue = F("Dunwisch");
        break;
    }
    case 85903:
    {
        returnValue = F("Dunzerstr.");
        break;
    }
    case 85904:
    {
        returnValue = F("Dunzingerweg");
        break;
    }
    case 85905:
    {
        returnValue = F("Dunznauweg");
        break;
    }
    case 85906:
    {
        returnValue = F("Dunzweiler Str.");
        break;
    }
    case 85907:
    {
        returnValue = F("Dunzweilerstr.");
        break;
    }
    case 85908:
    {
        returnValue = F("Duorpkamp");
        break;
    }
    case 85909:
    {
        returnValue = F("Duppigheimer Str.");
        break;
    }
    case 85910:
    {
        returnValue = F("Duracher Str.");
        break;
    }
    case 85911:
    {
        returnValue = F("Durachweg");
        break;
    }
    case 85912:
    {
        returnValue = F("Duramstr.");
        break;
    }
    case 85913:
    {
        returnValue = F("Duranceweg");
        break;
    }
    case 85914:
    {
        returnValue = F("Durbacher Str.");
        break;
    }
    case 85915:
    {
        returnValue = F("Durbachtalweg");
        break;
    }
    case 85916:
    {
        returnValue = F("Durbanhofstr.");
        break;
    }
    case 85917:
    {
        returnValue = F("Durbeke");
        break;
    }
    case 85918:
    {
        returnValue = F("Durbekeweg");
        break;
    }
    case 85919:
    {
        returnValue = F("Durbenweg");
        break;
    }
    case 85920:
    {
        returnValue = F("Durbusch");
        break;
    }
    case 85921:
    {
        returnValue = F("Durbuscher Str.");
        break;
    }
    case 85922:
    {
        returnValue = F("Durbweideweg");
        break;
    }
    case 85923:
    {
        returnValue = F("Durch das Teufelstal");
        break;
    }
    case 85924:
    {
        returnValue = F("Durch de Kropp");
        break;
    }
    case 85925:
    {
        returnValue = F("Durch die Aue");
        break;
    }
    case 85926:
    {
        returnValue = F("Durch die Heide");
        break;
    }
    case 85927:
    {
        returnValue = F("Durch die Windlücke");
        break;
    }
    case 85928:
    {
        returnValue = F("Durch's Gehölz");
        break;
    }
    case 85929:
    {
        returnValue = F("Durchbruch");
        break;
    }
    case 85930:
    {
        returnValue = F("Durchbruchweg");
        break;
    }
    case 85931:
    {
        returnValue = F("Durchenbergstr.");
        break;
    }
    case 85932:
    {
        returnValue = F("Durchfahrt");
        break;
    }
    case 85933:
    {
        returnValue = F("Durchfahrt Armuthsbach");
        break;
    }
    case 85934:
    {
        returnValue = F("Durchfahrt für PKW verboten, siehe Str.nverkehrsschild \"Durchfahrt PKW verboten\" !");
        break;
    }
    case 85935:
    {
        returnValue = F("Durchfurtherschuß");
        break;
    }
    case 85936:
    {
        returnValue = F("Durchgang");
        break;
    }
    case 85937:
    {
        returnValue = F("Durchgang Campingplatz -> Weiße Düne");
        break;
    }
    case 85938:
    {
        returnValue = F("Durchgang Die Gasse - Schulstr.");
        break;
    }
    case 85939:
    {
        returnValue = F("Durchgang Die Gasse - Zur Kirche");
        break;
    }
    case 85940:
    {
        returnValue = F("Durchgang Hof Mestenger Mühle (privat)");
        break;
    }
    case 85941:
    {
        returnValue = F("Durchgang Stadthotel Reich");
        break;
    }
    case 85942:
    {
        returnValue = F("Durchgang Südfeld / Mittelfeld");
        break;
    }
    case 85943:
    {
        returnValue = F("Durchgang Tor Parkplätze Aldi und Edeka");
        break;
    }
    case 85944:
    {
        returnValue = F("Durchgang zum Gärhof");
        break;
    }
    case 85945:
    {
        returnValue = F("Durchgang zum Krankenhausparkplatz");
        break;
    }
    case 85946:
    {
        returnValue = F("Durchgang(Stauffenb.-Wildstr.)");
        break;
    }
    case 85947:
    {
        returnValue = F("Durchgangssträßle");
        break;
    }
    case 85948:
    {
        returnValue = F("Durchgangsweg");
        break;
    }
    case 85949:
    {
        returnValue = F("Durchgehender Weg");
        break;
    }
    case 85950:
    {
        returnValue = F("Durchgrundweg");
        break;
    }
    case 85951:
    {
        returnValue = F("Durchhardstr.");
        break;
    }
    case 85952:
    {
        returnValue = F("Durchhauser Str.");
        break;
    }
    case 85953:
    {
        returnValue = F("Durchholzer Str.");
        break;
    }
    case 85954:
    {
        returnValue = F("Durchholzstr.");
        break;
    }
    case 85955:
    {
        returnValue = F("Durchlaufender Weg");
        break;
    }
    case 85956:
    {
        returnValue = F("Durchlaß");
        break;
    }
    case 85957:
    {
        returnValue = F("Durchschlacht");
        break;
    }
    case 85958:
    {
        returnValue = F("Durchsichtweg");
        break;
    }
    case 85959:
    {
        returnValue = F("Durchstich");
        break;
    }
    case 85960:
    {
        returnValue = F("Durchweg");
        break;
    }
    case 85961:
    {
        returnValue = F("Durchwehnaer Str.");
        break;
    }
    case 85962:
    {
        returnValue = F("Durenbachweg");
        break;
    }
    case 85963:
    {
        returnValue = F("Durhaus");
        break;
    }
    case 85964:
    {
        returnValue = F("Durheimer Str.");
        break;
    }
    case 85965:
    {
        returnValue = F("Durholzen");
        break;
    }
    case 85966:
    {
        returnValue = F("Durichteichweg");
        break;
    }
    case 85967:
    {
        returnValue = F("Duringer Str.");
        break;
    }
    case 85968:
    {
        returnValue = F("Duringstr.");
        break;
    }
    case 85969:
    {
        returnValue = F("Durlacher Allee");
        break;
    }
    case 85970:
    {
        returnValue = F("Durlacher Str.");
        break;
    }
    case 85971:
    {
        returnValue = F("Durlacher Weg");
        break;
    }
    case 85972:
    {
        returnValue = F("Durlanger Str.");
        break;
    }
    case 85973:
    {
        returnValue = F("Durlei-Ring");
        break;
    }
    case 85974:
    {
        returnValue = F("Durlesbacher Str.");
        break;
    }
    case 85975:
    {
        returnValue = F("Durlesbachweg");
        break;
    }
    case 85976:
    {
        returnValue = F("Durlesstr.");
        break;
    }
    case 85977:
    {
        returnValue = F("Durlismatten");
        break;
    }
    case 85978:
    {
        returnValue = F("Durmersheimer Str.");
        break;
    }
    case 85979:
    {
        returnValue = F("Durnbuschweg");
        break;
    }
    case 85980:
    {
        returnValue = F("Durnerstr.");
        break;
    }
    case 85981:
    {
        returnValue = F("Durnidistr.");
        break;
    }
    case 85982:
    {
        returnValue = F("Durolanweg");
        break;
    }
    case 85983:
    {
        returnValue = F("Durrsbergweg");
        break;
    }
    case 85984:
    {
        returnValue = F("Durrweiler Bengelbruckweg");
        break;
    }
    case 85985:
    {
        returnValue = F("Durschstr.");
        break;
    }
    case 85986:
    {
        returnValue = F("Durstbüttenstr.");
        break;
    }
    case 85987:
    {
        returnValue = F("Durstenweg");
        break;
    }
    case 85988:
    {
        returnValue = F("Duscherpoint");
        break;
    }
    case 85989:
    {
        returnValue = F("Duschl Passage");
        break;
    }
    case 85990:
    {
        returnValue = F("Duschlbergstr.");
        break;
    }
    case 85991:
    {
        returnValue = F("Duschlstr.");
        break;
    }
    case 85992:
    {
        returnValue = F("Duschnweg");
        break;
    }
    case 85993:
    {
        returnValue = F("Dusemonder Str.");
        break;
    }
    case 85994:
    {
        returnValue = F("Dusenbrücker Weg");
        break;
    }
    case 85995:
    {
        returnValue = F("Dusenschuren");
        break;
    }
    case 85996:
    {
        returnValue = F("Duskampweg");
        break;
    }
    case 85997:
    {
        returnValue = F("Dusslinger Sträßle");
        break;
    }
    case 85998:
    {
        returnValue = F("Dusterlake");
        break;
    }
    case 85999:
    {
        returnValue = F("Dusternweg");
        break;
    }
    case 86000:
    {
        returnValue = F("Dusterstede");
        break;
    }
    case 86001:
    {
        returnValue = F("Dustfelder Str.");
        break;
    }
    case 86002:
    {
        returnValue = F("Dustholz");
        break;
    }
    case 86003:
    {
        returnValue = F("Dustholzstr.");
        break;
    }
    case 86004:
    {
        returnValue = F("Dustmühle");
        break;
    }
    case 86005:
    {
        returnValue = F("Duststeinweg");
        break;
    }
    case 86006:
    {
        returnValue = F("Dutendorfer Str.");
        break;
    }
    case 86007:
    {
        returnValue = F("Dutenhofener Str.");
        break;
    }
    case 86008:
    {
        returnValue = F("Dutkaweg");
        break;
    }
    case 86009:
    {
        returnValue = F("Duttenberger Str.");
        break;
    }
    case 86010:
    {
        returnValue = F("Duttenberger Weg");
        break;
    }
    case 86011:
    {
        returnValue = F("Duttenbrunner Str.");
        break;
    }
    case 86012:
    {
        returnValue = F("Duttengäßchen");
        break;
    }
    case 86013:
    {
        returnValue = F("Duttenhoferstr.");
        break;
    }
    case 86014:
    {
        returnValue = F("Duttenhurster Str.");
        break;
    }
    case 86015:
    {
        returnValue = F("Duttenhöferstr.");
        break;
    }
    case 86016:
    {
        returnValue = F("Duttenlohweg");
        break;
    }
    case 86017:
    {
        returnValue = F("Duttenstedter Str.");
        break;
    }
    case 86018:
    {
        returnValue = F("Duttensteinstr.");
        break;
    }
    case 86019:
    {
        returnValue = F("Duttentalstr.");
        break;
    }
    case 86020:
    {
        returnValue = F("Duttentalweg");
        break;
    }
    case 86021:
    {
        returnValue = F("Duttlacher Weg");
        break;
    }
    case 86022:
    {
        returnValue = F("Duttweiler Str.");
        break;
    }
    case 86023:
    {
        returnValue = F("Dutumer Kotte");
        break;
    }
    case 86024:
    {
        returnValue = F("Dutzower Str.");
        break;
    }
    case 86025:
    {
        returnValue = F("Dutzower Weg");
        break;
    }
    case 86026:
    {
        returnValue = F("Dutzumer Str.");
        break;
    }
    case 86027:
    {
        returnValue = F("Duur-Weg");
        break;
    }
    case 86028:
    {
        returnValue = F("Duusstr.");
        break;
    }
    case 86029:
    {
        returnValue = F("Duvalstr.");
        break;
    }
    case 86030:
    {
        returnValue = F("Duvelskamp");
        break;
    }
    case 86031:
    {
        returnValue = F("Duvenacker");
        break;
    }
    case 86032:
    {
        returnValue = F("Duvenbornsweg");
        break;
    }
    case 86033:
    {
        returnValue = F("Duvendahl");
        break;
    }
    case 86034:
    {
        returnValue = F("Duvendahlstr.");
        break;
    }
    case 86035:
    {
        returnValue = F("Duvendiek");
        break;
    }
    case 86036:
    {
        returnValue = F("Duveneck");
        break;
    }
    case 86037:
    {
        returnValue = F("Duvenkamp");
        break;
    }
    case 86038:
    {
        returnValue = F("Duvenmoor");
        break;
    }
    case 86039:
    {
        returnValue = F("Duvenseer Str.");
        break;
    }
    case 86040:
    {
        returnValue = F("Duvenstedter Weg");
        break;
    }
    case 86041:
    {
        returnValue = F("Duvenstieg");
        break;
    }
    case 86042:
    {
        returnValue = F("Duventhaler Weg");
        break;
    }
    case 86043:
    {
        returnValue = F("Duvenweg");
        break;
    }
    case 86044:
    {
        returnValue = F("Duwensteene");
        break;
    }
    case 86045:
    {
        returnValue = F("Duwensteg");
        break;
    }
    case 86046:
    {
        returnValue = F("Duwinkelweg");
        break;
    }
    case 86047:
    {
        returnValue = F("Duwockweg");
        break;
    }
    case 86048:
    {
        returnValue = F("Duxbrücke");
        break;
    }
    case 86049:
    {
        returnValue = F("Duxenberg");
        break;
    }
    case 86050:
    {
        returnValue = F("Duxer Str.");
        break;
    }
    case 86051:
    {
        returnValue = F("Duxmoor");
        break;
    }
    case 86052:
    {
        returnValue = F("Duycking-Str.");
        break;
    }
    case 86053:
    {
        returnValue = F("Duznauer Str.");
        break;
    }
    case 86054:
    {
        returnValue = F("Dußenfeld");
        break;
    }
    case 86055:
    {
        returnValue = F("Dußlinger Str.");
        break;
    }
    case 86056:
    {
        returnValue = F("Dußlinger Weg");
        break;
    }
    case 86057:
    {
        returnValue = F("DußlingerWeg");
        break;
    }
    case 86058:
    {
        returnValue = F("Dußvitz");
        break;
    }
    case 86059:
    {
        returnValue = F("Dwaarslöper");
        break;
    }
    case 86060:
    {
        returnValue = F("Dwagtweg");
        break;
    }
    case 86061:
    {
        returnValue = F("Dwarsdorf");
        break;
    }
    case 86062:
    {
        returnValue = F("Dwarsefeld");
        break;
    }
    case 86063:
    {
        returnValue = F("Dwarsende");
        break;
    }
    case 86064:
    {
        returnValue = F("Dwarsglupe");
        break;
    }
    case 86065:
    {
        returnValue = F("Dwarsweg");
        break;
    }
    case 86066:
    {
        returnValue = F("Dwarsweg - Wallensteinweg");
        break;
    }
    case 86067:
    {
        returnValue = F("Dwaschweg");
        break;
    }
    case 86068:
    {
        returnValue = F("Dwasdiek");
        break;
    }
    case 86069:
    {
        returnValue = F("Dwasiedener Str.");
        break;
    }
    case 86070:
    {
        returnValue = F("Dwaspadd");
        break;
    }
    case 86071:
    {
        returnValue = F("Dwasswech");
        break;
    }
    case 86072:
    {
        returnValue = F("Dwasweg");
        break;
    }
    case 86073:
    {
        returnValue = F("Dwaßweg");
        break;
    }
    case 86074:
    {
        returnValue = F("Dweelandsweg");
        break;
    }
    case 86075:
    {
        returnValue = F("Dweerkamp");
        break;
    }
    case 86076:
    {
        returnValue = F("Dweermoor");
        break;
    }
    case 86077:
    {
        returnValue = F("Dweerredder");
        break;
    }
    case 86078:
    {
        returnValue = F("Dwengsweg");
        break;
    }
    case 86079:
    {
        returnValue = F("Dweracker");
        break;
    }
    case 86080:
    {
        returnValue = F("Dwerberge");
        break;
    }
    case 86081:
    {
        returnValue = F("Dwerfeld");
        break;
    }
    case 86082:
    {
        returnValue = F("Dwergter Sand");
        break;
    }
    case 86083:
    {
        returnValue = F("Dwergter Str.");
        break;
    }
    case 86084:
    {
        returnValue = F("Dwerkaten");
        break;
    }
    case 86085:
    {
        returnValue = F("Dwerlande");
        break;
    }
    case 86086:
    {
        returnValue = F("Dwerlanden");
        break;
    }
    case 86087:
    {
        returnValue = F("Dwerstieg");
        break;
    }
    case 86088:
    {
        returnValue = F("Dwerweg");
        break;
    }
    case 86089:
    {
        returnValue = F("Dwierweg");
        break;
    }
    case 86090:
    {
        returnValue = F("Dwoberger Dorfschaftsweg");
        break;
    }
    case 86091:
    {
        returnValue = F("Dwoberger Heuweg");
        break;
    }
    case 86092:
    {
        returnValue = F("Dwoberger Str.");
        break;
    }
    case 86093:
    {
        returnValue = F("Dwobäkenhof");
        break;
    }
    case 86094:
    {
        returnValue = F("Dwokuhlenweg");
        break;
    }
    case 86095:
    {
        returnValue = F("Dwostr.");
        break;
    }
    case 86096:
    {
        returnValue = F("Dyck");
        break;
    }
    case 86097:
    {
        returnValue = F("Dycker Feld");
        break;
    }
    case 86098:
    {
        returnValue = F("Dycker Mühle");
        break;
    }
    case 86099:
    {
        returnValue = F("Dycker Mühlenweg");
        break;
    }
    case 86100:
    {
        returnValue = F("Dycker Str.");
        break;
    }
    case 86101:
    {
        returnValue = F("Dyckerhoff-Str.");
        break;
    }
    case 86102:
    {
        returnValue = F("Dyckerhoffstr.");
        break;
    }
    case 86103:
    {
        returnValue = F("Dyckhofstr.");
        break;
    }
    case 86104:
    {
        returnValue = F("Dyckmansweg");
        break;
    }
    case 86105:
    {
        returnValue = F("Dyes-Siedlung");
        break;
    }
    case 86106:
    {
        returnValue = F("Dyker Str.");
        break;
    }
    case 86107:
    {
        returnValue = F("Dykhauser Str.");
        break;
    }
    case 86108:
    {
        returnValue = F("Dykhusener Drae");
        break;
    }
    case 86109:
    {
        returnValue = F("Dykhuser Str.");
        break;
    }
    case 86110:
    {
        returnValue = F("Dykstegge");
        break;
    }
    case 86111:
    {
        returnValue = F("Dyksterhusen");
        break;
    }
    case 86112:
    {
        returnValue = F("Dykstr.");
        break;
    }
    case 86113:
    {
        returnValue = F("Dynamikfläche");
        break;
    }
    case 86114:
    {
        returnValue = F("Dynningweg");
        break;
    }
    case 86115:
    {
        returnValue = F("Dypter Str.");
        break;
    }
    case 86116:
    {
        returnValue = F("Dyroffstr.");
        break;
    }
    case 86117:
    {
        returnValue = F("Dyrotzer Weg");
        break;
    }
    case 86118:
    {
        returnValue = F("Dyrotzer Weg Ausbau");
        break;
    }
    case 86119:
    {
        returnValue = F("Dyrotzer Winkel");
        break;
    }
    case 86120:
    {
        returnValue = F("Däbelweg");
        break;
    }
    case 86121:
    {
        returnValue = F("Däbritzer Str.");
        break;
    }
    case 86122:
    {
        returnValue = F("Dächismattweg");
        break;
    }
    case 86123:
    {
        returnValue = F("Dächslerainweg");
        break;
    }
    case 86124:
    {
        returnValue = F("Dädalusring");
        break;
    }
    case 86125:
    {
        returnValue = F("Däfernstr.");
        break;
    }
    case 86126:
    {
        returnValue = F("Dägelinger Weg");
        break;
    }
    case 86127:
    {
        returnValue = F("Dählchen");
        break;
    }
    case 86128:
    {
        returnValue = F("Dählmannsweg");
        break;
    }
    case 86129:
    {
        returnValue = F("Dähnertskamp");
        break;
    }
    case 86130:
    {
        returnValue = F("Dähnestr.");
        break;
    }
    case 86131:
    {
        returnValue = F("Dähneweg");
        break;
    }
    case 86132:
    {
        returnValue = F("Dähnhardtstr.");
        break;
    }
    case 86133:
    {
        returnValue = F("Dährer Str.");
        break;
    }
    case 86134:
    {
        returnValue = F("Däinghausen");
        break;
    }
    case 86135:
    {
        returnValue = F("Dältberg");
        break;
    }
    case 86136:
    {
        returnValue = F("Dältenberg");
        break;
    }
    case 86137:
    {
        returnValue = F("Dämeritzstr.");
        break;
    }
    case 86138:
    {
        returnValue = F("Dämkenweg");
        break;
    }
    case 86139:
    {
        returnValue = F("Dämkesweg");
        break;
    }
    case 86140:
    {
        returnValue = F("Dämmchen");
        break;
    }
    case 86141:
    {
        returnValue = F("Dämmchen-Weg");
        break;
    }
    case 86142:
    {
        returnValue = F("Dämmchenweg");
        break;
    }
    case 86143:
    {
        returnValue = F("Dämmelstr.");
        break;
    }
    case 86144:
    {
        returnValue = F("Dämmen");
        break;
    }
    case 86145:
    {
        returnValue = F("Dämmer Steg");
        break;
    }
    case 86146:
    {
        returnValue = F("Dämmersbachweg");
        break;
    }
    case 86147:
    {
        returnValue = F("Dämmerwalder Str.");
        break;
    }
    case 86148:
    {
        returnValue = F("Dämmerweg");
        break;
    }
    case 86149:
    {
        returnValue = F("Dämmeweg");
        break;
    }
    case 86150:
    {
        returnValue = F("Dämmingsweg");
        break;
    }
    case 86151:
    {
        returnValue = F("Dämmlewiesen");
        break;
    }
    case 86152:
    {
        returnValue = F("Dämmling");
        break;
    }
    case 86153:
    {
        returnValue = F("Dämmstr.");
        break;
    }
    case 86154:
    {
        returnValue = F("Dämpfelweg");
        break;
    }
    case 86155:
    {
        returnValue = F("Dänekasweg");
        break;
    }
    case 86156:
    {
        returnValue = F("Dänemarkstr.");
        break;
    }
    case 86157:
    {
        returnValue = F("Dänemarkweg");
        break;
    }
    case 86158:
    {
        returnValue = F("Dänenbrook");
        break;
    }
    case 86159:
    {
        returnValue = F("Dänenheide");
        break;
    }
    case 86160:
    {
        returnValue = F("Dänenkamp");
        break;
    }
    case 86161:
    {
        returnValue = F("Dänenstieg");
        break;
    }
    case 86162:
    {
        returnValue = F("Dänenstr.");
        break;
    }
    case 86163:
    {
        returnValue = F("Dänenweg");
        break;
    }
    case 86164:
    {
        returnValue = F("Dängsel");
        break;
    }
    case 86165:
    {
        returnValue = F("Dänholm");
        break;
    }
    case 86166:
    {
        returnValue = F("Dänholmer Weg");
        break;
    }
    case 86167:
    {
        returnValue = F("Dänholmstr.");
        break;
    }
    case 86168:
    {
        returnValue = F("Dänholmweg");
        break;
    }
    case 86169:
    {
        returnValue = F("Dänischburger Landstr.");
        break;
    }
    case 86170:
    {
        returnValue = F("Dänische Meede");
        break;
    }
    case 86171:
    {
        returnValue = F("Dänische Str.");
        break;
    }
    case 86172:
    {
        returnValue = F("Dänischenhagener Str.");
        break;
    }
    case 86173:
    {
        returnValue = F("Dänischer Tisch");
        break;
    }
    case 86174:
    {
        returnValue = F("Dänischer Weg");
        break;
    }
    case 86175:
    {
        returnValue = F("Dänischmüssen");
        break;
    }
    case 86176:
    {
        returnValue = F("Dänkritzer Landstr.");
        break;
    }
    case 86177:
    {
        returnValue = F("Dänkritzer Str.");
        break;
    }
    case 86178:
    {
        returnValue = F("Dänkritzer Weg");
        break;
    }
    case 86179:
    {
        returnValue = F("Dännendiek");
        break;
    }
    case 86180:
    {
        returnValue = F("Dännenkamp");
        break;
    }
    case 86181:
    {
        returnValue = F("Dänschendorfer Str.");
        break;
    }
    case 86182:
    {
        returnValue = F("Dänzergasse");
        break;
    }
    case 86183:
    {
        returnValue = F("Därmannsbusch");
        break;
    }
    case 86184:
    {
        returnValue = F("Däschweg");
        break;
    }
    case 86185:
    {
        returnValue = F("Däsenweg");
        break;
    }
    case 86186:
    {
        returnValue = F("Dät Haartje");
        break;
    }
    case 86187:
    {
        returnValue = F("Dätscherstr.");
        break;
    }
    case 86188:
    {
        returnValue = F("Dättlingweg");
        break;
    }
    case 86189:
    {
        returnValue = F("Dätzinger Str.");
        break;
    }
    case 86190:
    {
        returnValue = F("Dätzweg");
        break;
    }
    case 86191:
    {
        returnValue = F("Däublerweg");
        break;
    }
    case 86192:
    {
        returnValue = F("Däumelstal");
        break;
    }
    case 86193:
    {
        returnValue = F("Däumling");
        break;
    }
    case 86194:
    {
        returnValue = F("Däumlingstr.");
        break;
    }
    case 86195:
    {
        returnValue = F("Däumlingsweg");
        break;
    }
    case 86196:
    {
        returnValue = F("Däumlingweg");
        break;
    }
    case 86197:
    {
        returnValue = F("Déviller Str.");
        break;
    }
    case 86198:
    {
        returnValue = F("Döbbeckestr.");
        break;
    }
    case 86199:
    {
        returnValue = F("Döbbeliner Dorfstr.");
        break;
    }
    case 86200:
    {
        returnValue = F("Döbbeliner Str.");
        break;
    }
    case 86201:
    {
        returnValue = F("Döbbelts Kamp");
        break;
    }
    case 86202:
    {
        returnValue = F("Döbberiner Hauptstr.");
        break;
    }
    case 86203:
    {
        returnValue = F("Döbberiner Weg");
        break;
    }
    case 86204:
    {
        returnValue = F("Döbbersener Str.");
        break;
    }
    case 86205:
    {
        returnValue = F("Döbberstr.");
        break;
    }
    case 86206:
    {
        returnValue = F("Döbbrick Süd");
        break;
    }
    case 86207:
    {
        returnValue = F("Döbbricker Dorfstr.");
        break;
    }
    case 86208:
    {
        returnValue = F("Döbbricker Str.");
        break;
    }
    case 86209:
    {
        returnValue = F("Döbbricker Weg");
        break;
    }
    case 86210:
    {
        returnValue = F("Döbele");
        break;
    }
    case 86211:
    {
        returnValue = F("Döbeleacker");
        break;
    }
    case 86212:
    {
        returnValue = F("Döbelering");
        break;
    }
    case 86213:
    {
        returnValue = F("Döbelestr.");
        break;
    }
    case 86214:
    {
        returnValue = F("Döbeleweg");
        break;
    }
    case 86215:
    {
        returnValue = F("Döbelner Str.");
        break;
    }
    case 86216:
    {
        returnValue = F("Döbelstr.");
        break;
    }
    case 86217:
    {
        returnValue = F("Döbelweg");
        break;
    }
    case 86218:
    {
        returnValue = F("Döbener Landstr.");
        break;
    }
    case 86219:
    {
        returnValue = F("Döbener Ring");
        break;
    }
    case 86220:
    {
        returnValue = F("Döbener Str.");
        break;
    }
    case 86221:
    {
        returnValue = F("Döbener Weg");
        break;
    }
    case 86222:
    {
        returnValue = F("Döbereinerstr.");
        break;
    }
    case 86223:
    {
        returnValue = F("Döberitzer Feldweg");
        break;
    }
    case 86224:
    {
        returnValue = F("Döberitzer Str.");
        break;
    }
    case 86225:
    {
        returnValue = F("Döberitzer Weg");
        break;
    }
    case 86226:
    {
        returnValue = F("Döberkitz");
        break;
    }
    case 86227:
    {
        returnValue = F("Döberlitzer Mühlenweg");
        break;
    }
    case 86228:
    {
        returnValue = F("Döberlitzer Str.");
        break;
    }
    case 86229:
    {
        returnValue = F("Döberlstr.");
        break;
    }
    case 86230:
    {
        returnValue = F("Döberner Berg");
        break;
    }
    case 86231:
    {
        returnValue = F("Döberner Str.");
        break;
    }
    case 86232:
    {
        returnValue = F("Döberner Weg");
        break;
    }
    case 86233:
    {
        returnValue = F("Döbernitzer Str.");
        break;
    }
    case 86234:
    {
        returnValue = F("Döbernitzer Weg");
        break;
    }
    case 86235:
    {
        returnValue = F("Döbernsche Str.");
        break;
    }
    case 86236:
    {
        returnValue = F("Döbernstr.");
        break;
    }
    case 86237:
    {
        returnValue = F("Döbichauer Str.");
        break;
    }
    case 86238:
    {
        returnValue = F("Döbitzschen");
        break;
    }
    case 86239:
    {
        returnValue = F("Döbling");
        break;
    }
    case 86240:
    {
        returnValue = F("Döblinstr.");
        break;
    }
    case 86241:
    {
        returnValue = F("Döblinweg");
        break;
    }
    case 86242:
    {
        returnValue = F("Döblitzer Str.");
        break;
    }
    case 86243:
    {
        returnValue = F("Döblitzer Weg");
        break;
    }
    case 86244:
    {
        returnValue = F("Döblstr.");
        break;
    }
    case 86245:
    {
        returnValue = F("Döblweg");
        break;
    }
    case 86246:
    {
        returnValue = F("Döbrabergstr.");
        break;
    }
    case 86247:
    {
        returnValue = F("Döbraer Str.");
        break;
    }
    case 86248:
    {
        returnValue = F("Döbrastöcken");
        break;
    }
    case 86249:
    {
        returnValue = F("Döbrawiesenweg");
        break;
    }
    case 86250:
    {
        returnValue = F("Döbriser Weg");
        break;
    }
    case 86251:
    {
        returnValue = F("Döbritschen");
        break;
    }
    case 86252:
    {
        returnValue = F("Döbritschener Str.");
        break;
    }
    case 86253:
    {
        returnValue = F("Döbritscher Str.");
        break;
    }
    case 86254:
    {
        returnValue = F("Döbritzer Str.");
        break;
    }
    case 86255:
    {
        returnValue = F("Döbschütz");
        break;
    }
    case 86256:
    {
        returnValue = F("Döchtbühlweg");
        break;
    }
    case 86257:
    {
        returnValue = F("Döckelhorst");
        break;
    }
    case 86258:
    {
        returnValue = F("Döckinger Str.");
        break;
    }
    case 86259:
    {
        returnValue = F("Döcklitzer Tor");
        break;
    }
    case 86260:
    {
        returnValue = F("Döcklitzer Weg");
        break;
    }
    case 86261:
    {
        returnValue = F("Döckritzanger");
        break;
    }
    case 86262:
    {
        returnValue = F("Döckritzer Str.");
        break;
    }
    case 86263:
    {
        returnValue = F("Döderleinstr.");
        break;
    }
    case 86264:
    {
        returnValue = F("Döderleinsweg");
        break;
    }
    case 86265:
    {
        returnValue = F("Döderleinweg");
        break;
    }
    case 86266:
    {
        returnValue = F("Dödesberg");
        break;
    }
    case 86267:
    {
        returnValue = F("Döffinger Pfad");
        break;
    }
    case 86268:
    {
        returnValue = F("Döffinger Str.");
        break;
    }
    case 86269:
    {
        returnValue = F("Dögeroder Str.");
        break;
    }
    case 86270:
    {
        returnValue = F("Dögginger Str.");
        break;
    }
    case 86271:
    {
        returnValue = F("Döging");
        break;
    }
    case 86272:
    {
        returnValue = F("Dögnitz");
        break;
    }
    case 86273:
    {
        returnValue = F("Dögnitzer Str.");
        break;
    }
    case 86274:
    {
        returnValue = F("Döhlau");
        break;
    }
    case 86275:
    {
        returnValue = F("Döhlauer Berg");
        break;
    }
    case 86276:
    {
        returnValue = F("Döhlauer Str.");
        break;
    }
    case 86277:
    {
        returnValue = F("Döhlauer Weg");
        break;
    }
    case 86278:
    {
        returnValue = F("Döhlberger Str.");
        break;
    }
    case 86279:
    {
        returnValue = F("Döhlen");
        break;
    }
    case 86280:
    {
        returnValue = F("Döhlener Hang");
        break;
    }
    case 86281:
    {
        returnValue = F("Döhlener Str.");
        break;
    }
    case 86282:
    {
        returnValue = F("Döhlenweg");
        break;
    }
    case 86283:
    {
        returnValue = F("Döhler Brook");
        break;
    }
    case 86284:
    {
        returnValue = F("Döhler Kirchweg");
        break;
    }
    case 86285:
    {
        returnValue = F("Döhler Str.");
        break;
    }
    case 86286:
    {
        returnValue = F("Döhlergasse");
        break;
    }
    case 86287:
    {
        returnValue = F("Döhlersberg");
        break;
    }
    case 86288:
    {
        returnValue = F("Döhlerwaldstr.");
        break;
    }
    case 86289:
    {
        returnValue = F("Döhlestr.");
        break;
    }
    case 86290:
    {
        returnValue = F("Döhmannstr.");
        break;
    }
    case 86291:
    {
        returnValue = F("Döhmenkamp");
        break;
    }
    case 86292:
    {
        returnValue = F("Döhmstr.");
        break;
    }
    case 86293:
    {
        returnValue = F("Döhnerpark");
        break;
    }
    case 86294:
    {
        returnValue = F("Döhnerstr.");
        break;
    }
    case 86295:
    {
        returnValue = F("Döhren");
        break;
    }
    case 86296:
    {
        returnValue = F("Döhrenbergstr.");
        break;
    }
    case 86297:
    {
        returnValue = F("Döhrener Kirchweg");
        break;
    }
    case 86298:
    {
        returnValue = F("Döhrener Str.");
        break;
    }
    case 86299:
    {
        returnValue = F("Döhrener Weg");
        break;
    }
    case 86300:
    {
        returnValue = F("Döhrenkamp");
        break;
    }
    case 86301:
    {
        returnValue = F("Döhrenstr.");
        break;
    }
    case 86302:
    {
        returnValue = F("Döhrenweg");
        break;
    }
    case 86303:
    {
        returnValue = F("Döhrnkamp");
        break;
    }
    case 86304:
    {
        returnValue = F("Döhrnweg");
        break;
    }
    case 86305:
    {
        returnValue = F("Döingen");
        break;
    }
    case 86306:
    {
        returnValue = F("Döinghauser Str.");
        break;
    }
    case 86307:
    {
        returnValue = F("Dökels Dyck");
        break;
    }
    case 86308:
    {
        returnValue = F("Dölauer Str.");
        break;
    }
    case 86309:
    {
        returnValue = F("Dölauer Weg");
        break;
    }
    case 86310:
    {
        returnValue = F("Dölbauer Landstr.");
        break;
    }
    case 86311:
    {
        returnValue = F("Dölbauer Str.");
        break;
    }
    case 86312:
    {
        returnValue = F("Dölchenstr.");
        break;
    }
    case 86313:
    {
        returnValue = F("Dölderweg");
        break;
    }
    case 86314:
    {
        returnValue = F("Döldisser Bruch");
        break;
    }
    case 86315:
    {
        returnValue = F("Dölitz");
        break;
    }
    case 86316:
    {
        returnValue = F("Dölitzer Str.");
        break;
    }
    case 86317:
    {
        returnValue = F("Dölitzsch");
        break;
    }
    case 86318:
    {
        returnValue = F("Dölkau");
        break;
    }
    case 86319:
    {
        returnValue = F("Dölkerweg");
        break;
    }
    case 86320:
    {
        returnValue = F("Döllaustr.");
        break;
    }
    case 86321:
    {
        returnValue = F("Döllbacher Weg");
        break;
    }
    case 86322:
    {
        returnValue = F("Döllbachstr.");
        break;
    }
    case 86323:
    {
        returnValue = F("Döllbachtalstr.");
        break;
    }
    case 86324:
    {
        returnValue = F("Dölle");
        break;
    }
    case 86325:
    {
        returnValue = F("Döllebach");
        break;
    }
    case 86326:
    {
        returnValue = F("Döllegasse");
        break;
    }
    case 86327:
    {
        returnValue = F("Döllenbachweg");
        break;
    }
    case 86328:
    {
        returnValue = F("Döllener Str.");
        break;
    }
    case 86329:
    {
        returnValue = F("Döllenhof");
        break;
    }
    case 86330:
    {
        returnValue = F("Döllenstr.");
        break;
    }
    case 86331:
    {
        returnValue = F("Döllenweg");
        break;
    }
    case 86332:
    {
        returnValue = F("Döllenäckerweg");
        break;
    }
    case 86333:
    {
        returnValue = F("Döller Damm");
        break;
    }
    case 86334:
    {
        returnValue = F("Döllersfeldchen");
        break;
    }
    case 86335:
    {
        returnValue = F("Döllersweg");
        break;
    }
    case 86336:
    {
        returnValue = F("Döllersweger Hof");
        break;
    }
    case 86337:
    {
        returnValue = F("Dölles Weg");
        break;
    }
    case 86338:
    {
        returnValue = F("Döllestr.");
        break;
    }
    case 86339:
    {
        returnValue = F("Döllesweg");
        break;
    }
    case 86340:
    {
        returnValue = F("Dölleweg");
        break;
    }
    case 86341:
    {
        returnValue = F("Döllgasse");
        break;
    }
    case 86342:
    {
        returnValue = F("Döllgaststr.");
        break;
    }
    case 86343:
    {
        returnValue = F("Döllinger Str.");
        break;
    }
    case 86344:
    {
        returnValue = F("Döllingerstr.");
        break;
    }
    case 86345:
    {
        returnValue = F("Döllingerweg");
        break;
    }
    case 86346:
    {
        returnValue = F("Döllinghausener Str.");
        break;
    }
    case 86347:
    {
        returnValue = F("Döllingsweg");
        break;
    }
    case 86348:
    {
        returnValue = F("Döllken");
        break;
    }
    case 86349:
    {
        returnValue = F("Döllner Chaussee");
        break;
    }
    case 86350:
    {
        returnValue = F("Döllner Str.");
        break;
    }
    case 86351:
    {
        returnValue = F("Döllnitz");
        break;
    }
    case 86352:
    {
        returnValue = F("Döllnitz-Siedlung");
        break;
    }
    case 86353:
    {
        returnValue = F("Döllnitzaue");
        break;
    }
    case 86354:
    {
        returnValue = F("Döllnitzer Str.");
        break;
    }
    case 86355:
    {
        returnValue = F("Döllnitzer Weg");
        break;
    }
    case 86356:
    {
        returnValue = F("Döllnitzseeweg");
        break;
    }
    case 86357:
    {
        returnValue = F("Döllstedt");
        break;
    }
    case 86358:
    {
        returnValue = F("Döllstr.");
        break;
    }
    case 86359:
    {
        returnValue = F("Döllstädter Str.");
        break;
    }
    case 86360:
    {
        returnValue = F("Döllstädtstr.");
        break;
    }
    case 86361:
    {
        returnValue = F("Döllwanger Str.");
        break;
    }
    case 86362:
    {
        returnValue = F("Döllweg");
        break;
    }
    case 86363:
    {
        returnValue = F("Dölmeweg");
        break;
    }
    case 86364:
    {
        returnValue = F("Dölper Garten");
        break;
    }
    case 86365:
    {
        returnValue = F("Dölsdorfer Str.");
        break;
    }
    case 86366:
    {
        returnValue = F("Döltsch");
        break;
    }
    case 86367:
    {
        returnValue = F("Dölzer Weg");
        break;
    }
    case 86368:
    {
        returnValue = F("Dölziger Str.");
        break;
    }
    case 86369:
    {
        returnValue = F("Dölziger Weg");
        break;
    }
    case 86370:
    {
        returnValue = F("Dölzschener Ring");
        break;
    }
    case 86371:
    {
        returnValue = F("Dölzschener Str.");
        break;
    }
    case 86372:
    {
        returnValue = F("Dömerstiege");
        break;
    }
    case 86373:
    {
        returnValue = F("Dömerstr.");
        break;
    }
    case 86374:
    {
        returnValue = F("Dömgesstr.");
        break;
    }
    case 86375:
    {
        returnValue = F("Dömikenweg");
        break;
    }
    case 86376:
    {
        returnValue = F("Dömitzer Chaussee");
        break;
    }
    case 86377:
    {
        returnValue = F("Dömitzer Fachtweg");
        break;
    }
    case 86378:
    {
        returnValue = F("Dömitzer Frachtweg");
        break;
    }
    case 86379:
    {
        returnValue = F("Dömitzer Str.");
        break;
    }
    case 86380:
    {
        returnValue = F("Dömitzer Weg");
        break;
    }
    case 86381:
    {
        returnValue = F("Dömitzow");
        break;
    }
    case 86382:
    {
        returnValue = F("Dömsenstr.");
        break;
    }
    case 86383:
    {
        returnValue = F("Dönberger Str.");
        break;
    }
    case 86384:
    {
        returnValue = F("Dönbergstr.");
        break;
    }
    case 86385:
    {
        returnValue = F("Döncherain");
        break;
    }
    case 86386:
    {
        returnValue = F("Döncheweg");
        break;
    }
    case 86387:
    {
        returnValue = F("Dönersberg");
        break;
    }
    case 86388:
    {
        returnValue = F("Dönges");
        break;
    }
    case 86389:
    {
        returnValue = F("Dönges-Str.");
        break;
    }
    case 86390:
    {
        returnValue = F("Döngesborngasse");
        break;
    }
    case 86391:
    {
        returnValue = F("Döngeser Weg");
        break;
    }
    case 86392:
    {
        returnValue = F("Döngesgasse");
        break;
    }
    case 86393:
    {
        returnValue = F("Döngesstr.");
        break;
    }
    case 86394:
    {
        returnValue = F("Döngesweg");
        break;
    }
    case 86395:
    {
        returnValue = F("Dönhoffstr.");
        break;
    }
    case 86396:
    {
        returnValue = F("Dönhoffweg");
        break;
    }
    case 86397:
    {
        returnValue = F("Dönitz");
        break;
    }
    case 86398:
    {
        returnValue = F("Dönitzer Str.");
        break;
    }
    case 86399:
    {
        returnValue = F("Dönitzgrundweg");
        break;
    }
    case 86400:
    {
        returnValue = F("Dönkenweg");
        break;
    }
    case 86401:
    {
        returnValue = F("Dönnewegstr.");
        break;
    }
    case 86402:
    {
        returnValue = F("Dönnier Str.");
        break;
    }
    case 86403:
    {
        returnValue = F("Dönschtner Talstr.");
        break;
    }
    case 86404:
    {
        returnValue = F("Dönseler Str.");
        break;
    }
    case 86405:
    {
        returnValue = F("Dönseler Weg");
        break;
    }
    case 86406:
    {
        returnValue = F("Dönstedter Str.");
        break;
    }
    case 86407:
    {
        returnValue = F("Dönstedter Weg");
        break;
    }
    case 86408:
    {
        returnValue = F("Döp");
        break;
    }
    case 86409:
    {
        returnValue = F("Döpeweg");
        break;
    }
    case 86410:
    {
        returnValue = F("Döpfnerstr.");
        break;
    }
    case 86411:
    {
        returnValue = F("Döpkes Hof");
        break;
    }
    case 86412:
    {
        returnValue = F("Döppchesstr.");
        break;
    }
    case 86413:
    {
        returnValue = F("Döppers Esch");
        break;
    }
    case 86414:
    {
        returnValue = F("Döppers Kamp");
        break;
    }
    case 86415:
    {
        returnValue = F("Döppers Weide");
        break;
    }
    case 86416:
    {
        returnValue = F("Döppersberg");
        break;
    }
    case 86417:
    {
        returnValue = F("Döpperstr.");
        break;
    }
    case 86418:
    {
        returnValue = F("Döppersweg");
        break;
    }
    case 86419:
    {
        returnValue = F("Döppingstr.");
        break;
    }
    case 86420:
    {
        returnValue = F("Dör de Hörn");
        break;
    }
    case 86421:
    {
        returnValue = F("Dör de Wisch");
        break;
    }
    case 86422:
    {
        returnValue = F("Dörbarg");
        break;
    }
    case 86423:
    {
        returnValue = F("Dörbecksdamm");
        break;
    }
    case 86424:
    {
        returnValue = F("Dörchenstr.");
        break;
    }
    case 86425:
    {
        returnValue = F("Dörchläuchtingstrat");
        break;
    }
    case 86426:
    {
        returnValue = F("Dördelstr.");
        break;
    }
    case 86427:
    {
        returnValue = F("Dördelweg");
        break;
    }
    case 86428:
    {
        returnValue = F("Dörenberg");
        break;
    }
    case 86429:
    {
        returnValue = F("Dörenbergstr.");
        break;
    }
    case 86430:
    {
        returnValue = F("Dörener Platz");
        break;
    }
    case 86431:
    {
        returnValue = F("Dörener Weg");
        break;
    }
    case 86432:
    {
        returnValue = F("Dörenerholzweg");
        break;
    }
    case 86433:
    {
        returnValue = F("Dörenhagener Str.");
        break;
    }
    case 86434:
    {
        returnValue = F("Dörenhagener Weg");
        break;
    }
    case 86435:
    {
        returnValue = F("Dörenhagenweg");
        break;
    }
    case 86436:
    {
        returnValue = F("Dörenkamp");
        break;
    }
    case 86437:
    {
        returnValue = F("Dörensiepen");
        break;
    }
    case 86438:
    {
        returnValue = F("Dörenstr.");
        break;
    }
    case 86439:
    {
        returnValue = F("Dörenther Berg");
        break;
    }
    case 86440:
    {
        returnValue = F("Dörenther Str.");
        break;
    }
    case 86441:
    {
        returnValue = F("Dörentruper Str.");
        break;
    }
    case 86442:
    {
        returnValue = F("Dörenwaldstr.");
        break;
    }
    case 86443:
    {
        returnValue = F("Dörenweg");
        break;
    }
    case 86444:
    {
        returnValue = F("Dörerweg");
        break;
    }
    case 86445:
    {
        returnValue = F("Döres Platz");
        break;
    }
    case 86446:
    {
        returnValue = F("Dörfchen");
        break;
    }
    case 86447:
    {
        returnValue = F("Dörfel");
        break;
    }
    case 86448:
    {
        returnValue = F("Dörfelstr.");
        break;
    }
    case 86449:
    {
        returnValue = F("Dörfelsweg");
        break;
    }
    case 86450:
    {
        returnValue = F("Dörfelweg");
        break;
    }
    case 86451:
    {
        returnValue = F("Dörfer Esch");
        break;
    }
    case 86452:
    {
        returnValue = F("Dörfer Kamp");
        break;
    }
    case 86453:
    {
        returnValue = F("Dörfer Weg");
        break;
    }
    case 86454:
    {
        returnValue = F("Dörferstr.");
        break;
    }
    case 86455:
    {
        returnValue = F("Dörferweg");
        break;
    }
    case 86456:
    {
        returnValue = F("Dörffelstr.");
        break;
    }
    case 86457:
    {
        returnValue = F("Dörfflerstr.");
        break;
    }
    case 86458:
    {
        returnValue = F("Dörffurtstr.");
        break;
    }
    case 86459:
    {
        returnValue = F("Dörflas");
        break;
    }
    case 86460:
    {
        returnValue = F("Dörflaser Hauptstr.");
        break;
    }
    case 86461:
    {
        returnValue = F("Dörflaser Platz");
        break;
    }
    case 86462:
    {
        returnValue = F("Dörflaser Str.");
        break;
    }
    case 86463:
    {
        returnValue = F("Dörfle");
        break;
    }
    case 86464:
    {
        returnValue = F("Dörfleinser Str.");
        break;
    }
    case 86465:
    {
        returnValue = F("Dörfleinsweg");
        break;
    }
    case 86466:
    {
        returnValue = F("Dörfler Kirchsteig");
        break;
    }
    case 86467:
    {
        returnValue = F("Dörfler Weg");
        break;
    }
    case 86468:
    {
        returnValue = F("Dörflerstr.");
        break;
    }
    case 86469:
    {
        returnValue = F("Dörflerweg");
        break;
    }
    case 86470:
    {
        returnValue = F("Dörfles");
        break;
    }
    case 86471:
    {
        returnValue = F("Dörfleser Anger");
        break;
    }
    case 86472:
    {
        returnValue = F("Dörflestr.");
        break;
    }
    case 86473:
    {
        returnValue = F("Dörflesweg");
        break;
    }
    case 86474:
    {
        returnValue = F("Dörfling");
        break;
    }
    case 86475:
    {
        returnValue = F("Dörflinger Str.");
        break;
    }
    case 86476:
    {
        returnValue = F("Dörflingerstr.");
        break;
    }
    case 86477:
    {
        returnValue = F("Dörfliser Weg");
        break;
    }
    case 86478:
    {
        returnValue = F("Dörflstr.");
        break;
    }
    case 86479:
    {
        returnValue = F("Dörgelin");
        break;
    }
    case 86480:
    {
        returnValue = F("Dörgen");
        break;
    }
    case 86481:
    {
        returnValue = F("Dörgener Brücke");
        break;
    }
    case 86482:
    {
        returnValue = F("Dörgenkamp");
        break;
    }
    case 86483:
    {
        returnValue = F("Dörgesring");
        break;
    }
    case 86484:
    {
        returnValue = F("Dörholt");
        break;
    }
    case 86485:
    {
        returnValue = F("Dörhöfer Promenade");
        break;
    }
    case 86486:
    {
        returnValue = F("Döring");
        break;
    }
    case 86487:
    {
        returnValue = F("Döringsbrücker Weg");
        break;
    }
    case 86488:
    {
        returnValue = F("Döringsdorfer Str.");
        break;
    }
    case 86489:
    {
        returnValue = F("Döringskamp");
        break;
    }
    case 86490:
    {
        returnValue = F("Döringstr.");
        break;
    }
    case 86491:
    {
        returnValue = F("Döringstädter Str.");
        break;
    }
    case 86492:
    {
        returnValue = F("Döringweg");
        break;
    }
    case 86493:
    {
        returnValue = F("Dörk's Kamp");
        break;
    }
    case 86494:
    {
        returnValue = F("Dörken Heide");
        break;
    }
    case 86495:
    {
        returnValue = F("Dörkesdohr");
        break;
    }
    case 86496:
    {
        returnValue = F("Dörkesdyck");
        break;
    }
    case 86497:
    {
        returnValue = F("Dörleberg");
        break;
    }
    case 86498:
    {
        returnValue = F("Dörlebühlweg");
        break;
    }
    case 86499:
    {
        returnValue = F("Dörler Str.");
        break;
    }
    case 86500:
    {
        returnValue = F("Dörlesberger Str.");
        break;
    }
    case 86501:
    {
        returnValue = F("Dörleweg");
        break;
    }
    case 86502:
    {
        returnValue = F("Dörlinbachergrund");
        break;
    }
    case 86503:
    {
        returnValue = F("Dörmannsweg");
        break;
    }
    case 86504:
    {
        returnValue = F("Dörmannweg");
        break;
    }
    case 86505:
    {
        returnValue = F("Dörmbach");
        break;
    }
    case 86506:
    {
        returnValue = F("Dörmbacher Ring");
        break;
    }
    case 86507:
    {
        returnValue = F("Dörmbachstr.");
        break;
    }
    case 86508:
    {
        returnValue = F("Dörmecke");
        break;
    }
    case 86509:
    {
        returnValue = F("Dörmenzer Str.");
        break;
    }
    case 86510:
    {
        returnValue = F("Dörmsenweg");
        break;
    }
    case 86511:
    {
        returnValue = F("Dörmte");
        break;
    }
    case 86512:
    {
        returnValue = F("Dörmter Str.");
        break;
    }
    case 86513:
    {
        returnValue = F("Dörn Pool");
        break;
    }
    case 86514:
    {
        returnValue = F("Dörn Wärgen");
        break;
    }
    case 86515:
    {
        returnValue = F("Dörnacher Str.");
        break;
    }
    case 86516:
    {
        returnValue = F("Dörnacher Weg");
        break;
    }
    case 86517:
    {
        returnValue = F("Dörnachstr.");
        break;
    }
    case 86518:
    {
        returnValue = F("Dörnaer Chaussee");
        break;
    }
    case 86519:
    {
        returnValue = F("Dörnaer Weg");
        break;
    }
    case 86520:
    {
        returnValue = F("Dörnauweg");
        break;
    }
    case 86521:
    {
        returnValue = F("Dörnbach");
        break;
    }
    case 86522:
    {
        returnValue = F("Dörnbacher Str.");
        break;
    }
    case 86523:
    {
        returnValue = F("Dörnbacher Weg");
        break;
    }
    case 86524:
    {
        returnValue = F("Dörnbachstr.");
        break;
    }
    case 86525:
    {
        returnValue = F("Dörnbachweg");
        break;
    }
    case 86526:
    {
        returnValue = F("Dörnbek");
        break;
    }
    case 86527:
    {
        returnValue = F("Dörnberg-Schneise");
        break;
    }
    case 86528:
    {
        returnValue = F("Dörnbergpark");
        break;
    }
    case 86529:
    {
        returnValue = F("Dörnbergschneise");
        break;
    }
    case 86530:
    {
        returnValue = F("Dörnbergstr.");
        break;
    }
    case 86531:
    {
        returnValue = F("Dörnbergweg");
        break;
    }
    case 86532:
    {
        returnValue = F("Dörnchen");
        break;
    }
    case 86533:
    {
        returnValue = F("Dörnchensweg");
        break;
    }
    case 86534:
    {
        returnValue = F("Dörnchesfuhr");
        break;
    }
    case 86535:
    {
        returnValue = F("Dörnebruch");
        break;
    }
    case 86536:
    {
        returnValue = F("Dörnechtstr.");
        break;
    }
    case 86537:
    {
        returnValue = F("Dörnekampstr.");
        break;
    }
    case 86538:
    {
        returnValue = F("Dörnen");
        break;
    }
    case 86539:
    {
        returnValue = F("Dörnenbachstr.");
        break;
    }
    case 86540:
    {
        returnValue = F("Dörnenburgweg");
        break;
    }
    case 86541:
    {
        returnValue = F("Dörnenkampsweg");
        break;
    }
    case 86542:
    {
        returnValue = F("Dörnenstr.");
        break;
    }
    case 86543:
    {
        returnValue = F("Dörnenweg");
        break;
    }
    case 86544:
    {
        returnValue = F("Dörner Brücke");
        break;
    }
    case 86545:
    {
        returnValue = F("Dörner Str.");
        break;
    }
    case 86546:
    {
        returnValue = F("Dörner Weg");
        break;
    }
    case 86547:
    {
        returnValue = F("Dörnerbusch");
        break;
    }
    case 86548:
    {
        returnValue = F("Dörnergasse");
        break;
    }
    case 86549:
    {
        returnValue = F("Dörnerstr.");
        break;
    }
    case 86550:
    {
        returnValue = F("Dörnerweg");
        break;
    }
    case 86551:
    {
        returnValue = F("Dörnerzaunstr.");
        break;
    }
    case 86552:
    {
        returnValue = F("Dörnet");
        break;
    }
    case 86553:
    {
        returnValue = F("Dörnethaldenweg");
        break;
    }
    case 86554:
    {
        returnValue = F("Dörnetstr.");
        break;
    }
    case 86555:
    {
        returnValue = F("Dörnetweg");
        break;
    }
    case 86556:
    {
        returnValue = F("Dörneweg");
        break;
    }
    case 86557:
    {
        returnValue = F("Dörnfeld");
        break;
    }
    case 86558:
    {
        returnValue = F("Dörnhagener Str.");
        break;
    }
    case 86559:
    {
        returnValue = F("Dörnhof");
        break;
    }
    case 86560:
    {
        returnValue = F("Dörnhofer Str.");
        break;
    }
    case 86561:
    {
        returnValue = F("Dörnhofstr.");
        break;
    }
    case 86562:
    {
        returnValue = F("Dörnich-Reuteweg");
        break;
    }
    case 86563:
    {
        returnValue = F("Dörnichtweg");
        break;
    }
    case 86564:
    {
        returnValue = F("Dörnigheimer Str.");
        break;
    }
    case 86565:
    {
        returnValue = F("Dörnigheimer Weg");
        break;
    }
    case 86566:
    {
        returnValue = F("Dörnigstr.");
        break;
    }
    case 86567:
    {
        returnValue = F("Dörnigweg");
        break;
    }
    case 86568:
    {
        returnValue = F("Dörningstr.");
        break;
    }
    case 86569:
    {
        returnValue = F("Dörningweg");
        break;
    }
    case 86570:
    {
        returnValue = F("Dörnishof");
        break;
    }
    case 86571:
    {
        returnValue = F("Dörnisweg");
        break;
    }
    case 86572:
    {
        returnValue = F("Dörnitzer Weg");
        break;
    }
    case 86573:
    {
        returnValue = F("Dörnle");
        break;
    }
    case 86574:
    {
        returnValue = F("Dörnleinsweg");
        break;
    }
    case 86575:
    {
        returnValue = F("Dörnlen");
        break;
    }
    case 86576:
    {
        returnValue = F("Dörnlestr.");
        break;
    }
    case 86577:
    {
        returnValue = F("Dörnlinger Weg");
        break;
    }
    case 86578:
    {
        returnValue = F("Dörnschlader Weg");
        break;
    }
    case 86579:
    {
        returnValue = F("Dörnsenbachstr.");
        break;
    }
    case 86580:
    {
        returnValue = F("Dörnsteinbacher Str.");
        break;
    }
    case 86581:
    {
        returnValue = F("Dörnstieg");
        break;
    }
    case 86582:
    {
        returnValue = F("Dörntal");
        break;
    }
    case 86583:
    {
        returnValue = F("Dörntaler Hof");
        break;
    }
    case 86584:
    {
        returnValue = F("Dörntelsberg");
        break;
    }
    case 86585:
    {
        returnValue = F("Dörntener Str.");
        break;
    }
    case 86586:
    {
        returnValue = F("Dörnter Weg");
        break;
    }
    case 86587:
    {
        returnValue = F("Dörnthal");
        break;
    }
    case 86588:
    {
        returnValue = F("Dörnweg");
        break;
    }
    case 86589:
    {
        returnValue = F("Dörpacker");
        break;
    }
    case 86590:
    {
        returnValue = F("Dörpallee");
        break;
    }
    case 86591:
    {
        returnValue = F("Dörpdiek");
        break;
    }
    case 86592:
    {
        returnValue = F("Dörpe");
        break;
    }
    case 86593:
    {
        returnValue = F("Dörpeder Mark");
        break;
    }
    case 86594:
    {
        returnValue = F("Dörpel");
        break;
    }
    case 86595:
    {
        returnValue = F("Dörpeler Damm");
        break;
    }
    case 86596:
    {
        returnValue = F("Dörpeler Str.");
        break;
    }
    case 86597:
    {
        returnValue = F("Dörpener Str.");
        break;
    }
    case 86598:
    {
        returnValue = F("Dörper Feldweg");
        break;
    }
    case 86599:
    {
        returnValue = F("Dörper Str.");
        break;
    }
    case 86600:
    {
        returnValue = F("Dörper Weg");
        break;
    }
    case 86601:
    {
        returnValue = F("Dörperfeld");
        break;
    }
    case 86602:
    {
        returnValue = F("Dörperhöhe");
        break;
    }
    case 86603:
    {
        returnValue = F("Dörperort");
        break;
    }
    case 86604:
    {
        returnValue = F("Dörperweg");
        break;
    }
    case 86605:
    {
        returnValue = F("Dörpfelderhöhe");
        break;
    }
    case 86606:
    {
        returnValue = F("Dörpfeldstr.");
        break;
    }
    case 86607:
    {
        returnValue = F("Dörpholz");
        break;
    }
    case 86608:
    {
        returnValue = F("Dörpinghauser Str.");
        break;
    }
    case 86609:
    {
        returnValue = F("Dörpkamp");
        break;
    }
    case 86610:
    {
        returnValue = F("Dörpkestieg");
        break;
    }
    case 86611:
    {
        returnValue = F("Dörplotten");
        break;
    }
    case 86612:
    {
        returnValue = F("Dörpmannswischen");
        break;
    }
    case 86613:
    {
        returnValue = F("Dörpmühle");
        break;
    }
    case 86614:
    {
        returnValue = F("Dörpner Meede");
        break;
    }
    case 86615:
    {
        returnValue = F("Dörpplatz");
        break;
    }
    case 86616:
    {
        returnValue = F("Dörps End");
        break;
    }
    case 86617:
    {
        returnValue = F("Dörpsend");
        break;
    }
    case 86618:
    {
        returnValue = F("Dörpsredder");
        break;
    }
    case 86619:
    {
        returnValue = F("Dörpsring");
        break;
    }
    case 86620:
    {
        returnValue = F("Dörpsstraat");
        break;
    }
    case 86621:
    {
        returnValue = F("Dörpstede");
        break;
    }
    case 86622:
    {
        returnValue = F("Dörpstedter Str.");
        break;
    }
    case 86623:
    {
        returnValue = F("Dörpstieg");
        break;
    }
    case 86624:
    {
        returnValue = F("Dörpstraat");
        break;
    }
    case 86625:
    {
        returnValue = F("Dörpstrat");
        break;
    }
    case 86626:
    {
        returnValue = F("Dörpstroat");
        break;
    }
    case 86627:
    {
        returnValue = F("Dörpstroot");
        break;
    }
    case 86628:
    {
        returnValue = F("Dörptwiete");
        break;
    }
    case 86629:
    {
        returnValue = F("Dörpumer Str.");
        break;
    }
    case 86630:
    {
        returnValue = F("Dörpumer Weg");
        break;
    }
    case 86631:
    {
        returnValue = F("Dörpwundt");
        break;
    }
    case 86632:
    {
        returnValue = F("Dörrbachweg");
        break;
    }
    case 86633:
    {
        returnValue = F("Dörrberg");
        break;
    }
    case 86634:
    {
        returnValue = F("Dörrberger Hammer");
        break;
    }
    case 86635:
    {
        returnValue = F("Dörrbergstr.");
        break;
    }
    case 86636:
    {
        returnValue = F("Dörrbuck");
        break;
    }
    case 86637:
    {
        returnValue = F("Dörre Büchelbach");
        break;
    }
    case 86638:
    {
        returnValue = F("Dörrebacher Str.");
        break;
    }
    case 86639:
    {
        returnValue = F("Dörreberg");
        break;
    }
    case 86640:
    {
        returnValue = F("Dörrebrunnen");
        break;
    }
    case 86641:
    {
        returnValue = F("Dörrenbacher Str.");
        break;
    }
    case 86642:
    {
        returnValue = F("Dörrenbachstr.");
        break;
    }
    case 86643:
    {
        returnValue = F("Dörrenberg");
        break;
    }
    case 86644:
    {
        returnValue = F("Dörrenberger Weg");
        break;
    }
    case 86645:
    {
        returnValue = F("Dörrenbergplatz");
        break;
    }
    case 86646:
    {
        returnValue = F("Dörrenbergstr.");
        break;
    }
    case 86647:
    {
        returnValue = F("Dörrenbergweg");
        break;
    }
    case 86648:
    {
        returnValue = F("Dörrenbitze");
        break;
    }
    case 86649:
    {
        returnValue = F("Dörrenböhler Hof");
        break;
    }
    case 86650:
    {
        returnValue = F("Dörrenhauser Str.");
        break;
    }
    case 86651:
    {
        returnValue = F("Dörrenhof");
        break;
    }
    case 86652:
    {
        returnValue = F("Dörrenklingenweg");
        break;
    }
    case 86653:
    {
        returnValue = F("Dörrenpesch");
        break;
    }
    case 86654:
    {
        returnValue = F("Dörrensolzer Str.");
        break;
    }
    case 86655:
    {
        returnValue = F("Dörrentalstr.");
        break;
    }
    case 86656:
    {
        returnValue = F("Dörrentalweg");
        break;
    }
    case 86657:
    {
        returnValue = F("Dörrenzimmerer Str.");
        break;
    }
    case 86658:
    {
        returnValue = F("Dörrerstr.");
        break;
    }
    case 86659:
    {
        returnValue = F("Dörrerweg");
        break;
    }
    case 86660:
    {
        returnValue = F("Dörresfuhr");
        break;
    }
    case 86661:
    {
        returnValue = F("Dörrgasse");
        break;
    }
    case 86662:
    {
        returnValue = F("Dörrgrubgasse");
        break;
    }
    case 86663:
    {
        returnValue = F("Dörrheidenstr.");
        break;
    }
    case 86664:
    {
        returnValue = F("Dörrhoff");
        break;
    }
    case 86665:
    {
        returnValue = F("Dörrhorststr.");
        break;
    }
    case 86666:
    {
        returnValue = F("Dörrhöfer Weg");
        break;
    }
    case 86667:
    {
        returnValue = F("Dörrhüttenweg");
        break;
    }
    case 86668:
    {
        returnValue = F("Dörrieloh");
        break;
    }
    case 86669:
    {
        returnValue = F("Dörrienstr.");
        break;
    }
    case 86670:
    {
        returnValue = F("Dörriesloher Str.");
        break;
    }
    case 86671:
    {
        returnValue = F("Dörriesstr.");
        break;
    }
    case 86672:
    {
        returnValue = F("Dörrieweg");
        break;
    }
    case 86673:
    {
        returnValue = F("Dörrigsgarten");
        break;
    }
    case 86674:
    {
        returnValue = F("Dörringworth");
        break;
    }
    case 86675:
    {
        returnValue = F("Dörrlesweg");
        break;
    }
    case 86676:
    {
        returnValue = F("Dörrmorsbacher Str.");
        break;
    }
    case 86677:
    {
        returnValue = F("Dörrmoscheler Str.");
        break;
    }
    case 86678:
    {
        returnValue = F("Dörrmühle");
        break;
    }
    case 86679:
    {
        returnValue = F("Dörrnhof");
        break;
    }
    case 86680:
    {
        returnValue = F("Dörrofen");
        break;
    }
    case 86681:
    {
        returnValue = F("Dörrstück");
        break;
    }
    case 86682:
    {
        returnValue = F("Dörrtal");
        break;
    }
    case 86683:
    {
        returnValue = F("Dörrweg");
        break;
    }
    case 86684:
    {
        returnValue = F("Dörrwies");
        break;
    }
    case 86685:
    {
        returnValue = F("Dörrwiese");
        break;
    }
    case 86686:
    {
        returnValue = F("Dörrwiesenschneise");
        break;
    }
    case 86687:
    {
        returnValue = F("Dörrwiesenstr.");
        break;
    }
    case 86688:
    {
        returnValue = F("Dörrwiesenweg");
        break;
    }
    case 86689:
    {
        returnValue = F("Dörrwieser Weg");
        break;
    }
    case 86690:
    {
        returnValue = F("Dörrwolfer Weg");
        break;
    }
    case 86691:
    {
        returnValue = F("Dörsbachstr.");
        break;
    }
    case 86692:
    {
        returnValue = F("Dörschach");
        break;
    }
    case 86693:
    {
        returnValue = F("Dörschachrandweg");
        break;
    }
    case 86694:
    {
        returnValue = F("Dörschbachstr.");
        break;
    }
    case 86695:
    {
        returnValue = F("Dörschnitzer Str.");
        break;
    }
    case 86696:
    {
        returnValue = F("Dörsdorfer Str.");
        break;
    }
    case 86697:
    {
        returnValue = F("Dörspestr.");
        break;
    }
    case 86698:
    {
        returnValue = F("Dörssiepen");
        break;
    }
    case 86699:
    {
        returnValue = F("Dörstelstr.");
        break;
    }
    case 86700:
    {
        returnValue = F("Dörstetter Weg");
        break;
    }
    case 86701:
    {
        returnValue = F("Dörstewitzer Str.");
        break;
    }
    case 86702:
    {
        returnValue = F("Dörstheck");
        break;
    }
    case 86703:
    {
        returnValue = F("Dörtalsweg");
        break;
    }
    case 86704:
    {
        returnValue = F("Dörteler Bergstr.");
        break;
    }
    case 86705:
    {
        returnValue = F("Dörtelort");
        break;
    }
    case 86706:
    {
        returnValue = F("Dörtendorf");
        break;
    }
    case 86707:
    {
        returnValue = F("Dörther Weg");
        break;
    }
    case 86708:
    {
        returnValue = F("Dörverdener Str.");
        break;
    }
    case 86709:
    {
        returnValue = F("Dörzbacher Steige");
        break;
    }
    case 86710:
    {
        returnValue = F("Dörzbacher Str.");
        break;
    }
    case 86711:
    {
        returnValue = F("Döschers Trift");
        break;
    }
    case 86712:
    {
        returnValue = F("Döschkepadd");
        break;
    }
    case 86713:
    {
        returnValue = F("Döschwitzer Str.");
        break;
    }
    case 86714:
    {
        returnValue = F("Döschwitzer Weg");
        break;
    }
    case 86715:
    {
        returnValue = F("Döschütz");
        break;
    }
    case 86716:
    {
        returnValue = F("Dösdorf");
        break;
    }
    case 86717:
    {
        returnValue = F("Döselsberg");
        break;
    }
    case 86718:
    {
        returnValue = F("Dösener Str.");
        break;
    }
    case 86719:
    {
        returnValue = F("Dösenweg");
        break;
    }
    case 86720:
    {
        returnValue = F("Döser Feldweg");
        break;
    }
    case 86721:
    {
        returnValue = F("Döser Möhlenbarg");
        break;
    }
    case 86722:
    {
        returnValue = F("Döseweg");
        break;
    }
    case 86723:
    {
        returnValue = F("Dösham");
        break;
    }
    case 86724:
    {
        returnValue = F("Dösinger Str.");
        break;
    }
    case 86725:
    {
        returnValue = F("Dösinger Weg");
        break;
    }
    case 86726:
    {
        returnValue = F("Dösselbuschberg");
        break;
    }
    case 86727:
    {
        returnValue = F("Dösseler Str.");
        break;
    }
    case 86728:
    {
        returnValue = F("Dösseweg");
        break;
    }
    case 86729:
    {
        returnValue = F("Dösskamp");
        break;
    }
    case 86730:
    {
        returnValue = F("Dösterhof");
        break;
    }
    case 86731:
    {
        returnValue = F("Döteberger Str.");
        break;
    }
    case 86732:
    {
        returnValue = F("Döthstr.");
        break;
    }
    case 86733:
    {
        returnValue = F("Dötling");
        break;
    }
    case 86734:
    {
        returnValue = F("Dötlinger Weg");
        break;
    }
    case 86735:
    {
        returnValue = F("Dötschenmühle");
        break;
    }
    case 86736:
    {
        returnValue = F("Dötschenmühlweg");
        break;
    }
    case 86737:
    {
        returnValue = F("Döttelbach");
        break;
    }
    case 86738:
    {
        returnValue = F("Döttelbeck-Brücke");
        break;
    }
    case 86739:
    {
        returnValue = F("Döttelbeckstr.");
        break;
    }
    case 86740:
    {
        returnValue = F("Döttenau");
        break;
    }
    case 86741:
    {
        returnValue = F("Dötterlweg");
        break;
    }
    case 86742:
    {
        returnValue = F("Döttinger Str.");
        break;
    }
    case 86743:
    {
        returnValue = F("Döttscheider Weg");
        break;
    }
    case 86744:
    {
        returnValue = F("Dötzenweg");
        break;
    }
    case 86745:
    {
        returnValue = F("Dövelingsweg");
        break;
    }
    case 86746:
    {
        returnValue = F("Döwelingsweg");
        break;
    }
    case 86747:
    {
        returnValue = F("Dözel");
        break;
    }
    case 86748:
    {
        returnValue = F("Dözenäckerstr.");
        break;
    }
    case 86749:
    {
        returnValue = F("Dübbekold");
        break;
    }
    case 86750:
    {
        returnValue = F("Dübbelken");
        break;
    }
    case 86751:
    {
        returnValue = F("Dübbelweg");
        break;
    }
    case 86752:
    {
        returnValue = F("Dübberort");
        break;
    }
    case 86753:
    {
        returnValue = F("Dübelsberg");
        break;
    }
    case 86754:
    {
        returnValue = F("Dübelsbrunnen");
        break;
    }
    case 86755:
    {
        returnValue = F("Dübelsdiek");
        break;
    }
    case 86756:
    {
        returnValue = F("Dübelweg");
        break;
    }
    case 86757:
    {
        returnValue = F("Dübendorfer Str.");
        break;
    }
    case 86758:
    {
        returnValue = F("Dübener Allee");
        break;
    }
    case 86759:
    {
        returnValue = F("Dübener Dorfstr.");
        break;
    }
    case 86760:
    {
        returnValue = F("Dübener Landstr.");
        break;
    }
    case 86761:
    {
        returnValue = F("Dübener Str.");
        break;
    }
    case 86762:
    {
        returnValue = F("Dübener Weg");
        break;
    }
    case 86763:
    {
        returnValue = F("Dübrichen");
        break;
    }
    case 86764:
    {
        returnValue = F("Dückenort");
        break;
    }
    case 86765:
    {
        returnValue = F("Dückerings Bracke");
        break;
    }
    case 86766:
    {
        returnValue = F("Dückermühle");
        break;
    }
    case 86767:
    {
        returnValue = F("Dückerschleuse");
        break;
    }
    case 86768:
    {
        returnValue = F("Dückershof");
        break;
    }
    case 86769:
    {
        returnValue = F("Dückersstr.");
        break;
    }
    case 86770:
    {
        returnValue = F("Dückerstieg");
        break;
    }
    case 86771:
    {
        returnValue = F("Dückerstr.");
        break;
    }
    case 86772:
    {
        returnValue = F("Dückersweg");
        break;
    }
    case 86773:
    {
        returnValue = F("Dückerswischer Str.");
        break;
    }
    case 86774:
    {
        returnValue = F("Düddinger Str.");
        break;
    }
    case 86775:
    {
        returnValue = F("Düdelsheimer Str.");
        break;
    }
    case 86776:
    {
        returnValue = F("Düdelsheimer Weg");
        break;
    }
    case 86777:
    {
        returnValue = F("Düdenbütteler Str.");
        break;
    }
    case 86778:
    {
        returnValue = F("Düderoder Str.");
        break;
    }
    case 86779:
    {
        returnValue = F("Düdinghauser Str.");
        break;
    }
    case 86780:
    {
        returnValue = F("Düdinghäuser Str.");
        break;
    }
    case 86781:
    {
        returnValue = F("Düdinghäuser Weg");
        break;
    }
    case 86782:
    {
        returnValue = F("Düdingsweg");
        break;
    }
    case 86783:
    {
        returnValue = F("Düendorfer Weg");
        break;
    }
    case 86784:
    {
        returnValue = F("Düenkamper Brücke");
        break;
    }
    case 86785:
    {
        returnValue = F("Düferother Str.");
        break;
    }
    case 86786:
    {
        returnValue = F("Düffelgaustr.");
        break;
    }
    case 86787:
    {
        returnValue = F("Düffelstr.");
        break;
    }
    case 86788:
    {
        returnValue = F("Düfferstr.");
        break;
    }
    case 86789:
    {
        returnValue = F("Düftenbergweg");
        break;
    }
    case 86790:
    {
        returnValue = F("Düftweg");
        break;
    }
    case 86791:
    {
        returnValue = F("Dühbergstr.");
        break;
    }
    case 86792:
    {
        returnValue = F("Dühlfeld");
        break;
    }
    case 86793:
    {
        returnValue = F("Dühlholz");
        break;
    }
    case 86794:
    {
        returnValue = F("Dühlholzkamp");
        break;
    }
    case 86795:
    {
        returnValue = F("Dührener Str.");
        break;
    }
    case 86796:
    {
        returnValue = F("Dührenkamp");
        break;
    }
    case 86797:
    {
        returnValue = F("Dühringstr.");
        break;
    }
    case 86798:
    {
        returnValue = F("Düingdorfer Str.");
        break;
    }
    case 86799:
    {
        returnValue = F("Düingser Mühle");
        break;
    }
    case 86800:
    {
        returnValue = F("Düke");
        break;
    }
    case 86801:
    {
        returnValue = F("Düker Weg");
        break;
    }
    case 86802:
    {
        returnValue = F("Dükerblick");
        break;
    }
    case 86803:
    {
        returnValue = F("Dükerstr.");
        break;
    }
    case 86804:
    {
        returnValue = F("Dükerweg");
        break;
    }
    case 86805:
    {
        returnValue = F("Dülbigweg");
        break;
    }
    case 86806:
    {
        returnValue = F("Dülfershöfer Weg");
        break;
    }
    case 86807:
    {
        returnValue = F("Dülkener Str.");
        break;
    }
    case 86808:
    {
        returnValue = F("Düllerstr.");
        break;
    }
    case 86809:
    {
        returnValue = F("Düllgenstr.");
        break;
    }
    case 86810:
    {
        returnValue = F("Düllhammsweg");
        break;
    }
    case 86811:
    {
        returnValue = F("Düllstr.");
        break;
    }
    case 86812:
    {
        returnValue = F("Düllstädter Str.");
        break;
    }
    case 86813:
    {
        returnValue = F("Düllweg");
        break;
    }
    case 86814:
    {
        returnValue = F("Dülmener Str.");
        break;
    }
    case 86815:
    {
        returnValue = F("Dülmener Weg");
        break;
    }
    case 86816:
    {
        returnValue = F("Dülsweg");
        break;
    }
    case 86817:
    {
        returnValue = F("Dültgenstaler Str.");
        break;
    }
    case 86818:
    {
        returnValue = F("Dülwaldstr.");
        break;
    }
    case 86819:
    {
        returnValue = F("Dümgesweg");
        break;
    }
    case 86820:
    {
        returnValue = F("Dümmelsweg");
        break;
    }
    case 86821:
    {
        returnValue = F("Dümmelswiesenweg");
        break;
    }
    case 86822:
    {
        returnValue = F("Dümmer Weg");
        break;
    }
    case 86823:
    {
        returnValue = F("Dümmer-Rundweg");
        break;
    }
    case 86824:
    {
        returnValue = F("Dümmergraben");
        break;
    }
    case 86825:
    {
        returnValue = F("Dümmerstr.");
        break;
    }
    case 86826:
    {
        returnValue = F("Dümmerweg");
        break;
    }
    case 86827:
    {
        returnValue = F("Dümmlinghauser Str.");
        break;
    }
    case 86828:
    {
        returnValue = F("Dümpel");
        break;
    }
    case 86829:
    {
        returnValue = F("Dümpelacker");
        break;
    }
    case 86830:
    {
        returnValue = F("Dümpelgasse");
        break;
    }
    case 86831:
    {
        returnValue = F("Dümpelhof");
        break;
    }
    case 86832:
    {
        returnValue = F("Dümpelsmühlstr.");
        break;
    }
    case 86833:
    {
        returnValue = F("Dümpelstr.");
        break;
    }
    case 86834:
    {
        returnValue = F("Dümpelweg");
        break;
    }
    case 86835:
    {
        returnValue = F("Dümperstr.");
        break;
    }
    case 86836:
    {
        returnValue = F("Dümpeweg");
        break;
    }
    case 86837:
    {
        returnValue = F("Dümpfelstr.");
        break;
    }
    case 86838:
    {
        returnValue = F("Dümpfelwiesen");
        break;
    }
    case 86839:
    {
        returnValue = F("Dümpflein");
        break;
    }
    case 86840:
    {
        returnValue = F("Dümpfleweg");
        break;
    }
    case 86841:
    {
        returnValue = F("Dümpler Weg");
        break;
    }
    case 86842:
    {
        returnValue = F("Dümplerleie");
        break;
    }
    case 86843:
    {
        returnValue = F("Dümptener Heide");
        break;
    }
    case 86844:
    {
        returnValue = F("Dümptener Str.");
        break;
    }
    case 86845:
    {
        returnValue = F("Dümpterkamp");
        break;
    }
    case 86846:
    {
        returnValue = F("Dünberg");
        break;
    }
    case 86847:
    {
        returnValue = F("Dünblick");
        break;
    }
    case 86848:
    {
        returnValue = F("Düneberger Str.");
        break;
    }
    case 86849:
    {
        returnValue = F("Dünebroek");
        break;
    }
    case 86850:
    {
        returnValue = F("Dünefehnstr.");
        break;
    }
    case 86851:
    {
        returnValue = F("Dünem Wai");
        break;
    }
    case 86852:
    {
        returnValue = F("Dünemwai");
        break;
    }
    case 86853:
    {
        returnValue = F("Dünenangerstr.");
        break;
    }
    case 86854:
    {
        returnValue = F("Dünenbrücke");
        break;
    }
    case 86855:
    {
        returnValue = F("Düneneck");
        break;
    }
    case 86856:
    {
        returnValue = F("Dünenfähr");
        break;
    }
    case 86857:
    {
        returnValue = F("Dünenfährstr.");
        break;
    }
    case 86858:
    {
        returnValue = F("Dünengrund");
        break;
    }
    case 86859:
    {
        returnValue = F("Dünenkamp");
        break;
    }
    case 86860:
    {
        returnValue = F("Dünenpark");
        break;
    }
    case 86861:
    {
        returnValue = F("Dünenpromenade");
        break;
    }
    case 86862:
    {
        returnValue = F("Dünenresidenz");
        break;
    }
    case 86863:
    {
        returnValue = F("Dünenring");
        break;
    }
    case 86864:
    {
        returnValue = F("Dünensteg");
        break;
    }
    case 86865:
    {
        returnValue = F("Dünensteig");
        break;
    }
    case 86866:
    {
        returnValue = F("Dünenstr.");
        break;
    }
    case 86867:
    {
        returnValue = F("Dünental");
        break;
    }
    case 86868:
    {
        returnValue = F("Dünenwall");
        break;
    }
    case 86869:
    {
        returnValue = F("Dünenweg");
        break;
    }
    case 86870:
    {
        returnValue = F("Dünenüberquerung");
        break;
    }
    case 86871:
    {
        returnValue = F("Düneweg");
        break;
    }
    case 86872:
    {
        returnValue = F("Dünfelder Str.");
        break;
    }
    case 86873:
    {
        returnValue = F("Düngelkamp");
        break;
    }
    case 86874:
    {
        returnValue = F("Düngelstr.");
        break;
    }
    case 86875:
    {
        returnValue = F("Düngelweg");
        break;
    }
    case 86876:
    {
        returnValue = F("Düngener Winkel");
        break;
    }
    case 86877:
    {
        returnValue = F("Düngenheimer Str.");
        break;
    }
    case 86878:
    {
        returnValue = F("Düngersheimstr.");
        break;
    }
    case 86879:
    {
        returnValue = F("Düning");
        break;
    }
    case 86880:
    {
        returnValue = F("Dünischweg");
        break;
    }
    case 86881:
    {
        returnValue = F("Dünje Moor");
        break;
    }
    case 86882:
    {
        returnValue = F("Dünkelbachstr.");
        break;
    }
    case 86883:
    {
        returnValue = F("Dünkelhammer");
        break;
    }
    case 86884:
    {
        returnValue = F("Dünkelsgasse");
        break;
    }
    case 86885:
    {
        returnValue = F("Dünkelweg");
        break;
    }
    case 86886:
    {
        returnValue = F("Dünkirchen");
        break;
    }
    case 86887:
    {
        returnValue = F("Dünkirchener Str.");
        break;
    }
    case 86888:
    {
        returnValue = F("Dünnackerstr.");
        break;
    }
    case 86889:
    {
        returnValue = F("Dünnbachhaldeweg");
        break;
    }
    case 86890:
    {
        returnValue = F("Dünnbachtal");
        break;
    }
    case 86891:
    {
        returnValue = F("Dünnebank");
        break;
    }
    case 86892:
    {
        returnValue = F("Dünnefeldweg");
        break;
    }
    case 86893:
    {
        returnValue = F("Dünnenberken");
        break;
    }
    case 86894:
    {
        returnValue = F("Dünnenreihe");
        break;
    }
    case 86895:
    {
        returnValue = F("Dünnenriede");
        break;
    }
    case 86896:
    {
        returnValue = F("Dünner");
        break;
    }
    case 86897:
    {
        returnValue = F("Dünner Feldweg");
        break;
    }
    case 86898:
    {
        returnValue = F("Dünner Str.");
        break;
    }
    case 86899:
    {
        returnValue = F("Dünnerhöfe");
        break;
    }
    case 86900:
    {
        returnValue = F("Dünnhauptstr.");
        break;
    }
    case 86901:
    {
        returnValue = F("Dünnhofsweg");
        break;
    }
    case 86902:
    {
        returnValue = F("Dünnmatter Weg");
        break;
    }
    case 86903:
    {
        returnValue = F("Dünnstr.");
        break;
    }
    case 86904:
    {
        returnValue = F("Dünnwald");
        break;
    }
    case 86905:
    {
        returnValue = F("Dünnwalder Grenzweg");
        break;
    }
    case 86906:
    {
        returnValue = F("Dünnwalder Weg");
        break;
    }
    case 86907:
    {
        returnValue = F("Dünnwaldstr.");
        break;
    }
    case 86908:
    {
        returnValue = F("Dünsbacher Hauptstr.");
        break;
    }
    case 86909:
    {
        returnValue = F("Dünsbacher Str.");
        break;
    }
    case 86910:
    {
        returnValue = F("Dünsberger Weg");
        break;
    }
    case 86911:
    {
        returnValue = F("Dünsbergring");
        break;
    }
    case 86912:
    {
        returnValue = F("Dünsbergstr.");
        break;
    }
    case 86913:
    {
        returnValue = F("Dünsbergweg");
        break;
    }
    case 86914:
    {
        returnValue = F("Dünscheder Str.");
        break;
    }
    case 86915:
    {
        returnValue = F("Dünscher Weg");
        break;
    }
    case 86916:
    {
        returnValue = F("Dünsener Str.");
        break;
    }
    case 86917:
    {
        returnValue = F("Dünsener Weg");
        break;
    }
    case 86918:
    {
        returnValue = F("Dünshof");
        break;
    }
    case 86919:
    {
        returnValue = F("Dünstbergstr.");
        break;
    }
    case 86920:
    {
        returnValue = F("Dünstekovener Weg");
        break;
    }
    case 86921:
    {
        returnValue = F("Dünstr.");
        break;
    }
    case 86922:
    {
        returnValue = F("Dünweg");
        break;
    }
    case 86923:
    {
        returnValue = F("Dünzebacher Str.");
        break;
    }
    case 86924:
    {
        returnValue = F("Dünziger Str.");
        break;
    }
    case 86925:
    {
        returnValue = F("Dünzlauer Str.");
        break;
    }
    case 86926:
    {
        returnValue = F("Dünzlinger Str.");
        break;
    }
    case 86927:
    {
        returnValue = F("Düpenau Eck");
        break;
    }
    case 86928:
    {
        returnValue = F("Düpenhöhe");
        break;
    }
    case 86929:
    {
        returnValue = F("Düpenweg");
        break;
    }
    case 86930:
    {
        returnValue = F("Düpenwisch");
        break;
    }
    case 86931:
    {
        returnValue = F("Düper Heckenweg");
        break;
    }
    case 86932:
    {
        returnValue = F("Düper Kirchweg");
        break;
    }
    case 86933:
    {
        returnValue = F("Düper Str.");
        break;
    }
    case 86934:
    {
        returnValue = F("Düpestr.");
        break;
    }
    case 86935:
    {
        returnValue = F("Düpmoor");
        break;
    }
    case 86936:
    {
        returnValue = F("Düpower Weg");
        break;
    }
    case 86937:
    {
        returnValue = F("Düpp");
        break;
    }
    case 86938:
    {
        returnValue = F("Düppeler Schanz");
        break;
    }
    case 86939:
    {
        returnValue = F("Düppeler Str.");
        break;
    }
    case 86940:
    {
        returnValue = F("Düppelstr.");
        break;
    }
    case 86941:
    {
        returnValue = F("Düppenbäckerweg");
        break;
    }
    case 86942:
    {
        returnValue = F("Düppenweilerstr.");
        break;
    }
    case 86943:
    {
        returnValue = F("Düppheide");
        break;
    }
    case 86944:
    {
        returnValue = F("Düppheider Weg");
        break;
    }
    case 86945:
    {
        returnValue = F("Düppler Grund");
        break;
    }
    case 86946:
    {
        returnValue = F("Düpteweg");
        break;
    }
    case 86947:
    {
        returnValue = F("Dür Tied");
        break;
    }
    case 86948:
    {
        returnValue = F("Dürbaumstr.");
        break;
    }
    case 86949:
    {
        returnValue = F("Dürbenstr.");
        break;
    }
    case 86950:
    {
        returnValue = F("Dürbheimer Str.");
        break;
    }
    case 86951:
    {
        returnValue = F("Dürboslarer Str.");
        break;
    }
    case 86952:
    {
        returnValue = F("Dürbruchschneise");
        break;
    }
    case 86953:
    {
        returnValue = F("Dürenbacher Str.");
        break;
    }
    case 86954:
    {
        returnValue = F("Dürener Str.");
        break;
    }
    case 86955:
    {
        returnValue = F("Dürener Weg");
        break;
    }
    case 86956:
    {
        returnValue = F("Dürenharth");
        break;
    }
    case 86957:
    {
        returnValue = F("Dürenkämpe");
        break;
    }
    case 86958:
    {
        returnValue = F("Dürer-Ring");
        break;
    }
    case 86959:
    {
        returnValue = F("Dürerbrücke");
        break;
    }
    case 86960:
    {
        returnValue = F("Dürerpark");
        break;
    }
    case 86961:
    {
        returnValue = F("Dürerplatz");
        break;
    }
    case 86962:
    {
        returnValue = F("Dürerpromenade");
        break;
    }
    case 86963:
    {
        returnValue = F("Dürerring");
        break;
    }
    case 86964:
    {
        returnValue = F("Dürerstr.");
        break;
    }
    case 86965:
    {
        returnValue = F("Dürerweg");
        break;
    }
    case 86966:
    {
        returnValue = F("Dürhagen");
        break;
    }
    case 86967:
    {
        returnValue = F("Dürichweg");
        break;
    }
    case 86968:
    {
        returnValue = F("Düringer Str.");
        break;
    }
    case 86969:
    {
        returnValue = F("Düringer Weg");
        break;
    }
    case 86970:
    {
        returnValue = F("Düringerstr.");
        break;
    }
    case 86971:
    {
        returnValue = F("Dürings Park");
        break;
    }
    case 86972:
    {
        returnValue = F("Düringstr.");
        break;
    }
    case 86973:
    {
        returnValue = F("Dürkheimer Hof");
        break;
    }
    case 86974:
    {
        returnValue = F("Dürkheimer Hohl");
        break;
    }
    case 86975:
    {
        returnValue = F("Dürkheimer Str.");
        break;
    }
    case 86976:
    {
        returnValue = F("Dürkheimer Weg");
        break;
    }
    case 86977:
    {
        returnValue = F("Dürkoppstr.");
        break;
    }
    case 86978:
    {
        returnValue = F("Dürleberg");
        break;
    }
    case 86979:
    {
        returnValue = F("Dürling");
        break;
    }
    case 86980:
    {
        returnValue = F("Dürmentinger Str.");
        break;
    }
    case 86981:
    {
        returnValue = F("Dürmerstr.");
        break;
    }
    case 86982:
    {
        returnValue = F("Dürmigsweg");
        break;
    }
    case 86983:
    {
        returnValue = F("Dürnachstr.");
        break;
    }
    case 86984:
    {
        returnValue = F("Dürnachweg");
        break;
    }
    case 86985:
    {
        returnValue = F("Dürnaster Hauptstr.");
        break;
    }
    case 86986:
    {
        returnValue = F("Dürnaster Weg");
        break;
    }
    case 86987:
    {
        returnValue = F("Dürnau");
        break;
    }
    case 86988:
    {
        returnValue = F("Dürnauer Str.");
        break;
    }
    case 86989:
    {
        returnValue = F("Dürnauer Weg");
        break;
    }
    case 86990:
    {
        returnValue = F("Dürnbacher Str.");
        break;
    }
    case 86991:
    {
        returnValue = F("Dürnbachstr.");
        break;
    }
    case 86992:
    {
        returnValue = F("Dürnberg");
        break;
    }
    case 86993:
    {
        returnValue = F("Dürnbergstr.");
        break;
    }
    case 86994:
    {
        returnValue = F("Dürnbergweg");
        break;
    }
    case 86995:
    {
        returnValue = F("Dürnecker Str.");
        break;
    }
    case 86996:
    {
        returnValue = F("Dürneggerstr.");
        break;
    }
    case 86997:
    {
        returnValue = F("Dürner Str.");
        break;
    }
    case 86998:
    {
        returnValue = F("Dürnersdorf");
        break;
    }
    case 86999:
    {
        returnValue = F("Dürnhag");
        break;
    }
    case 87000:
    {
        returnValue = F("Dürnharter Str.");
        break;
    }
    case 87001:
    {
        returnValue = F("Dürnhauser Str.");
        break;
    }
    case 87002:
    {
        returnValue = F("Dürnhof");
        break;
    }
    case 87003:
    {
        returnValue = F("Dürningerstr.");
        break;
    }
    case 87004:
    {
        returnValue = F("Dürnitzlstr.");
        break;
    }
    case 87005:
    {
        returnValue = F("Dürnsricht");
        break;
    }
    case 87006:
    {
        returnValue = F("Dürnwieserweg");
        break;
    }
    case 87007:
    {
        returnValue = F("Dürnwind");
        break;
    }
    case 87008:
    {
        returnValue = F("Dürpelweg");
        break;
    }
    case 87009:
    {
        returnValue = F("Dürr-Ellenbacher Weg");
        break;
    }
    case 87010:
    {
        returnValue = F("Dürr-Ellenbacher-Str.");
        break;
    }
    case 87011:
    {
        returnValue = F("Dürrachstr.");
        break;
    }
    case 87012:
    {
        returnValue = F("Dürrachweg");
        break;
    }
    case 87013:
    {
        returnValue = F("Dürrainhöfe");
        break;
    }
    case 87014:
    {
        returnValue = F("Dürranger");
        break;
    }
    case 87015:
    {
        returnValue = F("Dürrbach");
        break;
    }
    case 87016:
    {
        returnValue = F("Dürrbachallee");
        break;
    }
    case 87017:
    {
        returnValue = F("Dürrbacher Str.");
        break;
    }
    case 87018:
    {
        returnValue = F("Dürrbachmähder");
        break;
    }
    case 87019:
    {
        returnValue = F("Dürrbachstr.");
        break;
    }
    case 87020:
    {
        returnValue = F("Dürrbachtal");
        break;
    }
    case 87021:
    {
        returnValue = F("Dürrbachweg");
        break;
    }
    case 87022:
    {
        returnValue = F("Dürrbecks Landschaftsgarten");
        break;
    }
    case 87023:
    {
        returnValue = F("Dürrbergsteig");
        break;
    }
    case 87024:
    {
        returnValue = F("Dürrbergweg");
        break;
    }
    case 87025:
    {
        returnValue = F("Dürrbeundstr.");
        break;
    }
    case 87026:
    {
        returnValue = F("Dürrbruchschneise");
        break;
    }
    case 87027:
    {
        returnValue = F("Dürrbrunner Str.");
        break;
    }
    case 87028:
    {
        returnValue = F("Dürre Gärten");
        break;
    }
    case 87029:
    {
        returnValue = F("Dürre Henne");
        break;
    }
    case 87030:
    {
        returnValue = F("Dürre Laube");
        break;
    }
    case 87031:
    {
        returnValue = F("Dürre Lauter");
        break;
    }
    case 87032:
    {
        returnValue = F("Dürre Planie");
        break;
    }
    case 87033:
    {
        returnValue = F("Dürre Weid");
        break;
    }
    case 87034:
    {
        returnValue = F("Dürre Wiese");
        break;
    }
    case 87035:
    {
        returnValue = F("Dürre Äcker");
        break;
    }
    case 87036:
    {
        returnValue = F("Dürrebergweg");
        break;
    }
    case 87037:
    {
        returnValue = F("Dürrebruch");
        break;
    }
    case 87038:
    {
        returnValue = F("Dürreflussweg");
        break;
    }
    case 87039:
    {
        returnValue = F("Dürregartweg");
        break;
    }
    case 87040:
    {
        returnValue = F("Dürregrund-Weg");
        break;
    }
    case 87041:
    {
        returnValue = F("Dürren");
        break;
    }
    case 87042:
    {
        returnValue = F("Dürrenbach");
        break;
    }
    case 87043:
    {
        returnValue = F("Dürrenbacher Hütte");
        break;
    }
    case 87044:
    {
        returnValue = F("Dürrenbachsteig");
        break;
    }
    case 87045:
    {
        returnValue = F("Dürrenbachstr.");
        break;
    }
    case 87046:
    {
        returnValue = F("Dürrenbachweg");
        break;
    }
    case 87047:
    {
        returnValue = F("Dürrenbachwiesenweg");
        break;
    }
    case 87048:
    {
        returnValue = F("Dürrenberg");
        break;
    }
    case 87049:
    {
        returnValue = F("Dürrenberger Ring");
        break;
    }
    case 87050:
    {
        returnValue = F("Dürrenberger Str.");
        break;
    }
    case 87051:
    {
        returnValue = F("Dürrenberggasse");
        break;
    }
    case 87052:
    {
        returnValue = F("Dürrenbergstr.");
        break;
    }
    case 87053:
    {
        returnValue = F("Dürrenbergweg");
        break;
    }
    case 87054:
    {
        returnValue = F("Dürrenbüchiger Str.");
        break;
    }
    case 87055:
    {
        returnValue = F("Dürrenbüchiger Weg");
        break;
    }
    case 87056:
    {
        returnValue = F("Dürrenbühlstr.");
        break;
    }
    case 87057:
    {
        returnValue = F("Dürrenbühlweg");
        break;
    }
    case 87058:
    {
        returnValue = F("Dürrenebersdorfer Str.");
        break;
    }
    case 87059:
    {
        returnValue = F("Dürrenebersdorfer Wand");
        break;
    }
    case 87060:
    {
        returnValue = F("Dürrengasse");
        break;
    }
    case 87061:
    {
        returnValue = F("Dürrengleina");
        break;
    }
    case 87062:
    {
        returnValue = F("Dürrengrüner Weg");
        break;
    }
    case 87063:
    {
        returnValue = F("Dürrengässle");
        break;
    }
    case 87064:
    {
        returnValue = F("Dürrenhembach");
        break;
    }
    case 87065:
    {
        returnValue = F("Dürrenhembacher Str.");
        break;
    }
    case 87066:
    {
        returnValue = F("Dürrenhembacher Weg");
        break;
    }
    case 87067:
    {
        returnValue = F("Dürrenhofstr.");
        break;
    }
    case 87068:
    {
        returnValue = F("Dürrenkamp");
        break;
    }
    case 87069:
    {
        returnValue = F("Dürrenloher Str.");
        break;
    }
    case 87070:
    {
        returnValue = F("Dürrenlohweg");
        break;
    }
    case 87071:
    {
        returnValue = F("Dürrenmatten");
        break;
    }
    case 87072:
    {
        returnValue = F("Dürrenmattstr.");
        break;
    }
    case 87073:
    {
        returnValue = F("Dürrenmettstetter Str.");
        break;
    }
    case 87074:
    {
        returnValue = F("Dürrenmungenauer Weg");
        break;
    }
    case 87075:
    {
        returnValue = F("Dürrenpesch");
        break;
    }
    case 87076:
    {
        returnValue = F("Dürrenrieder Str.");
        break;
    }
    case 87077:
    {
        returnValue = F("Dürrenseestr.");
        break;
    }
    case 87078:
    {
        returnValue = F("Dürrenstetten");
        break;
    }
    case 87079:
    {
        returnValue = F("Dürrenstetter Str.");
        break;
    }
    case 87080:
    {
        returnValue = F("Dürrenstr.");
        break;
    }
    case 87081:
    {
        returnValue = F("Dürrentalweg");
        break;
    }
    case 87082:
    {
        returnValue = F("Dürrenwaider Str.");
        break;
    }
    case 87083:
    {
        returnValue = F("Dürrenzimmerner Str.");
        break;
    }
    case 87084:
    {
        returnValue = F("Dürrer Bach");
        break;
    }
    case 87085:
    {
        returnValue = F("Dürrer Berg");
        break;
    }
    case 87086:
    {
        returnValue = F("Dürrer Buckel");
        break;
    }
    case 87087:
    {
        returnValue = F("Dürrer Fuchs");
        break;
    }
    case 87088:
    {
        returnValue = F("Dürrer Grund");
        break;
    }
    case 87089:
    {
        returnValue = F("Dürrer Hagen");
        break;
    }
    case 87090:
    {
        returnValue = F("Dürrer Holzweg");
        break;
    }
    case 87091:
    {
        returnValue = F("Dürrer Hügel");
        break;
    }
    case 87092:
    {
        returnValue = F("Dürrer Rain");
        break;
    }
    case 87093:
    {
        returnValue = F("Dürrer Schlag");
        break;
    }
    case 87094:
    {
        returnValue = F("Dürrer-Grund-Weg");
        break;
    }
    case 87095:
    {
        returnValue = F("Dürrerbuckweg");
        break;
    }
    case 87096:
    {
        returnValue = F("Dürrergrundweg");
        break;
    }
    case 87097:
    {
        returnValue = F("Dürrerhof");
        break;
    }
    case 87098:
    {
        returnValue = F("Dürrerhöfer Allee");
        break;
    }
    case 87099:
    {
        returnValue = F("Dürreseeweg");
        break;
    }
    case 87100:
    {
        returnValue = F("Dürrestr.");
        break;
    }
    case 87101:
    {
        returnValue = F("Dürreychweg");
        break;
    }
    case 87102:
    {
        returnValue = F("Dürrfelder Str.");
        break;
    }
    case 87103:
    {
        returnValue = F("Dürrfeldweg");
        break;
    }
    case 87104:
    {
        returnValue = F("Dürrgasse");
        break;
    }
    case 87105:
    {
        returnValue = F("Dürrgut");
        break;
    }
    case 87106:
    {
        returnValue = F("Dürrhaldenweg");
        break;
    }
    case 87107:
    {
        returnValue = F("Dürrheimer Str.");
        break;
    }
    case 87108:
    {
        returnValue = F("Dürrhennersdorfer Str.");
        break;
    }
    case 87109:
    {
        returnValue = F("Dürrhof");
        break;
    }
    case 87110:
    {
        returnValue = F("Dürrhoffeld");
        break;
    }
    case 87111:
    {
        returnValue = F("Dürrhofstr.");
        break;
    }
    case 87112:
    {
        returnValue = F("Dürrhofweg");
        break;
    }
    case 87113:
    {
        returnValue = F("Dürringsgraben");
        break;
    }
    case 87114:
    {
        returnValue = F("Dürriweg");
        break;
    }
    case 87115:
    {
        returnValue = F("Dürrköpfle Weg");
        break;
    }
    case 87116:
    {
        returnValue = F("Dürrlacher Weg");
        break;
    }
    case 87117:
    {
        returnValue = F("Dürrlauinger Str.");
        break;
    }
    case 87118:
    {
        returnValue = F("Dürrlaustr.");
        break;
    }
    case 87119:
    {
        returnValue = F("Dürrlauweg");
        break;
    }
    case 87120:
    {
        returnValue = F("Dürrleitengrund");
        break;
    }
    case 87121:
    {
        returnValue = F("Dürrlewangweg");
        break;
    }
    case 87122:
    {
        returnValue = F("Dürrmenzer Weg");
        break;
    }
    case 87123:
    {
        returnValue = F("Dürrmühle");
        break;
    }
    case 87124:
    {
        returnValue = F("Dürrnast");
        break;
    }
    case 87125:
    {
        returnValue = F("Dürrnaststr.");
        break;
    }
    case 87126:
    {
        returnValue = F("Dürrnbachhornweg");
        break;
    }
    case 87127:
    {
        returnValue = F("Dürrnbergstr.");
        break;
    }
    case 87128:
    {
        returnValue = F("Dürrnbergweg");
        break;
    }
    case 87129:
    {
        returnValue = F("Dürrnbuch");
        break;
    }
    case 87130:
    {
        returnValue = F("Dürrnbucher Str.");
        break;
    }
    case 87131:
    {
        returnValue = F("Dürrnbucher Weg");
        break;
    }
    case 87132:
    {
        returnValue = F("Dürrner Str.");
        break;
    }
    case 87133:
    {
        returnValue = F("Dürrner Weg");
        break;
    }
    case 87134:
    {
        returnValue = F("Dürrnerstr.");
        break;
    }
    case 87135:
    {
        returnValue = F("Dürrnhaarer Str.");
        break;
    }
    case 87136:
    {
        returnValue = F("Dürrnhaarer-Geräumt");
        break;
    }
    case 87137:
    {
        returnValue = F("Dürrröhrsdorfer Str.");
        break;
    }
    case 87138:
    {
        returnValue = F("Dürrsbergweg");
        break;
    }
    case 87139:
    {
        returnValue = F("Dürrschingring");
        break;
    }
    case 87140:
    {
        returnValue = F("Dürrsteiner Weg");
        break;
    }
    case 87141:
    {
        returnValue = F("Dürrsteinweg");
        break;
    }
    case 87142:
    {
        returnValue = F("Dürrstr.");
        break;
    }
    case 87143:
    {
        returnValue = F("Dürrstückrichtstatt");
        break;
    }
    case 87144:
    {
        returnValue = F("Dürrwanger Str.");
        break;
    }
    case 87145:
    {
        returnValue = F("Dürrweg");
        break;
    }
    case 87146:
    {
        returnValue = F("Dürrweitzschen");
        break;
    }
    case 87147:
    {
        returnValue = F("Dürrweitzschener Str.");
        break;
    }
    case 87148:
    {
        returnValue = F("Dürrwiesen");
        break;
    }
    case 87149:
    {
        returnValue = F("Dürrwiesenstr.");
        break;
    }
    case 87150:
    {
        returnValue = F("Dürrwiesenweg");
        break;
    }
    case 87151:
    {
        returnValue = F("Dürrwieser Str.");
        break;
    }
    case 87152:
    {
        returnValue = F("Dürrwächterstr.");
        break;
    }
    case 87153:
    {
        returnValue = F("Dürräckerweg");
        break;
    }
    case 87154:
    {
        returnValue = F("Dürscheider Hütte");
        break;
    }
    case 87155:
    {
        returnValue = F("Dürscheider Mühle");
        break;
    }
    case 87156:
    {
        returnValue = F("Dürscheider Str.");
        break;
    }
    case 87157:
    {
        returnValue = F("Dürscheider Weg");
        break;
    }
    case 87158:
    {
        returnValue = F("Dürschnitz");
        break;
    }
    case 87159:
    {
        returnValue = F("Dürschtalstr.");
        break;
    }
    case 87160:
    {
        returnValue = F("Dürschweg");
        break;
    }
    case 87161:
    {
        returnValue = F("Dürselen");
        break;
    }
    case 87162:
    {
        returnValue = F("Dürtenweg");
        break;
    }
    case 87163:
    {
        returnValue = F("Dürwißer Kirchweg");
        break;
    }
    case 87164:
    {
        returnValue = F("Düsbergstr.");
        break;
    }
    case 87165:
    {
        returnValue = F("Düsbergweg");
        break;
    }
    case 87166:
    {
        returnValue = F("Düserhofstr.");
        break;
    }
    case 87167:
    {
        returnValue = F("Düserweg");
        break;
    }
    case 87168:
    {
        returnValue = F("Düshook");
        break;
    }
    case 87169:
    {
        returnValue = F("Düshop");
        break;
    }
    case 87170:
    {
        returnValue = F("Düshorner Landstr.");
        break;
    }
    case 87171:
    {
        returnValue = F("Düshorner Str.");
        break;
    }
    case 87172:
    {
        returnValue = F("Düsingstr.");
        break;
    }
    case 87173:
    {
        returnValue = F("Düsingweg");
        break;
    }
    case 87174:
    {
        returnValue = F("Düsitalerweg");
        break;
    }
    case 87175:
    {
        returnValue = F("Düsselbachweg");
        break;
    }
    case 87176:
    {
        returnValue = F("Düsselberger Str.");
        break;
    }
    case 87177:
    {
        returnValue = F("Düsseldorfer Platz");
        break;
    }
    case 87178:
    {
        returnValue = F("Düsseldorfer Ring");
        break;
    }
    case 87179:
    {
        returnValue = F("Düsseldorfer Str.");
        break;
    }
    case 87180:
    {
        returnValue = F("Düsseldorfer Weg");
        break;
    }
    case 87181:
    {
        returnValue = F("Düsseler Feld");
        break;
    }
    case 87182:
    {
        returnValue = F("Düsseler Str.");
        break;
    }
    case 87183:
    {
        returnValue = F("Düsselring");
        break;
    }
    case 87184:
    {
        returnValue = F("Düsselstr.");
        break;
    }
    case 87185:
    {
        returnValue = F("Düsseltalstr.");
        break;
    }
    case 87186:
    {
        returnValue = F("Düsselweg");
        break;
    }
    case 87187:
    {
        returnValue = F("Düssen Berg");
        break;
    }
    case 87188:
    {
        returnValue = F("Düssiner Str.");
        break;
    }
    case 87189:
    {
        returnValue = F("Düssler Weg");
        break;
    }
    case 87190:
    {
        returnValue = F("Düste");
        break;
    }
    case 87191:
    {
        returnValue = F("Düstelstücken");
        break;
    }
    case 87192:
    {
        returnValue = F("Düster Möll");
        break;
    }
    case 87193:
    {
        returnValue = F("Düster Pad");
        break;
    }
    case 87194:
    {
        returnValue = F("Düster Stegge");
        break;
    }
    case 87195:
    {
        returnValue = F("Düster Weg");
        break;
    }
    case 87196:
    {
        returnValue = F("Düsterbeck");
        break;
    }
    case 87197:
    {
        returnValue = F("Düsterbäksweg");
        break;
    }
    case 87198:
    {
        returnValue = F("Düstere Gasse");
        break;
    }
    case 87199:
    {
        returnValue = F("Düstere Str.");
        break;
    }
    case 87200:
    {
        returnValue = F("Düstere Talstr.");
        break;
    }
    case 87201:
    {
        returnValue = F("Düstere-Eichen-Weg");
        break;
    }
    case 87202:
    {
        returnValue = F("Düsterer Grund");
        break;
    }
    case 87203:
    {
        returnValue = F("Düsterer Kamp");
        break;
    }
    case 87204:
    {
        returnValue = F("Düsterer Pump");
        break;
    }
    case 87205:
    {
        returnValue = F("Düsteres Tor");
        break;
    }
    case 87206:
    {
        returnValue = F("Düsterförde");
        break;
    }
    case 87207:
    {
        returnValue = F("Düsterförde-Sägewerk");
        break;
    }
    case 87208:
    {
        returnValue = F("Düstergasse");
        break;
    }
    case 87209:
    {
        returnValue = F("Düstergatt");
        break;
    }
    case 87210:
    {
        returnValue = F("Düstergrund");
        break;
    }
    case 87211:
    {
        returnValue = F("Düsterhoopring");
        break;
    }
    case 87212:
    {
        returnValue = F("Düsterhorst");
        break;
    }
    case 87213:
    {
        returnValue = F("Düsterkammer");
        break;
    }
    case 87214:
    {
        returnValue = F("Düsterlau");
        break;
    }
    case 87215:
    {
        returnValue = F("Düsterlohe");
        break;
    }
    case 87216:
    {
        returnValue = F("Düsterlohstr.");
        break;
    }
    case 87217:
    {
        returnValue = F("Düstermühlenweg");
        break;
    }
    case 87218:
    {
        returnValue = F("Düstern-Bongert");
        break;
    }
    case 87219:
    {
        returnValue = F("Düsternbrook");
        break;
    }
    case 87220:
    {
        returnValue = F("Düsternbrooker Weg");
        break;
    }
    case 87221:
    {
        returnValue = F("Düsterneichen");
        break;
    }
    case 87222:
    {
        returnValue = F("Düsternfohr");
        break;
    }
    case 87223:
    {
        returnValue = F("Düsterngraben");
        break;
    }
    case 87224:
    {
        returnValue = F("Düsterngrund");
        break;
    }
    case 87225:
    {
        returnValue = F("Düsternheide");
        break;
    }
    case 87226:
    {
        returnValue = F("Düsternhoop");
        break;
    }
    case 87227:
    {
        returnValue = F("Düsternhorst");
        break;
    }
    case 87228:
    {
        returnValue = F("Düsternhöpen");
        break;
    }
    case 87229:
    {
        returnValue = F("Düsternhöpenweg");
        break;
    }
    case 87230:
    {
        returnValue = F("Düsternkamp");
        break;
    }
    case 87231:
    {
        returnValue = F("Düsternortstr.");
        break;
    }
    case 87232:
    {
        returnValue = F("Düsternsiek");
        break;
    }
    case 87233:
    {
        returnValue = F("Düsternsiepen");
        break;
    }
    case 87234:
    {
        returnValue = F("Düsternsiepener Weg");
        break;
    }
    case 87235:
    {
        returnValue = F("Düsternstr.");
        break;
    }
    case 87236:
    {
        returnValue = F("Düsterntal");
        break;
    }
    case 87237:
    {
        returnValue = F("Düsterntwete");
        break;
    }
    case 87238:
    {
        returnValue = F("Düsterntwiete");
        break;
    }
    case 87239:
    {
        returnValue = F("Düsternweg");
        break;
    }
    case 87240:
    {
        returnValue = F("Düsterpoth");
        break;
    }
    case 87241:
    {
        returnValue = F("Düsterseesiedlung");
        break;
    }
    case 87242:
    {
        returnValue = F("Düstersgäßchen");
        break;
    }
    case 87243:
    {
        returnValue = F("Düstersiekweg");
        break;
    }
    case 87244:
    {
        returnValue = F("Düsterstr.");
        break;
    }
    case 87245:
    {
        returnValue = F("Düstertal");
        break;
    }
    case 87246:
    {
        returnValue = F("Düstertalweg");
        break;
    }
    case 87247:
    {
        returnValue = F("Düsterweg");
        break;
    }
    case 87248:
    {
        returnValue = F("Düstholz");
        break;
    }
    case 87249:
    {
        returnValue = F("Düstnishy");
        break;
    }
    case 87250:
    {
        returnValue = F("Düstre Str.");
        break;
    }
    case 87251:
    {
        returnValue = F("Düstruper Heide");
        break;
    }
    case 87252:
    {
        returnValue = F("Düstruper Kirchweg");
        break;
    }
    case 87253:
    {
        returnValue = F("Düstruper Str.");
        break;
    }
    case 87254:
    {
        returnValue = F("Düteesch");
        break;
    }
    case 87255:
    {
        returnValue = F("Dütefeld");
        break;
    }
    case 87256:
    {
        returnValue = F("Dütehain");
        break;
    }
    case 87257:
    {
        returnValue = F("Düter Str.");
        break;
    }
    case 87258:
    {
        returnValue = F("Dütestr.");
        break;
    }
    case 87259:
    {
        returnValue = F("Dütesundern");
        break;
    }
    case 87260:
    {
        returnValue = F("Düteweg");
        break;
    }
    case 87261:
    {
        returnValue = F("Düth");
        break;
    }
    case 87262:
    {
        returnValue = F("Düther Str.");
        break;
    }
    case 87263:
    {
        returnValue = F("Düther Torfweg");
        break;
    }
    case 87264:
    {
        returnValue = F("Dütlingstalweg");
        break;
    }
    case 87265:
    {
        returnValue = F("Dütschfeldredder");
        break;
    }
    case 87266:
    {
        returnValue = F("Düttebüll");
        break;
    }
    case 87267:
    {
        returnValue = F("Düttebüllschmiede");
        break;
    }
    case 87268:
    {
        returnValue = F("Düttelstr.");
        break;
    }
    case 87269:
    {
        returnValue = F("Düttingdorfer Str.");
        break;
    }
    case 87270:
    {
        returnValue = F("Düttingstr.");
        break;
    }
    case 87271:
    {
        returnValue = F("Düttling");
        break;
    }
    case 87272:
    {
        returnValue = F("Düttlinger Str.");
        break;
    }
    case 87273:
    {
        returnValue = F("Düttnis");
        break;
    }
    case 87274:
    {
        returnValue = F("Düttstein");
        break;
    }
    case 87275:
    {
        returnValue = F("Dützhofer Weg");
        break;
    }
    case 87276:
    {
        returnValue = F("Düveleistr.");
        break;
    }
    case 87277:
    {
        returnValue = F("Düvelsbadweg");
        break;
    }
    case 87278:
    {
        returnValue = F("Düvelsbarg");
        break;
    }
    case 87279:
    {
        returnValue = F("Düvelsbeker Weg");
        break;
    }
    case 87280:
    {
        returnValue = F("Düvelsbrook");
        break;
    }
    case 87281:
    {
        returnValue = F("Düvelsbrooker Weg");
        break;
    }
    case 87282:
    {
        returnValue = F("Düvelshörn");
        break;
    }
    case 87283:
    {
        returnValue = F("Düvelshörner Weg");
        break;
    }
    case 87284:
    {
        returnValue = F("Düvelstr.");
        break;
    }
    case 87285:
    {
        returnValue = F("Düversbrucher Str.");
        break;
    }
    case 87286:
    {
        returnValue = F("Düvier");
        break;
    }
    case 87287:
    {
        returnValue = F("Düvier Chaussee");
        break;
    }
    case 87288:
    {
        returnValue = F("Düvland");
        break;
    }
    case 87289:
    {
        returnValue = F("Düwellstr.");
        break;
    }
    case 87290:
    {
        returnValue = F("Düwelschneise");
        break;
    }
    case 87291:
    {
        returnValue = F("Düwelshook");
        break;
    }
    case 87292:
    {
        returnValue = F("Düwelshoopsmoorweg");
        break;
    }
    case 87293:
    {
        returnValue = F("Düwelsmeer");
        break;
    }
    case 87294:
    {
        returnValue = F("Düwelsmühlensiek");
        break;
    }
    case 87295:
    {
        returnValue = F("Düwelsteensweg");
        break;
    }
    case 87296:
    {
        returnValue = F("Düwing Dyk");
        break;
    }
    case 87297:
    {
        returnValue = F("Düßnitzer Str.");
        break;
    }
    case 87298:
    {
        returnValue = F("Düüwdääl");
        break;
    }
    }
    return returnValue;
}
