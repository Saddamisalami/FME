#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameK2(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 180018:
    {
        returnValue = F("Kapellerstr.");
        break;
    }
    case 180019:
    {
        returnValue = F("Kapellesberg");
        break;
    }
    case 180020:
    {
        returnValue = F("Kapelleschweg");
        break;
    }
    case 180021:
    {
        returnValue = F("Kapellestr.");
        break;
    }
    case 180022:
    {
        returnValue = F("Kapellewasen");
        break;
    }
    case 180023:
    {
        returnValue = F("Kapellfeldstr.");
        break;
    }
    case 180024:
    {
        returnValue = F("Kapellgartenstr.");
        break;
    }
    case 180025:
    {
        returnValue = F("Kapellgasse");
        break;
    }
    case 180026:
    {
        returnValue = F("Kapellhalden");
        break;
    }
    case 180027:
    {
        returnValue = F("Kapellhaus");
        break;
    }
    case 180028:
    {
        returnValue = F("Kapellhofstr.");
        break;
    }
    case 180029:
    {
        returnValue = F("Kapellleite");
        break;
    }
    case 180030:
    {
        returnValue = F("Kapellmattstr.");
        break;
    }
    case 180031:
    {
        returnValue = F("Kapellmeister-Pinsel-Str.");
        break;
    }
    case 180032:
    {
        returnValue = F("Kapellmeisterweg");
        break;
    }
    case 180033:
    {
        returnValue = F("Kapellmühle");
        break;
    }
    case 180034:
    {
        returnValue = F("Kapellplatz");
        break;
    }
    case 180035:
    {
        returnValue = F("Kapellrain");
        break;
    }
    case 180036:
    {
        returnValue = F("Kapellschneise");
        break;
    }
    case 180037:
    {
        returnValue = F("Kapellstr.");
        break;
    }
    case 180038:
    {
        returnValue = F("Kapellweg");
        break;
    }
    case 180039:
    {
        returnValue = F("Kapelläckerstr.");
        break;
    }
    case 180040:
    {
        returnValue = F("Kapenberg");
        break;
    }
    case 180041:
    {
        returnValue = F("Kapenbergstr.");
        break;
    }
    case 180042:
    {
        returnValue = F("Kapenstr.");
        break;
    }
    case 180043:
    {
        returnValue = F("Kapenweg");
        break;
    }
    case 180044:
    {
        returnValue = F("Kaperberg");
        break;
    }
    case 180045:
    {
        returnValue = F("Kaperdeich");
        break;
    }
    case 180046:
    {
        returnValue = F("Kaperei");
        break;
    }
    case 180047:
    {
        returnValue = F("Kapericher Str.");
        break;
    }
    case 180048:
    {
        returnValue = F("Kapermoorsche Bahn");
        break;
    }
    case 180049:
    {
        returnValue = F("Kapersburgsiedlung");
        break;
    }
    case 180050:
    {
        returnValue = F("Kapersburgstr.");
        break;
    }
    case 180051:
    {
        returnValue = F("Kapersburgweg");
        break;
    }
    case 180052:
    {
        returnValue = F("Kapf");
        break;
    }
    case 180053:
    {
        returnValue = F("Kapfberg");
        break;
    }
    case 180054:
    {
        returnValue = F("Kapfbühlstr.");
        break;
    }
    case 180055:
    {
        returnValue = F("Kapfebeneweg");
        break;
    }
    case 180056:
    {
        returnValue = F("Kapfenberg");
        break;
    }
    case 180057:
    {
        returnValue = F("Kapfenberger Str.");
        break;
    }
    case 180058:
    {
        returnValue = F("Kapfenberger Weg");
        break;
    }
    case 180059:
    {
        returnValue = F("Kapfenbergerstr.");
        break;
    }
    case 180060:
    {
        returnValue = F("Kapfenbergweg");
        break;
    }
    case 180061:
    {
        returnValue = F("Kapfenburger");
        break;
    }
    case 180062:
    {
        returnValue = F("Kapfenburger Str.");
        break;
    }
    case 180063:
    {
        returnValue = F("Kapfenburgstr.");
        break;
    }
    case 180064:
    {
        returnValue = F("Kapfengasse");
        break;
    }
    case 180065:
    {
        returnValue = F("Kapfenhardter Str.");
        break;
    }
    case 180066:
    {
        returnValue = F("Kapfenhardter Tal");
        break;
    }
    case 180067:
    {
        returnValue = F("Kapfenweg");
        break;
    }
    case 180068:
    {
        returnValue = F("Kapfer Str.");
        break;
    }
    case 180069:
    {
        returnValue = F("Kapferstr.");
        break;
    }
    case 180070:
    {
        returnValue = F("Kapffstr.");
        break;
    }
    case 180071:
    {
        returnValue = F("Kapfgasse");
        break;
    }
    case 180072:
    {
        returnValue = F("Kapfham");
        break;
    }
    case 180073:
    {
        returnValue = F("Kapfhofweg");
        break;
    }
    case 180074:
    {
        returnValue = F("Kapfholzer Weg");
        break;
    }
    case 180075:
    {
        returnValue = F("Kapfklinge");
        break;
    }
    case 180076:
    {
        returnValue = F("Kapfrain");
        break;
    }
    case 180077:
    {
        returnValue = F("Kapfreute");
        break;
    }
    case 180078:
    {
        returnValue = F("Kapfstr.");
        break;
    }
    case 180079:
    {
        returnValue = F("Kapftor");
        break;
    }
    case 180080:
    {
        returnValue = F("Kapfwaldweg");
        break;
    }
    case 180081:
    {
        returnValue = F("Kapfweg");
        break;
    }
    case 180082:
    {
        returnValue = F("Kaphofstr.");
        break;
    }
    case 180083:
    {
        returnValue = F("Kaphofweg");
        break;
    }
    case 180084:
    {
        returnValue = F("Kapitalweg");
        break;
    }
    case 180085:
    {
        returnValue = F("Kapitel");
        break;
    }
    case 180086:
    {
        returnValue = F("Kapitelacker");
        break;
    }
    case 180087:
    {
        returnValue = F("Kapitelholzsteig");
        break;
    }
    case 180088:
    {
        returnValue = F("Kapitelplatz");
        break;
    }
    case 180089:
    {
        returnValue = F("Kapitelsberg");
        break;
    }
    case 180090:
    {
        returnValue = F("Kapitelsdörfer Kirchweg");
        break;
    }
    case 180091:
    {
        returnValue = F("Kapitelshof");
        break;
    }
    case 180092:
    {
        returnValue = F("Kapitelstr.");
        break;
    }
    case 180093:
    {
        returnValue = F("Kapitelsweg");
        break;
    }
    case 180094:
    {
        returnValue = F("Kapitelweg");
        break;
    }
    case 180095:
    {
        returnValue = F("Kapitelwiese");
        break;
    }
    case 180096:
    {
        returnValue = F("Kapitolstr.");
        break;
    }
    case 180097:
    {
        returnValue = F("Kapitän-Alexander-Str.");
        break;
    }
    case 180098:
    {
        returnValue = F("Kapitän-Altmeppen-Str.");
        break;
    }
    case 180099:
    {
        returnValue = F("Kapitän-Ballehr-Str.");
        break;
    }
    case 180100:
    {
        returnValue = F("Kapitän-Borgwardt-Weg");
        break;
    }
    case 180101:
    {
        returnValue = F("Kapitän-Christiansen-Platz");
        break;
    }
    case 180102:
    {
        returnValue = F("Kapitän-Dallmann-Str.");
        break;
    }
    case 180103:
    {
        returnValue = F("Kapitän-Flemming-Str.");
        break;
    }
    case 180104:
    {
        returnValue = F("Kapitän-Focken-Weg");
        break;
    }
    case 180105:
    {
        returnValue = F("Kapitän-Gautier-Str.");
        break;
    }
    case 180106:
    {
        returnValue = F("Kapitän-Goldschweer-Str.");
        break;
    }
    case 180107:
    {
        returnValue = F("Kapitän-Hahn-Weg");
        break;
    }
    case 180108:
    {
        returnValue = F("Kapitän-Hermanns-Str.");
        break;
    }
    case 180109:
    {
        returnValue = F("Kapitän-Koldewey-Str.");
        break;
    }
    case 180110:
    {
        returnValue = F("Kapitän-Kraeplin-Weg");
        break;
    }
    case 180111:
    {
        returnValue = F("Kapitän-König-Weg");
        break;
    }
    case 180112:
    {
        returnValue = F("Kapitän-Lammers-Str.");
        break;
    }
    case 180113:
    {
        returnValue = F("Kapitän-Lange-Str.");
        break;
    }
    case 180114:
    {
        returnValue = F("Kapitän-Lehmann-Ring");
        break;
    }
    case 180115:
    {
        returnValue = F("Kapitän-Lehmann-Str.");
        break;
    }
    case 180116:
    {
        returnValue = F("Kapitän-Lehmann-Weg");
        break;
    }
    case 180117:
    {
        returnValue = F("Kapitän-Lorenz-Ufer");
        break;
    }
    case 180118:
    {
        returnValue = F("Kapitän-Lüken-Str.");
        break;
    }
    case 180119:
    {
        returnValue = F("Kapitän-Mammes-Str.");
        break;
    }
    case 180120:
    {
        returnValue = F("Kapitän-Meerjanssen-Str.");
        break;
    }
    case 180121:
    {
        returnValue = F("Kapitän-Mencke-Str.");
        break;
    }
    case 180122:
    {
        returnValue = F("Kapitän-Missel-Str.");
        break;
    }
    case 180123:
    {
        returnValue = F("Kapitän-Müllmann-Str.");
        break;
    }
    case 180124:
    {
        returnValue = F("Kapitän-Nauer-Str.");
        break;
    }
    case 180125:
    {
        returnValue = F("Kapitän-Nissen-Str.");
        break;
    }
    case 180126:
    {
        returnValue = F("Kapitän-Oltmanns-Str.");
        break;
    }
    case 180127:
    {
        returnValue = F("Kapitän-Paulsen-Weg");
        break;
    }
    case 180128:
    {
        returnValue = F("Kapitän-Poelmann-Str.");
        break;
    }
    case 180129:
    {
        returnValue = F("Kapitän-Romer-Str.");
        break;
    }
    case 180130:
    {
        returnValue = F("Kapitän-Röttgers-Str.");
        break;
    }
    case 180131:
    {
        returnValue = F("Kapitän-Rüter-Str.");
        break;
    }
    case 180132:
    {
        returnValue = F("Kapitän-Sandmann-Str.");
        break;
    }
    case 180133:
    {
        returnValue = F("Kapitän-Sassen-Str.");
        break;
    }
    case 180134:
    {
        returnValue = F("Kapitän-Schleinhege-Str.");
        break;
    }
    case 180135:
    {
        returnValue = F("Kapitän-Schönke-Str.");
        break;
    }
    case 180136:
    {
        returnValue = F("Kapitän-Stefens-Str.");
        break;
    }
    case 180137:
    {
        returnValue = F("Kapitän-Strack-Str.");
        break;
    }
    case 180138:
    {
        returnValue = F("Kapitän-Strasser-Str.");
        break;
    }
    case 180139:
    {
        returnValue = F("Kapitän-Suthmeier-Weg");
        break;
    }
    case 180140:
    {
        returnValue = F("Kapitän-Velthaus-Str.");
        break;
    }
    case 180141:
    {
        returnValue = F("Kapitän-Venema-Str.");
        break;
    }
    case 180142:
    {
        returnValue = F("Kapitän-Wagner-Str.");
        break;
    }
    case 180143:
    {
        returnValue = F("Kapitän-Wittenberg-Str.");
        break;
    }
    case 180144:
    {
        returnValue = F("Kapitän-Zander-Str.");
        break;
    }
    case 180145:
    {
        returnValue = F("Kapitän-von-Müller-Str.");
        break;
    }
    case 180146:
    {
        returnValue = F("Kapitän-von-Schiller-Str.");
        break;
    }
    case 180147:
    {
        returnValue = F("Kapitänsgang");
        break;
    }
    case 180148:
    {
        returnValue = F("Kapitänspromenade");
        break;
    }
    case 180149:
    {
        returnValue = F("Kapitänsring");
        break;
    }
    case 180150:
    {
        returnValue = F("Kapitänsstr.");
        break;
    }
    case 180151:
    {
        returnValue = F("Kapitänstr.");
        break;
    }
    case 180152:
    {
        returnValue = F("Kapitänsweg");
        break;
    }
    case 180153:
    {
        returnValue = F("Kaplan-Beller-Str.");
        break;
    }
    case 180154:
    {
        returnValue = F("Kaplan-Büscher-Str.");
        break;
    }
    case 180155:
    {
        returnValue = F("Kaplan-Dasbach-Str.");
        break;
    }
    case 180156:
    {
        returnValue = F("Kaplan-Dopp-Str.");
        break;
    }
    case 180157:
    {
        returnValue = F("Kaplan-Fresenborg-Str.");
        break;
    }
    case 180158:
    {
        returnValue = F("Kaplan-Hahn-Str.");
        break;
    }
    case 180159:
    {
        returnValue = F("Kaplan-Heuer-Weg");
        break;
    }
    case 180160:
    {
        returnValue = F("Kaplan-Jäger-Str.");
        break;
    }
    case 180161:
    {
        returnValue = F("Kaplan-Kalt-Str.");
        break;
    }
    case 180162:
    {
        returnValue = F("Kaplan-Keller-Str.");
        break;
    }
    case 180163:
    {
        returnValue = F("Kaplan-Kellermann-Str.");
        break;
    }
    case 180164:
    {
        returnValue = F("Kaplan-Küppers-Str.");
        break;
    }
    case 180165:
    {
        returnValue = F("Kaplan-Küppers-Weg");
        break;
    }
    case 180166:
    {
        returnValue = F("Kaplan-Luttmann-Str.");
        break;
    }
    case 180167:
    {
        returnValue = F("Kaplan-Martin-Weg");
        break;
    }
    case 180168:
    {
        returnValue = F("Kaplan-Merkle-Str.");
        break;
    }
    case 180169:
    {
        returnValue = F("Kaplan-Mertens-Str.");
        break;
    }
    case 180170:
    {
        returnValue = F("Kaplan-Mertens-Weg");
        break;
    }
    case 180171:
    {
        returnValue = F("Kaplan-Meyer-Str.");
        break;
    }
    case 180172:
    {
        returnValue = F("Kaplan-Müller-Str.");
        break;
    }
    case 180173:
    {
        returnValue = F("Kaplan-Nagel-Weg");
        break;
    }
    case 180174:
    {
        returnValue = F("Kaplan-Renz-Weg");
        break;
    }
    case 180175:
    {
        returnValue = F("Kaplan-Schlicker-Str.");
        break;
    }
    case 180176:
    {
        returnValue = F("Kaplan-Schwickerath-Weg");
        break;
    }
    case 180177:
    {
        returnValue = F("Kaplan-Schüll-Weg");
        break;
    }
    case 180178:
    {
        returnValue = F("Kaplan-Seitz-Str.");
        break;
    }
    case 180179:
    {
        returnValue = F("Kaplan-Strohmeier-Str.");
        break;
    }
    case 180180:
    {
        returnValue = F("Kaplan-Stöferle-Weg");
        break;
    }
    case 180181:
    {
        returnValue = F("Kaplan-Wehrle-Weg");
        break;
    }
    case 180182:
    {
        returnValue = F("Kaplan-Xanten-Str.");
        break;
    }
    case 180183:
    {
        returnValue = F("Kaplan-kleine-Arkenau-Str.");
        break;
    }
    case 180184:
    {
        returnValue = F("Kaplanei");
        break;
    }
    case 180185:
    {
        returnValue = F("Kaplaneigasse");
        break;
    }
    case 180186:
    {
        returnValue = F("Kaplaneigässle");
        break;
    }
    case 180187:
    {
        returnValue = F("Kaplaneistr.");
        break;
    }
    case 180188:
    {
        returnValue = F("Kaplaneiweg");
        break;
    }
    case 180189:
    {
        returnValue = F("Kaplangasse");
        break;
    }
    case 180190:
    {
        returnValue = F("Kaplans Trift");
        break;
    }
    case 180191:
    {
        returnValue = F("Kaplansbend");
        break;
    }
    case 180192:
    {
        returnValue = F("Kaplanspasch");
        break;
    }
    case 180193:
    {
        returnValue = F("Kaplansteig");
        break;
    }
    case 180194:
    {
        returnValue = F("Kaplanstr.");
        break;
    }
    case 180195:
    {
        returnValue = F("Kaplansweg");
        break;
    }
    case 180196:
    {
        returnValue = F("Kaplanweg");
        break;
    }
    case 180197:
    {
        returnValue = F("Kaplitzer Str.");
        break;
    }
    case 180198:
    {
        returnValue = F("Kaplunger Str.");
        break;
    }
    case 180199:
    {
        returnValue = F("Kaposvár-Spange");
        break;
    }
    case 180200:
    {
        returnValue = F("Kappadocia");
        break;
    }
    case 180201:
    {
        returnValue = F("Kappan");
        break;
    }
    case 180202:
    {
        returnValue = F("Kappbergstr.");
        break;
    }
    case 180203:
    {
        returnValue = F("Kappe");
        break;
    }
    case 180204:
    {
        returnValue = F("Kappel");
        break;
    }
    case 180205:
    {
        returnValue = F("Kappelbachgasse");
        break;
    }
    case 180206:
    {
        returnValue = F("Kappelberg");
        break;
    }
    case 180207:
    {
        returnValue = F("Kappelberg Weg");
        break;
    }
    case 180208:
    {
        returnValue = F("Kappelbergsteig");
        break;
    }
    case 180209:
    {
        returnValue = F("Kappelbergstr.");
        break;
    }
    case 180210:
    {
        returnValue = F("Kappelbergweg");
        break;
    }
    case 180211:
    {
        returnValue = F("Kappelbuck");
        break;
    }
    case 180212:
    {
        returnValue = F("Kappeler Brücke");
        break;
    }
    case 180213:
    {
        returnValue = F("Kappeler Höhe");
        break;
    }
    case 180214:
    {
        returnValue = F("Kappeler Höhenweg");
        break;
    }
    case 180215:
    {
        returnValue = F("Kappeler Str.");
        break;
    }
    case 180216:
    {
        returnValue = F("Kappeler Weg");
        break;
    }
    case 180217:
    {
        returnValue = F("Kappelersgutweg");
        break;
    }
    case 180218:
    {
        returnValue = F("Kappelerweg");
        break;
    }
    case 180219:
    {
        returnValue = F("Kappelesberg");
        break;
    }
    case 180220:
    {
        returnValue = F("Kappelesäcker");
        break;
    }
    case 180221:
    {
        returnValue = F("Kappeleweg");
        break;
    }
    case 180222:
    {
        returnValue = F("Kappelfeld");
        break;
    }
    case 180223:
    {
        returnValue = F("Kappelgartenstr.");
        break;
    }
    case 180224:
    {
        returnValue = F("Kappelgasse");
        break;
    }
    case 180225:
    {
        returnValue = F("Kappelgaß");
        break;
    }
    case 180226:
    {
        returnValue = F("Kappelgraben");
        break;
    }
    case 180227:
    {
        returnValue = F("Kappelhalde");
        break;
    }
    case 180228:
    {
        returnValue = F("Kappelhof");
        break;
    }
    case 180229:
    {
        returnValue = F("Kappelhofgasse");
        break;
    }
    case 180230:
    {
        returnValue = F("Kappelhofstr.");
        break;
    }
    case 180231:
    {
        returnValue = F("Kappelholz");
        break;
    }
    case 180232:
    {
        returnValue = F("Kappelholzweg");
        break;
    }
    case 180233:
    {
        returnValue = F("Kappelkellerstr.");
        break;
    }
    case 180234:
    {
        returnValue = F("Kappellenhöhe");
        break;
    }
    case 180235:
    {
        returnValue = F("Kappellenpfad");
        break;
    }
    case 180236:
    {
        returnValue = F("Kappellenstr.");
        break;
    }
    case 180237:
    {
        returnValue = F("Kappellenweg");
        break;
    }
    case 180238:
    {
        returnValue = F("Kappelmatt");
        break;
    }
    case 180239:
    {
        returnValue = F("Kappelmeierweg");
        break;
    }
    case 180240:
    {
        returnValue = F("Kappelner Landstr.");
        break;
    }
    case 180241:
    {
        returnValue = F("Kappelner Str.");
        break;
    }
    case 180242:
    {
        returnValue = F("Kappelpfad");
        break;
    }
    case 180243:
    {
        returnValue = F("Kappelrain");
        break;
    }
    case 180244:
    {
        returnValue = F("Kappelsberg");
        break;
    }
    case 180245:
    {
        returnValue = F("Kappelschneise");
        break;
    }
    case 180246:
    {
        returnValue = F("Kappelstaffel");
        break;
    }
    case 180247:
    {
        returnValue = F("Kappelsteig");
        break;
    }
    case 180248:
    {
        returnValue = F("Kappelsteige");
        break;
    }
    case 180249:
    {
        returnValue = F("Kappelstr.");
        break;
    }
    case 180250:
    {
        returnValue = F("Kappelsweg");
        break;
    }
    case 180251:
    {
        returnValue = F("Kappelsäcker");
        break;
    }
    case 180252:
    {
        returnValue = F("Kappelter Weg");
        break;
    }
    case 180253:
    {
        returnValue = F("Kappelwasen");
        break;
    }
    case 180254:
    {
        returnValue = F("Kappelweg");
        break;
    }
    case 180255:
    {
        returnValue = F("Kappelwies");
        break;
    }
    case 180256:
    {
        returnValue = F("Kappelwiesen");
        break;
    }
    case 180257:
    {
        returnValue = F("Kappelwiesenweg");
        break;
    }
    case 180258:
    {
        returnValue = F("Kappelwindeckstr.");
        break;
    }
    case 180259:
    {
        returnValue = F("Kappelwörth");
        break;
    }
    case 180260:
    {
        returnValue = F("Kappeläcker");
        break;
    }
    case 180261:
    {
        returnValue = F("Kappeläckerstr.");
        break;
    }
    case 180262:
    {
        returnValue = F("Kappeläckerweg");
        break;
    }
    case 180263:
    {
        returnValue = F("Kappen Ausbau");
        break;
    }
    case 180264:
    {
        returnValue = F("Kappenbauerweg");
        break;
    }
    case 180265:
    {
        returnValue = F("Kappenberg");
        break;
    }
    case 180266:
    {
        returnValue = F("Kappenberger Damm");
        break;
    }
    case 180267:
    {
        returnValue = F("Kappenberger Feld");
        break;
    }
    case 180268:
    {
        returnValue = F("Kappenberger Hang");
        break;
    }
    case 180269:
    {
        returnValue = F("Kappenberger Str.");
        break;
    }
    case 180270:
    {
        returnValue = F("Kappenbergerstr.");
        break;
    }
    case 180271:
    {
        returnValue = F("Kappenberghof");
        break;
    }
    case 180272:
    {
        returnValue = F("Kappenbergring");
        break;
    }
    case 180273:
    {
        returnValue = F("Kappenbergstr.");
        break;
    }
    case 180274:
    {
        returnValue = F("Kappenbergweg");
        break;
    }
    case 180275:
    {
        returnValue = F("Kappenbühlstr.");
        break;
    }
    case 180276:
    {
        returnValue = F("Kappendellenweg");
        break;
    }
    case 180277:
    {
        returnValue = F("Kappeneck");
        break;
    }
    case 180278:
    {
        returnValue = F("Kappengasse");
        break;
    }
    case 180279:
    {
        returnValue = F("Kappengraben");
        break;
    }
    case 180280:
    {
        returnValue = F("Kappenhofstr.");
        break;
    }
    case 180281:
    {
        returnValue = F("Kappenhöhe");
        break;
    }
    case 180282:
    {
        returnValue = F("Kappenknechtweg");
        break;
    }
    case 180283:
    {
        returnValue = F("Kappenmacherweg");
        break;
    }
    case 180284:
    {
        returnValue = F("Kappenmühle");
        break;
    }
    case 180285:
    {
        returnValue = F("Kappenohl");
        break;
    }
    case 180286:
    {
        returnValue = F("Kappenrainweg");
        break;
    }
    case 180287:
    {
        returnValue = F("Kappenseeweg");
        break;
    }
    case 180288:
    {
        returnValue = F("Kappensteige");
        break;
    }
    case 180289:
    {
        returnValue = F("Kappenstein");
        break;
    }
    case 180290:
    {
        returnValue = F("Kappensteiner Mühle");
        break;
    }
    case 180291:
    {
        returnValue = F("Kappensteinstr.");
        break;
    }
    case 180292:
    {
        returnValue = F("Kappenstr.");
        break;
    }
    case 180293:
    {
        returnValue = F("Kappenzipfel");
        break;
    }
    case 180294:
    {
        returnValue = F("Kappenäcker");
        break;
    }
    case 180295:
    {
        returnValue = F("Kapper Dorfstr.");
        break;
    }
    case 180296:
    {
        returnValue = F("Kapperstichweg");
        break;
    }
    case 180297:
    {
        returnValue = F("Kappersweg");
        break;
    }
    case 180298:
    {
        returnValue = F("Kappertzheide");
        break;
    }
    case 180299:
    {
        returnValue = F("Kapperundweg");
        break;
    }
    case 180300:
    {
        returnValue = F("Kapperweg");
        break;
    }
    case 180301:
    {
        returnValue = F("Kappesborder Berg");
        break;
    }
    case 180302:
    {
        returnValue = F("Kappeser Weg");
        break;
    }
    case 180303:
    {
        returnValue = F("Kappesfeldstr.");
        break;
    }
    case 180304:
    {
        returnValue = F("Kappesgarten");
        break;
    }
    case 180305:
    {
        returnValue = F("Kappesgartenweg");
        break;
    }
    case 180306:
    {
        returnValue = F("Kappesgasse");
        break;
    }
    case 180307:
    {
        returnValue = F("Kappesgewannweg");
        break;
    }
    case 180308:
    {
        returnValue = F("Kappesgrundweg");
        break;
    }
    case 180309:
    {
        returnValue = F("Kappesgärten");
        break;
    }
    case 180310:
    {
        returnValue = F("Kappesgärtenweg");
        break;
    }
    case 180311:
    {
        returnValue = F("Kappesmattweg");
        break;
    }
    case 180312:
    {
        returnValue = F("Kappesserweg");
        break;
    }
    case 180313:
    {
        returnValue = F("Kappessteg");
        break;
    }
    case 180314:
    {
        returnValue = F("Kappesstr.");
        break;
    }
    case 180315:
    {
        returnValue = F("Kappesweg");
        break;
    }
    case 180316:
    {
        returnValue = F("Kappeweg");
        break;
    }
    case 180317:
    {
        returnValue = F("Kapping");
        break;
    }
    case 180318:
    {
        returnValue = F("Kappisbühl");
        break;
    }
    case 180319:
    {
        returnValue = F("Kappishalde");
        break;
    }
    case 180320:
    {
        returnValue = F("Kappishäuser Str.");
        break;
    }
    case 180321:
    {
        returnValue = F("Kappisweg");
        break;
    }
    case 180322:
    {
        returnValue = F("Kapplberg");
        break;
    }
    case 180323:
    {
        returnValue = F("Kapplenkamp");
        break;
    }
    case 180324:
    {
        returnValue = F("Kappler Drehe");
        break;
    }
    case 180325:
    {
        returnValue = F("Kappler Lochenweg");
        break;
    }
    case 180326:
    {
        returnValue = F("Kappler Str.");
        break;
    }
    case 180327:
    {
        returnValue = F("Kappler Waldstr.");
        break;
    }
    case 180328:
    {
        returnValue = F("Kapplerbergstr.");
        break;
    }
    case 180329:
    {
        returnValue = F("Kapplerseeweg");
        break;
    }
    case 180330:
    {
        returnValue = F("Kapplersgärten");
        break;
    }
    case 180331:
    {
        returnValue = F("Kapplerstr.");
        break;
    }
    case 180332:
    {
        returnValue = F("Kapplersweg");
        break;
    }
    case 180333:
    {
        returnValue = F("Kapplerwaldstr.");
        break;
    }
    case 180334:
    {
        returnValue = F("Kapplerweg");
        break;
    }
    case 180335:
    {
        returnValue = F("Kapplgass");
        break;
    }
    case 180336:
    {
        returnValue = F("Kapplhaus");
        break;
    }
    case 180337:
    {
        returnValue = F("Kapplstr.");
        break;
    }
    case 180338:
    {
        returnValue = F("Kapplweg");
        break;
    }
    case 180339:
    {
        returnValue = F("Kappmannsgrund");
        break;
    }
    case 180340:
    {
        returnValue = F("Kappmühlenweg");
        break;
    }
    case 180341:
    {
        returnValue = F("Kapppelweg");
        break;
    }
    case 180342:
    {
        returnValue = F("Kappstr.");
        break;
    }
    case 180343:
    {
        returnValue = F("Kappusstiege");
        break;
    }
    case 180344:
    {
        returnValue = F("Kappusstr.");
        break;
    }
    case 180345:
    {
        returnValue = F("Kappweg");
        break;
    }
    case 180346:
    {
        returnValue = F("Kapruner Str.");
        break;
    }
    case 180347:
    {
        returnValue = F("Kapruner Weg");
        break;
    }
    case 180348:
    {
        returnValue = F("Kapruschstraat");
        break;
    }
    case 180349:
    {
        returnValue = F("Kaps");
        break;
    }
    case 180350:
    {
        returnValue = F("Kapschstr.");
        break;
    }
    case 180351:
    {
        returnValue = F("Kapsdorf");
        break;
    }
    case 180352:
    {
        returnValue = F("Kapsdorfer Str.");
        break;
    }
    case 180353:
    {
        returnValue = F("Kapselstr.");
        break;
    }
    case 180354:
    {
        returnValue = F("Kapshügel");
        break;
    }
    case 180355:
    {
        returnValue = F("Kapstr.");
        break;
    }
    case 180356:
    {
        returnValue = F("Kapsweyer Weg");
        break;
    }
    case 180357:
    {
        returnValue = F("Kapsweyerer Str.");
        break;
    }
    case 180358:
    {
        returnValue = F("Kapustaweg");
        break;
    }
    case 180359:
    {
        returnValue = F("Kapuziner Vorstadt");
        break;
    }
    case 180360:
    {
        returnValue = F("Kapuziner-Schneise");
        break;
    }
    case 180361:
    {
        returnValue = F("Kapuzinerallee");
        break;
    }
    case 180362:
    {
        returnValue = F("Kapuzinerberg");
        break;
    }
    case 180363:
    {
        returnValue = F("Kapuzinerbuck");
        break;
    }
    case 180364:
    {
        returnValue = F("Kapuzinerbuckweg");
        break;
    }
    case 180365:
    {
        returnValue = F("Kapuzinergarten");
        break;
    }
    case 180366:
    {
        returnValue = F("Kapuzinergasse");
        break;
    }
    case 180367:
    {
        returnValue = F("Kapuzinergraben");
        break;
    }
    case 180368:
    {
        returnValue = F("Kapuzinergässle");
        break;
    }
    case 180369:
    {
        returnValue = F("Kapuzinergäßchen");
        break;
    }
    case 180370:
    {
        returnValue = F("Kapuzinerkopfschneise");
        break;
    }
    case 180371:
    {
        returnValue = F("Kapuzinerkreisel");
        break;
    }
    case 180372:
    {
        returnValue = F("Kapuzinerplatz");
        break;
    }
    case 180373:
    {
        returnValue = F("Kapuzinerring");
        break;
    }
    case 180374:
    {
        returnValue = F("Kapuzinerschneise");
        break;
    }
    case 180375:
    {
        returnValue = F("Kapuzinersteig");
        break;
    }
    case 180376:
    {
        returnValue = F("Kapuzinerstr.");
        break;
    }
    case 180377:
    {
        returnValue = F("Kapuzinertor");
        break;
    }
    case 180378:
    {
        returnValue = F("Kapuzinerweg");
        break;
    }
    case 180379:
    {
        returnValue = F("Karakorumstr.");
        break;
    }
    case 180380:
    {
        returnValue = F("Karalpeleweg");
        break;
    }
    case 180381:
    {
        returnValue = F("Karasekweg");
        break;
    }
    case 180382:
    {
        returnValue = F("Karatsbichl");
        break;
    }
    case 180383:
    {
        returnValue = F("Karatsbichlweg");
        break;
    }
    case 180384:
    {
        returnValue = F("Karauschengasse");
        break;
    }
    case 180385:
    {
        returnValue = F("Karauschengestell");
        break;
    }
    case 180386:
    {
        returnValue = F("Karauschenstieg");
        break;
    }
    case 180387:
    {
        returnValue = F("Karauschenweg");
        break;
    }
    case 180388:
    {
        returnValue = F("Karavellenstr.");
        break;
    }
    case 180389:
    {
        returnValue = F("Karawankenstr.");
        break;
    }
    case 180390:
    {
        returnValue = F("Karbach");
        break;
    }
    case 180391:
    {
        returnValue = F("Karbach-Serpentinen");
        break;
    }
    case 180392:
    {
        returnValue = F("Karbacher Str.");
        break;
    }
    case 180393:
    {
        returnValue = F("Karbacher Weg");
        break;
    }
    case 180394:
    {
        returnValue = F("Karbachpassage");
        break;
    }
    case 180395:
    {
        returnValue = F("Karbachstr.");
        break;
    }
    case 180396:
    {
        returnValue = F("Karbachweg");
        break;
    }
    case 180397:
    {
        returnValue = F("Karbe-Wagner-Str.");
        break;
    }
    case 180398:
    {
        returnValue = F("Karbeckstr.");
        break;
    }
    case 180399:
    {
        returnValue = F("Karbener Rosenhang");
        break;
    }
    case 180400:
    {
        returnValue = F("Karbener Str.");
        break;
    }
    case 180401:
    {
        returnValue = F("Karbener Weg");
        break;
    }
    case 180402:
    {
        returnValue = F("Karbenweg");
        break;
    }
    case 180403:
    {
        returnValue = F("Karberg");
        break;
    }
    case 180404:
    {
        returnValue = F("Karbidstr.");
        break;
    }
    case 180405:
    {
        returnValue = F("Karbonweg");
        break;
    }
    case 180406:
    {
        returnValue = F("Karbower Chaussee");
        break;
    }
    case 180407:
    {
        returnValue = F("Karbower Weg");
        break;
    }
    case 180408:
    {
        returnValue = F("Karby-Moor");
        break;
    }
    case 180409:
    {
        returnValue = F("Karbyer Str.");
        break;
    }
    case 180410:
    {
        returnValue = F("Karche");
        break;
    }
    case 180411:
    {
        returnValue = F("Karchenklingenweg");
        break;
    }
    case 180412:
    {
        returnValue = F("Karchentalweg");
        break;
    }
    case 180413:
    {
        returnValue = F("Karcherallee");
        break;
    }
    case 180414:
    {
        returnValue = F("Karcherstr.");
        break;
    }
    case 180415:
    {
        returnValue = F("Karcherweg");
        break;
    }
    case 180416:
    {
        returnValue = F("Karchesstr.");
        break;
    }
    case 180417:
    {
        returnValue = F("Karchestr.");
        break;
    }
    case 180418:
    {
        returnValue = F("Karchesweg");
        break;
    }
    case 180419:
    {
        returnValue = F("Karchgäßlein");
        break;
    }
    case 180420:
    {
        returnValue = F("Karchower Str.");
        break;
    }
    case 180421:
    {
        returnValue = F("Karchstr.");
        break;
    }
    case 180422:
    {
        returnValue = F("Kardamomweg");
        break;
    }
    case 180423:
    {
        returnValue = F("Kardelstr.");
        break;
    }
    case 180424:
    {
        returnValue = F("Kardener Str.");
        break;
    }
    case 180425:
    {
        returnValue = F("Kardenstr.");
        break;
    }
    case 180426:
    {
        returnValue = F("Kardenweg");
        break;
    }
    case 180427:
    {
        returnValue = F("Karderieweg");
        break;
    }
    case 180428:
    {
        returnValue = F("Karderweg");
        break;
    }
    case 180429:
    {
        returnValue = F("Kardieksweg");
        break;
    }
    case 180430:
    {
        returnValue = F("Kardierstr.");
        break;
    }
    case 180431:
    {
        returnValue = F("Kardinal-Albrecht-Str.");
        break;
    }
    case 180432:
    {
        returnValue = F("Kardinal-Bea-Str.");
        break;
    }
    case 180433:
    {
        returnValue = F("Kardinal-Bengsch-Str.");
        break;
    }
    case 180434:
    {
        returnValue = F("Kardinal-Bertram-Str.");
        break;
    }
    case 180435:
    {
        returnValue = F("Kardinal-Bertram-Weg");
        break;
    }
    case 180436:
    {
        returnValue = F("Kardinal-Cardijn-Str.");
        break;
    }
    case 180437:
    {
        returnValue = F("Kardinal-Döpfner-Platz");
        break;
    }
    case 180438:
    {
        returnValue = F("Kardinal-Döpfner-Str.");
        break;
    }
    case 180439:
    {
        returnValue = F("Kardinal-Faulhaber-Platz");
        break;
    }
    case 180440:
    {
        returnValue = F("Kardinal-Faulhaber-Str.");
        break;
    }
    case 180441:
    {
        returnValue = F("Kardinal-Faulhaber-Weg");
        break;
    }
    case 180442:
    {
        returnValue = F("Kardinal-Frings-Str.");
        break;
    }
    case 180443:
    {
        returnValue = F("Kardinal-Galen-Hof");
        break;
    }
    case 180444:
    {
        returnValue = F("Kardinal-Galen-Ring");
        break;
    }
    case 180445:
    {
        returnValue = F("Kardinal-Galen-Str.");
        break;
    }
    case 180446:
    {
        returnValue = F("Kardinal-Galen-Weg");
        break;
    }
    case 180447:
    {
        returnValue = F("Kardinal-Geissel-Str.");
        break;
    }
    case 180448:
    {
        returnValue = F("Kardinal-Graf-Galen-Str.");
        break;
    }
    case 180449:
    {
        returnValue = F("Kardinal-Graf-von-Galen-Str.");
        break;
    }
    case 180450:
    {
        returnValue = F("Kardinal-Hengsbach-Platz");
        break;
    }
    case 180451:
    {
        returnValue = F("Kardinal-Hengsbach-Str.");
        break;
    }
    case 180452:
    {
        returnValue = F("Kardinal-Höffner-Platz");
        break;
    }
    case 180453:
    {
        returnValue = F("Kardinal-Höffner-Str.");
        break;
    }
    case 180454:
    {
        returnValue = F("Kardinal-Höffner-Weg");
        break;
    }
    case 180455:
    {
        returnValue = F("Kardinal-Jaeger-Str.");
        break;
    }
    case 180456:
    {
        returnValue = F("Kardinal-Kopp-Str.");
        break;
    }
    case 180457:
    {
        returnValue = F("Kardinal-Krementz-Str.");
        break;
    }
    case 180458:
    {
        returnValue = F("Kardinal-Lehmann-Str.");
        break;
    }
    case 180459:
    {
        returnValue = F("Kardinal-Maurer-Str.");
        break;
    }
    case 180460:
    {
        returnValue = F("Kardinal-Muench-Str.");
        break;
    }
    case 180461:
    {
        returnValue = F("Kardinal-Otto-Str.");
        break;
    }
    case 180462:
    {
        returnValue = F("Kardinal-Preysing-Platz");
        break;
    }
    case 180463:
    {
        returnValue = F("Kardinal-Schröffer-Str.");
        break;
    }
    case 180464:
    {
        returnValue = F("Kardinal-Schulte-Str.");
        break;
    }
    case 180465:
    {
        returnValue = F("Kardinal-Volk-Platz");
        break;
    }
    case 180466:
    {
        returnValue = F("Kardinal-Von-Galen-Str.");
        break;
    }
    case 180467:
    {
        returnValue = F("Kardinal-Wartenberg-Str.");
        break;
    }
    case 180468:
    {
        returnValue = F("Kardinal-Wendel-Platz");
        break;
    }
    case 180469:
    {
        returnValue = F("Kardinal-Wendel-Str.");
        break;
    }
    case 180470:
    {
        returnValue = F("Kardinal-von-Bettinger-Str.");
        break;
    }
    case 180471:
    {
        returnValue = F("Kardinal-von-Faulhaber-Platz");
        break;
    }
    case 180472:
    {
        returnValue = F("Kardinal-von-Galen-Park");
        break;
    }
    case 180473:
    {
        returnValue = F("Kardinal-von-Galen-Platz");
        break;
    }
    case 180474:
    {
        returnValue = F("Kardinal-von-Galen-Ring");
        break;
    }
    case 180475:
    {
        returnValue = F("Kardinal-von-Galen-Str.");
        break;
    }
    case 180476:
    {
        returnValue = F("Kardinal-von-Hartmann-Str.");
        break;
    }
    case 180477:
    {
        returnValue = F("Kardinal-von-Rodt-Str.");
        break;
    }
    case 180478:
    {
        returnValue = F("Kardinal-von-Waldburg-Str.");
        break;
    }
    case 180479:
    {
        returnValue = F("Kardinalstr.");
        break;
    }
    case 180480:
    {
        returnValue = F("Kardohrstr.");
        break;
    }
    case 180481:
    {
        returnValue = F("Kardorfer Höhe");
        break;
    }
    case 180482:
    {
        returnValue = F("Kardorfer Str.");
        break;
    }
    case 180483:
    {
        returnValue = F("Kardweg");
        break;
    }
    case 180484:
    {
        returnValue = F("Kareliaweg");
        break;
    }
    case 180485:
    {
        returnValue = F("Karelstr.");
        break;
    }
    case 180486:
    {
        returnValue = F("Karen-Fredersdorf-Str.");
        break;
    }
    case 180487:
    {
        returnValue = F("Karen-Horney-Weg");
        break;
    }
    case 180488:
    {
        returnValue = F("Karen-Jeppe-Str.");
        break;
    }
    case 180489:
    {
        returnValue = F("Karenbergweg");
        break;
    }
    case 180490:
    {
        returnValue = F("Karenbrede");
        break;
    }
    case 180491:
    {
        returnValue = F("Karenkamp");
        break;
    }
    case 180492:
    {
        returnValue = F("Karenweg");
        break;
    }
    case 180493:
    {
        returnValue = F("Karenzer Str.");
        break;
    }
    case 180494:
    {
        returnValue = F("Karether Weg");
        break;
    }
    case 180495:
    {
        returnValue = F("Karfreitag-Schneise");
        break;
    }
    case 180496:
    {
        returnValue = F("Karfreitaggasse");
        break;
    }
    case 180497:
    {
        returnValue = F("Karfter Chaussee");
        break;
    }
    case 180498:
    {
        returnValue = F("Karfter Weg");
        break;
    }
    case 180499:
    {
        returnValue = F("Karfunkelberg");
        break;
    }
    case 180500:
    {
        returnValue = F("Karglhof");
        break;
    }
    case 180501:
    {
        returnValue = F("Karglpoint");
        break;
    }
    case 180502:
    {
        returnValue = F("Kargower Str.");
        break;
    }
    case 180503:
    {
        returnValue = F("Kargower Weg");
        break;
    }
    case 180504:
    {
        returnValue = F("Kargstr.");
        break;
    }
    case 180505:
    {
        returnValue = F("Kargweg");
        break;
    }
    case 180506:
    {
        returnValue = F("Karhellstr.");
        break;
    }
    case 180507:
    {
        returnValue = F("Karhof");
        break;
    }
    case 180508:
    {
        returnValue = F("Karibikstr.");
        break;
    }
    case 180509:
    {
        returnValue = F("Kariensiek");
        break;
    }
    case 180510:
    {
        returnValue = F("Karin-Bühring-Platz");
        break;
    }
    case 180511:
    {
        returnValue = F("Karin-Eckert-Str.");
        break;
    }
    case 180512:
    {
        returnValue = F("Karinshöh");
        break;
    }
    case 180513:
    {
        returnValue = F("Karinstr.");
        break;
    }
    case 180514:
    {
        returnValue = F("Karinsträßle");
        break;
    }
    case 180515:
    {
        returnValue = F("Karither Str.");
        break;
    }
    case 180516:
    {
        returnValue = F("Karither Weg");
        break;
    }
    case 180517:
    {
        returnValue = F("Karitzstr.");
        break;
    }
    case 180518:
    {
        returnValue = F("Karkacherweg");
        break;
    }
    case 180519:
    {
        returnValue = F("Karkbarg");
        break;
    }
    case 180520:
    {
        returnValue = F("Karkbindsweg");
        break;
    }
    case 180521:
    {
        returnValue = F("Karkbrede");
        break;
    }
    case 180522:
    {
        returnValue = F("Karkbäk");
        break;
    }
    case 180523:
    {
        returnValue = F("Karkdoorstraat");
        break;
    }
    case 180524:
    {
        returnValue = F("Karkener Haag");
        break;
    }
    case 180525:
    {
        returnValue = F("Karkener Str.");
        break;
    }
    case 180526:
    {
        returnValue = F("Karkenfenn");
        break;
    }
    case 180527:
    {
        returnValue = F("Karkenkamp");
        break;
    }
    case 180528:
    {
        returnValue = F("Karkenland");
        break;
    }
    case 180529:
    {
        returnValue = F("Karkenn");
        break;
    }
    case 180530:
    {
        returnValue = F("Karkenredder");
        break;
    }
    case 180531:
    {
        returnValue = F("Karkenstieg");
        break;
    }
    case 180532:
    {
        returnValue = F("Karkenstraat");
        break;
    }
    case 180533:
    {
        returnValue = F("Karkenstreng");
        break;
    }
    case 180534:
    {
        returnValue = F("Karkenweg");
        break;
    }
    case 180535:
    {
        returnValue = F("Karkesch");
        break;
    }
    case 180536:
    {
        returnValue = F("Karkfeld");
        break;
    }
    case 180537:
    {
        returnValue = F("Karkfuhrweg");
        break;
    }
    case 180538:
    {
        returnValue = F("Karkgang");
        break;
    }
    case 180539:
    {
        returnValue = F("Karkhiar-Spichal-Goat");
        break;
    }
    case 180540:
    {
        returnValue = F("Karkhoff");
        break;
    }
    case 180541:
    {
        returnValue = F("Karkhoffstroot");
        break;
    }
    case 180542:
    {
        returnValue = F("Karkhorner Str.");
        break;
    }
    case 180543:
    {
        returnValue = F("Karkhorst");
        break;
    }
    case 180544:
    {
        returnValue = F("Karkhöhnweg");
        break;
    }
    case 180545:
    {
        returnValue = F("Karkhörn");
        break;
    }
    case 180546:
    {
        returnValue = F("Karkkamp");
        break;
    }
    case 180547:
    {
        returnValue = F("Karklandsweg");
        break;
    }
    case 180548:
    {
        returnValue = F("Karkloh");
        break;
    }
    case 180549:
    {
        returnValue = F("Karklohweg");
        break;
    }
    case 180550:
    {
        returnValue = F("Karkmeyerstr.");
        break;
    }
    case 180551:
    {
        returnValue = F("Karkopfstr.");
        break;
    }
    case 180552:
    {
        returnValue = F("Karkpaad");
        break;
    }
    case 180553:
    {
        returnValue = F("Karkpad");
        break;
    }
    case 180554:
    {
        returnValue = F("Karkpadd");
        break;
    }
    case 180555:
    {
        returnValue = F("Karkpatt");
        break;
    }
    case 180556:
    {
        returnValue = F("Karkplatz");
        break;
    }
    case 180557:
    {
        returnValue = F("Karkpolder");
        break;
    }
    case 180558:
    {
        returnValue = F("Karkredder");
        break;
    }
    case 180559:
    {
        returnValue = F("Karkshörn");
        break;
    }
    case 180560:
    {
        returnValue = F("Karksiek");
        break;
    }
    case 180561:
    {
        returnValue = F("Karksteinstr.");
        break;
    }
    case 180562:
    {
        returnValue = F("Karkstieg");
        break;
    }
    case 180563:
    {
        returnValue = F("Karkstraat");
        break;
    }
    case 180564:
    {
        returnValue = F("Karkwech");
        break;
    }
    case 180565:
    {
        returnValue = F("Karkweg");
        break;
    }
    case 180566:
    {
        returnValue = F("Karkwegkoppel");
        break;
    }
    case 180567:
    {
        returnValue = F("Karl Brucklacher Weg");
        break;
    }
    case 180568:
    {
        returnValue = F("Karl Drais Weg");
        break;
    }
    case 180569:
    {
        returnValue = F("Karl Hahn-Weg");
        break;
    }
    case 180570:
    {
        returnValue = F("Karl Harzig Park");
        break;
    }
    case 180571:
    {
        returnValue = F("Karl Hinterberger-Weg");
        break;
    }
    case 180572:
    {
        returnValue = F("Karl Marx Park");
        break;
    }
    case 180573:
    {
        returnValue = F("Karl Opel Schneise");
        break;
    }
    case 180574:
    {
        returnValue = F("Karl Repp Schneise");
        break;
    }
    case 180575:
    {
        returnValue = F("Karl Samtner-Weg");
        break;
    }
    case 180576:
    {
        returnValue = F("Karl Schrader Weg");
        break;
    }
    case 180577:
    {
        returnValue = F("Karl Velten Weg");
        break;
    }
    case 180578:
    {
        returnValue = F("Karl Wagner Weg");
        break;
    }
    case 180579:
    {
        returnValue = F("Karl Weickert Weg");
        break;
    }
    case 180580:
    {
        returnValue = F("Karl Wolfram Weg");
        break;
    }
    case 180581:
    {
        returnValue = F("Karl's Padd");
        break;
    }
    case 180582:
    {
        returnValue = F("Karl-Abs-Str.");
        break;
    }
    case 180583:
    {
        returnValue = F("Karl-Abt-Str.");
        break;
    }
    case 180584:
    {
        returnValue = F("Karl-Achtel-Str.");
        break;
    }
    case 180585:
    {
        returnValue = F("Karl-Adam-Platz");
        break;
    }
    case 180586:
    {
        returnValue = F("Karl-Adam-Str.");
        break;
    }
    case 180587:
    {
        returnValue = F("Karl-Adam-Weg");
        break;
    }
    case 180588:
    {
        returnValue = F("Karl-Adams-Platz");
        break;
    }
    case 180589:
    {
        returnValue = F("Karl-Adams-Str.");
        break;
    }
    case 180590:
    {
        returnValue = F("Karl-Adler-Staffel");
        break;
    }
    case 180591:
    {
        returnValue = F("Karl-Agricola-Weg");
        break;
    }
    case 180592:
    {
        returnValue = F("Karl-Ahlf-Str.");
        break;
    }
    case 180593:
    {
        returnValue = F("Karl-Akermann-Weg");
        break;
    }
    case 180594:
    {
        returnValue = F("Karl-Albert-Str.");
        break;
    }
    case 180595:
    {
        returnValue = F("Karl-Albicker-Weg");
        break;
    }
    case 180596:
    {
        returnValue = F("Karl-Albiker-Str.");
        break;
    }
    case 180597:
    {
        returnValue = F("Karl-Albrecht-Platz");
        break;
    }
    case 180598:
    {
        returnValue = F("Karl-Albrecht-Str.");
        break;
    }
    case 180599:
    {
        returnValue = F("Karl-Alexander-Str.");
        break;
    }
    case 180600:
    {
        returnValue = F("Karl-Alm Weg");
        break;
    }
    case 180601:
    {
        returnValue = F("Karl-Amberg-Str.");
        break;
    }
    case 180602:
    {
        returnValue = F("Karl-Anselm-Str.");
        break;
    }
    case 180603:
    {
        returnValue = F("Karl-Anton-Platz");
        break;
    }
    case 180604:
    {
        returnValue = F("Karl-Anton-Str.");
        break;
    }
    case 180605:
    {
        returnValue = F("Karl-Anton-Weg");
        break;
    }
    case 180606:
    {
        returnValue = F("Karl-Apel-Str.");
        break;
    }
    case 180607:
    {
        returnValue = F("Karl-Arand-Str.");
        break;
    }
    case 180608:
    {
        returnValue = F("Karl-Arden-Str.");
        break;
    }
    case 180609:
    {
        returnValue = F("Karl-Armbruster-Str.");
        break;
    }
    case 180610:
    {
        returnValue = F("Karl-Arnold-Platz");
        break;
    }
    case 180611:
    {
        returnValue = F("Karl-Arnold-Ring");
        break;
    }
    case 180612:
    {
        returnValue = F("Karl-Arnold-Str.");
        break;
    }
    case 180613:
    {
        returnValue = F("Karl-Arnold-Weg");
        break;
    }
    case 180614:
    {
        returnValue = F("Karl-Arnz-Weg");
        break;
    }
    case 180615:
    {
        returnValue = F("Karl-Arste-Weg");
        break;
    }
    case 180616:
    {
        returnValue = F("Karl-Arzet-Weg");
        break;
    }
    case 180617:
    {
        returnValue = F("Karl-Aschenbroich-Weg");
        break;
    }
    case 180618:
    {
        returnValue = F("Karl-August-Georgi-Str.");
        break;
    }
    case 180619:
    {
        returnValue = F("Karl-August-Jung-Platz");
        break;
    }
    case 180620:
    {
        returnValue = F("Karl-August-Maerz-Str.");
        break;
    }
    case 180621:
    {
        returnValue = F("Karl-August-Str.");
        break;
    }
    case 180622:
    {
        returnValue = F("Karl-August-Weg");
        break;
    }
    case 180623:
    {
        returnValue = F("Karl-August-Woll-Str.");
        break;
    }
    case 180624:
    {
        returnValue = F("Karl-Auvera-Str.");
        break;
    }
    case 180625:
    {
        returnValue = F("Karl-Aßfalg-Str.");
        break;
    }
    case 180626:
    {
        returnValue = F("Karl-Baasen-Str.");
        break;
    }
    case 180627:
    {
        returnValue = F("Karl-Bach-Str.");
        break;
    }
    case 180628:
    {
        returnValue = F("Karl-Backhaus-Ring");
        break;
    }
    case 180629:
    {
        returnValue = F("Karl-Bader-Weg");
        break;
    }
    case 180630:
    {
        returnValue = F("Karl-Baierlein-Str.");
        break;
    }
    case 180631:
    {
        returnValue = F("Karl-Baisch-Str.");
        break;
    }
    case 180632:
    {
        returnValue = F("Karl-Balcer-Weg");
        break;
    }
    case 180633:
    {
        returnValue = F("Karl-Ballmann-Str.");
        break;
    }
    case 180634:
    {
        returnValue = F("Karl-Bamler-Str.");
        break;
    }
    case 180635:
    {
        returnValue = F("Karl-Bartelmann-Str.");
        break;
    }
    case 180636:
    {
        returnValue = F("Karl-Bartels-Weg");
        break;
    }
    case 180637:
    {
        returnValue = F("Karl-Barth-Str.");
        break;
    }
    case 180638:
    {
        returnValue = F("Karl-Barth-Weg");
        break;
    }
    case 180639:
    {
        returnValue = F("Karl-Barthels-Str.");
        break;
    }
    case 180640:
    {
        returnValue = F("Karl-Barthold-Weg");
        break;
    }
    case 180641:
    {
        returnValue = F("Karl-Bartoschek-Weg");
        break;
    }
    case 180642:
    {
        returnValue = F("Karl-Bauer-Park");
        break;
    }
    case 180643:
    {
        returnValue = F("Karl-Bauer-Str.");
        break;
    }
    case 180644:
    {
        returnValue = F("Karl-Bauer-Weg");
        break;
    }
    case 180645:
    {
        returnValue = F("Karl-Baumann-Str.");
        break;
    }
    case 180646:
    {
        returnValue = F("Karl-Baumeister-Str.");
        break;
    }
    case 180647:
    {
        returnValue = F("Karl-Baumgartner-Str.");
        break;
    }
    case 180648:
    {
        returnValue = F("Karl-Baums-Weg");
        break;
    }
    case 180649:
    {
        returnValue = F("Karl-Baurichter-Str.");
        break;
    }
    case 180650:
    {
        returnValue = F("Karl-Bautz-Str.");
        break;
    }
    case 180651:
    {
        returnValue = F("Karl-Beck-Str.");
        break;
    }
    case 180652:
    {
        returnValue = F("Karl-Beck-Weg");
        break;
    }
    case 180653:
    {
        returnValue = F("Karl-Beckhusen-Weg");
        break;
    }
    case 180654:
    {
        returnValue = F("Karl-Beffert-Str.");
        break;
    }
    case 180655:
    {
        returnValue = F("Karl-Behrendt-Weg");
        break;
    }
    case 180656:
    {
        returnValue = F("Karl-Behringer-Str.");
        break;
    }
    case 180657:
    {
        returnValue = F("Karl-Bender-Str.");
        break;
    }
    case 180658:
    {
        returnValue = F("Karl-Benjamin-Preusker-Str.");
        break;
    }
    case 180659:
    {
        returnValue = F("Karl-Benner-Str.");
        break;
    }
    case 180660:
    {
        returnValue = F("Karl-Benz-Platz");
        break;
    }
    case 180661:
    {
        returnValue = F("Karl-Benz-Str.");
        break;
    }
    case 180662:
    {
        returnValue = F("Karl-Benz-Weg");
        break;
    }
    case 180663:
    {
        returnValue = F("Karl-Berberich-Str.");
        break;
    }
    case 180664:
    {
        returnValue = F("Karl-Berbuer-Str.");
        break;
    }
    case 180665:
    {
        returnValue = F("Karl-Berg-Str.");
        break;
    }
    case 180666:
    {
        returnValue = F("Karl-Berger-Str.");
        break;
    }
    case 180667:
    {
        returnValue = F("Karl-Bergmüller-Str.");
        break;
    }
    case 180668:
    {
        returnValue = F("Karl-Bernau-Ring");
        break;
    }
    case 180669:
    {
        returnValue = F("Karl-Berner-Str.");
        break;
    }
    case 180670:
    {
        returnValue = F("Karl-Bernhardi-Str.");
        break;
    }
    case 180671:
    {
        returnValue = F("Karl-Bernlöhr-Str.");
        break;
    }
    case 180672:
    {
        returnValue = F("Karl-Bertling-Str.");
        break;
    }
    case 180673:
    {
        returnValue = F("Karl-Betz-Str.");
        break;
    }
    case 180674:
    {
        returnValue = F("Karl-Beutler-Weg");
        break;
    }
    case 180675:
    {
        returnValue = F("Karl-Beyer-Str.");
        break;
    }
    case 180676:
    {
        returnValue = F("Karl-Bickleder-Str.");
        break;
    }
    case 180677:
    {
        returnValue = F("Karl-Bieber-Höhe");
        break;
    }
    case 180678:
    {
        returnValue = F("Karl-Biemer-Weg");
        break;
    }
    case 180679:
    {
        returnValue = F("Karl-Bierschenk-Str.");
        break;
    }
    case 180680:
    {
        returnValue = F("Karl-Biese-Weg");
        break;
    }
    case 180681:
    {
        returnValue = F("Karl-Biesinger-Str.");
        break;
    }
    case 180682:
    {
        returnValue = F("Karl-Binder-Str.");
        break;
    }
    case 180683:
    {
        returnValue = F("Karl-Binz-Weg");
        break;
    }
    case 180684:
    {
        returnValue = F("Karl-Bippig-Platz");
        break;
    }
    case 180685:
    {
        returnValue = F("Karl-Birkmaier-Str.");
        break;
    }
    case 180686:
    {
        returnValue = F("Karl-Birr-Weg");
        break;
    }
    case 180687:
    {
        returnValue = F("Karl-Birx-Str.");
        break;
    }
    case 180688:
    {
        returnValue = F("Karl-Birzer-Str.");
        break;
    }
    case 180689:
    {
        returnValue = F("Karl-Biskamp-Str.");
        break;
    }
    case 180690:
    {
        returnValue = F("Karl-Bittel-Park");
        break;
    }
    case 180691:
    {
        returnValue = F("Karl-Blaser-Str.");
        break;
    }
    case 180692:
    {
        returnValue = F("Karl-Blechen-Str.");
        break;
    }
    case 180693:
    {
        returnValue = F("Karl-Blessing-Str.");
        break;
    }
    case 180694:
    {
        returnValue = F("Karl-Blessing-Weg");
        break;
    }
    case 180695:
    {
        returnValue = F("Karl-Blind-Str.");
        break;
    }
    case 180696:
    {
        returnValue = F("Karl-Blum-Allee");
        break;
    }
    case 180697:
    {
        returnValue = F("Karl-Blume-Weg");
        break;
    }
    case 180698:
    {
        returnValue = F("Karl-Bodenstein-Weg");
        break;
    }
    case 180699:
    {
        returnValue = F("Karl-Bohn-Str.");
        break;
    }
    case 180700:
    {
        returnValue = F("Karl-Bohnenberger-Str.");
        break;
    }
    case 180701:
    {
        returnValue = F("Karl-Bold-Str.");
        break;
    }
    case 180702:
    {
        returnValue = F("Karl-Bonhoeffer-Str.");
        break;
    }
    case 180703:
    {
        returnValue = F("Karl-Boos-Str.");
        break;
    }
    case 180704:
    {
        returnValue = F("Karl-Borchert-Str.");
        break;
    }
    case 180705:
    {
        returnValue = F("Karl-Bornschlegel-Str.");
        break;
    }
    case 180706:
    {
        returnValue = F("Karl-Borromäus-Str.");
        break;
    }
    case 180707:
    {
        returnValue = F("Karl-Bosch-Str.");
        break;
    }
    case 180708:
    {
        returnValue = F("Karl-Bosch-Weg");
        break;
    }
    case 180709:
    {
        returnValue = F("Karl-Bosse-Str.");
        break;
    }
    case 180710:
    {
        returnValue = F("Karl-Brachat-Weg");
        break;
    }
    case 180711:
    {
        returnValue = F("Karl-Brand-Str.");
        break;
    }
    case 180712:
    {
        returnValue = F("Karl-Brandt-Str.");
        break;
    }
    case 180713:
    {
        returnValue = F("Karl-Brandt-Weg");
        break;
    }
    case 180714:
    {
        returnValue = F("Karl-Brater-Str.");
        break;
    }
    case 180715:
    {
        returnValue = F("Karl-Brauckmann-Str.");
        break;
    }
    case 180716:
    {
        returnValue = F("Karl-Braun-Str.");
        break;
    }
    case 180717:
    {
        returnValue = F("Karl-Braun-Weg");
        break;
    }
    case 180718:
    {
        returnValue = F("Karl-Braut-Str.");
        break;
    }
    case 180719:
    {
        returnValue = F("Karl-Breitbach-Weg");
        break;
    }
    case 180720:
    {
        returnValue = F("Karl-Breitinger Str.");
        break;
    }
    case 180721:
    {
        returnValue = F("Karl-Brennenstuhl-Str.");
        break;
    }
    case 180722:
    {
        returnValue = F("Karl-Brezing-Str.");
        break;
    }
    case 180723:
    {
        returnValue = F("Karl-Britsch-Str.");
        break;
    }
    case 180724:
    {
        returnValue = F("Karl-Brodrück-Str.");
        break;
    }
    case 180725:
    {
        returnValue = F("Karl-Broel-Str.");
        break;
    }
    case 180726:
    {
        returnValue = F("Karl-Broll-Str.");
        break;
    }
    case 180727:
    {
        returnValue = F("Karl-Bromberger-Str.");
        break;
    }
    case 180728:
    {
        returnValue = F("Karl-Bruchet-Str.");
        break;
    }
    case 180729:
    {
        returnValue = F("Karl-Brunnengräber-Str.");
        break;
    }
    case 180730:
    {
        returnValue = F("Karl-Brunner-Str.");
        break;
    }
    case 180731:
    {
        returnValue = F("Karl-Bröger-Str.");
        break;
    }
    case 180732:
    {
        returnValue = F("Karl-Bröger-Weg");
        break;
    }
    case 180733:
    {
        returnValue = F("Karl-Brückel-Str.");
        break;
    }
    case 180734:
    {
        returnValue = F("Karl-Brückner-Str.");
        break;
    }
    case 180735:
    {
        returnValue = F("Karl-Brühne-Weg");
        break;
    }
    case 180736:
    {
        returnValue = F("Karl-Buchholz-Str.");
        break;
    }
    case 180737:
    {
        returnValue = F("Karl-Bullmer-Str.");
        break;
    }
    case 180738:
    {
        returnValue = F("Karl-Bunje-Str.");
        break;
    }
    case 180739:
    {
        returnValue = F("Karl-Bunje-Weg");
        break;
    }
    case 180740:
    {
        returnValue = F("Karl-Bunkofer-Str.");
        break;
    }
    case 180741:
    {
        returnValue = F("Karl-Burgdorf-Weg");
        break;
    }
    case 180742:
    {
        returnValue = F("Karl-Burger-Str.");
        break;
    }
    case 180743:
    {
        returnValue = F("Karl-Burgsmüller-Str.");
        break;
    }
    case 180744:
    {
        returnValue = F("Karl-Burkert-Str.");
        break;
    }
    case 180745:
    {
        returnValue = F("Karl-Bury-Weg");
        break;
    }
    case 180746:
    {
        returnValue = F("Karl-Busch-Str.");
        break;
    }
    case 180747:
    {
        returnValue = F("Karl-Bäder-Str.");
        break;
    }
    case 180748:
    {
        returnValue = F("Karl-Bär-Str.");
        break;
    }
    case 180749:
    {
        returnValue = F("Karl-Böchel-Str.");
        break;
    }
    case 180750:
    {
        returnValue = F("Karl-Böge-Platz");
        break;
    }
    case 180751:
    {
        returnValue = F("Karl-Böhaimb-Str.");
        break;
    }
    case 180752:
    {
        returnValue = F("Karl-Böhm-Str.");
        break;
    }
    case 180753:
    {
        returnValue = F("Karl-Böhning-Str.");
        break;
    }
    case 180754:
    {
        returnValue = F("Karl-Bösch-Platz");
        break;
    }
    case 180755:
    {
        returnValue = F("Karl-Bücheler-Str.");
        break;
    }
    case 180756:
    {
        returnValue = F("Karl-Bücher-Str.");
        break;
    }
    case 180757:
    {
        returnValue = F("Karl-Büchl-Weg");
        break;
    }
    case 180758:
    {
        returnValue = F("Karl-Bückart-Str.");
        break;
    }
    case 180759:
    {
        returnValue = F("Karl-Bührer-Str.");
        break;
    }
    case 180760:
    {
        returnValue = F("Karl-Büthe-Platz");
        break;
    }
    case 180761:
    {
        returnValue = F("Karl-Büttner-Ring");
        break;
    }
    case 180762:
    {
        returnValue = F("Karl-Büttner-Str.");
        break;
    }
    case 180763:
    {
        returnValue = F("Karl-Carstens-Brücke");
        break;
    }
    case 180764:
    {
        returnValue = F("Karl-Carstens-Platz");
        break;
    }
    case 180765:
    {
        returnValue = F("Karl-Carstens-Ring");
        break;
    }
    case 180766:
    {
        returnValue = F("Karl-Carstens-Str.");
        break;
    }
    case 180767:
    {
        returnValue = F("Karl-Carstens-Wanderweg");
        break;
    }
    case 180768:
    {
        returnValue = F("Karl-Carstens-Weg");
        break;
    }
    case 180769:
    {
        returnValue = F("Karl-Caspar-Str.");
        break;
    }
    case 180770:
    {
        returnValue = F("Karl-Cheret-Str.");
        break;
    }
    case 180771:
    {
        returnValue = F("Karl-Christ-Str.");
        break;
    }
    case 180772:
    {
        returnValue = F("Karl-Christoffel-Weg");
        break;
    }
    case 180773:
    {
        returnValue = F("Karl-Claus-Str.");
        break;
    }
    case 180774:
    {
        returnValue = F("Karl-Conrad-Weg");
        break;
    }
    case 180775:
    {
        returnValue = F("Karl-Conzelmann-Str.");
        break;
    }
    case 180776:
    {
        returnValue = F("Karl-Custer-Str.");
        break;
    }
    case 180777:
    {
        returnValue = F("Karl-Dangel-Str.");
        break;
    }
    case 180778:
    {
        returnValue = F("Karl-Daniels-Platz");
        break;
    }
    case 180779:
    {
        returnValue = F("Karl-Danner-Str.");
        break;
    }
    case 180780:
    {
        returnValue = F("Karl-Danner-Weg");
        break;
    }
    case 180781:
    {
        returnValue = F("Karl-Dehner-Str.");
        break;
    }
    case 180782:
    {
        returnValue = F("Karl-Delisle-Str.");
        break;
    }
    case 180783:
    {
        returnValue = F("Karl-Demmer-Weg");
        break;
    }
    case 180784:
    {
        returnValue = F("Karl-Denzler-Str.");
        break;
    }
    case 180785:
    {
        returnValue = F("Karl-Deubel-Str.");
        break;
    }
    case 180786:
    {
        returnValue = F("Karl-Diehl-Str.");
        break;
    }
    case 180787:
    {
        returnValue = F("Karl-Dieter-Str.");
        break;
    }
    case 180788:
    {
        returnValue = F("Karl-Dietrich-Adam-Weg");
        break;
    }
    case 180789:
    {
        returnValue = F("Karl-Dietrich-Str.");
        break;
    }
    case 180790:
    {
        returnValue = F("Karl-Dietz-Str.");
        break;
    }
    case 180791:
    {
        returnValue = F("Karl-Dietze-Str.");
        break;
    }
    case 180792:
    {
        returnValue = F("Karl-Dilger-Platz");
        break;
    }
    case 180793:
    {
        returnValue = F("Karl-Dillinger-Str.");
        break;
    }
    case 180794:
    {
        returnValue = F("Karl-Dimpl-Str.");
        break;
    }
    case 180795:
    {
        returnValue = F("Karl-Dingermann-Platz");
        break;
    }
    case 180796:
    {
        returnValue = F("Karl-Dithmar-Str.");
        break;
    }
    case 180797:
    {
        returnValue = F("Karl-Doerbecker-Str.");
        break;
    }
    case 180798:
    {
        returnValue = F("Karl-Domdey-Str.");
        break;
    }
    case 180799:
    {
        returnValue = F("Karl-Dompert-Str.");
        break;
    }
    case 180800:
    {
        returnValue = F("Karl-Donndorf-Weg");
        break;
    }
    case 180801:
    {
        returnValue = F("Karl-Dorpus-Weg");
        break;
    }
    case 180802:
    {
        returnValue = F("Karl-Dowidat-Str.");
        break;
    }
    case 180803:
    {
        returnValue = F("Karl-Drais-Str.");
        break;
    }
    case 180804:
    {
        returnValue = F("Karl-Drebert-Str.");
        break;
    }
    case 180805:
    {
        returnValue = F("Karl-Drechsler-Weg");
        break;
    }
    case 180806:
    {
        returnValue = F("Karl-Dreher-Str.");
        break;
    }
    case 180807:
    {
        returnValue = F("Karl-Dresler-Str.");
        break;
    }
    case 180808:
    {
        returnValue = F("Karl-Dressel-Str.");
        break;
    }
    case 180809:
    {
        returnValue = F("Karl-Drilling-Str.");
        break;
    }
    case 180810:
    {
        returnValue = F("Karl-Duchmann-Weg");
        break;
    }
    case 180811:
    {
        returnValue = F("Karl-Dufner-Str.");
        break;
    }
    case 180812:
    {
        returnValue = F("Karl-Dungs-Platz");
        break;
    }
    case 180813:
    {
        returnValue = F("Karl-Duwe-Str.");
        break;
    }
    case 180814:
    {
        returnValue = F("Karl-Döft-Str.");
        break;
    }
    case 180815:
    {
        returnValue = F("Karl-Dönges-Str.");
        break;
    }
    case 180816:
    {
        returnValue = F("Karl-Dörfler-Weg");
        break;
    }
    case 180817:
    {
        returnValue = F("Karl-Dürr-Weg");
        break;
    }
    case 180818:
    {
        returnValue = F("Karl-Ebenauer-Ring");
        break;
    }
    case 180819:
    {
        returnValue = F("Karl-Eberhard-Str.");
        break;
    }
    case 180820:
    {
        returnValue = F("Karl-Eberle-Str.");
        break;
    }
    case 180821:
    {
        returnValue = F("Karl-Echternacht-Str.");
        break;
    }
    case 180822:
    {
        returnValue = F("Karl-Eckel-Weg");
        break;
    }
    case 180823:
    {
        returnValue = F("Karl-Egmond-Str.");
        break;
    }
    case 180824:
    {
        returnValue = F("Karl-Ehlers-Str.");
        break;
    }
    case 180825:
    {
        returnValue = F("Karl-Ehmann-Str.");
        break;
    }
    case 180826:
    {
        returnValue = F("Karl-Ehrhard-Str.");
        break;
    }
    case 180827:
    {
        returnValue = F("Karl-Eichler-Str.");
        break;
    }
    case 180828:
    {
        returnValue = F("Karl-Eidmann-Str.");
        break;
    }
    case 180829:
    {
        returnValue = F("Karl-Eilers-Str.");
        break;
    }
    case 180830:
    {
        returnValue = F("Karl-Einhart-Str.");
        break;
    }
    case 180831:
    {
        returnValue = F("Karl-Endriß-Str.");
        break;
    }
    case 180832:
    {
        returnValue = F("Karl-Endrös-Weg");
        break;
    }
    case 180833:
    {
        returnValue = F("Karl-Engelhardt-Str.");
        break;
    }
    case 180834:
    {
        returnValue = F("Karl-Engler-Str.");
        break;
    }
    case 180835:
    {
        returnValue = F("Karl-Englert-Str.");
        break;
    }
    case 180836:
    {
        returnValue = F("Karl-Epple-Str.");
        break;
    }
    case 180837:
    {
        returnValue = F("Karl-Erb-Ring");
        break;
    }
    case 180838:
    {
        returnValue = F("Karl-Ernst-Knodt-Str.");
        break;
    }
    case 180839:
    {
        returnValue = F("Karl-Ernst-Levy-Weg");
        break;
    }
    case 180840:
    {
        returnValue = F("Karl-Ernst-Rahtgens-Str.");
        break;
    }
    case 180841:
    {
        returnValue = F("Karl-Ernst-Str.");
        break;
    }
    case 180842:
    {
        returnValue = F("Karl-Ernst-Weg");
        break;
    }
    case 180843:
    {
        returnValue = F("Karl-Ertl-Str.");
        break;
    }
    case 180844:
    {
        returnValue = F("Karl-Esser-Str.");
        break;
    }
    case 180845:
    {
        returnValue = F("Karl-Eugen-Fischer-Str.");
        break;
    }
    case 180846:
    {
        returnValue = F("Karl-Eugen-Koehl-Weg");
        break;
    }
    case 180847:
    {
        returnValue = F("Karl-Eugen-Pitsch-Weg");
        break;
    }
    case 180848:
    {
        returnValue = F("Karl-Eugen-Weg");
        break;
    }
    case 180849:
    {
        returnValue = F("Karl-Evang-Str.");
        break;
    }
    case 180850:
    {
        returnValue = F("Karl-Eßlinger-Weg");
        break;
    }
    case 180851:
    {
        returnValue = F("Karl-F.-Braun-Str.");
        break;
    }
    case 180852:
    {
        returnValue = F("Karl-F.-Friccius-Str.");
        break;
    }
    case 180853:
    {
        returnValue = F("Karl-F.-Kerner-Str.");
        break;
    }
    case 180854:
    {
        returnValue = F("Karl-Falkenberg-Brücke");
        break;
    }
    case 180855:
    {
        returnValue = F("Karl-Faller-Str.");
        break;
    }
    case 180856:
    {
        returnValue = F("Karl-Fanz-Str.");
        break;
    }
    case 180857:
    {
        returnValue = F("Karl-Feederle-Str.");
        break;
    }
    case 180858:
    {
        returnValue = F("Karl-Fegers-Str.");
        break;
    }
    case 180859:
    {
        returnValue = F("Karl-Fehr-Str.");
        break;
    }
    case 180860:
    {
        returnValue = F("Karl-Feldmann-Str.");
        break;
    }
    case 180861:
    {
        returnValue = F("Karl-Ferdinand-Becker-Weg");
        break;
    }
    case 180862:
    {
        returnValue = F("Karl-Ferdinand-Braun-Ring");
        break;
    }
    case 180863:
    {
        returnValue = F("Karl-Ferdinand-Braun-Str.");
        break;
    }
    case 180864:
    {
        returnValue = F("Karl-Ferdinand-Braun-Weg");
        break;
    }
    case 180865:
    {
        returnValue = F("Karl-Ferdinand-Broll-Str.");
        break;
    }
    case 180866:
    {
        returnValue = F("Karl-Ferdinant-Braun-Str.");
        break;
    }
    case 180867:
    {
        returnValue = F("Karl-Ferlemann-Str.");
        break;
    }
    case 180868:
    {
        returnValue = F("Karl-Feuerstein-Str.");
        break;
    }
    case 180869:
    {
        returnValue = F("Karl-Feulner-Str.");
        break;
    }
    case 180870:
    {
        returnValue = F("Karl-Fichtel-Str.");
        break;
    }
    case 180871:
    {
        returnValue = F("Karl-Fichtl-Weg");
        break;
    }
    case 180872:
    {
        returnValue = F("Karl-Fiedler-Str.");
        break;
    }
    case 180873:
    {
        returnValue = F("Karl-Fiesel-Str.");
        break;
    }
    case 180874:
    {
        returnValue = F("Karl-Fill-Weg");
        break;
    }
    case 180875:
    {
        returnValue = F("Karl-Finkelnburg-Str.");
        break;
    }
    case 180876:
    {
        returnValue = F("Karl-Fischer-Str.");
        break;
    }
    case 180877:
    {
        returnValue = F("Karl-Fischer-Weg");
        break;
    }
    case 180878:
    {
        returnValue = F("Karl-Fissen-Str.");
        break;
    }
    case 180879:
    {
        returnValue = F("Karl-Fittler-Str.");
        break;
    }
    case 180880:
    {
        returnValue = F("Karl-Flehmig-Str.");
        break;
    }
    case 180881:
    {
        returnValue = F("Karl-Flesch-Str.");
        break;
    }
    case 180882:
    {
        returnValue = F("Karl-Florenz-Str.");
        break;
    }
    case 180883:
    {
        returnValue = F("Karl-Flößer-Str.");
        break;
    }
    case 180884:
    {
        returnValue = F("Karl-Flügel-Platz");
        break;
    }
    case 180885:
    {
        returnValue = F("Karl-Foerster-Str.");
        break;
    }
    case 180886:
    {
        returnValue = F("Karl-Follen-Str.");
        break;
    }
    case 180887:
    {
        returnValue = F("Karl-Forst-Str.");
        break;
    }
    case 180888:
    {
        returnValue = F("Karl-Frank-Weg");
        break;
    }
    case 180889:
    {
        returnValue = F("Karl-Franz-Str.");
        break;
    }
    case 180890:
    {
        returnValue = F("Karl-Frasch-Str.");
        break;
    }
    case 180891:
    {
        returnValue = F("Karl-Frech-Str.");
        break;
    }
    case 180892:
    {
        returnValue = F("Karl-Freesen-Weg");
        break;
    }
    case 180893:
    {
        returnValue = F("Karl-Freiherr-von-Fritsch-Str.");
        break;
    }
    case 180894:
    {
        returnValue = F("Karl-Freitag-Park");
        break;
    }
    case 180895:
    {
        returnValue = F("Karl-Freund-Str.");
        break;
    }
    case 180896:
    {
        returnValue = F("Karl-Frey-Str.");
        break;
    }
    case 180897:
    {
        returnValue = F("Karl-Frey-Weg");
        break;
    }
    case 180898:
    {
        returnValue = F("Karl-Freyberg-Str.");
        break;
    }
    case 180899:
    {
        returnValue = F("Karl-Friederich-Str.");
        break;
    }
    case 180900:
    {
        returnValue = F("Karl-Friedr.-Goerdeler-Str.");
        break;
    }
    case 180901:
    {
        returnValue = F("Karl-Friedr.-Schinkel-Weg");
        break;
    }
    case 180902:
    {
        returnValue = F("Karl-Friedrich-Benz-Str.");
        break;
    }
    case 180903:
    {
        returnValue = F("Karl-Friedrich-Benz-Weg");
        break;
    }
    case 180904:
    {
        returnValue = F("Karl-Friedrich-Böhringer-Str.");
        break;
    }
    case 180905:
    {
        returnValue = F("Karl-Friedrich-Friesen-Str.");
        break;
    }
    case 180906:
    {
        returnValue = F("Karl-Friedrich-Gauß-Str.");
        break;
    }
    case 180907:
    {
        returnValue = F("Karl-Friedrich-Goerdeler-Str.");
        break;
    }
    case 180908:
    {
        returnValue = F("Karl-Friedrich-Huth-Str.");
        break;
    }
    case 180909:
    {
        returnValue = F("Karl-Friedrich-Klees-Str.");
        break;
    }
    case 180910:
    {
        returnValue = F("Karl-Friedrich-Rumpp-Str.");
        break;
    }
    case 180911:
    {
        returnValue = F("Karl-Friedrich-Schinkel-Str.");
        break;
    }
    case 180912:
    {
        returnValue = F("Karl-Friedrich-Schlafer-Str.");
        break;
    }
    case 180913:
    {
        returnValue = F("Karl-Friedrich-Stellbrink-Str.");
        break;
    }
    case 180914:
    {
        returnValue = F("Karl-Friedrich-Str.");
        break;
    }
    case 180915:
    {
        returnValue = F("Karl-Friedrich-Weigelt-Str.");
        break;
    }
    case 180916:
    {
        returnValue = F("Karl-Friedrich-Zelter-Weg");
        break;
    }
    case 180917:
    {
        returnValue = F("Karl-Friedrichs-Hof");
        break;
    }
    case 180918:
    {
        returnValue = F("Karl-Fries-Str.");
        break;
    }
    case 180919:
    {
        returnValue = F("Karl-Friesinger-Str.");
        break;
    }
    case 180920:
    {
        returnValue = F("Karl-Frowein-Str.");
        break;
    }
    case 180921:
    {
        returnValue = F("Karl-Fränkel-Ring");
        break;
    }
    case 180922:
    {
        returnValue = F("Karl-Fröb-Str.");
        break;
    }
    case 180923:
    {
        returnValue = F("Karl-Fröhlich-Str.");
        break;
    }
    case 180924:
    {
        returnValue = F("Karl-Fuchs-Str.");
        break;
    }
    case 180925:
    {
        returnValue = F("Karl-Fuchs-Weg");
        break;
    }
    case 180926:
    {
        returnValue = F("Karl-Funke-Str.");
        break;
    }
    case 180927:
    {
        returnValue = F("Karl-Fuss-Str.");
        break;
    }
    case 180928:
    {
        returnValue = F("Karl-Föckerer-Str.");
        break;
    }
    case 180929:
    {
        returnValue = F("Karl-Förster-Weg");
        break;
    }
    case 180930:
    {
        returnValue = F("Karl-Fürstenberg-Str.");
        break;
    }
    case 180931:
    {
        returnValue = F("Karl-Gaedcke-Str.");
        break;
    }
    case 180932:
    {
        returnValue = F("Karl-Gander-Str.");
        break;
    }
    case 180933:
    {
        returnValue = F("Karl-Gareis-Str.");
        break;
    }
    case 180934:
    {
        returnValue = F("Karl-Gatermann-Weg");
        break;
    }
    case 180935:
    {
        returnValue = F("Karl-Gattermann-Str.");
        break;
    }
    case 180936:
    {
        returnValue = F("Karl-Gatzen-Str.");
        break;
    }
    case 180937:
    {
        returnValue = F("Karl-Gaugele-Str.");
        break;
    }
    case 180938:
    {
        returnValue = F("Karl-Gayer-Str.");
        break;
    }
    case 180939:
    {
        returnValue = F("Karl-Gaßmann-Str.");
        break;
    }
    case 180940:
    {
        returnValue = F("Karl-Gehrig-Str.");
        break;
    }
    case 180941:
    {
        returnValue = F("Karl-Gehrig-Weg");
        break;
    }
    case 180942:
    {
        returnValue = F("Karl-Gehrke-Weg");
        break;
    }
    case 180943:
    {
        returnValue = F("Karl-Gehrmann-Str.");
        break;
    }
    case 180944:
    {
        returnValue = F("Karl-Geiges-Str.");
        break;
    }
    case 180945:
    {
        returnValue = F("Karl-Geiling-Str.");
        break;
    }
    case 180946:
    {
        returnValue = F("Karl-Geislinger-Str.");
        break;
    }
    case 180947:
    {
        returnValue = F("Karl-Geißler-Str.");
        break;
    }
    case 180948:
    {
        returnValue = F("Karl-Genzel-Str.");
        break;
    }
    case 180949:
    {
        returnValue = F("Karl-Georg-Mohr-Weg");
        break;
    }
    case 180950:
    {
        returnValue = F("Karl-Georg-Pfleiderer-Str.");
        break;
    }
    case 180951:
    {
        returnValue = F("Karl-Gerharts-Str.");
        break;
    }
    case 180952:
    {
        returnValue = F("Karl-Gerok-Str.");
        break;
    }
    case 180953:
    {
        returnValue = F("Karl-Gerok-Weg");
        break;
    }
    case 180954:
    {
        returnValue = F("Karl-Gerstein-Str.");
        break;
    }
    case 180955:
    {
        returnValue = F("Karl-Geräumt");
        break;
    }
    case 180956:
    {
        returnValue = F("Karl-Geuppert-Str.");
        break;
    }
    case 180957:
    {
        returnValue = F("Karl-Geusen-Str.");
        break;
    }
    case 180958:
    {
        returnValue = F("Karl-Gierlichs-Str.");
        break;
    }
    case 180959:
    {
        returnValue = F("Karl-Giermann-Str.");
        break;
    }
    case 180960:
    {
        returnValue = F("Karl-Giesen-Str.");
        break;
    }
    case 180961:
    {
        returnValue = F("Karl-Gilpert-Weg");
        break;
    }
    case 180962:
    {
        returnValue = F("Karl-Gissinger-Str.");
        break;
    }
    case 180963:
    {
        returnValue = F("Karl-Gjellerup-Str.");
        break;
    }
    case 180964:
    {
        returnValue = F("Karl-Glaser-Str.");
        break;
    }
    case 180965:
    {
        returnValue = F("Karl-Glatz-Weg");
        break;
    }
    case 180966:
    {
        returnValue = F("Karl-Glauner-Str.");
        break;
    }
    case 180967:
    {
        returnValue = F("Karl-Glockner-Str.");
        break;
    }
    case 180968:
    {
        returnValue = F("Karl-Glöckner-Str.");
        break;
    }
    case 180969:
    {
        returnValue = F("Karl-Goerdeler-Str.");
        break;
    }
    case 180970:
    {
        returnValue = F("Karl-Goerdeler­-Str.");
        break;
    }
    case 180971:
    {
        returnValue = F("Karl-Gonser-Str.");
        break;
    }
    case 180972:
    {
        returnValue = F("Karl-Graf-Str.");
        break;
    }
    case 180973:
    {
        returnValue = F("Karl-Graf-von-Spreti-Str.");
        break;
    }
    case 180974:
    {
        returnValue = F("Karl-Greiner-Str.");
        break;
    }
    case 180975:
    {
        returnValue = F("Karl-Greiner-Weg");
        break;
    }
    case 180976:
    {
        returnValue = F("Karl-Greis-Str.");
        break;
    }
    case 180977:
    {
        returnValue = F("Karl-Grillenberger-Str.");
        break;
    }
    case 180978:
    {
        returnValue = F("Karl-Gros-Str.");
        break;
    }
    case 180979:
    {
        returnValue = F("Karl-Groß-Str.");
        break;
    }
    case 180980:
    {
        returnValue = F("Karl-Große-Str.");
        break;
    }
    case 180981:
    {
        returnValue = F("Karl-Großhans-Weg");
        break;
    }
    case 180982:
    {
        returnValue = F("Karl-Gruhl-Str.");
        break;
    }
    case 180983:
    {
        returnValue = F("Karl-Grunert-Str.");
        break;
    }
    case 180984:
    {
        returnValue = F("Karl-Grün-Str.");
        break;
    }
    case 180985:
    {
        returnValue = F("Karl-Grüneklee-Str.");
        break;
    }
    case 180986:
    {
        returnValue = F("Karl-Grüter-Str.");
        break;
    }
    case 180987:
    {
        returnValue = F("Karl-Gumpert-Str.");
        break;
    }
    case 180988:
    {
        returnValue = F("Karl-Gustav-Str.");
        break;
    }
    case 180989:
    {
        returnValue = F("Karl-Gustav-Wunder-Str.");
        break;
    }
    case 180990:
    {
        returnValue = F("Karl-Gutkes-Weg");
        break;
    }
    case 180991:
    {
        returnValue = F("Karl-Gärttner-Str.");
        break;
    }
    case 180992:
    {
        returnValue = F("Karl-Göbel-Str.");
        break;
    }
    case 180993:
    {
        returnValue = F("Karl-Göbels-Str.");
        break;
    }
    case 180994:
    {
        returnValue = F("Karl-Göhner-Str.");
        break;
    }
    case 180995:
    {
        returnValue = F("Karl-Gördeler-Weg");
        break;
    }
    case 180996:
    {
        returnValue = F("Karl-Götz-Str.");
        break;
    }
    case 180997:
    {
        returnValue = F("Karl-Günther Schleifweg");
        break;
    }
    case 180998:
    {
        returnValue = F("Karl-Günther-Str.");
        break;
    }
    case 180999:
    {
        returnValue = F("Karl-Güntzel-Str.");
        break;
    }
    case 181000:
    {
        returnValue = F("Karl-Günzel-Str.");
        break;
    }
    case 181001:
    {
        returnValue = F("Karl-Haarmann-Str.");
        break;
    }
    case 181002:
    {
        returnValue = F("Karl-Haberland-Str.");
        break;
    }
    case 181003:
    {
        returnValue = F("Karl-Haberstock-Str.");
        break;
    }
    case 181004:
    {
        returnValue = F("Karl-Hack-Allee");
        break;
    }
    case 181005:
    {
        returnValue = F("Karl-Hackl-Str.");
        break;
    }
    case 181006:
    {
        returnValue = F("Karl-Haddewig-Str.");
        break;
    }
    case 181007:
    {
        returnValue = F("Karl-Haferung-Str.");
        break;
    }
    case 181008:
    {
        returnValue = F("Karl-Hafner-Str.");
        break;
    }
    case 181009:
    {
        returnValue = F("Karl-Hagedorn-Str.");
        break;
    }
    case 181010:
    {
        returnValue = F("Karl-Hagemeister-Str.");
        break;
    }
    case 181011:
    {
        returnValue = F("Karl-Hagemeister-Weg");
        break;
    }
    case 181012:
    {
        returnValue = F("Karl-Hahn-Str.");
        break;
    }
    case 181013:
    {
        returnValue = F("Karl-Hahne-Weg");
        break;
    }
    case 181014:
    {
        returnValue = F("Karl-Hahner-Weg");
        break;
    }
    case 181015:
    {
        returnValue = F("Karl-Haider-Str.");
        break;
    }
    case 181016:
    {
        returnValue = F("Karl-Halbig-Str.");
        break;
    }
    case 181017:
    {
        returnValue = F("Karl-Hald-Str.");
        break;
    }
    case 181018:
    {
        returnValue = F("Karl-Hall-Str.");
        break;
    }
    case 181019:
    {
        returnValue = F("Karl-Hamann-Str.");
        break;
    }
    case 181020:
    {
        returnValue = F("Karl-Hammann Weg");
        break;
    }
    case 181021:
    {
        returnValue = F("Karl-Hans-Bauer-Str.");
        break;
    }
    case 181022:
    {
        returnValue = F("Karl-Hans-Lagershausen-Str.");
        break;
    }
    case 181023:
    {
        returnValue = F("Karl-Hans-Str.");
        break;
    }
    case 181024:
    {
        returnValue = F("Karl-Hans-Strobl-Str.");
        break;
    }
    case 181025:
    {
        returnValue = F("Karl-Harms-Str.");
        break;
    }
    case 181026:
    {
        returnValue = F("Karl-Harr-Str.");
        break;
    }
    case 181027:
    {
        returnValue = F("Karl-Harre-Str.");
        break;
    }
    case 181028:
    {
        returnValue = F("Karl-Hartig-Str.");
        break;
    }
    case 181029:
    {
        returnValue = F("Karl-Hartmann-Str.");
        break;
    }
    case 181030:
    {
        returnValue = F("Karl-Hass-Str.");
        break;
    }
    case 181031:
    {
        returnValue = F("Karl-Hasse-Weg");
        break;
    }
    case 181032:
    {
        returnValue = F("Karl-Haupt-Str.");
        break;
    }
    case 181033:
    {
        returnValue = F("Karl-Hauptmannl-Str.");
        break;
    }
    case 181034:
    {
        returnValue = F("Karl-Haußknecht-Str.");
        break;
    }
    case 181035:
    {
        returnValue = F("Karl-Haußmann-Str.");
        break;
    }
    case 181036:
    {
        returnValue = F("Karl-Havermann-Str.");
        break;
    }
    case 181037:
    {
        returnValue = F("Karl-Hawermann-Str.");
        break;
    }
    case 181038:
    {
        returnValue = F("Karl-Hechler-Weg");
        break;
    }
    case 181039:
    {
        returnValue = F("Karl-Heckel-Weg");
        break;
    }
    case 181040:
    {
        returnValue = F("Karl-Heeg-Str.");
        break;
    }
    case 181041:
    {
        returnValue = F("Karl-Hefner-Str.");
        break;
    }
    case 181042:
    {
        returnValue = F("Karl-Heft-Str.");
        break;
    }
    case 181043:
    {
        returnValue = F("Karl-Heidenblut-Weg");
        break;
    }
    case 181044:
    {
        returnValue = F("Karl-Heilmann-Block");
        break;
    }
    case 181045:
    {
        returnValue = F("Karl-Heim-Str.");
        break;
    }
    case 181046:
    {
        returnValue = F("Karl-Heine-Platz");
        break;
    }
    case 181047:
    {
        returnValue = F("Karl-Heine-Ring");
        break;
    }
    case 181048:
    {
        returnValue = F("Karl-Heine-Str.");
        break;
    }
    case 181049:
    {
        returnValue = F("Karl-Heinrich-Käferle-Str.");
        break;
    }
    case 181050:
    {
        returnValue = F("Karl-Heinrich-Langspecht-Weg");
        break;
    }
    case 181051:
    {
        returnValue = F("Karl-Heinrich-Str.");
        break;
    }
    case 181052:
    {
        returnValue = F("Karl-Heinrich-Ulrichs-Platz");
        break;
    }
    case 181053:
    {
        returnValue = F("Karl-Heinrich-Ulrichs-Str.");
        break;
    }
    case 181054:
    {
        returnValue = F("Karl-Heinrich-Waggerl-Str.");
        break;
    }
    case 181055:
    {
        returnValue = F("Karl-Heinrich-Wülfrath-Str.");
        break;
    }
    case 181056:
    {
        returnValue = F("Karl-Heinz Christian Platz");
        break;
    }
    case 181057:
    {
        returnValue = F("Karl-Heinz Parplies-Weg");
        break;
    }
    case 181058:
    {
        returnValue = F("Karl-Heinz-Barth-Str.");
        break;
    }
    case 181059:
    {
        returnValue = F("Karl-Heinz-Beckurts-Str.");
        break;
    }
    case 181060:
    {
        returnValue = F("Karl-Heinz-Bona-Str.");
        break;
    }
    case 181061:
    {
        returnValue = F("Karl-Heinz-Bott-Weg");
        break;
    }
    case 181062:
    {
        returnValue = F("Karl-Heinz-Bremser-Anlage");
        break;
    }
    case 181063:
    {
        returnValue = F("Karl-Heinz-Buhne-Platz");
        break;
    }
    case 181064:
    {
        returnValue = F("Karl-Heinz-Ewert-Str.");
        break;
    }
    case 181065:
    {
        returnValue = F("Karl-Heinz-Fräger-Str.");
        break;
    }
    case 181066:
    {
        returnValue = F("Karl-Heinz-Gehrmann-Weg");
        break;
    }
    case 181067:
    {
        returnValue = F("Karl-Heinz-Häse-Weg");
        break;
    }
    case 181068:
    {
        returnValue = F("Karl-Heinz-Kipp-Str.");
        break;
    }
    case 181069:
    {
        returnValue = F("Karl-Heinz-Klingen-Str.");
        break;
    }
    case 181070:
    {
        returnValue = F("Karl-Heinz-Lüth-Str.");
        break;
    }
    case 181071:
    {
        returnValue = F("Karl-Heinz-Pohlschmidt-Str.");
        break;
    }
    case 181072:
    {
        returnValue = F("Karl-Heinz-Prichal-Weg");
        break;
    }
    case 181073:
    {
        returnValue = F("Karl-Heinz-Schellenberg-Weg");
        break;
    }
    case 181074:
    {
        returnValue = F("Karl-Heinz-Schreiber-Str.");
        break;
    }
    case 181075:
    {
        returnValue = F("Karl-Heinz-Stirner Platz");
        break;
    }
    case 181076:
    {
        returnValue = F("Karl-Heinz-Viehoff-Str.");
        break;
    }
    case 181077:
    {
        returnValue = F("Karl-Heinz-Volkenrath-Str.");
        break;
    }
    case 181078:
    {
        returnValue = F("Karl-Heise-Str.");
        break;
    }
    case 181079:
    {
        returnValue = F("Karl-Heiz-Haarstift-Weg");
        break;
    }
    case 181080:
    {
        returnValue = F("Karl-Helbig-Str.");
        break;
    }
    case 181081:
    {
        returnValue = F("Karl-Helfferich-Str.");
        break;
    }
    case 181082:
    {
        returnValue = F("Karl-Heller-Str.");
        break;
    }
    case 181083:
    {
        returnValue = F("Karl-Hemmer-Str.");
        break;
    }
    case 181084:
    {
        returnValue = F("Karl-Hengsten-Weg");
        break;
    }
    case 181085:
    {
        returnValue = F("Karl-Henke-Weg");
        break;
    }
    case 181086:
    {
        returnValue = F("Karl-Hennecke-Str.");
        break;
    }
    case 181087:
    {
        returnValue = F("Karl-Henschel-Str.");
        break;
    }
    case 181088:
    {
        returnValue = F("Karl-Herbster-Platz");
        break;
    }
    case 181089:
    {
        returnValue = F("Karl-Herbster-Str.");
        break;
    }
    case 181090:
    {
        returnValue = F("Karl-Herdt-Weg");
        break;
    }
    case 181091:
    {
        returnValue = F("Karl-Hereth-Str.");
        break;
    }
    case 181092:
    {
        returnValue = F("Karl-Hergt-Str.");
        break;
    }
    case 181093:
    {
        returnValue = F("Karl-Hermann-Flach-Weg");
        break;
    }
    case 181094:
    {
        returnValue = F("Karl-Hermann-Jacob-Weg");
        break;
    }
    case 181095:
    {
        returnValue = F("Karl-Hermann-Str.");
        break;
    }
    case 181096:
    {
        returnValue = F("Karl-Hermann-Zahn-Str.");
        break;
    }
    case 181097:
    {
        returnValue = F("Karl-Herold-Str.");
        break;
    }
    case 181098:
    {
        returnValue = F("Karl-Herriger-Weg");
        break;
    }
    case 181099:
    {
        returnValue = F("Karl-Hertel-Str.");
        break;
    }
    case 181100:
    {
        returnValue = F("Karl-Hertelt-Str.");
        break;
    }
    case 181101:
    {
        returnValue = F("Karl-Hesselbacher-Str.");
        break;
    }
    case 181102:
    {
        returnValue = F("Karl-Hetzel-Str.");
        break;
    }
    case 181103:
    {
        returnValue = F("Karl-Heyer-Str.");
        break;
    }
    case 181104:
    {
        returnValue = F("Karl-Heß-Str.");
        break;
    }
    case 181105:
    {
        returnValue = F("Karl-Hiller-Str.");
        break;
    }
    case 181106:
    {
        returnValue = F("Karl-Hillers-Str.");
        break;
    }
    case 181107:
    {
        returnValue = F("Karl-Hillmer-Str.");
        break;
    }
    case 181108:
    {
        returnValue = F("Karl-Hilmes-Str.");
        break;
    }
    case 181109:
    {
        returnValue = F("Karl-Hintze-Weg");
        break;
    }
    case 181110:
    {
        returnValue = F("Karl-Hinze-Weg");
        break;
    }
    case 181111:
    {
        returnValue = F("Karl-Hirnbein-Gedächtnisweg");
        break;
    }
    case 181112:
    {
        returnValue = F("Karl-Hirnbein-Str.");
        break;
    }
    case 181113:
    {
        returnValue = F("Karl-Hoch-Anlage");
        break;
    }
    case 181114:
    {
        returnValue = F("Karl-Hoch-Str.");
        break;
    }
    case 181115:
    {
        returnValue = F("Karl-Hofbauer-Str.");
        break;
    }
    case 181116:
    {
        returnValue = F("Karl-Hofbauer-Weg");
        break;
    }
    case 181117:
    {
        returnValue = F("Karl-Hofer-Str.");
        break;
    }
    case 181118:
    {
        returnValue = F("Karl-Hoffmann-Str.");
        break;
    }
    case 181119:
    {
        returnValue = F("Karl-Hoffmeister-Platz");
        break;
    }
    case 181120:
    {
        returnValue = F("Karl-Hoffmeister-Str.");
        break;
    }
    case 181121:
    {
        returnValue = F("Karl-Hofmann-Anlage");
        break;
    }
    case 181122:
    {
        returnValue = F("Karl-Hofmann-Str.");
        break;
    }
    case 181123:
    {
        returnValue = F("Karl-Hofmann-Weg");
        break;
    }
    case 181124:
    {
        returnValue = F("Karl-Hohloch-Str.");
        break;
    }
    case 181125:
    {
        returnValue = F("Karl-Hohmann-Str.");
        break;
    }
    case 181126:
    {
        returnValue = F("Karl-Holl-Weg");
        break;
    }
    case 181127:
    {
        returnValue = F("Karl-Holzer-Str.");
        break;
    }
    case 181128:
    {
        returnValue = F("Karl-Holzgartner-Str.");
        break;
    }
    case 181129:
    {
        returnValue = F("Karl-Homann-Str.");
        break;
    }
    case 181130:
    {
        returnValue = F("Karl-Hopf-Str.");
        break;
    }
    case 181131:
    {
        returnValue = F("Karl-Horn-Str.");
        break;
    }
    case 181132:
    {
        returnValue = F("Karl-Horn-Weg");
        break;
    }
    case 181133:
    {
        returnValue = F("Karl-Houben-Str.");
        break;
    }
    case 181134:
    {
        returnValue = F("Karl-Hoyer-Str.");
        break;
    }
    case 181135:
    {
        returnValue = F("Karl-Hubbuch-Str.");
        break;
    }
    case 181136:
    {
        returnValue = F("Karl-Hubbuch-Weg");
        break;
    }
    case 181137:
    {
        returnValue = F("Karl-Huber-Str.");
        break;
    }
    case 181138:
    {
        returnValue = F("Karl-Huber-Weg");
        break;
    }
    case 181139:
    {
        returnValue = F("Karl-Hugel-Str.");
        break;
    }
    case 181140:
    {
        returnValue = F("Karl-Huth-Str.");
        break;
    }
    case 181141:
    {
        returnValue = F("Karl-Huther-Str.");
        break;
    }
    case 181142:
    {
        returnValue = F("Karl-Hutter-Str.");
        break;
    }
    case 181143:
    {
        returnValue = F("Karl-Härig-Str.");
        break;
    }
    case 181144:
    {
        returnValue = F("Karl-Härle-Str.");
        break;
    }
    case 181145:
    {
        returnValue = F("Karl-Härtel-Str.");
        break;
    }
    case 181146:
    {
        returnValue = F("Karl-Härting-Str.");
        break;
    }
    case 181147:
    {
        returnValue = F("Karl-Högner-Str.");
        break;
    }
    case 181148:
    {
        returnValue = F("Karl-Höller-Weg");
        break;
    }
    case 181149:
    {
        returnValue = F("Karl-Höltken-Weg");
        break;
    }
    case 181150:
    {
        returnValue = F("Karl-Hölzfäller-Str.");
        break;
    }
    case 181151:
    {
        returnValue = F("Karl-Hörhold-Str.");
        break;
    }
    case 181152:
    {
        returnValue = F("Karl-Hübsch-Weg");
        break;
    }
    case 181153:
    {
        returnValue = F("Karl-Hüfner-Str.");
        break;
    }
    case 181154:
    {
        returnValue = F("Karl-Hügel-Str.");
        break;
    }
    case 181155:
    {
        returnValue = F("Karl-Hühnerbein-Str.");
        break;
    }
    case 181156:
    {
        returnValue = F("Karl-Hüller-Str.");
        break;
    }
    case 181157:
    {
        returnValue = F("Karl-Hüls-Str.");
        break;
    }
    case 181158:
    {
        returnValue = F("Karl-Ibach-Weg");
        break;
    }
    case 181159:
    {
        returnValue = F("Karl-Ihl-Str.");
        break;
    }
    case 181160:
    {
        returnValue = F("Karl-Ilse-Str.");
        break;
    }
    case 181161:
    {
        returnValue = F("Karl-Imhoff-Str.");
        break;
    }
    case 181162:
    {
        returnValue = F("Karl-Imhoff-Weg");
        break;
    }
    case 181163:
    {
        returnValue = F("Karl-Immer-Str.");
        break;
    }
    case 181164:
    {
        returnValue = F("Karl-Immermann-Str.");
        break;
    }
    case 181165:
    {
        returnValue = F("Karl-Ingenerf-Str.");
        break;
    }
    case 181166:
    {
        returnValue = F("Karl-Jaggy-Str.");
        break;
    }
    case 181167:
    {
        returnValue = F("Karl-Jakob-Hirsch-Weg");
        break;
    }
    case 181168:
    {
        returnValue = F("Karl-Janssen-Str.");
        break;
    }
    case 181169:
    {
        returnValue = F("Karl-Jarres-Platz");
        break;
    }
    case 181170:
    {
        returnValue = F("Karl-Jarres-Str.");
        break;
    }
    case 181171:
    {
        returnValue = F("Karl-Jaspers-Anlagen");
        break;
    }
    case 181172:
    {
        returnValue = F("Karl-Jaspers-Str.");
        break;
    }
    case 181173:
    {
        returnValue = F("Karl-Jaspers-Weg");
        break;
    }
    case 181174:
    {
        returnValue = F("Karl-Jatho-Weg");
        break;
    }
    case 181175:
    {
        returnValue = F("Karl-Jegg-Str.");
        break;
    }
    case 181176:
    {
        returnValue = F("Karl-Jentsch-Str.");
        break;
    }
    case 181177:
    {
        returnValue = F("Karl-John-Str.");
        break;
    }
    case 181178:
    {
        returnValue = F("Karl-Joos-Str.");
        break;
    }
    case 181179:
    {
        returnValue = F("Karl-Josef-Augustin-Str.");
        break;
    }
    case 181180:
    {
        returnValue = F("Karl-Josef-Ernst-Platz");
        break;
    }
    case 181181:
    {
        returnValue = F("Karl-Josef-Oehler-Str.");
        break;
    }
    case 181182:
    {
        returnValue = F("Karl-Josef-Oehler-Weg");
        break;
    }
    case 181183:
    {
        returnValue = F("Karl-Josef-Schlitt-Str.");
        break;
    }
    case 181184:
    {
        returnValue = F("Karl-Julius-Cranz-Str.");
        break;
    }
    case 181185:
    {
        returnValue = F("Karl-Julius-Weber-Str.");
        break;
    }
    case 181186:
    {
        returnValue = F("Karl-Jung-Anlage");
        break;
    }
    case 181187:
    {
        returnValue = F("Karl-Jung-Str.");
        break;
    }
    case 181188:
    {
        returnValue = F("Karl-Jungbluth-Str.");
        break;
    }
    case 181189:
    {
        returnValue = F("Karl-Junginger-Platz");
        break;
    }
    case 181190:
    {
        returnValue = F("Karl-Junker-Str.");
        break;
    }
    case 181191:
    {
        returnValue = F("Karl-Justi-Str.");
        break;
    }
    case 181192:
    {
        returnValue = F("Karl-Jäck-Str.");
        break;
    }
    case 181193:
    {
        returnValue = F("Karl-Jäger-Str.");
        break;
    }
    case 181194:
    {
        returnValue = F("Karl-Jähnig-Str.");
        break;
    }
    case 181195:
    {
        returnValue = F("Karl-Jänecke-Str.");
        break;
    }
    case 181196:
    {
        returnValue = F("Karl-Jänicke-Platz");
        break;
    }
    case 181197:
    {
        returnValue = F("Karl-Kahlert-Weg");
        break;
    }
    case 181198:
    {
        returnValue = F("Karl-Kahlhöfer-Str.");
        break;
    }
    case 181199:
    {
        returnValue = F("Karl-Kaiser-Str.");
        break;
    }
    case 181200:
    {
        returnValue = F("Karl-Kaiser-Weg");
        break;
    }
    case 181201:
    {
        returnValue = F("Karl-Kaltschmid-Str.");
        break;
    }
    case 181202:
    {
        returnValue = F("Karl-Kaltwasser-Str.");
        break;
    }
    case 181203:
    {
        returnValue = F("Karl-Kammerer-Weg");
        break;
    }
    case 181204:
    {
        returnValue = F("Karl-Karch-Str.");
        break;
    }
    case 181205:
    {
        returnValue = F("Karl-Kartmann-Str.");
        break;
    }
    case 181206:
    {
        returnValue = F("Karl-Kaspar-Str.");
        break;
    }
    case 181207:
    {
        returnValue = F("Karl-Kastenholz-Str.");
        break;
    }
    case 181208:
    {
        returnValue = F("Karl-Kaufmann-Brücke");
        break;
    }
    case 181209:
    {
        returnValue = F("Karl-Kaufmann-Str.");
        break;
    }
    case 181210:
    {
        returnValue = F("Karl-Kaufmann-Weg");
        break;
    }
    case 181211:
    {
        returnValue = F("Karl-Kautsky-Str.");
        break;
    }
    case 181212:
    {
        returnValue = F("Karl-Kautsky-Weg");
        break;
    }
    case 181213:
    {
        returnValue = F("Karl-Kegel-Str.");
        break;
    }
    case 181214:
    {
        returnValue = F("Karl-Kehr-Str.");
        break;
    }
    case 181215:
    {
        returnValue = F("Karl-Keil-Str.");
        break;
    }
    case 181216:
    {
        returnValue = F("Karl-Keller-Str.");
        break;
    }
    case 181217:
    {
        returnValue = F("Karl-Kellner-Ring");
        break;
    }
    case 181218:
    {
        returnValue = F("Karl-Kellner-Str.");
        break;
    }
    case 181219:
    {
        returnValue = F("Karl-Kempter-Str.");
        break;
    }
    case 181220:
    {
        returnValue = F("Karl-Kendzia-Weg");
        break;
    }
    case 181221:
    {
        returnValue = F("Karl-Kern-Str.");
        break;
    }
    case 181222:
    {
        returnValue = F("Karl-Keßler-Str.");
        break;
    }
    case 181223:
    {
        returnValue = F("Karl-Keßler-Weg");
        break;
    }
    case 181224:
    {
        returnValue = F("Karl-Kiehm-Weg");
        break;
    }
    case 181225:
    {
        returnValue = F("Karl-Kienzle-Str.");
        break;
    }
    case 181226:
    {
        returnValue = F("Karl-Kihn-Str.");
        break;
    }
    case 181227:
    {
        returnValue = F("Karl-Kippenhahn-Str.");
        break;
    }
    case 181228:
    {
        returnValue = F("Karl-Kirchdörfer-Str.");
        break;
    }
    case 181229:
    {
        returnValue = F("Karl-Kircher-Str.");
        break;
    }
    case 181230:
    {
        returnValue = F("Karl-Kirchgeßner-Weg");
        break;
    }
    case 181231:
    {
        returnValue = F("Karl-Kirchner-Str.");
        break;
    }
    case 181232:
    {
        returnValue = F("Karl-Kirschen-Str.");
        break;
    }
    case 181233:
    {
        returnValue = F("Karl-Kirstein-Str.");
        break;
    }
    case 181234:
    {
        returnValue = F("Karl-Kisters-Str.");
        break;
    }
    case 181235:
    {
        returnValue = F("Karl-Klages-Str.");
        break;
    }
    case 181236:
    {
        returnValue = F("Karl-Klay-Str.");
        break;
    }
    case 181237:
    {
        returnValue = F("Karl-Klee-Weg");
        break;
    }
    case 181238:
    {
        returnValue = F("Karl-Klein-Ring");
        break;
    }
    case 181239:
    {
        returnValue = F("Karl-Klein-Str.");
        break;
    }
    case 181240:
    {
        returnValue = F("Karl-Kleinhans-Weg");
        break;
    }
    case 181241:
    {
        returnValue = F("Karl-Kleinschmidt-Str.");
        break;
    }
    case 181242:
    {
        returnValue = F("Karl-Kleppe-Str.");
        break;
    }
    case 181243:
    {
        returnValue = F("Karl-Kling-Str.");
        break;
    }
    case 181244:
    {
        returnValue = F("Karl-Klingler-Str.");
        break;
    }
    case 181245:
    {
        returnValue = F("Karl-Klink-Str.");
        break;
    }
    case 181246:
    {
        returnValue = F("Karl-Klockenhoff-Weg");
        break;
    }
    case 181247:
    {
        returnValue = F("Karl-Klose-Weg");
        break;
    }
    case 181248:
    {
        returnValue = F("Karl-Klostermann-Weg");
        break;
    }
    case 181249:
    {
        returnValue = F("Karl-Kloß-Str.");
        break;
    }
    case 181250:
    {
        returnValue = F("Karl-Knab-Str.");
        break;
    }
    case 181251:
    {
        returnValue = F("Karl-Knauer-Str.");
        break;
    }
    case 181252:
    {
        returnValue = F("Karl-Knauer-Weg");
        break;
    }
    case 181253:
    {
        returnValue = F("Karl-Knauf-Str.");
        break;
    }
    case 181254:
    {
        returnValue = F("Karl-Kneidl-Weg");
        break;
    }
    case 181255:
    {
        returnValue = F("Karl-Knierer-Weg");
        break;
    }
    case 181256:
    {
        returnValue = F("Karl-Knöller-Str.");
        break;
    }
    case 181257:
    {
        returnValue = F("Karl-Koch-Str.");
        break;
    }
    case 181258:
    {
        returnValue = F("Karl-Kohlbecker-Str.");
        break;
    }
    case 181259:
    {
        returnValue = F("Karl-Kohlmann-Weg");
        break;
    }
    case 181260:
    {
        returnValue = F("Karl-Kolb-Str.");
        break;
    }
    case 181261:
    {
        returnValue = F("Karl-Kolbe-Platz");
        break;
    }
    case 181262:
    {
        returnValue = F("Karl-Kollnig-Platz");
        break;
    }
    case 181263:
    {
        returnValue = F("Karl-Konrad-Str.");
        break;
    }
    case 181264:
    {
        returnValue = F("Karl-Kopp-Str.");
        break;
    }
    case 181265:
    {
        returnValue = F("Karl-Kornhaß-Str.");
        break;
    }
    case 181266:
    {
        returnValue = F("Karl-Korthaus-Str.");
        break;
    }
    case 181267:
    {
        returnValue = F("Karl-Kotzenberg-Str.");
        break;
    }
    case 181268:
    {
        returnValue = F("Karl-Kox-Str.");
        break;
    }
    case 181269:
    {
        returnValue = F("Karl-Koßmann-Str.");
        break;
    }
    case 181270:
    {
        returnValue = F("Karl-Kraft-Str.");
        break;
    }
    case 181271:
    {
        returnValue = F("Karl-Kraft-Weg");
        break;
    }
    case 181272:
    {
        returnValue = F("Karl-Krampol-Str.");
        break;
    }
    case 181273:
    {
        returnValue = F("Karl-Kraut-Str.");
        break;
    }
    case 181274:
    {
        returnValue = F("Karl-Krauth-Str.");
        break;
    }
    case 181275:
    {
        returnValue = F("Karl-Krauß-Weg");
        break;
    }
    case 181276:
    {
        returnValue = F("Karl-Krekeler-Str.");
        break;
    }
    case 181277:
    {
        returnValue = F("Karl-Kreuter-Str.");
        break;
    }
    case 181278:
    {
        returnValue = F("Karl-Kreuzer-Weg");
        break;
    }
    case 181279:
    {
        returnValue = F("Karl-Krieger-Str.");
        break;
    }
    case 181280:
    {
        returnValue = F("Karl-Krimm-Str.");
        break;
    }
    case 181281:
    {
        returnValue = F("Karl-Krische-Str.");
        break;
    }
    case 181282:
    {
        returnValue = F("Karl-Kronberger-Str.");
        break;
    }
    case 181283:
    {
        returnValue = F("Karl-Krug-Weg");
        break;
    }
    case 181284:
    {
        returnValue = F("Karl-Krull-Str.");
        break;
    }
    case 181285:
    {
        returnValue = F("Karl-Krull-Weg");
        break;
    }
    case 181286:
    {
        returnValue = F("Karl-Krumhaar-Weg");
        break;
    }
    case 181287:
    {
        returnValue = F("Karl-Kruse-Str.");
        break;
    }
    case 181288:
    {
        returnValue = F("Karl-Krämer-Str.");
        break;
    }
    case 181289:
    {
        returnValue = F("Karl-Kröckel-Str.");
        break;
    }
    case 181290:
    {
        returnValue = F("Karl-Kröger-Brücke");
        break;
    }
    case 181291:
    {
        returnValue = F("Karl-Kröger-Str.");
        break;
    }
    case 181292:
    {
        returnValue = F("Karl-Kröner-Str.");
        break;
    }
    case 181293:
    {
        returnValue = F("Karl-Krösche-Str.");
        break;
    }
    case 181294:
    {
        returnValue = F("Karl-Kuck-Str.");
        break;
    }
    case 181295:
    {
        returnValue = F("Karl-Kuenen-Str.");
        break;
    }
    case 181296:
    {
        returnValue = F("Karl-Kuffner-Str.");
        break;
    }
    case 181297:
    {
        returnValue = F("Karl-Kufner-Str.");
        break;
    }
    case 181298:
    {
        returnValue = F("Karl-Kuhn-Platz");
        break;
    }
    case 181299:
    {
        returnValue = F("Karl-Kuhn-Str.");
        break;
    }
    case 181300:
    {
        returnValue = F("Karl-Kunath-Str.");
        break;
    }
    case 181301:
    {
        returnValue = F("Karl-Kuntz-Weg");
        break;
    }
    case 181302:
    {
        returnValue = F("Karl-Kuppinger-Str.");
        break;
    }
    case 181303:
    {
        returnValue = F("Karl-Kurz-Str.");
        break;
    }
    case 181304:
    {
        returnValue = F("Karl-Kux-Weg");
        break;
    }
    case 181305:
    {
        returnValue = F("Karl-Kämpf-Allee");
        break;
    }
    case 181306:
    {
        returnValue = F("Karl-Köhler-Platz");
        break;
    }
    case 181307:
    {
        returnValue = F("Karl-Köhler-Weg");
        break;
    }
    case 181308:
    {
        returnValue = F("Karl-König-Str.");
        break;
    }
    case 181309:
    {
        returnValue = F("Karl-König-Weg");
        break;
    }
    case 181310:
    {
        returnValue = F("Karl-Königsdorfer-Str.");
        break;
    }
    case 181311:
    {
        returnValue = F("Karl-Köpfer-Weg");
        break;
    }
    case 181312:
    {
        returnValue = F("Karl-Körner-Str.");
        break;
    }
    case 181313:
    {
        returnValue = F("Karl-Kübel-Str.");
        break;
    }
    case 181314:
    {
        returnValue = F("Karl-Kübler-Str.");
        break;
    }
    case 181315:
    {
        returnValue = F("Karl-Kübler-Weg");
        break;
    }
    case 181316:
    {
        returnValue = F("Karl-Kück-Str.");
        break;
    }
    case 181317:
    {
        returnValue = F("Karl-Küffler-Str.");
        break;
    }
    case 181318:
    {
        returnValue = F("Karl-Kühlcke-Str.");
        break;
    }
    case 181319:
    {
        returnValue = F("Karl-Kühling-Weg");
        break;
    }
    case 181320:
    {
        returnValue = F("Karl-Kühn-Weg");
        break;
    }
    case 181321:
    {
        returnValue = F("Karl-Kühnle-Weg");
        break;
    }
    case 181322:
    {
        returnValue = F("Karl-Künnecke-Str");
        break;
    }
    case 181323:
    {
        returnValue = F("Karl-L.-Riehle-Str.");
        break;
    }
    case 181324:
    {
        returnValue = F("Karl-Lachmann-Str.");
        break;
    }
    case 181325:
    {
        returnValue = F("Karl-Ladenburg-Str.");
        break;
    }
    case 181326:
    {
        returnValue = F("Karl-Laible-Str.");
        break;
    }
    case 181327:
    {
        returnValue = F("Karl-Lambertz-Str.");
        break;
    }
    case 181328:
    {
        returnValue = F("Karl-Lambrecht-Str.");
        break;
    }
    case 181329:
    {
        returnValue = F("Karl-Landsteiner-Str.");
        break;
    }
    case 181330:
    {
        returnValue = F("Karl-Lang-Str.");
        break;
    }
    case 181331:
    {
        returnValue = F("Karl-Lange-Str.");
        break;
    }
    case 181332:
    {
        returnValue = F("Karl-Langer-Weg");
        break;
    }
    case 181333:
    {
        returnValue = F("Karl-Lankes-Str.");
        break;
    }
    case 181334:
    {
        returnValue = F("Karl-Lasser-Str.");
        break;
    }
    case 181335:
    {
        returnValue = F("Karl-Laue-Weg");
        break;
    }
    case 181336:
    {
        returnValue = F("Karl-Laux-Str.");
        break;
    }
    case 181337:
    {
        returnValue = F("Karl-Lax-Str.");
        break;
    }
    case 181338:
    {
        returnValue = F("Karl-Lechner-Weg");
        break;
    }
    case 181339:
    {
        returnValue = F("Karl-Lechte-Weg");
        break;
    }
    case 181340:
    {
        returnValue = F("Karl-Lederer-Platz");
        break;
    }
    case 181341:
    {
        returnValue = F("Karl-Legien-Str.");
        break;
    }
    case 181342:
    {
        returnValue = F("Karl-Legien-Weg");
        break;
    }
    case 181343:
    {
        returnValue = F("Karl-Lehnert-Str.");
        break;
    }
    case 181344:
    {
        returnValue = F("Karl-Lehr-Str.");
        break;
    }
    case 181345:
    {
        returnValue = F("Karl-Lehrburger-Str.");
        break;
    }
    case 181346:
    {
        returnValue = F("Karl-Leibrock-Str.");
        break;
    }
    case 181347:
    {
        returnValue = F("Karl-Leich-Str.");
        break;
    }
    case 181348:
    {
        returnValue = F("Karl-Leicht-Str.");
        break;
    }
    case 181349:
    {
        returnValue = F("Karl-Leidinger-Str.");
        break;
    }
    case 181350:
    {
        returnValue = F("Karl-Leiling-Allee");
        break;
    }
    case 181351:
    {
        returnValue = F("Karl-Leinfelder-Str.");
        break;
    }
    case 181352:
    {
        returnValue = F("Karl-Leis-Str.");
        break;
    }
    case 181353:
    {
        returnValue = F("Karl-Leisner-Platz");
        break;
    }
    case 181354:
    {
        returnValue = F("Karl-Leisner-Str.");
        break;
    }
    case 181355:
    {
        returnValue = F("Karl-Leisner-Weg");
        break;
    }
    case 181356:
    {
        returnValue = F("Karl-Leiss-Str.");
        break;
    }
    case 181357:
    {
        returnValue = F("Karl-Lemnitz-Str.");
        break;
    }
    case 181358:
    {
        returnValue = F("Karl-Lenhardt-Str.");
        break;
    }
    case 181359:
    {
        returnValue = F("Karl-Lenz-Weg");
        break;
    }
    case 181360:
    {
        returnValue = F("Karl-Leopold-Str.");
        break;
    }
    case 181361:
    {
        returnValue = F("Karl-Lerbs-Str.");
        break;
    }
    case 181362:
    {
        returnValue = F("Karl-Liebknecht-Allee");
        break;
    }
    case 181363:
    {
        returnValue = F("Karl-Liebknecht-Park");
        break;
    }
    case 181364:
    {
        returnValue = F("Karl-Liebknecht-Platz");
        break;
    }
    case 181365:
    {
        returnValue = F("Karl-Liebknecht-Ring");
        break;
    }
    case 181366:
    {
        returnValue = F("Karl-Liebknecht-Siedlung");
        break;
    }
    case 181367:
    {
        returnValue = F("Karl-Liebknecht-Steig");
        break;
    }
    case 181368:
    {
        returnValue = F("Karl-Liebknecht-Str.");
        break;
    }
    case 181369:
    {
        returnValue = F("Karl-Liebknecht-Weg");
        break;
    }
    case 181370:
    {
        returnValue = F("Karl-Lilienthal-Str.");
        break;
    }
    case 181371:
    {
        returnValue = F("Karl-Lindau-Weg");
        break;
    }
    case 181372:
    {
        returnValue = F("Karl-Linde-Str.");
        break;
    }
    case 181373:
    {
        returnValue = F("Karl-Lindner-Str.");
        break;
    }
    case 181374:
    {
        returnValue = F("Karl-Lippert-Weg");
        break;
    }
    case 181375:
    {
        returnValue = F("Karl-Lippold-Str.");
        break;
    }
    case 181376:
    {
        returnValue = F("Karl-Lips-Str.");
        break;
    }
    case 181377:
    {
        returnValue = F("Karl-Litty-Str.");
        break;
    }
    case 181378:
    {
        returnValue = F("Karl-Lochner-Str.");
        break;
    }
    case 181379:
    {
        returnValue = F("Karl-Loewe-Str.");
        break;
    }
    case 181380:
    {
        returnValue = F("Karl-Loewe-Weg");
        break;
    }
    case 181381:
    {
        returnValue = F("Karl-Lott-Str.");
        break;
    }
    case 181382:
    {
        returnValue = F("Karl-Louis-Krauß-Str.");
        break;
    }
    case 181383:
    {
        returnValue = F("Karl-Ludwig Speit-Weg");
        break;
    }
    case 181384:
    {
        returnValue = F("Karl-Ludwig-Guddorf-Str.");
        break;
    }
    case 181385:
    {
        returnValue = F("Karl-Ludwig-Schleich-Weg");
        break;
    }
    case 181386:
    {
        returnValue = F("Karl-Ludwig-See-Brücke");
        break;
    }
    case 181387:
    {
        returnValue = F("Karl-Ludwig-Str.");
        break;
    }
    case 181388:
    {
        returnValue = F("Karl-Ludwig-Weg");
        break;
    }
    case 181389:
    {
        returnValue = F("Karl-Luhmann-Weg");
        break;
    }
    case 181390:
    {
        returnValue = F("Karl-Lukas-Str.");
        break;
    }
    case 181391:
    {
        returnValue = F("Karl-Lösch-Str.");
        break;
    }
    case 181392:
    {
        returnValue = F("Karl-Löwe-Str.");
        break;
    }
    case 181393:
    {
        returnValue = F("Karl-Lübben-Str.");
        break;
    }
    case 181394:
    {
        returnValue = F("Karl-Lühnsdorf-Weg");
        break;
    }
    case 181395:
    {
        returnValue = F("Karl-Lüllig-Str.");
        break;
    }
    case 181396:
    {
        returnValue = F("Karl-Lüneburg-Str.");
        break;
    }
    case 181397:
    {
        returnValue = F("Karl-Maag-Str.");
        break;
    }
    case 181398:
    {
        returnValue = F("Karl-Maas-Weg");
        break;
    }
    case 181399:
    {
        returnValue = F("Karl-Mader-Str.");
        break;
    }
    case 181400:
    {
        returnValue = F("Karl-Maertin-Str.");
        break;
    }
    case 181401:
    {
        returnValue = F("Karl-Mager-Weg");
        break;
    }
    case 181402:
    {
        returnValue = F("Karl-Mai-Allee");
        break;
    }
    case 181403:
    {
        returnValue = F("Karl-Maier-Str.");
        break;
    }
    case 181404:
    {
        returnValue = F("Karl-Malisi-Str.");
        break;
    }
    case 181405:
    {
        returnValue = F("Karl-Mammele-Str.");
        break;
    }
    case 181406:
    {
        returnValue = F("Karl-Mangold-Str.");
        break;
    }
    case 181407:
    {
        returnValue = F("Karl-Mannheim-Str.");
        break;
    }
    case 181408:
    {
        returnValue = F("Karl-Mannsfeld-Str.");
        break;
    }
    case 181409:
    {
        returnValue = F("Karl-Mantel-Str.");
        break;
    }
    case 181410:
    {
        returnValue = F("Karl-Marbach-Str.");
        break;
    }
    case 181411:
    {
        returnValue = F("Karl-Maria-Doll-Str.");
        break;
    }
    case 181412:
    {
        returnValue = F("Karl-Marien-Höhe");
        break;
    }
    case 181413:
    {
        returnValue = F("Karl-Marien-Str.");
        break;
    }
    case 181414:
    {
        returnValue = F("Karl-Marien-Weg");
        break;
    }
    case 181415:
    {
        returnValue = F("Karl-Marin-Str.");
        break;
    }
    case 181416:
    {
        returnValue = F("Karl-Marschall-Str.");
        break;
    }
    case 181417:
    {
        returnValue = F("Karl-Marsiske-Str.");
        break;
    }
    case 181418:
    {
        returnValue = F("Karl-Martell-Str.");
        break;
    }
    case 181419:
    {
        returnValue = F("Karl-Martin-Graff-Str.");
        break;
    }
    case 181420:
    {
        returnValue = F("Karl-Martins-Hof");
        break;
    }
    case 181421:
    {
        returnValue = F("Karl-Marx Str.");
        break;
    }
    case 181422:
    {
        returnValue = F("Karl-Marx-Allee");
        break;
    }
    case 181423:
    {
        returnValue = F("Karl-Marx-Damm");
        break;
    }
    case 181424:
    {
        returnValue = F("Karl-Marx-Hof");
        break;
    }
    case 181425:
    {
        returnValue = F("Karl-Marx-Platz");
        break;
    }
    case 181426:
    {
        returnValue = F("Karl-Marx-Ring");
        break;
    }
    case 181427:
    {
        returnValue = F("Karl-Marx-Siedlung");
        break;
    }
    case 181428:
    {
        returnValue = F("Karl-Marx-Str.");
        break;
    }
    case 181429:
    {
        returnValue = F("Karl-Marx-Straßé");
        break;
    }
    case 181430:
    {
        returnValue = F("Karl-Marx-Weg");
        break;
    }
    case 181431:
    {
        returnValue = F("Karl-Maser-Str.");
        break;
    }
    case 181432:
    {
        returnValue = F("Karl-Massa-Str.");
        break;
    }
    case 181433:
    {
        returnValue = F("Karl-Matheis-Platz");
        break;
    }
    case 181434:
    {
        returnValue = F("Karl-Mathes-Str.");
        break;
    }
    case 181435:
    {
        returnValue = F("Karl-Mathy-Str.");
        break;
    }
    case 181436:
    {
        returnValue = F("Karl-Mattes-Str.");
        break;
    }
    case 181437:
    {
        returnValue = F("Karl-Matthes-Str.");
        break;
    }
    case 181438:
    {
        returnValue = F("Karl-Matti-Str.");
        break;
    }
    case 181439:
    {
        returnValue = F("Karl-Matull-Platz");
        break;
    }
    case 181440:
    {
        returnValue = F("Karl-Mauch-Str.");
        break;
    }
    case 181441:
    {
        returnValue = F("Karl-Maupai-Str.");
        break;
    }
    case 181442:
    {
        returnValue = F("Karl-Maurer-Str.");
        break;
    }
    case 181443:
    {
        returnValue = F("Karl-Max-Str.");
        break;
    }
    case 181444:
    {
        returnValue = F("Karl-May-Hain");
        break;
    }
    case 181445:
    {
        returnValue = F("Karl-May-Ring");
        break;
    }
    case 181446:
    {
        returnValue = F("Karl-May-Str.");
        break;
    }
    case 181447:
    {
        returnValue = F("Karl-May-Weg");
        break;
    }
    case 181448:
    {
        returnValue = F("Karl-Maybach-Platz");
        break;
    }
    case 181449:
    {
        returnValue = F("Karl-Maybach-Str.");
        break;
    }
    case 181450:
    {
        returnValue = F("Karl-Mayer-Ring");
        break;
    }
    case 181451:
    {
        returnValue = F("Karl-Mayer-Str.");
        break;
    }
    case 181452:
    {
        returnValue = F("Karl-Mayerhofer-Str.");
        break;
    }
    case 181453:
    {
        returnValue = F("Karl-Mecklenbrauck-Weg");
        break;
    }
    case 181454:
    {
        returnValue = F("Karl-Medler-Str.");
        break;
    }
    case 181455:
    {
        returnValue = F("Karl-Meermann-Str.");
        break;
    }
    case 181456:
    {
        returnValue = F("Karl-Mehne-Str.");
        break;
    }
    case 181457:
    {
        returnValue = F("Karl-Meier-Str.");
        break;
    }
    case 181458:
    {
        returnValue = F("Karl-Meisen-Weg");
        break;
    }
    case 181459:
    {
        returnValue = F("Karl-Meisenbach-Str.");
        break;
    }
    case 181460:
    {
        returnValue = F("Karl-Meisinger-Str.");
        break;
    }
    case 181461:
    {
        returnValue = F("Karl-Meister-Str.");
        break;
    }
    case 181462:
    {
        returnValue = F("Karl-Meißner-Str.");
        break;
    }
    case 181463:
    {
        returnValue = F("Karl-Mende-Str.");
        break;
    }
    case 181464:
    {
        returnValue = F("Karl-Mengele-Str.");
        break;
    }
    case 181465:
    {
        returnValue = F("Karl-Menges-Str.");
        break;
    }
    case 181466:
    {
        returnValue = F("Karl-Menner-Weg");
        break;
    }
    case 181467:
    {
        returnValue = F("Karl-Mente-Weg");
        break;
    }
    case 181468:
    {
        returnValue = F("Karl-Merkenschlager-Str.");
        break;
    }
    case 181469:
    {
        returnValue = F("Karl-Merz-Str.");
        break;
    }
    case 181470:
    {
        returnValue = F("Karl-Meseberg-Str.");
        break;
    }
    case 181471:
    {
        returnValue = F("Karl-Methe-Str.");
        break;
    }
    case 181472:
    {
        returnValue = F("Karl-Metz-Str.");
        break;
    }
    case 181473:
    {
        returnValue = F("Karl-Meyer-Str.");
        break;
    }
    case 181474:
    {
        returnValue = F("Karl-Michel-Str.");
        break;
    }
    case 181475:
    {
        returnValue = F("Karl-Miede-Weg");
        break;
    }
    case 181476:
    {
        returnValue = F("Karl-Miehe-Str.");
        break;
    }
    case 181477:
    {
        returnValue = F("Karl-Mikeler-Str.");
        break;
    }
    case 181478:
    {
        returnValue = F("Karl-Millöcker-Str.");
        break;
    }
    case 181479:
    {
        returnValue = F("Karl-Mindera-Str.");
        break;
    }
    case 181480:
    {
        returnValue = F("Karl-Mitschele-Str.");
        break;
    }
    case 181481:
    {
        returnValue = F("Karl-Modic-Str.");
        break;
    }
    case 181482:
    {
        returnValue = F("Karl-Mohme-Str.");
        break;
    }
    case 181483:
    {
        returnValue = F("Karl-Mohr-Weg");
        break;
    }
    case 181484:
    {
        returnValue = F("Karl-Moll-Str.");
        break;
    }
    case 181485:
    {
        returnValue = F("Karl-Mones-Str.");
        break;
    }
    case 181486:
    {
        returnValue = F("Karl-Mons-Str.");
        break;
    }
    case 181487:
    {
        returnValue = F("Karl-Montag-Weg");
        break;
    }
    case 181488:
    {
        returnValue = F("Karl-Moor-Weg");
        break;
    }
    case 181489:
    {
        returnValue = F("Karl-Morian-Str.");
        break;
    }
    case 181490:
    {
        returnValue = F("Karl-Moritz-Str.");
        break;
    }
    case 181491:
    {
        returnValue = F("Karl-Moritz-Weg");
        break;
    }
    case 181492:
    {
        returnValue = F("Karl-Moser-Str.");
        break;
    }
    case 181493:
    {
        returnValue = F("Karl-Mossemann-Str.");
        break;
    }
    case 181494:
    {
        returnValue = F("Karl-Mosterts-Str.");
        break;
    }
    case 181495:
    {
        returnValue = F("Karl-Much-Str.");
        break;
    }
    case 181496:
    {
        returnValue = F("Karl-Muck-Str.");
        break;
    }
    case 181497:
    {
        returnValue = F("Karl-Mundt-Str.");
        break;
    }
    case 181498:
    {
        returnValue = F("Karl-Munz-Weg");
        break;
    }
    case 181499:
    {
        returnValue = F("Karl-Möhlig-Str.");
        break;
    }
    case 181500:
    {
        returnValue = F("Karl-Möller-Str.");
        break;
    }
    case 181501:
    {
        returnValue = F("Karl-Mönnig-Weg");
        break;
    }
    case 181502:
    {
        returnValue = F("Karl-Mörike-Str.");
        break;
    }
    case 181503:
    {
        returnValue = F("Karl-Mücher-Weg");
        break;
    }
    case 181504:
    {
        returnValue = F("Karl-Mühl-Weg");
        break;
    }
    case 181505:
    {
        returnValue = F("Karl-Mühlhuber-Str.");
        break;
    }
    case 181506:
    {
        returnValue = F("Karl-Müllenhoff-Str.");
        break;
    }
    case 181507:
    {
        returnValue = F("Karl-Müllenhoff-Weg");
        break;
    }
    case 181508:
    {
        returnValue = F("Karl-Müller-Park");
        break;
    }
    case 181509:
    {
        returnValue = F("Karl-Müller-Str.");
        break;
    }
    case 181510:
    {
        returnValue = F("Karl-Müller-Weg");
        break;
    }
    case 181511:
    {
        returnValue = F("Karl-Münchinger-Weg");
        break;
    }
    case 181512:
    {
        returnValue = F("Karl-Münz-Str.");
        break;
    }
    case 181513:
    {
        returnValue = F("Karl-Naber-Str.");
        break;
    }
    case 181514:
    {
        returnValue = F("Karl-Nagel-Str.");
        break;
    }
    case 181515:
    {
        returnValue = F("Karl-Nahrgang-Str.");
        break;
    }
    case 181516:
    {
        returnValue = F("Karl-Nahrgang-Weg");
        break;
    }
    case 181517:
    {
        returnValue = F("Karl-Naumann-Chausseé");
        break;
    }
    case 181518:
    {
        returnValue = F("Karl-Neff-Str.");
        break;
    }
    case 181519:
    {
        returnValue = F("Karl-Nerger-Gang");
        break;
    }
    case 181520:
    {
        returnValue = F("Karl-Nestvogel-Weg");
        break;
    }
    case 181521:
    {
        returnValue = F("Karl-Niepenberg-Weg");
        break;
    }
    case 181522:
    {
        returnValue = F("Karl-Nieraad-Str.");
        break;
    }
    case 181523:
    {
        returnValue = F("Karl-Niesner-Str.");
        break;
    }
    case 181524:
    {
        returnValue = F("Karl-Nolan-Str.");
        break;
    }
    case 181525:
    {
        returnValue = F("Karl-Nolte-Str.");
        break;
    }
    case 181526:
    {
        returnValue = F("Karl-Nägele-Brücke");
        break;
    }
    case 181527:
    {
        returnValue = F("Karl-Nöthen-Str.");
        break;
    }
    case 181528:
    {
        returnValue = F("Karl-Obendorf-Weg");
        break;
    }
    case 181529:
    {
        returnValue = F("Karl-Oberbach-Str.");
        break;
    }
    case 181530:
    {
        returnValue = F("Karl-Oder-Str.");
        break;
    }
    case 181531:
    {
        returnValue = F("Karl-Ohler-Str.");
        break;
    }
    case 181532:
    {
        returnValue = F("Karl-Oldewurtel-Str.");
        break;
    }
    case 181533:
    {
        returnValue = F("Karl-Olfers-Platz");
        break;
    }
    case 181534:
    {
        returnValue = F("Karl-Olga-Park");
        break;
    }
    case 181535:
    {
        returnValue = F("Karl-Onkel Steig");
        break;
    }
    case 181536:
    {
        returnValue = F("Karl-Opp-Weg");
        break;
    }
    case 181537:
    {
        returnValue = F("Karl-Oppel-Str.");
        break;
    }
    case 181538:
    {
        returnValue = F("Karl-Osterbrauck-Str.");
        break;
    }
    case 181539:
    {
        returnValue = F("Karl-Osthushenrich-Str.");
        break;
    }
    case 181540:
    {
        returnValue = F("Karl-Otermann-Weg");
        break;
    }
    case 181541:
    {
        returnValue = F("Karl-Otto-Braun-Str.");
        break;
    }
    case 181542:
    {
        returnValue = F("Karl-Otto-Dehnert-Str.");
        break;
    }
    case 181543:
    {
        returnValue = F("Karl-Otto-Zander-Str.");
        break;
    }
    case 181544:
    {
        returnValue = F("Karl-Pabst-Str.");
        break;
    }
    case 181545:
    {
        returnValue = F("Karl-Panzner-Weg");
        break;
    }
    case 181546:
    {
        returnValue = F("Karl-Parisius-Weg");
        break;
    }
    case 181547:
    {
        returnValue = F("Karl-Pawlowski-Str.");
        break;
    }
    case 181548:
    {
        returnValue = F("Karl-Peix-Weg");
        break;
    }
    case 181549:
    {
        returnValue = F("Karl-Peter-Str.");
        break;
    }
    case 181550:
    {
        returnValue = F("Karl-Peters-Str.");
        break;
    }
    case 181551:
    {
        returnValue = F("Karl-Pezold-Str.");
        break;
    }
    case 181552:
    {
        returnValue = F("Karl-Pfaff-Siedlung");
        break;
    }
    case 181553:
    {
        returnValue = F("Karl-Pfaff-Str.");
        break;
    }
    case 181554:
    {
        returnValue = F("Karl-Pfahler-Str.");
        break;
    }
    case 181555:
    {
        returnValue = F("Karl-Pfetscher-Weg");
        break;
    }
    case 181556:
    {
        returnValue = F("Karl-Pfeuffer-Str.");
        break;
    }
    case 181557:
    {
        returnValue = F("Karl-Pfister-Str.");
        break;
    }
    case 181558:
    {
        returnValue = F("Karl-Pfizer-Anlage");
        break;
    }
    case 181559:
    {
        returnValue = F("Karl-Pfrommer-Weg");
        break;
    }
    case 181560:
    {
        returnValue = F("Karl-Pfund-Weg");
        break;
    }
    case 181561:
    {
        returnValue = F("Karl-Philipp-Arnd-Str.");
        break;
    }
    case 181562:
    {
        returnValue = F("Karl-Philipp-Fohr-Str.");
        break;
    }
    case 181563:
    {
        returnValue = F("Karl-Philipp-Spitzer-Weg");
        break;
    }
    case 181564:
    {
        returnValue = F("Karl-Philipp-Str.");
        break;
    }
    case 181565:
    {
        returnValue = F("Karl-Philipp-Weg");
        break;
    }
    case 181566:
    {
        returnValue = F("Karl-Pieper-Str.");
        break;
    }
    case 181567:
    {
        returnValue = F("Karl-Pilger-Str.");
        break;
    }
    case 181568:
    {
        returnValue = F("Karl-Pillmaier-Str.");
        break;
    }
    case 181569:
    {
        returnValue = F("Karl-Pimpertz-Weg");
        break;
    }
    case 181570:
    {
        returnValue = F("Karl-Planeth-Weg");
        break;
    }
    case 181571:
    {
        returnValue = F("Karl-Plato-Str.");
        break;
    }
    case 181572:
    {
        returnValue = F("Karl-Platz-Str.");
        break;
    }
    case 181573:
    {
        returnValue = F("Karl-Plesch-Str.");
        break;
    }
    case 181574:
    {
        returnValue = F("Karl-Pohns-Str.");
        break;
    }
    case 181575:
    {
        returnValue = F("Karl-Popp-Str.");
        break;
    }
    case 181576:
    {
        returnValue = F("Karl-Post-Str.");
        break;
    }
    case 181577:
    {
        returnValue = F("Karl-Pracht-Str.");
        break;
    }
    case 181578:
    {
        returnValue = F("Karl-Prasse-Weg");
        break;
    }
    case 181579:
    {
        returnValue = F("Karl-Prendel-Str.");
        break;
    }
    case 181580:
    {
        returnValue = F("Karl-Prinz-Weg");
        break;
    }
    case 181581:
    {
        returnValue = F("Karl-Prümer-Str.");
        break;
    }
    case 181582:
    {
        returnValue = F("Karl-Prüßner-Str.");
        break;
    }
    case 181583:
    {
        returnValue = F("Karl-Puppe-Str.");
        break;
    }
    case 181584:
    {
        returnValue = F("Karl-Raab-Str.");
        break;
    }
    case 181585:
    {
        returnValue = F("Karl-Rachel-Str.");
        break;
    }
    case 181586:
    {
        returnValue = F("Karl-Radinger-Weg");
        break;
    }
    case 181587:
    {
        returnValue = F("Karl-Rager-Str.");
        break;
    }
    case 181588:
    {
        returnValue = F("Karl-Rahe-Str.");
        break;
    }
    case 181589:
    {
        returnValue = F("Karl-Rahn-Weg");
        break;
    }
    case 181590:
    {
        returnValue = F("Karl-Rahner-Platz");
        break;
    }
    case 181591:
    {
        returnValue = F("Karl-Rahner-Str.");
        break;
    }
    case 181592:
    {
        returnValue = F("Karl-Rais-Weg");
        break;
    }
    case 181593:
    {
        returnValue = F("Karl-Ranft-Str.");
        break;
    }
    case 181594:
    {
        returnValue = F("Karl-Rapp-Weg");
        break;
    }
    case 181595:
    {
        returnValue = F("Karl-Rauch-Siedlung");
        break;
    }
    case 181596:
    {
        returnValue = F("Karl-Raupp-Str.");
        break;
    }
    case 181597:
    {
        returnValue = F("Karl-Raupp-Weg");
        break;
    }
    case 181598:
    {
        returnValue = F("Karl-Rausch-Str.");
        break;
    }
    case 181599:
    {
        returnValue = F("Karl-Raute-Weg");
        break;
    }
    case 181600:
    {
        returnValue = F("Karl-Rawitzki-Str.");
        break;
    }
    case 181601:
    {
        returnValue = F("Karl-Rebmann-Str.");
        break;
    }
    case 181602:
    {
        returnValue = F("Karl-Regeles-Weg");
        break;
    }
    case 181603:
    {
        returnValue = F("Karl-Rehm-Str.");
        break;
    }
    case 181604:
    {
        returnValue = F("Karl-Reibel-Ring");
        break;
    }
    case 181605:
    {
        returnValue = F("Karl-Reichel-Str.");
        break;
    }
    case 181606:
    {
        returnValue = F("Karl-Reidenbach-Str.");
        break;
    }
    case 181607:
    {
        returnValue = F("Karl-Reimann-Ring");
        break;
    }
    case 181608:
    {
        returnValue = F("Karl-Reimes-Str.");
        break;
    }
    case 181609:
    {
        returnValue = F("Karl-Reinecke-Weg");
        break;
    }
    case 181610:
    {
        returnValue = F("Karl-Reinfried-Str.");
        break;
    }
    case 181611:
    {
        returnValue = F("Karl-Reisach-Platz");
        break;
    }
    case 181612:
    {
        returnValue = F("Karl-Reiser-Str.");
        break;
    }
    case 181613:
    {
        returnValue = F("Karl-Reiß-Str.");
        break;
    }
    case 181614:
    {
        returnValue = F("Karl-Remmert-Str.");
        break;
    }
    case 181615:
    {
        returnValue = F("Karl-Renninger-Str.");
        break;
    }
    case 181616:
    {
        returnValue = F("Karl-Rettich-Weg");
        break;
    }
    case 181617:
    {
        returnValue = F("Karl-Reulen-Str.");
        break;
    }
    case 181618:
    {
        returnValue = F("Karl-Reuter-Weg");
        break;
    }
    case 181619:
    {
        returnValue = F("Karl-Rheinwalt-Ring");
        break;
    }
    case 181620:
    {
        returnValue = F("Karl-Richard-Hirschberg-Brücke");
        break;
    }
    case 181621:
    {
        returnValue = F("Karl-Richtberg-Str.");
        break;
    }
    case 181622:
    {
        returnValue = F("Karl-Riede-Str.");
        break;
    }
    case 181623:
    {
        returnValue = F("Karl-Riederer-Str.");
        break;
    }
    case 181624:
    {
        returnValue = F("Karl-Rieger-Str.");
        break;
    }
    case 181625:
    {
        returnValue = F("Karl-Rieger-Weg");
        break;
    }
    case 181626:
    {
        returnValue = F("Karl-Riemer-Str.");
        break;
    }
    case 181627:
    {
        returnValue = F("Karl-Riepp-Str.");
        break;
    }
    case 181628:
    {
        returnValue = F("Karl-Ries-Str.");
        break;
    }
    case 181629:
    {
        returnValue = F("Karl-Rieschel-Str.");
        break;
    }
    case 181630:
    {
        returnValue = F("Karl-Risch-Str.");
        break;
    }
    case 181631:
    {
        returnValue = F("Karl-Rischbieth-Weg");
        break;
    }
    case 181632:
    {
        returnValue = F("Karl-Ritter-Weg");
        break;
    }
    case 181633:
    {
        returnValue = F("Karl-Rittler-Str.");
        break;
    }
    case 181634:
    {
        returnValue = F("Karl-Ritzert-Str.");
        break;
    }
    case 181635:
    {
        returnValue = F("Karl-Robiczek-Str.");
        break;
    }
    case 181636:
    {
        returnValue = F("Karl-Rodbertus-Weg");
        break;
    }
    case 181637:
    {
        returnValue = F("Karl-Rogge-Weg");
        break;
    }
    case 181638:
    {
        returnValue = F("Karl-Rohm-Weg");
        break;
    }
    case 181639:
    {
        returnValue = F("Karl-Rohr-Str.");
        break;
    }
    case 181640:
    {
        returnValue = F("Karl-Rohrbeck-Str.");
        break;
    }
    case 181641:
    {
        returnValue = F("Karl-Rolle-Str.");
        break;
    }
    case 181642:
    {
        returnValue = F("Karl-Rommel-Str.");
        break;
    }
    case 181643:
    {
        returnValue = F("Karl-Rommel-Weg");
        break;
    }
    case 181644:
    {
        returnValue = F("Karl-Rorich-Str.");
        break;
    }
    case 181645:
    {
        returnValue = F("Karl-Rose-Weg");
        break;
    }
    case 181646:
    {
        returnValue = F("Karl-Ross-Weg");
        break;
    }
    case 181647:
    {
        returnValue = F("Karl-Roth-Schneise");
        break;
    }
    case 181648:
    {
        returnValue = F("Karl-Roth-Str.");
        break;
    }
    case 181649:
    {
        returnValue = F("Karl-Roth-Weg");
        break;
    }
    case 181650:
    {
        returnValue = F("Karl-Rothe-Str.");
        break;
    }
    case 181651:
    {
        returnValue = F("Karl-Rothenberger-Str.");
        break;
    }
    case 181652:
    {
        returnValue = F("Karl-Roß-Weg");
        break;
    }
    case 181653:
    {
        returnValue = F("Karl-Ruby-Str.");
        break;
    }
    case 181654:
    {
        returnValue = F("Karl-Ruck-Str.");
        break;
    }
    case 181655:
    {
        returnValue = F("Karl-Ruf-Str.");
        break;
    }
    case 181656:
    {
        returnValue = F("Karl-Ruhl-Weg");
        break;
    }
    case 181657:
    {
        returnValue = F("Karl-Rupert-Str.");
        break;
    }
    case 181658:
    {
        returnValue = F("Karl-Rupp-Str.");
        break;
    }
    case 181659:
    {
        returnValue = F("Karl-Rupp-Weg");
        break;
    }
    case 181660:
    {
        returnValue = F("Karl-Ruser-Str.");
        break;
    }
    case 181661:
    {
        returnValue = F("Karl-Russell-Str.");
        break;
    }
    case 181662:
    {
        returnValue = F("Karl-Räder-Allee");
        break;
    }
    case 181663:
    {
        returnValue = F("Karl-Räder-Str.");
        break;
    }
    case 181664:
    {
        returnValue = F("Karl-Räder-Weg");
        break;
    }
    case 181665:
    {
        returnValue = F("Karl-Röhrig-Str.");
        break;
    }
    case 181666:
    {
        returnValue = F("Karl-Röseberg-Str.");
        break;
    }
    case 181667:
    {
        returnValue = F("Karl-Röttelberg-Str.");
        break;
    }
    case 181668:
    {
        returnValue = F("Karl-Rübel-Str.");
        break;
    }
    case 181669:
    {
        returnValue = F("Karl-Rühlemann-Platz");
        break;
    }
    case 181670:
    {
        returnValue = F("Karl-Rüsing-Str.");
        break;
    }
    case 181671:
    {
        returnValue = F("Karl-Rüter-Str.");
        break;
    }
    case 181672:
    {
        returnValue = F("Karl-Sablowsky-Weg");
        break;
    }
    case 181673:
    {
        returnValue = F("Karl-Sachs-Str.");
        break;
    }
    case 181674:
    {
        returnValue = F("Karl-Sack-Str.");
        break;
    }
    case 181675:
    {
        returnValue = F("Karl-Samwer-Ring");
        break;
    }
    case 181676:
    {
        returnValue = F("Karl-Sand-Str.");
        break;
    }
    case 181677:
    {
        returnValue = F("Karl-Sattler-Str.");
        break;
    }
    case 181678:
    {
        returnValue = F("Karl-Sauer-Str.");
        break;
    }
    case 181679:
    {
        returnValue = F("Karl-Saurmann-Str.");
        break;
    }
    case 181680:
    {
        returnValue = F("Karl-Sauvagerd-Stiege");
        break;
    }
    case 181681:
    {
        returnValue = F("Karl-Saßmann-Weg");
        break;
    }
    case 181682:
    {
        returnValue = F("Karl-Schaaf-Weg");
        break;
    }
    case 181683:
    {
        returnValue = F("Karl-Schaare-Weg");
        break;
    }
    case 181684:
    {
        returnValue = F("Karl-Schachtner-Str.");
        break;
    }
    case 181685:
    {
        returnValue = F("Karl-Schaefler-Str.");
        break;
    }
    case 181686:
    {
        returnValue = F("Karl-Schall-Str.");
        break;
    }
    case 181687:
    {
        returnValue = F("Karl-Scharfenberg-Str.");
        break;
    }
    case 181688:
    {
        returnValue = F("Karl-Scharfenberger-Weg");
        break;
    }
    case 181689:
    {
        returnValue = F("Karl-Scheele-Str.");
        break;
    }
    case 181690:
    {
        returnValue = F("Karl-Schefold-Str.");
        break;
    }
    case 181691:
    {
        returnValue = F("Karl-Schemel-Platz");
        break;
    }
    case 181692:
    {
        returnValue = F("Karl-Schemmrich-Str.");
        break;
    }
    case 181693:
    {
        returnValue = F("Karl-Schempf-Weg");
        break;
    }
    case 181694:
    {
        returnValue = F("Karl-Schenk-Str.");
        break;
    }
    case 181695:
    {
        returnValue = F("Karl-Scherm-Str.");
        break;
    }
    case 181696:
    {
        returnValue = F("Karl-Scheufelen-Str.");
        break;
    }
    case 181697:
    {
        returnValue = F("Karl-Schick-Str.");
        break;
    }
    case 181698:
    {
        returnValue = F("Karl-Schiefer-Str.");
        break;
    }
    case 181699:
    {
        returnValue = F("Karl-Schildener-Str.");
        break;
    }
    case 181700:
    {
        returnValue = F("Karl-Schiller-Str.");
        break;
    }
    case 181701:
    {
        returnValue = F("Karl-Schiller-Weg");
        break;
    }
    case 181702:
    {
        returnValue = F("Karl-Schindhelm-Weg");
        break;
    }
    case 181703:
    {
        returnValue = F("Karl-Schirmer-Allee");
        break;
    }
    case 181704:
    {
        returnValue = F("Karl-Schlageter-Str.");
        break;
    }
    case 181705:
    {
        returnValue = F("Karl-Schlecht-Str.");
        break;
    }
    case 181706:
    {
        returnValue = F("Karl-Schlegel-Weg");
        break;
    }
    case 181707:
    {
        returnValue = F("Karl-Schleich-Str.");
        break;
    }
    case 181708:
    {
        returnValue = F("Karl-Schleich-Weg");
        break;
    }
    case 181709:
    {
        returnValue = F("Karl-Schleith-Str.");
        break;
    }
    case 181710:
    {
        returnValue = F("Karl-Schlemm-Weg");
        break;
    }
    case 181711:
    {
        returnValue = F("Karl-Schlierf-Platz");
        break;
    }
    case 181712:
    {
        returnValue = F("Karl-Schlimme-Str.");
        break;
    }
    case 181713:
    {
        returnValue = F("Karl-Schlockermann-Weg");
        break;
    }
    case 181714:
    {
        returnValue = F("Karl-Schloemer-Str.");
        break;
    }
    case 181715:
    {
        returnValue = F("Karl-Schlombach-Weg");
        break;
    }
    case 181716:
    {
        returnValue = F("Karl-Schlömilch-Str.");
        break;
    }
    case 181717:
    {
        returnValue = F("Karl-Schmalbach-Str.");
        break;
    }
    case 181718:
    {
        returnValue = F("Karl-Schmid-Ring");
        break;
    }
    case 181719:
    {
        returnValue = F("Karl-Schmid-Str.");
        break;
    }
    case 181720:
    {
        returnValue = F("Karl-Schmidbauer-Str.");
        break;
    }
    case 181721:
    {
        returnValue = F("Karl-Schmidt-Str.");
        break;
    }
    case 181722:
    {
        returnValue = F("Karl-Schmidt-Weg");
        break;
    }
    case 181723:
    {
        returnValue = F("Karl-Schmitt-Str.");
        break;
    }
    case 181724:
    {
        returnValue = F("Karl-Schneider-Str.");
        break;
    }
    case 181725:
    {
        returnValue = F("Karl-Schneider-Weg");
        break;
    }
    case 181726:
    {
        returnValue = F("Karl-Schneidler-Str.");
        break;
    }
    case 181727:
    {
        returnValue = F("Karl-Schnitger-Weg");
        break;
    }
    case 181728:
    {
        returnValue = F("Karl-Schober-Str.");
        break;
    }
    case 181729:
    {
        returnValue = F("Karl-Schomburg-Str.");
        break;
    }
    case 181730:
    {
        returnValue = F("Karl-Schoppe-Weg");
        break;
    }
    case 181731:
    {
        returnValue = F("Karl-Schorn-Str.");
        break;
    }
    case 181732:
    {
        returnValue = F("Karl-Schramm-Str.");
        break;
    }
    case 181733:
    {
        returnValue = F("Karl-Schramm-Weg");
        break;
    }
    case 181734:
    {
        returnValue = F("Karl-Schreck-Str.");
        break;
    }
    case 181735:
    {
        returnValue = F("Karl-Schremp-Str.");
        break;
    }
    case 181736:
    {
        returnValue = F("Karl-Schrempp-Str.");
        break;
    }
    case 181737:
    {
        returnValue = F("Karl-Schröter-Gasse");
        break;
    }
    case 181738:
    {
        returnValue = F("Karl-Schuch-Weg");
        break;
    }
    case 181739:
    {
        returnValue = F("Karl-Schultz-Str.");
        break;
    }
    case 181740:
    {
        returnValue = F("Karl-Schumacher-Str.");
        break;
    }
    case 181741:
    {
        returnValue = F("Karl-Schumm-Str.");
        break;
    }
    case 181742:
    {
        returnValue = F("Karl-Schurz-Str.");
        break;
    }
    case 181743:
    {
        returnValue = F("Karl-Schurz-Weg");
        break;
    }
    case 181744:
    {
        returnValue = F("Karl-Schuster-Str.");
        break;
    }
    case 181745:
    {
        returnValue = F("Karl-Schwaiger-Str.");
        break;
    }
    case 181746:
    {
        returnValue = F("Karl-Schwalb-Ring");
        break;
    }
    case 181747:
    {
        returnValue = F("Karl-Schwaner-Str.");
        break;
    }
    case 181748:
    {
        returnValue = F("Karl-Schwartz-Str.");
        break;
    }
    case 181749:
    {
        returnValue = F("Karl-Schwarz-Str.");
        break;
    }
    case 181750:
    {
        returnValue = F("Karl-Schwarzschild-Weg");
        break;
    }
    case 181751:
    {
        returnValue = F("Karl-Schweickhardt-Weg");
        break;
    }
    case 181752:
    {
        returnValue = F("Karl-Schweitzer-Str.");
        break;
    }
    case 181753:
    {
        returnValue = F("Karl-Schweizer-Park");
        break;
    }
    case 181754:
    {
        returnValue = F("Karl-Schweizer-Str.");
        break;
    }
    case 181755:
    {
        returnValue = F("Karl-Schwengler-Str.");
        break;
    }
    case 181756:
    {
        returnValue = F("Karl-Schwesig-Str.");
        break;
    }
    case 181757:
    {
        returnValue = F("Karl-Schyns-Weg");
        break;
    }
    case 181758:
    {
        returnValue = F("Karl-Schäfer-Str.");
        break;
    }
    case 181759:
    {
        returnValue = F("Karl-Schöner-Weg");
        break;
    }
    case 181760:
    {
        returnValue = F("Karl-Schönleben-Str.");
        break;
    }
    case 181761:
    {
        returnValue = F("Karl-Schöpfer-Weg");
        break;
    }
    case 181762:
    {
        returnValue = F("Karl-Schöpfle-Platz");
        break;
    }
    case 181763:
    {
        returnValue = F("Karl-Schüler-Weg");
        break;
    }
    case 181764:
    {
        returnValue = F("Karl-Seckinger-Str.");
        break;
    }
    case 181765:
    {
        returnValue = F("Karl-Seepe-Str.");
        break;
    }
    case 181766:
    {
        returnValue = F("Karl-Seeser-Weg");
        break;
    }
    case 181767:
    {
        returnValue = F("Karl-Seibt-Str.");
        break;
    }
    case 181768:
    {
        returnValue = F("Karl-Seifert-Str.");
        break;
    }
    case 181769:
    {
        returnValue = F("Karl-Seitz-Str.");
        break;
    }
    case 181770:
    {
        returnValue = F("Karl-Serbent-Str.");
        break;
    }
    case 181771:
    {
        returnValue = F("Karl-Settele-Str.");
        break;
    }
    case 181772:
    {
        returnValue = F("Karl-Severing-Str.");
        break;
    }
    case 181773:
    {
        returnValue = F("Karl-Seyferth-Str.");
        break;
    }
    case 181774:
    {
        returnValue = F("Karl-Sieben-Str.");
        break;
    }
    case 181775:
    {
        returnValue = F("Karl-Sieber-Str.");
        break;
    }
    case 181776:
    {
        returnValue = F("Karl-Siebert-Str.");
        break;
    }
    case 181777:
    {
        returnValue = F("Karl-Siebold-Weg");
        break;
    }
    case 181778:
    {
        returnValue = F("Karl-Sieck-Weg");
        break;
    }
    case 181779:
    {
        returnValue = F("Karl-Siegismund-Str.");
        break;
    }
    case 181780:
    {
        returnValue = F("Karl-Sigrist-Str.");
        break;
    }
    case 181781:
    {
        returnValue = F("Karl-Silbernagel-Str.");
        break;
    }
    case 181782:
    {
        returnValue = F("Karl-Simon-Str.");
        break;
    }
    case 181783:
    {
        returnValue = F("Karl-Simrock-Str.");
        break;
    }
    case 181784:
    {
        returnValue = F("Karl-Simrock-Weg");
        break;
    }
    case 181785:
    {
        returnValue = F("Karl-Singer-Str.");
        break;
    }
    case 181786:
    {
        returnValue = F("Karl-Sittig-Weg");
        break;
    }
    case 181787:
    {
        returnValue = F("Karl-Sittler-Str.");
        break;
    }
    case 181788:
    {
        returnValue = F("Karl-Soldner-Str.");
        break;
    }
    case 181789:
    {
        returnValue = F("Karl-Sommer-Str.");
        break;
    }
    case 181790:
    {
        returnValue = F("Karl-Sonnenschein-Str.");
        break;
    }
    case 181791:
    {
        returnValue = F("Karl-Sonnenschein-Weg");
        break;
    }
    case 181792:
    {
        returnValue = F("Karl-Spahn-Str.");
        break;
    }
    case 181793:
    {
        returnValue = F("Karl-Speidel-Str.");
        break;
    }
    case 181794:
    {
        returnValue = F("Karl-Speier-Str.");
        break;
    }
    case 181795:
    {
        returnValue = F("Karl-Spieler-Str.");
        break;
    }
    case 181796:
    {
        returnValue = F("Karl-Spies-Weg");
        break;
    }
    case 181797:
    {
        returnValue = F("Karl-Spindler-Str.");
        break;
    }
    case 181798:
    {
        returnValue = F("Karl-Spitzweg-Str.");
        break;
    }
    case 181799:
    {
        returnValue = F("Karl-Sprengel-Str.");
        break;
    }
    case 181800:
    {
        returnValue = F("Karl-Springer-Str.");
        break;
    }
    case 181801:
    {
        returnValue = F("Karl-Späth-Str.");
        break;
    }
    case 181802:
    {
        returnValue = F("Karl-Spörl-Str.");
        break;
    }
    case 181803:
    {
        returnValue = F("Karl-Stadler-Weg");
        break;
    }
    case 181804:
    {
        returnValue = F("Karl-Stahl-Weg");
        break;
    }
    case 181805:
    {
        returnValue = F("Karl-Staib-Str.");
        break;
    }
    case 181806:
    {
        returnValue = F("Karl-Stammer-Weg");
        break;
    }
    case 181807:
    {
        returnValue = F("Karl-Stangier-Str.");
        break;
    }
    case 181808:
    {
        returnValue = F("Karl-Staudinger-Str.");
        break;
    }
    case 181809:
    {
        returnValue = F("Karl-Stechele-Str.");
        break;
    }
    case 181810:
    {
        returnValue = F("Karl-Steigelmann-Str.");
        break;
    }
    case 181811:
    {
        returnValue = F("Karl-Steil-Str.");
        break;
    }
    case 181812:
    {
        returnValue = F("Karl-Stein-Str.");
        break;
    }
    case 181813:
    {
        returnValue = F("Karl-Steinacker-Str.");
        break;
    }
    case 181814:
    {
        returnValue = F("Karl-Steinbauer-Weg");
        break;
    }
    case 181815:
    {
        returnValue = F("Karl-Steinberger-Weg");
        break;
    }
    case 181816:
    {
        returnValue = F("Karl-Steiner-Str.");
        break;
    }
    case 181817:
    {
        returnValue = F("Karl-Steinhauer-Str.");
        break;
    }
    case 181818:
    {
        returnValue = F("Karl-Steinhauser-Str.");
        break;
    }
    case 181819:
    {
        returnValue = F("Karl-Steinhoff-Str.");
        break;
    }
    case 181820:
    {
        returnValue = F("Karl-Stephan-Str.");
        break;
    }
    case 181821:
    {
        returnValue = F("Karl-Sternadl-Weg");
        break;
    }
    case 181822:
    {
        returnValue = F("Karl-Steuer-Platz");
        break;
    }
    case 181823:
    {
        returnValue = F("Karl-Stieler-Str.");
        break;
    }
    case 181824:
    {
        returnValue = F("Karl-Stieler-Weg");
        break;
    }
    case 181825:
    {
        returnValue = F("Karl-Stier-Str.");
        break;
    }
    case 181826:
    {
        returnValue = F("Karl-Stilp-Str.");
        break;
    }
    case 181827:
    {
        returnValue = F("Karl-Sting-Str.");
        break;
    }
    case 181828:
    {
        returnValue = F("Karl-Stirner-Str.");
        break;
    }
    case 181829:
    {
        returnValue = F("Karl-Stoer-Str.");
        break;
    }
    case 181830:
    {
        returnValue = F("Karl-Stoll-Weg");
        break;
    }
    case 181831:
    {
        returnValue = F("Karl-Storch-Str.");
        break;
    }
    case 181832:
    {
        returnValue = F("Karl-Stotz-Platz");
        break;
    }
    case 181833:
    {
        returnValue = F("Karl-Straub-Str.");
        break;
    }
    case 181834:
    {
        returnValue = F("Karl-Straub-Weg");
        break;
    }
    case 181835:
    {
        returnValue = F("Karl-Straube-Str.");
        break;
    }
    case 181836:
    {
        returnValue = F("Karl-Streit-Str.");
        break;
    }
    case 181837:
    {
        returnValue = F("Karl-Stricker-Str.");
        break;
    }
    case 181838:
    {
        returnValue = F("Karl-Strote-Str.");
        break;
    }
    case 181839:
    {
        returnValue = F("Karl-Strunkmann-Weg");
        break;
    }
    case 181840:
    {
        returnValue = F("Karl-Strübe-Weg");
        break;
    }
    case 181841:
    {
        returnValue = F("Karl-Städtler-Str.");
        break;
    }
    case 181842:
    {
        returnValue = F("Karl-Stöckle-Ring");
        break;
    }
    case 181843:
    {
        returnValue = F("Karl-Stöger-Str.");
        break;
    }
    case 181844:
    {
        returnValue = F("Karl-Stöß-Ring");
        break;
    }
    case 181845:
    {
        returnValue = F("Karl-Stülpner-Str.");
        break;
    }
    case 181846:
    {
        returnValue = F("Karl-Stülpner-Weg");
        break;
    }
    case 181847:
    {
        returnValue = F("Karl-Sulzbach-Str.");
        break;
    }
    case 181848:
    {
        returnValue = F("Karl-Söhle-Str.");
        break;
    }
    case 181849:
    {
        returnValue = F("Karl-Söhle-Weg");
        break;
    }
    case 181850:
    {
        returnValue = F("Karl-Sömmer-Str.");
        break;
    }
    case 181851:
    {
        returnValue = F("Karl-Tauchnitz-Str.");
        break;
    }
    case 181852:
    {
        returnValue = F("Karl-Teichmann-Str.");
        break;
    }
    case 181853:
    {
        returnValue = F("Karl-Theobald-Str.");
        break;
    }
    case 181854:
    {
        returnValue = F("Karl-Theodor-Fliedner-Str.");
        break;
    }
    case 181855:
    {
        returnValue = F("Karl-Theodor-Platz");
        break;
    }
    case 181856:
    {
        returnValue = F("Karl-Theodor-Severin-Str.");
        break;
    }
    case 181857:
    {
        returnValue = F("Karl-Theodor-Str.");
        break;
    }
    case 181858:
    {
        returnValue = F("Karl-Theodor-von-Guttenberg-Str.");
        break;
    }
    case 181859:
    {
        returnValue = F("Karl-Thiel-Str.");
        break;
    }
    case 181860:
    {
        returnValue = F("Karl-Thiele-Weg");
        break;
    }
    case 181861:
    {
        returnValue = F("Karl-Thieß-Str.");
        break;
    }
    case 181862:
    {
        returnValue = F("Karl-Thomas-Str.");
        break;
    }
    case 181863:
    {
        returnValue = F("Karl-Thomas-Weg");
        break;
    }
    case 181864:
    {
        returnValue = F("Karl-Thon-Platz");
        break;
    }
    case 181865:
    {
        returnValue = F("Karl-Thon-Str.");
        break;
    }
    case 181866:
    {
        returnValue = F("Karl-Thöne-Str.");
        break;
    }
    case 181867:
    {
        returnValue = F("Karl-Tietz-Str.");
        break;
    }
    case 181868:
    {
        returnValue = F("Karl-Timmler-Str.");
        break;
    }
    case 181869:
    {
        returnValue = F("Karl-Trapp-Str.");
        break;
    }
    case 181870:
    {
        returnValue = F("Karl-Trau-Str.");
        break;
    }
    case 181871:
    {
        returnValue = F("Karl-Traub-Str.");
        break;
    }
    case 181872:
    {
        returnValue = F("Karl-Triebold-Str.");
        break;
    }
    case 181873:
    {
        returnValue = F("Karl-Truchsess-Weg");
        break;
    }
    case 181874:
    {
        returnValue = F("Karl-Tschamber-Str.");
        break;
    }
    case 181875:
    {
        returnValue = F("Karl-Türk-Str.");
        break;
    }
    case 181876:
    {
        returnValue = F("Karl-Uhl-Str.");
        break;
    }
    case 181877:
    {
        returnValue = F("Karl-Ullmer-Weg");
        break;
    }
    case 181878:
    {
        returnValue = F("Karl-Ulrich-Str.");
        break;
    }
    case 181879:
    {
        returnValue = F("Karl-Unsin-Str.");
        break;
    }
    case 181880:
    {
        returnValue = F("Karl-Valentin-Gasse");
        break;
    }
    case 181881:
    {
        returnValue = F("Karl-Valentin-Str.");
        break;
    }
    case 181882:
    {
        returnValue = F("Karl-Valentin-Weg");
        break;
    }
    case 181883:
    {
        returnValue = F("Karl-Vetter-Ring");
        break;
    }
    case 181884:
    {
        returnValue = F("Karl-Vetter-Str.");
        break;
    }
    case 181885:
    {
        returnValue = F("Karl-Vogel-Str.");
        break;
    }
    case 181886:
    {
        returnValue = F("Karl-Vogl-Str.");
        break;
    }
    case 181887:
    {
        returnValue = F("Karl-Vogler-Str.");
        break;
    }
    case 181888:
    {
        returnValue = F("Karl-Vogt-Str.");
        break;
    }
    case 181889:
    {
        returnValue = F("Karl-Volkert-Ring");
        break;
    }
    case 181890:
    {
        returnValue = F("Karl-Vopelius-Str.");
        break;
    }
    case 181891:
    {
        returnValue = F("Karl-Völker-Str.");
        break;
    }
    case 181892:
    {
        returnValue = F("Karl-Wackenhut-Str.");
        break;
    }
    case 181893:
    {
        returnValue = F("Karl-Wacker-Str.");
        break;
    }
    case 181894:
    {
        returnValue = F("Karl-Wagener-Str.");
        break;
    }
    case 181895:
    {
        returnValue = F("Karl-Wagenfeld-Platz");
        break;
    }
    case 181896:
    {
        returnValue = F("Karl-Wagenfeld-Str.");
        break;
    }
    case 181897:
    {
        returnValue = F("Karl-Wagenfeld-Weg");
        break;
    }
    case 181898:
    {
        returnValue = F("Karl-Wagenplast-Str.");
        break;
    }
    case 181899:
    {
        returnValue = F("Karl-Wagler-Str.");
        break;
    }
    case 181900:
    {
        returnValue = F("Karl-Wagner-Str.");
        break;
    }
    case 181901:
    {
        returnValue = F("Karl-Waldschmidt-Str.");
        break;
    }
    case 181902:
    {
        returnValue = F("Karl-Waller-Weg");
        break;
    }
    case 181903:
    {
        returnValue = F("Karl-Walter-Str.");
        break;
    }
    case 181904:
    {
        returnValue = F("Karl-Walterspiel-Weg");
        break;
    }
    case 181905:
    {
        returnValue = F("Karl-Walther-Alle");
        break;
    }
    case 181906:
    {
        returnValue = F("Karl-Wander-Str.");
        break;
    }
    case 181907:
    {
        returnValue = F("Karl-Wastl-Str.");
        break;
    }
    case 181908:
    {
        returnValue = F("Karl-Weber-Ring");
        break;
    }
    case 181909:
    {
        returnValue = F("Karl-Weber-Str.");
        break;
    }
    case 181910:
    {
        returnValue = F("Karl-Wehler-Str.");
        break;
    }
    case 181911:
    {
        returnValue = F("Karl-Wehrhan-Str.");
        break;
    }
    case 181912:
    {
        returnValue = F("Karl-Weichenrieder-Str.");
        break;
    }
    case 181913:
    {
        returnValue = F("Karl-Weikert-Str.");
        break;
    }
    case 181914:
    {
        returnValue = F("Karl-Weimer-Str.");
        break;
    }
    case 181915:
    {
        returnValue = F("Karl-Weinbrenner-Str.");
        break;
    }
    case 181916:
    {
        returnValue = F("Karl-Weiser-Str.");
        break;
    }
    case 181917:
    {
        returnValue = F("Karl-Weishäupl-Str.");
        break;
    }
    case 181918:
    {
        returnValue = F("Karl-Weitz-Str.");
        break;
    }
    case 181919:
    {
        returnValue = F("Karl-Weiß-Str.");
        break;
    }
    case 181920:
    {
        returnValue = F("Karl-Weller-Str.");
        break;
    }
    case 181921:
    {
        returnValue = F("Karl-Wendt-Str.");
        break;
    }
    case 181922:
    {
        returnValue = F("Karl-Wenholt-Str.");
        break;
    }
    case 181923:
    {
        returnValue = F("Karl-Wenk-Str.");
        break;
    }
    case 181924:
    {
        returnValue = F("Karl-Wenzel-Str.");
        break;
    }
    case 181925:
    {
        returnValue = F("Karl-Wernecke-Str.");
        break;
    }
    case 181926:
    {
        returnValue = F("Karl-Werner-Str.");
        break;
    }
    case 181927:
    {
        returnValue = F("Karl-Wernicke-Platz");
        break;
    }
    case 181928:
    {
        returnValue = F("Karl-Wessels-Str.");
        break;
    }
    case 181929:
    {
        returnValue = F("Karl-Wessendorft-Str.");
        break;
    }
    case 181930:
    {
        returnValue = F("Karl-Wetzel-Str.");
        break;
    }
    case 181931:
    {
        returnValue = F("Karl-Wichmann-Str.");
        break;
    }
    case 181932:
    {
        returnValue = F("Karl-Wiechert-Allee");
        break;
    }
    case 181933:
    {
        returnValue = F("Karl-Wiegand-Str.");
        break;
    }
    case 181934:
    {
        returnValue = F("Karl-Wildschütz-Str.");
        break;
    }
    case 181935:
    {
        returnValue = F("Karl-Wilführ-Str.");
        break;
    }
    case 181936:
    {
        returnValue = F("Karl-Wilhelm-Heck-Str.");
        break;
    }
    case 181937:
    {
        returnValue = F("Karl-Wilhelm-Str.");
        break;
    }
    case 181938:
    {
        returnValue = F("Karl-Wilhelmi-Str.");
        break;
    }
    case 181939:
    {
        returnValue = F("Karl-Willmann-Str.");
        break;
    }
    case 181940:
    {
        returnValue = F("Karl-Wiltberger-Str.");
        break;
    }
    case 181941:
    {
        returnValue = F("Karl-Wingchen-Str.");
        break;
    }
    case 181942:
    {
        returnValue = F("Karl-Winhart-Str.");
        break;
    }
    case 181943:
    {
        returnValue = F("Karl-Winkler-Str.");
        break;
    }
    case 181944:
    {
        returnValue = F("Karl-Winnacker-Str.");
        break;
    }
    case 181945:
    {
        returnValue = F("Karl-Winter-Str.");
        break;
    }
    case 181946:
    {
        returnValue = F("Karl-Wirth-Str.");
        break;
    }
    case 181947:
    {
        returnValue = F("Karl-Wirth-Weg");
        break;
    }
    case 181948:
    {
        returnValue = F("Karl-Witte-Str.");
        break;
    }
    case 181949:
    {
        returnValue = F("Karl-Woitschach-Str.");
        break;
    }
    case 181950:
    {
        returnValue = F("Karl-Wolf-Str.");
        break;
    }
    case 181951:
    {
        returnValue = F("Karl-Wolfart-Str.");
        break;
    }
    case 181952:
    {
        returnValue = F("Karl-Wolff-Str.");
        break;
    }
    case 181953:
    {
        returnValue = F("Karl-Worm-Str.");
        break;
    }
    case 181954:
    {
        returnValue = F("Karl-Wulle-Str.");
        break;
    }
    case 181955:
    {
        returnValue = F("Karl-Wähmann-Str.");
        break;
    }
    case 181956:
    {
        returnValue = F("Karl-Wäschle-Str.");
        break;
    }
    case 181957:
    {
        returnValue = F("Karl-Wölfl-Str.");
        break;
    }
    case 181958:
    {
        returnValue = F("Karl-Wünschmann-Str.");
        break;
    }
    case 181959:
    {
        returnValue = F("Karl-Wüst-Str.");
        break;
    }
    case 181960:
    {
        returnValue = F("Karl-Wüstefeld-Weg");
        break;
    }
    case 181961:
    {
        returnValue = F("Karl-Xaver-Maximilian-Weg");
        break;
    }
    case 181962:
    {
        returnValue = F("Karl-Zahn-Str.");
        break;
    }
    case 181963:
    {
        returnValue = F("Karl-Zeißig-Weg");
        break;
    }
    case 181964:
    {
        returnValue = F("Karl-Zeller-Str.");
        break;
    }
    case 181965:
    {
        returnValue = F("Karl-Zelter-Str.");
        break;
    }
    case 181966:
    {
        returnValue = F("Karl-Zerbst-Str.");
        break;
    }
    case 181967:
    {
        returnValue = F("Karl-Zeuch-Str.");
        break;
    }
    case 181968:
    {
        returnValue = F("Karl-Ziegler-Str.");
        break;
    }
    case 181969:
    {
        returnValue = F("Karl-Zimmermann-Str.");
        break;
    }
    case 181970:
    {
        returnValue = F("Karl-Zindl-Str.");
        break;
    }
    case 181971:
    {
        returnValue = F("Karl-Zink-Str.");
        break;
    }
    case 181972:
    {
        returnValue = F("Karl-Zucker-Str.");
        break;
    }
    case 181973:
    {
        returnValue = F("Karl-Zulauf-Str.");
        break;
    }
    case 181974:
    {
        returnValue = F("Karl-Zurlo-Str.");
        break;
    }
    case 181975:
    {
        returnValue = F("Karl-Zörgiebel-Str.");
        break;
    }
    case 181976:
    {
        returnValue = F("Karl-der-Große-Str.");
        break;
    }
    case 181977:
    {
        returnValue = F("Karl-und-Else-Seifried-Platz");
        break;
    }
    case 181978:
    {
        returnValue = F("Karl-und-Gitta-Obitz-Steig");
        break;
    }
    case 181979:
    {
        returnValue = F("Karl-v.Leoprechting-Weg");
        break;
    }
    case 181980:
    {
        returnValue = F("Karl-van-Berk-Park");
        break;
    }
    case 181981:
    {
        returnValue = F("Karl-von-Beust-Str.");
        break;
    }
    case 181982:
    {
        returnValue = F("Karl-von-Brüger-Str.");
        break;
    }
    case 181983:
    {
        returnValue = F("Karl-von-Drais-Str.");
        break;
    }
    case 181984:
    {
        returnValue = F("Karl-von-Eckart-Str.");
        break;
    }
    case 181985:
    {
        returnValue = F("Karl-von-Ehmann-Str.");
        break;
    }
    case 181986:
    {
        returnValue = F("Karl-von-Ehrenwall-Allee");
        break;
    }
    case 181987:
    {
        returnValue = F("Karl-von-Freyberg-Str.");
        break;
    }
    case 181988:
    {
        returnValue = F("Karl-von-Frisch-Str.");
        break;
    }
    case 181989:
    {
        returnValue = F("Karl-von-Goebel-Str.");
        break;
    }
    case 181990:
    {
        returnValue = F("Karl-von-Hahn-Str.");
        break;
    }
    case 181991:
    {
        returnValue = F("Karl-von-Hase-Str.");
        break;
    }
    case 181992:
    {
        returnValue = F("Karl-von-Horlacher-Str.");
        break;
    }
    case 181993:
    {
        returnValue = F("Karl-von-Hörsten-Str.");
        break;
    }
    case 181994:
    {
        returnValue = F("Karl-von-Kniestedt-Str.");
        break;
    }
    case 181995:
    {
        returnValue = F("Karl-von-Korb-Str.");
        break;
    }
    case 181996:
    {
        returnValue = F("Karl-von-Linde-Str.");
        break;
    }
    case 181997:
    {
        returnValue = F("Karl-von-Linprun-Weg");
        break;
    }
    case 181998:
    {
        returnValue = F("Karl-von-Moreau-Str.");
        break;
    }
    case 181999:
    {
        returnValue = F("Karla-Schmidt-Str.");
        break;
    }
    case 182000:
    {
        returnValue = F("Karlbacher Weg");
        break;
    }
    case 182001:
    {
        returnValue = F("Karlberg");
        break;
    }
    case 182002:
    {
        returnValue = F("Karlberger Str.");
        break;
    }
    case 182003:
    {
        returnValue = F("Karlbergfeld");
        break;
    }
    case 182004:
    {
        returnValue = F("Karlburger Grund");
        break;
    }
    case 182005:
    {
        returnValue = F("Karlburger Str.");
        break;
    }
    case 182006:
    {
        returnValue = F("Karle-Hankh-Weg");
        break;
    }
    case 182007:
    {
        returnValue = F("Karlemannweg");
        break;
    }
    case 182008:
    {
        returnValue = F("Karlenwiesenweg");
        break;
    }
    case 182009:
    {
        returnValue = F("Karler Berg");
        break;
    }
    case 182010:
    {
        returnValue = F("Karlesberg");
        break;
    }
    case 182011:
    {
        returnValue = F("Karleshütteweg");
        break;
    }
    case 182012:
    {
        returnValue = F("Karlesjürge-Rauthweg");
        break;
    }
    case 182013:
    {
        returnValue = F("Karletweg");
        break;
    }
    case 182014:
    {
        returnValue = F("Karlfried-Hepp Weg");
        break;
    }
    case 182015:
    {
        returnValue = F("Karlgasse");
        break;
    }
    case 182016:
    {
        returnValue = F("Karlgäßchen");
        break;
    }
    case 182017:
    {
        returnValue = F("Karlheinz-Gerhold-Platz");
        break;
    }
    case 182018:
    {
        returnValue = F("Karlheinz-Goedtke-Str.");
        break;
    }
    case 182019:
    {
        returnValue = F("Karlheinz-Jung-Weg");
        break;
    }
    case 182020:
    {
        returnValue = F("Karlheinz-Kaske-Str.");
        break;
    }
    case 182021:
    {
        returnValue = F("Karlheinz-Lintz-Str.");
        break;
    }
    case 182022:
    {
        returnValue = F("Karlheinz-Stockhausen-Str.");
        break;
    }
    case 182023:
    {
        returnValue = F("Karlinger Feld");
        break;
    }
    case 182024:
    {
        returnValue = F("Karlinger Str.");
        break;
    }
    case 182025:
    {
        returnValue = F("Karlinger Weg");
        break;
    }
    case 182026:
    {
        returnValue = F("Karlingerstr.");
        break;
    }
    case 182027:
    {
        returnValue = F("Karlisgutweg");
        break;
    }
    case 182028:
    {
        returnValue = F("Karlmann");
        break;
    }
    case 182029:
    {
        returnValue = F("Karlmann-Steige");
        break;
    }
    case 182030:
    {
        returnValue = F("Karlmannstr.");
        break;
    }
    case 182031:
    {
        returnValue = F("Karlmax-Küppers-Weg");
        break;
    }
    case 182032:
    {
        returnValue = F("Karlmühlweg");
        break;
    }
    case 182033:
    {
        returnValue = F("Karlplatz");
        break;
    }
    case 182034:
    {
        returnValue = F("Karlrobert-Kreiten-Str.");
        break;
    }
    case 182035:
    {
        returnValue = F("Karls Diek");
        break;
    }
    case 182036:
    {
        returnValue = F("Karls Hütten Allee");
        break;
    }
    case 182037:
    {
        returnValue = F("Karlsallee");
        break;
    }
    case 182038:
    {
        returnValue = F("Karlsaue");
        break;
    }
    case 182039:
    {
        returnValue = F("Karlsauer Weg");
        break;
    }
    case 182040:
    {
        returnValue = F("Karlsbad");
        break;
    }
    case 182041:
    {
        returnValue = F("Karlsbader Platz");
        break;
    }
    case 182042:
    {
        returnValue = F("Karlsbader Ring");
        break;
    }
    case 182043:
    {
        returnValue = F("Karlsbader Str.");
        break;
    }
    case 182044:
    {
        returnValue = F("Karlsbader Weg");
        break;
    }
    case 182045:
    {
        returnValue = F("Karlsbaderstr.");
        break;
    }
    case 182046:
    {
        returnValue = F("Karlsbadstr.");
        break;
    }
    case 182047:
    {
        returnValue = F("Karlsbadweg");
        break;
    }
    case 182048:
    {
        returnValue = F("Karlsbank");
        break;
    }
    case 182049:
    {
        returnValue = F("Karlsbaupassage");
        break;
    }
    case 182050:
    {
        returnValue = F("Karlsberg");
        break;
    }
    case 182051:
    {
        returnValue = F("Karlsberger Hof");
        break;
    }
    case 182052:
    {
        returnValue = F("Karlsberger Str.");
        break;
    }
    case 182053:
    {
        returnValue = F("Karlsberger Weg");
        break;
    }
    case 182054:
    {
        returnValue = F("Karlsbergpassage");
        break;
    }
    case 182055:
    {
        returnValue = F("Karlsbergstr.");
        break;
    }
    case 182056:
    {
        returnValue = F("Karlsbergweg");
        break;
    }
    case 182057:
    {
        returnValue = F("Karlsbiese");
        break;
    }
    case 182058:
    {
        returnValue = F("Karlsbrunnenplatz");
        break;
    }
    case 182059:
    {
        returnValue = F("Karlsbrunnenstr.");
        break;
    }
    case 182060:
    {
        returnValue = F("Karlsbrunner Str.");
        break;
    }
    case 182061:
    {
        returnValue = F("Karlsbrunner Weg");
        break;
    }
    case 182062:
    {
        returnValue = F("Karlsbrücke");
        break;
    }
    case 182063:
    {
        returnValue = F("Karlsburg");
        break;
    }
    case 182064:
    {
        returnValue = F("Karlsburger Feldweg");
        break;
    }
    case 182065:
    {
        returnValue = F("Karlsburger Str.");
        break;
    }
    case 182066:
    {
        returnValue = F("Karlsburgstr.");
        break;
    }
    case 182067:
    {
        returnValue = F("Karlsburgweg");
        break;
    }
    case 182068:
    {
        returnValue = F("Karlschmitter Weg");
        break;
    }
    case 182069:
    {
        returnValue = F("Karlschneise");
        break;
    }
    case 182070:
    {
        returnValue = F("Karlsdorf");
        break;
    }
    case 182071:
    {
        returnValue = F("Karlsdorf Mitte");
        break;
    }
    case 182072:
    {
        returnValue = F("Karlsdorfer Str.");
        break;
    }
    case 182073:
    {
        returnValue = F("Karlsdorfer Weg");
        break;
    }
    case 182074:
    {
        returnValue = F("Karlseck");
        break;
    }
    case 182075:
    {
        returnValue = F("Karlsecke");
        break;
    }
    case 182076:
    {
        returnValue = F("Karlsfelde");
        break;
    }
    case 182077:
    {
        returnValue = F("Karlsfelder Str.");
        break;
    }
    case 182078:
    {
        returnValue = F("Karlsfelder Weg");
        break;
    }
    case 182079:
    {
        returnValue = F("Karlsfeldstr.");
        break;
    }
    case 182080:
    {
        returnValue = F("Karlsforster Str.");
        break;
    }
    case 182081:
    {
        returnValue = F("Karlsfurtweg");
        break;
    }
    case 182082:
    {
        returnValue = F("Karlsgarten");
        break;
    }
    case 182083:
    {
        returnValue = F("Karlsgasse");
        break;
    }
    case 182084:
    {
        returnValue = F("Karlsglückstr.");
        break;
    }
    case 182085:
    {
        returnValue = F("Karlsgraben");
        break;
    }
    case 182086:
    {
        returnValue = F("Karlsgrabenstr.");
        break;
    }
    case 182087:
    {
        returnValue = F("Karlshafener Str.");
        break;
    }
    case 182088:
    {
        returnValue = F("Karlshagener Str.");
        break;
    }
    case 182089:
    {
        returnValue = F("Karlshagener Weg");
        break;
    }
    case 182090:
    {
        returnValue = F("Karlshalle");
        break;
    }
    case 182091:
    {
        returnValue = F("Karlshamnweg");
        break;
    }
    case 182092:
    {
        returnValue = F("Karlshauser Weg");
        break;
    }
    case 182093:
    {
        returnValue = F("Karlshof");
        break;
    }
    case 182094:
    {
        returnValue = F("Karlshofer Feld");
        break;
    }
    case 182095:
    {
        returnValue = F("Karlshofer Gut");
        break;
    }
    case 182096:
    {
        returnValue = F("Karlshofer Heide");
        break;
    }
    case 182097:
    {
        returnValue = F("Karlshofer Siedlung");
        break;
    }
    case 182098:
    {
        returnValue = F("Karlshofer Str.");
        break;
    }
    case 182099:
    {
        returnValue = F("Karlshofer Weg");
        break;
    }
    case 182100:
    {
        returnValue = F("Karlshofer Wiese");
        break;
    }
    case 182101:
    {
        returnValue = F("Karlshofer-Schneise");
        break;
    }
    case 182102:
    {
        returnValue = F("Karlshofgarten");
        break;
    }
    case 182103:
    {
        returnValue = F("Karlshofstr.");
        break;
    }
    case 182104:
    {
        returnValue = F("Karlshofweg");
        break;
    }
    case 182105:
    {
        returnValue = F("Karlshulder Str.");
        break;
    }
    case 182106:
    {
        returnValue = F("Karlshäuser Weg");
        break;
    }
    case 182107:
    {
        returnValue = F("Karlshöfer Weg");
        break;
    }
    case 182108:
    {
        returnValue = F("Karlshöh");
        break;
    }
    case 182109:
    {
        returnValue = F("Karlshöhe");
        break;
    }
    case 182110:
    {
        returnValue = F("Karlshöhe-Weg");
        break;
    }
    case 182111:
    {
        returnValue = F("Karlshöher Hochweg");
        break;
    }
    case 182112:
    {
        returnValue = F("Karlshöher Str.");
        break;
    }
    case 182113:
    {
        returnValue = F("Karlshöher Talweg");
        break;
    }
    case 182114:
    {
        returnValue = F("Karlshöhlchen");
        break;
    }
    case 182115:
    {
        returnValue = F("Karlshübel");
        break;
    }
    case 182116:
    {
        returnValue = F("Karlshüttenweg");
        break;
    }
    case 182117:
    {
        returnValue = F("Karlskamp");
        break;
    }
    case 182118:
    {
        returnValue = F("Karlskronaweg");
        break;
    }
    case 182119:
    {
        returnValue = F("Karlskroner Str.");
        break;
    }
    case 182120:
    {
        returnValue = F("Karlsleite");
        break;
    }
    case 182121:
    {
        returnValue = F("Karlsluststr.");
        break;
    }
    case 182122:
    {
        returnValue = F("Karlspark");
        break;
    }
    case 182123:
    {
        returnValue = F("Karlspassage");
        break;
    }
    case 182124:
    {
        returnValue = F("Karlsplatz");
        break;
    }
    case 182125:
    {
        returnValue = F("Karlsring");
        break;
    }
    case 182126:
    {
        returnValue = F("Karlsruh");
        break;
    }
    case 182127:
    {
        returnValue = F("Karlsruhe");
        break;
    }
    case 182128:
    {
        returnValue = F("Karlsruher Allee");
        break;
    }
    case 182129:
    {
        returnValue = F("Karlsruher Platz");
        break;
    }
    case 182130:
    {
        returnValue = F("Karlsruher Ring");
        break;
    }
    case 182131:
    {
        returnValue = F("Karlsruher Str.");
        break;
    }
    case 182132:
    {
        returnValue = F("Karlsruher Weg");
        break;
    }
    case 182133:
    {
        returnValue = F("Karlsruhestr.");
        break;
    }
    case 182134:
    {
        returnValue = F("Karlsruhgasse");
        break;
    }
    case 182135:
    {
        returnValue = F("Karlssonweg");
        break;
    }
    case 182136:
    {
        returnValue = F("Karlssteg");
        break;
    }
    case 182137:
    {
        returnValue = F("Karlsstift");
        break;
    }
    case 182138:
    {
        returnValue = F("Karlsstr.");
        break;
    }
    case 182139:
    {
        returnValue = F("Karlstadt");
        break;
    }
    case 182140:
    {
        returnValue = F("Karlstadter Pfad");
        break;
    }
    case 182141:
    {
        returnValue = F("Karlstadter Str.");
        break;
    }
    case 182142:
    {
        returnValue = F("Karlstadterstr.");
        break;
    }
    case 182143:
    {
        returnValue = F("Karlstadtstr.");
        break;
    }
    case 182144:
    {
        returnValue = F("Karlstal");
        break;
    }
    case 182145:
    {
        returnValue = F("Karlstalstr.");
        break;
    }
    case 182146:
    {
        returnValue = F("Karlstalweg");
        break;
    }
    case 182147:
    {
        returnValue = F("Karlstein");
        break;
    }
    case 182148:
    {
        returnValue = F("Karlsteiner Str.");
        break;
    }
    case 182149:
    {
        returnValue = F("Karlsteinstr.");
        break;
    }
    case 182150:
    {
        returnValue = F("Karlsteinweg");
        break;
    }
    case 182151:
    {
        returnValue = F("Karlsternstr.");
        break;
    }
    case 182152:
    {
        returnValue = F("Karlstr.");
        break;
    }
    case 182153:
    {
        returnValue = F("Karlstädter Str.");
        break;
    }
    case 182154:
    {
        returnValue = F("Karlsvorstadt");
        break;
    }
    case 182155:
    {
        returnValue = F("Karlsweg");
        break;
    }
    case 182156:
    {
        returnValue = F("Karlswerk");
        break;
    }
    case 182157:
    {
        returnValue = F("Karlswerker Weg");
        break;
    }
    case 182158:
    {
        returnValue = F("Karlswiese");
        break;
    }
    case 182159:
    {
        returnValue = F("Karlswörthschneise");
        break;
    }
    case 182160:
    {
        returnValue = F("Karlumer Str.");
        break;
    }
    case 182161:
    {
        returnValue = F("Karlweg");
        break;
    }
    case 182162:
    {
        returnValue = F("Karmannshof");
        break;
    }
    case 182163:
    {
        returnValue = F("Karmannsstr.");
        break;
    }
    case 182164:
    {
        returnValue = F("Karmannstr.");
        break;
    }
    case 182165:
    {
        returnValue = F("Karmarschstr.");
        break;
    }
    case 182166:
    {
        returnValue = F("Karmelenbergerweg");
        break;
    }
    case 182167:
    {
        returnValue = F("Karmelitengasse");
        break;
    }
    case 182168:
    {
        returnValue = F("Karmelitenmauer");
        break;
    }
    case 182169:
    {
        returnValue = F("Karmelitenplatz");
        break;
    }
    case 182170:
    {
        returnValue = F("Karmelitenstr.");
        break;
    }
    case 182171:
    {
        returnValue = F("Karmeliter Passage");
        break;
    }
    case 182172:
    {
        returnValue = F("Karmelitergasse");
        break;
    }
    case 182173:
    {
        returnValue = F("Karmeliterkirchhof");
        break;
    }
    case 182174:
    {
        returnValue = F("Karmeliterstr.");
        break;
    }
    case 182175:
    {
        returnValue = F("Karmeliterweg");
        break;
    }
    case 182176:
    {
        returnValue = F("Karmelstr.");
        break;
    }
    case 182177:
    {
        returnValue = F("Karmensöldener Str.");
        break;
    }
    case 182178:
    {
        returnValue = F("Karmensöldner Str.");
        break;
    }
    case 182179:
    {
        returnValue = F("Karmingimpelweg");
        break;
    }
    case 182180:
    {
        returnValue = F("Karmitz");
        break;
    }
    case 182181:
    {
        returnValue = F("Karmsche Heide");
        break;
    }
    case 182182:
    {
        returnValue = F("Karnacksweg");
        break;
    }
    case 182183:
    {
        returnValue = F("Karnaper Str.");
        break;
    }
    case 182184:
    {
        returnValue = F("Karnatzkistr.");
        break;
    }
    case 182185:
    {
        returnValue = F("Karnberg");
        break;
    }
    case 182186:
    {
        returnValue = F("Karnbrocks Gärten");
        break;
    }
    case 182187:
    {
        returnValue = F("Karneolstr.");
        break;
    }
    case 182188:
    {
        returnValue = F("Karneolweg");
        break;
    }
    case 182189:
    {
        returnValue = F("Karngang");
        break;
    }
    case 182190:
    {
        returnValue = F("Karngasse");
        break;
    }
    case 182191:
    {
        returnValue = F("Karnhöfener Str.");
        break;
    }
    case 182192:
    {
        returnValue = F("Karnickelberg");
        break;
    }
    case 182193:
    {
        returnValue = F("Karnickelbusch");
        break;
    }
    case 182194:
    {
        returnValue = F("Karnickelweg");
        break;
    }
    case 182195:
    {
        returnValue = F("Karnier");
        break;
    }
    case 182196:
    {
        returnValue = F("Karnin");
        break;
    }
    case 182197:
    {
        returnValue = F("Karniner Str.");
        break;
    }
    case 182198:
    {
        returnValue = F("Karniner Weg");
        break;
    }
    case 182199:
    {
        returnValue = F("Karnipp");
        break;
    }
    case 182200:
    {
        returnValue = F("Karnipstr.");
        break;
    }
    case 182201:
    {
        returnValue = F("Karnitz");
        break;
    }
    case 182202:
    {
        returnValue = F("Karnsberg");
        break;
    }
    case 182203:
    {
        returnValue = F("Karnsberg-Mahdweg");
        break;
    }
    case 182204:
    {
        returnValue = F("Karnsberger Str.");
        break;
    }
    case 182205:
    {
        returnValue = F("Karnstedtstr.");
        break;
    }
    case 182206:
    {
        returnValue = F("Karnstr.");
        break;
    }
    case 182207:
    {
        returnValue = F("Karnweg");
        break;
    }
    case 182208:
    {
        returnValue = F("Karnzow");
        break;
    }
    case 182209:
    {
        returnValue = F("Karolastr.");
        break;
    }
    case 182210:
    {
        returnValue = F("Karolienenstr.");
        break;
    }
    case 182211:
    {
        returnValue = F("Karolienstr.");
        break;
    }
    case 182212:
    {
        returnValue = F("Karolina-Burger-Str.");
        break;
    }
    case 182213:
    {
        returnValue = F("Karolina-Gilch-Str.");
        break;
    }
    case 182214:
    {
        returnValue = F("Karolina-Reiner Str.");
        break;
    }
    case 182215:
    {
        returnValue = F("Karolinastr.");
        break;
    }
    case 182216:
    {
        returnValue = F("Karoline-Ammer-Str.");
        break;
    }
    case 182217:
    {
        returnValue = F("Karoline-Balser-Weg");
        break;
    }
    case 182218:
    {
        returnValue = F("Karoline-Fele-Str.");
        break;
    }
    case 182219:
    {
        returnValue = F("Karoline-Gaubatz-Weg");
        break;
    }
    case 182220:
    {
        returnValue = F("Karoline-Groh-Weg");
        break;
    }
    case 182221:
    {
        returnValue = F("Karoline-Herschel Str.");
        break;
    }
    case 182222:
    {
        returnValue = F("Karoline-Herschel-Str.");
        break;
    }
    case 182223:
    {
        returnValue = F("Karoline-Herschel-Weg");
        break;
    }
    case 182224:
    {
        returnValue = F("Karoline-Kahn-Platz");
        break;
    }
    case 182225:
    {
        returnValue = F("Karoline-Schnizler-Weg");
        break;
    }
    case 182226:
    {
        returnValue = F("Karoline-Schulze-Str.");
        break;
    }
    case 182227:
    {
        returnValue = F("Karoline-Zwiener-Str.");
        break;
    }
    case 182228:
    {
        returnValue = F("Karoline-von-Günderode-Str.");
        break;
    }
    case 182229:
    {
        returnValue = F("Karoline-von-Günderode-Weg");
        break;
    }
    case 182230:
    {
        returnValue = F("Karoline-von-Günderrode-Weg");
        break;
    }
    case 182231:
    {
        returnValue = F("Karolinenbrücke");
        break;
    }
    case 182232:
    {
        returnValue = F("Karolinenfeld");
        break;
    }
    case 182233:
    {
        returnValue = F("Karolinenfield");
        break;
    }
    case 182234:
    {
        returnValue = F("Karolinengarten");
        break;
    }
    case 182235:
    {
        returnValue = F("Karolinenhof");
        break;
    }
    case 182236:
    {
        returnValue = F("Karolinenhöhe");
        break;
    }
    case 182237:
    {
        returnValue = F("Karolinenpark");
        break;
    }
    case 182238:
    {
        returnValue = F("Karolinenplatz");
        break;
    }
    case 182239:
    {
        returnValue = F("Karolinenreuther Str.");
        break;
    }
    case 182240:
    {
        returnValue = F("Karolinenruhe");
        break;
    }
    case 182241:
    {
        returnValue = F("Karolinensteige");
        break;
    }
    case 182242:
    {
        returnValue = F("Karolinenstr.");
        break;
    }
    case 182243:
    {
        returnValue = F("Karolinenterrasse");
        break;
    }
    case 182244:
    {
        returnValue = F("Karolinenweg");
        break;
    }
    case 182245:
    {
        returnValue = F("Karolinger Platz");
        break;
    }
    case 182246:
    {
        returnValue = F("Karolinger Str.");
        break;
    }
    case 182247:
    {
        returnValue = F("Karolinger Weg");
        break;
    }
    case 182248:
    {
        returnValue = F("Karolingerallee");
        break;
    }
    case 182249:
    {
        returnValue = F("Karolingerbrücke");
        break;
    }
    case 182250:
    {
        returnValue = F("Karolingerplatz");
        break;
    }
    case 182251:
    {
        returnValue = F("Karolingerring");
        break;
    }
    case 182252:
    {
        returnValue = F("Karolingerstr.");
        break;
    }
    case 182253:
    {
        returnValue = F("Karolingerweg");
        break;
    }
    case 182254:
    {
        returnValue = F("Karolistr.");
        break;
    }
    case 182255:
    {
        returnValue = F("Karoliusplatz");
        break;
    }
    case 182256:
    {
        returnValue = F("Karottengasse");
        break;
    }
    case 182257:
    {
        returnValue = F("Karow");
        break;
    }
    case 182258:
    {
        returnValue = F("Karoweg");
        break;
    }
    case 182259:
    {
        returnValue = F("Karower Chaussee");
        break;
    }
    case 182260:
    {
        returnValue = F("Karower Dorfstr.");
        break;
    }
    case 182261:
    {
        returnValue = F("Karower Oval");
        break;
    }
    case 182262:
    {
        returnValue = F("Karower Ring");
        break;
    }
    case 182263:
    {
        returnValue = F("Karower Str.");
        break;
    }
    case 182264:
    {
        returnValue = F("Karower Weg");
        break;
    }
    case 182265:
    {
        returnValue = F("Karoxbosteler Chaussee");
        break;
    }
    case 182266:
    {
        returnValue = F("Karoxbosteler Weg");
        break;
    }
    case 182267:
    {
        returnValue = F("Karpatenstr.");
        break;
    }
    case 182268:
    {
        returnValue = F("Karpatenweg");
        break;
    }
    case 182269:
    {
        returnValue = F("Karpenbachweg");
        break;
    }
    case 182270:
    {
        returnValue = F("Karpendeller Weg");
        break;
    }
    case 182271:
    {
        returnValue = F("Karpendieck");
        break;
    }
    case 182272:
    {
        returnValue = F("Karpendiek");
        break;
    }
    case 182273:
    {
        returnValue = F("Karpesseifen");
        break;
    }
    case 182274:
    {
        returnValue = F("Karpfangerstr.");
        break;
    }
    case 182275:
    {
        returnValue = F("Karpfenbach");
        break;
    }
    case 182276:
    {
        returnValue = F("Karpfenbruchwiese");
        break;
    }
    case 182277:
    {
        returnValue = F("Karpfendamm");
        break;
    }
    case 182278:
    {
        returnValue = F("Karpfenfängerweg");
        break;
    }
    case 182279:
    {
        returnValue = F("Karpfengasse");
        break;
    }
    case 182280:
    {
        returnValue = F("Karpfengrund");
        break;
    }
    case 182281:
    {
        returnValue = F("Karpfenkreisel");
        break;
    }
    case 182282:
    {
        returnValue = F("Karpfenstieg");
        break;
    }
    case 182283:
    {
        returnValue = F("Karpfenstr.");
        break;
    }
    case 182284:
    {
        returnValue = F("Karpfenteich");
        break;
    }
    case 182285:
    {
        returnValue = F("Karpfenweg");
        break;
    }
    case 182286:
    {
        returnValue = F("Karpfenweide");
        break;
    }
    case 182287:
    {
        returnValue = F("Karpfenweiher");
        break;
    }
    case 182288:
    {
        returnValue = F("Karpfham Bahnhof");
        break;
    }
    case 182289:
    {
        returnValue = F("Karpfhofer Weg");
        break;
    }
    case 182290:
    {
        returnValue = F("Karpfhofweg");
        break;
    }
    case 182291:
    {
        returnValue = F("Karpfseestr.");
        break;
    }
    case 182292:
    {
        returnValue = F("Karpiner Damm");
        break;
    }
    case 182293:
    {
        returnValue = F("Karquelle");
        break;
    }
    case 182294:
    {
        returnValue = F("Karr");
        break;
    }
    case 182295:
    {
        returnValue = F("Karras");
        break;
    }
    case 182296:
    {
        returnValue = F("Karraser Weg");
        break;
    }
    case 182297:
    {
        returnValue = F("Karrasstr.");
        break;
    }
    case 182298:
    {
        returnValue = F("Karrberg");
        break;
    }
    case 182299:
    {
        returnValue = F("Karree");
        break;
    }
    case 182300:
    {
        returnValue = F("Karren-Steig");
        break;
    }
    case 182301:
    {
        returnValue = F("Karrenbeek");
        break;
    }
    case 182302:
    {
        returnValue = F("Karrenberg");
        break;
    }
    case 182303:
    {
        returnValue = F("Karrenbergstr.");
        break;
    }
    case 182304:
    {
        returnValue = F("Karrenbergsweg");
        break;
    }
    case 182305:
    {
        returnValue = F("Karrenbruch");
        break;
    }
    case 182306:
    {
        returnValue = F("Karrendorfer Str.");
        break;
    }
    case 182307:
    {
        returnValue = F("Karrenführerstr.");
        break;
    }
    case 182308:
    {
        returnValue = F("Karrengasse");
        break;
    }
    case 182309:
    {
        returnValue = F("Karrengrund");
        break;
    }
    case 182310:
    {
        returnValue = F("Karrengäßchen");
        break;
    }
    case 182311:
    {
        returnValue = F("Karrengäßle");
        break;
    }
    case 182312:
    {
        returnValue = F("Karrenhausgasse");
        break;
    }
    case 182313:
    {
        returnValue = F("Karrenkamp");
        break;
    }
    case 182314:
    {
        returnValue = F("Karrenstein");
        break;
    }
    case 182315:
    {
        returnValue = F("Karrenstr.");
        break;
    }
    case 182316:
    {
        returnValue = F("Karrentin");
        break;
    }
    case 182317:
    {
        returnValue = F("Karrenweg");
        break;
    }
    case 182318:
    {
        returnValue = F("Karrenwellenweg");
        break;
    }
    case 182319:
    {
        returnValue = F("Karrerweg");
        break;
    }
    case 182320:
    {
        returnValue = F("Karrharder Str.");
        break;
    }
    case 182321:
    {
        returnValue = F("Karriereschneise");
        break;
    }
    case 182322:
    {
        returnValue = F("Karrillonstr.");
        break;
    }
    case 182323:
    {
        returnValue = F("Karrin");
        break;
    }
    case 182324:
    {
        returnValue = F("Karriner Str.");
        break;
    }
    case 182325:
    {
        returnValue = F("Karritz-Im Dorf");
        break;
    }
    case 182326:
    {
        returnValue = F("Karritzer Str.");
        break;
    }
    case 182327:
    {
        returnValue = F("Karrnweg");
        break;
    }
    case 182328:
    {
        returnValue = F("Karrstr.");
        break;
    }
    case 182329:
    {
        returnValue = F("Karrweg");
        break;
    }
    case 182330:
    {
        returnValue = F("Karrystr.");
        break;
    }
    case 182331:
    {
        returnValue = F("Karröster Weg");
        break;
    }
    case 182332:
    {
        returnValue = F("Karrüh");
        break;
    }
    case 182333:
    {
        returnValue = F("Karschau");
        break;
    }
    case 182334:
    {
        returnValue = F("Karschelt");
        break;
    }
    case 182335:
    {
        returnValue = F("Karschhauser Str.");
        break;
    }
    case 182336:
    {
        returnValue = F("Karschmühlenblick");
        break;
    }
    case 182337:
    {
        returnValue = F("Karschportstr.");
        break;
    }
    case 182338:
    {
        returnValue = F("Karsdorfer Str.");
        break;
    }
    case 182339:
    {
        returnValue = F("Karseer Str.");
        break;
    }
    case 182340:
    {
        returnValue = F("Karsonick");
        break;
    }
    case 182341:
    {
        returnValue = F("Karspitzweg");
        break;
    }
    case 182342:
    {
        returnValue = F("Karspüle");
        break;
    }
    case 182343:
    {
        returnValue = F("Karstedtshofer Str.");
        break;
    }
    case 182344:
    {
        returnValue = F("Karstein");
        break;
    }
    case 182345:
    {
        returnValue = F("Karstelweg");
        break;
    }
    case 182346:
    {
        returnValue = F("Karsten-Balder-Stieg");
        break;
    }
    case 182347:
    {
        returnValue = F("Karsten-Niebuhr-Str.");
        break;
    }
    case 182348:
    {
        returnValue = F("Karsten-Schenk-Weg");
        break;
    }
    case 182349:
    {
        returnValue = F("Karstenberg");
        break;
    }
    case 182350:
    {
        returnValue = F("Karsthölzlestr.");
        break;
    }
    case 182351:
    {
        returnValue = F("Karstorf");
        break;
    }
    case 182352:
    {
        returnValue = F("Karstr.");
        break;
    }
    case 182353:
    {
        returnValue = F("Karststr.");
        break;
    }
    case 182354:
    {
        returnValue = F("Karstwanderweg");
        break;
    }
    case 182355:
    {
        returnValue = F("Karstweg");
        break;
    }
    case 182356:
    {
        returnValue = F("Karstädter Chaussee");
        break;
    }
    case 182357:
    {
        returnValue = F("Karstädter Str.");
        break;
    }
    case 182358:
    {
        returnValue = F("Karstädter Weg");
        break;
    }
    case 182359:
    {
        returnValue = F("Karswaldsiedlung");
        break;
    }
    case 182360:
    {
        returnValue = F("Karswaldstr.");
        break;
    }
    case 182361:
    {
        returnValue = F("Kartalsweg");
        break;
    }
    case 182362:
    {
        returnValue = F("Kartaus");
        break;
    }
    case 182363:
    {
        returnValue = F("Kartause");
        break;
    }
    case 182364:
    {
        returnValue = F("Kartausengarten");
        break;
    }
    case 182365:
    {
        returnValue = F("Kartausweg");
        break;
    }
    case 182366:
    {
        returnValue = F("Kartenberger Weg");
        break;
    }
    case 182367:
    {
        returnValue = F("Kartenbrunner Geräumt");
        break;
    }
    case 182368:
    {
        returnValue = F("Karteneck");
        break;
    }
    case 182369:
    {
        returnValue = F("Kartenschlägerstr.");
        break;
    }
    case 182370:
    {
        returnValue = F("Kartenschlägerweg");
        break;
    }
    case 182371:
    {
        returnValue = F("Kartenspielerweg");
        break;
    }
    case 182372:
    {
        returnValue = F("Karthan");
        break;
    }
    case 182373:
    {
        returnValue = F("Karthaner Weg");
        break;
    }
    case 182374:
    {
        returnValue = F("Karthaus");
        break;
    }
    case 182375:
    {
        returnValue = F("Karthaus-Prüll");
        break;
    }
    case 182376:
    {
        returnValue = F("Karthause");
        break;
    }
    case 182377:
    {
        returnValue = F("Karthausen");
        break;
    }
    case 182378:
    {
        returnValue = F("Karthauser Str.");
        break;
    }
    case 182379:
    {
        returnValue = F("Karthausgarten");
        break;
    }
    case 182380:
    {
        returnValue = F("Karthausstr.");
        break;
    }
    case 182381:
    {
        returnValue = F("Kartheilstr.");
        break;
    }
    case 182382:
    {
        returnValue = F("Karthäuser Gasse");
        break;
    }
    case 182383:
    {
        returnValue = F("Karthäuser Str.");
        break;
    }
    case 182384:
    {
        returnValue = F("Karthäuser Weg");
        break;
    }
    case 182385:
    {
        returnValue = F("Karthäusergasse");
        break;
    }
    case 182386:
    {
        returnValue = F("Karthäuserhofweg");
        break;
    }
    case 182387:
    {
        returnValue = F("Karthäuserplatz");
        break;
    }
    case 182388:
    {
        returnValue = F("Karthäuserring");
        break;
    }
    case 182389:
    {
        returnValue = F("Karthäuserstr.");
        break;
    }
    case 182390:
    {
        returnValue = F("Karthäuserweg");
        break;
    }
    case 182391:
    {
        returnValue = F("Kartlow");
        break;
    }
    case 182392:
    {
        returnValue = F("Kartlower Weg");
        break;
    }
    case 182393:
    {
        returnValue = F("Kartoffelberg");
        break;
    }
    case 182394:
    {
        returnValue = F("Kartoffeldeich");
        break;
    }
    case 182395:
    {
        returnValue = F("Kartoffelgasse");
        break;
    }
    case 182396:
    {
        returnValue = F("Kartoffelhofsweg");
        break;
    }
    case 182397:
    {
        returnValue = F("Kartoffelhöfen");
        break;
    }
    case 182398:
    {
        returnValue = F("Kartoffelkamp");
        break;
    }
    case 182399:
    {
        returnValue = F("Kartoffelweg");
        break;
    }
    case 182400:
    {
        returnValue = F("Kartonstr.");
        break;
    }
    case 182401:
    {
        returnValue = F("Kartsteinhöhe");
        break;
    }
    case 182402:
    {
        returnValue = F("Kartunger Str.");
        break;
    }
    case 182403:
    {
        returnValue = F("Kartzfehner Weg");
        break;
    }
    case 182404:
    {
        returnValue = F("Kartzower Dorfstr.");
        break;
    }
    case 182405:
    {
        returnValue = F("Kartäuser Ring");
        break;
    }
    case 182406:
    {
        returnValue = F("Kartäusereck");
        break;
    }
    case 182407:
    {
        returnValue = F("Kartäusergasse");
        break;
    }
    case 182408:
    {
        returnValue = F("Kartäuserstr.");
        break;
    }
    case 182409:
    {
        returnValue = F("Kartäusertor");
        break;
    }
    case 182410:
    {
        returnValue = F("Kartäuserweg");
        break;
    }
    case 182411:
    {
        returnValue = F("Kartäuserweg -neu-");
        break;
    }
    case 182412:
    {
        returnValue = F("Kartüffelstraat");
        break;
    }
    case 182413:
    {
        returnValue = F("Karuschenweg");
        break;
    }
    case 182414:
    {
        returnValue = F("Karussellgäßchen");
        break;
    }
    case 182415:
    {
        returnValue = F("Karussellplatz");
        break;
    }
    case 182416:
    {
        returnValue = F("Karussellweg");
        break;
    }
    case 182417:
    {
        returnValue = F("Karwe");
        break;
    }
    case 182418:
    {
        returnValue = F("Karweg");
        break;
    }
    case 182419:
    {
        returnValue = F("Karweilerstr.");
        break;
    }
    case 182420:
    {
        returnValue = F("Karwendelpark");
        break;
    }
    case 182421:
    {
        returnValue = F("Karwendelplatz");
        break;
    }
    case 182422:
    {
        returnValue = F("Karwendelring");
        break;
    }
    case 182423:
    {
        returnValue = F("Karwendelstr.");
        break;
    }
    case 182424:
    {
        returnValue = F("Karwendelweg");
        break;
    }
    case 182425:
    {
        returnValue = F("Karwer Heide");
        break;
    }
    case 182426:
    {
        returnValue = F("Karweseer Str.");
        break;
    }
    case 182427:
    {
        returnValue = F("Karwiedenbühlweg");
        break;
    }
    case 182428:
    {
        returnValue = F("Karwinkel");
        break;
    }
    case 182429:
    {
        returnValue = F("Karwinkelstr.");
        break;
    }
    case 182430:
    {
        returnValue = F("Karzer Str.");
        break;
    }
    case 182431:
    {
        returnValue = F("Karzerplan");
        break;
    }
    case 182432:
    {
        returnValue = F("Kasarmen");
        break;
    }
    case 182433:
    {
        returnValue = F("Kasbacher Weg");
        break;
    }
    case 182434:
    {
        returnValue = F("Kasbachtalstr.");
        break;
    }
    case 182435:
    {
        returnValue = F("Kasberg");
        break;
    }
    case 182436:
    {
        returnValue = F("Kasberger Str.");
        break;
    }
    case 182437:
    {
        returnValue = F("Kasbergweg");
        break;
    }
    case 182438:
    {
        returnValue = F("Kasboomhorst");
        break;
    }
    case 182439:
    {
        returnValue = F("Kasbornstr.");
        break;
    }
    case 182440:
    {
        returnValue = F("Kasbreede");
        break;
    }
    case 182441:
    {
        returnValue = F("Kasbruchstr.");
        break;
    }
    case 182442:
    {
        returnValue = F("Kasbüschweg");
        break;
    }
    case 182443:
    {
        returnValue = F("Kascheler Str.");
        break;
    }
    case 182444:
    {
        returnValue = F("Kaschenbacher Str.");
        break;
    }
    case 182445:
    {
        returnValue = F("Kaschestr.");
        break;
    }
    case 182446:
    {
        returnValue = F("Kaschligweg");
        break;
    }
    case 182447:
    {
        returnValue = F("Kaschnitzstr.");
        break;
    }
    case 182448:
    {
        returnValue = F("Kaschnitzweg");
        break;
    }
    case 182449:
    {
        returnValue = F("Kaschower Damm");
        break;
    }
    case 182450:
    {
        returnValue = F("Kaschubenweg");
        break;
    }
    case 182451:
    {
        returnValue = F("Kaschütz");
        break;
    }
    case 182452:
    {
        returnValue = F("Kaseler Weg");
        break;
    }
    case 182453:
    {
        returnValue = F("Kasemannweg");
        break;
    }
    case 182454:
    {
        returnValue = F("Kasender Str.");
        break;
    }
    case 182455:
    {
        returnValue = F("Kasendorfer Str.");
        break;
    }
    case 182456:
    {
        returnValue = F("Kasendorfer Weg");
        break;
    }
    case 182457:
    {
        returnValue = F("Kasenort");
        break;
    }
    case 182458:
    {
        returnValue = F("Kaserne am Walde");
        break;
    }
    case 182459:
    {
        returnValue = F("Kasernenbrunnenweg");
        break;
    }
    case 182460:
    {
        returnValue = F("Kasernendamm");
        break;
    }
    case 182461:
    {
        returnValue = F("Kasernengasse");
        break;
    }
    case 182462:
    {
        returnValue = F("Kasernengäßchen");
        break;
    }
    case 182463:
    {
        returnValue = F("Kasernengäßle");
        break;
    }
    case 182464:
    {
        returnValue = F("Kasernenhof");
        break;
    }
    case 182465:
    {
        returnValue = F("Kasernenhofgasse");
        break;
    }
    case 182466:
    {
        returnValue = F("Kasernenplatz");
        break;
    }
    case 182467:
    {
        returnValue = F("Kasernenstr.");
        break;
    }
    case 182468:
    {
        returnValue = F("Kasernenweg");
        break;
    }
    case 182469:
    {
        returnValue = F("Kasernenösch");
        break;
    }
    case 182470:
    {
        returnValue = F("Kasernplatz");
        break;
    }
    case 182471:
    {
        returnValue = F("Kasernstr.");
        break;
    }
    case 182472:
    {
        returnValue = F("Kasernweg");
        break;
    }
    case 182473:
    {
        returnValue = F("Kasewinkel");
        break;
    }
    case 182474:
    {
        returnValue = F("Kashagener Weg");
        break;
    }
    case 182475:
    {
        returnValue = F("Kasimir-Brandt-Str.");
        break;
    }
    case 182476:
    {
        returnValue = F("Kasimirs Feld");
        break;
    }
    case 182477:
    {
        returnValue = F("Kasimirstr.");
        break;
    }
    case 182478:
    {
        returnValue = F("Kasinger Str.");
        break;
    }
    case 182479:
    {
        returnValue = F("Kasinger Weg");
        break;
    }
    case 182480:
    {
        returnValue = F("Kasinopark");
        break;
    }
    case 182481:
    {
        returnValue = F("Kasinoplatz");
        break;
    }
    case 182482:
    {
        returnValue = F("Kasinostr.");
        break;
    }
    case 182483:
    {
        returnValue = F("Kasinowald");
        break;
    }
    case 182484:
    {
        returnValue = F("Kasinoweg");
        break;
    }
    case 182485:
    {
        returnValue = F("Kaskade");
        break;
    }
    case 182486:
    {
        returnValue = F("Kaskadenweg");
        break;
    }
    case 182487:
    {
        returnValue = F("Kaskampstr.");
        break;
    }
    case 182488:
    {
        returnValue = F("Kaslin");
        break;
    }
    case 182489:
    {
        returnValue = F("Kasmarker Weg");
        break;
    }
    case 182490:
    {
        returnValue = F("Kasnogorsker Str.");
        break;
    }
    case 182491:
    {
        returnValue = F("Kaspar-Basse-Weg");
        break;
    }
    case 182492:
    {
        returnValue = F("Kaspar-Bitter-Str.");
        break;
    }
    case 182493:
    {
        returnValue = F("Kaspar-Bracht-Str.");
        break;
    }
    case 182494:
    {
        returnValue = F("Kaspar-Bregenzer-Str.");
        break;
    }
    case 182495:
    {
        returnValue = F("Kaspar-Brummer-Weg");
        break;
    }
    case 182496:
    {
        returnValue = F("Kaspar-Brusch-Weg");
        break;
    }
    case 182497:
    {
        returnValue = F("Kaspar-Dorsch-Str.");
        break;
    }
    case 182498:
    {
        returnValue = F("Kaspar-Ett-Str.");
        break;
    }
    case 182499:
    {
        returnValue = F("Kaspar-Feichtmayr-Weg");
        break;
    }
    case 182500:
    {
        returnValue = F("Kaspar-Fuchs-Str.");
        break;
    }
    case 182501:
    {
        returnValue = F("Kaspar-Fünders-Str.");
        break;
    }
    case 182502:
    {
        returnValue = F("Kaspar-Glaser-Str.");
        break;
    }
    case 182503:
    {
        returnValue = F("Kaspar-Graf-Str.");
        break;
    }
    case 182504:
    {
        returnValue = F("Kaspar-Grove-Str.");
        break;
    }
    case 182505:
    {
        returnValue = F("Kaspar-Hauser-Platz");
        break;
    }
    case 182506:
    {
        returnValue = F("Kaspar-Hofmann-Weg");
        break;
    }
    case 182507:
    {
        returnValue = F("Kaspar-Hoyer-Ring");
        break;
    }
    case 182508:
    {
        returnValue = F("Kaspar-Hoyer-Str.");
        break;
    }
    case 182509:
    {
        returnValue = F("Kaspar-Kercher-Str.");
        break;
    }
    case 182510:
    {
        returnValue = F("Kaspar-Kindl-Weg");
        break;
    }
    case 182511:
    {
        returnValue = F("Kaspar-Klaus-Str.");
        break;
    }
    case 182512:
    {
        returnValue = F("Kaspar-Klein-Str.");
        break;
    }
    case 182513:
    {
        returnValue = F("Kaspar-Kloos-Str.");
        break;
    }
    case 182514:
    {
        returnValue = F("Kaspar-Koler-Weg");
        break;
    }
    case 182515:
    {
        returnValue = F("Kaspar-Kurrer-Weg");
        break;
    }
    case 182516:
    {
        returnValue = F("Kaspar-Kögler-Platz");
        break;
    }
    case 182517:
    {
        returnValue = F("Kaspar-Lang-Str.");
        break;
    }
    case 182518:
    {
        returnValue = F("Kaspar-Leyser-Str.");
        break;
    }
    case 182519:
    {
        returnValue = F("Kaspar-Lochner-Str.");
        break;
    }
    case 182520:
    {
        returnValue = F("Kaspar-Löhle-Weg");
        break;
    }
    case 182521:
    {
        returnValue = F("Kaspar-Manz-Str.");
        break;
    }
    case 182522:
    {
        returnValue = F("Kaspar-Mattern-Str.");
        break;
    }
    case 182523:
    {
        returnValue = F("Kaspar-Meck-Str.");
        break;
    }
    case 182524:
    {
        returnValue = F("Kaspar-Mohr-Str.");
        break;
    }
    case 182525:
    {
        returnValue = F("Kaspar-Ohm-Str.");
        break;
    }
    case 182526:
    {
        returnValue = F("Kaspar-Peuker-Str.");
        break;
    }
    case 182527:
    {
        returnValue = F("Kaspar-Reiter-Weg");
        break;
    }
    case 182528:
    {
        returnValue = F("Kaspar-Röckelein-Platz");
        break;
    }
    case 182529:
    {
        returnValue = F("Kaspar-Röckelein-Str.");
        break;
    }
    case 182530:
    {
        returnValue = F("Kaspar-Schisler-Weg");
        break;
    }
    case 182531:
    {
        returnValue = F("Kaspar-Schleibner-Str.");
        break;
    }
    case 182532:
    {
        returnValue = F("Kaspar-Schmitz-Str.");
        break;
    }
    case 182533:
    {
        returnValue = F("Kaspar-Schnetter-Str.");
        break;
    }
    case 182534:
    {
        returnValue = F("Kaspar-Schulte-Weg");
        break;
    }
    case 182535:
    {
        returnValue = F("Kaspar-Schulz-Str.");
        break;
    }
    case 182536:
    {
        returnValue = F("Kaspar-Schwan-Str.");
        break;
    }
    case 182537:
    {
        returnValue = F("Kaspar-Sesslen-Weg");
        break;
    }
    case 182538:
    {
        returnValue = F("Kaspar-Stüblin-Weg");
        break;
    }
    case 182539:
    {
        returnValue = F("Kaspar-Vogt-Str.");
        break;
    }
    case 182540:
    {
        returnValue = F("Kaspar-Volpert-Str.");
        break;
    }
    case 182541:
    {
        returnValue = F("Kaspar-Weber-Str.");
        break;
    }
    case 182542:
    {
        returnValue = F("Kaspar-Zeuß-Str.");
        break;
    }
    case 182543:
    {
        returnValue = F("Kaspar-Zeuß-Weg");
        break;
    }
    case 182544:
    {
        returnValue = F("Kaspar-Zopes-Str.");
        break;
    }
    case 182545:
    {
        returnValue = F("Kaspar-von-Schmid-Str.");
        break;
    }
    case 182546:
    {
        returnValue = F("Kaspar-von-Westernach-Str.");
        break;
    }
    case 182547:
    {
        returnValue = F("Kaspar-von-Zumbusch-Str.");
        break;
    }
    case 182548:
    {
        returnValue = F("Kasparsbaumweg");
        break;
    }
    case 182549:
    {
        returnValue = F("Kasparshole");
        break;
    }
    case 182550:
    {
        returnValue = F("Kasparshölzleweg");
        break;
    }
    case 182551:
    {
        returnValue = F("Kasparstr.");
        break;
    }
    case 182552:
    {
        returnValue = F("Kasparswaldstr.");
        break;
    }
    case 182553:
    {
        returnValue = F("Kasparsweg");
        break;
    }
    case 182554:
    {
        returnValue = F("Kasparsweide");
        break;
    }
    case 182555:
    {
        returnValue = F("Kasparweg");
        break;
    }
    case 182556:
    {
        returnValue = F("Kaspeldamm");
        break;
    }
    case 182557:
    {
        returnValue = F("Kaspelhauk");
        break;
    }
    case 182558:
    {
        returnValue = F("Kaspeltshub");
        break;
    }
    case 182559:
    {
        returnValue = F("Kasper Baumann Steg");
        break;
    }
    case 182560:
    {
        returnValue = F("Kasper-Kögler-Str.");
        break;
    }
    case 182561:
    {
        returnValue = F("Kasper-Möhme-Weg");
        break;
    }
    case 182562:
    {
        returnValue = F("Kasper-Ohm-Weg");
        break;
    }
    case 182563:
    {
        returnValue = F("Kasper-Schisler-Gasse");
        break;
    }
    case 182564:
    {
        returnValue = F("Kasperdobelweg");
        break;
    }
    case 182565:
    {
        returnValue = F("Kasperlesgäßle");
        break;
    }
    case 182566:
    {
        returnValue = F("Kaspers Diek");
        break;
    }
    case 182567:
    {
        returnValue = F("Kaspersbühlweg");
        break;
    }
    case 182568:
    {
        returnValue = F("Kaspersgängele");
        break;
    }
    case 182569:
    {
        returnValue = F("Kaspershäuschen");
        break;
    }
    case 182570:
    {
        returnValue = F("Kasperstr.");
        break;
    }
    case 182571:
    {
        returnValue = F("Kaspersweg");
        break;
    }
    case 182572:
    {
        returnValue = F("Kaspul");
        break;
    }
    case 182573:
    {
        returnValue = F("Kassacker");
        break;
    }
    case 182574:
    {
        returnValue = F("Kassauer Str.");
        break;
    }
    case 182575:
    {
        returnValue = F("Kassauer Weg");
        break;
    }
    case 182576:
    {
        returnValue = F("Kassaweg");
        break;
    }
    case 182577:
    {
        returnValue = F("Kassbeerentwiete");
        break;
    }
    case 182578:
    {
        returnValue = F("Kassberg");
        break;
    }
    case 182579:
    {
        returnValue = F("Kassburg");
        break;
    }
    case 182580:
    {
        returnValue = F("Kassebohm-Kiesgrube");
        break;
    }
    case 182581:
    {
        returnValue = F("Kassebohmer Weg");
        break;
    }
    case 182582:
    {
        returnValue = F("Kassebrede");
        break;
    }
    case 182583:
    {
        returnValue = F("Kasselbachstr.");
        break;
    }
    case 182584:
    {
        returnValue = F("Kasselberg");
        break;
    }
    case 182585:
    {
        returnValue = F("Kasselbergweg");
        break;
    }
    case 182586:
    {
        returnValue = F("Kasselbreite");
        break;
    }
    case 182587:
    {
        returnValue = F("Kasselburger Weg");
        break;
    }
    case 182588:
    {
        returnValue = F("Kasseler Furt");
        break;
    }
    case 182589:
    {
        returnValue = F("Kasseler Hof");
        break;
    }
    case 182590:
    {
        returnValue = F("Kasseler Landstr.");
        break;
    }
    case 182591:
    {
        returnValue = F("Kasseler Ley");
        break;
    }
    case 182592:
    {
        returnValue = F("Kasseler Mauer");
        break;
    }
    case 182593:
    {
        returnValue = F("Kasseler Pfad");
        break;
    }
    case 182594:
    {
        returnValue = F("Kasseler Schlagd");
        break;
    }
    case 182595:
    {
        returnValue = F("Kasseler Schneise");
        break;
    }
    case 182596:
    {
        returnValue = F("Kasseler Str.");
        break;
    }
    case 182597:
    {
        returnValue = F("Kasseler Tor");
        break;
    }
    case 182598:
    {
        returnValue = F("Kasseler Weg");
        break;
    }
    case 182599:
    {
        returnValue = F("Kasseler-Tor-Brücke");
        break;
    }
    case 182600:
    {
        returnValue = F("Kasselfeld");
        break;
    }
    case 182601:
    {
        returnValue = F("Kasselgrund");
        break;
    }
    case 182602:
    {
        returnValue = F("Kasselsberg");
        break;
    }
    case 182603:
    {
        returnValue = F("Kasselweg");
        break;
    }
    case 182604:
    {
        returnValue = F("Kassemühle");
        break;
    }
    case 182605:
    {
        returnValue = F("Kassenberg");
        break;
    }
    case 182606:
    {
        returnValue = F("Kassenbergbrücke");
        break;
    }
    case 182607:
    {
        returnValue = F("Kassenberger Str.");
        break;
    }
    case 182608:
    {
        returnValue = F("Kassenstr.");
        break;
    }
    case 182609:
    {
        returnValue = F("Kassernstr.");
        break;
    }
    case 182610:
    {
        returnValue = F("Kassianspassage");
        break;
    }
    case 182611:
    {
        returnValue = F("Kassieck");
        break;
    }
    case 182612:
    {
        returnValue = F("Kassiecker Str.");
        break;
    }
    case 182613:
    {
        returnValue = F("Kassiner Weg");
        break;
    }
    case 182614:
    {
        returnValue = F("Kassings Kamp");
        break;
    }
    case 182615:
    {
        returnValue = F("Kassler Tor 21, 23, 25");
        break;
    }
    case 182616:
    {
        returnValue = F("Kassmöllstr.");
        break;
    }
    case 182617:
    {
        returnValue = F("Kasspfuhlweg");
        break;
    }
    case 182618:
    {
        returnValue = F("Kastahner Weg");
        break;
    }
    case 182619:
    {
        returnValue = F("Kastanien 850 Jahre Elmshorn");
        break;
    }
    case 182620:
    {
        returnValue = F("Kastanien-Allee");
        break;
    }
    case 182621:
    {
        returnValue = F("Kastanienaalle park");
        break;
    }
    case 182622:
    {
        returnValue = F("Kastanienalle");
        break;
    }
    case 182623:
    {
        returnValue = F("Kastanienallee");
        break;
    }
    case 182624:
    {
        returnValue = F("Kastanienallee (oberes Ende)");
        break;
    }
    case 182625:
    {
        returnValue = F("Kastanienberg");
        break;
    }
    case 182626:
    {
        returnValue = F("Kastanienbogen");
        break;
    }
    case 182627:
    {
        returnValue = F("Kastanienbusch");
        break;
    }
    case 182628:
    {
        returnValue = F("Kastanienbühnweg");
        break;
    }
    case 182629:
    {
        returnValue = F("Kastanieneck");
        break;
    }
    case 182630:
    {
        returnValue = F("Kastaniengang");
        break;
    }
    case 182631:
    {
        returnValue = F("Kastaniengasse");
        break;
    }
    case 182632:
    {
        returnValue = F("Kastaniengrund");
        break;
    }
    case 182633:
    {
        returnValue = F("Kastanienhag");
        break;
    }
    case 182634:
    {
        returnValue = F("Kastanienhain");
        break;
    }
    case 182635:
    {
        returnValue = F("Kastanienhalde");
        break;
    }
    case 182636:
    {
        returnValue = F("Kastanienhof");
        break;
    }
    case 182637:
    {
        returnValue = F("Kastanienhöhe");
        break;
    }
    case 182638:
    {
        returnValue = F("Kastanienpark");
        break;
    }
    case 182639:
    {
        returnValue = F("Kastanienplatz");
        break;
    }
    case 182640:
    {
        returnValue = F("Kastanienpromenade");
        break;
    }
    case 182641:
    {
        returnValue = F("Kastanienring");
        break;
    }
    case 182642:
    {
        returnValue = F("Kastanienrondell");
        break;
    }
    case 182643:
    {
        returnValue = F("Kastaniensteg");
        break;
    }
    case 182644:
    {
        returnValue = F("Kastaniensteig");
        break;
    }
    case 182645:
    {
        returnValue = F("Kastanienstr.");
        break;
    }
    case 182646:
    {
        returnValue = F("Kastanienstrasse");
        break;
    }
    case 182647:
    {
        returnValue = F("Kastanienwall");
        break;
    }
    case 182648:
    {
        returnValue = F("Kastanienweg");
        break;
    }
    case 182649:
    {
        returnValue = F("Kastanienwg");
        break;
    }
    case 182650:
    {
        returnValue = F("Kastanienwiese");
        break;
    }
    case 182651:
    {
        returnValue = F("Kastanienwinkel");
        break;
    }
    case 182652:
    {
        returnValue = F("Kastavener Str.");
        break;
    }
    case 182653:
    {
        returnValue = F("Kastbrücke");
        break;
    }
    case 182654:
    {
        returnValue = F("Kasteelenbend");
        break;
    }
    case 182655:
    {
        returnValue = F("Kastelberg");
        break;
    }
    case 182656:
    {
        returnValue = F("Kastelbergstr.");
        break;
    }
    case 182657:
    {
        returnValue = F("Kastelbergweg");
        break;
    }
    case 182658:
    {
        returnValue = F("Kasteler Museumsufer");
        break;
    }
    case 182659:
    {
        returnValue = F("Kasteler Str.");
        break;
    }
    case 182660:
    {
        returnValue = F("Kasteler Weg");
        break;
    }
    case 182661:
    {
        returnValue = F("Kastell");
        break;
    }
    case 182662:
    {
        returnValue = F("Kastellauner Str.");
        break;
    }
    case 182663:
    {
        returnValue = F("Kastellauner Weg");
        break;
    }
    case 182664:
    {
        returnValue = F("Kastellgasse");
        break;
    }
    case 182665:
    {
        returnValue = F("Kastellhof");
        break;
    }
    case 182666:
    {
        returnValue = F("Kastellsiedlung");
        break;
    }
    case 182667:
    {
        returnValue = F("Kastellstr.");
        break;
    }
    case 182668:
    {
        returnValue = F("Kastellweg");
        break;
    }
    case 182669:
    {
        returnValue = F("Kastelruhweg");
        break;
    }
    case 182670:
    {
        returnValue = F("Kastelsteinweg");
        break;
    }
    case 182671:
    {
        returnValue = F("Kastelwaldweg");
        break;
    }
    case 182672:
    {
        returnValue = F("Kastelweg");
        break;
    }
    case 182673:
    {
        returnValue = F("Kastemmühlwehr");
        break;
    }
    case 182674:
    {
        returnValue = F("Kasten");
        break;
    }
    case 182675:
    {
        returnValue = F("Kastenackerweg");
        break;
    }
    case 182676:
    {
        returnValue = F("Kastenalsgasse");
        break;
    }
    case 182677:
    {
        returnValue = F("Kastenauer Str.");
        break;
    }
    case 182678:
    {
        returnValue = F("Kastenbeinbuche");
        break;
    }
    case 182679:
    {
        returnValue = F("Kastenberg");
        break;
    }
    case 182680:
    {
        returnValue = F("Kastenberger Str.");
        break;
    }
    case 182681:
    {
        returnValue = F("Kastenborn");
        break;
    }
    case 182682:
    {
        returnValue = F("Kastenbuckweg");
        break;
    }
    case 182683:
    {
        returnValue = F("Kastendamm");
        break;
    }
    case 182684:
    {
        returnValue = F("Kastendiek");
        break;
    }
    case 182685:
    {
        returnValue = F("Kasteneckstr.");
        break;
    }
    case 182686:
    {
        returnValue = F("Kastenfeldstr.");
        break;
    }
    case 182687:
    {
        returnValue = F("Kastenfeldweg");
        break;
    }
    case 182688:
    {
        returnValue = F("Kastengasse");
        break;
    }
    case 182689:
    {
        returnValue = F("Kastenhausstr.");
        break;
    }
    case 182690:
    {
        returnValue = F("Kastenhof");
        break;
    }
    case 182691:
    {
        returnValue = F("Kastenholzer Burgstr.");
        break;
    }
    case 182692:
    {
        returnValue = F("Kastenholzmitterweg");
        break;
    }
    case 182693:
    {
        returnValue = F("Kastenholzstr.");
        break;
    }
    case 182694:
    {
        returnValue = F("Kastenklingeweg");
        break;
    }
    case 182695:
    {
        returnValue = F("Kastenkurve");
        break;
    }
    case 182696:
    {
        returnValue = F("Kastenmaierstr.");
        break;
    }
    case 182697:
    {
        returnValue = F("Kastenmayrstr.");
        break;
    }
    case 182698:
    {
        returnValue = F("Kastenmühlenweg");
        break;
    }
    case 182699:
    {
        returnValue = F("Kastenmühlwehr");
        break;
    }
    case 182700:
    {
        returnValue = F("Kastenreuth");
        break;
    }
    case 182701:
    {
        returnValue = F("Kastenreuther Str.");
        break;
    }
    case 182702:
    {
        returnValue = F("Kastens Rehre");
        break;
    }
    case 182703:
    {
        returnValue = F("Kastenseeon");
        break;
    }
    case 182704:
    {
        returnValue = F("Kastenseestr.");
        break;
    }
    case 182705:
    {
        returnValue = F("Kastensiekstr.");
        break;
    }
    case 182706:
    {
        returnValue = F("Kastensteinweg");
        break;
    }
    case 182707:
    {
        returnValue = F("Kastenstr.");
        break;
    }
    case 182708:
    {
        returnValue = F("Kastensweg");
        break;
    }
    case 182709:
    {
        returnValue = F("Kastental");
        break;
    }
    case 182710:
    {
        returnValue = F("Kastentalweg");
        break;
    }
    case 182711:
    {
        returnValue = F("Kastenufer");
        break;
    }
    case 182712:
    {
        returnValue = F("Kastenweg");
        break;
    }
    case 182713:
    {
        returnValue = F("Kastenwies");
        break;
    }
    case 182714:
    {
        returnValue = F("Kastenwinkele");
        break;
    }
    case 182715:
    {
        returnValue = F("Kastenwörthstr.");
        break;
    }
    case 182716:
    {
        returnValue = F("Kastenäckerweg");
        break;
    }
    case 182717:
    {
        returnValue = F("Kasterer Hohlweg");
        break;
    }
    case 182718:
    {
        returnValue = F("Kasterer Str.");
        break;
    }
    case 182719:
    {
        returnValue = F("Kasterlohweg");
        break;
    }
    case 182720:
    {
        returnValue = F("Kasterstr.");
        break;
    }
    case 182721:
    {
        returnValue = F("Kastlanger");
        break;
    }
    case 182722:
    {
        returnValue = F("Kastler Str.");
        break;
    }
    case 182723:
    {
        returnValue = F("Kastler Weg");
        break;
    }
    case 182724:
    {
        returnValue = F("Kastlgaßl");
        break;
    }
    case 182725:
    {
        returnValue = F("Kastlmühle");
        break;
    }
    case 182726:
    {
        returnValue = F("Kastlmühler Str.");
        break;
    }
    case 182727:
    {
        returnValue = F("Kastlmühlweg");
        break;
    }
    case 182728:
    {
        returnValue = F("Kastlstr.");
        break;
    }
    case 182729:
    {
        returnValue = F("Kastlweg");
        break;
    }
    case 182730:
    {
        returnValue = F("Kastner Str.");
        break;
    }
    case 182731:
    {
        returnValue = F("Kastnerhof");
        break;
    }
    case 182732:
    {
        returnValue = F("Kastnerhofstr.");
        break;
    }
    case 182733:
    {
        returnValue = F("Kastnerplatz");
        break;
    }
    case 182734:
    {
        returnValue = F("Kastnerstr.");
        break;
    }
    case 182735:
    {
        returnValue = F("Kastnerweg");
        break;
    }
    case 182736:
    {
        returnValue = F("Kastningweg");
        break;
    }
    case 182737:
    {
        returnValue = F("Kastor");
        break;
    }
    case 182738:
    {
        returnValue = F("Kastorbachstr.");
        break;
    }
    case 182739:
    {
        returnValue = F("Kastorfer Dorfstr.");
        break;
    }
    case 182740:
    {
        returnValue = F("Kastorfer Str.");
        break;
    }
    case 182741:
    {
        returnValue = F("Kastorfer Weg");
        break;
    }
    case 182742:
    {
        returnValue = F("Kastorhof");
        break;
    }
    case 182743:
    {
        returnValue = F("Kastorpfaffenstr.");
        break;
    }
    case 182744:
    {
        returnValue = F("Kastorpstr.");
        break;
    }
    case 182745:
    {
        returnValue = F("Kastorstr.");
        break;
    }
    case 182746:
    {
        returnValue = F("Kastulus-Graßl-Str.");
        break;
    }
    case 182747:
    {
        returnValue = F("Kastulusweg");
        break;
    }
    case 182748:
    {
        returnValue = F("Kastweg");
        break;
    }
    case 182749:
    {
        returnValue = F("Kaswai");
        break;
    }
    case 182750:
    {
        returnValue = F("Katamaranweg");
        break;
    }
    case 182751:
    {
        returnValue = F("Katanebrücke");
        break;
    }
    case 182752:
    {
        returnValue = F("Katastrophenstr.");
        break;
    }
    case 182753:
    {
        returnValue = F("Katastrophenweg");
        break;
    }
    case 182754:
    {
        returnValue = F("Katdiecksgang");
        break;
    }
    case 182755:
    {
        returnValue = F("Kate Malmsteg");
        break;
    }
    case 182756:
    {
        returnValue = F("Kate-Diehn-Bitt-Weg");
        break;
    }
    case 182757:
    {
        returnValue = F("Kateblöck");
        break;
    }
    case 182758:
    {
        returnValue = F("Katelbogener Str.");
        break;
    }
    case 182759:
    {
        returnValue = F("Katelnburgstr.");
        break;
    }
    case 182760:
    {
        returnValue = F("Kateminer Str.");
        break;
    }
    case 182761:
    {
        returnValue = F("Katen-Moor");
        break;
    }
    case 182762:
    {
        returnValue = F("Katenausbau");
        break;
    }
    case 182763:
    {
        returnValue = F("Katenbarg");
        break;
    }
    case 182764:
    {
        returnValue = F("Katenberg");
        break;
    }
    case 182765:
    {
        returnValue = F("Katenbergsheide");
        break;
    }
    case 182766:
    {
        returnValue = F("Katenbäker Berg");
        break;
    }
    case 182767:
    {
        returnValue = F("Katende");
        break;
    }
    case 182768:
    {
        returnValue = F("Kateneck");
        break;
    }
    case 182769:
    {
        returnValue = F("Katenhof");
        break;
    }
    case 182770:
    {
        returnValue = F("Katenkamp");
        break;
    }
    case 182771:
    {
        returnValue = F("Katenkampstr.");
        break;
    }
    case 182772:
    {
        returnValue = F("Katenklampsgang");
        break;
    }
    case 182773:
    {
        returnValue = F("Katenkoppel");
        break;
    }
    case 182774:
    {
        returnValue = F("Katenland");
        break;
    }
    case 182775:
    {
        returnValue = F("Katenlandsweg");
        break;
    }
    case 182776:
    {
        returnValue = F("Katensen");
        break;
    }
    case 182777:
    {
        returnValue = F("Katenser Hauptstr.");
        break;
    }
    case 182778:
    {
        returnValue = F("Katenser Weg");
        break;
    }
    case 182779:
    {
        returnValue = F("Katenstr.");
        break;
    }
    case 182780:
    {
        returnValue = F("Katenstück");
        break;
    }
    case 182781:
    {
        returnValue = F("Katenstücken");
        break;
    }
    case 182782:
    {
        returnValue = F("Katenweg");
        break;
    }
    case 182783:
    {
        returnValue = F("Kater");
        break;
    }
    case 182784:
    {
        returnValue = F("Katerallee");
        break;
    }
    case 182785:
    {
        returnValue = F("Katerberg");
        break;
    }
    case 182786:
    {
        returnValue = F("Katerblock");
        break;
    }
    case 182787:
    {
        returnValue = F("Katerburg");
        break;
    }
    case 182788:
    {
        returnValue = F("Katergang");
        break;
    }
    case 182789:
    {
        returnValue = F("Katergasse");
        break;
    }
    case 182790:
    {
        returnValue = F("Katerhook");
        break;
    }
    case 182791:
    {
        returnValue = F("Katerhorstweg");
        break;
    }
    case 182792:
    {
        returnValue = F("Katerhörn");
        break;
    }
    case 182793:
    {
        returnValue = F("Katerich");
        break;
    }
    case 182794:
    {
        returnValue = F("Kateriniweg");
        break;
    }
    case 182795:
    {
        returnValue = F("Katerkamp");
        break;
    }
    case 182796:
    {
        returnValue = F("Katerkampweg");
        break;
    }
    case 182797:
    {
        returnValue = F("Katerlocher Weg");
        break;
    }
    case 182798:
    {
        returnValue = F("Katerlöh");
        break;
    }
    case 182799:
    {
        returnValue = F("Katerlöher Weg");
        break;
    }
    case 182800:
    {
        returnValue = F("Katermahl");
        break;
    }
    case 182801:
    {
        returnValue = F("Katermautze");
        break;
    }
    case 182802:
    {
        returnValue = F("Katernberger Schulweg");
        break;
    }
    case 182803:
    {
        returnValue = F("Katernberger Str.");
        break;
    }
    case 182804:
    {
        returnValue = F("Katernstein");
        break;
    }
    case 182805:
    {
        returnValue = F("Katernstr.");
        break;
    }
    case 182806:
    {
        returnValue = F("Katers");
        break;
    }
    case 182807:
    {
        returnValue = F("Katers Feld");
        break;
    }
    case 182808:
    {
        returnValue = F("Katersberg");
        break;
    }
    case 182809:
    {
        returnValue = F("Katershöhe");
        break;
    }
    case 182810:
    {
        returnValue = F("Katersiepen");
        break;
    }
    case 182811:
    {
        returnValue = F("Katersteg");
        break;
    }
    case 182812:
    {
        returnValue = F("Katersteig");
        break;
    }
    case 182813:
    {
        returnValue = F("Katerstieg");
        break;
    }
    case 182814:
    {
        returnValue = F("Katersweg");
        break;
    }
    case 182815:
    {
        returnValue = F("Katerweg");
        break;
    }
    case 182816:
    {
        returnValue = F("Katewitzer Weg");
        break;
    }
    case 182817:
    {
        returnValue = F("Kath. Pfarrkirche St. Walburga");
        break;
    }
    case 182818:
    {
        returnValue = F("Kathagen");
        break;
    }
    case 182819:
    {
        returnValue = F("Kathagenstr.");
        break;
    }
    case 182820:
    {
        returnValue = F("Kathagenweg");
        break;
    }
    case 182821:
    {
        returnValue = F("Kathal");
        break;
    }
    case 182822:
    {
        returnValue = F("Kathanenberg");
        break;
    }
    case 182823:
    {
        returnValue = F("Katharied");
        break;
    }
    case 182824:
    {
        returnValue = F("Katharienenhof");
        break;
    }
    case 182825:
    {
        returnValue = F("Katharienweg");
        break;
    }
    case 182826:
    {
        returnValue = F("Katharina Kepler Str.");
        break;
    }
    case 182827:
    {
        returnValue = F("Katharina-Augenstein-Str.");
        break;
    }
    case 182828:
    {
        returnValue = F("Katharina-Bamberg-Weg");
        break;
    }
    case 182829:
    {
        returnValue = F("Katharina-Becker-Weg");
        break;
    }
    case 182830:
    {
        returnValue = F("Katharina-Belgica-Str.");
        break;
    }
    case 182831:
    {
        returnValue = F("Katharina-Braeckeler-Str.");
        break;
    }
    case 182832:
    {
        returnValue = F("Katharina-Busch-Str.");
        break;
    }
    case 182833:
    {
        returnValue = F("Katharina-Busch-Weg");
        break;
    }
    case 182834:
    {
        returnValue = F("Katharina-Diez-Str.");
        break;
    }
    case 182835:
    {
        returnValue = F("Katharina-Eberhard-Str.");
        break;
    }
    case 182836:
    {
        returnValue = F("Katharina-Eitel-Weg");
        break;
    }
    case 182837:
    {
        returnValue = F("Katharina-Esser-Str.");
        break;
    }
    case 182838:
    {
        returnValue = F("Katharina-Fischer-Platz");
        break;
    }
    case 182839:
    {
        returnValue = F("Katharina-Friederich-Str.");
        break;
    }
    case 182840:
    {
        returnValue = F("Katharina-Fröhlingsdorf-Str.");
        break;
    }
    case 182841:
    {
        returnValue = F("Katharina-Geisler-Str.");
        break;
    }
    case 182842:
    {
        returnValue = F("Katharina-Güschen-Weg");
        break;
    }
    case 182843:
    {
        returnValue = F("Katharina-Hampersdorfer-Str.");
        break;
    }
    case 182844:
    {
        returnValue = F("Katharina-Heinroth-Str.");
        break;
    }
    case 182845:
    {
        returnValue = F("Katharina-Kasper-Str.");
        break;
    }
    case 182846:
    {
        returnValue = F("Katharina-Kemmler-Str.");
        break;
    }
    case 182847:
    {
        returnValue = F("Katharina-Kepler-Str.");
        break;
    }
    case 182848:
    {
        returnValue = F("Katharina-Kraemer-Weg");
        break;
    }
    case 182849:
    {
        returnValue = F("Katharina-Loth-Str.");
        break;
    }
    case 182850:
    {
        returnValue = F("Katharina-Mair-Str.");
        break;
    }
    case 182851:
    {
        returnValue = F("Katharina-Mauer-Str.");
        break;
    }
    case 182852:
    {
        returnValue = F("Katharina-Neufang-Str.");
        break;
    }
    case 182853:
    {
        returnValue = F("Katharina-Paulus-Str.");
        break;
    }
    case 182854:
    {
        returnValue = F("Katharina-Peters-Str.");
        break;
    }
    case 182855:
    {
        returnValue = F("Katharina-Pfahler-Str.");
        break;
    }
    case 182856:
    {
        returnValue = F("Katharina-Ruhe-Weg");
        break;
    }
    case 182857:
    {
        returnValue = F("Katharina-Rähr-Str.");
        break;
    }
    case 182858:
    {
        returnValue = F("Katharina-Schackey-Str.");
        break;
    }
    case 182859:
    {
        returnValue = F("Katharina-Schmitz-Str.");
        break;
    }
    case 182860:
    {
        returnValue = F("Katharina-Staritz-Str.");
        break;
    }
    case 182861:
    {
        returnValue = F("Katharina-Staritz-Weg");
        break;
    }
    case 182862:
    {
        returnValue = F("Katharina-Underberg-Str.");
        break;
    }
    case 182863:
    {
        returnValue = F("Katharina-Zimmermann-Weg");
        break;
    }
    case 182864:
    {
        returnValue = F("Katharina-Zinnicken-Str.");
        break;
    }
    case 182865:
    {
        returnValue = F("Katharina-und-Wilhelm-Huber-Weg");
        break;
    }
    case 182866:
    {
        returnValue = F("Katharina-von Bora-Str.");
        break;
    }
    case 182867:
    {
        returnValue = F("Katharina-von-Bora-Str.");
        break;
    }
    case 182868:
    {
        returnValue = F("Katharina-von-Bora-Weg");
        break;
    }
    case 182869:
    {
        returnValue = F("Katharina-von-Künßberg-Platz");
        break;
    }
    case 182870:
    {
        returnValue = F("Katharina-von-Siena-Str.");
        break;
    }
    case 182871:
    {
        returnValue = F("Katharinaberg");
        break;
    }
    case 182872:
    {
        returnValue = F("Katharinaberger Weg");
        break;
    }
    case 182873:
    {
        returnValue = F("Katharinastr.");
        break;
    }
    case 182874:
    {
        returnValue = F("Katharinaweg");
        break;
    }
    case 182875:
    {
        returnValue = F("Katharinazell");
        break;
    }
    case 182876:
    {
        returnValue = F("Katharine-Ingwersen-Weg");
        break;
    }
    case 182877:
    {
        returnValue = F("Katharinenacker");
        break;
    }
    case 182878:
    {
        returnValue = F("Katharinenackerweg");
        break;
    }
    case 182879:
    {
        returnValue = F("Katharinenbach");
        break;
    }
    case 182880:
    {
        returnValue = F("Katharinenbachstr.");
        break;
    }
    case 182881:
    {
        returnValue = F("Katharinenberg");
        break;
    }
    case 182882:
    {
        returnValue = F("Katharinenberger Str.");
        break;
    }
    case 182883:
    {
        returnValue = F("Katharinenblick");
        break;
    }
    case 182884:
    {
        returnValue = F("Katharinenborn");
        break;
    }
    case 182885:
    {
        returnValue = F("Katharinenbrücke");
        break;
    }
    case 182886:
    {
        returnValue = F("Katharinendamm");
        break;
    }
    case 182887:
    {
        returnValue = F("Katharinendorfstr.");
        break;
    }
    case 182888:
    {
        returnValue = F("Katharinenfalltorweg");
        break;
    }
    case 182889:
    {
        returnValue = F("Katharinenfriedhof (Garnisonsfriedhof)");
        break;
    }
    case 182890:
    {
        returnValue = F("Katharinenfriedhofstr.");
        break;
    }
    case 182891:
    {
        returnValue = F("Katharinengasse");
        break;
    }
    case 182892:
    {
        returnValue = F("Katharinengraben");
        break;
    }
    case 182893:
    {
        returnValue = F("Katharinengäßchen");
        break;
    }
    case 182894:
    {
        returnValue = F("Katharinenheerder Landstr.");
        break;
    }
    case 182895:
    {
        returnValue = F("Katharinenheimstr.");
        break;
    }
    case 182896:
    {
        returnValue = F("Katharinenhof");
        break;
    }
    case 182897:
    {
        returnValue = F("Katharinenholzstr.");
        break;
    }
    case 182898:
    {
        returnValue = F("Katharinenhöhe");
        break;
    }
    case 182899:
    {
        returnValue = F("Katharinenkammerweg");
        break;
    }
    case 182900:
    {
        returnValue = F("Katharinenkirchhof");
        break;
    }
    case 182901:
    {
        returnValue = F("Katharinenkirchplatz");
        break;
    }
    case 182902:
    {
        returnValue = F("Katharinenlohe");
        break;
    }
    case 182903:
    {
        returnValue = F("Katharinenpfad");
        break;
    }
    case 182904:
    {
        returnValue = F("Katharinenplatz");
        break;
    }
    case 182905:
    {
        returnValue = F("Katharinenrieth");
        break;
    }
    case 182906:
    {
        returnValue = F("Katharinenring");
        break;
    }
    case 182907:
    {
        returnValue = F("Katharinenstaffel");
        break;
    }
    case 182908:
    {
        returnValue = F("Katharinenstieg");
        break;
    }
    case 182909:
    {
        returnValue = F("Katharinenstr.");
        break;
    }
    case 182910:
    {
        returnValue = F("Katharinental");
        break;
    }
    case 182911:
    {
        returnValue = F("Katharinentunnel");
        break;
    }
    case 182912:
    {
        returnValue = F("Katharinenufer");
        break;
    }
    case 182913:
    {
        returnValue = F("Katharinenweg");
        break;
    }
    case 182914:
    {
        returnValue = F("Kathekerstr.");
        break;
    }
    case 182915:
    {
        returnValue = F("Kathekerweg");
        break;
    }
    case 182916:
    {
        returnValue = F("Kathellmer");
        break;
    }
    case 182917:
    {
        returnValue = F("Kathen");
        break;
    }
    case 182918:
    {
        returnValue = F("Kathendorfer Str.");
        break;
    }
    case 182919:
    {
        returnValue = F("Kathener Dorfstr.");
        break;
    }
    case 182920:
    {
        returnValue = F("Kathener Str.");
        break;
    }
    case 182921:
    {
        returnValue = F("Kathener Weg");
        break;
    }
    case 182922:
    {
        returnValue = F("Kathenkamp");
        break;
    }
    case 182923:
    {
        returnValue = F("Kathenkoppel");
        break;
    }
    case 182924:
    {
        returnValue = F("Kathenreihe");
        break;
    }
    case 182925:
    {
        returnValue = F("Kathenstr.");
        break;
    }
    case 182926:
    {
        returnValue = F("Kathenweg");
        break;
    }
    case 182927:
    {
        returnValue = F("Kathenwiese");
        break;
    }
    case 182928:
    {
        returnValue = F("Katherine-Allfrey-Str.");
        break;
    }
    case 182929:
    {
        returnValue = F("Katherine-Mansfield-Platz");
        break;
    }
    case 182930:
    {
        returnValue = F("Katherl-Berg-Str.");
        break;
    }
    case 182931:
    {
        returnValue = F("Katherweg");
        break;
    }
    case 182932:
    {
        returnValue = F("Kathfelder Mühle");
        break;
    }
    case 182933:
    {
        returnValue = F("Kathi-Baur-Platz");
        break;
    }
    case 182934:
    {
        returnValue = F("Kathi-Baur-Str.");
        break;
    }
    case 182935:
    {
        returnValue = F("Kathi-Kobus-Steig");
        break;
    }
    case 182936:
    {
        returnValue = F("Kathkamp");
        break;
    }
    case 182937:
    {
        returnValue = F("Kathlower Chaussee");
        break;
    }
    case 182938:
    {
        returnValue = F("Kathlower Dorfstr.");
        break;
    }
    case 182939:
    {
        returnValue = F("Kathlower Weg");
        break;
    }
    case 182940:
    {
        returnValue = F("Kathof");
        break;
    }
    case 182941:
    {
        returnValue = F("Katholisch-Kirch-Str.");
        break;
    }
    case 182942:
    {
        returnValue = F("Katholische Anlagen");
        break;
    }
    case 182943:
    {
        returnValue = F("Katholische Kirchgasse");
        break;
    }
    case 182944:
    {
        returnValue = F("Katholischer Berg");
        break;
    }
    case 182945:
    {
        returnValue = F("Katholischer Gemeindegarten");
        break;
    }
    case 182946:
    {
        returnValue = F("Katholischer Kirchenplatz");
        break;
    }
    case 182947:
    {
        returnValue = F("Katholisches Gässchen");
        break;
    }
    case 182948:
    {
        returnValue = F("Kathrainerstr.");
        break;
    }
    case 182949:
    {
        returnValue = F("Kathreinenstr.");
        break;
    }
    case 182950:
    {
        returnValue = F("Kathreinerstr.");
        break;
    }
    case 182951:
    {
        returnValue = F("Kathreinfelder Str.");
        break;
    }
    case 182952:
    {
        returnValue = F("Kathrinches Weg");
        break;
    }
    case 182953:
    {
        returnValue = F("Kathrine-Faust-Str.");
        break;
    }
    case 182954:
    {
        returnValue = F("Kathrinenplatz");
        break;
    }
    case 182955:
    {
        returnValue = F("Kathrinenstr.");
        break;
    }
    case 182956:
    {
        returnValue = F("Kathrinhagener Str.");
        break;
    }
    case 182957:
    {
        returnValue = F("Kathstr.");
        break;
    }
    case 182958:
    {
        returnValue = F("Kathuser Str.");
        break;
    }
    case 182959:
    {
        returnValue = F("Kathweg");
        break;
    }
    case 182960:
    {
        returnValue = F("Kathy");
        break;
    }
    case 182961:
    {
        returnValue = F("Kathy-Beys-Str.");
        break;
    }
    case 182962:
    {
        returnValue = F("Katinger Landstr.");
        break;
    }
    case 182963:
    {
        returnValue = F("Katinger Watt");
        break;
    }
    case 182964:
    {
        returnValue = F("Katingsiel");
        break;
    }
    case 182965:
    {
        returnValue = F("Katja-Niederkirchner-Str.");
        break;
    }
    case 182966:
    {
        returnValue = F("Katjaschacht");
        break;
    }
    case 182967:
    {
        returnValue = F("Katjegang");
        break;
    }
    case 182968:
    {
        returnValue = F("Katrepel");
        break;
    }
    case 182969:
    {
        returnValue = F("Katrepeler Landstr.");
        break;
    }
    case 182970:
    {
        returnValue = F("Katrineholmstr.");
        break;
    }
    case 182971:
    {
        returnValue = F("Katroper Weg");
        break;
    }
    case 182972:
    {
        returnValue = F("Katscheckerweg");
        break;
    }
    case 182973:
    {
        returnValue = F("Katschenbruchstr.");
        break;
    }
    case 182974:
    {
        returnValue = F("Katschenreuth");
        break;
    }
    case 182975:
    {
        returnValue = F("Katscherstr.");
        break;
    }
    case 182976:
    {
        returnValue = F("Katschhof");
        break;
    }
    case 182977:
    {
        returnValue = F("Katsiek");
        break;
    }
    case 182978:
    {
        returnValue = F("Katstelle");
        break;
    }
    case 182979:
    {
        returnValue = F("Katt'sche Str.");
        break;
    }
    case 182980:
    {
        returnValue = F("Katt-un-Mus-Weg");
        break;
    }
    case 182981:
    {
        returnValue = F("Kattas");
        break;
    }
    case 182982:
    {
        returnValue = F("Kattberg");
        break;
    }
    case 182983:
    {
        returnValue = F("Kattberger Str.");
        break;
    }
    case 182984:
    {
        returnValue = F("Kattbüttler Weg");
        break;
    }
    case 182985:
    {
        returnValue = F("Katte Kull");
        break;
    }
    case 182986:
    {
        returnValue = F("Kattegang");
        break;
    }
    case 182987:
    {
        returnValue = F("Kattegat");
        break;
    }
    case 182988:
    {
        returnValue = F("Kattegatstr.");
        break;
    }
    case 182989:
    {
        returnValue = F("Kattekerbarg");
        break;
    }
    case 182990:
    {
        returnValue = F("Kattekerpadd");
        break;
    }
    case 182991:
    {
        returnValue = F("Kattenbacher Str.");
        break;
    }
    case 182992:
    {
        returnValue = F("Kattenbachstr.");
        break;
    }
    case 182993:
    {
        returnValue = F("Kattenbachweg");
        break;
    }
    case 182994:
    {
        returnValue = F("Kattenbalken");
        break;
    }
    case 182995:
    {
        returnValue = F("Kattenbarg");
        break;
    }
    case 182996:
    {
        returnValue = F("Kattenbeck");
        break;
    }
    case 182997:
    {
        returnValue = F("Kattenbeek");
        break;
    }
    case 182998:
    {
        returnValue = F("Kattenbek");
        break;
    }
    case 182999:
    {
        returnValue = F("Kattenberg");
        break;
    }
    case 183000:
    {
        returnValue = F("Kattenberger Schulweg");
        break;
    }
    case 183001:
    {
        returnValue = F("Kattenberger Weg");
        break;
    }
    case 183002:
    {
        returnValue = F("Kattenbergweg");
        break;
    }
    case 183003:
    {
        returnValue = F("Kattenbicke");
        break;
    }
    case 183004:
    {
        returnValue = F("Kattenbleeksweg");
        break;
    }
    case 183005:
    {
        returnValue = F("Kattenblick");
        break;
    }
    case 183006:
    {
        returnValue = F("Kattenborg");
        break;
    }
    case 183007:
    {
        returnValue = F("Kattenborn");
        break;
    }
    case 183008:
    {
        returnValue = F("Kattenbreuken");
        break;
    }
    case 183009:
    {
        returnValue = F("Kattenbrink");
        break;
    }
    case 183010:
    {
        returnValue = F("Kattenbruch");
        break;
    }
    case 183011:
    {
        returnValue = F("Kattenbrunner Weg");
        break;
    }
    case 183012:
    {
        returnValue = F("Kattenbusch");
        break;
    }
    case 183013:
    {
        returnValue = F("Kattenbuscher Weg");
        break;
    }
    case 183014:
    {
        returnValue = F("Kattenbühl");
        break;
    }
    case 183015:
    {
        returnValue = F("Kattendahl");
        break;
    }
    case 183016:
    {
        returnValue = F("Kattendahler Str.");
        break;
    }
    case 183017:
    {
        returnValue = F("Kattendamm");
        break;
    }
    case 183018:
    {
        returnValue = F("Kattendieck");
        break;
    }
    case 183019:
    {
        returnValue = F("Kattendiek");
        break;
    }
    case 183020:
    {
        returnValue = F("Kattendorfer Damm");
        break;
    }
    case 183021:
    {
        returnValue = F("Kattendorp");
        break;
    }
    case 183022:
    {
        returnValue = F("Kattenecke");
        break;
    }
    case 183023:
    {
        returnValue = F("Kattenhagen");
        break;
    }
    case 183024:
    {
        returnValue = F("Kattenhegge");
        break;
    }
    case 183025:
    {
        returnValue = F("Kattenheide");
        break;
    }
    case 183026:
    {
        returnValue = F("Kattenhol");
        break;
    }
    case 183027:
    {
        returnValue = F("Kattenhunder Weg");
        break;
    }
    case 183028:
    {
        returnValue = F("Kattenhöhlener Weg");
        break;
    }
    case 183029:
    {
        returnValue = F("Kattenhügel");
        break;
    }
    case 183030:
    {
        returnValue = F("Kattenjagd");
        break;
    }
    case 183031:
    {
        returnValue = F("Kattenkamp");
        break;
    }
    case 183032:
    {
        returnValue = F("Kattenkolk");
        break;
    }
    case 183033:
    {
        returnValue = F("Kattenkopp");
        break;
    }
    case 183034:
    {
        returnValue = F("Kattenkuhl");
        break;
    }
    case 183035:
    {
        returnValue = F("Kattenkuhle");
        break;
    }
    case 183036:
    {
        returnValue = F("Kattenpad");
        break;
    }
    case 183037:
    {
        returnValue = F("Kattenpatt");
        break;
    }
    case 183038:
    {
        returnValue = F("Kattenpfad");
        break;
    }
    case 183039:
    {
        returnValue = F("Kattenpool");
        break;
    }
    case 183040:
    {
        returnValue = F("Kattenredder");
        break;
    }
    case 183041:
    {
        returnValue = F("Kattenriede");
        break;
    }
    case 183042:
    {
        returnValue = F("Kattenriehe");
        break;
    }
    case 183043:
    {
        returnValue = F("Kattensaal");
        break;
    }
    case 183044:
    {
        returnValue = F("Kattensahl");
        break;
    }
    case 183045:
    {
        returnValue = F("Kattensal");
        break;
    }
    case 183046:
    {
        returnValue = F("Kattenschling");
        break;
    }
    case 183047:
    {
        returnValue = F("Kattensiek");
        break;
    }
    case 183048:
    {
        returnValue = F("Kattensiepen");
        break;
    }
    case 183049:
    {
        returnValue = F("Kattensteen");
        break;
    }
    case 183050:
    {
        returnValue = F("Kattensteert");
        break;
    }
    case 183051:
    {
        returnValue = F("Kattensterdt");
        break;
    }
    case 183052:
    {
        returnValue = F("Kattenstieg");
        break;
    }
    case 183053:
    {
        returnValue = F("Kattenstiert");
        break;
    }
    case 183054:
    {
        returnValue = F("Kattenstr.");
        break;
    }
    case 183055:
    {
        returnValue = F("Kattenstraat");
        break;
    }
    case 183056:
    {
        returnValue = F("Kattenstrother Weg");
        break;
    }
    case 183057:
    {
        returnValue = F("Kattentor");
        break;
    }
    case 183058:
    {
        returnValue = F("Kattentwiete");
        break;
    }
    case 183059:
    {
        returnValue = F("Kattenvenner Str.");
        break;
    }
    case 183060:
    {
        returnValue = F("Kattenwald");
        break;
    }
    case 183061:
    {
        returnValue = F("Kattenweg");
        break;
    }
    case 183062:
    {
        returnValue = F("Kattenwinkel");
        break;
    }
    case 183063:
    {
        returnValue = F("Katterbacher Weg");
        break;
    }
    case 183064:
    {
        returnValue = F("Katterbachstr.");
        break;
    }
    case 183065:
    {
        returnValue = F("Katterforststr.");
        break;
    }
    case 183066:
    {
        returnValue = F("Katterhugh");
        break;
    }
    case 183067:
    {
        returnValue = F("Katterjoch");
        break;
    }
    case 183068:
    {
        returnValue = F("Katternberger Str.");
        break;
    }
    case 183069:
    {
        returnValue = F("Kattersnaundorfer Str.");
        break;
    }
    case 183070:
    {
        returnValue = F("Kattersweg");
        break;
    }
    case 183071:
    {
        returnValue = F("Katteröder Weg");
        break;
    }
    case 183072:
    {
        returnValue = F("Kattestr.");
        break;
    }
    case 183073:
    {
        returnValue = F("Kattewall");
        break;
    }
    case 183074:
    {
        returnValue = F("Katthagen");
        break;
    }
    case 183075:
    {
        returnValue = F("Katthagenstr.");
        break;
    }
    case 183076:
    {
        returnValue = F("Katthof");
        break;
    }
    case 183077:
    {
        returnValue = F("Kattholm");
        break;
    }
    case 183078:
    {
        returnValue = F("Katthorstweg");
        break;
    }
    case 183079:
    {
        returnValue = F("Katthult");
        break;
    }
    case 183080:
    {
        returnValue = F("Katthusen");
        break;
    }
    case 183081:
    {
        returnValue = F("Katthäger Weg");
        break;
    }
    case 183082:
    {
        returnValue = F("Kattien");
        break;
    }
    case 183083:
    {
        returnValue = F("Kattigstr.");
        break;
    }
    case 183084:
    {
        returnValue = F("Kattkamp");
        break;
    }
    case 183085:
    {
        returnValue = F("Kattlachstr.");
        break;
    }
    case 183086:
    {
        returnValue = F("Kattlöcherstr.");
        break;
    }
    case 183087:
    {
        returnValue = F("Kattmannskamp");
        break;
    }
    case 183088:
    {
        returnValue = F("Kattmoor");
        break;
    }
    case 183089:
    {
        returnValue = F("Kattowitzer Platz");
        break;
    }
    case 183090:
    {
        returnValue = F("Kattowitzer Str.");
        break;
    }
    case 183091:
    {
        returnValue = F("Kattowitzer Weg");
        break;
    }
    case 183092:
    {
        returnValue = F("Kattowitzer Zeile");
        break;
    }
    case 183093:
    {
        returnValue = F("Kattreinstr.");
        break;
    }
    case 183094:
    {
        returnValue = F("Kattrepel");
        break;
    }
    case 183095:
    {
        returnValue = F("Kattrepeldiek");
        break;
    }
    case 183096:
    {
        returnValue = F("Kattrepelweg");
        break;
    }
    case 183097:
    {
        returnValue = F("Kattreppel");
        break;
    }
    case 183098:
    {
        returnValue = F("Kattreppeln");
        break;
    }
    case 183099:
    {
        returnValue = F("Kattrott");
        break;
    }
    case 183100:
    {
        returnValue = F("Kattsheider Weg");
        break;
    }
    case 183101:
    {
        returnValue = F("Kattstr.");
        break;
    }
    case 183102:
    {
        returnValue = F("Kattsund");
        break;
    }
    case 183103:
    {
        returnValue = F("Kattunbrook");
        break;
    }
    case 183104:
    {
        returnValue = F("Kattundrucker-Gang");
        break;
    }
    case 183105:
    {
        returnValue = F("Kattunstr.");
        break;
    }
    case 183106:
    {
        returnValue = F("Kattwinkel");
        break;
    }
    case 183107:
    {
        returnValue = F("Kattwinkelstr.");
        break;
    }
    case 183108:
    {
        returnValue = F("Katz'scher Garten");
        break;
    }
    case 183109:
    {
        returnValue = F("Katzagen");
        break;
    }
    case 183110:
    {
        returnValue = F("Katzastr.");
        break;
    }
    case 183111:
    {
        returnValue = F("Katzbach");
        break;
    }
    case 183112:
    {
        returnValue = F("Katzbacher Str.");
        break;
    }
    case 183113:
    {
        returnValue = F("Katzbachgasse");
        break;
    }
    case 183114:
    {
        returnValue = F("Katzbachstr.");
        break;
    }
    case 183115:
    {
        returnValue = F("Katzbachtalweg");
        break;
    }
    case 183116:
    {
        returnValue = F("Katzbachweg");
        break;
    }
    case 183117:
    {
        returnValue = F("Katzbek");
        break;
    }
    case 183118:
    {
        returnValue = F("Katzberg");
        break;
    }
    case 183119:
    {
        returnValue = F("Katzberger Str.");
        break;
    }
    case 183120:
    {
        returnValue = F("Katzberger Weg");
        break;
    }
    case 183121:
    {
        returnValue = F("Katzbergstr.");
        break;
    }
    case 183122:
    {
        returnValue = F("Katzbergweg");
        break;
    }
    case 183123:
    {
        returnValue = F("Katzdorf");
        break;
    }
    case 183124:
    {
        returnValue = F("Katzdorfer Str.");
        break;
    }
    case 183125:
    {
        returnValue = F("Katze");
        break;
    }
    case 183126:
    {
        returnValue = F("Katzelterweg");
        break;
    }
    case 183127:
    {
        returnValue = F("Katzelweg");
        break;
    }
    case 183128:
    {
        returnValue = F("Katzemer Str.");
        break;
    }
    case 183129:
    {
        returnValue = F("Katzemicher Str.");
        break;
    }
    case 183130:
    {
        returnValue = F("Katzen-Weg");
        break;
    }
    case 183131:
    {
        returnValue = F("Katzenauer Str.");
        break;
    }
    case 183132:
    {
        returnValue = F("Katzenbach");
        break;
    }
    case 183133:
    {
        returnValue = F("Katzenbacher Str.");
        break;
    }
    case 183134:
    {
        returnValue = F("Katzenbacher Weg");
        break;
    }
    case 183135:
    {
        returnValue = F("Katzenbacher Wiesenweg");
        break;
    }
    case 183136:
    {
        returnValue = F("Katzenbacherstr.");
        break;
    }
    case 183137:
    {
        returnValue = F("Katzenbachstr.");
        break;
    }
    case 183138:
    {
        returnValue = F("Katzenbachtalweg");
        break;
    }
    case 183139:
    {
        returnValue = F("Katzenbachweg");
        break;
    }
    case 183140:
    {
        returnValue = F("Katzenbauerstr.");
        break;
    }
    case 183141:
    {
        returnValue = F("Katzenberg");
        break;
    }
    case 183142:
    {
        returnValue = F("Katzenbergblick");
        break;
    }
    case 183143:
    {
        returnValue = F("Katzenberger Weg");
        break;
    }
    case 183144:
    {
        returnValue = F("Katzenbergstr.");
        break;
    }
    case 183145:
    {
        returnValue = F("Katzenbergweg");
        break;
    }
    case 183146:
    {
        returnValue = F("Katzenbichl");
        break;
    }
    case 183147:
    {
        returnValue = F("Katzenbolsteigle");
        break;
    }
    case 183148:
    {
        returnValue = F("Katzenborn");
        break;
    }
    case 183149:
    {
        returnValue = F("Katzenbroich");
        break;
    }
    case 183150:
    {
        returnValue = F("Katzenbronnweg");
        break;
    }
    case 183151:
    {
        returnValue = F("Katzenbruch");
        break;
    }
    case 183152:
    {
        returnValue = F("Katzenbrunnen");
        break;
    }
    case 183153:
    {
        returnValue = F("Katzenbrücke");
        break;
    }
    case 183154:
    {
        returnValue = F("Katzenbuckel");
        break;
    }
    case 183155:
    {
        returnValue = F("Katzenbuckelstr.");
        break;
    }
    case 183156:
    {
        returnValue = F("Katzenburg");
        break;
    }
    case 183157:
    {
        returnValue = F("Katzenburger Str.");
        break;
    }
    case 183158:
    {
        returnValue = F("Katzenburgweg");
        break;
    }
    case 183159:
    {
        returnValue = F("Katzenbusch");
        break;
    }
    case 183160:
    {
        returnValue = F("Katzenbären");
        break;
    }
    case 183161:
    {
        returnValue = F("Katzenbügelweg");
        break;
    }
    case 183162:
    {
        returnValue = F("Katzenbühl");
        break;
    }
    case 183163:
    {
        returnValue = F("Katzenbühlweg");
        break;
    }
    case 183164:
    {
        returnValue = F("Katzendorfer Str.");
        break;
    }
    case 183165:
    {
        returnValue = F("Katzendöblebuchsweg");
        break;
    }
    case 183166:
    {
        returnValue = F("Katzenellenbogen");
        break;
    }
    case 183167:
    {
        returnValue = F("Katzenelnbogenweg");
        break;
    }
    case 183168:
    {
        returnValue = F("Katzenfels");
        break;
    }
    case 183169:
    {
        returnValue = F("Katzenfurter Str.");
        break;
    }
    case 183170:
    {
        returnValue = F("Katzengang");
        break;
    }
    case 183171:
    {
        returnValue = F("Katzengasse");
        break;
    }
    case 183172:
    {
        returnValue = F("Katzengraben");
        break;
    }
    case 183173:
    {
        returnValue = F("Katzengrabenweg");
        break;
    }
    case 183174:
    {
        returnValue = F("Katzengrund");
        break;
    }
    case 183175:
    {
        returnValue = F("Katzengäßchen");
        break;
    }
    case 183176:
    {
        returnValue = F("Katzenhackstr.");
        break;
    }
    case 183177:
    {
        returnValue = F("Katzenhagen");
        break;
    }
    case 183178:
    {
        returnValue = F("Katzenhaldeweg");
        break;
    }
    case 183179:
    {
        returnValue = F("Katzenhauweg");
        break;
    }
    case 183180:
    {
        returnValue = F("Katzenhof");
        break;
    }
    case 183181:
    {
        returnValue = F("Katzenhäuleweg");
        break;
    }
    case 183182:
    {
        returnValue = F("Katzenhöfertor");
        break;
    }
    case 183183:
    {
        returnValue = F("Katzenhörner Weg");
        break;
    }
    case 183184:
    {
        returnValue = F("Katzenhügel");
        break;
    }
    case 183185:
    {
        returnValue = F("Katzenkamp");
        break;
    }
    case 183186:
    {
        returnValue = F("Katzenklauallee");
        break;
    }
    case 183187:
    {
        returnValue = F("Katzenklinge");
        break;
    }
    case 183188:
    {
        returnValue = F("Katzenkopf");
        break;
    }
    case 183189:
    {
        returnValue = F("Katzenkopfweg");
        break;
    }
    case 183190:
    {
        returnValue = F("Katzenkuhle");
        break;
    }
    case 183191:
    {
        returnValue = F("Katzenlauf");
        break;
    }
    case 183192:
    {
        returnValue = F("Katzenleitenweg");
        break;
    }
    case 183193:
    {
        returnValue = F("Katzenlohstr.");
        break;
    }
    case 183194:
    {
        returnValue = F("Katzenlückstr.");
        break;
    }
    case 183195:
    {
        returnValue = F("Katzenmarkt");
        break;
    }
    case 183196:
    {
        returnValue = F("Katzenmatt");
        break;
    }
    case 183197:
    {
        returnValue = F("Katzenmoorweg");
        break;
    }
    case 183198:
    {
        returnValue = F("Katzenmooser Höhe");
        break;
    }
    case 183199:
    {
        returnValue = F("Katzenmoosweg");
        break;
    }
    case 183200:
    {
        returnValue = F("Katzenmossweg");
        break;
    }
    case 183201:
    {
        returnValue = F("Katzenmühle");
        break;
    }
    case 183202:
    {
        returnValue = F("Katzenpfuhl");
        break;
    }
    case 183203:
    {
        returnValue = F("Katzenplan");
        break;
    }
    case 183204:
    {
        returnValue = F("Katzenpolsweg");
        break;
    }
    case 183205:
    {
        returnValue = F("Katzenpützweg");
        break;
    }
    case 183206:
    {
        returnValue = F("Katzenrain");
        break;
    }
    case 183207:
    {
        returnValue = F("Katzenrohrbacher Str.");
        break;
    }
    case 183208:
    {
        returnValue = F("Katzensattelring");
        break;
    }
    case 183209:
    {
        returnValue = F("Katzenschlagweg");
        break;
    }
    case 183210:
    {
        returnValue = F("Katzenschneise");
        break;
    }
    case 183211:
    {
        returnValue = F("Katzenschwanzweg");
        break;
    }
    case 183212:
    {
        returnValue = F("Katzensilberweg");
        break;
    }
    case 183213:
    {
        returnValue = F("Katzensprung");
        break;
    }
    case 183214:
    {
        returnValue = F("Katzenstaige");
        break;
    }
    case 183215:
    {
        returnValue = F("Katzensteg");
        break;
    }
    case 183216:
    {
        returnValue = F("Katzensteig");
        break;
    }
    case 183217:
    {
        returnValue = F("Katzensteig-Strässchen");
        break;
    }
    case 183218:
    {
        returnValue = F("Katzensteige");
        break;
    }
    case 183219:
    {
        returnValue = F("Katzensteigle");
        break;
    }
    case 183220:
    {
        returnValue = F("Katzensteigstr.");
        break;
    }
    case 183221:
    {
        returnValue = F("Katzensteigweg");
        break;
    }
    case 183222:
    {
        returnValue = F("Katzenstein");
        break;
    }
    case 183223:
    {
        returnValue = F("Katzensteinbrücke");
        break;
    }
    case 183224:
    {
        returnValue = F("Katzensteiner Str.");
        break;
    }
    case 183225:
    {
        returnValue = F("Katzensteiner Weg");
        break;
    }
    case 183226:
    {
        returnValue = F("Katzensteinpfad");
        break;
    }
    case 183227:
    {
        returnValue = F("Katzensteinstr.");
        break;
    }
    case 183228:
    {
        returnValue = F("Katzensteinweg");
        break;
    }
    case 183229:
    {
        returnValue = F("Katzenstichsträßle");
        break;
    }
    case 183230:
    {
        returnValue = F("Katzenstieg");
        break;
    }
    case 183231:
    {
        returnValue = F("Katzenstiege");
        break;
    }
    case 183232:
    {
        returnValue = F("Katzenstirn");
        break;
    }
    case 183233:
    {
        returnValue = F("Katzenstr.");
        break;
    }
    case 183234:
    {
        returnValue = F("Katzenstuhlweg");
        break;
    }
    case 183235:
    {
        returnValue = F("Katzenstückweg");
        break;
    }
    case 183236:
    {
        returnValue = F("Katzental");
        break;
    }
    case 183237:
    {
        returnValue = F("Katzentaler Str.");
        break;
    }
    case 183238:
    {
        returnValue = F("Katzentaler Weg");
        break;
    }
    case 183239:
    {
        returnValue = F("Katzenteich");
        break;
    }
    case 183240:
    {
        returnValue = F("Katzenthal");
        break;
    }
    case 183241:
    {
        returnValue = F("Katzenthaler Str.");
        break;
    }
    case 183242:
    {
        returnValue = F("Katzentreppe");
        break;
    }
    case 183243:
    {
        returnValue = F("Katzentreppenweg");
        break;
    }
    case 183244:
    {
        returnValue = F("Katzentrog");
        break;
    }
    case 183245:
    {
        returnValue = F("Katzentränke");
        break;
    }
    case 183246:
    {
        returnValue = F("Katzenturmgässchen");
        break;
    }
    case 183247:
    {
        returnValue = F("Katzenwasen");
        break;
    }
    case 183248:
    {
        returnValue = F("Katzenweg");
        break;
    }
    case 183249:
    {
        returnValue = F("Katzenweg/Fußgängerweg");
        break;
    }
    case 183250:
    {
        returnValue = F("Katzenwiese");
        break;
    }
    case 183251:
    {
        returnValue = F("Katzenwiesenring");
        break;
    }
    case 183252:
    {
        returnValue = F("Katzenwinkel");
        break;
    }
    case 183253:
    {
        returnValue = F("Katzenzeil");
        break;
    }
    case 183254:
    {
        returnValue = F("Katzer Feldchen");
        break;
    }
    case 183255:
    {
        returnValue = F("Katzerlesweg");
        break;
    }
    case 183256:
    {
        returnValue = F("Katzersteinstr.");
        break;
    }
    case 183257:
    {
        returnValue = F("Katzes");
        break;
    }
    case 183258:
    {
        returnValue = F("Katzgasse");
        break;
    }
    case 183259:
    {
        returnValue = F("Katzgaß");
        break;
    }
    case 183260:
    {
        returnValue = F("Katzgraben");
        break;
    }
    case 183261:
    {
        returnValue = F("Katzhagen");
        break;
    }
    case 183262:
    {
        returnValue = F("Katzheide");
        break;
    }
    case 183263:
    {
        returnValue = F("Katzheider Weg");
        break;
    }
    case 183264:
    {
        returnValue = F("Katzheimerstr.");
        break;
    }
    case 183265:
    {
        returnValue = F("Katzhof");
        break;
    }
    case 183266:
    {
        returnValue = F("Katzhörner Weg");
        break;
    }
    case 183267:
    {
        returnValue = F("Katzien");
        break;
    }
    case 183268:
    {
        returnValue = F("Katzlochweg");
        break;
    }
    case 183269:
    {
        returnValue = F("Katzmoorstr.");
        break;
    }
    case 183270:
    {
        returnValue = F("Katzohlweg");
        break;
    }
    case 183271:
    {
        returnValue = F("Katzower Weg");
        break;
    }
    case 183272:
    {
        returnValue = F("Katzsohlenweg");
        break;
    }
    case 183273:
    {
        returnValue = F("Katzsteinbaudenweg");
        break;
    }
    case 183274:
    {
        returnValue = F("Katzsteinstr.");
        break;
    }
    case 183275:
    {
        returnValue = F("Katzstr.");
        break;
    }
    case 183276:
    {
        returnValue = F("Katzwalchen");
        break;
    }
    case 183277:
    {
        returnValue = F("Katzwalchener Weg");
        break;
    }
    case 183278:
    {
        returnValue = F("Katzwanger Bahnweg");
        break;
    }
    case 183279:
    {
        returnValue = F("Katzwanger Bahnweg / Wolkersdorfer Str.");
        break;
    }
    case 183280:
    {
        returnValue = F("Katzwanger Str.");
        break;
    }
    case 183281:
    {
        returnValue = F("Katzwangkopfweg");
        break;
    }
    case 183282:
    {
        returnValue = F("Katzwangrundweg");
        break;
    }
    case 183283:
    {
        returnValue = F("Katzwangstr.");
        break;
    }
    case 183284:
    {
        returnValue = F("Katzweg");
        break;
    }
    case 183285:
    {
        returnValue = F("Katzweilerstr.");
        break;
    }
    case 183286:
    {
        returnValue = F("Katzwiesen");
        break;
    }
    case 183287:
    {
        returnValue = F("Katzwinkeler Str.");
        break;
    }
    case 183288:
    {
        returnValue = F("Katzwinkeler Weg");
        break;
    }
    case 183289:
    {
        returnValue = F("Katzwinkler Weg");
        break;
    }
    case 183290:
    {
        returnValue = F("Kaubenheimer Str.");
        break;
    }
    case 183291:
    {
        returnValue = F("Kauber Str.");
        break;
    }
    case 183292:
    {
        returnValue = F("Kaubtal");
        break;
    }
    case 183293:
    {
        returnValue = F("Kauchenweg");
        break;
    }
    case 183294:
    {
        returnValue = F("Kaucherweg");
        break;
    }
    case 183295:
    {
        returnValue = F("Kauenweg");
        break;
    }
    case 183296:
    {
        returnValue = F("Kauer Ring");
        break;
    }
    case 183297:
    {
        returnValue = F("Kauerheim");
        break;
    }
    case 183298:
    {
        returnValue = F("Kauerheimer Str.");
        break;
    }
    case 183299:
    {
        returnValue = F("Kauerhofer Str.");
        break;
    }
    case 183300:
    {
        returnValue = F("Kauerlacher Weg");
        break;
    }
    case 183301:
    {
        returnValue = F("Kauern");
        break;
    }
    case 183302:
    {
        returnValue = F("Kauernburger Grund");
        break;
    }
    case 183303:
    {
        returnValue = F("Kauernburger Platz");
        break;
    }
    case 183304:
    {
        returnValue = F("Kauerndorf");
        break;
    }
    case 183305:
    {
        returnValue = F("Kauerndorfer Allee");
        break;
    }
    case 183306:
    {
        returnValue = F("Kauerndorfer Panoramaweg");
        break;
    }
    case 183307:
    {
        returnValue = F("Kauersbachbergweg");
        break;
    }
    case 183308:
    {
        returnValue = F("Kauersweg");
        break;
    }
    case 183309:
    {
        returnValue = F("Kauertsweg");
        break;
    }
    case 183310:
    {
        returnValue = F("Kauertweg");
        break;
    }
    case 183311:
    {
        returnValue = F("Kauertzacker");
        break;
    }
    case 183312:
    {
        returnValue = F("Kaufbacher Ring");
        break;
    }
    case 183313:
    {
        returnValue = F("Kaufbacher Weg");
        break;
    }
    case 183314:
    {
        returnValue = F("Kaufbeurener Str.");
        break;
    }
    case 183315:
    {
        returnValue = F("Kaufbeurener Weg");
        break;
    }
    case 183316:
    {
        returnValue = F("Kaufbeurer Str.");
        break;
    }
    case 183317:
    {
        returnValue = F("Kaufenbergweg");
        break;
    }
    case 183318:
    {
        returnValue = F("Kauferberg");
        break;
    }
    case 183319:
    {
        returnValue = F("Kauferinger Str.");
        break;
    }
    case 183320:
    {
        returnValue = F("Kauferinger Weg");
        break;
    }
    case 183321:
    {
        returnValue = F("Kauferstr.");
        break;
    }
    case 183322:
    {
        returnValue = F("Kauffahrtei");
        break;
    }
    case 183323:
    {
        returnValue = F("Kauffbergstr.");
        break;
    }
    case 183324:
    {
        returnValue = F("Kauffelderweg");
        break;
    }
    case 183325:
    {
        returnValue = F("Kauffmannsgarten");
        break;
    }
    case 183326:
    {
        returnValue = F("Kauffmannstr.");
        break;
    }
    case 183327:
    {
        returnValue = F("Kauffmansstr.");
        break;
    }
    case 183328:
    {
        returnValue = F("Kauffunger Weg");
        break;
    }
    case 183329:
    {
        returnValue = F("Kaufgasse");
        break;
    }
    case 183330:
    {
        returnValue = F("Kaufhallenweg");
        break;
    }
    case 183331:
    {
        returnValue = F("Kaufhausgasse");
        break;
    }
    case 183332:
    {
        returnValue = F("Kaufhausplatz");
        break;
    }
    case 183333:
    {
        returnValue = F("Kaufhausstr.");
        break;
    }
    case 183334:
    {
        returnValue = F("Kaufhaussträßchen");
        break;
    }
    case 183335:
    {
        returnValue = F("Kaufhausträßchen");
        break;
    }
    case 183336:
    {
        returnValue = F("Kaufhof");
        break;
    }
    case 183337:
    {
        returnValue = F("Kaufhofpassage");
        break;
    }
    case 183338:
    {
        returnValue = F("Kaufholzweg");
        break;
    }
    case 183339:
    {
        returnValue = F("Kauflandener Str.");
        break;
    }
    case 183340:
    {
        returnValue = F("Kauflandkreisel");
        break;
    }
    case 183341:
    {
        returnValue = F("Kaufleite");
        break;
    }
    case 183342:
    {
        returnValue = F("Kauflohe");
        break;
    }
    case 183343:
    {
        returnValue = F("Kaufmannring");
        break;
    }
    case 183344:
    {
        returnValue = F("Kaufmannsbrede");
        break;
    }
    case 183345:
    {
        returnValue = F("Kaufmannsgasse");
        break;
    }
    case 183346:
    {
        returnValue = F("Kaufmannsgässle");
        break;
    }
    case 183347:
    {
        returnValue = F("Kaufmannstr.");
        break;
    }
    case 183348:
    {
        returnValue = F("Kaufmannsweg");
        break;
    }
    case 183349:
    {
        returnValue = F("Kaufmannweg");
        break;
    }
    case 183350:
    {
        returnValue = F("Kaufmännerstr.");
        break;
    }
    case 183351:
    {
        returnValue = F("Kaufnitz");
        break;
    }
    case 183352:
    {
        returnValue = F("Kaufnitzweg");
        break;
    }
    case 183353:
    {
        returnValue = F("Kaufpark");
        break;
    }
    case 183354:
    {
        returnValue = F("Kaufpark-Passage");
        break;
    }
    case 183355:
    {
        returnValue = F("Kaufstr.");
        break;
    }
    case 183356:
    {
        returnValue = F("Kaufungen-Niederkaufungen Bahnhof");
        break;
    }
    case 183357:
    {
        returnValue = F("Kaufunger Breite");
        break;
    }
    case 183358:
    {
        returnValue = F("Kaufunger Str.");
        break;
    }
    case 183359:
    {
        returnValue = F("Kaufunger Waldstr.");
        break;
    }
    case 183360:
    {
        returnValue = F("Kaufunger Weg");
        break;
    }
    case 183361:
    {
        returnValue = F("Kaufunger-Wald-Weg");
        break;
    }
    case 183362:
    {
        returnValue = F("Kaufungstr.");
        break;
    }
    case 183363:
    {
        returnValue = F("Kaufwald");
        break;
    }
    case 183364:
    {
        returnValue = F("Kaufwaldallee");
        break;
    }
    case 183365:
    {
        returnValue = F("Kaufwaldsträßle");
        break;
    }
    case 183366:
    {
        returnValue = F("Kaufwaldweg");
        break;
    }
    case 183367:
    {
        returnValue = F("Kaufweg");
        break;
    }
    case 183368:
    {
        returnValue = F("Kaufweide");
        break;
    }
    case 183369:
    {
        returnValue = F("Kauhburchschit");
        break;
    }
    case 183370:
    {
        returnValue = F("Kauhgang");
        break;
    }
    case 183371:
    {
        returnValue = F("Kaukenberg");
        break;
    }
    case 183372:
    {
        returnValue = F("Kaukenberger Weg");
        break;
    }
    case 183373:
    {
        returnValue = F("Kaul Anger Weg");
        break;
    }
    case 183374:
    {
        returnValue = F("Kaulanger");
        break;
    }
    case 183375:
    {
        returnValue = F("Kaulangerstr.");
        break;
    }
    case 183376:
    {
        returnValue = F("Kaulardstr.");
        break;
    }
    case 183377:
    {
        returnValue = F("Kaulastr.");
        break;
    }
    case 183378:
    {
        returnValue = F("Kaulbachring");
        break;
    }
    case 183379:
    {
        returnValue = F("Kaulbachstr.");
        break;
    }
    case 183380:
    {
        returnValue = F("Kaulbachweg");
        break;
    }
    case 183381:
    {
        returnValue = F("Kaulbahn");
        break;
    }
    case 183382:
    {
        returnValue = F("Kaulberg");
        break;
    }
    case 183383:
    {
        returnValue = F("Kaule");
        break;
    }
    case 183384:
    {
        returnValue = F("Kaulenbachstr.");
        break;
    }
    case 183385:
    {
        returnValue = F("Kaulenbergstr.");
        break;
    }
    case 183386:
    {
        returnValue = F("Kaulenbusch");
        break;
    }
    case 183387:
    {
        returnValue = F("Kaulener Str.");
        break;
    }
    case 183388:
    {
        returnValue = F("Kaulenfeldstr.");
        break;
    }
    case 183389:
    {
        returnValue = F("Kaulengarten");
        break;
    }
    case 183390:
    {
        returnValue = F("Kaulengasse");
        break;
    }
    case 183391:
    {
        returnValue = F("Kaulens-Weide");
        break;
    }
    case 183392:
    {
        returnValue = F("Kaulenstr.");
        break;
    }
    case 183393:
    {
        returnValue = F("Kaulenstück");
        break;
    }
    case 183394:
    {
        returnValue = F("Kaulenweg");
        break;
    }
    case 183395:
    {
        returnValue = F("Kauler Hüll");
        break;
    }
    case 183396:
    {
        returnValue = F("Kauler Kreuzgasse");
        break;
    }
    case 183397:
    {
        returnValue = F("Kauler Str.");
        break;
    }
    case 183398:
    {
        returnValue = F("Kauler Weg");
        break;
    }
    case 183399:
    {
        returnValue = F("Kaulfußstr.");
        break;
    }
    case 183400:
    {
        returnValue = F("Kaulgasse");
        break;
    }
    case 183401:
    {
        returnValue = F("Kaulgrund");
        break;
    }
    case 183402:
    {
        returnValue = F("Kaulhausen");
        break;
    }
    case 183403:
    {
        returnValue = F("Kaulheckeweg");
        break;
    }
    case 183404:
    {
        returnValue = F("Kaulhügel");
        break;
    }
    case 183405:
    {
        returnValue = F("Kaulkestr.");
        break;
    }
    case 183406:
    {
        returnValue = F("Kaullastr.");
        break;
    }
    case 183407:
    {
        returnValue = F("Kaulsdorfer Str.");
        break;
    }
    case 183408:
    {
        returnValue = F("Kaulsdorfer Weg");
        break;
    }
    case 183409:
    {
        returnValue = F("Kaulsgasse");
        break;
    }
    case 183410:
    {
        returnValue = F("Kaulsrother Weg");
        break;
    }
    case 183411:
    {
        returnValue = F("Kaulstoßer Str.");
        break;
    }
    case 183412:
    {
        returnValue = F("Kaulstr.");
        break;
    }
    case 183413:
    {
        returnValue = F("Kaulweg");
        break;
    }
    case 183414:
    {
        returnValue = F("Kaumannsstr.");
        break;
    }
    case 183415:
    {
        returnValue = F("Kaunaser Str.");
        break;
    }
    case 183416:
    {
        returnValue = F("Kaunasweg");
        break;
    }
    case 183417:
    {
        returnValue = F("Kaunengang");
        break;
    }
    case 183418:
    {
        returnValue = F("Kaunenstr.");
        break;
    }
    case 183419:
    {
        returnValue = F("Kaunersteig");
        break;
    }
    case 183420:
    {
        returnValue = F("Kaunestr.");
        break;
    }
    case 183421:
    {
        returnValue = F("Kaunitzer Str.");
        break;
    }
    case 183422:
    {
        returnValue = F("Kaunitzstr.");
        break;
    }
    case 183423:
    {
        returnValue = F("Kaunterweg");
        break;
    }
    case 183424:
    {
        returnValue = F("Kaunweg");
        break;
    }
    case 183425:
    {
        returnValue = F("Kaup's Esch");
        break;
    }
    case 183426:
    {
        returnValue = F("Kaupe");
        break;
    }
    case 183427:
    {
        returnValue = F("Kaupendorfer Weg");
        break;
    }
    case 183428:
    {
        returnValue = F("Kaupenweg");
        break;
    }
    case 183429:
    {
        returnValue = F("Kaupersberg");
        break;
    }
    case 183430:
    {
        returnValue = F("Kaupersgäßchen");
        break;
    }
    case 183431:
    {
        returnValue = F("Kauperstr.");
        break;
    }
    case 183432:
    {
        returnValue = F("Kaupertweg");
        break;
    }
    case 183433:
    {
        returnValue = F("Kaupmanns Kamp");
        break;
    }
    case 183434:
    {
        returnValue = F("Kauppenweg");
        break;
    }
    case 183435:
    {
        returnValue = F("Kaupscher Weg");
        break;
    }
    case 183436:
    {
        returnValue = F("Kaupstr.");
        break;
    }
    case 183437:
    {
        returnValue = F("Kauritzer Str.");
        break;
    }
    case 183438:
    {
        returnValue = F("Kausbühl");
        break;
    }
    case 183439:
    {
        returnValue = F("Kauschaer Str.");
        break;
    }
    case 183440:
    {
        returnValue = F("Kauschrübenstr.");
        break;
    }
    case 183441:
    {
        returnValue = F("Kauschwitzer Str.");
        break;
    }
    case 183442:
    {
        returnValue = F("Kauschwitzer Weg");
        break;
    }
    case 183443:
    {
        returnValue = F("Kauseneichsgasse");
        break;
    }
    case 183444:
    {
        returnValue = F("Kausener Str.");
        break;
    }
    case 183445:
    {
        returnValue = F("Kauser Weg");
        break;
    }
    case 183446:
    {
        returnValue = F("Kauslunder Str.");
        break;
    }
    case 183447:
    {
        returnValue = F("Kauslunder Winkel");
        break;
    }
    case 183448:
    {
        returnValue = F("Kauslundhof");
        break;
    }
    case 183449:
    {
        returnValue = F("Kauslundlücke");
        break;
    }
    case 183450:
    {
        returnValue = F("Kaustinenweg");
        break;
    }
    case 183451:
    {
        returnValue = F("Kaute");
        break;
    }
    case 183452:
    {
        returnValue = F("Kautendorfer Str.");
        break;
    }
    case 183453:
    {
        returnValue = F("Kautenfeldweg");
        break;
    }
    case 183454:
    {
        returnValue = F("Kautenstege");
        break;
    }
    case 183455:
    {
        returnValue = F("Kautenwaldweg");
        break;
    }
    case 183456:
    {
        returnValue = F("Kautenweg");
        break;
    }
    case 183457:
    {
        returnValue = F("Kautenwisch");
        break;
    }
    case 183458:
    {
        returnValue = F("Kauterstr.");
        break;
    }
    case 183459:
    {
        returnValue = F("Kauthenbergstr.");
        break;
    }
    case 183460:
    {
        returnValue = F("Kautseestr.");
        break;
    }
    case 183461:
    {
        returnValue = F("Kautsgraben");
        break;
    }
    case 183462:
    {
        returnValue = F("Kauttergäßle");
        break;
    }
    case 183463:
    {
        returnValue = F("Kautweg");
        break;
    }
    case 183464:
    {
        returnValue = F("Kautz");
        break;
    }
    case 183465:
    {
        returnValue = F("Kautzbrunnenweg");
        break;
    }
    case 183466:
    {
        returnValue = F("Kautzelweg");
        break;
    }
    case 183467:
    {
        returnValue = F("Kautzenberg");
        break;
    }
    case 183468:
    {
        returnValue = F("Kautzengasse");
        break;
    }
    case 183469:
    {
        returnValue = F("Kautzenhof");
        break;
    }
    case 183470:
    {
        returnValue = F("Kautzenstr.");
        break;
    }
    case 183471:
    {
        returnValue = F("Kautzstr.");
        break;
    }
    case 183472:
    {
        returnValue = F("Kautzweg");
        break;
    }
    case 183473:
    {
        returnValue = F("Kauweg");
        break;
    }
    case 183474:
    {
        returnValue = F("Kauxdorfer Str.");
        break;
    }
    case 183475:
    {
        returnValue = F("Kauzbühlstr.");
        break;
    }
    case 183476:
    {
        returnValue = F("Kauzengasse");
        break;
    }
    case 183477:
    {
        returnValue = F("Kauzleber Str.");
        break;
    }
    case 183478:
    {
        returnValue = F("Kauzpfad");
        break;
    }
    case 183479:
    {
        returnValue = F("Kauzweg");
        break;
    }
    case 183480:
    {
        returnValue = F("Kauzwinkel");
        break;
    }
    case 183481:
    {
        returnValue = F("Kaußing");
        break;
    }
    case 183482:
    {
        returnValue = F("Kaußinger Mühlweg");
        break;
    }
    case 183483:
    {
        returnValue = F("Kavalierpad");
        break;
    }
    case 183484:
    {
        returnValue = F("Kavaliersschneise");
        break;
    }
    case 183485:
    {
        returnValue = F("Kavalierstr.");
        break;
    }
    case 183486:
    {
        returnValue = F("Kavalierstweete");
        break;
    }
    case 183487:
    {
        returnValue = F("Kavaliersweg");
        break;
    }
    case 183488:
    {
        returnValue = F("Kavalleriestr.");
        break;
    }
    case 183489:
    {
        returnValue = F("Kavallerieweg");
        break;
    }
    case 183490:
    {
        returnValue = F("Kavarinerstr.");
        break;
    }
    case 183491:
    {
        returnValue = F("Kaveldiek");
        break;
    }
    case 183492:
    {
        returnValue = F("Kavelgraben");
        break;
    }
    case 183493:
    {
        returnValue = F("Kavelmoor");
        break;
    }
    case 183494:
    {
        returnValue = F("Kavelocherhof");
        break;
    }
    case 183495:
    {
        returnValue = F("Kavelpaß");
        break;
    }
    case 183496:
    {
        returnValue = F("Kavelsdorfer Str.");
        break;
    }
    case 183497:
    {
        returnValue = F("Kavelweg");
        break;
    }
    case 183498:
    {
        returnValue = F("Kavelwiesen");
        break;
    }
    case 183499:
    {
        returnValue = F("Kavenbrückenweg");
        break;
    }
    case 183500:
    {
        returnValue = F("Kavenkamp");
        break;
    }
    case 183501:
    {
        returnValue = F("Kavenkamper Ring");
        break;
    }
    case 183502:
    {
        returnValue = F("Kavenstr.");
        break;
    }
    case 183503:
    {
        returnValue = F("Kavernenstr.");
        break;
    }
    case 183504:
    {
        returnValue = F("Kawittenberg");
        break;
    }
    case 183505:
    {
        returnValue = F("Kay");
        break;
    }
    case 183506:
    {
        returnValue = F("Kay-Nebel-Weg");
        break;
    }
    case 183507:
    {
        returnValue = F("Kaydeich");
        break;
    }
    case 183508:
    {
        returnValue = F("Kayenweg");
        break;
    }
    case 183509:
    {
        returnValue = F("Kayhauser Damm");
        break;
    }
    case 183510:
    {
        returnValue = F("Kayhauser Kamp");
        break;
    }
    case 183511:
    {
        returnValue = F("Kayhbergweg");
        break;
    }
    case 183512:
    {
        returnValue = F("Kayher Str.");
        break;
    }
    case 183513:
    {
        returnValue = F("Kayher Sträßle");
        break;
    }
    case 183514:
    {
        returnValue = F("Kayher Talsträßle");
        break;
    }
    case 183515:
    {
        returnValue = F("Kayhofer Weg");
        break;
    }
    case 183516:
    {
        returnValue = F("Kayhstr.");
        break;
    }
    case 183517:
    {
        returnValue = F("Kayhuder Str.");
        break;
    }
    case 183518:
    {
        returnValue = F("Kayhweg");
        break;
    }
    case 183519:
    {
        returnValue = F("Kaynaer Str.");
        break;
    }
    case 183520:
    {
        returnValue = F("Kaynaer Weg");
        break;
    }
    case 183521:
    {
        returnValue = F("Kaynweg");
        break;
    }
    case 183522:
    {
        returnValue = F("Kayser Damm");
        break;
    }
    case 183523:
    {
        returnValue = F("Kayser-Schmetting-Str.");
        break;
    }
    case 183524:
    {
        returnValue = F("Kaysers Kamp");
        break;
    }
    case 183525:
    {
        returnValue = F("Kaysersberger Str.");
        break;
    }
    case 183526:
    {
        returnValue = F("Kaysersbergstr.");
        break;
    }
    case 183527:
    {
        returnValue = F("Kayserstr.");
        break;
    }
    case 183528:
    {
        returnValue = F("Kaywaldstr.");
        break;
    }
    case 183529:
    {
        returnValue = F("Kazböckstr.");
        break;
    }
    case 183530:
    {
        returnValue = F("Kazmaierstr.");
        break;
    }
    case 183531:
    {
        returnValue = F("Kaßbergauffahrt");
        break;
    }
    case 183532:
    {
        returnValue = F("Kaßbergstr.");
        break;
    }
    case 183533:
    {
        returnValue = F("Kaßmannsweg");
        break;
    }
    case 183534:
    {
        returnValue = F("Kaßwiese + Bötz");
        break;
    }
    case 183535:
    {
        returnValue = F("KeWa Weg");
        break;
    }
    case 183536:
    {
        returnValue = F("Kebbel Park");
        break;
    }
    case 183537:
    {
        returnValue = F("Kebbelstr.");
        break;
    }
    case 183538:
    {
        returnValue = F("Kebsgraben");
        break;
    }
    case 183539:
    {
        returnValue = F("Keches Gut");
        break;
    }
    case 183540:
    {
        returnValue = F("Kechlerstr.");
        break;
    }
    case 183541:
    {
        returnValue = F("Keckbronnenweg");
        break;
    }
    case 183542:
    {
        returnValue = F("Keckbrunnenstr.");
        break;
    }
    case 183543:
    {
        returnValue = F("Keckenweg");
        break;
    }
    case 183544:
    {
        returnValue = F("Keckertweg");
        break;
    }
    case 183545:
    {
        returnValue = F("Keckmühle");
        break;
    }
    case 183546:
    {
        returnValue = F("Keckstr.");
        break;
    }
    case 183547:
    {
        returnValue = F("Keckweg");
        break;
    }
    case 183548:
    {
        returnValue = F("Kecskemet Allee");
        break;
    }
    case 183549:
    {
        returnValue = F("Kedainiaier Str.");
        break;
    }
    case 183550:
    {
        returnValue = F("Keddien");
        break;
    }
    case 183551:
    {
        returnValue = F("Keddinghausen");
        break;
    }
    case 183552:
    {
        returnValue = F("Kederbacherstr.");
        break;
    }
    case 183553:
    {
        returnValue = F("Kedererweg");
        break;
    }
    case 183554:
    {
        returnValue = F("Kedingshäger Str.");
        break;
    }
    case 183555:
    {
        returnValue = F("Keebweg");
        break;
    }
    case 183556:
    {
        returnValue = F("Keekbreede");
        break;
    }
    case 183557:
    {
        returnValue = F("Keekener Str.");
        break;
    }
    case 183558:
    {
        returnValue = F("Keelbeker Str.");
        break;
    }
    case 183559:
    {
        returnValue = F("Keelbeker Weg");
        break;
    }
    case 183560:
    {
        returnValue = F("Keeleng");
        break;
    }
    case 183561:
    {
        returnValue = F("Keelköpkenweg");
        break;
    }
    case 183562:
    {
        returnValue = F("Keemoor");
        break;
    }
    case 183563:
    {
        returnValue = F("Keene-Platz");
        break;
    }
    case 183564:
    {
        returnValue = F("Keenmoor");
        break;
    }
    case 183565:
    {
        returnValue = F("Keerbenden");
        break;
    }
    case 183566:
    {
        returnValue = F("Keerlstr.");
        break;
    }
    case 183567:
    {
        returnValue = F("Keersmakerskamp");
        break;
    }
    case 183568:
    {
        returnValue = F("Keesburgstr.");
        break;
    }
    case 183569:
    {
        returnValue = F("Keeschladeweg");
        break;
    }
    case 183570:
    {
        returnValue = F("Keesebergweg");
        break;
    }
    case 183571:
    {
        returnValue = F("Keesgrieb");
        break;
    }
    case 183572:
    {
        returnValue = F("Keesower Str.");
        break;
    }
    case 183573:
    {
        returnValue = F("Keesredder");
        break;
    }
    case 183574:
    {
        returnValue = F("Keetner Str.");
        break;
    }
    case 183575:
    {
        returnValue = F("Keetstr.");
        break;
    }
    case 183576:
    {
        returnValue = F("Keezer Schmiede");
        break;
    }
    case 183577:
    {
        returnValue = F("Kefenroder Str.");
        break;
    }
    case 183578:
    {
        returnValue = F("Kefenröder Str.");
        break;
    }
    case 183579:
    {
        returnValue = F("Keferloher Str.");
        break;
    }
    case 183580:
    {
        returnValue = F("Keferloher-Markt-Str.");
        break;
    }
    case 183581:
    {
        returnValue = F("Kefersheimer Str.");
        break;
    }
    case 183582:
    {
        returnValue = F("Kefersteinstr.");
        break;
    }
    case 183583:
    {
        returnValue = F("Keferstr.");
        break;
    }
    case 183584:
    {
        returnValue = F("Keferweg");
        break;
    }
    case 183585:
    {
        returnValue = F("Keffelker Str.");
        break;
    }
    case 183586:
    {
        returnValue = F("Keffenbrink");
        break;
    }
    case 183587:
    {
        returnValue = F("Keffenbrinkstr.");
        break;
    }
    case 183588:
    {
        returnValue = F("Keffenweg");
        break;
    }
    case 183589:
    {
        returnValue = F("Kefferberg");
        break;
    }
    case 183590:
    {
        returnValue = F("Kefferhäuser Str.");
        break;
    }
    case 183591:
    {
        returnValue = F("Kefferhäuser Weg");
        break;
    }
    case 183592:
    {
        returnValue = F("Keffermich");
        break;
    }
    case 183593:
    {
        returnValue = F("Kegelbachstr.");
        break;
    }
    case 183594:
    {
        returnValue = F("Kegelbahn");
        break;
    }
    case 183595:
    {
        returnValue = F("Kegelbahnschneise");
        break;
    }
    case 183596:
    {
        returnValue = F("Kegelbahnstr.");
        break;
    }
    case 183597:
    {
        returnValue = F("Kegelbahnsweg");
        break;
    }
    case 183598:
    {
        returnValue = F("Kegelbahnweg");
        break;
    }
    case 183599:
    {
        returnValue = F("Kegelbann");
        break;
    }
    case 183600:
    {
        returnValue = F("Kegelbergstr.");
        break;
    }
    case 183601:
    {
        returnValue = F("Kegelbrück");
        break;
    }
    case 183602:
    {
        returnValue = F("Kegelbrücke");
        break;
    }
    case 183603:
    {
        returnValue = F("Kegelbungert");
        break;
    }
    case 183604:
    {
        returnValue = F("Kegeldamm");
        break;
    }
    case 183605:
    {
        returnValue = F("Kegeleicheweg");
        break;
    }
    case 183606:
    {
        returnValue = F("Kegelerstr.");
        break;
    }
    case 183607:
    {
        returnValue = F("Kegelfeldstr.");
        break;
    }
    case 183608:
    {
        returnValue = F("Kegelgarten");
        break;
    }
    case 183609:
    {
        returnValue = F("Kegelgasse");
        break;
    }
    case 183610:
    {
        returnValue = F("Kegelgraben");
        break;
    }
    case 183611:
    {
        returnValue = F("Kegelgässle");
        break;
    }
    case 183612:
    {
        returnValue = F("Kegelgäßchen");
        break;
    }
    case 183613:
    {
        returnValue = F("Kegelgäßle");
        break;
    }
    case 183614:
    {
        returnValue = F("Kegelhorstschneise");
        break;
    }
    case 183615:
    {
        returnValue = F("Kegelkamp");
        break;
    }
    case 183616:
    {
        returnValue = F("Kegelkopfweg");
        break;
    }
    case 183617:
    {
        returnValue = F("Kegelplatz");
        break;
    }
    case 183618:
    {
        returnValue = F("Kegelriß");
        break;
    }
    case 183619:
    {
        returnValue = F("Kegelschub");
        break;
    }
    case 183620:
    {
        returnValue = F("Kegelsklinge");
        break;
    }
    case 183621:
    {
        returnValue = F("Kegelsklingstr.");
        break;
    }
    case 183622:
    {
        returnValue = F("Kegelspielblick");
        break;
    }
    case 183623:
    {
        returnValue = F("Kegelspielstr.");
        break;
    }
    case 183624:
    {
        returnValue = F("Kegelsteinweg");
        break;
    }
    case 183625:
    {
        returnValue = F("Kegelstr.");
        break;
    }
    case 183626:
    {
        returnValue = F("Kegeltorweg");
        break;
    }
    case 183627:
    {
        returnValue = F("Kegelweg");
        break;
    }
    case 183628:
    {
        returnValue = F("Kegelwiese");
        break;
    }
    case 183629:
    {
        returnValue = F("Kegenhoffweg");
        break;
    }
    case 183630:
    {
        returnValue = F("Kegetstr.");
        break;
    }
    case 183631:
    {
        returnValue = F("Keggenriede");
        break;
    }
    case 183632:
    {
        returnValue = F("Keglerstr.");
        break;
    }
    case 183633:
    {
        returnValue = F("Keglerweg");
        break;
    }
    case 183634:
    {
        returnValue = F("Kehdenstr.");
        break;
    }
    case 183635:
    {
        returnValue = F("Kehdinger Mühren");
        break;
    }
    case 183636:
    {
        returnValue = F("Kehdinger Str.");
        break;
    }
    case 183637:
    {
        returnValue = F("Kehdingertorswall");
        break;
    }
    case 183638:
    {
        returnValue = F("Keherhainweg");
        break;
    }
    case 183639:
    {
        returnValue = F("Kehl");
        break;
    }
    case 183640:
    {
        returnValue = F("Kehl Rathaus");
        break;
    }
    case 183641:
    {
        returnValue = F("Kehlackerweg");
        break;
    }
    case 183642:
    {
        returnValue = F("Kehlbacher Str.");
        break;
    }
    case 183643:
    {
        returnValue = F("Kehlbachstr.");
        break;
    }
    case 183644:
    {
        returnValue = F("Kehlberg");
        break;
    }
    case 183645:
    {
        returnValue = F("Kehlbergweg");
        break;
    }
    case 183646:
    {
        returnValue = F("Kehlbrunnen");
        break;
    }
    case 183647:
    {
        returnValue = F("Kehlbrunnenweg");
        break;
    }
    case 183648:
    {
        returnValue = F("Kehle");
        break;
    }
    case 183649:
    {
        returnValue = F("Kehlen");
        break;
    }
    case 183650:
    {
        returnValue = F("Kehlenbachstr.");
        break;
    }
    case 183651:
    {
        returnValue = F("Kehlenberg");
        break;
    }
    case 183652:
    {
        returnValue = F("Kehlener Str.");
        break;
    }
    case 183653:
    {
        returnValue = F("Kehlenfeld");
        break;
    }
    case 183654:
    {
        returnValue = F("Kehlenstr.");
        break;
    }
    case 183655:
    {
        returnValue = F("Kehlenweg");
        break;
    }
    case 183656:
    {
        returnValue = F("Kehlenwiese");
        break;
    }
    case 183657:
    {
        returnValue = F("Kehler Str.");
        break;
    }
    case 183658:
    {
        returnValue = F("Kehler Weg");
        break;
    }
    case 183659:
    {
        returnValue = F("Kehlerweg");
        break;
    }
    case 183660:
    {
        returnValue = F("Kehlestr.");
        break;
    }
    case 183661:
    {
        returnValue = F("Kehleweg");
        break;
    }
    case 183662:
    {
        returnValue = F("Kehlgasse");
        break;
    }
    case 183663:
    {
        returnValue = F("Kehlgrabenstr.");
        break;
    }
    case 183664:
    {
        returnValue = F("Kehlhaldenweg");
        break;
    }
    case 183665:
    {
        returnValue = F("Kehlhof");
        break;
    }
    case 183666:
    {
        returnValue = F("Kehlhofgartenstr.");
        break;
    }
    case 183667:
    {
        returnValue = F("Kehlhofstr.");
        break;
    }
    case 183668:
    {
        returnValue = F("Kehlhofweg");
        break;
    }
    case 183669:
    {
        returnValue = F("Kehlinghausener Weg");
        break;
    }
    case 183670:
    {
        returnValue = F("Kehlingsdorf");
        break;
    }
    case 183671:
    {
        returnValue = F("Kehlkahr");
        break;
    }
    case 183672:
    {
        returnValue = F("Kehllochweg");
        break;
    }
    case 183673:
    {
        returnValue = F("Kehlmann-Str.");
        break;
    }
    case 183674:
    {
        returnValue = F("Kehlmünz");
        break;
    }
    case 183675:
    {
        returnValue = F("Kehlnbacher Str.");
        break;
    }
    case 183676:
    {
        returnValue = F("Kehlnbacher Weg");
        break;
    }
    case 183677:
    {
        returnValue = F("Kehlnweg");
        break;
    }
    case 183678:
    {
        returnValue = F("Kehlscheidweg");
        break;
    }
    case 183679:
    {
        returnValue = F("Kehlsiepen");
        break;
    }
    case 183680:
    {
        returnValue = F("Kehlsteinstr.");
        break;
    }
    case 183681:
    {
        returnValue = F("Kehlsteinweg");
        break;
    }
    case 183682:
    {
        returnValue = F("Kehlstr.");
        break;
    }
    case 183683:
    {
        returnValue = F("Kehlwald");
        break;
    }
    case 183684:
    {
        returnValue = F("Kehlweg");
        break;
    }
    case 183685:
    {
        returnValue = F("Kehläcker");
        break;
    }
    case 183686:
    {
        returnValue = F("Kehmeiersweg");
        break;
    }
    case 183687:
    {
        returnValue = F("Kehmstedter Str.");
        break;
    }
    case 183688:
    {
        returnValue = F("Kehmstedter Weg");
        break;
    }
    case 183689:
    {
        returnValue = F("Kehn");
        break;
    }
    case 183690:
    {
        returnValue = F("Kehnaer Weg");
        break;
    }
    case 183691:
    {
        returnValue = F("Kehnenkamp");
        break;
    }
    case 183692:
    {
        returnValue = F("Kehner Heide");
        break;
    }
    case 183693:
    {
        returnValue = F("Kehner Str.");
        break;
    }
    case 183694:
    {
        returnValue = F("Kehner Weg");
        break;
    }
    case 183695:
    {
        returnValue = F("Kehnerfeld");
        break;
    }
    case 183696:
    {
        returnValue = F("Kehnerter Weg");
        break;
    }
    case 183697:
    {
        returnValue = F("Kehnerweg");
        break;
    }
    case 183698:
    {
        returnValue = F("Kehnmoorweg");
        break;
    }
    case 183699:
    {
        returnValue = F("Kehr");
        break;
    }
    case 183700:
    {
        returnValue = F("Kehr Wieder");
        break;
    }
    case 183701:
    {
        returnValue = F("Kehrbachstr.");
        break;
    }
    case 183702:
    {
        returnValue = F("Kehrbeeke");
        break;
    }
    case 183703:
    {
        returnValue = F("Kehrberg");
        break;
    }
    case 183704:
    {
        returnValue = F("Kehrberger Dorfstr.");
        break;
    }
    case 183705:
    {
        returnValue = F("Kehrberger Str.");
        break;
    }
    case 183706:
    {
        returnValue = F("Kehrbergstr.");
        break;
    }
    case 183707:
    {
        returnValue = F("Kehrbrückstr.");
        break;
    }
    case 183708:
    {
        returnValue = F("Kehrbuscher Str.");
        break;
    }
    case 183709:
    {
        returnValue = F("Kehrbuscher Weg");
        break;
    }
    case 183710:
    {
        returnValue = F("Kehrbühlstr.");
        break;
    }
    case 183711:
    {
        returnValue = F("Kehrbüldeweg");
        break;
    }
    case 183712:
    {
        returnValue = F("Kehre");
        break;
    }
    case 183713:
    {
        returnValue = F("Kehreckweg");
        break;
    }
    case 183714:
    {
        returnValue = F("Kehregässle");
        break;
    }
    case 183715:
    {
        returnValue = F("Kehren");
        break;
    }
    case 183716:
    {
        returnValue = F("Kehrenbacher Weg");
        break;
    }
    case 183717:
    {
        returnValue = F("Kehrenbachstr.");
        break;
    }
    case 183718:
    {
        returnValue = F("Kehrenbergstr.");
        break;
    }
    case 183719:
    {
        returnValue = F("Kehrenhof");
        break;
    }
    case 183720:
    {
        returnValue = F("Kehrenstr.");
        break;
    }
    case 183721:
    {
        returnValue = F("Kehrer Steig");
        break;
    }
    case 183722:
    {
        returnValue = F("Kehrer Str.");
        break;
    }
    case 183723:
    {
        returnValue = F("Kehrer am Biber");
        break;
    }
    case 183724:
    {
        returnValue = F("Kehrerstr.");
        break;
    }
    case 183725:
    {
        returnValue = F("Kehrerweg");
        break;
    }
    case 183726:
    {
        returnValue = F("Kehresackerschneise");
        break;
    }
    case 183727:
    {
        returnValue = F("Kehrewiederstr.");
        break;
    }
    case 183728:
    {
        returnValue = F("Kehrgasse");
        break;
    }
    case 183729:
    {
        returnValue = F("Kehrgärten");
        break;
    }
    case 183730:
    {
        returnValue = F("Kehrhamer Feld");
        break;
    }
    case 183731:
    {
        returnValue = F("Kehrhofstr.");
        break;
    }
    case 183732:
    {
        returnValue = F("Kehrholzring");
        break;
    }
    case 183733:
    {
        returnValue = F("Kehrhüttenstr.");
        break;
    }
    case 183734:
    {
        returnValue = F("Kehriger Str.");
        break;
    }
    case 183735:
    {
        returnValue = F("Kehrje");
        break;
    }
    case 183736:
    {
        returnValue = F("Kehrleiten");
        break;
    }
    case 183737:
    {
        returnValue = F("Kehrlesgasse");
        break;
    }
    case 183738:
    {
        returnValue = F("Kehrlich");
        break;
    }
    case 183739:
    {
        returnValue = F("Kehrmühle");
        break;
    }
    case 183740:
    {
        returnValue = F("Kehrrangweg");
        break;
    }
    case 183741:
    {
        returnValue = F("Kehrs Ziegelei");
        break;
    }
    case 183742:
    {
        returnValue = F("Kehrsbachstr.");
        break;
    }
    case 183743:
    {
        returnValue = F("Kehrstr.");
        break;
    }
    case 183744:
    {
        returnValue = F("Kehrtal");
        break;
    }
    case 183745:
    {
        returnValue = F("Kehrtenweg");
        break;
    }
    case 183746:
    {
        returnValue = F("Kehrwedder");
        break;
    }
    case 183747:
    {
        returnValue = F("Kehrweg");
        break;
    }
    case 183748:
    {
        returnValue = F("Kehrweiden");
        break;
    }
    case 183749:
    {
        returnValue = F("Kehrwieder");
        break;
    }
    case 183750:
    {
        returnValue = F("Kehrwiederstr.");
        break;
    }
    case 183751:
    {
        returnValue = F("Kehrwiederwall");
        break;
    }
    case 183752:
    {
        returnValue = F("Kehrwies");
        break;
    }
    case 183753:
    {
        returnValue = F("Kehrwiesen");
        break;
    }
    case 183754:
    {
        returnValue = F("Kehrwinkel");
        break;
    }
    case 183755:
    {
        returnValue = F("Kehrwisching");
        break;
    }
    case 183756:
    {
        returnValue = F("Kehrwischinger Str.");
        break;
    }
    case 183757:
    {
        returnValue = F("Kehrzug");
        break;
    }
    case 183758:
    {
        returnValue = F("Keibelstr.");
        break;
    }
    case 183759:
    {
        returnValue = F("Keibichlstr.");
        break;
    }
    case 183760:
    {
        returnValue = F("Keidelsbruchweg");
        break;
    }
    case 183761:
    {
        returnValue = F("Keidelsweg");
        break;
    }
    case 183762:
    {
        returnValue = F("Keidelweg");
        break;
    }
    case 183763:
    {
        returnValue = F("Keidenzeller Str.");
        break;
    }
    case 183764:
    {
        returnValue = F("Keidenzeller Weg");
        break;
    }
    case 183765:
    {
        returnValue = F("Keidlandweg");
        break;
    }
    case 183766:
    {
        returnValue = F("Keidäckerstr.");
        break;
    }
    case 183767:
    {
        returnValue = F("Keiedeich");
        break;
    }
    case 183768:
    {
        returnValue = F("Keienburgeck");
        break;
    }
    case 183769:
    {
        returnValue = F("Keierpad");
        break;
    }
    case 183770:
    {
        returnValue = F("Keil");
        break;
    }
    case 183771:
    {
        returnValue = F("Keilaer Str.");
        break;
    }
    case 183772:
    {
        returnValue = F("Keilbachstr.");
        break;
    }
    case 183773:
    {
        returnValue = F("Keilbachweg");
        break;
    }
    case 183774:
    {
        returnValue = F("Keilbecker Str.");
        break;
    }
    case 183775:
    {
        returnValue = F("Keilberg");
        break;
    }
    case 183776:
    {
        returnValue = F("Keilberger Hauptstr.");
        break;
    }
    case 183777:
    {
        returnValue = F("Keilberger Schulweg");
        break;
    }
    case 183778:
    {
        returnValue = F("Keilbergstr.");
        break;
    }
    case 183779:
    {
        returnValue = F("Keilbergweg");
        break;
    }
    case 183780:
    {
        returnValue = F("Keilbrunnen");
        break;
    }
    case 183781:
    {
        returnValue = F("Keilbügerlweg");
        break;
    }
    case 183782:
    {
        returnValue = F("Keilbühl");
        break;
    }
    case 183783:
    {
        returnValue = F("Keildamm");
        break;
    }
    case 183784:
    {
        returnValue = F("Keileckenstr.");
        break;
    }
    case 183785:
    {
        returnValue = F("Keilergrund");
        break;
    }
    case 183786:
    {
        returnValue = F("Keilersteig");
        break;
    }
    case 183787:
    {
        returnValue = F("Keilerstr.");
        break;
    }
    case 183788:
    {
        returnValue = F("Keilerweg");
        break;
    }
    case 183789:
    {
        returnValue = F("Keileweg");
        break;
    }
    case 183790:
    {
        returnValue = F("Keilgarten");
        break;
    }
    case 183791:
    {
        returnValue = F("Keilgartenweg");
        break;
    }
    case 183792:
    {
        returnValue = F("Keilgrube");
        break;
    }
    case 183793:
    {
        returnValue = F("Keilhaue");
        break;
    }
    case 183794:
    {
        returnValue = F("Keilhauer Str.");
        break;
    }
    case 183795:
    {
        returnValue = F("Keilhauergasse");
        break;
    }
    case 183796:
    {
        returnValue = F("Keilhoferweg");
        break;
    }
    case 183797:
    {
        returnValue = F("Keilhofgasse");
        break;
    }
    case 183798:
    {
        returnValue = F("Keilhofring");
        break;
    }
    case 183799:
    {
        returnValue = F("Keilkopfstr.");
        break;
    }
    case 183800:
    {
        returnValue = F("Keilmannplatz");
        break;
    }
    case 183801:
    {
        returnValue = F("Keilmannstr.");
        break;
    }
    case 183802:
    {
        returnValue = F("Keiloch");
        break;
    }
    case 183803:
    {
        returnValue = F("Keilrainstr.");
        break;
    }
    case 183804:
    {
        returnValue = F("Keilsbaum");
        break;
    }
    case 183805:
    {
        returnValue = F("Keilsberg");
        break;
    }
    case 183806:
    {
        returnValue = F("Keilsbergstr.");
        break;
    }
    case 183807:
    {
        returnValue = F("Keilsgasse");
        break;
    }
    case 183808:
    {
        returnValue = F("Keilshofweg");
        break;
    }
    case 183809:
    {
        returnValue = F("Keilsteg");
        break;
    }
    case 183810:
    {
        returnValue = F("Keilstein");
        break;
    }
    case 183811:
    {
        returnValue = F("Keilsteiner Breiten");
        break;
    }
    case 183812:
    {
        returnValue = F("Keilsteiner Weg");
        break;
    }
    case 183813:
    {
        returnValue = F("Keilstr.");
        break;
    }
    case 183814:
    {
        returnValue = F("Keiltrift");
        break;
    }
    case 183815:
    {
        returnValue = F("Keilweg");
        break;
    }
    case 183816:
    {
        returnValue = F("Keimelstr.");
        break;
    }
    case 183817:
    {
        returnValue = F("Keimenäckerstr.");
        break;
    }
    case 183818:
    {
        returnValue = F("Keimerstr.");
        break;
    }
    case 183819:
    {
        returnValue = F("Keimersweg");
        break;
    }
    case 183820:
    {
        returnValue = F("Keimesstr.");
        break;
    }
    case 183821:
    {
        returnValue = F("Keimpohlstr.");
        break;
    }
    case 183822:
    {
        returnValue = F("Keimstr.");
        break;
    }
    case 183823:
    {
        returnValue = F("Keindorf");
        break;
    }
    case 183824:
    {
        returnValue = F("Keindorfer Str.");
        break;
    }
    case 183825:
    {
        returnValue = F("Keiperstr.");
        break;
    }
    case 183826:
    {
        returnValue = F("Keiperweg");
        break;
    }
    case 183827:
    {
        returnValue = F("Keirengasse");
        break;
    }
    case 183828:
    {
        returnValue = F("Keiselwitzer Hauptstr.");
        break;
    }
    case 183829:
    {
        returnValue = F("Keiselwitzer Str.");
        break;
    }
    case 183830:
    {
        returnValue = F("Keisershoop");
        break;
    }
    case 183831:
    {
        returnValue = F("Keiserstr.");
        break;
    }
    case 183832:
    {
        returnValue = F("Keissing");
        break;
    }
    case 183833:
    {
        returnValue = F("Keitenthaler Weg");
        break;
    }
    case 183834:
    {
        returnValue = F("Keiterlstr.");
        break;
    }
    case 183835:
    {
        returnValue = F("Keitestr.");
        break;
    }
    case 183836:
    {
        returnValue = F("Keithstr.");
        break;
    }
    case 183837:
    {
        returnValue = F("Keitlinghauser Str.");
        break;
    }
    case 183838:
    {
        returnValue = F("Keitlweg");
        break;
    }
    case 183839:
    {
        returnValue = F("Keitländerstr.");
        break;
    }
    case 183840:
    {
        returnValue = F("Keitumer Chaussee");
        break;
    }
    case 183841:
    {
        returnValue = F("Keitumer Landstr.");
        break;
    }
    case 183842:
    {
        returnValue = F("Keitumer Senwai");
        break;
    }
    case 183843:
    {
        returnValue = F("Keitumer Str.");
        break;
    }
    case 183844:
    {
        returnValue = F("Keitumer Süderstr.");
        break;
    }
    case 183845:
    {
        returnValue = F("Keitumer Weg");
        break;
    }
    case 183846:
    {
        returnValue = F("Keitumweg");
        break;
    }
    case 183847:
    {
        returnValue = F("Keitweg");
        break;
    }
    case 183848:
    {
        returnValue = F("Kekule-Schneise");
        break;
    }
    case 183849:
    {
        returnValue = F("Kekulè Platz");
        break;
    }
    case 183850:
    {
        returnValue = F("Kekuléstr.");
        break;
    }
    case 183851:
    {
        returnValue = F("Kelberger Str.");
        break;
    }
    case 183852:
    {
        returnValue = F("Kelberger Weg");
        break;
    }
    case 183853:
    {
        returnValue = F("Kelbkeweg");
        break;
    }
    case 183854:
    {
        returnValue = F("Kelbraer Str.");
        break;
    }
    case 183855:
    {
        returnValue = F("Kelbshof");
        break;
    }
    case 183856:
    {
        returnValue = F("Kelchbergstr.");
        break;
    }
    case 183857:
    {
        returnValue = F("Kelchsried");
        break;
    }
    case 183858:
    {
        returnValue = F("Kelchstr.");
        break;
    }
    case 183859:
    {
        returnValue = F("Keldenicher Str.");
        break;
    }
    case 183860:
    {
        returnValue = F("Keldenicher Weg");
        break;
    }
    case 183861:
    {
        returnValue = F("Keldersfurt");
        break;
    }
    case 183862:
    {
        returnValue = F("Keldersstr.");
        break;
    }
    case 183863:
    {
        returnValue = F("Keldonk");
        break;
    }
    case 183864:
    {
        returnValue = F("Kelebann");
        break;
    }
    case 183865:
    {
        returnValue = F("Kelheimer Str.");
        break;
    }
    case 183866:
    {
        returnValue = F("Kelheimwinzerstr.");
        break;
    }
    case 183867:
    {
        returnValue = F("Kelhofstr.");
        break;
    }
    case 183868:
    {
        returnValue = F("Kelkelstr.");
        break;
    }
    case 183869:
    {
        returnValue = F("Kelkendorfer Str.");
        break;
    }
    case 183870:
    {
        returnValue = F("Kelkheimer Str.");
        break;
    }
    case 183871:
    {
        returnValue = F("Kelkheimer Weg");
        break;
    }
    case 183872:
    {
        returnValue = F("Kellaer Str.");
        break;
    }
    case 183873:
    {
        returnValue = F("Kellberg");
        break;
    }
    case 183874:
    {
        returnValue = F("Kellbergstr.");
        break;
    }
    case 183875:
    {
        returnValue = F("Kellbergweg");
        break;
    }
    case 183876:
    {
        returnValue = F("Kellelsweg");
        break;
    }
    case 183877:
    {
        returnValue = F("Kellen");
        break;
    }
    case 183878:
    {
        returnValue = F("Kellenbachbrücke");
        break;
    }
    case 183879:
    {
        returnValue = F("Kellenbachsteige");
        break;
    }
    case 183880:
    {
        returnValue = F("Kellenbachstr.");
        break;
    }
    case 183881:
    {
        returnValue = F("Kellenberg");
        break;
    }
    case 183882:
    {
        returnValue = F("Kellenberger Mühle");
        break;
    }
    case 183883:
    {
        returnValue = F("Kellenberger Schulweg");
        break;
    }
    case 183884:
    {
        returnValue = F("Kellenbergstr.");
        break;
    }
    case 183885:
    {
        returnValue = F("Kellenburg");
        break;
    }
    case 183886:
    {
        returnValue = F("Kellendamm");
        break;
    }
    case 183887:
    {
        returnValue = F("Kellenheide");
        break;
    }
    case 183888:
    {
        returnValue = F("Kellenhusener Weg");
        break;
    }
    case 183889:
    {
        returnValue = F("Kellenkrug");
        break;
    }
    case 183890:
    {
        returnValue = F("Kellens Gärten");
        break;
    }
    case 183891:
    {
        returnValue = F("Kellenshof");
        break;
    }
    case 183892:
    {
        returnValue = F("Kellenstr.");
        break;
    }
    case 183893:
    {
        returnValue = F("Kellensward");
        break;
    }
    case 183894:
    {
        returnValue = F("Kellental");
        break;
    }
    case 183895:
    {
        returnValue = F("Keller");
        break;
    }
    case 183896:
    {
        returnValue = F("Keller Hohl");
        break;
    }
    case 183897:
    {
        returnValue = F("Keller Str.");
        break;
    }
    case 183898:
    {
        returnValue = F("Keller-Reutlingen-Str.");
        break;
    }
    case 183899:
    {
        returnValue = F("Keller-Siedlung");
        break;
    }
    case 183900:
    {
        returnValue = F("Kelleracker");
        break;
    }
    case 183901:
    {
        returnValue = F("Kellerackerstr.");
        break;
    }
    case 183902:
    {
        returnValue = F("Kellerbachstr.");
        break;
    }
    case 183903:
    {
        returnValue = F("Kellerbachweg");
        break;
    }
    case 183904:
    {
        returnValue = F("Kellerberg");
        break;
    }
    case 183905:
    {
        returnValue = F("Kellerberge");
        break;
    }
    case 183906:
    {
        returnValue = F("Kellerberger Winzerweg");
        break;
    }
    case 183907:
    {
        returnValue = F("Kellerbergring");
        break;
    }
    case 183908:
    {
        returnValue = F("Kellerbergstr.");
        break;
    }
    case 183909:
    {
        returnValue = F("Kellerbergsweg");
        break;
    }
    case 183910:
    {
        returnValue = F("Kellerbergweg");
        break;
    }
    case 183911:
    {
        returnValue = F("Kellerborn");
        break;
    }
    case 183912:
    {
        returnValue = F("Kellerbornsweg");
        break;
    }
    case 183913:
    {
        returnValue = F("Kellerbrunnen");
        break;
    }
    case 183914:
    {
        returnValue = F("Kellerbuck");
        break;
    }
    case 183915:
    {
        returnValue = F("Kellerbuckstr.");
        break;
    }
    case 183916:
    {
        returnValue = F("Kellerbühlstr.");
        break;
    }
    case 183917:
    {
        returnValue = F("Kellerdamm");
        break;
    }
    case 183918:
    {
        returnValue = F("Kellereck");
        break;
    }
    case 183919:
    {
        returnValue = F("Kellerei");
        break;
    }
    case 183920:
    {
        returnValue = F("Kellereigasse");
        break;
    }
    case 183921:
    {
        returnValue = F("Kellereiplatz");
        break;
    }
    case 183922:
    {
        returnValue = F("Kellereistr.");
        break;
    }
    case 183923:
    {
        returnValue = F("Kellereiwaldstr.");
        break;
    }
    case 183924:
    {
        returnValue = F("Kellereiweg");
        break;
    }
    case 183925:
    {
        returnValue = F("Kellereiwiesenstr.");
        break;
    }
    case 183926:
    {
        returnValue = F("Kellererberg");
        break;
    }
    case 183927:
    {
        returnValue = F("Kellererstr.");
        break;
    }
    case 183928:
    {
        returnValue = F("Kellererweg");
        break;
    }
    case 183929:
    {
        returnValue = F("Kellerfeld");
        break;
    }
    case 183930:
    {
        returnValue = F("Kellerfeldstr.");
        break;
    }
    case 183931:
    {
        returnValue = F("Kellerfestplatz");
        break;
    }
    case 183932:
    {
        returnValue = F("Kellergarten");
        break;
    }
    case 183933:
    {
        returnValue = F("Kellergartenstr.");
        break;
    }
    case 183934:
    {
        returnValue = F("Kellergasse");
        break;
    }
    case 183935:
    {
        returnValue = F("Kellergrundweg");
        break;
    }
    case 183936:
    {
        returnValue = F("Kellergärten");
        break;
    }
    case 183937:
    {
        returnValue = F("Kellergässchen");
        break;
    }
    case 183938:
    {
        returnValue = F("Kellerhalsstr.");
        break;
    }
    case 183939:
    {
        returnValue = F("Kellerhalsweg");
        break;
    }
    case 183940:
    {
        returnValue = F("Kellerhangweg");
        break;
    }
    case 183941:
    {
        returnValue = F("Kellerhardtsweg");
        break;
    }
    case 183942:
    {
        returnValue = F("Kellerhaus");
        break;
    }
    case 183943:
    {
        returnValue = F("Kellerhausstr.");
        break;
    }
    case 183944:
    {
        returnValue = F("Kellerhausweg");
        break;
    }
    case 183945:
    {
        returnValue = F("Kellerheidenweg");
        break;
    }
    case 183946:
    {
        returnValue = F("Kellerheisstr.");
        break;
    }
    case 183947:
    {
        returnValue = F("Kellerhof");
        break;
    }
    case 183948:
    {
        returnValue = F("Kellerhoffstr.");
        break;
    }
    case 183949:
    {
        returnValue = F("Kellerhofrütteweg");
        break;
    }
    case 183950:
    {
        returnValue = F("Kellerhofstr.");
        break;
    }
    case 183951:
    {
        returnValue = F("Kellerholz");
        break;
    }
    case 183952:
    {
        returnValue = F("Kellerholzweg");
        break;
    }
    case 183953:
    {
        returnValue = F("Kellerhäuschen");
        break;
    }
    case 183954:
    {
        returnValue = F("Kellerhäusl");
        break;
    }
    case 183955:
    {
        returnValue = F("Kellerhäuslweg");
        break;
    }
    case 183956:
    {
        returnValue = F("Kellerhöher Str.");
        break;
    }
    case 183957:
    {
        returnValue = F("Kellerkamp");
        break;
    }
    case 183958:
    {
        returnValue = F("Kellerkate");
        break;
    }
    case 183959:
    {
        returnValue = F("Kellerkuhle");
        break;
    }
    case 183960:
    {
        returnValue = F("Kellerlandstr.");
        break;
    }
    case 183961:
    {
        returnValue = F("Kellerleitensteig");
        break;
    }
    case 183962:
    {
        returnValue = F("Kellerlesweg");
        break;
    }
    case 183963:
    {
        returnValue = F("Kellerlochallee");
        break;
    }
    case 183964:
    {
        returnValue = F("Kellermannstr.");
        break;
    }
    case 183965:
    {
        returnValue = F("Kellermannsweg");
        break;
    }
    case 183966:
    {
        returnValue = F("Kellermatten");
        break;
    }
    case 183967:
    {
        returnValue = F("Kellermeyerweg");
        break;
    }
    case 183968:
    {
        returnValue = F("Kellerort");
        break;
    }
    case 183969:
    {
        returnValue = F("Kellerpfad");
        break;
    }
    case 183970:
    {
        returnValue = F("Kellerplatz");
        break;
    }
    case 183971:
    {
        returnValue = F("Kellerrehm");
        break;
    }
    case 183972:
    {
        returnValue = F("Kellers Kamp");
        break;
    }
    case 183973:
    {
        returnValue = F("Kellers Ziegelei");
        break;
    }
    case 183974:
    {
        returnValue = F("Kellersberger Gracht");
        break;
    }
    case 183975:
    {
        returnValue = F("Kellersberger Hof");
        break;
    }
    case 183976:
    {
        returnValue = F("Kellersberger Str.");
        break;
    }
    case 183977:
    {
        returnValue = F("Kellersbergweg");
        break;
    }
    case 183978:
    {
        returnValue = F("Kellersbildweg");
        break;
    }
    case 183979:
    {
        returnValue = F("Kellersboserother Str.");
        break;
    }
    case 183980:
    {
        returnValue = F("Kellersbrunnenweg");
        break;
    }
    case 183981:
    {
        returnValue = F("Kellersbungert");
        break;
    }
    case 183982:
    {
        returnValue = F("Kellersche Str.");
        break;
    }
    case 183983:
    {
        returnValue = F("Kellersdiek");
        break;
    }
    case 183984:
    {
        returnValue = F("Kellerseepromenade");
        break;
    }
    case 183985:
    {
        returnValue = F("Kellerseestr.");
        break;
    }
    case 183986:
    {
        returnValue = F("Kellerseifen");
        break;
    }
    case 183987:
    {
        returnValue = F("Kellersfeld");
        break;
    }
    case 183988:
    {
        returnValue = F("Kellersgarten");
        break;
    }
    case 183989:
    {
        returnValue = F("Kellersgartenstr.");
        break;
    }
    case 183990:
    {
        returnValue = F("Kellersgraben");
        break;
    }
    case 183991:
    {
        returnValue = F("Kellersgrubenweg");
        break;
    }
    case 183992:
    {
        returnValue = F("Kellersgrund");
        break;
    }
    case 183993:
    {
        returnValue = F("Kellersgärten");
        break;
    }
    case 183994:
    {
        returnValue = F("Kellershain");
        break;
    }
    case 183995:
    {
        returnValue = F("Kellershammer");
        break;
    }
    case 183996:
    {
        returnValue = F("Kellersheck");
        break;
    }
    case 183997:
    {
        returnValue = F("Kellershof");
        break;
    }
    case 183998:
    {
        returnValue = F("Kellershohl");
        break;
    }
    case 183999:
    {
        returnValue = F("Kellershub");
        break;
    }
    case 184000:
    {
        returnValue = F("Kellershuber Weg");
        break;
    }
    case 184001:
    {
        returnValue = F("Kellersiepenweg");
        break;
    }
    case 184002:
    {
        returnValue = F("Kellerskamp");
        break;
    }
    case 184003:
    {
        returnValue = F("Kellerskathweg");
        break;
    }
    case 184004:
    {
        returnValue = F("Kellerskopfstr.");
        break;
    }
    case 184005:
    {
        returnValue = F("Kellerskopfweg");
        break;
    }
    case 184006:
    {
        returnValue = F("Kellersrain");
        break;
    }
    case 184007:
    {
        returnValue = F("Kellersteig");
        break;
    }
    case 184008:
    {
        returnValue = F("Kellersteige");
        break;
    }
    case 184009:
    {
        returnValue = F("Kellerstr.");
        break;
    }
    case 184010:
    {
        returnValue = F("Kellerstück");
        break;
    }
    case 184011:
    {
        returnValue = F("Kellersweg");
        break;
    }
    case 184012:
    {
        returnValue = F("Kellersweiden");
        break;
    }
    case 184013:
    {
        returnValue = F("Kellerswiese");
        break;
    }
    case 184014:
    {
        returnValue = F("Kellerswiesen");
        break;
    }
    case 184015:
    {
        returnValue = F("Kellerswiesenweg");
        break;
    }
    case 184016:
    {
        returnValue = F("Kellersäcker");
        break;
    }
    case 184017:
    {
        returnValue = F("Kellertorbrücke");
        break;
    }
    case 184018:
    {
        returnValue = F("Kellerwaldstr.");
        break;
    }
    case 184019:
    {
        returnValue = F("Kellerwaldsträßle");
        break;
    }
    case 184020:
    {
        returnValue = F("Kellerwaldweg");
        break;
    }
    case 184021:
    {
        returnValue = F("Kellerweg");
        break;
    }
    case 184022:
    {
        returnValue = F("Kellerwiese");
        break;
    }
    case 184023:
    {
        returnValue = F("Kellerwiesen");
        break;
    }
    case 184024:
    {
        returnValue = F("Kellerwiesenschneise");
        break;
    }
    case 184025:
    {
        returnValue = F("Kellerwiesenweg");
        break;
    }
    case 184026:
    {
        returnValue = F("Kellerwiesstr.");
        break;
    }
    case 184027:
    {
        returnValue = F("Kelleräcker");
        break;
    }
    case 184028:
    {
        returnValue = F("Kelleterstr.");
        break;
    }
    case 184029:
    {
        returnValue = F("Kelleweg");
        break;
    }
    case 184030:
    {
        returnValue = F("Kellhof");
        break;
    }
    case 184031:
    {
        returnValue = F("Kellhofplatz");
        break;
    }
    case 184032:
    {
        returnValue = F("Kellhofstr.");
        break;
    }
    case 184033:
    {
        returnValue = F("Kellhofweg");
        break;
    }
    case 184034:
    {
        returnValue = F("Kellhöhle");
        break;
    }
    case 184035:
    {
        returnValue = F("Kellinger Str.");
        break;
    }
    case 184036:
    {
        returnValue = F("Kellinghausen");
        break;
    }
    case 184037:
    {
        returnValue = F("Kellinghauser Str.");
        break;
    }
    case 184038:
    {
        returnValue = F("Kellinghusener Chaussee");
        break;
    }
    case 184039:
    {
        returnValue = F("Kellinghusener Str.");
        break;
    }
    case 184040:
    {
        returnValue = F("Kellinghusener Weg");
        break;
    }
    case 184041:
    {
        returnValue = F("Kellings Gang");
        break;
    }
    case 184042:
    {
        returnValue = F("Kellingwold");
        break;
    }
    case 184043:
    {
        returnValue = F("Kellmarkstr.");
        break;
    }
    case 184044:
    {
        returnValue = F("Kellmerweg");
        break;
    }
    case 184045:
    {
        returnValue = F("Kellmetsch Weg");
        break;
    }
    case 184046:
    {
        returnValue = F("Kellmünzer Str.");
        break;
    }
    case 184047:
    {
        returnValue = F("Kellnauweg");
        break;
    }
    case 184048:
    {
        returnValue = F("Kellner Brücke");
        break;
    }
    case 184049:
    {
        returnValue = F("Kellnergasse");
        break;
    }
    case 184050:
    {
        returnValue = F("Kellners Tannen");
        break;
    }
    case 184051:
    {
        returnValue = F("Kellnersbergstr.");
        break;
    }
    case 184052:
    {
        returnValue = F("Kellnerstr.");
        break;
    }
    case 184053:
    {
        returnValue = F("Kellnerweg");
        break;
    }
    case 184054:
    {
        returnValue = F("Kellriesenstr.");
        break;
    }
    case 184055:
    {
        returnValue = F("Kellstr.");
        break;
    }
    case 184056:
    {
        returnValue = F("Kelltergasse");
        break;
    }
    case 184057:
    {
        returnValue = F("Kellweg");
        break;
    }
    case 184058:
    {
        returnValue = F("Kelmenstr.");
        break;
    }
    case 184059:
    {
        returnValue = F("Kelmesbergweg");
        break;
    }
    case 184060:
    {
        returnValue = F("Kelmhof");
        break;
    }
    case 184061:
    {
        returnValue = F("Kelmiser Str.");
        break;
    }
    case 184062:
    {
        returnValue = F("Kelmstr.");
        break;
    }
    case 184063:
    {
        returnValue = F("Kelnhofplatz");
        break;
    }
    case 184064:
    {
        returnValue = F("Kelnhofweg");
        break;
    }
    case 184065:
    {
        returnValue = F("Kelsenberg");
        break;
    }
    case 184066:
    {
        returnValue = F("Kelsitstr.");
        break;
    }
    case 184067:
    {
        returnValue = F("Kelsstr.");
        break;
    }
    case 184068:
    {
        returnValue = F("Kelsterbacher Str.");
        break;
    }
    case 184069:
    {
        returnValue = F("Kelsterbacher Weg");
        break;
    }
    case 184070:
    {
        returnValue = F("Kelten-Kreisel");
        break;
    }
    case 184071:
    {
        returnValue = F("Keltenbergstr.");
        break;
    }
    case 184072:
    {
        returnValue = F("Keltenburgstr.");
        break;
    }
    case 184073:
    {
        returnValue = F("Keltendorf Gabreta");
        break;
    }
    case 184074:
    {
        returnValue = F("Keltengasse");
        break;
    }
    case 184075:
    {
        returnValue = F("Keltengrund");
        break;
    }
    case 184076:
    {
        returnValue = F("Keltengräberstr.");
        break;
    }
    case 184077:
    {
        returnValue = F("Keltenhof");
        break;
    }
    case 184078:
    {
        returnValue = F("Keltenhöhe");
        break;
    }
    case 184079:
    {
        returnValue = F("Keltenpark");
        break;
    }
    case 184080:
    {
        returnValue = F("Keltenpfad");
        break;
    }
    case 184081:
    {
        returnValue = F("Keltenplatz");
        break;
    }
    case 184082:
    {
        returnValue = F("Keltenradweg");
        break;
    }
    case 184083:
    {
        returnValue = F("Keltenrechstr.");
        break;
    }
    case 184084:
    {
        returnValue = F("Keltenring");
        break;
    }
    case 184085:
    {
        returnValue = F("Keltenschanze");
        break;
    }
    case 184086:
    {
        returnValue = F("Keltenschanzstr.");
        break;
    }
    case 184087:
    {
        returnValue = F("Keltenschanzweg");
        break;
    }
    case 184088:
    {
        returnValue = F("Keltensteig");
        break;
    }
    case 184089:
    {
        returnValue = F("Keltensteige");
        break;
    }
    case 184090:
    {
        returnValue = F("Keltensteinstr.");
        break;
    }
    case 184091:
    {
        returnValue = F("Keltenstiege");
        break;
    }
    case 184092:
    {
        returnValue = F("Keltenstr.");
        break;
    }
    case 184093:
    {
        returnValue = F("Keltenweg");
        break;
    }
    case 184094:
    {
        returnValue = F("Keltenweg (Ipf)");
        break;
    }
    case 184095:
    {
        returnValue = F("Keltenwegle");
        break;
    }
    case 184096:
    {
        returnValue = F("Kelter");
        break;
    }
    case 184097:
    {
        returnValue = F("Kelterackerweg");
        break;
    }
    case 184098:
    {
        returnValue = F("Kelterbaum");
        break;
    }
    case 184099:
    {
        returnValue = F("Kelterbaumgäßle");
        break;
    }
    case 184100:
    {
        returnValue = F("Kelterberg");
        break;
    }
    case 184101:
    {
        returnValue = F("Kelterbergstr.");
        break;
    }
    case 184102:
    {
        returnValue = F("Kelterbornstr.");
        break;
    }
    case 184103:
    {
        returnValue = F("Kelterbrücke");
        break;
    }
    case 184104:
    {
        returnValue = F("Kelterbuckel");
        break;
    }
    case 184105:
    {
        returnValue = F("Kelterdell");
        break;
    }
    case 184106:
    {
        returnValue = F("Keltereistr.");
        break;
    }
    case 184107:
    {
        returnValue = F("Keltergasse");
        break;
    }
    case 184108:
    {
        returnValue = F("Keltergärten");
        break;
    }
    case 184109:
    {
        returnValue = F("Keltergässle");
        break;
    }
    case 184110:
    {
        returnValue = F("Kelterhalde");
        break;
    }
    case 184111:
    {
        returnValue = F("Kelterhausstr.");
        break;
    }
    case 184112:
    {
        returnValue = F("Kelternplatz");
        break;
    }
    case 184113:
    {
        returnValue = F("Kelternstr.");
        break;
    }
    case 184114:
    {
        returnValue = F("Kelterplatz");
        break;
    }
    case 184115:
    {
        returnValue = F("Kelterrain");
        break;
    }
    case 184116:
    {
        returnValue = F("Kelterrainstr.");
        break;
    }
    case 184117:
    {
        returnValue = F("Kelterring");
        break;
    }
    case 184118:
    {
        returnValue = F("Keltersbergstr.");
        break;
    }
    case 184119:
    {
        returnValue = F("Kelterser Str.");
        break;
    }
    case 184120:
    {
        returnValue = F("Keltershäuserhof");
        break;
    }
    case 184121:
    {
        returnValue = F("Kelterstr.");
        break;
    }
    case 184122:
    {
        returnValue = F("Keltersweg");
        break;
    }
    case 184123:
    {
        returnValue = F("Keltertal");
        break;
    }
    case 184124:
    {
        returnValue = F("Kelterwasenstr.");
        break;
    }
    case 184125:
    {
        returnValue = F("Kelterweg");
        break;
    }
    case 184126:
    {
        returnValue = F("Kelterweinberge");
        break;
    }
    case 184127:
    {
        returnValue = F("Kelterweinbergweg");
        break;
    }
    case 184128:
    {
        returnValue = F("Kelterwiese");
        break;
    }
    case 184129:
    {
        returnValue = F("Kelterwiesen");
        break;
    }
    case 184130:
    {
        returnValue = F("Kelterwiesenweg");
        break;
    }
    case 184131:
    {
        returnValue = F("Kelteräcker");
        break;
    }
    case 184132:
    {
        returnValue = F("Kelteräckerstr.");
        break;
    }
    case 184133:
    {
        returnValue = F("Kelteräckerweg");
        break;
    }
    case 184134:
    {
        returnValue = F("Keltingstr.");
        break;
    }
    case 184135:
    {
        returnValue = F("Keltrisstr.");
        break;
    }
    case 184136:
    {
        returnValue = F("Keltschstr.");
        break;
    }
    case 184137:
    {
        returnValue = F("Kelvinstr.");
        break;
    }
    case 184138:
    {
        returnValue = F("Kelwerbach");
        break;
    }
    case 184139:
    {
        returnValue = F("Kelwerweg");
        break;
    }
    case 184140:
    {
        returnValue = F("Kelzberg");
        break;
    }
    case 184141:
    {
        returnValue = F("Kelzenberger Str.");
        break;
    }
    case 184142:
    {
        returnValue = F("Kelzenberger Weg");
        break;
    }
    case 184143:
    {
        returnValue = F("Kelzer Bach");
        break;
    }
    case 184144:
    {
        returnValue = F("Kelzer Berg");
        break;
    }
    case 184145:
    {
        returnValue = F("Kelzer Busch");
        break;
    }
    case 184146:
    {
        returnValue = F("Kelzer Ring");
        break;
    }
    case 184147:
    {
        returnValue = F("Kelzer Weg");
        break;
    }
    case 184148:
    {
        returnValue = F("Kelzstr.");
        break;
    }
    case 184149:
    {
        returnValue = F("Kematinger Str.");
        break;
    }
    case 184150:
    {
        returnValue = F("Kembacher Str.");
        break;
    }
    case 184151:
    {
        returnValue = F("Kembachstr.");
        break;
    }
    case 184152:
    {
        returnValue = F("Kembachtalstr.");
        break;
    }
    case 184153:
    {
        returnValue = F("Kembachweg");
        break;
    }
    case 184154:
    {
        returnValue = F("Kemberger Str.");
        break;
    }
    case 184155:
    {
        returnValue = F("Kembs");
        break;
    }
    case 184156:
    {
        returnValue = F("Kemel");
        break;
    }
    case 184157:
    {
        returnValue = F("Kemelathenweg");
        break;
    }
    case 184158:
    {
        returnValue = F("Kemeler Weg");
        break;
    }
    case 184159:
    {
        returnValue = F("Kemenat");
        break;
    }
    case 184160:
    {
        returnValue = F("Kemenate");
        break;
    }
    case 184161:
    {
        returnValue = F("Kemenatenweg");
        break;
    }
    case 184162:
    {
        returnValue = F("Kemenaterberg");
        break;
    }
    case 184163:
    {
        returnValue = F("Kemerting");
        break;
    }
    case 184164:
    {
        returnValue = F("Kemetenstr.");
        break;
    }
    case 184165:
    {
        returnValue = F("Kemeterstr.");
        break;
    }
    case 184166:
    {
        returnValue = F("Kemetshof");
        break;
    }
    case 184167:
    {
        returnValue = F("Kemitzenweg");
        break;
    }
    case 184168:
    {
        returnValue = F("Kemken");
        break;
    }
    case 184169:
    {
        returnValue = F("Kemkesweg");
        break;
    }
    case 184170:
    {
        returnValue = F("Kemlitz-Alter Weg");
        break;
    }
    case 184171:
    {
        returnValue = F("Kemlitz-Am Gut");
        break;
    }
    case 184172:
    {
        returnValue = F("Kemlitz-Dorfweg");
        break;
    }
    case 184173:
    {
        returnValue = F("Kemlitz-Neue Chaussee");
        break;
    }
    case 184174:
    {
        returnValue = F("Kemlitz-Str. des Friedens");
        break;
    }
    case 184175:
    {
        returnValue = F("Kemlitz-Wildauer Weg");
        break;
    }
    case 184176:
    {
        returnValue = F("Kemlitz-Wüstermarker Weg");
        break;
    }
    case 184177:
    {
        returnValue = F("Kemlitz-Zur Springe");
        break;
    }
    case 184178:
    {
        returnValue = F("Kemlitzer Hauptstr.");
        break;
    }
    case 184179:
    {
        returnValue = F("Kemlitzer Str.");
        break;
    }
    case 184180:
    {
        returnValue = F("Kemmannstr.");
        break;
    }
    case 184181:
    {
        returnValue = F("Kemmansdiek");
        break;
    }
    case 184182:
    {
        returnValue = F("Kemmater Str.");
        break;
    }
    case 184183:
    {
        returnValue = F("Kemmater Weg");
        break;
    }
    case 184184:
    {
        returnValue = F("Kemmathen");
        break;
    }
    case 184185:
    {
        returnValue = F("Kemmecken");
        break;
    }
    case 184186:
    {
        returnValue = F("Kemmelweg");
        break;
    }
    case 184187:
    {
        returnValue = F("Kemmenau");
        break;
    }
    case 184188:
    {
        returnValue = F("Kemmenauer Str.");
        break;
    }
    case 184189:
    {
        returnValue = F("Kemmer Str.");
        break;
    }
    case 184190:
    {
        returnValue = F("Kemmerer Weg");
        break;
    }
    case 184191:
    {
        returnValue = F("Kemmerhofstr.");
        break;
    }
    case 184192:
    {
        returnValue = F("Kemmerich");
        break;
    }
    case 184193:
    {
        returnValue = F("Kemmerlang");
        break;
    }
    case 184194:
    {
        returnValue = F("Kemmerlanger Str.");
        break;
    }
    case 184195:
    {
        returnValue = F("Kemmerlingstr.");
        break;
    }
    case 184196:
    {
        returnValue = F("Kemmerner Weg");
        break;
    }
    case 184197:
    {
        returnValue = F("Kemmerstr.");
        break;
    }
    case 184198:
    {
        returnValue = F("Kemmertsbuschweg");
        break;
    }
    case 184199:
    {
        returnValue = F("Kemmertsgasse");
        break;
    }
    case 184200:
    {
        returnValue = F("Kemmertstr.");
        break;
    }
    case 184201:
    {
        returnValue = F("Kemmerweg");
        break;
    }
    case 184202:
    {
        returnValue = F("Kemmeröder Str.");
        break;
    }
    case 184203:
    {
        returnValue = F("Kemmestr.");
        break;
    }
    case 184204:
    {
        returnValue = F("Kemmetegrundweg");
        break;
    }
    case 184205:
    {
        returnValue = F("Kemmeter Strässle");
        break;
    }
    case 184206:
    {
        returnValue = F("Kemmeter Weg");
        break;
    }
    case 184207:
    {
        returnValue = F("Kemmetweg");
        break;
    }
    case 184208:
    {
        returnValue = F("Kemmingstr.");
        break;
    }
    case 184209:
    {
        returnValue = F("Kemmlerblick");
        break;
    }
    case 184210:
    {
        returnValue = F("Kemmlerstr.");
        break;
    }
    case 184211:
    {
        returnValue = F("Kemna");
        break;
    }
    case 184212:
    {
        returnValue = F("Kemnade");
        break;
    }
    case 184213:
    {
        returnValue = F("Kemnadenstr.");
        break;
    }
    case 184214:
    {
        returnValue = F("Kemnader Feld");
        break;
    }
    case 184215:
    {
        returnValue = F("Kemnader Str.");
        break;
    }
    case 184216:
    {
        returnValue = F("Kemnadestr.");
        break;
    }
    case 184217:
    {
        returnValue = F("Kemnastr.");
        break;
    }
    case 184218:
    {
        returnValue = F("Kemnater Str.");
        break;
    }
    case 184219:
    {
        returnValue = F("Kemnater Weg");
        break;
    }
    case 184220:
    {
        returnValue = F("Kemnath am Buchberg");
        break;
    }
    case 184221:
    {
        returnValue = F("Kemnath bei Fuhrn");
        break;
    }
    case 184222:
    {
        returnValue = F("Kemnathen");
        break;
    }
    case 184223:
    {
        returnValue = F("Kemnather Str.");
        break;
    }
    case 184224:
    {
        returnValue = F("Kemnather Weg");
        break;
    }
    case 184225:
    {
        returnValue = F("Kemnitz-Meierei");
        break;
    }
    case 184226:
    {
        returnValue = F("Kemnitzer Chaussee");
        break;
    }
    case 184227:
    {
        returnValue = F("Kemnitzer Dorfstr.");
        break;
    }
    case 184228:
    {
        returnValue = F("Kemnitzer Feldstr.");
        break;
    }
    case 184229:
    {
        returnValue = F("Kemnitzer Hauptstr.");
        break;
    }
    case 184230:
    {
        returnValue = F("Kemnitzer Heide");
        break;
    }
    case 184231:
    {
        returnValue = F("Kemnitzer Landstr.");
        break;
    }
    case 184232:
    {
        returnValue = F("Kemnitzer Schmiedeweg");
        break;
    }
    case 184233:
    {
        returnValue = F("Kemnitzer Str.");
        break;
    }
    case 184234:
    {
        returnValue = F("Kemnitzer Waldstr.");
        break;
    }
    case 184235:
    {
        returnValue = F("Kemnitzer Weg");
        break;
    }
    case 184236:
    {
        returnValue = F("Kemnitzer Wende");
        break;
    }
    case 184237:
    {
        returnValue = F("Kemnitzerhagen");
        break;
    }
    case 184238:
    {
        returnValue = F("Kemnitzerhäger Str.");
        break;
    }
    case 184239:
    {
        returnValue = F("Kemnotstr.");
        break;
    }
    case 184240:
    {
        returnValue = F("Kemodener Str.");
        break;
    }
    case 184241:
    {
        returnValue = F("Kempelbergstr.");
        break;
    }
    case 184242:
    {
        returnValue = F("Kempelstr.");
        break;
    }
    case 184243:
    {
        returnValue = F("Kempen");
        break;
    }
    case 184244:
    {
        returnValue = F("Kempener Allee");
        break;
    }
    case 184245:
    {
        returnValue = F("Kempener Außenring");
        break;
    }
    case 184246:
    {
        returnValue = F("Kempener Dyk");
        break;
    }
    case 184247:
    {
        returnValue = F("Kempener Landstr.");
        break;
    }
    case 184248:
    {
        returnValue = F("Kempener Ring");
        break;
    }
    case 184249:
    {
        returnValue = F("Kempener Str.");
        break;
    }
    case 184250:
    {
        returnValue = F("Kempener Weg");
        break;
    }
    case 184251:
    {
        returnValue = F("Kempenicher Str.");
        break;
    }
    case 184252:
    {
        returnValue = F("Kempensiefen");
        break;
    }
    case 184253:
    {
        returnValue = F("Kempenstr.");
        break;
    }
    case 184254:
    {
        returnValue = F("Kempenweg");
        break;
    }
    case 184255:
    {
        returnValue = F("Kemper Steg");
        break;
    }
    case 184256:
    {
        returnValue = F("Kemper Weg");
        break;
    }
    case 184257:
    {
        returnValue = F("Kemperallee");
        break;
    }
    case 184258:
    {
        returnValue = F("Kemperdick");
        break;
    }
    case 184259:
    {
        returnValue = F("Kemperfeld");
        break;
    }
    case 184260:
    {
        returnValue = F("Kempergraben");
        break;
    }
    case 184261:
    {
        returnValue = F("Kemperhofweg");
        break;
    }
    case 184262:
    {
        returnValue = F("Kemperlandweg");
        break;
    }
    case 184263:
    {
        returnValue = F("Kempers Häuschen");
        break;
    }
    case 184264:
    {
        returnValue = F("Kempers Kamp");
        break;
    }
    case 184265:
    {
        returnValue = F("Kempershäuschen");
        break;
    }
    case 184266:
    {
        returnValue = F("Kempershöher Str.");
        break;
    }
    case 184267:
    {
        returnValue = F("Kemperstr.");
        break;
    }
    case 184268:
    {
        returnValue = F("Kemperswieske");
        break;
    }
    case 184269:
    {
        returnValue = F("Kemperweg");
        break;
    }
    case 184270:
    {
        returnValue = F("Kempestr.");
        break;
    }
    case 184271:
    {
        returnValue = F("Kempfegässle");
        break;
    }
    case 184272:
    {
        returnValue = F("Kempfelder Str.");
        break;
    }
    case 184273:
    {
        returnValue = F("Kempfelder Weg");
        break;
    }
    case 184274:
    {
        returnValue = F("Kempfengasse");
        break;
    }
    case 184275:
    {
        returnValue = F("Kempfenhofer Weg");
        break;
    }
    case 184276:
    {
        returnValue = F("Kempfenrainweg");
        break;
    }
    case 184277:
    {
        returnValue = F("Kempfstr.");
        break;
    }
    case 184278:
    {
        returnValue = F("Kemphausen");
        break;
    }
    case 184279:
    {
        returnValue = F("Kempishofstr.");
        break;
    }
    case 184280:
    {
        returnValue = F("Kempkenstr.");
        break;
    }
    case 184281:
    {
        returnValue = F("Kempkensweg");
        break;
    }
    case 184282:
    {
        returnValue = F("Kempkesstege");
        break;
    }
    case 184283:
    {
        returnValue = F("Kempkesweg");
        break;
    }
    case 184284:
    {
        returnValue = F("Kemplingsweg");
        break;
    }
    case 184285:
    {
        returnValue = F("Kempowski-Ufer");
        break;
    }
    case 184286:
    {
        returnValue = F("Kempstr.");
        break;
    }
    case 184287:
    {
        returnValue = F("Kempsweg");
        break;
    }
    case 184288:
    {
        returnValue = F("Kemptener Str.");
        break;
    }
    case 184289:
    {
        returnValue = F("Kemptener Tor");
        break;
    }
    case 184290:
    {
        returnValue = F("Kemptener Weg");
        break;
    }
    case 184291:
    {
        returnValue = F("Kemptener-Wald-Str.");
        break;
    }
    case 184292:
    {
        returnValue = F("Kempter Hohl");
        break;
    }
    case 184293:
    {
        returnValue = F("Kempter Lies");
        break;
    }
    case 184294:
    {
        returnValue = F("Kempter Str.");
        break;
    }
    case 184295:
    {
        returnValue = F("Kempter Weg");
        break;
    }
    case 184296:
    {
        returnValue = F("Kempter-Wald-Str.");
        break;
    }
    case 184297:
    {
        returnValue = F("Kempterholzweg");
        break;
    }
    case 184298:
    {
        returnValue = F("Kempterstr.");
        break;
    }
    case 184299:
    {
        returnValue = F("Kempterweg");
        break;
    }
    case 184300:
    {
        returnValue = F("Kemptner Str.");
        break;
    }
    case 184301:
    {
        returnValue = F("Kemptner Weg");
        break;
    }
    case 184302:
    {
        returnValue = F("Kempweg");
        break;
    }
    case 184303:
    {
        returnValue = F("Kemsstr.");
        break;
    }
    case 184304:
    {
        returnValue = F("Kemtauer Str.");
        break;
    }
    case 184305:
    {
        returnValue = F("Kemtauer Weg");
        break;
    }
    case 184306:
    {
        returnValue = F("Kendalstr.");
        break;
    }
    case 184307:
    {
        returnValue = F("Kendel");
        break;
    }
    case 184308:
    {
        returnValue = F("Kendelgasse");
        break;
    }
    case 184309:
    {
        returnValue = F("Kendelstr.");
        break;
    }
    case 184310:
    {
        returnValue = F("Kendelweg");
        break;
    }
    case 184311:
    {
        returnValue = F("Kendenicher Str.");
        break;
    }
    case 184312:
    {
        returnValue = F("Kendlinger Brücke");
        break;
    }
    case 184313:
    {
        returnValue = F("Kendlmühle");
        break;
    }
    case 184314:
    {
        returnValue = F("Kenenstr.");
        break;
    }
    case 184315:
    {
        returnValue = F("Kenerwiesenweg");
        break;
    }
    case 184316:
    {
        returnValue = F("Keneser Str.");
        break;
    }
    case 184317:
    {
        returnValue = F("Keneser Tor");
        break;
    }
    case 184318:
    {
        returnValue = F("Kengelweg");
        break;
    }
    case 184319:
    {
        returnValue = F("Kengen");
        break;
    }
    case 184320:
    {
        returnValue = F("Kenger Weg");
        break;
    }
    case 184321:
    {
        returnValue = F("Kenkhausen");
        break;
    }
    case 184322:
    {
        returnValue = F("Kenkhauser Str.");
        break;
    }
    case 184323:
    {
        returnValue = F("Kennedy Weg");
        break;
    }
    case 184324:
    {
        returnValue = F("Kennedy-Platz");
        break;
    }
    case 184325:
    {
        returnValue = F("Kennedyallee");
        break;
    }
    case 184326:
    {
        returnValue = F("Kennedydamm");
        break;
    }
    case 184327:
    {
        returnValue = F("Kennedygasse");
        break;
    }
    case 184328:
    {
        returnValue = F("Kennedypark");
        break;
    }
    case 184329:
    {
        returnValue = F("Kennedyplatz");
        break;
    }
    case 184330:
    {
        returnValue = F("Kennedystr.");
        break;
    }
    case 184331:
    {
        returnValue = F("Kennelstr.");
        break;
    }
    case 184332:
    {
        returnValue = F("Kennelweg");
        break;
    }
    case 184333:
    {
        returnValue = F("Kennelwiese");
        break;
    }
    case 184334:
    {
        returnValue = F("Kennenburger Str.");
        break;
    }
    case 184335:
    {
        returnValue = F("Kennensteige");
        break;
    }
    case 184336:
    {
        returnValue = F("Kennepohlweg");
        break;
    }
    case 184337:
    {
        returnValue = F("Kenner Pfad");
        break;
    }
    case 184338:
    {
        returnValue = F("Kenner Wasserwerk");
        break;
    }
    case 184339:
    {
        returnValue = F("Kenner Weg");
        break;
    }
    case 184340:
    {
        returnValue = F("Kennerweg");
        break;
    }
    case 184341:
    {
        returnValue = F("Kennmoorweg");
        break;
    }
    case 184342:
    {
        returnValue = F("Kennscheider Weg");
        break;
    }
    case 184343:
    {
        returnValue = F("Kennweg");
        break;
    }
    case 184344:
    {
        returnValue = F("Kennwerweg");
        break;
    }
    case 184345:
    {
        returnValue = F("Keno-Tom-Brook-Str.");
        break;
    }
    case 184346:
    {
        returnValue = F("Keno-tom-Brok-Str.");
        break;
    }
    case 184347:
    {
        returnValue = F("Keno-tom-Brook-Str.");
        break;
    }
    case 184348:
    {
        returnValue = F("Kenoweg");
        break;
    }
    case 184349:
    {
        returnValue = F("Kent Ride");
        break;
    }
    case 184350:
    {
        returnValue = F("Kentelsgasse");
        break;
    }
    case 184351:
    {
        returnValue = F("Kentener Fuchshecke");
        break;
    }
    case 184352:
    {
        returnValue = F("Kentener Heide");
        break;
    }
    case 184353:
    {
        returnValue = F("Kentener Weg");
        break;
    }
    case 184354:
    {
        returnValue = F("Kentener Wiesen");
        break;
    }
    case 184355:
    {
        returnValue = F("Kentenichstr.");
        break;
    }
    case 184356:
    {
        returnValue = F("Kentenstr.");
        break;
    }
    case 184357:
    {
        returnValue = F("Kenterkamp");
        break;
    }
    case 184358:
    {
        returnValue = F("Kentheimer Hangweg");
        break;
    }
    case 184359:
    {
        returnValue = F("Kentheimer Str.");
        break;
    }
    case 184360:
    {
        returnValue = F("Kentrup");
        break;
    }
    case 184361:
    {
        returnValue = F("Kentstr.");
        break;
    }
    case 184362:
    {
        returnValue = F("Kentucky Street");
        break;
    }
    case 184363:
    {
        returnValue = F("Kentuckystr.");
        break;
    }
    case 184364:
    {
        returnValue = F("Kenzbuckweg");
        break;
    }
    case 184365:
    {
        returnValue = F("Kenzelweg");
        break;
    }
    case 184366:
    {
        returnValue = F("Kenzendorf");
        break;
    }
    case 184367:
    {
        returnValue = F("Kenzenweg");
        break;
    }
    case 184368:
    {
        returnValue = F("Kenzer Landweg");
        break;
    }
    case 184369:
    {
        returnValue = F("Kenzer Weg");
        break;
    }
    case 184370:
    {
        returnValue = F("Kenzi Weg");
        break;
    }
    case 184371:
    {
        returnValue = F("Kenzinger Str.");
        break;
    }
    case 184372:
    {
        returnValue = F("Kenzinger Weg");
        break;
    }
    case 184373:
    {
        returnValue = F("Kepfe");
        break;
    }
    case 184374:
    {
        returnValue = F("Kepicer Weg");
        break;
    }
    case 184375:
    {
        returnValue = F("Keplergasse");
        break;
    }
    case 184376:
    {
        returnValue = F("Keplerhof");
        break;
    }
    case 184377:
    {
        returnValue = F("Keplerplatz");
        break;
    }
    case 184378:
    {
        returnValue = F("Keplerring");
        break;
    }
    case 184379:
    {
        returnValue = F("Keplerstr.");
        break;
    }
    case 184380:
    {
        returnValue = F("Keplerweg");
        break;
    }
    case 184381:
    {
        returnValue = F("Keppbergstr.");
        break;
    }
    case 184382:
    {
        returnValue = F("Keppelner Str.");
        break;
    }
    case 184383:
    {
        returnValue = F("Keppelscher Hof");
        break;
    }
    case 184384:
    {
        returnValue = F("Keppelstr.");
        break;
    }
    case 184385:
    {
        returnValue = F("Keppenbach");
        break;
    }
    case 184386:
    {
        returnValue = F("Keppenburgweg");
        break;
    }
    case 184387:
    {
        returnValue = F("Keppeneck");
        break;
    }
    case 184388:
    {
        returnValue = F("Kepplerstr.");
        break;
    }
    case 184389:
    {
        returnValue = F("Kepplersweg");
        break;
    }
    case 184390:
    {
        returnValue = F("Keppsmühlstr.");
        break;
    }
    case 184391:
    {
        returnValue = F("Keppstr.");
        break;
    }
    case 184392:
    {
        returnValue = F("Kepserstr.");
        break;
    }
    case 184393:
    {
        returnValue = F("Keramagstr.");
        break;
    }
    case 184394:
    {
        returnValue = F("Keramikerstr.");
        break;
    }
    case 184395:
    {
        returnValue = F("Keramikstr.");
        break;
    }
    case 184396:
    {
        returnValue = F("Keramikweg");
        break;
    }
    case 184397:
    {
        returnValue = F("Kerastr.");
        break;
    }
    case 184398:
    {
        returnValue = F("Kerbachstr.");
        break;
    }
    case 184399:
    {
        returnValue = F("Kerbe");
        break;
    }
    case 184400:
    {
        returnValue = F("Kerbebaamweg");
        break;
    }
    case 184401:
    {
        returnValue = F("Kerbebergweg");
        break;
    }
    case 184402:
    {
        returnValue = F("Kerbelbreite");
        break;
    }
    case 184403:
    {
        returnValue = F("Kerbelweg");
        break;
    }
    case 184404:
    {
        returnValue = F("Kerbener Weg");
        break;
    }
    case 184405:
    {
        returnValue = F("Kerbenhausträßle");
        break;
    }
    case 184406:
    {
        returnValue = F("Kerbenhauweg");
        break;
    }
    case 184407:
    {
        returnValue = F("Kerbenhof");
        break;
    }
    case 184408:
    {
        returnValue = F("Kerbenteichweg");
        break;
    }
    case 184409:
    {
        returnValue = F("Kerbenweg");
        break;
    }
    case 184410:
    {
        returnValue = F("Kerbeplatz");
        break;
    }
    case 184411:
    {
        returnValue = F("Kerbersdorfer Weg");
        break;
    }
    case 184412:
    {
        returnValue = F("Kerbeswinkel");
        break;
    }
    case 184413:
    {
        returnValue = F("Kerbeweg");
        break;
    }
    case 184414:
    {
        returnValue = F("Kerbfelder Str.");
        break;
    }
    case 184415:
    {
        returnValue = F("Kerbfelder Weg");
        break;
    }
    case 184416:
    {
        returnValue = F("Kerbstr.");
        break;
    }
    case 184417:
    {
        returnValue = F("Kercherweg");
        break;
    }
    case 184418:
    {
        returnValue = F("Kerelsweg");
        break;
    }
    case 184419:
    {
        returnValue = F("Kerfengasse");
        break;
    }
    case 184420:
    {
        returnValue = F("Kerfenwiesen");
        break;
    }
    case 184421:
    {
        returnValue = F("Kerfich");
        break;
    }
    case 184422:
    {
        returnValue = F("Kerflehde");
        break;
    }
    case 184423:
    {
        returnValue = F("Kerfstr.");
        break;
    }
    case 184424:
    {
        returnValue = F("Kergersweg");
        break;
    }
    case 184425:
    {
        returnValue = F("Kerkamp");
        break;
    }
    case 184426:
    {
        returnValue = F("Kerkbrede");
        break;
    }
    case 184427:
    {
        returnValue = F("Kerkbreede");
        break;
    }
    case 184428:
    {
        returnValue = F("Kerkebrink");
        break;
    }
    case 184429:
    {
        returnValue = F("Kerkeiken");
        break;
    }
    case 184430:
    {
        returnValue = F("Kerkekamp");
        break;
    }
    case 184431:
    {
        returnValue = F("Kerkelbornstr.");
        break;
    }
    case 184432:
    {
        returnValue = F("Kerkeler");
        break;
    }
    case 184433:
    {
        returnValue = F("Kerkenberg");
        break;
    }
    case 184434:
    {
        returnValue = F("Kerkenbusch");
        break;
    }
    case 184435:
    {
        returnValue = F("Kerkend");
        break;
    }
    case 184436:
    {
        returnValue = F("Kerkener Str.");
        break;
    }
    case 184437:
    {
        returnValue = F("Kerkenkamp");
        break;
    }
    case 184438:
    {
        returnValue = F("Kerkenpatt");
        break;
    }
    case 184439:
    {
        returnValue = F("Kerkerbachbahndamm");
        break;
    }
    case 184440:
    {
        returnValue = F("Kerkerbachradweg");
        break;
    }
    case 184441:
    {
        returnValue = F("Kerkerbachtalstr.");
        break;
    }
    case 184442:
    {
        returnValue = F("Kerkerdreh");
        break;
    }
    case 184443:
    {
        returnValue = F("Kerkerfeld");
        break;
    }
    case 184444:
    {
        returnValue = F("Kerkerstieg");
        break;
    }
    case 184445:
    {
        returnValue = F("Kerkerstr.");
        break;
    }
    case 184446:
    {
        returnValue = F("Kerkertser Str.");
        break;
    }
    case 184447:
    {
        returnValue = F("Kerkerweg");
        break;
    }
    case 184448:
    {
        returnValue = F("Kerkesschlade");
        break;
    }
    case 184449:
    {
        returnValue = F("Kerkeuwerweg");
        break;
    }
    case 184450:
    {
        returnValue = F("Kerkhagen");
        break;
    }
    case 184451:
    {
        returnValue = F("Kerkhagener Weg");
        break;
    }
    case 184452:
    {
        returnValue = F("Kerkheck");
        break;
    }
    case 184453:
    {
        returnValue = F("Kerkhofskamp");
        break;
    }
    case 184454:
    {
        returnValue = F("Kerkhofsweg");
        break;
    }
    case 184455:
    {
        returnValue = F("Kerkinger Str.");
        break;
    }
    case 184456:
    {
        returnValue = F("Kerklage");
        break;
    }
    case 184457:
    {
        returnValue = F("Kerkmannstr.");
        break;
    }
    case 184458:
    {
        returnValue = F("Kerkmoor");
        break;
    }
    case 184459:
    {
        returnValue = F("Kerkower Dorfstr.");
        break;
    }
    case 184460:
    {
        returnValue = F("Kerkower Weg");
        break;
    }
    case 184461:
    {
        returnValue = F("Kerkpad");
        break;
    }
    case 184462:
    {
        returnValue = F("Kerkpad (Verbindungsweg zur Kapelle)");
        break;
    }
    case 184463:
    {
        returnValue = F("Kerkpatt");
        break;
    }
    case 184464:
    {
        returnValue = F("Kerkrader Str.");
        break;
    }
    case 184465:
    {
        returnValue = F("Kerksiek");
        break;
    }
    case 184466:
    {
        returnValue = F("Kerksiekweg");
        break;
    }
    case 184467:
    {
        returnValue = F("Kerksigstr.");
        break;
    }
    case 184468:
    {
        returnValue = F("Kerkstieg");
        break;
    }
    case 184469:
    {
        returnValue = F("Kerkstiege");
        break;
    }
    case 184470:
    {
        returnValue = F("Kerkweg");
        break;
    }
    case 184471:
    {
        returnValue = F("Kerkwege");
        break;
    }
    case 184472:
    {
        returnValue = F("Kerlach-Ring");
        break;
    }
    case 184473:
    {
        returnValue = F("Kerlenweg");
        break;
    }
    case 184474:
    {
        returnValue = F("Kerlestr.");
        break;
    }
    case 184475:
    {
        returnValue = F("Kerlewecker Weg");
        break;
    }
    case 184476:
    {
        returnValue = F("Kerlinger Str.");
        break;
    }
    case 184477:
    {
        returnValue = F("Kerlingstr.");
        break;
    }
    case 184478:
    {
        returnValue = F("Kerllsgasse");
        break;
    }
    case 184479:
    {
        returnValue = F("Kermannstr.");
        break;
    }
    case 184480:
    {
        returnValue = F("Kermarstr.");
        break;
    }
    case 184481:
    {
        returnValue = F("Kermelberg");
        break;
    }
    case 184482:
    {
        returnValue = F("Kermelsgrund");
        break;
    }
    case 184483:
    {
        returnValue = F("Kermener Weg");
        break;
    }
    case 184484:
    {
        returnValue = F("Kermessenkamp");
        break;
    }
    case 184485:
    {
        returnValue = F("Kermeterstr.");
        break;
    }
    case 184486:
    {
        returnValue = F("Kermgasse");
        break;
    }
    case 184487:
    {
        returnValue = F("Kermisdahlstr.");
        break;
    }
    case 184488:
    {
        returnValue = F("Kern");
        break;
    }
    case 184489:
    {
        returnValue = F("Kernacker");
        break;
    }
    case 184490:
    {
        returnValue = F("Kernaten");
        break;
    }
    case 184491:
    {
        returnValue = F("Kernbacher Str.");
        break;
    }
    case 184492:
    {
        returnValue = F("Kernbacher Weg");
        break;
    }
    case 184493:
    {
        returnValue = F("Kernbachweg");
        break;
    }
    case 184494:
    {
        returnValue = F("Kernbachwiesen");
        break;
    }
    case 184495:
    {
        returnValue = F("Kernbauernleite");
        break;
    }
    case 184496:
    {
        returnValue = F("Kernbauernstr.");
        break;
    }
    case 184497:
    {
        returnValue = F("Kernbauernweg");
        break;
    }
    case 184498:
    {
        returnValue = F("Kernbeißerring");
        break;
    }
    case 184499:
    {
        returnValue = F("Kernbeißerweg");
        break;
    }
    case 184500:
    {
        returnValue = F("Kernberg");
        break;
    }
    case 184501:
    {
        returnValue = F("Kernbergstr.");
        break;
    }
    case 184502:
    {
        returnValue = F("Kernbrink");
        break;
    }
    case 184503:
    {
        returnValue = F("Kernbrock");
        break;
    }
    case 184504:
    {
        returnValue = F("Kerndlweg");
        break;
    }
    case 184505:
    {
        returnValue = F("Kerne");
        break;
    }
    case 184506:
    {
        returnValue = F("Kerneburg");
        break;
    }
    case 184507:
    {
        returnValue = F("Kerneigenstr.");
        break;
    }
    case 184508:
    {
        returnValue = F("Kernekampstr.");
        break;
    }
    case 184509:
    {
        returnValue = F("Kernenblickweg");
        break;
    }
    case 184510:
    {
        returnValue = F("Kernengarten");
        break;
    }
    case 184511:
    {
        returnValue = F("Kernenhofstr.");
        break;
    }
    case 184512:
    {
        returnValue = F("Kernenholzweg");
        break;
    }
    case 184513:
    {
        returnValue = F("Kernenstr.");
        break;
    }
    case 184514:
    {
        returnValue = F("Kernenweg");
        break;
    }
    case 184515:
    {
        returnValue = F("Kernershof");
        break;
    }
    case 184516:
    {
        returnValue = F("Kernerstr.");
        break;
    }
    case 184517:
    {
        returnValue = F("Kernerweg");
        break;
    }
    case 184518:
    {
        returnValue = F("Kernfeld");
        break;
    }
    case 184519:
    {
        returnValue = F("Kerngasse");
        break;
    }
    case 184520:
    {
        returnValue = F("Kernmühleweg");
        break;
    }
    case 184521:
    {
        returnValue = F("Kernriedstr.");
        break;
    }
    case 184522:
    {
        returnValue = F("Kernsaatschulweg");
        break;
    }
    case 184523:
    {
        returnValue = F("Kernscheider Höhenweg");
        break;
    }
    case 184524:
    {
        returnValue = F("Kernscheider Str.");
        break;
    }
    case 184525:
    {
        returnValue = F("Kernschneise");
        break;
    }
    case 184526:
    {
        returnValue = F("Kernsthal");
        break;
    }
    case 184527:
    {
        returnValue = F("Kernstr.");
        break;
    }
    case 184528:
    {
        returnValue = F("Kernsweg");
        break;
    }
    case 184529:
    {
        returnValue = F("Kerntalweg");
        break;
    }
    case 184530:
    {
        returnValue = F("Kerntangente");
        break;
    }
    case 184531:
    {
        returnValue = F("Kernthaler Str.");
        break;
    }
    case 184532:
    {
        returnValue = F("Kerntner Ring");
        break;
    }
    case 184533:
    {
        returnValue = F("Kernwaldweg");
        break;
    }
    case 184534:
    {
        returnValue = F("Kernweg");
        break;
    }
    case 184535:
    {
        returnValue = F("Kernwiesenweg");
        break;
    }
    case 184536:
    {
        returnValue = F("Kernzlweg");
        break;
    }
    case 184537:
    {
        returnValue = F("Kernäcker");
        break;
    }
    case 184538:
    {
        returnValue = F("Kernäckerstr.");
        break;
    }
    case 184539:
    {
        returnValue = F("Kerpener Hof");
        break;
    }
    case 184540:
    {
        returnValue = F("Kerpener Str.");
        break;
    }
    case 184541:
    {
        returnValue = F("Kerpener Weg");
        break;
    }
    case 184542:
    {
        returnValue = F("Kerpengasse");
        break;
    }
    case 184543:
    {
        returnValue = F("Kerpenkath");
        break;
    }
    case 184544:
    {
        returnValue = F("Kerpenstr.");
        break;
    }
    case 184545:
    {
        returnValue = F("Kerperinstr.");
        break;
    }
    case 184546:
    {
        returnValue = F("Kerperscheid");
        break;
    }
    case 184547:
    {
        returnValue = F("Kerperscheider Weg");
        break;
    }
    case 184548:
    {
        returnValue = F("Kerpstr.");
        break;
    }
    case 184549:
    {
        returnValue = F("Kerp’sches Mühlenweg");
        break;
    }
    case 184550:
    {
        returnValue = F("Kerrfeldstr.");
        break;
    }
    case 184551:
    {
        returnValue = F("Kerrygoldstr.");
        break;
    }
    case 184552:
    {
        returnValue = F("Kersbacher Str.");
        break;
    }
    case 184553:
    {
        returnValue = F("Kersbacher Weg");
        break;
    }
    case 184554:
    {
        returnValue = F("Kerschbaumerstr.");
        break;
    }
    case 184555:
    {
        returnValue = F("Kerschbaumstr.");
        break;
    }
    case 184556:
    {
        returnValue = F("Kersche Brück");
        break;
    }
    case 184557:
    {
        returnValue = F("Kerschelweg");
        break;
    }
    case 184558:
    {
        returnValue = F("Kerschenbacher Str.");
        break;
    }
    case 184559:
    {
        returnValue = F("Kerschenkamp");
        break;
    }
    case 184560:
    {
        returnValue = F("Kerschensteiner Str.");
        break;
    }
    case 184561:
    {
        returnValue = F("Kerschensteiner Weg");
        break;
    }
    case 184562:
    {
        returnValue = F("Kerschensteinerstr.");
        break;
    }
    case 184563:
    {
        returnValue = F("Kerschensteinerweg");
        break;
    }
    case 184564:
    {
        returnValue = F("Kerschensteinstr.");
        break;
    }
    case 184565:
    {
        returnValue = F("Kerscher Bach");
        break;
    }
    case 184566:
    {
        returnValue = F("Kerscher Str.");
        break;
    }
    case 184567:
    {
        returnValue = F("Kerscher Weg");
        break;
    }
    case 184568:
    {
        returnValue = F("Kerscherstr.");
        break;
    }
    case 184569:
    {
        returnValue = F("Kerschfeldstr.");
        break;
    }
    case 184570:
    {
        returnValue = F("Kerschgarten");
        break;
    }
    case 184571:
    {
        returnValue = F("Kerschgraben");
        break;
    }
    case 184572:
    {
        returnValue = F("Kerschhofen");
        break;
    }
    case 184573:
    {
        returnValue = F("Kerschhofener Str.");
        break;
    }
    case 184574:
    {
        returnValue = F("Kerschlacher Weg");
        break;
    }
    case 184575:
    {
        returnValue = F("Kerschlade");
        break;
    }
    case 184576:
    {
        returnValue = F("Kersenkamp");
        break;
    }
    case 184577:
    {
        returnValue = F("Kersmecker Weg");
        break;
    }
    case 184578:
    {
        returnValue = F("Kerspenhäuser Str.");
        break;
    }
    case 184579:
    {
        returnValue = F("Kersplebener Chaussee");
        break;
    }
    case 184580:
    {
        returnValue = F("Kerspöhle");
        break;
    }
    case 184581:
    {
        returnValue = F("Kerssenbrockallee");
        break;
    }
    case 184582:
    {
        returnValue = F("Kerssenbrockstr.");
        break;
    }
    case 184583:
    {
        returnValue = F("Kerssentrup");
        break;
    }
    case 184584:
    {
        returnValue = F("Kerstein");
        break;
    }
    case 184585:
    {
        returnValue = F("Kersten Tannen");
        break;
    }
    case 184586:
    {
        returnValue = F("Kersten-Miles-Str.");
        break;
    }
    case 184587:
    {
        returnValue = F("Kerstenbruch");
        break;
    }
    case 184588:
    {
        returnValue = F("Kerstengasse");
        break;
    }
    case 184589:
    {
        returnValue = F("Kerstenhausener Str.");
        break;
    }
    case 184590:
    {
        returnValue = F("Kerstenkamp");
        break;
    }
    case 184591:
    {
        returnValue = F("Kerstensstr.");
        break;
    }
    case 184592:
    {
        returnValue = F("Kerstenstr.");
        break;
    }
    case 184593:
    {
        returnValue = F("Kerstenweg");
        break;
    }
    case 184594:
    {
        returnValue = F("Kerster Weg");
        break;
    }
    case 184595:
    {
        returnValue = F("Kerstholtsgasse");
        break;
    }
    case 184596:
    {
        returnValue = F("Kerstin");
        break;
    }
    case 184597:
    {
        returnValue = F("Kerstin-von-Herbag-Weg");
        break;
    }
    case 184598:
    {
        returnValue = F("Kerstingsberg");
        break;
    }
    case 184599:
    {
        returnValue = F("Kerstingshof");
        break;
    }
    case 184600:
    {
        returnValue = F("Kerstingstr.");
        break;
    }
    case 184601:
    {
        returnValue = F("Kerstingweg");
        break;
    }
    case 184602:
    {
        returnValue = F("Kerstlingeröder Str.");
        break;
    }
    case 184603:
    {
        returnValue = F("Kerstlingeröder Weg");
        break;
    }
    case 184604:
    {
        returnValue = F("Kertelbachstr.");
        break;
    }
    case 184605:
    {
        returnValue = F("Kertelheinallee");
        break;
    }
    case 184606:
    {
        returnValue = F("Kertelweg");
        break;
    }
    case 184607:
    {
        returnValue = F("Kertitzer Str.");
        break;
    }
    case 184608:
    {
        returnValue = F("Kervenheimer Str.");
        break;
    }
    case 184609:
    {
        returnValue = F("Kerwegasse");
        break;
    }
    case 184610:
    {
        returnValue = F("Kerweplatz");
        break;
    }
    case 184611:
    {
        returnValue = F("Kerwerstr.");
        break;
    }
    case 184612:
    {
        returnValue = F("Kerzeleyweg");
        break;
    }
    case 184613:
    {
        returnValue = F("Kerzeller Str.");
        break;
    }
    case 184614:
    {
        returnValue = F("Kerzenbergstr.");
        break;
    }
    case 184615:
    {
        returnValue = F("Kerzenbrunnenstr.");
        break;
    }
    case 184616:
    {
        returnValue = F("Kerzendorf");
        break;
    }
    case 184617:
    {
        returnValue = F("Kerzendorfer Str.");
        break;
    }
    case 184618:
    {
        returnValue = F("Kerzendorfer Weg");
        break;
    }
    case 184619:
    {
        returnValue = F("Kerzenheimer Str.");
        break;
    }
    case 184620:
    {
        returnValue = F("Kerzenhöhnchen");
        break;
    }
    case 184621:
    {
        returnValue = F("Kerzenleite");
        break;
    }
    case 184622:
    {
        returnValue = F("Kerzenstr.");
        break;
    }
    case 184623:
    {
        returnValue = F("Kerzerweg");
        break;
    }
    case 184624:
    {
        returnValue = F("Kerztalstr.");
        break;
    }
    case 184625:
    {
        returnValue = F("Kerzweilerhof");
        break;
    }
    case 184626:
    {
        returnValue = F("Kerßenbrockstr.");
        break;
    }
    case 184627:
    {
        returnValue = F("Kerßeweg");
        break;
    }
    case 184628:
    {
        returnValue = F("Kesberg");
        break;
    }
    case 184629:
    {
        returnValue = F("Kesberner Str.");
        break;
    }
    case 184630:
    {
        returnValue = F("Kescheider Str.");
        break;
    }
    case 184631:
    {
        returnValue = F("Kescherweg");
        break;
    }
    case 184632:
    {
        returnValue = F("Keschteplatzel");
        break;
    }
    case 184633:
    {
        returnValue = F("Kesdorfer Feld");
        break;
    }
    case 184634:
    {
        returnValue = F("Kesenhofweg");
        break;
    }
    case 184635:
    {
        returnValue = F("Kesenweilerstr.");
        break;
    }
    case 184636:
    {
        returnValue = F("Kesfelder Str.");
        break;
    }
    case 184637:
    {
        returnValue = F("Keskrätten");
        break;
    }
    case 184638:
    {
        returnValue = F("Kespelweg");
        break;
    }
    case 184639:
    {
        returnValue = F("Kesperbergweg");
        break;
    }
    case 184640:
    {
        returnValue = F("Kesperhof");
        break;
    }
    case 184641:
    {
        returnValue = F("Kespermarkt");
        break;
    }
    case 184642:
    {
        returnValue = F("Kespernstr.");
        break;
    }
    case 184643:
    {
        returnValue = F("Kessachgasse");
        break;
    }
    case 184644:
    {
        returnValue = F("Kessachpark");
        break;
    }
    case 184645:
    {
        returnValue = F("Kessachstr.");
        break;
    }
    case 184646:
    {
        returnValue = F("Kessaweg");
        break;
    }
    case 184647:
    {
        returnValue = F("Kesseborn");
        break;
    }
    case 184648:
    {
        returnValue = F("Kessebürener Dorfstr.");
        break;
    }
    case 184649:
    {
        returnValue = F("Kessebürener Landwehr");
        break;
    }
    case 184650:
    {
        returnValue = F("Kessebürener Weg");
        break;
    }
    case 184651:
    {
        returnValue = F("Kessel");
        break;
    }
    case 184652:
    {
        returnValue = F("Kesselbach");
        break;
    }
    case 184653:
    {
        returnValue = F("Kesselbacher Weg");
        break;
    }
    case 184654:
    {
        returnValue = F("Kesselbachstr.");
        break;
    }
    case 184655:
    {
        returnValue = F("Kesselbachweg");
        break;
    }
    case 184656:
    {
        returnValue = F("Kesselbauer Str.");
        break;
    }
    case 184657:
    {
        returnValue = F("Kesselberg");
        break;
    }
    case 184658:
    {
        returnValue = F("Kesselbergstr.");
        break;
    }
    case 184659:
    {
        returnValue = F("Kesselbergweg");
        break;
    }
    case 184660:
    {
        returnValue = F("Kesselblick");
        break;
    }
    case 184661:
    {
        returnValue = F("Kesselboden");
        break;
    }
    case 184662:
    {
        returnValue = F("Kesselbodenstr.");
        break;
    }
    case 184663:
    {
        returnValue = F("Kesselbrand");
        break;
    }
    case 184664:
    {
        returnValue = F("Kesselbreite");
        break;
    }
    case 184665:
    {
        returnValue = F("Kesselbrink");
        break;
    }
    case 184666:
    {
        returnValue = F("Kesselbrucher Linie");
        break;
    }
    case 184667:
    {
        returnValue = F("Kesselbruchweg");
        break;
    }
    case 184668:
    {
        returnValue = F("Kesselbruck");
        break;
    }
    case 184669:
    {
        returnValue = F("Kesselbrücke");
        break;
    }
    case 184670:
    {
        returnValue = F("Kesselburgstr.");
        break;
    }
    case 184671:
    {
        returnValue = F("Kesseldorfer Rott");
        break;
    }
    case 184672:
    {
        returnValue = F("Kesseleck");
        break;
    }
    case 184673:
    {
        returnValue = F("Kesselecke");
        break;
    }
    case 184674:
    {
        returnValue = F("Kesselei");
        break;
    }
    case 184675:
    {
        returnValue = F("Kesselende");
        break;
    }
    case 184676:
    {
        returnValue = F("Kesselenstr.");
        break;
    }
    case 184677:
    {
        returnValue = F("Kesseler Str.");
        break;
    }
    case 184678:
    {
        returnValue = F("Kesseler Weg");
        break;
    }
    case 184679:
    {
        returnValue = F("Kesselesstr.");
        break;
    }
    case 184680:
    {
        returnValue = F("Kesseleweg");
        break;
    }
    case 184681:
    {
        returnValue = F("Kesselfeld");
        break;
    }
    case 184682:
    {
        returnValue = F("Kesselfeldstr.");
        break;
    }
    case 184683:
    {
        returnValue = F("Kesselflickerstr.");
        break;
    }
    case 184684:
    {
        returnValue = F("Kesselfuhr");
        break;
    }
    case 184685:
    {
        returnValue = F("Kesselfurchgraben");
        break;
    }
    case 184686:
    {
        returnValue = F("Kesselgarten");
        break;
    }
    case 184687:
    {
        returnValue = F("Kesselgasse");
        break;
    }
    case 184688:
    {
        returnValue = F("Kesselgraben");
        break;
    }
    case 184689:
    {
        returnValue = F("Kesselgrabenweg");
        break;
    }
    case 184690:
    {
        returnValue = F("Kesselgrube");
        break;
    }
    case 184691:
    {
        returnValue = F("Kesselgrund");
        break;
    }
    case 184692:
    {
        returnValue = F("Kesselgrundstr.");
        break;
    }
    case 184693:
    {
        returnValue = F("Kesselgrundweg");
        break;
    }
    case 184694:
    {
        returnValue = F("Kesselhalde");
        break;
    }
    case 184695:
    {
        returnValue = F("Kesselhaus");
        break;
    }
    case 184696:
    {
        returnValue = F("Kesselheimer Str.");
        break;
    }
    case 184697:
    {
        returnValue = F("Kesselheimer Weg");
        break;
    }
    case 184698:
    {
        returnValue = F("Kesselhutweg");
        break;
    }
    case 184699:
    {
        returnValue = F("Kesselhäuser Ort");
        break;
    }
    case 184700:
    {
        returnValue = F("Kesselinger Str.");
        break;
    }
    case 184701:
    {
        returnValue = F("Kesselkrug");
        break;
    }
    case 184702:
    {
        returnValue = F("Kesselmarkt");
        break;
    }
    case 184703:
    {
        returnValue = F("Kesselmühlenstr.");
        break;
    }
    case 184704:
    {
        returnValue = F("Kesselmühlstr.");
        break;
    }
    case 184705:
    {
        returnValue = F("Kesselplatz");
        break;
    }
    case 184706:
    {
        returnValue = F("Kesselrain");
        break;
    }
    case 184707:
    {
        returnValue = F("Kesselriede");
        break;
    }
    case 184708:
    {
        returnValue = F("Kesselring");
        break;
    }
    case 184709:
    {
        returnValue = F("Kesselring-Weg");
        break;
    }
    case 184710:
    {
        returnValue = F("Kesselscheid");
        break;
    }
    case 184711:
    {
        returnValue = F("Kesselschmiede");
        break;
    }
    case 184712:
    {
        returnValue = F("Kesselschmiedstr.");
        break;
    }
    case 184713:
    {
        returnValue = F("Kesselsdorfer Str.");
        break;
    }
    case 184714:
    {
        returnValue = F("Kesselseestr.");
        break;
    }
    case 184715:
    {
        returnValue = F("Kesselsfeldweg");
        break;
    }
    case 184716:
    {
        returnValue = F("Kesselsfenn");
        break;
    }
    case 184717:
    {
        returnValue = F("Kesselsgasse");
        break;
    }
    case 184718:
    {
        returnValue = F("Kesselsgracht");
        break;
    }
    case 184719:
    {
        returnValue = F("Kesselshain");
        break;
    }
    case 184720:
    {
        returnValue = F("Kesselshainer Str.");
        break;
    }
    case 184721:
    {
        returnValue = F("Kesselshainer Weg");
        break;
    }
    case 184722:
    {
        returnValue = F("Kesselsheide");
        break;
    }
    case 184723:
    {
        returnValue = F("Kesselsströttchen");
        break;
    }
    case 184724:
    {
        returnValue = F("Kesselstadtstr.");
        break;
    }
    case 184725:
    {
        returnValue = F("Kesselstattstr.");
        break;
    }
    case 184726:
    {
        returnValue = F("Kesselstaud");
        break;
    }
    case 184727:
    {
        returnValue = F("Kesselsteg");
        break;
    }
    case 184728:
    {
        returnValue = F("Kesselsteigstr.");
        break;
    }
    case 184729:
    {
        returnValue = F("Kesselstr.");
        break;
    }
    case 184730:
    {
        returnValue = F("Kesselstruth");
        break;
    }
    case 184731:
    {
        returnValue = F("Kesselstädter Str.");
        break;
    }
    case 184732:
    {
        returnValue = F("Kesselsweg");
        break;
    }
    case 184733:
    {
        returnValue = F("Kesselsweier");
        break;
    }
    case 184734:
    {
        returnValue = F("Kesseltalstr.");
        break;
    }
    case 184735:
    {
        returnValue = F("Kesseltobelstr.");
        break;
    }
    case 184736:
    {
        returnValue = F("Kesselwagstr.");
        break;
    }
    case 184737:
    {
        returnValue = F("Kesselwaldweg");
        break;
    }
    case 184738:
    {
        returnValue = F("Kesselwasen");
        break;
    }
    case 184739:
    {
        returnValue = F("Kesselweg");
        break;
    }
    case 184740:
    {
        returnValue = F("Kesselwiesen");
        break;
    }
    case 184741:
    {
        returnValue = F("Kesselwiesenstr.");
        break;
    }
    case 184742:
    {
        returnValue = F("Kesseläcker");
        break;
    }
    case 184743:
    {
        returnValue = F("Kessemeierweg");
        break;
    }
    case 184744:
    {
        returnValue = F("Kessener Weg");
        break;
    }
    case 184745:
    {
        returnValue = F("Kessenhammer");
        break;
    }
    case 184746:
    {
        returnValue = F("Kessenhammerweg");
        break;
    }
    case 184747:
    {
        returnValue = F("Kessenicher Str.");
        break;
    }
    case 184748:
    {
        returnValue = F("Kessenicher Torwall");
        break;
    }
    case 184749:
    {
        returnValue = F("Kessiehäuser Str.");
        break;
    }
    case 184750:
    {
        returnValue = F("Kessiner Weg");
        break;
    }
    case 184751:
    {
        returnValue = F("Kessiner Winkel");
        break;
    }
    case 184752:
    {
        returnValue = F("Kessinerstr.");
        break;
    }
    case 184753:
    {
        returnValue = F("Kessler Acker");
        break;
    }
    case 184754:
    {
        returnValue = F("Kesslergasse");
        break;
    }
    case 184755:
    {
        returnValue = F("Kesslerhaldenweg");
        break;
    }
    case 184756:
    {
        returnValue = F("Kesslerhauweg");
        break;
    }
    case 184757:
    {
        returnValue = F("Kesslershalde");
        break;
    }
    case 184758:
    {
        returnValue = F("Kesslershaldeweg");
        break;
    }
    case 184759:
    {
        returnValue = F("Kesslerstr.");
        break;
    }
    case 184760:
    {
        returnValue = F("Kesslerweg");
        break;
    }
    case 184761:
    {
        returnValue = F("Kestelbergweg");
        break;
    }
    case 184762:
    {
        returnValue = F("Kestenbaum");
        break;
    }
    case 184763:
    {
        returnValue = F("Kestenbergerweg");
        break;
    }
    case 184764:
    {
        returnValue = F("Kestener Weg");
        break;
    }
    case 184765:
    {
        returnValue = F("Kestengässle");
        break;
    }
    case 184766:
    {
        returnValue = F("Kestenmühlenweg");
        break;
    }
    case 184767:
    {
        returnValue = F("Kestenstr.");
        break;
    }
    case 184768:
    {
        returnValue = F("Kestenweg");
        break;
    }
    case 184769:
    {
        returnValue = F("Kesterkamp");
        break;
    }
    case 184770:
    {
        returnValue = F("Kestermannstr.");
        break;
    }
    case 184771:
    {
        returnValue = F("Kesternicher Str.");
        break;
    }
    case 184772:
    {
        returnValue = F("Kesterweg");
        break;
    }
    case 184773:
    {
        returnValue = F("Kestingstr.");
        break;
    }
    case 184774:
    {
        returnValue = F("Kestnerstr.");
        break;
    }
    case 184775:
    {
        returnValue = F("Kestricher Str.");
        break;
    }
    case 184776:
    {
        returnValue = F("Kestweg");
        break;
    }
    case 184777:
    {
        returnValue = F("Kestäcker");
        break;
    }
    case 184778:
    {
        returnValue = F("Ketelhotstr.");
        break;
    }
    case 184779:
    {
        returnValue = F("Ketelhörn");
        break;
    }
    case 184780:
    {
        returnValue = F("Ketelsburger Weg");
        break;
    }
    case 184781:
    {
        returnValue = F("Ketelsby");
        break;
    }
    case 184782:
    {
        returnValue = F("Ketelseel");
        break;
    }
    case 184783:
    {
        returnValue = F("Ketelsenweg");
        break;
    }
    case 184784:
    {
        returnValue = F("Ketelshagen");
        break;
    }
    case 184785:
    {
        returnValue = F("Ketelshufe");
        break;
    }
    case 184786:
    {
        returnValue = F("Ketelskoog");
        break;
    }
    case 184787:
    {
        returnValue = F("Ketelsstr.");
        break;
    }
    case 184788:
    {
        returnValue = F("Ketelweg");
        break;
    }
    case 184789:
    {
        returnValue = F("Ketingskamp");
        break;
    }
    case 184790:
    {
        returnValue = F("Ketlenburger Weg");
        break;
    }
    case 184791:
    {
        returnValue = F("Ketschauerhofstr.");
        break;
    }
    case 184792:
    {
        returnValue = F("Ketsche");
        break;
    }
    case 184793:
    {
        returnValue = F("Ketschenbacher Str.");
        break;
    }
    case 184794:
    {
        returnValue = F("Ketschenbuck");
        break;
    }
    case 184795:
    {
        returnValue = F("Ketschendorfer Str.");
        break;
    }
    case 184796:
    {
        returnValue = F("Ketschengasse");
        break;
    }
    case 184797:
    {
        returnValue = F("Ketschengrund");
        break;
    }
    case 184798:
    {
        returnValue = F("Ketschenleite");
        break;
    }
    case 184799:
    {
        returnValue = F("Ketscher Allee");
        break;
    }
    case 184800:
    {
        returnValue = F("Ketscher Landstr.");
        break;
    }
    case 184801:
    {
        returnValue = F("Ketscher Ring");
        break;
    }
    case 184802:
    {
        returnValue = F("Ketscher Str.");
        break;
    }
    case 184803:
    {
        returnValue = F("Ketscher Weg");
        break;
    }
    case 184804:
    {
        returnValue = F("Ketscherdamm");
        break;
    }
    case 184805:
    {
        returnValue = F("Ketschweg");
        break;
    }
    case 184806:
    {
        returnValue = F("Kettbachseitenweg");
        break;
    }
    case 184807:
    {
        returnValue = F("Kettelberg");
        break;
    }
    case 184808:
    {
        returnValue = F("Kettelbrunnstr.");
        break;
    }
    case 184809:
    {
        returnValue = F("Kettelburgstr.");
        break;
    }
    case 184810:
    {
        returnValue = F("Kettelbusch");
        break;
    }
    case 184811:
    {
        returnValue = F("Kettelbötel");
        break;
    }
    case 184812:
    {
        returnValue = F("Ketteldorf");
        break;
    }
    case 184813:
    {
        returnValue = F("Ketteldorfer Alleeweg");
        break;
    }
    case 184814:
    {
        returnValue = F("Ketteldorfer Str.");
        break;
    }
    case 184815:
    {
        returnValue = F("Kettelei");
        break;
    }
    case 184816:
    {
        returnValue = F("Ketteler Hof");
        break;
    }
    case 184817:
    {
        returnValue = F("Ketteler Siedlung");
        break;
    }
    case 184818:
    {
        returnValue = F("Ketteler Str.");
        break;
    }
    case 184819:
    {
        returnValue = F("Ketteler Weg");
        break;
    }
    case 184820:
    {
        returnValue = F("Ketteler-Str.");
        break;
    }
    case 184821:
    {
        returnValue = F("Kettelerplatz");
        break;
    }
    case 184822:
    {
        returnValue = F("Kettelerring");
        break;
    }
    case 184823:
    {
        returnValue = F("Kettelersiedlung");
        break;
    }
    case 184824:
    {
        returnValue = F("Kettelerstr.");
        break;
    }
    case 184825:
    {
        returnValue = F("Kettelerweg");
        break;
    }
    case 184826:
    {
        returnValue = F("Kettelfeld");
        break;
    }
    case 184827:
    {
        returnValue = F("Kettelfeldring");
        break;
    }
    case 184828:
    {
        returnValue = F("Kettelhalde");
        break;
    }
    case 184829:
    {
        returnValue = F("Kettelkrüger Kamp");
        break;
    }
    case 184830:
    {
        returnValue = F("Kettelsbachstr.");
        break;
    }
    case 184831:
    {
        returnValue = F("Kettelsbachweg");
        break;
    }
    case 184832:
    {
        returnValue = F("Kettelsdorf");
        break;
    }
    case 184833:
    {
        returnValue = F("Kettelstr.");
        break;
    }
    case 184834:
    {
        returnValue = F("Ketteltor");
        break;
    }
    case 184835:
    {
        returnValue = F("Kettelweg");
        break;
    }
    case 184836:
    {
        returnValue = F("Ketteläcker");
        break;
    }
    case 184837:
    {
        returnValue = F("Kettemerstr.");
        break;
    }
    case 184838:
    {
        returnValue = F("Ketten Geräumt");
        break;
    }
    case 184839:
    {
        returnValue = F("Kettenacker Str.");
        break;
    }
    case 184840:
    {
        returnValue = F("Kettenbacher Str.");
        break;
    }
    case 184841:
    {
        returnValue = F("Kettenbacher Weg");
        break;
    }
    case 184842:
    {
        returnValue = F("Kettenbaumstr.");
        break;
    }
    case 184843:
    {
        returnValue = F("Kettenbecke");
        break;
    }
    case 184844:
    {
        returnValue = F("Kettenberg");
        break;
    }
    case 184845:
    {
        returnValue = F("Kettenbergstr.");
        break;
    }
    case 184846:
    {
        returnValue = F("Kettenborner Weg");
        break;
    }
    case 184847:
    {
        returnValue = F("Kettenbrunnen");
        break;
    }
    case 184848:
    {
        returnValue = F("Kettenbrücke");
        break;
    }
    case 184849:
    {
        returnValue = F("Kettenbrückstr.");
        break;
    }
    case 184850:
    {
        returnValue = F("Kettenburg");
        break;
    }
    case 184851:
    {
        returnValue = F("Kettenburger Weg");
        break;
    }
    case 184852:
    {
        returnValue = F("Kettendorfweg");
        break;
    }
    case 184853:
    {
        returnValue = F("Kettendstr.");
        break;
    }
    case 184854:
    {
        returnValue = F("Kettener Str.");
        break;
    }
    case 184855:
    {
        returnValue = F("Kettengarten");
        break;
    }
    case 184856:
    {
        returnValue = F("Kettengasse");
        break;
    }
    case 184857:
    {
        returnValue = F("Kettenhammerweg");
        break;
    }
    case 184858:
    {
        returnValue = F("Kettenheimer Graben");
        break;
    }
    case 184859:
    {
        returnValue = F("Kettenheimer Str.");
        break;
    }
    case 184860:
    {
        returnValue = F("Kettenheimer Weg");
        break;
    }
    case 184861:
    {
        returnValue = F("Kettenholz");
        break;
    }
    case 184862:
    {
        returnValue = F("Kettenhöfstetter Str.");
        break;
    }
    case 184863:
    {
        returnValue = F("Kettenkamper Str.");
        break;
    }
    case 184864:
    {
        returnValue = F("Kettenkamper Weg");
        break;
    }
    case 184865:
    {
        returnValue = F("Kettenmatt");
        break;
    }
    case 184866:
    {
        returnValue = F("Kettenplatz");
        break;
    }
    case 184867:
    {
        returnValue = F("Kettenschmied");
        break;
    }
    case 184868:
    {
        returnValue = F("Kettenschmiede");
        break;
    }
    case 184869:
    {
        returnValue = F("Kettensteig");
        break;
    }
    case 184870:
    {
        returnValue = F("Kettenstollenstr.");
        break;
    }
    case 184871:
    {
        returnValue = F("Kettenstr.");
        break;
    }
    case 184872:
    {
        returnValue = F("Kettenweg");
        break;
    }
    case 184873:
    {
        returnValue = F("Kettenwiesenstr.");
        break;
    }
    case 184874:
    {
        returnValue = F("Kettenäcker");
        break;
    }
    case 184875:
    {
        returnValue = F("Ketterberg");
        break;
    }
    case 184876:
    {
        returnValue = F("Ketterburgweg");
        break;
    }
    case 184877:
    {
        returnValue = F("Kettererstr.");
        break;
    }
    case 184878:
    {
        returnValue = F("Kettererweg");
        break;
    }
    case 184879:
    {
        returnValue = F("Kettergasse");
        break;
    }
    case 184880:
    {
        returnValue = F("Ketteringstr.");
        break;
    }
    case 184881:
    {
        returnValue = F("Ketterlesgrabweg");
        break;
    }
    case 184882:
    {
        returnValue = F("Kettermühlenstr.");
        break;
    }
    case 184883:
    {
        returnValue = F("Ketternhalde");
        break;
    }
    case 184884:
    {
        returnValue = F("Ketternschwalbacher Pfad");
        break;
    }
    case 184885:
    {
        returnValue = F("Ketterschenweg");
        break;
    }
    case 184886:
    {
        returnValue = F("Ketterschwanger Str.");
        break;
    }
    case 184887:
    {
        returnValue = F("Kettershauser Str.");
        break;
    }
    case 184888:
    {
        returnValue = F("Ketterwaldstr.");
        break;
    }
    case 184889:
    {
        returnValue = F("Kettig-Koblenzer Weg");
        break;
    }
    case 184890:
    {
        returnValue = F("Kettiger Str.");
        break;
    }
    case 184891:
    {
        returnValue = F("Kettiger Weg");
        break;
    }
    case 184892:
    {
        returnValue = F("Kettinghauser Weg");
        break;
    }
    case 184893:
    {
        returnValue = F("Kettinstr.");
        break;
    }
    case 184894:
    {
        returnValue = F("Kettlererstr.");
        break;
    }
    case 184895:
    {
        returnValue = F("Kettlerholz");
        break;
    }
    case 184896:
    {
        returnValue = F("Kettlers Heide");
        break;
    }
    case 184897:
    {
        returnValue = F("Kettlershaus");
        break;
    }
    case 184898:
    {
        returnValue = F("Kettlerstr.");
        break;
    }
    case 184899:
    {
        returnValue = F("Kettlersweg");
        break;
    }
    case 184900:
    {
        returnValue = F("Kettlerweg");
        break;
    }
    case 184901:
    {
        returnValue = F("Kettlesäcker");
        break;
    }
    case 184902:
    {
        returnValue = F("Kettling");
        break;
    }
    case 184903:
    {
        returnValue = F("Kettnergaßl");
        break;
    }
    case 184904:
    {
        returnValue = F("Kettnerweg");
        break;
    }
    case 184905:
    {
        returnValue = F("Kettrichhofstr.");
        break;
    }
    case 184906:
    {
        returnValue = F("Kettungsstr.");
        break;
    }
    case 184907:
    {
        returnValue = F("Kettweg");
        break;
    }
    case 184908:
    {
        returnValue = F("Kettwiger Str.");
        break;
    }
    case 184909:
    {
        returnValue = F("Ketwondsweg");
        break;
    }
    case 184910:
    {
        returnValue = F("Ketzberg");
        break;
    }
    case 184911:
    {
        returnValue = F("Ketzberger Str.");
        break;
    }
    case 184912:
    {
        returnValue = F("Ketzbergerhöhe");
        break;
    }
    case 184913:
    {
        returnValue = F("Ketzenbühl");
        break;
    }
    case 184914:
    {
        returnValue = F("Ketzendorf");
        break;
    }
    case 184915:
    {
        returnValue = F("Ketzendorfer Grund");
        break;
    }
    case 184916:
    {
        returnValue = F("Ketzendorfer Str.");
        break;
    }
    case 184917:
    {
        returnValue = F("Ketzendorfer Weg");
        break;
    }
    case 184918:
    {
        returnValue = F("Ketzenschneise");
        break;
    }
    case 184919:
    {
        returnValue = F("Ketzerbach");
        break;
    }
    case 184920:
    {
        returnValue = F("Ketzerbleekweg");
        break;
    }
    case 184921:
    {
        returnValue = F("Ketzerbornweg");
        break;
    }
    case 184922:
    {
        returnValue = F("Ketzerstr.");
        break;
    }
    case 184923:
    {
        returnValue = F("Ketzerweg");
        break;
    }
    case 184924:
    {
        returnValue = F("Ketzhagen");
        break;
    }
    case 184925:
    {
        returnValue = F("Ketziner Bergstr.");
        break;
    }
    case 184926:
    {
        returnValue = F("Ketziner Str.");
        break;
    }
    case 184927:
    {
        returnValue = F("Ketziner Weg");
        break;
    }
    case 184928:
    {
        returnValue = F("Ketzürer Dorfstr.");
        break;
    }
    case 184929:
    {
        returnValue = F("Ketzürer Weg");
        break;
    }
    case 184930:
    {
        returnValue = F("Keudelsgasse");
        break;
    }
    case 184931:
    {
        returnValue = F("Keudelsplatz");
        break;
    }
    case 184932:
    {
        returnValue = F("Keuersdiek");
        break;
    }
    case 184933:
    {
        returnValue = F("Keueräckerweg");
        break;
    }
    case 184934:
    {
        returnValue = F("Keufengasse");
        break;
    }
    case 184935:
    {
        returnValue = F("Keuken Diek");
        break;
    }
    case 184936:
    {
        returnValue = F("Keukenhof");
        break;
    }
    case 184937:
    {
        returnValue = F("Keula");
        break;
    }
    case 184938:
    {
        returnValue = F("Keulaer Str.");
        break;
    }
    case 184939:
    {
        returnValue = F("Keulenberg");
        break;
    }
    case 184940:
    {
        returnValue = F("Keulenbergring");
        break;
    }
    case 184941:
    {
        returnValue = F("Keulenbergstr.");
        break;
    }
    case 184942:
    {
        returnValue = F("Keulenbergweg");
        break;
    }
    case 184943:
    {
        returnValue = F("Keulenhof");
        break;
    }
    case 184944:
    {
        returnValue = F("Keulenweg");
        break;
    }
    case 184945:
    {
        returnValue = F("Keulerallee");
        break;
    }
    case 184946:
    {
        returnValue = F("Keuloser Str.");
        break;
    }
    case 184947:
    {
        returnValue = F("Keulrod");
        break;
    }
    case 184948:
    {
        returnValue = F("Keulroder Str.");
        break;
    }
    case 184949:
    {
        returnValue = F("Keulweg");
        break;
    }
    case 184950:
    {
        returnValue = F("Keuner Str.");
        break;
    }
    case 184951:
    {
        returnValue = F("Keunescher Kirchweg");
        break;
    }
    case 184952:
    {
        returnValue = F("Keuneweg");
        break;
    }
    case 184953:
    {
        returnValue = F("Keupergasse");
        break;
    }
    case 184954:
    {
        returnValue = F("Keuperkusen");
        break;
    }
    case 184955:
    {
        returnValue = F("Keuperkuser Weg");
        break;
    }
    case 184956:
    {
        returnValue = F("Keuperstr.");
        break;
    }
    case 184957:
    {
        returnValue = F("Keuperweg");
        break;
    }
    case 184958:
    {
        returnValue = F("Keuperwinkel");
        break;
    }
    case 184959:
    {
        returnValue = F("Keuschberger Str.");
        break;
    }
    case 184960:
    {
        returnValue = F("Keuschelstr.");
        break;
    }
    case 184961:
    {
        returnValue = F("Keuschenweg");
        break;
    }
    case 184962:
    {
        returnValue = F("Keuscher Weg");
        break;
    }
    case 184963:
    {
        returnValue = F("Keuschäcker");
        break;
    }
    case 184964:
    {
        returnValue = F("Keusenhof");
        break;
    }
    case 184965:
    {
        returnValue = F("Keusgasse");
        break;
    }
    case 184966:
    {
        returnValue = F("Keussenstr.");
        break;
    }
    case 184967:
    {
        returnValue = F("Keutel");
        break;
    }
    case 184968:
    {
        returnValue = F("Keutelstr.");
        break;
    }
    case 184969:
    {
        returnValue = F("Keutenstr.");
        break;
    }
    case 184970:
    {
        returnValue = F("Keutmannstr.");
        break;
    }
    case 184971:
    {
        returnValue = F("Keutstr.");
        break;
    }
    case 184972:
    {
        returnValue = F("Keutzelbuch");
        break;
    }
    case 184973:
    {
        returnValue = F("Keutzelbücher Str.");
        break;
    }
    case 184974:
    {
        returnValue = F("Kevelaerer Str.");
        break;
    }
    case 184975:
    {
        returnValue = F("Kevelaerer Weg");
        break;
    }
    case 184976:
    {
        returnValue = F("Kevenbrink");
        break;
    }
    case 184977:
    {
        returnValue = F("Kevenhüll A");
        break;
    }
    case 184978:
    {
        returnValue = F("Kevenhüll C");
        break;
    }
    case 184979:
    {
        returnValue = F("Kevenhüll D");
        break;
    }
    case 184980:
    {
        returnValue = F("Kevenhüll E");
        break;
    }
    case 184981:
    {
        returnValue = F("Kevenhüll F");
        break;
    }
    case 184982:
    {
        returnValue = F("Kevenhüll G");
        break;
    }
    case 184983:
    {
        returnValue = F("Kevenhüll H");
        break;
    }
    case 184984:
    {
        returnValue = F("Kevenhüll I");
        break;
    }
    case 184985:
    {
        returnValue = F("Kevenhüll J");
        break;
    }
    case 184986:
    {
        returnValue = F("Kevenhüll K");
        break;
    }
    case 184987:
    {
        returnValue = F("Kevenhüll L");
        break;
    }
    case 184988:
    {
        returnValue = F("Kevenhüll M");
        break;
    }
    case 184989:
    {
        returnValue = F("Kevenhüll N");
        break;
    }
    case 184990:
    {
        returnValue = F("Kevenhüll O");
        break;
    }
    case 184991:
    {
        returnValue = F("Kevenhüll P");
        break;
    }
    case 184992:
    {
        returnValue = F("Kevenhüller Str.");
        break;
    }
    case 184993:
    {
        returnValue = F("Keverstr.");
        break;
    }
    case 184994:
    {
        returnValue = F("Kewelsstr.");
        break;
    }
    case 184995:
    {
        returnValue = F("Kewerstr.");
        break;
    }
    case 184996:
    {
        returnValue = F("Keyenberger Markt");
        break;
    }
    case 184997:
    {
        returnValue = F("Keyenberger Markt (neu)");
        break;
    }
    case 184998:
    {
        returnValue = F("Keylaer");
        break;
    }
    case 184999:
    {
        returnValue = F("Keyserlingweg");
        break;
    }
    case 185000:
    {
        returnValue = F("Keysersfeld");
        break;
    }
    case 185001:
    {
        returnValue = F("Keyßerstr.");
        break;
    }
    case 185002:
    {
        returnValue = F("Keyßlerstr.");
        break;
    }
    case 185003:
    {
        returnValue = F("Kezbachschneise");
        break;
    }
    case 185004:
    {
        returnValue = F("Keßbachweg");
        break;
    }
    case 185005:
    {
        returnValue = F("Keßlergasse");
        break;
    }
    case 185006:
    {
        returnValue = F("Keßlergäßle");
        break;
    }
    case 185007:
    {
        returnValue = F("Keßlerhalde");
        break;
    }
    case 185008:
    {
        returnValue = F("Keßlerstr.");
        break;
    }
    case 185009:
    {
        returnValue = F("Keßlersweg");
        break;
    }
    case 185010:
    {
        returnValue = F("Keßlerswiese");
        break;
    }
    case 185011:
    {
        returnValue = F("Keßlerweg");
        break;
    }
    case 185012:
    {
        returnValue = F("Keßlerwiesen");
        break;
    }
    case 185013:
    {
        returnValue = F("Khuonstr.");
        break;
    }
    case 185014:
    {
        returnValue = F("KiGa-Pfad");
        break;
    }
    case 185015:
    {
        returnValue = F("Kiart");
        break;
    }
    case 185016:
    {
        returnValue = F("Kiaustr.");
        break;
    }
    case 185017:
    {
        returnValue = F("Kibbelwarf");
        break;
    }
    case 185018:
    {
        returnValue = F("Kibben Himmel");
        break;
    }
    case 185019:
    {
        returnValue = F("Kibbenheide");
        break;
    }
    case 185020:
    {
        returnValue = F("Kibitzberg");
        break;
    }
    case 185021:
    {
        returnValue = F("Kibitzenburg");
        break;
    }
    case 185022:
    {
        returnValue = F("Kibitzmoorweg");
        break;
    }
    case 185023:
    {
        returnValue = F("Kibitzweg");
        break;
    }
    case 185024:
    {
        returnValue = F("Kiblinger Str.");
        break;
    }
    case 185025:
    {
        returnValue = F("Kichenwegele");
        break;
    }
    case 185026:
    {
        returnValue = F("Kichhügel");
        break;
    }
    case 185027:
    {
        returnValue = F("Kichlerweg");
        break;
    }
    case 185028:
    {
        returnValue = F("Kichstr.");
        break;
    }
    case 185029:
    {
        returnValue = F("Kichtaler Weg");
        break;
    }
    case 185030:
    {
        returnValue = F("Kick-Rasel-Str.");
        break;
    }
    case 185031:
    {
        returnValue = F("Kickachstr.");
        break;
    }
    case 185032:
    {
        returnValue = F("Kickbusch");
        break;
    }
    case 185033:
    {
        returnValue = F("Kicke");
        break;
    }
    case 185034:
    {
        returnValue = F("Kickekamp");
        break;
    }
    case 185035:
    {
        returnValue = F("Kickelberg");
        break;
    }
    case 185036:
    {
        returnValue = F("Kickelhahnsecke");
        break;
    }
    case 185037:
    {
        returnValue = F("Kickelhahnweg");
        break;
    }
    case 185038:
    {
        returnValue = F("Kickelhähnchen");
        break;
    }
    case 185039:
    {
        returnValue = F("Kickelsberg");
        break;
    }
    case 185040:
    {
        returnValue = F("Kickenau");
        break;
    }
    case 185041:
    {
        returnValue = F("Kickenbacher Hammer");
        break;
    }
    case 185042:
    {
        returnValue = F("Kickenbachstr.");
        break;
    }
    case 185043:
    {
        returnValue = F("Kickenberg");
        break;
    }
    case 185044:
    {
        returnValue = F("Kickenbergstr.");
        break;
    }
    case 185045:
    {
        returnValue = F("Kickengässele");
        break;
    }
    case 185046:
    {
        returnValue = F("Kickenstr.");
        break;
    }
    case 185047:
    {
        returnValue = F("Kickersberg");
        break;
    }
    case 185048:
    {
        returnValue = F("Kickersburg");
        break;
    }
    case 185049:
    {
        returnValue = F("Kickersweg");
        break;
    }
    case 185050:
    {
        returnValue = F("Kickethau");
        break;
    }
    case 185051:
    {
        returnValue = F("Kickleyweg");
        break;
    }
    case 185052:
    {
        returnValue = F("Kickuthweg");
        break;
    }
    case 185053:
    {
        returnValue = F("Kicküm");
        break;
    }
    case 185054:
    {
        returnValue = F("Kidderminster Ring");
        break;
    }
    case 185055:
    {
        returnValue = F("Kiderlinstr.");
        break;
    }
    case 185056:
    {
        returnValue = F("Kidrontal");
        break;
    }
    case 185057:
    {
        returnValue = F("Kidrontal-Brücke");
        break;
    }
    case 185058:
    {
        returnValue = F("Kiebeck");
        break;
    }
    case 185059:
    {
        returnValue = F("Kiebenhieberstr.");
        break;
    }
    case 185060:
    {
        returnValue = F("Kiebergstr.");
        break;
    }
    case 185061:
    {
        returnValue = F("Kiebinger Str.");
        break;
    }
    case 185062:
    {
        returnValue = F("Kiebitz");
        break;
    }
    case 185063:
    {
        returnValue = F("Kiebitzanger");
        break;
    }
    case 185064:
    {
        returnValue = F("Kiebitzbarg");
        break;
    }
    case 185065:
    {
        returnValue = F("Kiebitzbek");
        break;
    }
    case 185066:
    {
        returnValue = F("Kiebitzberg");
        break;
    }
    case 185067:
    {
        returnValue = F("Kiebitzberger Weg");
        break;
    }
    case 185068:
    {
        returnValue = F("Kiebitzbogen");
        break;
    }
    case 185069:
    {
        returnValue = F("Kiebitzbrink");
        break;
    }
    case 185070:
    {
        returnValue = F("Kiebitzbrook");
        break;
    }
    case 185071:
    {
        returnValue = F("Kiebitzburg");
        break;
    }
    case 185072:
    {
        returnValue = F("Kiebitzdamm");
        break;
    }
    case 185073:
    {
        returnValue = F("Kiebitzdelle-Achterlangs");
        break;
    }
    case 185074:
    {
        returnValue = F("Kiebitzdelle-Dörloop");
        break;
    }
    case 185075:
    {
        returnValue = F("Kiebitzdelle-Dünen");
        break;
    }
    case 185076:
    {
        returnValue = F("Kiebitzdelle-Heide");
        break;
    }
    case 185077:
    {
        returnValue = F("Kiebitzdelle-Leegde");
        break;
    }
    case 185078:
    {
        returnValue = F("Kiebitzdelle-Ostdünen");
        break;
    }
    case 185079:
    {
        returnValue = F("Kiebitzdelle-Westdünen");
        break;
    }
    case 185080:
    {
        returnValue = F("Kiebitzdyk");
        break;
    }
    case 185081:
    {
        returnValue = F("Kiebitzeck");
        break;
    }
    case 185082:
    {
        returnValue = F("Kiebitzende");
        break;
    }
    case 185083:
    {
        returnValue = F("Kiebitzenweg");
        break;
    }
    case 185084:
    {
        returnValue = F("Kiebitzer Str.");
        break;
    }
    case 185085:
    {
        returnValue = F("Kiebitzer Weg");
        break;
    }
    case 185086:
    {
        returnValue = F("Kiebitzfeld");
        break;
    }
    case 185087:
    {
        returnValue = F("Kiebitzflehr");
        break;
    }
    case 185088:
    {
        returnValue = F("Kiebitzgasse");
        break;
    }
    case 185089:
    {
        returnValue = F("Kiebitzgrund");
        break;
    }
    case 185090:
    {
        returnValue = F("Kiebitzhagen");
        break;
    }
    case 185091:
    {
        returnValue = F("Kiebitzheide");
        break;
    }
    case 185092:
    {
        returnValue = F("Kiebitzheidestr.");
        break;
    }
    case 185093:
    {
        returnValue = F("Kiebitzholm");
        break;
    }
    case 185094:
    {
        returnValue = F("Kiebitzhöhe");
        break;
    }
    case 185095:
    {
        returnValue = F("Kiebitzhörn");
        break;
    }
    case 185096:
    {
        returnValue = F("Kiebitzhörne");
        break;
    }
    case 185097:
    {
        returnValue = F("Kiebitzhörner Str.");
        break;
    }
    case 185098:
    {
        returnValue = F("Kiebitzkamp");
        break;
    }
    case 185099:
    {
        returnValue = F("Kiebitzkoppel");
        break;
    }
    case 185100:
    {
        returnValue = F("Kiebitzkrug");
        break;
    }
    case 185101:
    {
        returnValue = F("Kiebitzmaschengestell");
        break;
    }
    case 185102:
    {
        returnValue = F("Kiebitzmoor");
        break;
    }
    case 185103:
    {
        returnValue = F("Kiebitzmoorstr.");
        break;
    }
    case 185104:
    {
        returnValue = F("Kiebitzmoorweg");
        break;
    }
    case 185105:
    {
        returnValue = F("Kiebitznester Weg");
        break;
    }
    case 185106:
    {
        returnValue = F("Kiebitzohrdamm");
        break;
    }
    case 185107:
    {
        returnValue = F("Kiebitzpohl");
        break;
    }
    case 185108:
    {
        returnValue = F("Kiebitzrain");
        break;
    }
    case 185109:
    {
        returnValue = F("Kiebitzredder");
        break;
    }
    case 185110:
    {
        returnValue = F("Kiebitzreihe");
        break;
    }
    case 185111:
    {
        returnValue = F("Kiebitzreiher Chaussee");
        break;
    }
    case 185112:
    {
        returnValue = F("Kiebitzring");
        break;
    }
    case 185113:
    {
        returnValue = F("Kiebitzsteg");
        break;
    }
    case 185114:
    {
        returnValue = F("Kiebitzsteig");
        break;
    }
    case 185115:
    {
        returnValue = F("Kiebitzstieg");
        break;
    }
    case 185116:
    {
        returnValue = F("Kiebitzstr.");
        break;
    }
    case 185117:
    {
        returnValue = F("Kiebitzviertel");
        break;
    }
    case 185118:
    {
        returnValue = F("Kiebitzweg");
        break;
    }
    case 185119:
    {
        returnValue = F("Kiebitzweide");
        break;
    }
    case 185120:
    {
        returnValue = F("Kiebitzwiese");
        break;
    }
    case 185121:
    {
        returnValue = F("Kiebitzwinkel");
        break;
    }
    case 185122:
    {
        returnValue = F("Kiebuschstr.");
        break;
    }
    case 185123:
    {
        returnValue = F("Kieck");
        break;
    }
    case 185124:
    {
        returnValue = F("Kieckelbergstr.");
        break;
    }
    case 185125:
    {
        returnValue = F("Kiedricher Str.");
        break;
    }
    case 185126:
    {
        returnValue = F("Kiefelder Str.");
        break;
    }
    case 185127:
    {
        returnValue = F("Kiefelder Weg");
        break;
    }
    case 185128:
    {
        returnValue = F("Kiefeldermoorweg");
        break;
    }
    case 185129:
    {
        returnValue = F("Kiefelhorn");
        break;
    }
    case 185130:
    {
        returnValue = F("Kiefenholz");
        break;
    }
    case 185131:
    {
        returnValue = F("Kiefer");
        break;
    }
    case 185132:
    {
        returnValue = F("Kiefer Park");
        break;
    }
    case 185133:
    {
        returnValue = F("Kieferbachstr.");
        break;
    }
    case 185134:
    {
        returnValue = F("Kieferberg");
        break;
    }
    case 185135:
    {
        returnValue = F("Kieferbergstr.");
        break;
    }
    case 185136:
    {
        returnValue = F("Kiefergraben");
        break;
    }
    case 185137:
    {
        returnValue = F("Kiefering");
        break;
    }
    case 185138:
    {
        returnValue = F("Kieferinger Str.");
        break;
    }
    case 185139:
    {
        returnValue = F("Kieferkamp");
        break;
    }
    case 185140:
    {
        returnValue = F("Kieferleinstr.");
        break;
    }
    case 185141:
    {
        returnValue = F("Kieferleiteweg");
        break;
    }
    case 185142:
    {
        returnValue = F("Kieferlestr.");
        break;
    }
    case 185143:
    {
        returnValue = F("Kiefermühlstr.");
        break;
    }
    case 185144:
    {
        returnValue = F("Kiefern Altheeg Schneise");
        break;
    }
    case 185145:
    {
        returnValue = F("Kiefern-Neuheeg-Schneise");
        break;
    }
    case 185146:
    {
        returnValue = F("Kiefernallee");
        break;
    }
    case 185147:
    {
        returnValue = F("Kiefernberg");
        break;
    }
    case 185148:
    {
        returnValue = F("Kiefernbergstr.");
        break;
    }
    case 185149:
    {
        returnValue = F("Kiefernblick");
        break;
    }
    case 185150:
    {
        returnValue = F("Kiefernbogen");
        break;
    }
    case 185151:
    {
        returnValue = F("Kiefernbrink");
        break;
    }
    case 185152:
    {
        returnValue = F("Kiefernbruch");
        break;
    }
    case 185153:
    {
        returnValue = F("Kiefernbusch");
        break;
    }
    case 185154:
    {
        returnValue = F("Kiefernbuschweg");
        break;
    }
    case 185155:
    {
        returnValue = F("Kiefernböhl");
        break;
    }
    case 185156:
    {
        returnValue = F("Kieferndamm");
        break;
    }
    case 185157:
    {
        returnValue = F("Kieferndorf");
        break;
    }
    case 185158:
    {
        returnValue = F("Kieferndorfer Weg");
        break;
    }
    case 185159:
    {
        returnValue = F("Kieferneck");
        break;
    }
    case 185160:
    {
        returnValue = F("Kiefernforst");
        break;
    }
    case 185161:
    {
        returnValue = F("Kieferngarten");
        break;
    }
    case 185162:
    {
        returnValue = F("Kieferngasse");
        break;
    }
    case 185163:
    {
        returnValue = F("Kieferngrund");
        break;
    }
    case 185164:
    {
        returnValue = F("Kieferngrundweg");
        break;
    }
    case 185165:
    {
        returnValue = F("Kiefernhain");
        break;
    }
    case 185166:
    {
        returnValue = F("Kiefernheide");
        break;
    }
    case 185167:
    {
        returnValue = F("Kiefernhof");
        break;
    }
    case 185168:
    {
        returnValue = F("Kiefernhöh");
        break;
    }
    case 185169:
    {
        returnValue = F("Kiefernhöhe");
        break;
    }
    case 185170:
    {
        returnValue = F("Kiefernhöhle");
        break;
    }
    case 185171:
    {
        returnValue = F("Kiefernhügel");
        break;
    }
    case 185172:
    {
        returnValue = F("Kiefernkamp");
        break;
    }
    case 185173:
    {
        returnValue = F("Kiefernleithe");
        break;
    }
    case 185174:
    {
        returnValue = F("Kiefernpfad");
        break;
    }
    case 185175:
    {
        returnValue = F("Kiefernplatz");
        break;
    }
    case 185176:
    {
        returnValue = F("Kiefernring");
        break;
    }
    case 185177:
    {
        returnValue = F("Kiefernschlag");
        break;
    }
    case 185178:
    {
        returnValue = F("Kiefernsteg");
        break;
    }
    case 185179:
    {
        returnValue = F("Kiefernsteig");
        break;
    }
    case 185180:
    {
        returnValue = F("Kiefernsteige");
        break;
    }
    case 185181:
    {
        returnValue = F("Kiefernstieg");
        break;
    }
    case 185182:
    {
        returnValue = F("Kiefernstr.");
        break;
    }
    case 185183:
    {
        returnValue = F("Kiefernsund");
        break;
    }
    case 185184:
    {
        returnValue = F("Kiefernwald");
        break;
    }
    case 185185:
    {
        returnValue = F("Kiefernwaldstr.");
        break;
    }
    case 185186:
    {
        returnValue = F("Kiefernweg");
        break;
    }
    case 185187:
    {
        returnValue = F("Kiefernwinkel");
        break;
    }
    case 185188:
    {
        returnValue = F("Kiefernzapfen");
        break;
    }
    case 185189:
    {
        returnValue = F("Kiefersau");
        break;
    }
    case 185190:
    {
        returnValue = F("Kieferscheidweg");
        break;
    }
    case 185191:
    {
        returnValue = F("Kiefersheck");
        break;
    }
    case 185192:
    {
        returnValue = F("Kieferstr.");
        break;
    }
    case 185193:
    {
        returnValue = F("Kieferstädteler Str.");
        break;
    }
    case 185194:
    {
        returnValue = F("Kiefersweg");
        break;
    }
    case 185195:
    {
        returnValue = F("Kieferweg");
        break;
    }
    case 185196:
    {
        returnValue = F("Kieffeld");
        break;
    }
    case 185197:
    {
        returnValue = F("Kiefholz");
        break;
    }
    case 185198:
    {
        returnValue = F("Kiefholzkamp");
        break;
    }
    case 185199:
    {
        returnValue = F("Kiefholzstr.");
        break;
    }
    case 185200:
    {
        returnValue = F("Kiefhuck");
        break;
    }
    case 185201:
    {
        returnValue = F("Kiefkamp");
        break;
    }
    case 185202:
    {
        returnValue = F("Kieflitzer Str.");
        break;
    }
    case 185203:
    {
        returnValue = F("Kiegelswarf");
        break;
    }
    case 185204:
    {
        returnValue = F("Kiehlstr.");
        break;
    }
    case 185205:
    {
        returnValue = F("Kiehn'sche Koppel");
        break;
    }
    case 185206:
    {
        returnValue = F("Kiehnlestr.");
        break;
    }
    case 185207:
    {
        returnValue = F("Kiehnmoorweg");
        break;
    }
    case 185208:
    {
        returnValue = F("Kiehnpool");
        break;
    }
    case 185209:
    {
        returnValue = F("Kiehns Hof");
        break;
    }
    case 185210:
    {
        returnValue = F("Kiehnsweg");
        break;
    }
    case 185211:
    {
        returnValue = F("Kiehnwerder");
        break;
    }
    case 185212:
    {
        returnValue = F("Kiehnwiese");
        break;
    }
    case 185213:
    {
        returnValue = F("Kieholm");
        break;
    }
    case 185214:
    {
        returnValue = F("Kiek Ut");
        break;
    }
    case 185215:
    {
        returnValue = F("Kiek an Diek");
        break;
    }
    case 185216:
    {
        returnValue = F("Kiek in de Pott");
        break;
    }
    case 185217:
    {
        returnValue = F("Kiek in de Sün");
        break;
    }
    case 185218:
    {
        returnValue = F("Kiek in den Busch");
        break;
    }
    case 185219:
    {
        returnValue = F("Kiek över");
        break;
    }
    case 185220:
    {
        returnValue = F("Kiekberg");
        break;
    }
    case 185221:
    {
        returnValue = F("Kiekbusch");
        break;
    }
    case 185222:
    {
        returnValue = F("Kiekebusch");
        break;
    }
    case 185223:
    {
        returnValue = F("Kiekebuscher Allee");
        break;
    }
    case 185224:
    {
        returnValue = F("Kiekebuscher Dorfstr.");
        break;
    }
    case 185225:
    {
        returnValue = F("Kiekebuscher Hauptstr.");
        break;
    }
    case 185226:
    {
        returnValue = F("Kiekebuscher Str.");
        break;
    }
    case 185227:
    {
        returnValue = F("Kiekebuscher Weg");
        break;
    }
    case 185228:
    {
        returnValue = F("Kiekenbrink");
        break;
    }
    case 185229:
    {
        returnValue = F("Kiekerberg");
        break;
    }
    case 185230:
    {
        returnValue = F("Kiekerdünen");
        break;
    }
    case 185231:
    {
        returnValue = F("Kiekut");
        break;
    }
    case 185232:
    {
        returnValue = F("Kiekutsweg");
        break;
    }
    case 185233:
    {
        returnValue = F("Kiekweg");
        break;
    }
    case 185234:
    {
        returnValue = F("Kieköm");
        break;
    }
    case 185235:
    {
        returnValue = F("Kiel");
        break;
    }
    case 185236:
    {
        returnValue = F("Kiel-Senkredder");
        break;
    }
    case 185237:
    {
        returnValue = F("Kielacker");
        break;
    }
    case 185238:
    {
        returnValue = F("Kielbergweg");
        break;
    }
    case 185239:
    {
        returnValue = F("Kielbrockweg");
        break;
    }
    case 185240:
    {
        returnValue = F("Kielcestr.");
        break;
    }
    case 185241:
    {
        returnValue = F("Kieldamm");
        break;
    }
    case 185242:
    {
        returnValue = F("Kielende");
        break;
    }
    case 185243:
    {
        returnValue = F("Kielenkamp");
        break;
    }
    case 185244:
    {
        returnValue = F("Kieler Chaussee");
        break;
    }
    case 185245:
    {
        returnValue = F("Kieler Kamp");
        break;
    }
    case 185246:
    {
        returnValue = F("Kieler Kuhle");
        break;
    }
    case 185247:
    {
        returnValue = F("Kieler Landstr.");
        break;
    }
    case 185248:
    {
        returnValue = F("Kieler Ring");
        break;
    }
    case 185249:
    {
        returnValue = F("Kieler Str.");
        break;
    }
    case 185250:
    {
        returnValue = F("Kieler Str. 23 K-M");
        break;
    }
    case 185251:
    {
        returnValue = F("Kieler Tor");
        break;
    }
    case 185252:
    {
        returnValue = F("Kieler Weg");
        break;
    }
    case 185253:
    {
        returnValue = F("Kielerkamper Weg");
        break;
    }
    case 185254:
    {
        returnValue = F("Kielfoot");
        break;
    }
    case 185255:
    {
        returnValue = F("Kielforststr.");
        break;
    }
    case 185256:
    {
        returnValue = F("Kielholzweg");
        break;
    }
    case 185257:
    {
        returnValue = F("Kieling");
        break;
    }
    case 185258:
    {
        returnValue = F("Kielinger Str.");
        break;
    }
    case 185259:
    {
        returnValue = F("Kielkamp");
        break;
    }
    case 185260:
    {
        returnValue = F("Kielkoppel");
        break;
    }
    case 185261:
    {
        returnValue = F("Kiellinie");
        break;
    }
    case 185262:
    {
        returnValue = F("Kielmeyerstr.");
        break;
    }
    case 185263:
    {
        returnValue = F("Kielmoor");
        break;
    }
    case 185264:
    {
        returnValue = F("Kielmoorweg");
        break;
    }
    case 185265:
    {
        returnValue = F("Kielort");
        break;
    }
    case 185266:
    {
        returnValue = F("Kielortring");
        break;
    }
    case 185267:
    {
        returnValue = F("Kiels Gang");
        break;
    }
    case 185268:
    {
        returnValue = F("Kielsberg");
        break;
    }
    case 185269:
    {
        returnValue = F("Kielsbergstr.");
        break;
    }
    case 185270:
    {
        returnValue = F("Kielsburger Str.");
        break;
    }
    case 185271:
    {
        returnValue = F("Kielsche Str.");
        break;
    }
    case 185272:
    {
        returnValue = F("Kielseng");
        break;
    }
    case 185273:
    {
        returnValue = F("Kielsgang");
        break;
    }
    case 185274:
    {
        returnValue = F("Kielshöfchen");
        break;
    }
    case 185275:
    {
        returnValue = F("Kielstr.");
        break;
    }
    case 185276:
    {
        returnValue = F("Kielstraat");
        break;
    }
    case 185277:
    {
        returnValue = F("Kielstückenweg");
        break;
    }
    case 185278:
    {
        returnValue = F("Kielswang");
        break;
    }
    case 185279:
    {
        returnValue = F("Kielsweg");
        break;
    }
    case 185280:
    {
        returnValue = F("Kielweg");
        break;
    }
    case 185281:
    {
        returnValue = F("Kielwegstr.");
        break;
    }
    case 185282:
    {
        returnValue = F("Kielwohlgraben");
        break;
    }
    case 185283:
    {
        returnValue = F("Kielöhr");
        break;
    }
    case 185284:
    {
        returnValue = F("Kiem-Pauli-Ring");
        break;
    }
    case 185285:
    {
        returnValue = F("Kiem-Pauli-Str.");
        break;
    }
    case 185286:
    {
        returnValue = F("Kiem-Pauli-Weg");
        break;
    }
    case 185287:
    {
        returnValue = F("Kiemche");
        break;
    }
    case 185288:
    {
        returnValue = F("Kiemoorweg");
        break;
    }
    case 185289:
    {
        returnValue = F("Kienackerstr.");
        break;
    }
    case 185290:
    {
        returnValue = F("Kienaderweg");
        break;
    }
    case 185291:
    {
        returnValue = F("Kienauweg");
        break;
    }
    case 185292:
    {
        returnValue = F("Kienbach");
        break;
    }
    case 185293:
    {
        returnValue = F("Kienbachring");
        break;
    }
    case 185294:
    {
        returnValue = F("Kienbachstr.");
        break;
    }
    case 185295:
    {
        returnValue = F("Kienbaumer Weg");
        break;
    }
    case 185296:
    {
        returnValue = F("Kienberg");
        break;
    }
    case 185297:
    {
        returnValue = F("Kienberger Allee");
        break;
    }
    case 185298:
    {
        returnValue = F("Kienberger Damm");
        break;
    }
    case 185299:
    {
        returnValue = F("Kienberger Str.");
        break;
    }
    case 185300:
    {
        returnValue = F("Kienberger Weg");
        break;
    }
    case 185301:
    {
        returnValue = F("Kienbergfeld");
        break;
    }
    case 185302:
    {
        returnValue = F("Kienbergstr.");
        break;
    }
    case 185303:
    {
        returnValue = F("Kienbergweg");
        break;
    }
    case 185304:
    {
        returnValue = F("Kienbruch");
        break;
    }
    case 185305:
    {
        returnValue = F("Kienbruckweg");
        break;
    }
    case 185306:
    {
        returnValue = F("Kienbächleweg");
        break;
    }
    case 185307:
    {
        returnValue = F("Kienbühl");
        break;
    }
    case 185308:
    {
        returnValue = F("Kiencker Weg");
        break;
    }
    case 185309:
    {
        returnValue = F("Kiendlstr.");
        break;
    }
    case 185310:
    {
        returnValue = F("Kienebergweg");
        break;
    }
    case 185311:
    {
        returnValue = F("Kienebrinkstr.");
        break;
    }
    case 185312:
    {
        returnValue = F("Kienegge");
        break;
    }
    case 185313:
    {
        returnValue = F("Kienenweg");
        break;
    }
    case 185314:
    {
        returnValue = F("Kienertsham");
        break;
    }
    case 185315:
    {
        returnValue = F("Kienestr.");
        break;
    }
    case 185316:
    {
        returnValue = F("Kieneweg");
        break;
    }
    case 185317:
    {
        returnValue = F("Kienfichten");
        break;
    }
    case 185318:
    {
        returnValue = F("Kienhaidchenweg");
        break;
    }
    case 185319:
    {
        returnValue = F("Kienhainweg");
        break;
    }
    case 185320:
    {
        returnValue = F("Kienheide");
        break;
    }
    case 185321:
    {
        returnValue = F("Kienholz");
        break;
    }
    case 185322:
    {
        returnValue = F("Kienholzpfad");
        break;
    }
    case 185323:
    {
        returnValue = F("Kienholzstr.");
        break;
    }
    case 185324:
    {
        returnValue = F("Kienholzweg");
        break;
    }
    case 185325:
    {
        returnValue = F("Kienhorst");
        break;
    }
    case 185326:
    {
        returnValue = F("Kienhorststr.");
        break;
    }
    case 185327:
    {
        returnValue = F("Kienhärdtlesweg");
        break;
    }
    case 185328:
    {
        returnValue = F("Kieningstr.");
        break;
    }
    case 185329:
    {
        returnValue = F("Kienitzberg");
        break;
    }
    case 185330:
    {
        returnValue = F("Kienitzer Dorfstr.");
        break;
    }
    case 185331:
    {
        returnValue = F("Kienitzer Oderstr.");
        break;
    }
    case 185332:
    {
        returnValue = F("Kienitzer Str.");
        break;
    }
    case 185333:
    {
        returnValue = F("Kienitzer Weg");
        break;
    }
    case 185334:
    {
        returnValue = F("Kienitzweg");
        break;
    }
    case 185335:
    {
        returnValue = F("Kienkamp");
        break;
    }
    case 185336:
    {
        returnValue = F("Kienkerweg");
        break;
    }
    case 185337:
    {
        returnValue = F("Kienlampe");
        break;
    }
    case 185338:
    {
        returnValue = F("Kienleite");
        break;
    }
    case 185339:
    {
        returnValue = F("Kienlesweg");
        break;
    }
    case 185340:
    {
        returnValue = F("Kienmoor");
        break;
    }
    case 185341:
    {
        returnValue = F("Kienmoor-Schneise");
        break;
    }
    case 185342:
    {
        returnValue = F("Kienmoosstr.");
        break;
    }
    case 185343:
    {
        returnValue = F("Kienmoosweg");
        break;
    }
    case 185344:
    {
        returnValue = F("Kienmühle");
        break;
    }
    case 185345:
    {
        returnValue = F("Kienofenpromenade");
        break;
    }
    case 185346:
    {
        returnValue = F("Kienofenweg");
        break;
    }
    case 185347:
    {
        returnValue = F("Kienrathweg");
        break;
    }
    case 185348:
    {
        returnValue = F("Kiensiek");
        break;
    }
    case 185349:
    {
        returnValue = F("Kienspanstr.");
        break;
    }
    case 185350:
    {
        returnValue = F("Kiensträßle");
        break;
    }
    case 185351:
    {
        returnValue = F("Kientalstr.");
        break;
    }
    case 185352:
    {
        returnValue = F("Kientannenschneise");
        break;
    }
    case 185353:
    {
        returnValue = F("Kientenstr.");
        break;
    }
    case 185354:
    {
        returnValue = F("Kientzheimer Str.");
        break;
    }
    case 185355:
    {
        returnValue = F("Kienweg");
        break;
    }
    case 185356:
    {
        returnValue = F("Kienwerder");
        break;
    }
    case 185357:
    {
        returnValue = F("Kienwerder Str.");
        break;
    }
    case 185358:
    {
        returnValue = F("Kienzerleweg");
        break;
    }
    case 185359:
    {
        returnValue = F("Kienzlestr.");
        break;
    }
    case 185360:
    {
        returnValue = F("Kienzleweg");
        break;
    }
    case 185361:
    {
        returnValue = F("Kienzlewiesen");
        break;
    }
    case 185362:
    {
        returnValue = F("Kienzlstr.");
        break;
    }
    case 185363:
    {
        returnValue = F("Kienäpfelweg");
        break;
    }
    case 185364:
    {
        returnValue = F("Kiepacker");
        break;
    }
    case 185365:
    {
        returnValue = F("Kiepelbergplatz");
        break;
    }
    case 185366:
    {
        returnValue = F("Kiepelbergstr.");
        break;
    }
    case 185367:
    {
        returnValue = F("Kiepenböhnen");
        break;
    }
    case 185368:
    {
        returnValue = F("Kiependamm");
        break;
    }
    case 185369:
    {
        returnValue = F("Kiepenfeld");
        break;
    }
    case 185370:
    {
        returnValue = F("Kiepenheuerallee");
        break;
    }
    case 185371:
    {
        returnValue = F("Kiepenkerlstr.");
        break;
    }
    case 185372:
    {
        returnValue = F("Kiepenkerlweg");
        break;
    }
    case 185373:
    {
        returnValue = F("Kiepens Eck");
        break;
    }
    case 185374:
    {
        returnValue = F("Kiepensteg");
        break;
    }
    case 185375:
    {
        returnValue = F("Kiepenweg");
        break;
    }
    case 185376:
    {
        returnValue = F("Kiepertplatz");
        break;
    }
    case 185377:
    {
        returnValue = F("Kieppemühlenweg");
        break;
    }
    case 185378:
    {
        returnValue = F("Kierbachstr.");
        break;
    }
    case 185379:
    {
        returnValue = F("Kierberg");
        break;
    }
    case 185380:
    {
        returnValue = F("Kierberger Str.");
        break;
    }
    case 185381:
    {
        returnValue = F("Kierbergstr.");
        break;
    }
    case 185382:
    {
        returnValue = F("Kierdorf");
        break;
    }
    case 185383:
    {
        returnValue = F("Kierdorfer Feld");
        break;
    }
    case 185384:
    {
        returnValue = F("Kierdorfer Str.");
        break;
    }
    case 185385:
    {
        returnValue = F("Kieritweg");
        break;
    }
    case 185386:
    {
        returnValue = F("Kierling");
        break;
    }
    case 185387:
    {
        returnValue = F("Kierlinger Weg");
        break;
    }
    case 185388:
    {
        returnValue = F("Kiermaierstr.");
        break;
    }
    case 185389:
    {
        returnValue = F("Kierngaßweg");
        break;
    }
    case 185390:
    {
        returnValue = F("Kierspelstr.");
        break;
    }
    case 185391:
    {
        returnValue = F("Kierster Mühlenweg");
        break;
    }
    case 185392:
    {
        returnValue = F("Kierster Str.");
        break;
    }
    case 185393:
    {
        returnValue = F("Kierstraß");
        break;
    }
    case 185394:
    {
        returnValue = F("Kierststr.");
        break;
    }
    case 185395:
    {
        returnValue = F("Kierweg");
        break;
    }
    case 185396:
    {
        returnValue = F("Kies");
        break;
    }
    case 185397:
    {
        returnValue = F("Kies-See-Rundweg");
        break;
    }
    case 185398:
    {
        returnValue = F("Kiesacker");
        break;
    }
    case 185399:
    {
        returnValue = F("Kiesackerstr.");
        break;
    }
    case 185400:
    {
        returnValue = F("Kiesallee");
        break;
    }
    case 185401:
    {
        returnValue = F("Kiesau");
        break;
    }
    case 185402:
    {
        returnValue = F("Kiesauer Trift");
        break;
    }
    case 185403:
    {
        returnValue = F("Kiesbachstr.");
        break;
    }
    case 185404:
    {
        returnValue = F("Kiesbahn");
        break;
    }
    case 185405:
    {
        returnValue = F("Kiesbarg");
        break;
    }
    case 185406:
    {
        returnValue = F("Kiesberg");
        break;
    }
    case 185407:
    {
        returnValue = F("Kiesbergstr.");
        break;
    }
    case 185408:
    {
        returnValue = F("Kiesbergweg");
        break;
    }
    case 185409:
    {
        returnValue = F("Kiesbert");
        break;
    }
    case 185410:
    {
        returnValue = F("Kiesbruch");
        break;
    }
    case 185411:
    {
        returnValue = F("Kiesbruchweg");
        break;
    }
    case 185412:
    {
        returnValue = F("Kiesbrückl");
        break;
    }
    case 185413:
    {
        returnValue = F("Kiesbuckel");
        break;
    }
    case 185414:
    {
        returnValue = F("Kiesbuckelweg");
        break;
    }
    case 185415:
    {
        returnValue = F("Kiesbyfeld");
        break;
    }
    case 185416:
    {
        returnValue = F("Kiesbühl");
        break;
    }
    case 185417:
    {
        returnValue = F("Kieschroed");
        break;
    }
    case 185418:
    {
        returnValue = F("Kiesebachweg");
        break;
    }
    case 185419:
    {
        returnValue = F("Kieselackerweg");
        break;
    }
    case 185420:
    {
        returnValue = F("Kieselallee");
        break;
    }
    case 185421:
    {
        returnValue = F("Kieselbach");
        break;
    }
    case 185422:
    {
        returnValue = F("Kieselbachstr.");
        break;
    }
    case 185423:
    {
        returnValue = F("Kieselberg");
        break;
    }
    case 185424:
    {
        returnValue = F("Kieselborn");
        break;
    }
    case 185425:
    {
        returnValue = F("Kieselborner Weg");
        break;
    }
    case 185426:
    {
        returnValue = F("Kieselbronner Pfad");
        break;
    }
    case 185427:
    {
        returnValue = F("Kieselbronner Str.");
        break;
    }
    case 185428:
    {
        returnValue = F("Kieselbuchweg");
        break;
    }
    case 185429:
    {
        returnValue = F("Kieselei");
        break;
    }
    case 185430:
    {
        returnValue = F("Kieseler Weg");
        break;
    }
    case 185431:
    {
        returnValue = F("Kieselgasse");
        break;
    }
    case 185432:
    {
        returnValue = F("Kieselgrund");
        break;
    }
    case 185433:
    {
        returnValue = F("Kieselgur-Rundwanderweg");
        break;
    }
    case 185434:
    {
        returnValue = F("Kieselgurweg");
        break;
    }
    case 185435:
    {
        returnValue = F("Kieselhausenstr.");
        break;
    }
    case 185436:
    {
        returnValue = F("Kieselheckenschneise");
        break;
    }
    case 185437:
    {
        returnValue = F("Kieselhof");
        break;
    }
    case 185438:
    {
        returnValue = F("Kieselhofer Weg");
        break;
    }
    case 185439:
    {
        returnValue = F("Kieselhofstr.");
        break;
    }
    case 185440:
    {
        returnValue = F("Kieselhofweg");
        break;
    }
    case 185441:
    {
        returnValue = F("Kieselhorster Weg");
        break;
    }
    case 185442:
    {
        returnValue = F("Kieselhöhe");
        break;
    }
    case 185443:
    {
        returnValue = F("Kieselings Kamp");
        break;
    }
    case 185444:
    {
        returnValue = F("Kieselkaul");
        break;
    }
    case 185445:
    {
        returnValue = F("Kieselmühle");
        break;
    }
    case 185446:
    {
        returnValue = F("Kieselmühlweg");
        break;
    }
    case 185447:
    {
        returnValue = F("Kieselpfad");
        break;
    }
    case 185448:
    {
        returnValue = F("Kieselsche Wiesen");
        break;
    }
    case 185449:
    {
        returnValue = F("Kieselschorren");
        break;
    }
    case 185450:
    {
        returnValue = F("Kieselsgarten");
        break;
    }
    case 185451:
    {
        returnValue = F("Kieselsgrund");
        break;
    }
    case 185452:
    {
        returnValue = F("Kieselshöh");
        break;
    }
    case 185453:
    {
        returnValue = F("Kieselsteinweg");
        break;
    }
    case 185454:
    {
        returnValue = F("Kieselstr.");
        break;
    }
    case 185455:
    {
        returnValue = F("Kieselweg");
        break;
    }
    case 185456:
    {
        returnValue = F("Kieselwitzer Mühle");
        break;
    }
    case 185457:
    {
        returnValue = F("Kieselwitzer Str.");
        break;
    }
    case 185458:
    {
        returnValue = F("Kieselwitzer Weg");
        break;
    }
    case 185459:
    {
        returnValue = F("Kieseläcker");
        break;
    }
    case 185460:
    {
        returnValue = F("Kieseläckerweg");
        break;
    }
    case 185461:
    {
        returnValue = F("Kiesenbacher Str.");
        break;
    }
    case 185462:
    {
        returnValue = F("Kiesenberger Str.");
        break;
    }
    case 185463:
    {
        returnValue = F("Kiesenbergstr.");
        break;
    }
    case 185464:
    {
        returnValue = F("Kiesenbrink");
        break;
    }
    case 185465:
    {
        returnValue = F("Kiesendahlstr.");
        break;
    }
    case 185466:
    {
        returnValue = F("Kiesende");
        break;
    }
    case 185467:
    {
        returnValue = F("Kiesenfeldweg");
        break;
    }
    case 185468:
    {
        returnValue = F("Kiesersgasse");
        break;
    }
    case 185469:
    {
        returnValue = F("Kieserstr.");
        break;
    }
    case 185470:
    {
        returnValue = F("Kieserweg");
        break;
    }
    case 185471:
    {
        returnValue = F("Kiesgasse");
        break;
    }
    case 185472:
    {
        returnValue = F("Kiesgraben");
        break;
    }
    case 185473:
    {
        returnValue = F("Kiesgrabenweg");
        break;
    }
    case 185474:
    {
        returnValue = F("Kiesgrube");
        break;
    }
    case 185475:
    {
        returnValue = F("Kiesgrubenstr.");
        break;
    }
    case 185476:
    {
        returnValue = F("Kiesgrubenweg");
        break;
    }
    case 185477:
    {
        returnValue = F("Kiesgrubenzufahrt");
        break;
    }
    case 185478:
    {
        returnValue = F("Kiesgrubeweg");
        break;
    }
    case 185479:
    {
        returnValue = F("Kiesgrubäcker");
        break;
    }
    case 185480:
    {
        returnValue = F("Kiesgrund");
        break;
    }
    case 185481:
    {
        returnValue = F("Kiesgräble");
        break;
    }
    case 185482:
    {
        returnValue = F("Kiesgärten");
        break;
    }
    case 185483:
    {
        returnValue = F("Kieshof");
        break;
    }
    case 185484:
    {
        returnValue = F("Kieshofstr.");
        break;
    }
    case 185485:
    {
        returnValue = F("Kieskamp");
        break;
    }
    case 185486:
    {
        returnValue = F("Kieskaut");
        break;
    }
    case 185487:
    {
        returnValue = F("Kieskaut Schneise");
        break;
    }
    case 185488:
    {
        returnValue = F("Kieskautstr.");
        break;
    }
    case 185489:
    {
        returnValue = F("Kieskautweg");
        break;
    }
    case 185490:
    {
        returnValue = F("Kieskoppelbarg");
        break;
    }
    case 185491:
    {
        returnValue = F("Kieskuhle");
        break;
    }
    case 185492:
    {
        returnValue = F("Kieskuhlenweg");
        break;
    }
    case 185493:
    {
        returnValue = F("Kieskuppenweg");
        break;
    }
    case 185494:
    {
        returnValue = F("Kieskutenweg");
        break;
    }
    case 185495:
    {
        returnValue = F("Kieslau");
        break;
    }
    case 185496:
    {
        returnValue = F("Kieslerstr.");
        break;
    }
    case 185497:
    {
        returnValue = F("Kieslgasse");
        break;
    }
    case 185498:
    {
        returnValue = F("Kiesling");
        break;
    }
    case 185499:
    {
        returnValue = F("Kieslingstr.");
        break;
    }
    case 185500:
    {
        returnValue = F("Kieslinie");
        break;
    }
    case 185501:
    {
        returnValue = F("Kieslochweg");
        break;
    }
    case 185502:
    {
        returnValue = F("Kieslsteig");
        break;
    }
    case 185503:
    {
        returnValue = F("Kiesmühle");
        break;
    }
    case 185504:
    {
        returnValue = F("Kiespfädchen");
        break;
    }
    case 185505:
    {
        returnValue = F("Kiesplatz");
        break;
    }
    case 185506:
    {
        returnValue = F("Kiesschacht");
        break;
    }
    case 185507:
    {
        returnValue = F("Kiesschachtstr.");
        break;
    }
    case 185508:
    {
        returnValue = F("Kiesschneise");
        break;
    }
    case 185509:
    {
        returnValue = F("Kiesseestr.");
        break;
    }
    case 185510:
    {
        returnValue = F("Kiesseigenstr.");
        break;
    }
    case 185511:
    {
        returnValue = F("Kiesslersweg");
        break;
    }
    case 185512:
    {
        returnValue = F("Kiesslingstr.");
        break;
    }
    case 185513:
    {
        returnValue = F("Kiessteige");
        break;
    }
    case 185514:
    {
        returnValue = F("Kiesstr.");
        break;
    }
    case 185515:
    {
        returnValue = F("Kiesweg");
        break;
    }
    case 185516:
    {
        returnValue = F("Kieswegle");
        break;
    }
    case 185517:
    {
        returnValue = F("Kieswerk");
        break;
    }
    case 185518:
    {
        returnValue = F("Kieswerkstr.");
        break;
    }
    case 185519:
    {
        returnValue = F("Kieswinkelstr.");
        break;
    }
    case 185520:
    {
        returnValue = F("Kieswinkelweg");
        break;
    }
    case 185521:
    {
        returnValue = F("Kiesäcker");
        break;
    }
    case 185522:
    {
        returnValue = F("Kiesäckerstr.");
        break;
    }
    case 185523:
    {
        returnValue = F("Kiesäckerweg");
        break;
    }
    case 185524:
    {
        returnValue = F("Kietel");
        break;
    }
    case 185525:
    {
        returnValue = F("Kietelgasse");
        break;
    }
    case 185526:
    {
        returnValue = F("Kietelken");
        break;
    }
    case 185527:
    {
        returnValue = F("Kiether Str.");
        break;
    }
    case 185528:
    {
        returnValue = F("Kiethof");
        break;
    }
    case 185529:
    {
        returnValue = F("Kiethstr.");
        break;
    }
    case 185530:
    {
        returnValue = F("Kietz");
        break;
    }
    case 185531:
    {
        returnValue = F("Kietzer Berg");
        break;
    }
    case 185532:
    {
        returnValue = F("Kietzer Chaussee");
        break;
    }
    case 185533:
    {
        returnValue = F("Kietzer Chaussee - Altstadt");
        break;
    }
    case 185534:
    {
        returnValue = F("Kietzer Str.");
        break;
    }
    case 185535:
    {
        returnValue = F("Kietzer Weg");
        break;
    }
    case 185536:
    {
        returnValue = F("Kietzstr.");
        break;
    }
    case 185537:
    {
        returnValue = F("Kiewitsheide");
        break;
    }
    case 185538:
    {
        returnValue = F("Kiewitt");
        break;
    }
    case 185539:
    {
        returnValue = F("Kiewitthof");
        break;
    }
    case 185540:
    {
        returnValue = F("Kiewittkoppel");
        break;
    }
    case 185541:
    {
        returnValue = F("Kiewitts Twiete");
        break;
    }
    case 185542:
    {
        returnValue = F("Kiewittsholm");
        break;
    }
    case 185543:
    {
        returnValue = F("Kiewittstieg");
        break;
    }
    case 185544:
    {
        returnValue = F("Kiewittstr.");
        break;
    }
    case 185545:
    {
        returnValue = F("Kiewittweg");
        break;
    }
    case 185546:
    {
        returnValue = F("Kiewningstr.");
        break;
    }
    case 185547:
    {
        returnValue = F("Kiez");
        break;
    }
    case 185548:
    {
        returnValue = F("Kiezerstr.");
        break;
    }
    case 185549:
    {
        returnValue = F("Kiezstr.");
        break;
    }
    case 185550:
    {
        returnValue = F("Kießender Ring");
        break;
    }
    case 185551:
    {
        returnValue = F("Kießerdamm");
        break;
    }
    case 185552:
    {
        returnValue = F("Kießlingenweg");
        break;
    }
    case 185553:
    {
        returnValue = F("Kießlinger Str.");
        break;
    }
    case 185554:
    {
        returnValue = F("Kiffelberg");
        break;
    }
    case 185555:
    {
        returnValue = F("Kiffelstr.");
        break;
    }
    case 185556:
    {
        returnValue = F("Kiffenbrink");
        break;
    }
    case 185557:
    {
        returnValue = F("Kiffhaberstr.");
        break;
    }
    case 185558:
    {
        returnValue = F("Kihnstr.");
        break;
    }
    case 185559:
    {
        returnValue = F("Kihrleinweg");
        break;
    }
    case 185560:
    {
        returnValue = F("Kihrweg");
        break;
    }
    case 185561:
    {
        returnValue = F("Kikishart");
        break;
    }
    case 185562:
    {
        returnValue = F("Kilbachweg");
        break;
    }
    case 185563:
    {
        returnValue = F("Kilbackerstr.");
        break;
    }
    case 185564:
    {
        returnValue = F("Kilbigswasen");
        break;
    }
    case 185565:
    {
        returnValue = F("Kilchlochweg");
        break;
    }
    case 185566:
    {
        returnValue = F("Kilewardsweg");
        break;
    }
    case 185567:
    {
        returnValue = F("Kilgenbergweg");
        break;
    }
    case 185568:
    {
        returnValue = F("Kilgenweg");
        break;
    }
    case 185569:
    {
        returnValue = F("Kilgerstr.");
        break;
    }
    case 185570:
    {
        returnValue = F("Kilian");
        break;
    }
    case 185571:
    {
        returnValue = F("Kilian-Gesell-Str.");
        break;
    }
    case 185572:
    {
        returnValue = F("Kilian-Göbel-Str.");
        break;
    }
    case 185573:
    {
        returnValue = F("Kilian-Kirchhoff-Str.");
        break;
    }
    case 185574:
    {
        returnValue = F("Kilian-Leib-Str.");
        break;
    }
    case 185575:
    {
        returnValue = F("Kilian-Müller-Str.");
        break;
    }
    case 185576:
    {
        returnValue = F("Kilian-Nuß-Str.");
        break;
    }
    case 185577:
    {
        returnValue = F("Kilian-Pfennig-Platz");
        break;
    }
    case 185578:
    {
        returnValue = F("Kilian-Spiegel-Str.");
        break;
    }
    case 185579:
    {
        returnValue = F("Kilian-Str.");
        break;
    }
    case 185580:
    {
        returnValue = F("Kilian-Wallrapp-Str.");
        break;
    }
    case 185581:
    {
        returnValue = F("Kilian-Weber-Str.");
        break;
    }
    case 185582:
    {
        returnValue = F("Kilian-Weick-Str.");
        break;
    }
    case 185583:
    {
        returnValue = F("Kilianerweg");
        break;
    }
    case 185584:
    {
        returnValue = F("Kilianikirchgasse");
        break;
    }
    case 185585:
    {
        returnValue = F("Kilianipark");
        break;
    }
    case 185586:
    {
        returnValue = F("Kilianistr.");
        break;
    }
    case 185587:
    {
        returnValue = F("Kilianplatz");
        break;
    }
    case 185588:
    {
        returnValue = F("Kiliansberg");
        break;
    }
    case 185589:
    {
        returnValue = F("Kiliansbuckweg");
        break;
    }
    case 185590:
    {
        returnValue = F("Kiliansdorfer Höhe");
        break;
    }
    case 185591:
    {
        returnValue = F("Kiliansgasse");
        break;
    }
    case 185592:
    {
        returnValue = F("Kiliansgraben");
        break;
    }
    case 185593:
    {
        returnValue = F("Kilianshof");
        break;
    }
    case 185594:
    {
        returnValue = F("Kiliansiedlung");
        break;
    }
    case 185595:
    {
        returnValue = F("Kiliansplatz");
        break;
    }
    case 185596:
    {
        returnValue = F("Kiliansring");
        break;
    }
    case 185597:
    {
        returnValue = F("Kilianstor");
        break;
    }
    case 185598:
    {
        returnValue = F("Kilianstr.");
        break;
    }
    case 185599:
    {
        returnValue = F("Kilianstriesch");
        break;
    }
    case 185600:
    {
        returnValue = F("Kilianstädter Str.");
        break;
    }
    case 185601:
    {
        returnValue = F("Kiliansweg");
        break;
    }
    case 185602:
    {
        returnValue = F("Kilianusstr.");
        break;
    }
    case 185603:
    {
        returnValue = F("Kilicheimstr.");
        break;
    }
    case 185604:
    {
        returnValue = F("Kilkeweg");
        break;
    }
    case 185605:
    {
        returnValue = F("Killacker");
        break;
    }
    case 185606:
    {
        returnValue = F("Killbergstr.");
        break;
    }
    case 185607:
    {
        returnValue = F("Killbergweg");
        break;
    }
    case 185608:
    {
        returnValue = F("Killenfeldstr.");
        break;
    }
    case 185609:
    {
        returnValue = F("Killengehrenweg");
        break;
    }
    case 185610:
    {
        returnValue = F("Killerberg");
        break;
    }
    case 185611:
    {
        returnValue = F("Killerbergstr.");
        break;
    }
    case 185612:
    {
        returnValue = F("Killerbergweg");
        break;
    }
    case 185613:
    {
        returnValue = F("Killergasse");
        break;
    }
    case 185614:
    {
        returnValue = F("Killermannstr.");
        break;
    }
    case 185615:
    {
        returnValue = F("Killersberg");
        break;
    }
    case 185616:
    {
        returnValue = F("Killerstr.");
        break;
    }
    case 185617:
    {
        returnValue = F("Killersweg");
        break;
    }
    case 185618:
    {
        returnValue = F("Killertalstr.");
        break;
    }
    case 185619:
    {
        returnValue = F("Killerweg");
        break;
    }
    case 185620:
    {
        returnValue = F("Killerweitweg");
        break;
    }
    case 185621:
    {
        returnValue = F("Killeschlader Weg");
        break;
    }
    case 185622:
    {
        returnValue = F("Killesgasse");
        break;
    }
    case 185623:
    {
        returnValue = F("Killesrainstr.");
        break;
    }
    case 185624:
    {
        returnValue = F("Killesweg");
        break;
    }
    case 185625:
    {
        returnValue = F("Killewittchen");
        break;
    }
    case 185626:
    {
        returnValue = F("Killiansweg");
        break;
    }
    case 185627:
    {
        returnValue = F("Killinger Str.");
        break;
    }
    case 185628:
    {
        returnValue = F("Killingerstr.");
        break;
    }
    case 185629:
    {
        returnValue = F("Killingstr.");
        break;
    }
    case 185630:
    {
        returnValue = F("Killistr.");
        break;
    }
    case 185631:
    {
        returnValue = F("Killweg");
        break;
    }
    case 185632:
    {
        returnValue = F("Killwiese");
        break;
    }
    case 185633:
    {
        returnValue = F("Killwiesen");
        break;
    }
    case 185634:
    {
        returnValue = F("Killwiesenweg");
        break;
    }
    case 185635:
    {
        returnValue = F("Kilmeckweg");
        break;
    }
    case 185636:
    {
        returnValue = F("Kilpengasse");
        break;
    }
    case 185637:
    {
        returnValue = F("Kilpensträßchen");
        break;
    }
    case 185638:
    {
        returnValue = F("Kilpensträßle");
        break;
    }
    case 185639:
    {
        returnValue = F("Kilpenweg");
        break;
    }
    case 185640:
    {
        returnValue = F("Kilsbacher Str.");
        break;
    }
    case 185641:
    {
        returnValue = F("Kilsbacher Weg");
        break;
    }
    case 185642:
    {
        returnValue = F("Kilstig");
        break;
    }
    case 185643:
    {
        returnValue = F("Kiltrahinger Str.");
        break;
    }
    case 185644:
    {
        returnValue = F("Kilverstr.");
        break;
    }
    case 185645:
    {
        returnValue = F("Kilvertzheide");
        break;
    }
    case 185646:
    {
        returnValue = F("Kilvertzhof");
        break;
    }
    case 185647:
    {
        returnValue = F("Kilz -Allee");
        break;
    }
    case 185648:
    {
        returnValue = F("Kilzweg");
        break;
    }
    case 185649:
    {
        returnValue = F("Kimbacher Str.");
        break;
    }
    case 185650:
    {
        returnValue = F("Kimberleystr.");
        break;
    }
    case 185651:
    {
        returnValue = F("Kimbernstr.");
        break;
    }
    case 185652:
    {
        returnValue = F("Kimbernweg");
        break;
    }
    case 185653:
    {
        returnValue = F("Kimelstr.");
        break;
    }
    case 185654:
    {
        returnValue = F("Kimgesgartenweg");
        break;
    }
    case 185655:
    {
        returnValue = F("Kimicker Str.");
        break;
    }
    case 185656:
    {
        returnValue = F("Kimmelgarten");
        break;
    }
    case 185657:
    {
        returnValue = F("Kimmelgasse");
        break;
    }
    case 185658:
    {
        returnValue = F("Kimmelgässle");
        break;
    }
    case 185659:
    {
        returnValue = F("Kimmelhorstweg");
        break;
    }
    case 185660:
    {
        returnValue = F("Kimmelsheck");
        break;
    }
    case 185661:
    {
        returnValue = F("Kimmenauer Weg");
        break;
    }
    case 185662:
    {
        returnValue = F("Kimmer Landstr.");
        break;
    }
    case 185663:
    {
        returnValue = F("Kimmer Str.");
        break;
    }
    case 185664:
    {
        returnValue = F("Kimmerle-Ring");
        break;
    }
    case 185665:
    {
        returnValue = F("Kimmichsweilersteige");
        break;
    }
    case 185666:
    {
        returnValue = F("Kimmichsweilerweg");
        break;
    }
    case 185667:
    {
        returnValue = F("Kimmichwiesen");
        break;
    }
    case 185668:
    {
        returnValue = F("Kimming");
        break;
    }
    case 185669:
    {
        returnValue = F("Kimmlerhof");
        break;
    }
    case 185670:
    {
        returnValue = F("Kimmlingen");
        break;
    }
    case 185671:
    {
        returnValue = F("Kimmlinger Str.");
        break;
    }
    case 185672:
    {
        returnValue = F("Kimmstr.");
        break;
    }
    case 185673:
    {
        returnValue = F("Kimodenstr.");
        break;
    }
    case 185674:
    {
        returnValue = F("Kimpelweg");
        break;
    }
    case 185675:
    {
        returnValue = F("Kimplerstr.");
        break;
    }
    case 185676:
    {
        returnValue = F("Kimpolunger Str.");
        break;
    }
    case 185677:
    {
        returnValue = F("Kimratshofer Str.");
        break;
    }
    case 185678:
    {
        returnValue = F("Kimry-Platz");
        break;
    }
    case 185679:
    {
        returnValue = F("Kinaderweg");
        break;
    }
    case 185680:
    {
        returnValue = F("Kinaustr.");
        break;
    }
    case 185681:
    {
        returnValue = F("Kinauweg");
        break;
    }
    case 185682:
    {
        returnValue = F("Kincsemstr.");
        break;
    }
    case 185683:
    {
        returnValue = F("Kindelberg");
        break;
    }
    case 185684:
    {
        returnValue = F("Kindelbergstr.");
        break;
    }
    case 185685:
    {
        returnValue = F("Kindelbergweg");
        break;
    }
    case 185686:
    {
        returnValue = F("Kindelbrücker Str.");
        break;
    }
    case 185687:
    {
        returnValue = F("Kindelsbergstr.");
        break;
    }
    case 185688:
    {
        returnValue = F("Kindelwaldpromenade");
        break;
    }
    case 185689:
    {
        returnValue = F("Kindelweg");
        break;
    }
    case 185690:
    {
        returnValue = F("Kindenheimer Str.");
        break;
    }
    case 185691:
    {
        returnValue = F("Kindenheimer Weg");
        break;
    }
    case 185692:
    {
        returnValue = F("Kinderberg");
        break;
    }
    case 185693:
    {
        returnValue = F("Kinderbusch");
        break;
    }
    case 185694:
    {
        returnValue = F("Kinderdorfstr.");
        break;
    }
    case 185695:
    {
        returnValue = F("Kindererlebnisweg im Zauberwald");
        break;
    }
    case 185696:
    {
        returnValue = F("Kindergang");
        break;
    }
    case 185697:
    {
        returnValue = F("Kindergarten");
        break;
    }
    case 185698:
    {
        returnValue = F("Kindergarten Mühlenwichtel");
        break;
    }
    case 185699:
    {
        returnValue = F("Kindergarten Sankt Tosso");
        break;
    }
    case 185700:
    {
        returnValue = F("Kindergartenbrücke");
        break;
    }
    case 185701:
    {
        returnValue = F("Kindergartengelände");
        break;
    }
    case 185702:
    {
        returnValue = F("Kindergartengässel");
        break;
    }
    case 185703:
    {
        returnValue = F("Kindergartengässle");
        break;
    }
    case 185704:
    {
        returnValue = F("Kindergartenstr.");
        break;
    }
    case 185705:
    {
        returnValue = F("Kindergartenweg");
        break;
    }
    case 185706:
    {
        returnValue = F("Kindergasse");
        break;
    }
    case 185707:
    {
        returnValue = F("Kindergäßchen");
        break;
    }
    case 185708:
    {
        returnValue = F("Kinderhausen");
        break;
    }
    case 185709:
    {
        returnValue = F("Kinderheimgasse");
        break;
    }
    case 185710:
    {
        returnValue = F("Kinderheimgäßchen");
        break;
    }
    case 185711:
    {
        returnValue = F("Kinderheimstr.");
        break;
    }
    case 185712:
    {
        returnValue = F("Kinderheimweg");
        break;
    }
    case 185713:
    {
        returnValue = F("Kinderkrippe \"Zwergnase");
        break;
    }
    case 185714:
    {
        returnValue = F("Kinderkurstr.");
        break;
    }
    case 185715:
    {
        returnValue = F("Kinderlandweg");
        break;
    }
    case 185716:
    {
        returnValue = F("Kinderlehre");
        break;
    }
    case 185717:
    {
        returnValue = F("Kinderliedsweg");
        break;
    }
    case 185718:
    {
        returnValue = F("Kinderloreweg");
        break;
    }
    case 185719:
    {
        returnValue = F("Kindermanndenkmal");
        break;
    }
    case 185720:
    {
        returnValue = F("Kindermannstr.");
        break;
    }
    case 185721:
    {
        returnValue = F("Kinderrechte: Station 16 \"Genesis");
        break;
    }
    case 185722:
    {
        returnValue = F("Kinderschulgasse");
        break;
    }
    case 185723:
    {
        returnValue = F("Kinderschulstr.");
        break;
    }
    case 185724:
    {
        returnValue = F("Kinderschulweg");
        break;
    }
    case 185725:
    {
        returnValue = F("Kinderschulwegle");
        break;
    }
    case 185726:
    {
        returnValue = F("Kinderspace");
        break;
    }
    case 185727:
    {
        returnValue = F("Kinderspielpark Schwaderfeld");
        break;
    }
    case 185728:
    {
        returnValue = F("Kinderspielplatz");
        break;
    }
    case 185729:
    {
        returnValue = F("Kinderstrand");
        break;
    }
    case 185730:
    {
        returnValue = F("Kindertagesstätte Rotkopf Görg");
        break;
    }
    case 185731:
    {
        returnValue = F("Kinderwald");
        break;
    }
    case 185732:
    {
        returnValue = F("Kinderweide");
        break;
    }
    case 185733:
    {
        returnValue = F("Kinderwiesenstr.");
        break;
    }
    case 185734:
    {
        returnValue = F("Kinderöder Str.");
        break;
    }
    case 185735:
    {
        returnValue = F("Kindinger Str.");
        break;
    }
    case 185736:
    {
        returnValue = F("Kindinger Weg");
        break;
    }
    case 185737:
    {
        returnValue = F("Kindingerstr.");
        break;
    }
    case 185738:
    {
        returnValue = F("Kindlaser Weg");
        break;
    }
    case 185739:
    {
        returnValue = F("Kindleber Str.");
        break;
    }
    case 185740:
    {
        returnValue = F("Kindleber Weg");
        break;
    }
    case 185741:
    {
        returnValue = F("Kindlebildkreisel");
        break;
    }
    case 185742:
    {
        returnValue = F("Kindlebildstr.");
        break;
    }
    case 185743:
    {
        returnValue = F("Kindleinsberg");
        break;
    }
    case 185744:
    {
        returnValue = F("Kindleinseiche");
        break;
    }
    case 185745:
    {
        returnValue = F("Kindlesbrunnen");
        break;
    }
    case 185746:
    {
        returnValue = F("Kindletalweg");
        break;
    }
    case 185747:
    {
        returnValue = F("Kindlewaldweg");
        break;
    }
    case 185748:
    {
        returnValue = F("Kindlmühlestr.");
        break;
    }
    case 185749:
    {
        returnValue = F("Kindlpoint");
        break;
    }
    case 185750:
    {
        returnValue = F("Kindlweg");
        break;
    }
    case 185751:
    {
        returnValue = F("Kindsbacher Str.");
        break;
    }
    case 185752:
    {
        returnValue = F("Kindsberg");
        break;
    }
    case 185753:
    {
        returnValue = F("Kindsbergweg");
        break;
    }
    case 185754:
    {
        returnValue = F("Kindsbild-Schneise");
        break;
    }
    case 185755:
    {
        returnValue = F("Kindsburg");
        break;
    }
    case 185756:
    {
        returnValue = F("Kindsbühlstr.");
        break;
    }
    case 185757:
    {
        returnValue = F("Kindshäger Weg");
        break;
    }
    case 185758:
    {
        returnValue = F("Kindsweg");
        break;
    }
    case 185759:
    {
        returnValue = F("Kindt");
        break;
    }
    case 185760:
    {
        returnValue = F("Kindtalstr.");
        break;
    }
    case 185761:
    {
        returnValue = F("Kindter Str.");
        break;
    }
    case 185762:
    {
        returnValue = F("Kindäcker Weg");
        break;
    }
    case 185763:
    {
        returnValue = F("Kingelweg");
        break;
    }
    case 185764:
    {
        returnValue = F("Kingentalstr.");
        break;
    }
    case 185765:
    {
        returnValue = F("Kingersheimer Str.");
        break;
    }
    case 185766:
    {
        returnValue = F("Kingsbridgering");
        break;
    }
    case 185767:
    {
        returnValue = F("Kingskerswellweg");
        break;
    }
    case 185768:
    {
        returnValue = F("Kingsleyallee");
        break;
    }
    case 185769:
    {
        returnValue = F("Kingston-Str.");
        break;
    }
    case 185770:
    {
        returnValue = F("King´s-Lynn-Str.");
        break;
    }
    case 185771:
    {
        returnValue = F("Kinheimer Str.");
        break;
    }
    case 185772:
    {
        returnValue = F("Kinibauerweg");
        break;
    }
    case 185773:
    {
        returnValue = F("Kinkelbach");
        break;
    }
    case 185774:
    {
        returnValue = F("Kinkelbrink");
        break;
    }
    case 185775:
    {
        returnValue = F("Kinkelin Passage");
        break;
    }
    case 185776:
    {
        returnValue = F("Kinkelstr.");
        break;
    }
    case 185777:
    {
        returnValue = F("Kinkweg");
        break;
    }
    case 185778:
    {
        returnValue = F("Kinnenbitze");
        break;
    }
    case 185779:
    {
        returnValue = F("Kinnerpadd");
        break;
    }
    case 185780:
    {
        returnValue = F("Kinnersberg");
        break;
    }
    case 185781:
    {
        returnValue = F("Kinnheimer Berg");
        break;
    }
    case 185782:
    {
        returnValue = F("Kinnsfelstunnel");
        break;
    }
    case 185783:
    {
        returnValue = F("Kinnstr.");
        break;
    }
    case 185784:
    {
        returnValue = F("Kinnstädterlachenschneise");
        break;
    }
    case 185785:
    {
        returnValue = F("Kinnweg");
        break;
    }
    case 185786:
    {
        returnValue = F("Kino Passage");
        break;
    }
    case 185787:
    {
        returnValue = F("Kino-Passage");
        break;
    }
    case 185788:
    {
        returnValue = F("Kinobrücke");
        break;
    }
    case 185789:
    {
        returnValue = F("Kinogasse");
        break;
    }
    case 185790:
    {
        returnValue = F("Kinogässchen");
        break;
    }
    case 185791:
    {
        returnValue = F("Kinogäßchen");
        break;
    }
    case 185792:
    {
        returnValue = F("Kinopassage");
        break;
    }
    case 185793:
    {
        returnValue = F("Kinopolis-Center");
        break;
    }
    case 185794:
    {
        returnValue = F("Kinostr.");
        break;
    }
    case 185795:
    {
        returnValue = F("Kinoweg");
        break;
    }
    case 185796:
    {
        returnValue = F("Kinrode");
        break;
    }
    case 185797:
    {
        returnValue = F("Kinsachstr.");
        break;
    }
    case 185798:
    {
        returnValue = F("Kinsachweg");
        break;
    }
    case 185799:
    {
        returnValue = F("Kinsauer Str.");
        break;
    }
    case 185800:
    {
        returnValue = F("Kinsbachpark");
        break;
    }
    case 185801:
    {
        returnValue = F("Kinscherfstr.");
        break;
    }
    case 185802:
    {
        returnValue = F("Kinsfeld");
        break;
    }
    case 185803:
    {
        returnValue = F("Kinsheck");
        break;
    }
    case 185804:
    {
        returnValue = F("Kinsing");
        break;
    }
    case 185805:
    {
        returnValue = F("Kinskamp");
        break;
    }
    case 185806:
    {
        returnValue = F("Kinskoferstr.");
        break;
    }
    case 185807:
    {
        returnValue = F("Kinsleystr.");
        break;
    }
    case 185808:
    {
        returnValue = F("Kinzelmannstr.");
        break;
    }
    case 185809:
    {
        returnValue = F("Kinzenbacher Str.");
        break;
    }
    case 185810:
    {
        returnValue = F("Kinzertweg");
        break;
    }
    case 185811:
    {
        returnValue = F("Kinzgring Spielplatz");
        break;
    }
    case 185812:
    {
        returnValue = F("Kinzigallee");
        break;
    }
    case 185813:
    {
        returnValue = F("Kinzigdamm");
        break;
    }
    case 185814:
    {
        returnValue = F("Kinzigdamm Radweg Straßburg-Offenburg");
        break;
    }
    case 185815:
    {
        returnValue = F("Kinziger Str.");
        break;
    }
    case 185816:
    {
        returnValue = F("Kinziggasse");
        break;
    }
    case 185817:
    {
        returnValue = F("Kinzigheimer Weg");
        break;
    }
    case 185818:
    {
        returnValue = F("Kinzigpark");
        break;
    }
    case 185819:
    {
        returnValue = F("Kinzigring");
        break;
    }
    case 185820:
    {
        returnValue = F("Kinzigsteg");
        break;
    }
    case 185821:
    {
        returnValue = F("Kinzigstr.");
        break;
    }
    case 185822:
    {
        returnValue = F("Kinzigtalblick");
        break;
    }
    case 185823:
    {
        returnValue = F("Kinzigtalstr.");
        break;
    }
    case 185824:
    {
        returnValue = F("Kinzigweg");
        break;
    }
    case 185825:
    {
        returnValue = F("Kinzingstr.");
        break;
    }
    case 185826:
    {
        returnValue = F("Kinzweilerstr.");
        break;
    }
    case 185827:
    {
        returnValue = F("Kipdorf");
        break;
    }
    case 185828:
    {
        returnValue = F("Kipfbühlstr.");
        break;
    }
    case 185829:
    {
        returnValue = F("Kipfelerweg");
        break;
    }
    case 185830:
    {
        returnValue = F("Kipfelsbachweg");
        break;
    }
    case 185831:
    {
        returnValue = F("Kipfenberger Str.");
        break;
    }
    case 185832:
    {
        returnValue = F("Kipfenberger Weg");
        break;
    }
    case 185833:
    {
        returnValue = F("Kipfendorfer Str.");
        break;
    }
    case 185834:
    {
        returnValue = F("Kipfingergasse");
        break;
    }
    case 185835:
    {
        returnValue = F("Kipkerstiege");
        break;
    }
    case 185836:
    {
        returnValue = F("Kippchesweg");
        break;
    }
    case 185837:
    {
        returnValue = F("Kippdorfstr.");
        break;
    }
    case 185838:
    {
        returnValue = F("Kippe");
        break;
    }
    case 185839:
    {
        returnValue = F("Kippekausen");
        break;
    }
    case 185840:
    {
        returnValue = F("Kippekofen");
        break;
    }
    case 185841:
    {
        returnValue = F("Kippelbachstr.");
        break;
    }
    case 185842:
    {
        returnValue = F("Kippelberg");
        break;
    }
    case 185843:
    {
        returnValue = F("Kippenhardt");
        break;
    }
    case 185844:
    {
        returnValue = F("Kippenhauser Str.");
        break;
    }
    case 185845:
    {
        returnValue = F("Kippenheimer Str.");
        break;
    }
    case 185846:
    {
        returnValue = F("Kippenhorn");
        break;
    }
    case 185847:
    {
        returnValue = F("Kippenser Weg");
        break;
    }
    case 185848:
    {
        returnValue = F("Kippenwang");
        break;
    }
    case 185849:
    {
        returnValue = F("Kippenwech");
        break;
    }
    case 185850:
    {
        returnValue = F("Kippenweg");
        break;
    }
    case 185851:
    {
        returnValue = F("Kippergasse");
        break;
    }
    case 185852:
    {
        returnValue = F("Kipperstal");
        break;
    }
    case 185853:
    {
        returnValue = F("Kipperstr.");
        break;
    }
    case 185854:
    {
        returnValue = F("Kippesweg");
        break;
    }
    case 185855:
    {
        returnValue = F("Kippheide");
        break;
    }
    case 185856:
    {
        returnValue = F("Kippholz");
        break;
    }
    case 185857:
    {
        returnValue = F("Kippinger Str.");
        break;
    }
    case 185858:
    {
        returnValue = F("Kippshütte");
        break;
    }
    case 185859:
    {
        returnValue = F("Kippstr.");
        break;
    }
    case 185860:
    {
        returnValue = F("Kipptorstr.");
        break;
    }
    case 185861:
    {
        returnValue = F("Kippweg");
        break;
    }
    case 185862:
    {
        returnValue = F("Kipsenstr.");
        break;
    }
    case 185863:
    {
        returnValue = F("Kipsenweg");
        break;
    }
    case 185864:
    {
        returnValue = F("Kipstiege");
        break;
    }
    case 185865:
    {
        returnValue = F("Kipsweg");
        break;
    }
    case 185866:
    {
        returnValue = F("Kirbach");
        break;
    }
    case 185867:
    {
        returnValue = F("Kirbachhofstr.");
        break;
    }
    case 185868:
    {
        returnValue = F("Kirbachstr.");
        break;
    }
    case 185869:
    {
        returnValue = F("Kirberg");
        break;
    }
    case 185870:
    {
        returnValue = F("Kirberger Str.");
        break;
    }
    case 185871:
    {
        returnValue = F("Kirbergsgarten");
        break;
    }
    case 185872:
    {
        returnValue = F("Kirbergstr.");
        break;
    }
    case 185873:
    {
        returnValue = F("Kirbergweg");
        break;
    }
    case 185874:
    {
        returnValue = F("Kirberichshofer Weg");
        break;
    }
    case 185875:
    {
        returnValue = F("Kirbisacker");
        break;
    }
    case 185876:
    {
        returnValue = F("Kirbsenkopf");
        break;
    }
    case 185877:
    {
        returnValue = F("Kirburger Str.");
        break;
    }
    case 185878:
    {
        returnValue = F("Kirch Baggendorf");
        break;
    }
    case 185879:
    {
        returnValue = F("Kirch Kogel");
        break;
    }
    case 185880:
    {
        returnValue = F("Kirch Mulsower Dorfstr.");
        break;
    }
    case 185881:
    {
        returnValue = F("Kirch Mulsower Hofstr.");
        break;
    }
    case 185882:
    {
        returnValue = F("Kirch Park");
        break;
    }
    case 185883:
    {
        returnValue = F("Kirch-Gönser-Weg");
        break;
    }
    case 185884:
    {
        returnValue = F("Kirch-Park");
        break;
    }
    case 185885:
    {
        returnValue = F("Kirch-Steig");
        break;
    }
    case 185886:
    {
        returnValue = F("Kirchacker");
        break;
    }
    case 185887:
    {
        returnValue = F("Kirchackerring");
        break;
    }
    case 185888:
    {
        returnValue = F("Kirchackerstr.");
        break;
    }
    case 185889:
    {
        returnValue = F("Kirchackerweg");
        break;
    }
    case 185890:
    {
        returnValue = F("Kirchahorn");
        break;
    }
    case 185891:
    {
        returnValue = F("Kirchallee");
        break;
    }
    case 185892:
    {
        returnValue = F("Kirchanger");
        break;
    }
    case 185893:
    {
        returnValue = F("Kirchangerweg");
        break;
    }
    case 185894:
    {
        returnValue = F("Kirchanhausener Weg");
        break;
    }
    case 185895:
    {
        returnValue = F("Kirchardter Str.");
        break;
    }
    case 185896:
    {
        returnValue = F("Kirchardter Weg");
        break;
    }
    case 185897:
    {
        returnValue = F("Kirchardtsbrunnen");
        break;
    }
    case 185898:
    {
        returnValue = F("Kirchaue");
        break;
    }
    case 185899:
    {
        returnValue = F("Kirchauweg");
        break;
    }
    case 185900:
    {
        returnValue = F("Kirchbach");
        break;
    }
    case 185901:
    {
        returnValue = F("Kirchbacher Str.");
        break;
    }
    case 185902:
    {
        returnValue = F("Kirchbachfeld");
        break;
    }
    case 185903:
    {
        returnValue = F("Kirchbachgasse");
        break;
    }
    case 185904:
    {
        returnValue = F("Kirchbachhalde");
        break;
    }
    case 185905:
    {
        returnValue = F("Kirchbachlweg");
        break;
    }
    case 185906:
    {
        returnValue = F("Kirchbachstr.");
        break;
    }
    case 185907:
    {
        returnValue = F("Kirchbachweg");
        break;
    }
    case 185908:
    {
        returnValue = F("Kirchbauerngasse");
        break;
    }
    case 185909:
    {
        returnValue = F("Kirchbauerschaft");
        break;
    }
    case 185910:
    {
        returnValue = F("Kirchbaumallee");
        break;
    }
    case 185911:
    {
        returnValue = F("Kirchbaumstr.");
        break;
    }
    case 185912:
    {
        returnValue = F("Kirchbaumweg");
        break;
    }
    case 185913:
    {
        returnValue = F("Kirchbaunaer Str.");
        break;
    }
    case 185914:
    {
        returnValue = F("Kirchbenden");
        break;
    }
    case 185915:
    {
        returnValue = F("Kirchberg");
        break;
    }
    case 185916:
    {
        returnValue = F("Kirchberg Nord");
        break;
    }
    case 185917:
    {
        returnValue = F("Kirchberg-Hohlensteinerweg");
        break;
    }
    case 185918:
    {
        returnValue = F("Kirchberganlage");
        break;
    }
    case 185919:
    {
        returnValue = F("Kirchberger Pfad");
        break;
    }
    case 185920:
    {
        returnValue = F("Kirchberger Ring");
        break;
    }
    case 185921:
    {
        returnValue = F("Kirchberger Str.");
        break;
    }
    case 185922:
    {
        returnValue = F("Kirchberger Weg");
        break;
    }
    case 185923:
    {
        returnValue = F("Kirchberggasse");
        break;
    }
    case 185924:
    {
        returnValue = F("Kirchbergring");
        break;
    }
    case 185925:
    {
        returnValue = F("Kirchbergsfeld");
        break;
    }
    case 185926:
    {
        returnValue = F("Kirchbergsiedlung");
        break;
    }
    case 185927:
    {
        returnValue = F("Kirchbergsteig");
        break;
    }
    case 185928:
    {
        returnValue = F("Kirchbergstr.");
        break;
    }
    case 185929:
    {
        returnValue = F("Kirchbergweg");
        break;
    }
    case 185930:
    {
        returnValue = F("Kirchbergäcker");
        break;
    }
    case 185931:
    {
        returnValue = F("Kirchbichl");
        break;
    }
    case 185932:
    {
        returnValue = F("Kirchbichl-Rundweg");
        break;
    }
    case 185933:
    {
        returnValue = F("Kirchbichler Str.");
        break;
    }
    case 185934:
    {
        returnValue = F("Kirchbichlweg");
        break;
    }
    case 185935:
    {
        returnValue = F("Kirchbierlinger Str.");
        break;
    }
    case 185936:
    {
        returnValue = F("Kirchbitz");
        break;
    }
    case 185937:
    {
        returnValue = F("Kirchbitze");
        break;
    }
    case 185938:
    {
        returnValue = F("Kirchbitzgasse");
        break;
    }
    case 185939:
    {
        returnValue = F("Kirchblick");
        break;
    }
    case 185940:
    {
        returnValue = F("Kirchbodenstr.");
        break;
    }
    case 185941:
    {
        returnValue = F("Kirchbogen");
        break;
    }
    case 185942:
    {
        returnValue = F("Kirchborchener Str.");
        break;
    }
    case 185943:
    {
        returnValue = F("Kirchborgum");
        break;
    }
    case 185944:
    {
        returnValue = F("Kirchborngasse");
        break;
    }
    case 185945:
    {
        returnValue = F("Kirchbornstr.");
        break;
    }
    case 185946:
    {
        returnValue = F("Kirchbrachter Weg");
        break;
    }
    case 185947:
    {
        returnValue = F("Kirchbrede");
        break;
    }
    case 185948:
    {
        returnValue = F("Kirchbredenstr.");
        break;
    }
    case 185949:
    {
        returnValue = F("Kirchbreede");
        break;
    }
    case 185950:
    {
        returnValue = F("Kirchbreite");
        break;
    }
    case 185951:
    {
        returnValue = F("Kirchbrink");
        break;
    }
    case 185952:
    {
        returnValue = F("Kirchbrinkweg");
        break;
    }
    case 185953:
    {
        returnValue = F("Kirchbrombacher Str.");
        break;
    }
    case 185954:
    {
        returnValue = F("Kirchbruch");
        break;
    }
    case 185955:
    {
        returnValue = F("Kirchbruchstr.");
        break;
    }
    case 185956:
    {
        returnValue = F("Kirchbrunnen");
        break;
    }
    case 185957:
    {
        returnValue = F("Kirchbrunnengasse");
        break;
    }
    case 185958:
    {
        returnValue = F("Kirchbrunnenstr.");
        break;
    }
    case 185959:
    {
        returnValue = F("Kirchbrunnenweg");
        break;
    }
    case 185960:
    {
        returnValue = F("Kirchbrunner Feld");
        break;
    }
    case 185961:
    {
        returnValue = F("Kirchbrächter Weg");
        break;
    }
    case 185962:
    {
        returnValue = F("Kirchbrändelring");
        break;
    }
    case 185963:
    {
        returnValue = F("Kirchbrücke");
        break;
    }
    case 185964:
    {
        returnValue = F("Kirchbründlstr.");
        break;
    }
    case 185965:
    {
        returnValue = F("Kirchbuck");
        break;
    }
    case 185966:
    {
        returnValue = F("Kirchbuckel");
        break;
    }
    case 185967:
    {
        returnValue = F("Kirchbuckel/Kirchterrasse");
        break;
    }
    case 185968:
    {
        returnValue = F("Kirchbuckweg");
        break;
    }
    case 185969:
    {
        returnValue = F("Kirchbusch");
        break;
    }
    case 185970:
    {
        returnValue = F("Kirchbuschweg");
        break;
    }
    case 185971:
    {
        returnValue = F("Kirchbüchel");
        break;
    }
    case 185972:
    {
        returnValue = F("Kirchbühl");
        break;
    }
    case 185973:
    {
        returnValue = F("Kirchbühlstr.");
        break;
    }
    case 185974:
    {
        returnValue = F("Kirchbühlweg");
        break;
    }
    case 185975:
    {
        returnValue = F("Kirchbülten");
        break;
    }
    case 185976:
    {
        returnValue = F("Kirchdamm");
        break;
    }
    case 185977:
    {
        returnValue = F("Kirchdeich");
        break;
    }
    case 185978:
    {
        returnValue = F("Kirchdell");
        break;
    }
    case 185979:
    {
        returnValue = F("Kirchditmolder Str.");
        break;
    }
    case 185980:
    {
        returnValue = F("Kirchdorf");
        break;
    }
    case 185981:
    {
        returnValue = F("Kirchdorfer Feld");
        break;
    }
    case 185982:
    {
        returnValue = F("Kirchdorfer Kreisel");
        break;
    }
    case 185983:
    {
        returnValue = F("Kirchdorfer Rehr");
        break;
    }
    case 185984:
    {
        returnValue = F("Kirchdorfer Ring");
        break;
    }
    case 185985:
    {
        returnValue = F("Kirchdorfer Str.");
        break;
    }
    case 185986:
    {
        returnValue = F("Kirchdorfer Weg");
        break;
    }
    case 185987:
    {
        returnValue = F("Kirchdorfgasse");
        break;
    }
    case 185988:
    {
        returnValue = F("Kirchdorfstr.");
        break;
    }
    case 185989:
    {
        returnValue = F("Kirchdorföd");
        break;
    }
    case 185990:
    {
        returnValue = F("Kirchducht");
        break;
    }
    case 185991:
    {
        returnValue = F("Kirchdöll");
        break;
    }
    case 185992:
    {
        returnValue = F("Kirche");
        break;
    }
    case 185993:
    {
        returnValue = F("Kirche Hörnerkirchen");
        break;
    }
    case 185994:
    {
        returnValue = F("Kirche Oberachern");
        break;
    }
    case 185995:
    {
        returnValue = F("Kirche im Grünen");
        break;
    }
    case 185996:
    {
        returnValue = F("Kircheck");
        break;
    }
    case 185997:
    {
        returnValue = F("Kirchecke");
        break;
    }
    case 185998:
    {
        returnValue = F("Kircheckgasse");
        break;
    }
    case 185999:
    {
        returnValue = F("Kircheckweg");
        break;
    }
    case 186000:
    {
        returnValue = F("Kircheggarten");
        break;
    }
    case 186001:
    {
        returnValue = F("Kirchegässel");
        break;
    }
    case 186002:
    {
        returnValue = F("Kirchehrenbacher Str.");
        break;
    }
    case 186003:
    {
        returnValue = F("Kircheiber Born");
        break;
    }
    case 186004:
    {
        returnValue = F("Kircheiber Str.");
        break;
    }
    case 186005:
    {
        returnValue = F("Kircheichstr.");
        break;
    }
    case 186006:
    {
        returnValue = F("Kircheitz");
        break;
    }
    case 186007:
    {
        returnValue = F("Kirchellerstr.");
        break;
    }
    case 186008:
    {
        returnValue = F("Kirchelweg");
        break;
    }
    case 186009:
    {
        returnValue = F("Kirchen-Geräumt");
        break;
    }
    case 186010:
    {
        returnValue = F("Kirchen-Platz");
        break;
    }
    case 186011:
    {
        returnValue = F("Kirchenacker");
        break;
    }
    case 186012:
    {
        returnValue = F("Kirchenackerstr.");
        break;
    }
    case 186013:
    {
        returnValue = F("Kirchenackerweg");
        break;
    }
    case 186014:
    {
        returnValue = F("Kirchenallee");
        break;
    }
    case 186015:
    {
        returnValue = F("Kirchenanger");
        break;
    }
    case 186016:
    {
        returnValue = F("Kirchenau");
        break;
    }
    case 186017:
    {
        returnValue = F("Kirchenauweg");
        break;
    }
    case 186018:
    {
        returnValue = F("Kirchenbenden");
        break;
    }
    case 186019:
    {
        returnValue = F("Kirchenberg");
        break;
    }
    case 186020:
    {
        returnValue = F("Kirchenbergring");
        break;
    }
    case 186021:
    {
        returnValue = F("Kirchenbergstr.");
        break;
    }
    case 186022:
    {
        returnValue = F("Kirchenbergweg");
        break;
    }
    case 186023:
    {
        returnValue = F("Kirchenbleeck");
        break;
    }
    case 186024:
    {
        returnValue = F("Kirchenblick");
        break;
    }
    case 186025:
    {
        returnValue = F("Kirchenbollenbacher Str.");
        break;
    }
    case 186026:
    {
        returnValue = F("Kirchenbreede");
        break;
    }
    case 186027:
    {
        returnValue = F("Kirchenbreite");
        break;
    }
    case 186028:
    {
        returnValue = F("Kirchenbrink");
        break;
    }
    case 186029:
    {
        returnValue = F("Kirchenbrücke");
        break;
    }
    case 186030:
    {
        returnValue = F("Kirchenbrühl");
        break;
    }
    case 186031:
    {
        returnValue = F("Kirchenbuck");
        break;
    }
    case 186032:
    {
        returnValue = F("Kirchenbucklweg");
        break;
    }
    case 186033:
    {
        returnValue = F("Kirchenbug");
        break;
    }
    case 186034:
    {
        returnValue = F("Kirchenbungert");
        break;
    }
    case 186035:
    {
        returnValue = F("Kirchenburg");
        break;
    }
    case 186036:
    {
        returnValue = F("Kirchenburggasse");
        break;
    }
    case 186037:
    {
        returnValue = F("Kirchenbusch");
        break;
    }
    case 186038:
    {
        returnValue = F("Kirchenbächle");
        break;
    }
    case 186039:
    {
        returnValue = F("Kirchenbühl");
        break;
    }
    case 186040:
    {
        returnValue = F("Kirchenbühlstr.");
        break;
    }
    case 186041:
    {
        returnValue = F("Kirchend");
        break;
    }
    case 186042:
    {
        returnValue = F("Kirchende");
        break;
    }
    case 186043:
    {
        returnValue = F("Kirchendell");
        break;
    }
    case 186044:
    {
        returnValue = F("Kirchendeller Weg");
        break;
    }
    case 186045:
    {
        returnValue = F("Kirchendemenreuth");
        break;
    }
    case 186046:
    {
        returnValue = F("Kirchender Dorfweg");
        break;
    }
    case 186047:
    {
        returnValue = F("Kircheneck");
        break;
    }
    case 186048:
    {
        returnValue = F("Kirchener Str.");
        break;
    }
    case 186049:
    {
        returnValue = F("Kirchenerpfad");
        break;
    }
    case 186050:
    {
        returnValue = F("Kirchenesch");
        break;
    }
    case 186051:
    {
        returnValue = F("Kirchenfeld");
        break;
    }
    case 186052:
    {
        returnValue = F("Kirchenfelder Weg");
        break;
    }
    case 186053:
    {
        returnValue = F("Kirchenfeldstr.");
        break;
    }
    case 186054:
    {
        returnValue = F("Kirchenfeldweg");
        break;
    }
    case 186055:
    {
        returnValue = F("Kirchenfenne");
        break;
    }
    case 186056:
    {
        returnValue = F("Kirchenflürchen");
        break;
    }
    case 186057:
    {
        returnValue = F("Kirchenflürlein");
        break;
    }
    case 186058:
    {
        returnValue = F("Kirchenförsterei");
        break;
    }
    case 186059:
    {
        returnValue = F("Kirchengarten");
        break;
    }
    case 186060:
    {
        returnValue = F("Kirchengasse");
        break;
    }
    case 186061:
    {
        returnValue = F("Kirchengelände");
        break;
    }
    case 186062:
    {
        returnValue = F("Kirchengestell");
        break;
    }
    case 186063:
    {
        returnValue = F("Kirchengler Hauptstr.");
        break;
    }
    case 186064:
    {
        returnValue = F("Kirchengler Stadtweg");
        break;
    }
    case 186065:
    {
        returnValue = F("Kirchengler Str.");
        break;
    }
    case 186066:
    {
        returnValue = F("Kirchengler Zinsweg");
        break;
    }
    case 186067:
    {
        returnValue = F("Kirchengraben");
        break;
    }
    case 186068:
    {
        returnValue = F("Kirchengrund");
        break;
    }
    case 186069:
    {
        returnValue = F("Kirchengrundstr.");
        break;
    }
    case 186070:
    {
        returnValue = F("Kirchengängle");
        break;
    }
    case 186071:
    {
        returnValue = F("Kirchengässchen");
        break;
    }
    case 186072:
    {
        returnValue = F("Kirchengässle");
        break;
    }
    case 186073:
    {
        returnValue = F("Kirchengäßchen");
        break;
    }
    case 186074:
    {
        returnValue = F("Kirchengäßle");
        break;
    }
    case 186075:
    {
        returnValue = F("Kirchenhagener Weg");
        break;
    }
    case 186076:
    {
        returnValue = F("Kirchenhalde");
        break;
    }
    case 186077:
    {
        returnValue = F("Kirchenhaldengasse");
        break;
    }
    case 186078:
    {
        returnValue = F("Kirchenholz");
        break;
    }
    case 186079:
    {
        returnValue = F("Kirchenholzstr.");
        break;
    }
    case 186080:
    {
        returnValue = F("Kirchenholzweg");
        break;
    }
    case 186081:
    {
        returnValue = F("Kirchenhölzer");
        break;
    }
    case 186082:
    {
        returnValue = F("Kirchenhölzle");
        break;
    }
    case 186083:
    {
        returnValue = F("Kirchenhübel");
        break;
    }
    case 186084:
    {
        returnValue = F("Kircheninnenhof");
        break;
    }
    case 186085:
    {
        returnValue = F("Kirchenkamp");
        break;
    }
    case 186086:
    {
        returnValue = F("Kirchenkampstr.");
        break;
    }
    case 186087:
    {
        returnValue = F("Kirchenkate");
        break;
    }
    case 186088:
    {
        returnValue = F("Kirchenkoppel");
        break;
    }
    case 186089:
    {
        returnValue = F("Kirchenkreppe");
        break;
    }
    case 186090:
    {
        returnValue = F("Kirchenkämpe");
        break;
    }
    case 186091:
    {
        returnValue = F("Kirchenlaibacher Weg");
        break;
    }
    case 186092:
    {
        returnValue = F("Kirchenlamitzer Str.");
        break;
    }
    case 186093:
    {
        returnValue = F("Kirchenleite");
        break;
    }
    case 186094:
    {
        returnValue = F("Kirchenleiten");
        break;
    }
    case 186095:
    {
        returnValue = F("Kirchenleye");
        break;
    }
    case 186096:
    {
        returnValue = F("Kirchenlindenweg");
        break;
    }
    case 186097:
    {
        returnValue = F("Kirchenmauerweg");
        break;
    }
    case 186098:
    {
        returnValue = F("Kirchenmoorweg");
        break;
    }
    case 186099:
    {
        returnValue = F("Kirchenmähder");
        break;
    }
    case 186100:
    {
        returnValue = F("Kirchenort");
        break;
    }
    case 186101:
    {
        returnValue = F("Kirchenpark");
        break;
    }
    case 186102:
    {
        returnValue = F("Kirchenpark, Neuapostolische Kirch");
        break;
    }
    case 186103:
    {
        returnValue = F("Kirchenparkweg");
        break;
    }
    case 186104:
    {
        returnValue = F("Kirchenpauerstr.");
        break;
    }
    case 186105:
    {
        returnValue = F("Kirchenpfad");
        break;
    }
    case 186106:
    {
        returnValue = F("Kirchenpforte");
        break;
    }
    case 186107:
    {
        returnValue = F("Kirchenplatz");
        break;
    }
    case 186108:
    {
        returnValue = F("Kirchenpoint");
        break;
    }
    case 186109:
    {
        returnValue = F("Kirchenrain");
        break;
    }
    case 186110:
    {
        returnValue = F("Kirchenrainweg");
        break;
    }
    case 186111:
    {
        returnValue = F("Kirchenrangen");
        break;
    }
    case 186112:
    {
        returnValue = F("Kirchenrat-Friedrich-Str.");
        break;
    }
    case 186113:
    {
        returnValue = F("Kirchenrat-Müller-Weg");
        break;
    }
    case 186114:
    {
        returnValue = F("Kirchenrat-Schörrig-Str.");
        break;
    }
    case 186115:
    {
        returnValue = F("Kirchenriedstr.");
        break;
    }
    case 186116:
    {
        returnValue = F("Kirchenring");
        break;
    }
    case 186117:
    {
        returnValue = F("Kirchenrohrbacher Str.");
        break;
    }
    case 186118:
    {
        returnValue = F("Kirchenrottweg");
        break;
    }
    case 186119:
    {
        returnValue = F("Kirchensaller Str.");
        break;
    }
    case 186120:
    {
        returnValue = F("Kirchenschlag");
        break;
    }
    case 186121:
    {
        returnValue = F("Kirchenschneise");
        break;
    }
    case 186122:
    {
        returnValue = F("Kirchensiedlung");
        break;
    }
    case 186123:
    {
        returnValue = F("Kirchenstaffel");
        break;
    }
    case 186124:
    {
        returnValue = F("Kirchensteg");
        break;
    }
    case 186125:
    {
        returnValue = F("Kirchensteig");
        break;
    }
    case 186126:
    {
        returnValue = F("Kirchensteig - Vater-Unser-Weg");
        break;
    }
    case 186127:
    {
        returnValue = F("Kirchensteige");
        break;
    }
    case 186128:
    {
        returnValue = F("Kirchensteigstr.");
        break;
    }
    case 186129:
    {
        returnValue = F("Kirchenstieg");
        break;
    }
    case 186130:
    {
        returnValue = F("Kirchenstr.");
        break;
    }
    case 186131:
    {
        returnValue = F("Kirchenstumpfschneise");
        break;
    }
    case 186132:
    {
        returnValue = F("Kirchenstück");
        break;
    }
    case 186133:
    {
        returnValue = F("Kirchenstückweg");
        break;
    }
    case 186134:
    {
        returnValue = F("Kirchensurer Str.");
        break;
    }
    case 186135:
    {
        returnValue = F("Kirchentalstr.");
        break;
    }
    case 186136:
    {
        returnValue = F("Kirchentannen");
        break;
    }
    case 186137:
    {
        returnValue = F("Kirchentannenstr.");
        break;
    }
    case 186138:
    {
        returnValue = F("Kirchentellinsfurter Str.");
        break;
    }
    case 186139:
    {
        returnValue = F("Kirchenthumbacher Str.");
        break;
    }
    case 186140:
    {
        returnValue = F("Kirchentoft");
        break;
    }
    case 186141:
    {
        returnValue = F("Kirchentor");
        break;
    }
    case 186142:
    {
        returnValue = F("Kirchentreppe");
        break;
    }
    case 186143:
    {
        returnValue = F("Kirchentwiete");
        break;
    }
    case 186144:
    {
        returnValue = F("Kirchenvorplatz");
        break;
    }
    case 186145:
    {
        returnValue = F("Kirchenwaldweg");
        break;
    }
    case 186146:
    {
        returnValue = F("Kirchenweg");
        break;
    }
    case 186147:
    {
        returnValue = F("Kirchenweg Gleichen");
        break;
    }
    case 186148:
    {
        returnValue = F("Kirchenwegle");
        break;
    }
    case 186149:
    {
        returnValue = F("Kirchenwegstr.");
        break;
    }
    case 186150:
    {
        returnValue = F("Kirchenweinberg");
        break;
    }
    case 186151:
    {
        returnValue = F("Kirchenweinbergstr.");
        break;
    }
    case 186152:
    {
        returnValue = F("Kirchenwiese");
        break;
    }
    case 186153:
    {
        returnValue = F("Kirchenwinkel");
        break;
    }
    case 186154:
    {
        returnValue = F("Kirchenwinner Str.");
        break;
    }
    case 186155:
    {
        returnValue = F("Kirchenwisch");
        break;
    }
    case 186156:
    {
        returnValue = F("Kirchenäcker");
        break;
    }
    case 186157:
    {
        returnValue = F("Kirchenäckerstr.");
        break;
    }
    case 186158:
    {
        returnValue = F("Kirchenäckerweg");
        break;
    }
    case 186159:
    {
        returnValue = F("Kirchenösch");
        break;
    }
    case 186160:
    {
        returnValue = F("Kirchenöschle");
        break;
    }
    case 186161:
    {
        returnValue = F("Kircher Kämpen");
        break;
    }
    case 186162:
    {
        returnValue = F("Kircher Stich");
        break;
    }
    case 186163:
    {
        returnValue = F("Kircher Str.");
        break;
    }
    case 186164:
    {
        returnValue = F("Kircher Vorfeld");
        break;
    }
    case 186165:
    {
        returnValue = F("Kirchergarten");
        break;
    }
    case 186166:
    {
        returnValue = F("Kircherstr.");
        break;
    }
    case 186167:
    {
        returnValue = F("Kirchert");
        break;
    }
    case 186168:
    {
        returnValue = F("Kirchertstr.");
        break;
    }
    case 186169:
    {
        returnValue = F("Kircherweg");
        break;
    }
    case 186170:
    {
        returnValue = F("Kirchesch");
        break;
    }
    case 186171:
    {
        returnValue = F("Kircheuber");
        break;
    }
    case 186172:
    {
        returnValue = F("Kirchfarrnbach A");
        break;
    }
    case 186173:
    {
        returnValue = F("Kirchfarrnbach B");
        break;
    }
    case 186174:
    {
        returnValue = F("Kirchfarrnbach C");
        break;
    }
    case 186175:
    {
        returnValue = F("Kirchfarrnbach D");
        break;
    }
    case 186176:
    {
        returnValue = F("Kirchfarrnbach E");
        break;
    }
    case 186177:
    {
        returnValue = F("Kirchfarrnbach F");
        break;
    }
    case 186178:
    {
        returnValue = F("Kirchfarrnbach G");
        break;
    }
    case 186179:
    {
        returnValue = F("Kirchfarrnbach H");
        break;
    }
    case 186180:
    {
        returnValue = F("Kirchfarrnbach J");
        break;
    }
    case 186181:
    {
        returnValue = F("Kirchfarrnbach K");
        break;
    }
    case 186182:
    {
        returnValue = F("Kirchfeld");
        break;
    }
    case 186183:
    {
        returnValue = F("Kirchfeldallee");
        break;
    }
    case 186184:
    {
        returnValue = F("Kirchfeldchen");
        break;
    }
    case 186185:
    {
        returnValue = F("Kirchfelder Str.");
        break;
    }
    case 186186:
    {
        returnValue = F("Kirchfeldgasse");
        break;
    }
    case 186187:
    {
        returnValue = F("Kirchfeldhalde");
        break;
    }
    case 186188:
    {
        returnValue = F("Kirchfeldring");
        break;
    }
    case 186189:
    {
        returnValue = F("Kirchfeldstr.");
        break;
    }
    case 186190:
    {
        returnValue = F("Kirchfeldweg");
        break;
    }
    case 186191:
    {
        returnValue = F("Kirchfembacher Kirchenweg");
        break;
    }
    case 186192:
    {
        returnValue = F("Kirchfembacher Str.");
        break;
    }
    case 186193:
    {
        returnValue = F("Kirchforst");
        break;
    }
    case 186194:
    {
        returnValue = F("Kirchfuhrweg");
        break;
    }
    case 186195:
    {
        returnValue = F("Kirchfährendorfer Str.");
        break;
    }
    case 186196:
    {
        returnValue = F("Kirchgang");
        break;
    }
    case 186197:
    {
        returnValue = F("Kirchgangsredder");
        break;
    }
    case 186198:
    {
        returnValue = F("Kirchgangswinkel");
        break;
    }
    case 186199:
    {
        returnValue = F("Kirchgarten");
        break;
    }
    case 186200:
    {
        returnValue = F("Kirchgarten Butzbach");
        break;
    }
    case 186201:
    {
        returnValue = F("Kirchgartenstr.");
        break;
    }
    case 186202:
    {
        returnValue = F("Kirchgartenweg");
        break;
    }
    case 186203:
    {
        returnValue = F("Kirchgass");
        break;
    }
    case 186204:
    {
        returnValue = F("Kirchgasse");
        break;
    }
    case 186205:
    {
        returnValue = F("Kirchgaß");
        break;
    }
    case 186206:
    {
        returnValue = F("Kirchgellerser Str.");
        break;
    }
    case 186207:
    {
        returnValue = F("Kirchgelände Münstedt");
        break;
    }
    case 186208:
    {
        returnValue = F("Kirchgessnerplatz");
        break;
    }
    case 186209:
    {
        returnValue = F("Kirchgiebelstr.");
        break;
    }
    case 186210:
    {
        returnValue = F("Kirchgraben");
        break;
    }
    case 186211:
    {
        returnValue = F("Kirchgrabengasse");
        break;
    }
    case 186212:
    {
        returnValue = F("Kirchgrabenstr.");
        break;
    }
    case 186213:
    {
        returnValue = F("Kirchgrabenweg");
        break;
    }
    case 186214:
    {
        returnValue = F("Kirchgrubstr.");
        break;
    }
    case 186215:
    {
        returnValue = F("Kirchgrund");
        break;
    }
    case 186216:
    {
        returnValue = F("Kirchgrundsiedlung");
        break;
    }
    case 186217:
    {
        returnValue = F("Kirchgrundstr.");
        break;
    }
    case 186218:
    {
        returnValue = F("Kirchgrundsweg");
        break;
    }
    case 186219:
    {
        returnValue = F("Kirchgrundweg");
        break;
    }
    case 186220:
    {
        returnValue = F("Kirchgängerweg");
        break;
    }
    case 186221:
    {
        returnValue = F("Kirchgängle");
        break;
    }
    case 186222:
    {
        returnValue = F("Kirchgärten");
        break;
    }
    case 186223:
    {
        returnValue = F("Kirchgärtenweg");
        break;
    }
    case 186224:
    {
        returnValue = F("Kirchgässchen");
        break;
    }
    case 186225:
    {
        returnValue = F("Kirchgässel");
        break;
    }
    case 186226:
    {
        returnValue = F("Kirchgässl");
        break;
    }
    case 186227:
    {
        returnValue = F("Kirchgässle");
        break;
    }
    case 186228:
    {
        returnValue = F("Kirchgässlein");
        break;
    }
    case 186229:
    {
        returnValue = F("Kirchgässli");
        break;
    }
    case 186230:
    {
        returnValue = F("Kirchgäßchen");
        break;
    }
    case 186231:
    {
        returnValue = F("Kirchgäßle");
        break;
    }
    case 186232:
    {
        returnValue = F("Kirchgäßlein");
        break;
    }
    case 186233:
    {
        returnValue = F("Kirchgönser Str.");
        break;
    }
    case 186234:
    {
        returnValue = F("Kirchhag");
        break;
    }
    case 186235:
    {
        returnValue = F("Kirchhagenscher Weg");
        break;
    }
    case 186236:
    {
        returnValue = F("Kirchhahn");
        break;
    }
    case 186237:
    {
        returnValue = F("Kirchhainer Bogen");
        break;
    }
    case 186238:
    {
        returnValue = F("Kirchhainer Chaussee");
        break;
    }
    case 186239:
    {
        returnValue = F("Kirchhainer Damm");
        break;
    }
    case 186240:
    {
        returnValue = F("Kirchhainer Str.");
        break;
    }
    case 186241:
    {
        returnValue = F("Kirchhainer Weg");
        break;
    }
    case 186242:
    {
        returnValue = F("Kirchhalde");
        break;
    }
    case 186243:
    {
        returnValue = F("Kirchhaldengäßle");
        break;
    }
    case 186244:
    {
        returnValue = F("Kirchhaldenpfad");
        break;
    }
    case 186245:
    {
        returnValue = F("Kirchhaldenstr.");
        break;
    }
    case 186246:
    {
        returnValue = F("Kirchhaldenweg");
        break;
    }
    case 186247:
    {
        returnValue = F("Kirchhaldeweg");
        break;
    }
    case 186248:
    {
        returnValue = F("Kirchhammer Str.");
        break;
    }
    case 186249:
    {
        returnValue = F("Kirchhardt");
        break;
    }
    case 186250:
    {
        returnValue = F("Kirchhardtstr.");
        break;
    }
    case 186251:
    {
        returnValue = F("Kirchharpener Str.");
        break;
    }
    case 186252:
    {
        returnValue = F("Kirchhaslacher Str.");
        break;
    }
    case 186253:
    {
        returnValue = F("Kirchhatter Kreisel");
        break;
    }
    case 186254:
    {
        returnValue = F("Kirchhatter Str.");
        break;
    }
    case 186255:
    {
        returnValue = F("Kirchhau");
        break;
    }
    case 186256:
    {
        returnValue = F("Kirchhausener Str.");
        break;
    }
    case 186257:
    {
        returnValue = F("Kirchhauweg");
        break;
    }
    case 186258:
    {
        returnValue = F("Kirchhecke");
        break;
    }
    case 186259:
    {
        returnValue = F("Kirchheerter Weg");
        break;
    }
    case 186260:
    {
        returnValue = F("Kirchhegge");
        break;
    }
    case 186261:
    {
        returnValue = F("Kirchheider Str.");
        break;
    }
    case 186262:
    {
        returnValue = F("Kirchheider Weg");
        break;
    }
    case 186263:
    {
        returnValue = F("Kirchheilinger Str.");
        break;
    }
    case 186264:
    {
        returnValue = F("Kirchheimbolander Str.");
        break;
    }
    case 186265:
    {
        returnValue = F("Kirchheimer Bergle");
        break;
    }
    case 186266:
    {
        returnValue = F("Kirchheimer Hauptstr.");
        break;
    }
    case 186267:
    {
        returnValue = F("Kirchheimer Pfad");
        break;
    }
    case 186268:
    {
        returnValue = F("Kirchheimer Str.");
        break;
    }
    case 186269:
    {
        returnValue = F("Kirchheimer Weg");
        break;
    }
    case 186270:
    {
        returnValue = F("Kirchheimerweg");
        break;
    }
    case 186271:
    {
        returnValue = F("Kirchhell");
        break;
    }
    case 186272:
    {
        returnValue = F("Kirchhellener Allee");
        break;
    }
    case 186273:
    {
        returnValue = F("Kirchhellener Ring");
        break;
    }
    case 186274:
    {
        returnValue = F("Kirchhellener Str.");
        break;
    }
    case 186275:
    {
        returnValue = F("Kirchhellenstr.");
        break;
    }
    case 186276:
    {
        returnValue = F("Kirchhellstr.");
        break;
    }
    case 186277:
    {
        returnValue = F("Kirchhertener Str.");
        break;
    }
    case 186278:
    {
        returnValue = F("Kirchhof");
        break;
    }
    case 186279:
    {
        returnValue = F("Kirchhof Marienkirche");
        break;
    }
    case 186280:
    {
        returnValue = F("Kirchhof St. Josef");
        break;
    }
    case 186281:
    {
        returnValue = F("Kirchhof St. Laurentius");
        break;
    }
    case 186282:
    {
        returnValue = F("Kirchhof-Mottenheim");
        break;
    }
    case 186283:
    {
        returnValue = F("Kirchhofallee");
        break;
    }
    case 186284:
    {
        returnValue = F("Kirchhofen");
        break;
    }
    case 186285:
    {
        returnValue = F("Kirchhofener Str.");
        break;
    }
    case 186286:
    {
        returnValue = F("Kirchhofer Str.");
        break;
    }
    case 186287:
    {
        returnValue = F("Kirchhofer Weg");
        break;
    }
    case 186288:
    {
        returnValue = F("Kirchhoffeld");
        break;
    }
    case 186289:
    {
        returnValue = F("Kirchhoffstr.");
        break;
    }
    case 186290:
    {
        returnValue = F("Kirchhoffweg");
        break;
    }
    case 186291:
    {
        returnValue = F("Kirchhofgasse");
        break;
    }
    case 186292:
    {
        returnValue = F("Kirchhofgärten");
        break;
    }
    case 186293:
    {
        returnValue = F("Kirchhofgäßle");
        break;
    }
    case 186294:
    {
        returnValue = F("Kirchhofplatz");
        break;
    }
    case 186295:
    {
        returnValue = F("Kirchhofs Rott");
        break;
    }
    case 186296:
    {
        returnValue = F("Kirchhofsallee");
        break;
    }
    case 186297:
    {
        returnValue = F("Kirchhofsbreite");
        break;
    }
    case 186298:
    {
        returnValue = F("Kirchhofsbrink");
        break;
    }
    case 186299:
    {
        returnValue = F("Kirchhofschneise");
        break;
    }
    case 186300:
    {
        returnValue = F("Kirchhofsecke");
        break;
    }
    case 186301:
    {
        returnValue = F("Kirchhofsgasse");
        break;
    }
    case 186302:
    {
        returnValue = F("Kirchhofsgewann");
        break;
    }
    case 186303:
    {
        returnValue = F("Kirchhofsgärten");
        break;
    }
    case 186304:
    {
        returnValue = F("Kirchhofshohl");
        break;
    }
    case 186305:
    {
        returnValue = F("Kirchhofshübel");
        break;
    }
    case 186306:
    {
        returnValue = F("Kirchhofskamp");
        break;
    }
    case 186307:
    {
        returnValue = F("Kirchhofsplatz");
        break;
    }
    case 186308:
    {
        returnValue = F("Kirchhofstal");
        break;
    }
    case 186309:
    {
        returnValue = F("Kirchhofstr.");
        break;
    }
    case 186310:
    {
        returnValue = F("Kirchhofsweg");
        break;
    }
    case 186311:
    {
        returnValue = F("Kirchhofswiese");
        break;
    }
    case 186312:
    {
        returnValue = F("Kirchhofswiesen");
        break;
    }
    case 186313:
    {
        returnValue = F("Kirchhofweg");
        break;
    }
    case 186314:
    {
        returnValue = F("Kirchhofäcker");
        break;
    }
    case 186315:
    {
        returnValue = F("Kirchhohl");
        break;
    }
    case 186316:
    {
        returnValue = F("Kirchhohle");
        break;
    }
    case 186317:
    {
        returnValue = F("Kirchhohlstr.");
        break;
    }
    case 186318:
    {
        returnValue = F("Kirchholz");
        break;
    }
    case 186319:
    {
        returnValue = F("Kirchholzer Hof");
        break;
    }
    case 186320:
    {
        returnValue = F("Kirchholzheide");
        break;
    }
    case 186321:
    {
        returnValue = F("Kirchholzner Feld");
        break;
    }
    case 186322:
    {
        returnValue = F("Kirchholzstr.");
        break;
    }
    case 186323:
    {
        returnValue = F("Kirchholzsträßle");
        break;
    }
    case 186324:
    {
        returnValue = F("Kirchholzweg");
        break;
    }
    case 186325:
    {
        returnValue = F("Kirchhorster Str.");
        break;
    }
    case 186326:
    {
        returnValue = F("Kirchhorster Weg");
        break;
    }
    case 186327:
    {
        returnValue = F("Kirchhovener Str.");
        break;
    }
    case 186328:
    {
        returnValue = F("Kirchhover Bruch");
        break;
    }
    case 186329:
    {
        returnValue = F("Kirchhusen");
        break;
    }
    case 186330:
    {
        returnValue = F("Kirchhälde");
        break;
    }
    case 186331:
    {
        returnValue = F("Kirchhäuser Str.");
        break;
    }
    case 186332:
    {
        returnValue = F("Kirchhäuser Weg");
        break;
    }
    case 186333:
    {
        returnValue = F("Kirchhöf");
        break;
    }
    case 186334:
    {
        returnValue = F("Kirchhöfer Weg");
        break;
    }
    case 186335:
    {
        returnValue = F("Kirchhöfle");
        break;
    }
    case 186336:
    {
        returnValue = F("Kirchhöflein");
        break;
    }
    case 186337:
    {
        returnValue = F("Kirchhöflestr.");
        break;
    }
    case 186338:
    {
        returnValue = F("Kirchhög");
        break;
    }
    case 186339:
    {
        returnValue = F("Kirchhöhe");
        break;
    }
    case 186340:
    {
        returnValue = F("Kirchhöhstr.");
        break;
    }
    case 186341:
    {
        returnValue = F("Kirchhölzleweg");
        break;
    }
    case 186342:
    {
        returnValue = F("Kirchhörn");
        break;
    }
    case 186343:
    {
        returnValue = F("Kirchhügel");
        break;
    }
    case 186344:
    {
        returnValue = F("Kirchilpe");
        break;
    }
    case 186345:
    {
        returnValue = F("Kirchkamp");
        break;
    }
    case 186346:
    {
        returnValue = F("Kirchkampsweg");
        break;
    }
    case 186347:
    {
        returnValue = F("Kirchkampweg");
        break;
    }
    case 186348:
    {
        returnValue = F("Kirchkiefern");
        break;
    }
    case 186349:
    {
        returnValue = F("Kirchkimmer Str.");
        break;
    }
    case 186350:
    {
        returnValue = F("Kirchklingenweg");
        break;
    }
    case 186351:
    {
        returnValue = F("Kirchknapp");
        break;
    }
    case 186352:
    {
        returnValue = F("Kirchkopfweg");
        break;
    }
    case 186353:
    {
        returnValue = F("Kirchkoppel");
        break;
    }
    case 186354:
    {
        returnValue = F("Kirchkuhle");
        break;
    }
    case 186355:
    {
        returnValue = F("Kirchlahe");
        break;
    }
    case 186356:
    {
        returnValue = F("Kirchlai");
        break;
    }
    case 186357:
    {
        returnValue = F("Kirchlandweg");
        break;
    }
    case 186358:
    {
        returnValue = F("Kirchlehnchen");
        break;
    }
    case 186359:
    {
        returnValue = F("Kirchleiner Str.");
        break;
    }
    case 186360:
    {
        returnValue = F("Kirchleite");
        break;
    }
    case 186361:
    {
        returnValue = F("Kirchleiten");
        break;
    }
    case 186362:
    {
        returnValue = F("Kirchleitenstr.");
        break;
    }
    case 186363:
    {
        returnValue = F("Kirchleitenweg");
        break;
    }
    case 186364:
    {
        returnValue = F("Kirchleithe");
        break;
    }
    case 186365:
    {
        returnValue = F("Kirchlengerner Str.");
        break;
    }
    case 186366:
    {
        returnValue = F("Kirchler Str.");
        break;
    }
    case 186367:
    {
        returnValue = F("Kirchlerner Weg");
        break;
    }
    case 186368:
    {
        returnValue = F("Kirchlesberg");
        break;
    }
    case 186369:
    {
        returnValue = F("Kirchlesweg");
        break;
    }
    case 186370:
    {
        returnValue = F("Kirchleswiesenweg");
        break;
    }
    case 186371:
    {
        returnValue = F("Kirchlesäcker");
        break;
    }
    case 186372:
    {
        returnValue = F("Kirchleweg");
        break;
    }
    case 186373:
    {
        returnValue = F("Kirchleäcker");
        break;
    }
    case 186374:
    {
        returnValue = F("Kirchlinde");
        break;
    }
    case 186375:
    {
        returnValue = F("Kirchlinder Feld");
        break;
    }
    case 186376:
    {
        returnValue = F("Kirchlinder Str.");
        break;
    }
    case 186377:
    {
        returnValue = F("Kirchlinsgrundweg");
        break;
    }
    case 186378:
    {
        returnValue = F("Kirchlohne");
        break;
    }
    case 186379:
    {
        returnValue = F("Kirchlöh");
        break;
    }
    case 186380:
    {
        returnValue = F("Kirchlöher Weg");
        break;
    }
    case 186381:
    {
        returnValue = F("Kirchlücke");
        break;
    }
    case 186382:
    {
        returnValue = F("Kirchmaierstr.");
        break;
    }
    case 186383:
    {
        returnValue = F("Kirchmannstr.");
        break;
    }
    case 186384:
    {
        returnValue = F("Kirchmark");
        break;
    }
    case 186385:
    {
        returnValue = F("Kirchmatt");
        break;
    }
    case 186386:
    {
        returnValue = F("Kirchmatting");
        break;
    }
    case 186387:
    {
        returnValue = F("Kirchmattinger Str.");
        break;
    }
    case 186388:
    {
        returnValue = F("Kirchmauer");
        break;
    }
    case 186389:
    {
        returnValue = F("Kirchmayrstr.");
        break;
    }
    case 186390:
    {
        returnValue = F("Kirchmeierstr.");
        break;
    }
    case 186391:
    {
        returnValue = F("Kirchmohr");
        break;
    }
    case 186392:
    {
        returnValue = F("Kirchmoor");
        break;
    }
    case 186393:
    {
        returnValue = F("Kirchmoortwiete");
        break;
    }
    case 186394:
    {
        returnValue = F("Kirchmoosstr.");
        break;
    }
    case 186395:
    {
        returnValue = F("Kirchmorgen");
        break;
    }
    case 186396:
    {
        returnValue = F("Kirchmättle");
        break;
    }
    case 186397:
    {
        returnValue = F("Kirchnebenstr.");
        break;
    }
    case 186398:
    {
        returnValue = F("Kirchner-Weg");
        break;
    }
    case 186399:
    {
        returnValue = F("Kirchnerhof");
        break;
    }
    case 186400:
    {
        returnValue = F("Kirchnersbach");
        break;
    }
    case 186401:
    {
        returnValue = F("Kirchnersgang");
        break;
    }
    case 186402:
    {
        returnValue = F("Kirchnersgasse");
        break;
    }
    case 186403:
    {
        returnValue = F("Kirchnerstr.");
        break;
    }
    case 186404:
    {
        returnValue = F("Kirchnerweg");
        break;
    }
    case 186405:
    {
        returnValue = F("Kirchnüchel");
        break;
    }
    case 186406:
    {
        returnValue = F("Kirchnücheler Weg");
        break;
    }
    case 186407:
    {
        returnValue = F("Kirchpad");
        break;
    }
    case 186408:
    {
        returnValue = F("Kirchpark");
        break;
    }
    case 186409:
    {
        returnValue = F("Kirchpark der Bernwardskirche");
        break;
    }
    case 186410:
    {
        returnValue = F("Kirchpark mit See");
        break;
    }
    case 186411:
    {
        returnValue = F("Kirchpatt");
        break;
    }
    case 186412:
    {
        returnValue = F("Kirchpfad");
        break;
    }
    case 186413:
    {
        returnValue = F("Kirchpfädchen");
        break;
    }
    case 186414:
    {
        returnValue = F("Kirchplan");
        break;
    }
    case 186415:
    {
        returnValue = F("Kirchplatz");
        break;
    }
    case 186416:
    {
        returnValue = F("Kirchplatz / Chor der alten Pfarrkirche");
        break;
    }
    case 186417:
    {
        returnValue = F("Kirchplatz St. Josef");
        break;
    }
    case 186418:
    {
        returnValue = F("Kirchplatz St. Norbert");
        break;
    }
    case 186419:
    {
        returnValue = F("Kirchplatz-Heilig-Geist");
        break;
    }
    case 186420:
    {
        returnValue = F("Kirchplatzpark");
        break;
    }
    case 186421:
    {
        returnValue = F("Kirchplatzstr.");
        break;
    }
    case 186422:
    {
        returnValue = F("Kirchpoint");
        break;
    }
    case 186423:
    {
        returnValue = F("Kirchpoppentiner Str.");
        break;
    }
    case 186424:
    {
        returnValue = F("Kirchrain");
        break;
    }
    case 186425:
    {
        returnValue = F("Kirchrainstr.");
        break;
    }
    case 186426:
    {
        returnValue = F("Kirchrainweg");
        break;
    }
    case 186427:
    {
        returnValue = F("Kirchrangen");
        break;
    }
    case 186428:
    {
        returnValue = F("Kirchrasen");
        break;
    }
    case 186429:
    {
        returnValue = F("Kirchrasenstr.");
        break;
    }
    case 186430:
    {
        returnValue = F("Kirchrather Str.");
        break;
    }
    case 186431:
    {
        returnValue = F("Kirchreihe");
        break;
    }
    case 186432:
    {
        returnValue = F("Kirchreithsweg");
        break;
    }
    case 186433:
    {
        returnValue = F("Kirchrimbach");
        break;
    }
    case 186434:
    {
        returnValue = F("Kirchring");
        break;
    }
    case 186435:
    {
        returnValue = F("Kirchringstr.");
        break;
    }
    case 186436:
    {
        returnValue = F("Kirchrother Str.");
        break;
    }
    case 186437:
    {
        returnValue = F("Kirchröder Str.");
        break;
    }
    case 186438:
    {
        returnValue = F("Kirchröthe");
        break;
    }
    case 186439:
    {
        returnValue = F("Kirchröttenbach A");
        break;
    }
    case 186440:
    {
        returnValue = F("Kirchröttenbach B");
        break;
    }
    case 186441:
    {
        returnValue = F("Kirchröttenbach C");
        break;
    }
    case 186442:
    {
        returnValue = F("Kirchröttenbach D");
        break;
    }
    case 186443:
    {
        returnValue = F("Kirchröttenbach E");
        break;
    }
    case 186444:
    {
        returnValue = F("Kirchröttenbach F");
        break;
    }
    case 186445:
    {
        returnValue = F("Kirchröttenbach G");
        break;
    }
    case 186446:
    {
        returnValue = F("Kirchrüsselbach");
        break;
    }
    case 186447:
    {
        returnValue = F("Kirchschlag");
        break;
    }
    case 186448:
    {
        returnValue = F("Kirchschlager Str.");
        break;
    }
    case 186449:
    {
        returnValue = F("Kirchschlager Weg");
        break;
    }
    case 186450:
    {
        returnValue = F("Kirchschneise");
        break;
    }
    case 186451:
    {
        returnValue = F("Kirchschnittweg");
        break;
    }
    case 186452:
    {
        returnValue = F("Kirchschulstr.");
        break;
    }
    case 186453:
    {
        returnValue = F("Kirchschönbacher Str.");
        break;
    }
    case 186454:
    {
        returnValue = F("Kirchseelter Heuweg");
        break;
    }
    case 186455:
    {
        returnValue = F("Kirchseelter Str.");
        break;
    }
    case 186456:
    {
        returnValue = F("Kirchseeoner Weg");
        break;
    }
    case 186457:
    {
        returnValue = F("Kirchseestr.");
        break;
    }
    case 186458:
    {
        returnValue = F("Kirchseifen");
        break;
    }
    case 186459:
    {
        returnValue = F("Kirchshofpösch");
        break;
    }
    case 186460:
    {
        returnValue = F("Kirchsiedlung");
        break;
    }
    case 186461:
    {
        returnValue = F("Kirchsiefenweg");
        break;
    }
    case 186462:
    {
        returnValue = F("Kirchsiek");
        break;
    }
    case 186463:
    {
        returnValue = F("Kirchsieksbrink");
        break;
    }
    case 186464:
    {
        returnValue = F("Kirchspiel");
        break;
    }
    case 186465:
    {
        returnValue = F("Kirchspieler Seite");
        break;
    }
    case 186466:
    {
        returnValue = F("Kirchspielpark");
        break;
    }
    case 186467:
    {
        returnValue = F("Kirchspielplatz");
        break;
    }
    case 186468:
    {
        returnValue = F("Kirchspielschreiber-Schmidt-Str.");
        break;
    }
    case 186469:
    {
        returnValue = F("Kirchspielstr.");
        break;
    }
    case 186470:
    {
        returnValue = F("Kirchspieltrift");
        break;
    }
    case 186471:
    {
        returnValue = F("Kirchspielwald-Grenzweg");
        break;
    }
    case 186472:
    {
        returnValue = F("Kirchspielweg");
        break;
    }
    case 186473:
    {
        returnValue = F("Kirchspitz");
        break;
    }
    case 186474:
    {
        returnValue = F("Kirchspitze");
        break;
    }
    case 186475:
    {
        returnValue = F("Kirchstaffel");
        break;
    }
    case 186476:
    {
        returnValue = F("Kirchstattstr.");
        break;
    }
    case 186477:
    {
        returnValue = F("Kirchsteg");
        break;
    }
    case 186478:
    {
        returnValue = F("Kirchstege");
        break;
    }
    case 186479:
    {
        returnValue = F("Kirchsteig");
        break;
    }
    case 186480:
    {
        returnValue = F("Kirchsteig Obercunnersdorf-Höckendorf");
        break;
    }
    case 186481:
    {
        returnValue = F("Kirchsteig zur Düpenau/nach Sehmsdorf");
        break;
    }
    case 186482:
    {
        returnValue = F("Kirchsteigbrücke");
        break;
    }
    case 186483:
    {
        returnValue = F("Kirchsteige");
        break;
    }
    case 186484:
    {
        returnValue = F("Kirchsteigleweg");
        break;
    }
    case 186485:
    {
        returnValue = F("Kirchsteigstr.");
        break;
    }
    case 186486:
    {
        returnValue = F("Kirchsteigweg");
        break;
    }
    case 186487:
    {
        returnValue = F("Kirchsteigäcker");
        break;
    }
    case 186488:
    {
        returnValue = F("Kirchsteiner Str.");
        break;
    }
    case 186489:
    {
        returnValue = F("Kirchsteinstr.");
        break;
    }
    case 186490:
    {
        returnValue = F("Kirchstetten");
        break;
    }
    case 186491:
    {
        returnValue = F("Kirchstettener Str.");
        break;
    }
    case 186492:
    {
        returnValue = F("Kirchstieg");
        break;
    }
    case 186493:
    {
        returnValue = F("Kirchstiege");
        break;
    }
    case 186494:
    {
        returnValue = F("Kirchstieglweg");
        break;
    }
    case 186495:
    {
        returnValue = F("Kirchstockacher Str.");
        break;
    }
    case 186496:
    {
        returnValue = F("Kirchstr.");
        break;
    }
    case 186497:
    {
        returnValue = F("Kirchstr. Trinum");
        break;
    }
    case 186498:
    {
        returnValue = F("Kirchstrasse");
        break;
    }
    case 186499:
    {
        returnValue = F("Kirchstätt");
        break;
    }
    case 186500:
    {
        returnValue = F("Kirchstück");
        break;
    }
    case 186501:
    {
        returnValue = F("Kirchsören");
        break;
    }
    case 186502:
    {
        returnValue = F("Kirchtal");
        break;
    }
    case 186503:
    {
        returnValue = F("Kirchtalstr.");
        break;
    }
    case 186504:
    {
        returnValue = F("Kirchtalsweg");
        break;
    }
    case 186505:
    {
        returnValue = F("Kirchtalweg");
        break;
    }
    case 186506:
    {
        returnValue = F("Kirchteich");
        break;
    }
    case 186507:
    {
        returnValue = F("Kirchteichgasse");
        break;
    }
    case 186508:
    {
        returnValue = F("Kirchthann");
        break;
    }
    case 186509:
    {
        returnValue = F("Kirchtimker Str.");
        break;
    }
    case 186510:
    {
        returnValue = F("Kirchtor");
        break;
    }
    case 186511:
    {
        returnValue = F("Kirchtorplatz");
        break;
    }
    case 186512:
    {
        returnValue = F("Kirchtorstr.");
        break;
    }
    case 186513:
    {
        returnValue = F("Kirchtorweg");
        break;
    }
    case 186514:
    {
        returnValue = F("Kirchtreppe");
        break;
    }
    case 186515:
    {
        returnValue = F("Kirchtruderinger Weg");
        break;
    }
    case 186516:
    {
        returnValue = F("Kirchturmschneise");
        break;
    }
    case 186517:
    {
        returnValue = F("Kirchturmstr.");
        break;
    }
    case 186518:
    {
        returnValue = F("Kirchturmsweg");
        break;
    }
    case 186519:
    {
        returnValue = F("Kirchtwete");
        break;
    }
    case 186520:
    {
        returnValue = F("Kirchtwiete");
        break;
    }
    case 186521:
    {
        returnValue = F("Kirchunnauerwiese");
        break;
    }
    case 186522:
    {
        returnValue = F("Kirchvenn");
        break;
    }
    case 186523:
    {
        returnValue = F("Kirchviertel");
        break;
    }
    case 186524:
    {
        returnValue = F("Kirchvordener Str.");
        break;
    }
    case 186525:
    {
        returnValue = F("Kirchvorplatz");
        break;
    }
    case 186526:
    {
        returnValue = F("Kirchwahlingen");
        break;
    }
    case 186527:
    {
        returnValue = F("Kirchwalder Str.");
        break;
    }
    case 186528:
    {
        returnValue = F("Kirchwaldstr.");
        break;
    }
    case 186529:
    {
        returnValue = F("Kirchwaldsweg");
        break;
    }
    case 186530:
    {
        returnValue = F("Kirchwall");
        break;
    }
    case 186531:
    {
        returnValue = F("Kirchwallstr.");
        break;
    }
    case 186532:
    {
        returnValue = F("Kirchwalseder Str.");
        break;
    }
    case 186533:
    {
        returnValue = F("Kirchwandstr.");
        break;
    }
    case 186534:
    {
        returnValue = F("Kirchwanne");
        break;
    }
    case 186535:
    {
        returnValue = F("Kirchwarfenweg");
        break;
    }
    case 186536:
    {
        returnValue = F("Kirchwasen");
        break;
    }
    case 186537:
    {
        returnValue = F("Kirchwatt");
        break;
    }
    case 186538:
    {
        returnValue = F("Kirchweg");
        break;
    }
    case 186539:
    {
        returnValue = F("Kirchweg Aha");
        break;
    }
    case 186540:
    {
        returnValue = F("Kirchweg Bornholdt");
        break;
    }
    case 186541:
    {
        returnValue = F("Kirchweg-Allee");
        break;
    }
    case 186542:
    {
        returnValue = F("Kirchwegallee");
        break;
    }
    case 186543:
    {
        returnValue = F("Kirchwege");
        break;
    }
    case 186544:
    {
        returnValue = F("Kirchwegeschle");
        break;
    }
    case 186545:
    {
        returnValue = F("Kirchweggangerl");
        break;
    }
    case 186546:
    {
        returnValue = F("Kirchwegle");
        break;
    }
    case 186547:
    {
        returnValue = F("Kirchwegsgarten");
        break;
    }
    case 186548:
    {
        returnValue = F("Kirchwegskamp");
        break;
    }
    case 186549:
    {
        returnValue = F("Kirchwegstr.");
        break;
    }
    case 186550:
    {
        returnValue = F("Kirchwegäcker");
        break;
    }
    case 186551:
    {
        returnValue = F("Kirchwehr");
        break;
    }
    case 186552:
    {
        returnValue = F("Kirchwehrener Ring");
        break;
    }
    case 186553:
    {
        returnValue = F("Kirchwehrener Str.");
        break;
    }
    case 186554:
    {
        returnValue = F("Kirchweidacher Str.");
        break;
    }
    case 186555:
    {
        returnValue = F("Kirchweiherstr.");
        break;
    }
    case 186556:
    {
        returnValue = F("Kirchweihgasse");
        break;
    }
    case 186557:
    {
        returnValue = F("Kirchweihplatz");
        break;
    }
    case 186558:
    {
        returnValue = F("Kirchweihtaler Str.");
        break;
    }
    case 186559:
    {
        returnValue = F("Kirchweihweg");
        break;
    }
    case 186560:
    {
        returnValue = F("Kirchweihwiese");
        break;
    }
    case 186561:
    {
        returnValue = F("Kirchweihäcker");
        break;
    }
    case 186562:
    {
        returnValue = F("Kirchweiler Str.");
        break;
    }
    case 186563:
    {
        returnValue = F("Kirchweilerstr.");
        break;
    }
    case 186564:
    {
        returnValue = F("Kirchweyher Heide");
        break;
    }
    case 186565:
    {
        returnValue = F("Kirchweyher Str.");
        break;
    }
    case 186566:
    {
        returnValue = F("Kirchwiehe");
        break;
    }
    case 186567:
    {
        returnValue = F("Kirchwies");
        break;
    }
    case 186568:
    {
        returnValue = F("Kirchwieschen");
        break;
    }
    case 186569:
    {
        returnValue = F("Kirchwiese");
        break;
    }
    case 186570:
    {
        returnValue = F("Kirchwiesen");
        break;
    }
    case 186571:
    {
        returnValue = F("Kirchwiesenbogen");
        break;
    }
    case 186572:
    {
        returnValue = F("Kirchwiesenstr.");
        break;
    }
    case 186573:
    {
        returnValue = F("Kirchwiesenweg");
        break;
    }
    case 186574:
    {
        returnValue = F("Kirchwiesstr.");
        break;
    }
    case 186575:
    {
        returnValue = F("Kirchwiesweg");
        break;
    }
    case 186576:
    {
        returnValue = F("Kirchwinkel");
        break;
    }
    case 186577:
    {
        returnValue = F("Kirchwinkelstr.");
        break;
    }
    case 186578:
    {
        returnValue = F("Kirchwistedter Hauptstr.");
        break;
    }
    case 186579:
    {
        returnValue = F("Kirchworthstr.");
        break;
    }
    case 186580:
    {
        returnValue = F("Kirchwyk");
        break;
    }
    case 186581:
    {
        returnValue = F("Kirchzartener Str.");
        break;
    }
    case 186582:
    {
        returnValue = F("Kirchzeile");
        break;
    }
    case 186583:
    {
        returnValue = F("Kirchzeller Str.");
        break;
    }
    case 186584:
    {
        returnValue = F("Kirchzellerweg");
        break;
    }
    case 186585:
    {
        returnValue = F("Kirchäcker");
        break;
    }
    case 186586:
    {
        returnValue = F("Kirchäckerstr.");
        break;
    }
    case 186587:
    {
        returnValue = F("Kirchäckerweg");
        break;
    }
    case 186588:
    {
        returnValue = F("Kirchänger");
        break;
    }
    case 186589:
    {
        returnValue = F("Kirchötting");
        break;
    }
    case 186590:
    {
        returnValue = F("Kirchüber");
        break;
    }
    case 186591:
    {
        returnValue = F("Kirdorfer Allee");
        break;
    }
    case 186592:
    {
        returnValue = F("Kirdorfer Str.");
        break;
    }
    case 186593:
    {
        returnValue = F("Kirfer Str.");
        break;
    }
    case 186594:
    {
        returnValue = F("Kirgelweg");
        break;
    }
    case 186595:
    {
        returnValue = F("Kirkeler Dell");
        break;
    }
    case 186596:
    {
        returnValue = F("Kirkeler Str.");
        break;
    }
    case 186597:
    {
        returnValue = F("Kirkesweg");
        break;
    }
    case 186598:
    {
        returnValue = F("Kirklandstr.");
        break;
    }
    case 186599:
    {
        returnValue = F("Kirksweg");
        break;
    }
    case 186600:
    {
        returnValue = F("Kirkweg");
        break;
    }
    case 186601:
    {
        returnValue = F("Kirkwirg");
        break;
    }
    case 186602:
    {
        returnValue = F("Kirkwrahe");
        break;
    }
    case 186603:
    {
        returnValue = F("Kirlenring");
        break;
    }
    case 186604:
    {
        returnValue = F("Kirlenweg");
        break;
    }
    case 186605:
    {
        returnValue = F("Kirlestr.");
        break;
    }
    case 186606:
    {
        returnValue = F("Kirleweg");
        break;
    }
    case 186607:
    {
        returnValue = F("Kirmaier Str.");
        break;
    }
    case 186608:
    {
        returnValue = F("Kirmaierstr.");
        break;
    }
    case 186609:
    {
        returnValue = F("Kirmayer-Geräumt");
        break;
    }
    case 186610:
    {
        returnValue = F("Kirmbach");
        break;
    }
    case 186611:
    {
        returnValue = F("Kirmeer");
        break;
    }
    case 186612:
    {
        returnValue = F("Kirmeerstr.");
        break;
    }
    case 186613:
    {
        returnValue = F("Kirmesau");
        break;
    }
    case 186614:
    {
        returnValue = F("Kirmesauer Str.");
        break;
    }
    case 186615:
    {
        returnValue = F("Kirmesbrücke");
        break;
    }
    case 186616:
    {
        returnValue = F("Kirmesgrund");
        break;
    }
    case 186617:
    {
        returnValue = F("Kirmesplatz");
        break;
    }
    case 186618:
    {
        returnValue = F("Kirmesplatz Glaadt");
        break;
    }
    case 186619:
    {
        returnValue = F("Kirmesplatz Stadtkyll");
        break;
    }
    case 186620:
    {
        returnValue = F("Kirmeswäldchen");
        break;
    }
    case 186621:
    {
        returnValue = F("Kirmoosweg");
        break;
    }
    case 186622:
    {
        returnValue = F("Kirmsees");
        break;
    }
    case 186623:
    {
        returnValue = F("Kirmsseweg");
        break;
    }
    case 186624:
    {
        returnValue = F("Kirnacher Höhe");
        break;
    }
    case 186625:
    {
        returnValue = F("Kirnacher Str.");
        break;
    }
    case 186626:
    {
        returnValue = F("Kirnachstr.");
        break;
    }
    case 186627:
    {
        returnValue = F("Kirnachtal");
        break;
    }
    case 186628:
    {
        returnValue = F("Kirnachweg");
        break;
    }
    case 186629:
    {
        returnValue = F("Kirnaustr.");
        break;
    }
    case 186630:
    {
        returnValue = F("Kirnautalradweg");
        break;
    }
    case 186631:
    {
        returnValue = F("Kirnautalstr.");
        break;
    }
    case 186632:
    {
        returnValue = F("Kirnbach");
        break;
    }
    case 186633:
    {
        returnValue = F("Kirnbacher Str.");
        break;
    }
    case 186634:
    {
        returnValue = F("Kirnbacher Weg");
        break;
    }
    case 186635:
    {
        returnValue = F("Kirnbachhangweg");
        break;
    }
    case 186636:
    {
        returnValue = F("Kirnbachstr.");
        break;
    }
    case 186637:
    {
        returnValue = F("Kirnbachsträßchen");
        break;
    }
    case 186638:
    {
        returnValue = F("Kirnbachtalweg");
        break;
    }
    case 186639:
    {
        returnValue = F("Kirnbachweg");
        break;
    }
    case 186640:
    {
        returnValue = F("Kirnbergauffahrt");
        break;
    }
    case 186641:
    {
        returnValue = F("Kirnberger Str.");
        break;
    }
    case 186642:
    {
        returnValue = F("Kirnbergerstr.");
        break;
    }
    case 186643:
    {
        returnValue = F("Kirnbergl");
        break;
    }
    case 186644:
    {
        returnValue = F("Kirnbergstr.");
        break;
    }
    case 186645:
    {
        returnValue = F("Kirnbergweg");
        break;
    }
    case 186646:
    {
        returnValue = F("Kirnbergwiese");
        break;
    }
    case 186647:
    {
        returnValue = F("Kirnburgblick");
        break;
    }
    case 186648:
    {
        returnValue = F("Kirneckstr.");
        break;
    }
    case 186649:
    {
        returnValue = F("Kirneckweg");
        break;
    }
    case 186650:
    {
        returnValue = F("Kirner Str.");
        break;
    }
    case 186651:
    {
        returnValue = F("Kirner Weg");
        break;
    }
    case 186652:
    {
        returnValue = F("Kirnerstr.");
        break;
    }
    case 186653:
    {
        returnValue = F("Kirnhaldenweg");
        break;
    }
    case 186654:
    {
        returnValue = F("Kirnhaldertal");
        break;
    }
    case 186655:
    {
        returnValue = F("Kirnhardshofweg");
        break;
    }
    case 186656:
    {
        returnValue = F("Kirnhof");
        break;
    }
    case 186657:
    {
        returnValue = F("Kirnitzschbergweg");
        break;
    }
    case 186658:
    {
        returnValue = F("Kirnitzschtalstr.");
        break;
    }
    case 186659:
    {
        returnValue = F("Kirnkuppenstr.");
        break;
    }
    case 186660:
    {
        returnValue = F("Kirnkuppenweg");
        break;
    }
    case 186661:
    {
        returnValue = F("Kirnsteiner Weg");
        break;
    }
    case 186662:
    {
        returnValue = F("Kirnsteinstr.");
        break;
    }
    case 186663:
    {
        returnValue = F("Kirnstr.");
        break;
    }
    case 186664:
    {
        returnValue = F("Kirntalweg");
        break;
    }
    case 186665:
    {
        returnValue = F("Kirnwasen");
        break;
    }
    case 186666:
    {
        returnValue = F("Kirrberg");
        break;
    }
    case 186667:
    {
        returnValue = F("Kirrberger Str.");
        break;
    }
    case 186668:
    {
        returnValue = F("Kirrenweg");
        break;
    }
    case 186669:
    {
        returnValue = F("Kirrgasse");
        break;
    }
    case 186670:
    {
        returnValue = F("Kirrgäßchen");
        break;
    }
    case 186671:
    {
        returnValue = F("Kirrlacher Str.");
        break;
    }
    case 186672:
    {
        returnValue = F("Kirrlacher Weg");
        break;
    }
    case 186673:
    {
        returnValue = F("Kirrlachweg");
        break;
    }
    case 186674:
    {
        returnValue = F("Kirrlestr.");
        break;
    }
    case 186675:
    {
        returnValue = F("Kirrlohstr.");
        break;
    }
    case 186676:
    {
        returnValue = F("Kirrtalstr.");
        break;
    }
    case 186677:
    {
        returnValue = F("Kirrweg");
        break;
    }
    case 186678:
    {
        returnValue = F("Kirrweiler Str.");
        break;
    }
    case 186679:
    {
        returnValue = F("Kirrweilerer Str.");
        break;
    }
    case 186680:
    {
        returnValue = F("Kirrwiller Str.");
        break;
    }
    case 186681:
    {
        returnValue = F("Kirryweg");
        break;
    }
    case 186682:
    {
        returnValue = F("Kirsbacher Str.");
        break;
    }
    case 186683:
    {
        returnValue = F("Kirsch-Anger");
        break;
    }
    case 186684:
    {
        returnValue = F("Kirsch-Puricelli-Platz");
        break;
    }
    case 186685:
    {
        returnValue = F("Kirschacker");
        break;
    }
    case 186686:
    {
        returnValue = F("Kirschackerstr.");
        break;
    }
    case 186687:
    {
        returnValue = F("Kirschallee");
        break;
    }
    case 186688:
    {
        returnValue = F("Kirschanger");
        break;
    }
    case 186689:
    {
        returnValue = F("Kirschauer Str.");
        break;
    }
    case 186690:
    {
        returnValue = F("Kirschauer Weg");
        break;
    }
    case 186691:
    {
        returnValue = F("Kirschbach");
        break;
    }
    case 186692:
    {
        returnValue = F("Kirschbacher Weg");
        break;
    }
    case 186693:
    {
        returnValue = F("Kirschbachstr.");
        break;
    }
    case 186694:
    {
        returnValue = F("Kirschbachtal");
        break;
    }
    case 186695:
    {
        returnValue = F("Kirschbachweg");
        break;
    }
    case 186696:
    {
        returnValue = F("Kirschbaum");
        break;
    }
    case 186697:
    {
        returnValue = F("Kirschbaumallee");
        break;
    }
    case 186698:
    {
        returnValue = F("Kirschbaumer Hof");
        break;
    }
    case 186699:
    {
        returnValue = F("Kirschbaumer Str.");
        break;
    }
    case 186700:
    {
        returnValue = F("Kirschbaumfeld");
        break;
    }
    case 186701:
    {
        returnValue = F("Kirschbaumhof");
        break;
    }
    case 186702:
    {
        returnValue = F("Kirschbaumliethe");
        break;
    }
    case 186703:
    {
        returnValue = F("Kirschbaumplatz");
        break;
    }
    case 186704:
    {
        returnValue = F("Kirschbaumreihe");
        break;
    }
    case 186705:
    {
        returnValue = F("Kirschbaumrichtstatt");
        break;
    }
    case 186706:
    {
        returnValue = F("Kirschbaumstr.");
        break;
    }
    case 186707:
    {
        returnValue = F("Kirschbaumsträßle");
        break;
    }
    case 186708:
    {
        returnValue = F("Kirschbaumsweg");
        break;
    }
    case 186709:
    {
        returnValue = F("Kirschbaumwasen");
        break;
    }
    case 186710:
    {
        returnValue = F("Kirschbaumweg");
        break;
    }
    case 186711:
    {
        returnValue = F("Kirschbaumäcker");
        break;
    }
    case 186712:
    {
        returnValue = F("Kirschberg");
        break;
    }
    case 186713:
    {
        returnValue = F("Kirschberg 3");
        break;
    }
    case 186714:
    {
        returnValue = F("Kirschbergschneise");
        break;
    }
    case 186715:
    {
        returnValue = F("Kirschbergsiedlung");
        break;
    }
    case 186716:
    {
        returnValue = F("Kirschbergstr.");
        break;
    }
    case 186717:
    {
        returnValue = F("Kirschbergweg");
        break;
    }
    case 186718:
    {
        returnValue = F("Kirschblüten Weg");
        break;
    }
    case 186719:
    {
        returnValue = F("Kirschblütenallee");
        break;
    }
    case 186720:
    {
        returnValue = F("Kirschblütenpark");
        break;
    }
    case 186721:
    {
        returnValue = F("Kirschblütenstr.");
        break;
    }
    case 186722:
    {
        returnValue = F("Kirschblütenweg");
        break;
    }
    case 186723:
    {
        returnValue = F("Kirschborn");
        break;
    }
    case 186724:
    {
        returnValue = F("Kirschbreitenweg");
        break;
    }
    case 186725:
    {
        returnValue = F("Kirschbrunnen");
        break;
    }
    case 186726:
    {
        returnValue = F("Kirschbrücke");
        break;
    }
    case 186727:
    {
        returnValue = F("Kirschbusch");
        break;
    }
    case 186728:
    {
        returnValue = F("Kirschbuschweg");
        break;
    }
    case 186729:
    {
        returnValue = F("Kirschbäumchen");
        break;
    }
    case 186730:
    {
        returnValue = F("Kirschbäumchengasse");
        break;
    }
    case 186731:
    {
        returnValue = F("Kirschbäumer Weg");
        break;
    }
    case 186732:
    {
        returnValue = F("Kirschbäumle");
        break;
    }
    case 186733:
    {
        returnValue = F("Kirschbäumleboden");
        break;
    }
    case 186734:
    {
        returnValue = F("Kirschbäumleweg");
        break;
    }
    case 186735:
    {
        returnValue = F("Kirschbüchel");
        break;
    }
    case 186736:
    {
        returnValue = F("Kirschdell");
        break;
    }
    case 186737:
    {
        returnValue = F("Kirschenallee");
        break;
    }
    case 186738:
    {
        returnValue = F("Kirschenbacher Steige");
        break;
    }
    case 186739:
    {
        returnValue = F("Kirschenbachweg");
        break;
    }
    case 186740:
    {
        returnValue = F("Kirschenbeißerweg");
        break;
    }
    case 186741:
    {
        returnValue = F("Kirschenberg");
        break;
    }
    case 186742:
    {
        returnValue = F("Kirschenbergstr.");
        break;
    }
    case 186743:
    {
        returnValue = F("Kirschenbrink");
        break;
    }
    case 186744:
    {
        returnValue = F("Kirschenbungert");
        break;
    }
    case 186745:
    {
        returnValue = F("Kirschendell");
        break;
    }
    case 186746:
    {
        returnValue = F("Kirschendorf");
        break;
    }
    case 186747:
    {
        returnValue = F("Kirschendorfer Weg");
        break;
    }
    case 186748:
    {
        returnValue = F("Kirscheneck");
        break;
    }
    case 186749:
    {
        returnValue = F("Kirschenfeldstr.");
        break;
    }
    case 186750:
    {
        returnValue = F("Kirschengarten");
        break;
    }
    case 186751:
    {
        returnValue = F("Kirschengasse");
        break;
    }
    case 186752:
    {
        returnValue = F("Kirschengrabenstr.");
        break;
    }
    case 186753:
    {
        returnValue = F("Kirschenhain");
        break;
    }
    case 186754:
    {
        returnValue = F("Kirschenhalde");
        break;
    }
    case 186755:
    {
        returnValue = F("Kirschenhof");
        break;
    }
    case 186756:
    {
        returnValue = F("Kirschenhohl");
        break;
    }
    case 186757:
    {
        returnValue = F("Kirschenhöfer Weg");
        break;
    }
    case 186758:
    {
        returnValue = F("Kirschenkamp");
        break;
    }
    case 186759:
    {
        returnValue = F("Kirschenkehle");
        break;
    }
    case 186760:
    {
        returnValue = F("Kirschenknapp");
        break;
    }
    case 186761:
    {
        returnValue = F("Kirschenleite");
        break;
    }
    case 186762:
    {
        returnValue = F("Kirschenpfad");
        break;
    }
    case 186763:
    {
        returnValue = F("Kirschenrain");
        break;
    }
    case 186764:
    {
        returnValue = F("Kirschenrech");
        break;
    }
    case 186765:
    {
        returnValue = F("Kirschenreihe");
        break;
    }
    case 186766:
    {
        returnValue = F("Kirschenschlagweg");
        break;
    }
    case 186767:
    {
        returnValue = F("Kirschenschrot");
        break;
    }
    case 186768:
    {
        returnValue = F("Kirschensteg");
        break;
    }
    case 186769:
    {
        returnValue = F("Kirschensteige");
        break;
    }
    case 186770:
    {
        returnValue = F("Kirschensteinweg");
        break;
    }
    case 186771:
    {
        returnValue = F("Kirschenstieg");
        break;
    }
    case 186772:
    {
        returnValue = F("Kirschenstr.");
        break;
    }
    case 186773:
    {
        returnValue = F("Kirschensträßel");
        break;
    }
    case 186774:
    {
        returnValue = F("Kirschental");
        break;
    }
    case 186775:
    {
        returnValue = F("Kirschentreil");
        break;
    }
    case 186776:
    {
        returnValue = F("Kirschenwasenweg");
        break;
    }
    case 186777:
    {
        returnValue = F("Kirschenweg");
        break;
    }
    case 186778:
    {
        returnValue = F("Kirschenwäldchen");
        break;
    }
    case 186779:
    {
        returnValue = F("Kirschenäcker");
        break;
    }
    case 186780:
    {
        returnValue = F("Kirschenäckerweg");
        break;
    }
    case 186781:
    {
        returnValue = F("Kirschfeld");
        break;
    }
    case 186782:
    {
        returnValue = F("Kirschfeldstr.");
        break;
    }
    case 186783:
    {
        returnValue = F("Kirschfinkgasse");
        break;
    }
    case 186784:
    {
        returnValue = F("Kirschfurter Str.");
        break;
    }
    case 186785:
    {
        returnValue = F("Kirschgarten");
        break;
    }
    case 186786:
    {
        returnValue = F("Kirschgarteneck");
        break;
    }
    case 186787:
    {
        returnValue = F("Kirschgartener Str.");
        break;
    }
    case 186788:
    {
        returnValue = F("Kirschgartenstr.");
        break;
    }
    case 186789:
    {
        returnValue = F("Kirschgartenweg");
        break;
    }
    case 186790:
    {
        returnValue = F("Kirschgasse");
        break;
    }
    case 186791:
    {
        returnValue = F("Kirschgraben");
        break;
    }
    case 186792:
    {
        returnValue = F("Kirschgrund");
        break;
    }
    case 186793:
    {
        returnValue = F("Kirschhalde");
        break;
    }
    case 186794:
    {
        returnValue = F("Kirschhaldenweg");
        break;
    }
    case 186795:
    {
        returnValue = F("Kirschhausener Str.");
        break;
    }
    case 186796:
    {
        returnValue = F("Kirschhecke");
        break;
    }
    case 186797:
    {
        returnValue = F("Kirschheider Str.");
        break;
    }
    case 186798:
    {
        returnValue = F("Kirschheiderbroich");
        break;
    }
    case 186799:
    {
        returnValue = F("Kirschhofer Str.");
        break;
    }
    case 186800:
    {
        returnValue = F("Kirschhoff");
        break;
    }
    case 186801:
    {
        returnValue = F("Kirschhohl");
        break;
    }
    case 186802:
    {
        returnValue = F("Kirschholzstr.");
        break;
    }
    case 186803:
    {
        returnValue = F("Kirschhälde");
        break;
    }
    case 186804:
    {
        returnValue = F("Kirschhäuser Str.");
        break;
    }
    case 186805:
    {
        returnValue = F("Kirschhöfer Weg");
        break;
    }
    case 186806:
    {
        returnValue = F("Kirschhöhe");
        break;
    }
    case 186807:
    {
        returnValue = F("Kirschhügel");
        break;
    }
    case 186808:
    {
        returnValue = F("Kirschkamp");
        break;
    }
    case 186809:
    {
        returnValue = F("Kirschkamper Weg");
        break;
    }
    case 186810:
    {
        returnValue = F("Kirschkauer Auslaufweg");
        break;
    }
    case 186811:
    {
        returnValue = F("Kirschkauer Gasse");
        break;
    }
    case 186812:
    {
        returnValue = F("Kirschkaul");
        break;
    }
    case 186813:
    {
        returnValue = F("Kirschkaulenweg");
        break;
    }
    case 186814:
    {
        returnValue = F("Kirschkoppel");
        break;
    }
    case 186815:
    {
        returnValue = F("Kirschlehrpfad");
        break;
    }
    case 186816:
    {
        returnValue = F("Kirschleite");
        break;
    }
    case 186817:
    {
        returnValue = F("Kirschmatt");
        break;
    }
    case 186818:
    {
        returnValue = F("Kirschmerseihe");
        break;
    }
    case 186819:
    {
        returnValue = F("Kirschmuttergarten");
        break;
    }
    case 186820:
    {
        returnValue = F("Kirschners Stiege");
        break;
    }
    case 186821:
    {
        returnValue = F("Kirschnerstr.");
        break;
    }
    case 186822:
    {
        returnValue = F("Kirschnerweg");
        break;
    }
    case 186823:
    {
        returnValue = F("Kirschpfad");
        break;
    }
    case 186824:
    {
        returnValue = F("Kirschplantage");
        break;
    }
    case 186825:
    {
        returnValue = F("Kirschplatz");
        break;
    }
    case 186826:
    {
        returnValue = F("Kirschrain");
        break;
    }
    case 186827:
    {
        returnValue = F("Kirschrother Str.");
        break;
    }
    case 186828:
    {
        returnValue = F("Kirschsiefen");
        break;
    }
    case 186829:
    {
        returnValue = F("Kirschsteig");
        break;
    }
    case 186830:
    {
        returnValue = F("Kirschsteinanlage");
        break;
    }
    case 186831:
    {
        returnValue = F("Kirschstr.");
        break;
    }
    case 186832:
    {
        returnValue = F("Kirschtalweg");
        break;
    }
    case 186833:
    {
        returnValue = F("Kirschwasenweg");
        break;
    }
    case 186834:
    {
        returnValue = F("Kirschweg");
        break;
    }
    case 186835:
    {
        returnValue = F("Kirschweiden");
        break;
    }
    case 186836:
    {
        returnValue = F("Kirschweidstr.");
        break;
    }
    case 186837:
    {
        returnValue = F("Kirschweiler Brücke");
        break;
    }
    case 186838:
    {
        returnValue = F("Kirschweiler Mühle");
        break;
    }
    case 186839:
    {
        returnValue = F("Kirschweiler Str.");
        break;
    }
    case 186840:
    {
        returnValue = F("Kirschweiler Weg");
        break;
    }
    case 186841:
    {
        returnValue = F("Kirschwengstr.");
        break;
    }
    case 186842:
    {
        returnValue = F("Kirschwiese");
        break;
    }
    case 186843:
    {
        returnValue = F("Kirschwiesenstr.");
        break;
    }
    case 186844:
    {
        returnValue = F("Kirschwiesenweg");
        break;
    }
    case 186845:
    {
        returnValue = F("Kirschäckerstr.");
        break;
    }
    case 186846:
    {
        returnValue = F("Kirschäckerweg");
        break;
    }
    case 186847:
    {
        returnValue = F("Kirselfeld");
        break;
    }
    case 186848:
    {
        returnValue = F("Kirselstr.");
        break;
    }
    case 186849:
    {
        returnValue = F("Kirsperbaumweg");
        break;
    }
    case 186850:
    {
        returnValue = F("Kirstapelweg");
        break;
    }
    case 186851:
    {
        returnValue = F("Kirsteinstr.");
        break;
    }
    case 186852:
    {
        returnValue = F("Kirstetter Str.");
        break;
    }
    case 186853:
    {
        returnValue = F("Kirsthof");
        break;
    }
    case 186854:
    {
        returnValue = F("Kirsthüttenweg");
        break;
    }
    case 186855:
    {
        returnValue = F("Kirstingshof");
        break;
    }
    case 186856:
    {
        returnValue = F("Kirtelstr.");
        break;
    }
    case 186857:
    {
        returnValue = F("Kirtorfer Str.");
        break;
    }
    case 186858:
    {
        returnValue = F("Kirtorfer Weg");
        break;
    }
    case 186859:
    {
        returnValue = F("Kirunastr.");
        break;
    }
    case 186860:
    {
        returnValue = F("Kiryat-Shmona-Str.");
        break;
    }
    case 186861:
    {
        returnValue = F("Kirzenicher Weg");
        break;
    }
    case 186862:
    {
        returnValue = F("Kirzingerstr.");
        break;
    }
    case 186863:
    {
        returnValue = F("Kisastr.");
        break;
    }
    case 186864:
    {
        returnValue = F("Kisau");
        break;
    }
    case 186865:
    {
        returnValue = F("Kischlitz");
        break;
    }
    case 186866:
    {
        returnValue = F("Kischstr.");
        break;
    }
    case 186867:
    {
        returnValue = F("Kisdorf-Feld");
        break;
    }
    case 186868:
    {
        returnValue = F("Kisdorfer Str.");
        break;
    }
    case 186869:
    {
        returnValue = F("Kisdorfer Weg");
        break;
    }
    case 186870:
    {
        returnValue = F("Kiskamper Weg");
        break;
    }
    case 186871:
    {
        returnValue = F("Kiskerfeld");
        break;
    }
    case 186872:
    {
        returnValue = F("Kislauerstr.");
        break;
    }
    case 186873:
    {
        returnValue = F("Kispelheck");
        break;
    }
    case 186874:
    {
        returnValue = F("Kisperhy");
        break;
    }
    case 186875:
    {
        returnValue = F("Kissbergstr.");
        break;
    }
    case 186876:
    {
        returnValue = F("Kissel");
        break;
    }
    case 186877:
    {
        returnValue = F("Kisselbacher Str.");
        break;
    }
    case 186878:
    {
        returnValue = F("Kisselberg");
        break;
    }
    case 186879:
    {
        returnValue = F("Kisselbühlweg");
        break;
    }
    case 186880:
    {
        returnValue = F("Kisseler Str.");
        break;
    }
    case 186881:
    {
        returnValue = F("Kisselgasse");
        break;
    }
    case 186882:
    {
        returnValue = F("Kisselhof");
        break;
    }
    case 186883:
    {
        returnValue = F("Kisselsdell");
        break;
    }
    case 186884:
    {
        returnValue = F("Kisselstr.");
        break;
    }
    case 186885:
    {
        returnValue = F("Kisselweg");
        break;
    }
    case 186886:
    {
        returnValue = F("Kisser Weg");
        break;
    }
    case 186887:
    {
        returnValue = F("Kisserower Str.");
        break;
    }
    case 186888:
    {
        returnValue = F("Kisserower Weg");
        break;
    }
    case 186889:
    {
        returnValue = F("Kissing Bahnhof");
        break;
    }
    case 186890:
    {
        returnValue = F("Kissinger Str.");
        break;
    }
    case 186891:
    {
        returnValue = F("Kissingerstr.");
        break;
    }
    case 186892:
    {
        returnValue = F("Kisslerweg");
        break;
    }
    case 186893:
    {
        returnValue = F("Kissweg");
        break;
    }
    case 186894:
    {
        returnValue = F("Kistelbergstr.");
        break;
    }
    case 186895:
    {
        returnValue = F("Kistemakerstr.");
        break;
    }
    case 186896:
    {
        returnValue = F("Kistemakerweg");
        break;
    }
    case 186897:
    {
        returnValue = F("Kistenbach");
        break;
    }
    case 186898:
    {
        returnValue = F("Kisteneichstr.");
        break;
    }
    case 186899:
    {
        returnValue = F("Kistenkopfstr.");
        break;
    }
    case 186900:
    {
        returnValue = F("Kistenmacher Weg");
        break;
    }
    case 186901:
    {
        returnValue = F("Kistenweg");
        break;
    }
    case 186902:
    {
        returnValue = F("Kister Str.");
        break;
    }
    case 186903:
    {
        returnValue = F("Kistlergasse");
        break;
    }
    case 186904:
    {
        returnValue = F("Kistlerstr.");
        break;
    }
    case 186905:
    {
        returnValue = F("Kistlerweg");
        break;
    }
    case 186906:
    {
        returnValue = F("Kistlohweg");
        break;
    }
    case 186907:
    {
        returnValue = F("Kistnerstr.");
        break;
    }
    case 186908:
    {
        returnValue = F("Kistritzer Str.");
        break;
    }
    case 186909:
    {
        returnValue = F("Kitschburg");
        break;
    }
    case 186910:
    {
        returnValue = F("Kitschburger Str.");
        break;
    }
    case 186911:
    {
        returnValue = F("Kitschburgstr.");
        break;
    }
    case 186912:
    {
        returnValue = F("Kitscherstr.");
        break;
    }
    case 186913:
    {
        returnValue = F("Kitscherweg");
        break;
    }
    case 186914:
    {
        returnValue = F("Kittel");
        break;
    }
    case 186915:
    {
        returnValue = F("Kittelgasse");
        break;
    }
    case 186916:
    {
        returnValue = F("Kittelhakenstr.");
        break;
    }
    case 186917:
    {
        returnValue = F("Kittelsthaler Weg");
        break;
    }
    case 186918:
    {
        returnValue = F("Kittelstr.");
        break;
    }
    case 186919:
    {
        returnValue = F("Kittelweg");
        break;
    }
    case 186920:
    {
        returnValue = F("Kittenberger Str.");
        break;
    }
    case 186921:
    {
        returnValue = F("Kitteneshalde");
        break;
    }
    case 186922:
    {
        returnValue = F("Kittenfeld");
        break;
    }
    case 186923:
    {
        returnValue = F("Kittenfeldstr.");
        break;
    }
    case 186924:
    {
        returnValue = F("Kittenseer Str.");
        break;
    }
    case 186925:
    {
        returnValue = F("Kittersburger Str.");
        break;
    }
    case 186926:
    {
        returnValue = F("Kittersburger Weide");
        break;
    }
    case 186927:
    {
        returnValue = F("Kittingerweg");
        break;
    }
    case 186928:
    {
        returnValue = F("Kittlerstr.");
        break;
    }
    case 186929:
    {
        returnValue = F("Kittmecke");
        break;
    }
    case 186930:
    {
        returnValue = F("Kittmicke");
        break;
    }
    case 186931:
    {
        returnValue = F("Kittweg");
        break;
    }
    case 186932:
    {
        returnValue = F("Kitzbergweg");
        break;
    }
    case 186933:
    {
        returnValue = F("Kitzburg");
        break;
    }
    case 186934:
    {
        returnValue = F("Kitzburger Str.");
        break;
    }
    case 186935:
    {
        returnValue = F("Kitzbüheler Platz");
        break;
    }
    case 186936:
    {
        returnValue = F("Kitzbüheler Str.");
        break;
    }
    case 186937:
    {
        returnValue = F("Kitzbüheler Weg");
        break;
    }
    case 186938:
    {
        returnValue = F("Kitzbühler Str.");
        break;
    }
    case 186939:
    {
        returnValue = F("Kitzbühler Weg");
        break;
    }
    case 186940:
    {
        returnValue = F("Kitze");
        break;
    }
    case 186941:
    {
        returnValue = F("Kitzeberger Str.");
        break;
    }
    case 186942:
    {
        returnValue = F("Kitzeberger Weg");
        break;
    }
    case 186943:
    {
        returnValue = F("Kitzelbachweg");
        break;
    }
    case 186944:
    {
        returnValue = F("Kitzelgasse");
        break;
    }
    case 186945:
    {
        returnValue = F("Kitzelgraben");
        break;
    }
    case 186946:
    {
        returnValue = F("Kitzen");
        break;
    }
    case 186947:
    {
        returnValue = F("Kitzenbergweg");
        break;
    }
    case 186948:
    {
        returnValue = F("Kitzenbühlstr.");
        break;
    }
    case 186949:
    {
        returnValue = F("Kitzendorfer Platz");
        break;
    }
    case 186950:
    {
        returnValue = F("Kitzendorfer Weg");
        break;
    }
    case 186951:
    {
        returnValue = F("Kitzener Str.");
        break;
    }
    case 186952:
    {
        returnValue = F("Kitzengasse");
        break;
    }
    case 186953:
    {
        returnValue = F("Kitzenhofener Str.");
        break;
    }
    case 186954:
    {
        returnValue = F("Kitzenweg");
        break;
    }
    case 186955:
    {
        returnValue = F("Kitzenwiesenweg");
        break;
    }
    case 186956:
    {
        returnValue = F("Kitzenwiesweg");
        break;
    }
    case 186957:
    {
        returnValue = F("Kitzerostr.");
        break;
    }
    case 186958:
    {
        returnValue = F("Kitzgasse");
        break;
    }
    case 186959:
    {
        returnValue = F("Kitzighofener Str.");
        break;
    }
    case 186960:
    {
        returnValue = F("Kitzighofer Str.");
        break;
    }
    case 186961:
    {
        returnValue = F("Kitzigweg");
        break;
    }
    case 186962:
    {
        returnValue = F("Kitzing");
        break;
    }
    case 186963:
    {
        returnValue = F("Kitzinger Str.");
        break;
    }
    case 186964:
    {
        returnValue = F("Kitzinger Weg");
        break;
    }
    case 186965:
    {
        returnValue = F("Kitzingstr.");
        break;
    }
    case 186966:
    {
        returnValue = F("Kitzingsträssle");
        break;
    }
    case 186967:
    {
        returnValue = F("Kitzingtraufweg");
        break;
    }
    case 186968:
    {
        returnValue = F("Kitzingweg");
        break;
    }
    case 186969:
    {
        returnValue = F("Kitzlerweg");
        break;
    }
    case 186970:
    {
        returnValue = F("Kitzlesweg");
        break;
    }
    case 186971:
    {
        returnValue = F("Kitzner Str.");
        break;
    }
    case 186972:
    {
        returnValue = F("Kitzner Weg");
        break;
    }
    case 186973:
    {
        returnValue = F("Kitzschersche Str.");
        break;
    }
    case 186974:
    {
        returnValue = F("Kitzstr.");
        break;
    }
    case 186975:
    {
        returnValue = F("Kitzweg");
        break;
    }
    case 186976:
    {
        returnValue = F("Kius");
        break;
    }
    case 186977:
    {
        returnValue = F("Kiusser Landstr.");
        break;
    }
    case 186978:
    {
        returnValue = F("Kiverlinstr.");
        break;
    }
    case 186979:
    {
        returnValue = F("Kivinanstr.");
        break;
    }
    case 186980:
    {
        returnValue = F("Kivitstegge");
        break;
    }
    case 186981:
    {
        returnValue = F("Kivostr.");
        break;
    }
    case 186982:
    {
        returnValue = F("Kiwitt");
        break;
    }
    case 186983:
    {
        returnValue = F("Kiwittpad");
        break;
    }
    case 186984:
    {
        returnValue = F("Kiwittsbarg");
        break;
    }
    case 186985:
    {
        returnValue = F("Kiwittsdamm");
        break;
    }
    case 186986:
    {
        returnValue = F("Kiwittsdyck");
        break;
    }
    case 186987:
    {
        returnValue = F("Kiwittshöhe");
        break;
    }
    case 186988:
    {
        returnValue = F("Kiwittstr.");
        break;
    }
    case 186989:
    {
        returnValue = F("Kiwittsweg");
        break;
    }
    case 186990:
    {
        returnValue = F("Kiwittweg");
        break;
    }
    case 186991:
    {
        returnValue = F("Kiwitz-Burg");
        break;
    }
    case 186992:
    {
        returnValue = F("Kiwitzheidweg");
        break;
    }
    case 186993:
    {
        returnValue = F("Kixbüll");
        break;
    }
    case 186994:
    {
        returnValue = F("Kixmühle");
        break;
    }
    case 186995:
    {
        returnValue = F("Kixweg");
        break;
    }
    case 186996:
    {
        returnValue = F("Kißlegger Str.");
        break;
    }
    case 186997:
    {
        returnValue = F("Kißlichstr.");
        break;
    }
    case 186998:
    {
        returnValue = F("Kißlingerstr.");
        break;
    }
    case 186999:
    {
        returnValue = F("Kißlingstr.");
        break;
    }
    case 187000:
    {
        returnValue = F("Kißlingweg");
        break;
    }
    case 187001:
    {
        returnValue = F("Kißweg");
        break;
    }
    case 187002:
    {
        returnValue = F("Kiäkpädken");
        break;
    }
    case 187003:
    {
        returnValue = F("Kiärkenkamp");
        break;
    }
    case 187004:
    {
        returnValue = F("Kiärkweg");
        break;
    }
    case 187005:
    {
        returnValue = F("Kjeirstr.");
        break;
    }
    case 187006:
    {
        returnValue = F("Kjerstr.");
        break;
    }
    case 187007:
    {
        returnValue = F("Kjerweg");
        break;
    }
    case 187008:
    {
        returnValue = F("Kjär");
        break;
    }
    case 187009:
    {
        returnValue = F("Kl. Kirchhofstr.");
        break;
    }
    case 187010:
    {
        returnValue = F("Kl.Oker Park");
        break;
    }
    case 187011:
    {
        returnValue = F("Kla Dreije");
        break;
    }
    case 187012:
    {
        returnValue = F("Klaa Frankreich");
        break;
    }
    case 187013:
    {
        returnValue = F("Klaampshörn");
        break;
    }
    case 187014:
    {
        returnValue = F("Klaasbirken");
        break;
    }
    case 187015:
    {
        returnValue = F("Klaase Garten");
        break;
    }
    case 187016:
    {
        returnValue = F("Klaaskamp");
        break;
    }
    case 187017:
    {
        returnValue = F("Klaasweg");
        break;
    }
    case 187018:
    {
        returnValue = F("Klaaverstücken");
        break;
    }
    case 187019:
    {
        returnValue = F("Klaawes Koppel");
        break;
    }
    case 187020:
    {
        returnValue = F("Klabautermanngang");
        break;
    }
    case 187021:
    {
        returnValue = F("Klabautermannweg");
        break;
    }
    case 187022:
    {
        returnValue = F("Klaber");
        break;
    }
    case 187023:
    {
        returnValue = F("Klabundeweg");
        break;
    }
    case 187024:
    {
        returnValue = F("Klabundring");
        break;
    }
    case 187025:
    {
        returnValue = F("Klackerweg");
        break;
    }
    case 187026:
    {
        returnValue = F("Kladdinger Str.");
        break;
    }
    case 187027:
    {
        returnValue = F("Kladenfloß");
        break;
    }
    case 187028:
    {
        returnValue = F("Kladower Str.");
        break;
    }
    case 187029:
    {
        returnValue = F("Kladower Weg");
        break;
    }
    case 187030:
    {
        returnValue = F("Kladowweg");
        break;
    }
    case 187031:
    {
        returnValue = F("Klaes Garten");
        break;
    }
    case 187032:
    {
        returnValue = F("Klaf");
        break;
    }
    case 187033:
    {
        returnValue = F("Klafelders Garten");
        break;
    }
    case 187034:
    {
        returnValue = F("Klaffelsberger");
        break;
    }
    case 187035:
    {
        returnValue = F("Klaffelsberger Str.");
        break;
    }
    case 187036:
    {
        returnValue = F("Klaffenbach");
        break;
    }
    case 187037:
    {
        returnValue = F("Klaffenbacher Str.");
        break;
    }
    case 187038:
    {
        returnValue = F("Klaffenborn");
        break;
    }
    case 187039:
    {
        returnValue = F("Klaffendes Tal");
        break;
    }
    case 187040:
    {
        returnValue = F("Klaffensteinstr.");
        break;
    }
    case 187041:
    {
        returnValue = F("Klaffermühlweg");
        break;
    }
    case 187042:
    {
        returnValue = F("Klaffernweg");
        break;
    }
    case 187043:
    {
        returnValue = F("Klafferstraß");
        break;
    }
    case 187044:
    {
        returnValue = F("Klafferweg");
        break;
    }
    case 187045:
    {
        returnValue = F("Klafl");
        break;
    }
    case 187046:
    {
        returnValue = F("Klaftergasse");
        break;
    }
    case 187047:
    {
        returnValue = F("Klaftersteig");
        break;
    }
    case 187048:
    {
        returnValue = F("Klaftersteigle");
        break;
    }
    case 187049:
    {
        returnValue = F("Klaftertal");
        break;
    }
    case 187050:
    {
        returnValue = F("Klafterwaldweg");
        break;
    }
    case 187051:
    {
        returnValue = F("Klafterweg");
        break;
    }
    case 187052:
    {
        returnValue = F("Klaftwasserschneise");
        break;
    }
    case 187053:
    {
        returnValue = F("Klafwai");
        break;
    }
    case 187054:
    {
        returnValue = F("Klagebach");
        break;
    }
    case 187055:
    {
        returnValue = F("Klagenfurter Platz");
        break;
    }
    case 187056:
    {
        returnValue = F("Klagenfurter Str.");
        break;
    }
    case 187057:
    {
        returnValue = F("Klagenfurter Weg");
        break;
    }
    case 187058:
    {
        returnValue = F("Klages-Klump-Weg");
        break;
    }
    case 187059:
    {
        returnValue = F("Klagesberg");
        break;
    }
    case 187060:
    {
        returnValue = F("Klagesbreite");
        break;
    }
    case 187061:
    {
        returnValue = F("Klagesgarten");
        break;
    }
    case 187062:
    {
        returnValue = F("Klagesgasse");
        break;
    }
    case 187063:
    {
        returnValue = F("Klageshof");
        break;
    }
    case 187064:
    {
        returnValue = F("Klageskamp");
        break;
    }
    case 187065:
    {
        returnValue = F("Klagesstr.");
        break;
    }
    case 187066:
    {
        returnValue = F("Klagesweg");
        break;
    }
    case 187067:
    {
        returnValue = F("Klageswiese");
        break;
    }
    case 187068:
    {
        returnValue = F("Klagsteinweg");
        break;
    }
    case 187069:
    {
        returnValue = F("Klaholt's Haan");
        break;
    }
    case 187070:
    {
        returnValue = F("Klaholts Haan");
        break;
    }
    case 187071:
    {
        returnValue = F("Klaibachweg");
        break;
    }
    case 187072:
    {
        returnValue = F("Klaiber-Kasper-Str.");
        break;
    }
    case 187073:
    {
        returnValue = F("Klaiberg");
        break;
    }
    case 187074:
    {
        returnValue = F("Klaiberstr.");
        break;
    }
    case 187075:
    {
        returnValue = F("Klaiberweg");
        break;
    }
    case 187076:
    {
        returnValue = F("Klaipedaer Str.");
        break;
    }
    case 187077:
    {
        returnValue = F("Klaiser Str.");
        break;
    }
    case 187078:
    {
        returnValue = F("Klaistower Chaussee");
        break;
    }
    case 187079:
    {
        returnValue = F("Klaistower Str.");
        break;
    }
    case 187080:
    {
        returnValue = F("Klakofenstr.");
        break;
    }
    case 187081:
    {
        returnValue = F("Klame");
        break;
    }
    case 187082:
    {
        returnValue = F("Klamer Brücke");
        break;
    }
    case 187083:
    {
        returnValue = F("Klamersweg");
        break;
    }
    case 187084:
    {
        returnValue = F("Klammbornstr.");
        break;
    }
    case 187085:
    {
        returnValue = F("Klammenstr.");
        break;
    }
    case 187086:
    {
        returnValue = F("Klammenweg");
        break;
    }
    case 187087:
    {
        returnValue = F("Klammerbuckweg");
        break;
    }
    case 187088:
    {
        returnValue = F("Klammerfelsweg");
        break;
    }
    case 187089:
    {
        returnValue = F("Klammergasse");
        break;
    }
    case 187090:
    {
        returnValue = F("Klammersheide");
        break;
    }
    case 187091:
    {
        returnValue = F("Klammersteinweg");
        break;
    }
    case 187092:
    {
        returnValue = F("Klammgasse");
        break;
    }
    case 187093:
    {
        returnValue = F("Klammrainweg");
        break;
    }
    case 187094:
    {
        returnValue = F("Klammsbosch");
        break;
    }
    case 187095:
    {
        returnValue = F("Klammspitzstr.");
        break;
    }
    case 187096:
    {
        returnValue = F("Klammstieg");
        break;
    }
    case 187097:
    {
        returnValue = F("Klammstr.");
        break;
    }
    case 187098:
    {
        returnValue = F("Klammweg");
        break;
    }
    case 187099:
    {
        returnValue = F("Klammäcker");
        break;
    }
    case 187100:
    {
        returnValue = F("Klampengasse");
        break;
    }
    case 187101:
    {
        returnValue = F("Klampereck");
        break;
    }
    case 187102:
    {
        returnValue = F("Klampferstr.");
        break;
    }
    case 187103:
    {
        returnValue = F("Klampweg");
        break;
    }
    case 187104:
    {
        returnValue = F("Klampwehr");
        break;
    }
    case 187105:
    {
        returnValue = F("Klamrothstr.");
        break;
    }
    case 187106:
    {
        returnValue = F("Klandersberg");
        break;
    }
    case 187107:
    {
        returnValue = F("Klanderstr.");
        break;
    }
    case 187108:
    {
        returnValue = F("Klandorfer Bergstr.");
        break;
    }
    case 187109:
    {
        returnValue = F("Klandorfer Str.");
        break;
    }
    case 187110:
    {
        returnValue = F("Klang");
        break;
    }
    case 187111:
    {
        returnValue = F("Klang und Fühl");
        break;
    }
    case 187112:
    {
        returnValue = F("Klangfeld");
        break;
    }
    case 187113:
    {
        returnValue = F("Klanggarten");
        break;
    }
    case 187114:
    {
        returnValue = F("Klanginsel");
        break;
    }
    case 187115:
    {
        returnValue = F("Klangpfad Benediktbeuern");
        break;
    }
    case 187116:
    {
        returnValue = F("Klangweg");
        break;
    }
    case 187117:
    {
        returnValue = F("Klankengasse");
        break;
    }
    case 187118:
    {
        returnValue = F("Klankweg");
        break;
    }
    case 187119:
    {
        returnValue = F("Klanxbüller Str.");
        break;
    }
    case 187120:
    {
        returnValue = F("Klanxbüller Weg");
        break;
    }
    case 187121:
    {
        returnValue = F("Klapdorsweg");
        break;
    }
    case 187122:
    {
        returnValue = F("Klapfenbachstr.");
        break;
    }
    case 187123:
    {
        returnValue = F("Klapfenberg");
        break;
    }
    case 187124:
    {
        returnValue = F("Klapfweg");
        break;
    }
    case 187125:
    {
        returnValue = F("Klapmeyerweg");
        break;
    }
    case 187126:
    {
        returnValue = F("Klappacher Str.");
        break;
    }
    case 187127:
    {
        returnValue = F("Klappbrücke Huntebrück");
        break;
    }
    case 187128:
    {
        returnValue = F("Klappbrücke Zerpenschleuse");
        break;
    }
    case 187129:
    {
        returnValue = F("Klappbrücker Weg");
        break;
    }
    case 187130:
    {
        returnValue = F("Klappe");
        break;
    }
    case 187131:
    {
        returnValue = F("Klappenbergweg");
        break;
    }
    case 187132:
    {
        returnValue = F("Klappenbrücke");
        break;
    }
    case 187133:
    {
        returnValue = F("Klappenburg");
        break;
    }
    case 187134:
    {
        returnValue = F("Klappendorf");
        break;
    }
    case 187135:
    {
        returnValue = F("Klappendorfer Weg");
        break;
    }
    case 187136:
    {
        returnValue = F("Klappengasse");
        break;
    }
    case 187137:
    {
        returnValue = F("Klappenhauweg");
        break;
    }
    case 187138:
    {
        returnValue = F("Klappenheide");
        break;
    }
    case 187139:
    {
        returnValue = F("Klappentalweg");
        break;
    }
    case 187140:
    {
        returnValue = F("Klappenweg");
        break;
    }
    case 187141:
    {
        returnValue = F("Klappenweg (Kirschenallee)");
        break;
    }
    case 187142:
    {
        returnValue = F("Klapperberg");
        break;
    }
    case 187143:
    {
        returnValue = F("Klapperbornweg");
        break;
    }
    case 187144:
    {
        returnValue = F("Klapperfeld");
        break;
    }
    case 187145:
    {
        returnValue = F("Klapperfeldstr.");
        break;
    }
    case 187146:
    {
        returnValue = F("Klapperfloß");
        break;
    }
    case 187147:
    {
        returnValue = F("Klappergarten");
        break;
    }
    case 187148:
    {
        returnValue = F("Klappergasse");
        break;
    }
    case 187149:
    {
        returnValue = F("Klapperhagen");
        break;
    }
    case 187150:
    {
        returnValue = F("Klappermatten");
        break;
    }
    case 187151:
    {
        returnValue = F("Klappermühle");
        break;
    }
    case 187152:
    {
        returnValue = F("Klapperschell");
        break;
    }
    case 187153:
    {
        returnValue = F("Klappershardt");
        break;
    }
    case 187154:
    {
        returnValue = F("Klappersteg");
        break;
    }
    case 187155:
    {
        returnValue = F("Klappersteig");
        break;
    }
    case 187156:
    {
        returnValue = F("Klapperstiege");
        break;
    }
    case 187157:
    {
        returnValue = F("Klapperstr.");
        break;
    }
    case 187158:
    {
        returnValue = F("Klappertorstr.");
        break;
    }
    case 187159:
    {
        returnValue = F("Klapperts Wegelchen");
        break;
    }
    case 187160:
    {
        returnValue = F("Klapperturm");
        break;
    }
    case 187161:
    {
        returnValue = F("Klapperweg");
        break;
    }
    case 187162:
    {
        returnValue = F("Klappfeldstr.");
        break;
    }
    case 187163:
    {
        returnValue = F("Klappgarten");
        break;
    }
    case 187164:
    {
        returnValue = F("Klappgasse");
        break;
    }
    case 187165:
    {
        returnValue = F("Klapphagener Weg");
        break;
    }
    case 187166:
    {
        returnValue = F("Klapphahn");
        break;
    }
    case 187167:
    {
        returnValue = F("Klapphakenstr.");
        break;
    }
    case 187168:
    {
        returnValue = F("Klapphecken");
        break;
    }
    case 187169:
    {
        returnValue = F("Klappheckstr.");
        break;
    }
    case 187170:
    {
        returnValue = F("Klappholzer Weg");
        break;
    }
    case 187171:
    {
        returnValue = F("Klapphörn");
        break;
    }
    case 187172:
    {
        returnValue = F("Klappmeiers Weg");
        break;
    }
    case 187173:
    {
        returnValue = F("Klappmühle");
        break;
    }
    case 187174:
    {
        returnValue = F("Klapprothstr.");
        break;
    }
    case 187175:
    {
        returnValue = F("Klappschau");
        break;
    }
    case 187176:
    {
        returnValue = F("Klappstr.");
        break;
    }
    case 187177:
    {
        returnValue = F("Klappweg");
        break;
    }
    case 187178:
    {
        returnValue = F("Klaprothstr.");
        break;
    }
    case 187179:
    {
        returnValue = F("Klaprothweg");
        break;
    }
    case 187180:
    {
        returnValue = F("Klapweg");
        break;
    }
    case 187181:
    {
        returnValue = F("Klara-Engels-Str.");
        break;
    }
    case 187182:
    {
        returnValue = F("Klara-Fey-Str.");
        break;
    }
    case 187183:
    {
        returnValue = F("Klara-Griefahn-Str.");
        break;
    }
    case 187184:
    {
        returnValue = F("Klara-Löwe-Str.");
        break;
    }
    case 187185:
    {
        returnValue = F("Klara-Marie-Faßbinder-Str.");
        break;
    }
    case 187186:
    {
        returnValue = F("Klara-May-Weg");
        break;
    }
    case 187187:
    {
        returnValue = F("Klara-Mayer-Str.");
        break;
    }
    case 187188:
    {
        returnValue = F("Klara-Nowak-Str.");
        break;
    }
    case 187189:
    {
        returnValue = F("Klara-Reimann-Str.");
        break;
    }
    case 187190:
    {
        returnValue = F("Klara-Schapiro-Anlage");
        break;
    }
    case 187191:
    {
        returnValue = F("Klara-Siebert-Str.");
        break;
    }
    case 187192:
    {
        returnValue = F("Klara-Staiger-Weg");
        break;
    }
    case 187193:
    {
        returnValue = F("Klara-Terglane-Str.");
        break;
    }
    case 187194:
    {
        returnValue = F("Klara-Wieck-Str.");
        break;
    }
    case 187195:
    {
        returnValue = F("Klara-von-Helfenstein-Str.");
        break;
    }
    case 187196:
    {
        returnValue = F("Klarabergschneise");
        break;
    }
    case 187197:
    {
        returnValue = F("Klarabergstr.");
        break;
    }
    case 187198:
    {
        returnValue = F("Klarapfel-Weg");
        break;
    }
    case 187199:
    {
        returnValue = F("Klarapfelweg");
        break;
    }
    case 187200:
    {
        returnValue = F("Klarastr.");
        break;
    }
    case 187201:
    {
        returnValue = F("Klarawaldweg");
        break;
    }
    case 187202:
    {
        returnValue = F("Klaraweg");
        break;
    }
    case 187203:
    {
        returnValue = F("Klardorfer Str.");
        break;
    }
    case 187204:
    {
        returnValue = F("Klare Perle");
        break;
    }
    case 187205:
    {
        returnValue = F("Klarenberg");
        break;
    }
    case 187206:
    {
        returnValue = F("Klarenbergstr.");
        break;
    }
    case 187207:
    {
        returnValue = F("Klarengrundstr.");
        break;
    }
    case 187208:
    {
        returnValue = F("Klarenhofstr.");
        break;
    }
    case 187209:
    {
        returnValue = F("Klarenplatz");
        break;
    }
    case 187210:
    {
        returnValue = F("Klarenstr.");
        break;
    }
    case 187211:
    {
        returnValue = F("Klarenstrecker Damm");
        break;
    }
    case 187212:
    {
        returnValue = F("Klarenthaler Str.");
        break;
    }
    case 187213:
    {
        returnValue = F("Klarenweg");
        break;
    }
    case 187214:
    {
        returnValue = F("Klarer Streck");
        break;
    }
    case 187215:
    {
        returnValue = F("Klarissenstr.");
        break;
    }
    case 187216:
    {
        returnValue = F("Klarissenweg");
        break;
    }
    case 187217:
    {
        returnValue = F("Klarmanns Kamp");
        break;
    }
    case 187218:
    {
        returnValue = F("Klarmannsweg");
        break;
    }
    case 187219:
    {
        returnValue = F("Klarpfuhlweg");
        break;
    }
    case 187220:
    {
        returnValue = F("Klarweg");
        break;
    }
    case 187221:
    {
        returnValue = F("Klarweinstr.");
        break;
    }
    case 187222:
    {
        returnValue = F("Klasbergebeneweg");
        break;
    }
    case 187223:
    {
        returnValue = F("Klasbergstr.");
        break;
    }
    case 187224:
    {
        returnValue = F("Klaschbachweg");
        break;
    }
    case 187225:
    {
        returnValue = F("Klasdorfer Str.");
        break;
    }
    case 187226:
    {
        returnValue = F("Klasend");
        break;
    }
    case 187227:
    {
        returnValue = F("Klasfeld");
        break;
    }
    case 187228:
    {
        returnValue = F("Klashöhe");
        break;
    }
    case 187229:
    {
        returnValue = F("Klasmannstr.");
        break;
    }
    case 187230:
    {
        returnValue = F("Klasmannsweg");
        break;
    }
    case 187231:
    {
        returnValue = F("Klasperweg");
        break;
    }
    case 187232:
    {
        returnValue = F("Klasrot");
        break;
    }
    case 187233:
    {
        returnValue = F("Klassenhartweg");
        break;
    }
    case 187234:
    {
        returnValue = F("Klassikerstr.");
        break;
    }
    case 187235:
    {
        returnValue = F("Klaswipper");
        break;
    }
    case 187236:
    {
        returnValue = F("Klatenbergweg");
        break;
    }
    case 187237:
    {
        returnValue = F("Klatschmohnweg");
        break;
    }
    case 187238:
    {
        returnValue = F("Klattenberg");
        break;
    }
    case 187239:
    {
        returnValue = F("Klattenhofstr.");
        break;
    }
    case 187240:
    {
        returnValue = F("Klatterstr.");
        break;
    }
    case 187241:
    {
        returnValue = F("Klatzow");
        break;
    }
    case 187242:
    {
        returnValue = F("Klauberg");
        break;
    }
    case 187243:
    {
        returnValue = F("Klaubergasse");
        break;
    }
    case 187244:
    {
        returnValue = F("Klauberger Str.");
        break;
    }
    case 187245:
    {
        returnValue = F("Klaubergsgrundweg");
        break;
    }
    case 187246:
    {
        returnValue = F("Klaubuschbrücke");
        break;
    }
    case 187247:
    {
        returnValue = F("Klauchengasse");
        break;
    }
    case 187248:
    {
        returnValue = F("Klauenburg");
        break;
    }
    case 187249:
    {
        returnValue = F("Klauerstr.");
        break;
    }
    case 187250:
    {
        returnValue = F("Klauersweg");
        break;
    }
    case 187251:
    {
        returnValue = F("Klaues");
        break;
    }
    case 187252:
    {
        returnValue = F("Klauflügelweg");
        break;
    }
    case 187253:
    {
        returnValue = F("Klauhörner Str.");
        break;
    }
    case 187254:
    {
        returnValue = F("Klaukenburg");
        break;
    }
    case 187255:
    {
        returnValue = F("Klaukengasse");
        break;
    }
    case 187256:
    {
        returnValue = F("Klaumersbergweg");
        break;
    }
    case 187257:
    {
        returnValue = F("Klaumerslochweg");
        break;
    }
    case 187258:
    {
        returnValue = F("Klaus");
        break;
    }
    case 187259:
    {
        returnValue = F("Klaus-Aepfelbach-Str.");
        break;
    }
    case 187260:
    {
        returnValue = F("Klaus-Ahrens-Str.");
        break;
    }
    case 187261:
    {
        returnValue = F("Klaus-Bergmann-Weg");
        break;
    }
    case 187262:
    {
        returnValue = F("Klaus-Blank-Str.");
        break;
    }
    case 187263:
    {
        returnValue = F("Klaus-Conrad-Str.");
        break;
    }
    case 187264:
    {
        returnValue = F("Klaus-Czernuska-Weg");
        break;
    }
    case 187265:
    {
        returnValue = F("Klaus-Dieter-Kindl-Platz");
        break;
    }
    case 187266:
    {
        returnValue = F("Klaus-Drubba-Weg");
        break;
    }
    case 187267:
    {
        returnValue = F("Klaus-Enders-Str.");
        break;
    }
    case 187268:
    {
        returnValue = F("Klaus-Faber-Str.");
        break;
    }
    case 187269:
    {
        returnValue = F("Klaus-Fischer-Str.");
        break;
    }
    case 187270:
    {
        returnValue = F("Klaus-Fischer-Weg");
        break;
    }
    case 187271:
    {
        returnValue = F("Klaus-Funke-Str.");
        break;
    }
    case 187272:
    {
        returnValue = F("Klaus-Groth-Gasse");
        break;
    }
    case 187273:
    {
        returnValue = F("Klaus-Groth-Platz");
        break;
    }
    case 187274:
    {
        returnValue = F("Klaus-Groth-Promenade");
        break;
    }
    case 187275:
    {
        returnValue = F("Klaus-Groth-Str.");
        break;
    }
    case 187276:
    {
        returnValue = F("Klaus-Groth-Weg");
        break;
    }
    case 187277:
    {
        returnValue = F("Klaus-Groth-Winkel");
        break;
    }
    case 187278:
    {
        returnValue = F("Klaus-Gutsch-Str.");
        break;
    }
    case 187279:
    {
        returnValue = F("Klaus-Gärtner-Ring");
        break;
    }
    case 187280:
    {
        returnValue = F("Klaus-Harms-Allee");
        break;
    }
    case 187281:
    {
        returnValue = F("Klaus-Herrmann-Str.");
        break;
    }
    case 187282:
    {
        returnValue = F("Klaus-Hofstetter-Weg");
        break;
    }
    case 187283:
    {
        returnValue = F("Klaus-Hoppmann-Weg");
        break;
    }
    case 187284:
    {
        returnValue = F("Klaus-Kamper-Weg");
        break;
    }
    case 187285:
    {
        returnValue = F("Klaus-Kordel-Str.");
        break;
    }
    case 187286:
    {
        returnValue = F("Klaus-Kreuzer-Str.");
        break;
    }
    case 187287:
    {
        returnValue = F("Klaus-Lamberti-Weg");
        break;
    }
    case 187288:
    {
        returnValue = F("Klaus-Lohmann-Str.");
        break;
    }
    case 187289:
    {
        returnValue = F("Klaus-Mewes-Str.");
        break;
    }
    case 187290:
    {
        returnValue = F("Klaus-Miesner-Platz");
        break;
    }
    case 187291:
    {
        returnValue = F("Klaus-Peter-Kleiner-Str.");
        break;
    }
    case 187292:
    {
        returnValue = F("Klaus-Rother-Str.");
        break;
    }
    case 187293:
    {
        returnValue = F("Klaus-Rösner-Ring");
        break;
    }
    case 187294:
    {
        returnValue = F("Klaus-Saalfeld-Str.");
        break;
    }
    case 187295:
    {
        returnValue = F("Klaus-Scheufelen-Platz");
        break;
    }
    case 187296:
    {
        returnValue = F("Klaus-Schmid-Str.");
        break;
    }
    case 187297:
    {
        returnValue = F("Klaus-Schäfer-Str.");
        break;
    }
    case 187298:
    {
        returnValue = F("Klaus-Schäfer-Weg");
        break;
    }
    case 187299:
    {
        returnValue = F("Klaus-Spahlinger-Weg");
        break;
    }
    case 187300:
    {
        returnValue = F("Klaus-Stief-Str.");
        break;
    }
    case 187301:
    {
        returnValue = F("Klaus-Strick-Weg");
        break;
    }
    case 187302:
    {
        returnValue = F("Klaus-Störtebeker-Weg");
        break;
    }
    case 187303:
    {
        returnValue = F("Klaus-Stürmer-Str.");
        break;
    }
    case 187304:
    {
        returnValue = F("Klaus-Sulger-Weg");
        break;
    }
    case 187305:
    {
        returnValue = F("Klaus-Tussing-Str.");
        break;
    }
    case 187306:
    {
        returnValue = F("Klaus-Weber-Str.");
        break;
    }
    case 187307:
    {
        returnValue = F("Klaus-Wehrend-Weg");
        break;
    }
    case 187308:
    {
        returnValue = F("Klaus-Wibbolt-Allee");
        break;
    }
    case 187309:
    {
        returnValue = F("Klaus-Wiedemann-Str.");
        break;
    }
    case 187310:
    {
        returnValue = F("Klaus-von-Klitzing-Str.");
        break;
    }
    case 187311:
    {
        returnValue = F("Klausaurach");
        break;
    }
    case 187312:
    {
        returnValue = F("Klausbachweg");
        break;
    }
    case 187313:
    {
        returnValue = F("Klausberg");
        break;
    }
    case 187314:
    {
        returnValue = F("Klausbergstr.");
        break;
    }
    case 187315:
    {
        returnValue = F("Klausbergweg");
        break;
    }
    case 187316:
    {
        returnValue = F("Klausbreite");
        break;
    }
    case 187317:
    {
        returnValue = F("Klausbrook A");
        break;
    }
    case 187318:
    {
        returnValue = F("Klausbrook B");
        break;
    }
    case 187319:
    {
        returnValue = F("Klausbrooker Weg");
        break;
    }
    case 187320:
    {
        returnValue = F("Klausdamm");
        break;
    }
    case 187321:
    {
        returnValue = F("Klausdobelweg");
        break;
    }
    case 187322:
    {
        returnValue = F("Klausdorfer Chaussee");
        break;
    }
    case 187323:
    {
        returnValue = F("Klausdorfer Dorfstr.");
        break;
    }
    case 187324:
    {
        returnValue = F("Klausdorfer Landstr.");
        break;
    }
    case 187325:
    {
        returnValue = F("Klausdorfer Str.");
        break;
    }
    case 187326:
    {
        returnValue = F("Klausdorfer Weg");
        break;
    }
    case 187327:
    {
        returnValue = F("Klause");
        break;
    }
    case 187328:
    {
        returnValue = F("Klausegasse");
        break;
    }
    case 187329:
    {
        returnValue = F("Klausekopf Weg");
        break;
    }
    case 187330:
    {
        returnValue = F("Klauselsäcker");
        break;
    }
    case 187331:
    {
        returnValue = F("Klausen");
        break;
    }
    case 187332:
    {
        returnValue = F("KlausenAllee");
        break;
    }
    case 187333:
    {
        returnValue = F("Klausenberg");
        break;
    }
    case 187334:
    {
        returnValue = F("Klausenbergstr.");
        break;
    }
    case 187335:
    {
        returnValue = F("Klausenbergweg");
        break;
    }
    case 187336:
    {
        returnValue = F("Klausenbrunnenweg");
        break;
    }
    case 187337:
    {
        returnValue = F("Klausenburger Gasse");
        break;
    }
    case 187338:
    {
        returnValue = F("Klausenburger Str.");
        break;
    }
    case 187339:
    {
        returnValue = F("Klausenbühlweg");
        break;
    }
    case 187340:
    {
        returnValue = F("Klausener Pfad");
        break;
    }
    case 187341:
    {
        returnValue = F("Klausener Str.");
        break;
    }
    case 187342:
    {
        returnValue = F("Klausener Weg");
        break;
    }
    case 187343:
    {
        returnValue = F("Klausenergrund");
        break;
    }
    case 187344:
    {
        returnValue = F("Klausenerstr.");
        break;
    }
    case 187345:
    {
        returnValue = F("Klausenertalweg");
        break;
    }
    case 187346:
    {
        returnValue = F("Klausenfahrt");
        break;
    }
    case 187347:
    {
        returnValue = F("Klausenfeld");
        break;
    }
    case 187348:
    {
        returnValue = F("Klausengarten");
        break;
    }
    case 187349:
    {
        returnValue = F("Klausengasse");
        break;
    }
    case 187350:
    {
        returnValue = F("Klausenghau");
        break;
    }
    case 187351:
    {
        returnValue = F("Klausengrund");
        break;
    }
    case 187352:
    {
        returnValue = F("Klausengässle");
        break;
    }
    case 187353:
    {
        returnValue = F("Klausenheck");
        break;
    }
    case 187354:
    {
        returnValue = F("Klausenhof");
        break;
    }
    case 187355:
    {
        returnValue = F("Klausenhofstr.");
        break;
    }
    case 187356:
    {
        returnValue = F("Klausenhofweg");
        break;
    }
    case 187357:
    {
        returnValue = F("Klausenhöhe");
        break;
    }
    case 187358:
    {
        returnValue = F("Klausenmühle");
        break;
    }
    case 187359:
    {
        returnValue = F("Klausenmühleweg");
        break;
    }
    case 187360:
    {
        returnValue = F("Klausenpfad");
        break;
    }
    case 187361:
    {
        returnValue = F("Klausenstr.");
        break;
    }
    case 187362:
    {
        returnValue = F("Klausental");
        break;
    }
    case 187363:
    {
        returnValue = F("Klausentalstr.");
        break;
    }
    case 187364:
    {
        returnValue = F("Klausentalweg");
        break;
    }
    case 187365:
    {
        returnValue = F("Klausenteich");
        break;
    }
    case 187366:
    {
        returnValue = F("Klausenwaldweg");
        break;
    }
    case 187367:
    {
        returnValue = F("Klausenwall");
        break;
    }
    case 187368:
    {
        returnValue = F("Klausenweg");
        break;
    }
    case 187369:
    {
        returnValue = F("Klauser Delle");
        break;
    }
    case 187370:
    {
        returnValue = F("Klauser Feld");
        break;
    }
    case 187371:
    {
        returnValue = F("Klauser Str.");
        break;
    }
    case 187372:
    {
        returnValue = F("Klauserweg");
        break;
    }
    case 187373:
    {
        returnValue = F("Klauserwies");
        break;
    }
    case 187374:
    {
        returnValue = F("Klauseweg");
        break;
    }
    case 187375:
    {
        returnValue = F("Klausfeldweg");
        break;
    }
    case 187376:
    {
        returnValue = F("Klausgasse");
        break;
    }
    case 187377:
    {
        returnValue = F("Klausgraben");
        break;
    }
    case 187378:
    {
        returnValue = F("Klaushagen");
        break;
    }
    case 187379:
    {
        returnValue = F("Klaushagenweg");
        break;
    }
    case 187380:
    {
        returnValue = F("Klaushauslweg");
        break;
    }
    case 187381:
    {
        returnValue = F("Klaushecke");
        break;
    }
    case 187382:
    {
        returnValue = F("Klausheider Str.");
        break;
    }
    case 187383:
    {
        returnValue = F("Klausheider Weg");
        break;
    }
    case 187384:
    {
        returnValue = F("Klaushof");
        break;
    }
    case 187385:
    {
        returnValue = F("Klaushofer Weg");
        break;
    }
    case 187386:
    {
        returnValue = F("Klaushofsweg");
        break;
    }
    case 187387:
    {
        returnValue = F("Klaushorster Weg");
        break;
    }
    case 187388:
    {
        returnValue = F("Klaushäuslweg");
        break;
    }
    case 187389:
    {
        returnValue = F("Klausingstr.");
        break;
    }
    case 187390:
    {
        returnValue = F("Klauskamp");
        break;
    }
    case 187391:
    {
        returnValue = F("Klauskirchstr.");
        break;
    }
    case 187392:
    {
        returnValue = F("Klausmannstr.");
        break;
    }
    case 187393:
    {
        returnValue = F("Klausmarbacher Weg");
        break;
    }
    case 187394:
    {
        returnValue = F("Klausmattenweg");
        break;
    }
    case 187395:
    {
        returnValue = F("Klausmattstr.");
        break;
    }
    case 187396:
    {
        returnValue = F("Klausmoorsweg");
        break;
    }
    case 187397:
    {
        returnValue = F("Klausner-Heinrich-Str.");
        break;
    }
    case 187398:
    {
        returnValue = F("Klausnerstr.");
        break;
    }
    case 187399:
    {
        returnValue = F("Klausnerweg");
        break;
    }
    case 187400:
    {
        returnValue = F("Klausstr.");
        break;
    }
    case 187401:
    {
        returnValue = F("Klausstr. Saurasen");
        break;
    }
    case 187402:
    {
        returnValue = F("Klaustal");
        break;
    }
    case 187403:
    {
        returnValue = F("Klausterhof");
        break;
    }
    case 187404:
    {
        returnValue = F("Klausthal");
        break;
    }
    case 187405:
    {
        returnValue = F("Klaustor");
        break;
    }
    case 187406:
    {
        returnValue = F("Klaustorf");
        break;
    }
    case 187407:
    {
        returnValue = F("Klaustorfer Weg");
        break;
    }
    case 187408:
    {
        returnValue = F("Klaustorpassage");
        break;
    }
    case 187409:
    {
        returnValue = F("Klausweg");
        break;
    }
    case 187410:
    {
        returnValue = F("Klauswiesenweg");
        break;
    }
    case 187411:
    {
        returnValue = F("Klausösch");
        break;
    }
    case 187412:
    {
        returnValue = F("Klautermühle");
        break;
    }
    case 187413:
    {
        returnValue = F("Klauzengarten");
        break;
    }
    case 187414:
    {
        returnValue = F("Klaußner Geräumt");
        break;
    }
    case 187415:
    {
        returnValue = F("Klaußnerweg");
        break;
    }
    case 187416:
    {
        returnValue = F("Klaverhörn");
        break;
    }
    case 187417:
    {
        returnValue = F("Klawitterstr.");
        break;
    }
    case 187418:
    {
        returnValue = F("Klaßweg");
        break;
    }
    case 187419:
    {
        returnValue = F("Kleb");
        break;
    }
    case 187420:
    {
        returnValue = F("Kleba");
        break;
    }
    case 187421:
    {
        returnValue = F("Klebaer Str.");
        break;
    }
    case 187422:
    {
        returnValue = F("Klebeichenbach");
        break;
    }
    case 187423:
    {
        returnValue = F("Klebelstr.");
        break;
    }
    case 187424:
    {
        returnValue = F("Kleben");
        break;
    }
    case 187425:
    {
        returnValue = F("Klebendorfer Str.");
        break;
    }
    case 187426:
    {
        returnValue = F("Klebengasse");
        break;
    }
    case 187427:
    {
        returnValue = F("Klebersbergstr.");
        break;
    }
    case 187428:
    {
        returnValue = F("Kleberschneise");
        break;
    }
    case 187429:
    {
        returnValue = F("Kleberspfad");
        break;
    }
    case 187430:
    {
        returnValue = F("Kleberstr.");
        break;
    }
    case 187431:
    {
        returnValue = F("Kleberweg");
        break;
    }
    case 187432:
    {
        returnValue = F("Klebheimer Str.");
        break;
    }
    case 187433:
    {
        returnValue = F("Klebinger Feld");
        break;
    }
    case 187434:
    {
        returnValue = F("Klebinger Str.");
        break;
    }
    case 187435:
    {
        returnValue = F("Klebitzer Dorfstr.");
        break;
    }
    case 187436:
    {
        returnValue = F("Klebitzer Str.");
        break;
    }
    case 187437:
    {
        returnValue = F("Klebsteg");
        break;
    }
    case 187438:
    {
        returnValue = F("Klebstein");
        break;
    }
    case 187439:
    {
        returnValue = F("Klebsteiner Garten");
        break;
    }
    case 187440:
    {
        returnValue = F("Klebsteiner Weg");
        break;
    }
    case 187441:
    {
        returnValue = F("Klebstr.");
        break;
    }
    case 187442:
    {
        returnValue = F("Klebwaldstr.");
        break;
    }
    case 187443:
    {
        returnValue = F("Klebweg");
        break;
    }
    case 187444:
    {
        returnValue = F("Kleckener Kirchweg");
        break;
    }
    case 187445:
    {
        returnValue = F("Kleckener Str.");
        break;
    }
    case 187446:
    {
        returnValue = F("Klecker Stieg");
        break;
    }
    case 187447:
    {
        returnValue = F("Klecker Weg");
        break;
    }
    case 187448:
    {
        returnValue = F("Kleckersdorfer Weg");
        break;
    }
    case 187449:
    {
        returnValue = F("Kleckerwaldstr.");
        break;
    }
    case 187450:
    {
        returnValue = F("Kleckerwaldweg");
        break;
    }
    case 187451:
    {
        returnValue = F("Klee");
        break;
    }
    case 187452:
    {
        returnValue = F("Kleeacker");
        break;
    }
    case 187453:
    {
        returnValue = F("Kleeackerweg");
        break;
    }
    case 187454:
    {
        returnValue = F("Kleeallee");
        break;
    }
    case 187455:
    {
        returnValue = F("Kleeanger");
        break;
    }
    case 187456:
    {
        returnValue = F("Kleebachstr.");
        break;
    }
    case 187457:
    {
        returnValue = F("Kleebauerweg");
        break;
    }
    case 187458:
    {
        returnValue = F("Kleeberg");
        break;
    }
    case 187459:
    {
        returnValue = F("Kleeberger Str.");
        break;
    }
    case 187460:
    {
        returnValue = F("Kleeberger Weg");
        break;
    }
    case 187461:
    {
        returnValue = F("Kleebergstr.");
        break;
    }
    case 187462:
    {
        returnValue = F("Kleebergweg");
        break;
    }
    case 187463:
    {
        returnValue = F("Kleebitze");
        break;
    }
    case 187464:
    {
        returnValue = F("Kleeblatt");
        break;
    }
    case 187465:
    {
        returnValue = F("Kleeblattstr.");
        break;
    }
    case 187466:
    {
        returnValue = F("Kleebornen");
        break;
    }
    case 187467:
    {
        returnValue = F("Kleebrede");
        break;
    }
    case 187468:
    {
        returnValue = F("Kleebreede");
        break;
    }
    case 187469:
    {
        returnValue = F("Kleebreite");
        break;
    }
    case 187470:
    {
        returnValue = F("Kleebrunnenstr.");
        break;
    }
    case 187471:
    {
        returnValue = F("Kleebsring");
        break;
    }
    case 187472:
    {
        returnValue = F("Kleebsweg");
        break;
    }
    case 187473:
    {
        returnValue = F("Kleebuck");
        break;
    }
    case 187474:
    {
        returnValue = F("Kleebuckweg");
        break;
    }
    case 187475:
    {
        returnValue = F("Kleeburger Str.");
        break;
    }
    case 187476:
    {
        returnValue = F("Kleeburger Weg");
        break;
    }
    case 187477:
    {
        returnValue = F("Kleebusch");
        break;
    }
    case 187478:
    {
        returnValue = F("Kleebühlstr.");
        break;
    }
    case 187479:
    {
        returnValue = F("Kleebühlweg");
        break;
    }
    case 187480:
    {
        returnValue = F("Kleedorfer Str.");
        break;
    }
    case 187481:
    {
        returnValue = F("Kleef");
        break;
    }
    case 187482:
    {
        returnValue = F("Kleefeld");
        break;
    }
    case 187483:
    {
        returnValue = F("Kleefelder Str.");
        break;
    }
    case 187484:
    {
        returnValue = F("Kleefelder Weg");
        break;
    }
    case 187485:
    {
        returnValue = F("Kleefeldplatz");
        break;
    }
    case 187486:
    {
        returnValue = F("Kleefeldstr.");
        break;
    }
    case 187487:
    {
        returnValue = F("Kleefeldweg");
        break;
    }
    case 187488:
    {
        returnValue = F("Kleefenne");
        break;
    }
    case 187489:
    {
        returnValue = F("Kleefleckenstr.");
        break;
    }
    case 187490:
    {
        returnValue = F("Kleefmannsweg");
        break;
    }
    case 187491:
    {
        returnValue = F("Kleegarten");
        break;
    }
    case 187492:
    {
        returnValue = F("Kleegartenstr.");
        break;
    }
    case 187493:
    {
        returnValue = F("Kleegartenweg");
        break;
    }
    case 187494:
    {
        returnValue = F("Kleegasse");
        break;
    }
    case 187495:
    {
        returnValue = F("Kleegrasweg");
        break;
    }
    case 187496:
    {
        returnValue = F("Kleegrund");
        break;
    }
    case 187497:
    {
        returnValue = F("Kleehecken Schneise");
        break;
    }
    case 187498:
    {
        returnValue = F("Kleeheide");
        break;
    }
    case 187499:
    {
        returnValue = F("Kleehof");
        break;
    }
    case 187500:
    {
        returnValue = F("Kleehofstr.");
        break;
    }
    case 187501:
    {
        returnValue = F("Kleehöfe");
        break;
    }
    case 187502:
    {
        returnValue = F("Kleehöfen");
        break;
    }
    case 187503:
    {
        returnValue = F("Kleekamp");
        break;
    }
    case 187504:
    {
        returnValue = F("Kleekampweg");
        break;
    }
    case 187505:
    {
        returnValue = F("Kleekoppel");
        break;
    }
    case 187506:
    {
        returnValue = F("Kleekuhlenweg");
        break;
    }
    case 187507:
    {
        returnValue = F("Kleelein");
        break;
    }
    case 187508:
    {
        returnValue = F("Kleemanngasse");
        break;
    }
    case 187509:
    {
        returnValue = F("Kleemannstr.");
        break;
    }
    case 187510:
    {
        returnValue = F("Kleemannweg");
        break;
    }
    case 187511:
    {
        returnValue = F("Kleemattstr.");
        break;
    }
    case 187512:
    {
        returnValue = F("Kleemeier Ring");
        break;
    }
    case 187513:
    {
        returnValue = F("Kleemeiers Busch");
        break;
    }
    case 187514:
    {
        returnValue = F("Kleemeisterei");
        break;
    }
    case 187515:
    {
        returnValue = F("Kleemeistereistr.");
        break;
    }
    case 187516:
    {
        returnValue = F("Kleemeisterweg");
        break;
    }
    case 187517:
    {
        returnValue = F("Kleemißhaldeweg");
        break;
    }
    case 187518:
    {
        returnValue = F("Kleemißweg");
        break;
    }
    case 187519:
    {
        returnValue = F("Kleemättleweg");
        break;
    }
    case 187520:
    {
        returnValue = F("Kleenbahndamm");
        break;
    }
    case 187521:
    {
        returnValue = F("Kleenerich");
        break;
    }
    case 187522:
    {
        returnValue = F("Kleenweg");
        break;
    }
    case 187523:
    {
        returnValue = F("Kleeort");
        break;
    }
    case 187524:
    {
        returnValue = F("Kleepesch");
        break;
    }
    case 187525:
    {
        returnValue = F("Kleepfädchen");
        break;
    }
    case 187526:
    {
        returnValue = F("Kleeplatten Schneise");
        break;
    }
    case 187527:
    {
        returnValue = F("Kleeplatzstraessschen");
        break;
    }
    case 187528:
    {
        returnValue = F("Kleerainweg");
        break;
    }
    case 187529:
    {
        returnValue = F("Kleering");
        break;
    }
    case 187530:
    {
        returnValue = F("Kleersstr.");
        break;
    }
    case 187531:
    {
        returnValue = F("Kleertsweg");
        break;
    }
    case 187532:
    {
        returnValue = F("Kleesalzstr.");
        break;
    }
    case 187533:
    {
        returnValue = F("Kleesbergstr.");
        break;
    }
    case 187534:
    {
        returnValue = F("Kleesteig");
        break;
    }
    case 187535:
    {
        returnValue = F("Kleestener Weg");
        break;
    }
    case 187536:
    {
        returnValue = F("Kleestieg");
        break;
    }
    case 187537:
    {
        returnValue = F("Kleestr.");
        break;
    }
    case 187538:
    {
        returnValue = F("Kleestädter Str.");
        break;
    }
    case 187539:
    {
        returnValue = F("Kleestück");
        break;
    }
    case 187540:
    {
        returnValue = F("Kleestücken");
        break;
    }
    case 187541:
    {
        returnValue = F("Kleether Dorfstr.");
        break;
    }
    case 187542:
    {
        returnValue = F("Kleether Weg");
        break;
    }
    case 187543:
    {
        returnValue = F("Kleeverblatt");
        break;
    }
    case 187544:
    {
        returnValue = F("Kleeverhof");
        break;
    }
    case 187545:
    {
        returnValue = F("Kleewall");
        break;
    }
    case 187546:
    {
        returnValue = F("Kleewand");
        break;
    }
    case 187547:
    {
        returnValue = F("Kleewasem");
        break;
    }
    case 187548:
    {
        returnValue = F("Kleeweg");
        break;
    }
    case 187549:
    {
        returnValue = F("Kleewies");
        break;
    }
    case 187550:
    {
        returnValue = F("Kleewiese");
        break;
    }
    case 187551:
    {
        returnValue = F("Kleewiesen");
        break;
    }
    case 187552:
    {
        returnValue = F("Kleewiesenstr.");
        break;
    }
    case 187553:
    {
        returnValue = F("Kleewiesenweg");
        break;
    }
    case 187554:
    {
        returnValue = F("Kleewiesenäcker");
        break;
    }
    case 187555:
    {
        returnValue = F("Kleewinkel");
        break;
    }
    case 187556:
    {
        returnValue = F("Kleeßenhof");
        break;
    }
    case 187557:
    {
        returnValue = F("Kleeäcker");
        break;
    }
    case 187558:
    {
        returnValue = F("Kleeäckerstr.");
        break;
    }
    case 187559:
    {
        returnValue = F("Kleeäckerweg");
        break;
    }
    case 187560:
    {
        returnValue = F("Klef");
        break;
    }
    case 187561:
    {
        returnValue = F("Kleffelgasse");
        break;
    }
    case 187562:
    {
        returnValue = F("Klefferstr.");
        break;
    }
    case 187563:
    {
        returnValue = F("Kleffhagen");
        break;
    }
    case 187564:
    {
        returnValue = F("Kleffmannsweg");
        break;
    }
    case 187565:
    {
        returnValue = F("Kleffnerstr.");
        break;
    }
    case 187566:
    {
        returnValue = F("Kleffstr.");
        break;
    }
    case 187567:
    {
        returnValue = F("Kleffweg");
        break;
    }
    case 187568:
    {
        returnValue = F("Klefgarten");
        break;
    }
    case 187569:
    {
        returnValue = F("Klefhaus");
        break;
    }
    case 187570:
    {
        returnValue = F("Klefhauser Str.");
        break;
    }
    case 187571:
    {
        returnValue = F("Klehestr.");
        break;
    }
    case 187572:
    {
        returnValue = F("Klehnweisenschneise");
        break;
    }
    case 187573:
    {
        returnValue = F("Klei");
        break;
    }
    case 187574:
    {
        returnValue = F("Kleiau");
        break;
    }
    case 187575:
    {
        returnValue = F("Kleibeeke");
        break;
    }
    case 187576:
    {
        returnValue = F("Kleiberg");
        break;
    }
    case 187577:
    {
        returnValue = F("Kleibergasse");
        break;
    }
    case 187578:
    {
        returnValue = F("Kleibergkamp");
        break;
    }
    case 187579:
    {
        returnValue = F("Kleibergstr.");
        break;
    }
    case 187580:
    {
        returnValue = F("Kleiberkamp");
        break;
    }
    case 187581:
    {
        returnValue = F("Kleiberring");
        break;
    }
    case 187582:
    {
        returnValue = F("Kleibersteg");
        break;
    }
    case 187583:
    {
        returnValue = F("Kleibersteig");
        break;
    }
    case 187584:
    {
        returnValue = F("Kleiberstieg");
        break;
    }
    case 187585:
    {
        returnValue = F("Kleiberstr.");
        break;
    }
    case 187586:
    {
        returnValue = F("Kleiberweg");
        break;
    }
    case 187587:
    {
        returnValue = F("Kleiberwinkel");
        break;
    }
    case 187588:
    {
        returnValue = F("Kleibreite");
        break;
    }
    case 187589:
    {
        returnValue = F("Kleibrink");
        break;
    }
    case 187590:
    {
        returnValue = F("Kleibrinkstiege");
        break;
    }
    case 187591:
    {
        returnValue = F("Kleibroker Str.");
        break;
    }
    case 187592:
    {
        returnValue = F("Kleibuersweg");
        break;
    }
    case 187593:
    {
        returnValue = F("Kleiburg");
        break;
    }
    case 187594:
    {
        returnValue = F("Kleibäckerstr.");
        break;
    }
    case 187595:
    {
        returnValue = F("Kleibömerstr.");
        break;
    }
    case 187596:
    {
        returnValue = F("Kleidiek");
        break;
    }
    case 187597:
    {
        returnValue = F("Kleidobben");
        break;
    }
    case 187598:
    {
        returnValue = F("Kleidorferstr.");
        break;
    }
    case 187599:
    {
        returnValue = F("Kleiengasse");
        break;
    }
    case 187600:
    {
        returnValue = F("Kleier Weg");
        break;
    }
    case 187601:
    {
        returnValue = F("Kleierde");
        break;
    }
    case 187602:
    {
        returnValue = F("Kleierstr.");
        break;
    }
    case 187603:
    {
        returnValue = F("Kleiesch");
        break;
    }
    case 187604:
    {
        returnValue = F("Kleifeld");
        break;
    }
    case 187605:
    {
        returnValue = F("Kleihauser Weg");
        break;
    }
    case 187606:
    {
        returnValue = F("Kleihook");
        break;
    }
    case 187607:
    {
        returnValue = F("Kleihörn");
        break;
    }
    case 187608:
    {
        returnValue = F("Kleikamp");
        break;
    }
    case 187609:
    {
        returnValue = F("Kleikstr.");
        break;
    }
    case 187610:
    {
        returnValue = F("Kleikuhlenweg");
        break;
    }
    case 187611:
    {
        returnValue = F("Kleimakerstr.");
        break;
    }
    case 187612:
    {
        returnValue = F("Kleimanns Weg");
        break;
    }
    case 187613:
    {
        returnValue = F("Kleimannsruh");
        break;
    }
    case 187614:
    {
        returnValue = F("Kleimannstr.");
        break;
    }
    case 187615:
    {
        returnValue = F("Kleimannweg");
        break;
    }
    case 187616:
    {
        returnValue = F("Klein Allscheidt");
        break;
    }
    case 187617:
    {
        returnValue = F("Klein Amerika");
        break;
    }
    case 187618:
    {
        returnValue = F("Klein Ammensleber Str.");
        break;
    }
    case 187619:
    {
        returnValue = F("Klein Asel");
        break;
    }
    case 187620:
    {
        returnValue = F("Klein Aukens");
        break;
    }
    case 187621:
    {
        returnValue = F("Klein Babel");
        break;
    }
    case 187622:
    {
        returnValue = F("Klein Bademeuseler Str.");
        break;
    }
    case 187623:
    {
        returnValue = F("Klein Bahrenfleth");
        break;
    }
    case 187624:
    {
        returnValue = F("Klein Bahrenhof");
        break;
    }
    case 187625:
    {
        returnValue = F("Klein Barnitz");
        break;
    }
    case 187626:
    {
        returnValue = F("Klein Barnitzer Str.");
        break;
    }
    case 187627:
    {
        returnValue = F("Klein Bartelsdorf");
        break;
    }
    case 187628:
    {
        returnValue = F("Klein Bartelsdorfer Weg");
        break;
    }
    case 187629:
    {
        returnValue = F("Klein Behnkenhagen");
        break;
    }
    case 187630:
    {
        returnValue = F("Klein Below");
        break;
    }
    case 187631:
    {
        returnValue = F("Klein Bentwisch");
        break;
    }
    case 187632:
    {
        returnValue = F("Klein Bergesken");
        break;
    }
    case 187633:
    {
        returnValue = F("Klein Berlin");
        break;
    }
    case 187634:
    {
        returnValue = F("Klein Berßener Str.");
        break;
    }
    case 187635:
    {
        returnValue = F("Klein Bethlehem");
        break;
    }
    case 187636:
    {
        returnValue = F("Klein Biewender Str.");
        break;
    }
    case 187637:
    {
        returnValue = F("Klein Bisdorf");
        break;
    }
    case 187638:
    {
        returnValue = F("Klein Blankenburg");
        break;
    }
    case 187639:
    {
        returnValue = F("Klein Bohrauer Str.");
        break;
    }
    case 187640:
    {
        returnValue = F("Klein Bollensen");
        break;
    }
    case 187641:
    {
        returnValue = F("Klein Bolzumer Weg");
        break;
    }
    case 187642:
    {
        returnValue = F("Klein Brebel");
        break;
    }
    case 187643:
    {
        returnValue = F("Klein Breese");
        break;
    }
    case 187644:
    {
        returnValue = F("Klein Breesen");
        break;
    }
    case 187645:
    {
        returnValue = F("Klein Bremen");
        break;
    }
    case 187646:
    {
        returnValue = F("Klein Briesen");
        break;
    }
    case 187647:
    {
        returnValue = F("Klein Brunsroder Str.");
        break;
    }
    case 187648:
    {
        returnValue = F("Klein Buchholz");
        break;
    }
    case 187649:
    {
        returnValue = F("Klein Buckow");
        break;
    }
    case 187650:
    {
        returnValue = F("Klein Bünstorf");
        break;
    }
    case 187651:
    {
        returnValue = F("Klein Bünstorfer Str.");
        break;
    }
    case 187652:
    {
        returnValue = F("Klein Charlottengroden");
        break;
    }
    case 187653:
    {
        returnValue = F("Klein Daberkow");
        break;
    }
    case 187654:
    {
        returnValue = F("Klein Deepen");
        break;
    }
    case 187655:
    {
        returnValue = F("Klein Denkter Weg");
        break;
    }
    case 187656:
    {
        returnValue = F("Klein Disnacker Weg");
        break;
    }
    case 187657:
    {
        returnValue = F("Klein Dratow");
        break;
    }
    case 187658:
    {
        returnValue = F("Klein Drehler Weg");
        break;
    }
    case 187659:
    {
        returnValue = F("Klein Döbberner Weg");
        break;
    }
    case 187660:
    {
        returnValue = F("Klein Dölln");
        break;
    }
    case 187661:
    {
        returnValue = F("Klein Dörgen");
        break;
    }
    case 187662:
    {
        returnValue = F("Klein Eichen");
        break;
    }
    case 187663:
    {
        returnValue = F("Klein Eichholzer Str.");
        break;
    }
    case 187664:
    {
        returnValue = F("Klein Eilstorf");
        break;
    }
    case 187665:
    {
        returnValue = F("Klein Eissel");
        break;
    }
    case 187666:
    {
        returnValue = F("Klein Ellenberg");
        break;
    }
    case 187667:
    {
        returnValue = F("Klein Ende");
        break;
    }
    case 187668:
    {
        returnValue = F("Klein England");
        break;
    }
    case 187669:
    {
        returnValue = F("Klein Feldchen");
        break;
    }
    case 187670:
    {
        returnValue = F("Klein Feldhus");
        break;
    }
    case 187671:
    {
        returnValue = F("Klein Floyen");
        break;
    }
    case 187672:
    {
        returnValue = F("Klein Frankreich");
        break;
    }
    case 187673:
    {
        returnValue = F("Klein Förste");
        break;
    }
    case 187674:
    {
        returnValue = F("Klein Gaddau");
        break;
    }
    case 187675:
    {
        returnValue = F("Klein Gaglower Str.");
        break;
    }
    case 187676:
    {
        returnValue = F("Klein Garnholt");
        break;
    }
    case 187677:
    {
        returnValue = F("Klein Gartz");
        break;
    }
    case 187678:
    {
        returnValue = F("Klein Gartzer Str.");
        break;
    }
    case 187679:
    {
        returnValue = F("Klein Gebesee");
        break;
    }
    case 187680:
    {
        returnValue = F("Klein Germersleber Str.");
        break;
    }
    case 187681:
    {
        returnValue = F("Klein Gerstedt");
        break;
    }
    case 187682:
    {
        returnValue = F("Klein Gievitz");
        break;
    }
    case 187683:
    {
        returnValue = F("Klein Gievitzer Weg");
        break;
    }
    case 187684:
    {
        returnValue = F("Klein Gischow");
        break;
    }
    case 187685:
    {
        returnValue = F("Klein Glien");
        break;
    }
    case 187686:
    {
        returnValue = F("Klein Gliener Str.");
        break;
    }
    case 187687:
    {
        returnValue = F("Klein Goldberg");
        break;
    }
    case 187688:
    {
        returnValue = F("Klein Grabenstedt");
        break;
    }
    case 187689:
    {
        returnValue = F("Klein Grashaus");
        break;
    }
    case 187690:
    {
        returnValue = F("Klein Grenzer Chaussee");
        break;
    }
    case 187691:
    {
        returnValue = F("Klein Grindau");
        break;
    }
    case 187692:
    {
        returnValue = F("Klein Grönland");
        break;
    }
    case 187693:
    {
        returnValue = F("Klein Hamburg");
        break;
    }
    case 187694:
    {
        returnValue = F("Klein Hammer");
        break;
    }
    case 187695:
    {
        returnValue = F("Klein Hansdorfer Str.");
        break;
    }
    case 187696:
    {
        returnValue = F("Klein Harmburg");
        break;
    }
    case 187697:
    {
        returnValue = F("Klein Haßlower Str.");
        break;
    }
    case 187698:
    {
        returnValue = F("Klein Heidorner Damm");
        break;
    }
    case 187699:
    {
        returnValue = F("Klein Heidorner Str.");
        break;
    }
    case 187700:
    {
        returnValue = F("Klein Heinser Str.");
        break;
    }
    case 187701:
    {
        returnValue = F("Klein Helle");
        break;
    }
    case 187702:
    {
        returnValue = F("Klein Helmsdorfer Weg");
        break;
    }
    case 187703:
    {
        returnValue = F("Klein Hesebeck");
        break;
    }
    case 187704:
    {
        returnValue = F("Klein Hesebecker Str.");
        break;
    }
    case 187705:
    {
        returnValue = F("Klein Hohn");
        break;
    }
    case 187706:
    {
        returnValue = F("Klein Hohndorf");
        break;
    }
    case 187707:
    {
        returnValue = F("Klein Holland");
        break;
    }
    case 187708:
    {
        returnValue = F("Klein Hollenbeck");
        break;
    }
    case 187709:
    {
        returnValue = F("Klein Hollener Str.");
        break;
    }
    case 187710:
    {
        returnValue = F("Klein Hollwedel");
        break;
    }
    case 187711:
    {
        returnValue = F("Klein Holtenser Str.");
        break;
    }
    case 187712:
    {
        returnValue = F("Klein Hove");
        break;
    }
    case 187713:
    {
        returnValue = F("Klein Huchzen");
        break;
    }
    case 187714:
    {
        returnValue = F("Klein Hundorf");
        break;
    }
    case 187715:
    {
        returnValue = F("Klein Husums");
        break;
    }
    case 187716:
    {
        returnValue = F("Klein Hutberger Weg");
        break;
    }
    case 187717:
    {
        returnValue = F("Klein Ippensen");
        break;
    }
    case 187718:
    {
        returnValue = F("Klein Jarchower Str.");
        break;
    }
    case 187719:
    {
        returnValue = F("Klein Kampen");
        break;
    }
    case 187720:
    {
        returnValue = F("Klein Kedingshagen-Wiesenweg");
        break;
    }
    case 187721:
    {
        returnValue = F("Klein Kempen");
        break;
    }
    case 187722:
    {
        returnValue = F("Klein Kienitzer Str.");
        break;
    }
    case 187723:
    {
        returnValue = F("Klein Kiphausen");
        break;
    }
    case 187724:
    {
        returnValue = F("Klein Klinkrade");
        break;
    }
    case 187725:
    {
        returnValue = F("Klein Kordshagen");
        break;
    }
    case 187726:
    {
        returnValue = F("Klein Krankow Ausbau");
        break;
    }
    case 187727:
    {
        returnValue = F("Klein Kreutzer Bergstr.");
        break;
    }
    case 187728:
    {
        returnValue = F("Klein Kreutzer Dorfstr.");
        break;
    }
    case 187729:
    {
        returnValue = F("Klein Kreutzer Eigenheime");
        break;
    }
    case 187730:
    {
        returnValue = F("Klein Kreutzer Havelstr.");
        break;
    }
    case 187731:
    {
        returnValue = F("Klein Kubbelkow-Dorfstr.");
        break;
    }
    case 187732:
    {
        returnValue = F("Klein Köriser Weg");
        break;
    }
    case 187733:
    {
        returnValue = F("Klein Köthel");
        break;
    }
    case 187734:
    {
        returnValue = F("Klein Labenzer Str.");
        break;
    }
    case 187735:
    {
        returnValue = F("Klein Labert");
        break;
    }
    case 187736:
    {
        returnValue = F("Klein Lafferder Weg");
        break;
    }
    case 187737:
    {
        returnValue = F("Klein Lantow");
        break;
    }
    case 187738:
    {
        returnValue = F("Klein Lauenstede");
        break;
    }
    case 187739:
    {
        returnValue = F("Klein Lehmhagener Dorfstr.");
        break;
    }
    case 187740:
    {
        returnValue = F("Klein Leppiner Str.");
        break;
    }
    case 187741:
    {
        returnValue = F("Klein Lessen");
        break;
    }
    case 187742:
    {
        returnValue = F("Klein Lichtenhäger Weg");
        break;
    }
    case 187743:
    {
        returnValue = F("Klein Liedern");
        break;
    }
    case 187744:
    {
        returnValue = F("Klein Lieskower Str.");
        break;
    }
    case 187745:
    {
        returnValue = F("Klein Lieskower Weg");
        break;
    }
    case 187746:
    {
        returnValue = F("Klein Linde");
        break;
    }
    case 187747:
    {
        returnValue = F("Klein Loitzer Str.");
        break;
    }
    case 187748:
    {
        returnValue = F("Klein Loitzer Weg");
        break;
    }
    case 187749:
    {
        returnValue = F("Klein London");
        break;
    }
    case 187750:
    {
        returnValue = F("Klein Luckower Damm");
        break;
    }
    case 187751:
    {
        returnValue = F("Klein Lunow");
        break;
    }
    case 187752:
    {
        returnValue = F("Klein Margens");
        break;
    }
    case 187753:
    {
        returnValue = F("Klein Medewege");
        break;
    }
    case 187754:
    {
        returnValue = F("Klein Methling");
        break;
    }
    case 187755:
    {
        returnValue = F("Klein Mittelburg");
        break;
    }
    case 187756:
    {
        returnValue = F("Klein Mohrdorf-Dorfstr.");
        break;
    }
    case 187757:
    {
        returnValue = F("Klein Molzahner Weg");
        break;
    }
    case 187758:
    {
        returnValue = F("Klein Muckrow");
        break;
    }
    case 187759:
    {
        returnValue = F("Klein Muckrower Weg");
        break;
    }
    case 187760:
    {
        returnValue = F("Klein Möringer Dorfstr.");
        break;
    }
    case 187761:
    {
        returnValue = F("Klein Mühlen");
        break;
    }
    case 187762:
    {
        returnValue = F("Klein Münchberg");
        break;
    }
    case 187763:
    {
        returnValue = F("Klein Müritz-Müritzer Str.");
        break;
    }
    case 187764:
    {
        returnValue = F("Klein Neuendorfer Str.");
        break;
    }
    case 187765:
    {
        returnValue = F("Klein Neuwerk");
        break;
    }
    case 187766:
    {
        returnValue = F("Klein Neßhausen");
        break;
    }
    case 187767:
    {
        returnValue = F("Klein Nieköhr");
        break;
    }
    case 187768:
    {
        returnValue = F("Klein Niendorfer Str.");
        break;
    }
    case 187769:
    {
        returnValue = F("Klein Niendorfer Weg");
        break;
    }
    case 187770:
    {
        returnValue = F("Klein Nordender Weg");
        break;
    }
    case 187771:
    {
        returnValue = F("Klein Nürnberg");
        break;
    }
    case 187772:
    {
        returnValue = F("Klein Oesau");
        break;
    }
    case 187773:
    {
        returnValue = F("Klein Oesterdieken");
        break;
    }
    case 187774:
    {
        returnValue = F("Klein Ollacker");
        break;
    }
    case 187775:
    {
        returnValue = F("Klein Polzin");
        break;
    }
    case 187776:
    {
        returnValue = F("Klein Pretzier");
        break;
    }
    case 187777:
    {
        returnValue = F("Klein Pönitz");
        break;
    }
    case 187778:
    {
        returnValue = F("Klein Quassow");
        break;
    }
    case 187779:
    {
        returnValue = F("Klein Quenstedter Str.");
        break;
    }
    case 187780:
    {
        returnValue = F("Klein Rakow");
        break;
    }
    case 187781:
    {
        returnValue = F("Klein Reith");
        break;
    }
    case 187782:
    {
        returnValue = F("Klein Rekener Weg");
        break;
    }
    case 187783:
    {
        returnValue = F("Klein Sarau");
        break;
    }
    case 187784:
    {
        returnValue = F("Klein Schauener Str.");
        break;
    }
    case 187785:
    {
        returnValue = F("Klein Schillerslage");
        break;
    }
    case 187786:
    {
        returnValue = F("Klein Schwarfs");
        break;
    }
    case 187787:
    {
        returnValue = F("Klein Schwarzloser Dorfstr.");
        break;
    }
    case 187788:
    {
        returnValue = F("Klein Schwaßer Weg");
        break;
    }
    case 187789:
    {
        returnValue = F("Klein Schwechtener Str.");
        break;
    }
    case 187790:
    {
        returnValue = F("Klein Schweinebrück");
        break;
    }
    case 187791:
    {
        returnValue = F("Klein Schwiesow");
        break;
    }
    case 187792:
    {
        returnValue = F("Klein Schönebecker Str.");
        break;
    }
    case 187793:
    {
        returnValue = F("Klein Sisbecker Str.");
        break;
    }
    case 187794:
    {
        returnValue = F("Klein Sonnendeich");
        break;
    }
    case 187795:
    {
        returnValue = F("Klein Sorgenfrei");
        break;
    }
    case 187796:
    {
        returnValue = F("Klein Sprenzer Tannen");
        break;
    }
    case 187797:
    {
        returnValue = F("Klein Stresow");
        break;
    }
    case 187798:
    {
        returnValue = F("Klein Ströbitzer Siedlung");
        break;
    }
    case 187799:
    {
        returnValue = F("Klein Ströbitzer Str.");
        break;
    }
    case 187800:
    {
        returnValue = F("Klein Sünteler Str.");
        break;
    }
    case 187801:
    {
        returnValue = F("Klein Süstedter Str.");
        break;
    }
    case 187802:
    {
        returnValue = F("Klein Tessin");
        break;
    }
    case 187803:
    {
        returnValue = F("Klein Thondorf");
        break;
    }
    case 187804:
    {
        returnValue = F("Klein Tietzow");
        break;
    }
    case 187805:
    {
        returnValue = F("Klein Trebeler Str.");
        break;
    }
    case 187806:
    {
        returnValue = F("Klein Triglitz");
        break;
    }
    case 187807:
    {
        returnValue = F("Klein Utlande");
        break;
    }
    case 187808:
    {
        returnValue = F("Klein Vahlberger Str.");
        break;
    }
    case 187809:
    {
        returnValue = F("Klein Varlingen");
        break;
    }
    case 187810:
    {
        returnValue = F("Klein Venedig");
        break;
    }
    case 187811:
    {
        returnValue = F("Klein Viegeln Hufe");
        break;
    }
    case 187812:
    {
        returnValue = F("Klein Villip");
        break;
    }
    case 187813:
    {
        returnValue = F("Klein Vlotho");
        break;
    }
    case 187814:
    {
        returnValue = F("Klein Vollbütteler Weg");
        break;
    }
    case 187815:
    {
        returnValue = F("Klein Wangersen");
        break;
    }
    case 187816:
    {
        returnValue = F("Klein Warfen");
        break;
    }
    case 187817:
    {
        returnValue = F("Klein Wehnendorf");
        break;
    }
    case 187818:
    {
        returnValue = F("Klein Weidehohl");
        break;
    }
    case 187819:
    {
        returnValue = F("Klein Welle");
        break;
    }
    case 187820:
    {
        returnValue = F("Klein Westerbeck");
        break;
    }
    case 187821:
    {
        returnValue = F("Klein Wichtens");
        break;
    }
    case 187822:
    {
        returnValue = F("Klein Wieblitz");
        break;
    }
    case 187823:
    {
        returnValue = F("Klein Winsen");
        break;
    }
    case 187824:
    {
        returnValue = F("Klein Wisch");
        break;
    }
    case 187825:
    {
        returnValue = F("Klein Wischenweg");
        break;
    }
    case 187826:
    {
        returnValue = F("Klein Witzeetze");
        break;
    }
    case 187827:
    {
        returnValue = F("Klein Wokerner Weg");
        break;
    }
    case 187828:
    {
        returnValue = F("Klein Wolder Weg");
        break;
    }
    case 187829:
    {
        returnValue = F("Klein Woltersdorfer Damm");
        break;
    }
    case 187830:
    {
        returnValue = F("Klein Woltersdorfer Str.");
        break;
    }
    case 187831:
    {
        returnValue = F("Klein Woltersdorfer Weg");
        break;
    }
    case 187832:
    {
        returnValue = F("Klein Wüstenfelde");
        break;
    }
    case 187833:
    {
        returnValue = F("Klein Zelgli");
        break;
    }
    case 187834:
    {
        returnValue = F("Klein Zetel");
        break;
    }
    case 187835:
    {
        returnValue = F("Klein Ziescht");
        break;
    }
    case 187836:
    {
        returnValue = F("Klein Zissenhausen");
        break;
    }
    case 187837:
    {
        returnValue = F("Klein-Altendorf");
        break;
    }
    case 187838:
    {
        returnValue = F("Klein-Asien");
        break;
    }
    case 187839:
    {
        returnValue = F("Klein-Au-Str.");
        break;
    }
    case 187840:
    {
        returnValue = F("Klein-Becker-Str.");
        break;
    }
    case 187841:
    {
        returnValue = F("Klein-Berliner-Ring");
        break;
    }
    case 187842:
    {
        returnValue = F("Klein-Bettna-Weg");
        break;
    }
    case 187843:
    {
        returnValue = F("Klein-Bieberauer Weg");
        break;
    }
    case 187844:
    {
        returnValue = F("Klein-Boren");
        break;
    }
    case 187845:
    {
        returnValue = F("Klein-Breitenbach");
        break;
    }
    case 187846:
    {
        returnValue = F("Klein-Breitenbacher Pfad");
        break;
    }
    case 187847:
    {
        returnValue = F("Klein-Bremsburg");
        break;
    }
    case 187848:
    {
        returnValue = F("Klein-Bünstorfer Str.");
        break;
    }
    case 187849:
    {
        returnValue = F("Klein-Düngener-Str.");
        break;
    }
    case 187850:
    {
        returnValue = F("Klein-Eiche");
        break;
    }
    case 187851:
    {
        returnValue = F("Klein-Eichen");
        break;
    }
    case 187852:
    {
        returnValue = F("Klein-Eichener Str.");
        break;
    }
    case 187853:
    {
        returnValue = F("Klein-Eichener Weg");
        break;
    }
    case 187854:
    {
        returnValue = F("Klein-Erkenschwicker-Str.");
        break;
    }
    case 187855:
    {
        returnValue = F("Klein-Feldaer Str.");
        break;
    }
    case 187856:
    {
        returnValue = F("Klein-Gerauer Weg");
        break;
    }
    case 187857:
    {
        returnValue = F("Klein-Gerauer-Str.");
        break;
    }
    case 187858:
    {
        returnValue = F("Klein-Görnitzer Weg");
        break;
    }
    case 187859:
    {
        returnValue = F("Klein-Harler-Str.");
        break;
    }
    case 187860:
    {
        returnValue = F("Klein-Heipertz");
        break;
    }
    case 187861:
    {
        returnValue = F("Klein-Heßling-Str.");
        break;
    }
    case 187862:
    {
        returnValue = F("Klein-Himstedter-Str.");
        break;
    }
    case 187863:
    {
        returnValue = F("Klein-Häuser-Str.");
        break;
    }
    case 187864:
    {
        returnValue = F("Klein-Ippener-Str.");
        break;
    }
    case 187865:
    {
        returnValue = F("Klein-Juchhöh");
        break;
    }
    case 187866:
    {
        returnValue = F("Klein-Karbener-Str.");
        break;
    }
    case 187867:
    {
        returnValue = F("Klein-Kautzsch");
        break;
    }
    case 187868:
    {
        returnValue = F("Klein-Kleba");
        break;
    }
    case 187869:
    {
        returnValue = F("Klein-Köln");
        break;
    }
    case 187870:
    {
        returnValue = F("Klein-Laudenbach");
        break;
    }
    case 187871:
    {
        returnValue = F("Klein-Leifringhausen");
        break;
    }
    case 187872:
    {
        returnValue = F("Klein-Loh");
        break;
    }
    case 187873:
    {
        returnValue = F("Klein-Markow");
        break;
    }
    case 187874:
    {
        returnValue = F("Klein-Moorstricher-Str.");
        break;
    }
    case 187875:
    {
        returnValue = F("Klein-Neuwolde");
        break;
    }
    case 187876:
    {
        returnValue = F("Klein-Nordender-Weg");
        break;
    }
    case 187877:
    {
        returnValue = F("Klein-Oesinger Str.");
        break;
    }
    case 187878:
    {
        returnValue = F("Klein-Ollheim");
        break;
    }
    case 187879:
    {
        returnValue = F("Klein-Ostiemer-Weg");
        break;
    }
    case 187880:
    {
        returnValue = F("Klein-Remelser-Str.");
        break;
    }
    case 187881:
    {
        returnValue = F("Klein-Remelser-Weg");
        break;
    }
    case 187882:
    {
        returnValue = F("Klein-Rietzer-Weg");
        break;
    }
    case 187883:
    {
        returnValue = F("Klein-Rohrheimer Weg");
        break;
    }
    case 187884:
    {
        returnValue = F("Klein-Sabiner-Str.");
        break;
    }
    case 187885:
    {
        returnValue = F("Klein-Salvator-Str.");
        break;
    }
    case 187886:
    {
        returnValue = F("Klein-Schönhagen");
        break;
    }
    case 187887:
    {
        returnValue = F("Klein-Sehnder-Weg");
        break;
    }
    case 187888:
    {
        returnValue = F("Klein-Siedlung");
        break;
    }
    case 187889:
    {
        returnValue = F("Klein-Süstedter Str.");
        break;
    }
    case 187890:
    {
        returnValue = F("Klein-Thiem");
        break;
    }
    case 187891:
    {
        returnValue = F("Klein-Tjücher Grashaus");
        break;
    }
    case 187892:
    {
        returnValue = F("Klein-Treben");
        break;
    }
    case 187893:
    {
        returnValue = F("Klein-Umstädter-Str.");
        break;
    }
    case 187894:
    {
        returnValue = F("Klein-Umstädter-Weg");
        break;
    }
    case 187895:
    {
        returnValue = F("Klein-Vielener-Str.");
        break;
    }
    case 187896:
    {
        returnValue = F("Klein-Welzheimer Str.");
        break;
    }
    case 187897:
    {
        returnValue = F("Klein-Welzheimer-Str.");
        break;
    }
    case 187898:
    {
        returnValue = F("Klein-Wieseder-Meerweg");
        break;
    }
    case 187899:
    {
        returnValue = F("Klein-Wiesedermeerer-Weg");
        break;
    }
    case 187900:
    {
        returnValue = F("Klein-Winternheimer-Platz");
        break;
    }
    case 187901:
    {
        returnValue = F("Klein-Wohlerst");
        break;
    }
    case 187902:
    {
        returnValue = F("Klein-Ziethener Weg");
        break;
    }
    case 187903:
    {
        returnValue = F("Klein-Zimmerner Str.");
        break;
    }
    case 187904:
    {
        returnValue = F("Klein-von-Diepold-Str.");
        break;
    }
    case 187905:
    {
        returnValue = F("Klein-Öschle");
        break;
    }
    case 187906:
    {
        returnValue = F("Kleina");
        break;
    }
    case 187907:
    {
        returnValue = F("Kleinaigner Str.");
        break;
    }
    case 187908:
    {
        returnValue = F("Kleinalbershof");
        break;
    }
    case 187909:
    {
        returnValue = F("Kleinallmendweg");
        break;
    }
    case 187910:
    {
        returnValue = F("Kleinalslebener Str.");
        break;
    }
    case 187911:
    {
        returnValue = F("Kleinanlage");
        break;
    }
    case 187912:
    {
        returnValue = F("Kleinanlage mit Brunnen");
        break;
    }
    case 187913:
    {
        returnValue = F("Kleinansbacher Str.");
        break;
    }
    case 187914:
    {
        returnValue = F("Kleinaspacher Str.");
        break;
    }
    case 187915:
    {
        returnValue = F("Kleinaustr.");
        break;
    }
    case 187916:
    {
        returnValue = F("Kleinauweg");
        break;
    }
    case 187917:
    {
        returnValue = F("Kleinbach");
        break;
    }
    case 187918:
    {
        returnValue = F("Kleinbachstr.");
        break;
    }
    case 187919:
    {
        returnValue = F("Kleinbahn");
        break;
    }
    case 187920:
    {
        returnValue = F("Kleinbahn Osterode - Kreiensen");
        break;
    }
    case 187921:
    {
        returnValue = F("Kleinbahndamm");
        break;
    }
    case 187922:
    {
        returnValue = F("Kleinbahnhof");
        break;
    }
    case 187923:
    {
        returnValue = F("Kleinbahnring");
        break;
    }
    case 187924:
    {
        returnValue = F("Kleinbahnstr.");
        break;
    }
    case 187925:
    {
        returnValue = F("Kleinbahnweg");
        break;
    }
    case 187926:
    {
        returnValue = F("Kleinbahren");
        break;
    }
    case 187927:
    {
        returnValue = F("Kleinbardauer Hauptstr.");
        break;
    }
    case 187928:
    {
        returnValue = F("Kleinbardauer Kirchstr.");
        break;
    }
    case 187929:
    {
        returnValue = F("Kleinbardauer Str.");
        break;
    }
    case 187930:
    {
        returnValue = F("Kleinbardorfer Str.");
        break;
    }
    case 187931:
    {
        returnValue = F("Kleinbardorfer Str. ");
        break;
    }
    case 187932:
    {
        returnValue = F("Kleinbarnim");
        break;
    }
    case 187933:
    {
        returnValue = F("Kleinbartloffer Str.");
        break;
    }
    case 187934:
    {
        returnValue = F("Kleinbautzener Str.");
        break;
    }
    case 187935:
    {
        returnValue = F("Kleinbeckstr.");
        break;
    }
    case 187936:
    {
        returnValue = F("Kleinbendchen");
        break;
    }
    case 187937:
    {
        returnValue = F("Kleinberg");
        break;
    }
    case 187938:
    {
        returnValue = F("Kleinbergerhof");
        break;
    }
    case 187939:
    {
        returnValue = F("Kleinberghausen");
        break;
    }
    case 187940:
    {
        returnValue = F("Kleinberghauser Str.");
        break;
    }
    case 187941:
    {
        returnValue = F("Kleinberglohe");
        break;
    }
    case 187942:
    {
        returnValue = F("Kleinbergsbäumchen");
        break;
    }
    case 187943:
    {
        returnValue = F("Kleinbergstr.");
        break;
    }
    case 187944:
    {
        returnValue = F("Kleinbernsdorfer Str.");
        break;
    }
    case 187945:
    {
        returnValue = F("Kleinbettenrain");
        break;
    }
    case 187946:
    {
        returnValue = F("Kleinbettlinger Str.");
        break;
    }
    case 187947:
    {
        returnValue = F("Kleinbeuchaer Weg");
        break;
    }
    case 187948:
    {
        returnValue = F("Kleinbeurer Weg");
        break;
    }
    case 187949:
    {
        returnValue = F("Kleinbeuthener Dorfstr.");
        break;
    }
    case 187950:
    {
        returnValue = F("Kleinbirkach");
        break;
    }
    case 187951:
    {
        returnValue = F("Kleinbirkacher Str.");
        break;
    }
    case 187952:
    {
        returnValue = F("Kleinbliersbacher Weg");
        break;
    }
    case 187953:
    {
        returnValue = F("Kleinbocka");
        break;
    }
    case 187954:
    {
        returnValue = F("Kleinbockaer Str.");
        break;
    }
    case 187955:
    {
        returnValue = F("Kleinbodunger Str.");
        break;
    }
    case 187956:
    {
        returnValue = F("Kleinborthener Str.");
        break;
    }
    case 187957:
    {
        returnValue = F("Kleinbothen");
        break;
    }
    case 187958:
    {
        returnValue = F("Kleinbothener Str.");
        break;
    }
    case 187959:
    {
        returnValue = F("Kleinbottwarer Hof");
        break;
    }
    case 187960:
    {
        returnValue = F("Kleinbottwarer Str.");
        break;
    }
    case 187961:
    {
        returnValue = F("Kleinbouslar");
        break;
    }
    case 187962:
    {
        returnValue = F("Kleinbracher Str.");
        break;
    }
    case 187963:
    {
        returnValue = F("Kleinbrembacher Str.");
        break;
    }
    case 187964:
    {
        returnValue = F("Kleinbremen");
        break;
    }
    case 187965:
    {
        returnValue = F("Kleinbrucher Str.");
        break;
    }
    case 187966:
    {
        returnValue = F("Kleinbruchstr.");
        break;
    }
    case 187967:
    {
        returnValue = F("Kleinbrückenstr.");
        break;
    }
    case 187968:
    {
        returnValue = F("Kleinbrückentorplatz");
        break;
    }
    case 187969:
    {
        returnValue = F("Kleinbuchfeld");
        break;
    }
    case 187970:
    {
        returnValue = F("Kleinbuchwald");
        break;
    }
    case 187971:
    {
        returnValue = F("Kleinbuchweg");
        break;
    }
    case 187972:
    {
        returnValue = F("Kleinbuckow");
        break;
    }
    case 187973:
    {
        returnValue = F("Kleinburg");
        break;
    }
    case 187974:
    {
        returnValue = F("Kleinburgerwaldweg");
        break;
    }
    case 187975:
    {
        returnValue = F("Kleinburgforder Str.");
        break;
    }
    case 187976:
    {
        returnValue = F("Kleinburgwedeler Str.");
        break;
    }
    case 187977:
    {
        returnValue = F("Kleinburgwedeler Weg");
        break;
    }
    case 187978:
    {
        returnValue = F("Kleinbüchel");
        break;
    }
    case 187979:
    {
        returnValue = F("Kleinbüchlberg");
        break;
    }
    case 187980:
    {
        returnValue = F("Kleinbühlweg");
        break;
    }
    case 187981:
    {
        returnValue = F("Kleinbüllesheimer Str.");
        break;
    }
    case 187982:
    {
        returnValue = F("Kleincarsdorfer Weg");
        break;
    }
    case 187983:
    {
        returnValue = F("Kleinchursdorfer Str.");
        break;
    }
    case 187984:
    {
        returnValue = F("Kleincomburger Weg");
        break;
    }
    case 187985:
    {
        returnValue = F("Kleindalziger Str.");
        break;
    }
    case 187986:
    {
        returnValue = F("Kleindamm");
        break;
    }
    case 187987:
    {
        returnValue = F("Kleindehsaer Str.");
        break;
    }
    case 187988:
    {
        returnValue = F("Kleindeinbacher Str.");
        break;
    }
    case 187989:
    {
        returnValue = F("Kleinderschauer Str.");
        break;
    }
    case 187990:
    {
        returnValue = F("Kleindienstweg");
        break;
    }
    case 187991:
    {
        returnValue = F("Kleindittmannsdorfer Steig");
        break;
    }
    case 187992:
    {
        returnValue = F("Kleindittmannsdorfer Str.");
        break;
    }
    case 187993:
    {
        returnValue = F("Kleindorf");
        break;
    }
    case 187994:
    {
        returnValue = F("Kleindorfer Kirchweg");
        break;
    }
    case 187995:
    {
        returnValue = F("Kleindorfer Str.");
        break;
    }
    case 187996:
    {
        returnValue = F("Kleindorfhainer Str.");
        break;
    }
    case 187997:
    {
        returnValue = F("Kleindorskamp");
        break;
    }
    case 187998:
    {
        returnValue = F("Kleindraxdorf");
        break;
    }
    case 187999:
    {
        returnValue = F("Kleindrebnitzer Str.");
        break;
    }
    case 188000:
    {
        returnValue = F("Kleindunsum");
        break;
    }
    case 188001:
    {
        returnValue = F("Kleindöbra");
        break;
    }
    case 188002:
    {
        returnValue = F("Kleine Achterstr.");
        break;
    }
    case 188003:
    {
        returnValue = F("Kleine Albanusstr.");
        break;
    }
    case 188004:
    {
        returnValue = F("Kleine Allee");
        break;
    }
    case 188005:
    {
        returnValue = F("Kleine Alleestr.");
        break;
    }
    case 188006:
    {
        returnValue = F("Kleine Almengasse");
        break;
    }
    case 188007:
    {
        returnValue = F("Kleine Amthofstr.");
        break;
    }
    case 188008:
    {
        returnValue = F("Kleine Amtsgasse");
        break;
    }
    case 188009:
    {
        returnValue = F("Kleine Amtstr.");
        break;
    }
    case 188010:
    {
        returnValue = F("Kleine Angelhäuser Str.");
        break;
    }
    case 188011:
    {
        returnValue = F("Kleine Angerstr.");
        break;
    }
    case 188012:
    {
        returnValue = F("Kleine Anspelstr.");
        break;
    }
    case 188013:
    {
        returnValue = F("Kleine Arbeit");
        break;
    }
    case 188014:
    {
        returnValue = F("Kleine Arche");
        break;
    }
    case 188015:
    {
        returnValue = F("Kleine Archivstr.");
        break;
    }
    case 188016:
    {
        returnValue = F("Kleine Astbrücke");
        break;
    }
    case 188017:
    {
        returnValue = F("Kleine Au");
        break;
    }
    case 188018:
    {
        returnValue = F("Kleine Aue");
        break;
    }
    case 188019:
    {
        returnValue = F("Kleine Augasse");
        break;
    }
    case 188020:
    {
        returnValue = F("Kleine Austr.");
        break;
    }
    case 188021:
    {
        returnValue = F("Kleine Bachstr.");
        break;
    }
    case 188022:
    {
        returnValue = F("Kleine Backhausstr.");
        break;
    }
    case 188023:
    {
        returnValue = F("Kleine Badergasse");
        break;
    }
    case 188024:
    {
        returnValue = F("Kleine Bahnhofstr.");
        break;
    }
    case 188025:
    {
        returnValue = F("Kleine Barr");
        break;
    }
    case 188026:
    {
        returnValue = F("Kleine Baschützer Str.");
        break;
    }
    case 188027:
    {
        returnValue = F("Kleine Bauerngasse");
        break;
    }
    case 188028:
    {
        returnValue = F("Kleine Baustr.");
        break;
    }
    case 188029:
    {
        returnValue = F("Kleine Bebelstr.");
        break;
    }
    case 188030:
    {
        returnValue = F("Kleine Beerbergstr.");
        break;
    }
    case 188031:
    {
        returnValue = F("Kleine Beguinenstr.");
        break;
    }
    case 188032:
    {
        returnValue = F("Kleine Belower Furt");
        break;
    }
    case 188033:
    {
        returnValue = F("Kleine Belzgasse");
        break;
    }
    case 188034:
    {
        returnValue = F("Kleine Bergstr.");
        break;
    }
    case 188035:
    {
        returnValue = F("Kleine Berliner Str.");
        break;
    }
    case 188036:
    {
        returnValue = F("Kleine Biergasse");
        break;
    }
    case 188037:
    {
        returnValue = F("Kleine Binde");
        break;
    }
    case 188038:
    {
        returnValue = F("Kleine Bitz");
        break;
    }
    case 188039:
    {
        returnValue = F("Kleine Blankenburger Str.");
        break;
    }
    case 188040:
    {
        returnValue = F("Kleine Bleiche");
        break;
    }
    case 188041:
    {
        returnValue = F("Kleine Bleichstr.");
        break;
    }
    case 188042:
    {
        returnValue = F("Kleine Bogenstr.");
        break;
    }
    case 188043:
    {
        returnValue = F("Kleine Borngasse");
        break;
    }
    case 188044:
    {
        returnValue = F("Kleine Bornrainstr.");
        break;
    }
    case 188045:
    {
        returnValue = F("Kleine Brandhorst");
        break;
    }
    case 188046:
    {
        returnValue = F("Kleine Brandstr.");
        break;
    }
    case 188047:
    {
        returnValue = F("Kleine Braugasse");
        break;
    }
    case 188048:
    {
        returnValue = F("Kleine Brede");
        break;
    }
    case 188049:
    {
        returnValue = F("Kleine Bree");
        break;
    }
    case 188050:
    {
        returnValue = F("Kleine Breite");
        break;
    }
    case 188051:
    {
        returnValue = F("Kleine Bremke");
        break;
    }
    case 188052:
    {
        returnValue = F("Kleine Brinkstr.");
        break;
    }
    case 188053:
    {
        returnValue = F("Kleine Broke");
        break;
    }
    case 188054:
    {
        returnValue = F("Kleine Bruchstr.");
        break;
    }
    case 188055:
    {
        returnValue = F("Kleine Brunnengasse");
        break;
    }
    case 188056:
    {
        returnValue = F("Kleine Brunnenstr.");
        break;
    }
    case 188057:
    {
        returnValue = F("Kleine Brunsburg");
        break;
    }
    case 188058:
    {
        returnValue = F("Kleine Brücke");
        break;
    }
    case 188059:
    {
        returnValue = F("Kleine Brückenstr.");
        break;
    }
    case 188060:
    {
        returnValue = F("Kleine Brückstr.");
        break;
    }
    case 188061:
    {
        returnValue = F("Kleine Brüdergasse");
        break;
    }
    case 188062:
    {
        returnValue = F("Kleine Brüderstr.");
        break;
    }
    case 188063:
    {
        returnValue = F("Kleine Buderusstr.");
        break;
    }
    case 188064:
    {
        returnValue = F("Kleine Bult");
        break;
    }
    case 188065:
    {
        returnValue = F("Kleine Burggasse");
        break;
    }
    case 188066:
    {
        returnValue = F("Kleine Burgstr.");
        break;
    }
    case 188067:
    {
        returnValue = F("Kleine Bäckerstr.");
        break;
    }
    case 188068:
    {
        returnValue = F("Kleine Böhlstr.");
        break;
    }
    case 188069:
    {
        returnValue = F("Kleine Bünte");
        break;
    }
    case 188070:
    {
        returnValue = F("Kleine Calauer Str.");
        break;
    }
    case 188071:
    {
        returnValue = F("Kleine Camsdorfer Str.");
        break;
    }
    case 188072:
    {
        returnValue = F("Kleine Chaussee");
        break;
    }
    case 188073:
    {
        returnValue = F("Kleine Dammgasse");
        break;
    }
    case 188074:
    {
        returnValue = F("Kleine Dammstr.");
        break;
    }
    case 188075:
    {
        returnValue = F("Kleine Danneddelstr.");
        break;
    }
    case 188076:
    {
        returnValue = F("Kleine Deichstr.");
        break;
    }
    case 188077:
    {
        returnValue = F("Kleine Delle");
        break;
    }
    case 188078:
    {
        returnValue = F("Kleine Dellenstr.");
        break;
    }
    case 188079:
    {
        returnValue = F("Kleine Dollenstr.");
        break;
    }
    case 188080:
    {
        returnValue = F("Kleine Dombrede");
        break;
    }
    case 188081:
    {
        returnValue = F("Kleine Dorfstr.");
        break;
    }
    case 188082:
    {
        returnValue = F("Kleine Dornbachstr.");
        break;
    }
    case 188083:
    {
        returnValue = F("Kleine Drehnitzstr.");
        break;
    }
    case 188084:
    {
        returnValue = F("Kleine Dörnen");
        break;
    }
    case 188085:
    {
        returnValue = F("Kleine Dürerstr.");
        break;
    }
    case 188086:
    {
        returnValue = F("Kleine Ebelage");
        break;
    }
    case 188087:
    {
        returnValue = F("Kleine Eck");
        break;
    }
    case 188088:
    {
        returnValue = F("Kleine Ecke");
        break;
    }
    case 188089:
    {
        returnValue = F("Kleine Egge");
        break;
    }
    case 188090:
    {
        returnValue = F("Kleine Eiche");
        break;
    }
    case 188091:
    {
        returnValue = F("Kleine Eichen");
        break;
    }
    case 188092:
    {
        returnValue = F("Kleine Eichenstr.");
        break;
    }
    case 188093:
    {
        returnValue = F("Kleine Elbstr.");
        break;
    }
    case 188094:
    {
        returnValue = F("Kleine Ellernstr.");
        break;
    }
    case 188095:
    {
        returnValue = F("Kleine Emscherstr.");
        break;
    }
    case 188096:
    {
        returnValue = F("Kleine Emser Str.");
        break;
    }
    case 188097:
    {
        returnValue = F("Kleine Enge");
        break;
    }
    case 188098:
    {
        returnValue = F("Kleine Enggasse");
        break;
    }
    case 188099:
    {
        returnValue = F("Kleine Erbsengasse");
        break;
    }
    case 188100:
    {
        returnValue = F("Kleine Erleninsel");
        break;
    }
    case 188101:
    {
        returnValue = F("Kleine Esch");
        break;
    }
    case 188102:
    {
        returnValue = F("Kleine Eulenpfütz");
        break;
    }
    case 188103:
    {
        returnValue = F("Kleine Exe");
        break;
    }
    case 188104:
    {
        returnValue = F("Kleine Eßmerstr.");
        break;
    }
    case 188105:
    {
        returnValue = F("Kleine Fahnenstr.");
        break;
    }
    case 188106:
    {
        returnValue = F("Kleine Falltorhohl");
        break;
    }
    case 188107:
    {
        returnValue = F("Kleine Feld");
        break;
    }
    case 188108:
    {
        returnValue = F("Kleine Feldstr.");
        break;
    }
    case 188109:
    {
        returnValue = F("Kleine Findorffstr.");
        break;
    }
    case 188110:
    {
        returnValue = F("Kleine Finsterwalder Str.");
        break;
    }
    case 188111:
    {
        returnValue = F("Kleine Fischergasse");
        break;
    }
    case 188112:
    {
        returnValue = F("Kleine Fischerstr.");
        break;
    }
    case 188113:
    {
        returnValue = F("Kleine Flage");
        break;
    }
    case 188114:
    {
        returnValue = F("Kleine Flurstr.");
        break;
    }
    case 188115:
    {
        returnValue = F("Kleine Flösserstr.");
        break;
    }
    case 188116:
    {
        returnValue = F("Kleine Frankenstr.");
        break;
    }
    case 188117:
    {
        returnValue = F("Kleine Frankfurter Str.");
        break;
    }
    case 188118:
    {
        returnValue = F("Kleine Frehn");
        break;
    }
    case 188119:
    {
        returnValue = F("Kleine Freiheit");
        break;
    }
    case 188120:
    {
        returnValue = F("Kleine Friedensstr.");
        break;
    }
    case 188121:
    {
        returnValue = F("Kleine Friedrichstr.");
        break;
    }
    case 188122:
    {
        returnValue = F("Kleine Fuhren");
        break;
    }
    case 188123:
    {
        returnValue = F("Kleine Fuhrstr.");
        break;
    }
    case 188124:
    {
        returnValue = F("Kleine Gabelstr.");
        break;
    }
    case 188125:
    {
        returnValue = F("Kleine Gailergasse");
        break;
    }
    case 188126:
    {
        returnValue = F("Kleine Gartenstr.");
        break;
    }
    case 188127:
    {
        returnValue = F("Kleine Gasse");
        break;
    }
    case 188128:
    {
        returnValue = F("Kleine Gaste");
        break;
    }
    case 188129:
    {
        returnValue = F("Kleine Gebind");
        break;
    }
    case 188130:
    {
        returnValue = F("Kleine Geest");
        break;
    }
    case 188131:
    {
        returnValue = F("Kleine Gehrener Str.");
        break;
    }
    case 188132:
    {
        returnValue = F("Kleine Geldstr.");
        break;
    }
    case 188133:
    {
        returnValue = F("Kleine Gemeinde");
        break;
    }
    case 188134:
    {
        returnValue = F("Kleine Gert");
        break;
    }
    case 188135:
    {
        returnValue = F("Kleine Gewerbestr.");
        break;
    }
    case 188136:
    {
        returnValue = F("Kleine Gleviner Mauer");
        break;
    }
    case 188137:
    {
        returnValue = F("Kleine Gohrer Str.");
        break;
    }
    case 188138:
    {
        returnValue = F("Kleine Gothaer Str.");
        break;
    }
    case 188139:
    {
        returnValue = F("Kleine Grabengasse");
        break;
    }
    case 188140:
    {
        returnValue = F("Kleine Grabenstr.");
        break;
    }
    case 188141:
    {
        returnValue = F("Kleine Gradschank");
        break;
    }
    case 188142:
    {
        returnValue = F("Kleine Graue");
        break;
    }
    case 188143:
    {
        returnValue = F("Kleine Greifengasse");
        break;
    }
    case 188144:
    {
        returnValue = F("Kleine Grenzallee");
        break;
    }
    case 188145:
    {
        returnValue = F("Kleine Grete");
        break;
    }
    case 188146:
    {
        returnValue = F("Kleine Grund");
        break;
    }
    case 188147:
    {
        returnValue = F("Kleine Grundstr.");
        break;
    }
    case 188148:
    {
        returnValue = F("Kleine Grünanlage");
        break;
    }
    case 188149:
    {
        returnValue = F("Kleine Grüne Gasse");
        break;
    }
    case 188150:
    {
        returnValue = F("Kleine Grüne Str.");
        break;
    }
    case 188151:
    {
        returnValue = F("Kleine Gänseweide");
        break;
    }
    case 188152:
    {
        returnValue = F("Kleine Gärten");
        break;
    }
    case 188153:
    {
        returnValue = F("Kleine Gärtnerstr.");
        break;
    }
    case 188154:
    {
        returnValue = F("Kleine Görte");
        break;
    }
    case 188155:
    {
        returnValue = F("Kleine Götzenstr.");
        break;
    }
    case 188156:
    {
        returnValue = F("Kleine Haar");
        break;
    }
    case 188157:
    {
        returnValue = F("Kleine Hafenstr.");
        break;
    }
    case 188158:
    {
        returnValue = F("Kleine Haffstr.");
        break;
    }
    case 188159:
    {
        returnValue = F("Kleine Hagenstr.");
        break;
    }
    case 188160:
    {
        returnValue = F("Kleine Haingasse");
        break;
    }
    case 188161:
    {
        returnValue = F("Kleine Hainstr.");
        break;
    }
    case 188162:
    {
        returnValue = F("Kleine Halbe");
        break;
    }
    case 188163:
    {
        returnValue = F("Kleine Halde");
        break;
    }
    case 188164:
    {
        returnValue = F("Kleine Hardewiek");
        break;
    }
    case 188165:
    {
        returnValue = F("Kleine Hardtweg");
        break;
    }
    case 188166:
    {
        returnValue = F("Kleine Harkenbreite");
        break;
    }
    case 188167:
    {
        returnValue = F("Kleine Hasengasse");
        break;
    }
    case 188168:
    {
        returnValue = F("Kleine Hauptstr.");
        break;
    }
    case 188169:
    {
        returnValue = F("Kleine Hauwe");
        break;
    }
    case 188170:
    {
        returnValue = F("Kleine Hecke");
        break;
    }
    case 188171:
    {
        returnValue = F("Kleine Heeg");
        break;
    }
    case 188172:
    {
        returnValue = F("Kleine Heide");
        break;
    }
    case 188173:
    {
        returnValue = F("Kleine Heidestr.");
        break;
    }
    case 188174:
    {
        returnValue = F("Kleine Helle");
        break;
    }
    case 188175:
    {
        returnValue = F("Kleine Herrbornstr.");
        break;
    }
    case 188176:
    {
        returnValue = F("Kleine Herrgärten");
        break;
    }
    case 188177:
    {
        returnValue = F("Kleine Himmelsgasse");
        break;
    }
    case 188178:
    {
        returnValue = F("Kleine Hindenburgstr.");
        break;
    }
    case 188179:
    {
        returnValue = F("Kleine Hintergasse");
        break;
    }
    case 188180:
    {
        returnValue = F("Kleine Hinterlohne");
        break;
    }
    case 188181:
    {
        returnValue = F("Kleine Hinterstr.");
        break;
    }
    case 188182:
    {
        returnValue = F("Kleine Hochstr.");
        break;
    }
    case 188183:
    {
        returnValue = F("Kleine Hohe Str.");
        break;
    }
    case 188184:
    {
        returnValue = F("Kleine Hohl");
        break;
    }
    case 188185:
    {
        returnValue = F("Kleine Hohle");
        break;
    }
    case 188186:
    {
        returnValue = F("Kleine Hohle Gasse");
        break;
    }
    case 188187:
    {
        returnValue = F("Kleine Horionstr.");
        break;
    }
    case 188188:
    {
        returnValue = F("Kleine Horst");
        break;
    }
    case 188189:
    {
        returnValue = F("Kleine Hospitalstr.");
        break;
    }
    case 188190:
    {
        returnValue = F("Kleine Hub");
        break;
    }
    case 188191:
    {
        returnValue = F("Kleine Hufe");
        break;
    }
    case 188192:
    {
        returnValue = F("Kleine Hufen");
        break;
    }
    case 188193:
    {
        returnValue = F("Kleine Hundschneise");
        break;
    }
    case 188194:
    {
        returnValue = F("Kleine Häg");
        break;
    }
    case 188195:
    {
        returnValue = F("Kleine Häuschenstr.");
        break;
    }
    case 188196:
    {
        returnValue = F("Kleine Häuserreihe");
        break;
    }
    case 188197:
    {
        returnValue = F("Kleine Höhe");
        break;
    }
    case 188198:
    {
        returnValue = F("Kleine Höhle");
        break;
    }
    case 188199:
    {
        returnValue = F("Kleine Hörn");
        break;
    }
    case 188200:
    {
        returnValue = F("Kleine Hörne");
        break;
    }
    case 188201:
    {
        returnValue = F("Kleine Hörnlestr.");
        break;
    }
    case 188202:
    {
        returnValue = F("Kleine Hülengasse");
        break;
    }
    case 188203:
    {
        returnValue = F("Kleine Industriestr.");
        break;
    }
    case 188204:
    {
        returnValue = F("Kleine Inselstr.");
        break;
    }
    case 188205:
    {
        returnValue = F("Kleine Jahnstr.");
        break;
    }
    case 188206:
    {
        returnValue = F("Kleine Johannisgasse");
        break;
    }
    case 188207:
    {
        returnValue = F("Kleine Judengasse");
        break;
    }
    case 188208:
    {
        returnValue = F("Kleine Jüch");
        break;
    }
    case 188209:
    {
        returnValue = F("Kleine Jütte");
        break;
    }
    case 188210:
    {
        returnValue = F("Kleine Kaakbreite");
        break;
    }
    case 188211:
    {
        returnValue = F("Kleine Kamp");
        break;
    }
    case 188212:
    {
        returnValue = F("Kleine Kamper Str.");
        break;
    }
    case 188213:
    {
        returnValue = F("Kleine Kampstr.");
        break;
    }
    case 188214:
    {
        returnValue = F("Kleine Kapellenstr.");
        break;
    }
    case 188215:
    {
        returnValue = F("Kleine Kappel");
        break;
    }
    case 188216:
    {
        returnValue = F("Kleine Kartengasse");
        break;
    }
    case 188217:
    {
        returnValue = F("Kleine Kasematten");
        break;
    }
    case 188218:
    {
        returnValue = F("Kleine Kaut");
        break;
    }
    case 188219:
    {
        returnValue = F("Kleine Keh");
        break;
    }
    case 188220:
    {
        returnValue = F("Kleine Kehre");
        break;
    }
    case 188221:
    {
        returnValue = F("Kleine Kemnadenstr.");
        break;
    }
    case 188222:
    {
        returnValue = F("Kleine Kesselstr.");
        break;
    }
    case 188223:
    {
        returnValue = F("Kleine Kettenstr.");
        break;
    }
    case 188224:
    {
        returnValue = F("Kleine Kirche");
        break;
    }
    case 188225:
    {
        returnValue = F("Kleine Kirchenstr.");
        break;
    }
    case 188226:
    {
        returnValue = F("Kleine Kirchgasse");
        break;
    }
    case 188227:
    {
        returnValue = F("Kleine Kirchreihe");
        break;
    }
    case 188228:
    {
        returnValue = F("Kleine Kirchstaffel");
        break;
    }
    case 188229:
    {
        returnValue = F("Kleine Kirchstr.");
        break;
    }
    case 188230:
    {
        returnValue = F("Kleine Kirchstr. -neu-");
        break;
    }
    case 188231:
    {
        returnValue = F("Kleine Kirschallee");
        break;
    }
    case 188232:
    {
        returnValue = F("Kleine Klausgasse");
        break;
    }
    case 188233:
    {
        returnValue = F("Kleine Kleppergasse");
        break;
    }
    case 188234:
    {
        returnValue = F("Kleine Klingergasse");
        break;
    }
    case 188235:
    {
        returnValue = F("Kleine Klostergasse");
        break;
    }
    case 188236:
    {
        returnValue = F("Kleine Knickhäger Str.");
        break;
    }
    case 188237:
    {
        returnValue = F("Kleine Knopheide");
        break;
    }
    case 188238:
    {
        returnValue = F("Kleine Knotenstr.");
        break;
    }
    case 188239:
    {
        returnValue = F("Kleine Kolberger Str.");
        break;
    }
    case 188240:
    {
        returnValue = F("Kleine Kolonie");
        break;
    }
    case 188241:
    {
        returnValue = F("Kleine Koppel");
        break;
    }
    case 188242:
    {
        returnValue = F("Kleine Kreisgasse");
        break;
    }
    case 188243:
    {
        returnValue = F("Kleine Kremper Str.");
        break;
    }
    case 188244:
    {
        returnValue = F("Kleine Kreuzstr.");
        break;
    }
    case 188245:
    {
        returnValue = F("Kleine Krodostr.");
        break;
    }
    case 188246:
    {
        returnValue = F("Kleine Kuhtrift");
        break;
    }
    case 188247:
    {
        returnValue = F("Kleine Kuhweide");
        break;
    }
    case 188248:
    {
        returnValue = F("Kleine Kulle");
        break;
    }
    case 188249:
    {
        returnValue = F("Kleine Kulmkestr.");
        break;
    }
    case 188250:
    {
        returnValue = F("Kleine Kumm");
        break;
    }
    case 188251:
    {
        returnValue = F("Kleine Kämpe");
        break;
    }
    case 188252:
    {
        returnValue = F("Kleine Käsperstr.");
        break;
    }
    case 188253:
    {
        returnValue = F("Kleine Köhlergasse");
        break;
    }
    case 188254:
    {
        returnValue = F("Kleine Kölnstr.");
        break;
    }
    case 188255:
    {
        returnValue = F("Kleine Königstr.");
        break;
    }
    case 188256:
    {
        returnValue = F("Kleine Kötnerstr.");
        break;
    }
    case 188257:
    {
        returnValue = F("Kleine Kütiner Str.");
        break;
    }
    case 188258:
    {
        returnValue = F("Kleine Laake");
        break;
    }
    case 188259:
    {
        returnValue = F("Kleine Lache");
        break;
    }
    case 188260:
    {
        returnValue = F("Kleine Landwehr");
        break;
    }
    case 188261:
    {
        returnValue = F("Kleine Lange Hecke");
        break;
    }
    case 188262:
    {
        returnValue = F("Kleine Lehmke");
        break;
    }
    case 188263:
    {
        returnValue = F("Kleine Lehmkuhle");
        break;
    }
    case 188264:
    {
        returnValue = F("Kleine Lehne");
        break;
    }
    case 188265:
    {
        returnValue = F("Kleine Leichnamstr.");
        break;
    }
    case 188266:
    {
        returnValue = F("Kleine Leutzestr.");
        break;
    }
    case 188267:
    {
        returnValue = F("Kleine Lichse");
        break;
    }
    case 188268:
    {
        returnValue = F("Kleine Liendlage");
        break;
    }
    case 188269:
    {
        returnValue = F("Kleine Lieth");
        break;
    }
    case 188270:
    {
        returnValue = F("Kleine Liethstr.");
        break;
    }
    case 188271:
    {
        returnValue = F("Kleine Linde");
        break;
    }
    case 188272:
    {
        returnValue = F("Kleine Lindenallee");
        break;
    }
    case 188273:
    {
        returnValue = F("Kleine Lindenbreite");
        break;
    }
    case 188274:
    {
        returnValue = F("Kleine Lindenstr.");
        break;
    }
    case 188275:
    {
        returnValue = F("Kleine Linie");
        break;
    }
    case 188276:
    {
        returnValue = F("Kleine Loge");
        break;
    }
    case 188277:
    {
        returnValue = F("Kleine Loh");
        break;
    }
    case 188278:
    {
        returnValue = F("Kleine Lohchaussee");
        break;
    }
    case 188279:
    {
        returnValue = F("Kleine Lohe");
        break;
    }
    case 188280:
    {
        returnValue = F("Kleine Lohne");
        break;
    }
    case 188281:
    {
        returnValue = F("Kleine Ludwigstr.");
        break;
    }
    case 188282:
    {
        returnValue = F("Kleine Löbergasse");
        break;
    }
    case 188283:
    {
        returnValue = F("Kleine Löbingsgasse");
        break;
    }
    case 188284:
    {
        returnValue = F("Kleine Lönsstr.");
        break;
    }
    case 188285:
    {
        returnValue = F("Kleine Lücke");
        break;
    }
    case 188286:
    {
        returnValue = F("Kleine Maate");
        break;
    }
    case 188287:
    {
        returnValue = F("Kleine Mainau");
        break;
    }
    case 188288:
    {
        returnValue = F("Kleine Maingasse");
        break;
    }
    case 188289:
    {
        returnValue = F("Kleine Marktgasse");
        break;
    }
    case 188290:
    {
        returnValue = F("Kleine Marktstr.");
        break;
    }
    case 188291:
    {
        returnValue = F("Kleine Marlittstr.");
        break;
    }
    case 188292:
    {
        returnValue = F("Kleine Marsch");
        break;
    }
    case 188293:
    {
        returnValue = F("Kleine Marschstr.");
        break;
    }
    case 188294:
    {
        returnValue = F("Kleine Martinistr.");
        break;
    }
    case 188295:
    {
        returnValue = F("Kleine Maräne");
        break;
    }
    case 188296:
    {
        returnValue = F("Kleine Masch");
        break;
    }
    case 188297:
    {
        returnValue = F("Kleine Mauerstr.");
        break;
    }
    case 188298:
    {
        returnValue = F("Kleine Messergasse");
        break;
    }
    case 188299:
    {
        returnValue = F("Kleine Metzgergasse");
        break;
    }
    case 188300:
    {
        returnValue = F("Kleine Milower Str.");
        break;
    }
    case 188301:
    {
        returnValue = F("Kleine Minke");
        break;
    }
    case 188302:
    {
        returnValue = F("Kleine Mittelstr.");
        break;
    }
    case 188303:
    {
        returnValue = F("Kleine Moorstr.");
        break;
    }
    case 188304:
    {
        returnValue = F("Kleine Märkische Str.");
        break;
    }
    case 188305:
    {
        returnValue = F("Kleine Mörken");
        break;
    }
    case 188306:
    {
        returnValue = F("Kleine Mühe");
        break;
    }
    case 188307:
    {
        returnValue = F("Kleine Mühle");
        break;
    }
    case 188308:
    {
        returnValue = F("Kleine Mühlenstr.");
        break;
    }
    case 188309:
    {
        returnValue = F("Kleine Mühlenwallstr.");
        break;
    }
    case 188310:
    {
        returnValue = F("Kleine Mühlgasse");
        break;
    }
    case 188311:
    {
        returnValue = F("Kleine Mühllach");
        break;
    }
    case 188312:
    {
        returnValue = F("Kleine Mühlstr.");
        break;
    }
    case 188313:
    {
        returnValue = F("Kleine Müllroser Str.");
        break;
    }
    case 188314:
    {
        returnValue = F("Kleine Münzenstr.");
        break;
    }
    case 188315:
    {
        returnValue = F("Kleine Müritzstr.");
        break;
    }
    case 188316:
    {
        returnValue = F("Kleine Napoleonsbrücke");
        break;
    }
    case 188317:
    {
        returnValue = F("Kleine Naumburg");
        break;
    }
    case 188318:
    {
        returnValue = F("Kleine Neue Gasse");
        break;
    }
    case 188319:
    {
        returnValue = F("Kleine Neugasse");
        break;
    }
    case 188320:
    {
        returnValue = F("Kleine Neustadt");
        break;
    }
    case 188321:
    {
        returnValue = F("Kleine Neustr.");
        break;
    }
    case 188322:
    {
        returnValue = F("Kleine Niederstr.");
        break;
    }
    case 188323:
    {
        returnValue = F("Kleine Nisterstr.");
        break;
    }
    case 188324:
    {
        returnValue = F("Kleine Nonnengasse");
        break;
    }
    case 188325:
    {
        returnValue = F("Kleine Noog");
        break;
    }
    case 188326:
    {
        returnValue = F("Kleine Obergasse");
        break;
    }
    case 188327:
    {
        returnValue = F("Kleine Oelsaer Str.");
        break;
    }
    case 188328:
    {
        returnValue = F("Kleine Ohe");
        break;
    }
    case 188329:
    {
        returnValue = F("Kleine Oker");
        break;
    }
    case 188330:
    {
        returnValue = F("Kleine Oppenheimer Str.");
        break;
    }
    case 188331:
    {
        returnValue = F("Kleine Ortenberggasse");
        break;
    }
    case 188332:
    {
        returnValue = F("Kleine Ostergasse");
        break;
    }
    case 188333:
    {
        returnValue = F("Kleine Osthofe");
        break;
    }
    case 188334:
    {
        returnValue = F("Kleine Ostlandstr.");
        break;
    }
    case 188335:
    {
        returnValue = F("Kleine Oststr.");
        break;
    }
    case 188336:
    {
        returnValue = F("Kleine Otzdorfer Str.");
        break;
    }
    case 188337:
    {
        returnValue = F("Kleine Paarstr.");
        break;
    }
    case 188338:
    {
        returnValue = F("Kleine Paaschburg");
        break;
    }
    case 188339:
    {
        returnValue = F("Kleine Pagenbergstr.");
        break;
    }
    case 188340:
    {
        returnValue = F("Kleine Parkanlage an Gedenkstätte");
        break;
    }
    case 188341:
    {
        returnValue = F("Kleine Parkstr.");
        break;
    }
    case 188342:
    {
        returnValue = F("Kleine Parower Str.");
        break;
    }
    case 188343:
    {
        returnValue = F("Kleine Pastiner Str.");
        break;
    }
    case 188344:
    {
        returnValue = F("Kleine Penzlinger Str.");
        break;
    }
    case 188345:
    {
        returnValue = F("Kleine Pfaffengasse");
        break;
    }
    case 188346:
    {
        returnValue = F("Kleine Pfarrgasse");
        break;
    }
    case 188347:
    {
        returnValue = F("Kleine Pfarrstr.");
        break;
    }
    case 188348:
    {
        returnValue = F("Kleine Pfinzbrücke");
        break;
    }
    case 188349:
    {
        returnValue = F("Kleine Pflugfelder Brücke");
        break;
    }
    case 188350:
    {
        returnValue = F("Kleine Planstr.");
        break;
    }
    case 188351:
    {
        returnValue = F("Kleine Poststr.");
        break;
    }
    case 188352:
    {
        returnValue = F("Kleine Poststrasse");
        break;
    }
    case 188353:
    {
        returnValue = F("Kleine Potsdamer Str.");
        break;
    }
    case 188354:
    {
        returnValue = F("Kleine Predigergasse");
        break;
    }
    case 188355:
    {
        returnValue = F("Kleine Predigerstr.");
        break;
    }
    case 188356:
    {
        returnValue = F("Kleine Promenade");
        break;
    }
    case 188357:
    {
        returnValue = F("Kleine Quellen Promenade");
        break;
    }
    case 188358:
    {
        returnValue = F("Kleine Quergasse");
        break;
    }
    case 188359:
    {
        returnValue = F("Kleine Querstr.");
        break;
    }
    case 188360:
    {
        returnValue = F("Kleine Rammtorstr.");
        break;
    }
    case 188361:
    {
        returnValue = F("Kleine Rathausgasse");
        break;
    }
    case 188362:
    {
        returnValue = F("Kleine Rathstr.");
        break;
    }
    case 188363:
    {
        returnValue = F("Kleine Ratje");
        break;
    }
    case 188364:
    {
        returnValue = F("Kleine Raubkammer");
        break;
    }
    case 188365:
    {
        returnValue = F("Kleine Raumbach");
        break;
    }
    case 188366:
    {
        returnValue = F("Kleine Redder");
        break;
    }
    case 188367:
    {
        returnValue = F("Kleine Rehre");
        break;
    }
    case 188368:
    {
        returnValue = F("Kleine Reidelstr.");
        break;
    }
    case 188369:
    {
        returnValue = F("Kleine Reihe");
        break;
    }
    case 188370:
    {
        returnValue = F("Kleine Reinhardsbrunner Str.");
        break;
    }
    case 188371:
    {
        returnValue = F("Kleine Rembrandtstr.");
        break;
    }
    case 188372:
    {
        returnValue = F("Kleine Reuterstr.");
        break;
    }
    case 188373:
    {
        returnValue = F("Kleine Rheingasse");
        break;
    }
    case 188374:
    {
        returnValue = F("Kleine Rheinstr.");
        break;
    }
    case 188375:
    {
        returnValue = F("Kleine Richtstatt");
        break;
    }
    case 188376:
    {
        returnValue = F("Kleine Riede");
        break;
    }
    case 188377:
    {
        returnValue = F("Kleine Rieder");
        break;
    }
    case 188378:
    {
        returnValue = F("Kleine Riege");
        break;
    }
    case 188379:
    {
        returnValue = F("Kleine Rietzschke");
        break;
    }
    case 188380:
    {
        returnValue = F("Kleine Ringstr.");
        break;
    }
    case 188381:
    {
        returnValue = F("Kleine Ritterstr.");
        break;
    }
    case 188382:
    {
        returnValue = F("Kleine Rohrgasse");
        break;
    }
    case 188383:
    {
        returnValue = F("Kleine Rosenau");
        break;
    }
    case 188384:
    {
        returnValue = F("Kleine Rosengasse");
        break;
    }
    case 188385:
    {
        returnValue = F("Kleine Rosenstr.");
        break;
    }
    case 188386:
    {
        returnValue = F("Kleine Rosmarinstr.");
        break;
    }
    case 188387:
    {
        returnValue = F("Kleine Rothemarkstr.");
        break;
    }
    case 188388:
    {
        returnValue = F("Kleine Roßbergstr.");
        break;
    }
    case 188389:
    {
        returnValue = F("Kleine Runde");
        break;
    }
    case 188390:
    {
        returnValue = F("Kleine Rurstr.");
        break;
    }
    case 188391:
    {
        returnValue = F("Kleine Röde");
        break;
    }
    case 188392:
    {
        returnValue = F("Kleine Rönne");
        break;
    }
    case 188393:
    {
        returnValue = F("Kleine Röte");
        break;
    }
    case 188394:
    {
        returnValue = F("Kleine Sackstr.");
        break;
    }
    case 188395:
    {
        returnValue = F("Kleine Salinenstr.");
        break;
    }
    case 188396:
    {
        returnValue = F("Kleine Salzgasse");
        break;
    }
    case 188397:
    {
        returnValue = F("Kleine Salzstr.");
        break;
    }
    case 188398:
    {
        returnValue = F("Kleine Sandkuhle");
        break;
    }
    case 188399:
    {
        returnValue = F("Kleine Sandstr.");
        break;
    }
    case 188400:
    {
        returnValue = F("Kleine Sankt-Ilsen-Str.");
        break;
    }
    case 188401:
    {
        returnValue = F("Kleine Sauerlück");
        break;
    }
    case 188402:
    {
        returnValue = F("Kleine Schacksdorfer Str.");
        break;
    }
    case 188403:
    {
        returnValue = F("Kleine Schaftrift");
        break;
    }
    case 188404:
    {
        returnValue = F("Kleine Schanze");
        break;
    }
    case 188405:
    {
        returnValue = F("Kleine Schenkstr.");
        break;
    }
    case 188406:
    {
        returnValue = F("Kleine Schillerstr.");
        break;
    }
    case 188407:
    {
        returnValue = F("Kleine Schleglergasse");
        break;
    }
    case 188408:
    {
        returnValue = F("Kleine Schlinge");
        break;
    }
    case 188409:
    {
        returnValue = F("Kleine Schloßbergstr.");
        break;
    }
    case 188410:
    {
        returnValue = F("Kleine Schloßstr.");
        break;
    }
    case 188411:
    {
        returnValue = F("Kleine Schlüsselstr.");
        break;
    }
    case 188412:
    {
        returnValue = F("Kleine Schmalt");
        break;
    }
    case 188413:
    {
        returnValue = F("Kleine Schmidtgasse");
        break;
    }
    case 188414:
    {
        returnValue = F("Kleine Schmiedsgasse");
        break;
    }
    case 188415:
    {
        returnValue = F("Kleine Schmützstr.");
        break;
    }
    case 188416:
    {
        returnValue = F("Kleine Schneise");
        break;
    }
    case 188417:
    {
        returnValue = F("Kleine Schulgasse");
        break;
    }
    case 188418:
    {
        returnValue = F("Kleine Schulstr.");
        break;
    }
    case 188419:
    {
        returnValue = F("Kleine Schweiber");
        break;
    }
    case 188420:
    {
        returnValue = F("Kleine Schweiz");
        break;
    }
    case 188421:
    {
        returnValue = F("Kleine Schönbuschallee");
        break;
    }
    case 188422:
    {
        returnValue = F("Kleine Schützenstr.");
        break;
    }
    case 188423:
    {
        returnValue = F("Kleine Seebergstr.");
        break;
    }
    case 188424:
    {
        returnValue = F("Kleine Seelen");
        break;
    }
    case 188425:
    {
        returnValue = F("Kleine Seestr.");
        break;
    }
    case 188426:
    {
        returnValue = F("Kleine Sehma");
        break;
    }
    case 188427:
    {
        returnValue = F("Kleine Seidenberger Str.");
        break;
    }
    case 188428:
    {
        returnValue = F("Kleine Seifen");
        break;
    }
    case 188429:
    {
        returnValue = F("Kleine Seigen");
        break;
    }
    case 188430:
    {
        returnValue = F("Kleine Seilerbahn");
        break;
    }
    case 188431:
    {
        returnValue = F("Kleine Seite");
        break;
    }
    case 188432:
    {
        returnValue = F("Kleine Seite Niederdorf");
        break;
    }
    case 188433:
    {
        returnValue = F("Kleine Senke");
        break;
    }
    case 188434:
    {
        returnValue = F("Kleine Sichel");
        break;
    }
    case 188435:
    {
        returnValue = F("Kleine Siedlerstr.");
        break;
    }
    case 188436:
    {
        returnValue = F("Kleine Siedlung");
        break;
    }
    case 188437:
    {
        returnValue = F("Kleine Silberbachstr.");
        break;
    }
    case 188438:
    {
        returnValue = F("Kleine Solmser Str.");
        break;
    }
    case 188439:
    {
        returnValue = F("Kleine Sommerleite");
        break;
    }
    case 188440:
    {
        returnValue = F("Kleine Sophienstr.");
        break;
    }
    case 188441:
    {
        returnValue = F("Kleine Stadtstiege");
        break;
    }
    case 188442:
    {
        returnValue = F("Kleine Stavenstr.");
        break;
    }
    case 188443:
    {
        returnValue = F("Kleine Steege");
        break;
    }
    case 188444:
    {
        returnValue = F("Kleine Stege");
        break;
    }
    case 188445:
    {
        returnValue = F("Kleine Steig");
        break;
    }
    case 188446:
    {
        returnValue = F("Kleine Steige");
        break;
    }
    case 188447:
    {
        returnValue = F("Kleine Steingasse");
        break;
    }
    case 188448:
    {
        returnValue = F("Kleine Steinstr.");
        break;
    }
    case 188449:
    {
        returnValue = F("Kleine Stephanstr.");
        break;
    }
    case 188450:
    {
        returnValue = F("Kleine Sternstr.");
        break;
    }
    case 188451:
    {
        returnValue = F("Kleine Steuer");
        break;
    }
    case 188452:
    {
        returnValue = F("Kleine Stiege");
        break;
    }
    case 188453:
    {
        returnValue = F("Kleine Str.");
        break;
    }
    case 188454:
    {
        returnValue = F("Kleine Strandallee");
        break;
    }
    case 188455:
    {
        returnValue = F("Kleine Strangstr.");
        break;
    }
    case 188456:
    {
        returnValue = F("Kleine Sämergasse");
        break;
    }
    case 188457:
    {
        returnValue = F("Kleine Söhre");
        break;
    }
    case 188458:
    {
        returnValue = F("Kleine Südstr.");
        break;
    }
    case 188459:
    {
        returnValue = F("Kleine Tabarzer Str.");
        break;
    }
    case 188460:
    {
        returnValue = F("Kleine Talstr.");
        break;
    }
    case 188461:
    {
        returnValue = F("Kleine Tannen");
        break;
    }
    case 188462:
    {
        returnValue = F("Kleine Taunusstr.");
        break;
    }
    case 188463:
    {
        returnValue = F("Kleine Teichgasse");
        break;
    }
    case 188464:
    {
        returnValue = F("Kleine Teichstr.");
        break;
    }
    case 188465:
    {
        returnValue = F("Kleine Teile");
        break;
    }
    case 188466:
    {
        returnValue = F("Kleine Torstr.");
        break;
    }
    case 188467:
    {
        returnValue = F("Kleine Tredde");
        break;
    }
    case 188468:
    {
        returnValue = F("Kleine Trift");
        break;
    }
    case 188469:
    {
        returnValue = F("Kleine Tränkschneise");
        break;
    }
    case 188470:
    {
        returnValue = F("Kleine Tröt");
        break;
    }
    case 188471:
    {
        returnValue = F("Kleine Twete");
        break;
    }
    case 188472:
    {
        returnValue = F("Kleine Twiete");
        break;
    }
    case 188473:
    {
        returnValue = F("Kleine Töpfergasse");
        break;
    }
    case 188474:
    {
        returnValue = F("Kleine Uferbachstr.");
        break;
    }
    case 188475:
    {
        returnValue = F("Kleine Uferstr.");
        break;
    }
    case 188476:
    {
        returnValue = F("Kleine Untergasse");
        break;
    }
    case 188477:
    {
        returnValue = F("Kleine Venedig");
        break;
    }
    case 188478:
    {
        returnValue = F("Kleine Viehstr.");
        break;
    }
    case 188479:
    {
        returnValue = F("Kleine Viehweide");
        break;
    }
    case 188480:
    {
        returnValue = F("Kleine Voßstr.");
        break;
    }
    case 188481:
    {
        returnValue = F("Kleine Waidstr.");
        break;
    }
    case 188482:
    {
        returnValue = F("Kleine Waldemarstr.");
        break;
    }
    case 188483:
    {
        returnValue = F("Kleine Waldstr.");
        break;
    }
    case 188484:
    {
        returnValue = F("Kleine Wallstr.");
        break;
    }
    case 188485:
    {
        returnValue = F("Kleine Wann");
        break;
    }
    case 188486:
    {
        returnValue = F("Kleine Wanne");
        break;
    }
    case 188487:
    {
        returnValue = F("Kleine Wasserbreite");
        break;
    }
    case 188488:
    {
        returnValue = F("Kleine Wassergasse");
        break;
    }
    case 188489:
    {
        returnValue = F("Kleine Wasserpfortstr.");
        break;
    }
    case 188490:
    {
        returnValue = F("Kleine Wasserstr.");
        break;
    }
    case 188491:
    {
        returnValue = F("Kleine Webergasse");
        break;
    }
    case 188492:
    {
        returnValue = F("Kleine Weberstr.");
        break;
    }
    case 188493:
    {
        returnValue = F("Kleine Weglein");
        break;
    }
    case 188494:
    {
        returnValue = F("Kleine Wehe");
        break;
    }
    case 188495:
    {
        returnValue = F("Kleine Weide");
        break;
    }
    case 188496:
    {
        returnValue = F("Kleine Weidengasse");
        break;
    }
    case 188497:
    {
        returnValue = F("Kleine Weihergärten");
        break;
    }
    case 188498:
    {
        returnValue = F("Kleine Weinbergstr.");
        break;
    }
    case 188499:
    {
        returnValue = F("Kleine Weingasse");
        break;
    }
    case 188500:
    {
        returnValue = F("Kleine Weinmeisterstr.");
        break;
    }
    case 188501:
    {
        returnValue = F("Kleine Welle");
        break;
    }
    case 188502:
    {
        returnValue = F("Kleine Wende");
        break;
    }
    case 188503:
    {
        returnValue = F("Kleine Werderstr.");
        break;
    }
    case 188504:
    {
        returnValue = F("Kleine Western Landwehr");
        break;
    }
    case 188505:
    {
        returnValue = F("Kleine Wickriede");
        break;
    }
    case 188506:
    {
        returnValue = F("Kleine Wiegardt");
        break;
    }
    case 188507:
    {
        returnValue = F("Kleine Wiekau");
        break;
    }
    case 188508:
    {
        returnValue = F("Kleine Wies");
        break;
    }
    case 188509:
    {
        returnValue = F("Kleine Wiese");
        break;
    }
    case 188510:
    {
        returnValue = F("Kleine Wiesen");
        break;
    }
    case 188511:
    {
        returnValue = F("Kleine Wiesengasse");
        break;
    }
    case 188512:
    {
        returnValue = F("Kleine Wiesenstr.");
        break;
    }
    case 188513:
    {
        returnValue = F("Kleine Wilhelmsgasse");
        break;
    }
    case 188514:
    {
        returnValue = F("Kleine Windmühlengasse");
        break;
    }
    case 188515:
    {
        returnValue = F("Kleine Wingertstr.");
        break;
    }
    case 188516:
    {
        returnValue = F("Kleine Winkelsstr.");
        break;
    }
    case 188517:
    {
        returnValue = F("Kleine Wittefelderort");
        break;
    }
    case 188518:
    {
        returnValue = F("Kleine Wolfgangstr.");
        break;
    }
    case 188519:
    {
        returnValue = F("Kleine Wolfskuhle");
        break;
    }
    case 188520:
    {
        returnValue = F("Kleine Wolfstr.");
        break;
    }
    case 188521:
    {
        returnValue = F("Kleine Wollweberstr.");
        break;
    }
    case 188522:
    {
        returnValue = F("Kleine Worth");
        break;
    }
    case 188523:
    {
        returnValue = F("Kleine Wurth");
        break;
    }
    case 188524:
    {
        returnValue = F("Kleine Zanggasse");
        break;
    }
    case 188525:
    {
        returnValue = F("Kleine Zeil");
        break;
    }
    case 188526:
    {
        returnValue = F("Kleine Zellgasse");
        break;
    }
    case 188527:
    {
        returnValue = F("Kleine Ziegelstr.");
        break;
    }
    case 188528:
    {
        returnValue = F("Kleine Zweete");
        break;
    }
    case 188529:
    {
        returnValue = F("Kleine Ölbruchstr.");
        break;
    }
    case 188530:
    {
        returnValue = F("Kleine Ötz");
        break;
    }
    case 188531:
    {
        returnValue = F("Kleine-Meer-Str.");
        break;
    }
    case 188532:
    {
        returnValue = F("Kleine-Neue-Str.");
        break;
    }
    case 188533:
    {
        returnValue = F("Kleinebergstr.");
        break;
    }
    case 188534:
    {
        returnValue = F("Kleinebrechtshof");
        break;
    }
    case 188535:
    {
        returnValue = F("Kleineck");
        break;
    }
    case 188536:
    {
        returnValue = F("Kleinefeld");
        break;
    }
    case 188537:
    {
        returnValue = F("Kleinegelseeweg");
        break;
    }
    case 188538:
    {
        returnValue = F("Kleineibstädter Str.");
        break;
    }
    case 188539:
    {
        returnValue = F("Kleineich");
        break;
    }
    case 188540:
    {
        returnValue = F("Kleineichberg");
        break;
    }
    case 188541:
    {
        returnValue = F("Kleineichenbruch");
        break;
    }
    case 188542:
    {
        returnValue = F("Kleineichenweg");
        break;
    }
    case 188543:
    {
        returnValue = F("Kleineichhölzchen");
        break;
    }
    case 188544:
    {
        returnValue = F("Kleineichstädter Str.");
        break;
    }
    case 188545:
    {
        returnValue = F("Kleineichstädter Weg");
        break;
    }
    case 188546:
    {
        returnValue = F("Kleineisenbach");
        break;
    }
    case 188547:
    {
        returnValue = F("Kleineledder");
        break;
    }
    case 188548:
    {
        returnValue = F("Kleinemast");
        break;
    }
    case 188549:
    {
        returnValue = F("Kleinemsener Weg");
        break;
    }
    case 188550:
    {
        returnValue = F("Kleinen Greve");
        break;
    }
    case 188551:
    {
        returnValue = F("Kleinenberger Landstr.");
        break;
    }
    case 188552:
    {
        returnValue = F("Kleinenberger Ring");
        break;
    }
    case 188553:
    {
        returnValue = F("Kleinenberger Str.");
        break;
    }
    case 188554:
    {
        returnValue = F("Kleinenberger Weg");
        break;
    }
    case 188555:
    {
        returnValue = F("Kleinenbergweg");
        break;
    }
    case 188556:
    {
        returnValue = F("Kleinenbernberger Str.");
        break;
    }
    case 188557:
    {
        returnValue = F("Kleinenborstel");
        break;
    }
    case 188558:
    {
        returnValue = F("Kleinenborstel Heide");
        break;
    }
    case 188559:
    {
        returnValue = F("Kleinenbreden");
        break;
    }
    case 188560:
    {
        returnValue = F("Kleinenbremer Str.");
        break;
    }
    case 188561:
    {
        returnValue = F("Kleinenbroicher Str.");
        break;
    }
    case 188562:
    {
        returnValue = F("Kleinend");
        break;
    }
    case 188563:
    {
        returnValue = F("Kleinendrescheid");
        break;
    }
    case 188564:
    {
        returnValue = F("Kleinengstinger Str.");
        break;
    }
    case 188565:
    {
        returnValue = F("Kleinenheerse");
        break;
    }
    case 188566:
    {
        returnValue = F("Kleinenheide");
        break;
    }
    case 188567:
    {
        returnValue = F("Kleinenmarper Str.");
        break;
    }
    case 188568:
    {
        returnValue = F("Kleinenscheidt");
        break;
    }
    case 188569:
    {
        returnValue = F("Kleinenwieden");
        break;
    }
    case 188570:
    {
        returnValue = F("Kleinenwiedener Str.");
        break;
    }
    case 188571:
    {
        returnValue = F("Kleinenzhof");
        break;
    }
    case 188572:
    {
        returnValue = F("Kleinenztal");
        break;
    }
    case 188573:
    {
        returnValue = F("Kleinenztalstr.");
        break;
    }
    case 188574:
    {
        returnValue = F("Kleinenztalsträßchen");
        break;
    }
    case 188575:
    {
        returnValue = F("Kleiner Ackerweg");
        break;
    }
    case 188576:
    {
        returnValue = F("Kleiner Ahornweg");
        break;
    }
    case 188577:
    {
        returnValue = F("Kleiner Amselweg");
        break;
    }
    case 188578:
    {
        returnValue = F("Kleiner Anger");
        break;
    }
    case 188579:
    {
        returnValue = F("Kleiner Asseweg");
        break;
    }
    case 188580:
    {
        returnValue = F("Kleiner Audamm");
        break;
    }
    case 188581:
    {
        returnValue = F("Kleiner Auritzer Weg");
        break;
    }
    case 188582:
    {
        returnValue = F("Kleiner Auweg");
        break;
    }
    case 188583:
    {
        returnValue = F("Kleiner Backhorn");
        break;
    }
    case 188584:
    {
        returnValue = F("Kleiner Bakenberg Weg");
        break;
    }
    case 188585:
    {
        returnValue = F("Kleiner Barkel");
        break;
    }
    case 188586:
    {
        returnValue = F("Kleiner Bauernweg");
        break;
    }
    case 188587:
    {
        returnValue = F("Kleiner Baumhofsgang");
        break;
    }
    case 188588:
    {
        returnValue = F("Kleiner Bendenweg");
        break;
    }
    case 188589:
    {
        returnValue = F("Kleiner Berg");
        break;
    }
    case 188590:
    {
        returnValue = F("Kleiner Bergweg");
        break;
    }
    case 188591:
    {
        returnValue = F("Kleiner Bierweg");
        break;
    }
    case 188592:
    {
        returnValue = F("Kleiner Birkengang");
        break;
    }
    case 188593:
    {
        returnValue = F("Kleiner Birkenweg");
        break;
    }
    case 188594:
    {
        returnValue = F("Kleiner Bischofsweg");
        break;
    }
    case 188595:
    {
        returnValue = F("Kleiner Blink");
        break;
    }
    case 188596:
    {
        returnValue = F("Kleiner Blobach");
        break;
    }
    case 188597:
    {
        returnValue = F("Kleiner Bockrieß");
        break;
    }
    case 188598:
    {
        returnValue = F("Kleiner Bogen");
        break;
    }
    case 188599:
    {
        returnValue = F("Kleiner Bollen");
        break;
    }
    case 188600:
    {
        returnValue = F("Kleiner Bornkrug");
        break;
    }
    case 188601:
    {
        returnValue = F("Kleiner Boßlerweg");
        break;
    }
    case 188602:
    {
        returnValue = F("Kleiner Brenzpark");
        break;
    }
    case 188603:
    {
        returnValue = F("Kleiner Brink");
        break;
    }
    case 188604:
    {
        returnValue = F("Kleiner Brocken");
        break;
    }
    case 188605:
    {
        returnValue = F("Kleiner Bruch");
        break;
    }
    case 188606:
    {
        returnValue = F("Kleiner Bruchweg");
        break;
    }
    case 188607:
    {
        returnValue = F("Kleiner Brückendamm");
        break;
    }
    case 188608:
    {
        returnValue = F("Kleiner Brückenrain");
        break;
    }
    case 188609:
    {
        returnValue = F("Kleiner Brühl");
        break;
    }
    case 188610:
    {
        returnValue = F("Kleiner Buchenweg");
        break;
    }
    case 188611:
    {
        returnValue = F("Kleiner Bullmeedeweg");
        break;
    }
    case 188612:
    {
        returnValue = F("Kleiner Burggarten");
        break;
    }
    case 188613:
    {
        returnValue = F("Kleiner Burggartenweg");
        break;
    }
    case 188614:
    {
        returnValue = F("Kleiner Burgweg");
        break;
    }
    case 188615:
    {
        returnValue = F("Kleiner Böckel");
        break;
    }
    case 188616:
    {
        returnValue = F("Kleiner Böhl");
        break;
    }
    case 188617:
    {
        returnValue = F("Kleiner Bören");
        break;
    }
    case 188618:
    {
        returnValue = F("Kleiner Büchel");
        break;
    }
    case 188619:
    {
        returnValue = F("Kleiner Christianentalweg");
        break;
    }
    case 188620:
    {
        returnValue = F("Kleiner Dahlweg");
        break;
    }
    case 188621:
    {
        returnValue = F("Kleiner Damm");
        break;
    }
    case 188622:
    {
        returnValue = F("Kleiner Diebsteig");
        break;
    }
    case 188623:
    {
        returnValue = F("Kleiner Dieckkamp");
        break;
    }
    case 188624:
    {
        returnValue = F("Kleiner Dobbenweg");
        break;
    }
    case 188625:
    {
        returnValue = F("Kleiner Dorfanger");
        break;
    }
    case 188626:
    {
        returnValue = F("Kleiner Dorfplatz");
        break;
    }
    case 188627:
    {
        returnValue = F("Kleiner Dorfweg");
        break;
    }
    case 188628:
    {
        returnValue = F("Kleiner Dorn");
        break;
    }
    case 188629:
    {
        returnValue = F("Kleiner Dörgen");
        break;
    }
    case 188630:
    {
        returnValue = F("Kleiner Eichfelder Weg");
        break;
    }
    case 188631:
    {
        returnValue = F("Kleiner Eichwerder");
        break;
    }
    case 188632:
    {
        returnValue = F("Kleiner Eiderkamp");
        break;
    }
    case 188633:
    {
        returnValue = F("Kleiner Esch");
        break;
    }
    case 188634:
    {
        returnValue = F("Kleiner Eschenweg");
        break;
    }
    case 188635:
    {
        returnValue = F("Kleiner Escherweg");
        break;
    }
    case 188636:
    {
        returnValue = F("Kleiner Eschweg");
        break;
    }
    case 188637:
    {
        returnValue = F("Kleiner Exerzierplatz");
        break;
    }
    case 188638:
    {
        returnValue = F("Kleiner Fahnenweg");
        break;
    }
    case 188639:
    {
        returnValue = F("Kleiner Feldweg");
        break;
    }
    case 188640:
    {
        returnValue = F("Kleiner Flaarweg");
        break;
    }
    case 188641:
    {
        returnValue = F("Kleiner Flecken");
        break;
    }
    case 188642:
    {
        returnValue = F("Kleiner Flügel");
        break;
    }
    case 188643:
    {
        returnValue = F("Kleiner Forlenweg");
        break;
    }
    case 188644:
    {
        returnValue = F("Kleiner Forstweg");
        break;
    }
    case 188645:
    {
        returnValue = F("Kleiner Fuchsküppelsweg");
        break;
    }
    case 188646:
    {
        returnValue = F("Kleiner Fuggerweg");
        break;
    }
    case 188647:
    {
        returnValue = F("Kleiner Fährhof");
        break;
    }
    case 188648:
    {
        returnValue = F("Kleiner Fürstenweg");
        break;
    }
    case 188649:
    {
        returnValue = F("Kleiner Galgenbergweg");
        break;
    }
    case 188650:
    {
        returnValue = F("Kleiner Gallberg");
        break;
    }
    case 188651:
    {
        returnValue = F("Kleiner Gang");
        break;
    }
    case 188652:
    {
        returnValue = F("Kleiner Garten");
        break;
    }
    case 188653:
    {
        returnValue = F("Kleiner Gartenweg");
        break;
    }
    case 188654:
    {
        returnValue = F("Kleiner Geisrain");
        break;
    }
    case 188655:
    {
        returnValue = F("Kleiner Gerauer Viehtrift");
        break;
    }
    case 188656:
    {
        returnValue = F("Kleiner Glinder Berg");
        break;
    }
    case 188657:
    {
        returnValue = F("Kleiner Graben");
        break;
    }
    case 188658:
    {
        returnValue = F("Kleiner Grendel");
        break;
    }
    case 188659:
    {
        returnValue = F("Kleiner Grund");
        break;
    }
    case 188660:
    {
        returnValue = F("Kleiner Grätz");
        break;
    }
    case 188661:
    {
        returnValue = F("Kleiner Grüner Weg");
        break;
    }
    case 188662:
    {
        returnValue = F("Kleiner Guidelplatz");
        break;
    }
    case 188663:
    {
        returnValue = F("Kleiner Gähn");
        break;
    }
    case 188664:
    {
        returnValue = F("Kleiner Gödeckenkopfweg");
        break;
    }
    case 188665:
    {
        returnValue = F("Kleiner Gönkamp");
        break;
    }
    case 188666:
    {
        returnValue = F("Kleiner Haag");
        break;
    }
    case 188667:
    {
        returnValue = F("Kleiner Hack");
        break;
    }
    case 188668:
    {
        returnValue = F("Kleiner Hagen");
        break;
    }
    case 188669:
    {
        returnValue = F("Kleiner Halken");
        break;
    }
    case 188670:
    {
        returnValue = F("Kleiner Hamberg");
        break;
    }
    case 188671:
    {
        returnValue = F("Kleiner Hausberg");
        break;
    }
    case 188672:
    {
        returnValue = F("Kleiner Heberweg");
        break;
    }
    case 188673:
    {
        returnValue = F("Kleiner Heerter Weg");
        break;
    }
    case 188674:
    {
        returnValue = F("Kleiner Heidberg");
        break;
    }
    case 188675:
    {
        returnValue = F("Kleiner Heidweg");
        break;
    }
    case 188676:
    {
        returnValue = F("Kleiner Hellweg");
        break;
    }
    case 188677:
    {
        returnValue = F("Kleiner Hertenweg");
        break;
    }
    case 188678:
    {
        returnValue = F("Kleiner Heuberg");
        break;
    }
    case 188679:
    {
        returnValue = F("Kleiner Hilligenhof");
        break;
    }
    case 188680:
    {
        returnValue = F("Kleiner Hof");
        break;
    }
    case 188681:
    {
        returnValue = F("Kleiner Hohlweg");
        break;
    }
    case 188682:
    {
        returnValue = F("Kleiner Hohwaldweg");
        break;
    }
    case 188683:
    {
        returnValue = F("Kleiner Holtjendiek");
        break;
    }
    case 188684:
    {
        returnValue = F("Kleiner Hookerweg");
        break;
    }
    case 188685:
    {
        returnValue = F("Kleiner Hoorn");
        break;
    }
    case 188686:
    {
        returnValue = F("Kleiner Horner Damm");
        break;
    }
    case 188687:
    {
        returnValue = F("Kleiner Horst");
        break;
    }
    case 188688:
    {
        returnValue = F("Kleiner Hucken");
        break;
    }
    case 188689:
    {
        returnValue = F("Kleiner Hufeisenweg");
        break;
    }
    case 188690:
    {
        returnValue = F("Kleiner Hundweg");
        break;
    }
    case 188691:
    {
        returnValue = F("Kleiner Hägweg");
        break;
    }
    case 188692:
    {
        returnValue = F("Kleiner Häwelmann");
        break;
    }
    case 188693:
    {
        returnValue = F("Kleiner Iberg");
        break;
    }
    case 188694:
    {
        returnValue = F("Kleiner Inselberg");
        break;
    }
    case 188695:
    {
        returnValue = F("Kleiner Janssenweg");
        break;
    }
    case 188696:
    {
        returnValue = F("Kleiner Johannes");
        break;
    }
    case 188697:
    {
        returnValue = F("Kleiner Johannes Bugenhagen Park");
        break;
    }
    case 188698:
    {
        returnValue = F("Kleiner Kaisergrund");
        break;
    }
    case 188699:
    {
        returnValue = F("Kleiner Kamp");
        break;
    }
    case 188700:
    {
        returnValue = F("Kleiner Katthagen");
        break;
    }
    case 188701:
    {
        returnValue = F("Kleiner Katzenrain");
        break;
    }
    case 188702:
    {
        returnValue = F("Kleiner Kegel");
        break;
    }
    case 188703:
    {
        returnValue = F("Kleiner Kesselweg");
        break;
    }
    case 188704:
    {
        returnValue = F("Kleiner Kirchberg");
        break;
    }
    case 188705:
    {
        returnValue = F("Kleiner Kirchrain");
        break;
    }
    case 188706:
    {
        returnValue = F("Kleiner Kirchweg");
        break;
    }
    case 188707:
    {
        returnValue = F("Kleiner Klosterhof");
        break;
    }
    case 188708:
    {
        returnValue = F("Kleiner Klosterweg");
        break;
    }
    case 188709:
    {
        returnValue = F("Kleiner Knick");
        break;
    }
    case 188710:
    {
        returnValue = F("Kleiner Kohlhofweg");
        break;
    }
    case 188711:
    {
        returnValue = F("Kleiner Kornweg");
        break;
    }
    case 188712:
    {
        returnValue = F("Kleiner Kraul");
        break;
    }
    case 188713:
    {
        returnValue = F("Kleiner Kreuzweg");
        break;
    }
    case 188714:
    {
        returnValue = F("Kleiner Kuhbachweg");
        break;
    }
    case 188715:
    {
        returnValue = F("Kleiner Kuhweg");
        break;
    }
    case 188716:
    {
        returnValue = F("Kleiner Kulm");
        break;
    }
    case 188717:
    {
        returnValue = F("Kleiner Kurpark");
        break;
    }
    case 188718:
    {
        returnValue = F("Kleiner Köven");
        break;
    }
    case 188719:
    {
        returnValue = F("Kleiner Kühruhweg");
        break;
    }
    case 188720:
    {
        returnValue = F("Kleiner Kühweg");
        break;
    }
    case 188721:
    {
        returnValue = F("Kleiner Lahweg");
        break;
    }
    case 188722:
    {
        returnValue = F("Kleiner Landweg");
        break;
    }
    case 188723:
    {
        returnValue = F("Kleiner Laubelt");
        break;
    }
    case 188724:
    {
        returnValue = F("Kleiner Lindenplatz");
        break;
    }
    case 188725:
    {
        returnValue = F("Kleiner Loggenhagen");
        break;
    }
    case 188726:
    {
        returnValue = F("Kleiner Lustgarten");
        break;
    }
    case 188727:
    {
        returnValue = F("Kleiner Löwe");
        break;
    }
    case 188728:
    {
        returnValue = F("Kleiner Maarweg");
        break;
    }
    case 188729:
    {
        returnValue = F("Kleiner Mallohweg");
        break;
    }
    case 188730:
    {
        returnValue = F("Kleiner Manhagen");
        break;
    }
    case 188731:
    {
        returnValue = F("Kleiner Markt");
        break;
    }
    case 188732:
    {
        returnValue = F("Kleiner Marktplatz");
        break;
    }
    case 188733:
    {
        returnValue = F("Kleiner Markweg");
        break;
    }
    case 188734:
    {
        returnValue = F("Kleiner Marschweg");
        break;
    }
    case 188735:
    {
        returnValue = F("Kleiner Maschweg");
        break;
    }
    case 188736:
    {
        returnValue = F("Kleiner Mausesteig");
        break;
    }
    case 188737:
    {
        returnValue = F("Kleiner Meedenweg");
        break;
    }
    case 188738:
    {
        returnValue = F("Kleiner Mittelweg");
        break;
    }
    case 188739:
    {
        returnValue = F("Kleiner Moor");
        break;
    }
    case 188740:
    {
        returnValue = F("Kleiner Moorkamp");
        break;
    }
    case 188741:
    {
        returnValue = F("Kleiner Moorpadd");
        break;
    }
    case 188742:
    {
        returnValue = F("Kleiner Moorstückenweg");
        break;
    }
    case 188743:
    {
        returnValue = F("Kleiner Moorweg");
        break;
    }
    case 188744:
    {
        returnValue = F("Kleiner Muskamp");
        break;
    }
    case 188745:
    {
        returnValue = F("Kleiner Mönch");
        break;
    }
    case 188746:
    {
        returnValue = F("Kleiner Müdenkamp");
        break;
    }
    case 188747:
    {
        returnValue = F("Kleiner Mühlberg");
        break;
    }
    case 188748:
    {
        returnValue = F("Kleiner Mühlenberg");
        break;
    }
    case 188749:
    {
        returnValue = F("Kleiner Mühlenweg");
        break;
    }
    case 188750:
    {
        returnValue = F("Kleiner Mühlenwinkel");
        break;
    }
    case 188751:
    {
        returnValue = F("Kleiner Müllerweg");
        break;
    }
    case 188752:
    {
        returnValue = F("Kleiner Neelhof");
        break;
    }
    case 188753:
    {
        returnValue = F("Kleiner Neuwallsweg");
        break;
    }
    case 188754:
    {
        returnValue = F("Kleiner Nordermoorer Hellmer");
        break;
    }
    case 188755:
    {
        returnValue = F("Kleiner Ockerweg");
        break;
    }
    case 188756:
    {
        returnValue = F("Kleiner Oldekamp");
        break;
    }
    case 188757:
    {
        returnValue = F("Kleiner Ort");
        break;
    }
    case 188758:
    {
        returnValue = F("Kleiner Osterkamp");
        break;
    }
    case 188759:
    {
        returnValue = F("Kleiner Palsterkamp");
        break;
    }
    case 188760:
    {
        returnValue = F("Kleiner Park");
        break;
    }
    case 188761:
    {
        returnValue = F("Kleiner Park Leck");
        break;
    }
    case 188762:
    {
        returnValue = F("Kleiner Park mit Bank und Touristeninformation");
        break;
    }
    case 188763:
    {
        returnValue = F("Kleiner Park mit spielplatz");
        break;
    }
    case 188764:
    {
        returnValue = F("Kleiner Parkweg");
        break;
    }
    case 188765:
    {
        returnValue = F("Kleiner Parsteinsee");
        break;
    }
    case 188766:
    {
        returnValue = F("Kleiner Pfaffenweg");
        break;
    }
    case 188767:
    {
        returnValue = F("Kleiner Philosophenweg");
        break;
    }
    case 188768:
    {
        returnValue = F("Kleiner Pichoweg");
        break;
    }
    case 188769:
    {
        returnValue = F("Kleiner Plan");
        break;
    }
    case 188770:
    {
        returnValue = F("Kleiner Platz");
        break;
    }
    case 188771:
    {
        returnValue = F("Kleiner Postweg");
        break;
    }
    case 188772:
    {
        returnValue = F("Kleiner Pyraweg");
        break;
    }
    case 188773:
    {
        returnValue = F("Kleiner Pöstenweg");
        break;
    }
    case 188774:
    {
        returnValue = F("Kleiner Querweg");
        break;
    }
    case 188775:
    {
        returnValue = F("Kleiner Ranzen");
        break;
    }
    case 188776:
    {
        returnValue = F("Kleiner Rehnhof");
        break;
    }
    case 188777:
    {
        returnValue = F("Kleiner Reitweg");
        break;
    }
    case 188778:
    {
        returnValue = F("Kleiner Riedweg");
        break;
    }
    case 188779:
    {
        returnValue = F("Kleiner Riepen");
        break;
    }
    case 188780:
    {
        returnValue = F("Kleiner Riethweg");
        break;
    }
    case 188781:
    {
        returnValue = F("Kleiner Ring");
        break;
    }
    case 188782:
    {
        returnValue = F("Kleiner Rosengarten");
        break;
    }
    case 188783:
    {
        returnValue = F("Kleiner Rosenweg");
        break;
    }
    case 188784:
    {
        returnValue = F("Kleiner Rottweg");
        break;
    }
    case 188785:
    {
        returnValue = F("Kleiner Roßdorfer Weg");
        break;
    }
    case 188786:
    {
        returnValue = F("Kleiner Rummbarg");
        break;
    }
    case 188787:
    {
        returnValue = F("Kleiner Rundweg");
        break;
    }
    case 188788:
    {
        returnValue = F("Kleiner Rungenberg");
        break;
    }
    case 188789:
    {
        returnValue = F("Kleiner Römerberg");
        break;
    }
    case 188790:
    {
        returnValue = F("Kleiner Rübenkamp");
        break;
    }
    case 188791:
    {
        returnValue = F("Kleiner Sand");
        break;
    }
    case 188792:
    {
        returnValue = F("Kleiner Sandhagen");
        break;
    }
    case 188793:
    {
        returnValue = F("Kleiner Schildberg");
        break;
    }
    case 188794:
    {
        returnValue = F("Kleiner Schlossplatz");
        break;
    }
    case 188795:
    {
        returnValue = F("Kleiner Schloßweg");
        break;
    }
    case 188796:
    {
        returnValue = F("Kleiner Schmeelweg");
        break;
    }
    case 188797:
    {
        returnValue = F("Kleiner Schmiedekamp");
        break;
    }
    case 188798:
    {
        returnValue = F("Kleiner Schneeweg");
        break;
    }
    case 188799:
    {
        returnValue = F("Kleiner Schratweg");
        break;
    }
    case 188800:
    {
        returnValue = F("Kleiner Schulweg");
        break;
    }
    case 188801:
    {
        returnValue = F("Kleiner Schwibbogen");
        break;
    }
    case 188802:
    {
        returnValue = F("Kleiner Seeweg");
        break;
    }
    case 188803:
    {
        returnValue = F("Kleiner Seminarweg");
        break;
    }
    case 188804:
    {
        returnValue = F("Kleiner Send");
        break;
    }
    case 188805:
    {
        returnValue = F("Kleiner Siedlungspark");
        break;
    }
    case 188806:
    {
        returnValue = F("Kleiner Siedlungsweg");
        break;
    }
    case 188807:
    {
        returnValue = F("Kleiner Sielweg");
        break;
    }
    case 188808:
    {
        returnValue = F("Kleiner Siepen");
        break;
    }
    case 188809:
    {
        returnValue = F("Kleiner Spiegelberg");
        break;
    }
    case 188810:
    {
        returnValue = F("Kleiner Spielplatz");
        break;
    }
    case 188811:
    {
        returnValue = F("Kleiner Stachus");
        break;
    }
    case 188812:
    {
        returnValue = F("Kleiner Stadtmarsch");
        break;
    }
    case 188813:
    {
        returnValue = F("Kleiner Stadtpark");
        break;
    }
    case 188814:
    {
        returnValue = F("Kleiner Staffelrundweg");
        break;
    }
    case 188815:
    {
        returnValue = F("Kleiner Steert");
        break;
    }
    case 188816:
    {
        returnValue = F("Kleiner Steg");
        break;
    }
    case 188817:
    {
        returnValue = F("Kleiner Stegel");
        break;
    }
    case 188818:
    {
        returnValue = F("Kleiner Steig");
        break;
    }
    case 188819:
    {
        returnValue = F("Kleiner Steimker Weg");
        break;
    }
    case 188820:
    {
        returnValue = F("Kleiner Steindamm");
        break;
    }
    case 188821:
    {
        returnValue = F("Kleiner Steinweg");
        break;
    }
    case 188822:
    {
        returnValue = F("Kleiner Stieg");
        break;
    }
    case 188823:
    {
        returnValue = F("Kleiner Strangenweg");
        break;
    }
    case 188824:
    {
        returnValue = F("Kleiner Styg");
        break;
    }
    case 188825:
    {
        returnValue = F("Kleiner Sundern");
        break;
    }
    case 188826:
    {
        returnValue = F("Kleiner Südermoorweg");
        break;
    }
    case 188827:
    {
        returnValue = F("Kleiner Tannenweg");
        break;
    }
    case 188828:
    {
        returnValue = F("Kleiner Taubenweg");
        break;
    }
    case 188829:
    {
        returnValue = F("Kleiner Teichweg");
        break;
    }
    case 188830:
    {
        returnValue = F("Kleiner Theenbeekweg");
        break;
    }
    case 188831:
    {
        returnValue = F("Kleiner Trimm-Dich-Pfad");
        break;
    }
    case 188832:
    {
        returnValue = F("Kleiner Tösel");
        break;
    }
    case 188833:
    {
        returnValue = F("Kleiner Varlenkamp");
        break;
    }
    case 188834:
    {
        returnValue = F("Kleiner Vogelsang");
        break;
    }
    case 188835:
    {
        returnValue = F("Kleiner Waaterackersweg");
        break;
    }
    case 188836:
    {
        returnValue = F("Kleiner Wald");
        break;
    }
    case 188837:
    {
        returnValue = F("Kleiner Wall");
        break;
    }
    case 188838:
    {
        returnValue = F("Kleiner Wandrahm");
        break;
    }
    case 188839:
    {
        returnValue = F("Kleiner Warder");
        break;
    }
    case 188840:
    {
        returnValue = F("Kleiner Weg");
        break;
    }
    case 188841:
    {
        returnValue = F("Kleiner Weidenweg");
        break;
    }
    case 188842:
    {
        returnValue = F("Kleiner Weilerberg");
        break;
    }
    case 188843:
    {
        returnValue = F("Kleiner Weinberg");
        break;
    }
    case 188844:
    {
        returnValue = F("Kleiner Werder");
        break;
    }
    case 188845:
    {
        returnValue = F("Kleiner Wesenberg");
        break;
    }
    case 188846:
    {
        returnValue = F("Kleiner Wiesenweg");
        break;
    }
    case 188847:
    {
        returnValue = F("Kleiner Wilzschweg");
        break;
    }
    case 188848:
    {
        returnValue = F("Kleiner Winkel");
        break;
    }
    case 188849:
    {
        returnValue = F("Kleiner Winkelsheidermoorweg");
        break;
    }
    case 188850:
    {
        returnValue = F("Kleiner Winterberg");
        break;
    }
    case 188851:
    {
        returnValue = F("Kleiner Wischhoff");
        break;
    }
    case 188852:
    {
        returnValue = F("Kleiner Wohldkamp");
        break;
    }
    case 188853:
    {
        returnValue = F("Kleiner Wolfsackerweg");
        break;
    }
    case 188854:
    {
        returnValue = F("Kleiner Wolfsberg");
        break;
    }
    case 188855:
    {
        returnValue = F("Kleiner Wulfhagen");
        break;
    }
    case 188856:
    {
        returnValue = F("Kleiner Wunderberg");
        break;
    }
    case 188857:
    {
        returnValue = F("Kleiner Zehrbrocksweg");
        break;
    }
    case 188858:
    {
        returnValue = F("Kleiner Zimmerhof");
        break;
    }
    case 188859:
    {
        returnValue = F("Kleiner Zschand");
        break;
    }
    case 188860:
    {
        returnValue = F("Kleiner Zuschlag");
        break;
    }
    case 188861:
    {
        returnValue = F("Kleiner Ölbergweg");
        break;
    }
    case 188862:
    {
        returnValue = F("Kleiner-Fuchs-Hof");
        break;
    }
    case 188863:
    {
        returnValue = F("Kleiner-Muck-Weg");
        break;
    }
    case 188864:
    {
        returnValue = F("Kleiner-Spreewald-Park");
        break;
    }
    case 188865:
    {
        returnValue = F("Kleinerkmannsdorf");
        break;
    }
    case 188866:
    {
        returnValue = F("Kleinerlach");
        break;
    }
    case 188867:
    {
        returnValue = F("Kleinerner Str.");
        break;
    }
    case 188868:
    {
        returnValue = F("Kleinersche Str.");
        break;
    }
    case 188869:
    {
        returnValue = F("Kleines Berg");
        break;
    }
    case 188870:
    {
        returnValue = F("Kleines Bergl");
        break;
    }
    case 188871:
    {
        returnValue = F("Kleines Binsach");
        break;
    }
    case 188872:
    {
        returnValue = F("Kleines Birkenvenn");
        break;
    }
    case 188873:
    {
        returnValue = F("Kleines Bollwerk");
        break;
    }
    case 188874:
    {
        returnValue = F("Kleines Borntal");
        break;
    }
    case 188875:
    {
        returnValue = F("Kleines Brommertal");
        break;
    }
    case 188876:
    {
        returnValue = F("Kleines Dorf");
        break;
    }
    case 188877:
    {
        returnValue = F("Kleines Dörfchen");
        break;
    }
    case 188878:
    {
        returnValue = F("Kleines Eck");
        break;
    }
    case 188879:
    {
        returnValue = F("Kleines Egart");
        break;
    }
    case 188880:
    {
        returnValue = F("Kleines Eichsfeld");
        break;
    }
    case 188881:
    {
        returnValue = F("Kleines Ende");
        break;
    }
    case 188882:
    {
        returnValue = F("Kleines Eppental");
        break;
    }
    case 188883:
    {
        returnValue = F("Kleines Eschle");
        break;
    }
    case 188884:
    {
        returnValue = F("Kleines Feld");
        break;
    }
    case 188885:
    {
        returnValue = F("Kleines Feldle");
        break;
    }
    case 188886:
    {
        returnValue = F("Kleines Feldlein");
        break;
    }
    case 188887:
    {
        returnValue = F("Kleines Fenn");
        break;
    }
    case 188888:
    {
        returnValue = F("Kleines Flürlein");
        break;
    }
    case 188889:
    {
        returnValue = F("Kleines Franzosental");
        break;
    }
    case 188890:
    {
        returnValue = F("Kleines Gehäge");
        break;
    }
    case 188891:
    {
        returnValue = F("Kleines Gehölz");
        break;
    }
    case 188892:
    {
        returnValue = F("Kleines Geräumt");
        break;
    }
    case 188893:
    {
        returnValue = F("Kleines Gäßchen");
        break;
    }
    case 188894:
    {
        returnValue = F("Kleines Heckental");
        break;
    }
    case 188895:
    {
        returnValue = F("Kleines Heenfeld");
        break;
    }
    case 188896:
    {
        returnValue = F("Kleines Heutal");
        break;
    }
    case 188897:
    {
        returnValue = F("Kleines Holz");
        break;
    }
    case 188898:
    {
        returnValue = F("Kleines Kirchtor");
        break;
    }
    case 188899:
    {
        returnValue = F("Kleines Klosterfeld");
        break;
    }
    case 188900:
    {
        returnValue = F("Kleines Krautfeld");
        break;
    }
    case 188901:
    {
        returnValue = F("Kleines Langentalweg");
        break;
    }
    case 188902:
    {
        returnValue = F("Kleines Lohfeld");
        break;
    }
    case 188903:
    {
        returnValue = F("Kleines Moor");
        break;
    }
    case 188904:
    {
        returnValue = F("Kleines Moor Brokeloh");
        break;
    }
    case 188905:
    {
        returnValue = F("Kleines Must");
        break;
    }
    case 188906:
    {
        returnValue = F("Kleines Mühlenfeld");
        break;
    }
    case 188907:
    {
        returnValue = F("Kleines Mühlental");
        break;
    }
    case 188908:
    {
        returnValue = F("Kleines Pfaffental");
        break;
    }
    case 188909:
    {
        returnValue = F("Kleines Radfeld");
        break;
    }
    case 188910:
    {
        returnValue = F("Kleines Schild");
        break;
    }
    case 188911:
    {
        returnValue = F("Kleines Schloß");
        break;
    }
    case 188912:
    {
        returnValue = F("Kleines Tal");
        break;
    }
    case 188913:
    {
        returnValue = F("Kleines Uhlenbachtal");
        break;
    }
    case 188914:
    {
        returnValue = F("Kleines Wasser");
        break;
    }
    case 188915:
    {
        returnValue = F("Kleines Wegfährels");
        break;
    }
    case 188916:
    {
        returnValue = F("Kleines unteres Feld");
        break;
    }
    case 188917:
    {
        returnValue = F("Kleines Öhr");
        break;
    }
    case 188918:
    {
        returnValue = F("Kleines Öschle");
        break;
    }
    case 188919:
    {
        returnValue = F("Kleineschle");
        break;
    }
    case 188920:
    {
        returnValue = F("Kleineschleweg");
        break;
    }
    case 188921:
    {
        returnValue = F("Kleinewefersstr.");
        break;
    }
    case 188922:
    {
        returnValue = F("Kleinfahnersche Str.");
        break;
    }
    case 188923:
    {
        returnValue = F("Kleinfastenrath");
        break;
    }
    case 188924:
    {
        returnValue = F("Kleinfeld");
        break;
    }
    case 188925:
    {
        returnValue = F("Kleinfeld Str.");
        break;
    }
    case 188926:
    {
        returnValue = F("Kleinfeldchen");
        break;
    }
    case 188927:
    {
        returnValue = F("Kleinfeldchenstr.");
        break;
    }
    case 188928:
    {
        returnValue = F("Kleinfeldele");
        break;
    }
    case 188929:
    {
        returnValue = F("Kleinfeldeleweg");
        break;
    }
    case 188930:
    {
        returnValue = F("Kleinfelden");
        break;
    }
    case 188931:
    {
        returnValue = F("Kleinfelderhof");
        break;
    }
    case 188932:
    {
        returnValue = F("Kleinfelderstr.");
        break;
    }
    case 188933:
    {
        returnValue = F("Kleinfeldle");
        break;
    }
    case 188934:
    {
        returnValue = F("Kleinfeldlein");
        break;
    }
    case 188935:
    {
        returnValue = F("Kleinfeldlestr.");
        break;
    }
    case 188936:
    {
        returnValue = F("Kleinfeldleweg");
        break;
    }
    case 188937:
    {
        returnValue = F("Kleinfeldpark");
        break;
    }
    case 188938:
    {
        returnValue = F("Kleinfeldstr.");
        break;
    }
    case 188939:
    {
        returnValue = F("Kleinfeldweg");
        break;
    }
    case 188940:
    {
        returnValue = F("Kleinfellerstr.");
        break;
    }
    case 188941:
    {
        returnValue = F("Kleinfillinger Str.");
        break;
    }
    case 188942:
    {
        returnValue = F("Kleinfings");
        break;
    }
    case 188943:
    {
        returnValue = F("Kleinfischbach");
        break;
    }
    case 188944:
    {
        returnValue = F("Kleinflecken");
        break;
    }
    case 188945:
    {
        returnValue = F("Kleinflintbeker Str.");
        break;
    }
    case 188946:
    {
        returnValue = F("Kleinflürlein");
        break;
    }
    case 188947:
    {
        returnValue = F("Kleinflürleinsweg");
        break;
    }
    case 188948:
    {
        returnValue = F("Kleinforst");
        break;
    }
    case 188949:
    {
        returnValue = F("Kleinfrankreich");
        break;
    }
    case 188950:
    {
        returnValue = F("Kleinfrenkhausen");
        break;
    }
    case 188951:
    {
        returnValue = F("Kleinfriesener Str.");
        break;
    }
    case 188952:
    {
        returnValue = F("Kleingaarwang");
        break;
    }
    case 188953:
    {
        returnValue = F("Kleingansweg");
        break;
    }
    case 188954:
    {
        returnValue = F("Kleingarnstadter Str.");
        break;
    }
    case 188955:
    {
        returnValue = F("Kleingartacher Str.");
        break;
    }
    case 188956:
    {
        returnValue = F("Kleingartenanlage");
        break;
    }
    case 188957:
    {
        returnValue = F("Kleingartenanlage Granitz");
        break;
    }
    case 188958:
    {
        returnValue = F("Kleingartenanlage Gute Hoffnung");
        break;
    }
    case 188959:
    {
        returnValue = F("Kleingartenanlage Macherslust");
        break;
    }
    case 188960:
    {
        returnValue = F("Kleingartenanlage Schöne Aussicht");
        break;
    }
    case 188961:
    {
        returnValue = F("Kleingartenanlage St. Josef Starnberg");
        break;
    }
    case 188962:
    {
        returnValue = F("Kleingartengelände");
        break;
    }
    case 188963:
    {
        returnValue = F("Kleingartenland");
        break;
    }
    case 188964:
    {
        returnValue = F("Kleingartensiedlung Brunnengasse");
        break;
    }
    case 188965:
    {
        returnValue = F("Kleingartensparte \"Früh Auf");
        break;
    }
    case 188966:
    {
        returnValue = F("Kleingartenstr.");
        break;
    }
    case 188967:
    {
        returnValue = F("Kleingartenverein");
        break;
    }
    case 188968:
    {
        returnValue = F("Kleingartenverein Kyffhäuserblick e.V.");
        break;
    }
    case 188969:
    {
        returnValue = F("Kleingartenweg");
        break;
    }
    case 188970:
    {
        returnValue = F("Kleingasse");
        break;
    }
    case 188971:
    {
        returnValue = F("Kleingaster Str.");
        break;
    }
    case 188972:
    {
        returnValue = F("Kleingehrenweg");
        break;
    }
    case 188973:
    {
        returnValue = F("Kleingemünder Str.");
        break;
    }
    case 188974:
    {
        returnValue = F("Kleingeraer Weg");
        break;
    }
    case 188975:
    {
        returnValue = F("Kleingermerslebener Str.");
        break;
    }
    case 188976:
    {
        returnValue = F("Kleingermersleber Str.");
        break;
    }
    case 188977:
    {
        returnValue = F("Kleingerstenfeldstr.");
        break;
    }
    case 188978:
    {
        returnValue = F("Kleingeschaidter Str.");
        break;
    }
    case 188979:
    {
        returnValue = F("Kleingeschwenda");
        break;
    }
    case 188980:
    {
        returnValue = F("Kleingeseer Weg");
        break;
    }
    case 188981:
    {
        returnValue = F("Kleingiersdorfer Weg");
        break;
    }
    case 188982:
    {
        returnValue = F("Kleingilser Str.");
        break;
    }
    case 188983:
    {
        returnValue = F("Kleingladenbacher Weg");
        break;
    }
    case 188984:
    {
        returnValue = F("Kleinglattbacher Str.");
        break;
    }
    case 188985:
    {
        returnValue = F("Kleingräfendorfer Str.");
        break;
    }
    case 188986:
    {
        returnValue = F("Kleingärten");
        break;
    }
    case 188987:
    {
        returnValue = F("Kleingärtnerstr.");
        break;
    }
    case 188988:
    {
        returnValue = F("Kleingärtnerweg");
        break;
    }
    case 188989:
    {
        returnValue = F("Kleingäßle");
        break;
    }
    case 188990:
    {
        returnValue = F("Kleingäßlein");
        break;
    }
    case 188991:
    {
        returnValue = F("Kleingölitz");
        break;
    }
    case 188992:
    {
        returnValue = F("Kleinhabersdorfer Str.");
        break;
    }
    case 188993:
    {
        returnValue = F("Kleinhaderner Weg");
        break;
    }
    case 188994:
    {
        returnValue = F("Kleinhafenpark");
        break;
    }
    case 188995:
    {
        returnValue = F("Kleinhamberg");
        break;
    }
    case 188996:
    {
        returnValue = F("Kleinhannsstr.");
        break;
    }
    case 188997:
    {
        returnValue = F("Kleinhansstr.");
        break;
    }
    case 188998:
    {
        returnValue = F("Kleinhardt");
        break;
    }
    case 188999:
    {
        returnValue = F("Kleinharrier Str.");
        break;
    }
    case 189000:
    {
        returnValue = F("Kleinhartmannsdorfer Str.");
        break;
    }
    case 189001:
    {
        returnValue = F("Kleinhartpenninger Str.");
        break;
    }
    case 189002:
    {
        returnValue = F("Kleinhastedt");
        break;
    }
    case 189003:
    {
        returnValue = F("Kleinhauer Weg");
        break;
    }
    case 189004:
    {
        returnValue = F("Kleinhausstr.");
        break;
    }
    case 189005:
    {
        returnValue = F("Kleinhecken");
        break;
    }
    case 189006:
    {
        returnValue = F("Kleinhegesdorfer Str.");
        break;
    }
    case 189007:
    {
        returnValue = F("Kleinheide");
        break;
    }
    case 189008:
    {
        returnValue = F("Kleinheider Weg");
        break;
    }
    case 189009:
    {
        returnValue = F("Kleinheiligkreuzer Weg");
        break;
    }
    case 189010:
    {
        returnValue = F("Kleinhelfendorf");
        break;
    }
    case 189011:
    {
        returnValue = F("Kleinhelmers");
        break;
    }
    case 189012:
    {
        returnValue = F("Kleinhelmerser Weg");
        break;
    }
    case 189013:
    {
        returnValue = F("Kleinhemsbach");
        break;
    }
    case 189014:
    {
        returnValue = F("Kleinhennersdorfer Str.");
        break;
    }
    case 189015:
    {
        returnValue = F("Kleinhenzstr.");
        break;
    }
    case 189016:
    {
        returnValue = F("Kleinheppacher Str.");
        break;
    }
    case 189017:
    {
        returnValue = F("Kleinheppacher Weg");
        break;
    }
    case 189018:
    {
        returnValue = F("Kleinheringen");
        break;
    }
    case 189019:
    {
        returnValue = F("Kleinhermsdorf");
        break;
    }
    case 189020:
    {
        returnValue = F("Kleinherrischwand");
        break;
    }
    case 189021:
    {
        returnValue = F("Kleinheseler Moorweg");
        break;
    }
    case 189022:
    {
        returnValue = F("Kleinheubacher Str.");
        break;
    }
    case 189023:
    {
        returnValue = F("Kleinhoek");
        break;
    }
    case 189024:
    {
        returnValue = F("Kleinhofweg");
        break;
    }
    case 189025:
    {
        returnValue = F("Kleinhohenried");
        break;
    }
    case 189026:
    {
        returnValue = F("Kleinholl");
        break;
    }
    case 189027:
    {
        returnValue = F("Kleinholumer Str.");
        break;
    }
    case 189028:
    {
        returnValue = F("Kleinholzener Weg");
        break;
    }
    case 189029:
    {
        returnValue = F("Kleinholzweg");
        break;
    }
    case 189030:
    {
        returnValue = F("Kleinhorststr.");
        break;
    }
    case 189031:
    {
        returnValue = F("Kleinhurden");
        break;
    }
    case 189032:
    {
        returnValue = F("Kleinhäuser Feldschneise");
        break;
    }
    case 189033:
    {
        returnValue = F("Kleinhöbing");
        break;
    }
    case 189034:
    {
        returnValue = F("Kleinhöchberg");
        break;
    }
    case 189035:
    {
        returnValue = F("Kleinhöchberger Str.");
        break;
    }
    case 189036:
    {
        returnValue = F("Kleinhöchberger Weg");
        break;
    }
    case 189037:
    {
        returnValue = F("Kleinhöhe");
        break;
    }
    case 189038:
    {
        returnValue = F("Kleinhörn");
        break;
    }
    case 189039:
    {
        returnValue = F("Kleinhülsen");
        break;
    }
    case 189040:
    {
        returnValue = F("Kleinhüninger Str.");
        break;
    }
    case 189041:
    {
        returnValue = F("Kleinicher Str.");
        break;
    }
    case 189042:
    {
        returnValue = F("Kleinicher Weg");
        break;
    }
    case 189043:
    {
        returnValue = F("Kleiningersheimer Str.");
        break;
    }
    case 189044:
    {
        returnValue = F("Kleinjenaer Str.");
        break;
    }
    case 189045:
    {
        returnValue = F("Kleinkagen");
        break;
    }
    case 189046:
    {
        returnValue = F("Kleinkampsweg");
        break;
    }
    case 189047:
    {
        returnValue = F("Kleinkarlbacher Str.");
        break;
    }
    case 189048:
    {
        returnValue = F("Kleinkarolinenfeld");
        break;
    }
    case 189049:
    {
        returnValue = F("Kleinkatern");
        break;
    }
    case 189050:
    {
        returnValue = F("Kleinkehrbacher Weg");
        break;
    }
    case 189051:
    {
        returnValue = F("Kleinkellmünz");
        break;
    }
    case 189052:
    {
        returnValue = F("Kleinkemser Str.");
        break;
    }
    case 189053:
    {
        returnValue = F("Kleinkinder-Spielplatz");
        break;
    }
    case 189054:
    {
        returnValue = F("Kleinkirchenbirkig");
        break;
    }
    case 189055:
    {
        returnValue = F("Kleinklenau");
        break;
    }
    case 189056:
    {
        returnValue = F("Kleinklenauer Str.");
        break;
    }
    case 189057:
    {
        returnValue = F("Kleinklingenthal");
        break;
    }
    case 189058:
    {
        returnValue = F("Kleinkochberg");
        break;
    }
    case 189059:
    {
        returnValue = F("Kleinkollenburgstr.");
        break;
    }
    case 189060:
    {
        returnValue = F("Kleinkonreuth");
        break;
    }
    case 189061:
    {
        returnValue = F("Kleinkoogsdeich");
        break;
    }
    case 189062:
    {
        returnValue = F("Kleinkoogsweg");
        break;
    }
    case 189063:
    {
        returnValue = F("Kleinkorbethaer Str.");
        break;
    }
    case 189064:
    {
        returnValue = F("Kleinkorgauer Dorfstr.");
        break;
    }
    case 189065:
    {
        returnValue = F("Kleinkrausnik");
        break;
    }
    case 189066:
    {
        returnValue = F("Kleinkrausniker Str.");
        break;
    }
    case 189067:
    {
        returnValue = F("Kleinkrossen");
        break;
    }
    case 189068:
    {
        returnValue = F("Kleinkröbitz");
        break;
    }
    case 189069:
    {
        returnValue = F("Kleinkuchener Berg");
        break;
    }
    case 189070:
    {
        returnValue = F("Kleinkuchener Str.");
        break;
    }
    case 189071:
    {
        returnValue = F("Kleinkugeler Platz");
        break;
    }
    case 189072:
    {
        returnValue = F("Kleinkundorf");
        break;
    }
    case 189073:
    {
        returnValue = F("Kleinkühnauer Str.");
        break;
    }
    case 189074:
    {
        returnValue = F("Kleinlangenfelder Str.");
        break;
    }
    case 189075:
    {
        returnValue = F("Kleinlangheimer Str.");
        break;
    }
    case 189076:
    {
        returnValue = F("Kleinlangheimer Weg");
        break;
    }
    case 189077:
    {
        returnValue = F("Kleinlangsgasse");
        break;
    }
    case 189078:
    {
        returnValue = F("Kleinlauchstädter Str.");
        break;
    }
    case 189079:
    {
        returnValue = F("Kleinlaudenbacher Str.");
        break;
    }
    case 189080:
    {
        returnValue = F("Kleinlehen");
        break;
    }
    case 189081:
    {
        returnValue = F("Kleinlehnaer Weg");
        break;
    }
    case 189082:
    {
        returnValue = F("Kleinleipischer Str.");
        break;
    }
    case 189083:
    {
        returnValue = F("Kleinleipziger Str.");
        break;
    }
    case 189084:
    {
        returnValue = F("Kleinlesau");
        break;
    }
    case 189085:
    {
        returnValue = F("Kleinliebringen");
        break;
    }
    case 189086:
    {
        returnValue = F("Kleinliebringer Str.");
        break;
    }
    case 189087:
    {
        returnValue = F("Kleinlimmritz");
        break;
    }
    case 189088:
    {
        returnValue = F("Kleinlissa");
        break;
    }
    case 189089:
    {
        returnValue = F("Kleinlug");
        break;
    }
    case 189090:
    {
        returnValue = F("Kleinlöbichau");
        break;
    }
    case 189091:
    {
        returnValue = F("Kleinlöbichauer Weg");
        break;
    }
    case 189092:
    {
        returnValue = F("Kleinlübarser Str.");
        break;
    }
    case 189093:
    {
        returnValue = F("Kleinmachnower Ring");
        break;
    }
    case 189094:
    {
        returnValue = F("Kleinmaischeider Str.");
        break;
    }
    case 189095:
    {
        returnValue = F("Kleinmalschwitzer Str.");
        break;
    }
    case 189096:
    {
        returnValue = F("Kleinmarkt");
        break;
    }
    case 189097:
    {
        returnValue = F("Kleinmattweg");
        break;
    }
    case 189098:
    {
        returnValue = F("Kleinmecka");
        break;
    }
    case 189099:
    {
        returnValue = F("Kleinmenower Str.");
        break;
    }
    case 189100:
    {
        returnValue = F("Kleinmerbitz");
        break;
    }
    case 189101:
    {
        returnValue = F("Kleinmerbitzer Weg");
        break;
    }
    case 189102:
    {
        returnValue = F("Kleinmockritz");
        break;
    }
    case 189103:
    {
        returnValue = F("Kleinmockritzer Weg");
        break;
    }
    case 189104:
    {
        returnValue = F("Kleinmoor");
        break;
    }
    case 189105:
    {
        returnValue = F("Kleinmoordamm");
        break;
    }
    case 189106:
    {
        returnValue = F("Kleinmoorer Dorfstr.");
        break;
    }
    case 189107:
    {
        returnValue = F("Kleinmooringen");
        break;
    }
    case 189108:
    {
        returnValue = F("Kleinmühle");
        break;
    }
    case 189109:
    {
        returnValue = F("Kleinmühlen");
        break;
    }
    case 189110:
    {
        returnValue = F("Kleinmüllerstr.");
        break;
    }
    case 189111:
    {
        returnValue = F("Kleinmünchen");
        break;
    }
    case 189112:
    {
        returnValue = F("Kleinnaundorf Meßweg");
        break;
    }
    case 189113:
    {
        returnValue = F("Kleinnaundorf, Reiboldschachtring (1)");
        break;
    }
    case 189114:
    {
        returnValue = F("Kleinnaundorf, Reiboldschachtring (2)");
        break;
    }
    case 189115:
    {
        returnValue = F("Kleinnaundorfer Str.");
        break;
    }
    case 189116:
    {
        returnValue = F("Kleinneuhausener Str.");
        break;
    }
    case 189117:
    {
        returnValue = F("Kleinneundorfer Str.");
        break;
    }
    case 189118:
    {
        returnValue = F("Kleinneuschönberger Str.");
        break;
    }
    case 189119:
    {
        returnValue = F("Kleinniedesheimer Str.");
        break;
    }
    case 189120:
    {
        returnValue = F("Kleinnöbach");
        break;
    }
    case 189121:
    {
        returnValue = F("Kleinoberfeldstr.");
        break;
    }
    case 189122:
    {
        returnValue = F("Kleinoberndorf");
        break;
    }
    case 189123:
    {
        returnValue = F("Kleinobringer Marktweg");
        break;
    }
    case 189124:
    {
        returnValue = F("Kleinobringer Str.");
        break;
    }
    case 189125:
    {
        returnValue = F("Kleinochsenfurter Str.");
        break;
    }
    case 189126:
    {
        returnValue = F("Kleinoderscheid");
        break;
    }
    case 189127:
    {
        returnValue = F("Kleinolbersdorfer Str.");
        break;
    }
    case 189128:
    {
        returnValue = F("Kleinoldendorfer Str.");
        break;
    }
    case 189129:
    {
        returnValue = F("Kleinopitz Kreuzstr. (1)");
        break;
    }
    case 189130:
    {
        returnValue = F("Kleinopitz Kreuzstr. (2)");
        break;
    }
    case 189131:
    {
        returnValue = F("Kleinopitz, Abzweig Fördergersdorf (1)");
        break;
    }
    case 189132:
    {
        returnValue = F("Kleinopitz, Abzweig Fördergersdorf (2)");
        break;
    }
    case 189133:
    {
        returnValue = F("Kleinopitz, Abzweig Fördergersdorf (3)");
        break;
    }
    case 189134:
    {
        returnValue = F("Kleinopitzer Str.");
        break;
    }
    case 189135:
    {
        returnValue = F("Kleinopitzer Weg");
        break;
    }
    case 189136:
    {
        returnValue = F("Kleinornach");
        break;
    }
    case 189137:
    {
        returnValue = F("Kleinosidaer Str.");
        break;
    }
    case 189138:
    {
        returnValue = F("Kleinottweilerstr.");
        break;
    }
    case 189139:
    {
        returnValue = F("Kleinow");
        break;
    }
    case 189140:
    {
        returnValue = F("Kleinower Ziegelei");
        break;
    }
    case 189141:
    {
        returnValue = F("Kleinparkanlage am Kriegerehrenmal");
        break;
    }
    case 189142:
    {
        returnValue = F("Kleinpaschlebener Str.");
        break;
    }
    case 189143:
    {
        returnValue = F("Kleinpelsen");
        break;
    }
    case 189144:
    {
        returnValue = F("Kleinpoppenhof");
        break;
    }
    case 189145:
    {
        returnValue = F("Kleinpostwitz");
        break;
    }
    case 189146:
    {
        returnValue = F("Kleinpostwitzer Weg");
        break;
    }
    case 189147:
    {
        returnValue = F("Kleinprausitz");
        break;
    }
    case 189148:
    {
        returnValue = F("Kleinprießligk");
        break;
    }
    case 189149:
    {
        returnValue = F("Kleinpöhlaer Str.");
        break;
    }
    case 189150:
    {
        returnValue = F("Kleinpörthener Dorfstr.");
        break;
    }
    case 189151:
    {
        returnValue = F("Kleinpörthener Weg");
        break;
    }
    case 189152:
    {
        returnValue = F("Kleinpötzschau");
        break;
    }
    case 189153:
    {
        returnValue = F("Kleinpürschütz");
        break;
    }
    case 189154:
    {
        returnValue = F("Kleinquern");
        break;
    }
    case 189155:
    {
        returnValue = F("Kleinrader Weg");
        break;
    }
    case 189156:
    {
        returnValue = F("Kleinradmeritzer Str.");
        break;
    }
    case 189157:
    {
        returnValue = F("Kleinredder");
        break;
    }
    case 189158:
    {
        returnValue = F("Kleinreichertshofen");
        break;
    }
    case 189159:
    {
        returnValue = F("Kleinreinsdorf");
        break;
    }
    case 189160:
    {
        returnValue = F("Kleinreuteleweg");
        break;
    }
    case 189161:
    {
        returnValue = F("Kleinrheinfelder Str.");
        break;
    }
    case 189162:
    {
        returnValue = F("Kleinrheinfelder Weg");
        break;
    }
    case 189163:
    {
        returnValue = F("Kleinrheinstr.");
        break;
    }
    case 189164:
    {
        returnValue = F("Kleinried");
        break;
    }
    case 189165:
    {
        returnValue = F("Kleinrieder Str.");
        break;
    }
    case 189166:
    {
        returnValue = F("Kleinriedgasse");
        break;
    }
    case 189167:
    {
        returnValue = F("Kleinriedstr.");
        break;
    }
    case 189168:
    {
        returnValue = F("Kleinrinderfelder Str.");
        break;
    }
    case 189169:
    {
        returnValue = F("Kleinrinderfelder Weg");
        break;
    }
    case 189170:
    {
        returnValue = F("Kleinring");
        break;
    }
    case 189171:
    {
        returnValue = F("Kleinroda");
        break;
    }
    case 189172:
    {
        returnValue = F("Kleinrodaer Dorfstr.");
        break;
    }
    case 189173:
    {
        returnValue = F("Kleinrodaer Str.");
        break;
    }
    case 189174:
    {
        returnValue = F("Kleinrudestedter Str.");
        break;
    }
    case 189175:
    {
        returnValue = F("Kleinrödaer Str.");
        break;
    }
    case 189176:
    {
        returnValue = F("Kleinröhrsdorfer Str.");
        break;
    }
    case 189177:
    {
        returnValue = F("Kleinrössen");
        break;
    }
    case 189178:
    {
        returnValue = F("Kleinrössener Str.");
        break;
    }
    case 189179:
    {
        returnValue = F("Kleinrückerswalder Str.");
        break;
    }
    case 189180:
    {
        returnValue = F("Kleinrügelner Str.");
        break;
    }
    case 189181:
    {
        returnValue = F("Kleins Insel");
        break;
    }
    case 189182:
    {
        returnValue = F("Kleins Wiese");
        break;
    }
    case 189183:
    {
        returnValue = F("Kleinsaara");
        break;
    }
    case 189184:
    {
        returnValue = F("Kleinsachsenheimer Str.");
        break;
    }
    case 189185:
    {
        returnValue = F("Kleinsander Str.");
        break;
    }
    case 189186:
    {
        returnValue = F("Kleinsaubernitzer Weg");
        break;
    }
    case 189187:
    {
        returnValue = F("Kleinschafhauser Str.");
        break;
    }
    case 189188:
    {
        returnValue = F("Kleinscheider Str.");
        break;
    }
    case 189189:
    {
        returnValue = F("Kleinschippacher Weg");
        break;
    }
    case 189190:
    {
        returnValue = F("Kleinschmidt-Steg");
        break;
    }
    case 189191:
    {
        returnValue = F("Kleinschmidtskamp");
        break;
    }
    case 189192:
    {
        returnValue = F("Kleinschmidtstr.");
        break;
    }
    case 189193:
    {
        returnValue = F("Kleinschmiede");
        break;
    }
    case 189194:
    {
        returnValue = F("Kleinschmiedestr.");
        break;
    }
    case 189195:
    {
        returnValue = F("Kleinschmiedstr.");
        break;
    }
    case 189196:
    {
        returnValue = F("Kleinschornerweg");
        break;
    }
    case 189197:
    {
        returnValue = F("Kleinschwabhäuser Str.");
        break;
    }
    case 189198:
    {
        returnValue = F("Kleinschwamborn");
        break;
    }
    case 189199:
    {
        returnValue = F("Kleinschwand");
        break;
    }
    case 189200:
    {
        returnValue = F("Kleinschwander Str.");
        break;
    }
    case 189201:
    {
        returnValue = F("Kleinschwanderstr.");
        break;
    }
    case 189202:
    {
        returnValue = F("Kleinschwandner Str.");
        break;
    }
    case 189203:
    {
        returnValue = F("Kleinschwarzach");
        break;
    }
    case 189204:
    {
        returnValue = F("Kleinschönbacher Str.");
        break;
    }
    case 189205:
    {
        returnValue = F("Kleinsedlitzer Str.");
        break;
    }
    case 189206:
    {
        returnValue = F("Kleinseebacher Str.");
        break;
    }
    case 189207:
    {
        returnValue = F("Kleinseehamer Str.");
        break;
    }
    case 189208:
    {
        returnValue = F("Kleinseeschneise");
        break;
    }
    case 189209:
    {
        returnValue = F("Kleinseidauer Str.");
        break;
    }
    case 189210:
    {
        returnValue = F("Kleinseite");
        break;
    }
    case 189211:
    {
        returnValue = F("Kleinsendelbacher Str.");
        break;
    }
    case 189212:
    {
        returnValue = F("Kleinsendelbacher Weg");
        break;
    }
    case 189213:
    {
        returnValue = F("Kleinser Berg");
        break;
    }
    case 189214:
    {
        returnValue = F("Kleinshöhe");
        break;
    }
    case 189215:
    {
        returnValue = F("Kleinsiebenlehn");
        break;
    }
    case 189216:
    {
        returnValue = F("Kleinsiedlerweg");
        break;
    }
    case 189217:
    {
        returnValue = F("Kleinsiedlung");
        break;
    }
    case 189218:
    {
        returnValue = F("Kleinsiepstr.");
        break;
    }
    case 189219:
    {
        returnValue = F("Kleinsorgenring");
        break;
    }
    case 189220:
    {
        returnValue = F("Kleinspehnstr.");
        break;
    }
    case 189221:
    {
        returnValue = F("Kleinstadelhofen");
        break;
    }
    case 189222:
    {
        returnValue = F("Kleinstafflangen");
        break;
    }
    case 189223:
    {
        returnValue = F("Kleinsteinacher Str.");
        break;
    }
    case 189224:
    {
        returnValue = F("Kleinsteinacher Weg");
        break;
    }
    case 189225:
    {
        returnValue = F("Kleinsteinbach");
        break;
    }
    case 189226:
    {
        returnValue = F("Kleinsteinbacher Str.");
        break;
    }
    case 189227:
    {
        returnValue = F("Kleinsteinberger Str.");
        break;
    }
    case 189228:
    {
        returnValue = F("Kleinsteinen");
        break;
    }
    case 189229:
    {
        returnValue = F("Kleinsteinhauser Str.");
        break;
    }
    case 189230:
    {
        returnValue = F("Kleinsteinigt");
        break;
    }
    case 189231:
    {
        returnValue = F("Kleinsteinschlüchte");
        break;
    }
    case 189232:
    {
        returnValue = F("Kleinsteinweg");
        break;
    }
    case 189233:
    {
        returnValue = F("Kleinsterz");
        break;
    }
    case 189234:
    {
        returnValue = F("Kleinsthofweg");
        break;
    }
    case 189235:
    {
        returnValue = F("Kleinstr.");
        break;
    }
    case 189236:
    {
        returnValue = F("Kleinstrütchen");
        break;
    }
    case 189237:
    {
        returnValue = F("Kleinstädtener Weg");
        break;
    }
    case 189238:
    {
        returnValue = F("Kleinstückenweg");
        break;
    }
    case 189239:
    {
        returnValue = F("Kleinsägmühle");
        break;
    }
    case 189240:
    {
        returnValue = F("Kleintauscha");
        break;
    }
    case 189241:
    {
        returnValue = F("Kleinteilstr.");
        break;
    }
    case 189242:
    {
        returnValue = F("Kleintettauer Str.");
        break;
    }
    case 189243:
    {
        returnValue = F("Kleinthal");
        break;
    }
    case 189244:
    {
        returnValue = F("Kleinthalheimer Str.");
        break;
    }
    case 189245:
    {
        returnValue = F("Kleinthalstr.");
        break;
    }
    case 189246:
    {
        returnValue = F("Kleinthundorf");
        break;
    }
    case 189247:
    {
        returnValue = F("Kleintiegel");
        break;
    }
    case 189248:
    {
        returnValue = F("Kleintiergehege");
        break;
    }
    case 189249:
    {
        returnValue = F("Kleintierzoo");
        break;
    }
    case 189250:
    {
        returnValue = F("Kleintierzüchterweg");
        break;
    }
    case 189251:
    {
        returnValue = F("Kleintirolstr.");
        break;
    }
    case 189252:
    {
        returnValue = F("Kleintorgasse");
        break;
    }
    case 189253:
    {
        returnValue = F("Kleintossens");
        break;
    }
    case 189254:
    {
        returnValue = F("Kleinträgerstr.");
        break;
    }
    case 189255:
    {
        returnValue = F("Kleintäleweg");
        break;
    }
    case 189256:
    {
        returnValue = F("Kleinvargulaer Str.");
        break;
    }
    case 189257:
    {
        returnValue = F("Kleinvelden");
        break;
    }
    case 189258:
    {
        returnValue = F("Kleinvichtach");
        break;
    }
    case 189259:
    {
        returnValue = F("Kleinvoggenhof");
        break;
    }
    case 189260:
    {
        returnValue = F("Kleinvögele");
        break;
    }
    case 189261:
    {
        returnValue = F("Kleinwachenroth");
        break;
    }
    case 189262:
    {
        returnValue = F("Kleinwalburer Str.");
        break;
    }
    case 189263:
    {
        returnValue = F("Kleinwalding");
        break;
    }
    case 189264:
    {
        returnValue = F("Kleinwaldstr.");
        break;
    }
    case 189265:
    {
        returnValue = F("Kleinwallstädter Str.");
        break;
    }
    case 189266:
    {
        returnValue = F("Kleinwechsunger Dorfstr.");
        break;
    }
    case 189267:
    {
        returnValue = F("Kleinwechsunger Hauptstr.");
        break;
    }
    case 189268:
    {
        returnValue = F("Kleinwechsunger Schulstr.");
        break;
    }
    case 189269:
    {
        returnValue = F("Kleinwehrhagen");
        break;
    }
    case 189270:
    {
        returnValue = F("Kleinweichs");
        break;
    }
    case 189271:
    {
        returnValue = F("Kleinweichser Str.");
        break;
    }
    case 189272:
    {
        returnValue = F("Kleinweichshofen");
        break;
    }
    case 189273:
    {
        returnValue = F("Kleinweide");
        break;
    }
    case 189274:
    {
        returnValue = F("Kleinweidelbach");
        break;
    }
    case 189275:
    {
        returnValue = F("Kleinweiherle");
        break;
    }
    case 189276:
    {
        returnValue = F("Kleinweiler Str.");
        break;
    }
    case 189277:
    {
        returnValue = F("Kleinweingarten");
        break;
    }
    case 189278:
    {
        returnValue = F("Kleinweingartner Weg");
        break;
    }
    case 189279:
    {
        returnValue = F("Kleinweisach");
        break;
    }
    case 189280:
    {
        returnValue = F("Kleinweitzschen");
        break;
    }
    case 189281:
    {
        returnValue = F("Kleinweitzschner Str.");
        break;
    }
    case 189282:
    {
        returnValue = F("Kleinwendener Str.");
        break;
    }
    case 189283:
    {
        returnValue = F("Kleinwenderner Str.");
        break;
    }
    case 189284:
    {
        returnValue = F("Kleinwenkheimer Str.");
        break;
    }
    case 189285:
    {
        returnValue = F("Kleinwertherstr.");
        break;
    }
    case 189286:
    {
        returnValue = F("Kleinwethau");
        break;
    }
    case 189287:
    {
        returnValue = F("Kleinwieher Str.");
        break;
    }
    case 189288:
    {
        returnValue = F("Kleinwies");
        break;
    }
    case 189289:
    {
        returnValue = F("Kleinwiese");
        break;
    }
    case 189290:
    {
        returnValue = F("Kleinwolmsdorfer Str.");
        break;
    }
    case 189291:
    {
        returnValue = F("Kleinwolschendorf");
        break;
    }
    case 189292:
    {
        returnValue = F("Kleinwolschendorfer Str.");
        break;
    }
    case 189293:
    {
        returnValue = F("Kleinwudicke");
        break;
    }
    case 189294:
    {
        returnValue = F("Kleinwudicker Weg");
        break;
    }
    case 189295:
    {
        returnValue = F("Kleinwulkower Weg");
        break;
    }
    case 189296:
    {
        returnValue = F("Kleinwäldele");
        break;
    }
    case 189297:
    {
        returnValue = F("Kleinwäldelestr.");
        break;
    }
    case 189298:
    {
        returnValue = F("Kleinwäldle");
        break;
    }
    case 189299:
    {
        returnValue = F("Kleinwällcherweg");
        break;
    }
    case 189300:
    {
        returnValue = F("Kleinzelglestr.");
        break;
    }
    case 189301:
    {
        returnValue = F("Kleinzerbster Str.");
        break;
    }
    case 189302:
    {
        returnValue = F("Kleinzerbster Weg");
        break;
    }
    case 189303:
    {
        returnValue = F("Kleinziegelhof");
        break;
    }
    case 189304:
    {
        returnValue = F("Kleinziegenfeld");
        break;
    }
    case 189305:
    {
        returnValue = F("Kleinziethener Str.");
        break;
    }
    case 189306:
    {
        returnValue = F("Kleinzipersweg");
        break;
    }
    case 189307:
    {
        returnValue = F("Kleinzschepaer Str.");
        break;
    }
    case 189308:
    {
        returnValue = F("Kleinängerlein");
        break;
    }
    case 189309:
    {
        returnValue = F("Kleinösch");
        break;
    }
    case 189310:
    {
        returnValue = F("Kleinöschle");
        break;
    }
    case 189311:
    {
        returnValue = F("Kleinöschleweg");
        break;
    }
    case 189312:
    {
        returnValue = F("Kleinösinghausen");
        break;
    }
    case 189313:
    {
        returnValue = F("Kleirecke");
        break;
    }
    case 189314:
    {
        returnValue = F("Kleiriger Weg");
        break;
    }
    case 189315:
    {
        returnValue = F("Kleischweg");
        break;
    }
    case 189316:
    {
        returnValue = F("Kleiseerkoogsdeich");
        break;
    }
    case 189317:
    {
        returnValue = F("Kleiserbrink");
        break;
    }
    case 189318:
    {
        returnValue = F("Kleisinger");
        break;
    }
    case 189319:
    {
        returnValue = F("Kleislewaldweg");
        break;
    }
    case 189320:
    {
        returnValue = F("Kleist-Ring");
        break;
    }
    case 189321:
    {
        returnValue = F("Kleistallee");
        break;
    }
    case 189322:
    {
        returnValue = F("Kleistau");
        break;
    }
    case 189323:
    {
        returnValue = F("Kleistauer Weg");
        break;
    }
    case 189324:
    {
        returnValue = F("Kleistenberg");
        break;
    }
    case 189325:
    {
        returnValue = F("Kleisthöhe");
        break;
    }
    case 189326:
    {
        returnValue = F("Kleistiege");
        break;
    }
    case 189327:
    {
        returnValue = F("Kleistpark");
        break;
    }
    case 189328:
    {
        returnValue = F("Kleistplatz");
        break;
    }
    case 189329:
    {
        returnValue = F("Kleistr.");
        break;
    }
    case 189330:
    {
        returnValue = F("Kleistring");
        break;
    }
    case 189331:
    {
        returnValue = F("Kleiststr.");
        break;
    }
    case 189332:
    {
        returnValue = F("Kleistweg");
        break;
    }
    case 189333:
    {
        returnValue = F("Kleitschweg");
        break;
    }
    case 189334:
    {
        returnValue = F("Kleiuferweg");
        break;
    }
    case 189335:
    {
        returnValue = F("Kleiweg");
        break;
    }
    case 189336:
    {
        returnValue = F("Kleiwersdell");
        break;
    }
    case 189337:
    {
        returnValue = F("Kleiwiese");
        break;
    }
    case 189338:
    {
        returnValue = F("Kleiwurtweg");
        break;
    }
    case 189339:
    {
        returnValue = F("Klematisstr.");
        break;
    }
    case 189340:
    {
        returnValue = F("Klematisweg");
        break;
    }
    case 189341:
    {
        returnValue = F("Klembachweg");
        break;
    }
    case 189342:
    {
        returnValue = F("Klemens-August-Str.");
        break;
    }
    case 189343:
    {
        returnValue = F("Klemens-Eisenbarth-Str.");
        break;
    }
    case 189344:
    {
        returnValue = F("Klemens-Honsel-Weg");
        break;
    }
    case 189345:
    {
        returnValue = F("Klemens-Horn-Str.");
        break;
    }
    case 189346:
    {
        returnValue = F("Klemens-Mehling-Str.");
        break;
    }
    case 189347:
    {
        returnValue = F("Klemens-Mengele-Str.");
        break;
    }
    case 189348:
    {
        returnValue = F("Klemens-Mölkner-Str.");
        break;
    }
    case 189349:
    {
        returnValue = F("Klemens-Pröpper-Weg");
        break;
    }
    case 189350:
    {
        returnValue = F("Klemenseichen");
        break;
    }
    case 189351:
    {
        returnValue = F("Klemensgasse");
        break;
    }
    case 189352:
    {
        returnValue = F("Klemenshang");
        break;
    }
    case 189353:
    {
        returnValue = F("Klemensplatz");
        break;
    }
    case 189354:
    {
        returnValue = F("Klemensstr.");
        break;
    }
    case 189355:
    {
        returnValue = F("Klemensweg");
        break;
    }
    case 189356:
    {
        returnValue = F("Klement-Gottwald-Str.");
        break;
    }
    case 189357:
    {
        returnValue = F("Klementelvitz");
        break;
    }
    case 189358:
    {
        returnValue = F("Klementelvitzer Weg");
        break;
    }
    case 189359:
    {
        returnValue = F("Klemm");
        break;
    }
    case 189360:
    {
        returnValue = F("Klemmbachstr.");
        break;
    }
    case 189361:
    {
        returnValue = F("Klemmbergpark");
        break;
    }
    case 189362:
    {
        returnValue = F("Klemme");
        break;
    }
    case 189363:
    {
        returnValue = F("Klemmenkamp");
        break;
    }
    case 189364:
    {
        returnValue = F("Klemmenstr.");
        break;
    }
    case 189365:
    {
        returnValue = F("Klemmerdor");
        break;
    }
    case 189366:
    {
        returnValue = F("Klemmertstr.");
        break;
    }
    case 189367:
    {
        returnValue = F("Klemmestr.");
        break;
    }
    case 189368:
    {
        returnValue = F("Klemmgasse");
        break;
    }
    case 189369:
    {
        returnValue = F("Klemmsberg");
        break;
    }
    case 189370:
    {
        returnValue = F("Klemmsteinstr.");
        break;
    }
    case 189371:
    {
        returnValue = F("Klemmstr.");
        break;
    }
    case 189372:
    {
        returnValue = F("Klempau Kindergarten Spielplatz");
        break;
    }
    case 189373:
    {
        returnValue = F("Klempauer Str.");
        break;
    }
    case 189374:
    {
        returnValue = F("Klempbusch");
        break;
    }
    case 189375:
    {
        returnValue = F("Klempelsweg");
        break;
    }
    case 189376:
    {
        returnValue = F("Klempenow");
        break;
    }
    case 189377:
    {
        returnValue = F("Klemperhagen");
        break;
    }
    case 189378:
    {
        returnValue = F("Klempner-Siedlung");
        break;
    }
    case 189379:
    {
        returnValue = F("Klempnergasse");
        break;
    }
    case 189380:
    {
        returnValue = F("Klempnertwete");
        break;
    }
    case 189381:
    {
        returnValue = F("Klempnerweg");
        break;
    }
    case 189382:
    {
        returnValue = F("Klempnitzwall");
        break;
    }
    case 189383:
    {
        returnValue = F("Klempowsiedlung");
        break;
    }
    case 189384:
    {
        returnValue = F("Klempowwall");
        break;
    }
    case 189385:
    {
        returnValue = F("Klempowweg");
        break;
    }
    case 189386:
    {
        returnValue = F("Klemsenstr.");
        break;
    }
    case 189387:
    {
        returnValue = F("Klemstein-Weg");
        break;
    }
    case 189388:
    {
        returnValue = F("Klenauer Str.");
        break;
    }
    case 189389:
    {
        returnValue = F("Klenauer Weg");
        break;
    }
    case 189390:
    {
        returnValue = F("Klendergarten");
        break;
    }
    case 189391:
    {
        returnValue = F("Klengelpark");
        break;
    }
    case 189392:
    {
        returnValue = F("Klengelweg");
        break;
    }
    case 189393:
    {
        returnValue = F("Klengenstr.");
        break;
    }
    case 189394:
    {
        returnValue = F("Klenges");
        break;
    }
    case 189395:
    {
        returnValue = F("Klengeweg");
        break;
    }
    case 189396:
    {
        returnValue = F("Klenkenborsteler Weg");
        break;
    }
    case 189397:
    {
        returnValue = F("Klenkendorf");
        break;
    }
    case 189398:
    {
        returnValue = F("Klenkenholzer Str.");
        break;
    }
    case 189399:
    {
        returnValue = F("Klenkenreute");
        break;
    }
    case 189400:
    {
        returnValue = F("Klenkertor");
        break;
    }
    case 189401:
    {
        returnValue = F("Klenmoorweg");
        break;
    }
    case 189402:
    {
        returnValue = F("Klennower Rundling");
        break;
    }
    case 189403:
    {
        returnValue = F("Klenower Str.");
        break;
    }
    case 189404:
    {
        returnValue = F("Klensbyer Str.");
        break;
    }
    case 189405:
    {
        returnValue = F("Klensbyer Weg");
        break;
    }
    case 189406:
    {
        returnValue = F("Klenterdeel");
        break;
    }
    case 189407:
    {
        returnValue = F("Klenz");
        break;
    }
    case 189408:
    {
        returnValue = F("Klenzebrücke");
        break;
    }
    case 189409:
    {
        returnValue = F("Klenzenhofer Weg");
        break;
    }
    case 189410:
    {
        returnValue = F("Klenzer Weg");
        break;
    }
    case 189411:
    {
        returnValue = F("Klenzestr.");
        break;
    }
    case 189412:
    {
        returnValue = F("Kleophastr.");
        break;
    }
    case 189413:
    {
        returnValue = F("Kleperweg");
        break;
    }
    case 189414:
    {
        returnValue = F("Kleppenklang");
        break;
    }
    case 189415:
    {
        returnValue = F("Klepper-Weg");
        break;
    }
    case 189416:
    {
        returnValue = F("Kleppergarten");
        break;
    }
    case 189417:
    {
        returnValue = F("Kleppergasse");
        break;
    }
    case 189418:
    {
        returnValue = F("Klepperhof");
        break;
    }
    case 189419:
    {
        returnValue = F("Klepperhöfe");
        break;
    }
    case 189420:
    {
        returnValue = F("Kleppersberg");
        break;
    }
    case 189421:
    {
        returnValue = F("Klepperschelle");
        break;
    }
    case 189422:
    {
        returnValue = F("Klepperstr.");
        break;
    }
    case 189423:
    {
        returnValue = F("Klepperteil");
        break;
    }
    case 189424:
    {
        returnValue = F("Klepperweg");
        break;
    }
    case 189425:
    {
        returnValue = F("Kleppgarten");
        break;
    }
    case 189426:
    {
        returnValue = F("Kleppingstr.");
        break;
    }
    case 189427:
    {
        returnValue = F("Kleppingweg");
        break;
    }
    case 189428:
    {
        returnValue = F("Kleppnerstr.");
        break;
    }
    case 189429:
    {
        returnValue = F("Kleppwiese");
        break;
    }
    case 189430:
    {
        returnValue = F("Klepsauer Str.");
        break;
    }
    case 189431:
    {
        returnValue = F("Klepserstr.");
        break;
    }
    case 189432:
    {
        returnValue = F("Kleptow");
        break;
    }
    case 189433:
    {
        returnValue = F("Klepzig-Raben");
        break;
    }
    case 189434:
    {
        returnValue = F("Klepziger Dorfstr.");
        break;
    }
    case 189435:
    {
        returnValue = F("Klepziger Feldstr.");
        break;
    }
    case 189436:
    {
        returnValue = F("Klepziger Hauptstr.");
        break;
    }
    case 189437:
    {
        returnValue = F("Klepziger Str.");
        break;
    }
    case 189438:
    {
        returnValue = F("Klepziger Weg");
        break;
    }
    case 189439:
    {
        returnValue = F("Kleringstr.");
        break;
    }
    case 189440:
    {
        returnValue = F("Klersbach");
        break;
    }
    case 189441:
    {
        returnValue = F("Klesberg");
        break;
    }
    case 189442:
    {
        returnValue = F("Klesbergstr.");
        break;
    }
    case 189443:
    {
        returnValue = F("Kleselbacherweg");
        break;
    }
    case 189444:
    {
        returnValue = F("Kleselsteinweg");
        break;
    }
    case 189445:
    {
        returnValue = F("Klesenmühle");
        break;
    }
    case 189446:
    {
        returnValue = F("Klesham");
        break;
    }
    case 189447:
    {
        returnValue = F("Klespe");
        break;
    }
    case 189448:
    {
        returnValue = F("Klessberg");
        break;
    }
    case 189449:
    {
        returnValue = F("Klessberger Weg");
        break;
    }
    case 189450:
    {
        returnValue = F("Klessener Str.");
        break;
    }
    case 189451:
    {
        returnValue = F("Klessestr.");
        break;
    }
    case 189452:
    {
        returnValue = F("Klessiner Str.");
        break;
    }
    case 189453:
    {
        returnValue = F("Klessing");
        break;
    }
    case 189454:
    {
        returnValue = F("Klessingstr.");
        break;
    }
    case 189455:
    {
        returnValue = F("Klessmannsweg");
        break;
    }
    case 189456:
    {
        returnValue = F("Kletschweg");
        break;
    }
    case 189457:
    {
        returnValue = F("Klettenberg");
        break;
    }
    case 189458:
    {
        returnValue = F("Klettenberger Hauptstr.");
        break;
    }
    case 189459:
    {
        returnValue = F("Klettenberger Weg");
        break;
    }
    case 189460:
    {
        returnValue = F("Klettenbergstr.");
        break;
    }
    case 189461:
    {
        returnValue = F("Klettenhöfle");
        break;
    }
    case 189462:
    {
        returnValue = F("Klettenweg");
        break;
    }
    case 189463:
    {
        returnValue = F("Kletterbaumweg");
        break;
    }
    case 189464:
    {
        returnValue = F("Klettergarten Liebethal");
        break;
    }
    case 189465:
    {
        returnValue = F("Klettergarten Treffpunkt Altstadt");
        break;
    }
    case 189466:
    {
        returnValue = F("Klettergebiet");
        break;
    }
    case 189467:
    {
        returnValue = F("Kletterpohl");
        break;
    }
    case 189468:
    {
        returnValue = F("Kletterpot");
        break;
    }
    case 189469:
    {
        returnValue = F("Kletterpoth");
        break;
    }
    case 189470:
    {
        returnValue = F("Kletterpothsgasse");
        break;
    }
    case 189471:
    {
        returnValue = F("Kletterstr.");
        break;
    }
    case 189472:
    {
        returnValue = F("Kletterzustieg");
        break;
    }
    case 189473:
    {
        returnValue = F("Klettgauer Str.");
        break;
    }
    case 189474:
    {
        returnValue = F("Klettgaustr.");
        break;
    }
    case 189475:
    {
        returnValue = F("Klettigshammer");
        break;
    }
    case 189476:
    {
        returnValue = F("Klettner");
        break;
    }
    case 189477:
    {
        returnValue = F("Klettstr.");
        break;
    }
    case 189478:
    {
        returnValue = F("Klettswiese");
        break;
    }
    case 189479:
    {
        returnValue = F("Klettwitzer Str.");
        break;
    }
    case 189480:
    {
        returnValue = F("Kletzener Str.");
        break;
    }
    case 189481:
    {
        returnValue = F("Kletzener Weg");
        break;
    }
    case 189482:
    {
        returnValue = F("Kletziner Str.");
        break;
    }
    case 189483:
    {
        returnValue = F("Kletziner Weg");
        break;
    }
    case 189484:
    {
        returnValue = F("Kletzker Weg");
        break;
    }
    case 189485:
    {
        returnValue = F("Kleuelshöhe");
        break;
    }
    case 189486:
    {
        returnValue = F("Kleukensweg");
        break;
    }
    case 189487:
    {
        returnValue = F("Kleukheimer Hauptstr.");
        break;
    }
    case 189488:
    {
        returnValue = F("Kleukheimer Str.");
        break;
    }
    case 189489:
    {
        returnValue = F("Kleusheimer Steinmicke");
        break;
    }
    case 189490:
    {
        returnValue = F("Klev");
        break;
    }
    case 189491:
    {
        returnValue = F("Klevchen");
        break;
    }
    case 189492:
    {
        returnValue = F("Klevelücke");
        break;
    }
    case 189493:
    {
        returnValue = F("Klevendeicher Chaussee");
        break;
    }
    case 189494:
    {
        returnValue = F("Klevenower Weg");
        break;
    }
    case 189495:
    {
        returnValue = F("Klevenowstr.");
        break;
    }
    case 189496:
    {
        returnValue = F("Klever Berg");
        break;
    }
    case 189497:
    {
        returnValue = F("Klever Platz");
        break;
    }
    case 189498:
    {
        returnValue = F("Klever Ring");
        break;
    }
    case 189499:
    {
        returnValue = F("Klever Str.");
        break;
    }
    case 189500:
    {
        returnValue = F("Klever Weg");
        break;
    }
    case 189501:
    {
        returnValue = F("Klever-Tor-Platz");
        break;
    }
    case 189502:
    {
        returnValue = F("Kleverberg");
        break;
    }
    case 189503:
    {
        returnValue = F("Klevergarten");
        break;
    }
    case 189504:
    {
        returnValue = F("Kleverkamp");
        break;
    }
    case 189505:
    {
        returnValue = F("Kleverkoppel");
        break;
    }
    case 189506:
    {
        returnValue = F("Kleverstücke");
        break;
    }
    case 189507:
    {
        returnValue = F("Klevesche Häuser");
        break;
    }
    case 189508:
    {
        returnValue = F("Klevescher Damm");
        break;
    }
    case 189509:
    {
        returnValue = F("Klevestr.");
        break;
    }
    case 189510:
    {
        returnValue = F("Klevinghauser Str.");
        break;
    }
    case 189511:
    {
        returnValue = F("Klevische Str.");
        break;
    }
    case 189512:
    {
        returnValue = F("Klevstr.");
        break;
    }
    case 189513:
    {
        returnValue = F("Kleweranger");
        break;
    }
    case 189514:
    {
        returnValue = F("Klewertweg");
        break;
    }
    case 189515:
    {
        returnValue = F("Klewitzstr.");
        break;
    }
    case 189516:
    {
        returnValue = F("Klewitzweg");
        break;
    }
    case 189517:
    {
        returnValue = F("Kley");
        break;
    }
    case 189518:
    {
        returnValue = F("Kleybrink");
        break;
    }
    case 189519:
    {
        returnValue = F("Kleygarten");
        break;
    }
    case 189520:
    {
        returnValue = F("Kleyhauerweg");
        break;
    }
    case 189521:
    {
        returnValue = F("Kleynmansstr.");
        break;
    }
    case 189522:
    {
        returnValue = F("Kleysche Str.");
        break;
    }
    case 189523:
    {
        returnValue = F("Kleystr.");
        break;
    }
    case 189524:
    {
        returnValue = F("Kleyweg");
        break;
    }
    case 189525:
    {
        returnValue = F("Kleßberg");
        break;
    }
    case 189526:
    {
        returnValue = F("Kleßheimer Weg");
        break;
    }
    case 189527:
    {
        returnValue = F("Klia- Aue- Jakobspilgerweg");
        break;
    }
    case 189528:
    {
        returnValue = F("Klickenweg");
        break;
    }
    case 189529:
    {
        returnValue = F("Kliebe");
        break;
    }
    case 189530:
    {
        returnValue = F("Kliebertstr.");
        break;
    }
    case 189531:
    {
        returnValue = F("Kliebig");
        break;
    }
    case 189532:
    {
        returnValue = F("Kliebigstr.");
        break;
    }
    case 189533:
    {
        returnValue = F("Kliebigweg");
        break;
    }
    case 189534:
    {
        returnValue = F("Kliedbruchstr.");
        break;
    }
    case 189535:
    {
        returnValue = F("Klief");
        break;
    }
    case 189536:
    {
        returnValue = F("Kliekener Aueweg");
        break;
    }
    case 189537:
    {
        returnValue = F("Kliekener Bahnhofstr.");
        break;
    }
    case 189538:
    {
        returnValue = F("Kliekener Rosenweg");
        break;
    }
    case 189539:
    {
        returnValue = F("Kliekener Schulstr.");
        break;
    }
    case 189540:
    {
        returnValue = F("Kliekener Weg");
        break;
    }
    case 189541:
    {
        returnValue = F("Kliemoorweg");
        break;
    }
    case 189542:
    {
        returnValue = F("Klienebergerplatz");
        break;
    }
    case 189543:
    {
        returnValue = F("Kliengasse");
        break;
    }
    case 189544:
    {
        returnValue = F("Klienstr.");
        break;
    }
    case 189545:
    {
        returnValue = F("Klierstr.");
        break;
    }
    case 189546:
    {
        returnValue = F("Kliestower Dorfstr.");
        break;
    }
    case 189547:
    {
        returnValue = F("Kliestower Wiesenweg");
        break;
    }
    case 189548:
    {
        returnValue = F("Klietzener Str.");
        break;
    }
    case 189549:
    {
        returnValue = F("Klietzer Fledermauspfad");
        break;
    }
    case 189550:
    {
        returnValue = F("Klietzer Weg");
        break;
    }
    case 189551:
    {
        returnValue = F("Klietznicker Weg");
        break;
    }
    case 189552:
    {
        returnValue = F("Kliever Str.");
        break;
    }
    case 189553:
    {
        returnValue = F("Kliewatzmaur");
        break;
    }
    case 189554:
    {
        returnValue = F("Kliff");
        break;
    }
    case 189555:
    {
        returnValue = F("Klifflandstr.");
        break;
    }
    case 189556:
    {
        returnValue = F("Kliffstr.");
        break;
    }
    case 189557:
    {
        returnValue = F("Kliffweg");
        break;
    }
    case 189558:
    {
        returnValue = F("Kliftstiege");
        break;
    }
    case 189559:
    {
        returnValue = F("Kliiriwai");
        break;
    }
    case 189560:
    {
        returnValue = F("Kliiwerfeen");
        break;
    }
    case 189561:
    {
        returnValue = F("Klimagarten der Universität Tübingen");
        break;
    }
    case 189562:
    {
        returnValue = F("Klimalehrpfad");
        break;
    }
    case 189563:
    {
        returnValue = F("Klimantweg");
        break;
    }
    case 189564:
    {
        returnValue = F("Klimberg");
        break;
    }
    case 189565:
    {
        returnValue = F("Klimmach");
        break;
    }
    case 189566:
    {
        returnValue = F("Klimmacher Str.");
        break;
    }
    case 189567:
    {
        returnValue = F("Klimmenstr.");
        break;
    }
    case 189568:
    {
        returnValue = F("Klimmerdingenstr.");
        break;
    }
    case 189569:
    {
        returnValue = F("Klimmerstr.");
        break;
    }
    case 189570:
    {
        returnValue = F("Klimmertweg");
        break;
    }
    case 189571:
    {
        returnValue = F("Klimpenstr.");
        break;
    }
    case 189572:
    {
        returnValue = F("Klimper Weg");
        break;
    }
    case 189573:
    {
        returnValue = F("Klimpstr.");
        break;
    }
    case 189574:
    {
        returnValue = F("Klinckenstieg");
        break;
    }
    case 189575:
    {
        returnValue = F("Klindkamp");
        break;
    }
    case 189576:
    {
        returnValue = F("Kling-Geräumt");
        break;
    }
    case 189577:
    {
        returnValue = F("Kling-Klang");
        break;
    }
    case 189578:
    {
        returnValue = F("Klingaer Str.");
        break;
    }
    case 189579:
    {
        returnValue = F("Klingbach");
        break;
    }
    case 189580:
    {
        returnValue = F("Klingbachbrücke");
        break;
    }
    case 189581:
    {
        returnValue = F("Klingbachstr.");
        break;
    }
    case 189582:
    {
        returnValue = F("Klingbarg");
        break;
    }
    case 189583:
    {
        returnValue = F("Klingbaumstr.");
        break;
    }
    case 189584:
    {
        returnValue = F("Klingberg");
        break;
    }
    case 189585:
    {
        returnValue = F("Klingberger Str.");
        break;
    }
    case 189586:
    {
        returnValue = F("Klingbergstr.");
        break;
    }
    case 189587:
    {
        returnValue = F("Klingboomweg");
        break;
    }
    case 189588:
    {
        returnValue = F("Klingbornweg");
        break;
    }
    case 189589:
    {
        returnValue = F("Klinge");
        break;
    }
    case 189590:
    {
        returnValue = F("Klinge Weg");
        break;
    }
    case 189591:
    {
        returnValue = F("Klingeberg");
        break;
    }
    case 189592:
    {
        returnValue = F("Klingelackerweg");
        break;
    }
    case 189593:
    {
        returnValue = F("Klingelbach");
        break;
    }
    case 189594:
    {
        returnValue = F("Klingelbachstr.");
        break;
    }
    case 189595:
    {
        returnValue = F("Klingelbachweg");
        break;
    }
    case 189596:
    {
        returnValue = F("Klingelbaumstr.");
        break;
    }
    case 189597:
    {
        returnValue = F("Klingelbendchen");
        break;
    }
    case 189598:
    {
        returnValue = F("Klingelberg");
        break;
    }
    case 189599:
    {
        returnValue = F("Klingelbergerstr.");
        break;
    }
    case 189600:
    {
        returnValue = F("Klingelbergstr.");
        break;
    }
    case 189601:
    {
        returnValue = F("Klingelbergweg");
        break;
    }
    case 189602:
    {
        returnValue = F("Klingelborn");
        break;
    }
    case 189603:
    {
        returnValue = F("Klingelborner Weg");
        break;
    }
    case 189604:
    {
        returnValue = F("Klingelbrink");
        break;
    }
    case 189605:
    {
        returnValue = F("Klingelbrunnenstr.");
        break;
    }
    case 189606:
    {
        returnValue = F("Klingelburgstr.");
        break;
    }
    case 189607:
    {
        returnValue = F("Klingeledobelweg");
        break;
    }
    case 189608:
    {
        returnValue = F("Klingeler Weg");
        break;
    }
    case 189609:
    {
        returnValue = F("Klingelfelsenweg");
        break;
    }
    case 189610:
    {
        returnValue = F("Klingelgarten");
        break;
    }
    case 189611:
    {
        returnValue = F("Klingelgasse");
        break;
    }
    case 189612:
    {
        returnValue = F("Klingelgärten");
        break;
    }
    case 189613:
    {
        returnValue = F("Klingelhalde");
        break;
    }
    case 189614:
    {
        returnValue = F("Klingelhecke");
        break;
    }
    case 189615:
    {
        returnValue = F("Klingelhoern");
        break;
    }
    case 189616:
    {
        returnValue = F("Klingelhüttenweg");
        break;
    }
    case 189617:
    {
        returnValue = F("Klingellohne");
        break;
    }
    case 189618:
    {
        returnValue = F("Klingelmatt");
        break;
    }
    case 189619:
    {
        returnValue = F("Klingelpark");
        break;
    }
    case 189620:
    {
        returnValue = F("Klingelrain");
        break;
    }
    case 189621:
    {
        returnValue = F("Klingelsberg");
        break;
    }
    case 189622:
    {
        returnValue = F("Klingelsgraben");
        break;
    }
    case 189623:
    {
        returnValue = F("Klingelslei");
        break;
    }
    case 189624:
    {
        returnValue = F("Klingelsporn");
        break;
    }
    case 189625:
    {
        returnValue = F("Klingelstr.");
        break;
    }
    case 189626:
    {
        returnValue = F("Klingelsweg");
        break;
    }
    case 189627:
    {
        returnValue = F("Klingeltalstr.");
        break;
    }
    case 189628:
    {
        returnValue = F("Klingeltunnel");
        break;
    }
    case 189629:
    {
        returnValue = F("Klingelweg");
        break;
    }
    case 189630:
    {
        returnValue = F("Klingelwegle");
        break;
    }
    case 189631:
    {
        returnValue = F("Klingelwiese");
        break;
    }
    case 189632:
    {
        returnValue = F("Klingelwiesenweg");
        break;
    }
    case 189633:
    {
        returnValue = F("Klingelüber");
        break;
    }
    case 189634:
    {
        returnValue = F("Klingemühle");
        break;
    }
    case 189635:
    {
        returnValue = F("Klingen");
        break;
    }
    case 189636:
    {
        returnValue = F("Klingen Museumspark");
        break;
    }
    case 189637:
    {
        returnValue = F("Klingenackersträßle");
        break;
    }
    case 189638:
    {
        returnValue = F("Klingenbacher Weg");
        break;
    }
    case 189639:
    {
        returnValue = F("Klingenbachstr.");
        break;
    }
    case 189640:
    {
        returnValue = F("Klingenbachtal Klammweg");
        break;
    }
    case 189641:
    {
        returnValue = F("Klingenbachweg");
        break;
    }
    case 189642:
    {
        returnValue = F("Klingenberg");
        break;
    }
    case 189643:
    {
        returnValue = F("Klingenberger Str.");
        break;
    }
    case 189644:
    {
        returnValue = F("Klingenberger Weg");
        break;
    }
    case 189645:
    {
        returnValue = F("Klingenbergsiedlung");
        break;
    }
    case 189646:
    {
        returnValue = F("Klingenbergstr.");
        break;
    }
    case 189647:
    {
        returnValue = F("Klingenbergweg");
        break;
    }
    case 189648:
    {
        returnValue = F("Klingenbrook");
        break;
    }
    case 189649:
    {
        returnValue = F("Klingenbrooker Weg");
        break;
    }
    case 189650:
    {
        returnValue = F("Klingenbruchstr.");
        break;
    }
    case 189651:
    {
        returnValue = F("Klingenbrunnen");
        break;
    }
    case 189652:
    {
        returnValue = F("Klingenbrunner Rachelsteig");
        break;
    }
    case 189653:
    {
        returnValue = F("Klingenbrunner Str.");
        break;
    }
    case 189654:
    {
        returnValue = F("Klingenbrunnstr.");
        break;
    }
    case 189655:
    {
        returnValue = F("Klingenburg");
        break;
    }
    case 189656:
    {
        returnValue = F("Klingenburger Str.");
        break;
    }
    case 189657:
    {
        returnValue = F("Klingenburger Weg");
        break;
    }
    case 189658:
    {
        returnValue = F("Klingenburgweg");
        break;
    }
    case 189659:
    {
        returnValue = F("Klingenbühl");
        break;
    }
    case 189660:
    {
        returnValue = F("Klingenderstr.");
        break;
    }
    case 189661:
    {
        returnValue = F("Klingendorfer Str.");
        break;
    }
    case 189662:
    {
        returnValue = F("Klingener Str.");
        break;
    }
    case 189663:
    {
        returnValue = F("Klingener Weg");
        break;
    }
    case 189664:
    {
        returnValue = F("Klingenfeld");
        break;
    }
    case 189665:
    {
        returnValue = F("Klingenfeldstr.");
        break;
    }
    case 189666:
    {
        returnValue = F("Klingenfeldweg");
        break;
    }
    case 189667:
    {
        returnValue = F("Klingenfelsstr.");
        break;
    }
    case 189668:
    {
        returnValue = F("Klingenfelsweg");
        break;
    }
    case 189669:
    {
        returnValue = F("Klingenflüsselweg");
        break;
    }
    case 189670:
    {
        returnValue = F("Klingengarten");
        break;
    }
    case 189671:
    {
        returnValue = F("Klingengasse");
        break;
    }
    case 189672:
    {
        returnValue = F("Klingengrabenweg");
        break;
    }
    case 189673:
    {
        returnValue = F("Klingengrund");
        break;
    }
    case 189674:
    {
        returnValue = F("Klingengäßle");
        break;
    }
    case 189675:
    {
        returnValue = F("Klingenhagen");
        break;
    }
    case 189676:
    {
        returnValue = F("Klingenhagener Str.");
        break;
    }
    case 189677:
    {
        returnValue = F("Klingenhainer Str.");
        break;
    }
    case 189678:
    {
        returnValue = F("Klingenhalde");
        break;
    }
    case 189679:
    {
        returnValue = F("Klingenhaldenweg");
        break;
    }
    case 189680:
    {
        returnValue = F("Klingenhauweg");
        break;
    }
    case 189681:
    {
        returnValue = F("Klingenheumatweg");
        break;
    }
    case 189682:
    {
        returnValue = F("Klingenhof");
        break;
    }
    case 189683:
    {
        returnValue = F("Klingenhofstr.");
        break;
    }
    case 189684:
    {
        returnValue = F("Klingenhohlweg");
        break;
    }
    case 189685:
    {
        returnValue = F("Klingenholzstr.");
        break;
    }
    case 189686:
    {
        returnValue = F("Klingenhub");
        break;
    }
    case 189687:
    {
        returnValue = F("Klingenhöhe");
        break;
    }
    case 189688:
    {
        returnValue = F("Klingenkopfweg");
        break;
    }
    case 189689:
    {
        returnValue = F("Klingenleite");
        break;
    }
    case 189690:
    {
        returnValue = F("Klingenleitenweg");
        break;
    }
    case 189691:
    {
        returnValue = F("Klingenmoor");
        break;
    }
    case 189692:
    {
        returnValue = F("Klingenpfad");
        break;
    }
    case 189693:
    {
        returnValue = F("Klingenplatz");
        break;
    }
    case 189694:
    {
        returnValue = F("Klingenrech");
        break;
    }
    case 189695:
    {
        returnValue = F("Klingensberg");
        break;
    }
    case 189696:
    {
        returnValue = F("Klingensbergerstr.");
        break;
    }
    case 189697:
    {
        returnValue = F("Klingenschlagweg");
        break;
    }
    case 189698:
    {
        returnValue = F("Klingenschütt");
        break;
    }
    case 189699:
    {
        returnValue = F("Klingenspornstr.");
        break;
    }
    case 189700:
    {
        returnValue = F("Klingensteige");
        break;
    }
    case 189701:
    {
        returnValue = F("Klingensteiner Str.");
        break;
    }
    case 189702:
    {
        returnValue = F("Klingensteinerweg");
        break;
    }
    case 189703:
    {
        returnValue = F("Klingenstr.");
        break;
    }
    case 189704:
    {
        returnValue = F("Klingensträßle");
        break;
    }
    case 189705:
    {
        returnValue = F("Klingentalstr.");
        break;
    }
    case 189706:
    {
        returnValue = F("Klingentalweg");
        break;
    }
    case 189707:
    {
        returnValue = F("Klingenteichstr.");
        break;
    }
    case 189708:
    {
        returnValue = F("Klingenteichweg");
        break;
    }
    case 189709:
    {
        returnValue = F("Klingenthaler Str.");
        break;
    }
    case 189710:
    {
        returnValue = F("Klingenthaler Weg");
        break;
    }
    case 189711:
    {
        returnValue = F("Klingentor - Passage");
        break;
    }
    case 189712:
    {
        returnValue = F("Klingentorbastei");
        break;
    }
    case 189713:
    {
        returnValue = F("Klingentorstr.");
        break;
    }
    case 189714:
    {
        returnValue = F("Klingenwaldstr.");
        break;
    }
    case 189715:
    {
        returnValue = F("Klingenwaldweg");
        break;
    }
    case 189716:
    {
        returnValue = F("Klingenweg");
        break;
    }
    case 189717:
    {
        returnValue = F("Klingenweiherpark");
        break;
    }
    case 189718:
    {
        returnValue = F("Klingenweiherstr.");
        break;
    }
    case 189719:
    {
        returnValue = F("Klingenwiese");
        break;
    }
    case 189720:
    {
        returnValue = F("Klingenwiesenweg");
        break;
    }
    case 189721:
    {
        returnValue = F("Klingenäcker");
        break;
    }
    case 189722:
    {
        returnValue = F("Klinger Gaste");
        break;
    }
    case 189723:
    {
        returnValue = F("Klinger Hohl");
        break;
    }
    case 189724:
    {
        returnValue = F("Klinger Saum");
        break;
    }
    case 189725:
    {
        returnValue = F("Klinger Str.");
        break;
    }
    case 189726:
    {
        returnValue = F("Klinger Weg");
        break;
    }
    case 189727:
    {
        returnValue = F("Klingerbachweg");
        break;
    }
    case 189728:
    {
        returnValue = F("Klingerfeldstr.");
        break;
    }
    case 189729:
    {
        returnValue = F("Klingermühle");
        break;
    }
    case 189730:
    {
        returnValue = F("Klingernweg");
        break;
    }
    case 189731:
    {
        returnValue = F("Klingersteig");
        break;
    }
    case 189732:
    {
        returnValue = F("Klingerstr.");
        break;
    }
    case 189733:
    {
        returnValue = F("Klingertweg");
        break;
    }
    case 189734:
    {
        returnValue = F("Klingerweg");
        break;
    }
    case 189735:
    {
        returnValue = F("Klingerweiher");
        break;
    }
    case 189736:
    {
        returnValue = F("Klingeschneise");
        break;
    }
    case 189737:
    {
        returnValue = F("Klingesteige");
        break;
    }
    case 189738:
    {
        returnValue = F("Klingestr.");
        break;
    }
    case 189739:
    {
        returnValue = F("Klingewalde");
        break;
    }
    case 189740:
    {
        returnValue = F("Klingewalder Höhe");
        break;
    }
    case 189741:
    {
        returnValue = F("Klingeweg");
        break;
    }
    case 189742:
    {
        returnValue = F("Klinggraben");
        break;
    }
    case 189743:
    {
        returnValue = F("Klinggrabenweg");
        break;
    }
    case 189744:
    {
        returnValue = F("Klinggässle");
        break;
    }
    case 189745:
    {
        returnValue = F("Klinghaldeweg");
        break;
    }
    case 189746:
    {
        returnValue = F("Klinghamer Weg");
        break;
    }
    case 189747:
    {
        returnValue = F("Klinghammerstr.");
        break;
    }
    case 189748:
    {
        returnValue = F("Klingiweg");
        break;
    }
    case 189749:
    {
        returnValue = F("Klinglbergweg");
        break;
    }
    case 189750:
    {
        returnValue = F("Klingleinsberg");
        break;
    }
    case 189751:
    {
        returnValue = F("Klinglerstr.");
        break;
    }
    case 189752:
    {
        returnValue = F("Klinglerweg");
        break;
    }
    case 189753:
    {
        returnValue = F("Klinglesweg");
        break;
    }
    case 189754:
    {
        returnValue = F("Klingleweg");
        break;
    }
    case 189755:
    {
        returnValue = F("Klingmoosweg");
        break;
    }
    case 189756:
    {
        returnValue = F("Klingmühler Str.");
        break;
    }
    case 189757:
    {
        returnValue = F("Klingnauer Str.");
        break;
    }
    case 189758:
    {
        returnValue = F("Klingrain");
        break;
    }
    case 189759:
    {
        returnValue = F("Klingsackerschneise");
        break;
    }
    case 189760:
    {
        returnValue = F("Klingsackerstr.");
        break;
    }
    case 189761:
    {
        returnValue = F("Klingsberg");
        break;
    }
    case 189762:
    {
        returnValue = F("Klingser Str.");
        break;
    }
    case 189763:
    {
        returnValue = F("Klingsporstr.");
        break;
    }
    case 189764:
    {
        returnValue = F("Klingster Weg");
        break;
    }
    case 189765:
    {
        returnValue = F("Klingstr.");
        break;
    }
    case 189766:
    {
        returnValue = F("Klingsweg");
        break;
    }
    case 189767:
    {
        returnValue = F("Klingweg");
        break;
    }
    case 189768:
    {
        returnValue = F("Klingwiesen");
        break;
    }
    case 189769:
    {
        returnValue = F("Klingwiesenstr.");
        break;
    }
    case 189770:
    {
        returnValue = F("Klingäcker");
        break;
    }
    case 189771:
    {
        returnValue = F("Klingäckerstr.");
        break;
    }
    case 189772:
    {
        returnValue = F("Klinik Park");
        break;
    }
    case 189773:
    {
        returnValue = F("Klinik für Psychiatrie und Psychotherapie Vitos - Standort Marburg");
        break;
    }
    case 189774:
    {
        returnValue = F("Klinik-Allee");
        break;
    }
    case 189775:
    {
        returnValue = F("Klinik-Park");
        break;
    }
    case 189776:
    {
        returnValue = F("Klinik-Waldpark");
        break;
    }
    case 189777:
    {
        returnValue = F("Klinikallee");
        break;
    }
    case 189778:
    {
        returnValue = F("Klinikpark");
        break;
    }
    case 189779:
    {
        returnValue = F("Klinikstr.");
        break;
    }
    case 189780:
    {
        returnValue = F("Klinikumallee");
        break;
    }
    case 189781:
    {
        returnValue = F("Klinikweg");
        break;
    }
    case 189782:
    {
        returnValue = F("Klink");
        break;
    }
    case 189783:
    {
        returnValue = F("Klinkberg");
        break;
    }
    case 189784:
    {
        returnValue = F("Klinkbornweg");
        break;
    }
    case 189785:
    {
        returnValue = F("Klinkdamm");
        break;
    }
    case 189786:
    {
        returnValue = F("Klinke");
        break;
    }
    case 189787:
    {
        returnValue = F("Klinkeburg");
        break;
    }
    case 189788:
    {
        returnValue = F("Klinkecken");
        break;
    }
    case 189789:
    {
        returnValue = F("Klinken");
        break;
    }
    case 189790:
    {
        returnValue = F("Klinken Wiese");
        break;
    }
    case 189791:
    {
        returnValue = F("Klinkenberg");
        break;
    }
    case 189792:
    {
        returnValue = F("Klinkenbergstr.");
        break;
    }
    case 189793:
    {
        returnValue = F("Klinkenbergsweg");
        break;
    }
    case 189794:
    {
        returnValue = F("Klinkenbruchschneise");
        break;
    }
    case 189795:
    {
        returnValue = F("Klinkener Str.");
        break;
    }
    case 189796:
    {
        returnValue = F("Klinkener Weg");
        break;
    }
    case 189797:
    {
        returnValue = F("Klinkenhagen");
        break;
    }
    case 189798:
    {
        returnValue = F("Klinkenhahn");
        break;
    }
    case 189799:
    {
        returnValue = F("Klinkenmühle");
        break;
    }
    case 189800:
    {
        returnValue = F("Klinkenmühler Str.");
        break;
    }
    case 189801:
    {
        returnValue = F("Klinkenmühler Weg");
        break;
    }
    case 189802:
    {
        returnValue = F("Klinkenstr.");
        break;
    }
    case 189803:
    {
        returnValue = F("Klinkentorgasse");
        break;
    }
    case 189804:
    {
        returnValue = F("Klinkenweg");
        break;
    }
    case 189805:
    {
        returnValue = F("Klinker");
        break;
    }
    case 189806:
    {
        returnValue = F("Klinker Mühle");
        break;
    }
    case 189807:
    {
        returnValue = F("Klinker Str.");
        break;
    }
    case 189808:
    {
        returnValue = F("Klinker Weg");
        break;
    }
    case 189809:
    {
        returnValue = F("Klinkerbogen");
        break;
    }
    case 189810:
    {
        returnValue = F("Klinkerhof");
        break;
    }
    case 189811:
    {
        returnValue = F("Klinkermühle");
        break;
    }
    case 189812:
    {
        returnValue = F("Klinkerstr.");
        break;
    }
    case 189813:
    {
        returnValue = F("Klinkersweg");
        break;
    }
    case 189814:
    {
        returnValue = F("Klinkertstr.");
        break;
    }
    case 189815:
    {
        returnValue = F("Klinkerweg");
        break;
    }
    case 189816:
    {
        returnValue = F("Klinkerwerkstr.");
        break;
    }
    case 189817:
    {
        returnValue = F("Klinkgasse");
        break;
    }
    case 189818:
    {
        returnValue = F("Klinkhaken");
        break;
    }
    case 189819:
    {
        returnValue = F("Klinkhamerstr.");
        break;
    }
    case 189820:
    {
        returnValue = F("Klinkhammer");
        break;
    }
    case 189821:
    {
        returnValue = F("Klinkhammerweg");
        break;
    }
    case 189822:
    {
        returnValue = F("Klinkheider Str.");
        break;
    }
    case 189823:
    {
        returnValue = F("Klinkrader Moorweg");
        break;
    }
    case 189824:
    {
        returnValue = F("Klinkrader Weg");
        break;
    }
    case 189825:
    {
        returnValue = F("Klinkredder");
        break;
    }
    case 189826:
    {
        returnValue = F("Klinkstr.");
        break;
    }
    case 189827:
    {
        returnValue = F("Klinkumer Hof");
        break;
    }
    case 189828:
    {
        returnValue = F("Klinkumer Str.");
        break;
    }
    case 189829:
    {
        returnValue = F("Klinkweg");
        break;
    }
    case 189830:
    {
        returnValue = F("Klint");
        break;
    }
    case 189831:
    {
        returnValue = F("Klintbarg");
        break;
    }
    case 189832:
    {
        returnValue = F("Klintbreite");
        break;
    }
    case 189833:
    {
        returnValue = F("Klintenberg");
        break;
    }
    case 189834:
    {
        returnValue = F("Klintener Weg");
        break;
    }
    case 189835:
    {
        returnValue = F("Klinter Kirchweg");
        break;
    }
    case 189836:
    {
        returnValue = F("Klinter Weg");
        break;
    }
    case 189837:
    {
        returnValue = F("Klinterweg");
        break;
    }
    case 189838:
    {
        returnValue = F("Klintgarten");
        break;
    }
    case 189839:
    {
        returnValue = F("Klintgasse");
        break;
    }
    case 189840:
    {
        returnValue = F("Klinthstr.");
        break;
    }
    case 189841:
    {
        returnValue = F("Klinthöfe");
        break;
    }
    case 189842:
    {
        returnValue = F("Klinthörn");
        break;
    }
    case 189843:
    {
        returnValue = F("Klintkamp");
        break;
    }
    case 189844:
    {
        returnValue = F("Klintmoor");
        break;
    }
    case 189845:
    {
        returnValue = F("Klintmühle");
        break;
    }
    case 189846:
    {
        returnValue = F("Klintstr.");
        break;
    }
    case 189847:
    {
        returnValue = F("Klintsweg");
        break;
    }
    case 189848:
    {
        returnValue = F("Klintum");
        break;
    }
    case 189849:
    {
        returnValue = F("Klintweg");
        break;
    }
    case 189850:
    {
        returnValue = F("Klintwinkel");
        break;
    }
    case 189851:
    {
        returnValue = F("Klipfelsau");
        break;
    }
    case 189852:
    {
        returnValue = F("Klipfelsbachweg");
        break;
    }
    case 189853:
    {
        returnValue = F("Klippe");
        break;
    }
    case 189854:
    {
        returnValue = F("Klippelgasse");
        break;
    }
    case 189855:
    {
        returnValue = F("Klippen");
        break;
    }
    case 189856:
    {
        returnValue = F("Klippenberg");
        break;
    }
    case 189857:
    {
        returnValue = F("Klippenbornweg");
        break;
    }
    case 189858:
    {
        returnValue = F("Klippenbrede");
        break;
    }
    case 189859:
    {
        returnValue = F("Klippenbreite");
        break;
    }
    case 189860:
    {
        returnValue = F("Klippeneckstr.");
        break;
    }
    case 189861:
    {
        returnValue = F("Klippeneckweg");
        break;
    }
    case 189862:
    {
        returnValue = F("Klippenei");
        break;
    }
    case 189863:
    {
        returnValue = F("Klippenrandweg");
        break;
    }
    case 189864:
    {
        returnValue = F("Klippenschwalbenweg");
        break;
    }
    case 189865:
    {
        returnValue = F("Klippenstr.");
        break;
    }
    case 189866:
    {
        returnValue = F("Klippentor");
        break;
    }
    case 189867:
    {
        returnValue = F("Klippenweg");
        break;
    }
    case 189868:
    {
        returnValue = F("Klippergasse");
        break;
    }
    case 189869:
    {
        returnValue = F("Klippergrabenweg");
        break;
    }
    case 189870:
    {
        returnValue = F("Klipperweg");
        break;
    }
    case 189871:
    {
        returnValue = F("Klipphausen");
        break;
    }
    case 189872:
    {
        returnValue = F("Klipphausener Str.");
        break;
    }
    case 189873:
    {
        returnValue = F("Klippkamp");
        break;
    }
    case 189874:
    {
        returnValue = F("Klippmoorweg");
        break;
    }
    case 189875:
    {
        returnValue = F("Klippschloß");
        break;
    }
    case 189876:
    {
        returnValue = F("Klippsteinschneise");
        break;
    }
    case 189877:
    {
        returnValue = F("Klippstr.");
        break;
    }
    case 189878:
    {
        returnValue = F("Klippweg");
        break;
    }
    case 189879:
    {
        returnValue = F("Klipsteinstr.");
        break;
    }
    case 189880:
    {
        returnValue = F("Klister");
        break;
    }
    case 189881:
    {
        returnValue = F("Klitschenbachweg");
        break;
    }
    case 189882:
    {
        returnValue = F("Klitschendorf");
        break;
    }
    case 189883:
    {
        returnValue = F("Klitscher Chaussee");
        break;
    }
    case 189884:
    {
        returnValue = F("Klitscher Weg");
        break;
    }
    case 189885:
    {
        returnValue = F("Klittener Str.");
        break;
    }
    case 189886:
    {
        returnValue = F("Klittener Weg");
        break;
    }
    case 189887:
    {
        returnValue = F("Klitzenburg");
        break;
    }
    case 189888:
    {
        returnValue = F("Klitzhaufe");
        break;
    }
    case 189889:
    {
        returnValue = F("Klitzingstr.");
        break;
    }
    case 189890:
    {
        returnValue = F("Klitzschenaer Str.");
        break;
    }
    case 189891:
    {
        returnValue = F("Klitzschener Str.");
        break;
    }
    case 189892:
    {
        returnValue = F("Klixbüller Chaussee");
        break;
    }
    case 189893:
    {
        returnValue = F("Klixdorfer Str.");
        break;
    }
    case 189894:
    {
        returnValue = F("Klixer Str.");
        break;
    }
    case 189895:
    {
        returnValue = F("Klixmühle");
        break;
    }
    case 189896:
    {
        returnValue = F("Klixmühle 3");
        break;
    }
    case 189897:
    {
        returnValue = F("Klkarawaldweg");
        break;
    }
    case 189898:
    {
        returnValue = F("Klobbicker Damm");
        break;
    }
    case 189899:
    {
        returnValue = F("Klobbicker Str.");
        break;
    }
    case 189900:
    {
        returnValue = F("Klobbotzstr.");
        break;
    }
    case 189901:
    {
        returnValue = F("Klobenberg");
        break;
    }
    case 189902:
    {
        returnValue = F("Klobenbergstr.");
        break;
    }
    case 189903:
    {
        returnValue = F("Klobenmühle");
        break;
    }
    case 189904:
    {
        returnValue = F("Klobenreuth");
        break;
    }
    case 189905:
    {
        returnValue = F("Klobikauer Str.");
        break;
    }
    case 189906:
    {
        returnValue = F("Klobikauer Weg");
        break;
    }
    case 189907:
    {
        returnValue = F("Klocken Busch");
        break;
    }
    case 189908:
    {
        returnValue = F("Klockenberg");
        break;
    }
    case 189909:
    {
        returnValue = F("Klockenbrink");
        break;
    }
    case 189910:
    {
        returnValue = F("Klockenfeldstr.");
        break;
    }
    case 189911:
    {
        returnValue = F("Klockengassenbreite");
        break;
    }
    case 189912:
    {
        returnValue = F("Klockenhäger Str.");
        break;
    }
    case 189913:
    {
        returnValue = F("Klockenpatt");
        break;
    }
    case 189914:
    {
        returnValue = F("Klockenstr.");
        break;
    }
    case 189915:
    {
        returnValue = F("Klocker Ufer");
        break;
    }
    case 189916:
    {
        returnValue = F("Klockergasse");
        break;
    }
    case 189917:
    {
        returnValue = F("Klockhstr.");
        break;
    }
    case 189918:
    {
        returnValue = F("Klockmann-Schneise");
        break;
    }
    case 189919:
    {
        returnValue = F("Klockow");
        break;
    }
    case 189920:
    {
        returnValue = F("Klockower Dorfstr.");
        break;
    }
    case 189921:
    {
        returnValue = F("Klockower Str.");
        break;
    }
    case 189922:
    {
        returnValue = F("Klockower Weg");
        break;
    }
    case 189923:
    {
        returnValue = F("Klockowstr.");
        break;
    }
    case 189924:
    {
        returnValue = F("Klockries");
        break;
    }
    case 189925:
    {
        returnValue = F("Klocks Weg");
        break;
    }
    case 189926:
    {
        returnValue = F("Klocksdorfer Str.");
        break;
    }
    case 189927:
    {
        returnValue = F("Klocksfohr");
        break;
    }
    case 189928:
    {
        returnValue = F("Klockstr.");
        break;
    }
    case 189929:
    {
        returnValue = F("Klockweg");
        break;
    }
    case 189930:
    {
        returnValue = F("Kloderwand");
        break;
    }
    case 189931:
    {
        returnValue = F("Klodnitzstr.");
        break;
    }
    case 189932:
    {
        returnValue = F("Klodtstr.");
        break;
    }
    case 189933:
    {
        returnValue = F("Klodtsweg");
        break;
    }
    case 189934:
    {
        returnValue = F("Kloeckelstr.");
        break;
    }
    case 189935:
    {
        returnValue = F("Kloedskamp");
        break;
    }
    case 189936:
    {
        returnValue = F("Kloepferweg");
        break;
    }
    case 189937:
    {
        returnValue = F("Kloiberweg");
        break;
    }
    case 189938:
    {
        returnValue = F("Klombeckstr.");
        break;
    }
    case 189939:
    {
        returnValue = F("Klompenkamp");
        break;
    }
    case 189940:
    {
        returnValue = F("Klompenmakerstr.");
        break;
    }
    case 189941:
    {
        returnValue = F("Klompenstr.");
        break;
    }
    case 189942:
    {
        returnValue = F("Klompenweg");
        break;
    }
    case 189943:
    {
        returnValue = F("Kloningerspark");
        break;
    }
    case 189944:
    {
        returnValue = F("Klonnerhof");
        break;
    }
    case 189945:
    {
        returnValue = F("Kloo-Ascher-Tal");
        break;
    }
    case 189946:
    {
        returnValue = F("Kloosenweg");
        break;
    }
    case 189947:
    {
        returnValue = F("Klootschießerring");
        break;
    }
    case 189948:
    {
        returnValue = F("Klopfengrabenweg");
        break;
    }
    case 189949:
    {
        returnValue = F("Klopfergasse");
        break;
    }
    case 189950:
    {
        returnValue = F("Klopferlweg");
        break;
    }
    case 189951:
    {
        returnValue = F("Klopfeweg");
        break;
    }
    case 189952:
    {
        returnValue = F("Klopfgasse");
        break;
    }
    case 189953:
    {
        returnValue = F("Klopfhofstr.");
        break;
    }
    case 189954:
    {
        returnValue = F("Klopfingerstr.");
        break;
    }
    case 189955:
    {
        returnValue = F("Klopfleischstr.");
        break;
    }
    case 189956:
    {
        returnValue = F("Klophaus");
        break;
    }
    case 189957:
    {
        returnValue = F("Klopp");
        break;
    }
    case 189958:
    {
        returnValue = F("Kloppanstr.");
        break;
    }
    case 189959:
    {
        returnValue = F("Kloppberg");
        break;
    }
    case 189960:
    {
        returnValue = F("Kloppbergstr.");
        break;
    }
    case 189961:
    {
        returnValue = F("Kloppenburg");
        break;
    }
    case 189962:
    {
        returnValue = F("Kloppenburg-West");
        break;
    }
    case 189963:
    {
        returnValue = F("Kloppenburger Str.");
        break;
    }
    case 189964:
    {
        returnValue = F("Kloppenburgstr.");
        break;
    }
    case 189965:
    {
        returnValue = F("Kloppendiek");
        break;
    }
    case 189966:
    {
        returnValue = F("Kloppenheimer Pfad");
        break;
    }
    case 189967:
    {
        returnValue = F("Kloppgasse");
        break;
    }
    case 189968:
    {
        returnValue = F("Klopping");
        break;
    }
    case 189969:
    {
        returnValue = F("Kloppstr.");
        break;
    }
    case 189970:
    {
        returnValue = F("Kloppwaldstr.");
        break;
    }
    case 189971:
    {
        returnValue = F("Kloppweg");
        break;
    }
    case 189972:
    {
        returnValue = F("Klopriesstr.");
        break;
    }
    case 189973:
    {
        returnValue = F("Klopstockstr.");
        break;
    }
    case 189974:
    {
        returnValue = F("Klopstockweg");
        break;
    }
    case 189975:
    {
        returnValue = F("Klopstr.");
        break;
    }
    case 189976:
    {
        returnValue = F("Klosberg");
        break;
    }
    case 189977:
    {
        returnValue = F("Klosbremm");
        break;
    }
    case 189978:
    {
        returnValue = F("Kloschwitzer Allee");
        break;
    }
    case 189979:
    {
        returnValue = F("Kloschwitzer Grund");
        break;
    }
    case 189980:
    {
        returnValue = F("Kloschwitzer Hauptstr.");
        break;
    }
    case 189981:
    {
        returnValue = F("Kloschwitzer Str.");
        break;
    }
    case 189982:
    {
        returnValue = F("Klose");
        break;
    }
    case 189983:
    {
        returnValue = F("Klosengartenstr.");
        break;
    }
    case 189984:
    {
        returnValue = F("Klosengasse");
        break;
    }
    case 189985:
    {
        returnValue = F("Klosenkamp");
        break;
    }
    case 189986:
    {
        returnValue = F("Klosenkampstr.");
        break;
    }
    case 189987:
    {
        returnValue = F("Klosestr.");
        break;
    }
    case 189988:
    {
        returnValue = F("Kloseweg");
        break;
    }
    case 189989:
    {
        returnValue = F("Klosfuhr");
        break;
    }
    case 189990:
    {
        returnValue = F("Klosfuhrstr.");
        break;
    }
    case 189991:
    {
        returnValue = F("Kloshaus");
        break;
    }
    case 189992:
    {
        returnValue = F("Klosheck");
        break;
    }
    case 189993:
    {
        returnValue = F("Klossengasse");
        break;
    }
    case 189994:
    {
        returnValue = F("Klostenstr.");
        break;
    }
    case 189995:
    {
        returnValue = F("Kloster");
        break;
    }
    case 189996:
    {
        returnValue = F("Kloster Benden");
        break;
    }
    case 189997:
    {
        returnValue = F("Kloster Burbach");
        break;
    }
    case 189998:
    {
        returnValue = F("Kloster Falkenhagen");
        break;
    }
    case 189999:
    {
        returnValue = F("Kloster Landweg");
        break;
    }
    case 190000:
    {
        returnValue = F("Kloster Lüne");
        break;
    }
    case 190001:
    {
        returnValue = F("Kloster Maria Reuthin");
        break;
    }
    case 190002:
    {
        returnValue = F("Kloster Marienthal");
        break;
    }
    case 190003:
    {
        returnValue = F("Kloster Marienweiher");
        break;
    }
    case 190004:
    {
        returnValue = F("Kloster Muhde");
        break;
    }
    case 190005:
    {
        returnValue = F("Kloster Park");
        break;
    }
    case 190006:
    {
        returnValue = F("Kloster Schmerlenbach");
        break;
    }
    case 190007:
    {
        returnValue = F("Kloster Sielmönken");
        break;
    }
    case 190008:
    {
        returnValue = F("Kloster St. Georg");
        break;
    }
    case 190009:
    {
        returnValue = F("Kloster Steinfeld");
        break;
    }
    case 190010:
    {
        returnValue = F("Kloster Sulzer Str.");
        break;
    }
    case 190011:
    {
        returnValue = F("Kloster-Banz-Str.");
        break;
    }
    case 190012:
    {
        returnValue = F("Kloster-Berggarten");
        break;
    }
    case 190013:
    {
        returnValue = F("Kloster-Deutz-Str.");
        break;
    }
    case 190014:
    {
        returnValue = F("Kloster-Eberbach-Str.");
        break;
    }
    case 190015:
    {
        returnValue = F("Kloster-Ebrach-Str.");
        break;
    }
    case 190016:
    {
        returnValue = F("Kloster-Heilig-Kreuz-Str.");
        break;
    }
    case 190017:
    {
        returnValue = F("Kloster-Helfta-Weg");
        break;
    }
    case 190018:
    {
        returnValue = F("Kloster-Langen-Str.");
        break;
    }
    }
    return returnValue;
}
