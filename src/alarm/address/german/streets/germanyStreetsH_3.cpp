#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameH3(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 140014:
    {
        returnValue = F("Henning-Schmeil-Weg");
        break;
    }
    case 140015:
    {
        returnValue = F("Henning-Storm-Str.");
        break;
    }
    case 140016:
    {
        returnValue = F("Henning-von-Tresckow-Weg");
        break;
    }
    case 140017:
    {
        returnValue = F("Henningen");
        break;
    }
    case 140018:
    {
        returnValue = F("Henningholz");
        break;
    }
    case 140019:
    {
        returnValue = F("Henningsfeld");
        break;
    }
    case 140020:
    {
        returnValue = F("Henningsgasse");
        break;
    }
    case 140021:
    {
        returnValue = F("Henningsleber Hauptstr.");
        break;
    }
    case 140022:
    {
        returnValue = F("Henningsleber Weg");
        break;
    }
    case 140023:
    {
        returnValue = F("Henningsoll");
        break;
    }
    case 140024:
    {
        returnValue = F("Henningstege");
        break;
    }
    case 140025:
    {
        returnValue = F("Henningstr.");
        break;
    }
    case 140026:
    {
        returnValue = F("Henningsweg");
        break;
    }
    case 140027:
    {
        returnValue = F("Hennistr.");
        break;
    }
    case 140028:
    {
        returnValue = F("Hennrichstr.");
        break;
    }
    case 140029:
    {
        returnValue = F("Hennrichweg");
        break;
    }
    case 140030:
    {
        returnValue = F("Hennschberg");
        break;
    }
    case 140031:
    {
        returnValue = F("Hennstedt");
        break;
    }
    case 140032:
    {
        returnValue = F("Hennstedter Str.");
        break;
    }
    case 140033:
    {
        returnValue = F("Hennstedter Weg");
        break;
    }
    case 140034:
    {
        returnValue = F("Hennteichstr.");
        break;
    }
    case 140035:
    {
        returnValue = F("Hennthal");
        break;
    }
    case 140036:
    {
        returnValue = F("Hennweilerstr.");
        break;
    }
    case 140037:
    {
        returnValue = F("Hennweilerweg");
        break;
    }
    case 140038:
    {
        returnValue = F("Hennwischen");
        break;
    }
    case 140039:
    {
        returnValue = F("Henri-Arnaud-Platz");
        break;
    }
    case 140040:
    {
        returnValue = F("Henri-Arnaud-Str.");
        break;
    }
    case 140041:
    {
        returnValue = F("Henri-Arnaud-Weg");
        break;
    }
    case 140042:
    {
        returnValue = F("Henri-Barbusse-Str.");
        break;
    }
    case 140043:
    {
        returnValue = F("Henri-Duffaut-Str.");
        break;
    }
    case 140044:
    {
        returnValue = F("Henri-Dunant-Allee");
        break;
    }
    case 140045:
    {
        returnValue = F("Henri-Dunant-Platz");
        break;
    }
    case 140046:
    {
        returnValue = F("Henri-Dunant-Str.");
        break;
    }
    case 140047:
    {
        returnValue = F("Henri-Dunant-Weg");
        break;
    }
    case 140048:
    {
        returnValue = F("Henri-Durand-Weg");
        break;
    }
    case 140049:
    {
        returnValue = F("Henri-Marteau-Platz");
        break;
    }
    case 140050:
    {
        returnValue = F("Henri-Matisse-Weg");
        break;
    }
    case 140051:
    {
        returnValue = F("Henri-Nannen-Platz");
        break;
    }
    case 140052:
    {
        returnValue = F("Henri-Spaak-Str.");
        break;
    }
    case 140053:
    {
        returnValue = F("Henrich-Deetjen-Str.");
        break;
    }
    case 140054:
    {
        returnValue = F("Henrich-Ellenberger-Weg");
        break;
    }
    case 140055:
    {
        returnValue = F("Henrich-Valck-Str.");
        break;
    }
    case 140056:
    {
        returnValue = F("Henrichenburger Str.");
        break;
    }
    case 140057:
    {
        returnValue = F("Henrichs-Allee");
        break;
    }
    case 140058:
    {
        returnValue = F("Henrichshütte");
        break;
    }
    case 140059:
    {
        returnValue = F("Henrichshütte Wendeschleife");
        break;
    }
    case 140060:
    {
        returnValue = F("Henrichsstr.");
        break;
    }
    case 140061:
    {
        returnValue = F("Henrichstal");
        break;
    }
    case 140062:
    {
        returnValue = F("Henricusstr.");
        break;
    }
    case 140063:
    {
        returnValue = F("Henrietta-Szold-Str.");
        break;
    }
    case 140064:
    {
        returnValue = F("Henriette-Brey-Str.");
        break;
    }
    case 140065:
    {
        returnValue = F("Henriette-Breymann-Str.");
        break;
    }
    case 140066:
    {
        returnValue = F("Henriette-Davidis-Weg");
        break;
    }
    case 140067:
    {
        returnValue = F("Henriette-Feuerbach-Str.");
        break;
    }
    case 140068:
    {
        returnValue = F("Henriette-Frölich-Str.");
        break;
    }
    case 140069:
    {
        returnValue = F("Henriette-Fürth-Str.");
        break;
    }
    case 140070:
    {
        returnValue = F("Henriette-Hezel-Str.");
        break;
    }
    case 140071:
    {
        returnValue = F("Henriette-Jügel-Str.");
        break;
    }
    case 140072:
    {
        returnValue = F("Henriette-Lott-Weg");
        break;
    }
    case 140073:
    {
        returnValue = F("Henriette-Sellnow-Str.");
        break;
    }
    case 140074:
    {
        returnValue = F("Henriette-Sennhenn-Str.");
        break;
    }
    case 140075:
    {
        returnValue = F("Henriette-Sontag-Str.");
        break;
    }
    case 140076:
    {
        returnValue = F("Henriette-von-Noel-Str.");
        break;
    }
    case 140077:
    {
        returnValue = F("Henriettenhof");
        break;
    }
    case 140078:
    {
        returnValue = F("Henriettenhofer Str.");
        break;
    }
    case 140079:
    {
        returnValue = F("Henriettenring");
        break;
    }
    case 140080:
    {
        returnValue = F("Henriettenstr.");
        break;
    }
    case 140081:
    {
        returnValue = F("Henriettenthal");
        break;
    }
    case 140082:
    {
        returnValue = F("Henriettenthaler Str.");
        break;
    }
    case 140083:
    {
        returnValue = F("Henriettenweg");
        break;
    }
    case 140084:
    {
        returnValue = F("Henrietter Str.");
        break;
    }
    case 140085:
    {
        returnValue = F("Henriettestr.");
        break;
    }
    case 140086:
    {
        returnValue = F("Henrik-Ibsen-Str.");
        break;
    }
    case 140087:
    {
        returnValue = F("Henrik-Moor-Weg");
        break;
    }
    case 140088:
    {
        returnValue = F("Henrikweg");
        break;
    }
    case 140089:
    {
        returnValue = F("Henrionstr.");
        break;
    }
    case 140090:
    {
        returnValue = F("Henriweg");
        break;
    }
    case 140091:
    {
        returnValue = F("Henry Dunant Str.");
        break;
    }
    case 140092:
    {
        returnValue = F("Henry-Dujol-Kreisel");
        break;
    }
    case 140093:
    {
        returnValue = F("Henry-Dunant-Ring");
        break;
    }
    case 140094:
    {
        returnValue = F("Henry-Dunant-Str.");
        break;
    }
    case 140095:
    {
        returnValue = F("Henry-Dunant-Weg");
        break;
    }
    case 140096:
    {
        returnValue = F("Henry-Ehrenberg-Platz");
        break;
    }
    case 140097:
    {
        returnValue = F("Henry-Ford-Ring");
        break;
    }
    case 140098:
    {
        returnValue = F("Henry-Ford-Str.");
        break;
    }
    case 140099:
    {
        returnValue = F("Henry-Garde-Str.");
        break;
    }
    case 140100:
    {
        returnValue = F("Henry-Goffard-Str.");
        break;
    }
    case 140101:
    {
        returnValue = F("Henry-Hahn-Str.");
        break;
    }
    case 140102:
    {
        returnValue = F("Henry-Hall-Str.");
        break;
    }
    case 140103:
    {
        returnValue = F("Henry-Harnischfeger-Str.");
        break;
    }
    case 140104:
    {
        returnValue = F("Henry-Heide-Str.");
        break;
    }
    case 140105:
    {
        returnValue = F("Henry-Henschen-Allee");
        break;
    }
    case 140106:
    {
        returnValue = F("Henry-Kaufmann-Str.");
        break;
    }
    case 140107:
    {
        returnValue = F("Henry-Miller-Str.");
        break;
    }
    case 140108:
    {
        returnValue = F("Henry-Moisand-Str.");
        break;
    }
    case 140109:
    {
        returnValue = F("Henry-Niestlé-Str.");
        break;
    }
    case 140110:
    {
        returnValue = F("Henry-Stanley-Weg");
        break;
    }
    case 140111:
    {
        returnValue = F("Henry-Stöver-Str.");
        break;
    }
    case 140112:
    {
        returnValue = F("Henry-Wetjen-Platz");
        break;
    }
    case 140113:
    {
        returnValue = F("Henry-van-de-Velde-Str.");
        break;
    }
    case 140114:
    {
        returnValue = F("Henryweg");
        break;
    }
    case 140115:
    {
        returnValue = F("Hensbachstr.");
        break;
    }
    case 140116:
    {
        returnValue = F("Hensbusch");
        break;
    }
    case 140117:
    {
        returnValue = F("Henschels Wald");
        break;
    }
    case 140118:
    {
        returnValue = F("Henschelstr.");
        break;
    }
    case 140119:
    {
        returnValue = F("Henschelweg");
        break;
    }
    case 140120:
    {
        returnValue = F("Henschenberg");
        break;
    }
    case 140121:
    {
        returnValue = F("Henschenbergweg");
        break;
    }
    case 140122:
    {
        returnValue = F("Henscher Str.");
        break;
    }
    case 140123:
    {
        returnValue = F("Hensches Wiese");
        break;
    }
    case 140124:
    {
        returnValue = F("Henschesgässchen");
        break;
    }
    case 140125:
    {
        returnValue = F("Henschweg");
        break;
    }
    case 140126:
    {
        returnValue = F("Henselbergstr.");
        break;
    }
    case 140127:
    {
        returnValue = F("Henselbühl");
        break;
    }
    case 140128:
    {
        returnValue = F("Henselingstr.");
        break;
    }
    case 140129:
    {
        returnValue = F("Henselinstr.");
        break;
    }
    case 140130:
    {
        returnValue = F("Henselstr.");
        break;
    }
    case 140131:
    {
        returnValue = F("Henseltweg");
        break;
    }
    case 140132:
    {
        returnValue = F("Hensenstr.");
        break;
    }
    case 140133:
    {
        returnValue = F("Hensenweg");
        break;
    }
    case 140134:
    {
        returnValue = F("Hensingerstr.");
        break;
    }
    case 140135:
    {
        returnValue = F("Hensoltstr.");
        break;
    }
    case 140136:
    {
        returnValue = F("Henstedt-Ulzburg-Ring");
        break;
    }
    case 140137:
    {
        returnValue = F("Henstedter Damm");
        break;
    }
    case 140138:
    {
        returnValue = F("Henstedter Str.");
        break;
    }
    case 140139:
    {
        returnValue = F("Henstedter Weg");
        break;
    }
    case 140140:
    {
        returnValue = F("Henstorfer Str.");
        break;
    }
    case 140141:
    {
        returnValue = F("Henterner Str.");
        break;
    }
    case 140142:
    {
        returnValue = F("Hentgesnaaf");
        break;
    }
    case 140143:
    {
        returnValue = F("Hentschelgasse");
        break;
    }
    case 140144:
    {
        returnValue = F("Hentschelstr.");
        break;
    }
    case 140145:
    {
        returnValue = F("Hentzenallee");
        break;
    }
    case 140146:
    {
        returnValue = F("Henzen Dyck");
        break;
    }
    case 140147:
    {
        returnValue = F("Henzen Kamp");
        break;
    }
    case 140148:
    {
        returnValue = F("Henzenborn");
        break;
    }
    case 140149:
    {
        returnValue = F("Henzenbuch");
        break;
    }
    case 140150:
    {
        returnValue = F("Henzendorfer Weg");
        break;
    }
    case 140151:
    {
        returnValue = F("Henzengasse");
        break;
    }
    case 140152:
    {
        returnValue = F("Henzenstr.");
        break;
    }
    case 140153:
    {
        returnValue = F("Henzestr.");
        break;
    }
    case 140154:
    {
        returnValue = F("Henzlerweg");
        break;
    }
    case 140155:
    {
        returnValue = F("Henßstr.");
        break;
    }
    case 140156:
    {
        returnValue = F("Hepachstr.");
        break;
    }
    case 140157:
    {
        returnValue = F("Hepbacher Str.");
        break;
    }
    case 140158:
    {
        returnValue = F("Hepberger Str.");
        break;
    }
    case 140159:
    {
        returnValue = F("Hepfengrabenstr.");
        break;
    }
    case 140160:
    {
        returnValue = F("Hepkestr.");
        break;
    }
    case 140161:
    {
        returnValue = F("Heppachbrücke");
        break;
    }
    case 140162:
    {
        returnValue = F("Heppacher Str.");
        break;
    }
    case 140163:
    {
        returnValue = F("Heppachweg");
        break;
    }
    case 140164:
    {
        returnValue = F("Heppdieler Str.");
        break;
    }
    case 140165:
    {
        returnValue = F("Heppdieler Weg");
        break;
    }
    case 140166:
    {
        returnValue = F("Heppegasse");
        break;
    }
    case 140167:
    {
        returnValue = F("Heppekausenstr.");
        break;
    }
    case 140168:
    {
        returnValue = F("Heppen-Türchen");
        break;
    }
    case 140169:
    {
        returnValue = F("Heppenberg");
        break;
    }
    case 140170:
    {
        returnValue = F("Heppenbuschweg");
        break;
    }
    case 140171:
    {
        returnValue = F("Heppenböschel");
        break;
    }
    case 140172:
    {
        returnValue = F("Heppendorfer Str.");
        break;
    }
    case 140173:
    {
        returnValue = F("Heppengasse");
        break;
    }
    case 140174:
    {
        returnValue = F("Heppenheimer Allee");
        break;
    }
    case 140175:
    {
        returnValue = F("Heppenheimer Str.");
        break;
    }
    case 140176:
    {
        returnValue = F("Heppenheimer Weg");
        break;
    }
    case 140177:
    {
        returnValue = F("Heppenring");
        break;
    }
    case 140178:
    {
        returnValue = F("Heppenrückenweg");
        break;
    }
    case 140179:
    {
        returnValue = F("Heppens");
        break;
    }
    case 140180:
    {
        returnValue = F("Heppenschwand");
        break;
    }
    case 140181:
    {
        returnValue = F("Heppenser Str.");
        break;
    }
    case 140182:
    {
        returnValue = F("Heppenstr.");
        break;
    }
    case 140183:
    {
        returnValue = F("Heppenweg");
        break;
    }
    case 140184:
    {
        returnValue = F("Heppeplatz");
        break;
    }
    case 140185:
    {
        returnValue = F("Hepper Str.");
        break;
    }
    case 140186:
    {
        returnValue = F("Hepper Weg");
        break;
    }
    case 140187:
    {
        returnValue = F("Hepperblick");
        break;
    }
    case 140188:
    {
        returnValue = F("Hepperichstr.");
        break;
    }
    case 140189:
    {
        returnValue = F("Hepperleweg");
        break;
    }
    case 140190:
    {
        returnValue = F("Heppertsweg");
        break;
    }
    case 140191:
    {
        returnValue = F("Heppich");
        break;
    }
    case 140192:
    {
        returnValue = F("Heppinger Str.");
        break;
    }
    case 140193:
    {
        returnValue = F("Heppingsen");
        break;
    }
    case 140194:
    {
        returnValue = F("Heppingserbach");
        break;
    }
    case 140195:
    {
        returnValue = F("Hepplergasse");
        break;
    }
    case 140196:
    {
        returnValue = F("Hepplerstr.");
        break;
    }
    case 140197:
    {
        returnValue = F("Heppmühlstr.");
        break;
    }
    case 140198:
    {
        returnValue = F("Heppstädt");
        break;
    }
    case 140199:
    {
        returnValue = F("Heppstädter Str.");
        break;
    }
    case 140200:
    {
        returnValue = F("Heppstädter Weg");
        break;
    }
    case 140201:
    {
        returnValue = F("Hepschinger Tunnel");
        break;
    }
    case 140202:
    {
        returnValue = F("Hepsisauer Steige");
        break;
    }
    case 140203:
    {
        returnValue = F("Hepstedter Str.");
        break;
    }
    case 140204:
    {
        returnValue = F("Heraeusstr.");
        break;
    }
    case 140205:
    {
        returnValue = F("Heraklithstr.");
        break;
    }
    case 140206:
    {
        returnValue = F("Herb");
        break;
    }
    case 140207:
    {
        returnValue = F("Herbacher Wald");
        break;
    }
    case 140208:
    {
        returnValue = F("Herbacher Weg");
        break;
    }
    case 140209:
    {
        returnValue = F("Herbachstr.");
        break;
    }
    case 140210:
    {
        returnValue = F("Herbartstr.");
        break;
    }
    case 140211:
    {
        returnValue = F("Herbartswinder Str.");
        break;
    }
    case 140212:
    {
        returnValue = F("Herbatswinder Weg");
        break;
    }
    case 140213:
    {
        returnValue = F("Herbeck");
        break;
    }
    case 140214:
    {
        returnValue = F("Herbecke");
        break;
    }
    case 140215:
    {
        returnValue = F("Herbecker Str.");
        break;
    }
    case 140216:
    {
        returnValue = F("Herbeckeweg");
        break;
    }
    case 140217:
    {
        returnValue = F("Herbeckweg");
        break;
    }
    case 140218:
    {
        returnValue = F("Herbelweg");
        break;
    }
    case 140219:
    {
        returnValue = F("Herbenerstr.");
        break;
    }
    case 140220:
    {
        returnValue = F("Herbensattelweg");
        break;
    }
    case 140221:
    {
        returnValue = F("Herberath");
        break;
    }
    case 140222:
    {
        returnValue = F("Herberather Weg");
        break;
    }
    case 140223:
    {
        returnValue = F("Herberfeld");
        break;
    }
    case 140224:
    {
        returnValue = F("Herbergasse");
        break;
    }
    case 140225:
    {
        returnValue = F("Herbergen");
        break;
    }
    case 140226:
    {
        returnValue = F("Herberger Feldstr.");
        break;
    }
    case 140227:
    {
        returnValue = F("Herberger Weg");
        break;
    }
    case 140228:
    {
        returnValue = F("Herbergerstr.");
        break;
    }
    case 140229:
    {
        returnValue = F("Herbergerweg");
        break;
    }
    case 140230:
    {
        returnValue = F("Herbergeweg");
        break;
    }
    case 140231:
    {
        returnValue = F("Herbergscher Pfad");
        break;
    }
    case 140232:
    {
        returnValue = F("Herbergsgasse");
        break;
    }
    case 140233:
    {
        returnValue = F("Herbergshöhe");
        break;
    }
    case 140234:
    {
        returnValue = F("Herbergskesweg");
        break;
    }
    case 140235:
    {
        returnValue = F("Herbergsmense");
        break;
    }
    case 140236:
    {
        returnValue = F("Herbergsstiege");
        break;
    }
    case 140237:
    {
        returnValue = F("Herbergsstr.");
        break;
    }
    case 140238:
    {
        returnValue = F("Herbergssträßle");
        break;
    }
    case 140239:
    {
        returnValue = F("Herbergstr.");
        break;
    }
    case 140240:
    {
        returnValue = F("Herbergsweg");
        break;
    }
    case 140241:
    {
        returnValue = F("Herbergweg");
        break;
    }
    case 140242:
    {
        returnValue = F("Herberhauser Str.");
        break;
    }
    case 140243:
    {
        returnValue = F("Herberichstr.");
        break;
    }
    case 140244:
    {
        returnValue = F("Herbermannstr.");
        break;
    }
    case 140245:
    {
        returnValue = F("Herberner Mersch");
        break;
    }
    case 140246:
    {
        returnValue = F("Herberner Str.");
        break;
    }
    case 140247:
    {
        returnValue = F("Herbers Kamp");
        break;
    }
    case 140248:
    {
        returnValue = F("Herbersberg");
        break;
    }
    case 140249:
    {
        returnValue = F("Herberstr.");
        break;
    }
    case 140250:
    {
        returnValue = F("Herbert Str.");
        break;
    }
    case 140251:
    {
        returnValue = F("Herbert-Albrecht-Str.");
        break;
    }
    case 140252:
    {
        returnValue = F("Herbert-Andreae-Str.");
        break;
    }
    case 140253:
    {
        returnValue = F("Herbert-Balzer-Str.");
        break;
    }
    case 140254:
    {
        returnValue = F("Herbert-Balzer-Weg");
        break;
    }
    case 140255:
    {
        returnValue = F("Herbert-Bangemann-Str.");
        break;
    }
    case 140256:
    {
        returnValue = F("Herbert-Beck-Anlage");
        break;
    }
    case 140257:
    {
        returnValue = F("Herbert-Behrens-Hangeler-Weg");
        break;
    }
    case 140258:
    {
        returnValue = F("Herbert-Böhme-Str.");
        break;
    }
    case 140259:
    {
        returnValue = F("Herbert-C.-Hoover-Str.");
        break;
    }
    case 140260:
    {
        returnValue = F("Herbert-Diener-Weg");
        break;
    }
    case 140261:
    {
        returnValue = F("Herbert-Dohnalek-Str.");
        break;
    }
    case 140262:
    {
        returnValue = F("Herbert-Dunkel-Str.");
        break;
    }
    case 140263:
    {
        returnValue = F("Herbert-Ebertz-Str.");
        break;
    }
    case 140264:
    {
        returnValue = F("Herbert-Ewe-Str.");
        break;
    }
    case 140265:
    {
        returnValue = F("Herbert-Falk-Str.");
        break;
    }
    case 140266:
    {
        returnValue = F("Herbert-Frank-Str.");
        break;
    }
    case 140267:
    {
        returnValue = F("Herbert-Fritze-Str.");
        break;
    }
    case 140268:
    {
        returnValue = F("Herbert-Gentzsch-Str.");
        break;
    }
    case 140269:
    {
        returnValue = F("Herbert-Goerlich-Platz");
        break;
    }
    case 140270:
    {
        returnValue = F("Herbert-Graf-Str.");
        break;
    }
    case 140271:
    {
        returnValue = F("Herbert-Gubba-Weg");
        break;
    }
    case 140272:
    {
        returnValue = F("Herbert-Heft-Str.");
        break;
    }
    case 140273:
    {
        returnValue = F("Herbert-Hellmann-Allee");
        break;
    }
    case 140274:
    {
        returnValue = F("Herbert-Heußler-Str.");
        break;
    }
    case 140275:
    {
        returnValue = F("Herbert-Hofmann-Str.");
        break;
    }
    case 140276:
    {
        returnValue = F("Herbert-Huster-Str.");
        break;
    }
    case 140277:
    {
        returnValue = F("Herbert-Isaac-Str.");
        break;
    }
    case 140278:
    {
        returnValue = F("Herbert-Karrenberg-Str.");
        break;
    }
    case 140279:
    {
        returnValue = F("Herbert-Kessel-Str.");
        break;
    }
    case 140280:
    {
        returnValue = F("Herbert-Klee-Weg");
        break;
    }
    case 140281:
    {
        returnValue = F("Herbert-Klose-Str.");
        break;
    }
    case 140282:
    {
        returnValue = F("Herbert-Kneitz-Str.");
        break;
    }
    case 140283:
    {
        returnValue = F("Herbert-Knüpffer-Str.");
        break;
    }
    case 140284:
    {
        returnValue = F("Herbert-Kunkel-Str.");
        break;
    }
    case 140285:
    {
        returnValue = F("Herbert-Körner-Weg");
        break;
    }
    case 140286:
    {
        returnValue = F("Herbert-Kühn-Str.");
        break;
    }
    case 140287:
    {
        returnValue = F("Herbert-Liebsch-Str.");
        break;
    }
    case 140288:
    {
        returnValue = F("Herbert-Ludwig-Str.");
        break;
    }
    case 140289:
    {
        returnValue = F("Herbert-Merker-Str.");
        break;
    }
    case 140290:
    {
        returnValue = F("Herbert-Meyer-Str.");
        break;
    }
    case 140291:
    {
        returnValue = F("Herbert-Michalke-Weg");
        break;
    }
    case 140292:
    {
        returnValue = F("Herbert-Müller-Platz");
        break;
    }
    case 140293:
    {
        returnValue = F("Herbert-Müller-Str.");
        break;
    }
    case 140294:
    {
        returnValue = F("Herbert-Müller-Weg");
        break;
    }
    case 140295:
    {
        returnValue = F("Herbert-Nolte-Platz");
        break;
    }
    case 140296:
    {
        returnValue = F("Herbert-Pohl-Weg");
        break;
    }
    case 140297:
    {
        returnValue = F("Herbert-Quandt-Allee");
        break;
    }
    case 140298:
    {
        returnValue = F("Herbert-Quandt-Str.");
        break;
    }
    case 140299:
    {
        returnValue = F("Herbert-Rauhut-Str.");
        break;
    }
    case 140300:
    {
        returnValue = F("Herbert-Rein-Str.");
        break;
    }
    case 140301:
    {
        returnValue = F("Herbert-Richter-Weg");
        break;
    }
    case 140302:
    {
        returnValue = F("Herbert-Riehle-Weg");
        break;
    }
    case 140303:
    {
        returnValue = F("Herbert-Ritze-Weg");
        break;
    }
    case 140304:
    {
        returnValue = F("Herbert-Roth-Str.");
        break;
    }
    case 140305:
    {
        returnValue = F("Herbert-Rubach-Str.");
        break;
    }
    case 140306:
    {
        returnValue = F("Herbert-Rübner-Str.");
        break;
    }
    case 140307:
    {
        returnValue = F("Herbert-Rüfer-Str.");
        break;
    }
    case 140308:
    {
        returnValue = F("Herbert-Rüfer-Weg");
        break;
    }
    case 140309:
    {
        returnValue = F("Herbert-Schneider-Str.");
        break;
    }
    case 140310:
    {
        returnValue = F("Herbert-Scholz-Str.");
        break;
    }
    case 140311:
    {
        returnValue = F("Herbert-Sehm-Str.");
        break;
    }
    case 140312:
    {
        returnValue = F("Herbert-Stauch-Str.");
        break;
    }
    case 140313:
    {
        returnValue = F("Herbert-Teuscher-Str.");
        break;
    }
    case 140314:
    {
        returnValue = F("Herbert-Thomsen-Weg");
        break;
    }
    case 140315:
    {
        returnValue = F("Herbert-Tschäpe-Str.");
        break;
    }
    case 140316:
    {
        returnValue = F("Herbert-Voß-Str.");
        break;
    }
    case 140317:
    {
        returnValue = F("Herbert-Walz-Weg");
        break;
    }
    case 140318:
    {
        returnValue = F("Herbert-Zill-Str.");
        break;
    }
    case 140319:
    {
        returnValue = F("Herbertinger Str.");
        break;
    }
    case 140320:
    {
        returnValue = F("Herberts-Weg");
        break;
    }
    case 140321:
    {
        returnValue = F("Herbertsacker");
        break;
    }
    case 140322:
    {
        returnValue = F("Herbertsgasse");
        break;
    }
    case 140323:
    {
        returnValue = F("Herbertshagen");
        break;
    }
    case 140324:
    {
        returnValue = F("Herbertshagener Str.");
        break;
    }
    case 140325:
    {
        returnValue = F("Herbertshainer Str.");
        break;
    }
    case 140326:
    {
        returnValue = F("Herbertsheide");
        break;
    }
    case 140327:
    {
        returnValue = F("Herbertshofen");
        break;
    }
    case 140328:
    {
        returnValue = F("Herbertshofener Str.");
        break;
    }
    case 140329:
    {
        returnValue = F("Herbertshäuser Str.");
        break;
    }
    case 140330:
    {
        returnValue = F("Herbertshöfe");
        break;
    }
    case 140331:
    {
        returnValue = F("Herbertskaul");
        break;
    }
    case 140332:
    {
        returnValue = F("Herbertsmühlweg");
        break;
    }
    case 140333:
    {
        returnValue = F("Herbertstr.");
        break;
    }
    case 140334:
    {
        returnValue = F("Herbesengasse");
        break;
    }
    case 140335:
    {
        returnValue = F("Herbichweg");
        break;
    }
    case 140336:
    {
        returnValue = F("Herbingstr.");
        break;
    }
    case 140337:
    {
        returnValue = F("Herbishofen");
        break;
    }
    case 140338:
    {
        returnValue = F("Herbishofener Str.");
        break;
    }
    case 140339:
    {
        returnValue = F("Herbisrieder Str.");
        break;
    }
    case 140340:
    {
        returnValue = F("Herbkestr.");
        break;
    }
    case 140341:
    {
        returnValue = F("Herblayer Str.");
        break;
    }
    case 140342:
    {
        returnValue = F("Herblingerstr.");
        break;
    }
    case 140343:
    {
        returnValue = F("Herblingerstr. / Lochgass / Sametgass");
        break;
    }
    case 140344:
    {
        returnValue = F("Herboldshof");
        break;
    }
    case 140345:
    {
        returnValue = F("Herboldshäuser Weg");
        break;
    }
    case 140346:
    {
        returnValue = F("Herboldstr.");
        break;
    }
    case 140347:
    {
        returnValue = F("Herboldweg");
        break;
    }
    case 140348:
    {
        returnValue = F("Herbolzheimer Pfad");
        break;
    }
    case 140349:
    {
        returnValue = F("Herbolzheimer Str.");
        break;
    }
    case 140350:
    {
        returnValue = F("Herbolzheimer Weg");
        break;
    }
    case 140351:
    {
        returnValue = F("Herbordstr.");
        break;
    }
    case 140352:
    {
        returnValue = F("Herborn");
        break;
    }
    case 140353:
    {
        returnValue = F("Herborner Berg");
        break;
    }
    case 140354:
    {
        returnValue = F("Herborner Hohlweg");
        break;
    }
    case 140355:
    {
        returnValue = F("Herborner Str.");
        break;
    }
    case 140356:
    {
        returnValue = F("Herborner Wanderweg");
        break;
    }
    case 140357:
    {
        returnValue = F("Herborner Weg");
        break;
    }
    case 140358:
    {
        returnValue = F("Herbort-von-Fritzlar-Str.");
        break;
    }
    case 140359:
    {
        returnValue = F("Herborth-Weg");
        break;
    }
    case 140360:
    {
        returnValue = F("Herbramer Str.");
        break;
    }
    case 140361:
    {
        returnValue = F("Herbrandtstr.");
        break;
    }
    case 140362:
    {
        returnValue = F("Herbrazhofen");
        break;
    }
    case 140363:
    {
        returnValue = F("Herbrazhofer Str.");
        break;
    }
    case 140364:
    {
        returnValue = F("Herbrechtinger Str.");
        break;
    }
    case 140365:
    {
        returnValue = F("Herbrechtsdorfer Str.");
        break;
    }
    case 140366:
    {
        returnValue = F("Herbrechtsweg");
        break;
    }
    case 140367:
    {
        returnValue = F("Herbreme");
        break;
    }
    case 140368:
    {
        returnValue = F("Herbringhauser Str.");
        break;
    }
    case 140369:
    {
        returnValue = F("Herbringskamp");
        break;
    }
    case 140370:
    {
        returnValue = F("Herbrink");
        break;
    }
    case 140371:
    {
        returnValue = F("Herbrook");
        break;
    }
    case 140372:
    {
        returnValue = F("Herbrumer Grenzweg");
        break;
    }
    case 140373:
    {
        returnValue = F("Herbscheider Weg");
        break;
    }
    case 140374:
    {
        returnValue = F("Herbsdorfer Str.");
        break;
    }
    case 140375:
    {
        returnValue = F("Herbser Str.");
        break;
    }
    case 140376:
    {
        returnValue = F("Herbsheimer Str.");
        break;
    }
    case 140377:
    {
        returnValue = F("Herbslebener Str.");
        break;
    }
    case 140378:
    {
        returnValue = F("Herbslebener Weg");
        break;
    }
    case 140379:
    {
        returnValue = F("Herbsleber Str.");
        break;
    }
    case 140380:
    {
        returnValue = F("Herbstallee");
        break;
    }
    case 140381:
    {
        returnValue = F("Herbstasternweg");
        break;
    }
    case 140382:
    {
        returnValue = F("Herbstbachtal");
        break;
    }
    case 140383:
    {
        returnValue = F("Herbstbenden");
        break;
    }
    case 140384:
    {
        returnValue = F("Herbstberger Weg");
        break;
    }
    case 140385:
    {
        returnValue = F("Herbstbogen");
        break;
    }
    case 140386:
    {
        returnValue = F("Herbstbreite");
        break;
    }
    case 140387:
    {
        returnValue = F("Herbstbrunnenweg");
        break;
    }
    case 140388:
    {
        returnValue = F("Herbsteiner Str.");
        break;
    }
    case 140389:
    {
        returnValue = F("Herbsteiner Weg");
        break;
    }
    case 140390:
    {
        returnValue = F("Herbstenbrühl");
        break;
    }
    case 140391:
    {
        returnValue = F("Herbstenhof");
        break;
    }
    case 140392:
    {
        returnValue = F("Herbstfeld");
        break;
    }
    case 140393:
    {
        returnValue = F("Herbstflecken");
        break;
    }
    case 140394:
    {
        returnValue = F("Herbstgang");
        break;
    }
    case 140395:
    {
        returnValue = F("Herbstgartenweg");
        break;
    }
    case 140396:
    {
        returnValue = F("Herbstgasse");
        break;
    }
    case 140397:
    {
        returnValue = F("Herbstgässchen");
        break;
    }
    case 140398:
    {
        returnValue = F("Herbsthäuser Str.");
        break;
    }
    case 140399:
    {
        returnValue = F("Herbsthäuser Weg");
        break;
    }
    case 140400:
    {
        returnValue = F("Herbstkamp");
        break;
    }
    case 140401:
    {
        returnValue = F("Herbstmühle");
        break;
    }
    case 140402:
    {
        returnValue = F("Herbstmühler Str.");
        break;
    }
    case 140403:
    {
        returnValue = F("Herbstnebelstr.");
        break;
    }
    case 140404:
    {
        returnValue = F("Herbstpadd");
        break;
    }
    case 140405:
    {
        returnValue = F("Herbstprinz-Str.");
        break;
    }
    case 140406:
    {
        returnValue = F("Herbstprinzkamp");
        break;
    }
    case 140407:
    {
        returnValue = F("Herbstprinzweg");
        break;
    }
    case 140408:
    {
        returnValue = F("Herbststallweg");
        break;
    }
    case 140409:
    {
        returnValue = F("Herbststeige");
        break;
    }
    case 140410:
    {
        returnValue = F("Herbststr.");
        break;
    }
    case 140411:
    {
        returnValue = F("Herbsttal");
        break;
    }
    case 140412:
    {
        returnValue = F("Herbstteilstr.");
        break;
    }
    case 140413:
    {
        returnValue = F("Herbstweg");
        break;
    }
    case 140414:
    {
        returnValue = F("Herbstweide");
        break;
    }
    case 140415:
    {
        returnValue = F("Herbstwiese");
        break;
    }
    case 140416:
    {
        returnValue = F("Herbstwiesen");
        break;
    }
    case 140417:
    {
        returnValue = F("Herbstwiesenstr.");
        break;
    }
    case 140418:
    {
        returnValue = F("Herbstwiesenweg");
        break;
    }
    case 140419:
    {
        returnValue = F("Herbstwiesenäcker");
        break;
    }
    case 140420:
    {
        returnValue = F("Herbstäckerweg");
        break;
    }
    case 140421:
    {
        returnValue = F("Herbstädter Str.");
        break;
    }
    case 140422:
    {
        returnValue = F("Herchenbach");
        break;
    }
    case 140423:
    {
        returnValue = F("Herchenbach Mitte");
        break;
    }
    case 140424:
    {
        returnValue = F("Herchenbacher Str.");
        break;
    }
    case 140425:
    {
        returnValue = F("Herchenbachstr.");
        break;
    }
    case 140426:
    {
        returnValue = F("Herchenberg");
        break;
    }
    case 140427:
    {
        returnValue = F("Herchenbergweg");
        break;
    }
    case 140428:
    {
        returnValue = F("Herchener Str.");
        break;
    }
    case 140429:
    {
        returnValue = F("Herchenhainer Str.");
        break;
    }
    case 140430:
    {
        returnValue = F("Herchenhainer Weg");
        break;
    }
    case 140431:
    {
        returnValue = F("Herchenrath");
        break;
    }
    case 140432:
    {
        returnValue = F("Herchenrather Str.");
        break;
    }
    case 140433:
    {
        returnValue = F("Herchenrode");
        break;
    }
    case 140434:
    {
        returnValue = F("Herchenrode-Brandau");
        break;
    }
    case 140435:
    {
        returnValue = F("Herchenroder Weg");
        break;
    }
    case 140436:
    {
        returnValue = F("Herchenrother Str.");
        break;
    }
    case 140437:
    {
        returnValue = F("Herchenstein");
        break;
    }
    case 140438:
    {
        returnValue = F("Herchersgarten");
        break;
    }
    case 140439:
    {
        returnValue = F("Herchheimerstr.");
        break;
    }
    case 140440:
    {
        returnValue = F("Herchsheimer Weg");
        break;
    }
    case 140441:
    {
        returnValue = F("Herchweilerweg");
        break;
    }
    case 140442:
    {
        returnValue = F("Herckenrathstr.");
        break;
    }
    case 140443:
    {
        returnValue = F("Herda-Vogel-Str.");
        break;
    }
    case 140444:
    {
        returnValue = F("Herdaer Str.");
        break;
    }
    case 140445:
    {
        returnValue = F("Herdaer Weg");
        break;
    }
    case 140446:
    {
        returnValue = F("Herdaische Str.");
        break;
    }
    case 140447:
    {
        returnValue = F("Herdbachstr.");
        break;
    }
    case 140448:
    {
        returnValue = F("Herdbrübel");
        break;
    }
    case 140449:
    {
        returnValue = F("Herdebuchweg");
        break;
    }
    case 140450:
    {
        returnValue = F("Herdecker Bach");
        break;
    }
    case 140451:
    {
        returnValue = F("Herdecker Str.");
        break;
    }
    case 140452:
    {
        returnValue = F("Herdegenstr.");
        break;
    }
    case 140453:
    {
        returnValue = F("Herdegert");
        break;
    }
    case 140454:
    {
        returnValue = F("Herdeichen");
        break;
    }
    case 140455:
    {
        returnValue = F("Herdenmoor");
        break;
    }
    case 140456:
    {
        returnValue = F("Herdenstr.");
        break;
    }
    case 140457:
    {
        returnValue = F("Herdenweg");
        break;
    }
    case 140458:
    {
        returnValue = F("Herdeper Feld");
        break;
    }
    case 140459:
    {
        returnValue = F("Herder Str.");
        break;
    }
    case 140460:
    {
        returnValue = F("Herderallee");
        break;
    }
    case 140461:
    {
        returnValue = F("Herderbachstr.");
        break;
    }
    case 140462:
    {
        returnValue = F("Herderbrücke");
        break;
    }
    case 140463:
    {
        returnValue = F("Herdererstr.");
        break;
    }
    case 140464:
    {
        returnValue = F("Herdergarten");
        break;
    }
    case 140465:
    {
        returnValue = F("Herdergasse");
        break;
    }
    case 140466:
    {
        returnValue = F("Herderhof");
        break;
    }
    case 140467:
    {
        returnValue = F("Herderings-Esch");
        break;
    }
    case 140468:
    {
        returnValue = F("Herderinweg");
        break;
    }
    case 140469:
    {
        returnValue = F("Herderlerchenweg");
        break;
    }
    case 140470:
    {
        returnValue = F("Herderner Str.");
        break;
    }
    case 140471:
    {
        returnValue = F("Herderplatz");
        break;
    }
    case 140472:
    {
        returnValue = F("Herderrichweg");
        break;
    }
    case 140473:
    {
        returnValue = F("Herderring");
        break;
    }
    case 140474:
    {
        returnValue = F("Herders Ruh'");
        break;
    }
    case 140475:
    {
        returnValue = F("Herderstr.");
        break;
    }
    case 140476:
    {
        returnValue = F("Herderweg");
        break;
    }
    case 140477:
    {
        returnValue = F("Herdestr.");
        break;
    }
    case 140478:
    {
        returnValue = F("Herdetor");
        break;
    }
    case 140479:
    {
        returnValue = F("Herdewies");
        break;
    }
    case 140480:
    {
        returnValue = F("Herdfeld");
        break;
    }
    case 140481:
    {
        returnValue = F("Herdfeldstr.");
        break;
    }
    case 140482:
    {
        returnValue = F("Herdgasse");
        break;
    }
    case 140483:
    {
        returnValue = F("Herdgassen-Geräumt");
        break;
    }
    case 140484:
    {
        returnValue = F("Herdgassäcker");
        break;
    }
    case 140485:
    {
        returnValue = F("Herdgäßle");
        break;
    }
    case 140486:
    {
        returnValue = F("Herdichsgartenstr.");
        break;
    }
    case 140487:
    {
        returnValue = F("Herdicker Kamp");
        break;
    }
    case 140488:
    {
        returnValue = F("Herdieckstr.");
        break;
    }
    case 140489:
    {
        returnValue = F("Herdingeröderweg");
        break;
    }
    case 140490:
    {
        returnValue = F("Herdinweg");
        break;
    }
    case 140491:
    {
        returnValue = F("Herdkamp");
        break;
    }
    case 140492:
    {
        returnValue = F("Herdlauchring");
        break;
    }
    case 140493:
    {
        returnValue = F("Herdle");
        break;
    }
    case 140494:
    {
        returnValue = F("Herdlehof");
        break;
    }
    case 140495:
    {
        returnValue = F("Herdlestr.");
        break;
    }
    case 140496:
    {
        returnValue = F("Herdleweg");
        break;
    }
    case 140497:
    {
        returnValue = F("Herdleäcker");
        break;
    }
    case 140498:
    {
        returnValue = F("Herdmähderweg");
        break;
    }
    case 140499:
    {
        returnValue = F("Herdorfer Str.");
        break;
    }
    case 140500:
    {
        returnValue = F("Herdringer Weg");
        break;
    }
    case 140501:
    {
        returnValue = F("Herdsee");
        break;
    }
    case 140502:
    {
        returnValue = F("Herdseeschneise");
        break;
    }
    case 140503:
    {
        returnValue = F("Herdsteig");
        break;
    }
    case 140504:
    {
        returnValue = F("Herdstr.");
        break;
    }
    case 140505:
    {
        returnValue = F("Herdternstr.");
        break;
    }
    case 140506:
    {
        returnValue = F("Herdternweg");
        break;
    }
    case 140507:
    {
        returnValue = F("Herdtlingshagen");
        break;
    }
    case 140508:
    {
        returnValue = F("Herdtlinsweilerstr.");
        break;
    }
    case 140509:
    {
        returnValue = F("Herdwasenstr.");
        break;
    }
    case 140510:
    {
        returnValue = F("Herdweg");
        break;
    }
    case 140511:
    {
        returnValue = F("Herdwegbuchenallee");
        break;
    }
    case 140512:
    {
        returnValue = F("Herdweghöfe");
        break;
    }
    case 140513:
    {
        returnValue = F("Herdwegäcker");
        break;
    }
    case 140514:
    {
        returnValue = F("Herebertusstr.");
        break;
    }
    case 140515:
    {
        returnValue = F("Herefortstr.");
        break;
    }
    case 140516:
    {
        returnValue = F("Herelse");
        break;
    }
    case 140517:
    {
        returnValue = F("Herenfridgäßchen");
        break;
    }
    case 140518:
    {
        returnValue = F("Herenfridstr.");
        break;
    }
    case 140519:
    {
        returnValue = F("Herentalsweg");
        break;
    }
    case 140520:
    {
        returnValue = F("Heresbachstr.");
        break;
    }
    case 140521:
    {
        returnValue = F("Heresbenden");
        break;
    }
    case 140522:
    {
        returnValue = F("Heretsrieder Str.");
        break;
    }
    case 140523:
    {
        returnValue = F("Herewinstr.");
        break;
    }
    case 140524:
    {
        returnValue = F("Herfaer Str.");
        break;
    }
    case 140525:
    {
        returnValue = F("Herfart");
        break;
    }
    case 140526:
    {
        returnValue = F("Herfatzer Hof");
        break;
    }
    case 140527:
    {
        returnValue = F("Herfeldskopf");
        break;
    }
    case 140528:
    {
        returnValue = F("Herfeldstr.");
        break;
    }
    case 140529:
    {
        returnValue = F("Herfener Str.");
        break;
    }
    case 140530:
    {
        returnValue = F("Herforder Heide");
        break;
    }
    case 140531:
    {
        returnValue = F("Herforder Str.");
        break;
    }
    case 140532:
    {
        returnValue = F("Herforder Weg");
        break;
    }
    case 140533:
    {
        returnValue = F("Herforster Pfad");
        break;
    }
    case 140534:
    {
        returnValue = F("Herforster Str.");
        break;
    }
    case 140535:
    {
        returnValue = F("Herfterath");
        break;
    }
    case 140536:
    {
        returnValue = F("Herfurth");
        break;
    }
    case 140537:
    {
        returnValue = F("Herfweg");
        break;
    }
    case 140538:
    {
        returnValue = F("Hergartener Buschweg");
        break;
    }
    case 140539:
    {
        returnValue = F("Hergartener Str.");
        break;
    }
    case 140540:
    {
        returnValue = F("Hergenhahnring");
        break;
    }
    case 140541:
    {
        returnValue = F("Hergenrother Str.");
        break;
    }
    case 140542:
    {
        returnValue = F("Hergenröderstr.");
        break;
    }
    case 140543:
    {
        returnValue = F("Hergenröderweg");
        break;
    }
    case 140544:
    {
        returnValue = F("Hergenrötherweg");
        break;
    }
    case 140545:
    {
        returnValue = F("Hergenstadt");
        break;
    }
    case 140546:
    {
        returnValue = F("Hergenstadterstr.");
        break;
    }
    case 140547:
    {
        returnValue = F("Hergensweiler Str.");
        break;
    }
    case 140548:
    {
        returnValue = F("Hergersbach");
        break;
    }
    case 140549:
    {
        returnValue = F("Hergersberger Weg");
        break;
    }
    case 140550:
    {
        returnValue = F("Hergersdorfer Str.");
        break;
    }
    case 140551:
    {
        returnValue = F("Hergershof");
        break;
    }
    case 140552:
    {
        returnValue = F("Hergershofer Str.");
        break;
    }
    case 140553:
    {
        returnValue = F("Hergershofer Weg");
        break;
    }
    case 140554:
    {
        returnValue = F("Hergershäuser Grenzschneise");
        break;
    }
    case 140555:
    {
        returnValue = F("Hergershäuser Str.");
        break;
    }
    case 140556:
    {
        returnValue = F("Hergershäuser Weg");
        break;
    }
    case 140557:
    {
        returnValue = F("Hergershäuser-Sickenhöfer Grenzschneise");
        break;
    }
    case 140558:
    {
        returnValue = F("Hergerstr.");
        break;
    }
    case 140559:
    {
        returnValue = F("Hergerswiesenweg");
        break;
    }
    case 140560:
    {
        returnValue = F("Hergeser Allee");
        break;
    }
    case 140561:
    {
        returnValue = F("Hergeser Weg");
        break;
    }
    case 140562:
    {
        returnValue = F("Hergeser Wiese");
        break;
    }
    case 140563:
    {
        returnValue = F("Hergeswald");
        break;
    }
    case 140564:
    {
        returnValue = F("Hergeten");
        break;
    }
    case 140565:
    {
        returnValue = F("Hergetsbachstr.");
        break;
    }
    case 140566:
    {
        returnValue = F("Hergoldinger Str.");
        break;
    }
    case 140567:
    {
        returnValue = F("Hergolshäuser Str.");
        break;
    }
    case 140568:
    {
        returnValue = F("Hergottsholzweg");
        break;
    }
    case 140569:
    {
        returnValue = F("Hergraben");
        break;
    }
    case 140570:
    {
        returnValue = F("Hergstbachstr.");
        break;
    }
    case 140571:
    {
        returnValue = F("Herhahn");
        break;
    }
    case 140572:
    {
        returnValue = F("Heribaltstr.");
        break;
    }
    case 140573:
    {
        returnValue = F("Heribert Carl Platz");
        break;
    }
    case 140574:
    {
        returnValue = F("Heribert-Beutel-Weg");
        break;
    }
    case 140575:
    {
        returnValue = F("Heribert-Schmid-Weg");
        break;
    }
    case 140576:
    {
        returnValue = F("Heribert-Stephan-Str.");
        break;
    }
    case 140577:
    {
        returnValue = F("Heribert-Teggers-Weg");
        break;
    }
    case 140578:
    {
        returnValue = F("Heribert-Unfried-Str.");
        break;
    }
    case 140579:
    {
        returnValue = F("Heribertstr.");
        break;
    }
    case 140580:
    {
        returnValue = F("Heribertsweg");
        break;
    }
    case 140581:
    {
        returnValue = F("Heribertusstr.");
        break;
    }
    case 140582:
    {
        returnValue = F("Heribotstr.");
        break;
    }
    case 140583:
    {
        returnValue = F("Heriburgstr.");
        break;
    }
    case 140584:
    {
        returnValue = F("Heriedenweg");
        break;
    }
    case 140585:
    {
        returnValue = F("Herigerstr.");
        break;
    }
    case 140586:
    {
        returnValue = F("Herigoldstr.");
        break;
    }
    case 140587:
    {
        returnValue = F("Heriloring");
        break;
    }
    case 140588:
    {
        returnValue = F("Heringer Fahrweg");
        break;
    }
    case 140589:
    {
        returnValue = F("Heringer Str.");
        break;
    }
    case 140590:
    {
        returnValue = F("Heringer Weg");
        break;
    }
    case 140591:
    {
        returnValue = F("Heringerloh");
        break;
    }
    case 140592:
    {
        returnValue = F("Heringhauser Str.");
        break;
    }
    case 140593:
    {
        returnValue = F("Heringhausstr.");
        break;
    }
    case 140594:
    {
        returnValue = F("Heringsander Str.");
        break;
    }
    case 140595:
    {
        returnValue = F("Heringsbachflügel");
        break;
    }
    case 140596:
    {
        returnValue = F("Heringsbronnengäßchen");
        break;
    }
    case 140597:
    {
        returnValue = F("Heringsdorfer Allee");
        break;
    }
    case 140598:
    {
        returnValue = F("Heringsdorfer Str.");
        break;
    }
    case 140599:
    {
        returnValue = F("Heringsdorfer Weg");
        break;
    }
    case 140600:
    {
        returnValue = F("Heringsfängerweg");
        break;
    }
    case 140601:
    {
        returnValue = F("Heringsgasse");
        break;
    }
    case 140602:
    {
        returnValue = F("Heringsgraben");
        break;
    }
    case 140603:
    {
        returnValue = F("Heringstr.");
        break;
    }
    case 140604:
    {
        returnValue = F("Heringweg");
        break;
    }
    case 140605:
    {
        returnValue = F("Heripertplatz");
        break;
    }
    case 140606:
    {
        returnValue = F("Heristalstr.");
        break;
    }
    case 140607:
    {
        returnValue = F("Heristiestr.");
        break;
    }
    case 140608:
    {
        returnValue = F("Herisösch");
        break;
    }
    case 140609:
    {
        returnValue = F("Herkamp");
        break;
    }
    case 140610:
    {
        returnValue = F("Herkamper Weg");
        break;
    }
    case 140611:
    {
        returnValue = F("Herkenboscher Str.");
        break;
    }
    case 140612:
    {
        returnValue = F("Herkenbuscher Weg");
        break;
    }
    case 140613:
    {
        returnValue = F("Herkendorfer Str.");
        break;
    }
    case 140614:
    {
        returnValue = F("Herkenegge");
        break;
    }
    case 140615:
    {
        returnValue = F("Herkener Str.");
        break;
    }
    case 140616:
    {
        returnValue = F("Herkenfelder Weg");
        break;
    }
    case 140617:
    {
        returnValue = F("Herkenrather Str.");
        break;
    }
    case 140618:
    {
        returnValue = F("Herkenrather Weg");
        break;
    }
    case 140619:
    {
        returnValue = F("Herkenrathstr.");
        break;
    }
    case 140620:
    {
        returnValue = F("Herkenser Str.");
        break;
    }
    case 140621:
    {
        returnValue = F("Herkensiefen");
        break;
    }
    case 140622:
    {
        returnValue = F("Herkenstr.");
        break;
    }
    case 140623:
    {
        returnValue = F("Herkentrup");
        break;
    }
    case 140624:
    {
        returnValue = F("Herkentruper Str.");
        break;
    }
    case 140625:
    {
        returnValue = F("Herkenweg");
        break;
    }
    case 140626:
    {
        returnValue = F("Herkestr.");
        break;
    }
    case 140627:
    {
        returnValue = F("Herkeswald");
        break;
    }
    case 140628:
    {
        returnValue = F("Herkheimer Weg");
        break;
    }
    case 140629:
    {
        returnValue = F("Herkingrade");
        break;
    }
    case 140630:
    {
        returnValue = F("Herknerstr.");
        break;
    }
    case 140631:
    {
        returnValue = F("Herkomer Park");
        break;
    }
    case 140632:
    {
        returnValue = F("Herkomerstr.");
        break;
    }
    case 140633:
    {
        returnValue = F("Herkomerweg");
        break;
    }
    case 140634:
    {
        returnValue = F("Herkommerstr.");
        break;
    }
    case 140635:
    {
        returnValue = F("Herksbach");
        break;
    }
    case 140636:
    {
        returnValue = F("Herksgrund");
        break;
    }
    case 140637:
    {
        returnValue = F("Herkulan-Schwaiger-Gasse");
        break;
    }
    case 140638:
    {
        returnValue = F("Herkulastr.");
        break;
    }
    case 140639:
    {
        returnValue = F("Herkules-Wartburg-Radweg");
        break;
    }
    case 140640:
    {
        returnValue = F("Herkulesblick");
        break;
    }
    case 140641:
    {
        returnValue = F("Herkulesstr.");
        break;
    }
    case 140642:
    {
        returnValue = F("Herkulesweg");
        break;
    }
    case 140643:
    {
        returnValue = F("Herlagrüner Str.");
        break;
    }
    case 140644:
    {
        returnValue = F("Herlar");
        break;
    }
    case 140645:
    {
        returnValue = F("Herlas");
        break;
    }
    case 140646:
    {
        returnValue = F("Herlasgrüner Str.");
        break;
    }
    case 140647:
    {
        returnValue = F("Herlazhofer Str.");
        break;
    }
    case 140648:
    {
        returnValue = F("Herlberg");
        break;
    }
    case 140649:
    {
        returnValue = F("Herlebacher Str.");
        break;
    }
    case 140650:
    {
        returnValue = F("Herleberg");
        break;
    }
    case 140651:
    {
        returnValue = F("Herleinstr.");
        break;
    }
    case 140652:
    {
        returnValue = F("Herlenbergstr.");
        break;
    }
    case 140653:
    {
        returnValue = F("Herlengasse");
        break;
    }
    case 140654:
    {
        returnValue = F("Herlenklinger Weg");
        break;
    }
    case 140655:
    {
        returnValue = F("Herler Weg");
        break;
    }
    case 140656:
    {
        returnValue = F("Herleshäuser Str.");
        break;
    }
    case 140657:
    {
        returnValue = F("Herlesries");
        break;
    }
    case 140658:
    {
        returnValue = F("Herlesstr.");
        break;
    }
    case 140659:
    {
        returnValue = F("Herlesweg");
        break;
    }
    case 140660:
    {
        returnValue = F("Herlesweiden");
        break;
    }
    case 140661:
    {
        returnValue = F("Herlheimer Str.");
        break;
    }
    case 140662:
    {
        returnValue = F("Herligenweg");
        break;
    }
    case 140663:
    {
        returnValue = F("Herlindenstr.");
        break;
    }
    case 140664:
    {
        returnValue = F("Herlinghausen");
        break;
    }
    case 140665:
    {
        returnValue = F("Herlinghauser Weg");
        break;
    }
    case 140666:
    {
        returnValue = F("Herlinghäuser Str.");
        break;
    }
    case 140667:
    {
        returnValue = F("Herlingsburgstr.");
        break;
    }
    case 140668:
    {
        returnValue = F("Herlinsbachweg");
        break;
    }
    case 140669:
    {
        returnValue = F("Herlinstr.");
        break;
    }
    case 140670:
    {
        returnValue = F("Herlovsen");
        break;
    }
    case 140671:
    {
        returnValue = F("Herlsbühlstr.");
        break;
    }
    case 140672:
    {
        returnValue = F("Herlsener Weg");
        break;
    }
    case 140673:
    {
        returnValue = F("Herm-Dienz-Str.");
        break;
    }
    case 140674:
    {
        returnValue = F("Herman-Almers-Weg");
        break;
    }
    case 140675:
    {
        returnValue = F("Herman-Dunker-Str.");
        break;
    }
    case 140676:
    {
        returnValue = F("Herman-Hesse-Weg");
        break;
    }
    case 140677:
    {
        returnValue = F("Herman-Quistorf-Weg");
        break;
    }
    case 140678:
    {
        returnValue = F("Herman-Riemschneider-Str.");
        break;
    }
    case 140679:
    {
        returnValue = F("Herman-Ruhe-Str.");
        break;
    }
    case 140680:
    {
        returnValue = F("Herman-ten-Wolde-Str.");
        break;
    }
    case 140681:
    {
        returnValue = F("Hermanisstr.");
        break;
    }
    case 140682:
    {
        returnValue = F("Hermann Dutt Weg");
        break;
    }
    case 140683:
    {
        returnValue = F("Hermann Eichblatt Siedlung");
        break;
    }
    case 140684:
    {
        returnValue = F("Hermann Gabelmann-Weg");
        break;
    }
    case 140685:
    {
        returnValue = F("Hermann II");
        break;
    }
    case 140686:
    {
        returnValue = F("Hermann Pisot Weg");
        break;
    }
    case 140687:
    {
        returnValue = F("Hermann R. Tempel-Platz");
        break;
    }
    case 140688:
    {
        returnValue = F("Hermann Wesseler Weg");
        break;
    }
    case 140689:
    {
        returnValue = F("Hermann- Allmers-Str.");
        break;
    }
    case 140690:
    {
        returnValue = F("Hermann-Abeking-Weg");
        break;
    }
    case 140691:
    {
        returnValue = F("Hermann-Abeln-Weg");
        break;
    }
    case 140692:
    {
        returnValue = F("Hermann-Abels-Str.");
        break;
    }
    case 140693:
    {
        returnValue = F("Hermann-Abendroth-Str.");
        break;
    }
    case 140694:
    {
        returnValue = F("Hermann-Aberle-Str.");
        break;
    }
    case 140695:
    {
        returnValue = F("Hermann-Ahrens-Brücke");
        break;
    }
    case 140696:
    {
        returnValue = F("Hermann-Albrecht-Str.");
        break;
    }
    case 140697:
    {
        returnValue = F("Hermann-Allmers-Str.");
        break;
    }
    case 140698:
    {
        returnValue = F("Hermann-Allmers-Weg");
        break;
    }
    case 140699:
    {
        returnValue = F("Hermann-Allstaedt-Weg");
        break;
    }
    case 140700:
    {
        returnValue = F("Hermann-Amos-Weg");
        break;
    }
    case 140701:
    {
        returnValue = F("Hermann-Andert-Str.");
        break;
    }
    case 140702:
    {
        returnValue = F("Hermann-Anton-Str.");
        break;
    }
    case 140703:
    {
        returnValue = F("Hermann-Aue-Str.");
        break;
    }
    case 140704:
    {
        returnValue = F("Hermann-Aurel-Zieger-Str.");
        break;
    }
    case 140705:
    {
        returnValue = F("Hermann-Aust-Str.");
        break;
    }
    case 140706:
    {
        returnValue = F("Hermann-Backfisch-Str.");
        break;
    }
    case 140707:
    {
        returnValue = F("Hermann-Bahlsen-Str.");
        break;
    }
    case 140708:
    {
        returnValue = F("Hermann-Balkhausen-Str.");
        break;
    }
    case 140709:
    {
        returnValue = F("Hermann-Balzer-Str.");
        break;
    }
    case 140710:
    {
        returnValue = F("Hermann-Bamann-Weg");
        break;
    }
    case 140711:
    {
        returnValue = F("Hermann-Bank-Str.");
        break;
    }
    case 140712:
    {
        returnValue = F("Hermann-Barnikol-Str.");
        break;
    }
    case 140713:
    {
        returnValue = F("Hermann-Barth-Weg");
        break;
    }
    case 140714:
    {
        returnValue = F("Hermann-Barthel-Str.");
        break;
    }
    case 140715:
    {
        returnValue = F("Hermann-Basten-Str.");
        break;
    }
    case 140716:
    {
        returnValue = F("Hermann-Bastert-Weg");
        break;
    }
    case 140717:
    {
        returnValue = F("Hermann-Bauer-Str.");
        break;
    }
    case 140718:
    {
        returnValue = F("Hermann-Baxmann-Weg");
        break;
    }
    case 140719:
    {
        returnValue = F("Hermann-Bebert-Str.");
        break;
    }
    case 140720:
    {
        returnValue = F("Hermann-Beecken-Weg");
        break;
    }
    case 140721:
    {
        returnValue = F("Hermann-Behrens-Str.");
        break;
    }
    case 140722:
    {
        returnValue = F("Hermann-Benies-Ring");
        break;
    }
    case 140723:
    {
        returnValue = F("Hermann-Berg-Str.");
        break;
    }
    case 140724:
    {
        returnValue = F("Hermann-Berger-Str.");
        break;
    }
    case 140725:
    {
        returnValue = F("Hermann-Berndt-Str.");
        break;
    }
    case 140726:
    {
        returnValue = F("Hermann-Berwanger-Str.");
        break;
    }
    case 140727:
    {
        returnValue = F("Hermann-Besemüller-Str.");
        break;
    }
    case 140728:
    {
        returnValue = F("Hermann-Bettels-Str.");
        break;
    }
    case 140729:
    {
        returnValue = F("Hermann-Beuttenmüller-Str.");
        break;
    }
    case 140730:
    {
        returnValue = F("Hermann-Biechele-Str.");
        break;
    }
    case 140731:
    {
        returnValue = F("Hermann-Billung-Str.");
        break;
    }
    case 140732:
    {
        returnValue = F("Hermann-Billung-Weg");
        break;
    }
    case 140733:
    {
        returnValue = F("Hermann-Birnbaum-Weg");
        break;
    }
    case 140734:
    {
        returnValue = F("Hermann-Blanke-Str.");
        break;
    }
    case 140735:
    {
        returnValue = F("Hermann-Blum-Str.");
        break;
    }
    case 140736:
    {
        returnValue = F("Hermann-Bläsche-Str.");
        break;
    }
    case 140737:
    {
        returnValue = F("Hermann-Bohne-Str.");
        break;
    }
    case 140738:
    {
        returnValue = F("Hermann-Bohnstedt-Str.");
        break;
    }
    case 140739:
    {
        returnValue = F("Hermann-Bopp-Str.");
        break;
    }
    case 140740:
    {
        returnValue = F("Hermann-Bote-Str.");
        break;
    }
    case 140741:
    {
        returnValue = F("Hermann-Boßdorf-Str.");
        break;
    }
    case 140742:
    {
        returnValue = F("Hermann-Brack-Str.");
        break;
    }
    case 140743:
    {
        returnValue = F("Hermann-Brand-Ring");
        break;
    }
    case 140744:
    {
        returnValue = F("Hermann-Brandes-Str.");
        break;
    }
    case 140745:
    {
        returnValue = F("Hermann-Brandi-Str.");
        break;
    }
    case 140746:
    {
        returnValue = F("Hermann-Brangs-Str.");
        break;
    }
    case 140747:
    {
        returnValue = F("Hermann-Braun-Str.");
        break;
    }
    case 140748:
    {
        returnValue = F("Hermann-Bresser-Str.");
        break;
    }
    case 140749:
    {
        returnValue = F("Hermann-Brettin-Str.");
        break;
    }
    case 140750:
    {
        returnValue = F("Hermann-Brian-Str.");
        break;
    }
    case 140751:
    {
        returnValue = F("Hermann-Brill-Platz");
        break;
    }
    case 140752:
    {
        returnValue = F("Hermann-Brinkmann-Str.");
        break;
    }
    case 140753:
    {
        returnValue = F("Hermann-Buddensieg-Str.");
        break;
    }
    case 140754:
    {
        returnValue = F("Hermann-Burgdorf-Str.");
        break;
    }
    case 140755:
    {
        returnValue = F("Hermann-Burger-Str.");
        break;
    }
    case 140756:
    {
        returnValue = F("Hermann-Burkhardt-Str.");
        break;
    }
    case 140757:
    {
        returnValue = F("Hermann-Burmeister-Str.");
        break;
    }
    case 140758:
    {
        returnValue = F("Hermann-Burstert-Weg");
        break;
    }
    case 140759:
    {
        returnValue = F("Hermann-Burte-Str.");
        break;
    }
    case 140760:
    {
        returnValue = F("Hermann-Burte-Weg");
        break;
    }
    case 140761:
    {
        returnValue = F("Hermann-Buschius-Str.");
        break;
    }
    case 140762:
    {
        returnValue = F("Hermann-Butzmann-Weg");
        break;
    }
    case 140763:
    {
        returnValue = F("Hermann-Böcker-Str.");
        break;
    }
    case 140764:
    {
        returnValue = F("Hermann-Böckmann-Str.");
        break;
    }
    case 140765:
    {
        returnValue = F("Hermann-Bögemann-Str.");
        break;
    }
    case 140766:
    {
        returnValue = F("Hermann-Böhm-Str.");
        break;
    }
    case 140767:
    {
        returnValue = F("Hermann-Börger-Str.");
        break;
    }
    case 140768:
    {
        returnValue = F("Hermann-Böttger-Str.");
        break;
    }
    case 140769:
    {
        returnValue = F("Hermann-Büchele-Weg");
        break;
    }
    case 140770:
    {
        returnValue = F("Hermann-C.-Starck-Str.");
        break;
    }
    case 140771:
    {
        returnValue = F("Hermann-Callies-Str.");
        break;
    }
    case 140772:
    {
        returnValue = F("Hermann-Claudius-Str.");
        break;
    }
    case 140773:
    {
        returnValue = F("Hermann-Claudius-Weg");
        break;
    }
    case 140774:
    {
        returnValue = F("Hermann-Clausen-Str.");
        break;
    }
    case 140775:
    {
        returnValue = F("Hermann-Clemens-Weg");
        break;
    }
    case 140776:
    {
        returnValue = F("Hermann-Cohen-Ring");
        break;
    }
    case 140777:
    {
        returnValue = F("Hermann-Collitz-Str.");
        break;
    }
    case 140778:
    {
        returnValue = F("Hermann-Conring-Str.");
        break;
    }
    case 140779:
    {
        returnValue = F("Hermann-Cossmann-Str.");
        break;
    }
    case 140780:
    {
        returnValue = F("Hermann-Danz-Str.");
        break;
    }
    case 140781:
    {
        returnValue = F("Hermann-Daur-Str.");
        break;
    }
    case 140782:
    {
        returnValue = F("Hermann-Daur-Weg");
        break;
    }
    case 140783:
    {
        returnValue = F("Hermann-Decker-Weg");
        break;
    }
    case 140784:
    {
        returnValue = F("Hermann-Dickstein-Weg");
        break;
    }
    case 140785:
    {
        returnValue = F("Hermann-Diestelkamp-Weg");
        break;
    }
    case 140786:
    {
        returnValue = F("Hermann-Dietrich-Str.");
        break;
    }
    case 140787:
    {
        returnValue = F("Hermann-Dindas-Str.");
        break;
    }
    case 140788:
    {
        returnValue = F("Hermann-Doneth-Str.");
        break;
    }
    case 140789:
    {
        returnValue = F("Hermann-Dorfner-Str.");
        break;
    }
    case 140790:
    {
        returnValue = F("Hermann-Draeger-Weg");
        break;
    }
    case 140791:
    {
        returnValue = F("Hermann-Dreher-Str.");
        break;
    }
    case 140792:
    {
        returnValue = F("Hermann-Droste-Park");
        break;
    }
    case 140793:
    {
        returnValue = F("Hermann-Duncker-Str.");
        break;
    }
    case 140794:
    {
        returnValue = F("Hermann-Dunker-Str.");
        break;
    }
    case 140795:
    {
        returnValue = F("Hermann-Döring-Str.");
        break;
    }
    case 140796:
    {
        returnValue = F("Hermann-Ebel-Str.");
        break;
    }
    case 140797:
    {
        returnValue = F("Hermann-Ebers-Str.");
        break;
    }
    case 140798:
    {
        returnValue = F("Hermann-Eckhof-Str.");
        break;
    }
    case 140799:
    {
        returnValue = F("Hermann-Ehlers-Ring");
        break;
    }
    case 140800:
    {
        returnValue = F("Hermann-Ehlers-Str.");
        break;
    }
    case 140801:
    {
        returnValue = F("Hermann-Ehlers-Weg");
        break;
    }
    case 140802:
    {
        returnValue = F("Hermann-Eilers-Str.");
        break;
    }
    case 140803:
    {
        returnValue = F("Hermann-Eitel-Weg");
        break;
    }
    case 140804:
    {
        returnValue = F("Hermann-Engel-Str.");
        break;
    }
    case 140805:
    {
        returnValue = F("Hermann-Erbe-Vogel-Str.");
        break;
    }
    case 140806:
    {
        returnValue = F("Hermann-Erich-Busse-Str.");
        break;
    }
    case 140807:
    {
        returnValue = F("Hermann-Esser-Str.");
        break;
    }
    case 140808:
    {
        returnValue = F("Hermann-Essig-Str.");
        break;
    }
    case 140809:
    {
        returnValue = F("Hermann-Fabel-Weg");
        break;
    }
    case 140810:
    {
        returnValue = F("Hermann-Faßbender-Str.");
        break;
    }
    case 140811:
    {
        returnValue = F("Hermann-Fechenbach-Str.");
        break;
    }
    case 140812:
    {
        returnValue = F("Hermann-Ferres-Str.");
        break;
    }
    case 140813:
    {
        returnValue = F("Hermann-Fischer-Allee");
        break;
    }
    case 140814:
    {
        returnValue = F("Hermann-Fischer-Str.");
        break;
    }
    case 140815:
    {
        returnValue = F("Hermann-Fischer-Weg");
        break;
    }
    case 140816:
    {
        returnValue = F("Hermann-Forck-Str.");
        break;
    }
    case 140817:
    {
        returnValue = F("Hermann-Frank-Str.");
        break;
    }
    case 140818:
    {
        returnValue = F("Hermann-Frank-Weg");
        break;
    }
    case 140819:
    {
        returnValue = F("Hermann-Franke-Str.");
        break;
    }
    case 140820:
    {
        returnValue = F("Hermann-Freiherr-Weg");
        break;
    }
    case 140821:
    {
        returnValue = F("Hermann-Frenz-Weg");
        break;
    }
    case 140822:
    {
        returnValue = F("Hermann-Frerker-Str.");
        break;
    }
    case 140823:
    {
        returnValue = F("Hermann-Frey-Str.");
        break;
    }
    case 140824:
    {
        returnValue = F("Hermann-Friedrich-Str.");
        break;
    }
    case 140825:
    {
        returnValue = F("Hermann-Friese-Str.");
        break;
    }
    case 140826:
    {
        returnValue = F("Hermann-Friesen-Str.");
        break;
    }
    case 140827:
    {
        returnValue = F("Hermann-Fromme-Weg");
        break;
    }
    case 140828:
    {
        returnValue = F("Hermann-Fuld-Str.");
        break;
    }
    case 140829:
    {
        returnValue = F("Hermann-Funke-Str.");
        break;
    }
    case 140830:
    {
        returnValue = F("Hermann-Ganzenmüller-Str.");
        break;
    }
    case 140831:
    {
        returnValue = F("Hermann-Gebauer-Str.");
        break;
    }
    case 140832:
    {
        returnValue = F("Hermann-Gebauer-Weg");
        break;
    }
    case 140833:
    {
        returnValue = F("Hermann-Gehlen-Str.");
        break;
    }
    case 140834:
    {
        returnValue = F("Hermann-Geib-Str.");
        break;
    }
    case 140835:
    {
        returnValue = F("Hermann-Geisen-Str.");
        break;
    }
    case 140836:
    {
        returnValue = F("Hermann-Gerisch-Str.");
        break;
    }
    case 140837:
    {
        returnValue = F("Hermann-Gilles-Str.");
        break;
    }
    case 140838:
    {
        returnValue = F("Hermann-Gils-Str.");
        break;
    }
    case 140839:
    {
        returnValue = F("Hermann-Gissler-Str.");
        break;
    }
    case 140840:
    {
        returnValue = F("Hermann-Gmeiner-Str.");
        break;
    }
    case 140841:
    {
        returnValue = F("Hermann-Goetze-Str.");
        break;
    }
    case 140842:
    {
        returnValue = F("Hermann-Goldstein-Str.");
        break;
    }
    case 140843:
    {
        returnValue = F("Hermann-Graebke-Str.");
        break;
    }
    case 140844:
    {
        returnValue = F("Hermann-Graf-Str.");
        break;
    }
    case 140845:
    {
        returnValue = F("Hermann-Grafe-Str.");
        break;
    }
    case 140846:
    {
        returnValue = F("Hermann-Grauerholz-Str.");
        break;
    }
    case 140847:
    {
        returnValue = F("Hermann-Grote-Str.");
        break;
    }
    case 140848:
    {
        returnValue = F("Hermann-Gruhl-Str.");
        break;
    }
    case 140849:
    {
        returnValue = F("Hermann-Gröber-Str.");
        break;
    }
    case 140850:
    {
        returnValue = F("Hermann-Gröber-Weg");
        break;
    }
    case 140851:
    {
        returnValue = F("Hermann-Grüneberg-Str.");
        break;
    }
    case 140852:
    {
        returnValue = F("Hermann-Gösser-Weg");
        break;
    }
    case 140853:
    {
        returnValue = F("Hermann-Götze-Weg");
        break;
    }
    case 140854:
    {
        returnValue = F("Hermann-Günth-Str.");
        break;
    }
    case 140855:
    {
        returnValue = F("Hermann-Günther-Str.");
        break;
    }
    case 140856:
    {
        returnValue = F("Hermann-Güntherodt-Siedlung");
        break;
    }
    case 140857:
    {
        returnValue = F("Hermann-Haack-Str.");
        break;
    }
    case 140858:
    {
        returnValue = F("Hermann-Haag-Str.");
        break;
    }
    case 140859:
    {
        returnValue = F("Hermann-Haefner-Weg");
        break;
    }
    case 140860:
    {
        returnValue = F("Hermann-Haffner-Str.");
        break;
    }
    case 140861:
    {
        returnValue = F("Hermann-Hagenmeyer-Str.");
        break;
    }
    case 140862:
    {
        returnValue = F("Hermann-Hahn-Str.");
        break;
    }
    case 140863:
    {
        returnValue = F("Hermann-Haller-Str.");
        break;
    }
    case 140864:
    {
        returnValue = F("Hermann-Hammerschmidt-Str.");
        break;
    }
    case 140865:
    {
        returnValue = F("Hermann-Harless-Platz");
        break;
    }
    case 140866:
    {
        returnValue = F("Hermann-Harms-Weg");
        break;
    }
    case 140867:
    {
        returnValue = F("Hermann-Hasselmann-Str.");
        break;
    }
    case 140868:
    {
        returnValue = F("Hermann-Hauser-Str.");
        break;
    }
    case 140869:
    {
        returnValue = F("Hermann-Heeren-Weg");
        break;
    }
    case 140870:
    {
        returnValue = F("Hermann-Heiberg-Str.");
        break;
    }
    case 140871:
    {
        returnValue = F("Hermann-Helber-Str.");
        break;
    }
    case 140872:
    {
        returnValue = F("Hermann-Heller-Str.");
        break;
    }
    case 140873:
    {
        returnValue = F("Hermann-Hellriegel-Str.");
        break;
    }
    case 140874:
    {
        returnValue = F("Hermann-Helmers-Str.");
        break;
    }
    case 140875:
    {
        returnValue = F("Hermann-Hendrich-Str.");
        break;
    }
    case 140876:
    {
        returnValue = F("Hermann-Henschel-Weg");
        break;
    }
    case 140877:
    {
        returnValue = F("Hermann-Heres-Str.");
        break;
    }
    case 140878:
    {
        returnValue = F("Hermann-Hess-Str.");
        break;
    }
    case 140879:
    {
        returnValue = F("Hermann-Hesse-Platz");
        break;
    }
    case 140880:
    {
        returnValue = F("Hermann-Hesse-Str.");
        break;
    }
    case 140881:
    {
        returnValue = F("Hermann-Hesse-Wed");
        break;
    }
    case 140882:
    {
        returnValue = F("Hermann-Hesse-Weg");
        break;
    }
    case 140883:
    {
        returnValue = F("Hermann-Hetzel-Str.");
        break;
    }
    case 140884:
    {
        returnValue = F("Hermann-Heuer-Weg");
        break;
    }
    case 140885:
    {
        returnValue = F("Hermann-Heuser-Str.");
        break;
    }
    case 140886:
    {
        returnValue = F("Hermann-Heyen-Str.");
        break;
    }
    case 140887:
    {
        returnValue = F("Hermann-Heyne-Str.");
        break;
    }
    case 140888:
    {
        returnValue = F("Hermann-Hierl-Str.");
        break;
    }
    case 140889:
    {
        returnValue = F("Hermann-Hildenbrand-Str.");
        break;
    }
    case 140890:
    {
        returnValue = F("Hermann-Hilgers-Str.");
        break;
    }
    case 140891:
    {
        returnValue = F("Hermann-Hiller-Str.");
        break;
    }
    case 140892:
    {
        returnValue = F("Hermann-Hinrich-Str.");
        break;
    }
    case 140893:
    {
        returnValue = F("Hermann-Hoch-Weg");
        break;
    }
    case 140894:
    {
        returnValue = F("Hermann-Hofbauer-Str.");
        break;
    }
    case 140895:
    {
        returnValue = F("Hermann-Hoffmann-Kreisel");
        break;
    }
    case 140896:
    {
        returnValue = F("Hermann-Hoffmann-Str.");
        break;
    }
    case 140897:
    {
        returnValue = F("Hermann-Hofmann-Str.");
        break;
    }
    case 140898:
    {
        returnValue = F("Hermann-Hollerith-Str.");
        break;
    }
    case 140899:
    {
        returnValue = F("Hermann-Holtmann-Str.");
        break;
    }
    case 140900:
    {
        returnValue = F("Hermann-Holwein-Str.");
        break;
    }
    case 140901:
    {
        returnValue = F("Hermann-Holz-Str.");
        break;
    }
    case 140902:
    {
        returnValue = F("Hermann-Holzner-Weg");
        break;
    }
    case 140903:
    {
        returnValue = F("Hermann-Homann-Weg");
        break;
    }
    case 140904:
    {
        returnValue = F("Hermann-Homeyer-Str.");
        break;
    }
    case 140905:
    {
        returnValue = F("Hermann-Honnef-Str.");
        break;
    }
    case 140906:
    {
        returnValue = F("Hermann-Huffert-Str.");
        break;
    }
    case 140907:
    {
        returnValue = F("Hermann-Hummel-Str.");
        break;
    }
    case 140908:
    {
        returnValue = F("Hermann-Häcker-Str.");
        break;
    }
    case 140909:
    {
        returnValue = F("Hermann-Häring-Weg");
        break;
    }
    case 140910:
    {
        returnValue = F("Hermann-Höcherl-Str.");
        break;
    }
    case 140911:
    {
        returnValue = F("Hermann-Höges-Str.");
        break;
    }
    case 140912:
    {
        returnValue = F("Hermann-Hölscher-Str.");
        break;
    }
    case 140913:
    {
        returnValue = F("Hermann-Höper-Ring");
        break;
    }
    case 140914:
    {
        returnValue = F("Hermann-Hülser-Platz");
        break;
    }
    case 140915:
    {
        returnValue = F("Hermann-Ilgen-Str.");
        break;
    }
    case 140916:
    {
        returnValue = F("Hermann-Imbusch-Weg");
        break;
    }
    case 140917:
    {
        returnValue = F("Hermann-Immer-Str.");
        break;
    }
    case 140918:
    {
        returnValue = F("Hermann-Iseke-Weg");
        break;
    }
    case 140919:
    {
        returnValue = F("Hermann-Ivers-Str.");
        break;
    }
    case 140920:
    {
        returnValue = F("Hermann-J.-Bach-Weg");
        break;
    }
    case 140921:
    {
        returnValue = F("Hermann-Jacobsohn-Weg");
        break;
    }
    case 140922:
    {
        returnValue = F("Hermann-Jacubasch-Str.");
        break;
    }
    case 140923:
    {
        returnValue = F("Hermann-Janßen-Str.");
        break;
    }
    case 140924:
    {
        returnValue = F("Hermann-Josef-Baum-Str.");
        break;
    }
    case 140925:
    {
        returnValue = F("Hermann-Josef-Claeßen-Str.");
        break;
    }
    case 140926:
    {
        returnValue = F("Hermann-Josef-Cosler-Str.");
        break;
    }
    case 140927:
    {
        returnValue = F("Hermann-Josef-Dusend-Platz");
        break;
    }
    case 140928:
    {
        returnValue = F("Hermann-Josef-Gormanns-Str.");
        break;
    }
    case 140929:
    {
        returnValue = F("Hermann-Josef-Lingen-Str.");
        break;
    }
    case 140930:
    {
        returnValue = F("Hermann-Josef-Marx-Str.");
        break;
    }
    case 140931:
    {
        returnValue = F("Hermann-Josef-Meisenzahl-Str.");
        break;
    }
    case 140932:
    {
        returnValue = F("Hermann-Josef-Str.");
        break;
    }
    case 140933:
    {
        returnValue = F("Hermann-Josef-Weg");
        break;
    }
    case 140934:
    {
        returnValue = F("Hermann-Joseph-Str.");
        break;
    }
    case 140935:
    {
        returnValue = F("Hermann-Jäckel-Str.");
        break;
    }
    case 140936:
    {
        returnValue = F("Hermann-Jäger-Str.");
        break;
    }
    case 140937:
    {
        returnValue = F("Hermann-Jäger-Weg");
        break;
    }
    case 140938:
    {
        returnValue = F("Hermann-Jürgens-Str.");
        break;
    }
    case 140939:
    {
        returnValue = F("Hermann-Kaiser-Str.");
        break;
    }
    case 140940:
    {
        returnValue = F("Hermann-Kappen-Weg");
        break;
    }
    case 140941:
    {
        returnValue = F("Hermann-Kasten-Str.");
        break;
    }
    case 140942:
    {
        returnValue = F("Hermann-Kattwinkel-Platz");
        break;
    }
    case 140943:
    {
        returnValue = F("Hermann-Kawe-Str.");
        break;
    }
    case 140944:
    {
        returnValue = F("Hermann-Keller-Str.");
        break;
    }
    case 140945:
    {
        returnValue = F("Hermann-Kellner-Str.");
        break;
    }
    case 140946:
    {
        returnValue = F("Hermann-Kemper Str.");
        break;
    }
    case 140947:
    {
        returnValue = F("Hermann-Kemper-Str.");
        break;
    }
    case 140948:
    {
        returnValue = F("Hermann-Kempf");
        break;
    }
    case 140949:
    {
        returnValue = F("Hermann-Kempf-Str.");
        break;
    }
    case 140950:
    {
        returnValue = F("Hermann-Kerler-Str.");
        break;
    }
    case 140951:
    {
        returnValue = F("Hermann-Keuhs-Str.");
        break;
    }
    case 140952:
    {
        returnValue = F("Hermann-Keßler-Weg");
        break;
    }
    case 140953:
    {
        returnValue = F("Hermann-Kimmich-Str.");
        break;
    }
    case 140954:
    {
        returnValue = F("Hermann-Kind-Str.");
        break;
    }
    case 140955:
    {
        returnValue = F("Hermann-Kirchhoff-Weg");
        break;
    }
    case 140956:
    {
        returnValue = F("Hermann-Kirchner-Str.");
        break;
    }
    case 140957:
    {
        returnValue = F("Hermann-Kleber-Weg");
        break;
    }
    case 140958:
    {
        returnValue = F("Hermann-Klein-Weg");
        break;
    }
    case 140959:
    {
        returnValue = F("Hermann-Klenke-Str.");
        break;
    }
    case 140960:
    {
        returnValue = F("Hermann-Klingenberg-Ring");
        break;
    }
    case 140961:
    {
        returnValue = F("Hermann-Klippel-Str.");
        break;
    }
    case 140962:
    {
        returnValue = F("Hermann-Kloos-Str.");
        break;
    }
    case 140963:
    {
        returnValue = F("Hermann-Klostermann-Weg");
        break;
    }
    case 140964:
    {
        returnValue = F("Hermann-Klug-Str.");
        break;
    }
    case 140965:
    {
        returnValue = F("Hermann-Knapp-Weg");
        break;
    }
    case 140966:
    {
        returnValue = F("Hermann-Knauel-Str.");
        break;
    }
    case 140967:
    {
        returnValue = F("Hermann-Knoth-Str.");
        break;
    }
    case 140968:
    {
        returnValue = F("Hermann-Koch-Str.");
        break;
    }
    case 140969:
    {
        returnValue = F("Hermann-Kock-Weg");
        break;
    }
    case 140970:
    {
        returnValue = F("Hermann-Koehler-Str.");
        break;
    }
    case 140971:
    {
        returnValue = F("Hermann-Kollmar-Str.");
        break;
    }
    case 140972:
    {
        returnValue = F("Hermann-Koneberg-Str.");
        break;
    }
    case 140973:
    {
        returnValue = F("Hermann-Korb-Str.");
        break;
    }
    case 140974:
    {
        returnValue = F("Hermann-Krasser-Str.");
        break;
    }
    case 140975:
    {
        returnValue = F("Hermann-Krause-Str.");
        break;
    }
    case 140976:
    {
        returnValue = F("Hermann-Krause-Weg");
        break;
    }
    case 140977:
    {
        returnValue = F("Hermann-Krieger-Str.");
        break;
    }
    case 140978:
    {
        returnValue = F("Hermann-Krohn-Str.");
        break;
    }
    case 140979:
    {
        returnValue = F("Hermann-Krotz-Weg");
        break;
    }
    case 140980:
    {
        returnValue = F("Hermann-Kröger-Str.");
        break;
    }
    case 140981:
    {
        returnValue = F("Hermann-Krücke-Str.");
        break;
    }
    case 140982:
    {
        returnValue = F("Hermann-Kuhmichel-Weg");
        break;
    }
    case 140983:
    {
        returnValue = F("Hermann-Kurz-Str.");
        break;
    }
    case 140984:
    {
        returnValue = F("Hermann-Kurz-Weg");
        break;
    }
    case 140985:
    {
        returnValue = F("Hermann-Kälber-Str.");
        break;
    }
    case 140986:
    {
        returnValue = F("Hermann-Käppler-Platz");
        break;
    }
    case 140987:
    {
        returnValue = F("Hermann-Kätelhön-Str.");
        break;
    }
    case 140988:
    {
        returnValue = F("Hermann-Kätelhön-Weg");
        break;
    }
    case 140989:
    {
        returnValue = F("Hermann-Köckemann-Str.");
        break;
    }
    case 140990:
    {
        returnValue = F("Hermann-Köhl-Str.");
        break;
    }
    case 140991:
    {
        returnValue = F("Hermann-Köhl-Weg");
        break;
    }
    case 140992:
    {
        returnValue = F("Hermann-Köhler-Str.");
        break;
    }
    case 140993:
    {
        returnValue = F("Hermann-König-Str.");
        break;
    }
    case 140994:
    {
        returnValue = F("Hermann-Körner-Str.");
        break;
    }
    case 140995:
    {
        returnValue = F("Hermann-Köster-Str.");
        break;
    }
    case 140996:
    {
        returnValue = F("Hermann-Kürschner-Str.");
        break;
    }
    case 140997:
    {
        returnValue = F("Hermann-Küsel-Str.");
        break;
    }
    case 140998:
    {
        returnValue = F("Hermann-Küttner-Str.");
        break;
    }
    case 140999:
    {
        returnValue = F("Hermann-Labohm-Str.");
        break;
    }
    case 141000:
    {
        returnValue = F("Hermann-Lammers-Str.");
        break;
    }
    case 141001:
    {
        returnValue = F("Hermann-Lamprecht-Str.");
        break;
    }
    case 141002:
    {
        returnValue = F("Hermann-Landmann-Str.");
        break;
    }
    case 141003:
    {
        returnValue = F("Hermann-Lang-Str.");
        break;
    }
    case 141004:
    {
        returnValue = F("Hermann-Lange-Ring");
        break;
    }
    case 141005:
    {
        returnValue = F("Hermann-Lange-Str.");
        break;
    }
    case 141006:
    {
        returnValue = F("Hermann-Langlotz-Str.");
        break;
    }
    case 141007:
    {
        returnValue = F("Hermann-Lanz-Str.");
        break;
    }
    case 141008:
    {
        returnValue = F("Hermann-Laue-Weg");
        break;
    }
    case 141009:
    {
        returnValue = F("Hermann-Lauer-Str.");
        break;
    }
    case 141010:
    {
        returnValue = F("Hermann-Laur-Str.");
        break;
    }
    case 141011:
    {
        returnValue = F("Hermann-Lause-Weg");
        break;
    }
    case 141012:
    {
        returnValue = F("Hermann-Lautz-Str.");
        break;
    }
    case 141013:
    {
        returnValue = F("Hermann-Leber-Str.");
        break;
    }
    case 141014:
    {
        returnValue = F("Hermann-Legenhusen-Str.");
        break;
    }
    case 141015:
    {
        returnValue = F("Hermann-Lehmann-Str.");
        break;
    }
    case 141016:
    {
        returnValue = F("Hermann-Leiber-Str.");
        break;
    }
    case 141017:
    {
        returnValue = F("Hermann-Leimeister-Str.");
        break;
    }
    case 141018:
    {
        returnValue = F("Hermann-Lemper-Str.");
        break;
    }
    case 141019:
    {
        returnValue = F("Hermann-Lenßen-Str.");
        break;
    }
    case 141020:
    {
        returnValue = F("Hermann-Levi-Str.");
        break;
    }
    case 141021:
    {
        returnValue = F("Hermann-Lieb-Str.");
        break;
    }
    case 141022:
    {
        returnValue = F("Hermann-Lielje-Ring");
        break;
    }
    case 141023:
    {
        returnValue = F("Hermann-Lietz-Str.");
        break;
    }
    case 141024:
    {
        returnValue = F("Hermann-Limmer-Str.");
        break;
    }
    case 141025:
    {
        returnValue = F("Hermann-Loens-Str.");
        break;
    }
    case 141026:
    {
        returnValue = F("Hermann-Lohner-Weg");
        break;
    }
    case 141027:
    {
        returnValue = F("Hermann-Lorenz-Weg");
        break;
    }
    case 141028:
    {
        returnValue = F("Hermann-Losch-Str.");
        break;
    }
    case 141029:
    {
        returnValue = F("Hermann-Ludwig-Weg");
        break;
    }
    case 141030:
    {
        returnValue = F("Hermann-Lueb-Str.");
        break;
    }
    case 141031:
    {
        returnValue = F("Hermann-Lutz-Str.");
        break;
    }
    case 141032:
    {
        returnValue = F("Hermann-Löher-Str.");
        break;
    }
    case 141033:
    {
        returnValue = F("Hermann-Löhns-Str.");
        break;
    }
    case 141034:
    {
        returnValue = F("Hermann-Löns Weg");
        break;
    }
    case 141035:
    {
        returnValue = F("Hermann-Löns-Allee");
        break;
    }
    case 141036:
    {
        returnValue = F("Hermann-Löns-Anger");
        break;
    }
    case 141037:
    {
        returnValue = F("Hermann-Löns-Park");
        break;
    }
    case 141038:
    {
        returnValue = F("Hermann-Löns-Pfad");
        break;
    }
    case 141039:
    {
        returnValue = F("Hermann-Löns-Platz");
        break;
    }
    case 141040:
    {
        returnValue = F("Hermann-Löns-Ring");
        break;
    }
    case 141041:
    {
        returnValue = F("Hermann-Löns-Stieg");
        break;
    }
    case 141042:
    {
        returnValue = F("Hermann-Löns-Str.");
        break;
    }
    case 141043:
    {
        returnValue = F("Hermann-Löns-Weg");
        break;
    }
    case 141044:
    {
        returnValue = F("Hermann-Lüdemann-Str.");
        break;
    }
    case 141045:
    {
        returnValue = F("Hermann-Lüpping-Str.");
        break;
    }
    case 141046:
    {
        returnValue = F("Hermann-Maier-Str.");
        break;
    }
    case 141047:
    {
        returnValue = F("Hermann-Manskopf-Weg");
        break;
    }
    case 141048:
    {
        returnValue = F("Hermann-Matern-Str.");
        break;
    }
    case 141049:
    {
        returnValue = F("Hermann-Mayrhofer-Str.");
        break;
    }
    case 141050:
    {
        returnValue = F("Hermann-Mehl-Str.");
        break;
    }
    case 141051:
    {
        returnValue = F("Hermann-Meier-Str.");
        break;
    }
    case 141052:
    {
        returnValue = F("Hermann-Meiwes-Str.");
        break;
    }
    case 141053:
    {
        returnValue = F("Hermann-Merz-Str.");
        break;
    }
    case 141054:
    {
        returnValue = F("Hermann-Messer-Weg");
        break;
    }
    case 141055:
    {
        returnValue = F("Hermann-Metger-Str.");
        break;
    }
    case 141056:
    {
        returnValue = F("Hermann-Metz-Str.");
        break;
    }
    case 141057:
    {
        returnValue = F("Hermann-Metzger-Str.");
        break;
    }
    case 141058:
    {
        returnValue = F("Hermann-Metzner-Str.");
        break;
    }
    case 141059:
    {
        returnValue = F("Hermann-Mevius-Str.");
        break;
    }
    case 141060:
    {
        returnValue = F("Hermann-Meyer-Str.");
        break;
    }
    case 141061:
    {
        returnValue = F("Hermann-Michaelis-Str.");
        break;
    }
    case 141062:
    {
        returnValue = F("Hermann-Mitnacht-Str.");
        break;
    }
    case 141063:
    {
        returnValue = F("Hermann-Mitterer-Str.");
        break;
    }
    case 141064:
    {
        returnValue = F("Hermann-Mittnacht-Str.");
        break;
    }
    case 141065:
    {
        returnValue = F("Hermann-Mohn-Weg");
        break;
    }
    case 141066:
    {
        returnValue = F("Hermann-Moll-Str.");
        break;
    }
    case 141067:
    {
        returnValue = F("Hermann-Moritz-Jacobi-Str.");
        break;
    }
    case 141068:
    {
        returnValue = F("Hermann-Mulert-Str.");
        break;
    }
    case 141069:
    {
        returnValue = F("Hermann-Mylius-Str.");
        break;
    }
    case 141070:
    {
        returnValue = F("Hermann-Mäder-Str.");
        break;
    }
    case 141071:
    {
        returnValue = F("Hermann-Möller-Weg");
        break;
    }
    case 141072:
    {
        returnValue = F("Hermann-Müller-Str.");
        break;
    }
    case 141073:
    {
        returnValue = F("Hermann-Müller-Weg");
        break;
    }
    case 141074:
    {
        returnValue = F("Hermann-Mündler-Str.");
        break;
    }
    case 141075:
    {
        returnValue = F("Hermann-Münster-Weg");
        break;
    }
    case 141076:
    {
        returnValue = F("Hermann-Münzing-Str.");
        break;
    }
    case 141077:
    {
        returnValue = F("Hermann-Neemann-Str.");
        break;
    }
    case 141078:
    {
        returnValue = F("Hermann-Neuffer-Weg");
        break;
    }
    case 141079:
    {
        returnValue = F("Hermann-Neuner-Str.");
        break;
    }
    case 141080:
    {
        returnValue = F("Hermann-Niebuhr-Str.");
        break;
    }
    case 141081:
    {
        returnValue = F("Hermann-Niemann-Str.");
        break;
    }
    case 141082:
    {
        returnValue = F("Hermann-Niggemann-Str.");
        break;
    }
    case 141083:
    {
        returnValue = F("Hermann-Nissen-Stieg");
        break;
    }
    case 141084:
    {
        returnValue = F("Hermann-Nohl-Str.");
        break;
    }
    case 141085:
    {
        returnValue = F("Hermann-Nordmann-Str.");
        break;
    }
    case 141086:
    {
        returnValue = F("Hermann-Ober-Platz");
        break;
    }
    case 141087:
    {
        returnValue = F("Hermann-Obert-Str.");
        break;
    }
    case 141088:
    {
        returnValue = F("Hermann-Oberth-Str.");
        break;
    }
    case 141089:
    {
        returnValue = F("Hermann-Oberth-Weg");
        break;
    }
    case 141090:
    {
        returnValue = F("Hermann-Oetken-Str.");
        break;
    }
    case 141091:
    {
        returnValue = F("Hermann-Ohlms-Str.");
        break;
    }
    case 141092:
    {
        returnValue = F("Hermann-Olle-Str.");
        break;
    }
    case 141093:
    {
        returnValue = F("Hermann-Onken-Str.");
        break;
    }
    case 141094:
    {
        returnValue = F("Hermann-Osthoff-Str.");
        break;
    }
    case 141095:
    {
        returnValue = F("Hermann-Otto-Schmidt-Str.");
        break;
    }
    case 141096:
    {
        returnValue = F("Hermann-Pampel-Str.");
        break;
    }
    case 141097:
    {
        returnValue = F("Hermann-Pampus-Platz");
        break;
    }
    case 141098:
    {
        returnValue = F("Hermann-Pape-Str.");
        break;
    }
    case 141099:
    {
        returnValue = F("Hermann-Papst-Str.");
        break;
    }
    case 141100:
    {
        returnValue = F("Hermann-Paul-Müller-Str.");
        break;
    }
    case 141101:
    {
        returnValue = F("Hermann-Peters-Patt");
        break;
    }
    case 141102:
    {
        returnValue = F("Hermann-Petersilge-Str.");
        break;
    }
    case 141103:
    {
        returnValue = F("Hermann-Pfeiffer-Str.");
        break;
    }
    case 141104:
    {
        returnValue = F("Hermann-Pfähler-Str.");
        break;
    }
    case 141105:
    {
        returnValue = F("Hermann-Pistor-Str.");
        break;
    }
    case 141106:
    {
        returnValue = F("Hermann-Plass-Str.");
        break;
    }
    case 141107:
    {
        returnValue = F("Hermann-Plater-Str.");
        break;
    }
    case 141108:
    {
        returnValue = F("Hermann-Platz-Str.");
        break;
    }
    case 141109:
    {
        returnValue = F("Hermann-Pleuer-Weg");
        break;
    }
    case 141110:
    {
        returnValue = F("Hermann-Poppe-Str.");
        break;
    }
    case 141111:
    {
        returnValue = F("Hermann-Potthoff-Str.");
        break;
    }
    case 141112:
    {
        returnValue = F("Hermann-Precht-Str.");
        break;
    }
    case 141113:
    {
        returnValue = F("Hermann-Prey-Platz");
        break;
    }
    case 141114:
    {
        returnValue = F("Hermann-Prochnow-Str.");
        break;
    }
    case 141115:
    {
        returnValue = F("Hermann-Pröll-Str.");
        break;
    }
    case 141116:
    {
        returnValue = F("Hermann-Prüßmann-Weg");
        break;
    }
    case 141117:
    {
        returnValue = F("Hermann-Pünder-Str.");
        break;
    }
    case 141118:
    {
        returnValue = F("Hermann-Quack-Str.");
        break;
    }
    case 141119:
    {
        returnValue = F("Hermann-Rainer-Str.");
        break;
    }
    case 141120:
    {
        returnValue = F("Hermann-Ranz-Str.");
        break;
    }
    case 141121:
    {
        returnValue = F("Hermann-Rapp-Str.");
        break;
    }
    case 141122:
    {
        returnValue = F("Hermann-Rau-Str.");
        break;
    }
    case 141123:
    {
        returnValue = F("Hermann-Rauhe-Str.");
        break;
    }
    case 141124:
    {
        returnValue = F("Hermann-Rehm-Str.");
        break;
    }
    case 141125:
    {
        returnValue = F("Hermann-Reichardt-Weg");
        break;
    }
    case 141126:
    {
        returnValue = F("Hermann-Reichel-Str.");
        break;
    }
    case 141127:
    {
        returnValue = F("Hermann-Reifsteck-Weg");
        break;
    }
    case 141128:
    {
        returnValue = F("Hermann-Reinholz-Str.");
        break;
    }
    case 141129:
    {
        returnValue = F("Hermann-Reiter-Weg");
        break;
    }
    case 141130:
    {
        returnValue = F("Hermann-Reitz-Weg");
        break;
    }
    case 141131:
    {
        returnValue = F("Hermann-Renner-Str.");
        break;
    }
    case 141132:
    {
        returnValue = F("Hermann-Renner-Weg");
        break;
    }
    case 141133:
    {
        returnValue = F("Hermann-Reuchlin-Str.");
        break;
    }
    case 141134:
    {
        returnValue = F("Hermann-Reumann-Weg");
        break;
    }
    case 141135:
    {
        returnValue = F("Hermann-Reusch-Str.");
        break;
    }
    case 141136:
    {
        returnValue = F("Hermann-Richter-Weg");
        break;
    }
    case 141137:
    {
        returnValue = F("Hermann-Rieger-Weg");
        break;
    }
    case 141138:
    {
        returnValue = F("Hermann-Risse-Str.");
        break;
    }
    case 141139:
    {
        returnValue = F("Hermann-Ritzer-Str.");
        break;
    }
    case 141140:
    {
        returnValue = F("Hermann-Roemer-Str.");
        break;
    }
    case 141141:
    {
        returnValue = F("Hermann-Rohwedder-Str.");
        break;
    }
    case 141142:
    {
        returnValue = F("Hermann-Rombach-Str.");
        break;
    }
    case 141143:
    {
        returnValue = F("Hermann-Rommel-Str.");
        break;
    }
    case 141144:
    {
        returnValue = F("Hermann-Rosenberg-Str.");
        break;
    }
    case 141145:
    {
        returnValue = F("Hermann-Roth-Str.");
        break;
    }
    case 141146:
    {
        returnValue = F("Hermann-Rothert-Str.");
        break;
    }
    case 141147:
    {
        returnValue = F("Hermann-Ruge-Str.");
        break;
    }
    case 141148:
    {
        returnValue = F("Hermann-Rupp-Str.");
        break;
    }
    case 141149:
    {
        returnValue = F("Hermann-Röger-Str.");
        break;
    }
    case 141150:
    {
        returnValue = F("Hermann-Römer-Str.");
        break;
    }
    case 141151:
    {
        returnValue = F("Hermann-Rönsch-Weg");
        break;
    }
    case 141152:
    {
        returnValue = F("Hermann-Rösingh-Str.");
        break;
    }
    case 141153:
    {
        returnValue = F("Hermann-Rüter-Str.");
        break;
    }
    case 141154:
    {
        returnValue = F("Hermann-Sachse-Str.");
        break;
    }
    case 141155:
    {
        returnValue = F("Hermann-Sachse-Weg");
        break;
    }
    case 141156:
    {
        returnValue = F("Hermann-Sauter-Str.");
        break;
    }
    case 141157:
    {
        returnValue = F("Hermann-Sautter-Str.");
        break;
    }
    case 141158:
    {
        returnValue = F("Hermann-Schadt-Str.");
        break;
    }
    case 141159:
    {
        returnValue = F("Hermann-Schaeffer-Str.");
        break;
    }
    case 141160:
    {
        returnValue = F("Hermann-Schafft-Str.");
        break;
    }
    case 141161:
    {
        returnValue = F("Hermann-Schauß-Str.");
        break;
    }
    case 141162:
    {
        returnValue = F("Hermann-Scheel-Str.");
        break;
    }
    case 141163:
    {
        returnValue = F("Hermann-Scheer-Str.");
        break;
    }
    case 141164:
    {
        returnValue = F("Hermann-Scheffler-Str.");
        break;
    }
    case 141165:
    {
        returnValue = F("Hermann-Scheibe-Str.");
        break;
    }
    case 141166:
    {
        returnValue = F("Hermann-Scheidemann-Weg");
        break;
    }
    case 141167:
    {
        returnValue = F("Hermann-Schein-Str.");
        break;
    }
    case 141168:
    {
        returnValue = F("Hermann-Schell-Str.");
        break;
    }
    case 141169:
    {
        returnValue = F("Hermann-Schenkel-Str.");
        break;
    }
    case 141170:
    {
        returnValue = F("Hermann-Scherer-Str.");
        break;
    }
    case 141171:
    {
        returnValue = F("Hermann-Schilling-Str.");
        break;
    }
    case 141172:
    {
        returnValue = F("Hermann-Schittenhelm-Weg");
        break;
    }
    case 141173:
    {
        returnValue = F("Hermann-Schlegel-Str.");
        break;
    }
    case 141174:
    {
        returnValue = F("Hermann-Schlikker-Str.");
        break;
    }
    case 141175:
    {
        returnValue = F("Hermann-Schlittgen-Str.");
        break;
    }
    case 141176:
    {
        returnValue = F("Hermann-Schluer-Str.");
        break;
    }
    case 141177:
    {
        returnValue = F("Hermann-Schmeinck-Str.");
        break;
    }
    case 141178:
    {
        returnValue = F("Hermann-Schmid-Str.");
        break;
    }
    case 141179:
    {
        returnValue = F("Hermann-Schmidt-Str.");
        break;
    }
    case 141180:
    {
        returnValue = F("Hermann-Schmidt-Weg");
        break;
    }
    case 141181:
    {
        returnValue = F("Hermann-Schmitt-Str.");
        break;
    }
    case 141182:
    {
        returnValue = F("Hermann-Schmitz-Allee");
        break;
    }
    case 141183:
    {
        returnValue = F("Hermann-Schmitz-Str.");
        break;
    }
    case 141184:
    {
        returnValue = F("Hermann-Schmälzger-Str.");
        break;
    }
    case 141185:
    {
        returnValue = F("Hermann-Schnaufer-Str.");
        break;
    }
    case 141186:
    {
        returnValue = F("Hermann-Schneider-Weg");
        break;
    }
    case 141187:
    {
        returnValue = F("Hermann-Scholze-Str.");
        break;
    }
    case 141188:
    {
        returnValue = F("Hermann-Schramm-Str.");
        break;
    }
    case 141189:
    {
        returnValue = F("Hermann-Schreiber-Str.");
        break;
    }
    case 141190:
    {
        returnValue = F("Hermann-Schröder-Weg");
        break;
    }
    case 141191:
    {
        returnValue = F("Hermann-Schubert-Str.");
        break;
    }
    case 141192:
    {
        returnValue = F("Hermann-Schultz-Str.");
        break;
    }
    case 141193:
    {
        returnValue = F("Hermann-Schulz-Str.");
        break;
    }
    case 141194:
    {
        returnValue = F("Hermann-Schulze-Delitzsch-Str.");
        break;
    }
    case 141195:
    {
        returnValue = F("Hermann-Schulze-Str.");
        break;
    }
    case 141196:
    {
        returnValue = F("Hermann-Schulzen-Str.");
        break;
    }
    case 141197:
    {
        returnValue = F("Hermann-Schuman-Str.");
        break;
    }
    case 141198:
    {
        returnValue = F("Hermann-Schumann-Str.");
        break;
    }
    case 141199:
    {
        returnValue = F("Hermann-Schuon-Str.");
        break;
    }
    case 141200:
    {
        returnValue = F("Hermann-Schurhammer-Str.");
        break;
    }
    case 141201:
    {
        returnValue = F("Hermann-Schuster-Str.");
        break;
    }
    case 141202:
    {
        returnValue = F("Hermann-Schwarz-Str.");
        break;
    }
    case 141203:
    {
        returnValue = F("Hermann-Schweitzer-Str.");
        break;
    }
    case 141204:
    {
        returnValue = F("Hermann-Schwer-Str.");
        break;
    }
    case 141205:
    {
        returnValue = F("Hermann-Schwering-Str.");
        break;
    }
    case 141206:
    {
        returnValue = F("Hermann-Schwieger-Str.");
        break;
    }
    case 141207:
    {
        returnValue = F("Hermann-Schäfer-Str.");
        break;
    }
    case 141208:
    {
        returnValue = F("Hermann-Schäfers-Str.");
        break;
    }
    case 141209:
    {
        returnValue = F("Hermann-Schäffer-Str.");
        break;
    }
    case 141210:
    {
        returnValue = F("Hermann-Schäufele-Str.");
        break;
    }
    case 141211:
    {
        returnValue = F("Hermann-Schöll-Weg");
        break;
    }
    case 141212:
    {
        returnValue = F("Hermann-Schöllhorn-Weg");
        break;
    }
    case 141213:
    {
        returnValue = F("Hermann-Schönecke-Str.");
        break;
    }
    case 141214:
    {
        returnValue = F("Hermann-Schöpflin-Str.");
        break;
    }
    case 141215:
    {
        returnValue = F("Hermann-Schütz-Str.");
        break;
    }
    case 141216:
    {
        returnValue = F("Hermann-Seeger-Str.");
        break;
    }
    case 141217:
    {
        returnValue = F("Hermann-Seeland-Str.");
        break;
    }
    case 141218:
    {
        returnValue = F("Hermann-Seger-Str.");
        break;
    }
    case 141219:
    {
        returnValue = F("Hermann-Seidel-Str.");
        break;
    }
    case 141220:
    {
        returnValue = F("Hermann-Seller-Str.");
        break;
    }
    case 141221:
    {
        returnValue = F("Hermann-Selzer-Str.");
        break;
    }
    case 141222:
    {
        returnValue = F("Hermann-Sernatinger-Str.");
        break;
    }
    case 141223:
    {
        returnValue = F("Hermann-Severit-Str.");
        break;
    }
    case 141224:
    {
        returnValue = F("Hermann-Sielcken-Str.");
        break;
    }
    case 141225:
    {
        returnValue = F("Hermann-Sievers-Weg");
        break;
    }
    case 141226:
    {
        returnValue = F("Hermann-Silbereisen-Str.");
        break;
    }
    case 141227:
    {
        returnValue = F("Hermann-Simon-Str.");
        break;
    }
    case 141228:
    {
        returnValue = F("Hermann-Sinsheimer Weg");
        break;
    }
    case 141229:
    {
        returnValue = F("Hermann-Smenkys-Weg");
        break;
    }
    case 141230:
    {
        returnValue = F("Hermann-Soldan-Str.");
        break;
    }
    case 141231:
    {
        returnValue = F("Hermann-Sonnet-Str.");
        break;
    }
    case 141232:
    {
        returnValue = F("Hermann-Spaich-Str.");
        break;
    }
    case 141233:
    {
        returnValue = F("Hermann-Spies-Weg");
        break;
    }
    case 141234:
    {
        returnValue = F("Hermann-Stapff-Str.");
        break;
    }
    case 141235:
    {
        returnValue = F("Hermann-Staudinger-Str.");
        break;
    }
    case 141236:
    {
        returnValue = F("Hermann-Steg");
        break;
    }
    case 141237:
    {
        returnValue = F("Hermann-Stehr-Str.");
        break;
    }
    case 141238:
    {
        returnValue = F("Hermann-Stehr-Weg");
        break;
    }
    case 141239:
    {
        returnValue = F("Hermann-Stein-Str.");
        break;
    }
    case 141240:
    {
        returnValue = F("Hermann-Steinhäuser-Str.");
        break;
    }
    case 141241:
    {
        returnValue = F("Hermann-Stickelmann-Str.");
        break;
    }
    case 141242:
    {
        returnValue = F("Hermann-Stiefvater-Ring");
        break;
    }
    case 141243:
    {
        returnValue = F("Hermann-Stockmann-Str.");
        break;
    }
    case 141244:
    {
        returnValue = F("Hermann-Stockmann-Weg");
        break;
    }
    case 141245:
    {
        returnValue = F("Hermann-Stoll-Str.");
        break;
    }
    case 141246:
    {
        returnValue = F("Hermann-Stolte-Str.");
        break;
    }
    case 141247:
    {
        returnValue = F("Hermann-Stotz-Str.");
        break;
    }
    case 141248:
    {
        returnValue = F("Hermann-Straaten-Platz");
        break;
    }
    case 141249:
    {
        returnValue = F("Hermann-Strewe-Str.");
        break;
    }
    case 141250:
    {
        returnValue = F("Hermann-Stöber-Str.");
        break;
    }
    case 141251:
    {
        returnValue = F("Hermann-Stöhr-Str.");
        break;
    }
    case 141252:
    {
        returnValue = F("Hermann-Sudermann-Allee");
        break;
    }
    case 141253:
    {
        returnValue = F("Hermann-Sudermann-Str.");
        break;
    }
    case 141254:
    {
        returnValue = F("Hermann-Sussann-Weg");
        break;
    }
    case 141255:
    {
        returnValue = F("Hermann-Suter-Str.");
        break;
    }
    case 141256:
    {
        returnValue = F("Hermann-Tast-Str.");
        break;
    }
    case 141257:
    {
        returnValue = F("Hermann-Tempel-Ring");
        break;
    }
    case 141258:
    {
        returnValue = F("Hermann-Tempel-Str.");
        break;
    }
    case 141259:
    {
        returnValue = F("Hermann-Terlinden-Weg");
        break;
    }
    case 141260:
    {
        returnValue = F("Hermann-Teubner-Str.");
        break;
    }
    case 141261:
    {
        returnValue = F("Hermann-Teuteberg-Kreisel");
        break;
    }
    case 141262:
    {
        returnValue = F("Hermann-Thelen-Platz");
        break;
    }
    case 141263:
    {
        returnValue = F("Hermann-Theodor-Schubert-Weg");
        break;
    }
    case 141264:
    {
        returnValue = F("Hermann-Thomas-Str.");
        break;
    }
    case 141265:
    {
        returnValue = F("Hermann-Thoms-Str.");
        break;
    }
    case 141266:
    {
        returnValue = F("Hermann-Tischler-Weg");
        break;
    }
    case 141267:
    {
        returnValue = F("Hermann-Tospan-Weg");
        break;
    }
    case 141268:
    {
        returnValue = F("Hermann-Trisch-Str.");
        break;
    }
    case 141269:
    {
        returnValue = F("Hermann-Tross-Winkel");
        break;
    }
    case 141270:
    {
        returnValue = F("Hermann-Tuleke-Str.");
        break;
    }
    case 141271:
    {
        returnValue = F("Hermann-Täubner-Weg");
        break;
    }
    case 141272:
    {
        returnValue = F("Hermann-Töppe-Str.");
        break;
    }
    case 141273:
    {
        returnValue = F("Hermann-Uhlig-Platz");
        break;
    }
    case 141274:
    {
        returnValue = F("Hermann-Unbefunde-Str.");
        break;
    }
    case 141275:
    {
        returnValue = F("Hermann-Unger-Allee");
        break;
    }
    case 141276:
    {
        returnValue = F("Hermann-Utech-Str.");
        break;
    }
    case 141277:
    {
        returnValue = F("Hermann-Vischer-Str.");
        break;
    }
    case 141278:
    {
        returnValue = F("Hermann-Vogel-Str.");
        break;
    }
    case 141279:
    {
        returnValue = F("Hermann-Vogelsang-Str.");
        break;
    }
    case 141280:
    {
        returnValue = F("Hermann-Voigt-Str.");
        break;
    }
    case 141281:
    {
        returnValue = F("Hermann-Voith-Str.");
        break;
    }
    case 141282:
    {
        returnValue = F("Hermann-Voland-Str.");
        break;
    }
    case 141283:
    {
        returnValue = F("Hermann-Vollmer-Weg");
        break;
    }
    case 141284:
    {
        returnValue = F("Hermann-Vollmers-Weg");
        break;
    }
    case 141285:
    {
        returnValue = F("Hermann-Vollrath-Str.");
        break;
    }
    case 141286:
    {
        returnValue = F("Hermann-Volz-Str.");
        break;
    }
    case 141287:
    {
        returnValue = F("Hermann-Vomhof-Str.");
        break;
    }
    case 141288:
    {
        returnValue = F("Hermann-Voss-Str.");
        break;
    }
    case 141289:
    {
        returnValue = F("Hermann-Voß-Str.");
        break;
    }
    case 141290:
    {
        returnValue = F("Hermann-Waescher-Str.");
        break;
    }
    case 141291:
    {
        returnValue = F("Hermann-Wagener-Str.");
        break;
    }
    case 141292:
    {
        returnValue = F("Hermann-Wagner-Str.");
        break;
    }
    case 141293:
    {
        returnValue = F("Hermann-Wahlers-Str.");
        break;
    }
    case 141294:
    {
        returnValue = F("Hermann-Waibel-Weg");
        break;
    }
    case 141295:
    {
        returnValue = F("Hermann-Walker-Str.");
        break;
    }
    case 141296:
    {
        returnValue = F("Hermann-Walz-Str.");
        break;
    }
    case 141297:
    {
        returnValue = F("Hermann-Wandke-Str.");
        break;
    }
    case 141298:
    {
        returnValue = F("Hermann-Weber-Str.");
        break;
    }
    case 141299:
    {
        returnValue = F("Hermann-Wehrle-Str.");
        break;
    }
    case 141300:
    {
        returnValue = F("Hermann-Weilacher-Str.");
        break;
    }
    case 141301:
    {
        returnValue = F("Hermann-Weißbrod-Str.");
        break;
    }
    case 141302:
    {
        returnValue = F("Hermann-Wellensiek-Str.");
        break;
    }
    case 141303:
    {
        returnValue = F("Hermann-Wember-Str.");
        break;
    }
    case 141304:
    {
        returnValue = F("Hermann-Werner-Str.");
        break;
    }
    case 141305:
    {
        returnValue = F("Hermann-Weyl-Str.");
        break;
    }
    case 141306:
    {
        returnValue = F("Hermann-Wiedner-Str.");
        break;
    }
    case 141307:
    {
        returnValue = F("Hermann-Wiehl-Str.");
        break;
    }
    case 141308:
    {
        returnValue = F("Hermann-Wild-Weg");
        break;
    }
    case 141309:
    {
        returnValue = F("Hermann-Wildung-Str.");
        break;
    }
    case 141310:
    {
        returnValue = F("Hermann-Willers-Weg");
        break;
    }
    case 141311:
    {
        returnValue = F("Hermann-Winter-Weg");
        break;
    }
    case 141312:
    {
        returnValue = F("Hermann-Wintz-Weg");
        break;
    }
    case 141313:
    {
        returnValue = F("Hermann-Wirth-Str.");
        break;
    }
    case 141314:
    {
        returnValue = F("Hermann-Wittmann-Str.");
        break;
    }
    case 141315:
    {
        returnValue = F("Hermann-Wittner-Str.");
        break;
    }
    case 141316:
    {
        returnValue = F("Hermann-Wißmann-Str.");
        break;
    }
    case 141317:
    {
        returnValue = F("Hermann-Wolf-Str.");
        break;
    }
    case 141318:
    {
        returnValue = F("Hermann-Woyack-Str.");
        break;
    }
    case 141319:
    {
        returnValue = F("Hermann-Wrede-Weg");
        break;
    }
    case 141320:
    {
        returnValue = F("Hermann-Währer-Str.");
        break;
    }
    case 141321:
    {
        returnValue = F("Hermann-Wäschke-Str.");
        break;
    }
    case 141322:
    {
        returnValue = F("Hermann-Wöhlke-Weg");
        break;
    }
    case 141323:
    {
        returnValue = F("Hermann-Wörner-Str.");
        break;
    }
    case 141324:
    {
        returnValue = F("Hermann-Wösner-Str.");
        break;
    }
    case 141325:
    {
        returnValue = F("Hermann-Wöste-Str.");
        break;
    }
    case 141326:
    {
        returnValue = F("Hermann-Wünsche-Str.");
        break;
    }
    case 141327:
    {
        returnValue = F("Hermann-Zack-Weg");
        break;
    }
    case 141328:
    {
        returnValue = F("Hermann-Zschoche-Str.");
        break;
    }
    case 141329:
    {
        returnValue = F("Hermann-Zurlage-Str.");
        break;
    }
    case 141330:
    {
        returnValue = F("Hermann-Zäh-Verbindungsweg");
        break;
    }
    case 141331:
    {
        returnValue = F("Hermann-Zäh-Weg");
        break;
    }
    case 141332:
    {
        returnValue = F("Hermann-Zürrlein-Str.");
        break;
    }
    case 141333:
    {
        returnValue = F("Hermann-van-den-Berg-Str.");
        break;
    }
    case 141334:
    {
        returnValue = F("Hermann-van-der-Heide-Str.");
        break;
    }
    case 141335:
    {
        returnValue = F("Hermann-von-Barth-Str.");
        break;
    }
    case 141336:
    {
        returnValue = F("Hermann-von-Bezzel-Str.");
        break;
    }
    case 141337:
    {
        returnValue = F("Hermann-von-Gaisberg-Str.");
        break;
    }
    case 141338:
    {
        returnValue = F("Hermann-von-Helmholtz-Str.");
        break;
    }
    case 141339:
    {
        returnValue = F("Hermann-von-Horsten-Weg");
        break;
    }
    case 141340:
    {
        returnValue = F("Hermann-von-Maltzan-Weg");
        break;
    }
    case 141341:
    {
        returnValue = F("Hermann-von-Mittnacht-Str.");
        break;
    }
    case 141342:
    {
        returnValue = F("Hermann-von-Moreau-Str.");
        break;
    }
    case 141343:
    {
        returnValue = F("Hermann-von-Röell-Str.");
        break;
    }
    case 141344:
    {
        returnValue = F("Hermann-von-Salza-Str.");
        break;
    }
    case 141345:
    {
        returnValue = F("Hermann-von-Schleusen-Str.");
        break;
    }
    case 141346:
    {
        returnValue = F("Hermann-von-Stein-Str.");
        break;
    }
    case 141347:
    {
        returnValue = F("Hermann-von-Vicari-Str.");
        break;
    }
    case 141348:
    {
        returnValue = F("Hermann-von-Vultee-Weg");
        break;
    }
    case 141349:
    {
        returnValue = F("Hermann-von-Wanthoff-Str.");
        break;
    }
    case 141350:
    {
        returnValue = F("Hermann-von-der-Becke-Str.");
        break;
    }
    case 141351:
    {
        returnValue = F("Hermann-Österle-Str.");
        break;
    }
    case 141352:
    {
        returnValue = F("Hermannberger Str.");
        break;
    }
    case 141353:
    {
        returnValue = F("Hermannesweg");
        break;
    }
    case 141354:
    {
        returnValue = F("Hermanngraben");
        break;
    }
    case 141355:
    {
        returnValue = F("Hermannistr.");
        break;
    }
    case 141356:
    {
        returnValue = F("Hermannm-Scheer-Weg");
        break;
    }
    case 141357:
    {
        returnValue = F("Hermannreuth Siedlung");
        break;
    }
    case 141358:
    {
        returnValue = F("Hermannröder Str.");
        break;
    }
    case 141359:
    {
        returnValue = F("Hermanns Pad");
        break;
    }
    case 141360:
    {
        returnValue = F("Hermanns Ruh");
        break;
    }
    case 141361:
    {
        returnValue = F("Hermanns Wald");
        break;
    }
    case 141362:
    {
        returnValue = F("Hermanns Weg");
        break;
    }
    case 141363:
    {
        returnValue = F("Hermannsacker-Chausee");
        break;
    }
    case 141364:
    {
        returnValue = F("Hermannsackerweg");
        break;
    }
    case 141365:
    {
        returnValue = F("Hermannsallee");
        break;
    }
    case 141366:
    {
        returnValue = F("Hermannsau");
        break;
    }
    case 141367:
    {
        returnValue = F("Hermannsberg");
        break;
    }
    case 141368:
    {
        returnValue = F("Hermannsberg Weg");
        break;
    }
    case 141369:
    {
        returnValue = F("Hermannsberger Str.");
        break;
    }
    case 141370:
    {
        returnValue = F("Hermannsberger Weg");
        break;
    }
    case 141371:
    {
        returnValue = F("Hermannsbergstr.");
        break;
    }
    case 141372:
    {
        returnValue = F("Hermannsbergweg");
        break;
    }
    case 141373:
    {
        returnValue = F("Hermannsborn");
        break;
    }
    case 141374:
    {
        returnValue = F("Hermannsbrücke");
        break;
    }
    case 141375:
    {
        returnValue = F("Hermannsburg");
        break;
    }
    case 141376:
    {
        returnValue = F("Hermannsburger Landstr.");
        break;
    }
    case 141377:
    {
        returnValue = F("Hermannsburger Str.");
        break;
    }
    case 141378:
    {
        returnValue = F("Hermannsburgstr.");
        break;
    }
    case 141379:
    {
        returnValue = F("Hermannsbühl");
        break;
    }
    case 141380:
    {
        returnValue = F("Hermannschacht-Str.");
        break;
    }
    case 141381:
    {
        returnValue = F("Hermannschell");
        break;
    }
    case 141382:
    {
        returnValue = F("Hermannscher Weg");
        break;
    }
    case 141383:
    {
        returnValue = F("Hermannsdamm");
        break;
    }
    case 141384:
    {
        returnValue = F("Hermannsdorf");
        break;
    }
    case 141385:
    {
        returnValue = F("Hermannsdorfer Str.");
        break;
    }
    case 141386:
    {
        returnValue = F("Hermannsdorfer Weg");
        break;
    }
    case 141387:
    {
        returnValue = F("Hermannsdorferstr.");
        break;
    }
    case 141388:
    {
        returnValue = F("Hermannsdorferweg");
        break;
    }
    case 141389:
    {
        returnValue = F("Hermannseck");
        break;
    }
    case 141390:
    {
        returnValue = F("Hermannsfeld");
        break;
    }
    case 141391:
    {
        returnValue = F("Hermannsfelder Str.");
        break;
    }
    case 141392:
    {
        returnValue = F("Hermannsgasse");
        break;
    }
    case 141393:
    {
        returnValue = F("Hermannsgrund");
        break;
    }
    case 141394:
    {
        returnValue = F("Hermannshain");
        break;
    }
    case 141395:
    {
        returnValue = F("Hermannshainer Str.");
        break;
    }
    case 141396:
    {
        returnValue = F("Hermannshecke");
        break;
    }
    case 141397:
    {
        returnValue = F("Hermannshof");
        break;
    }
    case 141398:
    {
        returnValue = F("Hermannshofer Weg");
        break;
    }
    case 141399:
    {
        returnValue = F("Hermannshäger Str.");
        break;
    }
    case 141400:
    {
        returnValue = F("Hermannshöh");
        break;
    }
    case 141401:
    {
        returnValue = F("Hermannshöhe");
        break;
    }
    case 141402:
    {
        returnValue = F("Hermannskirchener Str.");
        break;
    }
    case 141403:
    {
        returnValue = F("Hermannslust");
        break;
    }
    case 141404:
    {
        returnValue = F("Hermannslück");
        break;
    }
    case 141405:
    {
        returnValue = F("Hermannsmühle");
        break;
    }
    case 141406:
    {
        returnValue = F("Hermannsorter Weg");
        break;
    }
    case 141407:
    {
        returnValue = F("Hermannspad");
        break;
    }
    case 141408:
    {
        returnValue = F("Hermannspfad");
        break;
    }
    case 141409:
    {
        returnValue = F("Hermannsplatz");
        break;
    }
    case 141410:
    {
        returnValue = F("Hermannsreuth");
        break;
    }
    case 141411:
    {
        returnValue = F("Hermannsreuth Dorf");
        break;
    }
    case 141412:
    {
        returnValue = F("Hermannsrieder Str.");
        break;
    }
    case 141413:
    {
        returnValue = F("Hermannsrodaer Str.");
        break;
    }
    case 141414:
    {
        returnValue = F("Hermannsruh");
        break;
    }
    case 141415:
    {
        returnValue = F("Hermannsstr.");
        break;
    }
    case 141416:
    {
        returnValue = F("Hermannstadt Str.");
        break;
    }
    case 141417:
    {
        returnValue = F("Hermannstal");
        break;
    }
    case 141418:
    {
        returnValue = F("Hermannsteiner Str.");
        break;
    }
    case 141419:
    {
        returnValue = F("Hermannsteiner Weg");
        break;
    }
    case 141420:
    {
        returnValue = F("Hermannsteinstr.");
        break;
    }
    case 141421:
    {
        returnValue = F("Hermannsthal");
        break;
    }
    case 141422:
    {
        returnValue = F("Hermannstr.");
        break;
    }
    case 141423:
    {
        returnValue = F("Hermannstädter Gasse");
        break;
    }
    case 141424:
    {
        returnValue = F("Hermannstädter Platz");
        break;
    }
    case 141425:
    {
        returnValue = F("Hermannstädter Str.");
        break;
    }
    case 141426:
    {
        returnValue = F("Hermannstädter Weg");
        break;
    }
    case 141427:
    {
        returnValue = F("Hermannsweg");
        break;
    }
    case 141428:
    {
        returnValue = F("Hermannswiese");
        break;
    }
    case 141429:
    {
        returnValue = F("Hermannus-Contractus-Str.");
        break;
    }
    case 141430:
    {
        returnValue = F("Hermannus-Müller-Weg");
        break;
    }
    case 141431:
    {
        returnValue = F("Hermannweg");
        break;
    }
    case 141432:
    {
        returnValue = F("Hermans Mühle");
        break;
    }
    case 141433:
    {
        returnValue = F("Hermansgasse");
        break;
    }
    case 141434:
    {
        returnValue = F("Hermanshöhe");
        break;
    }
    case 141435:
    {
        returnValue = F("Hermanstr.");
        break;
    }
    case 141436:
    {
        returnValue = F("Hermaringer Str.");
        break;
    }
    case 141437:
    {
        returnValue = F("Hermastr.");
        break;
    }
    case 141438:
    {
        returnValue = F("Hermasweg");
        break;
    }
    case 141439:
    {
        returnValue = F("Hermeleallee");
        break;
    }
    case 141440:
    {
        returnValue = F("Hermeles-Rundweg");
        break;
    }
    case 141441:
    {
        returnValue = F("Hermelestr.");
        break;
    }
    case 141442:
    {
        returnValue = F("Hermelesäcker");
        break;
    }
    case 141443:
    {
        returnValue = F("Hermelingdiek");
        break;
    }
    case 141444:
    {
        returnValue = F("Hermelingskamp");
        break;
    }
    case 141445:
    {
        returnValue = F("Hermelinhof");
        break;
    }
    case 141446:
    {
        returnValue = F("Hermelinspur");
        break;
    }
    case 141447:
    {
        returnValue = F("Hermelinsteig");
        break;
    }
    case 141448:
    {
        returnValue = F("Hermelinstr.");
        break;
    }
    case 141449:
    {
        returnValue = F("Hermelinweg");
        break;
    }
    case 141450:
    {
        returnValue = F("Hermelsteinweg");
        break;
    }
    case 141451:
    {
        returnValue = F("Hermenfriedstr.");
        break;
    }
    case 141452:
    {
        returnValue = F("Hermenstr.");
        break;
    }
    case 141453:
    {
        returnValue = F("Hermenteil");
        break;
    }
    case 141454:
    {
        returnValue = F("Hermerather Str.");
        break;
    }
    case 141455:
    {
        returnValue = F("Hermerathermühle");
        break;
    }
    case 141456:
    {
        returnValue = F("Hermersbachstr.");
        break;
    }
    case 141457:
    {
        returnValue = F("Hermersberg");
        break;
    }
    case 141458:
    {
        returnValue = F("Hermersberger Str.");
        break;
    }
    case 141459:
    {
        returnValue = F("Hermersberger Weg");
        break;
    }
    case 141460:
    {
        returnValue = F("Hermersbergerstr.");
        break;
    }
    case 141461:
    {
        returnValue = F("Hermersbergweg");
        break;
    }
    case 141462:
    {
        returnValue = F("Hermersbodenweg");
        break;
    }
    case 141463:
    {
        returnValue = F("Hermersdorfer Hauptstr.");
        break;
    }
    case 141464:
    {
        returnValue = F("Hermersdorfer Str.");
        break;
    }
    case 141465:
    {
        returnValue = F("Hermershäuser Str.");
        break;
    }
    case 141466:
    {
        returnValue = F("Hermerthal");
        break;
    }
    case 141467:
    {
        returnValue = F("Hermes Benden");
        break;
    }
    case 141468:
    {
        returnValue = F("Hermesbach");
        break;
    }
    case 141469:
    {
        returnValue = F("Hermesbachweg");
        break;
    }
    case 141470:
    {
        returnValue = F("Hermesberg");
        break;
    }
    case 141471:
    {
        returnValue = F("Hermesbergweg");
        break;
    }
    case 141472:
    {
        returnValue = F("Hermesbornstr.");
        break;
    }
    case 141473:
    {
        returnValue = F("Hermesbuschweg");
        break;
    }
    case 141474:
    {
        returnValue = F("Hermesdorfer Str.");
        break;
    }
    case 141475:
    {
        returnValue = F("Hermesdorfer Weg");
        break;
    }
    case 141476:
    {
        returnValue = F("Hermesdür");
        break;
    }
    case 141477:
    {
        returnValue = F("Hermesfeld");
        break;
    }
    case 141478:
    {
        returnValue = F("Hermesgarten");
        break;
    }
    case 141479:
    {
        returnValue = F("Hermesgasse");
        break;
    }
    case 141480:
    {
        returnValue = F("Hermeshecke");
        break;
    }
    case 141481:
    {
        returnValue = F("Hermeshof");
        break;
    }
    case 141482:
    {
        returnValue = F("Hermeshofweg");
        break;
    }
    case 141483:
    {
        returnValue = F("Hermeshoven");
        break;
    }
    case 141484:
    {
        returnValue = F("Hermeskeiler Str.");
        break;
    }
    case 141485:
    {
        returnValue = F("Hermesplatz");
        break;
    }
    case 141486:
    {
        returnValue = F("Hermessiepen");
        break;
    }
    case 141487:
    {
        returnValue = F("Hermesstieg");
        break;
    }
    case 141488:
    {
        returnValue = F("Hermesstr.");
        break;
    }
    case 141489:
    {
        returnValue = F("Hermesweg");
        break;
    }
    case 141490:
    {
        returnValue = F("Hermeswies");
        break;
    }
    case 141491:
    {
        returnValue = F("Hermetsbuck");
        break;
    }
    case 141492:
    {
        returnValue = F("Hermetzenklinger Weg");
        break;
    }
    case 141493:
    {
        returnValue = F("Hermhain");
        break;
    }
    case 141494:
    {
        returnValue = F("Hermicker Weg");
        break;
    }
    case 141495:
    {
        returnValue = F("Hermin-Herr-Weg");
        break;
    }
    case 141496:
    {
        returnValue = F("Hermine-Albers-Str.");
        break;
    }
    case 141497:
    {
        returnValue = F("Hermine-Bareiss-Weg");
        break;
    }
    case 141498:
    {
        returnValue = F("Hermine-Bößenecker-Weg");
        break;
    }
    case 141499:
    {
        returnValue = F("Hermine-Knuth-Str.");
        break;
    }
    case 141500:
    {
        returnValue = F("Hermine-Körner-Str.");
        break;
    }
    case 141501:
    {
        returnValue = F("Hermine-Maierheuser-Str.");
        break;
    }
    case 141502:
    {
        returnValue = F("Herminenruhhüttenweg");
        break;
    }
    case 141503:
    {
        returnValue = F("Herminenstr.");
        break;
    }
    case 141504:
    {
        returnValue = F("Herminghauspark");
        break;
    }
    case 141505:
    {
        returnValue = F("Hermolderweg");
        break;
    }
    case 141506:
    {
        returnValue = F("Herms Meyer Weg");
        break;
    }
    case 141507:
    {
        returnValue = F("Herms-Heuweg");
        break;
    }
    case 141508:
    {
        returnValue = F("Hermsdorf");
        break;
    }
    case 141509:
    {
        returnValue = F("Hermsdorfer Allee");
        break;
    }
    case 141510:
    {
        returnValue = F("Hermsdorfer Höhe");
        break;
    }
    case 141511:
    {
        returnValue = F("Hermsdorfer Ring");
        break;
    }
    case 141512:
    {
        returnValue = F("Hermsdorfer Str.");
        break;
    }
    case 141513:
    {
        returnValue = F("Hermsdorfer Weg");
        break;
    }
    case 141514:
    {
        returnValue = F("Hermsgrüner Str.");
        break;
    }
    case 141515:
    {
        returnValue = F("Hermsgrüner Weg");
        break;
    }
    case 141516:
    {
        returnValue = F("Hermshof");
        break;
    }
    case 141517:
    {
        returnValue = F("Hermstedter Str.");
        break;
    }
    case 141518:
    {
        returnValue = F("Hermstedtstr.");
        break;
    }
    case 141519:
    {
        returnValue = F("Hermuthäuser Str.");
        break;
    }
    case 141520:
    {
        returnValue = F("Hermülheim Burgpark");
        break;
    }
    case 141521:
    {
        returnValue = F("Hermülheimer Str.");
        break;
    }
    case 141522:
    {
        returnValue = F("Hernee Str.");
        break;
    }
    case 141523:
    {
        returnValue = F("Herner Allee");
        break;
    }
    case 141524:
    {
        returnValue = F("Herner Platz");
        break;
    }
    case 141525:
    {
        returnValue = F("Herner Str.");
        break;
    }
    case 141526:
    {
        returnValue = F("Herner Weg");
        break;
    }
    case 141527:
    {
        returnValue = F("Hernishöfe");
        break;
    }
    case 141528:
    {
        returnValue = F("Hernsterstr.");
        break;
    }
    case 141529:
    {
        returnValue = F("Hero-von-Werdum-Str.");
        break;
    }
    case 141530:
    {
        returnValue = F("Herolder Str.");
        break;
    }
    case 141531:
    {
        returnValue = F("Herolder Weg");
        break;
    }
    case 141532:
    {
        returnValue = F("Heroldhausen");
        break;
    }
    case 141533:
    {
        returnValue = F("Heroldishäuser Str.");
        break;
    }
    case 141534:
    {
        returnValue = F("Heroldplatz");
        break;
    }
    case 141535:
    {
        returnValue = F("Heroldsbacher Str.");
        break;
    }
    case 141536:
    {
        returnValue = F("Heroldsbachweg");
        break;
    }
    case 141537:
    {
        returnValue = F("Heroldsberg");
        break;
    }
    case 141538:
    {
        returnValue = F("Heroldsberger Mühlweg");
        break;
    }
    case 141539:
    {
        returnValue = F("Heroldsberger Str.");
        break;
    }
    case 141540:
    {
        returnValue = F("Heroldsberger Weg");
        break;
    }
    case 141541:
    {
        returnValue = F("Heroldshof");
        break;
    }
    case 141542:
    {
        returnValue = F("Heroldsleite");
        break;
    }
    case 141543:
    {
        returnValue = F("Heroldstetter Weg");
        break;
    }
    case 141544:
    {
        returnValue = F("Heroldstr.");
        break;
    }
    case 141545:
    {
        returnValue = F("Heroldsweg");
        break;
    }
    case 141546:
    {
        returnValue = F("Heroldweg");
        break;
    }
    case 141547:
    {
        returnValue = F("Heroltstr.");
        break;
    }
    case 141548:
    {
        returnValue = F("Heroltweg");
        break;
    }
    case 141549:
    {
        returnValue = F("Herolzer Str.");
        break;
    }
    case 141550:
    {
        returnValue = F("Heronger Feld");
        break;
    }
    case 141551:
    {
        returnValue = F("Heronger Str.");
        break;
    }
    case 141552:
    {
        returnValue = F("Herostr.");
        break;
    }
    case 141553:
    {
        returnValue = F("Herosépark");
        break;
    }
    case 141554:
    {
        returnValue = F("Heroséstr.");
        break;
    }
    case 141555:
    {
        returnValue = F("Herpeleweg");
        break;
    }
    case 141556:
    {
        returnValue = F("Herpellstr.");
        break;
    }
    case 141557:
    {
        returnValue = F("Herpelshof");
        break;
    }
    case 141558:
    {
        returnValue = F("Herpersdorfer Hauptstr.");
        break;
    }
    case 141559:
    {
        returnValue = F("Herpersdorfer Str.");
        break;
    }
    case 141560:
    {
        returnValue = F("Herpfengasse");
        break;
    }
    case 141561:
    {
        returnValue = F("Herpfenried");
        break;
    }
    case 141562:
    {
        returnValue = F("Herpfer Fußweg");
        break;
    }
    case 141563:
    {
        returnValue = F("Herpfer Str.");
        break;
    }
    case 141564:
    {
        returnValue = F("Herpiner Weg");
        break;
    }
    case 141565:
    {
        returnValue = F("Herppichsberg");
        break;
    }
    case 141566:
    {
        returnValue = F("Herquetstr.");
        break;
    }
    case 141567:
    {
        returnValue = F("Herr-von-Koch-Str.");
        break;
    }
    case 141568:
    {
        returnValue = F("Herradelweg");
        break;
    }
    case 141569:
    {
        returnValue = F("Herrather Str.");
        break;
    }
    case 141570:
    {
        returnValue = F("Herrberigstr.");
        break;
    }
    case 141571:
    {
        returnValue = F("Herrbornstr.");
        break;
    }
    case 141572:
    {
        returnValue = F("Herreder Str.");
        break;
    }
    case 141573:
    {
        returnValue = F("Herregaardlei");
        break;
    }
    case 141574:
    {
        returnValue = F("Herregaardlück");
        break;
    }
    case 141575:
    {
        returnValue = F("Herren Helmer");
        break;
    }
    case 141576:
    {
        returnValue = F("Herren-Von-Ried-Str.");
        break;
    }
    case 141577:
    {
        returnValue = F("Herren-von-Eppstein-Str.");
        break;
    }
    case 141578:
    {
        returnValue = F("Herrenacht");
        break;
    }
    case 141579:
    {
        returnValue = F("Herrenachtstr.");
        break;
    }
    case 141580:
    {
        returnValue = F("Herrenacker");
        break;
    }
    case 141581:
    {
        returnValue = F("Herrenackerstr.");
        break;
    }
    case 141582:
    {
        returnValue = F("Herrenackerweg");
        break;
    }
    case 141583:
    {
        returnValue = F("Herrenalber Str.");
        break;
    }
    case 141584:
    {
        returnValue = F("Herrenalber Weg");
        break;
    }
    case 141585:
    {
        returnValue = F("Herrenallee");
        break;
    }
    case 141586:
    {
        returnValue = F("Herrenanger");
        break;
    }
    case 141587:
    {
        returnValue = F("Herrenangerstr.");
        break;
    }
    case 141588:
    {
        returnValue = F("Herrenaubrücke");
        break;
    }
    case 141589:
    {
        returnValue = F("Herrenauer Str.");
        break;
    }
    case 141590:
    {
        returnValue = F("Herrenaustr.");
        break;
    }
    case 141591:
    {
        returnValue = F("Herrenbache");
        break;
    }
    case 141592:
    {
        returnValue = F("Herrenbachstr.");
        break;
    }
    case 141593:
    {
        returnValue = F("Herrenbachweg");
        break;
    }
    case 141594:
    {
        returnValue = F("Herrenbadsteig");
        break;
    }
    case 141595:
    {
        returnValue = F("Herrenbeer");
        break;
    }
    case 141596:
    {
        returnValue = F("Herrenberg");
        break;
    }
    case 141597:
    {
        returnValue = F("Herrenberge");
        break;
    }
    case 141598:
    {
        returnValue = F("Herrenberger Str.");
        break;
    }
    case 141599:
    {
        returnValue = F("Herrenberger Weg");
        break;
    }
    case 141600:
    {
        returnValue = F("Herrenbergstr.");
        break;
    }
    case 141601:
    {
        returnValue = F("Herrenbergsweg");
        break;
    }
    case 141602:
    {
        returnValue = F("Herrenbergweg");
        break;
    }
    case 141603:
    {
        returnValue = F("Herrenbirkachweg");
        break;
    }
    case 141604:
    {
        returnValue = F("Herrenbleiche");
        break;
    }
    case 141605:
    {
        returnValue = F("Herrenbreite");
        break;
    }
    case 141606:
    {
        returnValue = F("Herrenbrinkern");
        break;
    }
    case 141607:
    {
        returnValue = F("Herrenbruch");
        break;
    }
    case 141608:
    {
        returnValue = F("Herrenbruchstr.");
        break;
    }
    case 141609:
    {
        returnValue = F("Herrenbruchweg");
        break;
    }
    case 141610:
    {
        returnValue = F("Herrenbrunnenstr.");
        break;
    }
    case 141611:
    {
        returnValue = F("Herrenbrunnenweg");
        break;
    }
    case 141612:
    {
        returnValue = F("Herrenbröl");
        break;
    }
    case 141613:
    {
        returnValue = F("Herrenbrücke");
        break;
    }
    case 141614:
    {
        returnValue = F("Herrenbrühlweg");
        break;
    }
    case 141615:
    {
        returnValue = F("Herrenbrümmer");
        break;
    }
    case 141616:
    {
        returnValue = F("Herrenbuckweg");
        break;
    }
    case 141617:
    {
        returnValue = F("Herrenburgstr.");
        break;
    }
    case 141618:
    {
        returnValue = F("Herrenbuschweg");
        break;
    }
    case 141619:
    {
        returnValue = F("Herrenbühl");
        break;
    }
    case 141620:
    {
        returnValue = F("Herrenbühlstr.");
        break;
    }
    case 141621:
    {
        returnValue = F("Herrenbühndtstr.");
        break;
    }
    case 141622:
    {
        returnValue = F("Herrenchiemseestr.");
        break;
    }
    case 141623:
    {
        returnValue = F("Herrendamm");
        break;
    }
    case 141624:
    {
        returnValue = F("Herrendeich");
        break;
    }
    case 141625:
    {
        returnValue = F("Herrendiek");
        break;
    }
    case 141626:
    {
        returnValue = F("Herrendienstanger");
        break;
    }
    case 141627:
    {
        returnValue = F("Herrendienststr.");
        break;
    }
    case 141628:
    {
        returnValue = F("Herrendienstweg");
        break;
    }
    case 141629:
    {
        returnValue = F("Herrenesch");
        break;
    }
    case 141630:
    {
        returnValue = F("Herrenfeld");
        break;
    }
    case 141631:
    {
        returnValue = F("Herrenfeldchen");
        break;
    }
    case 141632:
    {
        returnValue = F("Herrenfelder Str.");
        break;
    }
    case 141633:
    {
        returnValue = F("Herrenfeldstr.");
        break;
    }
    case 141634:
    {
        returnValue = F("Herrenfeldweg");
        break;
    }
    case 141635:
    {
        returnValue = F("Herrenfleckweg");
        break;
    }
    case 141636:
    {
        returnValue = F("Herrenfurtweg");
        break;
    }
    case 141637:
    {
        returnValue = F("Herrengarten");
        break;
    }
    case 141638:
    {
        returnValue = F("Herrengartenpark");
        break;
    }
    case 141639:
    {
        returnValue = F("Herrengartenstr.");
        break;
    }
    case 141640:
    {
        returnValue = F("Herrengartenweg");
        break;
    }
    case 141641:
    {
        returnValue = F("Herrengasse");
        break;
    }
    case 141642:
    {
        returnValue = F("Herrengasse Marktplatz");
        break;
    }
    case 141643:
    {
        returnValue = F("Herrengaßl");
        break;
    }
    case 141644:
    {
        returnValue = F("Herrengestell");
        break;
    }
    case 141645:
    {
        returnValue = F("Herrengraben");
        break;
    }
    case 141646:
    {
        returnValue = F("Herrengrabenstr.");
        break;
    }
    case 141647:
    {
        returnValue = F("Herrengrabenweg");
        break;
    }
    case 141648:
    {
        returnValue = F("Herrengrund");
        break;
    }
    case 141649:
    {
        returnValue = F("Herrengrundstr.");
        break;
    }
    case 141650:
    {
        returnValue = F("Herrengut");
        break;
    }
    case 141651:
    {
        returnValue = F("Herrengutweg");
        break;
    }
    case 141652:
    {
        returnValue = F("Herrengärten");
        break;
    }
    case 141653:
    {
        returnValue = F("Herrengässle");
        break;
    }
    case 141654:
    {
        returnValue = F("Herrengäßchen");
        break;
    }
    case 141655:
    {
        returnValue = F("Herrengäßle");
        break;
    }
    case 141656:
    {
        returnValue = F("Herrenhagen");
        break;
    }
    case 141657:
    {
        returnValue = F("Herrenhahnweg");
        break;
    }
    case 141658:
    {
        returnValue = F("Herrenhaide");
        break;
    }
    case 141659:
    {
        returnValue = F("Herrenhaider Str.");
        break;
    }
    case 141660:
    {
        returnValue = F("Herrenhain");
        break;
    }
    case 141661:
    {
        returnValue = F("Herrenhalde");
        break;
    }
    case 141662:
    {
        returnValue = F("Herrenhaldenstr.");
        break;
    }
    case 141663:
    {
        returnValue = F("Herrenhaus-Park");
        break;
    }
    case 141664:
    {
        returnValue = F("Herrenhausen");
        break;
    }
    case 141665:
    {
        returnValue = F("Herrenhauser Str.");
        break;
    }
    case 141666:
    {
        returnValue = F("Herrenhausgasse");
        break;
    }
    case 141667:
    {
        returnValue = F("Herrenhausplatz");
        break;
    }
    case 141668:
    {
        returnValue = F("Herrenhausstr.");
        break;
    }
    case 141669:
    {
        returnValue = F("Herrenhaustr.");
        break;
    }
    case 141670:
    {
        returnValue = F("Herrenhausweg");
        break;
    }
    case 141671:
    {
        returnValue = F("Herrenheeg");
        break;
    }
    case 141672:
    {
        returnValue = F("Herrenheide");
        break;
    }
    case 141673:
    {
        returnValue = F("Herrenhof");
        break;
    }
    case 141674:
    {
        returnValue = F("Herrenhofer Str.");
        break;
    }
    case 141675:
    {
        returnValue = F("Herrenhofer Weg");
        break;
    }
    case 141676:
    {
        returnValue = F("Herrenhofstr.");
        break;
    }
    case 141677:
    {
        returnValue = F("Herrenhofweg");
        break;
    }
    case 141678:
    {
        returnValue = F("Herrenholz");
        break;
    }
    case 141679:
    {
        returnValue = F("Herrenholzstr.");
        break;
    }
    case 141680:
    {
        returnValue = F("Herrenholzweg");
        break;
    }
    case 141681:
    {
        returnValue = F("Herrenhorst");
        break;
    }
    case 141682:
    {
        returnValue = F("Herrenhufenstr.");
        break;
    }
    case 141683:
    {
        returnValue = F("Herrenhäuschenweg");
        break;
    }
    case 141684:
    {
        returnValue = F("Herrenhäuser Schnellweg");
        break;
    }
    case 141685:
    {
        returnValue = F("Herrenhäuser Str.");
        break;
    }
    case 141686:
    {
        returnValue = F("Herrenhöfe");
        break;
    }
    case 141687:
    {
        returnValue = F("Herrenhöfer Str.");
        break;
    }
    case 141688:
    {
        returnValue = F("Herrenhöfer Weg");
        break;
    }
    case 141689:
    {
        returnValue = F("Herrenhöfle");
        break;
    }
    case 141690:
    {
        returnValue = F("Herrenhöhe");
        break;
    }
    case 141691:
    {
        returnValue = F("Herrenhölzle");
        break;
    }
    case 141692:
    {
        returnValue = F("Herrenhüttener Str.");
        break;
    }
    case 141693:
    {
        returnValue = F("Herrenhüttenweg");
        break;
    }
    case 141694:
    {
        returnValue = F("Herrenkamp");
        break;
    }
    case 141695:
    {
        returnValue = F("Herrenkampsweg");
        break;
    }
    case 141696:
    {
        returnValue = F("Herrenkampweg");
        break;
    }
    case 141697:
    {
        returnValue = F("Herrenkauler Allee");
        break;
    }
    case 141698:
    {
        returnValue = F("Herrenkoogstr.");
        break;
    }
    case 141699:
    {
        returnValue = F("Herrenkopfbrücke");
        break;
    }
    case 141700:
    {
        returnValue = F("Herrenkopftraufweg");
        break;
    }
    case 141701:
    {
        returnValue = F("Herrenkopfweg");
        break;
    }
    case 141702:
    {
        returnValue = F("Herrenkreuzweg");
        break;
    }
    case 141703:
    {
        returnValue = F("Herrenkrugstr.");
        break;
    }
    case 141704:
    {
        returnValue = F("Herrenkrugweg");
        break;
    }
    case 141705:
    {
        returnValue = F("Herrenkämpe");
        break;
    }
    case 141706:
    {
        returnValue = F("Herrenkäpfle-Haldenweg");
        break;
    }
    case 141707:
    {
        returnValue = F("Herrenlandpark");
        break;
    }
    case 141708:
    {
        returnValue = F("Herrenlandstr.");
        break;
    }
    case 141709:
    {
        returnValue = F("Herrenlandsweg");
        break;
    }
    case 141710:
    {
        returnValue = F("Herrenlayweg");
        break;
    }
    case 141711:
    {
        returnValue = F("Herrenleite");
        break;
    }
    case 141712:
    {
        returnValue = F("Herrenleithengasse");
        break;
    }
    case 141713:
    {
        returnValue = F("Herrenlettenweg");
        break;
    }
    case 141714:
    {
        returnValue = F("Herrenlose");
        break;
    }
    case 141715:
    {
        returnValue = F("Herrenmahd");
        break;
    }
    case 141716:
    {
        returnValue = F("Herrenmahdweg");
        break;
    }
    case 141717:
    {
        returnValue = F("Herrenmarter");
        break;
    }
    case 141718:
    {
        returnValue = F("Herrenmatt");
        break;
    }
    case 141719:
    {
        returnValue = F("Herrenmatte");
        break;
    }
    case 141720:
    {
        returnValue = F("Herrenmattstr.");
        break;
    }
    case 141721:
    {
        returnValue = F("Herrenmattweg");
        break;
    }
    case 141722:
    {
        returnValue = F("Herrenmeedeweg");
        break;
    }
    case 141723:
    {
        returnValue = F("Herrenmoor");
        break;
    }
    case 141724:
    {
        returnValue = F("Herrenmoordamm");
        break;
    }
    case 141725:
    {
        returnValue = F("Herrenmoorsweg");
        break;
    }
    case 141726:
    {
        returnValue = F("Herrenmoorweg");
        break;
    }
    case 141727:
    {
        returnValue = F("Herrenmühle");
        break;
    }
    case 141728:
    {
        returnValue = F("Herrenmühlenacker");
        break;
    }
    case 141729:
    {
        returnValue = F("Herrenmühlenstr.");
        break;
    }
    case 141730:
    {
        returnValue = F("Herrenmühlenweg");
        break;
    }
    case 141731:
    {
        returnValue = F("Herrenmühlsteg");
        break;
    }
    case 141732:
    {
        returnValue = F("Herrenmühlstr.");
        break;
    }
    case 141733:
    {
        returnValue = F("Herrenmühlsweg");
        break;
    }
    case 141734:
    {
        returnValue = F("Herrenmühlweg");
        break;
    }
    case 141735:
    {
        returnValue = F("Herrenneuenstr.");
        break;
    }
    case 141736:
    {
        returnValue = F("Herrenortsweg");
        break;
    }
    case 141737:
    {
        returnValue = F("Herrenpaint");
        break;
    }
    case 141738:
    {
        returnValue = F("Herrenpfad");
        break;
    }
    case 141739:
    {
        returnValue = F("Herrenpfad-Süd");
        break;
    }
    case 141740:
    {
        returnValue = F("Herrenpferchstr.");
        break;
    }
    case 141741:
    {
        returnValue = F("Herrenpforte");
        break;
    }
    case 141742:
    {
        returnValue = F("Herrenpfädel");
        break;
    }
    case 141743:
    {
        returnValue = F("Herrenplatz");
        break;
    }
    case 141744:
    {
        returnValue = F("Herrenreuth");
        break;
    }
    case 141745:
    {
        returnValue = F("Herrenring");
        break;
    }
    case 141746:
    {
        returnValue = F("Herrenrothstr.");
        break;
    }
    case 141747:
    {
        returnValue = F("Herrenruhmweg");
        break;
    }
    case 141748:
    {
        returnValue = F("Herrensand");
        break;
    }
    case 141749:
    {
        returnValue = F("Herrensberger Weg");
        break;
    }
    case 141750:
    {
        returnValue = F("Herrenschachenweg");
        break;
    }
    case 141751:
    {
        returnValue = F("Herrenschlag");
        break;
    }
    case 141752:
    {
        returnValue = F("Herrenschwaigallee");
        break;
    }
    case 141753:
    {
        returnValue = F("Herrenschwamm");
        break;
    }
    case 141754:
    {
        returnValue = F("Herrenschwanderkopfstrasse");
        break;
    }
    case 141755:
    {
        returnValue = F("Herrenseeallee");
        break;
    }
    case 141756:
    {
        returnValue = F("Herrenseestr.");
        break;
    }
    case 141757:
    {
        returnValue = F("Herrenseifen");
        break;
    }
    case 141758:
    {
        returnValue = F("Herrenshoffer Str.");
        break;
    }
    case 141759:
    {
        returnValue = F("Herrensiefen");
        break;
    }
    case 141760:
    {
        returnValue = F("Herrensitz von Campe");
        break;
    }
    case 141761:
    {
        returnValue = F("Herrenstall");
        break;
    }
    case 141762:
    {
        returnValue = F("Herrenstecke");
        break;
    }
    case 141763:
    {
        returnValue = F("Herrensteg");
        break;
    }
    case 141764:
    {
        returnValue = F("Herrensteig");
        break;
    }
    case 141765:
    {
        returnValue = F("Herrensteige");
        break;
    }
    case 141766:
    {
        returnValue = F("Herrenstein");
        break;
    }
    case 141767:
    {
        returnValue = F("Herrensteiner Weg");
        break;
    }
    case 141768:
    {
        returnValue = F("Herrensteinfelder Weg");
        break;
    }
    case 141769:
    {
        returnValue = F("Herrensteinstr.");
        break;
    }
    case 141770:
    {
        returnValue = F("Herrenstettener Weg");
        break;
    }
    case 141771:
    {
        returnValue = F("Herrenstetter Weg");
        break;
    }
    case 141772:
    {
        returnValue = F("Herrenstr.");
        break;
    }
    case 141773:
    {
        returnValue = F("Herrenstrandstr.");
        break;
    }
    case 141774:
    {
        returnValue = F("Herrenstück");
        break;
    }
    case 141775:
    {
        returnValue = F("Herrenteich");
        break;
    }
    case 141776:
    {
        returnValue = F("Herrentheystr.");
        break;
    }
    case 141777:
    {
        returnValue = F("Herrentischstr.");
        break;
    }
    case 141778:
    {
        returnValue = F("Herrentälchen");
        break;
    }
    case 141779:
    {
        returnValue = F("Herrenvie");
        break;
    }
    case 141780:
    {
        returnValue = F("Herrenwaag");
        break;
    }
    case 141781:
    {
        returnValue = F("Herrenwald");
        break;
    }
    case 141782:
    {
        returnValue = F("Herrenwalde");
        break;
    }
    case 141783:
    {
        returnValue = F("Herrenwalde-Oberdörfel");
        break;
    }
    case 141784:
    {
        returnValue = F("Herrenwalder Str.");
        break;
    }
    case 141785:
    {
        returnValue = F("Herrenwalderstr.");
        break;
    }
    case 141786:
    {
        returnValue = F("Herrenwaldstr.");
        break;
    }
    case 141787:
    {
        returnValue = F("Herrenwaldweg");
        break;
    }
    case 141788:
    {
        returnValue = F("Herrenwall");
        break;
    }
    case 141789:
    {
        returnValue = F("Herrenwasserköpfle");
        break;
    }
    case 141790:
    {
        returnValue = F("Herrenweg");
        break;
    }
    case 141791:
    {
        returnValue = F("Herrenweide");
        break;
    }
    case 141792:
    {
        returnValue = F("Herrenweiher");
        break;
    }
    case 141793:
    {
        returnValue = F("Herrenweiherpark");
        break;
    }
    case 141794:
    {
        returnValue = F("Herrenweingärten");
        break;
    }
    case 141795:
    {
        returnValue = F("Herrenwies");
        break;
    }
    case 141796:
    {
        returnValue = F("Herrenwiese");
        break;
    }
    case 141797:
    {
        returnValue = F("Herrenwiesen");
        break;
    }
    case 141798:
    {
        returnValue = F("Herrenwiesenring");
        break;
    }
    case 141799:
    {
        returnValue = F("Herrenwiesenstr.");
        break;
    }
    case 141800:
    {
        returnValue = F("Herrenwiesental");
        break;
    }
    case 141801:
    {
        returnValue = F("Herrenwiesenweg");
        break;
    }
    case 141802:
    {
        returnValue = F("Herrenwieser Schwallung");
        break;
    }
    case 141803:
    {
        returnValue = F("Herrenwieser Weg");
        break;
    }
    case 141804:
    {
        returnValue = F("Herrenwieserweg");
        break;
    }
    case 141805:
    {
        returnValue = F("Herrenwiesstr.");
        break;
    }
    case 141806:
    {
        returnValue = F("Herrenwiesweg");
        break;
    }
    case 141807:
    {
        returnValue = F("Herrenwingert");
        break;
    }
    case 141808:
    {
        returnValue = F("Herrenwäldele");
        break;
    }
    case 141809:
    {
        returnValue = F("Herrenwäldlestr.");
        break;
    }
    case 141810:
    {
        returnValue = F("Herrenwörthstr.");
        break;
    }
    case 141811:
    {
        returnValue = F("Herrenzimmern");
        break;
    }
    case 141812:
    {
        returnValue = F("Herrenzimmerner Str.");
        break;
    }
    case 141813:
    {
        returnValue = F("Herrenäcker");
        break;
    }
    case 141814:
    {
        returnValue = F("Herrenäckerstr.");
        break;
    }
    case 141815:
    {
        returnValue = F("Herrenäckerweg");
        break;
    }
    case 141816:
    {
        returnValue = F("Herrenängerweg");
        break;
    }
    case 141817:
    {
        returnValue = F("Herrenörterweg");
        break;
    }
    case 141818:
    {
        returnValue = F("Herresbacher Str.");
        break;
    }
    case 141819:
    {
        returnValue = F("Herresbachstr.");
        break;
    }
    case 141820:
    {
        returnValue = F("Herresdorfstr.");
        break;
    }
    case 141821:
    {
        returnValue = F("Herreshagener Str.");
        break;
    }
    case 141822:
    {
        returnValue = F("Herressener Str.");
        break;
    }
    case 141823:
    {
        returnValue = F("Herressener Weg");
        break;
    }
    case 141824:
    {
        returnValue = F("Herresthal");
        break;
    }
    case 141825:
    {
        returnValue = F("Herresthaler Str.");
        break;
    }
    case 141826:
    {
        returnValue = F("Herresthaler Weg");
        break;
    }
    case 141827:
    {
        returnValue = F("Herrestorffstr.");
        break;
    }
    case 141828:
    {
        returnValue = F("Herrestr.");
        break;
    }
    case 141829:
    {
        returnValue = F("Herrether Weg");
        break;
    }
    case 141830:
    {
        returnValue = F("Herretshofer Str.");
        break;
    }
    case 141831:
    {
        returnValue = F("Herrgasse");
        break;
    }
    case 141832:
    {
        returnValue = F("Herrgottallee");
        break;
    }
    case 141833:
    {
        returnValue = F("Herrgottsackerweg");
        break;
    }
    case 141834:
    {
        returnValue = F("Herrgottsau");
        break;
    }
    case 141835:
    {
        returnValue = F("Herrgottsberg");
        break;
    }
    case 141836:
    {
        returnValue = F("Herrgottsbergweg");
        break;
    }
    case 141837:
    {
        returnValue = F("Herrgottsgasse");
        break;
    }
    case 141838:
    {
        returnValue = F("Herrgottsruher Weg");
        break;
    }
    case 141839:
    {
        returnValue = F("Herrgottsruhstr.");
        break;
    }
    case 141840:
    {
        returnValue = F("Herrgottsruhweg");
        break;
    }
    case 141841:
    {
        returnValue = F("Herrgottstannenweg");
        break;
    }
    case 141842:
    {
        returnValue = F("Herrgottsteige");
        break;
    }
    case 141843:
    {
        returnValue = F("Herrgottstr.");
        break;
    }
    case 141844:
    {
        returnValue = F("Herrgottsweg");
        break;
    }
    case 141845:
    {
        returnValue = F("Herrgottsweiler");
        break;
    }
    case 141846:
    {
        returnValue = F("Herrgottswiesenweg");
        break;
    }
    case 141847:
    {
        returnValue = F("Herrgottswinkel");
        break;
    }
    case 141848:
    {
        returnValue = F("Herrgottsäcker");
        break;
    }
    case 141849:
    {
        returnValue = F("Herrhäuser Str.");
        break;
    }
    case 141850:
    {
        returnValue = F("Herrichstr.");
        break;
    }
    case 141851:
    {
        returnValue = F("Herriedener Str.");
        break;
    }
    case 141852:
    {
        returnValue = F("Herrieder Str.");
        break;
    }
    case 141853:
    {
        returnValue = F("Herrieder Weg");
        break;
    }
    case 141854:
    {
        returnValue = F("Herriger Str.");
        break;
    }
    case 141855:
    {
        returnValue = F("Herriger Weg");
        break;
    }
    case 141856:
    {
        returnValue = F("Herrigsweg");
        break;
    }
    case 141857:
    {
        returnValue = F("Herringastr.");
        break;
    }
    case 141858:
    {
        returnValue = F("Herringhausen");
        break;
    }
    case 141859:
    {
        returnValue = F("Herringhauser Str.");
        break;
    }
    case 141860:
    {
        returnValue = F("Herringser Höfe");
        break;
    }
    case 141861:
    {
        returnValue = F("Herringser Weg");
        break;
    }
    case 141862:
    {
        returnValue = F("Herringsweg");
        break;
    }
    case 141863:
    {
        returnValue = F("Herrlache");
        break;
    }
    case 141864:
    {
        returnValue = F("Herrlberg");
        break;
    }
    case 141865:
    {
        returnValue = F("Herrleingasse");
        break;
    }
    case 141866:
    {
        returnValue = F("Herrleinsgasse");
        break;
    }
    case 141867:
    {
        returnValue = F("Herrleinstr.");
        break;
    }
    case 141868:
    {
        returnValue = F("Herrleinweg");
        break;
    }
    case 141869:
    {
        returnValue = F("Herrlesgartenstr.");
        break;
    }
    case 141870:
    {
        returnValue = F("Herrlesgraben");
        break;
    }
    case 141871:
    {
        returnValue = F("Herrlesgässle");
        break;
    }
    case 141872:
    {
        returnValue = F("Herrlichkeit");
        break;
    }
    case 141873:
    {
        returnValue = F("Herrlichkeitsstr.");
        break;
    }
    case 141874:
    {
        returnValue = F("Herrlichsgasse");
        break;
    }
    case 141875:
    {
        returnValue = F("Herrlichstr.");
        break;
    }
    case 141876:
    {
        returnValue = F("Herrlinger Str.");
        break;
    }
    case 141877:
    {
        returnValue = F("Herrlinghausen");
        break;
    }
    case 141878:
    {
        returnValue = F("Herrlinghauser Hang");
        break;
    }
    case 141879:
    {
        returnValue = F("Herrlingsweg");
        break;
    }
    case 141880:
    {
        returnValue = F("Herrlohtunnel");
        break;
    }
    case 141881:
    {
        returnValue = F("Herrlohweg");
        break;
    }
    case 141882:
    {
        returnValue = F("Herrman-Löns-Str.");
        break;
    }
    case 141883:
    {
        returnValue = F("Herrman-Scipio-Str.");
        break;
    }
    case 141884:
    {
        returnValue = F("Herrmann Tritschler Weg");
        break;
    }
    case 141885:
    {
        returnValue = F("Herrmann-Boßdorf-Str.");
        break;
    }
    case 141886:
    {
        returnValue = F("Herrmann-Dietrich-Weg");
        break;
    }
    case 141887:
    {
        returnValue = F("Herrmann-Frank-Str.");
        break;
    }
    case 141888:
    {
        returnValue = F("Herrmann-Föry-Str.");
        break;
    }
    case 141889:
    {
        returnValue = F("Herrmann-Gmeiner-Weg");
        break;
    }
    case 141890:
    {
        returnValue = F("Herrmann-Heigl-Str.");
        break;
    }
    case 141891:
    {
        returnValue = F("Herrmann-Hesse-Str.");
        break;
    }
    case 141892:
    {
        returnValue = F("Herrmann-Hesse-Weg");
        break;
    }
    case 141893:
    {
        returnValue = F("Herrmann-Löns-Platz");
        break;
    }
    case 141894:
    {
        returnValue = F("Herrmann-Münz-Kreisel");
        break;
    }
    case 141895:
    {
        returnValue = F("Herrmann-Otto-Str.");
        break;
    }
    case 141896:
    {
        returnValue = F("Herrmann-Sendelbach-Str.");
        break;
    }
    case 141897:
    {
        returnValue = F("Herrmann-Sinsheimer-Weg");
        break;
    }
    case 141898:
    {
        returnValue = F("Herrmann-Steiner-Str.");
        break;
    }
    case 141899:
    {
        returnValue = F("Herrmann-Söllner-Str.");
        break;
    }
    case 141900:
    {
        returnValue = F("Herrmann-Töppe-Str.");
        break;
    }
    case 141901:
    {
        returnValue = F("Herrmann-Vischer-Str.");
        break;
    }
    case 141902:
    {
        returnValue = F("Herrmann-und-Bertl-Müller-Str.");
        break;
    }
    case 141903:
    {
        returnValue = F("Herrmanns Teich Park");
        break;
    }
    case 141904:
    {
        returnValue = F("Herrmannsberg");
        break;
    }
    case 141905:
    {
        returnValue = F("Herrmannsbergweg");
        break;
    }
    case 141906:
    {
        returnValue = F("Herrmannsgarten");
        break;
    }
    case 141907:
    {
        returnValue = F("Herrmannsgasse");
        break;
    }
    case 141908:
    {
        returnValue = F("Herrmannsgrüner Str.");
        break;
    }
    case 141909:
    {
        returnValue = F("Herrmannsgrüner Weg");
        break;
    }
    case 141910:
    {
        returnValue = F("Herrmannsgäßchen");
        break;
    }
    case 141911:
    {
        returnValue = F("Herrmannsruhweg");
        break;
    }
    case 141912:
    {
        returnValue = F("Herrmannstr.");
        break;
    }
    case 141913:
    {
        returnValue = F("Herrmannsweg");
        break;
    }
    case 141914:
    {
        returnValue = F("Herrmannswinkel");
        break;
    }
    case 141915:
    {
        returnValue = F("Herrn-Kamp-Weg");
        break;
    }
    case 141916:
    {
        returnValue = F("Herrnacker");
        break;
    }
    case 141917:
    {
        returnValue = F("Herrnackerstr.");
        break;
    }
    case 141918:
    {
        returnValue = F("Herrnackerweg");
        break;
    }
    case 141919:
    {
        returnValue = F("Herrnanger");
        break;
    }
    case 141920:
    {
        returnValue = F("Herrnangerweg");
        break;
    }
    case 141921:
    {
        returnValue = F("Herrnbaustr.");
        break;
    }
    case 141922:
    {
        returnValue = F("Herrnberchtheim");
        break;
    }
    case 141923:
    {
        returnValue = F("Herrnberchtheimer Str.");
        break;
    }
    case 141924:
    {
        returnValue = F("Herrnberg");
        break;
    }
    case 141925:
    {
        returnValue = F("Herrnberger Weg");
        break;
    }
    case 141926:
    {
        returnValue = F("Herrnbergstr.");
        break;
    }
    case 141927:
    {
        returnValue = F("Herrnbildweg");
        break;
    }
    case 141928:
    {
        returnValue = F("Herrnbitz");
        break;
    }
    case 141929:
    {
        returnValue = F("Herrnbrunnen");
        break;
    }
    case 141930:
    {
        returnValue = F("Herrnbrunnstr.");
        break;
    }
    case 141931:
    {
        returnValue = F("Herrnbühlstr.");
        break;
    }
    case 141932:
    {
        returnValue = F("Herrneigenweg");
        break;
    }
    case 141933:
    {
        returnValue = F("Herrnfeld");
        break;
    }
    case 141934:
    {
        returnValue = F("Herrnfelden");
        break;
    }
    case 141935:
    {
        returnValue = F("Herrnfeldener Str.");
        break;
    }
    case 141936:
    {
        returnValue = F("Herrnfeldstr.");
        break;
    }
    case 141937:
    {
        returnValue = F("Herrngarten");
        break;
    }
    case 141938:
    {
        returnValue = F("Herrngartenstr.");
        break;
    }
    case 141939:
    {
        returnValue = F("Herrngartenweg");
        break;
    }
    case 141940:
    {
        returnValue = F("Herrngasse");
        break;
    }
    case 141941:
    {
        returnValue = F("Herrnhaag");
        break;
    }
    case 141942:
    {
        returnValue = F("Herrnhaager Str.");
        break;
    }
    case 141943:
    {
        returnValue = F("Herrnhallig");
        break;
    }
    case 141944:
    {
        returnValue = F("Herrnhauser Str.");
        break;
    }
    case 141945:
    {
        returnValue = F("Herrnhof");
        break;
    }
    case 141946:
    {
        returnValue = F("Herrnhofstr.");
        break;
    }
    case 141947:
    {
        returnValue = F("Herrnholz");
        break;
    }
    case 141948:
    {
        returnValue = F("Herrnholzstr.");
        break;
    }
    case 141949:
    {
        returnValue = F("Herrnholzweg");
        break;
    }
    case 141950:
    {
        returnValue = F("Herrnhubstr.");
        break;
    }
    case 141951:
    {
        returnValue = F("Herrnhuter Allee");
        break;
    }
    case 141952:
    {
        returnValue = F("Herrnhuter Str.");
        break;
    }
    case 141953:
    {
        returnValue = F("Herrnhuter Weg");
        break;
    }
    case 141954:
    {
        returnValue = F("Herrnhäuser Str.");
        break;
    }
    case 141955:
    {
        returnValue = F("Herrnkamp");
        break;
    }
    case 141956:
    {
        returnValue = F("Herrnleitenweg");
        break;
    }
    case 141957:
    {
        returnValue = F("Herrnleithe");
        break;
    }
    case 141958:
    {
        returnValue = F("Herrnmühle");
        break;
    }
    case 141959:
    {
        returnValue = F("Herrnmühlweg");
        break;
    }
    case 141960:
    {
        returnValue = F("Herrnpfad");
        break;
    }
    case 141961:
    {
        returnValue = F("Herrnpoint");
        break;
    }
    case 141962:
    {
        returnValue = F("Herrnried");
        break;
    }
    case 141963:
    {
        returnValue = F("Herrnroth");
        break;
    }
    case 141964:
    {
        returnValue = F("Herrnröte");
        break;
    }
    case 141965:
    {
        returnValue = F("Herrnröther Str.");
        break;
    }
    case 141966:
    {
        returnValue = F("Herrnröther Weg");
        break;
    }
    case 141967:
    {
        returnValue = F("Herrnsaaler Ring");
        break;
    }
    case 141968:
    {
        returnValue = F("Herrnsaaler Weg");
        break;
    }
    case 141969:
    {
        returnValue = F("Herrnscheider Weg");
        break;
    }
    case 141970:
    {
        returnValue = F("Herrnschirm-Schneise");
        break;
    }
    case 141971:
    {
        returnValue = F("Herrnschlag");
        break;
    }
    case 141972:
    {
        returnValue = F("Herrnschlagweg");
        break;
    }
    case 141973:
    {
        returnValue = F("Herrnschneise");
        break;
    }
    case 141974:
    {
        returnValue = F("Herrnschwender Str.");
        break;
    }
    case 141975:
    {
        returnValue = F("Herrnsdorfer Hauptstr.");
        break;
    }
    case 141976:
    {
        returnValue = F("Herrnsdorfer Str.");
        break;
    }
    case 141977:
    {
        returnValue = F("Herrnsheim");
        break;
    }
    case 141978:
    {
        returnValue = F("Herrnsheimer Hauptstr.");
        break;
    }
    case 141979:
    {
        returnValue = F("Herrnsheimer Schlosspark");
        break;
    }
    case 141980:
    {
        returnValue = F("Herrnsheimer Str.");
        break;
    }
    case 141981:
    {
        returnValue = F("Herrnsteig");
        break;
    }
    case 141982:
    {
        returnValue = F("Herrnsteinstr.");
        break;
    }
    case 141983:
    {
        returnValue = F("Herrnstr.");
        break;
    }
    case 141984:
    {
        returnValue = F("Herrnstückschneise");
        break;
    }
    case 141985:
    {
        returnValue = F("Herrntal");
        break;
    }
    case 141986:
    {
        returnValue = F("Herrntor");
        break;
    }
    case 141987:
    {
        returnValue = F("Herrntroper Str.");
        break;
    }
    case 141988:
    {
        returnValue = F("Herrnwahlthanner Str.");
        break;
    }
    case 141989:
    {
        returnValue = F("Herrnwald");
        break;
    }
    case 141990:
    {
        returnValue = F("Herrnwaldstr.");
        break;
    }
    case 141991:
    {
        returnValue = F("Herrnweg");
        break;
    }
    case 141992:
    {
        returnValue = F("Herrnweiherweg");
        break;
    }
    case 141993:
    {
        returnValue = F("Herrnwiesen");
        break;
    }
    case 141994:
    {
        returnValue = F("Herrnwiesen-Schneise");
        break;
    }
    case 141995:
    {
        returnValue = F("Herrnwiesenweg");
        break;
    }
    case 141996:
    {
        returnValue = F("Herrnzeller Str.");
        break;
    }
    case 141997:
    {
        returnValue = F("Herrnäckerstr.");
        break;
    }
    case 141998:
    {
        returnValue = F("Herrotweg");
        break;
    }
    case 141999:
    {
        returnValue = F("Herrschaftliche Heide");
        break;
    }
    case 142000:
    {
        returnValue = F("Herrschaftliche Trift");
        break;
    }
    case 142001:
    {
        returnValue = F("Herrschaftlicher Kamp");
        break;
    }
    case 142002:
    {
        returnValue = F("Herrschaftlicher Weg");
        break;
    }
    case 142003:
    {
        returnValue = F("Herrschaftliches Feld");
        break;
    }
    case 142004:
    {
        returnValue = F("Herrschaftsacker");
        break;
    }
    case 142005:
    {
        returnValue = F("Herrschaftsbreite");
        break;
    }
    case 142006:
    {
        returnValue = F("Herrschaftsbrücke");
        break;
    }
    case 142007:
    {
        returnValue = F("Herrschaftsfeld");
        break;
    }
    case 142008:
    {
        returnValue = F("Herrschaftsgarten");
        break;
    }
    case 142009:
    {
        returnValue = F("Herrschaftsgartenstr.");
        break;
    }
    case 142010:
    {
        returnValue = F("Herrschaftsgärten");
        break;
    }
    case 142011:
    {
        returnValue = F("Herrschaftsklingenstr.");
        break;
    }
    case 142012:
    {
        returnValue = F("Herrschaftsstr.");
        break;
    }
    case 142013:
    {
        returnValue = F("Herrschaftswaldweg");
        break;
    }
    case 142014:
    {
        returnValue = F("Herrschaftsweg");
        break;
    }
    case 142015:
    {
        returnValue = F("Herrschaftswiesen");
        break;
    }
    case 142016:
    {
        returnValue = F("Herrschaftsäcker");
        break;
    }
    case 142017:
    {
        returnValue = F("Herrschichstr.");
        break;
    }
    case 142018:
    {
        returnValue = F("Herrschinger Str.");
        break;
    }
    case 142019:
    {
        returnValue = F("Herrschinger Weg");
        break;
    }
    case 142020:
    {
        returnValue = F("Herrsteiner Str.");
        break;
    }
    case 142021:
    {
        returnValue = F("Herrweg");
        break;
    }
    case 142022:
    {
        returnValue = F("Herrweierhof");
        break;
    }
    case 142023:
    {
        returnValue = F("Herrwiese");
        break;
    }
    case 142024:
    {
        returnValue = F("Herrwiesenweg");
        break;
    }
    case 142025:
    {
        returnValue = F("Herrzehntenweg");
        break;
    }
    case 142026:
    {
        returnValue = F("Hersbach");
        break;
    }
    case 142027:
    {
        returnValue = F("Hersbarg");
        break;
    }
    case 142028:
    {
        returnValue = F("Hersbergweg");
        break;
    }
    case 142029:
    {
        returnValue = F("Hersbrucker Str.");
        break;
    }
    case 142030:
    {
        returnValue = F("Hersbrucker Weg");
        break;
    }
    case 142031:
    {
        returnValue = F("Hersbruckerstr.");
        break;
    }
    case 142032:
    {
        returnValue = F("Herschbacher Weg");
        break;
    }
    case 142033:
    {
        returnValue = F("Herschberg");
        break;
    }
    case 142034:
    {
        returnValue = F("Herschberger Str.");
        break;
    }
    case 142035:
    {
        returnValue = F("Herschbroicher Str.");
        break;
    }
    case 142036:
    {
        returnValue = F("Herschdorf");
        break;
    }
    case 142037:
    {
        returnValue = F("Herschdorfer Str.");
        break;
    }
    case 142038:
    {
        returnValue = F("Herscheider Landstr.");
        break;
    }
    case 142039:
    {
        returnValue = F("Herscheider Mühle");
        break;
    }
    case 142040:
    {
        returnValue = F("Herscheider Str.");
        break;
    }
    case 142041:
    {
        returnValue = F("Herscheider Weg");
        break;
    }
    case 142042:
    {
        returnValue = F("Herscheidstr.");
        break;
    }
    case 142043:
    {
        returnValue = F("Herscheidsweg");
        break;
    }
    case 142044:
    {
        returnValue = F("Herschelberg");
        break;
    }
    case 142045:
    {
        returnValue = F("Herscheler Weg");
        break;
    }
    case 142046:
    {
        returnValue = F("Herschelhof");
        break;
    }
    case 142047:
    {
        returnValue = F("Herschelstr.");
        break;
    }
    case 142048:
    {
        returnValue = F("Herschelweg");
        break;
    }
    case 142049:
    {
        returnValue = F("Herschenhofen");
        break;
    }
    case 142050:
    {
        returnValue = F("Herschenzmühle");
        break;
    }
    case 142051:
    {
        returnValue = F("Herschfelder Str.");
        break;
    }
    case 142052:
    {
        returnValue = F("Herschgrund");
        break;
    }
    case 142053:
    {
        returnValue = F("Herschkamp");
        break;
    }
    case 142054:
    {
        returnValue = F("Hersdorfer Str.");
        break;
    }
    case 142055:
    {
        returnValue = F("Hersdorfplatz");
        break;
    }
    case 142056:
    {
        returnValue = F("Hersdorfstr.");
        break;
    }
    case 142057:
    {
        returnValue = F("Hersebünte");
        break;
    }
    case 142058:
    {
        returnValue = F("Herseler Str.");
        break;
    }
    case 142059:
    {
        returnValue = F("Herseler Weg");
        break;
    }
    case 142060:
    {
        returnValue = F("Herseler Werth, Steg 1");
        break;
    }
    case 142061:
    {
        returnValue = F("Herseler Werth, Steg 2");
        break;
    }
    case 142062:
    {
        returnValue = F("Herseln");
        break;
    }
    case 142063:
    {
        returnValue = F("Hersfelder Eckchen");
        break;
    }
    case 142064:
    {
        returnValue = F("Hersfelder Str.");
        break;
    }
    case 142065:
    {
        returnValue = F("Hersfelder Tor");
        break;
    }
    case 142066:
    {
        returnValue = F("Hersiek");
        break;
    }
    case 142067:
    {
        returnValue = F("Hersingstr.");
        break;
    }
    case 142068:
    {
        returnValue = F("Herskamp");
        break;
    }
    case 142069:
    {
        returnValue = F("Herspenweg");
        break;
    }
    case 142070:
    {
        returnValue = F("Hersteller Str.");
        break;
    }
    case 142071:
    {
        returnValue = F("Herster Str.");
        break;
    }
    case 142072:
    {
        returnValue = F("Herstweg");
        break;
    }
    case 142073:
    {
        returnValue = F("Herta-Duvenkropp-Str.");
        break;
    }
    case 142074:
    {
        returnValue = F("Herta-Klingbeil-Str.");
        break;
    }
    case 142075:
    {
        returnValue = F("Herta-Mannheimer-Weg");
        break;
    }
    case 142076:
    {
        returnValue = F("Herta-Mansbacher-Anlage");
        break;
    }
    case 142077:
    {
        returnValue = F("Herta-Müller-Str.");
        break;
    }
    case 142078:
    {
        returnValue = F("Hertastr.");
        break;
    }
    case 142079:
    {
        returnValue = F("Hertaweg");
        break;
    }
    case 142080:
    {
        returnValue = F("Hertebau");
        break;
    }
    case 142081:
    {
        returnValue = F("Herteberg");
        break;
    }
    case 142082:
    {
        returnValue = F("Hertefelder Chaussee");
        break;
    }
    case 142083:
    {
        returnValue = F("Hertefelder Dorfstr.");
        break;
    }
    case 142084:
    {
        returnValue = F("Hertefelder Str.");
        break;
    }
    case 142085:
    {
        returnValue = F("Hertefelder Weg");
        break;
    }
    case 142086:
    {
        returnValue = F("Herteler Str.");
        break;
    }
    case 142087:
    {
        returnValue = F("Hertelsbrunnenring");
        break;
    }
    case 142088:
    {
        returnValue = F("Hertelsbrunner Hof");
        break;
    }
    case 142089:
    {
        returnValue = F("Hertelsgrundweg");
        break;
    }
    case 142090:
    {
        returnValue = F("Hertelshof");
        break;
    }
    case 142091:
    {
        returnValue = F("Hertelsleite");
        break;
    }
    case 142092:
    {
        returnValue = F("Hertelstr.");
        break;
    }
    case 142093:
    {
        returnValue = F("Hertelweg");
        break;
    }
    case 142094:
    {
        returnValue = F("Hertenberg");
        break;
    }
    case 142095:
    {
        returnValue = F("Hertener Str.");
        break;
    }
    case 142096:
    {
        returnValue = F("Hertenicher Weg");
        break;
    }
    case 142097:
    {
        returnValue = F("Hertensteinweg");
        break;
    }
    case 142098:
    {
        returnValue = F("Hertenweg");
        break;
    }
    case 142099:
    {
        returnValue = F("Hertenwinkelstr.");
        break;
    }
    case 142100:
    {
        returnValue = F("Hertergrube");
        break;
    }
    case 142101:
    {
        returnValue = F("Herterichweg");
        break;
    }
    case 142102:
    {
        returnValue = F("Herterleite");
        break;
    }
    case 142103:
    {
        returnValue = F("Hertershofen");
        break;
    }
    case 142104:
    {
        returnValue = F("Hertershofener Str.");
        break;
    }
    case 142105:
    {
        returnValue = F("Hertersplatz");
        break;
    }
    case 142106:
    {
        returnValue = F("Herterstr.");
        break;
    }
    case 142107:
    {
        returnValue = F("Hertewinkel");
        break;
    }
    case 142108:
    {
        returnValue = F("Hertfelderstr.");
        break;
    }
    case 142109:
    {
        returnValue = F("Herth");
        break;
    }
    case 142110:
    {
        returnValue = F("Hertha-Feiler-Weg");
        break;
    }
    case 142111:
    {
        returnValue = F("Hertha-Koenig-Str.");
        break;
    }
    case 142112:
    {
        returnValue = F("Hertha-Kuna-Anlage");
        break;
    }
    case 142113:
    {
        returnValue = F("Hertha-Lindner-Str.");
        break;
    }
    case 142114:
    {
        returnValue = F("Hertha-Petersen-Str.");
        break;
    }
    case 142115:
    {
        returnValue = F("Hertha-Savelsberg-Str.");
        break;
    }
    case 142116:
    {
        returnValue = F("Hertha-Sponer-Kehre");
        break;
    }
    case 142117:
    {
        returnValue = F("Hertha-Sponer-Str.");
        break;
    }
    case 142118:
    {
        returnValue = F("Hertha-Wiegand-Str.");
        break;
    }
    case 142119:
    {
        returnValue = F("Herthaseestr.");
        break;
    }
    case 142120:
    {
        returnValue = F("Herthastr.");
        break;
    }
    case 142121:
    {
        returnValue = F("Herthumstr.");
        break;
    }
    case 142122:
    {
        returnValue = F("Hertichstr.");
        break;
    }
    case 142123:
    {
        returnValue = F("Hertighofer Str.");
        break;
    }
    case 142124:
    {
        returnValue = F("Hertigswalde");
        break;
    }
    case 142125:
    {
        returnValue = F("Hertigswalder Kirchweg");
        break;
    }
    case 142126:
    {
        returnValue = F("Hertigswalder Str.");
        break;
    }
    case 142127:
    {
        returnValue = F("Hertingen");
        break;
    }
    case 142128:
    {
        returnValue = F("Hertinger Str.");
        break;
    }
    case 142129:
    {
        returnValue = F("Hertinger Weg");
        break;
    }
    case 142130:
    {
        returnValue = F("Hertingerstr.");
        break;
    }
    case 142131:
    {
        returnValue = F("Hertingsbergstr.");
        break;
    }
    case 142132:
    {
        returnValue = F("Hertingshäuser Str.");
        break;
    }
    case 142133:
    {
        returnValue = F("Hertingskreuz");
        break;
    }
    case 142134:
    {
        returnValue = F("Hertingweg");
        break;
    }
    case 142135:
    {
        returnValue = F("Hertinsweg");
        break;
    }
    case 142136:
    {
        returnValue = F("Hertleinsbergweg");
        break;
    }
    case 142137:
    {
        returnValue = F("Hertleinsgasse");
        break;
    }
    case 142138:
    {
        returnValue = F("Hertleinsplatz");
        break;
    }
    case 142139:
    {
        returnValue = F("Hertleinstr.");
        break;
    }
    case 142140:
    {
        returnValue = F("Hertleinweg");
        break;
    }
    case 142141:
    {
        returnValue = F("Hertlingsgasse");
        break;
    }
    case 142142:
    {
        returnValue = F("Hertlingshauser Str.");
        break;
    }
    case 142143:
    {
        returnValue = F("Hertlingstr.");
        break;
    }
    case 142144:
    {
        returnValue = F("Hertlingweg");
        break;
    }
    case 142145:
    {
        returnValue = F("Hertlinstr.");
        break;
    }
    case 142146:
    {
        returnValue = F("Hertmanner Kirchweg");
        break;
    }
    case 142147:
    {
        returnValue = F("Hertmannsweiler Weg");
        break;
    }
    case 142148:
    {
        returnValue = F("Hertogweg");
        break;
    }
    case 142149:
    {
        returnValue = F("Hertrain");
        break;
    }
    case 142150:
    {
        returnValue = F("Hertterweg");
        break;
    }
    case 142151:
    {
        returnValue = F("Hertweg");
        break;
    }
    case 142152:
    {
        returnValue = F("Hertwigshof");
        break;
    }
    case 142153:
    {
        returnValue = F("Hertwigstr.");
        break;
    }
    case 142154:
    {
        returnValue = F("Hertzallee");
        break;
    }
    case 142155:
    {
        returnValue = F("Hertzerpromenade");
        break;
    }
    case 142156:
    {
        returnValue = F("Hertzhaimerstr.");
        break;
    }
    case 142157:
    {
        returnValue = F("Hertzigerie");
        break;
    }
    case 142158:
    {
        returnValue = F("Hertzstr.");
        break;
    }
    case 142159:
    {
        returnValue = F("Hertzweg");
        break;
    }
    case 142160:
    {
        returnValue = F("Hervel");
        break;
    }
    case 142161:
    {
        returnValue = F("Hervertsweg");
        break;
    }
    case 142162:
    {
        returnValue = F("Hervester Brücke");
        break;
    }
    case 142163:
    {
        returnValue = F("Hervester Str.");
        break;
    }
    case 142164:
    {
        returnValue = F("Hervetsweiler Str.");
        break;
    }
    case 142165:
    {
        returnValue = F("Hervorster Str.");
        break;
    }
    case 142166:
    {
        returnValue = F("Herwartgasse");
        break;
    }
    case 142167:
    {
        returnValue = F("Herwarthelstr.");
        break;
    }
    case 142168:
    {
        returnValue = F("Herwarthstr.");
        break;
    }
    case 142169:
    {
        returnValue = F("Herwartstr.");
        break;
    }
    case 142170:
    {
        returnValue = F("Herweg");
        break;
    }
    case 142171:
    {
        returnValue = F("Herweger Schleifkotten");
        break;
    }
    case 142172:
    {
        returnValue = F("Herweghring");
        break;
    }
    case 142173:
    {
        returnValue = F("Herweghstr.");
        break;
    }
    case 142174:
    {
        returnValue = F("Herwegpfad");
        break;
    }
    case 142175:
    {
        returnValue = F("Herwegstr.");
        break;
    }
    case 142176:
    {
        returnValue = F("Herwieschen");
        break;
    }
    case 142177:
    {
        returnValue = F("Herwig");
        break;
    }
    case 142178:
    {
        returnValue = F("Herwig's Eck");
        break;
    }
    case 142179:
    {
        returnValue = F("Herwig-Böning-Platz");
        break;
    }
    case 142180:
    {
        returnValue = F("Herwigesstr.");
        break;
    }
    case 142181:
    {
        returnValue = F("Herwigsdorfer Str.");
        break;
    }
    case 142182:
    {
        returnValue = F("Herwigshofer Str.");
        break;
    }
    case 142183:
    {
        returnValue = F("Herwigstr.");
        break;
    }
    case 142184:
    {
        returnValue = F("Herwigwinkel");
        break;
    }
    case 142185:
    {
        returnValue = F("Herwoltstr.");
        break;
    }
    case 142186:
    {
        returnValue = F("Herxheimer Hohl");
        break;
    }
    case 142187:
    {
        returnValue = F("Herxheimer Str.");
        break;
    }
    case 142188:
    {
        returnValue = F("Herxheimer Weg");
        break;
    }
    case 142189:
    {
        returnValue = F("Hery-Park");
        break;
    }
    case 142190:
    {
        returnValue = F("Herz-Jesu-Berg");
        break;
    }
    case 142191:
    {
        returnValue = F("Herz-Jesu-Heim-Str.");
        break;
    }
    case 142192:
    {
        returnValue = F("Herz-Jesu-Kloster");
        break;
    }
    case 142193:
    {
        returnValue = F("Herz-Jesu-Weg");
        break;
    }
    case 142194:
    {
        returnValue = F("Herz-Meyer-Str.");
        break;
    }
    case 142195:
    {
        returnValue = F("Herz-Schmerz-Weg");
        break;
    }
    case 142196:
    {
        returnValue = F("Herzackerstr.");
        break;
    }
    case 142197:
    {
        returnValue = F("Herzbach");
        break;
    }
    case 142198:
    {
        returnValue = F("Herzbachstr.");
        break;
    }
    case 142199:
    {
        returnValue = F("Herzbachweg");
        break;
    }
    case 142200:
    {
        returnValue = F("Herzberg");
        break;
    }
    case 142201:
    {
        returnValue = F("Herzberger Chaussee");
        break;
    }
    case 142202:
    {
        returnValue = F("Herzberger Landstr.");
        break;
    }
    case 142203:
    {
        returnValue = F("Herzberger Str.");
        break;
    }
    case 142204:
    {
        returnValue = F("Herzberger Weg");
        break;
    }
    case 142205:
    {
        returnValue = F("Herzbergstr.");
        break;
    }
    case 142206:
    {
        returnValue = F("Herzbergweg");
        break;
    }
    case 142207:
    {
        returnValue = F("Herzbroicher Weg");
        break;
    }
    case 142208:
    {
        returnValue = F("Herzdorfer Str.");
        break;
    }
    case 142209:
    {
        returnValue = F("Herzebrocker Str.");
        break;
    }
    case 142210:
    {
        returnValue = F("Herzeburger Weg");
        break;
    }
    case 142211:
    {
        returnValue = F("Herzeleid");
        break;
    }
    case 142212:
    {
        returnValue = F("Herzen");
        break;
    }
    case 142213:
    {
        returnValue = F("Herzenbachsattelweg");
        break;
    }
    case 142214:
    {
        returnValue = F("Herzenbachweg");
        break;
    }
    case 142215:
    {
        returnValue = F("Herzenbad");
        break;
    }
    case 142216:
    {
        returnValue = F("Herzenbergweg");
        break;
    }
    case 142217:
    {
        returnValue = F("Herzenbühlstr.");
        break;
    }
    case 142218:
    {
        returnValue = F("Herzendamm");
        break;
    }
    case 142219:
    {
        returnValue = F("Herzenfeld");
        break;
    }
    case 142220:
    {
        returnValue = F("Herzengasse");
        break;
    }
    case 142221:
    {
        returnValue = F("Herzenhaldenweg");
        break;
    }
    case 142222:
    {
        returnValue = F("Herzenkamp");
        break;
    }
    case 142223:
    {
        returnValue = F("Herzenklinge");
        break;
    }
    case 142224:
    {
        returnValue = F("Herzenklingenweg");
        break;
    }
    case 142225:
    {
        returnValue = F("Herzenstr.");
        break;
    }
    case 142226:
    {
        returnValue = F("Herzental");
        break;
    }
    case 142227:
    {
        returnValue = F("Herzentalstr.");
        break;
    }
    case 142228:
    {
        returnValue = F("Herzenweg");
        break;
    }
    case 142229:
    {
        returnValue = F("Herzeschweg");
        break;
    }
    case 142230:
    {
        returnValue = F("Herzewinkel");
        break;
    }
    case 142231:
    {
        returnValue = F("Herzfelder Str.");
        break;
    }
    case 142232:
    {
        returnValue = F("Herzfelder Weg");
        break;
    }
    case 142233:
    {
        returnValue = F("Herzfeldweg");
        break;
    }
    case 142234:
    {
        returnValue = F("Herzfleckenweg");
        break;
    }
    case 142235:
    {
        returnValue = F("Herzforder Moor");
        break;
    }
    case 142236:
    {
        returnValue = F("Herzgasse");
        break;
    }
    case 142237:
    {
        returnValue = F("Herzgraben");
        break;
    }
    case 142238:
    {
        returnValue = F("Herzgrabenstr.");
        break;
    }
    case 142239:
    {
        returnValue = F("Herzhausen");
        break;
    }
    case 142240:
    {
        returnValue = F("Herzhausener Str.");
        break;
    }
    case 142241:
    {
        returnValue = F("Herzhof");
        break;
    }
    case 142242:
    {
        returnValue = F("Herzhorner Rhin");
        break;
    }
    case 142243:
    {
        returnValue = F("Herzhorner Str.");
        break;
    }
    case 142244:
    {
        returnValue = F("Herzhorner Weg");
        break;
    }
    case 142245:
    {
        returnValue = F("Herzhäuser Str.");
        break;
    }
    case 142246:
    {
        returnValue = F("Herzhäuser Weg");
        break;
    }
    case 142247:
    {
        returnValue = F("Herzigstr.");
        break;
    }
    case 142248:
    {
        returnValue = F("Herzingsgrube");
        break;
    }
    case 142249:
    {
        returnValue = F("Herzkamper Mulde");
        break;
    }
    case 142250:
    {
        returnValue = F("Herzkirschenweg");
        break;
    }
    case 142251:
    {
        returnValue = F("Herzlaker Str.");
        break;
    }
    case 142252:
    {
        returnValue = F("Herzleweg");
        break;
    }
    case 142253:
    {
        returnValue = F("Herzlia-Allee");
        break;
    }
    case 142254:
    {
        returnValue = F("Herzog");
        break;
    }
    case 142255:
    {
        returnValue = F("Herzog Albrecht Str.");
        break;
    }
    case 142256:
    {
        returnValue = F("Herzog Heinrich Str.");
        break;
    }
    case 142257:
    {
        returnValue = F("Herzog Peter Weg");
        break;
    }
    case 142258:
    {
        returnValue = F("Herzog Richard Str.");
        break;
    }
    case 142259:
    {
        returnValue = F("Herzog-Adolf Str.");
        break;
    }
    case 142260:
    {
        returnValue = F("Herzog-Adolf-Brücke");
        break;
    }
    case 142261:
    {
        returnValue = F("Herzog-Adolf-Str.");
        break;
    }
    case 142262:
    {
        returnValue = F("Herzog-Adolf-Weg");
        break;
    }
    case 142263:
    {
        returnValue = F("Herzog-Adolph-Anlage");
        break;
    }
    case 142264:
    {
        returnValue = F("Herzog-Adolph-Str.");
        break;
    }
    case 142265:
    {
        returnValue = F("Herzog-Albrecht-Allee");
        break;
    }
    case 142266:
    {
        returnValue = F("Herzog-Albrecht-Platz");
        break;
    }
    case 142267:
    {
        returnValue = F("Herzog-Albrecht-Str.");
        break;
    }
    case 142268:
    {
        returnValue = F("Herzog-Albrecht-Weg");
        break;
    }
    case 142269:
    {
        returnValue = F("Herzog-Alexander-Str.");
        break;
    }
    case 142270:
    {
        returnValue = F("Herzog-Arenberg-Str.");
        break;
    }
    case 142271:
    {
        returnValue = F("Herzog-Arnulf-Str.");
        break;
    }
    case 142272:
    {
        returnValue = F("Herzog-Bernd-Str.");
        break;
    }
    case 142273:
    {
        returnValue = F("Herzog-Bogislaw-Weg");
        break;
    }
    case 142274:
    {
        returnValue = F("Herzog-Carl-Rudolf-Str.");
        break;
    }
    case 142275:
    {
        returnValue = F("Herzog-Carl-Str.");
        break;
    }
    case 142276:
    {
        returnValue = F("Herzog-Christian-Platz");
        break;
    }
    case 142277:
    {
        returnValue = F("Herzog-Christian-Str.");
        break;
    }
    case 142278:
    {
        returnValue = F("Herzog-Christoph-Str.");
        break;
    }
    case 142279:
    {
        returnValue = F("Herzog-Eberhard-Str.");
        break;
    }
    case 142280:
    {
        returnValue = F("Herzog-Egbert-Str.");
        break;
    }
    case 142281:
    {
        returnValue = F("Herzog-Engelbert-Str.");
        break;
    }
    case 142282:
    {
        returnValue = F("Herzog-Erchanger-Str.");
        break;
    }
    case 142283:
    {
        returnValue = F("Herzog-Erich-Allee");
        break;
    }
    case 142284:
    {
        returnValue = F("Herzog-Erich-Ring");
        break;
    }
    case 142285:
    {
        returnValue = F("Herzog-Erich-Str.");
        break;
    }
    case 142286:
    {
        returnValue = F("Herzog-Erich-Weg");
        break;
    }
    case 142287:
    {
        returnValue = F("Herzog-Ernst-August-Str.");
        break;
    }
    case 142288:
    {
        returnValue = F("Herzog-Ernst-Platz");
        break;
    }
    case 142289:
    {
        returnValue = F("Herzog-Ernst-Str.");
        break;
    }
    case 142290:
    {
        returnValue = F("Herzog-Eugen-Str.");
        break;
    }
    case 142291:
    {
        returnValue = F("Herzog-Ferdinand-Str.");
        break;
    }
    case 142292:
    {
        returnValue = F("Herzog-Franz-Str.");
        break;
    }
    case 142293:
    {
        returnValue = F("Herzog-Friedrich-Str.");
        break;
    }
    case 142294:
    {
        returnValue = F("Herzog-Friedrich-Weg");
        break;
    }
    case 142295:
    {
        returnValue = F("Herzog-Georg-Platz");
        break;
    }
    case 142296:
    {
        returnValue = F("Herzog-Georg-Ring");
        break;
    }
    case 142297:
    {
        returnValue = F("Herzog-Georg-Str.");
        break;
    }
    case 142298:
    {
        returnValue = F("Herzog-Georg-Weg");
        break;
    }
    case 142299:
    {
        returnValue = F("Herzog-Georgen-Str.");
        break;
    }
    case 142300:
    {
        returnValue = F("Herzog-Hedan-Str.");
        break;
    }
    case 142301:
    {
        returnValue = F("Herzog-Heinrich-Platz");
        break;
    }
    case 142302:
    {
        returnValue = F("Herzog-Heinrich-Ring");
        break;
    }
    case 142303:
    {
        returnValue = F("Herzog-Heinrich-Str.");
        break;
    }
    case 142304:
    {
        returnValue = F("Herzog-Heinrich-Weg");
        break;
    }
    case 142305:
    {
        returnValue = F("Herzog-Hezilo-Str.");
        break;
    }
    case 142306:
    {
        returnValue = F("Herzog-Johann-Albrecht-Str.");
        break;
    }
    case 142307:
    {
        returnValue = F("Herzog-Johann-Str.");
        break;
    }
    case 142308:
    {
        returnValue = F("Herzog-Julius-Str.");
        break;
    }
    case 142309:
    {
        returnValue = F("Herzog-Karl-Str.");
        break;
    }
    case 142310:
    {
        returnValue = F("Herzog-Karl-Weg");
        break;
    }
    case 142311:
    {
        returnValue = F("Herzog-Leopold-Str.");
        break;
    }
    case 142312:
    {
        returnValue = F("Herzog-Ludwig-Str.");
        break;
    }
    case 142313:
    {
        returnValue = F("Herzog-Magnus-Str.");
        break;
    }
    case 142314:
    {
        returnValue = F("Herzog-Max-Str.");
        break;
    }
    case 142315:
    {
        returnValue = F("Herzog-Maximilian-Str.");
        break;
    }
    case 142316:
    {
        returnValue = F("Herzog-Moritz Platz");
        break;
    }
    case 142317:
    {
        returnValue = F("Herzog-Nikolaus-Str.");
        break;
    }
    case 142318:
    {
        returnValue = F("Herzog-Odilo-Str.");
        break;
    }
    case 142319:
    {
        returnValue = F("Herzog-Otto-Str.");
        break;
    }
    case 142320:
    {
        returnValue = F("Herzog-Otto-Weg");
        break;
    }
    case 142321:
    {
        returnValue = F("Herzog-Paul-Str.");
        break;
    }
    case 142322:
    {
        returnValue = F("Herzog-Philipp-Allee");
        break;
    }
    case 142323:
    {
        returnValue = F("Herzog-Philipp-Ludwig-Weg");
        break;
    }
    case 142324:
    {
        returnValue = F("Herzog-Philipp-Platz");
        break;
    }
    case 142325:
    {
        returnValue = F("Herzog-Philipp-Str.");
        break;
    }
    case 142326:
    {
        returnValue = F("Herzog-Reichard-Str.");
        break;
    }
    case 142327:
    {
        returnValue = F("Herzog-Rudolf-Str.");
        break;
    }
    case 142328:
    {
        returnValue = F("Herzog-Siegmund-Weg");
        break;
    }
    case 142329:
    {
        returnValue = F("Herzog-Sigmund-Str.");
        break;
    }
    case 142330:
    {
        returnValue = F("Herzog-Stefan-Str.");
        break;
    }
    case 142331:
    {
        returnValue = F("Herzog-Stephan-Str.");
        break;
    }
    case 142332:
    {
        returnValue = F("Herzog-Tassilo-Platz");
        break;
    }
    case 142333:
    {
        returnValue = F("Herzog-Tassilo-Ring");
        break;
    }
    case 142334:
    {
        returnValue = F("Herzog-Tassilo-Str.");
        break;
    }
    case 142335:
    {
        returnValue = F("Herzog-Tassilo-Weg");
        break;
    }
    case 142336:
    {
        returnValue = F("Herzog-Theodo-Str.");
        break;
    }
    case 142337:
    {
        returnValue = F("Herzog-Ulrich-Str.");
        break;
    }
    case 142338:
    {
        returnValue = F("Herzog-Ulrich-Weg");
        break;
    }
    case 142339:
    {
        returnValue = F("Herzog-Welf-Str.");
        break;
    }
    case 142340:
    {
        returnValue = F("Herzog-Wilhelm-Allee");
        break;
    }
    case 142341:
    {
        returnValue = F("Herzog-Wilhelm-Str.");
        break;
    }
    case 142342:
    {
        returnValue = F("Herzog-Wittekind-Weg");
        break;
    }
    case 142343:
    {
        returnValue = F("Herzog-Wolfgang-Str.");
        break;
    }
    case 142344:
    {
        returnValue = F("Herzog-von-Jülich-Ring");
        break;
    }
    case 142345:
    {
        returnValue = F("Herzog-von-Weimar-Str.");
        break;
    }
    case 142346:
    {
        returnValue = F("Herzogallee I");
        break;
    }
    case 142347:
    {
        returnValue = F("Herzogallee II");
        break;
    }
    case 142348:
    {
        returnValue = F("Herzogallee III");
        break;
    }
    case 142349:
    {
        returnValue = F("Herzoganger");
        break;
    }
    case 142350:
    {
        returnValue = F("Herzogau");
        break;
    }
    case 142351:
    {
        returnValue = F("Herzogbachstr.");
        break;
    }
    case 142352:
    {
        returnValue = F("Herzogbadstr.");
        break;
    }
    case 142353:
    {
        returnValue = F("Herzogenauracher Str.");
        break;
    }
    case 142354:
    {
        returnValue = F("Herzogenbuscher Str.");
        break;
    }
    case 142355:
    {
        returnValue = F("Herzogenfeld");
        break;
    }
    case 142356:
    {
        returnValue = F("Herzogenhornstr.");
        break;
    }
    case 142357:
    {
        returnValue = F("Herzogenhornweg");
        break;
    }
    case 142358:
    {
        returnValue = F("Herzogenrather Str.");
        break;
    }
    case 142359:
    {
        returnValue = F("Herzogenrather Weg");
        break;
    }
    case 142360:
    {
        returnValue = F("Herzogenring");
        break;
    }
    case 142361:
    {
        returnValue = F("Herzogenstr.");
        break;
    }
    case 142362:
    {
        returnValue = F("Herzogenweilerstr.");
        break;
    }
    case 142363:
    {
        returnValue = F("Herzoggasse");
        break;
    }
    case 142364:
    {
        returnValue = F("Herzoggraben");
        break;
    }
    case 142365:
    {
        returnValue = F("Herzoggäßchen");
        break;
    }
    case 142366:
    {
        returnValue = F("Herzogin von Kent Str.");
        break;
    }
    case 142367:
    {
        returnValue = F("Herzogin-Agnes-Platz");
        break;
    }
    case 142368:
    {
        returnValue = F("Herzogin-Amelie-Str.");
        break;
    }
    case 142369:
    {
        returnValue = F("Herzogin-Augusta-Str.");
        break;
    }
    case 142370:
    {
        returnValue = F("Herzogin-Beatrix-Str.");
        break;
    }
    case 142371:
    {
        returnValue = F("Herzogin-Elisabeth-Str.");
        break;
    }
    case 142372:
    {
        returnValue = F("Herzogin-Elisabeth-Weg");
        break;
    }
    case 142373:
    {
        returnValue = F("Herzogin-Ida-Str.");
        break;
    }
    case 142374:
    {
        returnValue = F("Herzogin-Jakobe-Str.");
        break;
    }
    case 142375:
    {
        returnValue = F("Herzogin-Johanna-Str.");
        break;
    }
    case 142376:
    {
        returnValue = F("Herzogin-Juliana-Str.");
        break;
    }
    case 142377:
    {
        returnValue = F("Herzogin-Juliane-Str.");
        break;
    }
    case 142378:
    {
        returnValue = F("Herzogin-Ludmilla-Ring");
        break;
    }
    case 142379:
    {
        returnValue = F("Herzogin-Rosa-Str.");
        break;
    }
    case 142380:
    {
        returnValue = F("Herzogmühlweg");
        break;
    }
    case 142381:
    {
        returnValue = F("Herzogplatz");
        break;
    }
    case 142382:
    {
        returnValue = F("Herzogreuter Str.");
        break;
    }
    case 142383:
    {
        returnValue = F("Herzogring");
        break;
    }
    case 142384:
    {
        returnValue = F("Herzogsallee");
        break;
    }
    case 142385:
    {
        returnValue = F("Herzogsgasse");
        break;
    }
    case 142386:
    {
        returnValue = F("Herzogshaldesträßle");
        break;
    }
    case 142387:
    {
        returnValue = F("Herzogsreuter Str.");
        break;
    }
    case 142388:
    {
        returnValue = F("Herzogstandbogen");
        break;
    }
    case 142389:
    {
        returnValue = F("Herzogstandstr.");
        break;
    }
    case 142390:
    {
        returnValue = F("Herzogstandweg");
        break;
    }
    case 142391:
    {
        returnValue = F("Herzogstannen");
        break;
    }
    case 142392:
    {
        returnValue = F("Herzogstieg");
        break;
    }
    case 142393:
    {
        returnValue = F("Herzogstr.");
        break;
    }
    case 142394:
    {
        returnValue = F("Herzogswalder Str.");
        break;
    }
    case 142395:
    {
        returnValue = F("Herzogswall");
        break;
    }
    case 142396:
    {
        returnValue = F("Herzogsweg");
        break;
    }
    case 142397:
    {
        returnValue = F("Herzogsweg (Promenadenweg)");
        break;
    }
    case 142398:
    {
        returnValue = F("Herzogsweiler Bengelbruckweg");
        break;
    }
    case 142399:
    {
        returnValue = F("Herzogsägmühler Str.");
        break;
    }
    case 142400:
    {
        returnValue = F("Herzogweg");
        break;
    }
    case 142401:
    {
        returnValue = F("Herzogwind");
        break;
    }
    case 142402:
    {
        returnValue = F("Herzogöd");
        break;
    }
    case 142403:
    {
        returnValue = F("Herzrain");
        break;
    }
    case 142404:
    {
        returnValue = F("Herzriedweg");
        break;
    }
    case 142405:
    {
        returnValue = F("Herzschlade");
        break;
    }
    case 142406:
    {
        returnValue = F("Herzsprunger Weg");
        break;
    }
    case 142407:
    {
        returnValue = F("Herzsteige");
        break;
    }
    case 142408:
    {
        returnValue = F("Herzstr.");
        break;
    }
    case 142409:
    {
        returnValue = F("Herzstruth");
        break;
    }
    case 142410:
    {
        returnValue = F("Herztal");
        break;
    }
    case 142411:
    {
        returnValue = F("Herztalstr.");
        break;
    }
    case 142412:
    {
        returnValue = F("Herztor");
        break;
    }
    case 142413:
    {
        returnValue = F("Herztorstr.");
        break;
    }
    case 142414:
    {
        returnValue = F("Herzweg");
        break;
    }
    case 142415:
    {
        returnValue = F("Herzwiesenhof");
        break;
    }
    case 142416:
    {
        returnValue = F("Herzwiesenschneise");
        break;
    }
    case 142417:
    {
        returnValue = F("Herzwirtsgasse");
        break;
    }
    case 142418:
    {
        returnValue = F("Herzwolde Oberdorf");
        break;
    }
    case 142419:
    {
        returnValue = F("Herzwolde Unterdorf");
        break;
    }
    case 142420:
    {
        returnValue = F("Herßumer Mühle");
        break;
    }
    case 142421:
    {
        returnValue = F("Herßumer Str.");
        break;
    }
    case 142422:
    {
        returnValue = F("Herßumer Weg");
        break;
    }
    case 142423:
    {
        returnValue = F("Hesbergweg");
        break;
    }
    case 142424:
    {
        returnValue = F("Hesborner Str.");
        break;
    }
    case 142425:
    {
        returnValue = F("Hesborner Weg");
        break;
    }
    case 142426:
    {
        returnValue = F("Hescheld");
        break;
    }
    case 142427:
    {
        returnValue = F("Heschelweg");
        break;
    }
    case 142428:
    {
        returnValue = F("Heschmattweg");
        break;
    }
    case 142429:
    {
        returnValue = F("Heschstr.");
        break;
    }
    case 142430:
    {
        returnValue = F("Hesdiner Ring");
        break;
    }
    case 142431:
    {
        returnValue = F("Heseberg");
        break;
    }
    case 142432:
    {
        returnValue = F("Hesebergfeld");
        break;
    }
    case 142433:
    {
        returnValue = F("Hesebergweg");
        break;
    }
    case 142434:
    {
        returnValue = F("Hesedorfer Bahnhofstr.");
        break;
    }
    case 142435:
    {
        returnValue = F("Hesedorfer Str.");
        break;
    }
    case 142436:
    {
        returnValue = F("Hesegarten");
        break;
    }
    case 142437:
    {
        returnValue = F("Hesekamp");
        break;
    }
    case 142438:
    {
        returnValue = F("Hesel");
        break;
    }
    case 142439:
    {
        returnValue = F("Heselbacher Weg");
        break;
    }
    case 142440:
    {
        returnValue = F("Heselbachsträssle");
        break;
    }
    case 142441:
    {
        returnValue = F("Heselbachtalweg");
        break;
    }
    case 142442:
    {
        returnValue = F("Heselbachweg");
        break;
    }
    case 142443:
    {
        returnValue = F("Heselberger Str.");
        break;
    }
    case 142444:
    {
        returnValue = F("Heselbronner Str.");
        break;
    }
    case 142445:
    {
        returnValue = F("Heselbäch");
        break;
    }
    case 142446:
    {
        returnValue = F("Heseler Alter Postweg");
        break;
    }
    case 142447:
    {
        returnValue = F("Heseler Grenzweg");
        break;
    }
    case 142448:
    {
        returnValue = F("Heseler Hauptstr.");
        break;
    }
    case 142449:
    {
        returnValue = F("Heseler Mickenbarger Weg");
        break;
    }
    case 142450:
    {
        returnValue = F("Heseler Moorweg");
        break;
    }
    case 142451:
    {
        returnValue = F("Heseler Ochsenhammer Weg");
        break;
    }
    case 142452:
    {
        returnValue = F("Heseler Str.");
        break;
    }
    case 142453:
    {
        returnValue = F("Heseler Weg");
        break;
    }
    case 142454:
    {
        returnValue = F("Heselerfelder Weg");
        break;
    }
    case 142455:
    {
        returnValue = F("Heselmiß-Weg");
        break;
    }
    case 142456:
    {
        returnValue = F("Heselner Str.");
        break;
    }
    case 142457:
    {
        returnValue = F("Heseloh");
        break;
    }
    case 142458:
    {
        returnValue = F("Heseloherstr.");
        break;
    }
    case 142459:
    {
        returnValue = F("Heselrehmen");
        break;
    }
    case 142460:
    {
        returnValue = F("Heselsteige");
        break;
    }
    case 142461:
    {
        returnValue = F("Heselwanger Str.");
        break;
    }
    case 142462:
    {
        returnValue = F("Heselwangweg");
        break;
    }
    case 142463:
    {
        returnValue = F("Heselweg");
        break;
    }
    case 142464:
    {
        returnValue = F("Heselwiesenstr.");
        break;
    }
    case 142465:
    {
        returnValue = F("Hesenberg");
        break;
    }
    case 142466:
    {
        returnValue = F("Hesenbergstr.");
        break;
    }
    case 142467:
    {
        returnValue = F("Hesenbrooksweg");
        break;
    }
    case 142468:
    {
        returnValue = F("Heseper Str.");
        break;
    }
    case 142469:
    {
        returnValue = F("Heseper Weg");
        break;
    }
    case 142470:
    {
        returnValue = F("Heserhof");
        break;
    }
    case 142471:
    {
        returnValue = F("Heserstr.");
        break;
    }
    case 142472:
    {
        returnValue = F("Hesewinkel");
        break;
    }
    case 142473:
    {
        returnValue = F("Hesinger Str.");
        break;
    }
    case 142474:
    {
        returnValue = F("Hesinger Weg");
        break;
    }
    case 142475:
    {
        returnValue = F("Heskemer Str.");
        break;
    }
    case 142476:
    {
        returnValue = F("Heslachhof");
        break;
    }
    case 142477:
    {
        returnValue = F("Heslachhöfer Str.");
        break;
    }
    case 142478:
    {
        returnValue = F("Heslachweg");
        break;
    }
    case 142479:
    {
        returnValue = F("Heslichstr.");
        break;
    }
    case 142480:
    {
        returnValue = F("Hesling");
        break;
    }
    case 142481:
    {
        returnValue = F("Heslinweg");
        break;
    }
    case 142482:
    {
        returnValue = F("Hesmecke");
        break;
    }
    case 142483:
    {
        returnValue = F("Hespecke");
        break;
    }
    case 142484:
    {
        returnValue = F("Hespelstr.");
        break;
    }
    case 142485:
    {
        returnValue = F("Hespenbusch");
        break;
    }
    case 142486:
    {
        returnValue = F("Hespengrund");
        break;
    }
    case 142487:
    {
        returnValue = F("Hespenhausener Str.");
        break;
    }
    case 142488:
    {
        returnValue = F("Hespenkamp");
        break;
    }
    case 142489:
    {
        returnValue = F("Hespenriede");
        break;
    }
    case 142490:
    {
        returnValue = F("Hespenstr.");
        break;
    }
    case 142491:
    {
        returnValue = F("Hespenweg");
        break;
    }
    case 142492:
    {
        returnValue = F("Hesper Str.");
        break;
    }
    case 142493:
    {
        returnValue = F("Hesperinghäuser Str.");
        break;
    }
    case 142494:
    {
        returnValue = F("Hesperstr.");
        break;
    }
    case 142495:
    {
        returnValue = F("Hespertal");
        break;
    }
    case 142496:
    {
        returnValue = F("Hesperter Dorfstr.");
        break;
    }
    case 142497:
    {
        returnValue = F("Hesperter Str.");
        break;
    }
    case 142498:
    {
        returnValue = F("Hespeweg");
        break;
    }
    case 142499:
    {
        returnValue = F("Hespöpe");
        break;
    }
    case 142500:
    {
        returnValue = F("Hessbergstr.");
        break;
    }
    case 142501:
    {
        returnValue = F("Hessbergweg");
        break;
    }
    case 142502:
    {
        returnValue = F("Hesse Park");
        break;
    }
    case 142503:
    {
        returnValue = F("Hessebergstr.");
        break;
    }
    case 142504:
    {
        returnValue = F("Hesselbach");
        break;
    }
    case 142505:
    {
        returnValue = F("Hesselbacher Allmend");
        break;
    }
    case 142506:
    {
        returnValue = F("Hesselbacher Str.");
        break;
    }
    case 142507:
    {
        returnValue = F("Hesselbacher Weg");
        break;
    }
    case 142508:
    {
        returnValue = F("Hesselbacherstr.");
        break;
    }
    case 142509:
    {
        returnValue = F("Hesselbachstr.");
        break;
    }
    case 142510:
    {
        returnValue = F("Hesselbachweg");
        break;
    }
    case 142511:
    {
        returnValue = F("Hesselbarthstr.");
        break;
    }
    case 142512:
    {
        returnValue = F("Hesselbecke");
        break;
    }
    case 142513:
    {
        returnValue = F("Hesselberg");
        break;
    }
    case 142514:
    {
        returnValue = F("Hesselbergring");
        break;
    }
    case 142515:
    {
        returnValue = F("Hesselbergstr.");
        break;
    }
    case 142516:
    {
        returnValue = F("Hesselbergweg");
        break;
    }
    case 142517:
    {
        returnValue = F("Hesselboesch");
        break;
    }
    case 142518:
    {
        returnValue = F("Hesselbrink");
        break;
    }
    case 142519:
    {
        returnValue = F("Hesselbrunner Tal");
        break;
    }
    case 142520:
    {
        returnValue = F("Hesselbrunner Talweg");
        break;
    }
    case 142521:
    {
        returnValue = F("Hesselbuschstr.");
        break;
    }
    case 142522:
    {
        returnValue = F("Hesselbühl");
        break;
    }
    case 142523:
    {
        returnValue = F("Hesseldorfer Str.");
        break;
    }
    case 142524:
    {
        returnValue = F("Hesseler");
        break;
    }
    case 142525:
    {
        returnValue = F("Hesselerstr.");
        break;
    }
    case 142526:
    {
        returnValue = F("Hesselgasse");
        break;
    }
    case 142527:
    {
        returnValue = F("Hesselhurster Str.");
        break;
    }
    case 142528:
    {
        returnValue = F("Hesselloher Str.");
        break;
    }
    case 142529:
    {
        returnValue = F("Hesselmannstr.");
        break;
    }
    case 142530:
    {
        returnValue = F("Hesselmühle");
        break;
    }
    case 142531:
    {
        returnValue = F("Hesseln");
        break;
    }
    case 142532:
    {
        returnValue = F("Hesselnfelder Str.");
        break;
    }
    case 142533:
    {
        returnValue = F("Hesseloher Str.");
        break;
    }
    case 142534:
    {
        returnValue = F("Hesselschneise");
        break;
    }
    case 142535:
    {
        returnValue = F("Hesselsteige");
        break;
    }
    case 142536:
    {
        returnValue = F("Hesselstr.");
        break;
    }
    case 142537:
    {
        returnValue = F("Hesseltchen");
        break;
    }
    case 142538:
    {
        returnValue = F("Hesselte");
        break;
    }
    case 142539:
    {
        returnValue = F("Hesselteich");
        break;
    }
    case 142540:
    {
        returnValue = F("Hesselteicher Str.");
        break;
    }
    case 142541:
    {
        returnValue = F("Hesselweg");
        break;
    }
    case 142542:
    {
        returnValue = F("Hessen Ufer");
        break;
    }
    case 142543:
    {
        returnValue = F("Hessen-Homburg-Platz");
        break;
    }
    case 142544:
    {
        returnValue = F("Hessen-Johannes-Gasse");
        break;
    }
    case 142545:
    {
        returnValue = F("Hessenallee");
        break;
    }
    case 142546:
    {
        returnValue = F("Hessenauer Str.");
        break;
    }
    case 142547:
    {
        returnValue = F("Hessenbach");
        break;
    }
    case 142548:
    {
        returnValue = F("Hessenbachweg");
        break;
    }
    case 142549:
    {
        returnValue = F("Hessenberg");
        break;
    }
    case 142550:
    {
        returnValue = F("Hessenbergstr.");
        break;
    }
    case 142551:
    {
        returnValue = F("Hessenbergweg");
        break;
    }
    case 142552:
    {
        returnValue = F("Hessenbichlweg");
        break;
    }
    case 142553:
    {
        returnValue = F("Hessenbleekstr.");
        break;
    }
    case 142554:
    {
        returnValue = F("Hessenborn");
        break;
    }
    case 142555:
    {
        returnValue = F("Hessenbruchweg");
        break;
    }
    case 142556:
    {
        returnValue = F("Hessenbrücke");
        break;
    }
    case 142557:
    {
        returnValue = F("Hessenbrückenhof");
        break;
    }
    case 142558:
    {
        returnValue = F("Hessendamm");
        break;
    }
    case 142559:
    {
        returnValue = F("Hessendorfer Str.");
        break;
    }
    case 142560:
    {
        returnValue = F("Hessendorfer Weg");
        break;
    }
    case 142561:
    {
        returnValue = F("Hessenecke");
        break;
    }
    case 142562:
    {
        returnValue = F("Hessenecker Str.");
        break;
    }
    case 142563:
    {
        returnValue = F("Hesseneckstr.");
        break;
    }
    case 142564:
    {
        returnValue = F("Hesseneichenweg");
        break;
    }
    case 142565:
    {
        returnValue = F("Hessener Str.");
        break;
    }
    case 142566:
    {
        returnValue = F("Hessenfeld");
        break;
    }
    case 142567:
    {
        returnValue = F("Hessengarten");
        break;
    }
    case 142568:
    {
        returnValue = F("Hessengasse");
        break;
    }
    case 142569:
    {
        returnValue = F("Hessengraben");
        break;
    }
    case 142570:
    {
        returnValue = F("Hessenhagen");
        break;
    }
    case 142571:
    {
        returnValue = F("Hessenhof");
        break;
    }
    case 142572:
    {
        returnValue = F("Hessenhofstr.");
        break;
    }
    case 142573:
    {
        returnValue = F("Hessenhohlweg");
        break;
    }
    case 142574:
    {
        returnValue = F("Hessenhöfe");
        break;
    }
    case 142575:
    {
        returnValue = F("Hessenhöfeweg");
        break;
    }
    case 142576:
    {
        returnValue = F("Hessenhöhe");
        break;
    }
    case 142577:
    {
        returnValue = F("Hessenknapp");
        break;
    }
    case 142578:
    {
        returnValue = F("Hessenland");
        break;
    }
    case 142579:
    {
        returnValue = F("Hessenlandstr.");
        break;
    }
    case 142580:
    {
        returnValue = F("Hessenloheweg");
        break;
    }
    case 142581:
    {
        returnValue = F("Hessenmühle");
        break;
    }
    case 142582:
    {
        returnValue = F("Hessenreuth");
        break;
    }
    case 142583:
    {
        returnValue = F("Hessenring");
        break;
    }
    case 142584:
    {
        returnValue = F("Hessensailstr.");
        break;
    }
    case 142585:
    {
        returnValue = F("Hessenser Weg");
        break;
    }
    case 142586:
    {
        returnValue = F("Hessenskamp");
        break;
    }
    case 142587:
    {
        returnValue = F("Hessensteg");
        break;
    }
    case 142588:
    {
        returnValue = F("Hessenstein");
        break;
    }
    case 142589:
    {
        returnValue = F("Hessensteiner Weg");
        break;
    }
    case 142590:
    {
        returnValue = F("Hessensteinstr.");
        break;
    }
    case 142591:
    {
        returnValue = F("Hessenstieg");
        break;
    }
    case 142592:
    {
        returnValue = F("Hessenstr.");
        break;
    }
    case 142593:
    {
        returnValue = F("Hessenstr. (Römerstr.)");
        break;
    }
    case 142594:
    {
        returnValue = F("Hessensträßchen");
        break;
    }
    case 142595:
    {
        returnValue = F("Hessentagsparcour 2000");
        break;
    }
    case 142596:
    {
        returnValue = F("Hessentagspark");
        break;
    }
    case 142597:
    {
        returnValue = F("Hessentagsring");
        break;
    }
    case 142598:
    {
        returnValue = F("Hessentagsweg");
        break;
    }
    case 142599:
    {
        returnValue = F("Hessental");
        break;
    }
    case 142600:
    {
        returnValue = F("Hessentaler Planie");
        break;
    }
    case 142601:
    {
        returnValue = F("Hessentaler Str.");
        break;
    }
    case 142602:
    {
        returnValue = F("Hessentalweg");
        break;
    }
    case 142603:
    {
        returnValue = F("Hessenteichweg");
        break;
    }
    case 142604:
    {
        returnValue = F("Hessenthaler Weg");
        break;
    }
    case 142605:
    {
        returnValue = F("Hessenthalerweg");
        break;
    }
    case 142606:
    {
        returnValue = F("Hessenthälchenweg");
        break;
    }
    case 142607:
    {
        returnValue = F("Hessentorstr.");
        break;
    }
    case 142608:
    {
        returnValue = F("Hessenweg");
        break;
    }
    case 142609:
    {
        returnValue = F("Hessenwinkel");
        break;
    }
    case 142610:
    {
        returnValue = F("Hessenwinkler Str.");
        break;
    }
    case 142611:
    {
        returnValue = F("Hessepark");
        break;
    }
    case 142612:
    {
        returnValue = F("Hesserhöh");
        break;
    }
    case 142613:
    {
        returnValue = F("Hessering");
        break;
    }
    case 142614:
    {
        returnValue = F("Hesseroder Rasenweg");
        break;
    }
    case 142615:
    {
        returnValue = F("Hesseroder Str.");
        break;
    }
    case 142616:
    {
        returnValue = F("Hesseröder Landstr.");
        break;
    }
    case 142617:
    {
        returnValue = F("Hesseröder Str.");
        break;
    }
    case 142618:
    {
        returnValue = F("Hesseröder Weg");
        break;
    }
    case 142619:
    {
        returnValue = F("Hessestr.");
        break;
    }
    case 142620:
    {
        returnValue = F("Hessetweg");
        break;
    }
    case 142621:
    {
        returnValue = F("Hesseweg");
        break;
    }
    case 142622:
    {
        returnValue = F("Hesshackenweg");
        break;
    }
    case 142623:
    {
        returnValue = F("Hessheimer Str.");
        break;
    }
    case 142624:
    {
        returnValue = F("Hessigheimer Steige");
        break;
    }
    case 142625:
    {
        returnValue = F("Hessigheimer Str.");
        break;
    }
    case 142626:
    {
        returnValue = F("Hessigheimer Weg");
        break;
    }
    case 142627:
    {
        returnValue = F("Hessigweg");
        break;
    }
    case 142628:
    {
        returnValue = F("Hessinggrabenweg");
        break;
    }
    case 142629:
    {
        returnValue = F("Hessinghook");
        break;
    }
    case 142630:
    {
        returnValue = F("Hessingstr.");
        break;
    }
    case 142631:
    {
        returnValue = F("Hessingsweg");
        break;
    }
    case 142632:
    {
        returnValue = F("Hessingweg");
        break;
    }
    case 142633:
    {
        returnValue = F("Hessische Str.");
        break;
    }
    case 142634:
    {
        returnValue = F("Hessischer Damm");
        break;
    }
    case 142635:
    {
        returnValue = F("Hessisches Ende");
        break;
    }
    case 142636:
    {
        returnValue = F("Hessklöhweg");
        break;
    }
    case 142637:
    {
        returnValue = F("Hesslager Weg");
        break;
    }
    case 142638:
    {
        returnValue = F("Hesslarer Str.");
        break;
    }
    case 142639:
    {
        returnValue = F("Hessleweg");
        break;
    }
    case 142640:
    {
        returnValue = F("Hessliweg");
        break;
    }
    case 142641:
    {
        returnValue = F("Hesslocher Hohl");
        break;
    }
    case 142642:
    {
        returnValue = F("Hessloh");
        break;
    }
    case 142643:
    {
        returnValue = F("Hessostr.");
        break;
    }
    case 142644:
    {
        returnValue = F("Hessweg");
        break;
    }
    case 142645:
    {
        returnValue = F("Hesswiesenweg");
        break;
    }
    case 142646:
    {
        returnValue = F("Hestedt");
        break;
    }
    case 142647:
    {
        returnValue = F("Hestedter Weg");
        break;
    }
    case 142648:
    {
        returnValue = F("Hestelweg");
        break;
    }
    case 142649:
    {
        returnValue = F("Hestemaas");
        break;
    }
    case 142650:
    {
        returnValue = F("Hestenbergstr.");
        break;
    }
    case 142651:
    {
        returnValue = F("Hestenbergtunnel");
        break;
    }
    case 142652:
    {
        returnValue = F("Hesterberg");
        break;
    }
    case 142653:
    {
        returnValue = F("Hesterberger Str.");
        break;
    }
    case 142654:
    {
        returnValue = F("Hesterberger Weg");
        break;
    }
    case 142655:
    {
        returnValue = F("Hesterbergweg");
        break;
    }
    case 142656:
    {
        returnValue = F("Hesterbrinkweg");
        break;
    }
    case 142657:
    {
        returnValue = F("Hestergartenstr.");
        break;
    }
    case 142658:
    {
        returnValue = F("Hesterhof");
        break;
    }
    case 142659:
    {
        returnValue = F("Hesterhoff");
        break;
    }
    case 142660:
    {
        returnValue = F("Hesterhoop");
        break;
    }
    case 142661:
    {
        returnValue = F("Hesterhörn");
        break;
    }
    case 142662:
    {
        returnValue = F("Hesterkamp");
        break;
    }
    case 142663:
    {
        returnValue = F("Hesterkampweg");
        break;
    }
    case 142664:
    {
        returnValue = F("Hesterkrugstr.");
        break;
    }
    case 142665:
    {
        returnValue = F("Hestern");
        break;
    }
    case 142666:
    {
        returnValue = F("Hesternkamp");
        break;
    }
    case 142667:
    {
        returnValue = F("Hesternstr.");
        break;
    }
    case 142668:
    {
        returnValue = F("Hesternworth");
        break;
    }
    case 142669:
    {
        returnValue = F("Hesterring");
        break;
    }
    case 142670:
    {
        returnValue = F("Hesterstr.");
        break;
    }
    case 142671:
    {
        returnValue = F("Hestert");
        break;
    }
    case 142672:
    {
        returnValue = F("Hesterweg");
        break;
    }
    case 142673:
    {
        returnValue = F("Hestlichweg");
        break;
    }
    case 142674:
    {
        returnValue = F("Hestoft");
        break;
    }
    case 142675:
    {
        returnValue = F("Hestoft-Nord");
        break;
    }
    case 142676:
    {
        returnValue = F("Hestrup");
        break;
    }
    case 142677:
    {
        returnValue = F("Hestruper Str.");
        break;
    }
    case 142678:
    {
        returnValue = F("Hesttoft");
        break;
    }
    case 142679:
    {
        returnValue = F("Hesweg");
        break;
    }
    case 142680:
    {
        returnValue = F("Hesweilerstr.");
        break;
    }
    case 142681:
    {
        returnValue = F("Heteborner Hakelstr.");
        break;
    }
    case 142682:
    {
        returnValue = F("Heteborner Str.");
        break;
    }
    case 142683:
    {
        returnValue = F("Heteborner Weg");
        break;
    }
    case 142684:
    {
        returnValue = F("Hetendorf");
        break;
    }
    case 142685:
    {
        returnValue = F("Hetfeld");
        break;
    }
    case 142686:
    {
        returnValue = F("Hetlage");
        break;
    }
    case 142687:
    {
        returnValue = F("Hetlinger Deich");
        break;
    }
    case 142688:
    {
        returnValue = F("Hetlinger Str.");
        break;
    }
    case 142689:
    {
        returnValue = F("Hetraweg");
        break;
    }
    case 142690:
    {
        returnValue = F("Hetschbacher Str.");
        break;
    }
    case 142691:
    {
        returnValue = F("Hetschbacher Weg");
        break;
    }
    case 142692:
    {
        returnValue = F("Hetschburger Str.");
        break;
    }
    case 142693:
    {
        returnValue = F("Hetscheleinsweg");
        break;
    }
    case 142694:
    {
        returnValue = F("Hetschelhofweg");
        break;
    }
    case 142695:
    {
        returnValue = F("Hetschenlache");
        break;
    }
    case 142696:
    {
        returnValue = F("Hetschenweg");
        break;
    }
    case 142697:
    {
        returnValue = F("Hetschlaweg");
        break;
    }
    case 142698:
    {
        returnValue = F("Hetschmühle");
        break;
    }
    case 142699:
    {
        returnValue = F("Hetschwanger Str.");
        break;
    }
    case 142700:
    {
        returnValue = F("Hettbergstr.");
        break;
    }
    case 142701:
    {
        returnValue = F("Hettelsberger Weg");
        break;
    }
    case 142702:
    {
        returnValue = F("Hettenberg");
        break;
    }
    case 142703:
    {
        returnValue = F("Hettenbergring");
        break;
    }
    case 142704:
    {
        returnValue = F("Hettenhauser Str.");
        break;
    }
    case 142705:
    {
        returnValue = F("Hettenholter Weg");
        break;
    }
    case 142706:
    {
        returnValue = F("Hettenleidelheimer Str.");
        break;
    }
    case 142707:
    {
        returnValue = F("Hettenrodter Str.");
        break;
    }
    case 142708:
    {
        returnValue = F("Hettenser Str.");
        break;
    }
    case 142709:
    {
        returnValue = F("Hettenshausener Str.");
        break;
    }
    case 142710:
    {
        returnValue = F("Hettensteinstr.");
        break;
    }
    case 142711:
    {
        returnValue = F("Hettenstr.");
        break;
    }
    case 142712:
    {
        returnValue = F("Hettersau");
        break;
    }
    case 142713:
    {
        returnValue = F("Hettersbachstr.");
        break;
    }
    case 142714:
    {
        returnValue = F("Hettersreuth");
        break;
    }
    case 142715:
    {
        returnValue = F("Hettersreuther Str.");
        break;
    }
    case 142716:
    {
        returnValue = F("Hettinger Str.");
        break;
    }
    case 142717:
    {
        returnValue = F("Hettinger Täle");
        break;
    }
    case 142718:
    {
        returnValue = F("Hettinger Weg");
        break;
    }
    case 142719:
    {
        returnValue = F("Hettingerstr.");
        break;
    }
    case 142720:
    {
        returnValue = F("Hettlinger Str.");
        break;
    }
    case 142721:
    {
        returnValue = F("Hettlingshöhe");
        break;
    }
    case 142722:
    {
        returnValue = F("Hettmeckeweg");
        break;
    }
    case 142723:
    {
        returnValue = F("Hettnerstr.");
        break;
    }
    case 142724:
    {
        returnValue = F("Hettstadter Steige");
        break;
    }
    case 142725:
    {
        returnValue = F("Hettstadter Weg");
        break;
    }
    case 142726:
    {
        returnValue = F("Hettstedter Platz");
        break;
    }
    case 142727:
    {
        returnValue = F("Hettstedter Str.");
        break;
    }
    case 142728:
    {
        returnValue = F("Hettstedter Weg");
        break;
    }
    case 142729:
    {
        returnValue = F("Hettsteeg");
        break;
    }
    case 142730:
    {
        returnValue = F("Hettweg");
        break;
    }
    case 142731:
    {
        returnValue = F("Hetzberg");
        break;
    }
    case 142732:
    {
        returnValue = F("Hetzboldstr.");
        break;
    }
    case 142733:
    {
        returnValue = F("Hetzdorf");
        break;
    }
    case 142734:
    {
        returnValue = F("Hetzdorfer Str.");
        break;
    }
    case 142735:
    {
        returnValue = F("Hetzdorfer Viadukt");
        break;
    }
    case 142736:
    {
        returnValue = F("Hetzeberg");
        break;
    }
    case 142737:
    {
        returnValue = F("Hetzelanlage");
        break;
    }
    case 142738:
    {
        returnValue = F("Hetzelborn");
        break;
    }
    case 142739:
    {
        returnValue = F("Hetzelgasse");
        break;
    }
    case 142740:
    {
        returnValue = F("Hetzelstr.");
        break;
    }
    case 142741:
    {
        returnValue = F("Hetzelweg");
        break;
    }
    case 142742:
    {
        returnValue = F("Hetzelwiesstr.");
        break;
    }
    case 142743:
    {
        returnValue = F("Hetzenbaumhöfe");
        break;
    }
    case 142744:
    {
        returnValue = F("Hetzenberg");
        break;
    }
    case 142745:
    {
        returnValue = F("Hetzenbergstr.");
        break;
    }
    case 142746:
    {
        returnValue = F("Hetzenbichl");
        break;
    }
    case 142747:
    {
        returnValue = F("Hetzenbühlweg");
        break;
    }
    case 142748:
    {
        returnValue = F("Hetzengasse");
        break;
    }
    case 142749:
    {
        returnValue = F("Hetzengrundweg");
        break;
    }
    case 142750:
    {
        returnValue = F("Hetzenhauser Str.");
        break;
    }
    case 142751:
    {
        returnValue = F("Hetzenholz");
        break;
    }
    case 142752:
    {
        returnValue = F("Hetzenleite");
        break;
    }
    case 142753:
    {
        returnValue = F("Hetzenloch");
        break;
    }
    case 142754:
    {
        returnValue = F("Hetzenmühle");
        break;
    }
    case 142755:
    {
        returnValue = F("Hetzenrichter Weg");
        break;
    }
    case 142756:
    {
        returnValue = F("Hetzenring");
        break;
    }
    case 142757:
    {
        returnValue = F("Hetzentännig");
        break;
    }
    case 142758:
    {
        returnValue = F("Hetzenweg");
        break;
    }
    case 142759:
    {
        returnValue = F("Hetzenwäldle");
        break;
    }
    case 142760:
    {
        returnValue = F("Hetzerather Str.");
        break;
    }
    case 142761:
    {
        returnValue = F("Hetzerothsgarten");
        break;
    }
    case 142762:
    {
        returnValue = F("Hetzerstr.");
        break;
    }
    case 142763:
    {
        returnValue = F("Hetzerter Str.");
        break;
    }
    case 142764:
    {
        returnValue = F("Hetzhofer Str.");
        break;
    }
    case 142765:
    {
        returnValue = F("Hetzinger Hof");
        break;
    }
    case 142766:
    {
        returnValue = F("Hetzleser Str.");
        break;
    }
    case 142767:
    {
        returnValue = F("Hetzmannsborn");
        break;
    }
    case 142768:
    {
        returnValue = F("Hetzplatz-Geräumt");
        break;
    }
    case 142769:
    {
        returnValue = F("Hetzschen");
        break;
    }
    case 142770:
    {
        returnValue = F("Hetzschener Weg");
        break;
    }
    case 142771:
    {
        returnValue = F("Hetzwalder Ring");
        break;
    }
    case 142772:
    {
        returnValue = F("Hetzwalder Weg");
        break;
    }
    case 142773:
    {
        returnValue = F("Hetzweger Str.");
        break;
    }
    case 142774:
    {
        returnValue = F("Heu-Weg");
        break;
    }
    case 142775:
    {
        returnValue = F("Heuacker");
        break;
    }
    case 142776:
    {
        returnValue = F("Heuanger");
        break;
    }
    case 142777:
    {
        returnValue = F("Heubach");
        break;
    }
    case 142778:
    {
        returnValue = F("Heubacher Hauptstr.");
        break;
    }
    case 142779:
    {
        returnValue = F("Heubacher Str.");
        break;
    }
    case 142780:
    {
        returnValue = F("Heubacher Weg");
        break;
    }
    case 142781:
    {
        returnValue = F("Heubachgasse");
        break;
    }
    case 142782:
    {
        returnValue = F("Heubachsberg");
        break;
    }
    case 142783:
    {
        returnValue = F("Heubachstr.");
        break;
    }
    case 142784:
    {
        returnValue = F("Heubachtal");
        break;
    }
    case 142785:
    {
        returnValue = F("Heubachweg");
        break;
    }
    case 142786:
    {
        returnValue = F("Heubahn");
        break;
    }
    case 142787:
    {
        returnValue = F("Heubatweg");
        break;
    }
    case 142788:
    {
        returnValue = F("Heubeermoosweg");
        break;
    }
    case 142789:
    {
        returnValue = F("Heubelenweg");
        break;
    }
    case 142790:
    {
        returnValue = F("Heubelsteinweg");
        break;
    }
    case 142791:
    {
        returnValue = F("Heuberg");
        break;
    }
    case 142792:
    {
        returnValue = F("Heuberg A");
        break;
    }
    case 142793:
    {
        returnValue = F("Heuberg B");
        break;
    }
    case 142794:
    {
        returnValue = F("Heuberg C");
        break;
    }
    case 142795:
    {
        returnValue = F("Heuberg D");
        break;
    }
    case 142796:
    {
        returnValue = F("Heuberg E");
        break;
    }
    case 142797:
    {
        returnValue = F("Heuberg F");
        break;
    }
    case 142798:
    {
        returnValue = F("Heuberg G");
        break;
    }
    case 142799:
    {
        returnValue = F("Heuberg H");
        break;
    }
    case 142800:
    {
        returnValue = F("Heuberg K");
        break;
    }
    case 142801:
    {
        returnValue = F("Heuberg L");
        break;
    }
    case 142802:
    {
        returnValue = F("Heuberg Str.");
        break;
    }
    case 142803:
    {
        returnValue = F("Heuberg-Str.");
        break;
    }
    case 142804:
    {
        returnValue = F("Heubergbahndamm");
        break;
    }
    case 142805:
    {
        returnValue = F("Heubergbahnstr.");
        break;
    }
    case 142806:
    {
        returnValue = F("Heubergblick");
        break;
    }
    case 142807:
    {
        returnValue = F("Heubergbogen");
        break;
    }
    case 142808:
    {
        returnValue = F("Heuberge");
        break;
    }
    case 142809:
    {
        returnValue = F("Heuberger Hof");
        break;
    }
    case 142810:
    {
        returnValue = F("Heuberger Kopfweg");
        break;
    }
    case 142811:
    {
        returnValue = F("Heuberger Weg");
        break;
    }
    case 142812:
    {
        returnValue = F("Heubergerhof");
        break;
    }
    case 142813:
    {
        returnValue = F("Heubergerstr.");
        break;
    }
    case 142814:
    {
        returnValue = F("Heubergkopfweg");
        break;
    }
    case 142815:
    {
        returnValue = F("Heubergpark");
        break;
    }
    case 142816:
    {
        returnValue = F("Heubergring");
        break;
    }
    case 142817:
    {
        returnValue = F("Heubergrundweg");
        break;
    }
    case 142818:
    {
        returnValue = F("Heubergskamp");
        break;
    }
    case 142819:
    {
        returnValue = F("Heubergsteige");
        break;
    }
    case 142820:
    {
        returnValue = F("Heubergstr.");
        break;
    }
    case 142821:
    {
        returnValue = F("Heubergsweg");
        break;
    }
    case 142822:
    {
        returnValue = F("Heubergweg");
        break;
    }
    case 142823:
    {
        returnValue = F("Heubernbuckweg");
        break;
    }
    case 142824:
    {
        returnValue = F("Heubet");
        break;
    }
    case 142825:
    {
        returnValue = F("Heubeundstr.");
        break;
    }
    case 142826:
    {
        returnValue = F("Heubirnenweg");
        break;
    }
    case 142827:
    {
        returnValue = F("Heubischer Ortsstr.");
        break;
    }
    case 142828:
    {
        returnValue = F("Heubischer Str.");
        break;
    }
    case 142829:
    {
        returnValue = F("Heubitweg");
        break;
    }
    case 142830:
    {
        returnValue = F("Heubleinstr.");
        break;
    }
    case 142831:
    {
        returnValue = F("Heublosbrücke");
        break;
    }
    case 142832:
    {
        returnValue = F("Heublumenweg");
        break;
    }
    case 142833:
    {
        returnValue = F("Heubner-Passage");
        break;
    }
    case 142834:
    {
        returnValue = F("Heubnerring");
        break;
    }
    case 142835:
    {
        returnValue = F("Heubnerstr.");
        break;
    }
    case 142836:
    {
        returnValue = F("Heubrink");
        break;
    }
    case 142837:
    {
        returnValue = F("Heubrocksweg");
        break;
    }
    case 142838:
    {
        returnValue = F("Heubruchsweg");
        break;
    }
    case 142839:
    {
        returnValue = F("Heubruckenweg");
        break;
    }
    case 142840:
    {
        returnValue = F("Heubrunnenstr.");
        break;
    }
    case 142841:
    {
        returnValue = F("Heubrücke");
        break;
    }
    case 142842:
    {
        returnValue = F("Heubrückenweg");
        break;
    }
    case 142843:
    {
        returnValue = F("Heubsch");
        break;
    }
    case 142844:
    {
        returnValue = F("Heubuck");
        break;
    }
    case 142845:
    {
        returnValue = F("Heubuckelweg");
        break;
    }
    case 142846:
    {
        returnValue = F("Heubusch");
        break;
    }
    case 142847:
    {
        returnValue = F("Heubuschweg");
        break;
    }
    case 142848:
    {
        returnValue = F("Heubächleweg");
        break;
    }
    case 142849:
    {
        returnValue = F("Heubügelweg");
        break;
    }
    case 142850:
    {
        returnValue = F("Heubühlstr.");
        break;
    }
    case 142851:
    {
        returnValue = F("Heuchelbergring");
        break;
    }
    case 142852:
    {
        returnValue = F("Heuchelbergstr.");
        break;
    }
    case 142853:
    {
        returnValue = F("Heuchelbergweg");
        break;
    }
    case 142854:
    {
        returnValue = F("Heuchelheim");
        break;
    }
    case 142855:
    {
        returnValue = F("Heuchelheimer Hohlweg");
        break;
    }
    case 142856:
    {
        returnValue = F("Heuchelheimer Str.");
        break;
    }
    case 142857:
    {
        returnValue = F("Heuchelheimer Weg");
        break;
    }
    case 142858:
    {
        returnValue = F("Heuchelhofstr.");
        break;
    }
    case 142859:
    {
        returnValue = F("Heuchelsgasse");
        break;
    }
    case 142860:
    {
        returnValue = F("Heuchen");
        break;
    }
    case 142861:
    {
        returnValue = F("Heuchenweg");
        break;
    }
    case 142862:
    {
        returnValue = F("Heuchling");
        break;
    }
    case 142863:
    {
        returnValue = F("Heuchlinger Feld");
        break;
    }
    case 142864:
    {
        returnValue = F("Heuchlinger Hauptstr.");
        break;
    }
    case 142865:
    {
        returnValue = F("Heuchlinger Str.");
        break;
    }
    case 142866:
    {
        returnValue = F("Heuchlinger Weg");
        break;
    }
    case 142867:
    {
        returnValue = F("Heuchte");
        break;
    }
    case 142868:
    {
        returnValue = F("Heuchterstr.");
        break;
    }
    case 142869:
    {
        returnValue = F("Heuckewalder Siedlung");
        break;
    }
    case 142870:
    {
        returnValue = F("Heuckewalder Str.");
        break;
    }
    case 142871:
    {
        returnValue = F("Heudamm");
        break;
    }
    case 142872:
    {
        returnValue = F("Heude");
        break;
    }
    case 142873:
    {
        returnValue = F("Heudeber Str.");
        break;
    }
    case 142874:
    {
        returnValue = F("Heudeber Weg");
        break;
    }
    case 142875:
    {
        returnValue = F("Heudonk");
        break;
    }
    case 142876:
    {
        returnValue = F("Heudorfer Str.");
        break;
    }
    case 142877:
    {
        returnValue = F("Heudorfer Weg");
        break;
    }
    case 142878:
    {
        returnValue = F("Heudorfstr.");
        break;
    }
    case 142879:
    {
        returnValue = F("Heuelackerweg");
        break;
    }
    case 142880:
    {
        returnValue = F("Heueleweg");
        break;
    }
    case 142881:
    {
        returnValue = F("Heuelweg");
        break;
    }
    case 142882:
    {
        returnValue = F("Heuental");
        break;
    }
    case 142883:
    {
        returnValue = F("Heuenweg");
        break;
    }
    case 142884:
    {
        returnValue = F("Heuerbachstr.");
        break;
    }
    case 142885:
    {
        returnValue = F("Heuerhofstr.");
        break;
    }
    case 142886:
    {
        returnValue = F("Heuerkotten");
        break;
    }
    case 142887:
    {
        returnValue = F("Heuerlandstr.");
        break;
    }
    case 142888:
    {
        returnValue = F("Heuerlingsstr.");
        break;
    }
    case 142889:
    {
        returnValue = F("Heuerlingstr.");
        break;
    }
    case 142890:
    {
        returnValue = F("Heuerlingsweg");
        break;
    }
    case 142891:
    {
        returnValue = F("Heuermannsweg");
        break;
    }
    case 142892:
    {
        returnValue = F("Heuers Kamp");
        break;
    }
    case 142893:
    {
        returnValue = F("Heuers Moor");
        break;
    }
    case 142894:
    {
        returnValue = F("Heuersdamm");
        break;
    }
    case 142895:
    {
        returnValue = F("Heuersdorfer Str.");
        break;
    }
    case 142896:
    {
        returnValue = F("Heuershof");
        break;
    }
    case 142897:
    {
        returnValue = F("Heuersteig");
        break;
    }
    case 142898:
    {
        returnValue = F("Heuerstr.");
        break;
    }
    case 142899:
    {
        returnValue = F("Heuerweg");
        break;
    }
    case 142900:
    {
        returnValue = F("Heuerßer Str.");
        break;
    }
    case 142901:
    {
        returnValue = F("Heufahrt");
        break;
    }
    case 142902:
    {
        returnValue = F("Heufahrtstr.");
        break;
    }
    case 142903:
    {
        returnValue = F("Heufalterweg");
        break;
    }
    case 142904:
    {
        returnValue = F("Heufelder Str.");
        break;
    }
    case 142905:
    {
        returnValue = F("Heufelderweg");
        break;
    }
    case 142906:
    {
        returnValue = F("Heufeldstr.");
        break;
    }
    case 142907:
    {
        returnValue = F("Heufeldweg");
        break;
    }
    case 142908:
    {
        returnValue = F("Heufelwinden");
        break;
    }
    case 142909:
    {
        returnValue = F("Heuflügel");
        break;
    }
    case 142910:
    {
        returnValue = F("Heuftgraben");
        break;
    }
    case 142911:
    {
        returnValue = F("Heufuhr");
        break;
    }
    case 142912:
    {
        returnValue = F("Heufuhre");
        break;
    }
    case 142913:
    {
        returnValue = F("Heufurter Str.");
        break;
    }
    case 142914:
    {
        returnValue = F("Heugabenstr.");
        break;
    }
    case 142915:
    {
        returnValue = F("Heugarten");
        break;
    }
    case 142916:
    {
        returnValue = F("Heugartenweg");
        break;
    }
    case 142917:
    {
        returnValue = F("Heugass");
        break;
    }
    case 142918:
    {
        returnValue = F("Heugasse");
        break;
    }
    case 142919:
    {
        returnValue = F("Heugehrenweg");
        break;
    }
    case 142920:
    {
        returnValue = F("Heugericht");
        break;
    }
    case 142921:
    {
        returnValue = F("Heugestell");
        break;
    }
    case 142922:
    {
        returnValue = F("Heuglengäßle");
        break;
    }
    case 142923:
    {
        returnValue = F("Heugraben");
        break;
    }
    case 142924:
    {
        returnValue = F("Heugrabenstr.");
        break;
    }
    case 142925:
    {
        returnValue = F("Heugrippenstr.");
        break;
    }
    case 142926:
    {
        returnValue = F("Heugrund");
        break;
    }
    case 142927:
    {
        returnValue = F("Heugrundstr.");
        break;
    }
    case 142928:
    {
        returnValue = F("Heugstattweg");
        break;
    }
    case 142929:
    {
        returnValue = F("Heugärtenweg");
        break;
    }
    case 142930:
    {
        returnValue = F("Heugässlesweg");
        break;
    }
    case 142931:
    {
        returnValue = F("Heugäßle");
        break;
    }
    case 142932:
    {
        returnValue = F("Heuhausen");
        break;
    }
    case 142933:
    {
        returnValue = F("Heuhausweg");
        break;
    }
    case 142934:
    {
        returnValue = F("Heuheck");
        break;
    }
    case 142935:
    {
        returnValue = F("Heuhof");
        break;
    }
    case 142936:
    {
        returnValue = F("Heuhofermühlweg");
        break;
    }
    case 142937:
    {
        returnValue = F("Heuhofgasse");
        break;
    }
    case 142938:
    {
        returnValue = F("Heuhofstr.");
        break;
    }
    case 142939:
    {
        returnValue = F("Heuhohlweg");
        break;
    }
    case 142940:
    {
        returnValue = F("Heuholzer Str.");
        break;
    }
    case 142941:
    {
        returnValue = F("Heuholzhöfe");
        break;
    }
    case 142942:
    {
        returnValue = F("Heuholzstr.");
        break;
    }
    case 142943:
    {
        returnValue = F("Heuhölzle");
        break;
    }
    case 142944:
    {
        returnValue = F("Heuhölzleweg");
        break;
    }
    case 142945:
    {
        returnValue = F("Heukamp");
        break;
    }
    case 142946:
    {
        returnValue = F("Heukenberg");
        break;
    }
    case 142947:
    {
        returnValue = F("Heukendorfer Str.");
        break;
    }
    case 142948:
    {
        returnValue = F("Heukendorfer Weg");
        break;
    }
    case 142949:
    {
        returnValue = F("Heukers Weide");
        break;
    }
    case 142950:
    {
        returnValue = F("Heukewalder Str.");
        break;
    }
    case 142951:
    {
        returnValue = F("Heukewalder Weg");
        break;
    }
    case 142952:
    {
        returnValue = F("Heukopfstichweg");
        break;
    }
    case 142953:
    {
        returnValue = F("Heukopfstr.");
        break;
    }
    case 142954:
    {
        returnValue = F("Heukopfweg");
        break;
    }
    case 142955:
    {
        returnValue = F("Heukoppel");
        break;
    }
    case 142956:
    {
        returnValue = F("Heukrippenweg");
        break;
    }
    case 142957:
    {
        returnValue = F("Heuland");
        break;
    }
    case 142958:
    {
        returnValue = F("Heuland Mittelweg");
        break;
    }
    case 142959:
    {
        returnValue = F("Heulandsdamm");
        break;
    }
    case 142960:
    {
        returnValue = F("Heulandsmoorweg");
        break;
    }
    case 142961:
    {
        returnValue = F("Heulandstr.");
        break;
    }
    case 142962:
    {
        returnValue = F("Heulandsweg");
        break;
    }
    case 142963:
    {
        returnValue = F("Heulandweg");
        break;
    }
    case 142964:
    {
        returnValue = F("Heuleite");
        break;
    }
    case 142965:
    {
        returnValue = F("Heuleithe");
        break;
    }
    case 142966:
    {
        returnValue = F("Heulenberg");
        break;
    }
    case 142967:
    {
        returnValue = F("Heulenbergweg");
        break;
    }
    case 142968:
    {
        returnValue = F("Heulerichtstatt");
        break;
    }
    case 142969:
    {
        returnValue = F("Heuleweg");
        break;
    }
    case 142970:
    {
        returnValue = F("Heulingshof");
        break;
    }
    case 142971:
    {
        returnValue = F("Heulohweg");
        break;
    }
    case 142972:
    {
        returnValue = F("Heulukweg");
        break;
    }
    case 142973:
    {
        returnValue = F("Heuländer");
        break;
    }
    case 142974:
    {
        returnValue = F("Heuländer Str.");
        break;
    }
    case 142975:
    {
        returnValue = F("Heuländerweg");
        break;
    }
    case 142976:
    {
        returnValue = F("Heumaate");
        break;
    }
    case 142977:
    {
        returnValue = F("Heumaden");
        break;
    }
    case 142978:
    {
        returnValue = F("Heumadener Str.");
        break;
    }
    case 142979:
    {
        returnValue = F("Heumadenstr.");
        break;
    }
    case 142980:
    {
        returnValue = F("Heumadenweg");
        break;
    }
    case 142981:
    {
        returnValue = F("Heumadleweg");
        break;
    }
    case 142982:
    {
        returnValue = F("Heumadwiesenweg");
        break;
    }
    case 142983:
    {
        returnValue = F("Heumahd");
        break;
    }
    case 142984:
    {
        returnValue = F("Heumahde");
        break;
    }
    case 142985:
    {
        returnValue = F("Heumahderweg");
        break;
    }
    case 142986:
    {
        returnValue = F("Heumahdweg");
        break;
    }
    case 142987:
    {
        returnValue = F("Heumannsberg");
        break;
    }
    case 142988:
    {
        returnValue = F("Heumannshof");
        break;
    }
    case 142989:
    {
        returnValue = F("Heumannstr.");
        break;
    }
    case 142990:
    {
        returnValue = F("Heumannsweg");
        break;
    }
    case 142991:
    {
        returnValue = F("Heumarkt");
        break;
    }
    case 142992:
    {
        returnValue = F("Heumarktstr.");
        break;
    }
    case 142993:
    {
        returnValue = F("Heumattenweg");
        break;
    }
    case 142994:
    {
        returnValue = F("Heumke");
        break;
    }
    case 142995:
    {
        returnValue = F("Heumähder");
        break;
    }
    case 142996:
    {
        returnValue = F("Heumühlenstr.");
        break;
    }
    case 142997:
    {
        returnValue = F("Heuneburg Weg");
        break;
    }
    case 142998:
    {
        returnValue = F("Heuneburgblick");
        break;
    }
    case 142999:
    {
        returnValue = F("Heuneburgstr.");
        break;
    }
    case 143000:
    {
        returnValue = F("Heunenburgstr.");
        break;
    }
    case 143001:
    {
        returnValue = F("Heunenstr.");
        break;
    }
    case 143002:
    {
        returnValue = F("Heunernest");
        break;
    }
    case 143003:
    {
        returnValue = F("Heunesäulenweg");
        break;
    }
    case 143004:
    {
        returnValue = F("Heunischstr.");
        break;
    }
    case 143005:
    {
        returnValue = F("Heunsbacher Weg");
        break;
    }
    case 143006:
    {
        returnValue = F("Heunstbergweg");
        break;
    }
    case 143007:
    {
        returnValue = F("Heunwiese");
        break;
    }
    case 143008:
    {
        returnValue = F("Heupel");
        break;
    }
    case 143009:
    {
        returnValue = F("Heupelzer Weg");
        break;
    }
    case 143010:
    {
        returnValue = F("Heupfad");
        break;
    }
    case 143011:
    {
        returnValue = F("Heuplatzweg");
        break;
    }
    case 143012:
    {
        returnValue = F("Heurangenweg");
        break;
    }
    case 143013:
    {
        returnValue = F("Heureka");
        break;
    }
    case 143014:
    {
        returnValue = F("Heurenbacher Weg");
        break;
    }
    case 143015:
    {
        returnValue = F("Heureweg");
        break;
    }
    case 143016:
    {
        returnValue = F("Heurichstr.");
        break;
    }
    case 143017:
    {
        returnValue = F("Heuriedweg");
        break;
    }
    case 143018:
    {
        returnValue = F("Heuriger Weg");
        break;
    }
    case 143019:
    {
        returnValue = F("Heurungstr.");
        break;
    }
    case 143020:
    {
        returnValue = F("Heuscheuersträßchen");
        break;
    }
    case 143021:
    {
        returnValue = F("Heuscheuerweg");
        break;
    }
    case 143022:
    {
        returnValue = F("Heuscheuner Weg");
        break;
    }
    case 143023:
    {
        returnValue = F("Heuschneider");
        break;
    }
    case 143024:
    {
        returnValue = F("Heuschuppenweg");
        break;
    }
    case 143025:
    {
        returnValue = F("Heusdener Str.");
        break;
    }
    case 143026:
    {
        returnValue = F("Heusee");
        break;
    }
    case 143027:
    {
        returnValue = F("Heuseifen");
        break;
    }
    case 143028:
    {
        returnValue = F("Heusenstammer Grenzschneise");
        break;
    }
    case 143029:
    {
        returnValue = F("Heusenstammer Schneise");
        break;
    }
    case 143030:
    {
        returnValue = F("Heusenstammer Str.");
        break;
    }
    case 143031:
    {
        returnValue = F("Heusenstammer Weg");
        break;
    }
    case 143032:
    {
        returnValue = F("Heusenstammer-Feld-Schneise");
        break;
    }
    case 143033:
    {
        returnValue = F("Heuser Str.");
        break;
    }
    case 143034:
    {
        returnValue = F("Heusers Weg");
        break;
    }
    case 143035:
    {
        returnValue = F("Heuserweg");
        break;
    }
    case 143036:
    {
        returnValue = F("Heusgarten");
        break;
    }
    case 143037:
    {
        returnValue = F("Heusiepen");
        break;
    }
    case 143038:
    {
        returnValue = F("Heusinger Weg");
        break;
    }
    case 143039:
    {
        returnValue = F("Heusingerstr.");
        break;
    }
    case 143040:
    {
        returnValue = F("Heusler-Edenhuizen-Weg");
        break;
    }
    case 143041:
    {
        returnValue = F("Heuslinger Hang");
        break;
    }
    case 143042:
    {
        returnValue = F("Heuslingstr.");
        break;
    }
    case 143043:
    {
        returnValue = F("Heuspachstr.");
        break;
    }
    case 143044:
    {
        returnValue = F("Heusprenkel");
        break;
    }
    case 143045:
    {
        returnValue = F("Heuss-Knapp-Str.");
        break;
    }
    case 143046:
    {
        returnValue = F("Heuss-Str.");
        break;
    }
    case 143047:
    {
        returnValue = F("Heussstr.");
        break;
    }
    case 143048:
    {
        returnValue = F("Heussweg");
        break;
    }
    case 143049:
    {
        returnValue = F("Heusteg");
        break;
    }
    case 143050:
    {
        returnValue = F("Heusteig");
        break;
    }
    case 143051:
    {
        returnValue = F("Heusteige");
        break;
    }
    case 143052:
    {
        returnValue = F("Heusteigstr.");
        break;
    }
    case 143053:
    {
        returnValue = F("Heusteigweg");
        break;
    }
    case 143054:
    {
        returnValue = F("Heustiege");
        break;
    }
    case 143055:
    {
        returnValue = F("Heustr.");
        break;
    }
    case 143056:
    {
        returnValue = F("Heustätt");
        break;
    }
    case 143057:
    {
        returnValue = F("Heustätte");
        break;
    }
    case 143058:
    {
        returnValue = F("Heusweiler Str.");
        break;
    }
    case 143059:
    {
        returnValue = F("Heusweilerstr.");
        break;
    }
    case 143060:
    {
        returnValue = F("Heutalstr.");
        break;
    }
    case 143061:
    {
        returnValue = F("Heutalsträßle");
        break;
    }
    case 143062:
    {
        returnValue = F("Heutalsweg");
        break;
    }
    case 143063:
    {
        returnValue = F("Heutalweg");
        break;
    }
    case 143064:
    {
        returnValue = F("Heutauer Str.");
        break;
    }
    case 143065:
    {
        returnValue = F("Heutelstr.");
        break;
    }
    case 143066:
    {
        returnValue = F("Heutenburg");
        break;
    }
    case 143067:
    {
        returnValue = F("Heutenburger-Planie");
        break;
    }
    case 143068:
    {
        returnValue = F("Heutensbacher Str.");
        break;
    }
    case 143069:
    {
        returnValue = F("Heutenweg");
        break;
    }
    case 143070:
    {
        returnValue = F("Heuterdamm");
        break;
    }
    case 143071:
    {
        returnValue = F("Heuteresch");
        break;
    }
    case 143072:
    {
        returnValue = F("Heuthener Str.");
        break;
    }
    case 143073:
    {
        returnValue = F("Heuthener Weg");
        break;
    }
    case 143074:
    {
        returnValue = F("Heutingsheimer Allee");
        break;
    }
    case 143075:
    {
        returnValue = F("Heutingsheimer Str.");
        break;
    }
    case 143076:
    {
        returnValue = F("Heutingsweg");
        break;
    }
    case 143077:
    {
        returnValue = F("Heutor");
        break;
    }
    case 143078:
    {
        returnValue = F("Heutorstr.");
        break;
    }
    case 143079:
    {
        returnValue = F("Heutrift");
        break;
    }
    case 143080:
    {
        returnValue = F("Heutränk-Schneise");
        break;
    }
    case 143081:
    {
        returnValue = F("Heutzenmühle");
        break;
    }
    case 143082:
    {
        returnValue = F("Heutäleweg");
        break;
    }
    case 143083:
    {
        returnValue = F("Heuwangweg");
        break;
    }
    case 143084:
    {
        returnValue = F("Heuwasen");
        break;
    }
    case 143085:
    {
        returnValue = F("Heuweg");
        break;
    }
    case 143086:
    {
        returnValue = F("Heuweg Erbmatte");
        break;
    }
    case 143087:
    {
        returnValue = F("Heuwegle");
        break;
    }
    case 143088:
    {
        returnValue = F("Heuwegring");
        break;
    }
    case 143089:
    {
        returnValue = F("Heuweiler Weg");
        break;
    }
    case 143090:
    {
        returnValue = F("Heuwies");
        break;
    }
    case 143091:
    {
        returnValue = F("Heuwiesenweg");
        break;
    }
    case 143092:
    {
        returnValue = F("Heuwieserweg");
        break;
    }
    case 143093:
    {
        returnValue = F("Heuwiesl");
        break;
    }
    case 143094:
    {
        returnValue = F("Heuwiesstr.");
        break;
    }
    case 143095:
    {
        returnValue = F("Heuwinkel");
        break;
    }
    case 143096:
    {
        returnValue = F("Heuwinkels Grund");
        break;
    }
    case 143097:
    {
        returnValue = F("Heuwinklstr.");
        break;
    }
    case 143098:
    {
        returnValue = F("Heuwisch");
        break;
    }
    case 143099:
    {
        returnValue = F("Heuwörth");
        break;
    }
    case 143100:
    {
        returnValue = F("Heuzerter Str.");
        break;
    }
    case 143101:
    {
        returnValue = F("Heuzwinger");
        break;
    }
    case 143102:
    {
        returnValue = F("Heußleinsweg");
        break;
    }
    case 143103:
    {
        returnValue = F("Heußstr.");
        break;
    }
    case 143104:
    {
        returnValue = F("Heußweg");
        break;
    }
    case 143105:
    {
        returnValue = F("Heuäckerstr.");
        break;
    }
    case 143106:
    {
        returnValue = F("Hevelingstr.");
        break;
    }
    case 143107:
    {
        returnValue = F("Heveliusweg");
        break;
    }
    case 143108:
    {
        returnValue = F("Hevellerstr.");
        break;
    }
    case 143109:
    {
        returnValue = F("Heven");
        break;
    }
    case 143110:
    {
        returnValue = F("Hevener Weg");
        break;
    }
    case 143111:
    {
        returnValue = F("Hevenser Str.");
        break;
    }
    case 143112:
    {
        returnValue = F("Hever Hallig");
        break;
    }
    case 143113:
    {
        returnValue = F("Heverstr.");
        break;
    }
    case 143114:
    {
        returnValue = F("Heverstrom");
        break;
    }
    case 143115:
    {
        returnValue = F("Heverweg");
        break;
    }
    case 143116:
    {
        returnValue = F("Heveser Feld");
        break;
    }
    case 143117:
    {
        returnValue = F("Heveser Str.");
        break;
    }
    case 143118:
    {
        returnValue = F("Heveweg");
        break;
    }
    case 143119:
    {
        returnValue = F("Hevinghausen");
        break;
    }
    case 143120:
    {
        returnValue = F("Hewe");
        break;
    }
    case 143121:
    {
        returnValue = F("Hewensplatz");
        break;
    }
    case 143122:
    {
        returnValue = F("Hewenstr.");
        break;
    }
    case 143123:
    {
        returnValue = F("Hewertweg");
        break;
    }
    case 143124:
    {
        returnValue = F("Hewingser Weg");
        break;
    }
    case 143125:
    {
        returnValue = F("Hewlett-Packard-Str.");
        break;
    }
    case 143126:
    {
        returnValue = F("Hewrrenmösleweg");
        break;
    }
    case 143127:
    {
        returnValue = F("Hexagässle");
        break;
    }
    case 143128:
    {
        returnValue = F("Hexelgasse");
        break;
    }
    case 143129:
    {
        returnValue = F("Hexenberg");
        break;
    }
    case 143130:
    {
        returnValue = F("Hexenbergstr.");
        break;
    }
    case 143131:
    {
        returnValue = F("Hexenbergweg");
        break;
    }
    case 143132:
    {
        returnValue = F("Hexenbodenweg");
        break;
    }
    case 143133:
    {
        returnValue = F("Hexenbruchweg");
        break;
    }
    case 143134:
    {
        returnValue = F("Hexenbuckelweg");
        break;
    }
    case 143135:
    {
        returnValue = F("Hexengarten");
        break;
    }
    case 143136:
    {
        returnValue = F("Hexengasse");
        break;
    }
    case 143137:
    {
        returnValue = F("Hexengässchen");
        break;
    }
    case 143138:
    {
        returnValue = F("Hexengäßchen");
        break;
    }
    case 143139:
    {
        returnValue = F("Hexengäßle");
        break;
    }
    case 143140:
    {
        returnValue = F("Hexengäßlein");
        break;
    }
    case 143141:
    {
        returnValue = F("Hexenheide");
        break;
    }
    case 143142:
    {
        returnValue = F("Hexenhäusle");
        break;
    }
    case 143143:
    {
        returnValue = F("Hexenkeller");
        break;
    }
    case 143144:
    {
        returnValue = F("Hexenkessel");
        break;
    }
    case 143145:
    {
        returnValue = F("Hexenklamm");
        break;
    }
    case 143146:
    {
        returnValue = F("Hexenkoppel");
        break;
    }
    case 143147:
    {
        returnValue = F("Hexenkreis");
        break;
    }
    case 143148:
    {
        returnValue = F("Hexenkuhle");
        break;
    }
    case 143149:
    {
        returnValue = F("Hexenloch");
        break;
    }
    case 143150:
    {
        returnValue = F("Hexenmatt");
        break;
    }
    case 143151:
    {
        returnValue = F("Hexenpark");
        break;
    }
    case 143152:
    {
        returnValue = F("Hexenpatt");
        break;
    }
    case 143153:
    {
        returnValue = F("Hexenpfad");
        break;
    }
    case 143154:
    {
        returnValue = F("Hexenpfädle");
        break;
    }
    case 143155:
    {
        returnValue = F("Hexenplatz");
        break;
    }
    case 143156:
    {
        returnValue = F("Hexenplatztalweg");
        break;
    }
    case 143157:
    {
        returnValue = F("Hexenplatzweg");
        break;
    }
    case 143158:
    {
        returnValue = F("Hexenreihe");
        break;
    }
    case 143159:
    {
        returnValue = F("Hexenschlucht");
        break;
    }
    case 143160:
    {
        returnValue = F("Hexenschluchtweg");
        break;
    }
    case 143161:
    {
        returnValue = F("Hexensteig");
        break;
    }
    case 143162:
    {
        returnValue = F("Hexensteigle");
        break;
    }
    case 143163:
    {
        returnValue = F("Hexenstich");
        break;
    }
    case 143164:
    {
        returnValue = F("Hexenstieg");
        break;
    }
    case 143165:
    {
        returnValue = F("Hexenstäffele");
        break;
    }
    case 143166:
    {
        returnValue = F("Hexentalstr.");
        break;
    }
    case 143167:
    {
        returnValue = F("Hexentanzplatz");
        break;
    }
    case 143168:
    {
        returnValue = F("Hexentreppe");
        break;
    }
    case 143169:
    {
        returnValue = F("Hexentwiete");
        break;
    }
    case 143170:
    {
        returnValue = F("Hexenviertel");
        break;
    }
    case 143171:
    {
        returnValue = F("Hexenweg");
        break;
    }
    case 143172:
    {
        returnValue = F("Hexenwegle");
        break;
    }
    case 143173:
    {
        returnValue = F("Hexeweg");
        break;
    }
    case 143174:
    {
        returnValue = F("Hexham-Allee");
        break;
    }
    case 143175:
    {
        returnValue = F("Hexmattstr.");
        break;
    }
    case 143176:
    {
        returnValue = F("Hexweg");
        break;
    }
    case 143177:
    {
        returnValue = F("Heyberg");
        break;
    }
    case 143178:
    {
        returnValue = F("Heydaer Siedlung");
        break;
    }
    case 143179:
    {
        returnValue = F("Heydaer Str.");
        break;
    }
    case 143180:
    {
        returnValue = F("Heydamweg");
        break;
    }
    case 143181:
    {
        returnValue = F("Heydauer Weg");
        break;
    }
    case 143182:
    {
        returnValue = F("Heydecker Str.");
        break;
    }
    case 143183:
    {
        returnValue = F("Heydeckstr.");
        break;
    }
    case 143184:
    {
        returnValue = F("Heydemannstr.");
        break;
    }
    case 143185:
    {
        returnValue = F("Heydenholt");
        break;
    }
    case 143186:
    {
        returnValue = F("Heydenmühle");
        break;
    }
    case 143187:
    {
        returnValue = F("Heydenreichstr.");
        break;
    }
    case 143188:
    {
        returnValue = F("Heydenstr.");
        break;
    }
    case 143189:
    {
        returnValue = F("Heyderstr.");
        break;
    }
    case 143190:
    {
        returnValue = F("Heydeweg");
        break;
    }
    case 143191:
    {
        returnValue = F("Heydingerstr.");
        break;
    }
    case 143192:
    {
        returnValue = F("Heydkamp");
        break;
    }
    case 143193:
    {
        returnValue = F("Heydrich-Brugger-Str.");
        break;
    }
    case 143194:
    {
        returnValue = F("Heydstr.");
        break;
    }
    case 143195:
    {
        returnValue = F("Heydstädter Weg");
        break;
    }
    case 143196:
    {
        returnValue = F("Heydt");
        break;
    }
    case 143197:
    {
        returnValue = F("Heydukenweg");
        break;
    }
    case 143198:
    {
        returnValue = F("Heye-Groenhoff-Str.");
        break;
    }
    case 143199:
    {
        returnValue = F("Heyener Str.");
        break;
    }
    case 143200:
    {
        returnValue = F("Heyenheimer Weg");
        break;
    }
    case 143201:
    {
        returnValue = F("Heyenhof");
        break;
    }
    case 143202:
    {
        returnValue = F("Heyenhorst");
        break;
    }
    case 143203:
    {
        returnValue = F("Heyenweg");
        break;
    }
    case 143204:
    {
        returnValue = F("Heyer Hohl");
        break;
    }
    case 143205:
    {
        returnValue = F("Heyer Weg");
        break;
    }
    case 143206:
    {
        returnValue = F("Heyer-Schneise");
        break;
    }
    case 143207:
    {
        returnValue = F("Heyerbergstr.");
        break;
    }
    case 143208:
    {
        returnValue = F("Heyerdrink");
        break;
    }
    case 143209:
    {
        returnValue = F("Heyergarten");
        break;
    }
    case 143210:
    {
        returnValue = F("Heyerhoffstr.");
        break;
    }
    case 143211:
    {
        returnValue = F("Heyerhöfener Str.");
        break;
    }
    case 143212:
    {
        returnValue = F("Heyerhütte");
        break;
    }
    case 143213:
    {
        returnValue = F("Heyerkirchweg");
        break;
    }
    case 143214:
    {
        returnValue = F("Heyermannsweg");
        break;
    }
    case 143215:
    {
        returnValue = F("Heyers Kamp");
        break;
    }
    case 143216:
    {
        returnValue = F("Heyerschneise");
        break;
    }
    case 143217:
    {
        returnValue = F("Heyersdorfer Weg");
        break;
    }
    case 143218:
    {
        returnValue = F("Heyersgasse");
        break;
    }
    case 143219:
    {
        returnValue = F("Heyersleite");
        break;
    }
    case 143220:
    {
        returnValue = F("Heyerstr.");
        break;
    }
    case 143221:
    {
        returnValue = F("Heyersumer Str.");
        break;
    }
    case 143222:
    {
        returnValue = F("Heyert-Siedlung");
        break;
    }
    case 143223:
    {
        returnValue = F("Heyerweg");
        break;
    }
    case 143224:
    {
        returnValue = F("Heyerwinkel");
        break;
    }
    case 143225:
    {
        returnValue = F("Heyeröder Landstr.");
        break;
    }
    case 143226:
    {
        returnValue = F("Heyeröder Str.");
        break;
    }
    case 143227:
    {
        returnValue = F("Heyeröder Weg");
        break;
    }
    case 143228:
    {
        returnValue = F("Heyestr.");
        break;
    }
    case 143229:
    {
        returnValue = F("Heygendorfer Str.");
        break;
    }
    case 143230:
    {
        returnValue = F("Heygerfeld");
        break;
    }
    case 143231:
    {
        returnValue = F("Heykampring");
        break;
    }
    case 143232:
    {
        returnValue = F("Heykes Lohne");
        break;
    }
    case 143233:
    {
        returnValue = F("Heyl'scher Garten");
        break;
    }
    case 143234:
    {
        returnValue = F("Heyligenstaedtstr.");
        break;
    }
    case 143235:
    {
        returnValue = F("Heylstr.");
        break;
    }
    case 143236:
    {
        returnValue = F("Heymannshof");
        break;
    }
    case 143237:
    {
        returnValue = F("Heymannstr.");
        break;
    }
    case 143238:
    {
        returnValue = F("Heymannsweg");
        break;
    }
    case 143239:
    {
        returnValue = F("Heymer-Pilz-Str.");
        break;
    }
    case 143240:
    {
        returnValue = F("Heymeshof");
        break;
    }
    case 143241:
    {
        returnValue = F("Heynburger Str.");
        break;
    }
    case 143242:
    {
        returnValue = F("Heynemannstr.");
        break;
    }
    case 143243:
    {
        returnValue = F("Heynestr.");
        break;
    }
    case 143244:
    {
        returnValue = F("Heynigstr.");
        break;
    }
    case 143245:
    {
        returnValue = F("Heynitzer Str.");
        break;
    }
    case 143246:
    {
        returnValue = F("Heynitzstr.");
        break;
    }
    case 143247:
    {
        returnValue = F("Heynlinstr.");
        break;
    }
    case 143248:
    {
        returnValue = F("Heynstr.");
        break;
    }
    case 143249:
    {
        returnValue = F("Heynweg");
        break;
    }
    case 143250:
    {
        returnValue = F("Heyrother Str.");
        break;
    }
    case 143251:
    {
        returnValue = F("Heyrothsberger Str.");
        break;
    }
    case 143252:
    {
        returnValue = F("Heysenstiege");
        break;
    }
    case 143253:
    {
        returnValue = F("Heysersklingenweg");
        break;
    }
    case 143254:
    {
        returnValue = F("Heysestr.");
        break;
    }
    case 143255:
    {
        returnValue = F("Heystorfer Weg");
        break;
    }
    case 143256:
    {
        returnValue = F("Heywinkelstr.");
        break;
    }
    case 143257:
    {
        returnValue = F("Hezenbergstr.");
        break;
    }
    case 143258:
    {
        returnValue = F("Hezengäßle");
        break;
    }
    case 143259:
    {
        returnValue = F("Heziloplatz");
        break;
    }
    case 143260:
    {
        returnValue = F("Hezilostr.");
        break;
    }
    case 143261:
    {
        returnValue = F("Heßbach");
        break;
    }
    case 143262:
    {
        returnValue = F("Heßbachallee");
        break;
    }
    case 143263:
    {
        returnValue = F("Heßbacher Str.");
        break;
    }
    case 143264:
    {
        returnValue = F("Heßbachstr.");
        break;
    }
    case 143265:
    {
        returnValue = F("Heßberg");
        break;
    }
    case 143266:
    {
        returnValue = F("Heßbergplatz");
        break;
    }
    case 143267:
    {
        returnValue = F("Heßbergstr.");
        break;
    }
    case 143268:
    {
        returnValue = F("Heßbergweg");
        break;
    }
    case 143269:
    {
        returnValue = F("Heßdorfer Weg");
        break;
    }
    case 143270:
    {
        returnValue = F("Heßelerstr.");
        break;
    }
    case 143271:
    {
        returnValue = F("Heßelstr.");
        break;
    }
    case 143272:
    {
        returnValue = F("Heßgasse");
        break;
    }
    case 143273:
    {
        returnValue = F("Heßgraben");
        break;
    }
    case 143274:
    {
        returnValue = F("Heßheimer Str.");
        break;
    }
    case 143275:
    {
        returnValue = F("Heßheimer Weg");
        break;
    }
    case 143276:
    {
        returnValue = F("Heßheimerstr.");
        break;
    }
    case 143277:
    {
        returnValue = F("Heßlach");
        break;
    }
    case 143278:
    {
        returnValue = F("Heßlacher Str.");
        break;
    }
    case 143279:
    {
        returnValue = F("Heßlachshof");
        break;
    }
    case 143280:
    {
        returnValue = F("Heßlachshofer Str.");
        break;
    }
    case 143281:
    {
        returnValue = F("Heßlauweg");
        break;
    }
    case 143282:
    {
        returnValue = F("Heßlergasse");
        break;
    }
    case 143283:
    {
        returnValue = F("Heßlich ober der Landstrae");
        break;
    }
    case 143284:
    {
        returnValue = F("Heßlinger Str.");
        break;
    }
    case 143285:
    {
        returnValue = F("Heßlingshof");
        break;
    }
    case 143286:
    {
        returnValue = F("Heßlocher Str.");
        break;
    }
    case 143287:
    {
        returnValue = F("Heßlöhlstr.");
        break;
    }
    case 143288:
    {
        returnValue = F("Heßmannsgrundweg");
        break;
    }
    case 143289:
    {
        returnValue = F("Heüveldopsbusch");
        break;
    }
    case 143290:
    {
        returnValue = F("Hiasl-Maier-Weg");
        break;
    }
    case 143291:
    {
        returnValue = F("Hiaswai");
        break;
    }
    case 143292:
    {
        returnValue = F("Hibbelweg");
        break;
    }
    case 143293:
    {
        returnValue = F("Hibbener Brink");
        break;
    }
    case 143294:
    {
        returnValue = F("Hibbener Bruch");
        break;
    }
    case 143295:
    {
        returnValue = F("Hibbener Dorfstr.");
        break;
    }
    case 143296:
    {
        returnValue = F("Hibbener Heide");
        break;
    }
    case 143297:
    {
        returnValue = F("Hibbinger Str.");
        break;
    }
    case 143298:
    {
        returnValue = F("Hibbingser Weg");
        break;
    }
    case 143299:
    {
        returnValue = F("Hiberniastr.");
        break;
    }
    case 143300:
    {
        returnValue = F("Hibingerstr.");
        break;
    }
    case 143301:
    {
        returnValue = F("Hibiscusweg");
        break;
    }
    case 143302:
    {
        returnValue = F("Hibiskusstr.");
        break;
    }
    case 143303:
    {
        returnValue = F("Hibiskusweg");
        break;
    }
    case 143304:
    {
        returnValue = F("Hichtweg");
        break;
    }
    case 143305:
    {
        returnValue = F("Hicke-de-Bloom-Str.");
        break;
    }
    case 143306:
    {
        returnValue = F("Hickengrundstr.");
        break;
    }
    case 143307:
    {
        returnValue = F("Hickenweg");
        break;
    }
    case 143308:
    {
        returnValue = F("Hickerhofstr.");
        break;
    }
    case 143309:
    {
        returnValue = F("Hickerstr.");
        break;
    }
    case 143310:
    {
        returnValue = F("Hickeshausen");
        break;
    }
    case 143311:
    {
        returnValue = F("Hickeswinkel");
        break;
    }
    case 143312:
    {
        returnValue = F("Hicklerweg");
        break;
    }
    case 143313:
    {
        returnValue = F("Hicklstr.");
        break;
    }
    case 143314:
    {
        returnValue = F("Hickoryweg");
        break;
    }
    case 143315:
    {
        returnValue = F("Hiddenhausener Str.");
        break;
    }
    case 143316:
    {
        returnValue = F("Hiddenseer Str.");
        break;
    }
    case 143317:
    {
        returnValue = F("Hiddenseestr.");
        break;
    }
    case 143318:
    {
        returnValue = F("Hiddenseeweg");
        break;
    }
    case 143319:
    {
        returnValue = F("Hiddensen");
        break;
    }
    case 143320:
    {
        returnValue = F("Hiddenskamp");
        break;
    }
    case 143321:
    {
        returnValue = F("Hiddesser Str.");
        break;
    }
    case 143322:
    {
        returnValue = F("Hiddestorfer Str.");
        break;
    }
    case 143323:
    {
        returnValue = F("Hiddestorfer Weg");
        break;
    }
    case 143324:
    {
        returnValue = F("Hiddigeigeiweg");
        break;
    }
    case 143325:
    {
        returnValue = F("Hiddigwarder Str.");
        break;
    }
    case 143326:
    {
        returnValue = F("Hiddinger Str.");
        break;
    }
    case 143327:
    {
        returnValue = F("Hiddinghausen");
        break;
    }
    case 143328:
    {
        returnValue = F("Hiddinghauser Str.");
        break;
    }
    case 143329:
    {
        returnValue = F("Hiddingseler Str.");
        break;
    }
    case 143330:
    {
        returnValue = F("Hiddingser Weg");
        break;
    }
    case 143331:
    {
        returnValue = F("Hiddostr.");
        break;
    }
    case 143332:
    {
        returnValue = F("Hiebelerstr.");
        break;
    }
    case 143333:
    {
        returnValue = F("Hieber Passage");
        break;
    }
    case 143334:
    {
        returnValue = F("Hieblerstr.");
        break;
    }
    case 143335:
    {
        returnValue = F("Hiebsrichtstatt");
        break;
    }
    case 143336:
    {
        returnValue = F("Hiebweg");
        break;
    }
    case 143337:
    {
        returnValue = F("Hiedererstr.");
        break;
    }
    case 143338:
    {
        returnValue = F("Hieenerbrigg");
        break;
    }
    case 143339:
    {
        returnValue = F("Hiege");
        break;
    }
    case 143340:
    {
        returnValue = F("Hiegenbusch");
        break;
    }
    case 143341:
    {
        returnValue = F("Hiegerstr.");
        break;
    }
    case 143342:
    {
        returnValue = F("Hiehlstr.");
        break;
    }
    case 143343:
    {
        returnValue = F("Hielskat");
        break;
    }
    case 143344:
    {
        returnValue = F("Hielweg");
        break;
    }
    case 143345:
    {
        returnValue = F("Hiemesstr.");
        break;
    }
    case 143346:
    {
        returnValue = F("Hienbergstr.");
        break;
    }
    case 143347:
    {
        returnValue = F("Hienenburg");
        break;
    }
    case 143348:
    {
        returnValue = F("Hienhartweg");
        break;
    }
    case 143349:
    {
        returnValue = F("Hienheimer Str.");
        break;
    }
    case 143350:
    {
        returnValue = F("Hienlohestr.");
        break;
    }
    case 143351:
    {
        returnValue = F("Hienrachinger Str.");
        break;
    }
    case 143352:
    {
        returnValue = F("Hienstr.");
        break;
    }
    case 143353:
    {
        returnValue = F("Hiepenfeldweg");
        break;
    }
    case 143354:
    {
        returnValue = F("Hier trainierte Armin Hary");
        break;
    }
    case 143355:
    {
        returnValue = F("Hiera");
        break;
    }
    case 143356:
    {
        returnValue = F("Hieranklweg");
        break;
    }
    case 143357:
    {
        returnValue = F("Hierbachweg");
        break;
    }
    case 143358:
    {
        returnValue = F("Hierbrink");
        break;
    }
    case 143359:
    {
        returnValue = F("Hiererweg");
        break;
    }
    case 143360:
    {
        returnValue = F("Hierlbacher Str.");
        break;
    }
    case 143361:
    {
        returnValue = F("Hierlingerweg");
        break;
    }
    case 143362:
    {
        returnValue = F("Hierlstr.");
        break;
    }
    case 143363:
    {
        returnValue = F("Hiermsweg");
        break;
    }
    case 143364:
    {
        returnValue = F("Hieroldstr.");
        break;
    }
    case 143365:
    {
        returnValue = F("Hieronimistr.");
        break;
    }
    case 143366:
    {
        returnValue = F("Hieronymus-Baur-Weg");
        break;
    }
    case 143367:
    {
        returnValue = F("Hieronymus-Bock-Ring");
        break;
    }
    case 143368:
    {
        returnValue = F("Hieronymus-Bock-Weg");
        break;
    }
    case 143369:
    {
        returnValue = F("Hieronymus-Emser-Weg");
        break;
    }
    case 143370:
    {
        returnValue = F("Hieronymus-Fäßler-Str.");
        break;
    }
    case 143371:
    {
        returnValue = F("Hieronymus-Jaegen-Str.");
        break;
    }
    case 143372:
    {
        returnValue = F("Hieronymus-Lotter-Str.");
        break;
    }
    case 143373:
    {
        returnValue = F("Hieronymus-Nopp-Str.");
        break;
    }
    case 143374:
    {
        returnValue = F("Hieronymus-Schulze-Weg");
        break;
    }
    case 143375:
    {
        returnValue = F("Hieronymus-Wolf-Str.");
        break;
    }
    case 143376:
    {
        returnValue = F("Hieronymus-von-Bose-Str.");
        break;
    }
    case 143377:
    {
        returnValue = F("Hieronymusstr.");
        break;
    }
    case 143378:
    {
        returnValue = F("Hierscheider Str.");
        break;
    }
    case 143379:
    {
        returnValue = F("Hierstetterweg");
        break;
    }
    case 143380:
    {
        returnValue = F("Hierystr.");
        break;
    }
    case 143381:
    {
        returnValue = F("Hierzinger Str.");
        break;
    }
    case 143382:
    {
        returnValue = F("Hiesbach");
        break;
    }
    case 143383:
    {
        returnValue = F("Hieselwirtsgasse");
        break;
    }
    case 143384:
    {
        returnValue = F("Hiesepatt");
        break;
    }
    case 143385:
    {
        returnValue = F("Hiesfelder Str.");
        break;
    }
    case 143386:
    {
        returnValue = F("Hieskebarg");
        break;
    }
    case 143387:
    {
        returnValue = F("Hieskebarger Str.");
        break;
    }
    case 143388:
    {
        returnValue = F("Hietzinger Wiesen");
        break;
    }
    case 143389:
    {
        returnValue = F("Hieveweg");
        break;
    }
    case 143390:
    {
        returnValue = F("Hiffelweg");
        break;
    }
    case 143391:
    {
        returnValue = F("Hiflänzleweg");
        break;
    }
    case 143392:
    {
        returnValue = F("Hiftenberg");
        break;
    }
    case 143393:
    {
        returnValue = F("Higidesweg");
        break;
    }
    case 143394:
    {
        returnValue = F("Hiir");
        break;
    }
    case 143395:
    {
        returnValue = F("Hiirlön");
        break;
    }
    case 143396:
    {
        returnValue = F("Hilaria-Lechner-Str.");
        break;
    }
    case 143397:
    {
        returnValue = F("Hilaria-Lerch-Str.");
        break;
    }
    case 143398:
    {
        returnValue = F("Hilariastr.");
        break;
    }
    case 143399:
    {
        returnValue = F("Hilariaweg");
        break;
    }
    case 143400:
    {
        returnValue = F("Hilarion-Kufner-Str.");
        break;
    }
    case 143401:
    {
        returnValue = F("Hilarius-Leick-Str.");
        break;
    }
    case 143402:
    {
        returnValue = F("Hilariusstr.");
        break;
    }
    case 143403:
    {
        returnValue = F("Hilb");
        break;
    }
    case 143404:
    {
        returnValue = F("Hilbecker Heideweg");
        break;
    }
    case 143405:
    {
        returnValue = F("Hilbecker Hellweg");
        break;
    }
    case 143406:
    {
        returnValue = F("Hilbengasse");
        break;
    }
    case 143407:
    {
        returnValue = F("Hilbenwaldweg");
        break;
    }
    case 143408:
    {
        returnValue = F("Hilbenweg");
        break;
    }
    case 143409:
    {
        returnValue = F("Hilberather Pfad");
        break;
    }
    case 143410:
    {
        returnValue = F("Hilberather Str.");
        break;
    }
    case 143411:
    {
        returnValue = F("Hilberersgarten");
        break;
    }
    case 143412:
    {
        returnValue = F("Hilbergartenstr.");
        break;
    }
    case 143413:
    {
        returnValue = F("Hilbergskamp");
        break;
    }
    case 143414:
    {
        returnValue = F("Hilberlachestr.");
        break;
    }
    case 143415:
    {
        returnValue = F("Hilbersdorf");
        break;
    }
    case 143416:
    {
        returnValue = F("Hilbersdorfer Str.");
        break;
    }
    case 143417:
    {
        returnValue = F("Hilberstr.");
        break;
    }
    case 143418:
    {
        returnValue = F("Hilberts Winkel");
        break;
    }
    case 143419:
    {
        returnValue = F("Hilbertshauser Weg");
        break;
    }
    case 143420:
    {
        returnValue = F("Hilbertskamp");
        break;
    }
    case 143421:
    {
        returnValue = F("Hilbertweg");
        break;
    }
    case 143422:
    {
        returnValue = F("Hilbgasse");
        break;
    }
    case 143423:
    {
        returnValue = F("Hilbinkstr.");
        break;
    }
    case 143424:
    {
        returnValue = F("Hilbringer Str.");
        break;
    }
    case 143425:
    {
        returnValue = F("Hilbstr.");
        break;
    }
    case 143426:
    {
        returnValue = F("Hilbuskamp");
        break;
    }
    case 143427:
    {
        returnValue = F("Hilbuskolk");
        break;
    }
    case 143428:
    {
        returnValue = F("Hilbweg");
        break;
    }
    case 143429:
    {
        returnValue = F("Hilchenbacher Str.");
        break;
    }
    case 143430:
    {
        returnValue = F("Hilchenbacher Weg");
        break;
    }
    case 143431:
    {
        returnValue = F("Hilchenstr.");
        break;
    }
    case 143432:
    {
        returnValue = F("Hilda-Heinemann-Str.");
        break;
    }
    case 143433:
    {
        returnValue = F("Hilda-Kühl-Weg");
        break;
    }
    case 143434:
    {
        returnValue = F("Hilda-Monte-Str.");
        break;
    }
    case 143435:
    {
        returnValue = F("Hilda-Rempel-Str.");
        break;
    }
    case 143436:
    {
        returnValue = F("Hilda-Sandtner-Str.");
        break;
    }
    case 143437:
    {
        returnValue = F("Hilda-Sandtner-Weg");
        break;
    }
    case 143438:
    {
        returnValue = F("Hilda-von-Stedman-Str.");
        break;
    }
    case 143439:
    {
        returnValue = F("Hildachstr.");
        break;
    }
    case 143440:
    {
        returnValue = F("Hildahain");
        break;
    }
    case 143441:
    {
        returnValue = F("Hildaplatz");
        break;
    }
    case 143442:
    {
        returnValue = F("Hildastr.");
        break;
    }
    case 143443:
    {
        returnValue = F("Hildburghausener Str.");
        break;
    }
    case 143444:
    {
        returnValue = F("Hildburghäuser Steig");
        break;
    }
    case 143445:
    {
        returnValue = F("Hildburghäuser Str.");
        break;
    }
    case 143446:
    {
        returnValue = F("Hildburghäuser Weg");
        break;
    }
    case 143447:
    {
        returnValue = F("Hildburgstr.");
        break;
    }
    case 143448:
    {
        returnValue = F("Hildchen");
        break;
    }
    case 143449:
    {
        returnValue = F("Hilde-Adolf-Str.");
        break;
    }
    case 143450:
    {
        returnValue = F("Hilde-Bruch-Str.");
        break;
    }
    case 143451:
    {
        returnValue = F("Hilde-Coppi-Str.");
        break;
    }
    case 143452:
    {
        returnValue = F("Hilde-Coppi-Weg");
        break;
    }
    case 143453:
    {
        returnValue = F("Hilde-Domin-Str.");
        break;
    }
    case 143454:
    {
        returnValue = F("Hilde-Domin-Weg");
        break;
    }
    case 143455:
    {
        returnValue = F("Hilde-Greller-Weg");
        break;
    }
    case 143456:
    {
        returnValue = F("Hilde-Hecht-Str.");
        break;
    }
    case 143457:
    {
        returnValue = F("Hilde-Kirsch-Str.");
        break;
    }
    case 143458:
    {
        returnValue = F("Hilde-Löhr-Weg");
        break;
    }
    case 143459:
    {
        returnValue = F("Hilde-Menzer-Str.");
        break;
    }
    case 143460:
    {
        returnValue = F("Hildeboldstr.");
        break;
    }
    case 143461:
    {
        returnValue = F("Hildebrand Kurve");
        break;
    }
    case 143462:
    {
        returnValue = F("Hildebrandshagen");
        break;
    }
    case 143463:
    {
        returnValue = F("Hildebrandshagener Str.");
        break;
    }
    case 143464:
    {
        returnValue = F("Hildebrandstr.");
        break;
    }
    case 143465:
    {
        returnValue = F("Hildebrandtstr.");
        break;
    }
    case 143466:
    {
        returnValue = F("Hildebrandtsweg");
        break;
    }
    case 143467:
    {
        returnValue = F("Hildebrandweg");
        break;
    }
    case 143468:
    {
        returnValue = F("Hildegard von Bingen-Str.");
        break;
    }
    case 143469:
    {
        returnValue = F("Hildegard-Beck-Weg");
        break;
    }
    case 143470:
    {
        returnValue = F("Hildegard-Burgdorf-Str.");
        break;
    }
    case 143471:
    {
        returnValue = F("Hildegard-Burjan-Platz");
        break;
    }
    case 143472:
    {
        returnValue = F("Hildegard-Busse-Str.");
        break;
    }
    case 143473:
    {
        returnValue = F("Hildegard-Ferber-Str.");
        break;
    }
    case 143474:
    {
        returnValue = F("Hildegard-Hamm-Brücher-Platz");
        break;
    }
    case 143475:
    {
        returnValue = F("Hildegard-Hamm-Brücher-Steg");
        break;
    }
    case 143476:
    {
        returnValue = F("Hildegard-Kattermann-Str.");
        break;
    }
    case 143477:
    {
        returnValue = F("Hildegard-Schäfer-Str.");
        break;
    }
    case 143478:
    {
        returnValue = F("Hildegard-von-Bingen Weg");
        break;
    }
    case 143479:
    {
        returnValue = F("Hildegard-von-Bingen-Str.");
        break;
    }
    case 143480:
    {
        returnValue = F("Hildegard-von-Bingen-Weg");
        break;
    }
    case 143481:
    {
        returnValue = F("Hildegardisstr.");
        break;
    }
    case 143482:
    {
        returnValue = F("Hildegardisweg");
        break;
    }
    case 143483:
    {
        returnValue = F("Hildegardring");
        break;
    }
    case 143484:
    {
        returnValue = F("Hildegardstr.");
        break;
    }
    case 143485:
    {
        returnValue = F("Hildegardweg");
        break;
    }
    case 143486:
    {
        returnValue = F("Hildegart-von-Bingen-Weg");
        break;
    }
    case 143487:
    {
        returnValue = F("Hildegraben");
        break;
    }
    case 143488:
    {
        returnValue = F("Hildegundestr.");
        break;
    }
    case 143489:
    {
        returnValue = F("Hildegundeweg");
        break;
    }
    case 143490:
    {
        returnValue = F("Hildegundisallee");
        break;
    }
    case 143491:
    {
        returnValue = F("Hildegundisstr.");
        break;
    }
    case 143492:
    {
        returnValue = F("Hildegundisweg");
        break;
    }
    case 143493:
    {
        returnValue = F("Hildegundweg");
        break;
    }
    case 143494:
    {
        returnValue = F("Hildeheimer Str.");
        break;
    }
    case 143495:
    {
        returnValue = F("Hildemannstr.");
        break;
    }
    case 143496:
    {
        returnValue = F("Hildenbrandseck");
        break;
    }
    case 143497:
    {
        returnValue = F("Hildenbrandstr.");
        break;
    }
    case 143498:
    {
        returnValue = F("Hildenbrandweg");
        break;
    }
    case 143499:
    {
        returnValue = F("Hildener Str.");
        break;
    }
    case 143500:
    {
        returnValue = F("Hildenfurtweg");
        break;
    }
    case 143501:
    {
        returnValue = F("Hildenseestr.");
        break;
    }
    case 143502:
    {
        returnValue = F("Hildenstr.");
        break;
    }
    case 143503:
    {
        returnValue = F("Hildenweg");
        break;
    }
    case 143504:
    {
        returnValue = F("Hildernweg");
        break;
    }
    case 143505:
    {
        returnValue = F("Hilderser Str.");
        break;
    }
    case 143506:
    {
        returnValue = F("Hilderser Weg");
        break;
    }
    case 143507:
    {
        returnValue = F("Hildesheimer Ring");
        break;
    }
    case 143508:
    {
        returnValue = F("Hildesheimer Str.");
        break;
    }
    case 143509:
    {
        returnValue = F("Hildesheimer Weg");
        break;
    }
    case 143510:
    {
        returnValue = F("Hildesiaweg");
        break;
    }
    case 143511:
    {
        returnValue = F("Hildestr.");
        break;
    }
    case 143512:
    {
        returnValue = F("Hildewardtstr.");
        break;
    }
    case 143513:
    {
        returnValue = F("Hildfelder Str.");
        break;
    }
    case 143514:
    {
        returnValue = F("Hildgrundweg");
        break;
    }
    case 143515:
    {
        returnValue = F("Hildmannsfelder Str.");
        break;
    }
    case 143516:
    {
        returnValue = F("Hildrizhauser Str.");
        break;
    }
    case 143517:
    {
        returnValue = F("Hildstr.");
        break;
    }
    case 143518:
    {
        returnValue = F("Hildtstr.");
        break;
    }
    case 143519:
    {
        returnValue = F("Hilerberg");
        break;
    }
    case 143520:
    {
        returnValue = F("Hilfarther Str.");
        break;
    }
    case 143521:
    {
        returnValue = F("Hilfarther Weg");
        break;
    }
    case 143522:
    {
        returnValue = F("Hilfe-Gottes-Teich-Weg");
        break;
    }
    case 143523:
    {
        returnValue = F("Hilfegottesschachtstr.");
        break;
    }
    case 143524:
    {
        returnValue = F("Hilferdingsen");
        break;
    }
    case 143525:
    {
        returnValue = F("Hilferter Höfe");
        break;
    }
    case 143526:
    {
        returnValue = F("Hilfringhausen");
        break;
    }
    case 143527:
    {
        returnValue = F("Hilfringhauser Str.");
        break;
    }
    case 143528:
    {
        returnValue = F("Hilfs Schneise");
        break;
    }
    case 143529:
    {
        returnValue = F("Hilgardplatz");
        break;
    }
    case 143530:
    {
        returnValue = F("Hilgardring");
        break;
    }
    case 143531:
    {
        returnValue = F("Hilgardstr.");
        break;
    }
    case 143532:
    {
        returnValue = F("Hilgartsbergweg");
        break;
    }
    case 143533:
    {
        returnValue = F("Hilgartshausener Hauptstr.");
        break;
    }
    case 143534:
    {
        returnValue = F("Hilgartshauser Str.");
        break;
    }
    case 143535:
    {
        returnValue = F("Hilge Beuken");
        break;
    }
    case 143536:
    {
        returnValue = F("Hilgen Holt");
        break;
    }
    case 143537:
    {
        returnValue = F("Hilgenacker");
        break;
    }
    case 143538:
    {
        returnValue = F("Hilgenbach");
        break;
    }
    case 143539:
    {
        returnValue = F("Hilgenbacher Höhe");
        break;
    }
    case 143540:
    {
        returnValue = F("Hilgenbaumweg");
        break;
    }
    case 143541:
    {
        returnValue = F("Hilgenbergstr.");
        break;
    }
    case 143542:
    {
        returnValue = F("Hilgenbergweg");
        break;
    }
    case 143543:
    {
        returnValue = F("Hilgenboom");
        break;
    }
    case 143544:
    {
        returnValue = F("Hilgenborn");
        break;
    }
    case 143545:
    {
        returnValue = F("Hilgenbrink");
        break;
    }
    case 143546:
    {
        returnValue = F("Hilgenbrinker Str.");
        break;
    }
    case 143547:
    {
        returnValue = F("Hilgenbusch");
        break;
    }
    case 143548:
    {
        returnValue = F("Hilgendorfer Dorfstr.");
        break;
    }
    case 143549:
    {
        returnValue = F("Hilgener Str.");
        break;
    }
    case 143550:
    {
        returnValue = F("Hilgenesch");
        break;
    }
    case 143551:
    {
        returnValue = F("Hilgenfeld");
        break;
    }
    case 143552:
    {
        returnValue = F("Hilgenfeldweg");
        break;
    }
    case 143553:
    {
        returnValue = F("Hilgengarten");
        break;
    }
    case 143554:
    {
        returnValue = F("Hilgenhain");
        break;
    }
    case 143555:
    {
        returnValue = F("Hilgenhofstr.");
        break;
    }
    case 143556:
    {
        returnValue = F("Hilgenholt");
        break;
    }
    case 143557:
    {
        returnValue = F("Hilgenholter Str.");
        break;
    }
    case 143558:
    {
        returnValue = F("Hilgenholtstr.");
        break;
    }
    case 143559:
    {
        returnValue = F("Hilgenkamp");
        break;
    }
    case 143560:
    {
        returnValue = F("Hilgenkämpe");
        break;
    }
    case 143561:
    {
        returnValue = F("Hilgenmoor");
        break;
    }
    case 143562:
    {
        returnValue = F("Hilgenpfad");
        break;
    }
    case 143563:
    {
        returnValue = F("Hilgenplatz");
        break;
    }
    case 143564:
    {
        returnValue = F("Hilgenrekte");
        break;
    }
    case 143565:
    {
        returnValue = F("Hilgenriedersiel");
        break;
    }
    case 143566:
    {
        returnValue = F("Hilgenrother Str.");
        break;
    }
    case 143567:
    {
        returnValue = F("Hilgenschläde");
        break;
    }
    case 143568:
    {
        returnValue = F("Hilgensele");
        break;
    }
    case 143569:
    {
        returnValue = F("Hilgensteener Weg");
        break;
    }
    case 143570:
    {
        returnValue = F("Hilgenstiege");
        break;
    }
    case 143571:
    {
        returnValue = F("Hilgenstock");
        break;
    }
    case 143572:
    {
        returnValue = F("Hilgenstockstr.");
        break;
    }
    case 143573:
    {
        returnValue = F("Hilgenstr.");
        break;
    }
    case 143574:
    {
        returnValue = F("Hilgenstuhl");
        break;
    }
    case 143575:
    {
        returnValue = F("Hilgenweg");
        break;
    }
    case 143576:
    {
        returnValue = F("Hilgenäcker");
        break;
    }
    case 143577:
    {
        returnValue = F("Hilger-Thiesen-Str.");
        break;
    }
    case 143578:
    {
        returnValue = F("Hilgerather Str.");
        break;
    }
    case 143579:
    {
        returnValue = F("Hilgergasse");
        break;
    }
    case 143580:
    {
        returnValue = F("Hilgermannstr.");
        break;
    }
    case 143581:
    {
        returnValue = F("Hilgersbrücke");
        break;
    }
    case 143582:
    {
        returnValue = F("Hilgersdorfer Fus Steig");
        break;
    }
    case 143583:
    {
        returnValue = F("Hilgersdorfer Str.");
        break;
    }
    case 143584:
    {
        returnValue = F("Hilgersgäßchen");
        break;
    }
    case 143585:
    {
        returnValue = F("Hilgersheck");
        break;
    }
    case 143586:
    {
        returnValue = F("Hilgershäuser Str.");
        break;
    }
    case 143587:
    {
        returnValue = F("Hilgershäuser Weg");
        break;
    }
    case 143588:
    {
        returnValue = F("Hilgerskamp");
        break;
    }
    case 143589:
    {
        returnValue = F("Hilgersstr.");
        break;
    }
    case 143590:
    {
        returnValue = F("Hilgerstr.");
        break;
    }
    case 143591:
    {
        returnValue = F("Hilgerweg");
        break;
    }
    case 143592:
    {
        returnValue = F("Hilgesbicke");
        break;
    }
    case 143593:
    {
        returnValue = F("Hilgesdorfer Str.");
        break;
    }
    case 143594:
    {
        returnValue = F("Hilgesdorfer Weg");
        break;
    }
    case 143595:
    {
        returnValue = F("Hilgeseichweg");
        break;
    }
    case 143596:
    {
        returnValue = F("Hilgestr.");
        break;
    }
    case 143597:
    {
        returnValue = F("Hilgundstr.");
        break;
    }
    case 143598:
    {
        returnValue = F("Hilken");
        break;
    }
    case 143599:
    {
        returnValue = F("Hilkenborger Str.");
        break;
    }
    case 143600:
    {
        returnValue = F("Hilkenbreden");
        break;
    }
    case 143601:
    {
        returnValue = F("Hilkersdorf");
        break;
    }
    case 143602:
    {
        returnValue = F("Hilkersdorfer Str.");
        break;
    }
    case 143603:
    {
        returnValue = F("Hilkeröder Str.");
        break;
    }
    case 143604:
    {
        returnValue = F("Hill Road");
        break;
    }
    case 143605:
    {
        returnValue = F("Hill Side Avenue");
        break;
    }
    case 143606:
    {
        returnValue = F("Hilla-von-Rebay-Weg");
        break;
    }
    case 143607:
    {
        returnValue = F("Hillandstr.");
        break;
    }
    case 143608:
    {
        returnValue = F("Hillaustr.");
        break;
    }
    case 143609:
    {
        returnValue = F("Hillbachstr.");
        break;
    }
    case 143610:
    {
        returnValue = F("Hillbolzer Weg");
        break;
    }
    case 143611:
    {
        returnValue = F("Hille-Mertens-Str.");
        break;
    }
    case 143612:
    {
        returnValue = F("Hilleanger");
        break;
    }
    case 143613:
    {
        returnValue = F("Hillebachstr.");
        break;
    }
    case 143614:
    {
        returnValue = F("Hillebaumsfeld");
        break;
    }
    case 143615:
    {
        returnValue = F("Hillebergstr.");
        break;
    }
    case 143616:
    {
        returnValue = F("Hilleborchstr.");
        break;
    }
    case 143617:
    {
        returnValue = F("Hilleborn");
        break;
    }
    case 143618:
    {
        returnValue = F("Hillebrandstr.");
        break;
    }
    case 143619:
    {
        returnValue = F("Hillebrandtstr.");
        break;
    }
    case 143620:
    {
        returnValue = F("Hillebrandweg");
        break;
    }
    case 143621:
    {
        returnValue = F("Hilleck");
        break;
    }
    case 143622:
    {
        returnValue = F("Hillecker Str.");
        break;
    }
    case 143623:
    {
        returnValue = F("Hillenbach");
        break;
    }
    case 143624:
    {
        returnValue = F("Hillenbachsgarten");
        break;
    }
    case 143625:
    {
        returnValue = F("Hillenbeek");
        break;
    }
    case 143626:
    {
        returnValue = F("Hillenberg");
        break;
    }
    case 143627:
    {
        returnValue = F("Hillenberger Str.");
        break;
    }
    case 143628:
    {
        returnValue = F("Hillenbrandstr.");
        break;
    }
    case 143629:
    {
        returnValue = F("Hillenbrandweg");
        break;
    }
    case 143630:
    {
        returnValue = F("Hillendorf");
        break;
    }
    case 143631:
    {
        returnValue = F("Hillenfeld");
        break;
    }
    case 143632:
    {
        returnValue = F("Hillenfeldweg");
        break;
    }
    case 143633:
    {
        returnValue = F("Hillenhardt");
        break;
    }
    case 143634:
    {
        returnValue = F("Hillenhofstr.");
        break;
    }
    case 143635:
    {
        returnValue = F("Hillenkamp");
        break;
    }
    case 143636:
    {
        returnValue = F("Hillenkamper Buschweg");
        break;
    }
    case 143637:
    {
        returnValue = F("Hillenklint");
        break;
    }
    case 143638:
    {
        returnValue = F("Hillenkrog");
        break;
    }
    case 143639:
    {
        returnValue = F("Hillenland");
        break;
    }
    case 143640:
    {
        returnValue = F("Hillenloh");
        break;
    }
    case 143641:
    {
        returnValue = F("Hillenloher Str.");
        break;
    }
    case 143642:
    {
        returnValue = F("Hillenrieth");
        break;
    }
    case 143643:
    {
        returnValue = F("Hillenring");
        break;
    }
    case 143644:
    {
        returnValue = F("Hillensberger Weg");
        break;
    }
    case 143645:
    {
        returnValue = F("Hillenseifen");
        break;
    }
    case 143646:
    {
        returnValue = F("Hillensheimer Str.");
        break;
    }
    case 143647:
    {
        returnValue = F("Hillenstr.");
        break;
    }
    case 143648:
    {
        returnValue = F("Hillentruper Str.");
        break;
    }
    case 143649:
    {
        returnValue = F("Hillenwangweg");
        break;
    }
    case 143650:
    {
        returnValue = F("Hillenweg");
        break;
    }
    case 143651:
    {
        returnValue = F("Hillenwiese");
        break;
    }
    case 143652:
    {
        returnValue = F("Hillenwiesenweg");
        break;
    }
    case 143653:
    {
        returnValue = F("Hiller Str.");
        break;
    }
    case 143654:
    {
        returnValue = F("Hiller-von-Gaertringen-Str.");
        break;
    }
    case 143655:
    {
        returnValue = F("Hillerbachweg");
        break;
    }
    case 143656:
    {
        returnValue = F("Hillergraben");
        break;
    }
    case 143657:
    {
        returnValue = F("Hillering");
        break;
    }
    case 143658:
    {
        returnValue = F("Hillerkenburg");
        break;
    }
    case 143659:
    {
        returnValue = F("Hillerkstr.");
        break;
    }
    case 143660:
    {
        returnValue = F("Hillern");
        break;
    }
    case 143661:
    {
        returnValue = F("Hillernstr.");
        break;
    }
    case 143662:
    {
        returnValue = F("Hillers Weg");
        break;
    }
    case 143663:
    {
        returnValue = F("Hillersbachstr.");
        break;
    }
    case 143664:
    {
        returnValue = F("Hillersberg");
        break;
    }
    case 143665:
    {
        returnValue = F("Hillersbruch");
        break;
    }
    case 143666:
    {
        returnValue = F("Hillerscheider Str.");
        break;
    }
    case 143667:
    {
        returnValue = F("Hillerser Str.");
        break;
    }
    case 143668:
    {
        returnValue = F("Hillerser Weg");
        break;
    }
    case 143669:
    {
        returnValue = F("Hillershäuser Str.");
        break;
    }
    case 143670:
    {
        returnValue = F("Hillershörn");
        break;
    }
    case 143671:
    {
        returnValue = F("Hillerslebener Str.");
        break;
    }
    case 143672:
    {
        returnValue = F("Hillersleber Str.");
        break;
    }
    case 143673:
    {
        returnValue = F("Hillerstr.");
        break;
    }
    case 143674:
    {
        returnValue = F("Hillerswies");
        break;
    }
    case 143675:
    {
        returnValue = F("Hillerweg");
        break;
    }
    case 143676:
    {
        returnValue = F("Hillesberg");
        break;
    }
    case 143677:
    {
        returnValue = F("Hillesheim");
        break;
    }
    case 143678:
    {
        returnValue = F("Hillesheimer Str.");
        break;
    }
    case 143679:
    {
        returnValue = F("Hillesheimer Weg");
        break;
    }
    case 143680:
    {
        returnValue = F("Hillesheimstr.");
        break;
    }
    case 143681:
    {
        returnValue = F("Hillestr.");
        break;
    }
    case 143682:
    {
        returnValue = F("Hilleweg");
        break;
    }
    case 143683:
    {
        returnValue = F("Hillgasse");
        break;
    }
    case 143684:
    {
        returnValue = F("Hillgenstohl");
        break;
    }
    case 143685:
    {
        returnValue = F("Hillger Hoff");
        break;
    }
    case 143686:
    {
        returnValue = F("Hilligenberg");
        break;
    }
    case 143687:
    {
        returnValue = F("Hilligenknapp");
        break;
    }
    case 143688:
    {
        returnValue = F("Hilligenland");
        break;
    }
    case 143689:
    {
        returnValue = F("Hilligenley");
        break;
    }
    case 143690:
    {
        returnValue = F("Hilligensehl");
        break;
    }
    case 143691:
    {
        returnValue = F("Hilligenstock");
        break;
    }
    case 143692:
    {
        returnValue = F("Hilligenwarf");
        break;
    }
    case 143693:
    {
        returnValue = F("Hilligenweg");
        break;
    }
    case 143694:
    {
        returnValue = F("Hilliggasse");
        break;
    }
    case 143695:
    {
        returnValue = F("Hillinger Str.");
        break;
    }
    case 143696:
    {
        returnValue = F("Hillingsweg");
        break;
    }
    case 143697:
    {
        returnValue = F("Hillinstr.");
        break;
    }
    case 143698:
    {
        returnValue = F("Hillkampsweg");
        break;
    }
    case 143699:
    {
        returnValue = F("Hillmannring");
        break;
    }
    case 143700:
    {
        returnValue = F("Hillmannstr.");
        break;
    }
    case 143701:
    {
        returnValue = F("Hillmannsweg");
        break;
    }
    case 143702:
    {
        returnValue = F("Hillmers Sand");
        break;
    }
    case 143703:
    {
        returnValue = F("Hillmersdorfer Str.");
        break;
    }
    case 143704:
    {
        returnValue = F("Hillmicker Str.");
        break;
    }
    case 143705:
    {
        returnValue = F("Hillnhütter Str.");
        break;
    }
    case 143706:
    {
        returnValue = F("Hillohe");
        break;
    }
    case 143707:
    {
        returnValue = F("Hilloher Weg");
        break;
    }
    case 143708:
    {
        returnValue = F("Hillringhausen");
        break;
    }
    case 143709:
    {
        returnValue = F("Hillscheider Str.");
        break;
    }
    case 143710:
    {
        returnValue = F("Hillscher Garten");
        break;
    }
    case 143711:
    {
        returnValue = F("Hillstett");
        break;
    }
    case 143712:
    {
        returnValue = F("Hillstetter Str.");
        break;
    }
    case 143713:
    {
        returnValue = F("Hillstieg");
        break;
    }
    case 143714:
    {
        returnValue = F("Hillstr.");
        break;
    }
    case 143715:
    {
        returnValue = F("Hillweg");
        break;
    }
    case 143716:
    {
        returnValue = F("Hilmar-Franz-Str.");
        break;
    }
    case 143717:
    {
        returnValue = F("Hilmar-Knauer-Str.");
        break;
    }
    case 143718:
    {
        returnValue = F("Hilmarstr.");
        break;
    }
    case 143719:
    {
        returnValue = F("Hilmensiek");
        break;
    }
    case 143720:
    {
        returnValue = F("Hilmeringhäuser Weg");
        break;
    }
    case 143721:
    {
        returnValue = F("Hilmers Feld");
        break;
    }
    case 143722:
    {
        returnValue = F("Hilmersburg");
        break;
    }
    case 143723:
    {
        returnValue = F("Hilmersburger Weg");
        break;
    }
    case 143724:
    {
        returnValue = F("Hilmersdorfer Hauptstr.");
        break;
    }
    case 143725:
    {
        returnValue = F("Hilmerstr.");
        break;
    }
    case 143726:
    {
        returnValue = F("Hilmerweg");
        break;
    }
    case 143727:
    {
        returnValue = F("Hilmsener Weg");
        break;
    }
    case 143728:
    {
        returnValue = F("Hilmsweg");
        break;
    }
    case 143729:
    {
        returnValue = F("Hilperdinger Weg");
        break;
    }
    case 143730:
    {
        returnValue = F("Hilperhäuser Weg");
        break;
    }
    case 143731:
    {
        returnValue = F("Hilpertinger Str.");
        break;
    }
    case 143732:
    {
        returnValue = F("Hilpertsweiler");
        break;
    }
    case 143733:
    {
        returnValue = F("Hilpertswiese");
        break;
    }
    case 143734:
    {
        returnValue = F("Hilpertweg");
        break;
    }
    case 143735:
    {
        returnValue = F("Hilpolding");
        break;
    }
    case 143736:
    {
        returnValue = F("Hilpoltsteiner Str.");
        break;
    }
    case 143737:
    {
        returnValue = F("Hilpoltsteinerstr.");
        break;
    }
    case 143738:
    {
        returnValue = F("Hilpoltsteinstr.");
        break;
    }
    case 143739:
    {
        returnValue = F("Hilprechtshausen");
        break;
    }
    case 143740:
    {
        returnValue = F("Hils-Kammweg");
        break;
    }
    case 143741:
    {
        returnValue = F("Hilsbach");
        break;
    }
    case 143742:
    {
        returnValue = F("Hilsbach Brücke");
        break;
    }
    case 143743:
    {
        returnValue = F("Hilsbacher Str.");
        break;
    }
    case 143744:
    {
        returnValue = F("Hilsbachweg");
        break;
    }
    case 143745:
    {
        returnValue = F("Hilsberg");
        break;
    }
    case 143746:
    {
        returnValue = F("Hilsblick");
        break;
    }
    case 143747:
    {
        returnValue = F("Hilschbacher Str.");
        break;
    }
    case 143748:
    {
        returnValue = F("Hilscheider Str.");
        break;
    }
    case 143749:
    {
        returnValue = F("Hilschen");
        break;
    }
    case 143750:
    {
        returnValue = F("Hilscherstr.");
        break;
    }
    case 143751:
    {
        returnValue = F("Hilseckweg");
        break;
    }
    case 143752:
    {
        returnValue = F("Hilsenbeuerstr.");
        break;
    }
    case 143753:
    {
        returnValue = F("Hilseneckweg");
        break;
    }
    case 143754:
    {
        returnValue = F("Hilsengasse");
        break;
    }
    case 143755:
    {
        returnValue = F("Hilsenhainer Str.");
        break;
    }
    case 143756:
    {
        returnValue = F("Hilsenkopfweg");
        break;
    }
    case 143757:
    {
        returnValue = F("Hilsensteige");
        break;
    }
    case 143758:
    {
        returnValue = F("Hilsenstr.");
        break;
    }
    case 143759:
    {
        returnValue = F("Hilserberg");
        break;
    }
    case 143760:
    {
        returnValue = F("Hilsingstr.");
        break;
    }
    case 143761:
    {
        returnValue = F("Hilsmannring");
        break;
    }
    case 143762:
    {
        returnValue = F("Hilsmannsweg");
        break;
    }
    case 143763:
    {
        returnValue = F("Hilsmannweg");
        break;
    }
    case 143764:
    {
        returnValue = F("Hilsstr.");
        break;
    }
    case 143765:
    {
        returnValue = F("Hilster Mühle");
        break;
    }
    case 143766:
    {
        returnValue = F("Hilsweg");
        break;
    }
    case 143767:
    {
        returnValue = F("Hilteboldstr.");
        break;
    }
    case 143768:
    {
        returnValue = F("Hiltebrandtstr.");
        break;
    }
    case 143769:
    {
        returnValue = F("Hiltegundaweg");
        break;
    }
    case 143770:
    {
        returnValue = F("Hiltegundenweg");
        break;
    }
    case 143771:
    {
        returnValue = F("Hiltelinger Str.");
        break;
    }
    case 143772:
    {
        returnValue = F("Hiltenbach");
        break;
    }
    case 143773:
    {
        returnValue = F("Hiltenburgstr.");
        break;
    }
    case 143774:
    {
        returnValue = F("Hiltenburgweg");
        break;
    }
    case 143775:
    {
        returnValue = F("Hiltener Weg");
        break;
    }
    case 143776:
    {
        returnValue = F("Hiltenfinger Str.");
        break;
    }
    case 143777:
    {
        returnValue = F("Hiltenfurtstr.");
        break;
    }
    case 143778:
    {
        returnValue = F("Hiltenstr.");
        break;
    }
    case 143779:
    {
        returnValue = F("Hiltensweilerweg");
        break;
    }
    case 143780:
    {
        returnValue = F("Hiltentalstr.");
        break;
    }
    case 143781:
    {
        returnValue = F("Hiltepoltweg");
        break;
    }
    case 143782:
    {
        returnValue = F("Hilter Berg");
        break;
    }
    case 143783:
    {
        returnValue = F("Hilter Str.");
        break;
    }
    case 143784:
    {
        returnValue = F("Hilterscheider Str.");
        break;
    }
    case 143785:
    {
        returnValue = F("Hiltersdorfer Str.");
        break;
    }
    case 143786:
    {
        returnValue = F("Hiltersklinger Weg");
        break;
    }
    case 143787:
    {
        returnValue = F("Hiltersrieder Str.");
        break;
    }
    case 143788:
    {
        returnValue = F("Hilterstr.");
        break;
    }
    case 143789:
    {
        returnValue = F("Hilterweg");
        break;
    }
    case 143790:
    {
        returnValue = F("Hiltlstr.");
        break;
    }
    case 143791:
    {
        returnValue = F("Hiltnerstr.");
        break;
    }
    case 143792:
    {
        returnValue = F("Hiltrudistr.");
        break;
    }
    case 143793:
    {
        returnValue = F("Hiltrudstr.");
        break;
    }
    case 143794:
    {
        returnValue = F("Hiltzhofener Steig");
        break;
    }
    case 143795:
    {
        returnValue = F("Hilversumer Str.");
        break;
    }
    case 143796:
    {
        returnValue = F("Hilwartshausen");
        break;
    }
    case 143797:
    {
        returnValue = F("Hilwartshäuser Str.");
        break;
    }
    case 143798:
    {
        returnValue = F("Hilzbergweg");
        break;
    }
    case 143799:
    {
        returnValue = F("Hilzhofen");
        break;
    }
    case 143800:
    {
        returnValue = F("Hilzhofener Steig");
        break;
    }
    case 143801:
    {
        returnValue = F("Hilzhofener Str.");
        break;
    }
    case 143802:
    {
        returnValue = F("Hilzinger Str.");
        break;
    }
    case 143803:
    {
        returnValue = F("Hilzingerstr.");
        break;
    }
    case 143804:
    {
        returnValue = F("Hilzstr.");
        break;
    }
    case 143805:
    {
        returnValue = F("Himbacher Str.");
        break;
    }
    case 143806:
    {
        returnValue = F("Himbacher Weg");
        break;
    }
    case 143807:
    {
        returnValue = F("Himbaumstr.");
        break;
    }
    case 143808:
    {
        returnValue = F("Himbeerbogen");
        break;
    }
    case 143809:
    {
        returnValue = F("Himbeerbusch");
        break;
    }
    case 143810:
    {
        returnValue = F("Himbeerenweg");
        break;
    }
    case 143811:
    {
        returnValue = F("Himbeergarten");
        break;
    }
    case 143812:
    {
        returnValue = F("Himbeergasse");
        break;
    }
    case 143813:
    {
        returnValue = F("Himbeerweg");
        break;
    }
    case 143814:
    {
        returnValue = F("Himberg");
        break;
    }
    case 143815:
    {
        returnValue = F("Himberger Route");
        break;
    }
    case 143816:
    {
        returnValue = F("Himberger Str.");
        break;
    }
    case 143817:
    {
        returnValue = F("Himberger Weg");
        break;
    }
    case 143818:
    {
        returnValue = F("Himbergstr.");
        break;
    }
    case 143819:
    {
        returnValue = F("Himbergweg");
        break;
    }
    case 143820:
    {
        returnValue = F("Himbornstr.");
        break;
    }
    case 143821:
    {
        returnValue = F("Himbrichweg");
        break;
    }
    case 143822:
    {
        returnValue = F("Himbselstr.");
        break;
    }
    case 143823:
    {
        returnValue = F("Himbselweg");
        break;
    }
    case 143824:
    {
        returnValue = F("Himburg");
        break;
    }
    case 143825:
    {
        returnValue = F("Himecker Weg");
        break;
    }
    case 143826:
    {
        returnValue = F("Himerichsweg");
        break;
    }
    case 143827:
    {
        returnValue = F("Himkesberg");
        break;
    }
    case 143828:
    {
        returnValue = F("Himlyweg");
        break;
    }
    case 143829:
    {
        returnValue = F("Himmel");
        break;
    }
    case 143830:
    {
        returnValue = F("Himmel Schneise");
        break;
    }
    case 143831:
    {
        returnValue = F("Himmelacker");
        break;
    }
    case 143832:
    {
        returnValue = F("Himmelauer Mühle");
        break;
    }
    case 143833:
    {
        returnValue = F("Himmelauer Str.");
        break;
    }
    case 143834:
    {
        returnValue = F("Himmelbach");
        break;
    }
    case 143835:
    {
        returnValue = F("Himmelberg");
        break;
    }
    case 143836:
    {
        returnValue = F("Himmelbergstr.");
        break;
    }
    case 143837:
    {
        returnValue = F("Himmelbergweg");
        break;
    }
    case 143838:
    {
        returnValue = F("Himmelbett");
        break;
    }
    case 143839:
    {
        returnValue = F("Himmelbleek");
        break;
    }
    case 143840:
    {
        returnValue = F("Himmelburgstr.");
        break;
    }
    case 143841:
    {
        returnValue = F("Himmelfahrt");
        break;
    }
    case 143842:
    {
        returnValue = F("Himmelfahrtsgasse");
        break;
    }
    case 143843:
    {
        returnValue = F("Himmelfahrtsschacht");
        break;
    }
    case 143844:
    {
        returnValue = F("Himmelfahrtsstr.");
        break;
    }
    case 143845:
    {
        returnValue = F("Himmelfahrtsweg");
        break;
    }
    case 143846:
    {
        returnValue = F("Himmelfürststr.");
        break;
    }
    case 143847:
    {
        returnValue = F("Himmelgarten");
        break;
    }
    case 143848:
    {
        returnValue = F("Himmelgartenstr.");
        break;
    }
    case 143849:
    {
        returnValue = F("Himmelgartenweg");
        break;
    }
    case 143850:
    {
        returnValue = F("Himmelgeister Str.");
        break;
    }
    case 143851:
    {
        returnValue = F("Himmelhalde");
        break;
    }
    case 143852:
    {
        returnValue = F("Himmelkroner Weg");
        break;
    }
    case 143853:
    {
        returnValue = F("Himmelkronstr.");
        break;
    }
    case 143854:
    {
        returnValue = F("Himmelleite");
        break;
    }
    case 143855:
    {
        returnValue = F("Himmelmannpark");
        break;
    }
    case 143856:
    {
        returnValue = F("Himmelmannring");
        break;
    }
    case 143857:
    {
        returnValue = F("Himmelmoorchaussee");
        break;
    }
    case 143858:
    {
        returnValue = F("Himmelmoorstr.");
        break;
    }
    case 143859:
    {
        returnValue = F("Himmelmoorweg");
        break;
    }
    case 143860:
    {
        returnValue = F("Himmelmühlstr.");
        break;
    }
    case 143861:
    {
        returnValue = F("Himmelpforte");
        break;
    }
    case 143862:
    {
        returnValue = F("Himmelpfortener Str.");
        break;
    }
    case 143863:
    {
        returnValue = F("Himmelpfortener Weg");
        break;
    }
    case 143864:
    {
        returnValue = F("Himmelpforter Landstr.");
        break;
    }
    case 143865:
    {
        returnValue = F("Himmelreich");
        break;
    }
    case 143866:
    {
        returnValue = F("Himmelreichallee");
        break;
    }
    case 143867:
    {
        returnValue = F("Himmelreichgasse");
        break;
    }
    case 143868:
    {
        returnValue = F("Himmelreichsberg");
        break;
    }
    case 143869:
    {
        returnValue = F("Himmelreichsgraben");
        break;
    }
    case 143870:
    {
        returnValue = F("Himmelreichstr.");
        break;
    }
    case 143871:
    {
        returnValue = F("Himmelreichsweg");
        break;
    }
    case 143872:
    {
        returnValue = F("Himmelreichtunnel");
        break;
    }
    case 143873:
    {
        returnValue = F("Himmelreichweg");
        break;
    }
    case 143874:
    {
        returnValue = F("Himmelrick");
        break;
    }
    case 143875:
    {
        returnValue = F("Himmelriek");
        break;
    }
    case 143876:
    {
        returnValue = F("Himmelriekspad");
        break;
    }
    case 143877:
    {
        returnValue = F("Himmelsacker");
        break;
    }
    case 143878:
    {
        returnValue = F("Himmelsau");
        break;
    }
    case 143879:
    {
        returnValue = F("Himmelsbach");
        break;
    }
    case 143880:
    {
        returnValue = F("Himmelsbachweg");
        break;
    }
    case 143881:
    {
        returnValue = F("Himmelsberg");
        break;
    }
    case 143882:
    {
        returnValue = F("Himmelsberger Str.");
        break;
    }
    case 143883:
    {
        returnValue = F("Himmelsberger Tor");
        break;
    }
    case 143884:
    {
        returnValue = F("Himmelsbergstr.");
        break;
    }
    case 143885:
    {
        returnValue = F("Himmelsbergweg");
        break;
    }
    case 143886:
    {
        returnValue = F("Himmelsborn");
        break;
    }
    case 143887:
    {
        returnValue = F("Himmelsbornweg");
        break;
    }
    case 143888:
    {
        returnValue = F("Himmelsbruch");
        break;
    }
    case 143889:
    {
        returnValue = F("Himmelsbrücke");
        break;
    }
    case 143890:
    {
        returnValue = F("Himmelsbrückenweg");
        break;
    }
    case 143891:
    {
        returnValue = F("Himmelsburger Str.");
        break;
    }
    case 143892:
    {
        returnValue = F("Himmelsbörnchen");
        break;
    }
    case 143893:
    {
        returnValue = F("Himmelschlüsselweg");
        break;
    }
    case 143894:
    {
        returnValue = F("Himmelsflut");
        break;
    }
    case 143895:
    {
        returnValue = F("Himmelsfürster Str.");
        break;
    }
    case 143896:
    {
        returnValue = F("Himmelsfürster Weg");
        break;
    }
    case 143897:
    {
        returnValue = F("Himmelsfürstweg");
        break;
    }
    case 143898:
    {
        returnValue = F("Himmelsgarten");
        break;
    }
    case 143899:
    {
        returnValue = F("Himmelsgasse");
        break;
    }
    case 143900:
    {
        returnValue = F("Himmelsgrund");
        break;
    }
    case 143901:
    {
        returnValue = F("Himmelsgässle");
        break;
    }
    case 143902:
    {
        returnValue = F("Himmelsgäßchen");
        break;
    }
    case 143903:
    {
        returnValue = F("Himmelshorst");
        break;
    }
    case 143904:
    {
        returnValue = F("Himmelshöhe");
        break;
    }
    case 143905:
    {
        returnValue = F("Himmelskamp");
        break;
    }
    case 143906:
    {
        returnValue = F("Himmelskronstr.");
        break;
    }
    case 143907:
    {
        returnValue = F("Himmelsleiter");
        break;
    }
    case 143908:
    {
        returnValue = F("Himmelspann");
        break;
    }
    case 143909:
    {
        returnValue = F("Himmelspfad");
        break;
    }
    case 143910:
    {
        returnValue = F("Himmelspforte");
        break;
    }
    case 143911:
    {
        returnValue = F("Himmelspädche");
        break;
    }
    case 143912:
    {
        returnValue = F("Himmelssteige");
        break;
    }
    case 143913:
    {
        returnValue = F("Himmelsstieg");
        break;
    }
    case 143914:
    {
        returnValue = F("Himmelsstiege");
        break;
    }
    case 143915:
    {
        returnValue = F("Himmelstadter Str.");
        break;
    }
    case 143916:
    {
        returnValue = F("Himmelsthürer Str.");
        break;
    }
    case 143917:
    {
        returnValue = F("Himmelstieg");
        break;
    }
    case 143918:
    {
        returnValue = F("Himmelstiege");
        break;
    }
    case 143919:
    {
        returnValue = F("Himmelstr.");
        break;
    }
    case 143920:
    {
        returnValue = F("Himmelstreppe");
        break;
    }
    case 143921:
    {
        returnValue = F("Himmelsweg");
        break;
    }
    case 143922:
    {
        returnValue = F("Himmelswiese");
        break;
    }
    case 143923:
    {
        returnValue = F("Himmelszeltarena");
        break;
    }
    case 143924:
    {
        returnValue = F("Himmeltal");
        break;
    }
    case 143925:
    {
        returnValue = F("Himmeltaler Str.");
        break;
    }
    case 143926:
    {
        returnValue = F("Himmeltalstr.");
        break;
    }
    case 143927:
    {
        returnValue = F("Himmelthaler Weg");
        break;
    }
    case 143928:
    {
        returnValue = F("Himmelweg");
        break;
    }
    case 143929:
    {
        returnValue = F("Himmelweiler");
        break;
    }
    case 143930:
    {
        returnValue = F("Himmelweilerweg");
        break;
    }
    case 143931:
    {
        returnValue = F("Himmeläckerring");
        break;
    }
    case 143932:
    {
        returnValue = F("Himmerich");
        break;
    }
    case 143933:
    {
        returnValue = F("Himmericher Str.");
        break;
    }
    case 143934:
    {
        returnValue = F("Himmericher Weg");
        break;
    }
    case 143935:
    {
        returnValue = F("Himmerichspfad");
        break;
    }
    case 143936:
    {
        returnValue = F("Himmern");
        break;
    }
    case 143937:
    {
        returnValue = F("Himmernbogen");
        break;
    }
    case 143938:
    {
        returnValue = F("Himmernlyk");
        break;
    }
    case 143939:
    {
        returnValue = F("Himmernmoos");
        break;
    }
    case 143940:
    {
        returnValue = F("Himmernsand");
        break;
    }
    case 143941:
    {
        returnValue = F("Himmernstr.");
        break;
    }
    case 143942:
    {
        returnValue = F("Himmeroder Platz");
        break;
    }
    case 143943:
    {
        returnValue = F("Himmeroder Str.");
        break;
    }
    case 143944:
    {
        returnValue = F("Himmeroder Weg");
        break;
    }
    case 143945:
    {
        returnValue = F("Himmeroderstr.");
        break;
    }
    case 143946:
    {
        returnValue = F("Himmerother Str.");
        break;
    }
    case 143947:
    {
        returnValue = F("Himmersbach");
        break;
    }
    case 143948:
    {
        returnValue = F("Himmershoi");
        break;
    }
    case 143949:
    {
        returnValue = F("Himmgasse");
        break;
    }
    case 143950:
    {
        returnValue = F("Himmigerode");
        break;
    }
    case 143951:
    {
        returnValue = F("Himmlerweg");
        break;
    }
    case 143952:
    {
        returnValue = F("Himmling");
        break;
    }
    case 143953:
    {
        returnValue = F("Himmlinger Steige");
        break;
    }
    case 143954:
    {
        returnValue = F("Himmlinger Weg");
        break;
    }
    case 143955:
    {
        returnValue = F("Himmlingstr.");
        break;
    }
    case 143956:
    {
        returnValue = F("Himmlisch-Heer-Str.");
        break;
    }
    case 143957:
    {
        returnValue = F("Himmrichsweg");
        break;
    }
    case 143958:
    {
        returnValue = F("Himpernweg");
        break;
    }
    case 143959:
    {
        returnValue = F("Himpfenstr.");
        break;
    }
    case 143960:
    {
        returnValue = F("Himphamp");
        break;
    }
    case 143961:
    {
        returnValue = F("Himpkampweg");
        break;
    }
    case 143962:
    {
        returnValue = F("Himrichweg");
        break;
    }
    case 143963:
    {
        returnValue = F("Himstedter Str.");
        break;
    }
    case 143964:
    {
        returnValue = F("Himstr.");
        break;
    }
    case 143965:
    {
        returnValue = F("Himten");
        break;
    }
    case 143966:
    {
        returnValue = F("Hin'nrut");
        break;
    }
    case 143967:
    {
        returnValue = F("Hinang");
        break;
    }
    case 143968:
    {
        returnValue = F("Hinanger Str.");
        break;
    }
    case 143969:
    {
        returnValue = F("Hincks Platz");
        break;
    }
    case 143970:
    {
        returnValue = F("Hindahl");
        break;
    }
    case 143971:
    {
        returnValue = F("Hindboll");
        break;
    }
    case 143972:
    {
        returnValue = F("Hindelanger Str.");
        break;
    }
    case 143973:
    {
        returnValue = F("Hindelangweg");
        break;
    }
    case 143974:
    {
        returnValue = F("Hindelmühle");
        break;
    }
    case 143975:
    {
        returnValue = F("Hindelwanger Str.");
        break;
    }
    case 143976:
    {
        returnValue = F("Hindemithstr.");
        break;
    }
    case 143977:
    {
        returnValue = F("Hindemithweg");
        break;
    }
    case 143978:
    {
        returnValue = F("Hindenbergstr.");
        break;
    }
    case 143979:
    {
        returnValue = F("Hindenburg-Allee");
        break;
    }
    case 143980:
    {
        returnValue = F("Hindenburgallee");
        break;
    }
    case 143981:
    {
        returnValue = F("Hindenburganlage");
        break;
    }
    case 143982:
    {
        returnValue = F("Hindenburgbrücke");
        break;
    }
    case 143983:
    {
        returnValue = F("Hindenburgdamm");
        break;
    }
    case 143984:
    {
        returnValue = F("Hindenburgdeich");
        break;
    }
    case 143985:
    {
        returnValue = F("Hindenburger Platz");
        break;
    }
    case 143986:
    {
        returnValue = F("Hindenburger Str.");
        break;
    }
    case 143987:
    {
        returnValue = F("Hindenburger Weg");
        break;
    }
    case 143988:
    {
        returnValue = F("Hindenburghain");
        break;
    }
    case 143989:
    {
        returnValue = F("Hindenburghöhe");
        break;
    }
    case 143990:
    {
        returnValue = F("Hindenburghügel");
        break;
    }
    case 143991:
    {
        returnValue = F("Hindenburgpark");
        break;
    }
    case 143992:
    {
        returnValue = F("Hindenburgplatz");
        break;
    }
    case 143993:
    {
        returnValue = F("Hindenburgring");
        break;
    }
    case 143994:
    {
        returnValue = F("Hindenburgring Nord");
        break;
    }
    case 143995:
    {
        returnValue = F("Hindenburgring Süd");
        break;
    }
    case 143996:
    {
        returnValue = F("Hindenburgring West");
        break;
    }
    case 143997:
    {
        returnValue = F("Hindenburgstr.");
        break;
    }
    case 143998:
    {
        returnValue = F("Hindenburgwall");
        break;
    }
    case 143999:
    {
        returnValue = F("Hindenburgweg");
        break;
    }
    case 144000:
    {
        returnValue = F("Hindenlangstr.");
        break;
    }
    case 144001:
    {
        returnValue = F("Hinderk-Pymann-Str.");
        break;
    }
    case 144002:
    {
        returnValue = F("Hinderkingsweg");
        break;
    }
    case 144003:
    {
        returnValue = F("Hinderofenweg");
        break;
    }
    case 144004:
    {
        returnValue = F("Hinderpad");
        break;
    }
    case 144005:
    {
        returnValue = F("Hindersinstr.");
        break;
    }
    case 144006:
    {
        returnValue = F("Hindertal");
        break;
    }
    case 144007:
    {
        returnValue = F("Hindfelder Dorfstr.");
        break;
    }
    case 144008:
    {
        returnValue = F("Hindlbachstr.");
        break;
    }
    case 144009:
    {
        returnValue = F("Hindlinger Str.");
        break;
    }
    case 144010:
    {
        returnValue = F("Hindorf");
        break;
    }
    case 144011:
    {
        returnValue = F("Hindorfer Str.");
        break;
    }
    case 144012:
    {
        returnValue = F("Hindringerstr.");
        break;
    }
    case 144013:
    {
        returnValue = F("Hinflucht");
        break;
    }
    case 144014:
    {
        returnValue = F("Hingen");
        break;
    }
    case 144015:
    {
        returnValue = F("Hingsmoor");
        break;
    }
    case 144016:
    {
        returnValue = F("Hingstbarg");
        break;
    }
    case 144017:
    {
        returnValue = F("Hingstberg");
        break;
    }
    case 144018:
    {
        returnValue = F("Hingstenweg");
        break;
    }
    case 144019:
    {
        returnValue = F("Hingster Weg");
        break;
    }
    case 144020:
    {
        returnValue = F("Hingstgars");
        break;
    }
    case 144021:
    {
        returnValue = F("Hingstkamp");
        break;
    }
    case 144022:
    {
        returnValue = F("Hingstlandsweg");
        break;
    }
    case 144023:
    {
        returnValue = F("Hingstmoorweg");
        break;
    }
    case 144024:
    {
        returnValue = F("Hingstwai");
        break;
    }
    case 144025:
    {
        returnValue = F("Hingstweg");
        break;
    }
    case 144026:
    {
        returnValue = F("Hinkeldei");
        break;
    }
    case 144027:
    {
        returnValue = F("Hinkelgasse");
        break;
    }
    case 144028:
    {
        returnValue = F("Hinkelhofer Str.");
        break;
    }
    case 144029:
    {
        returnValue = F("Hinkelhöft");
        break;
    }
    case 144030:
    {
        returnValue = F("Hinkelsgasse");
        break;
    }
    case 144031:
    {
        returnValue = F("Hinkelspfad");
        break;
    }
    case 144032:
    {
        returnValue = F("Hinkelsteinstr.");
        break;
    }
    case 144033:
    {
        returnValue = F("Hinkelsteinweg");
        break;
    }
    case 144034:
    {
        returnValue = F("Hinkelweg");
        break;
    }
    case 144035:
    {
        returnValue = F("Hinkeläckerstr.");
        break;
    }
    case 144036:
    {
        returnValue = F("Hinkenhaf-Stäffele");
        break;
    }
    case 144037:
    {
        returnValue = F("Hinkenhoop");
        break;
    }
    case 144038:
    {
        returnValue = F("Hinkensweg");
        break;
    }
    case 144039:
    {
        returnValue = F("Hinkes Weißhof");
        break;
    }
    case 144040:
    {
        returnValue = F("Hinkesforst");
        break;
    }
    case 144041:
    {
        returnValue = F("Hinkweg");
        break;
    }
    case 144042:
    {
        returnValue = F("Hinlehre");
        break;
    }
    case 144043:
    {
        returnValue = F("Hinne-Rhode-Str.");
        break;
    }
    case 144044:
    {
        returnValue = F("Hinnebecker Furth");
        break;
    }
    case 144045:
    {
        returnValue = F("Hinnebecker Str.");
        break;
    }
    case 144046:
    {
        returnValue = F("Hinnekamp");
        break;
    }
    case 144047:
    {
        returnValue = F("Hinnemanns Hof");
        break;
    }
    case 144048:
    {
        returnValue = F("Hinnenberg");
        break;
    }
    case 144049:
    {
        returnValue = F("Hinnenberger Heide");
        break;
    }
    case 144050:
    {
        returnValue = F("Hinnenberger Str.");
        break;
    }
    case 144051:
    {
        returnValue = F("Hinnengasse");
        break;
    }
    case 144052:
    {
        returnValue = F("Hinnenkamp");
        break;
    }
    case 144053:
    {
        returnValue = F("Hinnenkamper Kirchweg");
        break;
    }
    case 144054:
    {
        returnValue = F("Hinnenkamper Str.");
        break;
    }
    case 144055:
    {
        returnValue = F("Hinnenöver");
        break;
    }
    case 144056:
    {
        returnValue = F("Hinner de Hääch");
        break;
    }
    case 144057:
    {
        returnValue = F("Hinnergass");
        break;
    }
    case 144058:
    {
        returnValue = F("Hinnerkstr.");
        break;
    }
    case 144059:
    {
        returnValue = F("Hinnerksweg");
        break;
    }
    case 144060:
    {
        returnValue = F("Hinners Damm");
        break;
    }
    case 144061:
    {
        returnValue = F("Hinnesdamm Weg");
        break;
    }
    case 144062:
    {
        returnValue = F("Hinrich-Alpers-Weg");
        break;
    }
    case 144063:
    {
        returnValue = F("Hinrich-Braasch-Str.");
        break;
    }
    case 144064:
    {
        returnValue = F("Hinrich-Braasch-Weg");
        break;
    }
    case 144065:
    {
        returnValue = F("Hinrich-Brüns-Str.");
        break;
    }
    case 144066:
    {
        returnValue = F("Hinrich-Ebs-Str.");
        break;
    }
    case 144067:
    {
        returnValue = F("Hinrich-Ehlers-Weg");
        break;
    }
    case 144068:
    {
        returnValue = F("Hinrich-Fehrs-Str.");
        break;
    }
    case 144069:
    {
        returnValue = F("Hinrich-Gerken-Str.");
        break;
    }
    case 144070:
    {
        returnValue = F("Hinrich-Gerkens-Platz");
        break;
    }
    case 144071:
    {
        returnValue = F("Hinrich-Hanno-Platz");
        break;
    }
    case 144072:
    {
        returnValue = F("Hinrich-Kopf-Str.");
        break;
    }
    case 144073:
    {
        returnValue = F("Hinrich-Kropff-Str.");
        break;
    }
    case 144074:
    {
        returnValue = F("Hinrich-Medau-Str.");
        break;
    }
    case 144075:
    {
        returnValue = F("Hinrich-Meyer-Str.");
        break;
    }
    case 144076:
    {
        returnValue = F("Hinrich-Meyerdierks-Str.");
        break;
    }
    case 144077:
    {
        returnValue = F("Hinrich-Pferdmenges-Str.");
        break;
    }
    case 144078:
    {
        returnValue = F("Hinrich-Riepen-Str.");
        break;
    }
    case 144079:
    {
        returnValue = F("Hinrich-Ringeringk-Str.");
        break;
    }
    case 144080:
    {
        returnValue = F("Hinrich-Roß-Str.");
        break;
    }
    case 144081:
    {
        returnValue = F("Hinrich-Saggau-Str.");
        break;
    }
    case 144082:
    {
        returnValue = F("Hinrich-Schloen-Weg");
        break;
    }
    case 144083:
    {
        returnValue = F("Hinrich-Schmidt-Str.");
        break;
    }
    case 144084:
    {
        returnValue = F("Hinrich-Stuart-Weg");
        break;
    }
    case 144085:
    {
        returnValue = F("Hinrich-Thieß-Str.");
        break;
    }
    case 144086:
    {
        returnValue = F("Hinrich-Tiedemann-Str.");
        break;
    }
    case 144087:
    {
        returnValue = F("Hinrich-Vogelsang-Str.");
        break;
    }
    case 144088:
    {
        returnValue = F("Hinrich-Voß-Str.");
        break;
    }
    case 144089:
    {
        returnValue = F("Hinrich-Weyhausen-Str.");
        break;
    }
    case 144090:
    {
        returnValue = F("Hinrich-Wichern-Str.");
        break;
    }
    case 144091:
    {
        returnValue = F("Hinrich-Wilhelm-Kopf-Str.");
        break;
    }
    case 144092:
    {
        returnValue = F("Hinrich-Wilhelm-Kopf-Weg");
        break;
    }
    case 144093:
    {
        returnValue = F("Hinrich-Winters-Str.");
        break;
    }
    case 144094:
    {
        returnValue = F("Hinrich-Wrage-Stieg");
        break;
    }
    case 144095:
    {
        returnValue = F("Hinrich-Wrage-Str.");
        break;
    }
    case 144096:
    {
        returnValue = F("Hinrichs-Niewerth-Str.");
        break;
    }
    case 144097:
    {
        returnValue = F("Hinrichsberger Weg");
        break;
    }
    case 144098:
    {
        returnValue = F("Hinrichsdorf");
        break;
    }
    case 144099:
    {
        returnValue = F("Hinrichsfelder Str.");
        break;
    }
    case 144100:
    {
        returnValue = F("Hinrichshagen");
        break;
    }
    case 144101:
    {
        returnValue = F("Hinrichshagener Damm");
        break;
    }
    case 144102:
    {
        returnValue = F("Hinrichshof");
        break;
    }
    case 144103:
    {
        returnValue = F("Hinrichsholz");
        break;
    }
    case 144104:
    {
        returnValue = F("Hinrichshöh");
        break;
    }
    case 144105:
    {
        returnValue = F("Hinrichshörn");
        break;
    }
    case 144106:
    {
        returnValue = F("Hinrichstr.");
        break;
    }
    case 144107:
    {
        returnValue = F("Hinrichsweg");
        break;
    }
    case 144108:
    {
        returnValue = F("Hinrieke-Lichterfeld-Str.");
        break;
    }
    case 144109:
    {
        returnValue = F("Hinrik-Blok-Str.");
        break;
    }
    case 144110:
    {
        returnValue = F("Hinrik-Lange-Weg");
        break;
    }
    case 144111:
    {
        returnValue = F("Hinrikstr.");
        break;
    }
    case 144112:
    {
        returnValue = F("Hinsbecker Str.");
        break;
    }
    case 144113:
    {
        returnValue = F("Hinsbecker Weg");
        break;
    }
    case 144114:
    {
        returnValue = F("Hinsberg");
        break;
    }
    case 144115:
    {
        returnValue = F("Hinsbergweg");
        break;
    }
    case 144116:
    {
        returnValue = F("Hinschkoppel");
        break;
    }
    case 144117:
    {
        returnValue = F("Hinschweg");
        break;
    }
    case 144118:
    {
        returnValue = F("Hinsdorfer Str.");
        break;
    }
    case 144119:
    {
        returnValue = F("Hinsdorfer Weg");
        break;
    }
    case 144120:
    {
        returnValue = F("Hinserdorfstr.");
        break;
    }
    case 144121:
    {
        returnValue = F("Hinsiekweg");
        break;
    }
    case 144122:
    {
        returnValue = F("Hinstein");
        break;
    }
    case 144123:
    {
        returnValue = F("Hinstorff-Str.");
        break;
    }
    case 144124:
    {
        returnValue = F("Hinstorffstr.");
        break;
    }
    case 144125:
    {
        returnValue = F("Hintalstr.");
        break;
    }
    case 144126:
    {
        returnValue = F("Hintalweg");
        break;
    }
    case 144127:
    {
        returnValue = F("Hintberg");
        break;
    }
    case 144128:
    {
        returnValue = F("Hintberger Str.");
        break;
    }
    case 144129:
    {
        returnValue = F("Hintberger Weg");
        break;
    }
    case 144130:
    {
        returnValue = F("Hintefeldweg");
        break;
    }
    case 144131:
    {
        returnValue = F("Hinten Draußen");
        break;
    }
    case 144132:
    {
        returnValue = F("Hinten auf der Gaß");
        break;
    }
    case 144133:
    {
        returnValue = F("Hintenausweg");
        break;
    }
    case 144134:
    {
        returnValue = F("Hintenmattenweg");
        break;
    }
    case 144135:
    {
        returnValue = F("Hintenstr.");
        break;
    }
    case 144136:
    {
        returnValue = F("Hinter Abend");
        break;
    }
    case 144137:
    {
        returnValue = F("Hinter Alenberg");
        break;
    }
    case 144138:
    {
        returnValue = F("Hinter Appels Garten");
        break;
    }
    case 144139:
    {
        returnValue = F("Hinter Backhausstr.");
        break;
    }
    case 144140:
    {
        returnValue = F("Hinter Berlen");
        break;
    }
    case 144141:
    {
        returnValue = F("Hinter Blump");
        break;
    }
    case 144142:
    {
        returnValue = F("Hinter Brunnen");
        break;
    }
    case 144143:
    {
        returnValue = F("Hinter Buddes Hof");
        break;
    }
    case 144144:
    {
        returnValue = F("Hinter Burg");
        break;
    }
    case 144145:
    {
        returnValue = F("Hinter Büchlem");
        break;
    }
    case 144146:
    {
        returnValue = F("Hinter Bühl");
        break;
    }
    case 144147:
    {
        returnValue = F("Hinter Den Gärten");
        break;
    }
    case 144148:
    {
        returnValue = F("Hinter Dielings Garten");
        break;
    }
    case 144149:
    {
        returnValue = F("Hinter Eichbaum");
        break;
    }
    case 144150:
    {
        returnValue = F("Hinter Eichen");
        break;
    }
    case 144151:
    {
        returnValue = F("Hinter Eimes");
        break;
    }
    case 144152:
    {
        returnValue = F("Hinter Erl");
        break;
    }
    case 144153:
    {
        returnValue = F("Hinter Erlen");
        break;
    }
    case 144154:
    {
        returnValue = F("Hinter Eschen");
        break;
    }
    case 144155:
    {
        returnValue = F("Hinter Escherhof");
        break;
    }
    case 144156:
    {
        returnValue = F("Hinter Fels");
        break;
    }
    case 144157:
    {
        returnValue = F("Hinter Forst");
        break;
    }
    case 144158:
    {
        returnValue = F("Hinter Franzenhaus");
        break;
    }
    case 144159:
    {
        returnValue = F("Hinter Gartens");
        break;
    }
    case 144160:
    {
        returnValue = F("Hinter Glüpker");
        break;
    }
    case 144161:
    {
        returnValue = F("Hinter Gärten");
        break;
    }
    case 144162:
    {
        returnValue = F("Hinter Hagel");
        break;
    }
    case 144163:
    {
        returnValue = F("Hinter Hahn");
        break;
    }
    case 144164:
    {
        returnValue = F("Hinter Halfes");
        break;
    }
    case 144165:
    {
        returnValue = F("Hinter Haselweg");
        break;
    }
    case 144166:
    {
        returnValue = F("Hinter Haslach");
        break;
    }
    case 144167:
    {
        returnValue = F("Hinter Herich");
        break;
    }
    case 144168:
    {
        returnValue = F("Hinter Herschenhaus");
        break;
    }
    case 144169:
    {
        returnValue = F("Hinter Hoch");
        break;
    }
    case 144170:
    {
        returnValue = F("Hinter Hofbungert");
        break;
    }
    case 144171:
    {
        returnValue = F("Hinter Hofen");
        break;
    }
    case 144172:
    {
        returnValue = F("Hinter Hofen Str.");
        break;
    }
    case 144173:
    {
        returnValue = F("Hinter Holz");
        break;
    }
    case 144174:
    {
        returnValue = F("Hinter Horchetweg");
        break;
    }
    case 144175:
    {
        returnValue = F("Hinter Höfen");
        break;
    }
    case 144176:
    {
        returnValue = F("Hinter Isabellen");
        break;
    }
    case 144177:
    {
        returnValue = F("Hinter Kasholz");
        break;
    }
    case 144178:
    {
        returnValue = F("Hinter Kellhell");
        break;
    }
    case 144179:
    {
        returnValue = F("Hinter Kempeln");
        break;
    }
    case 144180:
    {
        returnValue = F("Hinter Kirch");
        break;
    }
    case 144181:
    {
        returnValue = F("Hinter Kirchen");
        break;
    }
    case 144182:
    {
        returnValue = F("Hinter Kirchgang");
        break;
    }
    case 144183:
    {
        returnValue = F("Hinter Klasgarten");
        break;
    }
    case 144184:
    {
        returnValue = F("Hinter Kleffmanns Busch");
        break;
    }
    case 144185:
    {
        returnValue = F("Hinter Knoops Huus");
        break;
    }
    case 144186:
    {
        returnValue = F("Hinter Kronen Hofe");
        break;
    }
    case 144187:
    {
        returnValue = F("Hinter Krähenbusch");
        break;
    }
    case 144188:
    {
        returnValue = F("Hinter Kuhls Garten");
        break;
    }
    case 144189:
    {
        returnValue = F("Hinter Kütschers Hof");
        break;
    }
    case 144190:
    {
        returnValue = F("Hinter Lahneck");
        break;
    }
    case 144191:
    {
        returnValue = F("Hinter Langfelten");
        break;
    }
    case 144192:
    {
        returnValue = F("Hinter Lehen");
        break;
    }
    case 144193:
    {
        returnValue = F("Hinter Lenchens Haus");
        break;
    }
    case 144194:
    {
        returnValue = F("Hinter Leyhof");
        break;
    }
    case 144195:
    {
        returnValue = F("Hinter Liß");
        break;
    }
    case 144196:
    {
        returnValue = F("Hinter Lodemanns Garten");
        break;
    }
    case 144197:
    {
        returnValue = F("Hinter Loh");
        break;
    }
    case 144198:
    {
        returnValue = F("Hinter Lotzenhaus");
        break;
    }
    case 144199:
    {
        returnValue = F("Hinter Lübbens Kamp");
        break;
    }
    case 144200:
    {
        returnValue = F("Hinter Malzens Garten");
        break;
    }
    case 144201:
    {
        returnValue = F("Hinter Marth");
        break;
    }
    case 144202:
    {
        returnValue = F("Hinter Mateshaus");
        break;
    }
    case 144203:
    {
        returnValue = F("Hinter Meikens Scheune");
        break;
    }
    case 144204:
    {
        returnValue = F("Hinter Mennig");
        break;
    }
    case 144205:
    {
        returnValue = F("Hinter Michelshaus");
        break;
    }
    case 144206:
    {
        returnValue = F("Hinter Mont");
        break;
    }
    case 144207:
    {
        returnValue = F("Hinter Moselersgärten");
        break;
    }
    case 144208:
    {
        returnValue = F("Hinter Mühlhöll");
        break;
    }
    case 144209:
    {
        returnValue = F("Hinter Oberkirch");
        break;
    }
    case 144210:
    {
        returnValue = F("Hinter Pastors Hofe");
        break;
    }
    case 144211:
    {
        returnValue = F("Hinter Pastorsgarten");
        break;
    }
    case 144212:
    {
        returnValue = F("Hinter Paulshaus");
        break;
    }
    case 144213:
    {
        returnValue = F("Hinter Paulus Haus");
        break;
    }
    case 144214:
    {
        returnValue = F("Hinter Plören");
        break;
    }
    case 144215:
    {
        returnValue = F("Hinter Puhlenhaus");
        break;
    }
    case 144216:
    {
        returnValue = F("Hinter Pöschen");
        break;
    }
    case 144217:
    {
        returnValue = F("Hinter Quaings Hof");
        break;
    }
    case 144218:
    {
        returnValue = F("Hinter Saal");
        break;
    }
    case 144219:
    {
        returnValue = F("Hinter Schinkelshütte");
        break;
    }
    case 144220:
    {
        returnValue = F("Hinter Schlax");
        break;
    }
    case 144221:
    {
        returnValue = F("Hinter Schlossweg");
        break;
    }
    case 144222:
    {
        returnValue = F("Hinter Schmids Wiese");
        break;
    }
    case 144223:
    {
        returnValue = F("Hinter Schröders Hofe");
        break;
    }
    case 144224:
    {
        returnValue = F("Hinter Sellen");
        break;
    }
    case 144225:
    {
        returnValue = F("Hinter St. Cuno");
        break;
    }
    case 144226:
    {
        returnValue = F("Hinter Stocken");
        break;
    }
    case 144227:
    {
        returnValue = F("Hinter Streboshof");
        break;
    }
    case 144228:
    {
        returnValue = F("Hinter Stöck");
        break;
    }
    case 144229:
    {
        returnValue = F("Hinter Sundheim");
        break;
    }
    case 144230:
    {
        returnValue = F("Hinter Tal");
        break;
    }
    case 144231:
    {
        returnValue = F("Hinter Walters");
        break;
    }
    case 144232:
    {
        returnValue = F("Hinter Warfen");
        break;
    }
    case 144233:
    {
        returnValue = F("Hinter Wehrhahn");
        break;
    }
    case 144234:
    {
        returnValue = F("Hinter Weiden");
        break;
    }
    case 144235:
    {
        returnValue = F("Hinter Weingarten");
        break;
    }
    case 144236:
    {
        returnValue = F("Hinter Weitzelsgarten");
        break;
    }
    case 144237:
    {
        returnValue = F("Hinter Wiesen");
        break;
    }
    case 144238:
    {
        returnValue = F("Hinter Winkel");
        break;
    }
    case 144239:
    {
        returnValue = F("Hinter Winklen");
        break;
    }
    case 144240:
    {
        returnValue = F("Hinter Zein");
        break;
    }
    case 144241:
    {
        returnValue = F("Hinter Zeine");
        break;
    }
    case 144242:
    {
        returnValue = F("Hinter Zeinen");
        break;
    }
    case 144243:
    {
        returnValue = F("Hinter Zinnen");
        break;
    }
    case 144244:
    {
        returnValue = F("Hinter Zwanken");
        break;
    }
    case 144245:
    {
        returnValue = F("Hinter Zäunen");
        break;
    }
    case 144246:
    {
        returnValue = F("Hinter d. Gaswerk");
        break;
    }
    case 144247:
    {
        returnValue = F("Hinter dem Aalbek");
        break;
    }
    case 144248:
    {
        returnValue = F("Hinter dem Acker");
        break;
    }
    case 144249:
    {
        returnValue = F("Hinter dem Altberg");
        break;
    }
    case 144250:
    {
        returnValue = F("Hinter dem Alten Schießstand");
        break;
    }
    case 144251:
    {
        returnValue = F("Hinter dem Ammann");
        break;
    }
    case 144252:
    {
        returnValue = F("Hinter dem Amt");
        break;
    }
    case 144253:
    {
        returnValue = F("Hinter dem Amtsgarten");
        break;
    }
    case 144254:
    {
        returnValue = F("Hinter dem Amtsgericht");
        break;
    }
    case 144255:
    {
        returnValue = F("Hinter dem Anger");
        break;
    }
    case 144256:
    {
        returnValue = F("Hinter dem Aschengarten");
        break;
    }
    case 144257:
    {
        returnValue = F("Hinter dem Ausbau");
        break;
    }
    case 144258:
    {
        returnValue = F("Hinter dem Bach");
        break;
    }
    case 144259:
    {
        returnValue = F("Hinter dem Backhaus");
        break;
    }
    case 144260:
    {
        returnValue = F("Hinter dem Backofen");
        break;
    }
    case 144261:
    {
        returnValue = F("Hinter dem Bahndamm");
        break;
    }
    case 144262:
    {
        returnValue = F("Hinter dem Bahnhof");
        break;
    }
    case 144263:
    {
        returnValue = F("Hinter dem Berg");
        break;
    }
    case 144264:
    {
        returnValue = F("Hinter dem Berge");
        break;
    }
    case 144265:
    {
        returnValue = F("Hinter dem Bernwardshof");
        break;
    }
    case 144266:
    {
        returnValue = F("Hinter dem Bierhaus");
        break;
    }
    case 144267:
    {
        returnValue = F("Hinter dem Borgberg");
        break;
    }
    case 144268:
    {
        returnValue = F("Hinter dem Borke");
        break;
    }
    case 144269:
    {
        returnValue = F("Hinter dem Born");
        break;
    }
    case 144270:
    {
        returnValue = F("Hinter dem Bornbusch");
        break;
    }
    case 144271:
    {
        returnValue = F("Hinter dem Bornhof");
        break;
    }
    case 144272:
    {
        returnValue = F("Hinter dem Brauhaus");
        break;
    }
    case 144273:
    {
        returnValue = F("Hinter dem Brauhause");
        break;
    }
    case 144274:
    {
        returnValue = F("Hinter dem Bruch");
        break;
    }
    case 144275:
    {
        returnValue = F("Hinter dem Bruche");
        break;
    }
    case 144276:
    {
        returnValue = F("Hinter dem Brunnen");
        break;
    }
    case 144277:
    {
        returnValue = F("Hinter dem Brühl");
        break;
    }
    case 144278:
    {
        returnValue = F("Hinter dem Brümmer");
        break;
    }
    case 144279:
    {
        returnValue = F("Hinter dem Burgweg");
        break;
    }
    case 144280:
    {
        returnValue = F("Hinter dem Busch");
        break;
    }
    case 144281:
    {
        returnValue = F("Hinter dem Bären");
        break;
    }
    case 144282:
    {
        returnValue = F("Hinter dem Böhmerhof");
        break;
    }
    case 144283:
    {
        returnValue = F("Hinter dem Bückling");
        break;
    }
    case 144284:
    {
        returnValue = F("Hinter dem Campingplatz");
        break;
    }
    case 144285:
    {
        returnValue = F("Hinter dem Chor");
        break;
    }
    case 144286:
    {
        returnValue = F("Hinter dem Deich");
        break;
    }
    case 144287:
    {
        returnValue = F("Hinter dem Dom");
        break;
    }
    case 144288:
    {
        returnValue = F("Hinter dem Dorf");
        break;
    }
    case 144289:
    {
        returnValue = F("Hinter dem Dorfe");
        break;
    }
    case 144290:
    {
        returnValue = F("Hinter dem Dorfgraben");
        break;
    }
    case 144291:
    {
        returnValue = F("Hinter dem Dorfplatz");
        break;
    }
    case 144292:
    {
        returnValue = F("Hinter dem Dorn");
        break;
    }
    case 144293:
    {
        returnValue = F("Hinter dem Dorngarten");
        break;
    }
    case 144294:
    {
        returnValue = F("Hinter dem Drohn");
        break;
    }
    case 144295:
    {
        returnValue = F("Hinter dem Dweracker");
        break;
    }
    case 144296:
    {
        returnValue = F("Hinter dem Edweg");
        break;
    }
    case 144297:
    {
        returnValue = F("Hinter dem Eichamt");
        break;
    }
    case 144298:
    {
        returnValue = F("Hinter dem Eichenbruche");
        break;
    }
    case 144299:
    {
        returnValue = F("Hinter dem Ellenberg");
        break;
    }
    case 144300:
    {
        returnValue = F("Hinter dem Engel");
        break;
    }
    case 144301:
    {
        returnValue = F("Hinter dem Erker");
        break;
    }
    case 144302:
    {
        returnValue = F("Hinter dem Erlengrund");
        break;
    }
    case 144303:
    {
        returnValue = F("Hinter dem Esch");
        break;
    }
    case 144304:
    {
        returnValue = F("Hinter dem Espohl");
        break;
    }
    case 144305:
    {
        returnValue = F("Hinter dem Fachberg");
        break;
    }
    case 144306:
    {
        returnValue = F("Hinter dem Felde");
        break;
    }
    case 144307:
    {
        returnValue = F("Hinter dem Feuerwehrhaus");
        break;
    }
    case 144308:
    {
        returnValue = F("Hinter dem Flecken");
        break;
    }
    case 144309:
    {
        returnValue = F("Hinter dem Forst");
        break;
    }
    case 144310:
    {
        returnValue = F("Hinter dem Forsthaus");
        break;
    }
    case 144311:
    {
        returnValue = F("Hinter dem Forth");
        break;
    }
    case 144312:
    {
        returnValue = F("Hinter dem Friedhof");
        break;
    }
    case 144313:
    {
        returnValue = F("Hinter dem Förstergarten");
        break;
    }
    case 144314:
    {
        returnValue = F("Hinter dem Fürstenhaus");
        break;
    }
    case 144315:
    {
        returnValue = F("Hinter dem Gang");
        break;
    }
    case 144316:
    {
        returnValue = F("Hinter dem Gartel");
        break;
    }
    case 144317:
    {
        returnValue = F("Hinter dem Garten");
        break;
    }
    case 144318:
    {
        returnValue = F("Hinter dem Gasthofe");
        break;
    }
    case 144319:
    {
        returnValue = F("Hinter dem Gaswerk");
        break;
    }
    case 144320:
    {
        returnValue = F("Hinter dem Gehäge");
        break;
    }
    case 144321:
    {
        returnValue = F("Hinter dem Graben");
        break;
    }
    case 144322:
    {
        returnValue = F("Hinter dem Gröbel");
        break;
    }
    case 144323:
    {
        returnValue = F("Hinter dem Gute");
        break;
    }
    case 144324:
    {
        returnValue = F("Hinter dem Gutshof");
        break;
    }
    case 144325:
    {
        returnValue = F("Hinter dem Haagen");
        break;
    }
    case 144326:
    {
        returnValue = F("Hinter dem Hag");
        break;
    }
    case 144327:
    {
        returnValue = F("Hinter dem Hagen");
        break;
    }
    case 144328:
    {
        returnValue = F("Hinter dem Hagenberg");
        break;
    }
    case 144329:
    {
        returnValue = F("Hinter dem Hain");
        break;
    }
    case 144330:
    {
        returnValue = F("Hinter dem Hainzaun");
        break;
    }
    case 144331:
    {
        returnValue = F("Hinter dem Hamberge");
        break;
    }
    case 144332:
    {
        returnValue = F("Hinter dem Hammer");
        break;
    }
    case 144333:
    {
        returnValue = F("Hinter dem Harz");
        break;
    }
    case 144334:
    {
        returnValue = F("Hinter dem Heckel");
        break;
    }
    case 144335:
    {
        returnValue = F("Hinter dem Heidacker");
        break;
    }
    case 144336:
    {
        returnValue = F("Hinter dem Heidkamp");
        break;
    }
    case 144337:
    {
        returnValue = F("Hinter dem Heiligen Berg");
        break;
    }
    case 144338:
    {
        returnValue = F("Hinter dem Heiligen Geist");
        break;
    }
    case 144339:
    {
        returnValue = F("Hinter dem Helges");
        break;
    }
    case 144340:
    {
        returnValue = F("Hinter dem Helm");
        break;
    }
    case 144341:
    {
        returnValue = F("Hinter dem Heyer");
        break;
    }
    case 144342:
    {
        returnValue = F("Hinter dem Hirsch");
        break;
    }
    case 144343:
    {
        returnValue = F("Hinter dem Hochfeld");
        break;
    }
    case 144344:
    {
        returnValue = F("Hinter dem Hof");
        break;
    }
    case 144345:
    {
        returnValue = F("Hinter dem Hofe");
        break;
    }
    case 144346:
    {
        returnValue = F("Hinter dem Hofegarten");
        break;
    }
    case 144347:
    {
        returnValue = F("Hinter dem Hofgarten");
        break;
    }
    case 144348:
    {
        returnValue = F("Hinter dem Holz");
        break;
    }
    case 144349:
    {
        returnValue = F("Hinter dem Holze");
        break;
    }
    case 144350:
    {
        returnValue = F("Hinter dem Holzfeld");
        break;
    }
    case 144351:
    {
        returnValue = F("Hinter dem Hopfenberge");
        break;
    }
    case 144352:
    {
        returnValue = F("Hinter dem Höchst");
        break;
    }
    case 144353:
    {
        returnValue = F("Hinter dem Hölzle");
        break;
    }
    case 144354:
    {
        returnValue = F("Hinter dem Hüttensberg");
        break;
    }
    case 144355:
    {
        returnValue = F("Hinter dem Jeefelde");
        break;
    }
    case 144356:
    {
        returnValue = F("Hinter dem Jütkamp");
        break;
    }
    case 144357:
    {
        returnValue = F("Hinter dem Kabelwerk");
        break;
    }
    case 144358:
    {
        returnValue = F("Hinter dem Kalkwerk");
        break;
    }
    case 144359:
    {
        returnValue = F("Hinter dem Kamp");
        break;
    }
    case 144360:
    {
        returnValue = F("Hinter dem Kanal");
        break;
    }
    case 144361:
    {
        returnValue = F("Hinter dem Kapaunenberg");
        break;
    }
    case 144362:
    {
        returnValue = F("Hinter dem Kies");
        break;
    }
    case 144363:
    {
        returnValue = F("Hinter dem Kindergarten");
        break;
    }
    case 144364:
    {
        returnValue = F("Hinter dem Kirchdamm");
        break;
    }
    case 144365:
    {
        returnValue = F("Hinter dem Kirchhof");
        break;
    }
    case 144366:
    {
        returnValue = F("Hinter dem Kirchhofe");
        break;
    }
    case 144367:
    {
        returnValue = F("Hinter dem Kirchle");
        break;
    }
    case 144368:
    {
        returnValue = F("Hinter dem Kirschgarten");
        break;
    }
    case 144369:
    {
        returnValue = F("Hinter dem Klapp");
        break;
    }
    case 144370:
    {
        returnValue = F("Hinter dem Klesch");
        break;
    }
    case 144371:
    {
        returnValue = F("Hinter dem Kloster");
        break;
    }
    case 144372:
    {
        returnValue = F("Hinter dem Klosterhof");
        break;
    }
    case 144373:
    {
        returnValue = F("Hinter dem Klubb");
        break;
    }
    case 144374:
    {
        returnValue = F("Hinter dem Knick");
        break;
    }
    case 144375:
    {
        returnValue = F("Hinter dem Krankenhaus");
        break;
    }
    case 144376:
    {
        returnValue = F("Hinter dem Kreikengarten");
        break;
    }
    case 144377:
    {
        returnValue = F("Hinter dem Kreuzberg");
        break;
    }
    case 144378:
    {
        returnValue = F("Hinter dem Kreuze");
        break;
    }
    case 144379:
    {
        returnValue = F("Hinter dem Kreyenhoop");
        break;
    }
    case 144380:
    {
        returnValue = F("Hinter dem Kronsberg");
        break;
    }
    case 144381:
    {
        returnValue = F("Hinter dem Krug");
        break;
    }
    case 144382:
    {
        returnValue = F("Hinter dem Kruge");
        break;
    }
    case 144383:
    {
        returnValue = F("Hinter dem Krühgarten");
        break;
    }
    case 144384:
    {
        returnValue = F("Hinter dem Kurhaus");
        break;
    }
    case 144385:
    {
        returnValue = F("Hinter dem Lehen");
        break;
    }
    case 144386:
    {
        returnValue = F("Hinter dem Lembkenhof");
        break;
    }
    case 144387:
    {
        returnValue = F("Hinter dem Lohberge");
        break;
    }
    case 144388:
    {
        returnValue = F("Hinter dem Löwen");
        break;
    }
    case 144389:
    {
        returnValue = F("Hinter dem Magazin");
        break;
    }
    case 144390:
    {
        returnValue = F("Hinter dem Markt");
        break;
    }
    case 144391:
    {
        returnValue = F("Hinter dem Meierhofe");
        break;
    }
    case 144392:
    {
        returnValue = F("Hinter dem Mühlenberg");
        break;
    }
    case 144393:
    {
        returnValue = F("Hinter dem Niederhofen");
        break;
    }
    case 144394:
    {
        returnValue = F("Hinter dem Park");
        break;
    }
    case 144395:
    {
        returnValue = F("Hinter dem Paschberg");
        break;
    }
    case 144396:
    {
        returnValue = F("Hinter dem Pfarrgarten");
        break;
    }
    case 144397:
    {
        returnValue = F("Hinter dem Pfarrhaus");
        break;
    }
    case 144398:
    {
        returnValue = F("Hinter dem Pfeiferturm");
        break;
    }
    case 144399:
    {
        returnValue = F("Hinter dem Plan");
        break;
    }
    case 144400:
    {
        returnValue = F("Hinter dem Posthof");
        break;
    }
    case 144401:
    {
        returnValue = F("Hinter dem Rahmen");
        break;
    }
    case 144402:
    {
        returnValue = F("Hinter dem Rain");
        break;
    }
    case 144403:
    {
        returnValue = F("Hinter dem Rathaus");
        break;
    }
    case 144404:
    {
        returnValue = F("Hinter dem Reiterplatz");
        break;
    }
    case 144405:
    {
        returnValue = F("Hinter dem Reußen");
        break;
    }
    case 144406:
    {
        returnValue = F("Hinter dem Riederhau");
        break;
    }
    case 144407:
    {
        returnValue = F("Hinter dem Roggen");
        break;
    }
    case 144408:
    {
        returnValue = F("Hinter dem Rosenberge");
        break;
    }
    case 144409:
    {
        returnValue = F("Hinter dem Röhrei");
        break;
    }
    case 144410:
    {
        returnValue = F("Hinter dem Saal");
        break;
    }
    case 144411:
    {
        returnValue = F("Hinter dem Sahl");
        break;
    }
    case 144412:
    {
        returnValue = F("Hinter dem Salenhäule");
        break;
    }
    case 144413:
    {
        returnValue = F("Hinter dem Salon");
        break;
    }
    case 144414:
    {
        returnValue = F("Hinter dem Salzstadel");
        break;
    }
    case 144415:
    {
        returnValue = F("Hinter dem Sandberg");
        break;
    }
    case 144416:
    {
        returnValue = F("Hinter dem Schafhof");
        break;
    }
    case 144417:
    {
        returnValue = F("Hinter dem Schießstand");
        break;
    }
    case 144418:
    {
        returnValue = F("Hinter dem Schlossgarten");
        break;
    }
    case 144419:
    {
        returnValue = F("Hinter dem Schloß");
        break;
    }
    case 144420:
    {
        returnValue = F("Hinter dem Schloßgarten");
        break;
    }
    case 144421:
    {
        returnValue = F("Hinter dem Schloßpark");
        break;
    }
    case 144422:
    {
        returnValue = F("Hinter dem Schlädchen");
        break;
    }
    case 144423:
    {
        returnValue = F("Hinter dem Schoppen");
        break;
    }
    case 144424:
    {
        returnValue = F("Hinter dem Schwarzen Felde");
        break;
    }
    case 144425:
    {
        returnValue = F("Hinter dem Schwedsberge");
        break;
    }
    case 144426:
    {
        returnValue = F("Hinter dem Schweizerling");
        break;
    }
    case 144427:
    {
        returnValue = F("Hinter dem Schützenhaus");
        break;
    }
    case 144428:
    {
        returnValue = F("Hinter dem Schützenholze");
        break;
    }
    case 144429:
    {
        returnValue = F("Hinter dem See");
        break;
    }
    case 144430:
    {
        returnValue = F("Hinter dem Siegen");
        break;
    }
    case 144431:
    {
        returnValue = F("Hinter dem Sieke");
        break;
    }
    case 144432:
    {
        returnValue = F("Hinter dem Speicher");
        break;
    }
    case 144433:
    {
        returnValue = F("Hinter dem Spielberge");
        break;
    }
    case 144434:
    {
        returnValue = F("Hinter dem Spieles");
        break;
    }
    case 144435:
    {
        returnValue = F("Hinter dem Spierlingsrain");
        break;
    }
    case 144436:
    {
        returnValue = F("Hinter dem Spittel");
        break;
    }
    case 144437:
    {
        returnValue = F("Hinter dem Sportplatz");
        break;
    }
    case 144438:
    {
        returnValue = F("Hinter dem Stadtgraben");
        break;
    }
    case 144439:
    {
        returnValue = F("Hinter dem Steenesch");
        break;
    }
    case 144440:
    {
        returnValue = F("Hinter dem Steinrücken");
        break;
    }
    case 144441:
    {
        returnValue = F("Hinter dem Steintor");
        break;
    }
    case 144442:
    {
        returnValue = F("Hinter dem Stephen");
        break;
    }
    case 144443:
    {
        returnValue = F("Hinter dem Stiegel");
        break;
    }
    case 144444:
    {
        returnValue = F("Hinter dem Storkskrug");
        break;
    }
    case 144445:
    {
        returnValue = F("Hinter dem Sägewerk");
        break;
    }
    case 144446:
    {
        returnValue = F("Hinter dem Tannenberg");
        break;
    }
    case 144447:
    {
        returnValue = F("Hinter dem Tecken");
        break;
    }
    case 144448:
    {
        returnValue = F("Hinter dem Teich");
        break;
    }
    case 144449:
    {
        returnValue = F("Hinter dem Teiche");
        break;
    }
    case 144450:
    {
        returnValue = F("Hinter dem Teichgarten");
        break;
    }
    case 144451:
    {
        returnValue = F("Hinter dem Tempelhaus");
        break;
    }
    case 144452:
    {
        returnValue = F("Hinter dem Thie");
        break;
    }
    case 144453:
    {
        returnValue = F("Hinter dem Tiefen Graben");
        break;
    }
    case 144454:
    {
        returnValue = F("Hinter dem Tiergarten");
        break;
    }
    case 144455:
    {
        returnValue = F("Hinter dem Triesch");
        break;
    }
    case 144456:
    {
        returnValue = F("Hinter dem Turm");
        break;
    }
    case 144457:
    {
        returnValue = F("Hinter dem Turnerwäldchen");
        break;
    }
    case 144458:
    {
        returnValue = F("Hinter dem Urselberg");
        break;
    }
    case 144459:
    {
        returnValue = F("Hinter dem Vorwerk");
        break;
    }
    case 144460:
    {
        returnValue = F("Hinter dem Wahl");
        break;
    }
    case 144461:
    {
        returnValue = F("Hinter dem Walburger Friedhof");
        break;
    }
    case 144462:
    {
        returnValue = F("Hinter dem Wald");
        break;
    }
    case 144463:
    {
        returnValue = F("Hinter dem Walkmühlenbad");
        break;
    }
    case 144464:
    {
        returnValue = F("Hinter dem Wall");
        break;
    }
    case 144465:
    {
        returnValue = F("Hinter dem Wasser");
        break;
    }
    case 144466:
    {
        returnValue = F("Hinter dem Wasserturm");
        break;
    }
    case 144467:
    {
        returnValue = F("Hinter dem Wehr");
        break;
    }
    case 144468:
    {
        returnValue = F("Hinter dem Weiher");
        break;
    }
    case 144469:
    {
        returnValue = F("Hinter dem Weiler");
        break;
    }
    case 144470:
    {
        returnValue = F("Hinter dem Weserdeich");
        break;
    }
    case 144471:
    {
        returnValue = F("Hinter dem Wieschen");
        break;
    }
    case 144472:
    {
        returnValue = F("Hinter dem Wiesle");
        break;
    }
    case 144473:
    {
        returnValue = F("Hinter dem Winkel");
        break;
    }
    case 144474:
    {
        returnValue = F("Hinter dem Wirtshaus");
        break;
    }
    case 144475:
    {
        returnValue = F("Hinter dem Wischhof");
        break;
    }
    case 144476:
    {
        returnValue = F("Hinter dem Zanthiersgarten");
        break;
    }
    case 144477:
    {
        returnValue = F("Hinter dem Zaun");
        break;
    }
    case 144478:
    {
        returnValue = F("Hinter dem Zehnthofe");
        break;
    }
    case 144479:
    {
        returnValue = F("Hinter dem Zimmerplatz");
        break;
    }
    case 144480:
    {
        returnValue = F("Hinter dem Zoll");
        break;
    }
    case 144481:
    {
        returnValue = F("Hinter dem Zollamt");
        break;
    }
    case 144482:
    {
        returnValue = F("Hinter dem Zollhaus");
        break;
    }
    case 144483:
    {
        returnValue = F("Hinter dem Zollhausgarten");
        break;
    }
    case 144484:
    {
        returnValue = F("Hinter dem Zwinger");
        break;
    }
    case 144485:
    {
        returnValue = F("Hinter dem großen Dorf");
        break;
    }
    case 144486:
    {
        returnValue = F("Hinter dem großen Holz");
        break;
    }
    case 144487:
    {
        returnValue = F("Hinter dem grünen Jäger");
        break;
    }
    case 144488:
    {
        returnValue = F("Hinter dem kleinen Dorfe");
        break;
    }
    case 144489:
    {
        returnValue = F("Hinter dem langen Grund");
        break;
    }
    case 144490:
    {
        returnValue = F("Hinter dem neuen Kirchhof");
        break;
    }
    case 144491:
    {
        returnValue = F("Hinter den Ampeläckern");
        break;
    }
    case 144492:
    {
        returnValue = F("Hinter den Bauerngärten");
        break;
    }
    case 144493:
    {
        returnValue = F("Hinter den Baustücken");
        break;
    }
    case 144494:
    {
        returnValue = F("Hinter den Bergen");
        break;
    }
    case 144495:
    {
        returnValue = F("Hinter den Berghäusern");
        break;
    }
    case 144496:
    {
        returnValue = F("Hinter den Birken");
        break;
    }
    case 144497:
    {
        returnValue = F("Hinter den Blanken");
        break;
    }
    case 144498:
    {
        returnValue = F("Hinter den Bräken");
        break;
    }
    case 144499:
    {
        returnValue = F("Hinter den Brüchen");
        break;
    }
    case 144500:
    {
        returnValue = F("Hinter den Buchen");
        break;
    }
    case 144501:
    {
        returnValue = F("Hinter den Bäumen");
        break;
    }
    case 144502:
    {
        returnValue = F("Hinter den Büdnereien");
        break;
    }
    case 144503:
    {
        returnValue = F("Hinter den Bürskuhlen");
        break;
    }
    case 144504:
    {
        returnValue = F("Hinter den Büschen");
        break;
    }
    case 144505:
    {
        returnValue = F("Hinter den Diehlgärten");
        break;
    }
    case 144506:
    {
        returnValue = F("Hinter den Domherrenhöfen");
        break;
    }
    case 144507:
    {
        returnValue = F("Hinter den Dorfgärten");
        break;
    }
    case 144508:
    {
        returnValue = F("Hinter den Dünen");
        break;
    }
    case 144509:
    {
        returnValue = F("Hinter den Eichen");
        break;
    }
    case 144510:
    {
        returnValue = F("Hinter den Ellern");
        break;
    }
    case 144511:
    {
        returnValue = F("Hinter den Erlen");
        break;
    }
    case 144512:
    {
        returnValue = F("Hinter den Eschen");
        break;
    }
    case 144513:
    {
        returnValue = F("Hinter den Feldgärten");
        break;
    }
    case 144514:
    {
        returnValue = F("Hinter den Fichten");
        break;
    }
    case 144515:
    {
        returnValue = F("Hinter den Fuhren");
        break;
    }
    case 144516:
    {
        returnValue = F("Hinter den Grashöfen");
        break;
    }
    case 144517:
    {
        returnValue = F("Hinter den Gärten");
        break;
    }
    case 144518:
    {
        returnValue = F("Hinter den Gäßlen");
        break;
    }
    case 144519:
    {
        returnValue = F("Hinter den Gütern");
        break;
    }
    case 144520:
    {
        returnValue = F("Hinter den Hagen");
        break;
    }
    case 144521:
    {
        returnValue = F("Hinter den Haigern");
        break;
    }
    case 144522:
    {
        returnValue = F("Hinter den Hartwiesen");
        break;
    }
    case 144523:
    {
        returnValue = F("Hinter den Hecken");
        break;
    }
    case 144524:
    {
        returnValue = F("Hinter den Heid Teichen");
        break;
    }
    case 144525:
    {
        returnValue = F("Hinter den Heidgruben");
        break;
    }
    case 144526:
    {
        returnValue = F("Hinter den Herrengärten");
        break;
    }
    case 144527:
    {
        returnValue = F("Hinter den Hooven");
        break;
    }
    case 144528:
    {
        returnValue = F("Hinter den Hopfengärten");
        break;
    }
    case 144529:
    {
        returnValue = F("Hinter den Hägen");
        break;
    }
    case 144530:
    {
        returnValue = F("Hinter den Häusern");
        break;
    }
    case 144531:
    {
        returnValue = F("Hinter den Höfen");
        break;
    }
    case 144532:
    {
        returnValue = F("Hinter den Höhen");
        break;
    }
    case 144533:
    {
        returnValue = F("Hinter den Höllen");
        break;
    }
    case 144534:
    {
        returnValue = F("Hinter den Hörsten");
        break;
    }
    case 144535:
    {
        returnValue = F("Hinter den Hüttstücken");
        break;
    }
    case 144536:
    {
        returnValue = F("Hinter den Kirschgärten");
        break;
    }
    case 144537:
    {
        returnValue = F("Hinter den Knicken");
        break;
    }
    case 144538:
    {
        returnValue = F("Hinter den Kreuzgärten");
        break;
    }
    case 144539:
    {
        returnValue = F("Hinter den Kämpen");
        break;
    }
    case 144540:
    {
        returnValue = F("Hinter den Langen Gärten");
        break;
    }
    case 144541:
    {
        returnValue = F("Hinter den Langen Höfen");
        break;
    }
    case 144542:
    {
        returnValue = F("Hinter den Linden");
        break;
    }
    case 144543:
    {
        returnValue = F("Hinter den Mühlen");
        break;
    }
    case 144544:
    {
        returnValue = F("Hinter den Oberweiden");
        break;
    }
    case 144545:
    {
        returnValue = F("Hinter den Ortsgärten");
        break;
    }
    case 144546:
    {
        returnValue = F("Hinter den Pfingstgärten");
        break;
    }
    case 144547:
    {
        returnValue = F("Hinter den Planken");
        break;
    }
    case 144548:
    {
        returnValue = F("Hinter den Pösten");
        break;
    }
    case 144549:
    {
        returnValue = F("Hinter den Quergärten");
        break;
    }
    case 144550:
    {
        returnValue = F("Hinter den Reihen");
        break;
    }
    case 144551:
    {
        returnValue = F("Hinter den Rielen");
        break;
    }
    case 144552:
    {
        returnValue = F("Hinter den Rothen");
        break;
    }
    case 144553:
    {
        returnValue = F("Hinter den Röthen");
        break;
    }
    case 144554:
    {
        returnValue = F("Hinter den Rüstern");
        break;
    }
    case 144555:
    {
        returnValue = F("Hinter den Safrangärten");
        break;
    }
    case 144556:
    {
        returnValue = F("Hinter den Scheuern");
        break;
    }
    case 144557:
    {
        returnValue = F("Hinter den Scheunen");
        break;
    }
    case 144558:
    {
        returnValue = F("Hinter den Schmiedehöfen");
        break;
    }
    case 144559:
    {
        returnValue = F("Hinter den Schäfersgärten");
        break;
    }
    case 144560:
    {
        returnValue = F("Hinter den Spielplätzen");
        break;
    }
    case 144561:
    {
        returnValue = F("Hinter den Stiegelgärten");
        break;
    }
    case 144562:
    {
        returnValue = F("Hinter den Stockwiesen");
        break;
    }
    case 144563:
    {
        returnValue = F("Hinter den Städeln");
        break;
    }
    case 144564:
    {
        returnValue = F("Hinter den Ställen");
        break;
    }
    case 144565:
    {
        returnValue = F("Hinter den Stücken");
        break;
    }
    case 144566:
    {
        returnValue = F("Hinter den Tannen");
        break;
    }
    case 144567:
    {
        returnValue = F("Hinter den Tannhöfen");
        break;
    }
    case 144568:
    {
        returnValue = F("Hinter den Teichen");
        break;
    }
    case 144569:
    {
        returnValue = F("Hinter den Teichhöfen");
        break;
    }
    case 144570:
    {
        returnValue = F("Hinter den Teilen");
        break;
    }
    case 144571:
    {
        returnValue = F("Hinter den Wacholdern");
        break;
    }
    case 144572:
    {
        returnValue = F("Hinter den Weiden");
        break;
    }
    case 144573:
    {
        returnValue = F("Hinter den Weinbergen");
        break;
    }
    case 144574:
    {
        returnValue = F("Hinter den Weingärten");
        break;
    }
    case 144575:
    {
        returnValue = F("Hinter den Wiesen");
        break;
    }
    case 144576:
    {
        returnValue = F("Hinter den Wingerten");
        break;
    }
    case 144577:
    {
        returnValue = F("Hinter den Wänden");
        break;
    }
    case 144578:
    {
        returnValue = F("Hinter den Wöhren");
        break;
    }
    case 144579:
    {
        returnValue = F("Hinter den Zäunen");
        break;
    }
    case 144580:
    {
        returnValue = F("Hinter den oberen Gärten");
        break;
    }
    case 144581:
    {
        returnValue = F("Hinter der Acht");
        break;
    }
    case 144582:
    {
        returnValue = F("Hinter der Achte");
        break;
    }
    case 144583:
    {
        returnValue = F("Hinter der Ahe");
        break;
    }
    case 144584:
    {
        returnValue = F("Hinter der Ahornstr.");
        break;
    }
    case 144585:
    {
        returnValue = F("Hinter der Ahrend");
        break;
    }
    case 144586:
    {
        returnValue = F("Hinter der Altdörfer Kirche");
        break;
    }
    case 144587:
    {
        returnValue = F("Hinter der Alten Kirche");
        break;
    }
    case 144588:
    {
        returnValue = F("Hinter der Alten Mühle");
        break;
    }
    case 144589:
    {
        returnValue = F("Hinter der Alten Schule");
        break;
    }
    case 144590:
    {
        returnValue = F("Hinter der Alten See");
        break;
    }
    case 144591:
    {
        returnValue = F("Hinter der Au");
        break;
    }
    case 144592:
    {
        returnValue = F("Hinter der Aue");
        break;
    }
    case 144593:
    {
        returnValue = F("Hinter der Badestube");
        break;
    }
    case 144594:
    {
        returnValue = F("Hinter der Bahn");
        break;
    }
    case 144595:
    {
        returnValue = F("Hinter der Bauerwand");
        break;
    }
    case 144596:
    {
        returnValue = F("Hinter der Beund");
        break;
    }
    case 144597:
    {
        returnValue = F("Hinter der Bindt");
        break;
    }
    case 144598:
    {
        returnValue = F("Hinter der Birkenallee");
        break;
    }
    case 144599:
    {
        returnValue = F("Hinter der Bitz");
        break;
    }
    case 144600:
    {
        returnValue = F("Hinter der Bleiche");
        break;
    }
    case 144601:
    {
        returnValue = F("Hinter der Blume");
        break;
    }
    case 144602:
    {
        returnValue = F("Hinter der Braake");
        break;
    }
    case 144603:
    {
        returnValue = F("Hinter der Brake");
        break;
    }
    case 144604:
    {
        returnValue = F("Hinter der Brandstätte");
        break;
    }
    case 144605:
    {
        returnValue = F("Hinter der Brauerei");
        break;
    }
    case 144606:
    {
        returnValue = F("Hinter der Breite");
        break;
    }
    case 144607:
    {
        returnValue = F("Hinter der Brunnenaue");
        break;
    }
    case 144608:
    {
        returnValue = F("Hinter der Buchhalde");
        break;
    }
    case 144609:
    {
        returnValue = F("Hinter der Burg");
        break;
    }
    case 144610:
    {
        returnValue = F("Hinter der Burgwiese");
        break;
    }
    case 144611:
    {
        returnValue = F("Hinter der Burkhardsmühle");
        break;
    }
    case 144612:
    {
        returnValue = F("Hinter der Deichstr.");
        break;
    }
    case 144613:
    {
        returnValue = F("Hinter der Düne");
        break;
    }
    case 144614:
    {
        returnValue = F("Hinter der Eich");
        break;
    }
    case 144615:
    {
        returnValue = F("Hinter der Eich Str.");
        break;
    }
    case 144616:
    {
        returnValue = F("Hinter der Eisenbahn");
        break;
    }
    case 144617:
    {
        returnValue = F("Hinter der Eller");
        break;
    }
    case 144618:
    {
        returnValue = F("Hinter der Est");
        break;
    }
    case 144619:
    {
        returnValue = F("Hinter der Fabrik");
        break;
    }
    case 144620:
    {
        returnValue = F("Hinter der Felchtaer Stube");
        break;
    }
    case 144621:
    {
        returnValue = F("Hinter der Felsmühle");
        break;
    }
    case 144622:
    {
        returnValue = F("Hinter der Feuerwache");
        break;
    }
    case 144623:
    {
        returnValue = F("Hinter der Feuerwehr");
        break;
    }
    case 144624:
    {
        returnValue = F("Hinter der Flora");
        break;
    }
    case 144625:
    {
        returnValue = F("Hinter der Flurwiese");
        break;
    }
    case 144626:
    {
        returnValue = F("Hinter der Forstschule");
        break;
    }
    case 144627:
    {
        returnValue = F("Hinter der Freiheit");
        break;
    }
    case 144628:
    {
        returnValue = F("Hinter der Gansbett");
        break;
    }
    case 144629:
    {
        returnValue = F("Hinter der Gass");
        break;
    }
    case 144630:
    {
        returnValue = F("Hinter der Gasse");
        break;
    }
    case 144631:
    {
        returnValue = F("Hinter der Gaß");
        break;
    }
    case 144632:
    {
        returnValue = F("Hinter der Geflügelfarm");
        break;
    }
    case 144633:
    {
        returnValue = F("Hinter der Giftmühle");
        break;
    }
    case 144634:
    {
        returnValue = F("Hinter der Großen Ringstr.");
        break;
    }
    case 144635:
    {
        returnValue = F("Hinter der Grube");
        break;
    }
    case 144636:
    {
        returnValue = F("Hinter der Grünen Str.");
        break;
    }
    case 144637:
    {
        returnValue = F("Hinter der Gärtnerei");
        break;
    }
    case 144638:
    {
        returnValue = F("Hinter der Haag");
        break;
    }
    case 144639:
    {
        returnValue = F("Hinter der Hag");
        break;
    }
    case 144640:
    {
        returnValue = F("Hinter der Hage");
        break;
    }
    case 144641:
    {
        returnValue = F("Hinter der Haie");
        break;
    }
    case 144642:
    {
        returnValue = F("Hinter der Hainbuche");
        break;
    }
    case 144643:
    {
        returnValue = F("Hinter der Halle");
        break;
    }
    case 144644:
    {
        returnValue = F("Hinter der Hardt");
        break;
    }
    case 144645:
    {
        returnValue = F("Hinter der Harwand");
        break;
    }
    case 144646:
    {
        returnValue = F("Hinter der Heber");
        break;
    }
    case 144647:
    {
        returnValue = F("Hinter der Heck");
        break;
    }
    case 144648:
    {
        returnValue = F("Hinter der Hecke");
        break;
    }
    case 144649:
    {
        returnValue = F("Hinter der Heeg");
        break;
    }
    case 144650:
    {
        returnValue = F("Hinter der Heese");
        break;
    }
    case 144651:
    {
        returnValue = F("Hinter der Herrlichkeit");
        break;
    }
    case 144652:
    {
        returnValue = F("Hinter der Heydstadt");
        break;
    }
    case 144653:
    {
        returnValue = F("Hinter der Hofstadt");
        break;
    }
    case 144654:
    {
        returnValue = F("Hinter der Hofstätt");
        break;
    }
    case 144655:
    {
        returnValue = F("Hinter der Hofwies");
        break;
    }
    case 144656:
    {
        returnValue = F("Hinter der Hofwiese");
        break;
    }
    case 144657:
    {
        returnValue = F("Hinter der Hohen Burg");
        break;
    }
    case 144658:
    {
        returnValue = F("Hinter der Hohl");
        break;
    }
    case 144659:
    {
        returnValue = F("Hinter der Holderburg");
        break;
    }
    case 144660:
    {
        returnValue = F("Hinter der Homburger Eisenbahn");
        break;
    }
    case 144661:
    {
        returnValue = F("Hinter der Horde");
        break;
    }
    case 144662:
    {
        returnValue = F("Hinter der Hude");
        break;
    }
    case 144663:
    {
        returnValue = F("Hinter der Hut");
        break;
    }
    case 144664:
    {
        returnValue = F("Hinter der Hute");
        break;
    }
    case 144665:
    {
        returnValue = F("Hinter der Höh");
        break;
    }
    case 144666:
    {
        returnValue = F("Hinter der Höhe");
        break;
    }
    case 144667:
    {
        returnValue = F("Hinter der Hütte");
        break;
    }
    case 144668:
    {
        returnValue = F("Hinter der Jahnstr.");
        break;
    }
    case 144669:
    {
        returnValue = F("Hinter der Jungenstr.");
        break;
    }
    case 144670:
    {
        returnValue = F("Hinter der Kapelle");
        break;
    }
    case 144671:
    {
        returnValue = F("Hinter der Kegelbahn");
        break;
    }
    case 144672:
    {
        returnValue = F("Hinter der Kehr");
        break;
    }
    case 144673:
    {
        returnValue = F("Hinter der Kelter");
        break;
    }
    case 144674:
    {
        returnValue = F("Hinter der Kippe");
        break;
    }
    case 144675:
    {
        returnValue = F("Hinter der Kirch");
        break;
    }
    case 144676:
    {
        returnValue = F("Hinter der Kirche");
        break;
    }
    case 144677:
    {
        returnValue = F("Hinter der Kirchstr.");
        break;
    }
    case 144678:
    {
        returnValue = F("Hinter der Kleinen Mauer");
        break;
    }
    case 144679:
    {
        returnValue = F("Hinter der Kleinmühle");
        break;
    }
    case 144680:
    {
        returnValue = F("Hinter der Klinik");
        break;
    }
    case 144681:
    {
        returnValue = F("Hinter der Klostermauer");
        break;
    }
    case 144682:
    {
        returnValue = F("Hinter der Klus");
        break;
    }
    case 144683:
    {
        returnValue = F("Hinter der Kolonie");
        break;
    }
    case 144684:
    {
        returnValue = F("Hinter der Laie");
        break;
    }
    case 144685:
    {
        returnValue = F("Hinter der Landwehr");
        break;
    }
    case 144686:
    {
        returnValue = F("Hinter der Langen Mauer");
        break;
    }
    case 144687:
    {
        returnValue = F("Hinter der Langgasse");
        break;
    }
    case 144688:
    {
        returnValue = F("Hinter der Lehmkaul");
        break;
    }
    case 144689:
    {
        returnValue = F("Hinter der Lehmkuhle");
        break;
    }
    case 144690:
    {
        returnValue = F("Hinter der Lenne");
        break;
    }
    case 144691:
    {
        returnValue = F("Hinter der Ley");
        break;
    }
    case 144692:
    {
        returnValue = F("Hinter der Lieth");
        break;
    }
    case 144693:
    {
        returnValue = F("Hinter der Linah");
        break;
    }
    case 144694:
    {
        returnValue = F("Hinter der Linde");
        break;
    }
    case 144695:
    {
        returnValue = F("Hinter der Loge");
        break;
    }
    case 144696:
    {
        returnValue = F("Hinter der Lohe");
        break;
    }
    case 144697:
    {
        returnValue = F("Hinter der Lokhalle");
        break;
    }
    case 144698:
    {
        returnValue = F("Hinter der Luhe");
        break;
    }
    case 144699:
    {
        returnValue = F("Hinter der Lübbelau");
        break;
    }
    case 144700:
    {
        returnValue = F("Hinter der Mariengasse");
        break;
    }
    case 144701:
    {
        returnValue = F("Hinter der Masch");
        break;
    }
    case 144702:
    {
        returnValue = F("Hinter der Mauer");
        break;
    }
    case 144703:
    {
        returnValue = F("Hinter der Mauer Nord");
        break;
    }
    case 144704:
    {
        returnValue = F("Hinter der Mauer Süd");
        break;
    }
    case 144705:
    {
        returnValue = F("Hinter der Meierei");
        break;
    }
    case 144706:
    {
        returnValue = F("Hinter der Meisterei");
        break;
    }
    case 144707:
    {
        returnValue = F("Hinter der Molkerei");
        break;
    }
    case 144708:
    {
        returnValue = F("Hinter der Mühl");
        break;
    }
    case 144709:
    {
        returnValue = F("Hinter der Mühle");
        break;
    }
    case 144710:
    {
        returnValue = F("Hinter der Münze");
        break;
    }
    case 144711:
    {
        returnValue = F("Hinter der Nauwiese");
        break;
    }
    case 144712:
    {
        returnValue = F("Hinter der Neustadt");
        break;
    }
    case 144713:
    {
        returnValue = F("Hinter der Nörr");
        break;
    }
    case 144714:
    {
        returnValue = F("Hinter der Obermühle");
        break;
    }
    case 144715:
    {
        returnValue = F("Hinter der Oberpfarre");
        break;
    }
    case 144716:
    {
        returnValue = F("Hinter der Ohrenbrücke");
        break;
    }
    case 144717:
    {
        returnValue = F("Hinter der Ostanlage");
        break;
    }
    case 144718:
    {
        returnValue = F("Hinter der Papenbrücke");
        break;
    }
    case 144719:
    {
        returnValue = F("Hinter der Passeewand");
        break;
    }
    case 144720:
    {
        returnValue = F("Hinter der Pastorei");
        break;
    }
    case 144721:
    {
        returnValue = F("Hinter der Pechhütte");
        break;
    }
    case 144722:
    {
        returnValue = F("Hinter der Pfarr");
        break;
    }
    case 144723:
    {
        returnValue = F("Hinter der Pfarre");
        break;
    }
    case 144724:
    {
        returnValue = F("Hinter der Platte");
        break;
    }
    case 144725:
    {
        returnValue = F("Hinter der Post");
        break;
    }
    case 144726:
    {
        returnValue = F("Hinter der Pumpe");
        break;
    }
    case 144727:
    {
        returnValue = F("Hinter der Reihe");
        break;
    }
    case 144728:
    {
        returnValue = F("Hinter der Rennbahn");
        break;
    }
    case 144729:
    {
        returnValue = F("Hinter der Riege");
        break;
    }
    case 144730:
    {
        returnValue = F("Hinter der Ringlesmühle");
        break;
    }
    case 144731:
    {
        returnValue = F("Hinter der Roßmühle");
        break;
    }
    case 144732:
    {
        returnValue = F("Hinter der Rüsterrn");
        break;
    }
    case 144733:
    {
        returnValue = F("Hinter der Salpeterhütte");
        break;
    }
    case 144734:
    {
        returnValue = F("Hinter der Sandgrube");
        break;
    }
    case 144735:
    {
        returnValue = F("Hinter der Schanz");
        break;
    }
    case 144736:
    {
        returnValue = F("Hinter der Scheerer Mühle");
        break;
    }
    case 144737:
    {
        returnValue = F("Hinter der Schenke");
        break;
    }
    case 144738:
    {
        returnValue = F("Hinter der Scheuer");
        break;
    }
    case 144739:
    {
        returnValue = F("Hinter der Schießmauer");
        break;
    }
    case 144740:
    {
        returnValue = F("Hinter der Schillerhöhe");
        break;
    }
    case 144741:
    {
        returnValue = F("Hinter der Schlagmühle");
        break;
    }
    case 144742:
    {
        returnValue = F("Hinter der Schlossbreite");
        break;
    }
    case 144743:
    {
        returnValue = F("Hinter der Schlossmauer");
        break;
    }
    case 144744:
    {
        returnValue = F("Hinter der Schmied");
        break;
    }
    case 144745:
    {
        returnValue = F("Hinter der Schmiede");
        break;
    }
    case 144746:
    {
        returnValue = F("Hinter der Schmitt");
        break;
    }
    case 144747:
    {
        returnValue = F("Hinter der Schmitte");
        break;
    }
    case 144748:
    {
        returnValue = F("Hinter der Schule");
        break;
    }
    case 144749:
    {
        returnValue = F("Hinter der Schutter");
        break;
    }
    case 144750:
    {
        returnValue = F("Hinter der Schäferei");
        break;
    }
    case 144751:
    {
        returnValue = F("Hinter der Seemannsschule");
        break;
    }
    case 144752:
    {
        returnValue = F("Hinter der Sette");
        break;
    }
    case 144753:
    {
        returnValue = F("Hinter der Stadt");
        break;
    }
    case 144754:
    {
        returnValue = F("Hinter der Stadtmauer");
        break;
    }
    case 144755:
    {
        returnValue = F("Hinter der Steckenmatt");
        break;
    }
    case 144756:
    {
        returnValue = F("Hinter der Steige");
        break;
    }
    case 144757:
    {
        returnValue = F("Hinter der Steinbreite");
        break;
    }
    case 144758:
    {
        returnValue = F("Hinter der Steinmühle");
        break;
    }
    case 144759:
    {
        returnValue = F("Hinter der Stephanskirche");
        break;
    }
    case 144760:
    {
        returnValue = F("Hinter der Stockhude");
        break;
    }
    case 144761:
    {
        returnValue = F("Hinter der Stockmühle");
        break;
    }
    case 144762:
    {
        returnValue = F("Hinter der Stollmigswiese");
        break;
    }
    case 144763:
    {
        returnValue = F("Hinter der Str.");
        break;
    }
    case 144764:
    {
        returnValue = F("Hinter der Strut");
        break;
    }
    case 144765:
    {
        returnValue = F("Hinter der Stätte");
        break;
    }
    case 144766:
    {
        returnValue = F("Hinter der Säge");
        break;
    }
    case 144767:
    {
        returnValue = F("Hinter der Teichmühle");
        break;
    }
    case 144768:
    {
        returnValue = F("Hinter der Thälmannstr.");
        break;
    }
    case 144769:
    {
        returnValue = F("Hinter der Twiete");
        break;
    }
    case 144770:
    {
        returnValue = F("Hinter der Ulrichkirche");
        break;
    }
    case 144771:
    {
        returnValue = F("Hinter der Vechte");
        break;
    }
    case 144772:
    {
        returnValue = F("Hinter der Vest");
        break;
    }
    case 144773:
    {
        returnValue = F("Hinter der Veste");
        break;
    }
    case 144774:
    {
        returnValue = F("Hinter der Vikarie");
        break;
    }
    case 144775:
    {
        returnValue = F("Hinter der Vogelstange");
        break;
    }
    case 144776:
    {
        returnValue = F("Hinter der Waag");
        break;
    }
    case 144777:
    {
        returnValue = F("Hinter der Waage");
        break;
    }
    case 144778:
    {
        returnValue = F("Hinter der Wachtmauer");
        break;
    }
    case 144779:
    {
        returnValue = F("Hinter der Waid");
        break;
    }
    case 144780:
    {
        returnValue = F("Hinter der Waldstr.");
        break;
    }
    case 144781:
    {
        returnValue = F("Hinter der Wallhecke");
        break;
    }
    case 144782:
    {
        returnValue = F("Hinter der Wand");
        break;
    }
    case 144783:
    {
        returnValue = F("Hinter der Warth");
        break;
    }
    case 144784:
    {
        returnValue = F("Hinter der Weed");
        break;
    }
    case 144785:
    {
        returnValue = F("Hinter der Wehme");
        break;
    }
    case 144786:
    {
        returnValue = F("Hinter der Wern");
        break;
    }
    case 144787:
    {
        returnValue = F("Hinter der Westanlage");
        break;
    }
    case 144788:
    {
        returnValue = F("Hinter der Wette");
        break;
    }
    case 144789:
    {
        returnValue = F("Hinter der Wickengasse");
        break;
    }
    case 144790:
    {
        returnValue = F("Hinter der Wiese");
        break;
    }
    case 144791:
    {
        returnValue = F("Hinter der Wildstedt");
        break;
    }
    case 144792:
    {
        returnValue = F("Hinter der Windmühle");
        break;
    }
    case 144793:
    {
        returnValue = F("Hinter der Wipperbrücke");
        break;
    }
    case 144794:
    {
        returnValue = F("Hinter der Wohrte");
        break;
    }
    case 144795:
    {
        returnValue = F("Hinter der Worth");
        break;
    }
    case 144796:
    {
        returnValue = F("Hinter der Wurt");
        break;
    }
    case 144797:
    {
        returnValue = F("Hinter der Wühre");
        break;
    }
    case 144798:
    {
        returnValue = F("Hinter der Zehntscheuer");
        break;
    }
    case 144799:
    {
        returnValue = F("Hinter der Zehntscheune");
        break;
    }
    case 144800:
    {
        returnValue = F("Hinter der Ziegelei");
        break;
    }
    case 144801:
    {
        returnValue = F("Hinter der Ziegelhütte");
        break;
    }
    case 144802:
    {
        returnValue = F("Hinter der Ziehkonn");
        break;
    }
    case 144803:
    {
        returnValue = F("Hinter der Zingel");
        break;
    }
    case 144804:
    {
        returnValue = F("Hinter der Zuckerfabrik");
        break;
    }
    case 144805:
    {
        returnValue = F("Hinter der alten Schule");
        break;
    }
    case 144806:
    {
        returnValue = F("Hinter der Ölmühle");
        break;
    }
    case 144807:
    {
        returnValue = F("Hinter'm Alten Ort");
        break;
    }
    case 144808:
    {
        returnValue = F("Hinter'm Brandt");
        break;
    }
    case 144809:
    {
        returnValue = F("Hinter'm Buch");
        break;
    }
    case 144810:
    {
        returnValue = F("Hinter'm Dorfe");
        break;
    }
    case 144811:
    {
        returnValue = F("Hinter'm Kloster");
        break;
    }
    case 144812:
    {
        returnValue = F("Hinter'm Schloß");
        break;
    }
    case 144813:
    {
        returnValue = F("Hinter-Hofen-Str.");
        break;
    }
    case 144814:
    {
        returnValue = F("Hinter-Höfen-Str.");
        break;
    }
    case 144815:
    {
        returnValue = F("Hinter-Ibach");
        break;
    }
    case 144816:
    {
        returnValue = F("Hinter-Kirchen");
        break;
    }
    case 144817:
    {
        returnValue = F("Hinter-Neuendorf");
        break;
    }
    case 144818:
    {
        returnValue = F("Hinter-Winterbach");
        break;
    }
    case 144819:
    {
        returnValue = F("Hinteranger");
        break;
    }
    case 144820:
    {
        returnValue = F("Hinterangerweg");
        break;
    }
    case 144821:
    {
        returnValue = F("Hinterau");
        break;
    }
    case 144822:
    {
        returnValue = F("Hinterbach");
        break;
    }
    case 144823:
    {
        returnValue = F("Hinterbacher Str.");
        break;
    }
    case 144824:
    {
        returnValue = F("Hinterbachtal");
        break;
    }
    case 144825:
    {
        returnValue = F("Hinterbachweg");
        break;
    }
    case 144826:
    {
        returnValue = F("Hinterbauernhofweg");
        break;
    }
    case 144827:
    {
        returnValue = F("Hinterbaumgärten");
        break;
    }
    case 144828:
    {
        returnValue = F("Hinterberg");
        break;
    }
    case 144829:
    {
        returnValue = F("Hinterberg Hangweg");
        break;
    }
    case 144830:
    {
        returnValue = F("Hinterberger Weg");
        break;
    }
    case 144831:
    {
        returnValue = F("Hinterbergstr.");
        break;
    }
    case 144832:
    {
        returnValue = F("Hinterbergsweg");
        break;
    }
    case 144833:
    {
        returnValue = F("Hinterbergweg");
        break;
    }
    case 144834:
    {
        returnValue = F("Hinterbinnung");
        break;
    }
    case 144835:
    {
        returnValue = F("Hinterbirkenweg");
        break;
    }
    case 144836:
    {
        returnValue = F("Hinterbol");
        break;
    }
    case 144837:
    {
        returnValue = F("Hinterborn");
        break;
    }
    case 144838:
    {
        returnValue = F("Hinterbrack");
        break;
    }
    case 144839:
    {
        returnValue = F("Hinterbreg");
        break;
    }
    case 144840:
    {
        returnValue = F("Hinterbreite");
        break;
    }
    case 144841:
    {
        returnValue = F("Hinterbrook");
        break;
    }
    case 144842:
    {
        returnValue = F("Hinterbuch");
        break;
    }
    case 144843:
    {
        returnValue = F("Hinterbuchberg");
        break;
    }
    case 144844:
    {
        returnValue = F("Hinterbuchbergstr.");
        break;
    }
    case 144845:
    {
        returnValue = F("Hinterburg");
        break;
    }
    case 144846:
    {
        returnValue = F("Hinterburgstr.");
        break;
    }
    case 144847:
    {
        returnValue = F("Hinterburgweg");
        break;
    }
    case 144848:
    {
        returnValue = F("Hinterbusch");
        break;
    }
    case 144849:
    {
        returnValue = F("Hinterbärenburger Weg");
        break;
    }
    case 144850:
    {
        returnValue = F("Hinterbüchelberg");
        break;
    }
    case 144851:
    {
        returnValue = F("Hinterbühlweg");
        break;
    }
    case 144852:
    {
        returnValue = F("Hinterdammweg");
        break;
    }
    case 144853:
    {
        returnValue = F("Hinterdaubitzer Str.");
        break;
    }
    case 144854:
    {
        returnValue = F("Hinterdeich");
        break;
    }
    case 144855:
    {
        returnValue = F("Hinterdenkental");
        break;
    }
    case 144856:
    {
        returnValue = F("Hinterdingstr.");
        break;
    }
    case 144857:
    {
        returnValue = F("Hinterdorf");
        break;
    }
    case 144858:
    {
        returnValue = F("Hinterdorfer Str.");
        break;
    }
    case 144859:
    {
        returnValue = F("Hinterdorfgasse");
        break;
    }
    case 144860:
    {
        returnValue = F("Hinterdorfstr.");
        break;
    }
    case 144861:
    {
        returnValue = F("Hinterdörfel");
        break;
    }
    case 144862:
    {
        returnValue = F("Hinterdörfer Weg");
        break;
    }
    case 144863:
    {
        returnValue = F("Hintere Abtsgmünder Str.");
        break;
    }
    case 144864:
    {
        returnValue = F("Hintere Allee");
        break;
    }
    case 144865:
    {
        returnValue = F("Hintere Angerstr.");
        break;
    }
    case 144866:
    {
        returnValue = F("Hintere Anwand");
        break;
    }
    case 144867:
    {
        returnValue = F("Hintere Aue");
        break;
    }
    case 144868:
    {
        returnValue = F("Hintere Austr.");
        break;
    }
    case 144869:
    {
        returnValue = F("Hintere Bachstr.");
        break;
    }
    case 144870:
    {
        returnValue = F("Hintere Badgasse");
        break;
    }
    case 144871:
    {
        returnValue = F("Hintere Bahnhofstr.");
        break;
    }
    case 144872:
    {
        returnValue = F("Hintere Bergstr.");
        break;
    }
    case 144873:
    {
        returnValue = F("Hintere Braike");
        break;
    }
    case 144874:
    {
        returnValue = F("Hintere Brunnenstr.");
        break;
    }
    case 144875:
    {
        returnValue = F("Hintere Brüdergasse");
        break;
    }
    case 144876:
    {
        returnValue = F("Hintere Brüggerstr.");
        break;
    }
    case 144877:
    {
        returnValue = F("Hintere Buchwiese");
        break;
    }
    case 144878:
    {
        returnValue = F("Hintere Burgstr.");
        break;
    }
    case 144879:
    {
        returnValue = F("Hintere Bände");
        break;
    }
    case 144880:
    {
        returnValue = F("Hintere Bühlstr.");
        break;
    }
    case 144881:
    {
        returnValue = F("Hintere Dell");
        break;
    }
    case 144882:
    {
        returnValue = F("Hintere Dollert");
        break;
    }
    case 144883:
    {
        returnValue = F("Hintere Dorfgasse");
        break;
    }
    case 144884:
    {
        returnValue = F("Hintere Dorfstr.");
        break;
    }
    case 144885:
    {
        returnValue = F("Hintere Ecke");
        break;
    }
    case 144886:
    {
        returnValue = F("Hintere Eichbergstr.");
        break;
    }
    case 144887:
    {
        returnValue = F("Hintere Eisengasse");
        break;
    }
    case 144888:
    {
        returnValue = F("Hintere Erbisgasse");
        break;
    }
    case 144889:
    {
        returnValue = F("Hintere Erbistalweg");
        break;
    }
    case 144890:
    {
        returnValue = F("Hintere Farbhalde");
        break;
    }
    case 144891:
    {
        returnValue = F("Hintere Feldstr.");
        break;
    }
    case 144892:
    {
        returnValue = F("Hintere Fischergasse");
        break;
    }
    case 144893:
    {
        returnValue = F("Hintere Friedhofstr.");
        break;
    }
    case 144894:
    {
        returnValue = F("Hintere Fröhnstr.");
        break;
    }
    case 144895:
    {
        returnValue = F("Hintere Furchgasse");
        break;
    }
    case 144896:
    {
        returnValue = F("Hintere Gartenstr.");
        break;
    }
    case 144897:
    {
        returnValue = F("Hintere Gasse");
        break;
    }
    case 144898:
    {
        returnValue = F("Hintere Gellertstr.");
        break;
    }
    case 144899:
    {
        returnValue = F("Hintere Gemeinde");
        break;
    }
    case 144900:
    {
        returnValue = F("Hintere Gemeindegasse");
        break;
    }
    case 144901:
    {
        returnValue = F("Hintere Gerbergasse");
        break;
    }
    case 144902:
    {
        returnValue = F("Hintere Giertloh");
        break;
    }
    case 144903:
    {
        returnValue = F("Hintere Grabengasse");
        break;
    }
    case 144904:
    {
        returnValue = F("Hintere Grabenstr.");
        break;
    }
    case 144905:
    {
        returnValue = F("Hintere Griesäcker");
        break;
    }
    case 144906:
    {
        returnValue = F("Hintere Grohleite");
        break;
    }
    case 144907:
    {
        returnValue = F("Hintere Grube");
        break;
    }
    case 144908:
    {
        returnValue = F("Hintere Gärten");
        break;
    }
    case 144909:
    {
        returnValue = F("Hintere Haardt");
        break;
    }
    case 144910:
    {
        returnValue = F("Hintere Hainstr.");
        break;
    }
    case 144911:
    {
        returnValue = F("Hintere Haldenstaffel");
        break;
    }
    case 144912:
    {
        returnValue = F("Hintere Hardt");
        break;
    }
    case 144913:
    {
        returnValue = F("Hintere Harth");
        break;
    }
    case 144914:
    {
        returnValue = F("Hintere Hauptstr.");
        break;
    }
    case 144915:
    {
        returnValue = F("Hintere Heide");
        break;
    }
    case 144916:
    {
        returnValue = F("Hintere Heidestr.");
        break;
    }
    case 144917:
    {
        returnValue = F("Hintere Herrenbergstr.");
        break;
    }
    case 144918:
    {
        returnValue = F("Hintere Heuchel");
        break;
    }
    case 144919:
    {
        returnValue = F("Hintere Hofmatt");
        break;
    }
    case 144920:
    {
        returnValue = F("Hintere Hofstatt");
        break;
    }
    case 144921:
    {
        returnValue = F("Hintere Hofstr.");
        break;
    }
    case 144922:
    {
        returnValue = F("Hintere Hohenlohsteige");
        break;
    }
    case 144923:
    {
        returnValue = F("Hintere Höfe");
        break;
    }
    case 144924:
    {
        returnValue = F("Hintere Höhe");
        break;
    }
    case 144925:
    {
        returnValue = F("Hintere Höhenstr.");
        break;
    }
    case 144926:
    {
        returnValue = F("Hintere Höllgasse");
        break;
    }
    case 144927:
    {
        returnValue = F("Hintere Imserstr.");
        break;
    }
    case 144928:
    {
        returnValue = F("Hintere Insel");
        break;
    }
    case 144929:
    {
        returnValue = F("Hintere Ixheimer Str.");
        break;
    }
    case 144930:
    {
        returnValue = F("Hintere Kapfstr.");
        break;
    }
    case 144931:
    {
        returnValue = F("Hintere Karlsgasse");
        break;
    }
    case 144932:
    {
        returnValue = F("Hintere Karlstr.");
        break;
    }
    case 144933:
    {
        returnValue = F("Hintere Kirchenhalde");
        break;
    }
    case 144934:
    {
        returnValue = F("Hintere Kirchgasse");
        break;
    }
    case 144935:
    {
        returnValue = F("Hintere Kirchstr.");
        break;
    }
    case 144936:
    {
        returnValue = F("Hintere Klinge");
        break;
    }
    case 144937:
    {
        returnValue = F("Hintere Kohlhöfe");
        break;
    }
    case 144938:
    {
        returnValue = F("Hintere Kreuzgasse");
        break;
    }
    case 144939:
    {
        returnValue = F("Hintere Kronsteinstr.");
        break;
    }
    case 144940:
    {
        returnValue = F("Hintere Landesbahnstr.");
        break;
    }
    case 144941:
    {
        returnValue = F("Hintere Landwehr");
        break;
    }
    case 144942:
    {
        returnValue = F("Hintere Ledergasse");
        break;
    }
    case 144943:
    {
        returnValue = F("Hintere Lehr");
        break;
    }
    case 144944:
    {
        returnValue = F("Hintere Lehren");
        break;
    }
    case 144945:
    {
        returnValue = F("Hintere Leimengrube");
        break;
    }
    case 144946:
    {
        returnValue = F("Hintere Leimsbergstr.");
        break;
    }
    case 144947:
    {
        returnValue = F("Hintere Leintelstr.");
        break;
    }
    case 144948:
    {
        returnValue = F("Hintere Lindau");
        break;
    }
    case 144949:
    {
        returnValue = F("Hintere Lisgewann");
        break;
    }
    case 144950:
    {
        returnValue = F("Hintere Lohbreite");
        break;
    }
    case 144951:
    {
        returnValue = F("Hintere Lück");
        break;
    }
    case 144952:
    {
        returnValue = F("Hintere Marktstr.");
        break;
    }
    case 144953:
    {
        returnValue = F("Hintere Masch");
        break;
    }
    case 144954:
    {
        returnValue = F("Hintere Mauergasse");
        break;
    }
    case 144955:
    {
        returnValue = F("Hintere Meergasse");
        break;
    }
    case 144956:
    {
        returnValue = F("Hintere Moosecker Str.");
        break;
    }
    case 144957:
    {
        returnValue = F("Hintere Mühle");
        break;
    }
    case 144958:
    {
        returnValue = F("Hintere Mühlenstr.");
        break;
    }
    case 144959:
    {
        returnValue = F("Hintere Mühlgasse");
        break;
    }
    case 144960:
    {
        returnValue = F("Hintere Mühlstr.");
        break;
    }
    case 144961:
    {
        returnValue = F("Hintere Ortsstr.");
        break;
    }
    case 144962:
    {
        returnValue = F("Hintere Ostergasse");
        break;
    }
    case 144963:
    {
        returnValue = F("Hintere Pfaffenleite");
        break;
    }
    case 144964:
    {
        returnValue = F("Hintere Pfarrgasse");
        break;
    }
    case 144965:
    {
        returnValue = F("Hintere Pforte");
        break;
    }
    case 144966:
    {
        returnValue = F("Hintere Point");
        break;
    }
    case 144967:
    {
        returnValue = F("Hintere Priestergasse");
        break;
    }
    case 144968:
    {
        returnValue = F("Hintere Ramsbachstr.");
        break;
    }
    case 144969:
    {
        returnValue = F("Hintere Rehmerstr.");
        break;
    }
    case 144970:
    {
        returnValue = F("Hintere Reichenstr.");
        break;
    }
    case 144971:
    {
        returnValue = F("Hintere Reihe");
        break;
    }
    case 144972:
    {
        returnValue = F("Hintere Reimlinger Gasse");
        break;
    }
    case 144973:
    {
        returnValue = F("Hintere Ringstr.");
        break;
    }
    case 144974:
    {
        returnValue = F("Hintere Ruh");
        break;
    }
    case 144975:
    {
        returnValue = F("Hintere Röderstr.");
        break;
    }
    case 144976:
    {
        returnValue = F("Hintere Römmelgasse");
        break;
    }
    case 144977:
    {
        returnValue = F("Hintere Saalfelder Str.");
        break;
    }
    case 144978:
    {
        returnValue = F("Hintere Sailergasse");
        break;
    }
    case 144979:
    {
        returnValue = F("Hintere Schloßgasse");
        break;
    }
    case 144980:
    {
        returnValue = F("Hintere Schloßmauer");
        break;
    }
    case 144981:
    {
        returnValue = F("Hintere Schloßsteige");
        break;
    }
    case 144982:
    {
        returnValue = F("Hintere Schloßstr.");
        break;
    }
    case 144983:
    {
        returnValue = F("Hintere Schmalzgasse");
        break;
    }
    case 144984:
    {
        returnValue = F("Hintere Schulgasse");
        break;
    }
    case 144985:
    {
        returnValue = F("Hintere Schwarzbachwiese");
        break;
    }
    case 144986:
    {
        returnValue = F("Hintere Schöbstr.");
        break;
    }
    case 144987:
    {
        returnValue = F("Hintere Schöne");
        break;
    }
    case 144988:
    {
        returnValue = F("Hintere Schütte");
        break;
    }
    case 144989:
    {
        returnValue = F("Hintere Schützenstr.");
        break;
    }
    case 144990:
    {
        returnValue = F("Hintere Seestr.");
        break;
    }
    case 144991:
    {
        returnValue = F("Hintere Siebenhitze");
        break;
    }
    case 144992:
    {
        returnValue = F("Hintere Siedlung");
        break;
    }
    case 144993:
    {
        returnValue = F("Hintere Spitalstr.");
        break;
    }
    case 144994:
    {
        returnValue = F("Hintere Stadt");
        break;
    }
    case 144995:
    {
        returnValue = F("Hintere Staig");
        break;
    }
    case 144996:
    {
        returnValue = F("Hintere Steineller");
        break;
    }
    case 144997:
    {
        returnValue = F("Hintere Steingasse");
        break;
    }
    case 144998:
    {
        returnValue = F("Hintere Steinshalde");
        break;
    }
    case 144999:
    {
        returnValue = F("Hintere Steinstr.");
        break;
    }
    case 145000:
    {
        returnValue = F("Hintere Stelle");
        break;
    }
    case 145001:
    {
        returnValue = F("Hintere Str.");
        break;
    }
    case 145002:
    {
        returnValue = F("Hintere Talstr.");
        break;
    }
    case 145003:
    {
        returnValue = F("Hintere Taus");
        break;
    }
    case 145004:
    {
        returnValue = F("Hintere Teichgasse");
        break;
    }
    case 145005:
    {
        returnValue = F("Hintere Teufelsbachstr.");
        break;
    }
    case 145006:
    {
        returnValue = F("Hintere Torstr.");
        break;
    }
    case 145007:
    {
        returnValue = F("Hintere Triftstr.");
        break;
    }
    case 145008:
    {
        returnValue = F("Hintere Tränke");
        break;
    }
    case 145009:
    {
        returnValue = F("Hintere Töpfergasse");
        break;
    }
    case 145010:
    {
        returnValue = F("Hintere Viehtrift");
        break;
    }
    case 145011:
    {
        returnValue = F("Hintere Walke");
        break;
    }
    case 145012:
    {
        returnValue = F("Hintere Weichselgartenstr.");
        break;
    }
    case 145013:
    {
        returnValue = F("Hintere Weiden");
        break;
    }
    case 145014:
    {
        returnValue = F("Hintere Weiherstr.");
        break;
    }
    case 145015:
    {
        returnValue = F("Hintere Weinberge");
        break;
    }
    case 145016:
    {
        returnValue = F("Hintere Weinberghalde");
        break;
    }
    case 145017:
    {
        returnValue = F("Hintere Wiesen");
        break;
    }
    case 145018:
    {
        returnValue = F("Hintere Wiesenstr.");
        break;
    }
    case 145019:
    {
        returnValue = F("Hintere Wilhelmstr.");
        break;
    }
    case 145020:
    {
        returnValue = F("Hintere Wohnstr.");
        break;
    }
    case 145021:
    {
        returnValue = F("Hintere Wolfsgasse");
        break;
    }
    case 145022:
    {
        returnValue = F("Hintere Zaismatt");
        break;
    }
    case 145023:
    {
        returnValue = F("Hintere Zeil");
        break;
    }
    case 145024:
    {
        returnValue = F("Hintere Zollstr.");
        break;
    }
    case 145025:
    {
        returnValue = F("Hintere-Hell-Weg");
        break;
    }
    case 145026:
    {
        returnValue = F("Hintere-Land-Str.");
        break;
    }
    case 145027:
    {
        returnValue = F("Hintere-Wiesen-Weg");
        break;
    }
    case 145028:
    {
        returnValue = F("Hintereck");
        break;
    }
    case 145029:
    {
        returnValue = F("Hinterecke");
        break;
    }
    case 145030:
    {
        returnValue = F("Hintereckstr.");
        break;
    }
    case 145031:
    {
        returnValue = F("Hinterecksweg");
        break;
    }
    case 145032:
    {
        returnValue = F("Hintereckweg");
        break;
    }
    case 145033:
    {
        returnValue = F("Hinteregasse");
        break;
    }
    case 145034:
    {
        returnValue = F("Hintereggweg");
        break;
    }
    case 145035:
    {
        returnValue = F("Hinterende");
        break;
    }
    case 145036:
    {
        returnValue = F("Hinterer Abtsberg");
        break;
    }
    case 145037:
    {
        returnValue = F("Hinterer Ackerweg");
        break;
    }
    case 145038:
    {
        returnValue = F("Hinterer Aischbach");
        break;
    }
    case 145039:
    {
        returnValue = F("Hinterer Alnisbuckweg");
        break;
    }
    case 145040:
    {
        returnValue = F("Hinterer Altlaufweg");
        break;
    }
    case 145041:
    {
        returnValue = F("Hinterer Anger");
        break;
    }
    case 145042:
    {
        returnValue = F("Hinterer Aspenweg");
        break;
    }
    case 145043:
    {
        returnValue = F("Hinterer Auweg");
        break;
    }
    case 145044:
    {
        returnValue = F("Hinterer Bahnhof");
        break;
    }
    case 145045:
    {
        returnValue = F("Hinterer Baumweg");
        break;
    }
    case 145046:
    {
        returnValue = F("Hinterer Berg");
        break;
    }
    case 145047:
    {
        returnValue = F("Hinterer Bergweg");
        break;
    }
    case 145048:
    {
        returnValue = F("Hinterer Birken");
        break;
    }
    case 145049:
    {
        returnValue = F("Hinterer Blinzgrabenweg");
        break;
    }
    case 145050:
    {
        returnValue = F("Hinterer Brühl");
        break;
    }
    case 145051:
    {
        returnValue = F("Hinterer Buchweg");
        break;
    }
    case 145052:
    {
        returnValue = F("Hinterer Burgweg");
        break;
    }
    case 145053:
    {
        returnValue = F("Hinterer Böhler Weg");
        break;
    }
    case 145054:
    {
        returnValue = F("Hinterer Bühl");
        break;
    }
    case 145055:
    {
        returnValue = F("Hinterer Bühlweg");
        break;
    }
    case 145056:
    {
        returnValue = F("Hinterer Diebespfad");
        break;
    }
    case 145057:
    {
        returnValue = F("Hinterer Dobel");
        break;
    }
    case 145058:
    {
        returnValue = F("Hinterer Dobelweg");
        break;
    }
    case 145059:
    {
        returnValue = F("Hinterer Dorfweg");
        break;
    }
    case 145060:
    {
        returnValue = F("Hinterer Drubachweg");
        break;
    }
    case 145061:
    {
        returnValue = F("Hinterer Düsitalweg");
        break;
    }
    case 145062:
    {
        returnValue = F("Hinterer Eichelbergweg");
        break;
    }
    case 145063:
    {
        returnValue = F("Hinterer Eichenweg");
        break;
    }
    case 145064:
    {
        returnValue = F("Hinterer Eichwerder");
        break;
    }
    case 145065:
    {
        returnValue = F("Hinterer Ellenberg");
        break;
    }
    case 145066:
    {
        returnValue = F("Hinterer Emletweg");
        break;
    }
    case 145067:
    {
        returnValue = F("Hinterer Epfenbergweg");
        break;
    }
    case 145068:
    {
        returnValue = F("Hinterer Ettigweg");
        break;
    }
    case 145069:
    {
        returnValue = F("Hinterer Fuchsberg");
        break;
    }
    case 145070:
    {
        returnValue = F("Hinterer Fuchsbergweg");
        break;
    }
    case 145071:
    {
        returnValue = F("Hinterer Galgensteig");
        break;
    }
    case 145072:
    {
        returnValue = F("Hinterer Garten");
        break;
    }
    case 145073:
    {
        returnValue = F("Hinterer Gartenweg");
        break;
    }
    case 145074:
    {
        returnValue = F("Hinterer Geisberg");
        break;
    }
    case 145075:
    {
        returnValue = F("Hinterer Geräumtweg");
        break;
    }
    case 145076:
    {
        returnValue = F("Hinterer Giersbühlweg");
        break;
    }
    case 145077:
    {
        returnValue = F("Hinterer Graben");
        break;
    }
    case 145078:
    {
        returnValue = F("Hinterer Grenzweg");
        break;
    }
    case 145079:
    {
        returnValue = F("Hinterer Grund");
        break;
    }
    case 145080:
    {
        returnValue = F("Hinterer Grundweg");
        break;
    }
    case 145081:
    {
        returnValue = F("Hinterer Hainweg");
        break;
    }
    case 145082:
    {
        returnValue = F("Hinterer Haldenweg");
        break;
    }
    case 145083:
    {
        returnValue = F("Hinterer Haselbach");
        break;
    }
    case 145084:
    {
        returnValue = F("Hinterer Hauptweg");
        break;
    }
    case 145085:
    {
        returnValue = F("Hinterer Heideweg");
        break;
    }
    case 145086:
    {
        returnValue = F("Hinterer Hettenberg");
        break;
    }
    case 145087:
    {
        returnValue = F("Hinterer Hirschauerwald");
        break;
    }
    case 145088:
    {
        returnValue = F("Hinterer Hochweg");
        break;
    }
    case 145089:
    {
        returnValue = F("Hinterer Hofeweg");
        break;
    }
    case 145090:
    {
        returnValue = F("Hinterer Holzschlagweg");
        break;
    }
    case 145091:
    {
        returnValue = F("Hinterer Holzweg");
        break;
    }
    case 145092:
    {
        returnValue = F("Hinterer Hub");
        break;
    }
    case 145093:
    {
        returnValue = F("Hinterer Häglesweg");
        break;
    }
    case 145094:
    {
        returnValue = F("Hinterer Höges");
        break;
    }
    case 145095:
    {
        returnValue = F("Hinterer Hörnleshangweg");
        break;
    }
    case 145096:
    {
        returnValue = F("Hinterer Kalkweg");
        break;
    }
    case 145097:
    {
        returnValue = F("Hinterer Kammweg");
        break;
    }
    case 145098:
    {
        returnValue = F("Hinterer Kamp");
        break;
    }
    case 145099:
    {
        returnValue = F("Hinterer Karwiedenweg");
        break;
    }
    case 145100:
    {
        returnValue = F("Hinterer Kettengarten");
        break;
    }
    case 145101:
    {
        returnValue = F("Hinterer Kirchbergweg");
        break;
    }
    case 145102:
    {
        returnValue = F("Hinterer Kirchweg");
        break;
    }
    case 145103:
    {
        returnValue = F("Hinterer Knock");
        break;
    }
    case 145104:
    {
        returnValue = F("Hinterer Kohlweg");
        break;
    }
    case 145105:
    {
        returnValue = F("Hinterer Krapfenwiesenweg");
        break;
    }
    case 145106:
    {
        returnValue = F("Hinterer Kreuzweg");
        break;
    }
    case 145107:
    {
        returnValue = F("Hinterer Krugberg");
        break;
    }
    case 145108:
    {
        returnValue = F("Hinterer Kuhstallweg");
        break;
    }
    case 145109:
    {
        returnValue = F("Hinterer Köhlgartenweg");
        break;
    }
    case 145110:
    {
        returnValue = F("Hinterer Kühlenberg");
        break;
    }
    case 145111:
    {
        returnValue = F("Hinterer Langenerdweg");
        break;
    }
    case 145112:
    {
        returnValue = F("Hinterer Langhaldenweg");
        break;
    }
    case 145113:
    {
        returnValue = F("Hinterer Loh");
        break;
    }
    case 145114:
    {
        returnValue = F("Hinterer Mahnberg");
        break;
    }
    case 145115:
    {
        returnValue = F("Hinterer Markt");
        break;
    }
    case 145116:
    {
        returnValue = F("Hinterer Mäusebergweg");
        break;
    }
    case 145117:
    {
        returnValue = F("Hinterer Mühlberg");
        break;
    }
    case 145118:
    {
        returnValue = F("Hinterer Mühlbuck");
        break;
    }
    case 145119:
    {
        returnValue = F("Hinterer Mühlweg");
        break;
    }
    case 145120:
    {
        returnValue = F("Hinterer Rauhauweg");
        break;
    }
    case 145121:
    {
        returnValue = F("Hinterer Rebstock");
        break;
    }
    case 145122:
    {
        returnValue = F("Hinterer Rinderberg");
        break;
    }
    case 145123:
    {
        returnValue = F("Hinterer Rindweg");
        break;
    }
    case 145124:
    {
        returnValue = F("Hinterer Ring");
        break;
    }
    case 145125:
    {
        returnValue = F("Hinterer Rosengarten");
        break;
    }
    case 145126:
    {
        returnValue = F("Hinterer Rutschberg");
        break;
    }
    case 145127:
    {
        returnValue = F("Hinterer Schachenbühlweg");
        break;
    }
    case 145128:
    {
        returnValue = F("Hinterer Schleifweg");
        break;
    }
    case 145129:
    {
        returnValue = F("Hinterer Schloßberg");
        break;
    }
    case 145130:
    {
        returnValue = F("Hinterer Schopfelenweg");
        break;
    }
    case 145131:
    {
        returnValue = F("Hinterer Schäferberg");
        break;
    }
    case 145132:
    {
        returnValue = F("Hinterer Siedlungsweg");
        break;
    }
    case 145133:
    {
        returnValue = F("Hinterer Spielbach");
        break;
    }
    case 145134:
    {
        returnValue = F("Hinterer Spitzbergweg");
        break;
    }
    case 145135:
    {
        returnValue = F("Hinterer Steig");
        break;
    }
    case 145136:
    {
        returnValue = F("Hinterer Steinberg");
        break;
    }
    case 145137:
    {
        returnValue = F("Hinterer Steinbühl");
        break;
    }
    case 145138:
    {
        returnValue = F("Hinterer Steinenbergweg");
        break;
    }
    case 145139:
    {
        returnValue = F("Hinterer Steingraben");
        break;
    }
    case 145140:
    {
        returnValue = F("Hinterer Steinweg");
        break;
    }
    case 145141:
    {
        returnValue = F("Hinterer Stockertweg");
        break;
    }
    case 145142:
    {
        returnValue = F("Hinterer Studweg");
        break;
    }
    case 145143:
    {
        returnValue = F("Hinterer Sückleinsweg");
        break;
    }
    case 145144:
    {
        returnValue = F("Hinterer Talweg");
        break;
    }
    case 145145:
    {
        returnValue = F("Hinterer Tauweg");
        break;
    }
    case 145146:
    {
        returnValue = F("Hinterer Teichweg");
        break;
    }
    case 145147:
    {
        returnValue = F("Hinterer Thorwaldweg");
        break;
    }
    case 145148:
    {
        returnValue = F("Hinterer Torweg");
        break;
    }
    case 145149:
    {
        returnValue = F("Hinterer Tränkeweg");
        break;
    }
    case 145150:
    {
        returnValue = F("Hinterer Viehmarktweg");
        break;
    }
    case 145151:
    {
        returnValue = F("Hinterer Voßwinkel");
        break;
    }
    case 145152:
    {
        returnValue = F("Hinterer Waldweg");
        break;
    }
    case 145153:
    {
        returnValue = F("Hinterer Wall");
        break;
    }
    case 145154:
    {
        returnValue = F("Hinterer Weg");
        break;
    }
    case 145155:
    {
        returnValue = F("Hinterer Weiler");
        break;
    }
    case 145156:
    {
        returnValue = F("Hinterer Wickgarten");
        break;
    }
    case 145157:
    {
        returnValue = F("Hinterer Zwerchweg");
        break;
    }
    case 145158:
    {
        returnValue = F("Hinterer Zwinger");
        break;
    }
    case 145159:
    {
        returnValue = F("Hinterer-Berg-Weg");
        break;
    }
    case 145160:
    {
        returnValue = F("Hinterertalweg");
        break;
    }
    case 145161:
    {
        returnValue = F("Hinteres Breitenfeld");
        break;
    }
    case 145162:
    {
        returnValue = F("Hinteres Buch");
        break;
    }
    case 145163:
    {
        returnValue = F("Hinteres Dorf");
        break;
    }
    case 145164:
    {
        returnValue = F("Hinteres Eisfeld");
        break;
    }
    case 145165:
    {
        returnValue = F("Hinteres Feld");
        break;
    }
    case 145166:
    {
        returnValue = F("Hinteres Ghai");
        break;
    }
    case 145167:
    {
        returnValue = F("Hinteres Gleißental");
        break;
    }
    case 145168:
    {
        returnValue = F("Hinteres Greut");
        break;
    }
    case 145169:
    {
        returnValue = F("Hinteres Gwend");
        break;
    }
    case 145170:
    {
        returnValue = F("Hinteres Gässle");
        break;
    }
    case 145171:
    {
        returnValue = F("Hinteres Gäßle");
        break;
    }
    case 145172:
    {
        returnValue = F("Hinteres Holz");
        break;
    }
    case 145173:
    {
        returnValue = F("Hinteres Härtle");
        break;
    }
    case 145174:
    {
        returnValue = F("Hinteres Kirchgäßchen");
        break;
    }
    case 145175:
    {
        returnValue = F("Hinteres Moos");
        break;
    }
    case 145176:
    {
        returnValue = F("Hinteres Rot");
        break;
    }
    case 145177:
    {
        returnValue = F("Hinteres Räumicht");
        break;
    }
    case 145178:
    {
        returnValue = F("Hinteres Schlehental");
        break;
    }
    case 145179:
    {
        returnValue = F("Hinteres Schweineloch");
        break;
    }
    case 145180:
    {
        returnValue = F("Hinteres Steigle");
        break;
    }
    case 145181:
    {
        returnValue = F("Hinteres Tal");
        break;
    }
    case 145182:
    {
        returnValue = F("Hinteres Tiefentalsträßle");
        break;
    }
    case 145183:
    {
        returnValue = F("Hinteres Walterstal");
        break;
    }
    case 145184:
    {
        returnValue = F("Hinteres Öschle");
        break;
    }
    case 145185:
    {
        returnValue = F("Hinterettenberg");
        break;
    }
    case 145186:
    {
        returnValue = F("Hinterfalter");
        break;
    }
    case 145187:
    {
        returnValue = F("Hinterfalterweg");
        break;
    }
    case 145188:
    {
        returnValue = F("Hinterfang");
        break;
    }
    case 145189:
    {
        returnValue = F("Hinterfeld");
        break;
    }
    case 145190:
    {
        returnValue = F("Hinterfelde");
        break;
    }
    case 145191:
    {
        returnValue = F("Hinterfeldstr.");
        break;
    }
    case 145192:
    {
        returnValue = F("Hinterfeldweg");
        break;
    }
    case 145193:
    {
        returnValue = F("Hinterfenkenweg");
        break;
    }
    case 145194:
    {
        returnValue = F("Hinterfennenweg");
        break;
    }
    case 145195:
    {
        returnValue = F("Hinterfleck");
        break;
    }
    case 145196:
    {
        returnValue = F("Hinterfreundorf");
        break;
    }
    case 145197:
    {
        returnValue = F("Hinterfährstr.");
        break;
    }
    case 145198:
    {
        returnValue = F("Hintergarten");
        break;
    }
    case 145199:
    {
        returnValue = F("Hintergartenstr.");
        break;
    }
    case 145200:
    {
        returnValue = F("Hintergartenweg");
        break;
    }
    case 145201:
    {
        returnValue = F("Hintergasse");
        break;
    }
    case 145202:
    {
        returnValue = F("Hintergeiersberg");
        break;
    }
    case 145203:
    {
        returnValue = F("Hintergeiersberg / Fleckl");
        break;
    }
    case 145204:
    {
        returnValue = F("Hintergraben");
        break;
    }
    case 145205:
    {
        returnValue = F("Hintergrabenweg");
        break;
    }
    case 145206:
    {
        returnValue = F("Hintergrund");
        break;
    }
    case 145207:
    {
        returnValue = F("Hintergärten");
        break;
    }
    case 145208:
    {
        returnValue = F("Hintergärtenweg");
        break;
    }
    case 145209:
    {
        returnValue = F("Hinterhagener Str.");
        break;
    }
    case 145210:
    {
        returnValue = F("Hinterhagstr.");
        break;
    }
    case 145211:
    {
        returnValue = F("Hinterhaid");
        break;
    }
    case 145212:
    {
        returnValue = F("Hinterhainberg");
        break;
    }
    case 145213:
    {
        returnValue = F("Hinterhainer Weg");
        break;
    }
    case 145214:
    {
        returnValue = F("Hinterhalde");
        break;
    }
    case 145215:
    {
        returnValue = F("Hinterhartweg");
        break;
    }
    case 145216:
    {
        returnValue = F("Hinterhaslach");
        break;
    }
    case 145217:
    {
        returnValue = F("Hinterhaunried");
        break;
    }
    case 145218:
    {
        returnValue = F("Hinterhausen");
        break;
    }
    case 145219:
    {
        returnValue = F("Hinterhausener Str.");
        break;
    }
    case 145220:
    {
        returnValue = F("Hinterhausenstr.");
        break;
    }
    case 145221:
    {
        returnValue = F("Hinterhauser Str.");
        break;
    }
    case 145222:
    {
        returnValue = F("Hinterhauweg");
        break;
    }
    case 145223:
    {
        returnValue = F("Hinterheimat");
        break;
    }
    case 145224:
    {
        returnValue = F("Hinterhermsdorfer Str.");
        break;
    }
    case 145225:
    {
        returnValue = F("Hinterheubacherweg");
        break;
    }
    case 145226:
    {
        returnValue = F("Hinterheubronn");
        break;
    }
    case 145227:
    {
        returnValue = F("Hinterheuweiler");
        break;
    }
    case 145228:
    {
        returnValue = F("Hinterhochstein");
        break;
    }
    case 145229:
    {
        returnValue = F("Hinterhof");
        break;
    }
    case 145230:
    {
        returnValue = F("Hinterhofen");
        break;
    }
    case 145231:
    {
        returnValue = F("Hinterhofener Str.");
        break;
    }
    case 145232:
    {
        returnValue = F("Hinterhofstr.");
        break;
    }
    case 145233:
    {
        returnValue = F("Hinterhofweg Süden");
        break;
    }
    case 145234:
    {
        returnValue = F("Hinterhohl");
        break;
    }
    case 145235:
    {
        returnValue = F("Hinterholz");
        break;
    }
    case 145236:
    {
        returnValue = F("Hinterholzen");
        break;
    }
    case 145237:
    {
        returnValue = F("Hinterholzhausen");
        break;
    }
    case 145238:
    {
        returnValue = F("Hinterholzweg");
        break;
    }
    case 145239:
    {
        returnValue = F("Hinterhomburgweg");
        break;
    }
    case 145240:
    {
        returnValue = F("Hinterhufe");
        break;
    }
    case 145241:
    {
        returnValue = F("Hinterhäuser");
        break;
    }
    case 145242:
    {
        returnValue = F("Hinterhäuserstr.");
        break;
    }
    case 145243:
    {
        returnValue = F("Hinterhöfen");
        break;
    }
    case 145244:
    {
        returnValue = F("Hinterhölzer Höfe");
        break;
    }
    case 145245:
    {
        returnValue = F("Hinterhölzleweg");
        break;
    }
    case 145246:
    {
        returnValue = F("Hinterhönisch");
        break;
    }
    case 145247:
    {
        returnValue = F("Hinterhörn");
        break;
    }
    case 145248:
    {
        returnValue = F("Hinterhügel");
        break;
    }
    case 145249:
    {
        returnValue = F("Hinterjellinghausen");
        break;
    }
    case 145250:
    {
        returnValue = F("Hinterkamp");
        break;
    }
    case 145251:
    {
        returnValue = F("Hinterkampstr.");
        break;
    }
    case 145252:
    {
        returnValue = F("Hinterkatenweg");
        break;
    }
    case 145253:
    {
        returnValue = F("Hinterkehr");
        break;
    }
    case 145254:
    {
        returnValue = F("Hinterkietz");
        break;
    }
    case 145255:
    {
        returnValue = F("Hinterkirch");
        break;
    }
    case 145256:
    {
        returnValue = F("Hinterkirchen");
        break;
    }
    case 145257:
    {
        returnValue = F("Hinterkirchweg");
        break;
    }
    case 145258:
    {
        returnValue = F("Hinterkreith");
        break;
    }
    case 145259:
    {
        returnValue = F("Hinterkreuth");
        break;
    }
    case 145260:
    {
        returnValue = F("Hinterlanddamm");
        break;
    }
    case 145261:
    {
        returnValue = F("Hinterlandstr.");
        break;
    }
    case 145262:
    {
        returnValue = F("Hinterlandswaldstr.");
        break;
    }
    case 145263:
    {
        returnValue = F("Hinterlangenbach");
        break;
    }
    case 145264:
    {
        returnValue = F("Hinterlehen");
        break;
    }
    case 145265:
    {
        returnValue = F("Hinterlehenstr.");
        break;
    }
    case 145266:
    {
        returnValue = F("Hinterlehenweg");
        break;
    }
    case 145267:
    {
        returnValue = F("Hinterleiten");
        break;
    }
    case 145268:
    {
        returnValue = F("Hinterlinger Weg");
        break;
    }
    case 145269:
    {
        returnValue = F("Hinterlintaler Str.");
        break;
    }
    case 145270:
    {
        returnValue = F("Hinterlohn");
        break;
    }
    case 145271:
    {
        returnValue = F("Hinterlohne");
        break;
    }
    case 145272:
    {
        returnValue = F("Hinterloogsweg");
        break;
    }
    case 145273:
    {
        returnValue = F("Hinterlorscheid");
        break;
    }
    case 145274:
    {
        returnValue = F("Hinterm Altdorf");
        break;
    }
    case 145275:
    {
        returnValue = F("Hinterm Alten Kamp");
        break;
    }
    case 145276:
    {
        returnValue = F("Hinterm Alten Schloss");
        break;
    }
    case 145277:
    {
        returnValue = F("Hinterm Alten Schloß");
        break;
    }
    case 145278:
    {
        returnValue = F("Hinterm Bach");
        break;
    }
    case 145279:
    {
        returnValue = F("Hinterm Backes");
        break;
    }
    case 145280:
    {
        returnValue = F("Hinterm Backhaus");
        break;
    }
    case 145281:
    {
        returnValue = F("Hinterm Backofen");
        break;
    }
    case 145282:
    {
        returnValue = F("Hinterm Bahnhof");
        break;
    }
    case 145283:
    {
        returnValue = F("Hinterm Bargen");
        break;
    }
    case 145284:
    {
        returnValue = F("Hinterm Beil");
        break;
    }
    case 145285:
    {
        returnValue = F("Hinterm Berg");
        break;
    }
    case 145286:
    {
        returnValue = F("Hinterm Berg links");
        break;
    }
    case 145287:
    {
        returnValue = F("Hinterm Berg rechts");
        break;
    }
    case 145288:
    {
        returnValue = F("Hinterm Berge");
        break;
    }
    case 145289:
    {
        returnValue = F("Hinterm Bichl");
        break;
    }
    case 145290:
    {
        returnValue = F("Hinterm Bild");
        break;
    }
    case 145291:
    {
        returnValue = F("Hinterm Blocksberg");
        break;
    }
    case 145292:
    {
        returnValue = F("Hinterm Bogen");
        break;
    }
    case 145293:
    {
        returnValue = F("Hinterm Born");
        break;
    }
    case 145294:
    {
        returnValue = F("Hinterm Bornbusch");
        break;
    }
    case 145295:
    {
        returnValue = F("Hinterm Brauhaus");
        break;
    }
    case 145296:
    {
        returnValue = F("Hinterm Brink");
        break;
    }
    case 145297:
    {
        returnValue = F("Hinterm Bruch");
        break;
    }
    case 145298:
    {
        returnValue = F("Hinterm Brückelchen");
        break;
    }
    case 145299:
    {
        returnValue = F("Hinterm Brüggefeld");
        break;
    }
    case 145300:
    {
        returnValue = F("Hinterm Brümmer");
        break;
    }
    case 145301:
    {
        returnValue = F("Hinterm Burggarten");
        break;
    }
    case 145302:
    {
        returnValue = F("Hinterm Burggraben");
        break;
    }
    case 145303:
    {
        returnValue = F("Hinterm Busch");
        break;
    }
    case 145304:
    {
        returnValue = F("Hinterm Busche");
        break;
    }
    case 145305:
    {
        returnValue = F("Hinterm Buschhof");
        break;
    }
    case 145306:
    {
        returnValue = F("Hinterm Böge");
        break;
    }
    case 145307:
    {
        returnValue = F("Hinterm Börnchen");
        break;
    }
    case 145308:
    {
        returnValue = F("Hinterm Bürgelchen");
        break;
    }
    case 145309:
    {
        returnValue = F("Hinterm Bürgerhaus");
        break;
    }
    case 145310:
    {
        returnValue = F("Hinterm Calvarienberg");
        break;
    }
    case 145311:
    {
        returnValue = F("Hinterm Dahle");
        break;
    }
    case 145312:
    {
        returnValue = F("Hinterm Damm");
        break;
    }
    case 145313:
    {
        returnValue = F("Hinterm Deich");
        break;
    }
    case 145314:
    {
        returnValue = F("Hinterm Dom");
        break;
    }
    case 145315:
    {
        returnValue = F("Hinterm Dorf");
        break;
    }
    case 145316:
    {
        returnValue = F("Hinterm Dorfe");
        break;
    }
    case 145317:
    {
        returnValue = F("Hinterm Dorfzaun");
        break;
    }
    case 145318:
    {
        returnValue = F("Hinterm Eckerkamp");
        break;
    }
    case 145319:
    {
        returnValue = F("Hinterm Ehrlich");
        break;
    }
    case 145320:
    {
        returnValue = F("Hinterm Eichental");
        break;
    }
    case 145321:
    {
        returnValue = F("Hinterm Eichhof");
        break;
    }
    case 145322:
    {
        returnValue = F("Hinterm Eisenstein");
        break;
    }
    case 145323:
    {
        returnValue = F("Hinterm Ellerbruch");
        break;
    }
    case 145324:
    {
        returnValue = F("Hinterm Engel");
        break;
    }
    case 145325:
    {
        returnValue = F("Hinterm Esch");
        break;
    }
    case 145326:
    {
        returnValue = F("Hinterm Esel");
        break;
    }
    case 145327:
    {
        returnValue = F("Hinterm Eulenring");
        break;
    }
    case 145328:
    {
        returnValue = F("Hinterm Eulensee");
        break;
    }
    case 145329:
    {
        returnValue = F("Hinterm Fang");
        break;
    }
    case 145330:
    {
        returnValue = F("Hinterm Fehn");
        break;
    }
    case 145331:
    {
        returnValue = F("Hinterm Feld");
        break;
    }
    case 145332:
    {
        returnValue = F("Hinterm Felde");
        break;
    }
    case 145333:
    {
        returnValue = F("Hinterm Fleck");
        break;
    }
    case 145334:
    {
        returnValue = F("Hinterm Flecken");
        break;
    }
    case 145335:
    {
        returnValue = F("Hinterm Fleer");
        break;
    }
    case 145336:
    {
        returnValue = F("Hinterm Forde");
        break;
    }
    case 145337:
    {
        returnValue = F("Hinterm Forsthaus");
        break;
    }
    case 145338:
    {
        returnValue = F("Hinterm Friedhof");
        break;
    }
    case 145339:
    {
        returnValue = F("Hinterm Friedhpf");
        break;
    }
    case 145340:
    {
        returnValue = F("Hinterm Fuhren");
        break;
    }
    case 145341:
    {
        returnValue = F("Hinterm Galgenberg");
        break;
    }
    case 145342:
    {
        returnValue = F("Hinterm Gallberg");
        break;
    }
    case 145343:
    {
        returnValue = F("Hinterm Garten");
        break;
    }
    case 145344:
    {
        returnValue = F("Hinterm Gartenheim");
        break;
    }
    case 145345:
    {
        returnValue = F("Hinterm Gehege");
        break;
    }
    case 145346:
    {
        returnValue = F("Hinterm Geiststift");
        break;
    }
    case 145347:
    {
        returnValue = F("Hinterm Gericht");
        break;
    }
    case 145348:
    {
        returnValue = F("Hinterm Gnießen");
        break;
    }
    case 145349:
    {
        returnValue = F("Hinterm Gottesacker");
        break;
    }
    case 145350:
    {
        returnValue = F("Hinterm Graben");
        break;
    }
    case 145351:
    {
        returnValue = F("Hinterm Gradierwerk");
        break;
    }
    case 145352:
    {
        returnValue = F("Hinterm Großen Feld");
        break;
    }
    case 145353:
    {
        returnValue = F("Hinterm Gut");
        break;
    }
    case 145354:
    {
        returnValue = F("Hinterm Gürenberg");
        break;
    }
    case 145355:
    {
        returnValue = F("Hinterm Haag");
        break;
    }
    case 145356:
    {
        returnValue = F("Hinterm Hag");
        break;
    }
    case 145357:
    {
        returnValue = F("Hinterm Hagedorn");
        break;
    }
    case 145358:
    {
        returnValue = F("Hinterm Hagen");
        break;
    }
    case 145359:
    {
        returnValue = F("Hinterm Hahn");
        break;
    }
    case 145360:
    {
        returnValue = F("Hinterm Hain");
        break;
    }
    case 145361:
    {
        returnValue = F("Hinterm Hainberg");
        break;
    }
    case 145362:
    {
        returnValue = F("Hinterm Hammer");
        break;
    }
    case 145363:
    {
        returnValue = F("Hinterm Hanfsack");
        break;
    }
    case 145364:
    {
        returnValue = F("Hinterm Hassel");
        break;
    }
    case 145365:
    {
        returnValue = F("Hinterm Haus");
        break;
    }
    case 145366:
    {
        returnValue = F("Hinterm Heckenbeck");
        break;
    }
    case 145367:
    {
        returnValue = F("Hinterm Hedwigschacht");
        break;
    }
    case 145368:
    {
        returnValue = F("Hinterm Heleneschacht");
        break;
    }
    case 145369:
    {
        returnValue = F("Hinterm Herrn");
        break;
    }
    case 145370:
    {
        returnValue = F("Hinterm Hof");
        break;
    }
    case 145371:
    {
        returnValue = F("Hinterm Hofanger");
        break;
    }
    case 145372:
    {
        returnValue = F("Hinterm Hofe");
        break;
    }
    case 145373:
    {
        returnValue = F("Hinterm Hollen");
        break;
    }
    case 145374:
    {
        returnValue = F("Hinterm Holler");
        break;
    }
    case 145375:
    {
        returnValue = F("Hinterm Hollerbusch");
        break;
    }
    case 145376:
    {
        returnValue = F("Hinterm Hollsand");
        break;
    }
    case 145377:
    {
        returnValue = F("Hinterm Holz");
        break;
    }
    case 145378:
    {
        returnValue = F("Hinterm Holze");
        break;
    }
    case 145379:
    {
        returnValue = F("Hinterm Horn");
        break;
    }
    case 145380:
    {
        returnValue = F("Hinterm Horstberg");
        break;
    }
    case 145381:
    {
        returnValue = F("Hinterm Hospital");
        break;
    }
    case 145382:
    {
        returnValue = F("Hinterm Höfle");
        break;
    }
    case 145383:
    {
        returnValue = F("Hinterm Jakobsdorf");
        break;
    }
    case 145384:
    {
        returnValue = F("Hinterm Johannenhofe");
        break;
    }
    case 145385:
    {
        returnValue = F("Hinterm Johannishof");
        break;
    }
    case 145386:
    {
        returnValue = F("Hinterm Junkernhof");
        break;
    }
    case 145387:
    {
        returnValue = F("Hinterm Jäger");
        break;
    }
    case 145388:
    {
        returnValue = F("Hinterm Jägerhaus");
        break;
    }
    case 145389:
    {
        returnValue = F("Hinterm Jögenmoor");
        break;
    }
    case 145390:
    {
        returnValue = F("Hinterm Kaben");
        break;
    }
    case 145391:
    {
        returnValue = F("Hinterm Kamp");
        break;
    }
    case 145392:
    {
        returnValue = F("Hinterm Kampe");
        break;
    }
    case 145393:
    {
        returnValue = F("Hinterm Kirchfeld");
        break;
    }
    case 145394:
    {
        returnValue = F("Hinterm Kirchhof");
        break;
    }
    case 145395:
    {
        returnValue = F("Hinterm Klever Weg");
        break;
    }
    case 145396:
    {
        returnValue = F("Hinterm Knick");
        break;
    }
    case 145397:
    {
        returnValue = F("Hinterm Kohlhof");
        break;
    }
    case 145398:
    {
        returnValue = F("Hinterm Kreuzbrunnen");
        break;
    }
    case 145399:
    {
        returnValue = F("Hinterm Kreuzweg");
        break;
    }
    case 145400:
    {
        returnValue = F("Hinterm Kröpelbach");
        break;
    }
    case 145401:
    {
        returnValue = F("Hinterm Kulk");
        break;
    }
    case 145402:
    {
        returnValue = F("Hinterm Köppel");
        break;
    }
    case 145403:
    {
        returnValue = F("Hinterm Lande");
        break;
    }
    case 145404:
    {
        returnValue = F("Hinterm Liesch");
        break;
    }
    case 145405:
    {
        returnValue = F("Hinterm Ließ");
        break;
    }
    case 145406:
    {
        returnValue = F("Hinterm Lindenhof");
        break;
    }
    case 145407:
    {
        returnValue = F("Hinterm Linsenberg");
        break;
    }
    case 145408:
    {
        returnValue = F("Hinterm Mannenberg");
        break;
    }
    case 145409:
    {
        returnValue = F("Hinterm Marstall");
        break;
    }
    case 145410:
    {
        returnValue = F("Hinterm Mühldorf");
        break;
    }
    case 145411:
    {
        returnValue = F("Hinterm Mühlenbach");
        break;
    }
    case 145412:
    {
        returnValue = F("Hinterm Mühlenberg");
        break;
    }
    case 145413:
    {
        returnValue = F("Hinterm Neuen Brunnen");
        break;
    }
    case 145414:
    {
        returnValue = F("Hinterm Neuland");
        break;
    }
    case 145415:
    {
        returnValue = F("Hinterm Nikolausbrunnen");
        break;
    }
    case 145416:
    {
        returnValue = F("Hinterm Nordfeld");
        break;
    }
    case 145417:
    {
        returnValue = F("Hinterm Ort");
        break;
    }
    case 145418:
    {
        returnValue = F("Hinterm Osterhagen");
        break;
    }
    case 145419:
    {
        returnValue = F("Hinterm Park");
        break;
    }
    case 145420:
    {
        returnValue = F("Hinterm Pfarrgarten");
        break;
    }
    case 145421:
    {
        returnValue = F("Hinterm Pfarrhaus");
        break;
    }
    case 145422:
    {
        returnValue = F("Hinterm Pulvermaar");
        break;
    }
    case 145423:
    {
        returnValue = F("Hinterm Rain");
        break;
    }
    case 145424:
    {
        returnValue = F("Hinterm Rasen");
        break;
    }
    case 145425:
    {
        returnValue = F("Hinterm Rathaus");
        break;
    }
    case 145426:
    {
        returnValue = F("Hinterm Rehmel");
        break;
    }
    case 145427:
    {
        returnValue = F("Hinterm Reiherholz");
        break;
    }
    case 145428:
    {
        returnValue = F("Hinterm Rembart");
        break;
    }
    case 145429:
    {
        returnValue = F("Hinterm Rhaden");
        break;
    }
    case 145430:
    {
        returnValue = F("Hinterm Ringau");
        break;
    }
    case 145431:
    {
        returnValue = F("Hinterm Rott");
        break;
    }
    case 145432:
    {
        returnValue = F("Hinterm Rössle");
        break;
    }
    case 145433:
    {
        returnValue = F("Hinterm Saal");
        break;
    }
    case 145434:
    {
        returnValue = F("Hinterm Sand");
        break;
    }
    case 145435:
    {
        returnValue = F("Hinterm Sandstich");
        break;
    }
    case 145436:
    {
        returnValue = F("Hinterm Scheibenkamp");
        break;
    }
    case 145437:
    {
        returnValue = F("Hinterm Scheuerchen");
        break;
    }
    case 145438:
    {
        returnValue = F("Hinterm Schiff");
        break;
    }
    case 145439:
    {
        returnValue = F("Hinterm Schild");
        break;
    }
    case 145440:
    {
        returnValue = F("Hinterm Schilf");
        break;
    }
    case 145441:
    {
        returnValue = F("Hinterm Schlag");
        break;
    }
    case 145442:
    {
        returnValue = F("Hinterm Schlohe");
        break;
    }
    case 145443:
    {
        returnValue = F("Hinterm Schloss");
        break;
    }
    case 145444:
    {
        returnValue = F("Hinterm Schloß");
        break;
    }
    case 145445:
    {
        returnValue = F("Hinterm Schloßgarten");
        break;
    }
    case 145446:
    {
        returnValue = F("Hinterm Schlössle");
        break;
    }
    case 145447:
    {
        returnValue = F("Hinterm Schmiedeteich");
        break;
    }
    case 145448:
    {
        returnValue = F("Hinterm Schruv");
        break;
    }
    case 145449:
    {
        returnValue = F("Hinterm Schönschede");
        break;
    }
    case 145450:
    {
        returnValue = F("Hinterm See");
        break;
    }
    case 145451:
    {
        returnValue = F("Hinterm Seeholz");
        break;
    }
    case 145452:
    {
        returnValue = F("Hinterm Segelskamp");
        break;
    }
    case 145453:
    {
        returnValue = F("Hinterm Siegen");
        break;
    }
    case 145454:
    {
        returnValue = F("Hinterm Sportplatz");
        break;
    }
    case 145455:
    {
        returnValue = F("Hinterm Stege");
        break;
    }
    case 145456:
    {
        returnValue = F("Hinterm Stein");
        break;
    }
    case 145457:
    {
        returnValue = F("Hinterm Steingraben");
        break;
    }
    case 145458:
    {
        returnValue = F("Hinterm Stiegel");
        break;
    }
    case 145459:
    {
        returnValue = F("Hinterm Strauch");
        break;
    }
    case 145460:
    {
        returnValue = F("Hinterm Tannenkamp");
        break;
    }
    case 145461:
    {
        returnValue = F("Hinterm Tannenwald");
        break;
    }
    case 145462:
    {
        returnValue = F("Hinterm Teich");
        break;
    }
    case 145463:
    {
        returnValue = F("Hinterm Thie");
        break;
    }
    case 145464:
    {
        returnValue = F("Hinterm Tor");
        break;
    }
    case 145465:
    {
        returnValue = F("Hinterm Torfwerk");
        break;
    }
    case 145466:
    {
        returnValue = F("Hinterm Turm");
        break;
    }
    case 145467:
    {
        returnValue = F("Hinterm Vehn");
        break;
    }
    case 145468:
    {
        returnValue = F("Hinterm Viechtach");
        break;
    }
    case 145469:
    {
        returnValue = F("Hinterm Vogelherd");
        break;
    }
    case 145470:
    {
        returnValue = F("Hinterm Vossberg");
        break;
    }
    case 145471:
    {
        returnValue = F("Hinterm Wachberg");
        break;
    }
    case 145472:
    {
        returnValue = F("Hinterm Waldcasino");
        break;
    }
    case 145473:
    {
        returnValue = F("Hinterm Wall");
        break;
    }
    case 145474:
    {
        returnValue = F("Hinterm Wasser");
        break;
    }
    case 145475:
    {
        returnValue = F("Hinterm Wege");
        break;
    }
    case 145476:
    {
        returnValue = F("Hinterm Wehr");
        break;
    }
    case 145477:
    {
        returnValue = F("Hinterm Wieh");
        break;
    }
    case 145478:
    {
        returnValue = F("Hinterm Wirt");
        break;
    }
    case 145479:
    {
        returnValue = F("Hinterm Zaun");
        break;
    }
    case 145480:
    {
        returnValue = F("Hinterm Zehnes");
        break;
    }
    case 145481:
    {
        returnValue = F("Hinterm Ziel");
        break;
    }
    case 145482:
    {
        returnValue = F("Hinterm Zollbrett");
        break;
    }
    case 145483:
    {
        returnValue = F("Hinterm Zuschlag");
        break;
    }
    case 145484:
    {
        returnValue = F("Hinterm Zwinger");
        break;
    }
    case 145485:
    {
        returnValue = F("Hinterm alten Schloss");
        break;
    }
    case 145486:
    {
        returnValue = F("Hinterm kleinen Kamp");
        break;
    }
    case 145487:
    {
        returnValue = F("Hinterm kleinen Knick");
        break;
    }
    case 145488:
    {
        returnValue = F("Hinterm stolzen Hag");
        break;
    }
    case 145489:
    {
        returnValue = F("Hintermark");
        break;
    }
    case 145490:
    {
        returnValue = F("Hintermarkt");
        break;
    }
    case 145491:
    {
        returnValue = F("Hintermatt");
        break;
    }
    case 145492:
    {
        returnValue = F("Hintermatte");
        break;
    }
    case 145493:
    {
        returnValue = F("Hintermattweg");
        break;
    }
    case 145494:
    {
        returnValue = F("Hintermauer");
        break;
    }
    case 145495:
    {
        returnValue = F("Hintermauergasse");
        break;
    }
    case 145496:
    {
        returnValue = F("Hintermehring");
        break;
    }
    case 145497:
    {
        returnValue = F("Hintermeilinger Str.");
        break;
    }
    case 145498:
    {
        returnValue = F("Hintermurrhärle");
        break;
    }
    case 145499:
    {
        returnValue = F("Hintermüdich");
        break;
    }
    case 145500:
    {
        returnValue = F("Hintermühle");
        break;
    }
    case 145501:
    {
        returnValue = F("Hintermühlweg");
        break;
    }
    case 145502:
    {
        returnValue = F("Hintern Born");
        break;
    }
    case 145503:
    {
        returnValue = F("Hintern Brüdern");
        break;
    }
    case 145504:
    {
        returnValue = F("Hintern Ellern");
        break;
    }
    case 145505:
    {
        returnValue = F("Hintern Hecken");
        break;
    }
    case 145506:
    {
        returnValue = F("Hintern Kahn");
        break;
    }
    case 145507:
    {
        returnValue = F("Hintern Kämpen");
        break;
    }
    case 145508:
    {
        returnValue = F("Hintern Tannen");
        break;
    }
    case 145509:
    {
        returnValue = F("Hinternaher Str.");
        break;
    }
    case 145510:
    {
        returnValue = F("Hinterneufeldweg");
        break;
    }
    case 145511:
    {
        returnValue = F("Hinterohlsbach");
        break;
    }
    case 145512:
    {
        returnValue = F("Hinterpforte");
        break;
    }
    case 145513:
    {
        returnValue = F("Hinterplatten");
        break;
    }
    case 145514:
    {
        returnValue = F("Hinterreihe");
        break;
    }
    case 145515:
    {
        returnValue = F("Hinterreute");
        break;
    }
    case 145516:
    {
        returnValue = F("Hinterriedern");
        break;
    }
    case 145517:
    {
        returnValue = F("Hinterriedstr.");
        break;
    }
    case 145518:
    {
        returnValue = F("Hinterriedweg");
        break;
    }
    case 145519:
    {
        returnValue = F("Hinterrohrbach");
        break;
    }
    case 145520:
    {
        returnValue = F("Hinterruthen");
        break;
    }
    case 145521:
    {
        returnValue = F("Hinters Feldle");
        break;
    }
    case 145522:
    {
        returnValue = F("Hinters-Alte-Vogts");
        break;
    }
    case 145523:
    {
        returnValue = F("Hinters-Fritzen-Haus");
        break;
    }
    case 145524:
    {
        returnValue = F("Hinters-Scharten-Haus");
        break;
    }
    case 145525:
    {
        returnValue = F("Hintersaamen");
        break;
    }
    case 145526:
    {
        returnValue = F("Hinterschönauer Weg");
        break;
    }
    case 145527:
    {
        returnValue = F("Hinterschützenbach");
        break;
    }
    case 145528:
    {
        returnValue = F("Hinterseer Str.");
        break;
    }
    case 145529:
    {
        returnValue = F("Hintersehen");
        break;
    }
    case 145530:
    {
        returnValue = F("Hinterseiffen");
        break;
    }
    case 145531:
    {
        returnValue = F("Hinterskirchen");
        break;
    }
    case 145532:
    {
        returnValue = F("Hinterskirchener Str.");
        break;
    }
    case 145533:
    {
        returnValue = F("Hinterstadt");
        break;
    }
    case 145534:
    {
        returnValue = F("Hinterste Berg");
        break;
    }
    case 145535:
    {
        returnValue = F("Hinterste Koppel");
        break;
    }
    case 145536:
    {
        returnValue = F("Hinterste Mühle");
        break;
    }
    case 145537:
    {
        returnValue = F("Hinterste Riede");
        break;
    }
    case 145538:
    {
        returnValue = F("Hinterste Röth (Die Reed)");
        break;
    }
    case 145539:
    {
        returnValue = F("Hinterste Str.");
        break;
    }
    case 145540:
    {
        returnValue = F("Hinterste Trift");
        break;
    }
    case 145541:
    {
        returnValue = F("Hinterste Wache");
        break;
    }
    case 145542:
    {
        returnValue = F("Hintersteig");
        break;
    }
    case 145543:
    {
        returnValue = F("Hintersteimel");
        break;
    }
    case 145544:
    {
        returnValue = F("Hintersteinauer Str.");
        break;
    }
    case 145545:
    {
        returnValue = F("Hintersteinbach");
        break;
    }
    case 145546:
    {
        returnValue = F("Hintersteiner Str.");
        break;
    }
    case 145547:
    {
        returnValue = F("Hinterstellberg");
        break;
    }
    case 145548:
    {
        returnValue = F("Hintersten Büchel");
        break;
    }
    case 145549:
    {
        returnValue = F("Hinterster Flaarweg");
        break;
    }
    case 145550:
    {
        returnValue = F("Hinterster Graben");
        break;
    }
    case 145551:
    {
        returnValue = F("Hinterster Heideweg");
        break;
    }
    case 145552:
    {
        returnValue = F("Hinterster Kämpen");
        break;
    }
    case 145553:
    {
        returnValue = F("Hinterstr.");
        break;
    }
    case 145554:
    {
        returnValue = F("Hinterstr. Neschow");
        break;
    }
    case 145555:
    {
        returnValue = F("Hinterstr. Stove");
        break;
    }
    case 145556:
    {
        returnValue = F("Hinterstöcken");
        break;
    }
    case 145557:
    {
        returnValue = F("Hinterstöppel");
        break;
    }
    case 145558:
    {
        returnValue = F("Hintersulgen");
        break;
    }
    case 145559:
    {
        returnValue = F("Hintertal");
        break;
    }
    case 145560:
    {
        returnValue = F("Hintertalstr.");
        break;
    }
    case 145561:
    {
        returnValue = F("Hinterthal");
        break;
    }
    case 145562:
    {
        returnValue = F("Hintertheener Weg");
        break;
    }
    case 145563:
    {
        returnValue = F("Hintertor");
        break;
    }
    case 145564:
    {
        returnValue = F("Hintertorweinbergweg");
        break;
    }
    case 145565:
    {
        returnValue = F("Hinterwaldallee");
        break;
    }
    case 145566:
    {
        returnValue = F("Hinterwaldkopf");
        break;
    }
    case 145567:
    {
        returnValue = F("Hinterwaldweg");
        break;
    }
    case 145568:
    {
        returnValue = F("Hinterwall");
        break;
    }
    case 145569:
    {
        returnValue = F("Hinterweg");
        break;
    }
    case 145570:
    {
        returnValue = F("Hinterweide");
        break;
    }
    case 145571:
    {
        returnValue = F("Hinterweiden");
        break;
    }
    case 145572:
    {
        returnValue = F("Hinterweidenau");
        break;
    }
    case 145573:
    {
        returnValue = F("Hinterweiler Str.");
        break;
    }
    case 145574:
    {
        returnValue = F("Hinterweilerstr.");
        break;
    }
    case 145575:
    {
        returnValue = F("Hinterwestermurr");
        break;
    }
    case 145576:
    {
        returnValue = F("Hinterwiese");
        break;
    }
    case 145577:
    {
        returnValue = F("Hinterwiesen");
        break;
    }
    case 145578:
    {
        returnValue = F("Hinterwiesenstr.");
        break;
    }
    case 145579:
    {
        returnValue = F("Hinterwiesenweg");
        break;
    }
    case 145580:
    {
        returnValue = F("Hinterwiesstr.");
        break;
    }
    case 145581:
    {
        returnValue = F("Hinterwildbodenweg");
        break;
    }
    case 145582:
    {
        returnValue = F("Hinterwinklerstr.");
        break;
    }
    case 145583:
    {
        returnValue = F("Hinterwollaberg");
        break;
    }
    case 145584:
    {
        returnValue = F("Hinterwurth");
        break;
    }
    case 145585:
    {
        returnValue = F("Hinterwälderweg");
        break;
    }
    case 145586:
    {
        returnValue = F("Hinterziel");
        break;
    }
    case 145587:
    {
        returnValue = F("Hinteräcker");
        break;
    }
    case 145588:
    {
        returnValue = F("Hinterödberg");
        break;
    }
    case 145589:
    {
        returnValue = F("Hintsberg");
        break;
    }
    case 145590:
    {
        returnValue = F("Hintsberger Str.");
        break;
    }
    case 145591:
    {
        returnValue = F("Hintzendorf-Mitteldorf");
        break;
    }
    case 145592:
    {
        returnValue = F("Hintzendorf-Stellenfelde");
        break;
    }
    case 145593:
    {
        returnValue = F("Hintzendorfer Damm");
        break;
    }
    case 145594:
    {
        returnValue = F("Hintzes-Türle");
        break;
    }
    case 145595:
    {
        returnValue = F("Hintzestr.");
        break;
    }
    case 145596:
    {
        returnValue = F("Hinzbach");
        break;
    }
    case 145597:
    {
        returnValue = F("Hinzdorfer Dorfstr.");
        break;
    }
    case 145598:
    {
        returnValue = F("Hinzehof");
        break;
    }
    case 145599:
    {
        returnValue = F("Hinzelbergstr.");
        break;
    }
    case 145600:
    {
        returnValue = F("Hinzenbergstr.");
        break;
    }
    case 145601:
    {
        returnValue = F("Hinzenhof");
        break;
    }
    case 145602:
    {
        returnValue = F("Hinzenkamp");
        break;
    }
    case 145603:
    {
        returnValue = F("Hinzenredder");
        break;
    }
    case 145604:
    {
        returnValue = F("Hinzeplatz");
        break;
    }
    case 145605:
    {
        returnValue = F("Hinzergasse");
        break;
    }
    case 145606:
    {
        returnValue = F("Hinzerter Pfad");
        break;
    }
    case 145607:
    {
        returnValue = F("Hinzigbergstr.");
        break;
    }
    case 145608:
    {
        returnValue = F("Hinzinger Str.");
        break;
    }
    case 145609:
    {
        returnValue = F("Hinzingeröder Str.");
        break;
    }
    case 145610:
    {
        returnValue = F("Hinzistobler Str.");
        break;
    }
    case 145611:
    {
        returnValue = F("Hinznang");
        break;
    }
    case 145612:
    {
        returnValue = F("Hinznanger Str.");
        break;
    }
    case 145613:
    {
        returnValue = F("Hinzweg");
        break;
    }
    case 145614:
    {
        returnValue = F("Hinüber");
        break;
    }
    case 145615:
    {
        returnValue = F("Hinüberstr.");
        break;
    }
    case 145616:
    {
        returnValue = F("Hipfelsberger Str.");
        break;
    }
    case 145617:
    {
        returnValue = F("Hipfelwang");
        break;
    }
    case 145618:
    {
        returnValue = F("Hipfpfad");
        break;
    }
    case 145619:
    {
        returnValue = F("Hippberg");
        break;
    }
    case 145620:
    {
        returnValue = F("Hippbühlweg");
        break;
    }
    case 145621:
    {
        returnValue = F("Hippe-Grübel-Weg");
        break;
    }
    case 145622:
    {
        returnValue = F("Hippegasse");
        break;
    }
    case 145623:
    {
        returnValue = F("Hippelhangweg");
        break;
    }
    case 145624:
    {
        returnValue = F("Hippengasse");
        break;
    }
    case 145625:
    {
        returnValue = F("Hippenweg");
        break;
    }
    case 145626:
    {
        returnValue = F("Hippergasse");
        break;
    }
    case 145627:
    {
        returnValue = F("Hippergstr.");
        break;
    }
    case 145628:
    {
        returnValue = F("Hipperich");
        break;
    }
    case 145629:
    {
        returnValue = F("Hipperichweg");
        break;
    }
    case 145630:
    {
        returnValue = F("Hippersbach");
        break;
    }
    case 145631:
    {
        returnValue = F("Hipperstr.");
        break;
    }
    case 145632:
    {
        returnValue = F("Hipperweg");
        break;
    }
    case 145633:
    {
        returnValue = F("Hippocampus");
        break;
    }
    case 145634:
    {
        returnValue = F("Hippokratesweg");
        break;
    }
    case 145635:
    {
        returnValue = F("Hippolytusstr.");
        break;
    }
    case 145636:
    {
        returnValue = F("Hippolytweg");
        break;
    }
    case 145637:
    {
        returnValue = F("Hipslohwiesen");
        break;
    }
    case 145638:
    {
        returnValue = F("Hipstedter Str.");
        break;
    }
    case 145639:
    {
        returnValue = F("Hipstedter Weg");
        break;
    }
    case 145640:
    {
        returnValue = F("Hiratastr.");
        break;
    }
    case 145641:
    {
        returnValue = F("Hirberg");
        break;
    }
    case 145642:
    {
        returnValue = F("Hirbishofer Str.");
        break;
    }
    case 145643:
    {
        returnValue = F("Hirblinger Str.");
        break;
    }
    case 145644:
    {
        returnValue = F("Hirdensbach");
        break;
    }
    case 145645:
    {
        returnValue = F("Hirenbachstr.");
        break;
    }
    case 145646:
    {
        returnValue = F("Hirgenstr.");
        break;
    }
    case 145647:
    {
        returnValue = F("Hirkenweg");
        break;
    }
    case 145648:
    {
        returnValue = F("Hirla");
        break;
    }
    case 145649:
    {
        returnValue = F("Hirlingweg");
        break;
    }
    case 145650:
    {
        returnValue = F("Hirmerleiten");
        break;
    }
    case 145651:
    {
        returnValue = F("Hirmersbühl");
        break;
    }
    case 145652:
    {
        returnValue = F("Hirmgäßle");
        break;
    }
    case 145653:
    {
        returnValue = F("Hirnbeinstr.");
        break;
    }
    case 145654:
    {
        returnValue = F("Hirnbergweg");
        break;
    }
    case 145655:
    {
        returnValue = F("Hirnbühlstr.");
        break;
    }
    case 145656:
    {
        returnValue = F("Hirnerstr.");
        break;
    }
    case 145657:
    {
        returnValue = F("Hirnerweg");
        break;
    }
    case 145658:
    {
        returnValue = F("Hirngasse");
        break;
    }
    case 145659:
    {
        returnValue = F("Hirnhauweg");
        break;
    }
    case 145660:
    {
        returnValue = F("Hirnholzstr.");
        break;
    }
    case 145661:
    {
        returnValue = F("Hirnikopfweg");
        break;
    }
    case 145662:
    {
        returnValue = F("Hirningshütteweg");
        break;
    }
    case 145663:
    {
        returnValue = F("Hirniweg");
        break;
    }
    case 145664:
    {
        returnValue = F("Hirnsberg");
        break;
    }
    case 145665:
    {
        returnValue = F("Hirnsberger Str.");
        break;
    }
    case 145666:
    {
        returnValue = F("Hirnstetter Weg");
        break;
    }
    case 145667:
    {
        returnValue = F("Hirrlinger Mühlen");
        break;
    }
    case 145668:
    {
        returnValue = F("Hirrlinger Str.");
        break;
    }
    case 145669:
    {
        returnValue = F("Hirrweiler Weg");
        break;
    }
    case 145670:
    {
        returnValue = F("Hirsackerstr.");
        break;
    }
    case 145671:
    {
        returnValue = F("Hirsauer Str.");
        break;
    }
    case 145672:
    {
        returnValue = F("Hirsauer Sträßle");
        break;
    }
    case 145673:
    {
        returnValue = F("Hirsauer Weg");
        break;
    }
    case 145674:
    {
        returnValue = F("Hirsauer Wiesenweg");
        break;
    }
    case 145675:
    {
        returnValue = F("Hirsauerstr.");
        break;
    }
    case 145676:
    {
        returnValue = F("Hirsch");
        break;
    }
    case 145677:
    {
        returnValue = F("Hirsch / Fuchs");
        break;
    }
    case 145678:
    {
        returnValue = F("Hirsch / Fuchs / Hase");
        break;
    }
    case 145679:
    {
        returnValue = F("Hirsch / Igel");
        break;
    }
    case 145680:
    {
        returnValue = F("Hirsch Allee");
        break;
    }
    case 145681:
    {
        returnValue = F("Hirsch Geräumt");
        break;
    }
    case 145682:
    {
        returnValue = F("Hirsch-Geräumt");
        break;
    }
    case 145683:
    {
        returnValue = F("Hirsch-Schneise");
        break;
    }
    case 145684:
    {
        returnValue = F("Hirsch-Teichgrund");
        break;
    }
    case 145685:
    {
        returnValue = F("Hirschackerstr.");
        break;
    }
    case 145686:
    {
        returnValue = F("Hirschackerweg");
        break;
    }
    case 145687:
    {
        returnValue = F("Hirschaider Str.");
        break;
    }
    case 145688:
    {
        returnValue = F("Hirschalbstr.");
        break;
    }
    case 145689:
    {
        returnValue = F("Hirschallee");
        break;
    }
    case 145690:
    {
        returnValue = F("Hirschanger");
        break;
    }
    case 145691:
    {
        returnValue = F("Hirschar");
        break;
    }
    case 145692:
    {
        returnValue = F("Hirschau");
        break;
    }
    case 145693:
    {
        returnValue = F("Hirschauer Brücke");
        break;
    }
    case 145694:
    {
        returnValue = F("Hirschauer Str.");
        break;
    }
    case 145695:
    {
        returnValue = F("Hirschauer-Geräumt");
        break;
    }
    case 145696:
    {
        returnValue = F("Hirschauerstr.");
        break;
    }
    case 145697:
    {
        returnValue = F("Hirschauerwald");
        break;
    }
    case 145698:
    {
        returnValue = F("Hirschauerweg");
        break;
    }
    case 145699:
    {
        returnValue = F("Hirschaustr.");
        break;
    }
    case 145700:
    {
        returnValue = F("Hirschbach");
        break;
    }
    case 145701:
    {
        returnValue = F("Hirschbacher Dorfplatz");
        break;
    }
    case 145702:
    {
        returnValue = F("Hirschbacher Str.");
        break;
    }
    case 145703:
    {
        returnValue = F("Hirschbachmühle");
        break;
    }
    case 145704:
    {
        returnValue = F("Hirschbachstr.");
        break;
    }
    case 145705:
    {
        returnValue = F("Hirschbachtalweg");
        break;
    }
    case 145706:
    {
        returnValue = F("Hirschbachweg");
        break;
    }
    case 145707:
    {
        returnValue = F("Hirschbachwäldchen");
        break;
    }
    case 145708:
    {
        returnValue = F("Hirschbaumstr.");
        break;
    }
    case 145709:
    {
        returnValue = F("Hirschberg");
        break;
    }
    case 145710:
    {
        returnValue = F("Hirschberg Scharling (Rodelbahn)");
        break;
    }
    case 145711:
    {
        returnValue = F("Hirschberger Allee");
        break;
    }
    case 145712:
    {
        returnValue = F("Hirschberger Hof");
        break;
    }
    case 145713:
    {
        returnValue = F("Hirschberger Ring");
        break;
    }
    case 145714:
    {
        returnValue = F("Hirschberger Steg");
        break;
    }
    case 145715:
    {
        returnValue = F("Hirschberger Str.");
        break;
    }
    case 145716:
    {
        returnValue = F("Hirschberger Weg");
        break;
    }
    case 145717:
    {
        returnValue = F("Hirschbergerstr.");
        break;
    }
    case 145718:
    {
        returnValue = F("Hirschbergerweg");
        break;
    }
    case 145719:
    {
        returnValue = F("Hirschbergleinstr.");
        break;
    }
    case 145720:
    {
        returnValue = F("Hirschbergsiepen");
        break;
    }
    case 145721:
    {
        returnValue = F("Hirschbergstr.");
        break;
    }
    case 145722:
    {
        returnValue = F("Hirschbergteich");
        break;
    }
    case 145723:
    {
        returnValue = F("Hirschbergweg");
        break;
    }
    case 145724:
    {
        returnValue = F("Hirschbichlstr.");
        break;
    }
    case 145725:
    {
        returnValue = F("Hirschbichlweg");
        break;
    }
    case 145726:
    {
        returnValue = F("Hirschbinde");
        break;
    }
    case 145727:
    {
        returnValue = F("Hirschbogen");
        break;
    }
    case 145728:
    {
        returnValue = F("Hirschborner Hof");
        break;
    }
    case 145729:
    {
        returnValue = F("Hirschbornweg");
        break;
    }
    case 145730:
    {
        returnValue = F("Hirschbrink");
        break;
    }
    case 145731:
    {
        returnValue = F("Hirschbronn");
        break;
    }
    case 145732:
    {
        returnValue = F("Hirschbronner Str.");
        break;
    }
    case 145733:
    {
        returnValue = F("Hirschbruch");
        break;
    }
    case 145734:
    {
        returnValue = F("Hirschbrunftweg");
        break;
    }
    case 145735:
    {
        returnValue = F("Hirschbrunn");
        break;
    }
    case 145736:
    {
        returnValue = F("Hirschbrunnen-Geräumt");
        break;
    }
    case 145737:
    {
        returnValue = F("Hirschbrunnenplatz");
        break;
    }
    case 145738:
    {
        returnValue = F("Hirschbrunnenstr.");
        break;
    }
    case 145739:
    {
        returnValue = F("Hirschbrunnenweg");
        break;
    }
    case 145740:
    {
        returnValue = F("Hirschbrunner Str.");
        break;
    }
    case 145741:
    {
        returnValue = F("Hirschbrunnweg");
        break;
    }
    case 145742:
    {
        returnValue = F("Hirschbrücke");
        break;
    }
    case 145743:
    {
        returnValue = F("Hirschbrückenweg");
        break;
    }
    case 145744:
    {
        returnValue = F("Hirschbrünnelesweg");
        break;
    }
    case 145745:
    {
        returnValue = F("Hirschbuckelsträßle");
        break;
    }
    case 145746:
    {
        returnValue = F("Hirschbuckelweg");
        break;
    }
    case 145747:
    {
        returnValue = F("Hirschburg");
        break;
    }
    case 145748:
    {
        returnValue = F("Hirschburger Weg");
        break;
    }
    case 145749:
    {
        returnValue = F("Hirschbühl");
        break;
    }
    case 145750:
    {
        returnValue = F("Hirschbühlweg");
        break;
    }
    case 145751:
    {
        returnValue = F("Hirschdamm");
        break;
    }
    case 145752:
    {
        returnValue = F("Hirschdell");
        break;
    }
    case 145753:
    {
        returnValue = F("Hirschdobelweg");
        break;
    }
    case 145754:
    {
        returnValue = F("Hirschdorfer Str.");
        break;
    }
    case 145755:
    {
        returnValue = F("Hirscheckstr.");
        break;
    }
    case 145756:
    {
        returnValue = F("Hirschelpfad");
        break;
    }
    case 145757:
    {
        returnValue = F("Hirschenau");
        break;
    }
    case 145758:
    {
        returnValue = F("Hirschenberg");
        break;
    }
    case 145759:
    {
        returnValue = F("Hirschenbuckel");
        break;
    }
    case 145760:
    {
        returnValue = F("Hirschendorfer Str.");
        break;
    }
    case 145761:
    {
        returnValue = F("Hirschengasse");
        break;
    }
    case 145762:
    {
        returnValue = F("Hirschenhof");
        break;
    }
    case 145763:
    {
        returnValue = F("Hirschenholzstr.");
        break;
    }
    case 145764:
    {
        returnValue = F("Hirschenkreuther Str.");
        break;
    }
    case 145765:
    {
        returnValue = F("Hirschenrangen");
        break;
    }
    case 145766:
    {
        returnValue = F("Hirschensprung-Geräumt");
        break;
    }
    case 145767:
    {
        returnValue = F("Hirschensteinloipe");
        break;
    }
    case 145768:
    {
        returnValue = F("Hirschensteinstr.");
        break;
    }
    case 145769:
    {
        returnValue = F("Hirschensteinweg");
        break;
    }
    case 145770:
    {
        returnValue = F("Hirschenstr.");
        break;
    }
    case 145771:
    {
        returnValue = F("Hirschental");
        break;
    }
    case 145772:
    {
        returnValue = F("Hirschenweg");
        break;
    }
    case 145773:
    {
        returnValue = F("Hirschenzaun");
        break;
    }
    case 145774:
    {
        returnValue = F("Hirscheweg");
        break;
    }
    case 145775:
    {
        returnValue = F("Hirschfalzstr.");
        break;
    }
    case 145776:
    {
        returnValue = F("Hirschfalzweg");
        break;
    }
    case 145777:
    {
        returnValue = F("Hirschfeld");
        break;
    }
    case 145778:
    {
        returnValue = F("Hirschfelder Ring");
        break;
    }
    case 145779:
    {
        returnValue = F("Hirschfelder Str.");
        break;
    }
    case 145780:
    {
        returnValue = F("Hirschfelder Weg");
        break;
    }
    case 145781:
    {
        returnValue = F("Hirschfelderstr.");
        break;
    }
    case 145782:
    {
        returnValue = F("Hirschfelderweg");
        break;
    }
    case 145783:
    {
        returnValue = F("Hirschfeldpark");
        break;
    }
    case 145784:
    {
        returnValue = F("Hirschfeldstr.");
        break;
    }
    case 145785:
    {
        returnValue = F("Hirschfeldweg");
        break;
    }
    case 145786:
    {
        returnValue = F("Hirschfelsenweg");
        break;
    }
    case 145787:
    {
        returnValue = F("Hirschfährte");
        break;
    }
    case 145788:
    {
        returnValue = F("Hirschgang");
        break;
    }
    case 145789:
    {
        returnValue = F("Hirschgangweg");
        break;
    }
    case 145790:
    {
        returnValue = F("Hirschgarten");
        break;
    }
    case 145791:
    {
        returnValue = F("Hirschgartenring");
        break;
    }
    case 145792:
    {
        returnValue = F("Hirschgartenstr.");
        break;
    }
    case 145793:
    {
        returnValue = F("Hirschgartenweg");
        break;
    }
    case 145794:
    {
        returnValue = F("Hirschgasse");
        break;
    }
    case 145795:
    {
        returnValue = F("Hirschgatterweg");
        break;
    }
    case 145796:
    {
        returnValue = F("Hirschgehegeweg");
        break;
    }
    case 145797:
    {
        returnValue = F("Hirschgraben");
        break;
    }
    case 145798:
    {
        returnValue = F("Hirschgraslochweg");
        break;
    }
    case 145799:
    {
        returnValue = F("Hirschgrund");
        break;
    }
    case 145800:
    {
        returnValue = F("Hirschgrundbrücke");
        break;
    }
    case 145801:
    {
        returnValue = F("Hirschgrundstr.");
        break;
    }
    case 145802:
    {
        returnValue = F("Hirschgrundweg");
        break;
    }
    case 145803:
    {
        returnValue = F("Hirschgärten");
        break;
    }
    case 145804:
    {
        returnValue = F("Hirschgässle");
        break;
    }
    case 145805:
    {
        returnValue = F("Hirschgäßchen");
        break;
    }
    case 145806:
    {
        returnValue = F("Hirschhaldenweg");
        break;
    }
    case 145807:
    {
        returnValue = F("Hirschhaldestr.");
        break;
    }
    case 145808:
    {
        returnValue = F("Hirschhaldeweg");
        break;
    }
    case 145809:
    {
        returnValue = F("Hirschhamer Str.");
        break;
    }
    case 145810:
    {
        returnValue = F("Hirschhauerwald");
        break;
    }
    case 145811:
    {
        returnValue = F("Hirschhausen");
        break;
    }
    case 145812:
    {
        returnValue = F("Hirschhauweg");
        break;
    }
    case 145813:
    {
        returnValue = F("Hirschhof");
        break;
    }
    case 145814:
    {
        returnValue = F("Hirschholm");
        break;
    }
    case 145815:
    {
        returnValue = F("Hirschhorner Landstr.");
        break;
    }
    case 145816:
    {
        returnValue = F("Hirschhorner Str.");
        break;
    }
    case 145817:
    {
        returnValue = F("Hirschhorner Sträßel");
        break;
    }
    case 145818:
    {
        returnValue = F("Hirschhornerweg");
        break;
    }
    case 145819:
    {
        returnValue = F("Hirschhorngässchen");
        break;
    }
    case 145820:
    {
        returnValue = F("Hirschhornring");
        break;
    }
    case 145821:
    {
        returnValue = F("Hirschhornstr.");
        break;
    }
    case 145822:
    {
        returnValue = F("Hirschhorstschneise");
        break;
    }
    case 145823:
    {
        returnValue = F("Hirschhäuser Str.");
        break;
    }
    case 145824:
    {
        returnValue = F("Hirschhöf");
        break;
    }
    case 145825:
    {
        returnValue = F("Hirschhörnerweg");
        break;
    }
    case 145826:
    {
        returnValue = F("Hirschhüttenweg");
        break;
    }
    case 145827:
    {
        returnValue = F("Hirschkammweg");
        break;
    }
    case 145828:
    {
        returnValue = F("Hirschkamp");
        break;
    }
    case 145829:
    {
        returnValue = F("Hirschkellerstr.");
        break;
    }
    case 145830:
    {
        returnValue = F("Hirschkellerweg");
        break;
    }
    case 145831:
    {
        returnValue = F("Hirschkofen");
        break;
    }
    case 145832:
    {
        returnValue = F("Hirschkopfbrücke");
        break;
    }
    case 145833:
    {
        returnValue = F("Hirschkopfstr.");
        break;
    }
    case 145834:
    {
        returnValue = F("Hirschkopfweg");
        break;
    }
    case 145835:
    {
        returnValue = F("Hirschkoppel");
        break;
    }
    case 145836:
    {
        returnValue = F("Hirschkrug");
        break;
    }
    case 145837:
    {
        returnValue = F("Hirschkuppe");
        break;
    }
    case 145838:
    {
        returnValue = F("Hirschkäferweg");
        break;
    }
    case 145839:
    {
        returnValue = F("Hirschlach");
        break;
    }
    case 145840:
    {
        returnValue = F("Hirschlacher Str.");
        break;
    }
    case 145841:
    {
        returnValue = F("Hirschlachstr.");
        break;
    }
    case 145842:
    {
        returnValue = F("Hirschlachweg");
        break;
    }
    case 145843:
    {
        returnValue = F("Hirschlagerstr.");
        break;
    }
    case 145844:
    {
        returnValue = F("Hirschlander Str.");
        break;
    }
    case 145845:
    {
        returnValue = F("Hirschlander Strasse");
        break;
    }
    case 145846:
    {
        returnValue = F("Hirschlander Weg");
        break;
    }
    case 145847:
    {
        returnValue = F("Hirschlandgängle");
        break;
    }
    case 145848:
    {
        returnValue = F("Hirschlandhof");
        break;
    }
    case 145849:
    {
        returnValue = F("Hirschlandstr.");
        break;
    }
    case 145850:
    {
        returnValue = F("Hirschlandweg");
        break;
    }
    case 145851:
    {
        returnValue = F("Hirschlatter Str.");
        break;
    }
    case 145852:
    {
        returnValue = F("Hirschlauf");
        break;
    }
    case 145853:
    {
        returnValue = F("Hirschleckenweg");
        break;
    }
    case 145854:
    {
        returnValue = F("Hirschleckschlüchte");
        break;
    }
    case 145855:
    {
        returnValue = F("Hirschleinstr.");
        break;
    }
    case 145856:
    {
        returnValue = F("Hirschleite");
        break;
    }
    case 145857:
    {
        returnValue = F("Hirschleitenweg");
        break;
    }
    case 145858:
    {
        returnValue = F("Hirschleithe");
        break;
    }
    case 145859:
    {
        returnValue = F("Hirschler Weg");
        break;
    }
    case 145860:
    {
        returnValue = F("Hirschlestr.");
        break;
    }
    case 145861:
    {
        returnValue = F("Hirschlesweg");
        break;
    }
    case 145862:
    {
        returnValue = F("Hirschleweg");
        break;
    }
    case 145863:
    {
        returnValue = F("Hirschling");
        break;
    }
    case 145864:
    {
        returnValue = F("Hirschlinger Str.");
        break;
    }
    case 145865:
    {
        returnValue = F("Hirschlinger Weg");
        break;
    }
    case 145866:
    {
        returnValue = F("Hirschlochweg");
        break;
    }
    case 145867:
    {
        returnValue = F("Hirschmann-Ring");
        break;
    }
    case 145868:
    {
        returnValue = F("Hirschmannstr.");
        break;
    }
    case 145869:
    {
        returnValue = F("Hirschmattenweg");
        break;
    }
    case 145870:
    {
        returnValue = F("Hirschmattweg");
        break;
    }
    case 145871:
    {
        returnValue = F("Hirschmoosstr.");
        break;
    }
    case 145872:
    {
        returnValue = F("Hirschmättleweg");
        break;
    }
    case 145873:
    {
        returnValue = F("Hirschmühlenweg");
        break;
    }
    case 145874:
    {
        returnValue = F("Hirschmüllersweg");
        break;
    }
    case 145875:
    {
        returnValue = F("Hirschpark");
        break;
    }
    case 145876:
    {
        returnValue = F("Hirschparkstr.");
        break;
    }
    case 145877:
    {
        returnValue = F("Hirschparkweg");
        break;
    }
    case 145878:
    {
        returnValue = F("Hirschpassage");
        break;
    }
    case 145879:
    {
        returnValue = F("Hirschpfad");
        break;
    }
    case 145880:
    {
        returnValue = F("Hirschpfuhl");
        break;
    }
    case 145881:
    {
        returnValue = F("Hirschplan");
        break;
    }
    case 145882:
    {
        returnValue = F("Hirschplanallee");
        break;
    }
    case 145883:
    {
        returnValue = F("Hirschplanweg");
        break;
    }
    case 145884:
    {
        returnValue = F("Hirschplatz");
        break;
    }
    case 145885:
    {
        returnValue = F("Hirschplatzweg");
        break;
    }
    case 145886:
    {
        returnValue = F("Hirschrain");
        break;
    }
    case 145887:
    {
        returnValue = F("Hirschrainweg");
        break;
    }
    case 145888:
    {
        returnValue = F("Hirschreute Sträßle");
        break;
    }
    case 145889:
    {
        returnValue = F("Hirschreuteweg");
        break;
    }
    case 145890:
    {
        returnValue = F("Hirschroda");
        break;
    }
    case 145891:
    {
        returnValue = F("Hirschrodaer Str.");
        break;
    }
    case 145892:
    {
        returnValue = F("Hirschrodaer Weg");
        break;
    }
    case 145893:
    {
        returnValue = F("Hirschrott");
        break;
    }
    case 145894:
    {
        returnValue = F("Hirschrufweg");
        break;
    }
    case 145895:
    {
        returnValue = F("Hirschschneise");
        break;
    }
    case 145896:
    {
        returnValue = F("Hirschseeweg");
        break;
    }
    case 145897:
    {
        returnValue = F("Hirschsprung");
        break;
    }
    case 145898:
    {
        returnValue = F("Hirschsprung-Geräumt");
        break;
    }
    case 145899:
    {
        returnValue = F("Hirschsprunger Str.");
        break;
    }
    case 145900:
    {
        returnValue = F("Hirschsprunger Weg");
        break;
    }
    case 145901:
    {
        returnValue = F("Hirschsprungsträßchen");
        break;
    }
    case 145902:
    {
        returnValue = F("Hirschsprungtraufweg");
        break;
    }
    case 145903:
    {
        returnValue = F("Hirschsprungweg");
        break;
    }
    case 145904:
    {
        returnValue = F("Hirschstaffeln");
        break;
    }
    case 145905:
    {
        returnValue = F("Hirschstange");
        break;
    }
    case 145906:
    {
        returnValue = F("Hirschstangenweg");
        break;
    }
    case 145907:
    {
        returnValue = F("Hirschsteig");
        break;
    }
    case 145908:
    {
        returnValue = F("Hirschstein");
        break;
    }
    case 145909:
    {
        returnValue = F("Hirschsteinblick");
        break;
    }
    case 145910:
    {
        returnValue = F("Hirschsteiner Weg");
        break;
    }
    case 145911:
    {
        returnValue = F("Hirschsteinstr.");
        break;
    }
    case 145912:
    {
        returnValue = F("Hirschsteinweg");
        break;
    }
    case 145913:
    {
        returnValue = F("Hirschstiegweg");
        break;
    }
    case 145914:
    {
        returnValue = F("Hirschstr.");
        break;
    }
    case 145915:
    {
        returnValue = F("Hirschsulzweg");
        break;
    }
    case 145916:
    {
        returnValue = F("Hirschtal");
        break;
    }
    case 145917:
    {
        returnValue = F("Hirschtalstr.");
        break;
    }
    case 145918:
    {
        returnValue = F("Hirschtalweg");
        break;
    }
    case 145919:
    {
        returnValue = F("Hirschteich");
        break;
    }
    case 145920:
    {
        returnValue = F("Hirschteichtal");
        break;
    }
    case 145921:
    {
        returnValue = F("Hirschteichweg");
        break;
    }
    case 145922:
    {
        returnValue = F("Hirschtorweg");
        break;
    }
    case 145923:
    {
        returnValue = F("Hirschtrieb");
        break;
    }
    case 145924:
    {
        returnValue = F("Hirschtränk");
        break;
    }
    case 145925:
    {
        returnValue = F("Hirschwald");
        break;
    }
    case 145926:
    {
        returnValue = F("Hirschwalder Str.");
        break;
    }
    case 145927:
    {
        returnValue = F("Hirschwaldstr.");
        break;
    }
    case 145928:
    {
        returnValue = F("Hirschwaldweg");
        break;
    }
    case 145929:
    {
        returnValue = F("Hirschwangweg");
        break;
    }
    case 145930:
    {
        returnValue = F("Hirschwechsel");
        break;
    }
    case 145931:
    {
        returnValue = F("Hirschweg");
        break;
    }
    case 145932:
    {
        returnValue = F("Hirschwegle");
        break;
    }
    case 145933:
    {
        returnValue = F("Hirschweglinie");
        break;
    }
    case 145934:
    {
        returnValue = F("Hirschweide");
        break;
    }
    case 145935:
    {
        returnValue = F("Hirschweidenstr.");
        break;
    }
    case 145936:
    {
        returnValue = F("Hirschweihe");
        break;
    }
    case 145937:
    {
        returnValue = F("Hirschwiese");
        break;
    }
    case 145938:
    {
        returnValue = F("Hirschwiesenweg");
        break;
    }
    case 145939:
    {
        returnValue = F("Hirschwinkel");
        break;
    }
    case 145940:
    {
        returnValue = F("Hirschwinkelstr.");
        break;
    }
    case 145941:
    {
        returnValue = F("Hirschwinkelweg");
        break;
    }
    case 145942:
    {
        returnValue = F("Hirschwirtsgaßl");
        break;
    }
    case 145943:
    {
        returnValue = F("Hirschzeller Str.");
        break;
    }
    case 145944:
    {
        returnValue = F("Hirschziegenantilopen");
        break;
    }
    case 145945:
    {
        returnValue = F("Hirschäcker");
        break;
    }
    case 145946:
    {
        returnValue = F("Hirschäckerstr.");
        break;
    }
    case 145947:
    {
        returnValue = F("Hirschäckerweg");
        break;
    }
    case 145948:
    {
        returnValue = F("Hirsebergstr.");
        break;
    }
    case 145949:
    {
        returnValue = F("Hirsegarten");
        break;
    }
    case 145950:
    {
        returnValue = F("Hirsehang");
        break;
    }
    case 145951:
    {
        returnValue = F("Hirsekamp");
        break;
    }
    case 145952:
    {
        returnValue = F("Hirsemannstr.");
        break;
    }
    case 145953:
    {
        returnValue = F("Hirsenmühle");
        break;
    }
    case 145954:
    {
        returnValue = F("Hirsenstr.");
        break;
    }
    case 145955:
    {
        returnValue = F("Hirsesteig");
        break;
    }
    case 145956:
    {
        returnValue = F("Hirsestieg");
        break;
    }
    case 145957:
    {
        returnValue = F("Hirseweg");
        break;
    }
    case 145958:
    {
        returnValue = F("Hirsfeld");
        break;
    }
    case 145959:
    {
        returnValue = F("Hirsländer Weg");
        break;
    }
    case 145960:
    {
        returnValue = F("Hirspeler Pfad");
        break;
    }
    case 145961:
    {
        returnValue = F("Hirsteiner Str.");
        break;
    }
    case 145962:
    {
        returnValue = F("Hirstenweg");
        break;
    }
    case 145963:
    {
        returnValue = F("Hirstweg");
        break;
    }
    case 145964:
    {
        returnValue = F("Hirtackerweg");
        break;
    }
    case 145965:
    {
        returnValue = F("Hirtanger");
        break;
    }
    case 145966:
    {
        returnValue = F("Hirtangerstr.");
        break;
    }
    case 145967:
    {
        returnValue = F("Hirtberg");
        break;
    }
    case 145968:
    {
        returnValue = F("Hirtbergstr.");
        break;
    }
    case 145969:
    {
        returnValue = F("Hirtbergweg");
        break;
    }
    case 145970:
    {
        returnValue = F("Hirte-Böcking-Weg");
        break;
    }
    case 145971:
    {
        returnValue = F("Hirtebek");
        break;
    }
    case 145972:
    {
        returnValue = F("Hirteberg");
        break;
    }
    case 145973:
    {
        returnValue = F("Hirtegasse");
        break;
    }
    case 145974:
    {
        returnValue = F("Hirtel");
        break;
    }
    case 145975:
    {
        returnValue = F("Hirteler Str.");
        break;
    }
    case 145976:
    {
        returnValue = F("Hirtenacker");
        break;
    }
    case 145977:
    {
        returnValue = F("Hirtenackerstr.");
        break;
    }
    case 145978:
    {
        returnValue = F("Hirtenanger");
        break;
    }
    case 145979:
    {
        returnValue = F("Hirtenau");
        break;
    }
    case 145980:
    {
        returnValue = F("Hirtenbachstr.");
        break;
    }
    case 145981:
    {
        returnValue = F("Hirtenbeet");
        break;
    }
    case 145982:
    {
        returnValue = F("Hirtenberg");
        break;
    }
    case 145983:
    {
        returnValue = F("Hirtenbergstor");
        break;
    }
    case 145984:
    {
        returnValue = F("Hirtenbergstr.");
        break;
    }
    case 145985:
    {
        returnValue = F("Hirtenbergweg");
        break;
    }
    case 145986:
    {
        returnValue = F("Hirtenbohl");
        break;
    }
    case 145987:
    {
        returnValue = F("Hirtenborn");
        break;
    }
    case 145988:
    {
        returnValue = F("Hirtenbreite");
        break;
    }
    case 145989:
    {
        returnValue = F("Hirtenbrink");
        break;
    }
    case 145990:
    {
        returnValue = F("Hirtenbrook");
        break;
    }
    case 145991:
    {
        returnValue = F("Hirtenbrunnenweg");
        break;
    }
    case 145992:
    {
        returnValue = F("Hirtenbrünnle");
        break;
    }
    case 145993:
    {
        returnValue = F("Hirtenbrünnlein");
        break;
    }
    case 145994:
    {
        returnValue = F("Hirtenbuchet");
        break;
    }
    case 145995:
    {
        returnValue = F("Hirtenbuck");
        break;
    }
    case 145996:
    {
        returnValue = F("Hirtenbuckstr.");
        break;
    }
    case 145997:
    {
        returnValue = F("Hirtenböhler Weg");
        break;
    }
    case 145998:
    {
        returnValue = F("Hirtenbücklein");
        break;
    }
    case 145999:
    {
        returnValue = F("Hirtenbühl");
        break;
    }
    case 146000:
    {
        returnValue = F("Hirtenbühlstr.");
        break;
    }
    case 146001:
    {
        returnValue = F("Hirtenbühlweg");
        break;
    }
    case 146002:
    {
        returnValue = F("Hirtenecke");
        break;
    }
    case 146003:
    {
        returnValue = F("Hirtenend");
        break;
    }
    case 146004:
    {
        returnValue = F("Hirtenende");
        break;
    }
    case 146005:
    {
        returnValue = F("Hirtenfeld");
        break;
    }
    case 146006:
    {
        returnValue = F("Hirtenfleck");
        break;
    }
    case 146007:
    {
        returnValue = F("Hirtengarten");
        break;
    }
    case 146008:
    {
        returnValue = F("Hirtengartenstr.");
        break;
    }
    case 146009:
    {
        returnValue = F("Hirtengartenweg");
        break;
    }
    case 146010:
    {
        returnValue = F("Hirtengasse");
        break;
    }
    case 146011:
    {
        returnValue = F("Hirtengraben");
        break;
    }
    case 146012:
    {
        returnValue = F("Hirtengrabenstr.");
        break;
    }
    case 146013:
    {
        returnValue = F("Hirtengrund");
        break;
    }
    case 146014:
    {
        returnValue = F("Hirtengärtchen");
        break;
    }
    case 146015:
    {
        returnValue = F("Hirtengärten");
        break;
    }
    case 146016:
    {
        returnValue = F("Hirtengässchen");
        break;
    }
    case 146017:
    {
        returnValue = F("Hirtengässle");
        break;
    }
    case 146018:
    {
        returnValue = F("Hirtengäßchen");
        break;
    }
    case 146019:
    {
        returnValue = F("Hirtengäßle");
        break;
    }
    case 146020:
    {
        returnValue = F("Hirtenhainer Str.");
        break;
    }
    case 146021:
    {
        returnValue = F("Hirtenhalde");
        break;
    }
    case 146022:
    {
        returnValue = F("Hirtenhau");
        break;
    }
    case 146023:
    {
        returnValue = F("Hirtenhausweg");
        break;
    }
    case 146024:
    {
        returnValue = F("Hirtenheid");
        break;
    }
    case 146025:
    {
        returnValue = F("Hirtenhof");
        break;
    }
    case 146026:
    {
        returnValue = F("Hirtenhohlstr.");
        break;
    }
    case 146027:
    {
        returnValue = F("Hirtenholzweg");
        break;
    }
    case 146028:
    {
        returnValue = F("Hirtenhäuser");
        break;
    }
    case 146029:
    {
        returnValue = F("Hirtenhäuserschneise");
        break;
    }
    case 146030:
    {
        returnValue = F("Hirtenhäuslein");
        break;
    }
    case 146031:
    {
        returnValue = F("Hirtenhöhe");
        break;
    }
    case 146032:
    {
        returnValue = F("Hirtenhübel");
        break;
    }
    case 146033:
    {
        returnValue = F("Hirtenkamp");
        break;
    }
    case 146034:
    {
        returnValue = F("Hirtenkate");
        break;
    }
    case 146035:
    {
        returnValue = F("Hirtenklimp");
        break;
    }
    case 146036:
    {
        returnValue = F("Hirtenkreuzstr.");
        break;
    }
    case 146037:
    {
        returnValue = F("Hirtenlager");
        break;
    }
    case 146038:
    {
        returnValue = F("Hirtenland");
        break;
    }
    case 146039:
    {
        returnValue = F("Hirtenleite");
        break;
    }
    case 146040:
    {
        returnValue = F("Hirtenlohe");
        break;
    }
    case 146041:
    {
        returnValue = F("Hirtenlohweg");
        break;
    }
    case 146042:
    {
        returnValue = F("Hirtenmahd");
        break;
    }
    case 146043:
    {
        returnValue = F("Hirtenmahdweg");
        break;
    }
    case 146044:
    {
        returnValue = F("Hirtenmähder");
        break;
    }
    case 146045:
    {
        returnValue = F("Hirtenmähdersträßle");
        break;
    }
    case 146046:
    {
        returnValue = F("Hirtenpark");
        break;
    }
    case 146047:
    {
        returnValue = F("Hirtenpfad");
        break;
    }
    case 146048:
    {
        returnValue = F("Hirtenplatz");
        break;
    }
    case 146049:
    {
        returnValue = F("Hirtenrain");
        break;
    }
    case 146050:
    {
        returnValue = F("Hirtenrainstr.");
        break;
    }
    case 146051:
    {
        returnValue = F("Hirtenrangen");
        break;
    }
    case 146052:
    {
        returnValue = F("Hirtenrasenweg");
        break;
    }
    case 146053:
    {
        returnValue = F("Hirtenreihe");
        break;
    }
    case 146054:
    {
        returnValue = F("Hirtenrhein");
        break;
    }
    case 146055:
    {
        returnValue = F("Hirtenrieß");
        break;
    }
    case 146056:
    {
        returnValue = F("Hirtenring");
        break;
    }
    case 146057:
    {
        returnValue = F("Hirtenseifen");
        break;
    }
    case 146058:
    {
        returnValue = F("Hirtenstall");
        break;
    }
    case 146059:
    {
        returnValue = F("Hirtenstaller Weg");
        break;
    }
    case 146060:
    {
        returnValue = F("Hirtenstallweg");
        break;
    }
    case 146061:
    {
        returnValue = F("Hirtensteg");
        break;
    }
    case 146062:
    {
        returnValue = F("Hirtensteig");
        break;
    }
    case 146063:
    {
        returnValue = F("Hirtensteige");
        break;
    }
    case 146064:
    {
        returnValue = F("Hirtenstein");
        break;
    }
    case 146065:
    {
        returnValue = F("Hirtensteinweg");
        break;
    }
    case 146066:
    {
        returnValue = F("Hirtenstieg");
        break;
    }
    case 146067:
    {
        returnValue = F("Hirtenstr.");
        break;
    }
    case 146068:
    {
        returnValue = F("Hirtentalweg");
        break;
    }
    case 146069:
    {
        returnValue = F("Hirtenteichhof");
        break;
    }
    case 146070:
    {
        returnValue = F("Hirtenteichstr.");
        break;
    }
    case 146071:
    {
        returnValue = F("Hirtentor");
        break;
    }
    case 146072:
    {
        returnValue = F("Hirtentorstr.");
        break;
    }
    case 146073:
    {
        returnValue = F("Hirtentrabweg");
        break;
    }
    case 146074:
    {
        returnValue = F("Hirtentrieb");
        break;
    }
    case 146075:
    {
        returnValue = F("Hirtentrift");
        break;
    }
    case 146076:
    {
        returnValue = F("Hirtenwasen");
        break;
    }
    case 146077:
    {
        returnValue = F("Hirtenweg");
        break;
    }
    case 146078:
    {
        returnValue = F("Hirtenwerg");
        break;
    }
    case 146079:
    {
        returnValue = F("Hirtenwies");
        break;
    }
    case 146080:
    {
        returnValue = F("Hirtenwiese");
        break;
    }
    case 146081:
    {
        returnValue = F("Hirtenwiesen");
        break;
    }
    case 146082:
    {
        returnValue = F("Hirtenwiesenstr.");
        break;
    }
    case 146083:
    {
        returnValue = F("Hirtenwieslein");
        break;
    }
    case 146084:
    {
        returnValue = F("Hirtenwiesstr.");
        break;
    }
    case 146085:
    {
        returnValue = F("Hirtenwinkel");
        break;
    }
    case 146086:
    {
        returnValue = F("Hirtenäcker");
        break;
    }
    case 146087:
    {
        returnValue = F("Hirtenäckerstr.");
        break;
    }
    case 146088:
    {
        returnValue = F("Hirtenäckerweg");
        break;
    }
    case 146089:
    {
        returnValue = F("Hirterstr.");
        break;
    }
    case 146090:
    {
        returnValue = F("Hirtgarten");
        break;
    }
    case 146091:
    {
        returnValue = F("Hirtgartenweg");
        break;
    }
    case 146092:
    {
        returnValue = F("Hirtgasse");
        break;
    }
    case 146093:
    {
        returnValue = F("Hirtgrasstr.");
        break;
    }
    case 146094:
    {
        returnValue = F("Hirthausweg");
        break;
    }
    case 146095:
    {
        returnValue = F("Hirthplatz");
        break;
    }
    case 146096:
    {
        returnValue = F("Hirthstr.");
        break;
    }
    case 146097:
    {
        returnValue = F("Hirtl");
        break;
    }
    case 146098:
    {
        returnValue = F("Hirtlbacher Str.");
        break;
    }
    case 146099:
    {
        returnValue = F("Hirtlederergasse");
        break;
    }
    case 146100:
    {
        returnValue = F("Hirtscheider Str.");
        break;
    }
    case 146101:
    {
        returnValue = F("Hirtsecke");
        break;
    }
    case 146102:
    {
        returnValue = F("Hirtsgasse");
        break;
    }
    case 146103:
    {
        returnValue = F("Hirtsgrund");
        break;
    }
    case 146104:
    {
        returnValue = F("Hirtsgrunder Weg");
        break;
    }
    case 146105:
    {
        returnValue = F("Hirtsküppel");
        break;
    }
    case 146106:
    {
        returnValue = F("Hirtstr.");
        break;
    }
    case 146107:
    {
        returnValue = F("Hirtswiese");
        break;
    }
    case 146108:
    {
        returnValue = F("Hirtswiesen");
        break;
    }
    case 146109:
    {
        returnValue = F("Hirttor");
        break;
    }
    case 146110:
    {
        returnValue = F("Hirtweg");
        break;
    }
    case 146111:
    {
        returnValue = F("Hirtwiese");
        break;
    }
    case 146112:
    {
        returnValue = F("Hirtwiesen");
        break;
    }
    case 146113:
    {
        returnValue = F("Hirtwiesweg");
        break;
    }
    case 146114:
    {
        returnValue = F("Hirtzenkopfweg");
        break;
    }
    case 146115:
    {
        returnValue = F("Hirtzgasse");
        break;
    }
    case 146116:
    {
        returnValue = F("Hirtzleyweg");
        break;
    }
    case 146117:
    {
        returnValue = F("Hirtzweg");
        break;
    }
    case 146118:
    {
        returnValue = F("Hirtäckerstr.");
        break;
    }
    case 146119:
    {
        returnValue = F("Hirzau");
        break;
    }
    case 146120:
    {
        returnValue = F("Hirzbach");
        break;
    }
    case 146121:
    {
        returnValue = F("Hirzbacher Weg");
        break;
    }
    case 146122:
    {
        returnValue = F("Hirzbergweg");
        break;
    }
    case 146123:
    {
        returnValue = F("Hirzbodenweg");
        break;
    }
    case 146124:
    {
        returnValue = F("Hirzebadweg");
        break;
    }
    case 146125:
    {
        returnValue = F("Hirzeckstr.");
        break;
    }
    case 146126:
    {
        returnValue = F("Hirzelplatz");
        break;
    }
    case 146127:
    {
        returnValue = F("Hirzenberg");
        break;
    }
    case 146128:
    {
        returnValue = F("Hirzenbergstr.");
        break;
    }
    case 146129:
    {
        returnValue = F("Hirzenbodenweg");
        break;
    }
    case 146130:
    {
        returnValue = F("Hirzener Mühle");
        break;
    }
    case 146131:
    {
        returnValue = F("Hirzener Str.");
        break;
    }
    case 146132:
    {
        returnValue = F("Hirzenhainer Str.");
        break;
    }
    case 146133:
    {
        returnValue = F("Hirzenhainer Weg");
        break;
    }
    case 146134:
    {
        returnValue = F("Hirzenhubstr.");
        break;
    }
    case 146135:
    {
        returnValue = F("Hirzenlachebuckweg");
        break;
    }
    case 146136:
    {
        returnValue = F("Hirzenlacheweg");
        break;
    }
    case 146137:
    {
        returnValue = F("Hirzenlachstr.");
        break;
    }
    case 146138:
    {
        returnValue = F("Hirzenmoosweg");
        break;
    }
    case 146139:
    {
        returnValue = F("Hirzensteinstr.");
        break;
    }
    case 146140:
    {
        returnValue = F("Hirzenweg");
        break;
    }
    case 146141:
    {
        returnValue = F("Hirzfelsenweg");
        break;
    }
    case 146142:
    {
        returnValue = F("Hirzgasse");
        break;
    }
    case 146143:
    {
        returnValue = F("Hirzgäßchen");
        break;
    }
    case 146144:
    {
        returnValue = F("Hirzleier Str.");
        break;
    }
    case 146145:
    {
        returnValue = F("Hirzlheimstr.");
        break;
    }
    case 146146:
    {
        returnValue = F("Hirzsteinstr.");
        break;
    }
    case 146147:
    {
        returnValue = F("Hirzwaldweg");
        break;
    }
    case 146148:
    {
        returnValue = F("Hiselau");
        break;
    }
    case 146149:
    {
        returnValue = F("Hiseler Str.");
        break;
    }
    case 146150:
    {
        returnValue = F("Hisjeweg");
        break;
    }
    case 146151:
    {
        returnValue = F("Hisselholm");
        break;
    }
    case 146152:
    {
        returnValue = F("Hissenhausener Weg");
        break;
    }
    case 146153:
    {
        returnValue = F("Historische Altstr.");
        break;
    }
    case 146154:
    {
        returnValue = F("Historische Anlage");
        break;
    }
    case 146155:
    {
        returnValue = F("Historische Bobbahn");
        break;
    }
    case 146156:
    {
        returnValue = F("Historische Brücke");
        break;
    }
    case 146157:
    {
        returnValue = F("Historische Felsenkeller");
        break;
    }
    case 146158:
    {
        returnValue = F("Historische Gartenanlagen");
        break;
    }
    case 146159:
    {
        returnValue = F("Historische Herrieder Altmühlbrücke");
        break;
    }
    case 146160:
    {
        returnValue = F("Historische Pflasterstr.");
        break;
    }
    case 146161:
    {
        returnValue = F("Historische Pflaumenallee");
        break;
    }
    case 146162:
    {
        returnValue = F("Historische Römerstr.");
        break;
    }
    case 146163:
    {
        returnValue = F("Historische Str.");
        break;
    }
    case 146164:
    {
        returnValue = F("Historischer Bergbau-Rundwanderweg");
        break;
    }
    case 146165:
    {
        returnValue = F("Historischer Grenzweg");
        break;
    }
    case 146166:
    {
        returnValue = F("Historischer Hugenottenwanderweg");
        break;
    }
    case 146167:
    {
        returnValue = F("Historischer Hugenottenweg");
        break;
    }
    case 146168:
    {
        returnValue = F("Historischer Hugenttenwanderweg");
        break;
    }
    case 146169:
    {
        returnValue = F("Historischer Hängegarten");
        break;
    }
    case 146170:
    {
        returnValue = F("Historischer Kurpark");
        break;
    }
    case 146171:
    {
        returnValue = F("Historischer Kurpark Bad Elster");
        break;
    }
    case 146172:
    {
        returnValue = F("Historischer Mauergang");
        break;
    }
    case 146173:
    {
        returnValue = F("Historischer Naturpark Sodegarten");
        break;
    }
    case 146174:
    {
        returnValue = F("Historischer Park");
        break;
    }
    case 146175:
    {
        returnValue = F("Historischer Park Holzhausen");
        break;
    }
    case 146176:
    {
        returnValue = F("Historischer Pfad");
        break;
    }
    case 146177:
    {
        returnValue = F("Historischer Postweg");
        break;
    }
    case 146178:
    {
        returnValue = F("Historischer Römerweg");
        break;
    }
    case 146179:
    {
        returnValue = F("Historischer Sitzplatz Magnolienwiese");
        break;
    }
    case 146180:
    {
        returnValue = F("Historischer Wanderweg");
        break;
    }
    case 146181:
    {
        returnValue = F("Hitchinstr.");
        break;
    }
    case 146182:
    {
        returnValue = F("Hitdorfer Str.");
        break;
    }
    case 146183:
    {
        returnValue = F("Hitrachinger Str.");
        break;
    }
    case 146184:
    {
        returnValue = F("Hitschkendorfer Str.");
        break;
    }
    case 146185:
    {
        returnValue = F("Hittberger Str.");
        break;
    }
    case 146186:
    {
        returnValue = F("Hitteberg");
        break;
    }
    case 146187:
    {
        returnValue = F("Hittelbrunnstr.");
        break;
    }
    case 146188:
    {
        returnValue = F("Hittelkofer Str.");
        break;
    }
    case 146189:
    {
        returnValue = F("Hittendahl");
        break;
    }
    case 146190:
    {
        returnValue = F("Hittendahlplatz");
        break;
    }
    case 146191:
    {
        returnValue = F("Hittenhauserstr.");
        break;
    }
    case 146192:
    {
        returnValue = F("Hittenkoferstr.");
        break;
    }
    case 146193:
    {
        returnValue = F("Hittenkoferweg");
        break;
    }
    case 146194:
    {
        returnValue = F("Hittfelder Kirchweg");
        break;
    }
    case 146195:
    {
        returnValue = F("Hittfelder Landstr.");
        break;
    }
    case 146196:
    {
        returnValue = F("Hittfelder Str.");
        break;
    }
    case 146197:
    {
        returnValue = F("Hittfelder Weg");
        break;
    }
    case 146198:
    {
        returnValue = F("Hittisauer Str.");
        break;
    }
    case 146199:
    {
        returnValue = F("Hittisheimer Str.");
        break;
    }
    case 146200:
    {
        returnValue = F("Hittisweilerstr.");
        break;
    }
    case 146201:
    {
        returnValue = F("Hittloge");
        break;
    }
    case 146202:
    {
        returnValue = F("Hittorfstr.");
        break;
    }
    case 146203:
    {
        returnValue = F("Hittostr.");
        break;
    }
    case 146204:
    {
        returnValue = F("Hitzacker");
        break;
    }
    case 146205:
    {
        returnValue = F("Hitzberg");
        break;
    }
    case 146206:
    {
        returnValue = F("Hitzbroicher Weg");
        break;
    }
    case 146207:
    {
        returnValue = F("Hitzelberger Str.");
        break;
    }
    case 146208:
    {
        returnValue = F("Hitzelerstr.");
        break;
    }
    case 146209:
    {
        returnValue = F("Hitzelsbergstr.");
        break;
    }
    case 146210:
    {
        returnValue = F("Hitzenbachstr.");
        break;
    }
    case 146211:
    {
        returnValue = F("Hitzenbühl");
        break;
    }
    case 146212:
    {
        returnValue = F("Hitzendorfer Weg");
        break;
    }
    case 146213:
    {
        returnValue = F("Hitzendumicke");
        break;
    }
    case 146214:
    {
        returnValue = F("Hitzenhofen");
        break;
    }
    case 146215:
    {
        returnValue = F("Hitzenhofer Str.");
        break;
    }
    case 146216:
    {
        returnValue = F("Hitzenlinder Str.");
        break;
    }
    case 146217:
    {
        returnValue = F("Hitzenstaudenring");
        break;
    }
    case 146218:
    {
        returnValue = F("Hitzepohl-Ost");
        break;
    }
    case 146219:
    {
        returnValue = F("Hitzepohl-West");
        break;
    }
    case 146220:
    {
        returnValue = F("Hitzeroder Str.");
        break;
    }
    case 146221:
    {
        returnValue = F("Hitzestr.");
        break;
    }
    case 146222:
    {
        returnValue = F("Hitzfeldstr.");
        break;
    }
    case 146223:
    {
        returnValue = F("Hitzgasse");
        break;
    }
    case 146224:
    {
        returnValue = F("Hitzgutstr.");
        break;
    }
    case 146225:
    {
        returnValue = F("Hitzhauser Str.");
        break;
    }
    case 146226:
    {
        returnValue = F("Hitzhofener Str.");
        break;
    }
    case 146227:
    {
        returnValue = F("Hitzhofer Weg");
        break;
    }
    case 146228:
    {
        returnValue = F("Hitzing");
        break;
    }
    case 146229:
    {
        returnValue = F("Hitzingsweilerweg");
        break;
    }
    case 146230:
    {
        returnValue = F("Hitzker");
        break;
    }
    case 146231:
    {
        returnValue = F("Hitzkirchener Str.");
        break;
    }
    case 146232:
    {
        returnValue = F("Hitzkofer Str.");
        break;
    }
    case 146233:
    {
        returnValue = F("Hitzkofer Weg");
        break;
    }
    case 146234:
    {
        returnValue = F("Hitzlerieder Str.");
        break;
    }
    case 146235:
    {
        returnValue = F("Hitzling");
        break;
    }
    case 146236:
    {
        returnValue = F("Hitzlinger Str.");
        break;
    }
    case 146237:
    {
        returnValue = F("Hiutenweg");
        break;
    }
    case 146238:
    {
        returnValue = F("Hiwkeweg");
        break;
    }
    case 146239:
    {
        returnValue = F("Hixberger Str.");
        break;
    }
    case 146240:
    {
        returnValue = F("Hixberger Weg");
        break;
    }
    case 146241:
    {
        returnValue = F("Hixholzer Weg");
        break;
    }
    case 146242:
    {
        returnValue = F("Hizlerstr.");
        break;
    }
    case 146243:
    {
        returnValue = F("Hißlachestr.");
        break;
    }
    case 146244:
    {
        returnValue = F("Hiälweg");
        break;
    }
    case 146245:
    {
        returnValue = F("Hiärm-Grupe-Hof");
        break;
    }
    case 146246:
    {
        returnValue = F("Hiärm-Grupe-Str.");
        break;
    }
    case 146247:
    {
        returnValue = F("Hiöfer");
        break;
    }
    case 146248:
    {
        returnValue = F("Hlasenweg");
        break;
    }
    case 146249:
    {
        returnValue = F("Ho Chi Min Pfad");
        break;
    }
    case 146250:
    {
        returnValue = F("Ho Chi Minh Pfad");
        break;
    }
    case 146251:
    {
        returnValue = F("Ho Chi Minh-Pfad");
        break;
    }
    case 146252:
    {
        returnValue = F("Ho-Chi-Min-Pfad");
        break;
    }
    case 146253:
    {
        returnValue = F("Ho-Chi-Minh-Pfad");
        break;
    }
    case 146254:
    {
        returnValue = F("Ho08");
        break;
    }
    case 146255:
    {
        returnValue = F("Hoambarger Weg");
        break;
    }
    case 146256:
    {
        returnValue = F("Hoambergsteege");
        break;
    }
    case 146257:
    {
        returnValue = F("Hoanzweg");
        break;
    }
    case 146258:
    {
        returnValue = F("Hoarstatt");
        break;
    }
    case 146259:
    {
        returnValue = F("Hobachstr.");
        break;
    }
    case 146260:
    {
        returnValue = F("Hobarg");
        break;
    }
    case 146261:
    {
        returnValue = F("Hobauerweg");
        break;
    }
    case 146262:
    {
        returnValue = F("Hobbacher Weg");
        break;
    }
    case 146263:
    {
        returnValue = F("Hobbenser Str.");
        break;
    }
    case 146264:
    {
        returnValue = F("Hobbingsweg");
        break;
    }
    case 146265:
    {
        returnValue = F("Hobbjemole");
        break;
    }
    case 146266:
    {
        returnValue = F("Hobecker Weg");
        break;
    }
    case 146267:
    {
        returnValue = F("Hobedal");
        break;
    }
    case 146268:
    {
        returnValue = F("Hobelbach-Fußweg");
        break;
    }
    case 146269:
    {
        returnValue = F("Hobelgasse");
        break;
    }
    case 146270:
    {
        returnValue = F("Hobelsberg");
        break;
    }
    case 146271:
    {
        returnValue = F("Hobelsgasse");
        break;
    }
    case 146272:
    {
        returnValue = F("Hobelskraft");
        break;
    }
    case 146273:
    {
        returnValue = F("Hobelsstr.");
        break;
    }
    case 146274:
    {
        returnValue = F("Hobelstr.");
        break;
    }
    case 146275:
    {
        returnValue = F("Hobelwirtstr.");
        break;
    }
    case 146276:
    {
        returnValue = F("Hoben");
        break;
    }
    case 146277:
    {
        returnValue = F("Hobener Weg");
        break;
    }
    case 146278:
    {
        returnValue = F("Hobengarten");
        break;
    }
    case 146279:
    {
        returnValue = F("Hobergstr.");
        break;
    }
    case 146280:
    {
        returnValue = F("Hobergweg");
        break;
    }
    case 146281:
    {
        returnValue = F("Hoberten");
        break;
    }
    case 146282:
    {
        returnValue = F("Hobestatt");
        break;
    }
    case 146283:
    {
        returnValue = F("Hobestr.");
        break;
    }
    case 146284:
    {
        returnValue = F("Hobeuken");
        break;
    }
    case 146285:
    {
        returnValue = F("Hobholzweg");
        break;
    }
    case 146286:
    {
        returnValue = F("Hoblersbergweg");
        break;
    }
    case 146287:
    {
        returnValue = F("Hobmannsbach");
        break;
    }
    case 146288:
    {
        returnValue = F("Hoboken-Weg");
        break;
    }
    case 146289:
    {
        returnValue = F("Hobokken");
        break;
    }
    case 146290:
    {
        returnValue = F("Hoboldsweg");
        break;
    }
    case 146291:
    {
        returnValue = F("Hoborn");
        break;
    }
    case 146292:
    {
        returnValue = F("Hobrechtsfelder Dorfstr.");
        break;
    }
    case 146293:
    {
        returnValue = F("Hobrechtsfelder Str.");
        break;
    }
    case 146294:
    {
        returnValue = F("Hobrechtsfelder Weg");
        break;
    }
    case 146295:
    {
        returnValue = F("Hobrechtstr.");
        break;
    }
    case 146296:
    {
        returnValue = F("Hobrechtsweg");
        break;
    }
    case 146297:
    {
        returnValue = F("Hobrischweg");
        break;
    }
    case 146298:
    {
        returnValue = F("Hoböck");
        break;
    }
    case 146299:
    {
        returnValue = F("Hoch Bruck");
        break;
    }
    case 146300:
    {
        returnValue = F("Hoch- und Stapelweg");
        break;
    }
    case 146301:
    {
        returnValue = F("Hoch-Weiseler Str.");
        break;
    }
    case 146302:
    {
        returnValue = F("Hoch-Weiseler Weg");
        break;
    }
    case 146303:
    {
        returnValue = F("Hocha");
        break;
    }
    case 146304:
    {
        returnValue = F("Hochachtstr.");
        break;
    }
    case 146305:
    {
        returnValue = F("Hochacker");
        break;
    }
    case 146306:
    {
        returnValue = F("Hochackerstr.");
        break;
    }
    case 146307:
    {
        returnValue = F("Hochackerweg");
        break;
    }
    case 146308:
    {
        returnValue = F("Hochalbpfad");
        break;
    }
    case 146309:
    {
        returnValue = F("Hochalbstr.");
        break;
    }
    case 146310:
    {
        returnValue = F("Hochallee");
        break;
    }
    case 146311:
    {
        returnValue = F("Hochalmstr.");
        break;
    }
    case 146312:
    {
        returnValue = F("Hochanwand");
        break;
    }
    case 146313:
    {
        returnValue = F("Hochaustr.");
        break;
    }
    case 146314:
    {
        returnValue = F("Hochbachweg");
        break;
    }
    case 146315:
    {
        returnValue = F("Hochbahn");
        break;
    }
    case 146316:
    {
        returnValue = F("Hochbahnstieg");
        break;
    }
    case 146317:
    {
        returnValue = F("Hochbahnstr.");
        break;
    }
    case 146318:
    {
        returnValue = F("Hochbahnwanderweg");
        break;
    }
    case 146319:
    {
        returnValue = F("Hochbauern-Allee");
        break;
    }
    case 146320:
    {
        returnValue = F("Hochbehälter");
        break;
    }
    case 146321:
    {
        returnValue = F("Hochbehälterweg");
        break;
    }
    case 146322:
    {
        returnValue = F("Hochbend");
        break;
    }
    case 146323:
    {
        returnValue = F("Hochbendstr.");
        break;
    }
    case 146324:
    {
        returnValue = F("Hochbendweg");
        break;
    }
    case 146325:
    {
        returnValue = F("Hochberg");
        break;
    }
    case 146326:
    {
        returnValue = F("Hochberger Str.");
        break;
    }
    case 146327:
    {
        returnValue = F("Hochberger-Allee");
        break;
    }
    case 146328:
    {
        returnValue = F("Hochberggasse");
        break;
    }
    case 146329:
    {
        returnValue = F("Hochbergsteige");
        break;
    }
    case 146330:
    {
        returnValue = F("Hochbergstr.");
        break;
    }
    case 146331:
    {
        returnValue = F("Hochbergsträßle");
        break;
    }
    case 146332:
    {
        returnValue = F("Hochbergtunnel");
        break;
    }
    case 146333:
    {
        returnValue = F("Hochbergweg");
        break;
    }
    case 146334:
    {
        returnValue = F("Hochbeune");
        break;
    }
    case 146335:
    {
        returnValue = F("Hochbichlfeld");
        break;
    }
    case 146336:
    {
        returnValue = F("Hochbideckstr.");
        break;
    }
    case 146337:
    {
        returnValue = F("Hochbildstr.");
        break;
    }
    case 146338:
    {
        returnValue = F("Hochbirk");
        break;
    }
    case 146339:
    {
        returnValue = F("Hochbirken");
        break;
    }
    case 146340:
    {
        returnValue = F("Hochbitz");
        break;
    }
    case 146341:
    {
        returnValue = F("Hochblassenstr.");
        break;
    }
    case 146342:
    {
        returnValue = F("Hochblauenstr.");
        break;
    }
    case 146343:
    {
        returnValue = F("Hochblick");
        break;
    }
    case 146344:
    {
        returnValue = F("Hochbohm");
        break;
    }
    case 146345:
    {
        returnValue = F("Hochbohmer Chaussee");
        break;
    }
    case 146346:
    {
        returnValue = F("Hochborner Str.");
        break;
    }
    case 146347:
    {
        returnValue = F("Hochbornteich");
        break;
    }
    case 146348:
    {
        returnValue = F("Hochbrandweg");
        break;
    }
    case 146349:
    {
        returnValue = F("Hochbreite");
        break;
    }
    case 146350:
    {
        returnValue = F("Hochbreiten");
        break;
    }
    case 146351:
    {
        returnValue = F("Hochbruch");
        break;
    }
    case 146352:
    {
        returnValue = F("Hochbruckerstr.");
        break;
    }
    case 146353:
    {
        returnValue = F("Hochbrunnstr.");
        break;
    }
    case 146354:
    {
        returnValue = F("Hochbrücke");
        break;
    }
    case 146355:
    {
        returnValue = F("Hochbrückenstr.");
        break;
    }
    case 146356:
    {
        returnValue = F("Hochbrücker Str.");
        break;
    }
    case 146357:
    {
        returnValue = F("Hochbrückerweg");
        break;
    }
    case 146358:
    {
        returnValue = F("Hochbrücksiel");
        break;
    }
    case 146359:
    {
        returnValue = F("Hochbrücktorstr.");
        break;
    }
    case 146360:
    {
        returnValue = F("Hochbuch");
        break;
    }
    case 146361:
    {
        returnValue = F("Hochbucher Weg");
        break;
    }
    case 146362:
    {
        returnValue = F("Hochbuchrundweg");
        break;
    }
    case 146363:
    {
        returnValue = F("Hochbuchstr.");
        break;
    }
    case 146364:
    {
        returnValue = F("Hochburg");
        break;
    }
    case 146365:
    {
        returnValue = F("Hochburger Str.");
        break;
    }
    case 146366:
    {
        returnValue = F("Hochburgweg");
        break;
    }
    case 146367:
    {
        returnValue = F("Hochbühl");
        break;
    }
    case 146368:
    {
        returnValue = F("Hochbühlstr.");
        break;
    }
    case 146369:
    {
        returnValue = F("Hochdahler Markt");
        break;
    }
    case 146370:
    {
        returnValue = F("Hochdahler Str.");
        break;
    }
    case 146371:
    {
        returnValue = F("Hochdoberner Weg");
        break;
    }
    case 146372:
    {
        returnValue = F("Hochdonner Barg");
        break;
    }
    case 146373:
    {
        returnValue = F("Hochdonner Chaussee");
        break;
    }
    case 146374:
    {
        returnValue = F("Hochdonner Str.");
        break;
    }
    case 146375:
    {
        returnValue = F("Hochdorf");
        break;
    }
    case 146376:
    {
        returnValue = F("Hochdorfer Garten");
        break;
    }
    case 146377:
    {
        returnValue = F("Hochdorfer Steige");
        break;
    }
    case 146378:
    {
        returnValue = F("Hochdorfer Str.");
        break;
    }
    case 146379:
    {
        returnValue = F("Hochdorfer Weg");
        break;
    }
    case 146380:
    {
        returnValue = F("Hochdorfstr.");
        break;
    }
    case 146381:
    {
        returnValue = F("Hocheckstr.");
        break;
    }
    case 146382:
    {
        returnValue = F("Hochegert");
        break;
    }
    case 146383:
    {
        returnValue = F("Hochegertstr.");
        break;
    }
    case 146384:
    {
        returnValue = F("Hochelheimer Str.");
        break;
    }
    case 146385:
    {
        returnValue = F("Hochelheimer Weg");
        break;
    }
    case 146386:
    {
        returnValue = F("Hochelstener Str.");
        break;
    }
    case 146387:
    {
        returnValue = F("Hochemminger Str.");
        break;
    }
    case 146388:
    {
        returnValue = F("Hochend");
        break;
    }
    case 146389:
    {
        returnValue = F("Hochendstr.");
        break;
    }
    case 146390:
    {
        returnValue = F("Hochensteig");
        break;
    }
    case 146391:
    {
        returnValue = F("Hochesterweg");
        break;
    }
    case 146392:
    {
        returnValue = F("Hochfahrnweg");
        break;
    }
    case 146393:
    {
        returnValue = F("Hochfeld");
        break;
    }
    case 146394:
    {
        returnValue = F("Hochfeldanger");
        break;
    }
    case 146395:
    {
        returnValue = F("Hochfelder Landstr.");
        break;
    }
    case 146396:
    {
        returnValue = F("Hochfelder Mühle");
        break;
    }
    case 146397:
    {
        returnValue = F("Hochfelder Weg");
        break;
    }
    case 146398:
    {
        returnValue = F("Hochfelderstr.");
        break;
    }
    case 146399:
    {
        returnValue = F("Hochfeldring");
        break;
    }
    case 146400:
    {
        returnValue = F("Hochfeldstr.");
        break;
    }
    case 146401:
    {
        returnValue = F("Hochfeldweg");
        break;
    }
    case 146402:
    {
        returnValue = F("Hochfellnstr.");
        break;
    }
    case 146403:
    {
        returnValue = F("Hochfellnweg");
        break;
    }
    case 146404:
    {
        returnValue = F("Hochfelserstr.");
        break;
    }
    case 146405:
    {
        returnValue = F("Hochfelstr.");
        break;
    }
    case 146406:
    {
        returnValue = F("Hochfirststr.");
        break;
    }
    case 146407:
    {
        returnValue = F("Hochfirstweg");
        break;
    }
    case 146408:
    {
        returnValue = F("Hochforlenweg");
        break;
    }
    case 146409:
    {
        returnValue = F("Hochfürststr.");
        break;
    }
    case 146410:
    {
        returnValue = F("Hochgartdörfl");
        break;
    }
    case 146411:
    {
        returnValue = F("Hochgarten");
        break;
    }
    case 146412:
    {
        returnValue = F("Hochgartenstr.");
        break;
    }
    case 146413:
    {
        returnValue = F("Hochgartenweg");
        break;
    }
    case 146414:
    {
        returnValue = F("Hochgasse");
        break;
    }
    case 146415:
    {
        returnValue = F("Hochgericht");
        break;
    }
    case 146416:
    {
        returnValue = F("Hochgerichtsstr.");
        break;
    }
    case 146417:
    {
        returnValue = F("Hochgerichtstr.");
        break;
    }
    case 146418:
    {
        returnValue = F("Hochgerichtsweg");
        break;
    }
    case 146419:
    {
        returnValue = F("Hochgernstr.");
        break;
    }
    case 146420:
    {
        returnValue = F("Hochgernweg");
        break;
    }
    case 146421:
    {
        returnValue = F("Hochgesangsweg");
        break;
    }
    case 146422:
    {
        returnValue = F("Hochgewann");
        break;
    }
    case 146423:
    {
        returnValue = F("Hochgewanne");
        break;
    }
    case 146424:
    {
        returnValue = F("Hochgewannweg");
        break;
    }
    case 146425:
    {
        returnValue = F("Hochgiebelweg");
        break;
    }
    case 146426:
    {
        returnValue = F("Hochgitzenweg");
        break;
    }
    case 146427:
    {
        returnValue = F("Hochglösingen");
        break;
    }
    case 146428:
    {
        returnValue = F("Hochgrabenstr.");
        break;
    }
    case 146429:
    {
        returnValue = F("Hochgraefestr.");
        break;
    }
    case 146430:
    {
        returnValue = F("Hochgrainstr.");
        break;
    }
    case 146431:
    {
        returnValue = F("Hochgratblick");
        break;
    }
    case 146432:
    {
        returnValue = F("Hochgratstr.");
        break;
    }
    case 146433:
    {
        returnValue = F("Hochgratweg");
        break;
    }
    case 146434:
    {
        returnValue = F("Hochgreut");
        break;
    }
    case 146435:
    {
        returnValue = F("Hochgrovener Weg");
        break;
    }
    case 146436:
    {
        returnValue = F("Hochgscheidweg");
        break;
    }
    case 146437:
    {
        returnValue = F("Hochgstattweg");
        break;
    }
    case 146438:
    {
        returnValue = F("Hochgärten");
        break;
    }
    case 146439:
    {
        returnValue = F("Hochhalden");
        break;
    }
    case 146440:
    {
        returnValue = F("Hochhaldenweg");
        break;
    }
    case 146441:
    {
        returnValue = F("Hochhaldeweg");
        break;
    }
    case 146442:
    {
        returnValue = F("Hochhaus");
        break;
    }
    case 146443:
    {
        returnValue = F("Hochhausener Weg");
        break;
    }
    case 146444:
    {
        returnValue = F("Hochhauser Str.");
        break;
    }
    case 146445:
    {
        returnValue = F("Hochhausstieg");
        break;
    }
    case 146446:
    {
        returnValue = F("Hochhausstr.");
        break;
    }
    case 146447:
    {
        returnValue = F("Hochhausweg");
        break;
    }
    case 146448:
    {
        returnValue = F("Hochheid");
        break;
    }
    case 146449:
    {
        returnValue = F("Hochheider Weg");
        break;
    }
    case 146450:
    {
        returnValue = F("Hochheideweg");
        break;
    }
    case 146451:
    {
        returnValue = F("Hochheim");
        break;
    }
    case 146452:
    {
        returnValue = F("Hochheimer Eck");
        break;
    }
    case 146453:
    {
        returnValue = F("Hochheimer Landstr.");
        break;
    }
    case 146454:
    {
        returnValue = F("Hochheimer Str.");
        break;
    }
    case 146455:
    {
        returnValue = F("Hochheimer Weg");
        break;
    }
    case 146456:
    {
        returnValue = F("Hochheimstr.");
        break;
    }
    case 146457:
    {
        returnValue = F("Hochholdinger Str.");
        break;
    }
    case 146458:
    {
        returnValue = F("Hochholtingerstr.");
        break;
    }
    case 146459:
    {
        returnValue = F("Hochholzen");
        break;
    }
    case 146460:
    {
        returnValue = F("Hochholzer Str.");
        break;
    }
    case 146461:
    {
        returnValue = F("Hochholzer Weg");
        break;
    }
    case 146462:
    {
        returnValue = F("Hochholzerstr.");
        break;
    }
    case 146463:
    {
        returnValue = F("Hochholzstr.");
        break;
    }
    case 146464:
    {
        returnValue = F("Hochholzsträßchen");
        break;
    }
    case 146465:
    {
        returnValue = F("Hochholzweg");
        break;
    }
    case 146466:
    {
        returnValue = F("Hochhorner Str.");
        break;
    }
    case 146467:
    {
        returnValue = F("Hochhorst");
        break;
    }
    case 146468:
    {
        returnValue = F("Hochhuthstr.");
        break;
    }
    case 146469:
    {
        returnValue = F("Hochhäuser Grund");
        break;
    }
    case 146470:
    {
        returnValue = F("Hochhäuser Str.");
        break;
    }
    case 146471:
    {
        returnValue = F("Hochhäuslweg");
        break;
    }
    case 146472:
    {
        returnValue = F("Hochisterweg");
        break;
    }
    case 146473:
    {
        returnValue = F("Hochkalterstr.");
        break;
    }
    case 146474:
    {
        returnValue = F("Hochkalterweg");
        break;
    }
    case 146475:
    {
        returnValue = F("Hochkamerstr.");
        break;
    }
    case 146476:
    {
        returnValue = F("Hochkamp");
        break;
    }
    case 146477:
    {
        returnValue = F("Hochkamper Damm");
        break;
    }
    case 146478:
    {
        returnValue = F("Hochkampstr.");
        break;
    }
    case 146479:
    {
        returnValue = F("Hochkirchener Str.");
        break;
    }
    case 146480:
    {
        returnValue = F("Hochkirchstr.");
        break;
    }
    case 146481:
    {
        returnValue = F("Hochkopfstr.");
        break;
    }
    case 146482:
    {
        returnValue = F("Hochkopfweg");
        break;
    }
    case 146483:
    {
        returnValue = F("Hochkoppel");
        break;
    }
    case 146484:
    {
        returnValue = F("Hochkreuterstr.");
        break;
    }
    case 146485:
    {
        returnValue = F("Hochkreuth");
        break;
    }
    case 146486:
    {
        returnValue = F("Hochkreuthweg");
        break;
    }
    case 146487:
    {
        returnValue = F("Hochkreuz");
        break;
    }
    case 146488:
    {
        returnValue = F("Hochkreuzbergstr.");
        break;
    }
    case 146489:
    {
        returnValue = F("Hochkreuzstr.");
        break;
    }
    case 146490:
    {
        returnValue = F("Hochkreuzweg");
        break;
    }
    case 146491:
    {
        returnValue = F("Hochkönigstr.");
        break;
    }
    case 146492:
    {
        returnValue = F("Hochlagenstr.");
        break;
    }
    case 146493:
    {
        returnValue = F("Hochlandstr.");
        break;
    }
    case 146494:
    {
        returnValue = F("Hochlandsweg");
        break;
    }
    case 146495:
    {
        returnValue = F("Hochlandweg");
        break;
    }
    case 146496:
    {
        returnValue = F("Hochleite");
        break;
    }
    case 146497:
    {
        returnValue = F("Hochleiten");
        break;
    }
    case 146498:
    {
        returnValue = F("Hochleitenrundweg");
        break;
    }
    case 146499:
    {
        returnValue = F("Hochleitenweg");
        break;
    }
    case 146500:
    {
        returnValue = F("Hochlerchstr.");
        break;
    }
    case 146501:
    {
        returnValue = F("Hochlerchweg");
        break;
    }
    case 146502:
    {
        returnValue = F("Hochlohe");
        break;
    }
    case 146503:
    {
        returnValue = F("Hochlumland");
        break;
    }
    case 146504:
    {
        returnValue = F("Hochlärchweg");
        break;
    }
    case 146505:
    {
        returnValue = F("Hochmaiengasse");
        break;
    }
    case 146506:
    {
        returnValue = F("Hochmannweg");
        break;
    }
    case 146507:
    {
        returnValue = F("Hochmark");
        break;
    }
    case 146508:
    {
        returnValue = F("Hochmaurenstr.");
        break;
    }
    case 146509:
    {
        returnValue = F("Hochmeedenweg");
        break;
    }
    case 146510:
    {
        returnValue = F("Hochmeisterstr.");
        break;
    }
    case 146511:
    {
        returnValue = F("Hochmode");
        break;
    }
    case 146512:
    {
        returnValue = F("Hochmoor");
        break;
    }
    case 146513:
    {
        returnValue = F("Hochmoordamm");
        break;
    }
    case 146514:
    {
        returnValue = F("Hochmoorredder");
        break;
    }
    case 146515:
    {
        returnValue = F("Hochmoorsdamm");
        break;
    }
    case 146516:
    {
        returnValue = F("Hochmoorsdamm 2");
        break;
    }
    case 146517:
    {
        returnValue = F("Hochmoorstr.");
        break;
    }
    case 146518:
    {
        returnValue = F("Hochmoorweg");
        break;
    }
    case 146519:
    {
        returnValue = F("Hochmoos");
        break;
    }
    case 146520:
    {
        returnValue = F("Hochmooser Str.");
        break;
    }
    case 146521:
    {
        returnValue = F("Hochmoosweg");
        break;
    }
    case 146522:
    {
        returnValue = F("Hochmutskarte");
        break;
    }
    case 146523:
    {
        returnValue = F("Hochmuttinger Str.");
        break;
    }
    case 146524:
    {
        returnValue = F("Hochmössinger Str.");
        break;
    }
    case 146525:
    {
        returnValue = F("Hochoberndorf");
        break;
    }
    case 146526:
    {
        returnValue = F("Hochofen");
        break;
    }
    case 146527:
    {
        returnValue = F("Hochofengasse");
        break;
    }
    case 146528:
    {
        returnValue = F("Hochofengrund");
        break;
    }
    case 146529:
    {
        returnValue = F("Hochofenstr.");
        break;
    }
    case 146530:
    {
        returnValue = F("Hochofenweg");
        break;
    }
    case 146531:
    {
        returnValue = F("Hochplattenstr.");
        break;
    }
    case 146532:
    {
        returnValue = F("Hochplattenweg");
        break;
    }
    case 146533:
    {
        returnValue = F("Hochplattstr.");
        break;
    }
    case 146534:
    {
        returnValue = F("Hochrain");
        break;
    }
    case 146535:
    {
        returnValue = F("Hochrainerstr.");
        break;
    }
    case 146536:
    {
        returnValue = F("Hochrainstr.");
        break;
    }
    case 146537:
    {
        returnValue = F("Hochrainweg");
        break;
    }
    case 146538:
    {
        returnValue = F("Hochrankenweg");
        break;
    }
    case 146539:
    {
        returnValue = F("Hochreit");
        break;
    }
    case 146540:
    {
        returnValue = F("Hochreiter Str.");
        break;
    }
    case 146541:
    {
        returnValue = F("Hochreiter Weg");
        break;
    }
    case 146542:
    {
        returnValue = F("Hochreith");
        break;
    }
    case 146543:
    {
        returnValue = F("Hochreut");
        break;
    }
    case 146544:
    {
        returnValue = F("Hochreutestr.");
        break;
    }
    case 146545:
    {
        returnValue = F("Hochreuth");
        break;
    }
    case 146546:
    {
        returnValue = F("Hochreuther Str.");
        break;
    }
    case 146547:
    {
        returnValue = F("Hochreuthstr.");
        break;
    }
    case 146548:
    {
        returnValue = F("Hochreutweg");
        break;
    }
    case 146549:
    {
        returnValue = F("Hochrheinbrücke");
        break;
    }
    case 146550:
    {
        returnValue = F("Hochrhöner");
        break;
    }
    case 146551:
    {
        returnValue = F("Hochrhöner - Lange Rhön");
        break;
    }
    case 146552:
    {
        returnValue = F("Hochrhöner nach Tann");
        break;
    }
    case 146553:
    {
        returnValue = F("Hochrhönring");
        break;
    }
    case 146554:
    {
        returnValue = F("Hochrhönstr.");
        break;
    }
    case 146555:
    {
        returnValue = F("Hochriesstr.");
        break;
    }
    case 146556:
    {
        returnValue = F("Hochriesweg");
        break;
    }
    case 146557:
    {
        returnValue = F("Hochrießstr.");
        break;
    }
    case 146558:
    {
        returnValue = F("Hochring");
        break;
    }
    case 146559:
    {
        returnValue = F("Hochrißweg");
        break;
    }
    case 146560:
    {
        returnValue = F("Hochruckäcker");
        break;
    }
    case 146561:
    {
        returnValue = F("Hochrückstr.");
        break;
    }
    case 146562:
    {
        returnValue = F("Hochrüttestr.");
        break;
    }
    case 146563:
    {
        returnValue = F("Hochsaal Redder");
        break;
    }
    case 146564:
    {
        returnValue = F("Hochsaler Str.");
        break;
    }
    case 146565:
    {
        returnValue = F("Hochsalerweg");
        break;
    }
    case 146566:
    {
        returnValue = F("Hochsalwandstr.");
        break;
    }
    case 146567:
    {
        returnValue = F("Hochsandstr.");
        break;
    }
    case 146568:
    {
        returnValue = F("Hochsauerland Höhenstr.");
        break;
    }
    case 146569:
    {
        returnValue = F("Hochsauerlandstr.");
        break;
    }
    case 146570:
    {
        returnValue = F("Hochschachtenstr.");
        break;
    }
    case 146571:
    {
        returnValue = F("Hochscheid");
        break;
    }
    case 146572:
    {
        returnValue = F("Hochscheider Gasse");
        break;
    }
    case 146573:
    {
        returnValue = F("Hochscheider Str.");
        break;
    }
    case 146574:
    {
        returnValue = F("Hochscheider Weg");
        break;
    }
    case 146575:
    {
        returnValue = F("Hochscheiderstr.");
        break;
    }
    case 146576:
    {
        returnValue = F("Hochscheidstr.");
        break;
    }
    case 146577:
    {
        returnValue = F("Hochscheuer Weg");
        break;
    }
    case 146578:
    {
        returnValue = F("Hochschildstr.");
        break;
    }
    case 146579:
    {
        returnValue = F("Hochschlade");
        break;
    }
    case 146580:
    {
        returnValue = F("Hochschneise");
        break;
    }
    case 146581:
    {
        returnValue = F("Hochschulallee");
        break;
    }
    case 146582:
    {
        returnValue = F("Hochschule/Läger");
        break;
    }
    case 146583:
    {
        returnValue = F("Hochschulring");
        break;
    }
    case 146584:
    {
        returnValue = F("Hochschulstr.");
        break;
    }
    case 146585:
    {
        returnValue = F("Hochsimmer Str.");
        break;
    }
    case 146586:
    {
        returnValue = F("Hochsimmerblick");
        break;
    }
    case 146587:
    {
        returnValue = F("Hochsimmerstr.");
        break;
    }
    case 146588:
    {
        returnValue = F("Hochsitz");
        break;
    }
    case 146589:
    {
        returnValue = F("Hochsmühle");
        break;
    }
    case 146590:
    {
        returnValue = F("Hochspannungsweg");
        break;
    }
    case 146591:
    {
        returnValue = F("Hochspeyerer Str.");
        break;
    }
    case 146592:
    {
        returnValue = F("Hochspitze");
        break;
    }
    case 146593:
    {
        returnValue = F("Hochstadenstr.");
        break;
    }
    case 146594:
    {
        returnValue = F("Hochstadt");
        break;
    }
    case 146595:
    {
        returnValue = F("Hochstadter Str.");
        break;
    }
    case 146596:
    {
        returnValue = F("Hochstadter Weg");
        break;
    }
    case 146597:
    {
        returnValue = F("Hochstadtstr.");
        break;
    }
    case 146598:
    {
        returnValue = F("Hochstadtweg");
        break;
    }
    case 146599:
    {
        returnValue = F("Hochstahler Weg");
        break;
    }
    case 146600:
    {
        returnValue = F("Hochstallen");
        break;
    }
    case 146601:
    {
        returnValue = F("Hochstand");
        break;
    }
    case 146602:
    {
        returnValue = F("Hochstandsträßle");
        break;
    }
    case 146603:
    {
        returnValue = F("Hochstatt");
        break;
    }
    case 146604:
    {
        returnValue = F("Hochstattmühle");
        break;
    }
    case 146605:
    {
        returnValue = F("Hochstattmühlstr.");
        break;
    }
    case 146606:
    {
        returnValue = F("Hochstattstr.");
        break;
    }
    case 146607:
    {
        returnValue = F("Hochstattweg");
        break;
    }
    case 146608:
    {
        returnValue = F("Hochstaudenweg");
        break;
    }
    case 146609:
    {
        returnValue = F("Hochstaufenstr.");
        break;
    }
    case 146610:
    {
        returnValue = F("Hochstaufenweg");
        break;
    }
    case 146611:
    {
        returnValue = F("Hochstedenstr.");
        break;
    }
    case 146612:
    {
        returnValue = F("Hochstedt");
        break;
    }
    case 146613:
    {
        returnValue = F("Hochstedter Str.");
        break;
    }
    case 146614:
    {
        returnValue = F("Hochsteen");
        break;
    }
    case 146615:
    {
        returnValue = F("Hochsteg");
        break;
    }
    case 146616:
    {
        returnValue = F("Hochsteig");
        break;
    }
    case 146617:
    {
        returnValue = F("Hochsteigerweg");
        break;
    }
    case 146618:
    {
        returnValue = F("Hochsteigleweg");
        break;
    }
    case 146619:
    {
        returnValue = F("Hochsteigstr.");
        break;
    }
    case 146620:
    {
        returnValue = F("Hochstein");
        break;
    }
    case 146621:
    {
        returnValue = F("Hochsteinring");
        break;
    }
    case 146622:
    {
        returnValue = F("Hochsteinsiedlung");
        break;
    }
    case 146623:
    {
        returnValue = F("Hochsteinstr.");
        break;
    }
    case 146624:
    {
        returnValue = F("Hochsteinweg");
        break;
    }
    case 146625:
    {
        returnValue = F("Hochstetten");
        break;
    }
    case 146626:
    {
        returnValue = F("Hochstetter Feld");
        break;
    }
    case 146627:
    {
        returnValue = F("Hochstetter Höhe");
        break;
    }
    case 146628:
    {
        returnValue = F("Hochstetter Str.");
        break;
    }
    case 146629:
    {
        returnValue = F("Hochstetter Weg");
        break;
    }
    case 146630:
    {
        returnValue = F("Hochstetterstr.");
        break;
    }
    case 146631:
    {
        returnValue = F("Hochstetterweg");
        break;
    }
    case 146632:
    {
        returnValue = F("Hochstettstr.");
        break;
    }
    case 146633:
    {
        returnValue = F("Hochstichersteg");
        break;
    }
    case 146634:
    {
        returnValue = F("Hochstichweg");
        break;
    }
    case 146635:
    {
        returnValue = F("Hochstieg");
        break;
    }
    case 146636:
    {
        returnValue = F("Hochstiegweg");
        break;
    }
    case 146637:
    {
        returnValue = F("Hochstift-Freising-Platz");
        break;
    }
    case 146638:
    {
        returnValue = F("Hochstift-Freising-Weg");
        break;
    }
    case 146639:
    {
        returnValue = F("Hochstiftgasse");
        break;
    }
    case 146640:
    {
        returnValue = F("Hochstiftring");
        break;
    }
    case 146641:
    {
        returnValue = F("Hochstiftstr.");
        break;
    }
    case 146642:
    {
        returnValue = F("Hochstiftsweg");
        break;
    }
    case 146643:
    {
        returnValue = F("Hochstiftweg");
        break;
    }
    case 146644:
    {
        returnValue = F("Hochstockweg");
        break;
    }
    case 146645:
    {
        returnValue = F("Hochstr.");
        break;
    }
    case 146646:
    {
        returnValue = F("Hochstr. (ehem. Regensburger Str.)");
        break;
    }
    case 146647:
    {
        returnValue = F("Hochstr. (ehem.Nürnberger Str.)");
        break;
    }
    case 146648:
    {
        returnValue = F("Hochstr.n");
        break;
    }
    case 146649:
    {
        returnValue = F("Hochstr.nfeld");
        break;
    }
    case 146650:
    {
        returnValue = F("Hochstr.r Weg");
        break;
    }
    case 146651:
    {
        returnValue = F("Hochstraß");
        break;
    }
    case 146652:
    {
        returnValue = F("Hochstraß-Geräumt");
        break;
    }
    case 146653:
    {
        returnValue = F("Hochstraß-Süd");
        break;
    }
    case 146654:
    {
        returnValue = F("Hochsträss");
        break;
    }
    case 146655:
    {
        returnValue = F("Hochsträß");
        break;
    }
    case 146656:
    {
        returnValue = F("Hochsträßel");
        break;
    }
    case 146657:
    {
        returnValue = F("Hochsträßweg");
        break;
    }
    case 146658:
    {
        returnValue = F("Hochstädten");
        break;
    }
    case 146659:
    {
        returnValue = F("Hochstädter Str.");
        break;
    }
    case 146660:
    {
        returnValue = F("Hochstädter Weg");
        break;
    }
    case 146661:
    {
        returnValue = F("Hochstättenweg");
        break;
    }
    case 146662:
    {
        returnValue = F("Hochstätter Str.");
        break;
    }
    case 146663:
    {
        returnValue = F("Hochstätter Weg");
        break;
    }
    case 146664:
    {
        returnValue = F("Hochstätterberg");
        break;
    }
    case 146665:
    {
        returnValue = F("Hochstättstr.");
        break;
    }
    case 146666:
    {
        returnValue = F("Hochstücklweg");
        break;
    }
    case 146667:
    {
        returnValue = F("Hochtal");
        break;
    }
    case 146668:
    {
        returnValue = F("Hochtalstr.");
        break;
    }
    case 146669:
    {
        returnValue = F("Hochtanger Weg");
        break;
    }
    case 146670:
    {
        returnValue = F("Hochtannel");
        break;
    }
    case 146671:
    {
        returnValue = F("Hochtannenweg");
        break;
    }
    case 146672:
    {
        returnValue = F("Hochtanner Brücke");
        break;
    }
    case 146673:
    {
        returnValue = F("Hochtanner Weg");
        break;
    }
    case 146674:
    {
        returnValue = F("Hochtannweg");
        break;
    }
    case 146675:
    {
        returnValue = F("Hochtaunusstr.");
        break;
    }
    case 146676:
    {
        returnValue = F("Hochtennenweg");
        break;
    }
    case 146677:
    {
        returnValue = F("Hochthannet");
        break;
    }
    case 146678:
    {
        returnValue = F("Hochtheta");
        break;
    }
    case 146679:
    {
        returnValue = F("Hochthumer Schneise");
        break;
    }
    case 146680:
    {
        returnValue = F("Hochthürmer Str.");
        break;
    }
    case 146681:
    {
        returnValue = F("Hochtoft");
        break;
    }
    case 146682:
    {
        returnValue = F("Hochtor");
        break;
    }
    case 146683:
    {
        returnValue = F("Hochtorstr.");
        break;
    }
    case 146684:
    {
        returnValue = F("Hochturmgasse");
        break;
    }
    case 146685:
    {
        returnValue = F("Hochtürmer Str.");
        break;
    }
    case 146686:
    {
        returnValue = F("Hochtürmerblick");
        break;
    }
    case 146687:
    {
        returnValue = F("Hochuferstr.");
        break;
    }
    case 146688:
    {
        returnValue = F("Hochuferwanderweg");
        break;
    }
    case 146689:
    {
        returnValue = F("Hochuferweg");
        break;
    }
    case 146690:
    {
        returnValue = F("Hochviölberg");
        break;
    }
    case 146691:
    {
        returnValue = F("Hochviölfeld");
        break;
    }
    case 146692:
    {
        returnValue = F("Hochvogelstr.");
        break;
    }
    case 146693:
    {
        returnValue = F("Hochvogelweg");
        break;
    }
    case 146694:
    {
        returnValue = F("Hochwald");
        break;
    }
    case 146695:
    {
        returnValue = F("Hochwaldallee");
        break;
    }
    case 146696:
    {
        returnValue = F("Hochwaldblick");
        break;
    }
    case 146697:
    {
        returnValue = F("Hochwalder Str.");
        break;
    }
    case 146698:
    {
        returnValue = F("Hochwaldgasse");
        break;
    }
    case 146699:
    {
        returnValue = F("Hochwaldhäuser Str.");
        break;
    }
    case 146700:
    {
        returnValue = F("Hochwaldpromenade");
        break;
    }
    case 146701:
    {
        returnValue = F("Hochwaldschleifweg");
        break;
    }
    case 146702:
    {
        returnValue = F("Hochwaldsteig");
        break;
    }
    case 146703:
    {
        returnValue = F("Hochwaldstr.");
        break;
    }
    case 146704:
    {
        returnValue = F("Hochwaldweg");
        break;
    }
    case 146705:
    {
        returnValue = F("Hochwandweg");
        break;
    }
    case 146706:
    {
        returnValue = F("Hochwanger Str.");
        break;
    }
    case 146707:
    {
        returnValue = F("Hochwanger Weg");
        break;
    }
    case 146708:
    {
        returnValue = F("Hochwannerweg");
        break;
    }
    case 146709:
    {
        returnValue = F("Hochwarfts Mittelpfad");
        break;
    }
    case 146710:
    {
        returnValue = F("Hochwart");
        break;
    }
    case 146711:
    {
        returnValue = F("Hochwartstr.");
        break;
    }
    case 146712:
    {
        returnValue = F("Hochwasserdamm");
        break;
    }
    case 146713:
    {
        returnValue = F("Hochwasserdeich");
        break;
    }
    case 146714:
    {
        returnValue = F("Hochwasserrückhaltebecken Eldern");
        break;
    }
    case 146715:
    {
        returnValue = F("Hochwasserrückhaltebecken Merching");
        break;
    }
    case 146716:
    {
        returnValue = F("Hochwasserrückhaltebecken Putzmühle");
        break;
    }
    case 146717:
    {
        returnValue = F("Hochwasserrückhalteraum");
        break;
    }
    case 146718:
    {
        returnValue = F("Hochwasserschutzdamm Moosheide");
        break;
    }
    case 146719:
    {
        returnValue = F("Hochwasserschutzdamm der Enz");
        break;
    }
    case 146720:
    {
        returnValue = F("Hochwasserschutzdeich");
        break;
    }
    case 146721:
    {
        returnValue = F("Hochwasserweg");
        break;
    }
    case 146722:
    {
        returnValue = F("Hochwasser­rückhaltebecken Feldolling");
        break;
    }
    case 146723:
    {
        returnValue = F("Hochwedelteil");
        break;
    }
    case 146724:
    {
        returnValue = F("Hochweg");
        break;
    }
    case 146725:
    {
        returnValue = F("Hochwegbrücke");
        break;
    }
    case 146726:
    {
        returnValue = F("Hochwegen");
        break;
    }
    case 146727:
    {
        returnValue = F("Hochweiler");
        break;
    }
    case 146728:
    {
        returnValue = F("Hochwies");
        break;
    }
    case 146729:
    {
        returnValue = F("Hochwiese");
        break;
    }
    case 146730:
    {
        returnValue = F("Hochwiesen");
        break;
    }
    case 146731:
    {
        returnValue = F("Hochwiesenhof");
        break;
    }
    case 146732:
    {
        returnValue = F("Hochwiesenring");
        break;
    }
    case 146733:
    {
        returnValue = F("Hochwiesenstr.");
        break;
    }
    case 146734:
    {
        returnValue = F("Hochwiesenweg");
        break;
    }
    case 146735:
    {
        returnValue = F("Hochwieser Str.");
        break;
    }
    case 146736:
    {
        returnValue = F("Hochwiesle");
        break;
    }
    case 146737:
    {
        returnValue = F("Hochwiesmühle");
        break;
    }
    case 146738:
    {
        returnValue = F("Hochwiesmühlstr.");
        break;
    }
    case 146739:
    {
        returnValue = F("Hochwiesstr.");
        break;
    }
    case 146740:
    {
        returnValue = F("Hochwiesweg");
        break;
    }
    case 146741:
    {
        returnValue = F("Hochwurzweg");
        break;
    }
    case 146742:
    {
        returnValue = F("Hochwöhrden");
        break;
    }
    case 146743:
    {
        returnValue = F("Hochwöhrdener Weg");
        break;
    }
    case 146744:
    {
        returnValue = F("Hochwürden-Leeb-Str.");
        break;
    }
    case 146745:
    {
        returnValue = F("Hochzeits- und Jubiläumswäldchen");
        break;
    }
    case 146746:
    {
        returnValue = F("Hochzeitsallee");
        break;
    }
    case 146747:
    {
        returnValue = F("Hochzeitsberg");
        break;
    }
    case 146748:
    {
        returnValue = F("Hochzeitsgarten");
        break;
    }
    case 146749:
    {
        returnValue = F("Hochzeitsgasse");
        break;
    }
    case 146750:
    {
        returnValue = F("Hochzeitspark");
        break;
    }
    case 146751:
    {
        returnValue = F("Hochzeitspfad");
        break;
    }
    case 146752:
    {
        returnValue = F("Hochzeitsstr.");
        break;
    }
    case 146753:
    {
        returnValue = F("Hochzeitstr.");
        break;
    }
    case 146754:
    {
        returnValue = F("Hochzeitswald");
        break;
    }
    case 146755:
    {
        returnValue = F("Hochzeitsweg");
        break;
    }
    case 146756:
    {
        returnValue = F("Hochzeitswiese");
        break;
    }
    case 146757:
    {
        returnValue = F("Hochzeitswiese Nagold");
        break;
    }
    case 146758:
    {
        returnValue = F("Hochzeitswäldchen");
        break;
    }
    case 146759:
    {
        returnValue = F("Hochzellstr.");
        break;
    }
    case 146760:
    {
        returnValue = F("Hochzielstr.");
        break;
    }
    case 146761:
    {
        returnValue = F("Hochäcker");
        break;
    }
    case 146762:
    {
        returnValue = F("Hochäckerstr.");
        break;
    }
    case 146763:
    {
        returnValue = F("Hochäckerweg");
        break;
    }
    case 146764:
    {
        returnValue = F("Hochöder Str.");
        break;
    }
    case 146765:
    {
        returnValue = F("Hockefeldtwete");
        break;
    }
    case 146766:
    {
        returnValue = F("Hockelbachstr.");
        break;
    }
    case 146767:
    {
        returnValue = F("Hockelheimer Weg");
        break;
    }
    case 146768:
    {
        returnValue = F("Hockenberg");
        break;
    }
    case 146769:
    {
        returnValue = F("Hockenbroicher Str.");
        break;
    }
    case 146770:
    {
        returnValue = F("Hockenbrucher Str.");
        break;
    }
    case 146771:
    {
        returnValue = F("Hockenbruchstr.");
        break;
    }
    case 146772:
    {
        returnValue = F("Hockengasse");
        break;
    }
    case 146773:
    {
        returnValue = F("Hockenheimer Landstr.");
        break;
    }
    case 146774:
    {
        returnValue = F("Hockenheimer Str.");
        break;
    }
    case 146775:
    {
        returnValue = F("Hockenheimer Weg");
        break;
    }
    case 146776:
    {
        returnValue = F("Hockenmühlweg");
        break;
    }
    case 146777:
    {
        returnValue = F("Hockenruh");
        break;
    }
    case 146778:
    {
        returnValue = F("Hockergasse");
        break;
    }
    case 146779:
    {
        returnValue = F("Hockergräberstr.");
        break;
    }
    case 146780:
    {
        returnValue = F("Hockerweg");
        break;
    }
    case 146781:
    {
        returnValue = F("Hockeweg");
        break;
    }
    case 146782:
    {
        returnValue = F("Hockgasse");
        break;
    }
    case 146783:
    {
        returnValue = F("Hocksstr.");
        break;
    }
    case 146784:
    {
        returnValue = F("Hockstr.");
        break;
    }
    case 146785:
    {
        returnValue = F("Hockweide");
        break;
    }
    case 146786:
    {
        returnValue = F("Hockweilerstr.");
        break;
    }
    case 146787:
    {
        returnValue = F("Hodagswinkel");
        break;
    }
    case 146788:
    {
        returnValue = F("Hoddelkestr.");
        break;
    }
    case 146789:
    {
        returnValue = F("Hoddenbergstr.");
        break;
    }
    case 146790:
    {
        returnValue = F("Hoddersdiek");
        break;
    }
    case 146791:
    {
        returnValue = F("Hodderuper Weg");
        break;
    }
    case 146792:
    {
        returnValue = F("Hodebuschheck");
        break;
    }
    case 146793:
    {
        returnValue = F("Hodenbergstr.");
        break;
    }
    case 146794:
    {
        returnValue = F("Hodenhagener Str.");
        break;
    }
    case 146795:
    {
        returnValue = F("Hoderweg");
        break;
    }
    case 146796:
    {
        returnValue = F("Hodesstr.");
        break;
    }
    case 146797:
    {
        returnValue = F("Hodgerother Str.");
        break;
    }
    case 146798:
    {
        returnValue = F("Hodlerstr.");
        break;
    }
    case 146799:
    {
        returnValue = F("Hodschager Str.");
        break;
    }
    case 146800:
    {
        returnValue = F("Hoeborn-Kuhlmann-Weg");
        break;
    }
    case 146801:
    {
        returnValue = F("Hoechster Str.");
        break;
    }
    case 146802:
    {
        returnValue = F("Hoechster Weg");
        break;
    }
    case 146803:
    {
        returnValue = F("Hoechstetterstr.");
        break;
    }
    case 146804:
    {
        returnValue = F("Hoecht");
        break;
    }
    case 146805:
    {
        returnValue = F("Hoefelstr.");
        break;
    }
    case 146806:
    {
        returnValue = F("Hoefftstr.");
        break;
    }
    case 146807:
    {
        returnValue = F("Hoeflerstr.");
        break;
    }
    case 146808:
    {
        returnValue = F("Hoefnagelsdyk");
        break;
    }
    case 146809:
    {
        returnValue = F("Hoeftenfehn");
        break;
    }
    case 146810:
    {
        returnValue = F("Hoegenweg");
        break;
    }
    case 146811:
    {
        returnValue = F("Hoegnerstr.");
        break;
    }
    case 146812:
    {
        returnValue = F("Hoeh");
        break;
    }
    case 146813:
    {
        returnValue = F("Hoek");
        break;
    }
    case 146814:
    {
        returnValue = F("Hoekerweg");
        break;
    }
    case 146815:
    {
        returnValue = F("Hoekstr.");
        break;
    }
    case 146816:
    {
        returnValue = F("Hoelemannpromenade");
        break;
    }
    case 146817:
    {
        returnValue = F("Hoellingstr.");
        break;
    }
    case 146818:
    {
        returnValue = F("Hoelzleweg");
        break;
    }
    case 146819:
    {
        returnValue = F("Hoemannsdyk");
        break;
    }
    case 146820:
    {
        returnValue = F("Hoener Wischken");
        break;
    }
    case 146821:
    {
        returnValue = F("Hoenersstiege");
        break;
    }
    case 146822:
    {
        returnValue = F("Hoenersweg");
        break;
    }
    case 146823:
    {
        returnValue = F("Hoengener Str.");
        break;
    }
    case 146824:
    {
        returnValue = F("Hoengener Weg");
        break;
    }
    case 146825:
    {
        returnValue = F("Hoenhorst");
        break;
    }
    case 146826:
    {
        returnValue = F("Hoeninger Str.");
        break;
    }
    case 146827:
    {
        returnValue = F("Hoensbergweg");
        break;
    }
    case 146828:
    {
        returnValue = F("Hoensbroechstr.");
        break;
    }
    case 146829:
    {
        returnValue = F("Hoepen");
        break;
    }
    case 146830:
    {
        returnValue = F("Hoepperbuschweg");
        break;
    }
    case 146831:
    {
        returnValue = F("Hoerle-Park");
        break;
    }
    case 146832:
    {
        returnValue = F("Hoermanngasse");
        break;
    }
    case 146833:
    {
        returnValue = F("Hoernerstr.");
        break;
    }
    case 146834:
    {
        returnValue = F("Hoerstgener Landstr.");
        break;
    }
    case 146835:
    {
        returnValue = F("Hoerstgener Landtraße");
        break;
    }
    case 146836:
    {
        returnValue = F("Hoerstgener Str.");
        break;
    }
    case 146837:
    {
        returnValue = F("Hoeschpark");
        break;
    }
    case 146838:
    {
        returnValue = F("Hoeschstr.");
        break;
    }
    case 146839:
    {
        returnValue = F("Hoeschweg");
        break;
    }
    case 146840:
    {
        returnValue = F("Hoesingwehr");
        break;
    }
    case 146841:
    {
        returnValue = F("Hoester Weg");
        break;
    }
    case 146842:
    {
        returnValue = F("Hoeterstr.");
        break;
    }
    case 146843:
    {
        returnValue = F("Hoetger-Gasse");
        break;
    }
    case 146844:
    {
        returnValue = F("Hoetmarer Str.");
        break;
    }
    case 146845:
    {
        returnValue = F("Hoetsen");
        break;
    }
    case 146846:
    {
        returnValue = F("Hoevelstr.");
        break;
    }
    case 146847:
    {
        returnValue = F("Hoevermannskamp");
        break;
    }
    case 146848:
    {
        returnValue = F("Hoeweg");
        break;
    }
    case 146849:
    {
        returnValue = F("Hof");
        break;
    }
    case 146850:
    {
        returnValue = F("Hof 1");
        break;
    }
    case 146851:
    {
        returnValue = F("Hof 2");
        break;
    }
    case 146852:
    {
        returnValue = F("Hof 3");
        break;
    }
    case 146853:
    {
        returnValue = F("Hof 4");
        break;
    }
    case 146854:
    {
        returnValue = F("Hof 5");
        break;
    }
    case 146855:
    {
        returnValue = F("Hof 6");
        break;
    }
    case 146856:
    {
        returnValue = F("Hof 7");
        break;
    }
    case 146857:
    {
        returnValue = F("Hof Aedeberg");
        break;
    }
    case 146858:
    {
        returnValue = F("Hof Afterode");
        break;
    }
    case 146859:
    {
        returnValue = F("Hof Aischland");
        break;
    }
    case 146860:
    {
        returnValue = F("Hof Altmühlen");
        break;
    }
    case 146861:
    {
        returnValue = F("Hof Backeberg");
        break;
    }
    case 146862:
    {
        returnValue = F("Hof Baiertal");
        break;
    }
    case 146863:
    {
        returnValue = F("Hof Baller");
        break;
    }
    case 146864:
    {
        returnValue = F("Hof Barge");
        break;
    }
    case 146865:
    {
        returnValue = F("Hof Beel");
        break;
    }
    case 146866:
    {
        returnValue = F("Hof Berensheck");
        break;
    }
    case 146867:
    {
        returnValue = F("Hof Bergfried");
        break;
    }
    case 146868:
    {
        returnValue = F("Hof Bockheber");
        break;
    }
    case 146869:
    {
        returnValue = F("Hof Bokhorst");
        break;
    }
    case 146870:
    {
        returnValue = F("Hof Borgwedel");
        break;
    }
    case 146871:
    {
        returnValue = F("Hof Bornhorst");
        break;
    }
    case 146872:
    {
        returnValue = F("Hof Brunnmatt");
        break;
    }
    case 146873:
    {
        returnValue = F("Hof Brüggemann");
        break;
    }
    case 146874:
    {
        returnValue = F("Hof Bubental");
        break;
    }
    case 146875:
    {
        returnValue = F("Hof Buchen");
        break;
    }
    case 146876:
    {
        returnValue = F("Hof Buchenberg");
        break;
    }
    case 146877:
    {
        returnValue = F("Hof Buschberg");
        break;
    }
    case 146878:
    {
        returnValue = F("Hof Buschel");
        break;
    }
    case 146879:
    {
        returnValue = F("Hof Böingholz");
        break;
    }
    case 146880:
    {
        returnValue = F("Hof Damberg");
        break;
    }
    case 146881:
    {
        returnValue = F("Hof Darzau");
        break;
    }
    case 146882:
    {
        returnValue = F("Hof Deibow");
        break;
    }
    case 146883:
    {
        returnValue = F("Hof Deitmar");
        break;
    }
    case 146884:
    {
        returnValue = F("Hof Deutschherrnhütte");
        break;
    }
    case 146885:
    {
        returnValue = F("Hof Dik");
        break;
    }
    case 146886:
    {
        returnValue = F("Hof Dunk");
        break;
    }
    case 146887:
    {
        returnValue = F("Hof Eichenweg");
        break;
    }
    case 146888:
    {
        returnValue = F("Hof Eichholz");
        break;
    }
    case 146889:
    {
        returnValue = F("Hof Ellinghaus");
        break;
    }
    case 146890:
    {
        returnValue = F("Hof Epchenbach");
        break;
    }
    case 146891:
    {
        returnValue = F("Hof Erleheim");
        break;
    }
    case 146892:
    {
        returnValue = F("Hof Eulendorf");
        break;
    }
    case 146893:
    {
        returnValue = F("Hof Faulbach");
        break;
    }
    case 146894:
    {
        returnValue = F("Hof Flor");
        break;
    }
    case 146895:
    {
        returnValue = F("Hof Flügge");
        break;
    }
    case 146896:
    {
        returnValue = F("Hof Freiblick");
        break;
    }
    case 146897:
    {
        returnValue = F("Hof Freitag");
        break;
    }
    case 146898:
    {
        returnValue = F("Hof Gackau");
        break;
    }
    case 146899:
    {
        returnValue = F("Hof Geisborn");
        break;
    }
    case 146900:
    {
        returnValue = F("Hof Ginsberg");
        break;
    }
    case 146901:
    {
        returnValue = F("Hof Gnadenthal");
        break;
    }
    case 146902:
    {
        returnValue = F("Hof Goldborn");
        break;
    }
    case 146903:
    {
        returnValue = F("Hof Grauen");
        break;
    }
    case 146904:
    {
        returnValue = F("Hof Grenzloch");
        break;
    }
    case 146905:
    {
        returnValue = F("Hof Gretenburg");
        break;
    }
    case 146906:
    {
        returnValue = F("Hof Gronow");
        break;
    }
    case 146907:
    {
        returnValue = F("Hof Gräbenbruch");
        break;
    }
    case 146908:
    {
        returnValue = F("Hof Gräffingen");
        break;
    }
    case 146909:
    {
        returnValue = F("Hof Grünberg");
        break;
    }
    case 146910:
    {
        returnValue = F("Hof Grünental");
        break;
    }
    case 146911:
    {
        returnValue = F("Hof Göhren");
        break;
    }
    case 146912:
    {
        returnValue = F("Hof Hahn");
        break;
    }
    case 146913:
    {
        returnValue = F("Hof Haina");
        break;
    }
    case 146914:
    {
        returnValue = F("Hof Hanredder");
        break;
    }
    case 146915:
    {
        returnValue = F("Hof Hanswinkel");
        break;
    }
    case 146916:
    {
        returnValue = F("Hof Haulle");
        break;
    }
    case 146917:
    {
        returnValue = F("Hof Hayna");
        break;
    }
    case 146918:
    {
        returnValue = F("Hof Heckelmann");
        break;
    }
    case 146919:
    {
        returnValue = F("Hof Heinrichshof");
        break;
    }
    case 146920:
    {
        returnValue = F("Hof Heistern");
        break;
    }
    case 146921:
    {
        returnValue = F("Hof Hellsiek");
        break;
    }
    case 146922:
    {
        returnValue = F("Hof Herrenberg");
        break;
    }
    case 146923:
    {
        returnValue = F("Hof Heydstadt");
        break;
    }
    case 146924:
    {
        returnValue = F("Hof Hirschberg");
        break;
    }
    case 146925:
    {
        returnValue = F("Hof Hofen");
        break;
    }
    case 146926:
    {
        returnValue = F("Hof Hoffeld");
        break;
    }
    case 146927:
    {
        returnValue = F("Hof Hohenhütten");
        break;
    }
    case 146928:
    {
        returnValue = F("Hof Höfen");
        break;
    }
    case 146929:
    {
        returnValue = F("Hof Hölß-Saltenberger");
        break;
    }
    case 146930:
    {
        returnValue = F("Hof Hörsten");
        break;
    }
    case 146931:
    {
        returnValue = F("Hof Hüttenhügel");
        break;
    }
    case 146932:
    {
        returnValue = F("Hof Iben");
        break;
    }
    case 146933:
    {
        returnValue = F("Hof Jolie");
        break;
    }
    case 146934:
    {
        returnValue = F("Hof Kappelberg");
        break;
    }
    case 146935:
    {
        returnValue = F("Hof Keil");
        break;
    }
    case 146936:
    {
        returnValue = F("Hof Kindelsberg");
        break;
    }
    case 146937:
    {
        returnValue = F("Hof Kirchheimersborn");
        break;
    }
    case 146938:
    {
        returnValue = F("Hof Konrad");
        break;
    }
    case 146939:
    {
        returnValue = F("Hof Krausenberg");
        break;
    }
    case 146940:
    {
        returnValue = F("Hof Kröger");
        break;
    }
    case 146941:
    {
        returnValue = F("Hof Körnick");
        break;
    }
    case 146942:
    {
        returnValue = F("Hof Lahnbergerhof");
        break;
    }
    case 146943:
    {
        returnValue = F("Hof Lahnblick");
        break;
    }
    case 146944:
    {
        returnValue = F("Hof Langwedel");
        break;
    }
    case 146945:
    {
        returnValue = F("Hof Ledderhose");
        break;
    }
    case 146946:
    {
        returnValue = F("Hof Leienschlade");
        break;
    }
    case 146947:
    {
        returnValue = F("Hof Lethaus");
        break;
    }
    case 146948:
    {
        returnValue = F("Hof Lilach");
        break;
    }
    case 146949:
    {
        returnValue = F("Hof Lindkamp");
        break;
    }
    case 146950:
    {
        returnValue = F("Hof Loh");
        break;
    }
    case 146951:
    {
        returnValue = F("Hof Louisenlund");
        break;
    }
    case 146952:
    {
        returnValue = F("Hof Mainweide");
        break;
    }
    case 146953:
    {
        returnValue = F("Hof Meinefeld");
        break;
    }
    case 146954:
    {
        returnValue = F("Hof Menke");
        break;
    }
    case 146955:
    {
        returnValue = F("Hof Meteler Str.");
        break;
    }
    case 146956:
    {
        returnValue = F("Hof Metelner Str.");
        break;
    }
    case 146957:
    {
        returnValue = F("Hof Mischels");
        break;
    }
    case 146958:
    {
        returnValue = F("Hof Mulbach");
        break;
    }
    case 146959:
    {
        returnValue = F("Hof Mühlenberg");
        break;
    }
    case 146960:
    {
        returnValue = F("Hof Neuwittenbek");
        break;
    }
    case 146961:
    {
        returnValue = F("Hof Niederfeld");
        break;
    }
    case 146962:
    {
        returnValue = F("Hof Obere Schrotzburg");
        break;
    }
    case 146963:
    {
        returnValue = F("Hof Oberhöhl");
        break;
    }
    case 146964:
    {
        returnValue = F("Hof Osterfelde");
        break;
    }
    case 146965:
    {
        returnValue = F("Hof Pfannenstiel");
        break;
    }
    case 146966:
    {
        returnValue = F("Hof Pietz");
        break;
    }
    case 146967:
    {
        returnValue = F("Hof Pries");
        break;
    }
    case 146968:
    {
        returnValue = F("Hof Proden");
        break;
    }
    case 146969:
    {
        returnValue = F("Hof Reuteberg");
        break;
    }
    case 146970:
    {
        returnValue = F("Hof Rittal");
        break;
    }
    case 146971:
    {
        returnValue = F("Hof Ritzerau");
        break;
    }
    case 146972:
    {
        returnValue = F("Hof Rottfeld");
        break;
    }
    case 146973:
    {
        returnValue = F("Hof Ruhgewann");
        break;
    }
    case 146974:
    {
        returnValue = F("Hof Rumpsfelde");
        break;
    }
    case 146975:
    {
        returnValue = F("Hof Ruppertstal");
        break;
    }
    case 146976:
    {
        returnValue = F("Hof Rötenbeck");
        break;
    }
    case 146977:
    {
        returnValue = F("Hof Rühn");
        break;
    }
    case 146978:
    {
        returnValue = F("Hof Rülau");
        break;
    }
    case 146979:
    {
        returnValue = F("Hof Sanitz");
        break;
    }
    case 146980:
    {
        returnValue = F("Hof Schellrode");
        break;
    }
    case 146981:
    {
        returnValue = F("Hof Schröder");
        break;
    }
    case 146982:
    {
        returnValue = F("Hof Schwarzenbach");
        break;
    }
    case 146983:
    {
        returnValue = F("Hof Schönfeld");
        break;
    }
    case 146984:
    {
        returnValue = F("Hof Seligental");
        break;
    }
    case 146985:
    {
        returnValue = F("Hof Setzscheid");
        break;
    }
    case 146986:
    {
        returnValue = F("Hof Siele");
        break;
    }
    case 146987:
    {
        returnValue = F("Hof Sommerwind");
        break;
    }
    case 146988:
    {
        returnValue = F("Hof Sonneck");
        break;
    }
    case 146989:
    {
        returnValue = F("Hof Sonneneck");
        break;
    }
    case 146990:
    {
        returnValue = F("Hof Steinbach");
        break;
    }
    case 146991:
    {
        returnValue = F("Hof Stille");
        break;
    }
    case 146992:
    {
        returnValue = F("Hof Strubel");
        break;
    }
    case 146993:
    {
        returnValue = F("Hof Strupbach");
        break;
    }
    case 146994:
    {
        returnValue = F("Hof Strünkede");
        break;
    }
    case 146995:
    {
        returnValue = F("Hof Suhrbier");
        break;
    }
    case 146996:
    {
        returnValue = F("Hof Talblick");
        break;
    }
    case 146997:
    {
        returnValue = F("Hof Taunusblick");
        break;
    }
    case 146998:
    {
        returnValue = F("Hof Tegeder");
        break;
    }
    case 146999:
    {
        returnValue = F("Hof Theiler");
        break;
    }
    case 147000:
    {
        returnValue = F("Hof Thesenvitz");
        break;
    }
    case 147001:
    {
        returnValue = F("Hof Traisfurt");
        break;
    }
    case 147002:
    {
        returnValue = F("Hof Triwalk");
        break;
    }
    case 147003:
    {
        returnValue = F("Hof Trunsbach");
        break;
    }
    case 147004:
    {
        returnValue = F("Hof Tütsberg");
        break;
    }
    case 147005:
    {
        returnValue = F("Hof Vockerode");
        break;
    }
    case 147006:
    {
        returnValue = F("Hof Vogelsang");
        break;
    }
    case 147007:
    {
        returnValue = F("Hof Vorwerk");
        break;
    }
    case 147008:
    {
        returnValue = F("Hof Waldblick");
        break;
    }
    case 147009:
    {
        returnValue = F("Hof Waldeck");
        break;
    }
    case 147010:
    {
        returnValue = F("Hof Wandrumer Str.");
        break;
    }
    case 147011:
    {
        returnValue = F("Hof Wasserbiblos");
        break;
    }
    case 147012:
    {
        returnValue = F("Hof Wehneberg");
        break;
    }
    case 147013:
    {
        returnValue = F("Hof Weiß");
        break;
    }
    case 147014:
    {
        returnValue = F("Hof Wernersruh");
        break;
    }
    case 147015:
    {
        returnValue = F("Hof Wesenberg");
        break;
    }
    case 147016:
    {
        returnValue = F("Hof Wieseck");
        break;
    }
    case 147017:
    {
        returnValue = F("Hof Wiesental");
        break;
    }
    case 147018:
    {
        returnValue = F("Hof Wildensee");
        break;
    }
    case 147019:
    {
        returnValue = F("Hof Wilhelmshöhe");
        break;
    }
    case 147020:
    {
        returnValue = F("Hof Wilmstorf");
        break;
    }
    case 147021:
    {
        returnValue = F("Hof Windbrache");
        break;
    }
    case 147022:
    {
        returnValue = F("Hof Wulfsberg");
        break;
    }
    case 147023:
    {
        returnValue = F("Hof Wurmbach");
        break;
    }
    case 147024:
    {
        returnValue = F("Hof Wölper");
        break;
    }
    case 147025:
    {
        returnValue = F("Hof Zehnthof");
        break;
    }
    case 147026:
    {
        returnValue = F("Hof am Hang");
        break;
    }
    case 147027:
    {
        returnValue = F("Hof am Regen");
        break;
    }
    case 147028:
    {
        returnValue = F("Hof am Zollstock");
        break;
    }
    case 147029:
    {
        returnValue = F("Hof auf dem Scheid");
        break;
    }
    case 147030:
    {
        returnValue = F("Hof der Hohen Schule");
        break;
    }
    case 147031:
    {
        returnValue = F("Hof des Haupthauses");
        break;
    }
    case 147032:
    {
        returnValue = F("Hof im Hagen");
        break;
    }
    case 147033:
    {
        returnValue = F("Hof in den Herrgottsäckern");
        break;
    }
    case 147034:
    {
        returnValue = F("Hof vor Fläsling");
        break;
    }
    case 147035:
    {
        returnValue = F("Hof zum Ahaus");
        break;
    }
    case 147036:
    {
        returnValue = F("Hof- und Herzoggarten");
        break;
    }
    case 147037:
    {
        returnValue = F("Hof-Feldbach-Str.");
        break;
    }
    case 147038:
    {
        returnValue = F("Hof-Gnadenthal-Str.");
        break;
    }
    case 147039:
    {
        returnValue = F("Hof-Güller-Str.");
        break;
    }
    case 147040:
    {
        returnValue = F("Hof-Hütt");
        break;
    }
    case 147041:
    {
        returnValue = F("Hof-Johannes-Garten");
        break;
    }
    case 147042:
    {
        returnValue = F("Hof-Ohmayer-Weg");
        break;
    }
    case 147043:
    {
        returnValue = F("Hof-Sorge Str.");
        break;
    }
    case 147044:
    {
        returnValue = F("Hof-Stöcken-Weg");
        break;
    }
    case 147045:
    {
        returnValue = F("Hofacker");
        break;
    }
    case 147046:
    {
        returnValue = F("Hofackergasse");
        break;
    }
    case 147047:
    {
        returnValue = F("Hofackerheeg");
        break;
    }
    case 147048:
    {
        returnValue = F("Hofackersiedlung");
        break;
    }
    case 147049:
    {
        returnValue = F("Hofackerstr.");
        break;
    }
    case 147050:
    {
        returnValue = F("Hofackerweg");
        break;
    }
    case 147051:
    {
        returnValue = F("Hofallee");
        break;
    }
    case 147052:
    {
        returnValue = F("Hofanger");
        break;
    }
    case 147053:
    {
        returnValue = F("Hofangerstr.");
        break;
    }
    case 147054:
    {
        returnValue = F("Hofangerweg");
        break;
    }
    case 147055:
    {
        returnValue = F("Hofanwand");
        break;
    }
    case 147056:
    {
        returnValue = F("Hofau");
        break;
    }
    case 147057:
    {
        returnValue = F("Hofaue");
        break;
    }
    case 147058:
    {
        returnValue = F("Hofaupark");
        break;
    }
    case 147059:
    {
        returnValue = F("Hofaustr.");
        break;
    }
    case 147060:
    {
        returnValue = F("Hofauweg");
        break;
    }
    case 147061:
    {
        returnValue = F("Hofbachstr.");
        break;
    }
    case 147062:
    {
        returnValue = F("Hofbachweg");
        break;
    }
    case 147063:
    {
        returnValue = F("Hofbau");
        break;
    }
    case 147064:
    {
        returnValue = F("Hofbauerhütte");
        break;
    }
    case 147065:
    {
        returnValue = F("Hofbauernfeld");
        break;
    }
    case 147066:
    {
        returnValue = F("Hofbauerngut");
        break;
    }
    case 147067:
    {
        returnValue = F("Hofbauernstr.");
        break;
    }
    case 147068:
    {
        returnValue = F("Hofbauernweg");
        break;
    }
    case 147069:
    {
        returnValue = F("Hofbauers Kamp");
        break;
    }
    case 147070:
    {
        returnValue = F("Hofbauerstr.");
        break;
    }
    case 147071:
    {
        returnValue = F("Hofbauerweg");
        break;
    }
    case 147072:
    {
        returnValue = F("Hofbaulandweg");
        break;
    }
    case 147073:
    {
        returnValue = F("Hofbaumgärten");
        break;
    }
    case 147074:
    {
        returnValue = F("Hofberg");
        break;
    }
    case 147075:
    {
        returnValue = F("Hofbergerstr.");
        break;
    }
    case 147076:
    {
        returnValue = F("Hofbergerweg");
        break;
    }
    case 147077:
    {
        returnValue = F("Hofberglein");
        break;
    }
    case 147078:
    {
        returnValue = F("Hofbergleite");
        break;
    }
    case 147079:
    {
        returnValue = F("Hofbergstr.");
        break;
    }
    case 147080:
    {
        returnValue = F("Hofbergweg");
        break;
    }
    case 147081:
    {
        returnValue = F("Hofbettenstr.");
        break;
    }
    case 147082:
    {
        returnValue = F("Hofbeunte");
        break;
    }
    case 147083:
    {
        returnValue = F("Hofbichlweg");
        break;
    }
    case 147084:
    {
        returnValue = F("Hofbieberer Str.");
        break;
    }
    case 147085:
    {
        returnValue = F("Hofblick");
        break;
    }
    case 147086:
    {
        returnValue = F("Hofbolleweg");
        break;
    }
    case 147087:
    {
        returnValue = F("Hofbongardstr.");
        break;
    }
    case 147088:
    {
        returnValue = F("Hofborn");
        break;
    }
    case 147089:
    {
        returnValue = F("Hofbrand");
        break;
    }
    case 147090:
    {
        returnValue = F("Hofbrede");
        break;
    }
    case 147091:
    {
        returnValue = F("Hofbreede");
        break;
    }
    case 147092:
    {
        returnValue = F("Hofbrehnweg");
        break;
    }
    case 147093:
    {
        returnValue = F("Hofbreite");
        break;
    }
    case 147094:
    {
        returnValue = F("Hofbreiten");
        break;
    }
    case 147095:
    {
        returnValue = F("Hofbronnengasse");
        break;
    }
    case 147096:
    {
        returnValue = F("Hofbrook");
        break;
    }
    case 147097:
    {
        returnValue = F("Hofbruck");
        break;
    }
    case 147098:
    {
        returnValue = F("Hofbrunnenweg");
        break;
    }
    case 147099:
    {
        returnValue = F("Hofbrücke");
        break;
    }
    case 147100:
    {
        returnValue = F("Hofbrühl");
        break;
    }
    case 147101:
    {
        returnValue = F("Hofbuchetstr.");
        break;
    }
    case 147102:
    {
        returnValue = F("Hofburgstr.");
        break;
    }
    case 147103:
    {
        returnValue = F("Hofbuschweg");
        break;
    }
    case 147104:
    {
        returnValue = F("Hofbäckersgäßchen");
        break;
    }
    case 147105:
    {
        returnValue = F("Hofbühlstr.");
        break;
    }
    case 147106:
    {
        returnValue = F("Hofbühlweg");
        break;
    }
    case 147107:
    {
        returnValue = F("Hofbühnd");
        break;
    }
    case 147108:
    {
        returnValue = F("Hofchaussee");
        break;
    }
    case 147109:
    {
        returnValue = F("Hofdamm");
        break;
    }
    case 147110:
    {
        returnValue = F("Hofdienerweg");
        break;
    }
    case 147111:
    {
        returnValue = F("Hofdonop");
        break;
    }
    case 147112:
    {
        returnValue = F("Hofdorf");
        break;
    }
    case 147113:
    {
        returnValue = F("Hofdorfer Str.");
        break;
    }
    case 147114:
    {
        returnValue = F("Hofdrieschweg");
        break;
    }
    case 147115:
    {
        returnValue = F("Hofeberg");
        break;
    }
    case 147116:
    {
        returnValue = F("Hofebergweg");
        break;
    }
    case 147117:
    {
        returnValue = F("Hofeck");
        break;
    }
    case 147118:
    {
        returnValue = F("Hofecke");
        break;
    }
    case 147119:
    {
        returnValue = F("Hofeckleweg");
        break;
    }
    case 147120:
    {
        returnValue = F("Hofeckweg");
        break;
    }
    case 147121:
    {
        returnValue = F("Hofefeld");
        break;
    }
    case 147122:
    {
        returnValue = F("Hofegarten");
        break;
    }
    case 147123:
    {
        returnValue = F("Hofegartenweg");
        break;
    }
    case 147124:
    {
        returnValue = F("Hofegasse");
        break;
    }
    case 147125:
    {
        returnValue = F("Hofegrund");
        break;
    }
    case 147126:
    {
        returnValue = F("Hofeholz");
        break;
    }
    case 147127:
    {
        returnValue = F("Hofehäuser");
        break;
    }
    case 147128:
    {
        returnValue = F("Hofeichenwiese");
        break;
    }
    case 147129:
    {
        returnValue = F("Hofelder Str.");
        break;
    }
    case 147130:
    {
        returnValue = F("Hofelestr.");
        break;
    }
    case 147131:
    {
        returnValue = F("Hofelichstr.");
        break;
    }
    case 147132:
    {
        returnValue = F("Hofellernstr.");
        break;
    }
    case 147133:
    {
        returnValue = F("Hofen");
        break;
    }
    case 147134:
    {
        returnValue = F("Hofen Stichstr.");
        break;
    }
    case 147135:
    {
        returnValue = F("Hofenackerstr.");
        break;
    }
    case 147136:
    {
        returnValue = F("Hofenbergstr.");
        break;
    }
    case 147137:
    {
        returnValue = F("Hofener Gasse");
        break;
    }
    case 147138:
    {
        returnValue = F("Hofener Str.");
        break;
    }
    case 147139:
    {
        returnValue = F("Hofener Weg");
        break;
    }
    case 147140:
    {
        returnValue = F("Hofener Öschle");
        break;
    }
    case 147141:
    {
        returnValue = F("Hofenerbergweg");
        break;
    }
    case 147142:
    {
        returnValue = F("Hofenfelsstr.");
        break;
    }
    case 147143:
    {
        returnValue = F("Hofenstetten");
        break;
    }
    case 147144:
    {
        returnValue = F("Hofenstr.");
        break;
    }
    case 147145:
    {
        returnValue = F("Hofenweg");
        break;
    }
    case 147146:
    {
        returnValue = F("Hofepark");
        break;
    }
    case 147147:
    {
        returnValue = F("Hofer Feld");
        break;
    }
    case 147148:
    {
        returnValue = F("Hofer Heide");
        break;
    }
    case 147149:
    {
        returnValue = F("Hofer Kirchweg");
        break;
    }
    case 147150:
    {
        returnValue = F("Hofer Landstr.");
        break;
    }
    case 147151:
    {
        returnValue = F("Hofer Str.");
        break;
    }
    case 147152:
    {
        returnValue = F("Hofer Weg");
        break;
    }
    case 147153:
    {
        returnValue = F("Hoferhofweg");
        break;
    }
    case 147154:
    {
        returnValue = F("Hoferkamp");
        break;
    }
    case 147155:
    {
        returnValue = F("Hoferkopfstr.");
        break;
    }
    case 147156:
    {
        returnValue = F("Hoferland");
        break;
    }
    case 147157:
    {
        returnValue = F("Hoferpfad");
        break;
    }
    case 147158:
    {
        returnValue = F("Hoferstr.");
        break;
    }
    case 147159:
    {
        returnValue = F("Hofertalstr.");
        break;
    }
    case 147160:
    {
        returnValue = F("Hoferweg");
        break;
    }
    case 147161:
    {
        returnValue = F("Hofesaat");
        break;
    }
    case 147162:
    {
        returnValue = F("Hofestatt");
        break;
    }
    case 147163:
    {
        returnValue = F("Hofestr.");
        break;
    }
    case 147164:
    {
        returnValue = F("Hofeteichweg");
        break;
    }
    case 147165:
    {
        returnValue = F("Hofetstiege");
        break;
    }
    case 147166:
    {
        returnValue = F("Hofeweg");
        break;
    }
    case 147167:
    {
        returnValue = F("Hoff");
        break;
    }
    case 147168:
    {
        returnValue = F("Hoffahrt");
        break;
    }
    case 147169:
    {
        returnValue = F("Hoffahrtsgasse");
        break;
    }
    case 147170:
    {
        returnValue = F("Hoffbeckenweg");
        break;
    }
    case 147171:
    {
        returnValue = F("Hoffberg");
        break;
    }
    case 147172:
    {
        returnValue = F("Hoffboom");
        break;
    }
    case 147173:
    {
        returnValue = F("Hoffbruch");
        break;
    }
    case 147174:
    {
        returnValue = F("Hoffeld");
        break;
    }
    case 147175:
    {
        returnValue = F("Hoffeldchen");
        break;
    }
    case 147176:
    {
        returnValue = F("Hoffelde");
        break;
    }
    case 147177:
    {
        returnValue = F("Hoffelder Brücke");
        break;
    }
    case 147178:
    {
        returnValue = F("Hoffelder Str.");
        break;
    }
    case 147179:
    {
        returnValue = F("Hoffelder Weg");
        break;
    }
    case 147180:
    {
        returnValue = F("Hoffelderstr.");
        break;
    }
    case 147181:
    {
        returnValue = F("Hoffelderweg");
        break;
    }
    case 147182:
    {
        returnValue = F("Hoffeldring");
        break;
    }
    case 147183:
    {
        returnValue = F("Hoffeldstr.");
        break;
    }
    case 147184:
    {
        returnValue = F("Hoffeldweg");
        break;
    }
    case 147185:
    {
        returnValue = F("Hoffeldäcker");
        break;
    }
    case 147186:
    {
        returnValue = F("Hoffeldäckerweg");
        break;
    }
    case 147187:
    {
        returnValue = F("Hoffenbachbrückle");
        break;
    }
    case 147188:
    {
        returnValue = F("Hoffenheimer Str.");
        break;
    }
    case 147189:
    {
        returnValue = F("Hoffenheimer Weg");
        break;
    }
    case 147190:
    {
        returnValue = F("Hofferbertplatz");
        break;
    }
    case 147191:
    {
        returnValue = F("Hofferhof");
        break;
    }
    case 147192:
    {
        returnValue = F("Hofferhofer Str.");
        break;
    }
    case 147193:
    {
        returnValue = F("Hofferichstr.");
        break;
    }
    case 147194:
    {
        returnValue = F("Hoffischerweg");
        break;
    }
    case 147195:
    {
        returnValue = F("Hoffkamp");
        break;
    }
    case 147196:
    {
        returnValue = F("Hoffland");
        break;
    }
    case 147197:
    {
        returnValue = F("Hoffmann's Wiesen");
        break;
    }
    case 147198:
    {
        returnValue = F("Hoffmann-Str.");
        break;
    }
    case 147199:
    {
        returnValue = F("Hoffmann-von-Fallersleben-Str.");
        break;
    }
    case 147200:
    {
        returnValue = F("Hoffmann-von-Fallersleben-Weg");
        break;
    }
    case 147201:
    {
        returnValue = F("Hoffmannallee");
        break;
    }
    case 147202:
    {
        returnValue = F("Hoffmannplatz");
        break;
    }
    case 147203:
    {
        returnValue = F("Hoffmannsberg");
        break;
    }
    case 147204:
    {
        returnValue = F("Hoffmannschanze");
        break;
    }
    case 147205:
    {
        returnValue = F("Hoffmannsgasse");
        break;
    }
    case 147206:
    {
        returnValue = F("Hoffmannspark");
        break;
    }
    case 147207:
    {
        returnValue = F("Hoffmannsteig");
        break;
    }
    case 147208:
    {
        returnValue = F("Hoffmannstr.");
        break;
    }
    case 147209:
    {
        returnValue = F("Hoffmannsweg");
        break;
    }
    case 147210:
    {
        returnValue = F("Hoffmannweg");
        break;
    }
    case 147211:
    {
        returnValue = F("Hoffmeisterstr.");
        break;
    }
    case 147212:
    {
        returnValue = F("Hoffmeyerweg");
        break;
    }
    case 147213:
    {
        returnValue = F("Hoffnung");
        break;
    }
    case 147214:
    {
        returnValue = F("Hoffnunger Chaussee");
        break;
    }
    case 147215:
    {
        returnValue = F("Hoffnungsschachtstr.");
        break;
    }
    case 147216:
    {
        returnValue = F("Hoffnungstal");
        break;
    }
    case 147217:
    {
        returnValue = F("Hoffnungsthal");
        break;
    }
    case 147218:
    {
        returnValue = F("Hoffnungsthaler Str.");
        break;
    }
    case 147219:
    {
        returnValue = F("Hoffnungsweg");
        break;
    }
    case 147220:
    {
        returnValue = F("Hoffredder");
        break;
    }
    case 147221:
    {
        returnValue = F("Hoffreeg");
        break;
    }
    case 147222:
    {
        returnValue = F("Hoffriedgasse");
        break;
    }
    case 147223:
    {
        returnValue = F("Hoffschlägerweg");
        break;
    }
    case 147224:
    {
        returnValue = F("Hoffskanal");
        break;
    }
    case 147225:
    {
        returnValue = F("Hoffstadt");
        break;
    }
    case 147226:
    {
        returnValue = F("Hoffstegge");
        break;
    }
    case 147227:
    {
        returnValue = F("Hoffstr.");
        break;
    }
    case 147228:
    {
        returnValue = F("Hoffuhre");
        break;
    }
    case 147229:
    {
        returnValue = F("Hoffweg");
        break;
    }
    case 147230:
    {
        returnValue = F("Hoffwies");
        break;
    }
    case 147231:
    {
        returnValue = F("Hofgarten");
        break;
    }
    case 147232:
    {
        returnValue = F("Hofgarten Veitshöchheim");
        break;
    }
    case 147233:
    {
        returnValue = F("Hofgarten-Passage");
        break;
    }
    case 147234:
    {
        returnValue = F("Hofgartenstr.");
        break;
    }
    case 147235:
    {
        returnValue = F("Hofgartenweg");
        break;
    }
    case 147236:
    {
        returnValue = F("Hofgasse");
        break;
    }
    case 147237:
    {
        returnValue = F("Hofgeigerweg");
        break;
    }
    case 147238:
    {
        returnValue = F("Hofgeismarer Str.");
        break;
    }
    case 147239:
    {
        returnValue = F("Hofgeismarer Weg");
        break;
    }
    case 147240:
    {
        returnValue = F("Hofgelegen");
        break;
    }
    case 147241:
    {
        returnValue = F("Hofgereuth");
        break;
    }
    case 147242:
    {
        returnValue = F("Hofgerichtsstr.");
        break;
    }
    case 147243:
    {
        returnValue = F("Hofgewann");
        break;
    }
    case 147244:
    {
        returnValue = F("Hofgraben");
        break;
    }
    case 147245:
    {
        returnValue = F("Hofgrabenstr.");
        break;
    }
    case 147246:
    {
        returnValue = F("Hofgrund");
        break;
    }
    case 147247:
    {
        returnValue = F("Hofgründchen");
        break;
    }
    case 147248:
    {
        returnValue = F("Hofgumpengasse");
        break;
    }
    case 147249:
    {
        returnValue = F("Hofgut");
        break;
    }
    case 147250:
    {
        returnValue = F("Hofgut Löwenthal");
        break;
    }
    case 147251:
    {
        returnValue = F("Hofgut Ringelshausen");
        break;
    }
    case 147252:
    {
        returnValue = F("Hofgut Wickstadt");
        break;
    }
    case 147253:
    {
        returnValue = F("Hofgut Wildenstein");
        break;
    }
    case 147254:
    {
        returnValue = F("Hofgutplatz");
        break;
    }
    case 147255:
    {
        returnValue = F("Hofgutstr.");
        break;
    }
    case 147256:
    {
        returnValue = F("Hofgängerweg");
        break;
    }
    case 147257:
    {
        returnValue = F("Hofgärten");
        break;
    }
    case 147258:
    {
        returnValue = F("Hofgärtenstr.");
        break;
    }
    case 147259:
    {
        returnValue = F("Hofgärtenweg");
        break;
    }
    case 147260:
    {
        returnValue = F("Hofgässchen");
        break;
    }
    case 147261:
    {
        returnValue = F("Hofgäßle");
        break;
    }
    case 147262:
    {
        returnValue = F("Hofhaide");
        break;
    }
    case 147263:
    {
        returnValue = F("Hofhainweg");
        break;
    }
    case 147264:
    {
        returnValue = F("Hofhalde");
        break;
    }
    case 147265:
    {
        returnValue = F("Hofhaldenweg");
        break;
    }
    case 147266:
    {
        returnValue = F("Hofhalderweg");
        break;
    }
    case 147267:
    {
        returnValue = F("Hofhaldeweg");
        break;
    }
    case 147268:
    {
        returnValue = F("Hofhaltung");
        break;
    }
    case 147269:
    {
        returnValue = F("Hofham");
        break;
    }
    case 147270:
    {
        returnValue = F("Hofhamer Str.");
        break;
    }
    case 147271:
    {
        returnValue = F("Hofhamm");
        break;
    }
    case 147272:
    {
        returnValue = F("Hofhange");
        break;
    }
    case 147273:
    {
        returnValue = F("Hofhaus");
        break;
    }
    case 147274:
    {
        returnValue = F("Hofhausgasse");
        break;
    }
    case 147275:
    {
        returnValue = F("Hofhausring");
        break;
    }
    case 147276:
    {
        returnValue = F("Hofhausstr.");
        break;
    }
    case 147277:
    {
        returnValue = F("Hofheimer Str.");
        break;
    }
    case 147278:
    {
        returnValue = F("Hofheimer Weg");
        break;
    }
    case 147279:
    {
        returnValue = F("Hofhofkapellenstr.");
        break;
    }
    case 147280:
    {
        returnValue = F("Hofholzer Weg");
        break;
    }
    case 147281:
    {
        returnValue = F("Hofholzweg");
        break;
    }
    case 147282:
    {
        returnValue = F("Hofhäuserstr.");
        break;
    }
    case 147283:
    {
        returnValue = F("Hofjungenweg");
        break;
    }
    case 147284:
    {
        returnValue = F("Hofjägergasse");
        break;
    }
    case 147285:
    {
        returnValue = F("Hofkabelweg");
        break;
    }
    case 147286:
    {
        returnValue = F("Hofkammerstr.");
        break;
    }
    case 147287:
    {
        returnValue = F("Hofkamp");
        break;
    }
    case 147288:
    {
        returnValue = F("Hofkamper Weg");
        break;
    }
    case 147289:
    {
        returnValue = F("Hofkellermeisterweg");
        break;
    }
    case 147290:
    {
        returnValue = F("Hofkirchen");
        break;
    }
    case 147291:
    {
        returnValue = F("Hofklinge");
        break;
    }
    case 147292:
    {
        returnValue = F("Hofklingenweg");
        break;
    }
    case 147293:
    {
        returnValue = F("Hofkoh");
        break;
    }
    case 147294:
    {
        returnValue = F("Hofkomplex");
        break;
    }
    case 147295:
    {
        returnValue = F("Hofkoppel");
        break;
    }
    case 147296:
    {
        returnValue = F("Hofkoppeln");
        break;
    }
    case 147297:
    {
        returnValue = F("Hofkoppelweg");
        break;
    }
    case 147298:
    {
        returnValue = F("Hofkrog");
        break;
    }
    case 147299:
    {
        returnValue = F("Hofkurat-Diehl-Str.");
        break;
    }
    case 147300:
    {
        returnValue = F("Hofkämpchen");
        break;
    }
    case 147301:
    {
        returnValue = F("Hoflacher Str.");
        break;
    }
    case 147302:
    {
        returnValue = F("Hofland");
        break;
    }
    case 147303:
    {
        returnValue = F("Hoflandring");
        break;
    }
    case 147304:
    {
        returnValue = F("Hoflehenstr.");
        break;
    }
    case 147305:
    {
        returnValue = F("Hoflehenweg");
        break;
    }
    case 147306:
    {
        returnValue = F("Hofleite");
        break;
    }
    case 147307:
    {
        returnValue = F("Hofleitengasse");
        break;
    }
    case 147308:
    {
        returnValue = F("Hofleitenstr.");
        break;
    }
    case 147309:
    {
        returnValue = F("Hofleitenweg");
        break;
    }
    case 147310:
    {
        returnValue = F("Hoflinde");
        break;
    }
    case 147311:
    {
        returnValue = F("Hoflochstr.");
        break;
    }
    case 147312:
    {
        returnValue = F("Hofloh");
        break;
    }
    case 147313:
    {
        returnValue = F("Hoflohne");
        break;
    }
    case 147314:
    {
        returnValue = F("Hofluckenstr.");
        break;
    }
    case 147315:
    {
        returnValue = F("Hofländer");
        break;
    }
    case 147316:
    {
        returnValue = F("Hoflößnitzstr.");
        break;
    }
    case 147317:
    {
        returnValue = F("Hofmaasweg");
        break;
    }
    case 147318:
    {
        returnValue = F("Hofmairstr.");
        break;
    }
    case 147319:
    {
        returnValue = F("Hofmaler-Franz-Weg");
        break;
    }
    case 147320:
    {
        returnValue = F("Hofmann-Hain");
        break;
    }
    case 147321:
    {
        returnValue = F("Hofmann-Schneise");
        break;
    }
    case 147322:
    {
        returnValue = F("Hofmanns");
        break;
    }
    case 147323:
    {
        returnValue = F("Hofmannschneise");
        break;
    }
    case 147324:
    {
        returnValue = F("Hofmannspfad");
        break;
    }
    case 147325:
    {
        returnValue = F("Hofmannsplatz");
        break;
    }
    case 147326:
    {
        returnValue = F("Hofmannsthalstr.");
        break;
    }
    case 147327:
    {
        returnValue = F("Hofmannstr.");
        break;
    }
    case 147328:
    {
        returnValue = F("Hofmannsweg");
        break;
    }
    case 147329:
    {
        returnValue = F("Hofmannweg");
        break;
    }
    case 147330:
    {
        returnValue = F("Hofmark");
        break;
    }
    case 147331:
    {
        returnValue = F("Hofmark-Aich-Str.");
        break;
    }
    case 147332:
    {
        returnValue = F("Hofmark-Str.");
        break;
    }
    case 147333:
    {
        returnValue = F("Hofmarkplatz");
        break;
    }
    case 147334:
    {
        returnValue = F("Hofmarkring");
        break;
    }
    case 147335:
    {
        returnValue = F("Hofmarkstr.");
        break;
    }
    case 147336:
    {
        returnValue = F("Hofmarkt");
        break;
    }
    case 147337:
    {
        returnValue = F("Hofmarkweg");
        break;
    }
    case 147338:
    {
        returnValue = F("Hofmate");
        break;
    }
    case 147339:
    {
        returnValue = F("Hofmatt");
        break;
    }
    case 147340:
    {
        returnValue = F("Hofmatte");
        break;
    }
    case 147341:
    {
        returnValue = F("Hofmattenstr.");
        break;
    }
    case 147342:
    {
        returnValue = F("Hofmattenweg");
        break;
    }
    case 147343:
    {
        returnValue = F("Hofmattstr.");
        break;
    }
    case 147344:
    {
        returnValue = F("Hofmattweg");
        break;
    }
    case 147345:
    {
        returnValue = F("Hofmauerstr.");
        break;
    }
    case 147346:
    {
        returnValue = F("Hofmeierskamp");
        break;
    }
    case 147347:
    {
        returnValue = F("Hofmeistersteige");
        break;
    }
    case 147348:
    {
        returnValue = F("Hofmeistersweg");
        break;
    }
    case 147349:
    {
        returnValue = F("Hofmillerstr.");
        break;
    }
    case 147350:
    {
        returnValue = F("Hofmuehlenweg");
        break;
    }
    case 147351:
    {
        returnValue = F("Hofmättleweg");
        break;
    }
    case 147352:
    {
        returnValue = F("Hofmühle");
        break;
    }
    case 147353:
    {
        returnValue = F("Hofmühlenweg");
        break;
    }
    case 147354:
    {
        returnValue = F("Hofmühlstr.");
        break;
    }
    case 147355:
    {
        returnValue = F("Hofmühlweg");
        break;
    }
    case 147356:
    {
        returnValue = F("Hofmüllerweg");
        break;
    }
    case 147357:
    {
        returnValue = F("Hofnerstr.");
        break;
    }
    case 147358:
    {
        returnValue = F("Hofohrhammer");
        break;
    }
    case 147359:
    {
        returnValue = F("Hofoldinger Str.");
        break;
    }
    case 147360:
    {
        returnValue = F("Hofolper Str.");
        break;
    }
    case 147361:
    {
        returnValue = F("Hofpesch");
        break;
    }
    case 147362:
    {
        returnValue = F("Hofpfad");
        break;
    }
    case 147363:
    {
        returnValue = F("Hofplatz");
        break;
    }
    case 147364:
    {
        returnValue = F("Hofpoint");
        break;
    }
    case 147365:
    {
        returnValue = F("Hofpointstr.");
        break;
    }
    case 147366:
    {
        returnValue = F("Hofrain");
        break;
    }
    case 147367:
    {
        returnValue = F("Hofraingasse");
        break;
    }
    case 147368:
    {
        returnValue = F("Hofrainstr.");
        break;
    }
    case 147369:
    {
        returnValue = F("Hofraite");
        break;
    }
    case 147370:
    {
        returnValue = F("Hofrasen");
        break;
    }
    case 147371:
    {
        returnValue = F("Hofrasenring");
        break;
    }
    case 147372:
    {
        returnValue = F("Hofrat-Dietzel-Weg");
        break;
    }
    case 147373:
    {
        returnValue = F("Hofrat-Dr.-Wurm-Str.");
        break;
    }
    case 147374:
    {
        returnValue = F("Hofrat-Graetz-Str.");
        break;
    }
    case 147375:
    {
        returnValue = F("Hofrat-Gschwändler-Str.");
        break;
    }
    case 147376:
    {
        returnValue = F("Hofrat-Harl-Str.");
        break;
    }
    case 147377:
    {
        returnValue = F("Hofrat-Kessel-Str.");
        break;
    }
    case 147378:
    {
        returnValue = F("Hofrat-Korb-Str.");
        break;
    }
    case 147379:
    {
        returnValue = F("Hofrat-Lang-Str.");
        break;
    }
    case 147380:
    {
        returnValue = F("Hofrat-Moll-Str.");
        break;
    }
    case 147381:
    {
        returnValue = F("Hofrat-Mundhenk-Str.");
        break;
    }
    case 147382:
    {
        returnValue = F("Hofrat-Rießmann-Str.");
        break;
    }
    case 147383:
    {
        returnValue = F("Hofrat-Springer-Weg");
        break;
    }
    case 147384:
    {
        returnValue = F("Hofrat-Steiner-Weg");
        break;
    }
    case 147385:
    {
        returnValue = F("Hofrat-Werner-Str.");
        break;
    }
    case 147386:
    {
        returnValue = F("Hofrathstr.");
        break;
    }
    case 147387:
    {
        returnValue = F("Hofratshalde");
        break;
    }
    case 147388:
    {
        returnValue = F("Hofrebenweg");
        break;
    }
    case 147389:
    {
        returnValue = F("Hofreit");
        break;
    }
    case 147390:
    {
        returnValue = F("Hofreitenstr.");
        break;
    }
    case 147391:
    {
        returnValue = F("Hofreither Str.");
        break;
    }
    case 147392:
    {
        returnValue = F("Hofreitschneise");
        break;
    }
    case 147393:
    {
        returnValue = F("Hofreitstr.");
        break;
    }
    case 147394:
    {
        returnValue = F("Hofreuther Str.");
        break;
    }
    case 147395:
    {
        returnValue = F("Hofreutstr.");
        break;
    }
    case 147396:
    {
        returnValue = F("Hofreutweg");
        break;
    }
    case 147397:
    {
        returnValue = F("Hofriedeallee");
        break;
    }
    case 147398:
    {
        returnValue = F("Hofriedgasse");
        break;
    }
    case 147399:
    {
        returnValue = F("Hofriethgasse");
        break;
    }
    case 147400:
    {
        returnValue = F("Hofriethstr.");
        break;
    }
    case 147401:
    {
        returnValue = F("Hofring");
        break;
    }
    case 147402:
    {
        returnValue = F("Hofrütteweg");
        break;
    }
    case 147403:
    {
        returnValue = F("Hofs");
        break;
    }
    case 147404:
    {
        returnValue = F("Hofsattelweg");
        break;
    }
    case 147405:
    {
        returnValue = F("Hofsberg");
        break;
    }
    case 147406:
    {
        returnValue = F("Hofschmiedgäßle");
        break;
    }
    case 147407:
    {
        returnValue = F("Hofschwicheldt");
        break;
    }
    case 147408:
    {
        returnValue = F("Hofschwärz");
        break;
    }
    case 147409:
    {
        returnValue = F("Hofschwärze");
        break;
    }
    case 147410:
    {
        returnValue = F("Hofseestr.");
        break;
    }
    case 147411:
    {
        returnValue = F("Hofseeweg");
        break;
    }
    case 147412:
    {
        returnValue = F("Hofser Str.");
        break;
    }
    case 147413:
    {
        returnValue = F("Hofseßstr.");
        break;
    }
    case 147414:
    {
        returnValue = F("Hofshöhe");
        break;
    }
    case 147415:
    {
        returnValue = F("Hofsiedlung");
        break;
    }
    case 147416:
    {
        returnValue = F("Hofstadelstr.");
        break;
    }
    case 147417:
    {
        returnValue = F("Hofstadt");
        break;
    }
    case 147418:
    {
        returnValue = F("Hofstadter Str.");
        break;
    }
    case 147419:
    {
        returnValue = F("Hofstadtplatz");
        break;
    }
    case 147420:
    {
        returnValue = F("Hofstadtstr.");
        break;
    }
    case 147421:
    {
        returnValue = F("Hofstaetter Weg");
        break;
    }
    case 147422:
    {
        returnValue = F("Hofstall");
        break;
    }
    case 147423:
    {
        returnValue = F("Hofstallweg");
        break;
    }
    case 147424:
    {
        returnValue = F("Hofstarring");
        break;
    }
    case 147425:
    {
        returnValue = F("Hofstarringer Str.");
        break;
    }
    case 147426:
    {
        returnValue = F("Hofstatt");
        break;
    }
    case 147427:
    {
        returnValue = F("Hofstattgasse");
        break;
    }
    case 147428:
    {
        returnValue = F("Hofstattstr.");
        break;
    }
    case 147429:
    {
        returnValue = F("Hofstattstäffele");
        break;
    }
    case 147430:
    {
        returnValue = F("Hofstattweg");
        break;
    }
    case 147431:
    {
        returnValue = F("Hofstattwiesen");
        break;
    }
    case 147432:
    {
        returnValue = F("Hofstattäcker");
        break;
    }
    case 147433:
    {
        returnValue = F("Hofstede");
        break;
    }
    case 147434:
    {
        returnValue = F("Hofstedter Berg");
        break;
    }
    case 147435:
    {
        returnValue = F("Hofstedter Bogen");
        break;
    }
    case 147436:
    {
        returnValue = F("Hofstedtstr.");
        break;
    }
    case 147437:
    {
        returnValue = F("Hofsteg");
        break;
    }
    case 147438:
    {
        returnValue = F("Hofsteige");
        break;
    }
    case 147439:
    {
        returnValue = F("Hofsteigweg");
        break;
    }
    case 147440:
    {
        returnValue = F("Hofstelle");
        break;
    }
    case 147441:
    {
        returnValue = F("Hofstelle Lengers");
        break;
    }
    case 147442:
    {
        returnValue = F("Hofstelze");
        break;
    }
    case 147443:
    {
        returnValue = F("Hofstett");
        break;
    }
    case 147444:
    {
        returnValue = F("Hofstetten");
        break;
    }
    case 147445:
    {
        returnValue = F("Hofstettener Str.");
        break;
    }
    case 147446:
    {
        returnValue = F("Hofstettener Weg");
        break;
    }
    case 147447:
    {
        returnValue = F("Hofstettenstr.");
        break;
    }
    case 147448:
    {
        returnValue = F("Hofstetter Str.");
        break;
    }
    case 147449:
    {
        returnValue = F("Hofstetter Weg");
        break;
    }
    case 147450:
    {
        returnValue = F("Hofstetterstr.");
        break;
    }
    case 147451:
    {
        returnValue = F("Hofstetterweg");
        break;
    }
    case 147452:
    {
        returnValue = F("Hofstettstr.");
        break;
    }
    case 147453:
    {
        returnValue = F("Hofstiege");
        break;
    }
    case 147454:
    {
        returnValue = F("Hofstr.");
        break;
    }
    case 147455:
    {
        returnValue = F("Hofstädtener Str.");
        break;
    }
    case 147456:
    {
        returnValue = F("Hofstädter Str.");
        break;
    }
    case 147457:
    {
        returnValue = F("Hofstädtstr.");
        break;
    }
    case 147458:
    {
        returnValue = F("Hofstätt");
        break;
    }
    case 147459:
    {
        returnValue = F("Hofstätte");
        break;
    }
    case 147460:
    {
        returnValue = F("Hofstätten");
        break;
    }
    case 147461:
    {
        returnValue = F("Hofstättenstr.");
        break;
    }
    case 147462:
    {
        returnValue = F("Hofstättenweg");
        break;
    }
    case 147463:
    {
        returnValue = F("Hofstättle");
        break;
    }
    case 147464:
    {
        returnValue = F("Hofstättstr.");
        break;
    }
    case 147465:
    {
        returnValue = F("Hofstättweg");
        break;
    }
    case 147466:
    {
        returnValue = F("Hofstück");
        break;
    }
    case 147467:
    {
        returnValue = F("Hofstücker Weg");
        break;
    }
    case 147468:
    {
        returnValue = F("Hofstückstr.");
        break;
    }
    case 147469:
    {
        returnValue = F("Hofstückweg");
        break;
    }
    case 147470:
    {
        returnValue = F("Hofswaldstr.");
        break;
    }
    case 147471:
    {
        returnValue = F("Hofswürden");
        break;
    }
    case 147472:
    {
        returnValue = F("Hofswürder Weg");
        break;
    }
    case 147473:
    {
        returnValue = F("Hoftalstr.");
        break;
    }
    case 147474:
    {
        returnValue = F("Hoftannenstr.");
        break;
    }
    case 147475:
    {
        returnValue = F("Hofteich");
        break;
    }
    case 147476:
    {
        returnValue = F("Hofteicher Str.");
        break;
    }
    case 147477:
    {
        returnValue = F("Hoftohorn");
        break;
    }
    case 147478:
    {
        returnValue = F("Hoftriftweg");
        break;
    }
    case 147479:
    {
        returnValue = F("Hoftstr.");
        break;
    }
    case 147480:
    {
        returnValue = F("Hoftwete");
        break;
    }
    case 147481:
    {
        returnValue = F("Hofwaldstr.");
        break;
    }
    case 147482:
    {
        returnValue = F("Hofwaldsträßle");
        break;
    }
    case 147483:
    {
        returnValue = F("Hofwaldweg");
        break;
    }
    case 147484:
    {
        returnValue = F("Hofwasenweg");
        break;
    }
    case 147485:
    {
        returnValue = F("Hofweg");
        break;
    }
    case 147486:
    {
        returnValue = F("Hofweg von Rückersdorf");
        break;
    }
    case 147487:
    {
        returnValue = F("Hofwehr");
        break;
    }
    case 147488:
    {
        returnValue = F("Hofweide");
        break;
    }
    case 147489:
    {
        returnValue = F("Hofweierer Str.");
        break;
    }
    case 147490:
    {
        returnValue = F("Hofweiherstr.");
        break;
    }
    case 147491:
    {
        returnValue = F("Hofweiherweg");
        break;
    }
    case 147492:
    {
        returnValue = F("Hofweilerstr.");
        break;
    }
    case 147493:
    {
        returnValue = F("Hofweinzier");
        break;
    }
    case 147494:
    {
        returnValue = F("Hofwende");
        break;
    }
    case 147495:
    {
        returnValue = F("Hofwies");
        break;
    }
    case 147496:
    {
        returnValue = F("Hofwiesbuck");
        break;
    }
    case 147497:
    {
        returnValue = F("Hofwiese");
        break;
    }
    case 147498:
    {
        returnValue = F("Hofwiesen");
        break;
    }
    case 147499:
    {
        returnValue = F("Hofwiesengasse");
        break;
    }
    case 147500:
    {
        returnValue = F("Hofwiesenstr.");
        break;
    }
    case 147501:
    {
        returnValue = F("Hofwiesenweg");
        break;
    }
    case 147502:
    {
        returnValue = F("Hofwieser Str.");
        break;
    }
    case 147503:
    {
        returnValue = F("Hofwiesstr.");
        break;
    }
    case 147504:
    {
        returnValue = F("Hofwiesweg");
        break;
    }
    case 147505:
    {
        returnValue = F("Hofwingert");
        break;
    }
    case 147506:
    {
        returnValue = F("Hofwinkel");
        break;
    }
    case 147507:
    {
        returnValue = F("Hofwirthstr.");
        break;
    }
    case 147508:
    {
        returnValue = F("Hofwäldleweg");
        break;
    }
    case 147509:
    {
        returnValue = F("Hofzaunweg");
        break;
    }
    case 147510:
    {
        returnValue = F("Hofzeil");
        break;
    }
    case 147511:
    {
        returnValue = F("Hofzell");
        break;
    }
    case 147512:
    {
        returnValue = F("Hofzufahrt");
        break;
    }
    case 147513:
    {
        returnValue = F("Hofäcker");
        break;
    }
    case 147514:
    {
        returnValue = F("Hofäckerallee");
        break;
    }
    case 147515:
    {
        returnValue = F("Hofäckerring");
        break;
    }
    case 147516:
    {
        returnValue = F("Hofäckerstr.");
        break;
    }
    case 147517:
    {
        returnValue = F("Hofäckerweg");
        break;
    }
    case 147518:
    {
        returnValue = F("Hofänger");
        break;
    }
    case 147519:
    {
        returnValue = F("Hoföschle");
        break;
    }
    case 147520:
    {
        returnValue = F("Hoföschweg");
        break;
    }
    case 147521:
    {
        returnValue = F("Hog Hallerweg");
        break;
    }
    case 147522:
    {
        returnValue = F("Hog'n Dor");
        break;
    }
    case 147523:
    {
        returnValue = F("Hoge Boegel");
        break;
    }
    case 147524:
    {
        returnValue = F("Hoge Kant");
        break;
    }
    case 147525:
    {
        returnValue = F("Hoge Norde");
        break;
    }
    case 147526:
    {
        returnValue = F("Hoge Sand");
        break;
    }
    case 147527:
    {
        returnValue = F("Hoge Slaap");
        break;
    }
    case 147528:
    {
        returnValue = F("Hoge Stegge");
        break;
    }
    case 147529:
    {
        returnValue = F("Hoge-Helmer-Str.");
        break;
    }
    case 147530:
    {
        returnValue = F("Hoge-Wall-Stege");
        break;
    }
    case 147531:
    {
        returnValue = F("Hogefeldsweg");
        break;
    }
    case 147532:
    {
        returnValue = F("Hogekamp");
        break;
    }
    case 147533:
    {
        returnValue = F("Hogelandweg");
        break;
    }
    case 147534:
    {
        returnValue = F("Hogelucht");
        break;
    }
    case 147535:
    {
        returnValue = F("Hogen Brink");
        break;
    }
    case 147536:
    {
        returnValue = F("Hogen Böilt");
        break;
    }
    case 147537:
    {
        returnValue = F("Hogen Kamp");
        break;
    }
    case 147538:
    {
        returnValue = F("Hogenbarg");
        break;
    }
    case 147539:
    {
        returnValue = F("Hogenbergweg");
        break;
    }
    case 147540:
    {
        returnValue = F("Hogenborn");
        break;
    }
    case 147541:
    {
        returnValue = F("Hogendiek");
        break;
    }
    case 147542:
    {
        returnValue = F("Hogendiekbrück");
        break;
    }
    case 147543:
    {
        returnValue = F("Hogendorn");
        break;
    }
    case 147544:
    {
        returnValue = F("Hogenellweg");
        break;
    }
    case 147545:
    {
        returnValue = F("Hogenfelde");
        break;
    }
    case 147546:
    {
        returnValue = F("Hogengasse");
        break;
    }
    case 147547:
    {
        returnValue = F("Hogenholt");
        break;
    }
    case 147548:
    {
        returnValue = F("Hogenkamp");
        break;
    }
    case 147549:
    {
        returnValue = F("Hogenlandweg");
        break;
    }
    case 147550:
    {
        returnValue = F("Hogenmoor");
        break;
    }
    case 147551:
    {
        returnValue = F("Hogenrade");
        break;
    }
    case 147552:
    {
        returnValue = F("Hogenrebenredder");
        break;
    }
    case 147553:
    {
        returnValue = F("Hogenset");
        break;
    }
    case 147554:
    {
        returnValue = F("Hoger");
        break;
    }
    case 147555:
    {
        returnValue = F("Hogesand");
        break;
    }
    case 147556:
    {
        returnValue = F("Hogesfeld");
        break;
    }
    case 147557:
    {
        returnValue = F("Hogewarfstr.");
        break;
    }
    case 147558:
    {
        returnValue = F("Hogge");
        break;
    }
    case 147559:
    {
        returnValue = F("Hoggerstr.");
        break;
    }
    case 147560:
    {
        returnValue = F("Hogrefeweg");
        break;
    }
    case 147561:
    {
        returnValue = F("Hogschuererweg");
        break;
    }
    case 147562:
    {
        returnValue = F("Hogschürer Weg");
        break;
    }
    case 147563:
    {
        returnValue = F("Hogwarts-Street");
        break;
    }
    case 147564:
    {
        returnValue = F("Hogweg");
        break;
    }
    case 147565:
    {
        returnValue = F("Hoh-Chi-Min-Pfad");
        break;
    }
    case 147566:
    {
        returnValue = F("Hoh-Erle-Weg");
        break;
    }
    case 147567:
    {
        returnValue = F("Hohackerring");
        break;
    }
    case 147568:
    {
        returnValue = F("Hohackersteige");
        break;
    }
    case 147569:
    {
        returnValue = F("Hohackerstr.");
        break;
    }
    case 147570:
    {
        returnValue = F("Hohackersträßchen");
        break;
    }
    case 147571:
    {
        returnValue = F("Hohackerweg");
        break;
    }
    case 147572:
    {
        returnValue = F("Hohbachsträßchen");
        break;
    }
    case 147573:
    {
        returnValue = F("Hohbannsteinweg");
        break;
    }
    case 147574:
    {
        returnValue = F("Hohbargen");
        break;
    }
    case 147575:
    {
        returnValue = F("Hohbarnweg");
        break;
    }
    case 147576:
    {
        returnValue = F("Hohbaum");
        break;
    }
    case 147577:
    {
        returnValue = F("Hohbaumweg");
        break;
    }
    case 147578:
    {
        returnValue = F("Hohbeck");
        break;
    }
    case 147579:
    {
        returnValue = F("Hohberger Str.");
        break;
    }
    case 147580:
    {
        returnValue = F("Hohberghohle");
        break;
    }
    case 147581:
    {
        returnValue = F("Hohbergkopfweg");
        break;
    }
    case 147582:
    {
        returnValue = F("Hohbergplatz");
        break;
    }
    case 147583:
    {
        returnValue = F("Hohbergstr.");
        break;
    }
    case 147584:
    {
        returnValue = F("Hohbergteichweg");
        break;
    }
    case 147585:
    {
        returnValue = F("Hohbergweg");
        break;
    }
    case 147586:
    {
        returnValue = F("Hohbeulstr.");
        break;
    }
    case 147587:
    {
        returnValue = F("Hohbruckstr.");
        break;
    }
    case 147588:
    {
        returnValue = F("Hohbuch");
        break;
    }
    case 147589:
    {
        returnValue = F("Hohbuchweg");
        break;
    }
    case 147590:
    {
        returnValue = F("Hohburger Eichenweg");
        break;
    }
    case 147591:
    {
        returnValue = F("Hohburger Str.");
        break;
    }
    case 147592:
    {
        returnValue = F("Hohburgstr.");
        break;
    }
    case 147593:
    {
        returnValue = F("Hohburkersdorfer Str.");
        break;
    }
    case 147594:
    {
        returnValue = F("Hohbusch");
        break;
    }
    case 147595:
    {
        returnValue = F("Hohbußstr.");
        break;
    }
    case 147596:
    {
        returnValue = F("Hohbühlstr.");
        break;
    }
    case 147597:
    {
        returnValue = F("Hohbühlweg");
        break;
    }
    case 147598:
    {
        returnValue = F("Hohbüschen");
        break;
    }
    case 147599:
    {
        returnValue = F("Hohbüschener Weg");
        break;
    }
    case 147600:
    {
        returnValue = F("Hohe");
        break;
    }
    case 147601:
    {
        returnValue = F("Hohe Acker");
        break;
    }
    case 147602:
    {
        returnValue = F("Hohe Allee");
        break;
    }
    case 147603:
    {
        returnValue = F("Hohe Angerstr.");
        break;
    }
    case 147604:
    {
        returnValue = F("Hohe Anwand");
        break;
    }
    case 147605:
    {
        returnValue = F("Hohe Anwande");
        break;
    }
    case 147606:
    {
        returnValue = F("Hohe Bahn");
        break;
    }
    case 147607:
    {
        returnValue = F("Hohe Balz");
        break;
    }
    case 147608:
    {
        returnValue = F("Hohe Bell");
        break;
    }
    case 147609:
    {
        returnValue = F("Hohe Berg");
        break;
    }
    case 147610:
    {
        returnValue = F("Hohe Berge");
        break;
    }
    case 147611:
    {
        returnValue = F("Hohe Bergstr.");
        break;
    }
    case 147612:
    {
        returnValue = F("Hohe Birk");
        break;
    }
    case 147613:
    {
        returnValue = F("Hohe Birke");
        break;
    }
    case 147614:
    {
        returnValue = F("Hohe Bitze");
        break;
    }
    case 147615:
    {
        returnValue = F("Hohe Bleiche");
        break;
    }
    case 147616:
    {
        returnValue = F("Hohe Bredde");
        break;
    }
    case 147617:
    {
        returnValue = F("Hohe Breite");
        break;
    }
    case 147618:
    {
        returnValue = F("Hohe Brücke");
        break;
    }
    case 147619:
    {
        returnValue = F("Hohe Buche");
        break;
    }
    case 147620:
    {
        returnValue = F("Hohe Buchleuthe");
        break;
    }
    case 147621:
    {
        returnValue = F("Hohe Bude");
        break;
    }
    case 147622:
    {
        returnValue = F("Hohe Bäume");
        break;
    }
    case 147623:
    {
        returnValue = F("Hohe Bügelstr.");
        break;
    }
    case 147624:
    {
        returnValue = F("Hohe Bünte");
        break;
    }
    case 147625:
    {
        returnValue = F("Hohe Dammgasse");
        break;
    }
    case 147626:
    {
        returnValue = F("Hohe Driesch");
        break;
    }
    case 147627:
    {
        returnValue = F("Hohe Düne");
        break;
    }
    case 147628:
    {
        returnValue = F("Hohe Egarten Str.");
        break;
    }
    case 147629:
    {
        returnValue = F("Hohe Egge Höhenweg");
        break;
    }
    case 147630:
    {
        returnValue = F("Hohe Egge Oberweg");
        break;
    }
    case 147631:
    {
        returnValue = F("Hohe Egge Unterweg");
        break;
    }
    case 147632:
    {
        returnValue = F("Hohe Egge Zwischenweg");
        break;
    }
    case 147633:
    {
        returnValue = F("Hohe Eich");
        break;
    }
    case 147634:
    {
        returnValue = F("Hohe Eiche");
        break;
    }
    case 147635:
    {
        returnValue = F("Hohe Eichen");
        break;
    }
    case 147636:
    {
        returnValue = F("Hohe Esche");
        break;
    }
    case 147637:
    {
        returnValue = F("Hohe Eschweg");
        break;
    }
    case 147638:
    {
        returnValue = F("Hohe Fahrt");
        break;
    }
    case 147639:
    {
        returnValue = F("Hohe Feldstr.");
        break;
    }
    case 147640:
    {
        returnValue = F("Hohe Flegge");
        break;
    }
    case 147641:
    {
        returnValue = F("Hohe Flur");
        break;
    }
    case 147642:
    {
        returnValue = F("Hohe Fohr");
        break;
    }
    case 147643:
    {
        returnValue = F("Hohe Forchenweg");
        break;
    }
    case 147644:
    {
        returnValue = F("Hohe Fuhr");
        break;
    }
    case 147645:
    {
        returnValue = F("Hohe Furche");
        break;
    }
    case 147646:
    {
        returnValue = F("Hohe Föhren");
        break;
    }
    case 147647:
    {
        returnValue = F("Hohe Gasse");
        break;
    }
    case 147648:
    {
        returnValue = F("Hohe Gast");
        break;
    }
    case 147649:
    {
        returnValue = F("Hohe Gaste");
        break;
    }
    case 147650:
    {
        returnValue = F("Hohe Geest");
        break;
    }
    case 147651:
    {
        returnValue = F("Hohe Giethorst");
        break;
    }
    case 147652:
    {
        returnValue = F("Hohe Gred");
        break;
    }
    case 147653:
    {
        returnValue = F("Hohe Halde");
        break;
    }
    case 147654:
    {
        returnValue = F("Hohe Hardt");
        break;
    }
    case 147655:
    {
        returnValue = F("Hohe Hausstr.");
        break;
    }
    case 147656:
    {
        returnValue = F("Hohe Heide");
        break;
    }
    case 147657:
    {
        returnValue = F("Hohe Horst");
        break;
    }
    case 147658:
    {
        returnValue = F("Hohe Hufe");
        break;
    }
    case 147659:
    {
        returnValue = F("Hohe Hügelschneise");
        break;
    }
    case 147660:
    {
        returnValue = F("Hohe Kamp");
        break;
    }
    case 147661:
    {
        returnValue = F("Hohe Kampstr.");
        break;
    }
    case 147662:
    {
        returnValue = F("Hohe Kiefer");
        break;
    }
    case 147663:
    {
        returnValue = F("Hohe Kiefern");
        break;
    }
    case 147664:
    {
        returnValue = F("Hohe Klinge");
        break;
    }
    case 147665:
    {
        returnValue = F("Hohe Klint");
        break;
    }
    case 147666:
    {
        returnValue = F("Hohe Koppel");
        break;
    }
    case 147667:
    {
        returnValue = F("Hohe Kreuzgasse");
        break;
    }
    case 147668:
    {
        returnValue = F("Hohe Kreuzstr.");
        break;
    }
    case 147669:
    {
        returnValue = F("Hohe Kuhle");
        break;
    }
    case 147670:
    {
        returnValue = F("Hohe Landweg");
        break;
    }
    case 147671:
    {
        returnValue = F("Hohe Lehne");
        break;
    }
    case 147672:
    {
        returnValue = F("Hohe Lehr");
        break;
    }
    case 147673:
    {
        returnValue = F("Hohe Leite");
        break;
    }
    case 147674:
    {
        returnValue = F("Hohe Leiten");
        break;
    }
    case 147675:
    {
        returnValue = F("Hohe Leuchte");
        break;
    }
    case 147676:
    {
        returnValue = F("Hohe Ley");
        break;
    }
    case 147677:
    {
        returnValue = F("Hohe Lied");
        break;
    }
    case 147678:
    {
        returnValue = F("Hohe Lieth");
        break;
    }
    case 147679:
    {
        returnValue = F("Hohe Liethe");
        break;
    }
    case 147680:
    {
        returnValue = F("Hohe Linde");
        break;
    }
    case 147681:
    {
        returnValue = F("Hohe Linie");
        break;
    }
    case 147682:
    {
        returnValue = F("Hohe Litt");
        break;
    }
    case 147683:
    {
        returnValue = F("Hohe Loga");
        break;
    }
    case 147684:
    {
        returnValue = F("Hohe Looge");
        break;
    }
    case 147685:
    {
        returnValue = F("Hohe Lucht");
        break;
    }
    case 147686:
    {
        returnValue = F("Hohe Luft");
        break;
    }
    case 147687:
    {
        returnValue = F("Hohe Lücht");
        break;
    }
    case 147688:
    {
        returnValue = F("Hohe Manne");
        break;
    }
    case 147689:
    {
        returnValue = F("Hohe Mark");
        break;
    }
    case 147690:
    {
        returnValue = F("Hohe Mauer");
        break;
    }
    case 147691:
    {
        returnValue = F("Hohe Mauer Str.");
        break;
    }
    case 147692:
    {
        returnValue = F("Hohe Morgen");
        break;
    }
    case 147693:
    {
        returnValue = F("Hohe Mühle");
        break;
    }
    case 147694:
    {
        returnValue = F("Hohe Münsterstr.");
        break;
    }
    case 147695:
    {
        returnValue = F("Hohe Orde");
        break;
    }
    case 147696:
    {
        returnValue = F("Hohe Raine");
        break;
    }
    case 147697:
    {
        returnValue = F("Hohe Rainstr.");
        break;
    }
    case 147698:
    {
        returnValue = F("Hohe Rainäckerstr.");
        break;
    }
    case 147699:
    {
        returnValue = F("Hohe Reut Weg");
        break;
    }
    case 147700:
    {
        returnValue = F("Hohe Reute");
        break;
    }
    case 147701:
    {
        returnValue = F("Hohe Reuth");
        break;
    }
    case 147702:
    {
        returnValue = F("Hohe Rheinstr.");
        break;
    }
    case 147703:
    {
        returnValue = F("Hohe Rhonard");
        break;
    }
    case 147704:
    {
        returnValue = F("Hohe Richtstatt");
        break;
    }
    case 147705:
    {
        returnValue = F("Hohe Rot");
        break;
    }
    case 147706:
    {
        returnValue = F("Hohe Roth");
        break;
    }
    case 147707:
    {
        returnValue = F("Hohe Röder");
        break;
    }
    case 147708:
    {
        returnValue = F("Hohe Sandleite");
        break;
    }
    case 147709:
    {
        returnValue = F("Hohe Schaar");
        break;
    }
    case 147710:
    {
        returnValue = F("Hohe Schleife");
        break;
    }
    case 147711:
    {
        returnValue = F("Hohe Schneise");
        break;
    }
    case 147712:
    {
        returnValue = F("Hohe Schweiz");
        break;
    }
    case 147713:
    {
        returnValue = F("Hohe Sicht");
        break;
    }
    case 147714:
    {
        returnValue = F("Hohe Sonne");
        break;
    }
    case 147715:
    {
        returnValue = F("Hohe Sorge");
        break;
    }
    case 147716:
    {
        returnValue = F("Hohe Stauden");
        break;
    }
    case 147717:
    {
        returnValue = F("Hohe Steig");
        break;
    }
    case 147718:
    {
        returnValue = F("Hohe Steige");
        break;
    }
    case 147719:
    {
        returnValue = F("Hohe Stein Str.");
        break;
    }
    case 147720:
    {
        returnValue = F("Hohe Steinert");
        break;
    }
    case 147721:
    {
        returnValue = F("Hohe Stolle");
        break;
    }
    case 147722:
    {
        returnValue = F("Hohe Str.");
        break;
    }
    case 147723:
    {
        returnValue = F("Hohe Str. ((blauer Keil))");
        break;
    }
    case 147724:
    {
        returnValue = F("Hohe Str. (ehemalige Römerstr.)");
        break;
    }
    case 147725:
    {
        returnValue = F("Hohe Str. / Alte Str.");
        break;
    }
    case 147726:
    {
        returnValue = F("Hohe Str. / Ortesweg");
        break;
    }
    case 147727:
    {
        returnValue = F("Hohe Str., Schautafel Via Regia");
        break;
    }
    case 147728:
    {
        returnValue = F("Hohe Stube");
        break;
    }
    case 147729:
    {
        returnValue = F("Hohe Sünn");
        break;
    }
    case 147730:
    {
        returnValue = F("Hohe Tanne");
        break;
    }
    case 147731:
    {
        returnValue = F("Hohe Tannen");
        break;
    }
    case 147732:
    {
        returnValue = F("Hohe Thee");
        break;
    }
    case 147733:
    {
        returnValue = F("Hohe Turmstr.");
        break;
    }
    case 147734:
    {
        returnValue = F("Hohe Wacht");
        break;
    }
    case 147735:
    {
        returnValue = F("Hohe Wanne");
        break;
    }
    case 147736:
    {
        returnValue = F("Hohe Ward");
        break;
    }
    case 147737:
    {
        returnValue = F("Hohe Warf");
        break;
    }
    case 147738:
    {
        returnValue = F("Hohe Wart");
        break;
    }
    case 147739:
    {
        returnValue = F("Hohe Warte");
        break;
    }
    case 147740:
    {
        returnValue = F("Hohe Warth");
        break;
    }
    case 147741:
    {
        returnValue = F("Hohe Wartstr.");
        break;
    }
    case 147742:
    {
        returnValue = F("Hohe Weg");
        break;
    }
    case 147743:
    {
        returnValue = F("Hohe Wegen");
        break;
    }
    case 147744:
    {
        returnValue = F("Hohe Wehde");
        break;
    }
    case 147745:
    {
        returnValue = F("Hohe Weide");
        break;
    }
    case 147746:
    {
        returnValue = F("Hohe Welle");
        break;
    }
    case 147747:
    {
        returnValue = F("Hohe Wende");
        break;
    }
    case 147748:
    {
        returnValue = F("Hohe Wiese");
        break;
    }
    case 147749:
    {
        returnValue = F("Hohe Wiesen");
        break;
    }
    case 147750:
    {
        returnValue = F("Hohe Wisch");
        break;
    }
    case 147751:
    {
        returnValue = F("Hohe Wort");
        break;
    }
    case 147752:
    {
        returnValue = F("Hohe Worth");
        break;
    }
    case 147753:
    {
        returnValue = F("Hohe Wurt");
        break;
    }
    case 147754:
    {
        returnValue = F("Hohe Wurz");
        break;
    }
    case 147755:
    {
        returnValue = F("Hohe Äcker");
        break;
    }
    case 147756:
    {
        returnValue = F("Hohe Ähren");
        break;
    }
    case 147757:
    {
        returnValue = F("Hohe-Acht-Str.");
        break;
    }
    case 147758:
    {
        returnValue = F("Hohe-Au-Str.");
        break;
    }
    case 147759:
    {
        returnValue = F("Hohe-Baum-Str.");
        break;
    }
    case 147760:
    {
        returnValue = F("Hohe-Bracht-Str.");
        break;
    }
    case 147761:
    {
        returnValue = F("Hohe-Buch-Ring");
        break;
    }
    case 147762:
    {
        returnValue = F("Hohe-Buchen-Allee");
        break;
    }
    case 147763:
    {
        returnValue = F("Hohe-Buchen-Weg");
        break;
    }
    case 147764:
    {
        returnValue = F("Hohe-Egart-Sträßle");
        break;
    }
    case 147765:
    {
        returnValue = F("Hohe-Fichteweg");
        break;
    }
    case 147766:
    {
        returnValue = F("Hohe-Flum-Str.");
        break;
    }
    case 147767:
    {
        returnValue = F("Hohe-Haar-Str.");
        break;
    }
    case 147768:
    {
        returnValue = F("Hohe-Hain-Str.");
        break;
    }
    case 147769:
    {
        returnValue = F("Hohe-Holz-Weg");
        break;
    }
    case 147770:
    {
        returnValue = F("Hohe-Kanzel-Str.");
        break;
    }
    case 147771:
    {
        returnValue = F("Hohe-Kreuz-Siedlung");
        break;
    }
    case 147772:
    {
        returnValue = F("Hohe-Kreuz-Str.");
        break;
    }
    case 147773:
    {
        returnValue = F("Hohe-Lay-Str.");
        break;
    }
    case 147774:
    {
        returnValue = F("Hohe-Lieth-Weg");
        break;
    }
    case 147775:
    {
        returnValue = F("Hohe-Loog-Str.");
        break;
    }
    case 147776:
    {
        returnValue = F("Hohe-Mark-Str.");
        break;
    }
    case 147777:
    {
        returnValue = F("Hohe-Mätze-Str.");
        break;
    }
    case 147778:
    {
        returnValue = F("Hohe-Möhr-Str.");
        break;
    }
    case 147779:
    {
        returnValue = F("Hohe-Rott-Weg");
        break;
    }
    case 147780:
    {
        returnValue = F("Hohe-Sonne-Weg");
        break;
    }
    case 147781:
    {
        returnValue = F("Hohe-Tag-Weg");
        break;
    }
    case 147782:
    {
        returnValue = F("Hohe-Tann-Str.");
        break;
    }
    case 147783:
    {
        returnValue = F("Hohe-Tann-Weg");
        break;
    }
    case 147784:
    {
        returnValue = F("Hohe-Tannen-Str.");
        break;
    }
    case 147785:
    {
        returnValue = F("Hohe-Wacht-Str.");
        break;
    }
    case 147786:
    {
        returnValue = F("Hohe-Wacht-Weg");
        break;
    }
    case 147787:
    {
        returnValue = F("Hohe-Waid-Weg");
        break;
    }
    case 147788:
    {
        returnValue = F("Hohe-Wart-Str.");
        break;
    }
    case 147789:
    {
        returnValue = F("Hohe-Warte-Str.");
        break;
    }
    case 147790:
    {
        returnValue = F("Hohe-Warte-Weg");
        break;
    }
    case 147791:
    {
        returnValue = F("Hohe-Wühl-Str.");
        break;
    }
    case 147792:
    {
        returnValue = F("Hohe-Äcker-Str.");
        break;
    }
    case 147793:
    {
        returnValue = F("HoheSteigWeg");
        break;
    }
    case 147794:
    {
        returnValue = F("Hohebacher Str.");
        break;
    }
    case 147795:
    {
        returnValue = F("Hohebahnweg");
        break;
    }
    case 147796:
    {
        returnValue = F("Hohebarger Str.");
        break;
    }
    case 147797:
    {
        returnValue = F("Hoheberg");
        break;
    }
    case 147798:
    {
        returnValue = F("Hohebergschneise");
        break;
    }
    case 147799:
    {
        returnValue = F("Hohebergstr.");
        break;
    }
    case 147800:
    {
        returnValue = F("Hohebergsweg");
        break;
    }
    case 147801:
    {
        returnValue = F("Hohebergweg");
        break;
    }
    case 147802:
    {
        returnValue = F("Hohebier");
        break;
    }
    case 147803:
    {
        returnValue = F("Hohebildstr.");
        break;
    }
    case 147804:
    {
        returnValue = F("Hohebuch");
        break;
    }
    case 147805:
    {
        returnValue = F("Hohebuchstr.");
        break;
    }
    case 147806:
    {
        returnValue = F("Hoheck");
        break;
    }
    case 147807:
    {
        returnValue = F("Hohedorn");
        break;
    }
    case 147808:
    {
        returnValue = F("Hohedorskamp");
        break;
    }
    case 147809:
    {
        returnValue = F("Hoheellernweg");
        break;
    }
    case 147810:
    {
        returnValue = F("Hoheescher Weg");
        break;
    }
    case 147811:
    {
        returnValue = F("Hohefahrtstr.");
        break;
    }
    case 147812:
    {
        returnValue = F("Hohefeld");
        break;
    }
    case 147813:
    {
        returnValue = F("Hohefeldstr.");
        break;
    }
    case 147814:
    {
        returnValue = F("Hohefeldweg");
        break;
    }
    case 147815:
    {
        returnValue = F("Hohefenne");
        break;
    }
    case 147816:
    {
        returnValue = F("Hohefohrenweg");
        break;
    }
    case 147817:
    {
        returnValue = F("Hohefuhrweg");
        break;
    }
    case 147818:
    {
        returnValue = F("Hohegartsträßle");
        break;
    }
    case 147819:
    {
        returnValue = F("Hohegaster Ring");
        break;
    }
    case 147820:
    {
        returnValue = F("Hohegeißer Str.");
        break;
    }
    case 147821:
    {
        returnValue = F("Hohegenisterstr.");
        break;
    }
    case 147822:
    {
        returnValue = F("Hohegert");
        break;
    }
    case 147823:
    {
        returnValue = F("Hohegertenweg");
        break;
    }
    case 147824:
    {
        returnValue = F("Hoheging");
        break;
    }
    case 147825:
    {
        returnValue = F("Hohegrabenweg");
        break;
    }
    case 147826:
    {
        returnValue = F("Hohegrete");
        break;
    }
    case 147827:
    {
        returnValue = F("Hohehahn");
        break;
    }
    case 147828:
    {
        returnValue = F("Hoheharzstr.");
        break;
    }
    case 147829:
    {
        returnValue = F("Hohehaus");
        break;
    }
    case 147830:
    {
        returnValue = F("Hohehausberg");
        break;
    }
    case 147831:
    {
        returnValue = F("Hoheheider Str.");
        break;
    }
    case 147832:
    {
        returnValue = F("Hoheholzweg");
        break;
    }
    case 147833:
    {
        returnValue = F("Hohehäuser Str.");
        break;
    }
    case 147834:
    {
        returnValue = F("Hoheim");
        break;
    }
    case 147835:
    {
        returnValue = F("Hoheimer Str.");
        break;
    }
    case 147836:
    {
        returnValue = F("Hoheimer Weg");
        break;
    }
    case 147837:
    {
        returnValue = F("Hoheitsstr.");
        break;
    }
    case 147838:
    {
        returnValue = F("Hohejohlster Str.");
        break;
    }
    case 147839:
    {
        returnValue = F("Hohekamp");
        break;
    }
    case 147840:
    {
        returnValue = F("Hohekampweg");
        break;
    }
    case 147841:
    {
        returnValue = F("Hohekreuzstr.");
        break;
    }
    case 147842:
    {
        returnValue = F("Hohekreuzweg");
        break;
    }
    case 147843:
    {
        returnValue = F("Hoheleite an der Saale");
        break;
    }
    case 147844:
    {
        returnValue = F("Hoheleiteberg");
        break;
    }
    case 147845:
    {
        returnValue = F("Hoheleitestr.");
        break;
    }
    case 147846:
    {
        returnValue = F("Hoheleuchte");
        break;
    }
    case 147847:
    {
        returnValue = F("Hohelieter Str.");
        break;
    }
    case 147848:
    {
        returnValue = F("Hohelieth");
        break;
    }
    case 147849:
    {
        returnValue = F("Hohelindstr.");
        break;
    }
    case 147850:
    {
        returnValue = F("Hoheloh");
        break;
    }
    case 147851:
    {
        returnValue = F("Hohelucht");
        break;
    }
    case 147852:
    {
        returnValue = F("Hoheluchter Str.");
        break;
    }
    case 147853:
    {
        returnValue = F("Hoheluchter Weg");
        break;
    }
    case 147854:
    {
        returnValue = F("Hoheluchtstr.");
        break;
    }
    case 147855:
    {
        returnValue = F("Hoheluft");
        break;
    }
    case 147856:
    {
        returnValue = F("Hoheluftstr.");
        break;
    }
    case 147857:
    {
        returnValue = F("Hoheluftweg");
        break;
    }
    case 147858:
    {
        returnValue = F("Hohemarkstr.");
        break;
    }
    case 147859:
    {
        returnValue = F("Hohemarktstr.");
        break;
    }
    case 147860:
    {
        returnValue = F("Hohemarkweg");
        break;
    }
    case 147861:
    {
        returnValue = F("Hohemey");
        break;
    }
    case 147862:
    {
        returnValue = F("Hoheminnenstr.");
        break;
    }
    case 147863:
    {
        returnValue = F("Hohemoor");
        break;
    }
    case 147864:
    {
        returnValue = F("Hohen");
        break;
    }
    case 147865:
    {
        returnValue = F("Hohen Acker");
        break;
    }
    case 147866:
    {
        returnValue = F("Hohen Borghorst");
        break;
    }
    case 147867:
    {
        returnValue = F("Hohen Eichen");
        break;
    }
    case 147868:
    {
        returnValue = F("Hohen Esch");
        break;
    }
    case 147869:
    {
        returnValue = F("Hohen Eschen");
        break;
    }
    case 147870:
    {
        returnValue = F("Hohen Gubkow");
        break;
    }
    case 147871:
    {
        returnValue = F("Hohen Kamp");
        break;
    }
    case 147872:
    {
        returnValue = F("Hohen Mistorfer Weg");
        break;
    }
    case 147873:
    {
        returnValue = F("Hohen Neuendorfer Str.");
        break;
    }
    case 147874:
    {
        returnValue = F("Hohen Neuendorfer Weg");
        break;
    }
    case 147875:
    {
        returnValue = F("Hohen Niendorfer Weg");
        break;
    }
    case 147876:
    {
        returnValue = F("Hohen Rain");
        break;
    }
    case 147877:
    {
        returnValue = F("Hohen Schwarfs, Abzweig");
        break;
    }
    case 147878:
    {
        returnValue = F("Hohen Stein");
        break;
    }
    case 147879:
    {
        returnValue = F("Hohen Stein Str.");
        break;
    }
    case 147880:
    {
        returnValue = F("Hohen Steinen");
        break;
    }
    case 147881:
    {
        returnValue = F("Hohen Tannen");
        break;
    }
    case 147882:
    {
        returnValue = F("Hohen Tauerner Weg");
        break;
    }
    case 147883:
    {
        returnValue = F("Hohen Vohr Str.");
        break;
    }
    case 147884:
    {
        returnValue = F("Hohen Weg");
        break;
    }
    case 147885:
    {
        returnValue = F("Hohen-Bogen-Str.");
        break;
    }
    case 147886:
    {
        returnValue = F("Hohen-Esch-Str.");
        break;
    }
    case 147887:
    {
        returnValue = F("Hohen-Hagener-Weg");
        break;
    }
    case 147888:
    {
        returnValue = F("Hohen-Pritzer-Siedlung");
        break;
    }
    case 147889:
    {
        returnValue = F("Hohen-Wittlinger-Str.");
        break;
    }
    case 147890:
    {
        returnValue = F("Hohenacker");
        break;
    }
    case 147891:
    {
        returnValue = F("Hohenackerstr.");
        break;
    }
    case 147892:
    {
        returnValue = F("Hohenackerweg");
        break;
    }
    case 147893:
    {
        returnValue = F("Hohenadlstr.");
        break;
    }
    case 147894:
    {
        returnValue = F("Hohenaltheimer Weg");
        break;
    }
    case 147895:
    {
        returnValue = F("Hohenartenweg");
        break;
    }
    case 147896:
    {
        returnValue = F("Hohenaspen");
        break;
    }
    case 147897:
    {
        returnValue = F("Hohenasper Feld");
        break;
    }
    case 147898:
    {
        returnValue = F("Hohenau");
        break;
    }
    case 147899:
    {
        returnValue = F("Hohenauer Str.");
        break;
    }
    case 147900:
    {
        returnValue = F("Hohenaustr.");
        break;
    }
    case 147901:
    {
        returnValue = F("Hohenbachernstr.");
        break;
    }
    case 147902:
    {
        returnValue = F("Hohenbalk");
        break;
    }
    case 147903:
    {
        returnValue = F("Hohenbarge");
        break;
    }
    case 147904:
    {
        returnValue = F("Hohenbelliner Weg");
        break;
    }
    case 147905:
    {
        returnValue = F("Hohenbercha");
        break;
    }
    case 147906:
    {
        returnValue = F("Hohenberg");
        break;
    }
    case 147907:
    {
        returnValue = F("Hohenbergen");
        break;
    }
    case 147908:
    {
        returnValue = F("Hohenberger Chaussee");
        break;
    }
    case 147909:
    {
        returnValue = F("Hohenberger Hof");
        break;
    }
    case 147910:
    {
        returnValue = F("Hohenberger Str.");
        break;
    }
    case 147911:
    {
        returnValue = F("Hohenberger Weg");
        break;
    }
    case 147912:
    {
        returnValue = F("Hohenbergham");
        break;
    }
    case 147913:
    {
        returnValue = F("Hohenbergringstr.");
        break;
    }
    case 147914:
    {
        returnValue = F("Hohenbergskamp");
        break;
    }
    case 147915:
    {
        returnValue = F("Hohenbergsmoor");
        break;
    }
    case 147916:
    {
        returnValue = F("Hohenbergsmoorweg");
        break;
    }
    case 147917:
    {
        returnValue = F("Hohenbergsredder");
        break;
    }
    case 147918:
    {
        returnValue = F("Hohenbergstr.");
        break;
    }
    case 147919:
    {
        returnValue = F("Hohenbergweg");
        break;
    }
    case 147920:
    {
        returnValue = F("Hohenbinder Str.");
        break;
    }
    case 147921:
    {
        returnValue = F("Hohenbinder Weg");
        break;
    }
    case 147922:
    {
        returnValue = F("Hohenbirken");
        break;
    }
    case 147923:
    {
        returnValue = F("Hohenbockaer Str.");
        break;
    }
    case 147924:
    {
        returnValue = F("Hohenbockaer Weg");
        break;
    }
    case 147925:
    {
        returnValue = F("Hohenbogenstr.");
        break;
    }
    case 147926:
    {
        returnValue = F("Hohenbolweg");
        break;
    }
    case 147927:
    {
        returnValue = F("Hohenborner Str.");
        break;
    }
    case 147928:
    {
        returnValue = F("Hohenbrink");
        break;
    }
    case 147929:
    {
        returnValue = F("Hohenbrucher Chaussee");
        break;
    }
    case 147930:
    {
        returnValue = F("Hohenbrucher Dorfstr.");
        break;
    }
    case 147931:
    {
        returnValue = F("Hohenbrucher Str.");
        break;
    }
    case 147932:
    {
        returnValue = F("Hohenbruchstr.");
        break;
    }
    case 147933:
    {
        returnValue = F("Hohenbruckanger");
        break;
    }
    case 147934:
    {
        returnValue = F("Hohenbrunner Geräumt");
        break;
    }
    case 147935:
    {
        returnValue = F("Hohenbrunner Str.");
        break;
    }
    case 147936:
    {
        returnValue = F("Hohenbrunner Weg");
        break;
    }
    case 147937:
    {
        returnValue = F("Hohenbrücker Str.");
        break;
    }
    case 147938:
    {
        returnValue = F("Hohenbrünzow");
        break;
    }
    case 147939:
    {
        returnValue = F("Hohenbuchauring");
        break;
    }
    case 147940:
    {
        returnValue = F("Hohenbuchenallee");
        break;
    }
    case 147941:
    {
        returnValue = F("Hohenbuchener Allee");
        break;
    }
    case 147942:
    {
        returnValue = F("Hohenbucherweg");
        break;
    }
    case 147943:
    {
        returnValue = F("Hohenbuckfeld");
        break;
    }
    case 147944:
    {
        returnValue = F("Hohenbuckoer Str.");
        break;
    }
    case 147945:
    {
        returnValue = F("Hohenbukoer Str.");
        break;
    }
    case 147946:
    {
        returnValue = F("Hohenburg");
        break;
    }
    case 147947:
    {
        returnValue = F("Hohenburger Str.");
        break;
    }
    case 147948:
    {
        returnValue = F("Hohenburgstr.");
        break;
    }
    case 147949:
    {
        returnValue = F("Hohenbusch");
        break;
    }
    case 147950:
    {
        returnValue = F("Hohenbuscher Str.");
        break;
    }
    case 147951:
    {
        returnValue = F("Hohenböddenstedt");
        break;
    }
    case 147952:
    {
        returnValue = F("Hohenbökener Weg");
        break;
    }
    case 147953:
    {
        returnValue = F("Hohenbüchen");
        break;
    }
    case 147954:
    {
        returnValue = F("Hohenbüglweg");
        break;
    }
    case 147955:
    {
        returnValue = F("Hohenbühlweg");
        break;
    }
    case 147956:
    {
        returnValue = F("Hohenbünstorf");
        break;
    }
    case 147957:
    {
        returnValue = F("Hohenbünstorfer Str.");
        break;
    }
    case 147958:
    {
        returnValue = F("Hohenbüssow");
        break;
    }
    case 147959:
    {
        returnValue = F("Hohendamm");
        break;
    }
    case 147960:
    {
        returnValue = F("Hohendeich");
        break;
    }
    case 147961:
    {
        returnValue = F("Hohendiek");
        break;
    }
    case 147962:
    {
        returnValue = F("Hohendilching");
        break;
    }
    case 147963:
    {
        returnValue = F("Hohendinger Str.");
        break;
    }
    case 147964:
    {
        returnValue = F("Hohendodeleber Str.");
        break;
    }
    case 147965:
    {
        returnValue = F("Hohendohndorf");
        break;
    }
    case 147966:
    {
        returnValue = F("Hohendorf");
        break;
    }
    case 147967:
    {
        returnValue = F("Hohendorfer Chaussee");
        break;
    }
    case 147968:
    {
        returnValue = F("Hohendorfer Weg");
        break;
    }
    case 147969:
    {
        returnValue = F("Hohendörp");
        break;
    }
    case 147970:
    {
        returnValue = F("Hohenebraer Str.");
        break;
    }
    case 147971:
    {
        returnValue = F("Hoheneck");
        break;
    }
    case 147972:
    {
        returnValue = F("Hohenecker Str.");
        break;
    }
    case 147973:
    {
        returnValue = F("Hoheneckstr.");
        break;
    }
    case 147974:
    {
        returnValue = F("Hohenegg");
        break;
    }
    case 147975:
    {
        returnValue = F("Hoheneggelser Str.");
        break;
    }
    case 147976:
    {
        returnValue = F("Hoheneggstr.");
        break;
    }
    case 147977:
    {
        returnValue = F("Hoheneich");
        break;
    }
    case 147978:
    {
        returnValue = F("Hoheneiche");
        break;
    }
    case 147979:
    {
        returnValue = F("Hoheneichen");
        break;
    }
    case 147980:
    {
        returnValue = F("Hoheneichstr.");
        break;
    }
    case 147981:
    {
        returnValue = F("Hoheneichweg");
        break;
    }
    case 147982:
    {
        returnValue = F("Hohenelbestr.");
        break;
    }
    case 147983:
    {
        returnValue = F("Hohenellhornweg");
        break;
    }
    case 147984:
    {
        returnValue = F("Hohenemsweg");
        break;
    }
    case 147985:
    {
        returnValue = F("Hohenentringer Str.");
        break;
    }
    case 147986:
    {
        returnValue = F("Hohener Dorfstr.");
        break;
    }
    case 147987:
    {
        returnValue = F("Hohenerxlebener Str.");
        break;
    }
    case 147988:
    {
        returnValue = F("Hohenerxlebener Weg");
        break;
    }
    case 147989:
    {
        returnValue = F("Hohenesch");
        break;
    }
    case 147990:
    {
        returnValue = F("Hohenespe");
        break;
    }
    case 147991:
    {
        returnValue = F("Hohenester");
        break;
    }
    case 147992:
    {
        returnValue = F("Hohenesterstr.");
        break;
    }
    case 147993:
    {
        returnValue = F("Hohenfeld");
        break;
    }
    case 147994:
    {
        returnValue = F("Hohenfelde");
        break;
    }
    case 147995:
    {
        returnValue = F("Hohenfelde-Tanger");
        break;
    }
    case 147996:
    {
        returnValue = F("Hohenfelder Dorfstr.");
        break;
    }
    case 147997:
    {
        returnValue = F("Hohenfelder Linde");
        break;
    }
    case 147998:
    {
        returnValue = F("Hohenfelder Stieg");
        break;
    }
    case 147999:
    {
        returnValue = F("Hohenfelder Str.");
        break;
    }
    case 148000:
    {
        returnValue = F("Hohenfelder Weg");
        break;
    }
    case 148001:
    {
        returnValue = F("Hohenfeldstr.");
        break;
    }
    case 148002:
    {
        returnValue = F("Hohenfelser Str.");
        break;
    }
    case 148003:
    {
        returnValue = F("Hohenfelser Weg");
        break;
    }
    case 148004:
    {
        returnValue = F("Hohenfelsstr.");
        break;
    }
    case 148005:
    {
        returnValue = F("Hohenferchesarer Str.");
        break;
    }
    case 148006:
    {
        returnValue = F("Hohenferchesarer Weg");
        break;
    }
    case 148007:
    {
        returnValue = F("Hohenfichten");
        break;
    }
    case 148008:
    {
        returnValue = F("Hohenfichtener Str.");
        break;
    }
    case 148009:
    {
        returnValue = F("Hohenfier");
        break;
    }
    case 148010:
    {
        returnValue = F("Hohenfiert");
        break;
    }
    case 148011:
    {
        returnValue = F("Hohenfierter Weg");
        break;
    }
    case 148012:
    {
        returnValue = F("Hohenfierthsweg");
        break;
    }
    case 148013:
    {
        returnValue = F("Hohenfinower Str.");
        break;
    }
    case 148014:
    {
        returnValue = F("Hohenfriedeberger Str.");
        break;
    }
    case 148015:
    {
        returnValue = F("Hohenfriedingenstr.");
        break;
    }
    case 148016:
    {
        returnValue = F("Hohenfriedstr.");
        break;
    }
    case 148017:
    {
        returnValue = F("Hohenfuhrstr.");
        break;
    }
    case 148018:
    {
        returnValue = F("Hohenfurcher Str.");
        break;
    }
    case 148019:
    {
        returnValue = F("Hohengarten");
        break;
    }
    case 148020:
    {
        returnValue = F("Hohengasse");
        break;
    }
    case 148021:
    {
        returnValue = F("Hohengebrachinger Str.");
        break;
    }
    case 148022:
    {
        returnValue = F("Hohengehren");
        break;
    }
    case 148023:
    {
        returnValue = F("Hohengraben");
        break;
    }
    case 148024:
    {
        returnValue = F("Hohengrün");
        break;
    }
    case 148025:
    {
        returnValue = F("Hohengrüner Str.");
        break;
    }
    case 148026:
    {
        returnValue = F("Hohengrüner Weg");
        break;
    }
    case 148027:
    {
        returnValue = F("Hohengänder Str.");
        break;
    }
    case 148028:
    {
        returnValue = F("Hohengöhrener Weg");
        break;
    }
    case 148029:
    {
        returnValue = F("Hohengüßbacher Str.");
        break;
    }
    case 148030:
    {
        returnValue = F("Hohenhagen");
        break;
    }
    case 148031:
    {
        returnValue = F("Hohenhain");
        break;
    }
    case 148032:
    {
        returnValue = F("Hohenhamelner Str.");
        break;
    }
    case 148033:
    {
        returnValue = F("Hohenhammsweg");
        break;
    }
    case 148034:
    {
        returnValue = F("Hohenharder Str.");
        break;
    }
    case 148035:
    {
        returnValue = F("Hohenhardter Hof");
        break;
    }
    case 148036:
    {
        returnValue = F("Hohenhardter Str.");
        break;
    }
    case 148037:
    {
        returnValue = F("Hohenhardtsweiler Str.");
        break;
    }
    case 148038:
    {
        returnValue = F("Hohenhaslacher Str.");
        break;
    }
    case 148039:
    {
        returnValue = F("Hohenhaslacher Weg");
        break;
    }
    case 148040:
    {
        returnValue = F("Hohenhausen");
        break;
    }
    case 148041:
    {
        returnValue = F("Hohenhausener Str.");
        break;
    }
    case 148042:
    {
        returnValue = F("Hohenhauser Str.");
        break;
    }
    case 148043:
    {
        returnValue = F("Hohenhausgasse");
        break;
    }
    case 148044:
    {
        returnValue = F("Hohenhausstr.");
        break;
    }
    case 148045:
    {
        returnValue = F("Hohenheide");
        break;
    }
    case 148046:
    {
        returnValue = F("Hohenheider Str.");
        break;
    }
    case 148047:
    {
        returnValue = F("Hohenheider Weg");
        break;
    }
    case 148048:
    {
        returnValue = F("Hohenheimer Str.");
        break;
    }
    case 148049:
    {
        returnValue = F("Hohenheisch");
        break;
    }
    case 148050:
    {
        returnValue = F("Hohenhengstenberg");
        break;
    }
    case 148051:
    {
        returnValue = F("Hohenhenninger Str.");
        break;
    }
    case 148052:
    {
        returnValue = F("Hohenhewenstr.");
        break;
    }
    case 148053:
    {
        returnValue = F("Hohenhof");
        break;
    }
    case 148054:
    {
        returnValue = F("Hohenholter Str.");
        break;
    }
    case 148055:
    {
        returnValue = F("Hohenholz");
        break;
    }
    case 148056:
    {
        returnValue = F("Hohenholzer Str.");
        break;
    }
    case 148057:
    {
        returnValue = F("Hohenhopsredder");
        break;
    }
    case 148058:
    {
        returnValue = F("Hohenhorner Weg");
        break;
    }
    case 148059:
    {
        returnValue = F("Hohenhorst");
        break;
    }
    case 148060:
    {
        returnValue = F("Hohenhorster Chaussee");
        break;
    }
    case 148061:
    {
        returnValue = F("Hohenhorster Kirchweg");
        break;
    }
    case 148062:
    {
        returnValue = F("Hohenhorster Str.");
        break;
    }
    case 148063:
    {
        returnValue = F("Hohenhorster Weg");
        break;
    }
    case 148064:
    {
        returnValue = F("Hohenhöfe");
        break;
    }
    case 148065:
    {
        returnValue = F("Hohenhöfen");
        break;
    }
    case 148066:
    {
        returnValue = F("Hohenhörner Str.");
        break;
    }
    case 148067:
    {
        returnValue = F("Hohenhövel");
        break;
    }
    case 148068:
    {
        returnValue = F("Hohenhöwenstr.");
        break;
    }
    case 148069:
    {
        returnValue = F("Hohenirlach");
        break;
    }
    case 148070:
    {
        returnValue = F("Hohenkamp");
        break;
    }
    case 148071:
    {
        returnValue = F("Hohenkamp-Moor");
        break;
    }
    case 148072:
    {
        returnValue = F("Hohenkarpfenweg");
        break;
    }
    case 148073:
    {
        returnValue = F("Hohenkirchen");
        break;
    }
    case 148074:
    {
        returnValue = F("Hohenkirchener Str.");
        break;
    }
    case 148075:
    {
        returnValue = F("Hohenkirchenstr.");
        break;
    }
    case 148076:
    {
        returnValue = F("Hohenkircher Sietwendung");
        break;
    }
    case 148077:
    {
        returnValue = F("Hohenkircher Str.");
        break;
    }
    case 148078:
    {
        returnValue = F("Hohenkircher-Sietwendung");
        break;
    }
    case 148079:
    {
        returnValue = F("Hohenkirchner Str.");
        break;
    }
    case 148080:
    {
        returnValue = F("Hohenkirchner Weg");
        break;
    }
    case 148081:
    {
        returnValue = F("Hohenklingenstr.");
        break;
    }
    case 148082:
    {
        returnValue = F("Hohenkoglweg");
        break;
    }
    case 148083:
    {
        returnValue = F("Hohenkreuzstr.");
        break;
    }
    case 148084:
    {
        returnValue = F("Hohenkrogstr.");
        break;
    }
    case 148085:
    {
        returnValue = F("Hohenkrug");
        break;
    }
    case 148086:
    {
        returnValue = F("Hohenkrähenstr.");
        break;
    }
    case 148087:
    {
        returnValue = F("Hohenkrähenweg");
        break;
    }
    case 148088:
    {
        returnValue = F("Hohenkräher Brühl");
        break;
    }
    case 148089:
    {
        returnValue = F("Hohenkuhnsdorf");
        break;
    }
    case 148090:
    {
        returnValue = F("Hohenkuhnsdorfer Weg");
        break;
    }
    case 148091:
    {
        returnValue = F("Hohenkämpen");
        break;
    }
    case 148092:
    {
        returnValue = F("Hohenkörbener Weg");
        break;
    }
    case 148093:
    {
        returnValue = F("Hohenlaienstr.");
        break;
    }
    case 148094:
    {
        returnValue = F("Hohenlandiner weg");
        break;
    }
    case 148095:
    {
        returnValue = F("Hohenlandsbergstr.");
        break;
    }
    case 148096:
    {
        returnValue = F("Hohenlaub");
        break;
    }
    case 148097:
    {
        returnValue = F("Hohenlauer Feld");
        break;
    }
    case 148098:
    {
        returnValue = F("Hohenlauft");
        break;
    }
    case 148099:
    {
        returnValue = F("Hohenlaufter Weg");
        break;
    }
    case 148100:
    {
        returnValue = F("Hohenlehenstr.");
        break;
    }
    case 148101:
    {
        returnValue = F("Hohenleipischer Str.");
        break;
    }
    case 148102:
    {
        returnValue = F("Hohenleipischweg");
        break;
    }
    case 148103:
    {
        returnValue = F("Hohenleitenweg");
        break;
    }
    case 148104:
    {
        returnValue = F("Hohenleuchte");
        break;
    }
    case 148105:
    {
        returnValue = F("Hohenleuchtestr.");
        break;
    }
    case 148106:
    {
        returnValue = F("Hohenliet");
        break;
    }
    case 148107:
    {
        returnValue = F("Hohenlieth-Bookberg");
        break;
    }
    case 148108:
    {
        returnValue = F("Hohenlieth-Ellerneff");
        break;
    }
    case 148109:
    {
        returnValue = F("Hohenlieth-Parkgarten");
        break;
    }
    case 148110:
    {
        returnValue = F("Hohenlieth-Stratenbrook");
        break;
    }
    case 148111:
    {
        returnValue = F("Hohenlieth-Strijord");
        break;
    }
    case 148112:
    {
        returnValue = F("Hohenlimburger Str.");
        break;
    }
    case 148113:
    {
        returnValue = F("Hohenlinden");
        break;
    }
    case 148114:
    {
        returnValue = F("Hohenlindener Str.");
        break;
    }
    case 148115:
    {
        returnValue = F("Hohenlindenweg");
        break;
    }
    case 148116:
    {
        returnValue = F("Hohenlindner Grenz-Geräumt");
        break;
    }
    case 148117:
    {
        returnValue = F("Hohenlindner Str.");
        break;
    }
    case 148118:
    {
        returnValue = F("Hohenlindner-Geräumt");
        break;
    }
    case 148119:
    {
        returnValue = F("Hohenlindstr.");
        break;
    }
    case 148120:
    {
        returnValue = F("Hohenlobbeser Str.");
        break;
    }
    case 148121:
    {
        returnValue = F("Hohenlobbeser Weg");
        break;
    }
    case 148122:
    {
        returnValue = F("Hohenlockstedter Str.");
        break;
    }
    case 148123:
    {
        returnValue = F("Hohenlohe Str.");
        break;
    }
    case 148124:
    {
        returnValue = F("Hohenloher Allee");
        break;
    }
    case 148125:
    {
        returnValue = F("Hohenloher Bogen");
        break;
    }
    case 148126:
    {
        returnValue = F("Hohenloher Platz");
        break;
    }
    case 148127:
    {
        returnValue = F("Hohenloher Ring");
        break;
    }
    case 148128:
    {
        returnValue = F("Hohenloher Str.");
        break;
    }
    case 148129:
    {
        returnValue = F("Hohenloher Weg");
        break;
    }
    case 148130:
    {
        returnValue = F("Hohenloherweg");
        break;
    }
    case 148131:
    {
        returnValue = F("Hohenlohestr.");
        break;
    }
    case 148132:
    {
        returnValue = F("Hohenloheweg");
        break;
    }
    case 148133:
    {
        returnValue = F("Hohenlohrundweg");
        break;
    }
    case 148134:
    {
        returnValue = F("Hohenlucht");
        break;
    }
    case 148135:
    {
        returnValue = F("Hohenmaratsweg");
        break;
    }
    case 148136:
    {
        returnValue = F("Hohenmemminger Weg");
        break;
    }
    case 148137:
    {
        returnValue = F("Hohenminer Str.");
        break;
    }
    case 148138:
    {
        returnValue = F("Hohenmoor");
        break;
    }
    case 148139:
    {
        returnValue = F("Hohenmoorer Str.");
        break;
    }
    case 148140:
    {
        returnValue = F("Hohenmoorring");
        break;
    }
    case 148141:
    {
        returnValue = F("Hohenmoorweg");
        break;
    }
    case 148142:
    {
        returnValue = F("Hohenmölsener Str.");
        break;
    }
    case 148143:
    {
        returnValue = F("Hohennauener Str.");
        break;
    }
    case 148144:
    {
        returnValue = F("Hohenneuffenstr.");
        break;
    }
    case 148145:
    {
        returnValue = F("Hohenneuffenweg");
        break;
    }
    case 148146:
    {
        returnValue = F("Hohenofen");
        break;
    }
    case 148147:
    {
        returnValue = F("Hohenofener Str.");
        break;
    }
    case 148148:
    {
        returnValue = F("Hohenort");
        break;
    }
    case 148149:
    {
        returnValue = F("Hohenossiger Str.");
        break;
    }
    case 148150:
    {
        returnValue = F("Hohenpfahlweg");
        break;
    }
    case 148151:
    {
        returnValue = F("Hohenpölzer Weg");
        break;
    }
    case 148152:
    {
        returnValue = F("Hohenrah");
        break;
    }
    case 148153:
    {
        returnValue = F("Hohenrain");
        break;
    }
    case 148154:
    {
        returnValue = F("Hohenrainstr.");
        break;
    }
    case 148155:
    {
        returnValue = F("Hohenrainweg");
        break;
    }
    case 148156:
    {
        returnValue = F("Hohenraunauer Str.");
        break;
    }
    case 148157:
    {
        returnValue = F("Hohenreichener Str.");
        break;
    }
    case 148158:
    {
        returnValue = F("Hohenreicher Str.");
        break;
    }
    case 148159:
    {
        returnValue = F("Hohenreinkendorfer Str.");
        break;
    }
    case 148160:
    {
        returnValue = F("Hohenrenner Weg");
        break;
    }
    case 148161:
    {
        returnValue = F("Hohenreusch");
        break;
    }
    case 148162:
    {
        returnValue = F("Hohenreute");
        break;
    }
    case 148163:
    {
        returnValue = F("Hohenreuter Str.");
        break;
    }
    case 148164:
    {
        returnValue = F("Hohenreuth");
        break;
    }
    case 148165:
    {
        returnValue = F("Hohenrhein");
        break;
    }
    case 148166:
    {
        returnValue = F("Hohenrieder Str.");
        break;
    }
    case 148167:
    {
        returnValue = F("Hohenrieder Weg");
        break;
    }
    case 148168:
    {
        returnValue = F("Hohenriederstr.");
        break;
    }
    case 148169:
    {
        returnValue = F("Hohenriedstr.");
        break;
    }
    case 148170:
    {
        returnValue = F("Hohenriedweg");
        break;
    }
    case 148171:
    {
        returnValue = F("Hohenrieth");
        break;
    }
    case 148172:
    {
        returnValue = F("Hohenrod");
        break;
    }
    case 148173:
    {
        returnValue = F("Hohenrodaer Str.");
        break;
    }
    case 148174:
    {
        returnValue = F("Hohenrode");
        break;
    }
    case 148175:
    {
        returnValue = F("Hohenroden");
        break;
    }
    case 148176:
    {
        returnValue = F("Hohenroder Str.");
        break;
    }
    case 148177:
    {
        returnValue = F("Hohenrodt");
        break;
    }
    case 148178:
    {
        returnValue = F("Hohenroth");
        break;
    }
    case 148179:
    {
        returnValue = F("Hohenrother Str.");
        break;
    }
    case 148180:
    {
        returnValue = F("Hohensaatener Str.");
        break;
    }
    case 148181:
    {
        returnValue = F("Hohensachsener Str.");
        break;
    }
    case 148182:
    {
        returnValue = F("Hohensachsener Str. / alte K4130");
        break;
    }
    case 148183:
    {
        returnValue = F("Hohensahl");
        break;
    }
    case 148184:
    {
        returnValue = F("Hohensall");
        break;
    }
    case 148185:
    {
        returnValue = F("Hohensaller Weg");
        break;
    }
    case 148186:
    {
        returnValue = F("Hohensalzaer Weg");
        break;
    }
    case 148187:
    {
        returnValue = F("Hohensand");
        break;
    }
    case 148188:
    {
        returnValue = F("Hohensayner Weg");
        break;
    }
    case 148189:
    {
        returnValue = F("Hohenschlauer Weg");
        break;
    }
    case 148190:
    {
        returnValue = F("Hohenschlitzgasse");
        break;
    }
    case 148191:
    {
        returnValue = F("Hohenschmark");
        break;
    }
    case 148192:
    {
        returnValue = F("Hohenschutzstr.");
        break;
    }
    case 148193:
    {
        returnValue = F("Hohenschöppinger Str.");
        break;
    }
    case 148194:
    {
        returnValue = F("Hohenseelbachsweg");
        break;
    }
    case 148195:
    {
        returnValue = F("Hohenselchower Str.");
        break;
    }
    case 148196:
    {
        returnValue = F("Hohenselchower Weg");
        break;
    }
    case 148197:
    {
        returnValue = F("Hohensolmser Str.");
        break;
    }
    case 148198:
    {
        returnValue = F("Hohensolmser Weg");
        break;
    }
    case 148199:
    {
        returnValue = F("Hohensonner Str.");
        break;
    }
    case 148200:
    {
        returnValue = F("Hohenstadter Gasse");
        break;
    }
    case 148201:
    {
        returnValue = F("Hohenstadter Steige");
        break;
    }
    case 148202:
    {
        returnValue = F("Hohenstadter Str.");
        break;
    }
    case 148203:
    {
        returnValue = F("Hohenstadter Weg");
        break;
    }
    case 148204:
    {
        returnValue = F("Hohenstaufen");
        break;
    }
    case 148205:
    {
        returnValue = F("Hohenstaufenblick");
        break;
    }
    case 148206:
    {
        returnValue = F("Hohenstaufenplatz");
        break;
    }
    case 148207:
    {
        returnValue = F("Hohenstaufenring");
        break;
    }
    case 148208:
    {
        returnValue = F("Hohenstaufenstr.");
        break;
    }
    case 148209:
    {
        returnValue = F("Hohenstaufenweg");
        break;
    }
    case 148210:
    {
        returnValue = F("Hohenstauferallee");
        break;
    }
    case 148211:
    {
        returnValue = F("Hohenstauferstr.");
        break;
    }
    case 148212:
    {
        returnValue = F("Hohenstauffenallee");
        break;
    }
    case 148213:
    {
        returnValue = F("Hohenstauffenring");
        break;
    }
    case 148214:
    {
        returnValue = F("Hohensteen");
        break;
    }
    case 148215:
    {
        returnValue = F("Hohensteg");
        break;
    }
    case 148216:
    {
        returnValue = F("Hohenstein");
        break;
    }
    case 148217:
    {
        returnValue = F("Hohensteinblick");
        break;
    }
    case 148218:
    {
        returnValue = F("Hohensteiner Chaussee");
        break;
    }
    case 148219:
    {
        returnValue = F("Hohensteiner Pflaster");
        break;
    }
    case 148220:
    {
        returnValue = F("Hohensteiner Str.");
        break;
    }
    case 148221:
    {
        returnValue = F("Hohensteiner Weg");
        break;
    }
    case 148222:
    {
        returnValue = F("Hohensteinerhof");
        break;
    }
    case 148223:
    {
        returnValue = F("Hohensteinerstr.");
        break;
    }
    case 148224:
    {
        returnValue = F("Hohensteinring");
        break;
    }
    case 148225:
    {
        returnValue = F("Hohensteinsforst");
        break;
    }
    case 148226:
    {
        returnValue = F("Hohensteinstr.");
        break;
    }
    case 148227:
    {
        returnValue = F("Hohensteinsträssle");
        break;
    }
    case 148228:
    {
        returnValue = F("Hohensteintalweg");
        break;
    }
    case 148229:
    {
        returnValue = F("Hohensteinweg");
        break;
    }
    case 148230:
    {
        returnValue = F("Hohenstiege");
        break;
    }
    case 148231:
    {
        returnValue = F("Hohenstoffelnstr.");
        break;
    }
    case 148232:
    {
        returnValue = F("Hohenstoffelstr.");
        break;
    }
    case 148233:
    {
        returnValue = F("Hohenstoffelweg");
        break;
    }
    case 148234:
    {
        returnValue = F("Hohenstr.");
        break;
    }
    case 148235:
    {
        returnValue = F("Hohenstädter Str.");
        break;
    }
    case 148236:
    {
        returnValue = F("Hohenstädter Weg");
        break;
    }
    case 148237:
    {
        returnValue = F("Hohenstöffelsträßchen");
        break;
    }
    case 148238:
    {
        returnValue = F("Hohensülzer Str.");
        break;
    }
    case 148239:
    {
        returnValue = F("Hohental");
        break;
    }
    case 148240:
    {
        returnValue = F("Hohentalstutzweg");
        break;
    }
    case 148241:
    {
        returnValue = F("Hohentalweg");
        break;
    }
    case 148242:
    {
        returnValue = F("Hohentanne");
        break;
    }
    case 148243:
    {
        returnValue = F("Hohentannen");
        break;
    }
    case 148244:
    {
        returnValue = F("Hohentannenstr.");
        break;
    }
    case 148245:
    {
        returnValue = F("Hohentanner Str.");
        break;
    }
    case 148246:
    {
        returnValue = F("Hohentannweg");
        break;
    }
    case 148247:
    {
        returnValue = F("Hohentenger Str.");
        break;
    }
    case 148248:
    {
        returnValue = F("Hohenthalstr.");
        break;
    }
    case 148249:
    {
        returnValue = F("Hohenthan");
        break;
    }
    case 148250:
    {
        returnValue = F("Hohenthanner Str.");
        break;
    }
    case 148251:
    {
        returnValue = F("Hohenthorstr.");
        break;
    }
    case 148252:
    {
        returnValue = F("Hohenthurmer Str.");
        break;
    }
    case 148253:
    {
        returnValue = F("Hohentorstr.");
        break;
    }
    case 148254:
    {
        returnValue = F("Hohentorsweg");
        break;
    }
    case 148255:
    {
        returnValue = F("Hohentramm");
        break;
    }
    case 148256:
    {
        returnValue = F("Hohentrüdinger Str.");
        break;
    }
    case 148257:
    {
        returnValue = F("Hohentwielstr.");
        break;
    }
    case 148258:
    {
        returnValue = F("Hohentwielweg");
        break;
    }
    case 148259:
    {
        returnValue = F("Hohenvierschau");
        break;
    }
    case 148260:
    {
        returnValue = F("Hohenvolkfien");
        break;
    }
    case 148261:
    {
        returnValue = F("Hohenwald");
        break;
    }
    case 148262:
    {
        returnValue = F("Hohenwalde");
        break;
    }
    case 148263:
    {
        returnValue = F("Hohenwaldeckstr.");
        break;
    }
    case 148264:
    {
        returnValue = F("Hohenwalder Weg");
        break;
    }
    case 148265:
    {
        returnValue = F("Hohenwaldstr.");
        break;
    }
    case 148266:
    {
        returnValue = F("Hohenwarsleber Chaussee");
        break;
    }
    case 148267:
    {
        returnValue = F("Hohenwarsleber Str.");
        break;
    }
    case 148268:
    {
        returnValue = F("Hohenwarsleber Weg");
        break;
    }
    case 148269:
    {
        returnValue = F("Hohenwart");
        break;
    }
    case 148270:
    {
        returnValue = F("Hohenwartener Str.");
        break;
    }
    case 148271:
    {
        returnValue = F("Hohenwarter Heuweg");
        break;
    }
    case 148272:
    {
        returnValue = F("Hohenwarter Str.");
        break;
    }
    case 148273:
    {
        returnValue = F("Hohenwarther Dorfstr.");
        break;
    }
    case 148274:
    {
        returnValue = F("Hohenwarther Landstr.");
        break;
    }
    case 148275:
    {
        returnValue = F("Hohenwarther Str.");
        break;
    }
    case 148276:
    {
        returnValue = F("Hohenwarthstr.");
        break;
    }
    case 148277:
    {
        returnValue = F("Hohenwartstr.");
        break;
    }
    case 148278:
    {
        returnValue = F("Hohenweddrien");
        break;
    }
    case 148279:
    {
        returnValue = F("Hohenweg");
        break;
    }
    case 148280:
    {
        returnValue = F("Hohenwegfeld");
        break;
    }
    case 148281:
    {
        returnValue = F("Hohenwehrdaer Str.");
        break;
    }
    case 148282:
    {
        returnValue = F("Hohenweide");
        break;
    }
    case 148283:
    {
        returnValue = F("Hohenwepeler Str.");
        break;
    }
    case 148284:
    {
        returnValue = F("Hohenwestedter Str.");
        break;
    }
    case 148285:
    {
        returnValue = F("Hohenwichel");
        break;
    }
    case 148286:
    {
        returnValue = F("Hohenwieden");
        break;
    }
    case 148287:
    {
        returnValue = F("Hohenwiesen");
        break;
    }
    case 148288:
    {
        returnValue = F("Hohenwiesenstr.");
        break;
    }
    case 148289:
    {
        returnValue = F("Hohenwiesenweg");
        break;
    }
    case 148290:
    {
        returnValue = F("Hohenwiesäcker");
        break;
    }
    case 148291:
    {
        returnValue = F("Hohenwinkel");
        break;
    }
    case 148292:
    {
        returnValue = F("Hohenwolder Weg");
        break;
    }
    case 148293:
    {
        returnValue = F("Hohenwoos Ausbau");
        break;
    }
    case 148294:
    {
        returnValue = F("Hohenwühren");
        break;
    }
    case 148295:
    {
        returnValue = F("Hohenzant");
        break;
    }
    case 148296:
    {
        returnValue = F("Hohenzaunstr.");
        break;
    }
    case 148297:
    {
        returnValue = F("Hohenzeller Str.");
        break;
    }
    case 148298:
    {
        returnValue = F("Hohenzeller Weg");
        break;
    }
    case 148299:
    {
        returnValue = F("Hohenziatzer Chaussee");
        break;
    }
    case 148300:
    {
        returnValue = F("Hohenziatzer Weg");
        break;
    }
    case 148301:
    {
        returnValue = F("Hohenzieritzer Str.");
        break;
    }
    case 148302:
    {
        returnValue = F("Hohenzollern Park");
        break;
    }
    case 148303:
    {
        returnValue = F("Hohenzollern-Park");
        break;
    }
    case 148304:
    {
        returnValue = F("Hohenzollernbrücke");
        break;
    }
    case 148305:
    {
        returnValue = F("Hohenzollernpark");
        break;
    }
    case 148306:
    {
        returnValue = F("Hohenzollernpassage");
        break;
    }
    case 148307:
    {
        returnValue = F("Hohenzollernplatz");
        break;
    }
    case 148308:
    {
        returnValue = F("Hohenzollernring");
        break;
    }
    case 148309:
    {
        returnValue = F("Hohenzollernstr.");
        break;
    }
    case 148310:
    {
        returnValue = F("Hohenzollernweg");
        break;
    }
    case 148311:
    {
        returnValue = F("Hohenäcker");
        break;
    }
    case 148312:
    {
        returnValue = F("Hohenäckerstr.");
        break;
    }
    case 148313:
    {
        returnValue = F("Hohenäckerweg");
        break;
    }
    case 148314:
    {
        returnValue = F("Hohenöllerstr.");
        break;
    }
    case 148315:
    {
        returnValue = F("Hoheortweg");
        break;
    }
    case 148316:
    {
        returnValue = F("Hoher Acker");
        break;
    }
    case 148317:
    {
        returnValue = F("Hoher Angel");
        break;
    }
    case 148318:
    {
        returnValue = F("Hoher Baum");
        break;
    }
    case 148319:
    {
        returnValue = F("Hoher Berg");
        break;
    }
    case 148320:
    {
        returnValue = F("Hoher Bergweg");
        break;
    }
    case 148321:
    {
        returnValue = F("Hoher Brachweg");
        break;
    }
    case 148322:
    {
        returnValue = F("Hoher Brink");
        break;
    }
    case 148323:
    {
        returnValue = F("Hoher Brühl");
        break;
    }
    case 148324:
    {
        returnValue = F("Hoher Buschweg");
        break;
    }
    case 148325:
    {
        returnValue = F("Hoher Damm");
        break;
    }
    case 148326:
    {
        returnValue = F("Hoher Deich");
        break;
    }
    case 148327:
    {
        returnValue = F("Hoher Esch");
        break;
    }
    case 148328:
    {
        returnValue = F("Hoher Eschenweg");
        break;
    }
    case 148329:
    {
        returnValue = F("Hoher Eschweg");
        break;
    }
    case 148330:
    {
        returnValue = F("Hoher Garten");
        break;
    }
    case 148331:
    {
        returnValue = F("Hoher Geestweg");
        break;
    }
    case 148332:
    {
        returnValue = F("Hoher Geisbergweg");
        break;
    }
    case 148333:
    {
        returnValue = F("Hoher Gleißenberg");
        break;
    }
    case 148334:
    {
        returnValue = F("Hoher Graben");
        break;
    }
    case 148335:
    {
        returnValue = F("Hoher Grenzweg");
        break;
    }
    case 148336:
    {
        returnValue = F("Hoher Hagen");
        break;
    }
    case 148337:
    {
        returnValue = F("Hoher Hahn");
        break;
    }
    case 148338:
    {
        returnValue = F("Hoher Hain");
        break;
    }
    case 148339:
    {
        returnValue = F("Hoher Heckenweg");
        break;
    }
    case 148340:
    {
        returnValue = F("Hoher Heideweg");
        break;
    }
    case 148341:
    {
        returnValue = F("Hoher Hof");
        break;
    }
    case 148342:
    {
        returnValue = F("Hoher Holzweg");
        break;
    }
    case 148343:
    {
        returnValue = F("Hoher Horst");
        break;
    }
    case 148344:
    {
        returnValue = F("Hoher Kamp");
        break;
    }
    case 148345:
    {
        returnValue = F("Hoher Kirchweg");
        break;
    }
    case 148346:
    {
        returnValue = F("Hoher Klosterweg");
        break;
    }
    case 148347:
    {
        returnValue = F("Hoher Krug");
        break;
    }
    case 148348:
    {
        returnValue = F("Hoher Markstein");
        break;
    }
    case 148349:
    {
        returnValue = F("Hoher Marksteinweg");
        break;
    }
    case 148350:
    {
        returnValue = F("Hoher Morgen");
        break;
    }
    case 148351:
    {
        returnValue = F("Hoher Nickel");
        break;
    }
    case 148352:
    {
        returnValue = F("Hoher Nistlerweg");
        break;
    }
    case 148353:
    {
        returnValue = F("Hoher Pforte");
        break;
    }
    case 148354:
    {
        returnValue = F("Hoher Plan");
        break;
    }
    case 148355:
    {
        returnValue = F("Hoher Plan, Kleinnaundorf (2)");
        break;
    }
    case 148356:
    {
        returnValue = F("Hoher Rain");
        break;
    }
    case 148357:
    {
        returnValue = F("Hoher Rainweg");
        break;
    }
    case 148358:
    {
        returnValue = F("Hoher Rech");
        break;
    }
    case 148359:
    {
        returnValue = F("Hoher Ring");
        break;
    }
    case 148360:
    {
        returnValue = F("Hoher Röderweg");
        break;
    }
    case 148361:
    {
        returnValue = F("Hoher Sand");
        break;
    }
    case 148362:
    {
        returnValue = F("Hoher Sandweg");
        break;
    }
    case 148363:
    {
        returnValue = F("Hoher Spielberg");
        break;
    }
    case 148364:
    {
        returnValue = F("Hoher Staden");
        break;
    }
    case 148365:
    {
        returnValue = F("Hoher Steg");
        break;
    }
    case 148366:
    {
        returnValue = F("Hoher Stein");
        break;
    }
    case 148367:
    {
        returnValue = F("Hoher Steinweg");
        break;
    }
    case 148368:
    {
        returnValue = F("Hoher Stich");
        break;
    }
    case 148369:
    {
        returnValue = F("Hoher Stieg");
        break;
    }
    case 148370:
    {
        returnValue = F("Hoher Stoß");
        break;
    }
    case 148371:
    {
        returnValue = F("Hoher Sturz Weg");
        break;
    }
    case 148372:
    {
        returnValue = F("Hoher Thie");
        break;
    }
    case 148373:
    {
        returnValue = F("Hoher Wald");
        break;
    }
    case 148374:
    {
        returnValue = F("Hoher Wall");
        break;
    }
    case 148375:
    {
        returnValue = F("Hoher Wasserbehälter");
        break;
    }
    case 148376:
    {
        returnValue = F("Hoher Weg");
        break;
    }
    case 148377:
    {
        returnValue = F("Hoher Winkel");
        break;
    }
    case 148378:
    {
        returnValue = F("Hoher-Baum-Weg");
        break;
    }
    case 148379:
    {
        returnValue = F("Hoher-Bogen-Str.");
        break;
    }
    case 148380:
    {
        returnValue = F("Hoher-Hagen-Str.");
        break;
    }
    case 148381:
    {
        returnValue = F("Hoher-Ifen-Weg");
        break;
    }
    case 148382:
    {
        returnValue = F("Hoher-Rain-Weg");
        break;
    }
    case 148383:
    {
        returnValue = F("Hoher-Spieß-Weg");
        break;
    }
    case 148384:
    {
        returnValue = F("Hoher-Stein-Weg");
        break;
    }
    case 148385:
    {
        returnValue = F("Hoher-Weezer-Weg");
        break;
    }
    case 148386:
    {
        returnValue = F("Hoherainstr.");
        break;
    }
    case 148387:
    {
        returnValue = F("Hoherbergsweg");
        break;
    }
    case 148388:
    {
        returnValue = F("Hoherbergweg");
        break;
    }
    case 148389:
    {
        returnValue = F("Hohereuth");
        break;
    }
    case 148390:
    {
        returnValue = F("Hoherkampstr.");
        break;
    }
    case 148391:
    {
        returnValue = F("Hoherlacher Str.");
        break;
    }
    case 148392:
    {
        returnValue = F("Hoherlehmer Str.");
        break;
    }
    case 148393:
    {
        returnValue = F("Hohermuthstr.");
        break;
    }
    case 148394:
    {
        returnValue = F("Hoherodskopfsteig");
        break;
    }
    case 148395:
    {
        returnValue = F("Hoherodskopfstr.");
        break;
    }
    case 148396:
    {
        returnValue = F("Hoherodskopfweg");
        break;
    }
    case 148397:
    {
        returnValue = F("Hoherodstr.");
        break;
    }
    case 148398:
    {
        returnValue = F("Hoheroth");
        break;
    }
    case 148399:
    {
        returnValue = F("Hohersdorfer Str.");
        break;
    }
    case 148400:
    {
        returnValue = F("Hohertinger Weg");
        break;
    }
    case 148401:
    {
        returnValue = F("Hoheruckweg");
        break;
    }
    case 148402:
    {
        returnValue = F("Hohes Bram");
        break;
    }
    case 148403:
    {
        returnValue = F("Hohes Ende");
        break;
    }
    case 148404:
    {
        returnValue = F("Hohes Feld");
        break;
    }
    case 148405:
    {
        returnValue = F("Hohes Gebirge");
        break;
    }
    case 148406:
    {
        returnValue = F("Hohes Gestade");
        break;
    }
    case 148407:
    {
        returnValue = F("Hohes Gäßchen");
        break;
    }
    case 148408:
    {
        returnValue = F("Hohes Holz");
        break;
    }
    case 148409:
    {
        returnValue = F("Hohes Horn");
        break;
    }
    case 148410:
    {
        returnValue = F("Hohes Kreuz");
        break;
    }
    case 148411:
    {
        returnValue = F("Hohes Land");
        break;
    }
    case 148412:
    {
        returnValue = F("Hohes Rad");
        break;
    }
    case 148413:
    {
        returnValue = F("Hohes Rech");
        break;
    }
    case 148414:
    {
        returnValue = F("Hohes Rott");
        break;
    }
    case 148415:
    {
        returnValue = F("Hohes Sehen");
        break;
    }
    case 148416:
    {
        returnValue = F("Hohes Sträßlein");
        break;
    }
    case 148417:
    {
        returnValue = F("Hohes Stück");
        break;
    }
    case 148418:
    {
        returnValue = F("Hohes Tor");
        break;
    }
    case 148419:
    {
        returnValue = F("Hohes Ufer");
        break;
    }
    case 148420:
    {
        returnValue = F("Hohes Wegfeld");
        break;
    }
    case 148421:
    {
        returnValue = F("Hohes Wehr");
        break;
    }
    case 148422:
    {
        returnValue = F("Hohestadter Steige");
        break;
    }
    case 148423:
    {
        returnValue = F("Hohestadter Str.");
        break;
    }
    case 148424:
    {
        returnValue = F("Hohestand Schneise");
        break;
    }
    case 148425:
    {
        returnValue = F("Hohesteggasse");
        break;
    }
    case 148426:
    {
        returnValue = F("Hohestegstr.");
        break;
    }
    case 148427:
    {
        returnValue = F("Hohesteinschneise");
        break;
    }
    case 148428:
    {
        returnValue = F("Hohesteinstr.");
        break;
    }
    case 148429:
    {
        returnValue = F("Hohestr.");
        break;
    }
    case 148430:
    {
        returnValue = F("Hohestädter Str.");
        break;
    }
    case 148431:
    {
        returnValue = F("Hohetanner Str.");
        break;
    }
    case 148432:
    {
        returnValue = F("Hohetor");
        break;
    }
    case 148433:
    {
        returnValue = F("Hohetorstr.");
        break;
    }
    case 148434:
    {
        returnValue = F("Hohewardstr.");
        break;
    }
    case 148435:
    {
        returnValue = F("Hohewarf");
        break;
    }
    case 148436:
    {
        returnValue = F("Hohewarfweg");
        break;
    }
    case 148437:
    {
        returnValue = F("Hohewart Schneise");
        break;
    }
    case 148438:
    {
        returnValue = F("Hohewartschneise");
        break;
    }
    case 148439:
    {
        returnValue = F("Hohewartstr.");
        break;
    }
    case 148440:
    {
        returnValue = F("Hohewartweg");
        break;
    }
    case 148441:
    {
        returnValue = F("Hoheweg");
        break;
    }
    case 148442:
    {
        returnValue = F("Hohewegstr.");
        break;
    }
    case 148443:
    {
        returnValue = F("Hoheweids Helmer");
        break;
    }
    case 148444:
    {
        returnValue = F("Hohewiesenstr.");
        break;
    }
    case 148445:
    {
        returnValue = F("Hohewiesgasse");
        break;
    }
    case 148446:
    {
        returnValue = F("Hohewurth");
        break;
    }
    case 148447:
    {
        returnValue = F("Hohewurthstr.");
        break;
    }
    case 148448:
    {
        returnValue = F("Hohfelderstr.");
        break;
    }
    case 148449:
    {
        returnValue = F("Hohfeldsweg");
        break;
    }
    case 148450:
    {
        returnValue = F("Hohfeldweg");
        break;
    }
    case 148451:
    {
        returnValue = F("Hohfelsendobelweg");
        break;
    }
    case 148452:
    {
        returnValue = F("Hohfelsstr.");
        break;
    }
    case 148453:
    {
        returnValue = F("Hohfelsweg");
        break;
    }
    case 148454:
    {
        returnValue = F("Hohfirstweg");
        break;
    }
    case 148455:
    {
        returnValue = F("Hohfuhrstr.");
        break;
    }
    case 148456:
    {
        returnValue = F("Hohfurchweg");
        break;
    }
    case 148457:
    {
        returnValue = F("Hohgang");
        break;
    }
    case 148458:
    {
        returnValue = F("Hohgartenstr.");
        break;
    }
    case 148459:
    {
        returnValue = F("Hohgartenweg");
        break;
    }
    case 148460:
    {
        returnValue = F("Hohgasse");
        break;
    }
    case 148461:
    {
        returnValue = F("Hohholz");
        break;
    }
    case 148462:
    {
        returnValue = F("Hohholzer Hauptstr.");
        break;
    }
    case 148463:
    {
        returnValue = F("Hohholzer Str.");
        break;
    }
    case 148464:
    {
        returnValue = F("Hohholzstr.");
        break;
    }
    case 148465:
    {
        returnValue = F("Hohhölzleweg");
        break;
    }
    case 148466:
    {
        returnValue = F("Hohkamp");
        break;
    }
    case 148467:
    {
        returnValue = F("Hohkeppeler Str.");
        break;
    }
    case 148468:
    {
        returnValue = F("Hohkreuzerlänge");
        break;
    }
    case 148469:
    {
        returnValue = F("Hohkreuzstr.");
        break;
    }
    case 148470:
    {
        returnValue = F("Hohl");
        break;
    }
    case 148471:
    {
        returnValue = F("Hohl Garten");
        break;
    }
    case 148472:
    {
        returnValue = F("Hohl Gass");
        break;
    }
    case 148473:
    {
        returnValue = F("Hohl Wech");
        break;
    }
    case 148474:
    {
        returnValue = F("Hohl-Ackerweg");
        break;
    }
    case 148475:
    {
        returnValue = F("Hohlach");
        break;
    }
    case 148476:
    {
        returnValue = F("Hohlacker");
        break;
    }
    case 148477:
    {
        returnValue = F("Hohlackerstr.");
        break;
    }
    case 148478:
    {
        returnValue = F("Hohlbach");
        break;
    }
    case 148479:
    {
        returnValue = F("Hohlbach Weg");
        break;
    }
    case 148480:
    {
        returnValue = F("Hohlbach-Linie");
        break;
    }
    case 148481:
    {
        returnValue = F("Hohlbachstr.");
        break;
    }
    case 148482:
    {
        returnValue = F("Hohlbachweg");
        break;
    }
    case 148483:
    {
        returnValue = F("Hohlbeinweg");
        break;
    }
    case 148484:
    {
        returnValue = F("Hohlbek");
        break;
    }
    case 148485:
    {
        returnValue = F("Hohlbergstr.");
        break;
    }
    case 148486:
    {
        returnValue = F("Hohlbergweg");
        break;
    }
    case 148487:
    {
        returnValue = F("Hohlbergwiesen");
        break;
    }
    case 148488:
    {
        returnValue = F("Hohlbinsenstr.");
        break;
    }
    case 148489:
    {
        returnValue = F("Hohlbäumle");
        break;
    }
    case 148490:
    {
        returnValue = F("Hohldrift");
        break;
    }
    case 148491:
    {
        returnValue = F("Hohle");
        break;
    }
    case 148492:
    {
        returnValue = F("Hohle Eiche");
        break;
    }
    case 148493:
    {
        returnValue = F("Hohle Gasse");
        break;
    }
    case 148494:
    {
        returnValue = F("Hohle Grubenweg");
        break;
    }
    case 148495:
    {
        returnValue = F("Hohle Grund");
        break;
    }
    case 148496:
    {
        returnValue = F("Hohle Str.");
        break;
    }
    case 148497:
    {
        returnValue = F("Hohle Trift");
        break;
    }
    case 148498:
    {
        returnValue = F("Hohle Weg");
        break;
    }
    case 148499:
    {
        returnValue = F("Hohle Weide");
        break;
    }
    case 148500:
    {
        returnValue = F("Hohle Wiese");
        break;
    }
    case 148501:
    {
        returnValue = F("Hohle-Tann-Str.");
        break;
    }
    case 148502:
    {
        returnValue = F("Hohlebachstr.");
        break;
    }
    case 148503:
    {
        returnValue = F("Hohlebachsweg");
        break;
    }
    case 148504:
    {
        returnValue = F("Hohlebachweg");
        break;
    }
    case 148505:
    {
        returnValue = F("Hohleborner Str.");
        break;
    }
    case 148506:
    {
        returnValue = F("Hohlebühlweg");
        break;
    }
    case 148507:
    {
        returnValue = F("Hohleckweg");
        break;
    }
    case 148508:
    {
        returnValue = F("Hohlegass");
        break;
    }
    case 148509:
    {
        returnValue = F("Hohleich-Weg");
        break;
    }
    case 148510:
    {
        returnValue = F("Hohleichweg");
        break;
    }
    case 148511:
    {
        returnValue = F("Hohlenbach");
        break;
    }
    case 148512:
    {
        returnValue = F("Hohlenberg");
        break;
    }
    case 148513:
    {
        returnValue = F("Hohlenbergstr.");
        break;
    }
    case 148514:
    {
        returnValue = F("Hohlenbrede");
        break;
    }
    case 148515:
    {
        returnValue = F("Hohlenfelsbachstr.");
        break;
    }
    case 148516:
    {
        returnValue = F("Hohlengarten");
        break;
    }
    case 148517:
    {
        returnValue = F("Hohlengasse");
        break;
    }
    case 148518:
    {
        returnValue = F("Hohlengraben");
        break;
    }
    case 148519:
    {
        returnValue = F("Hohlengrabengasse");
        break;
    }
    case 148520:
    {
        returnValue = F("Hohlengrund");
        break;
    }
    case 148521:
    {
        returnValue = F("Hohlengrundstr.");
        break;
    }
    case 148522:
    {
        returnValue = F("Hohlenmatt");
        break;
    }
    case 148523:
    {
        returnValue = F("Hohlenmatten");
        break;
    }
    case 148524:
    {
        returnValue = F("Hohlenstein");
        break;
    }
    case 148525:
    {
        returnValue = F("Hohlensteiner Str.");
        break;
    }
    case 148526:
    {
        returnValue = F("Hohlensteiner Weg");
        break;
    }
    case 148527:
    {
        returnValue = F("Hohlensteinstr.");
        break;
    }
    case 148528:
    {
        returnValue = F("Hohlensteinweg");
        break;
    }
    case 148529:
    {
        returnValue = F("Hohlenstr.");
        break;
    }
    case 148530:
    {
        returnValue = F("Hohlenweg");
        break;
    }
    case 148531:
    {
        returnValue = F("Hohler Berg");
        break;
    }
    case 148532:
    {
        returnValue = F("Hohler Felsweg");
        break;
    }
    case 148533:
    {
        returnValue = F("Hohler Graben");
        break;
    }
    case 148534:
    {
        returnValue = F("Hohler Grabenweg");
        break;
    }
    case 148535:
    {
        returnValue = F("Hohler Rehm");
        break;
    }
    case 148536:
    {
        returnValue = F("Hohler Steinweg");
        break;
    }
    case 148537:
    {
        returnValue = F("Hohler Str.");
        break;
    }
    case 148538:
    {
        returnValue = F("Hohler Weg");
        break;
    }
    case 148539:
    {
        returnValue = F("Hohler-Felsen-Weg");
        break;
    }
    case 148540:
    {
        returnValue = F("Hohler-Stein-Weg");
        break;
    }
    case 148541:
    {
        returnValue = F("Hohlerainstr.");
        break;
    }
    case 148542:
    {
        returnValue = F("Hohlergasse");
        break;
    }
    case 148543:
    {
        returnValue = F("Hohlerstr.");
        break;
    }
    case 148544:
    {
        returnValue = F("Hohlerweg");
        break;
    }
    case 148545:
    {
        returnValue = F("Hohlesteinstr.");
        break;
    }
    case 148546:
    {
        returnValue = F("Hohlesteinweg");
        break;
    }
    case 148547:
    {
        returnValue = F("Hohleweg");
        break;
    }
    case 148548:
    {
        returnValue = F("Hohlfeld");
        break;
    }
    case 148549:
    {
        returnValue = F("Hohlfelds Graben");
        break;
    }
    case 148550:
    {
        returnValue = F("Hohlfeldstr.");
        break;
    }
    case 148551:
    {
        returnValue = F("Hohlfeldweg");
        break;
    }
    case 148552:
    {
        returnValue = F("Hohlgarten");
        break;
    }
    case 148553:
    {
        returnValue = F("Hohlgartenweg");
        break;
    }
    case 148554:
    {
        returnValue = F("Hohlgass");
        break;
    }
    case 148555:
    {
        returnValue = F("Hohlgasse");
        break;
    }
    case 148556:
    {
        returnValue = F("Hohlgassweg");
        break;
    }
    case 148557:
    {
        returnValue = F("Hohlgaß");
        break;
    }
    case 148558:
    {
        returnValue = F("Hohlgaßweg");
        break;
    }
    case 148559:
    {
        returnValue = F("Hohlgraben");
        break;
    }
    case 148560:
    {
        returnValue = F("Hohlgraben Staffel");
        break;
    }
    case 148561:
    {
        returnValue = F("Hohlgrund");
        break;
    }
    case 148562:
    {
        returnValue = F("Hohlgärten");
        break;
    }
    case 148563:
    {
        returnValue = F("Hohlgäßle");
        break;
    }
    case 148564:
    {
        returnValue = F("Hohlheck");
        break;
    }
    case 148565:
    {
        returnValue = F("Hohlheide");
        break;
    }
    case 148566:
    {
        returnValue = F("Hohlhöfen");
        break;
    }
    case 148567:
    {
        returnValue = F("Hohligaß");
        break;
    }
    case 148568:
    {
        returnValue = F("Hohlinden");
        break;
    }
    case 148569:
    {
        returnValue = F("Hohlkamp");
        break;
    }
    case 148570:
    {
        returnValue = F("Hohlklingenweg");
        break;
    }
    case 148571:
    {
        returnValue = F("Hohlknochen");
        break;
    }
    case 148572:
    {
        returnValue = F("Hohlleite");
        break;
    }
    case 148573:
    {
        returnValue = F("Hohlleitenweg");
        break;
    }
    case 148574:
    {
        returnValue = F("Hohlmichweg");
        break;
    }
    case 148575:
    {
        returnValue = F("Hohlmühlallee");
        break;
    }
    case 148576:
    {
        returnValue = F("Hohlmühlenweg");
        break;
    }
    case 148577:
    {
        returnValue = F("Hohlmühlweg");
        break;
    }
    case 148578:
    {
        returnValue = F("Hohlohstr.");
        break;
    }
    case 148579:
    {
        returnValue = F("Hohlohweg");
        break;
    }
    case 148580:
    {
        returnValue = F("Hohlredder");
        break;
    }
    case 148581:
    {
        returnValue = F("Hohlstedter Str.");
        break;
    }
    case 148582:
    {
        returnValue = F("Hohlstedter Weg");
        break;
    }
    case 148583:
    {
        returnValue = F("Hohlsteinstr.");
        break;
    }
    case 148584:
    {
        returnValue = F("Hohlsteinweg");
        break;
    }
    case 148585:
    {
        returnValue = F("Hohlstr.");
        break;
    }
    case 148586:
    {
        returnValue = F("Hohlstück");
        break;
    }
    case 148587:
    {
        returnValue = F("Hohlweg");
        break;
    }
    case 148588:
    {
        returnValue = F("Hohlweg \"Höll");
        break;
    }
    case 148589:
    {
        returnValue = F("Hohlweg Steinsburg");
        break;
    }
    case 148590:
    {
        returnValue = F("Hohlweg-Pfad");
        break;
    }
    case 148591:
    {
        returnValue = F("Hohlwegsgarten");
        break;
    }
    case 148592:
    {
        returnValue = F("Hohlwegsiedlung");
        break;
    }
    case 148593:
    {
        returnValue = F("Hohlwegskamp");
        break;
    }
    case 148594:
    {
        returnValue = F("Hohlwegstr.");
        break;
    }
    case 148595:
    {
        returnValue = F("Hohlwegäcker");
        break;
    }
    case 148596:
    {
        returnValue = F("Hohlweiden");
        break;
    }
    case 148597:
    {
        returnValue = F("Hohlweiler");
        break;
    }
    case 148598:
    {
        returnValue = F("Hohlweiler Mühlweg");
        break;
    }
    case 148599:
    {
        returnValue = F("Hohlwiese");
        break;
    }
    case 148600:
    {
        returnValue = F("Hohlwiesentalweg");
        break;
    }
    case 148601:
    {
        returnValue = F("Hohlwiesenweg");
        break;
    }
    case 148602:
    {
        returnValue = F("Hohlwingertstr.");
        break;
    }
    case 148603:
    {
        returnValue = F("Hohläcker");
        break;
    }
    case 148604:
    {
        returnValue = F("Hohläckerstr.");
        break;
    }
    case 148605:
    {
        returnValue = F("Hohläckerweg");
        break;
    }
    case 148606:
    {
        returnValue = F("Hohmahdweg");
        break;
    }
    case 148607:
    {
        returnValue = F("Hohmann-Gottsleben-Weg");
        break;
    }
    case 148608:
    {
        returnValue = F("Hohmannsgasse");
        break;
    }
    case 148609:
    {
        returnValue = F("Hohmannsgrund");
        break;
    }
    case 148610:
    {
        returnValue = F("Hohmannstr.");
        break;
    }
    case 148611:
    {
        returnValue = F("Hohmannsweg");
        break;
    }
    case 148612:
    {
        returnValue = F("Hohmarkstr.");
        break;
    }
    case 148613:
    {
        returnValue = F("Hohmauerweg");
        break;
    }
    case 148614:
    {
        returnValue = F("Hohmichelestr.");
        break;
    }
    case 148615:
    {
        returnValue = F("Hohmorgenstr.");
        break;
    }
    case 148616:
    {
        returnValue = F("Hohmuttelweg");
        break;
    }
    case 148617:
    {
        returnValue = F("Hohmärtelstr.");
        break;
    }
    case 148618:
    {
        returnValue = F("Hohmühlenweg");
        break;
    }
    case 148619:
    {
        returnValue = F("Hohmüllerweg");
        break;
    }
    case 148620:
    {
        returnValue = F("Hohn");
        break;
    }
    case 148621:
    {
        returnValue = F("Hohnbacher Weg");
        break;
    }
    case 148622:
    {
        returnValue = F("Hohndoor");
        break;
    }
    case 148623:
    {
        returnValue = F("Hohndorf Markt");
        break;
    }
    case 148624:
    {
        returnValue = F("Hohndorf-Prettiner Str.");
        break;
    }
    case 148625:
    {
        returnValue = F("Hohndorfer Hauptstr.");
        break;
    }
    case 148626:
    {
        returnValue = F("Hohndorfer Kirchweg");
        break;
    }
    case 148627:
    {
        returnValue = F("Hohndorfer Str.");
        break;
    }
    case 148628:
    {
        returnValue = F("Hohndorfer Weg");
        break;
    }
    case 148629:
    {
        returnValue = F("Hohnenberg");
        break;
    }
    case 148630:
    {
        returnValue = F("Hohnenweg");
        break;
    }
    case 148631:
    {
        returnValue = F("Hohner Berg");
        break;
    }
    case 148632:
    {
        returnValue = F("Hohner Chaussee");
        break;
    }
    case 148633:
    {
        returnValue = F("Hohner Damm");
        break;
    }
    case 148634:
    {
        returnValue = F("Hohner Str.");
        break;
    }
    case 148635:
    {
        returnValue = F("Hohner Weg");
        break;
    }
    case 148636:
    {
        returnValue = F("Hohnerberg");
        break;
    }
    case 148637:
    {
        returnValue = F("Hohneroder Str.");
        break;
    }
    case 148638:
    {
        returnValue = F("Hohnerstr.");
        break;
    }
    case 148639:
    {
        returnValue = F("Hohnertstr.");
        break;
    }
    case 148640:
    {
        returnValue = F("Hohnertsweg");
        break;
    }
    case 148641:
    {
        returnValue = F("Hohnerweg");
        break;
    }
    case 148642:
    {
        returnValue = F("Hohnfeldstr.");
        break;
    }
    case 148643:
    {
        returnValue = F("Hohnholz-Weg");
        break;
    }
    case 148644:
    {
        returnValue = F("Hohnholzstr.");
        break;
    }
    case 148645:
    {
        returnValue = F("Hohnhorst-Park");
        break;
    }
    case 148646:
    {
        returnValue = F("Hohnhorster Str.");
        break;
    }
    case 148647:
    {
        returnValue = F("Hohnhorster Weg");
        break;
    }
    case 148648:
    {
        returnValue = F("Hohnhorstweg");
        break;
    }
    case 148649:
    {
        returnValue = F("Hohnhäuser Str.");
        break;
    }
    case 148650:
    {
        returnValue = F("Hohnrodts Hof");
        break;
    }
    case 148651:
    {
        returnValue = F("Hohnsdorfer Str.");
        break;
    }
    case 148652:
    {
        returnValue = F("Hohnsdorfer Weg");
        break;
    }
    case 148653:
    {
        returnValue = F("Hohnser Str.");
        break;
    }
    case 148654:
    {
        returnValue = F("Hohnsgasse");
        break;
    }
    case 148655:
    {
        returnValue = F("Hohnshecker Weg");
        break;
    }
    case 148656:
    {
        returnValue = F("Hohnsiefen");
        break;
    }
    case 148657:
    {
        returnValue = F("Hohnslebener Str.");
        break;
    }
    case 148658:
    {
        returnValue = F("Hohnstedter Weg");
        break;
    }
    case 148659:
    {
        returnValue = F("Hohnsteiner Str.");
        break;
    }
    case 148660:
    {
        returnValue = F("Hohnsteiner Weg");
        break;
    }
    case 148661:
    {
        returnValue = F("Hohnstorfer Str.");
        break;
    }
    case 148662:
    {
        returnValue = F("Hohnstädter Str.");
        break;
    }
    case 148663:
    {
        returnValue = F("Hohnweg");
        break;
    }
    case 148664:
    {
        returnValue = F("Hohnweiler Str.");
        break;
    }
    case 148665:
    {
        returnValue = F("Hohofen");
        break;
    }
    case 148666:
    {
        returnValue = F("Hohofener Str.");
        break;
    }
    case 148667:
    {
        returnValue = F("Hohoffstr.");
        break;
    }
    case 148668:
    {
        returnValue = F("Hoholt-Pilgrim-Str.");
        break;
    }
    case 148669:
    {
        returnValue = F("Hoholtinger Str.");
        break;
    }
    case 148670:
    {
        returnValue = F("Hohr");
        break;
    }
    case 148671:
    {
        returnValue = F("Hohrain");
        break;
    }
    case 148672:
    {
        returnValue = F("Hohrainli");
        break;
    }
    case 148673:
    {
        returnValue = F("Hohrainstr.");
        break;
    }
    case 148674:
    {
        returnValue = F("Hohrainweg");
        break;
    }
    case 148675:
    {
        returnValue = F("Hohreiner Waldweg");
        break;
    }
    case 148676:
    {
        returnValue = F("Hohrenweg");
        break;
    }
    case 148677:
    {
        returnValue = F("Hohreuschstr.");
        break;
    }
    case 148678:
    {
        returnValue = F("Hohreuteweg");
        break;
    }
    case 148679:
    {
        returnValue = F("Hohritt");
        break;
    }
    case 148680:
    {
        returnValue = F("Hohrißweg");
        break;
    }
    case 148681:
    {
        returnValue = F("Hohrotbuckelweg");
        break;
    }
    case 148682:
    {
        returnValue = F("Hohrotstr.");
        break;
    }
    case 148683:
    {
        returnValue = F("Hohrott");
        break;
    }
    case 148684:
    {
        returnValue = F("Hohrottweg");
        break;
    }
    case 148685:
    {
        returnValue = F("Hohrotweg");
        break;
    }
    case 148686:
    {
        returnValue = F("Hohrüdtweg");
        break;
    }
    case 148687:
    {
        returnValue = F("Hohrütte");
        break;
    }
    case 148688:
    {
        returnValue = F("Hohrüttenweg");
        break;
    }
    case 148689:
    {
        returnValue = F("Hohrüttstr.");
        break;
    }
    case 148690:
    {
        returnValue = F("Hohschlader Weg");
        break;
    }
    case 148691:
    {
        returnValue = F("Hohschön");
        break;
    }
    case 148692:
    {
        returnValue = F("Hohspirnweg");
        break;
    }
    case 148693:
    {
        returnValue = F("Hohstadt");
        break;
    }
    case 148694:
    {
        returnValue = F("Hohstadtweg");
        break;
    }
    case 148695:
    {
        returnValue = F("Hohstattstr.");
        break;
    }
    case 148696:
    {
        returnValue = F("Hohsteinweg");
        break;
    }
    case 148697:
    {
        returnValue = F("Hohstettgasse");
        break;
    }
    case 148698:
    {
        returnValue = F("Hohstichweg");
        break;
    }
    case 148699:
    {
        returnValue = F("Hohstr.");
        break;
    }
    case 148700:
    {
        returnValue = F("Hohtannweg");
        break;
    }
    case 148701:
    {
        returnValue = F("Hohwachtstr.");
        break;
    }
    case 148702:
    {
        returnValue = F("Hohwachtweg");
        break;
    }
    case 148703:
    {
        returnValue = F("Hohwaldstr.");
        break;
    }
    case 148704:
    {
        returnValue = F("Hohwaldweg");
        break;
    }
    case 148705:
    {
        returnValue = F("Hohwanner Str.");
        break;
    }
    case 148706:
    {
        returnValue = F("Hohwardstr.");
        break;
    }
    case 148707:
    {
        returnValue = F("Hohwart-Strässle");
        break;
    }
    case 148708:
    {
        returnValue = F("Hohwartweg");
        break;
    }
    case 148709:
    {
        returnValue = F("Hohweg");
        break;
    }
    case 148710:
    {
        returnValue = F("Hohwehraweg");
        break;
    }
    case 148711:
    {
        returnValue = F("Hohweiher");
        break;
    }
    case 148712:
    {
        returnValue = F("Hohweiherstr.");
        break;
    }
    case 148713:
    {
        returnValue = F("Hohwies");
        break;
    }
    case 148714:
    {
        returnValue = F("Hohwiesen");
        break;
    }
    case 148715:
    {
        returnValue = F("Hohwiesenbrücke");
        break;
    }
    case 148716:
    {
        returnValue = F("Hohwiesenstr.");
        break;
    }
    case 148717:
    {
        returnValue = F("Hohwiesenweg");
        break;
    }
    case 148718:
    {
        returnValue = F("Hohwildsbergweg");
        break;
    }
    case 148719:
    {
        returnValue = F("Hohzinkenweg");
        break;
    }
    case 148720:
    {
        returnValue = F("Hohörst");
        break;
    }
    case 148721:
    {
        returnValue = F("Hoibacher Str.");
        break;
    }
    case 148722:
    {
        returnValue = F("Hoibeken");
        break;
    }
    case 148723:
    {
        returnValue = F("Hoiersdorfer Str.");
        break;
    }
    case 148724:
    {
        returnValue = F("Hoikenhagen");
        break;
    }
    case 148725:
    {
        returnValue = F("Hoinger Weg");
        break;
    }
    case 148726:
    {
        returnValue = F("Hoinkenbostel");
        break;
    }
    case 148727:
    {
        returnValue = F("Hoinker Str.");
        break;
    }
    case 148728:
    {
        returnValue = F("Hoinkhauser Mühlenweg");
        break;
    }
    case 148729:
    {
        returnValue = F("Hoinkhauser Str.");
        break;
    }
    case 148730:
    {
        returnValue = F("Hoinzenweg");
        break;
    }
    case 148731:
    {
        returnValue = F("Hoisbütteler Dorfstr.");
        break;
    }
    case 148732:
    {
        returnValue = F("Hoischeweg");
        break;
    }
    case 148733:
    {
        returnValue = F("Hoisdorfer Landstr.");
        break;
    }
    case 148734:
    {
        returnValue = F("Hoisdorfer Weg");
        break;
    }
    case 148735:
    {
        returnValue = F("Hoistaig");
        break;
    }
    case 148736:
    {
        returnValue = F("Hoitlinger Str.");
        break;
    }
    case 148737:
    {
        returnValue = F("Hojen");
        break;
    }
    case 148738:
    {
        returnValue = F("Hokelsumer Str.");
        break;
    }
    case 148739:
    {
        returnValue = F("Hoken");
        break;
    }
    case 148740:
    {
        returnValue = F("Hokenbarg");
        break;
    }
    case 148741:
    {
        returnValue = F("Hoklerkreuzweg");
        break;
    }
    case 148742:
    {
        returnValue = F("Holander Allee");
        break;
    }
    case 148743:
    {
        returnValue = F("Holbacher Dorfstr.");
        break;
    }
    case 148744:
    {
        returnValue = F("Holbachweg");
        break;
    }
    case 148745:
    {
        returnValue = F("Holbaiergasse");
        break;
    }
    case 148746:
    {
        returnValue = F("Holbecke");
        break;
    }
    case 148747:
    {
        returnValue = F("Holbeingasse");
        break;
    }
    case 148748:
    {
        returnValue = F("Holbeinplatz");
        break;
    }
    case 148749:
    {
        returnValue = F("Holbeinring");
        break;
    }
    case 148750:
    {
        returnValue = F("Holbeinstr.");
        break;
    }
    case 148751:
    {
        returnValue = F("Holbeinweg");
        break;
    }
    case 148752:
    {
        returnValue = F("Holberg");
        break;
    }
    case 148753:
    {
        returnValue = F("Holbinsenstr.");
        break;
    }
    case 148754:
    {
        returnValue = F("Holbornerhof");
        break;
    }
    case 148755:
    {
        returnValue = F("Holbornstr.");
        break;
    }
    case 148756:
    {
        returnValue = F("Holbratshofer Str.");
        break;
    }
    case 148757:
    {
        returnValue = F("Holbusheide");
        break;
    }
    case 148758:
    {
        returnValue = F("Holchen");
        break;
    }
    case 148759:
    {
        returnValue = F("Holchenstr.");
        break;
    }
    case 148760:
    {
        returnValue = F("Holdenburgstr.");
        break;
    }
    case 148761:
    {
        returnValue = F("Holdenrain");
        break;
    }
    case 148762:
    {
        returnValue = F("Holdenriedweg");
        break;
    }
    case 148763:
    {
        returnValue = F("Holdenstedter Str.");
        break;
    }
    case 148764:
    {
        returnValue = F("Holdenstedter Weg");
        break;
    }
    case 148765:
    {
        returnValue = F("Holder");
        break;
    }
    case 148766:
    {
        returnValue = F("Holderackerweg");
        break;
    }
    case 148767:
    {
        returnValue = F("Holderbergweg");
        break;
    }
    case 148768:
    {
        returnValue = F("Holderbildweg");
        break;
    }
    case 148769:
    {
        returnValue = F("Holderbreite");
        break;
    }
    case 148770:
    {
        returnValue = F("Holderbronnenweg");
        break;
    }
    case 148771:
    {
        returnValue = F("Holderbrunnengasse");
        break;
    }
    case 148772:
    {
        returnValue = F("Holderbrunnenweg");
        break;
    }
    case 148773:
    {
        returnValue = F("Holderburg");
        break;
    }
    case 148774:
    {
        returnValue = F("Holderbusch");
        break;
    }
    case 148775:
    {
        returnValue = F("Holderbuschweg");
        break;
    }
    case 148776:
    {
        returnValue = F("Holderbühlweg");
        break;
    }
    case 148777:
    {
        returnValue = F("Holderbüschle");
        break;
    }
    case 148778:
    {
        returnValue = F("Holdereggenpark");
        break;
    }
    case 148779:
    {
        returnValue = F("Holdereggenstr.");
        break;
    }
    case 148780:
    {
        returnValue = F("Holderfleckenweg");
        break;
    }
    case 148781:
    {
        returnValue = F("Holdergarten");
        break;
    }
    case 148782:
    {
        returnValue = F("Holdergasse");
        break;
    }
    case 148783:
    {
        returnValue = F("Holdergrabenweg");
        break;
    }
    case 148784:
    {
        returnValue = F("Holdergrabweg");
        break;
    }
    case 148785:
    {
        returnValue = F("Holdergrund");
        break;
    }
    case 148786:
    {
        returnValue = F("Holdergärtenweg");
        break;
    }
    case 148787:
    {
        returnValue = F("Holderhecke");
        break;
    }
    case 148788:
    {
        returnValue = F("Holderklinge");
        break;
    }
    case 148789:
    {
        returnValue = F("Holderklingenweg");
        break;
    }
    case 148790:
    {
        returnValue = F("Holdermahdweg");
        break;
    }
    case 148791:
    {
        returnValue = F("Holderrainweg");
        break;
    }
    case 148792:
    {
        returnValue = F("Holderring");
        break;
    }
    case 148793:
    {
        returnValue = F("Holdersbach");
        break;
    }
    case 148794:
    {
        returnValue = F("Holdersbachstr.");
        break;
    }
    case 148795:
    {
        returnValue = F("Holdersbündt");
        break;
    }
    case 148796:
    {
        returnValue = F("Holderstaudenstr.");
        break;
    }
    case 148797:
    {
        returnValue = F("Holdersteig");
        break;
    }
    case 148798:
    {
        returnValue = F("Holdersteige");
        break;
    }
    case 148799:
    {
        returnValue = F("Holderstellenweg");
        break;
    }
    case 148800:
    {
        returnValue = F("Holderstr.");
        break;
    }
    case 148801:
    {
        returnValue = F("Holderstrauch");
        break;
    }
    case 148802:
    {
        returnValue = F("Holderstrauchweg");
        break;
    }
    case 148803:
    {
        returnValue = F("Holderweg");
        break;
    }
    case 148804:
    {
        returnValue = F("Holderäcker");
        break;
    }
    case 148805:
    {
        returnValue = F("Holderäckerstr.");
        break;
    }
    case 148806:
    {
        returnValue = F("Holderäckerweg");
        break;
    }
    case 148807:
    {
        returnValue = F("Holdeweg");
        break;
    }
    case 148808:
    {
        returnValue = F("Holdinghausstr.");
        break;
    }
    case 148809:
    {
        returnValue = F("Holdmeckeweg");
        break;
    }
    case 148810:
    {
        returnValue = F("Holdorfer Chaussee");
        break;
    }
    case 148811:
    {
        returnValue = F("Holdorfer Esch");
        break;
    }
    case 148812:
    {
        returnValue = F("Holdorfer Str.");
        break;
    }
    case 148813:
    {
        returnValue = F("Holdschlagweg");
        break;
    }
    case 148814:
    {
        returnValue = F("Holdweg");
        break;
    }
    case 148815:
    {
        returnValue = F("Holeburgweg");
        break;
    }
    case 148816:
    {
        returnValue = F("Holebyweg");
        break;
    }
    case 148817:
    {
        returnValue = F("Holekamps Weg");
        break;
    }
    case 148818:
    {
        returnValue = F("Holenberger Str.");
        break;
    }
    case 148819:
    {
        returnValue = F("Holenfeld");
        break;
    }
    case 148820:
    {
        returnValue = F("Holenhorster Weg");
        break;
    }
    case 148821:
    {
        returnValue = F("Holensiepen");
        break;
    }
    case 148822:
    {
        returnValue = F("Holenweg");
        break;
    }
    case 148823:
    {
        returnValue = F("Holer Moor");
        break;
    }
    case 148824:
    {
        returnValue = F("Holer Stein Weg");
        break;
    }
    case 148825:
    {
        returnValue = F("Holerstr.");
        break;
    }
    case 148826:
    {
        returnValue = F("Holeweg");
        break;
    }
    case 148827:
    {
        returnValue = F("Holfelder Platz");
        break;
    }
    case 148828:
    {
        returnValue = F("Holgenbach");
        break;
    }
    case 148829:
    {
        returnValue = F("Holgenwiesstr.");
        break;
    }
    case 148830:
    {
        returnValue = F("Holger-Crafoord-Str.");
        break;
    }
    case 148831:
    {
        returnValue = F("Holger-Schmezer-Str.");
        break;
    }
    case 148832:
    {
        returnValue = F("Holgersteig");
        break;
    }
    case 148833:
    {
        returnValue = F("Holgert");
        break;
    }
    case 148834:
    {
        returnValue = F("Holgertsweg");
        break;
    }
    case 148835:
    {
        returnValue = F("Holhöfen");
        break;
    }
    case 148836:
    {
        returnValue = F("Holidayparkstr.");
        break;
    }
    case 148837:
    {
        returnValue = F("Holige Grund");
        break;
    }
    case 148838:
    {
        returnValue = F("Holiger Weg");
        break;
    }
    case 148839:
    {
        returnValue = F("Holl");
        break;
    }
    case 148840:
    {
        returnValue = F("Holl den Boom");
        break;
    }
    case 148841:
    {
        returnValue = F("Hollach");
        break;
    }
    case 148842:
    {
        returnValue = F("Hollacker");
        break;
    }
    case 148843:
    {
        returnValue = F("Hollagasse");
        break;
    }
    case 148844:
    {
        returnValue = F("Hollager Str.");
        break;
    }
    case 148845:
    {
        returnValue = F("Holland");
        break;
    }
    case 148846:
    {
        returnValue = F("Holland-Merten-Str.");
        break;
    }
    case 148847:
    {
        returnValue = F("Hollandbrink");
        break;
    }
    case 148848:
    {
        returnValue = F("Hollandende");
        break;
    }
    case 148849:
    {
        returnValue = F("Hollandsmühle");
        break;
    }
    case 148850:
    {
        returnValue = F("Hollandstr.");
        break;
    }
    case 148851:
    {
        returnValue = F("Hollandsweg");
        break;
    }
    case 148852:
    {
        returnValue = F("Hollandtweg");
        break;
    }
    case 148853:
    {
        returnValue = F("Hollandweg");
        break;
    }
    case 148854:
    {
        returnValue = F("Hollandwehl");
        break;
    }
    case 148855:
    {
        returnValue = F("Hollbergweg");
        break;
    }
    case 148856:
    {
        returnValue = F("Hollboom");
        break;
    }
    case 148857:
    {
        returnValue = F("Hollbreek");
        break;
    }
    case 148858:
    {
        returnValue = F("Hollbruchweg");
        break;
    }
    case 148859:
    {
        returnValue = F("Hollbrunner Allee");
        break;
    }
    case 148860:
    {
        returnValue = F("Hollbüllhuus");
        break;
    }
    case 148861:
    {
        returnValue = F("Holle");
        break;
    }
    case 148862:
    {
        returnValue = F("Holle Straat");
        break;
    }
    case 148863:
    {
        returnValue = F("Hollebeck");
        break;
    }
    case 148864:
    {
        returnValue = F("Hollebusch");
        break;
    }
    case 148865:
    {
        returnValue = F("Holledau");
        break;
    }
    case 148866:
    {
        returnValue = F("Holledauer Ring");
        break;
    }
    case 148867:
    {
        returnValue = F("Holledauer Weg");
        break;
    }
    case 148868:
    {
        returnValue = F("Holledaustr.");
        break;
    }
    case 148869:
    {
        returnValue = F("Hollefeldstr.");
        break;
    }
    case 148870:
    {
        returnValue = F("Hollehitter Str.");
        break;
    }
    case 148871:
    {
        returnValue = F("Hollekuhl");
        break;
    }
    case 148872:
    {
        returnValue = F("Hollelslohe");
        break;
    }
    case 148873:
    {
        returnValue = F("Hollemannsweg");
        break;
    }
    case 148874:
    {
        returnValue = F("Hollemoorweg");
        break;
    }
    case 148875:
    {
        returnValue = F("Hollen");
        break;
    }
    case 148876:
    {
        returnValue = F("Hollenbach");
        break;
    }
    case 148877:
    {
        returnValue = F("Hollenbacher Steige");
        break;
    }
    case 148878:
    {
        returnValue = F("Hollenbacher Str.");
        break;
    }
    case 148879:
    {
        returnValue = F("Hollenbachstr.");
        break;
    }
    case 148880:
    {
        returnValue = F("Hollenbeck");
        break;
    }
    case 148881:
    {
        returnValue = F("Hollenbecker Str.");
        break;
    }
    case 148882:
    {
        returnValue = F("Hollenbek");
        break;
    }
    case 148883:
    {
        returnValue = F("Hollenbek - Mölln");
        break;
    }
    case 148884:
    {
        returnValue = F("Hollenbeker Weg");
        break;
    }
    case 148885:
    {
        returnValue = F("Hollenberg");
        break;
    }
    case 148886:
    {
        returnValue = F("Hollenbergs Hügel");
        break;
    }
    case 148887:
    {
        returnValue = F("Hollenbergstr.");
        break;
    }
    case 148888:
    {
        returnValue = F("Hollenbocker Str.");
        break;
    }
    case 148889:
    {
        returnValue = F("Hollenbrook");
        break;
    }
    case 148890:
    {
        returnValue = F("Hollenbrunnenweg");
        break;
    }
    case 148891:
    {
        returnValue = F("Hollenbuschweg");
        break;
    }
    case 148892:
    {
        returnValue = F("Hollendorfstr.");
        break;
    }
    case 148893:
    {
        returnValue = F("Hollendorfweg");
        break;
    }
    case 148894:
    {
        returnValue = F("Hollener Eheweg");
        break;
    }
    case 148895:
    {
        returnValue = F("Hollener Landstr.");
        break;
    }
    case 148896:
    {
        returnValue = F("Hollener Mühle");
        break;
    }
    case 148897:
    {
        returnValue = F("Hollener Str.");
        break;
    }
    case 148898:
    {
        returnValue = F("Hollener Weg");
        break;
    }
    case 148899:
    {
        returnValue = F("Hollenfeld");
        break;
    }
    case 148900:
    {
        returnValue = F("Hollengasse");
        break;
    }
    case 148901:
    {
        returnValue = F("Hollenhagen");
        break;
    }
    case 148902:
    {
        returnValue = F("Hollenhof");
        break;
    }
    case 148903:
    {
        returnValue = F("Hollenhofweg");
        break;
    }
    case 148904:
    {
        returnValue = F("Hollenhorst");
        break;
    }
    case 148905:
    {
        returnValue = F("Hollenhöhe");
        break;
    }
    case 148906:
    {
        returnValue = F("Hollenhörner Weg");
        break;
    }
    case 148907:
    {
        returnValue = F("Hollenkamp");
        break;
    }
    case 148908:
    {
        returnValue = F("Hollenmoor");
        break;
    }
    case 148909:
    {
        returnValue = F("Hollensiefenweg");
        break;
    }
    case 148910:
    {
        returnValue = F("Hollensteder Str.");
        break;
    }
    case 148911:
    {
        returnValue = F("Hollenstedter Str.");
        break;
    }
    case 148912:
    {
        returnValue = F("Hollenstedter Weg");
        break;
    }
    case 148913:
    {
        returnValue = F("Hollenstein");
        break;
    }
    case 148914:
    {
        returnValue = F("Hollensteiner Gang");
        break;
    }
    case 148915:
    {
        returnValue = F("Hollensteiner Weg");
        break;
    }
    case 148916:
    {
        returnValue = F("Hollenstr.");
        break;
    }
    case 148917:
    {
        returnValue = F("Hollenweg");
        break;
    }
    case 148918:
    {
        returnValue = F("Hollenworther Str.");
        break;
    }
    case 148919:
    {
        returnValue = F("Holler Pfad");
        break;
    }
    case 148920:
    {
        returnValue = F("Holler Str.");
        break;
    }
    case 148921:
    {
        returnValue = F("Holler Weg");
        break;
    }
    case 148922:
    {
        returnValue = F("Hollerather Weg");
        break;
    }
    case 148923:
    {
        returnValue = F("Hollerau");
        break;
    }
    case 148924:
    {
        returnValue = F("Hollerbach");
        break;
    }
    case 148925:
    {
        returnValue = F("Hollerbacher Str.");
        break;
    }
    case 148926:
    {
        returnValue = F("Hollerbachweg");
        break;
    }
    case 148927:
    {
        returnValue = F("Hollerberg");
        break;
    }
    case 148928:
    {
        returnValue = F("Hollerbergstr.");
        break;
    }
    case 148929:
    {
        returnValue = F("Hollerblick");
        break;
    }
    case 148930:
    {
        returnValue = F("Hollerborn");
        break;
    }
    case 148931:
    {
        returnValue = F("Hollerbusch");
        break;
    }
    case 148932:
    {
        returnValue = F("Hollerbuschweg");
        break;
    }
    case 148933:
    {
        returnValue = F("Hollerdeich");
        break;
    }
    case 148934:
    {
        returnValue = F("Hollerdellstr.");
        break;
    }
    case 148935:
    {
        returnValue = F("Hollerecke");
        break;
    }
    case 148936:
    {
        returnValue = F("Hollerer Str.");
        break;
    }
    case 148937:
    {
        returnValue = F("Hollergasse");
        break;
    }
    case 148938:
    {
        returnValue = F("Hollergewann");
        break;
    }
    case 148939:
    {
        returnValue = F("Hollergreppenstr.");
        break;
    }
    case 148940:
    {
        returnValue = F("Hollergrippe");
        break;
    }
    case 148941:
    {
        returnValue = F("Hollerhecke");
        break;
    }
    case 148942:
    {
        returnValue = F("Hollerithstr.");
        break;
    }
    case 148943:
    {
        returnValue = F("Hollermühler Weg");
        break;
    }
    case 148944:
    {
        returnValue = F("Hollernriede");
        break;
    }
    case 148945:
    {
        returnValue = F("Hollernstr.");
        break;
    }
    case 148946:
    {
        returnValue = F("Hollernweg");
        break;
    }
    case 148947:
    {
        returnValue = F("Hollerpfad");
        break;
    }
    case 148948:
    {
        returnValue = F("Hollersacker");
        break;
    }
    case 148949:
    {
        returnValue = F("Hollersberg");
        break;
    }
    case 148950:
    {
        returnValue = F("Hollersborn");
        break;
    }
    case 148951:
    {
        returnValue = F("Hollersgraben");
        break;
    }
    case 148952:
    {
        returnValue = F("Hollerstaude");
        break;
    }
    case 148953:
    {
        returnValue = F("Hollerstauden");
        break;
    }
    case 148954:
    {
        returnValue = F("Hollerstaudenweg");
        break;
    }
    case 148955:
    {
        returnValue = F("Hollerstettener Str.");
        break;
    }
    case 148956:
    {
        returnValue = F("Hollerstr.");
        break;
    }
    case 148957:
    {
        returnValue = F("Hollerstrauch");
        break;
    }
    case 148958:
    {
        returnValue = F("Hollerstrauchweg");
        break;
    }
    case 148959:
    {
        returnValue = F("Hollerstück");
        break;
    }
    case 148960:
    {
        returnValue = F("Hollertau");
        break;
    }
    case 148961:
    {
        returnValue = F("Hollertszug");
        break;
    }
    case 148962:
    {
        returnValue = F("Hollerweg");
        break;
    }
    case 148963:
    {
        returnValue = F("Hollerwettern");
        break;
    }
    case 148964:
    {
        returnValue = F("Hollerwiesenweg");
        break;
    }
    case 148965:
    {
        returnValue = F("Hollesandstr.");
        break;
    }
    case 148966:
    {
        returnValue = F("Hollesbitze");
        break;
    }
    case 148967:
    {
        returnValue = F("Hollesch");
        break;
    }
    case 148968:
    {
        returnValue = F("Hollesenpark");
        break;
    }
    case 148969:
    {
        returnValue = F("Hollesenstr.");
        break;
    }
    case 148970:
    {
        returnValue = F("Hollesser Steg");
        break;
    }
    case 148971:
    {
        returnValue = F("Hollestr.");
        break;
    }
    case 148972:
    {
        returnValue = F("Hollestücker");
        break;
    }
    case 148973:
    {
        returnValue = F("Hollesweg");
        break;
    }
    case 148974:
    {
        returnValue = F("Hollfelder Str.");
        break;
    }
    case 148975:
    {
        returnValue = F("Hollfelder Weg");
        break;
    }
    case 148976:
    {
        returnValue = F("Hollgasse");
        break;
    }
    case 148977:
    {
        returnValue = F("Hollgraben");
        break;
    }
    case 148978:
    {
        returnValue = F("Hollhorst");
        break;
    }
    case 148979:
    {
        returnValue = F("Hollhuse/Hohenkirchen");
        break;
    }
    case 148980:
    {
        returnValue = F("Hollich");
        break;
    }
    case 148981:
    {
        returnValue = F("Hollicher Str.");
        break;
    }
    case 148982:
    {
        returnValue = F("Hollicher Weg");
        break;
    }
    case 148983:
    {
        returnValue = F("Hollihof");
        break;
    }
    case 148984:
    {
        returnValue = F("Hollinde");
        break;
    }
    case 148985:
    {
        returnValue = F("Hollinder Weg");
        break;
    }
    case 148986:
    {
        returnValue = F("Holling");
        break;
    }
    case 148987:
    {
        returnValue = F("Hollingen");
        break;
    }
    case 148988:
    {
        returnValue = F("Hollinger Str.");
        break;
    }
    case 148989:
    {
        returnValue = F("Hollinghauser Str.");
        break;
    }
    case 148990:
    {
        returnValue = F("Hollingsbrücke");
        break;
    }
    case 148991:
    {
        returnValue = F("Hollingstedter Str.");
        break;
    }
    case 148992:
    {
        returnValue = F("Hollingstr.");
        break;
    }
    case 148993:
    {
        returnValue = F("Hollit");
        break;
    }
    case 148994:
    {
        returnValue = F("Holljehof");
        break;
    }
    case 148995:
    {
        returnValue = F("Holljestr.");
        break;
    }
    case 148996:
    {
        returnValue = F("Hollkotten");
        break;
    }
    case 148997:
    {
        returnValue = F("Hollmanns Weg");
        break;
    }
    case 148998:
    {
        returnValue = F("Hollmannstr.");
        break;
    }
    case 148999:
    {
        returnValue = F("Hollmannsweg");
        break;
    }
    case 149000:
    {
        returnValue = F("Hollmecker Weg");
        break;
    }
    case 149001:
    {
        returnValue = F("Hollmuthstr.");
        break;
    }
    case 149002:
    {
        returnValue = F("Hollmuthtunnel");
        break;
    }
    case 149003:
    {
        returnValue = F("Hollmühle");
        break;
    }
    case 149004:
    {
        returnValue = F("Hollnicher Str.");
        break;
    }
    case 149005:
    {
        returnValue = F("Hollrieder Str.");
        break;
    }
    case 149006:
    {
        returnValue = F("Hollrithermeerweg");
        break;
    }
    case 149007:
    {
        returnValue = F("Hollsandsiedlung");
        break;
    }
    case 149008:
    {
        returnValue = F("Hollsandweg");
        break;
    }
    case 149009:
    {
        returnValue = F("Hollstadter Str.");
        break;
    }
    case 149010:
    {
        returnValue = F("Hollsteitzer Str.");
        break;
    }
    case 149011:
    {
        returnValue = F("Hollstr.");
        break;
    }
    case 149012:
    {
        returnValue = F("Hollstädter Weg");
        break;
    }
    case 149013:
    {
        returnValue = F("Hollwarder Wischweg");
        break;
    }
    case 149014:
    {
        returnValue = F("Hollweckstr.");
        break;
    }
    case 149015:
    {
        returnValue = F("Hollwedelstr.");
        break;
    }
    case 149016:
    {
        returnValue = F("Hollweder Str.");
        break;
    }
    case 149017:
    {
        returnValue = F("Hollweg");
        break;
    }
    case 149018:
    {
        returnValue = F("Hollwegerfelder Str.");
        break;
    }
    case 149019:
    {
        returnValue = F("Hollwert");
        break;
    }
    case 149020:
    {
        returnValue = F("Hollwies");
        break;
    }
    case 149021:
    {
        returnValue = F("Hollwieser Str.");
        break;
    }
    case 149022:
    {
        returnValue = F("Hollwinkel");
        break;
    }
    case 149023:
    {
        returnValue = F("Hollwis");
        break;
    }
    case 149024:
    {
        returnValue = F("Holländer");
        break;
    }
    case 149025:
    {
        returnValue = F("Holländer Baracken");
        break;
    }
    case 149026:
    {
        returnValue = F("Holländer Gang");
        break;
    }
    case 149027:
    {
        returnValue = F("Holländer Str.");
        break;
    }
    case 149028:
    {
        returnValue = F("Holländer Weg");
        break;
    }
    case 149029:
    {
        returnValue = F("Holländer Winkel");
        break;
    }
    case 149030:
    {
        returnValue = F("Holländer-Born-Schneise");
        break;
    }
    case 149031:
    {
        returnValue = F("Holländerdeich");
        break;
    }
    case 149032:
    {
        returnValue = F("Holländerei");
        break;
    }
    case 149033:
    {
        returnValue = F("Holländerey");
        break;
    }
    case 149034:
    {
        returnValue = F("Holländergang");
        break;
    }
    case 149035:
    {
        returnValue = F("Holländergasse");
        break;
    }
    case 149036:
    {
        returnValue = F("Holländergrundstr.");
        break;
    }
    case 149037:
    {
        returnValue = F("Holländergäßle");
        break;
    }
    case 149038:
    {
        returnValue = F("Holländerhof");
        break;
    }
    case 149039:
    {
        returnValue = F("Holländerplanie");
        break;
    }
    case 149040:
    {
        returnValue = F("Holländerschneise");
        break;
    }
    case 149041:
    {
        returnValue = F("Holländersteige");
        break;
    }
    case 149042:
    {
        returnValue = F("Holländerstr.");
        break;
    }
    case 149043:
    {
        returnValue = F("Holländerweg");
        break;
    }
    case 149044:
    {
        returnValue = F("Holländische Str.");
        break;
    }
    case 149045:
    {
        returnValue = F("Holländische Twiete");
        break;
    }
    case 149046:
    {
        returnValue = F("Holländischer Ring");
        break;
    }
    case 149047:
    {
        returnValue = F("Holm");
        break;
    }
    case 149048:
    {
        returnValue = F("Holmbach");
        break;
    }
    case 149049:
    {
        returnValue = F("Holmbekskamp");
        break;
    }
    case 149050:
    {
        returnValue = F("Holmberg");
        break;
    }
    case 149051:
    {
        returnValue = F("Holmblick");
        break;
    }
    case 149052:
    {
        returnValue = F("Holmbrook");
        break;
    }
    case 149053:
    {
        returnValue = F("Holme");
        break;
    }
    case 149054:
    {
        returnValue = F("Holmecker Weg");
        break;
    }
    case 149055:
    {
        returnValue = F("Holmer Berg");
        break;
    }
    case 149056:
    {
        returnValue = F("Holmer Feld");
        break;
    }
    case 149057:
    {
        returnValue = F("Holmer Grenzweg");
        break;
    }
    case 149058:
    {
        returnValue = F("Holmer Maate");
        break;
    }
    case 149059:
    {
        returnValue = F("Holmer Noorweg");
        break;
    }
    case 149060:
    {
        returnValue = F("Holmer Ring");
        break;
    }
    case 149061:
    {
        returnValue = F("Holmer Str.");
        break;
    }
    case 149062:
    {
        returnValue = F("Holmer Tor");
        break;
    }
    case 149063:
    {
        returnValue = F("Holmer Weg");
        break;
    }
    case 149064:
    {
        returnValue = F("Holmerdamm");
        break;
    }
    case 149065:
    {
        returnValue = F("Holmerdieck");
        break;
    }
    case 149066:
    {
        returnValue = F("Holmerfährweg");
        break;
    }
    case 149067:
    {
        returnValue = F("Holmers Kamp");
        break;
    }
    case 149068:
    {
        returnValue = F("Holmertorstr.");
        break;
    }
    case 149069:
    {
        returnValue = F("Holmichstr.");
        break;
    }
    case 149070:
    {
        returnValue = F("Holminger Str.");
        break;
    }
    case 149071:
    {
        returnValue = F("Holmkamp");
        break;
    }
    case 149072:
    {
        returnValue = F("Holmker Brücke");
        break;
    }
    case 149073:
    {
        returnValue = F("Holmkjer");
        break;
    }
    case 149074:
    {
        returnValue = F("Holmkjär");
        break;
    }
    case 149075:
    {
        returnValue = F("Holmlück");
        break;
    }
    case 149076:
    {
        returnValue = F("Holmmoortwiete");
        break;
    }
    case 149077:
    {
        returnValue = F("Holmredder");
        break;
    }
    case 149078:
    {
        returnValue = F("Holmsberg");
        break;
    }
    case 149079:
    {
        returnValue = F("Holmstr.");
        break;
    }
    case 149080:
    {
        returnValue = F("Holmweg");
        break;
    }
    case 149081:
    {
        returnValue = F("Holnburgerweg");
        break;
    }
    case 149082:
    {
        returnValue = F("Holnisser Landstr.");
        break;
    }
    case 149083:
    {
        returnValue = F("Holnisser Weg");
        break;
    }
    case 149084:
    {
        returnValue = F("Holnstainerstr.");
        break;
    }
    case 149085:
    {
        returnValue = F("Holnsteinallee");
        break;
    }
    case 149086:
    {
        returnValue = F("Holnsteiner Str.");
        break;
    }
    case 149087:
    {
        returnValue = F("Holnsteiner Weg");
        break;
    }
    case 149088:
    {
        returnValue = F("Holnsteinstr.");
        break;
    }
    case 149089:
    {
        returnValue = F("Holnsteinweg");
        break;
    }
    case 149090:
    {
        returnValue = F("Holnweg");
        break;
    }
    case 149091:
    {
        returnValue = F("Holocaust-Denkmal");
        break;
    }
    case 149092:
    {
        returnValue = F("Holocher Gasse");
        break;
    }
    case 149093:
    {
        returnValue = F("Holonweg");
        break;
    }
    case 149094:
    {
        returnValue = F("Holpener Kirchweg");
        break;
    }
    case 149095:
    {
        returnValue = F("Holpener Str.");
        break;
    }
    case 149096:
    {
        returnValue = F("Holperbachweg");
        break;
    }
    case 149097:
    {
        returnValue = F("Holperdorp");
        break;
    }
    case 149098:
    {
        returnValue = F("Holperdorper Str.");
        break;
    }
    case 149099:
    {
        returnValue = F("Holpergrund");
        break;
    }
    case 149100:
    {
        returnValue = F("Holperweg");
        break;
    }
    case 149101:
    {
        returnValue = F("Holpuster Weg");
        break;
    }
    case 149102:
    {
        returnValue = F("Holsatenallee");
        break;
    }
    case 149103:
    {
        returnValue = F("Holsatenring");
        break;
    }
    case 149104:
    {
        returnValue = F("Holschbacher Str.");
        break;
    }
    case 149105:
    {
        returnValue = F("Holschendorfer Weg");
        break;
    }
    case 149106:
    {
        returnValue = F("Holschenkamp");
        break;
    }
    case 149107:
    {
        returnValue = F("Holschenstr.");
        break;
    }
    case 149108:
    {
        returnValue = F("Holschentor");
        break;
    }
    case 149109:
    {
        returnValue = F("Holschhausen");
        break;
    }
    case 149110:
    {
        returnValue = F("Holseige");
        break;
    }
    case 149111:
    {
        returnValue = F("Holsener Str.");
        break;
    }
    case 149112:
    {
        returnValue = F("Holser Flüthe");
        break;
    }
    case 149113:
    {
        returnValue = F("Holser Str.");
        break;
    }
    case 149114:
    {
        returnValue = F("Holserweg");
        break;
    }
    case 149115:
    {
        returnValue = F("Holsinger Str.");
        break;
    }
    case 149116:
    {
        returnValue = F("Holskenhok");
        break;
    }
    case 149117:
    {
        returnValue = F("Holsteiner Ring");
        break;
    }
    case 149118:
    {
        returnValue = F("Holsteiner Stieg");
        break;
    }
    case 149119:
    {
        returnValue = F("Holsteiner Str.");
        break;
    }
    case 149120:
    {
        returnValue = F("Holsteiner Weg");
        break;
    }
    case 149121:
    {
        returnValue = F("Holsteiner Weide");
        break;
    }
    case 149122:
    {
        returnValue = F("Holsteinerstr.");
        break;
    }
    case 149123:
    {
        returnValue = F("Holsteinerweg");
        break;
    }
    case 149124:
    {
        returnValue = F("Holsteinhang");
        break;
    }
    case 149125:
    {
        returnValue = F("Holsteinring");
        break;
    }
    case 149126:
    {
        returnValue = F("Holsteins Kamp");
        break;
    }
    case 149127:
    {
        returnValue = F("Holsteinsmühle");
        break;
    }
    case 149128:
    {
        returnValue = F("Holsteinstr.");
        break;
    }
    case 149129:
    {
        returnValue = F("Holsteinweg");
        break;
    }
    case 149130:
    {
        returnValue = F("Holsten");
        break;
    }
    case 149131:
    {
        returnValue = F("Holsten-Mündruper-Str.");
        break;
    }
    case 149132:
    {
        returnValue = F("Holstenberg");
        break;
    }
    case 149133:
    {
        returnValue = F("Holstendamm");
        break;
    }
    case 149134:
    {
        returnValue = F("Holstendorfer Weg");
        break;
    }
    case 149135:
    {
        returnValue = F("Holsteneck");
        break;
    }
    case 149136:
    {
        returnValue = F("Holstener Str.");
        break;
    }
    case 149137:
    {
        returnValue = F("Holstener Weg");
        break;
    }
    case 149138:
    {
        returnValue = F("Holstengang");
        break;
    }
    case 149139:
    {
        returnValue = F("Holstenhagen");
        break;
    }
    case 149140:
    {
        returnValue = F("Holstenhofweg");
        break;
    }
    case 149141:
    {
        returnValue = F("Holstenhöfen");
        break;
    }
    case 149142:
    {
        returnValue = F("Holstenhöfener Str.");
        break;
    }
    case 149143:
    {
        returnValue = F("Holstenkamp");
        break;
    }
    case 149144:
    {
        returnValue = F("Holstenläger");
        break;
    }
    case 149145:
    {
        returnValue = F("Holstenplatz");
        break;
    }
    case 149146:
    {
        returnValue = F("Holstenring");
        break;
    }
    case 149147:
    {
        returnValue = F("Holstenstieg");
        break;
    }
    case 149148:
    {
        returnValue = F("Holstenstr.");
        break;
    }
    case 149149:
    {
        returnValue = F("Holstentor");
        break;
    }
    case 149150:
    {
        returnValue = F("Holstentwiete");
        break;
    }
    case 149151:
    {
        returnValue = F("Holstenweg");
        break;
    }
    case 149152:
    {
        returnValue = F("Holster Str.");
        break;
    }
    case 149153:
    {
        returnValue = F("Holster-Mühle-Weg");
        break;
    }
    case 149154:
    {
        returnValue = F("Holsterfeldstr.");
        break;
    }
    case 149155:
    {
        returnValue = F("Holsterkampstr.");
        break;
    }
    case 149156:
    {
        returnValue = F("Holsterstr.");
        break;
    }
    case 149157:
    {
        returnValue = F("Holsthumer Str.");
        break;
    }
    case 149158:
    {
        returnValue = F("Holsthumerberg");
        break;
    }
    case 149159:
    {
        returnValue = F("Holst‘scher Hof");
        break;
    }
    case 149160:
    {
        returnValue = F("Holtacker");
        break;
    }
    case 149161:
    {
        returnValue = F("Holtackerweg");
        break;
    }
    case 149162:
    {
        returnValue = F("Holtanger Str.");
        break;
    }
    case 149163:
    {
        returnValue = F("Holtbeeke");
        break;
    }
    case 149164:
    {
        returnValue = F("Holtberg");
        break;
    }
    case 149165:
    {
        returnValue = F("Holtbredde");
        break;
    }
    case 149166:
    {
        returnValue = F("Holtbreede");
        break;
    }
    case 149167:
    {
        returnValue = F("Holtchaussee");
        break;
    }
    case 149168:
    {
        returnValue = F("Holtdamm");
        break;
    }
    case 149169:
    {
        returnValue = F("Holtdorfer Weg");
        break;
    }
    case 149170:
    {
        returnValue = F("Holte");
        break;
    }
    case 149171:
    {
        returnValue = F("Holte Weg");
        break;
    }
    case 149172:
    {
        returnValue = F("Holtebütteler Landstr.");
        break;
    }
    case 149173:
    {
        returnValue = F("Holteistr.");
        break;
    }
    case 149174:
    {
        returnValue = F("Holtemme-Radweg");
        break;
    }
    case 149175:
    {
        returnValue = F("Holtemmenweg");
        break;
    }
    case 149176:
    {
        returnValue = F("Holtemmestr.");
        break;
    }
    case 149177:
    {
        returnValue = F("Holten");
        break;
    }
    case 149178:
    {
        returnValue = F("Holtenauer Str.");
        break;
    }
    case 149179:
    {
        returnValue = F("Holtenbarg");
        break;
    }
    case 149180:
    {
        returnValue = F("Holtenborn");
        break;
    }
    case 149181:
    {
        returnValue = F("Holtenbrück");
        break;
    }
    case 149182:
    {
        returnValue = F("Holtendorfer Str.");
        break;
    }
    case 149183:
    {
        returnValue = F("Holtener Str.");
        break;
    }
    case 149184:
    {
        returnValue = F("Holtener Weg");
        break;
    }
    case 149185:
    {
        returnValue = F("Holtenser Landstr.");
        break;
    }
    case 149186:
    {
        returnValue = F("Holtenser Str.");
        break;
    }
    case 149187:
    {
        returnValue = F("Holtenser Weg");
        break;
    }
    case 149188:
    {
        returnValue = F("Holtenstr.");
        break;
    }
    case 149189:
    {
        returnValue = F("Holtenweg");
        break;
    }
    case 149190:
    {
        returnValue = F("Holter");
        break;
    }
    case 149191:
    {
        returnValue = F("Holter Allee");
        break;
    }
    case 149192:
    {
        returnValue = F("Holter Diek");
        break;
    }
    case 149193:
    {
        returnValue = F("Holter Feld");
        break;
    }
    case 149194:
    {
        returnValue = F("Holter Hauptstr.");
        break;
    }
    case 149195:
    {
        returnValue = F("Holter Kirchplatz");
        break;
    }
    case 149196:
    {
        returnValue = F("Holter Landstr.");
        break;
    }
    case 149197:
    {
        returnValue = F("Holter Str.");
        break;
    }
    case 149198:
    {
        returnValue = F("Holter Weg");
        break;
    }
    case 149199:
    {
        returnValue = F("Holterbergweg");
        break;
    }
    case 149200:
    {
        returnValue = F("Holterfehner Str.");
        break;
    }
    case 149201:
    {
        returnValue = F("Holterfehntjer Weg");
        break;
    }
    case 149202:
    {
        returnValue = F("Holterhagen");
        break;
    }
    case 149203:
    {
        returnValue = F("Holterhöfchen");
        break;
    }
    case 149204:
    {
        returnValue = F("Holterhöfe");
        break;
    }
    case 149205:
    {
        returnValue = F("Holterkamp");
        break;
    }
    case 149206:
    {
        returnValue = F("Holtermannstr.");
        break;
    }
    case 149207:
    {
        returnValue = F("Holtermoorer Weg");
        break;
    }
    case 149208:
    {
        returnValue = F("Holterode");
        break;
    }
    case 149209:
    {
        returnValue = F("Holtershausen");
        break;
    }
    case 149210:
    {
        returnValue = F("Holterweg");
        break;
    }
    case 149211:
    {
        returnValue = F("Holtesch");
        break;
    }
    case 149212:
    {
        returnValue = F("Holtesche");
        break;
    }
    case 149213:
    {
        returnValue = F("Holtestr.");
        break;
    }
    case 149214:
    {
        returnValue = F("Holteweg");
        break;
    }
    case 149215:
    {
        returnValue = F("Holtfehner Weg");
        break;
    }
    case 149216:
    {
        returnValue = F("Holtfeld");
        break;
    }
    case 149217:
    {
        returnValue = F("Holtgarde");
        break;
    }
    case 149218:
    {
        returnValue = F("Holtgaste");
        break;
    }
    case 149219:
    {
        returnValue = F("Holtgaster Str.");
        break;
    }
    case 149220:
    {
        returnValue = F("Holtgaster Weg");
        break;
    }
    case 149221:
    {
        returnValue = F("Holtgrevenstr.");
        break;
    }
    case 149222:
    {
        returnValue = F("Holthaarstr.");
        break;
    }
    case 149223:
    {
        returnValue = F("Holthagen");
        break;
    }
    case 149224:
    {
        returnValue = F("Holthausen");
        break;
    }
    case 149225:
    {
        returnValue = F("Holthausener Str.");
        break;
    }
    case 149226:
    {
        returnValue = F("Holthausener Straß2");
        break;
    }
    case 149227:
    {
        returnValue = F("Holthausenweg");
        break;
    }
    case 149228:
    {
        returnValue = F("Holthauser Damm");
        break;
    }
    case 149229:
    {
        returnValue = F("Holthauser Str.");
        break;
    }
    case 149230:
    {
        returnValue = F("Holthauser Talstr.");
        break;
    }
    case 149231:
    {
        returnValue = F("Holthauser Weg");
        break;
    }
    case 149232:
    {
        returnValue = F("Holthausstr.");
        break;
    }
    case 149233:
    {
        returnValue = F("Holtheide");
        break;
    }
    case 149234:
    {
        returnValue = F("Holtheider Weg");
        break;
    }
    case 149235:
    {
        returnValue = F("Holtherrnweg");
        break;
    }
    case 149236:
    {
        returnValue = F("Holtheyde");
        break;
    }
    case 149237:
    {
        returnValue = F("Holtheyder Str.");
        break;
    }
    case 149238:
    {
        returnValue = F("Holthof");
        break;
    }
    case 149239:
    {
        returnValue = F("Holthof Dorfstr.");
        break;
    }
    case 149240:
    {
        returnValue = F("Holthoff");
        break;
    }
    case 149241:
    {
        returnValue = F("Holthouse");
        break;
    }
    case 149242:
    {
        returnValue = F("Holthueshoff");
        break;
    }
    case 149243:
    {
        returnValue = F("Holthuis-Kamp");
        break;
    }
    case 149244:
    {
        returnValue = F("Holthuisenbosch");
        break;
    }
    case 149245:
    {
        returnValue = F("Holthuiser Weg");
        break;
    }
    case 149246:
    {
        returnValue = F("Holthusen");
        break;
    }
    case 149247:
    {
        returnValue = F("Holthusener Str.");
        break;
    }
    case 149248:
    {
        returnValue = F("Holthusenring");
        break;
    }
    case 149249:
    {
        returnValue = F("Holthusenstr.");
        break;
    }
    case 149250:
    {
        returnValue = F("Holthusenweg");
        break;
    }
    case 149251:
    {
        returnValue = F("Holthuser Str.");
        break;
    }
    case 149252:
    {
        returnValue = F("Holthuser Weg");
        break;
    }
    case 149253:
    {
        returnValue = F("Holthuyser Feldweg");
        break;
    }
    case 149254:
    {
        returnValue = F("Holthuyser Str.");
        break;
    }
    case 149255:
    {
        returnValue = F("Holthuysstr.");
        break;
    }
    case 149256:
    {
        returnValue = F("Holthäuser Str.");
        break;
    }
    case 149257:
    {
        returnValue = F("Holtischer Weg");
        break;
    }
    case 149258:
    {
        returnValue = F("Holtjögen");
        break;
    }
    case 149259:
    {
        returnValue = F("Holtkamp");
        break;
    }
    case 149260:
    {
        returnValue = F("Holtkampstr.");
        break;
    }
    case 149261:
    {
        returnValue = F("Holtkampsweg");
        break;
    }
    case 149262:
    {
        returnValue = F("Holtkampweg");
        break;
    }
    case 149263:
    {
        returnValue = F("Holtkoppel");
        break;
    }
    case 149264:
    {
        returnValue = F("Holtkuhl");
        break;
    }
    case 149265:
    {
        returnValue = F("Holtkämpen");
        break;
    }
    case 149266:
    {
        returnValue = F("Holtland");
        break;
    }
    case 149267:
    {
        returnValue = F("Holtlander Str.");
        break;
    }
    case 149268:
    {
        returnValue = F("Holtmanns Hof");
        break;
    }
    case 149269:
    {
        returnValue = F("Holtmannstr.");
        break;
    }
    case 149270:
    {
        returnValue = F("Holtmarweg");
        break;
    }
    case 149271:
    {
        returnValue = F("Holtmate");
        break;
    }
    case 149272:
    {
        returnValue = F("Holtmeedeweg");
        break;
    }
    case 149273:
    {
        returnValue = F("Holtmoate");
        break;
    }
    case 149274:
    {
        returnValue = F("Holtmoelen");
        break;
    }
    case 149275:
    {
        returnValue = F("Holtmühlenweg");
        break;
    }
    case 149276:
    {
        returnValue = F("Holtnickel");
        break;
    }
    case 149277:
    {
        returnValue = F("Holtorf");
        break;
    }
    case 149278:
    {
        returnValue = F("Holtorfer Dorfstr.");
        break;
    }
    case 149279:
    {
        returnValue = F("Holtorfer Str.");
        break;
    }
    case 149280:
    {
        returnValue = F("Holtorfer Weg");
        break;
    }
    case 149281:
    {
        returnValue = F("Holtorfsbosteler Str.");
        break;
    }
    case 149282:
    {
        returnValue = F("Holtpiepen");
        break;
    }
    case 149283:
    {
        returnValue = F("Holtroper Str.");
        break;
    }
    case 149284:
    {
        returnValue = F("Holtrup");
        break;
    }
    case 149285:
    {
        returnValue = F("Holtruper Stiege");
        break;
    }
    case 149286:
    {
        returnValue = F("Holtruper Str.");
        break;
    }
    case 149287:
    {
        returnValue = F("Holtrupper Weg");
        break;
    }
    case 149288:
    {
        returnValue = F("Holtrupstr.");
        break;
    }
    case 149289:
    {
        returnValue = F("Holtschlagstr.");
        break;
    }
    case 149290:
    {
        returnValue = F("Holtschneiderweg");
        break;
    }
    case 149291:
    {
        returnValue = F("Holtschüer Weg");
        break;
    }
    case 149292:
    {
        returnValue = F("Holtsiekweg");
        break;
    }
    case 149293:
    {
        returnValue = F("Holtstieg");
        break;
    }
    case 149294:
    {
        returnValue = F("Holtstr.");
        break;
    }
    case 149295:
    {
        returnValue = F("Holtstraote");
        break;
    }
    case 149296:
    {
        returnValue = F("Holtstreek");
        break;
    }
    case 149297:
    {
        returnValue = F("Holtumer Dorfstr.");
        break;
    }
    case 149298:
    {
        returnValue = F("Holtumer Hauptstr.");
        break;
    }
    case 149299:
    {
        returnValue = F("Holtumer Str.");
        break;
    }
    case 149300:
    {
        returnValue = F("Holtumer Weg");
        break;
    }
    case 149301:
    {
        returnValue = F("Holtumsweg");
        break;
    }
    case 149302:
    {
        returnValue = F("Holtweg");
        break;
    }
    case 149303:
    {
        returnValue = F("Holtwicker Damm");
        break;
    }
    case 149304:
    {
        returnValue = F("Holtwicker Str.");
        break;
    }
    case 149305:
    {
        returnValue = F("Holtwiese");
        break;
    }
    case 149306:
    {
        returnValue = F("Holtwiesenweg");
        break;
    }
    case 149307:
    {
        returnValue = F("Holtwieske");
        break;
    }
    case 149308:
    {
        returnValue = F("Holtwisch");
        break;
    }
    case 149309:
    {
        returnValue = F("Holtysenweg");
        break;
    }
    case 149310:
    {
        returnValue = F("Holtzbrinckstr.");
        break;
    }
    case 149311:
    {
        returnValue = F("Holtzendorffer Str.");
        break;
    }
    case 149312:
    {
        returnValue = F("Holtzendorfferstr.");
        break;
    }
    case 149313:
    {
        returnValue = F("Holtzhausenstr.");
        break;
    }
    case 149314:
    {
        returnValue = F("Holtzmannstr.");
        break;
    }
    case 149315:
    {
        returnValue = F("Holunder");
        break;
    }
    case 149316:
    {
        returnValue = F("Holunderacker");
        break;
    }
    case 149317:
    {
        returnValue = F("Holunderallee");
        break;
    }
    case 149318:
    {
        returnValue = F("Holunderblüte");
        break;
    }
    case 149319:
    {
        returnValue = F("Holunderbusch");
        break;
    }
    case 149320:
    {
        returnValue = F("Holunderflosse");
        break;
    }
    case 149321:
    {
        returnValue = F("Holundergasse");
        break;
    }
    case 149322:
    {
        returnValue = F("Holundergäßchen");
        break;
    }
    case 149323:
    {
        returnValue = F("Holunderhag");
        break;
    }
    case 149324:
    {
        returnValue = F("Holunderhecke");
        break;
    }
    case 149325:
    {
        returnValue = F("Holunderkamp");
        break;
    }
    case 149326:
    {
        returnValue = F("Holunderkehre");
        break;
    }
    case 149327:
    {
        returnValue = F("Holunderpfad");
        break;
    }
    case 149328:
    {
        returnValue = F("Holunderplatz");
        break;
    }
    case 149329:
    {
        returnValue = F("Holunderrain");
        break;
    }
    case 149330:
    {
        returnValue = F("Holunderring");
        break;
    }
    case 149331:
    {
        returnValue = F("Holundersteg");
        break;
    }
    case 149332:
    {
        returnValue = F("Holundersteig");
        break;
    }
    case 149333:
    {
        returnValue = F("Holunderstieg");
        break;
    }
    case 149334:
    {
        returnValue = F("Holunderstiege");
        break;
    }
    case 149335:
    {
        returnValue = F("Holunderstr.");
        break;
    }
    case 149336:
    {
        returnValue = F("Holunderweg");
        break;
    }
    case 149337:
    {
        returnValue = F("Holunderwinkel");
        break;
    }
    case 149338:
    {
        returnValue = F("Holunderäcker");
        break;
    }
    case 149339:
    {
        returnValue = F("Holunger Str.");
        break;
    }
    case 149340:
    {
        returnValue = F("Holunger Weg");
        break;
    }
    case 149341:
    {
        returnValue = F("Holweg");
        break;
    }
    case 149342:
    {
        returnValue = F("Holxer Str.");
        break;
    }
    case 149343:
    {
        returnValue = F("Holz");
        break;
    }
    case 149344:
    {
        returnValue = F("Holz-Breede");
        break;
    }
    case 149345:
    {
        returnValue = F("Holzabfuhrweg");
        break;
    }
    case 149346:
    {
        returnValue = F("Holzachweg");
        break;
    }
    case 149347:
    {
        returnValue = F("Holzacker");
        break;
    }
    case 149348:
    {
        returnValue = F("Holzackerstr.");
        break;
    }
    case 149349:
    {
        returnValue = F("Holzackerweg");
        break;
    }
    case 149350:
    {
        returnValue = F("Holzallee");
        break;
    }
    case 149351:
    {
        returnValue = F("Holzapfeldriesch");
        break;
    }
    case 149352:
    {
        returnValue = F("Holzapfelgasse");
        break;
    }
    case 149353:
    {
        returnValue = F("Holzapfelstr.");
        break;
    }
    case 149354:
    {
        returnValue = F("Holzapfelweg");
        break;
    }
    case 149355:
    {
        returnValue = F("Holzappeler Str.");
        break;
    }
    case 149356:
    {
        returnValue = F("Holzappelstr.");
        break;
    }
    case 149357:
    {
        returnValue = F("Holzappler Hütte");
        break;
    }
    case 149358:
    {
        returnValue = F("Holzara");
        break;
    }
    case 149359:
    {
        returnValue = F("Holzbach");
        break;
    }
    case 149360:
    {
        returnValue = F("Holzbacher Str.");
        break;
    }
    case 149361:
    {
        returnValue = F("Holzbachstr.");
        break;
    }
    case 149362:
    {
        returnValue = F("Holzbachsägmühle");
        break;
    }
    case 149363:
    {
        returnValue = F("Holzbachtal");
        break;
    }
    case 149364:
    {
        returnValue = F("Holzbachtalstr.");
        break;
    }
    case 149365:
    {
        returnValue = F("Holzbachweg");
        break;
    }
    case 149366:
    {
        returnValue = F("Holzbaden");
        break;
    }
    case 149367:
    {
        returnValue = F("Holzbalger Str.");
        break;
    }
    case 149368:
    {
        returnValue = F("Holzbauernweg");
        break;
    }
    case 149369:
    {
        returnValue = F("Holzbauerstr.");
        break;
    }
    case 149370:
    {
        returnValue = F("Holzbaumweg");
        break;
    }
    case 149371:
    {
        returnValue = F("Holzbendenpark");
        break;
    }
    case 149372:
    {
        returnValue = F("Holzberg");
        break;
    }
    case 149373:
    {
        returnValue = F("Holzbergblick");
        break;
    }
    case 149374:
    {
        returnValue = F("Holzbergenweg");
        break;
    }
    case 149375:
    {
        returnValue = F("Holzbergerweg");
        break;
    }
    case 149376:
    {
        returnValue = F("Holzbergle");
        break;
    }
    case 149377:
    {
        returnValue = F("Holzbergstr.");
        break;
    }
    case 149378:
    {
        returnValue = F("Holzbergweg");
        break;
    }
    case 149379:
    {
        returnValue = F("Holzberndorf");
        break;
    }
    case 149380:
    {
        returnValue = F("Holzbeulstr.");
        break;
    }
    case 149381:
    {
        returnValue = F("Holzbichlweg");
        break;
    }
    case 149382:
    {
        returnValue = F("Holzbirne-Richtstatt");
        break;
    }
    case 149383:
    {
        returnValue = F("Holzbogenstr.");
        break;
    }
    case 149384:
    {
        returnValue = F("Holzbohlenweg");
        break;
    }
    case 149385:
    {
        returnValue = F("Holzbornweg");
        break;
    }
    case 149386:
    {
        returnValue = F("Holzbreder Weg");
        break;
    }
    case 149387:
    {
        returnValue = F("Holzbreite");
        break;
    }
    case 149388:
    {
        returnValue = F("Holzbreiten");
        break;
    }
    case 149389:
    {
        returnValue = F("Holzbreitenweg");
        break;
    }
    case 149390:
    {
        returnValue = F("Holzbronner Str.");
        break;
    }
    case 149391:
    {
        returnValue = F("Holzbruchweg");
        break;
    }
    case 149392:
    {
        returnValue = F("Holzbruckweg");
        break;
    }
    case 149393:
    {
        returnValue = F("Holzbrunnen");
        break;
    }
    case 149394:
    {
        returnValue = F("Holzbrunnenstr.");
        break;
    }
    case 149395:
    {
        returnValue = F("Holzbrunnenweg");
        break;
    }
    case 149396:
    {
        returnValue = F("Holzbrücke");
        break;
    }
    case 149397:
    {
        returnValue = F("Holzbrücke Hennersdorf");
        break;
    }
    case 149398:
    {
        returnValue = F("Holzbrücke am alten Federbach");
        break;
    }
    case 149399:
    {
        returnValue = F("Holzbrücke über den Zehnbuschgraben");
        break;
    }
    case 149400:
    {
        returnValue = F("Holzbrückenweg");
        break;
    }
    case 149401:
    {
        returnValue = F("Holzbrücker Allee");
        break;
    }
    case 149402:
    {
        returnValue = F("Holzbrünnlstr.");
        break;
    }
    case 149403:
    {
        returnValue = F("Holzbuch");
        break;
    }
    case 149404:
    {
        returnValue = F("Holzbucher Str.");
        break;
    }
    case 149405:
    {
        returnValue = F("Holzbuck");
        break;
    }
    case 149406:
    {
        returnValue = F("Holzbuckelweg");
        break;
    }
    case 149407:
    {
        returnValue = F("Holzburger Str.");
        break;
    }
    case 149408:
    {
        returnValue = F("Holzbüttger Haus");
        break;
    }
    case 149409:
    {
        returnValue = F("Holzbüttger Str.");
        break;
    }
    case 149410:
    {
        returnValue = F("Holzchaussee");
        break;
    }
    case 149411:
    {
        returnValue = F("Holzdamm");
        break;
    }
    case 149412:
    {
        returnValue = F("Holzdobelweg");
        break;
    }
    case 149413:
    {
        returnValue = F("Holzdorfer Str.");
        break;
    }
    case 149414:
    {
        returnValue = F("Holzdorfer Weg");
        break;
    }
    case 149415:
    {
        returnValue = F("Holzeck");
        break;
    }
    case 149416:
    {
        returnValue = F("Holzeckstr.");
        break;
    }
    case 149417:
    {
        returnValue = F("Holzeckweg");
        break;
    }
    case 149418:
    {
        returnValue = F("Holzegart");
        break;
    }
    case 149419:
    {
        returnValue = F("Holzelfinger Str.");
        break;
    }
    case 149420:
    {
        returnValue = F("Holzemer Allee");
        break;
    }
    case 149421:
    {
        returnValue = F("Holzemer Str.");
        break;
    }
    case 149422:
    {
        returnValue = F("Holzen");
        break;
    }
    case 149423:
    {
        returnValue = F("Holzenberg");
        break;
    }
    case 149424:
    {
        returnValue = F("Holzendorf Ausbau");
        break;
    }
    case 149425:
    {
        returnValue = F("Holzendorfer Str.");
        break;
    }
    case 149426:
    {
        returnValue = F("Holzener Str.");
        break;
    }
    case 149427:
    {
        returnValue = F("Holzener Weg");
        break;
    }
    case 149428:
    {
        returnValue = F("Holzeneschenweg");
        break;
    }
    case 149429:
    {
        returnValue = F("Holzenfeld");
        break;
    }
    case 149430:
    {
        returnValue = F("Holzengasse");
        break;
    }
    case 149431:
    {
        returnValue = F("Holzengelscher Stadtweg");
        break;
    }
    case 149432:
    {
        returnValue = F("Holzengler Hauptstr.");
        break;
    }
    case 149433:
    {
        returnValue = F("Holzengler Kirchstr.");
        break;
    }
    case 149434:
    {
        returnValue = F("Holzengrund");
        break;
    }
    case 149435:
    {
        returnValue = F("Holzenhufen");
        break;
    }
    case 149436:
    {
        returnValue = F("Holzenweg");
        break;
    }
    case 149437:
    {
        returnValue = F("Holzenwiesenstr.");
        break;
    }
    case 149438:
    {
        returnValue = F("Holzer Feld");
        break;
    }
    case 149439:
    {
        returnValue = F("Holzer Gasse");
        break;
    }
    case 149440:
    {
        returnValue = F("Holzer Platz");
        break;
    }
    case 149441:
    {
        returnValue = F("Holzer Stieg");
        break;
    }
    case 149442:
    {
        returnValue = F("Holzer Str.");
        break;
    }
    case 149443:
    {
        returnValue = F("Holzer Weg");
        break;
    }
    case 149444:
    {
        returnValue = F("Holzergrund");
        break;
    }
    case 149445:
    {
        returnValue = F("Holzerhofweg");
        break;
    }
    case 149446:
    {
        returnValue = F("Holzeriweg");
        break;
    }
    case 149447:
    {
        returnValue = F("Holzerland Platz");
        break;
    }
    case 149448:
    {
        returnValue = F("Holzerlebnisparcours");
        break;
    }
    case 149449:
    {
        returnValue = F("Holzerlohstr.");
        break;
    }
    case 149450:
    {
        returnValue = F("Holzernpfad");
        break;
    }
    case 149451:
    {
        returnValue = F("Holzerreuth");
        break;
    }
    case 149452:
    {
        returnValue = F("Holzersbergweg");
        break;
    }
    case 149453:
    {
        returnValue = F("Holzersteig");
        break;
    }
    case 149454:
    {
        returnValue = F("Holzerstr.");
        break;
    }
    case 149455:
    {
        returnValue = F("Holzetweg");
        break;
    }
    case 149456:
    {
        returnValue = F("Holzfangweg");
        break;
    }
    case 149457:
    {
        returnValue = F("Holzfeld");
        break;
    }
    case 149458:
    {
        returnValue = F("Holzfelder Str.");
        break;
    }
    case 149459:
    {
        returnValue = F("Holzfelder Weg");
        break;
    }
    case 149460:
    {
        returnValue = F("Holzfeldstr.");
        break;
    }
    case 149461:
    {
        returnValue = F("Holzfeldweg");
        break;
    }
    case 149462:
    {
        returnValue = F("Holzfelseleweg");
        break;
    }
    case 149463:
    {
        returnValue = F("Holzfinnenstr.");
        break;
    }
    case 149464:
    {
        returnValue = F("Holzfolder Weg");
        break;
    }
    case 149465:
    {
        returnValue = F("Holzgarten");
        break;
    }
    case 149466:
    {
        returnValue = F("Holzgartenstr.");
        break;
    }
    case 149467:
    {
        returnValue = F("Holzgartenweg");
        break;
    }
    case 149468:
    {
        returnValue = F("Holzgasse");
        break;
    }
    case 149469:
    {
        returnValue = F("Holzgaß");
        break;
    }
    case 149470:
    {
        returnValue = F("Holzgehäu");
        break;
    }
    case 149471:
    {
        returnValue = F("Holzgerlinger Steige");
        break;
    }
    case 149472:
    {
        returnValue = F("Holzgerlinger Str.");
        break;
    }
    case 149473:
    {
        returnValue = F("Holzgerlinger Weg");
        break;
    }
    case 149474:
    {
        returnValue = F("Holzgewannstr.");
        break;
    }
    case 149475:
    {
        returnValue = F("Holzgraben");
        break;
    }
    case 149476:
    {
        returnValue = F("Holzgrabenstr.");
        break;
    }
    case 149477:
    {
        returnValue = F("Holzgrabenweg");
        break;
    }
    case 149478:
    {
        returnValue = F("Holzgracht");
        break;
    }
    case 149479:
    {
        returnValue = F("Holzgrundstr.");
        break;
    }
    case 149480:
    {
        returnValue = F("Holzgut");
        break;
    }
    case 149481:
    {
        returnValue = F("Holzgässle");
        break;
    }
    case 149482:
    {
        returnValue = F("Holzgünzer Str.");
        break;
    }
    case 149483:
    {
        returnValue = F("Holzhackerstr.");
        break;
    }
    case 149484:
    {
        returnValue = F("Holzhackerweg");
        break;
    }
    case 149485:
    {
        returnValue = F("Holzhafen");
        break;
    }
    case 149486:
    {
        returnValue = F("Holzhalde");
        break;
    }
    case 149487:
    {
        returnValue = F("Holzhaldenstr.");
        break;
    }
    case 149488:
    {
        returnValue = F("Holzhaldenweg");
        break;
    }
    case 149489:
    {
        returnValue = F("Holzham");
        break;
    }
    case 149490:
    {
        returnValue = F("Holzhamer Bogen");
        break;
    }
    case 149491:
    {
        returnValue = F("Holzhamer Str.");
        break;
    }
    case 149492:
    {
        returnValue = F("Holzhamm");
        break;
    }
    case 149493:
    {
        returnValue = F("Holzhammerweg");
        break;
    }
    case 149494:
    {
        returnValue = F("Holzharlanden");
        break;
    }
    case 149495:
    {
        returnValue = F("Holzharlandener Weg");
        break;
    }
    case 149496:
    {
        returnValue = F("Holzhauer Steig");
        break;
    }
    case 149497:
    {
        returnValue = F("Holzhauergasse");
        break;
    }
    case 149498:
    {
        returnValue = F("Holzhauerstr.");
        break;
    }
    case 149499:
    {
        returnValue = F("Holzhauerteich");
        break;
    }
    case 149500:
    {
        returnValue = F("Holzhauerweg");
        break;
    }
    case 149501:
    {
        returnValue = F("Holzhaufenweg");
        break;
    }
    case 149502:
    {
        returnValue = F("Holzhaus");
        break;
    }
    case 149503:
    {
        returnValue = F("Holzhausen");
        break;
    }
    case 149504:
    {
        returnValue = F("Holzhausener Dorfstr.");
        break;
    }
    case 149505:
    {
        returnValue = F("Holzhausener Str.");
        break;
    }
    case 149506:
    {
        returnValue = F("Holzhausener Weg");
        break;
    }
    case 149507:
    {
        returnValue = F("Holzhausenstr.");
        break;
    }
    case 149508:
    {
        returnValue = F("Holzhausenweg");
        break;
    }
    case 149509:
    {
        returnValue = F("Holzhauser");
        break;
    }
    case 149510:
    {
        returnValue = F("Holzhauser Berg");
        break;
    }
    case 149511:
    {
        returnValue = F("Holzhauser Dorfstr.");
        break;
    }
    case 149512:
    {
        returnValue = F("Holzhauser Esch");
        break;
    }
    case 149513:
    {
        returnValue = F("Holzhauser Feld");
        break;
    }
    case 149514:
    {
        returnValue = F("Holzhauser Hauptstr.");
        break;
    }
    case 149515:
    {
        returnValue = F("Holzhauser Hof");
        break;
    }
    case 149516:
    {
        returnValue = F("Holzhauser Kirchweg");
        break;
    }
    case 149517:
    {
        returnValue = F("Holzhauser Str.");
        break;
    }
    case 149518:
    {
        returnValue = F("Holzhauser Wald");
        break;
    }
    case 149519:
    {
        returnValue = F("Holzhauser Weg");
        break;
    }
    case 149520:
    {
        returnValue = F("Holzhauserstr.");
        break;
    }
    case 149521:
    {
        returnValue = F("Holzhaussiedlung");
        break;
    }
    case 149522:
    {
        returnValue = F("Holzhausstr.");
        break;
    }
    case 149523:
    {
        returnValue = F("Holzhayweg");
        break;
    }
    case 149524:
    {
        returnValue = F("Holzheide");
        break;
    }
    case 149525:
    {
        returnValue = F("Holzheider Weg");
        break;
    }
    case 149526:
    {
        returnValue = F("Holzheim");
        break;
    }
    case 149527:
    {
        returnValue = F("Holzheimer Pfad");
        break;
    }
    case 149528:
    {
        returnValue = F("Holzheimer Str.");
        break;
    }
    case 149529:
    {
        returnValue = F("Holzheimer Tal");
        break;
    }
    case 149530:
    {
        returnValue = F("Holzheimer Weg");
        break;
    }
    case 149531:
    {
        returnValue = F("Holzheimerstr.");
        break;
    }
    case 149532:
    {
        returnValue = F("Holzheystr.");
        break;
    }
    case 149533:
    {
        returnValue = F("Holzhof");
        break;
    }
    case 149534:
    {
        returnValue = F("Holzhof-Kreisverkehr");
        break;
    }
    case 149535:
    {
        returnValue = F("Holzhofstr.");
        break;
    }
    case 149536:
    {
        returnValue = F("Holzhofweg");
        break;
    }
    case 149537:
    {
        returnValue = F("Holzhäuseln");
        break;
    }
    case 149538:
    {
        returnValue = F("Holzhäuser");
        break;
    }
    case 149539:
    {
        returnValue = F("Holzhäuser Str.");
        break;
    }
    case 149540:
    {
        returnValue = F("Holzhäuser Weg");
        break;
    }
    case 149541:
    {
        returnValue = F("Holzhäuser-Str.");
        break;
    }
    case 149542:
    {
        returnValue = F("Holzhäusergasse");
        break;
    }
    case 149543:
    {
        returnValue = F("Holzhäusern");
        break;
    }
    case 149544:
    {
        returnValue = F("Holzhäuserstr.");
        break;
    }
    case 149545:
    {
        returnValue = F("Holzhäuserweg");
        break;
    }
    case 149546:
    {
        returnValue = F("Holzhäuslerweg");
        break;
    }
    case 149547:
    {
        returnValue = F("Holzhüttenstr.");
        break;
    }
    case 149548:
    {
        returnValue = F("Holzi");
        break;
    }
    case 149549:
    {
        returnValue = F("Holzinger Weg");
        break;
    }
    case 149550:
    {
        returnValue = F("Holzinshaus");
        break;
    }
    case 149551:
    {
        returnValue = F("Holzkahr");
        break;
    }
    case 149552:
    {
        returnValue = F("Holzkamp");
        break;
    }
    case 149553:
    {
        returnValue = F("Holzkampsweg");
        break;
    }
    case 149554:
    {
        returnValue = F("Holzkamptwiete");
        break;
    }
    case 149555:
    {
        returnValue = F("Holzkampweg");
        break;
    }
    case 149556:
    {
        returnValue = F("Holzkapeweg");
        break;
    }
    case 149557:
    {
        returnValue = F("Holzkate");
        break;
    }
    case 149558:
    {
        returnValue = F("Holzkatenweg");
        break;
    }
    case 149559:
    {
        returnValue = F("Holzkaute");
        break;
    }
    case 149560:
    {
        returnValue = F("Holzkeller");
        break;
    }
    case 149561:
    {
        returnValue = F("Holzkenstr.");
        break;
    }
    case 149562:
    {
        returnValue = F("Holzkirchener Str.");
        break;
    }
    case 149563:
    {
        returnValue = F("Holzkirchener Weg");
        break;
    }
    case 149564:
    {
        returnValue = F("Holzkircher Str.");
        break;
    }
    case 149565:
    {
        returnValue = F("Holzkirchhausener Str.");
        break;
    }
    case 149566:
    {
        returnValue = F("Holzkirchhäuser Str.");
        break;
    }
    case 149567:
    {
        returnValue = F("Holzkirchner Str.");
        break;
    }
    case 149568:
    {
        returnValue = F("Holzkirchner Weg");
        break;
    }
    case 149569:
    {
        returnValue = F("Holzklinge");
        break;
    }
    case 149570:
    {
        returnValue = F("Holzklingelweg");
        break;
    }
    case 149571:
    {
        returnValue = F("Holzknick");
        break;
    }
    case 149572:
    {
        returnValue = F("Holzkontor");
        break;
    }
    case 149573:
    {
        returnValue = F("Holzkoppel");
        break;
    }
    case 149574:
    {
        returnValue = F("Holzkoppelreihe");
        break;
    }
    case 149575:
    {
        returnValue = F("Holzkoppelweg");
        break;
    }
    case 149576:
    {
        returnValue = F("Holzkrug");
        break;
    }
    case 149577:
    {
        returnValue = F("Holzkruger Weg");
        break;
    }
    case 149578:
    {
        returnValue = F("Holzkrugweg");
        break;
    }
    case 149579:
    {
        returnValue = F("Holzlager");
        break;
    }
    case 149580:
    {
        returnValue = F("Holzlagerplatz");
        break;
    }
    case 149581:
    {
        returnValue = F("Holzlagerplatz WBV Schierling");
        break;
    }
    case 149582:
    {
        returnValue = F("Holzlagerplatzweg");
        break;
    }
    case 149583:
    {
        returnValue = F("Holzlandstr.");
        break;
    }
    case 149584:
    {
        returnValue = F("Holzlandweg");
        break;
    }
    case 149585:
    {
        returnValue = F("Holzlarer Str.");
        break;
    }
    case 149586:
    {
        returnValue = F("Holzleite");
        break;
    }
    case 149587:
    {
        returnValue = F("Holzleitenstr.");
        break;
    }
    case 149588:
    {
        returnValue = F("Holzleithen");
        break;
    }
    case 149589:
    {
        returnValue = F("Holzloh");
        break;
    }
    case 149590:
    {
        returnValue = F("Holzlohstr.");
        break;
    }
    case 149591:
    {
        returnValue = F("Holzlooger Str.");
        break;
    }
    case 149592:
    {
        returnValue = F("Holzlände");
        break;
    }
    case 149593:
    {
        returnValue = F("Holzmaarstr.");
        break;
    }
    case 149594:
    {
        returnValue = F("Holzmaase");
        break;
    }
    case 149595:
    {
        returnValue = F("Holzmadener Str.");
        break;
    }
    case 149596:
    {
        returnValue = F("Holzmader Str.");
        break;
    }
    case 149597:
    {
        returnValue = F("Holzmahd");
        break;
    }
    case 149598:
    {
        returnValue = F("Holzmann");
        break;
    }
    case 149599:
    {
        returnValue = F("Holzmannstr.");
        break;
    }
    case 149600:
    {
        returnValue = F("Holzmannweg");
        break;
    }
    case 149601:
    {
        returnValue = F("Holzmark");
        break;
    }
    case 149602:
    {
        returnValue = F("Holzmarke");
        break;
    }
    case 149603:
    {
        returnValue = F("Holzmarkenstr.");
        break;
    }
    case 149604:
    {
        returnValue = F("Holzmarkt");
        break;
    }
    case 149605:
    {
        returnValue = F("Holzmarktstr.");
        break;
    }
    case 149606:
    {
        returnValue = F("Holzmattenstr.");
        break;
    }
    case 149607:
    {
        returnValue = F("Holzmattenweg");
        break;
    }
    case 149608:
    {
        returnValue = F("Holzmattstr.");
        break;
    }
    case 149609:
    {
        returnValue = F("Holzmattweg");
        break;
    }
    case 149610:
    {
        returnValue = F("Holzmauerweg");
        break;
    }
    case 149611:
    {
        returnValue = F("Holzmeiers Hof");
        break;
    }
    case 149612:
    {
        returnValue = F("Holzmeilerweg");
        break;
    }
    case 149613:
    {
        returnValue = F("Holzmichelweg");
        break;
    }
    case 149614:
    {
        returnValue = F("Holzmichl");
        break;
    }
    case 149615:
    {
        returnValue = F("Holzmindener Str.");
        break;
    }
    case 149616:
    {
        returnValue = F("Holzmindener Weg");
        break;
    }
    case 149617:
    {
        returnValue = F("Holzmähderweg");
        break;
    }
    case 149618:
    {
        returnValue = F("Holzmühl");
        break;
    }
    case 149619:
    {
        returnValue = F("Holzmühle");
        break;
    }
    case 149620:
    {
        returnValue = F("Holzmühlenstr.");
        break;
    }
    case 149621:
    {
        returnValue = F("Holzmühlenweg");
        break;
    }
    case 149622:
    {
        returnValue = F("Holzmühler Str.");
        break;
    }
    case 149623:
    {
        returnValue = F("Holzmühler Weg");
        break;
    }
    case 149624:
    {
        returnValue = F("Holzmühlpfad");
        break;
    }
    case 149625:
    {
        returnValue = F("Holzmühlstr.");
        break;
    }
    case 149626:
    {
        returnValue = F("Holzmülheimer Str.");
        break;
    }
    case 149627:
    {
        returnValue = F("Holzmüllerallee");
        break;
    }
    case 149628:
    {
        returnValue = F("Holzmüllerbachstr.");
        break;
    }
    case 149629:
    {
        returnValue = F("Holzmüllerweg");
        break;
    }
    case 149630:
    {
        returnValue = F("Holzollinger Str.");
        break;
    }
    case 149631:
    {
        returnValue = F("Holzort");
        break;
    }
    case 149632:
    {
        returnValue = F("Holzpfad");
        break;
    }
    case 149633:
    {
        returnValue = F("Holzplatz");
        break;
    }
    case 149634:
    {
        returnValue = F("Holzplatzweg");
        break;
    }
    case 149635:
    {
        returnValue = F("Holzpoint");
        break;
    }
    case 149636:
    {
        returnValue = F("Holzpüschen");
        break;
    }
    case 149637:
    {
        returnValue = F("Holzrain");
        break;
    }
    case 149638:
    {
        returnValue = F("Holzrainweg");
        break;
    }
    case 149639:
    {
        returnValue = F("Holzredder");
        break;
    }
    case 149640:
    {
        returnValue = F("Holzreiterwall");
        break;
    }
    case 149641:
    {
        returnValue = F("Holzried");
        break;
    }
    case 149642:
    {
        returnValue = F("Holzriede");
        break;
    }
    case 149643:
    {
        returnValue = F("Holzrothweg");
        break;
    }
    case 149644:
    {
        returnValue = F("Holzrückeweg");
        break;
    }
    case 149645:
    {
        returnValue = F("Holzsackweg");
        break;
    }
    case 149646:
    {
        returnValue = F("Holzscheuermoosweg");
        break;
    }
    case 149647:
    {
        returnValue = F("Holzschicht");
        break;
    }
    case 149648:
    {
        returnValue = F("Holzschlagbrunnensträßchen");
        break;
    }
    case 149649:
    {
        returnValue = F("Holzschlagbrunnerweg");
        break;
    }
    case 149650:
    {
        returnValue = F("Holzschlagsträßchen");
        break;
    }
    case 149651:
    {
        returnValue = F("Holzschleife");
        break;
    }
    case 149652:
    {
        returnValue = F("Holzschuherstr.");
        break;
    }
    case 149653:
    {
        returnValue = F("Holzschuhgasse");
        break;
    }
    case 149654:
    {
        returnValue = F("Holzschuhmacherstr.");
        break;
    }
    case 149655:
    {
        returnValue = F("Holzschuhmacherweg");
        break;
    }
    case 149656:
    {
        returnValue = F("Holzschuhwaldweg");
        break;
    }
    case 149657:
    {
        returnValue = F("Holzschwanger Str.");
        break;
    }
    case 149658:
    {
        returnValue = F("Holzsiepen");
        break;
    }
    case 149659:
    {
        returnValue = F("Holzskulpturenpark");
        break;
    }
    case 149660:
    {
        returnValue = F("Holzspitz");
        break;
    }
    case 149661:
    {
        returnValue = F("Holzspitze");
        break;
    }
    case 149662:
    {
        returnValue = F("Holzspitzenweg");
        break;
    }
    case 149663:
    {
        returnValue = F("Holzstad");
        break;
    }
    case 149664:
    {
        returnValue = F("Holzstege");
        break;
    }
    case 149665:
    {
        returnValue = F("Holzsteig");
        break;
    }
    case 149666:
    {
        returnValue = F("Holzsteige");
        break;
    }
    case 149667:
    {
        returnValue = F("Holzsteigweg");
        break;
    }
    case 149668:
    {
        returnValue = F("Holzsteinweg");
        break;
    }
    case 149669:
    {
        returnValue = F("Holzstiege");
        break;
    }
    case 149670:
    {
        returnValue = F("Holzstr.");
        break;
    }
    case 149671:
    {
        returnValue = F("Holzstrecke");
        break;
    }
    case 149672:
    {
        returnValue = F("Holzstubenweg");
        break;
    }
    case 149673:
    {
        returnValue = F("Holzstätte");
        break;
    }
    case 149674:
    {
        returnValue = F("Holzstößerweg");
        break;
    }
    case 149675:
    {
        returnValue = F("Holzteichstr.");
        break;
    }
    case 149676:
    {
        returnValue = F("Holzteichweg");
        break;
    }
    case 149677:
    {
        returnValue = F("Holzthalebener Str.");
        break;
    }
    case 149678:
    {
        returnValue = F("Holzthaleberstr.");
        break;
    }
    case 149679:
    {
        returnValue = F("Holztor");
        break;
    }
    case 149680:
    {
        returnValue = F("Holztorstr.");
        break;
    }
    case 149681:
    {
        returnValue = F("Holztraubach");
        break;
    }
    case 149682:
    {
        returnValue = F("Holztraubacher Str.");
        break;
    }
    case 149683:
    {
        returnValue = F("Holztrifft");
        break;
    }
    case 149684:
    {
        returnValue = F("Holztrift");
        break;
    }
    case 149685:
    {
        returnValue = F("Holzurburger Str.");
        break;
    }
    case 149686:
    {
        returnValue = F("Holzverladestr.");
        break;
    }
    case 149687:
    {
        returnValue = F("Holzveygasse");
        break;
    }
    case 149688:
    {
        returnValue = F("Holzvogtkamp");
        break;
    }
    case 149689:
    {
        returnValue = F("Holzvogtweg");
        break;
    }
    case 149690:
    {
        returnValue = F("Holzwald");
        break;
    }
    case 149691:
    {
        returnValue = F("Holzwarthstr.");
        break;
    }
    case 149692:
    {
        returnValue = F("Holzwasen");
        break;
    }
    case 149693:
    {
        returnValue = F("Holzwasenweg");
        break;
    }
    case 149694:
    {
        returnValue = F("Holzweber");
        break;
    }
    case 149695:
    {
        returnValue = F("Holzweberstr.");
        break;
    }
    case 149696:
    {
        returnValue = F("Holzweg");
        break;
    }
    case 149697:
    {
        returnValue = F("Holzweger Kamp");
        break;
    }
    case 149698:
    {
        returnValue = F("Holzweger Str.");
        break;
    }
    case 149699:
    {
        returnValue = F("Holzwegschneise");
        break;
    }
    case 149700:
    {
        returnValue = F("Holzweiler");
        break;
    }
    case 149701:
    {
        returnValue = F("Holzweiler Weg");
        break;
    }
    case 149702:
    {
        returnValue = F("Holzweilermarkt");
        break;
    }
    case 149703:
    {
        returnValue = F("Holzweilerstr.");
        break;
    }
    case 149704:
    {
        returnValue = F("Holzweilerstr. (neu)");
        break;
    }
    case 149705:
    {
        returnValue = F("Holzweißiger Str.");
        break;
    }
    case 149706:
    {
        returnValue = F("Holzweißigstr.");
        break;
    }
    case 149707:
    {
        returnValue = F("Holzwerkstr.");
        break;
    }
    case 149708:
    {
        returnValue = F("Holzwickeder Str.");
        break;
    }
    case 149709:
    {
        returnValue = F("Holzwiese");
        break;
    }
    case 149710:
    {
        returnValue = F("Holzwiesen");
        break;
    }
    case 149711:
    {
        returnValue = F("Holzwiesenstr.");
        break;
    }
    case 149712:
    {
        returnValue = F("Holzwiesenweg");
        break;
    }
    case 149713:
    {
        returnValue = F("Holzwieseweg");
        break;
    }
    case 149714:
    {
        returnValue = F("Holzwiesweg");
        break;
    }
    case 149715:
    {
        returnValue = F("Holzwindelweg");
        break;
    }
    case 149716:
    {
        returnValue = F("Holzwinkel");
        break;
    }
    case 149717:
    {
        returnValue = F("Holzwinkelweg");
        break;
    }
    case 149718:
    {
        returnValue = F("Holzzelle");
        break;
    }
    case 149719:
    {
        returnValue = F("Holzäcker");
        break;
    }
    case 149720:
    {
        returnValue = F("Holzäckerstr.");
        break;
    }
    case 149721:
    {
        returnValue = F("Holzäckerweg");
        break;
    }
    case 149722:
    {
        returnValue = F("Holßeler Weg");
        break;
    }
    case 149723:
    {
        returnValue = F("Holßelerfeld");
        break;
    }
    case 149724:
    {
        returnValue = F("Homanns Busch");
        break;
    }
    case 149725:
    {
        returnValue = F("Homanns Kämpe");
        break;
    }
    case 149726:
    {
        returnValue = F("Homanns-Hof");
        break;
    }
    case 149727:
    {
        returnValue = F("Homannshof");
        break;
    }
    case 149728:
    {
        returnValue = F("Homannstr.");
        break;
    }
    case 149729:
    {
        returnValue = F("Homannweg");
        break;
    }
    case 149730:
    {
        returnValue = F("Homarienthal");
        break;
    }
    case 149731:
    {
        returnValue = F("Hombacher Str.");
        break;
    }
    case 149732:
    {
        returnValue = F("Hombachstr.");
        break;
    }
    case 149733:
    {
        returnValue = F("Homberg");
        break;
    }
    case 149734:
    {
        returnValue = F("Hombergallee");
        break;
    }
    case 149735:
    {
        returnValue = F("Hombergen");
        break;
    }
    case 149736:
    {
        returnValue = F("Homberger Ring");
        break;
    }
    case 149737:
    {
        returnValue = F("Homberger Str.");
        break;
    }
    case 149738:
    {
        returnValue = F("Homberger Weg");
        break;
    }
    case 149739:
    {
        returnValue = F("Hombergsegge");
        break;
    }
    case 149740:
    {
        returnValue = F("Hombergsring");
        break;
    }
    case 149741:
    {
        returnValue = F("Hombergstr.");
        break;
    }
    case 149742:
    {
        returnValue = F("Hombergsträßle");
        break;
    }
    case 149743:
    {
        returnValue = F("Hombertstiege");
        break;
    }
    case 149744:
    {
        returnValue = F("Hombes-Briggelche");
        break;
    }
    case 149745:
    {
        returnValue = F("Hombollstr.");
        break;
    }
    case 149746:
    {
        returnValue = F("Homborgstr.");
        break;
    }
    case 149747:
    {
        returnValue = F("Homborn");
        break;
    }
    case 149748:
    {
        returnValue = F("Hombourger Str.");
        break;
    }
    case 149749:
    {
        returnValue = F("Hombrede");
        break;
    }
    case 149750:
    {
        returnValue = F("Hombresser Str.");
        break;
    }
    case 149751:
    {
        returnValue = F("Homburg");
        break;
    }
    case 149752:
    {
        returnValue = F("Homburgblick");
        break;
    }
    case 149753:
    {
        returnValue = F("Homburger Hof");
        break;
    }
    case 149754:
    {
        returnValue = F("Homburger Landstr.");
        break;
    }
    case 149755:
    {
        returnValue = F("Homburger Platz");
        break;
    }
    case 149756:
    {
        returnValue = F("Homburger Stieg");
        break;
    }
    case 149757:
    {
        returnValue = F("Homburger Str.");
        break;
    }
    case 149758:
    {
        returnValue = F("Homburger Weg");
        break;
    }
    case 149759:
    {
        returnValue = F("Homburgshöhe");
        break;
    }
    case 149760:
    {
        returnValue = F("Homburgstr.");
        break;
    }
    case 149761:
    {
        returnValue = F("Homburgsweg");
        break;
    }
    case 149762:
    {
        returnValue = F("Homburgweg");
        break;
    }
    case 149763:
    {
        returnValue = F("Hombühlstr.");
        break;
    }
    case 149764:
    {
        returnValue = F("Homegge");
        break;
    }
    case 149765:
    {
        returnValue = F("Homeien");
        break;
    }
    case 149766:
    {
        returnValue = F("Homeiener Str.");
        break;
    }
    case 149767:
    {
        returnValue = F("Homeisterstr.");
        break;
    }
    case 149768:
    {
        returnValue = F("Homek");
        break;
    }
    case 149769:
    {
        returnValue = F("Homerich");
        break;
    }
    case 149770:
    {
        returnValue = F("Homericstr.");
        break;
    }
    case 149771:
    {
        returnValue = F("Homerstegge");
        break;
    }
    case 149772:
    {
        returnValue = F("Homerstr.");
        break;
    }
    case 149773:
    {
        returnValue = F("Homert");
        break;
    }
    case 149774:
    {
        returnValue = F("Homertrift");
        break;
    }
    case 149775:
    {
        returnValue = F("Homerweg");
        break;
    }
    case 149776:
    {
        returnValue = F("Homesmühle");
        break;
    }
    case 149777:
    {
        returnValue = F("Homesweg");
        break;
    }
    case 149778:
    {
        returnValue = F("Homeyers Esch");
        break;
    }
    case 149779:
    {
        returnValue = F("Homeyers Hof");
        break;
    }
    case 149780:
    {
        returnValue = F("Homeyerstr.");
        break;
    }
    case 149781:
    {
        returnValue = F("Homfeld");
        break;
    }
    case 149782:
    {
        returnValue = F("Homfelder Berg");
        break;
    }
    case 149783:
    {
        returnValue = F("Homfelder Chaussee");
        break;
    }
    case 149784:
    {
        returnValue = F("Homfelder Heide");
        break;
    }
    case 149785:
    {
        returnValue = F("Homfelder Str.");
        break;
    }
    case 149786:
    {
        returnValue = F("Homfelder Weg");
        break;
    }
    case 149787:
    {
        returnValue = F("Hommelepötz");
        break;
    }
    case 149788:
    {
        returnValue = F("Hommelmühle");
        break;
    }
    case 149789:
    {
        returnValue = F("Hommelsberg");
        break;
    }
    case 149790:
    {
        returnValue = F("Hommelsbruckweg");
        break;
    }
    case 149791:
    {
        returnValue = F("Hommelsgasse");
        break;
    }
    case 149792:
    {
        returnValue = F("Hommelsheimstr.");
        break;
    }
    case 149793:
    {
        returnValue = F("Hommer Heide");
        break;
    }
    case 149794:
    {
        returnValue = F("Hommerdinger Str.");
        break;
    }
    case 149795:
    {
        returnValue = F("Hommericher Str.");
        break;
    }
    case 149796:
    {
        returnValue = F("Hommerichweg");
        break;
    }
    case 149797:
    {
        returnValue = F("Hommermühle");
        break;
    }
    case 149798:
    {
        returnValue = F("Hommersbergstr.");
        break;
    }
    case 149799:
    {
        returnValue = F("Hommerschen");
        break;
    }
    case 149800:
    {
        returnValue = F("Hommerstr.");
        break;
    }
    case 149801:
    {
        returnValue = F("Hommersumer Str.");
        break;
    }
    case 149802:
    {
        returnValue = F("Hommertshäuser Str.");
        break;
    }
    case 149803:
    {
        returnValue = F("Hommertshäuser Weg");
        break;
    }
    case 149804:
    {
        returnValue = F("Hommerweg");
        break;
    }
    case 149805:
    {
        returnValue = F("Hompesch-Geräumt");
        break;
    }
    case 149806:
    {
        returnValue = F("Hompeschbenden");
        break;
    }
    case 149807:
    {
        returnValue = F("Hompescher Str.");
        break;
    }
    case 149808:
    {
        returnValue = F("Hompeschstr.");
        break;
    }
    case 149809:
    {
        returnValue = F("Hompessenweg");
        break;
    }
    case 149810:
    {
        returnValue = F("Homrichstr.");
        break;
    }
    case 149811:
    {
        returnValue = F("Homscheid");
        break;
    }
    case 149812:
    {
        returnValue = F("Homscheidstr.");
        break;
    }
    case 149813:
    {
        returnValue = F("Homsweg");
        break;
    }
    case 149814:
    {
        returnValue = F("Honackerweg");
        break;
    }
    case 149815:
    {
        returnValue = F("Honauer Str.");
        break;
    }
    case 149816:
    {
        returnValue = F("Honauer Öschleweg");
        break;
    }
    case 149817:
    {
        returnValue = F("Honbergstr.");
        break;
    }
    case 149818:
    {
        returnValue = F("Honbrook");
        break;
    }
    case 149819:
    {
        returnValue = F("Hondingerweg");
        break;
    }
    case 149820:
    {
        returnValue = F("Hondschaftsweg");
        break;
    }
    case 149821:
    {
        returnValue = F("Hondschoote Platz");
        break;
    }
    case 149822:
    {
        returnValue = F("Hondschoote Str.");
        break;
    }
    case 149823:
    {
        returnValue = F("Honeburger Str.");
        break;
    }
    case 149824:
    {
        returnValue = F("Honeburger Weg");
        break;
    }
    case 149825:
    {
        returnValue = F("Honegger Steige");
        break;
    }
    case 149826:
    {
        returnValue = F("Honekamp");
        break;
    }
    case 149827:
    {
        returnValue = F("Honenberg");
        break;
    }
    case 149828:
    {
        returnValue = F("Honer Str.");
        break;
    }
    case 149829:
    {
        returnValue = F("Honerbergweg");
        break;
    }
    case 149830:
    {
        returnValue = F("Honerdingen");
        break;
    }
    case 149831:
    {
        returnValue = F("Honetanner Str.");
        break;
    }
    case 149832:
    {
        returnValue = F("Hongertweg");
        break;
    }
    case 149833:
    {
        returnValue = F("Hongsener Weg");
        break;
    }
    case 149834:
    {
        returnValue = F("Honhardter Str.");
        break;
    }
    case 149835:
    {
        returnValue = F("Honhorstweg");
        break;
    }
    case 149836:
    {
        returnValue = F("Honigacker");
        break;
    }
    case 149837:
    {
        returnValue = F("Honigbach");
        break;
    }
    case 149838:
    {
        returnValue = F("Honigbaumer Weg");
        break;
    }
    case 149839:
    {
        returnValue = F("Honigberg");
        break;
    }
    case 149840:
    {
        returnValue = F("Honigbergweg");
        break;
    }
    case 149841:
    {
        returnValue = F("Honigbienenweg");
        break;
    }
    case 149842:
    {
        returnValue = F("Honigbirnenweg");
        break;
    }
    case 149843:
    {
        returnValue = F("Honigfleth");
        break;
    }
    case 149844:
    {
        returnValue = F("Honiggarten");
        break;
    }
    case 149845:
    {
        returnValue = F("Honiggasse");
        break;
    }
    case 149846:
    {
        returnValue = F("Honiggraben");
        break;
    }
    case 149847:
    {
        returnValue = F("Honiggrasweg");
        break;
    }
    case 149848:
    {
        returnValue = F("Honiggrube");
        break;
    }
    case 149849:
    {
        returnValue = F("Honiggässel");
        break;
    }
    case 149850:
    {
        returnValue = F("Honiggäßchen");
        break;
    }
    case 149851:
    {
        returnValue = F("Honighecke");
        break;
    }
    case 149852:
    {
        returnValue = F("Honighofgasse");
        break;
    }
    case 149853:
    {
        returnValue = F("Honigkamp");
        break;
    }
    case 149854:
    {
        returnValue = F("Honigleite");
        break;
    }
    case 149855:
    {
        returnValue = F("Honigloch");
        break;
    }
    case 149856:
    {
        returnValue = F("Honigmannplatz");
        break;
    }
    case 149857:
    {
        returnValue = F("Honigmannstr.");
        break;
    }
    case 149858:
    {
        returnValue = F("Honigpatt");
        break;
    }
    case 149859:
    {
        returnValue = F("Honigrückweg");
        break;
    }
    case 149860:
    {
        returnValue = F("Honigsberg");
        break;
    }
    case 149861:
    {
        returnValue = F("Honigsteige");
        break;
    }
    case 149862:
    {
        returnValue = F("Honigstr.");
        break;
    }
    case 149863:
    {
        returnValue = F("Honigsträßle");
        break;
    }
    case 149864:
    {
        returnValue = F("Honigsäckelstr.");
        break;
    }
    case 149865:
    {
        returnValue = F("Honigtal-Hangweg");
        break;
    }
    case 149866:
    {
        returnValue = F("Honigweg");
        break;
    }
    case 149867:
    {
        returnValue = F("Honigäcker");
        break;
    }
    case 149868:
    {
        returnValue = F("Honingser Str.");
        break;
    }
    case 149869:
    {
        returnValue = F("Honingser Weg");
        break;
    }
    case 149870:
    {
        returnValue = F("Honkomper Weg");
        break;
    }
    case 149871:
    {
        returnValue = F("Honnefer Grenzweg");
        break;
    }
    case 149872:
    {
        returnValue = F("Honnefer Str.");
        break;
    }
    case 149873:
    {
        returnValue = F("Honnigpatt");
        break;
    }
    case 149874:
    {
        returnValue = F("Honoldstr.");
        break;
    }
    case 149875:
    {
        returnValue = F("Honoldweg");
        break;
    }
    case 149876:
    {
        returnValue = F("Honroder Weg");
        break;
    }
    case 149877:
    {
        returnValue = F("Honsbacher Str.");
        break;
    }
    case 149878:
    {
        returnValue = F("Honsberger Str.");
        break;
    }
    case 149879:
    {
        returnValue = F("Honsbronn");
        break;
    }
    case 149880:
    {
        returnValue = F("Honschaftsweg");
        break;
    }
    case 149881:
    {
        returnValue = F("Honscheid");
        break;
    }
    case 149882:
    {
        returnValue = F("Honsdorf");
        break;
    }
    case 149883:
    {
        returnValue = F("Honsel");
        break;
    }
    case 149884:
    {
        returnValue = F("Honselaersweg");
        break;
    }
    case 149885:
    {
        returnValue = F("Honselaerweg");
        break;
    }
    case 149886:
    {
        returnValue = F("Honseler Bruch");
        break;
    }
    case 149887:
    {
        returnValue = F("Honseler Steig");
        break;
    }
    case 149888:
    {
        returnValue = F("Honseler Str.");
        break;
    }
    case 149889:
    {
        returnValue = F("Honsellstr.");
        break;
    }
    case 149890:
    {
        returnValue = F("Honsgasse");
        break;
    }
    case 149891:
    {
        returnValue = F("Honsolgener Str.");
        break;
    }
    case 149892:
    {
        returnValue = F("Honstetter Str.");
        break;
    }
    case 149893:
    {
        returnValue = F("Honterusstr.");
        break;
    }
    case 149894:
    {
        returnValue = F("Hontheimer Str.");
        break;
    }
    case 149895:
    {
        returnValue = F("Hontheimerstr.");
        break;
    }
    case 149896:
    {
        returnValue = F("Honzrather Str.");
        break;
    }
    case 149897:
    {
        returnValue = F("Hoobelwäg");
        break;
    }
    case 149898:
    {
        returnValue = F("Hoock");
        break;
    }
    case 149899:
    {
        returnValue = F("Hoofiesen");
        break;
    }
    case 149900:
    {
        returnValue = F("Hoofstich");
        break;
    }
    case 149901:
    {
        returnValue = F("Hoog Warf");
        break;
    }
    case 149902:
    {
        returnValue = F("Hoog Weg");
        break;
    }
    case 149903:
    {
        returnValue = F("Hoog-Poelycker-Str.");
        break;
    }
    case 149904:
    {
        returnValue = F("Hooge Ackern");
        break;
    }
    case 149905:
    {
        returnValue = F("Hooge Feld");
        break;
    }
    case 149906:
    {
        returnValue = F("Hooge Heide");
        break;
    }
    case 149907:
    {
        returnValue = F("Hooge Hirs");
        break;
    }
    case 149908:
    {
        returnValue = F("Hooge Hurdt");
        break;
    }
    case 149909:
    {
        returnValue = F("Hooge Hörn");
        break;
    }
    case 149910:
    {
        returnValue = F("Hooge Kamp");
        break;
    }
    case 149911:
    {
        returnValue = F("Hooge Land");
        break;
    }
    case 149912:
    {
        returnValue = F("Hooge Liedt");
        break;
    }
    case 149913:
    {
        returnValue = F("Hooge Sand");
        break;
    }
    case 149914:
    {
        returnValue = F("Hooge Süringe");
        break;
    }
    case 149915:
    {
        returnValue = F("Hooge Trift");
        break;
    }
    case 149916:
    {
        returnValue = F("Hooge Weg");
        break;
    }
    case 149917:
    {
        returnValue = F("Hoogedieksweg");
        break;
    }
    case 149918:
    {
        returnValue = F("Hoogefeldstr.");
        break;
    }
    case 149919:
    {
        returnValue = F("Hoogekamp");
        break;
    }
    case 149920:
    {
        returnValue = F("Hoogeland");
        break;
    }
    case 149921:
    {
        returnValue = F("Hoogen");
        break;
    }
    case 149922:
    {
        returnValue = F("Hoogen Door");
        break;
    }
    case 149923:
    {
        returnValue = F("Hoogen Esch");
        break;
    }
    case 149924:
    {
        returnValue = F("Hoogen Gorden");
        break;
    }
    case 149925:
    {
        returnValue = F("Hoogen Wegg");
        break;
    }
    case 149926:
    {
        returnValue = F("Hoogendamm");
        break;
    }
    case 149927:
    {
        returnValue = F("Hoogenhof");
        break;
    }
    case 149928:
    {
        returnValue = F("Hoogenkamp");
        break;
    }
    case 149929:
    {
        returnValue = F("Hoogenweg");
        break;
    }
    case 149930:
    {
        returnValue = F("Hooger Fähre");
        break;
    }
    case 149931:
    {
        returnValue = F("Hooger Geest");
        break;
    }
    case 149932:
    {
        returnValue = F("Hooger Str.");
        break;
    }
    case 149933:
    {
        returnValue = F("Hooger Wal");
        break;
    }
    case 149934:
    {
        returnValue = F("Hooger Weg");
        break;
    }
    case 149935:
    {
        returnValue = F("Hoogestieg");
        break;
    }
    case 149936:
    {
        returnValue = F("Hoogeweg");
        break;
    }
    case 149937:
    {
        returnValue = F("Hoogezand-Sappemeer-Ring");
        break;
    }
    case 149938:
    {
        returnValue = F("Hooghass");
        break;
    }
    case 149939:
    {
        returnValue = F("Hooghe Weg");
        break;
    }
    case 149940:
    {
        returnValue = F("Hoogsteder Str.");
        break;
    }
    case 149941:
    {
        returnValue = F("Hook");
        break;
    }
    case 149942:
    {
        returnValue = F("Hookeler Weg");
        break;
    }
    case 149943:
    {
        returnValue = F("Hooksieler Str.");
        break;
    }
    case 149944:
    {
        returnValue = F("Hookstr.");
        break;
    }
    case 149945:
    {
        returnValue = F("Hooksweg");
        break;
    }
    case 149946:
    {
        returnValue = F("Hookswieke");
        break;
    }
    case 149947:
    {
        returnValue = F("Hookweg");
        break;
    }
    case 149948:
    {
        returnValue = F("Hoolmannsweg");
        break;
    }
    case 149949:
    {
        returnValue = F("Hoopener Str.");
        break;
    }
    case 149950:
    {
        returnValue = F("Hoopenweg");
        break;
    }
    case 149951:
    {
        returnValue = F("Hoopsfeld");
        break;
    }
    case 149952:
    {
        returnValue = F("Hoopskamp");
        break;
    }
    case 149953:
    {
        returnValue = F("Hoopstr.");
        break;
    }
    case 149954:
    {
        returnValue = F("Hooptalstr.");
        break;
    }
    case 149955:
    {
        returnValue = F("Hoopweg");
        break;
    }
    case 149956:
    {
        returnValue = F("Hoorbüddel Wech");
        break;
    }
    case 149957:
    {
        returnValue = F("Hoormanns Wehr");
        break;
    }
    case 149958:
    {
        returnValue = F("Hoornsfeld");
        break;
    }
    case 149959:
    {
        returnValue = F("Hoorwaldstr.");
        break;
    }
    case 149960:
    {
        returnValue = F("Hoorwasen");
        break;
    }
    case 149961:
    {
        returnValue = F("Hoorweiherstr.");
        break;
    }
    case 149962:
    {
        returnValue = F("Hopbachstr.");
        break;
    }
    case 149963:
    {
        returnValue = F("Hopelser Weg");
        break;
    }
    case 149964:
    {
        returnValue = F("Hopen");
        break;
    }
    case 149965:
    {
        returnValue = F("Hopener Str.");
        break;
    }
    case 149966:
    {
        returnValue = F("Hopener Weg");
        break;
    }
    case 149967:
    {
        returnValue = F("Hopenkamp");
        break;
    }
    case 149968:
    {
        returnValue = F("Hopenweg");
        break;
    }
    case 149969:
    {
        returnValue = F("Hoper Str.");
        break;
    }
    case 149970:
    {
        returnValue = F("Hoper Weg");
        break;
    }
    case 149971:
    {
        returnValue = F("Hopestr.");
        break;
    }
    case 149972:
    {
        returnValue = F("Hopfacher Str.");
        break;
    }
    case 149973:
    {
        returnValue = F("Hopfau");
        break;
    }
    case 149974:
    {
        returnValue = F("Hopfauer Str.");
        break;
    }
    case 149975:
    {
        returnValue = F("Hopfauer Weg");
        break;
    }
    case 149976:
    {
        returnValue = F("Hopfauweg");
        break;
    }
    case 149977:
    {
        returnValue = F("Hopfberg");
        break;
    }
    case 149978:
    {
        returnValue = F("Hopfelder Str.");
        break;
    }
    case 149979:
    {
        returnValue = F("Hopfen");
        break;
    }
    case 149980:
    {
        returnValue = F("Hopfenacker");
        break;
    }
    case 149981:
    {
        returnValue = F("Hopfenacker-Schneise");
        break;
    }
    case 149982:
    {
        returnValue = F("Hopfenackerweg");
        break;
    }
    case 149983:
    {
        returnValue = F("Hopfenbachstr.");
        break;
    }
    case 149984:
    {
        returnValue = F("Hopfenbachweg");
        break;
    }
    case 149985:
    {
        returnValue = F("Hopfenberg");
        break;
    }
    case 149986:
    {
        returnValue = F("Hopfenberger Weg");
        break;
    }
    case 149987:
    {
        returnValue = F("Hopfenbergstr.");
        break;
    }
    case 149988:
    {
        returnValue = F("Hopfenbergweg");
        break;
    }
    case 149989:
    {
        returnValue = F("Hopfenbleek");
        break;
    }
    case 149990:
    {
        returnValue = F("Hopfenbrede");
        break;
    }
    case 149991:
    {
        returnValue = F("Hopfenbreite");
        break;
    }
    case 149992:
    {
        returnValue = F("Hopfenbruch");
        break;
    }
    case 149993:
    {
        returnValue = F("Hopfenbruchweg");
        break;
    }
    case 149994:
    {
        returnValue = F("Hopfenbruchwiese");
        break;
    }
    case 149995:
    {
        returnValue = F("Hopfenburgstr.");
        break;
    }
    case 149996:
    {
        returnValue = F("Hopfenbänke");
        break;
    }
    case 149997:
    {
        returnValue = F("Hopfenbühl");
        break;
    }
    case 149998:
    {
        returnValue = F("Hopfendamm");
        break;
    }
    case 149999:
    {
        returnValue = F("Hopfenecke");
        break;
    }
    case 150000:
    {
        returnValue = F("Hopfener Str.");
        break;
    }
    case 150001:
    {
        returnValue = F("Hopfener Weg");
        break;
    }
    case 150002:
    {
        returnValue = F("Hopfenerstr.");
        break;
    }
    case 150003:
    {
        returnValue = F("Hopfenfeld");
        break;
    }
    case 150004:
    {
        returnValue = F("Hopfenfeldstr.");
        break;
    }
    case 150005:
    {
        returnValue = F("Hopfengang");
        break;
    }
    case 150006:
    {
        returnValue = F("Hopfengarten");
        break;
    }
    case 150007:
    {
        returnValue = F("Hopfengartenstr.");
        break;
    }
    case 150008:
    {
        returnValue = F("Hopfengartenweg");
        break;
    }
    case 150009:
    {
        returnValue = F("Hopfengasse");
        break;
    }
    case 150010:
    {
        returnValue = F("Hopfengrund");
        break;
    }
    case 150011:
    {
        returnValue = F("Hopfengut");
        break;
    }
    case 150012:
    {
        returnValue = F("Hopfengärten");
        break;
    }
    case 150013:
    {
        returnValue = F("Hopfengärtle");
        break;
    }
    case 150014:
    {
        returnValue = F("Hopfengärtnerreihe");
        break;
    }
    }
    return returnValue;
}
