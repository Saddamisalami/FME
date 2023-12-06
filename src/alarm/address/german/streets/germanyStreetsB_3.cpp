#include <Arduino.h>

#include "variables.h"

String getGermanyStreetNameB3(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 60006:
    {
        returnValue = F("Bollener Landstr.");
        break;
    }
    case 60007:
    {
        returnValue = F("Bollengrubweg");
        break;
    }
    case 60008:
    {
        returnValue = F("Bollengässle");
        break;
    }
    case 60009:
    {
        returnValue = F("Bollenhagener Str.");
        break;
    }
    case 60010:
    {
        returnValue = F("Bollenheide");
        break;
    }
    case 60011:
    {
        returnValue = F("Bollenholz");
        break;
    }
    case 60012:
    {
        returnValue = F("Bollenhut-Sommerberg-Weg");
        break;
    }
    case 60013:
    {
        returnValue = F("Bollenhut-Sommerberg-Weg / Mittlerer Katzenlochweg");
        break;
    }
    case 60014:
    {
        returnValue = F("Bollenhut-Sommerberg-Weg / Oberer Kostbachweg");
        break;
    }
    case 60015:
    {
        returnValue = F("Bollenhut-Sommerberg-Weg / Rotsalstr.");
        break;
    }
    case 60016:
    {
        returnValue = F("Bollenkamp");
        break;
    }
    case 60017:
    {
        returnValue = F("Bollenmühle");
        break;
    }
    case 60018:
    {
        returnValue = F("Bollenrathstr.");
        break;
    }
    case 60019:
    {
        returnValue = F("Bollenschuppen");
        break;
    }
    case 60020:
    {
        returnValue = F("Bollensdorf");
        break;
    }
    case 60021:
    {
        returnValue = F("Bollensdorfer Allee");
        break;
    }
    case 60022:
    {
        returnValue = F("Bollensdorfer Eck");
        break;
    }
    case 60023:
    {
        returnValue = F("Bollensdorfer Weg");
        break;
    }
    case 60024:
    {
        returnValue = F("Bollenser Kamp");
        break;
    }
    case 60025:
    {
        returnValue = F("Bollenser Str.");
        break;
    }
    case 60026:
    {
        returnValue = F("Bollenser Weg");
        break;
    }
    case 60027:
    {
        returnValue = F("Bollensgasse");
        break;
    }
    case 60028:
    {
        returnValue = F("Bollenskopp");
        break;
    }
    case 60029:
    {
        returnValue = F("Bollenstr.");
        break;
    }
    case 60030:
    {
        returnValue = F("Bollenwaldstr.");
        break;
    }
    case 60031:
    {
        returnValue = F("Bollenweg");
        break;
    }
    case 60032:
    {
        returnValue = F("Bollenäckerweg");
        break;
    }
    case 60033:
    {
        returnValue = F("Boller");
        break;
    }
    case 60034:
    {
        returnValue = F("Boller Höhenweg");
        break;
    }
    case 60035:
    {
        returnValue = F("Boller Moorweg");
        break;
    }
    case 60036:
    {
        returnValue = F("Boller Steige");
        break;
    }
    case 60037:
    {
        returnValue = F("Boller Str.");
        break;
    }
    case 60038:
    {
        returnValue = F("Bollerbergstr.");
        break;
    }
    case 60039:
    {
        returnValue = F("Bollerbornstr.");
        break;
    }
    case 60040:
    {
        returnValue = F("Bollergasse");
        break;
    }
    case 60041:
    {
        returnValue = F("Bollergeist");
        break;
    }
    case 60042:
    {
        returnValue = F("Bollersdorfer Höhe");
        break;
    }
    case 60043:
    {
        returnValue = F("Bollersgasse");
        break;
    }
    case 60044:
    {
        returnValue = F("Bollersheeg");
        break;
    }
    case 60045:
    {
        returnValue = F("Bollershof");
        break;
    }
    case 60046:
    {
        returnValue = F("Bollershofstr.");
        break;
    }
    case 60047:
    {
        returnValue = F("Bollertstr.");
        break;
    }
    case 60048:
    {
        returnValue = F("Bolleweg");
        break;
    }
    case 60049:
    {
        returnValue = F("Bolleyfeldweg");
        break;
    }
    case 60050:
    {
        returnValue = F("Bolleystr.");
        break;
    }
    case 60051:
    {
        returnValue = F("Bollgarten");
        break;
    }
    case 60052:
    {
        returnValue = F("Bollhasen");
        break;
    }
    case 60053:
    {
        returnValue = F("Bollhasental");
        break;
    }
    case 60054:
    {
        returnValue = F("Bollheide");
        break;
    }
    case 60055:
    {
        returnValue = F("Bollheimer Str.");
        break;
    }
    case 60056:
    {
        returnValue = F("Bollhorststr.");
        break;
    }
    case 60057:
    {
        returnValue = F("Bollhuser Weg");
        break;
    }
    case 60058:
    {
        returnValue = F("Bollhusweg");
        break;
    }
    case 60059:
    {
        returnValue = F("Bollhäger Str.");
        break;
    }
    case 60060:
    {
        returnValue = F("Bollhäger Weg");
        break;
    }
    case 60061:
    {
        returnValue = F("Bollhöferstr.");
        break;
    }
    case 60062:
    {
        returnValue = F("Bollieth");
        break;
    }
    case 60063:
    {
        returnValue = F("Bolliggasse");
        break;
    }
    case 60064:
    {
        returnValue = F("Bolligstr.");
        break;
    }
    case 60065:
    {
        returnValue = F("Bollinger Esch");
        break;
    }
    case 60066:
    {
        returnValue = F("Bollinger Hövel");
        break;
    }
    case 60067:
    {
        returnValue = F("Bollinger Kamp");
        break;
    }
    case 60068:
    {
        returnValue = F("Bollinger Ring");
        break;
    }
    case 60069:
    {
        returnValue = F("Bollinger Str.");
        break;
    }
    case 60070:
    {
        returnValue = F("Bollingerstr.");
        break;
    }
    case 60071:
    {
        returnValue = F("Bollinghausen");
        break;
    }
    case 60072:
    {
        returnValue = F("Bollinghauser Weg");
        break;
    }
    case 60073:
    {
        returnValue = F("Bollingstedter Str.");
        break;
    }
    case 60074:
    {
        returnValue = F("Bollingstedter Weg");
        break;
    }
    case 60075:
    {
        returnValue = F("Bollkamp");
        break;
    }
    case 60076:
    {
        returnValue = F("Bollmann Str.");
        break;
    }
    case 60077:
    {
        returnValue = F("Bollmannallee");
        break;
    }
    case 60078:
    {
        returnValue = F("Bollmannsdamm");
        break;
    }
    case 60079:
    {
        returnValue = F("Bollmannshausener Weg");
        break;
    }
    case 60080:
    {
        returnValue = F("Bollmannshorster Str.");
        break;
    }
    case 60081:
    {
        returnValue = F("Bollmannsruh");
        break;
    }
    case 60082:
    {
        returnValue = F("Bollmannstr.");
        break;
    }
    case 60083:
    {
        returnValue = F("Bollmerweg");
        break;
    }
    case 60084:
    {
        returnValue = F("Bollmoor");
        break;
    }
    case 60085:
    {
        returnValue = F("Bollmoorweg");
        break;
    }
    case 60086:
    {
        returnValue = F("Bollnbach");
        break;
    }
    case 60087:
    {
        returnValue = F("Bollnbacher Str.");
        break;
    }
    case 60088:
    {
        returnValue = F("Bollrader Damm");
        break;
    }
    case 60089:
    {
        returnValue = F("Bollrader Damm neu");
        break;
    }
    case 60090:
    {
        returnValue = F("Bollriede");
        break;
    }
    case 60091:
    {
        returnValue = F("Bollsgäßchen");
        break;
    }
    case 60092:
    {
        returnValue = F("Bollstedter Gasse");
        break;
    }
    case 60093:
    {
        returnValue = F("Bollstedter Landstr.");
        break;
    }
    case 60094:
    {
        returnValue = F("Bollstedter Weg");
        break;
    }
    case 60095:
    {
        returnValue = F("Bollstetterstr.");
        break;
    }
    case 60096:
    {
        returnValue = F("Bollstr.");
        break;
    }
    case 60097:
    {
        returnValue = F("Bollstädter Str.");
        break;
    }
    case 60098:
    {
        returnValue = F("Bollsweg");
        break;
    }
    case 60099:
    {
        returnValue = F("Bollwarfsweg");
        break;
    }
    case 60100:
    {
        returnValue = F("Bollweg");
        break;
    }
    case 60101:
    {
        returnValue = F("Bollwerder");
        break;
    }
    case 60102:
    {
        returnValue = F("Bollwerk");
        break;
    }
    case 60103:
    {
        returnValue = F("Bollwerkgasse");
        break;
    }
    case 60104:
    {
        returnValue = F("Bollwerkstege");
        break;
    }
    case 60105:
    {
        returnValue = F("Bollwerkstr.");
        break;
    }
    case 60106:
    {
        returnValue = F("Bollwerksweg");
        break;
    }
    case 60107:
    {
        returnValue = F("Bollwerksweide");
        break;
    }
    case 60108:
    {
        returnValue = F("Bolmke");
        break;
    }
    case 60109:
    {
        returnValue = F("Bolsgang");
        break;
    }
    case 60110:
    {
        returnValue = F("Bolsgasse");
        break;
    }
    case 60111:
    {
        returnValue = F("Bolsterhof");
        break;
    }
    case 60112:
    {
        returnValue = F("Bolsternanger Bach");
        break;
    }
    case 60113:
    {
        returnValue = F("Bolstr.");
        break;
    }
    case 60114:
    {
        returnValue = F("Bolteich");
        break;
    }
    case 60115:
    {
        returnValue = F("Boltekamp");
        break;
    }
    case 60116:
    {
        returnValue = F("Bolten Brink");
        break;
    }
    case 60117:
    {
        returnValue = F("Boltenbreite");
        break;
    }
    case 60118:
    {
        returnValue = F("Boltenburg");
        break;
    }
    case 60119:
    {
        returnValue = F("Boltenburgweg");
        break;
    }
    case 60120:
    {
        returnValue = F("Boltenhagen");
        break;
    }
    case 60121:
    {
        returnValue = F("Boltenhagener Str.");
        break;
    }
    case 60122:
    {
        returnValue = F("Boltenhang");
        break;
    }
    case 60123:
    {
        returnValue = F("Boltenhof");
        break;
    }
    case 60124:
    {
        returnValue = F("Boltenhofstr.");
        break;
    }
    case 60125:
    {
        returnValue = F("Boltenhornstr.");
        break;
    }
    case 60126:
    {
        returnValue = F("Boltenhäger Str.");
        break;
    }
    case 60127:
    {
        returnValue = F("Boltenhäger Weg");
        break;
    }
    case 60128:
    {
        returnValue = F("Boltenkamp");
        break;
    }
    case 60129:
    {
        returnValue = F("Boltenschütt");
        break;
    }
    case 60130:
    {
        returnValue = F("Boltentorsgang");
        break;
    }
    case 60131:
    {
        returnValue = F("Boltentorstr.");
        break;
    }
    case 60132:
    {
        returnValue = F("Boltenweg");
        break;
    }
    case 60133:
    {
        returnValue = F("Bolter Schleuse");
        break;
    }
    case 60134:
    {
        returnValue = F("Boltersener Str.");
        break;
    }
    case 60135:
    {
        returnValue = F("Boltersener Weg");
        break;
    }
    case 60136:
    {
        returnValue = F("Bolterser Str.");
        break;
    }
    case 60137:
    {
        returnValue = F("Bolterser Weg");
        break;
    }
    case 60138:
    {
        returnValue = F("Bolterstr.");
        break;
    }
    case 60139:
    {
        returnValue = F("Boltesch Kuhl");
        break;
    }
    case 60140:
    {
        returnValue = F("Boltessemstr.");
        break;
    }
    case 60141:
    {
        returnValue = F("Bolteweg");
        break;
    }
    case 60142:
    {
        returnValue = F("Bolthaus");
        break;
    }
    case 60143:
    {
        returnValue = F("Bolthauser Weg");
        break;
    }
    case 60144:
    {
        returnValue = F("Boltisch Jääsje");
        break;
    }
    case 60145:
    {
        returnValue = F("Boltoft");
        break;
    }
    case 60146:
    {
        returnValue = F("Boltwisch");
        break;
    }
    case 60147:
    {
        returnValue = F("Boltzmannstr.");
        break;
    }
    case 60148:
    {
        returnValue = F("Bolweg");
        break;
    }
    case 60149:
    {
        returnValue = F("Bolwinsweg");
        break;
    }
    case 60150:
    {
        returnValue = F("Bolystr.");
        break;
    }
    case 60151:
    {
        returnValue = F("Bolzbergallee");
        break;
    }
    case 60152:
    {
        returnValue = F("Bolzbergweg");
        break;
    }
    case 60153:
    {
        returnValue = F("Bolzbrünneleweg");
        break;
    }
    case 60154:
    {
        returnValue = F("Bolzen-Weg");
        break;
    }
    case 60155:
    {
        returnValue = F("Bolzenbach");
        break;
    }
    case 60156:
    {
        returnValue = F("Bolzengasse");
        break;
    }
    case 60157:
    {
        returnValue = F("Bolzengrabenweg");
        break;
    }
    case 60158:
    {
        returnValue = F("Bolzenmarkt");
        break;
    }
    case 60159:
    {
        returnValue = F("Bolzensteig");
        break;
    }
    case 60160:
    {
        returnValue = F("Bolzenstr.");
        break;
    }
    case 60161:
    {
        returnValue = F("Bolzenweiler");
        break;
    }
    case 60162:
    {
        returnValue = F("Bolzerbahn");
        break;
    }
    case 60163:
    {
        returnValue = F("Bolzeschachtstr.");
        break;
    }
    case 60164:
    {
        returnValue = F("Bolzhauser Weg");
        break;
    }
    case 60165:
    {
        returnValue = F("Bolzhurststr.");
        break;
    }
    case 60166:
    {
        returnValue = F("Bolzhäuser Str.");
        break;
    }
    case 60167:
    {
        returnValue = F("Bolzplatz");
        break;
    }
    case 60168:
    {
        returnValue = F("Bolzplatz Freudenricht");
        break;
    }
    case 60169:
    {
        returnValue = F("Bolzstr.");
        break;
    }
    case 60170:
    {
        returnValue = F("Bolzumer Busch");
        break;
    }
    case 60171:
    {
        returnValue = F("Bolzumer Str.");
        break;
    }
    case 60172:
    {
        returnValue = F("Bolzumer Tor");
        break;
    }
    case 60173:
    {
        returnValue = F("Bolzumer Wiese");
        break;
    }
    case 60174:
    {
        returnValue = F("Bolzwanger Str.");
        break;
    }
    case 60175:
    {
        returnValue = F("Bolzweg");
        break;
    }
    case 60176:
    {
        returnValue = F("Boländers Wiese");
        break;
    }
    case 60177:
    {
        returnValue = F("Bomannstr.");
        break;
    }
    case 60178:
    {
        returnValue = F("Bomannsweg");
        break;
    }
    case 60179:
    {
        returnValue = F("Bombach");
        break;
    }
    case 60180:
    {
        returnValue = F("Bombacher Str.");
        break;
    }
    case 60181:
    {
        returnValue = F("Bombachweg");
        break;
    }
    case 60182:
    {
        returnValue = F("Bombeck");
        break;
    }
    case 60183:
    {
        returnValue = F("Bombenbreite");
        break;
    }
    case 60184:
    {
        returnValue = F("Bombenlochweg");
        break;
    }
    case 60185:
    {
        returnValue = F("Bomberg");
        break;
    }
    case 60186:
    {
        returnValue = F("Bombergallee");
        break;
    }
    case 60187:
    {
        returnValue = F("Bomberger Weg");
        break;
    }
    case 60188:
    {
        returnValue = F("Bombergstr.");
        break;
    }
    case 60189:
    {
        returnValue = F("Bombergweg");
        break;
    }
    case 60190:
    {
        returnValue = F("Bombogener Str.");
        break;
    }
    case 60191:
    {
        returnValue = F("Bomerfeld");
        break;
    }
    case 60192:
    {
        returnValue = F("Bomerich");
        break;
    }
    case 60193:
    {
        returnValue = F("Bomers Kamp");
        break;
    }
    case 60194:
    {
        returnValue = F("Bomgardenweg");
        break;
    }
    case 60195:
    {
        returnValue = F("Bomhardstr.");
        break;
    }
    case 60196:
    {
        returnValue = F("Bomhardweg");
        break;
    }
    case 60197:
    {
        returnValue = F("Bomhof");
        break;
    }
    case 60198:
    {
        returnValue = F("Bomhofer Weg");
        break;
    }
    case 60199:
    {
        returnValue = F("Bomhoffstr.");
        break;
    }
    case 60200:
    {
        returnValue = F("Bomiger Str.");
        break;
    }
    case 60201:
    {
        returnValue = F("Bomker Str.");
        break;
    }
    case 60202:
    {
        returnValue = F("Bomlitzer Str.");
        break;
    }
    case 60203:
    {
        returnValue = F("Bomme");
        break;
    }
    case 60204:
    {
        returnValue = F("Bommel");
        break;
    }
    case 60205:
    {
        returnValue = F("Bommelser Str.");
        break;
    }
    case 60206:
    {
        returnValue = F("Bommerhaus");
        break;
    }
    case 60207:
    {
        returnValue = F("Bommersbachstr.");
        break;
    }
    case 60208:
    {
        returnValue = F("Bommersbachweg");
        break;
    }
    case 60209:
    {
        returnValue = F("Bommersfeld");
        break;
    }
    case 60210:
    {
        returnValue = F("Bommersheimer Weg");
        break;
    }
    case 60211:
    {
        returnValue = F("Bommershöfe");
        break;
    }
    case 60212:
    {
        returnValue = F("Bommershöfer Weg");
        break;
    }
    case 60213:
    {
        returnValue = F("Bommersweg");
        break;
    }
    case 60214:
    {
        returnValue = F("Bommert");
        break;
    }
    case 60215:
    {
        returnValue = F("Bommertgasse");
        break;
    }
    case 60216:
    {
        returnValue = F("Bommerweg");
        break;
    }
    case 60217:
    {
        returnValue = F("Bommesweg");
        break;
    }
    case 60218:
    {
        returnValue = F("Bommhof");
        break;
    }
    case 60219:
    {
        returnValue = F("Bommhutsweg");
        break;
    }
    case 60220:
    {
        returnValue = F("Bommichring");
        break;
    }
    case 60221:
    {
        returnValue = F("Bommigsweg");
        break;
    }
    case 60222:
    {
        returnValue = F("Bomsdorfer Str.");
        break;
    }
    case 60223:
    {
        returnValue = F("Bomsdorfer Weg / Weg auf Göhlen");
        break;
    }
    case 60224:
    {
        returnValue = F("Bomser Weg");
        break;
    }
    case 60225:
    {
        returnValue = F("Bomsgasse");
        break;
    }
    case 60226:
    {
        returnValue = F("Bomshofstr.");
        break;
    }
    case 60227:
    {
        returnValue = F("Bomstedt");
        break;
    }
    case 60228:
    {
        returnValue = F("Bomstr.");
        break;
    }
    case 60229:
    {
        returnValue = F("Bomsweg");
        break;
    }
    case 60230:
    {
        returnValue = F("Bomtoft");
        break;
    }
    case 60231:
    {
        returnValue = F("Bomwiese");
        break;
    }
    case 60232:
    {
        returnValue = F("Bon");
        break;
    }
    case 60233:
    {
        returnValue = F("Bonacker");
        break;
    }
    case 60234:
    {
        returnValue = F("Bonackerweg");
        break;
    }
    case 60235:
    {
        returnValue = F("Bonaforther Schleuse");
        break;
    }
    case 60236:
    {
        returnValue = F("Bonaforther Str.");
        break;
    }
    case 60237:
    {
        returnValue = F("Bonalinostr.");
        break;
    }
    case 60238:
    {
        returnValue = F("Bonameser Str.");
        break;
    }
    case 60239:
    {
        returnValue = F("Bonatistr.");
        break;
    }
    case 60240:
    {
        returnValue = F("Bonatplatz");
        break;
    }
    case 60241:
    {
        returnValue = F("Bonatzweg");
        break;
    }
    case 60242:
    {
        returnValue = F("Bonauer Siedlung");
        break;
    }
    case 60243:
    {
        returnValue = F("Bonauer Str.");
        break;
    }
    case 60244:
    {
        returnValue = F("Bonauer Weg");
        break;
    }
    case 60245:
    {
        returnValue = F("Bonaustr.");
        break;
    }
    case 60246:
    {
        returnValue = F("Bonauweg");
        break;
    }
    case 60247:
    {
        returnValue = F("Bonaventura-Hauser-Str.");
        break;
    }
    case 60248:
    {
        returnValue = F("Bonavigo-Str.");
        break;
    }
    case 60249:
    {
        returnValue = F("Bonbadener Str.");
        break;
    }
    case 60250:
    {
        returnValue = F("Bonchamper Str.");
        break;
    }
    case 60251:
    {
        returnValue = F("Bondammsweg");
        break;
    }
    case 60252:
    {
        returnValue = F("Bondebrück");
        break;
    }
    case 60253:
    {
        returnValue = F("Bondelstr.");
        break;
    }
    case 60254:
    {
        returnValue = F("Bondestr.");
        break;
    }
    case 60255:
    {
        returnValue = F("Bondlring");
        break;
    }
    case 60256:
    {
        returnValue = F("Bondorf");
        break;
    }
    case 60257:
    {
        returnValue = F("Bondorfer Grenzweg");
        break;
    }
    case 60258:
    {
        returnValue = F("Bondorfer Str.");
        break;
    }
    case 60259:
    {
        returnValue = F("Bondorfer Weg");
        break;
    }
    case 60260:
    {
        returnValue = F("Bondoufle-Weg");
        break;
    }
    case 60261:
    {
        returnValue = F("Bondues Weg");
        break;
    }
    case 60262:
    {
        returnValue = F("Bonefelder Höhe");
        break;
    }
    case 60263:
    {
        returnValue = F("Bonefelder Str.");
        break;
    }
    case 60264:
    {
        returnValue = F("Boneforth");
        break;
    }
    case 60265:
    {
        returnValue = F("Bonekamp");
        break;
    }
    case 60266:
    {
        returnValue = F("Bonekamper Str.");
        break;
    }
    case 60267:
    {
        returnValue = F("Bonekampsheide");
        break;
    }
    case 60268:
    {
        returnValue = F("Bonekampstr.");
        break;
    }
    case 60269:
    {
        returnValue = F("Bonenburger Str.");
        break;
    }
    case 60270:
    {
        returnValue = F("Bonenkamp");
        break;
    }
    case 60271:
    {
        returnValue = F("Bonerzstr.");
        break;
    }
    case 60272:
    {
        returnValue = F("Bonesbrückche");
        break;
    }
    case 60273:
    {
        returnValue = F("Bonescher Weg");
        break;
    }
    case 60274:
    {
        returnValue = F("Bonesender Str.");
        break;
    }
    case 60275:
    {
        returnValue = F("Boneser Str.");
        break;
    }
    case 60276:
    {
        returnValue = F("Bonetweg");
        break;
    }
    case 60277:
    {
        returnValue = F("Bonfelder Str.");
        break;
    }
    case 60278:
    {
        returnValue = F("Bong");
        break;
    }
    case 60279:
    {
        returnValue = F("Bongard");
        break;
    }
    case 60280:
    {
        returnValue = F("Bongard-und-Lind-Str.");
        break;
    }
    case 60281:
    {
        returnValue = F("Bongarder Hof");
        break;
    }
    case 60282:
    {
        returnValue = F("Bongarder Str.");
        break;
    }
    case 60283:
    {
        returnValue = F("Bongardgasse");
        break;
    }
    case 60284:
    {
        returnValue = F("Bongardstr.");
        break;
    }
    case 60285:
    {
        returnValue = F("Bongarten");
        break;
    }
    case 60286:
    {
        returnValue = F("Bongartsgasse");
        break;
    }
    case 60287:
    {
        returnValue = F("Bongartshof");
        break;
    }
    case 60288:
    {
        returnValue = F("Bongartstr.");
        break;
    }
    case 60289:
    {
        returnValue = F("Bongartzgäßchen");
        break;
    }
    case 60290:
    {
        returnValue = F("Bongartzstr.");
        break;
    }
    case 60291:
    {
        returnValue = F("Bongarzsteg");
        break;
    }
    case 60292:
    {
        returnValue = F("Bongenbergstr.");
        break;
    }
    case 60293:
    {
        returnValue = F("Bongenhofweg");
        break;
    }
    case 60294:
    {
        returnValue = F("Bongersweg");
        break;
    }
    case 60295:
    {
        returnValue = F("Bongert");
        break;
    }
    case 60296:
    {
        returnValue = F("Bongertstr.");
        break;
    }
    case 60297:
    {
        returnValue = F("Bongertwasen");
        break;
    }
    case 60298:
    {
        returnValue = F("Bongertweg");
        break;
    }
    case 60299:
    {
        returnValue = F("Bonhagenweg");
        break;
    }
    case 60300:
    {
        returnValue = F("Bonhalde");
        break;
    }
    case 60301:
    {
        returnValue = F("Bonhausen");
        break;
    }
    case 60302:
    {
        returnValue = F("Bonhoeffer Str.");
        break;
    }
    case 60303:
    {
        returnValue = F("Bonhoeffer Weg");
        break;
    }
    case 60304:
    {
        returnValue = F("Bonhoeffer-Platz");
        break;
    }
    case 60305:
    {
        returnValue = F("Bonhoeffer-Str.");
        break;
    }
    case 60306:
    {
        returnValue = F("Bonhoeffer-Weg");
        break;
    }
    case 60307:
    {
        returnValue = F("Bonhoefferplatz");
        break;
    }
    case 60308:
    {
        returnValue = F("Bonhoefferring");
        break;
    }
    case 60309:
    {
        returnValue = F("Bonhoefferstr.");
        break;
    }
    case 60310:
    {
        returnValue = F("Bonhoefferweg");
        break;
    }
    case 60311:
    {
        returnValue = F("Bonhof");
        break;
    }
    case 60312:
    {
        returnValue = F("Bonhofer Str.");
        break;
    }
    case 60313:
    {
        returnValue = F("Bonholz");
        break;
    }
    case 60314:
    {
        returnValue = F("Bonholzstr.");
        break;
    }
    case 60315:
    {
        returnValue = F("Bonholzweg");
        break;
    }
    case 60316:
    {
        returnValue = F("Bonhöffer Str.");
        break;
    }
    case 60317:
    {
        returnValue = F("Bonifaciusstr.");
        break;
    }
    case 60318:
    {
        returnValue = F("Bonifatiiuspfad X12");
        break;
    }
    case 60319:
    {
        returnValue = F("Bonifatius-Wimmer-Str.");
        break;
    }
    case 60320:
    {
        returnValue = F("Bonifatiusgasse");
        break;
    }
    case 60321:
    {
        returnValue = F("Bonifatiuskirchhof");
        break;
    }
    case 60322:
    {
        returnValue = F("Bonifatiuspfad X12");
        break;
    }
    case 60323:
    {
        returnValue = F("Bonifatiusplatz");
        break;
    }
    case 60324:
    {
        returnValue = F("Bonifatiusring");
        break;
    }
    case 60325:
    {
        returnValue = F("Bonifatiusschneise");
        break;
    }
    case 60326:
    {
        returnValue = F("Bonifatiusstr.");
        break;
    }
    case 60327:
    {
        returnValue = F("Bonifatiusweg");
        break;
    }
    case 60328:
    {
        returnValue = F("Bonifaz-Huber-Str.");
        break;
    }
    case 60329:
    {
        returnValue = F("Bonifaz-Kömm-Str.");
        break;
    }
    case 60330:
    {
        returnValue = F("Bonifaz-Locher-Weg");
        break;
    }
    case 60331:
    {
        returnValue = F("Bonifaz-Rauch-Str.");
        break;
    }
    case 60332:
    {
        returnValue = F("Bonifaz-Solf-Str.");
        break;
    }
    case 60333:
    {
        returnValue = F("Bonifaz-Stöckl-Str.");
        break;
    }
    case 60334:
    {
        returnValue = F("Bonifaz-Stöckl-Weg");
        break;
    }
    case 60335:
    {
        returnValue = F("Bonifaziusplatz");
        break;
    }
    case 60336:
    {
        returnValue = F("Bonifaziusstr.");
        break;
    }
    case 60337:
    {
        returnValue = F("Bonings Hagen");
        break;
    }
    case 60338:
    {
        returnValue = F("Boningskamp");
        break;
    }
    case 60339:
    {
        returnValue = F("Boninstr.");
        break;
    }
    case 60340:
    {
        returnValue = F("Bonis-Piontek-Str.");
        break;
    }
    case 60341:
    {
        returnValue = F("Bonissen");
        break;
    }
    case 60342:
    {
        returnValue = F("Bonisweg");
        break;
    }
    case 60343:
    {
        returnValue = F("Bonitzraumweg");
        break;
    }
    case 60344:
    {
        returnValue = F("Bonkampstr.");
        break;
    }
    case 60345:
    {
        returnValue = F("Bonlander Halde");
        break;
    }
    case 60346:
    {
        returnValue = F("Bonlander Steige");
        break;
    }
    case 60347:
    {
        returnValue = F("Bonlander Talweg");
        break;
    }
    case 60348:
    {
        returnValue = F("Bonlander Weg");
        break;
    }
    case 60349:
    {
        returnValue = F("Bonlandsweg");
        break;
    }
    case 60350:
    {
        returnValue = F("Bonlandweg");
        break;
    }
    case 60351:
    {
        returnValue = F("Bonländer Hauptstr.");
        break;
    }
    case 60352:
    {
        returnValue = F("Bonländer Str.");
        break;
    }
    case 60353:
    {
        returnValue = F("Bonländer Weg");
        break;
    }
    case 60354:
    {
        returnValue = F("Bonn-Brühler-Str.");
        break;
    }
    case 60355:
    {
        returnValue = F("Bonnacker");
        break;
    }
    case 60356:
    {
        returnValue = F("Bonnart");
        break;
    }
    case 60357:
    {
        returnValue = F("Bonnaskenplatz");
        break;
    }
    case 60358:
    {
        returnValue = F("Bonnaskenstr.");
        break;
    }
    case 60359:
    {
        returnValue = F("Bonndorf");
        break;
    }
    case 60360:
    {
        returnValue = F("Bonndorfer Str.");
        break;
    }
    case 60361:
    {
        returnValue = F("Bonneberger Str.");
        break;
    }
    case 60362:
    {
        returnValue = F("Bonnemannstr.");
        break;
    }
    case 60363:
    {
        returnValue = F("Bonnengarten");
        break;
    }
    case 60364:
    {
        returnValue = F("Bonnenring");
        break;
    }
    case 60365:
    {
        returnValue = F("Bonnenseeschneise");
        break;
    }
    case 60366:
    {
        returnValue = F("Bonnenweg");
        break;
    }
    case 60367:
    {
        returnValue = F("Bonnenzistr.");
        break;
    }
    case 60368:
    {
        returnValue = F("Bonner Allee");
        break;
    }
    case 60369:
    {
        returnValue = F("Bonner Personen Schiffahrt");
        break;
    }
    case 60370:
    {
        returnValue = F("Bonner Platz");
        break;
    }
    case 60371:
    {
        returnValue = F("Bonner Ring");
        break;
    }
    case 60372:
    {
        returnValue = F("Bonner Skihütte");
        break;
    }
    case 60373:
    {
        returnValue = F("Bonner Str.");
        break;
    }
    case 60374:
    {
        returnValue = F("Bonner Str. / Ohligser Str.");
        break;
    }
    case 60375:
    {
        returnValue = F("Bonner Weg");
        break;
    }
    case 60376:
    {
        returnValue = F("Bonnersüng");
        break;
    }
    case 60377:
    {
        returnValue = F("Bonnerweg");
        break;
    }
    case 60378:
    {
        returnValue = F("Bonnestr.");
        break;
    }
    case 60379:
    {
        returnValue = F("Bonnetstr.");
        break;
    }
    case 60380:
    {
        returnValue = F("Bonnewitzer Str.");
        break;
    }
    case 60381:
    {
        returnValue = F("Bonnhöfer Str.");
        break;
    }
    case 60382:
    {
        returnValue = F("Bonnikestr.");
        break;
    }
    case 60383:
    {
        returnValue = F("Bonninguesstr.");
        break;
    }
    case 60384:
    {
        returnValue = F("Bonnisgasse");
        break;
    }
    case 60385:
    {
        returnValue = F("Bonnlandstr.");
        break;
    }
    case 60386:
    {
        returnValue = F("Bonnletstr.");
        break;
    }
    case 60387:
    {
        returnValue = F("Bonnländer Str.");
        break;
    }
    case 60388:
    {
        returnValue = F("Bonnroder Weg");
        break;
    }
    case 60389:
    {
        returnValue = F("Bonnröder Weg");
        break;
    }
    case 60390:
    {
        returnValue = F("Bonnschlade");
        break;
    }
    case 60391:
    {
        returnValue = F("Bonnstr.");
        break;
    }
    case 60392:
    {
        returnValue = F("Bonnusstr.");
        break;
    }
    case 60393:
    {
        returnValue = F("Bonreisichweg");
        break;
    }
    case 60394:
    {
        returnValue = F("Bonriedergasse");
        break;
    }
    case 60395:
    {
        returnValue = F("Bonriederstr.");
        break;
    }
    case 60396:
    {
        returnValue = F("Bonsaiweg");
        break;
    }
    case 60397:
    {
        returnValue = F("Bonsaler Str.");
        break;
    }
    case 60398:
    {
        returnValue = F("Bonsberg");
        break;
    }
    case 60399:
    {
        returnValue = F("Bonsdorfer Str.");
        break;
    }
    case 60400:
    {
        returnValue = F("Bonselsweg");
        break;
    }
    case 60401:
    {
        returnValue = F("Bonsestr.");
        break;
    }
    case 60402:
    {
        returnValue = F("Bonseweg");
        break;
    }
    case 60403:
    {
        returnValue = F("Bonsfelder Str.");
        break;
    }
    case 60404:
    {
        returnValue = F("Bonstedtstr.");
        break;
    }
    case 60405:
    {
        returnValue = F("Bonstedtweg");
        break;
    }
    case 60406:
    {
        returnValue = F("Bonstetter Steig");
        break;
    }
    case 60407:
    {
        returnValue = F("Bonstetter Str.");
        break;
    }
    case 60408:
    {
        returnValue = F("Bonstorfer Str.");
        break;
    }
    case 60409:
    {
        returnValue = F("Bonstorferheide");
        break;
    }
    case 60410:
    {
        returnValue = F("Bonsumstr.");
        break;
    }
    case 60411:
    {
        returnValue = F("Bonsweiherer Str.");
        break;
    }
    case 60412:
    {
        returnValue = F("Bontalweg");
        break;
    }
    case 60413:
    {
        returnValue = F("Bontekai");
        break;
    }
    case 60414:
    {
        returnValue = F("Bontenbroich");
        break;
    }
    case 60415:
    {
        returnValue = F("Bontjesweg");
        break;
    }
    case 60416:
    {
        returnValue = F("Bontkirchener Str.");
        break;
    }
    case 60417:
    {
        returnValue = F("Bontrott");
        break;
    }
    case 60418:
    {
        returnValue = F("Bonvitaweg");
        break;
    }
    case 60419:
    {
        returnValue = F("Bonwiedenweg");
        break;
    }
    case 60420:
    {
        returnValue = F("Bonzeler Str.");
        break;
    }
    case 60421:
    {
        returnValue = F("Bonzelerhammer");
        break;
    }
    case 60422:
    {
        returnValue = F("Bonzenberg");
        break;
    }
    case 60423:
    {
        returnValue = F("Boock");
        break;
    }
    case 60424:
    {
        returnValue = F("Boocker Weg");
        break;
    }
    case 60425:
    {
        returnValue = F("Boockweg");
        break;
    }
    case 60426:
    {
        returnValue = F("Boodmannstr.");
        break;
    }
    case 60427:
    {
        returnValue = F("Bookackerweg");
        break;
    }
    case 60428:
    {
        returnValue = F("Bookbarg");
        break;
    }
    case 60429:
    {
        returnValue = F("Booken");
        break;
    }
    case 60430:
    {
        returnValue = F("Bookenbusch");
        break;
    }
    case 60431:
    {
        returnValue = F("Bookenweg");
        break;
    }
    case 60432:
    {
        returnValue = F("Bookesch");
        break;
    }
    case 60433:
    {
        returnValue = F("Bookfeld");
        break;
    }
    case 60434:
    {
        returnValue = F("Bookfinkweg");
        break;
    }
    case 60435:
    {
        returnValue = F("Bookgastweg");
        break;
    }
    case 60436:
    {
        returnValue = F("Bookhagen");
        break;
    }
    case 60437:
    {
        returnValue = F("Bookhofer Str.");
        break;
    }
    case 60438:
    {
        returnValue = F("Bookholt");
        break;
    }
    case 60439:
    {
        returnValue = F("Bookholter Heide");
        break;
    }
    case 60440:
    {
        returnValue = F("Bookholter Str.");
        break;
    }
    case 60441:
    {
        returnValue = F("Bookholter Weg");
        break;
    }
    case 60442:
    {
        returnValue = F("Bookholzberger Str.");
        break;
    }
    case 60443:
    {
        returnValue = F("Bookhoop");
        break;
    }
    case 60444:
    {
        returnValue = F("Bookhorner Weg");
        break;
    }
    case 60445:
    {
        returnValue = F("Bookhorner Wiesen");
        break;
    }
    case 60446:
    {
        returnValue = F("Bookhorst");
        break;
    }
    case 60447:
    {
        returnValue = F("Bookhorstweg");
        break;
    }
    case 60448:
    {
        returnValue = F("Bookhäger Str.");
        break;
    }
    case 60449:
    {
        returnValue = F("Booknis");
        break;
    }
    case 60450:
    {
        returnValue = F("Bookweitenweg");
        break;
    }
    case 60451:
    {
        returnValue = F("Boom");
        break;
    }
    case 60452:
    {
        returnValue = F("Boombrede");
        break;
    }
    case 60453:
    {
        returnValue = F("Boomeer");
        break;
    }
    case 60454:
    {
        returnValue = F("Boomgarden");
        break;
    }
    case 60455:
    {
        returnValue = F("Boomhoff");
        break;
    }
    case 60456:
    {
        returnValue = F("Boomhoffstr.");
        break;
    }
    case 60457:
    {
        returnValue = F("Boomkamp");
        break;
    }
    case 60458:
    {
        returnValue = F("Boomkampsweg");
        break;
    }
    case 60459:
    {
        returnValue = F("Boomsstegge");
        break;
    }
    case 60460:
    {
        returnValue = F("Boomstroat");
        break;
    }
    case 60461:
    {
        returnValue = F("Boomstück");
        break;
    }
    case 60462:
    {
        returnValue = F("Boomsweg");
        break;
    }
    case 60463:
    {
        returnValue = F("Boomweg");
        break;
    }
    case 60464:
    {
        returnValue = F("Boonhofstr.");
        break;
    }
    case 60465:
    {
        returnValue = F("Boorgasse");
        break;
    }
    case 60466:
    {
        returnValue = F("Boorhausstr.");
        break;
    }
    case 60467:
    {
        returnValue = F("Boorstegge");
        break;
    }
    case 60468:
    {
        returnValue = F("Boorweg");
        break;
    }
    case 60469:
    {
        returnValue = F("Boorwies");
        break;
    }
    case 60470:
    {
        returnValue = F("Boorwiese");
        break;
    }
    case 60471:
    {
        returnValue = F("Boos");
        break;
    }
    case 60472:
    {
        returnValue = F("Boos-Fremery-Str.");
        break;
    }
    case 60473:
    {
        returnValue = F("Booser Str.");
        break;
    }
    case 60474:
    {
        returnValue = F("Boosergartenstr.");
        break;
    }
    case 60475:
    {
        returnValue = F("Boosstr.");
        break;
    }
    case 60476:
    {
        returnValue = F("Boostedter Str.");
        break;
    }
    case 60477:
    {
        returnValue = F("Boosweg");
        break;
    }
    case 60478:
    {
        returnValue = F("Boot");
        break;
    }
    case 60479:
    {
        returnValue = F("Bootenkamp");
        break;
    }
    case 60480:
    {
        returnValue = F("Bootführerdeich");
        break;
    }
    case 60481:
    {
        returnValue = F("Boothoopsweg");
        break;
    }
    case 60482:
    {
        returnValue = F("Bootsanleger");
        break;
    }
    case 60483:
    {
        returnValue = F("Bootsbauerstr.");
        break;
    }
    case 60484:
    {
        returnValue = F("Bootsbauerweg");
        break;
    }
    case 60485:
    {
        returnValue = F("Bootsgäßchen");
        break;
    }
    case 60486:
    {
        returnValue = F("Bootshafen");
        break;
    }
    case 60487:
    {
        returnValue = F("Bootshafenstr.");
        break;
    }
    case 60488:
    {
        returnValue = F("Bootshausstr.");
        break;
    }
    case 60489:
    {
        returnValue = F("Bootshausweg");
        break;
    }
    case 60490:
    {
        returnValue = F("Bootspassage Lychen");
        break;
    }
    case 60491:
    {
        returnValue = F("Bootsschleppe");
        break;
    }
    case 60492:
    {
        returnValue = F("Bootssteg");
        break;
    }
    case 60493:
    {
        returnValue = F("Bootsstr.");
        break;
    }
    case 60494:
    {
        returnValue = F("Bootsumtrage");
        break;
    }
    case 60495:
    {
        returnValue = F("Bootsweg");
        break;
    }
    case 60496:
    {
        returnValue = F("Bootszufahrt");
        break;
    }
    case 60497:
    {
        returnValue = F("Bootzer Dorfstr.");
        break;
    }
    case 60498:
    {
        returnValue = F("Bootzer Parkweg");
        break;
    }
    case 60499:
    {
        returnValue = F("Bootzer Wendeschleife");
        break;
    }
    case 60500:
    {
        returnValue = F("Boowen Taarep");
        break;
    }
    case 60501:
    {
        returnValue = F("Bop");
        break;
    }
    case 60502:
    {
        returnValue = F("Bopfinger Str.");
        break;
    }
    case 60503:
    {
        returnValue = F("Bopfinger Weg");
        break;
    }
    case 60504:
    {
        returnValue = F("Bopparder Str.");
        break;
    }
    case 60505:
    {
        returnValue = F("Boppelgasse");
        break;
    }
    case 60506:
    {
        returnValue = F("Boppengasse");
        break;
    }
    case 60507:
    {
        returnValue = F("Boppenrainschneise");
        break;
    }
    case 60508:
    {
        returnValue = F("Boppenäckerstr.");
        break;
    }
    case 60509:
    {
        returnValue = F("Boppsgasse");
        break;
    }
    case 60510:
    {
        returnValue = F("Boppstr.");
        break;
    }
    case 60511:
    {
        returnValue = F("Bopserwaldstr.");
        break;
    }
    case 60512:
    {
        returnValue = F("Bopserweg");
        break;
    }
    case 60513:
    {
        returnValue = F("Boragker Str.");
        break;
    }
    case 60514:
    {
        returnValue = F("Boragwai");
        break;
    }
    case 60515:
    {
        returnValue = F("Boraustr.");
        break;
    }
    case 60516:
    {
        returnValue = F("Borbachstr.");
        break;
    }
    case 60517:
    {
        returnValue = F("Borbecke");
        break;
    }
    case 60518:
    {
        returnValue = F("Borbecker Landstr.");
        break;
    }
    case 60519:
    {
        returnValue = F("Borbecker Str.");
        break;
    }
    case 60520:
    {
        returnValue = F("Borbecker Weg");
        break;
    }
    case 60521:
    {
        returnValue = F("Borbeiner Str.");
        break;
    }
    case 60522:
    {
        returnValue = F("Borbelser Str.");
        break;
    }
    case 60523:
    {
        returnValue = F("Borbelser Weg");
        break;
    }
    case 60524:
    {
        returnValue = F("Borbergstr.");
        break;
    }
    case 60525:
    {
        returnValue = F("Borbergweg");
        break;
    }
    case 60526:
    {
        returnValue = F("Borbet");
        break;
    }
    case 60527:
    {
        returnValue = F("Borbetstr.");
        break;
    }
    case 60528:
    {
        returnValue = F("Borbitzweg");
        break;
    }
    case 60529:
    {
        returnValue = F("Borbyer Hufe");
        break;
    }
    case 60530:
    {
        returnValue = F("Borbyer Pastorenweg");
        break;
    }
    case 60531:
    {
        returnValue = F("Borbyer Promenade");
        break;
    }
    case 60532:
    {
        returnValue = F("Borbyhof");
        break;
    }
    case 60533:
    {
        returnValue = F("Borchardstr.");
        break;
    }
    case 60534:
    {
        returnValue = F("Borchardtsweg");
        break;
    }
    case 60535:
    {
        returnValue = F("Borcheler Weg");
        break;
    }
    case 60536:
    {
        returnValue = F("Borchersstr.");
        break;
    }
    case 60537:
    {
        returnValue = F("Borchersweg");
        break;
    }
    case 60538:
    {
        returnValue = F("Borchertstr.");
        break;
    }
    case 60539:
    {
        returnValue = F("Borchertweg");
        break;
    }
    case 60540:
    {
        returnValue = F("Borchshöhe");
        break;
    }
    case 60541:
    {
        returnValue = F("Borchtitz");
        break;
    }
    case 60542:
    {
        returnValue = F("Borckenfriede");
        break;
    }
    case 60543:
    {
        returnValue = F("Borculoer Str.");
        break;
    }
    case 60544:
    {
        returnValue = F("Bordeauxweg");
        break;
    }
    case 60545:
    {
        returnValue = F("Bordenauer Str.");
        break;
    }
    case 60546:
    {
        returnValue = F("Bordenauer Weg");
        break;
    }
    case 60547:
    {
        returnValue = F("Bordenbergweg");
        break;
    }
    case 60548:
    {
        returnValue = F("Bordenhof");
        break;
    }
    case 60549:
    {
        returnValue = F("Bordesholmer Str.");
        break;
    }
    case 60550:
    {
        returnValue = F("Bordewicksweg");
        break;
    }
    case 60551:
    {
        returnValue = F("Bordhofstr.");
        break;
    }
    case 60552:
    {
        returnValue = F("Bordighera Allee");
        break;
    }
    case 60553:
    {
        returnValue = F("Bordinghausen");
        break;
    }
    case 60554:
    {
        returnValue = F("Bordinghauser Weg");
        break;
    }
    case 60555:
    {
        returnValue = F("Bordmühlweg");
        break;
    }
    case 60556:
    {
        returnValue = F("Bordolloring");
        break;
    }
    case 60557:
    {
        returnValue = F("Bordumer Str.");
        break;
    }
    case 60558:
    {
        returnValue = F("Bordumstr.");
        break;
    }
    case 60559:
    {
        returnValue = F("Bordwaldstr.");
        break;
    }
    case 60560:
    {
        returnValue = F("Boreasmühle");
        break;
    }
    case 60561:
    {
        returnValue = F("Boregass");
        break;
    }
    case 60562:
    {
        returnValue = F("Borenbrunnenweg");
        break;
    }
    case 60563:
    {
        returnValue = F("Borengasse");
        break;
    }
    case 60564:
    {
        returnValue = F("Borenkamp");
        break;
    }
    case 60565:
    {
        returnValue = F("Borenpfad");
        break;
    }
    case 60566:
    {
        returnValue = F("Borensgasse");
        break;
    }
    case 60567:
    {
        returnValue = F("Borenstr.");
        break;
    }
    case 60568:
    {
        returnValue = F("Borenweg");
        break;
    }
    case 60569:
    {
        returnValue = F("Borenzwangweg");
        break;
    }
    case 60570:
    {
        returnValue = F("Borflur");
        break;
    }
    case 60571:
    {
        returnValue = F("Borg");
        break;
    }
    case 60572:
    {
        returnValue = F("Borgansstr.");
        break;
    }
    case 60573:
    {
        returnValue = F("Borgasse");
        break;
    }
    case 60574:
    {
        returnValue = F("Borgau");
        break;
    }
    case 60575:
    {
        returnValue = F("Borgdorfer Str.");
        break;
    }
    case 60576:
    {
        returnValue = F("Borgentreicher Str.");
        break;
    }
    case 60577:
    {
        returnValue = F("Borgentreicher Weg");
        break;
    }
    case 60578:
    {
        returnValue = F("Borger Schneise");
        break;
    }
    case 60579:
    {
        returnValue = F("Borger Sod");
        break;
    }
    case 60580:
    {
        returnValue = F("Borger Steg");
        break;
    }
    case 60581:
    {
        returnValue = F("Borger Stiege");
        break;
    }
    case 60582:
    {
        returnValue = F("Borger Weg");
        break;
    }
    case 60583:
    {
        returnValue = F("Borgerhauweg");
        break;
    }
    case 60584:
    {
        returnValue = F("Borgerholz");
        break;
    }
    case 60585:
    {
        returnValue = F("Borgerland");
        break;
    }
    case 60586:
    {
        returnValue = F("Borgersstr.");
        break;
    }
    case 60587:
    {
        returnValue = F("Borgerweg");
        break;
    }
    case 60588:
    {
        returnValue = F("Borgesch");
        break;
    }
    case 60589:
    {
        returnValue = F("Borgesweg");
        break;
    }
    case 60590:
    {
        returnValue = F("Borgfeld");
        break;
    }
    case 60591:
    {
        returnValue = F("Borgfelde");
        break;
    }
    case 60592:
    {
        returnValue = F("Borgfelder Stieg");
        break;
    }
    case 60593:
    {
        returnValue = F("Borgfeldtstr.");
        break;
    }
    case 60594:
    {
        returnValue = F("Borggraben");
        break;
    }
    case 60595:
    {
        returnValue = F("Borggraf");
        break;
    }
    case 60596:
    {
        returnValue = F("Borggrevenkamp");
        break;
    }
    case 60597:
    {
        returnValue = F("Borggreves Weg");
        break;
    }
    case 60598:
    {
        returnValue = F("Borggrevestr.");
        break;
    }
    case 60599:
    {
        returnValue = F("Borghagen");
        break;
    }
    case 60600:
    {
        returnValue = F("Borghagener Str.");
        break;
    }
    case 60601:
    {
        returnValue = F("Borghardtstr.");
        break;
    }
    case 60602:
    {
        returnValue = F("Borghausen");
        break;
    }
    case 60603:
    {
        returnValue = F("Borgheeser Weg");
        break;
    }
    case 60604:
    {
        returnValue = F("Borgheller Str.");
        break;
    }
    case 60605:
    {
        returnValue = F("Borghof");
        break;
    }
    case 60606:
    {
        returnValue = F("Borgholter Str.");
        break;
    }
    case 60607:
    {
        returnValue = F("Borgholzer Berg");
        break;
    }
    case 60608:
    {
        returnValue = F("Borgholzer Höhe");
        break;
    }
    case 60609:
    {
        returnValue = F("Borgholzer Str.");
        break;
    }
    case 60610:
    {
        returnValue = F("Borgholzhausener Str.");
        break;
    }
    case 60611:
    {
        returnValue = F("Borgholzhauser Str.");
        break;
    }
    case 60612:
    {
        returnValue = F("Borgholzstr.");
        break;
    }
    case 60613:
    {
        returnValue = F("Borghorster Str.");
        break;
    }
    case 60614:
    {
        returnValue = F("Borghorster Weg");
        break;
    }
    case 60615:
    {
        returnValue = F("Borghorsterhütten");
        break;
    }
    case 60616:
    {
        returnValue = F("Borgisdorfer Str.");
        break;
    }
    case 60617:
    {
        returnValue = F("Borgkamp");
        break;
    }
    case 60618:
    {
        returnValue = F("Borgkampredder");
        break;
    }
    case 60619:
    {
        returnValue = F("Borgloh");
        break;
    }
    case 60620:
    {
        returnValue = F("Borgloher Str.");
        break;
    }
    case 60621:
    {
        returnValue = F("Borgmanns Kamp");
        break;
    }
    case 60622:
    {
        returnValue = F("Borgmannstr.");
        break;
    }
    case 60623:
    {
        returnValue = F("Borgmannsweg");
        break;
    }
    case 60624:
    {
        returnValue = F("Borgmoorweg");
        break;
    }
    case 60625:
    {
        returnValue = F("Borgmühl");
        break;
    }
    case 60626:
    {
        returnValue = F("Borgmühlenpättken");
        break;
    }
    case 60627:
    {
        returnValue = F("Borgomanero-Str.");
        break;
    }
    case 60628:
    {
        returnValue = F("Borgsdorfer Meile");
        break;
    }
    case 60629:
    {
        returnValue = F("Borgsdorfer Str.");
        break;
    }
    case 60630:
    {
        returnValue = F("Borgsdorfer Weg");
        break;
    }
    case 60631:
    {
        returnValue = F("Borgsheider Weg");
        break;
    }
    case 60632:
    {
        returnValue = F("Borgskamp");
        break;
    }
    case 60633:
    {
        returnValue = F("Borgsollweg");
        break;
    }
    case 60634:
    {
        returnValue = F("Borgstede-Bramloge");
        break;
    }
    case 60635:
    {
        returnValue = F("Borgstedt");
        break;
    }
    case 60636:
    {
        returnValue = F("Borgstedter Str.");
        break;
    }
    case 60637:
    {
        returnValue = F("Borgstedter Weg");
        break;
    }
    case 60638:
    {
        returnValue = F("Borgstedtfelde");
        break;
    }
    case 60639:
    {
        returnValue = F("Borgstr.");
        break;
    }
    case 60640:
    {
        returnValue = F("Borgswehrstr.");
        break;
    }
    case 60641:
    {
        returnValue = F("Borgwall");
        break;
    }
    case 60642:
    {
        returnValue = F("Borgwallring");
        break;
    }
    case 60643:
    {
        returnValue = F("Borgwardstr.");
        break;
    }
    case 60644:
    {
        returnValue = F("Borgwedder Str.");
        break;
    }
    case 60645:
    {
        returnValue = F("Borgwedeler Weg");
        break;
    }
    case 60646:
    {
        returnValue = F("Borgweg");
        break;
    }
    case 60647:
    {
        returnValue = F("Borgwisch");
        break;
    }
    case 60648:
    {
        returnValue = F("Borhecksgasse");
        break;
    }
    case 60649:
    {
        returnValue = F("Borheckstr.");
        break;
    }
    case 60650:
    {
        returnValue = F("Borheggenstr.");
        break;
    }
    case 60651:
    {
        returnValue = F("Borheller");
        break;
    }
    case 60652:
    {
        returnValue = F("Borhochstr.");
        break;
    }
    case 60653:
    {
        returnValue = F("Borig");
        break;
    }
    case 60654:
    {
        returnValue = F("Borigwai");
        break;
    }
    case 60655:
    {
        returnValue = F("Borigwoi");
        break;
    }
    case 60656:
    {
        returnValue = F("Borisoglebsker Str.");
        break;
    }
    case 60657:
    {
        returnValue = F("Boritzer Str.");
        break;
    }
    case 60658:
    {
        returnValue = F("Borkelstr.");
        break;
    }
    case 60659:
    {
        returnValue = F("Borkelwiese");
        break;
    }
    case 60660:
    {
        returnValue = F("Borkenbergestr.");
        break;
    }
    case 60661:
    {
        returnValue = F("Borkener Damm");
        break;
    }
    case 60662:
    {
        returnValue = F("Borkener Hof");
        break;
    }
    case 60663:
    {
        returnValue = F("Borkener Landweg");
        break;
    }
    case 60664:
    {
        returnValue = F("Borkener Ring");
        break;
    }
    case 60665:
    {
        returnValue = F("Borkener See");
        break;
    }
    case 60666:
    {
        returnValue = F("Borkener Str.");
        break;
    }
    case 60667:
    {
        returnValue = F("Borkengasse");
        break;
    }
    case 60668:
    {
        returnValue = F("Borkenhausstr.");
        break;
    }
    case 60669:
    {
        returnValue = F("Borkenkamp");
        break;
    }
    case 60670:
    {
        returnValue = F("Borkenstr.");
        break;
    }
    case 60671:
    {
        returnValue = F("Borkenweg");
        break;
    }
    case 60672:
    {
        returnValue = F("Borkenwirther Str.");
        break;
    }
    case 60673:
    {
        returnValue = F("Borker Berg");
        break;
    }
    case 60674:
    {
        returnValue = F("Borker Landweg");
        break;
    }
    case 60675:
    {
        returnValue = F("Borker Str.");
        break;
    }
    case 60676:
    {
        returnValue = F("Borker Weg");
        break;
    }
    case 60677:
    {
        returnValue = F("Borketalstr.");
        break;
    }
    case 60678:
    {
        returnValue = F("Borkeweg");
        break;
    }
    case 60679:
    {
        returnValue = F("Borkholderstr.");
        break;
    }
    case 60680:
    {
        returnValue = F("Borkhorster Weg");
        break;
    }
    case 60681:
    {
        returnValue = F("Borkmeedeweg");
        break;
    }
    case 60682:
    {
        returnValue = F("Borkmühlenweg");
        break;
    }
    case 60683:
    {
        returnValue = F("Borkower Str.");
        break;
    }
    case 60684:
    {
        returnValue = F("Borkower Weg");
        break;
    }
    case 60685:
    {
        returnValue = F("Borksarken");
        break;
    }
    case 60686:
    {
        returnValue = F("Borksgäßchen");
        break;
    }
    case 60687:
    {
        returnValue = F("Borkshagenstr.");
        break;
    }
    case 60688:
    {
        returnValue = F("Borkumer Str.");
        break;
    }
    case 60689:
    {
        returnValue = F("Borkumer Weg");
        break;
    }
    case 60690:
    {
        returnValue = F("Borkumstr.");
        break;
    }
    case 60691:
    {
        returnValue = F("Borkumweg");
        break;
    }
    case 60692:
    {
        returnValue = F("Borkweg");
        break;
    }
    case 60693:
    {
        returnValue = F("Borkwinkel");
        break;
    }
    case 60694:
    {
        returnValue = F("Borlachstr.");
        break;
    }
    case 60695:
    {
        returnValue = F("Borlachweg");
        break;
    }
    case 60696:
    {
        returnValue = F("Borlaser Str.");
        break;
    }
    case 60697:
    {
        returnValue = F("Borlaystr.");
        break;
    }
    case 60698:
    {
        returnValue = F("Borlefzen");
        break;
    }
    case 60699:
    {
        returnValue = F("Borlefzener Kirchweg");
        break;
    }
    case 60700:
    {
        returnValue = F("Borler Weg");
        break;
    }
    case 60701:
    {
        returnValue = F("Borlinghausener Str.");
        break;
    }
    case 60702:
    {
        returnValue = F("Borlinghauser Str.");
        break;
    }
    case 60703:
    {
        returnValue = F("Bormanns Berg");
        break;
    }
    case 60704:
    {
        returnValue = F("Bormanns Weg");
        break;
    }
    case 60705:
    {
        returnValue = F("Bormanns Wiese");
        break;
    }
    case 60706:
    {
        returnValue = F("Bormannshof");
        break;
    }
    case 60707:
    {
        returnValue = F("Bormannskamp");
        break;
    }
    case 60708:
    {
        returnValue = F("Bormannstr.");
        break;
    }
    case 60709:
    {
        returnValue = F("Bormark");
        break;
    }
    case 60710:
    {
        returnValue = F("Bormeckeweg");
        break;
    }
    case 60711:
    {
        returnValue = F("Bormhorstweg");
        break;
    }
    case 60712:
    {
        returnValue = F("Bormig");
        break;
    }
    case 60713:
    {
        returnValue = F("Bormiger Weg");
        break;
    }
    case 60714:
    {
        returnValue = F("Bormigstr.");
        break;
    }
    case 60715:
    {
        returnValue = F("Bormitz");
        break;
    }
    case 60716:
    {
        returnValue = F("Bormsdorf");
        break;
    }
    case 60717:
    {
        returnValue = F("Born");
        break;
    }
    case 60718:
    {
        returnValue = F("Born Tal");
        break;
    }
    case 60719:
    {
        returnValue = F("Born'scher Park");
        break;
    }
    case 60720:
    {
        returnValue = F("Borna");
        break;
    }
    case 60721:
    {
        returnValue = F("Borna-Platz");
        break;
    }
    case 60722:
    {
        returnValue = F("Bornacker");
        break;
    }
    case 60723:
    {
        returnValue = F("Bornackerstr.");
        break;
    }
    case 60724:
    {
        returnValue = F("Bornackerweg");
        break;
    }
    case 60725:
    {
        returnValue = F("Bornaer Chaussee");
        break;
    }
    case 60726:
    {
        returnValue = F("Bornaer Str.");
        break;
    }
    case 60727:
    {
        returnValue = F("Bornaer Weg");
        break;
    }
    case 60728:
    {
        returnValue = F("Bornaische Str.");
        break;
    }
    case 60729:
    {
        returnValue = F("Bornangerweg");
        break;
    }
    case 60730:
    {
        returnValue = F("Bornbach");
        break;
    }
    case 60731:
    {
        returnValue = F("Bornbacher Str.");
        break;
    }
    case 60732:
    {
        returnValue = F("Bornbachsteige");
        break;
    }
    case 60733:
    {
        returnValue = F("Bornbachstr.");
        break;
    }
    case 60734:
    {
        returnValue = F("Bornbachsweg");
        break;
    }
    case 60735:
    {
        returnValue = F("Bornbachweg");
        break;
    }
    case 60736:
    {
        returnValue = F("Bornbarch");
        break;
    }
    case 60737:
    {
        returnValue = F("Bornbarg");
        break;
    }
    case 60738:
    {
        returnValue = F("Bornberg");
        break;
    }
    case 60739:
    {
        returnValue = F("Bornbergsfeld");
        break;
    }
    case 60740:
    {
        returnValue = F("Bornbergstr.");
        break;
    }
    case 60741:
    {
        returnValue = F("Bornbeutelweg");
        break;
    }
    case 60742:
    {
        returnValue = F("Bornblink");
        break;
    }
    case 60743:
    {
        returnValue = F("Bornbreite");
        break;
    }
    case 60744:
    {
        returnValue = F("Bornbrink");
        break;
    }
    case 60745:
    {
        returnValue = F("Bornbrook");
        break;
    }
    case 60746:
    {
        returnValue = F("Bornbruch");
        break;
    }
    case 60747:
    {
        returnValue = F("Bornbruchschneise");
        break;
    }
    case 60748:
    {
        returnValue = F("Bornbruchswaldweg");
        break;
    }
    case 60749:
    {
        returnValue = F("Bornbruchsweg");
        break;
    }
    case 60750:
    {
        returnValue = F("Bornbruchweg");
        break;
    }
    case 60751:
    {
        returnValue = F("Bornbusch");
        break;
    }
    case 60752:
    {
        returnValue = F("Borndeich");
        break;
    }
    case 60753:
    {
        returnValue = F("Borndellenweg");
        break;
    }
    case 60754:
    {
        returnValue = F("Bornebachstr.");
        break;
    }
    case 60755:
    {
        returnValue = F("Bornebrede");
        break;
    }
    case 60756:
    {
        returnValue = F("Bornebreite");
        break;
    }
    case 60757:
    {
        returnValue = F("Borneck");
        break;
    }
    case 60758:
    {
        returnValue = F("Bornecke");
        break;
    }
    case 60759:
    {
        returnValue = F("Bornefeld-Ettmann-Str.");
        break;
    }
    case 60760:
    {
        returnValue = F("Bornefelder Str.");
        break;
    }
    case 60761:
    {
        returnValue = F("Bornegasse");
        break;
    }
    case 60762:
    {
        returnValue = F("Bornegrund");
        break;
    }
    case 60763:
    {
        returnValue = F("Bornegrundstr.");
        break;
    }
    case 60764:
    {
        returnValue = F("Borneichstr.");
        break;
    }
    case 60765:
    {
        returnValue = F("Bornekampstr.");
        break;
    }
    case 60766:
    {
        returnValue = F("Borneller Weg");
        break;
    }
    case 60767:
    {
        returnValue = F("Bornemacherstr.");
        break;
    }
    case 60768:
    {
        returnValue = F("Bornemanns Tannen");
        break;
    }
    case 60769:
    {
        returnValue = F("Bornemannshausen");
        break;
    }
    case 60770:
    {
        returnValue = F("Bornemannstr.");
        break;
    }
    case 60771:
    {
        returnValue = F("Bornemannweg");
        break;
    }
    case 60772:
    {
        returnValue = F("Bornemer Str.");
        break;
    }
    case 60773:
    {
        returnValue = F("Bornenkamp");
        break;
    }
    case 60774:
    {
        returnValue = F("Bornenweg");
        break;
    }
    case 60775:
    {
        returnValue = F("Bornenwiese");
        break;
    }
    case 60776:
    {
        returnValue = F("Borner Feld");
        break;
    }
    case 60777:
    {
        returnValue = F("Borner Mühle");
        break;
    }
    case 60778:
    {
        returnValue = F("Borner Stadtweg");
        break;
    }
    case 60779:
    {
        returnValue = F("Borner Str.");
        break;
    }
    case 60780:
    {
        returnValue = F("Borner Weg");
        break;
    }
    case 60781:
    {
        returnValue = F("Bornergasse");
        break;
    }
    case 60782:
    {
        returnValue = F("Bornerhof");
        break;
    }
    case 60783:
    {
        returnValue = F("Bornerweg");
        break;
    }
    case 60784:
    {
        returnValue = F("Bornestr.");
        break;
    }
    case 60785:
    {
        returnValue = F("Bornewasserstr.");
        break;
    }
    case 60786:
    {
        returnValue = F("Bornewasserweg");
        break;
    }
    case 60787:
    {
        returnValue = F("Borneweg");
        break;
    }
    case 60788:
    {
        returnValue = F("Bornfeld");
        break;
    }
    case 60789:
    {
        returnValue = F("Bornfeldring");
        break;
    }
    case 60790:
    {
        returnValue = F("Bornfeldstr.");
        break;
    }
    case 60791:
    {
        returnValue = F("Bornfeldweg");
        break;
    }
    case 60792:
    {
        returnValue = F("Bornfelsgasse");
        break;
    }
    case 60793:
    {
        returnValue = F("Bornfloßstr.");
        break;
    }
    case 60794:
    {
        returnValue = F("Borngallsweg");
        break;
    }
    case 60795:
    {
        returnValue = F("Borngang");
        break;
    }
    case 60796:
    {
        returnValue = F("Borngarten");
        break;
    }
    case 60797:
    {
        returnValue = F("Borngartenstr.");
        break;
    }
    case 60798:
    {
        returnValue = F("Borngartenweg");
        break;
    }
    case 60799:
    {
        returnValue = F("Borngass");
        break;
    }
    case 60800:
    {
        returnValue = F("Borngasse");
        break;
    }
    case 60801:
    {
        returnValue = F("Borngasser");
        break;
    }
    case 60802:
    {
        returnValue = F("Borngasseweg");
        break;
    }
    case 60803:
    {
        returnValue = F("Borngraben");
        break;
    }
    case 60804:
    {
        returnValue = F("Borngrund");
        break;
    }
    case 60805:
    {
        returnValue = F("Borngärter Hohl");
        break;
    }
    case 60806:
    {
        returnValue = F("Borngässchen");
        break;
    }
    case 60807:
    {
        returnValue = F("Borngässel");
        break;
    }
    case 60808:
    {
        returnValue = F("Borngässje");
        break;
    }
    case 60809:
    {
        returnValue = F("Borngäßchen");
        break;
    }
    case 60810:
    {
        returnValue = F("Bornhagen");
        break;
    }
    case 60811:
    {
        returnValue = F("Bornhagener Str.");
        break;
    }
    case 60812:
    {
        returnValue = F("Bornhahn");
        break;
    }
    case 60813:
    {
        returnValue = F("Bornhardtstr.");
        break;
    }
    case 60814:
    {
        returnValue = F("Bornhaustert");
        break;
    }
    case 60815:
    {
        returnValue = F("Bornhausweg");
        break;
    }
    case 60816:
    {
        returnValue = F("Bornhecke");
        break;
    }
    case 60817:
    {
        returnValue = F("Bornheckenstr.");
        break;
    }
    case 60818:
    {
        returnValue = F("Bornheg");
        break;
    }
    case 60819:
    {
        returnValue = F("Bornheider Weg");
        break;
    }
    case 60820:
    {
        returnValue = F("Bornheidestr.");
        break;
    }
    case 60821:
    {
        returnValue = F("Bornheim");
        break;
    }
    case 60822:
    {
        returnValue = F("Bornheimer Pfad");
        break;
    }
    case 60823:
    {
        returnValue = F("Bornheimer Str.");
        break;
    }
    case 60824:
    {
        returnValue = F("Bornheimer Weg");
        break;
    }
    case 60825:
    {
        returnValue = F("Bornhellweg");
        break;
    }
    case 60826:
    {
        returnValue = F("Bornhof");
        break;
    }
    case 60827:
    {
        returnValue = F("Bornhofener Weg");
        break;
    }
    case 60828:
    {
        returnValue = F("Bornhofstr.");
        break;
    }
    case 60829:
    {
        returnValue = F("Bornhohl");
        break;
    }
    case 60830:
    {
        returnValue = F("Bornhohle");
        break;
    }
    case 60831:
    {
        returnValue = F("Bornholmer Kehre");
        break;
    }
    case 60832:
    {
        returnValue = F("Bornholmer Str.");
        break;
    }
    case 60833:
    {
        returnValue = F("Bornholmer Weg");
        break;
    }
    case 60834:
    {
        returnValue = F("Bornholmweg");
        break;
    }
    case 60835:
    {
        returnValue = F("Bornholtstr.");
        break;
    }
    case 60836:
    {
        returnValue = F("Bornholz");
        break;
    }
    case 60837:
    {
        returnValue = F("Bornholzstr.");
        break;
    }
    case 60838:
    {
        returnValue = F("Bornholzweg");
        break;
    }
    case 60839:
    {
        returnValue = F("Bornhopshöh");
        break;
    }
    case 60840:
    {
        returnValue = F("Bornhornsweg");
        break;
    }
    case 60841:
    {
        returnValue = F("Bornhorst");
        break;
    }
    case 60842:
    {
        returnValue = F("Bornhorster Weg");
        break;
    }
    case 60843:
    {
        returnValue = F("Bornhorstweg");
        break;
    }
    case 60844:
    {
        returnValue = F("Bornhäuser Str.");
        break;
    }
    case 60845:
    {
        returnValue = F("Bornhäusser Weg");
        break;
    }
    case 60846:
    {
        returnValue = F("Bornhöfchen");
        break;
    }
    case 60847:
    {
        returnValue = F("Bornhöfe");
        break;
    }
    case 60848:
    {
        returnValue = F("Bornhöftstr.");
        break;
    }
    case 60849:
    {
        returnValue = F("Bornhöll");
        break;
    }
    case 60850:
    {
        returnValue = F("Bornhövder Straat");
        break;
    }
    case 60851:
    {
        returnValue = F("Bornhöveder Landstr.");
        break;
    }
    case 60852:
    {
        returnValue = F("Bornhöveder Str.");
        break;
    }
    case 60853:
    {
        returnValue = F("Bornhövedstr.");
        break;
    }
    case 60854:
    {
        returnValue = F("Bornicher Str.");
        break;
    }
    case 60855:
    {
        returnValue = F("Bornimer Str.");
        break;
    }
    case 60856:
    {
        returnValue = F("Bornitzer Bahnhofstr.");
        break;
    }
    case 60857:
    {
        returnValue = F("Bornitzer Hauptstr.");
        break;
    }
    case 60858:
    {
        returnValue = F("Bornitzer Mühlenweg");
        break;
    }
    case 60859:
    {
        returnValue = F("Bornitzer Str.");
        break;
    }
    case 60860:
    {
        returnValue = F("Bornitzer Weg");
        break;
    }
    case 60861:
    {
        returnValue = F("Bornitzer Wiesenweg");
        break;
    }
    case 60862:
    {
        returnValue = F("Bornkamp");
        break;
    }
    case 60863:
    {
        returnValue = F("Bornkampsweg");
        break;
    }
    case 60864:
    {
        returnValue = F("Bornkaut");
        break;
    }
    case 60865:
    {
        returnValue = F("Bornkindelweg");
        break;
    }
    case 60866:
    {
        returnValue = F("Bornkippel");
        break;
    }
    case 60867:
    {
        returnValue = F("Bornklagengasse");
        break;
    }
    case 60868:
    {
        returnValue = F("Bornklinge");
        break;
    }
    case 60869:
    {
        returnValue = F("Bornklingerhof");
        break;
    }
    case 60870:
    {
        returnValue = F("Bornkresseweg");
        break;
    }
    case 60871:
    {
        returnValue = F("Bornkrogsweg");
        break;
    }
    case 60872:
    {
        returnValue = F("Bornkrug");
        break;
    }
    case 60873:
    {
        returnValue = F("Bornköppel");
        break;
    }
    case 60874:
    {
        returnValue = F("Bornland");
        break;
    }
    case 60875:
    {
        returnValue = F("Bornleidstr.");
        break;
    }
    case 60876:
    {
        returnValue = F("Bornleite");
        break;
    }
    case 60877:
    {
        returnValue = F("Bornlochweg");
        break;
    }
    case 60878:
    {
        returnValue = F("Bornmoor");
        break;
    }
    case 60879:
    {
        returnValue = F("Bornmühle");
        break;
    }
    case 60880:
    {
        returnValue = F("Bornmühlengraben");
        break;
    }
    case 60881:
    {
        returnValue = F("Bornmühlenstr.");
        break;
    }
    case 60882:
    {
        returnValue = F("Bornmühlenweg");
        break;
    }
    case 60883:
    {
        returnValue = F("Bornower Berg");
        break;
    }
    case 60884:
    {
        returnValue = F("Bornower Dorfstr.");
        break;
    }
    case 60885:
    {
        returnValue = F("Bornower Feldstr.");
        break;
    }
    case 60886:
    {
        returnValue = F("Bornower Str.");
        break;
    }
    case 60887:
    {
        returnValue = F("Bornpfad");
        break;
    }
    case 60888:
    {
        returnValue = F("Bornpforte");
        break;
    }
    case 60889:
    {
        returnValue = F("Bornplatz");
        break;
    }
    case 60890:
    {
        returnValue = F("Bornpromenade");
        break;
    }
    case 60891:
    {
        returnValue = F("Bornrain");
        break;
    }
    case 60892:
    {
        returnValue = F("Bornrainstr.");
        break;
    }
    case 60893:
    {
        returnValue = F("Bornrand");
        break;
    }
    case 60894:
    {
        returnValue = F("Bornrasen");
        break;
    }
    case 60895:
    {
        returnValue = F("Bornreiher Str.");
        break;
    }
    case 60896:
    {
        returnValue = F("Bornring");
        break;
    }
    case 60897:
    {
        returnValue = F("Bornrüm");
        break;
    }
    case 60898:
    {
        returnValue = F("Borns Weg");
        break;
    }
    case 60899:
    {
        returnValue = F("Bornsbachstr.");
        break;
    }
    case 60900:
    {
        returnValue = F("Bornsberg");
        break;
    }
    case 60901:
    {
        returnValue = F("Bornsche Str.");
        break;
    }
    case 60902:
    {
        returnValue = F("Bornscheid");
        break;
    }
    case 60903:
    {
        returnValue = F("Bornscher Weg");
        break;
    }
    case 60904:
    {
        returnValue = F("Bornschlade");
        break;
    }
    case 60905:
    {
        returnValue = F("Bornschneise");
        break;
    }
    case 60906:
    {
        returnValue = F("Bornsdorf Birkenweg");
        break;
    }
    case 60907:
    {
        returnValue = F("Bornsdorf Dorfstr.");
        break;
    }
    case 60908:
    {
        returnValue = F("Bornsdorf Grünswalde");
        break;
    }
    case 60909:
    {
        returnValue = F("Bornsdorf Grünswalder Weg");
        break;
    }
    case 60910:
    {
        returnValue = F("Bornsdorf Hasenweg");
        break;
    }
    case 60911:
    {
        returnValue = F("Bornsdorf Kippenweg");
        break;
    }
    case 60912:
    {
        returnValue = F("Bornsdorf Luckauer Chaussee");
        break;
    }
    case 60913:
    {
        returnValue = F("Bornsdorf NEG Am Horstberg");
        break;
    }
    case 60914:
    {
        returnValue = F("Bornsdorf Schulstr.");
        break;
    }
    case 60915:
    {
        returnValue = F("Bornsdorf Siedlung");
        break;
    }
    case 60916:
    {
        returnValue = F("Bornsdorf Trebbinchen");
        break;
    }
    case 60917:
    {
        returnValue = F("Bornsdorfer Teich");
        break;
    }
    case 60918:
    {
        returnValue = F("Bornseifen");
        break;
    }
    case 60919:
    {
        returnValue = F("Bornsener Str.");
        break;
    }
    case 60920:
    {
        returnValue = F("Bornsener Weg");
        break;
    }
    case 60921:
    {
        returnValue = F("Bornser Weg");
        break;
    }
    case 60922:
    {
        returnValue = F("Bornsgasse");
        break;
    }
    case 60923:
    {
        returnValue = F("Bornshainer Weg");
        break;
    }
    case 60924:
    {
        returnValue = F("Bornshecke");
        break;
    }
    case 60925:
    {
        returnValue = F("Bornshof");
        break;
    }
    case 60926:
    {
        returnValue = F("Bornsieksweg");
        break;
    }
    case 60927:
    {
        returnValue = F("Bornspring");
        break;
    }
    case 60928:
    {
        returnValue = F("Bornspringe");
        break;
    }
    case 60929:
    {
        returnValue = F("Bornstedter Str.");
        break;
    }
    case 60930:
    {
        returnValue = F("Bornstedter Weg");
        break;
    }
    case 60931:
    {
        returnValue = F("Bornstedtweg");
        break;
    }
    case 60932:
    {
        returnValue = F("Bornsteg");
        break;
    }
    case 60933:
    {
        returnValue = F("Bornsteiner Str.");
        break;
    }
    case 60934:
    {
        returnValue = F("Bornstieg");
        break;
    }
    case 60935:
    {
        returnValue = F("Bornstoppel");
        break;
    }
    case 60936:
    {
        returnValue = F("Bornstr.");
        break;
    }
    case 60937:
    {
        returnValue = F("Bornstube");
        break;
    }
    case 60938:
    {
        returnValue = F("Bornstück");
        break;
    }
    case 60939:
    {
        returnValue = F("Bornstücken");
        break;
    }
    case 60940:
    {
        returnValue = F("Bornsweg");
        break;
    }
    case 60941:
    {
        returnValue = F("Borntal");
        break;
    }
    case 60942:
    {
        returnValue = F("Borntal / Schirnewitzer Grund");
        break;
    }
    case 60943:
    {
        returnValue = F("Borntaler Weg");
        break;
    }
    case 60944:
    {
        returnValue = F("Borntalstr.");
        break;
    }
    case 60945:
    {
        returnValue = F("Borntalweg");
        break;
    }
    case 60946:
    {
        returnValue = F("Bornthalstr.");
        break;
    }
    case 60947:
    {
        returnValue = F("Borntin");
        break;
    }
    case 60948:
    {
        returnValue = F("Bornufer");
        break;
    }
    case 60949:
    {
        returnValue = F("Bornum/Elm, Dorfstr.");
        break;
    }
    case 60950:
    {
        returnValue = F("Bornumer Hauptstr.");
        break;
    }
    case 60951:
    {
        returnValue = F("Bornumer Str.");
        break;
    }
    case 60952:
    {
        returnValue = F("Bornumer Weg");
        break;
    }
    case 60953:
    {
        returnValue = F("Bornvierthsweg");
        break;
    }
    case 60954:
    {
        returnValue = F("Bornwaldstr.");
        break;
    }
    case 60955:
    {
        returnValue = F("Bornweg");
        break;
    }
    case 60956:
    {
        returnValue = F("Bornwies");
        break;
    }
    case 60957:
    {
        returnValue = F("Bornwiese");
        break;
    }
    case 60958:
    {
        returnValue = F("Bornwiesen");
        break;
    }
    case 60959:
    {
        returnValue = F("Bornwiesenstr.");
        break;
    }
    case 60960:
    {
        returnValue = F("Bornwiesenweg");
        break;
    }
    case 60961:
    {
        returnValue = F("Bornwiesstr.");
        break;
    }
    case 60962:
    {
        returnValue = F("Bornwiesweg");
        break;
    }
    case 60963:
    {
        returnValue = F("Bornwischen");
        break;
    }
    case 60964:
    {
        returnValue = F("Bornwäldchen");
        break;
    }
    case 60965:
    {
        returnValue = F("Bornäcker");
        break;
    }
    case 60966:
    {
        returnValue = F("Bornäckerhof");
        break;
    }
    case 60967:
    {
        returnValue = F("Bornäckerweg");
        break;
    }
    case 60968:
    {
        returnValue = F("Bornüber");
        break;
    }
    case 60969:
    {
        returnValue = F("Boroder Weg");
        break;
    }
    case 60970:
    {
        returnValue = F("Borodinstr.");
        break;
    }
    case 60971:
    {
        returnValue = F("Borre-Eck");
        break;
    }
    case 60972:
    {
        returnValue = F("Borrech");
        break;
    }
    case 60973:
    {
        returnValue = F("Borrel");
        break;
    }
    case 60974:
    {
        returnValue = F("Borrenkampstr.");
        break;
    }
    case 60975:
    {
        returnValue = F("Borrenstr.");
        break;
    }
    case 60976:
    {
        returnValue = F("Borrenweg");
        break;
    }
    case 60977:
    {
        returnValue = F("Borrer Str.");
        break;
    }
    case 60978:
    {
        returnValue = F("Borrfeldstr.");
        break;
    }
    case 60979:
    {
        returnValue = F("Borrgasse");
        break;
    }
    case 60980:
    {
        returnValue = F("Borriesstr.");
        break;
    }
    case 60981:
    {
        returnValue = F("Borrin");
        break;
    }
    case 60982:
    {
        returnValue = F("Borringhauser Str.");
        break;
    }
    case 60983:
    {
        returnValue = F("Borrishaag");
        break;
    }
    case 60984:
    {
        returnValue = F("Borromäerinnenstr.");
        break;
    }
    case 60985:
    {
        returnValue = F("Borromäusstr.");
        break;
    }
    case 60986:
    {
        returnValue = F("Borromäweg");
        break;
    }
    case 60987:
    {
        returnValue = F("Borrweg");
        break;
    }
    case 60988:
    {
        returnValue = F("Borrwiese");
        break;
    }
    case 60989:
    {
        returnValue = F("Borrüttestr.");
        break;
    }
    case 60990:
    {
        returnValue = F("Borsbacher Str.");
        break;
    }
    case 60991:
    {
        returnValue = F("Borsbergblick");
        break;
    }
    case 60992:
    {
        returnValue = F("Borsbergstr.");
        break;
    }
    case 60993:
    {
        returnValue = F("Borsbüller Ring");
        break;
    }
    case 60994:
    {
        returnValue = F("Borschelstr.");
        break;
    }
    case 60995:
    {
        returnValue = F("Borschelweg");
        break;
    }
    case 60996:
    {
        returnValue = F("Borschemicher Str.");
        break;
    }
    case 60997:
    {
        returnValue = F("Borschemicher Str. (neu)");
        break;
    }
    case 60998:
    {
        returnValue = F("Borscher Str.");
        break;
    }
    case 60999:
    {
        returnValue = F("Borscher Weg");
        break;
    }
    case 61000:
    {
        returnValue = F("Borschrech");
        break;
    }
    case 61001:
    {
        returnValue = F("Borsdorfer Str.");
        break;
    }
    case 61002:
    {
        returnValue = F("Borsdorfer Weg");
        break;
    }
    case 61003:
    {
        returnValue = F("Borselstege");
        break;
    }
    case 61004:
    {
        returnValue = F("Borsflether Weg");
        break;
    }
    case 61005:
    {
        returnValue = F("Borsflether Wisch");
        break;
    }
    case 61006:
    {
        returnValue = F("Borsigring");
        break;
    }
    case 61007:
    {
        returnValue = F("Borsigstr.");
        break;
    }
    case 61008:
    {
        returnValue = F("Borsigweg");
        break;
    }
    case 61009:
    {
        returnValue = F("Borsteinweg");
        break;
    }
    case 61010:
    {
        returnValue = F("Borstel");
        break;
    }
    case 61011:
    {
        returnValue = F("Borsteler Brink");
        break;
    }
    case 61012:
    {
        returnValue = F("Borsteler Bruch");
        break;
    }
    case 61013:
    {
        returnValue = F("Borsteler Chaussee");
        break;
    }
    case 61014:
    {
        returnValue = F("Borsteler Dorfstr.");
        break;
    }
    case 61015:
    {
        returnValue = F("Borsteler Feld");
        break;
    }
    case 61016:
    {
        returnValue = F("Borsteler Grund");
        break;
    }
    case 61017:
    {
        returnValue = F("Borsteler Hauptstr.");
        break;
    }
    case 61018:
    {
        returnValue = F("Borsteler Kirchenstieg");
        break;
    }
    case 61019:
    {
        returnValue = F("Borsteler Kirchenweg");
        break;
    }
    case 61020:
    {
        returnValue = F("Borsteler Kirchweg");
        break;
    }
    case 61021:
    {
        returnValue = F("Borsteler Landstr.");
        break;
    }
    case 61022:
    {
        returnValue = F("Borsteler Mühle-Sülfelder Kamp");
        break;
    }
    case 61023:
    {
        returnValue = F("Borsteler Reihe");
        break;
    }
    case 61024:
    {
        returnValue = F("Borsteler Stieg");
        break;
    }
    case 61025:
    {
        returnValue = F("Borsteler Str.");
        break;
    }
    case 61026:
    {
        returnValue = F("Borsteler Trift");
        break;
    }
    case 61027:
    {
        returnValue = F("Borsteler Weg");
        break;
    }
    case 61028:
    {
        returnValue = F("Borstelweg");
        break;
    }
    case 61029:
    {
        returnValue = F("Borstenbachstr.");
        break;
    }
    case 61030:
    {
        returnValue = F("Borstenbühlweg");
        break;
    }
    case 61031:
    {
        returnValue = F("Borstendamm");
        break;
    }
    case 61032:
    {
        returnValue = F("Borstendorfer Str.");
        break;
    }
    case 61033:
    {
        returnValue = F("Borsthusen");
        break;
    }
    case 61034:
    {
        returnValue = F("Borstler Wiesenweg");
        break;
    }
    case 61035:
    {
        returnValue = F("Borstorfer Str.");
        break;
    }
    case 61036:
    {
        returnValue = F("Borstorfstr.");
        break;
    }
    case 61037:
    {
        returnValue = F("Borstr.");
        break;
    }
    case 61038:
    {
        returnValue = F("Borststr.");
        break;
    }
    case 61039:
    {
        returnValue = F("Borstwiesenstr.");
        break;
    }
    case 61040:
    {
        returnValue = F("Borsum Dorfstr.");
        break;
    }
    case 61041:
    {
        returnValue = F("Borsumer Pass");
        break;
    }
    case 61042:
    {
        returnValue = F("Borsumer Str.");
        break;
    }
    case 61043:
    {
        returnValue = F("Bortelskamp");
        break;
    }
    case 61044:
    {
        returnValue = F("Bortenmacherstr.");
        break;
    }
    case 61045:
    {
        returnValue = F("Bortenwirkerweg");
        break;
    }
    case 61046:
    {
        returnValue = F("Bortewitzer Str.");
        break;
    }
    case 61047:
    {
        returnValue = F("Bortewitzer Weg");
        break;
    }
    case 61048:
    {
        returnValue = F("Bortfelder Str.");
        break;
    }
    case 61049:
    {
        returnValue = F("Borthener Weg");
        break;
    }
    case 61050:
    {
        returnValue = F("Borther Str.");
        break;
    }
    case 61051:
    {
        returnValue = F("Borther Weg");
        break;
    }
    case 61052:
    {
        returnValue = F("Bortkayr");
        break;
    }
    case 61053:
    {
        returnValue = F("Bortkelter");
        break;
    }
    case 61054:
    {
        returnValue = F("Bortshäuser Str.");
        break;
    }
    case 61055:
    {
        returnValue = F("Bortumweg");
        break;
    }
    case 61056:
    {
        returnValue = F("Borussenweg");
        break;
    }
    case 61057:
    {
        returnValue = F("Borussiastr.");
        break;
    }
    case 61058:
    {
        returnValue = F("Borussiaweg");
        break;
    }
    case 61059:
    {
        returnValue = F("Borwede");
        break;
    }
    case 61060:
    {
        returnValue = F("Borweder Weg");
        break;
    }
    case 61061:
    {
        returnValue = F("Borweg");
        break;
    }
    case 61062:
    {
        returnValue = F("Borwelle");
        break;
    }
    case 61063:
    {
        returnValue = F("Borwiese");
        break;
    }
    case 61064:
    {
        returnValue = F("Borwiesenstr.");
        break;
    }
    case 61065:
    {
        returnValue = F("Borxel");
        break;
    }
    case 61066:
    {
        returnValue = F("Borxelgasse");
        break;
    }
    case 61067:
    {
        returnValue = F("Borxlebener Str.");
        break;
    }
    case 61068:
    {
        returnValue = F("Borxleber Str.");
        break;
    }
    case 61069:
    {
        returnValue = F("Borxleber Weg");
        break;
    }
    case 61070:
    {
        returnValue = F("Bosau-Fahrt");
        break;
    }
    case 61071:
    {
        returnValue = F("Bosauer Str.");
        break;
    }
    case 61072:
    {
        returnValue = F("Bosbachstr.");
        break;
    }
    case 61073:
    {
        returnValue = F("Bosberg");
        break;
    }
    case 61074:
    {
        returnValue = F("Bosbüller Str.");
        break;
    }
    case 61075:
    {
        returnValue = F("Bosbüller Weg");
        break;
    }
    case 61076:
    {
        returnValue = F("Boschen");
        break;
    }
    case 61077:
    {
        returnValue = F("Boschenbergstr.");
        break;
    }
    case 61078:
    {
        returnValue = F("Boschengasse");
        break;
    }
    case 61079:
    {
        returnValue = F("Boschenhofstr.");
        break;
    }
    case 61080:
    {
        returnValue = F("Boschenlohweg");
        break;
    }
    case 61081:
    {
        returnValue = F("Boschensäge");
        break;
    }
    case 61082:
    {
        returnValue = F("Boschenweg");
        break;
    }
    case 61083:
    {
        returnValue = F("Boscherhausen");
        break;
    }
    case 61084:
    {
        returnValue = F("Boschertweg");
        break;
    }
    case 61085:
    {
        returnValue = F("Boscherweg");
        break;
    }
    case 61086:
    {
        returnValue = F("Boschetrundweg");
        break;
    }
    case 61087:
    {
        returnValue = F("Boschetstr.");
        break;
    }
    case 61088:
    {
        returnValue = F("Boschheideweg");
        break;
    }
    case 61089:
    {
        returnValue = F("Boschhorn");
        break;
    }
    case 61090:
    {
        returnValue = F("Boschhornweg");
        break;
    }
    case 61091:
    {
        returnValue = F("Boschkamper Weg");
        break;
    }
    case 61092:
    {
        returnValue = F("Boschkampweg");
        break;
    }
    case 61093:
    {
        returnValue = F("Boschland");
        break;
    }
    case 61094:
    {
        returnValue = F("Boschmansweg");
        break;
    }
    case 61095:
    {
        returnValue = F("Boschring");
        break;
    }
    case 61096:
    {
        returnValue = F("Boschstr.");
        break;
    }
    case 61097:
    {
        returnValue = F("Boschweg");
        break;
    }
    case 61098:
    {
        returnValue = F("Boschwiese");
        break;
    }
    case 61099:
    {
        returnValue = F("Bosdorfer Str.");
        break;
    }
    case 61100:
    {
        returnValue = F("Boselfelder");
        break;
    }
    case 61101:
    {
        returnValue = F("Boselweg");
        break;
    }
    case 61102:
    {
        returnValue = F("Bosenberg");
        break;
    }
    case 61103:
    {
        returnValue = F("Bosenbergblick");
        break;
    }
    case 61104:
    {
        returnValue = F("Bosenbergstr.");
        break;
    }
    case 61105:
    {
        returnValue = F("Bosendeller Weg");
        break;
    }
    case 61106:
    {
        returnValue = F("Bosener Str.");
        break;
    }
    case 61107:
    {
        returnValue = F("Bosener Weg");
        break;
    }
    case 61108:
    {
        returnValue = F("Bosenfeld");
        break;
    }
    case 61109:
    {
        returnValue = F("Bosenheimer Str.");
        break;
    }
    case 61110:
    {
        returnValue = F("Bosenheimer Weg");
        break;
    }
    case 61111:
    {
        returnValue = F("Bosenhof");
        break;
    }
    case 61112:
    {
        returnValue = F("Bosenhofweg");
        break;
    }
    case 61113:
    {
        returnValue = F("Boserother Str.");
        break;
    }
    case 61114:
    {
        returnValue = F("Boserstr.");
        break;
    }
    case 61115:
    {
        returnValue = F("Boseschneise");
        break;
    }
    case 61116:
    {
        returnValue = F("Bosestr.");
        break;
    }
    case 61117:
    {
        returnValue = F("Bosewitz");
        break;
    }
    case 61118:
    {
        returnValue = F("Bosfelder Weg");
        break;
    }
    case 61119:
    {
        returnValue = F("Boshämme");
        break;
    }
    case 61120:
    {
        returnValue = F("Bosiek");
        break;
    }
    case 61121:
    {
        returnValue = F("Bosinks Kamp");
        break;
    }
    case 61122:
    {
        returnValue = F("Boskamp");
        break;
    }
    case 61123:
    {
        returnValue = F("Boskampweg");
        break;
    }
    case 61124:
    {
        returnValue = F("Boskettbereich");
        break;
    }
    case 61125:
    {
        returnValue = F("Boskettstr.");
        break;
    }
    case 61126:
    {
        returnValue = F("Boskooper Weg");
        break;
    }
    case 61127:
    {
        returnValue = F("Boskoopstieg");
        break;
    }
    case 61128:
    {
        returnValue = F("Boskoopstr.");
        break;
    }
    case 61129:
    {
        returnValue = F("Boskoopweg");
        break;
    }
    case 61130:
    {
        returnValue = F("Boskop-Ring");
        break;
    }
    case 61131:
    {
        returnValue = F("Boskopweg");
        break;
    }
    case 61132:
    {
        returnValue = F("Boslarer Str.");
        break;
    }
    case 61133:
    {
        returnValue = F("Boslargasse");
        break;
    }
    case 61134:
    {
        returnValue = F("Boslerstr.");
        break;
    }
    case 61135:
    {
        returnValue = F("Boslerweg");
        break;
    }
    case 61136:
    {
        returnValue = F("Bosmannshof");
        break;
    }
    case 61137:
    {
        returnValue = F("Bosostr.");
        break;
    }
    case 61138:
    {
        returnValue = F("Bosquet");
        break;
    }
    case 61139:
    {
        returnValue = F("Bossardstr.");
        break;
    }
    case 61140:
    {
        returnValue = F("Bossardweg");
        break;
    }
    case 61141:
    {
        returnValue = F("Bossbrauck");
        break;
    }
    case 61142:
    {
        returnValue = F("Bosse");
        break;
    }
    case 61143:
    {
        returnValue = F("Bosseborner Str.");
        break;
    }
    case 61144:
    {
        returnValue = F("Bosseckherweg");
        break;
    }
    case 61145:
    {
        returnValue = F("Bosseer Krog");
        break;
    }
    case 61146:
    {
        returnValue = F("Bosseer Schoor");
        break;
    }
    case 61147:
    {
        returnValue = F("Bosseer Str.");
        break;
    }
    case 61148:
    {
        returnValue = F("Bossekuhler Weg");
        break;
    }
    case 61149:
    {
        returnValue = F("Bosselbar");
        break;
    }
    case 61150:
    {
        returnValue = F("Bosseler Str.");
        break;
    }
    case 61151:
    {
        returnValue = F("Bosselfeld");
        break;
    }
    case 61152:
    {
        returnValue = F("Bosselgraben");
        break;
    }
    case 61153:
    {
        returnValue = F("Bosselhaistr.");
        break;
    }
    case 61154:
    {
        returnValue = F("Bosselkamp");
        break;
    }
    case 61155:
    {
        returnValue = F("Bosselmannstr.");
        break;
    }
    case 61156:
    {
        returnValue = F("Bosselmoor");
        break;
    }
    case 61157:
    {
        returnValue = F("Bosseltsgrabenweg");
        break;
    }
    case 61158:
    {
        returnValue = F("Bosselweg");
        break;
    }
    case 61159:
    {
        returnValue = F("Bosselwisch");
        break;
    }
    case 61160:
    {
        returnValue = F("Bossenbrink");
        break;
    }
    case 61161:
    {
        returnValue = F("Bossendorfer Damm");
        break;
    }
    case 61162:
    {
        returnValue = F("Bossendorfer Weg");
        break;
    }
    case 61163:
    {
        returnValue = F("Bossenkamp");
        break;
    }
    case 61164:
    {
        returnValue = F("Bossenstr.");
        break;
    }
    case 61165:
    {
        returnValue = F("Bossenweg");
        break;
    }
    case 61166:
    {
        returnValue = F("Bossenwinkel");
        break;
    }
    case 61167:
    {
        returnValue = F("Bosseplatz");
        break;
    }
    case 61168:
    {
        returnValue = F("Bosserhofsweg");
        break;
    }
    case 61169:
    {
        returnValue = F("Bossertweg");
        break;
    }
    case 61170:
    {
        returnValue = F("Bosserweg");
        break;
    }
    case 61171:
    {
        returnValue = F("Bosseröder Weg");
        break;
    }
    case 61172:
    {
        returnValue = F("Bossestr.");
        break;
    }
    case 61173:
    {
        returnValue = F("Bossiner Str.");
        break;
    }
    case 61174:
    {
        returnValue = F("Bossingerweg");
        break;
    }
    case 61175:
    {
        returnValue = F("Bossistr.");
        break;
    }
    case 61176:
    {
        returnValue = F("Bosslerstr.");
        break;
    }
    case 61177:
    {
        returnValue = F("Bosslerweg");
        break;
    }
    case 61178:
    {
        returnValue = F("Bossmannbuckelweg");
        break;
    }
    case 61179:
    {
        returnValue = F("Bostalstr.");
        break;
    }
    case 61180:
    {
        returnValue = F("Bostedtstr.");
        break;
    }
    case 61181:
    {
        returnValue = F("Bostelberg");
        break;
    }
    case 61182:
    {
        returnValue = F("Bosteleck");
        break;
    }
    case 61183:
    {
        returnValue = F("Bosteler Berg");
        break;
    }
    case 61184:
    {
        returnValue = F("Bosteler Stieg");
        break;
    }
    case 61185:
    {
        returnValue = F("Bosteler Str.");
        break;
    }
    case 61186:
    {
        returnValue = F("Bosteler Weg");
        break;
    }
    case 61187:
    {
        returnValue = F("Bostengarten");
        break;
    }
    case 61188:
    {
        returnValue = F("Bosthorst");
        break;
    }
    case 61189:
    {
        returnValue = F("Boston Street");
        break;
    }
    case 61190:
    {
        returnValue = F("Bostonring");
        break;
    }
    case 61191:
    {
        returnValue = F("Botanisch-Dendrologischer Garten");
        break;
    }
    case 61192:
    {
        returnValue = F("Botanischen Alpengarten Sündermann");
        break;
    }
    case 61193:
    {
        returnValue = F("Botanischer Garten");
        break;
    }
    case 61194:
    {
        returnValue = F("Botanischer Garten Adorf");
        break;
    }
    case 61195:
    {
        returnValue = F("Botanischer Garten Eschwege");
        break;
    }
    case 61196:
    {
        returnValue = F("Botanischer Garten Schloss Bieberstein");
        break;
    }
    case 61197:
    {
        returnValue = F("Botanischer Lehrgarten");
        break;
    }
    case 61198:
    {
        returnValue = F("Botanischer Schlosspark");
        break;
    }
    case 61199:
    {
        returnValue = F("Botanischer Schmetterlingsgarten");
        break;
    }
    case 61200:
    {
        returnValue = F("Botelsdorfer Weg");
        break;
    }
    case 61201:
    {
        returnValue = F("Botenberg");
        break;
    }
    case 61202:
    {
        returnValue = F("Botengartenweg");
        break;
    }
    case 61203:
    {
        returnValue = F("Botengasse");
        break;
    }
    case 61204:
    {
        returnValue = F("Botenheimer Str.");
        break;
    }
    case 61205:
    {
        returnValue = F("Botenheimer Weg");
        break;
    }
    case 61206:
    {
        returnValue = F("Botenkamp");
        break;
    }
    case 61207:
    {
        returnValue = F("Botenstr.");
        break;
    }
    case 61208:
    {
        returnValue = F("Botenveitlweg");
        break;
    }
    case 61209:
    {
        returnValue = F("Botenweg");
        break;
    }
    case 61210:
    {
        returnValue = F("Bothehof");
        break;
    }
    case 61211:
    {
        returnValue = F("Botheler Weg");
        break;
    }
    case 61212:
    {
        returnValue = F("Bothengasse");
        break;
    }
    case 61213:
    {
        returnValue = F("Bothenhof");
        break;
    }
    case 61214:
    {
        returnValue = F("Bothenstr.");
        break;
    }
    case 61215:
    {
        returnValue = F("Bothenweg");
        break;
    }
    case 61216:
    {
        returnValue = F("Botheweg");
        break;
    }
    case 61217:
    {
        returnValue = F("Bothfelder Damm");
        break;
    }
    case 61218:
    {
        returnValue = F("Bothfelder Str.");
        break;
    }
    case 61219:
    {
        returnValue = F("Bothgasse");
        break;
    }
    case 61220:
    {
        returnValue = F("Bothkamper Weg");
        break;
    }
    case 61221:
    {
        returnValue = F("Bothkampermühle");
        break;
    }
    case 61222:
    {
        returnValue = F("Bothmersche Str.");
        break;
    }
    case 61223:
    {
        returnValue = F("Bothmerscher Weg");
        break;
    }
    case 61224:
    {
        returnValue = F("Botho-Weg");
        break;
    }
    case 61225:
    {
        returnValue = F("Botsberg");
        break;
    }
    case 61226:
    {
        returnValue = F("Botschelsgraben");
        break;
    }
    case 61227:
    {
        returnValue = F("Bottchenbachstr.");
        break;
    }
    case 61228:
    {
        returnValue = F("Bottelter");
        break;
    }
    case 61229:
    {
        returnValue = F("Bottenbacher Gasse");
        break;
    }
    case 61230:
    {
        returnValue = F("Bottenbacher Str.");
        break;
    }
    case 61231:
    {
        returnValue = F("Bottenbacher Weg");
        break;
    }
    case 61232:
    {
        returnValue = F("Bottenbacher-Wand-Weg");
        break;
    }
    case 61233:
    {
        returnValue = F("Bottenberger Str.");
        break;
    }
    case 61234:
    {
        returnValue = F("Bottenberger Weg");
        break;
    }
    case 61235:
    {
        returnValue = F("Bottenbergweg");
        break;
    }
    case 61236:
    {
        returnValue = F("Bottenbruch");
        break;
    }
    case 61237:
    {
        returnValue = F("Bottenbrunnenstr.");
        break;
    }
    case 61238:
    {
        returnValue = F("Bottendorfer Str.");
        break;
    }
    case 61239:
    {
        returnValue = F("Bottengasse");
        break;
    }
    case 61240:
    {
        returnValue = F("Bottenhorner Str.");
        break;
    }
    case 61241:
    {
        returnValue = F("Bottenkuhl");
        break;
    }
    case 61242:
    {
        returnValue = F("Bottenreute");
        break;
    }
    case 61243:
    {
        returnValue = F("Botterbarg");
        break;
    }
    case 61244:
    {
        returnValue = F("Botterbloomstr.");
        break;
    }
    case 61245:
    {
        returnValue = F("Botterbusch");
        break;
    }
    case 61246:
    {
        returnValue = F("Botterbuschweg");
        break;
    }
    case 61247:
    {
        returnValue = F("Botterhook");
        break;
    }
    case 61248:
    {
        returnValue = F("Botterhörn");
        break;
    }
    case 61249:
    {
        returnValue = F("Botterkamp");
        break;
    }
    case 61250:
    {
        returnValue = F("Botterstieg");
        break;
    }
    case 61251:
    {
        returnValue = F("Botterstr.");
        break;
    }
    case 61252:
    {
        returnValue = F("Botterstraat");
        break;
    }
    case 61253:
    {
        returnValue = F("Botterweg");
        break;
    }
    case 61254:
    {
        returnValue = F("Bottichweg");
        break;
    }
    case 61255:
    {
        returnValue = F("Bottigstr.");
        break;
    }
    case 61256:
    {
        returnValue = F("Bottinger Str.");
        break;
    }
    case 61257:
    {
        returnValue = F("Bottinger Weg");
        break;
    }
    case 61258:
    {
        returnValue = F("Bottmersdorfer Str.");
        break;
    }
    case 61259:
    {
        returnValue = F("Bottroper Str.");
        break;
    }
    case 61260:
    {
        returnValue = F("Bottroper Weg");
        break;
    }
    case 61261:
    {
        returnValue = F("Bottumer Kirchweg");
        break;
    }
    case 61262:
    {
        returnValue = F("Bottumer Str.");
        break;
    }
    case 61263:
    {
        returnValue = F("Bottwarstr.");
        break;
    }
    case 61264:
    {
        returnValue = F("Bottwartalstr.");
        break;
    }
    case 61265:
    {
        returnValue = F("Bottwarweg");
        break;
    }
    case 61266:
    {
        returnValue = F("Botzbachweg");
        break;
    }
    case 61267:
    {
        returnValue = F("Botzdorfer Weg");
        break;
    }
    case 61268:
    {
        returnValue = F("Botzenstr.");
        break;
    }
    case 61269:
    {
        returnValue = F("Botzenweiler");
        break;
    }
    case 61270:
    {
        returnValue = F("Botzheimweg");
        break;
    }
    case 61271:
    {
        returnValue = F("Botzlarstr.");
        break;
    }
    case 61272:
    {
        returnValue = F("Botzstr.");
        break;
    }
    case 61273:
    {
        returnValue = F("Bouchet Str.");
        break;
    }
    case 61274:
    {
        returnValue = F("Bouderather Str.");
        break;
    }
    case 61275:
    {
        returnValue = F("Bouguenais-Allee");
        break;
    }
    case 61276:
    {
        returnValue = F("Bouhlentwiete");
        break;
    }
    case 61277:
    {
        returnValue = F("Boule Platz");
        break;
    }
    case 61278:
    {
        returnValue = F("Boule-Platz");
        break;
    }
    case 61279:
    {
        returnValue = F("Boulebahn");
        break;
    }
    case 61280:
    {
        returnValue = F("Bouleplatz");
        break;
    }
    case 61281:
    {
        returnValue = F("Bouleplatz und Weinstand");
        break;
    }
    case 61282:
    {
        returnValue = F("Boulevard");
        break;
    }
    case 61283:
    {
        returnValue = F("Bouliger Str.");
        break;
    }
    case 61284:
    {
        returnValue = F("Boulléweg");
        break;
    }
    case 61285:
    {
        returnValue = F("Boulodrome");
        break;
    }
    case 61286:
    {
        returnValue = F("Boulognestr.");
        break;
    }
    case 61287:
    {
        returnValue = F("Boumannstr.");
        break;
    }
    case 61288:
    {
        returnValue = F("Boumannweg");
        break;
    }
    case 61289:
    {
        returnValue = F("Bouraueler Str.");
        break;
    }
    case 61290:
    {
        returnValue = F("Bourcetstr.");
        break;
    }
    case 61291:
    {
        returnValue = F("Bourdamm");
        break;
    }
    case 61292:
    {
        returnValue = F("Bourdonstr.");
        break;
    }
    case 61293:
    {
        returnValue = F("Bourdrischer Bahn");
        break;
    }
    case 61294:
    {
        returnValue = F("Bourg-Achard-Str.");
        break;
    }
    case 61295:
    {
        returnValue = F("Bourg-de-Péage-Str.");
        break;
    }
    case 61296:
    {
        returnValue = F("Bourg-lès-Valence-Platz");
        break;
    }
    case 61297:
    {
        returnValue = F("Bourganeufer Str.");
        break;
    }
    case 61298:
    {
        returnValue = F("Bourger Platz");
        break;
    }
    case 61299:
    {
        returnValue = F("Bourgoinstr.");
        break;
    }
    case 61300:
    {
        returnValue = F("Bourheimer Burg");
        break;
    }
    case 61301:
    {
        returnValue = F("Bourheimer Str.");
        break;
    }
    case 61302:
    {
        returnValue = F("Bourheimer Weg");
        break;
    }
    case 61303:
    {
        returnValue = F("Bourscheider Weg");
        break;
    }
    case 61304:
    {
        returnValue = F("Bourscheidtstr.");
        break;
    }
    case 61305:
    {
        returnValue = F("Boursstr.");
        break;
    }
    case 61306:
    {
        returnValue = F("Bourtanger Str.");
        break;
    }
    case 61307:
    {
        returnValue = F("Bourtanger Weg");
        break;
    }
    case 61308:
    {
        returnValue = F("Bourtscheidstr.");
        break;
    }
    case 61309:
    {
        returnValue = F("Bousch");
        break;
    }
    case 61310:
    {
        returnValue = F("Bouser Str.");
        break;
    }
    case 61311:
    {
        returnValue = F("Bouser Weg");
        break;
    }
    case 61312:
    {
        returnValue = F("Bousstr.");
        break;
    }
    case 61313:
    {
        returnValue = F("Boutenweg");
        break;
    }
    case 61314:
    {
        returnValue = F("Boutierstr.");
        break;
    }
    case 61315:
    {
        returnValue = F("Bouttevillestr.");
        break;
    }
    case 61316:
    {
        returnValue = F("Bouwinghausenstr.");
        break;
    }
    case 61317:
    {
        returnValue = F("Bouxwillerstr.");
        break;
    }
    case 61318:
    {
        returnValue = F("Bouzonviller Str.");
        break;
    }
    case 61319:
    {
        returnValue = F("Bovelandsweg");
        break;
    }
    case 61320:
    {
        returnValue = F("Bovelidweg");
        break;
    }
    case 61321:
    {
        returnValue = F("Boven Hoten");
        break;
    }
    case 61322:
    {
        returnValue = F("Bovenauer Str.");
        break;
    }
    case 61323:
    {
        returnValue = F("Bovenberg");
        break;
    }
    case 61324:
    {
        returnValue = F("Bovenberge");
        break;
    }
    case 61325:
    {
        returnValue = F("Bovender Str.");
        break;
    }
    case 61326:
    {
        returnValue = F("Bovenheide");
        break;
    }
    case 61327:
    {
        returnValue = F("Bovenholt");
        break;
    }
    case 61328:
    {
        returnValue = F("Bovenhusen");
        break;
    }
    case 61329:
    {
        returnValue = F("Bovenkerkesch");
        break;
    }
    case 61330:
    {
        returnValue = F("Bovenmoor");
        break;
    }
    case 61331:
    {
        returnValue = F("Bovenpad");
        break;
    }
    case 61332:
    {
        returnValue = F("Bovenpolder");
        break;
    }
    case 61333:
    {
        returnValue = F("Boverath");
        break;
    }
    case 61334:
    {
        returnValue = F("Boverather Str.");
        break;
    }
    case 61335:
    {
        returnValue = F("Bovereiweg");
        break;
    }
    case 61336:
    {
        returnValue = F("Boverej");
        break;
    }
    case 61337:
    {
        returnValue = F("Boveristr.");
        break;
    }
    case 61338:
    {
        returnValue = F("Boverste Ostfeldweg");
        break;
    }
    case 61339:
    {
        returnValue = F("Boverstr.");
        break;
    }
    case 61340:
    {
        returnValue = F("Bovert");
        break;
    }
    case 61341:
    {
        returnValue = F("Boverter Kirchweg");
        break;
    }
    case 61342:
    {
        returnValue = F("Boverystr.");
        break;
    }
    case 61343:
    {
        returnValue = F("Bovinger Weg");
        break;
    }
    case 61344:
    {
        returnValue = F("Bovoloner Allee");
        break;
    }
    case 61345:
    {
        returnValue = F("Bowel");
        break;
    }
    case 61346:
    {
        returnValue = F("Bowenweg");
        break;
    }
    case 61347:
    {
        returnValue = F("Bowieser Str.");
        break;
    }
    case 61348:
    {
        returnValue = F("Boxbachpfad");
        break;
    }
    case 61349:
    {
        returnValue = F("Boxbachstr.");
        break;
    }
    case 61350:
    {
        returnValue = F("Boxbachweg");
        break;
    }
    case 61351:
    {
        returnValue = F("Boxberg");
        break;
    }
    case 61352:
    {
        returnValue = F("Boxberger Pfad");
        break;
    }
    case 61353:
    {
        returnValue = F("Boxberger Str.");
        break;
    }
    case 61354:
    {
        returnValue = F("Boxberger Weg");
        break;
    }
    case 61355:
    {
        returnValue = F("Boxbergerstr.");
        break;
    }
    case 61356:
    {
        returnValue = F("Boxbergstr.");
        break;
    }
    case 61357:
    {
        returnValue = F("Boxbergweg");
        break;
    }
    case 61358:
    {
        returnValue = F("Boxbrunner Str.");
        break;
    }
    case 61359:
    {
        returnValue = F("Boxdorf");
        break;
    }
    case 61360:
    {
        returnValue = F("Boxdorfer Str.");
        break;
    }
    case 61361:
    {
        returnValue = F("Boxeckeweg");
        break;
    }
    case 61362:
    {
        returnValue = F("Boxengasse");
        break;
    }
    case 61363:
    {
        returnValue = F("Boxerberg");
        break;
    }
    case 61364:
    {
        returnValue = F("Boxergasse");
        break;
    }
    case 61365:
    {
        returnValue = F("Boxgasse");
        break;
    }
    case 61366:
    {
        returnValue = F("Boxhecke");
        break;
    }
    case 61367:
    {
        returnValue = F("Boxheimerhof");
        break;
    }
    case 61368:
    {
        returnValue = F("Boxheimerhofstr.");
        break;
    }
    case 61369:
    {
        returnValue = F("Boxholmstr.");
        break;
    }
    case 61370:
    {
        returnValue = F("Boxhorngasse");
        break;
    }
    case 61371:
    {
        returnValue = F("Boxhornschanzenweg");
        break;
    }
    case 61372:
    {
        returnValue = F("Boxlerweg");
        break;
    }
    case 61373:
    {
        returnValue = F("Boxlohe");
        break;
    }
    case 61374:
    {
        returnValue = F("Boxlund");
        break;
    }
    case 61375:
    {
        returnValue = F("Boxmaul");
        break;
    }
    case 61376:
    {
        returnValue = F("Boxsteig");
        break;
    }
    case 61377:
    {
        returnValue = F("Boxtaler Weg");
        break;
    }
    case 61378:
    {
        returnValue = F("Boxtalstr.");
        break;
    }
    case 61379:
    {
        returnValue = F("Boxteler Str.");
        break;
    }
    case 61380:
    {
        returnValue = F("Boxtelstr.");
        break;
    }
    case 61381:
    {
        returnValue = F("Boy-Albers-Str.");
        break;
    }
    case 61382:
    {
        returnValue = F("Boy-Jacobsen-Weg");
        break;
    }
    case 61383:
    {
        returnValue = F("Boy-Lornsen-Ring");
        break;
    }
    case 61384:
    {
        returnValue = F("Boy-Nielsen-Str.");
        break;
    }
    case 61385:
    {
        returnValue = F("Boy-Peter-Eben-Weg");
        break;
    }
    case 61386:
    {
        returnValue = F("Boy-Peter-Möller-Wai");
        break;
    }
    case 61387:
    {
        returnValue = F("Boy-Truels-Str.");
        break;
    }
    case 61388:
    {
        returnValue = F("Boyebüll");
        break;
    }
    case 61389:
    {
        returnValue = F("Boyen");
        break;
    }
    case 61390:
    {
        returnValue = F("Boyens Schluß");
        break;
    }
    case 61391:
    {
        returnValue = F("Boyensteg");
        break;
    }
    case 61392:
    {
        returnValue = F("Boyenweg");
        break;
    }
    case 61393:
    {
        returnValue = F("Boyer Weg");
        break;
    }
    case 61394:
    {
        returnValue = F("Boyersweg");
        break;
    }
    case 61395:
    {
        returnValue = F("Boyeweg");
        break;
    }
    case 61396:
    {
        returnValue = F("Boyneburger Str.");
        break;
    }
    case 61397:
    {
        returnValue = F("Boyneburger Tor");
        break;
    }
    case 61398:
    {
        returnValue = F("Boyneburger Weg");
        break;
    }
    case 61399:
    {
        returnValue = F("Boysenfeld");
        break;
    }
    case 61400:
    {
        returnValue = F("Boysenkoppel");
        break;
    }
    case 61401:
    {
        returnValue = F("Boysenstr.");
        break;
    }
    case 61402:
    {
        returnValue = F("Boysenweg");
        break;
    }
    case 61403:
    {
        returnValue = F("Boystr.");
        break;
    }
    case 61404:
    {
        returnValue = F("Boystraat");
        break;
    }
    case 61405:
    {
        returnValue = F("Boytinks Mühle");
        break;
    }
    case 61406:
    {
        returnValue = F("Boytinkweg");
        break;
    }
    case 61407:
    {
        returnValue = F("Boyweg");
        break;
    }
    case 61408:
    {
        returnValue = F("Bozaunweg");
        break;
    }
    case 61409:
    {
        returnValue = F("Bozener Str.");
        break;
    }
    case 61410:
    {
        returnValue = F("Bozener Weg");
        break;
    }
    case 61411:
    {
        returnValue = F("Bozenhardstr.");
        break;
    }
    case 61412:
    {
        returnValue = F("Bozerei");
        break;
    }
    case 61413:
    {
        returnValue = F("Boßdorfer Dorfstr.");
        break;
    }
    case 61414:
    {
        returnValue = F("Boßdorfstr.");
        break;
    }
    case 61415:
    {
        returnValue = F("Boßeldamm");
        break;
    }
    case 61416:
    {
        returnValue = F("Boßeler Str.");
        break;
    }
    case 61417:
    {
        returnValue = F("Boßelkamp");
        break;
    }
    case 61418:
    {
        returnValue = F("Boßelring");
        break;
    }
    case 61419:
    {
        returnValue = F("Boßelstr.");
        break;
    }
    case 61420:
    {
        returnValue = F("Boßelweg");
        break;
    }
    case 61421:
    {
        returnValue = F("Boßkampstr.");
        break;
    }
    case 61422:
    {
        returnValue = F("Boßlersteig");
        break;
    }
    case 61423:
    {
        returnValue = F("Boßlerstr.");
        break;
    }
    case 61424:
    {
        returnValue = F("Boßlerweg");
        break;
    }
    case 61425:
    {
        returnValue = F("Boßletstr.");
        break;
    }
    case 61426:
    {
        returnValue = F("Boßmühle");
        break;
    }
    case 61427:
    {
        returnValue = F("Boöschfeilder Wääch");
        break;
    }
    case 61428:
    {
        returnValue = F("Braache");
        break;
    }
    case 61429:
    {
        returnValue = F("Braacher Str.");
        break;
    }
    case 61430:
    {
        returnValue = F("Braak");
        break;
    }
    case 61431:
    {
        returnValue = F("Braaken");
        break;
    }
    case 61432:
    {
        returnValue = F("Braakendiek");
        break;
    }
    case 61433:
    {
        returnValue = F("Braaker Landstr.");
        break;
    }
    case 61434:
    {
        returnValue = F("Braaker Mühle");
        break;
    }
    case 61435:
    {
        returnValue = F("Braaker Mühlenweg");
        break;
    }
    case 61436:
    {
        returnValue = F("Braaker Str.");
        break;
    }
    case 61437:
    {
        returnValue = F("Braaker Weg");
        break;
    }
    case 61438:
    {
        returnValue = F("Braakestr.");
        break;
    }
    case 61439:
    {
        returnValue = F("Braakfeld");
        break;
    }
    case 61440:
    {
        returnValue = F("Braakkamp");
        break;
    }
    case 61441:
    {
        returnValue = F("Braakkampsweg");
        break;
    }
    case 61442:
    {
        returnValue = F("Braaklander Weg");
        break;
    }
    case 61443:
    {
        returnValue = F("Braakstr.");
        break;
    }
    case 61444:
    {
        returnValue = F("Braakweg");
        break;
    }
    case 61445:
    {
        returnValue = F("Braampatt");
        break;
    }
    case 61446:
    {
        returnValue = F("Braamweg");
        break;
    }
    case 61447:
    {
        returnValue = F("Braamweg Nord");
        break;
    }
    case 61448:
    {
        returnValue = F("Braamweg Süd");
        break;
    }
    case 61449:
    {
        returnValue = F("Braas- und Schwenkstr.");
        break;
    }
    case 61450:
    {
        returnValue = F("Braasche");
        break;
    }
    case 61451:
    {
        returnValue = F("Braasstr.");
        break;
    }
    case 61452:
    {
        returnValue = F("Braatjenwinkel");
        break;
    }
    case 61453:
    {
        returnValue = F("Brabandstaller Weg");
        break;
    }
    case 61454:
    {
        returnValue = F("Brabandstieg");
        break;
    }
    case 61455:
    {
        returnValue = F("Brabandtstr.");
        break;
    }
    case 61456:
    {
        returnValue = F("Brabanter Platz");
        break;
    }
    case 61457:
    {
        returnValue = F("Brabanter Str.");
        break;
    }
    case 61458:
    {
        returnValue = F("Brabanter Weg");
        break;
    }
    case 61459:
    {
        returnValue = F("Brabanterstr.");
        break;
    }
    case 61460:
    {
        returnValue = F("Brabantsfeldweg");
        break;
    }
    case 61461:
    {
        returnValue = F("Brabantstr.");
        break;
    }
    case 61462:
    {
        returnValue = F("Brabantweg");
        break;
    }
    case 61463:
    {
        returnValue = F("Brabecke");
        break;
    }
    case 61464:
    {
        returnValue = F("Brabeckstr.");
        break;
    }
    case 61465:
    {
        returnValue = F("Brabeckweg");
        break;
    }
    case 61466:
    {
        returnValue = F("Brabenderstr.");
        break;
    }
    case 61467:
    {
        returnValue = F("Brabenderweg");
        break;
    }
    case 61468:
    {
        returnValue = F("Braberholzweg");
        break;
    }
    case 61469:
    {
        returnValue = F("Brachalmet");
        break;
    }
    case 61470:
    {
        returnValue = F("Brachbacher Str.");
        break;
    }
    case 61471:
    {
        returnValue = F("Brachelener Str.");
        break;
    }
    case 61472:
    {
        returnValue = F("Brachenfeld");
        break;
    }
    case 61473:
    {
        returnValue = F("Brachenfelder Eck");
        break;
    }
    case 61474:
    {
        returnValue = F("Brachenfelder Str.");
        break;
    }
    case 61475:
    {
        returnValue = F("Brachenreuthe");
        break;
    }
    case 61476:
    {
        returnValue = F("Brachenweg");
        break;
    }
    case 61477:
    {
        returnValue = F("Bracher Weg");
        break;
    }
    case 61478:
    {
        returnValue = F("Brachertweg");
        break;
    }
    case 61479:
    {
        returnValue = F("Brachestr.");
        break;
    }
    case 61480:
    {
        returnValue = F("Brachetalringweg");
        break;
    }
    case 61481:
    {
        returnValue = F("Brachetalstr.");
        break;
    }
    case 61482:
    {
        returnValue = F("Bracheter Weg");
        break;
    }
    case 61483:
    {
        returnValue = F("Brachetstr.");
        break;
    }
    case 61484:
    {
        returnValue = F("Brachfeld");
        break;
    }
    case 61485:
    {
        returnValue = F("Brachfelder Str.");
        break;
    }
    case 61486:
    {
        returnValue = F("Brachfeldstr.");
        break;
    }
    case 61487:
    {
        returnValue = F("Brachfeldweg");
        break;
    }
    case 61488:
    {
        returnValue = F("Brachflecken");
        break;
    }
    case 61489:
    {
        returnValue = F("Brachheimer Weg");
        break;
    }
    case 61490:
    {
        returnValue = F("Brachlandweg");
        break;
    }
    case 61491:
    {
        returnValue = F("Brachlowstr.");
        break;
    }
    case 61492:
    {
        returnValue = F("Brachsenstr.");
        break;
    }
    case 61493:
    {
        returnValue = F("Brachsenweg");
        break;
    }
    case 61494:
    {
        returnValue = F("Brachshammerweg");
        break;
    }
    case 61495:
    {
        returnValue = F("Brachstedter Ring");
        break;
    }
    case 61496:
    {
        returnValue = F("Brachstedter Str.");
        break;
    }
    case 61497:
    {
        returnValue = F("Brachstedter Weg");
        break;
    }
    case 61498:
    {
        returnValue = F("Brachstr.");
        break;
    }
    case 61499:
    {
        returnValue = F("Brachstädter Str.");
        break;
    }
    case 61500:
    {
        returnValue = F("Bracht");
        break;
    }
    case 61501:
    {
        returnValue = F("Brachtenbecker Weg");
        break;
    }
    case 61502:
    {
        returnValue = F("Brachtendorfer Weg");
        break;
    }
    case 61503:
    {
        returnValue = F("Brachter Landstr.");
        break;
    }
    case 61504:
    {
        returnValue = F("Brachter Mühle");
        break;
    }
    case 61505:
    {
        returnValue = F("Brachter Pfad");
        break;
    }
    case 61506:
    {
        returnValue = F("Brachter Str.");
        break;
    }
    case 61507:
    {
        returnValue = F("Brachtesendeweg");
        break;
    }
    case 61508:
    {
        returnValue = F("Brachthauser Weg");
        break;
    }
    case 61509:
    {
        returnValue = F("Brachthäuser Str.");
        break;
    }
    case 61510:
    {
        returnValue = F("Brachthäuserstr.");
        break;
    }
    case 61511:
    {
        returnValue = F("Brachtlage");
        break;
    }
    case 61512:
    {
        returnValue = F("Brachtpetalstr.");
        break;
    }
    case 61513:
    {
        returnValue = F("Brachtshof");
        break;
    }
    case 61514:
    {
        returnValue = F("Brachtstr.");
        break;
    }
    case 61515:
    {
        returnValue = F("Brachtsweg");
        break;
    }
    case 61516:
    {
        returnValue = F("Brachttalstr.");
        break;
    }
    case 61517:
    {
        returnValue = F("Brachtweg");
        break;
    }
    case 61518:
    {
        returnValue = F("Brachumstr.");
        break;
    }
    case 61519:
    {
        returnValue = F("Brachvogeldamm");
        break;
    }
    case 61520:
    {
        returnValue = F("Brachvogelring");
        break;
    }
    case 61521:
    {
        returnValue = F("Brachvogelsteg");
        break;
    }
    case 61522:
    {
        returnValue = F("Brachvogelweg");
        break;
    }
    case 61523:
    {
        returnValue = F("Brachweg");
        break;
    }
    case 61524:
    {
        returnValue = F("Brachwies");
        break;
    }
    case 61525:
    {
        returnValue = F("Brachwiese");
        break;
    }
    case 61526:
    {
        returnValue = F("Brachwiesenweg");
        break;
    }
    case 61527:
    {
        returnValue = F("Brachwinkel");
        break;
    }
    case 61528:
    {
        returnValue = F("Brachwitzer Dorfstr.");
        break;
    }
    case 61529:
    {
        returnValue = F("Brachwitzer Str.");
        break;
    }
    case 61530:
    {
        returnValue = F("Brachwitzer Weg");
        break;
    }
    case 61531:
    {
        returnValue = F("Brachäcker");
        break;
    }
    case 61532:
    {
        returnValue = F("Bracke");
        break;
    }
    case 61533:
    {
        returnValue = F("Brackebuschweg");
        break;
    }
    case 61534:
    {
        returnValue = F("Brackeler Str.");
        break;
    }
    case 61535:
    {
        returnValue = F("Brackemicher Str.");
        break;
    }
    case 61536:
    {
        returnValue = F("Bracken");
        break;
    }
    case 61537:
    {
        returnValue = F("Brackenberg");
        break;
    }
    case 61538:
    {
        returnValue = F("Brackenbergstr.");
        break;
    }
    case 61539:
    {
        returnValue = F("Brackenbergweg");
        break;
    }
    case 61540:
    {
        returnValue = F("Brackende");
        break;
    }
    case 61541:
    {
        returnValue = F("Brackendorfer Str.");
        break;
    }
    case 61542:
    {
        returnValue = F("Brackenheimer Str.");
        break;
    }
    case 61543:
    {
        returnValue = F("Brackenheimerweg");
        break;
    }
    case 61544:
    {
        returnValue = F("Brackenhof");
        break;
    }
    case 61545:
    {
        returnValue = F("Brackenhofer Weg");
        break;
    }
    case 61546:
    {
        returnValue = F("Brackenkamp");
        break;
    }
    case 61547:
    {
        returnValue = F("Brackenlohrer Str.");
        break;
    }
    case 61548:
    {
        returnValue = F("Brackenstr.");
        break;
    }
    case 61549:
    {
        returnValue = F("Brackenweg");
        break;
    }
    case 61550:
    {
        returnValue = F("Brackenwiese");
        break;
    }
    case 61551:
    {
        returnValue = F("Bracker'sche Koppel");
        break;
    }
    case 61552:
    {
        returnValue = F("Brackerkoppel");
        break;
    }
    case 61553:
    {
        returnValue = F("Brackerweg");
        break;
    }
    case 61554:
    {
        returnValue = F("Brackestr.");
        break;
    }
    case 61555:
    {
        returnValue = F("Brackhüttenweg");
        break;
    }
    case 61556:
    {
        returnValue = F("Bracklandweg");
        break;
    }
    case 61557:
    {
        returnValue = F("Brackler Grund");
        break;
    }
    case 61558:
    {
        returnValue = F("Brackleystr.");
        break;
    }
    case 61559:
    {
        returnValue = F("Bracklos Kamp");
        break;
    }
    case 61560:
    {
        returnValue = F("Brackmannskamp");
        break;
    }
    case 61561:
    {
        returnValue = F("Brackmannstr.");
        break;
    }
    case 61562:
    {
        returnValue = F("Brackrade");
        break;
    }
    case 61563:
    {
        returnValue = F("Brackstedter Str.");
        break;
    }
    case 61564:
    {
        returnValue = F("Brackstr.");
        break;
    }
    case 61565:
    {
        returnValue = F("Brackstücken");
        break;
    }
    case 61566:
    {
        returnValue = F("Brackwang");
        break;
    }
    case 61567:
    {
        returnValue = F("Brackwanger Str.");
        break;
    }
    case 61568:
    {
        returnValue = F("Brackweder Str.");
        break;
    }
    case 61569:
    {
        returnValue = F("Brackweg");
        break;
    }
    case 61570:
    {
        returnValue = F("Bradenhoff");
        break;
    }
    case 61571:
    {
        returnValue = F("Bradenstraat");
        break;
    }
    case 61572:
    {
        returnValue = F("Braderuper Str.");
        break;
    }
    case 61573:
    {
        returnValue = F("Braderuper Weg");
        break;
    }
    case 61574:
    {
        returnValue = F("Bradeweg");
        break;
    }
    case 61575:
    {
        returnValue = F("Bradford-Tracey-Platz");
        break;
    }
    case 61576:
    {
        returnValue = F("Bradinger Feld");
        break;
    }
    case 61577:
    {
        returnValue = F("Bradlberg");
        break;
    }
    case 61578:
    {
        returnValue = F("Bradlengasse");
        break;
    }
    case 61579:
    {
        returnValue = F("Bradleystr.");
        break;
    }
    case 61580:
    {
        returnValue = F("Braemweg");
        break;
    }
    case 61581:
    {
        returnValue = F("Braeunigstr.");
        break;
    }
    case 61582:
    {
        returnValue = F("Braghet Jaat");
        break;
    }
    case 61583:
    {
        returnValue = F("Brahe");
        break;
    }
    case 61584:
    {
        returnValue = F("Brahestr.");
        break;
    }
    case 61585:
    {
        returnValue = F("Brahlstorfer Hütte");
        break;
    }
    case 61586:
    {
        returnValue = F("Brahlstorfer Str.");
        break;
    }
    case 61587:
    {
        returnValue = F("Brahmbacher Weg");
        break;
    }
    case 61588:
    {
        returnValue = F("Brahmberg");
        break;
    }
    case 61589:
    {
        returnValue = F("Brahmbergsweg");
        break;
    }
    case 61590:
    {
        returnValue = F("Brahmbuschstr.");
        break;
    }
    case 61591:
    {
        returnValue = F("Brahmenauer Str.");
        break;
    }
    case 61592:
    {
        returnValue = F("Brahmenberg");
        break;
    }
    case 61593:
    {
        returnValue = F("Brahmersbachstr.");
        break;
    }
    case 61594:
    {
        returnValue = F("Brahmetalstr.");
        break;
    }
    case 61595:
    {
        returnValue = F("Brahmkamp");
        break;
    }
    case 61596:
    {
        returnValue = F("Brahmkampsgärten");
        break;
    }
    case 61597:
    {
        returnValue = F("Brahmkampsweg");
        break;
    }
    case 61598:
    {
        returnValue = F("Brahmkoppel");
        break;
    }
    case 61599:
    {
        returnValue = F("Brahmkämpe");
        break;
    }
    case 61600:
    {
        returnValue = F("Brahmregte");
        break;
    }
    case 61601:
    {
        returnValue = F("Brahms-Weg");
        break;
    }
    case 61602:
    {
        returnValue = F("Brahmsallee");
        break;
    }
    case 61603:
    {
        returnValue = F("Brahmshof");
        break;
    }
    case 61604:
    {
        returnValue = F("Brahmsplatz");
        break;
    }
    case 61605:
    {
        returnValue = F("Brahmspromenade");
        break;
    }
    case 61606:
    {
        returnValue = F("Brahmsstr.");
        break;
    }
    case 61607:
    {
        returnValue = F("Brahmstr.");
        break;
    }
    case 61608:
    {
        returnValue = F("Brahmsweg");
        break;
    }
    case 61609:
    {
        returnValue = F("Brahmweg");
        break;
    }
    case 61610:
    {
        returnValue = F("Brahneckweg");
        break;
    }
    case 61611:
    {
        returnValue = F("Braidstr.");
        break;
    }
    case 61612:
    {
        returnValue = F("Braigenweg");
        break;
    }
    case 61613:
    {
        returnValue = F("Braigestr.");
        break;
    }
    case 61614:
    {
        returnValue = F("Braiggenweg");
        break;
    }
    case 61615:
    {
        returnValue = F("Braigstr.");
        break;
    }
    case 61616:
    {
        returnValue = F("Braike");
        break;
    }
    case 61617:
    {
        returnValue = F("Braikenäcker");
        break;
    }
    case 61618:
    {
        returnValue = F("Braikestr.");
        break;
    }
    case 61619:
    {
        returnValue = F("Braikeweg");
        break;
    }
    case 61620:
    {
        returnValue = F("Braillestr.");
        break;
    }
    case 61621:
    {
        returnValue = F("Brainer Weg");
        break;
    }
    case 61622:
    {
        returnValue = F("Brainkofer Str.");
        break;
    }
    case 61623:
    {
        returnValue = F("Brainweg");
        break;
    }
    case 61624:
    {
        returnValue = F("Braischenweg");
        break;
    }
    case 61625:
    {
        returnValue = F("Braitenrain");
        break;
    }
    case 61626:
    {
        returnValue = F("Braithweg");
        break;
    }
    case 61627:
    {
        returnValue = F("Braitstr.");
        break;
    }
    case 61628:
    {
        returnValue = F("Brake");
        break;
    }
    case 61629:
    {
        returnValue = F("Brake (Othlinghausen)");
        break;
    }
    case 61630:
    {
        returnValue = F("Brake Lohne");
        break;
    }
    case 61631:
    {
        returnValue = F("Brakeler Märsch");
        break;
    }
    case 61632:
    {
        returnValue = F("Brakeler Str.");
        break;
    }
    case 61633:
    {
        returnValue = F("Brakelstr.");
        break;
    }
    case 61634:
    {
        returnValue = F("Brakelstwiete");
        break;
    }
    case 61635:
    {
        returnValue = F("Braken Weg");
        break;
    }
    case 61636:
    {
        returnValue = F("Brakendamm");
        break;
    }
    case 61637:
    {
        returnValue = F("Brakenhof");
        break;
    }
    case 61638:
    {
        returnValue = F("Brakenhoffstr.");
        break;
    }
    case 61639:
    {
        returnValue = F("Brakenhöh");
        break;
    }
    case 61640:
    {
        returnValue = F("Brakenkamp");
        break;
    }
    case 61641:
    {
        returnValue = F("Brakenweg");
        break;
    }
    case 61642:
    {
        returnValue = F("Brakenwiese");
        break;
    }
    case 61643:
    {
        returnValue = F("Braker Bruchweg");
        break;
    }
    case 61644:
    {
        returnValue = F("Braker Chaussee");
        break;
    }
    case 61645:
    {
        returnValue = F("Braker Haus");
        break;
    }
    case 61646:
    {
        returnValue = F("Braker Mitte");
        break;
    }
    case 61647:
    {
        returnValue = F("Braker Sand");
        break;
    }
    case 61648:
    {
        returnValue = F("Braker Str.");
        break;
    }
    case 61649:
    {
        returnValue = F("Braker Weg");
        break;
    }
    case 61650:
    {
        returnValue = F("Brakestr.");
        break;
    }
    case 61651:
    {
        returnValue = F("Brakeweg");
        break;
    }
    case 61652:
    {
        returnValue = F("Brakfeld");
        break;
    }
    case 61653:
    {
        returnValue = F("Brakhahnstr.");
        break;
    }
    case 61654:
    {
        returnValue = F("Brakland");
        break;
    }
    case 61655:
    {
        returnValue = F("Braklandshöpen");
        break;
    }
    case 61656:
    {
        returnValue = F("Braklandsweg");
        break;
    }
    case 61657:
    {
        returnValue = F("Brakstr.");
        break;
    }
    case 61658:
    {
        returnValue = F("Brakweg");
        break;
    }
    case 61659:
    {
        returnValue = F("Bramacker");
        break;
    }
    case 61660:
    {
        returnValue = F("Brambach");
        break;
    }
    case 61661:
    {
        returnValue = F("Brambacher Hof");
        break;
    }
    case 61662:
    {
        returnValue = F("Brambacher Str.");
        break;
    }
    case 61663:
    {
        returnValue = F("Brambacher Weg");
        break;
    }
    case 61664:
    {
        returnValue = F("Brambachstr.");
        break;
    }
    case 61665:
    {
        returnValue = F("Brambarg");
        break;
    }
    case 61666:
    {
        returnValue = F("Brambauerstr.");
        break;
    }
    case 61667:
    {
        returnValue = F("Brambecke");
        break;
    }
    case 61668:
    {
        returnValue = F("Bramberg");
        break;
    }
    case 61669:
    {
        returnValue = F("Bramberger Höcht");
        break;
    }
    case 61670:
    {
        returnValue = F("Bramberger Weg");
        break;
    }
    case 61671:
    {
        returnValue = F("Brambergsweg");
        break;
    }
    case 61672:
    {
        returnValue = F("Brambergweg");
        break;
    }
    case 61673:
    {
        returnValue = F("Brambostel");
        break;
    }
    case 61674:
    {
        returnValue = F("Brambosteler Weg");
        break;
    }
    case 61675:
    {
        returnValue = F("Brambrink");
        break;
    }
    case 61676:
    {
        returnValue = F("Bramburger Str.");
        break;
    }
    case 61677:
    {
        returnValue = F("Bramburgstr.");
        break;
    }
    case 61678:
    {
        returnValue = F("Bramburgweg");
        break;
    }
    case 61679:
    {
        returnValue = F("Brambusch");
        break;
    }
    case 61680:
    {
        returnValue = F("Brambuschweg");
        break;
    }
    case 61681:
    {
        returnValue = F("Brambüh");
        break;
    }
    case 61682:
    {
        returnValue = F("Brameler Str.");
        break;
    }
    case 61683:
    {
        returnValue = F("Brameler Weg");
        break;
    }
    case 61684:
    {
        returnValue = F("Bramelsweg");
        break;
    }
    case 61685:
    {
        returnValue = F("Bramenbusch");
        break;
    }
    case 61686:
    {
        returnValue = F("Bramhaar");
        break;
    }
    case 61687:
    {
        returnValue = F("Bramheide");
        break;
    }
    case 61688:
    {
        returnValue = F("Bramhof");
        break;
    }
    case 61689:
    {
        returnValue = F("Bramhoff");
        break;
    }
    case 61690:
    {
        returnValue = F("Bramhofstr.");
        break;
    }
    case 61691:
    {
        returnValue = F("Bramholm");
        break;
    }
    case 61692:
    {
        returnValue = F("Bramhorne");
        break;
    }
    case 61693:
    {
        returnValue = F("Bramhorst");
        break;
    }
    case 61694:
    {
        returnValue = F("Bramicke");
        break;
    }
    case 61695:
    {
        returnValue = F("Braminberg");
        break;
    }
    case 61696:
    {
        returnValue = F("Bramkamp");
        break;
    }
    case 61697:
    {
        returnValue = F("Bramkampsieke");
        break;
    }
    case 61698:
    {
        returnValue = F("Bramkampstieg");
        break;
    }
    case 61699:
    {
        returnValue = F("Bramkampstr.");
        break;
    }
    case 61700:
    {
        returnValue = F("Bramkampsweg");
        break;
    }
    case 61701:
    {
        returnValue = F("Bramkampweg");
        break;
    }
    case 61702:
    {
        returnValue = F("Bramkämper Brink");
        break;
    }
    case 61703:
    {
        returnValue = F("Bramlagestr.");
        break;
    }
    case 61704:
    {
        returnValue = F("Bramleystr.");
        break;
    }
    case 61705:
    {
        returnValue = F("Bramliet");
        break;
    }
    case 61706:
    {
        returnValue = F("Brammbusch");
        break;
    }
    case 61707:
    {
        returnValue = F("Brammenfeld");
        break;
    }
    case 61708:
    {
        returnValue = F("Brammenweg");
        break;
    }
    case 61709:
    {
        returnValue = F("Brammer");
        break;
    }
    case 61710:
    {
        returnValue = F("Brammer Dorfstr.");
        break;
    }
    case 61711:
    {
        returnValue = F("Brammer Hauptstr.");
        break;
    }
    case 61712:
    {
        returnValue = F("Brammer Hoop");
        break;
    }
    case 61713:
    {
        returnValue = F("Brammer Weg");
        break;
    }
    case 61714:
    {
        returnValue = F("Brammerau");
        break;
    }
    case 61715:
    {
        returnValue = F("Brammerberg");
        break;
    }
    case 61716:
    {
        returnValue = F("Brammerfeld");
        break;
    }
    case 61717:
    {
        returnValue = F("Brammerhof");
        break;
    }
    case 61718:
    {
        returnValue = F("Brammerhoop");
        break;
    }
    case 61719:
    {
        returnValue = F("Brammerhorst");
        break;
    }
    case 61720:
    {
        returnValue = F("Brammerhörn");
        break;
    }
    case 61721:
    {
        returnValue = F("Brammerhütten");
        break;
    }
    case 61722:
    {
        returnValue = F("Brammerkamp");
        break;
    }
    case 61723:
    {
        returnValue = F("Brammerkrug");
        break;
    }
    case 61724:
    {
        returnValue = F("Brammerkuhle");
        break;
    }
    case 61725:
    {
        returnValue = F("Brammermoor");
        break;
    }
    case 61726:
    {
        returnValue = F("Brammerweg");
        break;
    }
    case 61727:
    {
        returnValue = F("Bramoor");
        break;
    }
    case 61728:
    {
        returnValue = F("Bramschenkamp");
        break;
    }
    case 61729:
    {
        returnValue = F("Bramscher Allee");
        break;
    }
    case 61730:
    {
        returnValue = F("Bramscher Str.");
        break;
    }
    case 61731:
    {
        returnValue = F("Bramscher Weg");
        break;
    }
    case 61732:
    {
        returnValue = F("Bramsfeld");
        break;
    }
    case 61733:
    {
        returnValue = F("Bramskampweg");
        break;
    }
    case 61734:
    {
        returnValue = F("Bramskuhle");
        break;
    }
    case 61735:
    {
        returnValue = F("Bramstedt");
        break;
    }
    case 61736:
    {
        returnValue = F("Bramstedter Chaussee");
        break;
    }
    case 61737:
    {
        returnValue = F("Bramstedter Kirchweg");
        break;
    }
    case 61738:
    {
        returnValue = F("Bramstedter Landstr.");
        break;
    }
    case 61739:
    {
        returnValue = F("Bramstedter Str.");
        break;
    }
    case 61740:
    {
        returnValue = F("Bramstedtlunder Str.");
        break;
    }
    case 61741:
    {
        returnValue = F("Bramstr.");
        break;
    }
    case 61742:
    {
        returnValue = F("Bramweg");
        break;
    }
    case 61743:
    {
        returnValue = F("Bramwinkel");
        break;
    }
    case 61744:
    {
        returnValue = F("Branchweilerhof");
        break;
    }
    case 61745:
    {
        returnValue = F("Branchweilerhofstr.");
        break;
    }
    case 61746:
    {
        returnValue = F("Brand");
        break;
    }
    case 61747:
    {
        returnValue = F("Brand Erbisdorfer Str.");
        break;
    }
    case 61748:
    {
        returnValue = F("Brand Kreuz-Allee");
        break;
    }
    case 61749:
    {
        returnValue = F("Brand's Kamp");
        break;
    }
    case 61750:
    {
        returnValue = F("Brand-Gäßchen");
        break;
    }
    case 61751:
    {
        returnValue = F("Brand-Oberschöllenbach");
        break;
    }
    case 61752:
    {
        returnValue = F("Brand-Schneise");
        break;
    }
    case 61753:
    {
        returnValue = F("Brandachstr.");
        break;
    }
    case 61754:
    {
        returnValue = F("Brandacker");
        break;
    }
    case 61755:
    {
        returnValue = F("Brandackerweg");
        break;
    }
    case 61756:
    {
        returnValue = F("Brandallee");
        break;
    }
    case 61757:
    {
        returnValue = F("Brandangerweg");
        break;
    }
    case 61758:
    {
        returnValue = F("Brandauer Str.");
        break;
    }
    case 61759:
    {
        returnValue = F("Brandauer Weg");
        break;
    }
    case 61760:
    {
        returnValue = F("Brandauer-Klinger-Weg");
        break;
    }
    case 61761:
    {
        returnValue = F("Brandaustr.");
        break;
    }
    case 61762:
    {
        returnValue = F("Brandauweg");
        break;
    }
    case 61763:
    {
        returnValue = F("Brandbachweg");
        break;
    }
    case 61764:
    {
        returnValue = F("Brandberg");
        break;
    }
    case 61765:
    {
        returnValue = F("Brandbergweg");
        break;
    }
    case 61766:
    {
        returnValue = F("Branddeichweg");
        break;
    }
    case 61767:
    {
        returnValue = F("Branddobbe");
        break;
    }
    case 61768:
    {
        returnValue = F("Branddrift");
        break;
    }
    case 61769:
    {
        returnValue = F("Branddünenweg");
        break;
    }
    case 61770:
    {
        returnValue = F("Brandeck");
        break;
    }
    case 61771:
    {
        returnValue = F("Brandecker Str.");
        break;
    }
    case 61772:
    {
        returnValue = F("Brandeckerstr.");
        break;
    }
    case 61773:
    {
        returnValue = F("Brandeckstr.");
        break;
    }
    case 61774:
    {
        returnValue = F("Brandeckweg");
        break;
    }
    case 61775:
    {
        returnValue = F("Brandeggerstr.");
        break;
    }
    case 61776:
    {
        returnValue = F("Brandeiche");
        break;
    }
    case 61777:
    {
        returnValue = F("Brandelbeek");
        break;
    }
    case 61778:
    {
        returnValue = F("Brandelweg");
        break;
    }
    case 61779:
    {
        returnValue = F("Brandenbarg");
        break;
    }
    case 61780:
    {
        returnValue = F("Brandenbaumer Weg");
        break;
    }
    case 61781:
    {
        returnValue = F("Brandenbeeke");
        break;
    }
    case 61782:
    {
        returnValue = F("Brandenberg");
        break;
    }
    case 61783:
    {
        returnValue = F("Brandenberger Str.");
        break;
    }
    case 61784:
    {
        returnValue = F("Brandenberger Weg");
        break;
    }
    case 61785:
    {
        returnValue = F("Brandenbergstr.");
        break;
    }
    case 61786:
    {
        returnValue = F("Brandenbrooker Weg");
        break;
    }
    case 61787:
    {
        returnValue = F("Brandenbruch-Str.");
        break;
    }
    case 61788:
    {
        returnValue = F("Brandenburg");
        break;
    }
    case 61789:
    {
        returnValue = F("Brandenburgallee");
        break;
    }
    case 61790:
    {
        returnValue = F("Brandenburger Allee");
        break;
    }
    case 61791:
    {
        returnValue = F("Brandenburger Chaussee");
        break;
    }
    case 61792:
    {
        returnValue = F("Brandenburger Hof");
        break;
    }
    case 61793:
    {
        returnValue = F("Brandenburger Landstr.");
        break;
    }
    case 61794:
    {
        returnValue = F("Brandenburger Platz");
        break;
    }
    case 61795:
    {
        returnValue = F("Brandenburger Ring");
        break;
    }
    case 61796:
    {
        returnValue = F("Brandenburger Str.");
        break;
    }
    case 61797:
    {
        returnValue = F("Brandenburger Tor");
        break;
    }
    case 61798:
    {
        returnValue = F("Brandenburger Weg");
        break;
    }
    case 61799:
    {
        returnValue = F("Brandenburgerstr.");
        break;
    }
    case 61800:
    {
        returnValue = F("Brandenburggasse");
        break;
    }
    case 61801:
    {
        returnValue = F("Brandenburgische Str.");
        break;
    }
    case 61802:
    {
        returnValue = F("Brandenburgischer Ring");
        break;
    }
    case 61803:
    {
        returnValue = F("Brandenburgplatz");
        break;
    }
    case 61804:
    {
        returnValue = F("Brandenburgstr.");
        break;
    }
    case 61805:
    {
        returnValue = F("Brandenburgweg");
        break;
    }
    case 61806:
    {
        returnValue = F("Brandenbusch");
        break;
    }
    case 61807:
    {
        returnValue = F("Brandenbüschstr.");
        break;
    }
    case 61808:
    {
        returnValue = F("Brandenfelsstr.");
        break;
    }
    case 61809:
    {
        returnValue = F("Brandenhard");
        break;
    }
    case 61810:
    {
        returnValue = F("Brandenhusen");
        break;
    }
    case 61811:
    {
        returnValue = F("Brandenkamp");
        break;
    }
    case 61812:
    {
        returnValue = F("Brandenkopf");
        break;
    }
    case 61813:
    {
        returnValue = F("Brandenkopfweg");
        break;
    }
    case 61814:
    {
        returnValue = F("Brandenstein");
        break;
    }
    case 61815:
    {
        returnValue = F("Brandensteiner Str.");
        break;
    }
    case 61816:
    {
        returnValue = F("Brandensteiner Weg");
        break;
    }
    case 61817:
    {
        returnValue = F("Brandensteinweg");
        break;
    }
    case 61818:
    {
        returnValue = F("Brandentenweg");
        break;
    }
    case 61819:
    {
        returnValue = F("Brandenweg");
        break;
    }
    case 61820:
    {
        returnValue = F("Brander Hauptstr.");
        break;
    }
    case 61821:
    {
        returnValue = F("Brander Marktsteig");
        break;
    }
    case 61822:
    {
        returnValue = F("Brander Steig");
        break;
    }
    case 61823:
    {
        returnValue = F("Brander Str.");
        break;
    }
    case 61824:
    {
        returnValue = F("Brander Weg");
        break;
    }
    case 61825:
    {
        returnValue = F("Branderhaild");
        break;
    }
    case 61826:
    {
        returnValue = F("Branderheide");
        break;
    }
    case 61827:
    {
        returnValue = F("Branderiede");
        break;
    }
    case 61828:
    {
        returnValue = F("Branderodaer Hohle");
        break;
    }
    case 61829:
    {
        returnValue = F("Branderodaer Str.");
        break;
    }
    case 61830:
    {
        returnValue = F("Branderodaer Weg");
        break;
    }
    case 61831:
    {
        returnValue = F("Branderoder Hauptstr.");
        break;
    }
    case 61832:
    {
        returnValue = F("Branderoder Kirchstr.");
        break;
    }
    case 61833:
    {
        returnValue = F("Branderoder Schulberg");
        break;
    }
    case 61834:
    {
        returnValue = F("Branderschrofenweg");
        break;
    }
    case 61835:
    {
        returnValue = F("Branderskuppenweg");
        break;
    }
    case 61836:
    {
        returnValue = F("Branderweg");
        break;
    }
    case 61837:
    {
        returnValue = F("Brandesbachtal");
        break;
    }
    case 61838:
    {
        returnValue = F("Brandesgasse");
        break;
    }
    case 61839:
    {
        returnValue = F("Brandesstr.");
        break;
    }
    case 61840:
    {
        returnValue = F("Brandestr.");
        break;
    }
    case 61841:
    {
        returnValue = F("Brandeweg");
        break;
    }
    case 61842:
    {
        returnValue = F("Brandewurth");
        break;
    }
    case 61843:
    {
        returnValue = F("Brandfeldstr.");
        break;
    }
    case 61844:
    {
        returnValue = F("Brandfeldweg");
        break;
    }
    case 61845:
    {
        returnValue = F("Brandflügel");
        break;
    }
    case 61846:
    {
        returnValue = F("Brandgabelweg");
        break;
    }
    case 61847:
    {
        returnValue = F("Brandgansstr.");
        break;
    }
    case 61848:
    {
        returnValue = F("Brandgarten");
        break;
    }
    case 61849:
    {
        returnValue = F("Brandgasse");
        break;
    }
    case 61850:
    {
        returnValue = F("Brandgehauflügel");
        break;
    }
    case 61851:
    {
        returnValue = F("Brandgehauweg");
        break;
    }
    case 61852:
    {
        returnValue = F("Brandgraben");
        break;
    }
    case 61853:
    {
        returnValue = F("Brandhagener Weg");
        break;
    }
    case 61854:
    {
        returnValue = F("Brandhagenweg");
        break;
    }
    case 61855:
    {
        returnValue = F("Brandhakenweg");
        break;
    }
    case 61856:
    {
        returnValue = F("Brandhalde");
        break;
    }
    case 61857:
    {
        returnValue = F("Brandhaldenweg");
        break;
    }
    case 61858:
    {
        returnValue = F("Brandhaldesträßle");
        break;
    }
    case 61859:
    {
        returnValue = F("Brandhaldeweg");
        break;
    }
    case 61860:
    {
        returnValue = F("Brandhalmweg");
        break;
    }
    case 61861:
    {
        returnValue = F("Brandhau");
        break;
    }
    case 61862:
    {
        returnValue = F("Brandhaus");
        break;
    }
    case 61863:
    {
        returnValue = F("Brandhausstr.");
        break;
    }
    case 61864:
    {
        returnValue = F("Brandhecke");
        break;
    }
    case 61865:
    {
        returnValue = F("Brandhecken");
        break;
    }
    case 61866:
    {
        returnValue = F("Brandhei");
        break;
    }
    case 61867:
    {
        returnValue = F("Brandheide");
        break;
    }
    case 61868:
    {
        returnValue = F("Brandheider Weg");
        break;
    }
    case 61869:
    {
        returnValue = F("Brandheidestr.");
        break;
    }
    case 61870:
    {
        returnValue = F("Brandheideweg");
        break;
    }
    case 61871:
    {
        returnValue = F("Brandhelms Garten");
        break;
    }
    case 61872:
    {
        returnValue = F("Brandhof");
        break;
    }
    case 61873:
    {
        returnValue = F("Brandhofen");
        break;
    }
    case 61874:
    {
        returnValue = F("Brandhofstr.");
        break;
    }
    case 61875:
    {
        returnValue = F("Brandholz");
        break;
    }
    case 61876:
    {
        returnValue = F("Brandholzer Steige");
        break;
    }
    case 61877:
    {
        returnValue = F("Brandholzer Weg");
        break;
    }
    case 61878:
    {
        returnValue = F("Brandholzstr.");
        break;
    }
    case 61879:
    {
        returnValue = F("Brandholzweg");
        break;
    }
    case 61880:
    {
        returnValue = F("Brandhorst");
        break;
    }
    case 61881:
    {
        returnValue = F("Brandhorster Str.");
        break;
    }
    case 61882:
    {
        returnValue = F("Brandhorststr.");
        break;
    }
    case 61883:
    {
        returnValue = F("Brandhälde");
        break;
    }
    case 61884:
    {
        returnValue = F("Brandhöfener Weg");
        break;
    }
    case 61885:
    {
        returnValue = F("Brandhölzlesweg");
        break;
    }
    case 61886:
    {
        returnValue = F("Brandhölzleweg");
        break;
    }
    case 61887:
    {
        returnValue = F("Brandiges Meer");
        break;
    }
    case 61888:
    {
        returnValue = F("Brandisbreite");
        break;
    }
    case 61889:
    {
        returnValue = F("Brandiser Str.");
        break;
    }
    case 61890:
    {
        returnValue = F("Brandiser Weg");
        break;
    }
    case 61891:
    {
        returnValue = F("Brandiser Winkel");
        break;
    }
    case 61892:
    {
        returnValue = F("Brandisstr.");
        break;
    }
    case 61893:
    {
        returnValue = F("Brandjeweg");
        break;
    }
    case 61894:
    {
        returnValue = F("Brandkamp");
        break;
    }
    case 61895:
    {
        returnValue = F("Brandklingenweg");
        break;
    }
    case 61896:
    {
        returnValue = F("Brandkopfsweg");
        break;
    }
    case 61897:
    {
        returnValue = F("Brandkopfweg");
        break;
    }
    case 61898:
    {
        returnValue = F("Brandkuhl");
        break;
    }
    case 61899:
    {
        returnValue = F("Brandkuhle");
        break;
    }
    case 61900:
    {
        returnValue = F("Brandkuhlenweg");
        break;
    }
    case 61901:
    {
        returnValue = F("Brandl");
        break;
    }
    case 61902:
    {
        returnValue = F("Brandlachenweg");
        break;
    }
    case 61903:
    {
        returnValue = F("Brandlacher Richtweg");
        break;
    }
    case 61904:
    {
        returnValue = F("Brandleitenweg");
        break;
    }
    case 61905:
    {
        returnValue = F("Brandler");
        break;
    }
    case 61906:
    {
        returnValue = F("Brandlesweg");
        break;
    }
    case 61907:
    {
        returnValue = F("Brandleweg");
        break;
    }
    case 61908:
    {
        returnValue = F("Brandlfeld");
        break;
    }
    case 61909:
    {
        returnValue = F("Brandlgasse");
        break;
    }
    case 61910:
    {
        returnValue = F("Brandlinie");
        break;
    }
    case 61911:
    {
        returnValue = F("Brandlohstr.");
        break;
    }
    case 61912:
    {
        returnValue = F("Brandloser Str.");
        break;
    }
    case 61913:
    {
        returnValue = F("Brandlstr.");
        break;
    }
    case 61914:
    {
        returnValue = F("Brandlweg");
        break;
    }
    case 61915:
    {
        returnValue = F("Brandmanntwiete");
        break;
    }
    case 61916:
    {
        returnValue = F("Brandmatt");
        break;
    }
    case 61917:
    {
        returnValue = F("Brandmattstr.");
        break;
    }
    case 61918:
    {
        returnValue = F("Brandmeierstr.");
        break;
    }
    case 61919:
    {
        returnValue = F("Brandmeisterweg");
        break;
    }
    case 61920:
    {
        returnValue = F("Brandmoor");
        break;
    }
    case 61921:
    {
        returnValue = F("Brandmoorweg");
        break;
    }
    case 61922:
    {
        returnValue = F("Brandmättle");
        break;
    }
    case 61923:
    {
        returnValue = F("Brandmühle");
        break;
    }
    case 61924:
    {
        returnValue = F("Brandmühlendamm");
        break;
    }
    case 61925:
    {
        returnValue = F("Brandmühlenstr.");
        break;
    }
    case 61926:
    {
        returnValue = F("Brandmühlenweg");
        break;
    }
    case 61927:
    {
        returnValue = F("Brandmüllerstr.");
        break;
    }
    case 61928:
    {
        returnValue = F("Brandnerstr.");
        break;
    }
    case 61929:
    {
        returnValue = F("Brandnerweg");
        break;
    }
    case 61930:
    {
        returnValue = F("Brandoberndorfer Str.");
        break;
    }
    case 61931:
    {
        returnValue = F("Brandpfad");
        break;
    }
    case 61932:
    {
        returnValue = F("Brandplattenweg");
        break;
    }
    case 61933:
    {
        returnValue = F("Brandplatz");
        break;
    }
    case 61934:
    {
        returnValue = F("Brandplatzweg");
        break;
    }
    case 61935:
    {
        returnValue = F("Brandrain");
        break;
    }
    case 61936:
    {
        returnValue = F("Brandredder");
        break;
    }
    case 61937:
    {
        returnValue = F("Brandroster");
        break;
    }
    case 61938:
    {
        returnValue = F("Brandrüttel");
        break;
    }
    case 61939:
    {
        returnValue = F("Brands Koppelweg");
        break;
    }
    case 61940:
    {
        returnValue = F("Brands Weg");
        break;
    }
    case 61941:
    {
        returnValue = F("Brandsaal");
        break;
    }
    case 61942:
    {
        returnValue = F("Brandsackerstr.");
        break;
    }
    case 61943:
    {
        returnValue = F("Brandsbek");
        break;
    }
    case 61944:
    {
        returnValue = F("Brandsberg");
        break;
    }
    case 61945:
    {
        returnValue = F("Brandsbornstr.");
        break;
    }
    case 61946:
    {
        returnValue = F("Brandschachen");
        break;
    }
    case 61947:
    {
        returnValue = F("Brandsche Gasse");
        break;
    }
    case 61948:
    {
        returnValue = F("Brandscheider Str.");
        break;
    }
    case 61949:
    {
        returnValue = F("Brandscheider Weg");
        break;
    }
    case 61950:
    {
        returnValue = F("Brandscher Weg");
        break;
    }
    case 61951:
    {
        returnValue = F("Brandschlagschneise");
        break;
    }
    case 61952:
    {
        returnValue = F("Brandschneise");
        break;
    }
    case 61953:
    {
        returnValue = F("Brandseeberg");
        break;
    }
    case 61954:
    {
        returnValue = F("Brandseeschneise");
        break;
    }
    case 61955:
    {
        returnValue = F("Brandsfeld");
        break;
    }
    case 61956:
    {
        returnValue = F("Brandsgässchen");
        break;
    }
    case 61957:
    {
        returnValue = F("Brandshagener Weg");
        break;
    }
    case 61958:
    {
        returnValue = F("Brandsheide");
        break;
    }
    case 61959:
    {
        returnValue = F("Brandshof");
        break;
    }
    case 61960:
    {
        returnValue = F("Brandshofer Weg");
        break;
    }
    case 61961:
    {
        returnValue = F("Brandshoff");
        break;
    }
    case 61962:
    {
        returnValue = F("Brandshofstr.");
        break;
    }
    case 61963:
    {
        returnValue = F("Brandshäger Str.");
        break;
    }
    case 61964:
    {
        returnValue = F("Brandsiekweg");
        break;
    }
    case 61965:
    {
        returnValue = F("Brandskamp");
        break;
    }
    case 61966:
    {
        returnValue = F("Brandskampweg");
        break;
    }
    case 61967:
    {
        returnValue = F("Brandsmühle");
        break;
    }
    case 61968:
    {
        returnValue = F("Brandstadlweg");
        break;
    }
    case 61969:
    {
        returnValue = F("Brandstatt");
        break;
    }
    case 61970:
    {
        returnValue = F("Brandstattgasse");
        break;
    }
    case 61971:
    {
        returnValue = F("Brandstattstr.");
        break;
    }
    case 61972:
    {
        returnValue = F("Brandstattweg");
        break;
    }
    case 61973:
    {
        returnValue = F("Brandsteig");
        break;
    }
    case 61974:
    {
        returnValue = F("Brandsteigstr.");
        break;
    }
    case 61975:
    {
        returnValue = F("Brandsteinweg");
        break;
    }
    case 61976:
    {
        returnValue = F("Brandstelle");
        break;
    }
    case 61977:
    {
        returnValue = F("Brandstellenweg");
        break;
    }
    case 61978:
    {
        returnValue = F("Brandstetterweg");
        break;
    }
    case 61979:
    {
        returnValue = F("Brandstifterweg");
        break;
    }
    case 61980:
    {
        returnValue = F("Brandstr.");
        break;
    }
    case 61981:
    {
        returnValue = F("Brandstr. Siedlung");
        break;
    }
    case 61982:
    {
        returnValue = F("Brandsträßchen");
        break;
    }
    case 61983:
    {
        returnValue = F("Brandströmstr.");
        break;
    }
    case 61984:
    {
        returnValue = F("Brandströmweg");
        break;
    }
    case 61985:
    {
        returnValue = F("Brandstätt");
        break;
    }
    case 61986:
    {
        returnValue = F("Brandstätte");
        break;
    }
    case 61987:
    {
        returnValue = F("Brandstätter Str.");
        break;
    }
    case 61988:
    {
        returnValue = F("Brandstätterstr.");
        break;
    }
    case 61989:
    {
        returnValue = F("Brandstättweg");
        break;
    }
    case 61990:
    {
        returnValue = F("Brandsweg");
        break;
    }
    case 61991:
    {
        returnValue = F("Brandswisch");
        break;
    }
    case 61992:
    {
        returnValue = F("Brandt's Weg");
        break;
    }
    case 61993:
    {
        returnValue = F("Brandt-Klöckener-Str.");
        break;
    }
    case 61994:
    {
        returnValue = F("Brandtannenweg");
        break;
    }
    case 61995:
    {
        returnValue = F("Brandteich");
        break;
    }
    case 61996:
    {
        returnValue = F("Brandteichstr.");
        break;
    }
    case 61997:
    {
        returnValue = F("Brandteichweg");
        break;
    }
    case 61998:
    {
        returnValue = F("Brandtner Weg");
        break;
    }
    case 61999:
    {
        returnValue = F("Brandtrift");
        break;
    }
    case 62000:
    {
        returnValue = F("Brandtsberg");
        break;
    }
    case 62001:
    {
        returnValue = F("Brandtschneise");
        break;
    }
    case 62002:
    {
        returnValue = F("Brandtskamp");
        break;
    }
    case 62003:
    {
        returnValue = F("Brandtstr.");
        break;
    }
    case 62004:
    {
        returnValue = F("Brandtsweg");
        break;
    }
    case 62005:
    {
        returnValue = F("Brandtweg");
        break;
    }
    case 62006:
    {
        returnValue = F("Brandtwiete");
        break;
    }
    case 62007:
    {
        returnValue = F("Brandwaldweg");
        break;
    }
    case 62008:
    {
        returnValue = F("Brandwasen");
        break;
    }
    case 62009:
    {
        returnValue = F("Brandweg");
        break;
    }
    case 62010:
    {
        returnValue = F("Brandwegle");
        break;
    }
    case 62011:
    {
        returnValue = F("Brandweiher");
        break;
    }
    case 62012:
    {
        returnValue = F("Brandweiherstr.");
        break;
    }
    case 62013:
    {
        returnValue = F("Brandweiherweg");
        break;
    }
    case 62014:
    {
        returnValue = F("Brandweinerweg");
        break;
    }
    case 62015:
    {
        returnValue = F("Brandweinsweg");
        break;
    }
    case 62016:
    {
        returnValue = F("Brandwiesen");
        break;
    }
    case 62017:
    {
        returnValue = F("Brandwinkelweg");
        break;
    }
    case 62018:
    {
        returnValue = F("Brandwäldlesweg");
        break;
    }
    case 62019:
    {
        returnValue = F("Brandäcker");
        break;
    }
    case 62020:
    {
        returnValue = F("Brandäckerweg");
        break;
    }
    case 62021:
    {
        returnValue = F("Brangenberger Str.");
        break;
    }
    case 62022:
    {
        returnValue = F("Brangenbusch");
        break;
    }
    case 62023:
    {
        returnValue = F("Branichstaffel");
        break;
    }
    case 62024:
    {
        returnValue = F("Branichstr.");
        break;
    }
    case 62025:
    {
        returnValue = F("Branichtunnel");
        break;
    }
    case 62026:
    {
        returnValue = F("Branichtunnel-Fluchtstollen");
        break;
    }
    case 62027:
    {
        returnValue = F("Branigleite");
        break;
    }
    case 62028:
    {
        returnValue = F("Branitzer Dorfmitte");
        break;
    }
    case 62029:
    {
        returnValue = F("Branitzer Park");
        break;
    }
    case 62030:
    {
        returnValue = F("Branitzer Str.");
        break;
    }
    case 62031:
    {
        returnValue = F("Branitzer Weg");
        break;
    }
    case 62032:
    {
        returnValue = F("Brannecker Str.");
        break;
    }
    case 62033:
    {
        returnValue = F("Branneckeweg");
        break;
    }
    case 62034:
    {
        returnValue = F("Brannenburger Str.");
        break;
    }
    case 62035:
    {
        returnValue = F("Brannendamm");
        break;
    }
    case 62036:
    {
        returnValue = F("Brannenheide");
        break;
    }
    case 62037:
    {
        returnValue = F("Branner Weg");
        break;
    }
    case 62038:
    {
        returnValue = F("Brannerweg");
        break;
    }
    case 62039:
    {
        returnValue = F("Brannlander Weg");
        break;
    }
    case 62040:
    {
        returnValue = F("Branntenweg");
        break;
    }
    case 62041:
    {
        returnValue = F("Branntwein-Weg");
        break;
    }
    case 62042:
    {
        returnValue = F("Branntweinergäßchen");
        break;
    }
    case 62043:
    {
        returnValue = F("Branntweingasse");
        break;
    }
    case 62044:
    {
        returnValue = F("Branntweingässchen");
        break;
    }
    case 62045:
    {
        returnValue = F("Branntweingäßchen");
        break;
    }
    case 62046:
    {
        returnValue = F("Branntweinhäuser");
        break;
    }
    case 62047:
    {
        returnValue = F("Branntweinkrugstr.");
        break;
    }
    case 62048:
    {
        returnValue = F("Branntweinstein");
        break;
    }
    case 62049:
    {
        returnValue = F("Branntweinstr.");
        break;
    }
    case 62050:
    {
        returnValue = F("Branntweinsweg");
        break;
    }
    case 62051:
    {
        returnValue = F("Bransberg");
        break;
    }
    case 62052:
    {
        returnValue = F("Branscheider Str.");
        break;
    }
    case 62053:
    {
        returnValue = F("Bransel");
        break;
    }
    case 62054:
    {
        returnValue = F("Bransheide");
        break;
    }
    case 62055:
    {
        returnValue = F("Bransrode");
        break;
    }
    case 62056:
    {
        returnValue = F("Brantenberg");
        break;
    }
    case 62057:
    {
        returnValue = F("Brantener Str.");
        break;
    }
    case 62058:
    {
        returnValue = F("Brantengasse");
        break;
    }
    case 62059:
    {
        returnValue = F("Brantenhölzchen");
        break;
    }
    case 62060:
    {
        returnValue = F("Branterei");
        break;
    }
    case 62061:
    {
        returnValue = F("Branthagenstr.");
        break;
    }
    case 62062:
    {
        returnValue = F("Brantrigenweg");
        break;
    }
    case 62063:
    {
        returnValue = F("Braoke");
        break;
    }
    case 62064:
    {
        returnValue = F("Braomkamp");
        break;
    }
    case 62065:
    {
        returnValue = F("Braomweg");
        break;
    }
    case 62066:
    {
        returnValue = F("Braomweide");
        break;
    }
    case 62067:
    {
        returnValue = F("Brarenstr.");
        break;
    }
    case 62068:
    {
        returnValue = F("Brarupholz");
        break;
    }
    case 62069:
    {
        returnValue = F("Braschenstr.");
        break;
    }
    case 62070:
    {
        returnValue = F("Braschosser Str.");
        break;
    }
    case 62071:
    {
        returnValue = F("Braschosweg");
        break;
    }
    case 62072:
    {
        returnValue = F("Braschwitzer Str.");
        break;
    }
    case 62073:
    {
        returnValue = F("Braschwitzer Weg");
        break;
    }
    case 62074:
    {
        returnValue = F("Brasenweg");
        break;
    }
    case 62075:
    {
        returnValue = F("Braser Str.");
        break;
    }
    case 62076:
    {
        returnValue = F("Braseweg");
        break;
    }
    case 62077:
    {
        returnValue = F("Brasselstr.");
        break;
    }
    case 62078:
    {
        returnValue = F("Brassenacker");
        break;
    }
    case 62079:
    {
        returnValue = F("Brassenstieg");
        break;
    }
    case 62080:
    {
        returnValue = F("Brassenstiege");
        break;
    }
    case 62081:
    {
        returnValue = F("Brassenweg");
        break;
    }
    case 62082:
    {
        returnValue = F("Brassenwinkel");
        break;
    }
    case 62083:
    {
        returnValue = F("Brassertstr.");
        break;
    }
    case 62084:
    {
        returnValue = F("Brassertweg");
        break;
    }
    case 62085:
    {
        returnValue = F("Brassestr.");
        break;
    }
    case 62086:
    {
        returnValue = F("Brassweg");
        break;
    }
    case 62087:
    {
        returnValue = F("Brastberger Str.");
        break;
    }
    case 62088:
    {
        returnValue = F("Brasters Gasse");
        break;
    }
    case 62089:
    {
        returnValue = F("Brastr.");
        break;
    }
    case 62090:
    {
        returnValue = F("Bratbirnenweg");
        break;
    }
    case 62091:
    {
        returnValue = F("Bratergasse");
        break;
    }
    case 62092:
    {
        returnValue = F("Braterstr.");
        break;
    }
    case 62093:
    {
        returnValue = F("Bratfeldstr.");
        break;
    }
    case 62094:
    {
        returnValue = F("Bratfischwinkel");
        break;
    }
    case 62095:
    {
        returnValue = F("Bratkachelweg");
        break;
    }
    case 62096:
    {
        returnValue = F("Bratschstr.");
        break;
    }
    case 62097:
    {
        returnValue = F("Brattendorfer Str.");
        break;
    }
    case 62098:
    {
        returnValue = F("Brattlinsgrundweg");
        break;
    }
    case 62099:
    {
        returnValue = F("Bratvogelweg");
        break;
    }
    case 62100:
    {
        returnValue = F("Bratwurst");
        break;
    }
    case 62101:
    {
        returnValue = F("Bratwurstweg");
        break;
    }
    case 62102:
    {
        returnValue = F("Braubach");
        break;
    }
    case 62103:
    {
        returnValue = F("Braubacher Str.");
        break;
    }
    case 62104:
    {
        returnValue = F("Braubacher Weg");
        break;
    }
    case 62105:
    {
        returnValue = F("Braubachstr.");
        break;
    }
    case 62106:
    {
        returnValue = F("Brauberg");
        break;
    }
    case 62107:
    {
        returnValue = F("Brauborn");
        break;
    }
    case 62108:
    {
        returnValue = F("Brauck");
        break;
    }
    case 62109:
    {
        returnValue = F("Brauckmanns Kerkstieg");
        break;
    }
    case 62110:
    {
        returnValue = F("Brauckmanns Knapp");
        break;
    }
    case 62111:
    {
        returnValue = F("Brauckmannstr.");
        break;
    }
    case 62112:
    {
        returnValue = F("Brauckstr.");
        break;
    }
    case 62113:
    {
        returnValue = F("Brauckweg");
        break;
    }
    case 62114:
    {
        returnValue = F("Braudel");
        break;
    }
    case 62115:
    {
        returnValue = F("Braudenstr.");
        break;
    }
    case 62116:
    {
        returnValue = F("Braudiek");
        break;
    }
    case 62117:
    {
        returnValue = F("Brauel");
        break;
    }
    case 62118:
    {
        returnValue = F("Braueler Weg");
        break;
    }
    case 62119:
    {
        returnValue = F("Brauelweg");
        break;
    }
    case 62120:
    {
        returnValue = F("Brauenkamper Str.");
        break;
    }
    case 62121:
    {
        returnValue = F("Brauerberg");
        break;
    }
    case 62122:
    {
        returnValue = F("Brauerei");
        break;
    }
    case 62123:
    {
        returnValue = F("Brauerei Str.");
        break;
    }
    case 62124:
    {
        returnValue = F("Brauerei-Diebels-Str.");
        break;
    }
    case 62125:
    {
        returnValue = F("Brauerei-Elsässer-Str.");
        break;
    }
    case 62126:
    {
        returnValue = F("Brauerei-Haffner-Str.");
        break;
    }
    case 62127:
    {
        returnValue = F("Brauereiberg");
        break;
    }
    case 62128:
    {
        returnValue = F("Brauereigarten");
        break;
    }
    case 62129:
    {
        returnValue = F("Brauereigasse");
        break;
    }
    case 62130:
    {
        returnValue = F("Brauereistr.");
        break;
    }
    case 62131:
    {
        returnValue = F("Brauereiwall");
        break;
    }
    case 62132:
    {
        returnValue = F("Brauereiweg");
        break;
    }
    case 62133:
    {
        returnValue = F("Brauergang");
        break;
    }
    case 62134:
    {
        returnValue = F("Brauergasse");
        break;
    }
    case 62135:
    {
        returnValue = F("Brauergildenstr.");
        break;
    }
    case 62136:
    {
        returnValue = F("Brauergildestr.");
        break;
    }
    case 62137:
    {
        returnValue = F("Brauerhof");
        break;
    }
    case 62138:
    {
        returnValue = F("Brauerriege");
        break;
    }
    case 62139:
    {
        returnValue = F("Brauerriegel");
        break;
    }
    case 62140:
    {
        returnValue = F("Brauers Berg");
        break;
    }
    case 62141:
    {
        returnValue = F("Brauers Trift");
        break;
    }
    case 62142:
    {
        returnValue = F("Brauerschwender Str.");
        break;
    }
    case 62143:
    {
        returnValue = F("Brauerschwender Weg");
        break;
    }
    case 62144:
    {
        returnValue = F("Brauersdorfer Str.");
        break;
    }
    case 62145:
    {
        returnValue = F("Brauersgasse");
        break;
    }
    case 62146:
    {
        returnValue = F("Brauerstegel");
        break;
    }
    case 62147:
    {
        returnValue = F("Brauerstieg");
        break;
    }
    case 62148:
    {
        returnValue = F("Brauerstr.");
        break;
    }
    case 62149:
    {
        returnValue = F("Brauersweg");
        break;
    }
    case 62150:
    {
        returnValue = F("Brauerteich");
        break;
    }
    case 62151:
    {
        returnValue = F("Brauertshof");
        break;
    }
    case 62152:
    {
        returnValue = F("Brauerweg");
        break;
    }
    case 62153:
    {
        returnValue = F("Brauerwinkel");
        break;
    }
    case 62154:
    {
        returnValue = F("Braugang");
        break;
    }
    case 62155:
    {
        returnValue = F("Braugartenstr.");
        break;
    }
    case 62156:
    {
        returnValue = F("Braugartenweg");
        break;
    }
    case 62157:
    {
        returnValue = F("Braugasse");
        break;
    }
    case 62158:
    {
        returnValue = F("Braugässchen");
        break;
    }
    case 62159:
    {
        returnValue = F("Braugässle");
        break;
    }
    case 62160:
    {
        returnValue = F("Braugäßchen");
        break;
    }
    case 62161:
    {
        returnValue = F("Brauhalde");
        break;
    }
    case 62162:
    {
        returnValue = F("Brauhaldestr.");
        break;
    }
    case 62163:
    {
        returnValue = F("Brauhannsweg");
        break;
    }
    case 62164:
    {
        returnValue = F("Brauhardtgasse");
        break;
    }
    case 62165:
    {
        returnValue = F("Brauhaus");
        break;
    }
    case 62166:
    {
        returnValue = F("Brauhausberg");
        break;
    }
    case 62167:
    {
        returnValue = F("Brauhausbergstr.");
        break;
    }
    case 62168:
    {
        returnValue = F("Brauhausbreite");
        break;
    }
    case 62169:
    {
        returnValue = F("Brauhausgang");
        break;
    }
    case 62170:
    {
        returnValue = F("Brauhausgasse");
        break;
    }
    case 62171:
    {
        returnValue = F("Brauhausgassse");
        break;
    }
    case 62172:
    {
        returnValue = F("Brauhausgäßchen");
        break;
    }
    case 62173:
    {
        returnValue = F("Brauhausplatz");
        break;
    }
    case 62174:
    {
        returnValue = F("Brauhausrasen");
        break;
    }
    case 62175:
    {
        returnValue = F("Brauhausstr.");
        break;
    }
    case 62176:
    {
        returnValue = F("Brauhausviertel");
        break;
    }
    case 62177:
    {
        returnValue = F("Brauhausweg");
        break;
    }
    case 62178:
    {
        returnValue = F("Brauhebbel");
        break;
    }
    case 62179:
    {
        returnValue = F("Brauhof");
        break;
    }
    case 62180:
    {
        returnValue = F("Brauhofgasse");
        break;
    }
    case 62181:
    {
        returnValue = F("Brauhofplatz");
        break;
    }
    case 62182:
    {
        returnValue = F("Brauhofstr.");
        break;
    }
    case 62183:
    {
        returnValue = F("Braukamp");
        break;
    }
    case 62184:
    {
        returnValue = F("Braukampring");
        break;
    }
    case 62185:
    {
        returnValue = F("Braukdiek");
        break;
    }
    case 62186:
    {
        returnValue = F("Brauke");
        break;
    }
    case 62187:
    {
        returnValue = F("Braukellerweg");
        break;
    }
    case 62188:
    {
        returnValue = F("Braukestr.");
        break;
    }
    case 62189:
    {
        returnValue = F("Braukkamp");
        break;
    }
    case 62190:
    {
        returnValue = F("Brauksbrink");
        break;
    }
    case 62191:
    {
        returnValue = F("Braukstr.");
        break;
    }
    case 62192:
    {
        returnValue = F("Braukweg");
        break;
    }
    case 62193:
    {
        returnValue = F("Braumbachsgasse");
        break;
    }
    case 62194:
    {
        returnValue = F("Braumeisterstr.");
        break;
    }
    case 62195:
    {
        returnValue = F("Braun-Schneise");
        break;
    }
    case 62196:
    {
        returnValue = F("Braunackerweg");
        break;
    }
    case 62197:
    {
        returnValue = F("Braunauer Berg");
        break;
    }
    case 62198:
    {
        returnValue = F("Braunauer Str.");
        break;
    }
    case 62199:
    {
        returnValue = F("Braunautal");
        break;
    }
    case 62200:
    {
        returnValue = F("Braunbachweg");
        break;
    }
    case 62201:
    {
        returnValue = F("Braunbergstr.");
        break;
    }
    case 62202:
    {
        returnValue = F("Braunbrunnen");
        break;
    }
    case 62203:
    {
        returnValue = F("Braunbär");
        break;
    }
    case 62204:
    {
        returnValue = F("Braunbären");
        break;
    }
    case 62205:
    {
        returnValue = F("Braunbärweg");
        break;
    }
    case 62206:
    {
        returnValue = F("Braunbühl");
        break;
    }
    case 62207:
    {
        returnValue = F("Braune Gasse");
        break;
    }
    case 62208:
    {
        returnValue = F("Braune Hirsch Str.");
        break;
    }
    case 62209:
    {
        returnValue = F("Braune-Hirsch-Str.");
        break;
    }
    case 62210:
    {
        returnValue = F("Braune-Moor-Str.");
        break;
    }
    case 62211:
    {
        returnValue = F("Brauneberger Str.");
        break;
    }
    case 62212:
    {
        returnValue = F("Brauneckstr.");
        break;
    }
    case 62213:
    {
        returnValue = F("Brauneckweg");
        break;
    }
    case 62214:
    {
        returnValue = F("Brauneggerstr.");
        break;
    }
    case 62215:
    {
        returnValue = F("Braunellenweg");
        break;
    }
    case 62216:
    {
        returnValue = F("Braunen");
        break;
    }
    case 62217:
    {
        returnValue = F("Braunenberger Str.");
        break;
    }
    case 62218:
    {
        returnValue = F("Braunenbergstr.");
        break;
    }
    case 62219:
    {
        returnValue = F("Braunenbergweg");
        break;
    }
    case 62220:
    {
        returnValue = F("Braunenbrucher Weg");
        break;
    }
    case 62221:
    {
        returnValue = F("Braunengasse");
        break;
    }
    case 62222:
    {
        returnValue = F("Braunenkamp");
        break;
    }
    case 62223:
    {
        returnValue = F("Braunenkampsweg");
        break;
    }
    case 62224:
    {
        returnValue = F("Braunenmoosweg");
        break;
    }
    case 62225:
    {
        returnValue = F("Braunenweg");
        break;
    }
    case 62226:
    {
        returnValue = F("Braunenweilerstr.");
        break;
    }
    case 62227:
    {
        returnValue = F("Brauner Hirsch");
        break;
    }
    case 62228:
    {
        returnValue = F("Brauner Kamp");
        break;
    }
    case 62229:
    {
        returnValue = F("Brauner Schlag");
        break;
    }
    case 62230:
    {
        returnValue = F("Brauner Weg");
        break;
    }
    case 62231:
    {
        returnValue = F("Braunersbergsteige");
        break;
    }
    case 62232:
    {
        returnValue = F("Braunersreuth");
        break;
    }
    case 62233:
    {
        returnValue = F("Braunes Stück");
        break;
    }
    case 62234:
    {
        returnValue = F("Braunescher Weg");
        break;
    }
    case 62235:
    {
        returnValue = F("Braunetsrieth");
        break;
    }
    case 62236:
    {
        returnValue = F("Braunetsriether Weg");
        break;
    }
    case 62237:
    {
        returnValue = F("Brauneweg");
        break;
    }
    case 62238:
    {
        returnValue = F("Braunfeld");
        break;
    }
    case 62239:
    {
        returnValue = F("Braunfelder Allee");
        break;
    }
    case 62240:
    {
        returnValue = F("Braunfeldsmühle");
        break;
    }
    case 62241:
    {
        returnValue = F("Braunfelser Str.");
        break;
    }
    case 62242:
    {
        returnValue = F("Braunfelser Weg");
        break;
    }
    case 62243:
    {
        returnValue = F("Braunfelsstr.");
        break;
    }
    case 62244:
    {
        returnValue = F("Braungardtstr.");
        break;
    }
    case 62245:
    {
        returnValue = F("Braungarten");
        break;
    }
    case 62246:
    {
        returnValue = F("Braungartenstr.");
        break;
    }
    case 62247:
    {
        returnValue = F("Braungartweg");
        break;
    }
    case 62248:
    {
        returnValue = F("Braungasse");
        break;
    }
    case 62249:
    {
        returnValue = F("Braungärtle");
        break;
    }
    case 62250:
    {
        returnValue = F("Braunhalde");
        break;
    }
    case 62251:
    {
        returnValue = F("Braunhaldenstr.");
        break;
    }
    case 62252:
    {
        returnValue = F("Braunhaldenweg");
        break;
    }
    case 62253:
    {
        returnValue = F("Braunhardsbergstr.");
        break;
    }
    case 62254:
    {
        returnValue = F("Braunhauser Str.");
        break;
    }
    case 62255:
    {
        returnValue = F("Braunhofstr.");
        break;
    }
    case 62256:
    {
        returnValue = F("Braunholzstr.");
        break;
    }
    case 62257:
    {
        returnValue = F("Braunhäuser Str.");
        break;
    }
    case 62258:
    {
        returnValue = F("Braunhöfe");
        break;
    }
    case 62259:
    {
        returnValue = F("Braunichswalder Str.");
        break;
    }
    case 62260:
    {
        returnValue = F("Braunichswalder Weg");
        break;
    }
    case 62261:
    {
        returnValue = F("Braunkehlchenweg");
        break;
    }
    case 62262:
    {
        returnValue = F("Braunkelchenstr.");
        break;
    }
    case 62263:
    {
        returnValue = F("Braunkohlenstr.");
        break;
    }
    case 62264:
    {
        returnValue = F("Braunkohlenweg");
        break;
    }
    case 62265:
    {
        returnValue = F("Braunlager Rundweg");
        break;
    }
    case 62266:
    {
        returnValue = F("Braunlager Str.");
        break;
    }
    case 62267:
    {
        returnValue = F("Braunlager Weg");
        break;
    }
    case 62268:
    {
        returnValue = F("Braunland");
        break;
    }
    case 62269:
    {
        returnValue = F("Braunmühlstr.");
        break;
    }
    case 62270:
    {
        returnValue = F("Braunmüllerstr.");
        break;
    }
    case 62271:
    {
        returnValue = F("Braunsbach");
        break;
    }
    case 62272:
    {
        returnValue = F("Braunsbacher Str.");
        break;
    }
    case 62273:
    {
        returnValue = F("Braunsberg");
        break;
    }
    case 62274:
    {
        returnValue = F("Braunsberger Chaussee");
        break;
    }
    case 62275:
    {
        returnValue = F("Braunsberger Feld");
        break;
    }
    case 62276:
    {
        returnValue = F("Braunsberger Str.");
        break;
    }
    case 62277:
    {
        returnValue = F("Braunsberger Weg");
        break;
    }
    case 62278:
    {
        returnValue = F("Braunsbergstr.");
        break;
    }
    case 62279:
    {
        returnValue = F("Braunsbergweg");
        break;
    }
    case 62280:
    {
        returnValue = F("Braunsburger Steige");
        break;
    }
    case 62281:
    {
        returnValue = F("Braunschlag");
        break;
    }
    case 62282:
    {
        returnValue = F("Braunschweiger Chausse");
        break;
    }
    case 62283:
    {
        returnValue = F("Braunschweiger Gasse");
        break;
    }
    case 62284:
    {
        returnValue = F("Braunschweiger Str.");
        break;
    }
    case 62285:
    {
        returnValue = F("Braunschweiger Tor");
        break;
    }
    case 62286:
    {
        returnValue = F("Braunschweiger Weg");
        break;
    }
    case 62287:
    {
        returnValue = F("Braunschweigstr.");
        break;
    }
    case 62288:
    {
        returnValue = F("Braunschweigweg");
        break;
    }
    case 62289:
    {
        returnValue = F("Braunsdorf");
        break;
    }
    case 62290:
    {
        returnValue = F("Braunsdorfer Chaussee");
        break;
    }
    case 62291:
    {
        returnValue = F("Braunsdorfer Str.");
        break;
    }
    case 62292:
    {
        returnValue = F("Braunsdorfweg");
        break;
    }
    case 62293:
    {
        returnValue = F("Braunseeschneise");
        break;
    }
    case 62294:
    {
        returnValue = F("Braunselweg");
        break;
    }
    case 62295:
    {
        returnValue = F("Braunser Hammerweg");
        break;
    }
    case 62296:
    {
        returnValue = F("Braunser Weg");
        break;
    }
    case 62297:
    {
        returnValue = F("Braunsfeldmühle");
        break;
    }
    case 62298:
    {
        returnValue = F("Braunsgasse");
        break;
    }
    case 62299:
    {
        returnValue = F("Braunsgrund");
        break;
    }
    case 62300:
    {
        returnValue = F("Braunshain");
        break;
    }
    case 62301:
    {
        returnValue = F("Braunshainer Weg");
        break;
    }
    case 62302:
    {
        returnValue = F("Braunshardter Hausschneise");
        break;
    }
    case 62303:
    {
        returnValue = F("Braunshausener Str.");
        break;
    }
    case 62304:
    {
        returnValue = F("Braunshauser Str.");
        break;
    }
    case 62305:
    {
        returnValue = F("Braunsheck");
        break;
    }
    case 62306:
    {
        returnValue = F("Braunshof");
        break;
    }
    case 62307:
    {
        returnValue = F("Braunshofweg");
        break;
    }
    case 62308:
    {
        returnValue = F("Braunshorn");
        break;
    }
    case 62309:
    {
        returnValue = F("Braunsklingenweg");
        break;
    }
    case 62310:
    {
        returnValue = F("Braunsohle");
        break;
    }
    case 62311:
    {
        returnValue = F("Braunsroda");
        break;
    }
    case 62312:
    {
        returnValue = F("Braunsteichweg");
        break;
    }
    case 62313:
    {
        returnValue = F("Braunsteinhaus");
        break;
    }
    case 62314:
    {
        returnValue = F("Braunsteinweg");
        break;
    }
    case 62315:
    {
        returnValue = F("Braunstr.");
        break;
    }
    case 62316:
    {
        returnValue = F("Braunswasen");
        break;
    }
    case 62317:
    {
        returnValue = F("Braunswerth");
        break;
    }
    case 62318:
    {
        returnValue = F("Braunweg");
        break;
    }
    case 62319:
    {
        returnValue = F("Braunäckerstr.");
        break;
    }
    case 62320:
    {
        returnValue = F("Braunäckerweg");
        break;
    }
    case 62321:
    {
        returnValue = F("Brausbelsweg");
        break;
    }
    case 62322:
    {
        returnValue = F("Brausebachweg");
        break;
    }
    case 62323:
    {
        returnValue = F("Brauselay");
        break;
    }
    case 62324:
    {
        returnValue = F("Brauselaystr.");
        break;
    }
    case 62325:
    {
        returnValue = F("Brausensteiner Str.");
        break;
    }
    case 62326:
    {
        returnValue = F("Brausestr.");
        break;
    }
    case 62327:
    {
        returnValue = F("Brausetalweg");
        break;
    }
    case 62328:
    {
        returnValue = F("Brausewinkel");
        break;
    }
    case 62329:
    {
        returnValue = F("Brausmühle");
        break;
    }
    case 62330:
    {
        returnValue = F("Braustadtstr.");
        break;
    }
    case 62331:
    {
        returnValue = F("Braustr.");
        break;
    }
    case 62332:
    {
        returnValue = F("Braut- und Bahrweg");
        break;
    }
    case 62333:
    {
        returnValue = F("Brautbergweg");
        break;
    }
    case 62334:
    {
        returnValue = F("Brautgasse");
        break;
    }
    case 62335:
    {
        returnValue = F("Brautkamp");
        break;
    }
    case 62336:
    {
        returnValue = F("Brautlachweg");
        break;
    }
    case 62337:
    {
        returnValue = F("Brautlechtstr.");
        break;
    }
    case 62338:
    {
        returnValue = F("Brautor");
        break;
    }
    case 62339:
    {
        returnValue = F("Brautpfad");
        break;
    }
    case 62340:
    {
        returnValue = F("Brautrockstr.");
        break;
    }
    case 62341:
    {
        returnValue = F("Brautschatztwete");
        break;
    }
    case 62342:
    {
        returnValue = F("Brautsteg");
        break;
    }
    case 62343:
    {
        returnValue = F("Brautstr.");
        break;
    }
    case 62344:
    {
        returnValue = F("Brautstücke");
        break;
    }
    case 62345:
    {
        returnValue = F("Brautweg");
        break;
    }
    case 62346:
    {
        returnValue = F("Brautwiesenpark");
        break;
    }
    case 62347:
    {
        returnValue = F("Brautwiesenplatz");
        break;
    }
    case 62348:
    {
        returnValue = F("Brautwiesenstr.");
        break;
    }
    case 62349:
    {
        returnValue = F("Brautwiesentunnel");
        break;
    }
    case 62350:
    {
        returnValue = F("Brautäcker");
        break;
    }
    case 62351:
    {
        returnValue = F("Brauwasser");
        break;
    }
    case 62352:
    {
        returnValue = F("Brauweg");
        break;
    }
    case 62353:
    {
        returnValue = F("Brauweiler Weg");
        break;
    }
    case 62354:
    {
        returnValue = F("Brauweilerstr.");
        break;
    }
    case 62355:
    {
        returnValue = F("Brauweilerweg");
        break;
    }
    case 62356:
    {
        returnValue = F("Brauwiese");
        break;
    }
    case 62357:
    {
        returnValue = F("Brauwiesenstr.");
        break;
    }
    case 62358:
    {
        returnValue = F("Brauwiesenweg");
        break;
    }
    case 62359:
    {
        returnValue = F("Braußwiger Str.");
        break;
    }
    case 62360:
    {
        returnValue = F("Brawaweg");
        break;
    }
    case 62361:
    {
        returnValue = F("Bray-sur-Seine-Str.");
        break;
    }
    case 62362:
    {
        returnValue = F("Breau");
        break;
    }
    case 62363:
    {
        returnValue = F("Brebelhof");
        break;
    }
    case 62364:
    {
        returnValue = F("Brebelholz");
        break;
    }
    case 62365:
    {
        returnValue = F("Brebelholzer Str.");
        break;
    }
    case 62366:
    {
        returnValue = F("Brebelscheide");
        break;
    }
    case 62367:
    {
        returnValue = F("Breberener Str.");
        break;
    }
    case 62368:
    {
        returnValue = F("Brebersdorfer Str.");
        break;
    }
    case 62369:
    {
        returnValue = F("Breberweg");
        break;
    }
    case 62370:
    {
        returnValue = F("Brechbrücke");
        break;
    }
    case 62371:
    {
        returnValue = F("Brechdarre");
        break;
    }
    case 62372:
    {
        returnValue = F("Brechdarrenweg");
        break;
    }
    case 62373:
    {
        returnValue = F("Brechdarrweg");
        break;
    }
    case 62374:
    {
        returnValue = F("Brechdärre");
        break;
    }
    case 62375:
    {
        returnValue = F("Brechengasse");
        break;
    }
    case 62376:
    {
        returnValue = F("Brechenmacherstr.");
        break;
    }
    case 62377:
    {
        returnValue = F("Brechergäßle");
        break;
    }
    case 62378:
    {
        returnValue = F("Brecherlochweg");
        break;
    }
    case 62379:
    {
        returnValue = F("Brecherspitzstr.");
        break;
    }
    case 62380:
    {
        returnValue = F("Brecherspitzweg");
        break;
    }
    case 62381:
    {
        returnValue = F("Brecherweg");
        break;
    }
    case 62382:
    {
        returnValue = F("Brechete");
        break;
    }
    case 62383:
    {
        returnValue = F("Brechetsteige");
        break;
    }
    case 62384:
    {
        returnValue = F("Brechetsteigeweg");
        break;
    }
    case 62385:
    {
        returnValue = F("Brecheweg");
        break;
    }
    case 62386:
    {
        returnValue = F("Brechgarten");
        break;
    }
    case 62387:
    {
        returnValue = F("Brechgasse");
        break;
    }
    case 62388:
    {
        returnValue = F("Brechgraben");
        break;
    }
    case 62389:
    {
        returnValue = F("Brechgrube");
        break;
    }
    case 62390:
    {
        returnValue = F("Brechgrubenweg");
        break;
    }
    case 62391:
    {
        returnValue = F("Brechhausstr.");
        break;
    }
    case 62392:
    {
        returnValue = F("Brechhaustr.");
        break;
    }
    case 62393:
    {
        returnValue = F("Brechhausweg");
        break;
    }
    case 62394:
    {
        returnValue = F("Brechhofer Str.");
        break;
    }
    case 62395:
    {
        returnValue = F("Brechhäuserweg");
        break;
    }
    case 62396:
    {
        returnValue = F("Brechhöheweg");
        break;
    }
    case 62397:
    {
        returnValue = F("Brechhülbstr.");
        break;
    }
    case 62398:
    {
        returnValue = F("Brechhüttenweg");
        break;
    }
    case 62399:
    {
        returnValue = F("Brechkaul");
        break;
    }
    case 62400:
    {
        returnValue = F("Brechkaut");
        break;
    }
    case 62401:
    {
        returnValue = F("Brechklinge");
        break;
    }
    case 62402:
    {
        returnValue = F("Brechlochweg");
        break;
    }
    case 62403:
    {
        returnValue = F("Brechofen");
        break;
    }
    case 62404:
    {
        returnValue = F("Brechofenweg");
        break;
    }
    case 62405:
    {
        returnValue = F("Brechstatt");
        break;
    }
    case 62406:
    {
        returnValue = F("Brechstattweg");
        break;
    }
    case 62407:
    {
        returnValue = F("Brechstubenstr.");
        break;
    }
    case 62408:
    {
        returnValue = F("Brechstubenweg");
        break;
    }
    case 62409:
    {
        returnValue = F("Brechte");
        break;
    }
    case 62410:
    {
        returnValue = F("Brechtelstr.");
        break;
    }
    case 62411:
    {
        returnValue = F("Brechtener Str.");
        break;
    }
    case 62412:
    {
        returnValue = F("Brechter Weg");
        break;
    }
    case 62413:
    {
        returnValue = F("Brechtestr.");
        break;
    }
    case 62414:
    {
        returnValue = F("Brechtorfer Str.");
        break;
    }
    case 62415:
    {
        returnValue = F("Brechtstr.");
        break;
    }
    case 62416:
    {
        returnValue = F("Brechtweg");
        break;
    }
    case 62417:
    {
        returnValue = F("Brechwasen");
        break;
    }
    case 62418:
    {
        returnValue = F("Breckenfeldweg");
        break;
    }
    case 62419:
    {
        returnValue = F("Breckenheimer Str.");
        break;
    }
    case 62420:
    {
        returnValue = F("Breckenheimer Weg");
        break;
    }
    case 62421:
    {
        returnValue = F("Breckenstr.");
        break;
    }
    case 62422:
    {
        returnValue = F("Breckerfelder Str.");
        break;
    }
    case 62423:
    {
        returnValue = F("Breckweg");
        break;
    }
    case 62424:
    {
        returnValue = F("Bredaer Bruch");
        break;
    }
    case 62425:
    {
        returnValue = F("Bredaer Str.");
        break;
    }
    case 62426:
    {
        returnValue = F("Bredaer Weg");
        break;
    }
    case 62427:
    {
        returnValue = F("Bredahüttenweg");
        break;
    }
    case 62428:
    {
        returnValue = F("Bredastr.");
        break;
    }
    case 62429:
    {
        returnValue = F("Bredbeekskoppel");
        break;
    }
    case 62430:
    {
        returnValue = F("Bredbur-Platz");
        break;
    }
    case 62431:
    {
        returnValue = F("Bredde");
        break;
    }
    case 62432:
    {
        returnValue = F("Breddebogen");
        break;
    }
    case 62433:
    {
        returnValue = F("Breddenberger Str.");
        break;
    }
    case 62434:
    {
        returnValue = F("Breddenkampstr.");
        break;
    }
    case 62435:
    {
        returnValue = F("Breddepark");
        break;
    }
    case 62436:
    {
        returnValue = F("Bredder Weg");
        break;
    }
    case 62437:
    {
        returnValue = F("Bredderbruchstr.");
        break;
    }
    case 62438:
    {
        returnValue = F("Breddershaus");
        break;
    }
    case 62439:
    {
        returnValue = F("Bredderstr.");
        break;
    }
    case 62440:
    {
        returnValue = F("Breddert");
        break;
    }
    case 62441:
    {
        returnValue = F("Bredderweg");
        break;
    }
    case 62442:
    {
        returnValue = F("Breddestr.");
        break;
    }
    case 62443:
    {
        returnValue = F("Breddewarden");
        break;
    }
    case 62444:
    {
        returnValue = F("Breddewarder Weg");
        break;
    }
    case 62445:
    {
        returnValue = F("Breddeweg");
        break;
    }
    case 62446:
    {
        returnValue = F("Breddin Abbau");
        break;
    }
    case 62447:
    {
        returnValue = F("Breddiner Str.");
        break;
    }
    case 62448:
    {
        returnValue = F("Breddorfer Moor");
        break;
    }
    case 62449:
    {
        returnValue = F("Breddorfer Str.");
        break;
    }
    case 62450:
    {
        returnValue = F("Breddorfer Weg");
        break;
    }
    case 62451:
    {
        returnValue = F("Brede");
        break;
    }
    case 62452:
    {
        returnValue = F("Brede-Riehen-Weg");
        break;
    }
    case 62453:
    {
        returnValue = F("Brede-Ring");
        break;
    }
    case 62454:
    {
        returnValue = F("Bredebecker Weg");
        break;
    }
    case 62455:
    {
        returnValue = F("Bredeberg");
        break;
    }
    case 62456:
    {
        returnValue = F("Bredeck");
        break;
    }
    case 62457:
    {
        returnValue = F("Bredefeld");
        break;
    }
    case 62458:
    {
        returnValue = F("Bredegasse");
        break;
    }
    case 62459:
    {
        returnValue = F("Bredegatt");
        break;
    }
    case 62460:
    {
        returnValue = F("Bredegatter Str.");
        break;
    }
    case 62461:
    {
        returnValue = F("Bredehorner Str.");
        break;
    }
    case 62462:
    {
        returnValue = F("Bredelarer Str.");
        break;
    }
    case 62463:
    {
        returnValue = F("Bredelemer Weg");
        break;
    }
    case 62464:
    {
        returnValue = F("Bredemarhof");
        break;
    }
    case 62465:
    {
        returnValue = F("Bredemeher Weg");
        break;
    }
    case 62466:
    {
        returnValue = F("Bredemeiers Weg");
        break;
    }
    case 62467:
    {
        returnValue = F("Breden Pohl");
        break;
    }
    case 62468:
    {
        returnValue = F("Bredenbachstr.");
        break;
    }
    case 62469:
    {
        returnValue = F("Bredenbeck");
        break;
    }
    case 62470:
    {
        returnValue = F("Bredenbecksgang");
        break;
    }
    case 62471:
    {
        returnValue = F("Bredenbeeke");
        break;
    }
    case 62472:
    {
        returnValue = F("Bredenbeeksweg");
        break;
    }
    case 62473:
    {
        returnValue = F("Bredenbeekweg");
        break;
    }
    case 62474:
    {
        returnValue = F("Bredenbeker Str.");
        break;
    }
    case 62475:
    {
        returnValue = F("Bredenbeker Weg");
        break;
    }
    case 62476:
    {
        returnValue = F("Bredenbekkamp");
        break;
    }
    case 62477:
    {
        returnValue = F("Bredenbekweg");
        break;
    }
    case 62478:
    {
        returnValue = F("Bredenberg");
        break;
    }
    case 62479:
    {
        returnValue = F("Bredenbockersiedlung");
        break;
    }
    case 62480:
    {
        returnValue = F("Bredenborner Str.");
        break;
    }
    case 62481:
    {
        returnValue = F("Bredenbrauck");
        break;
    }
    case 62482:
    {
        returnValue = F("Bredenbrucher Weg");
        break;
    }
    case 62483:
    {
        returnValue = F("Bredenfeld");
        break;
    }
    case 62484:
    {
        returnValue = F("Bredenfelder Str.");
        break;
    }
    case 62485:
    {
        returnValue = F("Bredenfelder Weg");
        break;
    }
    case 62486:
    {
        returnValue = F("Bredenfeldstr.");
        break;
    }
    case 62487:
    {
        returnValue = F("Bredenheider Weg");
        break;
    }
    case 62488:
    {
        returnValue = F("Bredenhoop");
        break;
    }
    case 62489:
    {
        returnValue = F("Bredenhop");
        break;
    }
    case 62490:
    {
        returnValue = F("Bredenhorn");
        break;
    }
    case 62491:
    {
        returnValue = F("Bredenhörenweg");
        break;
    }
    case 62492:
    {
        returnValue = F("Bredenkamps Feld");
        break;
    }
    case 62493:
    {
        returnValue = F("Bredenmoor");
        break;
    }
    case 62494:
    {
        returnValue = F("Bredenollgasse");
        break;
    }
    case 62495:
    {
        returnValue = F("Bredenpohl");
        break;
    }
    case 62496:
    {
        returnValue = F("Bredenrehm");
        break;
    }
    case 62497:
    {
        returnValue = F("Bredenscheider Str.");
        break;
    }
    case 62498:
    {
        returnValue = F("Bredensegen");
        break;
    }
    case 62499:
    {
        returnValue = F("Bredenstr.");
        break;
    }
    case 62500:
    {
        returnValue = F("Bredenstücken");
        break;
    }
    case 62501:
    {
        returnValue = F("Bredentiner Str.");
        break;
    }
    case 62502:
    {
        returnValue = F("Bredentiner Weg");
        break;
    }
    case 62503:
    {
        returnValue = F("Bredenweg");
        break;
    }
    case 62504:
    {
        returnValue = F("Bredenwinder Str.");
        break;
    }
    case 62505:
    {
        returnValue = F("Bredenwinkel");
        break;
    }
    case 62506:
    {
        returnValue = F("Breder Hude");
        break;
    }
    case 62507:
    {
        returnValue = F("Bredereicher Str.");
        break;
    }
    case 62508:
    {
        returnValue = F("Bredestr.");
        break;
    }
    case 62509:
    {
        returnValue = F("Bredeweg");
        break;
    }
    case 62510:
    {
        returnValue = F("Bredhornstr.");
        break;
    }
    case 62511:
    {
        returnValue = F("Bredhornweg");
        break;
    }
    case 62512:
    {
        returnValue = F("Breding");
        break;
    }
    case 62513:
    {
        returnValue = F("Bredingsfeld");
        break;
    }
    case 62514:
    {
        returnValue = F("Bredland");
        break;
    }
    case 62515:
    {
        returnValue = F("Bredlweg");
        break;
    }
    case 62516:
    {
        returnValue = F("Bredower Allee");
        break;
    }
    case 62517:
    {
        returnValue = F("Bredower Str.");
        break;
    }
    case 62518:
    {
        returnValue = F("Bredower Weg");
        break;
    }
    case 62519:
    {
        returnValue = F("Bredowstr.");
        break;
    }
    case 62520:
    {
        returnValue = F("Bredstedter Koog");
        break;
    }
    case 62521:
    {
        returnValue = F("Bredstedter Landstr.");
        break;
    }
    case 62522:
    {
        returnValue = F("Bredstedter Str.");
        break;
    }
    case 62523:
    {
        returnValue = F("Bree");
        break;
    }
    case 62524:
    {
        returnValue = F("Breecher Weg");
        break;
    }
    case 62525:
    {
        returnValue = F("Breecken");
        break;
    }
    case 62526:
    {
        returnValue = F("Breecksweg");
        break;
    }
    case 62527:
    {
        returnValue = F("Breed Stieg");
        break;
    }
    case 62528:
    {
        returnValue = F("Breede");
        break;
    }
    case 62529:
    {
        returnValue = F("Breedekamp");
        break;
    }
    case 62530:
    {
        returnValue = F("Breedenhagen");
        break;
    }
    case 62531:
    {
        returnValue = F("Breedenkamp");
        break;
    }
    case 62532:
    {
        returnValue = F("Breedenmoorweg");
        break;
    }
    case 62533:
    {
        returnValue = F("Breedenstr.");
        break;
    }
    case 62534:
    {
        returnValue = F("Breedenweg");
        break;
    }
    case 62535:
    {
        returnValue = F("Breedestr.");
        break;
    }
    case 62536:
    {
        returnValue = F("Breedeweg");
        break;
    }
    case 62537:
    {
        returnValue = F("Breedlandspad");
        break;
    }
    case 62538:
    {
        returnValue = F("Breedlandweg");
        break;
    }
    case 62539:
    {
        returnValue = F("Breehegge");
        break;
    }
    case 62540:
    {
        returnValue = F("Breekamp");
        break;
    }
    case 62541:
    {
        returnValue = F("Breekheide");
        break;
    }
    case 62542:
    {
        returnValue = F("Breekstücken");
        break;
    }
    case 62543:
    {
        returnValue = F("Breeland");
        break;
    }
    case 62544:
    {
        returnValue = F("Breelande");
        break;
    }
    case 62545:
    {
        returnValue = F("Breelohweg");
        break;
    }
    case 62546:
    {
        returnValue = F("Breels");
        break;
    }
    case 62547:
    {
        returnValue = F("Breendstr.");
        break;
    }
    case 62548:
    {
        returnValue = F("Breenstr.");
        break;
    }
    case 62549:
    {
        returnValue = F("Breenweg");
        break;
    }
    case 62550:
    {
        returnValue = F("Breese");
        break;
    }
    case 62551:
    {
        returnValue = F("Breese im Bruche");
        break;
    }
    case 62552:
    {
        returnValue = F("Breesen");
        break;
    }
    case 62553:
    {
        returnValue = F("Breesener Chaussee");
        break;
    }
    case 62554:
    {
        returnValue = F("Breesener Chaussee Klein Thurow");
        break;
    }
    case 62555:
    {
        returnValue = F("Breesener Str.");
        break;
    }
    case 62556:
    {
        returnValue = F("Breesener Weg");
        break;
    }
    case 62557:
    {
        returnValue = F("Breesener Weg Meetzen");
        break;
    }
    case 62558:
    {
        returnValue = F("Breeser Str.");
        break;
    }
    case 62559:
    {
        returnValue = F("Breeser Weg");
        break;
    }
    case 62560:
    {
        returnValue = F("Breestr.");
        break;
    }
    case 62561:
    {
        returnValue = F("Breetbarg");
        break;
    }
    case 62562:
    {
        returnValue = F("Breetpad");
        break;
    }
    case 62563:
    {
        returnValue = F("Breetz");
        break;
    }
    case 62564:
    {
        returnValue = F("Breetzer Str.");
        break;
    }
    case 62565:
    {
        returnValue = F("Breetzer Weg");
        break;
    }
    case 62566:
    {
        returnValue = F("Breewaiwisch");
        break;
    }
    case 62567:
    {
        returnValue = F("Breeweg");
        break;
    }
    case 62568:
    {
        returnValue = F("Breewisch");
        break;
    }
    case 62569:
    {
        returnValue = F("Brefelder Str.");
        break;
    }
    case 62570:
    {
        returnValue = F("Brefeldweg");
        break;
    }
    case 62571:
    {
        returnValue = F("Bregenbach");
        break;
    }
    case 62572:
    {
        returnValue = F("Bregenbecker Str.");
        break;
    }
    case 62573:
    {
        returnValue = F("Bregenberg");
        break;
    }
    case 62574:
    {
        returnValue = F("Bregenbergstr.");
        break;
    }
    case 62575:
    {
        returnValue = F("Bregengaard");
        break;
    }
    case 62576:
    {
        returnValue = F("Bregenstedter Str.");
        break;
    }
    case 62577:
    {
        returnValue = F("Bregenstedter Weg");
        break;
    }
    case 62578:
    {
        returnValue = F("Bregenzer Str.");
        break;
    }
    case 62579:
    {
        returnValue = F("Bregenzer Weg");
        break;
    }
    case 62580:
    {
        returnValue = F("Bregning");
        break;
    }
    case 62581:
    {
        returnValue = F("Bregning-West");
        break;
    }
    case 62582:
    {
        returnValue = F("Bregnitzstr.");
        break;
    }
    case 62583:
    {
        returnValue = F("Bregstr.");
        break;
    }
    case 62584:
    {
        returnValue = F("Bregtalbahn");
        break;
    }
    case 62585:
    {
        returnValue = F("Bregtalstr.");
        break;
    }
    case 62586:
    {
        returnValue = F("Bregtalweg");
        break;
    }
    case 62587:
    {
        returnValue = F("Bregweg");
        break;
    }
    case 62588:
    {
        returnValue = F("Bregwerkstr.");
        break;
    }
    case 62589:
    {
        returnValue = F("Brehbergstr.");
        break;
    }
    case 62590:
    {
        returnValue = F("Brehmacker");
        break;
    }
    case 62591:
    {
        returnValue = F("Brehmbachstr.");
        break;
    }
    case 62592:
    {
        returnValue = F("Brehmenstr.");
        break;
    }
    case 62593:
    {
        returnValue = F("Brehmenweg");
        break;
    }
    case 62594:
    {
        returnValue = F("Brehmer Str.");
        break;
    }
    case 62595:
    {
        returnValue = F("Brehmerberg");
        break;
    }
    case 62596:
    {
        returnValue = F("Brehmergartenweg");
        break;
    }
    case 62597:
    {
        returnValue = F("Brehmestallsweg");
        break;
    }
    case 62598:
    {
        returnValue = F("Brehmestr.");
        break;
    }
    case 62599:
    {
        returnValue = F("Brehmhof");
        break;
    }
    case 62600:
    {
        returnValue = F("Brehmketal");
        break;
    }
    case 62601:
    {
        returnValue = F("Brehmstr.");
        break;
    }
    case 62602:
    {
        returnValue = F("Brehmweg");
        break;
    }
    case 62603:
    {
        returnValue = F("Brehnaer Str.");
        break;
    }
    case 62604:
    {
        returnValue = F("Brehweg");
        break;
    }
    case 62605:
    {
        returnValue = F("Brehwisch");
        break;
    }
    case 62606:
    {
        returnValue = F("Breibacher Feld");
        break;
    }
    case 62607:
    {
        returnValue = F("Breibacher Weg");
        break;
    }
    case 62608:
    {
        returnValue = F("Breibacherhof");
        break;
    }
    case 62609:
    {
        returnValue = F("Breibachweg");
        break;
    }
    case 62610:
    {
        returnValue = F("Breidbacher Höhe");
        break;
    }
    case 62611:
    {
        returnValue = F("Breidehage");
        break;
    }
    case 62612:
    {
        returnValue = F("Breidenassel");
        break;
    }
    case 62613:
    {
        returnValue = F("Breidenbach");
        break;
    }
    case 62614:
    {
        returnValue = F("Breidenbacher Str.");
        break;
    }
    case 62615:
    {
        returnValue = F("Breidenbacher Weg");
        break;
    }
    case 62616:
    {
        returnValue = F("Breidenbachstr.");
        break;
    }
    case 62617:
    {
        returnValue = F("Breidenbachweg");
        break;
    }
    case 62618:
    {
        returnValue = F("Breidenbeck");
        break;
    }
    case 62619:
    {
        returnValue = F("Breidenborner Str.");
        break;
    }
    case 62620:
    {
        returnValue = F("Breidenbrucher Str.");
        break;
    }
    case 62621:
    {
        returnValue = F("Breidenhofer Str.");
        break;
    }
    case 62622:
    {
        returnValue = F("Breidensteiner Str.");
        break;
    }
    case 62623:
    {
        returnValue = F("Breidenweg");
        break;
    }
    case 62624:
    {
        returnValue = F("Breider Str.");
        break;
    }
    case 62625:
    {
        returnValue = F("Breidertring");
        break;
    }
    case 62626:
    {
        returnValue = F("Breidertschneise");
        break;
    }
    case 62627:
    {
        returnValue = F("Breidings Garten");
        break;
    }
    case 62628:
    {
        returnValue = F("Breidingstr.");
        break;
    }
    case 62629:
    {
        returnValue = F("Breidter Str.");
        break;
    }
    case 62630:
    {
        returnValue = F("Breienweg");
        break;
    }
    case 62631:
    {
        returnValue = F("Breigarten");
        break;
    }
    case 62632:
    {
        returnValue = F("Breige");
        break;
    }
    case 62633:
    {
        returnValue = F("Breigen");
        break;
    }
    case 62634:
    {
        returnValue = F("Breikelchen");
        break;
    }
    case 62635:
    {
        returnValue = F("Breil");
        break;
    }
    case 62636:
    {
        returnValue = F("Breiller Gracht");
        break;
    }
    case 62637:
    {
        returnValue = F("Breimannweg");
        break;
    }
    case 62638:
    {
        returnValue = F("Breimerwinkel");
        break;
    }
    case 62639:
    {
        returnValue = F("Breindobelweg");
        break;
    }
    case 62640:
    {
        returnValue = F("Breinermoorer Str.");
        break;
    }
    case 62641:
    {
        returnValue = F("Breingäßle");
        break;
    }
    case 62642:
    {
        returnValue = F("Breiningerstr.");
        break;
    }
    case 62643:
    {
        returnValue = F("Breinlingsweg");
        break;
    }
    case 62644:
    {
        returnValue = F("Breinumer Str.");
        break;
    }
    case 62645:
    {
        returnValue = F("Breisacher Fahrgast-Schifffahrt GmbH");
        break;
    }
    case 62646:
    {
        returnValue = F("Breisacher Str.");
        break;
    }
    case 62647:
    {
        returnValue = F("Breisacher Weg");
        break;
    }
    case 62648:
    {
        returnValue = F("Breisacherstr.");
        break;
    }
    case 62649:
    {
        returnValue = F("Breischener Str.");
        break;
    }
    case 62650:
    {
        returnValue = F("Breischer Weg");
        break;
    }
    case 62651:
    {
        returnValue = F("Breisgauallee");
        break;
    }
    case 62652:
    {
        returnValue = F("Breisgauer Str.");
        break;
    }
    case 62653:
    {
        returnValue = F("Breisgauring");
        break;
    }
    case 62654:
    {
        returnValue = F("Breisgaustr.");
        break;
    }
    case 62655:
    {
        returnValue = F("Breisgauweg");
        break;
    }
    case 62656:
    {
        returnValue = F("Breisiger Str.");
        break;
    }
    case 62657:
    {
        returnValue = F("Breit-Eich");
        break;
    }
    case 62658:
    {
        returnValue = F("Breit-Schneise");
        break;
    }
    case 62659:
    {
        returnValue = F("Breitachklamm");
        break;
    }
    case 62660:
    {
        returnValue = F("Breitachstr.");
        break;
    }
    case 62661:
    {
        returnValue = F("Breitacker");
        break;
    }
    case 62662:
    {
        returnValue = F("Breitackerstr.");
        break;
    }
    case 62663:
    {
        returnValue = F("Breitackerweg");
        break;
    }
    case 62664:
    {
        returnValue = F("Breitangerweg");
        break;
    }
    case 62665:
    {
        returnValue = F("Breitasch");
        break;
    }
    case 62666:
    {
        returnValue = F("Breitauer Str.");
        break;
    }
    case 62667:
    {
        returnValue = F("Breitbacher Graben");
        break;
    }
    case 62668:
    {
        returnValue = F("Breitbachstr.");
        break;
    }
    case 62669:
    {
        returnValue = F("Breitbachweg");
        break;
    }
    case 62670:
    {
        returnValue = F("Breitbang");
        break;
    }
    case 62671:
    {
        returnValue = F("Breitbarthstr.");
        break;
    }
    case 62672:
    {
        returnValue = F("Breitbruchschneise");
        break;
    }
    case 62673:
    {
        returnValue = F("Breitbrunn");
        break;
    }
    case 62674:
    {
        returnValue = F("Breitbrunner Str.");
        break;
    }
    case 62675:
    {
        returnValue = F("Breitbäumlein");
        break;
    }
    case 62676:
    {
        returnValue = F("Breitbühlweg");
        break;
    }
    case 62677:
    {
        returnValue = F("Breite");
        break;
    }
    case 62678:
    {
        returnValue = F("Breite Alken");
        break;
    }
    case 62679:
    {
        returnValue = F("Breite Allee");
        break;
    }
    case 62680:
    {
        returnValue = F("Breite Aue");
        break;
    }
    case 62681:
    {
        returnValue = F("Breite Bahn");
        break;
    }
    case 62682:
    {
        returnValue = F("Breite Bitz");
        break;
    }
    case 62683:
    {
        returnValue = F("Breite Bruchschneise");
        break;
    }
    case 62684:
    {
        returnValue = F("Breite Brücke");
        break;
    }
    case 62685:
    {
        returnValue = F("Breite Drift");
        break;
    }
    case 62686:
    {
        returnValue = F("Breite Eiche");
        break;
    }
    case 62687:
    {
        returnValue = F("Breite Furt");
        break;
    }
    case 62688:
    {
        returnValue = F("Breite Gasse");
        break;
    }
    case 62689:
    {
        returnValue = F("Breite Graben Weg");
        break;
    }
    case 62690:
    {
        returnValue = F("Breite Hecke");
        break;
    }
    case 62691:
    {
        returnValue = F("Breite Heerstr.");
        break;
    }
    case 62692:
    {
        returnValue = F("Breite Herzogstr.");
        break;
    }
    case 62693:
    {
        returnValue = F("Breite Horst");
        break;
    }
    case 62694:
    {
        returnValue = F("Breite Kamp");
        break;
    }
    case 62695:
    {
        returnValue = F("Breite Koppel");
        break;
    }
    case 62696:
    {
        returnValue = F("Breite Lade");
        break;
    }
    case 62697:
    {
        returnValue = F("Breite Lieth");
        break;
    }
    case 62698:
    {
        returnValue = F("Breite Länder");
        break;
    }
    case 62699:
    {
        returnValue = F("Breite Länge");
        break;
    }
    case 62700:
    {
        returnValue = F("Breite Pol");
        break;
    }
    case 62701:
    {
        returnValue = F("Breite Rehre");
        break;
    }
    case 62702:
    {
        returnValue = F("Breite Reihe");
        break;
    }
    case 62703:
    {
        returnValue = F("Breite Riede");
        break;
    }
    case 62704:
    {
        returnValue = F("Breite Rod");
        break;
    }
    case 62705:
    {
        returnValue = F("Breite Route");
        break;
    }
    case 62706:
    {
        returnValue = F("Breite Schlichter Schneise");
        break;
    }
    case 62707:
    {
        returnValue = F("Breite Schneise");
        break;
    }
    case 62708:
    {
        returnValue = F("Breite Seite");
        break;
    }
    case 62709:
    {
        returnValue = F("Breite Staude");
        break;
    }
    case 62710:
    {
        returnValue = F("Breite Steige");
        break;
    }
    case 62711:
    {
        returnValue = F("Breite Str.");
        break;
    }
    case 62712:
    {
        returnValue = F("Breite Stücken");
        break;
    }
    case 62713:
    {
        returnValue = F("Breite Techt");
        break;
    }
    case 62714:
    {
        returnValue = F("Breite Tor");
        break;
    }
    case 62715:
    {
        returnValue = F("Breite Weg");
        break;
    }
    case 62716:
    {
        returnValue = F("Breite Wende");
        break;
    }
    case 62717:
    {
        returnValue = F("Breite Werl");
        break;
    }
    case 62718:
    {
        returnValue = F("Breite Wiese");
        break;
    }
    case 62719:
    {
        returnValue = F("Breite Wiesen");
        break;
    }
    case 62720:
    {
        returnValue = F("Breite Wiesenstr.");
        break;
    }
    case 62721:
    {
        returnValue = F("Breite Wiesenweg");
        break;
    }
    case 62722:
    {
        returnValue = F("Breite Äcker");
        break;
    }
    case 62723:
    {
        returnValue = F("Breite-Egert-Str.");
        break;
    }
    case 62724:
    {
        returnValue = F("Breite-Heide-Str.");
        break;
    }
    case 62725:
    {
        returnValue = F("Breite-Horst-Weg");
        break;
    }
    case 62726:
    {
        returnValue = F("Breite-Riede");
        break;
    }
    case 62727:
    {
        returnValue = F("Breitebacherfeld");
        break;
    }
    case 62728:
    {
        returnValue = F("Breitebeneweg");
        break;
    }
    case 62729:
    {
        returnValue = F("Breitebuschfeld");
        break;
    }
    case 62730:
    {
        returnValue = F("Breitefelder Weg");
        break;
    }
    case 62731:
    {
        returnValue = F("Breitegardweg");
        break;
    }
    case 62732:
    {
        returnValue = F("Breitegardzubringerweg");
        break;
    }
    case 62733:
    {
        returnValue = F("Breitegarten");
        break;
    }
    case 62734:
    {
        returnValue = F("Breitegrund");
        break;
    }
    case 62735:
    {
        returnValue = F("Breitegärten");
        break;
    }
    case 62736:
    {
        returnValue = F("Breitegärtenstr.");
        break;
    }
    case 62737:
    {
        returnValue = F("Breitehaidsweg");
        break;
    }
    case 62738:
    {
        returnValue = F("Breitehardt");
        break;
    }
    case 62739:
    {
        returnValue = F("Breiteharthstr.");
        break;
    }
    case 62740:
    {
        returnValue = F("Breitehof");
        break;
    }
    case 62741:
    {
        returnValue = F("Breiteiche");
        break;
    }
    case 62742:
    {
        returnValue = F("Breiteicher Str.");
        break;
    }
    case 62743:
    {
        returnValue = F("Breiteichstr.");
        break;
    }
    case 62744:
    {
        returnValue = F("Breiteichweg");
        break;
    }
    case 62745:
    {
        returnValue = F("Breitelweg");
        break;
    }
    case 62746:
    {
        returnValue = F("Breitemark");
        break;
    }
    case 62747:
    {
        returnValue = F("Breitemattstr.");
        break;
    }
    case 62748:
    {
        returnValue = F("Breitemoosweg");
        break;
    }
    case 62749:
    {
        returnValue = F("Breiten");
        break;
    }
    case 62750:
    {
        returnValue = F("Breiten Ende");
        break;
    }
    case 62751:
    {
        returnValue = F("Breitenacker");
        break;
    }
    case 62752:
    {
        returnValue = F("Breitenackerstr.");
        break;
    }
    case 62753:
    {
        returnValue = F("Breitenackerweg");
        break;
    }
    case 62754:
    {
        returnValue = F("Breitenaht");
        break;
    }
    case 62755:
    {
        returnValue = F("Breitenanger");
        break;
    }
    case 62756:
    {
        returnValue = F("Breitenau");
        break;
    }
    case 62757:
    {
        returnValue = F("Breitenauer Str.");
        break;
    }
    case 62758:
    {
        returnValue = F("Breitenauer Weg");
        break;
    }
    case 62759:
    {
        returnValue = F("Breitenauerstr.");
        break;
    }
    case 62760:
    {
        returnValue = F("Breitenauerweg");
        break;
    }
    case 62761:
    {
        returnValue = F("Breitenaustr.");
        break;
    }
    case 62762:
    {
        returnValue = F("Breitenbach");
        break;
    }
    case 62763:
    {
        returnValue = F("Breitenbachallee");
        break;
    }
    case 62764:
    {
        returnValue = F("Breitenbachdammweg");
        break;
    }
    case 62765:
    {
        returnValue = F("Breitenbacher Str.");
        break;
    }
    case 62766:
    {
        returnValue = F("Breitenbacher Weg");
        break;
    }
    case 62767:
    {
        returnValue = F("Breitenbachplatz");
        break;
    }
    case 62768:
    {
        returnValue = F("Breitenbachsfeld");
        break;
    }
    case 62769:
    {
        returnValue = F("Breitenbachstr.");
        break;
    }
    case 62770:
    {
        returnValue = F("Breitenbachtal");
        break;
    }
    case 62771:
    {
        returnValue = F("Breitenbachtalstr.");
        break;
    }
    case 62772:
    {
        returnValue = F("Breitenbachweg");
        break;
    }
    case 62773:
    {
        returnValue = F("Breitenbaum");
        break;
    }
    case 62774:
    {
        returnValue = F("Breitenbaumäcker");
        break;
    }
    case 62775:
    {
        returnValue = F("Breitenbend");
        break;
    }
    case 62776:
    {
        returnValue = F("Breitenbendener Str.");
        break;
    }
    case 62777:
    {
        returnValue = F("Breitenbendener Weg");
        break;
    }
    case 62778:
    {
        returnValue = F("Breitenbender Weg");
        break;
    }
    case 62779:
    {
        returnValue = F("Breitenberg");
        break;
    }
    case 62780:
    {
        returnValue = F("Breitenberger Str.");
        break;
    }
    case 62781:
    {
        returnValue = F("Breitenberger Weg");
        break;
    }
    case 62782:
    {
        returnValue = F("Breitenbergstr.");
        break;
    }
    case 62783:
    {
        returnValue = F("Breitenbergsweg");
        break;
    }
    case 62784:
    {
        returnValue = F("Breitenbergswiese");
        break;
    }
    case 62785:
    {
        returnValue = F("Breitenbergweg");
        break;
    }
    case 62786:
    {
        returnValue = F("Breitenbich");
        break;
    }
    case 62787:
    {
        returnValue = F("Breitenbichl");
        break;
    }
    case 62788:
    {
        returnValue = F("Breitenbohl");
        break;
    }
    case 62789:
    {
        returnValue = F("Breitenborner Str.");
        break;
    }
    case 62790:
    {
        returnValue = F("Breitenborner Weg");
        break;
    }
    case 62791:
    {
        returnValue = F("Breitenborngasse");
        break;
    }
    case 62792:
    {
        returnValue = F("Breitenbronner Str.");
        break;
    }
    case 62793:
    {
        returnValue = F("Breitenbruch");
        break;
    }
    case 62794:
    {
        returnValue = F("Breitenbrucher Str.");
        break;
    }
    case 62795:
    {
        returnValue = F("Breitenbruchsweg");
        break;
    }
    case 62796:
    {
        returnValue = F("Breitenbruchweg");
        break;
    }
    case 62797:
    {
        returnValue = F("Breitenbrunn");
        break;
    }
    case 62798:
    {
        returnValue = F("Breitenbrunnen");
        break;
    }
    case 62799:
    {
        returnValue = F("Breitenbrunner Str.");
        break;
    }
    case 62800:
    {
        returnValue = F("Breitenbrunner Weg");
        break;
    }
    case 62801:
    {
        returnValue = F("Breitenbrücher Weg");
        break;
    }
    case 62802:
    {
        returnValue = F("Breitenbuch");
        break;
    }
    case 62803:
    {
        returnValue = F("Breitenburger Str.");
        break;
    }
    case 62804:
    {
        returnValue = F("Breitenburger Weg");
        break;
    }
    case 62805:
    {
        returnValue = F("Breitenbuscher Weg");
        break;
    }
    case 62806:
    {
        returnValue = F("Breitenbühl");
        break;
    }
    case 62807:
    {
        returnValue = F("Breitendeich");
        break;
    }
    case 62808:
    {
        returnValue = F("Breitendieler Grenzweg");
        break;
    }
    case 62809:
    {
        returnValue = F("Breitendieler Str.");
        break;
    }
    case 62810:
    {
        returnValue = F("Breitendornweg");
        break;
    }
    case 62811:
    {
        returnValue = F("Breitene");
        break;
    }
    case 62812:
    {
        returnValue = F("Breitenegert");
        break;
    }
    case 62813:
    {
        returnValue = F("Breitenegger Weg");
        break;
    }
    case 62814:
    {
        returnValue = F("Breitenende");
        break;
    }
    case 62815:
    {
        returnValue = F("Breitenenweg");
        break;
    }
    case 62816:
    {
        returnValue = F("Breitenfeld");
        break;
    }
    case 62817:
    {
        returnValue = F("Breitenfelde");
        break;
    }
    case 62818:
    {
        returnValue = F("Breitenfelder Dorfstr.");
        break;
    }
    case 62819:
    {
        returnValue = F("Breitenfelder Ring");
        break;
    }
    case 62820:
    {
        returnValue = F("Breitenfelder Str.");
        break;
    }
    case 62821:
    {
        returnValue = F("Breitenfelder Weg");
        break;
    }
    case 62822:
    {
        returnValue = F("Breitenfeldermoor");
        break;
    }
    case 62823:
    {
        returnValue = F("Breitenfeldstr.");
        break;
    }
    case 62824:
    {
        returnValue = F("Breitenfeldweg");
        break;
    }
    case 62825:
    {
        returnValue = F("Breitenfurt B");
        break;
    }
    case 62826:
    {
        returnValue = F("Breitenfürst");
        break;
    }
    case 62827:
    {
        returnValue = F("Breitengasse");
        break;
    }
    case 62828:
    {
        returnValue = F("Breitengehrnweg");
        break;
    }
    case 62829:
    {
        returnValue = F("Breitengwand");
        break;
    }
    case 62830:
    {
        returnValue = F("Breitengüßbacher Str.");
        break;
    }
    case 62831:
    {
        returnValue = F("Breitenhag");
        break;
    }
    case 62832:
    {
        returnValue = F("Breitenhagener Str.");
        break;
    }
    case 62833:
    {
        returnValue = F("Breitenhagener Weg");
        break;
    }
    case 62834:
    {
        returnValue = F("Breitenhain");
        break;
    }
    case 62835:
    {
        returnValue = F("Breitenhainer Str.");
        break;
    }
    case 62836:
    {
        returnValue = F("Breitenhainer Weg");
        break;
    }
    case 62837:
    {
        returnValue = F("Breitenhast");
        break;
    }
    case 62838:
    {
        returnValue = F("Breitenhees");
        break;
    }
    case 62839:
    {
        returnValue = F("Breitenheeser Str.");
        break;
    }
    case 62840:
    {
        returnValue = F("Breitenheeser Weg");
        break;
    }
    case 62841:
    {
        returnValue = F("Breitenhofstr.");
        break;
    }
    case 62842:
    {
        returnValue = F("Breitenholz");
        break;
    }
    case 62843:
    {
        returnValue = F("Breitenhölzer Str.");
        break;
    }
    case 62844:
    {
        returnValue = F("Breitenkamp");
        break;
    }
    case 62845:
    {
        returnValue = F("Breitenkampstr.");
        break;
    }
    case 62846:
    {
        returnValue = F("Breitenlahsweg");
        break;
    }
    case 62847:
    {
        returnValue = F("Breitenlauchstr.");
        break;
    }
    case 62848:
    {
        returnValue = F("Breitenloh");
        break;
    }
    case 62849:
    {
        returnValue = F("Breitenlohe");
        break;
    }
    case 62850:
    {
        returnValue = F("Breitenloher Str.");
        break;
    }
    case 62851:
    {
        returnValue = F("Breitenloher Weg");
        break;
    }
    case 62852:
    {
        returnValue = F("Breitenlohestr.");
        break;
    }
    case 62853:
    {
        returnValue = F("Breitenlohweg");
        break;
    }
    case 62854:
    {
        returnValue = F("Breitenmoosweg");
        break;
    }
    case 62855:
    {
        returnValue = F("Breitenmorgen");
        break;
    }
    case 62856:
    {
        returnValue = F("Breitenrainweg");
        break;
    }
    case 62857:
    {
        returnValue = F("Breitenrathstr.");
        break;
    }
    case 62858:
    {
        returnValue = F("Breitenreisstr.");
        break;
    }
    case 62859:
    {
        returnValue = F("Breitenried");
        break;
    }
    case 62860:
    {
        returnValue = F("Breitenriede");
        break;
    }
    case 62861:
    {
        returnValue = F("Breitenrieder Str.");
        break;
    }
    case 62862:
    {
        returnValue = F("Breitenriedstr.");
        break;
    }
    case 62863:
    {
        returnValue = F("Breitenroder Str.");
        break;
    }
    case 62864:
    {
        returnValue = F("Breitenseer Weg");
        break;
    }
    case 62865:
    {
        returnValue = F("Breitenseeschneise");
        break;
    }
    case 62866:
    {
        returnValue = F("Breitenseeweg");
        break;
    }
    case 62867:
    {
        returnValue = F("Breitensiek");
        break;
    }
    case 62868:
    {
        returnValue = F("Breitensohlweg");
        break;
    }
    case 62869:
    {
        returnValue = F("Breitensteigäcker");
        break;
    }
    case 62870:
    {
        returnValue = F("Breitenstein");
        break;
    }
    case 62871:
    {
        returnValue = F("Breitenstein A");
        break;
    }
    case 62872:
    {
        returnValue = F("Breitenstein B");
        break;
    }
    case 62873:
    {
        returnValue = F("Breitenstein C");
        break;
    }
    case 62874:
    {
        returnValue = F("Breitenstein D");
        break;
    }
    case 62875:
    {
        returnValue = F("Breitenstein E");
        break;
    }
    case 62876:
    {
        returnValue = F("Breitensteiner Allee");
        break;
    }
    case 62877:
    {
        returnValue = F("Breitensteiner Chaussee");
        break;
    }
    case 62878:
    {
        returnValue = F("Breitensteiner Hauptstr.");
        break;
    }
    case 62879:
    {
        returnValue = F("Breitensteiner Mühlgasse");
        break;
    }
    case 62880:
    {
        returnValue = F("Breitensteiner Oberdorf");
        break;
    }
    case 62881:
    {
        returnValue = F("Breitensteiner Pfad");
        break;
    }
    case 62882:
    {
        returnValue = F("Breitensteiner Schulgasse");
        break;
    }
    case 62883:
    {
        returnValue = F("Breitensteiner Str.");
        break;
    }
    case 62884:
    {
        returnValue = F("Breitensteiner Unterdorf");
        break;
    }
    case 62885:
    {
        returnValue = F("Breitensteiner Weg");
        break;
    }
    case 62886:
    {
        returnValue = F("Breitensteinstr.");
        break;
    }
    case 62887:
    {
        returnValue = F("Breitensteinweg");
        break;
    }
    case 62888:
    {
        returnValue = F("Breitenstr.");
        break;
    }
    case 62889:
    {
        returnValue = F("Breitenstück");
        break;
    }
    case 62890:
    {
        returnValue = F("Breitentalstr.");
        break;
    }
    case 62891:
    {
        returnValue = F("Breitenteich");
        break;
    }
    case 62892:
    {
        returnValue = F("Breitenteicher Mühle");
        break;
    }
    case 62893:
    {
        returnValue = F("Breitenteichstr.");
        break;
    }
    case 62894:
    {
        returnValue = F("Breitenthal");
        break;
    }
    case 62895:
    {
        returnValue = F("Breitenthaler Weg");
        break;
    }
    case 62896:
    {
        returnValue = F("Breitenwaldweg");
        break;
    }
    case 62897:
    {
        returnValue = F("Breitenwang");
        break;
    }
    case 62898:
    {
        returnValue = F("Breitenwasen");
        break;
    }
    case 62899:
    {
        returnValue = F("Breitenweg");
        break;
    }
    case 62900:
    {
        returnValue = F("Breitenwegsallee");
        break;
    }
    case 62901:
    {
        returnValue = F("Breitenweinzier");
        break;
    }
    case 62902:
    {
        returnValue = F("Breitenwiese");
        break;
    }
    case 62903:
    {
        returnValue = F("Breitenwiesen");
        break;
    }
    case 62904:
    {
        returnValue = F("Breitenwiesenstr.");
        break;
    }
    case 62905:
    {
        returnValue = F("Breitenwieser Weg");
        break;
    }
    case 62906:
    {
        returnValue = F("Breitenwiesestr.");
        break;
    }
    case 62907:
    {
        returnValue = F("Breitenwiesweg");
        break;
    }
    case 62908:
    {
        returnValue = F("Breitenwisch");
        break;
    }
    case 62909:
    {
        returnValue = F("Breitenworbiser Str.");
        break;
    }
    case 62910:
    {
        returnValue = F("Breitenzellerstr.");
        break;
    }
    case 62911:
    {
        returnValue = F("Breitenäcker");
        break;
    }
    case 62912:
    {
        returnValue = F("Breitenäckerweg");
        break;
    }
    case 62913:
    {
        returnValue = F("Breiter Anger");
        break;
    }
    case 62914:
    {
        returnValue = F("Breiter Baum");
        break;
    }
    case 62915:
    {
        returnValue = F("Breiter Beckerweg");
        break;
    }
    case 62916:
    {
        returnValue = F("Breiter Berg");
        break;
    }
    case 62917:
    {
        returnValue = F("Breiter Bruch");
        break;
    }
    case 62918:
    {
        returnValue = F("Breiter Bruchweg");
        break;
    }
    case 62919:
    {
        returnValue = F("Breiter Busch");
        break;
    }
    case 62920:
    {
        returnValue = F("Breiter Bören");
        break;
    }
    case 62921:
    {
        returnValue = F("Breiter Dorn");
        break;
    }
    case 62922:
    {
        returnValue = F("Breiter Driesch");
        break;
    }
    case 62923:
    {
        returnValue = F("Breiter Esch");
        break;
    }
    case 62924:
    {
        returnValue = F("Breiter Fahrweg");
        break;
    }
    case 62925:
    {
        returnValue = F("Breiter Fels Weg");
        break;
    }
    case 62926:
    {
        returnValue = F("Breiter Flügel");
        break;
    }
    case 62927:
    {
        returnValue = F("Breiter Flügelweg");
        break;
    }
    case 62928:
    {
        returnValue = F("Breiter Gang");
        break;
    }
    case 62929:
    {
        returnValue = F("Breiter Grund");
        break;
    }
    case 62930:
    {
        returnValue = F("Breiter Haardtweg");
        break;
    }
    case 62931:
    {
        returnValue = F("Breiter Hagen");
        break;
    }
    case 62932:
    {
        returnValue = F("Breiter Hof");
        break;
    }
    case 62933:
    {
        returnValue = F("Breiter Kamp");
        break;
    }
    case 62934:
    {
        returnValue = F("Breiter Lindenweg");
        break;
    }
    case 62935:
    {
        returnValue = F("Breiter Mittelweg");
        break;
    }
    case 62936:
    {
        returnValue = F("Breiter Ort");
        break;
    }
    case 62937:
    {
        returnValue = F("Breiter Pfad");
        break;
    }
    case 62938:
    {
        returnValue = F("Breiter Platz");
        break;
    }
    case 62939:
    {
        returnValue = F("Breiter Rain");
        break;
    }
    case 62940:
    {
        returnValue = F("Breiter Rainweg");
        break;
    }
    case 62941:
    {
        returnValue = F("Breiter Rand");
        break;
    }
    case 62942:
    {
        returnValue = F("Breiter Rasen");
        break;
    }
    case 62943:
    {
        returnValue = F("Breiter Rasenweg");
        break;
    }
    case 62944:
    {
        returnValue = F("Breiter Saal");
        break;
    }
    case 62945:
    {
        returnValue = F("Breiter Sand");
        break;
    }
    case 62946:
    {
        returnValue = F("Breiter Stein");
        break;
    }
    case 62947:
    {
        returnValue = F("Breiter Steinweg");
        break;
    }
    case 62948:
    {
        returnValue = F("Breiter Stellweg");
        break;
    }
    case 62949:
    {
        returnValue = F("Breiter Str.");
        break;
    }
    case 62950:
    {
        returnValue = F("Breiter Weg");
        break;
    }
    case 62951:
    {
        returnValue = F("Breiter Winkel");
        break;
    }
    case 62952:
    {
        returnValue = F("Breiter weg");
        break;
    }
    case 62953:
    {
        returnValue = F("Breiter-Grund-Weg");
        break;
    }
    case 62954:
    {
        returnValue = F("Breiterberg");
        break;
    }
    case 62955:
    {
        returnValue = F("Breitermühle");
        break;
    }
    case 62956:
    {
        returnValue = F("Breiterrasenweg");
        break;
    }
    case 62957:
    {
        returnValue = F("Breiters Kreuz");
        break;
    }
    case 62958:
    {
        returnValue = F("Breiterscheid");
        break;
    }
    case 62959:
    {
        returnValue = F("Breiterweg");
        break;
    }
    case 62960:
    {
        returnValue = F("Breites Feld");
        break;
    }
    case 62961:
    {
        returnValue = F("Breites Gestell");
        break;
    }
    case 62962:
    {
        returnValue = F("Breites Gäßchen");
        break;
    }
    case 62963:
    {
        returnValue = F("Breites Land");
        break;
    }
    case 62964:
    {
        returnValue = F("Breites Stück");
        break;
    }
    case 62965:
    {
        returnValue = F("Breites Tor");
        break;
    }
    case 62966:
    {
        returnValue = F("Breites Wasser");
        break;
    }
    case 62967:
    {
        returnValue = F("Breitestein");
        break;
    }
    case 62968:
    {
        returnValue = F("Breitesteinstr.");
        break;
    }
    case 62969:
    {
        returnValue = F("Breitestr.");
        break;
    }
    case 62970:
    {
        returnValue = F("Breitesweg");
        break;
    }
    case 62971:
    {
        returnValue = F("Breiteweg");
        break;
    }
    case 62972:
    {
        returnValue = F("Breitewegsgärten");
        break;
    }
    case 62973:
    {
        returnValue = F("Breitewies");
        break;
    }
    case 62974:
    {
        returnValue = F("Breitewiesen");
        break;
    }
    case 62975:
    {
        returnValue = F("Breitewiesenweg");
        break;
    }
    case 62976:
    {
        returnValue = F("Breitewiesweg");
        break;
    }
    case 62977:
    {
        returnValue = F("Breitfeld");
        break;
    }
    case 62978:
    {
        returnValue = F("Breitfelder Weg");
        break;
    }
    case 62979:
    {
        returnValue = F("Breitfeldstr.");
        break;
    }
    case 62980:
    {
        returnValue = F("Breitfeldweg");
        break;
    }
    case 62981:
    {
        returnValue = F("Breitfilz");
        break;
    }
    case 62982:
    {
        returnValue = F("Breitfurter Str.");
        break;
    }
    case 62983:
    {
        returnValue = F("Breitfurter Weg");
        break;
    }
    case 62984:
    {
        returnValue = F("Breitgartenweg");
        break;
    }
    case 62985:
    {
        returnValue = F("Breitgasse");
        break;
    }
    case 62986:
    {
        returnValue = F("Breitgen");
        break;
    }
    case 62987:
    {
        returnValue = F("Breitgeräumweg");
        break;
    }
    case 62988:
    {
        returnValue = F("Breitgewann");
        break;
    }
    case 62989:
    {
        returnValue = F("Breithaidweg");
        break;
    }
    case 62990:
    {
        returnValue = F("Breithardter Weg");
        break;
    }
    case 62991:
    {
        returnValue = F("Breithaupt-Str.");
        break;
    }
    case 62992:
    {
        returnValue = F("Breithauptstr.");
        break;
    }
    case 62993:
    {
        returnValue = F("Breitheck");
        break;
    }
    case 62994:
    {
        returnValue = F("Breithecker Weg");
        break;
    }
    case 62995:
    {
        returnValue = F("Breitheckerweg");
        break;
    }
    case 62996:
    {
        returnValue = F("Breithofweg");
        break;
    }
    case 62997:
    {
        returnValue = F("Breitholzer-Hof-Weg");
        break;
    }
    case 62998:
    {
        returnValue = F("Breitholzstr.");
        break;
    }
    case 62999:
    {
        returnValue = F("Breitholzweg");
        break;
    }
    case 63000:
    {
        returnValue = F("Breithurster Str.");
        break;
    }
    case 63001:
    {
        returnValue = F("Breithölzerstr.");
        break;
    }
    case 63002:
    {
        returnValue = F("Breitigenweg");
        break;
    }
    case 63003:
    {
        returnValue = F("Breitinger Str.");
        break;
    }
    case 63004:
    {
        returnValue = F("Breitinger-Weg");
        break;
    }
    case 63005:
    {
        returnValue = F("Breitingerstr.");
        break;
    }
    case 63006:
    {
        returnValue = F("Breitingerweg");
        break;
    }
    case 63007:
    {
        returnValue = F("Breitishardweg");
        break;
    }
    case 63008:
    {
        returnValue = F("Breitiweg");
        break;
    }
    case 63009:
    {
        returnValue = F("Breitlaustr.");
        break;
    }
    case 63010:
    {
        returnValue = F("Breitlauweg");
        break;
    }
    case 63011:
    {
        returnValue = F("Breitlehenstr.");
        break;
    }
    case 63012:
    {
        returnValue = F("Breitlenring");
        break;
    }
    case 63013:
    {
        returnValue = F("Breitlenstr.");
        break;
    }
    case 63014:
    {
        returnValue = F("Breitlerstr.");
        break;
    }
    case 63015:
    {
        returnValue = F("Breitlestr.");
        break;
    }
    case 63016:
    {
        returnValue = F("Breitleweg");
        break;
    }
    case 63017:
    {
        returnValue = F("Breitling");
        break;
    }
    case 63018:
    {
        returnValue = F("Breitloh");
        break;
    }
    case 63019:
    {
        returnValue = F("Breitlohweg");
        break;
    }
    case 63020:
    {
        returnValue = F("Breitmahdweg");
        break;
    }
    case 63021:
    {
        returnValue = F("Breitmatt");
        break;
    }
    case 63022:
    {
        returnValue = F("Breitmatte");
        break;
    }
    case 63023:
    {
        returnValue = F("Breitmatten");
        break;
    }
    case 63024:
    {
        returnValue = F("Breitmattenweg");
        break;
    }
    case 63025:
    {
        returnValue = F("Breitmattplatz");
        break;
    }
    case 63026:
    {
        returnValue = F("Breitmattstr.");
        break;
    }
    case 63027:
    {
        returnValue = F("Breitmattweg");
        break;
    }
    case 63028:
    {
        returnValue = F("Breitmeyers Weg");
        break;
    }
    case 63029:
    {
        returnValue = F("Breitmoos");
        break;
    }
    case 63030:
    {
        returnValue = F("Breitmossweg");
        break;
    }
    case 63031:
    {
        returnValue = F("Breitmühle");
        break;
    }
    case 63032:
    {
        returnValue = F("Breitmühlweg");
        break;
    }
    case 63033:
    {
        returnValue = F("Breitnaustr.");
        break;
    }
    case 63034:
    {
        returnValue = F("Breitnauweg");
        break;
    }
    case 63035:
    {
        returnValue = F("Breitnestr.");
        break;
    }
    case 63036:
    {
        returnValue = F("Breitneweg");
        break;
    }
    case 63037:
    {
        returnValue = F("Breitreisigstr.");
        break;
    }
    case 63038:
    {
        returnValue = F("Breitschaftweg");
        break;
    }
    case 63039:
    {
        returnValue = F("Breitscheidallee");
        break;
    }
    case 63040:
    {
        returnValue = F("Breitscheider Str.");
        break;
    }
    case 63041:
    {
        returnValue = F("Breitscheidplatz");
        break;
    }
    case 63042:
    {
        returnValue = F("Breitscheidstr.");
        break;
    }
    case 63043:
    {
        returnValue = F("Breitschstr.");
        break;
    }
    case 63044:
    {
        returnValue = F("Breitschwertweg");
        break;
    }
    case 63045:
    {
        returnValue = F("Breitseeschneise");
        break;
    }
    case 63046:
    {
        returnValue = F("Breitseestr.");
        break;
    }
    case 63047:
    {
        returnValue = F("Breitseeweg");
        break;
    }
    case 63048:
    {
        returnValue = F("Breitsesterhof");
        break;
    }
    case 63049:
    {
        returnValue = F("Breitsitterstr.");
        break;
    }
    case 63050:
    {
        returnValue = F("Breitsprecherstr.");
        break;
    }
    case 63051:
    {
        returnValue = F("Breitsteingasse");
        break;
    }
    case 63052:
    {
        returnValue = F("Breitsteinstr.");
        break;
    }
    case 63053:
    {
        returnValue = F("Breitsteinweg");
        break;
    }
    case 63054:
    {
        returnValue = F("Breitstockweg");
        break;
    }
    case 63055:
    {
        returnValue = F("Breitstr.");
        break;
    }
    case 63056:
    {
        returnValue = F("Breitstücken");
        break;
    }
    case 63057:
    {
        returnValue = F("Breitteilsweg");
        break;
    }
    case 63058:
    {
        returnValue = F("Breittrümmerstr.");
        break;
    }
    case 63059:
    {
        returnValue = F("Breitunger Hauptstr.");
        break;
    }
    case 63060:
    {
        returnValue = F("Breitunger Kietel");
        break;
    }
    case 63061:
    {
        returnValue = F("Breitunger Oberdorf");
        break;
    }
    case 63062:
    {
        returnValue = F("Breitunger RadWanderWeg");
        break;
    }
    case 63063:
    {
        returnValue = F("Breitunger Rennsteig");
        break;
    }
    case 63064:
    {
        returnValue = F("Breitunger Str.");
        break;
    }
    case 63065:
    {
        returnValue = F("Breitunger Tal");
        break;
    }
    case 63066:
    {
        returnValue = F("Breitunger Weg");
        break;
    }
    case 63067:
    {
        returnValue = F("Breitungweg");
        break;
    }
    case 63068:
    {
        returnValue = F("Breitwaldweg");
        break;
    }
    case 63069:
    {
        returnValue = F("Breitwasen");
        break;
    }
    case 63070:
    {
        returnValue = F("Breitwasenring");
        break;
    }
    case 63071:
    {
        returnValue = F("Breitwasserweg");
        break;
    }
    case 63072:
    {
        returnValue = F("Breitweg");
        break;
    }
    case 63073:
    {
        returnValue = F("Breitweidig");
        break;
    }
    case 63074:
    {
        returnValue = F("Breitwies");
        break;
    }
    case 63075:
    {
        returnValue = F("Breitwiese");
        break;
    }
    case 63076:
    {
        returnValue = F("Breitwiesen");
        break;
    }
    case 63077:
    {
        returnValue = F("Breitwiesenring");
        break;
    }
    case 63078:
    {
        returnValue = F("Breitwiesenstr.");
        break;
    }
    case 63079:
    {
        returnValue = F("Breitwiesental");
        break;
    }
    case 63080:
    {
        returnValue = F("Breitwiesenweg");
        break;
    }
    case 63081:
    {
        returnValue = F("Breitwieser Str.");
        break;
    }
    case 63082:
    {
        returnValue = F("Breitwiesergässchen");
        break;
    }
    case 63083:
    {
        returnValue = F("Breitwieserweg");
        break;
    }
    case 63084:
    {
        returnValue = F("Breitwiesstr.");
        break;
    }
    case 63085:
    {
        returnValue = F("Breitwiesweg");
        break;
    }
    case 63086:
    {
        returnValue = F("Breitzbachstr.");
        break;
    }
    case 63087:
    {
        returnValue = F("Breitzterweg");
        break;
    }
    case 63088:
    {
        returnValue = F("Breitäcker");
        break;
    }
    case 63089:
    {
        returnValue = F("Breitäckerstr.");
        break;
    }
    case 63090:
    {
        returnValue = F("Breitäckerweg");
        break;
    }
    case 63091:
    {
        returnValue = F("Breiweg");
        break;
    }
    case 63092:
    {
        returnValue = F("Breizgenstr.");
        break;
    }
    case 63093:
    {
        returnValue = F("Brekendorfer Landstr.");
        break;
    }
    case 63094:
    {
        returnValue = F("Brekendorfer Moor");
        break;
    }
    case 63095:
    {
        returnValue = F("Brekerfeld");
        break;
    }
    case 63096:
    {
        returnValue = F("Brekland");
        break;
    }
    case 63097:
    {
        returnValue = F("Brekling");
        break;
    }
    case 63098:
    {
        returnValue = F("Brekling-Moor");
        break;
    }
    case 63099:
    {
        returnValue = F("Breklingfünfzehn");
        break;
    }
    case 63100:
    {
        returnValue = F("Breklumer Karkenweg");
        break;
    }
    case 63101:
    {
        returnValue = F("Breklumer Koog");
        break;
    }
    case 63102:
    {
        returnValue = F("Brelen");
        break;
    }
    case 63103:
    {
        returnValue = F("Breliendammer Weg");
        break;
    }
    case 63104:
    {
        returnValue = F("Brelinger Str.");
        break;
    }
    case 63105:
    {
        returnValue = F("Brelingweg");
        break;
    }
    case 63106:
    {
        returnValue = F("Brell");
        break;
    }
    case 63107:
    {
        returnValue = F("Brelloh");
        break;
    }
    case 63108:
    {
        returnValue = F("Breloer Weg");
        break;
    }
    case 63109:
    {
        returnValue = F("Breloh");
        break;
    }
    case 63110:
    {
        returnValue = F("Breloher Str.");
        break;
    }
    case 63111:
    {
        returnValue = F("Breloher Weg");
        break;
    }
    case 63112:
    {
        returnValue = F("Brelohstr.");
        break;
    }
    case 63113:
    {
        returnValue = F("Brelohweg");
        break;
    }
    case 63114:
    {
        returnValue = F("Brelöher Weg");
        break;
    }
    case 63115:
    {
        returnValue = F("Brem");
        break;
    }
    case 63116:
    {
        returnValue = F("Brem-sur-Mer-Str.");
        break;
    }
    case 63117:
    {
        returnValue = F("Brema");
        break;
    }
    case 63118:
    {
        returnValue = F("Bremachstr.");
        break;
    }
    case 63119:
    {
        returnValue = F("Bremarkt");
        break;
    }
    case 63120:
    {
        returnValue = F("Bremauerstr.");
        break;
    }
    case 63121:
    {
        returnValue = F("Bremberg Blues");
        break;
    }
    case 63122:
    {
        returnValue = F("Bremcke");
        break;
    }
    case 63123:
    {
        returnValue = F("Bremcker Linde");
        break;
    }
    case 63124:
    {
        returnValue = F("Bremcker Weg");
        break;
    }
    case 63125:
    {
        returnValue = F("Bremecker Weg");
        break;
    }
    case 63126:
    {
        returnValue = F("Bremelauer Steige");
        break;
    }
    case 63127:
    {
        returnValue = F("Bremelauer Str.");
        break;
    }
    case 63128:
    {
        returnValue = F("Bremen");
        break;
    }
    case 63129:
    {
        returnValue = F("Bremenacker");
        break;
    }
    case 63130:
    {
        returnValue = F("Bremenbuschschneise");
        break;
    }
    case 63131:
    {
        returnValue = F("Bremener Str.");
        break;
    }
    case 63132:
    {
        returnValue = F("Bremenfeld");
        break;
    }
    case 63133:
    {
        returnValue = F("Bremenhainer Str.");
        break;
    }
    case 63134:
    {
        returnValue = F("Bremenhof");
        break;
    }
    case 63135:
    {
        returnValue = F("Bremenloch");
        break;
    }
    case 63136:
    {
        returnValue = F("Bremenplatz");
        break;
    }
    case 63137:
    {
        returnValue = F("Bremenstr.");
        break;
    }
    case 63138:
    {
        returnValue = F("Bremental");
        break;
    }
    case 63139:
    {
        returnValue = F("Brementalstr.");
        break;
    }
    case 63140:
    {
        returnValue = F("Brementhaler Str.");
        break;
    }
    case 63141:
    {
        returnValue = F("Brementhalstr.");
        break;
    }
    case 63142:
    {
        returnValue = F("Bremenweg");
        break;
    }
    case 63143:
    {
        returnValue = F("Bremenwerk");
        break;
    }
    case 63144:
    {
        returnValue = F("Bremer Aue");
        break;
    }
    case 63145:
    {
        returnValue = F("Bremer Bahn");
        break;
    }
    case 63146:
    {
        returnValue = F("Bremer Breden");
        break;
    }
    case 63147:
    {
        returnValue = F("Bremer Damm");
        break;
    }
    case 63148:
    {
        returnValue = F("Bremer Eck");
        break;
    }
    case 63149:
    {
        returnValue = F("Bremer Feld");
        break;
    }
    case 63150:
    {
        returnValue = F("Bremer Grund");
        break;
    }
    case 63151:
    {
        returnValue = F("Bremer Halde");
        break;
    }
    case 63152:
    {
        returnValue = F("Bremer Hauptstr.");
        break;
    }
    case 63153:
    {
        returnValue = F("Bremer Heerstr.");
        break;
    }
    case 63154:
    {
        returnValue = F("Bremer Kamp");
        break;
    }
    case 63155:
    {
        returnValue = F("Bremer Landstr.");
        break;
    }
    case 63156:
    {
        returnValue = F("Bremer Mühlgraben");
        break;
    }
    case 63157:
    {
        returnValue = F("Bremer Nebenstr.");
        break;
    }
    case 63158:
    {
        returnValue = F("Bremer Postweg");
        break;
    }
    case 63159:
    {
        returnValue = F("Bremer Reihe");
        break;
    }
    case 63160:
    {
        returnValue = F("Bremer Ring");
        break;
    }
    case 63161:
    {
        returnValue = F("Bremer Schlagd");
        break;
    }
    case 63162:
    {
        returnValue = F("Bremer Stehrt");
        break;
    }
    case 63163:
    {
        returnValue = F("Bremer Steigle");
        break;
    }
    case 63164:
    {
        returnValue = F("Bremer Stieg");
        break;
    }
    case 63165:
    {
        returnValue = F("Bremer Str.");
        break;
    }
    case 63166:
    {
        returnValue = F("Bremer Stück");
        break;
    }
    case 63167:
    {
        returnValue = F("Bremer Tor");
        break;
    }
    case 63168:
    {
        returnValue = F("Bremer Weg");
        break;
    }
    case 63169:
    {
        returnValue = F("Bremer Wiesenweg");
        break;
    }
    case 63170:
    {
        returnValue = F("Bremer-Tor-Str.");
        break;
    }
    case 63171:
    {
        returnValue = F("Bremerberg");
        break;
    }
    case 63172:
    {
        returnValue = F("Bremerfeld");
        break;
    }
    case 63173:
    {
        returnValue = F("Bremerfohr");
        break;
    }
    case 63174:
    {
        returnValue = F("Bremergartenschneise");
        break;
    }
    case 63175:
    {
        returnValue = F("Bremerhagen");
        break;
    }
    case 63176:
    {
        returnValue = F("Bremerhavener Heerstr.");
        break;
    }
    case 63177:
    {
        returnValue = F("Bremerhavener Str.");
        break;
    }
    case 63178:
    {
        returnValue = F("Bremerhof");
        break;
    }
    case 63179:
    {
        returnValue = F("Bremerhorner Str.");
        break;
    }
    case 63180:
    {
        returnValue = F("Bremerichstr.");
        break;
    }
    case 63181:
    {
        returnValue = F("Bremerkampstr.");
        break;
    }
    case 63182:
    {
        returnValue = F("Bremermühle");
        break;
    }
    case 63183:
    {
        returnValue = F("Bremerplatz");
        break;
    }
    case 63184:
    {
        returnValue = F("Bremers Garten");
        break;
    }
    case 63185:
    {
        returnValue = F("Bremers Tannen");
        break;
    }
    case 63186:
    {
        returnValue = F("Bremersbach");
        break;
    }
    case 63187:
    {
        returnValue = F("Bremerschlag");
        break;
    }
    case 63188:
    {
        returnValue = F("Bremersdamm");
        break;
    }
    case 63189:
    {
        returnValue = F("Bremersgasse");
        break;
    }
    case 63190:
    {
        returnValue = F("Bremerstieg");
        break;
    }
    case 63191:
    {
        returnValue = F("Bremerstr.");
        break;
    }
    case 63192:
    {
        returnValue = F("Bremersweg");
        break;
    }
    case 63193:
    {
        returnValue = F("Bremerturmgasse");
        break;
    }
    case 63194:
    {
        returnValue = F("Bremervörder Str.");
        break;
    }
    case 63195:
    {
        returnValue = F("Bremerweg");
        break;
    }
    case 63196:
    {
        returnValue = F("Bremerwiese");
        break;
    }
    case 63197:
    {
        returnValue = F("Bremesgasse");
        break;
    }
    case 63198:
    {
        returnValue = F("Bremestr.");
        break;
    }
    case 63199:
    {
        returnValue = F("Bremgaard");
        break;
    }
    case 63200:
    {
        returnValue = F("Bremgartener Str.");
        break;
    }
    case 63201:
    {
        returnValue = F("Bremge");
        break;
    }
    case 63202:
    {
        returnValue = F("Bremger Weg");
        break;
    }
    case 63203:
    {
        returnValue = F("Bremhag");
        break;
    }
    case 63204:
    {
        returnValue = F("Bremhagweg");
        break;
    }
    case 63205:
    {
        returnValue = F("Bremhof");
        break;
    }
    case 63206:
    {
        returnValue = F("Bremhofer Weg");
        break;
    }
    case 63207:
    {
        returnValue = F("Bremholm");
        break;
    }
    case 63208:
    {
        returnValue = F("Bremich");
        break;
    }
    case 63209:
    {
        returnValue = F("Bremichstr.");
        break;
    }
    case 63210:
    {
        returnValue = F("Bremig");
        break;
    }
    case 63211:
    {
        returnValue = F("Bremigswiese");
        break;
    }
    case 63212:
    {
        returnValue = F("Bremke");
        break;
    }
    case 63213:
    {
        returnValue = F("Bremke-Str.");
        break;
    }
    case 63214:
    {
        returnValue = F("Bremkeplatz");
        break;
    }
    case 63215:
    {
        returnValue = F("Bremker Str.");
        break;
    }
    case 63216:
    {
        returnValue = F("Bremkerbornweg");
        break;
    }
    case 63217:
    {
        returnValue = F("Bremkestr.");
        break;
    }
    case 63218:
    {
        returnValue = F("Bremketal");
        break;
    }
    case 63219:
    {
        returnValue = F("Bremkeweg");
        break;
    }
    case 63220:
    {
        returnValue = F("Bremland");
        break;
    }
    case 63221:
    {
        returnValue = F("Bremmenstr.");
        break;
    }
    case 63222:
    {
        returnValue = F("Bremmental");
        break;
    }
    case 63223:
    {
        returnValue = F("Bremmenweg");
        break;
    }
    case 63224:
    {
        returnValue = F("Bremmerfeld");
        break;
    }
    case 63225:
    {
        returnValue = F("Bremmgarten");
        break;
    }
    case 63226:
    {
        returnValue = F("Brempter Weg");
        break;
    }
    case 63227:
    {
        returnValue = F("Bremptergasse");
        break;
    }
    case 63228:
    {
        returnValue = F("Bremsbahn");
        break;
    }
    case 63229:
    {
        returnValue = F("Bremsberg");
        break;
    }
    case 63230:
    {
        returnValue = F("Bremsdorfer Weg");
        break;
    }
    case 63231:
    {
        returnValue = F("Bremserweg");
        break;
    }
    case 63232:
    {
        returnValue = F("Bremsholm");
        break;
    }
    case 63233:
    {
        returnValue = F("Bremsthal");
        break;
    }
    case 63234:
    {
        returnValue = F("Bremstr.");
        break;
    }
    case 63235:
    {
        returnValue = F("Bremswatt");
        break;
    }
    case 63236:
    {
        returnValue = F("Bremsweg");
        break;
    }
    case 63237:
    {
        returnValue = F("Bremthaler Weg");
        break;
    }
    case 63238:
    {
        returnValue = F("Brenckenhoffstr.");
        break;
    }
    case 63239:
    {
        returnValue = F("Brenckenstr.");
        break;
    }
    case 63240:
    {
        returnValue = F("Brenckgasse");
        break;
    }
    case 63241:
    {
        returnValue = F("Brendel");
        break;
    }
    case 63242:
    {
        returnValue = F("Brendelberg");
        break;
    }
    case 63243:
    {
        returnValue = F("Brendelsmoor");
        break;
    }
    case 63244:
    {
        returnValue = F("Brendelstr.");
        break;
    }
    case 63245:
    {
        returnValue = F("Brendelweg");
        break;
    }
    case 63246:
    {
        returnValue = F("Brendenwaldweg");
        break;
    }
    case 63247:
    {
        returnValue = F("Brendenweg");
        break;
    }
    case 63248:
    {
        returnValue = F("Brender Str.");
        break;
    }
    case 63249:
    {
        returnValue = F("Brendhaldenweg");
        break;
    }
    case 63250:
    {
        returnValue = F("Brendhardtweg");
        break;
    }
    case 63251:
    {
        returnValue = F("Brendhörn");
        break;
    }
    case 63252:
    {
        returnValue = F("Brendlesberg");
        break;
    }
    case 63253:
    {
        returnValue = F("Brendlesäcker");
        break;
    }
    case 63254:
    {
        returnValue = F("Brendnerfohrenweg");
        break;
    }
    case 63255:
    {
        returnValue = F("Brendstr.");
        break;
    }
    case 63256:
    {
        returnValue = F("Brendweg");
        break;
    }
    case 63257:
    {
        returnValue = F("Brengelmannsweg");
        break;
    }
    case 63258:
    {
        returnValue = F("Brengsal");
        break;
    }
    case 63259:
    {
        returnValue = F("Breniger Str.");
        break;
    }
    case 63260:
    {
        returnValue = F("Brenitzer Str.");
        break;
    }
    case 63261:
    {
        returnValue = F("Brenitzer Weg");
        break;
    }
    case 63262:
    {
        returnValue = F("Brenkenackerweg");
        break;
    }
    case 63263:
    {
        returnValue = F("Brenkenhagener Weg");
        break;
    }
    case 63264:
    {
        returnValue = F("Brenkenhof");
        break;
    }
    case 63265:
    {
        returnValue = F("Brenkenhof Ausbau");
        break;
    }
    case 63266:
    {
        returnValue = F("Brenkenweg");
        break;
    }
    case 63267:
    {
        returnValue = F("Brenker Str.");
        break;
    }
    case 63268:
    {
        returnValue = F("Brenker Weg");
        break;
    }
    case 63269:
    {
        returnValue = F("Brenkerfeldstr.");
        break;
    }
    case 63270:
    {
        returnValue = F("Brenkhof");
        break;
    }
    case 63271:
    {
        returnValue = F("Brenkhomesweg");
        break;
    }
    case 63272:
    {
        returnValue = F("Brenkhäuser Str.");
        break;
    }
    case 63273:
    {
        returnValue = F("Brenndobelweg");
        break;
    }
    case 63274:
    {
        returnValue = F("Brenndörfel");
        break;
    }
    case 63275:
    {
        returnValue = F("Brenneck-Gasse");
        break;
    }
    case 63276:
    {
        returnValue = F("Brenneckes Berg");
        break;
    }
    case 63277:
    {
        returnValue = F("Brenneckestr.");
        break;
    }
    case 63278:
    {
        returnValue = F("Brenneckweg");
        break;
    }
    case 63279:
    {
        returnValue = F("Brenneick");
        break;
    }
    case 63280:
    {
        returnValue = F("Brennender Stock");
        break;
    }
    case 63281:
    {
        returnValue = F("Brennenheide");
        break;
    }
    case 63282:
    {
        returnValue = F("Brennenhorst");
        break;
    }
    case 63283:
    {
        returnValue = F("Brennenweg");
        break;
    }
    case 63284:
    {
        returnValue = F("Brenner");
        break;
    }
    case 63285:
    {
        returnValue = F("Brenner Steg");
        break;
    }
    case 63286:
    {
        returnValue = F("Brenner Str.");
        break;
    }
    case 63287:
    {
        returnValue = F("Brenner-Schäffer-Str.");
        break;
    }
    case 63288:
    {
        returnValue = F("Brennerackerweg");
        break;
    }
    case 63289:
    {
        returnValue = F("Brennerau");
        break;
    }
    case 63290:
    {
        returnValue = F("Brennerbergstreuweg");
        break;
    }
    case 63291:
    {
        returnValue = F("Brennerbergweg");
        break;
    }
    case 63292:
    {
        returnValue = F("Brennerdamm");
        break;
    }
    case 63293:
    {
        returnValue = F("Brennerei");
        break;
    }
    case 63294:
    {
        returnValue = F("Brennerei-Pättken");
        break;
    }
    case 63295:
    {
        returnValue = F("Brennereigang");
        break;
    }
    case 63296:
    {
        returnValue = F("Brennereigasse");
        break;
    }
    case 63297:
    {
        returnValue = F("Brennereihof");
        break;
    }
    case 63298:
    {
        returnValue = F("Brennereistr.");
        break;
    }
    case 63299:
    {
        returnValue = F("Brennereiweg");
        break;
    }
    case 63300:
    {
        returnValue = F("Brennergasse");
        break;
    }
    case 63301:
    {
        returnValue = F("Brennerheide");
        break;
    }
    case 63302:
    {
        returnValue = F("Brennerkoppel");
        break;
    }
    case 63303:
    {
        returnValue = F("Brennermißweg");
        break;
    }
    case 63304:
    {
        returnValue = F("Brennermühlstr.");
        break;
    }
    case 63305:
    {
        returnValue = F("Brennerpass");
        break;
    }
    case 63306:
    {
        returnValue = F("Brennerpaß");
        break;
    }
    case 63307:
    {
        returnValue = F("Brennerpoint");
        break;
    }
    case 63308:
    {
        returnValue = F("Brennerring");
        break;
    }
    case 63309:
    {
        returnValue = F("Brennersgraben");
        break;
    }
    case 63310:
    {
        returnValue = F("Brennersgrün");
        break;
    }
    case 63311:
    {
        returnValue = F("Brennersgrüner Str.");
        break;
    }
    case 63312:
    {
        returnValue = F("Brennersgäßle");
        break;
    }
    case 63313:
    {
        returnValue = F("Brennerskamp");
        break;
    }
    case 63314:
    {
        returnValue = F("Brennersloch");
        break;
    }
    case 63315:
    {
        returnValue = F("Brennerstr.");
        break;
    }
    case 63316:
    {
        returnValue = F("Brennerweg");
        break;
    }
    case 63317:
    {
        returnValue = F("Brennes");
        break;
    }
    case 63318:
    {
        returnValue = F("Brennesch");
        break;
    }
    case 63319:
    {
        returnValue = F("Brennesseleck");
        break;
    }
    case 63320:
    {
        returnValue = F("Brennesselweg");
        break;
    }
    case 63321:
    {
        returnValue = F("Brennesstr.");
        break;
    }
    case 63322:
    {
        returnValue = F("Brennesweg");
        break;
    }
    case 63323:
    {
        returnValue = F("Brennet");
        break;
    }
    case 63324:
    {
        returnValue = F("Brennetweg");
        break;
    }
    case 63325:
    {
        returnValue = F("Brennewiensgasse");
        break;
    }
    case 63326:
    {
        returnValue = F("Brenneysenstr.");
        break;
    }
    case 63327:
    {
        returnValue = F("Brennfleckweg");
        break;
    }
    case 63328:
    {
        returnValue = F("Brenngasse");
        break;
    }
    case 63329:
    {
        returnValue = F("Brenngässel");
        break;
    }
    case 63330:
    {
        returnValue = F("Brennhausgasse");
        break;
    }
    case 63331:
    {
        returnValue = F("Brennhausstr.");
        break;
    }
    case 63332:
    {
        returnValue = F("Brennheide");
        break;
    }
    case 63333:
    {
        returnValue = F("Brennheider Weg");
        break;
    }
    case 63334:
    {
        returnValue = F("Brennhof");
        break;
    }
    case 63335:
    {
        returnValue = F("Brennhofstr.");
        break;
    }
    case 63336:
    {
        returnValue = F("Brennholz");
        break;
    }
    case 63337:
    {
        returnValue = F("Brennholzer Weg");
        break;
    }
    case 63338:
    {
        returnValue = F("Brennhorsten");
        break;
    }
    case 63339:
    {
        returnValue = F("Brennhorster Str.");
        break;
    }
    case 63340:
    {
        returnValue = F("Brennhäldenweg");
        break;
    }
    case 63341:
    {
        returnValue = F("Brennhäuser Str.");
        break;
    }
    case 63342:
    {
        returnValue = F("Brennhöhe");
        break;
    }
    case 63343:
    {
        returnValue = F("Brennhüttenstr.");
        break;
    }
    case 63344:
    {
        returnValue = F("Brenninkmeyerstr.");
        break;
    }
    case 63345:
    {
        returnValue = F("Brennmatt");
        break;
    }
    case 63346:
    {
        returnValue = F("Brennmeisterhof");
        break;
    }
    case 63347:
    {
        returnValue = F("Brennmeisterweg");
        break;
    }
    case 63348:
    {
        returnValue = F("Brennnesselweg");
        break;
    }
    case 63349:
    {
        returnValue = F("Brennofen");
        break;
    }
    case 63350:
    {
        returnValue = F("Brennofenpfad");
        break;
    }
    case 63351:
    {
        returnValue = F("Brennofenstr.");
        break;
    }
    case 63352:
    {
        returnValue = F("Brennofenweg");
        break;
    }
    case 63353:
    {
        returnValue = F("Brennplatzweg");
        break;
    }
    case 63354:
    {
        returnValue = F("Brennsegen");
        break;
    }
    case 63355:
    {
        returnValue = F("Brennstege");
        break;
    }
    case 63356:
    {
        returnValue = F("Brenntenbergstr.");
        break;
    }
    case 63357:
    {
        returnValue = F("Brenntenbuckweg");
        break;
    }
    case 63358:
    {
        returnValue = F("Brennteneichenweg");
        break;
    }
    case 63359:
    {
        returnValue = F("Brenntengasse");
        break;
    }
    case 63360:
    {
        returnValue = F("Brenntenhauweg");
        break;
    }
    case 63361:
    {
        returnValue = F("Brenntenholzrundweg");
        break;
    }
    case 63362:
    {
        returnValue = F("Brenntenholzweg");
        break;
    }
    case 63363:
    {
        returnValue = F("Brenntenstr.");
        break;
    }
    case 63364:
    {
        returnValue = F("Brenntenwald");
        break;
    }
    case 63365:
    {
        returnValue = F("Brenntenwaldweg");
        break;
    }
    case 63366:
    {
        returnValue = F("Brenntenweg");
        break;
    }
    case 63367:
    {
        returnValue = F("Brennterwinkel");
        break;
    }
    case 63368:
    {
        returnValue = F("Brenntewaldweg");
        break;
    }
    case 63369:
    {
        returnValue = F("Brennthal");
        break;
    }
    case 63370:
    {
        returnValue = F("Brennthaldenweg");
        break;
    }
    case 63371:
    {
        returnValue = F("Brenntkopfweg");
        break;
    }
    case 63372:
    {
        returnValue = F("Brennwaldweg");
        break;
    }
    case 63373:
    {
        returnValue = F("Brennwiesenweg");
        break;
    }
    case 63374:
    {
        returnValue = F("Brennäckerstr.");
        break;
    }
    case 63375:
    {
        returnValue = F("Brensbacher Str.");
        break;
    }
    case 63376:
    {
        returnValue = F("Brensbachweg");
        break;
    }
    case 63377:
    {
        returnValue = F("Brenschede");
        break;
    }
    case 63378:
    {
        returnValue = F("Brenscheid");
        break;
    }
    case 63379:
    {
        returnValue = F("Brenscheider Mühle");
        break;
    }
    case 63380:
    {
        returnValue = F("Brenscheider Str.");
        break;
    }
    case 63381:
    {
        returnValue = F("Brenscheider Weg");
        break;
    }
    case 63382:
    {
        returnValue = F("Brenschelbacher Str.");
        break;
    }
    case 63383:
    {
        returnValue = F("Brensdorf");
        break;
    }
    case 63384:
    {
        returnValue = F("Brensdorfer Weg");
        break;
    }
    case 63385:
    {
        returnValue = F("Brentanohof");
        break;
    }
    case 63386:
    {
        returnValue = F("Brentanostr.");
        break;
    }
    case 63387:
    {
        returnValue = F("Brentanoweg");
        break;
    }
    case 63388:
    {
        returnValue = F("Brentenbergweg");
        break;
    }
    case 63389:
    {
        returnValue = F("Brentenhauweg");
        break;
    }
    case 63390:
    {
        returnValue = F("Brentenhäulesweg");
        break;
    }
    case 63391:
    {
        returnValue = F("Brentenstockweg");
        break;
    }
    case 63392:
    {
        returnValue = F("Brentenstr.");
        break;
    }
    case 63393:
    {
        returnValue = F("Brentkopfweg");
        break;
    }
    case 63394:
    {
        returnValue = F("Brentrups Garten");
        break;
    }
    case 63395:
    {
        returnValue = F("Brentwoodstr.");
        break;
    }
    case 63396:
    {
        returnValue = F("Brenzackerweg");
        break;
    }
    case 63397:
    {
        returnValue = F("Brenzaue");
        break;
    }
    case 63398:
    {
        returnValue = F("Brenzelfeld");
        break;
    }
    case 63399:
    {
        returnValue = F("Brenzelpatt");
        break;
    }
    case 63400:
    {
        returnValue = F("Brenzenwang");
        break;
    }
    case 63401:
    {
        returnValue = F("Brenzer Str.");
        break;
    }
    case 63402:
    {
        returnValue = F("Brenzerstr.");
        break;
    }
    case 63403:
    {
        returnValue = F("Brenzgasse");
        break;
    }
    case 63404:
    {
        returnValue = F("Brenzingen");
        break;
    }
    case 63405:
    {
        returnValue = F("Brenzkofer Str.");
        break;
    }
    case 63406:
    {
        returnValue = F("Brenzlestr.");
        break;
    }
    case 63407:
    {
        returnValue = F("Brenzpark");
        break;
    }
    case 63408:
    {
        returnValue = F("Brenzpark Süd");
        break;
    }
    case 63409:
    {
        returnValue = F("Brenzplatz");
        break;
    }
    case 63410:
    {
        returnValue = F("Brenzstr.");
        break;
    }
    case 63411:
    {
        returnValue = F("Brenztalweg");
        break;
    }
    case 63412:
    {
        returnValue = F("Brenzweg");
        break;
    }
    case 63413:
    {
        returnValue = F("Breschnecker Str.");
        break;
    }
    case 63414:
    {
        returnValue = F("Breschnegg");
        break;
    }
    case 63415:
    {
        returnValue = F("Breschnekweg");
        break;
    }
    case 63416:
    {
        returnValue = F("Bresebrink");
        break;
    }
    case 63417:
    {
        returnValue = F("Bresegarder Str.");
        break;
    }
    case 63418:
    {
        returnValue = F("Bresegarder Weg");
        break;
    }
    case 63419:
    {
        returnValue = F("Bresewitzer Str.");
        break;
    }
    case 63420:
    {
        returnValue = F("Bresinaweg");
        break;
    }
    case 63421:
    {
        returnValue = F("Bresinchener Str.");
        break;
    }
    case 63422:
    {
        returnValue = F("Breslacker Str.");
        break;
    }
    case 63423:
    {
        returnValue = F("Breslacker Weg");
        break;
    }
    case 63424:
    {
        returnValue = F("Breslauer Platz");
        break;
    }
    case 63425:
    {
        returnValue = F("Breslauer Ring");
        break;
    }
    case 63426:
    {
        returnValue = F("Breslauer Str.");
        break;
    }
    case 63427:
    {
        returnValue = F("Breslauer Str., Königsberger Str.");
        break;
    }
    case 63428:
    {
        returnValue = F("Breslauer Weg");
        break;
    }
    case 63429:
    {
        returnValue = F("Breslauerstr.");
        break;
    }
    case 63430:
    {
        returnValue = F("Breslaustr.");
        break;
    }
    case 63431:
    {
        returnValue = F("Breslauweg");
        break;
    }
    case 63432:
    {
        returnValue = F("Bresserbergstr.");
        break;
    }
    case 63433:
    {
        returnValue = F("Bresserstr.");
        break;
    }
    case 63434:
    {
        returnValue = F("Bressuire-Ring");
        break;
    }
    case 63435:
    {
        returnValue = F("Brestenberg");
        break;
    }
    case 63436:
    {
        returnValue = F("Brestenbergstr.");
        break;
    }
    case 63437:
    {
        returnValue = F("Brestenbergweg");
        break;
    }
    case 63438:
    {
        returnValue = F("Bresteneck");
        break;
    }
    case 63439:
    {
        returnValue = F("Brester Str.");
        break;
    }
    case 63440:
    {
        returnValue = F("Brestlich");
        break;
    }
    case 63441:
    {
        returnValue = F("Bretagne-Str.");
        break;
    }
    case 63442:
    {
        returnValue = F("Bretagneplatz");
        break;
    }
    case 63443:
    {
        returnValue = F("Bretagnering");
        break;
    }
    case 63444:
    {
        returnValue = F("Bretagnestr.");
        break;
    }
    case 63445:
    {
        returnValue = F("Bretanoweg");
        break;
    }
    case 63446:
    {
        returnValue = F("Bretel");
        break;
    }
    case 63447:
    {
        returnValue = F("Bretelerstr.");
        break;
    }
    case 63448:
    {
        returnValue = F("Breternitzer Weg");
        break;
    }
    case 63449:
    {
        returnValue = F("Breteuilplatz");
        break;
    }
    case 63450:
    {
        returnValue = F("Bretgasse");
        break;
    }
    case 63451:
    {
        returnValue = F("Brethausstr.");
        break;
    }
    case 63452:
    {
        returnValue = F("Brethausweg");
        break;
    }
    case 63453:
    {
        returnValue = F("Bretlebener Hauptstr.");
        break;
    }
    case 63454:
    {
        returnValue = F("Bretlebener Str.");
        break;
    }
    case 63455:
    {
        returnValue = F("Bretlebener Weg");
        break;
    }
    case 63456:
    {
        returnValue = F("Bretmühlenweg");
        break;
    }
    case 63457:
    {
        returnValue = F("Bretniger Str.");
        break;
    }
    case 63458:
    {
        returnValue = F("Bretonenbrücke");
        break;
    }
    case 63459:
    {
        returnValue = F("Bretonenstr.");
        break;
    }
    case 63460:
    {
        returnValue = F("Bretschergäßle");
        break;
    }
    case 63461:
    {
        returnValue = F("Bretschneiderstr.");
        break;
    }
    case 63462:
    {
        returnValue = F("Brett (wurde entfernt)");
        break;
    }
    case 63463:
    {
        returnValue = F("Brettacher Fußweg");
        break;
    }
    case 63464:
    {
        returnValue = F("Brettacher Str.");
        break;
    }
    case 63465:
    {
        returnValue = F("Brettacherweg");
        break;
    }
    case 63466:
    {
        returnValue = F("Brettachhöhe");
        break;
    }
    case 63467:
    {
        returnValue = F("Brettachsteige");
        break;
    }
    case 63468:
    {
        returnValue = F("Brettachstr.");
        break;
    }
    case 63469:
    {
        returnValue = F("Brettachweg");
        break;
    }
    case 63470:
    {
        returnValue = F("Brettberger Aue");
        break;
    }
    case 63471:
    {
        returnValue = F("Brettberger Weg");
        break;
    }
    case 63472:
    {
        returnValue = F("Brettbuschgasse");
        break;
    }
    case 63473:
    {
        returnValue = F("Brettelhäuserweg");
        break;
    }
    case 63474:
    {
        returnValue = F("Brettellenweg");
        break;
    }
    case 63475:
    {
        returnValue = F("Brettenbachbrücke");
        break;
    }
    case 63476:
    {
        returnValue = F("Brettenbachstr.");
        break;
    }
    case 63477:
    {
        returnValue = F("Brettenbachweg");
        break;
    }
    case 63478:
    {
        returnValue = F("Brettenburger Str.");
        break;
    }
    case 63479:
    {
        returnValue = F("Brettener Str.");
        break;
    }
    case 63480:
    {
        returnValue = F("Brettener Weg");
        break;
    }
    case 63481:
    {
        returnValue = F("Brettenfelder Str.");
        break;
    }
    case 63482:
    {
        returnValue = F("Brettental");
        break;
    }
    case 63483:
    {
        returnValue = F("Brettenweiherweg");
        break;
    }
    case 63484:
    {
        returnValue = F("Brettergasse");
        break;
    }
    case 63485:
    {
        returnValue = F("Brettergässle");
        break;
    }
    case 63486:
    {
        returnValue = F("Brettermarkt");
        break;
    }
    case 63487:
    {
        returnValue = F("Bretterscher Graben");
        break;
    }
    case 63488:
    {
        returnValue = F("Bretterweg");
        break;
    }
    case 63489:
    {
        returnValue = F("Brettevillestr.");
        break;
    }
    case 63490:
    {
        returnValue = F("Brettheimer Str.");
        break;
    }
    case 63491:
    {
        returnValue = F("Bretthorststr.");
        break;
    }
    case 63492:
    {
        returnValue = F("Brettiner Chaussee");
        break;
    }
    case 63493:
    {
        returnValue = F("Brettmühle");
        break;
    }
    case 63494:
    {
        returnValue = F("Brettmühlenwasser");
        break;
    }
    case 63495:
    {
        returnValue = F("Brettmühlenweg");
        break;
    }
    case 63496:
    {
        returnValue = F("Brettmühlstr.");
        break;
    }
    case 63497:
    {
        returnValue = F("Brettorfer Kirchweg");
        break;
    }
    case 63498:
    {
        returnValue = F("Brettorfer Str.");
        break;
    }
    case 63499:
    {
        returnValue = F("Brettreichstr.");
        break;
    }
    case 63500:
    {
        returnValue = F("Brettschneiderstr.");
        break;
    }
    case 63501:
    {
        returnValue = F("Brettstr.");
        break;
    }
    case 63502:
    {
        returnValue = F("Brettwaldweg");
        break;
    }
    case 63503:
    {
        returnValue = F("Brettweg");
        break;
    }
    case 63504:
    {
        returnValue = F("Brettwiesen");
        break;
    }
    case 63505:
    {
        returnValue = F("Bretwischer Ausbau");
        break;
    }
    case 63506:
    {
        returnValue = F("Bretwischer Hauptstr.");
        break;
    }
    case 63507:
    {
        returnValue = F("Bretzelbäckerstr.");
        break;
    }
    case 63508:
    {
        returnValue = F("Bretzelesweg");
        break;
    }
    case 63509:
    {
        returnValue = F("Bretzelnweg");
        break;
    }
    case 63510:
    {
        returnValue = F("Bretzeltersweg");
        break;
    }
    case 63511:
    {
        returnValue = F("Bretzenberg");
        break;
    }
    case 63512:
    {
        returnValue = F("Bretzenheimer Str.");
        break;
    }
    case 63513:
    {
        returnValue = F("Bretzfelder Str.");
        break;
    }
    case 63514:
    {
        returnValue = F("Bretzgenweg");
        break;
    }
    case 63515:
    {
        returnValue = F("Bretziner Ring");
        break;
    }
    case 63516:
    {
        returnValue = F("Bretziner Weg");
        break;
    }
    case 63517:
    {
        returnValue = F("Bretzinger Halde nb");
        break;
    }
    case 63518:
    {
        returnValue = F("Bretzinger Steige");
        break;
    }
    case 63519:
    {
        returnValue = F("Bretzinger Str.");
        break;
    }
    case 63520:
    {
        returnValue = F("Breubergblick");
        break;
    }
    case 63521:
    {
        returnValue = F("Breuberger Str.");
        break;
    }
    case 63522:
    {
        returnValue = F("Breuberger Weg");
        break;
    }
    case 63523:
    {
        returnValue = F("Breubergstr.");
        break;
    }
    case 63524:
    {
        returnValue = F("Breubergweg");
        break;
    }
    case 63525:
    {
        returnValue = F("Breuelstr.");
        break;
    }
    case 63526:
    {
        returnValue = F("Breuelweg");
        break;
    }
    case 63527:
    {
        returnValue = F("Breuer Range");
        break;
    }
    case 63528:
    {
        returnValue = F("Breuerkamp");
        break;
    }
    case 63529:
    {
        returnValue = F("Breuers Kamp");
        break;
    }
    case 63530:
    {
        returnValue = F("Breufeldstr.");
        break;
    }
    case 63531:
    {
        returnValue = F("Breufeldstr. ?");
        break;
    }
    case 63532:
    {
        returnValue = F("Breugelgasse");
        break;
    }
    case 63533:
    {
        returnValue = F("Breughelstr.");
        break;
    }
    case 63534:
    {
        returnValue = F("Breukerstr.");
        break;
    }
    case 63535:
    {
        returnValue = F("Breul");
        break;
    }
    case 63536:
    {
        returnValue = F("Breulgasse");
        break;
    }
    case 63537:
    {
        returnValue = F("Breulingstr.");
        break;
    }
    case 63538:
    {
        returnValue = F("Breulstr.");
        break;
    }
    case 63539:
    {
        returnValue = F("Breulsweg");
        break;
    }
    case 63540:
    {
        returnValue = F("Breulweg");
        break;
    }
    case 63541:
    {
        returnValue = F("Breumayerstr.");
        break;
    }
    case 63542:
    {
        returnValue = F("Breun");
        break;
    }
    case 63543:
    {
        returnValue = F("Breunaer Str.");
        break;
    }
    case 63544:
    {
        returnValue = F("Breunetsried");
        break;
    }
    case 63545:
    {
        returnValue = F("Breunetsrieder Weg");
        break;
    }
    case 63546:
    {
        returnValue = F("Breunfelder Str.");
        break;
    }
    case 63547:
    {
        returnValue = F("Breungenborner Weg");
        break;
    }
    case 63548:
    {
        returnValue = F("Breungeshainer Str.");
        break;
    }
    case 63549:
    {
        returnValue = F("Breunigweiler Str.");
        break;
    }
    case 63550:
    {
        returnValue = F("Breunigweilerstr.");
        break;
    }
    case 63551:
    {
        returnValue = F("Breuningerweg");
        break;
    }
    case 63552:
    {
        returnValue = F("Breuningser Str.");
        break;
    }
    case 63553:
    {
        returnValue = F("Breuningstr.");
        break;
    }
    case 63554:
    {
        returnValue = F("Breuningsweiler Str.");
        break;
    }
    case 63555:
    {
        returnValue = F("Breunsberger Str.");
        break;
    }
    case 63556:
    {
        returnValue = F("Breunsdorfer Str.");
        break;
    }
    case 63557:
    {
        returnValue = F("Breunsdorfer Weg");
        break;
    }
    case 63558:
    {
        returnValue = F("Breusenweg");
        break;
    }
    case 63559:
    {
        returnValue = F("Breuskesbachstr.");
        break;
    }
    case 63560:
    {
        returnValue = F("Brewerspfad");
        break;
    }
    case 63561:
    {
        returnValue = F("Brewitzstr.");
        break;
    }
    case 63562:
    {
        returnValue = F("Brex - Unterer Höhenweg");
        break;
    }
    case 63563:
    {
        returnValue = F("Brexbachstr.");
        break;
    }
    case 63564:
    {
        returnValue = F("Brexstr.");
        break;
    }
    case 63565:
    {
        returnValue = F("Brextal");
        break;
    }
    case 63566:
    {
        returnValue = F("Breyeller Str.");
        break;
    }
    case 63567:
    {
        returnValue = F("Breyersweg");
        break;
    }
    case 63568:
    {
        returnValue = F("Breykamp");
        break;
    }
    case 63569:
    {
        returnValue = F("Brezelgasse");
        break;
    }
    case 63570:
    {
        returnValue = F("Brezelstr.");
        break;
    }
    case 63571:
    {
        returnValue = F("Brezelweg");
        break;
    }
    case 63572:
    {
        returnValue = F("Brezgerweg");
        break;
    }
    case 63573:
    {
        returnValue = F("Brezngasserl");
        break;
    }
    case 63574:
    {
        returnValue = F("Briacher Str.");
        break;
    }
    case 63575:
    {
        returnValue = F("Briachhalde");
        break;
    }
    case 63576:
    {
        returnValue = F("Briachstr.");
        break;
    }
    case 63577:
    {
        returnValue = F("Brianconstr.");
        break;
    }
    case 63578:
    {
        returnValue = F("Briandstr.");
        break;
    }
    case 63579:
    {
        returnValue = F("Brickelweg");
        break;
    }
    case 63580:
    {
        returnValue = F("Brickwedde");
        break;
    }
    case 63581:
    {
        returnValue = F("Brictiusstr.");
        break;
    }
    case 63582:
    {
        returnValue = F("Brictiusweg");
        break;
    }
    case 63583:
    {
        returnValue = F("Bridgenorth Platz");
        break;
    }
    case 63584:
    {
        returnValue = F("Bridgewater Allee");
        break;
    }
    case 63585:
    {
        returnValue = F("Brie-Tafelbühlweg");
        break;
    }
    case 63586:
    {
        returnValue = F("Briebelgasse");
        break;
    }
    case 63587:
    {
        returnValue = F("Briebelpark");
        break;
    }
    case 63588:
    {
        returnValue = F("Briebelstr.");
        break;
    }
    case 63589:
    {
        returnValue = F("Briebelweg");
        break;
    }
    case 63590:
    {
        returnValue = F("Brieberichweg");
        break;
    }
    case 63591:
    {
        returnValue = F("Briechfeld");
        break;
    }
    case 63592:
    {
        returnValue = F("Briedener Weg");
        break;
    }
    case 63593:
    {
        returnValue = F("Briederner Weg");
        break;
    }
    case 63594:
    {
        returnValue = F("Briederweg");
        break;
    }
    case 63595:
    {
        returnValue = F("Briefelbachstr.");
        break;
    }
    case 63596:
    {
        returnValue = F("Briefträgersteig");
        break;
    }
    case 63597:
    {
        returnValue = F("Briefträgerstieg");
        break;
    }
    case 63598:
    {
        returnValue = F("Briefträgerweg");
        break;
    }
    case 63599:
    {
        returnValue = F("Briegelstr.");
        break;
    }
    case 63600:
    {
        returnValue = F("Briegelsweg");
        break;
    }
    case 63601:
    {
        returnValue = F("Briegelweg");
        break;
    }
    case 63602:
    {
        returnValue = F("Brieger Ring");
        break;
    }
    case 63603:
    {
        returnValue = F("Brieger Str.");
        break;
    }
    case 63604:
    {
        returnValue = F("Brieger Weg");
        break;
    }
    case 63605:
    {
        returnValue = F("Brieglebstr.");
        break;
    }
    case 63606:
    {
        returnValue = F("Briehelweg");
        break;
    }
    case 63607:
    {
        returnValue = F("Brieleck");
        break;
    }
    case 63608:
    {
        returnValue = F("Brielerweg");
        break;
    }
    case 63609:
    {
        returnValue = F("Brielgasse");
        break;
    }
    case 63610:
    {
        returnValue = F("Brielmayerstr.");
        break;
    }
    case 63611:
    {
        returnValue = F("Brielower Aue");
        break;
    }
    case 63612:
    {
        returnValue = F("Brielower Grenze");
        break;
    }
    case 63613:
    {
        returnValue = F("Brielower Landstr.");
        break;
    }
    case 63614:
    {
        returnValue = F("Brielower Str.");
        break;
    }
    case 63615:
    {
        returnValue = F("Brielserlenweg");
        break;
    }
    case 63616:
    {
        returnValue = F("Brielstr.");
        break;
    }
    case 63617:
    {
        returnValue = F("Brielsweg");
        break;
    }
    case 63618:
    {
        returnValue = F("Brielweg");
        break;
    }
    case 63619:
    {
        returnValue = F("Briemenberg");
        break;
    }
    case 63620:
    {
        returnValue = F("Briemweg");
        break;
    }
    case 63621:
    {
        returnValue = F("Briener Str.");
        break;
    }
    case 63622:
    {
        returnValue = F("Brienner Str.");
        break;
    }
    case 63623:
    {
        returnValue = F("Brienonbrücke");
        break;
    }
    case 63624:
    {
        returnValue = F("Briesbach");
        break;
    }
    case 63625:
    {
        returnValue = F("Briese");
        break;
    }
    case 63626:
    {
        returnValue = F("Brieseallee");
        break;
    }
    case 63627:
    {
        returnValue = F("Brieselanger Str.");
        break;
    }
    case 63628:
    {
        returnValue = F("Brieselanger Weg");
        break;
    }
    case 63629:
    {
        returnValue = F("Briesen");
        break;
    }
    case 63630:
    {
        returnValue = F("Briesenbergstr.");
        break;
    }
    case 63631:
    {
        returnValue = F("Briesener Landstr.");
        break;
    }
    case 63632:
    {
        returnValue = F("Briesener Str.");
        break;
    }
    case 63633:
    {
        returnValue = F("Briesener Weg");
        break;
    }
    case 63634:
    {
        returnValue = F("Briesenluch");
        break;
    }
    case 63635:
    {
        returnValue = F("Briesentwiete");
        break;
    }
    case 63636:
    {
        returnValue = F("Briesenweg");
        break;
    }
    case 63637:
    {
        returnValue = F("Briesesteig");
        break;
    }
    case 63638:
    {
        returnValue = F("Briesestr.");
        break;
    }
    case 63639:
    {
        returnValue = F("Brieseweg");
        break;
    }
    case 63640:
    {
        returnValue = F("Brieskower Str.");
        break;
    }
    case 63641:
    {
        returnValue = F("Briesmannstr.");
        break;
    }
    case 63642:
    {
        returnValue = F("Briest");
        break;
    }
    case 63643:
    {
        returnValue = F("Briester Havelstr.");
        break;
    }
    case 63644:
    {
        returnValue = F("Briester Str.");
        break;
    }
    case 63645:
    {
        returnValue = F("Briester Weg");
        break;
    }
    case 63646:
    {
        returnValue = F("Brietenhammkohlkopf");
        break;
    }
    case 63647:
    {
        returnValue = F("Brietlinger Weg");
        break;
    }
    case 63648:
    {
        returnValue = F("Brietzer Weg");
        break;
    }
    case 63649:
    {
        returnValue = F("Brietzker Str.");
        break;
    }
    case 63650:
    {
        returnValue = F("Brieversheck");
        break;
    }
    case 63651:
    {
        returnValue = F("Brieystr.");
        break;
    }
    case 63652:
    {
        returnValue = F("Brießelstr.");
        break;
    }
    case 63653:
    {
        returnValue = F("Brigacher Str.");
        break;
    }
    case 63654:
    {
        returnValue = F("Brigachstr.");
        break;
    }
    case 63655:
    {
        returnValue = F("Brigachtalstr.");
        break;
    }
    case 63656:
    {
        returnValue = F("Brigachweg");
        break;
    }
    case 63657:
    {
        returnValue = F("Brigadestr.");
        break;
    }
    case 63658:
    {
        returnValue = F("Brigadiersweg");
        break;
    }
    case 63659:
    {
        returnValue = F("Brigantineweg");
        break;
    }
    case 63660:
    {
        returnValue = F("Brigelstr.");
        break;
    }
    case 63661:
    {
        returnValue = F("Briggower Str.");
        break;
    }
    case 63662:
    {
        returnValue = F("Briggstr.");
        break;
    }
    case 63663:
    {
        returnValue = F("Briggweg");
        break;
    }
    case 63664:
    {
        returnValue = F("Brighouse Park");
        break;
    }
    case 63665:
    {
        returnValue = F("Brigida");
        break;
    }
    case 63666:
    {
        returnValue = F("Brigidastr.");
        break;
    }
    case 63667:
    {
        returnValue = F("Brigidaweg");
        break;
    }
    case 63668:
    {
        returnValue = F("Brigitta");
        break;
    }
    case 63669:
    {
        returnValue = F("Brigitta-von-Zimmern-Str.");
        break;
    }
    case 63670:
    {
        returnValue = F("Brigittastr.");
        break;
    }
    case 63671:
    {
        returnValue = F("Brigittaweg");
        break;
    }
    case 63672:
    {
        returnValue = F("Brigitte-Amthor-Str.");
        break;
    }
    case 63673:
    {
        returnValue = F("Brigitte-Helm-Platz");
        break;
    }
    case 63674:
    {
        returnValue = F("Brigitte-Reimann-Str.");
        break;
    }
    case 63675:
    {
        returnValue = F("Brigittenstr.");
        break;
    }
    case 63676:
    {
        returnValue = F("Brigittenweg");
        break;
    }
    case 63677:
    {
        returnValue = F("Brigittestr.");
        break;
    }
    case 63678:
    {
        returnValue = F("Brignais-Platz");
        break;
    }
    case 63679:
    {
        returnValue = F("Brignoler Str.");
        break;
    }
    case 63680:
    {
        returnValue = F("Brikettweg");
        break;
    }
    case 63681:
    {
        returnValue = F("Brillackweg");
        break;
    }
    case 63682:
    {
        returnValue = F("Brillantsamtstr.");
        break;
    }
    case 63683:
    {
        returnValue = F("Brillantstr.");
        break;
    }
    case 63684:
    {
        returnValue = F("Brillantweg");
        break;
    }
    case 63685:
    {
        returnValue = F("Brilldamm");
        break;
    }
    case 63686:
    {
        returnValue = F("Brillenburgskamp");
        break;
    }
    case 63687:
    {
        returnValue = F("Brillenburgsweg");
        break;
    }
    case 63688:
    {
        returnValue = F("Briller Weg");
        break;
    }
    case 63689:
    {
        returnValue = F("Brilliter Str.");
        break;
    }
    case 63690:
    {
        returnValue = F("Brillkamp");
        break;
    }
    case 63691:
    {
        returnValue = F("Brillsgasse");
        break;
    }
    case 63692:
    {
        returnValue = F("Brillstr.");
        break;
    }
    case 63693:
    {
        returnValue = F("Brillsweg");
        break;
    }
    case 63694:
    {
        returnValue = F("Brillweg");
        break;
    }
    case 63695:
    {
        returnValue = F("Brilon-Wald");
        break;
    }
    case 63696:
    {
        returnValue = F("Briloner Landstr.");
        break;
    }
    case 63697:
    {
        returnValue = F("Briloner Str.");
        break;
    }
    case 63698:
    {
        returnValue = F("Briloner Tor");
        break;
    }
    case 63699:
    {
        returnValue = F("Briloner Weg");
        break;
    }
    case 63700:
    {
        returnValue = F("Brilskamp");
        break;
    }
    case 63701:
    {
        returnValue = F("Brimmersstr.");
        break;
    }
    case 63702:
    {
        returnValue = F("Brimmings Kamp");
        break;
    }
    case 63703:
    {
        returnValue = F("Brinckmannstr.");
        break;
    }
    case 63704:
    {
        returnValue = F("Brindöpkestr.");
        break;
    }
    case 63705:
    {
        returnValue = F("Bringelbergsweg");
        break;
    }
    case 63706:
    {
        returnValue = F("Bringelsbergweg");
        break;
    }
    case 63707:
    {
        returnValue = F("Bringhäuser Str.");
        break;
    }
    case 63708:
    {
        returnValue = F("Bringmannshaus");
        break;
    }
    case 63709:
    {
        returnValue = F("Brinjaher Weg");
        break;
    }
    case 63710:
    {
        returnValue = F("Brink");
        break;
    }
    case 63711:
    {
        returnValue = F("Brinkackerweg");
        break;
    }
    case 63712:
    {
        returnValue = F("Brinkberg");
        break;
    }
    case 63713:
    {
        returnValue = F("Brinkborn");
        break;
    }
    case 63714:
    {
        returnValue = F("Brinke");
        break;
    }
    case 63715:
    {
        returnValue = F("Brinkelweg");
        break;
    }
    case 63716:
    {
        returnValue = F("Brinkengarten");
        break;
    }
    case 63717:
    {
        returnValue = F("Brinkenhof");
        break;
    }
    case 63718:
    {
        returnValue = F("Brinkenholz");
        break;
    }
    case 63719:
    {
        returnValue = F("Brinkenkamp");
        break;
    }
    case 63720:
    {
        returnValue = F("Brinkenne");
        break;
    }
    case 63721:
    {
        returnValue = F("Brinkensteg");
        break;
    }
    case 63722:
    {
        returnValue = F("Brinkenweg");
        break;
    }
    case 63723:
    {
        returnValue = F("Brinker Bach");
        break;
    }
    case 63724:
    {
        returnValue = F("Brinker Damm");
        break;
    }
    case 63725:
    {
        returnValue = F("Brinker Diek");
        break;
    }
    case 63726:
    {
        returnValue = F("Brinker Esch");
        break;
    }
    case 63727:
    {
        returnValue = F("Brinker Feld");
        break;
    }
    case 63728:
    {
        returnValue = F("Brinker Höhe");
        break;
    }
    case 63729:
    {
        returnValue = F("Brinker Ort");
        break;
    }
    case 63730:
    {
        returnValue = F("Brinker Ring");
        break;
    }
    case 63731:
    {
        returnValue = F("Brinker Stegge");
        break;
    }
    case 63732:
    {
        returnValue = F("Brinker Str.");
        break;
    }
    case 63733:
    {
        returnValue = F("Brinker Weg");
        break;
    }
    case 63734:
    {
        returnValue = F("Brinkerfeld");
        break;
    }
    case 63735:
    {
        returnValue = F("Brinkerhof");
        break;
    }
    case 63736:
    {
        returnValue = F("Brinkerhook");
        break;
    }
    case 63737:
    {
        returnValue = F("Brinkerrott");
        break;
    }
    case 63738:
    {
        returnValue = F("Brinkers Veen");
        break;
    }
    case 63739:
    {
        returnValue = F("Brinkerstr.");
        break;
    }
    case 63740:
    {
        returnValue = F("Brinkertgasse");
        break;
    }
    case 63741:
    {
        returnValue = F("Brinkeweg");
        break;
    }
    case 63742:
    {
        returnValue = F("Brinkfeldstr.");
        break;
    }
    case 63743:
    {
        returnValue = F("Brinkfeldweg");
        break;
    }
    case 63744:
    {
        returnValue = F("Brinkfuhren");
        break;
    }
    case 63745:
    {
        returnValue = F("Brinkgarten");
        break;
    }
    case 63746:
    {
        returnValue = F("Brinkhansstr.");
        break;
    }
    case 63747:
    {
        returnValue = F("Brinkhaus Stiege");
        break;
    }
    case 63748:
    {
        returnValue = F("Brinkhausstr.");
        break;
    }
    case 63749:
    {
        returnValue = F("Brinkheide");
        break;
    }
    case 63750:
    {
        returnValue = F("Brinkhof");
        break;
    }
    case 63751:
    {
        returnValue = F("Brinkhofweg");
        break;
    }
    case 63752:
    {
        returnValue = F("Brinkhohle");
        break;
    }
    case 63753:
    {
        returnValue = F("Brinkholt");
        break;
    }
    case 63754:
    {
        returnValue = F("Brinkhook");
        break;
    }
    case 63755:
    {
        returnValue = F("Brinkhuesstr.");
        break;
    }
    case 63756:
    {
        returnValue = F("Brinkhusen");
        break;
    }
    case 63757:
    {
        returnValue = F("Brinkkamp");
        break;
    }
    case 63758:
    {
        returnValue = F("Brinkkampsweg");
        break;
    }
    case 63759:
    {
        returnValue = F("Brinkkrog");
        break;
    }
    case 63760:
    {
        returnValue = F("Brinkmanns Boll");
        break;
    }
    case 63761:
    {
        returnValue = F("Brinkmanns Busch");
        break;
    }
    case 63762:
    {
        returnValue = F("Brinkmanns Hof");
        break;
    }
    case 63763:
    {
        returnValue = F("Brinkmannschneise");
        break;
    }
    case 63764:
    {
        returnValue = F("Brinkmannshof");
        break;
    }
    case 63765:
    {
        returnValue = F("Brinkmannstr.");
        break;
    }
    case 63766:
    {
        returnValue = F("Brinkmannweg");
        break;
    }
    case 63767:
    {
        returnValue = F("Brinkmeierstr.");
        break;
    }
    case 63768:
    {
        returnValue = F("Brinkplatz");
        break;
    }
    case 63769:
    {
        returnValue = F("Brinks Garten");
        break;
    }
    case 63770:
    {
        returnValue = F("Brinks Wiese");
        break;
    }
    case 63771:
    {
        returnValue = F("Brinksel");
        break;
    }
    case 63772:
    {
        returnValue = F("Brinkstegge");
        break;
    }
    case 63773:
    {
        returnValue = F("Brinkstiege");
        break;
    }
    case 63774:
    {
        returnValue = F("Brinkstr.");
        break;
    }
    case 63775:
    {
        returnValue = F("Brinksweg");
        break;
    }
    case 63776:
    {
        returnValue = F("Brinkumer Moor");
        break;
    }
    case 63777:
    {
        returnValue = F("Brinkumer Str.");
        break;
    }
    case 63778:
    {
        returnValue = F("Brinkwall");
        break;
    }
    case 63779:
    {
        returnValue = F("Brinkwand");
        break;
    }
    case 63780:
    {
        returnValue = F("Brinkweg");
        break;
    }
    case 63781:
    {
        returnValue = F("Brinkwiese");
        break;
    }
    case 63782:
    {
        returnValue = F("Brinkwiesen");
        break;
    }
    case 63783:
    {
        returnValue = F("Brinniser Str.");
        break;
    }
    case 63784:
    {
        returnValue = F("Brinskamp");
        break;
    }
    case 63785:
    {
        returnValue = F("Brinzingerweg");
        break;
    }
    case 63786:
    {
        returnValue = F("Brionsgäßchen");
        break;
    }
    case 63787:
    {
        returnValue = F("Brionstr.");
        break;
    }
    case 63788:
    {
        returnValue = F("Briorn");
        break;
    }
    case 63789:
    {
        returnValue = F("Briouder Platz");
        break;
    }
    case 63790:
    {
        returnValue = F("Briouze Platz");
        break;
    }
    case 63791:
    {
        returnValue = F("Brischko");
        break;
    }
    case 63792:
    {
        returnValue = F("Briseinweg");
        break;
    }
    case 63793:
    {
        returnValue = F("Brisewieke");
        break;
    }
    case 63794:
    {
        returnValue = F("Brisighellastr.");
        break;
    }
    case 63795:
    {
        returnValue = F("Bristlestr.");
        break;
    }
    case 63796:
    {
        returnValue = F("Bristower Str.");
        break;
    }
    case 63797:
    {
        returnValue = F("Britannia Way");
        break;
    }
    case 63798:
    {
        returnValue = F("Britanniahütte");
        break;
    }
    case 63799:
    {
        returnValue = F("Britanniaweg");
        break;
    }
    case 63800:
    {
        returnValue = F("Britischer Weg");
        break;
    }
    case 63801:
    {
        returnValue = F("Britschen");
        break;
    }
    case 63802:
    {
        returnValue = F("Britschweiler");
        break;
    }
    case 63803:
    {
        returnValue = F("Britschweiler Str.");
        break;
    }
    case 63804:
    {
        returnValue = F("Brittaweg");
        break;
    }
    case 63805:
    {
        returnValue = F("Brittener Str.");
        break;
    }
    case 63806:
    {
        returnValue = F("Brittenweg");
        break;
    }
    case 63807:
    {
        returnValue = F("Britter Str.");
        break;
    }
    case 63808:
    {
        returnValue = F("Brittingweg");
        break;
    }
    case 63809:
    {
        returnValue = F("Britzenbachstr.");
        break;
    }
    case 63810:
    {
        returnValue = F("Britzer Str.");
        break;
    }
    case 63811:
    {
        returnValue = F("Britzinger Weg");
        break;
    }
    case 63812:
    {
        returnValue = F("Britzingerweg");
        break;
    }
    case 63813:
    {
        returnValue = F("Brixener Str.");
        break;
    }
    case 63814:
    {
        returnValue = F("Brixener Weg");
        break;
    }
    case 63815:
    {
        returnValue = F("Brixiusgässchen");
        break;
    }
    case 63816:
    {
        returnValue = F("Brixiusstr.");
        break;
    }
    case 63817:
    {
        returnValue = F("Brixiusweg");
        break;
    }
    case 63818:
    {
        returnValue = F("Brixstr.");
        break;
    }
    case 63819:
    {
        returnValue = F("Broackerweg");
        break;
    }
    case 63820:
    {
        returnValue = F("Broamkamp");
        break;
    }
    case 63821:
    {
        returnValue = F("Broberger Str.");
        break;
    }
    case 63822:
    {
        returnValue = F("Broccostr.");
        break;
    }
    case 63823:
    {
        returnValue = F("Broch");
        break;
    }
    case 63824:
    {
        returnValue = F("Brochdorfer Str.");
        break;
    }
    case 63825:
    {
        returnValue = F("Brochenbachstr.");
        break;
    }
    case 63826:
    {
        returnValue = F("Brochenbergweg");
        break;
    }
    case 63827:
    {
        returnValue = F("Brochenzeller Str.");
        break;
    }
    case 63828:
    {
        returnValue = F("Brocherweg");
        break;
    }
    case 63829:
    {
        returnValue = F("Brochgasse");
        break;
    }
    case 63830:
    {
        returnValue = F("Brochhagenberg");
        break;
    }
    case 63831:
    {
        returnValue = F("Brochonstr.");
        break;
    }
    case 63832:
    {
        returnValue = F("Brochterbecker Damm");
        break;
    }
    case 63833:
    {
        returnValue = F("Brochterbecker Str.");
        break;
    }
    case 63834:
    {
        returnValue = F("Brochthäuser Str.");
        break;
    }
    case 63835:
    {
        returnValue = F("Brochtruper Str.");
        break;
    }
    case 63836:
    {
        returnValue = F("Brock");
        break;
    }
    case 63837:
    {
        returnValue = F("Brockamp");
        break;
    }
    case 63838:
    {
        returnValue = F("Brockauer Str.");
        break;
    }
    case 63839:
    {
        returnValue = F("Brockbachstr.");
        break;
    }
    case 63840:
    {
        returnValue = F("Brockdorfer Str.");
        break;
    }
    case 63841:
    {
        returnValue = F("Brockdorff-Rantzau-Str.");
        break;
    }
    case 63842:
    {
        returnValue = F("Brockeler Kirchweg");
        break;
    }
    case 63843:
    {
        returnValue = F("Brockeler Str.");
        break;
    }
    case 63844:
    {
        returnValue = F("Brockelsweg");
        break;
    }
    case 63845:
    {
        returnValue = F("Brockenacker");
        break;
    }
    case 63846:
    {
        returnValue = F("Brockenberg");
        break;
    }
    case 63847:
    {
        returnValue = F("Brockenbergstr.");
        break;
    }
    case 63848:
    {
        returnValue = F("Brockenblick");
        break;
    }
    case 63849:
    {
        returnValue = F("Brockenblickstr.");
        break;
    }
    case 63850:
    {
        returnValue = F("Brockenblickweg");
        break;
    }
    case 63851:
    {
        returnValue = F("Brockendorfer Weg");
        break;
    }
    case 63852:
    {
        returnValue = F("Brockendorfstr.");
        break;
    }
    case 63853:
    {
        returnValue = F("Brockenfeld");
        break;
    }
    case 63854:
    {
        returnValue = F("Brockenscheidter Str.");
        break;
    }
    case 63855:
    {
        returnValue = F("Brockenser Str.");
        break;
    }
    case 63856:
    {
        returnValue = F("Brockensfeld");
        break;
    }
    case 63857:
    {
        returnValue = F("Brockensklee");
        break;
    }
    case 63858:
    {
        returnValue = F("Brockenstr.");
        break;
    }
    case 63859:
    {
        returnValue = F("Brockenweg");
        break;
    }
    case 63860:
    {
        returnValue = F("Brocker Kirchweg");
        break;
    }
    case 63861:
    {
        returnValue = F("Brockerhof");
        break;
    }
    case 63862:
    {
        returnValue = F("Brockerhofer Weg");
        break;
    }
    case 63863:
    {
        returnValue = F("Brockersweg");
        break;
    }
    case 63864:
    {
        returnValue = F("Brockerweg");
        break;
    }
    case 63865:
    {
        returnValue = F("Brockestr.");
        break;
    }
    case 63866:
    {
        returnValue = F("Brockeswalder Chaussee");
        break;
    }
    case 63867:
    {
        returnValue = F("Brockeswalder Weg");
        break;
    }
    case 63868:
    {
        returnValue = F("Brockesweg");
        break;
    }
    case 63869:
    {
        returnValue = F("Brockfeldweg");
        break;
    }
    case 63870:
    {
        returnValue = F("Brockhagener Str.");
        break;
    }
    case 63871:
    {
        returnValue = F("Brockhausen");
        break;
    }
    case 63872:
    {
        returnValue = F("Brockhausener Str.");
        break;
    }
    case 63873:
    {
        returnValue = F("Brockhausenweg");
        break;
    }
    case 63874:
    {
        returnValue = F("Brockhauser Str.");
        break;
    }
    case 63875:
    {
        returnValue = F("Brockhauser Weg");
        break;
    }
    case 63876:
    {
        returnValue = F("Brockhausstr.");
        break;
    }
    case 63877:
    {
        returnValue = F("Brockhausweg");
        break;
    }
    case 63878:
    {
        returnValue = F("Brockheide");
        break;
    }
    case 63879:
    {
        returnValue = F("Brockhimbergen");
        break;
    }
    case 63880:
    {
        returnValue = F("Brockhof");
        break;
    }
    case 63881:
    {
        returnValue = F("Brockhofer Str.");
        break;
    }
    case 63882:
    {
        returnValue = F("Brockhoffstr.");
        break;
    }
    case 63883:
    {
        returnValue = F("Brockhoffweg");
        break;
    }
    case 63884:
    {
        returnValue = F("Brockhofweg");
        break;
    }
    case 63885:
    {
        returnValue = F("Brockhuesweg");
        break;
    }
    case 63886:
    {
        returnValue = F("Brockhäger Str.");
        break;
    }
    case 63887:
    {
        returnValue = F("Brockhöfer Str.");
        break;
    }
    case 63888:
    {
        returnValue = F("Brockhöhe");
        break;
    }
    case 63889:
    {
        returnValue = F("Brockkamp");
        break;
    }
    case 63890:
    {
        returnValue = F("Brockmann's Weg");
        break;
    }
    case 63891:
    {
        returnValue = F("Brockmann-Meyerhof-Str.");
        break;
    }
    case 63892:
    {
        returnValue = F("Brockmannsheide");
        break;
    }
    case 63893:
    {
        returnValue = F("Brockmannsmühle");
        break;
    }
    case 63894:
    {
        returnValue = F("Brockmannstr.");
        break;
    }
    case 63895:
    {
        returnValue = F("Brockmannsweg");
        break;
    }
    case 63896:
    {
        returnValue = F("Brockmannweg");
        break;
    }
    case 63897:
    {
        returnValue = F("Brockmeiersweg");
        break;
    }
    case 63898:
    {
        returnValue = F("Brockmöllers Hof");
        break;
    }
    case 63899:
    {
        returnValue = F("Brockmüllerstr.");
        break;
    }
    case 63900:
    {
        returnValue = F("Brocks Busch");
        break;
    }
    case 63901:
    {
        returnValue = F("Brockscheider Graben");
        break;
    }
    case 63902:
    {
        returnValue = F("Brockscheider Str.");
        break;
    }
    case 63903:
    {
        returnValue = F("Brocksschlucht");
        break;
    }
    case 63904:
    {
        returnValue = F("Brocksteg");
        break;
    }
    case 63905:
    {
        returnValue = F("Brockstr.");
        break;
    }
    case 63906:
    {
        returnValue = F("Brockstreck");
        break;
    }
    case 63907:
    {
        returnValue = F("Brockumer Str.");
        break;
    }
    case 63908:
    {
        returnValue = F("Brockweg");
        break;
    }
    case 63909:
    {
        returnValue = F("Brockwiesen");
        break;
    }
    case 63910:
    {
        returnValue = F("Brockwiesenstr.");
        break;
    }
    case 63911:
    {
        returnValue = F("Brockwiesenweg");
        break;
    }
    case 63912:
    {
        returnValue = F("Brockwinkler Str.");
        break;
    }
    case 63913:
    {
        returnValue = F("Brockwinkler Weg");
        break;
    }
    case 63914:
    {
        returnValue = F("Brockwitzer Str.");
        break;
    }
    case 63915:
    {
        returnValue = F("Brockzeteler Str.");
        break;
    }
    case 63916:
    {
        returnValue = F("Brockäckerweg");
        break;
    }
    case 63917:
    {
        returnValue = F("Broda");
        break;
    }
    case 63918:
    {
        returnValue = F("Brodacker");
        break;
    }
    case 63919:
    {
        returnValue = F("Brodaer Str.");
        break;
    }
    case 63920:
    {
        returnValue = F("Brodauer Mühle");
        break;
    }
    case 63921:
    {
        returnValue = F("Brodauer Str.");
        break;
    }
    case 63922:
    {
        returnValue = F("Brodauer Weg");
        break;
    }
    case 63923:
    {
        returnValue = F("Brodauer Winkel");
        break;
    }
    case 63924:
    {
        returnValue = F("Brodbachstr.");
        break;
    }
    case 63925:
    {
        returnValue = F("Brodbeckstr.");
        break;
    }
    case 63926:
    {
        returnValue = F("Brodberg");
        break;
    }
    case 63927:
    {
        returnValue = F("Brodbergstr.");
        break;
    }
    case 63928:
    {
        returnValue = F("Brode");
        break;
    }
    case 63929:
    {
        returnValue = F("Brodenaundorfer Str.");
        break;
    }
    case 63930:
    {
        returnValue = F("Brodenbacher Str.");
        break;
    }
    case 63931:
    {
        returnValue = F("Brodenheckstr.");
        break;
    }
    case 63932:
    {
        returnValue = F("Broder Paysens Weg");
        break;
    }
    case 63933:
    {
        returnValue = F("Broder-Christiansen-Weg");
        break;
    }
    case 63934:
    {
        returnValue = F("Broder-Jacobs-Weg");
        break;
    }
    case 63935:
    {
        returnValue = F("Broder-Lorenz-Nissen-Str.");
        break;
    }
    case 63936:
    {
        returnValue = F("Broderdammskamp");
        break;
    }
    case 63937:
    {
        returnValue = F("Brodersbyer Str.");
        break;
    }
    case 63938:
    {
        returnValue = F("Brodersdorfer Str.");
        break;
    }
    case 63939:
    {
        returnValue = F("Brodersdorfer Weg");
        break;
    }
    case 63940:
    {
        returnValue = F("Brodersenstr.");
        break;
    }
    case 63941:
    {
        returnValue = F("Brodershof");
        break;
    }
    case 63942:
    {
        returnValue = F("Brodführerweg");
        break;
    }
    case 63943:
    {
        returnValue = F("Brodgasse");
        break;
    }
    case 63944:
    {
        returnValue = F("Brodhagen");
        break;
    }
    case 63945:
    {
        returnValue = F("Brodhauser Str.");
        break;
    }
    case 63946:
    {
        returnValue = F("Brodhof");
        break;
    }
    case 63947:
    {
        returnValue = F("Brodhäger Weg");
        break;
    }
    case 63948:
    {
        returnValue = F("Brodlaube");
        break;
    }
    case 63949:
    {
        returnValue = F("Brodmannstr.");
        break;
    }
    case 63950:
    {
        returnValue = F("Brodmerkel-Str.");
        break;
    }
    case 63951:
    {
        returnValue = F("Brodowiner Dorfstr.");
        break;
    }
    case 63952:
    {
        returnValue = F("Brodowiner Str.");
        break;
    }
    case 63953:
    {
        returnValue = F("Brodpad");
        break;
    }
    case 63954:
    {
        returnValue = F("Brodschapp");
        break;
    }
    case 63955:
    {
        returnValue = F("Brodschirm");
        break;
    }
    case 63956:
    {
        returnValue = F("Brodtener Str.");
        break;
    }
    case 63957:
    {
        returnValue = F("Brodwastlweg");
        break;
    }
    case 63958:
    {
        returnValue = F("Brodweg");
        break;
    }
    case 63959:
    {
        returnValue = F("Broeckhof");
        break;
    }
    case 63960:
    {
        returnValue = F("Broecksteeg");
        break;
    }
    case 63961:
    {
        returnValue = F("Broecksteg");
        break;
    }
    case 63962:
    {
        returnValue = F("Broekhuysener Str.");
        break;
    }
    case 63963:
    {
        returnValue = F("Broekhuysenweg");
        break;
    }
    case 63964:
    {
        returnValue = F("Broekmeedenweg");
        break;
    }
    case 63965:
    {
        returnValue = F("Broeksgaste");
        break;
    }
    case 63966:
    {
        returnValue = F("Broeksweg");
        break;
    }
    case 63967:
    {
        returnValue = F("Broelmanns Kamp");
        break;
    }
    case 63968:
    {
        returnValue = F("Broelmannweg");
        break;
    }
    case 63969:
    {
        returnValue = F("Broelsgäßchen");
        break;
    }
    case 63970:
    {
        returnValue = F("Broermanns Hof");
        break;
    }
    case 63971:
    {
        returnValue = F("Brogg. Mattenweg");
        break;
    }
    case 63972:
    {
        returnValue = F("Brogginger Reuttenhardt");
        break;
    }
    case 63973:
    {
        returnValue = F("Brogginger Str.");
        break;
    }
    case 63974:
    {
        returnValue = F("Brohler Weg");
        break;
    }
    case 63975:
    {
        returnValue = F("Brohltalblick");
        break;
    }
    case 63976:
    {
        returnValue = F("Brohltalstr.");
        break;
    }
    case 63977:
    {
        returnValue = F("Brohmer Allee");
        break;
    }
    case 63978:
    {
        returnValue = F("Brohmsgasse");
        break;
    }
    case 63979:
    {
        returnValue = F("Brohörnring");
        break;
    }
    case 63980:
    {
        returnValue = F("Broich");
        break;
    }
    case 63981:
    {
        returnValue = F("Broich-Park");
        break;
    }
    case 63982:
    {
        returnValue = F("Broichbachtal");
        break;
    }
    case 63983:
    {
        returnValue = F("Broicher Berg");
        break;
    }
    case 63984:
    {
        returnValue = F("Broicher Dorfstr.");
        break;
    }
    case 63985:
    {
        returnValue = F("Broicher Feld");
        break;
    }
    case 63986:
    {
        returnValue = F("Broicher Kaul");
        break;
    }
    case 63987:
    {
        returnValue = F("Broicher Pfad");
        break;
    }
    case 63988:
    {
        returnValue = F("Broicher Str.");
        break;
    }
    case 63989:
    {
        returnValue = F("Broicher Weg");
        break;
    }
    case 63990:
    {
        returnValue = F("Broicherdorfstr.");
        break;
    }
    case 63991:
    {
        returnValue = F("Broicherseite");
        break;
    }
    case 63992:
    {
        returnValue = F("Broichgasse");
        break;
    }
    case 63993:
    {
        returnValue = F("Broichhausen");
        break;
    }
    case 63994:
    {
        returnValue = F("Broichhoven");
        break;
    }
    case 63995:
    {
        returnValue = F("Broichkirchweg");
        break;
    }
    case 63996:
    {
        returnValue = F("Broichmühlenstr.");
        break;
    }
    case 63997:
    {
        returnValue = F("Broichsgasse");
        break;
    }
    case 63998:
    {
        returnValue = F("Broichstr.");
        break;
    }
    case 63999:
    {
        returnValue = F("Broichweg");
        break;
    }
    case 64000:
    {
        returnValue = F("Broichwende");
        break;
    }
    case 64001:
    {
        returnValue = F("Broistedter Str.");
        break;
    }
    case 64002:
    {
        returnValue = F("Broistedtstr.");
        break;
    }
    case 64003:
    {
        returnValue = F("Broisterdstr.");
        break;
    }
    case 64004:
    {
        returnValue = F("Brok");
        break;
    }
    case 64005:
    {
        returnValue = F("Brokamp");
        break;
    }
    case 64006:
    {
        returnValue = F("Brokeloher Bergstr.");
        break;
    }
    case 64007:
    {
        returnValue = F("Brokeloher Brinkstr.");
        break;
    }
    case 64008:
    {
        returnValue = F("Brokeloher Dorfstr.");
        break;
    }
    case 64009:
    {
        returnValue = F("Brokeloher Hauptstr.");
        break;
    }
    case 64010:
    {
        returnValue = F("Brokeloher Heide");
        break;
    }
    case 64011:
    {
        returnValue = F("Brokeloher Hellberg");
        break;
    }
    case 64012:
    {
        returnValue = F("Brokeloher Kamp");
        break;
    }
    case 64013:
    {
        returnValue = F("Brokeloher Str.");
        break;
    }
    case 64014:
    {
        returnValue = F("Brokenlander Str.");
        break;
    }
    case 64015:
    {
        returnValue = F("Brokenweg");
        break;
    }
    case 64016:
    {
        returnValue = F("Broker Holz");
        break;
    }
    case 64017:
    {
        returnValue = F("Brokeshohl");
        break;
    }
    case 64018:
    {
        returnValue = F("Brokforster Weg");
        break;
    }
    case 64019:
    {
        returnValue = F("Brokhauser Weg");
        break;
    }
    case 64020:
    {
        returnValue = F("Brokhusenstr.");
        break;
    }
    case 64021:
    {
        returnValue = F("Brokkuhl");
        break;
    }
    case 64022:
    {
        returnValue = F("Broklandstr.");
        break;
    }
    case 64023:
    {
        returnValue = F("Broklandsweg");
        break;
    }
    case 64024:
    {
        returnValue = F("Brokreihe");
        break;
    }
    case 64025:
    {
        returnValue = F("Brokser Sodenstich");
        break;
    }
    case 64026:
    {
        returnValue = F("Brokser Weg");
        break;
    }
    case 64027:
    {
        returnValue = F("Brokstedter Str.");
        break;
    }
    case 64028:
    {
        returnValue = F("Brokstr.");
        break;
    }
    case 64029:
    {
        returnValue = F("Brokstreeker Str.");
        break;
    }
    case 64030:
    {
        returnValue = F("Broktrift");
        break;
    }
    case 64031:
    {
        returnValue = F("Brokusstr.");
        break;
    }
    case 64032:
    {
        returnValue = F("Brokweg");
        break;
    }
    case 64033:
    {
        returnValue = F("Brokwisch");
        break;
    }
    case 64034:
    {
        returnValue = F("Broloyweg");
        break;
    }
    case 64035:
    {
        returnValue = F("Bromanskjär");
        break;
    }
    case 64036:
    {
        returnValue = F("Bromay");
        break;
    }
    case 64037:
    {
        returnValue = F("Brombacher Str.");
        break;
    }
    case 64038:
    {
        returnValue = F("Brombacher Weg");
        break;
    }
    case 64039:
    {
        returnValue = F("Brombachstr.");
        break;
    }
    case 64040:
    {
        returnValue = F("Brombachtaler Str.");
        break;
    }
    case 64041:
    {
        returnValue = F("Brombachweg");
        break;
    }
    case 64042:
    {
        returnValue = F("Brombeerberg");
        break;
    }
    case 64043:
    {
        returnValue = F("Brombeerenweg");
        break;
    }
    case 64044:
    {
        returnValue = F("Brombeerhag");
        break;
    }
    case 64045:
    {
        returnValue = F("Brombeerhagen");
        break;
    }
    case 64046:
    {
        returnValue = F("Brombeerhecke");
        break;
    }
    case 64047:
    {
        returnValue = F("Brombeerhof");
        break;
    }
    case 64048:
    {
        returnValue = F("Brombeerkamp");
        break;
    }
    case 64049:
    {
        returnValue = F("Brombeerknick");
        break;
    }
    case 64050:
    {
        returnValue = F("Brombeerkopfweg");
        break;
    }
    case 64051:
    {
        returnValue = F("Brombeermatt");
        break;
    }
    case 64052:
    {
        returnValue = F("Brombeerring");
        break;
    }
    case 64053:
    {
        returnValue = F("Brombeerstieg");
        break;
    }
    case 64054:
    {
        returnValue = F("Brombeerstr.");
        break;
    }
    case 64055:
    {
        returnValue = F("Brombeerstrauch");
        break;
    }
    case 64056:
    {
        returnValue = F("Brombeertwiete");
        break;
    }
    case 64057:
    {
        returnValue = F("Brombeerweg");
        break;
    }
    case 64058:
    {
        returnValue = F("Bromberg");
        break;
    }
    case 64059:
    {
        returnValue = F("Brombergebenesträßle");
        break;
    }
    case 64060:
    {
        returnValue = F("Brombergebeneweg");
        break;
    }
    case 64061:
    {
        returnValue = F("Bromberger Allee");
        break;
    }
    case 64062:
    {
        returnValue = F("Bromberger Ring");
        break;
    }
    case 64063:
    {
        returnValue = F("Bromberger Str.");
        break;
    }
    case 64064:
    {
        returnValue = F("Bromberger Weg");
        break;
    }
    case 64065:
    {
        returnValue = F("Brombergstr.");
        break;
    }
    case 64066:
    {
        returnValue = F("Brombergweg");
        break;
    }
    case 64067:
    {
        returnValue = F("Brombichlweg");
        break;
    }
    case 64068:
    {
        returnValue = F("Brombühlweg");
        break;
    }
    case 64069:
    {
        returnValue = F("Bromelesweg");
        break;
    }
    case 64070:
    {
        returnValue = F("Bromen");
        break;
    }
    case 64071:
    {
        returnValue = F("Bromenackerweg");
        break;
    }
    case 64072:
    {
        returnValue = F("Bromenhauweg");
        break;
    }
    case 64073:
    {
        returnValue = F("Bromenlandweg");
        break;
    }
    case 64074:
    {
        returnValue = F("Bromenäcker");
        break;
    }
    case 64075:
    {
        returnValue = F("Bromer Str.");
        break;
    }
    case 64076:
    {
        returnValue = F("Bromer Weg");
        break;
    }
    case 64077:
    {
        returnValue = F("Bromergasse");
        break;
    }
    case 64078:
    {
        returnValue = F("Bromernkamp");
        break;
    }
    case 64079:
    {
        returnValue = F("Bromheide");
        break;
    }
    case 64080:
    {
        returnValue = F("Bromhofweg");
        break;
    }
    case 64081:
    {
        returnValue = F("Bromleystr.");
        break;
    }
    case 64082:
    {
        returnValue = F("Brommel");
        break;
    }
    case 64083:
    {
        returnValue = F("Brommelweg");
        break;
    }
    case 64084:
    {
        returnValue = F("Brommenpfädle");
        break;
    }
    case 64085:
    {
        returnValue = F("Brommenstr.");
        break;
    }
    case 64086:
    {
        returnValue = F("Brommerklint");
        break;
    }
    case 64087:
    {
        returnValue = F("Brommersbach");
        break;
    }
    case 64088:
    {
        returnValue = F("Brommersiek");
        break;
    }
    case 64089:
    {
        returnValue = F("Brommertalsweg");
        break;
    }
    case 64090:
    {
        returnValue = F("Brommstr.");
        break;
    }
    case 64091:
    {
        returnValue = F("Bromskircher Weg");
        break;
    }
    case 64092:
    {
        returnValue = F("Broner Platz");
        break;
    }
    case 64093:
    {
        returnValue = F("Broner Ring");
        break;
    }
    case 64094:
    {
        returnValue = F("Bronkweg");
        break;
    }
    case 64095:
    {
        returnValue = F("Bronn");
        break;
    }
    case 64096:
    {
        returnValue = F("Bronnackerweg");
        break;
    }
    case 64097:
    {
        returnValue = F("Bronnader");
        break;
    }
    case 64098:
    {
        returnValue = F("Bronnamberger Weg");
        break;
    }
    case 64099:
    {
        returnValue = F("Bronnbacher Str.");
        break;
    }
    case 64100:
    {
        returnValue = F("Bronnbachergasse");
        break;
    }
    case 64101:
    {
        returnValue = F("Bronnener Str.");
        break;
    }
    case 64102:
    {
        returnValue = F("Bronnenfeldstr.");
        break;
    }
    case 64103:
    {
        returnValue = F("Bronnengäßchen");
        break;
    }
    case 64104:
    {
        returnValue = F("Bronnenkohlweg");
        break;
    }
    case 64105:
    {
        returnValue = F("Bronnenmayerstr.");
        break;
    }
    case 64106:
    {
        returnValue = F("Bronnenplatz");
        break;
    }
    case 64107:
    {
        returnValue = F("Bronnenstr.");
        break;
    }
    case 64108:
    {
        returnValue = F("Bronnensträßle,Rudertälesweg");
        break;
    }
    case 64109:
    {
        returnValue = F("Bronnenstubenweg");
        break;
    }
    case 64110:
    {
        returnValue = F("Bronnentalweg");
        break;
    }
    case 64111:
    {
        returnValue = F("Bronnenweg");
        break;
    }
    case 64112:
    {
        returnValue = F("Bronnenwiese");
        break;
    }
    case 64113:
    {
        returnValue = F("Bronnenwiesen");
        break;
    }
    case 64114:
    {
        returnValue = F("Bronner Str.");
        break;
    }
    case 64115:
    {
        returnValue = F("Bronner Weg");
        break;
    }
    case 64116:
    {
        returnValue = F("Bronnerstr.");
        break;
    }
    case 64117:
    {
        returnValue = F("Bronnerweg");
        break;
    }
    case 64118:
    {
        returnValue = F("Bronnespan");
        break;
    }
    case 64119:
    {
        returnValue = F("Bronnfeldstr.");
        break;
    }
    case 64120:
    {
        returnValue = F("Bronngasse");
        break;
    }
    case 64121:
    {
        returnValue = F("Bronngehrenweg");
        break;
    }
    case 64122:
    {
        returnValue = F("Bronnhaldenweg");
        break;
    }
    case 64123:
    {
        returnValue = F("Bronnhaldeweg");
        break;
    }
    case 64124:
    {
        returnValue = F("Bronnholzheimer Str.");
        break;
    }
    case 64125:
    {
        returnValue = F("Bronnmattstr.");
        break;
    }
    case 64126:
    {
        returnValue = F("Bronnwasenstr.");
        break;
    }
    case 64127:
    {
        returnValue = F("Bronnwiesenstr.");
        break;
    }
    case 64128:
    {
        returnValue = F("Bronnwiesenweg");
        break;
    }
    case 64129:
    {
        returnValue = F("Bronnzeller Str.");
        break;
    }
    case 64130:
    {
        returnValue = F("Bronnäckerstr.");
        break;
    }
    case 64131:
    {
        returnValue = F("Bronsberger Weg");
        break;
    }
    case 64132:
    {
        returnValue = F("Bronsfeld");
        break;
    }
    case 64133:
    {
        returnValue = F("Bronslohne");
        break;
    }
    case 64134:
    {
        returnValue = F("Bronzegasse");
        break;
    }
    case 64135:
    {
        returnValue = F("Bronzeweg");
        break;
    }
    case 64136:
    {
        returnValue = F("Broock");
        break;
    }
    case 64137:
    {
        returnValue = F("Broocker Weg");
        break;
    }
    case 64138:
    {
        returnValue = F("Broocker Wohrte");
        break;
    }
    case 64139:
    {
        returnValue = F("Brook");
        break;
    }
    case 64140:
    {
        returnValue = F("Brookauweg");
        break;
    }
    case 64141:
    {
        returnValue = F("Brookbrücke");
        break;
    }
    case 64142:
    {
        returnValue = F("Brookdamm");
        break;
    }
    case 64143:
    {
        returnValue = F("Brookdiek");
        break;
    }
    case 64144:
    {
        returnValue = F("Brooker Str.");
        break;
    }
    case 64145:
    {
        returnValue = F("Brooker Weg");
        break;
    }
    case 64146:
    {
        returnValue = F("Brookfelde");
        break;
    }
    case 64147:
    {
        returnValue = F("Brookgang");
        break;
    }
    case 64148:
    {
        returnValue = F("Brookhoffweg");
        break;
    }
    case 64149:
    {
        returnValue = F("Brookhorn");
        break;
    }
    case 64150:
    {
        returnValue = F("Brookhörn");
        break;
    }
    case 64151:
    {
        returnValue = F("Brookkamp");
        break;
    }
    case 64152:
    {
        returnValue = F("Brookkampsweg");
        break;
    }
    case 64153:
    {
        returnValue = F("Brookkoppel");
        break;
    }
    case 64154:
    {
        returnValue = F("Brookkoppelweg");
        break;
    }
    case 64155:
    {
        returnValue = F("Brooklande");
        break;
    }
    case 64156:
    {
        returnValue = F("Brooklandskamp");
        break;
    }
    case 64157:
    {
        returnValue = F("Brooklandsweg");
        break;
    }
    case 64158:
    {
        returnValue = F("Brooklandweg");
        break;
    }
    case 64159:
    {
        returnValue = F("Brookmerlander Str.");
        break;
    }
    case 64160:
    {
        returnValue = F("Brookmerlandring");
        break;
    }
    case 64161:
    {
        returnValue = F("Brookredder");
        break;
    }
    case 64162:
    {
        returnValue = F("Brookring");
        break;
    }
    case 64163:
    {
        returnValue = F("Brooksdamm");
        break;
    }
    case 64164:
    {
        returnValue = F("Brookshörn");
        break;
    }
    case 64165:
    {
        returnValue = F("Brookskampen");
        break;
    }
    case 64166:
    {
        returnValue = F("Brooksmoorweg");
        break;
    }
    case 64167:
    {
        returnValue = F("Brookstegge");
        break;
    }
    case 64168:
    {
        returnValue = F("Brookstieg");
        break;
    }
    case 64169:
    {
        returnValue = F("Brookstr.");
        break;
    }
    case 64170:
    {
        returnValue = F("Brookstwiete");
        break;
    }
    case 64171:
    {
        returnValue = F("Brookswall");
        break;
    }
    case 64172:
    {
        returnValue = F("Brooksweg");
        break;
    }
    case 64173:
    {
        returnValue = F("Brookviert");
        break;
    }
    case 64174:
    {
        returnValue = F("Brookweg");
        break;
    }
    case 64175:
    {
        returnValue = F("Brookwiese");
        break;
    }
    case 64176:
    {
        returnValue = F("Brookwisch");
        break;
    }
    case 64177:
    {
        returnValue = F("Broonkööl");
        break;
    }
    case 64178:
    {
        returnValue = F("Broos");
        break;
    }
    case 64179:
    {
        returnValue = F("Brooser Weg");
        break;
    }
    case 64180:
    {
        returnValue = F("Brootpatt");
        break;
    }
    case 64181:
    {
        returnValue = F("Brosangstr.");
        break;
    }
    case 64182:
    {
        returnValue = F("Broscheider Str.");
        break;
    }
    case 64183:
    {
        returnValue = F("Broseggoweechla");
        break;
    }
    case 64184:
    {
        returnValue = F("Broser Str.");
        break;
    }
    case 64185:
    {
        returnValue = F("Brosiweg");
        break;
    }
    case 64186:
    {
        returnValue = F("Brossener Dorfstr.");
        break;
    }
    case 64187:
    {
        returnValue = F("Brossener Weg");
        break;
    }
    case 64188:
    {
        returnValue = F("Brosthausener Weg");
        break;
    }
    case 64189:
    {
        returnValue = F("Brotacker");
        break;
    }
    case 64190:
    {
        returnValue = F("Brotackerweg");
        break;
    }
    case 64191:
    {
        returnValue = F("Brotberg");
        break;
    }
    case 64192:
    {
        returnValue = F("Brotdorfer Str.");
        break;
    }
    case 64193:
    {
        returnValue = F("Brotenauweg");
        break;
    }
    case 64194:
    {
        returnValue = F("Brotenfelder Str.");
        break;
    }
    case 64195:
    {
        returnValue = F("Brotgasse");
        break;
    }
    case 64196:
    {
        returnValue = F("Brotjacklriegelweg");
        break;
    }
    case 64197:
    {
        returnValue = F("Brotjacklrieglweg");
        break;
    }
    case 64198:
    {
        returnValue = F("Brotkübelweg");
        break;
    }
    case 64199:
    {
        returnValue = F("Brotlaube");
        break;
    }
    case 64200:
    {
        returnValue = F("Brotmannstr.");
        break;
    }
    case 64201:
    {
        returnValue = F("Brotmarkt");
        break;
    }
    case 64202:
    {
        returnValue = F("Brotpfad");
        break;
    }
    case 64203:
    {
        returnValue = F("Brotsteig");
        break;
    }
    case 64204:
    {
        returnValue = F("Brotstr.");
        break;
    }
    case 64205:
    {
        returnValue = F("Brottensteige");
        break;
    }
    case 64206:
    {
        returnValue = F("Brotteroder Fußweg");
        break;
    }
    case 64207:
    {
        returnValue = F("Brotteroder Str.");
        break;
    }
    case 64208:
    {
        returnValue = F("Brotteröder Weg");
        break;
    }
    case 64209:
    {
        returnValue = F("Brottewitzer Str.");
        break;
    }
    case 64210:
    {
        returnValue = F("Brottweg");
        break;
    }
    case 64211:
    {
        returnValue = F("Brotuffstr.");
        break;
    }
    case 64212:
    {
        returnValue = F("Brotweg");
        break;
    }
    case 64213:
    {
        returnValue = F("Brotwinkel");
        break;
    }
    case 64214:
    {
        returnValue = F("Brotäckerstr.");
        break;
    }
    case 64215:
    {
        returnValue = F("Brougierstr.");
        break;
    }
    case 64216:
    {
        returnValue = F("Brovstweg");
        break;
    }
    case 64217:
    {
        returnValue = F("Browerskamp");
        break;
    }
    case 64218:
    {
        returnValue = F("Brown-Boveri-Str.");
        break;
    }
    case 64219:
    {
        returnValue = F("Broyhansweg");
        break;
    }
    case 64220:
    {
        returnValue = F("Broßstr.");
        break;
    }
    case 64221:
    {
        returnValue = F("Brualer Str.");
        break;
    }
    case 64222:
    {
        returnValue = F("Bruayplatz");
        break;
    }
    case 64223:
    {
        returnValue = F("Brubach");
        break;
    }
    case 64224:
    {
        returnValue = F("Brubergweg");
        break;
    }
    case 64225:
    {
        returnValue = F("Bruch");
        break;
    }
    case 64226:
    {
        returnValue = F("Bruch-Schneise");
        break;
    }
    case 64227:
    {
        returnValue = F("Bruchallee");
        break;
    }
    case 64228:
    {
        returnValue = F("Bruchanger");
        break;
    }
    case 64229:
    {
        returnValue = F("Bruchbachstr.");
        break;
    }
    case 64230:
    {
        returnValue = F("Bruchbendstr.");
        break;
    }
    case 64231:
    {
        returnValue = F("Bruchberg");
        break;
    }
    case 64232:
    {
        returnValue = F("Bruchbergstr.");
        break;
    }
    case 64233:
    {
        returnValue = F("Bruchbergweg");
        break;
    }
    case 64234:
    {
        returnValue = F("Bruchbitze");
        break;
    }
    case 64235:
    {
        returnValue = F("Bruchbreite");
        break;
    }
    case 64236:
    {
        returnValue = F("Bruchbühlweg");
        break;
    }
    case 64237:
    {
        returnValue = F("Bruchdamm");
        break;
    }
    case 64238:
    {
        returnValue = F("Bruchdorfer Str.");
        break;
    }
    case 64239:
    {
        returnValue = F("Bruchecken");
        break;
    }
    case 64240:
    {
        returnValue = F("Bruchenbrückener Str.");
        break;
    }
    case 64241:
    {
        returnValue = F("Bruchenbrücker Str.");
        break;
    }
    case 64242:
    {
        returnValue = F("Bruchenbrücker Weg");
        break;
    }
    case 64243:
    {
        returnValue = F("Bruchend");
        break;
    }
    case 64244:
    {
        returnValue = F("Brucher Feld");
        break;
    }
    case 64245:
    {
        returnValue = F("Brucher Mühle");
        break;
    }
    case 64246:
    {
        returnValue = F("Brucher Mühlenstr.");
        break;
    }
    case 64247:
    {
        returnValue = F("Brucher Str.");
        break;
    }
    case 64248:
    {
        returnValue = F("Brucher Weg");
        break;
    }
    case 64249:
    {
        returnValue = F("Brucherfeld");
        break;
    }
    case 64250:
    {
        returnValue = F("Brucherfeldstr.");
        break;
    }
    case 64251:
    {
        returnValue = F("Brucherkotten");
        break;
    }
    case 64252:
    {
        returnValue = F("Bruchermühlen Str.");
        break;
    }
    case 64253:
    {
        returnValue = F("Brucherstr.");
        break;
    }
    case 64254:
    {
        returnValue = F("Brucherweg");
        break;
    }
    case 64255:
    {
        returnValue = F("Bruchfeld");
        break;
    }
    case 64256:
    {
        returnValue = F("Bruchfelder Str.");
        break;
    }
    case 64257:
    {
        returnValue = F("Bruchfeldstr.");
        break;
    }
    case 64258:
    {
        returnValue = F("Bruchfeldweg");
        break;
    }
    case 64259:
    {
        returnValue = F("Bruchgartenweg");
        break;
    }
    case 64260:
    {
        returnValue = F("Bruchgasse");
        break;
    }
    case 64261:
    {
        returnValue = F("Bruchgraben");
        break;
    }
    case 64262:
    {
        returnValue = F("Bruchgärten");
        break;
    }
    case 64263:
    {
        returnValue = F("Bruchgärtenstr.");
        break;
    }
    case 64264:
    {
        returnValue = F("Bruchhagen");
        break;
    }
    case 64265:
    {
        returnValue = F("Bruchhagener Weg");
        break;
    }
    case 64266:
    {
        returnValue = F("Bruchhausen");
        break;
    }
    case 64267:
    {
        returnValue = F("Bruchhausener Str.");
        break;
    }
    case 64268:
    {
        returnValue = F("Bruchhausenstr.");
        break;
    }
    case 64269:
    {
        returnValue = F("Bruchhauser Str.");
        break;
    }
    case 64270:
    {
        returnValue = F("Bruchhauser Weg");
        break;
    }
    case 64271:
    {
        returnValue = F("Bruchhauser-Scheibenhardter-Allee");
        break;
    }
    case 64272:
    {
        returnValue = F("Bruchhausstr.");
        break;
    }
    case 64273:
    {
        returnValue = F("Bruchhauweg");
        break;
    }
    case 64274:
    {
        returnValue = F("Bruchheck");
        break;
    }
    case 64275:
    {
        returnValue = F("Bruchheide");
        break;
    }
    case 64276:
    {
        returnValue = F("Bruchheideweg");
        break;
    }
    case 64277:
    {
        returnValue = F("Bruchheim");
        break;
    }
    case 64278:
    {
        returnValue = F("Bruchheimer Str.");
        break;
    }
    case 64279:
    {
        returnValue = F("Bruchhof");
        break;
    }
    case 64280:
    {
        returnValue = F("Bruchholtweg");
        break;
    }
    case 64281:
    {
        returnValue = F("Bruchholzweg");
        break;
    }
    case 64282:
    {
        returnValue = F("Bruchholzwiesen");
        break;
    }
    case 64283:
    {
        returnValue = F("Bruchhäuser Str.");
        break;
    }
    case 64284:
    {
        returnValue = F("Bruchhäuser Weg");
        break;
    }
    case 64285:
    {
        returnValue = F("Bruchhöfe");
        break;
    }
    case 64286:
    {
        returnValue = F("Bruchhöfen");
        break;
    }
    case 64287:
    {
        returnValue = F("Bruchhöfener Str.");
        break;
    }
    case 64288:
    {
        returnValue = F("Bruchkamp");
        break;
    }
    case 64289:
    {
        returnValue = F("Bruchkampweg");
        break;
    }
    case 64290:
    {
        returnValue = F("Bruchköbeler Landstr.");
        break;
    }
    case 64291:
    {
        returnValue = F("Bruchköbeler Str.");
        break;
    }
    case 64292:
    {
        returnValue = F("Bruchmühle");
        break;
    }
    case 64293:
    {
        returnValue = F("Bruchmühlen");
        break;
    }
    case 64294:
    {
        returnValue = F("Bruchmühlener Str.");
        break;
    }
    case 64295:
    {
        returnValue = F("Bruchmühlenweg");
        break;
    }
    case 64296:
    {
        returnValue = F("Bruchmühler Str.");
        break;
    }
    case 64297:
    {
        returnValue = F("Bruchmühlweg");
        break;
    }
    case 64298:
    {
        returnValue = F("Bruchparzellenweg");
        break;
    }
    case 64299:
    {
        returnValue = F("Bruchpfad");
        break;
    }
    case 64300:
    {
        returnValue = F("Bruchrain");
        break;
    }
    case 64301:
    {
        returnValue = F("Bruchrainstr.");
        break;
    }
    case 64302:
    {
        returnValue = F("Bruchrandweg");
        break;
    }
    case 64303:
    {
        returnValue = F("Bruchreihe");
        break;
    }
    case 64304:
    {
        returnValue = F("Bruchring");
        break;
    }
    case 64305:
    {
        returnValue = F("Bruchsaler Kreuzweg");
        break;
    }
    case 64306:
    {
        returnValue = F("Bruchsaler Str.");
        break;
    }
    case 64307:
    {
        returnValue = F("Bruchsaler Weg");
        break;
    }
    case 64308:
    {
        returnValue = F("Bruchsberg");
        break;
    }
    case 64309:
    {
        returnValue = F("Bruchsche Str.");
        break;
    }
    case 64310:
    {
        returnValue = F("Bruchschneise");
        break;
    }
    case 64311:
    {
        returnValue = F("Bruchsee");
        break;
    }
    case 64312:
    {
        returnValue = F("Bruchseite");
        break;
    }
    case 64313:
    {
        returnValue = F("Bruchsgarten");
        break;
    }
    case 64314:
    {
        returnValue = F("Bruchshecke");
        break;
    }
    case 64315:
    {
        returnValue = F("Bruchshöfenstr.");
        break;
    }
    case 64316:
    {
        returnValue = F("Bruchstedter Str.");
        break;
    }
    case 64317:
    {
        returnValue = F("Bruchstedter Weg");
        break;
    }
    case 64318:
    {
        returnValue = F("Bruchsteinstr.");
        break;
    }
    case 64319:
    {
        returnValue = F("Bruchstellen");
        break;
    }
    case 64320:
    {
        returnValue = F("Bruchstr.");
        break;
    }
    case 64321:
    {
        returnValue = F("Bruchsträssle");
        break;
    }
    case 64322:
    {
        returnValue = F("Bruchstückenweg");
        break;
    }
    case 64323:
    {
        returnValue = F("Bruchstücker");
        break;
    }
    case 64324:
    {
        returnValue = F("Bruchstückweg");
        break;
    }
    case 64325:
    {
        returnValue = F("Bruchsweg");
        break;
    }
    case 64326:
    {
        returnValue = F("Bruchtal");
        break;
    }
    case 64327:
    {
        returnValue = F("Bruchtalweg");
        break;
    }
    case 64328:
    {
        returnValue = F("Bruchtauenstr.");
        break;
    }
    case 64329:
    {
        returnValue = F("Bruchtor");
        break;
    }
    case 64330:
    {
        returnValue = F("Bruchtorf-Ost");
        break;
    }
    case 64331:
    {
        returnValue = F("Bruchtorfer Str.");
        break;
    }
    case 64332:
    {
        returnValue = F("Bruchtorfer Weg");
        break;
    }
    case 64333:
    {
        returnValue = F("Bruchtorstr.");
        break;
    }
    case 64334:
    {
        returnValue = F("Bruchtstr.");
        break;
    }
    case 64335:
    {
        returnValue = F("Bruchwaldweg");
        break;
    }
    case 64336:
    {
        returnValue = F("Bruchwasemstr.");
        break;
    }
    case 64337:
    {
        returnValue = F("Bruchwedel");
        break;
    }
    case 64338:
    {
        returnValue = F("Bruchweg");
        break;
    }
    case 64339:
    {
        returnValue = F("Bruchweiden");
        break;
    }
    case 64340:
    {
        returnValue = F("Bruchweidenstr.");
        break;
    }
    case 64341:
    {
        returnValue = F("Bruchweiher");
        break;
    }
    case 64342:
    {
        returnValue = F("Bruchwies");
        break;
    }
    case 64343:
    {
        returnValue = F("Bruchwiese");
        break;
    }
    case 64344:
    {
        returnValue = F("Bruchwiesen");
        break;
    }
    case 64345:
    {
        returnValue = F("Bruchwiesenanger");
        break;
    }
    case 64346:
    {
        returnValue = F("Bruchwiesendamm");
        break;
    }
    case 64347:
    {
        returnValue = F("Bruchwiesenstr.");
        break;
    }
    case 64348:
    {
        returnValue = F("Bruchwiesenweg");
        break;
    }
    case 64349:
    {
        returnValue = F("Bruchwiesstr.");
        break;
    }
    case 64350:
    {
        returnValue = F("Bruchwischberg");
        break;
    }
    case 64351:
    {
        returnValue = F("Bruchzaun");
        break;
    }
    case 64352:
    {
        returnValue = F("Bruchäckerweg");
        break;
    }
    case 64353:
    {
        returnValue = F("Bruck");
        break;
    }
    case 64354:
    {
        returnValue = F("Bruckacker");
        break;
    }
    case 64355:
    {
        returnValue = F("Bruckauerstr.");
        break;
    }
    case 64356:
    {
        returnValue = F("Bruckauweg");
        break;
    }
    case 64357:
    {
        returnValue = F("Bruckbach");
        break;
    }
    case 64358:
    {
        returnValue = F("Bruckbachweg");
        break;
    }
    case 64359:
    {
        returnValue = F("Bruckbauerstr.");
        break;
    }
    case 64360:
    {
        returnValue = F("Bruckberg");
        break;
    }
    case 64361:
    {
        returnValue = F("Bruckbergstr.");
        break;
    }
    case 64362:
    {
        returnValue = F("Bruckdaelweg");
        break;
    }
    case 64363:
    {
        returnValue = F("Bruckdorf");
        break;
    }
    case 64364:
    {
        returnValue = F("Bruckdorfer Str.");
        break;
    }
    case 64365:
    {
        returnValue = F("Brucke");
        break;
    }
    case 64366:
    {
        returnValue = F("Bruckenackerhof");
        break;
    }
    case 64367:
    {
        returnValue = F("Bruckenackerstr.");
        break;
    }
    case 64368:
    {
        returnValue = F("Bruckenbachstr.");
        break;
    }
    case 64369:
    {
        returnValue = F("Bruckenfeldstr.");
        break;
    }
    case 64370:
    {
        returnValue = F("Bruckensteig");
        break;
    }
    case 64371:
    {
        returnValue = F("Bruckenstr.");
        break;
    }
    case 64372:
    {
        returnValue = F("Bruckenwald");
        break;
    }
    case 64373:
    {
        returnValue = F("Bruckenwasen");
        break;
    }
    case 64374:
    {
        returnValue = F("Bruckenwiesen");
        break;
    }
    case 64375:
    {
        returnValue = F("Bruckenäcker");
        break;
    }
    case 64376:
    {
        returnValue = F("Bruckenäckerweg");
        break;
    }
    case 64377:
    {
        returnValue = F("Brucker Dorfstr.");
        break;
    }
    case 64378:
    {
        returnValue = F("Brucker Feldweg");
        break;
    }
    case 64379:
    {
        returnValue = F("Brucker Steigweg");
        break;
    }
    case 64380:
    {
        returnValue = F("Brucker Str.");
        break;
    }
    case 64381:
    {
        returnValue = F("Brucker Weg");
        break;
    }
    case 64382:
    {
        returnValue = F("Bruckertshofer Str.");
        break;
    }
    case 64383:
    {
        returnValue = F("Bruckespan");
        break;
    }
    case 64384:
    {
        returnValue = F("Bruckfeld");
        break;
    }
    case 64385:
    {
        returnValue = F("Bruckfelder Str.");
        break;
    }
    case 64386:
    {
        returnValue = F("Bruckfeldstr.");
        break;
    }
    case 64387:
    {
        returnValue = F("Bruckfelsstr.");
        break;
    }
    case 64388:
    {
        returnValue = F("Bruckgartenweg");
        break;
    }
    case 64389:
    {
        returnValue = F("Bruckgasse");
        break;
    }
    case 64390:
    {
        returnValue = F("Bruckgrabenstr.");
        break;
    }
    case 64391:
    {
        returnValue = F("Bruckhalde");
        break;
    }
    case 64392:
    {
        returnValue = F("Bruckhauser Str.");
        break;
    }
    case 64393:
    {
        returnValue = F("Bruckhausfeld");
        break;
    }
    case 64394:
    {
        returnValue = F("Bruckhof");
        break;
    }
    case 64395:
    {
        returnValue = F("Bruckhofstr.");
        break;
    }
    case 64396:
    {
        returnValue = F("Bruckhofweg");
        break;
    }
    case 64397:
    {
        returnValue = F("Bruckhöhe");
        break;
    }
    case 64398:
    {
        returnValue = F("Bruckhölzer");
        break;
    }
    case 64399:
    {
        returnValue = F("Bruckhölzleweg");
        break;
    }
    case 64400:
    {
        returnValue = F("Brucklacher Str.");
        break;
    }
    case 64401:
    {
        returnValue = F("Bruckleite");
        break;
    }
    case 64402:
    {
        returnValue = F("Brucklesleite");
        break;
    }
    case 64403:
    {
        returnValue = F("Bruckmahd");
        break;
    }
    case 64404:
    {
        returnValue = F("Bruckmairstr.");
        break;
    }
    case 64405:
    {
        returnValue = F("Bruckmannshofweg");
        break;
    }
    case 64406:
    {
        returnValue = F("Bruckmannstr.");
        break;
    }
    case 64407:
    {
        returnValue = F("Bruckmatt");
        break;
    }
    case 64408:
    {
        returnValue = F("Bruckmatten");
        break;
    }
    case 64409:
    {
        returnValue = F("Bruckmattenweg");
        break;
    }
    case 64410:
    {
        returnValue = F("Bruckmeierstr.");
        break;
    }
    case 64411:
    {
        returnValue = F("Bruckmeierweg");
        break;
    }
    case 64412:
    {
        returnValue = F("Bruckmeisterweg");
        break;
    }
    case 64413:
    {
        returnValue = F("Bruckmißsträßle");
        break;
    }
    case 64414:
    {
        returnValue = F("Bruckmähder");
        break;
    }
    case 64415:
    {
        returnValue = F("Bruckmühl");
        break;
    }
    case 64416:
    {
        returnValue = F("Bruckmühle");
        break;
    }
    case 64417:
    {
        returnValue = F("Bruckmühlenstr.");
        break;
    }
    case 64418:
    {
        returnValue = F("Bruckmühlenweg");
        break;
    }
    case 64419:
    {
        returnValue = F("Bruckmühler Str.");
        break;
    }
    case 64420:
    {
        returnValue = F("Bruckmühlstr.");
        break;
    }
    case 64421:
    {
        returnValue = F("Bruckmühlweg");
        break;
    }
    case 64422:
    {
        returnValue = F("Brucknergasse");
        break;
    }
    case 64423:
    {
        returnValue = F("Brucknerhof");
        break;
    }
    case 64424:
    {
        returnValue = F("Brucknerplatz");
        break;
    }
    case 64425:
    {
        returnValue = F("Brucknerstr.");
        break;
    }
    case 64426:
    {
        returnValue = F("Brucknerweg");
        break;
    }
    case 64427:
    {
        returnValue = F("Bruckpoort");
        break;
    }
    case 64428:
    {
        returnValue = F("Bruckrath");
        break;
    }
    case 64429:
    {
        returnValue = F("Bruckschenweg");
        break;
    }
    case 64430:
    {
        returnValue = F("Bruckschmied");
        break;
    }
    case 64431:
    {
        returnValue = F("Brucksteig");
        break;
    }
    case 64432:
    {
        returnValue = F("Brucksteigstr.");
        break;
    }
    case 64433:
    {
        returnValue = F("Bruckstr.");
        break;
    }
    case 64434:
    {
        returnValue = F("Bruckthal");
        break;
    }
    case 64435:
    {
        returnValue = F("Bruckthaler Str.");
        break;
    }
    case 64436:
    {
        returnValue = F("Brucktorstr.");
        break;
    }
    case 64437:
    {
        returnValue = F("Bruckwaldweg");
        break;
    }
    case 64438:
    {
        returnValue = F("Bruckwasenstr.");
        break;
    }
    case 64439:
    {
        returnValue = F("Bruckwasenweg");
        break;
    }
    case 64440:
    {
        returnValue = F("Bruckweg");
        break;
    }
    case 64441:
    {
        returnValue = F("Bruckweg Ausfahrt");
        break;
    }
    case 64442:
    {
        returnValue = F("Bruckweiherstr.");
        break;
    }
    case 64443:
    {
        returnValue = F("Bruckwies");
        break;
    }
    case 64444:
    {
        returnValue = F("Bruckwiese");
        break;
    }
    case 64445:
    {
        returnValue = F("Bruckwiesen");
        break;
    }
    case 64446:
    {
        returnValue = F("Bruckwiesenstr.");
        break;
    }
    case 64447:
    {
        returnValue = F("Bruckwiesenweg");
        break;
    }
    case 64448:
    {
        returnValue = F("Bruckäcker");
        break;
    }
    case 64449:
    {
        returnValue = F("Bruckäckerlein");
        break;
    }
    case 64450:
    {
        returnValue = F("Bruckäckerstr.");
        break;
    }
    case 64451:
    {
        returnValue = F("Bruckäckerweg");
        break;
    }
    case 64452:
    {
        returnValue = F("Brucköschweg");
        break;
    }
    case 64453:
    {
        returnValue = F("Bruder-Anselm-Str.");
        break;
    }
    case 64454:
    {
        returnValue = F("Bruder-Bonifatius-Weg");
        break;
    }
    case 64455:
    {
        returnValue = F("Bruder-Eberhardstr.");
        break;
    }
    case 64456:
    {
        returnValue = F("Bruder-Edelfried-Str.");
        break;
    }
    case 64457:
    {
        returnValue = F("Bruder-Egdon-Str.");
        break;
    }
    case 64458:
    {
        returnValue = F("Bruder-Engler Weg");
        break;
    }
    case 64459:
    {
        returnValue = F("Bruder-Georg-Weg");
        break;
    }
    case 64460:
    {
        returnValue = F("Bruder-Gregorio-Weg");
        break;
    }
    case 64461:
    {
        returnValue = F("Bruder-Ildefons-Str.");
        break;
    }
    case 64462:
    {
        returnValue = F("Bruder-Klaus-Str.");
        break;
    }
    case 64463:
    {
        returnValue = F("Bruder-Klaus-Weg");
        break;
    }
    case 64464:
    {
        returnValue = F("Bruder-Konrad-Str.");
        break;
    }
    case 64465:
    {
        returnValue = F("Bruder-Konrad-Weg");
        break;
    }
    case 64466:
    {
        returnValue = F("Bruderbergstr.");
        break;
    }
    case 64467:
    {
        returnValue = F("Bruderbergweg");
        break;
    }
    case 64468:
    {
        returnValue = F("Bruderbruch");
        break;
    }
    case 64469:
    {
        returnValue = F("Bruderdobelweg");
        break;
    }
    case 64470:
    {
        returnValue = F("Brudereichenweg");
        break;
    }
    case 64471:
    {
        returnValue = F("Bruderfelsstr.");
        break;
    }
    case 64472:
    {
        returnValue = F("Brudergartenweg");
        break;
    }
    case 64473:
    {
        returnValue = F("Brudergasse");
        break;
    }
    case 64474:
    {
        returnValue = F("Brudergäßchen");
        break;
    }
    case 64475:
    {
        returnValue = F("Bruderhalde");
        break;
    }
    case 64476:
    {
        returnValue = F("Bruderhaldenweg");
        break;
    }
    case 64477:
    {
        returnValue = F("Bruderhaus");
        break;
    }
    case 64478:
    {
        returnValue = F("Bruderhausallee");
        break;
    }
    case 64479:
    {
        returnValue = F("Bruderhausweg");
        break;
    }
    case 64480:
    {
        returnValue = F("Bruderhof");
        break;
    }
    case 64481:
    {
        returnValue = F("Bruderhofstr.");
        break;
    }
    case 64482:
    {
        returnValue = F("Bruderholzer Str.");
        break;
    }
    case 64483:
    {
        returnValue = F("Bruderholzweg");
        break;
    }
    case 64484:
    {
        returnValue = F("Bruderhäusledobelweg");
        break;
    }
    case 64485:
    {
        returnValue = F("Bruderkirchle");
        break;
    }
    case 64486:
    {
        returnValue = F("Bruderklingenweg");
        break;
    }
    case 64487:
    {
        returnValue = F("Bruderlohe");
        break;
    }
    case 64488:
    {
        returnValue = F("Brudermannstr.");
        break;
    }
    case 64489:
    {
        returnValue = F("Brudermichelstal");
        break;
    }
    case 64490:
    {
        returnValue = F("Brudermühle");
        break;
    }
    case 64491:
    {
        returnValue = F("Brudermühlenweg");
        break;
    }
    case 64492:
    {
        returnValue = F("Bruderschaftsgasse");
        break;
    }
    case 64493:
    {
        returnValue = F("Bruderschaftsstr.");
        break;
    }
    case 64494:
    {
        returnValue = F("Bruderschaftsweg");
        break;
    }
    case 64495:
    {
        returnValue = F("Brudersdorf");
        break;
    }
    case 64496:
    {
        returnValue = F("Brudersdorfer Str.");
        break;
    }
    case 64497:
    {
        returnValue = F("Bruderserb");
        break;
    }
    case 64498:
    {
        returnValue = F("Brudersklingenweg");
        break;
    }
    case 64499:
    {
        returnValue = F("Brudersteige");
        break;
    }
    case 64500:
    {
        returnValue = F("Bruderstiegweg");
        break;
    }
    case 64501:
    {
        returnValue = F("Bruderstr.");
        break;
    }
    case 64502:
    {
        returnValue = F("Bruderswaldweg");
        break;
    }
    case 64503:
    {
        returnValue = F("Brudertalstr.");
        break;
    }
    case 64504:
    {
        returnValue = F("Brudertalsweg");
        break;
    }
    case 64505:
    {
        returnValue = F("Brudertalweg");
        break;
    }
    case 64506:
    {
        returnValue = F("Bruderwaldstr.");
        break;
    }
    case 64507:
    {
        returnValue = F("Bruderweg");
        break;
    }
    case 64508:
    {
        returnValue = F("Bruderwiesenstr.");
        break;
    }
    case 64509:
    {
        returnValue = F("Bruderzaunweg");
        break;
    }
    case 64510:
    {
        returnValue = F("Brudesweg");
        break;
    }
    case 64511:
    {
        returnValue = F("Brudtlachtstr.");
        break;
    }
    case 64512:
    {
        returnValue = F("Brueckenstr.");
        break;
    }
    case 64513:
    {
        returnValue = F("Brueder-Becker-Str.");
        break;
    }
    case 64514:
    {
        returnValue = F("Bruegelstr.");
        break;
    }
    case 64515:
    {
        returnValue = F("Bruegelweg");
        break;
    }
    case 64516:
    {
        returnValue = F("Brueghelstr.");
        break;
    }
    case 64517:
    {
        returnValue = F("Bruelweg");
        break;
    }
    case 64518:
    {
        returnValue = F("Bruersgang");
        break;
    }
    case 64519:
    {
        returnValue = F("Brues Gang");
        break;
    }
    case 64520:
    {
        returnValue = F("Brufertstr.");
        break;
    }
    case 64521:
    {
        returnValue = F("Brugasse");
        break;
    }
    case 64522:
    {
        returnValue = F("Brugesstr.");
        break;
    }
    case 64523:
    {
        returnValue = F("Brugg");
        break;
    }
    case 64524:
    {
        returnValue = F("Bruggach");
        break;
    }
    case 64525:
    {
        returnValue = F("Bruggastr.");
        break;
    }
    case 64526:
    {
        returnValue = F("Bruggen");
        break;
    }
    case 64527:
    {
        returnValue = F("Bruggener Str.");
        break;
    }
    case 64528:
    {
        returnValue = F("Brugger Str.");
        break;
    }
    case 64529:
    {
        returnValue = F("Brugger's Seepark");
        break;
    }
    case 64530:
    {
        returnValue = F("Bruggergasse");
        break;
    }
    case 64531:
    {
        returnValue = F("Bruggerweg");
        break;
    }
    case 64532:
    {
        returnValue = F("Bruggweg");
        break;
    }
    case 64533:
    {
        returnValue = F("Bruhbergweg");
        break;
    }
    case 64534:
    {
        returnValue = F("Bruhenhausenwinkel");
        break;
    }
    case 64535:
    {
        returnValue = F("Bruhlsweg");
        break;
    }
    case 64536:
    {
        returnValue = F("Bruhmweg");
        break;
    }
    case 64537:
    {
        returnValue = F("Bruhnkaten");
        break;
    }
    case 64538:
    {
        returnValue = F("Bruhnkatener Weg");
        break;
    }
    case 64539:
    {
        returnValue = F("Bruhnsche Koppel");
        break;
    }
    case 64540:
    {
        returnValue = F("Bruhnskoppeler Str.");
        break;
    }
    case 64541:
    {
        returnValue = F("Bruhnskoppeler Weg");
        break;
    }
    case 64542:
    {
        returnValue = F("Bruhnsstr.");
        break;
    }
    case 64543:
    {
        returnValue = F("Bruhnstr.");
        break;
    }
    case 64544:
    {
        returnValue = F("Bruhrainstr.");
        break;
    }
    case 64545:
    {
        returnValue = F("Bruhrainweg");
        break;
    }
    case 64546:
    {
        returnValue = F("Bruhrückstr.");
        break;
    }
    case 64547:
    {
        returnValue = F("Bruhweg");
        break;
    }
    case 64548:
    {
        returnValue = F("Brukenthalweg");
        break;
    }
    case 64549:
    {
        returnValue = F("Brukischweg");
        break;
    }
    case 64550:
    {
        returnValue = F("Brukswai");
        break;
    }
    case 64551:
    {
        returnValue = F("Bruktererstr.");
        break;
    }
    case 64552:
    {
        returnValue = F("Bruktererweg");
        break;
    }
    case 64553:
    {
        returnValue = F("Brulandstr.");
        break;
    }
    case 64554:
    {
        returnValue = F("Brullser Str.");
        break;
    }
    case 64555:
    {
        returnValue = F("Brumather Str.");
        break;
    }
    case 64556:
    {
        returnValue = F("Brumbyer Str.");
        break;
    }
    case 64557:
    {
        returnValue = F("Brumecke");
        break;
    }
    case 64558:
    {
        returnValue = F("Brumer Feld");
        break;
    }
    case 64559:
    {
        returnValue = F("Brumersweg");
        break;
    }
    case 64560:
    {
        returnValue = F("Brumhagen");
        break;
    }
    case 64561:
    {
        returnValue = F("Brumisweg");
        break;
    }
    case 64562:
    {
        returnValue = F("Brumleviusring");
        break;
    }
    case 64563:
    {
        returnValue = F("Brumlikweg");
        break;
    }
    case 64564:
    {
        returnValue = F("Brumlingsen");
        break;
    }
    case 64565:
    {
        returnValue = F("Brumlingser Weg");
        break;
    }
    case 64566:
    {
        returnValue = F("Brumloopsweg");
        break;
    }
    case 64567:
    {
        returnValue = F("Brummbachstr.");
        break;
    }
    case 64568:
    {
        returnValue = F("Brummelbrede");
        break;
    }
    case 64569:
    {
        returnValue = F("Brummelburgstr.");
        break;
    }
    case 64570:
    {
        returnValue = F("Brummelhoop");
        break;
    }
    case 64571:
    {
        returnValue = F("Brummerackerweg");
        break;
    }
    case 64572:
    {
        returnValue = F("Brummerforth");
        break;
    }
    case 64573:
    {
        returnValue = F("Brummergässle");
        break;
    }
    case 64574:
    {
        returnValue = F("Brummerhöfenweg");
        break;
    }
    case 64575:
    {
        returnValue = F("Brummerlochweg");
        break;
    }
    case 64576:
    {
        returnValue = F("Brummerlohweg");
        break;
    }
    case 64577:
    {
        returnValue = F("Brummerweg");
        break;
    }
    case 64578:
    {
        returnValue = F("Brummkenstr.");
        break;
    }
    case 64579:
    {
        returnValue = F("Brummkoppel");
        break;
    }
    case 64580:
    {
        returnValue = F("Brumswinkelweg");
        break;
    }
    case 64581:
    {
        returnValue = F("Brunabendstr.");
        break;
    }
    case 64582:
    {
        returnValue = F("Brunacker");
        break;
    }
    case 64583:
    {
        returnValue = F("Brunartstr.");
        break;
    }
    case 64584:
    {
        returnValue = F("Brunauer Weg");
        break;
    }
    case 64585:
    {
        returnValue = F("Brunauerstr.");
        break;
    }
    case 64586:
    {
        returnValue = F("Brunautal");
        break;
    }
    case 64587:
    {
        returnValue = F("Brunckstr.");
        break;
    }
    case 64588:
    {
        returnValue = F("Brundellenweg");
        break;
    }
    case 64589:
    {
        returnValue = F("Brunder Str.");
        break;
    }
    case 64590:
    {
        returnValue = F("Brundershausener Weg");
        break;
    }
    case 64591:
    {
        returnValue = F("Brundorfer Weg");
        break;
    }
    case 64592:
    {
        returnValue = F("Brundtlandweg");
        break;
    }
    case 64593:
    {
        returnValue = F("Brunecker Str.");
        break;
    }
    case 64594:
    {
        returnValue = F("Brunecker Weg");
        break;
    }
    case 64595:
    {
        returnValue = F("Brunefeldsweg");
        break;
    }
    case 64596:
    {
        returnValue = F("Brunellenweg");
        break;
    }
    case 64597:
    {
        returnValue = F("Brunepromenade");
        break;
    }
    case 64598:
    {
        returnValue = F("Brunestr.");
        break;
    }
    case 64599:
    {
        returnValue = F("Bruneärmel");
        break;
    }
    case 64600:
    {
        returnValue = F("Brunfeldstr.");
        break;
    }
    case 64601:
    {
        returnValue = F("Brunftacker-Richtweg");
        break;
    }
    case 64602:
    {
        returnValue = F("Brunger Str.");
        break;
    }
    case 64603:
    {
        returnValue = F("Brungerststr.");
        break;
    }
    case 64604:
    {
        returnValue = F("Brungskamp");
        break;
    }
    case 64605:
    {
        returnValue = F("Brunhildensteg");
        break;
    }
    case 64606:
    {
        returnValue = F("Brunhildenstr.");
        break;
    }
    case 64607:
    {
        returnValue = F("Brunhildenweg");
        break;
    }
    case 64608:
    {
        returnValue = F("Brunhildestr.");
        break;
    }
    case 64609:
    {
        returnValue = F("Brunhildeweg");
        break;
    }
    case 64610:
    {
        returnValue = F("Brunhildstr.");
        break;
    }
    case 64611:
    {
        returnValue = F("Brunhildweg");
        break;
    }
    case 64612:
    {
        returnValue = F("Brunhof");
        break;
    }
    case 64613:
    {
        returnValue = F("Brunhuberweg");
        break;
    }
    case 64614:
    {
        returnValue = F("Brunicherberg");
        break;
    }
    case 64615:
    {
        returnValue = F("Brunichoweg");
        break;
    }
    case 64616:
    {
        returnValue = F("Brunings Kamp");
        break;
    }
    case 64617:
    {
        returnValue = F("Brunirode");
        break;
    }
    case 64618:
    {
        returnValue = F("Brunkauer Dorfstr.");
        break;
    }
    case 64619:
    {
        returnValue = F("Brunkauer Weg");
        break;
    }
    case 64620:
    {
        returnValue = F("Brunkelpfad");
        break;
    }
    case 64621:
    {
        returnValue = F("Brunkelsfeld");
        break;
    }
    case 64622:
    {
        returnValue = F("Brunkelskamp");
        break;
    }
    case 64623:
    {
        returnValue = F("Brunkelstr.");
        break;
    }
    case 64624:
    {
        returnValue = F("Brunkelsweg");
        break;
    }
    case 64625:
    {
        returnValue = F("Brunkelweg");
        break;
    }
    case 64626:
    {
        returnValue = F("Brunkelwiese");
        break;
    }
    case 64627:
    {
        returnValue = F("Brunkenbergstr.");
        break;
    }
    case 64628:
    {
        returnValue = F("Brunkens Weg");
        break;
    }
    case 64629:
    {
        returnValue = F("Brunkensiedlung");
        break;
    }
    case 64630:
    {
        returnValue = F("Brunkenstein");
        break;
    }
    case 64631:
    {
        returnValue = F("Brunkensteinstr.");
        break;
    }
    case 64632:
    {
        returnValue = F("Brunkenwinkel");
        break;
    }
    case 64633:
    {
        returnValue = F("Brunkers Kamp");
        break;
    }
    case 64634:
    {
        returnValue = F("Brunkhorststr.");
        break;
    }
    case 64635:
    {
        returnValue = F("Brunn");
        break;
    }
    case 64636:
    {
        returnValue = F("Brunn-Bergweg");
        break;
    }
    case 64637:
    {
        returnValue = F("Brunnacker");
        break;
    }
    case 64638:
    {
        returnValue = F("Brunnackerweg");
        break;
    }
    case 64639:
    {
        returnValue = F("Brunnad");
        break;
    }
    case 64640:
    {
        returnValue = F("Brunnaderner Weg");
        break;
    }
    case 64641:
    {
        returnValue = F("Brunnaderstr.");
        break;
    }
    case 64642:
    {
        returnValue = F("Brunnanger");
        break;
    }
    case 64643:
    {
        returnValue = F("Brunnangerstr.");
        break;
    }
    case 64644:
    {
        returnValue = F("Brunnau");
        break;
    }
    case 64645:
    {
        returnValue = F("Brunnaustr.");
        break;
    }
    case 64646:
    {
        returnValue = F("Brunnbachstr.");
        break;
    }
    case 64647:
    {
        returnValue = F("Brunnberg");
        break;
    }
    case 64648:
    {
        returnValue = F("Brunnbergstr.");
        break;
    }
    case 64649:
    {
        returnValue = F("Brunnbergweg");
        break;
    }
    case 64650:
    {
        returnValue = F("Brunnbichl");
        break;
    }
    case 64651:
    {
        returnValue = F("Brunnbühlstr.");
        break;
    }
    case 64652:
    {
        returnValue = F("Brunndobl");
        break;
    }
    case 64653:
    {
        returnValue = F("Brunndoblweg");
        break;
    }
    case 64654:
    {
        returnValue = F("Brunneck");
        break;
    }
    case 64655:
    {
        returnValue = F("Brunnederstr.");
        break;
    }
    case 64656:
    {
        returnValue = F("Brunnegasse");
        break;
    }
    case 64657:
    {
        returnValue = F("Brunnemairstr.");
        break;
    }
    case 64658:
    {
        returnValue = F("Brunnen");
        break;
    }
    case 64659:
    {
        returnValue = F("Brunnen Badem");
        break;
    }
    case 64660:
    {
        returnValue = F("Brunnen Schneise");
        break;
    }
    case 64661:
    {
        returnValue = F("Brunnen-Geräumt");
        break;
    }
    case 64662:
    {
        returnValue = F("Brunnen-Heerbachstr.");
        break;
    }
    case 64663:
    {
        returnValue = F("Brunnen-Schneise");
        break;
    }
    case 64664:
    {
        returnValue = F("Brunnenackerweg");
        break;
    }
    case 64665:
    {
        returnValue = F("Brunnenallee");
        break;
    }
    case 64666:
    {
        returnValue = F("Brunnenaue");
        break;
    }
    case 64667:
    {
        returnValue = F("Brunnenauschartensteig");
        break;
    }
    case 64668:
    {
        returnValue = F("Brunnenbachgasse");
        break;
    }
    case 64669:
    {
        returnValue = F("Brunnenbachstr.");
        break;
    }
    case 64670:
    {
        returnValue = F("Brunnenbachsweg");
        break;
    }
    case 64671:
    {
        returnValue = F("Brunnenbau-Conrad-Str.");
        break;
    }
    case 64672:
    {
        returnValue = F("Brunnenbek");
        break;
    }
    case 64673:
    {
        returnValue = F("Brunnenberg");
        break;
    }
    case 64674:
    {
        returnValue = F("Brunnenbergle");
        break;
    }
    case 64675:
    {
        returnValue = F("Brunnenberglein");
        break;
    }
    case 64676:
    {
        returnValue = F("Brunnenbergring");
        break;
    }
    case 64677:
    {
        returnValue = F("Brunnenbergstr.");
        break;
    }
    case 64678:
    {
        returnValue = F("Brunnenbergweg");
        break;
    }
    case 64679:
    {
        returnValue = F("Brunnenblick");
        break;
    }
    case 64680:
    {
        returnValue = F("Brunnenbreite");
        break;
    }
    case 64681:
    {
        returnValue = F("Brunnenburgstr.");
        break;
    }
    case 64682:
    {
        returnValue = F("Brunnenbuschweg");
        break;
    }
    case 64683:
    {
        returnValue = F("Brunnenbühl");
        break;
    }
    case 64684:
    {
        returnValue = F("Brunnenbühlstr.");
        break;
    }
    case 64685:
    {
        returnValue = F("Brunnenbühndstr.");
        break;
    }
    case 64686:
    {
        returnValue = F("Brunnendeich");
        break;
    }
    case 64687:
    {
        returnValue = F("Brunneneck");
        break;
    }
    case 64688:
    {
        returnValue = F("Brunnener Str.");
        break;
    }
    case 64689:
    {
        returnValue = F("Brunnenfeld");
        break;
    }
    case 64690:
    {
        returnValue = F("Brunnenfeldgasse");
        break;
    }
    case 64691:
    {
        returnValue = F("Brunnenfeldstr.");
        break;
    }
    case 64692:
    {
        returnValue = F("Brunnenfeldweg");
        break;
    }
    case 64693:
    {
        returnValue = F("Brunnenfloß");
        break;
    }
    case 64694:
    {
        returnValue = F("Brunnengang");
        break;
    }
    case 64695:
    {
        returnValue = F("Brunnengarten");
        break;
    }
    case 64696:
    {
        returnValue = F("Brunnengasse");
        break;
    }
    case 64697:
    {
        returnValue = F("Brunnengewann");
        break;
    }
    case 64698:
    {
        returnValue = F("Brunnengraben");
        break;
    }
    case 64699:
    {
        returnValue = F("Brunnengräberstr.");
        break;
    }
    case 64700:
    {
        returnValue = F("Brunnengärten");
        break;
    }
    case 64701:
    {
        returnValue = F("Brunnengässchen");
        break;
    }
    case 64702:
    {
        returnValue = F("Brunnengässel");
        break;
    }
    case 64703:
    {
        returnValue = F("Brunnengässle");
        break;
    }
    case 64704:
    {
        returnValue = F("Brunnengäßchen");
        break;
    }
    case 64705:
    {
        returnValue = F("Brunnengäßle");
        break;
    }
    case 64706:
    {
        returnValue = F("Brunnenhalde");
        break;
    }
    case 64707:
    {
        returnValue = F("Brunnenhaldenstr.");
        break;
    }
    case 64708:
    {
        returnValue = F("Brunnenhaldensträßle");
        break;
    }
    case 64709:
    {
        returnValue = F("Brunnenhaldenweg");
        break;
    }
    case 64710:
    {
        returnValue = F("Brunnenhaldestr.");
        break;
    }
    case 64711:
    {
        returnValue = F("Brunnenhaldeweg");
        break;
    }
    case 64712:
    {
        returnValue = F("Brunnenhausweg");
        break;
    }
    case 64713:
    {
        returnValue = F("Brunnenhauweg");
        break;
    }
    case 64714:
    {
        returnValue = F("Brunnenhof");
        break;
    }
    case 64715:
    {
        returnValue = F("Brunnenhofweg");
        break;
    }
    case 64716:
    {
        returnValue = F("Brunnenholzweg");
        break;
    }
    case 64717:
    {
        returnValue = F("Brunnenhäuserstr.");
        break;
    }
    case 64718:
    {
        returnValue = F("Brunnenhäusle");
        break;
    }
    case 64719:
    {
        returnValue = F("Brunnenhöhe");
        break;
    }
    case 64720:
    {
        returnValue = F("Brunnenhöhle");
        break;
    }
    case 64721:
    {
        returnValue = F("Brunnenhübel");
        break;
    }
    case 64722:
    {
        returnValue = F("Brunnenkamp");
        break;
    }
    case 64723:
    {
        returnValue = F("Brunnenkellerweg");
        break;
    }
    case 64724:
    {
        returnValue = F("Brunnenklinge");
        break;
    }
    case 64725:
    {
        returnValue = F("Brunnenkopfstr.");
        break;
    }
    case 64726:
    {
        returnValue = F("Brunnenkressklinge");
        break;
    }
    case 64727:
    {
        returnValue = F("Brunnenleite");
        break;
    }
    case 64728:
    {
        returnValue = F("Brunnenmahd");
        break;
    }
    case 64729:
    {
        returnValue = F("Brunnenmatt");
        break;
    }
    case 64730:
    {
        returnValue = F("Brunnenmatten");
        break;
    }
    case 64731:
    {
        returnValue = F("Brunnenmichelsweg");
        break;
    }
    case 64732:
    {
        returnValue = F("Brunnenmähder");
        break;
    }
    case 64733:
    {
        returnValue = F("Brunnenmättle");
        break;
    }
    case 64734:
    {
        returnValue = F("Brunnenmühle");
        break;
    }
    case 64735:
    {
        returnValue = F("Brunnenmühlstr.");
        break;
    }
    case 64736:
    {
        returnValue = F("Brunnenpaint");
        break;
    }
    case 64737:
    {
        returnValue = F("Brunnenpark");
        break;
    }
    case 64738:
    {
        returnValue = F("Brunnenpassage");
        break;
    }
    case 64739:
    {
        returnValue = F("Brunnenpfad");
        break;
    }
    case 64740:
    {
        returnValue = F("Brunnenplas");
        break;
    }
    case 64741:
    {
        returnValue = F("Brunnenplatz");
        break;
    }
    case 64742:
    {
        returnValue = F("Brunnenplatz Dauborn");
        break;
    }
    case 64743:
    {
        returnValue = F("Brunnenplatzq");
        break;
    }
    case 64744:
    {
        returnValue = F("Brunnenpromenade");
        break;
    }
    case 64745:
    {
        returnValue = F("Brunnenquell");
        break;
    }
    case 64746:
    {
        returnValue = F("Brunnenrain");
        break;
    }
    case 64747:
    {
        returnValue = F("Brunnenrainstr.");
        break;
    }
    case 64748:
    {
        returnValue = F("Brunnenrainweg");
        break;
    }
    case 64749:
    {
        returnValue = F("Brunnenrasen");
        break;
    }
    case 64750:
    {
        returnValue = F("Brunnenriedstr.");
        break;
    }
    case 64751:
    {
        returnValue = F("Brunnenring");
        break;
    }
    case 64752:
    {
        returnValue = F("Brunnenrinne");
        break;
    }
    case 64753:
    {
        returnValue = F("Brunnenschneiderstr.");
        break;
    }
    case 64754:
    {
        returnValue = F("Brunnenschneise");
        break;
    }
    case 64755:
    {
        returnValue = F("Brunnensiefen");
        break;
    }
    case 64756:
    {
        returnValue = F("Brunnensteg");
        break;
    }
    case 64757:
    {
        returnValue = F("Brunnensteig");
        break;
    }
    case 64758:
    {
        returnValue = F("Brunnensteige");
        break;
    }
    case 64759:
    {
        returnValue = F("Brunnenstieg");
        break;
    }
    case 64760:
    {
        returnValue = F("Brunnenstr.");
        break;
    }
    case 64761:
    {
        returnValue = F("Brunnenstr. / Hirschstr.");
        break;
    }
    case 64762:
    {
        returnValue = F("Brunnensträßchen");
        break;
    }
    case 64763:
    {
        returnValue = F("Brunnenstube");
        break;
    }
    case 64764:
    {
        returnValue = F("Brunnenstubenweg");
        break;
    }
    case 64765:
    {
        returnValue = F("Brunnenstubeweg");
        break;
    }
    case 64766:
    {
        returnValue = F("Brunnenstückweg");
        break;
    }
    case 64767:
    {
        returnValue = F("Brunnental");
        break;
    }
    case 64768:
    {
        returnValue = F("Brunnentalostweg");
        break;
    }
    case 64769:
    {
        returnValue = F("Brunnentalweg");
        break;
    }
    case 64770:
    {
        returnValue = F("Brunnentalwestweg");
        break;
    }
    case 64771:
    {
        returnValue = F("Brunnenteichstr.");
        break;
    }
    case 64772:
    {
        returnValue = F("Brunnenteichweg");
        break;
    }
    case 64773:
    {
        returnValue = F("Brunnentobel");
        break;
    }
    case 64774:
    {
        returnValue = F("Brunnentobelweg");
        break;
    }
    case 64775:
    {
        returnValue = F("Brunnentrogweg");
        break;
    }
    case 64776:
    {
        returnValue = F("Brunnentrögerweg");
        break;
    }
    case 64777:
    {
        returnValue = F("Brunnentwete");
        break;
    }
    case 64778:
    {
        returnValue = F("Brunnentälestr.");
        break;
    }
    case 64779:
    {
        returnValue = F("Brunnenwaldrundweg");
        break;
    }
    case 64780:
    {
        returnValue = F("Brunnenwasen");
        break;
    }
    case 64781:
    {
        returnValue = F("Brunnenwasenweg");
        break;
    }
    case 64782:
    {
        returnValue = F("Brunnenweg");
        break;
    }
    case 64783:
    {
        returnValue = F("Brunnenweiler");
        break;
    }
    case 64784:
    {
        returnValue = F("Brunnenweilerstr.");
        break;
    }
    case 64785:
    {
        returnValue = F("Brunnenwies");
        break;
    }
    case 64786:
    {
        returnValue = F("Brunnenwiese");
        break;
    }
    case 64787:
    {
        returnValue = F("Brunnenwiesen");
        break;
    }
    case 64788:
    {
        returnValue = F("Brunnenwiesenhof");
        break;
    }
    case 64789:
    {
        returnValue = F("Brunnenwiesenpfad");
        break;
    }
    case 64790:
    {
        returnValue = F("Brunnenwiesenstr.");
        break;
    }
    case 64791:
    {
        returnValue = F("Brunnenwiesenweg");
        break;
    }
    case 64792:
    {
        returnValue = F("Brunnenwiesweg");
        break;
    }
    case 64793:
    {
        returnValue = F("Brunnenwinkel");
        break;
    }
    case 64794:
    {
        returnValue = F("Brunnenwörthstr.");
        break;
    }
    case 64795:
    {
        returnValue = F("Brunnenäcker");
        break;
    }
    case 64796:
    {
        returnValue = F("Brunnenäckerstr.");
        break;
    }
    case 64797:
    {
        returnValue = F("Brunnenäckerweg");
        break;
    }
    case 64798:
    {
        returnValue = F("Brunnenösch");
        break;
    }
    case 64799:
    {
        returnValue = F("Brunner Feldweg");
        break;
    }
    case 64800:
    {
        returnValue = F("Brunner Hauptstr.");
        break;
    }
    case 64801:
    {
        returnValue = F("Brunner Moorweg");
        break;
    }
    case 64802:
    {
        returnValue = F("Brunner Str.");
        break;
    }
    case 64803:
    {
        returnValue = F("Brunner Weg");
        break;
    }
    case 64804:
    {
        returnValue = F("Brunner-Bey-Str.");
        break;
    }
    case 64805:
    {
        returnValue = F("Brunnerberg");
        break;
    }
    case 64806:
    {
        returnValue = F("Brunnererweg");
        break;
    }
    case 64807:
    {
        returnValue = F("Brunnergasse");
        break;
    }
    case 64808:
    {
        returnValue = F("Brunnerstr.");
        break;
    }
    case 64809:
    {
        returnValue = F("Brunnersweg");
        break;
    }
    case 64810:
    {
        returnValue = F("Brunnerweg");
        break;
    }
    case 64811:
    {
        returnValue = F("Brunnesberg");
        break;
    }
    case 64812:
    {
        returnValue = F("Brunnfeld");
        break;
    }
    case 64813:
    {
        returnValue = F("Brunnfeldstr.");
        break;
    }
    case 64814:
    {
        returnValue = F("Brunnfeldweg");
        break;
    }
    case 64815:
    {
        returnValue = F("Brunnfenne");
        break;
    }
    case 64816:
    {
        returnValue = F("Brunngartenstr.");
        break;
    }
    case 64817:
    {
        returnValue = F("Brunngasse");
        break;
    }
    case 64818:
    {
        returnValue = F("Brunngaßweg");
        break;
    }
    case 64819:
    {
        returnValue = F("Brunngraben");
        break;
    }
    case 64820:
    {
        returnValue = F("Brunngrabenstr.");
        break;
    }
    case 64821:
    {
        returnValue = F("Brunngrabenweg");
        break;
    }
    case 64822:
    {
        returnValue = F("Brunngärtenweg");
        break;
    }
    case 64823:
    {
        returnValue = F("Brunngässle");
        break;
    }
    case 64824:
    {
        returnValue = F("Brunnhalde");
        break;
    }
    case 64825:
    {
        returnValue = F("Brunnhaldenstr.");
        break;
    }
    case 64826:
    {
        returnValue = F("Brunnhaldenweg");
        break;
    }
    case 64827:
    {
        returnValue = F("Brunnhaldeweg");
        break;
    }
    case 64828:
    {
        returnValue = F("Brunnhartshausen");
        break;
    }
    case 64829:
    {
        returnValue = F("Brunnhausen");
        break;
    }
    case 64830:
    {
        returnValue = F("Brunnhausgasse");
        break;
    }
    case 64831:
    {
        returnValue = F("Brunnhausstr.");
        break;
    }
    case 64832:
    {
        returnValue = F("Brunnheldenweg");
        break;
    }
    case 64833:
    {
        returnValue = F("Brunnhildestieg");
        break;
    }
    case 64834:
    {
        returnValue = F("Brunnhofen");
        break;
    }
    case 64835:
    {
        returnValue = F("Brunnhofstr.");
        break;
    }
    case 64836:
    {
        returnValue = F("Brunnholzring");
        break;
    }
    case 64837:
    {
        returnValue = F("Brunnholzstr.");
        break;
    }
    case 64838:
    {
        returnValue = F("Brunnhuber Feld");
        break;
    }
    case 64839:
    {
        returnValue = F("Brunnhuberring");
        break;
    }
    case 64840:
    {
        returnValue = F("Brunnhäldenweg");
        break;
    }
    case 64841:
    {
        returnValue = F("Brunnhäuslweg");
        break;
    }
    case 64842:
    {
        returnValue = F("Brunnhöhe");
        break;
    }
    case 64843:
    {
        returnValue = F("Brunnhölzleweg");
        break;
    }
    case 64844:
    {
        returnValue = F("Brunnhügel");
        break;
    }
    case 64845:
    {
        returnValue = F("Brunning Str.");
        break;
    }
    case 64846:
    {
        returnValue = F("Brunnisaachweg");
        break;
    }
    case 64847:
    {
        returnValue = F("Brunnisachweg");
        break;
    }
    case 64848:
    {
        returnValue = F("Brunnjacklweg");
        break;
    }
    case 64849:
    {
        returnValue = F("Brunnlachenweg");
        break;
    }
    case 64850:
    {
        returnValue = F("Brunnlachweg");
        break;
    }
    case 64851:
    {
        returnValue = F("Brunnleite");
        break;
    }
    case 64852:
    {
        returnValue = F("Brunnleiten");
        break;
    }
    case 64853:
    {
        returnValue = F("Brunnleitenstr.");
        break;
    }
    case 64854:
    {
        returnValue = F("Brunnleithenweg");
        break;
    }
    case 64855:
    {
        returnValue = F("Brunnlestr.");
        break;
    }
    case 64856:
    {
        returnValue = F("Brunnlettberg");
        break;
    }
    case 64857:
    {
        returnValue = F("Brunnlettstr.");
        break;
    }
    case 64858:
    {
        returnValue = F("Brunnlohe");
        break;
    }
    case 64859:
    {
        returnValue = F("Brunnlohweg");
        break;
    }
    case 64860:
    {
        returnValue = F("Brunnmatt");
        break;
    }
    case 64861:
    {
        returnValue = F("Brunnmattenmoosweg");
        break;
    }
    case 64862:
    {
        returnValue = F("Brunnmattenstr.");
        break;
    }
    case 64863:
    {
        returnValue = F("Brunnmattenweg");
        break;
    }
    case 64864:
    {
        returnValue = F("Brunnmattstr.");
        break;
    }
    case 64865:
    {
        returnValue = F("Brunnmattweg");
        break;
    }
    case 64866:
    {
        returnValue = F("Brunnmayrstr.");
        break;
    }
    case 64867:
    {
        returnValue = F("Brunnmättle");
        break;
    }
    case 64868:
    {
        returnValue = F("Brunnmühle");
        break;
    }
    case 64869:
    {
        returnValue = F("Brunnmühlgasse");
        break;
    }
    case 64870:
    {
        returnValue = F("Brunnmühlstr.");
        break;
    }
    case 64871:
    {
        returnValue = F("Brunnmühlweg");
        break;
    }
    case 64872:
    {
        returnValue = F("Brunnnenhof");
        break;
    }
    case 64873:
    {
        returnValue = F("Brunnquell");
        break;
    }
    case 64874:
    {
        returnValue = F("Brunnrain");
        break;
    }
    case 64875:
    {
        returnValue = F("Brunnrangenstr.");
        break;
    }
    case 64876:
    {
        returnValue = F("Brunnröhrenweg");
        break;
    }
    case 64877:
    {
        returnValue = F("Brunnschrott");
        break;
    }
    case 64878:
    {
        returnValue = F("Brunnsteg");
        break;
    }
    case 64879:
    {
        returnValue = F("Brunnsteig");
        break;
    }
    case 64880:
    {
        returnValue = F("Brunnsteige");
        break;
    }
    case 64881:
    {
        returnValue = F("Brunnsteinweg");
        break;
    }
    case 64882:
    {
        returnValue = F("Brunnstr.");
        break;
    }
    case 64883:
    {
        returnValue = F("Brunnstuben");
        break;
    }
    case 64884:
    {
        returnValue = F("Brunnstubenrainweg");
        break;
    }
    case 64885:
    {
        returnValue = F("Brunnstubenstr.");
        break;
    }
    case 64886:
    {
        returnValue = F("Brunnstubenweg");
        break;
    }
    case 64887:
    {
        returnValue = F("Brunntaler Str.");
        break;
    }
    case 64888:
    {
        returnValue = F("Brunntalstr.");
        break;
    }
    case 64889:
    {
        returnValue = F("Brunntalweg");
        break;
    }
    case 64890:
    {
        returnValue = F("Brunnthaler Str.");
        break;
    }
    case 64891:
    {
        returnValue = F("Brunnthalstr.");
        break;
    }
    case 64892:
    {
        returnValue = F("Brunntäleweg");
        break;
    }
    case 64893:
    {
        returnValue = F("Brunnwartsweg");
        break;
    }
    case 64894:
    {
        returnValue = F("Brunnweg");
        break;
    }
    case 64895:
    {
        returnValue = F("Brunnweiher");
        break;
    }
    case 64896:
    {
        returnValue = F("Brunnweinbergstr.");
        break;
    }
    case 64897:
    {
        returnValue = F("Brunnwengertweg");
        break;
    }
    case 64898:
    {
        returnValue = F("Brunnwiese");
        break;
    }
    case 64899:
    {
        returnValue = F("Brunnwiesen");
        break;
    }
    case 64900:
    {
        returnValue = F("Brunnwiesenstr.");
        break;
    }
    case 64901:
    {
        returnValue = F("Brunnwiesenweg");
        break;
    }
    case 64902:
    {
        returnValue = F("Brunnwiesfeld");
        break;
    }
    case 64903:
    {
        returnValue = F("Brunnwieslein");
        break;
    }
    case 64904:
    {
        returnValue = F("Brunnwiesstr.");
        break;
    }
    case 64905:
    {
        returnValue = F("Brunnwingert");
        break;
    }
    case 64906:
    {
        returnValue = F("Brunnäcker");
        break;
    }
    case 64907:
    {
        returnValue = F("Brunnäckerstr.");
        break;
    }
    case 64908:
    {
        returnValue = F("Bruno-Barthel-Str.");
        break;
    }
    case 64909:
    {
        returnValue = F("Bruno-Baum-Ring");
        break;
    }
    case 64910:
    {
        returnValue = F("Bruno-Bergner-Str.");
        break;
    }
    case 64911:
    {
        returnValue = F("Bruno-Brockhoff-Str.");
        break;
    }
    case 64912:
    {
        returnValue = F("Bruno-Böttger-Str.");
        break;
    }
    case 64913:
    {
        returnValue = F("Bruno-Bürgel-Str.");
        break;
    }
    case 64914:
    {
        returnValue = F("Bruno-Dietze-Ring");
        break;
    }
    case 64915:
    {
        returnValue = F("Bruno-Dost-Str.");
        break;
    }
    case 64916:
    {
        returnValue = F("Bruno-Dressler-Str.");
        break;
    }
    case 64917:
    {
        returnValue = F("Bruno-Ellinger-Weg");
        break;
    }
    case 64918:
    {
        returnValue = F("Bruno-Escher-Str.");
        break;
    }
    case 64919:
    {
        returnValue = F("Bruno-Fuhlendorf-Weg");
        break;
    }
    case 64920:
    {
        returnValue = F("Bruno-Gebhardt-Weg");
        break;
    }
    case 64921:
    {
        returnValue = F("Bruno-Gern-Weg");
        break;
    }
    case 64922:
    {
        returnValue = F("Bruno-H.-Bürgel-Allee");
        break;
    }
    case 64923:
    {
        returnValue = F("Bruno-H.-Bürgel-Str.");
        break;
    }
    case 64924:
    {
        returnValue = F("Bruno-Haldy-Str.");
        break;
    }
    case 64925:
    {
        returnValue = F("Bruno-Hengelbrock-Str.");
        break;
    }
    case 64926:
    {
        returnValue = F("Bruno-Hermann-Weg");
        break;
    }
    case 64927:
    {
        returnValue = F("Bruno-Kant-Str.");
        break;
    }
    case 64928:
    {
        returnValue = F("Bruno-Kießler-Str.");
        break;
    }
    case 64929:
    {
        returnValue = F("Bruno-Kleine-Str.");
        break;
    }
    case 64930:
    {
        returnValue = F("Bruno-Kuhn-Str.");
        break;
    }
    case 64931:
    {
        returnValue = F("Bruno-Kunze-Str.");
        break;
    }
    case 64932:
    {
        returnValue = F("Bruno-Kusterer-Ring");
        break;
    }
    case 64933:
    {
        returnValue = F("Bruno-Lambert-Str.");
        break;
    }
    case 64934:
    {
        returnValue = F("Bruno-Leipold-Str.");
        break;
    }
    case 64935:
    {
        returnValue = F("Bruno-Lenz-Str.");
        break;
    }
    case 64936:
    {
        returnValue = F("Bruno-Matthes-Str.");
        break;
    }
    case 64937:
    {
        returnValue = F("Bruno-Nachtigall-Str.");
        break;
    }
    case 64938:
    {
        returnValue = F("Bruno-Nielsen-Ring");
        break;
    }
    case 64939:
    {
        returnValue = F("Bruno-Nägele-Weg");
        break;
    }
    case 64940:
    {
        returnValue = F("Bruno-Otto-Str.");
        break;
    }
    case 64941:
    {
        returnValue = F("Bruno-Philipp-Str.");
        break;
    }
    case 64942:
    {
        returnValue = F("Bruno-Plache-Str.");
        break;
    }
    case 64943:
    {
        returnValue = F("Bruno-Rappel-Weg");
        break;
    }
    case 64944:
    {
        returnValue = F("Bruno-Salvat-Str.");
        break;
    }
    case 64945:
    {
        returnValue = F("Bruno-Schmidt-Siedlung");
        break;
    }
    case 64946:
    {
        returnValue = F("Bruno-Schmidt-Weg");
        break;
    }
    case 64947:
    {
        returnValue = F("Bruno-Schönlank-Str.");
        break;
    }
    case 64948:
    {
        returnValue = F("Bruno-Stelzner-Weg");
        break;
    }
    case 64949:
    {
        returnValue = F("Bruno-Stiebitz-Str.");
        break;
    }
    case 64950:
    {
        returnValue = F("Bruno-Strieth-Str.");
        break;
    }
    case 64951:
    {
        returnValue = F("Bruno-Taut-Str.");
        break;
    }
    case 64952:
    {
        returnValue = F("Bruno-Tesch-Str.");
        break;
    }
    case 64953:
    {
        returnValue = F("Bruno-Thum-Weg");
        break;
    }
    case 64954:
    {
        returnValue = F("Bruno-Vogelmann-Str.");
        break;
    }
    case 64955:
    {
        returnValue = F("Bruno-Werntgen-Str.");
        break;
    }
    case 64956:
    {
        returnValue = F("Bruno-Wille-Str.");
        break;
    }
    case 64957:
    {
        returnValue = F("Bruno-Wünsch-Str.");
        break;
    }
    case 64958:
    {
        returnValue = F("Brunogarten");
        break;
    }
    case 64959:
    {
        returnValue = F("Brunohler Str.");
        break;
    }
    case 64960:
    {
        returnValue = F("Brunoldstr.");
        break;
    }
    case 64961:
    {
        returnValue = F("Brunolf-Baade-Str.");
        break;
    }
    case 64962:
    {
        returnValue = F("Brunoslust");
        break;
    }
    case 64963:
    {
        returnValue = F("Brunostr.");
        break;
    }
    case 64964:
    {
        returnValue = F("Brunoweg");
        break;
    }
    case 64965:
    {
        returnValue = F("Brunower Chaussee");
        break;
    }
    case 64966:
    {
        returnValue = F("Brunower Str.");
        break;
    }
    case 64967:
    {
        returnValue = F("Brunower Weg");
        break;
    }
    case 64968:
    {
        returnValue = F("Brunoystr.");
        break;
    }
    case 64969:
    {
        returnValue = F("Bruns Kamp");
        break;
    }
    case 64970:
    {
        returnValue = F("Brunsbach");
        break;
    }
    case 64971:
    {
        returnValue = F("Brunsbachsmühle");
        break;
    }
    case 64972:
    {
        returnValue = F("Brunsberg");
        break;
    }
    case 64973:
    {
        returnValue = F("Brunsberge");
        break;
    }
    case 64974:
    {
        returnValue = F("Brunsberger Str.");
        break;
    }
    case 64975:
    {
        returnValue = F("Brunsbergweg");
        break;
    }
    case 64976:
    {
        returnValue = F("Brunsburg");
        break;
    }
    case 64977:
    {
        returnValue = F("Brunsbusch");
        break;
    }
    case 64978:
    {
        returnValue = F("Brunsbütteler Str.");
        break;
    }
    case 64979:
    {
        returnValue = F("Brunscheid");
        break;
    }
    case 64980:
    {
        returnValue = F("Brunscheider Str.");
        break;
    }
    case 64981:
    {
        returnValue = F("Brunschwigpark");
        break;
    }
    case 64982:
    {
        returnValue = F("Brunsdamm");
        break;
    }
    case 64983:
    {
        returnValue = F("Brunsenberg");
        break;
    }
    case 64984:
    {
        returnValue = F("Brunsgarten");
        break;
    }
    case 64985:
    {
        returnValue = F("Brunshausen");
        break;
    }
    case 64986:
    {
        returnValue = F("Brunshausener Str.");
        break;
    }
    case 64987:
    {
        returnValue = F("Brunsheide");
        break;
    }
    case 64988:
    {
        returnValue = F("Brunsheider Weg");
        break;
    }
    case 64989:
    {
        returnValue = F("Brunshelle");
        break;
    }
    case 64990:
    {
        returnValue = F("Brunshemmer Weg");
        break;
    }
    case 64991:
    {
        returnValue = F("Brunshof");
        break;
    }
    case 64992:
    {
        returnValue = F("Brunsholm");
        break;
    }
    case 64993:
    {
        returnValue = F("Brunsholt");
        break;
    }
    case 64994:
    {
        returnValue = F("Brunshoopweg");
        break;
    }
    case 64995:
    {
        returnValue = F("Brunshorst");
        break;
    }
    case 64996:
    {
        returnValue = F("Brunshöver Möhl");
        break;
    }
    case 64997:
    {
        returnValue = F("Brunsiek");
        break;
    }
    case 64998:
    {
        returnValue = F("Brunsieker Weg");
        break;
    }
    case 64999:
    {
        returnValue = F("Brunsiepen");
        break;
    }
    case 65000:
    {
        returnValue = F("Brunskamp");
        break;
    }
    case 65001:
    {
        returnValue = F("Brunskappeler Str.");
        break;
    }
    case 65002:
    {
        returnValue = F("Brunskruger Weg");
        break;
    }
    case 65003:
    {
        returnValue = F("Brunslarer Str.");
        break;
    }
    case 65004:
    {
        returnValue = F("Brunsloher Weg");
        break;
    }
    case 65005:
    {
        returnValue = F("Brunsmannweg");
        break;
    }
    case 65006:
    {
        returnValue = F("Brunsmoorweg");
        break;
    }
    case 65007:
    {
        returnValue = F("Brunsolstr.");
        break;
    }
    case 65008:
    {
        returnValue = F("Brunsring");
        break;
    }
    case 65009:
    {
        returnValue = F("Brunsroder Str.");
        break;
    }
    case 65010:
    {
        returnValue = F("Brunsstr.");
        break;
    }
    case 65011:
    {
        returnValue = F("Brunst-Geräumt");
        break;
    }
    case 65012:
    {
        returnValue = F("Brunsteiner Str.");
        break;
    }
    case 65013:
    {
        returnValue = F("Brunsthof");
        break;
    }
    case 65014:
    {
        returnValue = F("Brunstorfer Weg");
        break;
    }
    case 65015:
    {
        returnValue = F("Brunstr.");
        break;
    }
    case 65016:
    {
        returnValue = F("Brunststr.");
        break;
    }
    case 65017:
    {
        returnValue = F("Brunstätter Str.");
        break;
    }
    case 65018:
    {
        returnValue = F("Brunsweddel");
        break;
    }
    case 65019:
    {
        returnValue = F("Brunsweg");
        break;
    }
    case 65020:
    {
        returnValue = F("Brunswisch");
        break;
    }
    case 65021:
    {
        returnValue = F("Brunthaler Weg");
        break;
    }
    case 65022:
    {
        returnValue = F("Bruntjer Weg");
        break;
    }
    case 65023:
    {
        returnValue = F("Brunwardinger Str.");
        break;
    }
    case 65024:
    {
        returnValue = F("Brunwartstr.");
        break;
    }
    case 65025:
    {
        returnValue = F("Brunzeler Str.");
        break;
    }
    case 65026:
    {
        returnValue = F("Brunzeler Weg");
        break;
    }
    case 65027:
    {
        returnValue = F("Bruppenweg");
        break;
    }
    case 65028:
    {
        returnValue = F("Bruseberg");
        break;
    }
    case 65029:
    {
        returnValue = F("Brusendorfer Str.");
        break;
    }
    case 65030:
    {
        returnValue = F("Brusisstr.");
        break;
    }
    case 65031:
    {
        returnValue = F("Brusower Allee");
        break;
    }
    case 65032:
    {
        returnValue = F("Brusower Chaussee");
        break;
    }
    case 65033:
    {
        returnValue = F("Brusower Landweg");
        break;
    }
    case 65034:
    {
        returnValue = F("Brusower Weg");
        break;
    }
    case 65035:
    {
        returnValue = F("Brussuskoppel");
        break;
    }
    case 65036:
    {
        returnValue = F("Brustkaramellengasse");
        break;
    }
    case 65037:
    {
        returnValue = F("Brustorf");
        break;
    }
    case 65038:
    {
        returnValue = F("Brutgang");
        break;
    }
    case 65039:
    {
        returnValue = F("Bruthörn");
        break;
    }
    case 65040:
    {
        returnValue = F("Brutkamp");
        break;
    }
    case 65041:
    {
        returnValue = F("Brutkampsweg");
        break;
    }
    case 65042:
    {
        returnValue = F("Brutlerbodenweg");
        break;
    }
    case 65043:
    {
        returnValue = F("Bruttiger Str.");
        break;
    }
    case 65044:
    {
        returnValue = F("Brutäcker");
        break;
    }
    case 65045:
    {
        returnValue = F("Bruxer Dorfstr.");
        break;
    }
    case 65046:
    {
        returnValue = F("Bruyersweg");
        break;
    }
    case 65047:
    {
        returnValue = F("Bruäcker");
        break;
    }
    case 65048:
    {
        returnValue = F("Brächelweg");
        break;
    }
    case 65049:
    {
        returnValue = F("Brächer Heide");
        break;
    }
    case 65050:
    {
        returnValue = F("Brächer Weg");
        break;
    }
    case 65051:
    {
        returnValue = F("Brächleweg");
        break;
    }
    case 65052:
    {
        returnValue = F("Brächterstr.");
        break;
    }
    case 65053:
    {
        returnValue = F("Brächtkerberg");
        break;
    }
    case 65054:
    {
        returnValue = F("Bräcklestr.");
        break;
    }
    case 65055:
    {
        returnValue = F("Brädikower Weg");
        break;
    }
    case 65056:
    {
        returnValue = F("Brägeler Damm");
        break;
    }
    case 65057:
    {
        returnValue = F("Brägeler Forst");
        break;
    }
    case 65058:
    {
        returnValue = F("Brägeler Pickerweg");
        break;
    }
    case 65059:
    {
        returnValue = F("Brägeler Ring");
        break;
    }
    case 65060:
    {
        returnValue = F("Brägeler Str.");
        break;
    }
    case 65061:
    {
        returnValue = F("Brägelmannstr.");
        break;
    }
    case 65062:
    {
        returnValue = F("Brähmigs Weg");
        break;
    }
    case 65063:
    {
        returnValue = F("Brämelenweg");
        break;
    }
    case 65064:
    {
        returnValue = F("Brämmenweg");
        break;
    }
    case 65065:
    {
        returnValue = F("Bränd");
        break;
    }
    case 65066:
    {
        returnValue = F("Brändbachstr.");
        break;
    }
    case 65067:
    {
        returnValue = F("Brändelhecke");
        break;
    }
    case 65068:
    {
        returnValue = F("Brändeschachenweg");
        break;
    }
    case 65069:
    {
        returnValue = F("Brändestr.");
        break;
    }
    case 65070:
    {
        returnValue = F("Brändiweg");
        break;
    }
    case 65071:
    {
        returnValue = F("Brändle");
        break;
    }
    case 65072:
    {
        returnValue = F("Brändleackerweg");
        break;
    }
    case 65073:
    {
        returnValue = F("Brändleinsgraben");
        break;
    }
    case 65074:
    {
        returnValue = F("Brändlerstr.");
        break;
    }
    case 65075:
    {
        returnValue = F("Brändleweg");
        break;
    }
    case 65076:
    {
        returnValue = F("Brändlinweg");
        break;
    }
    case 65077:
    {
        returnValue = F("Brändströmstr.");
        break;
    }
    case 65078:
    {
        returnValue = F("Brändweg");
        break;
    }
    case 65079:
    {
        returnValue = F("Bräsen");
        break;
    }
    case 65080:
    {
        returnValue = F("Bräsener Weg");
        break;
    }
    case 65081:
    {
        returnValue = F("Bräsinchener Str.");
        break;
    }
    case 65082:
    {
        returnValue = F("Bräu-Taferl-Weg");
        break;
    }
    case 65083:
    {
        returnValue = F("Bräuacker");
        break;
    }
    case 65084:
    {
        returnValue = F("Bräuackerring");
        break;
    }
    case 65085:
    {
        returnValue = F("Bräuackerweg");
        break;
    }
    case 65086:
    {
        returnValue = F("Bräuanger");
        break;
    }
    case 65087:
    {
        returnValue = F("Bräuberg");
        break;
    }
    case 65088:
    {
        returnValue = F("Bräubergstr.");
        break;
    }
    case 65089:
    {
        returnValue = F("Bräubogen");
        break;
    }
    case 65090:
    {
        returnValue = F("Bräubuckweg");
        break;
    }
    case 65091:
    {
        returnValue = F("Bräuchlepark");
        break;
    }
    case 65092:
    {
        returnValue = F("Bräuckenhang");
        break;
    }
    case 65093:
    {
        returnValue = F("Bräuckenstr.");
        break;
    }
    case 65094:
    {
        returnValue = F("Bräuckerstr.");
        break;
    }
    case 65095:
    {
        returnValue = F("Bräuersdorfer Str.");
        break;
    }
    case 65096:
    {
        returnValue = F("Bräuerstr.");
        break;
    }
    case 65097:
    {
        returnValue = F("Bräufeld");
        break;
    }
    case 65098:
    {
        returnValue = F("Bräufeldweg");
        break;
    }
    case 65099:
    {
        returnValue = F("Bräugarten");
        break;
    }
    case 65100:
    {
        returnValue = F("Bräugartl");
        break;
    }
    case 65101:
    {
        returnValue = F("Bräugasse");
        break;
    }
    case 65102:
    {
        returnValue = F("Bräugassl");
        break;
    }
    case 65103:
    {
        returnValue = F("Bräugaßl");
        break;
    }
    case 65104:
    {
        returnValue = F("Bräuhausgasse");
        break;
    }
    case 65105:
    {
        returnValue = F("Bräuhausgässchen");
        break;
    }
    case 65106:
    {
        returnValue = F("Bräuhauskeller");
        break;
    }
    case 65107:
    {
        returnValue = F("Bräuhausplatz");
        break;
    }
    case 65108:
    {
        returnValue = F("Bräuhausring");
        break;
    }
    case 65109:
    {
        returnValue = F("Bräuhausstr.");
        break;
    }
    case 65110:
    {
        returnValue = F("Bräuhausweg");
        break;
    }
    case 65111:
    {
        returnValue = F("Bräuhiasengasse");
        break;
    }
    case 65112:
    {
        returnValue = F("Bräuhofweg");
        break;
    }
    case 65113:
    {
        returnValue = F("Bräukellerweg");
        break;
    }
    case 65114:
    {
        returnValue = F("Bräulandweg");
        break;
    }
    case 65115:
    {
        returnValue = F("Bräumeistersteig");
        break;
    }
    case 65116:
    {
        returnValue = F("Bräumeisterweg");
        break;
    }
    case 65117:
    {
        returnValue = F("Bräunbichlweg");
        break;
    }
    case 65118:
    {
        returnValue = F("Bräunelsbergweg");
        break;
    }
    case 65119:
    {
        returnValue = F("Bräunersbergweg");
        break;
    }
    case 65120:
    {
        returnValue = F("Bräunickenweg");
        break;
    }
    case 65121:
    {
        returnValue = F("Bräunigk");
        break;
    }
    case 65122:
    {
        returnValue = F("Bräunigweg");
        break;
    }
    case 65123:
    {
        returnValue = F("Bräuningshofer Str.");
        break;
    }
    case 65124:
    {
        returnValue = F("Bräuningshofer Weg");
        break;
    }
    case 65125:
    {
        returnValue = F("Bräuningsrain");
        break;
    }
    case 65126:
    {
        returnValue = F("Bräunisbergstr.");
        break;
    }
    case 65127:
    {
        returnValue = F("Bräunisheimer Str.");
        break;
    }
    case 65128:
    {
        returnValue = F("Bräunleinsberg");
        break;
    }
    case 65129:
    {
        returnValue = F("Bräunleinsgasse");
        break;
    }
    case 65130:
    {
        returnValue = F("Bräunleinstr.");
        break;
    }
    case 65131:
    {
        returnValue = F("Bräunlesweg");
        break;
    }
    case 65132:
    {
        returnValue = F("Bräunlinger Steige");
        break;
    }
    case 65133:
    {
        returnValue = F("Bräunlinger Str.");
        break;
    }
    case 65134:
    {
        returnValue = F("Bräunlingsberg");
        break;
    }
    case 65135:
    {
        returnValue = F("Bräunlingstr.");
        break;
    }
    case 65136:
    {
        returnValue = F("Bräunröder Hauptstr.");
        break;
    }
    case 65137:
    {
        returnValue = F("Bräunröder Weg");
        break;
    }
    case 65138:
    {
        returnValue = F("Bräunsbächlweg");
        break;
    }
    case 65139:
    {
        returnValue = F("Bräunsdorfer Allee");
        break;
    }
    case 65140:
    {
        returnValue = F("Bräunsdorfer Str.");
        break;
    }
    case 65141:
    {
        returnValue = F("Bräunstr.");
        break;
    }
    case 65142:
    {
        returnValue = F("Bräunweg");
        break;
    }
    case 65143:
    {
        returnValue = F("Bräureihe");
        break;
    }
    case 65144:
    {
        returnValue = F("Bräustr.");
        break;
    }
    case 65145:
    {
        returnValue = F("Bräutgasse");
        break;
    }
    case 65146:
    {
        returnValue = F("Bräuweg");
        break;
    }
    case 65147:
    {
        returnValue = F("Bräuwiese");
        break;
    }
    case 65148:
    {
        returnValue = F("Bräuwirtgasse");
        break;
    }
    case 65149:
    {
        returnValue = F("Bräuäcker");
        break;
    }
    case 65150:
    {
        returnValue = F("Bräätlun");
        break;
    }
    case 65151:
    {
        returnValue = F("Bröbecker Weg");
        break;
    }
    case 65152:
    {
        returnValue = F("Bröchleweg");
        break;
    }
    case 65153:
    {
        returnValue = F("Bröckauer Dorfstr.");
        break;
    }
    case 65154:
    {
        returnValue = F("Bröckauer Hauptstr.");
        break;
    }
    case 65155:
    {
        returnValue = F("Bröckauer Str.");
        break;
    }
    case 65156:
    {
        returnValue = F("Bröckel Wiesen");
        break;
    }
    case 65157:
    {
        returnValue = F("Bröckelbecker Str.");
        break;
    }
    case 65158:
    {
        returnValue = F("Bröckelbecker Weg");
        break;
    }
    case 65159:
    {
        returnValue = F("Bröckelner Str.");
        break;
    }
    case 65160:
    {
        returnValue = F("Bröckelweg");
        break;
    }
    case 65161:
    {
        returnValue = F("Bröckenweg");
        break;
    }
    case 65162:
    {
        returnValue = F("Bröckerberg");
        break;
    }
    case 65163:
    {
        returnValue = F("Bröckers");
        break;
    }
    case 65164:
    {
        returnValue = F("Bröckerskamp");
        break;
    }
    case 65165:
    {
        returnValue = F("Bröckerstr.");
        break;
    }
    case 65166:
    {
        returnValue = F("Bröckstr.");
        break;
    }
    case 65167:
    {
        returnValue = F("Bröckweg");
        break;
    }
    case 65168:
    {
        returnValue = F("Bröddin");
        break;
    }
    case 65169:
    {
        returnValue = F("Brödelestr.");
        break;
    }
    case 65170:
    {
        returnValue = F("Bröderhausener Str.");
        break;
    }
    case 65171:
    {
        returnValue = F("Brödermannsallee");
        break;
    }
    case 65172:
    {
        returnValue = F("Bröditzer Weg");
        break;
    }
    case 65173:
    {
        returnValue = F("Brögerstr.");
        break;
    }
    case 65174:
    {
        returnValue = F("Brögt");
        break;
    }
    case 65175:
    {
        returnValue = F("Bröhlpfad");
        break;
    }
    case 65176:
    {
        returnValue = F("Bröhlsgasse");
        break;
    }
    case 65177:
    {
        returnValue = F("Bröhlstr.");
        break;
    }
    case 65178:
    {
        returnValue = F("Bröhltalstr.");
        break;
    }
    case 65179:
    {
        returnValue = F("Bröhms-Brücke");
        break;
    }
    case 65180:
    {
        returnValue = F("Bröhnenkamp");
        break;
    }
    case 65181:
    {
        returnValue = F("Bröhnenweg");
        break;
    }
    case 65182:
    {
        returnValue = F("Bröhnfeld");
        break;
    }
    case 65183:
    {
        returnValue = F("Bröhnrehr");
        break;
    }
    case 65184:
    {
        returnValue = F("Bröhnstr.");
        break;
    }
    case 65185:
    {
        returnValue = F("Bröhsener Str.");
        break;
    }
    case 65186:
    {
        returnValue = F("Brök");
        break;
    }
    case 65187:
    {
        returnValue = F("Brökelner Str.");
        break;
    }
    case 65188:
    {
        returnValue = F("Brökenweg");
        break;
    }
    case 65189:
    {
        returnValue = F("Brökergarten");
        break;
    }
    case 65190:
    {
        returnValue = F("Brökers");
        break;
    }
    case 65191:
    {
        returnValue = F("Brökers Kamp");
        break;
    }
    case 65192:
    {
        returnValue = F("Brökers Wiese");
        break;
    }
    case 65193:
    {
        returnValue = F("Brökersfehn");
        break;
    }
    case 65194:
    {
        returnValue = F("Brökersgrund");
        break;
    }
    case 65195:
    {
        returnValue = F("Brökerskamp");
        break;
    }
    case 65196:
    {
        returnValue = F("Brökerstegge");
        break;
    }
    case 65197:
    {
        returnValue = F("Brökerweg");
        break;
    }
    case 65198:
    {
        returnValue = F("Bröl");
        break;
    }
    case 65199:
    {
        returnValue = F("Brölbahnstr.");
        break;
    }
    case 65200:
    {
        returnValue = F("Brölblick");
        break;
    }
    case 65201:
    {
        returnValue = F("Bröler Berg");
        break;
    }
    case 65202:
    {
        returnValue = F("Bröler Garten");
        break;
    }
    case 65203:
    {
        returnValue = F("Brölerhütte");
        break;
    }
    case 65204:
    {
        returnValue = F("Bröllerstr.");
        break;
    }
    case 65205:
    {
        returnValue = F("Bröllin");
        break;
    }
    case 65206:
    {
        returnValue = F("Brölscheidstr.");
        break;
    }
    case 65207:
    {
        returnValue = F("Brölstr.");
        break;
    }
    case 65208:
    {
        returnValue = F("Bröltalstr.");
        break;
    }
    case 65209:
    {
        returnValue = F("Brölufer");
        break;
    }
    case 65210:
    {
        returnValue = F("Brölweg");
        break;
    }
    case 65211:
    {
        returnValue = F("Brömderweg");
        break;
    }
    case 65212:
    {
        returnValue = F("Brömersweg");
        break;
    }
    case 65213:
    {
        returnValue = F("Brömmels Kamp");
        break;
    }
    case 65214:
    {
        returnValue = F("Brömmelweg");
        break;
    }
    case 65215:
    {
        returnValue = F("Brömmenkamp");
        break;
    }
    case 65216:
    {
        returnValue = F("Brömmerkamp");
        break;
    }
    case 65217:
    {
        returnValue = F("Brömmlingshof");
        break;
    }
    case 65218:
    {
        returnValue = F("Brömserstr.");
        break;
    }
    case 65219:
    {
        returnValue = F("Brönenberg");
        break;
    }
    case 65220:
    {
        returnValue = F("Brönkow");
        break;
    }
    case 65221:
    {
        returnValue = F("Brönksweg");
        break;
    }
    case 65222:
    {
        returnValue = F("Brönnelesteichweg");
        break;
    }
    case 65223:
    {
        returnValue = F("Brönnhofstr.");
        break;
    }
    case 65224:
    {
        returnValue = F("Bröns Wai");
        break;
    }
    case 65225:
    {
        returnValue = F("Brönshooger Weg");
        break;
    }
    case 65226:
    {
        returnValue = F("Brönswai");
        break;
    }
    case 65227:
    {
        returnValue = F("Brörmannstr.");
        break;
    }
    case 65228:
    {
        returnValue = F("Brösaer Dorfstr.");
        break;
    }
    case 65229:
    {
        returnValue = F("Brösaer Weg");
        break;
    }
    case 65230:
    {
        returnValue = F("Brösen");
        break;
    }
    case 65231:
    {
        returnValue = F("Brösener Gasse");
        break;
    }
    case 65232:
    {
        returnValue = F("Brösener Str.");
        break;
    }
    case 65233:
    {
        returnValue = F("Brösener Weg");
        break;
    }
    case 65234:
    {
        returnValue = F("Brösenweg");
        break;
    }
    case 65235:
    {
        returnValue = F("Brösestr.");
        break;
    }
    case 65236:
    {
        returnValue = F("Brösgener Str.");
        break;
    }
    case 65237:
    {
        returnValue = F("Brösgener Weg");
        break;
    }
    case 65238:
    {
        returnValue = F("Brösumer Str.");
        break;
    }
    case 65239:
    {
        returnValue = F("Brötchenweg");
        break;
    }
    case 65240:
    {
        returnValue = F("Bröthener Str.");
        break;
    }
    case 65241:
    {
        returnValue = F("Brötzinger Str.");
        break;
    }
    case 65242:
    {
        returnValue = F("Brötzinger Weg");
        break;
    }
    case 65243:
    {
        returnValue = F("Bröwlergraben");
        break;
    }
    case 65244:
    {
        returnValue = F("Brößnitzer Str.");
        break;
    }
    case 65245:
    {
        returnValue = F("Brübelgasse");
        break;
    }
    case 65246:
    {
        returnValue = F("Brübelstr.");
        break;
    }
    case 65247:
    {
        returnValue = F("Brübelweg");
        break;
    }
    case 65248:
    {
        returnValue = F("Brübelwiesen");
        break;
    }
    case 65249:
    {
        returnValue = F("Brüchauer Berg");
        break;
    }
    case 65250:
    {
        returnValue = F("Brücheln");
        break;
    }
    case 65251:
    {
        returnValue = F("Brüchelstr.");
        break;
    }
    case 65252:
    {
        returnValue = F("Brüchelswiesen Schneise");
        break;
    }
    case 65253:
    {
        returnValue = F("Brüchelweg");
        break;
    }
    case 65254:
    {
        returnValue = F("Brüchener Weg");
        break;
    }
    case 65255:
    {
        returnValue = F("Brüchenweg");
        break;
    }
    case 65256:
    {
        returnValue = F("Brücher");
        break;
    }
    case 65257:
    {
        returnValue = F("Brücher Weg");
        break;
    }
    case 65258:
    {
        returnValue = F("Brücher-Weg");
        break;
    }
    case 65259:
    {
        returnValue = F("Brüchermühler Str.");
        break;
    }
    case 65260:
    {
        returnValue = F("Brücherstr.");
        break;
    }
    case 65261:
    {
        returnValue = F("Brüchertsweg");
        break;
    }
    case 65262:
    {
        returnValue = F("Brücherweg");
        break;
    }
    case 65263:
    {
        returnValue = F("Brücherwiese");
        break;
    }
    case 65264:
    {
        returnValue = F("Brüchhorststr.");
        break;
    }
    case 65265:
    {
        returnValue = F("Brüchichtweg");
        break;
    }
    case 65266:
    {
        returnValue = F("Brüchkuhlenweg");
        break;
    }
    case 65267:
    {
        returnValue = F("Brüchling");
        break;
    }
    case 65268:
    {
        returnValue = F("Brüchlinger Weg");
        break;
    }
    case 65269:
    {
        returnValue = F("Brüchlins");
        break;
    }
    case 65270:
    {
        returnValue = F("Brüchser Str.");
        break;
    }
    case 65271:
    {
        returnValue = F("Brück-Forsbacher Weg");
        break;
    }
    case 65272:
    {
        returnValue = F("Brückackerweg");
        break;
    }
    case 65273:
    {
        returnValue = F("Brückbergstr.");
        break;
    }
    case 65274:
    {
        returnValue = F("Brückchen");
        break;
    }
    case 65275:
    {
        returnValue = F("Brücke");
        break;
    }
    case 65276:
    {
        returnValue = F("Brücke - Abriss geplant bis Ende 2016");
        break;
    }
    case 65277:
    {
        returnValue = F("Brücke - Berngeröder Str.");
        break;
    }
    case 65278:
    {
        returnValue = F("Brücke 4 / Bingen-Rüdesheimer");
        break;
    }
    case 65279:
    {
        returnValue = F("Brücke 6");
        break;
    }
    case 65280:
    {
        returnValue = F("Brücke 8 - KD-Anlegestelle Bingen");
        break;
    }
    case 65281:
    {
        returnValue = F("Brücke Alte Mühle");
        break;
    }
    case 65282:
    {
        returnValue = F("Brücke Am Schiffbleek");
        break;
    }
    case 65283:
    {
        returnValue = F("Brücke B76");
        break;
    }
    case 65284:
    {
        returnValue = F("Brücke BAB20 am Babster Berg");
        break;
    }
    case 65285:
    {
        returnValue = F("Brücke BAB20, Babster Berg");
        break;
    }
    case 65286:
    {
        returnValue = F("Brücke Falkenrehde-Paaren");
        break;
    }
    case 65287:
    {
        returnValue = F("Brücke Fassensdorf");
        break;
    }
    case 65288:
    {
        returnValue = F("Brücke Haynsburg");
        break;
    }
    case 65289:
    {
        returnValue = F("Brücke I");
        break;
    }
    case 65290:
    {
        returnValue = F("Brücke IV");
        break;
    }
    case 65291:
    {
        returnValue = F("Brücke Kampbruch");
        break;
    }
    case 65292:
    {
        returnValue = F("Brücke Papst Johannes Paul II.");
        break;
    }
    case 65293:
    {
        returnValue = F("Brücke Pumpermühle");
        break;
    }
    case 65294:
    {
        returnValue = F("Brücke Röntgenstr.");
        break;
    }
    case 65295:
    {
        returnValue = F("Brücke Schleuse 60");
        break;
    }
    case 65296:
    {
        returnValue = F("Brücke Schleuse 61");
        break;
    }
    case 65297:
    {
        returnValue = F("Brücke Zum Mönchsweg");
        break;
    }
    case 65298:
    {
        returnValue = F("Brücke am Alten Krug");
        break;
    }
    case 65299:
    {
        returnValue = F("Brücke am Elsenbusch");
        break;
    }
    case 65300:
    {
        returnValue = F("Brücke am Mitterbach");
        break;
    }
    case 65301:
    {
        returnValue = F("Brücke am Pegel Ellrich");
        break;
    }
    case 65302:
    {
        returnValue = F("Brücke am Untertor");
        break;
    }
    case 65303:
    {
        returnValue = F("Brücke an der Untermühle");
        break;
    }
    case 65304:
    {
        returnValue = F("Brücke der Deutschen Einheit");
        break;
    }
    case 65305:
    {
        returnValue = F("Brücke der Freundschaft");
        break;
    }
    case 65306:
    {
        returnValue = F("Brücke der Zukunft");
        break;
    }
    case 65307:
    {
        returnValue = F("Brücke des Friedens");
        break;
    }
    case 65308:
    {
        returnValue = F("Brücke über den Faulenbach");
        break;
    }
    case 65309:
    {
        returnValue = F("Brücke über den Jordan");
        break;
    }
    case 65310:
    {
        returnValue = F("Brücke über den Sindelsbach");
        break;
    }
    case 65311:
    {
        returnValue = F("Brücke über die \"Alte Hunte");
        break;
    }
    case 65312:
    {
        returnValue = F("Brücke über die Rote Weißeritz");
        break;
    }
    case 65313:
    {
        returnValue = F("Brücke(klein)");
        break;
    }
    case 65314:
    {
        returnValue = F("Brücke, Bridge");
        break;
    }
    case 65315:
    {
        returnValue = F("Brückebach");
        break;
    }
    case 65316:
    {
        returnValue = F("Brückeberg");
        break;
    }
    case 65317:
    {
        returnValue = F("Brückebergstr.");
        break;
    }
    case 65318:
    {
        returnValue = F("Brückelchen");
        break;
    }
    case 65319:
    {
        returnValue = F("Brückelesweg");
        break;
    }
    case 65320:
    {
        returnValue = F("Brückelsdorfer Str.");
        break;
    }
    case 65321:
    {
        returnValue = F("Brückelweg");
        break;
    }
    case 65322:
    {
        returnValue = F("Brückemich");
        break;
    }
    case 65323:
    {
        returnValue = F("Brückenacker");
        break;
    }
    case 65324:
    {
        returnValue = F("Brückenaue");
        break;
    }
    case 65325:
    {
        returnValue = F("Brückenauer Str.");
        break;
    }
    case 65326:
    {
        returnValue = F("Brückenauer Weg");
        break;
    }
    case 65327:
    {
        returnValue = F("Brückenbachstr.");
        break;
    }
    case 65328:
    {
        returnValue = F("Brückenbachweg");
        break;
    }
    case 65329:
    {
        returnValue = F("Brückenberg");
        break;
    }
    case 65330:
    {
        returnValue = F("Brückenbergerstr.");
        break;
    }
    case 65331:
    {
        returnValue = F("Brückenbergstr.");
        break;
    }
    case 65332:
    {
        returnValue = F("Brückenbergweg");
        break;
    }
    case 65333:
    {
        returnValue = F("Brückenblick");
        break;
    }
    case 65334:
    {
        returnValue = F("Brückenbrink");
        break;
    }
    case 65335:
    {
        returnValue = F("Brückendamm");
        break;
    }
    case 65336:
    {
        returnValue = F("Brückener Str.");
        break;
    }
    case 65337:
    {
        returnValue = F("Brückenfeld");
        break;
    }
    case 65338:
    {
        returnValue = F("Brückenfeldschneise");
        break;
    }
    case 65339:
    {
        returnValue = F("Brückenfeldstr.");
        break;
    }
    case 65340:
    {
        returnValue = F("Brückenfleck");
        break;
    }
    case 65341:
    {
        returnValue = F("Brückengarten");
        break;
    }
    case 65342:
    {
        returnValue = F("Brückengartenweg");
        break;
    }
    case 65343:
    {
        returnValue = F("Brückengasse");
        break;
    }
    case 65344:
    {
        returnValue = F("Brückengassen");
        break;
    }
    case 65345:
    {
        returnValue = F("Brückengraben");
        break;
    }
    case 65346:
    {
        returnValue = F("Brückengrund");
        break;
    }
    case 65347:
    {
        returnValue = F("Brückengrundbrücke");
        break;
    }
    case 65348:
    {
        returnValue = F("Brückengärten");
        break;
    }
    case 65349:
    {
        returnValue = F("Brückenhausstr.");
        break;
    }
    case 65350:
    {
        returnValue = F("Brückenhof");
        break;
    }
    case 65351:
    {
        returnValue = F("Brückenhofstr.");
        break;
    }
    case 65352:
    {
        returnValue = F("Brückenhofweg");
        break;
    }
    case 65353:
    {
        returnValue = F("Brückenhute");
        break;
    }
    case 65354:
    {
        returnValue = F("Brückenhäuserstr.");
        break;
    }
    case 65355:
    {
        returnValue = F("Brückenkamp");
        break;
    }
    case 65356:
    {
        returnValue = F("Brückenkopf");
        break;
    }
    case 65357:
    {
        returnValue = F("Brückenkopfpark");
        break;
    }
    case 65358:
    {
        returnValue = F("Brückenmühle");
        break;
    }
    case 65359:
    {
        returnValue = F("Brückenmüllerstr.");
        break;
    }
    case 65360:
    {
        returnValue = F("Brückenort");
        break;
    }
    case 65361:
    {
        returnValue = F("Brückenpark");
        break;
    }
    case 65362:
    {
        returnValue = F("Brückenplatz");
        break;
    }
    case 65363:
    {
        returnValue = F("Brückenrain");
        break;
    }
    case 65364:
    {
        returnValue = F("Brückenrainstr.");
        break;
    }
    case 65365:
    {
        returnValue = F("Brückenrampe");
        break;
    }
    case 65366:
    {
        returnValue = F("Brückenring");
        break;
    }
    case 65367:
    {
        returnValue = F("Brückenschlag");
        break;
    }
    case 65368:
    {
        returnValue = F("Brückenschleeweg");
        break;
    }
    case 65369:
    {
        returnValue = F("Brückenschneise");
        break;
    }
    case 65370:
    {
        returnValue = F("Brückensteig");
        break;
    }
    case 65371:
    {
        returnValue = F("Brückenstieg");
        break;
    }
    case 65372:
    {
        returnValue = F("Brückenstr.");
        break;
    }
    case 65373:
    {
        returnValue = F("Brückenstr. 14-18");
        break;
    }
    case 65374:
    {
        returnValue = F("Brückenstücke");
        break;
    }
    case 65375:
    {
        returnValue = F("Brückental");
        break;
    }
    case 65376:
    {
        returnValue = F("Brückenteich");
        break;
    }
    case 65377:
    {
        returnValue = F("Brückenthal");
        break;
    }
    case 65378:
    {
        returnValue = F("Brückentin");
        break;
    }
    case 65379:
    {
        returnValue = F("Brückentor");
        break;
    }
    case 65380:
    {
        returnValue = F("Brückentorstr.");
        break;
    }
    case 65381:
    {
        returnValue = F("Brückentraße");
        break;
    }
    case 65382:
    {
        returnValue = F("Brückenvorstadt");
        break;
    }
    case 65383:
    {
        returnValue = F("Brückenwaage");
        break;
    }
    case 65384:
    {
        returnValue = F("Brückenweg");
        break;
    }
    case 65385:
    {
        returnValue = F("Brückenweinberg");
        break;
    }
    case 65386:
    {
        returnValue = F("Brückenwiesen");
        break;
    }
    case 65387:
    {
        returnValue = F("Brückenwiesenstr.");
        break;
    }
    case 65388:
    {
        returnValue = F("Brückenwiesenweg");
        break;
    }
    case 65389:
    {
        returnValue = F("Brückenzollstr.");
        break;
    }
    case 65390:
    {
        returnValue = F("Brückenzugang");
        break;
    }
    case 65391:
    {
        returnValue = F("Brückenäcker Str.");
        break;
    }
    case 65392:
    {
        returnValue = F("Brückenäckerstr.");
        break;
    }
    case 65393:
    {
        returnValue = F("Brücker Hang");
        break;
    }
    case 65394:
    {
        returnValue = F("Brücker Kirchweg");
        break;
    }
    case 65395:
    {
        returnValue = F("Brücker Landstr.");
        break;
    }
    case 65396:
    {
        returnValue = F("Brücker Str.");
        break;
    }
    case 65397:
    {
        returnValue = F("Brücker Tor");
        break;
    }
    case 65398:
    {
        returnValue = F("Brücker Weg");
        break;
    }
    case 65399:
    {
        returnValue = F("Brücker Wiese");
        break;
    }
    case 65400:
    {
        returnValue = F("Brückergasse");
        break;
    }
    case 65401:
    {
        returnValue = F("Brückerheide");
        break;
    }
    case 65402:
    {
        returnValue = F("Brückerhöfe");
        break;
    }
    case 65403:
    {
        returnValue = F("Brückermark");
        break;
    }
    case 65404:
    {
        returnValue = F("Brückerstr.");
        break;
    }
    case 65405:
    {
        returnValue = F("Brückerweg");
        break;
    }
    case 65406:
    {
        returnValue = F("Brückes");
        break;
    }
    case 65407:
    {
        returnValue = F("Brückesgasse");
        break;
    }
    case 65408:
    {
        returnValue = F("Brückeweg");
        break;
    }
    case 65409:
    {
        returnValue = F("Brückfeld");
        break;
    }
    case 65410:
    {
        returnValue = F("Brückfeldstr.");
        break;
    }
    case 65411:
    {
        returnValue = F("Brückfeldweg");
        break;
    }
    case 65412:
    {
        returnValue = F("Brückgartenweg");
        break;
    }
    case 65413:
    {
        returnValue = F("Brückgasse");
        break;
    }
    case 65414:
    {
        returnValue = F("Brückhausenstr.");
        break;
    }
    case 65415:
    {
        returnValue = F("Brückhof");
        break;
    }
    case 65416:
    {
        returnValue = F("Brückhumes");
        break;
    }
    case 65417:
    {
        returnValue = F("Brückhörn");
        break;
    }
    case 65418:
    {
        returnValue = F("Brückkanal Gösselthal");
        break;
    }
    case 65419:
    {
        returnValue = F("Brückkanalstr.");
        break;
    }
    case 65420:
    {
        returnValue = F("Brückl Seign");
        break;
    }
    case 65421:
    {
        returnValue = F("Brückla");
        break;
    }
    case 65422:
    {
        returnValue = F("Brücklache");
        break;
    }
    case 65423:
    {
        returnValue = F("Brücklaer Weg");
        break;
    }
    case 65424:
    {
        returnValue = F("Brücklangerstr.");
        break;
    }
    case 65425:
    {
        returnValue = F("Brückle");
        break;
    }
    case 65426:
    {
        returnValue = F("Brückle über den Wallgraben");
        break;
    }
    case 65427:
    {
        returnValue = F("Brücklebreiten");
        break;
    }
    case 65428:
    {
        returnValue = F("Brücklefeld");
        break;
    }
    case 65429:
    {
        returnValue = F("Brückleinsgraben");
        break;
    }
    case 65430:
    {
        returnValue = F("Brückleinstr.");
        break;
    }
    case 65431:
    {
        returnValue = F("Brückleinsweg");
        break;
    }
    case 65432:
    {
        returnValue = F("Brückleinsäckerweg");
        break;
    }
    case 65433:
    {
        returnValue = F("Brückleinweg");
        break;
    }
    case 65434:
    {
        returnValue = F("Brücklerainweg");
        break;
    }
    case 65435:
    {
        returnValue = F("Brücklerstr.");
        break;
    }
    case 65436:
    {
        returnValue = F("Brücklesberg");
        break;
    }
    case 65437:
    {
        returnValue = F("Brücklesbünd");
        break;
    }
    case 65438:
    {
        returnValue = F("Brücklesgasse");
        break;
    }
    case 65439:
    {
        returnValue = F("Brücklestr.");
        break;
    }
    case 65440:
    {
        returnValue = F("Brücklesweg");
        break;
    }
    case 65441:
    {
        returnValue = F("Brücklesäcker");
        break;
    }
    case 65442:
    {
        returnValue = F("Brücklesäckerstr.");
        break;
    }
    case 65443:
    {
        returnValue = F("Brücklewaldweg");
        break;
    }
    case 65444:
    {
        returnValue = F("Brückleweg");
        break;
    }
    case 65445:
    {
        returnValue = F("Brücklhofweg");
        break;
    }
    case 65446:
    {
        returnValue = F("Brücklhöhe");
        break;
    }
    case 65447:
    {
        returnValue = F("Brücklmayerweg");
        break;
    }
    case 65448:
    {
        returnValue = F("Brücklmeierstr.");
        break;
    }
    case 65449:
    {
        returnValue = F("Brücklstr.");
        break;
    }
    case 65450:
    {
        returnValue = F("Brücklweg");
        break;
    }
    case 65451:
    {
        returnValue = F("Brückmannskoppel");
        break;
    }
    case 65452:
    {
        returnValue = F("Brückmannstr.");
        break;
    }
    case 65453:
    {
        returnValue = F("Brücknergasse");
        break;
    }
    case 65454:
    {
        returnValue = F("Brücknerring");
        break;
    }
    case 65455:
    {
        returnValue = F("Brücknerstr.");
        break;
    }
    case 65456:
    {
        returnValue = F("Brückrachdorfer Str.");
        break;
    }
    case 65457:
    {
        returnValue = F("Brücksief");
        break;
    }
    case 65458:
    {
        returnValue = F("Brückstr.");
        break;
    }
    case 65459:
    {
        returnValue = F("Brückstücksweg");
        break;
    }
    case 65460:
    {
        returnValue = F("Brücktor");
        break;
    }
    case 65461:
    {
        returnValue = F("Brücktorstr.");
        break;
    }
    case 65462:
    {
        returnValue = F("Brückwaldanlage");
        break;
    }
    case 65463:
    {
        returnValue = F("Brückwaldstr.");
        break;
    }
    case 65464:
    {
        returnValue = F("Brückwaldweg");
        break;
    }
    case 65465:
    {
        returnValue = F("Brückwaldweg / Eckweg");
        break;
    }
    case 65466:
    {
        returnValue = F("Brückweg");
        break;
    }
    case 65467:
    {
        returnValue = F("Brückwies");
        break;
    }
    case 65468:
    {
        returnValue = F("Brückwiese");
        break;
    }
    case 65469:
    {
        returnValue = F("Brückwiesen");
        break;
    }
    case 65470:
    {
        returnValue = F("Brückwiesenweg");
        break;
    }
    case 65471:
    {
        returnValue = F("Brückäckerstr.");
        break;
    }
    case 65472:
    {
        returnValue = F("Brüddewarder Weg");
        break;
    }
    case 65473:
    {
        returnValue = F("Brüdenbachbrücke");
        break;
    }
    case 65474:
    {
        returnValue = F("Brüdener Str.");
        break;
    }
    case 65475:
    {
        returnValue = F("Brüdenwiesen");
        break;
    }
    case 65476:
    {
        returnValue = F("Brüder Fischinger Str.");
        break;
    }
    case 65477:
    {
        returnValue = F("Brüder-Bauer-Str.");
        break;
    }
    case 65478:
    {
        returnValue = F("Brüder-Busch-Str.");
        break;
    }
    case 65479:
    {
        returnValue = F("Brüder-Busch-Weg");
        break;
    }
    case 65480:
    {
        returnValue = F("Brüder-Grimm-Str.");
        break;
    }
    case 65481:
    {
        returnValue = F("Brüder-Grimm-Weg");
        break;
    }
    case 65482:
    {
        returnValue = F("Brüder-Kurzschenkel-Str.");
        break;
    }
    case 65483:
    {
        returnValue = F("Brüder-Lang-Str.");
        break;
    }
    case 65484:
    {
        returnValue = F("Brüder-Licht-Weg");
        break;
    }
    case 65485:
    {
        returnValue = F("Brüder-Walburger-Wallstr.");
        break;
    }
    case 65486:
    {
        returnValue = F("Brüder-Zimmermann-Str.");
        break;
    }
    case 65487:
    {
        returnValue = F("Brüderbornweg");
        break;
    }
    case 65488:
    {
        returnValue = F("Brüdergasse");
        break;
    }
    case 65489:
    {
        returnValue = F("Brüderkirchhof");
        break;
    }
    case 65490:
    {
        returnValue = F("Brüderstr.");
        break;
    }
    case 65491:
    {
        returnValue = F("Brüdertor");
        break;
    }
    case 65492:
    {
        returnValue = F("Brüderweg");
        break;
    }
    case 65493:
    {
        returnValue = F("Brüderwies");
        break;
    }
    case 65494:
    {
        returnValue = F("Brüeler Chaussee");
        break;
    }
    case 65495:
    {
        returnValue = F("Brüeler Str.");
        break;
    }
    case 65496:
    {
        returnValue = F("Brüeler Weg");
        break;
    }
    case 65497:
    {
        returnValue = F("Brügel");
        break;
    }
    case 65498:
    {
        returnValue = F("Brügelbündt");
        break;
    }
    case 65499:
    {
        returnValue = F("Brügelgasse");
        break;
    }
    case 65500:
    {
        returnValue = F("Brügelmatt");
        break;
    }
    case 65501:
    {
        returnValue = F("Brügelweg");
        break;
    }
    case 65502:
    {
        returnValue = F("Brügge");
        break;
    }
    case 65503:
    {
        returnValue = F("Brüggeberger Str.");
        break;
    }
    case 65504:
    {
        returnValue = F("Brüggedamm");
        break;
    }
    case 65505:
    {
        returnValue = F("Brüggefeld");
        break;
    }
    case 65506:
    {
        returnValue = F("Brüggefeldweg");
        break;
    }
    case 65507:
    {
        returnValue = F("Brüggehof");
        break;
    }
    case 65508:
    {
        returnValue = F("Brüggehofstr.");
        break;
    }
    case 65509:
    {
        returnValue = F("Brüggekamp");
        break;
    }
    case 65510:
    {
        returnValue = F("Brüggelieth");
        break;
    }
    case 65511:
    {
        returnValue = F("Brüggemannstr.");
        break;
    }
    case 65512:
    {
        returnValue = F("Brüggemeyers Kamp");
        break;
    }
    case 65513:
    {
        returnValue = F("Brüggemühle");
        break;
    }
    case 65514:
    {
        returnValue = F("Brüggenanger");
        break;
    }
    case 65515:
    {
        returnValue = F("Brüggenbruch");
        break;
    }
    case 65516:
    {
        returnValue = F("Brüggendyck");
        break;
    }
    case 65517:
    {
        returnValue = F("Brüggener Hütte");
        break;
    }
    case 65518:
    {
        returnValue = F("Brüggener Str.");
        break;
    }
    case 65519:
    {
        returnValue = F("Brüggener Weg");
        break;
    }
    case 65520:
    {
        returnValue = F("Brüggenfeld");
        break;
    }
    case 65521:
    {
        returnValue = F("Brüggengasse");
        break;
    }
    case 65522:
    {
        returnValue = F("Brüggenkamp");
        break;
    }
    case 65523:
    {
        returnValue = F("Brüggenkampstr.");
        break;
    }
    case 65524:
    {
        returnValue = F("Brüggenkolk");
        break;
    }
    case 65525:
    {
        returnValue = F("Brüggensiek");
        break;
    }
    case 65526:
    {
        returnValue = F("Brüggenstr.");
        break;
    }
    case 65527:
    {
        returnValue = F("Brügger Chaussee");
        break;
    }
    case 65528:
    {
        returnValue = F("Brügger Eck");
        break;
    }
    case 65529:
    {
        returnValue = F("Brügger Hof");
        break;
    }
    case 65530:
    {
        returnValue = F("Brügger Höh");
        break;
    }
    case 65531:
    {
        returnValue = F("Brügger Redder");
        break;
    }
    case 65532:
    {
        returnValue = F("Brügger Str.");
        break;
    }
    case 65533:
    {
        returnValue = F("Brügger Weg");
        break;
    }
    case 65534:
    {
        returnValue = F("Brüggereschweg");
        break;
    }
    case 65535:
    {
        returnValue = F("Brüggerfeld");
        break;
    }
    case 65536:
    {
        returnValue = F("Brüggerfelder Str.");
        break;
    }
    case 65537:
    {
        returnValue = F("Brüggerhof");
        break;
    }
    case 65538:
    {
        returnValue = F("Brüggering");
        break;
    }
    case 65539:
    {
        returnValue = F("Brüggersberg");
        break;
    }
    case 65540:
    {
        returnValue = F("Brüggerstr.");
        break;
    }
    case 65541:
    {
        returnValue = F("Brüggersweg");
        break;
    }
    case 65542:
    {
        returnValue = F("Brüggerweg");
        break;
    }
    case 65543:
    {
        returnValue = F("Brüggestr.");
        break;
    }
    case 65544:
    {
        returnValue = F("Brüggeweg");
        break;
    }
    case 65545:
    {
        returnValue = F("Brüggfelde");
        break;
    }
    case 65546:
    {
        returnValue = F("Brügghamm");
        break;
    }
    case 65547:
    {
        returnValue = F("Brüggkamp");
        break;
    }
    case 65548:
    {
        returnValue = F("Brüggkoppel");
        break;
    }
    case 65549:
    {
        returnValue = F("Brüggstr.");
        break;
    }
    case 65550:
    {
        returnValue = F("Brüggweg");
        break;
    }
    case 65551:
    {
        returnValue = F("Brüghof");
        break;
    }
    case 65552:
    {
        returnValue = F("Brügkamp");
        break;
    }
    case 65553:
    {
        returnValue = F("Brügmann-Ring");
        break;
    }
    case 65554:
    {
        returnValue = F("Brügmanstr.");
        break;
    }
    case 65555:
    {
        returnValue = F("Brügstr.");
        break;
    }
    case 65556:
    {
        returnValue = F("Brüheimer Str.");
        break;
    }
    case 65557:
    {
        returnValue = F("Brühfeld");
        break;
    }
    case 65558:
    {
        returnValue = F("Brühfeldweg");
        break;
    }
    case 65559:
    {
        returnValue = F("Brühl");
        break;
    }
    case 65560:
    {
        returnValue = F("Brühl-Weiher-Str.");
        break;
    }
    case 65561:
    {
        returnValue = F("Brühland");
        break;
    }
    case 65562:
    {
        returnValue = F("Brühlbachstr.");
        break;
    }
    case 65563:
    {
        returnValue = F("Brühlbachweg");
        break;
    }
    case 65564:
    {
        returnValue = F("Brühlberg");
        break;
    }
    case 65565:
    {
        returnValue = F("Brühlchaussee");
        break;
    }
    case 65566:
    {
        returnValue = F("Brühldurchbruch");
        break;
    }
    case 65567:
    {
        returnValue = F("Brühlensgasse");
        break;
    }
    case 65568:
    {
        returnValue = F("Brühler Allee");
        break;
    }
    case 65569:
    {
        returnValue = F("Brühler Garten");
        break;
    }
    case 65570:
    {
        returnValue = F("Brühler Landstr.");
        break;
    }
    case 65571:
    {
        returnValue = F("Brühler Str.");
        break;
    }
    case 65572:
    {
        returnValue = F("Brühler Sträßchen");
        break;
    }
    case 65573:
    {
        returnValue = F("Brühler Weg");
        break;
    }
    case 65574:
    {
        returnValue = F("Brühlerstr.");
        break;
    }
    case 65575:
    {
        returnValue = F("Brühlesheckenweg");
        break;
    }
    case 65576:
    {
        returnValue = F("Brühleweg");
        break;
    }
    case 65577:
    {
        returnValue = F("Brühlfahrt");
        break;
    }
    case 65578:
    {
        returnValue = F("Brühlgarten");
        break;
    }
    case 65579:
    {
        returnValue = F("Brühlgartenweg");
        break;
    }
    case 65580:
    {
        returnValue = F("Brühlgass");
        break;
    }
    case 65581:
    {
        returnValue = F("Brühlgasse");
        break;
    }
    case 65582:
    {
        returnValue = F("Brühlgrabenstr.");
        break;
    }
    case 65583:
    {
        returnValue = F("Brühlgärten");
        break;
    }
    case 65584:
    {
        returnValue = F("Brühlgässle");
        break;
    }
    case 65585:
    {
        returnValue = F("Brühlgäßle");
        break;
    }
    case 65586:
    {
        returnValue = F("Brühlhag");
        break;
    }
    case 65587:
    {
        returnValue = F("Brühlhalde");
        break;
    }
    case 65588:
    {
        returnValue = F("Brühlhof");
        break;
    }
    case 65589:
    {
        returnValue = F("Brühlhofstr.");
        break;
    }
    case 65590:
    {
        returnValue = F("Brühlhofweg");
        break;
    }
    case 65591:
    {
        returnValue = F("Brühlmatten");
        break;
    }
    case 65592:
    {
        returnValue = F("Brühlmoosweg");
        break;
    }
    case 65593:
    {
        returnValue = F("Brühloderweg");
        break;
    }
    case 65594:
    {
        returnValue = F("Brühlpforte");
        break;
    }
    case 65595:
    {
        returnValue = F("Brühlscher Weg");
        break;
    }
    case 65596:
    {
        returnValue = F("Brühlsteige");
        break;
    }
    case 65597:
    {
        returnValue = F("Brühlstr.");
        break;
    }
    case 65598:
    {
        returnValue = F("Brühlsweg");
        break;
    }
    case 65599:
    {
        returnValue = F("Brühltaler Mühle");
        break;
    }
    case 65600:
    {
        returnValue = F("Brühltalstr.");
        break;
    }
    case 65601:
    {
        returnValue = F("Brühlwasserstr.");
        break;
    }
    case 65602:
    {
        returnValue = F("Brühlweg");
        break;
    }
    case 65603:
    {
        returnValue = F("Brühlwiese");
        break;
    }
    case 65604:
    {
        returnValue = F("Brühlwiesen");
        break;
    }
    case 65605:
    {
        returnValue = F("Brühlwiesenstr.");
        break;
    }
    case 65606:
    {
        returnValue = F("Brühlwiesenweg");
        break;
    }
    case 65607:
    {
        returnValue = F("Brühlzaun");
        break;
    }
    case 65608:
    {
        returnValue = F("Brühläcker");
        break;
    }
    case 65609:
    {
        returnValue = F("Brühläckerle");
        break;
    }
    case 65610:
    {
        returnValue = F("Brühnen Wiese");
        break;
    }
    case 65611:
    {
        returnValue = F("Brühnersteinweg");
        break;
    }
    case 65612:
    {
        returnValue = F("Brüllender Löwe");
        break;
    }
    case 65613:
    {
        returnValue = F("Brüllsche Str.");
        break;
    }
    case 65614:
    {
        returnValue = F("Brüllweg");
        break;
    }
    case 65615:
    {
        returnValue = F("Brümburgstr.");
        break;
    }
    case 65616:
    {
        returnValue = F("Brümmelstr.");
        break;
    }
    case 65617:
    {
        returnValue = F("Brümmenrechstr.");
        break;
    }
    case 65618:
    {
        returnValue = F("Brümmerhofer Weg");
        break;
    }
    case 65619:
    {
        returnValue = F("Brümmerkamp");
        break;
    }
    case 65620:
    {
        returnValue = F("Brümmerloher Gärten");
        break;
    }
    case 65621:
    {
        returnValue = F("Brümmerloher Weg");
        break;
    }
    case 65622:
    {
        returnValue = F("Brümmers Kamp");
        break;
    }
    case 65623:
    {
        returnValue = F("Brümmersmoor");
        break;
    }
    case 65624:
    {
        returnValue = F("Brümmerweg");
        break;
    }
    case 65625:
    {
        returnValue = F("Brümseler Damm");
        break;
    }
    case 65626:
    {
        returnValue = F("Brümseler Str.");
        break;
    }
    case 65627:
    {
        returnValue = F("Brümser Kamp");
        break;
    }
    case 65628:
    {
        returnValue = F("Bründelkampsweg");
        break;
    }
    case 65629:
    {
        returnValue = F("Bründelsberg");
        break;
    }
    case 65630:
    {
        returnValue = F("Bründelstr.");
        break;
    }
    case 65631:
    {
        returnValue = F("Bründelweg");
        break;
    }
    case 65632:
    {
        returnValue = F("Bründlbachweg");
        break;
    }
    case 65633:
    {
        returnValue = F("Bründlgartenstr.");
        break;
    }
    case 65634:
    {
        returnValue = F("Bründlgasse");
        break;
    }
    case 65635:
    {
        returnValue = F("Bründlplatz");
        break;
    }
    case 65636:
    {
        returnValue = F("Bründlring");
        break;
    }
    case 65637:
    {
        returnValue = F("Bründlsberggasse");
        break;
    }
    case 65638:
    {
        returnValue = F("Bründlsteg");
        break;
    }
    case 65639:
    {
        returnValue = F("Bründlstr.");
        break;
    }
    case 65640:
    {
        returnValue = F("Bründlweg");
        break;
    }
    case 65641:
    {
        returnValue = F("Bründlwiese");
        break;
    }
    case 65642:
    {
        returnValue = F("Brüne");
        break;
    }
    case 65643:
    {
        returnValue = F("Brüne-Rustedt-Str.");
        break;
    }
    case 65644:
    {
        returnValue = F("Brünebrede");
        break;
    }
    case 65645:
    {
        returnValue = F("Brünemanns Holz");
        break;
    }
    case 65646:
    {
        returnValue = F("Brünener Str.");
        break;
    }
    case 65647:
    {
        returnValue = F("Brüner Landstr.");
        break;
    }
    case 65648:
    {
        returnValue = F("Brüner Str.");
        break;
    }
    case 65649:
    {
        returnValue = F("Brüner Weg");
        break;
    }
    case 65650:
    {
        returnValue = F("Brüner-Tor-Platz");
        break;
    }
    case 65651:
    {
        returnValue = F("Brünesholzstr.");
        break;
    }
    case 65652:
    {
        returnValue = F("Brünestr.");
        break;
    }
    case 65653:
    {
        returnValue = F("Brüngesrather Str.");
        break;
    }
    case 65654:
    {
        returnValue = F("Brünglinghausen");
        break;
    }
    case 65655:
    {
        returnValue = F("Brüngsberger Str.");
        break;
    }
    case 65656:
    {
        returnValue = F("Brüninger Weg");
        break;
    }
    case 65657:
    {
        returnValue = F("Brüninghausen");
        break;
    }
    case 65658:
    {
        returnValue = F("Brüninghauser Str.");
        break;
    }
    case 65659:
    {
        returnValue = F("Brüninghausstr.");
        break;
    }
    case 65660:
    {
        returnValue = F("Brüninghemm");
        break;
    }
    case 65661:
    {
        returnValue = F("Brüninghorstedt");
        break;
    }
    case 65662:
    {
        returnValue = F("Brüninglohne");
        break;
    }
    case 65663:
    {
        returnValue = F("Brünings Kamp");
        break;
    }
    case 65664:
    {
        returnValue = F("Brüningser Str.");
        break;
    }
    case 65665:
    {
        returnValue = F("Brüningshof");
        break;
    }
    case 65666:
    {
        returnValue = F("Brüningskamp");
        break;
    }
    case 65667:
    {
        returnValue = F("Brüningstr.");
        break;
    }
    case 65668:
    {
        returnValue = F("Brüningsweg");
        break;
    }
    case 65669:
    {
        returnValue = F("Brüningweg");
        break;
    }
    case 65670:
    {
        returnValue = F("Brünlasberg");
        break;
    }
    case 65671:
    {
        returnValue = F("Brünlisbach");
        break;
    }
    case 65672:
    {
        returnValue = F("Brünloser Hauptstr.");
        break;
    }
    case 65673:
    {
        returnValue = F("Brünloser Steig");
        break;
    }
    case 65674:
    {
        returnValue = F("Brünnau");
        break;
    }
    case 65675:
    {
        returnValue = F("Brünnauer Str.");
        break;
    }
    case 65676:
    {
        returnValue = F("Brünnchenweg");
        break;
    }
    case 65677:
    {
        returnValue = F("Brünndler Weg");
        break;
    }
    case 65678:
    {
        returnValue = F("Brünndlweg");
        break;
    }
    case 65679:
    {
        returnValue = F("Brünnelallee");
        break;
    }
    case 65680:
    {
        returnValue = F("Brünnelebuck");
        break;
    }
    case 65681:
    {
        returnValue = F("Brünnelegarten");
        break;
    }
    case 65682:
    {
        returnValue = F("Brünnelesberg");
        break;
    }
    case 65683:
    {
        returnValue = F("Brünnelesteichweg");
        break;
    }
    case 65684:
    {
        returnValue = F("Brünnelestr.");
        break;
    }
    case 65685:
    {
        returnValue = F("Brünnelesweg");
        break;
    }
    case 65686:
    {
        returnValue = F("Brünnelesweiher");
        break;
    }
    case 65687:
    {
        returnValue = F("Brünneleswiesen");
        break;
    }
    case 65688:
    {
        returnValue = F("Brünneleweg");
        break;
    }
    case 65689:
    {
        returnValue = F("Brünnelsgrabenweg");
        break;
    }
    case 65690:
    {
        returnValue = F("Brünnelsweg");
        break;
    }
    case 65691:
    {
        returnValue = F("Brünnelweg");
        break;
    }
    case 65692:
    {
        returnValue = F("Brünnensbach");
        break;
    }
    case 65693:
    {
        returnValue = F("Brünner Dorfstr.");
        break;
    }
    case 65694:
    {
        returnValue = F("Brünner Str.");
        break;
    }
    case 65695:
    {
        returnValue = F("Brünner Weg");
        break;
    }
    case 65696:
    {
        returnValue = F("Brünnerlweg");
        break;
    }
    case 65697:
    {
        returnValue = F("Brünnerstieg");
        break;
    }
    case 65698:
    {
        returnValue = F("Brünnerstr.");
        break;
    }
    case 65699:
    {
        returnValue = F("Brünnfluß");
        break;
    }
    case 65700:
    {
        returnValue = F("Brünngasse");
        break;
    }
    case 65701:
    {
        returnValue = F("Brünning");
        break;
    }
    case 65702:
    {
        returnValue = F("Brünning Mersch");
        break;
    }
    case 65703:
    {
        returnValue = F("Brünnisbrunnenweg");
        break;
    }
    case 65704:
    {
        returnValue = F("Brünnle");
        break;
    }
    case 65705:
    {
        returnValue = F("Brünnlein-Weg");
        break;
    }
    case 65706:
    {
        returnValue = F("Brünnleinstr.");
        break;
    }
    case 65707:
    {
        returnValue = F("Brünnleinsweg");
        break;
    }
    case 65708:
    {
        returnValue = F("Brünnleinswiesen");
        break;
    }
    case 65709:
    {
        returnValue = F("Brünnleinweg");
        break;
    }
    case 65710:
    {
        returnValue = F("Brünnlekurve");
        break;
    }
    case 65711:
    {
        returnValue = F("Brünnlesstr.");
        break;
    }
    case 65712:
    {
        returnValue = F("Brünnlestellenweg");
        break;
    }
    case 65713:
    {
        returnValue = F("Brünnlestr.");
        break;
    }
    case 65714:
    {
        returnValue = F("Brünnlesweg");
        break;
    }
    case 65715:
    {
        returnValue = F("Brünnlesäcker");
        break;
    }
    case 65716:
    {
        returnValue = F("Brünnleweg");
        break;
    }
    case 65717:
    {
        returnValue = F("Brünnlfeldstr.");
        break;
    }
    case 65718:
    {
        returnValue = F("Brünnlstr.");
        break;
    }
    case 65719:
    {
        returnValue = F("Brünnlweg");
        break;
    }
    case 65720:
    {
        returnValue = F("Brünnscher Berg");
        break;
    }
    case 65721:
    {
        returnValue = F("Brünnsteinstr.");
        break;
    }
    case 65722:
    {
        returnValue = F("Brünnsteinweg");
        break;
    }
    case 65723:
    {
        returnValue = F("Brünnstädter Str.");
        break;
    }
    case 65724:
    {
        returnValue = F("Brünnthal");
        break;
    }
    case 65725:
    {
        returnValue = F("Brünnweg");
        break;
    }
    case 65726:
    {
        returnValue = F("Brünnäckerweg");
        break;
    }
    case 65727:
    {
        returnValue = F("Brünsbacher Weg");
        break;
    }
    case 65728:
    {
        returnValue = F("Brünsee");
        break;
    }
    case 65729:
    {
        returnValue = F("Brünskamp");
        break;
    }
    case 65730:
    {
        returnValue = F("Brünst");
        break;
    }
    case 65731:
    {
        returnValue = F("Brünsteinweg");
        break;
    }
    case 65732:
    {
        returnValue = F("Brünster Hof");
        break;
    }
    case 65733:
    {
        returnValue = F("Brünster Str.");
        break;
    }
    case 65734:
    {
        returnValue = F("Brünstlkopfweg");
        break;
    }
    case 65735:
    {
        returnValue = F("Brünststr.");
        break;
    }
    case 65736:
    {
        returnValue = F("Brünstweg");
        break;
    }
    case 65737:
    {
        returnValue = F("Brünsweg");
        break;
    }
    case 65738:
    {
        returnValue = F("Brüntruper Str.");
        break;
    }
    case 65739:
    {
        returnValue = F("Brünzower Wende");
        break;
    }
    case 65740:
    {
        returnValue = F("Brüschweg");
        break;
    }
    case 65741:
    {
        returnValue = F("Brüsenhagen");
        break;
    }
    case 65742:
    {
        returnValue = F("Brüsenwalde");
        break;
    }
    case 65743:
    {
        returnValue = F("Brüser-Kuhnow-Str.");
        break;
    }
    case 65744:
    {
        returnValue = F("Brüsewitzer Str.");
        break;
    }
    case 65745:
    {
        returnValue = F("Brüsseler Allee");
        break;
    }
    case 65746:
    {
        returnValue = F("Brüsseler Ring");
        break;
    }
    case 65747:
    {
        returnValue = F("Brüsseler Str.");
        break;
    }
    case 65748:
    {
        returnValue = F("Brüsseler Strasse");
        break;
    }
    case 65749:
    {
        returnValue = F("Brüsseler Weg");
        break;
    }
    case 65750:
    {
        returnValue = F("Brüsselstr.");
        break;
    }
    case 65751:
    {
        returnValue = F("Brüsselweg");
        break;
    }
    case 65752:
    {
        returnValue = F("Brüssower Allee");
        break;
    }
    case 65753:
    {
        returnValue = F("Brüssower Str.");
        break;
    }
    case 65754:
    {
        returnValue = F("Brüttenland");
        break;
    }
    case 65755:
    {
        returnValue = F("Brüttstr.");
        break;
    }
    case 65756:
    {
        returnValue = F("Brützer Bauern");
        break;
    }
    case 65757:
    {
        returnValue = F("Brüxer Str.");
        break;
    }
    case 65758:
    {
        returnValue = F("Brüxer Weg");
        break;
    }
    case 65759:
    {
        returnValue = F("Brüxkener Str.");
        break;
    }
    case 65760:
    {
        returnValue = F("Brüxweg");
        break;
    }
    case 65761:
    {
        returnValue = F("Brüzer Weg");
        break;
    }
    case 65762:
    {
        returnValue = F("Bschorerstr.");
        break;
    }
    case 65763:
    {
        returnValue = F("Bschorrwald");
        break;
    }
    case 65764:
    {
        returnValue = F("Bschütt");
        break;
    }
    case 65765:
    {
        returnValue = F("Bsuchweg");
        break;
    }
    case 65766:
    {
        returnValue = F("Bubacher Ring");
        break;
    }
    case 65767:
    {
        returnValue = F("Bubacher Str.");
        break;
    }
    case 65768:
    {
        returnValue = F("Bubacher Weg");
        break;
    }
    case 65769:
    {
        returnValue = F("Bubachstr.");
        break;
    }
    case 65770:
    {
        returnValue = F("Bubbecke");
        break;
    }
    case 65771:
    {
        returnValue = F("Bubcheschneise");
        break;
    }
    case 65772:
    {
        returnValue = F("Bubenbacher Str.");
        break;
    }
    case 65773:
    {
        returnValue = F("Bubenberger Weg");
        break;
    }
    case 65774:
    {
        returnValue = F("Bubenbrunnenweg");
        break;
    }
    case 65775:
    {
        returnValue = F("Bubenburgstr.");
        break;
    }
    case 65776:
    {
        returnValue = F("Bubendorfer Str.");
        break;
    }
    case 65777:
    {
        returnValue = F("Bubendorfer Weg");
        break;
    }
    case 65778:
    {
        returnValue = F("Bubeneck");
        break;
    }
    case 65779:
    {
        returnValue = F("Bubenfeldstr.");
        break;
    }
    case 65780:
    {
        returnValue = F("Bubengasse");
        break;
    }
    case 65781:
    {
        returnValue = F("Bubengässchen");
        break;
    }
    case 65782:
    {
        returnValue = F("Bubenhalde");
        break;
    }
    case 65783:
    {
        returnValue = F("Bubenhauser Kreisel");
        break;
    }
    case 65784:
    {
        returnValue = F("Bubenhauser Str.");
        break;
    }
    case 65785:
    {
        returnValue = F("Bubenhauweg");
        break;
    }
    case 65786:
    {
        returnValue = F("Bubenhecke");
        break;
    }
    case 65787:
    {
        returnValue = F("Bubenheim");
        break;
    }
    case 65788:
    {
        returnValue = F("Bubenheimer Str.");
        break;
    }
    case 65789:
    {
        returnValue = F("Bubenheimer Weg");
        break;
    }
    case 65790:
    {
        returnValue = F("Bubenhof");
        break;
    }
    case 65791:
    {
        returnValue = F("Bubenhofenstr.");
        break;
    }
    case 65792:
    {
        returnValue = F("Bubenhofenweg");
        break;
    }
    case 65793:
    {
        returnValue = F("Bubenholzweg");
        break;
    }
    case 65794:
    {
        returnValue = F("Bubenhäuser Str.");
        break;
    }
    case 65795:
    {
        returnValue = F("Bubenhöhe");
        break;
    }
    case 65796:
    {
        returnValue = F("Bubenlachring");
        break;
    }
    case 65797:
    {
        returnValue = F("Bubenlohe");
        break;
    }
    case 65798:
    {
        returnValue = F("Bubenmühle");
        break;
    }
    case 65799:
    {
        returnValue = F("Bubenorbiser Str.");
        break;
    }
    case 65800:
    {
        returnValue = F("Bubenreuther Str.");
        break;
    }
    case 65801:
    {
        returnValue = F("Bubenroder Str.");
        break;
    }
    case 65802:
    {
        returnValue = F("Bubenruthiastr.");
        break;
    }
    case 65803:
    {
        returnValue = F("Bubensteig");
        break;
    }
    case 65804:
    {
        returnValue = F("Bubensteige");
        break;
    }
    case 65805:
    {
        returnValue = F("Bubenstr.");
        break;
    }
    case 65806:
    {
        returnValue = F("Bubenstück");
        break;
    }
    case 65807:
    {
        returnValue = F("Bubensulz");
        break;
    }
    case 65808:
    {
        returnValue = F("Bubental");
        break;
    }
    case 65809:
    {
        returnValue = F("Bubentälweg");
        break;
    }
    case 65810:
    {
        returnValue = F("Bubenweg");
        break;
    }
    case 65811:
    {
        returnValue = F("Bubenwiese");
        break;
    }
    case 65812:
    {
        returnValue = F("Buber-Weg");
        break;
    }
    case 65813:
    {
        returnValue = F("Buberle MatMat Weg");
        break;
    }
    case 65814:
    {
        returnValue = F("Buberower Weg");
        break;
    }
    case 65815:
    {
        returnValue = F("Bubertsort");
        break;
    }
    case 65816:
    {
        returnValue = F("Bubertstr.");
        break;
    }
    case 65817:
    {
        returnValue = F("Buberweg");
        break;
    }
    case 65818:
    {
        returnValue = F("Bubesheimer Str.");
        break;
    }
    case 65819:
    {
        returnValue = F("Bublava");
        break;
    }
    case 65820:
    {
        returnValue = F("Bublitzer Str.");
        break;
    }
    case 65821:
    {
        returnValue = F("Bubornstr.");
        break;
    }
    case 65822:
    {
        returnValue = F("Buboweg");
        break;
    }
    case 65823:
    {
        returnValue = F("Bubsberg");
        break;
    }
    case 65824:
    {
        returnValue = F("Bubsgäßchen");
        break;
    }
    case 65825:
    {
        returnValue = F("Bubsheimer Str.");
        break;
    }
    case 65826:
    {
        returnValue = F("Bubsheimer Weg");
        break;
    }
    case 65827:
    {
        returnValue = F("Bubshornweg");
        break;
    }
    case 65828:
    {
        returnValue = F("Bubwiesenstr.");
        break;
    }
    case 65829:
    {
        returnValue = F("Bubwiesenweg");
        break;
    }
    case 65830:
    {
        returnValue = F("Bucentaurpark „Schiffswiesen“ mit Planetenweg");
        break;
    }
    case 65831:
    {
        returnValue = F("Bucergässchen");
        break;
    }
    case 65832:
    {
        returnValue = F("Bucgwaldstr.");
        break;
    }
    case 65833:
    {
        returnValue = F("Buch");
        break;
    }
    case 65834:
    {
        returnValue = F("Buch-Busch Weg");
        break;
    }
    case 65835:
    {
        returnValue = F("Buchackerstr.");
        break;
    }
    case 65836:
    {
        returnValue = F("Buchackerweg");
        break;
    }
    case 65837:
    {
        returnValue = F("Buchaer Str.");
        break;
    }
    case 65838:
    {
        returnValue = F("Buchangerweg");
        break;
    }
    case 65839:
    {
        returnValue = F("Buchar");
        break;
    }
    case 65840:
    {
        returnValue = F("Buchau");
        break;
    }
    case 65841:
    {
        returnValue = F("Buchau-Sackweg");
        break;
    }
    case 65842:
    {
        returnValue = F("Buchauer Platz");
        break;
    }
    case 65843:
    {
        returnValue = F("Buchauer Str.");
        break;
    }
    case 65844:
    {
        returnValue = F("Buchauerweg");
        break;
    }
    case 65845:
    {
        returnValue = F("Buchauweg");
        break;
    }
    case 65846:
    {
        returnValue = F("Buchbach");
        break;
    }
    case 65847:
    {
        returnValue = F("Buchbacher Str.");
        break;
    }
    case 65848:
    {
        returnValue = F("Buchbachstr.");
        break;
    }
    case 65849:
    {
        returnValue = F("Buchbachweg");
        break;
    }
    case 65850:
    {
        returnValue = F("Buchbauernberg");
        break;
    }
    case 65851:
    {
        returnValue = F("Buchbaumpfad");
        break;
    }
    case 65852:
    {
        returnValue = F("Buchbaumstr.");
        break;
    }
    case 65853:
    {
        returnValue = F("Buchberg");
        break;
    }
    case 65854:
    {
        returnValue = F("Buchbergblick");
        break;
    }
    case 65855:
    {
        returnValue = F("Buchberger Leite");
        break;
    }
    case 65856:
    {
        returnValue = F("Buchberger Str.");
        break;
    }
    case 65857:
    {
        returnValue = F("Buchberger Weg");
        break;
    }
    case 65858:
    {
        returnValue = F("Buchbergerstr.");
        break;
    }
    case 65859:
    {
        returnValue = F("Buchbergring");
        break;
    }
    case 65860:
    {
        returnValue = F("Buchbergsteige");
        break;
    }
    case 65861:
    {
        returnValue = F("Buchbergstr.");
        break;
    }
    case 65862:
    {
        returnValue = F("Buchbergweg");
        break;
    }
    case 65863:
    {
        returnValue = F("Buchbichl");
        break;
    }
    case 65864:
    {
        returnValue = F("Buchbindergasse");
        break;
    }
    case 65865:
    {
        returnValue = F("Buchbinderstr.");
        break;
    }
    case 65866:
    {
        returnValue = F("Buchbinderweg");
        break;
    }
    case 65867:
    {
        returnValue = F("Buchbitze");
        break;
    }
    case 65868:
    {
        returnValue = F("Buchblick");
        break;
    }
    case 65869:
    {
        returnValue = F("Buchbornweg");
        break;
    }
    case 65870:
    {
        returnValue = F("Buchbrink");
        break;
    }
    case 65871:
    {
        returnValue = F("Buchbronnenweg");
        break;
    }
    case 65872:
    {
        returnValue = F("Buchbrunnenweg");
        break;
    }
    case 65873:
    {
        returnValue = F("Buchbrunner Str.");
        break;
    }
    case 65874:
    {
        returnValue = F("Buchbrünnleweg");
        break;
    }
    case 65875:
    {
        returnValue = F("Buchbuhlweg");
        break;
    }
    case 65876:
    {
        returnValue = F("Buchbuschweg");
        break;
    }
    case 65877:
    {
        returnValue = F("Buchbühl-Weg");
        break;
    }
    case 65878:
    {
        returnValue = F("Buchbühlstr.");
        break;
    }
    case 65879:
    {
        returnValue = F("Buchbühlweg");
        break;
    }
    case 65880:
    {
        returnValue = F("Buchdell");
        break;
    }
    case 65881:
    {
        returnValue = F("Buchdellstr.");
        break;
    }
    case 65882:
    {
        returnValue = F("Buchdorfer Str.");
        break;
    }
    case 65883:
    {
        returnValue = F("Buchdruckergasse");
        break;
    }
    case 65884:
    {
        returnValue = F("Buchdruckerwiesen");
        break;
    }
    case 65885:
    {
        returnValue = F("Buche");
        break;
    }
    case 65886:
    {
        returnValue = F("Buchebeleweg");
        break;
    }
    case 65887:
    {
        returnValue = F("Buchebelweg");
        break;
    }
    case 65888:
    {
        returnValue = F("Buchebeneweg");
        break;
    }
    case 65889:
    {
        returnValue = F("Bucheck");
        break;
    }
    case 65890:
    {
        returnValue = F("Buchecker Weg");
        break;
    }
    case 65891:
    {
        returnValue = F("Bucheckern");
        break;
    }
    case 65892:
    {
        returnValue = F("Bucheckernweg");
        break;
    }
    case 65893:
    {
        returnValue = F("Bucheichsträßchen");
        break;
    }
    case 65894:
    {
        returnValue = F("Bucheleweg");
        break;
    }
    case 65895:
    {
        returnValue = F("Bucheller");
        break;
    }
    case 65896:
    {
        returnValue = F("Buchelweg");
        break;
    }
    case 65897:
    {
        returnValue = F("Buchen");
        break;
    }
    case 65898:
    {
        returnValue = F("Buchenacker");
        break;
    }
    case 65899:
    {
        returnValue = F("Buchenackerstr.");
        break;
    }
    case 65900:
    {
        returnValue = F("Buchenallee");
        break;
    }
    case 65901:
    {
        returnValue = F("Buchenau");
        break;
    }
    case 65902:
    {
        returnValue = F("Buchenau (S-Bahn)");
        break;
    }
    case 65903:
    {
        returnValue = F("Buchenauer Platz");
        break;
    }
    case 65904:
    {
        returnValue = F("Buchenauer Str.");
        break;
    }
    case 65905:
    {
        returnValue = F("Buchenauer Weg");
        break;
    }
    case 65906:
    {
        returnValue = F("Buchenauerhof");
        break;
    }
    case 65907:
    {
        returnValue = F("Buchenaustr.");
        break;
    }
    case 65908:
    {
        returnValue = F("Buchenbacher Str.");
        break;
    }
    case 65909:
    {
        returnValue = F("Buchenbachhof");
        break;
    }
    case 65910:
    {
        returnValue = F("Buchenbachstr.");
        break;
    }
    case 65911:
    {
        returnValue = F("Buchenbachweg");
        break;
    }
    case 65912:
    {
        returnValue = F("Buchenberg");
        break;
    }
    case 65913:
    {
        returnValue = F("Buchenberg Rundweg");
        break;
    }
    case 65914:
    {
        returnValue = F("Buchenberger Str.");
        break;
    }
    case 65915:
    {
        returnValue = F("Buchenbergstr.");
        break;
    }
    case 65916:
    {
        returnValue = F("Buchenbergweg");
        break;
    }
    case 65917:
    {
        returnValue = F("Buchenbichl");
        break;
    }
    case 65918:
    {
        returnValue = F("Buchenblick");
        break;
    }
    case 65919:
    {
        returnValue = F("Buchenborn");
        break;
    }
    case 65920:
    {
        returnValue = F("Buchenbornstr.");
        break;
    }
    case 65921:
    {
        returnValue = F("Buchenbrandstr.");
        break;
    }
    case 65922:
    {
        returnValue = F("Buchenbrinkstr.");
        break;
    }
    case 65923:
    {
        returnValue = F("Buchenbrunn");
        break;
    }
    case 65924:
    {
        returnValue = F("Buchenbusch");
        break;
    }
    case 65925:
    {
        returnValue = F("Buchenbuschweg");
        break;
    }
    case 65926:
    {
        returnValue = F("Buchenbühl");
        break;
    }
    case 65927:
    {
        returnValue = F("Buchenbühler Str.");
        break;
    }
    case 65928:
    {
        returnValue = F("Buchenbühlweg");
        break;
    }
    case 65929:
    {
        returnValue = F("Buchenbüsch");
        break;
    }
    case 65930:
    {
        returnValue = F("Buchendonk");
        break;
    }
    case 65931:
    {
        returnValue = F("Buchendorfer Geräumt");
        break;
    }
    case 65932:
    {
        returnValue = F("Buchendorfer Kirchenweg");
        break;
    }
    case 65933:
    {
        returnValue = F("Buchendorfer Str.");
        break;
    }
    case 65934:
    {
        returnValue = F("Buchendreieck");
        break;
    }
    case 65935:
    {
        returnValue = F("Bucheneck");
        break;
    }
    case 65936:
    {
        returnValue = F("Bucheneckweg");
        break;
    }
    case 65937:
    {
        returnValue = F("Buchenegg");
        break;
    }
    case 65938:
    {
        returnValue = F("Bucheneichweg");
        break;
    }
    case 65939:
    {
        returnValue = F("Buchenende");
        break;
    }
    case 65940:
    {
        returnValue = F("Buchener Busch");
        break;
    }
    case 65941:
    {
        returnValue = F("Buchener Str.");
        break;
    }
    case 65942:
    {
        returnValue = F("Buchener Weg");
        break;
    }
    case 65943:
    {
        returnValue = F("Buchenerlochweg");
        break;
    }
    case 65944:
    {
        returnValue = F("Buchenfeldstr.");
        break;
    }
    case 65945:
    {
        returnValue = F("Buchenfeldweg");
        break;
    }
    case 65946:
    {
        returnValue = F("Buchenforststr.");
        break;
    }
    case 65947:
    {
        returnValue = F("Buchengarten");
        break;
    }
    case 65948:
    {
        returnValue = F("Buchengartenweg");
        break;
    }
    case 65949:
    {
        returnValue = F("Buchengasse");
        break;
    }
    case 65950:
    {
        returnValue = F("Buchengraben");
        break;
    }
    case 65951:
    {
        returnValue = F("Buchengrabenweg");
        break;
    }
    case 65952:
    {
        returnValue = F("Buchengrund");
        break;
    }
    case 65953:
    {
        returnValue = F("Buchenhagener Str.");
        break;
    }
    case 65954:
    {
        returnValue = F("Buchenhain");
        break;
    }
    case 65955:
    {
        returnValue = F("Buchenhainer Str.");
        break;
    }
    case 65956:
    {
        returnValue = F("Buchenhainweg");
        break;
    }
    case 65957:
    {
        returnValue = F("Buchenhang");
        break;
    }
    case 65958:
    {
        returnValue = F("Buchenhauweg");
        break;
    }
    case 65959:
    {
        returnValue = F("Buchenhecke");
        break;
    }
    case 65960:
    {
        returnValue = F("Buchenheege");
        break;
    }
    case 65961:
    {
        returnValue = F("Buchenheide");
        break;
    }
    case 65962:
    {
        returnValue = F("Buchenhof");
        break;
    }
    case 65963:
    {
        returnValue = F("Buchenhofer Str.");
        break;
    }
    case 65964:
    {
        returnValue = F("Buchenholt");
        break;
    }
    case 65965:
    {
        returnValue = F("Buchenhornerbergweg");
        break;
    }
    case 65966:
    {
        returnValue = F("Buchenhorst");
        break;
    }
    case 65967:
    {
        returnValue = F("Buchenhöhe");
        break;
    }
    case 65968:
    {
        returnValue = F("Buchenhölle");
        break;
    }
    case 65969:
    {
        returnValue = F("Buchenhügel");
        break;
    }
    case 65970:
    {
        returnValue = F("Buchenhügelschneise");
        break;
    }
    case 65971:
    {
        returnValue = F("Buchenhüll");
        break;
    }
    case 65972:
    {
        returnValue = F("Buchenkamp");
        break;
    }
    case 65973:
    {
        returnValue = F("Buchenkampweg");
        break;
    }
    case 65974:
    {
        returnValue = F("Buchenkehre");
        break;
    }
    case 65975:
    {
        returnValue = F("Buchenkopf");
        break;
    }
    case 65976:
    {
        returnValue = F("Buchenkopfweg");
        break;
    }
    case 65977:
    {
        returnValue = F("Buchenkreuzweg");
        break;
    }
    case 65978:
    {
        returnValue = F("Buchenlah");
        break;
    }
    case 65979:
    {
        returnValue = F("Buchenland");
        break;
    }
    case 65980:
    {
        returnValue = F("Buchenlandstr.");
        break;
    }
    case 65981:
    {
        returnValue = F("Buchenlandweg");
        break;
    }
    case 65982:
    {
        returnValue = F("Buchenlocherweg");
        break;
    }
    case 65983:
    {
        returnValue = F("Buchenlochstr.");
        break;
    }
    case 65984:
    {
        returnValue = F("Buchenlochweg");
        break;
    }
    case 65985:
    {
        returnValue = F("Buchenloh");
        break;
    }
    case 65986:
    {
        returnValue = F("Buchenloher Str.");
        break;
    }
    case 65987:
    {
        returnValue = F("Buchenlohweg");
        break;
    }
    case 65988:
    {
        returnValue = F("Buchenländer Str.");
        break;
    }
    case 65989:
    {
        returnValue = F("Buchenländerstr.");
        break;
    }
    case 65990:
    {
        returnValue = F("Buchenpfad");
        break;
    }
    case 65991:
    {
        returnValue = F("Buchenplatz");
        break;
    }
    case 65992:
    {
        returnValue = F("Buchenplatzweg");
        break;
    }
    case 65993:
    {
        returnValue = F("Buchenrade");
        break;
    }
    case 65994:
    {
        returnValue = F("Buchenrain");
        break;
    }
    case 65995:
    {
        returnValue = F("Buchenrainweg");
        break;
    }
    case 65996:
    {
        returnValue = F("Buchenrangen");
        break;
    }
    case 65997:
    {
        returnValue = F("Buchenring");
        break;
    }
    case 65998:
    {
        returnValue = F("Buchenringstr.");
        break;
    }
    case 65999:
    {
        returnValue = F("Buchenroder Str.");
        break;
    }
    case 66000:
    {
        returnValue = F("Buchenrotsweg");
        break;
    }
    case 66001:
    {
        returnValue = F("Buchensahl");
        break;
    }
    case 66002:
    {
        returnValue = F("Buchenschachenweg");
        break;
    }
    case 66003:
    {
        returnValue = F("Buchenschlag");
        break;
    }
    case 66004:
    {
        returnValue = F("Buchenschlagweg");
        break;
    }
    case 66005:
    {
        returnValue = F("Buchenschneise");
        break;
    }
    case 66006:
    {
        returnValue = F("Buchenseestr.");
        break;
    }
    case 66007:
    {
        returnValue = F("Buchenseifen");
        break;
    }
    case 66008:
    {
        returnValue = F("Buchensteig");
        break;
    }
    case 66009:
    {
        returnValue = F("Buchensteige");
        break;
    }
    case 66010:
    {
        returnValue = F("Buchenstieg");
        break;
    }
    case 66011:
    {
        returnValue = F("Buchenstr.");
        break;
    }
    case 66012:
    {
        returnValue = F("Buchenstumpf");
        break;
    }
    case 66013:
    {
        returnValue = F("Buchental");
        break;
    }
    case 66014:
    {
        returnValue = F("Buchentalweg");
        break;
    }
    case 66015:
    {
        returnValue = F("Buchentilke");
        break;
    }
    case 66016:
    {
        returnValue = F("Buchentorstr.");
        break;
    }
    case 66017:
    {
        returnValue = F("Buchentorweg");
        break;
    }
    case 66018:
    {
        returnValue = F("Buchentwiete");
        break;
    }
    case 66019:
    {
        returnValue = F("Buchenwald");
        break;
    }
    case 66020:
    {
        returnValue = F("Buchenwalder Str.");
        break;
    }
    case 66021:
    {
        returnValue = F("Buchenwaldstr.");
        break;
    }
    case 66022:
    {
        returnValue = F("Buchenwaldweg");
        break;
    }
    case 66023:
    {
        returnValue = F("Buchenwall");
        break;
    }
    case 66024:
    {
        returnValue = F("Buchenwasen");
        break;
    }
    case 66025:
    {
        returnValue = F("Buchenweg");
        break;
    }
    case 66026:
    {
        returnValue = F("Buchenweg 1a");
        break;
    }
    case 66027:
    {
        returnValue = F("Buchenwiese");
        break;
    }
    case 66028:
    {
        returnValue = F("Buchenwiesen");
        break;
    }
    case 66029:
    {
        returnValue = F("Buchenwinkel");
        break;
    }
    case 66030:
    {
        returnValue = F("Buchenäcker");
        break;
    }
    case 66031:
    {
        returnValue = F("Bucher Allee");
        break;
    }
    case 66032:
    {
        returnValue = F("Bucher Chaussee");
        break;
    }
    case 66033:
    {
        returnValue = F("Bucher Hauptstr.");
        break;
    }
    case 66034:
    {
        returnValue = F("Bucher Häuser");
        break;
    }
    case 66035:
    {
        returnValue = F("Bucher Kirchstr.");
        break;
    }
    case 66036:
    {
        returnValue = F("Bucher Mühle");
        break;
    }
    case 66037:
    {
        returnValue = F("Bucher Pfad");
        break;
    }
    case 66038:
    {
        returnValue = F("Bucher Querstr.");
        break;
    }
    case 66039:
    {
        returnValue = F("Bucher Str.");
        break;
    }
    case 66040:
    {
        returnValue = F("Bucher Weg");
        break;
    }
    case 66041:
    {
        returnValue = F("Bucherbrücke");
        break;
    }
    case 66042:
    {
        returnValue = F("Bucherfelder Weg");
        break;
    }
    case 66043:
    {
        returnValue = F("Buchernstr.");
        break;
    }
    case 66044:
    {
        returnValue = F("Buchersried");
        break;
    }
    case 66045:
    {
        returnValue = F("Buchersrieder Str.");
        break;
    }
    case 66046:
    {
        returnValue = F("Bucherstr.");
        break;
    }
    case 66047:
    {
        returnValue = F("Buchertsgasse");
        break;
    }
    case 66048:
    {
        returnValue = F("Buchertweg");
        break;
    }
    case 66049:
    {
        returnValue = F("Buchertwiesen");
        break;
    }
    case 66050:
    {
        returnValue = F("Bucherweg");
        break;
    }
    case 66051:
    {
        returnValue = F("Buches-Schneise");
        break;
    }
    case 66052:
    {
        returnValue = F("Buchet");
        break;
    }
    case 66053:
    {
        returnValue = F("Bucheter Weg");
        break;
    }
    case 66054:
    {
        returnValue = F("Buchetstr.");
        break;
    }
    case 66055:
    {
        returnValue = F("Buchetweg");
        break;
    }
    case 66056:
    {
        returnValue = F("Buchetwies");
        break;
    }
    case 66057:
    {
        returnValue = F("Buchfeld");
        break;
    }
    case 66058:
    {
        returnValue = F("Buchfeldstr.");
        break;
    }
    case 66059:
    {
        returnValue = F("Buchfeldweg");
        break;
    }
    case 66060:
    {
        returnValue = F("Buchfinkengasse");
        break;
    }
    case 66061:
    {
        returnValue = F("Buchfinkenring");
        break;
    }
    case 66062:
    {
        returnValue = F("Buchfinkenstr.");
        break;
    }
    case 66063:
    {
        returnValue = F("Buchfinkenweg");
        break;
    }
    case 66064:
    {
        returnValue = F("Buchfinkstr.");
        break;
    }
    case 66065:
    {
        returnValue = F("Buchfinkweg");
        break;
    }
    case 66066:
    {
        returnValue = F("Buchfnkenweg");
        break;
    }
    case 66067:
    {
        returnValue = F("Buchgarten");
        break;
    }
    case 66068:
    {
        returnValue = F("Buchgartenschneise");
        break;
    }
    case 66069:
    {
        returnValue = F("Buchgasse");
        break;
    }
    case 66070:
    {
        returnValue = F("Buchgehrenweg");
        break;
    }
    case 66071:
    {
        returnValue = F("Buchgeschirr Schneise");
        break;
    }
    case 66072:
    {
        returnValue = F("Buchgraben");
        break;
    }
    case 66073:
    {
        returnValue = F("Buchgrabenweg");
        break;
    }
    case 66074:
    {
        returnValue = F("Buchgärten");
        break;
    }
    case 66075:
    {
        returnValue = F("Buchgässle");
        break;
    }
    case 66076:
    {
        returnValue = F("Buchhagen");
        break;
    }
    case 66077:
    {
        returnValue = F("Buchhagener Weg");
        break;
    }
    case 66078:
    {
        returnValue = F("Buchhagenweg");
        break;
    }
    case 66079:
    {
        returnValue = F("Buchhahnstr.");
        break;
    }
    case 66080:
    {
        returnValue = F("Buchhahnweg");
        break;
    }
    case 66081:
    {
        returnValue = F("Buchhain Mittelstr.");
        break;
    }
    case 66082:
    {
        returnValue = F("Buchhainer Mittelstr.");
        break;
    }
    case 66083:
    {
        returnValue = F("Buchhainer Str.");
        break;
    }
    case 66084:
    {
        returnValue = F("Buchhalde");
        break;
    }
    case 66085:
    {
        returnValue = F("Buchhaldensteg");
        break;
    }
    case 66086:
    {
        returnValue = F("Buchhaldenstr.");
        break;
    }
    case 66087:
    {
        returnValue = F("Buchhaldenwasensträßchen");
        break;
    }
    case 66088:
    {
        returnValue = F("Buchhaldenweg");
        break;
    }
    case 66089:
    {
        returnValue = F("Buchhaldestr.");
        break;
    }
    case 66090:
    {
        returnValue = F("Buchhaldeweg");
        break;
    }
    case 66091:
    {
        returnValue = F("Buchhaldstr.");
        break;
    }
    case 66092:
    {
        returnValue = F("Buchhalsstr.");
        break;
    }
    case 66093:
    {
        returnValue = F("Buchhardt");
        break;
    }
    case 66094:
    {
        returnValue = F("Buchhartweg");
        break;
    }
    case 66095:
    {
        returnValue = F("Buchhaus");
        break;
    }
    case 66096:
    {
        returnValue = F("Buchhausen");
        break;
    }
    case 66097:
    {
        returnValue = F("Buchhausener Str.");
        break;
    }
    case 66098:
    {
        returnValue = F("Buchhausweg");
        break;
    }
    case 66099:
    {
        returnValue = F("Buchhauweg");
        break;
    }
    case 66100:
    {
        returnValue = F("Buchheckenstr.");
        break;
    }
    case 66101:
    {
        returnValue = F("Buchheide");
        break;
    }
    case 66102:
    {
        returnValue = F("Buchheimer Berg");
        break;
    }
    case 66103:
    {
        returnValue = F("Buchheimer Höhe");
        break;
    }
    case 66104:
    {
        returnValue = F("Buchheimer Str.");
        break;
    }
    case 66105:
    {
        returnValue = F("Buchheimer Weg");
        break;
    }
    case 66106:
    {
        returnValue = F("Buchhelle");
        break;
    }
    case 66107:
    {
        returnValue = F("Buchhellenweg");
        break;
    }
    case 66108:
    {
        returnValue = F("Buchhellerstr.");
        break;
    }
    case 66109:
    {
        returnValue = F("Buchhellertal");
        break;
    }
    case 66110:
    {
        returnValue = F("Buchhelleweg");
        break;
    }
    case 66111:
    {
        returnValue = F("Buchhof");
        break;
    }
    case 66112:
    {
        returnValue = F("Buchhofer Str.");
        break;
    }
    case 66113:
    {
        returnValue = F("Buchhofer Weg");
        break;
    }
    case 66114:
    {
        returnValue = F("Buchhoferstr.");
        break;
    }
    case 66115:
    {
        returnValue = F("Buchhofsteig");
        break;
    }
    case 66116:
    {
        returnValue = F("Buchhofstr.");
        break;
    }
    case 66117:
    {
        returnValue = F("Buchhofweg");
        break;
    }
    case 66118:
    {
        returnValue = F("Buchholenweg");
        break;
    }
    case 66119:
    {
        returnValue = F("Buchholtweg");
        break;
    }
    case 66120:
    {
        returnValue = F("Buchholz");
        break;
    }
    case 66121:
    {
        returnValue = F("Buchholz Hof");
        break;
    }
    case 66122:
    {
        returnValue = F("Buchholzallee");
        break;
    }
    case 66123:
    {
        returnValue = F("Buchholzbacher Mühle");
        break;
    }
    case 66124:
    {
        returnValue = F("Buchholzbacher Weg");
        break;
    }
    case 66125:
    {
        returnValue = F("Buchholzberg");
        break;
    }
    case 66126:
    {
        returnValue = F("Buchholzbuschstr.");
        break;
    }
    case 66127:
    {
        returnValue = F("Buchholzen");
        break;
    }
    case 66128:
    {
        returnValue = F("Buchholzer Allee");
        break;
    }
    case 66129:
    {
        returnValue = F("Buchholzer Berg");
        break;
    }
    case 66130:
    {
        returnValue = F("Buchholzer Chaussee");
        break;
    }
    case 66131:
    {
        returnValue = F("Buchholzer Damm");
        break;
    }
    case 66132:
    {
        returnValue = F("Buchholzer Dorfstr.");
        break;
    }
    case 66133:
    {
        returnValue = F("Buchholzer FC");
        break;
    }
    case 66134:
    {
        returnValue = F("Buchholzer Feldweg");
        break;
    }
    case 66135:
    {
        returnValue = F("Buchholzer Kietzstr.");
        break;
    }
    case 66136:
    {
        returnValue = F("Buchholzer Landstr.");
        break;
    }
    case 66137:
    {
        returnValue = F("Buchholzer Mühlenweg");
        break;
    }
    case 66138:
    {
        returnValue = F("Buchholzer Siedlung");
        break;
    }
    case 66139:
    {
        returnValue = F("Buchholzer Str.");
        break;
    }
    case 66140:
    {
        returnValue = F("Buchholzer Weg");
        break;
    }
    case 66141:
    {
        returnValue = F("Buchholzerweg");
        break;
    }
    case 66142:
    {
        returnValue = F("Buchholzfeld");
        break;
    }
    case 66143:
    {
        returnValue = F("Buchholzgarten");
        break;
    }
    case 66144:
    {
        returnValue = F("Buchholzgraben");
        break;
    }
    case 66145:
    {
        returnValue = F("Buchholzmarkt");
        break;
    }
    case 66146:
    {
        returnValue = F("Buchholzstr.");
        break;
    }
    case 66147:
    {
        returnValue = F("Buchholzweg");
        break;
    }
    case 66148:
    {
        returnValue = F("Buchhopsweg");
        break;
    }
    case 66149:
    {
        returnValue = F("Buchhornblick");
        break;
    }
    case 66150:
    {
        returnValue = F("Buchhorner Landstr.");
        break;
    }
    case 66151:
    {
        returnValue = F("Buchhorner Str.");
        break;
    }
    case 66152:
    {
        returnValue = F("Buchhornstr.");
        break;
    }
    case 66153:
    {
        returnValue = F("Buchhornweg");
        break;
    }
    case 66154:
    {
        returnValue = F("Buchhorst");
        break;
    }
    case 66155:
    {
        returnValue = F("Buchhorst-Garten");
        break;
    }
    case 66156:
    {
        returnValue = F("Buchhorstblick");
        break;
    }
    case 66157:
    {
        returnValue = F("Buchhorstdamm");
        break;
    }
    case 66158:
    {
        returnValue = F("Buchhorster Str.");
        break;
    }
    case 66159:
    {
        returnValue = F("Buchhorster Weg");
        break;
    }
    case 66160:
    {
        returnValue = F("Buchhorststr.");
        break;
    }
    case 66161:
    {
        returnValue = F("Buchhorstweg");
        break;
    }
    case 66162:
    {
        returnValue = F("Buchhälde");
        break;
    }
    case 66163:
    {
        returnValue = F("Buchhäldenstr.");
        break;
    }
    case 66164:
    {
        returnValue = F("Buchhäldeweg");
        break;
    }
    case 66165:
    {
        returnValue = F("Buchhäuser Str.");
        break;
    }
    case 66166:
    {
        returnValue = F("Buchhöfe");
        break;
    }
    case 66167:
    {
        returnValue = F("Buchhöhe");
        break;
    }
    case 66168:
    {
        returnValue = F("Buchhölzchenweg");
        break;
    }
    case 66169:
    {
        returnValue = F("Buchhölzel");
        break;
    }
    case 66170:
    {
        returnValue = F("Buchhölzle");
        break;
    }
    case 66171:
    {
        returnValue = F("Buchhörn");
        break;
    }
    case 66172:
    {
        returnValue = F("Buchhügelweg");
        break;
    }
    case 66173:
    {
        returnValue = F("Buchkampweg");
        break;
    }
    case 66174:
    {
        returnValue = F("Buchkastr.");
        break;
    }
    case 66175:
    {
        returnValue = F("Buchkernstr.");
        break;
    }
    case 66176:
    {
        returnValue = F("Buchklinge");
        break;
    }
    case 66177:
    {
        returnValue = F("Buchklingen");
        break;
    }
    case 66178:
    {
        returnValue = F("Buchklingenring");
        break;
    }
    case 66179:
    {
        returnValue = F("Buchklingenweg");
        break;
    }
    case 66180:
    {
        returnValue = F("Buchklinger Str.");
        break;
    }
    case 66181:
    {
        returnValue = F("Buchklinger Weg");
        break;
    }
    case 66182:
    {
        returnValue = F("Buchknuckweg");
        break;
    }
    case 66183:
    {
        returnValue = F("Buchkogelstr.");
        break;
    }
    case 66184:
    {
        returnValue = F("Buchkopfstr.");
        break;
    }
    case 66185:
    {
        returnValue = F("Buchkrautweg");
        break;
    }
    case 66186:
    {
        returnValue = F("Buchkremerstr.");
        break;
    }
    case 66187:
    {
        returnValue = F("Buchladener Beeke");
        break;
    }
    case 66188:
    {
        returnValue = F("Buchleideweg");
        break;
    }
    case 66189:
    {
        returnValue = F("Buchleite");
        break;
    }
    case 66190:
    {
        returnValue = F("Buchleiten");
        break;
    }
    case 66191:
    {
        returnValue = F("Buchleithe");
        break;
    }
    case 66192:
    {
        returnValue = F("Buchlerstr.");
        break;
    }
    case 66193:
    {
        returnValue = F("Buchlindenweg");
        break;
    }
    case 66194:
    {
        returnValue = F("Buchlochallee");
        break;
    }
    case 66195:
    {
        returnValue = F("Buchloer Str.");
        break;
    }
    case 66196:
    {
        returnValue = F("Buchlohe");
        break;
    }
    case 66197:
    {
        returnValue = F("Buchlöhweg");
        break;
    }
    case 66198:
    {
        returnValue = F("Buchmaierring");
        break;
    }
    case 66199:
    {
        returnValue = F("Buchmaierstr.");
        break;
    }
    case 66200:
    {
        returnValue = F("Buchmannstr.");
        break;
    }
    case 66201:
    {
        returnValue = F("Buchmarterweg");
        break;
    }
    case 66202:
    {
        returnValue = F("Buchmattenstr.");
        break;
    }
    case 66203:
    {
        returnValue = F("Buchmattweg");
        break;
    }
    case 66204:
    {
        returnValue = F("Buchmeiersweg");
        break;
    }
    case 66205:
    {
        returnValue = F("Buchmoos");
        break;
    }
    case 66206:
    {
        returnValue = F("Buchmühle");
        break;
    }
    case 66207:
    {
        returnValue = F("Buchmühlstr.");
        break;
    }
    case 66208:
    {
        returnValue = F("Buchner Ring");
        break;
    }
    case 66209:
    {
        returnValue = F("Buchner Weg");
        break;
    }
    case 66210:
    {
        returnValue = F("Buchnerschneise");
        break;
    }
    case 66211:
    {
        returnValue = F("Buchnerstr.");
        break;
    }
    case 66212:
    {
        returnValue = F("Buchnerweg");
        break;
    }
    case 66213:
    {
        returnValue = F("Bucholtzstr.");
        break;
    }
    case 66214:
    {
        returnValue = F("Buchoniastr.");
        break;
    }
    case 66215:
    {
        returnValue = F("Buchonienweg");
        break;
    }
    case 66216:
    {
        returnValue = F("Buchpfad");
        break;
    }
    case 66217:
    {
        returnValue = F("Buchrader Weg");
        break;
    }
    case 66218:
    {
        returnValue = F("Buchrain");
        break;
    }
    case 66219:
    {
        returnValue = F("Buchrainschneise");
        break;
    }
    case 66220:
    {
        returnValue = F("Buchrainstr.");
        break;
    }
    case 66221:
    {
        returnValue = F("Buchrainweg");
        break;
    }
    case 66222:
    {
        returnValue = F("Buchrasen");
        break;
    }
    case 66223:
    {
        returnValue = F("Buchreithstr.");
        break;
    }
    case 66224:
    {
        returnValue = F("Buchring");
        break;
    }
    case 66225:
    {
        returnValue = F("Buchrundweg");
        break;
    }
    case 66226:
    {
        returnValue = F("Buchrückenweg");
        break;
    }
    case 66227:
    {
        returnValue = F("Buchsbachweg");
        break;
    }
    case 66228:
    {
        returnValue = F("Buchsbaumpark");
        break;
    }
    case 66229:
    {
        returnValue = F("Buchsbaumpfad");
        break;
    }
    case 66230:
    {
        returnValue = F("Buchsbaumstr.");
        break;
    }
    case 66231:
    {
        returnValue = F("Buchsbaumweg");
        break;
    }
    case 66232:
    {
        returnValue = F("Buchsberg");
        break;
    }
    case 66233:
    {
        returnValue = F("Buchschachen");
        break;
    }
    case 66234:
    {
        returnValue = F("Buchschacher Str.");
        break;
    }
    case 66235:
    {
        returnValue = F("Buchschachweg");
        break;
    }
    case 66236:
    {
        returnValue = F("Buchscharnstr.");
        break;
    }
    case 66237:
    {
        returnValue = F("Buchscharnweg");
        break;
    }
    case 66238:
    {
        returnValue = F("Buchscheidung");
        break;
    }
    case 66239:
    {
        returnValue = F("Buchschirmblick");
        break;
    }
    case 66240:
    {
        returnValue = F("Buchschlager Allee");
        break;
    }
    case 66241:
    {
        returnValue = F("Buchschlagschneise");
        break;
    }
    case 66242:
    {
        returnValue = F("Buchschorren");
        break;
    }
    case 66243:
    {
        returnValue = F("Buchschwabacher Hauptstr.");
        break;
    }
    case 66244:
    {
        returnValue = F("Buchsee");
        break;
    }
    case 66245:
    {
        returnValue = F("Buchssteige");
        break;
    }
    case 66246:
    {
        returnValue = F("Buchsstr.");
        break;
    }
    case 66247:
    {
        returnValue = F("Buchstaudenweg");
        break;
    }
    case 66248:
    {
        returnValue = F("Buchsteig");
        break;
    }
    case 66249:
    {
        returnValue = F("Buchsteige");
        break;
    }
    case 66250:
    {
        returnValue = F("Buchsteigeweg");
        break;
    }
    case 66251:
    {
        returnValue = F("Buchsteigstr.");
        break;
    }
    case 66252:
    {
        returnValue = F("Buchsteinstr.");
        break;
    }
    case 66253:
    {
        returnValue = F("Buchsteinweg");
        break;
    }
    case 66254:
    {
        returnValue = F("Buchstr.");
        break;
    }
    case 66255:
    {
        returnValue = F("Buchsträßchen");
        break;
    }
    case 66256:
    {
        returnValue = F("Buchsweg");
        break;
    }
    case 66257:
    {
        returnValue = F("Buchsweilerstr.");
        break;
    }
    case 66258:
    {
        returnValue = F("Buchsäcker");
        break;
    }
    case 66259:
    {
        returnValue = F("Bucht");
        break;
    }
    case 66260:
    {
        returnValue = F("Buchtal");
        break;
    }
    case 66261:
    {
        returnValue = F("Buchtal Panzerschneise");
        break;
    }
    case 66262:
    {
        returnValue = F("Buchtal-Hauptweg");
        break;
    }
    case 66263:
    {
        returnValue = F("Buchtallee");
        break;
    }
    case 66264:
    {
        returnValue = F("Buchtalweg");
        break;
    }
    case 66265:
    {
        returnValue = F("Buchteichweg");
        break;
    }
    case 66266:
    {
        returnValue = F("Buchteil");
        break;
    }
    case 66267:
    {
        returnValue = F("Buchtenbergweg");
        break;
    }
    case 66268:
    {
        returnValue = F("Buchtenweg");
        break;
    }
    case 66269:
    {
        returnValue = F("Buchtnerbarthl");
        break;
    }
    case 66270:
    {
        returnValue = F("Buchtraufweg");
        break;
    }
    case 66271:
    {
        returnValue = F("Buchtränkschneise");
        break;
    }
    case 66272:
    {
        returnValue = F("Buchtstr.");
        break;
    }
    case 66273:
    {
        returnValue = F("Buchtunger Str.");
        break;
    }
    case 66274:
    {
        returnValue = F("Buchtweg");
        break;
    }
    case 66275:
    {
        returnValue = F("Buchtzigstr.");
        break;
    }
    case 66276:
    {
        returnValue = F("Buchwald");
        break;
    }
    case 66277:
    {
        returnValue = F("Buchwald Str.");
        break;
    }
    case 66278:
    {
        returnValue = F("Buchwalder Berg");
        break;
    }
    case 66279:
    {
        returnValue = F("Buchwalder Chaussee");
        break;
    }
    case 66280:
    {
        returnValue = F("Buchwalder Str.");
        break;
    }
    case 66281:
    {
        returnValue = F("Buchwalder Weg");
        break;
    }
    case 66282:
    {
        returnValue = F("Buchwaldgasse");
        break;
    }
    case 66283:
    {
        returnValue = F("Buchwaldhangweg");
        break;
    }
    case 66284:
    {
        returnValue = F("Buchwaldloipe");
        break;
    }
    case 66285:
    {
        returnValue = F("Buchwaldlosweg");
        break;
    }
    case 66286:
    {
        returnValue = F("Buchwaldring");
        break;
    }
    case 66287:
    {
        returnValue = F("Buchwaldsbrücke");
        break;
    }
    case 66288:
    {
        returnValue = F("Buchwaldstr.");
        break;
    }
    case 66289:
    {
        returnValue = F("Buchwaldstr. (Brünnelesweg)");
        break;
    }
    case 66290:
    {
        returnValue = F("Buchwaldsträßchen");
        break;
    }
    case 66291:
    {
        returnValue = F("Buchwaldsweg");
        break;
    }
    case 66292:
    {
        returnValue = F("Buchwaldweg");
        break;
    }
    case 66293:
    {
        returnValue = F("Buchwaldwiesen");
        break;
    }
    case 66294:
    {
        returnValue = F("Buchwedelweg");
        break;
    }
    case 66295:
    {
        returnValue = F("Buchweg");
        break;
    }
    case 66296:
    {
        returnValue = F("Buchweizenfeld");
        break;
    }
    case 66297:
    {
        returnValue = F("Buchweizenkamp");
        break;
    }
    case 66298:
    {
        returnValue = F("Buchweizenkoppel");
        break;
    }
    case 66299:
    {
        returnValue = F("Buchweizenstieg");
        break;
    }
    case 66300:
    {
        returnValue = F("Buchweizenstr.");
        break;
    }
    case 66301:
    {
        returnValue = F("Buchweizenweg");
        break;
    }
    case 66302:
    {
        returnValue = F("Buchwellesweg");
        break;
    }
    case 66303:
    {
        returnValue = F("Buchwies");
        break;
    }
    case 66304:
    {
        returnValue = F("Buchwiese");
        break;
    }
    case 66305:
    {
        returnValue = F("Buchwiesenstr.");
        break;
    }
    case 66306:
    {
        returnValue = F("Buchwiesenweg");
        break;
    }
    case 66307:
    {
        returnValue = F("Buchwiesweg");
        break;
    }
    case 66308:
    {
        returnValue = F("Buchwinkel");
        break;
    }
    case 66309:
    {
        returnValue = F("Buchwäldchener Dorfstr.");
        break;
    }
    case 66310:
    {
        returnValue = F("Buchwäldchenweg");
        break;
    }
    case 66311:
    {
        returnValue = F("Buchwälder Weg");
        break;
    }
    case 66312:
    {
        returnValue = F("Buchwäldlesweg");
        break;
    }
    case 66313:
    {
        returnValue = F("Buchwäldleweg");
        break;
    }
    case 66314:
    {
        returnValue = F("Buchäcker");
        break;
    }
    case 66315:
    {
        returnValue = F("Buchäckergasse");
        break;
    }
    case 66316:
    {
        returnValue = F("Buchäckerstr.");
        break;
    }
    case 66317:
    {
        returnValue = F("Buchäckerweg");
        break;
    }
    case 66318:
    {
        returnValue = F("Buchöder Weg");
        break;
    }
    case 66319:
    {
        returnValue = F("Buchöster");
        break;
    }
    case 66320:
    {
        returnValue = F("Buckauer Str.");
        break;
    }
    case 66321:
    {
        returnValue = F("Buckaustr.");
        break;
    }
    case 66322:
    {
        returnValue = F("Buckeberg");
        break;
    }
    case 66323:
    {
        returnValue = F("Buckelgarten");
        break;
    }
    case 66324:
    {
        returnValue = F("Buckelhalde");
        break;
    }
    case 66325:
    {
        returnValue = F("Buckeliger Weg");
        break;
    }
    case 66326:
    {
        returnValue = F("Buckelsberg");
        break;
    }
    case 66327:
    {
        returnValue = F("Buckelschneise");
        break;
    }
    case 66328:
    {
        returnValue = F("Buckelstr.");
        break;
    }
    case 66329:
    {
        returnValue = F("Buckelweg");
        break;
    }
    case 66330:
    {
        returnValue = F("Buckelwiesenweg");
        break;
    }
    case 66331:
    {
        returnValue = F("Buckeläckerweg");
        break;
    }
    case 66332:
    {
        returnValue = F("Buckenacker");
        break;
    }
    case 66333:
    {
        returnValue = F("Buckenbergweg");
        break;
    }
    case 66334:
    {
        returnValue = F("Buckenbühlstr.");
        break;
    }
    case 66335:
    {
        returnValue = F("Buckener Weg");
        break;
    }
    case 66336:
    {
        returnValue = F("Buckengärtle");
        break;
    }
    case 66337:
    {
        returnValue = F("Buckenhaldeweg");
        break;
    }
    case 66338:
    {
        returnValue = F("Buckenhofener Str.");
        break;
    }
    case 66339:
    {
        returnValue = F("Buckenhofer Forstweg");
        break;
    }
    case 66340:
    {
        returnValue = F("Buckenhofer Str.");
        break;
    }
    case 66341:
    {
        returnValue = F("Buckenkamp");
        break;
    }
    case 66342:
    {
        returnValue = F("Buckenmühle");
        break;
    }
    case 66343:
    {
        returnValue = F("Buckenreuth");
        break;
    }
    case 66344:
    {
        returnValue = F("Buckenreuther Str.");
        break;
    }
    case 66345:
    {
        returnValue = F("Buckenreuther Weg");
        break;
    }
    case 66346:
    {
        returnValue = F("Buckenstr.");
        break;
    }
    case 66347:
    {
        returnValue = F("Buckenweiler Str.");
        break;
    }
    case 66348:
    {
        returnValue = F("Buckenwiese");
        break;
    }
    case 66349:
    {
        returnValue = F("Buckenwiesenweg");
        break;
    }
    case 66350:
    {
        returnValue = F("Bucker Weg");
        break;
    }
    case 66351:
    {
        returnValue = F("Buckerberg");
        break;
    }
    case 66352:
    {
        returnValue = F("Buckesfelder Kopf");
        break;
    }
    case 66353:
    {
        returnValue = F("Buckestr.");
        break;
    }
    case 66354:
    {
        returnValue = F("Buckfeldweg");
        break;
    }
    case 66355:
    {
        returnValue = F("Buckfranzweg");
        break;
    }
    case 66356:
    {
        returnValue = F("Buckgasse");
        break;
    }
    case 66357:
    {
        returnValue = F("Buckhagener Weg");
        break;
    }
    case 66358:
    {
        returnValue = F("Buckhoffstr.");
        break;
    }
    case 66359:
    {
        returnValue = F("Buckhörner Moor");
        break;
    }
    case 66360:
    {
        returnValue = F("Buckleter-Kapf-Weg");
        break;
    }
    case 66361:
    {
        returnValue = F("Bucklinweg");
        break;
    }
    case 66362:
    {
        returnValue = F("Buckläritraufweg");
        break;
    }
    case 66363:
    {
        returnValue = F("Buckmatten");
        break;
    }
    case 66364:
    {
        returnValue = F("Buckmattstr.");
        break;
    }
    case 66365:
    {
        returnValue = F("Buckow");
        break;
    }
    case 66366:
    {
        returnValue = F("Buckower Dorfstr.");
        break;
    }
    case 66367:
    {
        returnValue = F("Buckower Str.");
        break;
    }
    case 66368:
    {
        returnValue = F("Buckower Weg");
        break;
    }
    case 66369:
    {
        returnValue = F("Bucksstr.");
        break;
    }
    case 66370:
    {
        returnValue = F("Buckstever Weg");
        break;
    }
    case 66371:
    {
        returnValue = F("Buckstr.");
        break;
    }
    case 66372:
    {
        returnValue = F("Bucksweg");
        break;
    }
    case 66373:
    {
        returnValue = F("Buckwaldweg");
        break;
    }
    case 66374:
    {
        returnValue = F("Buckweg");
        break;
    }
    case 66375:
    {
        returnValue = F("Buckwiesenweg");
        break;
    }
    case 66376:
    {
        returnValue = F("Buckäckerstr.");
        break;
    }
    case 66377:
    {
        returnValue = F("Budakeszistr.");
        break;
    }
    case 66378:
    {
        returnValue = F("Budakezi-Piliscsaba-Weg");
        break;
    }
    case 66379:
    {
        returnValue = F("Budapester Str.");
        break;
    }
    case 66380:
    {
        returnValue = F("Budapester Weg");
        break;
    }
    case 66381:
    {
        returnValue = F("Budaörser Str.");
        break;
    }
    case 66382:
    {
        returnValue = F("Budberger Str.");
        break;
    }
    case 66383:
    {
        returnValue = F("Buddebergplatz");
        break;
    }
    case 66384:
    {
        returnValue = F("Buddelberg");
        break;
    }
    case 66385:
    {
        returnValue = F("Buddeleichenweg");
        break;
    }
    case 66386:
    {
        returnValue = F("Buddeliner Str.");
        break;
    }
    case 66387:
    {
        returnValue = F("Buddenbaum");
        break;
    }
    case 66388:
    {
        returnValue = F("Buddenbaumstr.");
        break;
    }
    case 66389:
    {
        returnValue = F("Buddenbergstr.");
        break;
    }
    case 66390:
    {
        returnValue = F("Buddendiek");
        break;
    }
    case 66391:
    {
        returnValue = F("Buddendorf");
        break;
    }
    case 66392:
    {
        returnValue = F("Buddenhagen");
        break;
    }
    case 66393:
    {
        returnValue = F("Buddenhagener Str.");
        break;
    }
    case 66394:
    {
        returnValue = F("Buddenhagener Weg");
        break;
    }
    case 66395:
    {
        returnValue = F("Buddenhof");
        break;
    }
    case 66396:
    {
        returnValue = F("Buddenhoff");
        break;
    }
    case 66397:
    {
        returnValue = F("Buddenkamp");
        break;
    }
    case 66398:
    {
        returnValue = F("Buddenkämpe");
        break;
    }
    case 66399:
    {
        returnValue = F("Buddenstiege");
        break;
    }
    case 66400:
    {
        returnValue = F("Buddenvehn");
        break;
    }
    case 66401:
    {
        returnValue = F("Buddenweg");
        break;
    }
    case 66402:
    {
        returnValue = F("Buddeskampsiek");
        break;
    }
    case 66403:
    {
        returnValue = F("Buddestieg");
        break;
    }
    case 66404:
    {
        returnValue = F("Buddestr.");
        break;
    }
    case 66405:
    {
        returnValue = F("Buddeusstr.");
        break;
    }
    case 66406:
    {
        returnValue = F("Buddeweg");
        break;
    }
    case 66407:
    {
        returnValue = F("Buddingweg");
        break;
    }
    case 66408:
    {
        returnValue = F("Budelsdorf");
        break;
    }
    case 66409:
    {
        returnValue = F("Budenbergstr.");
        break;
    }
    case 66410:
    {
        returnValue = F("Budenheim");
        break;
    }
    case 66411:
    {
        returnValue = F("Budenheim 1");
        break;
    }
    case 66412:
    {
        returnValue = F("Budenheimer Weg");
        break;
    }
    case 66413:
    {
        returnValue = F("Budenmeerstr.");
        break;
    }
    case 66414:
    {
        returnValue = F("Budenstr.");
        break;
    }
    case 66415:
    {
        returnValue = F("Budenweg");
        break;
    }
    case 66416:
    {
        returnValue = F("Budenweisgraben");
        break;
    }
    case 66417:
    {
        returnValue = F("Budenwäldchen, Wildbahn X3, ARS NATURA");
        break;
    }
    case 66418:
    {
        returnValue = F("Budenzstr.");
        break;
    }
    case 66419:
    {
        returnValue = F("Budepützhof");
        break;
    }
    case 66420:
    {
        returnValue = F("Buderhof");
        break;
    }
    case 66421:
    {
        returnValue = F("Buderhofstr.");
        break;
    }
    case 66422:
    {
        returnValue = F("Budersandstr.");
        break;
    }
    case 66423:
    {
        returnValue = F("Buderusstr.");
        break;
    }
    case 66424:
    {
        returnValue = F("Buderusweg");
        break;
    }
    case 66425:
    {
        returnValue = F("Budick-Geräumt");
        break;
    }
    case 66426:
    {
        returnValue = F("Budrio-Allee");
        break;
    }
    case 66427:
    {
        returnValue = F("Budweg");
        break;
    }
    case 66428:
    {
        returnValue = F("Budweiser Str.");
        break;
    }
    case 66429:
    {
        returnValue = F("Budweiser Weg");
        break;
    }
    case 66430:
    {
        returnValue = F("Budweisstr.");
        break;
    }
    case 66431:
    {
        returnValue = F("Budörp");
        break;
    }
    case 66432:
    {
        returnValue = F("Bue");
        break;
    }
    case 66433:
    {
        returnValue = F("Buechenackerweg");
        break;
    }
    case 66434:
    {
        returnValue = F("Buehl Weg");
        break;
    }
    case 66435:
    {
        returnValue = F("Buehlweg");
        break;
    }
    case 66436:
    {
        returnValue = F("Buenaventura Durruti Str.");
        break;
    }
    case 66437:
    {
        returnValue = F("Buendorf");
        break;
    }
    case 66438:
    {
        returnValue = F("Buendorfer Ring");
        break;
    }
    case 66439:
    {
        returnValue = F("Buensen");
        break;
    }
    case 66440:
    {
        returnValue = F("Buenser Weg");
        break;
    }
    case 66441:
    {
        returnValue = F("Buerbarg");
        break;
    }
    case 66442:
    {
        returnValue = F("Buerenweg");
        break;
    }
    case 66443:
    {
        returnValue = F("Buerer Str.");
        break;
    }
    case 66444:
    {
        returnValue = F("Buerholz");
        break;
    }
    case 66445:
    {
        returnValue = F("Buerndiek");
        break;
    }
    case 66446:
    {
        returnValue = F("Buernenn");
        break;
    }
    case 66447:
    {
        returnValue = F("Buernkoppel");
        break;
    }
    case 66448:
    {
        returnValue = F("Buernredder");
        break;
    }
    case 66449:
    {
        returnValue = F("Buernstr.");
        break;
    }
    case 66450:
    {
        returnValue = F("Buernstraat");
        break;
    }
    case 66451:
    {
        returnValue = F("Buernweg");
        break;
    }
    case 66452:
    {
        returnValue = F("Buernwisch");
        break;
    }
    case 66453:
    {
        returnValue = F("Buerreekenweg");
        break;
    }
    case 66454:
    {
        returnValue = F("Buersche Str.");
        break;
    }
    case 66455:
    {
        returnValue = F("Buerskopper Str.");
        break;
    }
    case 66456:
    {
        returnValue = F("Buerstr.");
        break;
    }
    case 66457:
    {
        returnValue = F("Buersweg");
        break;
    }
    case 66458:
    {
        returnValue = F("Buervogt");
        break;
    }
    case 66459:
    {
        returnValue = F("Buerweg");
        break;
    }
    case 66460:
    {
        returnValue = F("Buesweg");
        break;
    }
    case 66461:
    {
        returnValue = F("Bufestr.");
        break;
    }
    case 66462:
    {
        returnValue = F("Buffenhofen");
        break;
    }
    case 66463:
    {
        returnValue = F("Buffheimer Weg");
        break;
    }
    case 66464:
    {
        returnValue = F("Bufflerweg");
        break;
    }
    case 66465:
    {
        returnValue = F("Bufhell");
        break;
    }
    case 66466:
    {
        returnValue = F("Bufleber Hauptstr.");
        break;
    }
    case 66467:
    {
        returnValue = F("Bufleber Kirchstr.");
        break;
    }
    case 66468:
    {
        returnValue = F("Bufleber Landstr.");
        break;
    }
    case 66469:
    {
        returnValue = F("Bufleber Str.");
        break;
    }
    case 66470:
    {
        returnValue = F("Buflings");
        break;
    }
    case 66471:
    {
        returnValue = F("Buflingsried");
        break;
    }
    case 66472:
    {
        returnValue = F("Bugbergstr.");
        break;
    }
    case 66473:
    {
        returnValue = F("Bugelweg");
        break;
    }
    case 66474:
    {
        returnValue = F("Bugen");
        break;
    }
    case 66475:
    {
        returnValue = F("Bugenhagenstr.");
        break;
    }
    case 66476:
    {
        returnValue = F("Bugenhagenweg");
        break;
    }
    case 66477:
    {
        returnValue = F("Bugenweg");
        break;
    }
    case 66478:
    {
        returnValue = F("Buger Hauptstr.");
        break;
    }
    case 66479:
    {
        returnValue = F("Buger Str.");
        break;
    }
    case 66480:
    {
        returnValue = F("Bugewitz 1");
        break;
    }
    case 66481:
    {
        returnValue = F("Buggasse");
        break;
    }
    case 66482:
    {
        returnValue = F("Buggenhagenstr.");
        break;
    }
    case 66483:
    {
        returnValue = F("Buggenrieder Str.");
        break;
    }
    case 66484:
    {
        returnValue = F("Buggensegler Str.");
        break;
    }
    case 66485:
    {
        returnValue = F("Bugginger Gasse");
        break;
    }
    case 66486:
    {
        returnValue = F("Bugginger Str.");
        break;
    }
    case 66487:
    {
        returnValue = F("Bugginger Weg");
        break;
    }
    case 66488:
    {
        returnValue = F("Buggow");
        break;
    }
    case 66489:
    {
        returnValue = F("Bugheim Boulevard");
        break;
    }
    case 66490:
    {
        returnValue = F("Bughof");
        break;
    }
    case 66491:
    {
        returnValue = F("Bughofer Str.");
        break;
    }
    case 66492:
    {
        returnValue = F("Bugislausgang");
        break;
    }
    case 66493:
    {
        returnValue = F("Buglmühl");
        break;
    }
    case 66494:
    {
        returnValue = F("Bugmühle");
        break;
    }
    case 66495:
    {
        returnValue = F("Bugostr.");
        break;
    }
    case 66496:
    {
        returnValue = F("Bugscharrn");
        break;
    }
    case 66497:
    {
        returnValue = F("Bugscheinweg");
        break;
    }
    case 66498:
    {
        returnValue = F("Bugstr.");
        break;
    }
    case 66499:
    {
        returnValue = F("Bugtalweg");
        break;
    }
    case 66500:
    {
        returnValue = F("Bugweg");
        break;
    }
    case 66501:
    {
        returnValue = F("Buheleite");
        break;
    }
    case 66502:
    {
        returnValue = F("Buhl'scher Park");
        break;
    }
    case 66503:
    {
        returnValue = F("Buhlaer Str.");
        break;
    }
    case 66504:
    {
        returnValue = F("Buhlaersche Gasse");
        break;
    }
    case 66505:
    {
        returnValue = F("Buhlbachsaue");
        break;
    }
    case 66506:
    {
        returnValue = F("Buhlbachseeweg");
        break;
    }
    case 66507:
    {
        returnValue = F("Buhleitenweg");
        break;
    }
    case 66508:
    {
        returnValue = F("Buhlen");
        break;
    }
    case 66509:
    {
        returnValue = F("Buhlendorfer Str.");
        break;
    }
    case 66510:
    {
        returnValue = F("Buhlener Str.");
        break;
    }
    case 66511:
    {
        returnValue = F("Buhlerstr.");
        break;
    }
    case 66512:
    {
        returnValue = F("Buhlleite");
        break;
    }
    case 66513:
    {
        returnValue = F("Buhlmannweg");
        break;
    }
    case 66514:
    {
        returnValue = F("Buhlochweg");
        break;
    }
    case 66515:
    {
        returnValue = F("Buhlsbach");
        break;
    }
    case 66516:
    {
        returnValue = F("Buhlsbacher Str.");
        break;
    }
    case 66517:
    {
        returnValue = F("Buhlsbachsaue");
        break;
    }
    case 66518:
    {
        returnValue = F("Buhlstr.");
        break;
    }
    case 66519:
    {
        returnValue = F("Buhmannskamp");
        break;
    }
    case 66520:
    {
        returnValue = F("Buhmayrstr.");
        break;
    }
    case 66521:
    {
        returnValue = F("Buhnegge");
        break;
    }
    case 66522:
    {
        returnValue = F("Buhnenweg");
        break;
    }
    case 66523:
    {
        returnValue = F("Buhnertstr.");
        break;
    }
    case 66524:
    {
        returnValue = F("Buhnfeld");
        break;
    }
    case 66525:
    {
        returnValue = F("Buhnstr.");
        break;
    }
    case 66526:
    {
        returnValue = F("Buhrchelbrücke");
        break;
    }
    case 66527:
    {
        returnValue = F("Buhrgasse");
        break;
    }
    case 66528:
    {
        returnValue = F("Buhrkallweg");
        break;
    }
    case 66529:
    {
        returnValue = F("Buhrkamp");
        break;
    }
    case 66530:
    {
        returnValue = F("Buhrkow");
        break;
    }
    case 66531:
    {
        returnValue = F("Buhrmanns Patt");
        break;
    }
    case 66532:
    {
        returnValue = F("Buhrort");
        break;
    }
    case 66533:
    {
        returnValue = F("Buhrweg");
        break;
    }
    case 66534:
    {
        returnValue = F("Buhrwinkel");
        break;
    }
    case 66535:
    {
        returnValue = F("Buhse");
        break;
    }
    case 66536:
    {
        returnValue = F("Buhskoppel");
        break;
    }
    case 66537:
    {
        returnValue = F("Buhweg");
        break;
    }
    case 66538:
    {
        returnValue = F("Buhwiesenweg");
        break;
    }
    case 66539:
    {
        returnValue = F("Buhäcker");
        break;
    }
    case 66540:
    {
        returnValue = F("Buigenrainstr.");
        break;
    }
    case 66541:
    {
        returnValue = F("Buigenstr.");
        break;
    }
    case 66542:
    {
        returnValue = F("Buigenweg");
        break;
    }
    case 66543:
    {
        returnValue = F("Buiger Str.");
        break;
    }
    case 66544:
    {
        returnValue = F("Buindgasse");
        break;
    }
    case 66545:
    {
        returnValue = F("Buirer Str.");
        break;
    }
    case 66546:
    {
        returnValue = F("Buirer Weg");
        break;
    }
    case 66547:
    {
        returnValue = F("Buisdorfer Str.");
        break;
    }
    case 66548:
    {
        returnValue = F("Buitenborg");
        break;
    }
    case 66549:
    {
        returnValue = F("Buizengasse");
        break;
    }
    case 66550:
    {
        returnValue = F("Buja Str.");
        break;
    }
    case 66551:
    {
        returnValue = F("Bujaleufring");
        break;
    }
    case 66552:
    {
        returnValue = F("Bujendorfer Landstr.");
        break;
    }
    case 66553:
    {
        returnValue = F("Bujendorfer Weg");
        break;
    }
    case 66554:
    {
        returnValue = F("Bujes Gang");
        break;
    }
    case 66555:
    {
        returnValue = F("Bukallee");
        break;
    }
    case 66556:
    {
        returnValue = F("Bukarester Str.");
        break;
    }
    case 66557:
    {
        returnValue = F("Bukelinesring");
        break;
    }
    case 66558:
    {
        returnValue = F("Bukewitzer Weg");
        break;
    }
    case 66559:
    {
        returnValue = F("Bukoer Dorfstr.");
        break;
    }
    case 66560:
    {
        returnValue = F("Bukoer Weg");
        break;
    }
    case 66561:
    {
        returnValue = F("Bukoer Winkel");
        break;
    }
    case 66562:
    {
        returnValue = F("Bukostr.");
        break;
    }
    case 66563:
    {
        returnValue = F("Bukowberg");
        break;
    }
    case 66564:
    {
        returnValue = F("Bukower Str.");
        break;
    }
    case 66565:
    {
        returnValue = F("Bukower Weg");
        break;
    }
    case 66566:
    {
        returnValue = F("Bukowiner Ring");
        break;
    }
    case 66567:
    {
        returnValue = F("Bukweg");
        break;
    }
    case 66568:
    {
        returnValue = F("Bulach");
        break;
    }
    case 66569:
    {
        returnValue = F("Bulacher Str.");
        break;
    }
    case 66570:
    {
        returnValue = F("Bulacher Weg");
        break;
    }
    case 66571:
    {
        returnValue = F("Bulachstr.");
        break;
    }
    case 66572:
    {
        returnValue = F("Bulachweg");
        break;
    }
    case 66573:
    {
        returnValue = F("Bulack");
        break;
    }
    case 66574:
    {
        returnValue = F("Bulagstr.");
        break;
    }
    case 66575:
    {
        returnValue = F("Buland");
        break;
    }
    case 66576:
    {
        returnValue = F("Bulaustr.");
        break;
    }
    case 66577:
    {
        returnValue = F("Bulauweg");
        break;
    }
    case 66578:
    {
        returnValue = F("Bulder-Berg-Weg");
        break;
    }
    case 66579:
    {
        returnValue = F("Bulderbecker Kirchweg");
        break;
    }
    case 66580:
    {
        returnValue = F("Buldergeist");
        break;
    }
    case 66581:
    {
        returnValue = F("Buldweg");
        break;
    }
    case 66582:
    {
        returnValue = F("Buler Str.");
        break;
    }
    case 66583:
    {
        returnValue = F("Bulerstr.");
        break;
    }
    case 66584:
    {
        returnValue = F("Bulhellerstr.");
        break;
    }
    case 66585:
    {
        returnValue = F("Bulkesweg");
        break;
    }
    case 66586:
    {
        returnValue = F("Bulks Kamp");
        break;
    }
    case 66587:
    {
        returnValue = F("Bulkstr.");
        break;
    }
    case 66588:
    {
        returnValue = F("Bullachbergweg");
        break;
    }
    case 66589:
    {
        returnValue = F("Bullacher Str.");
        break;
    }
    case 66590:
    {
        returnValue = F("Bullachstr.");
        break;
    }
    case 66591:
    {
        returnValue = F("Bullauer Weg");
        break;
    }
    case 66592:
    {
        returnValue = F("Bullbug");
        break;
    }
    case 66593:
    {
        returnValue = F("Bullenbacher Weg");
        break;
    }
    case 66594:
    {
        returnValue = F("Bullenbergsweg");
        break;
    }
    case 66595:
    {
        returnValue = F("Bullenbergweg");
        break;
    }
    case 66596:
    {
        returnValue = F("Bullenbrook");
        break;
    }
    case 66597:
    {
        returnValue = F("Bullenbäkenweg");
        break;
    }
    case 66598:
    {
        returnValue = F("Bullendamm");
        break;
    }
    case 66599:
    {
        returnValue = F("Bullendorf");
        break;
    }
    case 66600:
    {
        returnValue = F("Bullendorfer Weg");
        break;
    }
    case 66601:
    {
        returnValue = F("Bullengang");
        break;
    }
    case 66602:
    {
        returnValue = F("Bullengasse");
        break;
    }
    case 66603:
    {
        returnValue = F("Bullenheim");
        break;
    }
    case 66604:
    {
        returnValue = F("Bullenhorst");
        break;
    }
    case 66605:
    {
        returnValue = F("Bullenhorster Weg");
        break;
    }
    case 66606:
    {
        returnValue = F("Bullenkamp");
        break;
    }
    case 66607:
    {
        returnValue = F("Bullenkoppel");
        break;
    }
    case 66608:
    {
        returnValue = F("Bullenkrog");
        break;
    }
    case 66609:
    {
        returnValue = F("Bullenredder");
        break;
    }
    case 66610:
    {
        returnValue = F("Bullenriede");
        break;
    }
    case 66611:
    {
        returnValue = F("Bullenseestr.");
        break;
    }
    case 66612:
    {
        returnValue = F("Bullenstedt");
        break;
    }
    case 66613:
    {
        returnValue = F("Bullenstr.");
        break;
    }
    case 66614:
    {
        returnValue = F("Bullenwall");
        break;
    }
    case 66615:
    {
        returnValue = F("Bullenwarder");
        break;
    }
    case 66616:
    {
        returnValue = F("Bullenweg");
        break;
    }
    case 66617:
    {
        returnValue = F("Bullenweideweg");
        break;
    }
    case 66618:
    {
        returnValue = F("Bullenwiese");
        break;
    }
    case 66619:
    {
        returnValue = F("Bullenwinkel");
        break;
    }
    case 66620:
    {
        returnValue = F("Bullenwinkelweg");
        break;
    }
    case 66621:
    {
        returnValue = F("Bullenwischweg");
        break;
    }
    case 66622:
    {
        returnValue = F("Bullerbachstr.");
        break;
    }
    case 66623:
    {
        returnValue = F("Bullerbachweg");
        break;
    }
    case 66624:
    {
        returnValue = F("Bullerbarg");
        break;
    }
    case 66625:
    {
        returnValue = F("Bullerberg");
        break;
    }
    case 66626:
    {
        returnValue = F("Bullerbusch");
        break;
    }
    case 66627:
    {
        returnValue = F("Bullerbäk");
        break;
    }
    case 66628:
    {
        returnValue = F("Bullerbü");
        break;
    }
    case 66629:
    {
        returnValue = F("Bullergang");
        break;
    }
    case 66630:
    {
        returnValue = F("Bullerienenweg");
        break;
    }
    case 66631:
    {
        returnValue = F("Bullersberg");
        break;
    }
    case 66632:
    {
        returnValue = F("Bullershop");
        break;
    }
    case 66633:
    {
        returnValue = F("Bullerskamp");
        break;
    }
    case 66634:
    {
        returnValue = F("Bullerstr.");
        break;
    }
    case 66635:
    {
        returnValue = F("Bullerteichstr.");
        break;
    }
    case 66636:
    {
        returnValue = F("Bullhörner Weg");
        break;
    }
    case 66637:
    {
        returnValue = F("Bullingerstr.");
        break;
    }
    case 66638:
    {
        returnValue = F("Bullingstr.");
        break;
    }
    case 66639:
    {
        returnValue = F("Bullmannstr.");
        break;
    }
    case 66640:
    {
        returnValue = F("Bullmeedenweg");
        break;
    }
    case 66641:
    {
        returnValue = F("Bullmeedeweg");
        break;
    }
    case 66642:
    {
        returnValue = F("Bullmeedsweg");
        break;
    }
    case 66643:
    {
        returnValue = F("Bullmeer");
        break;
    }
    case 66644:
    {
        returnValue = F("Bullmersberg");
        break;
    }
    case 66645:
    {
        returnValue = F("Bullstück");
        break;
    }
    case 66646:
    {
        returnValue = F("Bullweg");
        break;
    }
    case 66647:
    {
        returnValue = F("Bullwiesenstr.");
        break;
    }
    case 66648:
    {
        returnValue = F("Bullwinkel");
        break;
    }
    case 66649:
    {
        returnValue = F("Bullwinkeler Weg");
        break;
    }
    case 66650:
    {
        returnValue = F("Bullystr.");
        break;
    }
    case 66651:
    {
        returnValue = F("Bulmecke");
        break;
    }
    case 66652:
    {
        returnValue = F("Bulochweg");
        break;
    }
    case 66653:
    {
        returnValue = F("Bulsterkop");
        break;
    }
    case 66654:
    {
        returnValue = F("Bult");
        break;
    }
    case 66655:
    {
        returnValue = F("Bulte");
        break;
    }
    case 66656:
    {
        returnValue = F("Bultengaat");
        break;
    }
    case 66657:
    {
        returnValue = F("Bultenstr.");
        break;
    }
    case 66658:
    {
        returnValue = F("Bultenweg");
        break;
    }
    case 66659:
    {
        returnValue = F("Bulter Str.");
        break;
    }
    case 66660:
    {
        returnValue = F("Bulterweg");
        break;
    }
    case 66661:
    {
        returnValue = F("Bultmannsort");
        break;
    }
    case 66662:
    {
        returnValue = F("Bultstr.");
        break;
    }
    case 66663:
    {
        returnValue = F("Bulttange");
        break;
    }
    case 66664:
    {
        returnValue = F("Bultvieh");
        break;
    }
    case 66665:
    {
        returnValue = F("Bultweg");
        break;
    }
    case 66666:
    {
        returnValue = F("Bultwiesenweg");
        break;
    }
    case 66667:
    {
        returnValue = F("Bultwischenkamp");
        break;
    }
    case 66668:
    {
        returnValue = F("Bulzenweg");
        break;
    }
    case 66669:
    {
        returnValue = F("Bulzingen");
        break;
    }
    case 66670:
    {
        returnValue = F("Bulzinger Str.");
        break;
    }
    case 66671:
    {
        returnValue = F("Bum-Bam-Weg");
        break;
    }
    case 66672:
    {
        returnValue = F("Bumagasse");
        break;
    }
    case 66673:
    {
        returnValue = F("Bumagastr.");
        break;
    }
    case 66674:
    {
        returnValue = F("Bumattenweg");
        break;
    }
    case 66675:
    {
        returnValue = F("Bummelke");
        break;
    }
    case 66676:
    {
        returnValue = F("Bummelkuppenweg");
        break;
    }
    case 66677:
    {
        returnValue = F("Bummelsgang");
        break;
    }
    case 66678:
    {
        returnValue = F("Bummerei");
        break;
    }
    case 66679:
    {
        returnValue = F("Bummerei Brücke");
        break;
    }
    case 66680:
    {
        returnValue = F("Bummert");
        break;
    }
    case 66681:
    {
        returnValue = F("Bummiweg");
        break;
    }
    case 66682:
    {
        returnValue = F("Bummkopf");
        break;
    }
    case 66683:
    {
        returnValue = F("Bundachstr.");
        break;
    }
    case 66684:
    {
        returnValue = F("Bundackerweg");
        break;
    }
    case 66685:
    {
        returnValue = F("Bunde-West");
        break;
    }
    case 66686:
    {
        returnValue = F("Bundenbacher Str.");
        break;
    }
    case 66687:
    {
        returnValue = F("Bundentaler Weg");
        break;
    }
    case 66688:
    {
        returnValue = F("Bundenthaler Weg");
        break;
    }
    case 66689:
    {
        returnValue = F("Bunder Deich");
        break;
    }
    case 66690:
    {
        returnValue = F("Bunder Klei");
        break;
    }
    case 66691:
    {
        returnValue = F("Bunder Str.");
        break;
    }
    case 66692:
    {
        returnValue = F("Bunderdeich");
        break;
    }
    case 66693:
    {
        returnValue = F("Bunderhammrich");
        break;
    }
    case 66694:
    {
        returnValue = F("Bunderneuland");
        break;
    }
    case 66695:
    {
        returnValue = F("Bunderweg");
        break;
    }
    case 66696:
    {
        returnValue = F("Bundeskanzler-Kohl-Str.");
        break;
    }
    case 66697:
    {
        returnValue = F("Bundesmannschneise");
        break;
    }
    case 66698:
    {
        returnValue = F("Bundespolizeiallee");
        break;
    }
    case 66699:
    {
        returnValue = F("Bundesstr.");
        break;
    }
    case 66700:
    {
        returnValue = F("Bundesstr. 1");
        break;
    }
    case 66701:
    {
        returnValue = F("Bundesstr. 104");
        break;
    }
    case 66702:
    {
        returnValue = F("Bundesstr. 11");
        break;
    }
    case 66703:
    {
        returnValue = F("Bundesstr. 305");
        break;
    }
    case 66704:
    {
        returnValue = F("Bundesstr. 4");
        break;
    }
    case 66705:
    {
        returnValue = F("Bundesstr. 5");
        break;
    }
    case 66706:
    {
        returnValue = F("Bundesstr. 70");
        break;
    }
    case 66707:
    {
        returnValue = F("Bundesstr. 76");
        break;
    }
    case 66708:
    {
        returnValue = F("Bundesstr. 96");
        break;
    }
    case 66709:
    {
        returnValue = F("Bundesstr. Eesch");
        break;
    }
    case 66710:
    {
        returnValue = F("Bundesstr.-Schoren");
        break;
    }
    case 66711:
    {
        returnValue = F("Bundgasse");
        break;
    }
    case 66712:
    {
        returnValue = F("Bundhalde");
        break;
    }
    case 66713:
    {
        returnValue = F("Bundhorst");
        break;
    }
    case 66714:
    {
        returnValue = F("Bundhorster Chaussee");
        break;
    }
    case 66715:
    {
        returnValue = F("Bundiswung");
        break;
    }
    case 66716:
    {
        returnValue = F("Bundorf");
        break;
    }
    case 66717:
    {
        returnValue = F("Bundorferstr.");
        break;
    }
    case 66718:
    {
        returnValue = F("Bundsbarg");
        break;
    }
    case 66719:
    {
        returnValue = F("Bundsbargweg");
        break;
    }
    case 66720:
    {
        returnValue = F("Bundschuh-Siedlung");
        break;
    }
    case 66721:
    {
        returnValue = F("Bundschuhstr.");
        break;
    }
    case 66722:
    {
        returnValue = F("Bundschuhweg");
        break;
    }
    case 66723:
    {
        returnValue = F("Bundweg");
        break;
    }
    case 66724:
    {
        returnValue = F("Bunendorp");
        break;
    }
    case 66725:
    {
        returnValue = F("Bunenkampsweg");
        break;
    }
    case 66726:
    {
        returnValue = F("Bunerbergweg");
        break;
    }
    case 66727:
    {
        returnValue = F("Bungalow am See");
        break;
    }
    case 66728:
    {
        returnValue = F("Bungalowpark");
        break;
    }
    case 66729:
    {
        returnValue = F("Bungalows am Sauberg");
        break;
    }
    case 66730:
    {
        returnValue = F("Bungalowsiedlung");
        break;
    }
    case 66731:
    {
        returnValue = F("Bungalowsiedlung 1");
        break;
    }
    case 66732:
    {
        returnValue = F("Bungalowsiedlung 1 Herzwolde");
        break;
    }
    case 66733:
    {
        returnValue = F("Bungalowsiedlung 2");
        break;
    }
    case 66734:
    {
        returnValue = F("Bungalowsiedlung 2 Herzwolde");
        break;
    }
    case 66735:
    {
        returnValue = F("Bungalowsiedlung Bergland");
        break;
    }
    case 66736:
    {
        returnValue = F("Bungalowsiedlung Carwitzer See");
        break;
    }
    case 66737:
    {
        returnValue = F("Bungalowsiedlung Devin");
        break;
    }
    case 66738:
    {
        returnValue = F("Bungalowsiedlung Holm");
        break;
    }
    case 66739:
    {
        returnValue = F("Bungalowsiedlung I");
        break;
    }
    case 66740:
    {
        returnValue = F("Bungalowsiedlung II");
        break;
    }
    case 66741:
    {
        returnValue = F("Bungalowsiedlung III");
        break;
    }
    case 66742:
    {
        returnValue = F("Bungalowsiedlung In der Struth I");
        break;
    }
    case 66743:
    {
        returnValue = F("Bungalowsiedlung In der Struth II");
        break;
    }
    case 66744:
    {
        returnValue = F("Bungalowsiedlung In der Struth III");
        break;
    }
    case 66745:
    {
        returnValue = F("Bungalowsiedlung Jager Tannen");
        break;
    }
    case 66746:
    {
        returnValue = F("Bungalowsiedlung Jersleber See");
        break;
    }
    case 66747:
    {
        returnValue = F("Bungalowsiedlung Klein Quassow");
        break;
    }
    case 66748:
    {
        returnValue = F("Bungalowsiedlung Nordufer");
        break;
    }
    case 66749:
    {
        returnValue = F("Bungalowsiedlung Ostufer");
        break;
    }
    case 66750:
    {
        returnValue = F("Bungalowsiedlung Seelust");
        break;
    }
    case 66751:
    {
        returnValue = F("Bungalowsiedlung Wutschendorf");
        break;
    }
    case 66752:
    {
        returnValue = F("Bungalowsiedlung am Dolgensee");
        break;
    }
    case 66753:
    {
        returnValue = F("Bungalowsiedlung am Storchennest");
        break;
    }
    case 66754:
    {
        returnValue = F("Bungalowweg");
        break;
    }
    case 66755:
    {
        returnValue = F("Bungartenstr.");
        break;
    }
    case 66756:
    {
        returnValue = F("Bungartstr.");
        break;
    }
    case 66757:
    {
        returnValue = F("Bungartweg");
        break;
    }
    case 66758:
    {
        returnValue = F("Bungartzstr.");
        break;
    }
    case 66759:
    {
        returnValue = F("Bungberg");
        break;
    }
    case 66760:
    {
        returnValue = F("Bungelbrooksweg");
        break;
    }
    case 66761:
    {
        returnValue = F("Bungenberg");
        break;
    }
    case 66762:
    {
        returnValue = F("Bungenort");
        break;
    }
    case 66763:
    {
        returnValue = F("Bungenstedter Turm");
        break;
    }
    case 66764:
    {
        returnValue = F("Bungerei");
        break;
    }
    case 66765:
    {
        returnValue = F("Bungeriede");
        break;
    }
    case 66766:
    {
        returnValue = F("Bungerns Hof");
        break;
    }
    case 66767:
    {
        returnValue = F("Bungernstr.");
        break;
    }
    case 66768:
    {
        returnValue = F("Bungerskamp");
        break;
    }
    case 66769:
    {
        returnValue = F("Bungerstr.");
        break;
    }
    case 66770:
    {
        returnValue = F("Bungert");
        break;
    }
    case 66771:
    {
        returnValue = F("Bungertstr.");
        break;
    }
    case 66772:
    {
        returnValue = F("Bungertsweg");
        break;
    }
    case 66773:
    {
        returnValue = F("Bungertweg");
        break;
    }
    case 66774:
    {
        returnValue = F("Bungertäcker");
        break;
    }
    case 66775:
    {
        returnValue = F("Bungerweg");
        break;
    }
    case 66776:
    {
        returnValue = F("Bunggasse");
        break;
    }
    case 66777:
    {
        returnValue = F("Bungsbergstr.");
        break;
    }
    case 66778:
    {
        returnValue = F("Bungscheid");
        break;
    }
    case 66779:
    {
        returnValue = F("Bungsstr.");
        break;
    }
    case 66780:
    {
        returnValue = F("Bunings Weide");
        break;
    }
    case 66781:
    {
        returnValue = F("Buningweg");
        break;
    }
    case 66782:
    {
        returnValue = F("Bunitzer Weg");
        break;
    }
    case 66783:
    {
        returnValue = F("Bunitzstr.");
        break;
    }
    case 66784:
    {
        returnValue = F("Bunjeshof");
        break;
    }
    case 66785:
    {
        returnValue = F("Bunkenburg");
        break;
    }
    case 66786:
    {
        returnValue = F("Bunkenburger Str.");
        break;
    }
    case 66787:
    {
        returnValue = F("Bunkenburger Weg");
        break;
    }
    case 66788:
    {
        returnValue = F("Bunkenweg");
        break;
    }
    case 66789:
    {
        returnValue = F("Bunkerpark");
        break;
    }
    case 66790:
    {
        returnValue = F("Bunkerstr.");
        break;
    }
    case 66791:
    {
        returnValue = F("Bunkerweg");
        break;
    }
    case 66792:
    {
        returnValue = F("Bunkerzufahrt alt");
        break;
    }
    case 66793:
    {
        returnValue = F("Bunkerzufahrt neu");
        break;
    }
    case 66794:
    {
        returnValue = F("Bunkfahner Str.");
        break;
    }
    case 66795:
    {
        returnValue = F("Bunkfahner Weg");
        break;
    }
    case 66796:
    {
        returnValue = F("Bunktillweg");
        break;
    }
    case 66797:
    {
        returnValue = F("Bunnemannstr.");
        break;
    }
    case 66798:
    {
        returnValue = F("Bunnenbergstr.");
        break;
    }
    case 66799:
    {
        returnValue = F("Bunnenbergweg");
        break;
    }
    case 66800:
    {
        returnValue = F("Bunner Landstr.");
        break;
    }
    case 66801:
    {
        returnValue = F("Bunner Str.");
        break;
    }
    case 66802:
    {
        returnValue = F("Bunsdörp");
        break;
    }
    case 66803:
    {
        returnValue = F("Bunsenbergstr.");
        break;
    }
    case 66804:
    {
        returnValue = F("Bunsengang");
        break;
    }
    case 66805:
    {
        returnValue = F("Bunsenstr.");
        break;
    }
    case 66806:
    {
        returnValue = F("Bunsenweg");
        break;
    }
    case 66807:
    {
        returnValue = F("Bunserweg");
        break;
    }
    case 66808:
    {
        returnValue = F("Bunstelhauweg");
        break;
    }
    case 66809:
    {
        returnValue = F("Bunstruthstr.");
        break;
    }
    case 66810:
    {
        returnValue = F("Bunte Brücke");
        break;
    }
    case 66811:
    {
        returnValue = F("Bunte Gärten");
        break;
    }
    case 66812:
    {
        returnValue = F("Bunte Mühle");
        break;
    }
    case 66813:
    {
        returnValue = F("Bunte Riede");
        break;
    }
    case 66814:
    {
        returnValue = F("Bunte Str.");
        break;
    }
    case 66815:
    {
        returnValue = F("Bunte-Mühlen-Weg");
        break;
    }
    case 66816:
    {
        returnValue = F("Buntebach");
        break;
    }
    case 66817:
    {
        returnValue = F("Buntenböcker Str.");
        break;
    }
    case 66818:
    {
        returnValue = F("Buntenhof");
        break;
    }
    case 66819:
    {
        returnValue = F("Buntenskamp");
        break;
    }
    case 66820:
    {
        returnValue = F("Bunter Baum");
        break;
    }
    case 66821:
    {
        returnValue = F("Bunter Platz");
        break;
    }
    case 66822:
    {
        returnValue = F("Bunter Weg");
        break;
    }
    case 66823:
    {
        returnValue = F("Buntgarnstr.");
        break;
    }
    case 66824:
    {
        returnValue = F("Buntsockenpark");
        break;
    }
    case 66825:
    {
        returnValue = F("Buntspechtweg");
        break;
    }
    case 66826:
    {
        returnValue = F("Buntwiesstr.");
        break;
    }
    case 66827:
    {
        returnValue = F("Buntwolfstr.");
        break;
    }
    case 66828:
    {
        returnValue = F("Bunzelweg");
        break;
    }
    case 66829:
    {
        returnValue = F("Bunzenberg");
        break;
    }
    case 66830:
    {
        returnValue = F("Bunzlauer Str.");
        break;
    }
    case 66831:
    {
        returnValue = F("Bunzlauer Weg");
        break;
    }
    case 66832:
    {
        returnValue = F("Buocher Str.");
        break;
    }
    case 66833:
    {
        returnValue = F("Buocher Weg");
        break;
    }
    case 66834:
    {
        returnValue = F("Buolweg");
        break;
    }
    case 66835:
    {
        returnValue = F("Buosteige");
        break;
    }
    case 66836:
    {
        returnValue = F("Bupfenriedweg");
        break;
    }
    case 66837:
    {
        returnValue = F("Bupheverweg");
        break;
    }
    case 66838:
    {
        returnValue = F("Buppersgasse");
        break;
    }
    case 66839:
    {
        returnValue = F("Bupricher Wiese");
        break;
    }
    case 66840:
    {
        returnValue = F("Bur");
        break;
    }
    case 66841:
    {
        returnValue = F("Bur Stücken");
        break;
    }
    case 66842:
    {
        returnValue = F("Burachstr.");
        break;
    }
    case 66843:
    {
        returnValue = F("Burade");
        break;
    }
    case 66844:
    {
        returnValue = F("Burbach");
        break;
    }
    case 66845:
    {
        returnValue = F("Burbacher Str.");
        break;
    }
    case 66846:
    {
        returnValue = F("Burbacher Weg");
        break;
    }
    case 66847:
    {
        returnValue = F("Burbachgasse");
        break;
    }
    case 66848:
    {
        returnValue = F("Burbachstr.");
        break;
    }
    case 66849:
    {
        returnValue = F("Burbankstr.");
        break;
    }
    case 66850:
    {
        returnValue = F("Burbecker Str.");
        break;
    }
    case 66851:
    {
        returnValue = F("Burberg");
        break;
    }
    case 66852:
    {
        returnValue = F("Burbergsweg");
        break;
    }
    case 66853:
    {
        returnValue = F("Burbetstr.");
        break;
    }
    case 66854:
    {
        returnValue = F("Burbrede");
        break;
    }
    case 66855:
    {
        returnValue = F("Burbrockstr.");
        break;
    }
    case 66856:
    {
        returnValue = F("Burcard-Waldis-Str.");
        break;
    }
    case 66857:
    {
        returnValue = F("Burchard-von-Stein-Str.");
        break;
    }
    case 66858:
    {
        returnValue = F("Burchardistr.");
        break;
    }
    case 66859:
    {
        returnValue = F("Burchardstr.");
        break;
    }
    case 66860:
    {
        returnValue = F("Burchardtsweg");
        break;
    }
    case 66861:
    {
        returnValue = F("Burchardus-Platz");
        break;
    }
    case 66862:
    {
        returnValue = F("Burchinger Berg");
        break;
    }
    case 66863:
    {
        returnValue = F("Burchrainweg");
        break;
    }
    case 66864:
    {
        returnValue = F("Burchter Str.");
        break;
    }
    case 66865:
    {
        returnValue = F("Burchwald-Weg");
        break;
    }
    case 66866:
    {
        returnValue = F("Burchweg");
        break;
    }
    case 66867:
    {
        returnValue = F("Burckardstr.");
        break;
    }
    case 66868:
    {
        returnValue = F("Burckhardstr.");
        break;
    }
    case 66869:
    {
        returnValue = F("Burckhardtstr.");
        break;
    }
    case 66870:
    {
        returnValue = F("Burckhartstr.");
        break;
    }
    case 66871:
    {
        returnValue = F("Burdahl");
        break;
    }
    case 66872:
    {
        returnValue = F("Burdastr.");
        break;
    }
    case 66873:
    {
        returnValue = F("Burdengasse");
        break;
    }
    case 66874:
    {
        returnValue = F("Burdenowstr.");
        break;
    }
    case 66875:
    {
        returnValue = F("Burdenstr.");
        break;
    }
    case 66876:
    {
        returnValue = F("Burdental");
        break;
    }
    case 66877:
    {
        returnValue = F("Burdiekskamp");
        break;
    }
    case 66878:
    {
        returnValue = F("Burdiekstr.");
        break;
    }
    case 66879:
    {
        returnValue = F("Burdoken");
        break;
    }
    case 66880:
    {
        returnValue = F("Burefeldstr.");
        break;
    }
    case 66881:
    {
        returnValue = F("Burenbach");
        break;
    }
    case 66882:
    {
        returnValue = F("Burenbrook");
        break;
    }
    case 66883:
    {
        returnValue = F("Burengasse");
        break;
    }
    case 66884:
    {
        returnValue = F("Burengracht");
        break;
    }
    case 66885:
    {
        returnValue = F("Burenhofsweg");
        break;
    }
    case 66886:
    {
        returnValue = F("Burenhörn");
        break;
    }
    case 66887:
    {
        returnValue = F("Burenkamp");
        break;
    }
    case 66888:
    {
        returnValue = F("Burenknöll");
        break;
    }
    case 66889:
    {
        returnValue = F("Burenkrog");
        break;
    }
    case 66890:
    {
        returnValue = F("Burenmoorstr.");
        break;
    }
    case 66891:
    {
        returnValue = F("Burenstock");
        break;
    }
    case 66892:
    {
        returnValue = F("Burenstr.");
        break;
    }
    case 66893:
    {
        returnValue = F("Burenweg");
        break;
    }
    case 66894:
    {
        returnValue = F("Burenweg Nord");
        break;
    }
    case 66895:
    {
        returnValue = F("Burenweg Süd");
        break;
    }
    case 66896:
    {
        returnValue = F("Burenziegen");
        break;
    }
    case 66897:
    {
        returnValue = F("Burer Ring");
        break;
    }
    case 66898:
    {
        returnValue = F("Burfehner Weg");
        break;
    }
    case 66899:
    {
        returnValue = F("Burfelsweg");
        break;
    }
    case 66900:
    {
        returnValue = F("Burfkamp");
        break;
    }
    case 66901:
    {
        returnValue = F("Burg");
        break;
    }
    case 66902:
    {
        returnValue = F("Burg Bollendorf");
        break;
    }
    case 66903:
    {
        returnValue = F("Burg Denstedt");
        break;
    }
    case 66904:
    {
        returnValue = F("Burg Falkenstein");
        break;
    }
    case 66905:
    {
        returnValue = F("Burg Fischhausen");
        break;
    }
    case 66906:
    {
        returnValue = F("Burg Frenz");
        break;
    }
    case 66907:
    {
        returnValue = F("Burg Heistard");
        break;
    }
    case 66908:
    {
        returnValue = F("Burg Isenberg (Isenburg)");
        break;
    }
    case 66909:
    {
        returnValue = F("Burg Kleinbüllesheim");
        break;
    }
    case 66910:
    {
        returnValue = F("Burg Lichtenfels");
        break;
    }
    case 66911:
    {
        returnValue = F("Burg Lobenstein");
        break;
    }
    case 66912:
    {
        returnValue = F("Burg Obbendorf");
        break;
    }
    case 66913:
    {
        returnValue = F("Burg Rötteln");
        break;
    }
    case 66914:
    {
        returnValue = F("Burg Scharfenstein");
        break;
    }
    case 66915:
    {
        returnValue = F("Burg Schlitz");
        break;
    }
    case 66916:
    {
        returnValue = F("Burg Schweinheim");
        break;
    }
    case 66917:
    {
        returnValue = F("Burg Schönrath");
        break;
    }
    case 66918:
    {
        returnValue = F("Burg Sooneck");
        break;
    }
    case 66919:
    {
        returnValue = F("Burg Stargarder Weg");
        break;
    }
    case 66920:
    {
        returnValue = F("Burg Vellinghausen");
        break;
    }
    case 66921:
    {
        returnValue = F("Burg Weg");
        break;
    }
    case 66922:
    {
        returnValue = F("Burg und Schloß");
        break;
    }
    case 66923:
    {
        returnValue = F("Burg- Wiesen- Park");
        break;
    }
    case 66924:
    {
        returnValue = F("Burg-Altena-Platz");
        break;
    }
    case 66925:
    {
        returnValue = F("Burg-Arras-Str.");
        break;
    }
    case 66926:
    {
        returnValue = F("Burg-Dauchstein-Str.");
        break;
    }
    case 66927:
    {
        returnValue = F("Burg-Ehrenfels-Weg");
        break;
    }
    case 66928:
    {
        returnValue = F("Burg-Eltz-Str.");
        break;
    }
    case 66929:
    {
        returnValue = F("Burg-Eltz-Weg");
        break;
    }
    case 66930:
    {
        returnValue = F("Burg-Fürsteneck-Str.");
        break;
    }
    case 66931:
    {
        returnValue = F("Burg-Gemündener Weg");
        break;
    }
    case 66932:
    {
        returnValue = F("Burg-Gräfenröder-Str.");
        break;
    }
    case 66933:
    {
        returnValue = F("Burg-Hauneck-Str.");
        break;
    }
    case 66934:
    {
        returnValue = F("Burg-Layer Str.");
        break;
    }
    case 66935:
    {
        returnValue = F("Burg-Layer-Str.");
        break;
    }
    case 66936:
    {
        returnValue = F("Burg-Lichteneck-Weg");
        break;
    }
    case 66937:
    {
        returnValue = F("Burg-Scharfeneck-Str.");
        break;
    }
    case 66938:
    {
        returnValue = F("Burg-Schmalzhafen-Weg");
        break;
    }
    case 66939:
    {
        returnValue = F("Burg-Schneise");
        break;
    }
    case 66940:
    {
        returnValue = F("Burg-Stein-Gasse");
        break;
    }
    case 66941:
    {
        returnValue = F("Burg-Steineck-Str.");
        break;
    }
    case 66942:
    {
        returnValue = F("Burg-Wehrstein-Str.");
        break;
    }
    case 66943:
    {
        returnValue = F("Burg-Windeck-Str.");
        break;
    }
    case 66944:
    {
        returnValue = F("Burgacker");
        break;
    }
    case 66945:
    {
        returnValue = F("Burgackerhang");
        break;
    }
    case 66946:
    {
        returnValue = F("Burgackerstr.");
        break;
    }
    case 66947:
    {
        returnValue = F("Burgackerweg");
        break;
    }
    case 66948:
    {
        returnValue = F("Burgalber Str.");
        break;
    }
    case 66949:
    {
        returnValue = F("Burgallee");
        break;
    }
    case 66950:
    {
        returnValue = F("Burgaltendorfer Str.");
        break;
    }
    case 66951:
    {
        returnValue = F("Burgambach");
        break;
    }
    case 66952:
    {
        returnValue = F("Burgang");
        break;
    }
    case 66953:
    {
        returnValue = F("Burganger");
        break;
    }
    case 66954:
    {
        returnValue = F("Burgangerweg");
        break;
    }
    case 66955:
    {
        returnValue = F("Burgasse");
        break;
    }
    case 66956:
    {
        returnValue = F("Burgastr.");
        break;
    }
    case 66957:
    {
        returnValue = F("Burgau");
        break;
    }
    case 66958:
    {
        returnValue = F("Burgauel");
        break;
    }
    case 66959:
    {
        returnValue = F("Burgauenstr.");
        break;
    }
    case 66960:
    {
        returnValue = F("Burgauer Str.");
        break;
    }
    case 66961:
    {
        returnValue = F("Burgauer Weg");
        break;
    }
    case 66962:
    {
        returnValue = F("Burgaustr.");
        break;
    }
    case 66963:
    {
        returnValue = F("Burgauweg");
        break;
    }
    case 66964:
    {
        returnValue = F("Burgaß");
        break;
    }
    case 66965:
    {
        returnValue = F("Burgbachstr.");
        break;
    }
    case 66966:
    {
        returnValue = F("Burgbenden");
        break;
    }
    case 66967:
    {
        returnValue = F("Burgberg");
        break;
    }
    case 66968:
    {
        returnValue = F("Burgberg Allee");
        break;
    }
    case 66969:
    {
        returnValue = F("Burgbergblick");
        break;
    }
    case 66970:
    {
        returnValue = F("Burgberger Str.");
        break;
    }
    case 66971:
    {
        returnValue = F("Burgberger Weg");
        break;
    }
    case 66972:
    {
        returnValue = F("Burgbergring");
        break;
    }
    case 66973:
    {
        returnValue = F("Burgbergschule");
        break;
    }
    case 66974:
    {
        returnValue = F("Burgbergsiedlung");
        break;
    }
    case 66975:
    {
        returnValue = F("Burgbergstr.");
        break;
    }
    case 66976:
    {
        returnValue = F("Burgbergweg");
        break;
    }
    case 66977:
    {
        returnValue = F("Burgbering");
        break;
    }
    case 66978:
    {
        returnValue = F("Burgbernheimer Str.");
        break;
    }
    case 66979:
    {
        returnValue = F("Burgblick");
        break;
    }
    case 66980:
    {
        returnValue = F("Burgblickweg");
        break;
    }
    case 66981:
    {
        returnValue = F("Burgbreite");
        break;
    }
    case 66982:
    {
        returnValue = F("Burgbrohler Str.");
        break;
    }
    case 66983:
    {
        returnValue = F("Burgbrunnenweg");
        break;
    }
    case 66984:
    {
        returnValue = F("Burgbrücke");
        break;
    }
    case 66985:
    {
        returnValue = F("Burgbrückenweg");
        break;
    }
    case 66986:
    {
        returnValue = F("Burgbungert");
        break;
    }
    case 66987:
    {
        returnValue = F("Burgbühl");
        break;
    }
    case 66988:
    {
        returnValue = F("Burgbühlstr.");
        break;
    }
    case 66989:
    {
        returnValue = F("Burgdamm");
        break;
    }
    case 66990:
    {
        returnValue = F("Burgdorfer Berg");
        break;
    }
    case 66991:
    {
        returnValue = F("Burgdorfer Str.");
        break;
    }
    case 66992:
    {
        returnValue = F("Burgdorfer Weg");
        break;
    }
    case 66993:
    {
        returnValue = F("Burgdyk");
        break;
    }
    case 66994:
    {
        returnValue = F("Burgebracher Str.");
        break;
    }
    case 66995:
    {
        returnValue = F("Burgeck");
        break;
    }
    case 66996:
    {
        returnValue = F("Burgeckstr.");
        break;
    }
    case 66997:
    {
        returnValue = F("Burgeckweg");
        break;
    }
    case 66998:
    {
        returnValue = F("Burgeiser Str.");
        break;
    }
    case 66999:
    {
        returnValue = F("Burgeiser Weg");
        break;
    }
    case 67000:
    {
        returnValue = F("Burgelsfeld");
        break;
    }
    case 67001:
    {
        returnValue = F("Burgelusweg");
        break;
    }
    case 67002:
    {
        returnValue = F("Burgemeisterweg");
        break;
    }
    case 67003:
    {
        returnValue = F("Burgenblick");
        break;
    }
    case 67004:
    {
        returnValue = F("Burgende");
        break;
    }
    case 67005:
    {
        returnValue = F("Burgenlandallee");
        break;
    }
    case 67006:
    {
        returnValue = F("Burgenlandplatz");
        break;
    }
    case 67007:
    {
        returnValue = F("Burgenlandstr.");
        break;
    }
    case 67008:
    {
        returnValue = F("Burgenlandweg");
        break;
    }
    case 67009:
    {
        returnValue = F("Burgenring");
        break;
    }
    case 67010:
    {
        returnValue = F("Burgenser Str.");
        break;
    }
    case 67011:
    {
        returnValue = F("Burgenser Weg");
        break;
    }
    case 67012:
    {
        returnValue = F("Burgensteig");
        break;
    }
    case 67013:
    {
        returnValue = F("Burgenstr.");
        break;
    }
    case 67014:
    {
        returnValue = F("Burgenstr.-Ost");
        break;
    }
    case 67015:
    {
        returnValue = F("Burgenweg");
        break;
    }
    case 67016:
    {
        returnValue = F("Burgenweg 1 - 14");
        break;
    }
    case 67017:
    {
        returnValue = F("Burgenweg(Oberpfalz)");
        break;
    }
    case 67018:
    {
        returnValue = F("Burgenäckerstr.");
        break;
    }
    case 67019:
    {
        returnValue = F("Burger Haldenweg");
        break;
    }
    case 67020:
    {
        returnValue = F("Burger Hauptstr.");
        break;
    }
    case 67021:
    {
        returnValue = F("Burger Landstr.");
        break;
    }
    case 67022:
    {
        returnValue = F("Burger Saegeweg");
        break;
    }
    case 67023:
    {
        returnValue = F("Burger Saegweg");
        break;
    }
    case 67024:
    {
        returnValue = F("Burger Str.");
        break;
    }
    case 67025:
    {
        returnValue = F("Burger Sägweg");
        break;
    }
    case 67026:
    {
        returnValue = F("Burger Weg");
        break;
    }
    case 67027:
    {
        returnValue = F("Burgerackerweg");
        break;
    }
    case 67028:
    {
        returnValue = F("Burgerbergweg");
        break;
    }
    case 67029:
    {
        returnValue = F("Burgerfeld");
        break;
    }
    case 67030:
    {
        returnValue = F("Burgerfeldstr.");
        break;
    }
    case 67031:
    {
        returnValue = F("Burgergasse");
        break;
    }
    case 67032:
    {
        returnValue = F("Burgerholzweg");
        break;
    }
    case 67033:
    {
        returnValue = F("Burgerkreuzweg");
        break;
    }
    case 67034:
    {
        returnValue = F("Burgermühlgäßchen");
        break;
    }
    case 67035:
    {
        returnValue = F("Burgermühlstr.");
        break;
    }
    case 67036:
    {
        returnValue = F("Burgermühlweiher");
        break;
    }
    case 67037:
    {
        returnValue = F("Burgernickelstr.");
        break;
    }
    case 67038:
    {
        returnValue = F("Burgerpark");
        break;
    }
    case 67039:
    {
        returnValue = F("Burgerrother Str.");
        break;
    }
    case 67040:
    {
        returnValue = F("Burgersdorfer Str.");
        break;
    }
    case 67041:
    {
        returnValue = F("Burgerstr.");
        break;
    }
    case 67042:
    {
        returnValue = F("Burgerwald");
        break;
    }
    case 67043:
    {
        returnValue = F("Burgerwaldstr.");
        break;
    }
    case 67044:
    {
        returnValue = F("Burgerweg");
        break;
    }
    case 67045:
    {
        returnValue = F("Burgerzeller Str.");
        break;
    }
    case 67046:
    {
        returnValue = F("Burgeräcker");
        break;
    }
    case 67047:
    {
        returnValue = F("Burgesch");
        break;
    }
    case 67048:
    {
        returnValue = F("Burget");
        break;
    }
    case 67049:
    {
        returnValue = F("Burgfarrnbacher Str.");
        break;
    }
    case 67050:
    {
        returnValue = F("Burgfeld");
        break;
    }
    case 67051:
    {
        returnValue = F("Burgfeldenstr.");
        break;
    }
    case 67052:
    {
        returnValue = F("Burgfelder Str.");
        break;
    }
    case 67053:
    {
        returnValue = F("Burgfeldgasserl");
        break;
    }
    case 67054:
    {
        returnValue = F("Burgfeldring");
        break;
    }
    case 67055:
    {
        returnValue = F("Burgfeldstr.");
        break;
    }
    case 67056:
    {
        returnValue = F("Burgfeldsweide");
        break;
    }
    case 67057:
    {
        returnValue = F("Burgfeldweg");
        break;
    }
    case 67058:
    {
        returnValue = F("Burgfelsen");
        break;
    }
    case 67059:
    {
        returnValue = F("Burgfischerei");
        break;
    }
    case 67060:
    {
        returnValue = F("Burgforder Kamp");
        break;
    }
    case 67061:
    {
        returnValue = F("Burgfreiheit");
        break;
    }
    case 67062:
    {
        returnValue = F("Burgfried");
        break;
    }
    case 67063:
    {
        returnValue = F("Burgfriede");
        break;
    }
    case 67064:
    {
        returnValue = F("Burgfrieden");
        break;
    }
    case 67065:
    {
        returnValue = F("Burgfriedenspfad");
        break;
    }
    case 67066:
    {
        returnValue = F("Burgfriedenstr.");
        break;
    }
    case 67067:
    {
        returnValue = F("Burgfriedstr.");
        break;
    }
    case 67068:
    {
        returnValue = F("Burgfüllkannen");
        break;
    }
    case 67069:
    {
        returnValue = F("Burggaillenreuth");
        break;
    }
    case 67070:
    {
        returnValue = F("Burggarten");
        break;
    }
    case 67071:
    {
        returnValue = F("Burggarten der Burg Windeck");
        break;
    }
    case 67072:
    {
        returnValue = F("Burggartengasse");
        break;
    }
    case 67073:
    {
        returnValue = F("Burggartenstr.");
        break;
    }
    case 67074:
    {
        returnValue = F("Burggartenweg");
        break;
    }
    case 67075:
    {
        returnValue = F("Burggass");
        break;
    }
    case 67076:
    {
        returnValue = F("Burggasse");
        break;
    }
    case 67077:
    {
        returnValue = F("Burggener Str.");
        break;
    }
    case 67078:
    {
        returnValue = F("Burggraben");
        break;
    }
    case 67079:
    {
        returnValue = F("Burggrabengasse");
        break;
    }
    case 67080:
    {
        returnValue = F("Burggrabengäßchen");
        break;
    }
    case 67081:
    {
        returnValue = F("Burggrabenschlucht");
        break;
    }
    case 67082:
    {
        returnValue = F("Burggrabenstr.");
        break;
    }
    case 67083:
    {
        returnValue = F("Burggrabenweg");
        break;
    }
    case 67084:
    {
        returnValue = F("Burggraf-Friedrich-Str.");
        break;
    }
    case 67085:
    {
        returnValue = F("Burggrafenhofer Str.");
        break;
    }
    case 67086:
    {
        returnValue = F("Burggrafenlacher Weg");
        break;
    }
    case 67087:
    {
        returnValue = F("Burggrafenplatz");
        break;
    }
    case 67088:
    {
        returnValue = F("Burggrafensteige");
        break;
    }
    case 67089:
    {
        returnValue = F("Burggrafenstr.");
        break;
    }
    case 67090:
    {
        returnValue = F("Burggrafenweg");
        break;
    }
    case 67091:
    {
        returnValue = F("Burggrafstr.");
        break;
    }
    case 67092:
    {
        returnValue = F("Burggriesbacher Str.");
        break;
    }
    case 67093:
    {
        returnValue = F("Burggrießbacher Str.");
        break;
    }
    case 67094:
    {
        returnValue = F("Burggrub");
        break;
    }
    case 67095:
    {
        returnValue = F("Burggruber Str.");
        break;
    }
    case 67096:
    {
        returnValue = F("Burggrumbacher Str.");
        break;
    }
    case 67097:
    {
        returnValue = F("Burggrund");
        break;
    }
    case 67098:
    {
        returnValue = F("Burggrundstr.");
        break;
    }
    case 67099:
    {
        returnValue = F("Burggut");
        break;
    }
    case 67100:
    {
        returnValue = F("Burggutgasse");
        break;
    }
    case 67101:
    {
        returnValue = F("Burggärtenweg");
        break;
    }
    case 67102:
    {
        returnValue = F("Burggäßchen");
        break;
    }
    case 67103:
    {
        returnValue = F("Burggäßle");
        break;
    }
    case 67104:
    {
        returnValue = F("Burghagen");
        break;
    }
    case 67105:
    {
        returnValue = F("Burghagener Weg");
        break;
    }
    case 67106:
    {
        returnValue = F("Burghagenstr.");
        break;
    }
    case 67107:
    {
        returnValue = F("Burghagenweg");
        break;
    }
    case 67108:
    {
        returnValue = F("Burghagler Str.");
        break;
    }
    case 67109:
    {
        returnValue = F("Burghaiger Kirchweg");
        break;
    }
    case 67110:
    {
        returnValue = F("Burghaiger Stadtpark");
        break;
    }
    case 67111:
    {
        returnValue = F("Burghaiger Str.");
        break;
    }
    case 67112:
    {
        returnValue = F("Burghaiger Weg");
        break;
    }
    case 67113:
    {
        returnValue = F("Burghain");
        break;
    }
    case 67114:
    {
        returnValue = F("Burghalde");
        break;
    }
    case 67115:
    {
        returnValue = F("Burghalden Weg");
        break;
    }
    case 67116:
    {
        returnValue = F("Burghaldenpark (Verlobungsbuckel)");
        break;
    }
    case 67117:
    {
        returnValue = F("Burghaldenstr.");
        break;
    }
    case 67118:
    {
        returnValue = F("Burghaldenweg");
        break;
    }
    case 67119:
    {
        returnValue = F("Burghalderweg");
        break;
    }
    case 67120:
    {
        returnValue = F("Burghaldeweg");
        break;
    }
    case 67121:
    {
        returnValue = F("Burghardblick");
        break;
    }
    case 67122:
    {
        returnValue = F("Burghardsheide");
        break;
    }
    case 67123:
    {
        returnValue = F("Burghardstr.");
        break;
    }
    case 67124:
    {
        returnValue = F("Burghardswasenweg");
        break;
    }
    case 67125:
    {
        returnValue = F("Burghardtrückenweg");
        break;
    }
    case 67126:
    {
        returnValue = F("Burghardtstr.");
        break;
    }
    case 67127:
    {
        returnValue = F("Burghart");
        break;
    }
    case 67128:
    {
        returnValue = F("Burghartstr.");
        break;
    }
    case 67129:
    {
        returnValue = F("Burghaslacher Str.");
        break;
    }
    case 67130:
    {
        returnValue = F("Burghasunger Str.");
        break;
    }
    case 67131:
    {
        returnValue = F("Burghauner Str.");
        break;
    }
    case 67132:
    {
        returnValue = F("Burghausener Str.");
        break;
    }
    case 67133:
    {
        returnValue = F("Burghausener Weg");
        break;
    }
    case 67134:
    {
        returnValue = F("Burghauser Str.");
        break;
    }
    case 67135:
    {
        returnValue = F("Burghauser Tor");
        break;
    }
    case 67136:
    {
        returnValue = F("Burgheim");
        break;
    }
    case 67137:
    {
        returnValue = F("Burgheimer Lage");
        break;
    }
    case 67138:
    {
        returnValue = F("Burgheimer Str.");
        break;
    }
    case 67139:
    {
        returnValue = F("Burgheister Weg");
        break;
    }
    case 67140:
    {
        returnValue = F("Burghelle");
        break;
    }
    case 67141:
    {
        returnValue = F("Burgherrenstr.");
        break;
    }
    case 67142:
    {
        returnValue = F("Burgherrenweg");
        break;
    }
    case 67143:
    {
        returnValue = F("Burghiebweg");
        break;
    }
    case 67144:
    {
        returnValue = F("Burghof");
        break;
    }
    case 67145:
    {
        returnValue = F("Burghof Burg Kervenheim");
        break;
    }
    case 67146:
    {
        returnValue = F("Burghofer Feld");
        break;
    }
    case 67147:
    {
        returnValue = F("Burghofstr.");
        break;
    }
    case 67148:
    {
        returnValue = F("Burghofweg");
        break;
    }
    case 67149:
    {
        returnValue = F("Burghohl");
        break;
    }
    case 67150:
    {
        returnValue = F("Burgholdinghausen");
        break;
    }
    case 67151:
    {
        returnValue = F("Burgholdinghauser Weg");
        break;
    }
    case 67152:
    {
        returnValue = F("Burgholeebene");
        break;
    }
    case 67153:
    {
        returnValue = F("Burgholz");
        break;
    }
    case 67154:
    {
        returnValue = F("Burgholzer Str.");
        break;
    }
    case 67155:
    {
        returnValue = F("Burgholzer Weg");
        break;
    }
    case 67156:
    {
        returnValue = F("Burgholzhofweg");
        break;
    }
    case 67157:
    {
        returnValue = F("Burgholzstr.");
        break;
    }
    case 67158:
    {
        returnValue = F("Burgholzweg");
        break;
    }
    case 67159:
    {
        returnValue = F("Burgholzwiesen");
        break;
    }
    case 67160:
    {
        returnValue = F("Burghorn");
        break;
    }
    case 67161:
    {
        returnValue = F("Burghorner Weg");
        break;
    }
    case 67162:
    {
        returnValue = F("Burghälde");
        break;
    }
    case 67163:
    {
        returnValue = F("Burghäldenweg");
        break;
    }
    case 67164:
    {
        returnValue = F("Burghäuser Str.");
        break;
    }
    case 67165:
    {
        returnValue = F("Burghäuser Weg");
        break;
    }
    case 67166:
    {
        returnValue = F("Burghöchstadt");
        break;
    }
    case 67167:
    {
        returnValue = F("Burghöfle");
        break;
    }
    case 67168:
    {
        returnValue = F("Burghöftweg");
        break;
    }
    case 67169:
    {
        returnValue = F("Burghöhlstr.");
        break;
    }
    case 67170:
    {
        returnValue = F("Burghölzle");
        break;
    }
    case 67171:
    {
        returnValue = F("Burghörner Str.");
        break;
    }
    case 67172:
    {
        returnValue = F("Burging");
        break;
    }
    case 67173:
    {
        returnValue = F("Burgjosser Str.");
        break;
    }
    case 67174:
    {
        returnValue = F("Burgkamp");
        break;
    }
    case 67175:
    {
        returnValue = F("Burgkampstr.");
        break;
    }
    case 67176:
    {
        returnValue = F("Burgkampweg");
        break;
    }
    case 67177:
    {
        returnValue = F("Burgkapelle");
        break;
    }
    case 67178:
    {
        returnValue = F("Burgkemnitzer Str.");
        break;
    }
    case 67179:
    {
        returnValue = F("Burgker Str.");
        break;
    }
    case 67180:
    {
        returnValue = F("Burgker Str. (2)");
        break;
    }
    case 67181:
    {
        returnValue = F("Burgkhammer");
        break;
    }
    case 67182:
    {
        returnValue = F("Burgkirchen am Wald");
        break;
    }
    case 67183:
    {
        returnValue = F("Burgkirchener Str.");
        break;
    }
    case 67184:
    {
        returnValue = F("Burgkirchner Str.");
        break;
    }
    case 67185:
    {
        returnValue = F("Burgkirchnerstr.");
        break;
    }
    case 67186:
    {
        returnValue = F("Burgklinge");
        break;
    }
    case 67187:
    {
        returnValue = F("Burgknobelweg");
        break;
    }
    case 67188:
    {
        returnValue = F("Burgkopfweg");
        break;
    }
    case 67189:
    {
        returnValue = F("Burgkunstadter Str.");
        break;
    }
    case 67190:
    {
        returnValue = F("Burglahweg");
        break;
    }
    case 67191:
    {
        returnValue = F("Burglehenstr.");
        break;
    }
    case 67192:
    {
        returnValue = F("Burglehenweg");
        break;
    }
    case 67193:
    {
        returnValue = F("Burglehn");
        break;
    }
    case 67194:
    {
        returnValue = F("Burglehnpfad");
        break;
    }
    case 67195:
    {
        returnValue = F("Burglehnstr.");
        break;
    }
    case 67196:
    {
        returnValue = F("Burgleite");
        break;
    }
    case 67197:
    {
        returnValue = F("Burgleiten");
        break;
    }
    case 67198:
    {
        returnValue = F("Burgleitenstr.");
        break;
    }
    case 67199:
    {
        returnValue = F("Burglemnitz");
        break;
    }
    case 67200:
    {
        returnValue = F("Burglengenfelder Str.");
        break;
    }
    case 67201:
    {
        returnValue = F("Burglesrain");
        break;
    }
    case 67202:
    {
        returnValue = F("Burglesweg");
        break;
    }
    case 67203:
    {
        returnValue = F("Burgleweg");
        break;
    }
    case 67204:
    {
        returnValue = F("Burgliebenauer Str.");
        break;
    }
    case 67205:
    {
        returnValue = F("Burglohweg");
        break;
    }
    case 67206:
    {
        returnValue = F("Burgmahd");
        break;
    }
    case 67207:
    {
        returnValue = F("Burgmaierstr.");
        break;
    }
    case 67208:
    {
        returnValue = F("Burgmaierweg");
        break;
    }
    case 67209:
    {
        returnValue = F("Burgmannenstr.");
        break;
    }
    case 67210:
    {
        returnValue = F("Burgmannsgasse");
        break;
    }
    case 67211:
    {
        returnValue = F("Burgmannstr.");
        break;
    }
    case 67212:
    {
        returnValue = F("Burgmannsweg");
        break;
    }
    case 67213:
    {
        returnValue = F("Burgmatten");
        break;
    }
    case 67214:
    {
        returnValue = F("Burgmauer");
        break;
    }
    case 67215:
    {
        returnValue = F("Burgmayerweg");
        break;
    }
    case 67216:
    {
        returnValue = F("Burgmehlstr.");
        break;
    }
    case 67217:
    {
        returnValue = F("Burgmilchlingstr.");
        break;
    }
    case 67218:
    {
        returnValue = F("Burgmühle");
        break;
    }
    case 67219:
    {
        returnValue = F("Burgmühlenstr.");
        break;
    }
    case 67220:
    {
        returnValue = F("Burgmühlenweg");
        break;
    }
    case 67221:
    {
        returnValue = F("Burgmühleweg");
        break;
    }
    case 67222:
    {
        returnValue = F("Burgmühlgasse");
        break;
    }
    case 67223:
    {
        returnValue = F("Burgnebenstr.");
        break;
    }
    case 67224:
    {
        returnValue = F("Burgpark");
        break;
    }
    case 67225:
    {
        returnValue = F("Burgpark Lenzen");
        break;
    }
    case 67226:
    {
        returnValue = F("Burgpassage");
        break;
    }
    case 67227:
    {
        returnValue = F("Burgpfad");
        break;
    }
    case 67228:
    {
        returnValue = F("Burgpforte");
        break;
    }
    case 67229:
    {
        returnValue = F("Burgplatz");
        break;
    }
    case 67230:
    {
        returnValue = F("Burgpromenade");
        break;
    }
    case 67231:
    {
        returnValue = F("Burgpützen");
        break;
    }
    case 67232:
    {
        returnValue = F("Burgquellenweg");
        break;
    }
    case 67233:
    {
        returnValue = F("Burgrain");
        break;
    }
    case 67234:
    {
        returnValue = F("Burgrainer Str.");
        break;
    }
    case 67235:
    {
        returnValue = F("Burgratz");
        break;
    }
    case 67236:
    {
        returnValue = F("Burgriede");
        break;
    }
    case 67237:
    {
        returnValue = F("Burgrieder Str.");
        break;
    }
    case 67238:
    {
        returnValue = F("Burgring");
        break;
    }
    case 67239:
    {
        returnValue = F("Burgringstr.");
        break;
    }
    case 67240:
    {
        returnValue = F("Burgruinenweg");
        break;
    }
    case 67241:
    {
        returnValue = F("Burgscheitel");
        break;
    }
    case 67242:
    {
        returnValue = F("Burgschlagstr.");
        break;
    }
    case 67243:
    {
        returnValue = F("Burgschrofenrundweg");
        break;
    }
    case 67244:
    {
        returnValue = F("Burgschrofenweg");
        break;
    }
    case 67245:
    {
        returnValue = F("Burgschwabachweg");
        break;
    }
    case 67246:
    {
        returnValue = F("Burgschwaigerweg");
        break;
    }
    case 67247:
    {
        returnValue = F("Burgschwalbacher Str.");
        break;
    }
    case 67248:
    {
        returnValue = F("Burgschwalbacher Weg");
        break;
    }
    case 67249:
    {
        returnValue = F("Burgsdorfer Weg");
        break;
    }
    case 67250:
    {
        returnValue = F("Burgseestr.");
        break;
    }
    case 67251:
    {
        returnValue = F("Burgseifen");
        break;
    }
    case 67252:
    {
        returnValue = F("Burgselberg");
        break;
    }
    case 67253:
    {
        returnValue = F("Burgselbergweg");
        break;
    }
    case 67254:
    {
        returnValue = F("Burgselstr.");
        break;
    }
    case 67255:
    {
        returnValue = F("Burgselweg");
        break;
    }
    case 67256:
    {
        returnValue = F("Burgsiedlung");
        break;
    }
    case 67257:
    {
        returnValue = F("Burgsinner Str.");
        break;
    }
    case 67258:
    {
        returnValue = F("Burgsittensen");
        break;
    }
    case 67259:
    {
        returnValue = F("Burgsittenser Weg");
        break;
    }
    case 67260:
    {
        returnValue = F("Burgsitz");
        break;
    }
    case 67261:
    {
        returnValue = F("Burgsolmser Str.");
        break;
    }
    case 67262:
    {
        returnValue = F("Burgsolmser Weg");
        break;
    }
    case 67263:
    {
        returnValue = F("Burgspitze");
        break;
    }
    case 67264:
    {
        returnValue = F("Burgstaaken");
        break;
    }
    case 67265:
    {
        returnValue = F("Burgstadener Str.");
        break;
    }
    case 67266:
    {
        returnValue = F("Burgstadlweg");
        break;
    }
    case 67267:
    {
        returnValue = F("Burgstaffel");
        break;
    }
    case 67268:
    {
        returnValue = F("Burgstall");
        break;
    }
    case 67269:
    {
        returnValue = F("Burgstallblick");
        break;
    }
    case 67270:
    {
        returnValue = F("Burgstaller Str.");
        break;
    }
    case 67271:
    {
        returnValue = F("Burgstaller Weg");
        break;
    }
    case 67272:
    {
        returnValue = F("Burgstallerstr.");
        break;
    }
    case 67273:
    {
        returnValue = F("Burgstallgasse");
        break;
    }
    case 67274:
    {
        returnValue = F("Burgstallring");
        break;
    }
    case 67275:
    {
        returnValue = F("Burgstallstr.");
        break;
    }
    case 67276:
    {
        returnValue = F("Burgstalltobelweg (gesperrt)");
        break;
    }
    case 67277:
    {
        returnValue = F("Burgstallweg");
        break;
    }
    case 67278:
    {
        returnValue = F("Burgstede");
        break;
    }
    case 67279:
    {
        returnValue = F("Burgsteg");
        break;
    }
    case 67280:
    {
        returnValue = F("Burgsteig");
        break;
    }
    case 67281:
    {
        returnValue = F("Burgsteige");
        break;
    }
    case 67282:
    {
        returnValue = F("Burgstein");
        break;
    }
    case 67283:
    {
        returnValue = F("Burgsteinfurter Damm");
        break;
    }
    case 67284:
    {
        returnValue = F("Burgsteinfurter Str.");
        break;
    }
    case 67285:
    {
        returnValue = F("Burgsteinstr.");
        break;
    }
    case 67286:
    {
        returnValue = F("Burgsteinweg");
        break;
    }
    case 67287:
    {
        returnValue = F("Burgstelle");
        break;
    }
    case 67288:
    {
        returnValue = F("Burgstellenweg");
        break;
    }
    case 67289:
    {
        returnValue = F("Burgstelleweg");
        break;
    }
    case 67290:
    {
        returnValue = F("Burgstellweg");
        break;
    }
    case 67291:
    {
        returnValue = F("Burgstemmer Str.");
        break;
    }
    case 67292:
    {
        returnValue = F("Burgstieg");
        break;
    }
    case 67293:
    {
        returnValue = F("Burgstiege");
        break;
    }
    case 67294:
    {
        returnValue = F("Burgstiegstr.");
        break;
    }
    case 67295:
    {
        returnValue = F("Burgstockstr.");
        break;
    }
    case 67296:
    {
        returnValue = F("Burgstockweg");
        break;
    }
    case 67297:
    {
        returnValue = F("Burgstr.");
        break;
    }
    case 67298:
    {
        returnValue = F("Burgstr. II");
        break;
    }
    case 67299:
    {
        returnValue = F("Burgsträssle");
        break;
    }
    case 67300:
    {
        returnValue = F("Burgstädt");
        break;
    }
    case 67301:
    {
        returnValue = F("Burgstädter Platz");
        break;
    }
    case 67302:
    {
        returnValue = F("Burgstädter Str.");
        break;
    }
    case 67303:
    {
        returnValue = F("Burgstädtler Str.");
        break;
    }
    case 67304:
    {
        returnValue = F("Burgstätte");
        break;
    }
    case 67305:
    {
        returnValue = F("Burgstätter Str.");
        break;
    }
    case 67306:
    {
        returnValue = F("Burgtal");
        break;
    }
    case 67307:
    {
        returnValue = F("Burgtalstr.");
        break;
    }
    case 67308:
    {
        returnValue = F("Burgtalweg");
        break;
    }
    case 67309:
    {
        returnValue = F("Burgterrasse");
        break;
    }
    case 67310:
    {
        returnValue = F("Burgthanner Str.");
        break;
    }
    case 67311:
    {
        returnValue = F("Burgthanner Weg");
        break;
    }
    case 67312:
    {
        returnValue = F("Burgtobelweg");
        break;
    }
    case 67313:
    {
        returnValue = F("Burgtor");
        break;
    }
    case 67314:
    {
        returnValue = F("Burgtorstr.");
        break;
    }
    case 67315:
    {
        returnValue = F("Burgtorwall");
        break;
    }
    case 67316:
    {
        returnValue = F("Burgtreswitzer Str.");
        break;
    }
    case 67317:
    {
        returnValue = F("Burgtwete");
        break;
    }
    case 67318:
    {
        returnValue = F("Burguffeler Str.");
        break;
    }
    case 67319:
    {
        returnValue = F("Burguffelner Str.");
        break;
    }
    case 67320:
    {
        returnValue = F("Burgundenring");
        break;
    }
    case 67321:
    {
        returnValue = F("Burgundenstr.");
        break;
    }
    case 67322:
    {
        returnValue = F("Burgunder Str.");
        break;
    }
    case 67323:
    {
        returnValue = F("Burgunder Weg");
        break;
    }
    case 67324:
    {
        returnValue = F("Burgunderring");
        break;
    }
    case 67325:
    {
        returnValue = F("Burgunderstr.");
        break;
    }
    case 67326:
    {
        returnValue = F("Burgunderweg");
        break;
    }
    case 67327:
    {
        returnValue = F("Burgundische Str.");
        break;
    }
    case 67328:
    {
        returnValue = F("Burgundstr.");
        break;
    }
    case 67329:
    {
        returnValue = F("Burgusring");
        break;
    }
    case 67330:
    {
        returnValue = F("Burgusstr.");
        break;
    }
    case 67331:
    {
        returnValue = F("Burgviertel");
        break;
    }
    case 67332:
    {
        returnValue = F("Burgvogteistr.");
        break;
    }
    case 67333:
    {
        returnValue = F("Burgwald");
        break;
    }
    case 67334:
    {
        returnValue = F("Burgwald-Lehrpfad Diessen");
        break;
    }
    case 67335:
    {
        returnValue = F("Burgwalder Str.");
        break;
    }
    case 67336:
    {
        returnValue = F("Burgwaldhof");
        break;
    }
    case 67337:
    {
        returnValue = F("Burgwaldstr.");
        break;
    }
    case 67338:
    {
        returnValue = F("Burgwaldweg");
        break;
    }
    case 67339:
    {
        returnValue = F("Burgwall");
        break;
    }
    case 67340:
    {
        returnValue = F("Burgwallbacher Str.");
        break;
    }
    case 67341:
    {
        returnValue = F("Burgwaller Dorfstr.");
        break;
    }
    case 67342:
    {
        returnValue = F("Burgwaller Försterei");
        break;
    }
    case 67343:
    {
        returnValue = F("Burgwaller Landstr.");
        break;
    }
    case 67344:
    {
        returnValue = F("Burgwaller Str.");
        break;
    }
    case 67345:
    {
        returnValue = F("Burgwaller Weg");
        break;
    }
    case 67346:
    {
        returnValue = F("Burgwallrundgang");
        break;
    }
    case 67347:
    {
        returnValue = F("Burgwallsiedlung");
        break;
    }
    case 67348:
    {
        returnValue = F("Burgwallstr.");
        break;
    }
    case 67349:
    {
        returnValue = F("Burgwallweg");
        break;
    }
    case 67350:
    {
        returnValue = F("Burgwanderweg");
        break;
    }
    case 67351:
    {
        returnValue = F("Burgwartschänke (1)");
        break;
    }
    case 67352:
    {
        returnValue = F("Burgwartschänke (2)");
        break;
    }
    case 67353:
    {
        returnValue = F("Burgwartstr.");
        break;
    }
    case 67354:
    {
        returnValue = F("Burgwedeler Str.");
        break;
    }
    case 67355:
    {
        returnValue = F("Burgweg");
        break;
    }
    case 67356:
    {
        returnValue = F("Burgweganlagen");
        break;
    }
    case 67357:
    {
        returnValue = F("Burgwegshöhe");
        break;
    }
    case 67358:
    {
        returnValue = F("Burgwegster Lohne");
        break;
    }
    case 67359:
    {
        returnValue = F("Burgweiher");
        break;
    }
    case 67360:
    {
        returnValue = F("Burgweiherplatz");
        break;
    }
    case 67361:
    {
        returnValue = F("Burgweiherstr.");
        break;
    }
    case 67362:
    {
        returnValue = F("Burgweiler Str.");
        break;
    }
    case 67363:
    {
        returnValue = F("Burgweilerstr.");
        break;
    }
    case 67364:
    {
        returnValue = F("Burgwerbener Str.");
        break;
    }
    case 67365:
    {
        returnValue = F("Burgwerg");
        break;
    }
    case 67366:
    {
        returnValue = F("Burgwies");
        break;
    }
    case 67367:
    {
        returnValue = F("Burgwiese");
        break;
    }
    case 67368:
    {
        returnValue = F("Burgwiesen");
        break;
    }
    case 67369:
    {
        returnValue = F("Burgwiesenstr.");
        break;
    }
    case 67370:
    {
        returnValue = F("Burgwiesenweg");
        break;
    }
    case 67371:
    {
        returnValue = F("Burgwiesstr.");
        break;
    }
    case 67372:
    {
        returnValue = F("Burgwinkel");
        break;
    }
    case 67373:
    {
        returnValue = F("Burgwitz");
        break;
    }
    case 67374:
    {
        returnValue = F("Burgwälder Str.");
        break;
    }
    case 67375:
    {
        returnValue = F("Burgäcker");
        break;
    }
    case 67376:
    {
        returnValue = F("Burgäckerstr.");
        break;
    }
    case 67377:
    {
        returnValue = F("Burgäckerweg");
        break;
    }
    case 67378:
    {
        returnValue = F("Burgörner Weg");
        break;
    }
    case 67379:
    {
        returnValue = F("Burgörnerscher Weg");
        break;
    }
    case 67380:
    {
        returnValue = F("Burgösch");
        break;
    }
    case 67381:
    {
        returnValue = F("Burhafer Str.");
        break;
    }
    case 67382:
    {
        returnValue = F("Burhagen");
        break;
    }
    case 67383:
    {
        returnValue = F("Burhagener Weg");
        break;
    }
    case 67384:
    {
        returnValue = F("Burhahnstr.");
        break;
    }
    case 67385:
    {
        returnValue = F("Burhaiweg");
        break;
    }
    case 67386:
    {
        returnValue = F("Burhaksweg");
        break;
    }
    case 67387:
    {
        returnValue = F("Burhaver Str.");
        break;
    }
    case 67388:
    {
        returnValue = F("Burheide");
        break;
    }
    case 67389:
    {
        returnValue = F("Burhook");
        break;
    }
    case 67390:
    {
        returnValue = F("Burich");
        break;
    }
    case 67391:
    {
        returnValue = F("Burichweg");
        break;
    }
    case 67392:
    {
        returnValue = F("Buristalda");
        break;
    }
    case 67393:
    {
        returnValue = F("Burkamp");
        break;
    }
    case 67394:
    {
        returnValue = F("Burkampstr.");
        break;
    }
    case 67395:
    {
        returnValue = F("Burkampweg");
        break;
    }
    case 67396:
    {
        returnValue = F("Burkarda-Kister-Weg");
        break;
    }
    case 67397:
    {
        returnValue = F("Burkardsleite");
        break;
    }
    case 67398:
    {
        returnValue = F("Burkardstr.");
        break;
    }
    case 67399:
    {
        returnValue = F("Burkardusplatz");
        break;
    }
    case 67400:
    {
        returnValue = F("Burkardusstr.");
        break;
    }
    case 67401:
    {
        returnValue = F("Burkardusweg");
        break;
    }
    case 67402:
    {
        returnValue = F("Burkartsgäßchen");
        break;
    }
    case 67403:
    {
        returnValue = F("Burkartshainer Str.");
        break;
    }
    case 67404:
    {
        returnValue = F("Burkartstr.");
        break;
    }
    case 67405:
    {
        returnValue = F("Burkauer Str.");
        break;
    }
    case 67406:
    {
        returnValue = F("Burkauer Weg");
        break;
    }
    case 67407:
    {
        returnValue = F("Burker Höhe");
        break;
    }
    case 67408:
    {
        returnValue = F("Burker Str.");
        break;
    }
    case 67409:
    {
        returnValue = F("Burkersdorf");
        break;
    }
    case 67410:
    {
        returnValue = F("Burkersdorfer Str.");
        break;
    }
    case 67411:
    {
        returnValue = F("Burkersdorfer Weg");
        break;
    }
    case 67412:
    {
        returnValue = F("Burkersrodaer Str.");
        break;
    }
    case 67413:
    {
        returnValue = F("Burkertsbuck");
        break;
    }
    case 67414:
    {
        returnValue = F("Burkertsdorfer Weg");
        break;
    }
    case 67415:
    {
        returnValue = F("Burkertsleithenweg");
        break;
    }
    case 67416:
    {
        returnValue = F("Burkh.-von-Hohenfels Str.");
        break;
    }
    case 67417:
    {
        returnValue = F("Burkhardsberger Str.");
        break;
    }
    case 67418:
    {
        returnValue = F("Burkhardser Weg");
        break;
    }
    case 67419:
    {
        returnValue = F("Burkhardsfelder Str.");
        break;
    }
    case 67420:
    {
        returnValue = F("Burkhardshof");
        break;
    }
    case 67421:
    {
        returnValue = F("Burkhardsplatz");
        break;
    }
    case 67422:
    {
        returnValue = F("Burkhardsrieth");
        break;
    }
    case 67423:
    {
        returnValue = F("Burkhardstr.");
        break;
    }
    case 67424:
    {
        returnValue = F("Burkhardswalder Str.");
        break;
    }
    case 67425:
    {
        returnValue = F("Burkhardsweiler");
        break;
    }
    case 67426:
    {
        returnValue = F("Burkhardt-Schneise");
        break;
    }
    case 67427:
    {
        returnValue = F("Burkhardtrodaer Weg");
        break;
    }
    case 67428:
    {
        returnValue = F("Burkhardtschneise");
        break;
    }
    case 67429:
    {
        returnValue = F("Burkhardtsdorfer Kirmessteig");
        break;
    }
    case 67430:
    {
        returnValue = F("Burkhardtsdorfer Str.");
        break;
    }
    case 67431:
    {
        returnValue = F("Burkhardtsdorfer Weg");
        break;
    }
    case 67432:
    {
        returnValue = F("Burkhardtsgrüner Str.");
        break;
    }
    case 67433:
    {
        returnValue = F("Burkhardtsgrüner Weg");
        break;
    }
    case 67434:
    {
        returnValue = F("Burkhardtshaus");
        break;
    }
    case 67435:
    {
        returnValue = F("Burkhardtstr.");
        break;
    }
    case 67436:
    {
        returnValue = F("Burkhardtsweg");
        break;
    }
    case 67437:
    {
        returnValue = F("Burkhardweg");
        break;
    }
    case 67438:
    {
        returnValue = F("Burkhartsdorfer Park");
        break;
    }
    case 67439:
    {
        returnValue = F("Burkhartshauser Weg");
        break;
    }
    case 67440:
    {
        returnValue = F("Burkhartstr.");
        break;
    }
    case 67441:
    {
        returnValue = F("Burkheimer Landstr.");
        break;
    }
    case 67442:
    {
        returnValue = F("Burkheimer Str.");
        break;
    }
    case 67443:
    {
        returnValue = F("Burkämpe");
        break;
    }
    case 67444:
    {
        returnValue = F("Burlachinstr.");
        break;
    }
    case 67445:
    {
        returnValue = F("Burladinger Str.");
        break;
    }
    case 67446:
    {
        returnValue = F("Burlaer Str.");
        break;
    }
    case 67447:
    {
        returnValue = F("Burlafinger Str.");
        break;
    }
    case 67448:
    {
        returnValue = F("Burlafinger Weg");
        break;
    }
    case 67449:
    {
        returnValue = F("Burlagen Heuweg");
        break;
    }
    case 67450:
    {
        returnValue = F("Burlageneck");
        break;
    }
    case 67451:
    {
        returnValue = F("Burlager Kirchweg");
        break;
    }
    case 67452:
    {
        returnValue = F("Burlager Str.");
        break;
    }
    case 67453:
    {
        returnValue = F("Burlager Weg");
        break;
    }
    case 67454:
    {
        returnValue = F("Burlageweg");
        break;
    }
    case 67455:
    {
        returnValue = F("Burlakenweg");
        break;
    }
    case 67456:
    {
        returnValue = F("Burland");
        break;
    }
    case 67457:
    {
        returnValue = F("Burleswagener Str.");
        break;
    }
    case 67458:
    {
        returnValue = F("Burliethsweg");
        break;
    }
    case 67459:
    {
        returnValue = F("Burloer Str.");
        break;
    }
    case 67460:
    {
        returnValue = F("Burloer Weg");
        break;
    }
    case 67461:
    {
        returnValue = F("Burlohe");
        break;
    }
    case 67462:
    {
        returnValue = F("Burländer Pad");
        break;
    }
    case 67463:
    {
        returnValue = F("Burmeide");
        break;
    }
    case 67464:
    {
        returnValue = F("Burmeidsweg");
        break;
    }
    case 67465:
    {
        returnValue = F("Burmeine");
        break;
    }
    case 67466:
    {
        returnValue = F("Burmeister Helmer");
        break;
    }
    case 67467:
    {
        returnValue = F("Burmeisterallee");
        break;
    }
    case 67468:
    {
        returnValue = F("Burmeisterweg");
        break;
    }
    case 67469:
    {
        returnValue = F("Burmesterstr.");
        break;
    }
    case 67470:
    {
        returnValue = F("Burmesterweg");
        break;
    }
    case 67471:
    {
        returnValue = F("Burmichsfeld");
        break;
    }
    case 67472:
    {
        returnValue = F("Burmönken");
        break;
    }
    case 67473:
    {
        returnValue = F("Burnhörn");
        break;
    }
    case 67474:
    {
        returnValue = F("Burnitzstr.");
        break;
    }
    case 67475:
    {
        returnValue = F("Burnplatz");
        break;
    }
    case 67476:
    {
        returnValue = F("Burns Avenue");
        break;
    }
    case 67477:
    {
        returnValue = F("Buroer Aueweg");
        break;
    }
    case 67478:
    {
        returnValue = F("Buroer Mittelstr.");
        break;
    }
    case 67479:
    {
        returnValue = F("Buronstr.");
        break;
    }
    case 67480:
    {
        returnValue = F("Buronweg");
        break;
    }
    case 67481:
    {
        returnValue = F("Burower Dorfstr.");
        break;
    }
    case 67482:
    {
        returnValue = F("Burower Weg");
        break;
    }
    case 67483:
    {
        returnValue = F("Burrainstr.");
        break;
    }
    case 67484:
    {
        returnValue = F("Burrainweg");
        break;
    }
    case 67485:
    {
        returnValue = F("Burrbachweg");
        break;
    }
    case 67486:
    {
        returnValue = F("Burrberg");
        break;
    }
    case 67487:
    {
        returnValue = F("Burrbergstr.");
        break;
    }
    case 67488:
    {
        returnValue = F("Burrech");
        break;
    }
    case 67489:
    {
        returnValue = F("Burren");
        break;
    }
    case 67490:
    {
        returnValue = F("Burrenstr.");
        break;
    }
    case 67491:
    {
        returnValue = F("Burrensträßchen");
        break;
    }
    case 67492:
    {
        returnValue = F("Burrenwasen");
        break;
    }
    case 67493:
    {
        returnValue = F("Burrenweg");
        break;
    }
    case 67494:
    {
        returnValue = F("Burrenäcker");
        break;
    }
    case 67495:
    {
        returnValue = F("Burrichters Weg");
        break;
    }
    case 67496:
    {
        returnValue = F("Burrisweg");
        break;
    }
    case 67497:
    {
        returnValue = F("Burrlesgasse");
        break;
    }
    case 67498:
    {
        returnValue = F("Burrweilerer Str.");
        break;
    }
    case 67499:
    {
        returnValue = F("Burrweilerstr.");
        break;
    }
    case 67500:
    {
        returnValue = F("Bursariuskamp");
        break;
    }
    case 67501:
    {
        returnValue = F("Burschachen");
        break;
    }
    case 67502:
    {
        returnValue = F("Burscheider Str.");
        break;
    }
    case 67503:
    {
        returnValue = F("Burscheidsnuck");
        break;
    }
    case 67504:
    {
        returnValue = F("Burscheidter Weg");
        break;
    }
    case 67505:
    {
        returnValue = F("Burscheidweg");
        break;
    }
    case 67506:
    {
        returnValue = F("Burschelsgass");
        break;
    }
    case 67507:
    {
        returnValue = F("Burschelweg");
        break;
    }
    case 67508:
    {
        returnValue = F("Burschlaer Feld");
        break;
    }
    case 67509:
    {
        returnValue = F("Bursengörden");
        break;
    }
    case 67510:
    {
        returnValue = F("Burserweg");
        break;
    }
    case 67511:
    {
        returnValue = F("Bursiek");
        break;
    }
    case 67512:
    {
        returnValue = F("Burslopp");
        break;
    }
    case 67513:
    {
        returnValue = F("Burstah");
        break;
    }
    case 67514:
    {
        returnValue = F("Burstenstr.");
        break;
    }
    case 67515:
    {
        returnValue = F("Burstenweg");
        break;
    }
    case 67516:
    {
        returnValue = F("Burstr.");
        break;
    }
    case 67517:
    {
        returnValue = F("Burstweg");
        break;
    }
    case 67518:
    {
        returnValue = F("Bursweg");
        break;
    }
    case 67519:
    {
        returnValue = F("Burtelstr.");
        break;
    }
    case 67520:
    {
        returnValue = F("Burtenbacher Str.");
        break;
    }
    case 67521:
    {
        returnValue = F("Burteweg");
        break;
    }
    case 67522:
    {
        returnValue = F("Burthun");
        break;
    }
    case 67523:
    {
        returnValue = F("Burtscheid");
        break;
    }
    case 67524:
    {
        returnValue = F("Burtschützer Str.");
        break;
    }
    case 67525:
    {
        returnValue = F("Burvagsweg");
        break;
    }
    case 67526:
    {
        returnValue = F("Burvogtskamp");
        break;
    }
    case 67527:
    {
        returnValue = F("Burvogtsweg");
        break;
    }
    case 67528:
    {
        returnValue = F("Burwahlstr.");
        break;
    }
    case 67529:
    {
        returnValue = F("Burwarfer Str.");
        break;
    }
    case 67530:
    {
        returnValue = F("Burweg");
        break;
    }
    case 67531:
    {
        returnValue = F("Burweger Str.");
        break;
    }
    case 67532:
    {
        returnValue = F("Burweken");
        break;
    }
    case 67533:
    {
        returnValue = F("Burwiese");
        break;
    }
    case 67534:
    {
        returnValue = F("Burwiesenstr.");
        break;
    }
    case 67535:
    {
        returnValue = F("Burwinkel");
        break;
    }
    case 67536:
    {
        returnValue = F("Burwinkelstr.");
        break;
    }
    case 67537:
    {
        returnValue = F("Burwinkler Hellmer");
        break;
    }
    case 67538:
    {
        returnValue = F("Burwinkler Moorweg");
        break;
    }
    case 67539:
    {
        returnValue = F("Burwisch");
        break;
    }
    case 67540:
    {
        returnValue = F("Burwischdamm");
        break;
    }
    case 67541:
    {
        returnValue = F("Burwischweg");
        break;
    }
    case 67542:
    {
        returnValue = F("Burxdorfer Str.");
        break;
    }
    case 67543:
    {
        returnValue = F("Bury St. Edmunds-Str.");
        break;
    }
    case 67544:
    {
        returnValue = F("Burzaun");
        break;
    }
    case 67545:
    {
        returnValue = F("Burzenland");
        break;
    }
    case 67546:
    {
        returnValue = F("Burötherstr.");
        break;
    }
    case 67547:
    {
        returnValue = F("Bus");
        break;
    }
    case 67548:
    {
        returnValue = F("Busbach");
        break;
    }
    case 67549:
    {
        returnValue = F("Busbahnhof");
        break;
    }
    case 67550:
    {
        returnValue = F("Busboomsfehner Str.");
        break;
    }
    case 67551:
    {
        returnValue = F("Busch");
        break;
    }
    case 67552:
    {
        returnValue = F("Busch-Johannsen-Str.");
        break;
    }
    case 67553:
    {
        returnValue = F("Busch-Monno-Weg");
        break;
    }
    case 67554:
    {
        returnValue = F("Buscha");
        break;
    }
    case 67555:
    {
        returnValue = F("Buschacker");
        break;
    }
    case 67556:
    {
        returnValue = F("Buschau");
        break;
    }
    case 67557:
    {
        returnValue = F("Buschbeller Str.");
        break;
    }
    case 67558:
    {
        returnValue = F("Buschberg");
        break;
    }
    case 67559:
    {
        returnValue = F("Buschberger Weg");
        break;
    }
    case 67560:
    {
        returnValue = F("Buschbergstr.");
        break;
    }
    case 67561:
    {
        returnValue = F("Buschblick");
        break;
    }
    case 67562:
    {
        returnValue = F("Buschbrede");
        break;
    }
    case 67563:
    {
        returnValue = F("Buschbreite");
        break;
    }
    case 67564:
    {
        returnValue = F("Buschdamm");
        break;
    }
    case 67565:
    {
        returnValue = F("Buschdorfer Str.");
        break;
    }
    case 67566:
    {
        returnValue = F("Buschdorfer Weg");
        break;
    }
    case 67567:
    {
        returnValue = F("Buschdornkamp");
        break;
    }
    case 67568:
    {
        returnValue = F("Buschebornweg");
        break;
    }
    case 67569:
    {
        returnValue = F("Buscheck");
        break;
    }
    case 67570:
    {
        returnValue = F("Buschelackerweg");
        break;
    }
    case 67571:
    {
        returnValue = F("Buschelberg");
        break;
    }
    case 67572:
    {
        returnValue = F("Buschelbergstr.");
        break;
    }
    case 67573:
    {
        returnValue = F("Buschelweg");
        break;
    }
    case 67574:
    {
        returnValue = F("Buscheläckerstr.");
        break;
    }
    case 67575:
    {
        returnValue = F("Buschen Berg");
        break;
    }
    case 67576:
    {
        returnValue = F("Buschen Erben");
        break;
    }
    case 67577:
    {
        returnValue = F("Buschenauer Str.");
        break;
    }
    case 67578:
    {
        returnValue = F("Buschend");
        break;
    }
    case 67579:
    {
        returnValue = F("Buschengasse");
        break;
    }
    case 67580:
    {
        returnValue = F("Buschenkamp");
        break;
    }
    case 67581:
    {
        returnValue = F("Buschenstr.");
        break;
    }
    case 67582:
    {
        returnValue = F("Buschenvenn");
        break;
    }
    case 67583:
    {
        returnValue = F("Buschenweg");
        break;
    }
    case 67584:
    {
        returnValue = F("Buscher Str.");
        break;
    }
    case 67585:
    {
        returnValue = F("Buscher Weg");
        break;
    }
    case 67586:
    {
        returnValue = F("Buscherbahn");
        break;
    }
    case 67587:
    {
        returnValue = F("Buscherheide");
        break;
    }
    case 67588:
    {
        returnValue = F("Buscherhof");
        break;
    }
    case 67589:
    {
        returnValue = F("Buscherkamp");
        break;
    }
    case 67590:
    {
        returnValue = F("Buschernweg");
        break;
    }
    case 67591:
    {
        returnValue = F("Buscherpfädchen");
        break;
    }
    case 67592:
    {
        returnValue = F("Buscherstr.");
        break;
    }
    case 67593:
    {
        returnValue = F("Buscherweg");
        break;
    }
    case 67594:
    {
        returnValue = F("Buschestr.");
        break;
    }
    case 67595:
    {
        returnValue = F("Buschfeld");
        break;
    }
    case 67596:
    {
        returnValue = F("Buschfelder Weg");
        break;
    }
    case 67597:
    {
        returnValue = F("Buschfeldweg");
        break;
    }
    case 67598:
    {
        returnValue = F("Buschfenne");
        break;
    }
    case 67599:
    {
        returnValue = F("Buschgarten");
        break;
    }
    case 67600:
    {
        returnValue = F("Buschgartenweg");
        break;
    }
    case 67601:
    {
        returnValue = F("Buschgasse");
        break;
    }
    case 67602:
    {
        returnValue = F("Buschgasse -neu-");
        break;
    }
    case 67603:
    {
        returnValue = F("Buschgastweg");
        break;
    }
    case 67604:
    {
        returnValue = F("Buschgrund");
        break;
    }
    case 67605:
    {
        returnValue = F("Buschgärten");
        break;
    }
    case 67606:
    {
        returnValue = F("Buschhagen");
        break;
    }
    case 67607:
    {
        returnValue = F("Buschhaus");
        break;
    }
    case 67608:
    {
        returnValue = F("Buschhausen");
        break;
    }
    case 67609:
    {
        returnValue = F("Buschhausener Str.");
        break;
    }
    case 67610:
    {
        returnValue = F("Buschhausener Weg");
        break;
    }
    case 67611:
    {
        returnValue = F("Buschhausweg");
        break;
    }
    case 67612:
    {
        returnValue = F("Buschheckenweg");
        break;
    }
    case 67613:
    {
        returnValue = F("Buschheide");
        break;
    }
    case 67614:
    {
        returnValue = F("Buschhof");
        break;
    }
    case 67615:
    {
        returnValue = F("Buschhofer Weg");
        break;
    }
    case 67616:
    {
        returnValue = F("Buschhoffweg");
        break;
    }
    case 67617:
    {
        returnValue = F("Buschhofstr.");
        break;
    }
    case 67618:
    {
        returnValue = F("Buschhofweg");
        break;
    }
    case 67619:
    {
        returnValue = F("Buschhohl");
        break;
    }
    case 67620:
    {
        returnValue = F("Buschholzstr.");
        break;
    }
    case 67621:
    {
        returnValue = F("Buschholzweg");
        break;
    }
    case 67622:
    {
        returnValue = F("Buschhorn");
        break;
    }
    case 67623:
    {
        returnValue = F("Buschhornstr.");
        break;
    }
    case 67624:
    {
        returnValue = F("Buschhornweg");
        break;
    }
    case 67625:
    {
        returnValue = F("Buschhorstweg");
        break;
    }
    case 67626:
    {
        returnValue = F("Buschhoven");
        break;
    }
    case 67627:
    {
        returnValue = F("Buschhovener Str.");
        break;
    }
    case 67628:
    {
        returnValue = F("Buschhovener Weg");
        break;
    }
    case 67629:
    {
        returnValue = F("Buschhäuserweg");
        break;
    }
    case 67630:
    {
        returnValue = F("Buschhöfen");
        break;
    }
    case 67631:
    {
        returnValue = F("Buschhöh");
        break;
    }
    case 67632:
    {
        returnValue = F("Buschhöhlenweg");
        break;
    }
    case 67633:
    {
        returnValue = F("Buschhörne");
        break;
    }
    case 67634:
    {
        returnValue = F("Buschhörnstr.");
        break;
    }
    case 67635:
    {
        returnValue = F("Buschhüttener Str.");
        break;
    }
    case 67636:
    {
        returnValue = F("Buschingstr.");
        break;
    }
    case 67637:
    {
        returnValue = F("Buschkamp");
        break;
    }
    case 67638:
    {
        returnValue = F("Buschkampsweg");
        break;
    }
    case 67639:
    {
        returnValue = F("Buschkampweg");
        break;
    }
    case 67640:
    {
        returnValue = F("Buschkauler Weg");
        break;
    }
    case 67641:
    {
        returnValue = F("Buschkenweg");
        break;
    }
    case 67642:
    {
        returnValue = F("Buschklapp");
        break;
    }
    case 67643:
    {
        returnValue = F("Buschkoppel");
        break;
    }
    case 67644:
    {
        returnValue = F("Buschkoppel Weg");
        break;
    }
    case 67645:
    {
        returnValue = F("Buschkoppelweg");
        break;
    }
    case 67646:
    {
        returnValue = F("Buschkuhle");
        break;
    }
    case 67647:
    {
        returnValue = F("Buschkämpe");
        break;
    }
    case 67648:
    {
        returnValue = F("Buschland");
        break;
    }
    case 67649:
    {
        returnValue = F("Buschlandweg");
        break;
    }
    case 67650:
    {
        returnValue = F("Buschle");
        break;
    }
    case 67651:
    {
        returnValue = F("Buschlück");
        break;
    }
    case 67652:
    {
        returnValue = F("Buschmaate");
        break;
    }
    case 67653:
    {
        returnValue = F("Buschmannstr.");
        break;
    }
    case 67654:
    {
        returnValue = F("Buschmannsweg");
        break;
    }
    case 67655:
    {
        returnValue = F("Buschmeede");
        break;
    }
    case 67656:
    {
        returnValue = F("Buschmeerweg");
        break;
    }
    case 67657:
    {
        returnValue = F("Buschmeyerstr.");
        break;
    }
    case 67658:
    {
        returnValue = F("Buschmühl");
        break;
    }
    case 67659:
    {
        returnValue = F("Buschmühle");
        break;
    }
    case 67660:
    {
        returnValue = F("Buschmühlenweg");
        break;
    }
    case 67661:
    {
        returnValue = F("Buschmühler Chaussee");
        break;
    }
    case 67662:
    {
        returnValue = F("Buschmühler Weg");
        break;
    }
    case 67663:
    {
        returnValue = F("Buschorstr.");
        break;
    }
    case 67664:
    {
        returnValue = F("Buschort");
        break;
    }
    case 67665:
    {
        returnValue = F("Buschortstr.");
        break;
    }
    case 67666:
    {
        returnValue = F("Buschower Dorfstr.");
        break;
    }
    case 67667:
    {
        returnValue = F("Buschpforte");
        break;
    }
    case 67668:
    {
        returnValue = F("Buschpfädchen");
        break;
    }
    case 67669:
    {
        returnValue = F("Buschplan");
        break;
    }
    case 67670:
    {
        returnValue = F("Buschrandweg");
        break;
    }
    case 67671:
    {
        returnValue = F("Buschriede");
        break;
    }
    case 67672:
    {
        returnValue = F("Buschriege");
        break;
    }
    case 67673:
    {
        returnValue = F("Buschrosenweg");
        break;
    }
    case 67674:
    {
        returnValue = F("Buschsand");
        break;
    }
    case 67675:
    {
        returnValue = F("Buschschänke");
        break;
    }
    case 67676:
    {
        returnValue = F("Buschschörde");
        break;
    }
    case 67677:
    {
        returnValue = F("Buschstegge");
        break;
    }
    case 67678:
    {
        returnValue = F("Buschstr.");
        break;
    }
    case 67679:
    {
        returnValue = F("Buschstücke");
        break;
    }
    case 67680:
    {
        returnValue = F("Buschstücken");
        break;
    }
    case 67681:
    {
        returnValue = F("Buschstückenstr.");
        break;
    }
    case 67682:
    {
        returnValue = F("Buschstückenweg");
        break;
    }
    case 67683:
    {
        returnValue = F("Buschtal");
        break;
    }
    case 67684:
    {
        returnValue = F("Buschteich");
        break;
    }
    case 67685:
    {
        returnValue = F("Buschtellenweg");
        break;
    }
    case 67686:
    {
        returnValue = F("Buschtrifte");
        break;
    }
    case 67687:
    {
        returnValue = F("Buschtwiete");
        break;
    }
    case 67688:
    {
        returnValue = F("Buschurweg");
        break;
    }
    case 67689:
    {
        returnValue = F("Buschwall");
        break;
    }
    case 67690:
    {
        returnValue = F("Buschweg");
        break;
    }
    case 67691:
    {
        returnValue = F("Buschweide");
        break;
    }
    case 67692:
    {
        returnValue = F("Buschwiese");
        break;
    }
    case 67693:
    {
        returnValue = F("Buschwiesen");
        break;
    }
    case 67694:
    {
        returnValue = F("Buschwindröschenweg");
        break;
    }
    case 67695:
    {
        returnValue = F("Buschwingert");
        break;
    }
    case 67696:
    {
        returnValue = F("Buschwinkel");
        break;
    }
    case 67697:
    {
        returnValue = F("Buschäcker");
        break;
    }
    case 67698:
    {
        returnValue = F("Buschöhrchen");
        break;
    }
    case 67699:
    {
        returnValue = F("Busdorfer Str.");
        break;
    }
    case 67700:
    {
        returnValue = F("Busecker Schlosspark");
        break;
    }
    case 67701:
    {
        returnValue = F("Busecker Str.");
        break;
    }
    case 67702:
    {
        returnValue = F("Buseckstr.");
        break;
    }
    case 67703:
    {
        returnValue = F("Buseinfahrt");
        break;
    }
    case 67704:
    {
        returnValue = F("Busemühlenstr.");
        break;
    }
    case 67705:
    {
        returnValue = F("Busenackerstr.");
        break;
    }
    case 67706:
    {
        returnValue = F("Busenackshörner Weg");
        break;
    }
    case 67707:
    {
        returnValue = F("Busenbacher Str.");
        break;
    }
    case 67708:
    {
        returnValue = F("Busenbaumstr.");
        break;
    }
    case 67709:
    {
        returnValue = F("Busenberg");
        break;
    }
    case 67710:
    {
        returnValue = F("Busenberger Str.");
        break;
    }
    case 67711:
    {
        returnValue = F("Busenborner Str.");
        break;
    }
    case 67712:
    {
        returnValue = F("Busendorfer Dorfstr.");
        break;
    }
    case 67713:
    {
        returnValue = F("Busendorfer Str.");
        break;
    }
    case 67714:
    {
        returnValue = F("Busendorfer Weg");
        break;
    }
    case 67715:
    {
        returnValue = F("Busenhübel");
        break;
    }
    case 67716:
    {
        returnValue = F("Busentalsträßle");
        break;
    }
    case 67717:
    {
        returnValue = F("Busentscher Weg");
        break;
    }
    case 67718:
    {
        returnValue = F("Busenwurtherdeich");
        break;
    }
    case 67719:
    {
        returnValue = F("Buser Weg");
        break;
    }
    case 67720:
    {
        returnValue = F("Bush Weg");
        break;
    }
    case 67721:
    {
        returnValue = F("Bushaltebereich 1");
        break;
    }
    case 67722:
    {
        returnValue = F("Bushaltestelle");
        break;
    }
    case 67723:
    {
        returnValue = F("Bushaltestelle Frönsberg");
        break;
    }
    case 67724:
    {
        returnValue = F("Bushaltestelle Rathaus Zellingen");
        break;
    }
    case 67725:
    {
        returnValue = F("Bushof");
        break;
    }
    case 67726:
    {
        returnValue = F("Busholm");
        break;
    }
    case 67727:
    {
        returnValue = F("Buske");
        break;
    }
    case 67728:
    {
        returnValue = F("Buskenkuhle");
        break;
    }
    case 67729:
    {
        returnValue = F("Buskers Lohne");
        break;
    }
    case 67730:
    {
        returnValue = F("Buskower Dorfstr.");
        break;
    }
    case 67731:
    {
        returnValue = F("Buskower Weg");
        break;
    }
    case 67732:
    {
        returnValue = F("Busmannsrieder Str.");
        break;
    }
    case 67733:
    {
        returnValue = F("Busmannstr.");
        break;
    }
    case 67734:
    {
        returnValue = F("Busoldweg");
        break;
    }
    case 67735:
    {
        returnValue = F("Busow");
        break;
    }
    case 67736:
    {
        returnValue = F("Busower Str.");
        break;
    }
    case 67737:
    {
        returnValue = F("Busparkplatz");
        break;
    }
    case 67738:
    {
        returnValue = F("Busquetweg");
        break;
    }
    case 67739:
    {
        returnValue = F("Bussardblick");
        break;
    }
    case 67740:
    {
        returnValue = F("Bussarddamm");
        break;
    }
    case 67741:
    {
        returnValue = F("Bussardgang");
        break;
    }
    case 67742:
    {
        returnValue = F("Bussardhang");
        break;
    }
    case 67743:
    {
        returnValue = F("Bussardheck");
        break;
    }
    case 67744:
    {
        returnValue = F("Bussardhorst");
        break;
    }
    case 67745:
    {
        returnValue = F("Bussardhöhe");
        break;
    }
    case 67746:
    {
        returnValue = F("Bussardplatz");
        break;
    }
    case 67747:
    {
        returnValue = F("Bussardring");
        break;
    }
    case 67748:
    {
        returnValue = F("Bussardsteig");
        break;
    }
    case 67749:
    {
        returnValue = F("Bussardstieg");
        break;
    }
    case 67750:
    {
        returnValue = F("Bussardstr.");
        break;
    }
    case 67751:
    {
        returnValue = F("Bussardweg");
        break;
    }
    case 67752:
    {
        returnValue = F("Bussau");
        break;
    }
    case 67753:
    {
        returnValue = F("Bussche-Münch-Str.");
        break;
    }
    case 67754:
    {
        returnValue = F("Busschleuse");
        break;
    }
    case 67755:
    {
        returnValue = F("Bussemasstr.");
        break;
    }
    case 67756:
    {
        returnValue = F("Bussemerstr.");
        break;
    }
    case 67757:
    {
        returnValue = F("Bussemeyerweg");
        break;
    }
    case 67758:
    {
        returnValue = F("Bussen Barg");
        break;
    }
    case 67759:
    {
        returnValue = F("Bussen Mühle");
        break;
    }
    case 67760:
    {
        returnValue = F("Bussenblick");
        break;
    }
    case 67761:
    {
        returnValue = F("Bussenhartstr.");
        break;
    }
    case 67762:
    {
        returnValue = F("Bussenlande");
        break;
    }
    case 67763:
    {
        returnValue = F("Bussenmühle");
        break;
    }
    case 67764:
    {
        returnValue = F("Bussenmühlenweg");
        break;
    }
    case 67765:
    {
        returnValue = F("Bussenried");
        break;
    }
    case 67766:
    {
        returnValue = F("Bussenstr.");
        break;
    }
    case 67767:
    {
        returnValue = F("Bussental");
        break;
    }
    case 67768:
    {
        returnValue = F("Bussenweg");
        break;
    }
    case 67769:
    {
        returnValue = F("Bussestr.");
        break;
    }
    case 67770:
    {
        returnValue = F("Bussgasse");
        break;
    }
    case 67771:
    {
        returnValue = F("Busshook");
        break;
    }
    case 67772:
    {
        returnValue = F("Bussjans Hof");
        break;
    }
    case 67773:
    {
        returnValue = F("Bussjans Wiese");
        break;
    }
    case 67774:
    {
        returnValue = F("Bussmannshauser Str.");
        break;
    }
    case 67775:
    {
        returnValue = F("Busspur ZOB");
        break;
    }
    case 67776:
    {
        returnValue = F("Busspur talwärts");
        break;
    }
    case 67777:
    {
        returnValue = F("Busstr.");
        break;
    }
    case 67778:
    {
        returnValue = F("Bussweg");
        break;
    }
    case 67779:
    {
        returnValue = F("Bussäckerweg");
        break;
    }
    case 67780:
    {
        returnValue = F("Bust-Fischerdobelweg");
        break;
    }
    case 67781:
    {
        returnValue = F("Bustadt");
        break;
    }
    case 67782:
    {
        returnValue = F("Bustedter Kämpe");
        break;
    }
    case 67783:
    {
        returnValue = F("Bustedter Str.");
        break;
    }
    case 67784:
    {
        returnValue = F("Bustedter Weg");
        break;
    }
    case 67785:
    {
        returnValue = F("Busterbachweg");
        break;
    }
    case 67786:
    {
        returnValue = F("Bustertweg");
        break;
    }
    case 67787:
    {
        returnValue = F("Busthaldenweg");
        break;
    }
    case 67788:
    {
        returnValue = F("Bustorfer Weg");
        break;
    }
    case 67789:
    {
        returnValue = F("Bustweg");
        break;
    }
    case 67790:
    {
        returnValue = F("Busweg");
        break;
    }
    case 67791:
    {
        returnValue = F("Buswende");
        break;
    }
    case 67792:
    {
        returnValue = F("Buswendeplatz");
        break;
    }
    case 67793:
    {
        returnValue = F("Buswendeplatz Gickelsberg");
        break;
    }
    case 67794:
    {
        returnValue = F("Buswendeschleife");
        break;
    }
    case 67795:
    {
        returnValue = F("Buswendeschleife an der Schule");
        break;
    }
    case 67796:
    {
        returnValue = F("Buswendestelle");
        break;
    }
    case 67797:
    {
        returnValue = F("But Dörp");
        break;
    }
    case 67798:
    {
        returnValue = F("But Meere");
        break;
    }
    case 67799:
    {
        returnValue = F("Buten Door");
        break;
    }
    case 67800:
    {
        returnValue = F("Buten Förth");
        break;
    }
    case 67801:
    {
        returnValue = F("Buten Hamburg");
        break;
    }
    case 67802:
    {
        returnValue = F("Buten Porten");
        break;
    }
    case 67803:
    {
        returnValue = F("Butenaf");
        break;
    }
    case 67804:
    {
        returnValue = F("Butenandtstr.");
        break;
    }
    case 67805:
    {
        returnValue = F("Butenau");
        break;
    }
    case 67806:
    {
        returnValue = F("Butenbergsfeld");
        break;
    }
    case 67807:
    {
        returnValue = F("Butenbroock");
        break;
    }
    case 67808:
    {
        returnValue = F("Butendamm");
        break;
    }
    case 67809:
    {
        returnValue = F("Butendiek");
        break;
    }
    case 67810:
    {
        returnValue = F("Butendieksweg");
        break;
    }
    case 67811:
    {
        returnValue = F("Butendoor");
        break;
    }
    case 67812:
    {
        returnValue = F("Butendörp");
        break;
    }
    case 67813:
    {
        returnValue = F("Butener Weg");
        break;
    }
    case 67814:
    {
        returnValue = F("Butengorn");
        break;
    }
    case 67815:
    {
        returnValue = F("Butenhoff");
        break;
    }
    case 67816:
    {
        returnValue = F("Butenhuse");
        break;
    }
    case 67817:
    {
        returnValue = F("Butenkamp");
        break;
    }
    case 67818:
    {
        returnValue = F("Butenkampsweg");
        break;
    }
    case 67819:
    {
        returnValue = F("Butenpad");
        break;
    }
    case 67820:
    {
        returnValue = F("Butenring");
        break;
    }
    case 67821:
    {
        returnValue = F("Butenschönsredder");
        break;
    }
    case 67822:
    {
        returnValue = F("Butenschönstr.");
        break;
    }
    case 67823:
    {
        returnValue = F("Butensee");
        break;
    }
    case 67824:
    {
        returnValue = F("Butenstadt");
        break;
    }
    case 67825:
    {
        returnValue = F("Butenwall");
        break;
    }
    case 67826:
    {
        returnValue = F("Butenweg");
        break;
    }
    case 67827:
    {
        returnValue = F("Buterhusener Str.");
        break;
    }
    case 67828:
    {
        returnValue = F("Butjadinger Bahn");
        break;
    }
    case 67829:
    {
        returnValue = F("Butjadinger Str.");
        break;
    }
    case 67830:
    {
        returnValue = F("Butjadinger Weg");
        break;
    }
    case 67831:
    {
        returnValue = F("Butschbacher Str.");
        break;
    }
    case 67832:
    {
        returnValue = F("Butscheid");
        break;
    }
    case 67833:
    {
        returnValue = F("Butscheider Berg");
        break;
    }
    case 67834:
    {
        returnValue = F("Butschenbergweg");
        break;
    }
    case 67835:
    {
        returnValue = F("Butschergang");
        break;
    }
    case 67836:
    {
        returnValue = F("Butscherweg");
        break;
    }
    case 67837:
    {
        returnValue = F("Butschhofstr.");
        break;
    }
    case 67838:
    {
        returnValue = F("Butschotenweg");
        break;
    }
    case 67839:
    {
        returnValue = F("Butschstr.");
        break;
    }
    case 67840:
    {
        returnValue = F("Butteldorf");
        break;
    }
    case 67841:
    {
        returnValue = F("Butteldorfer Damm");
        break;
    }
    case 67842:
    {
        returnValue = F("Butteldorfer Hellmer");
        break;
    }
    case 67843:
    {
        returnValue = F("Butteldorfer Querweg");
        break;
    }
    case 67844:
    {
        returnValue = F("Butteler Moorweg");
        break;
    }
    case 67845:
    {
        returnValue = F("Butteler Weg");
        break;
    }
    case 67846:
    {
        returnValue = F("Buttelstedter Str.");
        break;
    }
    case 67847:
    {
        returnValue = F("Buttelstr.");
        break;
    }
    case 67848:
    {
        returnValue = F("Buttenbach");
        break;
    }
    case 67849:
    {
        returnValue = F("Buttenbarg");
        break;
    }
    case 67850:
    {
        returnValue = F("Buttenbergweg");
        break;
    }
    case 67851:
    {
        returnValue = F("Buttend");
        break;
    }
    case 67852:
    {
        returnValue = F("Buttengasse");
        break;
    }
    case 67853:
    {
        returnValue = F("Buttenhalde");
        break;
    }
    case 67854:
    {
        returnValue = F("Buttenheimer Str.");
        break;
    }
    case 67855:
    {
        returnValue = F("Buttenhoferstr.");
        break;
    }
    case 67856:
    {
        returnValue = F("Buttenhofweg");
        break;
    }
    case 67857:
    {
        returnValue = F("Buttenkrug");
        break;
    }
    case 67858:
    {
        returnValue = F("Buttenloch");
        break;
    }
    case 67859:
    {
        returnValue = F("Buttenmühle");
        break;
    }
    case 67860:
    {
        returnValue = F("Buttenplatz");
        break;
    }
    case 67861:
    {
        returnValue = F("Buttenstr.");
        break;
    }
    case 67862:
    {
        returnValue = F("Butter Blöcke");
        break;
    }
    case 67863:
    {
        returnValue = F("Butterberg");
        break;
    }
    case 67864:
    {
        returnValue = F("Butterbergkreisel");
        break;
    }
    case 67865:
    {
        returnValue = F("Butterbergstr.");
        break;
    }
    case 67866:
    {
        returnValue = F("Butterbergsweg");
        break;
    }
    case 67867:
    {
        returnValue = F("Butterbergtunnel");
        break;
    }
    case 67868:
    {
        returnValue = F("Butterbergweg");
        break;
    }
    case 67869:
    {
        returnValue = F("Butterbeutelweg");
        break;
    }
    case 67870:
    {
        returnValue = F("Butterblumenweg");
        break;
    }
    case 67871:
    {
        returnValue = F("Butterbrede");
        break;
    }
    case 67872:
    {
        returnValue = F("Butterburg");
        break;
    }
    case 67873:
    {
        returnValue = F("Butterburger Weg");
        break;
    }
    case 67874:
    {
        returnValue = F("Butterburgsweg");
        break;
    }
    case 67875:
    {
        returnValue = F("Butterfennenweg");
        break;
    }
    case 67876:
    {
        returnValue = F("Butterflügel");
        break;
    }
    case 67877:
    {
        returnValue = F("Butterfohrde");
        break;
    }
    case 67878:
    {
        returnValue = F("Buttergang");
        break;
    }
    case 67879:
    {
        returnValue = F("Buttergasse");
        break;
    }
    case 67880:
    {
        returnValue = F("Buttergrund");
        break;
    }
    case 67881:
    {
        returnValue = F("Buttergäßchen");
        break;
    }
    case 67882:
    {
        returnValue = F("Butterhof");
        break;
    }
    case 67883:
    {
        returnValue = F("Butterholz");
        break;
    }
    case 67884:
    {
        returnValue = F("Butterkamp");
        break;
    }
    case 67885:
    {
        returnValue = F("Butterkuhle");
        break;
    }
    case 67886:
    {
        returnValue = F("Butterlecke");
        break;
    }
    case 67887:
    {
        returnValue = F("Butterleithe");
        break;
    }
    case 67888:
    {
        returnValue = F("Butterloch");
        break;
    }
    case 67889:
    {
        returnValue = F("Buttermarkt");
        break;
    }
    case 67890:
    {
        returnValue = F("Buttermarktgasse");
        break;
    }
    case 67891:
    {
        returnValue = F("Buttermilch");
        break;
    }
    case 67892:
    {
        returnValue = F("Buttermilchskrug");
        break;
    }
    case 67893:
    {
        returnValue = F("Buttermilchsteig");
        break;
    }
    case 67894:
    {
        returnValue = F("Buttermilchstr.");
        break;
    }
    case 67895:
    {
        returnValue = F("Buttermilchtorweg");
        break;
    }
    case 67896:
    {
        returnValue = F("Buttermilchweg");
        break;
    }
    case 67897:
    {
        returnValue = F("Buttermilchwinkel");
        break;
    }
    case 67898:
    {
        returnValue = F("Buttermoor");
        break;
    }
    case 67899:
    {
        returnValue = F("Buttermoorweg");
        break;
    }
    case 67900:
    {
        returnValue = F("Butterort");
        break;
    }
    case 67901:
    {
        returnValue = F("Butterpfad");
        break;
    }
    case 67902:
    {
        returnValue = F("Butterpiertchen");
        break;
    }
    case 67903:
    {
        returnValue = F("Buttersteg");
        break;
    }
    case 67904:
    {
        returnValue = F("Buttersteig");
        break;
    }
    case 67905:
    {
        returnValue = F("Butterstieg");
        break;
    }
    case 67906:
    {
        returnValue = F("Butterstiege");
        break;
    }
    case 67907:
    {
        returnValue = F("Butterstr.");
        break;
    }
    case 67908:
    {
        returnValue = F("Butterteichstr.");
        break;
    }
    case 67909:
    {
        returnValue = F("Buttertwiete");
        break;
    }
    case 67910:
    {
        returnValue = F("Butterweg");
        break;
    }
    case 67911:
    {
        returnValue = F("Butterwegle");
        break;
    }
    case 67912:
    {
        returnValue = F("Butterwiese");
        break;
    }
    case 67913:
    {
        returnValue = F("Buttfeldstr.");
        break;
    }
    case 67914:
    {
        returnValue = F("Buttforder Riege");
        break;
    }
    case 67915:
    {
        returnValue = F("Buttforder Str.");
        break;
    }
    case 67916:
    {
        returnValue = F("Buttlarer Str.");
        break;
    }
    case 67917:
    {
        returnValue = F("Buttlarer Weg");
        break;
    }
    case 67918:
    {
        returnValue = F("Buttlarstr.");
        break;
    }
    case 67919:
    {
        returnValue = F("Buttlerhügel");
        break;
    }
    case 67920:
    {
        returnValue = F("Buttlerweg");
        break;
    }
    case 67921:
    {
        returnValue = F("Buttpedderweg");
        break;
    }
    case 67922:
    {
        returnValue = F("Buttring");
        break;
    }
    case 67923:
    {
        returnValue = F("Buttstegge");
        break;
    }
    case 67924:
    {
        returnValue = F("Buttstettstr.");
        break;
    }
    case 67925:
    {
        returnValue = F("Buttstr.");
        break;
    }
    case 67926:
    {
        returnValue = F("Buttstädter Gasse");
        break;
    }
    case 67927:
    {
        returnValue = F("Buttstädter Str.");
        break;
    }
    case 67928:
    {
        returnValue = F("Buttweg");
        break;
    }
    case 67929:
    {
        returnValue = F("Butz");
        break;
    }
    case 67930:
    {
        returnValue = F("Butzach");
        break;
    }
    case 67931:
    {
        returnValue = F("Butzbach");
        break;
    }
    case 67932:
    {
        returnValue = F("Butzbacher Pfad");
        break;
    }
    case 67933:
    {
        returnValue = F("Butzbacher Platz");
        break;
    }
    case 67934:
    {
        returnValue = F("Butzbacher Str.");
        break;
    }
    case 67935:
    {
        returnValue = F("Butzbacher Weg");
        break;
    }
    case 67936:
    {
        returnValue = F("Butzbachstr.");
        break;
    }
    case 67937:
    {
        returnValue = F("Butzberg");
        break;
    }
    case 67938:
    {
        returnValue = F("Butzdorfer Str.");
        break;
    }
    case 67939:
    {
        returnValue = F("Butze");
        break;
    }
    case 67940:
    {
        returnValue = F("Butzebach");
        break;
    }
    case 67941:
    {
        returnValue = F("Butzebarg");
        break;
    }
    case 67942:
    {
        returnValue = F("Butzegäßchen");
        break;
    }
    case 67943:
    {
        returnValue = F("Butzenbacher Weg");
        break;
    }
    case 67944:
    {
        returnValue = F("Butzenbachstr.");
        break;
    }
    case 67945:
    {
        returnValue = F("Butzenbadstr.");
        break;
    }
    case 67946:
    {
        returnValue = F("Butzenbarg");
        break;
    }
    case 67947:
    {
        returnValue = F("Butzendorfer Weg");
        break;
    }
    case 67948:
    {
        returnValue = F("Butzengasse");
        break;
    }
    case 67949:
    {
        returnValue = F("Butzengrabenweg");
        break;
    }
    case 67950:
    {
        returnValue = F("Butzengässle");
        break;
    }
    case 67951:
    {
        returnValue = F("Butzenlohweg");
        break;
    }
    case 67952:
    {
        returnValue = F("Butzensteigleweg");
        break;
    }
    case 67953:
    {
        returnValue = F("Butzenstr.");
        break;
    }
    case 67954:
    {
        returnValue = F("Butzentalstr.");
        break;
    }
    case 67955:
    {
        returnValue = F("Butzenweg");
        break;
    }
    case 67956:
    {
        returnValue = F("Butzenwinkel");
        break;
    }
    case 67957:
    {
        returnValue = F("Butzfeldweg");
        break;
    }
    case 67958:
    {
        returnValue = F("Butzhagen");
        break;
    }
    case 67959:
    {
        returnValue = F("Butzhauser Hellmer");
        break;
    }
    case 67960:
    {
        returnValue = F("Butzhorn");
        break;
    }
    case 67961:
    {
        returnValue = F("Butzkopp");
        break;
    }
    case 67962:
    {
        returnValue = F("Butznickelstr.");
        break;
    }
    case 67963:
    {
        returnValue = F("Butznickelweg");
        break;
    }
    case 67964:
    {
        returnValue = F("Butzower Dorfstr.");
        break;
    }
    case 67965:
    {
        returnValue = F("Butzower Str.");
        break;
    }
    case 67966:
    {
        returnValue = F("Butzower Weg");
        break;
    }
    case 67967:
    {
        returnValue = F("Butzweilerstr.");
        break;
    }
    case 67968:
    {
        returnValue = F("Buurdiek");
        break;
    }
    case 67969:
    {
        returnValue = F("Buurenwaldweg");
        break;
    }
    case 67970:
    {
        returnValue = F("Buurn Twieten");
        break;
    }
    case 67971:
    {
        returnValue = F("Buurnhusweg");
        break;
    }
    case 67972:
    {
        returnValue = F("Buurnlandstraat");
        break;
    }
    case 67973:
    {
        returnValue = F("Buurnstraat");
        break;
    }
    case 67974:
    {
        returnValue = F("Buurnstrat");
        break;
    }
    case 67975:
    {
        returnValue = F("Buurnweg");
        break;
    }
    case 67976:
    {
        returnValue = F("Buurredder");
        break;
    }
    case 67977:
    {
        returnValue = F("Buurser Str.");
        break;
    }
    case 67978:
    {
        returnValue = F("Buursod");
        break;
    }
    case 67979:
    {
        returnValue = F("Buurstell");
        break;
    }
    case 67980:
    {
        returnValue = F("Buurstruckweg");
        break;
    }
    case 67981:
    {
        returnValue = F("Buurvagt");
        break;
    }
    case 67982:
    {
        returnValue = F("Buurvogtsweg");
        break;
    }
    case 67983:
    {
        returnValue = F("Buurweg");
        break;
    }
    case 67984:
    {
        returnValue = F("Buurwegslohne");
        break;
    }
    case 67985:
    {
        returnValue = F("Buutendörp");
        break;
    }
    case 67986:
    {
        returnValue = F("Buwaldweg");
        break;
    }
    case 67987:
    {
        returnValue = F("Buweg");
        break;
    }
    case 67988:
    {
        returnValue = F("Buweilerstr.");
        break;
    }
    case 67989:
    {
        returnValue = F("Buwiesen");
        break;
    }
    case 67990:
    {
        returnValue = F("Buwinghausenstr.");
        break;
    }
    case 67991:
    {
        returnValue = F("Buxacher Str.");
        break;
    }
    case 67992:
    {
        returnValue = F("Buxbarger Weg");
        break;
    }
    case 67993:
    {
        returnValue = F("Buxenbergstr.");
        break;
    }
    case 67994:
    {
        returnValue = F("Buxhauweg");
        break;
    }
    case 67995:
    {
        returnValue = F("Buxheimer Str.");
        break;
    }
    case 67996:
    {
        returnValue = F("Buxheimer Weg");
        break;
    }
    case 67997:
    {
        returnValue = F("Buxhoevedenweg");
        break;
    }
    case 67998:
    {
        returnValue = F("Buxhorner Weg");
        break;
    }
    case 67999:
    {
        returnValue = F("Buxtehuder Str.");
        break;
    }
    case 68000:
    {
        returnValue = F("Buxtehudestr.");
        break;
    }
    case 68001:
    {
        returnValue = F("Buxton-Platz");
        break;
    }
    case 68002:
    {
        returnValue = F("Buxtrup");
        break;
    }
    case 68003:
    {
        returnValue = F("Buxweg");
        break;
    }
    case 68004:
    {
        returnValue = F("Buykerweg");
        break;
    }
    case 68005:
    {
        returnValue = F("Buyschstr.");
        break;
    }
    case 68006:
    {
        returnValue = F("Buyxdyck");
        break;
    }
    case 68007:
    {
        returnValue = F("Buz");
        break;
    }
    case 68008:
    {
        returnValue = F("Buzallee");
        break;
    }
    case 68009:
    {
        returnValue = F("Buß");
        break;
    }
    case 68010:
    {
        returnValue = F("Bußbergweg");
        break;
    }
    case 68011:
    {
        returnValue = F("Bußbrunn");
        break;
    }
    case 68012:
    {
        returnValue = F("Bußdorfer Str.");
        break;
    }
    case 68013:
    {
        returnValue = F("Bußdorfer Tor");
        break;
    }
    case 68014:
    {
        returnValue = F("Bußgasse");
        break;
    }
    case 68015:
    {
        returnValue = F("Bußhof");
        break;
    }
    case 68016:
    {
        returnValue = F("Bußkopfrundweg");
        break;
    }
    case 68017:
    {
        returnValue = F("Bußmanns Hof");
        break;
    }
    case 68018:
    {
        returnValue = F("Bußmanns Weg");
        break;
    }
    case 68019:
    {
        returnValue = F("Bußmannshauser Str.");
        break;
    }
    case 68020:
    {
        returnValue = F("Bußstr.");
        break;
    }
    case 68021:
    {
        returnValue = F("Bußvitz");
        break;
    }
    case 68022:
    {
        returnValue = F("Bußwaldweg");
        break;
    }
    case 68023:
    {
        returnValue = F("Byfangsweg");
        break;
    }
    case 68024:
    {
        returnValue = F("Byfangweg");
        break;
    }
    case 68025:
    {
        returnValue = F("Byhusener Damm");
        break;
    }
    case 68026:
    {
        returnValue = F("Byhusener Str.");
        break;
    }
    case 68027:
    {
        returnValue = F("Byhusener Weg");
        break;
    }
    case 68028:
    {
        returnValue = F("Byinkstr.");
        break;
    }
    case 68029:
    {
        returnValue = F("Byn Deependahl");
        break;
    }
    case 68030:
    {
        returnValue = F("Bystedtredder");
        break;
    }
    case 68031:
    {
        returnValue = F("Bystřicer Platz");
        break;
    }
    case 68032:
    {
        returnValue = F("Bytoft");
        break;
    }
    case 68033:
    {
        returnValue = F("Bytstelle");
        break;
    }
    case 68034:
    {
        returnValue = F("Bácsalmás-Anlage");
        break;
    }
    case 68035:
    {
        returnValue = F("Bácsalmás-Brücke");
        break;
    }
    case 68036:
    {
        returnValue = F("Bäbberla");
        break;
    }
    case 68037:
    {
        returnValue = F("Bäbelitz");
        break;
    }
    case 68038:
    {
        returnValue = F("Bäbelitzer Weg");
        break;
    }
    case 68039:
    {
        returnValue = F("Bächbergweg");
        break;
    }
    case 68040:
    {
        returnValue = F("Bächelhurst");
        break;
    }
    case 68041:
    {
        returnValue = F("Bächelsberg");
        break;
    }
    case 68042:
    {
        returnValue = F("Bächelsgasse");
        break;
    }
    case 68043:
    {
        returnValue = F("Bächelstr.");
        break;
    }
    case 68044:
    {
        returnValue = F("Bächelweg");
        break;
    }
    case 68045:
    {
        returnValue = F("Bächenstr.");
        break;
    }
    case 68046:
    {
        returnValue = F("Bächental");
        break;
    }
    case 68047:
    {
        returnValue = F("Bächergrund");
        break;
    }
    case 68048:
    {
        returnValue = F("Bächerlinsweg");
        break;
    }
    case 68049:
    {
        returnValue = F("Bächeweg");
        break;
    }
    case 68050:
    {
        returnValue = F("Bächhälde Reitweg");
        break;
    }
    case 68051:
    {
        returnValue = F("Bächinger Feld");
        break;
    }
    case 68052:
    {
        returnValue = F("Bächinger Str.");
        break;
    }
    case 68053:
    {
        returnValue = F("Bächl");
        break;
    }
    case 68054:
    {
        returnValue = F("Bächle");
        break;
    }
    case 68055:
    {
        returnValue = F("Bächlehofweg");
        break;
    }
    case 68056:
    {
        returnValue = F("Bächleinsweg");
        break;
    }
    case 68057:
    {
        returnValue = F("Bächlenweg");
        break;
    }
    case 68058:
    {
        returnValue = F("Bächlestr.");
        break;
    }
    case 68059:
    {
        returnValue = F("Bächlesweg");
        break;
    }
    case 68060:
    {
        returnValue = F("Bächlewaldweg");
        break;
    }
    case 68061:
    {
        returnValue = F("Bächleweg");
        break;
    }
    case 68062:
    {
        returnValue = F("Bächlinger Str.");
        break;
    }
    case 68063:
    {
        returnValue = F("Bächlinweg");
        break;
    }
    case 68064:
    {
        returnValue = F("Bächterhof");
        break;
    }
    case 68065:
    {
        returnValue = F("Bächweg");
        break;
    }
    case 68066:
    {
        returnValue = F("Bäckberg");
        break;
    }
    case 68067:
    {
        returnValue = F("Bäckenberg");
        break;
    }
    case 68068:
    {
        returnValue = F("Bäckengasse");
        break;
    }
    case 68069:
    {
        returnValue = F("Bäckenluke");
        break;
    }
    case 68070:
    {
        returnValue = F("Bäckensteig");
        break;
    }
    case 68071:
    {
        returnValue = F("Bäckenweg");
        break;
    }
    case 68072:
    {
        returnValue = F("Bäckenäcker");
        break;
    }
    case 68073:
    {
        returnValue = F("Bäckenäckerstr.");
        break;
    }
    case 68074:
    {
        returnValue = F("Bäcker Michels Weg");
        break;
    }
    case 68075:
    {
        returnValue = F("Bäcker-Busch-Weg");
        break;
    }
    case 68076:
    {
        returnValue = F("Bäcker-Gang");
        break;
    }
    case 68077:
    {
        returnValue = F("Bäcker-Weiher-Weg");
        break;
    }
    case 68078:
    {
        returnValue = F("Bäckeralm");
        break;
    }
    case 68079:
    {
        returnValue = F("Bäckeranger");
        break;
    }
    case 68080:
    {
        returnValue = F("Bäckerbarg");
        break;
    }
    case 68081:
    {
        returnValue = F("Bäckerbauerstr.");
        break;
    }
    case 68082:
    {
        returnValue = F("Bäckerberg");
        break;
    }
    case 68083:
    {
        returnValue = F("Bäckerbergstr.");
        break;
    }
    case 68084:
    {
        returnValue = F("Bäckerbrink");
        break;
    }
    case 68085:
    {
        returnValue = F("Bäckerbräugasse");
        break;
    }
    case 68086:
    {
        returnValue = F("Bäckerbrücke");
        break;
    }
    case 68087:
    {
        returnValue = F("Bäckerbuckl");
        break;
    }
    case 68088:
    {
        returnValue = F("Bäckerbusch");
        break;
    }
    case 68089:
    {
        returnValue = F("Bäckerecke");
        break;
    }
    case 68090:
    {
        returnValue = F("Bäckereigasse");
        break;
    }
    case 68091:
    {
        returnValue = F("Bäckereisteig");
        break;
    }
    case 68092:
    {
        returnValue = F("Bäckereistr.");
        break;
    }
    case 68093:
    {
        returnValue = F("Bäckereiweg");
        break;
    }
    case 68094:
    {
        returnValue = F("Bäckerfeld");
        break;
    }
    case 68095:
    {
        returnValue = F("Bäckerfeldstr.");
        break;
    }
    case 68096:
    {
        returnValue = F("Bäckerfeldweg");
        break;
    }
    case 68097:
    {
        returnValue = F("Bäckergang");
        break;
    }
    case 68098:
    {
        returnValue = F("Bäckergarten");
        break;
    }
    case 68099:
    {
        returnValue = F("Bäckergasse");
        break;
    }
    case 68100:
    {
        returnValue = F("Bäckergründlein");
        break;
    }
    case 68101:
    {
        returnValue = F("Bäckergässchen");
        break;
    }
    case 68102:
    {
        returnValue = F("Bäckergässel");
        break;
    }
    case 68103:
    {
        returnValue = F("Bäckergässele");
        break;
    }
    case 68104:
    {
        returnValue = F("Bäckergässle");
        break;
    }
    case 68105:
    {
        returnValue = F("Bäckergäßchen");
        break;
    }
    case 68106:
    {
        returnValue = F("Bäckergäßle");
        break;
    }
    case 68107:
    {
        returnValue = F("Bäckerhof");
        break;
    }
    case 68108:
    {
        returnValue = F("Bäckerhügel");
        break;
    }
    case 68109:
    {
        returnValue = F("Bäckerhügelweg");
        break;
    }
    case 68110:
    {
        returnValue = F("Bäckerkamp");
        break;
    }
    case 68111:
    {
        returnValue = F("Bäckerkamp A");
        break;
    }
    case 68112:
    {
        returnValue = F("Bäckerklint");
        break;
    }
    case 68113:
    {
        returnValue = F("Bäckerkoppel");
        break;
    }
    case 68114:
    {
        returnValue = F("Bäckerleite");
        break;
    }
    case 68115:
    {
        returnValue = F("Bäckerleiten");
        break;
    }
    case 68116:
    {
        returnValue = F("Bäckerlohne");
        break;
    }
    case 68117:
    {
        returnValue = F("Bäckermaidleweg");
        break;
    }
    case 68118:
    {
        returnValue = F("Bäckermichelsweg");
        break;
    }
    case 68119:
    {
        returnValue = F("Bäckermädelsweg");
        break;
    }
    case 68120:
    {
        returnValue = F("Bäckermühle");
        break;
    }
    case 68121:
    {
        returnValue = F("Bäckernandlgasse");
        break;
    }
    case 68122:
    {
        returnValue = F("Bäckerpfad");
        break;
    }
    case 68123:
    {
        returnValue = F("Bäckerpfader Weg");
        break;
    }
    case 68124:
    {
        returnValue = F("Bäckerplan");
        break;
    }
    case 68125:
    {
        returnValue = F("Bäckerplatz");
        break;
    }
    case 68126:
    {
        returnValue = F("Bäckerredder");
        break;
    }
    case 68127:
    {
        returnValue = F("Bäckerreuth");
        break;
    }
    case 68128:
    {
        returnValue = F("Bäckerreuthweg");
        break;
    }
    case 68129:
    {
        returnValue = F("Bäckerried");
        break;
    }
    case 68130:
    {
        returnValue = F("Bäckerriege");
        break;
    }
    case 68131:
    {
        returnValue = F("Bäckers Gäßchen");
        break;
    }
    case 68132:
    {
        returnValue = F("Bäckers Wiesen");
        break;
    }
    case 68133:
    {
        returnValue = F("Bäckersche Hofstr.");
        break;
    }
    case 68134:
    {
        returnValue = F("Bäckerschlag");
        break;
    }
    case 68135:
    {
        returnValue = F("Bäckerseck");
        break;
    }
    case 68136:
    {
        returnValue = F("Bäckersfleck");
        break;
    }
    case 68137:
    {
        returnValue = F("Bäckersgartenweg");
        break;
    }
    case 68138:
    {
        returnValue = F("Bäckersgasse");
        break;
    }
    case 68139:
    {
        returnValue = F("Bäckershof");
        break;
    }
    case 68140:
    {
        returnValue = F("Bäckerspfad");
        break;
    }
    case 68141:
    {
        returnValue = F("Bäckerspätsche");
        break;
    }
    case 68142:
    {
        returnValue = F("Bäckerssiepen");
        break;
    }
    case 68143:
    {
        returnValue = F("Bäckersteg");
        break;
    }
    case 68144:
    {
        returnValue = F("Bäckerstege");
        break;
    }
    case 68145:
    {
        returnValue = F("Bäckersteig");
        break;
    }
    case 68146:
    {
        returnValue = F("Bäckerstieg");
        break;
    }
    case 68147:
    {
        returnValue = F("Bäckerstiege");
        break;
    }
    case 68148:
    {
        returnValue = F("Bäckerstr.");
        break;
    }
    case 68149:
    {
        returnValue = F("Bäckerstraat");
        break;
    }
    case 68150:
    {
        returnValue = F("Bäckerstroot");
        break;
    }
    case 68151:
    {
        returnValue = F("Bäckertorstr.");
        break;
    }
    case 68152:
    {
        returnValue = F("Bäckertrift");
        break;
    }
    case 68153:
    {
        returnValue = F("Bäckertwete");
        break;
    }
    case 68154:
    {
        returnValue = F("Bäckertwied");
        break;
    }
    case 68155:
    {
        returnValue = F("Bäckertwiete");
        break;
    }
    case 68156:
    {
        returnValue = F("Bäckerwall");
        break;
    }
    case 68157:
    {
        returnValue = F("Bäckerweg");
        break;
    }
    case 68158:
    {
        returnValue = F("Bäckerwegle");
        break;
    }
    case 68159:
    {
        returnValue = F("Bäckerwiese");
        break;
    }
    case 68160:
    {
        returnValue = F("Bäckerwinkel");
        break;
    }
    case 68161:
    {
        returnValue = F("Bäckeräcker");
        break;
    }
    case 68162:
    {
        returnValue = F("Bäckgasse");
        break;
    }
    case 68163:
    {
        returnValue = F("Bäckkamp");
        break;
    }
    case 68164:
    {
        returnValue = F("Bäckleinsbuck");
        break;
    }
    case 68165:
    {
        returnValue = F("Bäcksgasse");
        break;
    }
    case 68166:
    {
        returnValue = F("Bäckstr.");
        break;
    }
    case 68167:
    {
        returnValue = F("Bädekerstr.");
        break;
    }
    case 68168:
    {
        returnValue = F("Bäderborn");
        break;
    }
    case 68169:
    {
        returnValue = F("Bädergasse");
        break;
    }
    case 68170:
    {
        returnValue = F("Bädergäßchen");
        break;
    }
    case 68171:
    {
        returnValue = F("Bädergäßle");
        break;
    }
    case 68172:
    {
        returnValue = F("Bäderhalde");
        break;
    }
    case 68173:
    {
        returnValue = F("Bäderpark Leimen");
        break;
    }
    case 68174:
    {
        returnValue = F("Bäderrandstr.");
        break;
    }
    case 68175:
    {
        returnValue = F("Bäderstr.");
        break;
    }
    case 68176:
    {
        returnValue = F("Bädersweg");
        break;
    }
    case 68177:
    {
        returnValue = F("Bädertörle");
        break;
    }
    case 68178:
    {
        returnValue = F("Bäderweg");
        break;
    }
    case 68179:
    {
        returnValue = F("Bäderwiesen");
        break;
    }
    case 68180:
    {
        returnValue = F("Bädleweg");
        break;
    }
    case 68181:
    {
        returnValue = F("Bädlingshof");
        break;
    }
    case 68182:
    {
        returnValue = F("Bäggerie");
        break;
    }
    case 68183:
    {
        returnValue = F("Bähbrookweg");
        break;
    }
    case 68184:
    {
        returnValue = F("Bählacker");
        break;
    }
    case 68185:
    {
        returnValue = F("Bählammweg");
        break;
    }
    case 68186:
    {
        returnValue = F("Bähnchen");
        break;
    }
    case 68187:
    {
        returnValue = F("Bähnle-Radweg");
        break;
    }
    case 68188:
    {
        returnValue = F("Bährenfeld");
        break;
    }
    case 68189:
    {
        returnValue = F("Bährenhof");
        break;
    }
    case 68190:
    {
        returnValue = F("Bährensstr.");
        break;
    }
    case 68191:
    {
        returnValue = F("Bähringhausen");
        break;
    }
    case 68192:
    {
        returnValue = F("Bähringstr.");
        break;
    }
    case 68193:
    {
        returnValue = F("Bährkampstr.");
        break;
    }
    case 68194:
    {
        returnValue = F("Bährstr.");
        break;
    }
    case 68195:
    {
        returnValue = F("Bäingser Weg");
        break;
    }
    case 68196:
    {
        returnValue = F("Bäkebrink");
        break;
    }
    case 68197:
    {
        returnValue = F("Bäkedamm");
        break;
    }
    case 68198:
    {
        returnValue = F("Bäkegrund");
        break;
    }
    case 68199:
    {
        returnValue = F("Bäkekamp");
        break;
    }
    case 68200:
    {
        returnValue = F("Bäkenkamp");
        break;
    }
    case 68201:
    {
        returnValue = F("Bäkenweg");
        break;
    }
    case 68202:
    {
        returnValue = F("Bäkepromenade");
        break;
    }
    case 68203:
    {
        returnValue = F("Bäker Str.");
        break;
    }
    case 68204:
    {
        returnValue = F("Bäker Weg");
        break;
    }
    case 68205:
    {
        returnValue = F("Bäkerweg");
        break;
    }
    case 68206:
    {
        returnValue = F("Bäkestr.");
        break;
    }
    case 68207:
    {
        returnValue = F("Bäketal");
        break;
    }
    case 68208:
    {
        returnValue = F("Bäkeweg");
        break;
    }
    case 68209:
    {
        returnValue = F("Bäkmüssen");
        break;
    }
    case 68210:
    {
        returnValue = F("Bäkweg");
        break;
    }
    case 68211:
    {
        returnValue = F("Bälauer Weg");
        break;
    }
    case 68212:
    {
        returnValue = F("Bälgenstr.");
        break;
    }
    case 68213:
    {
        returnValue = F("Bälower Dorfstr.");
        break;
    }
    case 68214:
    {
        returnValue = F("Bändelstockweg");
        break;
    }
    case 68215:
    {
        returnValue = F("Bändelwiesäcker");
        break;
    }
    case 68216:
    {
        returnValue = F("Bänderweg");
        break;
    }
    case 68217:
    {
        returnValue = F("Bändeweg");
        break;
    }
    case 68218:
    {
        returnValue = F("Bändleweg");
        break;
    }
    case 68219:
    {
        returnValue = F("Bängertchen");
        break;
    }
    case 68220:
    {
        returnValue = F("Bänglesäcker");
        break;
    }
    case 68221:
    {
        returnValue = F("Bänhausener Str.");
        break;
    }
    case 68222:
    {
        returnValue = F("Bänkegäßchen");
        break;
    }
    case 68223:
    {
        returnValue = F("Bänkelackerweg");
        break;
    }
    case 68224:
    {
        returnValue = F("Bänkeleweg");
        break;
    }
    case 68225:
    {
        returnValue = F("Bänkelsängerweg");
        break;
    }
    case 68226:
    {
        returnValue = F("Bänkelweg");
        break;
    }
    case 68227:
    {
        returnValue = F("Bänklerweg");
        break;
    }
    case 68228:
    {
        returnValue = F("Bänklesweg");
        break;
    }
    case 68229:
    {
        returnValue = F("Bänkleweg");
        break;
    }
    case 68230:
    {
        returnValue = F("Bänkskenweg");
        break;
    }
    case 68231:
    {
        returnValue = F("Bänkstegge");
        break;
    }
    case 68232:
    {
        returnValue = F("Bänningerstr.");
        break;
    }
    case 68233:
    {
        returnValue = F("Bännjerstr.");
        break;
    }
    case 68234:
    {
        returnValue = F("Bäntorfer Str.");
        break;
    }
    case 68235:
    {
        returnValue = F("Bäntorfer Weg");
        break;
    }
    case 68236:
    {
        returnValue = F("Bärastr.");
        break;
    }
    case 68237:
    {
        returnValue = F("Bärbacher Str.");
        break;
    }
    case 68238:
    {
        returnValue = F("Bärbachweg");
        break;
    }
    case 68239:
    {
        returnValue = F("Bärbel-Six-Platz");
        break;
    }
    case 68240:
    {
        returnValue = F("Bärbel-Wachholz-Weg");
        break;
    }
    case 68241:
    {
        returnValue = F("Bärbelesweg");
        break;
    }
    case 68242:
    {
        returnValue = F("Bärbelhauweg");
        break;
    }
    case 68243:
    {
        returnValue = F("Bärbels Garten");
        break;
    }
    case 68244:
    {
        returnValue = F("Bärbelsteinstr.");
        break;
    }
    case 68245:
    {
        returnValue = F("Bärbelweg");
        break;
    }
    case 68246:
    {
        returnValue = F("Bärbroich");
        break;
    }
    case 68247:
    {
        returnValue = F("Bärbroicher Str.");
        break;
    }
    case 68248:
    {
        returnValue = F("Bären");
        break;
    }
    case 68249:
    {
        returnValue = F("Bärenacker");
        break;
    }
    case 68250:
    {
        returnValue = F("Bärenackerweg");
        break;
    }
    case 68251:
    {
        returnValue = F("Bärenalpstr.");
        break;
    }
    case 68252:
    {
        returnValue = F("Bärenau");
        break;
    }
    case 68253:
    {
        returnValue = F("Bärenbach");
        break;
    }
    case 68254:
    {
        returnValue = F("Bärenbacher Str.");
        break;
    }
    case 68255:
    {
        returnValue = F("Bärenbachstr.");
        break;
    }
    case 68256:
    {
        returnValue = F("Bärenbachtal");
        break;
    }
    case 68257:
    {
        returnValue = F("Bärenbachtal-Weg");
        break;
    }
    case 68258:
    {
        returnValue = F("Bärenbachweg");
        break;
    }
    case 68259:
    {
        returnValue = F("Bärenbadstr.");
        break;
    }
    case 68260:
    {
        returnValue = F("Bärenberg");
        break;
    }
    case 68261:
    {
        returnValue = F("Bärenbergstr.");
        break;
    }
    case 68262:
    {
        returnValue = F("Bärenbergweg");
        break;
    }
    case 68263:
    {
        returnValue = F("Bärenbleek");
        break;
    }
    case 68264:
    {
        returnValue = F("Bärenbrink");
        break;
    }
    case 68265:
    {
        returnValue = F("Bärenbronn");
        break;
    }
    case 68266:
    {
        returnValue = F("Bärenbronner Weg");
        break;
    }
    case 68267:
    {
        returnValue = F("Bärenbruch");
        break;
    }
    case 68268:
    {
        returnValue = F("Bärenbruchweg");
        break;
    }
    case 68269:
    {
        returnValue = F("Bärenbrunn");
        break;
    }
    case 68270:
    {
        returnValue = F("Bärenbrunnenstr.");
        break;
    }
    case 68271:
    {
        returnValue = F("Bärenbrunnenweg");
        break;
    }
    case 68272:
    {
        returnValue = F("Bärenbrunner Str.");
        break;
    }
    case 68273:
    {
        returnValue = F("Bärenbrücke");
        break;
    }
    case 68274:
    {
        returnValue = F("Bärenbrücker Str.");
        break;
    }
    case 68275:
    {
        returnValue = F("Bärenbrünnleweg");
        break;
    }
    case 68276:
    {
        returnValue = F("Bärenburg");
        break;
    }
    case 68277:
    {
        returnValue = F("Bärenburger Str.");
        break;
    }
    case 68278:
    {
        returnValue = F("Bärenburger Weg");
        break;
    }
    case 68279:
    {
        returnValue = F("Bärenburgrundgang");
        break;
    }
    case 68280:
    {
        returnValue = F("Bärenburgstr.");
        break;
    }
    case 68281:
    {
        returnValue = F("Bärenburgweg");
        break;
    }
    case 68282:
    {
        returnValue = F("Bärenbusch");
        break;
    }
    case 68283:
    {
        returnValue = F("Bärenbühl");
        break;
    }
    case 68284:
    {
        returnValue = F("Bärenbühlgraben");
        break;
    }
    case 68285:
    {
        returnValue = F("Bärenbühlweg");
        break;
    }
    case 68286:
    {
        returnValue = F("Bärendahl");
        break;
    }
    case 68287:
    {
        returnValue = F("Bärendelle");
        break;
    }
    case 68288:
    {
        returnValue = F("Bärendellenweg");
        break;
    }
    case 68289:
    {
        returnValue = F("Bärendellstr.");
        break;
    }
    case 68290:
    {
        returnValue = F("Bärendickte");
        break;
    }
    case 68291:
    {
        returnValue = F("Bärendobelweg");
        break;
    }
    case 68292:
    {
        returnValue = F("Bärendorfer Str.");
        break;
    }
    case 68293:
    {
        returnValue = F("Bärendorfstr.");
        break;
    }
    case 68294:
    {
        returnValue = F("Bäreneck");
        break;
    }
    case 68295:
    {
        returnValue = F("Bärenecke");
        break;
    }
    case 68296:
    {
        returnValue = F("Bärenfang");
        break;
    }
    case 68297:
    {
        returnValue = F("Bärenfangsgrund");
        break;
    }
    case 68298:
    {
        returnValue = F("Bärenfangweg");
        break;
    }
    case 68299:
    {
        returnValue = F("Bärenfeld");
        break;
    }
    case 68300:
    {
        returnValue = F("Bärenfelder Str.");
        break;
    }
    case 68301:
    {
        returnValue = F("Bärenfeldstr.");
        break;
    }
    case 68302:
    {
        returnValue = F("Bärenfelsallee");
        break;
    }
    case 68303:
    {
        returnValue = F("Bärenfelser Str.");
        break;
    }
    case 68304:
    {
        returnValue = F("Bärenfelser Weg");
        break;
    }
    case 68305:
    {
        returnValue = F("Bärenfelsstr.");
        break;
    }
    case 68306:
    {
        returnValue = F("Bärenfelsweg");
        break;
    }
    case 68307:
    {
        returnValue = F("Bärengang");
        break;
    }
    case 68308:
    {
        returnValue = F("Bärengarten");
        break;
    }
    case 68309:
    {
        returnValue = F("Bärengartenweg");
        break;
    }
    case 68310:
    {
        returnValue = F("Bärengasse");
        break;
    }
    case 68311:
    {
        returnValue = F("Bärengraben");
        break;
    }
    case 68312:
    {
        returnValue = F("Bärengrabenweg");
        break;
    }
    case 68313:
    {
        returnValue = F("Bärengrund");
        break;
    }
    case 68314:
    {
        returnValue = F("Bärengrundweg");
        break;
    }
    case 68315:
    {
        returnValue = F("Bärengässle");
        break;
    }
    case 68316:
    {
        returnValue = F("Bärengäßchen");
        break;
    }
    case 68317:
    {
        returnValue = F("Bärenhalde");
        break;
    }
    case 68318:
    {
        returnValue = F("Bärenhaldenweg");
        break;
    }
    case 68319:
    {
        returnValue = F("Bärenhangweg");
        break;
    }
    case 68320:
    {
        returnValue = F("Bärenhardt");
        break;
    }
    case 68321:
    {
        returnValue = F("Bärenhast");
        break;
    }
    case 68322:
    {
        returnValue = F("Bärenheck");
        break;
    }
    case 68323:
    {
        returnValue = F("Bärenhecke");
        break;
    }
    case 68324:
    {
        returnValue = F("Bärenhecker Str.");
        break;
    }
    case 68325:
    {
        returnValue = F("Bärenhof");
        break;
    }
    case 68326:
    {
        returnValue = F("Bärenhofpassage");
        break;
    }
    case 68327:
    {
        returnValue = F("Bärenhofstr.");
        break;
    }
    case 68328:
    {
        returnValue = F("Bärenhofweg");
        break;
    }
    case 68329:
    {
        returnValue = F("Bärenhohlweg");
        break;
    }
    case 68330:
    {
        returnValue = F("Bärenholzweg");
        break;
    }
    case 68331:
    {
        returnValue = F("Bärenhorststr.");
        break;
    }
    case 68332:
    {
        returnValue = F("Bärenhäuser Weg");
        break;
    }
    case 68333:
    {
        returnValue = F("Bärenhöhe");
        break;
    }
    case 68334:
    {
        returnValue = F("Bärenhöhle");
        break;
    }
    case 68335:
    {
        returnValue = F("Bärenhöhlental");
        break;
    }
    case 68336:
    {
        returnValue = F("Bärenhüttenweg");
        break;
    }
    case 68337:
    {
        returnValue = F("Bärenkamp");
        break;
    }
    case 68338:
    {
        returnValue = F("Bärenkampallee");
        break;
    }
    case 68339:
    {
        returnValue = F("Bärenkampstr.");
        break;
    }
    case 68340:
    {
        returnValue = F("Bärenkistenweg");
        break;
    }
    case 68341:
    {
        returnValue = F("Bärenklauer Str.");
        break;
    }
    case 68342:
    {
        returnValue = F("Bärenklauer Weg");
        break;
    }
    case 68343:
    {
        returnValue = F("Bärenklauser Str.");
        break;
    }
    case 68344:
    {
        returnValue = F("Bärenklaustr.");
        break;
    }
    case 68345:
    {
        returnValue = F("Bärenklinge");
        break;
    }
    case 68346:
    {
        returnValue = F("Bärenklingenweg");
        break;
    }
    case 68347:
    {
        returnValue = F("Bärenkopfstr.");
        break;
    }
    case 68348:
    {
        returnValue = F("Bärenkopfstreifen");
        break;
    }
    case 68349:
    {
        returnValue = F("Bärenkopfweg");
        break;
    }
    case 68350:
    {
        returnValue = F("Bärenkrog");
        break;
    }
    case 68351:
    {
        returnValue = F("Bärenkuhle");
        break;
    }
    case 68352:
    {
        returnValue = F("Bärenlau-Sträßchen");
        break;
    }
    case 68353:
    {
        returnValue = F("Bärenlauweg");
        break;
    }
    case 68354:
    {
        returnValue = F("Bärenleite");
        break;
    }
    case 68355:
    {
        returnValue = F("Bärenleitenweg");
        break;
    }
    case 68356:
    {
        returnValue = F("Bärenloch");
        break;
    }
    case 68357:
    {
        returnValue = F("Bärenlocherstr.");
        break;
    }
    case 68358:
    {
        returnValue = F("Bärenlochweg");
        break;
    }
    case 68359:
    {
        returnValue = F("Bärenloh");
        break;
    }
    case 68360:
    {
        returnValue = F("Bärenloh Siedlung");
        break;
    }
    case 68361:
    {
        returnValue = F("Bärenlohe");
        break;
    }
    case 68362:
    {
        returnValue = F("Bärenlohweg");
        break;
    }
    case 68363:
    {
        returnValue = F("Bärenmarsch");
        break;
    }
    case 68364:
    {
        returnValue = F("Bärenmiß");
        break;
    }
    case 68365:
    {
        returnValue = F("Bärenmühle");
        break;
    }
    case 68366:
    {
        returnValue = F("Bärenmühlweg");
        break;
    }
    case 68367:
    {
        returnValue = F("Bärenortschneise");
        break;
    }
    case 68368:
    {
        returnValue = F("Bärenpfad");
        break;
    }
    case 68369:
    {
        returnValue = F("Bärenplatz");
        break;
    }
    case 68370:
    {
        returnValue = F("Bärenquellenstr.");
        break;
    }
    case 68371:
    {
        returnValue = F("Bärenrangen");
        break;
    }
    case 68372:
    {
        returnValue = F("Bärenreiterweg");
        break;
    }
    case 68373:
    {
        returnValue = F("Bärenriegelweg");
        break;
    }
    case 68374:
    {
        returnValue = F("Bärenröder Str.");
        break;
    }
    case 68375:
    {
        returnValue = F("Bärenschanzstr.");
        break;
    }
    case 68376:
    {
        returnValue = F("Bärenschlag");
        break;
    }
    case 68377:
    {
        returnValue = F("Bärenschlucht");
        break;
    }
    case 68378:
    {
        returnValue = F("Bärenschneise");
        break;
    }
    case 68379:
    {
        returnValue = F("Bärenschwangweg");
        break;
    }
    case 68380:
    {
        returnValue = F("Bärenseeallee");
        break;
    }
    case 68381:
    {
        returnValue = F("Bärenseestr.");
        break;
    }
    case 68382:
    {
        returnValue = F("Bärenseeweg");
        break;
    }
    case 68383:
    {
        returnValue = F("Bärenshöfter Str.");
        break;
    }
    case 68384:
    {
        returnValue = F("Bärensprunger Str.");
        break;
    }
    case 68385:
    {
        returnValue = F("Bärensteg");
        break;
    }
    case 68386:
    {
        returnValue = F("Bärensteig");
        break;
    }
    case 68387:
    {
        returnValue = F("Bärensteige");
        break;
    }
    case 68388:
    {
        returnValue = F("Bärenstein");
        break;
    }
    case 68389:
    {
        returnValue = F("Bärensteiner Str.");
        break;
    }
    case 68390:
    {
        returnValue = F("Bärensteinstr.");
        break;
    }
    case 68391:
    {
        returnValue = F("Bärensteinweg");
        break;
    }
    case 68392:
    {
        returnValue = F("Bärenstieg");
        break;
    }
    case 68393:
    {
        returnValue = F("Bärenstiege");
        break;
    }
    case 68394:
    {
        returnValue = F("Bärenstr.");
        break;
    }
    case 68395:
    {
        returnValue = F("Bärenstrauchweg");
        break;
    }
    case 68396:
    {
        returnValue = F("Bärensträßle");
        break;
    }
    case 68397:
    {
        returnValue = F("Bärenstäffele");
        break;
    }
    case 68398:
    {
        returnValue = F("Bärensäcker");
        break;
    }
    case 68399:
    {
        returnValue = F("Bärensäureweg");
        break;
    }
    case 68400:
    {
        returnValue = F("Bärental");
        break;
    }
    case 68401:
    {
        returnValue = F("Bärentaler Steige");
        break;
    }
    case 68402:
    {
        returnValue = F("Bärentaler Weg");
        break;
    }
    case 68403:
    {
        returnValue = F("Bärentalsiedlung");
        break;
    }
    case 68404:
    {
        returnValue = F("Bärentalstr.");
        break;
    }
    case 68405:
    {
        returnValue = F("Bärentalsträßchen");
        break;
    }
    case 68406:
    {
        returnValue = F("Bärentalsweg");
        break;
    }
    case 68407:
    {
        returnValue = F("Bärentalweg");
        break;
    }
    case 68408:
    {
        returnValue = F("Bärenteich");
        break;
    }
    case 68409:
    {
        returnValue = F("Bärenteichweg");
        break;
    }
    case 68410:
    {
        returnValue = F("Bärenthaler Str.");
        break;
    }
    case 68411:
    {
        returnValue = F("Bärenthorener Weg");
        break;
    }
    case 68412:
    {
        returnValue = F("Bärentraubeweg");
        break;
    }
    case 68413:
    {
        returnValue = F("Bärentriebweg");
        break;
    }
    case 68414:
    {
        returnValue = F("Bärentörn");
        break;
    }
    case 68415:
    {
        returnValue = F("Bärenwalder Str.");
        break;
    }
    case 68416:
    {
        returnValue = F("Bärenweg");
        break;
    }
    case 68417:
    {
        returnValue = F("Bärenweiler");
        break;
    }
    case 68418:
    {
        returnValue = F("Bärenwies");
        break;
    }
    case 68419:
    {
        returnValue = F("Bärenwiese");
        break;
    }
    case 68420:
    {
        returnValue = F("Bärenwiesen");
        break;
    }
    case 68421:
    {
        returnValue = F("Bärenwiesenweg");
        break;
    }
    case 68422:
    {
        returnValue = F("Bärenwinkel");
        break;
    }
    case 68423:
    {
        returnValue = F("Bärenwinkelweg");
        break;
    }
    case 68424:
    {
        returnValue = F("Bärenwirts Waldweg");
        break;
    }
    case 68425:
    {
        returnValue = F("Bärenwirtsweg");
        break;
    }
    case 68426:
    {
        returnValue = F("Bärenzechenweg");
        break;
    }
    case 68427:
    {
        returnValue = F("Bärenzwinger");
        break;
    }
    case 68428:
    {
        returnValue = F("Bärenäcker");
        break;
    }
    case 68429:
    {
        returnValue = F("Bärenäckerle");
        break;
    }
    case 68430:
    {
        returnValue = F("Bäresteinstr.");
        break;
    }
    case 68431:
    {
        returnValue = F("Bärfangweg");
        break;
    }
    case 68432:
    {
        returnValue = F("Bärgartenweg");
        break;
    }
    case 68433:
    {
        returnValue = F("Bärgasse");
        break;
    }
    case 68434:
    {
        returnValue = F("Bärhaldenweg");
        break;
    }
    case 68435:
    {
        returnValue = F("Bärhaus");
        break;
    }
    case 68436:
    {
        returnValue = F("Bärheide");
        break;
    }
    case 68437:
    {
        returnValue = F("Bärhofweg");
        break;
    }
    case 68438:
    {
        returnValue = F("Bärholdgasse");
        break;
    }
    case 68439:
    {
        returnValue = F("Bärhorst");
        break;
    }
    case 68440:
    {
        returnValue = F("Bäringerstr.");
        break;
    }
    case 68441:
    {
        returnValue = F("Bärkenkamp");
        break;
    }
    case 68442:
    {
        returnValue = F("Bärkeweg");
        break;
    }
    case 68443:
    {
        returnValue = F("Bärlappsenke");
        break;
    }
    case 68444:
    {
        returnValue = F("Bärlappweg");
        break;
    }
    case 68445:
    {
        returnValue = F("Bärlas");
        break;
    }
    case 68446:
    {
        returnValue = F("Bärlauchallee");
        break;
    }
    case 68447:
    {
        returnValue = F("Bärlauchstr.");
        break;
    }
    case 68448:
    {
        returnValue = F("Bärlauchweg");
        break;
    }
    case 68449:
    {
        returnValue = F("Bärlay");
        break;
    }
    case 68450:
    {
        returnValue = F("Bärleichkopfweg");
        break;
    }
    case 68451:
    {
        returnValue = F("Bärleichweg");
        break;
    }
    case 68452:
    {
        returnValue = F("Bärleinsgraben");
        break;
    }
    case 68453:
    {
        returnValue = F("Bärleshof");
        break;
    }
    case 68454:
    {
        returnValue = F("Bärlochstr.");
        break;
    }
    case 68455:
    {
        returnValue = F("Bärlochtalstr.");
        break;
    }
    case 68456:
    {
        returnValue = F("Bärlochweg");
        break;
    }
    case 68457:
    {
        returnValue = F("Bärlohweg");
        break;
    }
    case 68458:
    {
        returnValue = F("Bärmattstr.");
        break;
    }
    case 68459:
    {
        returnValue = F("Bärmeyerplatz");
        break;
    }
    case 68460:
    {
        returnValue = F("Bärmisgasse");
        break;
    }
    case 68461:
    {
        returnValue = F("Bärmühlenweg");
        break;
    }
    case 68462:
    {
        returnValue = F("Bärnauer Str.");
        break;
    }
    case 68463:
    {
        returnValue = F("Bärndorf");
        break;
    }
    case 68464:
    {
        returnValue = F("Bärndorfer Str.");
        break;
    }
    case 68465:
    {
        returnValue = F("Bärner Str.");
        break;
    }
    case 68466:
    {
        returnValue = F("Bärnerauweg");
        break;
    }
    case 68467:
    {
        returnValue = F("Bärnfeldweg");
        break;
    }
    case 68468:
    {
        returnValue = F("Bärnfels-Am Spielplatz");
        break;
    }
    case 68469:
    {
        returnValue = F("Bärnfels-Burgstr.");
        break;
    }
    case 68470:
    {
        returnValue = F("Bärnfels-Dorfstr.");
        break;
    }
    case 68471:
    {
        returnValue = F("Bärnfels-Hauptstr.");
        break;
    }
    case 68472:
    {
        returnValue = F("Bärnfels-Huth");
        break;
    }
    case 68473:
    {
        returnValue = F("Bärnfels-Pottensteiner Weg");
        break;
    }
    case 68474:
    {
        returnValue = F("Bärnfels-Schulberg");
        break;
    }
    case 68475:
    {
        returnValue = F("Bärnfels-Schäfhof");
        break;
    }
    case 68476:
    {
        returnValue = F("Bärnfels-Thonberg");
        break;
    }
    case 68477:
    {
        returnValue = F("Bärnfels-Untere Huth");
        break;
    }
    case 68478:
    {
        returnValue = F("Bärngasse");
        break;
    }
    case 68479:
    {
        returnValue = F("Bärngschwendt");
        break;
    }
    case 68480:
    {
        returnValue = F("Bärnhausener Str.");
        break;
    }
    case 68481:
    {
        returnValue = F("Bärnhof");
        break;
    }
    case 68482:
    {
        returnValue = F("Bärnhöher Str.");
        break;
    }
    case 68483:
    {
        returnValue = F("Bärnhöheweg");
        break;
    }
    case 68484:
    {
        returnValue = F("Bärnreuther Weg");
        break;
    }
    case 68485:
    {
        returnValue = F("Bärnsdorfer Hauptstr.");
        break;
    }
    case 68486:
    {
        returnValue = F("Bärnsdorfer Str.");
        break;
    }
    case 68487:
    {
        returnValue = F("Bärnwinkel");
        break;
    }
    case 68488:
    {
        returnValue = F("Bärnwinkler Str.");
        break;
    }
    case 68489:
    {
        returnValue = F("Bärnzell");
        break;
    }
    case 68490:
    {
        returnValue = F("Bärnzeller Str.");
        break;
    }
    case 68491:
    {
        returnValue = F("Bärplatz");
        break;
    }
    case 68492:
    {
        returnValue = F("Bärringer Str.");
        break;
    }
    case 68493:
    {
        returnValue = F("Bärs Grund");
        break;
    }
    case 68494:
    {
        returnValue = F("Bärs-Heideweg");
        break;
    }
    case 68495:
    {
        returnValue = F("Bärsauweg");
        break;
    }
    case 68496:
    {
        returnValue = F("Bärsbacher Str.");
        break;
    }
    case 68497:
    {
        returnValue = F("Bärsbacher Weg");
        break;
    }
    case 68498:
    {
        returnValue = F("Bärschenke");
        break;
    }
    case 68499:
    {
        returnValue = F("Bärschstr.");
        break;
    }
    case 68500:
    {
        returnValue = F("Bärsgründelweg");
        break;
    }
    case 68501:
    {
        returnValue = F("Bärskammweg");
        break;
    }
    case 68502:
    {
        returnValue = F("Bärslohe");
        break;
    }
    case 68503:
    {
        returnValue = F("Bärstadter Str.");
        break;
    }
    case 68504:
    {
        returnValue = F("Bärsteig");
        break;
    }
    case 68505:
    {
        returnValue = F("Bärstr.");
        break;
    }
    case 68506:
    {
        returnValue = F("Bärstämmweg");
        break;
    }
    case 68507:
    {
        returnValue = F("Bärtannweg");
        break;
    }
    case 68508:
    {
        returnValue = F("Bärtelweg");
        break;
    }
    case 68509:
    {
        returnValue = F("Bärtleinsweg");
        break;
    }
    case 68510:
    {
        returnValue = F("Bärtlestr.");
        break;
    }
    case 68511:
    {
        returnValue = F("Bärwalder Str.");
        break;
    }
    case 68512:
    {
        returnValue = F("Bärwalder Weg");
        break;
    }
    case 68513:
    {
        returnValue = F("Bärwaldestr.");
        break;
    }
    case 68514:
    {
        returnValue = F("Bärwaldweg");
        break;
    }
    case 68515:
    {
        returnValue = F("Bärweg");
        break;
    }
    case 68516:
    {
        returnValue = F("Bärweiler Str.");
        break;
    }
    case 68517:
    {
        returnValue = F("Bärwiese");
        break;
    }
    case 68518:
    {
        returnValue = F("Bärwiesenstr.");
        break;
    }
    case 68519:
    {
        returnValue = F("Bärwiesenweg");
        break;
    }
    case 68520:
    {
        returnValue = F("Bärwingweg");
        break;
    }
    case 68521:
    {
        returnValue = F("Bärwinkel");
        break;
    }
    case 68522:
    {
        returnValue = F("Bärwinkelstr.");
        break;
    }
    case 68523:
    {
        returnValue = F("Bärwurzweg");
        break;
    }
    case 68524:
    {
        returnValue = F("Bäscher Str.");
        break;
    }
    case 68525:
    {
        returnValue = F("Bässler Brücke");
        break;
    }
    case 68526:
    {
        returnValue = F("Bästenhardtstr.");
        break;
    }
    case 68527:
    {
        returnValue = F("Bästin-Kuns-Weg");
        break;
    }
    case 68528:
    {
        returnValue = F("Bästleinstr.");
        break;
    }
    case 68529:
    {
        returnValue = F("Bäteweg");
        break;
    }
    case 68530:
    {
        returnValue = F("Bätholter Str.");
        break;
    }
    case 68531:
    {
        returnValue = F("Bätsbruchweg");
        break;
    }
    case 68532:
    {
        returnValue = F("Bätswiesenweg");
        break;
    }
    case 68533:
    {
        returnValue = F("Bätzenecke");
        break;
    }
    case 68534:
    {
        returnValue = F("Bätzenmännlein");
        break;
    }
    case 68535:
    {
        returnValue = F("Bätznerstr.");
        break;
    }
    case 68536:
    {
        returnValue = F("Bäudner Barg");
        break;
    }
    case 68537:
    {
        returnValue = F("Bäuerinweg");
        break;
    }
    case 68538:
    {
        returnValue = F("Bäuerlbachstr.");
        break;
    }
    case 68539:
    {
        returnValue = F("Bäuerleweg");
        break;
    }
    case 68540:
    {
        returnValue = F("Bäuerlinger Weg");
        break;
    }
    case 68541:
    {
        returnValue = F("Bäuerlinsgäßlein");
        break;
    }
    case 68542:
    {
        returnValue = F("Bäuerlinshalde");
        break;
    }
    case 68543:
    {
        returnValue = F("Bäuersche Str.");
        break;
    }
    case 68544:
    {
        returnValue = F("Bäuerterwaldweg");
        break;
    }
    case 68545:
    {
        returnValue = F("Bäukenweg");
        break;
    }
    case 68546:
    {
        returnValue = F("Bäukerweg");
        break;
    }
    case 68547:
    {
        returnValue = F("Bäumbachallee");
        break;
    }
    case 68548:
    {
        returnValue = F("Bäumbachring");
        break;
    }
    case 68549:
    {
        returnValue = F("Bäumchen");
        break;
    }
    case 68550:
    {
        returnValue = F("Bäumchenpark Hinterrod");
        break;
    }
    case 68551:
    {
        returnValue = F("Bäumchenpark Waffenrod");
        break;
    }
    case 68552:
    {
        returnValue = F("Bäumchenstr.");
        break;
    }
    case 68553:
    {
        returnValue = F("Bäumchensweg");
        break;
    }
    case 68554:
    {
        returnValue = F("Bäumchesweg");
        break;
    }
    case 68555:
    {
        returnValue = F("Bäumdestr.");
        break;
    }
    case 68556:
    {
        returnValue = F("Bäumelgewann");
        break;
    }
    case 68557:
    {
        returnValue = F("Bäumelweg");
        break;
    }
    case 68558:
    {
        returnValue = F("Bäumengasse");
        break;
    }
    case 68559:
    {
        returnValue = F("Bäumenheim");
        break;
    }
    case 68560:
    {
        returnValue = F("Bäumenheimer Str.");
        break;
    }
    case 68561:
    {
        returnValue = F("Bäumenstr.");
        break;
    }
    case 68562:
    {
        returnValue = F("Bäumenwiese");
        break;
    }
    case 68563:
    {
        returnValue = F("Bäumergrund");
        break;
    }
    case 68564:
    {
        returnValue = F("Bäumers Hügel");
        break;
    }
    case 68565:
    {
        returnValue = F("Bäumerstr.");
        break;
    }
    case 68566:
    {
        returnValue = F("Bäumerweg");
        break;
    }
    case 68567:
    {
        returnValue = F("Bäumges Kirchweg");
        break;
    }
    case 68568:
    {
        returnValue = F("Bäumgeshofer Weg");
        break;
    }
    case 68569:
    {
        returnValue = F("Bäumkers Kamp");
        break;
    }
    case 68570:
    {
        returnValue = F("Bäumleacker");
        break;
    }
    case 68571:
    {
        returnValue = F("Bäumlein");
        break;
    }
    case 68572:
    {
        returnValue = F("Bäumleinsweg");
        break;
    }
    case 68573:
    {
        returnValue = F("Bäumlesberg");
        break;
    }
    case 68574:
    {
        returnValue = F("Bäumlesgewand");
        break;
    }
    case 68575:
    {
        returnValue = F("Bäumlesgraben");
        break;
    }
    case 68576:
    {
        returnValue = F("Bäumlesmißweg");
        break;
    }
    case 68577:
    {
        returnValue = F("Bäumlesstr.");
        break;
    }
    case 68578:
    {
        returnValue = F("Bäumlesweg");
        break;
    }
    case 68579:
    {
        returnValue = F("Bäumlesäcker");
        break;
    }
    case 68580:
    {
        returnValue = F("Bäumlesäckerstr.");
        break;
    }
    case 68581:
    {
        returnValue = F("Bäumlesäckerweg");
        break;
    }
    case 68582:
    {
        returnValue = F("Bäumleweg");
        break;
    }
    case 68583:
    {
        returnValue = F("Bäumlfeldweg");
        break;
    }
    case 68584:
    {
        returnValue = F("Bäumliackerweg");
        break;
    }
    case 68585:
    {
        returnValue = F("Bäumlinger Weg");
        break;
    }
    case 68586:
    {
        returnValue = F("Bäumlstr.");
        break;
    }
    case 68587:
    {
        returnValue = F("Bäunerdrift");
        break;
    }
    case 68588:
    {
        returnValue = F("Bäusenberg");
        break;
    }
    case 68589:
    {
        returnValue = F("Bäustr.");
        break;
    }
    case 68590:
    {
        returnValue = F("Bäzenecke");
        break;
    }
    case 68591:
    {
        returnValue = F("Bäznerstr.");
        break;
    }
    case 68592:
    {
        returnValue = F("Bäßlerstr.");
        break;
    }
    case 68593:
    {
        returnValue = F("Békéscsaba-Str.");
        break;
    }
    case 68594:
    {
        returnValue = F("Böbbeldiek");
        break;
    }
    case 68595:
    {
        returnValue = F("Böbbersche Str.");
        break;
    }
    case 68596:
    {
        returnValue = F("Böbbingweg");
        break;
    }
    case 68597:
    {
        returnValue = F("Böbergasse");
        break;
    }
    case 68598:
    {
        returnValue = F("Böbersten Weg");
        break;
    }
    case 68599:
    {
        returnValue = F("Böberster Weg");
        break;
    }
    case 68600:
    {
        returnValue = F("Böberstroot");
        break;
    }
    case 68601:
    {
        returnValue = F("Böbinger Str.");
        break;
    }
    case 68602:
    {
        returnValue = F("Böbinger Weg");
        break;
    }
    case 68603:
    {
        returnValue = F("Böblinger Platz");
        break;
    }
    case 68604:
    {
        returnValue = F("Böblinger Str.");
        break;
    }
    case 68605:
    {
        returnValue = F("Böblinger Sträßle");
        break;
    }
    case 68606:
    {
        returnValue = F("Böblinger Weg");
        break;
    }
    case 68607:
    {
        returnValue = F("Böchelsjaaß (Büchelsgasse)");
        break;
    }
    case 68608:
    {
        returnValue = F("Böcheringweg");
        break;
    }
    case 68609:
    {
        returnValue = F("Böcherleweg");
        break;
    }
    case 68610:
    {
        returnValue = F("Böchershügel");
        break;
    }
    case 68611:
    {
        returnValue = F("Böchinger Str.");
        break;
    }
    case 68612:
    {
        returnValue = F("Böchinger Weg");
        break;
    }
    case 68613:
    {
        returnValue = F("Böcholenweg");
        break;
    }
    case 68614:
    {
        returnValue = F("Böckberg");
        break;
    }
    case 68615:
    {
        returnValue = F("Böckel");
        break;
    }
    case 68616:
    {
        returnValue = F("Böckelfeld");
        break;
    }
    case 68617:
    {
        returnValue = F("Böckelmannstr.");
        break;
    }
    case 68618:
    {
        returnValue = F("Böckelmannweg");
        break;
    }
    case 68619:
    {
        returnValue = F("Böckelser Str.");
        break;
    }
    case 68620:
    {
        returnValue = F("Böckelser Weg");
        break;
    }
    case 68621:
    {
        returnValue = F("Böckelweg");
        break;
    }
    case 68622:
    {
        returnValue = F("Böcken");
        break;
    }
    case 68623:
    {
        returnValue = F("Böckenbusch");
        break;
    }
    case 68624:
    {
        returnValue = F("Böckenfördeweg");
        break;
    }
    case 68625:
    {
        returnValue = F("Böckenheckstr.");
        break;
    }
    case 68626:
    {
        returnValue = F("Böckenhoffstr.");
        break;
    }
    case 68627:
    {
        returnValue = F("Böckenholt");
        break;
    }
    case 68628:
    {
        returnValue = F("Böckenholtweg");
        break;
    }
    case 68629:
    {
        returnValue = F("Böckenkamp");
        break;
    }
    case 68630:
    {
        returnValue = F("Böckenstöken");
        break;
    }
    case 68631:
    {
        returnValue = F("Böckentrup");
        break;
    }
    case 68632:
    {
        returnValue = F("Böckenweg");
        break;
    }
    case 68633:
    {
        returnValue = F("Böckeriethe");
        break;
    }
    case 68634:
    {
        returnValue = F("Böckers Kamp");
        break;
    }
    case 68635:
    {
        returnValue = F("Böckerweg");
        break;
    }
    case 68636:
    {
        returnValue = F("Böckinger");
        break;
    }
    case 68637:
    {
        returnValue = F("Böckinger Backenweg");
        break;
    }
    case 68638:
    {
        returnValue = F("Böckinger Str.");
        break;
    }
    case 68639:
    {
        returnValue = F("Böckingerebenweg");
        break;
    }
    case 68640:
    {
        returnValue = F("Böckingstr.");
        break;
    }
    case 68641:
    {
        returnValue = F("Böckingwiese");
        break;
    }
    case 68642:
    {
        returnValue = F("Böcklbacher Str.");
        break;
    }
    case 68643:
    {
        returnValue = F("Böckleinsgasse");
        break;
    }
    case 68644:
    {
        returnValue = F("Böckler-Str.");
        break;
    }
    case 68645:
    {
        returnValue = F("Böcklersfeld");
        break;
    }
    case 68646:
    {
        returnValue = F("Böcklerstr.");
        break;
    }
    case 68647:
    {
        returnValue = F("Böcklerweg");
        break;
    }
    case 68648:
    {
        returnValue = F("Böcklesrain");
        break;
    }
    case 68649:
    {
        returnValue = F("Böcklhof");
        break;
    }
    case 68650:
    {
        returnValue = F("Böcklhofweg");
        break;
    }
    case 68651:
    {
        returnValue = F("Böcklingen");
        break;
    }
    case 68652:
    {
        returnValue = F("Böcklinplatz");
        break;
    }
    case 68653:
    {
        returnValue = F("Böcklinstr.");
        break;
    }
    case 68654:
    {
        returnValue = F("Böcklinweg");
        break;
    }
    case 68655:
    {
        returnValue = F("Böcklweiherstr.");
        break;
    }
    case 68656:
    {
        returnValue = F("Böckmanns Feld");
        break;
    }
    case 68657:
    {
        returnValue = F("Böckmanns Wiese");
        break;
    }
    case 68658:
    {
        returnValue = F("Böckmannstr.");
        break;
    }
    case 68659:
    {
        returnValue = F("Böckstiegelweg");
        break;
    }
    case 68660:
    {
        returnValue = F("Böckstr.");
        break;
    }
    case 68661:
    {
        returnValue = F("Böckswiese");
        break;
    }
    case 68662:
    {
        returnValue = F("Böckumer Str.");
        break;
    }
    case 68663:
    {
        returnValue = F("Böckweilerstr.");
        break;
    }
    case 68664:
    {
        returnValue = F("Böckwitzer Str.");
        break;
    }
    case 68665:
    {
        returnValue = F("Bödcherstr.");
        break;
    }
    case 68666:
    {
        returnValue = F("Böddenstedter Str.");
        break;
    }
    case 68667:
    {
        returnValue = F("Böddenstedter Weg");
        break;
    }
    case 68668:
    {
        returnValue = F("Böddes");
        break;
    }
    case 68669:
    {
        returnValue = F("Böddiger Str.");
        break;
    }
    case 68670:
    {
        returnValue = F("Böddinghauser Weg");
        break;
    }
    case 68671:
    {
        returnValue = F("Böddinghusener Weg");
        break;
    }
    case 68672:
    {
        returnValue = F("Böddings Hof");
        break;
    }
    case 68673:
    {
        returnValue = F("Bödeckers Weg");
        break;
    }
    case 68674:
    {
        returnValue = F("Bödeckerstr.");
        break;
    }
    case 68675:
    {
        returnValue = F("Bödefelder Str.");
        break;
    }
    case 68676:
    {
        returnValue = F("Bödefür");
        break;
    }
    case 68677:
    {
        returnValue = F("Bödekers Brink");
        break;
    }
    case 68678:
    {
        returnValue = F("Bödekerstr.");
        break;
    }
    case 68679:
    {
        returnValue = F("Bödele");
        break;
    }
    case 68680:
    {
        returnValue = F("Bödeleinsweg");
        break;
    }
    case 68681:
    {
        returnValue = F("Bödelesweg");
        break;
    }
    case 68682:
    {
        returnValue = F("Bödeleweg");
        break;
    }
    case 68683:
    {
        returnValue = F("Bödelsollstr.");
        break;
    }
    case 68684:
    {
        returnValue = F("Bödemlesteige");
        break;
    }
    case 68685:
    {
        returnValue = F("Bödemleweg");
        break;
    }
    case 68686:
    {
        returnValue = F("Bödeweg");
        break;
    }
    case 68687:
    {
        returnValue = F("Bödexer Str.");
        break;
    }
    case 68688:
    {
        returnValue = F("Bödexer Tal");
        break;
    }
    case 68689:
    {
        returnValue = F("Bödexer Weg");
        break;
    }
    case 68690:
    {
        returnValue = F("Bödickerstr.");
        break;
    }
    case 68691:
    {
        returnValue = F("Bödigestr.");
        break;
    }
    case 68692:
    {
        returnValue = F("Bödigheimer Weg");
        break;
    }
    case 68693:
    {
        returnValue = F("Bödikerstr.");
        break;
    }
    case 68694:
    {
        returnValue = F("Bödingerhof");
        break;
    }
    case 68695:
    {
        returnValue = F("Bödingerweg");
        break;
    }
    case 68696:
    {
        returnValue = F("Bödingsheide");
        break;
    }
    case 68697:
    {
        returnValue = F("Bödlas");
        break;
    }
    case 68698:
    {
        returnValue = F("Bödldorf");
        break;
    }
    case 68699:
    {
        returnValue = F("Bödweg");
        break;
    }
    case 68700:
    {
        returnValue = F("Böelkamp");
        break;
    }
    case 68701:
    {
        returnValue = F("Böelnorderfeld");
        break;
    }
    case 68702:
    {
        returnValue = F("Böelschuby-Hof");
        break;
    }
    case 68703:
    {
        returnValue = F("Böelstamm");
        break;
    }
    case 68704:
    {
        returnValue = F("Böelwesterfeld");
        break;
    }
    case 68705:
    {
        returnValue = F("Böener Str.");
        break;
    }
    case 68706:
    {
        returnValue = F("Böffinger Str.");
        break;
    }
    case 68707:
    {
        returnValue = F("Böfinger Str.");
        break;
    }
    case 68708:
    {
        returnValue = F("Böge");
        break;
    }
    case 68709:
    {
        returnValue = F("Bögel");
        break;
    }
    case 68710:
    {
        returnValue = F("Bögele");
        break;
    }
    case 68711:
    {
        returnValue = F("Bögelföhr");
        break;
    }
    case 68712:
    {
        returnValue = F("Bögelscher Weg");
        break;
    }
    case 68713:
    {
        returnValue = F("Bögelsheide");
        break;
    }
    case 68714:
    {
        returnValue = F("Bögerhof");
        break;
    }
    case 68715:
    {
        returnValue = F("Bögerskamp");
        break;
    }
    case 68716:
    {
        returnValue = F("Bögerweg");
        break;
    }
    case 68717:
    {
        returnValue = F("Bögesteg");
        break;
    }
    case 68718:
    {
        returnValue = F("Bögestr.");
        break;
    }
    case 68719:
    {
        returnValue = F("Böggefeld");
        break;
    }
    case 68720:
    {
        returnValue = F("Böggelhöst");
        break;
    }
    case 68721:
    {
        returnValue = F("Böggenkamp");
        break;
    }
    case 68722:
    {
        returnValue = F("Böggeringstr.");
        break;
    }
    case 68723:
    {
        returnValue = F("Böghelmer");
        break;
    }
    case 68724:
    {
        returnValue = F("Bögle");
        break;
    }
    case 68725:
    {
        returnValue = F("Böglestr.");
        break;
    }
    case 68726:
    {
        returnValue = F("Böglstr.");
        break;
    }
    case 68727:
    {
        returnValue = F("Bögnerweg");
        break;
    }
    case 68728:
    {
        returnValue = F("Böham");
        break;
    }
    case 68729:
    {
        returnValue = F("Böheimbstr.");
        break;
    }
    case 68730:
    {
        returnValue = F("Böheimstein");
        break;
    }
    case 68731:
    {
        returnValue = F("Böheimstr.");
        break;
    }
    case 68732:
    {
        returnValue = F("Böhl");
        break;
    }
    case 68733:
    {
        returnValue = F("Böhlacker");
        break;
    }
    case 68734:
    {
        returnValue = F("Böhlaer Str.");
        break;
    }
    case 68735:
    {
        returnValue = F("Böhlaustr.");
        break;
    }
    case 68736:
    {
        returnValue = F("Böhlefeld");
        break;
    }
    case 68737:
    {
        returnValue = F("Böhlefeldshaus");
        break;
    }
    case 68738:
    {
        returnValue = F("Böhlener Str.");
        break;
    }
    case 68739:
    {
        returnValue = F("Böhlener Tal");
        break;
    }
    case 68740:
    {
        returnValue = F("Böhlener Weg");
        break;
    }
    case 68741:
    {
        returnValue = F("Böhlenrade");
        break;
    }
    case 68742:
    {
        returnValue = F("Böhler Heide");
        break;
    }
    case 68743:
    {
        returnValue = F("Böhler Landstr.");
        break;
    }
    case 68744:
    {
        returnValue = F("Böhler Str.");
        break;
    }
    case 68745:
    {
        returnValue = F("Böhler Weg");
        break;
    }
    case 68746:
    {
        returnValue = F("Böhlerstr.");
        break;
    }
    case 68747:
    {
        returnValue = F("Böhlerweg");
        break;
    }
    case 68748:
    {
        returnValue = F("Böhleswasenweg");
        break;
    }
    case 68749:
    {
        returnValue = F("Böhlgasse");
        break;
    }
    case 68750:
    {
        returnValue = F("Böhlhügelweg");
        break;
    }
    case 68751:
    {
        returnValue = F("Böhligweg");
        break;
    }
    case 68752:
    {
        returnValue = F("Böhling");
        break;
    }
    case 68753:
    {
        returnValue = F("Böhlingshörn");
        break;
    }
    case 68754:
    {
        returnValue = F("Böhlitz");
        break;
    }
    case 68755:
    {
        returnValue = F("Böhlitzer Str.");
        break;
    }
    case 68756:
    {
        returnValue = F("Böhlitzer Weg");
        break;
    }
    case 68757:
    {
        returnValue = F("Böhlstr.");
        break;
    }
    case 68758:
    {
        returnValue = F("Böhlweg");
        break;
    }
    case 68759:
    {
        returnValue = F("Böhlwiese");
        break;
    }
    case 68760:
    {
        returnValue = F("Böhläckerstr.");
        break;
    }
    case 68761:
    {
        returnValue = F("Böhmackerstr.");
        break;
    }
    case 68762:
    {
        returnValue = F("Böhmckersweg");
        break;
    }
    case 68763:
    {
        returnValue = F("Böhme");
        break;
    }
    case 68764:
    {
        returnValue = F("Böhmener Str.");
        break;
    }
    case 68765:
    {
        returnValue = F("Böhmener Weg");
        break;
    }
    case 68766:
    {
        returnValue = F("Böhmengasse");
        break;
    }
    case 68767:
    {
        returnValue = F("Böhmenhof");
        break;
    }
    case 68768:
    {
        returnValue = F("Böhmenkircher Str.");
        break;
    }
    case 68769:
    {
        returnValue = F("Böhmenkircher Weg");
        break;
    }
    case 68770:
    {
        returnValue = F("Böhmenseite");
        break;
    }
    case 68771:
    {
        returnValue = F("Böhmenstr.");
        break;
    }
    case 68772:
    {
        returnValue = F("Böhmepark");
        break;
    }
    case 68773:
    {
        returnValue = F("Böhmer Str.");
        break;
    }
    case 68774:
    {
        returnValue = F("Böhmer Weg");
        break;
    }
    case 68775:
    {
        returnValue = F("Böhmerbergring");
        break;
    }
    case 68776:
    {
        returnValue = F("Böhmerbergstr.");
        break;
    }
    case 68777:
    {
        returnValue = F("Böhmergasse");
        break;
    }
    case 68778:
    {
        returnValue = F("Böhmerheider Weg");
        break;
    }
    case 68779:
    {
        returnValue = F("Böhmerlandstr.");
        break;
    }
    case 68780:
    {
        returnValue = F("Böhmersreutweg");
        break;
    }
    case 68781:
    {
        returnValue = F("Böhmersteig");
        break;
    }
    case 68782:
    {
        returnValue = F("Böhmerstr.");
        break;
    }
    case 68783:
    {
        returnValue = F("Böhmertstr.");
        break;
    }
    case 68784:
    {
        returnValue = F("Böhmerwald");
        break;
    }
    case 68785:
    {
        returnValue = F("Böhmerwaldgasse");
        break;
    }
    case 68786:
    {
        returnValue = F("Böhmerwaldring");
        break;
    }
    case 68787:
    {
        returnValue = F("Böhmerwaldsiedlung");
        break;
    }
    case 68788:
    {
        returnValue = F("Böhmerwaldstr.");
        break;
    }
    case 68789:
    {
        returnValue = F("Böhmerwaldweg");
        break;
    }
    case 68790:
    {
        returnValue = F("Böhmerweg");
        break;
    }
    case 68791:
    {
        returnValue = F("Böhmerwold");
        break;
    }
    case 68792:
    {
        returnValue = F("Böhmerwälder Weg");
        break;
    }
    case 68793:
    {
        returnValue = F("Böhmestr.");
        break;
    }
    case 68794:
    {
        returnValue = F("Böhmesweg");
        break;
    }
    case 68795:
    {
        returnValue = F("Böhmeweg");
        break;
    }
    case 68796:
    {
        returnValue = F("Böhmfelder Str.");
        break;
    }
    case 68797:
    {
        returnValue = F("Böhmfelder Weg");
        break;
    }
    case 68798:
    {
        returnValue = F("Böhmfeldstr.");
        break;
    }
    case 68799:
    {
        returnValue = F("Böhmheide");
        break;
    }
    case 68800:
    {
        returnValue = F("Böhminger Weg");
        break;
    }
    case 68801:
    {
        returnValue = F("Böhmisch-Leipaer-Str.");
        break;
    }
    case 68802:
    {
        returnValue = F("Böhmischbrucker Str.");
        break;
    }
    case 68803:
    {
        returnValue = F("Böhmische Str.");
        break;
    }
    case 68804:
    {
        returnValue = F("Böhmische Torgasse");
        break;
    }
    case 68805:
    {
        returnValue = F("Böhmischer Weg");
        break;
    }
    case 68806:
    {
        returnValue = F("Böhmischer-Wenzel-Weg");
        break;
    }
    case 68807:
    {
        returnValue = F("Böhmisches Eck");
        break;
    }
    case 68808:
    {
        returnValue = F("Böhmisches Lindhorn");
        break;
    }
    case 68809:
    {
        returnValue = F("Böhmkrützweg");
        break;
    }
    case 68810:
    {
        returnValue = F("Böhmlach");
        break;
    }
    case 68811:
    {
        returnValue = F("Böhmlestr.");
        break;
    }
    case 68812:
    {
        returnValue = F("Böhmsche Wiesen");
        break;
    }
    case 68813:
    {
        returnValue = F("Böhmsgasse");
        break;
    }
    case 68814:
    {
        returnValue = F("Böhmshagen");
        break;
    }
    case 68815:
    {
        returnValue = F("Böhmsholz");
        break;
    }
    case 68816:
    {
        returnValue = F("Böhmsholzer Weg");
        break;
    }
    case 68817:
    {
        returnValue = F("Böhmstr.");
        break;
    }
    case 68818:
    {
        returnValue = F("Böhmweg");
        break;
    }
    case 68819:
    {
        returnValue = F("Böhmzwiesel");
        break;
    }
    case 68820:
    {
        returnValue = F("Böhneberg");
        break;
    }
    case 68821:
    {
        returnValue = F("Böhnen-Rehre");
        break;
    }
    case 68822:
    {
        returnValue = F("Böhner Bergstr.");
        break;
    }
    case 68823:
    {
        returnValue = F("Böhner Chaussee");
        break;
    }
    case 68824:
    {
        returnValue = F("Böhner Str.");
        break;
    }
    case 68825:
    {
        returnValue = F("Böhner Weg");
        break;
    }
    case 68826:
    {
        returnValue = F("Böhnerstr.");
        break;
    }
    case 68827:
    {
        returnValue = F("Böhnerweg");
        break;
    }
    case 68828:
    {
        returnValue = F("Böhnhusener Weg");
        break;
    }
    case 68829:
    {
        returnValue = F("Böhnkesweg");
        break;
    }
    case 68830:
    {
        returnValue = F("Böhnlingstr.");
        break;
    }
    case 68831:
    {
        returnValue = F("Böhnrüher Weg");
        break;
    }
    case 68832:
    {
        returnValue = F("Böhnsgasse");
        break;
    }
    case 68833:
    {
        returnValue = F("Böhnshausener Weg");
        break;
    }
    case 68834:
    {
        returnValue = F("Böhnshauser Str.");
        break;
    }
    case 68835:
    {
        returnValue = F("Böhntalsweg");
        break;
    }
    case 68836:
    {
        returnValue = F("Böhrigener Str.");
        break;
    }
    case 68837:
    {
        returnValue = F("Böhringer See Bad");
        break;
    }
    case 68838:
    {
        returnValue = F("Böhringer Steige");
        break;
    }
    case 68839:
    {
        returnValue = F("Böhringer Str.");
        break;
    }
    case 68840:
    {
        returnValue = F("Böhringer Weg");
        break;
    }
    case 68841:
    {
        returnValue = F("Böhringerhauweg");
        break;
    }
    case 68842:
    {
        returnValue = F("Böhringerstr.");
        break;
    }
    case 68843:
    {
        returnValue = F("Böhringerweg");
        break;
    }
    case 68844:
    {
        returnValue = F("Böhrpfad");
        break;
    }
    case 68845:
    {
        returnValue = F("Böhrstr.");
        break;
    }
    case 68846:
    {
        returnValue = F("Böingholzstr.");
        break;
    }
    case 68847:
    {
        returnValue = F("Bökamp");
        break;
    }
    case 68848:
    {
        returnValue = F("Bökel");
        break;
    }
    case 68849:
    {
        returnValue = F("Bökeler");
        break;
    }
    case 68850:
    {
        returnValue = F("Bökelmannstr.");
        break;
    }
    case 68851:
    {
        returnValue = F("Böken");
        break;
    }
    case 68852:
    {
        returnValue = F("Böken Esch");
        break;
    }
    case 68853:
    {
        returnValue = F("Bökenbarg");
        break;
    }
    case 68854:
    {
        returnValue = F("Bökenberg");
        break;
    }
    case 68855:
    {
        returnValue = F("Bökenbergstr.");
        break;
    }
    case 68856:
    {
        returnValue = F("Bökenboomweg");
        break;
    }
    case 68857:
    {
        returnValue = F("Bökenbusch");
        break;
    }
    case 68858:
    {
        returnValue = F("Bökenbuschstr.");
        break;
    }
    case 68859:
    {
        returnValue = F("Bökendorfer Str.");
        break;
    }
    case 68860:
    {
        returnValue = F("Bökeneck");
        break;
    }
    case 68861:
    {
        returnValue = F("Bökener Str.");
        break;
    }
    case 68862:
    {
        returnValue = F("Bökener Weg");
        break;
    }
    case 68863:
    {
        returnValue = F("Bökenfeld");
        break;
    }
    case 68864:
    {
        returnValue = F("Bökenförder Str.");
        break;
    }
    case 68865:
    {
        returnValue = F("Bökenholtweg");
        break;
    }
    case 68866:
    {
        returnValue = F("Bökenkamp");
        break;
    }
    case 68867:
    {
        returnValue = F("Bökenredder");
        break;
    }
    case 68868:
    {
        returnValue = F("Bökenring");
        break;
    }
    case 68869:
    {
        returnValue = F("Bökensiekweg");
        break;
    }
    case 68870:
    {
        returnValue = F("Bökenweg");
        break;
    }
    case 68871:
    {
        returnValue = F("Bökenwiese");
        break;
    }
    case 68872:
    {
        returnValue = F("Böker Stieg");
        break;
    }
    case 68873:
    {
        returnValue = F("Böker Str.");
        break;
    }
    case 68874:
    {
        returnValue = F("Bökerberg");
        break;
    }
    case 68875:
    {
        returnValue = F("Bökerfeld");
        break;
    }
    case 68876:
    {
        returnValue = F("Bökerhof");
        break;
    }
    case 68877:
    {
        returnValue = F("Bökerhook");
        break;
    }
    case 68878:
    {
        returnValue = F("Bökers Garten");
        break;
    }
    case 68879:
    {
        returnValue = F("Bökerspark");
        break;
    }
    case 68880:
    {
        returnValue = F("Bökerstr.");
        break;
    }
    case 68881:
    {
        returnValue = F("Bökerweg");
        break;
    }
    case 68882:
    {
        returnValue = F("Bökes Kamp");
        break;
    }
    case 68883:
    {
        returnValue = F("Bökeweg");
        break;
    }
    case 68884:
    {
        returnValue = F("Böklinger Str.");
        break;
    }
    case 68885:
    {
        returnValue = F("Böklunder Str.");
        break;
    }
    case 68886:
    {
        returnValue = F("Böklundfeld");
        break;
    }
    case 68887:
    {
        returnValue = F("Bökwatt");
        break;
    }
    case 68888:
    {
        returnValue = F("Bölckestr.");
        break;
    }
    case 68889:
    {
        returnValue = F("Böle-Bonken-Wai");
        break;
    }
    case 68890:
    {
        returnValue = F("Bölesgasse");
        break;
    }
    case 68891:
    {
        returnValue = F("Bölgentaler Str.");
        break;
    }
    case 68892:
    {
        returnValue = F("Bölgenweg");
        break;
    }
    case 68893:
    {
        returnValue = F("Bölinger Flur");
        break;
    }
    case 68894:
    {
        returnValue = F("Bölinghoven");
        break;
    }
    case 68895:
    {
        returnValue = F("Bölkauweg");
        break;
    }
    case 68896:
    {
        returnValue = F("Bölkeanger");
        break;
    }
    case 68897:
    {
        returnValue = F("Bölkendorfer Str.");
        break;
    }
    case 68898:
    {
        returnValue = F("Bölkenhufen");
        break;
    }
    case 68899:
    {
        returnValue = F("Bölkestr.");
        break;
    }
    case 68900:
    {
        returnValue = F("Bölkower Chaussee");
        break;
    }
    case 68901:
    {
        returnValue = F("Bölkower Str.");
        break;
    }
    case 68902:
    {
        returnValue = F("Bölkower Weg");
        break;
    }
    case 68903:
    {
        returnValue = F("Bölkowstr.");
        break;
    }
    case 68904:
    {
        returnValue = F("Bölkum");
        break;
    }
    case 68905:
    {
        returnValue = F("Böllatstr.");
        break;
    }
    case 68906:
    {
        returnValue = F("Böllatsträßle");
        break;
    }
    case 68907:
    {
        returnValue = F("Böllatweg");
        break;
    }
    case 68908:
    {
        returnValue = F("Böllberg");
        break;
    }
    case 68909:
    {
        returnValue = F("Böllenbachstr.");
        break;
    }
    case 68910:
    {
        returnValue = F("Böllenbachweg");
        break;
    }
    case 68911:
    {
        returnValue = F("Böllenberg");
        break;
    }
    case 68912:
    {
        returnValue = F("Böllenbodenhof");
        break;
    }
    case 68913:
    {
        returnValue = F("Böllenkamp");
        break;
    }
    case 68914:
    {
        returnValue = F("Böllenschmied");
        break;
    }
    case 68915:
    {
        returnValue = F("Böllenseeplatz");
        break;
    }
    case 68916:
    {
        returnValue = F("Böllenstege");
        break;
    }
    case 68917:
    {
        returnValue = F("Böllenstr.");
        break;
    }
    case 68918:
    {
        returnValue = F("Böllerfeld");
        break;
    }
    case 68919:
    {
        returnValue = F("Böllergasse");
        break;
    }
    case 68920:
    {
        returnValue = F("Böllermaas");
        break;
    }
    case 68921:
    {
        returnValue = F("Böllermühlstr.");
        break;
    }
    case 68922:
    {
        returnValue = F("Böllerschenweg");
        break;
    }
    case 68923:
    {
        returnValue = F("Böllershaid");
        break;
    }
    case 68924:
    {
        returnValue = F("Böllerstr.");
        break;
    }
    case 68925:
    {
        returnValue = F("Böllerts Höfe");
        break;
    }
    case 68926:
    {
        returnValue = F("Böllerweg");
        break;
    }
    case 68927:
    {
        returnValue = F("Böllestr.");
        break;
    }
    case 68928:
    {
        returnValue = F("Bölleweg");
        break;
    }
    case 68929:
    {
        returnValue = F("Böllgraben");
        break;
    }
    case 68930:
    {
        returnValue = F("Böllhöfe");
        break;
    }
    case 68931:
    {
        returnValue = F("Böllingerstr.");
        break;
    }
    case 68932:
    {
        returnValue = F("Böllings Garten");
        break;
    }
    case 68933:
    {
        returnValue = F("Böllings Ufer");
        break;
    }
    case 68934:
    {
        returnValue = F("Böllingsbrink");
        break;
    }
    case 68935:
    {
        returnValue = F("Böllingshöfen");
        break;
    }
    case 68936:
    {
        returnValue = F("Böllpfad");
        break;
    }
    case 68937:
    {
        returnValue = F("Böllrichstr.");
        break;
    }
    case 68938:
    {
        returnValue = F("Böllrodt");
        break;
    }
    case 68939:
    {
        returnValue = F("Böllsteiner Str.");
        break;
    }
    case 68940:
    {
        returnValue = F("Böllstr.");
        break;
    }
    case 68941:
    {
        returnValue = F("Böllwiese");
        break;
    }
    case 68942:
    {
        returnValue = F("Böls Breite");
        break;
    }
    case 68943:
    {
        returnValue = F("Bölsberger Str.");
        break;
    }
    case 68944:
    {
        returnValue = F("Bölsberger Weg");
        break;
    }
    case 68945:
    {
        returnValue = F("Bölschebich");
        break;
    }
    case 68946:
    {
        returnValue = F("Bölskamp");
        break;
    }
    case 68947:
    {
        returnValue = F("Bölsweg");
        break;
    }
    case 68948:
    {
        returnValue = F("Böltgesweg");
        break;
    }
    case 68949:
    {
        returnValue = F("Böltingsweg");
        break;
    }
    case 68950:
    {
        returnValue = F("Bölweg");
        break;
    }
    case 68951:
    {
        returnValue = F("Bölwiese");
        break;
    }
    case 68952:
    {
        returnValue = F("Bölzker Str.");
        break;
    }
    case 68953:
    {
        returnValue = F("Bölzker Str. Bölzke");
        break;
    }
    case 68954:
    {
        returnValue = F("Bölzker Str. Kemnitz");
        break;
    }
    case 68955:
    {
        returnValue = F("Bölzstr.");
        break;
    }
    case 68956:
    {
        returnValue = F("Bömbachweg");
        break;
    }
    case 68957:
    {
        returnValue = F("Bömbergring");
        break;
    }
    case 68958:
    {
        returnValue = F("Bömelbergstr.");
        break;
    }
    case 68959:
    {
        returnValue = F("Bömenzien");
        break;
    }
    case 68960:
    {
        returnValue = F("Bömerich");
        break;
    }
    case 68961:
    {
        returnValue = F("Bömericher Mühle");
        break;
    }
    case 68962:
    {
        returnValue = F("Bömerstr.");
        break;
    }
    case 68963:
    {
        returnValue = F("Böminghausen");
        break;
    }
    case 68964:
    {
        returnValue = F("Böminghauser Weg");
        break;
    }
    case 68965:
    {
        returnValue = F("Bömitz");
        break;
    }
    case 68966:
    {
        returnValue = F("Bömkerfeldstr.");
        break;
    }
    case 68967:
    {
        returnValue = F("Bömkesweg");
        break;
    }
    case 68968:
    {
        returnValue = F("Bömmelbergstr.");
        break;
    }
    case 68969:
    {
        returnValue = F("Böndches-Jääsje");
        break;
    }
    case 68970:
    {
        returnValue = F("Böndejaas");
        break;
    }
    case 68971:
    {
        returnValue = F("Böndergaard");
        break;
    }
    case 68972:
    {
        returnValue = F("Bönebütteler Damm");
        break;
    }
    case 68973:
    {
        returnValue = F("Bönebütteler Ring");
        break;
    }
    case 68974:
    {
        returnValue = F("Bönebütteler Str.");
        break;
    }
    case 68975:
    {
        returnValue = F("Bönebütteler Weg");
        break;
    }
    case 68976:
    {
        returnValue = F("Bönekenberg");
        break;
    }
    case 68977:
    {
        returnValue = F("Bönener Str.");
        break;
    }
    case 68978:
    {
        returnValue = F("Böningergasse");
        break;
    }
    case 68979:
    {
        returnValue = F("Böningstr.");
        break;
    }
    case 68980:
    {
        returnValue = F("Böningweg");
        break;
    }
    case 68981:
    {
        returnValue = F("Bönitzer Str.");
        break;
    }
    case 68982:
    {
        returnValue = F("Bönkhausen");
        break;
    }
    case 68983:
    {
        returnValue = F("Bönneker Str.");
        break;
    }
    case 68984:
    {
        returnValue = F("Bönnier Str.");
        break;
    }
    case 68985:
    {
        returnValue = F("Bönnigheimer Ring");
        break;
    }
    case 68986:
    {
        returnValue = F("Bönnigheimer Str.");
        break;
    }
    case 68987:
    {
        returnValue = F("Bönnigheimer Weg");
        break;
    }
    case 68988:
    {
        returnValue = F("Bönninger Str.");
        break;
    }
    case 68989:
    {
        returnValue = F("Bönninghardt");
        break;
    }
    case 68990:
    {
        returnValue = F("Bönninghardter Str.");
        break;
    }
    case 68991:
    {
        returnValue = F("Bönninghausen");
        break;
    }
    case 68992:
    {
        returnValue = F("Bönninghausenweg");
        break;
    }
    case 68993:
    {
        returnValue = F("Bönninghauser Str.");
        break;
    }
    case 68994:
    {
        returnValue = F("Bönninghusenstr.");
        break;
    }
    case 68995:
    {
        returnValue = F("Bönningskamp");
        break;
    }
    case 68996:
    {
        returnValue = F("Bönnlerstr.");
        break;
    }
    case 68997:
    {
        returnValue = F("Bönnscher Weg");
        break;
    }
    case 68998:
    {
        returnValue = F("Bönstädter Str.");
        break;
    }
    case 68999:
    {
        returnValue = F("Böntalweg");
        break;
    }
    case 69000:
    {
        returnValue = F("Böntenweg");
        break;
    }
    case 69001:
    {
        returnValue = F("Böntruper Str.");
        break;
    }
    case 69002:
    {
        returnValue = F("Böntschespfad");
        break;
    }
    case 69003:
    {
        returnValue = F("Böppelbachweg");
        break;
    }
    case 69004:
    {
        returnValue = F("Börbachweg");
        break;
    }
    case 69005:
    {
        returnValue = F("Börchers Busch");
        break;
    }
    case 69006:
    {
        returnValue = F("Börchers Lohne");
        break;
    }
    case 69007:
    {
        returnValue = F("Bördeblick");
        break;
    }
    case 69008:
    {
        returnValue = F("Bördel");
        break;
    }
    case 69009:
    {
        returnValue = F("Bördeler Berg");
        break;
    }
    case 69010:
    {
        returnValue = F("Bördeler Weg");
        break;
    }
    case 69011:
    {
        returnValue = F("Bördenstr.");
        break;
    }
    case 69012:
    {
        returnValue = F("Börder Str.");
        break;
    }
    case 69013:
    {
        returnValue = F("Bördering");
        break;
    }
    case 69014:
    {
        returnValue = F("Börderstich");
        break;
    }
    case 69015:
    {
        returnValue = F("Börderwai");
        break;
    }
    case 69016:
    {
        returnValue = F("Börderweg");
        break;
    }
    case 69017:
    {
        returnValue = F("Bördestr.");
        break;
    }
    case 69018:
    {
        returnValue = F("Bördeweg");
        break;
    }
    case 69019:
    {
        returnValue = F("Börenstr.");
        break;
    }
    case 69020:
    {
        returnValue = F("Börentwedt");
        break;
    }
    case 69021:
    {
        returnValue = F("Börfeld");
        break;
    }
    case 69022:
    {
        returnValue = F("Börgemühle");
        break;
    }
    case 69023:
    {
        returnValue = F("Börgenweg");
        break;
    }
    case 69024:
    {
        returnValue = F("Börger Str.");
        break;
    }
    case 69025:
    {
        returnValue = F("Börger Weg");
        break;
    }
    case 69026:
    {
        returnValue = F("Börgerdieksweg");
        break;
    }
    case 69027:
    {
        returnValue = F("Börgerender Str.");
        break;
    }
    case 69028:
    {
        returnValue = F("Börgerhörn");
        break;
    }
    case 69029:
    {
        returnValue = F("Börgerlohne");
        break;
    }
    case 69030:
    {
        returnValue = F("Börgers Wiese");
        break;
    }
    case 69031:
    {
        returnValue = F("Börgershausen");
        break;
    }
    case 69032:
    {
        returnValue = F("Börgerskamp");
        break;
    }
    case 69033:
    {
        returnValue = F("Börgerstr.");
        break;
    }
    case 69034:
    {
        returnValue = F("Börgerwarf");
        break;
    }
    case 69035:
    {
        returnValue = F("Börgesken");
        break;
    }
    case 69036:
    {
        returnValue = F("Börgitzer Dorfstr.");
        break;
    }
    case 69037:
    {
        returnValue = F("Börgitzer Str.");
        break;
    }
    case 69038:
    {
        returnValue = F("Börgmannsweg");
        break;
    }
    case 69039:
    {
        returnValue = F("Börgstee");
        break;
    }
    case 69040:
    {
        returnValue = F("Börgtun");
        break;
    }
    case 69041:
    {
        returnValue = F("Börgtuun");
        break;
    }
    case 69042:
    {
        returnValue = F("Börgweg");
        break;
    }
    case 69043:
    {
        returnValue = F("Börie");
        break;
    }
    case 69044:
    {
        returnValue = F("Böringerstr.");
        break;
    }
    case 69045:
    {
        returnValue = F("Böringkamp");
        break;
    }
    case 69046:
    {
        returnValue = F("Börisriedstr.");
        break;
    }
    case 69047:
    {
        returnValue = F("Börkede");
        break;
    }
    case 69048:
    {
        returnValue = F("Börkel");
        break;
    }
    case 69049:
    {
        returnValue = F("Börker Feld");
        break;
    }
    case 69050:
    {
        returnValue = F("Börkerstieg");
        break;
    }
    case 69051:
    {
        returnValue = F("Börkersweg");
        break;
    }
    case 69052:
    {
        returnValue = F("Börlenbergweg");
        break;
    }
    case 69053:
    {
        returnValue = F("Börlinghausen");
        break;
    }
    case 69054:
    {
        returnValue = F("Börlinghauser Str.");
        break;
    }
    case 69055:
    {
        returnValue = F("Börlingstr.");
        break;
    }
    case 69056:
    {
        returnValue = F("Börlner Str.");
        break;
    }
    case 69057:
    {
        returnValue = F("Börlner Weg");
        break;
    }
    case 69058:
    {
        returnValue = F("Börm");
        break;
    }
    case 69059:
    {
        returnValue = F("Börmer Weg");
        break;
    }
    case 69060:
    {
        returnValue = F("Börmergasse");
        break;
    }
    case 69061:
    {
        returnValue = F("Börmweg");
        break;
    }
    case 69062:
    {
        returnValue = F("Börn");
        break;
    }
    case 69063:
    {
        returnValue = F("Börnbarg");
        break;
    }
    case 69064:
    {
        returnValue = F("Börnchen");
        break;
    }
    case 69065:
    {
        returnValue = F("Börnchener Dorfstr.");
        break;
    }
    case 69066:
    {
        returnValue = F("Börnchener Weg");
        break;
    }
    case 69067:
    {
        returnValue = F("Börnchenstr.");
        break;
    }
    case 69068:
    {
        returnValue = F("Börnchenweg");
        break;
    }
    case 69069:
    {
        returnValue = F("Börncher");
        break;
    }
    case 69070:
    {
        returnValue = F("Börnches Schneise");
        break;
    }
    case 69071:
    {
        returnValue = F("Börnchesgall");
        break;
    }
    case 69072:
    {
        returnValue = F("Börnecke");
        break;
    }
    case 69073:
    {
        returnValue = F("Börnecker Str.");
        break;
    }
    case 69074:
    {
        returnValue = F("Börnelweg");
        break;
    }
    case 69075:
    {
        returnValue = F("Börnersdorf");
        break;
    }
    case 69076:
    {
        returnValue = F("Börnersgrund");
        break;
    }
    case 69077:
    {
        returnValue = F("Börnerweg");
        break;
    }
    case 69078:
    {
        returnValue = F("Börnestr.");
        break;
    }
    case 69079:
    {
        returnValue = F("Börneweg");
        break;
    }
    case 69080:
    {
        returnValue = F("Börnhausener Berg");
        break;
    }
    case 69081:
    {
        returnValue = F("Börnhausener Blick");
        break;
    }
    case 69082:
    {
        returnValue = F("Börnhausener Burg");
        break;
    }
    case 69083:
    {
        returnValue = F("Börnhausener Feld");
        break;
    }
    case 69084:
    {
        returnValue = F("Börnhausener Garten");
        break;
    }
    case 69085:
    {
        returnValue = F("Börnhausener Hof");
        break;
    }
    case 69086:
    {
        returnValue = F("Börnhausener Inken");
        break;
    }
    case 69087:
    {
        returnValue = F("Börnhausener Siefen");
        break;
    }
    case 69088:
    {
        returnValue = F("Börnhausener Tal");
        break;
    }
    case 69089:
    {
        returnValue = F("Börnhausener Wiese");
        break;
    }
    case 69090:
    {
        returnValue = F("Börnichener Str.");
        break;
    }
    case 69091:
    {
        returnValue = F("Börnichtweg");
        break;
    }
    case 69092:
    {
        returnValue = F("Börnicker Str.");
        break;
    }
    case 69093:
    {
        returnValue = F("Börnicker Weg");
        break;
    }
    case 69094:
    {
        returnValue = F("Börnigeweg");
        break;
    }
    case 69095:
    {
        returnValue = F("Börninghauser Weg");
        break;
    }
    case 69096:
    {
        returnValue = F("Börninghorst");
        break;
    }
    case 69097:
    {
        returnValue = F("Börnkamp");
        break;
    }
    case 69098:
    {
        returnValue = F("Börnlein");
        break;
    }
    case 69099:
    {
        returnValue = F("Börns End");
        break;
    }
    case 69100:
    {
        returnValue = F("Börns Kamp");
        break;
    }
    case 69101:
    {
        returnValue = F("Börns Wiek");
        break;
    }
    case 69102:
    {
        returnValue = F("Börnschlag");
        break;
    }
    case 69103:
    {
        returnValue = F("Börnsener Str.");
        break;
    }
    case 69104:
    {
        returnValue = F("Börnsener Weg");
        break;
    }
    case 69105:
    {
        returnValue = F("Börnste");
        break;
    }
    case 69106:
    {
        returnValue = F("Börnsweg");
        break;
    }
    case 69107:
    {
        returnValue = F("Börnungstr.");
        break;
    }
    case 69108:
    {
        returnValue = F("Börrat");
        break;
    }
    case 69109:
    {
        returnValue = F("Börries-von-Münchhausen-Str.");
        break;
    }
    case 69110:
    {
        returnValue = F("Börries-von-Münchhausen-Weg");
        break;
    }
    case 69111:
    {
        returnValue = F("Börringbaumer Weg");
        break;
    }
    case 69112:
    {
        returnValue = F("Börrstadter Weg");
        break;
    }
    case 69113:
    {
        returnValue = F("Börryer Str.");
        break;
    }
    case 69114:
    {
        returnValue = F("Börsborner Str.");
        break;
    }
    case 69115:
    {
        returnValue = F("Börschstr.");
        break;
    }
    case 69116:
    {
        returnValue = F("Börsenbrink");
        break;
    }
    case 69117:
    {
        returnValue = F("Börsengang");
        break;
    }
    case 69118:
    {
        returnValue = F("Börsengasse");
        break;
    }
    case 69119:
    {
        returnValue = F("Börsenstr.");
        break;
    }
    case 69120:
    {
        returnValue = F("Börsenweg");
        break;
    }
    case 69121:
    {
        returnValue = F("Börslage");
        break;
    }
    case 69122:
    {
        returnValue = F("Börslinger Str.");
        break;
    }
    case 69123:
    {
        returnValue = F("Börstedter Str.");
        break;
    }
    case 69124:
    {
        returnValue = F("Börstelkamp");
        break;
    }
    case 69125:
    {
        returnValue = F("Börstelstr.");
        break;
    }
    case 69126:
    {
        returnValue = F("Börsten");
        break;
    }
    case 69127:
    {
        returnValue = F("Börster Grenzweg");
        break;
    }
    case 69128:
    {
        returnValue = F("Börster Hegge");
        break;
    }
    case 69129:
    {
        returnValue = F("Börster Weg");
        break;
    }
    case 69130:
    {
        returnValue = F("Börstinger Str.");
        break;
    }
    case 69131:
    {
        returnValue = F("Börstinghausstr.");
        break;
    }
    case 69132:
    {
        returnValue = F("Börtheidering");
        break;
    }
    case 69133:
    {
        returnValue = F("Börthener Weg");
        break;
    }
    case 69134:
    {
        returnValue = F("Börtlinger Str.");
        break;
    }
    case 69135:
    {
        returnValue = F("Börver Weg");
        break;
    }
    case 69136:
    {
        returnValue = F("Börwanger Rundwanderweg");
        break;
    }
    case 69137:
    {
        returnValue = F("Börwiese");
        break;
    }
    case 69138:
    {
        returnValue = F("Börzel");
        break;
    }
    case 69139:
    {
        returnValue = F("Börßumer Str.");
        break;
    }
    case 69140:
    {
        returnValue = F("Börßum–Wasserleben");
        break;
    }
    case 69141:
    {
        returnValue = F("Bösauer Weg");
        break;
    }
    case 69142:
    {
        returnValue = F("Böschackerweg");
        break;
    }
    case 69143:
    {
        returnValue = F("Böschansweg");
        break;
    }
    case 69144:
    {
        returnValue = F("Böscheburg");
        break;
    }
    case 69145:
    {
        returnValue = F("Böschelsfahrt");
        break;
    }
    case 69146:
    {
        returnValue = F("Böschenfeldweg");
        break;
    }
    case 69147:
    {
        returnValue = F("Böschenmühle");
        break;
    }
    case 69148:
    {
        returnValue = F("Böschenstr.");
        break;
    }
    case 69149:
    {
        returnValue = F("Böschenweg");
        break;
    }
    case 69150:
    {
        returnValue = F("Böscherzenweg");
        break;
    }
    case 69151:
    {
        returnValue = F("Böschgasse");
        break;
    }
    case 69152:
    {
        returnValue = F("Böschstr.");
        break;
    }
    case 69153:
    {
        returnValue = F("Böschweg");
        break;
    }
    case 69154:
    {
        returnValue = F("Bösdellstr.");
        break;
    }
    case 69155:
    {
        returnValue = F("Bösdorfer Drömling");
        break;
    }
    case 69156:
    {
        returnValue = F("Bösdorfer Str.");
        break;
    }
    case 69157:
    {
        returnValue = F("Bösdorfer Weg");
        break;
    }
    case 69158:
    {
        returnValue = F("Böse Fohle");
        break;
    }
    case 69159:
    {
        returnValue = F("Bösebergweg");
        break;
    }
    case 69160:
    {
        returnValue = F("Böseborn");
        break;
    }
    case 69161:
    {
        returnValue = F("Bösebörner");
        break;
    }
    case 69162:
    {
        returnValue = F("Böseckendorfer Str.");
        break;
    }
    case 69163:
    {
        returnValue = F("Böselargerscher Garten");
        break;
    }
    case 69164:
    {
        returnValue = F("Böseler Kirchweg");
        break;
    }
    case 69165:
    {
        returnValue = F("Böseler Str.");
        break;
    }
    case 69166:
    {
        returnValue = F("Bösenbechhofen");
        break;
    }
    case 69167:
    {
        returnValue = F("Bösenberg");
        break;
    }
    case 69168:
    {
        returnValue = F("Bösenbrunner Str.");
        break;
    }
    case 69169:
    {
        returnValue = F("Bösenburger Str.");
        break;
    }
    case 69170:
    {
        returnValue = F("Bösenburger Weg");
        break;
    }
    case 69171:
    {
        returnValue = F("Bösendamm");
        break;
    }
    case 69172:
    {
        returnValue = F("Bösener Weg");
        break;
    }
    case 69173:
    {
        returnValue = F("Bösenhörne");
        break;
    }
    case 69174:
    {
        returnValue = F("Bösenreutiner Steig");
        break;
    }
    case 69175:
    {
        returnValue = F("Bösenröder Weg");
        break;
    }
    case 69176:
    {
        returnValue = F("Böser Berg");
        break;
    }
    case 69177:
    {
        returnValue = F("Böserellbachsträßchen");
        break;
    }
    case 69178:
    {
        returnValue = F("Böserscheidegg");
        break;
    }
    case 69179:
    {
        returnValue = F("Bösewetterweg");
        break;
    }
    case 69180:
    {
        returnValue = F("Bösewig");
        break;
    }
    case 69181:
    {
        returnValue = F("Bösgrunder Weg");
        break;
    }
    case 69182:
    {
        returnValue = F("Bösinger Steige");
        break;
    }
    case 69183:
    {
        returnValue = F("Bösinger Str.");
        break;
    }
    case 69184:
    {
        returnValue = F("Bösingfelder Str.");
        break;
    }
    case 69185:
    {
        returnValue = F("Bösinghausen");
        break;
    }
    case 69186:
    {
        returnValue = F("Bösinghovener Str.");
        break;
    }
    case 69187:
    {
        returnValue = F("Bösinghäuser Weg");
        break;
    }
    case 69188:
    {
        returnValue = F("Bösings Kamp");
        break;
    }
    case 69189:
    {
        returnValue = F("Böskers Damm");
        break;
    }
    case 69190:
    {
        returnValue = F("Bösmattenweg");
        break;
    }
    case 69191:
    {
        returnValue = F("Bösseberg");
        break;
    }
    case 69192:
    {
        returnValue = F("Bössel");
        break;
    }
    case 69193:
    {
        returnValue = F("Bösselbach");
        break;
    }
    case 69194:
    {
        returnValue = F("Bösselhausen");
        break;
    }
    case 69195:
    {
        returnValue = F("Bösselhauser Weg");
        break;
    }
    case 69196:
    {
        returnValue = F("Bössingerstr.");
        break;
    }
    case 69197:
    {
        returnValue = F("Böstens Hoi");
        break;
    }
    case 69198:
    {
        returnValue = F("Bösterredder");
        break;
    }
    case 69199:
    {
        returnValue = F("Böstlinger Str.");
        break;
    }
    case 69200:
    {
        returnValue = F("Bösweg");
        break;
    }
    case 69201:
    {
        returnValue = F("Böswiesenstr.");
        break;
    }
    case 69202:
    {
        returnValue = F("Böswiesenweg");
        break;
    }
    case 69203:
    {
        returnValue = F("Böswipper");
        break;
    }
    case 69204:
    {
        returnValue = F("Bötels");
        break;
    }
    case 69205:
    {
        returnValue = F("Bötelstieg");
        break;
    }
    case 69206:
    {
        returnValue = F("Bötelsweg");
        break;
    }
    case 69207:
    {
        returnValue = F("Bötenberger Heerstr.");
        break;
    }
    case 69208:
    {
        returnValue = F("Bötenberger Str.");
        break;
    }
    case 69209:
    {
        returnValue = F("Böternhöfen");
        break;
    }
    case 69210:
    {
        returnValue = F("Bötersheimer Weg");
        break;
    }
    case 69211:
    {
        returnValue = F("Bötersteg");
        break;
    }
    case 69212:
    {
        returnValue = F("Böterstr.");
        break;
    }
    case 69213:
    {
        returnValue = F("Bötheler Str.");
        break;
    }
    case 69214:
    {
        returnValue = F("Bötheler Weg");
        break;
    }
    case 69215:
    {
        returnValue = F("Bötjer-Basch-Weg");
        break;
    }
    case 69216:
    {
        returnValue = F("Böttche");
        break;
    }
    case 69217:
    {
        returnValue = F("Böttcherei");
        break;
    }
    case 69218:
    {
        returnValue = F("Böttchergasse");
        break;
    }
    case 69219:
    {
        returnValue = F("Böttchergäßchen");
        break;
    }
    case 69220:
    {
        returnValue = F("Böttcherhof");
        break;
    }
    case 69221:
    {
        returnValue = F("Böttcherkuhle");
        break;
    }
    case 69222:
    {
        returnValue = F("Böttcherring");
        break;
    }
    case 69223:
    {
        returnValue = F("Böttchersteg");
        break;
    }
    case 69224:
    {
        returnValue = F("Böttcherstiege");
        break;
    }
    case 69225:
    {
        returnValue = F("Böttcherstr.");
        break;
    }
    case 69226:
    {
        returnValue = F("Böttcherweg");
        break;
    }
    case 69227:
    {
        returnValue = F("Böttcherwinkel");
        break;
    }
    case 69228:
    {
        returnValue = F("Böttentalstr.");
        break;
    }
    case 69229:
    {
        returnValue = F("Böttgekampweg");
        break;
    }
    case 69230:
    {
        returnValue = F("Böttgerberg");
        break;
    }
    case 69231:
    {
        returnValue = F("Böttgerstr.");
        break;
    }
    case 69232:
    {
        returnValue = F("Böttgerweg");
        break;
    }
    case 69233:
    {
        returnValue = F("Böttichenstein");
        break;
    }
    case 69234:
    {
        returnValue = F("Bötticherstr.");
        break;
    }
    case 69235:
    {
        returnValue = F("Böttigerpromenade");
        break;
    }
    case 69236:
    {
        returnValue = F("Böttigersteig");
        break;
    }
    case 69237:
    {
        returnValue = F("Böttigheimer Str.");
        break;
    }
    case 69238:
    {
        returnValue = F("Böttinger Steig");
        break;
    }
    case 69239:
    {
        returnValue = F("Böttinger Str.");
        break;
    }
    case 69240:
    {
        returnValue = F("Böttinger Weg");
        break;
    }
    case 69241:
    {
        returnValue = F("Böttingerstr.");
        break;
    }
    case 69242:
    {
        returnValue = F("Böttingerweg");
        break;
    }
    case 69243:
    {
        returnValue = F("Böttjerstraat");
        break;
    }
    case 69244:
    {
        returnValue = F("Böttler Mühle");
        break;
    }
    case 69245:
    {
        returnValue = F("Böttnerstr.");
        break;
    }
    case 69246:
    {
        returnValue = F("Bötzbergstr.");
        break;
    }
    case 69247:
    {
        returnValue = F("Bötzbergweg");
        break;
    }
    case 69248:
    {
        returnValue = F("Bötzener Str.");
        break;
    }
    case 69249:
    {
        returnValue = F("Bötzener Weg");
        break;
    }
    case 69250:
    {
        returnValue = F("Bötzenstr.");
        break;
    }
    case 69251:
    {
        returnValue = F("Bötzinger Str.");
        break;
    }
    case 69252:
    {
        returnValue = F("Bötzkamper Weg");
        break;
    }
    case 69253:
    {
        returnValue = F("Bötzower Landstr.");
        break;
    }
    case 69254:
    {
        returnValue = F("Bötzower Platz");
        break;
    }
    case 69255:
    {
        returnValue = F("Bötzower Stadtgraben");
        break;
    }
    case 69256:
    {
        returnValue = F("Bötzower Str.");
        break;
    }
    case 69257:
    {
        returnValue = F("Bötzower Weg");
        break;
    }
    case 69258:
    {
        returnValue = F("Bötzowstr.");
        break;
    }
    case 69259:
    {
        returnValue = F("Bötzseestr.");
        break;
    }
    case 69260:
    {
        returnValue = F("Bötzweg");
        break;
    }
    case 69261:
    {
        returnValue = F("Bötzwischer Weg");
        break;
    }
    case 69262:
    {
        returnValue = F("Bövelstredder");
        break;
    }
    case 69263:
    {
        returnValue = F("Bövemannstr.");
        break;
    }
    case 69264:
    {
        returnValue = F("Böver Weg");
        break;
    }
    case 69265:
    {
        returnValue = F("Bövergeest");
        break;
    }
    case 69266:
    {
        returnValue = F("Böverst Dörpstraat");
        break;
    }
    case 69267:
    {
        returnValue = F("Böverstwischenweg");
        break;
    }
    case 69268:
    {
        returnValue = F("Bövingen");
        break;
    }
    case 69269:
    {
        returnValue = F("Böwerfeld");
        break;
    }
    case 69270:
    {
        returnValue = F("Böwerweg");
        break;
    }
    case 69271:
    {
        returnValue = F("Böwingkamp");
        break;
    }
    case 69272:
    {
        returnValue = F("Böwingring");
        break;
    }
    case 69273:
    {
        returnValue = F("Böwings Stegge");
        break;
    }
    case 69274:
    {
        returnValue = F("Bößeneckerstr.");
        break;
    }
    case 69275:
    {
        returnValue = F("Böökenstieg");
        break;
    }
    case 69276:
    {
        returnValue = F("Böösweg");
        break;
    }
    case 69277:
    {
        returnValue = F("Böötzweg");
        break;
    }
    case 69278:
    {
        returnValue = F("Bübbenser Weg");
        break;
    }
    case 69279:
    {
        returnValue = F("Bübinger Str.");
        break;
    }
    case 69280:
    {
        returnValue = F("Büblehofweg");
        break;
    }
    case 69281:
    {
        returnValue = F("Büblinger Str.");
        break;
    }
    case 69282:
    {
        returnValue = F("Büburgstr.");
        break;
    }
    case 69283:
    {
        returnValue = F("Büchach");
        break;
    }
    case 69284:
    {
        returnValue = F("Büchel");
        break;
    }
    case 69285:
    {
        returnValue = F("Büchel-Eck");
        break;
    }
    case 69286:
    {
        returnValue = F("Büchelbach");
        break;
    }
    case 69287:
    {
        returnValue = F("Büchelbachstr.");
        break;
    }
    case 69288:
    {
        returnValue = F("Büchelberger Str.");
        break;
    }
    case 69289:
    {
        returnValue = F("Büchelberger Weg");
        break;
    }
    case 69290:
    {
        returnValue = F("Büchelbergstr.");
        break;
    }
    case 69291:
    {
        returnValue = F("Büchelbergweg");
        break;
    }
    case 69292:
    {
        returnValue = F("Büchelbronn");
        break;
    }
    case 69293:
    {
        returnValue = F("Büchelbronner Weg");
        break;
    }
    case 69294:
    {
        returnValue = F("Büchele Bruder Weg");
        break;
    }
    case 69295:
    {
        returnValue = F("Bücheler Str.");
        break;
    }
    case 69296:
    {
        returnValue = F("Bücheler Weg");
        break;
    }
    case 69297:
    {
        returnValue = F("Büchelesbrunnen-Weg");
        break;
    }
    case 69298:
    {
        returnValue = F("Büchelesbrunnenweg");
        break;
    }
    case 69299:
    {
        returnValue = F("Büchelewiesweg");
        break;
    }
    case 69300:
    {
        returnValue = F("Büchelfeldstr.");
        break;
    }
    case 69301:
    {
        returnValue = F("Büchelhalde");
        break;
    }
    case 69302:
    {
        returnValue = F("Büchelinweg");
        break;
    }
    case 69303:
    {
        returnValue = F("Büchelkühner Str.");
        break;
    }
    case 69304:
    {
        returnValue = F("Büchelmannstr.");
        break;
    }
    case 69305:
    {
        returnValue = F("Bücheloher Str.");
        break;
    }
    case 69306:
    {
        returnValue = F("Büchelsgasse");
        break;
    }
    case 69307:
    {
        returnValue = F("Büchelshof");
        break;
    }
    case 69308:
    {
        returnValue = F("Büchelsteiner Str.");
        break;
    }
    case 69309:
    {
        returnValue = F("Büchelsteiner Weg");
        break;
    }
    case 69310:
    {
        returnValue = F("Büchelsteinerstr.");
        break;
    }
    case 69311:
    {
        returnValue = F("Büchelstr.");
        break;
    }
    case 69312:
    {
        returnValue = F("Büchelweg");
        break;
    }
    case 69313:
    {
        returnValue = F("Bücheläcker");
        break;
    }
    case 69314:
    {
        returnValue = F("Büchen");
        break;
    }
    case 69315:
    {
        returnValue = F("Büchenauer Hardt");
        break;
    }
    case 69316:
    {
        returnValue = F("Büchenauer Str.");
        break;
    }
    case 69317:
    {
        returnValue = F("Büchenbacher Str.");
        break;
    }
    case 69318:
    {
        returnValue = F("Büchenbacher Weg");
        break;
    }
    case 69319:
    {
        returnValue = F("Büchenberg");
        break;
    }
    case 69320:
    {
        returnValue = F("Büchenberger Str.");
        break;
    }
    case 69321:
    {
        returnValue = F("Büchenbergstr.");
        break;
    }
    case 69322:
    {
        returnValue = F("Büchenbeurener Str.");
        break;
    }
    case 69323:
    {
        returnValue = F("Büchenbronner Str.");
        break;
    }
    case 69324:
    {
        returnValue = F("Büchener Landstr.");
        break;
    }
    case 69325:
    {
        returnValue = F("Büchener Str.");
        break;
    }
    case 69326:
    {
        returnValue = F("Büchener Weg");
        break;
    }
    case 69327:
    {
        returnValue = F("Büchenhofweg");
        break;
    }
    case 69328:
    {
        returnValue = F("Büchenhöfe");
        break;
    }
    case 69329:
    {
        returnValue = F("Büchenkamp");
        break;
    }
    case 69330:
    {
        returnValue = F("Büchenlachschneise");
        break;
    }
    case 69331:
    {
        returnValue = F("Büchenstirn");
        break;
    }
    case 69332:
    {
        returnValue = F("Büchenstockweg");
        break;
    }
    case 69333:
    {
        returnValue = F("Büchenstr.");
        break;
    }
    case 69334:
    {
        returnValue = F("Büchenweg");
        break;
    }
    case 69335:
    {
        returnValue = F("Büchenwerraer Str.");
        break;
    }
    case 69336:
    {
        returnValue = F("Bücher Str.");
        break;
    }
    case 69337:
    {
        returnValue = F("Bücherlstr.");
        break;
    }
    case 69338:
    {
        returnValue = F("Büchern");
        break;
    }
    case 69339:
    {
        returnValue = F("Bücherneckweg");
        break;
    }
    case 69340:
    {
        returnValue = F("Bücherott");
        break;
    }
    case 69341:
    {
        returnValue = F("Büchertalstr.");
        break;
    }
    case 69342:
    {
        returnValue = F("Büchertstr.");
        break;
    }
    case 69343:
    {
        returnValue = F("Büchertweg");
        break;
    }
    case 69344:
    {
        returnValue = F("Bücherweg");
        break;
    }
    case 69345:
    {
        returnValue = F("Bücheser Str.");
        break;
    }
    case 69346:
    {
        returnValue = F("Büchestr.");
        break;
    }
    case 69347:
    {
        returnValue = F("Büchetweg");
        break;
    }
    case 69348:
    {
        returnValue = F("Büchig-Weg");
        break;
    }
    case 69349:
    {
        returnValue = F("Büchiger Str.");
        break;
    }
    case 69350:
    {
        returnValue = F("Büchiger Weg");
        break;
    }
    case 69351:
    {
        returnValue = F("Büchigstr.");
        break;
    }
    case 69352:
    {
        returnValue = F("Büchigweg");
        break;
    }
    case 69353:
    {
        returnValue = F("Büchl");
        break;
    }
    case 69354:
    {
        returnValue = F("Büchlberger Str.");
        break;
    }
    case 69355:
    {
        returnValue = F("Büchlehauweg");
        break;
    }
    case 69356:
    {
        returnValue = F("Büchleiner Str.");
        break;
    }
    case 69357:
    {
        returnValue = F("Büchlerhausen");
        break;
    }
    case 69358:
    {
        returnValue = F("Büchlerstr.");
        break;
    }
    case 69359:
    {
        returnValue = F("Büchlesweg");
        break;
    }
    case 69360:
    {
        returnValue = F("Büchleweg");
        break;
    }
    case 69361:
    {
        returnValue = F("Büchlfeld");
        break;
    }
    case 69362:
    {
        returnValue = F("Büchlhof");
        break;
    }
    case 69363:
    {
        returnValue = F("Büchlring");
        break;
    }
    case 69364:
    {
        returnValue = F("Büchlsteinstr.");
        break;
    }
    case 69365:
    {
        returnValue = F("Büchlstr.");
        break;
    }
    case 69366:
    {
        returnValue = F("Büchlweg");
        break;
    }
    case 69367:
    {
        returnValue = F("Büchner Weg");
        break;
    }
    case 69368:
    {
        returnValue = F("Büchnerpark");
        break;
    }
    case 69369:
    {
        returnValue = F("Büchnerplatz");
        break;
    }
    case 69370:
    {
        returnValue = F("Büchnerstr.");
        break;
    }
    case 69371:
    {
        returnValue = F("Büchnerweg");
        break;
    }
    case 69372:
    {
        returnValue = F("Bücholder Kreuzstr.");
        break;
    }
    case 69373:
    {
        returnValue = F("Bücholder Str.");
        break;
    }
    case 69374:
    {
        returnValue = F("Bücholder Weg");
        break;
    }
    case 69375:
    {
        returnValue = F("Büchsenmachergasse");
        break;
    }
    case 69376:
    {
        returnValue = F("Büchsenstr.");
        break;
    }
    case 69377:
    {
        returnValue = F("Büchtemannstr.");
        break;
    }
    case 69378:
    {
        returnValue = F("Büchtener Hauptstr.");
        break;
    }
    case 69379:
    {
        returnValue = F("Büchtener Mühlenweg");
        break;
    }
    case 69380:
    {
        returnValue = F("Büchters Kamp");
        break;
    }
    case 69381:
    {
        returnValue = F("Büchtingenstr.");
        break;
    }
    case 69382:
    {
        returnValue = F("Büchtingstr.");
        break;
    }
    case 69383:
    {
        returnValue = F("Bückberg");
        break;
    }
    case 69384:
    {
        returnValue = F("Bückeberg");
        break;
    }
    case 69385:
    {
        returnValue = F("Bückebergsgrund");
        break;
    }
    case 69386:
    {
        returnValue = F("Bückebergstr.");
        break;
    }
    case 69387:
    {
        returnValue = F("Bückebergweg");
        break;
    }
    case 69388:
    {
        returnValue = F("Bückeburger Str.");
        break;
    }
    case 69389:
    {
        returnValue = F("Bückeburger Weg");
        break;
    }
    case 69390:
    {
        returnValue = F("Bückele");
        break;
    }
    case 69391:
    {
        returnValue = F("Bückelfirstweg");
        break;
    }
    case 69392:
    {
        returnValue = F("Bückelhaube");
        break;
    }
    case 69393:
    {
        returnValue = F("Bückelter Feld");
        break;
    }
    case 69394:
    {
        returnValue = F("Bückelweg");
        break;
    }
    case 69395:
    {
        returnValue = F("Bücken");
        break;
    }
    case 69396:
    {
        returnValue = F("Bückener Weg");
        break;
    }
    case 69397:
    {
        returnValue = F("Bücker Str.");
        break;
    }
    case 69398:
    {
        returnValue = F("Bückers Kamp");
        break;
    }
    case 69399:
    {
        returnValue = F("Bückersdyk");
        break;
    }
    case 69400:
    {
        returnValue = F("Bückerstr.");
        break;
    }
    case 69401:
    {
        returnValue = F("Bückethaler Str.");
        break;
    }
    case 69402:
    {
        returnValue = F("Bückingstr.");
        break;
    }
    case 69403:
    {
        returnValue = F("Bücklebodenweg");
        break;
    }
    case 69404:
    {
        returnValue = F("Bücklensweilerweg");
        break;
    }
    case 69405:
    {
        returnValue = F("Bücklersstr.");
        break;
    }
    case 69406:
    {
        returnValue = F("Bücklestr.");
        break;
    }
    case 69407:
    {
        returnValue = F("Bückleweg");
        break;
    }
    case 69408:
    {
        returnValue = F("Bücklingsmühle");
        break;
    }
    case 69409:
    {
        returnValue = F("Bücklingsweg");
        break;
    }
    case 69410:
    {
        returnValue = F("Bückmannweg");
        break;
    }
    case 69411:
    {
        returnValue = F("Bücknitzer Str.");
        break;
    }
    case 69412:
    {
        returnValue = F("Bückwitz-Ausbau");
        break;
    }
    case 69413:
    {
        returnValue = F("Bückwitzer Str.");
        break;
    }
    case 69414:
    {
        returnValue = F("Büddelhagen");
        break;
    }
    case 69415:
    {
        returnValue = F("Büddenberg");
        break;
    }
    case 69416:
    {
        returnValue = F("Büddenmoorweg");
        break;
    }
    case 69417:
    {
        returnValue = F("Büddenstedter Str.");
        break;
    }
    case 69418:
    {
        returnValue = F("Büddenstedter Weg");
        break;
    }
    case 69419:
    {
        returnValue = F("Büdelsdorfer Str.");
        break;
    }
    case 69420:
    {
        returnValue = F("Büdenbachweg");
        break;
    }
    case 69421:
    {
        returnValue = F("Büdener Weg");
        break;
    }
    case 69422:
    {
        returnValue = F("Büdenholzer Str.");
        break;
    }
    case 69423:
    {
        returnValue = F("Büdericher Allee");
        break;
    }
    case 69424:
    {
        returnValue = F("Büdericher Str.");
        break;
    }
    case 69425:
    {
        returnValue = F("Büdesheimer Str.");
        break;
    }
    case 69426:
    {
        returnValue = F("Büdesheimer Weg");
        break;
    }
    case 69427:
    {
        returnValue = F("Büdinger Str.");
        break;
    }
    case 69428:
    {
        returnValue = F("Büdinger Weg");
        break;
    }
    case 69429:
    {
        returnValue = F("Büdner Weg");
        break;
    }
    case 69430:
    {
        returnValue = F("Büdnerberg");
        break;
    }
    case 69431:
    {
        returnValue = F("Büdnerdamm");
        break;
    }
    case 69432:
    {
        returnValue = F("Büdnerecke");
        break;
    }
    case 69433:
    {
        returnValue = F("Büdnerei");
        break;
    }
    case 69434:
    {
        returnValue = F("Büdnereiweg");
        break;
    }
    case 69435:
    {
        returnValue = F("Büdnerfeld (Zum Semmelberg)");
        break;
    }
    case 69436:
    {
        returnValue = F("Büdnerreihe");
        break;
    }
    case 69437:
    {
        returnValue = F("Büdnerring");
        break;
    }
    case 69438:
    {
        returnValue = F("Büdnerstr.");
        break;
    }
    case 69439:
    {
        returnValue = F("Büdnerweg");
        break;
    }
    case 69440:
    {
        returnValue = F("Büfangweg");
        break;
    }
    case 69441:
    {
        returnValue = F("Büffelgang");
        break;
    }
    case 69442:
    {
        returnValue = F("Büffelpfad");
        break;
    }
    case 69443:
    {
        returnValue = F("Bügel");
        break;
    }
    case 69444:
    {
        returnValue = F("Bügelestorstr.");
        break;
    }
    case 69445:
    {
        returnValue = F("Bügelkamp");
        break;
    }
    case 69446:
    {
        returnValue = F("Bügellohweg");
        break;
    }
    case 69447:
    {
        returnValue = F("Bügelrainstr.");
        break;
    }
    case 69448:
    {
        returnValue = F("Bügelstr.");
        break;
    }
    case 69449:
    {
        returnValue = F("Bügelweg");
        break;
    }
    case 69450:
    {
        returnValue = F("Bügenstegener Weg");
        break;
    }
    case 69451:
    {
        returnValue = F("Bügerl");
        break;
    }
    case 69452:
    {
        returnValue = F("Bügerlweg");
        break;
    }
    case 69453:
    {
        returnValue = F("Bügermeister-Stegmann-Str.");
        break;
    }
    case 69454:
    {
        returnValue = F("Büglerin");
        break;
    }
    case 69455:
    {
        returnValue = F("Büglweg");
        break;
    }
    case 69456:
    {
        returnValue = F("Bügstr.");
        break;
    }
    case 69457:
    {
        returnValue = F("Bühelweg");
        break;
    }
    case 69458:
    {
        returnValue = F("Bühenkamp");
        break;
    }
    case 69459:
    {
        returnValue = F("Bühl");
        break;
    }
    case 69460:
    {
        returnValue = F("Bühlach");
        break;
    }
    case 69461:
    {
        returnValue = F("Bühlachstr.");
        break;
    }
    case 69462:
    {
        returnValue = F("Bühlackerstr.");
        break;
    }
    case 69463:
    {
        returnValue = F("Bühlallee");
        break;
    }
    case 69464:
    {
        returnValue = F("Bühlangerstr.");
        break;
    }
    case 69465:
    {
        returnValue = F("Bühlbachweg");
        break;
    }
    case 69466:
    {
        returnValue = F("Bühlberg");
        break;
    }
    case 69467:
    {
        returnValue = F("Bühlbergstr.");
        break;
    }
    case 69468:
    {
        returnValue = F("Bühlecker Weg");
        break;
    }
    case 69469:
    {
        returnValue = F("Bühleichenweg");
        break;
    }
    case 69470:
    {
        returnValue = F("Bühlen");
        break;
    }
    case 69471:
    {
        returnValue = F("Bühlengasse");
        break;
    }
    case 69472:
    {
        returnValue = F("Bühlensteinstr.");
        break;
    }
    case 69473:
    {
        returnValue = F("Bühlenstr.");
        break;
    }
    case 69474:
    {
        returnValue = F("Bühler Blick");
        break;
    }
    case 69475:
    {
        returnValue = F("Bühler Feldweg");
        break;
    }
    case 69476:
    {
        returnValue = F("Bühler Graben");
        break;
    }
    case 69477:
    {
        returnValue = F("Bühler Höhe");
        break;
    }
    case 69478:
    {
        returnValue = F("Bühler Höhen");
        break;
    }
    case 69479:
    {
        returnValue = F("Bühler Lochmühle");
        break;
    }
    case 69480:
    {
        returnValue = F("Bühler Ring");
        break;
    }
    case 69481:
    {
        returnValue = F("Bühler Staige");
        break;
    }
    case 69482:
    {
        returnValue = F("Bühler Stege");
        break;
    }
    case 69483:
    {
        returnValue = F("Bühler Stoadtweg");
        break;
    }
    case 69484:
    {
        returnValue = F("Bühler Str.");
        break;
    }
    case 69485:
    {
        returnValue = F("Bühler Tal");
        break;
    }
    case 69486:
    {
        returnValue = F("Bühler Weg");
        break;
    }
    case 69487:
    {
        returnValue = F("Bühler Äcker");
        break;
    }
    case 69488:
    {
        returnValue = F("Bühlerfeldstr.");
        break;
    }
    case 69489:
    {
        returnValue = F("Bühlergasse");
        break;
    }
    case 69490:
    {
        returnValue = F("Bühlerhof");
        break;
    }
    case 69491:
    {
        returnValue = F("Bühlerhöh");
        break;
    }
    case 69492:
    {
        returnValue = F("Bühlerhöhe");
        break;
    }
    case 69493:
    {
        returnValue = F("Bühlersteich");
        break;
    }
    case 69494:
    {
        returnValue = F("Bühlerstr.");
        break;
    }
    case 69495:
    {
        returnValue = F("Bühlersweg");
        break;
    }
    case 69496:
    {
        returnValue = F("Bühlertalstr.");
        break;
    }
    case 69497:
    {
        returnValue = F("Bühlertälerweg");
        break;
    }
    case 69498:
    {
        returnValue = F("Bühlerweg");
        break;
    }
    case 69499:
    {
        returnValue = F("Bühlerwiese");
        break;
    }
    case 69500:
    {
        returnValue = F("Bühlerzeller Str.");
        break;
    }
    case 69501:
    {
        returnValue = F("Bühlerzimmern");
        break;
    }
    case 69502:
    {
        returnValue = F("Bühleschweg");
        break;
    }
    case 69503:
    {
        returnValue = F("Bühlestr.");
        break;
    }
    case 69504:
    {
        returnValue = F("Bühlfelderweg");
        break;
    }
    case 69505:
    {
        returnValue = F("Bühlfeldstr.");
        break;
    }
    case 69506:
    {
        returnValue = F("Bühlfelsenweg");
        break;
    }
    case 69507:
    {
        returnValue = F("Bühlgarten");
        break;
    }
    case 69508:
    {
        returnValue = F("Bühlgartenweg");
        break;
    }
    case 69509:
    {
        returnValue = F("Bühlgasse");
        break;
    }
    case 69510:
    {
        returnValue = F("Bühlgärten");
        break;
    }
    case 69511:
    {
        returnValue = F("Bühlhaldenstr.");
        break;
    }
    case 69512:
    {
        returnValue = F("Bühlhartstr.");
        break;
    }
    case 69513:
    {
        returnValue = F("Bühlhau-Weg");
        break;
    }
    case 69514:
    {
        returnValue = F("Bühlhof");
        break;
    }
    case 69515:
    {
        returnValue = F("Bühlhofer Str.");
        break;
    }
    case 69516:
    {
        returnValue = F("Bühlhofer Weg");
        break;
    }
    case 69517:
    {
        returnValue = F("Bühlhofstr.");
        break;
    }
    case 69518:
    {
        returnValue = F("Bühlhofweg");
        break;
    }
    case 69519:
    {
        returnValue = F("Bühlholz");
        break;
    }
    case 69520:
    {
        returnValue = F("Bühlhöfe");
        break;
    }
    case 69521:
    {
        returnValue = F("Bühlkamp");
        break;
    }
    case 69522:
    {
        returnValue = F("Bühllauchweg");
        break;
    }
    case 69523:
    {
        returnValue = F("Bühlmatte");
        break;
    }
    case 69524:
    {
        returnValue = F("Bühlmattstr.");
        break;
    }
    case 69525:
    {
        returnValue = F("Bühlmattweg");
        break;
    }
    case 69526:
    {
        returnValue = F("Bühlmättle");
        break;
    }
    case 69527:
    {
        returnValue = F("Bühlohweg");
        break;
    }
    case 69528:
    {
        returnValue = F("Bühlower Str.");
        break;
    }
    case 69529:
    {
        returnValue = F("Bühlower Weg");
        break;
    }
    case 69530:
    {
        returnValue = F("Bühlrain");
        break;
    }
    case 69531:
    {
        returnValue = F("Bühlrech");
        break;
    }
    case 69532:
    {
        returnValue = F("Bühlring");
        break;
    }
    case 69533:
    {
        returnValue = F("Bühlsand");
        break;
    }
    case 69534:
    {
        returnValue = F("Bühlsteig");
        break;
    }
    case 69535:
    {
        returnValue = F("Bühlsteige");
        break;
    }
    case 69536:
    {
        returnValue = F("Bühlstr.");
        break;
    }
    case 69537:
    {
        returnValue = F("Bühlstr. 30/1 - 20");
        break;
    }
    case 69538:
    {
        returnValue = F("Bühlsträßle");
        break;
    }
    case 69539:
    {
        returnValue = F("Bühlteile");
        break;
    }
    case 69540:
    {
        returnValue = F("Bühlwaldstr.");
        break;
    }
    case 69541:
    {
        returnValue = F("Bühlwaldweg");
        break;
    }
    case 69542:
    {
        returnValue = F("Bühlweg");
        break;
    }
    case 69543:
    {
        returnValue = F("Bühlweiler");
        break;
    }
    case 69544:
    {
        returnValue = F("Bühlweite");
        break;
    }
    case 69545:
    {
        returnValue = F("Bühlwiese");
        break;
    }
    case 69546:
    {
        returnValue = F("Bühlwiesenstr.");
        break;
    }
    case 69547:
    {
        returnValue = F("Bühlwiesenweg");
        break;
    }
    case 69548:
    {
        returnValue = F("Bühläcker");
        break;
    }
    case 69549:
    {
        returnValue = F("Bühläckerstr.");
        break;
    }
    case 69550:
    {
        returnValue = F("Bühläckersweg");
        break;
    }
    case 69551:
    {
        returnValue = F("Bühläckerweg");
        break;
    }
    case 69552:
    {
        returnValue = F("Bühlöschweg");
        break;
    }
    case 69553:
    {
        returnValue = F("Bühne");
        break;
    }
    case 69554:
    {
        returnValue = F("Bühnendorf");
        break;
    }
    case 69555:
    {
        returnValue = F("Bühnenstr.");
        break;
    }
    case 69556:
    {
        returnValue = F("Bühnenweg");
        break;
    }
    case 69557:
    {
        returnValue = F("Bühner Str.");
        break;
    }
    case 69558:
    {
        returnValue = F("Bühner Weg");
        break;
    }
    case 69559:
    {
        returnValue = F("Bühnerstr.");
        break;
    }
    case 69560:
    {
        returnValue = F("Bühnstegenweg");
        break;
    }
    case 69561:
    {
        returnValue = F("Bühnweg");
        break;
    }
    case 69562:
    {
        returnValue = F("Bühnäckerstr.");
        break;
    }
    case 69563:
    {
        returnValue = F("Bühren");
        break;
    }
    case 69564:
    {
        returnValue = F("Bührener Kirchweg");
        break;
    }
    case 69565:
    {
        returnValue = F("Bührener Ring");
        break;
    }
    case 69566:
    {
        returnValue = F("Bührener Steg");
        break;
    }
    case 69567:
    {
        returnValue = F("Bührener Str.");
        break;
    }
    case 69568:
    {
        returnValue = F("Bührener Weg");
        break;
    }
    case 69569:
    {
        returnValue = F("Bührener-Kanal-Weg");
        break;
    }
    case 69570:
    {
        returnValue = F("Bührigshof");
        break;
    }
    case 69571:
    {
        returnValue = F("Bühringer Str.");
        break;
    }
    case 69572:
    {
        returnValue = F("Bühringerstr.");
        break;
    }
    case 69573:
    {
        returnValue = F("Bühringsmoor");
        break;
    }
    case 69574:
    {
        returnValue = F("Bührlweg");
        break;
    }
    case 69575:
    {
        returnValue = F("Bühweg");
        break;
    }
    case 69576:
    {
        returnValue = F("Bükerfeldstr.");
        break;
    }
    case 69577:
    {
        returnValue = F("Bükersberg");
        break;
    }
    case 69578:
    {
        returnValue = F("Bükerstr.");
        break;
    }
    case 69579:
    {
        returnValue = F("Büksweg");
        break;
    }
    case 69580:
    {
        returnValue = F("Bülaustr.");
        break;
    }
    case 69581:
    {
        returnValue = F("Bülberg");
        break;
    }
    case 69582:
    {
        returnValue = F("Bülbringer Str.");
        break;
    }
    case 69583:
    {
        returnValue = F("Büldersweg");
        break;
    }
    case 69584:
    {
        returnValue = F("Bülitz");
        break;
    }
    case 69585:
    {
        returnValue = F("Bülker Weg");
        break;
    }
    case 69586:
    {
        returnValue = F("Büllenstr.");
        break;
    }
    case 69587:
    {
        returnValue = F("Büllerberg");
        break;
    }
    case 69588:
    {
        returnValue = F("Büllersweg");
        break;
    }
    case 69589:
    {
        returnValue = F("Büllerweg");
        break;
    }
    case 69590:
    {
        returnValue = F("Büllesheimer Str.");
        break;
    }
    case 69591:
    {
        returnValue = F("Büllhorner Weg");
        break;
    }
    case 69592:
    {
        returnValue = F("Büllhorstweg");
        break;
    }
    case 69593:
    {
        returnValue = F("Büllinghausen");
        break;
    }
    case 69594:
    {
        returnValue = F("Büllinghäuser Weg");
        break;
    }
    case 69595:
    {
        returnValue = F("Büllsbüll");
        break;
    }
    case 69596:
    {
        returnValue = F("Büllsbüller Chaussee");
        break;
    }
    case 69597:
    {
        returnValue = F("Bülowallee");
        break;
    }
    case 69598:
    {
        returnValue = F("Bülower Kamp");
        break;
    }
    case 69599:
    {
        returnValue = F("Bülower Str.");
        break;
    }
    case 69600:
    {
        returnValue = F("Bülower Weg");
        break;
    }
    case 69601:
    {
        returnValue = F("Bülowssieger Weg");
        break;
    }
    case 69602:
    {
        returnValue = F("Bülowstr.");
        break;
    }
    case 69603:
    {
        returnValue = F("Bülsberger Höhe");
        break;
    }
    case 69604:
    {
        returnValue = F("Bülsberger Weg");
        break;
    }
    case 69605:
    {
        returnValue = F("Bülsenberg");
        break;
    }
    case 69606:
    {
        returnValue = F("Bülsenstr.");
        break;
    }
    case 69607:
    {
        returnValue = F("Bülstedter Str.");
        break;
    }
    case 69608:
    {
        returnValue = F("Bülstr.");
        break;
    }
    case 69609:
    {
        returnValue = F("Bülstringer Str.");
        break;
    }
    case 69610:
    {
        returnValue = F("Bülstringer Weg");
        break;
    }
    case 69611:
    {
        returnValue = F("Bült");
        break;
    }
    case 69612:
    {
        returnValue = F("Bültbek");
        break;
    }
    case 69613:
    {
        returnValue = F("Bülte");
        break;
    }
    case 69614:
    {
        returnValue = F("Bülten");
        break;
    }
    case 69615:
    {
        returnValue = F("Bültendiek");
        break;
    }
    case 69616:
    {
        returnValue = F("Bültener Str.");
        break;
    }
    case 69617:
    {
        returnValue = F("Bültener Weg");
        break;
    }
    case 69618:
    {
        returnValue = F("Bültenjang");
        break;
    }
    case 69619:
    {
        returnValue = F("Bültenkamp");
        break;
    }
    case 69620:
    {
        returnValue = F("Bültenmoor");
        break;
    }
    case 69621:
    {
        returnValue = F("Bültenstieg");
        break;
    }
    case 69622:
    {
        returnValue = F("Bültenstr.");
        break;
    }
    case 69623:
    {
        returnValue = F("Bültenweg");
        break;
    }
    case 69624:
    {
        returnValue = F("Bülter Weg");
        break;
    }
    case 69625:
    {
        returnValue = F("Bülterei");
        break;
    }
    case 69626:
    {
        returnValue = F("Bülterseestr.");
        break;
    }
    case 69627:
    {
        returnValue = F("Bültersweg");
        break;
    }
    case 69628:
    {
        returnValue = F("Bültesiek");
        break;
    }
    case 69629:
    {
        returnValue = F("Bültestr.");
        break;
    }
    case 69630:
    {
        returnValue = F("Bülteweg");
        break;
    }
    case 69631:
    {
        returnValue = F("Bültewinkel");
        break;
    }
    case 69632:
    {
        returnValue = F("Bülthausen");
        break;
    }
    case 69633:
    {
        returnValue = F("Bülthorst");
        break;
    }
    case 69634:
    {
        returnValue = F("Bültjes");
        break;
    }
    case 69635:
    {
        returnValue = F("Bültmannsweg");
        break;
    }
    case 69636:
    {
        returnValue = F("Bültsaal");
        break;
    }
    case 69637:
    {
        returnValue = F("Bültstiege");
        break;
    }
    case 69638:
    {
        returnValue = F("Bültstr.");
        break;
    }
    case 69639:
    {
        returnValue = F("Bültweg");
        break;
    }
    case 69640:
    {
        returnValue = F("Bülzenstr.");
        break;
    }
    case 69641:
    {
        returnValue = F("Bülziger Str.");
        break;
    }
    case 69642:
    {
        returnValue = F("Bümmersteder Str.");
        break;
    }
    case 69643:
    {
        returnValue = F("Büna");
        break;
    }
    case 69644:
    {
        returnValue = F("Bünaustr.");
        break;
    }
    case 69645:
    {
        returnValue = F("Bünd");
        break;
    }
    case 69646:
    {
        returnValue = F("Bündefeldstr.");
        break;
    }
    case 69647:
    {
        returnValue = F("Bündelgasse");
        break;
    }
    case 69648:
    {
        returnValue = F("Bündenfeldstr.");
        break;
    }
    case 69649:
    {
        returnValue = F("Bündengarten");
        break;
    }
    case 69650:
    {
        returnValue = F("Bündengaß");
        break;
    }
    case 69651:
    {
        returnValue = F("Bündenweg");
        break;
    }
    case 69652:
    {
        returnValue = F("Bünder Feldweg");
        break;
    }
    case 69653:
    {
        returnValue = F("Bünder Fußweg");
        break;
    }
    case 69654:
    {
        returnValue = F("Bünder Landweg");
        break;
    }
    case 69655:
    {
        returnValue = F("Bünder Str.");
        break;
    }
    case 69656:
    {
        returnValue = F("Bünder Welle");
        break;
    }
    case 69657:
    {
        returnValue = F("Bünderfeld");
        break;
    }
    case 69658:
    {
        returnValue = F("Bünderies");
        break;
    }
    case 69659:
    {
        returnValue = F("Bünderken");
        break;
    }
    case 69660:
    {
        returnValue = F("Bündertweg");
        break;
    }
    case 69661:
    {
        returnValue = F("Bündgenberg");
        break;
    }
    case 69662:
    {
        returnValue = F("Bündigershof");
        break;
    }
    case 69663:
    {
        returnValue = F("Bündlegasse");
        break;
    }
    case 69664:
    {
        returnValue = F("Bündorfer Str.");
        break;
    }
    case 69665:
    {
        returnValue = F("Bündstr.");
        break;
    }
    case 69666:
    {
        returnValue = F("Bündtenfeldstr.");
        break;
    }
    case 69667:
    {
        returnValue = F("Bündtenstr.");
        break;
    }
    case 69668:
    {
        returnValue = F("Bündtenweg");
        break;
    }
    case 69669:
    {
        returnValue = F("Bündtenäcker");
        break;
    }
    case 69670:
    {
        returnValue = F("Bündtstr.");
        break;
    }
    case 69671:
    {
        returnValue = F("Bündweg");
        break;
    }
    case 69672:
    {
        returnValue = F("Bünebüttler Weg");
        break;
    }
    case 69673:
    {
        returnValue = F("Büng");
        break;
    }
    case 69674:
    {
        returnValue = F("Büngeberg");
        break;
    }
    case 69675:
    {
        returnValue = F("Büngelerfeld");
        break;
    }
    case 69676:
    {
        returnValue = F("Büngelerstr.");
        break;
    }
    case 69677:
    {
        returnValue = F("Büngen");
        break;
    }
    case 69678:
    {
        returnValue = F("Büngenort");
        break;
    }
    case 69679:
    {
        returnValue = F("Büngers Kamp");
        break;
    }
    case 69680:
    {
        returnValue = F("Büngertchen");
        break;
    }
    case 69681:
    {
        returnValue = F("Bünghauser Str.");
        break;
    }
    case 69682:
    {
        returnValue = F("Bünighausen");
        break;
    }
    case 69683:
    {
        returnValue = F("Büninger Str.");
        break;
    }
    case 69684:
    {
        returnValue = F("Büninghausener Str.");
        break;
    }
    case 69685:
    {
        returnValue = F("Bünnagelring");
        break;
    }
    case 69686:
    {
        returnValue = F("Bünne");
        break;
    }
    case 69687:
    {
        returnValue = F("Bünnebergstr.");
        break;
    }
    case 69688:
    {
        returnValue = F("Bünner Ringstr.");
        break;
    }
    case 69689:
    {
        returnValue = F("Bünningstedter Feldweg");
        break;
    }
    case 69690:
    {
        returnValue = F("Bünningstedter Str.");
        break;
    }
    case 69691:
    {
        returnValue = F("Bünnweg");
        break;
    }
    case 69692:
    {
        returnValue = F("Bünsche");
        break;
    }
    case 69693:
    {
        returnValue = F("Bünschheimer Weg");
        break;
    }
    case 69694:
    {
        returnValue = F("Bünsdorfer Str.");
        break;
    }
    case 69695:
    {
        returnValue = F("Bünshagen");
        break;
    }
    case 69696:
    {
        returnValue = F("Bünstorfer Weg");
        break;
    }
    case 69697:
    {
        returnValue = F("Büntberg");
        break;
    }
    case 69698:
    {
        returnValue = F("Bünte");
        break;
    }
    case 69699:
    {
        returnValue = F("Bünte Rundweg");
        break;
    }
    case 69700:
    {
        returnValue = F("Büntefeldstr.");
        break;
    }
    case 69701:
    {
        returnValue = F("Büntenweg");
        break;
    }
    case 69702:
    {
        returnValue = F("Büntestr.");
        break;
    }
    case 69703:
    {
        returnValue = F("Bünteweg");
        break;
    }
    case 69704:
    {
        returnValue = F("Büntfeld");
        break;
    }
    case 69705:
    {
        returnValue = F("Büntheck");
        break;
    }
    case 69706:
    {
        returnValue = F("Büntingsweg");
        break;
    }
    case 69707:
    {
        returnValue = F("Büntloh");
        break;
    }
    case 69708:
    {
        returnValue = F("Büntstr.");
        break;
    }
    case 69709:
    {
        returnValue = F("Büntstreek");
        break;
    }
    case 69710:
    {
        returnValue = F("Büntweg");
        break;
    }
    case 69711:
    {
        returnValue = F("Bünzer Str.");
        break;
    }
    case 69712:
    {
        returnValue = F("Bünzerfeld");
        break;
    }
    case 69713:
    {
        returnValue = F("Bünzwanger Str.");
        break;
    }
    case 69714:
    {
        returnValue = F("Büppeler Weg");
        break;
    }
    case 69715:
    {
        returnValue = F("Bürabergstr.");
        break;
    }
    case 69716:
    {
        returnValue = F("Bürchauerweg");
        break;
    }
    case 69717:
    {
        returnValue = F("Bürchen");
        break;
    }
    case 69718:
    {
        returnValue = F("Bürchleweg");
        break;
    }
    case 69719:
    {
        returnValue = F("Bürchner Weg");
        break;
    }
    case 69720:
    {
        returnValue = F("Bürdenbacher Str.");
        break;
    }
    case 69721:
    {
        returnValue = F("Bürdener Str.");
        break;
    }
    case 69722:
    {
        returnValue = F("Bürdestr.");
        break;
    }
    case 69723:
    {
        returnValue = F("Bürdunger Str.");
        break;
    }
    case 69724:
    {
        returnValue = F("Büren");
        break;
    }
    case 69725:
    {
        returnValue = F("Bürenbruch");
        break;
    }
    case 69726:
    {
        returnValue = F("Bürenbrucher Weg");
        break;
    }
    case 69727:
    {
        returnValue = F("Bürener Brok");
        break;
    }
    case 69728:
    {
        returnValue = F("Bürener Damm");
        break;
    }
    case 69729:
    {
        returnValue = F("Bürener Str.");
        break;
    }
    case 69730:
    {
        returnValue = F("Bürener Triftweg");
        break;
    }
    case 69731:
    {
        returnValue = F("Bürener Weg");
        break;
    }
    case 69732:
    {
        returnValue = F("Bürenstr.");
        break;
    }
    case 69733:
    {
        returnValue = F("Bürenweg");
        break;
    }
    case 69734:
    {
        returnValue = F("Büreten");
        break;
    }
    case 69735:
    {
        returnValue = F("Büretenmattweg");
        break;
    }
    case 69736:
    {
        returnValue = F("Bürg");
        break;
    }
    case 69737:
    {
        returnValue = F("Bürgackerstr.");
        break;
    }
    case 69738:
    {
        returnValue = F("Bürgeler Str.");
        break;
    }
    case 69739:
    {
        returnValue = F("Bürgelerweg");
        break;
    }
    case 69740:
    {
        returnValue = F("Bürgelnblick");
        break;
    }
    case 69741:
    {
        returnValue = F("Bürgelnstr.");
        break;
    }
    case 69742:
    {
        returnValue = F("Bürgelnweg");
        break;
    }
    case 69743:
    {
        returnValue = F("Bürgelplatten-Weg");
        break;
    }
    case 69744:
    {
        returnValue = F("Bürgelsche Str.");
        break;
    }
    case 69745:
    {
        returnValue = F("Bürgelstr.");
        break;
    }
    case 69746:
    {
        returnValue = F("Bürgelweg");
        break;
    }
    case 69747:
    {
        returnValue = F("Bürgensweg");
        break;
    }
    case 69748:
    {
        returnValue = F("Bürgenweg");
        break;
    }
    case 69749:
    {
        returnValue = F("Bürger Park");
        break;
    }
    case 69750:
    {
        returnValue = F("Bürger Str.");
        break;
    }
    case 69751:
    {
        returnValue = F("Bürger-Natur-Park");
        break;
    }
    case 69752:
    {
        returnValue = F("Bürger-Schützen-Allee");
        break;
    }
    case 69753:
    {
        returnValue = F("Bürger-Waldpark");
        break;
    }
    case 69754:
    {
        returnValue = F("Bürgerallee");
        break;
    }
    case 69755:
    {
        returnValue = F("Bürgeraue");
        break;
    }
    case 69756:
    {
        returnValue = F("Bürgerbrücke");
        break;
    }
    case 69757:
    {
        returnValue = F("Bürgerei");
        break;
    }
    case 69758:
    {
        returnValue = F("Bürgerende");
        break;
    }
    case 69759:
    {
        returnValue = F("Bürgerfeldstr.");
        break;
    }
    case 69760:
    {
        returnValue = F("Bürgerfeldweg");
        break;
    }
    case 69761:
    {
        returnValue = F("Bürgergang");
        break;
    }
    case 69762:
    {
        returnValue = F("Bürgergarten");
        break;
    }
    case 69763:
    {
        returnValue = F("Bürgergartengasse");
        break;
    }
    case 69764:
    {
        returnValue = F("Bürgergartenstr.");
        break;
    }
    case 69765:
    {
        returnValue = F("Bürgergasse");
        break;
    }
    case 69766:
    {
        returnValue = F("Bürgergärten");
        break;
    }
    case 69767:
    {
        returnValue = F("Bürgerhaus");
        break;
    }
    case 69768:
    {
        returnValue = F("Bürgerhausgarten");
        break;
    }
    case 69769:
    {
        returnValue = F("Bürgerhauspassage");
        break;
    }
    case 69770:
    {
        returnValue = F("Bürgerhausplatz");
        break;
    }
    case 69771:
    {
        returnValue = F("Bürgerhausstr.");
        break;
    }
    case 69772:
    {
        returnValue = F("Bürgerheimstr.");
        break;
    }
    case 69773:
    {
        returnValue = F("Bürgerhofweg");
        break;
    }
    case 69774:
    {
        returnValue = F("Bürgerholz");
        break;
    }
    case 69775:
    {
        returnValue = F("Bürgerholzweg");
        break;
    }
    case 69776:
    {
        returnValue = F("Bürgerhorststr.");
        break;
    }
    case 69777:
    {
        returnValue = F("Bürgerhöhe");
        break;
    }
    case 69778:
    {
        returnValue = F("Bürgerloch");
        break;
    }
    case 69779:
    {
        returnValue = F("Bürgerm.-Heußlein-Str.");
        break;
    }
    case 69780:
    {
        returnValue = F("Bürgerm.-Schwinnen-Str.");
        break;
    }
    case 69781:
    {
        returnValue = F("Bürgermeister Brecht Ring");
        break;
    }
    case 69782:
    {
        returnValue = F("Bürgermeister Drinkuth Str.");
        break;
    }
    case 69783:
    {
        returnValue = F("Bürgermeister Fritz-Klennert-Weg");
        break;
    }
    case 69784:
    {
        returnValue = F("Bürgermeister Heimbrand Str.");
        break;
    }
    case 69785:
    {
        returnValue = F("Bürgermeister Heinrich Zülch Weg");
        break;
    }
    case 69786:
    {
        returnValue = F("Bürgermeister Pape Str.");
        break;
    }
    case 69787:
    {
        returnValue = F("Bürgermeister Stieg");
        break;
    }
    case 69788:
    {
        returnValue = F("Bürgermeister Weg");
        break;
    }
    case 69789:
    {
        returnValue = F("Bürgermeister Wirsching Str.");
        break;
    }
    case 69790:
    {
        returnValue = F("Bürgermeister-Ackermann-Str.");
        break;
    }
    case 69791:
    {
        returnValue = F("Bürgermeister-Adam-Str.");
        break;
    }
    case 69792:
    {
        returnValue = F("Bürgermeister-Adolf-Martens-Str.");
        break;
    }
    case 69793:
    {
        returnValue = F("Bürgermeister-Adolf-Meyer-Str.");
        break;
    }
    case 69794:
    {
        returnValue = F("Bürgermeister-Ahnemann-Str.");
        break;
    }
    case 69795:
    {
        returnValue = F("Bürgermeister-Ahnert-Platz");
        break;
    }
    case 69796:
    {
        returnValue = F("Bürgermeister-Ahrens-Ring");
        break;
    }
    case 69797:
    {
        returnValue = F("Bürgermeister-Aichele-Weg");
        break;
    }
    case 69798:
    {
        returnValue = F("Bürgermeister-Aigner-Weg");
        break;
    }
    case 69799:
    {
        returnValue = F("Bürgermeister-Albert-Str.");
        break;
    }
    case 69800:
    {
        returnValue = F("Bürgermeister-Altschäffel-Str.");
        break;
    }
    case 69801:
    {
        returnValue = F("Bürgermeister-Amann-Str.");
        break;
    }
    case 69802:
    {
        returnValue = F("Bürgermeister-Andreas-Müller-Str.");
        break;
    }
    case 69803:
    {
        returnValue = F("Bürgermeister-Ankner-Str.");
        break;
    }
    case 69804:
    {
        returnValue = F("Bürgermeister-Anton-Lindner-Str.");
        break;
    }
    case 69805:
    {
        returnValue = F("Bürgermeister-Anton-Mayer-Str.");
        break;
    }
    case 69806:
    {
        returnValue = F("Bürgermeister-Armin-Stoltenberg-Str.");
        break;
    }
    case 69807:
    {
        returnValue = F("Bürgermeister-Arnold-Str.");
        break;
    }
    case 69808:
    {
        returnValue = F("Bürgermeister-Asam-Str.");
        break;
    }
    case 69809:
    {
        returnValue = F("Bürgermeister-August-Bötger-Weg");
        break;
    }
    case 69810:
    {
        returnValue = F("Bürgermeister-August-Otte-Str.");
        break;
    }
    case 69811:
    {
        returnValue = F("Bürgermeister-Bach-Str.");
        break;
    }
    case 69812:
    {
        returnValue = F("Bürgermeister-Bachmann-Str.");
        break;
    }
    case 69813:
    {
        returnValue = F("Bürgermeister-Bachmeier-Str.");
        break;
    }
    case 69814:
    {
        returnValue = F("Bürgermeister-Bade-Platz");
        break;
    }
    case 69815:
    {
        returnValue = F("Bürgermeister-Bader-Str.");
        break;
    }
    case 69816:
    {
        returnValue = F("Bürgermeister-Bader-Weg");
        break;
    }
    case 69817:
    {
        returnValue = F("Bürgermeister-Baldauf-Str.");
        break;
    }
    case 69818:
    {
        returnValue = F("Bürgermeister-Bals-Str.");
        break;
    }
    case 69819:
    {
        returnValue = F("Bürgermeister-Banse-Weg");
        break;
    }
    case 69820:
    {
        returnValue = F("Bürgermeister-Bartel-Str.");
        break;
    }
    case 69821:
    {
        returnValue = F("Bürgermeister-Barth-Str.");
        break;
    }
    case 69822:
    {
        returnValue = F("Bürgermeister-Bauer-Str.");
        break;
    }
    case 69823:
    {
        returnValue = F("Bürgermeister-Bauer-Weg");
        break;
    }
    case 69824:
    {
        returnValue = F("Bürgermeister-Baumgärtner-Str.");
        break;
    }
    case 69825:
    {
        returnValue = F("Bürgermeister-Bawidamann-Str.");
        break;
    }
    case 69826:
    {
        returnValue = F("Bürgermeister-Bayer-Str.");
        break;
    }
    case 69827:
    {
        returnValue = F("Bürgermeister-Becker-Str.");
        break;
    }
    case 69828:
    {
        returnValue = F("Bürgermeister-Beheim-Str.");
        break;
    }
    case 69829:
    {
        returnValue = F("Bürgermeister-Bellersen-Str.");
        break;
    }
    case 69830:
    {
        returnValue = F("Bürgermeister-Benecke-Str.");
        break;
    }
    case 69831:
    {
        returnValue = F("Bürgermeister-Beninga-Str.");
        break;
    }
    case 69832:
    {
        returnValue = F("Bürgermeister-Bentlohner-Str.");
        break;
    }
    case 69833:
    {
        returnValue = F("Bürgermeister-Benz-Str.");
        break;
    }
    case 69834:
    {
        returnValue = F("Bürgermeister-Berendt-Weg");
        break;
    }
    case 69835:
    {
        returnValue = F("Bürgermeister-Berger-Str.");
        break;
    }
    case 69836:
    {
        returnValue = F("Bürgermeister-Bernard-Str.");
        break;
    }
    case 69837:
    {
        returnValue = F("Bürgermeister-Bertsch-Ring");
        break;
    }
    case 69838:
    {
        returnValue = F("Bürgermeister-Bessert-Weg");
        break;
    }
    case 69839:
    {
        returnValue = F("Bürgermeister-Betz-Str.");
        break;
    }
    case 69840:
    {
        returnValue = F("Bürgermeister-Beyhl-Str.");
        break;
    }
    case 69841:
    {
        returnValue = F("Bürgermeister-Biber-Str.");
        break;
    }
    case 69842:
    {
        returnValue = F("Bürgermeister-Birkmüller-Str.");
        break;
    }
    case 69843:
    {
        returnValue = F("Bürgermeister-Birnthaler-Str.");
        break;
    }
    case 69844:
    {
        returnValue = F("Bürgermeister-Bitting-Str.");
        break;
    }
    case 69845:
    {
        returnValue = F("Bürgermeister-Bleimayr-Str.");
        break;
    }
    case 69846:
    {
        returnValue = F("Bürgermeister-Bleis-Weg");
        break;
    }
    case 69847:
    {
        returnValue = F("Bürgermeister-Block-Str.");
        break;
    }
    case 69848:
    {
        returnValue = F("Bürgermeister-Bock-Str.");
        break;
    }
    case 69849:
    {
        returnValue = F("Bürgermeister-Bodmeier-Str.");
        break;
    }
    case 69850:
    {
        returnValue = F("Bürgermeister-Bombeck-Str.");
        break;
    }
    case 69851:
    {
        returnValue = F("Bürgermeister-Bormann-Weg");
        break;
    }
    case 69852:
    {
        returnValue = F("Bürgermeister-Bosch-Str.");
        break;
    }
    case 69853:
    {
        returnValue = F("Bürgermeister-Braden-Str.");
        break;
    }
    case 69854:
    {
        returnValue = F("Bürgermeister-Brandt-Str.");
        break;
    }
    case 69855:
    {
        returnValue = F("Bürgermeister-Brantl-Str.");
        break;
    }
    case 69856:
    {
        returnValue = F("Bürgermeister-Braumiller-Str.");
        break;
    }
    case 69857:
    {
        returnValue = F("Bürgermeister-Braun-Str.");
        break;
    }
    case 69858:
    {
        returnValue = F("Bürgermeister-Brennecke-Allee");
        break;
    }
    case 69859:
    {
        returnValue = F("Bürgermeister-Breyel-Weg");
        break;
    }
    case 69860:
    {
        returnValue = F("Bürgermeister-Brinkmann-Weg");
        break;
    }
    case 69861:
    {
        returnValue = F("Bürgermeister-Bronnenmaier-Str.");
        break;
    }
    case 69862:
    {
        returnValue = F("Bürgermeister-Bruder-Str.");
        break;
    }
    case 69863:
    {
        returnValue = F("Bürgermeister-Bruhn-Str.");
        break;
    }
    case 69864:
    {
        returnValue = F("Bürgermeister-Brunner-Str.");
        break;
    }
    case 69865:
    {
        returnValue = F("Bürgermeister-Bruns-Str.");
        break;
    }
    case 69866:
    {
        returnValue = F("Bürgermeister-Brötje-Str.");
        break;
    }
    case 69867:
    {
        returnValue = F("Bürgermeister-Bucher-Str.");
        break;
    }
    case 69868:
    {
        returnValue = F("Bürgermeister-Buckeley-Str.");
        break;
    }
    case 69869:
    {
        returnValue = F("Bürgermeister-Burgdorf-Str.");
        break;
    }
    case 69870:
    {
        returnValue = F("Bürgermeister-Busemann-Str.");
        break;
    }
    case 69871:
    {
        returnValue = F("Bürgermeister-Bäuml-Str.");
        break;
    }
    case 69872:
    {
        returnValue = F("Bürgermeister-Böckmann-Str.");
        break;
    }
    case 69873:
    {
        returnValue = F("Bürgermeister-Böhmer-Str.");
        break;
    }
    case 69874:
    {
        returnValue = F("Bürgermeister-Böke-Str.");
        break;
    }
    case 69875:
    {
        returnValue = F("Bürgermeister-Bösl-Str.");
        break;
    }
    case 69876:
    {
        returnValue = F("Bürgermeister-Carl-Kraft-Str.");
        break;
    }
    case 69877:
    {
        returnValue = F("Bürgermeister-Christel-Str.");
        break;
    }
    case 69878:
    {
        returnValue = F("Bürgermeister-Christmann-Str.");
        break;
    }
    case 69879:
    {
        returnValue = F("Bürgermeister-Connemann-Str.");
        break;
    }
    case 69880:
    {
        returnValue = F("Bürgermeister-Coopmann-Weg");
        break;
    }
    case 69881:
    {
        returnValue = F("Bürgermeister-Daffner-Str.");
        break;
    }
    case 69882:
    {
        returnValue = F("Bürgermeister-Dahse-Str.");
        break;
    }
    case 69883:
    {
        returnValue = F("Bürgermeister-Daub-Str.");
        break;
    }
    case 69884:
    {
        returnValue = F("Bürgermeister-Daum-Platz");
        break;
    }
    case 69885:
    {
        returnValue = F("Bürgermeister-Deffner-Str.");
        break;
    }
    case 69886:
    {
        returnValue = F("Bürgermeister-Degen-Str.");
        break;
    }
    case 69887:
    {
        returnValue = F("Bürgermeister-Delling-Str.");
        break;
    }
    case 69888:
    {
        returnValue = F("Bürgermeister-Demharter-Str.");
        break;
    }
    case 69889:
    {
        returnValue = F("Bürgermeister-Demuth-Allee");
        break;
    }
    case 69890:
    {
        returnValue = F("Bürgermeister-Dieckmann-Str.");
        break;
    }
    case 69891:
    {
        returnValue = F("Bürgermeister-Diehl-Str.");
        break;
    }
    case 69892:
    {
        returnValue = F("Bürgermeister-Dielhenn-Str.");
        break;
    }
    case 69893:
    {
        returnValue = F("Bürgermeister-Diercks-Str.");
        break;
    }
    case 69894:
    {
        returnValue = F("Bürgermeister-Dimpfl-Str.");
        break;
    }
    case 69895:
    {
        returnValue = F("Bürgermeister-Dirksen-Platz");
        break;
    }
    case 69896:
    {
        returnValue = F("Bürgermeister-Dirscherl-Str.");
        break;
    }
    case 69897:
    {
        returnValue = F("Bürgermeister-Dischler-Str.");
        break;
    }
    case 69898:
    {
        returnValue = F("Bürgermeister-Doktor-Dahlem-Str.");
        break;
    }
    case 69899:
    {
        returnValue = F("Bürgermeister-Doktor-Hartmann-Str.");
        break;
    }
    case 69900:
    {
        returnValue = F("Bürgermeister-Doktor-Hauptmann-Ring");
        break;
    }
    case 69901:
    {
        returnValue = F("Bürgermeister-Doktor-Moser-Str.");
        break;
    }
    case 69902:
    {
        returnValue = F("Bürgermeister-Donderer-Str.");
        break;
    }
    case 69903:
    {
        returnValue = F("Bürgermeister-Dorn-Str.");
        break;
    }
    case 69904:
    {
        returnValue = F("Bürgermeister-Dr.-Altmann-Str.");
        break;
    }
    case 69905:
    {
        returnValue = F("Bürgermeister-Dr.-Anton-Geier-Str.");
        break;
    }
    case 69906:
    {
        returnValue = F("Bürgermeister-Dr.-Rausch-Str.");
        break;
    }
    case 69907:
    {
        returnValue = F("Bürgermeister-Dr.-Schleicher-Str.");
        break;
    }
    case 69908:
    {
        returnValue = F("Bürgermeister-Drach-Ring");
        break;
    }
    case 69909:
    {
        returnValue = F("Bürgermeister-Drewes-Str.");
        break;
    }
    case 69910:
    {
        returnValue = F("Bürgermeister-Drews-Str.");
        break;
    }
    case 69911:
    {
        returnValue = F("Bürgermeister-Drexler-Bogen");
        break;
    }
    case 69912:
    {
        returnValue = F("Bürgermeister-Drexler-Str.");
        break;
    }
    case 69913:
    {
        returnValue = F("Bürgermeister-Drey-Str.");
        break;
    }
    case 69914:
    {
        returnValue = F("Bürgermeister-Döbler-Allee");
        break;
    }
    case 69915:
    {
        returnValue = F("Bürgermeister-Dörjes-Ring");
        break;
    }
    case 69916:
    {
        returnValue = F("Bürgermeister-Eberhart-Str.");
        break;
    }
    case 69917:
    {
        returnValue = F("Bürgermeister-Eberl-Str.");
        break;
    }
    case 69918:
    {
        returnValue = F("Bürgermeister-Eberl-Weg");
        break;
    }
    case 69919:
    {
        returnValue = F("Bürgermeister-Eberle-Str.");
        break;
    }
    case 69920:
    {
        returnValue = F("Bürgermeister-Eberle-Weg");
        break;
    }
    case 69921:
    {
        returnValue = F("Bürgermeister-Ebert-Str.");
        break;
    }
    case 69922:
    {
        returnValue = F("Bürgermeister-Edelmann-Str.");
        break;
    }
    case 69923:
    {
        returnValue = F("Bürgermeister-Egger-Str.");
        break;
    }
    case 69924:
    {
        returnValue = F("Bürgermeister-Eggers-Str.");
        break;
    }
    case 69925:
    {
        returnValue = F("Bürgermeister-Eggerstedt-Weg");
        break;
    }
    case 69926:
    {
        returnValue = F("Bürgermeister-Ehlers-Str.");
        break;
    }
    case 69927:
    {
        returnValue = F("Bürgermeister-Ehrl-Ring");
        break;
    }
    case 69928:
    {
        returnValue = F("Bürgermeister-Ehrlenholtz-Str.");
        break;
    }
    case 69929:
    {
        returnValue = F("Bürgermeister-Eichberger-Str.");
        break;
    }
    case 69930:
    {
        returnValue = F("Bürgermeister-Eickmann-Weg");
        break;
    }
    case 69931:
    {
        returnValue = F("Bürgermeister-Eilts-Str.");
        break;
    }
    case 69932:
    {
        returnValue = F("Bürgermeister-Ekkehard-Sachse-Platz");
        break;
    }
    case 69933:
    {
        returnValue = F("Bürgermeister-Elfinger-Weg");
        break;
    }
    case 69934:
    {
        returnValue = F("Bürgermeister-Elhbeck-Str.");
        break;
    }
    case 69935:
    {
        returnValue = F("Bürgermeister-Ellers-Str.");
        break;
    }
    case 69936:
    {
        returnValue = F("Bürgermeister-Engel-Siedlung");
        break;
    }
    case 69937:
    {
        returnValue = F("Bürgermeister-Epple-Str.");
        break;
    }
    case 69938:
    {
        returnValue = F("Bürgermeister-Erdmann-Str.");
        break;
    }
    case 69939:
    {
        returnValue = F("Bürgermeister-Erhard-Str.");
        break;
    }
    case 69940:
    {
        returnValue = F("Bürgermeister-Erker-Str.");
        break;
    }
    case 69941:
    {
        returnValue = F("Bürgermeister-Erl-Str.");
        break;
    }
    case 69942:
    {
        returnValue = F("Bürgermeister-Erlinger-Str.");
        break;
    }
    case 69943:
    {
        returnValue = F("Bürgermeister-Ernst-Müller-Weg");
        break;
    }
    case 69944:
    {
        returnValue = F("Bürgermeister-Ertl-Str.");
        break;
    }
    case 69945:
    {
        returnValue = F("Bürgermeister-Esch-Str.");
        break;
    }
    case 69946:
    {
        returnValue = F("Bürgermeister-Eschenbach-Allee");
        break;
    }
    case 69947:
    {
        returnValue = F("Bürgermeister-Ettl-Str.");
        break;
    }
    case 69948:
    {
        returnValue = F("Bürgermeister-Ewald-Butz-Str.");
        break;
    }
    case 69949:
    {
        returnValue = F("Bürgermeister-Ewert-Str.");
        break;
    }
    case 69950:
    {
        returnValue = F("Bürgermeister-F.-Fischer-Str.");
        break;
    }
    case 69951:
    {
        returnValue = F("Bürgermeister-Fackler-Str.");
        break;
    }
    case 69952:
    {
        returnValue = F("Bürgermeister-Falch-Str.");
        break;
    }
    case 69953:
    {
        returnValue = F("Bürgermeister-Faltermaier-Str.");
        break;
    }
    case 69954:
    {
        returnValue = F("Bürgermeister-Faull-Str.");
        break;
    }
    case 69955:
    {
        returnValue = F("Bürgermeister-Fehrs-Str.");
        break;
    }
    case 69956:
    {
        returnValue = F("Bürgermeister-Feigel-Str.");
        break;
    }
    case 69957:
    {
        returnValue = F("Bürgermeister-Feilke-Str.");
        break;
    }
    case 69958:
    {
        returnValue = F("Bürgermeister-Feldbauer-Str.");
        break;
    }
    case 69959:
    {
        returnValue = F("Bürgermeister-Fendt-Str.");
        break;
    }
    case 69960:
    {
        returnValue = F("Bürgermeister-Ferdinand-Eden-Str.");
        break;
    }
    case 69961:
    {
        returnValue = F("Bürgermeister-Fergg-Str.");
        break;
    }
    case 69962:
    {
        returnValue = F("Bürgermeister-Fichtner-Str.");
        break;
    }
    case 69963:
    {
        returnValue = F("Bürgermeister-Fickler-Weg");
        break;
    }
    case 69964:
    {
        returnValue = F("Bürgermeister-Fiedler-Ring");
        break;
    }
    case 69965:
    {
        returnValue = F("Bürgermeister-Fink-Str.");
        break;
    }
    case 69966:
    {
        returnValue = F("Bürgermeister-Finsterwalder-Ring");
        break;
    }
    case 69967:
    {
        returnValue = F("Bürgermeister-Fischer-Str.");
        break;
    }
    case 69968:
    {
        returnValue = F("Bürgermeister-Fischl-Str.");
        break;
    }
    case 69969:
    {
        returnValue = F("Bürgermeister-Flach-Str.");
        break;
    }
    case 69970:
    {
        returnValue = F("Bürgermeister-Fleischmann-Str.");
        break;
    }
    case 69971:
    {
        returnValue = F("Bürgermeister-Fox-Str.");
        break;
    }
    case 69972:
    {
        returnValue = F("Bürgermeister-Frantz-Str.");
        break;
    }
    case 69973:
    {
        returnValue = F("Bürgermeister-Franz-Ditsch-Str.");
        break;
    }
    case 69974:
    {
        returnValue = F("Bürgermeister-Franz-Keller-Str.");
        break;
    }
    case 69975:
    {
        returnValue = F("Bürgermeister-Franz-Pfiffner-Weg");
        break;
    }
    case 69976:
    {
        returnValue = F("Bürgermeister-Franz-Rappel-Weg");
        break;
    }
    case 69977:
    {
        returnValue = F("Bürgermeister-Franz-Str.");
        break;
    }
    case 69978:
    {
        returnValue = F("Bürgermeister-Franz-Witzel-Str.");
        break;
    }
    case 69979:
    {
        returnValue = F("Bürgermeister-Freese-Str.");
        break;
    }
    case 69980:
    {
        returnValue = F("Bürgermeister-Frese-Ring");
        break;
    }
    case 69981:
    {
        returnValue = F("Bürgermeister-Freymüller-Str.");
        break;
    }
    case 69982:
    {
        returnValue = F("Bürgermeister-Frisch-Platz");
        break;
    }
    case 69983:
    {
        returnValue = F("Bürgermeister-Fritz-Horst-Platz");
        break;
    }
    case 69984:
    {
        returnValue = F("Bürgermeister-Frye-Str.");
        break;
    }
    case 69985:
    {
        returnValue = F("Bürgermeister-Fröber-Weg");
        break;
    }
    case 69986:
    {
        returnValue = F("Bürgermeister-Fröhlich-Str.");
        break;
    }
    case 69987:
    {
        returnValue = F("Bürgermeister-Fuchs-Str.");
        break;
    }
    case 69988:
    {
        returnValue = F("Bürgermeister-Fuglein-Str.");
        break;
    }
    case 69989:
    {
        returnValue = F("Bürgermeister-Fuhrmann-Str.");
        break;
    }
    case 69990:
    {
        returnValue = F("Bürgermeister-Funk-Ring");
        break;
    }
    case 69991:
    {
        returnValue = F("Bürgermeister-Funk-Str.");
        break;
    }
    case 69992:
    {
        returnValue = F("Bürgermeister-Förg-Str.");
        break;
    }
    case 69993:
    {
        returnValue = F("Bürgermeister-Förtsch-Str.");
        break;
    }
    case 69994:
    {
        returnValue = F("Bürgermeister-Ganterer-Weg");
        break;
    }
    case 69995:
    {
        returnValue = F("Bürgermeister-Gantner-Str.");
        break;
    }
    case 69996:
    {
        returnValue = F("Bürgermeister-Garms-Str.");
        break;
    }
    case 69997:
    {
        returnValue = F("Bürgermeister-Gasteiger-Str.");
        break;
    }
    case 69998:
    {
        returnValue = F("Bürgermeister-Gebhardt-Str.");
        break;
    }
    case 69999:
    {
        returnValue = F("Bürgermeister-Geier-Str.");
        break;
    }
    case 70000:
    {
        returnValue = F("Bürgermeister-Gellmers-Str.");
        break;
    }
    case 70001:
    {
        returnValue = F("Bürgermeister-Georg-Baust-Str.");
        break;
    }
    case 70002:
    {
        returnValue = F("Bürgermeister-Georg-Hiltmair-Str.");
        break;
    }
    case 70003:
    {
        returnValue = F("Bürgermeister-Georg-Quick-Str.");
        break;
    }
    case 70004:
    {
        returnValue = F("Bürgermeister-Gerfried-Klitz-Park");
        break;
    }
    case 70005:
    {
        returnValue = F("Bürgermeister-Gertenbach-Str.");
        break;
    }
    case 70006:
    {
        returnValue = F("Bürgermeister-Gierisch-Str.");
        break;
    }
    }
    return returnValue;
}
